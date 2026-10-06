/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104401254; end: 1044012df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104401254(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113077200) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113077208) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113077210) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113077218) = param_3;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044012e0; end: 10440138f; -[_TtC16SCTopicSelection24SCTopicSelectionServices initWithLazyTopicTrackerCreator:topicCarouselViewProvider:topicSendToDelegateCreator:lazySuggestedTopicsRequester:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044012e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113077200) = param_3;
  *(undefined8 *)(param_1 + _DAT_113077208) = param_4;
  *(undefined8 *)(param_1 + _DAT_113077210) = param_6;
  *(undefined8 *)(param_1 + _DAT_113077218) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_msgSendSuper2(&lStack_50,puVar1);
  return;
}



/* Entry: 104401390; end: 1044013ef; -[_TtC16SCTopicSelection24SCTopicSelectionServices init] */

void FUN_104401390(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCTopicSelection.SCTopicSelectionServices",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044013bc);
  (*pcVar1)();
}



/* Entry: 1044013f0; end: 104401447; -[_TtC16SCTopicSelection24SCTopicSelectionServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044013f0(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113077200));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113077208));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113077210));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113077218));
  return;
}



/* Entry: 104401448; end: 104401647;  */

long FUN_104401448(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104401648; end: 104401653; -[SCOurStorySubtextAndPlaceTag subtext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104401648(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113077248))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113077248);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104401654; end: 10440165f; -[SCOurStorySubtextAndPlaceTag placeTag] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104401654(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113077250))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113077250);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104401660; end: 1044016b7;  */

void FUN_104401660(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1044016b8; end: 1044016bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044016b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113077248);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113077250);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044016c0; end: 104401863; -[SCOurStorySubtextAndPlaceTag initWithSubtext:placeTag:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044016c0(long param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    lVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar2 = param_2;
  }
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_113077248);
  *plVar1 = param_3;
  plVar1[1] = lVar2;
  plVar1 = (long *)(param_1 + _DAT_113077250);
  *plVar1 = param_4;
  plVar1[1] = param_2;
  lStack_50 = param_1;
  lStack_48 = lVar3;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104401864; end: 104401867; -[SCOurStorySubtextAndPlaceTag copyWithZone:] */

void FUN_104401864(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104401868; end: 104401883; -[SCOurStorySubtextAndPlaceTag description] */

void FUN_104401868(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104401884; end: 1044018ff; -[SCOurStorySubtextAndPlaceTag init] */

void FUN_104401884(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCOurStoriesDataModels/SCOurStorySubtextAndPlaceTagWrapper.swift",0x40,2,0x29,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044018cc);
  (*pcVar1)();
}



/* Entry: 104401900; end: 10440193f; -[SCOurStorySubtextAndPlaceTag .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104401900(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113077248 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113077250 + 8))
  ;
  return;
}



/* Entry: 104401940; end: 10440195f;  */

void FUN_104401940(void)

{
  _objc_opt_self(&PTR_PTR_1129af090);
  return;
}



/* Entry: 104401960; end: 104401963;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104401960(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113077248);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113077250);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104401964; end: 104401bff;  */

long FUN_104401964(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104401c00; end: 104401c3b;  */

undefined8 FUN_104401c00(undefined8 param_1,undefined8 param_2)

{
  FUN_1044027a4(param_2,param_1);
  return param_2;
}



/* Entry: 104401c3c; end: 104401cbf;  */

uint FUN_104401c3c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined8 uStack_bf;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  uVar1 = 0;
  uStack_d8 = param_1[0xd];
  uStack_e0 = param_1[0xc];
  uStack_d0 = param_1[0xe];
  uStack_c8 = (undefined1)param_1[0xf];
  uStack_bf = *(undefined8 *)((long)param_1 + 0x81);
  uStack_c7 = (undefined7)*(undefined8 *)((long)param_1 + 0x79);
  uStack_c0 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x79) >> 0x38);
  uStack_118 = param_1[5];
  uStack_120 = param_1[4];
  uStack_108 = param_1[7];
  uStack_110 = param_1[6];
  uStack_f8 = param_1[9];
  uStack_100 = param_1[8];
  uStack_e8 = param_1[0xb];
  uStack_f0 = param_1[10];
  uStack_138 = param_1[1];
  uStack_140 = *param_1;
  uStack_128 = param_1[3];
  uStack_130 = param_1[2];
  uStack_48 = param_2[0xd];
  uStack_50 = param_2[0xc];
  uStack_40 = param_2[0xe];
  uStack_38 = (undefined1)param_2[0xf];
  uStack_2f = *(undefined8 *)((long)param_2 + 0x81);
  uStack_37 = (undefined7)*(undefined8 *)((long)param_2 + 0x79);
  uStack_30 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x79) >> 0x38);
  uStack_88 = param_2[5];
  uStack_90 = param_2[4];
  uStack_78 = param_2[7];
  uStack_80 = param_2[6];
  uStack_68 = param_2[9];
  uStack_70 = param_2[8];
  uStack_58 = param_2[0xb];
  uStack_60 = param_2[10];
  uStack_a8 = param_2[1];
  uStack_b0 = *param_2;
  uStack_98 = param_2[3];
  uStack_a0 = param_2[2];
  FUN_104401cc0(&uStack_140,&uStack_b0);
  return uVar1 & 1;
}



/* Entry: 104401cc0; end: 104401e1f;  */

