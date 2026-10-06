/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104171bc0; end: 104171bc3;  */

void FUN_104171bc0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb7aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSTsE13_copyContents12initializing8IteratorQz_SitSry7ElementQzG_tF_11034db60)();
  return;
}



/* Entry: 104171bc4; end: 104171be3;  */

void FUN_104171bc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  __sSTsE32withContiguousStorageIfAvailableyqd__Sgqd__SRy7ElementQzGKXEKlF
            (param_1,param_2,param_4,param_3);
  return;
}



/* Entry: 104171be4; end: 104171c47;  */

void FUN_104171be4(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x18) <= param_3 && param_3 < *(long *)(unaff_x20 + 0x20)) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
    __ss15ContiguousArrayVyxSicig
              (param_1,param_3,*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(param_4 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdb9380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ss15ContiguousArrayVyxSicig_11034e6e0)
              (param_2,param_3,uVar1,*(undefined8 *)(param_4 + 0x18));
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x104171c48);
  (*pcVar2)();
}



/* Entry: 104171c48; end: 104171c9b;  */

void FUN_104171c48(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  
  if ((long)unaff_x20[3] <= param_2 && param_3 <= (long)unaff_x20[4]) {
    uVar1 = *unaff_x20;
    uVar2 = unaff_x20[1];
    uVar4 = unaff_x20[2];
    *param_1 = uVar1;
    param_1[1] = uVar2;
    param_1[2] = uVar4;
    param_1[3] = param_2;
    param_1[4] = param_3;
    _swift_retain(uVar1);
    _swift_retain(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(uVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x104171c9c);
  (*pcVar3)();
}



/* Entry: 104171c9c; end: 104171ce3;  */

void FUN_104171c9c(long *param_1,long *param_2)

{
  code *pcVar1;
  
  if (!SBORROW8(*param_2,1)) {
    *param_1 = *param_2 + -1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104171cb4);
  (*pcVar1)();
}



/* Entry: 104171ce4; end: 104171dff;  */

undefined1  [16] FUN_104171ce4(long *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  
  puVar3 = PTR__swift_coroFrameAlloc_11034f288;
  puVar4 = (undefined8 *)0x68;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x68,0x7175);
  }
  *param_1 = (long)puVar4;
  lVar1 = *(long *)(param_3 + 0x10);
  lVar2 = *(long *)(param_3 + 0x18);
  lVar5 = 0;
  _swift_getTupleTypeMetadata2(0,lVar1,lVar2,"key value ",0);
  puVar4[9] = lVar5;
  lVar8 = *(long *)(lVar5 + -8);
  puVar4[10] = lVar8;
  lVar8 = *(long *)(lVar8 + 0x40);
  if (puVar3 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(lVar8,0x7175);
  }
  puVar4[0xb] = lVar8;
  uVar7 = *param_2;
  uVar9 = *unaff_x20;
  uVar11 = unaff_x20[3];
  uVar10 = unaff_x20[2];
  puVar4[1] = unaff_x20[1];
  *puVar4 = uVar9;
  puVar4[3] = uVar11;
  puVar4[2] = uVar10;
  puVar4[4] = unaff_x20[4];
  puVar6 = puVar4 + 5;
  FUN_104171e54(puVar6,uVar7,param_3);
  puVar4[0xc] = puVar6;
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(lVar8);
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(lVar8 + *(int *)(lVar5 + 0x30),param_3,lVar2);
  auVar12._8_8_ = lVar8;
  auVar12._0_8_ = FUN_104171e00;
  return auVar12;
}



/* Entry: 104171e00; end: 104171e53;  */

void FUN_104171e00(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  (**(code **)(*(long *)(lVar2 + 0x50) + 8))
            (*(undefined8 *)(lVar2 + 0x58),*(undefined8 *)(lVar2 + 0x48));
  uVar1 = *(undefined8 *)(lVar2 + 0x58);
  (**(code **)(lVar2 + 0x60))(lVar2 + 0x28,param_2);
  _free(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar2);
  return;
}



/* Entry: 104171e54; end: 104171ef7;  */

code * FUN_104171e54(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  _swift_getTupleTypeMetadata2
            (0,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18),"key value ",0);
  lVar2 = *(long *)(lVar1 + -8);
  *param_1 = lVar1;
  param_1[1] = lVar2;
  lVar1 = *(long *)(lVar2 + 0x40);
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(lVar1,0xa5ca);
  }
  param_1[2] = lVar1;
  FUN_104171be4();
  return FUN_104171ef8;
}



/* Entry: 104171ef8; end: 104171f6f;  */

void FUN_104171ef8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[2];
  (**(code **)(param_1[1] + 8))(uVar1,*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(uVar1);
  return;
}



/* Entry: 104171f70; end: 10417203f;  */

void FUN_104171f70(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  param_1[1] = *(undefined8 *)(unaff_x20 + 0x20);
  *param_1 = uVar1;
  return;
}



/* Entry: 104172040; end: 104172063;  */

void FUN_104172040(void)

{
  FUN_1041720d8(0x112d4f688,PTR___sSnyxGSksSxRzSZ6StrideRpzrlMc_11034e120);
  return;
}



/* Entry: 104172064; end: 104172073;  */

void FUN_104172064(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_11034f410)(&UNK_10dcd9c30,param_1);
  return;
}



/* Entry: 104172074; end: 104172097;  */

void FUN_104172074(void)

{
  FUN_1041720d8(0x112f920a0,PTR___sSnyxGSKsSxRzSZ6StrideRpzrlMc_11034e110);
  return;
}



/* Entry: 104172098; end: 1041720b3;  */

void FUN_104172098(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_11034f410)(&UNK_10dcd9bc8,param_1);
  return;
}



/* Entry: 1041720b4; end: 1041720d7;  */

void FUN_1041720b4(void)

{
  FUN_1041720d8(0x112f920a8,PTR___sSnyxGSlsSxRzSZ6StrideRpzrlMc_11034e128);
  return;
}



/* Entry: 1041720d8; end: 10417214b;  */

void FUN_1041720d8(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  if (*param_1 == 0) {
    uVar1 = 0x112d4f678;
    func_0x00010002969c(0x112d4f678,&UNK_10d915670);
    uVar2 = uVar1;
    func_0x000100f79844();
    puStack_40 = PTR___sSiSxsWP_11034dee8;
    uStack_38 = uVar2;
    _swift_getWitnessTable(param_2,uVar1,&puStack_40);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 10417214c; end: 104172153;  */

void FUN_10417214c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_11034f228)();
  return;
}



