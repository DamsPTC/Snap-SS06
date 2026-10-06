/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101ca3b88; end: 101ca3c73; -[_TtC36SCGenAIAISnapsServicesImplementation37SCGenAIAISnapsNotificationServiceImpl triggerCloudSyncWithGenerationId:completion:] */

void FUN_101ca3b88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c60bc4(param_4);
  func_0x000107c5faec(param_3);
  func_0x000107c60bc4(param_4);
  func_0x000107c61174(param_1);
  FUN_101ca4c50(param_3,param_2,param_1,param_4);
  func_0x000107c60bd0(param_4);
  func_0x000107c60bd0(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101ca3c74; end: 101ca40ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ca3c74(ulong *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uStack_a0;
  ulong *puStack_98;
  ulong uStack_90;
  ulong *puStack_88;
  ulong auStack_78 [3];
  
  lVar2 = _DAT_112e12e58;
  uVar14 = *param_1;
  puVar8 = auStack_78;
  func_0x000107c61428(param_2 + _DAT_112e12e58,puVar8,0,0);
  uVar11 = *(undefined8 *)(param_2 + lVar2);
  func_0x000107c61434(uVar11);
  uVar4 = uVar14;
  func_0x000107c5b2d0();
  func_0x000107c61180();
  if (uVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101ca409c);
    (*pcVar3)();
  }
  uVar5 = uVar4;
  func_0x000107c5faec();
  func_0x000107c61170(uVar4);
  puVar9 = puVar8;
  func_0x0001000f66f0(uVar5,puVar8,uVar11);
  func_0x000107c6142c(puVar8);
  func_0x000107c6142c(uVar11);
  if ((uVar5 & 1) != 0) {
    return;
  }
  uVar4 = uVar14;
  func_0x000107c3078c();
  func_0x000107c61180();
  if (uVar4 == 0) {
    return;
  }
  uVar5 = uVar4;
  func_0x000107c43e24();
  func_0x000107c61180();
  if (uVar5 == 0) goto LAB_101ca406c;
  uVar6 = uVar5;
  func_0x000107c5faec();
  func_0x000107c61170(uVar5);
  lVar13 = _DAT_112e12e50;
  puVar8 = &uStack_90;
  func_0x000107c61428(param_2 + _DAT_112e12e50,puVar8,0x20,0);
  lVar12 = *(long *)(param_2 + lVar13);
  if (*(long *)(lVar12 + 0x10) != 0) {
    func_0x000107c61434(lVar12);
    uVar5 = uVar6;
    puVar8 = puVar9;
    func_0x000100029284();
    if (((ulong)puVar8 & 1) != 0) {
      uVar11 = *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar5 * 0x10 + 8);
      func_0x000107c61434(uVar11);
      func_0x000107c614a8(&uStack_90);
      func_0x000107c6142c(uVar11);
      func_0x000107c6142c(puVar9);
      func_0x000107c61170(uVar4);
      func_0x000107c6142c(lVar12);
      return;
    }
    func_0x000107c6142c(lVar12);
  }
  func_0x000107c614a8(&uStack_90);
  uVar5 = uVar14;
  func_0x000107c5b2d0();
  func_0x000107c61180();
  if (uVar5 == 0) {
    func_0x000107c61428(param_2 + lVar13,&uStack_90,0x21,0);
LAB_101ca3e9c:
    func_0x000107c61434(puVar9);
    puVar10 = puVar9;
    func_0x0001014c4e50(uVar6,puVar9);
    puVar8 = puVar10;
    func_0x000107c6142c(puVar9);
    func_0x000107c6142c(puVar10);
  }
  else {
    uVar7 = uVar5;
    func_0x000107c5faec();
    func_0x000107c61170(uVar5);
    func_0x000107c61428(param_2 + lVar13,&uStack_90,0x21,0);
    if (puVar8 == (ulong *)0x0) goto LAB_101ca3e9c;
    func_0x000107c61434(puVar9);
    uVar11 = *(undefined8 *)(param_2 + lVar13);
    func_0x000107c61558(uVar11);
    uStack_a0 = *(ulong *)(param_2 + lVar13);
    *(undefined8 *)(param_2 + lVar13) = 0x8000000000000000;
    func_0x00010018433c(uVar7,puVar8,uVar6,puVar9,uVar11);
    func_0x000107c6142c(puVar9);
    *(ulong *)(param_2 + lVar13) = uStack_a0;
  }
  func_0x000107c614a8(&uStack_90);
  uVar5 = uVar14;
  func_0x000107c5b2d0();
  func_0x000107c61180();
  if (uVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101ca40a0);
    (*pcVar3)();
  }
  uVar7 = uVar5;
  func_0x000107c5faec();
  func_0x000107c61170(uVar5);
  func_0x000107c61428(param_2 + lVar2,&uStack_90,0x21,0);
  func_0x000100403b00(&uStack_a0,uVar7,puVar8);
  func_0x000107c614a8(&uStack_90);
  func_0x000107c6142c(puStack_98);
  lVar2 = _DAT_112e12e68;
  func_0x000107c61428(param_2 + _DAT_112e12e68,&uStack_90,0x20,0);
  lVar13 = *(long *)(param_2 + lVar2);
  if (*(long *)(lVar13 + 0x10) != 0) {
    func_0x000107c61434(lVar13);
    uVar5 = uVar6;
    puVar8 = puVar9;
    func_0x000100029284();
    if (((ulong)puVar8 & 1) != 0) {
      puVar1 = (undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 0x10);
      pcVar3 = (code *)*puVar1;
      uVar11 = puVar1[1];
      func_0x000107c6157c(uVar11);
      func_0x000107c614a8(&uStack_90);
      func_0x000107c6142c(lVar13);
      func_0x000107c5b2d0();
      func_0x000107c61180();
      if (uVar14 != 0) {
        uVar5 = uVar14;
        func_0x000107c5faec();
        func_0x000107c61170(uVar14);
        uStack_a0 = uVar5;
        puStack_98 = puVar8;
        uStack_90 = uVar6;
        puStack_88 = puVar9;
        (*pcVar3)(&uStack_90,&uStack_a0);
        func_0x000107c6142c(puVar8);
        func_0x000107c61428(param_2 + lVar2,&uStack_90,0x21,0);
        puVar8 = puVar9;
        FUN_101ca429c(uVar6,puVar9);
        func_0x000107c614a8(&uStack_90);
        func_0x000107c6142c(puVar9);
        func_0x000107c61574(uVar11);
        func_0x000107c61170(uVar4);
        FUN_101ca51d8(uVar6,puVar8);
        return;
      }
      func_0x000107c61574(uVar11);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101ca40ac);
      (*pcVar3)();
    }
    func_0x000107c6142c(lVar13);
  }
  func_0x000107c614a8(&uStack_90);
  func_0x000107c6142c(puVar9);
LAB_101ca406c:
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 101ca40ac; end: 101ca4183; -[_TtC36SCGenAIAISnapsServicesImplementation37SCGenAIAISnapsNotificationServiceImpl dataSource:didChangeEntries:failedEntries:fetchEntryError:] */

/* WARNING: Possible PIC construction at 0x000101ca4160: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ca4164) */

void FUN_101ca40ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  if (param_4 != 0) {
    uVar1 = 0x112d511e8;
    func_0x0001000285a8(0x112d511e8,&UNK_10d927cd0);
    func_0x000107c5fc54(param_4,uVar1);
  }
  if (param_5 != 0) {
    uVar1 = 0x112d511e8;
    func_0x0001000285a8(0x112d511e8,&UNK_10d927cd0);
    func_0x000107c5fc54(param_5,uVar1);
  }
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_1);
  FUN_101ca4e84(param_4);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_5);
  return;
}



/* Entry: 101ca4184; end: 101ca41e3; -[_TtC36SCGenAIAISnapsServicesImplementation37SCGenAIAISnapsNotificationServiceImpl init] */

void FUN_101ca4184(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCGenAIAISnapsServicesImplementation.SCGenAIAISnapsNotificationServiceImpl",
                      0x4a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ca41b0);
  (*pcVar1)();
}



/* Entry: 101ca41e4; end: 101ca427b; -[_TtC36SCGenAIAISnapsServicesImplementation37SCGenAIAISnapsNotificationServiceImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101ca4240: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ca4244) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ca41e4(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e12e30));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e12e38));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e12e40));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e12e48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112e12e50));
  return;
}



/* Entry: 101ca427c; end: 101ca429b;  */

void FUN_101ca427c(void)

{
  func_0x000107c61168(&PTR_PTR_112800058);
  return;
}



/* Entry: 101ca429c; end: 101ca436f;  */

undefined1  [16] FUN_101ca429c(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long *unaff_x20;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  lVar3 = *unaff_x20;
  func_0x000107c61434(lVar3);
  func_0x000100029284();
  func_0x000107c6142c(lVar3);
  if ((param_2 & 1) == 0) {
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    iVar2 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar3 = *unaff_x20;
    if (iVar2 == 0) {
      func_0x000101ca44cc();
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar3 + 0x30) + param_1 * 0x10 + 8));
    puVar1 = (undefined8 *)(*(long *)(lVar3 + 0x38) + param_1 * 0x10);
    uVar4 = *puVar1;
    uVar5 = puVar1[1];
    func_0x000101ca48f4(param_1,lVar3);
    *unaff_x20 = lVar3;
  }
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = uVar4;
  return auVar6;
}



/* Entry: 101ca4370; end: 101ca4643;  */

void FUN_101ca4370(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,uint param_5)

{
  undefined8 *puVar1;
  ulong *puVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *unaff_x20;
  long lVar10;
  
  lVar10 = *unaff_x20;
  uVar4 = param_3;
  uVar6 = param_4;
  func_0x000100029284();
  lVar7 = *(long *)(lVar10 + 0x10);
  uVar9 = (ulong)~(uint)uVar6 & 1;
  lVar8 = lVar7 + uVar9;
  if (SCARRY8(lVar7,uVar9)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101ca444c);
    (*pcVar3)();
  }
  if (*(long *)(lVar10 + 0x18) < lVar8) {
    FUN_101ca4644(lVar8,param_5 & 1);
    uVar4 = param_3;
    uVar9 = param_4;
    func_0x000100029284();
    if (((uint)uVar6 & 1) != ((uint)uVar9 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101ca4414);
      (*pcVar3)();
    }
  }
  else if ((param_5 & 1) == 0) {
    func_0x000101ca44cc();
    lVar8 = *unaff_x20;
    goto joined_r0x000101ca4460;
  }
  lVar8 = *unaff_x20;
joined_r0x000101ca4460:
  if ((uVar6 & 1) != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x38) + uVar4 * 0x10);
    uVar5 = puVar1[1];
    *puVar1 = param_1;
    puVar1[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar5);
    return;
  }
  lVar7 = lVar8 + (uVar4 >> 6) * 8;
  *(ulong *)(lVar7 + 0x40) = *(ulong *)(lVar7 + 0x40) | 1L << (uVar4 & 0x3f);
  puVar2 = (ulong *)(*(long *)(lVar8 + 0x30) + uVar4 * 0x10);
  *puVar2 = param_3;
  puVar2[1] = param_4;
  puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x38) + uVar4 * 0x10);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (SCARRY8(*(long *)(lVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101ca44cc);
    (*pcVar3)();
  }
  *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_4);
  return;
}



/* Entry: 101ca4644; end: 101ca4aa3;  */

void FUN_101ca4644(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  ulong *puVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 auStack_a8 [72];
  
  lVar16 = *unaff_x20;
  lVar1 = *(long *)(lVar16 + 0x18);
  if (*(long *)(lVar16 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112e12e98;
  func_0x0001000285a8(0x112e12e98,&UNK_10d9ee4a0);
  lVar7 = lVar16;
  func_0x000107c60490(lVar16,lVar1,param_2,uVar6);
  if (*(long *)(lVar16 + 0x10) == 0) {
LAB_101ca48c0:
    func_0x000107c61574(lVar16);
    *unaff_x20 = lVar7;
    return;
  }
  puVar18 = (ulong *)(lVar16 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar16 + 0x20) & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if ((*(byte *)(lVar16 + 0x20) & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar17 = uVar17 & *puVar18;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar17 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101ca48f0);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar17 = 1L << ((ulong)*(byte *)(lVar16 + 0x20) & 0x3f);
            if ((*(byte *)(lVar16 + 0x20) & 0x3f) < 6) {
              *puVar18 = -1L << (uVar17 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar18,uVar17 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar16 + 0x10) = 0;
          }
          goto LAB_101ca48c0;
        }
        uVar17 = puVar18[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar17 == 0);
      uVar9 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
    }
    else {
      uVar9 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
      lVar19 = lVar10;
    }
    lVar10 = (LZCOUNT(uVar9) | lVar19 << 6) * 0x10;
    puVar2 = (undefined8 *)(*(long *)(lVar16 + 0x30) + lVar10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    puVar2 = (undefined8 *)(*(long *)(lVar16 + 0x38) + lVar10);
    uVar21 = puVar2[1];
    uVar20 = *puVar2;
    if ((param_2 & 1) == 0) {
      uVar15 = puVar2[1];
      func_0x000107c61434(uVar3);
      func_0x000107c6157c(uVar15);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101ca48f4);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 0x10);
    puVar2[1] = uVar21;
    *puVar2 = uVar20;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 101ca4aa4; end: 101ca4c4f;  */

ulong FUN_101ca4aa4(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101ca4b88);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101ca4b8c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    uVar4 = param_1;
    func_0x000107c615f0();
    func_0x000107c61494();
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar4 = param_1;
    func_0x000107c61494();
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0x72656c6c61474353,param_4);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101ca4c50);
  (*pcVar2)();
}



/* Entry: 101ca4c50; end: 101ca4e83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ca4c50(long param_1,ulong param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_68 [24];
  
  puVar2 = &UNK_110465d08;
  func_0x000107c613fc(&UNK_110465d08,0x18,7);
  *(long *)(puVar2 + 0x10) = param_4;
  lVar7 = _DAT_112e12e50;
  func_0x000107c61428(param_3 + _DAT_112e12e50,auStack_68,0x20,0);
  lVar7 = *(long *)(param_3 + lVar7);
  lVar8 = *(long *)(lVar7 + 0x10);
  func_0x000107c60bc4(param_4);
  if (lVar8 != 0) {
    func_0x000107c61434(lVar7);
    lVar8 = param_1;
    uVar5 = param_2;
    func_0x000100029284();
    if ((uVar5 & 1) != 0) {
      puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x38) + lVar8 * 0x10);
      uVar4 = *puVar1;
      uVar6 = puVar1[1];
      func_0x000107c61434(uVar6);
      func_0x000107c614a8(auStack_68);
      func_0x000107c6142c(lVar7);
      func_0x000107c5fadc(param_1,param_2);
      func_0x000107c5fadc(uVar4,uVar6);
      (**(code **)(param_4 + 0x10))(param_4,param_1,uVar4);
      func_0x000107c61574(puVar2);
      func_0x000107c6142c(uVar6);
      func_0x000107c61170(param_1);
      func_0x000107c61170(uVar4);
      return;
    }
    func_0x000107c6142c(lVar7);
  }
  func_0x000107c614a8(auStack_68);
  puVar3 = &UNK_110465d30;
  func_0x000107c613fc(&UNK_110465d30,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = 0x101ca5208;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  lVar7 = _DAT_112e12e68;
  func_0x000107c61428(param_3 + _DAT_112e12e68,auStack_68,0x21,0);
  func_0x000107c61434(param_2);
  func_0x000107c6157c(puVar2);
  uVar4 = *(undefined8 *)(param_3 + lVar7);
  func_0x000107c61558(uVar4);
  uVar6 = *(undefined8 *)(param_3 + lVar7);
  *(undefined8 *)(param_3 + lVar7) = 0x8000000000000000;
  FUN_101ca4370(FUN_101ca5210,puVar3,param_1,param_2,uVar4);
  func_0x000107c6142c(param_2);
  *(undefined8 *)(param_3 + lVar7) = uVar6;
  func_0x000107c614a8(auStack_68);
  lVar8 = *(long *)(param_3 + _DAT_112e12e30);
  func_0x000107c3fc48();
  func_0x000107c61180();
  lVar7 = lVar8;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar8);
  if (lVar7 == 0) {
    func_0x000107c61574(puVar2);
  }
  else {
    func_0x000107c43824(lVar7);
    func_0x000107c61574(puVar2);
    func_0x000107c615e8(lVar7);
  }
  return;
}



/* Entry: 101ca4e84; end: 101ca51d7;  */

