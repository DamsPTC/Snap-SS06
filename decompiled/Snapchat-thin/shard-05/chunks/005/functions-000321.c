/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103e44f20; end: 103e4505b;  */

uint FUN_103e44f20(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  uVar7 = 0;
  uVar8 = *param_1;
  uStack_c8 = param_1[1];
  uVar2 = param_1[2];
  uVar1 = param_1[3];
  uVar3 = param_1[4];
  if ((long)param_1[5] < 0) {
    if ((long)param_2[5] < 0) {
      uVar9 = param_2[3];
      uVar5 = param_2[4];
      uVar6 = param_2[2];
      cVar4 = *(char *)((long)param_2 + 0x14);
      if (((uVar8 == *param_2) && (uStack_c8 == param_2[1])) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar8,uStack_c8,*param_2,param_2[1],0), (uVar8 & 1) != 0)) {
        if ((uVar2 & 0xff00000000) == 0x100000000) {
          if (cVar4 == '\x01') {
LAB_103e4502c:
            if ((uVar3 & 0xff) == 1) {
              if ((char)uVar5 == '\x01') {
LAB_103e45054:
                uVar7 = 1;
                goto LAB_103e44fac;
              }
            }
            else if (((char)uVar5 != '\x01') && (uVar1 == uVar9)) goto LAB_103e45054;
          }
        }
        else if ((cVar4 != '\x01') && ((int)uVar2 == (int)uVar6)) goto LAB_103e4502c;
      }
    }
  }
  else {
    uStack_68 = param_2[5];
    if (-1 < (long)uStack_68) {
      uStack_a0 = param_1[6];
      uStack_a8 = param_1[5];
      uStack_98 = param_1[7];
      uStack_70 = param_2[4];
      uStack_88 = param_2[1];
      uStack_90 = *param_2;
      uStack_78 = param_2[3];
      uStack_80 = param_2[2];
      uStack_58 = param_2[7];
      uStack_60 = param_2[6];
      uStack_d0 = uVar8;
      uStack_c0 = uVar2;
      uStack_b8 = uVar1;
      uStack_b0 = uVar3;
      FUN_103e4478c(&uStack_d0,&uStack_90);
      goto LAB_103e44fac;
    }
  }
  uVar7 = 0;
LAB_103e44fac:
  return uVar7 & 1;
}



/* Entry: 103e4505c; end: 103e45087;  */

long FUN_103e4505c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103e45088; end: 103e4509f;  */

void FUN_103e45088(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1[5];
  uVar2 = param_1[7];
  _swift_bridgeObjectRelease
            (*param_1,param_1[1],param_1[1],param_1[2],param_1[3],param_1[4],lVar1,param_1[6]);
  if (-1 < lVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
    return;
  }
  return;
}



/* Entry: 103e450a0; end: 103e451bb;  */

undefined8 * FUN_103e450a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = *param_2;
  uVar5 = param_2[1];
  uVar2 = param_2[2];
  uVar6 = param_2[3];
  uVar3 = param_2[4];
  uVar7 = param_2[5];
  uVar4 = param_2[6];
  uVar8 = param_2[7];
  func_0x000103e44088(uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar4,uVar8);
  *param_1 = uVar1;
  param_1[1] = uVar5;
  param_1[2] = uVar2;
  param_1[3] = uVar6;
  param_1[4] = uVar3;
  param_1[5] = uVar7;
  param_1[6] = uVar4;
  param_1[7] = uVar8;
  return param_1;
}



/* Entry: 103e451bc; end: 103e45207;  */

undefined8 * FUN_103e451bc(undefined8 *param_1,undefined8 *param_2)

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
  
  uVar7 = *param_1;
  uVar1 = param_1[1];
  uVar4 = param_1[2];
  uVar2 = param_1[3];
  uVar5 = param_1[4];
  uVar3 = param_1[5];
  uVar6 = param_1[6];
  uVar8 = param_1[7];
  uVar9 = *param_2;
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  param_1[3] = uVar11;
  param_1[2] = uVar10;
  uVar9 = param_2[4];
  uVar11 = param_2[7];
  uVar10 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar9;
  param_1[7] = uVar11;
  param_1[6] = uVar10;
  func_0x000103e44134(uVar7,uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar8);
  return param_1;
}



/* Entry: 103e45208; end: 103e452f7;  */

int FUN_103e45208(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = (uint)(*(ulong *)(param_1 + 10) >> 1);
  uVar2 = 0xffffffff;
  if (0x80000000 < uVar1) {
    uVar2 = ~uVar1;
  }
  return uVar2 + 1;
}



/* Entry: 103e452f8; end: 103e45307; -[_TtC18UrlPreviewServices18UrlPreviewServices composerUrlPreviewProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e452f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11301afa0));
  return;
}



/* Entry: 103e45308; end: 103e4536b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e45308(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11301af98) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11301afa0) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e4536c; end: 103e453cb; -[_TtC18UrlPreviewServices18UrlPreviewServices init] */

void FUN_103e4536c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("UrlPreviewServices.UrlPreviewServices",0x25,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e45398);
  (*pcVar1)();
}



/* Entry: 103e453cc; end: 103e45403; -[_TtC18UrlPreviewServices18UrlPreviewServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e453cc(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11301af98));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11301afa0));
  return;
}



/* Entry: 103e45404; end: 103e4540f; -[SCUrlPreviewContent title] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e45404(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11301afd0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11301afd0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103e45410; end: 103e4541b; -[SCUrlPreviewContent subtitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e45410(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11301afd8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11301afd8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103e4541c; end: 103e45427; -[SCUrlPreviewContent urlString] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e4541c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11301afe0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11301afe0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103e45428; end: 103e45433; -[SCUrlPreviewContent urlForTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e45428(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11301afe8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11301afe8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103e45434; end: 103e4543f; -[SCUrlPreviewContent thumbnailUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e45434(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11301aff0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11301aff0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103e45440; end: 103e4544b; -[SCUrlPreviewContent faviconUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e45440(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11301aff8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11301aff8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103e4544c; end: 103e454a3;  */

void FUN_103e4544c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103e454a4; end: 103e454ff; -[SCUrlPreviewContent accessoryLinks] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e454a4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11301b000);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_103e48034(0);
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 103e45500; end: 103e4550f; -[SCUrlPreviewContent isSpam] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103e45500(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11301b008);
}



/* Entry: 103e45510; end: 103e4551f; -[SCUrlPreviewContent originStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e45510(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11301b010);
}



/* Entry: 103e45520; end: 103e4552f; -[SCUrlPreviewContent expirationTimeMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e45520(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11301b018);
}



/* Entry: 103e45530; end: 103e4553f; -[SCUrlPreviewContent richPreviewContent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e45530(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11301b020));
  return;
}



/* Entry: 103e45540; end: 103e45807;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e45540(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined1 param_14,undefined4 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11301afd0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11301afd8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11301afe0);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11301afe8);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11301aff0);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11301aff8);
  *puVar1 = param_11;
  puVar1[1] = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_11301b000) = param_13;
  *(undefined1 *)(unaff_x20 + _DAT_11301b008) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_11301b010) = param_16;
  *(undefined8 *)(unaff_x20 + _DAT_11301b018) = param_17;
  *(undefined8 *)(unaff_x20 + _DAT_11301b020) = param_18;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e45808; end: 103e459bf; -[SCUrlPreviewContent initWithTitle:subtitle:urlString:urlForTap:thumbnailUrl:faviconUrl:accessoryLinks:isSpam:originStatus:expirationTimeMillis:richPreviewContent:] */

