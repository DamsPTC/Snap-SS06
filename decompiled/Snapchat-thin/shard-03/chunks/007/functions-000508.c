/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102c8db6c; end: 102c8dc33;  */

uint FUN_102c8db6c(undefined **param_1,long param_2)

{
  uint uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  
  func_0x000107c42e38();
  func_0x000107c61180();
  if (param_1 == (undefined **)0x0) {
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110e5f338);
    lVar4 = param_2;
  }
  else {
    ppuVar2 = param_1;
    func_0x000107c5faec();
    lVar4 = param_2;
    func_0x000107c61170(param_1);
    ppuVar3 = &PTR____CFConstantStringClassReference_110e5f338;
    func_0x000107c5faec();
    if (param_2 != 0) {
      if (ppuVar2 == ppuVar3 && param_2 == lVar4) {
        func_0x000107c6142c(param_2);
        uVar1 = 1;
      }
      else {
        func_0x000107c605b8(ppuVar2,param_2,ppuVar3,lVar4,0);
        uVar1 = (uint)ppuVar2;
        func_0x000107c6142c(param_2);
      }
      goto LAB_102c8dc18;
    }
  }
  uVar1 = 0;
LAB_102c8dc18:
  func_0x000107c6142c(lVar4);
  return uVar1 & 1;
}



/* Entry: 102c8dc34; end: 102c8dfe3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c8dc34(undefined8 param_1,long param_2)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined1 uVar11;
  long lVar12;
  ulong uVar13;
  long unaff_x20;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  lVar3 = 0;
  lStack_78 = param_2;
  func_0x000107c5ebbc();
  lVar17 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  uVar15 = (long)&lStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000107c5ede0();
  lStack_70 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_70 + 0x40));
  lVar19 = uVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0x112d4b5b0;
  func_0x0001000285a8(0x112d4b5b0,&UNK_10d912140);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar18 = lVar19 - extraout_x8_01;
  lVar6 = 0;
  func_0x000107c5ec24();
  lVar14 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar12 = lVar18 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f08148);
  *(undefined8 *)(unaff_x20 + _DAT_112f08148) = param_1;
  func_0x000107c615e8(uVar7);
  func_0x000107c61604(unaff_x20 + _DAT_112f08110,lStack_78);
  func_0x000107c615f0(param_1);
  func_0x000107c3abfc();
  func_0x000107c61180();
  func_0x000107c5edb4(lVar19);
  func_0x000107c61170(param_1);
  func_0x000107c5ebe4(lVar18,lVar19,0);
  (**(code **)(lStack_70 + 8))(lVar19,lVar4);
  lVar5 = lVar18;
  (**(code **)(lVar14 + 0x30))(lVar18,1,lVar6);
  if ((int)lVar5 == 1) {
    FUN_102c8e0c8(lVar18,0x112d4b5b0,&UNK_10d912140);
  }
  else {
    lVar5 = lVar12;
    (**(code **)(lVar14 + 0x20))(lVar12,lVar18,lVar6);
    func_0x000107c5ebc4();
    if (lVar5 == 0) {
      (**(code **)(lVar14 + 8))(lVar12,lVar6);
    }
    else {
      lStack_70 = lVar12;
      uVar16 = *(ulong *)(lVar5 + 0x10);
      if (uVar16 == 0) {
        uVar11 = 0;
      }
      else {
        uVar13 = 0;
        bVar1 = *(byte *)(lVar17 + 0x50);
        lStack_80 = lVar14;
        lStack_78 = lVar6;
        do {
          if (*(ulong *)(lVar5 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102c8dfe4);
            (*pcVar2)();
          }
          uVar9 = lVar5 + ((ulong)bVar1 + 0x20 & ((ulong)bVar1 ^ 0xffffffffffffffff)) +
                  *(long *)(lVar17 + 0x48) * uVar13;
          uVar8 = uVar15;
          (**(code **)(lVar17 + 0x10))(uVar15,uVar9,lVar3);
          func_0x000107c5ebb4();
          uVar10 = uVar9;
          if ((uVar8 == 0x61625f6c61636f6c) && (uVar9 == 0xec00000072656e6e)) {
            func_0x000107c6142c();
LAB_102c8dee8:
            func_0x000107c5ebb8();
            if (uVar10 == 0) goto LAB_102c8de4c;
            if ((uVar9 == 0x65757274) && (uVar10 == 0xe400000000000000)) {
              func_0x000107c6142c(0xe400000000000000);
              (**(code **)(lVar17 + 8))(uVar15,lVar3);
LAB_102c8df88:
              uVar11 = 1;
              lVar14 = lStack_80;
              lVar6 = lStack_78;
              goto LAB_102c8df90;
            }
            func_0x000107c605b8();
            func_0x000107c6142c(uVar10);
            (**(code **)(lVar17 + 8))(uVar15,lVar3);
            if ((uVar9 & 1) != 0) goto LAB_102c8df88;
          }
          else {
            func_0x000107c605b8();
            func_0x000107c6142c();
            if ((uVar8 & 1) != 0) goto LAB_102c8dee8;
LAB_102c8de4c:
            (**(code **)(lVar17 + 8))(uVar15,lVar3);
          }
          uVar13 = uVar13 + 1;
        } while (uVar16 != uVar13);
        uVar11 = 0;
        lVar14 = lStack_80;
        lVar6 = lStack_78;
      }
LAB_102c8df90:
      func_0x000107c6142c(lVar5);
      (**(code **)(lVar14 + 8))(lStack_70,lVar6);
      *(undefined1 *)(unaff_x20 + _DAT_112f08160) = uVar11;
    }
  }
  FUN_102c8c9a8();
  return;
}



/* Entry: 102c8dfe4; end: 102c8e0bf;  */

undefined8 FUN_102c8dfe4(ulong param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  ulong uVar3;
  
  func_0x000107c5edbc();
  if (param_2 == 0) {
    return 0;
  }
  if ((param_1 == 0x7265646e696d6572) && (param_2 == -0x14ffffffff9b9ea1)) {
    func_0x000107c6142c();
  }
  else {
    func_0x000107c605b8();
    func_0x000107c6142c();
    if ((param_1 & 1) == 0) {
      return 0;
    }
  }
  func_0x000107c5ed74();
  uVar3 = *(ulong *)(param_2 + 0x10);
  func_0x000107c6142c();
  if (uVar3 < 2) {
    return 0;
  }
  func_0x000107c5ed74();
  if (*(ulong *)(param_2 + 0x10) < 2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102c8e0c0);
    (*pcVar2)();
  }
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  func_0x000107c61434(*(undefined8 *)(param_2 + 0x38));
  func_0x000107c6142c(param_2);
  return uVar1;
}



/* Entry: 102c8e0c0; end: 102c8e0c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c8e0c0(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + _DAT_112f08158) = 1;
    func_0x000107c61170();
  }
  return;
}



/* Entry: 102c8e0c8; end: 102c8e107;  */

