/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102003170; end: 1020031a3;  */

void FUN_102003170(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1020031a4; end: 10200320b; -[_TtC29SCRecipientPickerSectionScope29SCRecipientPickerSectionScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020031a4(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e4ed80));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e4ed88));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e4ed90));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e4ed98));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4eda0));
  return;
}



/* Entry: 10200320c; end: 10200322b;  */

void FUN_10200320c(void)

{
  func_0x000107c61168(&PTR_PTR_112815b10);
  return;
}



/* Entry: 10200322c; end: 10200326b;  */

void FUN_10200322c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112e4ee00;
  func_0x0001000285a8(0x112e4ee00,&UNK_10da4b610);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 10200326c; end: 10200336f;  */

void FUN_10200326c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e4ee08,&UNK_10da4b618);
  puVar1 = &UNK_1104ba790;
  func_0x000107c613fc(&UNK_1104ba790,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102003370,puVar1);
  return;
}



/* Entry: 102003370; end: 102003377;  */

void FUN_102003370(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_40);
  FUN_102003aac();
  func_0x000107c613fc();
  uVar1 = uStack_40;
  func_0x00010200379c();
  func_0x000107c61170(uStack_38);
  func_0x000107c61574(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 102003378; end: 1020033d3;  */

undefined8 FUN_102003378(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_2;
  func_0x00010200379c(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61574(param_2);
  return uVar1;
}



/* Entry: 1020033d4; end: 1020033f7;  */

void FUN_1020033d4(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1020033f8; end: 1020034bb;  */

void FUN_1020033f8(void)

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



/* Entry: 1020034bc; end: 1020034cf;  */

void FUN_1020034bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e4ef58 == (undefined *)0x0 || ((ulong)puRam0000000112e4ef58 & 1) != 0) {
    puVar1 = &UNK_10e8d3624;
    func_0x000107c61518(&UNK_10e8d3624,0x28,0,0);
    puRam0000000112e4ef58 = puVar1;
  }
  return;
}



/* Entry: 1020034d0; end: 1020035f7;  */

ulong FUN_1020034d0(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1020035f8);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_1020035f8(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1020035f4);
      (*pcVar1)();
    }
    FUN_102003678(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 1020035f8; end: 102003677;  */

undefined * FUN_1020035f8(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_1020034bc();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 102003678; end: 1020038db;  */

long FUN_102003678(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102003798);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10200379c);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112e4ef50;
        func_0x0001000285a8(0x112e4ef50,&UNK_10da4b840);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112e4ef50;
      func_0x0001000285a8(0x112e4ef50,&UNK_10da4b840);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102003794);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 1020038dc; end: 1020038df;  */

void FUN_1020038dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e4ee48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da4b628;
  func_0x000107c61520(&UNK_10da4b628,&UNK_1104ba828);
  puRam0000000112e4ee48 = puVar1;
  return;
}



/* Entry: 1020038e0; end: 10200394b;  */

void FUN_1020038e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e4ee48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da4b628;
  func_0x000107c61520(&UNK_10da4b628,&UNK_1104ba828);
  puRam0000000112e4ee48 = puVar1;
  return;
}



/* Entry: 10200394c; end: 10200394f;  */

void FUN_10200394c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e4ee60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da4b6d0;
  func_0x000107c61520(&UNK_10da4b6d0,&UNK_1104ba8d8);
  puRam0000000112e4ee60 = puVar1;
  return;
}



/* Entry: 102003950; end: 1020039bb;  */

void FUN_102003950(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e4ee60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da4b6d0;
  func_0x000107c61520(&UNK_10da4b6d0,&UNK_1104ba8d8);
  puRam0000000112e4ee60 = puVar1;
  return;
}



/* Entry: 1020039bc; end: 1020039ff;  */

