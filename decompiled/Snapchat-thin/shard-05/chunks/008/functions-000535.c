/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104178160; end: 1041781c3;  */

void FUN_104178160(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[2];
  (**(code **)(param_1[1] + 8))(uVar1,*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(uVar1);
  return;
}



/* Entry: 1041781c4; end: 104178233;  */

void FUN_1041781c4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = 0;
  __ss15ContiguousArrayVMa(0,*(undefined8 *)(param_2 + 0x10));
  puVar2 = PTR___ss15ContiguousArrayVyxGSksMc_11034e6c8;
  _swift_getWitnessTable(PTR___ss15ContiguousArrayVyxGSksMc_11034e6c8,uVar1);
  __sSksSx5IndexRpzSnyABG7IndicesRtzSiAA_6StrideRTzrlE7indicesACvg
            (param_1,uVar1,puVar2,PTR___sSiSxsWP_11034dee8);
  return;
}



/* Entry: 104178234; end: 10417828f;  */

uint FUN_104178234(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = 0;
  __ss15ContiguousArrayVMa(0,*(undefined8 *)(param_1 + 0x10));
  puVar2 = PTR___ss15ContiguousArrayVyxGSlsMc_11034e6d0;
  _swift_getWitnessTable(PTR___ss15ContiguousArrayVyxGSlsMc_11034e6d0,uVar1);
  __sSlsE7isEmptySbvg(uVar1,puVar2);
  return (uint)uVar1 & 1;
}



/* Entry: 104178290; end: 10417829f;  */

void FUN_104178290(long param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdb9314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss15ContiguousArrayV5countSivg_11034e658)
            (*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 1041782a0; end: 1041782db;  */

void FUN_1041782a0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  FUN_104177f54(param_2,uVar1,unaff_x20[1],*(undefined8 *)(param_3 + 0x10),
                *(undefined8 *)(param_3 + 0x18));
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)uVar1;
  *(char *)((long)param_1 + 9) = (char)((ulong)uVar1 >> 8);
  return;
}



/* Entry: 1041782dc; end: 1041782df;  */

void FUN_1041782dc(void)

{
  return;
}



/* Entry: 1041782e0; end: 104178343;  */

void FUN_1041782e0(undefined8 *param_1,undefined8 *param_2,long param_3)

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
  __ss15ContiguousArrayVMa(0,*(undefined8 *)(param_3 + 0x10));
  puVar2 = PTR___ss15ContiguousArrayVyxGSlsMc_11034e6d0;
  _swift_getWitnessTable(PTR___ss15ContiguousArrayVyxGSlsMc_11034e6d0,uVar1);
  func_0x0001020fc10c(&uStack_28,&uStack_40,uVar1,puVar2);
  return;
}



/* Entry: 104178344; end: 104178377;  */

void FUN_104178344(void)

{
  return;
}



/* Entry: 104178378; end: 10417839f;  */

void FUN_104178378(undefined8 param_1,undefined8 param_2)

{
  _swift_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdb92cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss15ContiguousArrayV07_copyToaB0AByxGyF_11034e628)();
  return;
}



/* Entry: 1041783a0; end: 1041783fb;  */

void FUN_1041783a0(long *param_1,long param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1041783f8);
    (*pcVar2)();
  }
  if (param_2 != 0) {
    lVar1 = *(long *)(unaff_x20 + 0x28);
    if (param_3 <= *(long *)(unaff_x20 + 0x28)) {
      lVar1 = param_3;
    }
    __sSp10initialize4from5countySPyxG_SitF
              (param_2,lVar1,*(long *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x10));
    *param_1 = lVar1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1041783fc);
  (*pcVar2)();
}



/* Entry: 1041783fc; end: 10417841b;  */

void FUN_1041783fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_11034f410)
            (PTR___ss16IndexingIteratorVyxGStsMc_11034e748,param_1);
  return;
}



/* Entry: 10417841c; end: 10417843f;  */

void FUN_10417841c(void)

{
  FUN_1041784d4(0x112d4f688,PTR___sSnyxGSksSxRzSZ6StrideRpzrlMc_11034e120);
  return;
}



/* Entry: 104178440; end: 10417845f;  */

void FUN_104178440(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_11034f410)(&UNK_10dcdaab0,param_1);
  return;
}



/* Entry: 104178460; end: 104178483;  */

void FUN_104178460(void)

{
  FUN_1041784d4(0x112f920a0,PTR___sSnyxGSKsSxRzSZ6StrideRpzrlMc_11034e110);
  return;
}



/* Entry: 104178484; end: 1041784af;  */

void FUN_104178484(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_11034f410)(&UNK_10dcdab00,param_1);
  return;
}



/* Entry: 1041784b0; end: 1041784d3;  */

void FUN_1041784b0(void)

{
  FUN_1041784d4(0x112f920a8,PTR___sSnyxGSlsSxRzSZ6StrideRpzrlMc_11034e128);
  return;
}



/* Entry: 1041784d4; end: 104178547;  */

void FUN_1041784d4(long *param_1,long param_2)

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



/* Entry: 104178548; end: 104178583;  */

void FUN_104178548(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_11034f410)(&UNK_10dcdab60,param_1);
  return;
}



/* Entry: 104178584; end: 1041785f3;  */

undefined1  [16]
FUN_104178584(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_3;
  uVar4 = param_4;
  FUN_104177b80();
  uVar3 = 0;
  FUN_10417b6a8(0,param_3,param_4);
  FUN_104178600(param_1,param_2,uVar3);
  auVar1._8_8_ = uVar4;
  auVar1._0_8_ = uVar2;
  return auVar1;
}



/* Entry: 1041785f4; end: 1041785ff;  */

