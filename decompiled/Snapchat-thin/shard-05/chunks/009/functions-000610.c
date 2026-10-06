/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10434ab00; end: 10434ab67; -[SCWebLensRetentionStore init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10434ab00(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113070258) = 0;
  puVar1 = (undefined8 *)(param_1 + _DAT_113070260);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(param_1 + _DAT_113070250);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10434ab68; end: 10434ac33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10434ab68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  FUN_10434ac34();
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_113070258);
  *(undefined8 *)(unaff_x20 + _DAT_113070258) = param_1;
  _objc_release(uVar3);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113070260);
  uVar3 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = param_4;
  puVar1[1] = param_5;
  _objc_retain(param_1);
  func_0x00010058d43c(uVar3,uVar2);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113070250);
  _swift_beginAccess(puVar1,auStack_68,1,0);
  uVar3 = puVar1[1];
  *puVar1 = param_2;
  puVar1[1] = param_3;
  _swift_retain(param_5);
  _swift_bridgeObjectRelease(uVar3);
  _swift_bridgeObjectRetain(param_3);
  return;
}



/* Entry: 10434ac34; end: 10434ad9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10434ac34(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113070260);
  pcVar2 = (code *)*puVar1;
  uVar4 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113070250);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar3 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  _swift_bridgeObjectRelease(uVar3);
  if (pcVar2 != (code *)0x0) {
    _swift_retain(uVar4);
    (*pcVar2)();
    func_0x00010058d43c(pcVar2,uVar4);
    func_0x00010058d43c(pcVar2,uVar4);
  }
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_113070258);
  *(undefined8 *)(unaff_x20 + _DAT_113070258) = 0;
  _objc_release(uVar4);
  return;
}



/* Entry: 10434ad9c; end: 10434ad9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10434ad9c(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113070260);
  pcVar2 = (code *)*puVar1;
  uVar4 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113070250);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar3 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  _swift_bridgeObjectRelease(uVar3);
  if (pcVar2 != (code *)0x0) {
    _swift_retain(uVar4);
    (*pcVar2)();
    func_0x00010058d43c(pcVar2,uVar4);
    func_0x00010058d43c(pcVar2,uVar4);
  }
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_113070258);
  *(undefined8 *)(unaff_x20 + _DAT_113070258) = 0;
  _objc_release(uVar4);
  return;
}



/* Entry: 10434ada0; end: 10434ade3;  */

void FUN_10434ada0(void)

{
  _swift_getObjectType();
  FUN_10434ac34();
  _objc_msgSendSuper2(&stack0xffffffffffffffd0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10434ade4; end: 10434ae3b; -[SCWebLensRetentionStore dealloc] */

void FUN_10434ade4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain();
  FUN_10434ac34();
  uStack_40 = param_1;
  uStack_38 = uVar1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10434ae3c; end: 10434ae8b; -[SCWebLensRetentionStore .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10434ae3c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113070258));
  func_0x00010058d43c(*(undefined8 *)(param_1 + _DAT_113070260),
                      ((undefined8 *)(param_1 + _DAT_113070260))[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113070250 + 8))
  ;
  return;
}



/* Entry: 10434ae8c; end: 10434ae8f;  */

void FUN_10434ae8c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 10434ae90; end: 10434af1f;  */

void FUN_10434ae90(void)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined1 *)(unaff_x20 + 0x18) = 1;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  return;
}



/* Entry: 10434af20; end: 10434afeb;  */

undefined8 FUN_10434af20(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x20,auStack_38,0,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  _objc_retain(uVar1);
  return uVar1;
}



/* Entry: 10434afec; end: 10434b01b;  */

undefined1  [16] FUN_10434afec(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  _swift_beginAccess(unaff_x20 + 0x28,param_1,0x21,0);
  auVar1._8_8_ = unaff_x20 + 0x28;
  auVar1._0_8_ = FUN_10434b01c;
  return auVar1;
}



/* Entry: 10434b01c; end: 10434b033;  */

void FUN_10434b01c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 10434b034; end: 10434b0df;  */

void FUN_10434b034(void)

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



/* Entry: 10434b0e0; end: 10434b107;  */

void FUN_10434b0e0(ulong *param_1,ulong *param_2)

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



/* Entry: 10434b108; end: 10434b153; -[SCWebLensApplyEvent lensId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10434b108(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113070340);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113070340))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10434b154; end: 10434b163; -[SCWebLensApplyEvent phase] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10434b154(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113070348);
}



/* Entry: 10434b164; end: 10434b173; -[SCWebLensApplyEvent mediaTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10434b164(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113070350);
}



/* Entry: 10434b174; end: 10434b27b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10434b174(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113070340);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113070348) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113070350) = param_1;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10434b27c; end: 10434b307; -[SCWebLensApplyEvent initWithLensId:phase:mediaTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10434b27c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_2;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_2 + _DAT_113070340);
  *puVar1 = param_4;
  puVar1[1] = param_3;
  *(undefined8 *)(param_2 + _DAT_113070348) = param_5;
  *(undefined8 *)(param_2 + _DAT_113070350) = param_1;
  lStack_50 = param_2;
  lStack_48 = lVar2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10434b308; end: 10434b367; -[SCWebLensApplyEvent init] */

void FUN_10434b308(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("WebLensesServices.WebLensApplyEvent",0x23,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10434b334);
  (*pcVar1)();
}



/* Entry: 10434b368; end: 10434b37f; -[SCWebLensApplyEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10434b368(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113070340 + 8))
  ;
  return;
}



/* Entry: 10434b380; end: 10434b3bf;  */

void FUN_10434b380(void)