/* Entry: 104172154; end: 1041721a7;  */

undefined8 * FUN_104172154(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[2];
  param_1[2] = uVar2;
  uVar3 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar3;
  _swift_retain();
  _swift_retain(uVar1);
  _swift_retain(uVar2);
  return param_1;
}



/* Entry: 1041721a8; end: 1041721bb;  */

void FUN_1041721a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e7f29f8);
  return;
}



/* Entry: 1041721bc; end: 1041721eb;  */

void FUN_1041721bc(undefined8 *param_1)

{
  _swift_release(*param_1);
  _swift_release(param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1[2]);
  return;
}



/* Entry: 1041721ec; end: 1041722c3;  */

undefined8 * FUN_1041721ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[2];
  param_1[2] = uVar2;
  uVar3 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar3;
  _swift_retain();
  _swift_retain(uVar1);
  _swift_retain(uVar2);
  return param_1;
}



/* Entry: 1041722c4; end: 104172317;  */

undefined8 * FUN_1041722c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_release(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_release(uVar1);
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  return param_1;
}



/* Entry: 104172318; end: 10417242b;  */

int FUN_104172318(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10417242c; end: 10417247b;  */

undefined8 FUN_10417242c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_retain();
  _swift_retain(param_2);
  _swift_retain(param_3);
  return param_1;
}



/* Entry: 10417247c; end: 1041724f3;  */

void FUN_10417247c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar6 = unaff_x20[2];
  uVar3 = uVar1;
  uVar4 = uVar2;
  uVar5 = uVar6;
  FUN_10417242c();
  _swift_release(uVar6);
  _swift_release(uVar2);
  _swift_release(uVar1);
  *param_1 = uVar3;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = 0;
  return;
}



/* Entry: 1041724f4; end: 104172507;  */

void FUN_1041724f4(long param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdb9314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss15ContiguousArrayV5countSivg_11034e658)
            (*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 104172508; end: 104172563;  */

undefined8 * FUN_104172508(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x20;
  
  _swift_getWitnessTable(&UNK_10dcd9f40,param_1);
  puVar1 = unaff_x20;
  func_0x0001020fc1f8();
  _swift_release(*unaff_x20);
  _swift_release(unaff_x20[1]);
  _swift_release(unaff_x20[2]);
  return puVar1;
}



/* Entry: 104172564; end: 104172567;  */

void FUN_104172564(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb7aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSTsE13_copyContents12initializing8IteratorQz_SitSry7ElementQzG_tF_11034db60)();
  return;
}



/* Entry: 104172568; end: 104172587;  */

void FUN_104172568(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  __sSTsE32withContiguousStorageIfAvailableyqd__Sgqd__SRy7ElementQzGKXEKlF
            (param_1,param_2,param_4,param_3);
  return;
}



/* Entry: 104172588; end: 104172607;  */

void FUN_104172588(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  code *pcVar1;
  long lVar2;
  
  _swift_retain(param_4);
  _swift_retain(param_5);
  lVar2 = param_6;
  _swift_retain();
  __ss15ContiguousArrayV5countSivg();
  if (-1 < lVar2) {
    *param_1 = param_4;
    param_1[1] = param_5;
    param_1[2] = param_6;
    param_1[3] = param_2;
    param_1[4] = param_3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104172608);
  (*pcVar1)();
}



/* Entry: 104172608; end: 10417263f;  */

void FUN_104172608(long *param_1,long *param_2)

{
  code *pcVar1;
  
  if (!SBORROW8(*param_2,1)) {
    *param_1 = *param_2 + -1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104172620);
  (*pcVar1)();
}



/* Entry: 104172640; end: 10417266f;  */

void FUN_104172640(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  __ss15ContiguousArrayV5countSivg(uVar1,*(undefined8 *)(param_2 + 0x18));
  *param_1 = uVar1;
  return;
}



/* Entry: 104172670; end: 104172793;  */

undefined1  [16] FUN_104172670(long *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  
  lVar1 = *(long *)(param_3 + 0x10);
  lVar2 = *(long *)(param_3 + 0x18);
  lVar5 = 0;
  _swift_getTupleTypeMetadata2(0,lVar1,lVar2,"key value ",0);
  lVar6 = *(long *)(lVar5 + -8);
  *param_1 = lVar5;
  param_1[1] = lVar6;
  lVar8 = *(long *)(lVar6 + 0x40);
  lVar6 = lVar8;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    _malloc();
    param_1[2] = lVar6;
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(lVar8,0xb966);
    param_1[2] = lVar6;
    _swift_coroFrameAlloc(lVar8,0xb966);
  }
  param_1[3] = lVar8;
  uVar7 = *param_2;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  iVar4 = *(int *)(lVar5 + 0x30);
  __ss15ContiguousArrayVyxSicig(lVar8,uVar7,*(undefined8 *)(unaff_x20 + 8),lVar1);
  __ss15ContiguousArrayVyxSicig(lVar8 + iVar4,uVar7,uVar3,lVar2);
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(lVar6,lVar8,lVar1);
  (**(code **)(*(long *)(lVar2 + -8) + 0x20))(lVar6 + *(int *)(lVar5 + 0x30),lVar8 + iVar4,lVar2);
  auVar9._8_8_ = lVar6;
  auVar9._0_8_ = FUN_104172794;
  return auVar9;
}



/* Entry: 104172794; end: 104172823;  */

