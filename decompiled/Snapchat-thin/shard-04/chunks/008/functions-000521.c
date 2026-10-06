/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1038bb128; end: 1038bb137; -[_TtC34MapWidgetOnboardingFactoryServices34MapWidgetOnboardingFactoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038bb128(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112fa9640));
  return;
}



/* Entry: 1038bb138; end: 1038bb17b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038bb138(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa9680;
  func_0x000107c61428(unaff_x20 + _DAT_112fa9680,auStack_38,0,0);
  func_0x000107c61618(unaff_x20 + lVar1);
  return;
}



/* Entry: 1038bb17c; end: 1038bb2c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038bb17c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa9680;
  func_0x000107c61428(unaff_x20 + _DAT_112fa9680,auStack_48,1,0);
  func_0x000107c61604(unaff_x20 + lVar1,param_1);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 1038bb2c8; end: 1038bb3a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1038bb2c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_78 [8];
  undefined1 auStack_68 [24];
  
  func_0x000107c610f8();
  lVar3 = _DAT_112fa9680;
  func_0x000107c61614(unaff_x20 + _DAT_112fa9680,0);
  *(undefined8 *)(unaff_x20 + _DAT_112fa9670) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa9678);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  func_0x000107c61428(unaff_x20 + lVar3,auStack_68,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_4);
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  puVar4 = auStack_78;
  func_0x000107c61154(puVar4,puVar2);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_4);
  return puVar4;
}



/* Entry: 1038bb3a4; end: 1038bb46f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1038bb3a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar3 = _DAT_112fa9680;
  func_0x000107c61614(unaff_x20 + _DAT_112fa9680,0);
  *(undefined8 *)(unaff_x20 + _DAT_112fa9670) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa9678);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  func_0x000107c61428(unaff_x20 + lVar3,auStack_58,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_4);
  func_0x000100343df4();
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  puVar4 = &stack0xffffffffffffff98;
  func_0x000107c61154(puVar4,puVar2);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_4);
  return puVar4;
}



/* Entry: 1038bb470; end: 1038bb52f; -[_TtC24MapWidgetOnboardingScope24MapWidgetOnboardingScope initWithUiContainer:calloutUserId:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038bb470(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c5faec();
  lVar3 = _DAT_112fa9680;
  func_0x000107c61614(param_1 + _DAT_112fa9680,0);
  *(undefined8 *)(param_1 + _DAT_112fa9670) = param_3;
  puVar1 = (undefined8 *)(param_1 + _DAT_112fa9678);
  *puVar1 = param_4;
  puVar1[1] = param_2;
  func_0x000107c61428(param_1 + lVar3,auStack_58,1,0);
  lVar3 = param_1 + lVar3;
  func_0x000107c61604(lVar3,param_5);
  func_0x000100343df4();
  puVar2 = PTR_s_init_1125d9248;
  lStack_68 = param_1;
  lStack_60 = lVar3;
  func_0x000107c615f0(param_3);
  func_0x000107c61154(&lStack_68,puVar2);
  return;
}



/* Entry: 1038bb530; end: 1038bb55f;  */

void FUN_1038bb530(void)

{
  func_0x000100343df4();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1038bb560; end: 1038bb5cf; -[_TtC24MapWidgetOnboardingScope24MapWidgetOnboardingScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1038bb560(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fa9670));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fa9678 + 8));
  param_1 = param_1 + _DAT_112fa9680;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1038bb5d0; end: 1038bb5df; -[_TtC31SCMapComposerPlaceStoryServices31SCMapComposerPlaceStoryServices composerPlaceStoryPlayerVendor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038bb5d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fa96b0));
  return;
}



/* Entry: 1038bb5e0; end: 1038bb62b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038bb5e0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fa96b0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038bb62c; end: 1038bb68b; -[_TtC31SCMapComposerPlaceStoryServices31SCMapComposerPlaceStoryServices init] */

void FUN_1038bb62c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMapComposerPlaceStoryServices.SCMapComposerPlaceStoryServices",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038bb658);
  (*pcVar1)();
}



/* Entry: 1038bb68c; end: 1038bb69b; -[_TtC31SCMapComposerPlaceStoryServices31SCMapComposerPlaceStoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038bb68c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fa96b0));
  return;
}



/* Entry: 1038bb69c; end: 1038bb6fb;  */

bool FUN_1038bb69c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = param_1[2];
  uVar1 = param_2[1];
  uVar3 = param_2[2];
  if (param_1[1] == 0) {
    if (uVar1 == 0) goto LAB_1038bb6dc;
  }
  else if ((uVar1 != 0) &&
          ((uVar4 = *param_1, uVar4 == *param_2 && param_1[1] == uVar1 ||
           (func_0x000107c605b8(), (uVar4 & 1) != 0)))) {
LAB_1038bb6dc:
    return uVar2 == uVar3;
  }
  return false;
}



