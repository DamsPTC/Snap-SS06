/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1020e71e4; end: 1020e71fb;  */

void FUN_1020e71e4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long unaff_x20;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_60 = uVar2;
  uStack_58 = uVar4;
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar2);
  uVar6 = 0x112e58300;
  func_0x0001000285a8(0x112e58300,&UNK_10da5be60);
  func_0x000107c5f72c(&lStack_68);
  puVar5 = PTR___sytN_11034f1b0;
  if (lStack_68 != 0) {
    func_0x000107c5fd50(lStack_68,PTR___sytN_11034f1b0 + 8,PTR___ss5NeverON_11034ee88,
                        PTR___ss5NeverOs5ErrorsWP_11034ee90);
    func_0x000107c61574(lStack_68);
  }
  puVar7 = &UNK_1104ca178;
  func_0x000107c613fc(&UNK_1104ca178,0x30,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar1;
  *(undefined8 *)(puVar7 + 0x18) = uVar3;
  *(undefined8 *)(puVar7 + 0x20) = uVar2;
  *(undefined8 *)(puVar7 + 0x28) = uVar4;
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar3);
  lVar8 = 0x62;
  func_0x0001001ca524(0x62,0,0x3c,4,0,0,&UNK_10da5be70,puVar7,puVar5 + 8);
  func_0x000107c61574(puVar7);
  lStack_68 = lVar8;
  uStack_60 = uVar2;
  uStack_58 = uVar4;
  func_0x000107c5f730(&lStack_68,uVar6);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(uVar2);
  return;
}



/* Entry: 1020e71fc; end: 1020e722f;  */

void FUN_1020e71fc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1020e7230; end: 1020e72a7;  */

void FUN_1020e7230(void)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar8 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_1020e72a8;
  lVar6 = 0;
  func_0x000107c5fcec(0,piVar2,uVar4,uVar3,uVar5);
  plVar8[2] = lVar6;
  func_0x000107c5fce8();
  plVar8[3] = lVar6;
  iVar1 = *piVar2;
  plVar7 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8();
  plVar8[4] = (long)plVar7;
  *plVar7 = (long)plVar8;
  plVar7[1] = (long)FUN_1020e6f64;
                    /* WARNING: Could not recover jumptable at 0x0001020e6f60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))();
  return;
}



/* Entry: 1020e72a8; end: 1020e72e3;  */

void FUN_1020e72a8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001020e72e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1020e72e4; end: 1020e72f3;  */

undefined1  [16] FUN_1020e72e4(void)

{
  return ZEXT816(0x1104ca1a0);
}



/* Entry: 1020e72f4; end: 1020e73fb;  */

void FUN_1020e72f4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam0000000112e58308 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e582f8;
  func_0x00010002969c(0x112e582f8,&UNK_10da5be58);
  uVar2 = uVar1;
  func_0x0001020e736c();
  puStack_28 = PTR___s7SwiftUI25_AppearanceActionModifierVAA04ViewE0AAWP_110349158;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112e58308 = puVar3;
  return;
}



/* Entry: 1020e73fc; end: 1020e740b;  */

void FUN_1020e73fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_11034f3b8)(param_1,&UNK_10e6af424,1);
  return;
}



/* Entry: 1020e740c; end: 1020e74df;  */

void FUN_1020e740c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___s7SwiftUI21_ViewModifier_ContentVyxGAA0C0AAMc_110349008;
    func_0x000107c61520(PTR___s7SwiftUI21_ViewModifier_ContentVyxGAA0C0AAMc_110349008,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 1020e74e0; end: 1020e74f7;  */

void FUN_1020e74e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb5ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI12ViewModifierPAAE14_viewListCount6inputs4bodySiSgAA01_cfG6InputsV_AgIXEtFZ_110348810
  )();
  return;
}



/* Entry: 1020e74f8; end: 1020e7c0b;  */

undefined1  [16] FUN_1020e74f8(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe7;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f062430);
  uVar3 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f062370);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020e75c4);
  (*pcVar1)();
}



/* Entry: 1020e7c0c; end: 1020e7c3b;  */

void FUN_1020e7c0c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1020e7c3c; end: 1020e7c87;  */

void FUN_1020e7c3c(undefined8 param_1)

{
  func_0x0001000285a8(0x112e583e8,&UNK_10da5bf30);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1020e7cf4,param_1);
  return;
}



/* Entry: 1020e7c88; end: 1020e7cf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020e7c88(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1020e7e50();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e583f0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1020e7cf4; end: 1020e7cfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020e7cf4(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1020e7e50();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e583f0) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 1020e7cfc; end: 1020e7d47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020e7cfc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e583f0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1020e7d48; end: 1020e7dcf; -[_TtC32FriendsFeedNearMeFactoryServices32FriendsFeedNearMeFactoryServices build:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020e7d48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x00010008a7c8(&uStack_38,&uStack_40);
  func_0x000100083b20(&uStack_40);
  func_0x000107c61574(uStack_38);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_40);
  return;
}



/* Entry: 1020e7dd0; end: 1020e7e2f; -[_TtC32FriendsFeedNearMeFactoryServices32FriendsFeedNearMeFactoryServices init] */

void FUN_1020e7dd0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FriendsFeedNearMeFactoryServices.FriendsFeedNearMeFactoryServices",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020e7dfc);
  (*pcVar1)();
}



/* Entry: 1020e7e30; end: 1020e7e4f; -[_TtC32FriendsFeedNearMeFactoryServices32FriendsFeedNearMeFactoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020e7e30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e583f0));
  return;
}



/* Entry: 1020e7e50; end: 1020e7e6f;  */

void FUN_1020e7e50(void)

{
  func_0x000107c61168(&PTR_PTR_11281dfd8);
  return;
}



/* Entry: 1020e7e70; end: 1020e7ee3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020e7e70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e58420) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e58428) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e58430) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1020e7ee4; end: 1020e7f03;  */

void FUN_1020e7ee4(void)

{
  func_0x000107c61168(&PTR_PTR_11281e098);
  return;
}



/* Entry: 1020e7f04; end: 1020e7f93; -[_TtC32FriendsFeedNearMeFactoryServices22FriendsFeedNearMeScope initWithUiContainer:presentingViewController:billboardVisibilityObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020e7f04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  *(undefined8 *)(param_1 + _DAT_112e58420) = param_3;
  *(undefined8 *)(param_1 + _DAT_112e58428) = param_4;
  *(undefined8 *)(param_1 + _DAT_112e58430) = param_5;
  lVar2 = param_1;
  FUN_1020e7ee4();
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 1020e7f94; end: 1020e7fef; -[_TtC32FriendsFeedNearMeFactoryServices22FriendsFeedNearMeScope init] */

void FUN_1020e7f94(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FriendsFeedNearMeFactoryServices.FriendsFeedNearMeScope",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020e7fc0);
  (*pcVar1)();
}



/* Entry: 1020e7ff0; end: 1020e8037; -[_TtC32FriendsFeedNearMeFactoryServices22FriendsFeedNearMeScope .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001020e800c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020e8010) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020e7ff0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e58420));
  return;
}



/* Entry: 1020e8038; end: 1020e81a3;  */

undefined8 FUN_1020e8038(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long extraout_x8;
  long lVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  long lVar7;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar4 = *(long *)(param_4 + 0x18);
  lVar1 = 0;
  func_0x000107c60188(0,lVar4);
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)&lStack_90 - extraout_x8;
  func_0x000107c61648();
  if (unaff_x20 == 0) {
    (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar6,1,1,lVar4);
    lVar7 = *(long *)(param_4 + 0x28);
  }
  else {
    uStack_88 = *(undefined8 *)(param_4 + 0x10);
    uStack_78 = *(undefined8 *)(param_4 + 0x20);
    lVar7 = *(long *)(param_4 + 0x28);
    uStack_70 = *(undefined8 *)(lVar7 + 8);
    uVar2 = 0;
    lStack_90 = lVar1;
    lStack_80 = lVar4;
    FUN_102100984(0,&uStack_88);
    puVar3 = &DAT_10da5cf90;
    func_0x000107c61520(&DAT_10da5cf90,uVar2);
    FUN_102100ed0(lVar6,param_3,uVar2,puVar3);
    lVar1 = lStack_90;
    func_0x000107c61574(unaff_x20);
  }
  (**(code **)(lVar7 + 0x18))(param_1,param_2,lVar6,lVar4,lVar7);
  (**(code **)(lVar5 + 8))(lVar6,lVar1);
  return param_1;
}



/* Entry: 1020e81a4; end: 1020e81b7;  */

undefined8 FUN_1020e81a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long extraout_x8;
  long lVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  long lVar7;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar4 = *(long *)(param_4 + 0x18);
  lVar1 = 0;
  func_0x000107c60188(0,lVar4);
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)&lStack_90 - extraout_x8;
  func_0x000107c61648();
  if (unaff_x20 == 0) {
    (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar6,1,1,lVar4);
    lVar7 = *(long *)(param_4 + 0x28);
  }
  else {
    uStack_88 = *(undefined8 *)(param_4 + 0x10);
    uStack_78 = *(undefined8 *)(param_4 + 0x20);
    lVar7 = *(long *)(param_4 + 0x28);
    uStack_70 = *(undefined8 *)(lVar7 + 8);
    uVar2 = 0;
    lStack_90 = lVar1;
    lStack_80 = lVar4;
    FUN_102100984(0,&uStack_88);
    puVar3 = &DAT_10da5cf90;
    func_0x000107c61520(&DAT_10da5cf90,uVar2);
    FUN_102100ed0(lVar6,param_3,uVar2,puVar3);
    lVar1 = lStack_90;
    func_0x000107c61574(unaff_x20);
  }
  (**(code **)(lVar7 + 0x18))(param_1,param_2,lVar6,lVar4,lVar7);
  (**(code **)(lVar5 + 8))(lVar6,lVar1);
  return param_1;
}



/* Entry: 1020e81b8; end: 1020e81e3;  */