void FUN_103e45808(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9,undefined1 param_10)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if (param_3 == 0) {
    uStack_80 = 0;
    uStack_78 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_80 = param_2;
    uStack_78 = param_3;
  }
  if (param_4 == 0) {
    uStack_90 = 0;
    uStack_88 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_90 = param_2;
    uStack_88 = param_4;
  }
  if (param_5 == 0) {
    uStack_a0 = 0;
    uStack_98 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_a0 = param_2;
    uStack_98 = param_5;
  }
  lVar2 = param_6;
  _objc_retain();
  lVar3 = param_7;
  _objc_retain();
  lVar4 = param_8;
  _objc_retain();
  lVar5 = param_9;
  _objc_retain();
  _objc_retain();
  if (lVar2 == 0) {
    uStack_b0 = 0;
    uStack_a8 = 0;
    uVar6 = param_2;
    param_2 = uStack_b0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar6 = param_2;
    _objc_release(lVar2);
    uStack_a8 = param_6;
  }
  if (lVar3 == 0) {
    param_7 = 0;
    uVar1 = 0;
    uVar7 = uVar6;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar7 = uVar6;
    _objc_release(lVar3);
    uVar1 = uVar6;
  }
  if (lVar4 == 0) {
    param_8 = 0;
    uVar7 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar4);
  }
  if (lVar5 == 0) {
    param_9 = 0;
  }
  else {
    uVar6 = 0;
    FUN_103e48034(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_9,uVar6);
    _objc_release(lVar5);
  }
  func_0x000103e456a4(uStack_78,uStack_80,uStack_88,uStack_90,uStack_98,uStack_a0,uStack_a8,param_2,
                      param_7,uVar1,param_8,uVar7,param_9,param_10);
  return;
}



/* Entry: 103e459c0; end: 103e459ef;  */

void FUN_103e459c0(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_103e459f0(param_1);
  return;
}



/* Entry: 103e459f0; end: 103e45e53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e459f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long unaff_x20;
  undefined **ppuVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long lStack_1b0;
  long lStack_1a8;
  undefined1 auStack_1a0 [64];
  undefined1 auStack_160 [16];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
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
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _swift_getObjectType();
  uStack_b8 = param_1[1];
  uStack_c0 = *param_1;
  uStack_c8 = param_1[3];
  uStack_d0 = param_1[2];
  puVar15 = (undefined8 *)(unaff_x20 + _DAT_11301afd0);
  puVar15[1] = uStack_b8;
  *puVar15 = uStack_c0;
  puVar15 = (undefined8 *)(unaff_x20 + _DAT_11301afd8);
  puVar15[1] = uStack_c8;
  *puVar15 = uStack_d0;
  uStack_d8 = param_1[5];
  uStack_e0 = param_1[4];
  uStack_e8 = param_1[7];
  uStack_f0 = param_1[6];
  puVar15 = (undefined8 *)(unaff_x20 + _DAT_11301afe0);
  puVar15[1] = uStack_d8;
  *puVar15 = uStack_e0;
  uVar16 = param_1[6];
  uStack_f8 = param_1[9];
  uStack_100 = param_1[8];
  puVar15 = (undefined8 *)(unaff_x20 + _DAT_11301afe8);
  puVar15[1] = param_1[7];
  *puVar15 = uVar16;
  uVar16 = param_1[8];
  uStack_108 = param_1[0xb];
  uStack_110 = param_1[10];
  puVar15 = (undefined8 *)(unaff_x20 + _DAT_11301aff0);
  puVar15[1] = param_1[9];
  *puVar15 = uVar16;
  uVar16 = param_1[10];
  puVar15 = (undefined8 *)(unaff_x20 + _DAT_11301aff8);
  puVar15[1] = param_1[0xb];
  *puVar15 = uVar16;
  lVar11 = param_1[0xc];
  if (lVar11 == 0) {
    FUN_103e46f4c(&uStack_c0,&puStack_b0,0x112d35ff8,&UNK_10d900cd0);
    FUN_103e46f4c(&uStack_d0,&puStack_b0,0x112d35ff8,&UNK_10d900cd0);
    FUN_103e46f4c(&uStack_e0,&puStack_b0,0x112d35ff8,&UNK_10d900cd0);
    FUN_103e46f4c(&uStack_f0,&puStack_b0,0x112d35ff8,&UNK_10d900cd0);
    FUN_103e46f4c(&uStack_100,&puStack_b0,0x112d35ff8,&UNK_10d900cd0);
    FUN_103e46f4c(&uStack_110,&puStack_b0,0x112d35ff8,&UNK_10d900cd0);
    puVar13 = (undefined *)0x0;
  }
  else {
    lVar14 = *(long *)(lVar11 + 0x10);
    if (lVar14 == 0) {
      FUN_103e46f4c(&uStack_c0,&puStack_b0,0x112d35ff8,&UNK_10d900cd0);
      FUN_103e46f4c(&uStack_d0,&puStack_b0,0x112d35ff8,&UNK_10d900cd0);
      FUN_103e46f4c(&uStack_e0,&puStack_b0,0x112d35ff8,&UNK_10d900cd0);
      FUN_103e46f4c(&uStack_f0,&puStack_b0,0x112d35ff8,&UNK_10d900cd0);
      FUN_103e46f4c(&uStack_100,&puStack_b0,0x112d35ff8,&UNK_10d900cd0);
      FUN_103e46f4c(&uStack_110,&puStack_b0,0x112d35ff8,&UNK_10d900cd0);
      puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      FUN_103e46f4c(&uStack_c0,&puStack_b0,0x112d35ff8,&UNK_10d900cd0);
      FUN_103e46f4c(&uStack_d0,&puStack_b0,0x112d35ff8,&UNK_10d900cd0);
      FUN_103e46f4c(&uStack_e0,&puStack_b0,0x112d35ff8,&UNK_10d900cd0);
      FUN_103e46f4c(&uStack_f0,&puStack_b0,0x112d35ff8,&UNK_10d900cd0);
      FUN_103e46f4c(&uStack_100,&puStack_b0,0x112d35ff8,&UNK_10d900cd0);
      FUN_103e46f4c(&uStack_110,&puStack_b0,0x112d35ff8,&UNK_10d900cd0);
      puStack_b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_103e46c78(0,lVar14,0);
      puVar13 = puStack_b0;
      lVar9 = 0;
      FUN_103e48034();
      puVar15 = (undefined8 *)(lVar11 + 0x48);
      do {
        uVar16 = puVar15[-5];
        uVar5 = puVar15[-4];
        uVar2 = puVar15[-3];
        uVar6 = puVar15[-2];
        uVar3 = puVar15[-1];
        uVar7 = *puVar15;
        lVar11 = lVar9;
        _objc_allocWithZone();
        puVar1 = (undefined8 *)(lVar11 + _DAT_11301b060);
        *puVar1 = uVar16;
        puVar1[1] = uVar5;
        puVar1 = (undefined8 *)(lVar11 + _DAT_11301b068);
        *puVar1 = uVar2;
        puVar1[1] = uVar6;
        puVar1 = (undefined8 *)(lVar11 + _DAT_11301b070);
        *puVar1 = uVar3;
        puVar1[1] = uVar7;
        puVar8 = PTR_s_init_1125d9248;
        lStack_1b0 = lVar11;
        lStack_1a8 = lVar9;
        _swift_bridgeObjectRetain(uVar5);
        _swift_bridgeObjectRetain(uVar6);
        _swift_bridgeObjectRetain(uVar7);
        plVar10 = &lStack_1b0;
        _objc_msgSendSuper2(plVar10,puVar8);
        uVar4 = *(ulong *)(puVar13 + 0x10);
        puStack_b0 = puVar13;
        if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar4) {
          FUN_103e46c78(1 < *(ulong *)(puVar13 + 0x18),uVar4 + 1,1);
        }
        puVar15 = puVar15 + 6;
        *(ulong *)(puStack_b0 + 0x10) = uVar4 + 1;
        *(long **)(puStack_b0 + uVar4 * 8 + 0x20) = plVar10;
        lVar14 = lVar14 + -1;
        puVar13 = puStack_b0;
      } while (lVar14 != 0);
    }
  }
  *(undefined **)(unaff_x20 + _DAT_11301b000) = puVar13;
  *(undefined1 *)(unaff_x20 + _DAT_11301b008) = *(undefined1 *)(param_1 + 0xd);
  uVar16 = param_1[0xf];
  *(undefined8 *)(unaff_x20 + _DAT_11301b010) = param_1[0xe];
  *(undefined8 *)(unaff_x20 + _DAT_11301b018) = uVar16;
  uStack_148 = param_1[0x11];
  uStack_150 = param_1[0x10];
  uStack_138 = param_1[0x13];
  uStack_140 = param_1[0x12];
  uStack_128 = param_1[0x15];
  uStack_130 = param_1[0x14];
  uStack_118 = param_1[0x17];
  uStack_120 = param_1[0x16];
  if (uStack_128 >> 1 == 0xffffffff) {
    FUN_103e45e54(param_1);
    ppuVar12 = (undefined **)0x0;
  }
  else {
    uStack_a8 = param_1[0x11];
    puStack_b0 = (undefined *)param_1[0x10];
    uStack_98 = param_1[0x13];
    uStack_a0 = param_1[0x12];
    uStack_88 = param_1[0x15];
    uStack_90 = param_1[0x14];
    uStack_78 = param_1[0x17];
    uStack_80 = param_1[0x16];
    FUN_103e46f4c(&uStack_150,auStack_1a0,0x11301af80,&UNK_10dc9e8f0);
    ppuVar12 = &puStack_b0;
    FUN_103e4a3e0();
    FUN_103e45e54(param_1);
  }
  *(undefined ***)(unaff_x20 + _DAT_11301b020) = ppuVar12;
  _objc_msgSendSuper2(auStack_160,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e45e54; end: 103e45e87;  */