{
  undefined *puVar1;
  
  if (puRam0000000113070358 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcee120;
  _swift_getWitnessTable(&UNK_10dcee120,&UNK_11075d678);
  puRam0000000113070358 = puVar1;
  return;
}



/* Entry: 10434b3c0; end: 10434b3cf;  */

undefined1  [16] FUN_10434b3c0(void)

{
  return ZEXT816(0x11075d678);
}



/* Entry: 10434b3d0; end: 10434b3ef;  */

void FUN_10434b3d0(void)

{
  _objc_opt_self(&PTR_PTR_11299fe98);
  return;
}



/* Entry: 10434b3f0; end: 10434b43b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10434b3f0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113070388) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10434b43c; end: 10434b493; -[SCWebLensesActiveLensServices initWithPublishing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10434b43c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113070388) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _swift_unknownObjectRetain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 10434b494; end: 10434b4f3; -[SCWebLensesActiveLensServices init] */

void FUN_10434b494(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("WebLensesServices.WebLensesActiveLensServices",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10434b4c0);
  (*pcVar1)();
}



/* Entry: 10434b4f4; end: 10434b503; -[SCWebLensesActiveLensServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10434b4f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_113070388));
  return;
}



/* Entry: 10434b504; end: 10434b633;  */

void FUN_10434b504(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_1);
  return;
}



/* Entry: 10434b634; end: 10434b667;  */

void FUN_10434b634(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10434b668; end: 10434b69f; -[SCWebLensesSendFlowServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10434b668(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_1130703b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_1130703c0));
  return;
}



/* Entry: 10434b6a0; end: 10434b7af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10434b6a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  func_0x0001007549f8(param_1,unaff_x20 + _DAT_1130703f0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113070400);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130703f8);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113070408);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113070410);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113070418);
  *puVar1 = param_10;
  puVar1[1] = param_11;
  puVar2 = auStack_70;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  func_0x0001000834e4(param_1);
  return puVar2;
}



/* Entry: 10434b7b0; end: 10434b80f; -[SCWebLensesServices init] */

void FUN_10434b7b0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("WebLensesServices.WebLensesServices",0x23,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10434b7dc);
  (*pcVar1)();
}



/* Entry: 10434b810; end: 10434b887; -[SCWebLensesServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10434b810(long param_1)

{
  func_0x0001000834e4(param_1 + _DAT_1130703f0);
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_1130703f8));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113070400));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113070408));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113070410));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_113070418));
  return;
}



/* Entry: 10434b888; end: 10434ba53;  */

int FUN_10434b888(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfb < param_2) {
    param_2 = param_2 + 4;
    uVar3 = 2;
    if (0xfffeff < param_2) {
      uVar3 = 4;
    }
    if (param_2 >> 8 < 0xff) {
      uVar3 = 1;
    }
    uVar1 = 0;
    if (0xff < param_2) {
      uVar1 = uVar3;
    }
    if (uVar1 < 2) {
      if ((uVar1 != 0) && (uVar3 = (uint)param_1[1], param_1[1] != 0)) goto LAB_10434b8f0;
    }
    else if (uVar1 == 2) {
      uVar3 = (uint)*(ushort *)(param_1 + 1);
      if (*(ushort *)(param_1 + 1) != 0) {
LAB_10434b8f0:
        return ((uint)*param_1 | uVar3 << 8) - 4;
      }
    }
    else {
      uVar3 = *(uint *)(param_1 + 1);
      if (uVar3 != 0) goto LAB_10434b8f0;
    }
  }
  uVar3 = 0;
  if (1 < *param_1) {
    uVar3 = (*param_1 + 0x7ffffffe & 0x7fffffff) + 1;
  }
  iVar2 = 0;
  if (2 < uVar3) {
    iVar2 = uVar3 - 3;
  }
  return iVar2;
}



/* Entry: 10434ba54; end: 10434ba97;  */

void FUN_10434ba54(long param_1,long *param_2,long param_3)

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



/* Entry: 10434ba98; end: 10434bceb;  */

void FUN_10434ba98(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 10434bcec; end: 10434bd2b;  */

void FUN_10434bcec(void)

{
  undefined *puVar1;
  
  if (puRam0000000113070470 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcee530;
  _swift_getWitnessTable(&UNK_10dcee530,&UNK_11075d990);
  puRam0000000113070470 = puVar1;
  return;
}



/* Entry: 10434bd2c; end: 10434bd2f;  */

void FUN_10434bd2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113070478 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcee568;
  _swift_getWitnessTable(&UNK_10dcee568,&UNK_11075d990);
  puRam0000000113070478 = puVar1;
  return;
}



/* Entry: 10434bd30; end: 10434bd6f;  */

void FUN_10434bd30(void)

{
  undefined *puVar1;
  
  if (puRam0000000113070478 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcee568;
  _swift_getWitnessTable(&UNK_10dcee568,&UNK_11075d990);
  puRam0000000113070478 = puVar1;
  return;
}



/* Entry: 10434bd70; end: 10434bd9b;  */

void FUN_10434bd70(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Entry: 10434bd9c; end: 10434bddb;  */

void FUN_10434bd9c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113070480 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcee630;
  _swift_getWitnessTable(&UNK_10dcee630,&UNK_11075d990);
  puRam0000000113070480 = puVar1;
  return;
}



/* Entry: 10434bddc; end: 10434bddf;  */

void FUN_10434bddc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113070488 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcee658;
  _swift_getWitnessTable(&UNK_10dcee658,&UNK_11075d990);
  puRam0000000113070488 = puVar1;
  return;
}



/* Entry: 10434bde0; end: 10434be1f;  */

void FUN_10434bde0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113070488 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcee658;
  _swift_getWitnessTable(&UNK_10dcee658,&UNK_11075d990);
  puRam0000000113070488 = puVar1;
  return;
}