void FUN_101ca4e84(double param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  long extraout_x12;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 unaff_x20;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  double dVar13;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  code *pcStack_b8;
  long lStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  long lStack_98;
  ulong uStack_90;
  ulong uStack_78;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  lVar8 = (long)&uStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar6 = lVar8 - extraout_x12;
  func_0x000107c5eea0(uVar6);
  func_0x000107c5ee8c();
  pcVar4 = *(code **)(lVar3 + 8);
  dVar13 = param_1;
  (*pcVar4)(uVar6,lVar1);
  FUN_101ca3914();
  if (uVar6 != 0) {
    if (param_2 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101ca51d8);
      (*pcVar4)();
    }
    uVar10 = param_2 & 0xffffffffffffff8;
    uStack_d0 = param_2;
    if (param_2 >> 0x3e == 0) {
      param_2 = *(ulong *)(uVar10 + 0x10);
    }
    else {
      if (-1 < (long)param_2) {
        param_2 = uVar10;
      }
      func_0x000107c60480();
    }
    if (param_2 != 0) {
      uVar11 = 0;
      uStack_90 = uStack_d0 & 0xc000000000000001;
      lStack_98 = uStack_d0 + 0x20;
      uStack_c8 = uVar10;
      uStack_c0 = uVar6;
      pcStack_b8 = pcVar4;
      lStack_b0 = lVar8;
      lStack_a8 = lVar1;
      uStack_a0 = param_2;
      do {
        if (uStack_90 == 0) {
          if (*(ulong *)(uVar10 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101ca5190);
            (*pcVar4)();
          }
          uVar12 = *(ulong *)(lStack_98 + uVar11 * 8);
          func_0x000107c615f0(uVar12);
        }
        else {
          uVar12 = uVar11;
          FUN_101ca4aa4(uVar11,uStack_d0,&PTR_DAT_11269d170,0xee007972746e4579);
        }
        if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101ca518c);
          (*pcVar4)();
        }
        uVar11 = uVar11 + 1;
        uVar9 = uVar12;
        func_0x000107c40bd8();
        func_0x000107c61180();
        if (uVar9 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101ca51d4);
          (*pcVar4)();
        }
        func_0x000107c5ee94(lVar8);
        func_0x000107c61170(uVar9);
        func_0x000107c5ee8c();
        (*pcVar4)(lVar8,lVar1);
        dVar13 = param_1 - dVar13;
        if (86400.0 <= dVar13) {
          func_0x000107c615e8(uVar12);
        }
        else {
          uVar9 = uVar6;
          func_0x000107c430f8();
          func_0x000107c61180();
          if (uVar9 == 0) {
            func_0x000107c615e8(uVar12);
            param_2 = uStack_a0;
          }
          else {
            uVar2 = 0x112d508c0;
            func_0x0001000285a8(0x112d508c0,&UNK_10d917410);
            uVar6 = uVar9;
            func_0x000107c5fc54(uVar9,uVar2);
            func_0x000107c61170(uVar9);
            if (uVar6 >> 0x3e == 0) {
              uVar10 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
            }
            else {
              uVar10 = uVar6 & 0xffffffffffffff8;
              if (0x7fffffffffffffff < uVar6) {
                uVar10 = uVar6;
              }
              func_0x000107c60480();
            }
            if (uVar10 != 0) {
              uVar9 = 0;
              do {
                if ((uVar6 & 0xc000000000000001) == 0) {
                  if (*(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x101ca5188);
                    (*pcVar4)();
                  }
                  uVar7 = *(ulong *)(uVar6 + uVar9 * 8 + 0x20);
                  func_0x000107c615f0(uVar7);
                }
                else {
                  uVar7 = uVar9;
                  FUN_101ca4aa4(uVar9,uVar6,&PTR_DAT_11269d160,0xed000070616e5379);
                }
                if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x101ca5184);
                  (*pcVar4)();
                }
                uVar5 = uVar9 + 1;
                uStack_78 = uVar7;
                FUN_101ca3c74(&uStack_78,unaff_x20);
                func_0x000107c615e8(uVar7);
                uVar9 = uVar9 + 1;
              } while (uVar5 != uVar10);
            }
            func_0x000107c615e8(uVar12);
            func_0x000107c6142c(uVar6);
            pcVar4 = pcStack_b8;
            param_2 = uStack_a0;
            lVar1 = lStack_a8;
            lVar8 = lStack_b0;
            uVar6 = uStack_c0;
            uVar10 = uStack_c8;
          }
        }
      } while (uVar11 != param_2);
    }
    func_0x000107c615e8(uVar6);
  }
  return;
}



/* Entry: 101ca51d8; end: 101ca520f;  */

void FUN_101ca51d8(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 101ca5210; end: 101ca523f;  */

void FUN_101ca5210(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,param_1[1],*param_2,param_2[1]);
  return;
}



/* Entry: 101ca5240; end: 101ca53b7;  */

long FUN_101ca5240(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  func_0x0001009544f8(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000100954518();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x000107c6157c();
  func_0x00010095457c();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61574(uVar1);
  return unaff_x20;
}



/* Entry: 101ca53b8; end: 101ca5403;  */

void FUN_101ca53b8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101ca5404; end: 101ca5437;  */

undefined1  [16] FUN_101ca5404(void)

{
  return ZEXT816(0x110465e10);
}



/* Entry: 101ca5438; end: 101ca5463;  */

undefined8 FUN_101ca5438(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return 0;
}



/* Entry: 101ca5464; end: 101ca54ff;  */

long FUN_101ca5464(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  func_0x0001007ea8fc(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x0001007ea978(param_1,param_2,param_3);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  func_0x0001007eab40();
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  return unaff_x20;
}



/* Entry: 101ca5500; end: 101ca553b;  */

void FUN_101ca5500(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101ca553c; end: 101ca557f;  */

undefined1  [16] FUN_101ca553c(void)

{
  return ZEXT816(0x110465eb8);
}



/* Entry: 101ca5580; end: 101ca55d3;  */

void FUN_101ca5580(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101ca55d4; end: 101ca55e7;  */

void FUN_101ca55d4(void)

{
  puRam0000000112e131d0 = PTR___swiftEmptySetSingleton_11034f1d8;
  return;
}



/* Entry: 101ca55e8; end: 101ca5637;  */

void FUN_101ca55e8(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puRam0000000112e131c0 = puVar1;
  return;
}



/* Entry: 101ca5638; end: 101ca56a7;  */

void FUN_101ca5638(void)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  func_0x000100028750();
  func_0x000100028790(uVar1,0x112e131a0);
  lVar2 = 0;
  func_0x000107c5eea4();
                    /* WARNING: Could not recover jumptable at 0x000101ca56a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(uVar1,1,1,lVar2);
  return;
}



/* Entry: 101ca56a8; end: 101ca570f;  */

undefined1  [16] FUN_101ca56a8(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  lVar1 = *(long *)(unaff_x20 + 0x48);
  if (lVar1 == 0) {
    FUN_101ca5710();
    uVar4 = *(undefined8 *)(unaff_x20 + 0x48);
    *(long *)(unaff_x20 + 0x40) = lVar1;
    *(long *)(unaff_x20 + 0x48) = param_2;
    func_0x000107c61434(param_2);
    func_0x000107c6142c(uVar4);
    lVar2 = 0;
    lVar3 = lVar1;
  }
  else {
    lVar2 = lVar1;
    lVar3 = *(long *)(unaff_x20 + 0x40);
    param_2 = lVar1;
  }
  func_0x000107c61434(lVar2);
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = lVar3;
  return auVar5;
}



/* Entry: 101ca5710; end: 101ca59e3;  */

undefined1  [16] FUN_101ca5710(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  puVar2 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c61168();
  func_0x000107c4c12c();
  func_0x000107c61180();
  uVar3 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f008f30);
  puVar4 = puVar2;
  func_0x000107c4d9bc();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  if (puVar4 == (undefined *)0x0) {
    uStack_98 = 0;
    lStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x000107c60234(&lStack_a0,puVar4);
    func_0x000107c615e8(puVar4);
  }
  uStack_78 = uStack_98;
  lStack_80 = lStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x000101ca6df4(&lStack_80,0x112d387f8,&UNK_10d902650);
  }
  else {
    uVar3 = 0x112d77ec8;
    func_0x0001000285a8(0x112d77ec8,&UNK_10d953980);
    puVar2 = PTR___sypN_11034f1a8;
    plVar5 = &lStack_a8;
    func_0x000107c6147c(plVar5,&lStack_80,PTR___sypN_11034f1a8 + 8,uVar3,6);
    if (((ulong)plVar5 & 1) != 0) {
      uVar14 = *(ulong *)(lStack_a8 + 0x10);
      if (uVar14 != 0) {
        uVar9 = 0;
        do {
          uVar13 = 0;
          uVar3 = 0x112d38270;
          if (*(ulong *)(lStack_a8 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101ca59e4);
            (*pcVar1)();
          }
          lVar8 = *(long *)(lStack_a8 + 0x20 + uVar9 * 8);
          if (*(long *)(lVar8 + 0x10) != 0) {
            func_0x000107c61434(lVar8);
            lVar6 = -0x2fffffffffffffee;
            func_0x000100029284(0xd000000000000012);
            if ((uVar13 & 1) == 0) {
              func_0x000107c6142c(lVar8);
            }
            else {
              func_0x0001000bb420(*(long *)(lVar8 + 0x38) + lVar6 * 0x20,&lStack_80);
              func_0x000107c6142c(lVar8);
              func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
              plVar5 = &lStack_a0;
              func_0x000107c6147c(plVar5,&lStack_80,puVar2 + 8,uVar3,6);
              lVar8 = lStack_a0;
              if (((ulong)plVar5 & 1) != 0) {
                uVar13 = *(ulong *)(lStack_a0 + 0x10);
                if (uVar13 != 0) {
                  uVar12 = 0;
                  puVar10 = (undefined8 *)(lStack_a0 + 0x28);
                  do {
                    if (*(ulong *)(lVar8 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
                      pcVar1 = (code *)SoftwareBreakpoint(1,0x101ca59e0);
                      (*pcVar1)();
                    }
                    uVar3 = puVar10[-1];
                    uVar11 = *puVar10;
                    func_0x000107c61434(uVar11);
                    uVar7 = 0x7461686370616e73;
                    func_0x000107c5fbb4(0x7461686370616e73,0xe800000000000000,uVar3,uVar11);
                    if ((uVar7 & 1) != 0) {
                      func_0x000107c6142c(lStack_a8);
                      func_0x000107c6142c(lVar8);
                      goto LAB_101ca59b4;
                    }
                    func_0x000107c6142c(uVar11);
                    uVar12 = uVar12 + 1;
                    puVar10 = puVar10 + 2;
                  } while (uVar13 != uVar12);
                }
                func_0x000107c6142c(lVar8);
                puVar2 = PTR___sypN_11034f1a8;
              }
            }
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 != uVar14);
      }
      func_0x000107c6142c(lStack_a8);
    }
  }
  uVar3 = 0x7461686370616e73;
  uVar11 = 0xe800000000000000;
LAB_101ca59b4:
  auVar15._8_8_ = uVar11;
  auVar15._0_8_ = uVar3;
  return auVar15;
}



/* Entry: 101ca59e4; end: 101ca5a3f;  */

long FUN_101ca59e4(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x58);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = unaff_x20;
    FUN_101ca5a40();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x58);
    *(long *)(unaff_x20 + 0x58) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar3);
    lVar1 = 0;
  }
  func_0x000107c61174(lVar1);
  return lVar2;
}



/* Entry: 101ca5a40; end: 101ca5b93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101ca5a40(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lStack_50;
  long lStack_48;
  
  plVar6 = &lStack_50;
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x18) + _DAT_112fbfe50);
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + _DAT_113083868);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = uVar8;
  func_0x0001009547dc();
  lVar4 = 0;
  FUN_101ca8b28();
  lVar5 = lVar4;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar5 + _DAT_112e131f0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_112e131f8) = 0;
  *(undefined8 *)(lVar5 + _DAT_112e13200) = 0;
  *(undefined8 *)(lVar5 + _DAT_112e131d8) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_112e131e0) = uVar8;
  *(byte *)(lVar5 + _DAT_112e131e8) = (byte)uVar3 & 1;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  if ((*(byte *)(param_1 + 0x50) & 1) != 0) {
    puVar7 = &UNK_110465fc8;
    func_0x000107c613fc(&UNK_110465fc8,0x18,7);
    func_0x000107c61644(puVar7 + 0x10,param_1);
    puVar1 = (undefined8 *)((long)plVar6 + _DAT_112e131f0);
    uVar3 = *puVar1;
    uVar2 = puVar1[1];
    *puVar1 = 0x101ca6b64;
    puVar1[1] = puVar7;
    func_0x000107c6157c(puVar7);
    func_0x000101ca6b6c(uVar3,uVar2);
    func_0x000107c61574(puVar7);
  }
  return (undefined1 *)plVar6;
}



/* Entry: 101ca5b94; end: 101ca5c0b;  */

void FUN_101ca5b94(undefined8 param_1,undefined8 param_2,uint param_3,long param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_48,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61648();
  if (param_4 != 0) {
    FUN_101ca5c0c(param_1,param_2,param_3 & 1);
    func_0x000107c61574(param_4);
  }
  return;
}



/* Entry: 101ca5c0c; end: 101ca61ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ca5c0c(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  long lVar11;
  long extraout_x8_01;
  ulong uVar12;
  long unaff_x20;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 *puVar17;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar5 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar17 = &stack0xffffffffffffff30 + -extraout_x8;
  lVar5 = 0;
  func_0x000107c5ede0();
  lVar16 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  lVar10 = (long)puVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  func_0x000107c5ec24();
  lVar11 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar15 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uStack_78 = 0;
  uStack_70 = 0xe000000000000000;
  func_0x000107c602fc(0x37);
  func_0x000107c5fb78(0xd000000000000028,0x800000010f008e00);
  func_0x000107c5fb78(param_1,param_2);
  func_0x000107c5fb78(0x67616d497369202c,0xeb00000000203a65);
  bVar4 = (param_3 & 1) == 0;
  uVar1 = 0x65757274;
  if (bVar4) {
    uVar1 = 0x65736c6166;
  }
  uVar2 = 0xe400000000000000;
  if (bVar4) {
    uVar2 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c6142c(uStack_70);
  if (lRam0000000112e131b8 != -1) {
    func_0x000107c61568(0x112e131b8,FUN_101ca55e8);
  }
  uVar2 = uRam0000000112e131c0;
  func_0x000107c4b940(uRam0000000112e131c0);
  if (lRam0000000112e131c8 != -1) {
    func_0x000107c61568(0x112e131c8,FUN_101ca55d4);
  }
  func_0x000107c61428(0x112e131d0,&uStack_78,0,0);
  uVar3 = uRam0000000112e131d0;
  func_0x000107c61434(uRam0000000112e131d0);
  uVar12 = param_1;
  func_0x0001000f66f0(param_1,param_2,uVar3);
  func_0x000107c6142c(uVar3);
  if ((uVar12 & 1) == 0) {
    func_0x000107c61428(0x112e131d0,&uStack_a0,0x21,0);
    func_0x000107c61434(param_2);
    func_0x000100403b00(auStack_88,param_1,param_2);
    func_0x000107c614a8(&uStack_a0);
    func_0x000107c6142c(uStack_80);
    func_0x000107c5d278(uVar2);
    func_0x000107c5ec20(lVar15);
    FUN_101ca56a8();
    func_0x000107c5ec10();
    func_0x000107c5ebf0(0xd00000000000001f,0x800000010f008e30);
    lVar9 = 0x112d70260;
    func_0x0001000285a8(0x112d70260,&UNK_10d93c6a0);
    lVar7 = 0;
    func_0x000107c5ebbc();
    lVar14 = *(long *)(*(long *)(lVar7 + -8) + 0x48);
    uVar12 = (ulong)*(byte *)(*(long *)(lVar7 + -8) + 0x50);
    uVar13 = uVar12 + 0x20 & (uVar12 ^ 0xffffffffffffffff);
    func_0x000107c613fc(lVar9,uVar13 + lVar14 * 4,uVar12 | 7);
    *(undefined8 *)(lVar9 + 0x18) = 8;
    *(undefined8 *)(lVar9 + 0x10) = 4;
    lVar7 = lVar9 + uVar13;
    func_0x000107c5ebb0(lVar7,0x65676170,0xe400000000000000,0x77656976657270,0xe700000000000000);
    uVar2 = 0xe400000000000000;
    if ((param_3 & 1) == 0) {
      uVar2 = 0xe500000000000000;
    }
    func_0x000107c5ebb0(lVar7 + lVar14,0x6567616d695f7369,0xe800000000000000,uVar1,uVar2);
    func_0x000107c6142c(uVar2);
    func_0x000107c5ebb0(lVar7 + lVar14 * 2,0x72656665725f6373,0xeb00000000726572,0xd00000000000001e,
                        0x800000010f008e50);
    func_0x000107c5ebb0(lVar7 + lVar14 * 3,0xd000000000000014,0x800000010f008e70,param_1,param_2);
    func_0x000107c5ebc8(lVar9);
    func_0x000107c5ebe8(puVar17);
    puVar8 = puVar17;
    (**(code **)(lVar16 + 0x30))(puVar17,1,lVar5);
    if ((int)puVar8 == 1) {
      func_0x000101ca6df4(puVar17,0x112d36580,&UNK_10d9016d0);
    }
    else {
      (**(code **)(lVar16 + 0x20))(lVar10,puVar17,lVar5);
      lVar9 = *(long *)(*(long *)(unaff_x20 + 0x18) + _DAT_112fbfe50);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar9 != 0) {
        uVar12 = param_1;
        func_0x000107c5fadc(param_1,param_2);
        func_0x000107c4c4e0(lVar9);
        func_0x000107c615e8(lVar9);
        func_0x000107c61170(uVar12);
      }
      uStack_a0 = 0;
      uStack_98 = 0xe000000000000000;
      func_0x000107c602fc(0x32);
      func_0x000107c6142c(uStack_98);
      uStack_a0 = 0x732064656b72614d;
      uStack_98 = 0xef206e6f69737365;
      func_0x000107c5fb78(param_1,param_2);
      func_0x000107c5fb78(0xd000000000000021,0x800000010f008e90);
      func_0x000107c6142c(uStack_98);
      FUN_101ca6b7c(lVar10);
      (**(code **)(lVar16 + 8))(lVar10,lVar5);
    }
    (**(code **)(lVar11 + 8))(lVar15,lVar6);
  }
  else {
    func_0x000107c5d278(uVar2);
    uStack_a0 = 0;
    uStack_98 = 0xe000000000000000;
    func_0x000107c602fc(0x24);
    func_0x000107c6142c(uStack_98);
    uStack_a0 = 0x206e6f6973736553;
    uStack_98 = 0xe800000000000000;
    func_0x000107c5fb78(param_1,param_2);
    func_0x000107c5fb78(0xd00000000000001a,0x800000010f008ec0);
    func_0x000107c6142c(uStack_98);
  }
  return;
}



/* Entry: 101ca61f0; end: 101ca6313;  */