undefined8 FUN_103e45e54(undefined8 param_1)

{
  (*(code *)(undefined *)0x103e440b4)();
  return param_1;
}



/* Entry: 103e45e88; end: 103e45ebb; -[SCUrlPreviewContent hash] */

undefined8 FUN_103e45e88(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103e45ebc();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 103e45ebc; end: 103e46157;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e45ebc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  if (((undefined8 *)(unaff_x20 + _DAT_11301afd0))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11301afd0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x000107c44c3c();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_11301afd8))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11301afd8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x000107c44c3c();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_11301afe0))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11301afe0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x000107c44c3c();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_11301afe8))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11301afe8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x000107c44c3c();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_11301aff0))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11301aff0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x000107c44c3c();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_11301aff8))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11301aff8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x000107c44c3c();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  lVar3 = *(long *)(unaff_x20 + _DAT_11301b000);
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    uVar2 = 0;
    FUN_103e48034(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar3,uVar2);
    lVar4 = lVar3;
    func_0x000107c44c3c();
    _objc_release(lVar3);
  }
  __ss6HasherV8_combineyySuF(lVar4);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11301b008));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11301b010));
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11301b018);
  __ss6HasherV8_combineyys6UInt64VF(uVar2);
  if (*(long *)(unaff_x20 + _DAT_11301b020) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_103e49d84();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 103e46158; end: 103e4657b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103e46158(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long unaff_x20;
  long lVar16;
  uint uVar17;
  uint uStack_90;
  uint uStack_8c;
  long lStack_88;
  long alStack_80 [4];
  
  lVar14 = unaff_x20;
  _swift_getObjectType();
  FUN_103e46f4c(param_1,alStack_80,0x112d387f8,&UNK_10d902650);
  if (alStack_80[3] == 0) {
    func_0x00010006e7f4(alStack_80);
  }
  else {
    plVar11 = &lStack_88;
    _swift_dynamicCast(plVar11,alStack_80,PTR___sypN_11034f1a8 + 8,lVar14,6);
    if (((ulong)plVar11 & 1) != 0) {
      lVar14 = ((long *)(unaff_x20 + _DAT_11301afd0))[1];
      lVar15 = ((long *)(lStack_88 + _DAT_11301afd0))[1];
      if (lVar14 == 0 || lVar15 == 0) {
        uStack_8c = (uint)(lVar14 == 0 && lVar15 == 0);
      }
      else {
        lVar12 = *(long *)(unaff_x20 + _DAT_11301afd0);
        if (lVar12 == *(long *)(lStack_88 + _DAT_11301afd0) && lVar14 == lVar15) {
          uStack_8c = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uStack_8c = (uint)lVar12;
        }
      }
      lVar14 = ((long *)(unaff_x20 + _DAT_11301afd8))[1];
      lVar15 = ((long *)(lStack_88 + _DAT_11301afd8))[1];
      if (lVar14 == 0 || lVar15 == 0) {
        uStack_90 = (uint)(lVar14 == 0 && lVar15 == 0);
      }
      else {
        lVar12 = *(long *)(unaff_x20 + _DAT_11301afd8);
        if (lVar12 == *(long *)(lStack_88 + _DAT_11301afd8) && lVar14 == lVar15) {
          uStack_90 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uStack_90 = (uint)lVar12;
        }
      }
      lVar14 = ((long *)(unaff_x20 + _DAT_11301afe0))[1];
      lVar15 = ((long *)(lStack_88 + _DAT_11301afe0))[1];
      uVar6 = (uint)(lVar14 == 0 && lVar15 == 0);
      if ((lVar14 != 0) && (lVar15 != 0)) {
        lVar12 = *(long *)(unaff_x20 + _DAT_11301afe0);
        if ((lVar12 == *(long *)(lStack_88 + _DAT_11301afe0)) && (lVar14 == lVar15)) {
          uVar6 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar6 = (uint)lVar12;
        }
      }
      lVar14 = ((long *)(unaff_x20 + _DAT_11301afe8))[1];
      lVar15 = ((long *)(lStack_88 + _DAT_11301afe8))[1];
      uVar7 = (uint)(lVar14 == 0 && lVar15 == 0);
      if ((lVar14 != 0) && (lVar15 != 0)) {
        lVar12 = *(long *)(unaff_x20 + _DAT_11301afe8);
        if ((lVar12 == *(long *)(lStack_88 + _DAT_11301afe8)) && (lVar14 == lVar15)) {
          uVar7 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar7 = (uint)lVar12;
        }
      }
      lVar14 = ((long *)(unaff_x20 + _DAT_11301aff0))[1];
      lVar15 = ((long *)(lStack_88 + _DAT_11301aff0))[1];
      uVar8 = (uint)(lVar14 == 0 && lVar15 == 0);
      if ((lVar14 != 0) && (lVar15 != 0)) {
        lVar12 = *(long *)(unaff_x20 + _DAT_11301aff0);
        if ((lVar12 == *(long *)(lStack_88 + _DAT_11301aff0)) && (lVar14 == lVar15)) {
          uVar8 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar8 = (uint)lVar12;
        }
      }
      lVar14 = ((long *)(unaff_x20 + _DAT_11301aff8))[1];
      lVar15 = ((long *)(lStack_88 + _DAT_11301aff8))[1];
      uVar9 = (uint)(lVar14 == 0 && lVar15 == 0);
      if ((lVar14 != 0) && (lVar15 != 0)) {
        lVar12 = *(long *)(unaff_x20 + _DAT_11301aff8);
        if ((lVar12 == *(long *)(lStack_88 + _DAT_11301aff8)) && (lVar14 == lVar15)) {
          uVar9 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar9 = (uint)lVar12;
        }
      }
      lVar14 = *(long *)(unaff_x20 + _DAT_11301b000);
      lVar15 = *(long *)(lStack_88 + _DAT_11301b000);
      uVar17 = (uint)(lVar14 == 0 && lVar15 == 0);
      if ((lVar14 != 0) && (lVar15 != 0)) {
        _swift_bridgeObjectRetain(lVar15);
        lVar12 = lVar14;
        _swift_bridgeObjectRetain(lVar14);
        uVar17 = (uint)lVar12;
        func_0x000103e46898();
        _swift_bridgeObjectRelease(lVar14);
        _swift_bridgeObjectRelease(lVar15);
      }
      bVar4 = *(byte *)(unaff_x20 + _DAT_11301b008);
      bVar5 = *(byte *)(lStack_88 + _DAT_11301b008);
      iVar2 = *(int *)(unaff_x20 + _DAT_11301b010);
      iVar3 = *(int *)(lStack_88 + _DAT_11301b010);
      lVar14 = *(long *)(unaff_x20 + _DAT_11301b018);
      lVar15 = *(long *)(lStack_88 + _DAT_11301b018);
      if (*(long *)(unaff_x20 + _DAT_11301b020) == 0) {
        lVar16 = *(long *)(lStack_88 + _DAT_11301b020);
        lVar12 = lVar16;
        _objc_retain(lVar16);
        _objc_release(lStack_88);
        if (lVar16 == 0) {
          uVar10 = 1;
        }
        else {
          _objc_release(lVar12);
          uVar10 = 0;
        }
      }
      else {
        lVar12 = *(long *)(lStack_88 + _DAT_11301b020);
        if (lVar12 == 0) {
          uVar13 = 0;
          alStack_80[1] = 0;
          alStack_80[2] = 0;
        }
        else {
          uVar13 = 0;
          FUN_103e4a674();
        }
        alStack_80[0] = lVar12;
        alStack_80[3] = uVar13;
        _objc_retain(lVar12);
        plVar11 = alStack_80;
        func_0x000103e49e54(plVar11);
        uVar10 = (uint)plVar11;
        _objc_release(lStack_88);
        func_0x00010006e7f4(alStack_80);
      }
      uVar1 = 0;
      if (lVar14 == lVar15) {
        uVar1 = uStack_8c & uStack_90 & uVar6 & uVar7 & uVar8 & uVar9 & uVar17 &
                ((bVar4 ^ bVar5) ^ 0xffffffff) & (uint)(iVar2 == iVar3);
      }
      return uVar1 & uVar10;
    }
  }
  return 0;
}



/* Entry: 103e4657c; end: 103e465fb; -[SCUrlPreviewContent isEqual:] */

uint FUN_103e4657c(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_103e46158(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103e465fc; end: 103e465ff; -[SCUrlPreviewContent copyWithZone:] */

void FUN_103e465fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103e46600; end: 103e4664b; -[SCUrlPreviewContent description] */

void FUN_103e46600(undefined8 param_1)

{
  undefined1 auStack_e0 [192];
  
  _objc_retain();
  FUN_103e46f94(auStack_e0);
  _objc_release(param_1);
  FUN_103e45e54(auStack_e0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e4664c; end: 103e466c7; -[SCUrlPreviewContent init] */

void FUN_103e4664c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "UrlPreviewServices/UrlPreviewContentWrapper.swift",0x31,2,0x79,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e46694);
  (*pcVar1)();
}



/* Entry: 103e466c8; end: 103e46777; -[SCUrlPreviewContent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e466c8(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11301afd0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11301afd8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11301afe0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11301afe8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11301aff0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11301aff8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11301b000));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11301b020));
  return;
}



/* Entry: 103e46778; end: 103e46adb;  */

undefined8 FUN_103e46778(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  
  lVar12 = *(long *)(param_1 + 0x10);
  if (lVar12 == *(long *)(param_2 + 0x10)) {
    if ((lVar12 != 0) && (param_1 != param_2)) {
      plVar13 = (long *)(param_2 + 0x48);
      plVar11 = (long *)(param_1 + 0x28);
      do {
        uVar7 = plVar11[-1];
        uVar8 = plVar11[1];
        lVar3 = plVar11[2];
        uVar9 = plVar11[3];
        lVar4 = plVar11[4];
        uVar1 = plVar13[-3];
        lVar5 = plVar13[-2];
        uVar2 = plVar13[-1];
        lVar6 = *plVar13;
        if ((((uVar7 != plVar13[-5]) || (*plVar11 != plVar13[-4])) &&
            (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                       (), (uVar7 & 1) == 0)) ||
           (((uVar8 != uVar1 || (lVar3 != lVar5)) &&
            (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                       (uVar8,lVar3,uVar1,lVar5,0), (uVar8 & 1) == 0)))) goto LAB_103e4686c;
        if (lVar4 == 0) {
          if (lVar6 != 0) goto LAB_103e4686c;
        }
        else if ((lVar6 == 0) ||
                (((uVar9 != uVar2 || (lVar4 != lVar6)) &&
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (uVar9,lVar4,uVar2,lVar6,0), (uVar9 & 1) == 0)))) goto LAB_103e4686c;
        plVar13 = plVar13 + 6;
        plVar11 = plVar11 + 6;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
    uVar10 = 1;
  }
  else {
LAB_103e4686c:
    uVar10 = 0;
  }
  return uVar10;
}



/* Entry: 103e46adc; end: 103e46c77;  */

ulong FUN_103e46adc(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103e46bac);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103e46bb0);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    FUN_103e48034(0);
    uVar3 = param_1;
    _swift_unknownObjectRetain();
    _swift_dynamicCastClass();
    if (uVar3 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    __ss18_CocoaArrayWrapperVyyXlSicig(param_1,uVar3);
    uVar4 = 0;
    FUN_103e48034(0);
    uVar3 = param_1;
    _swift_dynamicCastClass(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  __sSS6appendyySSF(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  __sSS6appendyySSF(0xd00000000000001b,0x800000010f1c2db0);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar4 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar4);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103e46c78);
  (*pcVar2)();
}



/* Entry: 103e46c78; end: 103e46caf;  */

void FUN_103e46c78(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_103e46cb0();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 103e46cb0; end: 103e46dd3;  */

undefined * FUN_103e46cb0(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103e46dd4);
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
    FUN_103e46ef0();
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
    FUN_103e48034(0);
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



/* Entry: 103e46dd4; end: 103e46eef;  */

undefined * FUN_103e46dd4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103e46ef0);
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
    puVar3 = (undefined *)0x11301b050;
    func_0x0001000285a8(0x11301b050,&UNK_10dc9eb28);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x30) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&UNK_110718098);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x30 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x30);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Entry: 103e46ef0; end: 103e46f4b;  */

