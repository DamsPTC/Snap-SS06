/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1041f43c8; end: 1041f43d7;  */

undefined1  [16] FUN_1041f43c8(void)

{
  return ZEXT816(0x110750bf8);
}



/* Entry: 1041f43d8; end: 1041f441b;  */

long FUN_1041f43d8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1041f441c; end: 1041f4667;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1041f441c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  _objc_allocWithZone();
  lVar2 = _DAT_113069018;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113069018,0);
  lVar3 = _DAT_113069020;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113069020,0);
  *(undefined8 *)(unaff_x20 + _DAT_113068fd0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113068fd8) = param_2;
  FUN_1041f43d8(param_3,unaff_x20 + _DAT_113068fe0);
  *(undefined8 *)(unaff_x20 + _DAT_113068fe8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113068ff0) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113068ff8) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_113069000) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_113069008) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_113069010) = param_9;
  _swift_beginAccess(unaff_x20 + lVar2,auStack_80,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar2,param_10);
  _swift_beginAccess(unaff_x20 + lVar3,auStack_98,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar3,param_11);
  puVar1 = PTR_s_init_1125d9248;
  _swift_unknownObjectRetain(param_1);
  _swift_unknownObjectRetain(param_2);
  _swift_unknownObjectRetain(param_4);
  _swift_unknownObjectRetain(param_5);
  _swift_unknownObjectRetain(param_6);
  _swift_unknownObjectRetain(param_7);
  _objc_retain(param_9);
  puVar4 = auStack_a8;
  _objc_msgSendSuper2(puVar4,puVar1);
  _swift_unknownObjectRelease(param_1);
  _swift_unknownObjectRelease(param_2);
  _swift_unknownObjectRelease(param_4);
  _swift_unknownObjectRelease(param_5);
  _swift_unknownObjectRelease(param_6);
  _swift_unknownObjectRelease(param_7);
  _objc_release(param_9);
  _swift_unknownObjectRelease(param_10);
  _swift_unknownObjectRelease(param_11);
  func_0x0001000834e4(param_3);
  return puVar4;
}



/* Entry: 1041f4668; end: 1041f4693; -[SCAdPlaybackScope init] */

void FUN_1041f4668(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("AdPlaybackScope.SCAdPlaybackScope",0x21,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1041f4694);
  (*pcVar1)();
}



/* Entry: 1041f4694; end: 1041f4697;  */

void FUN_1041f4694(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1041f4698; end: 1041f479b; -[SCAdPlaybackScope .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001041f4734: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001041f4738) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1041f4698(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113068fd0));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113068fd8));
  func_0x0001000834e4(param_1 + _DAT_113068fe0);
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113068fe8));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113068ff0));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113068ff8));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113069000));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113069010));
  param_1 = param_1 + _DAT_113069018;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1041f479c; end: 1041f4807;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f479c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1041f4b00();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_113069030) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1041f4808; end: 1041f480f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f4808(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1041f4b00();
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113069030) = uStack_38;
  puVar1 = auStack_48;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 1041f4810; end: 1041f485b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f4810(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113069030) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1041f485c; end: 1041f4a5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1041f485c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *aplStack_c0 [2];
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar4 = param_1;
  FUN_1041f4a60();
  lVar5 = lVar4;
  _objc_allocWithZone();
  lVar2 = _DAT_113069018;
  _swift_unknownObjectWeakInit(lVar5 + _DAT_113069018,0);
  lVar3 = _DAT_113069020;
  _swift_unknownObjectWeakInit(lVar5 + _DAT_113069020,0);
  *(long *)(lVar5 + _DAT_113068fd0) = param_1;
  *(undefined8 *)(lVar5 + _DAT_113068fd8) = param_2;
  FUN_1041f43d8(param_3,lVar5 + _DAT_113068fe0);
  *(undefined8 *)(lVar5 + _DAT_113068fe8) = param_4;
  *(undefined8 *)(lVar5 + _DAT_113068ff0) = param_5;
  *(undefined8 *)(lVar5 + _DAT_113068ff8) = param_6;
  *(undefined8 *)(lVar5 + _DAT_113069000) = param_7;
  *(undefined8 *)(lVar5 + _DAT_113069008) = param_8;
  *(undefined8 *)(lVar5 + _DAT_113069010) = param_9;
  _swift_beginAccess(lVar5 + lVar2,auStack_80,1,0);
  _swift_unknownObjectWeakAssign(lVar5 + lVar2,param_10);
  _swift_beginAccess(lVar5 + lVar3,auStack_98,1,0);
  _swift_unknownObjectWeakAssign(lVar5 + lVar3,param_11);
  puVar1 = PTR_s_init_1125d9248;
  lStack_a8 = lVar5;
  lStack_a0 = lVar4;
  _swift_unknownObjectRetain(param_1);
  _swift_unknownObjectRetain(param_2);
  _swift_unknownObjectRetain(param_4);
  _swift_unknownObjectRetain(param_5);
  _swift_unknownObjectRetain(param_6);
  _swift_unknownObjectRetain(param_7);
  _objc_retain(param_9);
  plVar6 = &lStack_a8;
  _objc_msgSendSuper2(plVar6,puVar1);
  aplStack_c0[0] = plVar6;
  func_0x00010008a7c8(&uStack_b0,aplStack_c0);
  func_0x000100083b20(aplStack_c0);
  _swift_release(uStack_b0);
  _swift_unknownObjectRelease(aplStack_c0[0]);
  return plVar6;
}



/* Entry: 1041f4a60; end: 1041f4a7f;  */

void FUN_1041f4a60(void)