void FUN_1041785f4(ulong param_1,long param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong *puVar8;
  ulong *unaff_x20;
  undefined8 uVar9;
  undefined1 auStack_78 [24];
  
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x104178770);
    (*pcVar2)();
  }
  uVar9 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = 0;
  __ss15ContiguousArrayVMa(0,uVar9);
  __ss15ContiguousArrayV15reserveCapacityyySiF(param_1,uVar3);
  uVar5 = *unaff_x20;
  uVar6 = unaff_x20[1];
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  uVar4 = uVar5;
  FUN_10417b070(uVar5,uVar6,uVar9,uVar3);
  func_0x00010416d850();
  func_0x00010417b0b4(uVar5,uVar6,uVar9,uVar3);
  if ((long)param_1 <= (long)uVar4) {
    __ss15ContiguousArrayV5countSivg(uVar6,uVar9);
    func_0x00010416d850();
    uVar1 = uVar5;
    if ((long)uVar5 <= (long)param_1) {
      uVar1 = param_1;
    }
    param_1 = uVar6;
    if ((long)uVar6 <= (long)uVar1) {
      param_1 = uVar1;
    }
    if ((long)uVar4 <= (long)param_1) {
      FUN_10417ab64(param_2);
      uVar6 = *unaff_x20;
      uVar4 = uVar6;
      func_0x00010417b0b4(uVar6,unaff_x20[1],uVar9,uVar3);
      if (uVar4 != uVar5) {
        if (uVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x104178774);
          (*pcVar2)();
        }
        _swift_beginAccess(uVar6 + 0x10,auStack_78,1,0);
        *(ulong *)(uVar6 + 0x18) = *(ulong *)(uVar6 + 0x18) & 0xffffffffffffffc0 | uVar5 & 0x3f;
      }
      return;
    }
  }
  uVar6 = uVar5;
  if ((long)uVar5 <= (long)param_1) {
    uVar6 = param_1;
  }
  uVar3 = 0;
  __ss15ContiguousArrayVMa(0,*(undefined8 *)(param_2 + 0x10));
  puVar7 = PTR___ss15ContiguousArrayVyxGSksMc_11034e6c8;
  _swift_getWitnessTable(PTR___ss15ContiguousArrayVyxGSksMc_11034e6c8,uVar3);
  puVar8 = unaff_x20 + 1;
  FUN_104170520(puVar8,uVar6,0,uVar5,uVar3,puVar7,*(undefined8 *)(param_2 + 0x18));
  _swift_release(*unaff_x20);
  *unaff_x20 = (ulong)puVar8;
  return;
}



/* Entry: 104178600; end: 104178773;  */

void FUN_104178600(ulong param_1,ulong param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong *puVar7;
  ulong *unaff_x20;
  undefined8 uVar8;
  ulong uVar9;
  undefined1 auStack_78 [24];
  
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104178770);
    (*pcVar1)();
  }
  uVar8 = *(undefined8 *)(param_3 + 0x10);
  uVar2 = 0;
  __ss15ContiguousArrayVMa(0,uVar8);
  __ss15ContiguousArrayV15reserveCapacityyySiF(param_1,uVar2);
  uVar4 = *unaff_x20;
  uVar5 = unaff_x20[1];
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  uVar3 = uVar4;
  FUN_10417b070(uVar4,uVar5,uVar8,uVar2);
  func_0x00010416d850();
  uVar9 = param_1;
  if ((param_2 & 1) == 0) {
    func_0x00010417b0b4(uVar4,uVar5,uVar8,uVar2);
    uVar9 = uVar4;
  }
  if ((long)param_1 <= (long)uVar3) {
    __ss15ContiguousArrayV5countSivg(uVar5,uVar8);
    func_0x00010416d850();
    uVar4 = uVar9;
    if ((long)uVar9 <= (long)param_1) {
      uVar4 = param_1;
    }
    param_1 = uVar5;
    if ((long)uVar5 <= (long)uVar4) {
      param_1 = uVar4;
    }
    if ((long)uVar3 <= (long)param_1) {
      FUN_10417ab64(param_3);
      uVar4 = *unaff_x20;
      uVar5 = uVar4;
      func_0x00010417b0b4(uVar4,unaff_x20[1],uVar8,uVar2);
      if (uVar5 != uVar9) {
        if (uVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x104178774);
          (*pcVar1)();
        }
        _swift_beginAccess(uVar4 + 0x10,auStack_78,1,0);
        *(ulong *)(uVar4 + 0x18) = *(ulong *)(uVar4 + 0x18) & 0xffffffffffffffc0 | uVar9 & 0x3f;
      }
      return;
    }
  }
  uVar4 = uVar9;
  if ((long)uVar9 <= (long)param_1) {
    uVar4 = param_1;
  }
  uVar2 = 0;
  __ss15ContiguousArrayVMa(0,*(undefined8 *)(param_3 + 0x10));
  puVar6 = PTR___ss15ContiguousArrayVyxGSksMc_11034e6c8;
  _swift_getWitnessTable(PTR___ss15ContiguousArrayVyxGSksMc_11034e6c8,uVar2);
  puVar7 = unaff_x20 + 1;
  FUN_104170520(puVar7,uVar4,0,uVar9,uVar2,puVar6,*(undefined8 *)(param_3 + 0x18));
  _swift_release(*unaff_x20);
  *unaff_x20 = (ulong)puVar7;
  return;
}



/* Entry: 104178774; end: 104178787;  */

void FUN_104178774(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss15ContiguousArrayVys0B5SliceVyxGSnySiGcig_11034e698)
            (param_3,param_4,param_2,param_5);
  return;
}



/* Entry: 104178788; end: 104178837;  */

undefined1  [16]
FUN_104178788(long param_1,uint param_2,undefined8 param_3,long param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  
  func_0x00010417a89c();
  uVar4 = (uint)(param_1 < param_4 || param_5 <= param_1);
  lVar2 = 0;
  if (uVar4 == 0) {
    lVar2 = param_1;
  }
  bVar3 = (param_2 & 0xff) != 1;
  if (bVar3) {
    param_1 = lVar2;
  }
  uVar1 = 1;
  if (bVar3) {
    uVar1 = uVar4;
  }
  auVar5._8_4_ = uVar1;
  auVar5._0_8_ = param_1;
  auVar5._12_4_ = 0;
  return auVar5;
}



/* Entry: 104178838; end: 104178877;  */

void FUN_104178838(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e7f2b60);
  return;
}



/* Entry: 104178878; end: 1041788bb;  */

bool FUN_104178878(long param_1,uint param_2,undefined8 param_3,long param_4,long param_5)

{
  func_0x00010417a89c();
  return (param_2 & 0xff) != 1 && (param_4 <= param_1 && param_1 < param_5);
}



/* Entry: 1041788bc; end: 1041789c7;  */