void FUN_103e46ef0(void)

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
    FUN_103e48034();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x11301b058;
  plVar5 = (long *)&UNK_10dc9eb30;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 103e46f4c; end: 103e46f93;  */

undefined8 FUN_103e46f4c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103e46f94; end: 103e47477;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e46f94(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  uint5 uStack_98;
  undefined3 uStack_93;
  undefined8 uStack_90;
  byte bStack_88;
  undefined7 uStack_87;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_11301afd0);
  puVar2 = (undefined8 *)(param_2 + _DAT_11301afd8);
  uVar29 = puVar1[1];
  uVar25 = *puVar1;
  uVar17 = puVar1[1];
  uVar22 = puVar2[1];
  uVar19 = *puVar2;
  uVar16 = puVar2[1];
  puVar1 = (undefined8 *)(param_2 + _DAT_11301afe0);
  puVar2 = (undefined8 *)(param_2 + _DAT_11301afe8);
  uVar30 = puVar1[1];
  uVar26 = *puVar1;
  uVar15 = puVar1[1];
  uVar23 = puVar2[1];
  uVar20 = *puVar2;
  uVar13 = puVar2[1];
  puVar1 = (undefined8 *)(param_2 + _DAT_11301aff0);
  puVar2 = (undefined8 *)(param_2 + _DAT_11301aff8);
  uVar31 = puVar1[1];
  uVar27 = *puVar1;
  uVar9 = puVar1[1];
  uVar24 = puVar2[1];
  uVar21 = *puVar2;
  uVar18 = puVar2[1];
  uVar12 = *(ulong *)(param_2 + _DAT_11301b000);
  uVar28 = uVar27;
  uVar32 = uVar31;
  if (uVar12 == 0) {
    _swift_bridgeObjectRetain(uVar18);
    _swift_bridgeObjectRetain(uVar17);
    _swift_bridgeObjectRetain(uVar16);
    _swift_bridgeObjectRetain(uVar15);
    _swift_bridgeObjectRetain(uVar13);
    _swift_bridgeObjectRetain(uVar9);
    puVar7 = (undefined *)0x0;
  }
  else {
    if (uVar12 >> 0x3e == 0) {
      uVar11 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar11 = uVar12;
      if (-1 < (long)uVar12) {
        uVar11 = uVar12 & 0xffffffffffffff8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar11 == 0) {
      _swift_bridgeObjectRetain(uVar18);
      _swift_bridgeObjectRetain(uVar17);
      _swift_bridgeObjectRetain(uVar16);
      _swift_bridgeObjectRetain(uVar15);
      _swift_bridgeObjectRetain(uVar13);
      _swift_bridgeObjectRetain(uVar9);
      puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      _swift_bridgeObjectRetain(uVar17);
      _swift_bridgeObjectRetain(uVar16);
      _swift_bridgeObjectRetain(uVar15);
      _swift_bridgeObjectRetain(uVar13);
      _swift_bridgeObjectRetain(uVar9);
      _swift_bridgeObjectRetain(uVar18);
      func_0x000103e46c94(0,uVar11 & ((long)uVar11 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103e47470);
        (*pcVar4)();
      }
      if ((uVar12 & 0xc000000000000001) == 0) {
        plVar5 = (long *)(uVar12 + 0x20);
        puVar7 = puStack_a8;
        do {
          lVar6 = *plVar5;
          uVar9 = *(undefined8 *)(lVar6 + _DAT_11301b060);
          uVar16 = ((undefined8 *)(lVar6 + _DAT_11301b060))[1];
          uVar13 = *(undefined8 *)(lVar6 + _DAT_11301b068);
          uVar17 = ((undefined8 *)(lVar6 + _DAT_11301b068))[1];
          uVar15 = *(undefined8 *)(lVar6 + _DAT_11301b070);
          uVar18 = ((undefined8 *)(lVar6 + _DAT_11301b070))[1];
          uVar12 = *(ulong *)(puVar7 + 0x10);
          uVar14 = *(ulong *)(puVar7 + 0x18);
          puStack_a8 = puVar7;
          _swift_bridgeObjectRetain(uVar16);
          _swift_bridgeObjectRetain(uVar17);
          _swift_bridgeObjectRetain(uVar18);
          if (uVar14 >> 1 <= uVar12) {
            func_0x000103e46c94(1 < uVar14,uVar12 + 1,1);
            puVar7 = puStack_a8;
          }
          *(ulong *)(puVar7 + 0x10) = uVar12 + 1;
          *(undefined8 *)(puVar7 + uVar12 * 0x30 + 0x20) = uVar9;
          *(undefined8 *)(puVar7 + uVar12 * 0x30 + 0x28) = uVar16;
          *(undefined8 *)(puVar7 + uVar12 * 0x30 + 0x30) = uVar13;
          *(undefined8 *)(puVar7 + uVar12 * 0x30 + 0x38) = uVar17;
          *(undefined8 *)(puVar7 + uVar12 * 0x30 + 0x40) = uVar15;
          *(undefined8 *)(puVar7 + uVar12 * 0x30 + 0x48) = uVar18;
          uVar11 = uVar11 - 1;
          plVar5 = plVar5 + 1;
        } while (uVar11 != 0);
      }
      else {
        uVar14 = 0;
        do {
          puVar7 = puStack_a8;
          uVar10 = uVar14;
          FUN_103e46adc(uVar14,uVar12);
          uVar9 = *(undefined8 *)(uVar10 + _DAT_11301b060);
          uVar16 = ((undefined8 *)(uVar10 + _DAT_11301b060))[1];
          uVar13 = *(undefined8 *)(uVar10 + _DAT_11301b068);
          uVar17 = ((undefined8 *)(uVar10 + _DAT_11301b068))[1];
          uVar15 = *(undefined8 *)(uVar10 + _DAT_11301b070);
          uVar18 = ((undefined8 *)(uVar10 + _DAT_11301b070))[1];
          _swift_bridgeObjectRetain(uVar18);
          _swift_bridgeObjectRetain(uVar16);
          _swift_bridgeObjectRetain(uVar17);
          _swift_unknownObjectRelease(uVar10);
          uVar10 = *(ulong *)(puVar7 + 0x10);
          puStack_a8 = puVar7;
          if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar10) {
            func_0x000103e46c94(1 < *(ulong *)(puVar7 + 0x18),uVar10 + 1,1);
          }
          uVar14 = uVar14 + 1;
          *(ulong *)(puStack_a8 + 0x10) = uVar10 + 1;
          *(undefined8 *)(puStack_a8 + uVar10 * 0x30 + 0x20) = uVar9;
          *(undefined8 *)(puStack_a8 + uVar10 * 0x30 + 0x28) = uVar16;
          *(undefined8 *)(puStack_a8 + uVar10 * 0x30 + 0x30) = uVar13;
          *(undefined8 *)(puStack_a8 + uVar10 * 0x30 + 0x38) = uVar17;
          *(undefined8 *)(puStack_a8 + uVar10 * 0x30 + 0x40) = uVar15;
          *(undefined8 *)(puStack_a8 + uVar10 * 0x30 + 0x48) = uVar18;
          puVar7 = puStack_a8;
        } while (uVar11 != uVar14);
      }
    }
  }
  uVar3 = *(undefined1 *)(param_2 + _DAT_11301b008);
  uVar9 = *(undefined8 *)(param_2 + _DAT_11301b010);
  uVar13 = *(undefined8 *)(param_2 + _DAT_11301b018);
  lVar6 = *(long *)(param_2 + _DAT_11301b020);
  if (lVar6 == 0) {
    puVar8 = (undefined *)0x0;
    uStack_a0 = 0;
    uVar12 = 0;
    uStack_90 = 0;
    uVar11 = 0;
    uStack_80 = 0x1fffffffe;
    uStack_78 = 0;
    uStack_70 = 0;
  }
  else if (*(char *)(lVar6 + _DAT_11301b128) == '\x01') {
    lVar6 = *(long *)(lVar6 + _DAT_11301b138);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x103e47474);
      (*pcVar4)();
    }
    _objc_retain();
    FUN_103e49cb8(&puStack_a8);
    puVar8 = puStack_a8;
    uVar11 = (ulong)bStack_88;
    _objc_release(lVar6);
    uVar12 = (ulong)uStack_98;
    uStack_80 = 0x8000000000000000;
    uStack_78 = uVar28;
    uStack_70 = uVar32;
  }
  else {
    lVar6 = *(long *)(lVar6 + _DAT_11301b130);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x103e47478);
      (*pcVar4)();
    }
    _objc_retain();
    FUN_103e48f88(&puStack_a8);
    puVar8 = puStack_a8;
    uVar12 = CONCAT35(uStack_93,uStack_98);
    uVar11 = CONCAT71(uStack_87,bStack_88);
    _objc_release(lVar6);
    uStack_80 = uStack_80 & 1;
  }
  param_1[1] = uVar29;
  *param_1 = uVar25;
  param_1[3] = uVar22;
  param_1[2] = uVar19;
  param_1[5] = uVar30;
  param_1[4] = uVar26;
  param_1[7] = uVar23;
  param_1[6] = uVar20;
  param_1[9] = uVar31;
  param_1[8] = uVar27;
  param_1[0xb] = uVar24;
  param_1[10] = uVar21;
  param_1[0xc] = puVar7;
  *(undefined1 *)(param_1 + 0xd) = uVar3;
  param_1[0xe] = uVar9;
  param_1[0xf] = uVar13;
  param_1[0x10] = puVar8;
  param_1[0x11] = uStack_a0;
  param_1[0x12] = uVar12;
  param_1[0x13] = uStack_90;
  param_1[0x14] = uVar11;
  param_1[0x15] = uStack_80;
  param_1[0x17] = uStack_70;
  param_1[0x16] = uStack_78;
  return;
}



