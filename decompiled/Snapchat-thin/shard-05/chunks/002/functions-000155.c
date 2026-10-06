/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103bdd558; end: 103bdd68b; -[_TtC24SCInflightCallCoalescing23SCInflightCallCoalescer performCoalescingWithRequest:hashKey:replyOn:completion:] */

void FUN_103bdd558(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_60);
    func_0x000107c615e8(param_3);
  }
  uVar1 = param_4;
  func_0x000107c5ee30(param_4);
  func_0x000107c61170(param_4);
  puVar2 = &UNK_1106e4f90;
  func_0x000107c613fc(&UNK_1106e4f90,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_6;
  FUN_103bdc96c(&uStack_60,uVar1,param_2,param_5,0x103bdff8c,puVar2);
  func_0x000107c61574(puVar2);
  func_0x00010006c090(uVar1,param_2);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
  FUN_103be0198(&uStack_60,0x112d387f8,&UNK_10d902650);
  return;
}



/* Entry: 103bdd68c; end: 103bdd7a7;  */

void FUN_103bdd68c(undefined8 param_1,long param_2,long param_3)

{
  long extraout_x8;
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  func_0x000103be02d8(param_1,auStack_70,0x112d387f8,&UNK_10d902650);
  if (lStack_58 == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    func_0x0001006732c8(auStack_70,lStack_58);
    lVar3 = *(long *)(lStack_58 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
    puVar2 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar3 + 0x10))(puVar2);
    puVar1 = puVar2;
    func_0x000107c605b0(puVar2,lStack_58);
    (**(code **)(lVar3 + 8))(puVar2,lStack_58);
    func_0x000100183ab8(auStack_70);
  }
  if (param_2 != 0) {
    func_0x000107c5ed2c(param_2);
  }
  (**(code **)(param_3 + 0x10))(param_3,puVar1,param_2);
  func_0x000107c615e8(puVar1);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 103bdd7a8; end: 103bdd7ab;  */

undefined * FUN_103bdd7a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_90 [80];
  
  puVar6 = auStack_90;
  lVar2 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uVar3 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  func_0x000107c5faec();
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  puVar1 = PTR___sSSN_11034da80;
  *(undefined **)(lVar2 + 0x48) = PTR___sSSN_11034da80;
  *(undefined1 **)(lVar2 + 0x28) = puVar6;
  *(undefined8 *)(lVar2 + 0x30) = param_1;
  *(undefined8 *)(lVar2 + 0x38) = param_2;
  func_0x000107c61434(param_2);
  lVar4 = lVar2;
  func_0x000100214a84(lVar2);
  func_0x000107c61588(lVar2);
  FUN_103be0198((undefined8 *)(lVar2 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010dc62d00);
  lVar2 = lVar4;
  func_0x000107c5f9dc(lVar4,puVar1,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar4);
  func_0x000107c466bc(puVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar2);
  return puVar5;
}



/* Entry: 103bdd7ac; end: 103bdd80f; +[_TtC24SCInflightCallCoalescing23SCInflightCallCoalescer tornDownErrorWithReason:] */

void FUN_103bdd7ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  FUN_103bdf7d4();
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103bdd810; end: 103bdd82b;  */

void FUN_103bdd810(long param_1,long param_2)

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



/* Entry: 103bdd82c; end: 103bdd85f;  */

void FUN_103bdd82c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103bdd860; end: 103bdd89b; -[_TtC24SCInflightCallCoalescing23SCInflightCallCoalescer .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103bdd87c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bdd880) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bdd860(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ff59a8));
  return;
}



/* Entry: 103bdd89c; end: 103bdd967;  */

undefined8 FUN_103bdd89c(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long *unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *unaff_x20;
  func_0x000107c61434(lVar3);
  func_0x000100446b48(param_1,param_2,PTR___s10Foundation4DataV4hash4intoys6HasherVz_tF_110350a88,
                      &UNK_102dba2f8);
  func_0x000107c6142c(lVar3);
  if ((param_2 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    iVar2 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar3 = *unaff_x20;
    if (iVar2 == 0) {
      func_0x000103bddecc();
    }
    puVar1 = (undefined8 *)(*(long *)(lVar3 + 0x30) + param_1 * 0x10);
    func_0x00010006c090(*puVar1,puVar1[1]);
    uVar4 = *(undefined8 *)(*(long *)(lVar3 + 0x38) + param_1 * 8);
    func_0x000103bde76c(param_1,lVar3);
    *unaff_x20 = lVar3;
  }
  return uVar4;
}



/* Entry: 103bdd968; end: 103bdda5f;  */

void FUN_103bdd968(undefined8 *param_1,long param_2,ulong param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long *unaff_x20;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar3 = *unaff_x20;
  func_0x000107c61434(lVar3);
  func_0x000100446b48(param_2,param_3,PTR___s10Foundation4DataV4hash4intoys6HasherVz_tF_110350a88,
                      &UNK_102dba2f8);
  func_0x000107c6142c(lVar3);
  if ((param_3 & 1) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[4] = 0;
    param_1[3] = 1;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar3 = *unaff_x20;
    if (iVar1 == 0) {
      func_0x000103bde03c();
    }
    puVar2 = (undefined8 *)(*(long *)(lVar3 + 0x30) + param_2 * 0x10);
    func_0x00010006c090(*puVar2,puVar2[1]);
    puVar2 = (undefined8 *)(*(long *)(lVar3 + 0x38) + param_2 * 0x28);
    uVar4 = *puVar2;
    uVar6 = puVar2[3];
    uVar5 = puVar2[2];
    param_1[1] = puVar2[1];
    *param_1 = uVar4;
    param_1[3] = uVar6;
    param_1[2] = uVar5;
    param_1[4] = puVar2[4];
    func_0x000103bde924(param_2,lVar3);
    *unaff_x20 = lVar3;
  }
  return;
}



/* Entry: 103bdda60; end: 103bde03b;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_103bdda60(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *unaff_x20;
  long lVar10;
  
  lVar10 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100446b48(param_2,param_3,PTR___s10Foundation4DataV4hash4intoys6HasherVz_tF_110350a88,
                      &UNK_102dba2f8);
  lVar6 = *(long *)(lVar10 + 0x10);
  uVar9 = (ulong)~(uint)uVar4 & 1;
  lVar7 = lVar6 + uVar9;
  if (SCARRY8(lVar6,uVar9)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103bddb58);
    (*pcVar2)();
  }
  if (*(long *)(lVar10 + 0x18) < lVar7) {
    func_0x000103bde1f4(lVar7,param_4 & 1);
    uVar3 = param_2;
    uVar9 = param_3;
    func_0x000100446b48(param_2,param_3,PTR___s10Foundation4DataV4hash4intoys6HasherVz_tF_110350a88,
                        &UNK_102dba2f8);
    if (((uint)uVar4 & 1) != ((uint)uVar9 & 1)) {
      func_0x000107c60624(PTR___s10Foundation4DataVN_110350ae0);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103bddb20);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x000103bddecc();
    lVar7 = *unaff_x20;
    goto joined_r0x000103bddb6c;
  }
  lVar7 = *unaff_x20;
joined_r0x000103bddb6c:
  if ((uVar4 & 1) != 0) {
    uVar8 = *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar8);
    return;
  }
  lVar6 = lVar7 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar6 + 0x40) = *(ulong *)(lVar6 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103bddbd4);
    (*pcVar2)();
  }
  *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
  uVar5 = (uint)(param_3 >> 0x3e);
  if (uVar5 == 1) {
    param_2 = param_3 & 0x3fffffffffffffff;
  }
  else if (uVar5 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 103bde03c; end: 103bdeaeb;  */

void FUN_103bde03c(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x0001000285a8(0x112ff5aa0,&UNK_10dc62d98);
  lVar11 = *unaff_x20;
  lVar6 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) == 0) {
    func_0x000107c61574(lVar11);
LAB_103bde1cc:
    *unaff_x20 = lVar6;
    return;
  }
  lVar1 = lVar11 + 0x40;
  uVar7 = (1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f)) + 0x3fU >> 6;
  if (lVar6 != lVar11 || lVar1 + uVar7 * 8 <= lVar6 + 0x40U) {
    func_0x000107c610b8(lVar6 + 0x40U,lVar1,uVar7 << 3);
  }
  lVar12 = 0;
  *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
  uVar8 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
  uVar7 = 0xffffffffffffffff;
  if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
    uVar7 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar7 = uVar7 & *(ulong *)(lVar11 + 0x40);
  if (uVar7 == 0) goto LAB_103bde124;
  do {
    uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
    uVar7 = uVar7 - 1 & uVar7;
    while( true ) {
      uVar9 = LZCOUNT(uVar9) | lVar12 << 6;
      lVar13 = uVar9 * 0x10;
      puVar2 = (undefined8 *)(*(long *)(lVar11 + 0x30) + lVar13);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      lVar10 = uVar9 * 0x28;
      func_0x000103be021c(*(long *)(lVar11 + 0x38) + lVar10,&uStack_88);
      puVar2 = (undefined8 *)(*(long *)(lVar6 + 0x30) + lVar13);
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      puVar2 = (undefined8 *)(*(long *)(lVar6 + 0x38) + lVar10);
      puVar2[1] = uStack_80;
      *puVar2 = uStack_88;
      puVar2[3] = uStack_70;
      puVar2[2] = uStack_78;
      puVar2[4] = uStack_68;
      func_0x00010006c00c(uVar3,uVar4);
      if (uVar7 != 0) break;
LAB_103bde124:
      do {
        lVar10 = lVar12 + 1;
        if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103bde1f4);
          (*pcVar5)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar10) {
          func_0x000107c61574(lVar11);
          goto LAB_103bde1cc;
        }
        uVar7 = *(ulong *)(lVar1 + lVar10 * 8);
        lVar12 = lVar12 + 1;
      } while (uVar7 == 0);
      uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar7 = uVar7 - 1 & uVar7;
      lVar12 = lVar10;
    }
  } while( true );
}



