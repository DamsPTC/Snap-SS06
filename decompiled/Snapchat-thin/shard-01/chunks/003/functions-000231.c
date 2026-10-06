/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100efc508; end: 100efc54f; -[_TtC35SystemNotificationPermissionFeature20PreviewGradientLayer initWithCoder:] */

void FUN_100efc508(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SystemNotificationPermissionFeature/FriendsNotificationPreviewView.swift",
                      0x48,2,0x8c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100efc550);
  (*pcVar1)();
}



/* Entry: 100efc550; end: 100efc5a3; -[_TtC35SystemNotificationPermissionFeature20PreviewGradientLayer initWithLayer:] */

void FUN_100efc550(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined1 auStack_40 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c60234(auStack_40,param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c60eb0("SystemNotificationPermissionFeature.PreviewGradientLayer",0x38,"init(layer:)"
                      ,0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100efc5a4);
  (*pcVar1)();
}



/* Entry: 100efc5a4; end: 100efc5af;  */

void FUN_100efc5a4(void)

{
  (*(code *)0x100efc5e0)();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100efc5b0; end: 100efc667;  */

void FUN_100efc5b0(code *param_1)

{
  (*param_1)();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100efc668; end: 100efc6cb;  */

long FUN_100efc668(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100efc6cc; end: 100efc7d3;  */

undefined8 * FUN_100efc6cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar1 = param_2[4];
  uVar3 = param_2[5];
  param_1[4] = uVar1;
  param_1[5] = uVar3;
  uVar3 = param_2[6];
  param_1[6] = uVar3;
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x000107c61174(uVar1);
  func_0x000107c61434(uVar3);
  return param_1;
}



/* Entry: 100efc7d4; end: 100efc837;  */

undefined8 * FUN_100efc7d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  func_0x000107c6142c(param_1[3]);
  uVar2 = param_1[4];
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  func_0x000107c61170(uVar2);
  uVar2 = param_2[6];
  uVar1 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar2;
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 100efc838; end: 100efc8db;  */

int FUN_100efc838(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 100efc8dc; end: 100efca23;  */

void FUN_100efc8dc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  puVar1 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  puVar2 = &UNK_110367050;
  func_0x000107c613fc(&UNK_110367050,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,puVar1);
  puVar1 = &UNK_110367078;
  func_0x000107c613fc(&UNK_110367078,0x20,7);
  *(undefined **)(puVar1 + 0x10) = puVar2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  puVar3 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
  func_0x000107c610f8();
  pcStack_50 = FUN_100efcaac;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110367090;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c4670c(0x3ff0000000000000);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61574(puVar2);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined **)(unaff_x20 + 0x10) = puVar3;
  func_0x000107c61170(uVar5);
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    func_0x000107c5ba5c();
    if (*(long *)(unaff_x20 + 0x10) != 0) {
      func_0x000107c4e45c();
    }
  }
  return;
}



/* Entry: 100efca24; end: 100efcaab;  */

void FUN_100efca24(long param_1)

{
  undefined *puVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
    func_0x000107c61168(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8);
    func_0x000107c42448();
    func_0x000107c61180();
    func_0x000107c54418(param_1);
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 100efcaac; end: 100efcacf;  */

void FUN_100efcaac(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_38,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
    func_0x000107c61168(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8);
    func_0x000107c42448();
    func_0x000107c61180();
    func_0x000107c54418(lVar1);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 100efcad0; end: 100efcaeb;  */

void FUN_100efcad0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100efcaec();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 100efcaec; end: 100efcc0f;  */

undefined * FUN_100efcaec(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100efcc10);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    FUN_100effb28();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_100efaf78(0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 100efcc10; end: 100efcca3;  */

void FUN_100efcc10(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 100efcca4; end: 100efccb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100efcca4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d4a728;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d4a728);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    FUN_100efccb8();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar3 = 0;
  }
  func_0x000107c61174(lVar3);
  return lVar2;
}



/* Entry: 100efccb8; end: 100efce13;  */

undefined * FUN_100efccb8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000107c453e4();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c3fdd0(0x3feccccccccccccd);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c52b50(puVar1);
  func_0x000107c61170(puVar3);
  puVar2 = puVar1;
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  func_0x000107c539d4(0x4042000000000000);
  func_0x000107c61170(puVar2);
  puVar2 = puVar1;
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  func_0x000107c562fc();
  func_0x000107c61170(puVar2);
  puVar2 = puVar1;
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  if (lRam0000000112d4a778 != -1) {
    func_0x000107c61568(0x112d4a778,0x100efcc50);
  }
  func_0x000107c52df8(puVar2);
  func_0x000107c61170(puVar2);
  puVar2 = puVar1;
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  func_0x000107c52e0c(0x3ff0000000000000);
  func_0x000107c61170(puVar2);
  func_0x000107c5a050(puVar1);
  return puVar1;
}



/* Entry: 100efce14; end: 100efce27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100efce14(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d4a730;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d4a730);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    FUN_100efce28();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar3 = 0;
  }
  func_0x000107c61174(lVar3);
  return lVar2;
}



/* Entry: 100efce28; end: 100efceeb;  */

undefined * FUN_100efce28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  func_0x000107c610f8(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x000107c453e4();
  func_0x000107c56ba8();
  func_0x000107c59c74(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x000107c61168(PTR__OBJC_CLASS___UIFont_1126aec38);
  func_0x000107c5c600(0x4031000000000000,*(undefined8 *)PTR__UIFontWeightSemibold_110345c48);
  func_0x000107c61180();
  func_0x000107c54adc(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = puVar1;
  func_0x000107c5a050(puVar1);
  FUN_100effe3c();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c59c6c(puVar1);
  func_0x000107c61170(puVar2);
  return puVar1;
}



/* Entry: 100efceec; end: 100efceff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100efceec(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d4a738;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d4a738);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    (*(code *)0x100efcf5c)();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar3 = 0;
  }
  func_0x000107c61174(lVar3);
  return lVar2;
}



/* Entry: 100efcf00; end: 100efd01f;  */

long FUN_100efcf00(long *param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *param_1;
  lVar1 = *(long *)(unaff_x20 + lVar3);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    (*param_2)();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar3);
    *(long *)(unaff_x20 + lVar3) = lVar1;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar1;
}



/* Entry: 100efd020; end: 100efd033;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100efd020(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d4a740;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d4a740);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_100efd034();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 100efd034; end: 100efd21b;  */

undefined * FUN_100efd034(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x000107c61168();
  func_0x000107c3ee98();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000100efff2c();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c59e1c(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = puVar1;
  func_0x000107c5cac0();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c5251c();
    func_0x000107c61170(puVar2);
  }
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  puVar3 = puVar2;
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c59e34(puVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c61174();
  func_0x000107c5af88(puVar2);
  func_0x000107c61180();
  func_0x000107c52b50(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = puVar1;
  func_0x000107c5cac0();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x000107c61168(PTR__OBJC_CLASS___UIFont_1126aec38);
    func_0x000107c5c600(0x402c000000000000,*(undefined8 *)PTR__UIFontWeightSemibold_110345c48);
    func_0x000107c61180();
    func_0x000107c54adc(puVar2);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar3);
  }
  puVar2 = puVar1;
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  func_0x000107c539d4(0x4032000000000000);
  func_0x000107c61170(puVar2);
  puVar2 = puVar1;
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  func_0x000107c562fc();
  func_0x000107c61170(puVar2);
  func_0x000107c5a050(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c3d8b8(puVar1);
  return puVar1;
}



/* Entry: 100efd21c; end: 100efd22f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100efd21c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d4a748;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d4a748);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    (*(code *)0x100efd290)();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 100efd230; end: 100efd477;  */

long FUN_100efd230(long *param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *param_1;
  lVar1 = *(long *)(unaff_x20 + lVar3);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = unaff_x20;
    (*param_2)();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar3);
    *(long *)(unaff_x20 + lVar3) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar1 = 0;
  }
  func_0x000107c61174(lVar1);
  return lVar2;
}



/* Entry: 100efd478; end: 100efd54f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_100efd478(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffffb0;
  lVar1 = unaff_x20 + _DAT_112d4a720;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d4a728) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4a730) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4a738) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4a740) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4a748) = 0;
  FUN_100efde54();
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffffb0,
                      PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  FUN_100efd650();
  func_0x000107c61170(puVar2);
  return puVar2;
}



/* Entry: 100efd550; end: 100efd56f; -[_TtC35SystemNotificationPermissionFeature37SystemNotificationPermissionPreprompt initWithFrame:] */

void FUN_100efd550(void)

{
  FUN_100efd478();
  return;
}



/* Entry: 100efd570; end: 100efd5a3; -[_TtC35SystemNotificationPermissionFeature37SystemNotificationPermissionPreprompt initWithCoder:] */

undefined8 FUN_100efd570(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100efdeb4();
  func_0x000107c61174(param_3);
  return param_1;
}



/* Entry: 100efd5a4; end: 100efd5ab; -[_TtC35SystemNotificationPermissionFeature37SystemNotificationPermissionPreprompt didTapDenyButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100efd5a4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + _DAT_112d4a720;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = 0;
    FUN_100eff764(0);
    func_0x000107c61174(param_1);
    FUN_100eff9dc(0,uVar2,&PTR_DAT_1103670b8);
    func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 100efd5ac; end: 100efd5b3; -[_TtC35SystemNotificationPermissionFeature37SystemNotificationPermissionPreprompt didTapAllowButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100efd5ac(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + _DAT_112d4a720;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = 0;
    FUN_100eff764(0);
    func_0x000107c61174(param_1);
    FUN_100eff9dc(1,uVar2,&PTR_DAT_1103670b8);
    func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 100efd5b4; end: 100efd64f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100efd5b4(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + _DAT_112d4a720;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = 0;
    FUN_100eff764(0);
    func_0x000107c61174(param_1);
    FUN_100eff9dc(param_3 & 1,uVar2,&PTR_DAT_1103670b8);
    func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 100efd650; end: 100efddab;  */

/* WARNING: Possible PIC construction at 0x000100efd68c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100efd728: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100efd77c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100efd7d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100efd824: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100efd874: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100efd918: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100efd9a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100efda44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100efdb04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100efdb2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100efdb64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100efdb8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100efdbc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100efdbf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100efdc28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100efdc6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100efdcb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100efdcec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100efdd38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100efdd70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100efdd80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100efdd74) */
/* WARNING: Removing unreachable block (ram,0x000100efdd3c) */
/* WARNING: Removing unreachable block (ram,0x000100efdcf0) */
/* WARNING: Removing unreachable block (ram,0x000100efdcb4) */
/* WARNING: Removing unreachable block (ram,0x000100efdc70) */
/* WARNING: Removing unreachable block (ram,0x000100efdc2c) */
/* WARNING: Removing unreachable block (ram,0x000100efdbf4) */
/* WARNING: Removing unreachable block (ram,0x000100efdbcc) */
/* WARNING: Removing unreachable block (ram,0x000100efdb90) */
/* WARNING: Removing unreachable block (ram,0x000100efdb68) */
/* WARNING: Removing unreachable block (ram,0x000100efdb30) */
/* WARNING: Removing unreachable block (ram,0x000100efdb08) */
/* WARNING: Removing unreachable block (ram,0x000100efda48) */
/* WARNING: Removing unreachable block (ram,0x000100efd9ac) */
/* WARNING: Removing unreachable block (ram,0x000100efd91c) */
/* WARNING: Removing unreachable block (ram,0x000100efd878) */
/* WARNING: Removing unreachable block (ram,0x000100efd828) */
/* WARNING: Removing unreachable block (ram,0x000100efd7d4) */
/* WARNING: Removing unreachable block (ram,0x000100efd780) */
/* WARNING: Removing unreachable block (ram,0x000100efd72c) */
/* WARNING: Removing unreachable block (ram,0x000100efd690) */
/* WARNING: Removing unreachable block (ram,0x000100efdd84) */

void FUN_100efd650(undefined8 param_1)

{
  FUN_100efcca4();
  func_0x000107c3d89c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100efddac; end: 100efdddb;  */

void FUN_100efddac(void)

{
  FUN_100efde54();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100efdddc; end: 100efde53; -[_TtC35SystemNotificationPermissionFeature37SystemNotificationPermissionPreprompt .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100efde08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100efde28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100efde0c) */
/* WARNING: Removing unreachable block (ram,0x000100efde2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100efdddc(long param_1)

{
  FUN_100efdf60(param_1 + _DAT_112d4a720);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d4a728));
  return;
}



/* Entry: 100efde54; end: 100efde73;  */

void FUN_100efde54(void)

{
  func_0x000107c61168(&PTR_PTR_11279f6f0);
  return;
}



/* Entry: 100efde74; end: 100efdeb3;  */

void FUN_100efde74(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 100efdeb4; end: 100efdf5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100efdeb4(void)

{
  long lVar1;
  code *pcVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112d4a720;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d4a728) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4a730) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4a738) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4a740) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4a748) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SystemNotificationPermissionFeature/SystemNotificationPermissionPreprompt.swift"
                      ,0x4f,2,0x5c,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100efdf60);
  (*pcVar2)();
}



