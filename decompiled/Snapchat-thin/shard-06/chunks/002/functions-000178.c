/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10462d70c; end: 10462d70f;  */

void FUN_10462d70c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ab28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd21ed0;
  _swift_getWitnessTable(&UNK_10dd21ed0,&UNK_110792030);
  puRam000000011308ab28 = puVar1;
  return;
}



/* Entry: 10462d710; end: 10462d74f;  */

void FUN_10462d710(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ab28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd21ed0;
  _swift_getWitnessTable(&UNK_10dd21ed0,&UNK_110792030);
  puRam000000011308ab28 = puVar1;
  return;
}



/* Entry: 10462d750; end: 10462d803;  */

undefined1  [16] FUN_10462d750(void)

{
  return ZEXT816(0x110791ff0);
}



/* Entry: 10462d804; end: 10462d83f;  */

undefined8 * FUN_10462d804(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  param_1[4] = param_2[4];
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 10462d840; end: 10462d8b3;  */

undefined8 * FUN_10462d840(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  return param_1;
}



/* Entry: 10462d8b4; end: 10462d8ff;  */

undefined8 * FUN_10462d8b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[2] = param_2[2];
  uVar2 = param_2[4];
  uVar1 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar2;
  return param_1;
}



/* Entry: 10462d900; end: 10462d9ab;  */

int FUN_10462d900(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10462d9ac; end: 10462d9f7;  */

undefined8 * FUN_10462d9ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar3 = param_2[5];
  uVar2 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  param_1[5] = uVar3;
  param_1[4] = uVar2;
  uVar1 = param_2[6];
  uVar3 = param_2[9];
  uVar2 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar1;
  param_1[9] = uVar3;
  param_1[8] = uVar2;
  param_1[10] = param_2[10];
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 10462d9f8; end: 10462da93;  */

undefined8 * FUN_10462d9f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  return param_1;
}



/* Entry: 10462da94; end: 10462dae7;  */

undefined8 * FUN_10462da94(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[2];
  uVar3 = param_2[5];
  uVar1 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  param_1[5] = uVar3;
  param_1[4] = uVar1;
  uVar2 = param_2[6];
  uVar3 = param_2[9];
  uVar1 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  param_1[9] = uVar3;
  param_1[8] = uVar1;
  param_1[10] = param_2[10];
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  return param_1;
}



/* Entry: 10462dae8; end: 10462db97;  */

int FUN_10462dae8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x59) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10462db98; end: 10462dc07;  */

void FUN_10462db98(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x30));
  _objc_release(*(undefined8 *)(param_1 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x48));
  _objc_release(*(undefined8 *)(param_1 + 0x50));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x60));
  _objc_release(*(undefined8 *)(param_1 + 0x68));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x80));
  return;
}



/* Entry: 10462dc08; end: 10462dcef;  */

undefined8 * FUN_10462dc08(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  uVar2 = param_2[4];
  uVar4 = param_2[5];
  param_1[4] = uVar2;
  param_1[5] = uVar4;
  uVar4 = param_2[6];
  uVar5 = param_2[7];
  param_1[6] = uVar4;
  param_1[7] = uVar5;
  uVar6 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar6;
  uVar1 = param_2[10];
  uVar7 = param_2[0xb];
  param_1[10] = uVar1;
  param_1[0xb] = uVar7;
  uVar7 = param_2[0xc];
  uVar8 = param_2[0xd];
  param_1[0xc] = uVar7;
  param_1[0xd] = uVar8;
  uVar9 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar9;
  uVar10 = param_2[0x10];
  param_1[0x10] = uVar10;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar3);
  _objc_retain(uVar2);
  _swift_bridgeObjectRetain(uVar4);
  _objc_retain(uVar5);
  _swift_bridgeObjectRetain(uVar6);
  _objc_retain(uVar1);
  _swift_bridgeObjectRetain(uVar7);
  _objc_retain(uVar8);
  _swift_bridgeObjectRetain(uVar9);
  _objc_retain(uVar10);
  return param_1;
}



/* Entry: 10462dcf0; end: 10462de53;  */

undefined8 * FUN_10462dcf0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  _objc_retain();
  _objc_release(uVar1);
  param_1[5] = param_2[5];
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  _objc_retain();
  _objc_release(uVar1);
  param_1[8] = param_2[8];
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[10];
  param_1[10] = param_2[10];
  _objc_retain();
  _objc_release(uVar1);
  param_1[0xb] = param_2[0xb];
  uVar1 = param_1[0xc];
  param_1[0xc] = param_2[0xc];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[0xd];
  param_1[0xd] = param_2[0xd];
  _objc_retain();
  _objc_release(uVar1);
  param_1[0xe] = param_2[0xe];
  uVar1 = param_1[0xf];
  param_1[0xf] = param_2[0xf];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[0x10];
  param_1[0x10] = param_2[0x10];
  _objc_retain();
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10462de54; end: 10462df27;  */

undefined8 * FUN_10462de54(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  _swift_bridgeObjectRelease(param_1[3]);
  uVar2 = param_1[4];
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  _objc_release(uVar2);
  param_1[5] = param_2[5];
  _swift_bridgeObjectRelease(param_1[6]);
  uVar2 = param_1[7];
  uVar1 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar1;
  _objc_release(uVar2);
  param_1[8] = param_2[8];
  _swift_bridgeObjectRelease(param_1[9]);
  uVar2 = param_1[10];
  uVar1 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar1;
  _objc_release(uVar2);
  param_1[0xb] = param_2[0xb];
  _swift_bridgeObjectRelease(param_1[0xc]);
  uVar2 = param_1[0xd];
  uVar1 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar1;
  _objc_release(uVar2);
  param_1[0xe] = param_2[0xe];
  _swift_bridgeObjectRelease(param_1[0xf]);
  uVar2 = param_1[0x10];
  uVar1 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar1;
  _objc_release(uVar2);
  return param_1;
}



/* Entry: 10462df28; end: 10462dfff;  */

int FUN_10462df28(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x22] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10462e000; end: 10462e0ab;  */

void FUN_10462e000(void)

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



/* Entry: 10462e0ac; end: 10462e30b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10462e0ac(undefined8 param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  puVar1 = &stack0xffffffffffffffb0;
  _swift_getObjectType();
  *(undefined1 *)(unaff_x20 + _DAT_11308ab90) = param_2;
  _objc_msgSendSuper2(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_opt_self(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retain(puVar1);
  _objc_retain();
  _objc_retain();
  puVar3 = puVar2;
  func_0x00010bf3ae40(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bdc0fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x00010c16e440(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar4);
  func_0x00010bf3ae40(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bdc0fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c19bc00(puVar1);
  _objc_release(puVar3);
  func_0x00010c1bdb40(puVar1);
  func_0x00010c1bdd00(0,puVar1);
  uVar5 = param_1;
  func_0x00010bdc0fe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e8e0(puVar1);
  _objc_release(uVar5);
  func_0x00010c20e920(0,puVar1);
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  return puVar1;
}



/* Entry: 10462e30c; end: 10462e357; -[_TtC22HeliosLoadingIndicatorP33_0EC34136E676B856B6A8ECB36E92FBA730HeliosLoadingIndicatorArcLayer initWithLayer:] */

void FUN_10462e30c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [32];
  
  _swift_unknownObjectRetain(param_3);
  __ss018_bridgeAnyObjectToB0yypyXlSgF(auStack_40,param_3);
  _swift_unknownObjectRelease(param_3);
  func_0x00010462e22c(auStack_40);
  return;
}



/* Entry: 10462e358; end: 10462e3af; -[_TtC22HeliosLoadingIndicatorP33_0EC34136E676B856B6A8ECB36E92FBA730HeliosLoadingIndicatorArcLayer initWithCoder:] */

void FUN_10462e358(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd00000000000001b,0x800000010f1a2ae0,
             "HeliosLoadingIndicator/HeliosLoadingIndicatorView.swift",0x37,2,0x30,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10462e3b0);
  (*pcVar1)();
}



/* Entry: 10462e3b0; end: 10462e4bf;  */

/* WARNING: Possible PIC construction at 0x00010462e480: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010462e484) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10462e3b0(double param_1)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  
  func_0x00010bf20c00();
  _CGRectGetMidX();
  dVar2 = param_1;
  func_0x00010c099460();
  dVar2 = dVar2 * -0.5;
  param_1 = param_1 + dVar2;
  if (0.0 < param_1) {
    func_0x00010bf20c00();
    _CGRectGetMidX();
    dVar3 = dVar2;
    func_0x00010bf20c00();
    _CGRectGetMidY();
    puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    _objc_opt_self(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    func_0x00010bf19960(dVar2,dVar3,param_1,0,0x401921fb54442d18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc1040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1d9830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10462e4c0; end: 10462e4f3;  */

void FUN_10462e4c0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10462e4f4; end: 10462e5f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10462e4f4(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  
  lVar1 = _DAT_11308ab60;
  _swift_beginAccess(unaff_x20 + _DAT_11308ab60,auStack_58,1,0);
  uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  _objc_retain(param_1);
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___CATransaction_1126b5718;
  _objc_opt_self(PTR__OBJC_CLASS___CATransaction_1126b5718);
  func_0x00010bf17a60();
  func_0x00010c18e5e0(puVar2);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11308ab68);
  uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x00010bdc0fe0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e8e0(uVar4);
  _objc_release(uVar3);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11308ab70);
  uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x00010bdc0fe0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e8e0(uVar4);
  _objc_release(uVar3);
  func_0x00010bf42760(puVar2);
  _objc_release(param_1);
  return;
}



/* Entry: 10462e5f8; end: 10462e673;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10462e5f8(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11308ab80;
  _swift_beginAccess(unaff_x20 + _DAT_11308ab80,auStack_48,1,0);
  *(undefined1 *)(unaff_x20 + lVar1) = param_1;
  lVar1 = _DAT_11308ab78;
  _swift_beginAccess(unaff_x20 + _DAT_11308ab78,auStack_60,0,0);
  if ((*(byte *)(unaff_x20 + lVar1) & 1) == 0) {
    func_0x00010c1a7f60();
  }
  return;
}



/* Entry: 10462e674; end: 10462e6a3;  */

void FUN_10462e674(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10462e6a4(param_1);
  return;
}



/* Entry: 10462e6a4; end: 10462e8b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10462e6a4(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long unaff_x20;
  
  puVar4 = &stack0xffffffffffffffb0;
  lVar2 = unaff_x20;
  _swift_getObjectType();
  *(undefined1 *)(unaff_x20 + _DAT_11308ab78) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_11308ab80) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308ab88);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11308ab60) = param_1;
  FUN_10462e8b8();
  _objc_allocWithZone();
  _objc_retain();
  _objc_retain();
  uVar3 = param_1;
  FUN_10462e0ac();
  *(undefined8 *)(unaff_x20 + _DAT_11308ab68) = uVar3;
  _objc_allocWithZone(lVar2);
  _objc_retain();
  uVar3 = param_1;
  FUN_10462e0ac();
  *(undefined8 *)(unaff_x20 + _DAT_11308ab70) = uVar3;
  _objc_msgSendSuper2(0,0,0,0,&stack0xffffffffffffffb0,PTR_s_initWithFrame__1125e2948);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_opt_self(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retain();
  _objc_retain();
  func_0x00010bf3ae40(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar4);
  _objc_release(puVar5);
  func_0x00010c1a7f60(puVar4);
  func_0x00010c21e900(puVar4);
  puVar6 = puVar4;
  func_0x00010c08c0e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb20();
  _objc_release(puVar6);
  puVar6 = puVar4;
  func_0x00010c08c0e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb20();
  _objc_release(puVar6);
  puVar5 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  _objc_opt_self(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  func_0x00010bf68fa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(param_1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar4);
  return puVar4;
}



/* Entry: 10462e8b8; end: 10462e8d7;  */