void FUN_104172794(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  (**(code **)(param_1[1] + 8))(uVar1,*param_1);
  _free(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(uVar1);
  return;
}



/* Entry: 104172824; end: 10417286f;  */

void FUN_104172824(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10dcd9e90;
  _swift_getWitnessTable(&UNK_10dcd9e90,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdb82b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSksSx5IndexRpzSnyABG7IndicesRtzSiAA_6StrideRTzrlE7indicesACvg_11034df78)
            (param_1,param_2,puVar1,PTR___sSiSxsWP_11034dee8);
  return;
}



/* Entry: 104172870; end: 1041728cb;  */

uint FUN_104172870(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = 0;
  __ss15ContiguousArrayVMa(0,*(undefined8 *)(param_1 + 0x18));
  puVar2 = PTR___ss15ContiguousArrayVyxGSlsMc_11034e6d0;
  _swift_getWitnessTable(PTR___ss15ContiguousArrayVyxGSlsMc_11034e6d0,uVar1);
  __sSlsE7isEmptySbvg(uVar1,puVar2);
  return (uint)uVar1 & 1;
}



/* Entry: 1041728cc; end: 1041728df;  */

void FUN_1041728cc(long param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdb9314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss15ContiguousArrayV5countSivg_11034e658)
            (*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 1041728e0; end: 104172943;  */

void FUN_1041728e0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  uStack_28 = *param_1;
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uVar1 = 0;
  __ss15ContiguousArrayVMa(0,*(undefined8 *)(param_3 + 0x18));
  puVar2 = PTR___ss15ContiguousArrayVyxGSlsMc_11034e6d0;
  _swift_getWitnessTable(PTR___ss15ContiguousArrayVyxGSlsMc_11034e6d0,uVar1);
  func_0x0001020fc10c(&uStack_28,&uStack_40,uVar1,puVar2);
  return;
}



/* Entry: 104172944; end: 1041729af;  */

void FUN_104172944(void)

{
  return;
}



/* Entry: 1041729b0; end: 104172b57;  */

void FUN_1041729b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = 0;
  uStack_a0 = param_7;
  uStack_98 = param_1;
  __ss6MirrorV22AncestorRepresentationOMa();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar5 = (long)&uStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112dcc478;
  func_0x0001000285a8(0x112dcc478,&UNK_10d98eb80);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = lVar5 - extraout_x8_00;
  uVar1 = *(undefined4 *)PTR___ss6MirrorV12DisplayStyleO10collectionyA2DmFWC_11034ef88;
  lVar2 = 0;
  uStack_90 = param_2;
  uStack_88 = param_3;
  uStack_80 = param_4;
  uStack_78 = param_2;
  uStack_70 = param_3;
  uStack_68 = param_4;
  __ss6MirrorV12DisplayStyleOMa();
  lVar6 = *(long *)(lVar2 + -8);
  (**(code **)(lVar6 + 0x68))(lVar7,uVar1,lVar2);
  (**(code **)(lVar6 + 0x38))(lVar7,0,1,lVar2);
  uVar3 = 0;
  FUN_104172ce4(0,param_5,param_6,uStack_a0);
  puVar4 = &UNK_10dcd9f40;
  _swift_getWitnessTable(&UNK_10dcd9f40,uVar3);
  FUN_104171894(lVar5,uVar3,uVar3,puVar4);
  _swift_retain_n(param_2,2);
  _swift_retain_n(param_3,2);
  _swift_retain_n(param_4,2);
  __ss6MirrorV_17unlabeledChildren12displayStyle22ancestorRepresentationABx_q_AB07DisplayE0OSgAB08AncestorG0OtcSlR_r0_lufC
            (uStack_98,&uStack_78,&uStack_90,lVar7,lVar5,uVar3,uVar3,puVar4);
  return;
}



/* Entry: 104172b58; end: 104172b73;  */

void FUN_104172b58(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar9 = unaff_x20[2];
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  uStack_a0 = *(undefined8 *)(param_2 + 0x20);
  lVar6 = 0;
  uStack_98 = param_1;
  __ss6MirrorV22AncestorRepresentationOMa();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar10 = (long)&uStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0x112dcc478;
  func_0x0001000285a8(0x112dcc478,&UNK_10d98eb80);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = lVar10 - extraout_x8_00;
  uVar5 = *(undefined4 *)PTR___ss6MirrorV12DisplayStyleO10collectionyA2DmFWC_11034ef88;
  lVar6 = 0;
  uStack_90 = uVar1;
  uStack_88 = uVar3;
  uStack_80 = uVar9;
  uStack_78 = uVar1;
  uStack_70 = uVar3;
  uStack_68 = uVar9;
  __ss6MirrorV12DisplayStyleOMa();
  lVar11 = *(long *)(lVar6 + -8);
  (**(code **)(lVar11 + 0x68))(lVar12,uVar5,lVar6);
  (**(code **)(lVar11 + 0x38))(lVar12,0,1,lVar6);
  uVar7 = 0;
  FUN_104172ce4(0,uVar2,uVar4,uStack_a0);
  puVar8 = &UNK_10dcd9f40;
  _swift_getWitnessTable(&UNK_10dcd9f40,uVar7);
  FUN_104171894(lVar10,uVar7,uVar7,puVar8);
  _swift_retain_n(uVar1,2);
  _swift_retain_n(uVar3,2);
  _swift_retain_n(uVar9,2);
  __ss6MirrorV_17unlabeledChildren12displayStyle22ancestorRepresentationABx_q_AB07DisplayE0OSgAB08AncestorG0OtcSlR_r0_lufC
            (uStack_98,&uStack_78,&uStack_90,lVar12,lVar10,uVar7,uVar7,puVar8);
  return;
}



/* Entry: 104172b74; end: 104172bbf;  */

uint FUN_104172b74(undefined8 *param_1,undefined8 *param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  func_0x000104172b70(uVar1,param_1[1],param_1[2],*param_2,param_2[1],param_2[2],
                      *(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18),
                      *(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_4 + -8));
  return (uint)uVar1 & 1;
}



/* Entry: 104172bc0; end: 104172bc3;  */