/* Entry: 103bdeaec; end: 103bdeb83;  */

code * FUN_103bdeaec(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *unaff_x20;
  
  lVar1 = 0x50;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x50,0x8dda);
  }
  *param_1 = lVar1;
  uVar2 = *unaff_x20;
  func_0x000107c61558(uVar2);
  lVar3 = lVar1;
  FUN_103bdef60();
  *(long *)(lVar1 + 0x40) = lVar3;
  lVar3 = lVar1 + 0x20;
  FUN_103bdecdc(lVar3,param_2,param_3,uVar2);
  *(long *)(lVar1 + 0x48) = lVar3;
  return FUN_103bdeb84;
}



/* Entry: 103bdeb84; end: 103bdebbf;  */

void FUN_103bdeb84(long *param_1)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = *param_1;
  pcVar1 = *(code **)(lVar2 + 0x40);
  (**(code **)(lVar2 + 0x48))(lVar2 + 0x20,0);
  (*pcVar1)(lVar2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar2);
  return;
}



/* Entry: 103bdebc0; end: 103bdecdb;  */

undefined * FUN_103bdebc0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103bdecdc);
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
    puVar3 = (undefined *)0x112ff5ab0;
    func_0x0001000285a8(0x112ff5ab0,&UNK_10dc62db0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_1106e4ed8);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x18 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 103bdecdc; end: 103bdee37;  */

undefined1  [16] FUN_103bdecdc(long *param_1,long param_2,ulong param_3,uint param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  undefined1 auVar10 [16];
  
  puVar3 = (undefined8 *)0x30;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x30,0x671d);
  }
  *param_1 = (long)puVar3;
  puVar3[2] = param_3;
  puVar3[3] = unaff_x20;
  puVar3[1] = param_2;
  lVar9 = *unaff_x20;
  lVar4 = param_2;
  uVar5 = param_3;
  func_0x000100446b48(param_2,param_3,PTR___s10Foundation4DataV4hash4intoys6HasherVz_tF_110350a88,
                      &UNK_102dba2f8);
  *(byte *)(puVar3 + 5) = (byte)uVar5 & 1;
  lVar6 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar5 & 1;
  lVar1 = lVar6 + uVar8;
  if (SCARRY8(lVar6,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103bdedf4);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar1) {
    func_0x000103bde1f4(lVar1,param_4 & 1);
    func_0x000100446b48(param_2,param_3,PTR___s10Foundation4DataV4hash4intoys6HasherVz_tF_110350a88,
                        &UNK_102dba2f8);
    lVar4 = param_2;
    if (((uint)uVar5 & 1) != ((uint)param_3 & 1)) {
      func_0x000107c60624(PTR___s10Foundation4DataVN_110350ae0);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103bdedd4);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x000103bddecc();
    puVar3[4] = lVar4;
    goto joined_r0x000103bdee08;
  }
  puVar3[4] = lVar4;
joined_r0x000103bdee08:
  if ((uVar5 & 1) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(*(long *)(*unaff_x20 + 0x38) + lVar4 * 8);
  }
  *puVar3 = uVar7;
  auVar10._8_8_ = puVar3;
  auVar10._0_8_ = FUN_103bdee38;
  return auVar10;
}



/* Entry: 103bdee38; end: 103bdef5f;  */

void FUN_103bdee38(long *param_1,ulong param_2)