void FUN_10462e8b8(void)

{
  _objc_opt_self(&PTR_PTR_1129cda30);
  return;
}



/* Entry: 10462e8d8; end: 10462e95b; -[_TtC22HeliosLoadingIndicator26HeliosLoadingIndicatorView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10462e8d8(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  
  *(undefined1 *)(param_1 + _DAT_11308ab78) = 0;
  *(undefined1 *)(param_1 + _DAT_11308ab80) = 1;
  puVar1 = (undefined8 *)(param_1 + _DAT_11308ab88);
  *puVar1 = 0;
  puVar1[1] = 0;
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd00000000000001b,0x800000010f1a2ae0,
             "HeliosLoadingIndicator/HeliosLoadingIndicatorView.swift",0x37,2,0x6f,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10462e95c);
  (*pcVar2)();
}



/* Entry: 10462e95c; end: 10462e9cf;  */

void FUN_10462e95c(void)

{
  undefined *puVar1;
  
  _swift_getObjectType();
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  _objc_opt_self(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  func_0x00010bf68fa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d560();
  _objc_release(puVar1);
  _objc_msgSendSuper2(&stack0xffffffffffffffc0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10462e9d0; end: 10462ea57; -[_TtC22HeliosLoadingIndicator26HeliosLoadingIndicatorView dealloc] */

void FUN_10462e9d0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  _swift_getObjectType();
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  _objc_opt_self(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retain();
  func_0x00010bf68fa0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d560();
  _objc_release(puVar2);
  uStack_40 = param_1;
  uStack_38 = uVar1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10462ea58; end: 10462eb63; -[_TtC22HeliosLoadingIndicator26HeliosLoadingIndicatorView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10462ea58(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308ab60));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308ab68));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308ab70));
  return;
}



/* Entry: 10462eb64; end: 10462ec67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10462eb64(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  
  puVar1 = PTR__OBJC_CLASS___CATransaction_1126b5718;
  _objc_opt_self(PTR__OBJC_CLASS___CATransaction_1126b5718);
  func_0x00010bf17a60();
  func_0x00010c18e5e0(puVar1);
  func_0x00010bf20c00();
  _CGRectGetWidth();
  uVar3 = 0x4028000000000000;
  dVar4 = param_1 / 12.0;
  func_0x00010bf20c00();
  _CGRectInset();
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308ab68);
  func_0x00010c19f0e0(uVar2);
  func_0x00010c1bdd00(dVar4,uVar2);
  FUN_10462e3b0();
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308ab70);
  _CGRectInset(param_1,uVar3,param_3,param_4,dVar4 * 2.5,dVar4 * 2.5);
  func_0x00010c19f0e0(uVar2);
  func_0x00010c1bdd00(dVar4,uVar2);
  FUN_10462e3b0();
                    /* WARNING: Could not recover jumptable at 0x00010bf42770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_commit_1125ae380);
  return;
}



/* Entry: 10462ec68; end: 10462ed4f; -[_TtC22HeliosLoadingIndicator26HeliosLoadingIndicatorView layoutSubviews] */

void FUN_10462ec68(undefined8 param_1)

{
  _objc_retain();
  func_0x00010462eaa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10462ed50; end: 10462ed77; -[_TtC22HeliosLoadingIndicator26HeliosLoadingIndicatorView didMoveToWindow] */

void FUN_10462ed50(undefined8 param_1)

{
  _objc_retain();
  func_0x00010462ec90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10462ed78; end: 10462ef57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10462ed78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = _DAT_11308ab78;
  _swift_beginAccess(unaff_x20 + _DAT_11308ab78,auStack_48,1,0);
  if ((*(char *)(unaff_x20 + lVar2) != '\x01') ||
     (lVar3 = unaff_x20, func_0x00010c074c20(), (int)lVar3 != 0)) {
    *(undefined1 *)(unaff_x20 + lVar2) = 1;
    func_0x00010c1a7f60();
    FUN_10462eb64();
    func_0x00010bf20c00();
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308ab88);
    *puVar1 = param_3;
    puVar1[1] = param_4;
    FUN_10462f21c(*(undefined8 *)(unaff_x20 + _DAT_11308ab68),1);
    FUN_10462f21c(*(undefined8 *)(unaff_x20 + _DAT_11308ab70),0);
  }
  return;
}



/* Entry: 10462ef58; end: 10462efe3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10462ef58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar2 = _DAT_11308ab78;
  _swift_beginAccess(unaff_x20 + _DAT_11308ab78,auStack_38,0,0);
  if (*(char *)(unaff_x20 + lVar2) == '\x01') {
    FUN_10462eb64();
    func_0x00010bf20c00();
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308ab88);
    *puVar1 = param_3;
    puVar1[1] = param_4;
    FUN_10462f21c(*(undefined8 *)(unaff_x20 + _DAT_11308ab68),1);
    FUN_10462f21c(*(undefined8 *)(unaff_x20 + _DAT_11308ab70),0);
  }
  return;
}



/* Entry: 10462efe4; end: 10462f00b; -[_TtC22HeliosLoadingIndicator26HeliosLoadingIndicatorView applicationWillEnterForeground] */

void FUN_10462efe4(undefined8 param_1)

{
  _objc_retain();
  FUN_10462ef58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10462f00c; end: 10462f067;  */

void FUN_10462f00c(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    func_0x00010462f884();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112fe97d0;
  plVar5 = (long *)&UNK_10dd22180;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 10462f068; end: 10462f21b;  */

ulong FUN_10462f068(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10462f14c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10462f150);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    _swift_unknownObjectRetain(param_1);
    puVar4 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
    _objc_opt_self(PTR__OBJC_CLASS___CABasicAnimation_1126b5708);
    uVar5 = param_1;
    _swift_dynamicCastObjCClass(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    __ss18_CocoaArrayWrapperVyyXlSicig(param_1,uVar5);
    puVar4 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
    _objc_opt_self(PTR__OBJC_CLASS___CABasicAnimation_1126b5708);
    uVar5 = param_1;
    _swift_dynamicCastObjCClass(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  __sSS6appendyySSF(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x00010462f884(0);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10462f21c);
  (*pcVar2)();
}



/* Entry: 10462f21c; end: 10462f6bb;  */

void FUN_10462f21c(undefined8 param_1,char param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  func_0x00010c12aaa0();
  uVar3 = 0x74646957656e696c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x74646957656e696c,0xe900000000000068);
  puVar4 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  _objc_opt_self();
  puVar5 = puVar4;
  func_0x00010bf04040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = 0;
  __sSi10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(0);
  func_0x00010c1a1180(puVar5);
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010c099460(param_1);
  __s12CoreGraphics7CGFloatV10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF();
  func_0x00010c216920(puVar5);
  _objc_release(uVar3);
  func_0x00010c192d40(0x3fe0000000000000,puVar5);
  uVar3 = 0x6e45656b6f727473;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6e45656b6f727473,0xe900000000000064);
  puVar6 = puVar4;
  func_0x00010bf04040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = 0;
  __sSi10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(0);
  func_0x00010c1a1180(puVar6);
  _objc_release(uVar3);
  __s12CoreGraphics7CGFloatV10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(0x3fe3333333333333);
  func_0x00010c216920(puVar6);
  _objc_release(uVar3);
  func_0x00010c192d40(0x3feccccccccccccc,puVar6);
  lVar1 = 8;
  if (param_2 != '\0') {
    lVar1 = 0;
  }
  uVar9 = *(undefined8 *)(&UNK_10df9f9b0 + lVar1);
  uVar3 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1cc310);
  func_0x00010bf04040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = 0;
  __sSi10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(0);
  func_0x00010c1a1180(puVar4);
  _objc_release(uVar3);
  __s12CoreGraphics7CGFloatV10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(uVar9);
  func_0x00010c216920(puVar4);
  _objc_release(uVar3);
  _objc_retain();
  func_0x00010c192d40(0x3fe0000000000000);
  func_0x00010c1eabe0(0x7f7fffff,puVar4);
  func_0x00010c186980(puVar4);
  func_0x00010c19bc40(puVar4);
  _objc_release(puVar4);
  puVar7 = PTR__OBJC_CLASS___CATransaction_1126b5718;
  _objc_opt_self();
  func_0x00010bf17a60();
  func_0x00010c18e5e0(puVar7);
  func_0x00010c20e920(0x3fe3333333333333,param_1);
  func_0x00010bf42760();
  FUN_10462f00c();
  _swift_initStackObject();
  *(undefined8 *)(puVar7 + 0x18) = 7;
  *(undefined8 *)(puVar7 + 0x10) = 3;
  *(undefined **)(puVar7 + 0x20) = puVar5;
  *(undefined **)(puVar7 + 0x28) = puVar6;
  *(undefined **)(puVar7 + 0x30) = puVar4;
  _objc_retain(puVar4);
  _objc_retain(puVar5);
  _objc_retain(puVar6);
  if (((ulong)puVar7 & 0xc000000000000001) == 0) {
    puVar8 = puVar5;
    _objc_retain(puVar5);
    func_0x00010c1ea580();
    _objc_release(puVar8);
    if (*(ulong *)(puVar7 + 0x10) < 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10462f6b8);
      (*pcVar2)();
    }
    uVar3 = *(undefined8 *)(puVar7 + 0x28);
    _objc_retain(uVar3);
    func_0x00010c1ea580();
    _objc_release(uVar3);
    if (*(ulong *)(puVar7 + 0x10) < 3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10462f6bc);
      (*pcVar2)();
    }
    uVar3 = *(undefined8 *)(puVar7 + 0x30);
    _objc_retain(uVar3);
  }
  else {
    uVar3 = 0;
    FUN_10462f068(0,puVar7);
    func_0x00010c1ea580();
    _objc_release(uVar3);
    uVar3 = 1;
    FUN_10462f068(1,puVar7);
    func_0x00010c1ea580();
    _objc_release(uVar3);
    uVar3 = 2;
    FUN_10462f068(2,puVar7);
  }
  func_0x00010c1ea580();
  _objc_release(uVar3);
  _swift_setDeallocating(puVar7);
  uVar9 = *(undefined8 *)(puVar7 + 0x10);
  uVar3 = 0;
  func_0x00010462f884(0);
  _swift_arrayDestroy(puVar7 + 0x20,uVar9,uVar3);
  uVar3 = 0x6469775f656e696c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6469775f656e696c,0xea00000000006874);
  func_0x00010bef6c20(param_1);
  _objc_release(uVar3);
  uVar3 = 0x655f656b6f727473;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x655f656b6f727473,0xea0000000000646e);
  func_0x00010bef6c20(param_1);
  _objc_release(uVar3);
  uVar3 = 0x6e6f697461746f72;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6e6f697461746f72,0xe800000000000000);
  func_0x00010bef6c20(param_1);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(puVar5);
  _objc_release(puVar6);
  return;
}