void FUN_1020039bc(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 102003a00; end: 102003a03;  */

void FUN_102003a00(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e4ee78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da4b740;
  func_0x000107c61520(&UNK_10da4b740,&UNK_1104ba8d8);
  puRam0000000112e4ee78 = puVar1;
  return;
}



/* Entry: 102003a04; end: 102003a43;  */

void FUN_102003a04(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e4ee78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da4b740;
  func_0x000107c61520(&UNK_10da4b740,&UNK_1104ba8d8);
  puRam0000000112e4ee78 = puVar1;
  return;
}



/* Entry: 102003a44; end: 102003a47;  */

void FUN_102003a44(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e4ee80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da4b6f8;
  func_0x000107c61520(&UNK_10da4b6f8,&UNK_1104ba8d8);
  puRam0000000112e4ee80 = puVar1;
  return;
}



/* Entry: 102003a48; end: 102003a87;  */

void FUN_102003a48(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e4ee80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da4b6f8;
  func_0x000107c61520(&UNK_10da4b6f8,&UNK_1104ba8d8);
  puRam0000000112e4ee80 = puVar1;
  return;
}



/* Entry: 102003a88; end: 102003aab;  */

void FUN_102003a88(void)

{
  return;
}



/* Entry: 102003aac; end: 102003acb;  */

void FUN_102003aac(void)

{
  func_0x000107c61168(&PTR_PTR_112e4eef0);
  return;
}



/* Entry: 102003acc; end: 102003c5f;  */

int FUN_102003acc(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102003b48;
        goto LAB_102003b2c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102003b2c:
      return ((uint)*param_1 | uVar1 << 8) - 7;
    }
  }
LAB_102003b48:
  iVar2 = *param_1 - 8;
  if (*param_1 < 8) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102003c60; end: 102003cab;  */

void FUN_102003c60(undefined8 param_1)

{
  func_0x0001000285a8(0x112e4ef60,&UNK_10da4b850);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102003d18,param_1);
  return;
}



/* Entry: 102003cac; end: 102003d17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102003cac(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102003fe0();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e4ef68) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102003d18; end: 102003d1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102003d18(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102003fe0();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e4ef68) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 102003d20; end: 102003d6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102003d20(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e4ef68) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102003d6c; end: 102003e87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_102003d6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  FUN_1020041a4(0);
  func_0x000107c610f8();
  func_0x000107c615f0(param_1);
  func_0x000107c615f0(param_2);
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x00010200408c(param_1,param_2,param_3,param_4);
  uStack_58 = param_1;
  func_0x00010008a7c8(&uStack_48,&uStack_58);
  func_0x000100083b20(&uStack_58);
  func_0x000107c61574(uStack_48);
  uVar2 = uStack_58;
  uVar1 = uStack_58;
  func_0x000107c614f0(uStack_58);
  (**(code **)(lStack_50 + 0x10))();
  func_0x000107c615e8(uVar2);
  func_0x000100083b20(&lStack_60);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  uVar2 = *(undefined8 *)(lStack_60 + 0x10);
  func_0x000107c61434(uVar2);
  func_0x000107c61574(lStack_60);
  return uVar2;
}



/* Entry: 102003e88; end: 102003f5f; -[_TtC41RecipientPickerSectionSaberPluginRegistry46RecipientPickerSectionSaberPluginScopeServices buildWithActionHandler:eventTracker:performer:selectionTracker:] */

void FUN_102003e88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c615f0(param_6);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102003d6c(param_3,param_4,param_5,param_6);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c615e8(param_6);
  func_0x000107c61170(param_1);
  uVar2 = 0x112e4ef50;
  func_0x0001000285a8(0x112e4ef50,&UNK_10da4b840);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 102003f60; end: 102003fbf; -[_TtC41RecipientPickerSectionSaberPluginRegistry46RecipientPickerSectionSaberPluginScopeServices init] */

void FUN_102003f60(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("RecipientPickerSectionSaberPluginRegistry.RecipientPickerSectionSaberPluginScopeServices"
                      ,0x58,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102003f8c);
  (*pcVar1)();
}



/* Entry: 102003fc0; end: 102003fdf; -[_TtC41RecipientPickerSectionSaberPluginRegistry46RecipientPickerSectionSaberPluginScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102003fc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e4ef68));
  return;
}



/* Entry: 102003fe0; end: 102003fff;  */

void FUN_102003fe0(void)

{
  func_0x000107c61168(&PTR_PTR_112815bf0);
  return;
}



/* Entry: 102004000; end: 102004117;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102004000(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e4ef98) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e4efa0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e4efa8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e4efb0) = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102004118; end: 10200414b;  */