/* Entry: 100efdf60; end: 100efdf83;  */

undefined8 FUN_100efdf60(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 100efdf84; end: 100efdf97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100efdf84(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d4a7b8;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d4a7b8);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    FUN_100efdf98();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar3 = 0;
  }
  func_0x000107c61174(lVar3);
  return lVar2;
}



/* Entry: 100efdf98; end: 100efe04b;  */

undefined * FUN_100efdf98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aea58;
  func_0x000107c610f8(PTR_PTR_1126aea58);
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c59c74();
  func_0x000107c56ba8(puVar1);
  puVar2 = puVar1;
  func_0x000107c5a100(puVar1);
  func_0x000100efff5c();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c59c6c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c5a050(puVar1);
  func_0x000107c537fc(0x447a0000,puVar1);
  return puVar1;
}



/* Entry: 100efe04c; end: 100efe05f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100efe04c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d4a7c0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d4a7c0);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    FUN_100efe0bc();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar3 = 0;
  }
  func_0x000107c61174(lVar3);
  return lVar2;
}



/* Entry: 100efe060; end: 100efe0bb;  */

long FUN_100efe060(long *param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *param_1;
  lVar1 = *(long *)(unaff_x20 + lVar3);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    (*param_2)();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar3);
    *(long *)(unaff_x20 + lVar3) = lVar1;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar1;
}