long FUN_1020e81b8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1020e81e4; end: 1020e824b;  */

void FUN_1020e81e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_weakDestroy_11034f5e0)();
  return;
}



/* Entry: 1020e824c; end: 1020e8293;  */

void FUN_1020e824c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c610f8();
  FUN_1020e8294(param_1,param_2,param_3);
  return;
}



/* Entry: 1020e8294; end: 1020e847f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1020e8294(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong *unaff_x20;
  ulong uVar3;
  
  uVar3 = *(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20;
  func_0x000107c61614((long)unaff_x20 + _DAT_112e58508,0);
  puVar1 = (undefined8 *)((long)unaff_x20 + _DAT_112e58510);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)((long)unaff_x20 + _DAT_112e58518);
  *puVar1 = 0;
  puVar1[1] = 0;
  uVar2 = *(undefined8 *)(uVar3 + 0xf8);
  FUN_1020ecb90(uVar2,*(undefined8 *)(uVar3 + 0x100),*(undefined8 *)(uVar3 + 0x108),
                *(undefined8 *)(uVar3 + 0x110));
  FUN_1020ec1e0();
  func_0x000107c61180();
  func_0x0001020e8354(param_1,param_2,param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61574(param_3);
  return uVar2;
}



/* Entry: 1020e8480; end: 1020e8723;  */

void FUN_1020e8480(ulong *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long extraout_x8;
  long lVar7;
  long extraout_x12;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uStack_60;
  long lStack_58;
  
  uVar2 = 0;
  func_0x0001021051c4(0,param_3);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar8 = (undefined8 *)((long)&uStack_60 - extraout_x12);
  (**(code **)(extraout_x8 + 0x10))(puVar8,param_2,uVar2);
  puVar3 = puVar8;
  func_0x000107c614c4(puVar8,uVar2);
  uVar10 = *puVar8;
  uVar2 = 0x112d4f4d0;
  func_0x00010002969c(0x112d4f4d0,&UNK_10d9153c0);
  lVar4 = 0;
  func_0x000107c61514(0,PTR___sSiN_11034deb0,param_3,uVar2,"offset element associatedWith ",0);
  puVar1 = (undefined8 *)((long)puVar8 + (long)*(int *)(lVar4 + 0x40));
  if ((int)puVar3 == 1) {
    if (*(char *)(puVar1 + 1) == '\x01') {
      uVar9 = *param_1;
      uVar5 = uVar9;
      func_0x000107c61558();
      uVar6 = uVar9;
      if ((uVar5 & 1) == 0) {
        uVar6 = 0;
        func_0x000101755b54(0,*(long *)(uVar9 + 0x10) + 1,1,uVar9);
      }
      uVar5 = *(ulong *)(uVar6 + 0x10);
      lVar7 = uVar5 + 1;
      uVar9 = uVar6;
      if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar5) {
        uVar9 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
        lStack_58 = lVar7;
        func_0x000101755b54(uVar9,lVar7,1,uVar6);
        lVar7 = lStack_58;
      }
      *(long *)(uVar9 + 0x10) = lVar7;
      *(undefined8 *)(uVar9 + uVar5 * 8 + 0x20) = uVar10;
      *param_1 = uVar9;
    }
    else {
      uVar2 = *puVar1;
      uVar9 = param_1[2];
      uVar5 = uVar9;
      func_0x000107c61558();
      uVar6 = uVar9;
      if ((uVar5 & 1) == 0) {
        uVar6 = 0;
        FUN_1021009e4(0,*(long *)(uVar9 + 0x10) + 1,1,uVar9);
      }
      uVar5 = *(ulong *)(uVar6 + 0x10);
      lVar7 = uVar5 + 1;
      uVar9 = uVar6;
      if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar5) {
        uVar9 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
        lStack_58 = lVar7;
        FUN_1021009e4(uVar9,lVar7,1,uVar6);
        lVar7 = lStack_58;
      }
      *(long *)(uVar9 + 0x10) = lVar7;
      lVar7 = uVar9 + uVar5 * 0x10;
      *(undefined8 *)(lVar7 + 0x20) = uVar10;
      *(undefined8 *)(lVar7 + 0x28) = uVar2;
      param_1[2] = uVar9;
    }
  }
  else if (*(char *)(puVar1 + 1) == '\x01') {
    uVar9 = param_1[1];
    uVar5 = uVar9;
    func_0x000107c61558();
    uVar6 = uVar9;
    if ((uVar5 & 1) == 0) {
      uVar6 = 0;
      func_0x000101755b54(0,*(long *)(uVar9 + 0x10) + 1,1,uVar9);
    }
    uVar5 = *(ulong *)(uVar6 + 0x10);
    lVar7 = uVar5 + 1;
    uVar9 = uVar6;
    if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar5) {
      uVar9 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
      lStack_58 = lVar7;
      func_0x000101755b54(uVar9,lVar7,1,uVar6);
      lVar7 = lStack_58;
    }
    *(long *)(uVar9 + 0x10) = lVar7;
    *(undefined8 *)(uVar9 + uVar5 * 8 + 0x20) = uVar10;
    param_1[1] = uVar9;
  }
  (**(code **)(*(long *)(param_3 + -8) + 8))((long)puVar8 + (long)*(int *)(lVar4 + 0x30),param_3);
  return;
}



/* Entry: 1020e8724; end: 1020e8b43;  */

void FUN_1020e8724(ulong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  ulong *puStack_68;
  
  lVar2 = 0;
  uStack_70 = param_3;
  puStack_68 = param_1;
  func_0x0001020eb368();
  lStack_80 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_80 + 0x40));
  lVar12 = (long)&lStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5eff8();
  lVar13 = *(long *)(lVar3 + -8);
  lStack_78 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar14 = lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = lVar14 - extraout_x12;
  uVar4 = 0;
  func_0x0001021051c4(0,param_5);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar11 = (undefined8 *)(lVar3 - extraout_x12_00);
  (**(code **)(extraout_x8_01 + 0x10))(puVar11,param_2,uVar4);
  puVar5 = puVar11;
  func_0x000107c614c4(puVar11,uVar4);
  if ((int)puVar5 == 1) {
    uVar15 = *puVar11;
    uVar4 = 0x112d4f4d0;
    func_0x00010002969c(0x112d4f4d0,&UNK_10d9153c0);
    lVar6 = 0;
    func_0x000107c61514(0,PTR___sSiN_11034deb0,param_5,uVar4,"offset element associatedWith ",0);
    uVar4 = uStack_70;
    puVar5 = (undefined8 *)((long)puVar11 + (long)*(int *)(lVar6 + 0x40));
    if (*(char *)(puVar5 + 1) == '\x01') {
      func_0x000107c5efe0(lVar3,uVar15,uStack_70);
      puVar1 = puStack_68;
      uVar10 = *puStack_68;
      uVar7 = uVar10;
      func_0x000107c61558();
      uVar8 = uVar10;
      if ((uVar7 & 1) == 0) {
        uVar8 = 0;
        func_0x000101161644(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
      }
      uVar7 = *(ulong *)(uVar8 + 0x10);
      uVar10 = uVar8;
      if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar7) {
        uVar10 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
        func_0x000101161644(uVar10,uVar7 + 1,1,uVar8);
      }
      *(ulong *)(uVar10 + 0x10) = uVar7 + 1;
      (**(code **)(lVar13 + 0x20))
                (uVar10 + ((ulong)*(byte *)(lVar13 + 0x50) + 0x20 &
                          ((ulong)*(byte *)(lVar13 + 0x50) ^ 0xffffffffffffffff)) +
                 *(long *)(lVar13 + 0x48) * uVar7,lVar3,lStack_78);
      *puVar1 = uVar10;
    }
    else {
      uVar9 = *puVar5;
      func_0x000107c5efe0(lVar12,uVar15,uStack_70);
      func_0x000107c5efe0(lVar12 + *(int *)(lVar2 + 0x14),uVar9,uVar4);
      puVar1 = puStack_68;
      uVar10 = puStack_68[2];
      uVar7 = uVar10;
      func_0x000107c61558();
      uVar8 = uVar10;
      if ((uVar7 & 1) == 0) {
        uVar8 = 0;
        func_0x0001021009f8(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
      }
      uVar7 = *(ulong *)(uVar8 + 0x10);
      uVar10 = uVar8;
      if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar7) {
        uVar10 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
        func_0x0001021009f8(uVar10,uVar7 + 1,1,uVar8);
      }
      *(ulong *)(uVar10 + 0x10) = uVar7 + 1;
      FUN_1020eb440(lVar12,uVar10 + ((ulong)*(byte *)(lStack_80 + 0x50) + 0x20 &
                                    ((ulong)*(byte *)(lStack_80 + 0x50) ^ 0xffffffffffffffff)) +
                           *(long *)(lStack_80 + 0x48) * uVar7);
      puVar1[2] = uVar10;
    }
  }
  else {
    uVar4 = 0x112d4f4d0;
    func_0x00010002969c(0x112d4f4d0,&UNK_10d9153c0);
    lVar6 = 0;
    func_0x000107c61514(0,PTR___sSiN_11034deb0,param_5,uVar4,"offset element associatedWith ",0);
    if (*(char *)((long)puVar11 + (long)*(int *)(lVar6 + 0x40) + 8) == '\x01') {
      func_0x000107c5efe0(lVar14,*puVar11,uStack_70);
      uVar10 = puStack_68[1];
      uVar7 = uVar10;
      func_0x000107c61558();
      uVar8 = uVar10;
      if ((uVar7 & 1) == 0) {
        uVar8 = 0;
        func_0x000101161644(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
      }
      uVar7 = *(ulong *)(uVar8 + 0x10);
      uVar10 = uVar8;
      if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar7) {
        uVar10 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
        func_0x000101161644(uVar10,uVar7 + 1,1,uVar8);
      }
      *(ulong *)(uVar10 + 0x10) = uVar7 + 1;
      (**(code **)(lVar13 + 0x20))
                (uVar10 + ((ulong)*(byte *)(lVar13 + 0x50) + 0x20 &
                          ((ulong)*(byte *)(lVar13 + 0x50) ^ 0xffffffffffffffff)) +
                 *(long *)(lVar13 + 0x48) * uVar7,lVar14,lStack_78);
      puStack_68[1] = uVar10;
    }
  }
  (**(code **)(*(long *)(param_5 + -8) + 8))((long)puVar11 + (long)*(int *)(lVar6 + 0x30),param_5);
  return;
}



