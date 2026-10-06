/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10443ed68; end: 10443ed6b;  */

void FUN_10443ed68(void)

{
  undefined *puVar1;
  
  if (puRam0000000113079878 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfea40;
  _swift_getWitnessTable(&UNK_10dcfea40,&UNK_11076efa0);
  puRam0000000113079878 = puVar1;
  return;
}



/* Entry: 10443ed6c; end: 10443edab;  */

void FUN_10443ed6c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113079878 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfea40;
  _swift_getWitnessTable(&UNK_10dcfea40,&UNK_11076efa0);
  puRam0000000113079878 = puVar1;
  return;
}



/* Entry: 10443edac; end: 10443edaf;  */

void FUN_10443edac(void)

{
  undefined *puVar1;
  
  if (puRam0000000113079880 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfeae0;
  _swift_getWitnessTable(&UNK_10dcfeae0,&UNK_11076efc0);
  puRam0000000113079880 = puVar1;
  return;
}



/* Entry: 10443edb0; end: 10443edef;  */

void FUN_10443edb0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113079880 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfeae0;
  _swift_getWitnessTable(&UNK_10dcfeae0,&UNK_11076efc0);
  puRam0000000113079880 = puVar1;
  return;
}



/* Entry: 10443edf0; end: 10443ee63;  */

undefined1  [16] FUN_10443edf0(void)

{
  return ZEXT816(0x11076efa0);
}



/* Entry: 10443ee64; end: 10443ef3b;  */

void FUN_10443ee64(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10443ef3c; end: 10443ef47;  */

void FUN_10443ef3c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 10443ef48; end: 10443ef57; -[SCOperaViewInteractionData type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10443ef48(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130798b0);
}



/* Entry: 10443ef58; end: 10443ef6b; -[SCOperaViewInteractionData startLocation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10443ef58(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_1130798b8);
}



/* Entry: 10443ef6c; end: 10443ef7b; -[SCOperaViewInteractionData startLocationXToScreenWidthRatio] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10443ef6c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130798c0);
}



/* Entry: 10443ef7c; end: 10443ef8b; -[SCOperaViewInteractionData startLocationYToScreenHeightRatio] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10443ef7c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130798c8);
}



/* Entry: 10443ef8c; end: 10443ef9f; -[SCOperaViewInteractionData endLocation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10443ef8c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_1130798d0);
}



/* Entry: 10443efa0; end: 10443efaf; -[SCOperaViewInteractionData endLocationXToScreenWidthRatio] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10443efa0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130798d8);
}



/* Entry: 10443efb0; end: 10443efbf; -[SCOperaViewInteractionData endLocationYToScreenHeightRatio] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10443efb0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130798e0);
}



/* Entry: 10443efc0; end: 10443efcf; -[SCOperaViewInteractionData interactionTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10443efc0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130798e8);
}



/* Entry: 10443efd0; end: 10443f1bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10443efd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_80 [8];
  
  uVar2 = param_1;
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130798b0) = param_9;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130798b8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_1130798c0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_1130798c8) = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130798d0);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_1130798d8) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_1130798e0) = param_8;
  _CACurrentMediaTime();
  *(undefined8 *)(unaff_x20 + _DAT_1130798e8) = uVar2;
  _objc_msgSendSuper2(auStack_80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10443f1c0; end: 10443f1e3; -[SCOperaViewInteractionData initWithType:startLocation:startLocationXToScreenWidthRatio:startLocationYToScreenHeightRatio:endLocation:endLocationXToScreenWidthRatio:endLocationYToScreenHeightRatio:] */

void FUN_10443f1c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010443f0c8(param_3);
  return;
}



/* Entry: 10443f1e4; end: 10443f207; -[SCOperaViewInteractionData initWithType:] */

void FUN_10443f1e4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0560b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,0,0,0,0,0,0,0,param_1,PTR_s_initWithType_startLocation_start_1125f3238);
  return;
}



/* Entry: 10443f208; end: 10443f21b; -[SCOperaViewInteractionData initWithType:startLocation:startLocationXToScreenWidthRatio:startLocationYToScreenHeightRatio:] */

void FUN_10443f208(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0560b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithType_startLocation_start_1125f3238);
  return;
}



/* Entry: 10443f21c; end: 10443f263;  */

void FUN_10443f21c(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010c0560b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0,0,0,0,0,0,0,0);
  return;
}



/* Entry: 10443f264; end: 10443f2af; +[SCOperaViewInteractionData interactionWithType:] */