void FUN_104172bc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar7;
  long extraout_x12;
  long lVar8;
  long lVar9;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lStack_b8 = *(long *)(param_6 + -8);
  lVar4 = param_5;
  lVar7 = param_6;
  uStack_b0 = param_8;
  uStack_88 = param_7;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b8 + 0x40));
  lVar9 = (long)&uStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_c8 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_c8 + 0x40));
  lVar8 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0xff;
  _swift_getTupleTypeMetadata2(0xff,lVar4,lVar7,"key value ",0);
  lVar4 = 0;
  __sSqMa(0,lVar3);
  lStack_98 = *(long *)(lVar4 + -8);
  lStack_90 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_98 + 0x40));
  lVar7 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_a0 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar7 - extraout_x12;
  __ss15ContiguousArrayV5countSivg(param_4,param_6);
  uStack_c0 = param_1;
  __ss6HasherV8_combineyySuF();
  uStack_68 = 0;
  uVar5 = 0;
  uStack_80 = param_2;
  uStack_78 = param_3;
  uStack_70 = param_4;
  func_0x000104173ee4(0,param_5,param_6,uStack_88);
  uStack_d0 = param_2;
  uStack_a8 = uVar5;
  _swift_retain(param_2);
  uStack_d8 = param_3;
  _swift_retain(param_3);
  uStack_e0 = param_4;
  _swift_retain(param_4);
  lVar4 = lStack_b8;
  while( true ) {
    lVar2 = lStack_a0;
    FUN_104173a50(lStack_a0,uStack_a8);
    (**(code **)(lStack_98 + 0x20))(lVar7,lVar2,lStack_90);
    lVar6 = lVar7;
    (**(code **)(*(long *)(lVar3 + -8) + 0x30))(lVar7,1,lVar3);
    lVar2 = lStack_c8;
    if ((int)lVar6 == 1) break;
    iVar1 = *(int *)(lVar3 + 0x30);
    (**(code **)(lStack_c8 + 0x20))(lVar8,lVar7,param_5);
    (**(code **)(lVar4 + 0x20))(lVar9,lVar7 + iVar1,param_6);
    uVar5 = uStack_c0;
    __sSH4hash4intoys6HasherVz_tFTj(uStack_c0,param_5,uStack_88);
    __sSH4hash4intoys6HasherVz_tFTj(uVar5,param_6,uStack_b0);
    (**(code **)(lVar4 + 8))(lVar9,param_6);
    (**(code **)(lVar2 + 8))(lVar8,param_5);
  }
  _swift_release(uStack_e0);
  _swift_release(uStack_d8);
  _swift_release(uStack_d0);
  return;
}



/* Entry: 104172bc4; end: 104172c4f;  */

void FUN_104172bc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auStack_98 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_98,0);
  FUN_10417321c(auStack_98,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104172c50; end: 104172c87;  */

void FUN_104172c50(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  
  uVar7 = *(undefined8 *)(param_2 + -8);
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar5 = unaff_x20[2];
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  __ss6HasherV5_seedABSi_tcfC(auStack_98,0);
  FUN_10417321c(auStack_98,uVar1,uVar3,uVar5,uVar2,uVar4,uVar6,uVar7);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104172c88; end: 104172ce3;  */

void FUN_104172c88(undefined8 param_1,long param_2,long param_3)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_78 [72];
  
  uVar1 = *(undefined8 *)(param_3 + -8);
  __ss6HasherV5_seedABSi_tcfC(auStack_78);
  FUN_104172bc0(auStack_78,*unaff_x20,unaff_x20[1],unaff_x20[2],*(undefined8 *)(param_2 + 0x10),
                *(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20),uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104172ce4; end: 104172d0f;  */

void FUN_104172ce4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e7f2a70);
  return;
}



/* Entry: 104172d10; end: 104172d33;  */

void FUN_104172d10(void)

{
  FUN_104172dc8(0x112d4f688,PTR___sSnyxGSksSxRzSZ6StrideRpzrlMc_11034e120);
  return;
}



/* Entry: 104172d34; end: 104172d53;  */

void FUN_104172d34(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_11034f410)(&UNK_10dcd9c30,param_1);
  return;
}



/* Entry: 104172d54; end: 104172d77;  */

void FUN_104172d54(void)

{
  FUN_104172dc8(0x112f920a0,PTR___sSnyxGSKsSxRzSZ6StrideRpzrlMc_11034e110);
  return;
}



/* Entry: 104172d78; end: 104172da3;  */

void FUN_104172d78(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_11034f410)(&UNK_10dcd9c80,param_1);
  return;
}



/* Entry: 104172da4; end: 104172dc7;  */

void FUN_104172da4(void)

{
  FUN_104172dc8(0x112f920a8,PTR___sSnyxGSlsSxRzSZ6StrideRpzrlMc_11034e128);
  return;
}



/* Entry: 104172dc8; end: 104172e3b;  */

void FUN_104172dc8(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  if (*param_1 == 0) {
    uVar1 = 0x112d4f678;
    func_0x00010002969c(0x112d4f678,&UNK_10d915670);
    uVar2 = uVar1;
    func_0x000100f79844();
    puStack_40 = PTR___sSiSxsWP_11034dee8;
    uStack_38 = uVar2;
    _swift_getWitnessTable(param_2,uVar1,&puStack_40);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 104172e3c; end: 104172e4b;  */

void FUN_104172e3c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_11034f410)(&UNK_10dcd9ce0,param_1);
  return;
}



/* Entry: 104172e4c; end: 104172e83;  */

void FUN_104172e4c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(*(long *)(param_3 + -8) + 8);
  _swift_getWitnessTable(&UNK_10dcda098,param_1,&uStack_18);
  return;
}



/* Entry: 104172e84; end: 104172e8b;  */

void FUN_104172e84(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_11034f228)();
  return;
}



/* Entry: 104172e8c; end: 104172ebb;  */

void FUN_104172e8c(undefined8 *param_1)

{
  _swift_release(*param_1);
  _swift_release(param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1[2]);
  return;
}



/* Entry: 104172ebc; end: 104172f7b;  */

undefined8 * FUN_104172ebc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[2];
  param_1[2] = uVar2;
  _swift_retain();
  _swift_retain(uVar1);
  _swift_retain(uVar2);
  return param_1;
}



/* Entry: 104172f7c; end: 104172fc7;  */

undefined8 * FUN_104172f7c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_release(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_release(uVar1);
  return param_1;
}



/* Entry: 104172fc8; end: 104173087;  */

int FUN_104172fc8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 104173088; end: 1041730ef;  */

undefined8
FUN_104173088(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  func_0x0001041757a8(param_1,param_2,param_4,param_5,param_7,param_9);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb9350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ss15ContiguousArrayVsSQRzlE2eeoiySbAByxG_ADtFZ_11034e688)
              (param_3,param_6,param_8,param_10);
    return param_3;
  }
  return 0;
}



/* Entry: 1041730f0; end: 10417313b;  */