undefined8 FUN_102c8e0c8(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 102c8e108; end: 102c8e10f;  */

void FUN_102c8e108(long param_1,long param_2)

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



/* Entry: 102c8e110; end: 102c8e14b;  */

undefined8 FUN_102c8e110(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_102c8e14c(param_1);
  return unaff_x20;
}



/* Entry: 102c8e14c; end: 102c8e30f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c8e14c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  long lStack_90;
  long lStack_88;
  
  plVar8 = &lStack_90;
  uVar10 = *(undefined8 *)(param_5 + _DAT_113068e88);
  uVar9 = *(undefined8 *)(param_5 + _DAT_113068ea0);
  lVar1 = param_5 + _DAT_113068e98;
  uVar3 = *(undefined8 *)(lVar1 + 0x18);
  lVar6 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar3);
  pcVar11 = *(code **)(lVar6 + 0x30);
  func_0x000107c615f0(uVar9);
  func_0x000107c615f0(uVar10);
  (*pcVar11)(uVar3,lVar6);
  puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c4c194();
  func_0x000107c61180();
  func_0x000107c3ec60();
  func_0x000107c61170(puVar4);
  lVar5 = 0;
  FUN_102c8e980();
  lVar6 = lVar5;
  func_0x000107c610f8();
  lVar1 = _DAT_112f08248;
  uVar7 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  *(undefined8 *)(lVar6 + lVar1) = uVar7;
  *(undefined8 *)(lVar6 + _DAT_112f08230) = uVar10;
  *(undefined8 *)(lVar6 + _DAT_112f08238) = uVar9;
  *(undefined8 *)(lVar6 + _DAT_112f08240) = uVar3;
  puVar2 = (undefined8 *)(lVar6 + _DAT_112f08250);
  *puVar2 = param_1;
  puVar2[1] = param_2;
  puVar2[2] = param_3;
  puVar2[3] = param_4;
  puVar4 = PTR_s_init_1125d9248;
  lStack_90 = lVar6;
  lStack_88 = lVar5;
  func_0x000107c615f0(uVar10);
  func_0x000107c615f0(uVar9);
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(&lStack_90,puVar4);
  func_0x000107c615e8(uVar10);
  func_0x000107c615e8(uVar9);
  func_0x000107c61574(uVar3);
  func_0x000107c61170(param_5);
  *(long **)(unaff_x20 + 0x10) = plVar8;
  return;
}



/* Entry: 102c8e310; end: 102c8e42b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c8e310(void)

{
  double *pdVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  undefined *puVar5;
  long lVar6;
  long unaff_x20;
  long *plVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  pdVar1 = (double *)(lVar6 + _DAT_112f08250);
  dVar9 = *pdVar1;
  dVar10 = pdVar1[1];
  dVar11 = pdVar1[2];
  dVar12 = pdVar1[3];
  dVar8 = dVar9;
  func_0x000107c609cc(dVar9,dVar10,dVar11,dVar12);
  if (((dVar8 != 0.0) && (func_0x000107c609b0(dVar9,dVar10,dVar11,dVar12), dVar9 != 0.0)) &&
     (plVar7 = *(long **)(lVar6 + _DAT_112f08240), plVar7 != (long *)0x0)) {
    puVar2 = &UNK_1105bb268;
    func_0x000107c613fc(&UNK_1105bb268,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,lVar6);
    pcVar3 = FUN_102c8e4d4;
    puVar5 = puVar2;
    (**(code **)(*plVar7 + 0x60))(FUN_102c8e4d4);
    func_0x000107c61574(puVar2);
    pcVar4 = pcVar3;
    func_0x000107c614f0(pcVar3);
    (**(code **)(puVar5 + 0x18))(*(undefined8 *)(lVar6 + _DAT_112f08248),pcVar4,puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar3);
    return;
  }
  return;
}



/* Entry: 102c8e42c; end: 102c8e45b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102c8e42c(void)

{
  func_0x000100c82230();
  return 0;
}



/* Entry: 102c8e45c; end: 102c8e47f;  */

void FUN_102c8e45c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c8e480; end: 102c8e4d3;  */

void FUN_102c8e480(void)

{
  FUN_102c8e310();
  return;
}



/* Entry: 102c8e4d4; end: 102c8e4db;  */

void FUN_102c8e4d4(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_102c8e558(uVar2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102c8e4dc; end: 102c8e4fb;  */

void FUN_102c8e4dc(void)

{
  func_0x000107c61168(&PTR_PTR_112f081d0);
  return;
}



/* Entry: 102c8e4fc; end: 102c8e557;  */

void FUN_102c8e4fc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_102c8e558(uVar1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102c8e558; end: 102c8e8c7;  */

/* WARNING: Possible PIC construction at 0x000102c8e61c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c8e638: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c8e884: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c8e894: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c8e888) */
/* WARNING: Removing unreachable block (ram,0x000102c8e63c) */
/* WARNING: Removing unreachable block (ram,0x000102c8e640) */
/* WARNING: Removing unreachable block (ram,0x000102c8e6e0) */
/* WARNING: Removing unreachable block (ram,0x000102c8e6c4) */
/* WARNING: Removing unreachable block (ram,0x000102c8e6e4) */
/* WARNING: Removing unreachable block (ram,0x000102c8e71c) */
/* WARNING: Removing unreachable block (ram,0x000102c8e700) */
/* WARNING: Removing unreachable block (ram,0x000102c8e728) */
/* WARNING: Removing unreachable block (ram,0x000102c8e72c) */
/* WARNING: Removing unreachable block (ram,0x000102c8e718) */
/* WARNING: Removing unreachable block (ram,0x000102c8e7cc) */
/* WARNING: Removing unreachable block (ram,0x000102c8e890) */
/* WARNING: Removing unreachable block (ram,0x000102c8e800) */
/* WARNING: Removing unreachable block (ram,0x000102c8e620) */
/* WARNING: Removing unreachable block (ram,0x000102c8e624) */
/* WARNING: Removing unreachable block (ram,0x000102c8e898) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c8e558(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  uVar2 = *(ulong *)(param_1 + _DAT_11308c590);
  func_0x000107c30b9c();
  if ((uVar2 & 0xfffffffe) == 0) {
    lVar1 = *(long *)(param_1 + _DAT_11308c588);
    func_0x000107c30ae8();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c3d368(*(undefined8 *)(unaff_x20 + _DAT_112f08230),param_2,lVar1);
      func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 102c8e8c8; end: 102c8e927; -[_TtC24AdPlaybackImplementation18AdStickersWorkflow init] */

void FUN_102c8e8c8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdPlaybackImplementation.AdStickersWorkflow",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c8e8f4);
  (*pcVar1)();
}



/* Entry: 102c8e928; end: 102c8e97f; -[_TtC24AdPlaybackImplementation18AdStickersWorkflow .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102c8e964: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c8e968) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c8e928(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f08230));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f08238));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f08240));
  return;
}



/* Entry: 102c8e980; end: 102c8e99f;  */

void FUN_102c8e980(void)

{
  func_0x000107c61168(&PTR_PTR_11289b4c0);
  return;
}



/* Entry: 102c8e9a0; end: 102c8ea3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_102c8e9a0(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_113090748);
    if (lVar1 != 0) {
      func_0x000107c4223c(lVar1);
    }
    if ((*(long *)(param_1 + _DAT_113090750) != 0) && (func_0x000107c4223c(), lVar1 != 0)) {
      return *(undefined1 *)(param_1 + _DAT_113090740);
    }
  }
  return 0;
}



/* Entry: 102c8ea3c; end: 102c8eecb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c8ea3c(long param_1,long param_2,long param_3,long param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  func_0x000107c613fc();
  lVar6 = param_1 + _DAT_113068e98;
  uVar2 = *(undefined8 *)(lVar6 + 0x18);
  lVar7 = *(long *)(lVar6 + 0x20);
  func_0x0001000a8868(lVar6,uVar2);
  (**(code **)(lVar7 + 0x18))(uVar2,lVar7);
  uVar3 = *(undefined8 *)(lVar6 + 0x18);
  lVar7 = *(long *)(lVar6 + 0x20);
  func_0x0001000a8868(lVar6,uVar3);
  (**(code **)(lVar7 + 0x10))(uVar3,lVar7);
  uVar4 = *(undefined8 *)(lVar6 + 0x18);
  lVar7 = *(long *)(lVar6 + 0x20);
  func_0x0001000a8868(lVar6,uVar4);
  (**(code **)(lVar7 + 8))(uVar4,lVar7);
  uVar5 = *(undefined8 *)(param_2 + _DAT_11302cc78);
  uVar11 = *(undefined8 *)(param_2 + _DAT_11302cc80);
  func_0x000107c61174();
  func_0x000107c61174();
  lVar6 = param_3;
  func_0x000107c5b484();
  func_0x000107c61180();
  if (lVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102c8ec88);
    (*pcVar1)();
  }
  lVar7 = param_3;
  func_0x000107c5b4b4();
  func_0x000107c61180();
  if (lVar7 != 0) {
    uVar14 = *(undefined8 *)(param_1 + _DAT_113068e88);
    func_0x000107c615f0(uVar14);
    pcVar8 = "init(beginIn:creatorSettingsService:snapchatterServices:adConfigProviderService:)";
    func_0x0001000c10c0();
    func_0x000107c61180();
    uVar13 = *(undefined8 *)(param_1 + _DAT_113068ea0);
    uVar12 = *(undefined8 *)(param_4 + _DAT_11304a478);
    lVar9 = 0;
    func_0x000102c90024();
    func_0x000107c613fc();
    func_0x0001005f60b4(0);
    func_0x000107c613fc();
    func_0x000107c615f0(uVar13);
    uVar10 = uVar12;
    func_0x000107c6157c();
    func_0x0001005f60d4();
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_3);
    *(undefined8 *)(lVar9 + 0x10) = uVar2;
    *(undefined8 *)(lVar9 + 0x18) = uVar3;
    *(undefined8 *)(lVar9 + 0x20) = uVar4;
    *(undefined8 *)(lVar9 + 0x28) = uVar5;
    *(undefined8 *)(lVar9 + 0x30) = uVar11;
    *(long *)(lVar9 + 0x38) = lVar6;
    *(long *)(lVar9 + 0x40) = lVar7;
    *(char **)(lVar9 + 0x48) = pcVar8;
    *(undefined8 *)(lVar9 + 0x50) = uVar14;
    *(undefined8 *)(lVar9 + 0x58) = uVar13;
    *(undefined8 *)(lVar9 + 0x60) = uVar12;
    *(undefined8 *)(lVar9 + 0x68) = uVar10;
    *(long *)(unaff_x20 + 0x10) = lVar9;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c8ec8c);
  (*pcVar1)();
}



/* Entry: 102c8eecc; end: 102c8eeeb;  */

void FUN_102c8eecc(void)

{
  FUN_102c8ef5c();
  return;
}



/* Entry: 102c8eeec; end: 102c8ef0f;  */

void FUN_102c8eeec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c8ef10; end: 102c8ef33;  */

void FUN_102c8ef10(void)

{
  FUN_102c8ef5c();
  return;
}



/* Entry: 102c8ef34; end: 102c8ef3b;  */

undefined8 FUN_102c8ef34(void)

{
  return 0;
}



/* Entry: 102c8ef3c; end: 102c8ef5b;  */

void FUN_102c8ef3c(void)

{
  func_0x000107c61168(&PTR_PTR_112f082c0);
  return;
}



/* Entry: 102c8ef5c; end: 102c8f0f3;  */

/* WARNING: Possible PIC construction at 0x000102c8efe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c8f05c: Changing call to branch */

void FUN_102c8ef5c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  long *plVar5;
  
  plVar5 = *(long **)(unaff_x20 + 0x10);
  if (plVar5 == (long *)0x0) {
    plVar5 = *(long **)(unaff_x20 + 0x18);
    if (plVar5 == (long *)0x0) {
      plVar5 = *(long **)(unaff_x20 + 0x20);
      if (plVar5 == (long *)0x0) {
        return;
      }
      puVar1 = &UNK_1105bb2d0;
      func_0x000107c613fc(&UNK_1105bb2d0,0x18,7);
      func_0x000107c61644(puVar1 + 0x10);
      uVar2 = 0x102c90044;
      puVar4 = puVar1;
      (**(code **)(*plVar5 + 0x60))(0x102c90044);
      func_0x000107c61574(puVar1);
      uVar3 = uVar2;
      func_0x000107c614f0(uVar2);
      (**(code **)(puVar4 + 0x18))(*(undefined8 *)(unaff_x20 + 0x68),uVar3,puVar4);
    }
    else {
      puVar1 = &UNK_1105bb2d0;
      func_0x000107c613fc(&UNK_1105bb2d0,0x18,7);
      func_0x000107c61644(puVar1 + 0x10);
      uVar2 = 0x102c90064;
      puVar4 = puVar1;
      (**(code **)(*plVar5 + 0x60))(0x102c90064);
      func_0x000107c61574(puVar1);
      uVar3 = uVar2;
      func_0x000107c614f0(uVar2);
      (**(code **)(puVar4 + 0x18))(*(undefined8 *)(unaff_x20 + 0x68),uVar3,puVar4);
    }
  }
  else {
    puVar1 = &UNK_1105bb2d0;
    func_0x000107c613fc(&UNK_1105bb2d0,0x18,7);
    func_0x000107c61644(puVar1 + 0x10);
    uVar2 = 0x102c90084;
    puVar4 = puVar1;
    (**(code **)(*plVar5 + 0x60))(0x102c90084);
    func_0x000107c61574(puVar1);
    uVar3 = uVar2;
    func_0x000107c614f0(uVar2);
    (**(code **)(puVar4 + 0x18))(*(undefined8 *)(unaff_x20 + 0x68),uVar3,puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar2);
  return;
}



/* Entry: 102c8f0f4; end: 102c8f78b;  */

/* WARNING: Possible PIC construction at 0x000102c8f160: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c8f194: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c8f1c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c8f244: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c8f2bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c8f368: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c8f504: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c8f51c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c8f52c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c8f53c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c8f554: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c8f730: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c8f6c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c8f6d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c8f6ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c8f260: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c8f6f0) */
/* WARNING: Removing unreachable block (ram,0x000102c8f6d8) */
/* WARNING: Removing unreachable block (ram,0x000102c8f6c8) */
/* WARNING: Removing unreachable block (ram,0x000102c8f734) */
/* WARNING: Removing unreachable block (ram,0x000102c8f558) */
/* WARNING: Removing unreachable block (ram,0x000102c8f6f4) */
/* WARNING: Removing unreachable block (ram,0x000102c8f540) */
/* WARNING: Removing unreachable block (ram,0x000102c8f530) */
/* WARNING: Removing unreachable block (ram,0x000102c8f520) */
/* WARNING: Removing unreachable block (ram,0x000102c8f508) */
/* WARNING: Removing unreachable block (ram,0x000102c8f2c0) */
/* WARNING: Removing unreachable block (ram,0x000102c8f2c4) */
/* WARNING: Removing unreachable block (ram,0x000102c8f248) */
/* WARNING: Removing unreachable block (ram,0x000102c8f1c8) */
/* WARNING: Removing unreachable block (ram,0x000102c8f1dc) */
/* WARNING: Removing unreachable block (ram,0x000102c8f1f4) */
/* WARNING: Removing unreachable block (ram,0x000102c8f208) */
/* WARNING: Removing unreachable block (ram,0x000102c8f26c) */
/* WARNING: Removing unreachable block (ram,0x000102c8f2e4) */
/* WARNING: Removing unreachable block (ram,0x000102c8f2e8) */
/* WARNING: Removing unreachable block (ram,0x000102c8f36c) */
/* WARNING: Removing unreachable block (ram,0x000102c8f560) */
/* WARNING: Removing unreachable block (ram,0x000102c8f768) */
/* WARNING: Removing unreachable block (ram,0x000102c8f564) */
/* WARNING: Removing unreachable block (ram,0x000102c8f56c) */
/* WARNING: Removing unreachable block (ram,0x000102c8f580) */
/* WARNING: Removing unreachable block (ram,0x000102c8f764) */
/* WARNING: Removing unreachable block (ram,0x000102c8f5f4) */
/* WARNING: Removing unreachable block (ram,0x000102c8f378) */
/* WARNING: Removing unreachable block (ram,0x000102c8f380) */
/* WARNING: Removing unreachable block (ram,0x000102c8f71c) */
/* WARNING: Removing unreachable block (ram,0x000102c8f72c) */
/* WARNING: Removing unreachable block (ram,0x000102c8f394) */
/* WARNING: Removing unreachable block (ram,0x000102c8f33c) */
/* WARNING: Removing unreachable block (ram,0x000102c8f284) */
/* WARNING: Removing unreachable block (ram,0x000102c8f240) */
/* WARNING: Removing unreachable block (ram,0x000102c8f198) */
/* WARNING: Removing unreachable block (ram,0x000102c8f25c) */
/* WARNING: Removing unreachable block (ram,0x000102c8f1a0) */
/* WARNING: Removing unreachable block (ram,0x000102c8f164) */
/* WARNING: Removing unreachable block (ram,0x000102c8f168) */
/* WARNING: Removing unreachable block (ram,0x000102c8f73c) */
/* WARNING: Removing unreachable block (ram,0x000102c8f170) */
/* WARNING: Removing unreachable block (ram,0x000102c8f264) */
/* WARNING: Removing unreachable block (ram,0x000102c8f740) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c8f0f4(long param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(param_1 + _DAT_11308c5f8);
  func_0x000107c30ae8();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c3d368(*(undefined8 *)(unaff_x20 + 0x50),param_2,lVar1);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 102c8f78c; end: 102c8fc17;  */

/* WARNING: Possible PIC construction at 0x000102c8f7f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c8f828: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c8f858: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c8f910: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c8f980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c8fbe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c8fb7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c8fb8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c8fba4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c8f9b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c8f9a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c8f9bc) */
/* WARNING: Removing unreachable block (ram,0x000102c8fba8) */
/* WARNING: Removing unreachable block (ram,0x000102c8fb90) */
/* WARNING: Removing unreachable block (ram,0x000102c8fb80) */
/* WARNING: Removing unreachable block (ram,0x000102c8fbe8) */
/* WARNING: Removing unreachable block (ram,0x000102c8f984) */
/* WARNING: Removing unreachable block (ram,0x000102c8f988) */
/* WARNING: Removing unreachable block (ram,0x000102c8f914) */
/* WARNING: Removing unreachable block (ram,0x000102c8f918) */
/* WARNING: Removing unreachable block (ram,0x000102c8f9d0) */
/* WARNING: Removing unreachable block (ram,0x000102c8f9d4) */
/* WARNING: Removing unreachable block (ram,0x000102c8f9f4) */
/* WARNING: Removing unreachable block (ram,0x000102c8fa1c) */
/* WARNING: Removing unreachable block (ram,0x000102c8fa28) */
/* WARNING: Removing unreachable block (ram,0x000102c8fbd0) */
/* WARNING: Removing unreachable block (ram,0x000102c8fa3c) */
/* WARNING: Removing unreachable block (ram,0x000102c8fc14) */
/* WARNING: Removing unreachable block (ram,0x000102c8faac) */
/* WARNING: Removing unreachable block (ram,0x000102c8f9ec) */
/* WARNING: Removing unreachable block (ram,0x000102c8fbdc) */
/* WARNING: Removing unreachable block (ram,0x000102c8f948) */
/* WARNING: Removing unreachable block (ram,0x000102c8f85c) */
/* WARNING: Removing unreachable block (ram,0x000102c8f870) */
/* WARNING: Removing unreachable block (ram,0x000102c8f888) */
/* WARNING: Removing unreachable block (ram,0x000102c8fbe0) */
/* WARNING: Removing unreachable block (ram,0x000102c8f89c) */
/* WARNING: Removing unreachable block (ram,0x000102c8f8d4) */
/* WARNING: Removing unreachable block (ram,0x000102c8f9b4) */
/* WARNING: Removing unreachable block (ram,0x000102c8f8e8) */
/* WARNING: Removing unreachable block (ram,0x000102c8f82c) */
/* WARNING: Removing unreachable block (ram,0x000102c8f9a4) */
/* WARNING: Removing unreachable block (ram,0x000102c8f834) */
/* WARNING: Removing unreachable block (ram,0x000102c8f7f8) */
/* WARNING: Removing unreachable block (ram,0x000102c8f7fc) */
/* WARNING: Removing unreachable block (ram,0x000102c8fbf0) */
/* WARNING: Removing unreachable block (ram,0x000102c8f804) */
/* WARNING: Removing unreachable block (ram,0x000102c8f9ac) */
/* WARNING: Removing unreachable block (ram,0x000102c8fbf4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c8f78c(long param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(param_1 + _DAT_11308bea0);
  func_0x000107c30ae8();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c3d368(*(undefined8 *)(unaff_x20 + 0x50),param_2,lVar1);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 102c8fc18; end: 102c8fc83;  */

void FUN_102c8fc18(undefined8 *param_1,long param_2,code *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    (*param_3)(uVar1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 102c8fc84; end: 102c8ff8f;  */

/* WARNING: Possible PIC construction at 0x000102c8fce8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c8fd1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c8fd4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c8fdcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c8ff6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c8fe58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c8fee4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c8ff5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c8fdd0) */
/* WARNING: Removing unreachable block (ram,0x000102c8fd50) */
/* WARNING: Removing unreachable block (ram,0x000102c8fd64) */
/* WARNING: Removing unreachable block (ram,0x000102c8fd7c) */
/* WARNING: Removing unreachable block (ram,0x000102c8fd90) */
/* WARNING: Removing unreachable block (ram,0x000102c8fe04) */
/* WARNING: Removing unreachable block (ram,0x000102c8fe7c) */
/* WARNING: Removing unreachable block (ram,0x000102c8fe18) */
/* WARNING: Removing unreachable block (ram,0x000102c8fdc8) */
/* WARNING: Removing unreachable block (ram,0x000102c8fd20) */
/* WARNING: Removing unreachable block (ram,0x000102c8fdf8) */
/* WARNING: Removing unreachable block (ram,0x000102c8fd28) */
/* WARNING: Removing unreachable block (ram,0x000102c8fcec) */
/* WARNING: Removing unreachable block (ram,0x000102c8fcf0) */
/* WARNING: Removing unreachable block (ram,0x000102c8ff70) */
/* WARNING: Removing unreachable block (ram,0x000102c8fcf8) */
/* WARNING: Removing unreachable block (ram,0x000102c8fe5c) */
/* WARNING: Removing unreachable block (ram,0x000102c8fe60) */
/* WARNING: Removing unreachable block (ram,0x000102c8fe88) */
/* WARNING: Removing unreachable block (ram,0x000102c8fea8) */
/* WARNING: Removing unreachable block (ram,0x000102c8fee8) */
/* WARNING: Removing unreachable block (ram,0x000102c8fef8) */
/* WARNING: Removing unreachable block (ram,0x000102c8ff08) */
/* WARNING: Removing unreachable block (ram,0x000102c8ff60) */
/* WARNING: Removing unreachable block (ram,0x000102c8ff68) */
/* WARNING: Removing unreachable block (ram,0x000102c8ff10) */
/* WARNING: Removing unreachable block (ram,0x000102c8feb0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c8fc84(long param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(param_1 + _DAT_11308c0c0);
  func_0x000107c30ae8();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c3d368(*(undefined8 *)(unaff_x20 + 0x50),param_2,lVar1);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 102c8ff90; end: 102c900a3;  */

void FUN_102c8ff90(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 102c900a4; end: 102c901bf;  */

void FUN_102c900a4(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auStack_58 [24];
  
  if (param_1 != 0) {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (param_1 >> 0x3e == 0) {
      uVar3 = *(ulong *)(uVar4 + 0x10);
    }
    else {
      uVar3 = param_1;
      if (-1 < (long)param_1) {
        uVar3 = uVar4;
      }
      func_0x000107c60480();
    }
    if (uVar3 != 0) {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(long *)(uVar4 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102c901c0);
          (*pcVar1)();
        }
        uVar2 = *(undefined8 *)(param_1 + 0x20);
        func_0x000107c61174(uVar2);
      }
      else {
        uVar2 = 0;
        func_0x00010103193c(0,param_1);
      }
      func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
      param_3 = param_3 + 0x10;
      func_0x000107c61648();
      if (param_3 != 0) {
        FUN_102c901c0(uVar2,param_4,param_5,param_6);
        func_0x000107c61574(param_3);
      }
      func_0x000107c61170(uVar2);
    }
  }
  return;
}



/* Entry: 102c901c0; end: 102c9035f;  */

/* WARNING: Possible PIC construction at 0x000102c90308: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c90320: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c9030c) */
/* WARNING: Removing unreachable block (ram,0x000102c90324) */

void FUN_102c901c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = PTR_PTR_1126ae5c0;
  func_0x000107c61168(PTR_PTR_1126ae5c0);
  func_0x000107c3d954();
  func_0x000107c61180();
  lVar2 = *(long *)(unaff_x20 + 0x40);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c4f7c0(*(undefined8 *)(unaff_x20 + 0x48));
    func_0x000107c61180();
    puVar3 = &UNK_1105bb2d0;
    func_0x000107c613fc(&UNK_1105bb2d0,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    puVar4 = &UNK_1105bb3c0;
    func_0x000107c613fc(&UNK_1105bb3c0,0x30,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(undefined8 *)(puVar4 + 0x18) = param_2;
    *(undefined8 *)(puVar4 + 0x20) = param_3;
    *(undefined8 *)(puVar4 + 0x28) = param_4;
    uStack_60 = 0x102c904fc;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1013b7310;
    puStack_68 = &UNK_1105bb3d8;
    puStack_58 = puVar4;
    func_0x000107c60bc4(&puStack_80);
    puVar3 = puStack_58;
    func_0x000107c61434(param_3);
    func_0x000107c61574(puVar3);
    func_0x000107c3d6c4(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 102c90360; end: 102c904c3;  */

void FUN_102c90360(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined1 auStack_58 [24];
  
  if ((param_1 & 1) != 0) {
    func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61648();
    if (param_3 != 0) {
      lVar1 = *(long *)(param_3 + 0x58);
      func_0x000107c615f0(lVar1);
      func_0x000107c61574(param_3);
      if (lVar1 != 0) {
        func_0x000107c5fadc(param_4,param_5);
        func_0x000107c4db38(lVar1);
        func_0x000107c615e8(lVar1);
        func_0x000107c61170(param_4);
      }
    }
  }
  return;
}



/* Entry: 102c904c4; end: 102c90507;  */

void FUN_102c904c4(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    lVar4 = *(long *)(lVar2 + 0x58);
    func_0x000107c615f0(lVar4);
    func_0x000107c61574(lVar2);
    if (lVar4 != 0) {
      func_0x000107c5fadc(uVar3,uVar1);
      func_0x000107c4db38(lVar4);
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(uVar3);
    }
  }
  return;
}



/* Entry: 102c90508; end: 102c90533;  */

void FUN_102c90508(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102c90534; end: 102c90557;  */

void FUN_102c90534(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  if (param_1 != 0) {
    uVar8 = param_1 & 0xffffffffffffff8;
    if (param_1 >> 0x3e == 0) {
      uVar7 = *(ulong *)(uVar8 + 0x10);
    }
    else {
      uVar7 = param_1;
      if (-1 < (long)param_1) {
        uVar7 = uVar8;
      }
      func_0x000107c60480();
    }
    if (uVar7 != 0) {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(long *)(uVar8 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102c901c0);
          (*pcVar4)();
        }
        uVar5 = *(undefined8 *)(param_1 + 0x20);
        func_0x000107c61174(uVar5);
      }
      else {
        uVar5 = 0;
        func_0x00010103193c(0,param_1);
      }
      func_0x000107c61428(lVar6 + 0x10,auStack_58,0,0);
      lVar6 = lVar6 + 0x10;
      func_0x000107c61648();
      if (lVar6 != 0) {
        FUN_102c901c0(uVar5,uVar2,uVar1,uVar3);
        func_0x000107c61574(lVar6);
      }
      func_0x000107c61170(uVar5);
    }
  }
  return;
}



/* Entry: 102c90558; end: 102c9059b;  */

void FUN_102c90558(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c9059c; end: 102c9077b;  */

void FUN_102c9059c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lStack_58;
  
  puVar2 = PTR_PTR_1126b8d98;
  func_0x000107c61168();
  func_0x000107c3d280();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102c90778);
    (*pcVar1)();
  }
  ppuVar3 = &PTR____CFConstantStringClassReference_110f24df8;
  func_0x000107c61174(&PTR____CFConstantStringClassReference_110f24df8);
  uVar4 = 0x65736c6166;
  uVar7 = 0xe500000000000000;
  func_0x000107c5fadc(0x65736c6166,0xe500000000000000);
  puVar5 = puVar2;
  func_0x000107c5e508(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(ppuVar3);
  func_0x000107c61170(uVar4);
  ppuVar3 = &PTR____CFConstantStringClassReference_110ddd2d8;
  func_0x000107c61174(&PTR____CFConstantStringClassReference_110ddd2d8);
  func_0x000104840e10(param_1);
  uVar4 = uVar7;
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar7);
  puVar2 = puVar5;
  func_0x000107c5e508(puVar5);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(ppuVar3);
  func_0x000107c61170(param_1);
  ppuVar3 = &PTR____CFConstantStringClassReference_110ddfd98;
  func_0x000107c61174(&PTR____CFConstantStringClassReference_110ddfd98);
  func_0x000103bfd6b4(param_2);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar4);
  puVar5 = puVar2;
  func_0x000107c5e508(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(ppuVar3);
  func_0x000107c61170(param_2);
  func_0x0001000d224c(&lStack_58);
  if (lStack_58 != 0) {
    lVar6 = lStack_58;
    func_0x000107c3d2d8();
    func_0x000107c61180();
    func_0x000107c61170(lStack_58);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102c9077c);
      (*pcVar1)();
    }
    func_0x000107c45314(lVar6);
    func_0x000107c61170(lVar6);
  }
  func_0x000107c61170(puVar5);
  return;
}



/* Entry: 102c9077c; end: 102c908ab;  */

void FUN_102c9077c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  
  lVar2 = 0x112d39140;
  func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  puVar1 = PTR___sSSN_11034da80;
  uStack_a8 = 0x64695f65676170;
  uStack_a0 = 0xe700000000000000;
  func_0x000107c602d4(lVar2 + 0x20,&uStack_a8,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  *(undefined **)(lVar2 + 0x60) = puVar1;
  *(undefined8 *)(lVar2 + 0x48) = param_1;
  *(undefined8 *)(lVar2 + 0x50) = param_2;
  func_0x000107c61434(param_2);
  lVar3 = lVar2;
  func_0x000100dfa3f0(lVar2);
  func_0x000107c61588(lVar2);
  func_0x000100e1766c(lVar2 + 0x20);
  lVar2 = lVar3;
  func_0x000107c5f9dc(lVar3,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(lVar3);
  uVar4 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f105510);
  func_0x000107c2c4c0(0x10000,lVar2,uVar4);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 102c908ac; end: 102c908d3;  */

void FUN_102c908ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  
  lVar2 = 0x112d39140;
  func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  puVar1 = PTR___sSSN_11034da80;
  uStack_b8 = 0x64695f65676170;
  uStack_b0 = 0xe700000000000000;
  func_0x000107c602d4(lVar2 + 0x20,&uStack_b8,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  *(undefined **)(lVar2 + 0x60) = puVar1;
  *(undefined8 *)(lVar2 + 0x48) = param_1;
  *(undefined8 *)(lVar2 + 0x50) = param_2;
  func_0x000107c61434(param_2);
  lVar3 = lVar2;
  func_0x000100dfa3f0(lVar2);
  func_0x000107c61588(lVar2);
  func_0x000100e1766c(lVar2 + 0x20);
  lVar2 = lVar3;
  func_0x000107c5f9dc(lVar3,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(lVar3);
  uVar4 = 0x45504957535f4441;
  func_0x000107c5fadc(0x45504957535f4441,0xef4445535541505f);
  func_0x000107c2c4c0(0x10000,lVar2,uVar4);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 102c908d4; end: 102c90a0b;  */

void FUN_102c908d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  
  lVar2 = 0x112d39140;
  func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  puVar1 = PTR___sSSN_11034da80;
  uStack_b8 = 0x64695f65676170;
  uStack_b0 = 0xe700000000000000;
  func_0x000107c602d4(lVar2 + 0x20,&uStack_b8,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  *(undefined **)(lVar2 + 0x60) = puVar1;
  *(undefined8 *)(lVar2 + 0x48) = param_1;
  *(undefined8 *)(lVar2 + 0x50) = param_2;
  func_0x000107c61434(param_2);
  lVar3 = lVar2;
  func_0x000100dfa3f0(lVar2);
  func_0x000107c61588(lVar2);
  func_0x000100e1766c(lVar2 + 0x20);
  lVar2 = lVar3;
  func_0x000107c5f9dc(lVar3,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(lVar3);
  uVar4 = 0x45504957535f4441;
  func_0x000107c5fadc(0x45504957535f4441,param_3);
  func_0x000107c2c4c0(0x10000,lVar2,uVar4);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 102c90a0c; end: 102c90b3b;  */

void FUN_102c90a0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  
  lVar2 = 0x112d39140;
  func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  puVar1 = PTR___sSSN_11034da80;
  uStack_a8 = 0x64695f65676170;
  uStack_a0 = 0xe700000000000000;
  func_0x000107c602d4(lVar2 + 0x20,&uStack_a8,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  *(undefined **)(lVar2 + 0x60) = puVar1;
  *(undefined8 *)(lVar2 + 0x48) = param_1;
  *(undefined8 *)(lVar2 + 0x50) = param_2;
  func_0x000107c61434(param_2);
  lVar3 = lVar2;
  func_0x000100dfa3f0(lVar2);
  func_0x000107c61588(lVar2);
  func_0x000100e1766c(lVar2 + 0x20);
  lVar2 = lVar3;
  func_0x000107c5f9dc(lVar3,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(lVar3);
  uVar4 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f105530);
  func_0x000107c2c4c0(0x10000,lVar2,uVar4);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 102c90b3c; end: 102c90b8b;  */

void FUN_102c90b3c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(uVar1);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000100d22c30(unaff_x20 + 0x38);
  func_0x000100d22c30(unaff_x20 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c90b8c; end: 102c90bab;  */

void FUN_102c90b8c(void)

{
  func_0x000107c61168(&PTR_PTR_112f084f8);
  return;
}



/* Entry: 102c90bac; end: 102c90c0f;  */

/* WARNING: Possible PIC construction at 0x000102c90bc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c90bc4) */

void FUN_102c90bac(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*param_1);
  return;
}



/* Entry: 102c90c10; end: 102c90c73;  */

undefined8 * FUN_102c90c10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[1] = param_2[1];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 102c90c74; end: 102c90cb7;  */

undefined8 * FUN_102c90c74(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[2];
  uVar2 = param_1[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 102c90cb8; end: 102c90d4f;  */

int FUN_102c90cb8(ulong *param_1,int param_2)

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



/* Entry: 102c90d50; end: 102c90ec7;  */

void FUN_102c90d50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  pcVar1 = *(code **)(unaff_x20 + 0x28);
  puVar2 = &UNK_1105bb520;
  func_0x000107c613fc(&UNK_1105bb520,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar3 = &UNK_1105bb548;
  func_0x000107c613fc(&UNK_1105bb548,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(undefined8 *)(puVar3 + 0x20) = param_3;
  func_0x000107c6157c(puVar2);
  func_0x000107c61434(param_3);
  pcVar4 = FUN_102c9128c;
  puVar7 = puVar3;
  (*pcVar1)(param_1,FUN_102c9128c,puVar3);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  FUN_102c92ffc();
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0x21,0);
  func_0x000107c61434(param_3);
  func_0x000107c615f0(pcVar4);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61558(uVar5);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = 0x8000000000000000;
  FUN_102c64f58(pcVar4,puVar7,param_2,param_3,uVar5);
  func_0x000107c6142c(param_3);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar8;
  func_0x000107c614a8(auStack_78);
  lVar6 = unaff_x20 + 0x48;
  func_0x000107c61618();
  if (lVar6 != 0) {
    func_0x000102c925b8(param_2,param_3);
    func_0x000107c615e8(lVar6);
  }
  func_0x000107c615e8(pcVar4);
  return;
}



/* Entry: 102c90ec8; end: 102c90fc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c90ec8(long param_1,ulong param_2)

{
  ulong uVar1;
  long unaff_x20;
  long lVar2;
  long lVar3;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0x20,0);
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if (*(long *)(lVar3 + 0x10) != 0) {
    func_0x000107c61434(lVar3);
    lVar2 = param_1;
    uVar1 = param_2;
    func_0x000100029284();
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(*(long *)(lVar3 + 0x38) + lVar2 * 0x10);
      func_0x000107c615f0(lVar2);
      func_0x000107c614a8(auStack_58);
      func_0x000107c6142c(lVar3);
      if (*(char *)(lVar2 + _DAT_113804f30 + 8) != '\x01') {
        func_0x000102c93448();
        lVar3 = unaff_x20 + 0x48;
        func_0x000107c61618();
        if (lVar3 != 0) {
          func_0x000102c908c0(param_1,param_2);
          func_0x000107c615e8(lVar3);
        }
      }
      func_0x000107c615e8(lVar2);
      return;
    }
    func_0x000107c6142c(lVar3);
  }
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 102c90fc4; end: 102c9108f;  */

void FUN_102c90fc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    func_0x000107c61428(param_1 + 0x10,auStack_60,0x21,0);
    func_0x000107c61434(param_3);
    uVar1 = param_2;
    func_0x000102c64cfc(param_2,param_3);
    func_0x000107c614a8(auStack_60);
    func_0x000107c6142c(param_3);
    func_0x000107c615e8(uVar1);
    lVar2 = param_1 + 0x48;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x000102c926cc(param_2,param_3);
      func_0x000107c615e8(lVar2);
    }
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 102c91090; end: 102c9128b;  */

void FUN_102c91090(double param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar4 = unaff_x20 + 0x38;
  func_0x000107c61618();
  if (lVar4 != 0) {
    FUN_102c927d8(param_2,param_3);
    func_0x000107c615e8(lVar4);
    if (0.0 < param_1) {
      func_0x000107c61428(unaff_x20 + 0x10,auStack_78,1,0);
      uVar5 = *(ulong *)(unaff_x20 + 0x20);
      if (uVar5 != 0) {
        uVar6 = *(ulong *)(unaff_x20 + 0x18);
        if (((uVar6 == param_2) && (uVar5 == param_3)) ||
           (uVar1 = uVar6, func_0x000107c605b8(uVar6,uVar5,param_2,param_3,0), (uVar1 & 1) != 0)) {
          FUN_102c90ec8(param_2,param_3);
          goto LAB_102c91160;
        }
        func_0x000107c61428(unaff_x20 + 0x10,auStack_90,0x20,0);
        lVar4 = *(long *)(unaff_x20 + 0x10);
        lVar7 = *(long *)(lVar4 + 0x10);
        func_0x000107c61438(uVar5,2);
        if (lVar7 != 0) {
          func_0x000107c61434(lVar4);
          uVar1 = uVar6;
          uVar2 = uVar5;
          func_0x000100029284();
          if ((uVar2 & 1) != 0) {
            uVar3 = *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar1 * 0x10);
            func_0x000107c615f0(uVar3);
            func_0x000107c614a8(auStack_90);
            func_0x000107c6142c(lVar4);
            FUN_102c9359c();
            func_0x000107c61428(unaff_x20 + 0x10,auStack_90,0x21,0);
            func_0x000102c64cfc(uVar6,uVar5);
            func_0x000107c614a8(auStack_90);
            func_0x000107c615e8(uVar3);
            func_0x000107c61430(uVar5,2);
            func_0x000107c615e8(uVar6);
            goto LAB_102c91274;
          }
          func_0x000107c6142c(lVar4);
        }
        func_0x000107c614a8(auStack_90);
        func_0x000107c61430(uVar5,2);
      }
LAB_102c91274:
      FUN_102c90d50(param_1,param_2,param_3);
      goto LAB_102c91160;
    }
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,1,0);
LAB_102c91160:
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  *(ulong *)(unaff_x20 + 0x18) = param_2;
  *(ulong *)(unaff_x20 + 0x20) = param_3;
  func_0x000107c61434(param_3);
  func_0x000107c6142c(uVar3);
  return;
}



/* Entry: 102c9128c; end: 102c91297;  */

void FUN_102c9128c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    func_0x000107c61428(lVar2 + 0x10,auStack_60,0x21,0);
    func_0x000107c61434(uVar5);
    uVar3 = uVar1;
    func_0x000102c64cfc(uVar1,uVar5);
    func_0x000107c614a8(auStack_60);
    func_0x000107c6142c(uVar5);
    func_0x000107c615e8(uVar3);
    lVar4 = lVar2 + 0x48;
    func_0x000107c61618();
    if (lVar4 != 0) {
      func_0x000102c926cc(uVar1,uVar5);
      func_0x000107c615e8(lVar4);
    }
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 102c91298; end: 102c91377;  */

void FUN_102c91298(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0x20,0);
  lVar4 = *(long *)(unaff_x20 + 0x10);
  if (*(long *)(lVar4 + 0x10) != 0) {
    func_0x000107c61434(lVar4);
    lVar1 = param_1;
    uVar2 = param_2;
    func_0x000100029284();
    if ((uVar2 & 1) != 0) {
      uVar3 = *(undefined8 *)(*(long *)(lVar4 + 0x38) + lVar1 * 0x10);
      func_0x000107c615f0(uVar3);
      func_0x000107c614a8(auStack_58);
      func_0x000107c6142c(lVar4);
      FUN_102c932b0();
      lVar4 = unaff_x20 + 0x48;
      func_0x000107c61618();
      if (lVar4 != 0) {
        FUN_102c908ac(param_1,param_2);
        func_0x000107c615e8(lVar4);
      }
      func_0x000107c615e8(uVar3);
      return;
    }
    func_0x000107c6142c(lVar4);
  }
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 102c91378; end: 102c9137f;  */

undefined8 * FUN_102c91378(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  param_1[2] = uVar1;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  return param_1;
}



/* Entry: 102c91380; end: 102c9195b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102c91380(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
             long param_6)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 auStack_160 [4];
  long lStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined1 auStack_e0 [16];
  undefined8 auStack_d0 [3];
  long lStack_b8;
  undefined **ppuStack_b0;
  long alStack_a8 [3];
  long lStack_90;
  undefined **ppuStack_88;
  undefined1 auStack_80 [32];
  
  lVar4 = 0;
  uStack_120 = param_5;
  lStack_118 = param_3;
  uStack_110 = param_4;
  FUN_102c90b8c();
  func_0x000107c613fc();
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000102c7396c();
  *(undefined8 *)(lVar4 + 0x40) = 0;
  *(undefined8 *)(lVar4 + 0x18) = 0;
  *(undefined8 *)(lVar4 + 0x20) = 0;
  *(undefined **)(lVar4 + 0x10) = puVar5;
  func_0x000107c61614(lVar4 + 0x38,0);
  *(undefined8 *)(lVar4 + 0x50) = 0;
  func_0x000107c61614(lVar4 + 0x48,0);
  *(code **)(lVar4 + 0x28) = FUN_102c9195c;
  *(undefined8 *)(lVar4 + 0x30) = 0;
  func_0x0001000285a8(0x112dd07c8,&UNK_10d9bc7b0);
  func_0x000107c444a4();
  func_0x000107c61180();
  uVar14 = param_4;
  func_0x0001000bda74();
  func_0x000107c61170(param_4);
  lVar6 = 0;
  func_0x000102c9057c();
  lVar7 = lVar6;
  func_0x000107c613fc();
  *(undefined8 *)(lVar7 + 0x10) = uVar14;
  uStack_128 = *(undefined8 *)(param_1 + _DAT_113069008);
  func_0x0001000285a8(0x112f06bf8,&UNK_10db3ac80);
  uVar8 = *(undefined8 *)(param_1 + _DAT_113068fe8);
  func_0x000107c3d320();
  func_0x000107c61180();
  uVar14 = uVar8;
  func_0x0001000b637c();
  uStack_138 = uVar14;
  func_0x000107c61170(uVar8);
  lVar9 = _DAT_113069018;
  uVar16 = *(undefined8 *)(param_1 + _DAT_113068fd0);
  uVar15 = *(undefined8 *)(param_3 + _DAT_113043d30);
  uVar12 = *(undefined8 *)(param_2 + _DAT_11304a480);
  uVar14 = *(undefined8 *)(param_2 + _DAT_11304a478);
  auStack_160[2] = uVar14;
  lStack_130 = param_1;
  uStack_108 = uVar15;
  func_0x000107c61428(param_1 + _DAT_113069018,auStack_80,0,0);
  lVar9 = param_1 + lVar9;
  func_0x000107c61618();
  uVar8 = *(undefined8 *)(param_1 + _DAT_113069010);
  lStack_100 = lVar9;
  func_0x0001000285a8(0x112f08570,&UNK_10db3b3c0);
  func_0x000107c6157c(lVar4);
  func_0x000107c615f0(uVar16);
  func_0x000107c6157c(uVar15);
  func_0x000107c61174();
  func_0x000107c6157c(uVar14);
  func_0x000107c61174();
  auStack_160[3] = uVar8;
  func_0x00010040e024();
  uVar14 = uVar8;
  func_0x0001000bda74();
  auStack_160[1] = uVar14;
  func_0x000107c61170(uVar8);
  uVar14 = *(undefined8 *)(param_6 + _DAT_112f0dfa8);
  ppuStack_88 = &PTR_DAT_1105bb450;
  auStack_160[0] = uVar14;
  lStack_140 = lVar7;
  alStack_a8[0] = lVar7;
  lStack_90 = lVar6;
  func_0x000107c610f8();
  func_0x0001000c6518(alStack_a8,lVar6);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  puVar13 = (undefined8 *)((long)auStack_160 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar13);
  lVar9 = _DAT_112f08578;
  auStack_d0[0] = *puVar13;
  ppuStack_b0 = &PTR_DAT_1105bb450;
  lStack_b8 = lVar6;
  func_0x000107c61614(unaff_x20 + _DAT_112f08578,0);
  lVar6 = _DAT_112f08580;
  func_0x0001005f60b4(0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar14);
  func_0x000107c6157c();
  func_0x0001005f60d4();
  *(long *)(unaff_x20 + lVar6) = lVar7;
  puVar5 = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined **)(unaff_x20 + _DAT_112f08588) = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined **)(unaff_x20 + _DAT_112f08590) = puVar5;
  *(undefined1 *)(unaff_x20 + _DAT_112f08598) = 0;
  plVar1 = (long *)(unaff_x20 + _DAT_112f085a0);
  *plVar1 = lVar4;
  plVar1[1] = (long)&PTR_DAT_1105bb500;
  FUN_102c92b08(auStack_d0,unaff_x20 + _DAT_112f085a8);
  uVar3 = uStack_108;
  uVar2 = uStack_138;
  uVar15 = auStack_160[2];
  *(undefined8 *)(unaff_x20 + _DAT_112f085b0) = uVar16;
  *(undefined8 *)(unaff_x20 + _DAT_112f085b8) = uStack_138;
  *(undefined8 *)(unaff_x20 + _DAT_112f085c0) = uStack_108;
  *(undefined8 *)(unaff_x20 + _DAT_112f085c8) = uVar12;
  *(undefined8 *)(unaff_x20 + _DAT_112f085d0) = auStack_160[2];
  *(undefined8 *)(unaff_x20 + _DAT_112f085d8) = uStack_128;
  func_0x000107c61604(unaff_x20 + lVar9,lStack_100);
  uVar10 = auStack_160[3];
  uVar8 = auStack_160[1];
  uVar14 = auStack_160[0];
  *(undefined8 *)(unaff_x20 + _DAT_112f085e0) = auStack_160[3];
  *(undefined8 *)(unaff_x20 + _DAT_112f085e8) = auStack_160[1];
  *(undefined8 *)(unaff_x20 + _DAT_112f085f0) = auStack_160[0];
  puVar5 = PTR_s_init_1125d9248;
  func_0x000107c6157c(lVar4);
  func_0x000107c615f0(uVar16);
  func_0x000107c6157c(uVar3);
  func_0x000107c61174();
  func_0x000107c6157c(uVar15);
  func_0x000107c61174();
  func_0x000107c6157c(uVar14);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar8);
  puVar11 = auStack_e0;
  func_0x000107c61154(puVar11,puVar5);
  func_0x000107c61574(lVar4);
  func_0x000107c615e8(uVar16);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(uStack_108);
  func_0x000107c61170(uVar12);
  func_0x000107c61574(uVar15);
  func_0x000107c61170(uVar10);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(uVar14);
  func_0x000107c615e8(lStack_100);
  func_0x000107c61574(lStack_140);
  func_0x000107c61170(lStack_130);
  func_0x000107c61170(lStack_118);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uStack_110);
  func_0x000107c61170(uStack_120);
  func_0x0001000834e4(auStack_d0);
  func_0x0001000834e4(alStack_a8);
  *(undefined ***)(lVar4 + 0x50) = &PTR_DAT_1105bb588;
  func_0x000107c61604(lVar4 + 0x48,puVar11);
  *(undefined ***)(lVar4 + 0x40) = &PTR_DAT_1105bb5b0;
  func_0x000107c61604(lVar4 + 0x38,puVar11);
  func_0x000107c61574(lVar4);
  return puVar11;
}



/* Entry: 102c9195c; end: 102c91aa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102c9195c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long extraout_x8;
  long lVar5;
  undefined1 auVar6 [16];
  
  lVar2 = 0;
  func_0x000107c5eec8();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  func_0x000107c5eec4(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar3 = PTR_PTR_1126b46f0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar4 = 0;
  FUN_102c936bc();
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + _DAT_112f08648) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113804f30);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  (**(code **)(lVar5 + 0x20))
            (lVar4 + _DAT_112f08620,
             &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  *(undefined8 *)(lVar4 + _DAT_112f08628) = param_1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112f08630);
  *puVar1 = 0x102c92ff8;
  puVar1[1] = 0;
  *(undefined **)(lVar4 + _DAT_112f08638) = puVar3;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112f08640);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  func_0x000107c6157c(param_3);
  auVar6._8_8_ = &PTR_DAT_1105bb688;
  auVar6._0_8_ = lVar4;
  return auVar6;
}



/* Entry: 102c91aa8; end: 102c91cb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c91aa8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  code *pcVar5;
  undefined *puVar6;
  long unaff_x20;
  long *plVar7;
  undefined1 uStack_79;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  long *plStack_50;
  long lStack_48;
  
  if (*(long *)(unaff_x20 + _DAT_112f085d0) == 0) {
    uStack_79 = 0;
  }
  else {
    func_0x0001000d224c(&uStack_78);
    uVar1 = uStack_78;
    func_0x000107c614f0(uStack_78);
    uStack_68 = 0xd00000000000002c;
    uStack_60 = 0x800000010f105550;
    uStack_58 = 0;
    (**(code **)(lStack_70 + 8))
              (&uStack_79,&uStack_68,&UNK_1107383c8,&PTR_DAT_11304a4b0,uVar1,lStack_70);
    func_0x000107c615e8(uStack_78);
  }
  *(undefined1 *)(unaff_x20 + _DAT_112f08598) = uStack_79;
  plVar7 = *(long **)(unaff_x20 + _DAT_112f085b8);
  if (plVar7 != (long *)0x0) {
    puVar2 = &UNK_1105bb570;
    func_0x000107c613fc(&UNK_1105bb570,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    uVar1 = 0x102c92b54;
    puVar6 = puVar2;
    (**(code **)(*plVar7 + 0x60))(0x102c92b54);
    func_0x000107c61574(puVar2);
    uVar3 = uVar1;
    func_0x000107c614f0(uVar1);
    (**(code **)(puVar6 + 0x18))(*(undefined8 *)(unaff_x20 + _DAT_112f08580),uVar3,puVar6);
    func_0x000107c615e8(uVar1);
  }
  func_0x0001000d224c(&uStack_68);
  func_0x0001000a8868(&uStack_68,plStack_50);
  plVar7 = plStack_50;
  (**(code **)(lStack_48 + 8))(plStack_50,lStack_48);
  puVar2 = &UNK_1105bb570;
  func_0x000107c613fc(&UNK_1105bb570,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcVar4 = FUN_102c92b4c;
  puVar6 = puVar2;
  (**(code **)(*plVar7 + 0x60))(FUN_102c92b4c);
  func_0x000107c61574(plVar7);
  func_0x000107c61574(puVar2);
  func_0x0001000834e4(&uStack_68);
  pcVar5 = pcVar4;
  func_0x000107c614f0(pcVar4);
  (**(code **)(puVar6 + 0x18))(*(undefined8 *)(unaff_x20 + _DAT_112f08580),pcVar5,puVar6);
  func_0x000107c615e8(pcVar4);
  return;
}



/* Entry: 102c91cb4; end: 102c91d0f;  */

void FUN_102c91cb4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_102c91d10(uVar1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102c91d10; end: 102c9219b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c91d10(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_11308c0c8);
  uVar1 = uVar3;
  func_0x000107c30b1c();
  if ((int)uVar1 == 0) {
    uVar1 = uVar3;
    func_0x000107c30b20();
    if ((int)uVar1 == -1) {
      return;
    }
    func_0x000107c30b20(uVar3);
    lVar2 = *(long *)(param_1 + _DAT_11308c0c0);
    func_0x000107c30ae8();
    func_0x000107c61180();
    if (lVar2 == 0) {
      lVar4 = 0;
      param_2 = 0;
    }
    else {
      lVar4 = lVar2;
      func_0x000107c5faec();
      func_0x000107c61170(lVar2);
    }
    func_0x000102c929d0(uVar3,lVar4,param_2);
  }
  else {
    func_0x000107c30b1c(uVar3);
    lVar2 = *(long *)(param_1 + _DAT_11308c0c0);
    func_0x000107c30ae8();
    func_0x000107c61180();
    if (lVar2 == 0) {
      lVar4 = 0;
      param_2 = 0;
    }
    else {
      lVar4 = lVar2;
      func_0x000107c5faec();
      func_0x000107c61170(lVar2);
    }
    FUN_102c928d4(uVar3,lVar4,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102c9219c; end: 102c921cf;  */

void FUN_102c9219c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102c921d0; end: 102c92217; -[SCAdPlaybackSwipeControlWorkflow dealloc] */

void FUN_102c921d0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_dealloc_112525b20;
  uStack_30 = param_1;
  uStack_28 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_30,puVar1);
  return;
}



/* Entry: 102c92218; end: 102c9230f; -[SCAdPlaybackSwipeControlWorkflow .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102c922f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c922f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c92218(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f085b8));
  func_0x0001000834e4(param_1 + _DAT_112f085a8);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f085b0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f085c0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f085c8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f085d0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f085e0));
  FUN_102c62b64(param_1 + _DAT_112f08578);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f085e8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f085f0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f085a0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f08580));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f08588));
  return;
}



/* Entry: 102c92310; end: 102c9233b; -[SCAdPlaybackSwipeControlWorkflow init] */

void FUN_102c92310(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdPlaybackImplementation.AdPlaybackSwipeControlWorkflow",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c9233c);
  (*pcVar1)();
}



/* Entry: 102c9233c; end: 102c9248b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_102c9233c(ulong param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  byte bVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [104];
  
  puVar2 = (undefined8 *)0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  puVar2[3] = 2;
  puVar2[2] = 1;
  puVar3 = puVar2;
  func_0x0001041fadac();
  uVar6 = puVar3[1];
  puVar2[4] = *puVar3;
  puVar2[5] = uVar6;
  lVar1 = _DAT_112f08588;
  func_0x000107c61428(unaff_x20 + _DAT_112f08588,auStack_b8,0,0);
  uVar7 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x000107c61434(uVar6);
  func_0x000107c61434(uVar7);
  uVar4 = param_1;
  func_0x0001000f66f0(param_1,param_2,uVar7);
  func_0x000107c6142c(uVar7);
  lVar1 = _DAT_112f08590;
  if ((uVar4 & 1) == 0) {
    func_0x000107c61428(unaff_x20 + _DAT_112f08590,auStack_d0,0,0);
    uVar6 = *(undefined8 *)(unaff_x20 + lVar1);
    func_0x000107c61434(uVar6);
    func_0x0001000f66f0(param_1,param_2,uVar6);
    bVar5 = (byte)param_1;
    func_0x000107c6142c(uVar6);
  }
  else {
    bVar5 = 1;
  }
  puVar2[9] = PTR___sSbN_11034dd40;
  *(byte *)(puVar2 + 6) = bVar5 & 1;
  puVar3 = puVar2;
  func_0x000100214a84(puVar2);
  func_0x000107c61588(puVar2);
  func_0x000100f15a0c(puVar2 + 4);
  return puVar3;
}



/* Entry: 102c9248c; end: 102c9252f; -[SCAdPlaybackSwipeControlWorkflow pagePropertiesForItemId:] */

void FUN_102c9248c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x000107c5faec();
  func_0x000107c61174(param_1);
  FUN_102c9233c(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  if (param_3 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x000107c5f9dc(param_3,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 102c92530; end: 102c927d7; -[SCAdPlaybackSwipeControlWorkflow adTrackContext:forAdResponse:snapIndex:isExitingAd:] */

void FUN_102c92530(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102c92b5c(param_3,param_4,param_5);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102c927d8; end: 102c928d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102c927d8(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar2 = *(ulong *)(unaff_x20 + _DAT_112f085b0);
  func_0x000107c5fadc();
  func_0x000107c3d368(uVar2,param_3,param_2);
  func_0x000107c61180();
  func_0x000107c61170();
  uVar5 = 0;
  if (uVar2 != 0) {
    func_0x0001041f3970();
    func_0x000107c61170();
    if (param_2 != 0) {
      lVar3 = *(long *)(param_2 + _DAT_113068f48);
      func_0x00010403f7a4();
      if ((uVar2 & 1) == 0) {
        func_0x000107c5cc0c();
        func_0x000107c61180();
        if (lVar3 != 0) {
          lVar4 = *(long *)(lVar3 + _DAT_113090638);
          lVar1 = lVar4;
          func_0x000107c61174(lVar4);
          func_0x000107c61170(lVar3);
          if (lVar4 != 0) {
            func_0x000107c4223c(lVar1);
            func_0x000107c61170(lVar1);
            uVar5 = param_1;
          }
        }
      }
      else {
        func_0x00010403f7e4();
        uVar5 = param_1;
      }
      func_0x000107c61170(param_2);
    }
  }
  return uVar5;
}



/* Entry: 102c928d4; end: 102c92b07;  */

/* WARNING: Possible PIC construction at 0x000102c92934: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c92948: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c92938) */
/* WARNING: Removing unreachable block (ram,0x000102c9293c) */
/* WARNING: Removing unreachable block (ram,0x000102c9294c) */
/* WARNING: Removing unreachable block (ram,0x000102c92950) */
/* WARNING: Removing unreachable block (ram,0x000102c929a0) */
/* WARNING: Removing unreachable block (ram,0x000102c92958) */
/* WARNING: Removing unreachable block (ram,0x000102c92960) */
/* WARNING: Removing unreachable block (ram,0x000102c92970) */
/* WARNING: Removing unreachable block (ram,0x000102c929b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c928d4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long unaff_x20;
  undefined8 uVar1;
  
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f085b0);
    func_0x000107c5fadc(param_2,param_3);
    func_0x000107c3d368(uVar1);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 102c92b08; end: 102c92b4b;  */

long FUN_102c92b08(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 102c92b4c; end: 102c92b5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c92b4c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  uint auStack_80 [2];
  long lStack_78;
  long lStack_70;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar3 == 0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar4 = param_1;
  func_0x0001000a8868(param_1,uVar1);
  FUN_102d2468c(auStack_80,&UNK_1105c40d8,uVar1,&UNK_1105c40d8,uVar2,&PTR_DAT_1105c3398,lVar4);
  if (lStack_70 == 0) {
    if (*(char *)(lVar3 + _DAT_112f08598) == '\x01') {
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x0001000a8868(param_1,uVar1);
      FUN_102d2468c(auStack_80,&UNK_1105c37f8,uVar1,&UNK_1105c37f8,uVar2,&PTR_DAT_1105c32f0,param_1)
      ;
      if (lStack_70 != 0) {
        if ((auStack_80[0] & 1) == 0) {
          lVar5 = *(long *)(lVar3 + _DAT_112f085b0);
          func_0x000107c61434(lStack_70);
          lVar4 = lStack_78;
          func_0x000107c5fadc(lStack_78,lStack_70);
          func_0x000107c3d368();
          func_0x000107c61180();
          func_0x000107c61170();
          if (lVar5 != 0) {
            func_0x0001041f3970();
            func_0x000107c61170(lVar5);
            if (lVar4 != 0) {
              FUN_102c91090(lStack_78,lStack_70);
              func_0x000107c61430(lStack_70,2);
              func_0x000107c61170(lVar3);
              lVar3 = lVar4;
              goto LAB_102c9203c;
            }
          }
          func_0x000107c61430(lStack_70,2);
        }
        else {
          func_0x000107c6142c(lStack_70);
        }
LAB_102c9203c:
        func_0x000107c61170(lVar3);
        func_0x000107c6142c(uStack_60);
        return;
      }
    }
  }
  else {
    func_0x000107c61434(lStack_70);
    func_0x000102c92050(auStack_80[0] & 1,lStack_78,lStack_70);
    func_0x000107c6142c(uStack_60);
    func_0x000107c61430(lStack_70,2);
  }
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 102c92b5c; end: 102c92f33;  */

/* WARNING: Possible PIC construction at 0x000102c92d6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c92ea8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c92dec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c92e44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c92c88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c92e48) */
/* WARNING: Removing unreachable block (ram,0x000102c92df0) */
/* WARNING: Removing unreachable block (ram,0x000102c92eac) */
/* WARNING: Removing unreachable block (ram,0x000102c92d70) */
/* WARNING: Removing unreachable block (ram,0x000102c92c8c) */
/* WARNING: Removing unreachable block (ram,0x000102c92ca0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c92b5c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long alStack_b0 [8];
  
  func_0x000107c3d4b4();
  func_0x000107c61180();
  if (param_2 != 0) {
    func_0x000103bffd54(0);
    lVar1 = _DAT_11308f1e8;
    lVar7 = _DAT_11308f1e0;
    uVar3 = *(ulong *)(param_2 + _DAT_11308f1e0);
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112f085d8);
    func_0x000103bfe3f4(uVar3,*(undefined8 *)(param_2 + _DAT_11308f1e8),uVar10);
    uVar4 = uVar3;
    func_0x0001000d224c(alStack_b0);
    lVar2 = alStack_b0[0];
    if (alStack_b0[0] == 0) {
      func_0x000107c61170(param_2);
    }
    else {
      func_0x00010403f7a4();
      if ((uVar4 & 1) == 0) {
        lVar5 = param_2;
        func_0x000107c5cc0c();
        func_0x000107c61180();
        if (lVar5 != 0) {
          param_1 = *(undefined8 *)(lVar5 + _DAT_113090638);
          goto code_r0x000107c61174;
        }
      }
      else {
        func_0x00010403f7e4();
      }
      func_0x0001000d224c(alStack_b0);
      lVar5 = alStack_b0[0];
      lVar6 = *(long *)(unaff_x20 + _DAT_112f085c8);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar6 != 0) {
        uVar9 = *(undefined8 *)(param_2 + lVar7);
        uVar8 = *(undefined8 *)(param_2 + lVar1);
        func_0x000107c615f0();
        lVar7 = param_2;
        func_0x000103bfe42c(param_2,uVar9,uVar8,lVar5,lVar6,uVar10,lVar2,0);
        func_0x000107c615e8(lVar6);
        if ((int)lVar7 == 4) {
          func_0x000107c5cc0c();
          func_0x000107c61180();
          if (param_2 == 0) {
            func_0x000107c5b0d0(lVar5);
            func_0x000107c615e8(lVar5);
            func_0x000107c615e8(lVar6);
            func_0x000107c61170(0);
          }
          else {
            param_1 = *(undefined8 *)(param_2 + _DAT_113090618);
          }
          goto code_r0x000107c61174;
        }
        func_0x000107c615e8(lVar6);
      }
      func_0x000107c615e8(lVar5);
      if ((int)uVar3 != 2) {
        func_0x0001000d224c(alStack_b0);
        func_0x000107c5cc0c();
        func_0x000107c61180();
        if (param_2 == 0) {
          lVar7 = alStack_b0[0];
          func_0x000107c3d518();
          func_0x000107c61180();
          func_0x000107c615e8(alStack_b0[0]);
          func_0x000107c61170(0);
          param_1 = *(undefined8 *)(lVar7 + _DAT_113043fc8);
        }
        else {
          param_1 = *(undefined8 *)(param_2 + _DAT_113090618);
        }
      }
    }
  }
code_r0x000107c61174:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_1);
  return;
}



/* Entry: 102c92f34; end: 102c92f53;  */

void FUN_102c92f34(void)

{
  func_0x000107c61168(&PTR_PTR_11289b5a0);
  return;
}



/* Entry: 102c92f54; end: 102c92ffb;  */

undefined1  [16] FUN_102c92f54(void)

{
  return ZEXT816(0x1105bb5d0);
}



/* Entry: 102c92ffc; end: 102c9322f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c92ffc(void)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  long lVar8;
  long lVar9;
  code *pcVar10;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar8 = (long)&puStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar1 = (long *)(unaff_x20 + _DAT_113804f30);
  if (((char)plVar1[1] == '\x01') && (*plVar1 == 0)) {
    *plVar1 = 1;
    *(undefined1 *)(plVar1 + 1) = 1;
    (**(code **)(unaff_x20 + _DAT_112f08630))(lVar8);
    func_0x000107c61168(PTR_PTR_1126afec0);
    func_0x000107c4cec4(*(undefined8 *)(unaff_x20 + _DAT_112f08628));
    func_0x000107c5ee6c(lVar8 - extraout_x12);
    pcVar10 = *(code **)(lVar9 + 8);
    (*pcVar10)(lVar8,lVar2);
    puVar3 = &UNK_1105bb6c8;
    func_0x000107c613fc(&UNK_1105bb6c8,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    puVar4 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    func_0x000107c610f8();
    puVar5 = puVar3;
    func_0x000107c6157c(puVar3);
    func_0x000107c5ee70();
    uStack_60 = 0x102c9385c;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_100fef460;
    puStack_68 = &UNK_1105bb6e0;
    ppuVar6 = &puStack_80;
    puStack_58 = puVar3;
    func_0x000107c60bc4(ppuVar6);
    func_0x000107c46960(0);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(puVar5);
    puVar5 = puStack_58;
    func_0x000107c61574(puVar3);
    func_0x000107c61574(puVar5);
    puVar3 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
    func_0x000107c61168(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
    func_0x000107c40fe4();
    func_0x000107c61180();
    func_0x000107c3d8e0();
    func_0x000107c61170(puVar3);
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f08648);
    *(undefined **)(unaff_x20 + _DAT_112f08648) = puVar4;
    func_0x000107c61170(uVar7);
    (*pcVar10)(lVar8 - extraout_x12,lVar2);
  }
  return;
}



/* Entry: 102c93230; end: 102c932af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c93230(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_2 + _DAT_113804f30);
    *puVar1 = 3;
    *(undefined1 *)(puVar1 + 1) = 1;
    (**(code **)(param_2 + _DAT_112f08640))();
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 102c932b0; end: 102c9359b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c932b0(double param_1)

{
  double *pdVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long lVar5;
  long extraout_x12;
  long lVar6;
  long unaff_x20;
  long lVar7;
  code *pcVar8;
  double dVar9;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar4 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = (long)puVar4 - extraout_x12;
  lVar5 = *(long *)(unaff_x20 + _DAT_112f08648);
  if (((lVar5 != 0) &&
      (pdVar1 = (double *)(unaff_x20 + _DAT_113804f30), *(char *)(pdVar1 + 1) == '\x01')) &&
     (*pdVar1 == 4.94065645841247e-324)) {
    func_0x000107c61174(lVar5);
    lVar3 = lVar5;
    func_0x000107c435cc();
    func_0x000107c61180();
    func_0x000107c5ee94(lVar6);
    func_0x000107c61170(lVar3);
    func_0x000107c5ee54();
    pcVar8 = *(code **)(lVar7 + 8);
    dVar9 = param_1;
    (*pcVar8)(lVar6,lVar2);
    (**(code **)(unaff_x20 + _DAT_112f08630))(puVar4);
    func_0x000107c5ee54();
    (*pcVar8)(puVar4,lVar2);
    *pdVar1 = param_1 - dVar9;
    *(undefined1 *)(pdVar1 + 1) = 0;
    func_0x000107c5ee64(lVar6);
    func_0x000107c5ee70();
    (*pcVar8)(lVar6,lVar2);
    func_0x000107c54a1c(lVar5);
    func_0x000107c61170(puVar4);
    func_0x000107c5ba38(*(undefined8 *)(unaff_x20 + _DAT_112f08638));
    func_0x000107c61170(lVar5);
  }
  return;
}



/* Entry: 102c9359c; end: 102c936b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c9359c(void)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  plVar1 = (long *)(unaff_x20 + _DAT_113804f30);
  if (((char)plVar1[1] == '\x01') && (*plVar1 != 1)) {
    return;
  }
  *plVar1 = 2;
  *(undefined1 *)(plVar1 + 1) = 1;
  lVar2 = _DAT_112f08648;
  uVar3 = 0;
  if (*(long *)(unaff_x20 + _DAT_112f08648) != 0) {
    func_0x000107c498f8();
    uVar3 = *(undefined8 *)(unaff_x20 + lVar2);
  }
  *(undefined8 *)(unaff_x20 + lVar2) = 0;
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c137ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + _DAT_112f08638),PTR_s_reset_11262ba18);
  return;
}



/* Entry: 102c936b4; end: 102c936bb;  */

void FUN_102c936b4(void)

{
  if (lRam0000000112f08678 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e725df4);
  return;
}



/* Entry: 102c936bc; end: 102c936f3;  */

void FUN_102c936bc(undefined8 param_1)

{
  if (lRam0000000112f08678 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e725df4);
  return;
}



/* Entry: 102c936f4; end: 102c9379f;  */

void FUN_102c936f4(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x000107c5eec8();
  if (param_2 < 0x40) {
    lStack_58 = *(long *)(lVar1 + -8) + 0x40;
    puStack_50 = PTR___sBi64_WV_11034d670 + 0x40;
    puStack_48 = PTR___syycWV_11034f1c0 + 0x40;
    puStack_40 = PTR___sBOWV_11034d658 + 0x40;
    puStack_30 = &UNK_10db3b458;
    puStack_28 = &UNK_10db3b470;
    puStack_38 = puStack_48;
    func_0x000107c61630(param_1,0x100,7,&lStack_58,param_1 + 0x50);
  }
  return;
}



/* Entry: 102c937a0; end: 102c9387f;  */

int FUN_102c937a0(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 102c93880; end: 102c938cb;  */

undefined8 FUN_102c93880(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_102c938cc(param_1,param_2);
  return unaff_x20;
}



/* Entry: 102c938cc; end: 102c939db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c938cc(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  uVar5 = *(undefined8 *)(param_1 + _DAT_113068e88);
  uVar6 = *(undefined8 *)(param_1 + _DAT_113068ea0);
  uVar4 = *(undefined8 *)(param_1 + _DAT_113068e80);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113068e80))[1];
  uVar7 = *(undefined8 *)(param_2 + _DAT_112f0ded0);
  lVar2 = 0;
  func_0x000102c93e7c();
  func_0x000107c613fc();
  func_0x0001005f60b4(0);
  func_0x000107c613fc();
  func_0x000107c615f0(uVar6);
  func_0x000107c6157c(uVar7);
  func_0x000107c61434(uVar1);
  uVar3 = uVar5;
  func_0x000107c615f0();
  func_0x0001005f60d4();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(lVar2 + 0x10) = uVar4;
  *(undefined8 *)(lVar2 + 0x18) = uVar1;
  *(undefined8 *)(lVar2 + 0x20) = uVar5;
  *(undefined8 *)(lVar2 + 0x28) = uVar6;
  *(undefined8 *)(lVar2 + 0x30) = uVar7;
  *(undefined8 *)(lVar2 + 0x38) = uVar3;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  *(long *)(unaff_x20 + 0x10) = lVar2;
  func_0x000107c61574(uVar4);
  return;
}



/* Entry: 102c939dc; end: 102c93a17;  */

void FUN_102c939dc(void)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (lVar1 != 0) {
    func_0x000107c6157c(lVar1);
    FUN_102c93aa4();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(lVar1);
    return;
  }
  return;
}



/* Entry: 102c93a18; end: 102c93a3b;  */

void FUN_102c93a18(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c93a3c; end: 102c93a7b;  */

void FUN_102c93a3c(void)

{
  long *unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(*unaff_x20 + 0x10);
  if (lVar1 != 0) {
    func_0x000107c6157c(lVar1);
    FUN_102c93aa4();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(lVar1);
    return;
  }
  return;
}



/* Entry: 102c93a7c; end: 102c93a83;  */

undefined8 FUN_102c93a7c(void)

{
  return 0;
}



/* Entry: 102c93a84; end: 102c93aa3;  */

void FUN_102c93a84(void)

{
  func_0x000107c61168(&PTR_PTR_112f08770);
  return;
}



/* Entry: 102c93aa4; end: 102c93b8f;  */

void FUN_102c93aa4(void)

{
  long *plVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined1 auStack_68 [24];
  long *plStack_50;
  long lStack_48;
  
  func_0x0001000d224c(auStack_68);
  func_0x0001000a8868(auStack_68,plStack_50);
  plVar1 = plStack_50;
  (**(code **)(lStack_48 + 8))(plStack_50,lStack_48);
  puVar2 = &UNK_1105bb748;
  func_0x000107c613fc(&UNK_1105bb748,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  pcVar3 = FUN_102c93e9c;
  puVar5 = puVar2;
  (**(code **)(*plVar1 + 0x60))(FUN_102c93e9c);
  func_0x000107c61574(plVar1);
  func_0x000107c61574(puVar2);
  func_0x0001000834e4(auStack_68);
  pcVar4 = pcVar3;
  func_0x000107c614f0(pcVar3);
  (**(code **)(puVar5 + 0x18))(*(undefined8 *)(unaff_x20 + 0x38),pcVar4,puVar5);
  func_0x000107c615e8(pcVar3);
  return;
}



/* Entry: 102c93b90; end: 102c93c5f;  */

void FUN_102c93b90(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_c8 [24];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  FUN_102d24050(&uStack_b0,&UNK_1105c43b0,uVar1,&UNK_1105c43b0,uVar2,&PTR_DAT_1105c33e0,param_1);
  uStack_68 = uStack_a8;
  uStack_70 = uStack_b0;
  uStack_58 = uStack_98;
  uStack_60 = uStack_a0;
  uStack_48 = uStack_88;
  uStack_50 = uStack_90;
  lStack_38 = lStack_78;
  uStack_40 = uStack_80;
  if (lStack_78 != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_c8,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648();
    if (param_2 != 0) {
      FUN_102c93c60(&uStack_b0);
      func_0x000107c61574(param_2);
    }
    FUN_102c93ea4(&uStack_70);
  }
  return;
}



/* Entry: 102c93c60; end: 102c93e37;  */

/* WARNING: Possible PIC construction at 0x000102c93cb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c93cc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c93df4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c93e10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c93df8) */
/* WARNING: Removing unreachable block (ram,0x000102c93ccc) */
/* WARNING: Removing unreachable block (ram,0x000102c93cd0) */
/* WARNING: Removing unreachable block (ram,0x000102c93d78) */
/* WARNING: Removing unreachable block (ram,0x000102c93d08) */
/* WARNING: Removing unreachable block (ram,0x000102c93d88) */
/* WARNING: Removing unreachable block (ram,0x000102c93d54) */
/* WARNING: Removing unreachable block (ram,0x000102c93d8c) */
/* WARNING: Removing unreachable block (ram,0x000102c93dfc) */
/* WARNING: Removing unreachable block (ram,0x000102c93e04) */
/* WARNING: Removing unreachable block (ram,0x000102c93dc4) */
/* WARNING: Removing unreachable block (ram,0x000102c93cb8) */
/* WARNING: Removing unreachable block (ram,0x000102c93d58) */
/* WARNING: Removing unreachable block (ram,0x000102c93cbc) */
/* WARNING: Removing unreachable block (ram,0x000102c93e14) */

void FUN_102c93c60(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5fadc(uVar2,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c3d368(uVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 102c93e38; end: 102c93e9b;  */

void FUN_102c93e38(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c93e9c; end: 102c93ea3;  */

void FUN_102c93e9c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_c8 [24];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  FUN_102d24050(&uStack_b0,&UNK_1105c43b0,uVar1,&UNK_1105c43b0,uVar2,&PTR_DAT_1105c33e0,param_1);
  uStack_68 = uStack_a8;
  uStack_70 = uStack_b0;
  uStack_58 = uStack_98;
  uStack_60 = uStack_a0;
  uStack_48 = uStack_88;
  uStack_50 = uStack_90;
  lStack_38 = lStack_78;
  uStack_40 = uStack_80;
  if (lStack_78 != 0) {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_c8,0,0);
    lVar3 = unaff_x20 + 0x10;
    func_0x000107c61648();
    if (lVar3 != 0) {
      FUN_102c93c60(&uStack_b0);
      func_0x000107c61574(lVar3);
    }
    FUN_102c93ea4(&uStack_70);
  }
  return;
}



/* Entry: 102c93ea4; end: 102c93eeb;  */

undefined8 FUN_102c93ea4(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112f08890;
  func_0x0001000285a8(0x112f08890,&UNK_10db3b580);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 102c93eec; end: 102c93fb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c93eec(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f08898) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f088a0) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102c93fb4; end: 102c93fe7;  */

void FUN_102c93fb4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102c93fe8; end: 102c9402f; -[AdPlaybackTransitionWorkflow dealloc] */

void FUN_102c93fe8(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_dealloc_112525b20;
  uStack_30 = param_1;
  uStack_28 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_30,puVar1);
  return;
}