{
  byte bVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  param_1 = (long *)*param_1;
  lVar8 = *param_1;
  bVar1 = *(byte *)(param_1 + 5);
  if ((param_2 & 1) == 0) {
    if (lVar8 == 0) goto LAB_103bdeec4;
    uVar6 = param_1[4];
    lVar4 = *(long *)param_1[3];
    if ((bVar1 & 1) != 0) goto LAB_103bdeeb8;
    lVar5 = lVar4 + (uVar6 >> 6) * 8;
    lVar7 = *(long *)(lVar4 + 0x30);
    lVar10 = param_1[2];
    lVar9 = param_1[1];
    *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar6 & 0x3f);
    plVar2 = (long *)(lVar7 + uVar6 * 0x10);
    plVar2[1] = lVar10;
    *plVar2 = lVar9;
    *(long *)(*(long *)(lVar4 + 0x38) + uVar6 * 8) = lVar8;
    lVar5 = *(long *)(lVar4 + 0x10);
    if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103bdef60);
      (*pcVar3)();
    }
  }
  else {
    if (lVar8 == 0) {
LAB_103bdeec4:
      if ((bVar1 & 1) != 0) {
        lVar4 = param_1[4];
        lVar5 = *(long *)param_1[3];
        func_0x0001006e5814(*(long *)(lVar5 + 0x30) + lVar4 * 0x10);
        func_0x000103bde76c(lVar4,lVar5);
      }
      goto LAB_103bdef34;
    }
    uVar6 = param_1[4];
    lVar4 = *(long *)param_1[3];
    if ((bVar1 & 1) != 0) {
LAB_103bdeeb8:
      *(long *)(*(long *)(lVar4 + 0x38) + uVar6 * 8) = lVar8;
      goto LAB_103bdef34;
    }
    lVar5 = lVar4 + (uVar6 >> 6) * 8;
    lVar7 = *(long *)(lVar4 + 0x30);
    lVar10 = param_1[2];
    lVar9 = param_1[1];
    *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar6 & 0x3f);
    plVar2 = (long *)(lVar7 + uVar6 * 0x10);
    plVar2[1] = lVar10;
    *plVar2 = lVar9;
    *(long *)(*(long *)(lVar4 + 0x38) + uVar6 * 8) = lVar8;
    lVar5 = *(long *)(lVar4 + 0x10);
    if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103bdeea8);
      (*pcVar3)();
    }
  }
  lVar7 = param_1[1];
  lVar9 = param_1[2];
  *(long *)(lVar4 + 0x10) = lVar5 + 1;
  func_0x00010006c00c(lVar7,lVar9);
LAB_103bdef34:
  lVar4 = *param_1;
  func_0x000107c61434(lVar8);
  func_0x000107c6142c(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1);
  return;
}



/* Entry: 103bdef60; end: 103bdef83;  */

undefined1  [16] FUN_103bdef60(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined1 auVar1 [16];
  
  *param_1 = *unaff_x20;
  param_1[1] = unaff_x20;
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = 0x103bdef78;
  return auVar1;
}



/* Entry: 103bdef84; end: 103bdf10b;  */

void FUN_103bdef84(long param_1,undefined8 param_2,long param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x21;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lStack_a8;
  undefined1 auStack_98 [40];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lStack_a8 = 0;
  uVar8 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar10 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar10 = uVar10 & *(ulong *)(param_3 + 0x40);
  lVar7 = 0;
  do {
    if (uVar10 == 0) {
      do {
        lVar11 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103bdf10c);
          (*pcVar3)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar11) {
          FUN_103bdf10c(param_1,param_2,lStack_a8,param_3);
          return;
        }
        uVar10 = ((ulong *)(param_3 + 0x40))[lVar11];
        lVar7 = lVar7 + 1;
      } while (uVar10 == 0);
      uVar6 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar10 = uVar10 - 1 & uVar10;
    }
    else {
      uVar6 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar10 = uVar10 - 1 & uVar10;
      lVar11 = lVar7;
    }
    uVar6 = LZCOUNT(uVar6);
    uVar9 = uVar6 | lVar11 << 6;
    puVar5 = (undefined8 *)(*(long *)(param_3 + 0x30) + uVar9 * 0x10);
    uVar1 = *puVar5;
    uVar2 = puVar5[1];
    uStack_70 = uVar1;
    uStack_68 = uVar2;
    func_0x000103be021c(*(long *)(param_3 + 0x38) + uVar9 * 0x28,auStack_98);
    func_0x00010006c00c(uVar1,uVar2);
    puVar5 = &uStack_70;
    (*param_4)(puVar5,auStack_98);
    func_0x000103be02ac(auStack_98);
    func_0x00010006c090(uStack_70,uStack_68);
    if (unaff_x21 != 0) {
      return;
    }
    lVar7 = lVar11;
    if (((ulong)puVar5 & 1) != 0) {
      uVar9 = (uVar6 & 0xffffffffffffffc0 | lVar11 << 6) >> 3;
      *(ulong *)(param_1 + uVar9) = *(ulong *)(param_1 + uVar9) | 1L << (uVar6 & 0x3f);
      bVar4 = SCARRY8(lStack_a8,1);
      lStack_a8 = lStack_a8 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103bdf0d4);
        (*pcVar3)();
      }
    }
  } while( true );
}



/* Entry: 103bdf10c; end: 103bdf363;  */

