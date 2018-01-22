/*
 * name:        L2G2IS
 * description: MEMS motion sensor: Ultra-compact two-axis gyroscope for optical image stabilization
 * manuf:       STMicroelectronics
 * version:     Version 0.1
 * url:         http://www.st.com/resource/en/datasheet/l2g2is.pdf
 * date:        2018-01-22
 * author       https://chisl.io/
 * file:        L2G2IS.hpp
 */

/*                                                                                                       *
 *                                   THIS FILE IS AUTOMATICALLY CREATED                                  *
 *                                    D O     N O T     M O D I F Y  !                                   *
 *                                                                                                       */

#include <cinttypes>

/* Derive from class L2G2IS_Base and implement the read and write functions! */

/* L2G2IS: MEMS motion sensor: Ultra-compact two-axis gyroscope for optical image stabilization */
class L2G2IS_Base
{
public:
	/* Pure virtual functions that need to be implemented in derived class: */
	virtual uint8_t read8(uint16_t address, uint16_t n=8) = 0;  // 8 bit read
	virtual void write(uint16_t address, uint8_t value, uint16_t n=8) = 0;  // 8 bit write
	virtual uint16_t read16(uint16_t address, uint16_t n=16) = 0;  // 16 bit read
	virtual void write(uint16_t address, uint16_t value, uint16_t n=16) = 0;  // 16 bit write
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                           REG WHO_AM_I                                            *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/*
	 * REG WHO_AM_I:
	 * 7.1
	 */
	struct WHO_AM_I
	{
		static const uint16_t __address = 0;
		
		/* Bits WHO_AM_I: */
		struct WHO_AM_I_
		{
			/* MODE r */
			static const uint8_t dflt = 0b11011001; // 8'b11011001
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register WHO_AM_I */
	void setWHO_AM_I(uint8_t value)
	{
		write(WHO_AM_I::__address, value, 8);
	}
	