/* Entry: 100efe0bc; end: 100efe48f;  */

undefined * FUN_100efe0bc(void)

{
  long lVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  long lVar4;
  long **pplVar5;
  long *plVar6;
  long *plVar7;
  long **pplVar8;
  undefined *puVar9;
  undefined8 ***pppuVar10;
  undefined8 uVar11;
  long lVar12;
  long ***ppplVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  uint uVar17;
  long extraout_x8;
  long *plVar18;
  long lVar19;
  long alStack_100 [2];
  long **pplStack_f0;
  undefined *puStack_e8;
  undefined8 ***pppuStack_e0;
  undefined *puStack_d8;
  
  pppuVar2 = (undefined8 ***)0x112d483a8;
  puVar9 = &UNK_10d910f00;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)((long)pppuVar2[-1][8] + 0xfU & 0xfffffffffffffff0);
  lVar1 = -extraout_x8;
  lVar19 = (long)&pplStack_f0 + lVar1;
  func_0x000100f0002c();
  lVar3 = 0x112d36008;
  func_0x0001000285a8(0x112d36008,&UNK_10d900720);
  uVar15 = 0x48;
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  lVar12 = lVar3;
  func_0x000100f000f8();
  *(undefined **)(lVar3 + 0x38) = PTR___sSSN_11034da80;
  lVar4 = lVar12;
  func_0x00010075bbf0();
  *(long *)(lVar3 + 0x40) = lVar4;
  *(long *)(lVar3 + 0x20) = lVar12;
  *(undefined8 *)(lVar3 + 0x28) = uVar15;
  puVar16 = puVar9;
  func_0x000107c5fb00(pppuVar2,puVar9,lVar3);
  func_0x000107c6142c(puVar9);
  pplVar5 = (long **)0x112d48380;
  func_0x0001000285a8(0x112d48380,&UNK_10d910f10);
  func_0x000107c61534();
  pplVar5[3] = (long *)0x4;
  pplVar5[2] = (long *)0x2;
  plVar6 = *(long **)PTR__NSFontAttributeName_1103457f0;
  pplVar5[4] = plVar6;
  func_0x000107c61174();
  func_0x00010052bbec();
  func_0x000107c61180();
  plVar7 = plVar6;
  func_0x000107c43780();
  func_0x000107c61180();
  func_0x000107c615e8(plVar6);
  plVar6 = (long *)0x0;
  func_0x0001006736c0(0,0x112d48388,&PTR__OBJC_CLASS___UIFont_1126aec38);
  pplVar5[5] = plVar7;
  plVar18 = *(long **)PTR__NSForegroundColorAttributeName_1103457f8;
  pplVar5[8] = plVar6;
  pplVar5[9] = plVar18;
  func_0x000107c61174();
  func_0x00010052bbec();
  func_0x000107c61180();
  plVar7 = plVar18;
  func_0x000107c3fdc0();
  func_0x000107c61180();
  func_0x000107c615e8(plVar18);
  plVar6 = (long *)0x0;
  func_0x0001006736c0(0,0x112d48390,&PTR__OBJC_CLASS___UIColor_1126aea70);
  pplVar5[0xd] = plVar6;
  pplVar5[10] = plVar7;
  pplVar8 = pplVar5;
  func_0x000100ecbca8();
  func_0x000107c61588(pplVar5);
  uVar15 = 0x112d48398;
  func_0x0001000285a8(0x112d48398,&UNK_10d90f130);
  func_0x000107c61408(pplVar5 + 4,2,uVar15);
  puVar9 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
  pppuVar10 = pppuVar2;
  func_0x000107c5fadc(pppuVar2,puVar16);
  uVar11 = 0;
  FUN_100eca28c();
  uVar15 = uVar11;
  FUN_100ecbdec();
  pplVar5 = pplVar8;
  func_0x000107c5f9dc(pplVar8,uVar11,PTR___sypN_11034f1a8 + 8,uVar15);
  func_0x000107c6142c(pplVar8);
  func_0x000107c48af8(puVar9);
  func_0x000107c61170(pppuVar10);
  func_0x000107c61170();
  pppuStack_e0 = pppuVar2;
  puStack_d8 = puVar16;
  func_0x000100f000f8();
  lVar12 = 0;
  pplStack_f0 = pplVar5;
  puStack_e8 = (undefined *)uVar11;
  func_0x000107c5ef14();
  lVar3 = lVar19;
  (**(code **)(*(long *)(lVar12 + -8) + 0x38))(lVar19,1,1,lVar12);
  FUN_100e8b654();
  *(long *)((long)alStack_100 + lVar1) = lVar3;
  *(long *)((long)alStack_100 + lVar1 + 8) = lVar3;
  ppplVar13 = &pplStack_f0;
  uVar15 = 0;
  uVar17 = 0;
  func_0x000107c60218();
  FUN_100eca640(lVar19);
  func_0x000107c6142c(uVar11);
  if ((uVar17 & 0xff) == 1) {
    func_0x000107c6142c(puVar16);
  }
  else {
    func_0x00010052bbec();
    func_0x000107c61180();
    uVar14 = uVar11;
    func_0x000107c43780();
    func_0x000107c61180();
    func_0x000107c615e8(uVar11);
    uVar11 = 0x112d483b0;
    pplStack_f0 = (long **)pppuVar2;
    puStack_e8 = puVar16;
    pppuStack_e0 = ppplVar13;
    puStack_d8 = (undefined *)uVar15;
    func_0x0001000285a8(0x112d483b0,&UNK_10d90f140);
    uVar15 = uVar11;
    FUN_100eca688();
    func_0x000107c60148(&pppuStack_e0,&pplStack_f0,uVar11,PTR___sSSN_11034da80,uVar15,lVar3);
    func_0x000107c3d5c4(puVar9);
    func_0x000107c61170(uVar14);
  }
  return puVar9;
}