uint FUN_1041730f0(undefined8 *param_1,undefined8 *param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_104173088(uVar1,param_1[1],param_1[2],*param_2,param_2[1],param_2[2],
                *(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18),
                *(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_4 + -8));
  return (uint)uVar1 & 1;
}



/* Entry: 10417313c; end: 104173197;  */

void FUN_10417313c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  uVar1 = param_2;
  FUN_104173198();
  _swift_bridgeObjectRelease(param_2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  return;
}



/* Entry: 104173198; end: 10417321b;  */

void FUN_104173198(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  uVar1 = 0xff;
  uStack_38 = param_1;
  _swift_getTupleTypeMetadata2(0xff,param_2,param_3,0,0);
  uVar2 = 0;
  __sSaMa(0,uVar1);
  puVar3 = PTR___sSayxGSTsMc_11034dd08;
  _swift_getWitnessTable(PTR___sSayxGSTsMc_11034dd08,uVar2);
  FUN_1041735e4(&uStack_38,param_2,param_3,uVar2,param_4,puVar3);
  return;
}



/* Entry: 10417321c; end: 10417348b;  */

void FUN_10417321c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar7;
  long extraout_x12;
  long lVar8;
  long lVar9;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lStack_b8 = *(long *)(param_6 + -8);
  lVar4 = param_5;
  lVar7 = param_6;
  uStack_b0 = param_8;
  uStack_88 = param_7;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b8 + 0x40));
  lVar9 = (long)&uStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_c8 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_c8 + 0x40));
  lVar8 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0xff;
  _swift_getTupleTypeMetadata2(0xff,lVar4,lVar7,"key value ",0);
  lVar4 = 0;
  __sSqMa(0,lVar3);
  lStack_98 = *(long *)(lVar4 + -8);
  lStack_90 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_98 + 0x40));
  lVar7 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_a0 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar7 - extraout_x12;
  __ss15ContiguousArrayV5countSivg(param_4,param_6);
  uStack_c0 = param_1;
  __ss6HasherV8_combineyySuF();
  uStack_68 = 0;
  uVar5 = 0;
  uStack_80 = param_2;
  uStack_78 = param_3;
  uStack_70 = param_4;
  func_0x000104173ee4(0,param_5,param_6,uStack_88);
  uStack_d0 = param_2;
  uStack_a8 = uVar5;
  _swift_retain(param_2);
  uStack_d8 = param_3;
  _swift_retain(param_3);
  uStack_e0 = param_4;
  _swift_retain(param_4);
  lVar4 = lStack_b8;
  while( true ) {
    lVar2 = lStack_a0;
    FUN_104173a50(lStack_a0,uStack_a8);
    (**(code **)(lStack_98 + 0x20))(lVar7,lVar2,lStack_90);
    lVar6 = lVar7;
    (**(code **)(*(long *)(lVar3 + -8) + 0x30))(lVar7,1,lVar3);
    lVar2 = lStack_c8;
    if ((int)lVar6 == 1) break;
    iVar1 = *(int *)(lVar3 + 0x30);
    (**(code **)(lStack_c8 + 0x20))(lVar8,lVar7,param_5);
    (**(code **)(lVar4 + 0x20))(lVar9,lVar7 + iVar1,param_6);
    uVar5 = uStack_c0;
    __sSH4hash4intoys6HasherVz_tFTj(uStack_c0,param_5,uStack_88);
    __sSH4hash4intoys6HasherVz_tFTj(uVar5,param_6,uStack_b0);
    (**(code **)(lVar4 + 8))(lVar9,param_6);
    (**(code **)(lVar2 + 8))(lVar8,param_5);
  }
  _swift_release(uStack_e0);
  _swift_release(uStack_d8);
  _swift_release(uStack_d0);
  return;
}



/* Entry: 10417348c; end: 104173517;  */

void FUN_10417348c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auStack_98 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_98,0);
  FUN_10417321c(auStack_98,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104173518; end: 10417354f;  */

void FUN_104173518(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  
  uVar7 = *(undefined8 *)(param_2 + -8);
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar5 = unaff_x20[2];
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  __ss6HasherV5_seedABSi_tcfC(auStack_98,0);
  FUN_10417321c(auStack_98,uVar1,uVar3,uVar5,uVar2,uVar4,uVar6,uVar7);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104173550; end: 1041735ab;  */

void FUN_104173550(undefined8 param_1,long param_2,long param_3)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_78 [72];
  
  uVar1 = *(undefined8 *)(param_3 + -8);
  __ss6HasherV5_seedABSi_tcfC(auStack_78);
  FUN_10417321c(auStack_78,*unaff_x20,unaff_x20[1],unaff_x20[2],*(undefined8 *)(param_2 + 0x10),
                *(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20),uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1041735ac; end: 1041735e3;  */

void FUN_1041735ac(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(*(long *)(param_3 + -8) + 8);
  _swift_getWitnessTable(&UNK_10dcda148,param_1,&uStack_18);
  return;
}



/* Entry: 1041735e4; end: 10417397b;  */

long FUN_1041735e4(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar7;
  long extraout_x8_03;
  long extraout_x12;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  code *pcVar12;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar8 = *(long *)(param_3 + -8);
  lVar3 = param_2;
  uStack_c0 = param_6;
  uStack_a8 = param_1;
  uStack_90 = param_5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar9 = (long)&lStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_a0 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar9 - extraout_x12;
  lStack_98 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_98 + 0x40));
  uVar10 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0xff;
  _swift_getTupleTypeMetadata2();
  lVar3 = 0;
  __sSqMa(0,lVar2);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = uVar10 - extraout_x8_01;
  pcStack_b0 = *(code **)(param_4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)((long)pcStack_b0 + 0x40));
  lVar7 = lVar11 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  lStack_b8 = lVar7;
  _swift_getAssociatedTypeWitness
            (0,param_6,param_4,PTR___sSTTL_11034db40,PTR___s8IteratorSTTl_11034d648);
  lStack_d0 = *(long *)(lVar3 + -8);
  lStack_88 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_d0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lStack_80 = lVar7 - extraout_x8_03;
  lVar3 = param_2;
  FUN_104177b80();
  uVar4 = 0;
  __sSa22_allocateUninitializedySayxG_SpyxGtSiFZ(0,param_3);
  __ss15ContiguousArrayV12arrayLiteralAByxGxd_tcfC();
  uVar5 = uStack_c0;
  lVar7 = param_4;
  lStack_78 = lVar3;
  uStack_70 = param_5;
  uStack_68 = uVar4;
  __sST19underestimatedCountSivgTj(param_4,uStack_c0);
  uVar4 = 0;
  lStack_c8 = lVar7;
  func_0x000104174f48(0,param_2,param_3,uStack_90);
  FUN_1041739f0(lStack_c8,uVar4);
  (**(code **)((long)pcStack_b0 + 0x10))(lStack_b8,uStack_a8,param_4);
  __sST12makeIterator0B0QzyFTj(lStack_80,param_4,uVar5);
  lVar3 = lStack_88;
  _swift_getAssociatedConformanceWitness
            (uVar5,param_4,lStack_88,PTR___sSTTL_11034db40,PTR___sST8IteratorST_StTn_11034db38);
  uStack_a8 = uVar5;
  __sSt4next7ElementQzSgyFTj(lVar11,lVar3);
  pcStack_b0 = *(code **)(*(long *)(lVar2 + -8) + 0x30);
  lVar3 = lVar11;
  (*pcStack_b0)(lVar11,1,lVar2);
  if ((int)lVar3 != 1) {
    pcVar12 = *(code **)(lStack_98 + 0x20);
    do {
      iVar1 = *(int *)(lVar2 + 0x30);
      (*pcVar12)(uVar10,lVar11,param_2);
      (**(code **)(lVar8 + 0x20))(lVar9,lVar11 + iVar1,param_3);
      uVar5 = 0;
      FUN_10417b6a8(0,param_2,uStack_90);
      uVar6 = uVar10;
      FUN_1041762e4(uVar10,uVar5);
      lVar3 = lStack_a0;
      if ((uVar6 & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x10417397c);
        (*pcVar12)();
      }
      (**(code **)(lVar8 + 0x10))(lStack_a0,lVar9,param_3);
      uVar5 = 0;
      __ss15ContiguousArrayVMa(0,param_3);
      __ss15ContiguousArrayV6appendyyxnF(&lStack_78,lVar3,uVar5);
      (**(code **)(lVar8 + 8))(lVar9,param_3);
      (**(code **)(lStack_98 + 8))(uVar10,param_2);
      __sSt4next7ElementQzSgyFTj(lVar11,lStack_88,uStack_a8);
      lVar3 = lVar11;
      (*pcStack_b0)(lVar11,1,lVar2);
    } while ((int)lVar3 != 1);
  }
  (**(code **)(lStack_d0 + 8))(lStack_80,lStack_88);
  return lStack_78;
}