/* Entry: 10462f6bc; end: 10462f6db;  */

void FUN_10462f6bc(void)

{
  _objc_opt_self(&PTR_PTR_1129cdaf0);
  return;
}



/* Entry: 10462f6dc; end: 10462f843;  */

int FUN_10462f6dc(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10462f758;
        goto LAB_10462f73c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10462f73c:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_10462f758:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10462f844; end: 10462f8c7;  */

void FUN_10462f844(void)

{
  undefined *puVar1;
  
  if (puRam0000000113661bd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd22154;
  _swift_getWitnessTable(&UNK_10dd22154,&UNK_1107923b8);
  puRam0000000113661bd0 = puVar1;
  return;
}



/* Entry: 10462f8c8; end: 10462f8cb;  */

void FUN_10462f8c8(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar8;
  long lVar9;
  undefined **ppuVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  long lStack_70;
  long lStack_68;
  
  lVar11 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)&lStack_70 - extraout_x8;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar8 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_70 = lVar8 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = (lVar8 - extraout_x12) - extraout_x12_00;
  ppuVar10 = &PTR_s_dingIndicatorArcLayer_10f208aa0_0x20_11308ac18;
  lVar11 = 0xd;
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lStack_68 = lVar12;
  do {
    puVar4 = ppuVar10[-1];
    puVar5 = *ppuVar10;
    _swift_bridgeObjectRetain(puVar5);
    func_0x00010462fb64(lVar7,puVar4,puVar5);
    _swift_bridgeObjectRelease(puVar5);
    lVar3 = lVar7;
    (**(code **)(lVar9 + 0x30))(lVar7,1,lVar2);
    if ((int)lVar3 == 1) {
      FUN_10462fe14(lVar7,0x112d36580,&UNK_10d9016d0);
    }
    else {
      pcVar13 = *(code **)(lVar9 + 0x20);
      (*pcVar13)(lVar12,lVar7,lVar2);
      puVar4 = puVar6;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar5 = puVar6;
      if (((ulong)puVar4 & 1) == 0) {
        puVar5 = (undefined *)0x0;
        func_0x000101023b20(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
      }
      uVar1 = *(ulong *)(puVar5 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        func_0x000101023b20(puVar6,uVar1 + 1,1,puVar5);
      }
      lVar12 = lStack_68;
      *(ulong *)(puVar6 + 0x10) = uVar1 + 1;
      (*pcVar13)(puVar6 + *(long *)(lVar9 + 0x48) * uVar1 +
                          ((ulong)*(byte *)(lVar9 + 0x50) + 0x20 &
                          ((ulong)*(byte *)(lVar9 + 0x50) ^ 0xffffffffffffffff)),lStack_68,lVar2);
    }
    lVar3 = lStack_70;
    ppuVar10 = ppuVar10 + 2;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  lVar11 = *(long *)(puVar6 + 0x10);
  if (lVar11 != 0) {
    puVar4 = puVar6 + ((ulong)*(byte *)(lVar9 + 0x50) + 0x20 &
                      ((ulong)*(byte *)(lVar9 + 0x50) ^ 0xffffffffffffffff));
    lVar12 = *(long *)(lVar9 + 0x48);
    pcVar13 = *(code **)(lVar9 + 0x10);
    do {
      (*pcVar13)(lVar3,puVar4,lVar2);
      lVar7 = lVar8;
      (**(code **)(lVar9 + 0x20))(lVar8,lVar3,lVar2);
      __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
      _CTFontManagerRegisterFontsForURL();
      _objc_release(lVar7);
      (**(code **)(lVar9 + 8))(lVar8,lVar2);
      puVar4 = puVar4 + lVar12;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  _swift_bridgeObjectRelease(puVar6);
  return;
}



/* Entry: 10462f8cc; end: 10462fe13;  */

void FUN_10462f8cc(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar8;
  long lVar9;
  undefined **ppuVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  long lStack_70;
  long lStack_68;
  
  lVar11 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)&lStack_70 - extraout_x8;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar8 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_70 = lVar8 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = (lVar8 - extraout_x12) - extraout_x12_00;
  ppuVar10 = &PTR_s_dingIndicatorArcLayer_10f208aa0_0x20_11308ac18;
  lVar11 = 0xd;
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lStack_68 = lVar12;
  do {
    puVar4 = ppuVar10[-1];
    puVar5 = *ppuVar10;
    _swift_bridgeObjectRetain(puVar5);
    func_0x00010462fb64(lVar7,puVar4,puVar5);
    _swift_bridgeObjectRelease(puVar5);
    lVar3 = lVar7;
    (**(code **)(lVar9 + 0x30))(lVar7,1,lVar2);
    if ((int)lVar3 == 1) {
      FUN_10462fe14(lVar7,0x112d36580,&UNK_10d9016d0);
    }
    else {
      pcVar13 = *(code **)(lVar9 + 0x20);
      (*pcVar13)(lVar12,lVar7,lVar2);
      puVar4 = puVar6;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar5 = puVar6;
      if (((ulong)puVar4 & 1) == 0) {
        puVar5 = (undefined *)0x0;
        func_0x000101023b20(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
      }
      uVar1 = *(ulong *)(puVar5 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        func_0x000101023b20(puVar6,uVar1 + 1,1,puVar5);
      }
      lVar12 = lStack_68;
      *(ulong *)(puVar6 + 0x10) = uVar1 + 1;
      (*pcVar13)(puVar6 + *(long *)(lVar9 + 0x48) * uVar1 +
                          ((ulong)*(byte *)(lVar9 + 0x50) + 0x20 &
                          ((ulong)*(byte *)(lVar9 + 0x50) ^ 0xffffffffffffffff)),lStack_68,lVar2);
    }
    lVar3 = lStack_70;
    ppuVar10 = ppuVar10 + 2;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  lVar11 = *(long *)(puVar6 + 0x10);
  if (lVar11 != 0) {
    puVar4 = puVar6 + ((ulong)*(byte *)(lVar9 + 0x50) + 0x20 &
                      ((ulong)*(byte *)(lVar9 + 0x50) ^ 0xffffffffffffffff));
    lVar12 = *(long *)(lVar9 + 0x48);
    pcVar13 = *(code **)(lVar9 + 0x10);
    do {
      (*pcVar13)(lVar3,puVar4,lVar2);
      lVar7 = lVar8;
      (**(code **)(lVar9 + 0x20))(lVar8,lVar3,lVar2);
      __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
      _CTFontManagerRegisterFontsForURL();
      _objc_release(lVar7);
      (**(code **)(lVar9 + 8))(lVar8,lVar2);
      puVar4 = puVar4 + lVar12;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  _swift_bridgeObjectRelease(puVar6);
  return;
}



/* Entry: 10462fe14; end: 10462fe53;  */

undefined8 FUN_10462fe14(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10462fe54; end: 10462fe9b;  */

void FUN_10462fe54(void)

{
  if (lRam000000011308ace0 == -1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc03f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_once_11034f4a8)(0x11308ace0,FUN_10462f8c8);
  return;
}



/* Entry: 10462fe9c; end: 10462febb;  */

void FUN_10462fe9c(void)

{
  _objc_opt_self(&PTR_PTR_11308ad28);
  return;
}



/* Entry: 10462febc; end: 10462fee7; +[SCWebBrowsingConstants methodNotifyStartLoadingPrefetchHints] */

void FUN_10462febc(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000021,0x800000010f208c80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10462fee8; end: 10462fef3;  */

undefined * FUN_10462fee8(void)

{
  return &UNK_10dd221e0;
}



/* Entry: 10462fef4; end: 10462ff13; +[SCWebBrowsingConstants performancePayloadKeyURL] */

void FUN_10462fef4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6c7275,0xe300000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10462ff14; end: 10462ff3f; +[SCWebBrowsingConstants performancePayloadKeyLeaveFirstPage] */

void FUN_10462ff14(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000021,0x800000010f208cb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10462ff40; end: 10462ff4b;  */

undefined * FUN_10462ff40(void)

{
  return &UNK_10dd221f0;
}



/* Entry: 10462ff4c; end: 10462ff6f; +[SCWebBrowsingConstants performancePayloadKeyTiming] */

void FUN_10462ff4c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x676e696d6974,0xe600000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10462ff70; end: 10462ff7b;  */

undefined * FUN_10462ff70(void)

{
  return &UNK_110792520;
}



/* Entry: 10462ff7c; end: 10462ffa7; +[SCWebBrowsingConstants performancePayloadKeyFirstContentfulPaintTime] */

void FUN_10462ff7c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000023,0x800000010f208ce0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10462ffa8; end: 10462ffb3;  */

undefined * FUN_10462ffa8(void)

{
  return &UNK_10dd22200;
}



/* Entry: 10462ffb4; end: 10462ffe7; +[SCWebBrowsingConstants performancePayloadKeyHasGAIncluded] */

void FUN_10462ffb4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x636e494147736168,0xed0000646564756c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10462ffe8; end: 10462fff3;  */

undefined * FUN_10462ffe8(void)

{
  return &UNK_10dd22210;
}



/* Entry: 10462fff4; end: 10463001f; +[SCWebBrowsingConstants performancePayloadKeyUserAgent] */

void FUN_10462fff4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6e65674172657375,0xe900000000000074);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104630020; end: 10463004b; +[SCWebBrowsingConstants keyHitAnalyticsCount] */

void FUN_104630020(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f208d10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10463004c; end: 104630077; +[SCWebBrowsingConstants keyHitAnalyticsFirstTimestamp] */

void FUN_10463004c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000026,0x800000010f208d30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104630078; end: 1046300a3; +[SCWebBrowsingConstants keyHasSubsequentNavigation] */

void FUN_104630078(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f208d60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1046300a4; end: 1046300cf; +[SCWebBrowsingConstants keyEstimatedLoadProgress] */

void FUN_1046300a4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f208d80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1046300d0; end: 1046300db;  */

undefined * FUN_1046300d0(void)

{
  return &UNK_10dd22220;
}



/* Entry: 1046300dc; end: 10463010b; +[SCWebBrowsingConstants emptyPageURLString] */

void FUN_1046300dc(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6c623a74756f6261,0xeb000000006b6e61);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10463010c; end: 104630137; +[SCWebBrowsingConstants viewControllerAccessibilityIdentifier] */

void FUN_10463010c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000031,0x800000010f208da0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104630138; end: 104630167; +[SCWebBrowsingConstants isAsmEnabled] */

void FUN_104630138(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x616e456d73417369,0xec00000064656c62);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104630168; end: 104630193; +[SCWebBrowsingConstants domContentLoadedLatencyMs] */

void FUN_104630168(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f208de0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104630194; end: 1046301bf; +[SCWebBrowsingConstants fullLoadLatencyMs] */

void FUN_104630194(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f208e00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1046301c0; end: 1046301df; +[SCWebBrowsingConstants isAd] */

void FUN_1046301c0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x64417369,0xe400000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1046301e0; end: 10463021b; -[SCWebBrowsingConstants init] */

void FUN_1046301e0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10463021c; end: 10463024f;  */

void FUN_10463021c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104630250; end: 104630253; -[SCWebBrowsingConstants .cxx_destruct] */

void FUN_104630250(void)

{
  return;
}



/* Entry: 104630254; end: 104630273;  */

void FUN_104630254(void)

{
  _objc_opt_self(&PTR_PTR_1129cdbd8);
  return;
}



/* Entry: 104630274; end: 104630287;  */

void FUN_104630274(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110792540;
  if (lRam000000011308ada8 != 0) {
    return;
  }
  _swift_getForeignTypeMetadata();
  if (puVar1 == (undefined *)0x0) {
    lRam000000011308ada8 = param_1;
  }
  return;
}



/* Entry: 104630288; end: 1046302cb;  */

void FUN_104630288(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  _swift_getForeignTypeMetadata();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 1046302cc; end: 1046302fb;  */

bool FUN_1046302cc(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1046302fc; end: 1046303ab;  */

void FUN_1046302fc(void)

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



/* Entry: 1046303ac; end: 104630457;  */

undefined1  [16] FUN_1046303ac(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined1 auVar4 [16];
  long lStack_18;
  
  lStack_18 = *unaff_x20;
  if (lStack_18 < 2) {
    if (lStack_18 == 0) {
      uVar3 = 0xe700000000000000;
      uVar2 = 0x6e776f6e6b6e75;
    }
    else {
      if (lStack_18 != 1) {
LAB_10463043c:
        __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                  (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x104630458);
        (*pcVar1)();
      }
      uVar3 = 0xe200000000000000;
      uVar2 = 0x6461;
    }
  }
  else if (lStack_18 == 2) {
    uVar3 = 0xe700000000000000;
    uVar2 = 0x63696e6167726f;
  }
  else {
    if (lStack_18 != 3) goto LAB_10463043c;
    uVar3 = 0xe800000000000000;
    uVar2 = 0x656372656d6d6f63;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 104630458; end: 10463046b;  */

undefined1  [16] FUN_104630458(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 4) {
    uVar1 = param_1;
  }
  auVar2[8] = 3 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 10463046c; end: 1046304ab;  */

void FUN_10463046c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308adb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd222f0;
  _swift_getWitnessTable(&UNK_10dd222f0,&UNK_110792590);
  puRam000000011308adb0 = puVar1;
  return;
}



/* Entry: 1046304ac; end: 1046304af;  */

void FUN_1046304ac(void)

{
  undefined *puVar1;
  
  if (puRam000000011308adb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd22390;
  _swift_getWitnessTable(&UNK_10dd22390,&UNK_1107925b0);
  puRam000000011308adb8 = puVar1;
  return;
}



/* Entry: 1046304b0; end: 1046304ef;  */

void FUN_1046304b0(void)

{
  undefined *puVar1;
  
  if (puRam000000011308adb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd22390;
  _swift_getWitnessTable(&UNK_10dd22390,&UNK_1107925b0);
  puRam000000011308adb8 = puVar1;
  return;
}



/* Entry: 1046304f0; end: 1046304f3;  */

void FUN_1046304f0(void)

{
  undefined *puVar1;
  
  if (puRam000000011308adc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd224a8;
  _swift_getWitnessTable(&UNK_10dd224a8,&UNK_1107925d0);
  puRam000000011308adc0 = puVar1;
  return;
}



/* Entry: 1046304f4; end: 104630533;  */

void FUN_1046304f4(void)

{
  undefined *puVar1;
  
  if (puRam000000011308adc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd224a8;
  _swift_getWitnessTable(&UNK_10dd224a8,&UNK_1107925d0);
  puRam000000011308adc0 = puVar1;
  return;
}



/* Entry: 104630534; end: 1046305a7;  */

undefined1  [16] FUN_104630534(void)

{
  return ZEXT816(0x110792590);
}



/* Entry: 1046305a8; end: 1046305df;  */

void FUN_1046305a8(undefined8 param_1)

{
  if (lRam000000011308ae28 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e8164d4);
  return;
}



/* Entry: 1046305e0; end: 1046306cf;  */

void FUN_1046305e0(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    _swift_bridgeObjectRetain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
    return;
  }
  return;
}



/* Entry: 1046306d0; end: 104630cd3;  */

void FUN_1046306d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 *param_7,undefined8 param_8,
                  undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12,
                  undefined1 param_13,undefined4 param_14,undefined8 param_15,undefined1 param_16,
                  undefined4 param_17,undefined8 param_18,undefined1 param_19,undefined4 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined4 param_25,undefined4 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined1 param_38,undefined4 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined1 param_47,undefined4 param_48,
                  undefined8 param_49,undefined8 param_50,undefined1 param_51,undefined4 param_52,
                  undefined8 param_53,undefined8 param_54,undefined4 param_55,undefined4 param_56,
                  undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined1 param_60,
                  undefined4 param_61,undefined8 param_62,undefined1 param_63,undefined4 param_64,
                  undefined8 param_65,undefined1 param_66,undefined4 param_67,undefined8 param_68,
                  undefined1 param_69,undefined4 param_70,undefined8 param_71,undefined1 param_72,
                  undefined4 param_73,undefined8 param_74,undefined8 param_75,undefined8 param_76,
                  undefined8 param_77,undefined4 param_78,undefined4 param_79,undefined8 param_80)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  long lVar26;
  long lVar27;
  code *pcVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  
  lVar26 = 0;
  FUN_1046305a8();
  iVar22 = *(int *)(lVar26 + 0x14);
  lVar27 = 0;
  __s10Foundation3URLVMa();
  pcVar28 = *(code **)(*(long *)(lVar27 + -8) + 0x38);
  (*pcVar28)((long)param_1 + (long)iVar22,1,1,lVar27);
  iVar23 = *(int *)(lVar26 + 0x18);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar26 + 0x20));
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar26 + 0x24));
  iVar24 = *(int *)(lVar26 + 0x38);
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar26 + 0x40));
  puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar26 + 0x44));
  puVar5 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar26 + 0x48));
  puVar6 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar26 + 0x58));
  puVar7 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar26 + 0x5c));
  puVar8 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar26 + 0x60));
  puVar9 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar26 + 100));
  puVar10 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar26 + 0x68));
  puVar11 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar26 + 0x6c));
  puVar12 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar26 + 0x80));
  iVar21 = *(int *)(lVar26 + 0x8c);
  puVar13 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar26 + 0x90));
  puVar14 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar26 + 0x94));
  puVar15 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar26 + 0xa0));
  puVar16 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar26 + 0xa8));
  puVar17 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar26 + 0xac));
  iVar25 = *(int *)(lVar26 + 0xb8);
  (*pcVar28)((long)param_1 + (long)iVar25,1,1,lVar27);
  puVar18 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar26 + 0xc0));
  puVar19 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar26 + 0xc4));
  puVar20 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar26 + 0xd8));
  puVar20[6] = 0;
  puVar20[3] = 0;
  puVar20[2] = 0;
  puVar20[5] = 0;
  puVar20[4] = 0;
  puVar20[1] = 0;
  *puVar20 = 0;
  *param_1 = param_2;
  param_1[1] = param_3;
  func_0x000104630688(param_4,(long)param_1 + (long)iVar22,0x112d36580,&UNK_10d9016d0);
  *(undefined8 *)((long)param_1 + (long)iVar23) = param_5;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar26 + 0x1c)) = param_6;
  puVar1[4] = param_7[4];
  uVar31 = *param_7;
  uVar30 = param_7[3];
  uVar29 = param_7[2];
  puVar1[1] = param_7[1];
  *puVar1 = uVar31;
  puVar1[3] = uVar30;
  puVar1[2] = uVar29;
  *puVar2 = param_8;
  puVar2[1] = param_9;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar26 + 0x28)) = (undefined1)param_10;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar26 + 0x2c)) = param_10._1_1_;
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar26 + 0x30)) = param_12;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar26 + 0x34)) = param_13;
  *(undefined8 *)((long)param_1 + (long)iVar24) = param_15;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar26 + 0x3c)) = param_16;
  *puVar3 = param_18;
  *(undefined1 *)(puVar3 + 1) = param_19;
  *puVar4 = param_21;
  puVar4[1] = param_22;
  *puVar5 = param_23;
  puVar5[1] = param_24;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar26 + 0x4c)) = (undefined1)param_25;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar26 + 0x50)) = param_25._1_1_;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar26 + 0x54)) = param_25._2_1_;
  *puVar6 = param_27;
  puVar6[1] = param_28;
  *puVar7 = param_29;
  puVar7[1] = param_30;
  *puVar8 = param_31;
  puVar8[1] = param_32;
  *puVar9 = param_33;
  puVar9[1] = param_34;
  *puVar10 = param_35;
  puVar10[1] = param_36;
  *puVar11 = param_37;
  *(undefined1 *)(puVar11 + 1) = param_38;
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar26 + 0x70)) = param_40;
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar26 + 0x74)) = param_41;
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar26 + 0x78)) = param_42;
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar26 + 0x7c)) = param_43;
  *puVar12 = param_44;
  puVar12[1] = param_45;
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar26 + 0x84)) = param_46;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar26 + 0x88)) = param_47;
  *(undefined8 *)((long)param_1 + (long)iVar21) = param_49;
  *puVar13 = param_50;
  *(undefined1 *)(puVar13 + 1) = param_51;
  *puVar14 = param_53;
  puVar14[1] = param_54;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar26 + 0x98)) = (undefined1)param_55;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar26 + 0x9c)) = param_55._1_1_;
  puVar15[1] = param_58;
  *puVar15 = param_57;
  puVar15[2] = param_59;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar26 + 0xa4)) = param_60;
  *puVar16 = param_62;
  *(undefined1 *)(puVar16 + 1) = param_63;
  *puVar17 = param_65;
  *(undefined1 *)(puVar17 + 1) = param_66;
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar26 + 0xb0)) = param_68;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar26 + 0xb4)) = param_69;
  func_0x000104630688(param_71,(long)param_1 + (long)iVar25,0x112d36580,&UNK_10d9016d0);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar26 + 0xbc)) = param_72;
  *puVar18 = param_74;
  puVar18[1] = param_75;
  *puVar19 = param_76;
  puVar19[1] = param_77;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar26 + 200)) = (undefined1)param_78;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar26 + 0xcc)) = param_78._1_1_;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar26 + 0xd0)) = param_78._2_1_;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar26 + 0xd4)) = param_78._3_1_;
  func_0x000104630688(param_80,puVar20,0x11304dbb8,&UNK_10dd22560);
  return;
}