byte FUN_104401cc0(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  byte bVar4;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  
  uVar1 = *param_1;
  if ((((uVar1 == *param_2 && param_1[1] == param_2[1]) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar1 & 1) != 0)) &&
      ((uVar1 = param_1[2], uVar1 == param_2[2] && param_1[3] == param_2[3] ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar1 & 1) != 0)))) && (param_1[4] == param_2[4])) {
    uStack_58 = param_1[8];
    uStack_60 = param_1[7];
    uStack_48 = param_1[10];
    uStack_50 = param_1[9];
    uStack_38 = param_1[0xc];
    uStack_40 = param_1[0xb];
    uStack_30 = param_1[0xd];
    uStack_68 = param_1[6];
    uStack_70 = param_1[5];
    uStack_a8 = param_2[8];
    uStack_b0 = param_2[7];
    uStack_98 = param_2[10];
    uStack_a0 = param_2[9];
    uStack_88 = param_2[0xc];
    uStack_90 = param_2[0xb];
    uStack_80 = param_2[0xd];
    uStack_b8 = param_2[6];
    uStack_c0 = param_2[5];
    puVar2 = &uStack_70;
    FUN_10440249c(puVar2,&uStack_c0);
    if ((((ulong)puVar2 & 1) != 0) && ((((byte)param_1[0xe] ^ (byte)param_2[0xe]) & 1) == 0)) {
      uVar1 = param_2[0x10];
      if (param_1[0x10] == 0) {
        if (uVar1 == 0) goto LAB_104401de0;
      }
      else if ((uVar1 != 0) &&
              (((uVar3 = param_1[0xf], uVar3 == param_2[0xf] && (param_1[0x10] == uVar1)) ||
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (), (uVar3 & 1) != 0)))) {
LAB_104401de0:
        bVar4 = (byte)param_1[0x11] ^ (byte)param_2[0x11] ^ 1;
        goto LAB_104401d90;
      }
    }
  }
  bVar4 = 0;
LAB_104401d90:
  return bVar4 & 1;
}



/* Entry: 104401e20; end: 104401e83;  */

void FUN_104401e20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  uint uVar1;
  
  uVar1 = (uint)((ulong)param_7 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 0) {
      return;
    }
    _swift_bridgeObjectRetain(param_9);
    _swift_bridgeObjectRetain(param_2);
    _swift_bridgeObjectRetain(param_4);
    param_2 = param_6;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 104401e84; end: 104401ed7;  */

void FUN_104401e84(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  FUN_104401ed8(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60),
                *(undefined8 *)(param_1 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x80));
  return;
}



/* Entry: 104401ed8; end: 104401f33;  */

void FUN_104401ed8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  uint uVar1;
  
  uVar1 = (uint)((ulong)param_7 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 0) {
      return;
    }
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_4);
    _swift_bridgeObjectRelease(param_6);
    param_2 = param_9;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 104401f34; end: 10440214f;  */

undefined8 * FUN_104401f34(undefined8 *param_1,undefined8 *param_2)

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
  
  uVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  uVar5 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar5;
  uVar6 = param_2[5];
  param_1[4] = param_2[4];
  uVar4 = param_2[6];
  uVar7 = param_2[7];
  uVar1 = param_2[8];
  uVar8 = param_2[9];
  uVar2 = param_2[10];
  uVar9 = param_2[0xb];
  uVar3 = param_2[0xc];
  uVar10 = param_2[0xd];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar5);
  FUN_104401e20(uVar6,uVar4,uVar7,uVar1,uVar8,uVar2,uVar9,uVar3,uVar10);
  param_1[5] = uVar6;
  param_1[6] = uVar4;
  param_1[7] = uVar7;
  param_1[8] = uVar1;
  param_1[9] = uVar8;
  param_1[10] = uVar2;
  param_1[0xb] = uVar9;
  param_1[0xc] = uVar3;
  param_1[0xd] = uVar10;
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  uVar4 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = uVar4;
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 104402150; end: 1044021ef;  */

undefined8 * FUN_104402150(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar3 = param_2[1];
  uVar8 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  _swift_bridgeObjectRelease(uVar8);
  uVar3 = param_2[3];
  uVar8 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  _swift_bridgeObjectRelease(uVar8);
  uVar3 = param_1[5];
  uVar4 = param_1[6];
  uVar8 = param_1[7];
  uVar5 = param_1[8];
  uVar1 = param_1[9];
  uVar6 = param_1[10];
  uVar2 = param_1[0xb];
  uVar7 = param_1[0xc];
  uVar9 = param_1[0xd];
  uVar10 = param_2[4];
  uVar12 = param_2[7];
  uVar11 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar10;
  param_1[7] = uVar12;
  param_1[6] = uVar11;
  uVar10 = param_2[8];
  uVar12 = param_2[0xb];
  uVar11 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar10;
  param_1[0xb] = uVar12;
  param_1[10] = uVar11;
  uVar10 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar10;
  FUN_104401ed8(uVar3,uVar4,uVar8,uVar5,uVar1,uVar6,uVar2,uVar7,uVar9);
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  uVar3 = param_2[0x10];
  uVar8 = param_1[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = uVar3;
  _swift_bridgeObjectRelease(uVar8);
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
  return param_1;
}



/* Entry: 1044021f0; end: 1044022ab;  */

int FUN_1044021f0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x89) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1044022ac; end: 104402443;  */