void FUN_1041788bc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7,undefined8 param_8,undefined8 param_9
                  )

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  
  lVar3 = 0;
  lVar2 = param_6;
  if (param_6 != param_7) {
    lVar3 = param_7;
    uVar4 = param_5;
    uVar5 = param_8;
    __ss15ContiguousArrayVys0B5SliceVyxGSnySiGcig(param_6,param_7,param_5,param_8);
    uStack_90 = param_8;
    uStack_88 = param_9;
    uStack_80 = param_2;
    uStack_78 = param_3;
    FUN_1041789c8(&lStack_68,FUN_1041794d4,auStack_a0,lVar2,lVar3,uVar4,uVar5,param_8,
                  PTR___sSiN_11034deb0,PTR___ss5NeverON_11034ee88,
                  PTR___ss5NeverOs5ErrorsWP_11034ee90);
    _swift_unknownObjectRelease(lVar2);
    lVar2 = param_6 + lStack_68;
    lVar3 = lStack_68;
    if (SCARRY8(param_6,lStack_68)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1041789c8);
      (*pcVar1)();
    }
  }
  *param_1 = param_4;
  param_1[1] = param_5;
  param_1[2] = param_6;
  param_1[3] = param_7;
  param_1[4] = lVar2;
  param_1[5] = lVar3;
  return;
}



/* Entry: 1041789c8; end: 104178a4b;  */

void FUN_1041789c8(void)

{
  long lVar1;
  long extraout_x12;
  undefined8 extraout_x13;
  long unaff_x21;
  long lVar2;
  long in_stack_00000000;
  undefined8 in_stack_00000010;
  long alStack_50 [4];
  
  lVar2 = *(long *)(in_stack_00000000 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = -(extraout_x12 + 0xfU & 0xfffffffffffffff0);
  *(undefined8 *)((long)alStack_50 + lVar1 + 8) = extraout_x13;
  *(undefined1 **)((long)alStack_50 + lVar1 + 0x10) = &stack0xffffffffffffffd0 + lVar1;
  *(long *)((long)alStack_50 + lVar1) = in_stack_00000000;
  FUN_104179398();
  if (unaff_x21 != 0) {
    (**(code **)(lVar2 + 0x20))
              (in_stack_00000010,&stack0xffffffffffffffd0 + lVar1,in_stack_00000000);
  }
  return;
}



/* Entry: 104178a4c; end: 104178af3;  */

void FUN_104178a4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  
  uVar1 = param_8;
  __ss15ContiguousArrayVys0B5SliceVyxGSnySiGcig(param_6,param_7,param_5,param_8);
  __ss10ArraySliceV32withContiguousStorageIfAvailableyqd__Sgqd__SRyxGKXEKlF
            (param_1,param_2,param_3,param_6,param_7,param_5,uVar1,param_8,param_9);
  _swift_unknownObjectRelease(param_6);
  return;
}



/* Entry: 104178af4; end: 104178b0f;  */

void FUN_104178af4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  uVar1 = unaff_x20[1];
  *param_1 = *unaff_x20;
  param_1[1] = uVar1;
  uVar2 = unaff_x20[2];
  uVar1 = unaff_x20[2];
  param_1[3] = unaff_x20[3];
  param_1[2] = uVar2;
  param_1[4] = uVar1;
  return;
}



/* Entry: 104178b10; end: 104178b43;  */

void FUN_104178b10(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10dcdab60;
  _swift_getWitnessTable(&UNK_10dcdab60,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdb833c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSlsE19underestimatedCountSivg_11034dff0)(param_1,puVar1);
  return;
}



/* Entry: 104178b44; end: 104178b57;  */

bool FUN_104178b44(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  
  uVar3 = *unaff_x20;
  lVar1 = unaff_x20[2];
  lVar2 = unaff_x20[3];
  func_0x00010417a89c(param_1,uVar3,unaff_x20[1],*(undefined8 *)(param_2 + 0x10),
                      *(undefined8 *)(param_2 + 0x18));
  return ((uint)uVar3 & 0xff) != 1 && (lVar1 <= param_1 && param_1 < lVar2);
}



/* Entry: 104178b58; end: 104178ba7;  */

undefined8 FUN_104178b58(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = uVar1;
  FUN_1041794a0(uVar1,uVar2,unaff_x20[2],unaff_x20[3],*(undefined8 *)(param_1 + 0x10),
                *(undefined8 *)(param_1 + 0x18));
  _swift_release(uVar2);
  _swift_release(uVar1);
  return uVar3;
}



/* Entry: 104178ba8; end: 104178c07;  */

undefined8 FUN_104178ba8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1041788bc(&uStack_50,param_2,param_3,*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3],
                *(undefined8 *)(param_4 + 0x10),*(undefined8 *)(param_4 + 0x18));
  *param_1 = uStack_50;
  param_1[1] = uStack_48;
  param_1[3] = uStack_38;
  param_1[2] = uStack_40;
  param_1[4] = uStack_30;
  return uStack_28;
}



/* Entry: 104178c08; end: 104178c37;  */

void FUN_104178c08(void)

{
  FUN_104178a4c();
  return;
}



/* Entry: 104178c38; end: 104178c7f;  */

void FUN_104178c38(long *param_1,long *param_2)

{
  code *pcVar1;
  
  if (!SBORROW8(*param_2,1)) {
    *param_1 = *param_2 + -1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104178c50);
  (*pcVar1)();
}



/* Entry: 104178c80; end: 104178d3b;  */

undefined1  [16] FUN_104178c80(long *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  lVar6 = *(long *)(param_3 + 0x10);
  lVar5 = *(long *)(lVar6 + -8);
  *param_1 = lVar6;
  param_1[1] = lVar5;
  lVar5 = *(long *)(lVar5 + 0x40);
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(lVar5,0x8af6);
  }
  param_1[2] = lVar5;
  uVar7 = *param_2;
  uVar2 = *(undefined8 *)(unaff_x20 + 8);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar1 = lVar5;
  FUN_104178774();
  __ss10ArraySliceVyxSicig(lVar5,uVar7,lVar1,uVar2,uVar3,uVar4,lVar6);
  _swift_unknownObjectRelease(lVar1);
  auVar8._8_8_ = lVar5;
  auVar8._0_8_ = FUN_104178d3c;
  return auVar8;
}



/* Entry: 104178d3c; end: 104178d6b;  */