/* Entry: 103e47478; end: 103e47497;  */

void FUN_103e47478(void)

{
  _objc_opt_self(&PTR_PTR_1129562a8);
  return;
}



/* Entry: 103e47498; end: 103e47503;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e47498(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  uVar2 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11301b060);
  puVar1[1] = param_1[1];
  *puVar1 = uVar2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11301b068);
  puVar1[1] = uVar4;
  *puVar1 = uVar3;
  uVar2 = param_1[4];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11301b070);
  puVar1[1] = param_1[5];
  *puVar1 = uVar2;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e47504; end: 103e4750f; -[SCUrlPreviewAccessoryLink text] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e47504(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11301b060);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11301b060))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103e47510; end: 103e4751b; -[SCUrlPreviewAccessoryLink urlForTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e47510(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11301b068);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11301b068))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103e4751c; end: 103e47563;  */

void FUN_103e4751c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103e47564; end: 103e475bf; -[SCUrlPreviewAccessoryLink iconUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e47564(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11301b070))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11301b070);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103e475c0; end: 103e4765b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e475c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11301b060);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11301b068);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11301b070);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e4765c; end: 103e47727; -[SCUrlPreviewAccessoryLink initWithText:urlForTap:iconUrl:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e4765c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lStack_60;
  long lStack_58;
  
  lVar3 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  lVar4 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (param_5 == 0) {
    param_5 = 0;
    lVar5 = 0;
  }
  else {
    lVar5 = lVar4;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_11301b060);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_11301b068);
  *puVar1 = param_4;
  puVar1[1] = lVar4;
  plVar2 = (long *)(param_1 + _DAT_11301b070);
  *plVar2 = param_5;
  plVar2[1] = lVar5;
  lStack_60 = param_1;
  lStack_58 = lVar3;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e47728; end: 103e4775b; -[SCUrlPreviewAccessoryLink hash] */