{
  _objc_opt_self(&PTR_PTR_1129908f8);
  return;
}



/* Entry: 1041f4a80; end: 1041f4adf; -[_TtC15AdPlaybackScope25SCAdPlaybackScopeServices init] */

void FUN_1041f4a80(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("AdPlaybackScope.SCAdPlaybackScopeServices",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1041f4aac);
  (*pcVar1)();
}



/* Entry: 1041f4ae0; end: 1041f4aef;  */

undefined1  [16] FUN_1041f4ae0(void)

{
  return ZEXT816(0x110750c78);
}



/* Entry: 1041f4af0; end: 1041f4aff; -[_TtC15AdPlaybackScope25SCAdPlaybackScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f4af0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113069030));
  return;
}



/* Entry: 1041f4b00; end: 1041f4b1f;  */

void FUN_1041f4b00(void)

{
  _objc_opt_self(&PTR_PTR_112990a08);
  return;
}



/* Entry: 1041f4b20; end: 1041f4b37;  */

void FUN_1041f4b20(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1041f4b38; end: 1041f4c0f;  */

void FUN_1041f4b38(void)

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



/* Entry: 1041f4c10; end: 1041f4c2f;  */

void FUN_1041f4c10(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1041f4c30; end: 1041f4c6f;  */

void FUN_1041f4c30(void)

{
  undefined *puVar1;
  
  if (puRam0000000113069088 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce1d60;
  _swift_getWitnessTable(&UNK_10dce1d60,&UNK_110750d48);
  puRam0000000113069088 = puVar1;
  return;
}



/* Entry: 1041f4c70; end: 1041f4c7f;  */

undefined1  [16] FUN_1041f4c70(void)

{
  return ZEXT816(0x110750d48);
}



/* Entry: 1041f4c80; end: 1041f4c8f; -[SCAdMediaContent topMediaContent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f4c80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113069090));
  return;
}



/* Entry: 1041f4c90; end: 1041f4c9f; -[SCAdMediaContent bottomMediaContent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f4c90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113069098));
  return;
}



/* Entry: 1041f4ca0; end: 1041f4d13; -[SCAdMediaContent profileIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f4ca0(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = ((undefined8 *)(param_1 + _DAT_1130690a0))[1];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_1130690a0);
    func_0x00010006c00c(uVar3,uVar2);
    uVar1 = uVar3;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar3,uVar2);
    func_0x0001000b44c0(uVar3,uVar2);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1041f4d14; end: 1041f4d97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f4d14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113069090) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113069098) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130690a0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1041f4d98; end: 1041f4e6f; -[SCAdMediaContent initWithTopMediaContent:bottomMediaContent:profileIcon:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f4d98(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  _swift_getObjectType();
  if (param_5 == 0) {
    _objc_retain(param_3);
    _objc_retain(param_4);
    param_2 = -0x1000000000000000;
  }
  else {
    _objc_retain(param_3);
    _objc_retain(param_4);
    lVar3 = param_5;
    _objc_retain(param_5);
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    _objc_release(lVar3);
  }
  *(undefined8 *)(param_1 + _DAT_113069090) = param_3;
  *(undefined8 *)(param_1 + _DAT_113069098) = param_4;
  plVar1 = (long *)(param_1 + _DAT_1130690a0);
  *plVar1 = param_5;
  plVar1[1] = param_2;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1041f4e70; end: 1041f4ecf; -[SCAdMediaContent init] */

void FUN_1041f4e70(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("AdMediaServices.AdMediaContent",0x1e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1041f4e9c);
  (*pcVar1)();
}



/* Entry: 1041f4ed0; end: 1041f4f1b; -[SCAdMediaContent .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f4ed0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  _objc_release(*(undefined8 *)(param_1 + _DAT_113069090));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113069098));
  uVar2 = *(ulong *)(param_1 + _DAT_1130690a0);
  uVar1 = ((ulong *)(param_1 + _DAT_1130690a0))[1];
  if (0xe < uVar1 >> 0x3c) {
    return;
  }
  uVar3 = (uint)(uVar1 >> 0x3e);
  if (uVar3 == 1) {
    uVar2 = uVar1 & 0x3fffffffffffffff;
  }
  else if (uVar3 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 1041f4f1c; end: 1041f4f3b;  */

void FUN_1041f4f1c(void)

{
  _objc_opt_self(&PTR_PTR_112990ac8);
  return;
}



/* Entry: 1041f4f3c; end: 1041f4f4f;  */

bool FUN_1041f4f3c(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1041f4f50; end: 1041f5027;  */

void FUN_1041f4f50(void)

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



/* Entry: 1041f5028; end: 1041f5047;  */

void FUN_1041f5028(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1041f5048; end: 1041f5087;  */

void FUN_1041f5048(void)

{
  undefined *puVar1;
  
  if (puRam00000001130690d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce1e50;
  _swift_getWitnessTable(&UNK_10dce1e50,&UNK_110750dc0);
  puRam00000001130690d0 = puVar1;
  return;
}



/* Entry: 1041f5088; end: 1041f50ab;  */

undefined1  [16] FUN_1041f5088(void)

{
  return ZEXT816(0x110750dc0);
}



/* Entry: 1041f50ac; end: 1041f5183;  */

void FUN_1041f50ac(void)

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



/* Entry: 1041f5184; end: 1041f51a7;  */

void FUN_1041f5184(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1041f51a8; end: 1041f51e7;  */

void FUN_1041f51a8(void)

{
  undefined *puVar1;
  
  if (puRam00000001130690d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce1f10;
  _swift_getWitnessTable(&UNK_10dce1f10,&UNK_110750e38);
  puRam00000001130690d8 = puVar1;
  return;
}



/* Entry: 1041f51e8; end: 1041f51f7;  */

undefined1  [16] FUN_1041f51e8(void)

{
  return ZEXT816(0x110750e38);
}



/* Entry: 1041f51f8; end: 1041f5207; -[_TtC15AdMediaServices15AdMediaServices adContentDelivery] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f51f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130690e0));
  return;
}



/* Entry: 1041f5208; end: 1041f5217; -[_TtC15AdMediaServices15AdMediaServices adMediaCoordinating] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f5208(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130690e8));
  return;
}



/* Entry: 1041f5218; end: 1041f5227; -[_TtC15AdMediaServices15AdMediaServices adWebViewPrefetchHintsManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f5218(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130690f8));
  return;
}



/* Entry: 1041f5228; end: 1041f5237; -[_TtC15AdMediaServices15AdMediaServices adWebViewPreloadManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f5228(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113069100));
  return;
}



/* Entry: 1041f5238; end: 1041f5247; -[_TtC15AdMediaServices15AdMediaServices adWebViewAssetPrefetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f5238(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113069108));
  return;
}



/* Entry: 1041f5248; end: 1041f52fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f5248(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130690e0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130690e8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_1130690f0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_1130690f8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113069100) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113069108) = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1041f52fc; end: 1041f53e3; -[_TtC15AdMediaServices15AdMediaServices initWithAdContentDelivery:adMediaCoordinating:adMediaFetching:adWebViewPrefetchHintsManager:adWebViewPreloadManager:adWebViewAssetPrefetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f52fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_1130690e0) = param_3;
  *(undefined8 *)(param_1 + _DAT_1130690e8) = param_4;
  *(undefined8 *)(param_1 + _DAT_1130690f0) = param_5;
  *(undefined8 *)(param_1 + _DAT_1130690f8) = param_6;
  *(undefined8 *)(param_1 + _DAT_113069100) = param_7;
  *(undefined8 *)(param_1 + _DAT_113069108) = param_8;
  puVar1 = PTR_s_init_1125d9248;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_msgSendSuper2(&lStack_60,puVar1);
  return;
}



/* Entry: 1041f53e4; end: 1041f5443; -[_TtC15AdMediaServices15AdMediaServices init] */

void FUN_1041f53e4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("AdMediaServices.AdMediaServices",0x1f,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1041f5410);
  (*pcVar1)();
}



/* Entry: 1041f5444; end: 1041f54bb; -[_TtC15AdMediaServices15AdMediaServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f5444(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130690e0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130690e8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130690f0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130690f8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113069100));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113069108));
  return;
}



/* Entry: 1041f54bc; end: 1041f54db; -[SCAdTopMediaContentVideo videoResult] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f54bc(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113069138));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1041f54dc; end: 1041f54fb; -[SCAdTopMediaContentVideo playbackAsset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f54dc(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113069140));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1041f54fc; end: 1041f556f; -[SCAdTopMediaContentVideo firstFrameImageData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f54fc(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = ((undefined8 *)(param_1 + _DAT_113069148))[1];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_113069148);
    func_0x00010006c00c(uVar3,uVar2);
    uVar1 = uVar3;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar3,uVar2);
    func_0x0001000b44c0(uVar3,uVar2);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1041f5570; end: 1041f5583;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f5570(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113069138) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113069148);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113069140) = 0;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1041f5584; end: 1041f55ab; -[SCAdTopMediaContentVideo initWithVideoResult:firstFrameImageData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f5584(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  _swift_getObjectType();
  if (param_4 == 0) {
    _swift_unknownObjectRetain(param_3);
    param_2 = -0x1000000000000000;
  }
  else {
    _swift_unknownObjectRetain(param_3);
    lVar3 = param_4;
    _objc_retain(param_4);
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    _objc_release(lVar3);
  }
  *(undefined8 *)(param_1 + _DAT_113069138) = param_3;
  plVar1 = (long *)(param_1 + _DAT_113069148);
  *plVar1 = param_4;
  plVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_113069140) = 0;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1041f55ac; end: 1041f562b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f55ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  long *param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + *param_4) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113069148);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(unaff_x20 + *param_5) = 0;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1041f562c; end: 1041f563f; -[SCAdTopMediaContentVideo initWithPlaybackAsset:firstFrameImageData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f562c(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  _swift_getObjectType();
  if (param_4 == 0) {
    _swift_unknownObjectRetain(param_3);
    param_2 = -0x1000000000000000;
  }
  else {
    _swift_unknownObjectRetain(param_3);
    lVar3 = param_4;
    _objc_retain(param_4);
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    _objc_release(lVar3);
  }
  *(undefined8 *)(param_1 + _DAT_113069140) = param_3;
  plVar1 = (long *)(param_1 + _DAT_113069148);
  *plVar1 = param_4;
  plVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_113069138) = 0;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1041f5640; end: 1041f5703;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f5640(long param_1,long param_2,undefined8 param_3,long param_4,long *param_5,
                  long *param_6)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  _swift_getObjectType();
  if (param_4 == 0) {
    _swift_unknownObjectRetain(param_3);
    param_2 = -0x1000000000000000;
  }
  else {
    _swift_unknownObjectRetain(param_3);
    lVar3 = param_4;
    _objc_retain(param_4);
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    _objc_release(lVar3);
  }
  *(undefined8 *)(param_1 + *param_5) = param_3;
  plVar1 = (long *)(param_1 + _DAT_113069148);
  *plVar1 = param_4;
  plVar1[1] = param_2;
  *(undefined8 *)(param_1 + *param_6) = 0;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1041f5704; end: 1041f5763; -[SCAdTopMediaContentVideo init] */

void FUN_1041f5704(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("AdMediaServices.AdTopMediaContentVideo",0x26,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1041f5730);
  (*pcVar1)();
}



/* Entry: 1041f5764; end: 1041f57af; -[SCAdTopMediaContentVideo .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f5764(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113069138));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113069140));
  uVar2 = *(ulong *)(param_1 + _DAT_113069148);
  uVar1 = ((ulong *)(param_1 + _DAT_113069148))[1];
  if (0xe < uVar1 >> 0x3c) {
    return;
  }
  uVar3 = (uint)(uVar1 >> 0x3e);
  if (uVar3 == 1) {
    uVar2 = uVar1 & 0x3fffffffffffffff;
  }
  else if (uVar3 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 1041f57b0; end: 1041f57cf;  */

void FUN_1041f57b0(void)

{
  _objc_opt_self(&PTR_PTR_112990c80);
  return;
}



/* Entry: 1041f57d0; end: 1041f5937;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_1041f57d0(ulong param_1,ulong param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(param_2 >> 0x3c) & 3;
  if (uVar1 < 2) {
    if (uVar1 == 0) goto SUB_10006c00c;
  }
  else if (uVar1 != 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
    return;
  }
  param_2 = param_2 & 0xcfffffffffffffff;
SUB_10006c00c:
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 == 1) {
    param_1 = param_2 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_1);
  return;
}



/* Entry: 1041f5938; end: 1041f596f;  */

void FUN_1041f5938(undefined8 param_1)

{
  if (lRam00000001130691d0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7f5fc4);
  return;
}



/* Entry: 1041f5970; end: 1041f5bff;  */

long * FUN_1041f5970(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  code *pcVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  
  uVar12 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar12 >> 0x11 & 1) == 0) {
    lVar13 = 0;
    __s10Foundation3URLVMa();
    lVar20 = *(long *)(lVar13 + -8);
    pcVar16 = *(code **)(lVar20 + 0x30);
    plVar14 = param_2;
    (*pcVar16)(param_2,1,lVar13);
    if ((int)plVar14 == 0) {
      (**(code **)(lVar20 + 0x10))(param_1,param_2,lVar13);
      (**(code **)(lVar20 + 0x38))(param_1,0,1,lVar13);
    }
    else {
      lVar15 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      _memcpy(param_1,param_2,*(undefined8 *)(*(long *)(lVar15 + -8) + 0x40));
    }
    iVar10 = *(int *)(param_3 + 0x18);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar10);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar10);
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    iVar10 = *(int *)(param_3 + 0x20);
    uVar18 = *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) = uVar18;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar10);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar10);
    *puVar1 = *puVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    iVar10 = *(int *)(param_3 + 0x28);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
    uVar4 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar4;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar10);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar10);
    uVar5 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar5;
    iVar10 = *(int *)(param_3 + 0x30);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
    uVar6 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar6;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar10);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar10);
    uVar7 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar7;
    iVar10 = *(int *)(param_3 + 0x38);
    uVar19 = *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34)) = uVar19;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar10);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar10);
    uVar8 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar8;
    lVar11 = (long)*(int *)(param_3 + 0x40);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
    uVar9 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar9;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar3);
    _objc_retain(uVar18);
    _swift_bridgeObjectRetain(uVar4);
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(uVar7);
    _swift_bridgeObjectRetain(uVar19);
    _swift_bridgeObjectRetain(uVar8);
    _swift_bridgeObjectRetain(uVar9);
    lVar15 = (long)param_2 + lVar11;
    (*pcVar16)(lVar15,1,lVar13);
    if ((int)lVar15 == 0) {
      (**(code **)(lVar20 + 0x10))((long)param_1 + lVar11,(long)param_2 + lVar11,lVar13);
      (**(code **)(lVar20 + 0x38))((long)param_1 + lVar11,0,1,lVar13);
    }
    else {
      lVar13 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      _memcpy((long)param_1 + lVar11,(long)param_2 + lVar11,
              *(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
    }
  }
  else {
    lVar13 = *param_2;
    *param_1 = lVar13;
    uVar17 = (ulong)uVar12 & 0xff;
    param_1 = (long *)(lVar13 + (uVar17 + 0x10 & (uVar17 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 1041f5c00; end: 1041f5d37;  */

void FUN_1041f5c00(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar2 + -8);
  pcVar5 = *(code **)(lVar4 + 0x30);
  lVar3 = param_1;
  (*pcVar5)(param_1,1,lVar2);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar4 + 8))(param_1,lVar2);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x14) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x18) + 8));
  _objc_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x1c)));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x24) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x28) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x2c) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x30) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x34)));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x38) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x3c) + 8));
  iVar1 = *(int *)(param_2 + 0x40);
  lVar3 = param_1 + iVar1;
  (*pcVar5)(lVar3,1,lVar2);
  if ((int)lVar3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001041f5d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))(param_1 + iVar1,lVar2);
  return;
}