/* Entry: 100efe490; end: 100efe5a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100efe490(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d4a7c8;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112d4a7c8);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c59c74();
    puVar2 = puVar3;
    func_0x000107c56ba8(puVar3,param_2,0);
    FUN_100efe04c();
    func_0x000107c529c4(puVar3,param_2,puVar2);
    func_0x000107c61170(puVar2);
    func_0x000107c5a050(puVar3,param_2,0);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 100efe5a4; end: 100efe92f;  */

byte * FUN_100efe5a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    long param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  byte *pbVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  byte *pbVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  
  uVar17 = 0x800000010ef191a0;
  uVar3 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef191a0);
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168();
  func_0x000107c450cc();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  puVar5 = PTR_PTR_1126a5f00;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar6 = puVar5;
  func_0x000100efff48();
  lVar7 = param_5;
  uVar3 = uVar17;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar7 != 0) {
    func_0x000107c438d4();
    func_0x000107c61170(lVar7);
    func_0x000107c61174();
    puVar8 = puVar4;
    func_0x000100f001c4();
    puVar9 = puVar8;
    uVar18 = uVar3;
    func_0x000100f00290();
    uVar19 = uVar18;
    func_0x000107c61174();
    puVar10 = puVar5;
    func_0x000100efff2c();
    puVar12 = &UNK_1103670d8;
    puVar11 = puVar12;
    func_0x000107c613fc(&UNK_1103670d8,0x18,7);
    func_0x000107c61614(puVar11 + 0x10,param_5);
    func_0x000107c613fc(&UNK_1103670d8,0x18,7);
    func_0x000107c61614(puVar12 + 0x10,param_5);
    pbVar13 = PTR_PTR_1126daf40;
    func_0x000107c610f8();
    func_0x000107c5fadc(puVar8,uVar3);
    func_0x000107c6142c(uVar3);
    func_0x000107c5fadc(puVar9,uVar18);
    func_0x000107c6142c(uVar18);
    func_0x000107c5fadc(puVar6,uVar17);
    func_0x000107c6142c(uVar17);
    func_0x000107c5fadc(puVar10,uVar19);
    func_0x000107c6142c(uVar19);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0x100effb84;
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0x42000000;
    pcStack_b8 = FUN_100effadc;
    puStack_b0 = &UNK_1103670f0;
    ppuVar14 = &puStack_c8;
    puStack_a0 = puVar11;
    func_0x000107c60bc4();
    uStack_d8 = 0x100effba0;
    puStack_f8 = puVar1;
    uStack_f0 = 0x42000000;
    pcStack_e8 = FUN_100effadc;
    puStack_e0 = &UNK_110367118;
    ppuVar15 = &puStack_f8;
    puStack_d0 = puVar12;
    func_0x000107c60bc4();
    func_0x000107c61574(puStack_d0);
    func_0x000107c469bc(param_1,param_2,param_3,param_4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar5);
    func_0x000107c60bd0(ppuVar15);
    func_0x000107c60bd0(ppuVar14);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar10);
    func_0x000107c61574(puStack_a0);
    func_0x000107c53fcc(pbVar13);
    func_0x000107c61174();
    uVar3 = 0xd000000000000021;
    func_0x000107c5fadc(0xd000000000000021,0x800000010ef191c0);
    func_0x000107c520f4(pbVar13);
    func_0x000107c61170(uVar3);
    func_0x000107c5a050(pbVar13);
    pbVar16 = pbVar13;
    func_0x000107c61170();
    func_0x0001000ad07c();
    if ((*pbVar16 & 1) == 0) {
      func_0x000107c544e4(pbVar13);
    }
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar4);
    return pbVar13;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100efe930);
  (*pcVar2)();
}