/* Entry: 1020e8b44; end: 1020e92db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020e8b44(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined1 *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 uVar21;
  ulong uVar22;
  long lVar23;
  long *plVar24;
  long lVar25;
  ulong uVar26;
  ulong *unaff_x20;
  long lVar27;
  ulong uVar28;
  ulong uVar29;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined8 auStack_e0 [2];
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [32];
  
  lVar7 = _DAT_112e58508;
  uVar26 = *unaff_x20;
  uVar29 = *(ulong *)PTR__swift_isaMask_11034f488;
  puVar17 = auStack_90;
  uVar19 = 0;
  uVar21 = 0;
  func_0x000107c61428((long)unaff_x20 + _DAT_112e58508);
  lVar7 = (long)unaff_x20 + lVar7;
  func_0x000107c61618();
  if (lVar7 == 0) {
    func_0x000107c61434(param_1);
    func_0x000107c61434(param_2);
    func_0x000107c61434(param_3);
    func_0x000107c61434(param_4);
    FUN_1020ec370();
    FUN_1020ecadc();
    puVar13 = param_1;
    FUN_1020ec2f0();
    puStack_140 = puVar13;
    uStack_138 = param_2;
    puStack_130 = (undefined *)param_3;
    puStack_128 = (undefined *)param_4;
    func_0x000107c6157c(param_1);
    func_0x000100087c34(&puStack_140);
    func_0x000107c6142c(param_4);
    func_0x000107c6142c(param_3);
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(puVar13);
    func_0x000107c61574(param_1);
  }
  else {
    uVar29 = uVar29 & uVar26;
    lVar27 = lVar7;
    FUN_1020ec2f0();
    lVar2 = *(long *)(uVar29 + 0xf8);
    uVar4 = *(undefined8 *)(uVar29 + 0x100);
    uVar3 = *(undefined8 *)(uVar29 + 0x108);
    uVar5 = *(undefined8 *)(uVar29 + 0x110);
    func_0x000107c61434();
    func_0x000107c61434(param_1);
    func_0x000107c61434(param_2);
    lVar8 = lVar27;
    puVar18 = param_1;
    lVar20 = lVar2;
    func_0x0001020eac64();
    func_0x000107c6142c(lVar27);
    puVar9 = puVar18;
    func_0x000107c61434();
    func_0x000101164de8();
    func_0x000107c6142c(puVar18);
    uVar10 = 0xff;
    puStack_140 = param_1;
    uStack_138 = param_2;
    func_0x000107c5fc80(0xff,uVar4);
    uVar11 = 0;
    func_0x0001020fc494(0,lVar2,uVar10,uVar3);
    puVar13 = &UNK_10da5caa4;
    func_0x000107c61520(&UNK_10da5caa4,uVar11);
    func_0x000107c5fbf4(&uStack_a0,uVar11,puVar13);
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(param_1);
    ppuStack_a8 = &puStack_140;
    pcStack_b0 = FUN_1020eaef4;
    uVar10 = 0;
    puStack_130 = puVar9;
    puStack_128 = (undefined *)lVar27;
    pcStack_120 = (code *)puVar17;
    puStack_118 = (undefined *)uVar19;
    puStack_110 = (undefined *)uVar21;
    lStack_d0 = lVar2;
    uStack_c8 = uVar4;
    uStack_c0 = uVar3;
    uStack_b8 = uVar5;
    func_0x000107c60478(0,uVar11,puVar13);
    puVar13 = PTR___ss18EnumeratedSequenceVyxGSTsMc_11034e8e0;
    func_0x000107c61520(PTR___ss18EnumeratedSequenceVyxGSTsMc_11034e8e0,uVar10);
    pcVar6 = FUN_1020eaf04;
    func_0x000107c5fbf0(FUN_1020eaf04,auStack_e0,uVar10,&UNK_1104ca5c8,puVar13);
    func_0x000107c6142c(lVar27);
    func_0x000107c6142c(puVar9);
    func_0x000107c6142c(uVar21);
    func_0x000107c6142c(uVar19);
    func_0x000107c6142c(puVar17);
    func_0x000107c6142c(uStack_a0);
    func_0x000107c6142c(uStack_98);
    uVar19 = 0;
    puStack_130 = (undefined *)lVar2;
    puStack_128 = (undefined *)uVar4;
    pcStack_120 = (code *)uVar3;
    puStack_118 = (undefined *)uVar5;
    puStack_110 = param_1;
    auStack_e0[0] = param_3;
    func_0x000107c5fe38(0,lVar2,uVar3);
    func_0x000107c61434(param_3);
    puVar13 = PTR___sShyxGSTsMc_11034de90;
    func_0x000107c61520(PTR___sShyxGSTsMc_11034de90,uVar19);
    pcVar12 = FUN_1020eaf24;
    func_0x000107c5fbf0(FUN_1020eaf24,&puStack_140,uVar19,PTR___sSiN_11034deb0,puVar13);
    func_0x000107c6142c(param_3);
    uVar26 = *(ulong *)(pcVar12 + 0x10);
    puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar26 != 0) {
      uVar29 = 0;
      uVar28 = *(ulong *)(puVar18 + 0x10);
LAB_1020e8e5c:
      if (*(ulong *)(pcVar12 + 0x10) <= uVar29) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1020e92dc);
        (*pcVar6)();
      }
      uVar22 = 0;
      lVar27 = *(long *)(pcVar12 + uVar29 * 8 + 0x20);
      uVar29 = uVar29 + 1;
      do {
        if (uVar28 == uVar22) {
          lVar23 = *(long *)(lVar8 + 0x10);
          plVar24 = (long *)(lVar8 + 0x20);
          goto LAB_1020e8eac;
        }
        if (*(ulong *)(puVar18 + 0x10) <= uVar22) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1020e92d8);
          (*pcVar6)();
        }
        lVar23 = uVar22 * 8;
        uVar22 = uVar22 + 1;
      } while (*(long *)(puVar18 + lVar23 + 0x20) != lVar27);
      goto LAB_1020e8eec;
    }
LAB_1020e8fe4:
    func_0x000107c6142c(pcVar12);
    uVar19 = 0;
    puStack_130 = (undefined *)lVar2;
    puStack_128 = (undefined *)uVar4;
    pcStack_120 = (code *)uVar3;
    puStack_118 = (undefined *)uVar5;
    puStack_110 = param_1;
    auStack_e0[0] = param_4;
    func_0x000107c5fe38(0,uVar4,uVar5);
    uVar21 = 0;
    func_0x000107c5eff8(0);
    func_0x000107c61434(param_4);
    puVar9 = PTR___sShyxGSTsMc_11034de90;
    func_0x000107c61520(PTR___sShyxGSTsMc_11034de90,uVar19);
    pcVar12 = FUN_1020eaf70;
    func_0x000107c5fbf0(FUN_1020eaf70,&puStack_140,uVar19,uVar21,puVar9);
    func_0x000107c6142c(param_4);
    puVar9 = &UNK_1104ca3a0;
    func_0x000107c613fc(&UNK_1104ca3a0,0x18,7);
    func_0x000107c61614(puVar9 + 0x10,unaff_x20);
    puVar14 = &UNK_1104ca3c8;
    func_0x000107c613fc(&UNK_1104ca3c8,0x90,7);
    *(long *)(puVar14 + 0x10) = lVar2;
    *(undefined8 *)(puVar14 + 0x18) = uVar4;
    *(undefined8 *)(puVar14 + 0x20) = uVar3;
    *(undefined8 *)(puVar14 + 0x28) = uVar5;
    *(undefined **)(puVar14 + 0x30) = puVar9;
    *(undefined **)(puVar14 + 0x38) = param_1;
    *(undefined8 *)(puVar14 + 0x40) = param_2;
    *(undefined8 *)(puVar14 + 0x48) = param_3;
    *(undefined8 *)(puVar14 + 0x50) = param_4;
    *(long *)(puVar14 + 0x58) = lVar8;
    *(undefined **)(puVar14 + 0x60) = puVar18;
    *(long *)(puVar14 + 0x68) = lVar20;
    *(long *)(puVar14 + 0x70) = lVar7;
    *(undefined **)(puVar14 + 0x78) = puVar13;
    *(code **)(puVar14 + 0x80) = pcVar6;
    *(code **)(puVar14 + 0x88) = pcVar12;
    puVar13 = &UNK_1104ca3f0;
    func_0x000107c613fc(&UNK_1104ca3f0,0x20,7);
    *(undefined8 *)(puVar13 + 0x10) = 0x1020eafa0;
    *(undefined **)(puVar13 + 0x18) = puVar14;
    pcStack_120 = FUN_1020eafe4;
    puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_138 = 0x42000000;
    puStack_130 = &UNK_10006eb60;
    puStack_128 = &UNK_1104ca408;
    ppuVar15 = &puStack_140;
    puStack_118 = puVar13;
    func_0x000107c60bc4();
    puVar13 = puStack_118;
    func_0x000107c61434(param_1);
    func_0x000107c61434(param_2);
    func_0x000107c61434(param_3);
    func_0x000107c61434(param_4);
    func_0x000107c61174(lVar7);
    func_0x000107c61574(puVar13);
    puVar13 = &UNK_1104ca3a0;
    func_0x000107c613fc(&UNK_1104ca3a0,0x18,7);
    func_0x000107c61614(puVar13 + 0x10,unaff_x20);
    puVar9 = &UNK_1104ca440;
    func_0x000107c613fc(&UNK_1104ca440,0x68,7);
    *(long *)(puVar9 + 0x10) = lVar2;
    *(undefined8 *)(puVar9 + 0x18) = uVar4;
    *(undefined8 *)(puVar9 + 0x20) = uVar3;
    *(undefined8 *)(puVar9 + 0x28) = uVar5;
    *(undefined **)(puVar9 + 0x30) = puVar13;
    *(undefined **)(puVar9 + 0x38) = param_1;
    *(undefined8 *)(puVar9 + 0x40) = param_2;
    *(undefined8 *)(puVar9 + 0x48) = param_3;
    *(undefined8 *)(puVar9 + 0x50) = param_4;
    *(undefined8 *)(puVar9 + 0x58) = param_5;
    *(undefined8 *)(puVar9 + 0x60) = param_6;
    pcStack_120 = FUN_1020eb020;
    puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_138 = 0x42000000;
    puStack_130 = &UNK_100288f10;
    puStack_128 = &UNK_1104ca458;
    ppuVar16 = &puStack_140;
    puStack_118 = puVar9;
    func_0x000107c60bc4(ppuVar16);
    puVar13 = puStack_118;
    func_0x000107c61434(param_1);
    func_0x000107c61434(param_2);
    func_0x000107c61434(param_3);
    func_0x000107c61434(param_4);
    func_0x000100ce372c(param_5,param_6);
    func_0x000107c61574(puVar13);
    func_0x000107c4e54c(lVar7);
    func_0x000107c60bd0(ppuVar16);
    func_0x000107c60bd0(ppuVar15);
    func_0x000107c61574(puVar14);
    func_0x000107c61170(lVar7);
  }
  return;
  while( true ) {
    lVar25 = *plVar24;
    lVar23 = lVar23 + -1;
    plVar24 = plVar24 + 1;
    if (lVar25 == lVar27) break;
LAB_1020e8eac:
    if (lVar23 == 0) {
      lVar23 = *(long *)(lVar20 + 0x10) + 1;
      plVar24 = (long *)(lVar20 + 0x28);
      goto LAB_1020e8ed0;
    }
  }
  goto LAB_1020e8eec;
  while (plVar1 = plVar24 + -1, lVar25 = *plVar24, plVar24 = plVar24 + 2,
        *plVar1 != lVar27 && lVar25 != lVar27) {
LAB_1020e8ed0:
    lVar23 = lVar23 + -1;
    if (lVar23 == 0) goto LAB_1020e8e54;
  }
LAB_1020e8eec:
  puVar9 = puVar13;
  func_0x000107c61558();
  puStack_140 = puVar13;
  if (((ulong)puVar9 & 1) == 0) {
    func_0x000100dd4260(0,*(long *)(puVar13 + 0x10) + 1,1);
  }
  uVar22 = *(ulong *)(puStack_140 + 0x10);
  if (*(ulong *)(puStack_140 + 0x18) >> 1 <= uVar22) {
    func_0x000100dd4260(1 < *(ulong *)(puStack_140 + 0x18),uVar22 + 1,1);
  }
  *(ulong *)(puStack_140 + 0x10) = uVar22 + 1;
  *(long *)(puStack_140 + uVar22 * 8 + 0x20) = lVar27;
  puVar13 = puStack_140;
LAB_1020e8e54:
  if (uVar29 == uVar26) goto LAB_1020e8fe4;
  goto LAB_1020e8e5c;
}



/* Entry: 1020e92dc; end: 1020e945b;  */