/* Entry: 104630cd4; end: 104630cdb;  */

undefined8 FUN_104630cd4(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  long *plVar3;
  long *plVar4;
  double *pdVar5;
  double *pdVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  double dVar10;
  ulong uVar11;
  char cVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  double dVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 uVar24;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar25;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  code *pcVar29;
  undefined8 uVar30;
  ulong uVar31;
  code *pcVar32;
  long lVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  ulong uVar36;
  long lVar37;
  ulong uVar38;
  ulong uStack_110;
  ulong uStack_108;
  uint uStack_fc;
  ulong uStack_f8;
  ulong uStack_f0;
  double dStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  double dStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar14 = 0;
  __s10Foundation3URLVMa();
  lVar33 = *(long *)(lVar14 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar33 + 0x40));
  lVar28 = (long)&uStack_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar37 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar37 + -8) + 0x40));
  uVar31 = lVar28 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar38 = uVar31 - extraout_x12;
  lVar37 = 0x112d7e680;
  func_0x0001000285a8(0x112d7e680,&UNK_10d95e350);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar37 + -8) + 0x40));
  lVar27 = uVar38 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar36 = lVar27 - extraout_x12_00;
  uVar22 = param_2[1];
  if (param_1[1] == 0) {
    if (uVar22 != 0) {
      return 0;
    }
  }
  else {
    if (uVar22 == 0) {
      return 0;
    }
    uVar15 = *param_1;
    if (((uVar15 != *param_2) || (param_1[1] != uVar22)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar15 & 1) == 0)) {
      return 0;
    }
  }
  lVar16 = 0;
  uStack_d8 = uVar31;
  uStack_d0 = lVar27;
  dStack_c8 = (double)lVar28;
  FUN_1046305a8();
  iVar13 = *(int *)(lVar16 + 0x14);
  lVar28 = (long)*(int *)(lVar37 + 0x30);
  uStack_e0 = lVar37;
  uStack_c0 = lVar16;
  func_0x000104630640((long)param_1 + (long)iVar13,uVar36,0x112d36580,&UNK_10d9016d0);
  func_0x000104630640((long)param_2 + (long)iVar13,uVar36 + lVar28,0x112d36580,&UNK_10d9016d0);
  pcVar32 = *(code **)(lVar33 + 0x30);
  lVar37 = uVar36;
  (*pcVar32)(uVar36,1,lVar14);
  if ((int)lVar37 == 1) {
    lVar28 = uVar36 + lVar28;
    (*pcVar32)(lVar28,1,lVar14);
    if ((int)lVar28 != 1) goto LAB_104634d5c;
    FUN_104637ce8(uVar36,0x112d36580,&UNK_10d9016d0);
  }
  else {
    func_0x000104630640(uVar36,uVar38,0x112d36580,&UNK_10d9016d0);
    lVar37 = uVar36 + lVar28;
    (*pcVar32)(lVar37,1,lVar14);
    dVar10 = dStack_c8;
    if ((int)lVar37 == 1) {
      (**(code **)(lVar33 + 8))(uVar38,lVar14);
      goto LAB_104634d5c;
    }
    dVar17 = dStack_c8;
    (**(code **)(lVar33 + 0x20))(dStack_c8,uVar36 + lVar28,lVar14);
    func_0x000101553b98();
    uVar22 = uVar38;
    __sSQ2eeoiySbx_xtFZTj(uVar38,dVar10,lVar14,dVar17);
    pcVar29 = *(code **)(lVar33 + 8);
    (*pcVar29)(dVar10,lVar14);
    (*pcVar29)(uVar38,lVar14);
    FUN_104637ce8(uVar36,0x112d36580,&UNK_10d9016d0);
    if ((uVar22 & 1) == 0) {
      return 0;
    }
  }
  uVar36 = uStack_c0;
  uVar22 = *(ulong *)((long)param_1 + (long)*(int *)(uStack_c0 + 0x18));
  lVar37 = *(long *)((long)param_2 + (long)*(int *)(uStack_c0 + 0x18));
  if (uVar22 == 0) {
    if (lVar37 != 0) {
      return 0;
    }
  }
  else {
    if (lVar37 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(lVar37);
    uVar31 = uVar22;
    _swift_bridgeObjectRetain();
    func_0x000101058cd4();
    _swift_bridgeObjectRelease(uVar22);
    _swift_bridgeObjectRelease(lVar37);
    if ((uVar31 & 1) == 0) {
      return 0;
    }
  }
  if (*(char *)((long)param_1 + (long)*(int *)(uVar36 + 0x1c)) !=
      *(char *)((long)param_2 + (long)*(int *)(uVar36 + 0x1c))) {
    return 0;
  }
  puVar18 = (undefined8 *)((long)param_1 + (long)*(int *)(uVar36 + 0x20));
  uVar19 = *puVar18;
  lVar37 = puVar18[1];
  uVar22 = puVar18[2];
  uVar35 = puVar18[3];
  uVar34 = puVar18[4];
  puVar18 = (undefined8 *)((long)param_2 + (long)*(int *)(uVar36 + 0x20));
  uVar26 = *puVar18;
  lVar28 = puVar18[1];
  uVar30 = puVar18[2];
  uVar8 = puVar18[3];
  uVar24 = puVar18[4];
  if (lVar37 == 1) {
    if (lVar28 != 1) {
LAB_104634e94:
      func_0x000104637d28(uVar26,lVar28,uVar30,uVar8);
      func_0x000104637d28(uVar19,lVar37,uVar22,uVar35,uVar34);
      FUN_104635c8c(uVar19,lVar37,uVar22,uVar35,uVar34);
      FUN_104635c8c(uVar26,lVar28,uVar30,uVar8,uVar24);
      return 0;
    }
  }
  else {
    if (lVar28 == 1) goto LAB_104634e94;
    uStack_f8 = uVar8;
    uStack_f0 = uVar19;
    dStack_e8 = (double)uVar22;
    uStack_b8 = uVar19;
    lStack_b0 = lVar37;
    uStack_a8 = uVar22;
    uStack_a0 = uVar35;
    uStack_98 = uVar34;
    uStack_90 = uVar26;
    lStack_88 = lVar28;
    uStack_80 = uVar30;
    uStack_78 = uVar8;
    uStack_70 = uVar24;
    func_0x000104637d28(uVar26,lVar28,uVar30,uVar8);
    func_0x000104637d28(uStack_f0,lVar37,dStack_e8,uVar35,uVar34);
    puVar18 = &uStack_b8;
    FUN_1046442cc(puVar18,&uStack_90);
    uStack_fc = (uint)puVar18;
    _swift_bridgeObjectRelease(lVar28);
    _swift_bridgeObjectRelease(uStack_f8);
    FUN_104635c8c(uStack_f0,lVar37,dStack_e8,uVar35,uVar34);
    if ((uStack_fc & 1) == 0) {
      return 0;
    }
  }
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(uVar36 + 0x24));
  uVar22 = puVar1[1];
  puVar2 = (ulong *)((long)param_2 + (long)*(int *)(uVar36 + 0x24));
  uVar31 = puVar2[1];
  if (uVar22 == 0) {
    if (uVar31 != 0) {
      return 0;
    }
  }
  else {
    if (uVar31 == 0) {
      return 0;
    }
    uVar38 = *puVar1;
    if (((uVar38 != *puVar2) || (uVar22 != uVar31)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar38 & 1) == 0)) {
      return 0;
    }
  }
  if (*(char *)((long)param_1 + (long)*(int *)(uVar36 + 0x28)) !=
      *(char *)((long)param_2 + (long)*(int *)(uVar36 + 0x28))) {
    return 0;
  }
  if (*(char *)((long)param_1 + (long)*(int *)(uVar36 + 0x2c)) !=
      *(char *)((long)param_2 + (long)*(int *)(uVar36 + 0x2c))) {
    return 0;
  }
  if (*(int *)((long)param_1 + (long)*(int *)(uVar36 + 0x30)) !=
      *(int *)((long)param_2 + (long)*(int *)(uVar36 + 0x30))) {
    return 0;
  }
  if (*(char *)((long)param_1 + (long)*(int *)(uVar36 + 0x34)) !=
      *(char *)((long)param_2 + (long)*(int *)(uVar36 + 0x34))) {
    return 0;
  }
  uVar22 = *(ulong *)((long)param_1 + (long)*(int *)(uVar36 + 0x38));
  lVar37 = *(long *)((long)param_2 + (long)*(int *)(uVar36 + 0x38));
  if (uVar22 == 0) {
    if (lVar37 != 0) {
      return 0;
    }
  }
  else {
    if (lVar37 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(lVar37);
    uVar31 = uVar22;
    _swift_bridgeObjectRetain();
    FUN_10464eb08();
    _swift_bridgeObjectRelease(uVar22);
    _swift_bridgeObjectRelease(lVar37);
    if ((uVar31 & 1) == 0) {
      return 0;
    }
  }
  if (*(char *)((long)param_1 + (long)*(int *)(uVar36 + 0x3c)) !=
      *(char *)((long)param_2 + (long)*(int *)(uVar36 + 0x3c))) {
    return 0;
  }
  plVar3 = (long *)((long)param_1 + (long)*(int *)(uVar36 + 0x40));
  plVar4 = (long *)((long)param_2 + (long)*(int *)(uVar36 + 0x40));
  cVar12 = (char)plVar4[1];
  if ((char)plVar3[1] == '\x01') {
    if (cVar12 != '\x01') {
      return 0;
    }
  }
  else {
    if (cVar12 == '\x01') {
      return 0;
    }
    if (*plVar3 != *plVar4) {
      return 0;
    }
  }
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(uStack_c0 + 0x44));
  uVar36 = puVar1[1];
  puVar2 = (ulong *)((long)param_2 + (long)*(int *)(uStack_c0 + 0x44));
  uVar22 = puVar2[1];
  if (uVar36 == 0) {
    if (uVar22 != 0) {
      return 0;
    }
  }
  else {
    if (uVar22 == 0) {
      return 0;
    }
    uVar31 = *puVar1;
    if (((uVar31 != *puVar2) || (uVar36 != uVar22)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar31 & 1) == 0)) {
      return 0;
    }
  }
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(uStack_c0 + 0x48));
  uVar36 = puVar1[1];
  puVar2 = (ulong *)((long)param_2 + (long)*(int *)(uStack_c0 + 0x48));
  uVar22 = puVar2[1];
  if (uVar36 == 0) {
    if (uVar22 != 0) {
      return 0;
    }
  }
  else {
    if (uVar22 == 0) {
      return 0;
    }
    uVar31 = *puVar1;
    if (((uVar31 != *puVar2) || (uVar36 != uVar22)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar31 & 1) == 0)) {
      return 0;
    }
  }
  if (*(char *)((long)param_1 + (long)*(int *)(uStack_c0 + 0x4c)) !=
      *(char *)((long)param_2 + (long)*(int *)(uStack_c0 + 0x4c))) {
    return 0;
  }
  if (*(char *)((long)param_1 + (long)*(int *)(uStack_c0 + 0x50)) !=
      *(char *)((long)param_2 + (long)*(int *)(uStack_c0 + 0x50))) {
    return 0;
  }
  if (*(char *)((long)param_1 + (long)*(int *)(uStack_c0 + 0x54)) !=
      *(char *)((long)param_2 + (long)*(int *)(uStack_c0 + 0x54))) {
    return 0;
  }
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(uStack_c0 + 0x58));
  uVar36 = puVar1[1];
  puVar2 = (ulong *)((long)param_2 + (long)*(int *)(uStack_c0 + 0x58));
  uVar22 = puVar2[1];
  if (uVar36 == 0) {
    if (uVar22 != 0) {
      return 0;
    }
  }
  else {
    if (uVar22 == 0) {
      return 0;
    }
    uVar31 = *puVar1;
    if (((uVar31 != *puVar2) || (uVar36 != uVar22)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar31 & 1) == 0)) {
      return 0;
    }
  }
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(uStack_c0 + 0x5c));
  uVar36 = puVar1[1];
  puVar2 = (ulong *)((long)param_2 + (long)*(int *)(uStack_c0 + 0x5c));
  uVar22 = puVar2[1];
  if (uVar36 == 0) {
    if (uVar22 != 0) {
      return 0;
    }
  }
  else {
    if (uVar22 == 0) {
      return 0;
    }
    uVar31 = *puVar1;
    if (((uVar31 != *puVar2) || (uVar36 != uVar22)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar31 & 1) == 0)) {
      return 0;
    }
  }
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(uStack_c0 + 0x60));
  uVar36 = puVar1[1];
  puVar2 = (ulong *)((long)param_2 + (long)*(int *)(uStack_c0 + 0x60));
  uVar22 = puVar2[1];
  if (uVar36 == 0) {
    if (uVar22 != 0) {
      return 0;
    }
  }
  else {
    if (uVar22 == 0) {
      return 0;
    }
    uVar31 = *puVar1;
    if (((uVar31 != *puVar2) || (uVar36 != uVar22)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar31 & 1) == 0)) {
      return 0;
    }
  }
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(uStack_c0 + 100));
  uVar36 = puVar1[1];
  puVar2 = (ulong *)((long)param_2 + (long)*(int *)(uStack_c0 + 100));
  uVar22 = puVar2[1];
  if (uVar36 == 0) {
    if (uVar22 != 0) {
      return 0;
    }
  }
  else {
    if (uVar22 == 0) {
      return 0;
    }
    uVar31 = *puVar1;
    if (((uVar31 != *puVar2) || (uVar36 != uVar22)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar31 & 1) == 0)) {
      return 0;
    }
  }
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(uStack_c0 + 0x68));
  uVar36 = puVar1[1];
  puVar2 = (ulong *)((long)param_2 + (long)*(int *)(uStack_c0 + 0x68));
  uVar22 = puVar2[1];
  if (uVar36 == 0) {
    if (uVar22 != 0) {
      return 0;
    }
  }
  else {
    if (uVar22 == 0) {
      return 0;
    }
    uVar31 = *puVar1;
    if (((uVar31 != *puVar2) || (uVar36 != uVar22)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar31 & 1) == 0)) {
      return 0;
    }
  }
  plVar3 = (long *)((long)param_1 + (long)*(int *)(uStack_c0 + 0x6c));
  plVar4 = (long *)((long)param_2 + (long)*(int *)(uStack_c0 + 0x6c));
  cVar12 = (char)plVar4[1];
  if ((char)plVar3[1] == '\x01') {
    if (cVar12 != '\x01') {
      return 0;
    }
  }
  else {
    if (cVar12 == '\x01') {
      return 0;
    }
    if (*plVar3 != *plVar4) {
      return 0;
    }
  }
  if (*(long *)((long)param_1 + (long)*(int *)(uStack_c0 + 0x70)) !=
      *(long *)((long)param_2 + (long)*(int *)(uStack_c0 + 0x70))) {
    return 0;
  }
  if (*(long *)((long)param_1 + (long)*(int *)(uStack_c0 + 0x74)) !=
      *(long *)((long)param_2 + (long)*(int *)(uStack_c0 + 0x74))) {
    return 0;
  }
  if (*(int *)((long)param_1 + (long)*(int *)(uStack_c0 + 0x78)) !=
      *(int *)((long)param_2 + (long)*(int *)(uStack_c0 + 0x78))) {
    return 0;
  }
  if (*(int *)((long)param_1 + (long)*(int *)(uStack_c0 + 0x7c)) !=
      *(int *)((long)param_2 + (long)*(int *)(uStack_c0 + 0x7c))) {
    return 0;
  }
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(uStack_c0 + 0x80));
  uVar36 = puVar1[1];
  puVar2 = (ulong *)((long)param_2 + (long)*(int *)(uStack_c0 + 0x80));
  uVar22 = puVar2[1];
  if (uVar36 == 0) {
    if (uVar22 != 0) {
      return 0;
    }
  }
  else {
    if (uVar22 == 0) {
      return 0;
    }
    uVar31 = *puVar1;
    if (((uVar31 != *puVar2) || (uVar36 != uVar22)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar31 & 1) == 0)) {
      return 0;
    }
  }
  if (*(long *)((long)param_1 + (long)*(int *)(uStack_c0 + 0x84)) !=
      *(long *)((long)param_2 + (long)*(int *)(uStack_c0 + 0x84))) {
    return 0;
  }
  if (*(char *)((long)param_1 + (long)*(int *)(uStack_c0 + 0x88)) !=
      *(char *)((long)param_2 + (long)*(int *)(uStack_c0 + 0x88))) {
    return 0;
  }
  uVar36 = *(ulong *)((long)param_1 + (long)*(int *)(uStack_c0 + 0x8c));
  lVar37 = *(long *)((long)param_2 + (long)*(int *)(uStack_c0 + 0x8c));
  if (uVar36 == 0) {
    if (lVar37 != 0) {
      return 0;
    }
  }
  else {
    if (lVar37 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(lVar37);
    uVar22 = uVar36;
    _swift_bridgeObjectRetain();
    func_0x000101058cd4();
    _swift_bridgeObjectRelease(uVar36);
    _swift_bridgeObjectRelease(lVar37);
    if ((uVar22 & 1) == 0) {
      return 0;
    }
  }
  pdVar5 = (double *)((long)param_1 + (long)*(int *)(uStack_c0 + 0x90));
  pdVar6 = (double *)((long)param_2 + (long)*(int *)(uStack_c0 + 0x90));
  cVar12 = *(char *)(pdVar6 + 1);
  if (*(char *)(pdVar5 + 1) == '\x01') {
    if (cVar12 != '\x01') {
      return 0;
    }
  }
  else {
    if (cVar12 == '\x01') {
      return 0;
    }
    if (*pdVar5 != *pdVar6) {
      return 0;
    }
  }
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(uStack_c0 + 0x94));
  uVar36 = puVar1[1];
  puVar2 = (ulong *)((long)param_2 + (long)*(int *)(uStack_c0 + 0x94));
  uVar22 = puVar2[1];
  if (uVar36 == 0) {
    if (uVar22 != 0) {
      return 0;
    }
  }
  else {
    if (uVar22 == 0) {
      return 0;
    }
    uVar31 = *puVar1;
    if (((uVar31 != *puVar2) || (uVar36 != uVar22)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar31 & 1) == 0)) {
      return 0;
    }
  }
  if (*(char *)((long)param_1 + (long)*(int *)(uStack_c0 + 0x98)) !=
      *(char *)((long)param_2 + (long)*(int *)(uStack_c0 + 0x98))) {
    return 0;
  }
  if (*(char *)((long)param_1 + (long)*(int *)(uStack_c0 + 0x9c)) !=
      *(char *)((long)param_2 + (long)*(int *)(uStack_c0 + 0x9c))) {
    return 0;
  }
  puVar18 = (undefined8 *)((long)param_1 + (long)*(int *)(uStack_c0 + 0xa0));
  lVar37 = puVar18[1];
  puVar7 = (undefined8 *)((long)param_2 + (long)*(int *)(uStack_c0 + 0xa0));
  lVar28 = puVar7[1];
  if (lVar37 == 0) {
    if (lVar28 != 0) {
      return 0;
    }
  }
  else {
    if (lVar28 == 0) {
      return 0;
    }
    uVar30 = *puVar18;
    uVar35 = puVar18[2];
    dStack_e8 = (double)*puVar7;
    uVar26 = puVar7[2];
    func_0x0001046305e0(dStack_e8,lVar28,uVar26);
    func_0x0001046305e0(uVar30,lVar37,uVar35);
    uVar19 = uVar30;
    FUN_1047ae93c(uVar30,lVar37,uVar35,dStack_e8,lVar28,uVar26);
    dStack_e8 = (double)CONCAT44(dStack_e8._4_4_,(int)uVar19);
    _swift_bridgeObjectRelease(uVar26);
    _swift_bridgeObjectRelease(lVar28);
    func_0x000104630610(uVar30,lVar37,uVar35);
    if (((ulong)dStack_e8 & 1) == 0) {
      return 0;
    }
  }
  uVar36 = uStack_d0;
  if (*(char *)((long)param_1 + (long)*(int *)(uStack_c0 + 0xa4)) !=
      *(char *)((long)param_2 + (long)*(int *)(uStack_c0 + 0xa4))) {
    return 0;
  }
  pdVar5 = (double *)((long)param_1 + (long)*(int *)(uStack_c0 + 0xa8));
  pdVar6 = (double *)((long)param_2 + (long)*(int *)(uStack_c0 + 0xa8));
  cVar12 = *(char *)(pdVar6 + 1);
  if (*(char *)(pdVar5 + 1) == '\x01') {
    if (cVar12 != '\x01') {
      return 0;
    }
  }
  else {
    if (cVar12 == '\x01') {
      return 0;
    }
    if (*pdVar5 != *pdVar6) {
      return 0;
    }
  }
  pdVar5 = (double *)((long)param_1 + (long)*(int *)(uStack_c0 + 0xac));
  pdVar6 = (double *)((long)param_2 + (long)*(int *)(uStack_c0 + 0xac));
  cVar12 = *(char *)(pdVar6 + 1);
  if (*(char *)(pdVar5 + 1) == '\x01') {
    if (cVar12 != '\x01') {
      return 0;
    }
  }
  else {
    if (cVar12 == '\x01') {
      return 0;
    }
    if (*pdVar5 != *pdVar6) {
      return 0;
    }
  }
  if (*(int *)((long)param_1 + (long)*(int *)(uStack_c0 + 0xb0)) !=
      *(int *)((long)param_2 + (long)*(int *)(uStack_c0 + 0xb0))) {
    return 0;
  }
  if (*(char *)((long)param_1 + (long)*(int *)(uStack_c0 + 0xb4)) !=
      *(char *)((long)param_2 + (long)*(int *)(uStack_c0 + 0xb4))) {
    return 0;
  }
  iVar13 = *(int *)(uStack_c0 + 0xb8);
  lVar37 = (long)*(int *)(uStack_e0 + 0x30);
  func_0x000104630640((long)param_1 + (long)iVar13,uStack_d0,0x112d36580,&UNK_10d9016d0);
  func_0x000104630640((long)param_2 + (long)iVar13,uVar36 + lVar37,0x112d36580,&UNK_10d9016d0);
  (*pcVar32)(uVar36,1,lVar14);
  uVar22 = uStack_d0;
  if ((int)uVar36 == 1) {
    lVar37 = uStack_d0 + lVar37;
    (*pcVar32)(lVar37,1,lVar14);
    uVar36 = uStack_d0;
    if ((int)lVar37 != 1) {
LAB_104634d5c:
      FUN_104637ce8(uVar36,0x112d7e680,&UNK_10d95e350);
      return 0;
    }
    FUN_104637ce8(uStack_d0,0x112d36580,&UNK_10d9016d0);
  }
  else {
    func_0x000104630640(uStack_d0,uStack_d8,0x112d36580,&UNK_10d9016d0);
    lVar28 = uVar22 + lVar37;
    (*pcVar32)(lVar28,1,lVar14);
    dVar10 = dStack_c8;
    uVar36 = uStack_d0;
    if ((int)lVar28 == 1) {
      (**(code **)(lVar33 + 8))(uStack_d8,lVar14);
      uVar36 = uStack_d0;
      goto LAB_104634d5c;
    }
    dVar17 = dStack_c8;
    (**(code **)(lVar33 + 0x20))(dStack_c8,uStack_d0 + lVar37,lVar14);
    func_0x000101553b98();
    uVar22 = uStack_d8;
    uVar31 = uStack_d8;
    __sSQ2eeoiySbx_xtFZTj(uStack_d8,dVar10,lVar14,dVar17);
    pcVar32 = *(code **)(lVar33 + 8);
    (*pcVar32)(dVar10,lVar14);
    (*pcVar32)(uVar22,lVar14);
    FUN_104637ce8(uVar36,0x112d36580,&UNK_10d9016d0);
    if ((uVar31 & 1) == 0) {
      return 0;
    }
  }
  if (*(char *)((long)param_1 + (long)*(int *)(uStack_c0 + 0xbc)) !=
      *(char *)((long)param_2 + (long)*(int *)(uStack_c0 + 0xbc))) {
    return 0;
  }
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(uStack_c0 + 0xc0));
  uVar36 = puVar1[1];
  puVar2 = (ulong *)((long)param_2 + (long)*(int *)(uStack_c0 + 0xc0));
  uVar22 = puVar2[1];
  if (uVar36 == 0) {
    if (uVar22 != 0) {
      return 0;
    }
  }
  else {
    if (uVar22 == 0) {
      return 0;
    }
    uVar31 = *puVar1;
    if (((uVar31 != *puVar2) || (uVar36 != uVar22)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar31 & 1) == 0)) {
      return 0;
    }
  }
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(uStack_c0 + 0xc4));
  uVar36 = puVar1[1];
  puVar2 = (ulong *)((long)param_2 + (long)*(int *)(uStack_c0 + 0xc4));
  uVar22 = puVar2[1];
  if (uVar36 == 0) {
    if (uVar22 != 0) {
      return 0;
    }
  }
  else {
    if (uVar22 == 0) {
      return 0;
    }
    uVar31 = *puVar1;
    if (((uVar31 != *puVar2) || (uVar36 != uVar22)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar31 & 1) == 0)) {
      return 0;
    }
  }
  if (*(char *)((long)param_1 + (long)*(int *)(uStack_c0 + 200)) !=
      *(char *)((long)param_2 + (long)*(int *)(uStack_c0 + 200))) {
    return 0;
  }
  if (*(char *)((long)param_1 + (long)*(int *)(uStack_c0 + 0xcc)) !=
      *(char *)((long)param_2 + (long)*(int *)(uStack_c0 + 0xcc))) {
    return 0;
  }
  if (*(char *)((long)param_1 + (long)*(int *)(uStack_c0 + 0xd0)) !=
      *(char *)((long)param_2 + (long)*(int *)(uStack_c0 + 0xd0))) {
    return 0;
  }
  if (*(char *)((long)param_1 + (long)*(int *)(uStack_c0 + 0xd4)) !=
      *(char *)((long)param_2 + (long)*(int *)(uStack_c0 + 0xd4))) {
    return 0;
  }
  param_1 = (ulong *)((long)param_1 + (long)*(int *)(uStack_c0 + 0xd8));
  param_2 = (ulong *)((long)param_2 + (long)*(int *)(uStack_c0 + 0xd8));
  uVar36 = *param_1;
  uVar21 = param_1[1];
  uVar22 = param_1[2];
  uVar9 = param_1[3];
  uVar25 = param_1[4];
  uVar31 = param_1[5];
  dVar10 = (double)param_1[6];
  uVar38 = *param_2;
  uVar11 = param_2[1];
  uVar15 = param_2[2];
  uStack_e0 = param_2[3];
  uStack_f8 = param_2[4];
  uStack_f0 = param_2[5];
  dStack_e8 = (double)param_2[6];
  uStack_d8 = uVar25;
  uStack_d0 = uVar31;
  dStack_c8 = dVar10;
  uStack_c0 = uVar9;
  if (uVar21 == 0) {
    if (uVar11 == 0) {
      func_0x000103bfd2e8(uVar36,0,uVar22,uVar9,uVar25,uVar31,dVar10);
      func_0x000103bfd2e8(uVar38,0,uVar15,uStack_e0,uStack_f8,uStack_f0,dStack_e8);
LAB_104635c6c:
      func_0x0001034a6828(uVar36,uVar21,uVar22,uStack_c0,uStack_d8,uStack_d0,dStack_c8);
      return 1;
    }
  }
  else if (uVar11 != 0) {
    if ((((uVar36 == uVar38) && (uVar21 == uVar11)) ||
        (uVar31 = uVar36,
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar36,uVar21,uVar38,uVar11,0), (uVar31 & 1) != 0)) &&
       (((uVar22 == uVar15 && (uStack_c0 == uStack_e0)) ||
        (uVar31 = uVar22,
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar22,uStack_c0,uVar15,uStack_e0,0), (uVar31 & 1) != 0)))) {
      uVar23 = uStack_d0;
      uVar25 = uStack_d8;
      uVar9 = uStack_f0;
      uVar31 = uStack_f8;
      if ((uStack_d8 == uStack_f8) && (uStack_d0 == uStack_f0)) {
        func_0x000103bfd2e8(uVar36,uVar21,uVar22,uStack_c0,uStack_d8,uStack_d0,dStack_c8);
        uVar31 = uStack_e0;
        dVar10 = dStack_e8;
        func_0x000103bfd2e8(uVar38,uVar11,uVar15,uStack_e0,uVar25,uVar23,dStack_e8);
        func_0x0001034a6828(uVar38,uVar11,uVar15,uVar31,uVar25,uVar23,dVar10);
      }
      else {
        uVar20 = uStack_d8;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uStack_d8,uStack_d0,uStack_f8,uStack_f0,0);
        uStack_fc = (uint)uVar20;
        func_0x000103bfd2e8(uVar36,uVar21,uVar22,uStack_c0,uVar25,uVar23,dStack_c8);
        uVar25 = uStack_e0;
        dVar10 = dStack_e8;
        func_0x000103bfd2e8(uVar38,uVar11,uVar15,uStack_e0,uVar31,uVar9,dStack_e8);
        func_0x0001034a6828(uVar38,uVar11,uVar15,uVar25,uVar31,uVar9,dVar10);
        uVar23 = uStack_c0;
        uVar31 = uStack_d8;
        uVar38 = uStack_d0;
        dVar17 = dStack_c8;
        if ((uStack_fc & 1) == 0) goto LAB_104635c34;
      }
      uVar23 = uStack_c0;
      uVar31 = uStack_d8;
      uVar38 = uStack_d0;
      dVar17 = dStack_c8;
      if (dStack_c8 == dStack_e8) goto LAB_104635c6c;
    }
    else {
      func_0x000103bfd2e8(uVar36,uVar21,uVar22,uStack_c0,uStack_d8,uStack_d0,dStack_c8);
      uVar25 = uStack_e0;
      dVar10 = dStack_e8;
      uVar9 = uStack_f0;
      uVar31 = uStack_f8;
      func_0x000103bfd2e8(uVar38,uVar11,uVar15,uStack_e0,uStack_f8,uStack_f0,dStack_e8);
      func_0x0001034a6828(uVar38,uVar11,uVar15,uVar25,uVar31,uVar9,dVar10);
      uVar23 = uStack_c0;
      uVar31 = uStack_d8;
      uVar38 = uStack_d0;
      dVar17 = dStack_c8;
    }
    goto LAB_104635c34;
  }
  func_0x000103bfd2e8(uVar36,uVar21,uVar22,uVar9,uVar25,uVar31,dVar10);
  uVar23 = uStack_e0;
  dVar17 = dStack_e8;
  uStack_110 = uVar11;
  uStack_108 = uVar38;
  func_0x000103bfd2e8(uVar38,uVar11,uVar15,uStack_e0,uStack_f8,uStack_f0,dStack_e8);
  func_0x0001034a6828(uVar36,uVar21,uVar22,uVar9,uVar25,uVar31,dVar10);
  uVar36 = uStack_108;
  uVar21 = uStack_110;
  uVar22 = uVar15;
  uVar31 = uStack_f8;
  uVar38 = uStack_f0;