/* Entry: 100efe930; end: 100efeb9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100efe930(undefined8 param_1,long param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 uStack_49;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + _DAT_112d4a7b0);
    func_0x000107c6157c(uVar1);
    func_0x000107c61170(param_2);
    uStack_49 = param_3;
    func_0x0001002a64a8(&uStack_49);
    func_0x000107c61574(uVar1);
  }
  return;
}



/* Entry: 100efeb9c; end: 100efebc3; -[_TtC35SystemNotificationPermissionFeature42SystemNotificationPermissionViewController initWithCoder:] */

void FUN_100efeb9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_100effbd8();
  return;
}



/* Entry: 100efebc4; end: 100eff4ab;  */

/* WARNING: Possible PIC construction at 0x000100efec3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100efec78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100efed28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100efed44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100efed6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100efedbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100efeddc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100efee3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100efee5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100efeeac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100efeee0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100efef18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100efef48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100efef8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eff008: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eff02c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eff07c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eff0a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eff0f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eff114: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eff16c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eff188: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eff1ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eff200: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eff254: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eff2f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eff318: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eff368: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eff38c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eff3dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eff3f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eff41c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eff7e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eff820: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eff8c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eff8e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eff948: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eff968: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100eff94c) */
/* WARNING: Removing unreachable block (ram,0x000100eff8ec) */
/* WARNING: Removing unreachable block (ram,0x000100eff9d8) */
/* WARNING: Removing unreachable block (ram,0x000100eff920) */
/* WARNING: Removing unreachable block (ram,0x000100eff8cc) */
/* WARNING: Removing unreachable block (ram,0x000100eff824) */
/* WARNING: Removing unreachable block (ram,0x000100eff9d4) */
/* WARNING: Removing unreachable block (ram,0x000100eff8b0) */
/* WARNING: Removing unreachable block (ram,0x000100eff7e8) */
/* WARNING: Removing unreachable block (ram,0x000100eff9d0) */
/* WARNING: Removing unreachable block (ram,0x000100eff804) */
/* WARNING: Removing unreachable block (ram,0x000100eff420) */
/* WARNING: Removing unreachable block (ram,0x000100eff3fc) */
/* WARNING: Removing unreachable block (ram,0x000100eff3e0) */
/* WARNING: Removing unreachable block (ram,0x000100eff390) */
/* WARNING: Removing unreachable block (ram,0x000100eff4a0) */
/* WARNING: Removing unreachable block (ram,0x000100eff3c4) */
/* WARNING: Removing unreachable block (ram,0x000100eff36c) */
/* WARNING: Removing unreachable block (ram,0x000100eff31c) */
/* WARNING: Removing unreachable block (ram,0x000100eff498) */
/* WARNING: Removing unreachable block (ram,0x000100eff350) */
/* WARNING: Removing unreachable block (ram,0x000100eff2f8) */
/* WARNING: Removing unreachable block (ram,0x000100eff258) */
/* WARNING: Removing unreachable block (ram,0x000100eff42c) */
/* WARNING: Removing unreachable block (ram,0x000100eff204) */
/* WARNING: Removing unreachable block (ram,0x000100eff1b0) */
/* WARNING: Removing unreachable block (ram,0x000100eff18c) */
/* WARNING: Removing unreachable block (ram,0x000100eff170) */
/* WARNING: Removing unreachable block (ram,0x000100eff118) */
/* WARNING: Removing unreachable block (ram,0x000100eff4a8) */
/* WARNING: Removing unreachable block (ram,0x000100eff154) */
/* WARNING: Removing unreachable block (ram,0x000100eff0f4) */
/* WARNING: Removing unreachable block (ram,0x000100eff0a4) */
/* WARNING: Removing unreachable block (ram,0x000100eff4a4) */
/* WARNING: Removing unreachable block (ram,0x000100eff0d8) */
/* WARNING: Removing unreachable block (ram,0x000100eff080) */
/* WARNING: Removing unreachable block (ram,0x000100eff030) */
/* WARNING: Removing unreachable block (ram,0x000100eff49c) */
/* WARNING: Removing unreachable block (ram,0x000100eff064) */
/* WARNING: Removing unreachable block (ram,0x000100eff00c) */
/* WARNING: Removing unreachable block (ram,0x000100efef90) */
/* WARNING: Removing unreachable block (ram,0x000100eff494) */
/* WARNING: Removing unreachable block (ram,0x000100efeff0) */
/* WARNING: Removing unreachable block (ram,0x000100efef4c) */
/* WARNING: Removing unreachable block (ram,0x000100eff288) */
/* WARNING: Removing unreachable block (ram,0x000100eff490) */
/* WARNING: Removing unreachable block (ram,0x000100eff2dc) */
/* WARNING: Removing unreachable block (ram,0x000100efef5c) */
/* WARNING: Removing unreachable block (ram,0x000100eff48c) */
/* WARNING: Removing unreachable block (ram,0x000100efef70) */
/* WARNING: Removing unreachable block (ram,0x000100efef1c) */
/* WARNING: Removing unreachable block (ram,0x000100efeee4) */
/* WARNING: Removing unreachable block (ram,0x000100efeeb0) */
/* WARNING: Removing unreachable block (ram,0x000100eff488) */
/* WARNING: Removing unreachable block (ram,0x000100efeec4) */
/* WARNING: Removing unreachable block (ram,0x000100efee60) */
/* WARNING: Removing unreachable block (ram,0x000100efee40) */
/* WARNING: Removing unreachable block (ram,0x000100efede0) */
/* WARNING: Removing unreachable block (ram,0x000100eff484) */
/* WARNING: Removing unreachable block (ram,0x000100efee14) */
/* WARNING: Removing unreachable block (ram,0x000100efedc0) */
/* WARNING: Removing unreachable block (ram,0x000100efed70) */
/* WARNING: Removing unreachable block (ram,0x000100eff480) */
/* WARNING: Removing unreachable block (ram,0x000100efeda4) */
/* WARNING: Removing unreachable block (ram,0x000100efed48) */
/* WARNING: Removing unreachable block (ram,0x000100efed2c) */
/* WARNING: Removing unreachable block (ram,0x000100efec7c) */
/* WARNING: Removing unreachable block (ram,0x000100eff47c) */
/* WARNING: Removing unreachable block (ram,0x000100efed10) */
/* WARNING: Removing unreachable block (ram,0x000100efec40) */
/* WARNING: Removing unreachable block (ram,0x000100eff478) */
/* WARNING: Removing unreachable block (ram,0x000100efec5c) */
/* WARNING: Removing unreachable block (ram,0x000100eff96c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100efebc4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + _DAT_112d4a790) == 0) {
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100eff9d0);
      (*pcVar1)();
    }
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    func_0x000107c52b50(unaff_x20,param_2,puVar2);
  }
  else {
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100eff478);
      (*pcVar1)();
    }
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    func_0x000107c52b50(unaff_x20,param_2,puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
  return;
}



/* Entry: 100eff4ac; end: 100eff507; -[_TtC35SystemNotificationPermissionFeature42SystemNotificationPermissionViewController viewDidLoad] */