	/* Get register WHO_AM_I */
	uint8_t getWHO_AM_I()
	{
		return read8(WHO_AM_I::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                           REG TEMP_OUT                                            *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/*
	 * REG TEMP_OUT:
	 * 7.2
	 */
	struct TEMP_OUT
	{
		static const uint16_t __address = 1;
		
		/* Bits TEMP_OUT: */
		/*
		 * Temperature data.
		 * Refer to: Section 2.4: Temperature sensor on how to read the temperature
		 * sensor output data.
		 */
		struct TEMP_OUT_
		{
			/* MODE r */
			static const uint16_t mask = 0b1111111111110000; // [4,5,6,7,8,9,10,11,12,13,14,15]
		};
		/* Bits unused_0: */
		struct unused_0
		{
			/* MODE r */
			static const uint16_t dflt = 0b0000; // 4'h0
			static const uint16_t mask = 0b0000000000001111; // [0,1,2,3]
		};
	};
	
	/* Set register TEMP_OUT */
	void setTEMP_OUT(uint16_t value)
	{
		write(TEMP_OUT::__address, value, 16);
	}
	
	/* Get register TEMP_OUT */
	uint16_t getTEMP_OUT()
	{
		return read16(TEMP_OUT::__address, 16);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                            REG OUT_X                                             *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/*
	 * REG OUT_X:
	 * 7.3 X-axis angular rate data. The value is expressed as two’s complement.
	 */
	struct OUT_X
	{
		static const uint16_t __address = 3;
		
		/* Bits OUT_X: */
		struct OUT_X_
		{
			/* MODE r */
			static const uint16_t mask = 0b1111111111111111; // [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15]
		};
	};
	
	/* Set register OUT_X */
	void setOUT_X(uint16_t value)
	{
		write(OUT_X::__address, value, 16);
	}
	
	/* Get register OUT_X */
	uint16_t getOUT_X()
	{
		return read16(OUT_X::__address, 16);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                            REG OUT_Y                                             *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/*
	 * REG OUT_Y:
	 * 7.4 Y-axis angular rate data. The value is expressed as two’s complement.
	 */
	struct OUT_Y
	{
		static const uint16_t __address = 5;
		
		/* Bits OUT_Y: */
		struct OUT_Y_
		{
			/* MODE r */
			static const uint16_t mask = 0b1111111111111111; // [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15]
		};
	};
	
	/* Set register OUT_Y */
	void setOUT_Y(uint16_t value)
	{
		write(OUT_Y::__address, value, 16);
	}
	
	/* Get register OUT_Y */
	uint16_t getOUT_Y()
	{
		return read16(OUT_Y::__address, 16);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                          REG STATUS_REG                                           *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG STATUS_REG:
	 */
	struct STATUS_REG
	{
		static const uint16_t __address = 9;
		
		/* Bits XYOR: */
		/* X-, Y-axis data overrun.  */
		struct XYOR
		{
			/* MODE r */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
			static const uint8_t NO_OVERRUN = 0b0; // no overrun has occurred
			static const uint8_t OVERWRITTEN = 0b1; // a new set of data has overwritten the previous set before the read
		};
		/* Bits XOR: */
		/* X-axis data overrun.   */
		struct XOR
		{
			/* MODE r */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b01000000; // [6]
			static const uint8_t NO_OVERRUN = 0b0; // no overrun has occurred;
			static const uint8_t OVERWRITTEN = 0b1; // new X-axis data has overwritten a previous value before the read
		};
		/* Bits YOR: */
		/* Y-axis data overrun.  */
		struct YOR
		{
			/* MODE r */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00100000; // [5]
			static const uint8_t NOT_AVAILABLE = 0b0; // a new set of data (X,Y axes) is not yet available
			static const uint8_t AVAILABLE = 0b1; // a new set of data (X,Y axes) is available
		};
		/* Bits unused_0: */
		struct unused_0
		{
			/* MODE r */
			static const uint8_t dflt = 0b0; // 1'd0
			static const uint8_t mask = 0b00010000; // [4]
		};
		/* Bits XYDA: */
		/* X-, Y-axis new data available.  */
		struct XYDA
		{
			/* MODE r */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00001000; // [3]
			static const uint8_t NOT_AVAILABLE = 0b0; // a new set of data (X,Y axes) is not yet available
			static const uint8_t AVAILABLE = 0b1; // a new set of data (X,Y axes) is available
		};
		/* Bits XDA: */
		/* X-axis new data available.  */
		struct XDA
		{
			/* MODE r */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000100; // [2]
			static const uint8_t NOT_AVAILABLE = 0b0; // new data for the X-axis is not yet available
			static const uint8_t AVAILABLE = 0b1; // new data for the X-axis is available
		};
		/* Bits YDA: */
		/* Y-axis new data available.  */
		struct YDA
		{
			/* MODE r */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000010; // [1]
			static const uint8_t NOT_AVAILABLE = 0b0; // new data for the Y-axis is not yet available
			static const uint8_t AVAILABLE = 0b1; // new data for the Y-axis is available
		};
		/* Bits unused_1: */
		struct unused_1
		{
			/* MODE r */
			static const uint8_t dflt = 0b0; // 1'd0
			static const uint8_t mask = 0b00000001; // [0]
		};
	};
	
	/* Set register STATUS_REG */
	void setSTATUS_REG(uint8_t value)
	{
		write(STATUS_REG::__address, value, 8);
	}
	
	/* Get register STATUS_REG */
	uint8_t getSTATUS_REG()
	{
		return read8(STATUS_REG::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                          REG CTRL_REG1                                           *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/*
	 * REG CTRL_REG1:
	 * 7.6
	 */
	struct CTRL_REG1
	{
		static const uint16_t __address = 11;
		
		/* Bits BOOT: */
		/*
		 * Reboot memory content.
		 * Boot request is executed as soon as internal oscillator is turned-on. It is possible to set this bit while in
		 * power-down mode, in this case it will be served at the next normal mode or sleep mode.
		 */
		struct BOOT
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
			static const uint8_t NORMAL_MODE = 0b0; // normal mode
			static const uint8_t REBOOT_MEM = 0b1; // reboot memory content
		};
		/* Bits P_DRDY: */
		/* DRDY signal pulsed.  */
		struct P_DRDY
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b01000000; // [6]
			static const uint8_t LATCHED = 0b0; // DRDY is latched
			static const uint8_t PULSED = 0b1; // DRDY is pulsed
		};
		/* Bits BLE: */
		/* Big/Little Endian Data Selection.  */
		struct BLE
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00100000; // [5]
			static const uint8_t LITTLE_ENDIAN = 0b0; // Data LSbyte @lower address
			static const uint8_t BIG_ENDIAN = 0b1; // Data MSbyte @lower address
		};
		/* Bits SIM: */
		/* SPI Serial Interface Mode configuration.  */
		struct SIM
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00010000; // [4]
			static const uint8_t SPI_4_WIRE = 0b0; // 4-wire interface
			static const uint8_t SPI_3_WIRE = 0b1; // 3-wire interface
		};
		/* Bits ODU: */
		/* Output Data Update.  */
		struct ODU
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00001000; // [3]
			static const uint8_t NOT_UPDATED_UNTIL_READ = 0b0; // output registers not updated until MSB and LSB have been read
			static const uint8_t CONTINUOUS = 0b1; // OIS output registers are updated continuously
		};
		/* Bits unused_0: */
		struct unused_0
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000100; // [2]
		};
		/* Bits PW: */
		/*
		 * Operating mode selection.
		 * Refer to Table 19: Operating mode selection
		 */
		struct PW
		{
			/* MODE rw */
			static const uint8_t dflt = 0b00; // 2'b0
			static const uint8_t mask = 0b00000011; // [0,1]
			static const uint8_t POWER_DOWN = 0b00; // Power-down
			static const uint8_t POWER_DOWN_ALT = 0b01; // Power-down
			static const uint8_t SLEEP_MODE = 0b10; // Sleep mode
			static const uint8_t NORMAL_MODE = 0b11; // Normal mode
		};
	};
	
	/* Set register CTRL_REG1 */
	void setCTRL_REG1(uint8_t value)
	{
		write(CTRL_REG1::__address, value, 8);
	}
	
	/* Get register CTRL_REG1 */
	uint8_t getCTRL_REG1()
	{
		return read8(CTRL_REG1::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                          REG CTRL_REG2                                           *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/*
	 * REG CTRL_REG2:
	 * 7.7
	 */
	struct CTRL_REG2
	{
		static const uint16_t __address = 12;
		
		/* Bits LPF_O: */
		/*
		 * Low-pass filter order selection.
		 * Refer to Figure 9: LPF chain block diagram and Table 24: Low-pass filter cutoff frequency selection
		 */
		struct LPF_O
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
			static const uint8_t LPF_2ND_ORDER = 0b0; // 2nd order
			static const uint8_t LPF_1ST_ORDER = 0b1; // 1st order
		};
		/* Bits reserved_0: */
		/* These bits must be set to ‘0’ for proper operation of the device.  */
		struct reserved_0
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0000; // 4'b0
			static const uint8_t mask = 0b01111000; // [3,4,5,6]
		};
		/* Bits HP_RST: */
		/* High-pass filter reset.  */
		struct HP_RST
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000100; // [2]
			static const uint8_t HPF_RESET_ON_XY = 0b1; // HPF reset on X and Y-axis
		};
		/* Bits SW_RST: */
		/* Software reset.  */
		struct SW_RST
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000010; // [1]
			static const uint8_t RESTORE_ALL = 0b1; // 1: all the configuration register values are restored to default values).
		};
		/* Bits HPF: */
		/* High-pass filter enable.  */
		struct HPF
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000001; // [0]
			static const uint8_t DISABLED = 0b0; // high-pass filter is disabled
			static const uint8_t ENABLED = 0b1; // high-pass filter is enabled
		};
	};
	