long FUN_1044022ac(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104402444; end: 10440249b;  */

uint FUN_104402444(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_20 = param_2[8];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  FUN_10440249c(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 10440249c; end: 10440273f;  */

undefined8 FUN_10440249c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  undefined1 auVar35 [16];
  
  uVar17 = param_2[1];
  uVar10 = *param_1;
  uVar14 = param_1[1];
  bVar19 = *(byte *)((long)param_1 + 0x37) >> 6;
  if (bVar19 != 0) {
    if (bVar19 != 1) {
      if (-0x4000000000000001 < (long)param_2[6]) {
        return 0;
      }
      if (param_2[6] != 0x8000000000000000) {
        return 0;
      }
      uVar14 = param_2[5];
      uVar10 = param_2[4];
      bVar19 = (byte)param_2[2] | (byte)uVar10;
      bVar20 = *(byte *)((long)param_2 + 0x11) | (byte)(uVar10 >> 8);
      bVar21 = *(byte *)((long)param_2 + 0x12) | (byte)(uVar10 >> 0x10);
      bVar22 = *(byte *)((long)param_2 + 0x13) | (byte)(uVar10 >> 0x18);
      bVar23 = *(byte *)((long)param_2 + 0x14) | (byte)(uVar10 >> 0x20);
      bVar24 = *(byte *)((long)param_2 + 0x15) | (byte)(uVar10 >> 0x28);
      bVar25 = *(byte *)((long)param_2 + 0x16) | (byte)(uVar10 >> 0x30);
      bVar26 = *(byte *)((long)param_2 + 0x17) | (byte)(uVar10 >> 0x38);
      bVar27 = (byte)param_2[3] | (byte)uVar14;
      bVar28 = *(byte *)((long)param_2 + 0x19) | (byte)(uVar14 >> 8);
      bVar29 = *(byte *)((long)param_2 + 0x1a) | (byte)(uVar14 >> 0x10);
      bVar30 = *(byte *)((long)param_2 + 0x1b) | (byte)(uVar14 >> 0x18);
      bVar31 = *(byte *)((long)param_2 + 0x1c) | (byte)(uVar14 >> 0x20);
      bVar32 = *(byte *)((long)param_2 + 0x1d) | (byte)(uVar14 >> 0x28);
      bVar33 = *(byte *)((long)param_2 + 0x1e) | (byte)(uVar14 >> 0x30);
      bVar34 = *(byte *)((long)param_2 + 0x1f) | (byte)(uVar14 >> 0x38);
      auVar35[1] = bVar20;
      auVar35[0] = bVar19;
      auVar35[2] = bVar21;
      auVar35[3] = bVar22;
      auVar35[4] = bVar23;
      auVar35[5] = bVar24;
      auVar35[6] = bVar25;
      auVar35[7] = bVar26;
      auVar35[8] = bVar27;
      auVar35[9] = bVar28;
      auVar35[10] = bVar29;
      auVar35[0xb] = bVar30;
      auVar35[0xc] = bVar31;
      auVar35[0xd] = bVar32;
      auVar35[0xe] = bVar33;
      auVar35[0xf] = bVar34;
      auVar7[1] = bVar20;
      auVar7[0] = bVar19;
      auVar7[2] = bVar21;
      auVar7[3] = bVar22;
      auVar7[4] = bVar23;
      auVar7[5] = bVar24;
      auVar7[6] = bVar25;
      auVar7[7] = bVar26;
      auVar7[8] = bVar27;
      auVar7[9] = bVar28;
      auVar7[10] = bVar29;
      auVar7[0xb] = bVar30;
      auVar7[0xc] = bVar31;
      auVar7[0xd] = bVar32;
      auVar7[0xe] = bVar33;
      auVar7[0xf] = bVar34;
      auVar35 = NEON_ext(auVar35,auVar7,8,1);
      if ((CONCAT17(bVar26 | auVar35[7],
                    CONCAT16(bVar25 | auVar35[6],
                             CONCAT15(bVar24 | auVar35[5],
                                      CONCAT14(bVar23 | auVar35[4],
                                               CONCAT13(bVar22 | auVar35[3],
                                                        CONCAT12(bVar21 | auVar35[2],
                                                                 CONCAT11(bVar20 | auVar35[1],
                                                                          bVar19 | auVar35[0])))))))
           == 0 && param_2[8] == 0) && ((param_2[7] == 0 && *param_2 == 0) && uVar17 == 0)) {
        return 1;
      }
      return 0;
    }
    if (param_2[6] >> 0x3e != 1) {
      return 0;
    }
    if (uVar14 == 0) goto joined_r0x000104402718;
    if (uVar17 == 0) {
      return 0;
    }
    uVar16 = *param_2;
    uVar11 = uVar10;
    uVar15 = uVar14;
    uVar18 = uVar17;
    if ((uVar10 == uVar16) && (uVar14 == uVar17)) {
      return 1;
    }
    goto LAB_104402514;
  }
  if ((*(byte *)((long)param_2 + 0x37) & 0xc0) != 0) {
    return 0;
  }
  uVar12 = param_1[2];
  uVar3 = param_1[3];
  uVar13 = param_1[4];
  uVar4 = param_1[5];
  uVar11 = param_1[7];
  uVar15 = param_1[8];
  uVar8 = param_1[6];
  uVar1 = param_2[2];
  uVar5 = param_2[3];
  uVar2 = param_2[4];
  uVar6 = param_2[5];
  uVar16 = param_2[7];
  uVar18 = param_2[8];
  uVar9 = param_2[6];
  if (uVar14 == 0) {
    if (uVar17 != 0) {
      return 0;
    }
  }
  else {
    if (uVar17 == 0) {
      return 0;
    }
    if (((uVar10 != *param_2) || (uVar14 != uVar17)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar10 & 1) == 0)) {
      return 0;
    }
  }
  if (uVar3 == 0) {
    if (uVar5 != 0) {
      return 0;
    }
  }
  else {
    if (uVar5 == 0) {
      return 0;
    }
    if (((uVar12 != uVar1) || (uVar3 != uVar5)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar12,uVar3,uVar1,uVar5,0), (uVar12 & 1) == 0)) {
      return 0;
    }
  }
  if (uVar4 == 0) {
    if (uVar6 != 0) {
      return 0;
    }
joined_r0x0001044026b0:
    if ((((byte)uVar8 ^ (byte)uVar9) & 1) != 0) {
      return 0;
    }
  }
  else {
    if (uVar6 == 0) {
      return 0;
    }
    if ((uVar13 != uVar2) || (uVar4 != uVar6)) {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar13,uVar4,uVar2,uVar6,0);
      if ((uVar13 & 1) == 0) {
        return 0;
      }
      goto joined_r0x0001044026b0;
    }
    if ((((byte)uVar8 ^ (byte)uVar9) & 1) != 0) {
      return 0;
    }
  }
  uVar17 = uVar18;
  if (uVar15 == 0) {
joined_r0x000104402718:
    if (uVar17 != 0) {
      return 0;
    }
    return 1;
  }
  if (uVar18 == 0) {
    return 0;
  }
  if ((uVar11 == uVar16) && (uVar15 == uVar18)) {
    return 1;
  }