void FUN_100eff4ac(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_1;
  FUN_100eff764();
  puVar1 = PTR_s_viewDidLoad_112684cd8;
  uStack_30 = param_1;
  uStack_28 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_30,puVar1);
  FUN_100efebc4();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100eff508; end: 100eff5b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eff508(uint param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 uStack_41;
  
  FUN_100eff764();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_viewDidAppear__112684bd0,param_1 & 1);
  uStack_41 = 0x80;
  func_0x0001002a64a8(&uStack_41);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112d4a7a0);
  func_0x000107c4e2ec();
  func_0x000107c5bb50(uVar1);
  if (*(long *)(unaff_x20 + _DAT_112d4a790) == 3) {
    uStack_41 = 1;
    func_0x0001002a64a8(&uStack_41);
  }
  return;
}



/* Entry: 100eff5b4; end: 100eff5e3; -[_TtC35SystemNotificationPermissionFeature42SystemNotificationPermissionViewController viewDidAppear:] */

void FUN_100eff5b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_100eff508(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100eff5e4; end: 100eff62f; -[_TtC35SystemNotificationPermissionFeature42SystemNotificationPermissionViewController didTapContinue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eff5e4(undefined8 param_1)

{
  undefined1 uStack_21;
  
  uStack_21 = 1;
  func_0x000107c61174();
  func_0x0001002a64a8(&uStack_21);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100eff630; end: 100eff68b; -[_TtC35SystemNotificationPermissionFeature42SystemNotificationPermissionViewController initWithNibName:bundle:] */

void FUN_100eff630(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SystemNotificationPermissionFeature.SystemNotificationPermissionViewController"
                      ,0x4e,"init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100eff65c);
  (*pcVar1)();
}



/* Entry: 100eff68c; end: 100eff763; -[_TtC35SystemNotificationPermissionFeature42SystemNotificationPermissionViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100eff6e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eff708: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eff728: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eff748: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100eff72c) */
/* WARNING: Removing unreachable block (ram,0x000100eff70c) */
/* WARNING: Removing unreachable block (ram,0x000100eff6ec) */
/* WARNING: Removing unreachable block (ram,0x000100eff74c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eff68c(long param_1)

{
  func_0x0001000834e4(param_1 + _DAT_112d4a798);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d4a7a0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d4a7a8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d4a7b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d4a7b8));
  return;
}



/* Entry: 100eff764; end: 100eff783;  */

void FUN_100eff764(void)

{
  func_0x000107c61168(&PTR_PTR_11279f878);
  return;
}



/* Entry: 100eff784; end: 100eff9db;  */

/* WARNING: Possible PIC construction at 0x000100eff7e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eff820: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eff8c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eff8e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eff948: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eff968: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100eff94c) */
/* WARNING: Removing unreachable block (ram,0x000100eff8ec) */
/* WARNING: Removing unreachable block (ram,0x000100eff9d8) */
/* WARNING: Removing unreachable block (ram,0x000100eff920) */
/* WARNING: Removing unreachable block (ram,0x000100eff8cc) */
/* WARNING: Removing unreachable block (ram,0x000100eff824) */
/* WARNING: Removing unreachable block (ram,0x000100eff9d4) */
/* WARNING: Removing unreachable block (ram,0x000100eff8b0) */
/* WARNING: Removing unreachable block (ram,0x000100eff7e8) */
/* WARNING: Removing unreachable block (ram,0x000100eff9d0) */
/* WARNING: Removing unreachable block (ram,0x000100eff804) */
/* WARNING: Removing unreachable block (ram,0x000100eff96c) */

void FUN_100eff784(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  long unaff_x20;
  
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    func_0x000107c52b50(unaff_x20,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100eff9d0);
  (*pcVar1)();
}



/* Entry: 100eff9dc; end: 100effa13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eff9dc(undefined1 param_1)

{
  undefined1 uStack_21;
  
  uStack_21 = param_1;
  func_0x0001002a64a8(&uStack_21);
  return;
}



/* Entry: 100effa14; end: 100effa1b; -[_TtC35SystemNotificationPermissionFeature42SystemNotificationPermissionViewController pageViewName] */

undefined8 FUN_100effa14(void)

{
  return 0xcd;
}



/* Entry: 100effa1c; end: 100effa97; -[_TtC35SystemNotificationPermissionFeature42SystemNotificationPermissionViewController didSelectLinkWithURL:dialogView:] */

void FUN_100effa1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar2 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40));
  func_0x000107c5edb4(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_3)
  ;
  (**(code **)(lVar2 + 8))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  return;
}