undefined8 FUN_103e47728(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103e4775c();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 103e4775c; end: 103e479db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e4775c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11301b060);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_11301b060))[1]);
  uVar1 = uVar2;
  func_0x000107c44c3c();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11301b068);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_11301b068))[1]);
  uVar1 = uVar2;
  func_0x000107c44c3c();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_11301b070))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11301b070);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x000107c44c3c();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 103e479dc; end: 103e47a5b; -[SCUrlPreviewAccessoryLink isEqual:] */

uint FUN_103e479dc(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x000103e47844(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103e47a5c; end: 103e47a5f; -[SCUrlPreviewAccessoryLink copyWithZone:] */

void FUN_103e47a5c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103e47a60; end: 103e47b8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e47a60(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11301b060);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_11301b060))[1]);
  uVar1 = 0x54584554;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x54584554,0xe400000000000000);
  func_0x000107c42744(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11301b068);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_11301b068))[1]);
  uVar1 = 0x5f524f465f4c5255;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f524f465f4c5255,0xeb00000000504154);
  func_0x000107c42744(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_11301b070))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11301b070);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
  }
  uVar1 = 0x4c52555f4e4f4349;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c52555f4e4f4349,0xe800000000000000);
  func_0x000107c42744(param_1);
  _swift_unknownObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103e47b8c; end: 103e47bdb; -[SCUrlPreviewAccessoryLink encodeWithCoder:] */

void FUN_103e47b8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_103e47a60(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103e47bdc; end: 103e47c0b;  */

void FUN_103e47bdc(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_103e47c0c(param_1);
  return;
}



/* Entry: 103e47c0c; end: 103e47f1f;  */

undefined8 FUN_103e47c0c(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 unaff_x20;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  uVar5 = 0;
  uVar8 = 0;
  iVar2 = (int)&uStack_b0;
  uVar3 = 0x54584554;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x54584554,0xe400000000000000);
  lVar4 = param_1;
  func_0x000107c41478();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (lVar4 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar4);
    _swift_unknownObjectRelease(lVar4);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    _objc_release(param_1);
  }
  else {
    _swift_dynamicCast(&uStack_b0,&uStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lVar4 = lStack_a8;
    uVar3 = uStack_b0;
    if ((uVar5 & 1) == 0) {
      _objc_release(param_1);
      goto LAB_103e47de8;
    }
    uVar6 = 0x5f524f465f4c5255;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f524f465f4c5255,0xeb00000000504154);
    lVar7 = param_1;
    func_0x000107c41478();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    if (lVar7 == 0) {
      uStack_98 = 0;
      uStack_a0 = 0;
      lStack_88 = 0;
      uStack_90 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar7);
      _swift_unknownObjectRelease(lVar7);
    }
    uStack_78 = uStack_98;
    uStack_80 = uStack_a0;
    lStack_68 = lStack_88;
    uStack_70 = uStack_90;
    if (lStack_88 != 0) {
      _swift_dynamicCast(&uStack_b0,&uStack_80,puVar1 + 8,PTR___sSSN_11034da80,6);
      lVar7 = lStack_a8;
      uVar6 = uStack_b0;
      if ((uVar8 & 1) == 0) {
        _objc_release(param_1);
        _swift_bridgeObjectRelease(lVar4);
        goto LAB_103e47de8;
      }
      uVar9 = 0x4c52555f4e4f4349;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c52555f4e4f4349,0xe800000000000000);
      lVar10 = param_1;
      func_0x000107c41478();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
      if (lVar10 == 0) {
        uStack_98 = 0;
        uStack_a0 = 0;
        lStack_88 = 0;
        uStack_90 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar10);
        _swift_unknownObjectRelease(lVar10);
      }
      uStack_78 = uStack_98;
      uStack_80 = uStack_a0;
      lStack_68 = lStack_88;
      uStack_70 = uStack_90;
      if (lStack_88 == 0) {
        func_0x00010006e7f4(&uStack_80);
      }
      else {
        _swift_dynamicCast(&uStack_b0,&uStack_80,puVar1 + 8,PTR___sSSN_11034da80,6);
        lVar10 = lStack_a8;
        uVar9 = uStack_b0;
        if (iVar2 != 0) goto LAB_103e47e8c;
      }
      lVar10 = 0;
      uVar9 = 0;
LAB_103e47e8c:
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,lVar4);
      _swift_bridgeObjectRelease(lVar4);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar6,lVar7);
      _swift_bridgeObjectRelease(lVar7);
      if (lVar10 == 0) {
        uVar9 = 0;
      }
      else {
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar9,lVar10);
        _swift_bridgeObjectRelease(lVar10);
      }
      func_0x000107c48cb4();
      _objc_release(uVar3);
      _objc_release(uVar6);
      _objc_release(uVar9);
      _objc_release(param_1);
      return unaff_x20;
    }
    _objc_release(param_1);
    _swift_bridgeObjectRelease(lVar4);
  }
  func_0x00010006e7f4(&uStack_80);
LAB_103e47de8:
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 103e47f20; end: 103e47f47; -[SCUrlPreviewAccessoryLink initWithCoder:] */

void FUN_103e47f20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_103e47c0c();
  return;
}



/* Entry: 103e47f48; end: 103e47f63; -[SCUrlPreviewAccessoryLink description] */

void FUN_103e47f48(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e47f64; end: 103e47fdf; -[SCUrlPreviewAccessoryLink init] */

void FUN_103e47f64(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "UrlPreviewServices/UrlPreviewAccessoryLinkWrapper.swift",0x37,2,0x56,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e47fac);
  (*pcVar1)();
}



/* Entry: 103e47fe0; end: 103e48033; -[SCUrlPreviewAccessoryLink .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e47fe0(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11301b060 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11301b068 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11301b070 + 8))
  ;
  return;
}



/* Entry: 103e48034; end: 103e48053;  */

void FUN_103e48034(void)

{
  _objc_opt_self(&PTR_PTR_1129563c0);
  return;
}



/* Entry: 103e48054; end: 103e4809f; -[SCUrlPreviewHtmlContent html] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e48054(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11301b0a0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11301b0a0))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103e480a0; end: 103e480af; -[SCUrlPreviewHtmlContent htmlHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e480a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11301b0a8));
  return;
}



/* Entry: 103e480b0; end: 103e480bf; -[SCUrlPreviewHtmlContent htmlWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e480b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11301b0b0));
  return;
}



/* Entry: 103e480c0; end: 103e4811b; -[SCUrlPreviewHtmlContent htmlThumbnail] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e480c0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11301b0b8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11301b0b8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103e4811c; end: 103e481bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e4811c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11301b0a0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11301b0a8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11301b0b0) = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11301b0b8);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e481c0; end: 103e4829b; -[SCUrlPreviewHtmlContent initWithHtml:htmlHeight:htmlWidth:htmlThumbnail:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e481c0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_60;
  long lStack_58;
  
  lVar4 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (param_6 == 0) {
    param_6 = 0;
    lVar5 = 0;
  }
  else {
    lVar5 = param_2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_11301b0a0);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_11301b0a8) = param_4;
  *(undefined8 *)(param_1 + _DAT_11301b0b0) = param_5;
  plVar2 = (long *)(param_1 + _DAT_11301b0b8);
  *plVar2 = param_6;
  plVar2[1] = lVar5;
  puVar3 = PTR_s_init_1125d9248;
  lStack_60 = param_1;
  lStack_58 = lVar4;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_msgSendSuper2(&lStack_60,puVar3);
  return;
}



/* Entry: 103e4829c; end: 103e482cb;  */

void FUN_103e4829c(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_103e482cc(param_1);
  return;
}



/* Entry: 103e482cc; end: 103e483cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e482cc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _swift_getObjectType();
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11301b0a0);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  if (*(char *)(param_1 + 3) == '\x01') {
    _swift_bridgeObjectRetain(uStack_48);
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    _swift_bridgeObjectRetain(uStack_48);
    func_0x000107c490d8();
  }
  *(undefined **)(unaff_x20 + _DAT_11301b0a8) = puVar2;
  if (*(char *)(param_1 + 5) == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x000107c490d8();
  }
  *(undefined **)(unaff_x20 + _DAT_11301b0b0) = puVar2;
  uVar3 = param_1[6];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11301b0b8);
  puVar1[1] = param_1[7];
  *puVar1 = uVar3;
  func_0x000100bcb1dc(&uStack_50);
  _objc_msgSendSuper2(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e483d0; end: 103e48403; -[SCUrlPreviewHtmlContent hash] */