LAB_104635c34:
  func_0x0001034a6828(uVar36,uVar21,uVar22,uVar23,uVar31,uVar38,dVar17);
  return 0;
}



/* Entry: 104630cdc; end: 104630d3f;  */

void FUN_104630cdc(long param_1)

{
  long extraout_x8;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(param_1 + -8) + 0x40));
  func_0x0001018cf8d4();
  __sSS10describingSSx_tclufC
            (&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1);
  return;
}



/* Entry: 104630d40; end: 10463116f;  */

void FUN_104630d40(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  long lStack_100;
  undefined8 *apuStack_f8 [2];
  long lStack_e8;
  undefined8 *apuStack_e0 [6];
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  long lStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  long lStack_78;
  long lStack_70;
  
  lVar8 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  lVar11 = (long)&lStack_100 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_70 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar11 - extraout_x12;
  lVar8 = 0;
  FUN_1046305a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  puVar10 = (undefined8 *)(lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  lVar9 = 0;
  __s10Foundation3URLVMa();
  pcVar13 = *(code **)(*(long *)(lVar9 + -8) + 0x38);
  (*pcVar13)(lVar12,1,1,lVar9);
  (*pcVar13)(lVar11,1,1,lVar9);
  iVar7 = *(int *)(lVar8 + 0x14);
  (*pcVar13)((long)puVar10 + (long)iVar7,1,1,lVar9);
  lStack_100 = (long)*(int *)(lVar8 + 0x18);
  puVar1 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar8 + 0x20));
  puVar2 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar8 + 0x24));
  lStack_e8 = (long)*(int *)(lVar8 + 0x38);
  puVar3 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar8 + 0x40));
  apuStack_f8[1] = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar8 + 0x44));
  apuStack_f8[0] = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar8 + 0x48));
  apuStack_e0[4] = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar8 + 0x58));
  apuStack_e0[5] = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar8 + 0x5c));
  apuStack_e0[2] = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar8 + 0x60));
  apuStack_e0[3] = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar8 + 100));
  apuStack_e0[0] = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar8 + 0x68));
  apuStack_e0[1] = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar8 + 0x6c));
  puStack_b0 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar8 + 0x80));
  lStack_98 = (long)*(int *)(lVar8 + 0x8c);
  puStack_a0 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar8 + 0x90));
  puStack_a8 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar8 + 0x94));
  puVar4 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar8 + 0xa0));
  puStack_90 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar8 + 0xa8));
  puStack_88 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar8 + 0xac));
  lStack_78 = (long)*(int *)(lVar8 + 0xb8);
  (*pcVar13)((long)puVar10 + lStack_78,1,1,lVar9);
  puStack_80 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar8 + 0xc0));
  puVar5 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar8 + 0xc4));
  puVar6 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar8 + 0xd8));
  puVar6[6] = 0;
  puVar6[3] = 0;
  puVar6[2] = 0;
  puVar6[5] = 0;
  puVar6[4] = 0;
  puVar6[1] = 0;
  *puVar6 = 0;
  *puVar10 = 0;
  puVar10[1] = 0;
  func_0x000104630688(lVar12,(long)puVar10 + (long)iVar7,0x112d36580,&UNK_10d9016d0);
  *(undefined8 *)((long)puVar10 + lStack_100) = 0;
  *(undefined1 *)((long)puVar10 + (long)*(int *)(lVar8 + 0x1c)) = 0;
  puVar1[1] = 1;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined1 *)((long)puVar10 + (long)*(int *)(lVar8 + 0x28)) = 0;
  *(undefined1 *)((long)puVar10 + (long)*(int *)(lVar8 + 0x2c)) = 0;
  *(undefined8 *)((long)puVar10 + (long)*(int *)(lVar8 + 0x30)) = 0;
  *(undefined1 *)((long)puVar10 + (long)*(int *)(lVar8 + 0x34)) = 0;
  *(undefined8 *)((long)puVar10 + lStack_e8) = 0;
  *(undefined1 *)((long)puVar10 + (long)*(int *)(lVar8 + 0x3c)) = 0;
  *puVar3 = 0;
  *(undefined1 *)(puVar3 + 1) = 1;
  puVar2 = apuStack_f8[1];
  puVar1 = apuStack_f8[0];
  *apuStack_f8[1] = 0;
  puVar2[1] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)((long)puVar10 + (long)*(int *)(lVar8 + 0x4c)) = 0;
  *(undefined1 *)((long)puVar10 + (long)*(int *)(lVar8 + 0x50)) = 0;
  *(undefined1 *)((long)puVar10 + (long)*(int *)(lVar8 + 0x54)) = 0;
  puVar2 = apuStack_e0[5];
  puVar1 = apuStack_e0[4];
  *apuStack_e0[4] = 0;
  puVar1[1] = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar1 = apuStack_e0[2];
  *apuStack_e0[2] = 0;
  puVar1[1] = 0;
  puVar1 = apuStack_e0[3];
  *apuStack_e0[3] = 0;
  puVar1[1] = 0;
  puVar1 = apuStack_e0[0];
  *apuStack_e0[0] = 0;
  puVar1[1] = 0;
  puVar1 = apuStack_e0[1];
  *apuStack_e0[1] = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)((long)puVar10 + (long)*(int *)(lVar8 + 0x70)) = 0;
  *(undefined8 *)((long)puVar10 + (long)*(int *)(lVar8 + 0x74)) = 0;
  *(undefined8 *)((long)puVar10 + (long)*(int *)(lVar8 + 0x78)) = 0x17;
  *(undefined8 *)((long)puVar10 + (long)*(int *)(lVar8 + 0x7c)) = 10;
  puVar1 = puStack_b0;
  *puStack_b0 = 0;
  puVar1[1] = 0;
  *(undefined8 *)((long)puVar10 + (long)*(int *)(lVar8 + 0x84)) = 0;
  *(undefined1 *)((long)puVar10 + (long)*(int *)(lVar8 + 0x88)) = 0;
  puVar1 = puStack_a0;
  *(undefined8 *)((long)puVar10 + lStack_98) = 0;
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = puStack_a8;
  *puStack_a8 = 0;
  puVar1[1] = 0;
  *(undefined1 *)((long)puVar10 + (long)*(int *)(lVar8 + 0x98)) = 0;
  *(undefined1 *)((long)puVar10 + (long)*(int *)(lVar8 + 0x9c)) = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  *(undefined1 *)((long)puVar10 + (long)*(int *)(lVar8 + 0xa4)) = 0;
  puVar1 = puStack_90;
  *puStack_90 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = puStack_88;
  *puStack_88 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)((long)puVar10 + (long)*(int *)(lVar8 + 0xb0)) = 0;
  *(undefined1 *)((long)puVar10 + (long)*(int *)(lVar8 + 0xb4)) = 0;
  func_0x000104630688(lStack_70,(long)puVar10 + lStack_78,0x112d36580,&UNK_10d9016d0);
  *(undefined1 *)((long)puVar10 + (long)*(int *)(lVar8 + 0xbc)) = 0;
  puVar1 = puStack_80;
  *puStack_80 = 0;
  puVar1[1] = 0;
  *puVar5 = 0;
  puVar5[1] = 0;
  *(undefined1 *)((long)puVar10 + (long)*(int *)(lVar8 + 200)) = 0;
  *(undefined1 *)((long)puVar10 + (long)*(int *)(lVar8 + 0xcc)) = 0;
  *(undefined1 *)((long)puVar10 + (long)*(int *)(lVar8 + 0xd0)) = 0;
  *(undefined1 *)((long)puVar10 + (long)*(int *)(lVar8 + 0xd4)) = 0;
  func_0x0001034a6828(*puVar6,puVar6[1],puVar6[2],puVar6[3],puVar6[4],puVar6[5],puVar6[6]);
  FUN_10464ec90(0);
  puVar6[1] = 0;
  *puVar6 = 0;
  puVar6[3] = 0;
  puVar6[2] = 0;
  puVar6[5] = 0;
  puVar6[4] = 0;
  puVar6[6] = 0;
  _objc_allocWithZone();
  FUN_1046487dc();
  puRam0000000113814f50 = puVar10;
  return;
}