void FUN_10443f264(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_getObjCClassMetadata();
  _objc_allocWithZone();
  func_0x00010c0560a0(0,0,0,0,0,0,0,0,param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10443f2b0; end: 10443f31b; +[SCOperaViewInteractionData interactionWithType:startLocation:startLocationXToScreenWidthRatio:startLocationYToScreenHeightRatio:] */

void FUN_10443f2b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  _swift_getObjCClassMetadata();
  _objc_allocWithZone();
  func_0x00010c0560a0(param_1,param_2,param_3,param_4,param_1,param_2,param_3,param_4,param_5,
                      param_6,param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10443f31c; end: 10443f333; +[SCOperaViewInteractionData interactionWithType:startLocation:startLocationXToScreenWidthRatio:startLocationYToScreenHeightRatio:endLocation:endLocationXToScreenWidthRatio:endLocationYToScreenHeightRatio:] */

void FUN_10443f31c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10443f478(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10443f334; end: 10443f337;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10443f334(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                  long param_6)

{
  double *pdVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined *puStack_80;
  undefined *puStack_78;
  
  dVar5 = param_3;
  dVar6 = param_4;
  if (param_6 != 0) {
    func_0x00010bf512a0(param_6,param_6,0);
    func_0x00010bf512a0(param_6);
  }
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  _objc_opt_self();
  func_0x00010c0b6c20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release();
  dVar9 = 0.0;
  if (dVar5 != 0.0) {
    dVar9 = param_1 / dVar5;
  }
  dVar7 = 0.0;
  if (dVar5 != 0.0) {
    dVar7 = param_3 / dVar5;
  }
  dVar5 = 0.0;
  if (dVar6 != 0.0) {
    dVar5 = param_2 / dVar6;
  }
  dVar4 = param_4 / dVar6;
  dVar8 = 0.0;
  if (dVar6 != 0.0) {
    dVar8 = dVar4;
  }
  FUN_10443f8c4();
  puVar3 = puVar2;
  _objc_allocWithZone();
  *(undefined8 *)(puVar3 + _DAT_1130798b0) = param_5;
  pdVar1 = (double *)(puVar3 + _DAT_1130798b8);
  *pdVar1 = param_1;
  pdVar1[1] = param_2;
  *(double *)(puVar3 + _DAT_1130798c0) = dVar9;
  *(double *)(puVar3 + _DAT_1130798c8) = dVar5;
  pdVar1 = (double *)(puVar3 + _DAT_1130798d0);
  *pdVar1 = param_3;
  pdVar1[1] = param_4;
  *(double *)(puVar3 + _DAT_1130798d8) = dVar7;
  *(double *)(puVar3 + _DAT_1130798e0) = dVar8;
  _CACurrentMediaTime();
  *(double *)(puVar3 + _DAT_1130798e8) = dVar4;
  puStack_80 = puVar3;
  puStack_78 = puVar2;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10443f338; end: 10443f3b7; +[SCOperaViewInteractionData interactionWithType:startLocation:endLocation:in:] */

void FUN_10443f338(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  uVar1 = param_8;
  _objc_retain(param_8);
  func_0x00010443f574(param_1,param_2,param_3,param_4,param_7,param_8);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_7);
  return;
}



/* Entry: 10443f3b8; end: 10443f3bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10443f3b8(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                  undefined8 param_6)

{
  double *pdVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined *puStack_80;
  undefined *puStack_78;
  
  dVar4 = param_1;
  dVar6 = param_2;
  func_0x00010bf512a0(param_6,param_6,0);
  func_0x00010bf512a0(param_6);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  _objc_opt_self();
  func_0x00010c0b6c20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release();
  dVar9 = 0.0;
  if (param_3 != 0.0) {
    dVar9 = dVar4 / param_3;
  }
  dVar7 = 0.0;
  if (param_3 != 0.0) {
    dVar7 = param_1 / param_3;
  }
  dVar10 = 0.0;
  if (param_4 != 0.0) {
    dVar10 = dVar6 / param_4;
  }
  dVar5 = param_2 / param_4;
  dVar8 = 0.0;
  if (param_4 != 0.0) {
    dVar8 = dVar5;
  }
  FUN_10443f8c4();
  puVar3 = puVar2;
  _objc_allocWithZone();
  *(undefined8 *)(puVar3 + _DAT_1130798b0) = param_5;
  pdVar1 = (double *)(puVar3 + _DAT_1130798b8);
  *pdVar1 = dVar4;
  pdVar1[1] = dVar6;
  *(double *)(puVar3 + _DAT_1130798c0) = dVar9;
  *(double *)(puVar3 + _DAT_1130798c8) = dVar10;
  pdVar1 = (double *)(puVar3 + _DAT_1130798d0);
  *pdVar1 = param_1;
  pdVar1[1] = param_2;
  *(double *)(puVar3 + _DAT_1130798d8) = dVar7;
  *(double *)(puVar3 + _DAT_1130798e0) = dVar8;
  _CACurrentMediaTime();
  *(double *)(puVar3 + _DAT_1130798e8) = dVar5;
  puStack_80 = puVar3;
  puStack_78 = puVar2;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10443f3bc; end: 10443f417; +[SCOperaViewInteractionData interactionWithType:startLocation:in:] */

void FUN_10443f3bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_6);
  func_0x00010443f6fc(param_1,param_2,param_5,param_6);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_5);
  return;
}



/* Entry: 10443f418; end: 10443f477; -[SCOperaViewInteractionData init] */

void FUN_10443f418(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("OperaAPIDefinesSwift.OperaViewInteractionData",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10443f444);
  (*pcVar1)();
}



/* Entry: 10443f478; end: 10443f86f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10443f478(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_80;
  long lStack_78;
  
  lVar2 = param_9;
  uVar4 = param_1;
  FUN_10443f8c4();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(long *)(lVar3 + _DAT_1130798b0) = param_9;
  puVar1 = (undefined8 *)(lVar3 + _DAT_1130798b8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(lVar3 + _DAT_1130798c0) = param_3;
  *(undefined8 *)(lVar3 + _DAT_1130798c8) = param_4;
  puVar1 = (undefined8 *)(lVar3 + _DAT_1130798d0);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined8 *)(lVar3 + _DAT_1130798d8) = param_7;
  *(undefined8 *)(lVar3 + _DAT_1130798e0) = param_8;
  _CACurrentMediaTime();
  *(undefined8 *)(lVar3 + _DAT_1130798e8) = uVar4;
  lStack_80 = lVar3;
  lStack_78 = lVar2;
  _objc_msgSendSuper2(&lStack_80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10443f870; end: 10443f873;  */

void FUN_10443f870(void)

{
  undefined *puVar1;
  
  if (puRam00000001130798f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfec00;
  _swift_getWitnessTable(&UNK_10dcfec00,&UNK_11076f038);
  puRam00000001130798f0 = puVar1;
  return;
}



/* Entry: 10443f874; end: 10443f8b3;  */

void FUN_10443f874(void)

{
  undefined *puVar1;
  
  if (puRam00000001130798f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfec00;
  _swift_getWitnessTable(&UNK_10dcfec00,&UNK_11076f038);
  puRam00000001130798f0 = puVar1;
  return;
}



/* Entry: 10443f8b4; end: 10443f8c3;  */

undefined1  [16] FUN_10443f8b4(void)

{
  return ZEXT816(0x11076f038);
}



/* Entry: 10443f8c4; end: 10443f8e3;  */

void FUN_10443f8c4(void)

{
  _objc_opt_self(&PTR_PTR_1129b3de0);
  return;
}



/* Entry: 10443f8e4; end: 10443f8ff;  */

void FUN_10443f8e4(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010c0560b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0,0,0,0,0,0,0,0);
  return;
}



/* Entry: 10443f900; end: 10443f93f;  */

void FUN_10443f900(void)

{
  undefined *puVar1;
  
  if (puRam0000000113079920 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfece0;
  _swift_getWitnessTable(&UNK_10dcfece0,&UNK_11076f0b0);
  puRam0000000113079920 = puVar1;
  return;
}



/* Entry: 10443f940; end: 10443f9eb;  */

void FUN_10443f940(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10443f9ec; end: 10443fa23;  */

void FUN_10443f9ec(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 10443fa24; end: 10443fa4f;  */

long FUN_10443fa24(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10443fa50; end: 10443fabb;  */

int FUN_10443fa50(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 0x31) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 10443fabc; end: 10443fb43;  */

long FUN_10443fabc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10443fb44; end: 10443fb47;  */

void FUN_10443fb44(void)

{
  undefined *puVar1;
  
  if (puRam0000000113079928 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfee18;
  _swift_getWitnessTable(&UNK_10dcfee18,&UNK_11076f228);
  puRam0000000113079928 = puVar1;
  return;
}



/* Entry: 10443fb48; end: 10443fb87;  */

void FUN_10443fb48(void)

{
  undefined *puVar1;
  
  if (puRam0000000113079928 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfee18;
  _swift_getWitnessTable(&UNK_10dcfee18,&UNK_11076f228);
  puRam0000000113079928 = puVar1;
  return;
}



/* Entry: 10443fb88; end: 10443fb8b;  */

void FUN_10443fb88(void)

{
  undefined *puVar1;
  
  if (puRam0000000113079930 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfee50;
  _swift_getWitnessTable(&UNK_10dcfee50,&UNK_11076f228);
  puRam0000000113079930 = puVar1;
  return;
}



/* Entry: 10443fb8c; end: 10443fbcb;  */

void FUN_10443fb8c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113079930 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfee50;
  _swift_getWitnessTable(&UNK_10dcfee50,&UNK_11076f228);
  puRam0000000113079930 = puVar1;
  return;
}



/* Entry: 10443fbcc; end: 10443fbf7;  */

void FUN_10443fbcc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Entry: 10443fbf8; end: 10443fc37;  */

void FUN_10443fbf8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113079938 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfef18;
  _swift_getWitnessTable(&UNK_10dcfef18,&UNK_11076f228);
  puRam0000000113079938 = puVar1;
  return;
}



/* Entry: 10443fc38; end: 10443fc3b;  */

void FUN_10443fc38(void)

{
  undefined *puVar1;
  
  if (puRam0000000113079940 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfef40;
  _swift_getWitnessTable(&UNK_10dcfef40,&UNK_11076f228);
  puRam0000000113079940 = puVar1;
  return;
}



/* Entry: 10443fc3c; end: 10443fc7b;  */

void FUN_10443fc3c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113079940 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfef40;
  _swift_getWitnessTable(&UNK_10dcfef40,&UNK_11076f228);
  puRam0000000113079940 = puVar1;
  return;
}



/* Entry: 10443fc7c; end: 10443fdfb;  */

void FUN_10443fc7c(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 10443fdfc; end: 10443fea3;  */

void FUN_10443fdfc(ulong *param_1,long param_2)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  undefined1 auVar25 [16];
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  
  uVar2 = *(ulong *)(param_2 + 0x10);
  if (uVar2 == 0) {
    uVar7 = 0;
  }
  else {
    if (uVar2 < 4) {
      uVar4 = 0;
      uVar7 = 0;
    }
    else {
      uVar4 = uVar2 & 0x7ffffffffffffffc;
      puVar6 = (undefined8 *)(param_2 + 0x30);
      bVar8 = 0;
      bVar9 = 0;
      bVar10 = 0;
      bVar11 = 0;
      bVar12 = 0;
      bVar13 = 0;
      bVar14 = 0;
      bVar15 = 0;
      bVar16 = 0;
      bVar17 = 0;
      bVar18 = 0;
      bVar19 = 0;
      bVar20 = 0;
      bVar21 = 0;
      bVar22 = 0;
      bVar23 = 0;
      bVar24 = 0;
      bVar26 = 0;
      bVar27 = 0;
      bVar28 = 0;
      bVar29 = 0;
      bVar30 = 0;
      bVar31 = 0;
      bVar32 = 0;
      bVar33 = 0;
      bVar34 = 0;
      bVar35 = 0;
      bVar36 = 0;
      bVar37 = 0;
      bVar38 = 0;
      bVar39 = 0;
      bVar40 = 0;
      uVar7 = uVar4;
      do {
        uVar42 = puVar6[-1];
        uVar41 = puVar6[-2];
        uVar44 = puVar6[1];
        uVar43 = *puVar6;
        bVar8 = (byte)uVar41 | bVar8;
        bVar9 = (byte)((ulong)uVar41 >> 8) | bVar9;
        bVar10 = (byte)((ulong)uVar41 >> 0x10) | bVar10;
        bVar11 = (byte)((ulong)uVar41 >> 0x18) | bVar11;
        bVar12 = (byte)((ulong)uVar41 >> 0x20) | bVar12;
        bVar13 = (byte)((ulong)uVar41 >> 0x28) | bVar13;
        bVar14 = (byte)((ulong)uVar41 >> 0x30) | bVar14;
        bVar15 = (byte)((ulong)uVar41 >> 0x38) | bVar15;
        bVar16 = (byte)uVar42 | bVar16;
        bVar17 = (byte)((ulong)uVar42 >> 8) | bVar17;
        bVar18 = (byte)((ulong)uVar42 >> 0x10) | bVar18;
        bVar19 = (byte)((ulong)uVar42 >> 0x18) | bVar19;
        bVar20 = (byte)((ulong)uVar42 >> 0x20) | bVar20;
        bVar21 = (byte)((ulong)uVar42 >> 0x28) | bVar21;
        bVar22 = (byte)((ulong)uVar42 >> 0x30) | bVar22;
        bVar23 = (byte)((ulong)uVar42 >> 0x38) | bVar23;
        bVar24 = (byte)uVar43 | bVar24;
        bVar26 = (byte)((ulong)uVar43 >> 8) | bVar26;
        bVar27 = (byte)((ulong)uVar43 >> 0x10) | bVar27;
        bVar28 = (byte)((ulong)uVar43 >> 0x18) | bVar28;
        bVar29 = (byte)((ulong)uVar43 >> 0x20) | bVar29;
        bVar30 = (byte)((ulong)uVar43 >> 0x28) | bVar30;
        bVar31 = (byte)((ulong)uVar43 >> 0x30) | bVar31;
        bVar32 = (byte)((ulong)uVar43 >> 0x38) | bVar32;
        bVar33 = (byte)uVar44 | bVar33;
        bVar34 = (byte)((ulong)uVar44 >> 8) | bVar34;
        bVar35 = (byte)((ulong)uVar44 >> 0x10) | bVar35;
        bVar36 = (byte)((ulong)uVar44 >> 0x18) | bVar36;
        bVar37 = (byte)((ulong)uVar44 >> 0x20) | bVar37;
        bVar38 = (byte)((ulong)uVar44 >> 0x28) | bVar38;
        bVar39 = (byte)((ulong)uVar44 >> 0x30) | bVar39;
        bVar40 = (byte)((ulong)uVar44 >> 0x38) | bVar40;
        puVar6 = puVar6 + 4;
        uVar7 = uVar7 - 4;
      } while (uVar7 != 0);
      bVar24 = bVar24 | bVar8;
      bVar26 = bVar26 | bVar9;
      bVar27 = bVar27 | bVar10;
      bVar28 = bVar28 | bVar11;
      bVar29 = bVar29 | bVar12;
      bVar30 = bVar30 | bVar13;
      bVar31 = bVar31 | bVar14;
      bVar32 = bVar32 | bVar15;
      auVar25[1] = bVar26;
      auVar25[0] = bVar24;
      auVar25[2] = bVar27;
      auVar25[3] = bVar28;
      auVar25[4] = bVar29;
      auVar25[5] = bVar30;
      auVar25[6] = bVar31;
      auVar25[7] = bVar32;
      auVar25[8] = bVar33 | bVar16;
      auVar25[9] = bVar34 | bVar17;
      auVar25[10] = bVar35 | bVar18;
      auVar25[0xb] = bVar36 | bVar19;
      auVar25[0xc] = bVar37 | bVar20;
      auVar25[0xd] = bVar38 | bVar21;
      auVar25[0xe] = bVar39 | bVar22;
      auVar25[0xf] = bVar40 | bVar23;
      auVar1[1] = bVar26;
      auVar1[0] = bVar24;
      auVar1[2] = bVar27;
      auVar1[3] = bVar28;
      auVar1[4] = bVar29;
      auVar1[5] = bVar30;
      auVar1[6] = bVar31;
      auVar1[7] = bVar32;
      auVar1[8] = bVar33 | bVar16;
      auVar1[9] = bVar34 | bVar17;
      auVar1[10] = bVar35 | bVar18;
      auVar1[0xb] = bVar36 | bVar19;
      auVar1[0xc] = bVar37 | bVar20;
      auVar1[0xd] = bVar38 | bVar21;
      auVar1[0xe] = bVar39 | bVar22;
      auVar1[0xf] = bVar40 | bVar23;
      auVar25 = NEON_ext(auVar25,auVar1,8,1);
      uVar7 = CONCAT17(bVar32 | auVar25[7],
                       CONCAT16(bVar31 | auVar25[6],
                                CONCAT15(bVar30 | auVar25[5],
                                         CONCAT14(bVar29 | auVar25[4],
                                                  CONCAT13(bVar28 | auVar25[3],
                                                           CONCAT12(bVar27 | auVar25[2],
                                                                    CONCAT11(bVar26 | auVar25[1],
                                                                             bVar24 | auVar25[0]))))
                                        )));
      if (uVar2 == uVar4) goto LAB_10443fe90;
    }
    lVar3 = uVar2 - uVar4;
    puVar5 = (ulong *)(param_2 + uVar4 * 8 + 0x20);
    do {
      uVar7 = *puVar5 | uVar7;
      lVar3 = lVar3 + -1;
      puVar5 = puVar5 + 1;
    } while (lVar3 != 0);
  }
LAB_10443fe90:
  _swift_bridgeObjectRelease();
  *param_1 = uVar7;
  return;
}



/* Entry: 10443fea4; end: 10443fed3;  */

undefined1  [16] FUN_10443fea4(void)

{
  return ZEXT816(0x11076f228);
}



/* Entry: 10443fed4; end: 10443ff13;  */

void FUN_10443fed4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113079948 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfefa0;
  _swift_getWitnessTable(&UNK_10dcfefa0,&UNK_11076f368);
  puRam0000000113079948 = puVar1;
  return;
}



/* Entry: 10443ff14; end: 10443ffbf;  */

void FUN_10443ff14(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10443ffc0; end: 10444000f;  */

void FUN_10443ffc0(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 104440010; end: 10444004f;  */

void FUN_104440010(void)

{
  undefined *puVar1;
  
  if (puRam0000000113079950 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcff060;
  _swift_getWitnessTable(&UNK_10dcff060,&UNK_11076f3e0);
  puRam0000000113079950 = puVar1;
  return;
}



/* Entry: 104440050; end: 1044400fb;  */

void FUN_104440050(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1044400fc; end: 104440137;  */

void FUN_1044400fc(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 104440138; end: 104440177;  */

void FUN_104440138(void)

{
  undefined *puVar1;
  
  if (puRam0000000113079958 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcff168;
  _swift_getWitnessTable(&UNK_10dcff168,&UNK_11076f458);
  puRam0000000113079958 = puVar1;
  return;
}



/* Entry: 104440178; end: 10444017b;  */

void FUN_104440178(void)

{
  undefined *puVar1;
  
  if (puRam0000000113079960 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcff1a0;
  _swift_getWitnessTable(&UNK_10dcff1a0,&UNK_11076f458);
  puRam0000000113079960 = puVar1;
  return;
}



/* Entry: 10444017c; end: 1044401bb;  */

void FUN_10444017c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113079960 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcff1a0;
  _swift_getWitnessTable(&UNK_10dcff1a0,&UNK_11076f458);
  puRam0000000113079960 = puVar1;
  return;
}



/* Entry: 1044401bc; end: 1044401e7;  */

void FUN_1044401bc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Entry: 1044401e8; end: 104440227;  */

void FUN_1044401e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113079968 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcff268;
  _swift_getWitnessTable(&UNK_10dcff268,&UNK_11076f458);
  puRam0000000113079968 = puVar1;
  return;
}



/* Entry: 104440228; end: 10444022b;  */

void FUN_104440228(void)

{
  undefined *puVar1;
  
  if (puRam0000000113079970 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcff290;
  _swift_getWitnessTable(&UNK_10dcff290,&UNK_11076f458);
  puRam0000000113079970 = puVar1;
  return;
}



/* Entry: 10444022c; end: 10444026b;  */

void FUN_10444022c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113079970 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcff290;
  _swift_getWitnessTable(&UNK_10dcff290,&UNK_11076f458);
  puRam0000000113079970 = puVar1;
  return;
}



/* Entry: 10444026c; end: 1044403eb;  */

void FUN_10444026c(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 1044403ec; end: 104440493;  */

void FUN_1044403ec(ulong *param_1,long param_2)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  undefined1 auVar25 [16];
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  
  uVar2 = *(ulong *)(param_2 + 0x10);
  if (uVar2 == 0) {
    uVar7 = 0;
  }
  else {
    if (uVar2 < 4) {
      uVar4 = 0;
      uVar7 = 0;
    }
    else {
      uVar4 = uVar2 & 0x7ffffffffffffffc;
      puVar6 = (undefined8 *)(param_2 + 0x30);
      bVar8 = 0;
      bVar9 = 0;
      bVar10 = 0;
      bVar11 = 0;
      bVar12 = 0;
      bVar13 = 0;
      bVar14 = 0;
      bVar15 = 0;
      bVar16 = 0;
      bVar17 = 0;
      bVar18 = 0;
      bVar19 = 0;
      bVar20 = 0;
      bVar21 = 0;
      bVar22 = 0;
      bVar23 = 0;
      bVar24 = 0;
      bVar26 = 0;
      bVar27 = 0;
      bVar28 = 0;
      bVar29 = 0;
      bVar30 = 0;
      bVar31 = 0;
      bVar32 = 0;
      bVar33 = 0;
      bVar34 = 0;
      bVar35 = 0;
      bVar36 = 0;
      bVar37 = 0;
      bVar38 = 0;
      bVar39 = 0;
      bVar40 = 0;
      uVar7 = uVar4;
      do {
        uVar42 = puVar6[-1];
        uVar41 = puVar6[-2];
        uVar44 = puVar6[1];
        uVar43 = *puVar6;
        bVar8 = (byte)uVar41 | bVar8;
        bVar9 = (byte)((ulong)uVar41 >> 8) | bVar9;
        bVar10 = (byte)((ulong)uVar41 >> 0x10) | bVar10;
        bVar11 = (byte)((ulong)uVar41 >> 0x18) | bVar11;
        bVar12 = (byte)((ulong)uVar41 >> 0x20) | bVar12;
        bVar13 = (byte)((ulong)uVar41 >> 0x28) | bVar13;
        bVar14 = (byte)((ulong)uVar41 >> 0x30) | bVar14;
        bVar15 = (byte)((ulong)uVar41 >> 0x38) | bVar15;
        bVar16 = (byte)uVar42 | bVar16;
        bVar17 = (byte)((ulong)uVar42 >> 8) | bVar17;
        bVar18 = (byte)((ulong)uVar42 >> 0x10) | bVar18;
        bVar19 = (byte)((ulong)uVar42 >> 0x18) | bVar19;
        bVar20 = (byte)((ulong)uVar42 >> 0x20) | bVar20;
        bVar21 = (byte)((ulong)uVar42 >> 0x28) | bVar21;
        bVar22 = (byte)((ulong)uVar42 >> 0x30) | bVar22;
        bVar23 = (byte)((ulong)uVar42 >> 0x38) | bVar23;
        bVar24 = (byte)uVar43 | bVar24;
        bVar26 = (byte)((ulong)uVar43 >> 8) | bVar26;
        bVar27 = (byte)((ulong)uVar43 >> 0x10) | bVar27;
        bVar28 = (byte)((ulong)uVar43 >> 0x18) | bVar28;
        bVar29 = (byte)((ulong)uVar43 >> 0x20) | bVar29;
        bVar30 = (byte)((ulong)uVar43 >> 0x28) | bVar30;
        bVar31 = (byte)((ulong)uVar43 >> 0x30) | bVar31;
        bVar32 = (byte)((ulong)uVar43 >> 0x38) | bVar32;
        bVar33 = (byte)uVar44 | bVar33;
        bVar34 = (byte)((ulong)uVar44 >> 8) | bVar34;
        bVar35 = (byte)((ulong)uVar44 >> 0x10) | bVar35;
        bVar36 = (byte)((ulong)uVar44 >> 0x18) | bVar36;
        bVar37 = (byte)((ulong)uVar44 >> 0x20) | bVar37;
        bVar38 = (byte)((ulong)uVar44 >> 0x28) | bVar38;
        bVar39 = (byte)((ulong)uVar44 >> 0x30) | bVar39;
        bVar40 = (byte)((ulong)uVar44 >> 0x38) | bVar40;
        puVar6 = puVar6 + 4;
        uVar7 = uVar7 - 4;
      } while (uVar7 != 0);
      bVar24 = bVar24 | bVar8;
      bVar26 = bVar26 | bVar9;
      bVar27 = bVar27 | bVar10;
      bVar28 = bVar28 | bVar11;
      bVar29 = bVar29 | bVar12;
      bVar30 = bVar30 | bVar13;
      bVar31 = bVar31 | bVar14;
      bVar32 = bVar32 | bVar15;
      auVar25[1] = bVar26;
      auVar25[0] = bVar24;
      auVar25[2] = bVar27;
      auVar25[3] = bVar28;
      auVar25[4] = bVar29;
      auVar25[5] = bVar30;
      auVar25[6] = bVar31;
      auVar25[7] = bVar32;
      auVar25[8] = bVar33 | bVar16;
      auVar25[9] = bVar34 | bVar17;
      auVar25[10] = bVar35 | bVar18;
      auVar25[0xb] = bVar36 | bVar19;
      auVar25[0xc] = bVar37 | bVar20;
      auVar25[0xd] = bVar38 | bVar21;
      auVar25[0xe] = bVar39 | bVar22;
      auVar25[0xf] = bVar40 | bVar23;
      auVar1[1] = bVar26;
      auVar1[0] = bVar24;
      auVar1[2] = bVar27;
      auVar1[3] = bVar28;
      auVar1[4] = bVar29;
      auVar1[5] = bVar30;
      auVar1[6] = bVar31;
      auVar1[7] = bVar32;
      auVar1[8] = bVar33 | bVar16;
      auVar1[9] = bVar34 | bVar17;
      auVar1[10] = bVar35 | bVar18;
      auVar1[0xb] = bVar36 | bVar19;
      auVar1[0xc] = bVar37 | bVar20;
      auVar1[0xd] = bVar38 | bVar21;
      auVar1[0xe] = bVar39 | bVar22;
      auVar1[0xf] = bVar40 | bVar23;
      auVar25 = NEON_ext(auVar25,auVar1,8,1);
      uVar7 = CONCAT17(bVar32 | auVar25[7],
                       CONCAT16(bVar31 | auVar25[6],
                                CONCAT15(bVar30 | auVar25[5],
                                         CONCAT14(bVar29 | auVar25[4],
                                                  CONCAT13(bVar28 | auVar25[3],
                                                           CONCAT12(bVar27 | auVar25[2],
                                                                    CONCAT11(bVar26 | auVar25[1],
                                                                             bVar24 | auVar25[0]))))
                                        )));
      if (uVar2 == uVar4) goto LAB_104440480;
    }
    lVar3 = uVar2 - uVar4;
    puVar5 = (ulong *)(param_2 + uVar4 * 8 + 0x20);
    do {
      uVar7 = *puVar5 | uVar7;
      lVar3 = lVar3 + -1;
      puVar5 = puVar5 + 1;
    } while (lVar3 != 0);
  }
LAB_104440480:
  _swift_bridgeObjectRelease();
  *param_1 = uVar7;
  return;
}



/* Entry: 104440494; end: 1044404ab;  */

undefined1  [16] FUN_104440494(void)

{
  return ZEXT816(0x11076f458);
}



/* Entry: 1044404ac; end: 1044404db; +[SCOperaPagePropertiesBuilder kSCOperaPageIdKeyPrivate] */

void FUN_1044404ac(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x657461766972705f,0xeb0000000064695f);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044404dc; end: 104440507; +[SCOperaPagePropertiesBuilder kSCOperaPageAccessibilityLabelKeyPrivate] */

void FUN_1044404dc(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000021,0x800000010f1fee90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104440508; end: 104440533; +[SCOperaPagePropertiesBuilder kSCOperaCriticalModeContextKeyPrivate] */

void FUN_104440508(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x800000010f1feec0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104440534; end: 1044405f3; -[SCOperaPagePropertiesBuilder init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104440534(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined1 *)(param_1 + _DAT_113079978) = 0;
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_allocWithZone();
  func_0x00010bfee200();
  *(undefined **)(param_1 + _DAT_113079980) = puVar2;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044405f4; end: 104440657; -[SCOperaPagePropertiesBuilder initWithUnsafeWrappedDictionary:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044405f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined1 *)(param_1 + _DAT_113079978) = 0;
  *(undefined8 *)(param_1 + _DAT_113079980) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 104440658; end: 10444066f;  */

void FUN_104440658(void)

{
  FUN_104440bd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 104440670; end: 10444067b; -[SCOperaPagePropertiesBuilder withPageId:] */

void FUN_104440670(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  }
  _objc_retain(param_1);
  FUN_104440bd8(param_3,param_2);
  _objc_retain();
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10444067c; end: 104440687; -[SCOperaPagePropertiesBuilder withPageAccessibilityLabel:] */

void FUN_10444067c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  }
  _objc_retain(param_1);
  (*(code *)0x104440ca8)(param_3,param_2);
  _objc_retain();
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104440688; end: 10444069f;  */

void FUN_104440688(void)

{
  func_0x000104440d84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 1044406a0; end: 1044406ab; -[SCOperaPagePropertiesBuilder withCriticalModeContext:] */

void FUN_1044406a0(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  }
  _objc_retain(param_1);
  (*(code *)0x104440d84)(param_3,param_2);
  _objc_retain();
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1044406ac; end: 104440797;  */

void FUN_1044406ac(undefined8 param_1,undefined8 param_2,long param_3,code *param_4)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  }
  _objc_retain(param_1);
  (*param_4)(param_3,param_2);
  _objc_retain();
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104440798; end: 104440853; -[SCOperaPagePropertiesBuilder withPagePropertiesFromDictionary:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104440798(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar3 = PTR___sypN_11034f1a8;
  puVar2 = PTR___ss11AnyHashableVSHsWP_11034e450;
  puVar1 = PTR___ss11AnyHashableVN_11034e448;
  if (param_3 == 0) {
    _objc_retain(param_1);
  }
  else {
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_3,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
               PTR___ss11AnyHashableVSHsWP_11034e450);
    uVar5 = *(undefined8 *)(param_1 + _DAT_113079980);
    _objc_retain(param_1);
    lVar4 = param_3;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF(param_3,puVar1,puVar3 + 8,puVar2);
    func_0x00010bef7f60(uVar5);
    _objc_release(lVar4);
    _swift_bridgeObjectRelease(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104440854; end: 10444086b;  */

void FUN_104440854(void)

{
  func_0x000104440e60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 10444086c; end: 104440937; -[SCOperaPagePropertiesBuilder setObjectIfNotNil:forKey:] */

void FUN_10444086c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = &uStack_50;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    _objc_retain(param_4);
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_4);
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_50);
    _swift_unknownObjectRelease(param_3);
  }
  uVar1 = param_4;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  _objc_release(param_4);
  func_0x000104440e60(&uStack_50,uVar1,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x00010006e7f4(&uStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104440938; end: 1044409f3; -[SCOperaPagePropertiesBuilder appendObjectToArray:forKey:] */

void FUN_104440938(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_50 [32];
  
  puVar2 = auStack_50;
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  __ss018_bridgeAnyObjectToB0yypyXlSgF(auStack_50,param_3);
  _swift_unknownObjectRelease(param_3);
  uVar1 = param_4;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  _objc_release(param_4);
  FUN_104440f34(auStack_50,uVar1,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1044409f4; end: 104440aeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044409f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_113079980);
  uStack_60 = param_1;
  uStack_58 = param_2;
  _swift_bridgeObjectRetain(param_2);
  puVar1 = &uStack_60;
  __ss38_bridgeAnythingNonVerbatimToObjectiveCyyXlxnlF(puVar1,PTR___sSSN_11034da80);
  func_0x00010bdc3c00();
  _objc_retainAutoreleasedReturnValue();
  _swift_unknownObjectRelease(puVar1);
  if (lVar3 == 0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_60,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
  }
  else {
    uVar2 = 0;
    func_0x0001002ed07c(0);
    puVar1 = &uStack_68;
    _swift_dynamicCast(puVar1,&uStack_40,PTR___sypN_11034f1a8 + 8,uVar2,6);
    if (((ulong)puVar1 & 1) != 0) {
      uVar2 = uStack_68;
      func_0x00010bf1f3c0(uStack_68);
      _objc_release(uStack_68);
      return uVar2;
    }
  }
  return 0;
}



/* Entry: 104440aec; end: 104440b53; -[SCOperaPagePropertiesBuilder boolValueForKey:] */

uint FUN_104440aec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  _objc_retain(param_1);
  FUN_1044409f4(param_3,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  return (uint)param_3 & 1;
}



/* Entry: 104440b54; end: 104440b73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104440b54(void)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + _DAT_113079978) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + _DAT_113079980));
  return;
}



/* Entry: 104440b74; end: 104440b93; -[SCOperaPagePropertiesBuilder sealedDict] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104440b74(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_113079978) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113079980));
  return;
}



/* Entry: 104440b94; end: 104440bc7;  */

void FUN_104440b94(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104440bc8; end: 104440bd7; -[SCOperaPagePropertiesBuilder .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104440bc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113079980));
  return;
}



/* Entry: 104440bd8; end: 104440f33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104440bd8(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = &uStack_50;
  uVar2 = 0x657461766972705f;
  if (param_2 == 0) {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_113079980);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x657461766972705f,0xeb0000000064695f);
    func_0x00010c12d3e0(uVar3);
    _objc_release(uVar2);
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113079980);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    uStack_50 = 0x657461766972705f;
    uStack_48 = 0xeb0000000064695f;
    __ss38_bridgeAnythingNonVerbatimToObjectiveCyyXlxnlF(&uStack_50,PTR___sSSN_11034da80);
    func_0x00010bdc3c20(uVar2);
    _objc_release(param_1);
    _swift_unknownObjectRelease(puVar1);
  }
  return;
}



/* Entry: 104440f34; end: 1044410f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104440f34(undefined8 param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  long lVar6;
  undefined *puVar7;
  undefined *apuStack_d8 [9];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lVar6 = *(long *)(unaff_x20 + _DAT_113079980);
  puStack_70 = param_2;
  uStack_68 = param_3;
  _swift_bridgeObjectRetain(param_3);
  ppuVar2 = &puStack_70;
  __ss38_bridgeAnythingNonVerbatimToObjectiveCyyXlxnlF(ppuVar2,PTR___sSSN_11034da80);
  lVar3 = lVar6;
  func_0x00010bdc3c00();
  _objc_retainAutoreleasedReturnValue();
  _swift_unknownObjectRelease(ppuVar2);
  if (lVar3 == 0) {
    uStack_88 = 0;
    puStack_90 = (undefined *)0x0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&puStack_90,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_68 = uStack_88;
  puStack_70 = puStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    func_0x00010006e7f4(&puStack_70);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar4 = 0x112daafe8;
    func_0x0001000285a8(0x112daafe8,&UNK_10d953970);
    ppuVar2 = apuStack_d8;
    _swift_dynamicCast(ppuVar2,&puStack_70,puVar1 + 8,uVar4,6);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (((ulong)ppuVar2 & 1) != 0) {
      puVar7 = apuStack_d8[0];
    }
  }
  lVar3 = 0x112d38dc0;
  func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
  _swift_initStackObject();
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  func_0x0001000bb420(param_1,lVar3 + 0x20);
  puStack_70 = puVar7;
  func_0x000102cf7840(lVar3);
  puVar7 = puStack_70;
  puVar5 = puStack_70;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puStack_70,puVar1 + 8);
  _swift_bridgeObjectRelease(puVar7);
  puStack_70 = param_2;
  uStack_68 = param_3;
  _swift_bridgeObjectRetain(param_3);
  ppuVar2 = &puStack_70;
  __ss38_bridgeAnythingNonVerbatimToObjectiveCyyXlxnlF(ppuVar2,PTR___sSSN_11034da80);
  func_0x00010bdc3c20(lVar6);
  _objc_release(puVar5);
  _swift_unknownObjectRelease(ppuVar2);
  return;
}



/* Entry: 1044410f4; end: 104441113;  */

void FUN_1044410f4(void)

{
  _objc_opt_self(&PTR_PTR_1129b3ed8);
  return;
}



/* Entry: 104441114; end: 10444112b;  */

bool FUN_104441114(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10444112c; end: 10444116b;  */

void FUN_10444112c(void)

{
  undefined *puVar1;
  
  if (puRam00000001130799b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcff300;
  _swift_getWitnessTable(&UNK_10dcff300,&UNK_11076f598);
  puRam00000001130799b0 = puVar1;
  return;
}



/* Entry: 10444116c; end: 104441217;  */

void FUN_10444116c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104441218; end: 10444124f;  */

void FUN_104441218(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 104441250; end: 10444125f;  */

undefined1  [16] FUN_104441250(void)

{
  return ZEXT816(0x11076f610);
}



/* Entry: 104441260; end: 104441277;  */

bool FUN_104441260(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 104441278; end: 1044412b7;  */

void FUN_104441278(void)

{
  undefined *puVar1;
  
  if (puRam00000001130799b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcff3f0;
  _swift_getWitnessTable(&UNK_10dcff3f0,&UNK_11076f638);
  puRam00000001130799b8 = puVar1;
  return;
}



/* Entry: 1044412b8; end: 104441363;  */

void FUN_1044412b8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104441364; end: 1044413a3;  */

void FUN_104441364(long *param_1,long *param_2)

{
  long lVar1;
  bool bVar2;
  
  bVar2 = *param_2 - 2U < 0xfffffffffffffffd;
  lVar1 = 0;
  if (!bVar2) {
    lVar1 = *param_2;
  }
  *param_1 = lVar1;
  *(bool *)(param_1 + 1) = bVar2;
  return;
}