void FUN_1020e92dc(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,ulong *param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar10 = *param_8;
  uVar11 = *(ulong *)PTR__swift_isaMask_11034f488;
  if (*(long *)(param_3 + 0x10) != 0) {
    uVar5 = *(ulong *)(param_3 + 0x28);
    func_0x000107c60688(uVar5,param_1);
    uVar9 = -1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
    uVar5 = uVar5 & (uVar9 ^ 0xffffffffffffffff);
    if ((*(ulong *)(param_3 + 0x38 + (uVar5 >> 6) * 8) >> (uVar5 & 0x3f) & 1) != 0) {
      do {
        if (*(long *)(*(long *)(param_3 + 0x30) + uVar5 * 8) == param_1) {
          return;
        }
        uVar5 = uVar5 + 1 & ~uVar9;
      } while ((*(ulong *)(param_3 + 0x38 + (uVar5 >> 6) * 8) >> (uVar5 & 0x3f) & 1) != 0);
    }
  }
  uVar11 = uVar11 & uVar10;
  uVar1 = *(undefined8 *)(uVar11 + 0xf8);
  uVar3 = *(undefined8 *)(uVar11 + 0x100);
  uVar2 = *(undefined8 *)(uVar11 + 0x108);
  uVar4 = *(undefined8 *)(uVar11 + 0x110);
  lVar6 = param_2;
  FUN_1020ecd0c(param_2,param_4,param_5,param_6,param_7,uVar1,uVar3,uVar2,uVar4);
  if (lVar6 != 0) {
    uVar7 = 0xff;
    func_0x000107c5fc80(0xff,uVar3);
    lVar8 = 0;
    func_0x0001020fc344(0,uVar1,uVar7,uVar2);
    FUN_1020eada4(param_1,lVar6,*(undefined8 *)(param_2 + *(int *)(lVar8 + 0x2c)),uVar1,uVar3,uVar2,
                  uVar4);
    func_0x000107c6142c(lVar6);
  }
  return;
}



/* Entry: 1020e945c; end: 1020e950b;  */

void FUN_1020e945c(undefined8 *param_1,undefined8 *param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  uVar1 = 0xff;
  func_0x000107c5fc80(0xff,param_6);
  uVar2 = 0xff;
  func_0x0001020fc344(0xff,param_5,uVar1,param_7);
  lVar3 = 0;
  func_0x000107c61510(0,PTR___sSiN_11034deb0,uVar2,"offset element ",0);
  lVar3 = (long)param_2 + (long)*(int *)(lVar3 + 0x30);
  (*param_3)();
  *param_1 = uVar4;
  param_1[1] = lVar3;
  param_1[2] = uVar2;
  return;
}



/* Entry: 1020e950c; end: 1020e969b;  */

void FUN_1020e950c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 auStack_a0 [2];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = 0xff;
  uStack_90 = param_4;
  uStack_88 = param_5;
  uStack_80 = param_6;
  uStack_78 = param_8;
  uStack_70 = param_9;
  uStack_68 = param_1;
  func_0x000107c5eff8();
  lVar3 = 0xff;
  func_0x000107c61510(0xff,param_7,lVar2,"sectionIdentifier indexPath ",0);
  lVar4 = 0;
  func_0x000107c60188(0,lVar3);
  lVar6 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)&uStack_90 + -extraout_x8;
  *(undefined8 *)((long)auStack_a0 + -extraout_x8) = param_10;
  FUN_1020ecdf8(lVar7,param_2,param_3,uStack_90,uStack_88,uStack_80,param_7,uStack_78,uStack_70);
  lVar5 = lVar7;
  (**(code **)(*(long *)(lVar3 + -8) + 0x30))(lVar7,1,lVar3);
  uVar1 = uStack_68;
  if ((int)lVar5 == 1) {
    (**(code **)(lVar6 + 8))(lVar7,lVar4);
    (**(code **)(*(long *)(lVar2 + -8) + 0x38))(uStack_68,1,1,lVar2);
  }
  else {
    lVar5 = *(long *)(lVar2 + -8);
    (**(code **)(lVar5 + 0x20))(uStack_68,lVar7 + *(int *)(lVar3 + 0x30),lVar2);
    (**(code **)(lVar5 + 0x38))(uVar1,0,1,lVar2);
    (**(code **)(*(long *)(param_7 + -8) + 8))(lVar7,param_7);
  }
  return;
}



/* Entry: 1020e969c; end: 1020e9b7b;  */