LAB_104402514:
  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
            (uVar11,uVar15,uVar16,uVar18,0);
  if ((uVar11 & 1) == 0) {
    return 0;
  }
  return 1;
}



/* Entry: 104402740; end: 10440276b;  */

long FUN_104402740(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10440276c; end: 1044027a3;  */

void FUN_10440276c(undefined8 *param_1)

{
  FUN_104401ed8(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                param_1[7],param_1[8]);
  return;
}



/* Entry: 1044027a4; end: 1044028ef;  */

undefined8 * FUN_1044027a4(undefined8 *param_1,undefined8 *param_2)

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
  
  uVar1 = *param_2;
  uVar5 = param_2[1];
  uVar2 = param_2[2];
  uVar6 = param_2[3];
  uVar3 = param_2[4];
  uVar7 = param_2[5];
  uVar4 = param_2[6];
  uVar8 = param_2[7];
  uVar9 = param_2[8];
  FUN_104401e20(uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar4,uVar8,uVar9);
  *param_1 = uVar1;
  param_1[1] = uVar5;
  param_1[2] = uVar2;
  param_1[3] = uVar6;
  param_1[4] = uVar3;
  param_1[5] = uVar7;
  param_1[6] = uVar4;
  param_1[7] = uVar8;
  param_1[8] = uVar9;
  return param_1;
}



/* Entry: 1044028f0; end: 10440294f;  */

undefined8 * FUN_1044028f0(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar10 = param_2[8];
  uVar9 = *param_1;
  uVar1 = param_1[1];
  uVar5 = param_1[2];
  uVar2 = param_1[3];
  uVar6 = param_1[4];
  uVar3 = param_1[5];
  uVar7 = param_1[6];
  uVar4 = param_1[7];
  uVar8 = param_1[8];
  uVar11 = *param_2;
  uVar13 = param_2[3];
  uVar12 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar11;
  param_1[3] = uVar13;
  param_1[2] = uVar12;
  uVar11 = param_2[4];
  uVar13 = param_2[7];
  uVar12 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar11;
  param_1[7] = uVar13;
  param_1[6] = uVar12;
  param_1[8] = uVar10;
  FUN_104401ed8(uVar9,uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar4,uVar8);
  return param_1;
}



/* Entry: 104402950; end: 104402a8f;  */

int FUN_104402950(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x12] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = (uint)(*(ulong *)(param_1 + 0xc) >> 1);
  uVar2 = 0xffffffff;
  if (0x80000000 < uVar1) {
    uVar2 = ~uVar1;
  }
  return uVar2 + 1;
}



/* Entry: 104402a90; end: 104402b67;  */

void FUN_104402a90(void)

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



/* Entry: 104402b68; end: 104402b87;  */

void FUN_104402b68(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 104402b88; end: 104402bc7;  */

void FUN_104402b88(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077280 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf9070;
  _swift_getWitnessTable(&UNK_10dcf9070,&UNK_110768ad8);
  puRam0000000113077280 = puVar1;
  return;
}



/* Entry: 104402bc8; end: 104402bd7;  */

undefined1  [16] FUN_104402bc8(void)

{
  return ZEXT816(0x110768ad8);
}



/* Entry: 104402bd8; end: 104402c5b;  */

void FUN_104402bd8(void)

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



/* Entry: 104402c5c; end: 104402c5f;  */

void FUN_104402c5c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077288 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf9130;
  _swift_getWitnessTable(&UNK_10dcf9130,&UNK_110768b50);
  puRam0000000113077288 = puVar1;
  return;
}



/* Entry: 104402c60; end: 104402c9f;  */

void FUN_104402c60(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077288 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf9130;
  _swift_getWitnessTable(&UNK_10dcf9130,&UNK_110768b50);
  puRam0000000113077288 = puVar1;
  return;
}



/* Entry: 104402ca0; end: 104402ca3;  */

void FUN_104402ca0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077290 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf91d0;
  _swift_getWitnessTable(&UNK_10dcf91d0,&UNK_110768b70);
  puRam0000000113077290 = puVar1;
  return;
}



/* Entry: 104402ca4; end: 104402ce3;  */

void FUN_104402ca4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077290 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf91d0;
  _swift_getWitnessTable(&UNK_10dcf91d0,&UNK_110768b70);
  puRam0000000113077290 = puVar1;
  return;
}



/* Entry: 104402ce4; end: 104402d33;  */

undefined1  [16] FUN_104402ce4(void)

{
  return ZEXT816(0x110768b50);
}



/* Entry: 104402d34; end: 104402d7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104402d34(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113077298) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104402d80; end: 104402ddf; -[_TtC17SCCheckInServices17SCCheckInServices init] */

void FUN_104402d80(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCCheckInServices.SCCheckInServices",0x23,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104402dac);
  (*pcVar1)();
}