undefined * FUN_103bdf10c(ulong *param_1,long param_2,undefined *param_3,undefined *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined1 auStack_d0 [72];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (param_3 != (undefined *)0x0) {
    if (param_3 == *(undefined **)(param_4 + 0x10)) {
      func_0x000107c6157c(param_4);
      puVar5 = param_4;
    }
    else {
      func_0x0001000285a8(0x112ff5aa0,&UNK_10dc62d98);
      puVar5 = param_3;
      func_0x000107c60498();
      if (param_2 < 1) {
        uVar13 = 0;
      }
      else {
        uVar13 = *param_1;
      }
      lVar8 = 0;
      do {
        if (uVar13 == 0) {
          do {
            lVar14 = lVar8 + 1;
            if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x103bdf35c);
              (*pcVar3)();
            }
            if (param_2 <= lVar14) {
              return puVar5;
            }
            uVar13 = param_1[lVar14];
            lVar8 = lVar8 + 1;
          } while (uVar13 == 0);
          uVar7 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
          uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
          uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
          uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
          uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
          uVar13 = uVar13 - 1 & uVar13;
        }
        else {
          uVar7 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
          uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
          uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
          uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
          uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
          uVar13 = uVar13 - 1 & uVar13;
          lVar14 = lVar8;
        }
        uVar7 = LZCOUNT(uVar7) | lVar14 << 6;
        puVar10 = (undefined8 *)(*(long *)(param_4 + 0x30) + uVar7 * 0x10);
        uVar1 = *puVar10;
        uVar2 = puVar10[1];
        func_0x000103be021c(*(long *)(param_4 + 0x38) + uVar7 * 0x28,&uStack_88);
        func_0x000107c6068c(auStack_d0,*(undefined8 *)(puVar5 + 0x28));
        func_0x00010006c00c(uVar1,uVar2);
        puVar6 = auStack_d0;
        func_0x000107c5ee34(puVar6,uVar1,uVar2);
        func_0x000107c606a8();
        uVar12 = -1L << ((ulong)(byte)puVar5[0x20] & 0x3f);
        uVar11 = (ulong)puVar6 & (uVar12 ^ 0xffffffffffffffff);
        uVar9 = uVar11 >> 6;
        uVar7 = -1L << (uVar11 & 0x3f) &
                (*(ulong *)(puVar5 + uVar9 * 8 + 0x40) ^ 0xffffffffffffffff);
        if (uVar7 == 0) {
          bVar4 = false;
          uVar7 = 0x3f - uVar12 >> 6;
          do {
            uVar11 = uVar9 + 1;
            if ((uVar11 == uVar7) && (bVar4)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x103bdf360);
              (*pcVar3)();
            }
            uVar9 = 0;
            if (uVar11 != uVar7) {
              uVar9 = uVar11;
            }
            bVar4 = (bool)(uVar11 == uVar7 | bVar4);
          } while (*(ulong *)(puVar5 + uVar9 * 8 + 0x40) == 0xffffffffffffffff);
          uVar7 = ~*(ulong *)(puVar5 + uVar9 * 8 + 0x40);
          uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
          uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
          uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
          uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
          uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar9 << 6;
        }
        else {
          uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
          uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
          uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
          uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
          uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar11 & 0x7fffffffffffffc0;
        }
        uVar9 = uVar7 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar5 + uVar9 + 0x40) = 1L << (uVar7 & 0x3f) | *(ulong *)(puVar5 + uVar9 + 0x40)
        ;
        puVar10 = (undefined8 *)(*(long *)(puVar5 + 0x30) + uVar7 * 0x10);
        *puVar10 = uVar1;
        puVar10[1] = uVar2;
        puVar10 = (undefined8 *)(*(long *)(puVar5 + 0x38) + uVar7 * 0x28);
        puVar10[4] = uStack_68;
        puVar10[1] = uStack_80;
        *puVar10 = uStack_88;
        puVar10[3] = uStack_70;
        puVar10[2] = uStack_78;
        *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
        bVar4 = SBORROW8((long)param_3,1);
        param_3 = param_3 + -1;
        if (bVar4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103bdf364);
          (*pcVar3)();
        }
        lVar8 = lVar14;
      } while (param_3 != (undefined *)0x0);
    }
  }
  return puVar5;
}



/* Entry: 103bdf364; end: 103bdf42f;  */

void FUN_103bdf364(long *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,long *param_7)

{
  code *pcVar1;
  long unaff_x21;
  
  if (param_2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103bdf430);
    (*pcVar1)();
  }
  if (-1 < param_3) {
    if (param_3 != 0) {
      func_0x000107c60ee4(param_2,param_3 << 3);
    }
    func_0x000107c6157c(param_4);
    FUN_103bdef84(param_2,param_3,param_4,param_5,param_6);
    func_0x000107c61574(param_4);
    if (unaff_x21 == 0) {
      *param_1 = param_2;
      func_0x000107c61574(param_4);
    }
    else {
      *param_7 = unaff_x21;
      func_0x000107c61574(param_4);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bdf42c);
  (*pcVar1)();
}



/* Entry: 103bdf430; end: 103bdf5af;  */

void FUN_103bdf430(long param_1,undefined8 param_2,long param_3,code *param_4)

{
  ulong *puVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lStack_98;
  undefined1 auStack_88 [40];
  
  lStack_98 = 0;
  uVar8 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar11 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar11 = uVar11 & *(ulong *)(param_3 + 0x40);
  lVar7 = 0;
  do {
    if (uVar11 == 0) {
      do {
        lVar10 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103bdf5b0);
          (*pcVar3)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar10) {
          FUN_103bdf10c(param_1,param_2,lStack_98,param_3);
          return;
        }
        uVar11 = ((ulong *)(param_3 + 0x40))[lVar10];
        lVar7 = lVar7 + 1;
      } while (uVar11 == 0);
      uVar5 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
    }
    else {
      uVar5 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
      lVar10 = lVar7;
    }
    uVar6 = LZCOUNT(uVar5);
    uVar9 = uVar6 | lVar10 << 6;
    puVar1 = (ulong *)(*(long *)(param_3 + 0x30) + uVar9 * 0x10);
    uVar5 = *puVar1;
    uVar2 = puVar1[1];
    func_0x000103be021c(*(long *)(param_3 + 0x38) + uVar9 * 0x28,auStack_88);
    func_0x00010006c00c(uVar5,uVar2);
    uVar9 = uVar5;
    (*param_4)(uVar5,uVar2,auStack_88);
    func_0x000103be02ac(auStack_88);
    func_0x00010006c090(uVar5,uVar2);
    lVar7 = lVar10;
    if ((uVar9 & 1) != 0) {
      uVar5 = (uVar6 & 0xffffffffffffffc0 | lVar10 << 6) >> 3;
      *(ulong *)(param_1 + uVar5) = *(ulong *)(param_1 + uVar5) | 1L << (uVar6 & 0x3f);
      bVar4 = SCARRY8(lStack_98,1);
      lStack_98 = lStack_98 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103bdf578);
        (*pcVar3)();
      }
    }
  } while( true );
}



/* Entry: 103bdf5b0; end: 103bdf7d3;  */

undefined * FUN_103bdf5b0(long param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined *unaff_x21;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_130 [80];
  ulong uStack_e0;
  ulong uStack_d8;
  undefined *puStack_d0;
  undefined auStack_a0 [8];
  undefined *puStack_98;
  undefined *apuStack_90 [2];
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  ulong uStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = (1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)) + 0x3fU >> 6;
  uVar11 = uVar9 * 8;
  uStack_70 = param_2;
  uStack_68 = param_3;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 0xe) {
    func_0x000107c6157c(param_1);
LAB_103bdf61c:
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    puVar3 = auStack_a0 + -(uVar11 + 0xf & 0x3ffffffffffffff0);
    func_0x000107c60ee4(puVar3,uVar11);
    FUN_103bdf430(puVar3,uVar9,param_1,param_2,param_3);
    bVar1 = unaff_x21 != (undefined *)0x0;
    if (bVar1) {
      puVar3 = unaff_x21;
    }
    uVar10 = (ulong)(uint)bVar1;
    if (bVar1) {
      unaff_x21 = (undefined *)0x0;
    }
    uVar11 = param_3;
    if (bVar1 != 1) {
LAB_103bdf78c:
      func_0x000107c61574();
      goto LAB_103bdf794;
    }
  }
  else {
    iVar2 = 2;
    func_0x000100029b9c(2,0xf,4,0);
    func_0x000107c6157c(param_1);
    if ((iVar2 != 0) && (uVar10 = uVar11, func_0x000107c61594(uVar11,8), (uVar10 & 1) != 0))
    goto LAB_103bdf61c;
    func_0x000107c6158c(uVar11,0xffffffffffffffff);
    func_0x000107c6157c(param_1);
    FUN_103bdf364(apuStack_90,uVar11,uVar9,param_1,0x103be0274,auStack_80,&puStack_98);
    bVar1 = unaff_x21 != (undefined *)0x0;
    puVar3 = apuStack_90[0];
    if (bVar1) {
      unaff_x21 = (undefined *)0x0;
      puVar3 = puStack_98;
    }
    uVar10 = (ulong)bVar1;
    uVar9 = 0xffffffffffffffff;
    func_0x000107c61590(uVar11,0xffffffffffffffff,0xffffffffffffffff);
    if (!bVar1) goto LAB_103bdf78c;
  }
  iVar2 = 2;
  uVar9 = 0x12;
  puStack_98 = puVar3;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar2 != 0) {
    uVar9 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c61658(&puStack_98,uVar9,PTR___ss5ErrorWS_11034ee10);
  }
  func_0x000107c61574();
  unaff_x21 = puVar3;