/* Entry: 1038bb6fc; end: 1038bb703;  */

void FUN_1038bb6fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1038bb704; end: 1038bb737;  */

undefined8 * FUN_1038bb704(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  func_0x000107c61434();
  return param_1;
}



/* Entry: 1038bb738; end: 1038bb78b;  */

undefined8 * FUN_1038bb738(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  return param_1;
}



/* Entry: 1038bb78c; end: 1038bb7c7;  */

undefined8 * FUN_1038bb78c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  param_1[2] = param_2[2];
  return param_1;
}



/* Entry: 1038bb7c8; end: 1038bb8e3;  */

int FUN_1038bb7c8(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[6] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1038bb8e4; end: 1038bb90f;  */

long FUN_1038bb8e4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1038bb910; end: 1038bb917;  */

void FUN_1038bb910(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 1038bb918; end: 1038bb9db;  */

undefined8 * FUN_1038bb918(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 1038bb9dc; end: 1038bbaf7;  */

int FUN_1038bb9dc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1038bbaf8; end: 1038bbb5b;  */

undefined8 FUN_1038bbaf8(float *param_1,float *param_2)

{
  bool bVar1;
  ulong uVar2;
  
  bVar1 = false;
  if ((*param_1 == *param_2) &&
     (bVar1 = false, !NAN(*(double *)(param_1 + 2)) && !NAN(*(double *)(param_2 + 2)))) {
    bVar1 = *(double *)(param_1 + 2) == *(double *)(param_2 + 2);
  }
  if (bVar1) {
    uVar2 = *(ulong *)(param_1 + 4);
    if ((uVar2 == *(ulong *)(param_2 + 4) && *(long *)(param_1 + 6) == *(long *)(param_2 + 6)) ||
       (func_0x000107c605b8(uVar2,*(long *)(param_1 + 6),*(ulong *)(param_2 + 4),
                            *(long *)(param_2 + 6),0), (uVar2 & 1) != 0)) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 1038bbb5c; end: 1038bbb87;  */

long FUN_1038bbb5c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1038bbb88; end: 1038bbb8f;  */

void FUN_1038bbb88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 1038bbb90; end: 1038bbc53;  */

undefined8 * FUN_1038bbb90(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 1038bbc54; end: 1038bbceb;  */

int FUN_1038bbc54(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1038bbcec; end: 1038bbd9b;  */

void FUN_1038bbcec(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x0001038bbdbc();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1038bbd9c; end: 1038bbdf3;  */

void FUN_1038bbd9c(long *param_1,long *param_2)

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



/* Entry: 1038bbdf4; end: 1038bbe33;  */

void FUN_1038bbdf4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fa96e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1c0f0;
  func_0x000107c61520(&UNK_10dc1c0f0,&UNK_1106a49b8);
  puRam0000000112fa96e0 = puVar1;
  return;
}



/* Entry: 1038bbe34; end: 1038bbe37;  */

void FUN_1038bbe34(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fa96e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1c190;
  func_0x000107c61520(&UNK_10dc1c190,&UNK_1106a49d8);
  puRam0000000112fa96e8 = puVar1;
  return;
}



/* Entry: 1038bbe38; end: 1038bbe77;  */

void FUN_1038bbe38(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fa96e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1c190;
  func_0x000107c61520(&UNK_10dc1c190,&UNK_1106a49d8);
  puRam0000000112fa96e8 = puVar1;
  return;
}



/* Entry: 1038bbe78; end: 1038bbedb;  */

undefined1  [16] FUN_1038bbe78(void)

{
  return ZEXT816(0x1106a49b8);
}



/* Entry: 1038bbedc; end: 1038bbf73;  */

undefined8 FUN_1038bbedc(int param_1,int param_2,ulong param_3,int param_4,int param_5,long param_6)

{
  if (param_3 == 0) {
    if (param_6 == 0) {
      return 1;
    }
  }
  else if (param_6 != 0) {
    func_0x000107c61434(param_6);
    if ((param_1 == param_4) && (param_2 == param_5)) {
      FUN_1038bc16c(param_3,param_6);
      func_0x000107c6142c(param_6);
      if ((param_3 & 1) != 0) {
        return 1;
      }
    }
    else {
      func_0x000107c6142c(param_6);
    }
  }
  return 0;
}



/* Entry: 1038bbf74; end: 1038bbf7b;  */

void FUN_1038bbf74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 1038bbf7c; end: 1038bbffb;  */

undefined8 * FUN_1038bbf7c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1038bbffc; end: 1038bc0c3;  */

int FUN_1038bbffc(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[6] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1038bc0c4; end: 1038bc16b;  */

undefined8 FUN_1038bc0c4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == *(long *)(param_2 + 0x10)) {
    if ((lVar6 != 0) && (param_1 != param_2)) {
      lVar7 = 0;
      do {
        lVar1 = param_1 + lVar7;
        lVar2 = param_2 + lVar7;
        bVar3 = false;
        if ((*(float *)(lVar1 + 0x20) == *(float *)(lVar2 + 0x20)) &&
           (bVar3 = false, !NAN(*(double *)(lVar1 + 0x28)) && !NAN(*(double *)(lVar2 + 0x28)))) {
          bVar3 = *(double *)(lVar1 + 0x28) == *(double *)(lVar2 + 0x28);
        }
        if ((!bVar3) ||
           ((uVar4 = *(ulong *)(lVar1 + 0x30),
            uVar4 != *(ulong *)(lVar2 + 0x30) || *(long *)(lVar1 + 0x38) != *(long *)(lVar2 + 0x38)
            && (func_0x000107c605b8(), (uVar4 & 1) == 0)))) goto LAB_1038bc150;
        lVar7 = lVar7 + 0x20;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    uVar5 = 1;
  }
  else {
LAB_1038bc150:
    uVar5 = 0;
  }
  return uVar5;
}



/* Entry: 1038bc16c; end: 1038bc203;  */

bool FUN_1038bc16c(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  double *pdVar3;
  double *pdVar4;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != *(long *)(param_2 + 0x10)) {
    return false;
  }
  if ((lVar2 != 0) && (param_1 != param_2)) {
    pdVar3 = (double *)(param_2 + 0x28);
    pdVar4 = (double *)(param_1 + 0x28);
    do {
      lVar2 = lVar2 + -1;
      bVar1 = *pdVar4 == *pdVar3 && pdVar4[-1] == pdVar3[-1];
      if (*pdVar4 != *pdVar3 || pdVar4[-1] != pdVar3[-1]) {
        return bVar1;
      }
      pdVar3 = pdVar3 + 2;
      pdVar4 = pdVar4 + 2;
    } while (lVar2 != 0);
    return bVar1;
  }
  return true;
}



/* Entry: 1038bc204; end: 1038bc463;  */

uint FUN_1038bc204(ulong param_1,ulong param_2,code *param_3,code *param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong *puVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  
  if (param_1 >> 0x3e == 0) {
    uVar11 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar11 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar11 = param_1;
    }
    func_0x000107c60480();
  }
  if (param_2 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_2 & 0xffffffffffffff8;
    if ((param_2 & 0x8000000000000000) != 0) {
      uVar2 = param_2;
    }
    func_0x000107c60480();
  }
  if (uVar11 == uVar2) {
    if (uVar11 != 0) {
      uVar5 = param_1 & 0xffffffffffffff8;
      uVar2 = uVar5;
      if ((param_1 & 0x8000000000000000) != 0) {
        uVar2 = param_1;
      }
      uVar3 = uVar5 + 0x20;
      if (param_1 >> 0x3e != 0) {
        uVar3 = uVar2;
      }
      uVar6 = param_2 & 0xffffffffffffff8;
      uVar2 = uVar6;
      if ((param_2 & 0x8000000000000000) != 0) {
        uVar2 = param_2;
      }
      uVar4 = uVar6 + 0x20;
      if (param_2 >> 0x3e != 0) {
        uVar4 = uVar2;
      }
      if (uVar3 != uVar4) {
        if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1038bc464);
          (*pcVar1)();
        }
        (*param_3)(0);
        if (((param_2 | param_1) & 0xc000000000000001) == 0) {
          lVar8 = *(long *)(uVar5 + 0x10);
          lVar13 = *(long *)(uVar6 + 0x10);
          puVar9 = (ulong *)(param_1 + 0x20);
          puVar12 = (undefined8 *)(param_2 + 0x20);
          do {
            uVar11 = uVar11 - 1;
            if (lVar8 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1038bc3f4);
              (*pcVar1)();
            }
            if (lVar13 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1038bc3f8);
              (*pcVar1)();
            }
            uVar5 = *puVar9;
            uVar7 = *puVar12;
            func_0x000107c61174();
            func_0x000107c61174(uVar7);
            uVar2 = uVar5;
            func_0x000107c60118(uVar5,uVar7);
            uVar10 = (uint)uVar2;
            func_0x000107c61170(uVar5);
            func_0x000107c61170(uVar7);
            if ((uVar2 & 1) == 0) break;
            lVar13 = lVar13 + -1;
            lVar8 = lVar8 + -1;
            puVar9 = puVar9 + 1;
            puVar12 = puVar12 + 1;
          } while (uVar11 != 0);
        }
        else {
          lVar8 = 4;
          do {
            uVar11 = uVar11 - 1;
            uVar2 = lVar8 - 4;
            if ((param_1 & 0xc000000000000001) == 0) {
              if (*(long *)(uVar5 + 0x10) <= (long)uVar2) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1038bc3fc);
                (*pcVar1)();
              }
              uVar3 = *(ulong *)(param_1 + lVar8 * 8);
              func_0x000107c61174();
              if ((param_2 & 0xc000000000000001) == 0) goto LAB_1038bc31c;
LAB_1038bc2e8:
              (*param_4)(uVar2,param_2);
            }
            else {
              uVar3 = uVar2;
              (*param_4)(uVar2,param_1);
              if ((param_2 & 0xc000000000000001) != 0) goto LAB_1038bc2e8;
LAB_1038bc31c:
              if (*(long *)(uVar6 + 0x10) <= (long)uVar2) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1038bc400);
                (*pcVar1)();
              }
              uVar2 = *(ulong *)(param_2 + lVar8 * 8);
              func_0x000107c61174(uVar2);
            }
            uVar4 = uVar3;
            func_0x000107c60118(uVar3,uVar2);
            uVar10 = (uint)uVar4;
            func_0x000107c61170(uVar3);
            func_0x000107c61170(uVar2);
          } while (((uVar4 & 1) != 0) && (lVar8 = lVar8 + 1, uVar11 != 0));
        }
        goto LAB_1038bc43c;
      }
    }
    uVar10 = 1;
  }
  else {
    uVar10 = 0;
  }