/* Entry: 104402de0; end: 104402def; -[_TtC17SCCheckInServices17SCCheckInServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104402de0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113077298));
  return;
}



/* Entry: 104402df0; end: 104402dfb; -[SCCheckInActionmojiOption actionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104402df0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130772c8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_1130772c8))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104402dfc; end: 104402e07; -[SCCheckInActionmojiOption nonClusteredStickerId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104402dfc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130772d0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_1130772d0))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104402e08; end: 104402e13; -[SCCheckInActionmojiOption clusteredFacingLeftStickerId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104402e08(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130772d8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_1130772d8))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104402e14; end: 104402e1f; -[SCCheckInActionmojiOption clusteredFacingRightStickerId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104402e14(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130772e0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_1130772e0))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104402e20; end: 104402e67;  */

void FUN_104402e20(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104402e68; end: 104402e77; -[SCCheckInActionmojiOption hasShadow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104402e68(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130772e8);
}



/* Entry: 104402e78; end: 104402f43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104402e78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130772c8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130772d0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130772d8);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130772e0);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  *(undefined1 *)(unaff_x20 + _DAT_1130772e8) = param_9;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104402f44; end: 10440303b; -[SCCheckInActionmojiOption initWithActionId:nonClusteredStickerId:clusteredFacingLeftStickerId:clusteredFacingRightStickerId:hasShadow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104402f44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar3 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar4 = uVar3;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar5 = uVar4;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_1130772c8);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_1130772d0);
  *puVar1 = param_4;
  puVar1[1] = uVar3;
  puVar1 = (undefined8 *)(param_1 + _DAT_1130772d8);
  *puVar1 = param_5;
  puVar1[1] = uVar4;
  puVar1 = (undefined8 *)(param_1 + _DAT_1130772e0);
  *puVar1 = param_6;
  puVar1[1] = uVar5;
  *(undefined1 *)(param_1 + _DAT_1130772e8) = param_7;
  lStack_70 = param_1;
  lStack_68 = lVar2;
  _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10440303c; end: 104403123;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440303c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_90 [8];
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_allocWithZone();
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130772c8);
  puVar1[1] = uStack_38;
  *puVar1 = uStack_40;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130772d0);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130772d8);
  puVar1[1] = uStack_58;
  *puVar1 = uStack_60;
  uStack_68 = param_1[7];
  uStack_70 = param_1[6];
  uVar2 = param_1[6];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130772e0);
  puVar1[1] = param_1[7];
  *puVar1 = uVar2;
  func_0x000100402194(&uStack_40,auStack_80);
  func_0x000100402194(&uStack_50,auStack_80);
  func_0x000100402194(&uStack_60,auStack_80);
  func_0x000100402194(&uStack_70,auStack_80);
  FUN_104403124(param_1);
  *(undefined1 *)(unaff_x20 + _DAT_1130772e8) = *(undefined1 *)(param_1 + 8);
  _objc_msgSendSuper2(auStack_90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104403124; end: 104403157;  */

undefined8 FUN_104403124(undefined8 param_1)

{
  (*(code *)(undefined *)0x104401990)();
  return param_1;
}



/* Entry: 104403158; end: 10440315b; -[SCCheckInActionmojiOption copyWithZone:] */

void FUN_104403158(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10440315c; end: 10440318f; -[SCCheckInActionmojiOption description] */

void FUN_10440315c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
  _swift_bridgeObjectRelease(0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104403190; end: 10440320b; -[SCCheckInActionmojiOption init] */

void FUN_104403190(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCCheckInServices/SCCheckInActionmojiOptionWrapper.swift",0x38,2,0x38,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044031d8);
  (*pcVar1)();
}



/* Entry: 10440320c; end: 104403273; -[SCCheckInActionmojiOption .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10440320c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130772c8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130772d0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130772d8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_1130772e0 + 8))
  ;
  return;
}



/* Entry: 104403274; end: 104403293;  */

void FUN_104403274(void)

{
  _objc_opt_self(&PTR_PTR_1129af220);
  return;
}



/* Entry: 104403294; end: 10440329f; -[SCCheckInOption identifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104403294(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113077318);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113077318))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044032a0; end: 1044032ab; -[SCCheckInOption title] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044032a0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113077320);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113077320))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044032ac; end: 1044032f3;  */

void FUN_1044032ac(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044032f4; end: 104403303; -[SCCheckInOption rank] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044032f4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113077328);
}



/* Entry: 104403304; end: 104403313; -[SCCheckInOption typeAdditions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104403304(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113077330));
  return;
}



/* Entry: 104403314; end: 104403323; -[SCCheckInOption isReportable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104403314(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113077338);
}



/* Entry: 104403324; end: 10440337f; -[SCCheckInOption distanceString] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104403324(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113077340))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113077340);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104403380; end: 10440338f; -[SCCheckInOption isAutoSelected] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104403380(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113077348);
}



/* Entry: 104403390; end: 104403477;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104403390(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113077318);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113077320);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113077328) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113077330) = param_6;
  *(undefined1 *)(unaff_x20 + _DAT_113077338) = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113077340);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  *(undefined1 *)(unaff_x20 + _DAT_113077348) = param_10;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104403478; end: 10440359f; -[SCCheckInOption initWithIdentifier:title:rank:typeAdditions:isReportable:distanceString:isAutoSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104403478(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,long param_8,
                  undefined1 param_9)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lStack_70;
  long lStack_68;
  
  lVar4 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  lVar5 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (param_8 == 0) {
    param_8 = 0;
    lVar6 = 0;
  }
  else {
    lVar6 = lVar5;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_113077318);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_113077320);
  *puVar1 = param_4;
  puVar1[1] = lVar5;
  *(undefined8 *)(param_1 + _DAT_113077328) = param_5;
  *(undefined8 *)(param_1 + _DAT_113077330) = param_6;
  *(undefined1 *)(param_1 + _DAT_113077338) = param_7;
  plVar2 = (long *)(param_1 + _DAT_113077340);
  *plVar2 = param_8;
  plVar2[1] = lVar6;
  *(undefined1 *)(param_1 + _DAT_113077348) = param_9;
  puVar3 = PTR_s_init_1125d9248;
  lStack_70 = param_1;
  lStack_68 = lVar4;
  _objc_retain(param_6);
  _objc_msgSendSuper2(&lStack_70,puVar3);
  return;
}



/* Entry: 1044035a0; end: 1044035cf;  */

void FUN_1044035a0(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1044035d0(param_1);
  return;
}



/* Entry: 1044035d0; end: 1044036fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044035d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _swift_getObjectType();
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113077318);
  puVar1[1] = uStack_38;
  *puVar1 = uStack_40;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113077320);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  *(undefined8 *)(unaff_x20 + _DAT_113077328) = param_1[4];
  uStack_98 = param_1[6];
  uStack_a0 = param_1[5];
  uStack_88 = param_1[8];
  uStack_90 = param_1[7];
  uStack_78 = param_1[10];
  uStack_80 = param_1[9];
  uStack_68 = param_1[0xc];
  uStack_70 = param_1[0xb];
  uStack_60 = param_1[0xd];
  func_0x000100402194(&uStack_40,&uStack_f0);
  func_0x000100402194(&uStack_50,&uStack_f0);
  FUN_104401c00(&uStack_a0,&uStack_f0);
  puVar1 = &uStack_a0;
  FUN_104405584();
  *(undefined8 **)(unaff_x20 + _DAT_113077330) = puVar1;
  *(undefined1 *)(unaff_x20 + _DAT_113077338) = *(undefined1 *)(param_1 + 0xe);
  uStack_e8 = param_1[0x10];
  uStack_f0 = param_1[0xf];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113077340);
  puVar1[1] = uStack_e8;
  *puVar1 = uStack_f0;
  func_0x000104403c7c(&uStack_f0,auStack_100,0x112d35ff8,&UNK_10d900cd0);
  func_0x000104403c48(param_1);
  *(undefined1 *)(unaff_x20 + _DAT_113077348) = *(undefined1 *)(param_1 + 0x11);
  _objc_msgSendSuper2(&stack0xfffffffffffffef0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044036fc; end: 10440372f; -[SCCheckInOption hash] */

undefined8 FUN_1044036fc(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104403730();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104403730; end: 10440386b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104403730(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113077318);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_113077318))[1]);
  uVar1 = uVar2;
  func_0x00010bfde980();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113077320);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_113077320))[1]);
  uVar1 = uVar2;
  func_0x00010bfde980();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113077328));
  FUN_104404a34();
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113077338));
  if (((undefined8 *)(unaff_x20 + _DAT_113077340))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113077340);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113077348));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10440386c; end: 104403a97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10440386c(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  long unaff_x20;
  uint uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  uint uStack_8c;
  long lStack_88;
  undefined8 auStack_80 [3];
  long lStack_68;
  
  lVar10 = unaff_x20;
  _swift_getObjectType();
  func_0x000104403c7c(param_1,auStack_80,0x112d387f8,&UNK_10d902650);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(auStack_80);
  }
  else {
    plVar7 = &lStack_88;
    _swift_dynamicCast(plVar7,auStack_80,PTR___sypN_11034f1a8 + 8,lVar10,6);
    if (((ulong)plVar7 & 1) != 0) {
      lVar10 = *(long *)(unaff_x20 + _DAT_113077318);
      if (lVar10 == *(long *)(lStack_88 + _DAT_113077318) &&
          ((long *)(unaff_x20 + _DAT_113077318))[1] == ((long *)(lStack_88 + _DAT_113077318))[1]) {
        uStack_8c = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uStack_8c = (uint)lVar10;
      }
      lVar10 = *(long *)(unaff_x20 + _DAT_113077320);
      if (lVar10 == *(long *)(lStack_88 + _DAT_113077320) &&
          ((long *)(unaff_x20 + _DAT_113077320))[1] == ((long *)(lStack_88 + _DAT_113077320))[1]) {
        uVar5 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uVar5 = (uint)lVar10;
      }
      lVar15 = *(long *)(unaff_x20 + _DAT_113077328);
      lVar16 = *(long *)(lStack_88 + _DAT_113077328);
      uVar14 = *(undefined8 *)(lStack_88 + _DAT_113077330);
      uVar8 = 0;
      FUN_104405bbc();
      auStack_80[0] = uVar14;
      lStack_68 = uVar8;
      _objc_retain(uVar14);
      uVar6 = 0;
      func_0x000104404c0c();
      func_0x00010006e7f4(auStack_80);
      bVar1 = *(byte *)(unaff_x20 + _DAT_113077338);
      bVar2 = *(byte *)(lStack_88 + _DAT_113077338);
      lVar10 = ((long *)(unaff_x20 + _DAT_113077340))[1];
      lVar11 = ((long *)(lStack_88 + _DAT_113077340))[1];
      uVar13 = (uint)(lVar10 == 0 && lVar11 == 0);
      if ((lVar10 != 0) && (lVar11 != 0)) {
        lVar9 = *(long *)(unaff_x20 + _DAT_113077340);
        if ((lVar9 == *(long *)(lStack_88 + _DAT_113077340)) && (lVar10 == lVar11)) {
          uVar13 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar13 = (uint)lVar9;
        }
      }
      bVar3 = *(byte *)(unaff_x20 + _DAT_113077348);
      bVar4 = *(byte *)(lStack_88 + _DAT_113077348);
      _objc_release(lStack_88);
      uVar12 = 0;
      if (((uStack_8c & uVar5 & uVar6 & (uint)(lVar15 == lVar16)) == 1) &&
         (((bVar1 ^ bVar2) & 1) == 0)) {
        uVar12 = uVar13 & ((bVar3 ^ bVar4) ^ 1);
      }
      goto LAB_10440392c;
    }
  }
  uVar12 = 0;