/* Entry: 10434be20; end: 10434bf9f;  */

void FUN_10434be20(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 10434bfa0; end: 10434c047;  */

void FUN_10434bfa0(ulong *param_1,long param_2)

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
      if (uVar2 == uVar4) goto LAB_10434c034;
    }
    lVar3 = uVar2 - uVar4;
    puVar5 = (ulong *)(param_2 + uVar4 * 8 + 0x20);
    do {
      uVar7 = *puVar5 | uVar7;
      lVar3 = lVar3 + -1;
      puVar5 = puVar5 + 1;
    } while (lVar3 != 0);
  }
LAB_10434c034:
  _swift_bridgeObjectRelease();
  *param_1 = uVar7;
  return;
}



/* Entry: 10434c048; end: 10434c073;  */

undefined1  [16] FUN_10434c048(void)

{
  return ZEXT816(0x11075d990);
}



/* Entry: 10434c074; end: 10434c147;  */

void FUN_10434c074(void)

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



/* Entry: 10434c148; end: 10434c167;  */

void FUN_10434c148(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 10434c168; end: 10434c1a7;  */

void FUN_10434c168(void)

{
  undefined *puVar1;
  
  if (puRam0000000113070490 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcee6b0;
  _swift_getWitnessTable(&UNK_10dcee6b0,&UNK_11075db40);
  puRam0000000113070490 = puVar1;
  return;
}



/* Entry: 10434c1a8; end: 10434c30b;  */

int FUN_10434c1a8(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10434c224;
        goto LAB_10434c208;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10434c208:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_10434c224:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10434c30c; end: 10434c6eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_10434c30c(undefined8 param_1,undefined8 param_2,long param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_88 [24];
  long lStack_70;
  long lStack_68;
  
  lVar3 = 0;
  FUN_104354964();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar9 = lVar4 + _DAT_113070820;
  *(undefined8 *)(lVar9 + 8) = 0;
  _swift_unknownObjectWeakInit(lVar9,0);
  lVar9 = lVar4 + _DAT_113070828;
  *(undefined8 *)(lVar9 + 8) = 0;
  _swift_unknownObjectWeakInit(lVar9,0);
  lVar9 = _DAT_113070830;
  _swift_unknownObjectWeakInit(lVar4 + _DAT_113070830,0);
  *(undefined8 *)(lVar4 + _DAT_113070840) = 0;
  *(undefined8 *)(lVar4 + _DAT_113070850) = 0;
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar4 + _DAT_113070860) = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar2 = _DAT_113070868;
  puVar5 = puVar8;
  FUN_10434c6ec();
  *(undefined **)(lVar4 + lVar2) = puVar5;
  lVar2 = _DAT_113070870;
  puVar5 = puVar8;
  func_0x00010434c7d0();
  *(undefined **)(lVar4 + lVar2) = puVar5;
  lVar2 = _DAT_113070878;
  uVar6 = 0;
  func_0x0001000c6560();
  uVar11 = uVar6;
  _swift_allocObject();
  func_0x0001000c6580();
  *(undefined8 *)(lVar4 + lVar2) = uVar11;
  lVar2 = _DAT_113070880;
  lVar7 = 0;
  func_0x00010435c8c8();
  _swift_allocObject();
  _swift_allocObject(uVar6,0x20,7);
  func_0x0001000c6580();
  *(undefined8 *)(lVar7 + 0x10) = uVar6;
  FUN_10434c8c8();
  *(undefined **)(lVar7 + 0x18) = puVar8;
  *(long *)(lVar4 + lVar2) = lVar7;
  *(undefined1 *)(lVar4 + _DAT_113070888) = 0;
  *(undefined8 *)(lVar4 + _DAT_113070890) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130708a0) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130708a8) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130708b0) = 0;
  *(undefined1 *)(lVar4 + _DAT_1130708b8) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130708c0);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  _swift_unknownObjectWeakAssign(lVar4 + lVar9,param_1);
  *(undefined8 *)(lVar4 + _DAT_113070838) = param_2;
  *(long *)(lVar4 + _DAT_113070858) = param_3;
  *(undefined1 *)(lVar4 + _DAT_113070898) = param_4;
  FUN_10434fd30(0);
  _objc_allocWithZone();
  _swift_retain_n(param_3,2);
  _objc_retain(param_2);
  func_0x00010434eb70();
  lVar9 = 0;
  func_0x00010434fd7c();
  _swift_allocObject();
  *(long *)(lVar9 + 0x10) = param_3;
  *(long *)(lVar4 + _DAT_113070848) = lVar9;
  puVar8 = PTR_s_init_1125d9248;
  lStack_70 = lVar4;
  lStack_68 = lVar3;
  _objc_retain();
  plVar10 = &lStack_70;
  _objc_msgSendSuper2(plVar10,puVar8);
  puVar8 = &UNK_11075dbb8;
  puVar5 = puVar8;
  _swift_allocObject(&UNK_11075dbb8,0x18,7);
  _swift_unknownObjectWeakInit(puVar5 + 0x10,plVar10);
  puVar1 = (undefined8 *)(param_3 + _DAT_113070718);
  uVar11 = *puVar1;
  uVar6 = puVar1[1];
  *puVar1 = FUN_10434c9bc;
  puVar1[1] = puVar5;
  _objc_retain();
  _objc_retain();
  _swift_retain(puVar5);
  func_0x00010058d43c(uVar11,uVar6);
  _swift_release(puVar5);
  _swift_allocObject(&UNK_11075dbb8,0x18,7);
  _swift_unknownObjectWeakInit(puVar8 + 0x10,plVar10);
  _objc_release(plVar10);
  puVar1 = (undefined8 *)(param_3 + _DAT_113070720);
  uVar11 = *puVar1;
  uVar6 = puVar1[1];
  *puVar1 = 0x10434c9c4;
  puVar1[1] = puVar8;
  _swift_retain(puVar8);
  func_0x00010058d43c(uVar11,uVar6);
  _swift_release(puVar8);
  uVar11 = *(undefined8 *)(*(long *)((long)plVar10 + _DAT_113070848) + 0x10);
  _objc_retain(uVar11);
  FUN_10434f4b4(0x80,0);
  _objc_release(plVar10);
  _objc_release(param_3);
  _objc_release(uVar11);
  lVar9 = (long)plVar10 + _DAT_113070820;
  _swift_beginAccess(lVar9,auStack_88,1,0);
  *(undefined8 *)(lVar9 + 8) = param_8;
  _swift_unknownObjectWeakAssign(lVar9,param_7);
  auVar12._8_8_ = &PTR_DAT_11075e410;
  auVar12._0_8_ = plVar10;
  return auVar12;
}