LAB_1038bc43c:
  return uVar10 & 1;
}



/* Entry: 1038bc464; end: 1038bc5bf;  */

undefined8 FUN_1038bc464(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar6 = *param_1;
  lVar7 = *param_2;
  lVar8 = *(long *)(lVar6 + 0x10);
  if (lVar8 == *(long *)(lVar7 + 0x10)) {
    if ((lVar8 != 0) && (lVar6 != lVar7)) {
      lVar9 = 0;
      do {
        lVar1 = lVar6 + lVar9;
        lVar2 = lVar7 + lVar9;
        bVar3 = false;
        if ((*(float *)(lVar1 + 0x20) == *(float *)(lVar2 + 0x20)) &&
           (bVar3 = false, !NAN(*(double *)(lVar1 + 0x28)) && !NAN(*(double *)(lVar2 + 0x28)))) {
          bVar3 = *(double *)(lVar1 + 0x28) == *(double *)(lVar2 + 0x28);
        }
        if ((!bVar3) ||
           ((uVar4 = *(ulong *)(lVar1 + 0x30),
            uVar4 != *(ulong *)(lVar2 + 0x30) || *(long *)(lVar1 + 0x38) != *(long *)(lVar2 + 0x38)
            && (func_0x000107c605b8(), (uVar4 & 1) == 0)))) goto LAB_1038bc150;
        lVar9 = lVar9 + 0x20;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    uVar5 = 1;
  }
  else {
LAB_1038bc150:
    uVar5 = 0;
  }
  return uVar5;
}



/* Entry: 1038bc5c0; end: 1038bc63f;  */

undefined8 * FUN_1038bc5c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1038bc640; end: 1038bc6df;  */

int FUN_1038bc640(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1038bc6e0; end: 1038bc6ef; -[_TtC23SCMapNavigationServices23SCMapNavigationServices navigationRouteFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038bc6e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fa96f0));
  return;
}



/* Entry: 1038bc6f0; end: 1038bc73b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038bc6f0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fa96f0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038bc73c; end: 1038bc793; -[_TtC23SCMapNavigationServices23SCMapNavigationServices initWithNavigationRouteFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038bc73c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fa96f0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1038bc794; end: 1038bc7f3; -[_TtC23SCMapNavigationServices23SCMapNavigationServices init] */

void FUN_1038bc794(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMapNavigationServices.SCMapNavigationServices",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038bc7c0);
  (*pcVar1)();
}



/* Entry: 1038bc7f4; end: 1038bc803; -[_TtC23SCMapNavigationServices23SCMapNavigationServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038bc7f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fa96f0));
  return;
}



/* Entry: 1038bc804; end: 1038bc85f; -[SCMapNavigationCodedDescription errorDescription] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038bc804(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112fa9720))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112fa9720);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1038bc860; end: 1038bc873; -[SCMapNavigationCodedDescription error] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1038bc860(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fa9728);
}



/* Entry: 1038bc874; end: 1038bc963; -[SCMapNavigationCodedDescription initWithErrorDescription:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038bc874(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112fa9720);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_112fa9728) = param_4;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038bc964; end: 1038bc997; -[SCMapNavigationCodedDescription hash] */

undefined8 FUN_1038bc964(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1038bc998();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 1038bc998; end: 1038bcb33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038bc998(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  func_0x000107c606ac(auStack_78);
  if (((undefined8 *)(unaff_x20 + _DAT_112fa9720))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112fa9720);
    func_0x000107c5fadc(uVar1);
    uVar2 = uVar1;
    func_0x000107c44c3c();
    func_0x000107c61170(uVar1);
  }
  func_0x000107c60690(uVar2);
  func_0x000107c60690(*(undefined8 *)(unaff_x20 + _DAT_112fa9728));
  func_0x000107c606a4();
  return;
}



/* Entry: 1038bcb34; end: 1038bcbb3; -[SCMapNavigationCodedDescription isEqual:] */

uint FUN_1038bcb34(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  func_0x0001038bca2c(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1038bcbb4; end: 1038bcbb7; -[SCMapNavigationCodedDescription copyWithZone:] */

void FUN_1038bcbb4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1038bcbb8; end: 1038bcbd3; -[SCMapNavigationCodedDescription description] */

void FUN_1038bcbb8(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038bcbd4; end: 1038bcc4f; -[SCMapNavigationCodedDescription init] */

void FUN_1038bcbd4(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCMapNavigationServices/SCMapNavigationCodedDescriptionWrapper.swift",0x44,2,
                      0x38,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038bcc1c);
  (*pcVar1)();
}



/* Entry: 1038bcc50; end: 1038bcc63; -[SCMapNavigationCodedDescription .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038bcc50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fa9720 + 8))
  ;
  return;
}



/* Entry: 1038bcc64; end: 1038bcc83;  */

void FUN_1038bcc64(void)

{
  func_0x000107c61168(&PTR_PTR_1128fb3b0);
  return;
}



/* Entry: 1038bcc84; end: 1038bcc87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038bcc84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa9720);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fa9728) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038bcc88; end: 1038bcc97; -[SCMapNavigationDirectionsRoute leg] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038bcc88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fa9758));
  return;
}



/* Entry: 1038bcc98; end: 1038bcce3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038bcc98(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fa9758) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038bcce4; end: 1038bcd3b; -[SCMapNavigationDirectionsRoute initWithLeg:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038bcce4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fa9758) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1038bcd3c; end: 1038bce3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038bcd3c(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  undefined1 auStack_90 [8];
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  func_0x000107c610f8();
  lVar2 = 0;
  FUN_1038bfc5c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  lVar4 = 0;
  func_0x0001038bffe0();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined4 *)(lVar5 + _DAT_112fa98e0) = param_1;
  *(undefined8 *)(lVar5 + _DAT_112fa98e8) = param_2;
  plVar6 = &lStack_70;
  lStack_70 = lVar5;
  lStack_68 = lVar4;
  func_0x000107c61154(plVar6,PTR_s_init_1125d9248);
  *(long **)(lVar3 + _DAT_112fa98a8) = plVar6;
  puVar1 = (undefined8 *)(lVar3 + _DAT_112fa98b0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  plVar6 = &lStack_80;
  lStack_80 = lVar3;
  lStack_78 = lVar2;
  func_0x000107c61154(plVar6,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_112fa9758) = plVar6;
  func_0x000107c61154(auStack_90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038bce40; end: 1038bce73; -[SCMapNavigationDirectionsRoute hash] */

undefined8 FUN_1038bce40(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1038bce74();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 1038bce74; end: 1038bcfef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038bce74(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_c0 [72];
  undefined1 auStack_78 [72];
  
  func_0x000107c606ac(auStack_78);
  lVar4 = *(long *)(unaff_x20 + _DAT_112fa9758);
  func_0x000107c606ac(auStack_c0);
  FUN_1038bfc7c();
  func_0x000107c60690();
  puVar1 = (undefined8 *)(lVar4 + _DAT_112fa98b0);
  uVar2 = *puVar1;
  func_0x000107c5fadc(uVar2,puVar1[1]);
  uVar3 = uVar2;
  func_0x000107c44c3c();
  func_0x000107c61170(uVar2);
  func_0x000107c60690(uVar3);
  func_0x000107c606a4();
  func_0x000107c60690();
  func_0x000107c606a4();
  return;
}



/* Entry: 1038bcff0; end: 1038bd06f; -[SCMapNavigationDirectionsRoute isEqual:] */

uint FUN_1038bcff0(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  func_0x0001038bcf24(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1038bd070; end: 1038bd073; -[SCMapNavigationDirectionsRoute copyWithZone:] */

void FUN_1038bd070(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1038bd074; end: 1038bd08f; -[SCMapNavigationDirectionsRoute description] */

void FUN_1038bd074(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038bd090; end: 1038bd10b; -[SCMapNavigationDirectionsRoute init] */

void FUN_1038bd090(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCMapNavigationServices/SCMapNavigationDirectionsRouteWrapper.swift",0x43,2,
                      0x31,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038bd0d8);
  (*pcVar1)();
}



/* Entry: 1038bd10c; end: 1038bd11b; -[SCMapNavigationDirectionsRoute .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038bd10c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fa9758));
  return;
}



/* Entry: 1038bd11c; end: 1038bd13b;  */

void FUN_1038bd11c(void)

{
  func_0x000107c61168(&PTR_PTR_1128fb480);
  return;
}



/* Entry: 1038bd13c; end: 1038bd14b; -[SCMapNavigationGetRouteRequest options] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038bd13c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fa9788));
  return;
}



/* Entry: 1038bd14c; end: 1038bd1e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038bd14c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fa9788) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038bd1e4; end: 1038bd23b; -[SCMapNavigationGetRouteRequest initWithOptions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038bd1e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fa9788) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1038bd23c; end: 1038bd2cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038bd23c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  uVar1 = 0;
  if (param_3 != 0) {
    FUN_1038bf720();
    func_0x000107c610f8();
    FUN_1038bf230(param_1,param_2,param_3,uVar1);
    uVar1 = param_1;
  }
  *(undefined8 *)(unaff_x20 + _DAT_112fa9788) = uVar1;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038bd2d0; end: 1038bd303; -[SCMapNavigationGetRouteRequest hash] */

undefined8 FUN_1038bd2d0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1038bd304();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 1038bd304; end: 1038bd50b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038bd304(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_c0 [72];
  undefined1 auStack_78 [72];
  
  func_0x000107c606ac(auStack_78);
  lVar2 = *(long *)(unaff_x20 + _DAT_112fa9788);
  if (lVar2 == 0) {
    func_0x000107c60694(0);
  }
  else {
    func_0x000107c606ac(auStack_c0);
    func_0x000107c60690(*(undefined8 *)(lVar2 + _DAT_112fa9868));
    func_0x000107c60690(*(undefined8 *)(lVar2 + _DAT_112fa9870));
    uVar3 = *(undefined8 *)(lVar2 + _DAT_112fa9878);
    uVar1 = 0;
    FUN_1038bee3c(0);
    func_0x000107c5fc48(uVar3,uVar1);
    uVar1 = uVar3;
    func_0x000107c44c3c();
    func_0x000107c61170(uVar3);
    func_0x000107c60690(uVar1);
    func_0x000107c606a4();
    func_0x000107c60694(1);
    func_0x000107c60690(uVar1);
  }
  func_0x000107c606a4();
  return;
}



/* Entry: 1038bd50c; end: 1038bd58b; -[SCMapNavigationGetRouteRequest isEqual:] */

uint FUN_1038bd50c(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  func_0x0001038bd3fc(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1038bd58c; end: 1038bd58f; -[SCMapNavigationGetRouteRequest copyWithZone:] */

void FUN_1038bd58c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1038bd590; end: 1038bd5d3; -[SCMapNavigationGetRouteRequest description] */

void FUN_1038bd590(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_1038bd660();
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038bd5d4; end: 1038bd64f; -[SCMapNavigationGetRouteRequest init] */

void FUN_1038bd5d4(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCMapNavigationServices/SCMapNavigationGetRouteRequestWrapper.swift",0x43,2,
                      0x31,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038bd61c);
  (*pcVar1)();
}



/* Entry: 1038bd650; end: 1038bd65f; -[SCMapNavigationGetRouteRequest .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038bd650(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fa9788));
  return;
}



/* Entry: 1038bd660; end: 1038bd84b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1038bd660(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar3 = *(long *)(param_1 + _DAT_112fa9788);
  if (lVar3 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(lVar3 + _DAT_112fa9868);
    uVar7 = *(ulong *)(lVar3 + _DAT_112fa9878);
    if (uVar7 >> 0x3e == 0) {
      uVar8 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar8 = uVar7 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar7) {
        uVar8 = uVar7;
      }
      func_0x000107c60480();
    }
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar8 != 0) {
      func_0x000107c61174();
      func_0x0001038be030(0,uVar8 & ((long)uVar8 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1038bd84c);
        (*pcVar2)();
      }
      uVar9 = 0;
      do {
        if ((uVar7 & 0xc000000000000001) == 0) {
          uVar4 = *(ulong *)(uVar7 + uVar9 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar4 = uVar9;
          FUN_1038bde60(uVar9,uVar7);
        }
        lVar5 = *(long *)(uVar4 + _DAT_112fa9838);
        func_0x000107c61174();
        func_0x000107c61170(uVar4);
        uVar10 = *(undefined8 *)(lVar5 + _DAT_112fa9800);
        uVar11 = *(undefined8 *)(lVar5 + _DAT_112fa9808);
        func_0x000107c61170(lVar5);
        uVar4 = *(ulong *)(puVar1 + 0x10);
        if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar4) {
          func_0x0001038be030(1 < *(ulong *)(puVar1 + 0x18),uVar4 + 1,1);
        }
        uVar9 = uVar9 + 1;
        *(ulong *)(puVar1 + 0x10) = uVar4 + 1;
        *(undefined8 *)(puVar1 + uVar4 * 0x10 + 0x20) = uVar10;
        *(undefined8 *)(puVar1 + uVar4 * 0x10 + 0x28) = uVar11;
      } while (uVar8 != uVar9);
      func_0x000107c61170(lVar3);
    }
  }
  return uVar6;
}



/* Entry: 1038bd84c; end: 1038bd86b;  */

void FUN_1038bd84c(void)

{
  func_0x000107c61168(&PTR_PTR_1128fb548);
  return;
}



/* Entry: 1038bd86c; end: 1038bd907; -[SCMapNavigationGetRouteResponse mapNavigationDirectionsRoutes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038bd86c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fa97b8);
  FUN_1038bd11c(0);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1038bd908; end: 1038bd973; -[SCMapNavigationGetRouteResponse initWithMapNavigationDirectionsRoutes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038bd908(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  uVar2 = 0;
  FUN_1038bd11c(0);
  func_0x000107c5fc54(param_3,uVar2);
  *(undefined8 *)(param_1 + _DAT_112fa97b8) = param_3;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038bd974; end: 1038bd9a3;  */

void FUN_1038bd974(undefined8 param_1)

{
  func_0x000107c610f8();
  FUN_1038bd9a4(param_1);
  return;
}



/* Entry: 1038bd9a4; end: 1038bdbb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038bd9a4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  long unaff_x20;
  undefined *puVar14;
  long lVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined1 auStack_b8 [16];
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined *puStack_78;
  
  func_0x000107c614f0();
  lVar15 = *(long *)(param_1 + 0x10);
  if (lVar15 == 0) {
    func_0x000107c6142c(param_1);
    puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001038be04c(0,lVar15,0);
    puVar14 = puStack_78;
    lVar6 = 0;
    FUN_1038bd11c();
    puVar13 = (undefined8 *)(param_1 + 0x38);
    do {
      uVar16 = *(undefined4 *)(puVar13 + -3);
      uVar17 = puVar13[-2];
      uVar2 = puVar13[-1];
      uVar4 = *puVar13;
      lVar7 = lVar6;
      func_0x000107c610f8();
      lVar8 = 0;
      FUN_1038bfc5c();
      lVar9 = lVar8;
      func_0x000107c610f8();
      lVar10 = 0;
      func_0x0001038bffe0();
      lVar11 = lVar10;
      func_0x000107c610f8();
      *(undefined4 *)(lVar11 + _DAT_112fa98e0) = uVar16;
      *(undefined8 *)(lVar11 + _DAT_112fa98e8) = uVar17;
      puVar5 = PTR_s_init_1125d9248;
      lStack_88 = lVar11;
      lStack_80 = lVar10;
      func_0x000107c61434(uVar4);
      plVar12 = &lStack_88;
      func_0x000107c61154(plVar12,puVar5);
      *(long **)(lVar9 + _DAT_112fa98a8) = plVar12;
      puVar1 = (undefined8 *)(lVar9 + _DAT_112fa98b0);
      *puVar1 = uVar2;
      puVar1[1] = uVar4;
      plVar12 = &lStack_98;
      lStack_98 = lVar9;
      lStack_90 = lVar8;
      func_0x000107c61154(plVar12,PTR_s_init_1125d9248);
      *(long **)(lVar7 + _DAT_112fa9758) = plVar12;
      plVar12 = &lStack_a8;
      lStack_a8 = lVar7;
      lStack_a0 = lVar6;
      func_0x000107c61154(plVar12,PTR_s_init_1125d9248);
      uVar3 = *(ulong *)(puVar14 + 0x10);
      puStack_78 = puVar14;
      if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar3) {
        func_0x0001038be04c(1 < *(ulong *)(puVar14 + 0x18),uVar3 + 1,1);
      }
      puVar14 = puStack_78;
      puVar13 = puVar13 + 4;
      *(ulong *)(puStack_78 + 0x10) = uVar3 + 1;
      *(long **)(puStack_78 + uVar3 * 8 + 0x20) = plVar12;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    func_0x000107c6142c(param_1);
  }
  *(undefined **)(unaff_x20 + _DAT_112fa97b8) = puVar14;
  func_0x000107c61154(auStack_b8,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038bdbb8; end: 1038bdd13; -[SCMapNavigationGetRouteResponse hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1038bdbb8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  func_0x000107c606ac(auStack_78);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fa97b8);
  uVar1 = 0;
  FUN_1038bd11c(0);
  func_0x000107c61174(param_1);
  func_0x000107c5fc48(uVar2,uVar1);
  uVar1 = uVar2;
  func_0x000107c44c3c();
  func_0x000107c61170(uVar2);
  func_0x000107c60690(uVar1);
  func_0x000107c606a4();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 1038bdd14; end: 1038bdd93; -[SCMapNavigationGetRouteResponse isEqual:] */

uint FUN_1038bdd14(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  func_0x0001038bdc54(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1038bdd94; end: 1038bdd97; -[SCMapNavigationGetRouteResponse copyWithZone:] */

void FUN_1038bdd94(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1038bdd98; end: 1038bddd3; -[SCMapNavigationGetRouteResponse description] */

void FUN_1038bdd98(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1038be44c();
  func_0x000107c6142c();
  func_0x000107c61170(param_1);
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038bddd4; end: 1038bde4f; -[SCMapNavigationGetRouteResponse init] */

void FUN_1038bddd4(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCMapNavigationServices/SCMapNavigationGetRouteResponseWrapper.swift",0x44,2,
                      0x33,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038bde1c);
  (*pcVar1)();
}



/* Entry: 1038bde50; end: 1038bde5f; -[SCMapNavigationGetRouteResponse .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038bde50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fa97b8));
  return;
}



/* Entry: 1038bde60; end: 1038bdffb;  */

ulong FUN_1038bde60(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1038bdf30);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1038bdf34);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    FUN_1038bee3c(0);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar4 = 0;
    FUN_1038bee3c(0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000019,0x800000010f172be0);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1038bdffc);
  (*pcVar2)();
}



/* Entry: 1038bdffc; end: 1038be09b;  */

void FUN_1038bdffc(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1038be19c();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1038be09c; end: 1038be19b;  */

undefined * FUN_1038be09c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1038be19c);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112fa97f8;
    func_0x0001000285a8(0x112fa97f8,&UNK_10dc1c568);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar1,puVar4,uVar6 << 4);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1038be19c; end: 1038be2d7;  */

code * FUN_1038be19c(ulong param_1,ulong param_2,ulong param_3,code *param_4,code *param_5,
                    undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1038be2d8);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  pcVar2 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    pcVar2 = param_5;
    func_0x0001038be3e0(param_5,param_6,param_7);
    func_0x000107c613fc();
    pcVar3 = pcVar2;
    func_0x000107c610a4();
    pcVar1 = pcVar3 + -0x19;
    if (0x1f < (long)pcVar3) {
      pcVar1 = pcVar3 + -0x20;
    }
    *(ulong *)(pcVar2 + 0x10) = uVar6;
    *(ulong *)(pcVar2 + 0x18) = ((long)pcVar1 >> 3) << 1 | 1;
  }
  pcVar1 = pcVar2 + 0x20;
  pcVar3 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar4 = 0;
    (*param_5)(0);
    func_0x000107c6140c(pcVar1,pcVar3,uVar6,uVar4);
  }
  else {
    if (pcVar2 != param_4 || pcVar3 + uVar6 * 8 <= pcVar1) {
      func_0x000107c610b8(pcVar1,pcVar3,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return pcVar2;
}



/* Entry: 1038be2d8; end: 1038be44b;  */

undefined * FUN_1038be2d8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1038be3e0);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112fa97e8;
    func_0x0001000285a8(0x112fa97e8,&UNK_10dc1c558);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,&UNK_1106a4980);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x20 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}