LAB_10440392c:
  return uVar12 & 1;
}



/* Entry: 104403a98; end: 104403b17; -[SCCheckInOption isEqual:] */

uint FUN_104403a98(undefined8 param_1,undefined8 param_2,long param_3)

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
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_10440386c(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104403b18; end: 104403b1b; -[SCCheckInOption copyWithZone:] */

void FUN_104403b18(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104403b1c; end: 104403b67; -[SCCheckInOption description] */

void FUN_104403b1c(undefined8 param_1)

{
  undefined1 auStack_b0 [144];
  
  _objc_retain();
  FUN_104403cc4(auStack_b0);
  _objc_release(param_1);
  func_0x000104403c48(auStack_b0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104403b68; end: 104403be3; -[SCCheckInOption init] */

void FUN_104403b68(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCCheckInServices/SCCheckInOptionWrapper.swift",0x2e,2,0x5b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104403bb0);
  (*pcVar1)();
}



/* Entry: 104403be4; end: 104403cc3; -[SCCheckInOption .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104403be4(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113077318 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113077320 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113077330));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113077340 + 8))
  ;
  return;
}



/* Entry: 104403cc4; end: 104403dcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104403cc4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_113077318);
  uVar3 = ((undefined8 *)(param_2 + _DAT_113077318))[1];
  uVar2 = *(undefined8 *)(param_2 + _DAT_113077320);
  uVar4 = ((undefined8 *)(param_2 + _DAT_113077320))[1];
  uVar9 = *(undefined8 *)(param_2 + _DAT_113077328);
  uVar8 = *(undefined8 *)(param_2 + _DAT_113077330);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _objc_retain(uVar8);
  func_0x0001044057d4(&uStack_a8);
  uVar5 = *(undefined1 *)(param_2 + _DAT_113077338);
  uVar8 = *(undefined8 *)(param_2 + _DAT_113077340);
  uVar7 = ((undefined8 *)(param_2 + _DAT_113077340))[1];
  uVar6 = *(undefined1 *)(param_2 + _DAT_113077348);
  _swift_bridgeObjectRetain();
  param_1[8] = uStack_90;
  param_1[7] = uStack_98;
  param_1[10] = uStack_80;
  param_1[9] = uStack_88;
  param_1[0xc] = uStack_70;
  param_1[0xb] = uStack_78;
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  param_1[4] = uVar9;
  param_1[0xd] = uStack_68;
  param_1[6] = uStack_a0;
  param_1[5] = uStack_a8;
  *(undefined1 *)(param_1 + 0xe) = uVar5;
  param_1[0xf] = uVar8;
  param_1[0x10] = uVar7;
  *(undefined1 *)(param_1 + 0x11) = uVar6;
  return;
}



/* Entry: 104403dd0; end: 104403def;  */

void FUN_104403dd0(void)

{
  _objc_opt_self(&PTR_PTR_1129af308);
  return;
}



/* Entry: 104403df0; end: 104403dff; -[SCCheckInOptionInteractionSignals source] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104403df0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113077378);
}



/* Entry: 104403e00; end: 104403e4f; -[SCCheckInOptionInteractionSignals visibleOptions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104403e00(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113077380);
  FUN_104403dd0(0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104403e50; end: 104403e5f; -[SCCheckInOptionInteractionSignals chosenOptionIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104403e50(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113077388);
}



/* Entry: 104403e60; end: 104403e6f; -[SCCheckInOptionInteractionSignals tapCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104403e60(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113077390);
}



/* Entry: 104403e70; end: 104403efb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104403e70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113077378) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113077380) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113077388) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113077390) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104403efc; end: 104403ff7; -[SCCheckInOptionInteractionSignals initWithSource:visibleOptions:chosenOptionIndex:tapCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104403efc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_1;
  _swift_getObjectType();
  uVar2 = 0;
  FUN_104403dd0(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_4,uVar2);
  *(undefined8 *)(param_1 + _DAT_113077378) = param_3;
  *(undefined8 *)(param_1 + _DAT_113077380) = param_4;
  *(undefined8 *)(param_1 + _DAT_113077388) = param_5;
  *(undefined8 *)(param_1 + _DAT_113077390) = param_6;
  lStack_50 = param_1;
  lStack_48 = lVar1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104403ff8; end: 10440429f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104403ff8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long unaff_x20;
  undefined *puVar9;
  long lVar10;
  undefined1 auStack_210 [16];
  long lStack_200;
  long lStack_1f8;
  undefined1 auStack_1f0 [144];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined1 uStack_d8;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _DAT_113077378) = param_1;
  lVar10 = *(long *)(param_2 + 0x10);
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar10 != 0) {
    puStack_c8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    _swift_bridgeObjectRetain(param_2);
    FUN_104404374(0,lVar10,0);
    puVar9 = puStack_c8;
    lVar4 = 0;
    FUN_104403dd0();
    lVar8 = 0x20;
    while( true ) {
      lVar10 = lVar10 + -1;
      puVar6 = (undefined8 *)(param_2 + lVar8);
      uStack_f8 = puVar6[0xd];
      uStack_100 = puVar6[0xc];
      uStack_f0 = puVar6[0xe];
      uStack_e8 = (undefined1)puVar6[0xf];
      uStack_df = (undefined7)*(undefined8 *)((long)puVar6 + 0x81);
      uStack_d8 = (undefined1)((ulong)*(undefined8 *)((long)puVar6 + 0x81) >> 0x38);
      uStack_e7 = (undefined7)*(undefined8 *)((long)puVar6 + 0x79);
      uStack_e0 = (undefined1)((ulong)*(undefined8 *)((long)puVar6 + 0x79) >> 0x38);
      uStack_138 = puVar6[5];
      uStack_140 = puVar6[4];
      uStack_128 = puVar6[7];
      uStack_130 = puVar6[6];
      uStack_118 = puVar6[9];
      uStack_120 = puVar6[8];
      uStack_108 = puVar6[0xb];
      uStack_110 = puVar6[10];
      uStack_158 = puVar6[1];
      uStack_160 = *puVar6;
      uStack_148 = puVar6[3];
      uStack_150 = puVar6[2];
      lVar5 = lVar4;
      _objc_allocWithZone();
      uVar3 = uStack_148;
      uVar2 = uStack_158;
      puVar6 = (undefined8 *)(lVar5 + _DAT_113077318);
      *puVar6 = uStack_160;
      puVar6[1] = uStack_158;
      puVar6 = (undefined8 *)(lVar5 + _DAT_113077320);
      *puVar6 = uStack_150;
      puVar6[1] = uStack_148;
      *(undefined8 *)(lVar5 + _DAT_113077328) = uStack_140;
      uStack_80 = uStack_f8;
      uStack_98 = uStack_110;
      uStack_a0 = uStack_118;
      uStack_88 = uStack_100;
      uStack_90 = uStack_108;
      uStack_b8 = uStack_130;
      uStack_c0 = uStack_138;
      uStack_a8 = uStack_120;
      uStack_b0 = uStack_128;
      FUN_10440464c(&uStack_160,auStack_1f0);
      _swift_bridgeObjectRetain(uVar2);
      _swift_bridgeObjectRetain(uVar3);
      FUN_104401c00(&uStack_138,auStack_1f0);
      puVar6 = &uStack_c0;
      FUN_104405584();
      *(undefined8 **)(lVar5 + _DAT_113077330) = puVar6;
      *(undefined1 *)(lVar5 + _DAT_113077338) = (undefined1)uStack_f0;
      puVar6 = (undefined8 *)(lVar5 + _DAT_113077340);
      puVar6[1] = CONCAT71(uStack_df,uStack_e0);
      *puVar6 = CONCAT71(uStack_e7,uStack_e8);
      _swift_bridgeObjectRetain(CONCAT71(uStack_df,uStack_e0));
      func_0x000104403c48(&uStack_160);
      *(undefined1 *)(lVar5 + _DAT_113077348) = uStack_d8;
      plVar7 = &lStack_200;
      lStack_200 = lVar5;
      lStack_1f8 = lVar4;
      _objc_msgSendSuper2(plVar7,PTR_s_init_1125d9248);
      uVar1 = *(ulong *)(puVar9 + 0x10);
      puStack_c8 = puVar9;
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar1) {
        FUN_104404374(1 < *(ulong *)(puVar9 + 0x18),uVar1 + 1,1);
      }
      puVar9 = puStack_c8;
      *(ulong *)(puStack_c8 + 0x10) = uVar1 + 1;
      *(long **)(puStack_c8 + uVar1 * 8 + 0x20) = plVar7;
      if (lVar10 == 0) break;
      lVar8 = lVar8 + 0x90;
    }
    _swift_bridgeObjectRelease(param_2);
  }
  *(undefined **)(unaff_x20 + _DAT_113077380) = puVar9;
  *(undefined8 *)(unaff_x20 + _DAT_113077388) = param_3;
  _swift_bridgeObjectRelease(param_2);
  *(undefined8 *)(unaff_x20 + _DAT_113077390) = param_4;
  _objc_msgSendSuper2(auStack_210,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044042a0; end: 1044042a3; -[SCCheckInOptionInteractionSignals copyWithZone:] */

void FUN_1044042a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044042a4; end: 1044042e7; -[SCCheckInOptionInteractionSignals description] */

void FUN_1044042a4(undefined8 param_1,undefined8 param_2)

{
  _objc_retain();
  FUN_104404688();
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044042e8; end: 104404363; -[SCCheckInOptionInteractionSignals init] */

void FUN_1044042e8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCCheckInServices/SCCheckInOptionInteractionSignalsWrapper.swift",0x40,2,0x34,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104404330);
  (*pcVar1)();
}



/* Entry: 104404364; end: 104404373; -[SCCheckInOptionInteractionSignals .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104404364(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113077380));
  return;
}



/* Entry: 104404374; end: 1044043ab;  */

void FUN_104404374(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1044043ac();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1044043ac; end: 1044044cf;  */

undefined * FUN_1044043ac(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1044044d0);
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
    FUN_1044045f0();
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
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
    FUN_104403dd0(0);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Entry: 1044044d0; end: 1044045ef;  */

undefined * FUN_1044044d0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1044045f0);
        (*pcVar1)();
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
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar4 != 0) {
    puVar2 = (undefined *)0x1130773c0;
    func_0x0001000285a8(0x1130773c0,&UNK_10dcf9338);
    _swift_allocObject();
    puVar3 = puVar2;
    _malloc_size();
    *(ulong *)(puVar2 + 0x10) = uVar5;
    *(long *)(puVar2 + 0x18) = ((long)(puVar3 + -0x20) / 0x90) * 2;
  }
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar2 + 0x20,param_4 + 0x20,uVar5,&UNK_110768960);
  }
  else {
    if (puVar2 != param_4 || param_4 + 0x20 + uVar5 * 0x90 <= puVar2 + 0x20) {
      _memmove();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar2;
}



/* Entry: 1044045f0; end: 10440464b;  */

void FUN_1044045f0(void)

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
    FUN_104403dd0();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x1130773c8;
  plVar5 = (long *)&UNK_10dcf9340;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 10440464c; end: 104404687;  */

undefined8 FUN_10440464c(undefined8 param_1,undefined8 param_2)

{
  FUN_104401f34(param_2,param_1);
  return param_2;
}