void FUN_102004118(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10200414c; end: 1020041a3; -[_TtC38RecipientPickerSectionSaberPluginScope38RecipientPickerSectionSaberPluginScope .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102004168: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102004188: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010200416c) */
/* WARNING: Removing unreachable block (ram,0x00010200418c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10200414c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e4ef98));
  return;
}



/* Entry: 1020041a4; end: 1020041c3;  */

void FUN_1020041a4(void)

{
  func_0x000107c61168(&PTR_PTR_112815cb0);
  return;
}



/* Entry: 1020041c4; end: 1020041d3;  */

undefined1  [16] FUN_1020041c4(void)

{
  return ZEXT816(0x1104baa10);
}



/* Entry: 1020041d4; end: 10200423f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020041d4(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1020045c8();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e4f000) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102004240; end: 1020042ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102004240(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e4f000) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1020042ac; end: 10200430b; -[_TtC43CustomStoryMenuScopedFactoryServiceProvider31SCCustomStoryMenuScopedServices init] */

void FUN_1020042ac(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CustomStoryMenuScopedFactoryServiceProvider.SCCustomStoryMenuScopedServices",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020042d8);
  (*pcVar1)();
}



/* Entry: 10200430c; end: 10200431b; -[_TtC43CustomStoryMenuScopedFactoryServiceProvider31SCCustomStoryMenuScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10200430c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e4f000));
  return;
}



/* Entry: 10200431c; end: 102004387;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10200431c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104babf8;
  func_0x000107c613fc(&UNK_1104babf8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_102004660,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102004388; end: 102004423;  */

void FUN_102004388(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104bab08;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104bab08;
  return;
}



/* Entry: 102004424; end: 10200445b;  */

void FUN_102004424(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 10200445c; end: 102004463;  */

undefined8 FUN_10200445c(void)

{
  return 0x1b;
}



/* Entry: 102004464; end: 102004597;  */

void FUN_102004464(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1104bac20;
  func_0x000107c613fc(&UNK_1104bac20,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102004638;
  func_0x00010058fa64(FUN_102004638,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102004598; end: 1020045c7;  */

undefined ** FUN_102004598(void)

{
  return &PTR_DAT_11306f1e8;
}



/* Entry: 1020045c8; end: 1020045e7;  */

void FUN_1020045c8(void)

{
  func_0x000107c61168(&PTR_PTR_112815d88);
  return;
}



/* Entry: 1020045e8; end: 102004637;  */

undefined1  [16] FUN_1020045e8(void)

{
  return ZEXT816(0x1104bab58);
}



/* Entry: 102004638; end: 10200465f;  */

void FUN_102004638(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 102004660; end: 102004663;  */

void FUN_102004660(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102004664; end: 102004793;  */

/* WARNING: Possible PIC construction at 0x000102004734: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102004744: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102004754: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102004764: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102004758) */
/* WARNING: Removing unreachable block (ram,0x000102004748) */
/* WARNING: Removing unreachable block (ram,0x000102004738) */
/* WARNING: Removing unreachable block (ram,0x000102004768) */

void FUN_102004664(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_1104baca8;
  func_0x000107c613fc(&UNK_1104baca8,0x58,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  uVar2 = 0x112e4f070;
  func_0x0001000285a8(0x112e4f070,&UNK_10da4bc00);
  func_0x000107c613fc();
  uVar3 = 0x102004ea4;
  func_0x0001000841fc(0x102004ea4,puVar1,uVar2);
  func_0x000100084214(&UNK_10da4bbd0,0x2d,2);
  *param_1 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 102004794; end: 1020047c7;  */

void FUN_102004794(void)

{
  long unaff_x20;
  
  FUN_102004664(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 1020047c8; end: 1020047d7;  */

undefined1  [16] FUN_1020047c8(void)

{
  return ZEXT816(0x1104bac88);
}



/* Entry: 1020047d8; end: 102004e3f;  */

void FUN_1020047d8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined8 *puVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  code *pcVar15;
  char *pcVar16;
  undefined8 *puVar17;
  undefined *puVar18;
  code *pcVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 auStack_70 [2];
  
  uVar22 = *param_2;
  func_0x0001000285a8(0x112e4f078,&UNK_10da4bc08);
  puVar1 = auStack_70;
  auStack_70[0] = uVar22;
  func_0x0001000838ec();
  puVar2 = puVar1;
  func_0x00010200760c();
  pcVar3 = "SCCustomStoryMembersScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCCustomStoryMembersScopeExposerSubjectServiceProvider",0x36,2);
  FUN_102007658();
  pcVar4 = "SCCustomStorySettingsScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCCustomStorySettingsScopeExposerSubjectServiceProvider",0x37,2);
  FUN_1020076a4();
  pcVar5 = "SCSaveStoryScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCSaveStoryScopeExposerSubjectServiceProvider",0x2d,2);
  FUN_1020076f0();
  pcVar6 = "SCSendToListsEditScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCSendToListsEditScopeExposerSubjectServiceProvider",0x33,2);
  func_0x000102007770();
  pcVar7 = "SCSharedStoryMenuScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCSharedStoryMenuScopeExposerSubjectServiceProvider",0x33,2);
  FUN_1020077bc();
  pcVar8 = "SCSharedStoryProfileScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCSharedStoryProfileScopeExposerSubjectServiceProvider",0x36,2);
  FUN_102009c2c();
  func_0x000100082720("SCCustomStorySettingsScopedFactoryServiceProvider",0x31,2);
  puVar9 = puVar2;
  FUN_10200764c();
  func_0x000100082720("SCCustomStoryMembersScopeExposerObservableServiceProvider",0x39,2);
  pcVar10 = pcVar3;
  FUN_102007698();
  func_0x000100082720("SCCustomStorySettingsScopeExposerObservableServiceProvider",0x3a,2);
  pcVar11 = pcVar4;
  FUN_1020076e4();
  func_0x000100082720("SCSaveStoryScopeExposerObservableServiceProvider",0x30,2);
  pcVar12 = pcVar5;
  FUN_102007730();
  func_0x000100082720("SCSendToListsEditScopeExposerObservableServiceProvider",0x36,2);
  pcVar13 = pcVar6;
  FUN_1020077b0();
  func_0x000100082720("SCSharedStoryMenuScopeExposerObservableServiceProvider",0x36,2);
  pcVar14 = pcVar7;
  FUN_102007848();
  func_0x000100082720("SCSharedStoryProfileScopeExposerObservableServiceProvider",0x39,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar15 = FUN_102004424;
  func_0x0001000823a8(FUN_102004424,0);
  func_0x000100082720("SCCustomStoryMenuScopedServicesCleanupRelayServiceProvider",0x3a,2);
  pcVar16 = pcVar8;
  func_0x000104333b88();
  func_0x000100082720("SCCustomStorySettingsScopeServicesServiceProvider",0x31,2);
  puVar17 = puVar2;
  FUN_102007258(puVar2,pcVar3,pcVar16,pcVar4,pcVar5,pcVar6,pcVar7);
  func_0x000100082720("CustomStoryMenuScopeGraphBridgeServicesServiceProvider",0x36,2);
  func_0x0001000285a8(0x112e4f080,&UNK_10da4bc20);
  puVar18 = &UNK_1104bacd0;
  func_0x000107c613fc(&UNK_1104bacd0,0x98,7);
  *(undefined8 **)(puVar18 + 0x10) = puVar1;
  *(undefined8 *)(puVar18 + 0x18) = param_3;
  *(undefined8 *)(puVar18 + 0x20) = param_4;
  *(undefined8 *)(puVar18 + 0x28) = param_5;
  *(undefined8 *)(puVar18 + 0x30) = param_6;
  *(undefined8 *)(puVar18 + 0x38) = param_7;
  *(char **)(puVar18 + 0x40) = pcVar16;
  *(undefined8 *)(puVar18 + 0x48) = param_8;
  *(undefined8 *)(puVar18 + 0x50) = param_9;
  *(undefined8 *)(puVar18 + 0x58) = param_10;
  *(undefined8 *)(puVar18 + 0x60) = param_11;
  *(undefined8 **)(puVar18 + 0x68) = puVar9;
  *(char **)(puVar18 + 0x70) = pcVar11;
  *(char **)(puVar18 + 0x78) = pcVar14;
  *(char **)(puVar18 + 0x80) = pcVar13;
  *(char **)(puVar18 + 0x88) = pcVar10;
  *(char **)(puVar18 + 0x90) = pcVar12;
  func_0x000107c6157c();
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(pcVar16);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(puVar9);
  func_0x000107c6157c(pcVar11);
  func_0x000107c6157c(pcVar14);
  func_0x000107c6157c(pcVar13);
  func_0x000107c6157c(pcVar10);
  func_0x000107c6157c(pcVar12);
  uVar22 = 0x102004ed8;
  func_0x0001000823a8(0x102004ed8,puVar18);
  func_0x000100082720("SCCustomStoryActionMenuEntryPointWrapperServiceProvider",0x37,2);
  func_0x0001000285a8(0x112e4f088,&UNK_10da4bc10);
  puVar18 = &UNK_1104bacf8;
  func_0x000107c613fc(&UNK_1104bacf8,0x30,7);
  *(undefined8 **)(puVar18 + 0x10) = puVar1;
  *(undefined8 **)(puVar18 + 0x18) = puVar17;
  *(undefined8 *)(puVar18 + 0x20) = uVar22;
  *(code **)(puVar18 + 0x28) = pcVar15;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar17);
  func_0x000107c6157c(uVar22);
  func_0x000107c6157c(pcVar15);
  pcVar19 = FUN_102004f1c;
  func_0x0001000823a8(FUN_102004f1c,puVar18);
  func_0x000100082720("SCCustomStoryMenuScopeInitializationPluginRegistryServiceProvider",0x41,2);
  func_0x0001000285a8(0x112e4f008,&UNK_10da4b9c0);
  func_0x000107c6157c(pcVar19);
  uVar20 = 0x102004f28;
  func_0x0001000823a8(0x102004f28,pcVar19);
  func_0x000100082720("SCCustomStoryMenuScopeInitializationServiceProvider",0x33,2);
  func_0x0001000285a8(0x112e4eff8,&UNK_10da4b9b0);
  func_0x000107c6157c(uVar20);
  uVar21 = 0x102004f30;
  func_0x0001000823a8(0x102004f30,uVar20);
  func_0x000100082720("SCCustomStoryMenuScopedServicesServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar18 = &UNK_1104bad20;
  func_0x000107c613fc(&UNK_1104bad20,0x20,7);
  *(undefined8 *)(puVar18 + 0x10) = uVar21;
  *(code **)(puVar18 + 0x18) = pcVar15;
  func_0x000107c6157c(pcVar15);
  uVar21 = 0x102004f38;
  func_0x0001000823a8(0x102004f38,puVar18);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(pcVar10);
  func_0x000107c61574(pcVar11);
  func_0x000107c61574(pcVar12);
  func_0x000107c61574(pcVar13);
  func_0x000107c61574(pcVar14);
  func_0x000107c61574(pcVar15);
  func_0x000107c61574(pcVar16);
  func_0x000107c61574(puVar17);
  func_0x000107c61574(uVar22);
  func_0x000107c61574(pcVar19);
  func_0x000107c61574(uVar20);
  func_0x000100082720("SCCustomStoryMenuScopeEntryPointProvider",0x28,2);
  *param_1 = uVar21;
  return;
}



/* Entry: 102004e40; end: 102004f1b;  */

void FUN_102004e40(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102004f1c; end: 102004f3f;  */

void FUN_102004f1c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102006758(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCCustomStoryMenuScopeInitializationPluginRegistryServiceProvider",0x41,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102004f40; end: 1020064df;  */

void FUN_102004f40(long *param_1,long param_2)

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
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  func_0x000100083b20(&uStack_c0);
  func_0x000100083b20(&uStack_c8);
  func_0x000100083b20(&uStack_d0);
  func_0x000100083b20(&uStack_d8);
  func_0x000100083b20(&uStack_e0);
  func_0x000100083b20(&uStack_e8);
  func_0x000100083b20(&uStack_f0);
  FUN_1020066a8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x48) = uStack_78;
  *(undefined8 *)(param_2 + 0x50) = uStack_80;
  *(undefined8 *)(param_2 + 0x58) = uStack_88;
  *(undefined8 *)(param_2 + 0x60) = uStack_90;
  *(undefined8 *)(param_2 + 0x68) = uStack_98;
  *(undefined8 *)(param_2 + 0x70) = uStack_a0;
  *(undefined8 *)(param_2 + 0x78) = uStack_a8;
  *(undefined8 *)(param_2 + 0x80) = uStack_b0;
  *(undefined8 *)(param_2 + 0x88) = uStack_b8;
  *(undefined8 *)(param_2 + 0x90) = uStack_c0;
  func_0x0001000285a8(0x112e4f090,&UNK_10dbc4da0);
  func_0x000107c610f8();
  uVar1 = uStack_78;
  func_0x000107c61174();
  uVar2 = uStack_80;
  func_0x000107c61174();
  uVar3 = uStack_88;
  func_0x000107c61174();
  uVar4 = uStack_90;
  func_0x000107c61174();
  uVar5 = uStack_98;
  func_0x000107c61174();
  uVar6 = uStack_a0;
  func_0x000107c61174();
  uVar7 = uStack_a8;
  func_0x000107c61174();
  uVar8 = uStack_b0;
  func_0x000107c61174(uStack_b0);
  uVar9 = uStack_b8;
  func_0x000107c61174(uStack_b8);
  uVar10 = uStack_c0;
  func_0x000107c61174();
  uVar13 = uStack_c8;
  func_0x000107c6157c(uStack_c8);
  func_0x00010017da58();
  puVar11 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar13);
  *(undefined **)(param_2 + 0x18) = puVar11;
  func_0x0001000285a8(0x112e4f098,&UNK_10da4bc30);
  func_0x000107c610f8();
  uVar13 = uStack_d0;
  func_0x000107c6157c(uStack_d0);
  func_0x00010017da58();
  puVar11 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar13);
  *(undefined **)(param_2 + 0x20) = puVar11;
  func_0x0001000285a8(0x112e4f0a0,&UNK_10da4bc38);
  func_0x000107c610f8();
  uVar13 = uStack_d8;
  func_0x000107c6157c(uStack_d8);
  func_0x00010017da58();
  puVar11 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar13);
  *(undefined **)(param_2 + 0x28) = puVar11;
  func_0x0001000285a8(0x112e4f0a8,&UNK_10da4bc40);
  func_0x000107c610f8();
  uVar13 = uStack_e0;
  func_0x000107c6157c(uStack_e0);
  func_0x00010017da58();
  puVar11 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar13);
  *(undefined **)(param_2 + 0x30) = puVar11;
  func_0x0001000285a8(0x112e4f0b0,&UNK_10da4bc48);
  func_0x000107c610f8();
  uVar13 = uStack_e8;
  func_0x000107c6157c(uStack_e8);
  func_0x00010017da58();
  puVar11 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar13);
  *(undefined **)(param_2 + 0x38) = puVar11;
  func_0x0001000285a8(0x112e4f0b8,&UNK_10da4bc50);
  func_0x000107c610f8();
  uVar13 = uStack_f0;
  func_0x000107c6157c(uStack_f0);
  func_0x00010017da58();
  puVar11 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar13);
  *(undefined **)(param_2 + 0x40) = puVar11;
  puVar11 = PTR_PTR_1126a9dd0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar11;
  func_0x000107c61174();
  uVar12 = auStack_70[0];
  func_0x000107c61174();
  uVar14 = 0xd000000000000014;
  uVar13 = uVar14;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f055770);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(puVar11);
  uVar13 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(puVar11);
  uVar13 = 0x53736569726f7473;
  func_0x000107c5fadc(0x53736569726f7473,0xef73656369767265);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar13);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f055790);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f0557c0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef1a530);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef134e0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar13);
  func_0x000107c61174(uVar9);
  func_0x000107c61174();
  uVar13 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f0557f0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar13);
  func_0x000107c61174(uVar10);
  func_0x000107c61174();
  uVar13 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f055810);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar13);
  uVar14 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f055830);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar13);
  uVar13 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef21c40);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  uVar14 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c61174(uVar15);
  func_0x000107c61174(uVar14);
  uVar13 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f055850);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar13);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  uVar14 = *(undefined8 *)(param_2 + 0x30);
  func_0x000107c61174();
  func_0x000107c61174(uVar14);
  uVar13 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f055870);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar13);
  uVar14 = *(undefined8 *)(param_2 + 0x38);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f055890);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar13);
  uVar13 = *(undefined8 *)(param_2 + 0x40);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f0558b0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c3e740(uVar15);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61574(uStack_c8);
  func_0x000107c61574(uStack_d0);
  func_0x000107c61574(uStack_d8);
  func_0x000107c61574(uStack_e0);
  func_0x000107c61574(uStack_e8);
  func_0x000107c61574(uStack_f0);
  *param_1 = param_2;
  return;
}