LAB_103bdf794:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar3;
  }
  func_0x000107c60e78();
  puVar8 = auStack_130;
  lVar4 = 0x112d4b5e8;
  uStack_e0 = uVar10;
  uStack_d8 = uVar11;
  puStack_d0 = unaff_x21;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar4 + 0x18) = 2;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  uVar5 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  func_0x000107c5faec();
  *(undefined8 *)(lVar4 + 0x20) = uVar5;
  puVar3 = PTR___sSSN_11034da80;
  *(undefined **)(lVar4 + 0x48) = PTR___sSSN_11034da80;
  *(undefined1 **)(lVar4 + 0x28) = puVar8;
  *(long *)(lVar4 + 0x30) = param_1;
  *(ulong *)(lVar4 + 0x38) = uVar9;
  func_0x000107c61434(uVar9);
  lVar6 = lVar4;
  func_0x000100214a84(lVar4);
  func_0x000107c61588(lVar4);
  FUN_103be0198((undefined8 *)(lVar4 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
  puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar5 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010dc62d00);
  lVar4 = lVar6;
  func_0x000107c5f9dc(lVar6,puVar3,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar6);
  func_0x000107c466bc(puVar7);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(lVar4);
  return puVar7;
}



/* Entry: 103bdf7d4; end: 103bdf91f;  */

undefined * FUN_103bdf7d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_90 [80];
  
  puVar6 = auStack_90;
  lVar2 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uVar3 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  func_0x000107c5faec();
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  puVar1 = PTR___sSSN_11034da80;
  *(undefined **)(lVar2 + 0x48) = PTR___sSSN_11034da80;
  *(undefined1 **)(lVar2 + 0x28) = puVar6;
  *(undefined8 *)(lVar2 + 0x30) = param_1;
  *(undefined8 *)(lVar2 + 0x38) = param_2;
  func_0x000107c61434(param_2);
  lVar4 = lVar2;
  func_0x000100214a84(lVar2);
  func_0x000107c61588(lVar2);
  FUN_103be0198((undefined8 *)(lVar2 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010dc62d00);
  lVar2 = lVar4;
  func_0x000107c5f9dc(lVar4,puVar1,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar4);
  func_0x000107c466bc(puVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar2);
  return puVar5;
}



/* Entry: 103bdf920; end: 103bdf93f;  */

void FUN_103bdf920(void)

{
  func_0x000107c61168(&PTR_PTR_1129429b0);
  return;
}



/* Entry: 103bdf940; end: 103bdf94f;  */

void FUN_103bdf940(undefined8 *param_1)