void FUN_104178d3c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[2];
  (**(code **)(param_1[1] + 8))(uVar1,*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(uVar1);
  return;
}



/* Entry: 104178d6c; end: 104178dd3;  */

void FUN_104178d6c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 *unaff_x20;
  
  if ((long)unaff_x20[2] <= (long)unaff_x20[3]) {
    uVar1 = *unaff_x20;
    uVar3 = unaff_x20[1];
    uVar2 = *param_2;
    uVar4 = param_2[1];
    FUN_104178774(param_2,uVar3,unaff_x20[2],unaff_x20[3],*(undefined8 *)(param_3 + 0x10));
    _swift_unknownObjectRelease();
    *param_1 = uVar1;
    param_1[1] = uVar3;
    param_1[2] = uVar2;
    param_1[3] = uVar4;
    _swift_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(uVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x104178dd4);
  (*pcVar5)();
}



/* Entry: 104178dd4; end: 104178e63;  */

void FUN_104178dd4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  FUN_104178774();
  uVar1 = 0;
  __ss10ArraySliceVMa(0,uVar3);
  puVar2 = PTR___ss10ArraySliceVyxGSksMc_11034e2f0;
  _swift_getWitnessTable(PTR___ss10ArraySliceVyxGSksMc_11034e2f0,uVar1);
  __sSksSx5IndexRpzSnyABG7IndicesRtzSiAA_6StrideRTzrlE7indicesACvg
            (param_1,uVar1,puVar2,PTR___sSiSxsWP_11034dee8);
  _swift_unknownObjectRelease(param_2);
  return;
}



/* Entry: 104178e64; end: 104178e87;  */

bool FUN_104178e64(void)

{
  long unaff_x20;
  
  return *(long *)(unaff_x20 + 0x10) == *(long *)(unaff_x20 + 0x18);
}



/* Entry: 104178e88; end: 104178ec3;  */

void FUN_104178e88(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  FUN_104178788(param_2,uVar1,unaff_x20[1],unaff_x20[2],unaff_x20[3],*(undefined8 *)(param_3 + 0x10)
                ,*(undefined8 *)(param_3 + 0x18));
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)uVar1;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 104178ec4; end: 104178f3b;  */

void FUN_104178ec4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                  long param_5)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = *param_4;
  FUN_104178774(param_2,*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(param_5 + 0x10));
  FUN_104179538(uVar1,param_3,uVar2);
  _swift_unknownObjectRelease(param_2);
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  return;
}



/* Entry: 104178f3c; end: 104178f5f;  */

void FUN_104178f3c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long unaff_x20;
  
  FUN_104178774(param_1,*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(param_3 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 104178f60; end: 104178ff7;  */

void FUN_104178f60(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar6 = *param_1;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar5 = *(undefined8 *)(param_3 + 0x10);
  FUN_104178774(param_1,*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),uVar5);
  uVar3 = 0;
  uStack_58 = uVar1;
  uStack_50 = uVar2;
  uStack_48 = uVar6;
  __ss10ArraySliceVMa(0,uVar5);
  puVar4 = PTR___ss10ArraySliceVyxGSlsMc_11034e2f8;
  _swift_getWitnessTable(PTR___ss10ArraySliceVyxGSlsMc_11034e2f8,uVar3);
  func_0x0001020fc10c(&uStack_48,&uStack_58,uVar3,puVar4);
  _swift_unknownObjectRelease(param_1);
  return;
}



/* Entry: 104178ff8; end: 10417901b;  */

void FUN_104178ff8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long unaff_x20;
  
  FUN_104178774(param_1,*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(param_3 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 10417901c; end: 10417904b;  */

void FUN_10417901c(long *param_1,long *param_2)

{
  code *pcVar1;
  
  if (!SCARRY8(*param_2,1)) {
    *param_1 = *param_2 + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104179034);
  (*pcVar1)();
}



/* Entry: 10417904c; end: 10417911b;  */

uint FUN_10417904c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_9;
  __ss15ContiguousArrayVys0B5SliceVyxGSnySiGcig(param_3,param_4,param_2,param_9);
  uVar3 = param_9;
  __ss15ContiguousArrayVys0B5SliceVyxGSnySiGcig(param_7,param_8,param_6,param_9);
  uVar1 = param_3;
  __ss10ArraySliceVsSQRzlE2eeoiySbAByxG_ADtFZ
            (param_3,param_4,param_2,uVar2,param_7,param_8,param_6,uVar3,param_9,
             *(undefined8 *)(param_10 + 8));
  _swift_unknownObjectRelease(param_3);
  _swift_unknownObjectRelease(param_7);
  return (uint)uVar1 & 1;
}



/* Entry: 10417911c; end: 10417915b;  */

uint FUN_10417911c(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  FUN_10417904c(param_1,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                *(undefined8 *)(param_1 + 0x18),param_5,*(undefined8 *)(param_2 + 8),
                *(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),
                *(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18));
  return (uint)param_1 & 1;
}



/* Entry: 10417915c; end: 1041792bb;  */

void FUN_10417915c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,long param_6,undefined8 param_7)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x12;
  undefined8 extraout_x13;
  long lVar7;
  undefined1 *puVar8;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar7 = *(long *)(param_6 + -8);
  lVar5 = param_4;
  lVar2 = param_5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar8 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  if (SBORROW8(lVar2,lVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1041792b8);
    (*pcVar1)();
  }
  __ss6HasherV8_combineyySuF(lVar2 - lVar5);
  if (param_4 != param_5) {
    lVar5 = param_4;
    uStack_68 = param_7;
    if (param_5 <= param_4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1041792bc);
      (*pcVar1)();
    }
    do {
      lVar2 = param_4;
      lVar3 = param_5;
      uVar4 = param_3;
      lVar6 = param_6;
      __ss15ContiguousArrayVys0B5SliceVyxGSnySiGcig(param_4,param_5,param_3,param_6);
      __ss10ArraySliceVyxSicig((long)puVar8 - extraout_x12,lVar5,lVar2,lVar3,uVar4,lVar6,param_6);
      _swift_unknownObjectRelease(lVar2);
      lVar5 = lVar5 + 1;
      (**(code **)(lVar7 + 0x20))(puVar8,(long)puVar8 - extraout_x12,param_6);
      __sSH4hash4intoys6HasherVz_tFTj(extraout_x13,param_6,uStack_68);
      (**(code **)(lVar7 + 8))(puVar8,param_6);
    } while (param_5 != lVar5);
  }
  return;
}