/* Entry: 1020064e0; end: 10200659b;  */

void FUN_1020064e0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  return;
}



/* Entry: 10200659c; end: 1020065a3;  */

undefined8 FUN_10200659c(void)

{
  return 0x1b;
}



/* Entry: 1020065a4; end: 102006627;  */

void FUN_1020065a4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1020066e8,param_2,FUN_1020066ec,param_2,FUN_102006714,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102006628; end: 102006677;  */

undefined8 FUN_102006628(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102006678; end: 1020066a7;  */

undefined ** FUN_102006678(void)

{
  return &PTR_DAT_11306f1e8;
}



/* Entry: 1020066a8; end: 1020066c7;  */

void FUN_1020066a8(void)

{
  func_0x000107c61168(&PTR_PTR_112e4f128);
  return;
}



/* Entry: 1020066c8; end: 1020066eb;  */

undefined1  [16] FUN_1020066c8(void)

{
  return ZEXT816(0x1104bad78);
}



/* Entry: 1020066ec; end: 102006713;  */

void FUN_1020066ec(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102006714; end: 10200671b;  */

undefined8 FUN_102006714(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 10200671c; end: 102006757;  */

void FUN_10200671c(undefined8 *param_1,undefined8 param_2)

{
  FUN_102006758();
  func_0x0001000a7f38("SCCustomStoryMenuScopeInitializationPluginRegistryServiceProvider",0x41,2);
  *param_1 = param_2;
  return;
}



/* Entry: 102006758; end: 102006943;  */

void FUN_102006758(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11075aba0;
  ppuVar4 = &PTR_DAT_11306f1e8;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1104badc8;
  func_0x000107c613fc(&UNK_1104badc8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112e4f208;
  func_0x0001000285a8(0x112e4f208,&UNK_10da4be10);
  func_0x0001000a6ee8(&UNK_1104bb148,"CustomStoryMenuScopeGraphBridgeScopeInitializationPluginKey",
                      0x3b,2,FUN_102006944,puVar2,uVar3,&UNK_1104bb148,&PTR_DAT_112e4f3a0);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1104bad78,
                      "SCCustomStoryActionMenuEntryPointWrapperScopeInitializationPluginKey",0x44,2,
                      FUN_1020069f8,param_3,uVar3,&UNK_1104bad78,&PTR_DAT_112e4f0c0);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_1104badf0;
  func_0x000107c613fc(&UNK_1104badf0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1104bab98,"SCCustomStoryMenuScopedServicesScopeInitializationPluginKey",
                      0x3b,2,FUN_102006aa8,puVar2,uVar3,&UNK_1104bab98,&PTR_DAT_112e4f010);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112e4f210;
  func_0x0001000285a8(0x112e4f210,&UNK_10da4be18);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 102006944; end: 102006983;  */

void FUN_102006944(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1020078b4(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("CustomStoryMenuScopeGraphBridgeScopeInitializationPluginProvider",0x40,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102006984; end: 1020069f7;  */

void FUN_102006984(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x102006ae4;
  func_0x0001000823a8(0x102006ae4,param_3);
  func_0x000100082720("SCCustomStoryActionMenuEntryPointWrapperScopeInitializationPluginProvider",
                      0x49,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1020069f8; end: 1020069ff;  */

void FUN_1020069f8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x102006ae4;
  func_0x0001000823a8();
  func_0x000100082720("SCCustomStoryActionMenuEntryPointWrapperScopeInitializationPluginProvider",
                      0x49,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102006a00; end: 102006aa7;  */

void FUN_102006a00(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104bae18;
  func_0x000107c613fc(&UNK_1104bae18,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_102006adc;
  func_0x0001000823a8(FUN_102006adc,puVar1);
  func_0x000100082720("SCCustomStoryMenuScopedServicesScopeInitializationPluginProvider",0x40,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 102006aa8; end: 102006aaf;  */

void FUN_102006aa8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104bae18;
  func_0x000107c613fc(&UNK_1104bae18,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_102006adc;
  func_0x0001000823a8(FUN_102006adc,puVar3);
  func_0x000100082720("SCCustomStoryMenuScopedServicesScopeInitializationPluginProvider",0x40,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 102006ab0; end: 102006adb;  */

void FUN_102006ab0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102006adc; end: 102006aeb;  */

void FUN_102006adc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1104bac20;
  func_0x000107c613fc(&UNK_1104bac20,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102004638;
  func_0x00010058fa64(FUN_102004638,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102006aec; end: 102006d03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102006aec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_80 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107c610f8();
  lVar3 = unaff_x20;
  FUN_102007168();
  if (lVar3 != 0) {
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_2;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_3;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_4;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_5;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_6;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uStack_70 = param_7;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uStack_68);
    *(long *)(unaff_x20 + _DAT_112e4f218) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112e4f220) = param_8;
    puVar4 = auStack_80;
    func_0x000107c61154(puVar4,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102006d04);
  (*pcVar2)();
}



/* Entry: 102006d04; end: 102006d63; -[_TtC31CustomStoryMenuScopeGraphBridge46CustomStoryMenuScopeGraphBridgeSaberEntryPoint init] */

void FUN_102006d04(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CustomStoryMenuScopeGraphBridge.CustomStoryMenuScopeGraphBridgeSaberEntryPoint"
                      ,0x4e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102006d30);
  (*pcVar1)();
}



/* Entry: 102006d64; end: 102006d9b; -[_TtC31CustomStoryMenuScopeGraphBridge46CustomStoryMenuScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102006d80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102006d84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102006d64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4f218));
  return;
}



/* Entry: 102006d9c; end: 102006dc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102006d9c(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e4f220),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e4f218));
  return;
}



/* Entry: 102006dc4; end: 102006de3;  */

void FUN_102006dc4(void)

{
  func_0x000107c61168(&PTR_PTR_112815e48);
  return;
}



/* Entry: 102006de4; end: 102006e47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102006de4(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112e4f378);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 102006e48; end: 102006e4f;  */

void FUN_102006e48(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102006e50; end: 102006eef;  */

void FUN_102006e50(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102006ef0; end: 102006f0f;  */

void FUN_102006ef0(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 102006f10; end: 102006f97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102006f10(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e4f320) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e4f328);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102006f98);
  (*pcVar2)();
}



/* Entry: 102006f98; end: 10200707f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102006f98(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e4f320);
  *(undefined **)(unaff_x20 + _DAT_112e4f320) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e4f328);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e4f328))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104baf00;
  func_0x000107c613fc(&UNK_1104baf00,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x102007084,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 102007080; end: 10200708b;  */

void FUN_102007080(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10200708c; end: 1020070eb; -[_TtC31CustomStoryMenuScopeGraphBridge46SCCustomStoryMenuScopedServicesSaberEntryPoint init] */

void FUN_10200708c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CustomStoryMenuScopeGraphBridge.SCCustomStoryMenuScopedServicesSaberEntryPoint"
                      ,0x4e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020070b8);
  (*pcVar1)();
}



/* Entry: 1020070ec; end: 102007123; -[_TtC31CustomStoryMenuScopeGraphBridge46SCCustomStoryMenuScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020070ec(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e4f328));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4f320));
  return;
}



/* Entry: 102007124; end: 102007127;  */

void FUN_102007124(void)

{
  return;
}



/* Entry: 102007128; end: 102007147;  */

void FUN_102007128(void)

{
  FUN_102006f98();
  return;
}



/* Entry: 102007148; end: 102007167;  */

void FUN_102007148(void)

{
  func_0x000107c61168(&PTR_PTR_112815f10);
  return;
}



/* Entry: 102007168; end: 102007237;  */

undefined8 FUN_102007168(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112e4f358,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_102007238();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 102007238; end: 102007257;  */

void FUN_102007238(void)

{
  func_0x000107c61168(&PTR_PTR_112815fd8);
  return;
}



/* Entry: 102007258; end: 10200744b;  */

void FUN_102007258(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e4f360,&UNK_10da4bf18);
  puVar1 = &UNK_1104baf48;
  func_0x000107c613fc(&UNK_1104baf48,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x0001000823a8(FUN_10200744c,puVar1);
  return;
}



/* Entry: 10200744c; end: 10200745f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10200744c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x40);
  plVar10 = &lStack_70;
  lVar8 = lVar1;
  FUN_102007238();
  lVar9 = lVar8;
  func_0x000107c610f8();
  *(long *)(lVar9 + _DAT_112e4f368) = lVar1;
  *(undefined8 *)(lVar9 + _DAT_112e4f370) = uVar4;
  *(undefined8 *)(lVar9 + _DAT_112e4f378) = uVar2;
  *(undefined8 *)(lVar9 + _DAT_112e4f380) = uVar5;
  *(undefined8 *)(lVar9 + _DAT_112e4f388) = uVar3;
  *(undefined8 *)(lVar9 + _DAT_112e4f390) = uVar6;
  *(undefined8 *)(lVar9 + _DAT_112e4f398) = uVar11;
  puVar7 = PTR_s_init_1125d9248;
  lStack_70 = lVar9;
  lStack_68 = lVar8;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar11);
  func_0x000107c61154(&lStack_70,puVar7);
  *param_1 = plVar10;
  return;
}



/* Entry: 102007460; end: 102007523;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102007460(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e4f368) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e4f370) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e4f378) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e4f380) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112e4f388) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112e4f390) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112e4f398) = param_7;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}