/* Entry: 10417397c; end: 104173993;  */

long FUN_10417397c(long param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)*(byte *)(*(long *)(param_2 + -8) + 0x50);
  return param_1 + (uVar1 + 0x20 & (uVar1 ^ 0xffffffffffffffff));
}



/* Entry: 104173994; end: 1041739e7;  */

void FUN_104173994(long *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  code *pcVar1;
  
  if (*param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1041739e8);
    (*pcVar1)();
  }
  if (param_2 == *param_1) {
    if (param_1[1] == param_3) {
      __ss15ContiguousArrayVMa(0,param_5);
      func_0x000104174f20();
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1041739e4);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1041739e0);
  (*pcVar1)();
}



/* Entry: 1041739e8; end: 1041739ef;  */

undefined8 FUN_1041739e8(void)

{
  return 0;
}



/* Entry: 1041739f0; end: 104173a4f;  */

void FUN_1041739f0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10417b6a8(0,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x20));
  FUN_1041785f4(param_1,uVar1);
  uVar1 = 0;
  __ss15ContiguousArrayVMa(0,*(undefined8 *)(param_2 + 0x18));
  __ss15ContiguousArrayV15reserveCapacityyySiF(param_1,uVar1);
  return;
}



/* Entry: 104173a50; end: 104173c2b;  */