/* Entry: 1041f5d38; end: 1041f5f9b;  */

long FUN_1041f5d38(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  
  lVar12 = 0;
  __s10Foundation3URLVMa();
  lVar17 = *(long *)(lVar12 + -8);
  pcVar14 = *(code **)(lVar17 + 0x30);
  lVar13 = param_2;
  (*pcVar14)(param_2,1,lVar12);
  if ((int)lVar13 == 0) {
    (**(code **)(lVar17 + 0x10))(param_1,param_2,lVar12);
    (**(code **)(lVar17 + 0x38))(param_1,0,1,lVar12);
  }
  else {
    lVar13 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    _memcpy(param_1,param_2,*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
  }
  iVar10 = *(int *)(param_3 + 0x18);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  puVar1 = (undefined8 *)(param_1 + iVar10);
  puVar2 = (undefined8 *)(param_2 + iVar10);
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  iVar10 = *(int *)(param_3 + 0x20);
  uVar15 = *(undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x1c)) = uVar15;
  puVar1 = (undefined8 *)(param_1 + iVar10);
  puVar2 = (undefined8 *)(param_2 + iVar10);
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  iVar10 = *(int *)(param_3 + 0x28);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x24));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x24));
  uVar4 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar4;
  puVar1 = (undefined8 *)(param_1 + iVar10);
  puVar2 = (undefined8 *)(param_2 + iVar10);
  uVar5 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar5;
  iVar10 = *(int *)(param_3 + 0x30);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x2c));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x2c));
  uVar6 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar6;
  puVar1 = (undefined8 *)(param_1 + iVar10);
  puVar2 = (undefined8 *)(param_2 + iVar10);
  uVar7 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar7;
  iVar10 = *(int *)(param_3 + 0x38);
  uVar16 = *(undefined8 *)(param_2 + *(int *)(param_3 + 0x34));
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x34)) = uVar16;
  puVar1 = (undefined8 *)(param_1 + iVar10);
  puVar2 = (undefined8 *)(param_2 + iVar10);
  uVar8 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar8;
  lVar11 = (long)*(int *)(param_3 + 0x40);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x3c));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x3c));
  uVar9 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar9;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar3);
  _objc_retain(uVar15);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar16);
  _swift_bridgeObjectRetain(uVar8);
  _swift_bridgeObjectRetain(uVar9);
  lVar13 = param_2 + lVar11;
  (*pcVar14)(lVar13,1,lVar12);
  if ((int)lVar13 == 0) {
    (**(code **)(lVar17 + 0x10))(param_1 + lVar11,param_2 + lVar11,lVar12);
    (**(code **)(lVar17 + 0x38))(param_1 + lVar11,0,1,lVar12);
  }
  else {
    lVar13 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    _memcpy(param_1 + lVar11,param_2 + lVar11,*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
  }
  return param_1;
}