/* Entry: 1041792bc; end: 10417932f;  */

void FUN_1041792bc(void)

{
  undefined1 auStack_88 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_88,0);
  FUN_10417915c(auStack_88);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104179330; end: 10417934f;  */

void FUN_104179330(void)

{
  undefined1 auStack_88 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_88,0);
  FUN_10417915c(auStack_88);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104179350; end: 104179397;  */

void FUN_104179350(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_10417915c(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104179398; end: 10417949f;  */

void FUN_104179398(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10,undefined4 param_11,undefined4 param_12,
                  undefined8 param_13)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x8;
  long lVar6;
  long unaff_x21;
  undefined1 auStack_80 [8];
  long lStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  
  lStack_78 = param_10;
  lVar6 = *(long *)(param_10 + -8);
  uVar1 = param_4;
  uVar2 = param_5;
  uVar3 = param_6;
  uVar4 = param_7;
  uVar5 = param_8;
  uStack_70 = param_3;
  pcStack_68 = param_2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  __ss12_SliceBufferV19firstElementAddressSpyxGvg(uVar1,uVar2,uVar3,uVar4,uVar5);
  __ss12_SliceBufferV5countSivg(param_4,param_5,param_6,param_7,param_8);
  __sSR5start5countSRyxGSPyxGSg_SitcfC(uVar1,param_4,param_8);
  (*pcStack_68)(param_1);
  if (unaff_x21 != 0) {
    (**(code **)(lVar6 + 0x20))
              (param_13,auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lStack_78);
  }
  return;
}



/* Entry: 1041794a0; end: 1041794d3;  */

void FUN_1041794a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  __ss15ContiguousArrayVys0B5SliceVyxGSnySiGcig(param_3,param_4,param_2,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdb8ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss10ArraySliceV017_copyToContiguousA0s0eA0VyxGyF_11034e2b8)();
  return;
}



/* Entry: 1041794d4; end: 104179537;  */

void FUN_1041794d4(long *param_1,long param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x104179534);
    (*pcVar2)();
  }
  lVar1 = *(long *)(unaff_x20 + 0x28);
  if (param_3 <= *(long *)(unaff_x20 + 0x28)) {
    lVar1 = param_3;
  }
  if (0 < lVar1) {
    if (param_2 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104179538);
      (*pcVar2)();
    }
    __sSp10initialize4from5countySPyxG_SitF
              (param_2,lVar1,*(long *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x10));
  }
  *param_1 = lVar1;
  return;
}



/* Entry: 104179538; end: 10417959b;  */

undefined1  [16] FUN_104179538(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  
  uVar1 = param_3 - param_1;
  if (SBORROW8(param_3,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x104179588);
    (*pcVar2)();
  }
  if ((long)param_2 < 1) {
    if (((long)uVar1 < 1) && ((long)param_2 < (long)uVar1)) goto LAB_104179568;
  }
  else if ((-1 < (long)uVar1) && (uVar1 < param_2)) {
LAB_104179568:
    return ZEXT816(1) << 0x40;
  }
  if (SCARRY8(param_1,param_2)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10417958c);
    (*pcVar2)();
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_1 + param_2;
  return auVar3;
}



/* Entry: 10417959c; end: 1041795bf;  */

void FUN_10417959c(void)

{
  FUN_104179634(0x112d4f688,PTR___sSnyxGSksSxRzSZ6StrideRpzrlMc_11034e120);
  return;
}



/* Entry: 1041795c0; end: 1041795cf;  */

void FUN_1041795c0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_11034f410)(&UNK_10dcdaab0,param_1);
  return;
}



/* Entry: 1041795d0; end: 1041795f3;  */

void FUN_1041795d0(void)

{
  FUN_104179634(0x112f920a0,PTR___sSnyxGSKsSxRzSZ6StrideRpzrlMc_11034e110);
  return;
}



/* Entry: 1041795f4; end: 10417960f;  */

void FUN_1041795f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_11034f410)(&UNK_10dcdaa38,param_1);
  return;
}



/* Entry: 104179610; end: 104179633;  */

void FUN_104179610(void)

{
  FUN_104179634(0x112f920a8,PTR___sSnyxGSlsSxRzSZ6StrideRpzrlMc_11034e128);
  return;
}



/* Entry: 104179634; end: 1041796a7;  */

void FUN_104179634(long *param_1,long param_2)

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



/* Entry: 1041796a8; end: 1041796bf;  */

void FUN_1041796a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_11034f410)(&UNK_10dcdac40,param_1);
  return;
}



/* Entry: 1041796c0; end: 10417974f;  */

long FUN_1041796c0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104179750; end: 1041797bb;  */

undefined8 * FUN_104179750(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_retain();
  _swift_release(uVar1);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return param_1;
}



/* Entry: 1041797bc; end: 1041797ff;  */

undefined8 * FUN_1041797bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_release(uVar1);
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  return param_1;
}



/* Entry: 104179800; end: 1041798c3;  */

int FUN_104179800(int *param_1,int param_2)

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



/* Entry: 1041798c4; end: 104179a0f;  */

undefined1
FUN_1041798c4(long param_1,long param_2,long param_3,long param_4,long param_5,undefined8 param_6)

{
  ulong uVar1;
  long extraout_x8;
  long extraout_x12;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined1 uVar6;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar2 = *(long *)(param_5 + -8);
  uStack_70 = param_6;
  lStack_68 = param_4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40));
  uVar4 = (long)&uStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  if (((param_1 == 0) || (param_3 == 0)) || (param_1 != param_3)) {
    lVar5 = param_2;
    __ss15ContiguousArrayV5countSivg(param_2,param_5);
    lVar3 = lStack_68;
    __ss15ContiguousArrayV5countSivg(lStack_68,param_5);
    if (lVar5 == lVar3) {
      lVar5 = 0;
      lVar3 = *(long *)(param_2 + 0x10);
      do {
        if (lVar3 == lVar5) {
          return 1;
        }
        __ss15ContiguousArrayVyxSicig(uVar4 - extraout_x12,lVar5,param_2,param_5);
        lVar5 = lVar5 + 1;
        (**(code **)(lVar2 + 0x20))(uVar4,uVar4 - extraout_x12,param_5);
        uVar1 = uVar4;
        FUN_104177bb8(uVar4,param_3,lStack_68,param_5,uStack_70);
        (**(code **)(lVar2 + 8))(uVar4,param_5);
        uVar6 = 0;
      } while ((uVar1 & 1) != 0);
    }
    else {
      uVar6 = 0;
    }
  }
  else {
    uVar6 = 1;
  }
  return uVar6;
}