void FUN_104173a50(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_70 [8];
  long lStack_68;
  
  lVar1 = *(long *)(param_2 + 0x10);
  lVar2 = *(long *)(param_2 + 0x18);
  lVar5 = 0;
  _swift_getTupleTypeMetadata2(0,lVar1,lVar2,0,0);
  lVar11 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar9 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = (long)puVar9 - extraout_x12;
  lVar8 = *(long *)(unaff_x20 + 0x10);
  lVar7 = *(long *)(unaff_x20 + 0x18);
  lVar6 = lVar8;
  __ss15ContiguousArrayV5countSivg(lVar8,lVar2);
  if (lVar7 < lVar6) {
    iVar3 = *(int *)(lVar5 + 0x30);
    lStack_68 = param_1;
    __ss15ContiguousArrayVyxSicig(lVar10,lVar7,*(undefined8 *)(unaff_x20 + 8),lVar1);
    __ss15ContiguousArrayVyxSicig(lVar10 + iVar3,lVar7,lVar8,lVar2);
    *(long *)(unaff_x20 + 0x18) = lVar7 + 1;
    (**(code **)(lVar11 + 0x20))(puVar9,lVar10,lVar5);
    iVar3 = *(int *)(lVar5 + 0x30);
    lVar7 = 0;
    _swift_getTupleTypeMetadata2(0,lVar1,lVar2,"key value ",0);
    lVar8 = lStack_68;
    iVar4 = *(int *)(lVar7 + 0x30);
    (**(code **)(*(long *)(lVar1 + -8) + 0x20))(lStack_68,puVar9,lVar1);
    (**(code **)(*(long *)(lVar2 + -8) + 0x20))(lVar8 + iVar4,puVar9 + iVar3,lVar2);
    (**(code **)(*(long *)(lVar7 + -8) + 0x38))(lVar8,0,1,lVar7);
    return;
  }
  lVar8 = 0;
  _swift_getTupleTypeMetadata2(0,lVar1,lVar2,"key value ",0);
                    /* WARNING: Could not recover jumptable at 0x000104173c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar8 + -8) + 0x38))(param_1,1,1,lVar8);
  return;
}



/* Entry: 104173c2c; end: 104173c6f;  */

void FUN_104173c2c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_70 [8];
  long lStack_68;
  
  lVar1 = *(long *)(param_2 + 0x10);
  lVar2 = *(long *)(param_2 + 0x18);
  lVar5 = 0;
  _swift_getTupleTypeMetadata2(0,lVar1,lVar2,0,0);
  lVar11 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar9 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = (long)puVar9 - extraout_x12;
  lVar8 = *(long *)(unaff_x20 + 0x10);
  lVar7 = *(long *)(unaff_x20 + 0x18);
  lVar6 = lVar8;
  __ss15ContiguousArrayV5countSivg(lVar8,lVar2);
  if (lVar7 < lVar6) {
    iVar3 = *(int *)(lVar5 + 0x30);
    lStack_68 = param_1;
    __ss15ContiguousArrayVyxSicig(lVar10,lVar7,*(undefined8 *)(unaff_x20 + 8),lVar1);
    __ss15ContiguousArrayVyxSicig(lVar10 + iVar3,lVar7,lVar8,lVar2);
    *(long *)(unaff_x20 + 0x18) = lVar7 + 1;
    (**(code **)(lVar11 + 0x20))(puVar9,lVar10,lVar5);
    iVar3 = *(int *)(lVar5 + 0x30);
    lVar7 = 0;
    _swift_getTupleTypeMetadata2(0,lVar1,lVar2,"key value ",0);
    lVar8 = lStack_68;
    iVar4 = *(int *)(lVar7 + 0x30);
    (**(code **)(*(long *)(lVar1 + -8) + 0x20))(lStack_68,puVar9,lVar1);
    (**(code **)(*(long *)(lVar2 + -8) + 0x20))(lVar8 + iVar4,puVar9 + iVar3,lVar2);
    (**(code **)(*(long *)(lVar7 + -8) + 0x38))(lVar8,0,1,lVar7);
    return;
  }
  lVar8 = 0;
  _swift_getTupleTypeMetadata2(0,lVar1,lVar2,"key value ",0);
                    /* WARNING: Could not recover jumptable at 0x000104173c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar8 + -8) + 0x38))(param_1,1,1,lVar8);
  return;
}



/* Entry: 104173c70; end: 104173cb7;  */

undefined8 * FUN_104173c70(void)

{
  undefined8 *puVar1;
  undefined8 *unaff_x20;
  
  puVar1 = unaff_x20;
  func_0x0001010944cc();
  _swift_release(*unaff_x20);
  _swift_release(unaff_x20[1]);
  _swift_release(unaff_x20[2]);
  return puVar1;
}



/* Entry: 104173cb8; end: 104173cbb;  */

void FUN_104173cb8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb7aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSTsE13_copyContents12initializing8IteratorQz_SitSry7ElementQzG_tF_11034db60)();
  return;
}



/* Entry: 104173cbc; end: 104173cdb;  */

void FUN_104173cbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  __sSTsE32withContiguousStorageIfAvailableyqd__Sgqd__SRy7ElementQzGKXEKlF
            (param_1,param_2,param_4,param_3);
  return;
}



/* Entry: 104173cdc; end: 104173ce3;  */

void FUN_104173cdc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_11034f228)();
  return;
}



/* Entry: 104173ce4; end: 104173d3f;  */

long FUN_104173ce4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104173d40; end: 104173e07;  */

undefined8 * FUN_104173d40(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  _swift_retain();
  _swift_retain(uVar2);
  _swift_retain(uVar1);
  return param_1;
}



/* Entry: 104173e08; end: 104173e5b;  */

undefined8 * FUN_104173e08(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_release(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_release(uVar1);
  param_1[3] = param_2[3];
  return param_1;
}



/* Entry: 104173e5c; end: 104173eef;  */

int FUN_104173e5c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 104173ef0; end: 104173f4f;  */

void FUN_104173ef0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_38 = param_1;
  uStack_30 = param_2;
  uStack_28 = param_3;
  FUN_104173f50(0,param_4,param_5,param_6);
  puVar2 = &UNK_10dcda430;
  _swift_getWitnessTable(&UNK_10dcda430,uVar1);
  FUN_1041877f0(&uStack_38,uVar1,puVar2);
  return;
}



/* Entry: 104173f50; end: 104173f93;  */

void FUN_104173f50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e7f2ae8);
  return;
}



/* Entry: 104173f94; end: 104173fa7;  */

void FUN_104173f94(void)

{
  FUN_104174e9c();
  return;
}



/* Entry: 104173fa8; end: 104173fbf;  */

void FUN_104173fa8(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  *param_1 = *unaff_x20;
  uVar1 = unaff_x20[1];
  param_1[2] = unaff_x20[2];
  param_1[1] = uVar1;
  param_1[3] = 0;
  return;
}



/* Entry: 104173fc0; end: 104173ff3;  */

void FUN_104173fc0(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10dcda430;
  _swift_getWitnessTable(&UNK_10dcda430,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdb833c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSlsE19underestimatedCountSivg_11034dff0)(param_1,puVar1);
  return;
}



/* Entry: 104173ff4; end: 104173ffb;  */

undefined8 FUN_104173ff4(void)

{
  return 2;
}



/* Entry: 104173ffc; end: 104174057;  */

undefined8 * FUN_104173ffc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x20;
  
  _swift_getWitnessTable(&UNK_10dcda430,param_1);
  puVar1 = unaff_x20;
  func_0x0001020fc1f8();
  _swift_release(*unaff_x20);
  _swift_release(unaff_x20[1]);
  _swift_release(unaff_x20[2]);
  return puVar1;
}



/* Entry: 104174058; end: 10417405b;  */

void FUN_104174058(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb7aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSTsE13_copyContents12initializing8IteratorQz_SitSry7ElementQzG_tF_11034db60)();
  return;
}



/* Entry: 10417405c; end: 104174127;  */

void FUN_10417405c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  long unaff_x21;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_38 [8];
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_68 = *(undefined8 *)(param_5 + 0x18);
  uStack_70 = *(undefined8 *)(param_5 + 0x10);
  uVar1 = *(undefined8 *)(param_5 + 0x18);
  uStack_58 = *(undefined8 *)(param_5 + 0x20);
  uVar2 = 0x112d393f0;
  lStack_60 = param_4;
  uStack_50 = param_2;
  uStack_48 = param_3;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000102107f98(param_1,FUN_104174ed8,auStack_80,uVar3,uVar1,param_4,uVar2,
                      PTR___ss5ErrorWS_11034ee10,auStack_38);
  if (unaff_x21 == 0) {
    (**(code **)(*(long *)(param_4 + -8) + 0x38))(param_1,0,1,param_4);
  }
  return;
}