/* Entry: 1041f5f9c; end: 1041f6307;  */

long FUN_1041f5f9c(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar8 = *(long *)(lVar3 + -8);
  pcVar9 = *(code **)(lVar8 + 0x30);
  lVar5 = param_1;
  (*pcVar9)(param_1,1,lVar3);
  lVar4 = param_2;
  (*pcVar9)(param_2,1,lVar3);
  if ((int)lVar5 == 0) {
    if ((int)lVar4 == 0) {
      (**(code **)(lVar8 + 0x18))(param_1,param_2,lVar3);
      goto LAB_1041f606c;
    }
    (**(code **)(lVar8 + 8))(param_1,lVar3);
  }
  else if ((int)lVar4 == 0) {
    (**(code **)(lVar8 + 0x10))(param_1,param_2,lVar3);
    (**(code **)(lVar8 + 0x38))(param_1,0,1,lVar3);
    goto LAB_1041f606c;
  }
  lVar5 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  _memcpy(param_1,param_2,*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
LAB_1041f606c:
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  *puVar1 = *puVar2;
  uVar6 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x18));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x18));
  *puVar1 = *puVar2;
  uVar6 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  lVar5 = (long)*(int *)(param_3 + 0x1c);
  uVar6 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = *(undefined8 *)(param_2 + lVar5);
  _objc_retain();
  _objc_release(uVar6);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x20));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x20));
  uVar6 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  *puVar1 = uVar6;
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x24));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x24));
  *puVar1 = *puVar2;
  uVar6 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x28));
  *puVar1 = *puVar2;
  uVar6 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x2c));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x2c));
  *puVar1 = *puVar2;
  uVar6 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x30));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x30));
  *puVar1 = *puVar2;
  uVar6 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  lVar5 = (long)*(int *)(param_3 + 0x34);
  uVar6 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = *(undefined8 *)(param_2 + lVar5);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x38));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x38));
  *puVar1 = *puVar2;
  uVar6 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x3c));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x3c));
  *puVar1 = *puVar2;
  uVar6 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  lVar7 = (long)*(int *)(param_3 + 0x40);
  lVar5 = param_1 + lVar7;
  (*pcVar9)(lVar5,1,lVar3);
  lVar4 = param_2 + lVar7;
  (*pcVar9)(lVar4,1,lVar3);
  if ((int)lVar5 == 0) {
    if ((int)lVar4 == 0) {
      (**(code **)(lVar8 + 0x18))(param_1 + lVar7,param_2 + lVar7,lVar3);
      return param_1;
    }
    (**(code **)(lVar8 + 8))(param_1 + lVar7,lVar3);
  }
  else if ((int)lVar4 == 0) {
    (**(code **)(lVar8 + 0x10))(param_1 + lVar7,param_2 + lVar7,lVar3);
    (**(code **)(lVar8 + 0x38))(param_1 + lVar7,0,1,lVar3);
    return param_1;
  }
  lVar5 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  _memcpy(param_1 + lVar7,param_2 + lVar7,*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  return param_1;
}



