/*** cps_common_devdata.h ******************************/



/* CPS-DIO-0808L */
#if 0
/* Prototype 5 pin version */
#define	OFFSET_INPUT0_CPS_DIO_0808	0x04
#define	OFFSET_OUTPUT0_CPS_DIO_0808	0x06
#define	OFFSET_OUTPUT_ECHO0_CPS_DIO_0808 0x06
#define	OFFSET_DIGITALFILTER_CPS_DIO_0808 0x08
#define	OFFSET_INTERRUPT_MASK_CPS_DIO_0808	0x0A
#define	OFFSET_INTERRUPT_STATUS_CPS_DIO_0808	0x0A
#define	OFFSET_INTERRUPT_EGDE_CPS_DIO_0808	0x0C
#else
#define	OFFSET_INPUT0_CPS_DIO_0808	0x10
#define	OFFSET_OUTPUT0_CPS_DIO_0808	0x12
#define	OFFSET_OUTPUT_ECHO0_CPS_DIO_0808 0x12
#define	OFFSET_INTERNALBATTERY_CPS_DIO_0808 0x18
#define	OFFSET_DIGITALFILTER_CPS_DIO_0808 0x19
#define	OFFSET_INTERRUPT_MASK_CPS_DIO_0808	0x20
#define	OFFSET_INTERRUPT_STATUS_CPS_DIO_0808	0x20
#define	OFFSET_INTERRUPT_EGDE_CPS_DIO_0808	0x24
#endif

/**************************************************/