undefined8 FUN_103e483d0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103e48404();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 103e48404; end: 103e48547;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e48404(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11301b0a0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_11301b0a0))[1]);
  uVar1 = uVar2;
  func_0x000107c44c3c();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar1);
  lVar3 = *(long *)(unaff_x20 + _DAT_11301b0a8);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar3);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar3);
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_11301b0b0);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar3);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar3);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_11301b0b8))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11301b0b8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x000107c44c3c();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 103e48548; end: 103e4879f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103e48548(undefined8 param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  long unaff_x20;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lStack_78;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar8 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_70);
  if (lStack_58 == 0) {
    FUN_103e4904c(auStack_70,0x112d387f8,&UNK_10d902650);
  }
  else {
    plVar2 = &lStack_78;
    _swift_dynamicCast(plVar2,auStack_70,PTR___sypN_11034f1a8 + 8,lVar8,6);
    if (((ulong)plVar2 & 1) != 0) {
      lVar8 = *(long *)(unaff_x20 + _DAT_11301b0a0);
      if (lVar8 == *(long *)(lStack_78 + _DAT_11301b0a0) &&
          ((long *)(unaff_x20 + _DAT_11301b0a0))[1] == ((long *)(lStack_78 + _DAT_11301b0a0))[1]) {
        uVar1 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uVar1 = (uint)lVar8;
      }
      lVar5 = *(long *)(unaff_x20 + _DAT_11301b0a8);
      lVar8 = *(long *)(lStack_78 + _DAT_11301b0a8);
      uVar7 = (uint)(lVar5 == 0 && lVar8 == 0);
      if (lVar5 != 0 && lVar8 != 0) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar8);
        _objc_retain();
        lVar3 = lVar5;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar7 = (uint)lVar3;
        _objc_release(lVar5);
        _objc_release(lVar8);
      }
      lVar5 = *(long *)(unaff_x20 + _DAT_11301b0b0);
      lVar8 = *(long *)(lStack_78 + _DAT_11301b0b0);
      uVar4 = (uint)(lVar5 == 0 && lVar8 == 0);
      if ((lVar5 != 0) && (lVar8 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar8);
        _objc_retain(lVar5);
        lVar3 = lVar5;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar4 = (uint)lVar3;
        _objc_release(lVar5);
        _objc_release(lVar8);
      }
      lVar8 = ((long *)(unaff_x20 + _DAT_11301b0b8))[1];
      lVar5 = ((long *)(lStack_78 + _DAT_11301b0b8))[1];
      if (lVar8 == 0) {
        _swift_bridgeObjectRetain(lVar5);
        _objc_release(lStack_78);
        if (lVar5 == 0) {
LAB_103e48768:
          uVar6 = 1;
        }
        else {
          _swift_bridgeObjectRelease(lVar5);
          uVar6 = 0;
        }
      }
      else {
        uVar6 = 0;
        if (lVar5 != 0) {
          lVar3 = *(long *)(unaff_x20 + _DAT_11301b0b8);
          if ((lVar3 == *(long *)(lStack_78 + _DAT_11301b0b8)) && (lVar8 == lVar5)) {
            _objc_release(lStack_78);
            goto LAB_103e48768;
          }
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar6 = (uint)lVar3;
        }
        _objc_release(lStack_78);
      }
      if ((uVar1 & uVar7 & 1) != 0) {
        uVar4 = uVar4 & uVar6;
        goto LAB_103e48604;
      }
    }
  }
  uVar4 = 0;
LAB_103e48604:
  return uVar4 & 1;
}



/* Entry: 103e487a0; end: 103e4882f; -[SCUrlPreviewHtmlContent isEqual:] */

uint FUN_103e487a0(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_103e48548(&uStack_40);
  _objc_release(param_1);
  FUN_103e4904c(&uStack_40,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 103e48830; end: 103e48833; -[SCUrlPreviewHtmlContent copyWithZone:] */

void FUN_103e48830(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103e48834; end: 103e4899b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e48834(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11301b0a0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_11301b0a0))[1]);
  uVar1 = 0x4c4d5448;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c4d5448,0xe400000000000000);
  func_0x000107c42744(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = 0x4945485f4c4d5448;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4945485f4c4d5448,0xeb00000000544847);
  func_0x000107c42744(param_1);
  _objc_release(uVar2);
  uVar2 = 0x4449575f4c4d5448;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4449575f4c4d5448,0xea00000000004854);
  func_0x000107c42744(param_1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_11301b0b8))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11301b0b8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
  }
  uVar1 = 0x5548545f4c4d5448;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5548545f4c4d5448,0xee004c49414e424d);
  func_0x000107c42744(param_1);
  _swift_unknownObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103e4899c; end: 103e489eb; -[SCUrlPreviewHtmlContent encodeWithCoder:] */

void FUN_103e4899c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_103e48834(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103e489ec; end: 103e48a1b;  */

void FUN_103e489ec(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_103e48a1c(param_1);
  return;
}



/* Entry: 103e48a1c; end: 103e48e0f;  */

undefined8 FUN_103e48a1c(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 unaff_x20;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  int iVar3;
  int iVar4;
  
  uVar7 = 0;
  iVar2 = (int)&uStack_b0;
  iVar3 = (int)&uStack_b0;
  iVar4 = (int)&uStack_b0;
  uVar5 = 0x4c4d5448;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c4d5448,0xe400000000000000);
  lVar6 = param_1;
  func_0x000107c41478();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  if (lVar6 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar6);
    _swift_unknownObjectRelease(lVar6);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    _objc_release(param_1);
    FUN_103e4904c(&uStack_80,0x112d387f8,&UNK_10d902650);
LAB_103e48b60:
    _swift_getObjectType();
    _swift_deallocPartialClassInstance();
    return 0;
  }
  _swift_dynamicCast(&uStack_b0,&uStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
  lVar6 = lStack_a8;
  uVar5 = uStack_b0;
  if ((uVar7 & 1) == 0) {
    _objc_release(param_1);
    goto LAB_103e48b60;
  }
  uVar8 = 0x4945485f4c4d5448;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4945485f4c4d5448,0xeb00000000544847);
  lVar9 = param_1;
  func_0x000107c41478();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  if (lVar9 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar9);
    _swift_unknownObjectRelease(lVar9);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    FUN_103e4904c(&uStack_80,0x112d387f8,&UNK_10d902650);
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    func_0x0001002ed07c(0);
    _swift_dynamicCast(&uStack_b0,&uStack_80,puVar1 + 8,uVar8,6);
    uVar8 = uStack_b0;
    if (iVar2 == 0) {
      uVar8 = 0;
    }
  }
  uVar10 = 0x4449575f4c4d5448;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4449575f4c4d5448,0xea00000000004854);
  lVar9 = param_1;
  func_0x000107c41478();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  if (lVar9 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar9);
    _swift_unknownObjectRelease(lVar9);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    FUN_103e4904c(&uStack_80,0x112d387f8,&UNK_10d902650);
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    func_0x0001002ed07c(0);
    _swift_dynamicCast(&uStack_b0,&uStack_80,puVar1 + 8,uVar10,6);
    uVar10 = uStack_b0;
    if (iVar3 == 0) {
      uVar10 = 0;
    }
  }
  uVar11 = 0x5548545f4c4d5448;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5548545f4c4d5448,0xee004c49414e424d);
  lVar9 = param_1;
  func_0x000107c41478();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  if (lVar9 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar9);
    _swift_unknownObjectRelease(lVar9);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    FUN_103e4904c(&uStack_80,0x112d387f8,&UNK_10d902650);
  }
  else {
    _swift_dynamicCast(&uStack_b0,&uStack_80,puVar1 + 8,PTR___sSSN_11034da80,6);
    lVar9 = lStack_a8;
    uVar11 = uStack_b0;
    if (iVar4 != 0) goto LAB_103e48d6c;
  }
  lVar9 = 0;
  uVar11 = 0;