/* Entry: 1041f6308; end: 1041f64ab;  */

long FUN_1041f6308(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  undefined8 uVar9;
  
  lVar5 = 0;
  __s10Foundation3URLVMa();
  lVar7 = *(long *)(lVar5 + -8);
  pcVar8 = *(code **)(lVar7 + 0x30);
  lVar6 = param_2;
  (*pcVar8)(param_2,1,lVar5);
  if ((int)lVar6 == 0) {
    (**(code **)(lVar7 + 0x20))(param_1,param_2,lVar5);
    (**(code **)(lVar7 + 0x38))(param_1,0,1,lVar5);
  }
  else {
    lVar6 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    _memcpy(param_1,param_2,*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  }
  iVar1 = *(int *)(param_3 + 0x18);
  puVar3 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar9 = *puVar3;
  puVar4 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar4[1] = puVar3[1];
  *puVar4 = uVar9;
  puVar3 = (undefined8 *)(param_2 + iVar1);
  uVar9 = *puVar3;
  puVar4 = (undefined8 *)(param_1 + iVar1);
  puVar4[1] = puVar3[1];
  *puVar4 = uVar9;
  iVar1 = *(int *)(param_3 + 0x20);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x1c)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  puVar3 = (undefined8 *)(param_1 + iVar1);
  puVar4 = (undefined8 *)(param_2 + iVar1);
  *puVar3 = *puVar4;
  *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar4 + 1);
  iVar1 = *(int *)(param_3 + 0x28);
  puVar3 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x24));
  uVar9 = *puVar3;
  puVar4 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x24));
  puVar4[1] = puVar3[1];
  *puVar4 = uVar9;
  puVar3 = (undefined8 *)(param_2 + iVar1);
  uVar9 = *puVar3;
  puVar4 = (undefined8 *)(param_1 + iVar1);
  puVar4[1] = puVar3[1];
  *puVar4 = uVar9;
  iVar1 = *(int *)(param_3 + 0x30);
  puVar3 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x2c));
  uVar9 = *puVar3;
  puVar4 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x2c));
  puVar4[1] = puVar3[1];
  *puVar4 = uVar9;
  puVar3 = (undefined8 *)(param_2 + iVar1);
  uVar9 = *puVar3;
  puVar4 = (undefined8 *)(param_1 + iVar1);
  puVar4[1] = puVar3[1];
  *puVar4 = uVar9;
  iVar1 = *(int *)(param_3 + 0x38);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x34)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x34));
  puVar3 = (undefined8 *)(param_2 + iVar1);
  uVar9 = *puVar3;
  puVar4 = (undefined8 *)(param_1 + iVar1);
  puVar4[1] = puVar3[1];
  *puVar4 = uVar9;
  lVar2 = (long)*(int *)(param_3 + 0x40);
  puVar3 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x3c));
  uVar9 = *puVar3;
  puVar4 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x3c));
  puVar4[1] = puVar3[1];
  *puVar4 = uVar9;
  lVar6 = param_2 + lVar2;
  (*pcVar8)(lVar6,1,lVar5);
  if ((int)lVar6 == 0) {
    (**(code **)(lVar7 + 0x20))(param_1 + lVar2,param_2 + lVar2,lVar5);
    (**(code **)(lVar7 + 0x38))(param_1 + lVar2,0,1,lVar5);
  }
  else {
    lVar6 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    _memcpy(param_1 + lVar2,param_2 + lVar2,*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  }
  return param_1;
}