undefined * FUN_101ca61f0(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  puVar2 = *(undefined **)(unaff_x20 + 0x60);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    (**(code **)(lVar5 + 0x68))
              (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
               *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO10backgroundyA2EmFWC_11034f7d0,lVar1)
    ;
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f8();
    uVar4 = 0xd000000000000034;
    func_0x000107c5fadc(0xd000000000000034,0x800000010f008f70);
    func_0x000107c5f800();
    func_0x000107c470d0();
    func_0x000107c61170(uVar4);
    (**(code **)(lVar5 + 8))
              (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x60);
    *(undefined **)(unaff_x20 + 0x60) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c615e8(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c615f0(puVar2);
  return puVar3;
}



/* Entry: 101ca6314; end: 101ca63af;  */

long FUN_101ca6314(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined1 *)(unaff_x20 + 0x50) = 2;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_4;
  *(undefined8 *)(unaff_x20 + 0x18) = param_5;
  *(undefined8 *)(unaff_x20 + 0x20) = param_6;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  *(undefined8 *)(unaff_x20 + 0x30) = param_3;
  puVar1 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61170(param_1);
  *(undefined **)(unaff_x20 + 0x38) = puVar1;
  return unaff_x20;
}



/* Entry: 101ca63b0; end: 101ca676b;  */

void FUN_101ca63b0(double param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar7;
  code *pcVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 auStack_c0 [2];
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar10 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = (long)puVar10 - extraout_x12;
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar11 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar11 - extraout_x12_00;
  if (lRam0000000112e13188 != -1) {
    func_0x000107c61568(0x112e13188,0x101ca5610);
  }
  uVar4 = uRam0000000112e13190;
  func_0x000107c4b940(uRam0000000112e13190);
  func_0x000107c5eea0(lVar9);
  if (lRam0000000112e13198 != -1) {
    func_0x000107c61568(0x112e13198,FUN_101ca5638);
  }
  func_0x000100028790(lVar1,0x112e131a0);
  func_0x000107c61428();
  func_0x000101ca6dac(lVar1,lVar7,0x112d373d8,&UNK_10d9014c0);
  lVar3 = lVar7;
  (**(code **)(lVar12 + 0x30))(lVar7,1,lVar2);
  if ((int)lVar3 == 1) {
    func_0x000101ca6df4(lVar7,0x112d373d8,&UNK_10d9014c0);
  }
  else {
    (**(code **)(lVar12 + 0x20))(lVar11,lVar7,lVar2);
    func_0x000107c5ee68(lVar11);
    if (param_1 < 1.0) {
      func_0x000107c5d278(uVar4);
      pcVar8 = *(code **)(lVar12 + 8);
      (*pcVar8)(lVar11,lVar2);
      goto LAB_101ca6710;
    }
    (**(code **)(lVar12 + 8))(lVar11,lVar2);
  }
  (**(code **)(lVar12 + 0x10))(puVar10,lVar9,lVar2);
  (**(code **)(lVar12 + 0x38))(puVar10,0,1,lVar2);
  func_0x000107c61428(lVar1,&puStack_a8,0x21,0);
  func_0x000100ed9cbc(puVar10,lVar1);
  func_0x000107c614a8(&puStack_a8);
  func_0x000107c5d278(uVar4);
  if ((param_2 & 1) == 0) {
    FUN_101ca61f0();
    puVar5 = &UNK_110465fc8;
    func_0x000107c613fc(&UNK_110465fc8,0x18,7);
    func_0x000107c61644(puVar5 + 0x10);
    uStack_88 = 0x101ca6acc;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_1000f6b44;
    puStack_90 = &UNK_110466020;
    ppuVar6 = &puStack_a8;
    puStack_80 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    func_0x000107c61574(puStack_80);
    func_0x000107c4e524(uVar4);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c615e8(uVar4);
  }
  else {
    puVar5 = &UNK_110465fc8;
    func_0x000107c613fc(&UNK_110465fc8,0x18,7);
    func_0x000107c61644(puVar5 + 0x10);
    uVar4 = 0x112d518a8;
    func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
    *(undefined8 *)(lVar9 + -0x10) = uVar4;
    uVar4 = 0xc0;
    func_0x0001009548b0(0xc0,0,0x14,3,0,0,&UNK_10d9ee970,puVar5);
    func_0x000107c61574(puVar5);
    func_0x000107c61574(uVar4);
  }
  pcVar8 = *(code **)(lVar12 + 8);
LAB_101ca6710:
  (*pcVar8)(lVar9,lVar2);
  return;
}



/* Entry: 101ca676c; end: 101ca67c3;  */

void FUN_101ca676c(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_101ca63b0(0);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 101ca67c4; end: 101ca67db;  */

void FUN_101ca67c4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101ca6e44,0,0);
  return;
}



/* Entry: 101ca67dc; end: 101ca682f;  */

void FUN_101ca67dc(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101ca6e48;
  plVar1[5] = param_1;
  plVar1[6] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101ca6e44,0,0);
  return;
}



/* Entry: 101ca6830; end: 101ca686b;  */

void FUN_101ca6830(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_101ca63b0(0);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 101ca686c; end: 101ca68ef;  */

void FUN_101ca686c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x10,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    lVar1 = lVar2;
    FUN_101ca59e4();
    func_0x000107c61574(lVar2);
    FUN_101ca6e4c();
    func_0x000107c61170(lVar1);
  }
  *(bool *)*(undefined8 *)(unaff_x22 + 0x28) = lVar2 == 0;
                    /* WARNING: Could not recover jumptable at 0x000101ca68ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101ca68f0; end: 101ca6957;  */

void FUN_101ca68f0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    lVar1 = param_1;
    FUN_101ca59e4();
    func_0x000107c61574(param_1);
    FUN_101ca6e4c();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 101ca6958; end: 101ca6a27;  */

/* WARNING: Possible PIC construction at 0x000101ca6a08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ca6a0c) */