void FUN_1020e969c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,long param_7,long param_8,undefined8 param_9,
                  long param_10,long param_11,undefined8 param_12)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x8_00;
  long *plVar8;
  long extraout_x12;
  long extraout_x12_00;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined1 *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [32];
  
  lVar1 = 0;
  puStack_c8 = (undefined1 *)param_2;
  lStack_b0 = param_5;
  lStack_a8 = param_8;
  lStack_a0 = param_6;
  lStack_98 = param_4;
  func_0x0001020eb368();
  lStack_c0 = *(long *)(lVar1 + -8);
  lStack_b8 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_c0 + 0x40));
  lVar11 = (long)&uStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5ef8c();
  lVar1 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar1 + 0x40));
  lVar12 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar12 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c61428(param_1 + 0x10,auStack_80,0,0);
  puVar3 = (undefined1 *)(param_1 + 0x10);
  func_0x000107c61618();
  if (puVar3 != (undefined1 *)0x0) {
    lStack_d8 = param_7;
    func_0x000107c61174();
    puVar4 = puStack_c8;
    func_0x000107c61434(puStack_c8);
    func_0x000107c61434(param_3);
    func_0x000107c61434(lStack_98);
    lVar9 = lStack_b0;
    uStack_e0 = param_3;
    func_0x000107c61434(lStack_b0);
    FUN_1020ec370(puVar4,uStack_e0,lStack_98,lVar9);
    puStack_c8 = puVar3;
    func_0x000107c61170(puVar3);
    lVar9 = *(long *)(lStack_a0 + 0x10);
    puVar4 = puVar3;
    lStack_d0 = lVar1;
    if (lVar9 != 0) {
      FUN_101d7e430();
      func_0x000107c60260(lVar13 - extraout_x12_00,lVar2,puVar3);
      puVar10 = (undefined8 *)(lStack_a0 + 0x20);
      do {
        uStack_90 = *puVar10;
        puVar4 = auStack_88;
        func_0x000107c60254(puVar4,&uStack_90,lVar2,puVar3);
        lVar9 = lVar9 + -1;
        puVar10 = puVar10 + 1;
      } while (lVar9 != 0);
      func_0x000107c5ef70();
      lVar1 = lStack_d0;
      (**(code **)(lStack_d0 + 8))(lVar13 - extraout_x12_00,lVar2);
      func_0x000107c41728(param_9);
      func_0x000107c61170(puVar4);
    }
    lVar6 = lStack_d8;
    lStack_98 = param_10;
    lVar9 = *(long *)(lStack_d8 + 0x10);
    if (lVar9 != 0) {
      FUN_101d7e430();
      func_0x000107c60260(lVar13,lVar2,puVar4);
      puVar10 = (undefined8 *)(lVar6 + 0x20);
      do {
        uStack_90 = *puVar10;
        puVar3 = auStack_88;
        func_0x000107c60254(puVar3,&uStack_90,lVar2,puVar4);
        lVar9 = lVar9 + -1;
        puVar10 = puVar10 + 1;
      } while (lVar9 != 0);
      func_0x000107c5ef70();
      lVar1 = lStack_d0;
      (**(code **)(lStack_d0 + 8))(lVar13,lVar2);
      func_0x000107c4975c(param_9);
      func_0x000107c61170(puVar3);
    }
    for (lVar13 = *(long *)(lStack_a8 + 0x10); lVar13 != 0; lVar13 = lVar13 + -1) {
      func_0x000107c4d144(param_9);
    }
    lStack_d8 = param_12;
    lVar13 = *(long *)(lStack_98 + 0x10);
    if (lVar13 != 0) {
      puVar10 = (undefined8 *)(lStack_98 + 0x20);
      do {
        uVar5 = *puVar10;
        func_0x000107c5ef80(lVar12,uVar5);
        func_0x000107c5ef70();
        (**(code **)(lVar1 + 8))(lVar12,lVar2);
        func_0x000107c4fda4(param_9);
        func_0x000107c61170(uVar5);
        lVar13 = lVar13 + -1;
        puVar10 = puVar10 + 1;
      } while (lVar13 != 0);
    }
    lStack_a8 = *(long *)(param_11 + 0x10);
    if (lStack_a8 != 0) {
      lVar1 = 0;
      lStack_b0 = param_11 + 0x20;
      do {
        plVar8 = (long *)(lStack_b0 + lVar1 * 0x18);
        lVar2 = *plVar8;
        lVar12 = plVar8[1];
        lVar13 = plVar8[2];
        if (*(long *)(lVar2 + 0x10) == 0) {
          func_0x000107c61434(lVar2);
          func_0x000107c61434(lVar12);
          func_0x000107c61434(lVar13);
        }
        else {
          uVar5 = 0;
          func_0x000107c5eff8(0);
          func_0x000107c61434(lVar2);
          func_0x000107c61434(lVar12);
          func_0x000107c61434(lVar13);
          lVar9 = lVar2;
          func_0x000107c5fc48(lVar2,uVar5);
          func_0x000107c416f8(param_9);
          func_0x000107c61170(lVar9);
        }
        lStack_98 = lVar2;
        if (*(long *)(lVar12 + 0x10) != 0) {
          uVar5 = 0;
          func_0x000107c5eff8(0);
          lVar2 = lVar12;
          func_0x000107c5fc48(lVar12,uVar5);
          func_0x000107c4973c(param_9);
          func_0x000107c61170(lVar2);
        }
        lVar2 = *(long *)(lVar13 + 0x10);
        lStack_a0 = lVar12;
        if (lVar2 != 0) {
          lVar12 = lVar13 + ((ulong)*(byte *)(lStack_c0 + 0x50) + 0x20 &
                            ((ulong)*(byte *)(lStack_c0 + 0x50) ^ 0xffffffffffffffff));
          lVar9 = *(long *)(lStack_c0 + 0x48);
          do {
            lVar6 = lVar12;
            FUN_1020eb3a0(lVar12,lVar11);
            func_0x000107c5efd4();
            lVar7 = lVar6;
            func_0x000107c5efd4();
            func_0x000107c4d134(param_9);
            func_0x000107c61170(lVar6);
            func_0x000107c61170(lVar7);
            func_0x0001020eb3e4(lVar11);
            lVar12 = lVar12 + lVar9;
            lVar2 = lVar2 + -1;
          } while (lVar2 != 0);
        }
        lVar1 = lVar1 + 1;
        func_0x000107c6142c(lVar13);
        func_0x000107c6142c(lStack_a0);
        func_0x000107c6142c(lStack_98);
      } while (lVar1 != lStack_a8);
    }
    uVar5 = 0;
    func_0x000107c5eff8(0);
    lVar1 = lStack_d8;
    func_0x000107c5fc48(lStack_d8,uVar5);
    func_0x000107c4fd90(param_9);
    func_0x000107c61170(puStack_c8);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1020e9b7c; end: 1020e9c2f;  */

void FUN_1020e9b7c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,code *param_7)

{
  long lVar1;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar1 = param_2;
    FUN_1020ecadc();
    func_0x000107c6157c();
    func_0x000107c61170(param_2);
    uStack_88 = param_3;
    uStack_80 = param_4;
    uStack_78 = param_5;
    uStack_70 = param_6;
    func_0x000100087c34(&uStack_88);
    func_0x000107c61574(lVar1);
  }
  if (param_7 != (code *)0x0) {
    (*param_7)();
  }
  return;
}



/* Entry: 1020e9c30; end: 1020e9fcf;  */

void FUN_1020e9c30(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar16;
  code *pcVar17;
  long lVar18;
  undefined8 uVar19;
  ulong *unaff_x20;
  long lVar20;
  ulong uVar21;
  long alStack_f0 [2];
  undefined1 auStack_e0 [8];
  undefined1 *puStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  char cStack_68;
  
  uVar21 = *(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20;
  lVar8 = *(long *)(uVar21 + 0xf8);
  uVar6 = *(undefined8 *)(uVar21 + 0x100);
  uVar2 = 0xff;
  uStack_88 = param_1;
  uStack_80 = param_2;
  func_0x000107c5fc80(0xff,uVar6);
  uVar13 = *(undefined8 *)(uVar21 + 0x108);
  lVar3 = 0;
  uStack_c0 = uVar2;
  uStack_90 = uVar13;
  func_0x0001020fc344(0,lVar8);
  lStack_d0 = *(long *)(lVar3 + -8);
  lStack_c8 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_d0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar4 = 0;
  lVar3 = lVar8;
  puStack_d8 = auStack_e0 + -extraout_x8;
  func_0x000107c60188(0,lVar8);
  lStack_b8 = *(long *)(lVar4 + -8);
  lStack_b0 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_b8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar18 = (long)(auStack_e0 + -extraout_x8) - extraout_x8_00;
  lVar20 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = lVar18 - extraout_x8_01;
  lStack_a0 = lVar16;
  FUN_1020ec2f0();
  lStack_98 = *(long *)(uVar21 + 0x110);
  *(long *)(lVar16 + -0x10) = lStack_98;
  uVar19 = uStack_90;
  uVar14 = uVar2;
  uStack_a8 = uVar6;
  FUN_1020ed1b8(lVar18,uStack_80,lVar4,lVar3,uVar2,uVar13,lVar8,uVar6,uStack_90);
  func_0x000107c6142c(uVar13);
  func_0x000107c6142c(uVar2);
  func_0x000107c6142c(lVar3);
  func_0x000107c6142c(lVar4);
  lVar4 = lVar18;
  (**(code **)(lVar20 + 0x30))(lVar18,1,lVar8);
  lVar3 = lStack_a0;
  if ((int)lVar4 == 1) {
    pcVar17 = *(code **)(lStack_b8 + 8);
    lVar3 = lVar18;
    lVar8 = lStack_b0;
  }
  else {
    lVar4 = lStack_a0;
    lVar11 = lVar8;
    (**(code **)(lVar20 + 0x20))(lStack_a0,lVar18,lVar8);
    FUN_1020ec2f0();
    *(long *)(lVar16 + -0x10) = lStack_98;
    lVar5 = lVar3;
    lVar10 = lVar4;
    lVar12 = lVar18;
    lVar15 = lVar11;
    FUN_1020ecd80(lVar3,lVar4,lVar18,lVar11,uVar14,lVar8,uStack_a8,uVar19);
    uVar9 = (uint)lVar10;
    lStack_b0 = lVar5;
    func_0x000107c6142c(uVar14);
    func_0x000107c6142c(lVar11);
    func_0x000107c6142c(lVar18);
    func_0x000107c6142c(lVar4);
    if ((uVar9 & 0xff) == 1) {
      pcVar17 = *(code **)(lVar20 + 8);
    }
    else {
      FUN_1020ec2f0();
      lVar18 = lStack_98;
      *(long *)(lVar16 + -0x10) = lStack_98;
      puVar1 = puStack_d8;
      FUN_1020ed150(puStack_d8,lStack_b0,lVar4,lVar10,lVar12,lVar15,lVar8,uStack_a8,uVar19);
      func_0x000107c6142c(lVar15);
      func_0x000107c6142c(lVar12);
      func_0x000107c6142c(lVar10);
      func_0x000107c6142c(lVar4);
      lVar3 = lStack_c8;
      uVar19 = *(undefined8 *)(puVar1 + *(int *)(lStack_c8 + 0x2c));
      pcVar17 = *(code **)(lStack_d0 + 8);
      func_0x000107c61434(uVar19);
      (*pcVar17)(puVar1,lVar3);
      uVar6 = 0;
      uStack_78 = uVar19;
      func_0x000107c6143c(0,uStack_c0);
      puVar7 = PTR___sSayxGSlsMc_11034dd20;
      func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar6);
      func_0x000107c5fec4(&uStack_70,uStack_80,uVar6,puVar7,*(undefined8 *)(lVar18 + 8));
      func_0x000107c6142c(uVar19);
      uVar6 = uStack_88;
      if (cStack_68 != '\x01') {
        func_0x000107c5efe8(uStack_88,uStack_70,lStack_b0);
        (**(code **)(lVar20 + 8))(lStack_a0,lVar8);
        uVar19 = 0;
        goto LAB_1020e9f60;
      }
      pcVar17 = *(code **)(lVar20 + 8);
      lVar3 = lStack_a0;
    }
  }
  (*pcVar17)(lVar3,lVar8);
  uVar19 = 1;
  uVar6 = uStack_88;
LAB_1020e9f60:
  lVar8 = 0;
  func_0x000107c5eff8();
  (**(code **)(*(long *)(lVar8 + -8) + 0x38))(uVar6,uVar19,1,lVar8);
  return;
}