{
  if (param_1[3] == 0) {
    return;
  }
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100183acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 103bdf950; end: 103bdfa5b;  */

void FUN_103bdf950(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_2[3];
  if (lVar1 == 0) {
    uVar2 = *param_2;
    uVar4 = param_2[3];
    uVar3 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    param_1[3] = uVar4;
    param_1[2] = uVar3;
  }
  else {
    param_1[3] = lVar1;
    (*(code *)**(undefined8 **)(lVar1 + -8))(param_1,param_2);
  }
  param_1[4] = param_2[4];
  return;
}



/* Entry: 103bdfa5c; end: 103bdfb27;  */

int FUN_103bdfa5c(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[10] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103bdfb28; end: 103bdfb8b;  */

void FUN_103bdfb28(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 103bdfb8c; end: 103bdfbeb;  */

undefined8 * FUN_103bdfb8c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_1[1];
  uVar1 = param_2[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar2);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 103bdfbec; end: 103bdfc2f;  */

undefined8 * FUN_103bdfbec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 103bdfc30; end: 103bdfcc7;  */

int FUN_103bdfc30(ulong *param_1,int param_2)

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



/* Entry: 103bdfcc8; end: 103bdfcf3;  */

long FUN_103bdfcc8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103bdfcf4; end: 103bdfd0b;  */

void FUN_103bdfcf4(undefined8 *param_1)

{
  if ((ulong)param_1[3] < 0xffffffff) {
    return;
  }
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100183acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 103bdfd0c; end: 103bdfe6f;  */

undefined8 * FUN_103bdfd0c(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = param_2[3];
  uVar1 = uVar2;
  if (0xfffffffe < uVar2) {
    uVar1 = 0xffffffff;
  }
  iVar3 = (int)uVar1;
  if ((uVar2 == 0 || (iVar3 == -1 || iVar3 == 0)) && (iVar3 == -1)) {
    param_1[3] = uVar2;
    (*(code *)**(undefined8 **)(uVar2 - 8))();
    return param_1;
  }
  uVar4 = *param_2;
  uVar6 = param_2[3];
  uVar5 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  param_1[3] = uVar6;
  param_1[2] = uVar5;
  return param_1;
}



/* Entry: 103bdfe70; end: 103bdff9b;  */

int FUN_103bdfe70(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffc < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 0x7ffffffd;
  }
  uVar4 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar4) {
    uVar4 = 0xffffffff;
  }
  uVar3 = (uint)uVar4;
  iVar1 = 0;
  if (1 < uVar3) {
    iVar1 = uVar3 - 2;
  }
  iVar2 = 0;
  if (1 < uVar3 + 1) {
    iVar2 = iVar1;
  }
  return iVar2;
}



/* Entry: 103bdff9c; end: 103be0147;  */

void FUN_103bdff9c(undefined8 *param_1,double param_2)

{
  byte *pbVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined *puVar10;
  double dVar11;
  undefined1 auStack_100 [16];
  double dStack_f0;
  double dStack_e0;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  
  pbVar1 = *(byte **)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  puVar2 = *(undefined **)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c61428(pbVar1,auStack_90,0,0);
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((*pbVar1 & 1) == 0) {
    func_0x000107c61428(pbVar1,auStack_a8,1,0);
    *pbVar1 = 1;
    func_0x000107c61428(lVar4 + 0x20,auStack_100,0x21,0);
    puVar7 = puVar2;
    FUN_103bdd89c(puVar2,uVar5);
    func_0x000107c614a8(auStack_100);
    if (puVar7 != (undefined *)0x0) {
      puVar10 = puVar7;
    }
    if ((lVar3 == 0) && (dVar11 = *(double *)(lVar4 + 0x18), 0.0 < dVar11)) {
      func_0x000107c6071c();
      func_0x000107c61428(lVar4 + 0x28,auStack_c0,0,0);
      uVar9 = *(undefined8 *)(lVar4 + 0x28);
      uVar8 = uVar9;
      dStack_f0 = param_2;
      func_0x000107c61434();
      FUN_103bdf5b0();
      func_0x000107c6142c(uVar9);
      func_0x000107c61428(lVar4 + 0x28,auStack_d8,0x21,0);
      uVar9 = *(undefined8 *)(lVar4 + 0x28);
      *(undefined8 *)(lVar4 + 0x28) = uVar8;
      func_0x000107c6142c(uVar9);
      func_0x000103be02d8(uVar6,auStack_100,0x112d387f8,&UNK_10d902650);
      dStack_e0 = dVar11 + param_2;
      func_0x00010006c00c(puVar2,uVar5);
      FUN_103bdc3d0(auStack_100,puVar2,uVar5);
      func_0x000107c614a8(auStack_d8);
    }
  }
  *param_1 = puVar10;
  return;
}



/* Entry: 103be0148; end: 103be0183;  */

void FUN_103be0148(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    func_0x000100183ab8(unaff_x20 + 0x20);
  }
  func_0x000107c614ac(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103be0184; end: 103be0197;  */

bool FUN_103be0184(undefined8 param_1,undefined8 param_2,long param_3)

{
  long unaff_x20;
  
  return *(double *)(unaff_x20 + 0x10) < *(double *)(param_3 + 0x20);
}



/* Entry: 103be0198; end: 103be031f;  */

undefined8 FUN_103be0198(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 103be0320; end: 103be0333;  */

void FUN_103be0320(void)

{
  func_0x000100446890();
  return;
}



/* Entry: 103be0334; end: 103be034b;  */

void FUN_103be0334(long param_1,long param_2)

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



/* Entry: 103be034c; end: 103be035f;  */

void FUN_103be034c(void)

{
  FUN_103bdc53c();
  return;
}



/* Entry: 103be0360; end: 103be0363;  */

void FUN_103be0360(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (*(undefined8 *)(unaff_x20 + 0x18),unaff_x20 + 0x20,*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 103be0364; end: 103be0383; -[_TtC25SCCustomStoryMembersScope25SCCustomStoryMembersScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103be0364(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112ff5ac8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103be0384; end: 103be03cf; -[_TtC25SCCustomStoryMembersScope25SCCustomStoryMembersScope publicationId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103be0384(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ff5ad0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112ff5ad0))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103be03d0; end: 103be03e7; -[_TtC25SCCustomStoryMembersScope25SCCustomStoryMembersScope dataSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103be03d0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ff5ad8;
  func_0x000107c61428(param_1 + _DAT_112ff5ad8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103be03e8; end: 103be03f3; -[_TtC25SCCustomStoryMembersScope25SCCustomStoryMembersScope setDataSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103be03e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ff5ad8;
  func_0x000107c61428(param_1 + _DAT_112ff5ad8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103be03f4; end: 103be053f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103be03f4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ff5ad8;
  func_0x000107c61428(unaff_x20 + _DAT_112ff5ad8,auStack_48,1,0);
  func_0x000107c61604(unaff_x20 + lVar1,param_1);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103be0540; end: 103be0557; -[_TtC25SCCustomStoryMembersScope25SCCustomStoryMembersScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103be0540(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ff5ae0;
  func_0x000107c61428(param_1 + _DAT_112ff5ae0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103be0558; end: 103be056f; -[_TtC25SCCustomStoryMembersScope25SCCustomStoryMembersScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103be0558(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ff5ae0;
  func_0x000107c61428(param_1 + _DAT_112ff5ae0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103be0570; end: 103be05f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103be0570(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = 0x30;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x30,0x8ef7);
  }
  *param_1 = lVar1;
  lVar2 = _DAT_112ff5ae0;
  *(long *)(lVar1 + 0x20) = unaff_x20;
  *(long *)(lVar1 + 0x28) = lVar2;
  func_0x000107c61428(unaff_x20 + lVar2,lVar1,0x21,0);
  lVar2 = unaff_x20 + lVar2;
  func_0x000107c61618();
  *(long *)(lVar1 + 0x18) = lVar2;
  auVar3._8_8_ = (long *)(lVar1 + 0x18);
  auVar3._0_8_ = FUN_103be0920;
  return auVar3;
}



/* Entry: 103be05f4; end: 103be0603; -[_TtC25SCCustomStoryMembersScope25SCCustomStoryMembersScope enableViewMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103be05f4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112ff5ae8);
}



/* Entry: 103be0604; end: 103be060f; -[_TtC25SCCustomStoryMembersScope25SCCustomStoryMembersScope selectionTracker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103be0604(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ff5af0;
  func_0x000107c61428(param_1 + _DAT_112ff5af0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103be0610; end: 103be0653;  */

void FUN_103be0610(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103be0654; end: 103be065f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103be0654(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ff5af0;
  func_0x000107c61428(unaff_x20 + _DAT_112ff5af0,auStack_38,0,0);
  func_0x000107c61618(unaff_x20 + lVar1);
  return;
}



/* Entry: 103be0660; end: 103be069f;  */

void FUN_103be0660(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_1;
  func_0x000107c61428(unaff_x20 + lVar1,auStack_38,0,0);
  func_0x000107c61618(unaff_x20 + lVar1);
  return;
}



/* Entry: 103be06a0; end: 103be06ab; -[_TtC25SCCustomStoryMembersScope25SCCustomStoryMembersScope setSelectionTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103be06a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ff5af0;
  func_0x000107c61428(param_1 + _DAT_112ff5af0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103be06ac; end: 103be06ff;  */

void FUN_103be06ac(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103be0700; end: 103be070b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103be0700(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ff5af0;
  func_0x000107c61428(unaff_x20 + _DAT_112ff5af0,auStack_48,1,0);
  func_0x000107c61604(unaff_x20 + lVar1,param_1);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 103be070c; end: 103be07e7;  */

void FUN_103be070c(undefined8 param_1,long *param_2)

{
  long unaff_x20;
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_2;
  func_0x000107c61428(unaff_x20 + lVar1,auStack_48,1,0);
  func_0x000107c61604(unaff_x20 + lVar1,param_1);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 103be07e8; end: 103be07eb;  */

void FUN_103be07e8(long *param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  func_0x000107c61604(*(long *)(lVar1 + 0x20) + *(long *)(lVar1 + 0x28),uVar2);
  if ((param_2 & 1) == 0) {
    func_0x000107c614a8(lVar1);
    func_0x000107c615e8(uVar2);
  }
  else {
    func_0x000107c615e8(*(undefined8 *)(lVar1 + 0x18));
    func_0x000107c614a8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 103be07ec; end: 103be0857;  */

void FUN_103be07ec(long *param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  func_0x000107c61604(*(long *)(lVar1 + 0x20) + *(long *)(lVar1 + 0x28),uVar2);
  if ((param_2 & 1) == 0) {
    func_0x000107c614a8(lVar1);
    func_0x000107c615e8(uVar2);
  }
  else {
    func_0x000107c615e8(*(undefined8 *)(lVar1 + 0x18));
    func_0x000107c614a8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 103be0858; end: 103be08b3; -[_TtC25SCCustomStoryMembersScope25SCCustomStoryMembersScope init] */

void FUN_103be0858(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCustomStoryMembersScope.SCCustomStoryMembersScope",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103be0884);
  (*pcVar1)();
}



/* Entry: 103be08b4; end: 103be091f; -[_TtC25SCCustomStoryMembersScope25SCCustomStoryMembersScope .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103be0904: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103be0908) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103be08b4(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ff5ac8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ff5ad0 + 8));
  func_0x000107c61610(param_1 + _DAT_112ff5ad8);
  param_1 = param_1 + _DAT_112ff5ae0;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103be0920; end: 103be0923;  */

void FUN_103be0920(long *param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  func_0x000107c61604(*(long *)(lVar1 + 0x20) + *(long *)(lVar1 + 0x28),uVar2);
  if ((param_2 & 1) == 0) {
    func_0x000107c614a8(lVar1);
    func_0x000107c615e8(uVar2);
  }
  else {
    func_0x000107c615e8(*(undefined8 *)(lVar1 + 0x18));
    func_0x000107c614a8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 103be0924; end: 103be096f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103be0924(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff5b28) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103be0970; end: 103be0acf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103be0970(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *aplStack_90 [2];
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar4 = 0;
  func_0x000100349f74();
  lVar5 = lVar4;
  func_0x000107c610f8();
  func_0x000107c61614(lVar5 + _DAT_112ff5ad8,0);
  lVar3 = _DAT_112ff5ae0;
  func_0x000107c61614(lVar5 + _DAT_112ff5ae0,0);
  func_0x000107c61614(lVar5 + _DAT_112ff5af0,0);
  *(undefined8 *)(lVar5 + _DAT_112ff5ac8) = param_1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_112ff5ad0);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  func_0x000107c61428(lVar5 + lVar3,auStack_68,1,0);
  func_0x000107c61604(lVar5 + lVar3,param_4);
  *(undefined1 *)(lVar5 + _DAT_112ff5ae8) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_78 = lVar5;
  lStack_70 = lVar4;
  func_0x000107c615f0(param_1);
  func_0x000107c61434(param_3);
  plVar6 = &lStack_78;
  func_0x000107c61154(plVar6,puVar2);
  aplStack_90[0] = plVar6;
  func_0x00010008a7c8(&uStack_80,aplStack_90);
  func_0x000100083b20(aplStack_90);
  func_0x000107c61574(uStack_80);
  func_0x000107c615e8(aplStack_90[0]);
  return plVar6;
}



/* Entry: 103be0ad0; end: 103be0b6b; -[_TtC25SCCustomStoryMembersScope33SCCustomStoryMembersScopeServices buildWithUIContainer:publicationId:delegate:] */

void FUN_103be0ad0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_4);
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_103be0970(param_3,param_4,param_2,param_5);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103be0b6c; end: 103be0d27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103be0b6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *aplStack_d0 [2];
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar6 = 0;
  func_0x000100349f74();
  lVar7 = lVar6;
  func_0x000107c610f8();
  lVar3 = _DAT_112ff5ad8;
  func_0x000107c61614(lVar7 + _DAT_112ff5ad8,0);
  lVar4 = _DAT_112ff5ae0;
  func_0x000107c61614(lVar7 + _DAT_112ff5ae0,0);
  lVar5 = _DAT_112ff5af0;
  func_0x000107c61614(lVar7 + _DAT_112ff5af0,0);
  *(undefined8 *)(lVar7 + _DAT_112ff5ac8) = param_1;
  puVar1 = (undefined8 *)(lVar7 + _DAT_112ff5ad0);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  func_0x000107c61428(lVar7 + lVar3,auStack_78,1,0);
  func_0x000107c61604(lVar7 + lVar3,param_5);
  func_0x000107c61428(lVar7 + lVar4,auStack_90,1,0);
  func_0x000107c61604(lVar7 + lVar4,param_4);
  *(undefined1 *)(lVar7 + _DAT_112ff5ae8) = param_6;
  func_0x000107c61428(lVar7 + lVar5,auStack_a8,1,0);
  func_0x000107c61604(lVar7 + lVar5,param_7);
  puVar2 = PTR_s_init_1125d9248;
  lStack_b8 = lVar7;
  lStack_b0 = lVar6;
  func_0x000107c615f0(param_1);
  func_0x000107c61434(param_3);
  plVar8 = &lStack_b8;
  func_0x000107c61154(plVar8,puVar2);
  aplStack_d0[0] = plVar8;
  func_0x00010008a7c8(&uStack_c0,aplStack_d0);
  func_0x000100083b20(aplStack_d0);
  func_0x000107c61574(uStack_c0);
  func_0x000107c615e8(aplStack_d0[0]);
  return plVar8;
}



/* Entry: 103be0d28; end: 103be0e13; -[_TtC25SCCustomStoryMembersScope33SCCustomStoryMembersScopeServices buildWithUIContainer:publicationId:delegate:dataSource:enableViewMode:selectionTracker:] */

void FUN_103be0d28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec(param_4);
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_5);
  uVar1 = param_6;
  func_0x000107c61174(param_6);
  func_0x000107c615f0(param_8);
  func_0x000107c61174(param_1);
  uVar2 = param_3;
  FUN_103be0b6c(param_3,param_4,param_2,param_5,param_6,param_7,param_8);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(param_8);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103be0e14; end: 103be0e73; -[_TtC25SCCustomStoryMembersScope33SCCustomStoryMembersScopeServices init] */

void FUN_103be0e14(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCustomStoryMembersScope.SCCustomStoryMembersScopeServices",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103be0e40);
  (*pcVar1)();
}



/* Entry: 103be0e74; end: 103be0ea3; -[_TtC25SCCustomStoryMembersScope33SCCustomStoryMembersScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103be0e74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ff5b28));
  return;
}



/* Entry: 103be0ea4; end: 103be0eb3; -[SCSharedStoryProfileServices myStoriesDataCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103be0ea4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff5b70));
  return;
}



/* Entry: 103be0eb4; end: 103be0ec3; -[SCSharedStoryProfileServices storyPlaybackCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103be0eb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff5b78));
  return;
}



/* Entry: 103be0ec4; end: 103be0ed3; -[SCSharedStoryProfileServices sharedStoryProfileMembersDataProviding] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103be0ec4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff5b80));
  return;
}



/* Entry: 103be0ed4; end: 103be0ee3; -[SCSharedStoryProfileServices addToStoryCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103be0ed4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff5b88));
  return;
}



/* Entry: 103be0ee4; end: 103be0ef3; -[SCSharedStoryProfileServices playbackManagementDataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103be0ee4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff5b90));
  return;
}



/* Entry: 103be0ef4; end: 103be0f8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103be0ef4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff5b70) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ff5b78) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ff5b80) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ff5b88) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ff5b90) = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103be0f90; end: 103be0faf;  */

void FUN_103be0f90(void)

{
  func_0x000107c61168(&PTR_PTR_112942c70);
  return;
}



/* Entry: 103be0fb0; end: 103be1077; -[SCSharedStoryProfileServices initWithMyStoriesDataCoordinator:storyPlaybackCoordinator:sharedStoryProfileMembersDataProviding:addToStoryCoordinator:playbackManagementDataProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103be0fb0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  *(undefined8 *)(param_1 + _DAT_112ff5b70) = param_3;
  *(undefined8 *)(param_1 + _DAT_112ff5b78) = param_4;
  *(undefined8 *)(param_1 + _DAT_112ff5b80) = param_5;
  *(undefined8 *)(param_1 + _DAT_112ff5b88) = param_6;
  *(undefined8 *)(param_1 + _DAT_112ff5b90) = param_7;
  lVar2 = param_1;
  FUN_103be0f90();
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61154(&lStack_50,puVar1);
  return;
}



/* Entry: 103be1078; end: 103be10d3; -[SCSharedStoryProfileServices init] */

void FUN_103be1078(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSharedStoryProfileServices.SCSharedStoryProfileServices",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103be10a4);
  (*pcVar1)();
}



/* Entry: 103be10d4; end: 103be113b; -[SCSharedStoryProfileServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103be10f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103be1110: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103be10f4) */
/* WARNING: Removing unreachable block (ram,0x000103be1114) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103be10d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff5b70));
  return;
}



/* Entry: 103be113c; end: 103be139f;  */

long FUN_103be113c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103be13a0; end: 103be13ab; -[SCCustomStoryMemberInfoDataModel storyId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103be13a0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ff5bc0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112ff5bc0))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103be13ac; end: 103be13b7; -[SCCustomStoryMemberInfoDataModel storyOwnerId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103be13ac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ff5bc8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112ff5bc8))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103be13b8; end: 103be13ff;  */

void FUN_103be13b8(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103be1400; end: 103be1447; -[SCCustomStoryMemberInfoDataModel storyModeratorsId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103be1400(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ff5bd0);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103be1448; end: 103be1497; -[SCCustomStoryMemberInfoDataModel storyMembers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103be1448(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ff5bd8);
  func_0x000101994830(0);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103be1498; end: 103be153b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103be1498(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff5bc0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff5bc8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ff5bd0) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112ff5bd8) = param_6;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103be153c; end: 103be1623; -[SCCustomStoryMemberInfoDataModel initWithStoryId:storyOwnerId:storyModeratorsId:storyMembers:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103be153c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  uVar4 = param_2;
  func_0x000107c5faec();
  func_0x000107c5fc54(param_5,PTR___sSSN_11034da80);
  uVar3 = 0;
  func_0x000101994830(0);
  func_0x000107c5fc54(param_6,uVar3);
  puVar1 = (undefined8 *)(param_1 + _DAT_112ff5bc0);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_112ff5bc8);
  *puVar1 = param_4;
  puVar1[1] = uVar4;
  *(undefined8 *)(param_1 + _DAT_112ff5bd0) = param_5;
  *(undefined8 *)(param_1 + _DAT_112ff5bd8) = param_6;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103be1624; end: 103be169b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103be1624(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  uVar2 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff5bc0);
  puVar1[1] = param_1[1];
  *puVar1 = uVar2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff5bc8);
  puVar1[1] = uVar4;
  *puVar1 = uVar3;
  uVar2 = param_1[5];
  *(undefined8 *)(unaff_x20 + _DAT_112ff5bd0) = param_1[4];
  *(undefined8 *)(unaff_x20 + _DAT_112ff5bd8) = uVar2;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103be169c; end: 103be169f; -[SCCustomStoryMemberInfoDataModel copyWithZone:] */

void FUN_103be169c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103be16a0; end: 103be16bb; -[SCCustomStoryMemberInfoDataModel description] */

void FUN_103be16a0(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103be16bc; end: 103be1737; -[SCCustomStoryMemberInfoDataModel init] */

void FUN_103be16bc(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCCustomStoryDataModels/SCCustomStoryMemberInfoDataModelWrapper.swift",0x45,2
                      ,0x35,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103be1704);
  (*pcVar1)();
}



/* Entry: 103be1738; end: 103be1797; -[SCCustomStoryMemberInfoDataModel .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103be1758: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103be177c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103be175c) */
/* WARNING: Removing unreachable block (ram,0x000103be1780) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103be1738(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ff5bc0 + 8))
  ;
  return;
}



/* Entry: 103be1798; end: 103be17b7;  */

void FUN_103be1798(void)

{
  func_0x000107c61168(&PTR_PTR_112942d50);
  return;
}



/* Entry: 103be17b8; end: 103be18db; +[SCShareAnonymouslyMetadata metadataWithProfileIdProvider:featureSettingsService:] */

void FUN_103be17b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  uVar1 = param_3;
  func_0x000103be1818(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103be18dc; end: 103be1963; +[SCShareAnonymouslyMetadata updateForMinorUser:profileIdProvider:circumstanceEngine:isPostingOnBehalfOfCreator:] */

void FUN_103be18dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  FUN_103be1964(param_3,param_4,param_6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_4);
  func_0x000107c615e8(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103be1964; end: 103be1a3b;  */

void FUN_103be1964(undefined8 param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((param_3 & 1) != 0) {
    func_0x000107c610f8(PTR_PTR_1126c4ea8);
    func_0x000107c48938();
    return;
  }
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_2 == 0) {
    func_0x000107c61174(param_1);
    return;
  }
  uVar1 = param_2;
  func_0x000107c44b18();
  uVar2 = param_2;
  func_0x000107c4a67c();
  if ((uVar2 & 1) == 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000107c61174(param_1);
      func_0x000107c615e8(param_2);
      return;
    }
  }
  else if ((int)uVar1 != 0) {
    func_0x000107c610f8(PTR_PTR_1126c4ea8);
    goto LAB_103be1a14;
  }
  func_0x000107c610f8(PTR_PTR_1126c4ea8);
LAB_103be1a14:
  func_0x000107c48938();
  func_0x000107c615e8(param_2);
  return;
}



/* Entry: 103be1a3c; end: 103be1a43;  */

undefined8 FUN_103be1a3c(void)

{
  return 1;
}