LAB_103e48d6c:
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar5,lVar6);
  _swift_bridgeObjectRelease(lVar6);
  if (lVar9 == 0) {
    uVar11 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar11,lVar9);
    _swift_bridgeObjectRelease(lVar9);
  }
  func_0x000107c46d00();
  _objc_release(uVar5);
  _objc_release(uVar11);
  _objc_release(param_1);
  _objc_release(uVar8);
  _objc_release(uVar10);
  return unaff_x20;
}



/* Entry: 103e48e10; end: 103e48e37; -[SCUrlPreviewHtmlContent initWithCoder:] */

void FUN_103e48e10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_103e48a1c();
  return;
}



/* Entry: 103e48e38; end: 103e48eab; -[SCUrlPreviewHtmlContent description] */

void FUN_103e48e38(undefined8 param_1)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  FUN_103e48f88(&uStack_80);
  _objc_release(param_1);
  uStack_28 = uStack_78;
  uStack_30 = uStack_80;
  func_0x000100bcb1dc(&uStack_30);
  uStack_38 = uStack_48;
  uStack_40 = uStack_50;
  FUN_103e4904c(&uStack_40,0x112d35ff8,&UNK_10d900cd0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e48eac; end: 103e48f27; -[SCUrlPreviewHtmlContent init] */

void FUN_103e48eac(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "UrlPreviewServices/UrlPreviewHtmlContentWrapper.swift",0x35,2,99,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e48ef4);
  (*pcVar1)();
}



/* Entry: 103e48f28; end: 103e48f87; -[SCUrlPreviewHtmlContent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e48f28(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11301b0a0 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11301b0a8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11301b0b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11301b0b8 + 8))
  ;
  return;
}



/* Entry: 103e48f88; end: 103e4904b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e48f88(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar5 = *(undefined8 *)(param_2 + _DAT_11301b0a0);
  uVar7 = ((undefined8 *)(param_2 + _DAT_11301b0a0))[1];
  lVar6 = *(long *)(param_2 + _DAT_11301b0a8);
  bVar2 = lVar6 == 0;
  if (bVar2) {
    _swift_bridgeObjectRetain(uVar7);
  }
  else {
    _swift_bridgeObjectRetain(uVar7);
    func_0x000107c5d38c();
  }
  lVar4 = *(long *)(param_2 + _DAT_11301b0b0);
  bVar3 = lVar4 == 0;
  if (!bVar3) {
    func_0x000107c5d38c();
  }
  puVar1 = (undefined8 *)(param_2 + _DAT_11301b0b8);
  *param_1 = uVar5;
  param_1[1] = uVar7;
  param_1[2] = lVar6;
  *(bool *)(param_1 + 3) = bVar2;
  param_1[4] = lVar4;
  *(bool *)(param_1 + 5) = bVar3;
  uVar5 = puVar1[1];
  uVar7 = *puVar1;
  param_1[7] = puVar1[1];
  param_1[6] = uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 103e4904c; end: 103e4908b;  */

undefined8 FUN_103e4904c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 103e4908c; end: 103e490ab;  */

void FUN_103e4908c(void)

{
  _objc_opt_self(&PTR_PTR_1129564a0);
  return;
}



/* Entry: 103e490ac; end: 103e490f7; -[SCUrlPreviewPdfContent url] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e490ac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11301b0e8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11301b0e8))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103e490f8; end: 103e49107; -[SCUrlPreviewPdfContent pdfNumPages] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e490f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11301b0f0));
  return;
}



/* Entry: 103e49108; end: 103e49117; -[SCUrlPreviewPdfContent pdfSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e49108(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11301b0f8));
  return;
}



/* Entry: 103e49118; end: 103e4919b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e49118(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11301b0e8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11301b0f0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11301b0f8) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e4919c; end: 103e4923b; -[SCUrlPreviewPdfContent initWithUrl:pdfNumPages:pdfSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e4919c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_11301b0e8);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_11301b0f0) = param_4;
  *(undefined8 *)(param_1 + _DAT_11301b0f8) = param_5;
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar3;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_msgSendSuper2(&lStack_50,puVar2);
  return;
}



/* Entry: 103e4923c; end: 103e4926b;  */

void FUN_103e4923c(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_103e4926c(param_1);
  return;
}



/* Entry: 103e4926c; end: 103e49373;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e4926c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  _swift_getObjectType();
  uVar2 = param_1[1];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11301b0e8);
  *puVar1 = *param_1;
  puVar1[1] = uVar2;
  if (*(char *)((long)param_1 + 0x14) == '\x01') {
    _swift_bridgeObjectRetain(uVar2);
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    _swift_bridgeObjectRetain(uVar2);
    func_0x000107c490d0();
  }
  *(undefined **)(unaff_x20 + _DAT_11301b0f0) = puVar3;
  if (*(char *)(param_1 + 4) == '\x01') {
    FUN_103e49374(param_1);
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x000107c490d8();
    FUN_103e49374(param_1);
  }
  *(undefined **)(unaff_x20 + _DAT_11301b0f8) = puVar3;
  _objc_msgSendSuper2(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e49374; end: 103e493a7;  */

undefined8 FUN_103e49374(undefined8 param_1)

{
  FUN_103e44bec();
  return param_1;
}



/* Entry: 103e493a8; end: 103e493db; -[SCUrlPreviewPdfContent hash] */

undefined8 FUN_103e493a8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103e493dc();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 103e493dc; end: 103e494db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e493dc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11301b0e8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_11301b0e8))[1]);
  uVar2 = uVar1;
  func_0x000107c44c3c();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  lVar3 = *(long *)(unaff_x20 + _DAT_11301b0f0);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar3);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar3);
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_11301b0f8);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar3);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar3);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 103e494dc; end: 103e496b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103e494dc(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long unaff_x20;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lStack_78;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar8 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_70);
  if (lStack_58 == 0) {
    func_0x00010006e7f4(auStack_70);
  }
  else {
    plVar1 = &lStack_78;
    _swift_dynamicCast(plVar1,auStack_70,PTR___sypN_11034f1a8 + 8,lVar8,6);
    if (((ulong)plVar1 & 1) != 0) {
      uVar7 = *(ulong *)(unaff_x20 + _DAT_11301b0e8);
      if (uVar7 == *(ulong *)(lStack_78 + _DAT_11301b0e8) &&
          ((ulong *)(unaff_x20 + _DAT_11301b0e8))[1] == ((ulong *)(lStack_78 + _DAT_11301b0e8))[1])
      {
        uVar7 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
      }
      lVar6 = *(long *)(unaff_x20 + _DAT_11301b0f0);
      lVar8 = *(long *)(lStack_78 + _DAT_11301b0f0);
      uVar4 = (uint)(lVar6 == 0 && lVar8 == 0);
      if (lVar6 != 0 && lVar8 != 0) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar8);
        _objc_retain(lVar6);
        lVar2 = lVar6;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar4 = (uint)lVar2;
        _objc_release(lVar6);
        _objc_release(lVar8);
      }
      lVar6 = *(long *)(unaff_x20 + _DAT_11301b0f8);
      lVar8 = *(long *)(lStack_78 + _DAT_11301b0f8);
      if (lVar6 == 0) {
        lVar2 = lVar8;
        _objc_retain(lVar8);
        _objc_release(lStack_78);
        if (lVar8 != 0) {
          uVar5 = 0;
          goto LAB_103e49678;
        }
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
        lVar2 = lStack_78;
        if (lVar8 != 0) {
          func_0x0001002ed07c(0);
          _objc_retain(lVar8);
          _objc_retain(lVar6);
          lVar3 = lVar6;
          __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
          uVar5 = (uint)lVar3;
          _objc_release(lVar6);
          _objc_release(lVar8);
        }
LAB_103e49678:
        _objc_release(lVar2);
      }
      if ((uVar7 & 1) != 0) {
        uVar4 = uVar4 & uVar5;
        goto LAB_103e49698;
      }
    }
  }
  uVar4 = 0;
LAB_103e49698:
  return uVar4 & 1;
}



/* Entry: 103e496b8; end: 103e49737; -[SCUrlPreviewPdfContent isEqual:] */

uint FUN_103e496b8(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_103e494dc(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}