	/* Set register CTRL_REG2 */
	void setCTRL_REG2(uint8_t value)
	{
		write(CTRL_REG2::__address, value, 8);
	}
	
	/* Get register CTRL_REG2 */
	uint8_t getCTRL_REG2()
	{
		return read8(CTRL_REG2::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                          REG CTRL_REG3                                           *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/*
	 * REG CTRL_REG3:
	 * 7.8
	 */
	struct CTRL_REG3
	{
		static const uint16_t __address = 13;
		
		/* Bits reserved_0: */
		/* This bits must be set to ‘0’ for proper operation of the device.  */
		struct reserved_0
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
		};
		/* Bits ST: */
		/* Self-test enable.  */
		struct ST
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b01000000; // [6]
			static const uint8_t DISABLED = 0b0; // ST disabled
			static const uint8_t ENABLED = 0b1; // ST enabled
		};
		/* Bits reserved_1: */
		/* This bits must be set to ‘0’ for proper operation of the device.  */
		struct reserved_1
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00100000; // [5]
		};
		/* Bits PP_OD: */
		/* DRDY pin configuration.  */
		struct PP_OD
		{
			/* MODE rw */
			static const uint8_t mask = 0b00010000; // [4]
			static const uint8_t PUSH_PULL = 0b0; // push-pull
			static const uint8_t OPEN_DRAIN = 0b1; // open drain
		};
		/* Bits reserved_2: */
		/* These bits must be set to ‘0’ for proper operation of the device.  */
		struct reserved_2
		{
			/* MODE rw */
			static const uint8_t dflt = 0b00; // 2'b0
			static const uint8_t mask = 0b00001100; // [2,3]
		};
		/* Bits DRDY_EN: */
		/*
		 * Data ready enable on DRDY pin.
		 * . Section 2.3: Data-ready interrupt and synchronous reading.
		 */
		struct DRDY_EN
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000010; // [1]
			static const uint8_t DRDY_ON_PIN = 0b1; // 
		};
		/* Bits LPF_D: */
		/*
		 * Digital low-pass filter enable.
		 * Refer to Figure 9: LPF chain block diagram and Table 24: Low-pass filter cutoff
		 * frequency selection.
		 */
		struct LPF_D
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000001; // [0]
			static const uint8_t DISABLED = 0b0; // choose with LPF_BW of register CTRL2_OIS
			/*
			 * 1150Hz, phase delay 1° @ 10 Hz
			 * for any value of LPF_BW of register CTRL2_OIS
			 */
			static const uint8_t ENABLED = 0b1;
		};
	};
	
	/* Set register CTRL_REG3 */
	void setCTRL_REG3(uint8_t value)
	{
		write(CTRL_REG3::__address, value, 8);
	}
	
	/* Get register CTRL_REG3 */
	uint8_t getCTRL_REG3()
	{
		return read8(CTRL_REG3::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                        REG ORIENT_CONFIG                                         *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/*
	 * REG ORIENT_CONFIG:
	 * 7.9
	 */
	struct ORIENT_CONFIG
	{
		static const uint16_t __address = 16;
		
		/* Bits reserved_0: */
		/* These bits must be set to ‘0’ for proper operation of the device.  */
		struct reserved_0
		{
			static const uint8_t dflt = 0b00; // 2'b0
			static const uint8_t mask = 0b11000000; // [6,7]
		};
		/* Bits SIGN_X: */
		/* X-axis angular rate sign.  */
		struct SIGN_X
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00100000; // [5]
			static const uint8_t SIGN_VARIED = 0b0; // sign unvaried
			static const uint8_t SIGN_INVERTED = 0b1; // sign inverted
		};
		/* Bits SIGN_Y: */
		/* Y-axis angular rate sign.  */
		struct SIGN_Y
		{
			static const uint8_t mask = 0b00010000; // [4]
			static const uint8_t SIGN_VARIED = 0b0; // sign unvaried
			static const uint8_t SIGN_INVERTED = 0b1; // sign inverted
		};
		/* Bits reserved_1: */
		/* These bits must be set to ‘0’ for proper operation of the device.  */
		struct reserved_1
		{
			static const uint8_t dflt = 0b000; // 3'b0
			static const uint8_t mask = 0b00001110; // [1,2,3]
		};
		/* Bits ORIENT: */
		/* Directional orientation selection.  */
		struct ORIENT
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000001; // [0]
			static const uint8_t XY = 0b0; // X-axis - Y-axis
			static const uint8_t YX = 0b1; // Y-axis - X-axis
		};
	};
	
	/* Set register ORIENT_CONFIG */
	void setORIENT_CONFIG(uint8_t value)
	{
		write(ORIENT_CONFIG::__address, value, 8);
	}
	
	/* Get register ORIENT_CONFIG */
	uint8_t getORIENT_CONFIG()
	{
		return read8(ORIENT_CONFIG::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                            REG OFF_X                                             *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/*
	 * REG OFF_X:
	 * 7.10
	 * User offset correction register for X-axis.
	 * The value is expressed as two’s complement.
	 */
	struct OFF_X
	{
		static const uint16_t __address = 17;
		
		/* Bits OFF_X: */
		struct OFF_X_
		{
			/* MODE rw */
			static const uint8_t dflt = 0b00000000; // 8'd0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register OFF_X */
	void setOFF_X(uint8_t value)
	{
		write(OFF_X::__address, value, 8);
	}
	
	/* Get register OFF_X */
	uint8_t getOFF_X()
	{
		return read8(OFF_X::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                            REG OFF_Y                                             *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/*
	 * REG OFF_Y:
	 * 7.10
	 * User offset correction register for Y-axis.
	 * The value is expressed as two’s complement.
	 */
	struct OFF_Y
	{
		static const uint16_t __address = 18;
		
		/* Bits OFF_Y: */
		struct OFF_Y_
		{
			/* MODE rw */
			static const uint8_t dflt = 0b00000000; // 8'd0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register OFF_Y */
	void setOFF_Y(uint8_t value)
	{
		write(OFF_Y::__address, value, 8);
	}
	
	/* Get register OFF_Y */
	uint8_t getOFF_Y()
	{
		return read8(OFF_Y::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                          REG CTRL_REG4                                           *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/*
	 * REG CTRL_REG4:
	 * 7.12
	 */
	struct CTRL_REG4
	{
		static const uint16_t __address = 31;
		
		/* Bits unused_0: */
		/* These bits must be set to ‘0’ for proper operation of the device  */
		struct unused_0
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0000; // 4'b0
			static const uint8_t mask = 0b11110000; // [4,5,6,7]
		};
		/* Bits FS: */
		/* Full-scale selection.  */
		struct FS
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00001000; // [3]
			static const uint8_t SCALE_100_DPS = 0b0; // ±100 dps
			static const uint8_t SCALE_200_DPS = 0b1; // ±200 dps
		};
		/* Bits unused_1: */
		/* These bits must be set to ‘0’ for proper operation of the device  */
		struct unused_1
		{
			/* MODE rw */
			static const uint8_t dflt = 0b00; // 2'b0
			static const uint8_t mask = 0b00000110; // [1,2]
		};
		/* Bits HPF_BW: */
		/*
		 * Digital high-pass filter cutoff frequency selection.
		 * Refer to Table 33: High-pass filter cutoff frequency selection
		 */
		struct HPF_BW
		{
			/* MODE rw */
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000001; // [0]
			static const uint8_t F0_02Hz = 0b0; // 0.02Hz
			static const uint8_t F0_09Hz = 0b1; // 0.09Hz
		};
	};
	
	/* Set register CTRL_REG4 */
	void setCTRL_REG4(uint8_t value)
	{
		write(CTRL_REG4::__address, value, 8);
	}
	
	/* Get register CTRL_REG4 */
	uint8_t getCTRL_REG4()
	{
		return read8(CTRL_REG4::__address, 8);
	}
	
};