/* Entry: 100effa98; end: 100effadb; -[_TtC35SystemNotificationPermissionFeature42SystemNotificationPermissionViewController dontAllowButtonColor:] */

void FUN_100effa98(void)

{
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100effadc; end: 100effb27;  */

void FUN_100effadc(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100effb28; end: 100effbbb;  */

void FUN_100effb28(void)

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
    FUN_100efaf78();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112d4a828;
  plVar5 = (long *)&UNK_10d910f38;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 100effbbc; end: 100effbd7;  */

void FUN_100effbbc(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100effbd8; end: 100effd03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100effbd8(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + _DAT_112d4a788) = 0;
  lVar1 = _DAT_112d4a7a8;
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  lVar1 = _DAT_112d4a7b0;
  uVar3 = 0x112d4a580;
  func_0x0001000285a8(0x112d4a580,&UNK_10d910f20);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112d4a7b8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4a7c0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4a7c8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4a7d0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4a7d8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4a7e0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4a7e8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4a7f0) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SystemNotificationPermissionFeature/SystemNotificationPermissionViewController.swift"
                      ,0x54,2,0x91,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100effd04);
  (*pcVar2)();
}



/* Entry: 100effd04; end: 100effd53;  */

void FUN_100effd04(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100effd54; end: 100effe1f;  */

undefined1  [16] FUN_100effd54(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffef;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef19360);
  uVar3 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef192a0);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100effe20);
  (*pcVar1)();
}



/* Entry: 100effe20; end: 100effe3b;  */

undefined1  [16] FUN_100effe20(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x6e65735f70616e73;
  func_0x000107c5fadc(0x6e65735f70616e73,0xe900000000000074);
  uVar3 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef192a0);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f0002c);
  (*pcVar1)();
}



/* Entry: 100effe3c; end: 100efff07;  */

undefined1  [16] FUN_100effe3c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2ffffffffffffff0;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef19340);
  uVar3 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef192a0);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100efff08);
  (*pcVar1)();
}



/* Entry: 100efff08; end: 100efff7b;  */

undefined1  [16] FUN_100efff08(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x697373696d726570;
  func_0x000107c5fadc(0x697373696d726570,0xef79646f625f6e6f);
  uVar3 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef192a0);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f0002c);
  (*pcVar1)();
}



/* Entry: 100efff7c; end: 100f0035b;  */

undefined1  [16] FUN_100efff7c(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  func_0x000107c5fadc();
  uVar2 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef192a0);
  uVar3 = 0;
  func_0x000107c5fe40(0);
  lVar4 = param_1;
  uVar6 = uVar2;
  func_0x0001000f6108(param_1,uVar2,uVar3);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c5faec(lVar4);
    func_0x000107c61170(lVar4);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar5;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f0002c);
  (*pcVar1)();
}



/* Entry: 100f0035c; end: 100f0038b;  */