void FUN_101ca6958(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
  func_0x000107c5a9c4();
  func_0x000107c61180();
  func_0x000107c5ed90();
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100dfa5c8(PTR___swiftEmptyArrayStorage_11034f1c8);
  uVar3 = 0;
  func_0x000100dfa6ec(0);
  uVar4 = 0x112d377a8;
  FUN_101ca6d6c(0x112d377a8,&SUB_100dfa6ec,&UNK_10d901780);
  func_0x000107c5f9dc(puVar2,uVar3,PTR___sypN_11034f1a8 + 8,uVar4);
  func_0x000107c6142c(puVar2);
  func_0x000107c4de70(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 101ca6a28; end: 101ca6aa3;  */

void FUN_101ca6a28(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 101ca6aa4; end: 101ca6ac3;  */

void FUN_101ca6aa4(void)

{
  func_0x00010095457c();
  return;
}



/* Entry: 101ca6ac4; end: 101ca6ad3;  */

undefined8 FUN_101ca6ac4(void)

{
  return 0;
}



/* Entry: 101ca6ad4; end: 101ca6b27;  */

void FUN_101ca6ad4(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101ca6b28;
  plVar1[5] = param_1;
  plVar1[6] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101ca686c,0,0);
  return;
}



/* Entry: 101ca6b28; end: 101ca6b63;  */

void FUN_101ca6b28(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101ca6b60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101ca6b64; end: 101ca6b7b;  */

void FUN_101ca6b64(undefined8 param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_101ca5c0c(param_1,param_2,param_3 & 1);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 101ca6b7c; end: 101ca6d3f;  */

void FUN_101ca6b7c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  puVar4 = PTR___s10Foundation3URLVMa_110350988;
  lVar10 = *(long *)(lVar1 + -8);
  lVar8 = *(long *)(lVar10 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = (long)&puStack_80 - (lVar8 + 0xfU & 0xfffffffffffffff0);
  puStack_80 = (undefined *)0x0;
  uStack_78 = 0xe000000000000000;
  func_0x000107c602fc(0x18);
  func_0x000107c6142c(uStack_78);
  puStack_80 = (undefined *)0xd000000000000016;
  uStack_78 = 0x800000010f008ee0;
  uVar2 = 0x112d4b608;
  FUN_101ca6d6c(0x112d4b608,puVar4,PTR___s10Foundation3URLVs23CustomStringConvertibleAAMc_1103509c0)
  ;
  func_0x000107c6057c(lVar1,uVar2);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar2);
  func_0x000107c6142c(uStack_78);
  pcVar3 = "triggerOrphanedMediaDeepLink(url:)";
  func_0x0001000c10c0("triggerOrphanedMediaDeepLink(url:)");
  func_0x000107c61180();
  (**(code **)(lVar10 + 0x10))(lVar7,param_1,lVar1);
  uVar6 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar9 = uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff);
  puVar4 = &UNK_110466058;
  func_0x000107c613fc(&UNK_110466058,uVar9 + lVar8,uVar6 | 7);
  (**(code **)(lVar10 + 0x20))(puVar4 + uVar9,lVar7,lVar1);
  pcStack_60 = FUN_101ca6d40;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_110466070;
  ppuVar5 = &puStack_80;
  puStack_58 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c61574(puStack_58);
  func_0x000107c4e524(pcVar3);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c615e8(pcVar3);
  return;
}



/* Entry: 101ca6d40; end: 101ca6d6b;  */

/* WARNING: Possible PIC construction at 0x000101ca6a08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ca6a0c) */

void FUN_101ca6d40(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c5ede0();
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
  func_0x000107c5a9c4();
  func_0x000107c61180();
  func_0x000107c5ed90();
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100dfa5c8(PTR___swiftEmptyArrayStorage_11034f1c8);
  uVar3 = 0;
  func_0x000100dfa6ec(0);
  uVar4 = 0x112d377a8;
  FUN_101ca6d6c(0x112d377a8,&SUB_100dfa6ec,&UNK_10d901780);
  func_0x000107c5f9dc(puVar2,uVar3,PTR___sypN_11034f1a8 + 8,uVar4);
  func_0x000107c6142c(puVar2);
  func_0x000107c4de70(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 101ca6d6c; end: 101ca6e33;  */

void FUN_101ca6d6c(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 101ca6e34; end: 101ca6e4b;  */

void FUN_101ca6e34(long param_1,long param_2)

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



/* Entry: 101ca6e4c; end: 101ca702f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ca6e4c(void)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  if (*(char *)(unaff_x20 + _DAT_112e131e8) == '\x01') {
    puVar1 = &UNK_1104660c0;
    func_0x000107c613fc(&UNK_1104660c0,0x18,7);
    func_0x000107c61614(puVar1 + 0x10);
    func_0x000107c6157c(puVar1);
    func_0x000101ca7378(0x101ca8b6c,puVar1);
    func_0x000107c61578(puVar1,2);
  }
  else {
    lVar2 = *(long *)(unaff_x20 + _DAT_112e131d8);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c3fb10();
      func_0x000107c615e8(lVar2);
    }
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_112e131d8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    puVar1 = &UNK_1104660c0;
    func_0x000107c613fc(&UNK_1104660c0,0x18,7);
    func_0x000107c61614(puVar1 + 0x10);
    pcStack_40 = FUN_101ca8b48;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    pcStack_50 = FUN_101ca77f8;
    puStack_48 = &UNK_1104660d8;
    puStack_38 = puVar1;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(puStack_38);
    func_0x000107c4410c(lVar2);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 101ca7030; end: 101ca7163;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101ca7030(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  long unaff_x20;
  long lVar6;
  
  lVar2 = 0;
  func_0x000107c5f804();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar1 = _DAT_112e13200;
  puVar3 = *(undefined **)(unaff_x20 + _DAT_112e13200);
  puVar4 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    (**(code **)(lVar6 + 0x68))
              (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
               *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,
               lVar2);
    puVar4 = PTR_PTR_1126ae790;
    func_0x000107c610f8();
    uVar5 = 0xd000000000000023;
    func_0x000107c5fadc(0xd000000000000023,0x800000010f009110);
    func_0x000107c5f800();
    func_0x000107c470d0();
    func_0x000107c61170(uVar5);
    (**(code **)(lVar6 + 8))
              (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar4;
    func_0x000107c61174(puVar4);
    func_0x000107c61170(uVar5);
    puVar3 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar3);
  return puVar4;
}



/* Entry: 101ca7164; end: 101ca726b;  */

void FUN_101ca7164(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  lVar1 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c6157c(param_1);
    FUN_101ca726c(0x101caa5b4,param_1);
    func_0x000107c61170(lVar1);
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 101ca726c; end: 101ca749b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ca726c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  lVar1 = *(long *)(unaff_x20 + _DAT_112e131d8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    puVar2 = &UNK_1104660c0;
    func_0x000107c613fc(&UNK_1104660c0,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    puVar3 = &UNK_110466250;
    func_0x000107c613fc(&UNK_110466250,0x28,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(undefined8 *)(puVar3 + 0x18) = param_1;
    *(undefined8 *)(puVar3 + 0x20) = param_2;
    pcStack_50 = FUN_101caa5f4;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    pcStack_60 = FUN_101ca80b0;
    puStack_58 = &UNK_110466268;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    puVar2 = puStack_48;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(puVar2);
    func_0x000107c43f48(lVar1);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 101ca749c; end: 101ca77f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ca749c(long param_1,long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long extraout_x8;
  long lVar9;
  long extraout_x12;
  long extraout_x12_00;
  long lVar10;
  ulong *puVar11;
  long lVar12;
  ulong uStack_e0;
  ulong *puStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  code *pcStack_b8;
  code *pcStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar11 = (ulong *)((long)&uStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = (long)puVar11 - extraout_x12;
  lStack_c0 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    puStack_98 = (undefined *)0x0;
    uStack_90 = 0xe000000000000000;
    func_0x000107c602fc(0x21);
    func_0x000107c6142c(uStack_90);
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uStack_88 = 0xd00000000000001f;
    uStack_80 = 0x800000010f0091e0;
    lVar12 = *(long *)(param_1 + 0x10);
    if (lVar12 == 0) {
      puVar8 = PTR___sSSN_11034da80;
      func_0x000107c5fc58(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar2);
      func_0x000107c6142c(puVar8);
      func_0x000107c6142c(uStack_80);
    }
    else {
      puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
      uStack_e0 = lVar9 - extraout_x12_00;
      puStack_d8 = puVar11;
      lStack_d0 = param_2;
      func_0x000100403514(0,lVar12,0);
      param_1 = param_1 + ((ulong)*(byte *)(lVar10 + 0x50) + 0x20 &
                          ((ulong)*(byte *)(lVar10 + 0x50) ^ 0xffffffffffffffff));
      lStack_a8 = *(long *)(lVar10 + 0x48);
      pcStack_b0 = *(code **)(lVar10 + 0x10);
      lVar9 = param_1;
      lStack_c8 = lVar10;
      lStack_a0 = lVar12;
      do {
        puVar2 = puStack_98;
        lVar6 = lStack_c0;
        lVar10 = lStack_c8;
        lVar4 = lStack_c0;
        lVar7 = lVar9;
        (*pcStack_b0)(lStack_c0,lVar9,lVar3);
        func_0x000107c5ed88();
        pcStack_b8 = *(code **)(lVar10 + 8);
        (*pcStack_b8)(lVar6,lVar3);
        uVar1 = *(ulong *)(puVar2 + 0x10);
        puStack_98 = puVar2;
        if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
          func_0x000100403514(1 < *(ulong *)(puVar2 + 0x18),uVar1 + 1,1);
        }
        puVar2 = puStack_98;
        lVar10 = lStack_c8;
        *(ulong *)(puStack_98 + 0x10) = uVar1 + 1;
        *(long *)(puStack_98 + uVar1 * 0x10 + 0x20) = lVar4;
        *(long *)(puStack_98 + uVar1 * 0x10 + 0x28) = lVar7;
        lVar9 = lVar9 + lStack_a8;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      puVar8 = PTR___sSSN_11034da80;
      func_0x000107c5fc58(puStack_98,PTR___sSSN_11034da80);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar2);
      func_0x000107c6142c(puVar8);
      func_0x000107c6142c(uStack_80);
      param_2 = lStack_d0;
      puVar11 = puStack_d8;
      uVar1 = uStack_e0;
      lVar9 = _DAT_112e131d8;
      puVar2 = PTR__swift_isaMask_11034f488;
      do {
        (*pcStack_b0)(uVar1,param_1,lVar3);
        puVar5 = puVar11;
        (**(code **)(lVar10 + 0x20))(puVar11,uVar1,lVar3);
        func_0x000101ca6fa8();
        (**(code **)((*(ulong *)puVar2 & *puVar5) + 0x60))(puVar11);
        func_0x000107c61170(puVar5);
        lVar12 = *(long *)(param_2 + lVar9);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar12 != 0) {
          lVar6 = lVar12;
          func_0x000107c5ed90();
          func_0x000107c4c4dc(lVar12);
          func_0x000107c615e8(lVar12);
          func_0x000107c61170(lVar6);
        }
        (*pcStack_b8)(puVar11,lVar3);
        param_1 = param_1 + lStack_a8;
        lStack_a0 = lStack_a0 + -1;
      } while (lStack_a0 != 0);
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 101ca77f8; end: 101ca7803;  */

void FUN_101ca77f8(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = 0;
  (*(code *)PTR___s10Foundation3URLVMa_110350988)(0);
  func_0x000107c5fc54(param_2,uVar3);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101ca7804; end: 101ca792f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ca7804(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e131d8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    puVar3 = &UNK_1104660c0;
    func_0x000107c613fc(&UNK_1104660c0,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    puVar4 = &UNK_110466200;
    func_0x000107c613fc(&UNK_110466200,0x38,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(undefined8 *)(puVar4 + 0x18) = param_2;
    *(undefined8 *)(puVar4 + 0x20) = param_3;
    *(undefined8 *)(puVar4 + 0x28) = param_1;
    *(long *)(puVar4 + 0x30) = lVar1;
    uStack_60 = 0x101caa684;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    pcStack_70 = FUN_101ca80b0;
    puStack_68 = &UNK_110466218;
    puStack_58 = puVar4;
    func_0x000107c60bc4(&puStack_80);
    puVar3 = puStack_58;
    func_0x000107c6157c(param_3);
    func_0x000107c61574(puVar3);
    func_0x000107c441a8(lVar2);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 101ca7930; end: 101ca802f;  */

/* WARNING: Removing unreachable block (ram,0x000101ca8024) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ca7930(undefined *param_1,long param_2,code *param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  char *pcVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  long extraout_x8;
  long lVar15;
  ulong uVar16;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar5 = 0;
  func_0x000107c5ede0();
  lVar15 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    (*param_3)();
    return;
  }
  uVar16 = (ulong)param_1 >> 0x3e;
  if (uVar16 == 0) {
    puVar6 = *(undefined **)((undefined *)((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar6 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if (((ulong)param_1 & 0x8000000000000000) != 0) {
      puVar6 = param_1;
    }
    func_0x000107c60480();
  }
  if (puVar6 == (undefined *)0x0) {
    if (param_5 < 3) {
      lVar5 = *(long *)(param_2 + _DAT_112e131d8);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar5 != 0) {
        lVar15 = lVar5;
        func_0x000107c44720();
        func_0x000107c615e8(lVar5);
        if ((int)lVar15 != 0) {
          puStack_b8 = (undefined *)0x0;
          lStack_b0 = -0x2000000000000000;
          func_0x000107c602fc(0x42);
          func_0x000107c5fb78(0xd00000000000002f,0x800000010f0090e0);
          func_0x000107c5fddc(0x3ff0000000000000,&puStack_b8,
                              PTR___ss26DefaultStringInterpolationVN_11034ec00,
                              PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08)
          ;
          func_0x000107c5fb78(0x6d65747461282073,0xeb00000000207470);
          puVar13 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
          puVar6 = PTR___sSiN_11034deb0;
          puVar7 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
          puStack_80 = (undefined *)param_5;
          func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00)
          ;
          func_0x000107c5fb78();
          func_0x000107c6142c(puVar7);
          func_0x000107c5fb78(0x2f,0xe100000000000000);
          puStack_80 = (undefined *)0x3;
          func_0x000107c6057c(puVar6,puVar13);
          func_0x000107c5fb78();
          func_0x000107c6142c(puVar13);
          func_0x000107c5fb78(0x29,0xe100000000000000);
          lVar5 = lStack_b0;
          func_0x000107c6142c(lStack_b0);
          FUN_101ca7030();
          puVar6 = &UNK_1104660c0;
          func_0x000107c613fc(&UNK_1104660c0,0x18,7);
          func_0x000107c61614(puVar6 + 0x10,param_2);
          puVar13 = &UNK_1104661b0;
          func_0x000107c613fc(&UNK_1104661b0,0x30,7);
          *(undefined **)(puVar13 + 0x10) = puVar6;
          *(long *)(puVar13 + 0x18) = param_5;
          *(code **)(puVar13 + 0x20) = param_3;
          *(undefined8 *)(puVar13 + 0x28) = param_4;
          pcStack_98 = FUN_101caa588;
          puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
          lStack_b0 = 0x42000000;
          puStack_a8 = &UNK_1000f6b44;
          puStack_a0 = &UNK_1104661c8;
          ppuVar14 = &puStack_b8;
          puStack_90 = puVar13;
          func_0x000107c60bc4(ppuVar14);
          puVar6 = puStack_90;
          func_0x000107c6157c(param_4);
          func_0x000107c61574(puVar6);
          func_0x000107c4e528(0x3ff0000000000000,lVar5);
          func_0x000107c60bd0(ppuVar14);
          func_0x000107c61170(param_2);
          param_2 = lVar5;
          goto LAB_101ca7fec;
        }
      }
    }
    (*param_3)();
    goto LAB_101ca7fec;
  }
  puStack_b8 = (undefined *)0x0;
  lStack_b0 = 0xe000000000000000;
  func_0x000107c602fc(0x1d);
  func_0x000107c6142c(lStack_b0);
  puStack_b8 = (undefined *)0x20646e756f66;
  lStack_b0 = 0xe600000000000000;
  pcStack_c0 = param_3;
  if (uVar16 == 0) {
    puVar6 = *(undefined **)((undefined *)((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar6 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if (((ulong)param_1 & 0x8000000000000000) != 0) {
      puVar6 = param_1;
    }
    func_0x000107c60480();
  }
  puVar13 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  puStack_80 = puVar6;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar13);
  puVar6 = (undefined *)0x800000010f009040;
  func_0x000107c5fb78(0xd000000000000015);
  func_0x000107c6142c(lStack_b0);
  if (uVar16 == 0) {
    func_0x000107c61434(param_1);
    puVar7 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
  }
  else {
    puVar13 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if (((ulong)param_1 & 0x8000000000000000) != 0) {
      puVar13 = param_1;
    }
    func_0x000107c60480();
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar13 != (undefined *)0x0) {
      func_0x000107c61434(param_1);
      puVar7 = puVar13;
      FUN_101ca8e94(puVar13,0);
      puVar6 = puVar13;
      FUN_101caa430(puVar7 + 0x20);
      func_0x000107c6142c();
      if (param_1 != puVar13) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101ca7af4);
        (*pcVar3)();
      }
    }
  }
  puStack_b8 = puVar7;
  FUN_101ca8f14(&puStack_b8);
  puVar13 = puStack_b8;
  if (((long)puStack_b8 < 0) || (((ulong)puStack_b8 >> 0x3e & 1) != 0)) {
    puVar7 = puStack_b8;
    func_0x000107c60480();
    if (puVar7 == (undefined *)0x0) goto LAB_101ca7fd4;
LAB_101ca7b24:
    uStack_c8 = param_4;
    if (((ulong)puVar13 & 0xc000000000000001) == 0) {
      if (*(long *)(puVar13 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101ca8024);
        (*pcVar3)();
      }
      lVar8 = *(long *)(puVar13 + 0x20);
      func_0x000107c61174();
    }
    else {
      lVar8 = 0;
      puVar6 = puVar13;
      FUN_101ca8bd4();
    }
    func_0x000107c61574();
    func_0x000107c5eda8(auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000107c5ed88();
    puStack_b8 = (undefined *)0x0;
    lStack_b0 = 0xe000000000000000;
    func_0x000107c602fc(0x4b);
    func_0x000107c5fb78(0xd00000000000003c,0x800000010f009060);
    func_0x000107c5fb78(puVar13,puVar6);
    func_0x000107c5fb78(0x67616d497369202c,0xeb00000000203a65);
    bVar4 = *(char *)(lVar8 + _DAT_11380c070) == '\0';
    uVar1 = 0x65757274;
    if (bVar4) {
      uVar1 = 0x65736c6166;
    }
    uVar2 = 0xe400000000000000;
    if (bVar4) {
      uVar2 = 0xe500000000000000;
    }
    func_0x000107c5fb78(uVar1,uVar2);
    func_0x000107c6142c(uVar2);
    func_0x000107c6142c(lStack_b0);
    lVar10 = _DAT_112e131d8;
    lVar9 = *(long *)(param_2 + _DAT_112e131d8);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar9 != 0) {
      puVar7 = puVar13;
      func_0x000107c5fadc(puVar13,puVar6);
      func_0x000107c4c4e0(lVar9);
      func_0x000107c615e8(lVar9);
      func_0x000107c61170(puVar7);
    }
    lVar10 = *(long *)(param_2 + lVar10);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar10 != 0) {
      puVar7 = puVar13;
      func_0x000107c5fadc(puVar13,puVar6);
      func_0x000107c3ef2c(lVar10);
      func_0x000107c615e8(lVar10);
      func_0x000107c61170(puVar7);
    }
    pcVar11 = "checkForOrphanedMediaWithRetry(attempt:completion:)";
    func_0x0001000c10c0("checkForOrphanedMediaWithRetry(attempt:completion:)");
    func_0x000107c61180();
    puVar7 = &UNK_1104660c0;
    func_0x000107c613fc(&UNK_1104660c0,0x18,7);
    func_0x000107c61614(puVar7 + 0x10,param_2);
    puVar12 = &UNK_110466160;
    func_0x000107c613fc(&UNK_110466160,0x30,7);
    *(undefined **)(puVar12 + 0x10) = puVar7;
    *(undefined **)(puVar12 + 0x18) = puVar13;
    *(undefined **)(puVar12 + 0x20) = puVar6;
    *(long *)(puVar12 + 0x28) = lVar8;
    pcStack_98 = (code *)0x101caa668;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    lStack_b0 = 0x42000000;
    puStack_a8 = &UNK_1000f6b44;
    puStack_a0 = &UNK_110466178;
    ppuVar14 = &puStack_b8;
    puStack_90 = puVar12;
    func_0x000107c60bc4(ppuVar14);
    puVar6 = puStack_90;
    func_0x000107c61174(lVar8);
    func_0x000107c61574(puVar6);
    func_0x000107c4e524(pcVar11);
    func_0x000107c60bd0(ppuVar14);
    func_0x000107c61170(lVar8);
    func_0x000107c615e8(pcVar11);
    (**(code **)(lVar15 + 8))(auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar5);
  }
  else {
    if (*(long *)(puStack_b8 + 0x10) != 0) goto LAB_101ca7b24;
LAB_101ca7fd4:
    func_0x000107c61574(puVar13);
  }
  (*pcStack_c0)();
LAB_101ca7fec:
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 101ca8030; end: 101ca80af;  */

void FUN_101ca8030(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    if (SCARRY8(param_2,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101ca80b0);
      (*pcVar1)();
    }
    FUN_101ca7804(param_2 + 1,param_3,param_4);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 101ca80b0; end: 101ca80bb;  */

void FUN_101ca80b0(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = 0;
  (*(code *)&SUB_1039abe88)(0);
  func_0x000107c5fc54(param_2,uVar3);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101ca80bc; end: 101ca8117;  */

void FUN_101ca80bc(long param_1,undefined8 param_2,code *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = 0;
  (*param_3)(0);
  func_0x000107c5fc54(param_2,uVar3);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101ca8118; end: 101ca8507;  */

/* WARNING: Removing unreachable block (ram,0x000101ca84fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ca8118(undefined *param_1,long param_2,code *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  long extraout_x8;
  undefined *puVar13;
  long lVar14;
  undefined1 auStack_c0 [8];
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined auStack_78 [24];
  
  lVar5 = 0;
  func_0x000107c5ede0();
  lVar14 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  puVar12 = auStack_78;
  func_0x000107c61428(param_2 + 0x10,puVar12,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    (*param_3)();
    return;
  }
  if ((ulong)param_1 >> 0x3e == 0) {
    if (*(long *)((undefined *)((ulong)param_1 & 0xffffffffffffff8) + 0x10) == 0)
    goto LAB_101ca84ac;
    func_0x000107c61434(param_1);
    puStack_b0 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
  }
  else {
    puVar11 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      puVar11 = param_1;
    }
    puVar13 = puVar11;
    func_0x000107c60480();
    if (puVar13 == (undefined *)0x0) goto LAB_101ca84ac;
    func_0x000107c60480();
    puStack_b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar11 != (undefined *)0x0) {
      func_0x000107c61434(param_1);
      puVar13 = puVar11;
      FUN_101ca8e94(puVar11,0);
      puVar12 = puVar11;
      FUN_101caa430(puVar13 + 0x20);
      func_0x000107c6142c();
      puStack_b0 = puVar13;
      if (param_1 != puVar11) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101ca8498);
        (*pcVar3)();
      }
    }
  }
  FUN_101ca8f14(&puStack_b0);
  puVar11 = puStack_b0;
  if (((long)puStack_b0 < 0) || (((ulong)puStack_b0 >> 0x3e & 1) != 0)) {
    puVar13 = puStack_b0;
    func_0x000107c60480();
  }
  else {
    puVar13 = *(undefined **)(puStack_b0 + 0x10);
  }
  if (puVar13 == (undefined *)0x0) {
    func_0x000107c61574(puVar11);
  }
  else {
    pcStack_b8 = param_3;
    if (((ulong)puVar11 & 0xc000000000000001) == 0) {
      if (*(long *)(puVar11 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101ca84f0);
        (*pcVar3)();
      }
      lVar6 = *(long *)(puVar11 + 0x20);
      func_0x000107c61174();
    }
    else {
      lVar6 = 0;
      puVar12 = puVar11;
      FUN_101ca8bd4();
    }
    func_0x000107c61574();
    func_0x000107c5eda8(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000107c5ed88();
    puStack_b0 = (undefined *)0x0;
    uStack_a8 = 0xe000000000000000;
    func_0x000107c602fc(0x52);
    func_0x000107c5fb78(0xd000000000000043,0x800000010f009160);
    func_0x000107c5fb78(puVar11,puVar12);
    func_0x000107c5fb78(0x67616d497369202c,0xeb00000000203a65);
    bVar4 = *(char *)(lVar6 + _DAT_11380c070) == '\0';
    uVar1 = 0x65757274;
    if (bVar4) {
      uVar1 = 0x65736c6166;
    }
    uVar2 = 0xe400000000000000;
    if (bVar4) {
      uVar2 = 0xe500000000000000;
    }
    func_0x000107c5fb78(uVar1,uVar2);
    func_0x000107c6142c(uVar2);
    func_0x000107c6142c(uStack_a8);
    lVar7 = *(long *)(param_2 + _DAT_112e131d8);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar7 != 0) {
      puVar13 = puVar11;
      func_0x000107c5fadc(puVar11,puVar12);
      func_0x000107c4c4e0(lVar7);
      func_0x000107c615e8(lVar7);
      func_0x000107c61170(puVar13);
    }
    pcVar8 = "checkForCachedOrphanedMedia(completion:)";
    func_0x0001000c10c0("checkForCachedOrphanedMedia(completion:)");
    func_0x000107c61180();
    puVar13 = &UNK_1104660c0;
    func_0x000107c613fc(&UNK_1104660c0,0x18,7);
    func_0x000107c61614(puVar13 + 0x10,param_2);
    puVar9 = &UNK_1104662a0;
    func_0x000107c613fc(&UNK_1104662a0,0x30,7);
    *(undefined **)(puVar9 + 0x10) = puVar13;
    *(undefined **)(puVar9 + 0x18) = puVar11;
    *(undefined **)(puVar9 + 0x20) = puVar12;
    *(long *)(puVar9 + 0x28) = lVar6;
    uStack_90 = 0x101caa634;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0x42000000;
    puStack_a0 = &UNK_1000f6b44;
    puStack_98 = &UNK_1104662b8;
    ppuVar10 = &puStack_b0;
    puStack_88 = puVar9;
    func_0x000107c60bc4(ppuVar10);
    puVar12 = puStack_88;
    func_0x000107c61174(lVar6);
    func_0x000107c61574(puVar12);
    func_0x000107c4e524(pcVar8);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c61170(lVar6);
    func_0x000107c615e8(pcVar8);
    (**(code **)(lVar14 + 8))(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar5);
    param_3 = pcStack_b8;
  }
LAB_101ca84ac:
  (*param_3)();
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 101ca8508; end: 101ca8997;  */

/* WARNING: Removing unreachable block (ram,0x000101ca8870) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101ca8508(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long unaff_x21;
  long lVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_b8 [88];
  
  lVar1 = 0;
  func_0x000107c5ecc4();
  lStack_120 = *(long *)(lVar1 + -8);
  lStack_118 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_120 + 0x40));
  lVar7 = (long)&lStack_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = 0x112d373d8;
  lStack_110 = lVar7 - extraout_x12;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar8 = (lVar7 - extraout_x12) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar8 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar9 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar14 - extraout_x12_02;
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar13 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar10 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar10 - extraout_x12_03;
  lVar1 = 0x112da3000;
  func_0x0001000285a8(0x112da3000,&UNK_10db90480);
  lVar3 = lVar1;
  func_0x000107c61534();
  uStack_f8 = 2;
  uStack_100 = 1;
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  uVar4 = *(undefined8 *)PTR__NSURLCreationDateKey_11034ab00;
  *(undefined8 *)(lVar3 + 0x20) = uVar4;
  func_0x000107c61174();
  func_0x000107c61174();
  lVar5 = lVar3;
  uStack_108 = uVar4;
  func_0x0001014a3020(lVar3);
  func_0x000107c61588(lVar3);
  FUN_101a30eb4((undefined8 *)(lVar3 + 0x20));
  lVar3 = lStack_110;
  func_0x000107c5ed78(lStack_110,lVar5);
  if (unaff_x21 == 0) {
    func_0x000107c6142c(lVar5);
    func_0x000107c5ecb0(lVar11);
    (**(code **)(lStack_120 + 8))(lVar3,lStack_118);
  }
  else {
    func_0x000107c614ac(unaff_x21);
    func_0x000107c6142c(lVar5);
    (**(code **)(lVar13 + 0x38))(lVar11,1,1,lVar2);
  }
  func_0x0001003a4c00(lVar11,lVar14);
  pcVar12 = *(code **)(lVar13 + 0x30);
  lVar3 = lVar14;
  (*pcVar12)(lVar14,1,lVar2);
  if ((int)lVar3 == 1) {
    func_0x000107c5ee60(lVar6);
    lVar3 = lVar14;
    (*pcVar12)(lVar14,1,lVar2);
    if ((int)lVar3 != 1) {
      func_0x0001000d1dcc(lVar14);
    }
  }
  else {
    (**(code **)(lVar13 + 0x20))(lVar6,lVar14,lVar2);
  }
  func_0x000107c61534(lVar1,auStack_b8);
  *(undefined8 *)(lVar1 + 0x18) = uStack_f8;
  *(undefined8 *)(lVar1 + 0x10) = uStack_100;
  *(undefined8 *)(lVar1 + 0x20) = uStack_108;
  lVar3 = lVar1;
  func_0x0001014a3020();
  func_0x000107c61588(lVar1);
  FUN_101a30eb4((undefined8 *)(lVar1 + 0x20));
  func_0x000107c5ed78(lVar7,lVar3);
  func_0x000107c6142c(lVar3);
  func_0x000107c5ecb0(lVar9);
  (**(code **)(lStack_120 + 8))(lVar7,lStack_118);
  func_0x0001003a4c00(lVar9,lVar8);
  lVar1 = lVar8;
  (*pcVar12)(lVar8,1,lVar2);
  if ((int)lVar1 == 1) {
    func_0x000107c5ee60(lVar10);
    lVar1 = lVar8;
    (*pcVar12)(lVar8,1,lVar2);
    if ((int)lVar1 != 1) {
      func_0x0001000d1dcc(lVar8);
    }
  }
  else {
    (**(code **)(lVar13 + 0x20))(lVar10,lVar8,lVar2);
  }
  lVar1 = lVar6;
  func_0x000107c5ee74(lVar6,lVar10);
  pcVar12 = *(code **)(lVar13 + 8);
  (*pcVar12)(lVar10,lVar2);
  (*pcVar12)(lVar6,lVar2);
  return (uint)lVar1 & 1;
}



/* Entry: 101ca8998; end: 101ca8a5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ca8998(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    pcVar1 = *(code **)(param_1 + _DAT_112e131f0);
    if (pcVar1 == (code *)0x0) {
      func_0x000107c61170();
    }
    else {
      uVar2 = ((undefined8 *)(param_1 + _DAT_112e131f0))[1];
      func_0x000101caa594(pcVar1,uVar2);
      func_0x000107c61170(param_1);
      (*pcVar1)(param_2,param_3,*(undefined1 *)(param_4 + _DAT_11380c070));
      func_0x000101ca6b6c(pcVar1,uVar2);
    }
  }
  return;
}



/* Entry: 101ca8a5c; end: 101ca8abb; -[_TtC35LockedCameraCaptureExtensionManager43LockedCameraCaptureExtensionManagerWorkflow init] */

void FUN_101ca8a5c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LockedCameraCaptureExtensionManager.LockedCameraCaptureExtensionManagerWorkflow"
                      ,0x4f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ca8a88);
  (*pcVar1)();
}



/* Entry: 101ca8abc; end: 101ca8b27; -[_TtC35LockedCameraCaptureExtensionManager43LockedCameraCaptureExtensionManagerWorkflow .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101ca8ad8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ca8b0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ca8adc) */
/* WARNING: Removing unreachable block (ram,0x000101ca8b10) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ca8abc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e131d8));
  return;
}



/* Entry: 101ca8b28; end: 101ca8b47;  */

void FUN_101ca8b28(void)

{
  func_0x000107c61168(&PTR_PTR_112800150);
  return;
}



/* Entry: 101ca8b48; end: 101ca8b77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ca8b48(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  long lVar7;
  undefined *puVar8;
  long extraout_x8;
  long lVar9;
  long extraout_x12;
  long extraout_x12_00;
  long lVar10;
  long unaff_x20;
  ulong *puVar11;
  long lVar12;
  ulong uStack_e0;
  ulong *puStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  code *pcStack_b8;
  code *pcStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar11 = (ulong *)((long)&uStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = (long)puVar11 - extraout_x12;
  lStack_c0 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  lVar4 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    puStack_98 = (undefined *)0x0;
    uStack_90 = 0xe000000000000000;
    func_0x000107c602fc(0x21);
    func_0x000107c6142c(uStack_90);
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uStack_88 = 0xd00000000000001f;
    uStack_80 = 0x800000010f0091e0;
    lVar12 = *(long *)(param_1 + 0x10);
    if (lVar12 == 0) {
      puVar8 = PTR___sSSN_11034da80;
      func_0x000107c5fc58(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar2);
      func_0x000107c6142c(puVar8);
      func_0x000107c6142c(uStack_80);
    }
    else {
      puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
      uStack_e0 = lVar9 - extraout_x12_00;
      puStack_d8 = puVar11;
      lStack_d0 = lVar4;
      func_0x000100403514(0,lVar12,0);
      param_1 = param_1 + ((ulong)*(byte *)(lVar10 + 0x50) + 0x20 &
                          ((ulong)*(byte *)(lVar10 + 0x50) ^ 0xffffffffffffffff));
      lStack_a8 = *(long *)(lVar10 + 0x48);
      pcStack_b0 = *(code **)(lVar10 + 0x10);
      lVar4 = param_1;
      lStack_c8 = lVar10;
      lStack_a0 = lVar12;
      do {
        puVar2 = puStack_98;
        lVar10 = lStack_c0;
        lVar9 = lStack_c8;
        lVar5 = lStack_c0;
        lVar7 = lVar4;
        (*pcStack_b0)(lStack_c0,lVar4,lVar3);
        func_0x000107c5ed88();
        pcStack_b8 = *(code **)(lVar9 + 8);
        (*pcStack_b8)(lVar10,lVar3);
        uVar1 = *(ulong *)(puVar2 + 0x10);
        puStack_98 = puVar2;
        if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
          func_0x000100403514(1 < *(ulong *)(puVar2 + 0x18),uVar1 + 1,1);
        }
        puVar2 = puStack_98;
        lVar9 = lStack_c8;
        *(ulong *)(puStack_98 + 0x10) = uVar1 + 1;
        *(long *)(puStack_98 + uVar1 * 0x10 + 0x20) = lVar5;
        *(long *)(puStack_98 + uVar1 * 0x10 + 0x28) = lVar7;
        lVar4 = lVar4 + lStack_a8;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      puVar8 = PTR___sSSN_11034da80;
      func_0x000107c5fc58(puStack_98,PTR___sSSN_11034da80);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar2);
      func_0x000107c6142c(puVar8);
      func_0x000107c6142c(uStack_80);
      lVar4 = lStack_d0;
      puVar11 = puStack_d8;
      uVar1 = uStack_e0;
      lVar10 = _DAT_112e131d8;
      puVar2 = PTR__swift_isaMask_11034f488;
      do {
        (*pcStack_b0)(uVar1,param_1,lVar3);
        puVar6 = puVar11;
        (**(code **)(lVar9 + 0x20))(puVar11,uVar1,lVar3);
        func_0x000101ca6fa8();
        (**(code **)((*(ulong *)puVar2 & *puVar6) + 0x60))(puVar11);
        func_0x000107c61170(puVar6);
        lVar12 = *(long *)(lVar4 + lVar10);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar12 != 0) {
          lVar5 = lVar12;
          func_0x000107c5ed90();
          func_0x000107c4c4dc(lVar12);
          func_0x000107c615e8(lVar12);
          func_0x000107c61170(lVar5);
        }
        (*pcStack_b8)(puVar11,lVar3);
        param_1 = param_1 + lStack_a8;
        lStack_a0 = lStack_a0 + -1;
      } while (lStack_a0 != 0);
    }
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 101ca8b78; end: 101ca8bd3;  */

void FUN_101ca8b78(void)

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
    func_0x0001039abe88();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112e13230;
  plVar5 = (long *)&UNK_10d9ee9e0;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 101ca8bd4; end: 101ca8d6f;  */

ulong FUN_101ca8bd4(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101ca8ca4);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101ca8ca8);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x0001039abe88(0);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar4 = 0;
    func_0x0001039abe88(0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd00000000000001d,0x800000010f009140);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101ca8d70);
  (*pcVar2)();
}



/* Entry: 101ca8d70; end: 101ca8e93;  */

undefined * FUN_101ca8d70(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101ca8e94);
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
    FUN_101ca8b78();
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
    func_0x0001039abe88(0);
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



/* Entry: 101ca8e94; end: 101ca8f13;  */

undefined * FUN_101ca8e94(undefined *param_1,undefined *param_2)

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
    FUN_101ca8b78();
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



/* Entry: 101ca8f14; end: 101ca9013;  */

void FUN_101ca8f14(ulong *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long lStack_50;
  ulong uStack_48;
  
  uVar4 = *param_1;
  uVar1 = uVar4;
  func_0x000107c61558();
  if ((uVar1 & 1) == 0) {
    FUN_101caa41c();
  }
  uVar5 = *(ulong *)(uVar4 + 0x10);
  lStack_50 = uVar4 + 0x20;
  uVar1 = uVar5;
  uStack_48 = uVar5;
  func_0x000107c60574();
  if ((long)uVar1 < (long)uVar5) {
    puVar6 = (undefined *)(uVar5 >> 1);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar5) {
      uVar2 = 0;
      func_0x0001039abe88(0);
      puVar3 = puVar6;
      func_0x000107c60380(puVar6,uVar2);
      *(undefined **)(puVar3 + 0x10) = puVar6;
    }
    puStack_68 = puVar3 + 0x20;
    puStack_60 = puVar6;
    FUN_101ca9014(&puStack_68,auStack_58,&lStack_50,uVar1);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    func_0x000107c61574(puVar3);
  }
  else if (uVar5 != 0) {
    FUN_101ca9d00(0,uVar5,1,&lStack_50);
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 101ca9014; end: 101ca9cff;  */

/* WARNING: Removing unreachable block (ram,0x000101ca9c80) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ca9014(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  long extraout_x8;
  long lVar14;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x13;
  ulong uVar19;
  undefined8 uVar20;
  code *unaff_x21;
  ulong uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined8 *puVar25;
  long lStack_1e0;
  long *plStack_1d8;
  long lStack_1d0;
  long *plStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  ulong uStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  undefined *puStack_158;
  long lStack_150;
  long lStack_148;
  ulong uStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 auStack_108 [5];
  ulong uStack_e0;
  undefined8 auStack_d8 [13];
  ulong auStack_70 [2];
  undefined *puStack_58;
  
  lVar3 = 0;
  plStack_1d8 = param_1;
  func_0x000107c5ecc4();
  lStack_1b8 = *(long *)(lVar3 + -8);
  lStack_1b0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_1b8 + 0x40));
  lVar14 = (long)&lStack_1e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_178 = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar14 - extraout_x12;
  lVar3 = 0x112d373d8;
  lStack_168 = lVar14;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar14 = lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_180 = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar14 - extraout_x12_00;
  lStack_188 = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar14 - extraout_x12_01;
  lStack_170 = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar14 - extraout_x12_02;
  puVar4 = (undefined *)0x0;
  func_0x000107c5eea4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar3 = lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_190 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uStack_120 = lVar3 - extraout_x12_03;
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar3 = param_3[1];
  plStack_1c8 = param_3;
  if (0 < lVar3) {
    lVar24 = 0;
    uStack_1a0 = *(ulong *)PTR__NSURLCreationDateKey_11034ab00;
    lStack_1e0 = param_4;
    lStack_198 = lVar14;
    puStack_158 = puVar4;
    lStack_128 = extraout_x13;
    do {
      lVar14 = lVar24 + 1;
      lStack_160 = lVar24;
      if (lVar14 < lVar3) {
        lVar22 = *plStack_1c8;
        uVar5 = *(undefined8 *)(lVar22 + lVar14 * 8);
        uVar20 = *(undefined8 *)(lVar22 + lVar24 * 8);
        auStack_108[0] = uVar20;
        auStack_d8[0] = uVar5;
        func_0x000107c61174();
        func_0x000107c61174(uVar20);
        puVar6 = auStack_d8;
        FUN_101ca8508(puVar6,auStack_108);
        func_0x000107c61170(uVar5);
        func_0x000107c61170(uVar20);
        if (unaff_x21 != (code *)0x0) goto LAB_101ca9c90;
        lStack_110 = lVar24 * 8;
        puVar25 = (undefined8 *)(lVar22 + lStack_110 + 0x10);
        lVar24 = lVar24 + 2;
        do {
          lVar14 = lVar3;
          if (lVar3 == lVar24) break;
          uVar5 = puVar25[-1];
          uVar20 = *puVar25;
          auStack_108[0] = uVar5;
          auStack_d8[0] = uVar20;
          func_0x000107c61174();
          func_0x000107c61174(uVar5);
          puVar7 = auStack_d8;
          FUN_101ca8508(puVar7,auStack_108);
          func_0x000107c61170(uVar20);
          func_0x000107c61170(uVar5);
          puVar25 = puVar25 + 1;
          lVar14 = lVar24;
          lVar24 = lVar24 + 1;
        } while (((uint)puVar6 & 1) == ((uint)puVar7 & 1));
        param_4 = lStack_1e0;
        puVar4 = puStack_158;
        if (((ulong)puVar6 & 1) != 0) {
          if (lVar14 < lStack_160) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101ca9cec);
            (*pcVar2)();
          }
          if (lStack_160 < lVar14) {
            lVar22 = *plStack_1c8;
            puVar25 = (undefined8 *)(lVar22 + lVar14 * 8);
            puVar6 = (undefined8 *)(lVar22 + lStack_110);
            lVar24 = lVar14;
            lVar3 = lStack_160;
            do {
              puVar25 = puVar25 + -1;
              lVar24 = lVar24 + -1;
              if (lVar3 != lVar24) {
                if (lVar22 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x101ca9cf8);
                  (*pcVar2)();
                }
                uVar5 = *puVar6;
                *puVar6 = *puVar25;
                *puVar25 = uVar5;
              }
              lVar3 = lVar3 + 1;
              puVar6 = puVar6 + 1;
            } while (lVar3 < lVar24);
          }
        }
      }
      lVar22 = plStack_1c8[1];
      lVar24 = lVar14;
      lVar3 = lStack_160;
      if (lVar14 < lVar22) {
        if (SBORROW8(lVar14,lStack_160)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101ca9cd0);
          (*pcVar2)();
        }
        if (lVar14 - lStack_160 < param_4) {
          if (SCARRY8(lStack_160,param_4)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101ca9cd4);
            (*pcVar2)();
          }
          lVar23 = lStack_160 + param_4;
          if (lVar22 <= lStack_160 + param_4) {
            lVar23 = lVar22;
          }
          if (lVar23 < lStack_160) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101ca9cd8);
            (*pcVar2)();
          }
          if (lVar14 != lVar23) {
            lVar3 = *plStack_1c8;
            uVar5 = 0x112da3008;
            puVar12 = &UNK_10d947450;
            lStack_1d0 = lVar23;
            func_0x0001000285a8(0x112da3008,&UNK_10d947450);
            lStack_1a8 = lVar3;
            uStack_130 = uVar5;
            do {
              lStack_150 = lVar14;
              lVar14 = *(long *)(lStack_1a8 + lStack_150 * 8);
              lStack_1c0 = lStack_150;
              do {
                uVar21 = uStack_1a0;
                uVar5 = *(undefined8 *)(lStack_1a8 + (lStack_150 + -1) * 8);
                auStack_70[0] = uStack_1a0;
                lVar24 = 1;
                lStack_148 = lStack_150;
                lStack_150 = lStack_150 + -1;
                pcStack_138 = unaff_x21;
                func_0x000107c602e8();
                uVar9 = auStack_70[0];
                lVar3 = lVar24 + 0x38;
                uVar20 = *(undefined8 *)(lVar24 + 0x28);
                func_0x000107c61174();
                func_0x000107c61174();
                uStack_140 = uVar21;
                func_0x000107c61174();
                lStack_110 = lVar14;
                func_0x000107c61174();
                uVar21 = uVar9;
                uStack_118 = uVar5;
                func_0x000107c5faec();
                func_0x000107c6068c(auStack_d8,uVar20);
                uVar8 = uVar9;
                func_0x000107c61174();
                puVar6 = auStack_d8;
                func_0x000107c5fb58(puVar6,uVar21,puVar12);
                func_0x000107c606a8();
                func_0x000107c6142c(puVar12);
                uVar18 = -1L << ((ulong)*(byte *)(lVar24 + 0x20) & 0x3f);
                uVar19 = (ulong)puVar6 & (uVar18 ^ 0xffffffffffffffff);
                uVar15 = uVar19 >> 6;
                uVar16 = *(ulong *)(lVar3 + uVar15 * 8);
                uVar17 = 1L << (uVar19 & 0x3f);
                if ((uVar17 & uVar16) != 0) {
                  do {
                    uVar17 = *(ulong *)(*(long *)(lVar24 + 0x30) + uVar19 * 8);
                    func_0x000107c5faec();
                    uVar15 = uVar9;
                    uVar16 = uVar21;
                    func_0x000107c5faec();
                    if (uVar17 == uVar15 && uVar21 == uVar16) {
                      func_0x000107c61170(uVar8);
                      func_0x000107c6142c(uVar21);
                      func_0x000107c6142c(uVar16);
                      puVar4 = puStack_158;
                      goto LAB_101ca9664;
                    }
                    uVar13 = uVar21;
                    func_0x000107c605b8(uVar17,uVar21,uVar15,uVar16,0);
                    func_0x000107c6142c(uVar21);
                    func_0x000107c6142c(uVar16);
                    if ((uVar17 & 1) != 0) {
                      func_0x000107c61170(uVar8);
                      puVar4 = puStack_158;
                      goto LAB_101ca9664;
                    }
                    uVar19 = uVar19 + 1 & ~uVar18;
                    uVar15 = uVar19 >> 6;
                    uVar16 = *(ulong *)(lVar3 + uVar15 * 8);
                    uVar17 = 1L << (uVar19 & 0x3f);
                    uVar21 = uVar13;
                    puVar4 = puStack_158;
                  } while ((uVar17 & uVar16) != 0);
                }
                *(ulong *)(lVar3 + uVar15 * 8) = uVar17 | uVar16;
                *(ulong *)(*(long *)(lVar24 + 0x30) + uVar19 * 8) = uVar8;
                if (SCARRY8(*(long *)(lVar24 + 0x10),1)) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x101ca9cbc);
                  (*pcVar2)();
                }
                *(long *)(lVar24 + 0x10) = *(long *)(lVar24 + 0x10) + 1;
LAB_101ca9664:
                lVar22 = lStack_128;
                unaff_x21 = pcStack_138;
                lVar3 = lStack_198;
                FUN_101a30eb4(auStack_70);
                lVar14 = lStack_168;
                func_0x000107c5ed78(lStack_168,lVar24);
                if (unaff_x21 == (code *)0x0) {
                  func_0x000107c61574(lVar24);
                  func_0x000107c5ecb0(lVar3);
                  (**(code **)(lStack_1b8 + 8))(lVar14,lStack_1b0);
                }
                else {
                  func_0x000107c614ac(unaff_x21);
                  func_0x000107c61574(lVar24);
                  (**(code **)(lVar22 + 0x38))(lVar3,1,1,puVar4);
                  unaff_x21 = (code *)0x0;
                }
                uVar21 = uStack_140;
                lVar14 = lStack_170;
                func_0x0001003a4c00(lVar3,lStack_170);
                pcVar2 = *(code **)(lVar22 + 0x30);
                lVar3 = lVar14;
                (*pcVar2)(lVar14,1,puVar4);
                pcStack_138 = pcVar2;
                if ((int)lVar3 == 1) {
                  func_0x000107c5ee60(uStack_120);
                  lVar3 = 1;
                  lVar24 = lVar14;
                  (*pcVar2)(lVar14,1,puVar4);
                  if ((int)lVar24 != 1) {
                    func_0x0001000d1dcc(lVar14);
                  }
                }
                else {
                  (**(code **)(lVar22 + 0x20))(uStack_120,lVar14,puVar4);
                  lVar3 = lVar14;
                }
                uStack_e0 = uVar21;
                lVar24 = 1;
                func_0x000107c602e8();
                uVar21 = uStack_e0;
                lVar14 = lVar24 + 0x38;
                uVar5 = *(undefined8 *)(lVar24 + 0x28);
                uVar9 = uStack_e0;
                func_0x000107c5faec();
                func_0x000107c6068c(auStack_d8,uVar5);
                uVar8 = uVar21;
                func_0x000107c61174();
                puVar6 = auStack_d8;
                func_0x000107c5fb58(puVar6,uVar9,lVar3);
                func_0x000107c606a8();
                func_0x000107c6142c(lVar3);
                uVar18 = -1L << ((ulong)*(byte *)(lVar24 + 0x20) & 0x3f);
                uVar19 = (ulong)puVar6 & (uVar18 ^ 0xffffffffffffffff);
                uVar15 = uVar19 >> 6;
                uVar16 = *(ulong *)(lVar14 + uVar15 * 8);
                uVar17 = 1L << (uVar19 & 0x3f);
                if ((uVar17 & uVar16) != 0) {
                  uStack_140 = uVar8;
                  do {
                    uVar16 = *(ulong *)(*(long *)(lVar24 + 0x30) + uVar19 * 8);
                    func_0x000107c5faec();
                    uVar8 = uVar21;
                    uVar15 = uVar9;
                    func_0x000107c5faec();
                    if (uVar16 == uVar8 && uVar9 == uVar15) {
                      func_0x000107c61170(uStack_140);
                      func_0x000107c6142c(uVar9);
                      func_0x000107c6142c(uVar15);
                      goto LAB_101ca9914;
                    }
                    uVar8 = uVar9;
                    func_0x000107c605b8();
                    func_0x000107c6142c(uVar9);
                    func_0x000107c6142c(uVar15);
                    if ((uVar16 & 1) != 0) {
                      func_0x000107c61170(uStack_140);
                      goto LAB_101ca9914;
                    }
                    uVar19 = uVar19 + 1 & ~uVar18;
                    uVar15 = uVar19 >> 6;
                    uVar16 = *(ulong *)(lVar14 + uVar15 * 8);
                    uVar17 = 1L << (uVar19 & 0x3f);
                    uVar9 = uVar8;
                    uVar8 = uStack_140;
                  } while ((uVar17 & uVar16) != 0);
                }
                *(ulong *)(lVar14 + uVar15 * 8) = uVar17 | uVar16;
                *(ulong *)(*(long *)(lVar24 + 0x30) + uVar19 * 8) = uVar8;
                if (SCARRY8(*(long *)(lVar24 + 0x10),1)) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x101ca9cc0);
                  (*pcVar2)();
                }
                *(long *)(lVar24 + 0x10) = *(long *)(lVar24 + 0x10) + 1;
LAB_101ca9914:
                puVar4 = puStack_158;
                FUN_101a30eb4(&uStack_e0);
                lVar14 = lStack_178;
                func_0x000107c5ed78(lStack_178,lVar24);
                lVar22 = lStack_128;
                lVar3 = lStack_160;
                if (unaff_x21 == (code *)0x0) {
                  func_0x000107c61574(lVar24);
                  lVar24 = lStack_188;
                  func_0x000107c5ecb0(lStack_188);
                  (**(code **)(lStack_1b8 + 8))(lVar14,lStack_1b0);
                }
                else {
                  func_0x000107c614ac(unaff_x21);
                  func_0x000107c61574(lVar24);
                  lVar24 = lStack_188;
                  (**(code **)(lVar22 + 0x38))(lStack_188,1,1,puVar4);
                  unaff_x21 = (code *)0x0;
                }
                lVar23 = lStack_180;
                lVar14 = lStack_190;
                func_0x0001003a4c00(lVar24,lStack_180);
                pcVar2 = pcStack_138;
                lVar24 = lVar23;
                (*pcStack_138)(lVar23,1,puVar4);
                if ((int)lVar24 == 1) {
                  func_0x000107c5ee60(lVar14);
                  lVar24 = lVar23;
                  (*pcVar2)(lVar23,1,puVar4);
                  if ((int)lVar24 != 1) {
                    func_0x0001000d1dcc(lVar23);
                  }
                }
                else {
                  (**(code **)(lVar22 + 0x20))(lVar14,lVar23,puVar4);
                }
                uVar21 = uStack_120;
                uVar9 = uStack_120;
                func_0x000107c5ee74(uStack_120,lVar14);
                pcVar2 = *(code **)(lVar22 + 8);
                (*pcVar2)(lVar14,puVar4);
                puVar12 = puVar4;
                (*pcVar2)(uVar21);
                func_0x000107c61170(lStack_110);
                func_0x000107c61170(uStack_118);
                if ((uVar9 & 1) == 0) break;
                if (lStack_1a8 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x101ca9cf0);
                  (*pcVar2)();
                }
                lVar14 = *(long *)(lStack_1a8 + lStack_148 * 8);
                *(undefined8 *)(lStack_1a8 + lStack_148 * 8) =
                     *(undefined8 *)(lStack_1a8 + lStack_150 * 8);
                *(long *)(lStack_1a8 + lStack_150 * 8) = lVar14;
              } while (lStack_150 != lVar3);
              lVar24 = lStack_1d0;
              lVar14 = lStack_1c0 + 1;
              param_4 = lStack_1e0;
            } while (lStack_1c0 + 1 != lStack_1d0);
          }
        }
      }
      puVar12 = puStack_58;
      if (lVar24 < lVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101ca9ccc);
        (*pcVar2)();
      }
      puVar10 = puStack_58;
      func_0x000107c61558();
      puVar11 = puVar12;
      if (((ulong)puVar10 & 1) == 0) {
        puVar11 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar12 + 0x10) + 1,1,puVar12);
      }
      uVar21 = *(ulong *)(puVar11 + 0x10);
      puVar12 = puVar11;
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar21) {
        puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
        func_0x0001000a91e0(puVar12,uVar21 + 1,1,puVar11);
      }
      plVar1 = plStack_1c8;
      *(ulong *)(puVar12 + 0x10) = uVar21 + 1;
      *(long *)(puVar12 + uVar21 * 0x10 + 0x20) = lVar3;
      *(long *)(puVar12 + uVar21 * 0x10 + 0x28) = lVar24;
      puStack_58 = puVar12;
      if (*plStack_1d8 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101ca9cfc);
        (*pcVar2)();
      }
      FUN_101ca9df8(&puStack_58,*plStack_1d8,plStack_1c8);
      if (unaff_x21 != (code *)0x0) goto LAB_101ca9c90;
      lVar3 = plVar1[1];
    } while (lVar24 < lVar3);
    unaff_x21 = (code *)0x0;
  }
  puVar4 = puStack_58;
  lVar3 = *plStack_1d8;
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101ca9d00);
    (*pcVar2)();
  }
  puVar12 = puStack_58;
  func_0x000107c61558();
  plVar1 = plStack_1c8;
  if (((ulong)puVar12 & 1) == 0) {
    func_0x000100e06d54();
  }
  uVar21 = *(ulong *)(puVar4 + 0x10);
  while (puStack_58 = puVar4, 1 < uVar21) {
    lVar14 = *plVar1;
    if (lVar14 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101ca9cf4);
      (*pcVar2)();
    }
    lVar22 = uVar21 - 1;
    lVar23 = *(long *)(puVar4 + uVar21 * 0x10);
    lVar24 = *(long *)(puVar4 + lVar22 * 0x10 + 0x28);
    FUN_101caa060(lVar14 + lVar23 * 8,lVar14 + *(long *)(puVar4 + lVar22 * 0x10 + 0x20) * 8,
                  lVar14 + lVar24 * 8,lVar3);
    if (unaff_x21 != (code *)0x0) break;
    if (lVar24 < lVar23) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101ca9cc4);
      (*pcVar2)();
    }
    puVar12 = puVar4;
    func_0x000107c61558();
    if (((ulong)puVar12 & 1) == 0) {
      func_0x000100e06d54();
    }
    if (*(ulong *)(puVar4 + 0x10) <= uVar21 - 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101ca9cc8);
      (*pcVar2)();
    }
    *(long *)(puVar4 + uVar21 * 0x10) = lVar23;
    *(long *)((long)(puVar4 + uVar21 * 0x10) + 8) = lVar24;
    puStack_58 = puVar4;
    func_0x0001000a97cc(lVar22);
    puVar4 = puStack_58;
    uVar21 = *(ulong *)(puStack_58 + 0x10);
  }
LAB_101ca9c90:
  func_0x000107c6142c(puStack_58);
  return;
}



/* Entry: 101ca9d00; end: 101ca9df7;  */

void FUN_101ca9d00(long param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x21;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uStack_68;
  undefined8 uStack_58;
  
  if (param_3 != param_2) {
    lVar6 = *param_4;
    puVar7 = (undefined8 *)(lVar6 + param_3 * 8 + -8);
    param_1 = param_1 - param_3;
    do {
      uVar3 = *(undefined8 *)(lVar6 + param_3 * 8);
      puVar8 = puVar7;
      lVar9 = param_1;
      do {
        uVar5 = *puVar8;
        uStack_68 = uVar5;
        uStack_58 = uVar3;
        func_0x000107c61174();
        func_0x000107c61174(uVar5);
        puVar4 = &uStack_58;
        FUN_101ca8508(puVar4,&uStack_68);
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uVar5);
        if (unaff_x21 != 0) {
          return;
        }
        if (((ulong)puVar4 & 1) == 0) break;
        if (lVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101ca9df8);
          (*pcVar1)();
        }
        uVar5 = *puVar8;
        uVar3 = puVar8[1];
        *puVar8 = uVar3;
        puVar8[1] = uVar5;
        bVar2 = lVar9 != -1;
        lVar9 = lVar9 + 1;
        puVar8 = puVar8 + -1;
      } while (bVar2);
      param_3 = param_3 + 1;
      puVar7 = puVar7 + 1;
      param_1 = param_1 + -1;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 101ca9df8; end: 101caa05f;  */

undefined8 FUN_101ca9df8(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    uVar6 = uVar8;
    func_0x000107c61558();
    if ((uVar6 & 1) == 0) {
      func_0x000100e06d54();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar7 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_101ca9ecc;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101caa048);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_101ca9f30:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101caa038);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101caa040);
          (*pcVar4)();
        }
        lVar10 = lVar9;
        if (lVar7 - lVar2 < lVar12) {
          return 1;
        }
      }
      else {
        lVar12 = uVar8 + 0x20 + uVar6 * 0x10;
        if (SBORROW8(*(long *)(lVar12 + -0x38),*(long *)(lVar12 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101caa020);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101caa024);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101caa02c);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101caa034);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_101ca9ecc:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101caa028);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101caa030);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101caa03c);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101caa044);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_101ca9f30;
          lVar10 = uVar6 - 2;
          if (lVar3 <= lVar7) {
            lVar10 = lVar9;
          }
        }
        else {
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar12 = *plVar1;
          lVar2 = plVar1[1];
          if (SBORROW8(lVar2,lVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101caa04c);
            (*pcVar4)();
          }
          lVar10 = uVar6 - 2;
          if (lVar2 - lVar12 <= lVar7) {
            lVar10 = lVar9;
          }
        }
      }
      uVar11 = lVar10 - 1;
      if (uVar6 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101caa014);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101caa060);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_101caa060(lVar9 + lVar12 * 8,lVar9 + *plVar1 * 8,lVar9 + lVar7 * 8,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101caa018);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      func_0x000107c61558();
      if ((uVar6 & 1) == 0) {
        func_0x000100e06d54();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101caa01c);
        (*pcVar4)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar7;
      *param_1 = uVar8;
      func_0x0001000a97cc(lVar10);
      uVar8 = *param_1;
      uVar6 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar6);
  }
  return 1;
}



/* Entry: 101caa060; end: 101caa41b;  */

undefined8
FUN_101caa060(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long unaff_x21;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uStack_68;
  undefined8 uStack_58;
  
  lVar9 = (long)param_2 - (long)param_1;
  lVar5 = lVar9 + 7;
  if (-1 < lVar9) {
    lVar5 = lVar9;
  }
  lVar5 = lVar5 >> 3;
  lVar14 = (long)param_3 - (long)param_2;
  lVar7 = lVar14 + 7;
  if (-1 < lVar14) {
    lVar7 = lVar14;
  }
  lVar7 = lVar7 >> 3;
  if (lVar5 < lVar7) {
    if (((param_4 < param_1) || (param_1 + lVar5 <= param_4)) || (param_4 != param_1)) {
      func_0x000107c610b8(param_4,param_1,lVar5 << 3);
    }
    puVar11 = param_4 + lVar5;
    puVar4 = param_1;
    if (7 < lVar9) {
      while (param_2 < param_3) {
        uVar1 = *param_2;
        uVar13 = *param_4;
        uStack_68 = uVar13;
        uStack_58 = uVar1;
        func_0x000107c61174();
        func_0x000107c61174(uVar13);
        puVar2 = &uStack_58;
        FUN_101ca8508(puVar2,&uStack_68);
        if (unaff_x21 != 0) {
          func_0x000107c61170(uVar1);
          func_0x000107c61170(uVar13);
          uVar6 = (long)puVar11 - (long)param_4;
          uVar10 = uVar6 + 7;
          if (-1 < (long)uVar6) {
            uVar10 = uVar6;
          }
          if (((param_4 <= puVar4) &&
              (puVar4 < (undefined8 *)((long)param_4 + (uVar10 & 0xfffffffffffffff8)))) &&
             (puVar4 == param_4)) {
            return 1;
          }
          goto LAB_101caa3dc;
        }
        func_0x000107c61170(uVar1);
        func_0x000107c61170(uVar13);
        if (((ulong)puVar2 & 1) == 0) {
          puVar12 = param_4 + 1;
          puVar8 = param_2;
          puVar2 = param_4;
        }
        else {
          puVar12 = param_4;
          puVar8 = param_2 + 1;
          puVar2 = param_2;
        }
        param_2 = puVar8;
        param_4 = puVar12;
        if (puVar4 != puVar2) {
          *puVar4 = *puVar2;
        }
        puVar4 = puVar4 + 1;
        if (puVar11 <= param_4) break;
      }
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar7 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar7 << 3);
    }
    puVar2 = param_4 + lVar7;
    puVar4 = param_2;
    puVar11 = puVar2;
    if ((param_1 < param_2) && (7 < lVar14)) {
      do {
        puVar8 = puVar4 + -1;
        uVar10 = (long)puVar2 - (long)param_4;
        puVar12 = param_3;
        while( true ) {
          param_3 = puVar12 + -1;
          puVar11 = puVar2 + -1;
          uVar1 = *puVar11;
          uVar13 = *puVar8;
          uStack_68 = uVar13;
          uStack_58 = uVar1;
          func_0x000107c61174();
          func_0x000107c61174(uVar13);
          puVar3 = &uStack_58;
          FUN_101ca8508(puVar3,&uStack_68);
          if (unaff_x21 != 0) {
            func_0x000107c61170(uVar1);
            func_0x000107c61170(uVar13);
            uVar6 = uVar10 + 7;
            if (-1 < (long)uVar10) {
              uVar6 = uVar10;
            }
            lVar5 = (long)uVar6 >> 3;
            if ((puVar4 < param_4) ||
               ((undefined8 *)((long)param_4 + (uVar6 & 0xfffffffffffffff8)) <= puVar4)) {
              func_0x000107c610b8(puVar4,param_4,lVar5 << 3);
              return 1;
            }
            if (puVar4 == param_4) {
              return 1;
            }
            goto LAB_101caa3e0;
          }
          func_0x000107c61170(uVar1);
          func_0x000107c61170(uVar13);
          if (((ulong)puVar3 & 1) != 0) break;
          if (puVar12 != puVar2) {
            *param_3 = *puVar11;
          }
          uVar10 = uVar10 - 8;
          puVar2 = puVar11;
          puVar12 = param_3;
          if (puVar11 <= param_4) goto LAB_101caa3a0;
        }
        if (puVar12 != puVar4) {
          *param_3 = *puVar8;
        }
        puVar4 = puVar8;
        puVar11 = puVar2;
      } while ((param_1 < puVar8) && (param_4 < puVar2));
    }
  }
LAB_101caa3a0:
  uVar6 = (long)puVar11 - (long)param_4;
  uVar10 = uVar6 + 7;
  if (-1 < (long)uVar6) {
    uVar10 = uVar6;
  }
  if (((puVar4 < param_4) ||
      ((undefined8 *)((long)param_4 + (uVar10 & 0xfffffffffffffff8)) <= puVar4)) ||
     (puVar4 != param_4)) {
LAB_101caa3dc:
    lVar5 = (long)uVar10 >> 3;
LAB_101caa3e0:
    func_0x000107c610b8(puVar4,param_4,lVar5 << 3);
  }
  return 1;
}