/* Entry: 1041f64ac; end: 1041f6783;  */

long FUN_1041f64ac(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar10 = *(long *)(lVar4 + -8);
  pcVar11 = *(code **)(lVar10 + 0x30);
  lVar8 = param_1;
  (*pcVar11)(param_1,1,lVar4);
  lVar5 = param_2;
  (*pcVar11)(param_2,1,lVar4);
  if ((int)lVar8 == 0) {
    if ((int)lVar5 == 0) {
      (**(code **)(lVar10 + 0x28))(param_1,param_2,lVar4);
      goto LAB_1041f657c;
    }
    (**(code **)(lVar10 + 8))(param_1,lVar4);
  }
  else if ((int)lVar5 == 0) {
    (**(code **)(lVar10 + 0x20))(param_1,param_2,lVar4);
    (**(code **)(lVar10 + 0x38))(param_1,0,1,lVar4);
    goto LAB_1041f657c;
  }
  lVar8 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  _memcpy(param_1,param_2,*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
LAB_1041f657c:
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar7 = puVar2[1];
  uVar6 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar7;
  _swift_bridgeObjectRelease(uVar6);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x18));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x18));
  uVar7 = puVar2[1];
  uVar6 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar7;
  _swift_bridgeObjectRelease(uVar6);
  lVar8 = (long)*(int *)(param_3 + 0x1c);
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  *(undefined8 *)(param_1 + lVar8) = *(undefined8 *)(param_2 + lVar8);
  _objc_release(uVar7);
  iVar3 = *(int *)(param_3 + 0x24);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x20));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x20));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  puVar1 = (undefined8 *)(param_1 + iVar3);
  puVar2 = (undefined8 *)(param_2 + iVar3);
  uVar7 = puVar2[1];
  uVar6 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar7;
  _swift_bridgeObjectRelease(uVar6);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x28));
  uVar7 = puVar2[1];
  uVar6 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar7;
  _swift_bridgeObjectRelease(uVar6);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x2c));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x2c));
  uVar7 = puVar2[1];
  uVar6 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar7;
  _swift_bridgeObjectRelease(uVar6);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x30));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x30));
  uVar7 = puVar2[1];
  uVar6 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar7;
  _swift_bridgeObjectRelease(uVar6);
  lVar8 = (long)*(int *)(param_3 + 0x34);
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  *(undefined8 *)(param_1 + lVar8) = *(undefined8 *)(param_2 + lVar8);
  _swift_bridgeObjectRelease(uVar7);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x38));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x38));
  uVar7 = puVar2[1];
  uVar6 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar7;
  _swift_bridgeObjectRelease(uVar6);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x3c));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x3c));
  uVar7 = puVar2[1];
  uVar6 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar7;
  _swift_bridgeObjectRelease(uVar6);
  lVar9 = (long)*(int *)(param_3 + 0x40);
  lVar8 = param_1 + lVar9;
  (*pcVar11)(lVar8,1,lVar4);
  lVar5 = param_2 + lVar9;
  (*pcVar11)(lVar5,1,lVar4);
  if ((int)lVar8 == 0) {
    if ((int)lVar5 == 0) {
      (**(code **)(lVar10 + 0x28))(param_1 + lVar9,param_2 + lVar9,lVar4);
      return param_1;
    }
    (**(code **)(lVar10 + 8))(param_1 + lVar9,lVar4);
  }
  else if ((int)lVar5 == 0) {
    (**(code **)(lVar10 + 0x20))(param_1 + lVar9,param_2 + lVar9,lVar4);
    (**(code **)(lVar10 + 0x38))(param_1 + lVar9,0,1,lVar4);
    return param_1;
  }
  lVar8 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  _memcpy(param_1 + lVar9,param_2 + lVar9,*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  return param_1;
}