/* Entry: 10434c6ec; end: 10434c8c7;  */

undefined * FUN_10434c6ec(long param_1)

{
  undefined1 uVar1;
  byte bVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined1 *puVar9;
  
  puVar7 = *(undefined **)(param_1 + 0x10);
  puVar4 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar7 != (undefined *)0x0) {
    uVar5 = 0;
    func_0x0001000285a8(0x1130704a8);
    puVar4 = puVar7;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    _swift_retain();
    puVar9 = (undefined1 *)(param_1 + 0x21);
    do {
      bVar2 = puVar9[-1];
      uVar8 = (ulong)bVar2;
      uVar1 = *puVar9;
      func_0x0001028c0d28();
      if ((uVar5 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10434c7cc);
        (*pcVar3)();
      }
      uVar6 = uVar8 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar4 + uVar6 + 0x40) = *(ulong *)(puVar4 + uVar6 + 0x40) | 1L << (uVar8 & 0x3f);
      *(byte *)(*(long *)(puVar4 + 0x30) + uVar8) = bVar2;
      *(undefined1 *)(*(long *)(puVar4 + 0x38) + uVar8) = uVar1;
      if (SCARRY8(*(long *)(puVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10434c7d0);
        (*pcVar3)();
      }
      *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
      puVar7 = puVar7 + -1;
      puVar9 = puVar9 + 2;
    } while (puVar7 != (undefined *)0x0);
    _swift_release(puVar4);
  }
  return puVar4;
}



/* Entry: 10434c8c8; end: 10434c9bb;  */

undefined * FUN_10434c8c8(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar7 = *(undefined **)(param_1 + 0x10);
  puVar4 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar7 != (undefined *)0x0) {
    uVar5 = 0;
    func_0x0001000285a8(0x113070498);
    puVar4 = puVar7;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    _swift_retain();
    puVar9 = (undefined8 *)(param_1 + 0x28);
    do {
      bVar1 = *(byte *)(puVar9 + -1);
      uVar8 = (ulong)bVar1;
      uVar11 = puVar9[1];
      uVar10 = *puVar9;
      _swift_unknownObjectRetain(uVar10);
      func_0x0001028c0d28();
      if ((uVar5 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10434c9b8);
        (*pcVar3)();
      }
      uVar6 = uVar8 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar4 + uVar6 + 0x40) = *(ulong *)(puVar4 + uVar6 + 0x40) | 1L << (uVar8 & 0x3f);
      *(byte *)(*(long *)(puVar4 + 0x30) + uVar8) = bVar1;
      puVar2 = (undefined8 *)(*(long *)(puVar4 + 0x38) + uVar8 * 0x10);
      puVar2[1] = uVar11;
      *puVar2 = uVar10;
      if (SCARRY8(*(long *)(puVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10434c9bc);
        (*pcVar3)();
      }
      *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
      puVar7 = puVar7 + -1;
      puVar9 = puVar9 + 3;
    } while (puVar7 != (undefined *)0x0);
    _swift_release(puVar4);
  }
  return puVar4;
}



/* Entry: 10434c9bc; end: 10434c9e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10434c9bc(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    lVar3 = lVar1 + _DAT_113070820;
    _swift_beginAccess(lVar3,auStack_60,0,0);
    lVar2 = lVar3;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar2 == 0) {
      _objc_release(lVar1);
    }
    else {
      lVar3 = *(long *)(lVar3 + 8);
      _objc_release(lVar1);
      _swift_getObjectType(lVar2);
      (**(code **)(lVar3 + 8))();
      _swift_unknownObjectRelease(lVar2);
    }
  }
  return;
}



/* Entry: 10434c9e8; end: 10434ca9f;  */

void FUN_10434c9e8(byte param_1)

{
  byte bVar1;
  long unaff_x20;
  byte bStack_39;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x58,auStack_38,1,0);
  bVar1 = *(byte *)(unaff_x20 + 0x58);
  bStack_39 = param_1 & 1;
  *(byte *)(unaff_x20 + 0x58) = param_1;
  if (bStack_39 != bVar1) {
    func_0x0001002a64a8(&bStack_39);
  }
  return;
}



/* Entry: 10434caa0; end: 10434ceaf;  */