/* Entry: 101caa41c; end: 101caa42f;  */

/* WARNING: Removing unreachable block (ram,0x000101ca8d90) */
/* WARNING: Removing unreachable block (ram,0x000101ca8da0) */
/* WARNING: Removing unreachable block (ram,0x000101ca8e90) */
/* WARNING: Removing unreachable block (ram,0x000101ca8dac) */
/* WARNING: Removing unreachable block (ram,0x000101ca8db4) */
/* WARNING: Removing unreachable block (ram,0x000101ca8e2c) */
/* WARNING: Removing unreachable block (ram,0x000101ca8e34) */
/* WARNING: Removing unreachable block (ram,0x000101ca8e38) */
/* WARNING: Removing unreachable block (ram,0x000101ca8e3c) */
/* WARNING: Removing unreachable block (ram,0x000101ca8e4c) */

undefined * FUN_101caa41c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  
  puVar4 = (undefined *)0x0;
  lVar5 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar5) {
    lVar1 = lVar5;
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    FUN_101ca8b78();
    func_0x000107c613fc();
    puVar2 = puVar4;
    func_0x000107c610a4();
    puVar6 = puVar2 + -0x19;
    if (0x1f < (long)puVar2) {
      puVar6 = puVar2 + -0x20;
    }
    *(long *)(puVar4 + 0x10) = lVar5;
    *(ulong *)(puVar4 + 0x18) = ((long)puVar6 >> 3) << 1 | 1;
    puVar6 = puVar4;
  }
  uVar3 = 0;
  func_0x0001039abe88(0);
  func_0x000107c6140c(puVar6 + 0x20,param_1 + 0x20,lVar5,uVar3);
  func_0x000107c61574(param_1);
  return puVar6;
}