/* Entry: 1041f6784; end: 1041f679b;  */

void FUN_1041f6784(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1041f679c; end: 1041f6833;  */

void FUN_1041f679c(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = 0x13f;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_88 = *(long *)(lVar1 + -8) + 0x40;
    puStack_80 = &UNK_10dce2038;
    puStack_78 = &UNK_10dce2038;
    puStack_70 = &UNK_10dce2050;
    puStack_68 = &UNK_10dce2068;
    puStack_60 = &UNK_10dce2038;
    puStack_58 = &UNK_10dce2038;
    puStack_50 = &UNK_10dce2038;
    puStack_48 = &UNK_10dce2038;
    puStack_40 = &UNK_10dce2050;
    puStack_38 = &UNK_10dce2038;
    puStack_30 = &UNK_10dce2038;
    lStack_28 = lStack_88;
    _swift_initStructMetadata(param_1,0x100,0xd,&lStack_88,param_1 + 0x10);
  }
  return;
}



/* Entry: 1041f6834; end: 1041f702b;  */

long * FUN_1041f6834(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_3 + -8);
  uVar2 = *(uint *)(lVar7 + 0x50);
  if ((uVar2 >> 0x11 & 1) == 0) {
    plVar4 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    iVar3 = (int)plVar4;
    if (iVar3 == 2) {
      lVar7 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar7 + -8) + 0x10))(param_1,param_2,lVar7);
      uVar5 = 2;
    }
    else if (iVar3 == 1) {
      lVar7 = *param_2;
      lVar1 = param_2[1];
      func_0x00010006c00c(lVar7,lVar1);
      *param_1 = lVar7;
      param_1[1] = lVar1;
      lVar7 = param_2[3];
      param_1[2] = param_2[2];
      param_1[3] = lVar7;
      _swift_bridgeObjectRetain();
      uVar5 = 1;
    }
    else {
      if (iVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memcpy_11034c658)(param_1,param_2,*(undefined8 *)(lVar7 + 0x40));
        return param_1;
      }
      *param_1 = *param_2;
      _objc_retain();
      uVar5 = 0;
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,uVar5);
  }
  else {
    lVar7 = *param_2;
    *param_1 = lVar7;
    uVar6 = (ulong)uVar2 & 0xff;
    param_1 = (long *)(lVar7 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 1041f702c; end: 1041f70ff;  */

void FUN_1041f702c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1041f7100; end: 1041f711f;  */

void FUN_1041f7100(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 1041f7120; end: 1041f713f; -[SCAdBottomMediaContent description] */

void FUN_1041f7120(void)

{
  func_0x0001041f7684();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1041f7140; end: 1041f7187; -[SCAdBottomMediaContent init] */

void FUN_1041f7140(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdMediaServices/AdBottomMediaContentWrapper.swift",0x31,2,0x3b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1041f7188);
  (*pcVar1)();
}



/* Entry: 1041f7188; end: 1041f718b; -[SCAdBottomMediaContent copyWithZone:] */

void FUN_1041f7188(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1041f718c; end: 1041f7247; +[SCAdBottomMediaContent appInstallWithAppInstallIconData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f718c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  uVar2 = param_3;
  _objc_retain(param_3);
  __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
  _objc_release(uVar2);
  lVar3 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar3 + _DAT_1130692e0) = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_1130692e8);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(lVar3 + _DAT_1130692f0);
  puVar1[1] = 0xf000000000000000;
  *puVar1 = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_1130692f8);
  puVar1[1] = 0xf000000000000000;
  *puVar1 = 0;
  *(undefined8 *)(lVar3 + _DAT_113069300) = 0;
  lStack_40 = lVar3;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1041f7248; end: 1041f7307; +[SCAdBottomMediaContent deeplinkWithDeeplinkIconData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f7248(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  uVar2 = param_3;
  _objc_retain(param_3);
  __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
  _objc_release(uVar2);
  lVar3 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar3 + _DAT_1130692e0) = 1;
  puVar1 = (undefined8 *)(lVar3 + _DAT_1130692e8);
  puVar1[1] = 0xf000000000000000;
  *puVar1 = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_1130692f0);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(lVar3 + _DAT_1130692f8);
  puVar1[1] = 0xf000000000000000;
  *puVar1 = 0;
  *(undefined8 *)(lVar3 + _DAT_113069300) = 0;
  lStack_40 = lVar3;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1041f7308; end: 1041f73c7; +[SCAdBottomMediaContent reminderWithReminderIconData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f7308(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  uVar2 = param_3;
  _objc_retain(param_3);
  __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
  _objc_release(uVar2);
  lVar3 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar3 + _DAT_1130692e0) = 2;
  puVar1 = (undefined8 *)(lVar3 + _DAT_1130692e8);
  puVar1[1] = 0xf000000000000000;
  *puVar1 = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_1130692f0);
  puVar1[1] = 0xf000000000000000;
  *puVar1 = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_1130692f8);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(lVar3 + _DAT_113069300) = 0;
  lStack_40 = lVar3;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1041f73c8; end: 1041f7567; +[SCAdBottomMediaContent collectionWithCollectionIconsData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f73c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (param_3,PTR___sSiN_11034deb0,PTR___s10Foundation4DataVN_110350ae0,
             PTR___sSiSHsWP_11034dec0);
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_1130692e0) = 3;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130692e8);
  puVar1[1] = 0xf000000000000000;
  *puVar1 = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130692f0);
  puVar1[1] = 0xf000000000000000;
  *puVar1 = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130692f8);
  puVar1[1] = 0xf000000000000000;
  *puVar1 = 0;
  *(undefined8 *)(lVar2 + _DAT_113069300) = param_3;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1041f7568; end: 1041f75db; -[SCAdBottomMediaContent matchAppInstall:deeplink:reminder:collection:] */