/* Entry: 104179a10; end: 104179a67;  */

void FUN_104179a10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_30 = param_1;
  uStack_28 = param_2;
  FUN_10417b6a8(0,param_3,param_4);
  puVar2 = &UNK_10dcda8f8;
  _swift_getWitnessTable(&UNK_10dcda8f8,uVar1);
  FUN_1041877f0(&uStack_30,uVar1,puVar2);
  return;
}



/* Entry: 104179a68; end: 104179a8b;  */

void FUN_104179a68(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = *unaff_x20;
  uStack_28 = unaff_x20[1];
  uVar1 = 0;
  FUN_10417b6a8(0,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  puVar2 = &UNK_10dcda8f8;
  _swift_getWitnessTable(&UNK_10dcda8f8,uVar1);
  FUN_1041877f0(&uStack_30,uVar1,puVar2);
  return;
}



/* Entry: 104179a8c; end: 104179c23;  */

void FUN_104179a8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = 0;
  __ss6MirrorV22AncestorRepresentationOMa();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar6 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112dcc478;
  func_0x0001000285a8(0x112dcc478,&UNK_10d98eb80);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)puVar6 - extraout_x8_00;
  uVar1 = *(undefined4 *)PTR___ss6MirrorV12DisplayStyleO10collectionyA2DmFWC_11034ef88;
  lVar2 = 0;
  uStack_78 = param_3;
  uStack_70 = param_2;
  uStack_68 = param_3;
  __ss6MirrorV12DisplayStyleOMa();
  lVar8 = *(long *)(lVar2 + -8);
  (**(code **)(lVar8 + 0x68))(lVar7,uVar1,lVar2);
  (**(code **)(lVar8 + 0x38))(lVar7,0,1,lVar2);
  uVar3 = 0;
  FUN_104179c24(0,param_4,param_5);
  uVar4 = 0;
  __ss15ContiguousArrayVMa(0,param_4);
  puVar5 = PTR___ss15ContiguousArrayVyxGSlsMc_11034e6d0;
  _swift_getWitnessTable(PTR___ss15ContiguousArrayVyxGSlsMc_11034e6d0,uVar4);
  FUN_104171894(puVar6,uVar3,uVar4,puVar5);
  _swift_retain(param_2);
  _swift_retain_n(param_3,2);
  __ss6MirrorV_17unlabeledChildren12displayStyle22ancestorRepresentationABx_q_AB07DisplayE0OSgAB08AncestorG0OtcSlR_r0_lufC
            (param_1,&uStack_70,&uStack_78,lVar7,puVar6,uVar3,uVar4,puVar5);
  return;
}



/* Entry: 104179c24; end: 104179c5b;  */

void FUN_104179c24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e7f2b9c);
  return;
}



/* Entry: 104179c5c; end: 104179da3;  */

void FUN_104179c5c(undefined8 *param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long extraout_x8;
  long extraout_x12;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar2 = *(long *)(param_4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40));
  lVar3 = (long)&puStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  puStack_c0 = param_1;
  __ss6HasherV8finalizeSiyF();
  lVar4 = *(long *)(param_3 + 0x10);
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    lVar6 = 0;
    lStack_b8 = param_3;
    do {
      __ss15ContiguousArrayVyxSicig(lVar3 - extraout_x12,lVar6,lStack_b8,param_4);
      lVar6 = lVar6 + 1;
      (**(code **)(lVar2 + 0x20))(lVar3,lVar3 - extraout_x12,param_4);
      puVar1 = param_1;
      __sSH13_rawHashValue4seedS2i_tFTj(param_1,param_4,param_5);
      (**(code **)(lVar2 + 8))(lVar3,param_4);
      uVar5 = (ulong)puVar1 ^ uVar5;
    } while (lVar4 != lVar6);
  }
  __ss6HasherV8_combineyySuF(uVar5);
  return;
}



/* Entry: 104179da4; end: 104179dff;  */

void FUN_104179da4(void)