/* Entry: 1020e9fd0; end: 1020ea04f;  */

void FUN_1020e9fd0(undefined8 param_1)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_respondsToSelector__11262c7e0,param_1);
  return;
}



/* Entry: 1020ea050; end: 1020ea107;  */

undefined8 FUN_1020ea050(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_1;
  func_0x0001020eb0dc();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 1020ea108; end: 1020ea36b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1020ea108(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long extraout_x8;
  long lVar7;
  long extraout_x8_00;
  undefined8 uVar8;
  ulong *unaff_x20;
  code *pcVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uStack_c0;
  undefined4 auStack_b8 [2];
  long alStack_b0 [4];
  undefined1 auStack_78 [24];
  
  uVar11 = *(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20;
  uVar8 = *(undefined8 *)(uVar11 + 0xf8);
  lVar2 = *(long *)(uVar11 + 0x100);
  uVar3 = 0xff;
  alStack_b0[1] = uVar8;
  func_0x000107c5fc80(0xff,lVar2);
  lVar6 = *(long *)(uVar11 + 0x108);
  lVar4 = 0;
  alStack_b0[0] = lVar6;
  func_0x0001020fc344(0,uVar8,uVar3);
  alStack_b0[3] = *(long *)(lVar4 + -8);
  alStack_b0[2] = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(alStack_b0[3] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)alStack_b0 - extraout_x8;
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = lVar10 - extraout_x8_00;
  func_0x000107c5eff4();
  lVar5 = lVar4;
  FUN_1020ec2f0();
  *(undefined8 *)(lVar12 + -0x10) = *(undefined8 *)(uVar11 + 0x110);
  FUN_1020ed150(lVar10,lVar4,lVar5,uVar8,uVar3,lVar6,alStack_b0[1],lVar2,alStack_b0[0]);
  func_0x000107c6142c(lVar6);
  func_0x000107c6142c(uVar3);
  func_0x000107c6142c(uVar8);
  func_0x000107c6142c(lVar5);
  lVar5 = alStack_b0[2];
  uVar8 = *(undefined8 *)(lVar10 + *(int *)(alStack_b0[2] + 0x2c));
  pcVar9 = *(code **)(alStack_b0[3] + 8);
  func_0x000107c61434(uVar8);
  (*pcVar9)(lVar10,lVar5);
  func_0x000107c5efec();
  func_0x000107c5fc98(lVar12);
  func_0x000107c6142c(uVar8);
  puVar1 = (undefined8 *)((long)unaff_x20 + _DAT_112e58510);
  func_0x000107c61428(puVar1,auStack_78,0,0);
  pcVar9 = (code *)*puVar1;
  if (pcVar9 != (code *)0x0) {
    uVar8 = puVar1[1];
    func_0x000107c6157c(uVar8);
    (*pcVar9)(param_1,param_2,lVar12);
    func_0x000100ce373c(pcVar9,uVar8);
    if (param_1 != 0) {
      (**(code **)(lVar7 + 8))(lVar12,lVar2);
      return param_1;
    }
  }
  *(undefined4 *)(lVar12 + -8) = 0;
  *(undefined8 *)(lVar12 + -0x10) = 0xf6;
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "DiffableDataSourceKit/CollectionViewDiffableDataSource.swift",0x3c,2);
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x1020ea36c);
  (*pcVar9)();
}



/* Entry: 1020ea36c; end: 1020ea433;  */

void FUN_1020ea36c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5efdc(puVar3,param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar2 = param_3;
  FUN_1020ea108(param_3,puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1020ea434; end: 1020ea60f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1020ea434(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e58518);
  func_0x000107c61428(puVar1,auStack_68,0,0);
  pcVar3 = (code *)*puVar1;
  if (pcVar3 != (code *)0x0) {
    uVar2 = puVar1[1];
    func_0x000107c6157c(uVar2);
    (*pcVar3)(param_1,param_2,param_3,param_4);
    func_0x000100ce373c(pcVar3,uVar2);
    if (param_1 != 0) {
      return param_1;
    }
  }
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "DiffableDataSourceKit/CollectionViewDiffableDataSource.swift",0x3c,2,0x101,0)
  ;
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1020ea518);
  (*pcVar3)();
}



/* Entry: 1020ea610; end: 1020ea687;  */

/* WARNING: Possible PIC construction at 0x0001020ea638: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020ea63c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020ea610(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + _DAT_112e58508);
  if (*(long *)(unaff_x20 + _DAT_112e58510) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(unaff_x20 + _DAT_112e58510))[1]);
    return;
  }
  return;
}



/* Entry: 1020ea688; end: 1020ea6d7;  */

/* WARNING: Possible PIC construction at 0x0001020ea6b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020ea6bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020ea688(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e58508);
  if (*(long *)(param_1 + _DAT_112e58510) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112e58510))[1]);
    return;
  }
  return;
}



/* Entry: 1020ea6d8; end: 1020ea703;  */

bool FUN_1020ea6d8(long *param_1,long *param_2)

{
  return *param_1 == *param_2 && param_1[1] == param_2[1];
}



/* Entry: 1020ea704; end: 1020ea757;  */

/* WARNING: Possible PIC construction at 0x0001020ea720: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020ea724) */
/* WARNING: Removing unreachable block (ram,0x0001020ea744) */
/* WARNING: Removing unreachable block (ram,0x0001020ea728) */

void FUN_1020ea704(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb55c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s10Foundation9IndexPathV2eeoiySbAC_ACtFZ_110350ef0)();
  return;
}



/* Entry: 1020ea758; end: 1020ea76b;  */

ulong FUN_1020ea758(ulong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar2 = *param_1;
  uVar3 = param_1[1];
  uVar4 = param_1[2];
  uVar1 = param_2[1];
  uVar5 = param_2[2];
  FUN_1020f3324(uVar2,*param_2);
  if (((uVar2 & 1) != 0) && (FUN_1020f3324(uVar3,uVar1), (uVar3 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001020ea7dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FUN_1020f348c(uVar4,uVar5);
    return uVar4;
  }
  return 0;
}



/* Entry: 1020ea76c; end: 1020ea7fb;  */

ulong FUN_1020ea76c(ulong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                   code *param_5,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar2 = *param_1;
  uVar3 = param_1[1];
  uVar4 = param_1[2];
  uVar1 = param_2[1];
  uVar5 = param_2[2];
  (*param_5)(uVar2,*param_2);
  if (((uVar2 & 1) != 0) && ((*param_5)(uVar3,uVar1), (uVar3 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001020ea7dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar4,uVar5);
    return uVar4;
  }
  return 0;
}



/* Entry: 1020ea7fc; end: 1020ea907;  */

void FUN_1020ea7fc(void)

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
    func_0x0001007bbbf8();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112deb828;
  plVar5 = (long *)&UNK_10db354d0;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 1020ea908; end: 1020eaa2b;  */

undefined * FUN_1020ea908(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1020eaa2c);
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
    FUN_1020ea7fc();
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
    func_0x0001007bbbf8(0);
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



/* Entry: 1020eaa2c; end: 1020eab33;  */

undefined * FUN_1020eaa2c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1020eab34);
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
    puVar3 = (undefined *)0x112e585b8;
    func_0x0001000285a8(0x112e585b8,&UNK_10da5c140);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,&UNK_1104cace0);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1020eab34; end: 1020eada3;  */

undefined *
FUN_1020eab34(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1020eac64);
        (*pcVar2)();
      }
      uVar4 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar4 <= (long)param_2) {
        uVar4 = param_2;
      }
    }
  }
  uVar5 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar4 <= (long)uVar5) {
    uVar4 = uVar5;
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar4 != 0) {
    func_0x0001000285a8(param_5,param_6);
    func_0x000107c613fc();
    puVar3 = param_5;
    func_0x000107c610a4();
    puVar6 = puVar3 + -0x11;
    if (0x1f < (long)puVar3) {
      puVar6 = puVar3 + -0x20;
    }
    *(ulong *)(param_5 + 0x10) = uVar5;
    *(long *)(param_5 + 0x18) = ((long)puVar6 >> 4) << 1;
    puVar6 = param_5;
  }
  puVar3 = puVar6 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x0001000285a8(param_7,param_8);
    func_0x000107c6140c(puVar3,puVar1,uVar5,param_7);
  }
  else {
    if (puVar6 != param_4 || puVar1 + uVar5 * 0x10 <= puVar3) {
      func_0x000107c610b8(puVar3,puVar1,uVar5 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar6;
}



/* Entry: 1020eada4; end: 1020eaef3;  */

undefined8
FUN_1020eada4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 auStack_e0 [2];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 auStack_78 [3];
  
  uVar1 = 0;
  auStack_e0[0] = param_3;
  auStack_78[0] = param_2;
  func_0x000107c5fc80(0,param_5);
  puVar2 = PTR___sSayxGSKsMc_11034dcf0;
  func_0x000107c61520(PTR___sSayxGSKsMc_11034dcf0,uVar1);
  puVar3 = auStack_78;
  FUN_102107370(puVar3,uVar1,uVar1,puVar2,puVar2,*(undefined8 *)(param_7 + 8));
  puVar4 = puVar3;
  uVar5 = uVar1;
  FUN_1021031dc();
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(puVar3);
  puStack_a0 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_90 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar1 = 0;
  uStack_d0 = param_4;
  uStack_c8 = param_5;
  uStack_c0 = param_6;
  lStack_b8 = param_7;
  uStack_b0 = param_1;
  puStack_88 = puVar4;
  uStack_80 = uVar5;
  FUN_1021051b8(0,param_5);
  puVar2 = &UNK_10da5d188;
  func_0x000107c61520(&UNK_10da5d188,uVar1);
  func_0x000107c5fc04(auStack_78,&puStack_a0,FUN_1020eb420,auStack_e0,uVar1,&UNK_1104ca5c8,puVar2);
  func_0x000107c6142c(uVar5);
  func_0x000107c6142c(puVar4);
  return auStack_78[0];
}



/* Entry: 1020eaef4; end: 1020eaf03;  */

void FUN_1020eaef4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long unaff_x20;
  ulong uVar13;
  ulong uVar14;
  
  lVar9 = *(long *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar13 = **(ulong **)(unaff_x20 + 0x38);
  uVar14 = *(ulong *)PTR__swift_isaMask_11034f488;
  if (*(long *)(lVar9 + 0x10) != 0) {
    uVar8 = *(ulong *)(lVar9 + 0x28);
    func_0x000107c60688(uVar8,param_1);
    uVar12 = -1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar8 = uVar8 & (uVar12 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar9 + 0x38 + (uVar8 >> 6) * 8) >> (uVar8 & 0x3f) & 1) != 0) {
      do {
        if (*(long *)(*(long *)(lVar9 + 0x30) + uVar8 * 8) == param_1) {
          return;
        }
        uVar8 = uVar8 + 1 & ~uVar12;
      } while ((*(ulong *)(lVar9 + 0x38 + (uVar8 >> 6) * 8) >> (uVar8 & 0x3f) & 1) != 0);
    }
  }
  uVar14 = uVar14 & uVar13;
  uVar1 = *(undefined8 *)(uVar14 + 0xf8);
  uVar4 = *(undefined8 *)(uVar14 + 0x100);
  uVar2 = *(undefined8 *)(uVar14 + 0x108);
  uVar5 = *(undefined8 *)(uVar14 + 0x110);
  lVar9 = param_2;
  FUN_1020ecd0c(param_2,uVar6,uVar10,uVar7,uVar3,uVar1,uVar4,uVar2,uVar5);
  if (lVar9 != 0) {
    uVar10 = 0xff;
    func_0x000107c5fc80(0xff,uVar4);
    lVar11 = 0;
    func_0x0001020fc344(0,uVar1,uVar10,uVar2);
    FUN_1020eada4(param_1,lVar9,*(undefined8 *)(param_2 + *(int *)(lVar11 + 0x2c)),uVar1,uVar4,uVar2
                  ,uVar5);
    func_0x000107c6142c(lVar9);
  }
  return;
}