void FUN_1041f7568(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  func_0x0001041f747c(FUN_1041f7908,auStack_40,FUN_1041f7994,auStack_60,0x1041f7998,auStack_80,
                      0x1041f7944,auStack_a0);
  _objc_release(param_1);
  return;
}



/* Entry: 1041f75dc; end: 1041f760f;  */

void FUN_1041f75dc(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1041f7610; end: 1041f7673; -[SCAdBottomMediaContent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f7610(long param_1)

{
  func_0x0001000b44c0(*(undefined8 *)(param_1 + _DAT_1130692e8),
                      ((undefined8 *)(param_1 + _DAT_1130692e8))[1]);
  func_0x0001000b44c0(*(undefined8 *)(param_1 + _DAT_1130692f0),
                      ((undefined8 *)(param_1 + _DAT_1130692f0))[1]);
  func_0x0001000b44c0(*(undefined8 *)(param_1 + _DAT_1130692f8),
                      ((undefined8 *)(param_1 + _DAT_1130692f8))[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113069300));
  return;
}



/* Entry: 1041f7674; end: 1041f773f;  */

ulong FUN_1041f7674(ulong param_1)

{
  if (3 < param_1) {
    param_1 = 4;
  }
  return param_1;
}



/* Entry: 1041f7740; end: 1041f775f;  */

void FUN_1041f7740(void)

{
  _objc_opt_self(&PTR_PTR_112990d58);
  return;
}



/* Entry: 1041f7760; end: 1041f78c7;  */

int FUN_1041f7760(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1041f77dc;
        goto LAB_1041f77c0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1041f77c0:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_1041f77dc:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1041f78c8; end: 1041f7907;  */

void FUN_1041f78c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113069330 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce210c;
  _swift_getWitnessTable(&UNK_10dce210c,&UNK_110751038);
  puRam0000000113069330 = puVar1;
  return;
}



/* Entry: 1041f7908; end: 1041f790b;  */

void FUN_1041f7908(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1041f790c; end: 1041f7993;  */

void FUN_1041f790c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1041f7994; end: 1041f799b;  */

void FUN_1041f7994(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1041f799c; end: 1041f79a7; -[SCAdOperaMediaDataModel topVideoURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f799c(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffd0 + -extraout_x8;
  func_0x000100029394(param_1 + _DAT_1138132b0,puVar4);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1041f79a8; end: 1041f79b3; -[SCAdOperaMediaDataModel topVideoKey] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f79a8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1138132b8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1138132b8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1041f79b4; end: 1041f79bf; -[SCAdOperaMediaDataModel topVideoFirstFrameKey] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f79b4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1138132c0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1138132c0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1041f79c0; end: 1041f79cf; -[SCAdOperaMediaDataModel topVideoSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f79c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1138132c8));
  return;
}



/* Entry: 1041f79d0; end: 1041f79df; -[SCAdOperaMediaDataModel topVideoLength] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f79d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1138132d0));
  return;
}



/* Entry: 1041f79e0; end: 1041f79eb; -[SCAdOperaMediaDataModel topImageKey] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f79e0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1138132d8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1138132d8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1041f79ec; end: 1041f79f7; -[SCAdOperaMediaDataModel deeplinkIconKey] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f79ec(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1138132e0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1138132e0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1041f79f8; end: 1041f7a03; -[SCAdOperaMediaDataModel appInstallIconKey] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f79f8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1138132e8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1138132e8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1041f7a04; end: 1041f7a0f; -[SCAdOperaMediaDataModel reminderIconKey] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f7a04(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1138132f0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1138132f0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1041f7a10; end: 1041f7a73; -[SCAdOperaMediaDataModel collectionIconsKey] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f7a10(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_1138132f8);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1041f7a74; end: 1041f7a7f; -[SCAdOperaMediaDataModel profileIconKey] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f7a74(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113813300))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113813300);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1041f7a80; end: 1041f7a8b; -[SCAdOperaMediaDataModel contentId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041f7a80(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113813308))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113813308);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1041f7a8c; end: 1041f7ae3;  */

void FUN_1041f7a8c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}