/* Entry: 101caa430; end: 101caa587;  */

ulong FUN_101caa430(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (param_3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_3 & 0xffffffffffffff8;
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar5 = param_3;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101caa588);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101caa57c);
        (*pcVar1)();
      }
      uVar2 = 0;
      func_0x0001039abe88(0);
      func_0x000107c6140c(param_1,(param_3 & 0xffffffffffffff8) + 0x20,lVar6,uVar2);
    }
    else {
      uVar7 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar7 = param_3;
      }
      func_0x000107c60480();
      if (param_2 < (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101caa580);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101caa584);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar2 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar2;
        lVar6 = uVar5 - 1;
        if (lVar6 != 0) {
          uVar4 = uVar2;
          puVar8 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar2 = *puVar8;
            *param_1 = uVar2;
            func_0x000107c61174(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar2;
            puVar8 = puVar8 + 1;
          } while (lVar6 != 0);
        }
        func_0x000107c61174(uVar2);
      }
      else {
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          FUN_101ca8bd4(uVar7,param_3);
          param_1[uVar7] = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 101caa588; end: 101caa5bb;  */

void FUN_101caa588(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar5 + 0x10,auStack_48,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  if (lVar5 != 0) {
    if (SCARRY8(lVar2,1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101ca80b0);
      (*pcVar4)();
    }
    FUN_101ca7804(lVar2 + 1,uVar1,uVar3);
    func_0x000107c61170(lVar5);
  }
  return;
}



/* Entry: 101caa5bc; end: 101caa5f3;  */

void FUN_101caa5bc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101caa5f4; end: 101caa5ff;  */

/* WARNING: Removing unreachable block (ram,0x000101ca84fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101caa5f4(undefined *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  long extraout_x8;
  undefined *puVar14;
  long lVar15;
  long unaff_x20;
  undefined1 auStack_c0 [8];
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined auStack_78 [24];
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  pcVar3 = *(code **)(unaff_x20 + 0x18);
  lVar5 = 0;
  func_0x000107c5ede0();
  lVar15 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  puVar13 = auStack_78;
  func_0x000107c61428(lVar6 + 0x10,puVar13,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61618();
  if (lVar6 == 0) {
    (*pcVar3)();
    return;
  }
  if ((ulong)param_1 >> 0x3e == 0) {
    if (*(long *)((undefined *)((ulong)param_1 & 0xffffffffffffff8) + 0x10) == 0)
    goto LAB_101ca84ac;
    func_0x000107c61434(param_1);
    puStack_b0 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
  }
  else {
    puVar12 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      puVar12 = param_1;
    }
    puVar14 = puVar12;
    func_0x000107c60480();
    if (puVar14 == (undefined *)0x0) goto LAB_101ca84ac;
    func_0x000107c60480();
    puStack_b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar12 != (undefined *)0x0) {
      func_0x000107c61434(param_1);
      puVar14 = puVar12;
      FUN_101ca8e94(puVar12,0);
      puVar13 = puVar12;
      FUN_101caa430(puVar14 + 0x20);
      func_0x000107c6142c();
      puStack_b0 = puVar14;
      if (param_1 != puVar12) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101ca8498);
        (*pcVar3)();
      }
    }
  }
  FUN_101ca8f14(&puStack_b0);
  puVar12 = puStack_b0;
  if (((long)puStack_b0 < 0) || (((ulong)puStack_b0 >> 0x3e & 1) != 0)) {
    puVar14 = puStack_b0;
    func_0x000107c60480();
  }
  else {
    puVar14 = *(undefined **)(puStack_b0 + 0x10);
  }
  if (puVar14 == (undefined *)0x0) {
    func_0x000107c61574(puVar12);
  }
  else {
    pcStack_b8 = pcVar3;
    if (((ulong)puVar12 & 0xc000000000000001) == 0) {
      if (*(long *)(puVar12 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101ca84f0);
        (*pcVar3)();
      }
      lVar7 = *(long *)(puVar12 + 0x20);
      func_0x000107c61174();
    }
    else {
      lVar7 = 0;
      puVar13 = puVar12;
      FUN_101ca8bd4();
    }
    func_0x000107c61574();
    func_0x000107c5eda8(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000107c5ed88();
    puStack_b0 = (undefined *)0x0;
    uStack_a8 = 0xe000000000000000;
    func_0x000107c602fc(0x52);
    func_0x000107c5fb78(0xd000000000000043,0x800000010f009160);
    func_0x000107c5fb78(puVar12,puVar13);
    func_0x000107c5fb78(0x67616d497369202c,0xeb00000000203a65);
    bVar4 = *(char *)(lVar7 + _DAT_11380c070) == '\0';
    uVar1 = 0x65757274;
    if (bVar4) {
      uVar1 = 0x65736c6166;
    }
    uVar2 = 0xe400000000000000;
    if (bVar4) {
      uVar2 = 0xe500000000000000;
    }
    func_0x000107c5fb78(uVar1,uVar2);
    func_0x000107c6142c(uVar2);
    func_0x000107c6142c(uStack_a8);
    lVar8 = *(long *)(lVar6 + _DAT_112e131d8);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar8 != 0) {
      puVar14 = puVar12;
      func_0x000107c5fadc(puVar12,puVar13);
      func_0x000107c4c4e0(lVar8);
      func_0x000107c615e8(lVar8);
      func_0x000107c61170(puVar14);
    }
    pcVar9 = "checkForCachedOrphanedMedia(completion:)";
    func_0x0001000c10c0("checkForCachedOrphanedMedia(completion:)");
    func_0x000107c61180();
    puVar14 = &UNK_1104660c0;
    func_0x000107c613fc(&UNK_1104660c0,0x18,7);
    func_0x000107c61614(puVar14 + 0x10,lVar6);
    puVar10 = &UNK_1104662a0;
    func_0x000107c613fc(&UNK_1104662a0,0x30,7);
    *(undefined **)(puVar10 + 0x10) = puVar14;
    *(undefined **)(puVar10 + 0x18) = puVar12;
    *(undefined **)(puVar10 + 0x20) = puVar13;
    *(long *)(puVar10 + 0x28) = lVar7;
    uStack_90 = 0x101caa634;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0x42000000;
    puStack_a0 = &UNK_1000f6b44;
    puStack_98 = &UNK_1104662b8;
    ppuVar11 = &puStack_b0;
    puStack_88 = puVar10;
    func_0x000107c60bc4(ppuVar11);
    puVar13 = puStack_88;
    func_0x000107c61174(lVar7);
    func_0x000107c61574(puVar13);
    func_0x000107c4e524(pcVar9);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c61170(lVar7);
    func_0x000107c615e8(pcVar9);
    (**(code **)(lVar15 + 8))(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar5);
    pcVar3 = pcStack_b8;
  }
LAB_101ca84ac:
  (*pcVar3)();
  func_0x000107c61170(lVar6);
  return;
}



/* Entry: 101caa600; end: 101caa64f;  */

void FUN_101caa600(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101caa650; end: 101caa687;  */

void FUN_101caa650(long param_1,long param_2)

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



/* Entry: 101caa688; end: 101caa6c3; -[_TtC36LockedCameraCaptureStorageManagement32CustomLockedCameraCaptureManager init] */

void FUN_101caa688(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000101caa6f4();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101caa6c4; end: 101caa713;  */

void FUN_101caa6c4(void)

{
  func_0x000101caa6f4();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101caa714; end: 101caae17;  */

code * FUN_101caa714(void)

{
  ulong uVar1;
  undefined1 *puVar2;
  int iVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  undefined8 uVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  long extraout_x12;
  long extraout_x12_00;
  ulong extraout_x13;
  code *pcVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_110 [8];
  long lStack_108;
  code *pcStack_100;
  undefined1 *puStack_f8;
  code *pcStack_f0;
  ulong uStack_e8;
  long lStack_e0;
  code *pcStack_d8;
  code *pcStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  code *pcStack_b8;
  code *pcStack_b0;
  long lStack_a8;
  code *pcStack_a0;
  long lStack_98;
  char cStack_89;
  code *pcStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  puVar2 = auStack_110;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar3 = 2;
  pcVar8 = (code *)0x12;
  pcVar10 = (code *)0x2;
  func_0x000100029b9c();
  if (iVar3 == 0) {
    pcVar8 = (code *)0x0;
    func_0x000107c5ede0();
    lVar19 = *(long *)(pcVar8 + -8);
    lVar13 = *(long *)(lVar19 + 0x40);
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    pcVar11 = (code *)(lVar13 + 0xfU & 0xfffffffffffffff0);
    pcVar17 = (code *)(auStack_110 + -(long)pcVar11);
    pcVar5 = (code *)PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x000107c61168();
    pcVar6 = pcVar5;
    func_0x000107c415e0();
    func_0x000107c61180();
    pcVar10 = (code *)0x5;
    pcVar4 = pcVar6;
    func_0x000107c3ac48();
    func_0x000107c61180();
    func_0x000107c61170(pcVar6);
    pcVar6 = pcVar4;
    pcVar9 = pcVar8;
    func_0x000107c5fc54();
    func_0x000107c61170(pcVar4);
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    if (*(long *)(pcVar6 + 0x10) == 0) {
      func_0x000107c6142c();
      puVar2 = auStack_110;
      pcVar8 = pcVar9;
      pcVar5 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      uStack_e8 = (ulong)*(byte *)(lVar19 + 0x50) + 0x20 &
                  ((ulong)*(byte *)(lVar19 + 0x50) ^ 0xffffffffffffffff);
      pcStack_b8 = *(code **)(lVar19 + 0x10);
      puStack_f8 = auStack_110;
      (*pcStack_b8)((long)pcVar17 - (long)pcVar11,pcVar6 + uStack_e8,pcVar8);
      func_0x000107c6142c(pcVar6);
      pcStack_f0 = *(code **)(lVar19 + 0x20);
      lStack_e0 = lVar19;
      (*pcStack_f0)(pcVar17,(long)pcVar17 - (long)pcVar11,pcVar8);
      pcStack_a0 = pcVar17;
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      lVar14 = (long)pcVar17 - (long)pcVar11;
      func_0x000107c5eda8(lVar14);
      lStack_a8 = lVar14;
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      lVar15 = lVar14 - (long)pcVar11;
      func_0x000107c5ed9c(lVar15,0xd00000000000001f,0x800000010f009200);
      pcStack_80 = (code *)0x3a4c525565736162;
      uStack_78 = 0xe900000000000020;
      uVar7 = 0x112d4b608;
      FUN_101caae18(0x112d4b608,PTR___s10Foundation3URLVMa_110350988,
                    PTR___s10Foundation3URLVs23CustomStringConvertibleAAMc_1103509c0);
      func_0x000107c6057c(pcVar8,uVar7);
      func_0x000107c5fb78();
      func_0x000107c6142c(uVar7);
      func_0x000107c6142c(uStack_78);
      pcStack_b0 = pcVar5;
      func_0x000107c415e0();
      func_0x000107c61180();
      pcVar6 = pcVar5;
      pcStack_100 = pcVar17;
      func_0x000107c5ed90();
      lVar19 = 0x112da3000;
      func_0x0001000285a8(0x112da3000,&UNK_10db90480);
      func_0x000107c613fc();
      *(undefined8 *)(lVar19 + 0x18) = 2;
      *(undefined8 *)(lVar19 + 0x10) = 1;
      uVar18 = *(undefined8 *)PTR__NSURLIsDirectoryKey_11034ab10;
      *(undefined8 *)(lVar19 + 0x20) = uVar18;
      uVar7 = 0;
      func_0x0001014a2fa0(0);
      func_0x000107c61174(uVar18);
      lVar16 = lVar19;
      func_0x000107c5fc48(lVar19,uVar7);
      func_0x000107c61574(lVar19);
      pcStack_80 = (code *)0x0;
      pcVar4 = pcVar5;
      pcVar10 = pcVar6;
      func_0x000107c4052c();
      func_0x000107c61180();
      func_0x000107c61170(pcVar5);
      func_0x000107c61170(pcVar6);
      func_0x000107c61170(lVar16);
      pcVar5 = pcStack_80;
      if (pcVar4 == (code *)0x0) {
        pcVar6 = pcStack_80;
        func_0x000107c61174(pcStack_80);
        func_0x000107c5ed30(pcVar5);
        func_0x000107c61170(pcVar6);
        func_0x000107c61654();
        func_0x000107c614ac(pcVar5);
        pcVar11 = *(code **)(lStack_e0 + 8);
        (*pcVar11)(lVar15,pcVar8);
        (*pcVar11)(lVar14,pcVar8);
        pcVar6 = pcStack_100;
        (*pcVar11)();
        puVar2 = puStack_f8;
        pcVar5 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        pcVar6 = pcVar4;
        lStack_108 = lVar14;
        lStack_c0 = lVar15;
        func_0x000107c5fc54(pcVar4,pcVar8);
        func_0x000107c61174(pcVar5);
        func_0x000107c61170(pcVar4);
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar15 = lVar15 - (lVar13 + 0xfU & 0xfffffffffffffff0);
        pcVar5 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
        lVar19 = lStack_e0;
        if (extraout_x13 != 0) {
          uVar12 = 0;
          pcStack_d8 = pcVar6 + uStack_e8;
          lStack_98 = extraout_x12;
          pcStack_d0 = pcVar6;
          uStack_c8 = extraout_x13;
          do {
            if (*(ulong *)(pcVar6 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x101caae14);
              (*pcVar8)();
            }
            lVar16 = *(long *)(lVar19 + 0x48);
            pcVar10 = pcStack_d8 + lVar16 * uVar12;
            (*pcStack_b8)(lVar15,pcVar10,pcVar8);
            cStack_89 = '\0';
            pcVar6 = pcStack_b0;
            func_0x000107c415e0();
            func_0x000107c61180();
            pcVar4 = pcVar6;
            func_0x000107c5edc4();
            func_0x000107c5fadc();
            func_0x000107c6142c(pcVar10);
            pcVar10 = pcVar4;
            func_0x000107c4341c(pcVar6);
            func_0x000107c61170(pcVar6);
            func_0x000107c61170(pcVar4);
            if (cStack_89 == '\x01') {
              pcVar10 = pcVar5;
              func_0x000107c61558();
              pcStack_80 = pcVar5;
              if (((ulong)pcVar10 & 1) == 0) {
                func_0x00010149910c(0,*(long *)(pcVar5 + 0x10) + 1,1);
              }
              pcVar6 = pcStack_d0;
              uVar1 = *(ulong *)(pcStack_80 + 0x10);
              if (*(ulong *)(pcStack_80 + 0x18) >> 1 <= uVar1) {
                func_0x00010149910c(1 < *(ulong *)(pcStack_80 + 0x18),uVar1 + 1,1);
              }
              pcVar5 = pcStack_80;
              *(ulong *)(pcStack_80 + 0x10) = uVar1 + 1;
              pcVar10 = pcVar8;
              (*pcStack_f0)(pcStack_80 + uVar1 * lVar16 + uStack_e8,lVar15);
              lVar19 = lStack_e0;
            }
            else {
              (**(code **)(lVar19 + 8))(lVar15,pcVar8);
              pcVar6 = pcStack_d0;
            }
            uVar12 = uVar12 + 1;
            (*(code *)PTR____chkstk_darwin_11034bd40)();
            lVar15 = lStack_98 - (lVar13 + 0xfU & 0xfffffffffffffff0);
            lStack_98 = extraout_x12_00;
          } while (uStack_c8 != uVar12);
        }
        lVar13 = lStack_c0;
        func_0x000107c6142c(pcVar6);
        pcStack_80 = (code *)0x726f746365726964;
        uStack_78 = 0xed0000203a736569;
        pcVar6 = pcVar8;
        func_0x000107c5fc58(pcVar5,pcVar8);
        func_0x000107c5fb78();
        func_0x000107c6142c(pcVar6);
        func_0x000107c6142c(uStack_78);
        pcVar11 = *(code **)(lVar19 + 8);
        (*pcVar11)(lVar13,pcVar8);
        (*pcVar11)(lStack_108,pcVar8);
        pcVar6 = pcStack_100;
        (*pcVar11)();
        puVar2 = puStack_f8;
      }
    }
    pcVar4 = pcVar5;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) goto LAB_101caae14;
  }
  else {
    pcVar4 = (code *)0x0;
    func_0x000107c5f0ec();
    func_0x000107c5f0e8();
    pcVar5 = pcVar4;
    func_0x000107c5f0e4();
    pcVar6 = pcVar4;
    func_0x000107c61574();
    pcVar11 = pcVar5;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
LAB_101caae14:
      func_0x000107c60e78();
      *(code **)(puVar2 + -0x20) = pcVar4;
      *(code **)(puVar2 + -0x18) = pcVar11;
      *(undefined1 **)(puVar2 + -0x10) = &stack0xfffffffffffffff0;
      *(code **)(puVar2 + -8) = FUN_101caae18;
      pcVar5 = *(code **)pcVar6;
      if (*(code **)pcVar6 == (code *)0x0) {
        uVar7 = 0xff;
        (*pcVar8)(0xff);
        func_0x000107c61520(pcVar10,uVar7);
        *(code **)pcVar6 = pcVar10;
        pcVar5 = pcVar10;
      }
      return pcVar5;
    }
  }
  return pcVar5;
}



/* Entry: 101caae18; end: 101caae57;  */

void FUN_101caae18(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 101caae58; end: 101caafa3;  */

long FUN_101caae58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  func_0x000107c613fc();
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar2 = &UNK_1104663b8;
  func_0x000107c613fc(&UNK_1104663b8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  pcStack_60 = FUN_101cab034;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_101cab03c;
  puStack_68 = &UNK_1104663d0;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  puVar2 = puStack_58;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  uVar4 = 0;
  func_0x0001002890dc(0);
  func_0x000107c610f8();
  func_0x0001007eaaf4(puVar1,uVar4);
  func_0x000107c61170(param_3);
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return unaff_x20;
}



/* Entry: 101caafa4; end: 101cab033;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101caafa4(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_113083868);
  func_0x000101cb1a94(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar3);
  func_0x000101cb1a58();
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (param_2 != 0) {
    uVar2 = 0;
    FUN_101caf0d0(0);
    func_0x000107c610f8();
    func_0x000101cab2e0(uVar3,param_2,uVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101cab034);
  (*pcVar1)();
}



/* Entry: 101cab034; end: 101cab03b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cab034(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113083868);
  func_0x000101cb1a94(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar4);
  func_0x000101cb1a58();
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar2 != 0) {
    uVar3 = 0;
    FUN_101caf0d0(0);
    func_0x000107c610f8();
    func_0x000101cab2e0(uVar4,lVar2,uVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101cab034);
  (*pcVar1)();
}



/* Entry: 101cab03c; end: 101cab073;  */

void FUN_101cab03c(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101cab074; end: 101cab083;  */

void FUN_101cab074(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 101cab084; end: 101cab0a7;  */

void FUN_101cab084(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101cab0a8; end: 101cab0bb;  */

void FUN_101cab0a8(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 101cab0bc; end: 101cab123;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101cab0bc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112e13360;
  lVar2 = *(long *)(unaff_x20 + _DAT_112e13360);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    func_0x000101caa6f4();
    func_0x000107c610f8();
    func_0x000107c453e4();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar3 = 0;
  }
  func_0x000107c61174(lVar3);
  return lVar2;
}



/* Entry: 101cab124; end: 101cab257;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101cab124(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  long unaff_x20;
  long lVar6;
  
  lVar2 = 0;
  func_0x000107c5f804();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar1 = _DAT_112e13368;
  puVar3 = *(undefined **)(unaff_x20 + _DAT_112e13368);
  puVar4 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    (**(code **)(lVar6 + 0x68))
              (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
               *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO15userInteractiveyA2EmFWC_11034f7e8,
               lVar2);
    puVar4 = PTR_PTR_1126ae790;
    func_0x000107c610f8();
    uVar5 = 0xd00000000000002b;
    func_0x000107c5fadc(0xd00000000000002b,0x800000010f009970);
    func_0x000107c5f800();
    func_0x000107c470d0();
    func_0x000107c61170(uVar5);
    (**(code **)(lVar6 + 8))
              (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar4;
    func_0x000107c61174(puVar4);
    func_0x000107c61170(uVar5);
    puVar3 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar3);
  return puVar4;
}



/* Entry: 101cab258; end: 101cab3b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101cab258(void)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  long unaff_x20;
  
  lVar1 = _DAT_112e13370;
  uVar3 = (uint)*(byte *)(unaff_x20 + _DAT_112e13370);
  if (*(byte *)(unaff_x20 + _DAT_112e13370) == 2) {
    uVar3 = (uint)*(undefined8 *)(unaff_x20 + _DAT_112e13338);
    uVar2 = 0xd000000000000031;
    func_0x000107c5fadc(0xd000000000000031,0x800000010f008fb0);
    func_0x000107c3ebd4();
    func_0x000107c61170(uVar2);
    *(char *)(unaff_x20 + lVar1) = (char)uVar3;
  }
  return uVar3 & 1;
}



/* Entry: 101cab3b4; end: 101cab4a3;  */

void FUN_101cab3b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  uVar1 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if ((int)uVar1 != 0) {
    FUN_101cab124();
    puVar2 = &UNK_110466740;
    func_0x000107c613fc(&UNK_110466740,0x28,7);
    *(undefined8 *)(puVar2 + 0x10) = unaff_x20;
    *(undefined8 *)(puVar2 + 0x18) = param_1;
    *(undefined8 *)(puVar2 + 0x20) = param_2;
    pcStack_50 = FUN_101cb16dc;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_110466758;
    puStack_48 = puVar2;
    func_0x000107c60bc4(&puStack_70);
    puVar2 = puStack_48;
    func_0x000107c61174();
    func_0x000107c6157c(param_2);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(uVar1);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(uVar1);
  }
  return;
}