/* Entry: 1020eaf04; end: 1020eaf23;  */

void FUN_1020eaf04(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1020e945c(param_1,*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 1020eaf24; end: 1020eaf6f;  */

void FUN_1020eaf24(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  FUN_1020ecd80(param_2,uVar1,*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)uVar1;
  return;
}



/* Entry: 1020eaf70; end: 1020eafe3;  */

void FUN_1020eaf70(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1020e950c(param_1,*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 1020eafe4; end: 1020eb003;  */

void FUN_1020eafe4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1020eb004; end: 1020eb01f;  */

void FUN_1020eb004(long param_1,long param_2)

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



/* Entry: 1020eb020; end: 1020eb05b;  */

void FUN_1020eb020(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1020e9b7c(param_1,*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 1020eb05c; end: 1020eb16b;  */

void FUN_1020eb05c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack_40;
  long lStack_38;
  
  lVar4 = *(long *)(param_1 + 0x10);
  lVar1 = param_1;
  FUN_1020eb328();
  lVar2 = lVar4;
  func_0x000107c5fe14(lVar4,&UNK_1104cace0,lVar1);
  if (lVar4 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x20);
    lStack_38 = lVar2;
    do {
      uVar3 = *puVar5;
      func_0x000107c61174(uVar3);
      FUN_1020f3adc(&uStack_40,uVar3);
      func_0x000107c61170(uStack_40);
      lVar4 = lVar4 + -1;
      puVar5 = puVar5 + 1;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 1020eb16c; end: 1020eb2bb;  */

undefined8 FUN_1020eb16c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long lVar7;
  code *pcVar8;
  ulong *unaff_x20;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 auStack_80 [2];
  undefined8 auStack_70 [2];
  
  uVar10 = *(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20;
  uVar5 = *(undefined8 *)(uVar10 + 0xf8);
  auStack_70[0] = *(undefined8 *)(uVar10 + 0x100);
  uVar2 = 0xff;
  auStack_70[1] = param_1;
  func_0x000107c5fc80(0xff);
  uVar11 = *(undefined8 *)(uVar10 + 0x108);
  lVar3 = 0;
  uVar9 = uVar5;
  uVar6 = uVar11;
  func_0x0001020fc344(0,uVar5,uVar2,uVar11);
  lVar7 = *(long *)(lVar3 + -8);
  lVar4 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)auStack_70 + -extraout_x8;
  FUN_1020ec2f0();
  *(undefined8 *)((long)auStack_80 + -extraout_x8) = *(undefined8 *)(uVar10 + 0x110);
  uVar1 = auStack_70[0];
  FUN_1020ed150(lVar12,auStack_70[1],lVar4,uVar9,uVar2,uVar6,uVar5,auStack_70[0],uVar11);
  func_0x000107c6142c(uVar6);
  func_0x000107c6142c(uVar2);
  func_0x000107c6142c(uVar9);
  func_0x000107c6142c(lVar4);
  uVar9 = *(undefined8 *)(lVar12 + *(int *)(lVar3 + 0x2c));
  pcVar8 = *(code **)(lVar7 + 8);
  func_0x000107c61434(uVar9);
  (*pcVar8)(lVar12,lVar3);
  uVar5 = uVar9;
  func_0x000107c5fc74(uVar9,uVar1);
  func_0x000107c6142c(uVar9);
  return uVar5;
}



/* Entry: 1020eb2bc; end: 1020eb2bf;  */

void FUN_1020eb2bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 1020eb2c0; end: 1020eb30b;  */

void FUN_1020eb2c0(long param_1)

{
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_28 = &UNK_10da5c0a8;
  puStack_20 = &UNK_10da5c0c0;
  puStack_18 = &UNK_10da5c0c0;
  func_0x000107c61524(param_1,0,3,&puStack_28,param_1 + 0x118);
  return;
}



/* Entry: 1020eb30c; end: 1020eb327;  */

void FUN_1020eb30c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_11034f380)(param_1,param_2,&DAT_10e6af5b8);
  return;
}



/* Entry: 1020eb328; end: 1020eb39f;  */

void FUN_1020eb328(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e585b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da5c7b8;
  func_0x000107c61520(&UNK_10da5c7b8,&UNK_1104cace0);
  puRam0000000112e585b0 = puVar1;
  return;
}



/* Entry: 1020eb3a0; end: 1020eb41f;  */

undefined8 FUN_1020eb3a0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x0001020eb368();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1020eb420; end: 1020eb43f;  */

void FUN_1020eb420(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1020e8724(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 1020eb440; end: 1020eb483;  */

undefined8 FUN_1020eb440(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x0001020eb368();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1020eb484; end: 1020eb49f;  */

void FUN_1020eb484(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1020e8480(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 1020eb4a0; end: 1020eb4cf;  */

/* WARNING: Possible PIC construction at 0x0001020eb4b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020eb4b8) */

void FUN_1020eb4a0(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*param_1);
  return;
}



/* Entry: 1020eb4d0; end: 1020eb58f;  */

undefined8 * FUN_1020eb4d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[2];
  param_1[2] = uVar2;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 1020eb590; end: 1020eb5db;  */

undefined8 * FUN_1020eb590(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c6142c(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1020eb5dc; end: 1020eb6cb;  */

int FUN_1020eb5dc(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1020eb6cc; end: 1020eb767;  */

long * FUN_1020eb6cc(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    lVar2 = 0;
    func_0x000107c5eff8();
    pcVar4 = *(code **)(*(long *)(lVar2 + -8) + 0x10);
    (*pcVar4)(param_1,param_2,lVar2);
    (*pcVar4)((long)param_1 + (long)*(int *)(param_3 + 0x14),
              (long)param_2 + (long)*(int *)(param_3 + 0x14),lVar2);
  }
  else {
    lVar2 = *param_2;
    *param_1 = lVar2;
    uVar3 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar2 + (uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 1020eb768; end: 1020eb7cf;  */

void FUN_1020eb768(long param_1,long param_2)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar1 + -8) + 8);
  (*UNRECOVERED_JUMPTABLE)(param_1,lVar1);
                    /* WARNING: Could not recover jumptable at 0x0001020eb7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1 + *(int *)(param_2 + 0x14),lVar1);
  return;
}



/* Entry: 1020eb7d0; end: 1020eb98f;  */

long FUN_1020eb7d0(long param_1,long param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  pcVar2 = *(code **)(*(long *)(lVar1 + -8) + 0x10);
  (*pcVar2)(param_1,param_2,lVar1);
  (*pcVar2)(param_1 + *(int *)(param_3 + 0x14),param_2 + *(int *)(param_3 + 0x14),lVar1);
  return param_1;
}



/* Entry: 1020eb990; end: 1020eb9a7;  */

void FUN_1020eb990(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1020eb9a8; end: 1020eba0f;  */

void FUN_1020eb9a8(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = 0x13f;
  func_0x000107c5eff8();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    lStack_28 = lStack_30;
    func_0x000107c6153c(param_1,0x100,2,&lStack_30,param_1 + 0x10);
  }
  return;
}



/* Entry: 1020eba10; end: 1020eba87;  */

void FUN_1020eba10(long param_1,long param_2)

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



/* Entry: 1020eba88; end: 1020ebb33;  */

void FUN_1020eba88(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1020ebb34; end: 1020ebb83;  */

void FUN_1020ebb34(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 1020ebb84; end: 1020ebcfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020ebb84(undefined1 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e58678);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e58668) = 0x3fd3333333333333;
  lVar2 = _DAT_112e58670;
  uVar3 = 0x112e58460;
  func_0x0001000285a8(0x112e58460,&UNK_10da5bfd0);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  *(undefined1 *)(unaff_x20 + _DAT_112e58660) = param_1;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1020ebcfc; end: 1020ebf0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020ebcfc(double param_1,double param_2,ulong param_3)

{
  double *pdVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  undefined1 auStack_58 [24];
  
  lVar2 = _DAT_112e58660;
  func_0x000107c61428(unaff_x20 + _DAT_112e58660,auStack_58,0,0);
  if (*(char *)(unaff_x20 + lVar2) == '\x01') {
    dVar7 = *(double *)(unaff_x20 + _DAT_112e58678);
    func_0x000107c404a0(param_3);
    dVar5 = param_1;
    dVar6 = param_2;
    if (param_1 <= dVar7) goto LAB_1020ebdd0;
  }
  else {
    dVar7 = ((double *)(unaff_x20 + _DAT_112e58678))[1];
    func_0x000107c404a0(param_3);
    dVar5 = param_1;
    dVar6 = param_2;
    if (param_2 <= dVar7) goto LAB_1020ebdd0;
  }
  uVar3 = param_3;
  func_0x0001020ebdfc();
  param_1 = dVar5;
  param_2 = dVar6;
  if ((uVar3 & 1) != 0) {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e58670);
    func_0x000107c6157c(uVar4);
    func_0x000107c404a0(param_3);
    param_1 = dVar5;
    param_2 = dVar6;
    func_0x000107c404f0(param_3);
    dStack_78 = dVar5;
    dStack_70 = dVar6;
    dStack_68 = param_1;
    dStack_60 = param_2;
    func_0x0001002a64a8(&dStack_78);
    func_0x000107c61574(uVar4);
  }
LAB_1020ebdd0:
  func_0x000107c404a0(param_3);
  pdVar1 = (double *)(unaff_x20 + _DAT_112e58678);
  *pdVar1 = param_1;
  pdVar1[1] = param_2;
  return;
}



/* Entry: 1020ebf10; end: 1020ebf6f; -[_TtC21DiffableDataSourceKit19ScrollToEndDetector init] */

void FUN_1020ebf10(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DiffableDataSourceKit.ScrollToEndDetector",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020ebf3c);
  (*pcVar1)();
}



/* Entry: 1020ebf70; end: 1020ebf73;  */

void FUN_1020ebf70(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e58680 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da5c298;
  func_0x000107c61520(&UNK_10da5c298,&UNK_1104ca838);
  puRam0000000112e58680 = puVar1;
  return;
}



/* Entry: 1020ebf74; end: 1020ebfb3;  */

void FUN_1020ebf74(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e58680 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da5c298;
  func_0x000107c61520(&UNK_10da5c298,&UNK_1104ca838);
  puRam0000000112e58680 = puVar1;
  return;
}



/* Entry: 1020ebfb4; end: 1020ebfc3; -[_TtC21DiffableDataSourceKit19ScrollToEndDetector .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020ebfb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e58670));
  return;
}



/* Entry: 1020ebfc4; end: 1020ebfe3;  */

void FUN_1020ebfc4(void)

{
  func_0x000107c61168(&PTR_PTR_11281e168);
  return;
}



/* Entry: 1020ebfe4; end: 1020ec00f;  */

long FUN_1020ebfe4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1020ec010; end: 1020ec1df;  */

int FUN_1020ec010(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 1020ec1e0; end: 1020ec2ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020ec1e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong *unaff_x20;
  ulong uVar8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar5 = _DAT_112e586b0;
  uVar8 = *(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20;
  uVar6 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)((long)unaff_x20 + lVar5) = uVar6;
  lVar5 = _DAT_112e586b8;
  uVar6 = *(undefined8 *)(uVar8 + 0x50);
  uVar3 = *(undefined8 *)(uVar8 + 0x58);
  uVar2 = *(undefined8 *)(uVar8 + 0x60);
  uVar4 = *(undefined8 *)(uVar8 + 0x68);
  uVar7 = 0xff;
  uStack_80 = uVar6;
  uStack_78 = uVar3;
  uStack_70 = uVar2;
  uStack_68 = uVar4;
  func_0x0001020ee960(0xff,&uStack_80);
  func_0x000100087384(0,uVar7);
  uVar7 = 1;
  func_0x000104887274();
  *(undefined8 *)((long)unaff_x20 + lVar5) = uVar7;
  puVar1 = (undefined8 *)((long)unaff_x20 + _DAT_112e586c0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  uStack_80 = uVar6;
  uStack_78 = uVar3;
  uStack_70 = uVar2;
  uStack_68 = uVar4;
  FUN_1020ec750(0,&uStack_80);
  func_0x000107c61154(&stack0xffffffffffffff70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1020ec2f0; end: 1020ec36f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1020ec2f0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e586c0);
  func_0x000107c61428(puVar1,auStack_48,0,0);
  uVar2 = *puVar1;
  uVar4 = puVar1[1];
  uVar3 = puVar1[2];
  uVar5 = puVar1[3];
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar5);
  return uVar2;
}



/* Entry: 1020ec370; end: 1020ec403;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020ec370(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e586c0);
  func_0x000107c61428(puVar1,auStack_68,1,0);
  uVar2 = *puVar1;
  uVar4 = puVar1[1];
  uVar3 = puVar1[2];
  uVar5 = puVar1[3];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  func_0x000107c6142c(uVar5);
  func_0x000107c6142c(uVar3);
  func_0x000107c6142c(uVar4);
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 1020ec404; end: 1020ec443;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1020ec404(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112e586c0;
  func_0x000107c61428(unaff_x20 + _DAT_112e586c0,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_1020ec444;
  return auVar2;
}



/* Entry: 1020ec444; end: 1020ec457;  */

void FUN_1020ec444(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 1020ec458; end: 1020ec59b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020ec458(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong *unaff_x20;
  code *pcVar10;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar8 = *(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20;
  uVar7 = *(undefined8 *)(uVar8 + 0x50);
  uVar1 = *(undefined8 *)(uVar8 + 0x58);
  uVar9 = *(undefined8 *)(uVar8 + 0x60);
  uVar2 = *(undefined8 *)(uVar8 + 0x68);
  uVar3 = 0xff;
  uStack_70 = uVar7;
  uStack_68 = uVar1;
  uStack_60 = uVar9;
  uStack_58 = uVar2;
  func_0x0001020ee960(0xff,&uStack_70);
  plVar4 = (long *)&UNK_10da5c390;
  func_0x000107c61520(&UNK_10da5c390,uVar3);
  func_0x000104884898();
  puVar5 = &UNK_1104ca8b0;
  func_0x000107c613fc(&UNK_1104ca8b0,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  puVar6 = &UNK_1104ca8d8;
  func_0x000107c613fc(&UNK_1104ca8d8,0x38,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar7;
  *(undefined8 *)(puVar6 + 0x18) = uVar1;
  *(undefined8 *)(puVar6 + 0x20) = uVar9;
  *(undefined8 *)(puVar6 + 0x28) = uVar2;
  *(undefined **)(puVar6 + 0x30) = puVar5;
  uVar7 = 0x1020ecaf0;
  puVar5 = puVar6;
  (**(code **)(*plVar4 + 0x60))(0x1020ecaf0);
  func_0x000107c61574(plVar4);
  func_0x000107c61574(puVar6);
  func_0x000107c614f0(uVar7);
  uVar9 = *(undefined8 *)((long)unaff_x20 + _DAT_112e586b0);
  pcVar10 = *(code **)(puVar5 + 0x10);
  func_0x000107c6157c(uVar9);
  (*pcVar10)();
  func_0x000107c615e8(uVar7);
  func_0x000107c61574(uVar9);
  return;
}



/* Entry: 1020ec59c; end: 1020ec74f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020ec59c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong *unaff_x20;
  ulong uVar11;
  undefined8 uVar12;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  uVar11 = *(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20;
  uVar12 = param_1;
  uVar3 = param_2;
  FUN_1020ec2f0();
  lVar5 = *(long *)(uVar11 + 0x50);
  lVar7 = *(long *)(uVar11 + 0x58);
  lVar9 = *(long *)(uVar11 + 0x60);
  lStack_68 = *(long *)(uVar11 + 0x68);
  uVar1 = 0;
  lStack_80 = lVar5;
  lStack_78 = lVar7;
  lStack_70 = lVar9;
  func_0x0001020ee960(0,&lStack_80);
  puVar2 = &UNK_10da5c608;
  func_0x000107c61520(&UNK_10da5c608,uVar1);
  FUN_102106608(&lStack_80,param_1,param_2,uVar1,puVar2);
  func_0x000107c6142c(param_4);
  func_0x000107c6142c(param_3);
  func_0x000107c6142c(uVar3);
  func_0x000107c6142c(uVar12);
  lVar4 = lStack_80;
  lVar6 = lStack_78;
  lVar8 = lStack_70;
  lVar10 = lStack_68;
  if (lStack_80 == 0) {
    uVar12 = 0xff;
    func_0x000107c5fc80(0xff,lVar7);
    uVar3 = 0;
    func_0x000107c61510(0,lVar5,uVar12,0,0);
    lVar4 = 0;
    func_0x000107c5fc6c(0,uVar3);
    FUN_1020ed258();
    lVar6 = lVar5;
    lVar8 = lVar7;
    lVar10 = lVar9;
  }
  FUN_1020ec370();
  uVar12 = *(undefined8 *)((long)unaff_x20 + _DAT_112e586b8);
  FUN_1020ec2f0();
  lStack_80 = lVar4;
  lStack_78 = lVar6;
  lStack_70 = lVar8;
  lStack_68 = lVar10;
  func_0x000107c6157c(uVar12);
  func_0x000100087c34(&lStack_80);
  func_0x000107c6142c(lVar10);
  func_0x000107c6142c(lVar8);
  func_0x000107c6142c(lVar6);
  func_0x000107c6142c(lVar4);
  func_0x000107c61574(uVar12);
  return;
}