{
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  FUN_104179c5c(auStack_78);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104179e00; end: 104179e17;  */

void FUN_104179e00(void)

{
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  FUN_104179c5c(auStack_78);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104179e18; end: 104179e5b;  */

void FUN_104179e18(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_104179c5c(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104179e5c; end: 104179ed3;  */

void FUN_104179e5c(long *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_38;
  
  lVar5 = *(long *)(param_3 + 0x10);
  uVar1 = 0;
  uStack_38 = param_2;
  __sSaMa(0,lVar5);
  uVar4 = *(undefined8 *)(param_3 + 0x18);
  puVar2 = PTR___sSayxGSksMc_11034dd18;
  _swift_getWitnessTable(PTR___sSayxGSksMc_11034dd18,uVar1);
  puVar3 = &uStack_38;
  FUN_104175a3c(puVar3,lVar5,uVar1,uVar4,puVar2);
  *param_1 = (long)puVar3;
  param_1[1] = lVar5;
  return;
}



/* Entry: 104179ed4; end: 104179eff;  */

void FUN_104179ed4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  FUN_104177b80();
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 104179f00; end: 104179f0f;  */

bool FUN_104179f00(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  char cStack_40;
  
  uStack_60 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uStack_68 = *(undefined8 *)(param_2 + 0x18);
  uVar3 = 0x113065c60;
  uStack_70 = uVar1;
  uStack_58 = uVar2;
  uStack_50 = param_1;
  func_0x0001000285a8(0x113065c60,&UNK_10dcdaf20);
  func_0x000102107f98(auStack_48,FUN_104177cbc,auStack_80,uVar2,uVar1,uVar3,
                      PTR___ss5NeverON_11034ee88,PTR___ss5NeverOs5ErrorsWP_11034ee90);
  return cStack_40 != '\x01';
}



/* Entry: 104179f10; end: 104179fd7;  */

void FUN_104179f10(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = uVar1;
  uVar4 = uVar2;
  FUN_10417a4fc(uVar1,uVar2,*unaff_x20,unaff_x20[1],*(undefined8 *)(param_3 + 0x10),
                *(undefined8 *)(param_3 + 0x18));
  _swift_release(uVar2);
  _swift_release(uVar1);
  *param_1 = uVar3;
  param_1[1] = uVar4;
  return;
}



/* Entry: 104179fd8; end: 104179feb;  */

void FUN_104179fd8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  (*(code *)0x104179fe4)
            (uVar1,uVar2,*unaff_x20,unaff_x20[1],*(undefined8 *)(param_3 + 0x10),
             *(undefined8 *)(param_3 + 0x18));
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 104179fec; end: 10417a067;  */

uint FUN_104179fec(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(param_3 + 0x10);
  uVar2 = 0;
  FUN_10417b6a8(0,lVar1,*(undefined8 *)(param_3 + 0x18));
  uVar3 = param_2;
  FUN_1041762e4(param_2,uVar2);
  __ss15ContiguousArrayVyxSicig(param_1,uVar2,*(undefined8 *)(unaff_x20 + 8),lVar1);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_2,lVar1);
  return (uint)uVar3 & 1;
}



/* Entry: 10417a068; end: 10417a0ab;  */

void FUN_10417a068(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  
  lVar3 = 0;
  FUN_10417b6a8(0,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18));
  uVar4 = *unaff_x20;
  lVar1 = *(long *)(lVar3 + 0x10);
  func_0x00010417a89c(param_2,uVar4,unaff_x20[1],lVar1,*(undefined8 *)(lVar3 + 0x18));
  bVar2 = ((uint)uVar4 & 0xff) != 1;
  if (bVar2) {
    FUN_10417a8a8(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x000104177cb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,!bVar2,1,lVar1);
  return;
}



/* Entry: 10417a0ac; end: 10417a0af;  */

void FUN_10417a0ac(undefined8 param_1,ulong param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  lVar2 = *(long *)(param_3 + 0x10);
  lVar3 = 0;
  FUN_10417b6a8(0,lVar2,*(undefined8 *)(param_3 + 0x18));
  uVar4 = param_2;
  FUN_1041762e4(param_2,lVar3);
  bVar1 = (uVar4 & 1) == 0;
  if (bVar1) {
    plVar5 = (long *)(unaff_x20 + 8);
    __ss15ContiguousArrayVyxSicig(param_1,lVar3,*plVar5,lVar2);
    __ss15ContiguousArrayVMa(0,lVar2);
    __ss15ContiguousArrayV21_makeMutableAndUniqueyyF();
    lVar7 = *plVar5;
    func_0x000104174f24(lVar3,lVar7,lVar2);
    FUN_10417397c(lVar7,lVar2);
    lVar6 = *(long *)(lVar2 + -8);
    (**(code **)(lVar6 + 0x28))(lVar7 + *(long *)(lVar6 + 0x48) * lVar3,param_2,lVar2);
    func_0x000104174f40(plVar5,lVar2);
  }
  else {
    lVar6 = *(long *)(lVar2 + -8);
    (**(code **)(lVar6 + 8))(param_2,lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010417a19c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar6 + 0x38))(param_1,!bVar1,1,lVar2);
  return;
}



/* Entry: 10417a0b0; end: 10417a19f;  */

void FUN_10417a0b0(undefined8 param_1,ulong param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  lVar2 = *(long *)(param_3 + 0x10);
  lVar3 = 0;
  FUN_10417b6a8(0,lVar2,*(undefined8 *)(param_3 + 0x18));
  uVar4 = param_2;
  FUN_1041762e4(param_2,lVar3);
  bVar1 = (uVar4 & 1) == 0;
  if (bVar1) {
    plVar5 = (long *)(unaff_x20 + 8);
    __ss15ContiguousArrayVyxSicig(param_1,lVar3,*plVar5,lVar2);
    __ss15ContiguousArrayVMa(0,lVar2);
    __ss15ContiguousArrayV21_makeMutableAndUniqueyyF();
    lVar7 = *plVar5;
    func_0x000104174f24(lVar3,lVar7,lVar2);
    FUN_10417397c(lVar7,lVar2);
    lVar6 = *(long *)(lVar2 + -8);
    (**(code **)(lVar6 + 0x28))(lVar7 + *(long *)(lVar6 + 0x48) * lVar3,param_2,lVar2);
    func_0x000104174f40(plVar5,lVar2);
  }
  else {
    lVar6 = *(long *)(lVar2 + -8);
    (**(code **)(lVar6 + 8))(param_2,lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010417a19c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar6 + 0x38))(param_1,!bVar1,1,lVar2);
  return;
}



/* Entry: 10417a1a0; end: 10417a1ef;  */

void FUN_10417a1a0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = 0;
  FUN_10417b6a8(0,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
  FUN_104176954(uVar1,uVar2,uVar3);
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 10417a1f0; end: 10417a23f;  */

void FUN_10417a1f0(undefined8 *param_1,undefined8 param_2)

{
  FUN_10417a240(*param_1,param_1[1],param_2,FUN_104176924);
  return;
}



/* Entry: 10417a240; end: 10417a28f;  */

void FUN_10417a240(undefined8 param_1,undefined8 param_2,long param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10417b6a8(0,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010417a28c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,uVar1);
  return;
}



/* Entry: 10417a290; end: 10417a29b;  */

void FUN_10417a290(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  FUN_10417a2d8(uVar1,uVar2,*unaff_x20,unaff_x20[1],*(undefined8 *)(param_3 + 0x10),
                *(undefined8 *)(param_3 + 0x18));
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 10417a29c; end: 10417a2d7;  */

void FUN_10417a29c(undefined8 *param_1,undefined8 *param_2,long param_3,undefined8 param_4,
                  code *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  (*param_5)(uVar1,uVar2,*unaff_x20,unaff_x20[1],*(undefined8 *)(param_3 + 0x10),
             *(undefined8 *)(param_3 + 0x18));
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 10417a2d8; end: 10417a35f;  */

void FUN_10417a2d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = 0;
  uStack_50 = param_1;
  uStack_48 = param_2;
  FUN_10417b6a8(0,param_5,param_6);
  puVar2 = &UNK_10dcda7e0;
  _swift_getWitnessTable(&UNK_10dcda7e0,uVar1);
  FUN_104176ff0(&uStack_50,param_3,param_4,param_5,uVar1,param_6,puVar2);
  return;
}



/* Entry: 10417a360; end: 10417a3af;  */

undefined1 FUN_10417a360(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  long extraout_x12;
  long lVar5;
  undefined8 *unaff_x20;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_70 = *param_1;
  lVar2 = param_1[1];
  lVar3 = unaff_x20[1];
  lVar1 = *(long *)(param_2 + 0x10);
  uStack_68 = *(undefined8 *)(param_2 + 0x18);
  lVar5 = *(long *)(lVar1 + -8);
  lVar6 = lVar2;
  lVar8 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(undefined8 *)(lVar5 + 0x40),uStack_70,lVar2,*unaff_x20);
  uVar7 = (long)&uStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  __ss15ContiguousArrayV5countSivg(lVar6,lVar8);
  lVar8 = lVar3;
  __ss15ContiguousArrayV5countSivg(lVar3,lVar1);
  if (lVar8 <= lVar6) {
    lVar8 = 0;
    lVar6 = *(long *)(lVar3 + 0x10);
    do {
      if (lVar6 == lVar8) {
        return 1;
      }
      __ss15ContiguousArrayVyxSicig(uVar7 - extraout_x12,lVar8,lVar3,lVar1);
      lVar8 = lVar8 + 1;
      (**(code **)(lVar5 + 0x20))(uVar7,uVar7 - extraout_x12,lVar1);
      uVar4 = uVar7;
      FUN_104177bb8(uVar7,uStack_70,lVar2,lVar1,uStack_68);
      (**(code **)(lVar5 + 8))(uVar7,lVar1);
    } while ((uVar4 & 1) != 0);
  }
  return 0;
}



/* Entry: 10417a3b0; end: 10417a467;  */

void FUN_10417a3b0(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long extraout_x8;
  long lVar3;
  
  lVar3 = *(long *)(param_3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar1 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar3 + 0x10))(puVar1,param_2,param_3);
  uVar2 = *(undefined8 *)(param_5 + 0x10);
  func_0x000104175f54(puVar1,uVar2,param_3,*(undefined8 *)(param_5 + 0x18),param_4);
  (**(code **)(lVar3 + 8))(param_2,param_3);
  *param_1 = puVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 10417a468; end: 10417a477;  */

void FUN_10417a468(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_50 = *param_1;
  uStack_48 = param_1[1];
  puVar6 = &uStack_50;
  uVar7 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  uVar4 = 0;
  FUN_10417b6a8(0,uVar1,uVar3);
  puVar5 = &UNK_10dcda7e0;
  _swift_getWitnessTable(&UNK_10dcda7e0,uVar4);
  FUN_104176ff0(&uStack_50,uVar7,uVar2,uVar1,uVar4,uVar3,puVar5);
  *unaff_x20 = puVar6;
  unaff_x20[1] = uVar7;
  return;
}



/* Entry: 10417a478; end: 10417a4fb;  */

void FUN_10417a478(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar6 = &uStack_50;
  uVar7 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  uVar4 = 0;
  uStack_50 = param_1;
  uStack_48 = param_2;
  FUN_10417b6a8(0,uVar1,uVar3);
  puVar5 = &UNK_10dcda7e0;
  _swift_getWitnessTable(&UNK_10dcda7e0,uVar4);
  FUN_104176ff0(&uStack_50,uVar7,uVar2,uVar1,uVar4,uVar3,puVar5);
  *unaff_x20 = puVar6;
  unaff_x20[1] = uVar7;
  return;
}



/* Entry: 10417a4fc; end: 10417a4ff;  */

undefined1  [16]
FUN_10417a4fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  
  uVar2 = 0;
  FUN_10417b6a8(0,param_5,param_6);
  FUN_104176954(param_1,param_2,uVar2);
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_3;
  return auVar1;
}



/* Entry: 10417a500; end: 10417a567;  */

undefined1  [16]
FUN_10417a500(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
             undefined8 param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  long extraout_x8;
  long extraout_x12;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  _swift_retain(param_3);
  _swift_retain(param_4);
  lVar3 = *(long *)(param_5 + -8);
  lVar7 = param_5;
  uVar2 = param_6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  uVar5 = (long)&uStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = uVar5 - extraout_x12;
  FUN_104177b80();
  lVar4 = *(long *)(param_4 + 0x10);
  lStack_70 = lVar7;
  uStack_68 = uVar2;
  if (lVar4 == 0) {
    _swift_release(param_4);
    _swift_release(param_3);
  }
  else {
    lVar7 = 0;
    uStack_80 = param_3;
    lStack_78 = lVar6;
    do {
      __ss15ContiguousArrayVyxSicig(lVar6,lVar7,param_4,param_5);
      (**(code **)(lVar3 + 0x20))(uVar5,lVar6,param_5);
      uVar1 = uVar5;
      FUN_104177bb8(uVar5,param_1,param_2,param_5,param_6);
      if ((uVar1 & 1) != 0) {
        uVar2 = 0;
        FUN_10417b6a8(0,param_5,param_6);
        FUN_104176354(uVar5,uVar2);
        lVar6 = lStack_78;
      }
      lVar7 = lVar7 + 1;
      (**(code **)(lVar3 + 8))(uVar5,param_5);
    } while (lVar4 != lVar7);
    _swift_release(param_4);
    _swift_release(uStack_80);
    lVar7 = lStack_70;
    uVar2 = uStack_68;
  }
  auVar8._8_8_ = uVar2;
  auVar8._0_8_ = lVar7;
  return auVar8;
}



/* Entry: 10417a568; end: 10417a57f;  */

void FUN_10417a568(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_11034f410)(&UNK_10dcdadb8,param_1);
  return;
}



/* Entry: 10417a580; end: 10417a5db;  */

void FUN_10417a580(undefined8 *param_1)

{
  _swift_release(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1[1]);
  return;
}



/* Entry: 10417a5dc; end: 10417a637;  */

undefined8 * FUN_10417a5dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_retain();
  _swift_release(uVar1);
  return param_1;
}