long FUN_10434caa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 uStack_61;
  
  _swift_allocObject();
  uVar1 = 0x113070448;
  func_0x0001000285a8(0x113070448,&UNK_10dcee2c0);
  _swift_allocObject();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar1 = 0x112ea35c0;
  func_0x0001000285a8(0x112ea35c0,&UNK_10dab5c00);
  _swift_allocObject();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  uStack_61 = 0;
  func_0x0001000285a8(0x112d61fd8,&UNK_10d927f90);
  _swift_allocObject();
  puVar2 = &uStack_61;
  func_0x00010042e6a0();
  *(undefined2 *)(unaff_x20 + 0x58) = 1;
  *(undefined1 **)(unaff_x20 + 0x20) = puVar2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  *(undefined8 *)(unaff_x20 + 0x38) = param_3;
  *(undefined8 *)(unaff_x20 + 0x40) = param_4;
  *(undefined8 *)(unaff_x20 + 0x48) = param_5;
  *(undefined8 *)(unaff_x20 + 0x50) = param_6;
  *(undefined8 *)(unaff_x20 + 0x68) = param_10;
  *(undefined8 *)(unaff_x20 + 0x70) = param_7;
  *(undefined1 *)(unaff_x20 + 0x78) = param_8;
  *(undefined8 *)(unaff_x20 + 0x60) = param_9;
  return unaff_x20;
}



/* Entry: 10434ceb0; end: 10434cf23;  */