/* Entry: 104631170; end: 1046311af; +[SCAdWebBrowserConfig identity] */

void FUN_104631170(void)

{
  if (lRam000000011308adc8 != -1) {
    _swift_once(0x11308adc8,FUN_104630d40);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113814f50);
  return;
}



/* Entry: 1046311b0; end: 10463128f; -[SCAdWebBrowserConfig generatedDescription] */

void FUN_1046311b0(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x12;
  long lVar3;
  
  lVar1 = 0;
  FUN_1046305a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = (long)puVar2 - extraout_x12;
  _objc_retain(param_1);
  _objc_retain();
  FUN_1046465c0(lVar3);
  func_0x0001018cf8d4(lVar3,puVar2);
  __sSS10describingSSx_tclufC(puVar2,lVar1);
  _objc_release(param_1);
  func_0x0001018cf918(lVar3);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puVar2,lVar1);
  _swift_bridgeObjectRelease(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104631290; end: 104631397; -[SCAdWebBrowserConfig withBrowserClientId:] */

void FUN_104631290(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  long *plVar4;
  
  uVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_1046305a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar4 = (long *)(puVar3 + -extraout_x12);
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_1046465c0(plVar4);
  _swift_bridgeObjectRelease(plVar4[1]);
  *plVar4 = param_3;
  plVar4[1] = param_2;
  func_0x0001018cf8d4(plVar4,puVar3);
  _objc_allocWithZone(uVar1);
  FUN_1046487dc(puVar3,uVar1);
  _objc_release(param_1);
  func_0x0001018cf918(plVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104631398; end: 10463152f; -[SCAdWebBrowserConfig withExpectedInitialURL:] */

void FUN_104631398(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar5;
  long lVar6;
  
  uVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_1046305a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar4 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar4 - extraout_x12;
  lVar6 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = lVar5 - extraout_x8_00;
  if (param_3 == 0) {
    lVar3 = 0;
    __s10Foundation3URLVMa();
  }
  else {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar6,param_3);
    lVar3 = 0;
    __s10Foundation3URLVMa();
  }
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar6,param_3 == 0,1);
  _objc_retain(param_1);
  _objc_retain();
  FUN_1046465c0(lVar5);
  func_0x00010137dd74(lVar6,lVar5 + *(int *)(lVar2 + 0x14));
  func_0x0001018cf8d4(lVar5,puVar4);
  _objc_allocWithZone(uVar1);
  FUN_1046487dc(puVar4,uVar1);
  _objc_release(param_1);
  FUN_104637ce8(lVar6,0x112d36580,&UNK_10d9016d0);
  func_0x0001018cf918(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104631530; end: 104631647; -[SCAdWebBrowserConfig withInitialRequestHeaders:] */

void FUN_104631530(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x12;
  long lVar5;
  
  uVar2 = param_1;
  _swift_getObjectType();
  lVar3 = 0;
  FUN_1046305a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar4 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar4 - extraout_x12;
  if (param_3 != 0) {
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_3,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_1046465c0(lVar5);
  iVar1 = *(int *)(lVar3 + 0x18);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar5 + iVar1));
  *(long *)(lVar5 + iVar1) = param_3;
  func_0x0001018cf8d4(lVar5,puVar4);
  _objc_allocWithZone(uVar2);
  FUN_1046487dc(puVar4,uVar2);
  _objc_release(param_1);
  func_0x0001018cf918(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104631648; end: 104631737; -[SCAdWebBrowserConfig withAlwaysSendInitialRequestHeaders:] */

void FUN_104631648(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  long lVar4;
  
  uVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_1046305a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar3 - extraout_x12;
  _objc_retain(param_1);
  _objc_retain();
  FUN_1046465c0(lVar4);
  *(undefined1 *)(lVar4 + *(int *)(lVar2 + 0x1c)) = param_3;
  func_0x0001018cf8d4(lVar4,puVar3);
  _objc_allocWithZone(uVar1);
  FUN_1046487dc(puVar3);
  _objc_release(param_1);
  func_0x0001018cf918(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104631738; end: 10463189b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104631738(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x12;
  undefined8 unaff_x20;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 auStack_60 [4];
  
  _swift_getObjectType();
  lVar4 = 0;
  FUN_1046305a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar5 = (long)auStack_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar5 - extraout_x12;
  _objc_retain();
  FUN_1046465c0(lVar6);
  puVar1 = (undefined8 *)(lVar6 + *(int *)(lVar4 + 0x20));
  FUN_104635c8c(*puVar1,puVar1[1],puVar1[2],puVar1[3],puVar1[4]);
  if (param_1 == 0) {
    uVar9 = 1;
    uVar8 = 0;
    uVar10 = 0;
    uVar11 = 0;
    uVar7 = 0;
  }
  else {
    puVar2 = (undefined8 *)(param_1 + _DAT_11308b710);
    puVar3 = (undefined8 *)(param_1 + _DAT_11308b718);
    auStack_60[3] = puVar2[1];
    auStack_60[2] = *puVar2;
    uVar8 = puVar2[1];
    auStack_60[1] = puVar3[1];
    auStack_60[0] = *puVar3;
    uVar7 = *(undefined8 *)(param_1 + _DAT_11308b720);
    _swift_bridgeObjectRetain(puVar3[1]);
    _swift_bridgeObjectRetain(uVar8);
    uVar8 = auStack_60[2];
    uVar9 = auStack_60[3];
    uVar10 = auStack_60[0];
    uVar11 = auStack_60[1];
  }
  puVar1[1] = uVar9;
  *puVar1 = uVar8;
  puVar1[3] = uVar11;
  puVar1[2] = uVar10;
  puVar1[4] = uVar7;
  func_0x0001018cf8d4(lVar6,lVar5);
  _objc_allocWithZone(unaff_x20);
  FUN_1046487dc(lVar5,unaff_x20);
  func_0x0001018cf918(lVar6);
  return lVar5;
}