void FUN_100f0035c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100f0038c; end: 100f00397; -[SCSystemNotificationPermissionEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f0038c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4a8c8;
  func_0x000107c61428(param_1 + _DAT_112d4a8c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f00398; end: 100f003a3; -[SCSystemNotificationPermissionEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f00398(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4a8c8;
  func_0x000107c61428(param_1 + _DAT_112d4a8c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f003a4; end: 100f003af; -[SCSystemNotificationPermissionEntryPoint notificationPermissionServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f003a4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4a8d0;
  func_0x000107c61428(param_1 + _DAT_112d4a8d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f003b0; end: 100f003bb; -[SCSystemNotificationPermissionEntryPoint setNotificationPermissionServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f003b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4a8d0;
  func_0x000107c61428(param_1 + _DAT_112d4a8d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f003bc; end: 100f003c7; -[SCSystemNotificationPermissionEntryPoint circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f003bc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4a8d8;
  func_0x000107c61428(param_1 + _DAT_112d4a8d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f003c8; end: 100f003d3; -[SCSystemNotificationPermissionEntryPoint setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f003c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4a8d8;
  func_0x000107c61428(param_1 + _DAT_112d4a8d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f003d4; end: 100f003df; -[SCSystemNotificationPermissionEntryPoint attributionServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f003d4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4a8e0;
  func_0x000107c61428(param_1 + _DAT_112d4a8e0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f003e0; end: 100f00423;  */

void FUN_100f003e0(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f00424; end: 100f0042f; -[SCSystemNotificationPermissionEntryPoint setAttributionServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f00424(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4a8e0;
  func_0x000107c61428(param_1 + _DAT_112d4a8e0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f00430; end: 100f00483;  */

void FUN_100f00430(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f00484; end: 100f0061f;  */

/* WARNING: Possible PIC construction at 0x000100f00580: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f00590: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f005f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f005e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f005fc) */
/* WARNING: Removing unreachable block (ram,0x000100f00594) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x000100f00584) */
/* WARNING: Removing unreachable block (ram,0x000100f005ec) */

void FUN_100f00484(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c4d808();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c3fa0c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c3e3a4();
      func_0x000107c61180();
      if (unaff_x20 != 0) {
        lVar4 = 0;
        FUN_100ef9f7c();
        func_0x000107c613fc();
        func_0x0001000c6560(0);
        func_0x000107c613fc();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        lVar5 = unaff_x20;
        func_0x0001000c6580();
        *(long *)(lVar4 + 0x30) = lVar5;
        *(undefined8 *)(lVar4 + 0x38) = 0;
        *(long *)(lVar4 + 0x10) = lVar1;
        *(long *)(lVar4 + 0x18) = lVar2;
        *(long *)(lVar4 + 0x20) = lVar3;
        *(long *)(lVar4 + 0x28) = unaff_x20;
        FUN_100ef97f0();
        lVar1 = unaff_x20;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100f00620; end: 100f00647; -[SCSystemNotificationPermissionEntryPoint begin] */

void FUN_100f00620(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100f00484();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100f00648; end: 100f0068b; -[SCSystemNotificationPermissionEntryPoint end] */

void FUN_100f00648(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f0068c; end: 100f008f7;  */

void FUN_100f0068c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0;
    if (((param_2 == -0x2fffffffffffffe2) && (param_3 == -0x7ffffffef10e6c80)) ||
       (func_0x000107c605b8(0xd00000000000001e,0x800000010ef19380,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c56b1c();
    }
    else {
      uVar2 = 0;
      if (((param_2 == -0x2fffffffffffffe6) && (param_3 == -0x7ffffffef10ed550)) ||
         (func_0x000107c605b8(0xd00000000000001a,0x800000010ef12ab0,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c53414();
      }
      else {
        if ((param_2 != -0x2fffffffffffffed) || (param_3 != -0x7ffffffef10e79a0)) {
          uVar2 = 0xd000000000000013;
          func_0x000107c605b8(0xd000000000000013,0x800000010ef18660,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "SystemNotificationPermissionFeature/SCSystemNotificationPermissionEntryPoint.swift"
                                ,0x52,2,0x33,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100f008f8);
            (*pcVar1)();
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c529e0();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100f008f8; end: 100f009a3; -[SCSystemNotificationPermissionEntryPoint setValue:forIvarName:] */

void FUN_100f008f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_100f0068c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100f009a4; end: 100f00a3f; -[SCSystemNotificationPermissionEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f009a4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d4a8c8,0);
  func_0x000107c61614(param_1 + _DAT_112d4a8d0,0);
  func_0x000107c61614(param_1 + _DAT_112d4a8d8,0);
  func_0x000107c61614(param_1 + _DAT_112d4a8e0,0);
  *(undefined8 *)(param_1 + _DAT_112d4a8e8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100f00a40; end: 100f00a73;  */

void FUN_100f00a40(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100f00a74; end: 100f00adb; -[SCSystemNotificationPermissionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f00a74(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d4a8c8);
  func_0x000107c61610(param_1 + _DAT_112d4a8d0);
  func_0x000107c61610(param_1 + _DAT_112d4a8d8);
  func_0x000107c61610(param_1 + _DAT_112d4a8e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d4a8e8));
  return;
}



/* Entry: 100f00adc; end: 100f00afb;  */

void FUN_100f00adc(void)

{
  func_0x000107c61168(&PTR_PTR_11279fa88);
  return;
}



/* Entry: 100f00afc; end: 100f00b0f;  */

bool FUN_100f00afc(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 100f00b10; end: 100f00bbb;  */

void FUN_100f00b10(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 100f00bbc; end: 100f00be3;  */

void FUN_100f00bbc(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 100f00be4; end: 100f00c9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100f00be4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined1 auStack_58 [24];
  
  func_0x000107c610f8();
  lVar1 = _DAT_112d4a918;
  func_0x000107c61614(unaff_x20 + _DAT_112d4a918,0);
  func_0x000107c61428(unaff_x20 + lVar1,auStack_58,1,0);
  func_0x000107c61604(unaff_x20 + lVar1,param_1);
  *(undefined8 *)(unaff_x20 + _DAT_112d4a920) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d4a928) = param_3;
  puVar2 = auStack_68;
  func_0x000107c61154(puVar2,PTR_s_init_1125d9248);
  func_0x000107c615e8(param_1);
  return puVar2;
}



/* Entry: 100f00c9c; end: 100f00d4f; -[SystemNotificationPermissionScope initWithDelegate:uiContainer:flow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f00c9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = param_1;
  func_0x000107c614f0();
  lVar2 = _DAT_112d4a918;
  func_0x000107c61614(param_1 + _DAT_112d4a918,0);
  func_0x000107c61428(param_1 + lVar2,auStack_58,1,0);
  func_0x000107c61604(param_1 + lVar2,param_3);
  *(undefined8 *)(param_1 + _DAT_112d4a920) = param_4;
  *(undefined8 *)(param_1 + _DAT_112d4a928) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = param_1;
  lStack_60 = lVar3;
  func_0x000107c615f0(param_4);
  func_0x000107c61154(&lStack_68,puVar1);
  return;
}



/* Entry: 100f00d50; end: 100f00d83;  */

void FUN_100f00d50(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100f00d84; end: 100f00dbb; -[SystemNotificationPermissionScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f00d84(long param_1)

{
  FUN_100ef9334(param_1 + _DAT_112d4a918);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112d4a920));
  return;
}



/* Entry: 100f00dbc; end: 100f00dbf;  */

void FUN_100f00dbc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4a930 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d910fc0;
  func_0x000107c61520(&UNK_10d910fc0,&UNK_1103671d8);
  puRam0000000112d4a930 = puVar1;
  return;
}



/* Entry: 100f00dc0; end: 100f00dff;  */

void FUN_100f00dc0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4a930 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d910fc0;
  func_0x000107c61520(&UNK_10d910fc0,&UNK_1103671d8);
  puRam0000000112d4a930 = puVar1;
  return;
}



/* Entry: 100f00e00; end: 100f00e0f;  */

undefined1  [16] FUN_100f00e00(void)

{
  return ZEXT816(0x1103671d8);
}



/* Entry: 100f00e10; end: 100f00e2f;  */

void FUN_100f00e10(void)

{
  func_0x000107c61168(&PTR_PTR_11279fb60);
  return;
}