void FUN_10434ceb0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x50);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  _objc_release(uVar1);
  _objc_release(uVar2);
  _swift_bridgeObjectRelease(uVar3);
  func_0x00010058d43c(*(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10434cf24; end: 10434cfcf;  */

void FUN_10434cf24(void)

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



/* Entry: 10434cfd0; end: 10434cfd3;  */

void FUN_10434cfd0(void)

{
  long lVar1;
  undefined *puVar2;
  
  if (puRam00000001130704b0 != (undefined *)0x0) {
    return;
  }
  lVar1 = (long)puRam00000001130704b0;
  func_0x00010434d014();
  puVar2 = &UNK_10dcee818;
  _swift_getWitnessTable(&UNK_10dcee818,lVar1);
  puRam00000001130704b0 = puVar2;
  return;
}



/* Entry: 10434cfd4; end: 10434d033;  */

void FUN_10434cfd4(void)

{
  long lVar1;
  undefined *puVar2;
  
  if (puRam00000001130704b0 != (undefined *)0x0) {
    return;
  }
  lVar1 = (long)puRam00000001130704b0;
  func_0x00010434d014();
  puVar2 = &UNK_10dcee818;
  _swift_getWitnessTable(&UNK_10dcee818,lVar1);
  puRam00000001130704b0 = puVar2;
  return;
}



/* Entry: 10434d034; end: 10434d047;  */

bool FUN_10434d034(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10434d048; end: 10434d0ab;  */

long FUN_10434d048(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10434d0ac; end: 10434d1a3;  */

undefined8 * FUN_10434d0ac(undefined8 *param_1,undefined8 *param_2)

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
  uVar3 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar3;
  _objc_retain();
  _objc_retain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  return param_1;
}



/* Entry: 10434d1a4; end: 10434d1ff;  */

undefined8 * FUN_10434d1a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _objc_release(uVar1);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Entry: 10434d200; end: 10434d2a7;  */

int FUN_10434d200(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10434d2a8; end: 10434d2cb;  */

void FUN_10434d2a8(undefined8 param_1,long param_2)

{
  (**(code **)(param_2 + 8))();
  return;
}



/* Entry: 10434d2cc; end: 10434d2e3;  */

void FUN_10434d2cc(undefined8 *param_1)

{
  if (-1 < (long)param_1[1]) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*param_1);
  return;
}



/* Entry: 10434d2e4; end: 10434d327;  */

undefined8 * FUN_10434d2e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  func_0x00010434c9dc(uVar1,uVar3);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  func_0x00010434d2d8(uVar2,uVar4);
  return param_1;
}



/* Entry: 10434d328; end: 10434d35f;  */

undefined8 * FUN_10434d328(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x00010434d2d8(uVar1,uVar2);
  return param_1;
}



/* Entry: 10434d360; end: 10434d453;  */

int FUN_10434d360(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7e < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7f;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1f | (uVar1 >> 0x19 & 0x38 | (uint)*(undefined8 *)(param_1 + 2) & 7) << 1) ^
          0x7f;
  if (0x7d < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10434d454; end: 10434d463;  */

undefined1  [16] FUN_10434d454(void)

{
  return ZEXT816(0x11075dd50);
}



/* Entry: 10434d464; end: 10434d48f;  */

void FUN_10434d464(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x00010434d64c(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 10434d490; end: 10434d5c7;  */

void FUN_10434d490(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  
  uVar6 = 0xe900000000000073;
  bVar4 = *unaff_x20;
  uVar7 = 0x736e654c4941796d;
  uVar2 = 0xed00006572616853;
  if (bVar4 != 6) {
    uVar7 = 0xd000000000000011;
    uVar2 = 0x800000010f0c6e30;
  }
  uVar1 = 0xeb00000000647261;
  uVar3 = 0x6f6272656461656c;
  if (bVar4 != 4) {
    uVar1 = 0xec000000656c6767;
    uVar3 = 0x6f546172656d6163;
  }
  if (bVar4 < 6) {
    uVar2 = uVar1;
    uVar7 = uVar3;
  }
  uVar1 = 0x75706e4974616863;
  if (bVar4 != 2) {
    uVar1 = 0x7265726f6c707865;
  }
  uVar3 = 0xe800000000000000;
  if (bVar4 == 2) {
    uVar3 = 0xe900000000000074;
  }
  uVar5 = 0x657469726f766166;
  if (bVar4 != 0) {
    uVar6 = 0xe500000000000000;
    uVar5 = 0x6572616873;
  }
  if (bVar4 < 2) {
    uVar3 = uVar6;
    uVar1 = uVar5;
  }
  if (bVar4 < 4) {
    uVar2 = uVar3;
    uVar7 = uVar1;
  }
  *param_1 = uVar7;
  param_1[1] = uVar2;
  return;
}



/* Entry: 10434d5c8; end: 10434d6af;  */

void FUN_10434d5c8(void)

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



/* Entry: 10434d6b0; end: 10434d6b3;  */

void FUN_10434d6b0(void)

{
  undefined *puVar1;
  
  if (puRam00000001130705a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dceea00;
  _swift_getWitnessTable(&UNK_10dceea00,&UNK_11075de70);
  puRam00000001130705a0 = puVar1;
  return;
}



/* Entry: 10434d6b4; end: 10434d6f3;  */

void FUN_10434d6b4(void)

{
  undefined *puVar1;
  
  if (puRam00000001130705a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dceea00;
  _swift_getWitnessTable(&UNK_10dceea00,&UNK_11075de70);
  puRam00000001130705a0 = puVar1;
  return;
}



/* Entry: 10434d6f4; end: 10434d6f7;  */

void FUN_10434d6f4(void)

{
  undefined *puVar1;
  
  if (puRam00000001130705a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dceeaa8;
  _swift_getWitnessTable(&UNK_10dceeaa8,&UNK_11075df00);
  puRam00000001130705a8 = puVar1;
  return;
}



/* Entry: 10434d6f8; end: 10434d737;  */

void FUN_10434d6f8(void)

{
  undefined *puVar1;
  
  if (puRam00000001130705a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dceeaa8;
  _swift_getWitnessTable(&UNK_10dceeaa8,&UNK_11075df00);
  puRam00000001130705a8 = puVar1;
  return;
}



/* Entry: 10434d738; end: 10434db73;  */

int FUN_10434d738(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf8 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 7) {
      iVar2 = 4;
    }
    if (param_2 + 7 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10434d7b4;
        goto LAB_10434d798;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10434d798:
      return ((uint)*param_1 | uVar1 << 8) - 7;
    }
  }
LAB_10434d7b4:
  iVar2 = *param_1 - 8;
  if (*param_1 < 8) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10434db74; end: 10434dc1f;  */

void FUN_10434db74(void)

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



/* Entry: 10434dc20; end: 10434dc23;  */

void FUN_10434dc20(void)

{
  undefined *puVar1;
  
  if (puRam0000000113070698 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dceeb30;
  _swift_getWitnessTable(&UNK_10dceeb30,&UNK_11075dfe8);
  puRam0000000113070698 = puVar1;
  return;
}



/* Entry: 10434dc24; end: 10434dc63;  */

void FUN_10434dc24(void)

{
  undefined *puVar1;
  
  if (puRam0000000113070698 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dceeb30;
  _swift_getWitnessTable(&UNK_10dceeb30,&UNK_11075dfe8);
  puRam0000000113070698 = puVar1;
  return;
}



/* Entry: 10434dc64; end: 10434ddc7;  */

int FUN_10434dc64(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10434dce0;
        goto LAB_10434dcc4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10434dcc4:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_10434dce0:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10434ddc8; end: 10434dfc3;  */

void FUN_10434ddc8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar4 = 0xed00006c6576654c;
  uVar2 = 0x706f54617265706f;
  if (cVar3 != '\x01') {
    uVar4 = 0xe600000000000000;
    uVar2 = 0x746168436e69;
  }
  uVar1 = 0x6472614364656566;
  if (cVar3 != '\0') {
    uVar1 = uVar2;
  }
  uVar2 = 0xe800000000000000;
  if (cVar3 != '\0') {
    uVar2 = uVar4;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10434dfc4; end: 10434e03f;  */

void FUN_10434dfc4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  char *unaff_x20;
  
  cVar3 = *unaff_x20;
  uVar4 = 0xed00006c6576654c;
  uVar2 = 0x706f54617265706f;
  if (cVar3 != '\x01') {
    uVar4 = 0xe600000000000000;
    uVar2 = 0x746168436e69;
  }
  uVar1 = 0x6472614364656566;
  if (cVar3 != '\0') {
    uVar1 = uVar2;
  }
  uVar2 = 0xe800000000000000;
  if (cVar3 != '\0') {
    uVar2 = uVar4;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 10434e040; end: 10434e25b;  */

undefined1  [16] FUN_10434e040(byte param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  if (param_1 < 6) {
    if (param_1 == 3) {
      auVar7._8_8_ = 0xeb00000000415443;
      auVar7._0_8_ = 0x6e72755472756f79;
      return auVar7;
    }
    if (param_1 == 4) {
      auVar10._8_8_ = 0xee00726577617244;
      auVar10._0_8_ = 0x74616843736e656c;
      return auVar10;
    }
    if (param_1 == 5) {
      auVar5._8_8_ = 0xef726579616c7069;
      auVar5._0_8_ = 0x746c754d6576696c;
      return auVar5;
    }
  }
  else if (param_1 < 8) {
    if (param_1 == 6) {
      auVar8._8_8_ = 0xe900000000000064;
      auVar8._0_8_ = 0x72616f626c6c6962;
      return auVar8;
    }
    if (param_1 == 7) {
      auVar4._8_8_ = 0xed00007265726f6c;
      auVar4._0_8_ = 0x70784573656d6167;
      return auVar4;
    }
  }
  else {
    if (param_1 == 8) {
      auVar9._8_8_ = 0x800000010f1f7420;
      auVar9._0_8_ = 0xd000000000000010;
      return auVar9;
    }
    if (param_1 == 9) {
      auVar6._8_8_ = 0xed00006f72654874;
      auVar6._0_8_ = 0x6867696c746f7073;
      return auVar6;
    }
  }
  __ss11_StringGutsV4growyySiF(0x10);
  _swift_bridgeObjectRelease(0xe000000000000000);
  if (param_1 == 0) {
    uVar3 = 0xe800000000000000;
    uVar2 = 0x6472614364656566;
  }
  else {
    uVar3 = 0xed00006c6576654c;
    uVar2 = 0x706f54617265706f;
    if (param_1 != 1) {
      uVar3 = 0xe600000000000000;
      uVar2 = 0x746168436e69;
    }
  }
  __sSS6appendyySSF(uVar2,uVar3);
  _swift_bridgeObjectRelease(uVar3);
  __sSS6appendyySSF(0x29,0xe100000000000000);
  auVar1._8_8_ = 0xed00002841544373;
  auVar1._0_8_ = 0x656d614779616c70;
  return auVar1;
}



/* Entry: 10434e25c; end: 10434e353;  */

bool FUN_10434e25c(uint param_1,uint param_2)

{
  param_1 = param_1 & 0xff;
  param_2 = param_2 & 0xff;
  if (param_1 < 6) {
    if (param_1 == 3) {
      if (param_2 != 3) {
        return false;
      }
      return true;
    }
    if (param_1 == 4) {
      if (param_2 != 4) {
        return false;
      }
      return true;
    }
    if (param_1 == 5) {
      if (param_2 != 5) {
        return false;
      }
      return true;
    }
  }
  else if (param_1 < 8) {
    if (param_1 == 6) {
      if (param_2 != 6) {
        return false;
      }
      return true;
    }
    if (param_1 == 7) {
      if (param_2 != 7) {
        return false;
      }
      return true;
    }
  }
  else {
    if (param_1 == 8) {
      if (param_2 != 8) {
        return false;
      }
      return true;
    }
    if (param_1 == 9) {
      if (param_2 != 9) {
        return false;
      }
      return true;
    }
  }
  if (param_2 - 3 < 7) {
    return false;
  }
  return param_1 == param_2;
}



/* Entry: 10434e354; end: 10434e3b7;  */

ulong FUN_10434e354(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 10434e3b8; end: 10434e3bb;  */

void FUN_10434e3b8(void)

{
  undefined *puVar1;
  
  if (puRam00000001130706a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dceec88;
  _swift_getWitnessTable(&UNK_10dceec88,&UNK_11075e0b0);
  puRam00000001130706a0 = puVar1;
  return;
}



/* Entry: 10434e3bc; end: 10434e3fb;  */

void FUN_10434e3bc(void)

{
  undefined *puVar1;
  
  if (puRam00000001130706a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dceec88;
  _swift_getWitnessTable(&UNK_10dceec88,&UNK_11075e0b0);
  puRam00000001130706a0 = puVar1;
  return;
}



/* Entry: 10434e3fc; end: 10434e7e3;  */

int FUN_10434e3fc(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10434e478;
        goto LAB_10434e45c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10434e45c:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_10434e478:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10434e7e4; end: 10434e87f;  */

undefined8 * FUN_10434e7e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  func_0x00010434e7c0(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 10434e880; end: 10434e8c3;  */

undefined8 * FUN_10434e880(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  func_0x0001032d9cb0(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 10434e8c4; end: 10434e99b;  */

int FUN_10434e8c4(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10434e99c; end: 10434ed23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10434e99c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_113070740;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_113070740);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_allocWithZone();
    func_0x00010bfee200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c182220();
    func_0x00010c219b60(puVar3,param_2,0);
    _objc_release(puVar3);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    _objc_retain(puVar3);
    _objc_release(uVar4);
    puVar2 = (undefined *)0x0;
  }
  _objc_retain(puVar2);
  return puVar3;
}



/* Entry: 10434ed24; end: 10434f2ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10434ed24(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long unaff_x20;
  
  func_0x00010c219b60();
  func_0x00010c21e900();
  func_0x00010c1af000();
  uVar1 = 0xd00000000000001f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001f,0x800000010f13b820);
  func_0x00010c160fc0();
  _objc_release(uVar1);
  FUN_10434e99c();
  func_0x00010befbb60();
  _objc_release(uVar1);
  func_0x00010434ea34();
  func_0x00010befbb60();
  _objc_release(uVar1);
  func_0x00010434eacc();
  func_0x00010befbb60();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  _objc_opt_self();
  puVar3 = puVar2;
  func_0x0001008478a8();
  _swift_allocObject();
  *(undefined8 *)(puVar3 + 0x18) = 0x1d;
  *(undefined8 *)(puVar3 + 0x10) = 0xe;
  lVar4 = unaff_x20;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf49420(0x404c000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  *(long *)(puVar3 + 0x20) = lVar5;
  lVar4 = unaff_x20;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf49420(0x404c000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  *(long *)(puVar3 + 0x28) = lVar5;
  lVar4 = _DAT_113070740;
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_113070740);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = unaff_x20;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(lVar5);
  *(undefined8 *)(puVar3 + 0x30) = uVar1;
  uVar6 = *(undefined8 *)(unaff_x20 + lVar4);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = unaff_x20;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010bf493c0(0xc020000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(lVar5);
  *(undefined8 *)(puVar3 + 0x38) = uVar1;
  uVar6 = *(undefined8 *)(unaff_x20 + lVar4);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = unaff_x20;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(lVar5);
  *(undefined8 *)(puVar3 + 0x40) = uVar1;
  uVar6 = *(undefined8 *)(unaff_x20 + lVar4);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = unaff_x20;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010bf493c0(0xc020000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(lVar4);
  *(undefined8 *)(puVar3 + 0x48) = uVar1;
  lVar4 = _DAT_113070748;
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_113070748);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = unaff_x20;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(lVar5);
  *(undefined8 *)(puVar3 + 0x50) = uVar1;
  uVar6 = *(undefined8 *)(unaff_x20 + lVar4);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = unaff_x20;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(lVar5);
  *(undefined8 *)(puVar3 + 0x58) = uVar1;
  uVar6 = *(undefined8 *)(unaff_x20 + lVar4);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = unaff_x20;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(lVar5);
  *(undefined8 *)(puVar3 + 0x60) = uVar1;
  uVar6 = *(undefined8 *)(unaff_x20 + lVar4);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = unaff_x20;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(lVar4);
  *(undefined8 *)(puVar3 + 0x68) = uVar1;
  lVar4 = _DAT_113070750;
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_113070750);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = unaff_x20;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(lVar5);
  *(undefined8 *)(puVar3 + 0x70) = uVar1;
  uVar6 = *(undefined8 *)(unaff_x20 + lVar4);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = unaff_x20;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(lVar5);
  *(undefined8 *)(puVar3 + 0x78) = uVar1;
  uVar6 = *(undefined8 *)(unaff_x20 + lVar4);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = unaff_x20;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(lVar5);
  *(undefined8 *)(puVar3 + 0x80) = uVar1;
  uVar6 = *(undefined8 *)(unaff_x20 + lVar4);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(unaff_x20);
  *(undefined8 *)(puVar3 + 0x88) = uVar1;
  uVar1 = 0;
  func_0x000100847984(0);
  puVar7 = puVar3;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puVar3,uVar1);
  _swift_release(puVar3);
  func_0x00010beef8c0(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 10434f300; end: 10434f47f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10434f300(ulong param_1)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  code *pcVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar2 = (uint)param_1 >> 6 & 3;
  if (uVar2 == 0) {
    uVar4 = param_1;
    func_0x00010434ea34();
    if ((param_1 & 1) == 0) {
      func_0x0001000d224c(&uStack_50);
      uVar5 = uStack_50;
      _swift_getObjectType(uStack_50);
      bVar1 = *(byte *)(unaff_x20 + _DAT_113070738);
      pcVar6 = *(code **)(lStack_48 + 0x20);
      uVar7 = uStack_50;
    }
    else {
      func_0x0001000d224c(&uStack_50);
      uVar5 = uStack_50;
      _swift_getObjectType(uStack_50);
      bVar1 = *(byte *)(unaff_x20 + _DAT_113070738);
      pcVar6 = *(code **)(lStack_48 + 0x18);
      uVar7 = uStack_50;
    }
    uVar3 = (ulong)bVar1;
    (*pcVar6)(uVar3,uVar5,lStack_48);
    _swift_unknownObjectRelease(uVar7);
    func_0x00010c1a9f00(uVar4);
    _objc_release(uVar4);
  }
  else {
    if (uVar2 != 1) {
      func_0x00010434ea34();
      func_0x00010c1a9f00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
    func_0x00010434ea34();
    func_0x0001000d224c(&uStack_50);
    uVar5 = uStack_50;
    _swift_getObjectType(uStack_50);
    uVar3 = 4;
    (**(code **)(lStack_48 + 8))(4,uVar5,lStack_48);
    _swift_unknownObjectRelease(uStack_50);
    func_0x00010c1a9f00(param_1);
    _objc_release(param_1);
  }
  _objc_release(uVar3);
  return;
}



/* Entry: 10434f480; end: 10434f4b3; -[_TtC15GamesUIServices22ActionBarCaptureButton initWithCoder:] */

undefined8 FUN_10434f480(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10434fdb4();
  _objc_retain(param_3);
  return param_1;
}



/* Entry: 10434f4b4; end: 10434f67f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10434f4b4(undefined8 param_1,ulong param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  uint uVar6;
  undefined8 uVar7;
  undefined1 uStack_71;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar5 = unaff_x20;
  _swift_getObjectType();
  lVar4 = _DAT_113070730;
  bVar1 = *(byte *)(unaff_x20 + _DAT_113070730) >> 6;
  uVar6 = (uint)param_1;
  if (bVar1 == 0) {
    if (0x3f < (uVar6 & 0xff)) goto LAB_10434f53c;
  }
  else {
    if (bVar1 != 1) {
      if ((uVar6 & 0xff) == 0x80) {
        return;
      }
      goto LAB_10434f53c;
    }
    if ((uVar6 & 0xc0) != 0x40) goto LAB_10434f53c;
  }
  if (((*(byte *)(unaff_x20 + _DAT_113070730) ^ uVar6) & 1) == 0) {
    return;
  }
LAB_10434f53c:
  uStack_70 = 0;
  uStack_68 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x13);
  __sSS6appendyySSF(0x6574617453746573,0xea0000000000203a);
  puVar3 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
  puVar2 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
  uStack_71 = *(undefined1 *)(unaff_x20 + lVar4);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&uStack_71,&uStack_70,&UNK_11075d960,PTR___ss26DefaultStringInterpolationVN_11034ec00,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  __sSS6appendyySSF(0x209286e220,0xa500000000000000);
  uStack_71 = (char)param_1;
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&uStack_71,&uStack_70,&UNK_11075d960,puVar2,puVar3);
  uVar7 = uStack_68;
  func_0x0001007d6c6c(1,uStack_70,uStack_68,lVar5,&PTR_DAT_11075ef40);
  _swift_bridgeObjectRelease(uVar7);
  *(char *)(unaff_x20 + lVar4) = (char)param_1;
  if ((param_2 & 1) == 0) {
    FUN_10434f300(param_1);
    FUN_10434e99c();
    if ((uVar6 & 0xff) < 0x40) {
      uVar7 = 0x3ff0000000000000;
    }
    else {
      uVar7 = 0;
    }
    func_0x00010c1677c0(uVar7,param_1);
    _objc_release(param_1);
  }
  else {
    FUN_10434f680(param_1);
  }
  return;
}