/* Entry: 104174128; end: 10417415f;  */

void FUN_104174128(long *param_1,long *param_2)

{
  code *pcVar1;
  
  if (!SBORROW8(*param_2,1)) {
    *param_1 = *param_2 + -1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104174140);
  (*pcVar1)();
}



/* Entry: 104174160; end: 10417418f;  */

void FUN_104174160(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  __ss15ContiguousArrayV5countSivg(uVar1,*(undefined8 *)(param_2 + 0x18));
  *param_1 = uVar1;
  return;
}



/* Entry: 104174190; end: 104174213;  */

undefined1  [16] FUN_104174190(long *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  lVar2 = *(long *)(param_3 + 0x18);
  lVar1 = *(long *)(lVar2 + -8);
  *param_1 = lVar2;
  param_1[1] = lVar1;
  lVar1 = *(long *)(lVar1 + 0x40);
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(lVar1,0x64e0);
  }
  param_1[2] = lVar1;
  __ss15ContiguousArrayVyxSicig(lVar1,*param_2,*(undefined8 *)(unaff_x20 + 0x10),lVar2);
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = FUN_104174214;
  return auVar3;
}



/* Entry: 104174214; end: 104174243;  */

void FUN_104174214(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[2];
  (**(code **)(param_1[1] + 8))(uVar1,*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(uVar1);
  return;
}



/* Entry: 104174244; end: 1041742d7;  */

void FUN_104174244(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 uVar10;
  code *pcVar11;
  undefined8 unaff_x20;
  long lVar12;
  long lVar13;
  code *pcVar14;
  ulong uVar15;
  long lVar16;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar9 = &UNK_10dcda510;
  _swift_getWitnessTable();
  lStack_98 = *(long *)(param_3 + -8);
  uStack_70 = param_2;
  uStack_68 = param_1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_98 + 0x40));
  puVar2 = PTR___sSlTL_11034dfe8;
  lVar16 = (long)&lStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar10 = *(undefined8 *)(puVar9 + 8);
  lVar4 = 0xff;
  lStack_80 = lVar16;
  func_0x000107c614b8(0xff,uVar10,param_3,PTR___sSlTL_11034dfe8,PTR___s5IndexSlTl_11034d620);
  lVar5 = 0;
  func_0x000107c61510(0,lVar4,lVar4,"lower upper ",0);
  lStack_a0 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  lVar16 = lVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_c0 = *(long *)(lVar4 + -8);
  lStack_b0 = lVar16 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_c0 + 0x40));
  lVar13 = (lVar16 - extraout_x12) - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar15 = lVar13 - extraout_x12_00;
  uVar6 = uVar10;
  func_0x000107c614b4(uVar10,param_3,lVar4,puVar2,PTR___sSl5IndexSl_SLTn_11034dfa0);
  lVar7 = 0;
  func_0x000107c5ff1c(0,lVar4,uVar6);
  lStack_b8 = *(long *)(lVar7 + -8);
  lStack_a8 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_b8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar12 = uVar15 - extraout_x8_02;
  func_0x000107c5fe7c(uVar15,param_3,uVar10);
  lStack_90 = param_3;
  uStack_88 = uVar10;
  uStack_78 = unaff_x20;
  func_0x000107c5fe94(lVar13,param_3,uVar10);
  uVar8 = uVar15;
  func_0x000107c5fa90(uVar15,lVar13,lVar4,uVar6);
  lVar3 = lStack_b0;
  lVar7 = lStack_c0;
  if ((uVar8 & 1) != 0) {
    pcVar11 = *(code **)(lStack_c0 + 0x20);
    (*pcVar11)(lStack_b0,uVar15,lVar4);
    (*pcVar11)(lVar3 + *(int *)(lVar5 + 0x30),lVar13,lVar4);
    lVar13 = lStack_a0;
    (**(code **)(lStack_a0 + 0x10))(lVar16,lVar3,lVar5);
    iVar1 = *(int *)(lVar5 + 0x30);
    (*pcVar11)(lVar12,lVar16,lVar4);
    pcVar14 = *(code **)(lVar7 + 8);
    (*pcVar14)(lVar16 + iVar1,lVar4);
    (**(code **)(lVar13 + 0x20))(lVar16,lVar3,lVar5);
    lVar3 = lStack_a8;
    (*pcVar11)(lVar12 + *(int *)(lStack_a8 + 0x24),lVar16 + *(int *)(lVar5 + 0x30),lVar4);
    (*pcVar14)(lVar16,lVar4);
    uVar10 = uStack_70;
    uVar6 = uStack_88;
    lVar4 = lStack_90;
    func_0x000107c5fe80(uStack_70,lVar12,lStack_90,uStack_88);
    lVar7 = lStack_b8;
    (**(code **)(lStack_b8 + 8))(lVar12,lVar3);
    lVar5 = lStack_80;
    (**(code **)(lStack_98 + 0x10))(lStack_80,uStack_78,lVar4);
    (**(code **)(lVar7 + 0x10))(lVar12,uVar10,lVar3);
    func_0x000107c60674(uStack_68,lVar5,lVar12,lVar4,uVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x1020f9ba0);
  (*pcVar11)();
}



/* Entry: 1041742d8; end: 10417431f;  */

void FUN_1041742d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb8378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSlsE7isEmptySbvg_11034e020)();
  return;
}



/* Entry: 104174320; end: 10417443b;  */

void FUN_104174320(undefined8 param_1,long *param_2,long param_3)

{
  long unaff_x20;
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_2;
  lVar3 = *(long *)(param_3 + 0x18);
  __ss15ContiguousArrayVMa(0,lVar3);
  __ss15ContiguousArrayV21_makeMutableAndUniqueyyF();
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000104174f24(lVar2,lVar1,lVar3);
  FUN_10417397c(lVar1,lVar3);
  (**(code **)(*(long *)(lVar3 + -8) + 0x28))
            (lVar1 + *(long *)(*(long *)(lVar3 + -8) + 0x48) * lVar2,param_1,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdb9344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss15ContiguousArrayVMa_11034e678)(0,lVar3);
  return;
}


