/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101d63998; end: 101d63af3;  */

undefined8
FUN_101d63998(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  undefined1 auStack_68 [24];
  
  uVar3 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    func_0x000107c6157c(uVar2);
    func_0x000107c61574(param_2);
    func_0x0001000d224c(auStack_90);
    func_0x000107c61574(uVar2);
    func_0x0001000a8868(auStack_90,uStack_78);
    uVar2 = 0;
    func_0x000101d5e480(0);
    FUN_101d5eab8(param_3,param_4,param_5,uVar2,&PTR_DAT_11047d3c8);
    puVar1 = &UNK_11047dc70;
    func_0x000107c613fc(&UNK_11047dc70,0x18,7);
    *(undefined8 *)(puVar1 + 0x10) = uVar3;
    func_0x000107c61434(uVar3);
    uVar2 = 0x112e29638;
    func_0x0001000285a8(0x112e29638,&UNK_10da11bc0);
    uVar3 = 0;
    func_0x000100775264(0,1,0x101d64184,puVar1,uVar2);
    func_0x000107c61574(param_3);
    func_0x000107c61574(puVar1);
    func_0x0001000834e4(auStack_90);
  }
  return uVar3;
}



/* Entry: 101d63af4; end: 101d63b77;  */

void FUN_101d63af4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000101d617f4();
  func_0x000107c61534();
  param_2[3] = 3;
  param_2[2] = 1;
  param_2[4] = uVar1;
  *param_1 = param_3;
  func_0x000107c61174(uVar1);
  func_0x000107c61434(param_3);
  FUN_101d63b78(param_2);
  return;
}



/* Entry: 101d63b78; end: 101d63d13;  */

void FUN_101d63b78(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    func_0x000107c60480();
  }
  uVar3 = *unaff_x20;
  if (uVar3 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar2 = uVar3;
    }
    func_0x000107c60480();
  }
  if (!SCARRY8(uVar2,uVar4)) {
    func_0x000101d63c64(uVar2 + uVar4,1);
    uVar3 = *unaff_x20;
    uVar2 = uVar3 & 0xffffffffffffff8;
    FUN_101d63d14(uVar2 + *(long *)(uVar2 + 0x10) * 8 + 0x20,
                  (*(ulong *)(uVar2 + 0x18) >> 1) - *(long *)(uVar2 + 0x10));
    func_0x000107c6142c();
    if ((long)param_1 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101d63c60);
      (*pcVar1)();
    }
    if (0 < (long)param_1) {
      if (SCARRY8(*(long *)(uVar2 + 0x10),param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101d63c64);
        (*pcVar1)();
      }
      *(ulong *)(uVar2 + 0x10) = *(long *)(uVar2 + 0x10) + param_1;
    }
    *unaff_x20 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101d63c5c);
  (*pcVar1)();
}



/* Entry: 101d63d14; end: 101d63e7b;  */

ulong FUN_101d63d14(undefined8 *param_1,long param_2,ulong param_3)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101d63e7c);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101d63e70);
        (*pcVar1)();
      }
      uVar2 = 0;
      FUN_101d64128(0,0x112e28d98,&PTR_PTR_1126e0dc8);
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
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101d63e74);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101d63e78);
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
          FUN_101d5d5ac(uVar7,param_3);
          param_1[uVar7] = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 101d63e7c; end: 101d640d7;  */

undefined * FUN_101d63e7c(long param_1,code *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined *puVar5;
  code *pcVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar11 = *(long *)(param_1 + 0x10);
  if (lVar11 != 0) {
    FUN_101d61890(0,lVar11,0);
    uVar1 = param_1 + 0x40;
    uVar7 = uVar1;
    func_0x000107c60268(uVar1,~(-1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)));
    lVar14 = 0;
    iVar4 = *(int *)(param_1 + 0x24);
    do {
      if (uVar7 >> ((ulong)*(byte *)(param_1 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101d640c4);
        (*pcVar6)();
      }
      uVar16 = uVar7 >> 6;
      uVar17 = 1L << (uVar7 & 0x3f);
      if ((*(ulong *)(uVar1 + uVar16 * 8) & uVar17) == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101d640c8);
        (*pcVar6)();
      }
      if (iVar4 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101d640cc);
        (*pcVar6)();
      }
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar7 * 0x10);
      uVar8 = *puVar2;
      uVar3 = puVar2[1];
      uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x38) + uVar7 * 8);
      func_0x000107c61434(uVar3);
      (*param_2)(uVar8,uVar3,uVar12);
      func_0x000107c6142c(uVar3);
      uVar15 = *(ulong *)(puVar5 + 0x10);
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar15) {
        FUN_101d61890(1 < *(ulong *)(puVar5 + 0x18),uVar15 + 1,1);
      }
      *(ulong *)(puVar5 + 0x10) = uVar15 + 1;
      *(undefined8 *)(puVar5 + uVar15 * 8 + 0x20) = uVar8;
      uVar15 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      if (uVar15 <= uVar7) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101d640d0);
        (*pcVar6)();
      }
      uVar9 = *(ulong *)(uVar1 + uVar16 * 8);
      if ((uVar9 & uVar17) == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101d640d4);
        (*pcVar6)();
      }
      if (iVar4 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101d640d8);
        (*pcVar6)();
      }
      uVar9 = uVar9 & -2L << (uVar7 & 0x3f);
      if (uVar9 == 0) {
        lVar13 = uVar16 << 6;
        puVar10 = (ulong *)(param_1 + 0x48 + uVar16 * 8);
        do {
          uVar16 = uVar16 + 1;
          if (uVar15 + 0x3f >> 6 <= uVar16) {
            FUN_101d6419c(uVar7,iVar4,0);
            goto LAB_101d63f1c;
          }
          uVar17 = *puVar10;
          lVar13 = lVar13 + 0x40;
          puVar10 = puVar10 + 1;
        } while (uVar17 == 0);
        FUN_101d6419c(uVar7,iVar4,0);
        uVar7 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar15 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) + lVar13;
      }
      else {
        uVar16 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
        uVar15 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) | uVar7 & 0x7fffffffffffffc0;
      }
LAB_101d63f1c:
      lVar14 = lVar14 + 1;
      uVar7 = uVar15;
    } while (lVar14 != lVar11);
  }
  return puVar5;
}



/* Entry: 101d640d8; end: 101d64127;  */

void FUN_101d640d8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101d63754(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined1 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 101d64128; end: 101d64167;  */

void FUN_101d64128(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 101d64168; end: 101d6419b;  */

void FUN_101d64168(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101d63998(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 101d6419c; end: 101d641af;  */

void FUN_101d6419c(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  return;
}



/* Entry: 101d641b0; end: 101d6420f; -[_TtC38SCMemPlatBackupCleanupStepServicesImpl11CleanupStep init] */

void FUN_101d641b0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMemPlatBackupCleanupStepServicesImpl.CleanupStep",0x32,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101d641dc);
  (*pcVar1)();
}



/* Entry: 101d64210; end: 101d642f7; -[_TtC38SCMemPlatBackupCleanupStepServicesImpl11CleanupStep .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101d6422c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d6424c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d6426c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d6428c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d642ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d642cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d642b0) */
/* WARNING: Removing unreachable block (ram,0x000101d64290) */
/* WARNING: Removing unreachable block (ram,0x000101d64270) */
/* WARNING: Removing unreachable block (ram,0x000101d64250) */
/* WARNING: Removing unreachable block (ram,0x000101d64230) */
/* WARNING: Removing unreachable block (ram,0x000101d642d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d64210(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e29640));
  return;
}



/* Entry: 101d642f8; end: 101d64317;  */

void FUN_101d642f8(void)

{
  func_0x000107c61168(&PTR_PTR_112803388);
  return;
}



/* Entry: 101d64318; end: 101d65113;  */

/* WARNING: Removing unreachable block (ram,0x000101d643fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101d64318(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined *puVar12;
  long lVar13;
  undefined8 uStack_90;
  long lStack_88;
  undefined *puStack_68;
  
  lVar13 = param_1;
  func_0x000107c42950();
  func_0x000107c61180();
  lVar2 = lVar13;
  func_0x000107c5faec();
  uVar8 = param_2;
  func_0x000107c61170(lVar13);
  lVar13 = param_1;
  func_0x000107c3fba4();
  func_0x000107c61180();
  if (lVar13 == 0) {
    uStack_90 = 0;
    lStack_88 = 0;
    uVar9 = uVar8;
  }
  else {
    lStack_88 = lVar13;
    func_0x000107c5faec();
    uVar9 = uVar8;
    func_0x000107c61170(lVar13);
    uStack_90 = uVar8;
  }
  lVar13 = param_1;
  func_0x000107c4188c();
  func_0x000107c61180();
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar13 == 0) {
    bVar1 = false;
    lVar13 = 0;
    puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    lVar3 = lVar13;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar13);
    func_0x000107c610f8(PTR_PTR_1126d7f28);
    func_0x00010006c00c(lVar3,uVar9);
    lVar13 = lVar3;
    FUN_101d6b26c(lVar3,uVar9);
    func_0x00010006c090(lVar3,uVar9);
    func_0x00010006c090(lVar3,uVar9);
    if (lVar13 == 0) {
      bVar1 = false;
      puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
      puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      lVar3 = lVar13;
      func_0x000107c3d868();
      func_0x000107c61180();
      puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (lVar3 != 0) {
        puStack_68 = (undefined *)0x0;
        func_0x000107c5fc50();
        func_0x000107c61170(lVar3);
        if (puStack_68 != (undefined *)0x0) {
          puVar10 = puStack_68;
        }
      }
      lVar3 = lVar13;
      func_0x000107c4173c();
      func_0x000107c61180();
      puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (lVar3 != 0) {
        lVar4 = lVar3;
        func_0x000107c5b2dc();
        func_0x000107c61180();
        func_0x000107c61170(lVar3);
        puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (lVar4 != 0) {
          puStack_68 = (undefined *)0x0;
          func_0x000107c5fc50(lVar4,&puStack_68,PTR___sSSN_11034da80);
          func_0x000107c61170(lVar4);
          if (puStack_68 != (undefined *)0x0) {
            puVar12 = puStack_68;
          }
        }
      }
      lVar3 = lVar13;
      func_0x000107c41714();
      bVar1 = (int)lVar3 == 3;
    }
  }
  puVar5 = &UNK_11047dd48;
  func_0x000107c613fc(&UNK_11047dd48,0x18,7);
  *(undefined **)(puVar5 + 0x10) = puVar6;
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112e29678);
  puStack_68 = puVar10;
  func_0x000107c61434(puVar10);
  func_0x000107c61434(puVar12);
  func_0x00010109a32c(puVar12);
  puVar6 = puStack_68;
  lVar3 = lVar2;
  func_0x000101d64858(lVar2,param_2,bVar1,puStack_68);
  func_0x000107c6142c(puVar6);
  puVar6 = &UNK_11047dd70;
  func_0x000107c613fc(&UNK_11047dd70,0x18,7);
  func_0x000107c61614(puVar6 + 0x10);
  puVar7 = &UNK_11047dd98;
  func_0x000107c613fc(&UNK_11047dd98,0x51,7);
  *(undefined **)(puVar7 + 0x10) = puVar5;
  *(long *)(puVar7 + 0x18) = lVar13;
  *(undefined **)(puVar7 + 0x20) = puVar12;
  *(undefined **)(puVar7 + 0x28) = puVar6;
  *(long *)(puVar7 + 0x30) = lVar2;
  *(undefined8 *)(puVar7 + 0x38) = param_2;
  *(long *)(puVar7 + 0x40) = lStack_88;
  *(undefined8 *)(puVar7 + 0x48) = uStack_90;
  puVar7[0x50] = bVar1;
  puVar6 = &UNK_11047ddc0;
  func_0x000107c613fc(&UNK_11047ddc0,0x20,7);
  *(code **)(puVar6 + 0x10) = FUN_101d6a7f8;
  *(undefined **)(puVar6 + 0x18) = puVar7;
  uVar8 = 0;
  func_0x000101d6cae8(0);
  func_0x000107c61434(puVar12);
  func_0x000107c6157c(puVar5);
  func_0x000107c61174();
  func_0x000107c61434(param_2);
  uVar9 = 0;
  func_0x0001048898b8(0,1,FUN_101d6a830,puVar6,uVar8);
  func_0x000107c61574(lVar3);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_11047dd70;
  func_0x000107c613fc(&UNK_11047dd70,0x18,7);
  func_0x000107c61614(puVar6 + 0x10);
  puVar7 = &UNK_11047dde8;
  func_0x000107c613fc(&UNK_11047dde8,0x58,7);
  *(undefined **)(puVar7 + 0x10) = puVar10;
  *(undefined8 *)(puVar7 + 0x18) = uVar11;
  *(long *)(puVar7 + 0x20) = lVar2;
  *(undefined8 *)(puVar7 + 0x28) = param_2;
  *(long *)(puVar7 + 0x30) = param_1;
  puVar7[0x38] = bVar1;
  *(undefined **)(puVar7 + 0x40) = puVar12;
  *(undefined **)(puVar7 + 0x48) = puVar6;
  *(undefined **)(puVar7 + 0x50) = puVar5;
  func_0x000107c6157c(puVar5);
  func_0x000107c61434(param_2);
  func_0x000107c6157c(uVar11);
  func_0x000107c61174(param_1);
  uVar8 = 0;
  func_0x00010488a220(0,1,FUN_101d6a860,puVar7);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(puVar7);
  uVar9 = 0;
  FUN_101d6b8f0(0,0x112e296d0,&PTR_PTR_1126a9490);
  uVar11 = 0;
  func_0x000100775264(0,1,FUN_101d65e58,0,uVar9);
  func_0x000107c61574(uVar8);
  puVar6 = &UNK_11047dd70;
  func_0x000107c613fc(&UNK_11047dd70,0x18,7);
  func_0x000107c61614(puVar6 + 0x10);
  puVar10 = &UNK_11047de10;
  func_0x000107c613fc(&UNK_11047de10,0x30,7);
  *(undefined **)(puVar10 + 0x10) = puVar6;
  *(long *)(puVar10 + 0x18) = lVar2;
  *(undefined8 *)(puVar10 + 0x20) = param_2;
  *(undefined **)(puVar10 + 0x28) = puVar5;
  func_0x000107c6157c(puVar5);
  uVar8 = 0;
  func_0x000104889f74(0,1,0x101d6a898,puVar10);
  func_0x000107c61574(uVar11);
  func_0x000107c61574(puVar10);
  func_0x000103edf0bc();
  func_0x000107c61170(lVar13);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar8);
  return puVar10;
}



/* Entry: 101d65114; end: 101d6587b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d65114(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,uint param_8,
                  undefined8 param_9,long param_10,long param_11)

{
  undefined8 uVar1;
  undefined1 uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x21;
  undefined8 uVar14;
  long *plVar15;
  long *plVar16;
  undefined8 uVar17;
  long *plVar18;
  ulong *puVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
  long lStack_108;
  long *plStack_100;
  long lStack_e8;
  long *plStack_d8;
  long *plStack_d0;
  undefined1 auStack_c0 [24];
  undefined8 uStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  long lStack_78;
  
  lVar20 = *param_2;
  plVar7 = param_3;
  func_0x000107c30900();
  if (((ulong)param_2 & 1) != 0) goto LAB_101d653e8;
  plVar9 = *(long **)(lVar20 + 0x18);
  if ((ulong)plVar9 >> 0x3e == 0) {
    plStack_d0 = *(long **)(((ulong)plVar9 & 0xffffffffffffff8) + 0x10);
    if (plStack_d0 != (long *)0x0) {
LAB_101d65184:
      plVar10 = (long *)0x0;
      do {
        if (((ulong)plVar9 & 0xc000000000000001) == 0) {
          if (*(long **)(((ulong)plVar9 & 0xffffffffffffff8) + 0x10) <= plVar10) {
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(1,0x101d656b8);
            (*pcVar11)();
          }
          param_2 = (long *)plVar9[(long)((long)plVar10 + 4)];
          func_0x000107c6157c();
        }
        else {
          param_2 = plVar10;
          plVar7 = plVar9;
          FUN_101d6abc0();
        }
        if (SCARRY8((long)plVar10,1)) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x101d656b4);
          (*pcVar11)();
        }
        plVar10 = (long *)((long)plVar10 + 1);
        if ((((((10 < *(byte *)(param_2 + 3) ||
                 (1 << (ulong)(*(byte *)(param_2 + 3) & 0x1f) & 0x605U) == 0) ||
               (10 < *(byte *)((long)param_2 + 0x19) ||
                (1 << (ulong)(*(byte *)((long)param_2 + 0x19) & 0x1f) & 0x605U) == 0)) ||
              (10 < *(byte *)((long)param_2 + 0x1a))) ||
             (((1 << (ulong)(*(byte *)((long)param_2 + 0x1a) & 0x1f) & 0x605U) == 0 ||
              (10 < *(byte *)((long)param_2 + 0x1b))))) ||
            (((1 << (ulong)(*(byte *)((long)param_2 + 0x1b) & 0x1f) & 0x605U) == 0 ||
             ((10 < *(byte *)((long)param_2 + 0x1c) ||
              ((1 << (ulong)(*(byte *)((long)param_2 + 0x1c) & 0x1f) & 0x605U) == 0)))))) ||
           ((10 < *(byte *)((long)param_2 + 0x1d) ||
            (((((1 << (ulong)(*(byte *)((long)param_2 + 0x1d) & 0x1f) & 0x605U) == 0 ||
               (10 < *(byte *)((long)param_2 + 0x1e))) ||
              ((1 << (ulong)(*(byte *)((long)param_2 + 0x1e) & 0x1f) & 0x605U) == 0)) ||
             ((10 < *(byte *)((long)param_2 + 0x1f) ||
              ((1 << (ulong)(*(byte *)((long)param_2 + 0x1f) & 0x1f) & 0x605U) == 0)))))))) {
LAB_101d65650:
          func_0x000107c61574();
          goto LAB_101d65658;
        }
        plVar21 = (long *)param_2[4];
        if ((ulong)plVar21 >> 0x3e == 0) {
          plVar18 = *(long **)(((ulong)plVar21 & 0xffffffffffffff8) + 0x10);
        }
        else {
          plVar18 = (long *)((ulong)plVar21 & 0xffffffffffffff8);
          if ((long *)0x7fffffffffffffff < plVar21) {
            plVar18 = plVar21;
          }
          func_0x000107c60480();
        }
        if (plVar18 != (long *)0x0) {
          plVar22 = (long *)0x0;
          do {
            if (((ulong)plVar21 & 0xc000000000000001) == 0) {
              if (*(long **)(((ulong)plVar21 & 0xffffffffffffff8) + 0x10) <= plVar22) {
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x101d656ac);
                (*pcVar11)();
              }
              plVar15 = (long *)plVar21[(long)((long)plVar22 + 4)];
              func_0x000107c6157c(plVar15);
            }
            else {
              plVar15 = plVar22;
              plVar7 = plVar21;
              func_0x000101d6ad5c();
            }
            if (SCARRY8((long)plVar22,1)) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x101d656a8);
              (*pcVar11)();
            }
            plVar16 = (long *)((long)plVar22 + 1);
            if ((10 < *(byte *)(plVar15 + 3) ||
                 (1 << (ulong)(*(byte *)(plVar15 + 3) & 0x1f) & 0x605U) == 0) ||
               (10 < *(byte *)((long)plVar15 + 0x19) ||
                (1 << (ulong)(*(byte *)((long)plVar15 + 0x19) & 0x1f) & 0x605U) == 0)) {
              func_0x000107c61574(param_2);
              param_2 = plVar15;
              goto LAB_101d65650;
            }
            func_0x000107c61574(plVar15);
            plVar22 = (long *)((long)plVar22 + 1);
          } while (plVar16 != plVar18);
        }
        if ((10 < *(byte *)(param_2 + 5)) ||
           ((1 << (ulong)(*(byte *)(param_2 + 5) & 0x1f) & 0x605U) == 0)) goto LAB_101d65650;
        func_0x000107c61574();
      } while (plVar10 != plStack_d0);
    }
  }
  else {
    plStack_d0 = (long *)((ulong)plVar9 & 0xffffffffffffff8);
    if ((long *)0x7fffffffffffffff < plVar9) {
      plStack_d0 = plVar9;
    }
    func_0x000107c60480();
    if (plStack_d0 != (long *)0x0) goto LAB_101d65184;
    param_2 = (long *)0x0;
  }
  if ((10 < *(byte *)(lVar20 + 0x20) ||
       (1 << (ulong)(*(byte *)(lVar20 + 0x20) & 0x1f) & 0x605U) == 0) ||
     (10 < *(byte *)(lVar20 + 0x21) || (1 << (ulong)(*(byte *)(lVar20 + 0x21) & 0x1f) & 0x605U) == 0
     )) {
LAB_101d65658:
    FUN_101d6c698();
    plVar7 = param_2;
    func_0x000101d6b37c();
    func_0x000107c613f8(&UNK_11047e850,plVar7,0,0);
    *(char *)((long)plVar7 + 4) = (char)((ulong)param_2 >> 0x20);
    *(int *)plVar7 = (int)param_2;
    *(undefined1 *)((long)plVar7 + 5) = 0;
    func_0x000107c61654();
    return;
  }
LAB_101d653e8:
  plVar9 = *(long **)(lVar20 + 0x18);
  if ((ulong)plVar9 >> 0x3e == 0) {
    plVar10 = *(long **)(((ulong)plVar9 & 0xffffffffffffff8) + 0x10);
  }
  else {
    plVar10 = (long *)((ulong)plVar9 & 0xffffffffffffff8);
    if ((long *)0x7fffffffffffffff < plVar9) {
      plVar10 = plVar9;
    }
    func_0x000107c60480();
  }
  if (plVar10 != (long *)0x0) {
    plVar21 = (long *)0x0;
    do {
      while( true ) {
        if (((ulong)plVar9 & 0xc000000000000001) == 0) {
          if (*(long **)(((ulong)plVar9 & 0xffffffffffffff8) + 0x10) <= plVar21) {
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(1,0x101d656b0);
            (*pcVar11)();
          }
          plVar18 = (long *)plVar9[(long)((long)plVar21 + 4)];
          func_0x000107c6157c(plVar18);
          plVar22 = plVar7;
          uVar12 = param_1;
        }
        else {
          plVar18 = plVar21;
          plVar22 = plVar9;
          FUN_101d6abc0();
          uVar12 = param_1;
        }
        if (SCARRY8((long)plVar21,1)) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x101d6563c);
          (*pcVar11)();
        }
        plVar21 = (long *)((long)plVar21 + 1);
        uVar4 = plVar18[2];
        func_0x000107c5b2d0();
        func_0x000107c61180();
        plVar7 = plVar22;
        param_1 = uVar12;
        if (uVar4 != 0) break;
LAB_101d65438:
        func_0x000107c61574(plVar18);
        if (plVar21 == plVar10) goto LAB_101d656d0;
      }
      uVar5 = uVar4;
      func_0x000107c5faec();
      plVar7 = plVar22;
      func_0x000107c61170(uVar4);
      lVar8 = param_3[2] + 1;
      puVar19 = (ulong *)(param_3 + 5);
      do {
        lVar8 = lVar8 + -1;
        if (lVar8 == 0) {
          func_0x000107c6142c(plVar22);
          param_1 = uVar12;
          goto LAB_101d65438;
        }
        uVar4 = puVar19[-1];
        plVar7 = (long *)*puVar19;
        if (uVar4 == uVar5 && plVar7 == plVar22) break;
        puVar19 = puVar19 + 2;
        func_0x000107c605b8(uVar4,plVar7,uVar5,plVar22,0);
      } while ((uVar4 & 1) == 0);
      func_0x000107c6142c(plVar22);
      func_0x0001000d224c(&uStack_80);
      lVar8 = lStack_78;
      uVar13 = uStack_80;
      lVar6 = plVar18[2];
      func_0x000107c5b2d0();
      func_0x000107c61180();
      if (lVar6 == 0) {
        lStack_e8 = 0;
        plStack_d8 = (long *)0x0;
        plStack_100 = plVar7;
      }
      else {
        lStack_e8 = lVar6;
        func_0x000107c5faec();
        plStack_100 = plVar7;
        func_0x000107c61170(lVar6);
        plStack_d8 = plVar7;
      }
      uVar14 = *(undefined8 *)(lVar20 + 0x38);
      uVar17 = *(undefined8 *)(lVar20 + 0x40);
      lVar6 = plVar18[2];
      func_0x000107c61434();
      func_0x000107c4c99c();
      func_0x000107c61180();
      if (lVar6 == 0) {
        lStack_108 = 0;
        plStack_100 = (long *)0x0;
      }
      else {
        lStack_108 = lVar6;
        func_0x000107c5faec();
        func_0x000107c61170(lVar6);
      }
      func_0x000107c614f0();
      iVar3 = (int)*(undefined8 *)(lVar20 + 0x10);
      func_0x000107c43c94();
      func_0x000107c4df94(param_7);
      uVar1 = *(undefined8 *)(lVar20 + 0x50);
      pcVar11 = *(code **)(lVar8 + 0x10);
      param_1 = uVar12;
      func_0x000107c61434(uVar1);
      plVar7 = plStack_d8;
      (*pcVar11)(lStack_e8,plStack_d8,uVar14,uVar17,lStack_108,plStack_100,param_5,param_6,
                 (long)iVar3,uVar12,0);
      func_0x000107c615e8(uVar13);
      func_0x000107c6142c(uVar17);
      func_0x000107c6142c(uVar1);
      func_0x000107c61574(plVar18);
      func_0x000107c6142c(plStack_100);
      func_0x000107c6142c(plStack_d8);
    } while (plVar21 != plVar10);
  }
LAB_101d656d0:
  if ((param_8 & 1) == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = *(undefined8 *)(lVar20 + 0x10);
    func_0x000107c61174(uVar12);
  }
  uVar4 = (ulong)(param_8 & 1);
  FUN_101d6587c(uVar4,param_9,lVar20);
  func_0x000107c61428(param_10 + 0x10,&uStack_80,0,0);
  lVar8 = param_10 + 0x10;
  func_0x000107c61618();
  if (lVar8 != 0) {
    FUN_101d65ccc(uVar12,uVar4);
    func_0x000107c61170(lVar8);
    if (unaff_x21 != 0) {
      func_0x000107c61170(uVar12);
      func_0x000107c6142c(uVar4);
      return;
    }
  }
  func_0x000107c6142c(uVar4);
  func_0x000107c61428(param_10 + 0x10,auStack_98,0,0);
  param_10 = param_10 + 0x10;
  func_0x000107c61618();
  if (param_10 != 0) {
    uVar13 = *(undefined8 *)(param_10 + _DAT_112e29670);
    func_0x000107c6157c(uVar13);
    func_0x000107c61170(param_10);
    func_0x0001000d224c(&uStack_a8);
    func_0x000107c61574(uVar13);
    uVar13 = uStack_a8;
    func_0x000107c614f0(uStack_a8);
    func_0x000107c61428(param_11 + 0x10,auStack_c0,0,0);
    uVar17 = *(undefined8 *)(param_11 + 0x10);
    uVar14 = *(undefined8 *)(lVar20 + 0x28);
    pcVar11 = *(code **)(lStack_a0 + 0x10);
    uVar2 = *(undefined1 *)(lVar20 + 0x30);
    func_0x000107c61434(uVar17);
    (*pcVar11)(param_5,param_6,uVar17,uVar14,uVar2,uVar13,lStack_a0);
    func_0x000107c615e8(uStack_a8);
    func_0x000107c6142c(uVar17);
  }
  func_0x000107c61170(uVar12);
  return;
}



/* Entry: 101d6587c; end: 101d65ccb;  */

undefined * FUN_101d6587c(ulong param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long *plVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined *puStack_78;
  
  if (((param_1 & 1) == 0) && (uVar19 = *(ulong *)(param_2 + 0x10), uVar19 != 0)) {
    uVar16 = *(ulong *)(param_3 + 0x18);
    if (uVar16 >> 0x3e == 0) {
      uVar14 = *(ulong *)((uVar16 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar14 = uVar16 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar16) {
        uVar14 = uVar16;
      }
      func_0x000107c60480();
    }
    puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar14 == 0) {
    }
    else {
      FUN_101d53294(0,uVar14 & ((long)uVar14 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101d65ccc);
        (*pcVar3)();
      }
      if ((uVar16 & 0xc000000000000001) == 0) {
        plVar12 = (long *)(uVar16 + 0x20);
        do {
          uVar4 = *(undefined8 *)(*plVar12 + 0x10);
          uVar16 = *(ulong *)(puStack_78 + 0x10);
          uVar17 = *(ulong *)(puStack_78 + 0x18);
          func_0x000107c61174();
          if (uVar17 >> 1 <= uVar16) {
            FUN_101d53294(1 < uVar17,uVar16 + 1,1);
          }
          *(ulong *)(puStack_78 + 0x10) = uVar16 + 1;
          *(undefined8 *)(puStack_78 + uVar16 * 8 + 0x20) = uVar4;
          uVar14 = uVar14 - 1;
          plVar12 = plVar12 + 1;
        } while (uVar14 != 0);
      }
      else {
        uVar17 = 0;
        do {
          uVar18 = uVar17;
          FUN_101d6abc0(uVar17,uVar16);
          uVar4 = *(undefined8 *)(uVar18 + 0x10);
          func_0x000107c61174();
          func_0x000107c615e8(uVar18);
          uVar18 = *(ulong *)(puStack_78 + 0x10);
          if (*(ulong *)(puStack_78 + 0x18) >> 1 <= uVar18) {
            FUN_101d53294(1 < *(ulong *)(puStack_78 + 0x18),uVar18 + 1,1);
          }
          uVar17 = uVar17 + 1;
          *(ulong *)(puStack_78 + 0x10) = uVar18 + 1;
          *(undefined8 *)(puStack_78 + uVar18 * 8 + 0x20) = uVar4;
        } while (uVar14 != uVar17);
      }
    }
    uVar16 = 0;
    puVar15 = (undefined *)((ulong)puStack_78 & 0xffffffffffffff8);
    puVar2 = puVar15;
    if ((undefined *)0x7fffffffffffffff < puStack_78) {
      puVar2 = puStack_78;
    }
    puVar8 = param_2;
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_101d65a24:
    uVar14 = uVar16;
    if (uVar16 <= uVar19) {
      uVar14 = uVar19;
    }
    do {
      if (uVar16 == uVar14) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101d65ca8);
        (*pcVar3)();
      }
      uVar17 = *(ulong *)(param_2 + uVar16 * 0x10 + 0x20);
      puVar9 = *(undefined **)((long)(param_2 + uVar16 * 0x10 + 0x20) + 8);
      if ((ulong)puStack_78 >> 0x3e == 0) {
        puVar13 = *(undefined **)(puVar15 + 0x10);
      }
      else {
        puVar13 = puVar2;
        func_0x000107c60480();
      }
      uVar16 = uVar16 + 1;
      func_0x000107c61434(puVar9);
      if (puVar13 != (undefined *)0x0) {
        uVar18 = 0;
        do {
          if (((ulong)puStack_78 & 0xc000000000000001) == 0) {
            if (*(ulong *)(puVar15 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101d65ca4);
              (*pcVar3)();
            }
            uVar5 = *(ulong *)(puStack_78 + uVar18 * 8 + 0x20);
            func_0x000107c61174();
            puVar11 = puVar8;
          }
          else {
            uVar5 = uVar18;
            puVar11 = puStack_78;
            FUN_101d6af0c(uVar18,puStack_78,&PTR_PTR_1126bc7d8,0x112e28b08);
          }
          puVar1 = (undefined *)(uVar18 + 1);
          if (SCARRY8(uVar18,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101d65ca0);
            (*pcVar3)();
          }
          uVar6 = uVar5;
          func_0x000107c5b2d0();
          func_0x000107c61180();
          puVar8 = puVar11;
          if (uVar6 != 0) {
            uVar7 = uVar6;
            func_0x000107c5faec();
            puVar8 = puVar11;
            func_0x000107c61170(uVar6);
            if ((uVar7 == uVar17) && (puVar11 == puVar9)) {
              func_0x000107c6142c(puVar9);
              puVar9 = puVar11;
            }
            else {
              puVar8 = puVar11;
              func_0x000107c605b8(uVar7,puVar11,uVar17,puVar9,0);
              func_0x000107c6142c(puVar11);
              if ((uVar7 & 1) == 0) goto LAB_101d65abc;
            }
            func_0x000107c6142c(puVar9);
            puVar9 = puVar10;
            func_0x000107c61550();
            if ((((int)puVar9 == 0) || ((long)puVar10 < 0)) ||
               (puVar9 = puVar10, ((ulong)puVar10 >> 0x3e & 1) != 0)) {
              if ((ulong)puVar10 >> 0x3e == 0) {
                puVar8 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
              }
              else {
                puVar8 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
                if ((undefined *)0x7fffffffffffffff < puVar10) {
                  puVar8 = puVar10;
                }
                func_0x000107c60480();
              }
              puVar8 = puVar8 + 1;
              puVar9 = (undefined *)0x0;
              FUN_101d6a8b4(0,puVar8,1,puVar10,0x112e28b08,&PTR_PTR_1126bc7d8,0x112e28b28,
                            &UNK_10da11c10);
            }
            uVar17 = (ulong)puVar9 & 0xffffffffffffff8;
            uVar14 = *(ulong *)(uVar17 + 0x10);
            puVar13 = (undefined *)(uVar14 + 1);
            puVar10 = puVar9;
            if (*(ulong *)(uVar17 + 0x18) >> 1 <= uVar14) {
              puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar17 + 0x18));
              puVar8 = puVar13;
              FUN_101d6a8b4(puVar10,puVar13,1,puVar9,0x112e28b08,&PTR_PTR_1126bc7d8,0x112e28b28,
                            &UNK_10da11c10);
              uVar17 = (ulong)puVar10 & 0xffffffffffffff8;
            }
            *(undefined **)(uVar17 + 0x10) = puVar13;
            *(ulong *)(uVar17 + uVar14 * 8 + 0x20) = uVar5;
            if (uVar16 == uVar19) goto LAB_101d65c70;
            goto LAB_101d65a24;
          }
LAB_101d65abc:
          func_0x000107c61170(uVar5);
          uVar18 = uVar18 + 1;
        } while (puVar1 != puVar13);
      }
      func_0x000107c6142c(puVar9);
    } while (uVar16 != uVar19);
LAB_101d65c70:
    func_0x000107c6142c(puStack_78);
  }
  else {
    puVar10 = (undefined *)0x0;
  }
  return puVar10;
}



/* Entry: 101d65ccc; end: 101d65e57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d65ccc(long param_1,ulong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined4 **ppuVar4;
  ulong uVar5;
  undefined4 *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  if (param_1 == 0) {
    if (param_2 == 0) {
      return;
    }
    if (param_2 >> 0x3e == 0) {
      uVar5 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar5 = param_2;
      if (-1 < (long)param_2) {
        uVar5 = param_2 & 0xffffffffffffff8;
      }
      func_0x000107c60480();
    }
    if (uVar5 == 0) {
      return;
    }
  }
  func_0x0001000d224c(&puStack_70);
  puVar2 = puStack_70;
  if (puStack_70 != (undefined4 *)0x0) {
    func_0x000107c615e8();
    func_0x0001000d224c(&puStack_70);
    puVar1 = puStack_70;
    if (puStack_70 != (undefined4 *)0x0) {
      puVar3 = &UNK_11047de38;
      func_0x000107c613fc(&UNK_11047de38,0x20,7);
      *(ulong *)(puVar3 + 0x10) = param_2;
      *(long *)(puVar3 + 0x18) = param_1;
      pcStack_50 = FUN_101d6b3bc;
      puStack_70 = (undefined4 *)PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      puStack_60 = &UNK_1000f6b44;
      puStack_58 = &UNK_11047de50;
      puStack_48 = puVar3;
      func_0x000107c60bc4(&puStack_70);
      puVar3 = puStack_48;
      func_0x000107c61174(param_1);
      func_0x000107c61434(param_2);
      func_0x000107c61574(puVar3);
      func_0x000107c4e554(puVar1);
      func_0x000107c61180();
      func_0x000107c61170();
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c615e8(puVar1);
      return;
    }
  }
  func_0x000101d6b37c();
  func_0x000107c613f8(&UNK_11047e850,puVar2,0,0);
  *puVar2 = 0;
  *(undefined2 *)(puVar2 + 1) = 0x100;
  func_0x000107c61654();
  return;
}



/* Entry: 101d65e58; end: 101d65e8f;  */

void FUN_101d65e58(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a9490;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = puVar1;
  return;
}



/* Entry: 101d65e90; end: 101d66063;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined **
FUN_101d65e90(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined4 auStack_90 [6];
  undefined *puStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  uVar6 = param_1;
  lVar5 = param_2;
  func_0x000103fbd0c8();
  auStack_90[0] = 0;
  uVar1 = 0;
  FUN_101d6b32c(0);
  func_0x000103fbcd10(auStack_68,param_1,auStack_90,0,uVar1);
  puVar2 = PTR_PTR_1126a9498;
  func_0x000107c610f8(PTR_PTR_1126a9498);
  func_0x000107c45e78();
  func_0x000107c5fadc(uVar6,lVar5);
  func_0x000107c6142c(lVar5);
  func_0x000107c5662c(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar6 = *(undefined8 *)(param_2 + _DAT_112e29670);
    func_0x000107c6157c(uVar6);
    func_0x000107c61170(param_2);
    func_0x0001000d224c(&puStack_78);
    func_0x000107c61574(uVar6);
    puVar3 = puStack_78;
    func_0x000107c614f0(puStack_78);
    func_0x000107c61428(param_5 + 0x10,auStack_90,0,0);
    uVar6 = *(undefined8 *)(param_5 + 0x10);
    pcVar7 = *(code **)(lStack_70 + 0x20);
    func_0x000107c61434(uVar6);
    (*pcVar7)(param_3,param_4,uVar6,0,puVar3,lStack_70);
    func_0x000107c615e8(puStack_78);
    func_0x000107c6142c(uVar6);
  }
  puVar3 = PTR_PTR_1126a9490;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c54654();
  func_0x0001000285a8(0x112e296d8,&UNK_10da11c08);
  ppuVar4 = &puStack_78;
  puStack_78 = puVar3;
  func_0x000104888f7c(ppuVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  return ppuVar4;
}



/* Entry: 101d66064; end: 101d660bf; -[_TtC38SCMemPlatBackupCleanupStepServicesImpl11CleanupStep cleanupWithStepData:] */

void FUN_101d66064(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_101d64318(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101d660c0; end: 101d660c7; -[_TtC38SCMemPlatBackupCleanupStepServicesImpl11CleanupStep shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_101d660c0(void)

{
  return 0;
}



/* Entry: 101d660c8; end: 101d660d3; -[_TtC38SCMemPlatBackupCleanupStepServicesImpl11CleanupStep pushToValdiMarshaller:] */

void FUN_101d660c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000105f5fe80(param_3,param_1);
  func_0x000105f5fe68();
  func_0x000105f5fe60();
  func_0x000105f5fdfc();
  func_0x000105f5fe18();
  return;
}



/* Entry: 101d660d4; end: 101d663d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d660d4(long param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  ulong param_5,long param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puStack_78;
  undefined4 *puStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  puVar5 = (undefined4 *)0x0;
  if (param_1 == 0) {
LAB_101d661e0:
    func_0x000101d6b37c();
    puVar2 = &UNK_11047e850;
    func_0x000107c613f8(&UNK_11047e850,puVar5,0,0);
    *puVar5 = 0;
    *(undefined2 *)(puVar5 + 1) = 0x100;
    func_0x00010488ade0();
    func_0x000107c614ac(puVar2);
    return;
  }
  puVar5 = *(undefined4 **)(param_1 + _DAT_112e29648);
  func_0x000107c6157c(puVar5);
  func_0x000107c61170(param_1);
  func_0x0001000d224c(&puStack_78);
  func_0x000107c61574();
  if (puStack_78 == (undefined4 *)0x0) goto LAB_101d661e0;
  func_0x000107c5fadc(param_3,param_4);
  puVar5 = puStack_78;
  func_0x000107c431bc();
  func_0x000107c61180();
  func_0x000107c61170();
  if (puVar5 == (undefined4 *)0x0) {
    func_0x000101d6b37c();
    puVar2 = &UNK_11047e850;
    func_0x000107c613f8(&UNK_11047e850,param_3,0,0);
    *param_3 = 1;
    *(undefined2 *)(param_3 + 1) = 0x100;
    func_0x00010488ade0();
    func_0x000107c614ac(puVar2);
    goto LAB_101d66340;
  }
  puVar4 = puStack_78;
  if ((param_5 & 1) == 0) {
    if (*(long *)(param_6 + 0x10) != 0) {
      func_0x000107c5fc48(param_6,PTR___sSSN_11034da80);
      func_0x000107c431d0();
      func_0x000107c61180();
      func_0x000107c61170(param_6);
      uVar1 = 0;
      FUN_101d6b8f0(0,0x112e28b08,&PTR_PTR_1126bc7d8);
      puVar3 = puVar4;
      func_0x000107c5fc54(puVar4,uVar1);
      goto LAB_101d662cc;
    }
    puStack_70 = (undefined4 *)PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c61174(puVar5);
    func_0x000100b60084(&puStack_78);
  }
  else {
    func_0x000107c431cc();
    func_0x000107c61180();
    uVar1 = 0;
    FUN_101d6b8f0(0,0x112e28b08,&PTR_PTR_1126bc7d8);
    puVar3 = puVar4;
    func_0x000107c5fc54(puVar4,uVar1);
LAB_101d662cc:
    func_0x000107c61170(puVar4);
    if ((ulong)puVar3 >> 0x3e == 0) {
      puVar4 = *(undefined4 **)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar4 = (undefined4 *)((ulong)puVar3 & 0xffffffffffffff8);
      if ((undefined4 *)0x7fffffffffffffff < puVar3) {
        puVar4 = puVar3;
      }
      func_0x000107c60480();
    }
    if (puVar4 == (undefined4 *)0x0) {
      func_0x000107c6142c();
      func_0x000101d6b37c();
      puVar2 = &UNK_11047e850;
      func_0x000107c613f8(&UNK_11047e850,puVar3,0,0);
      *puVar3 = 2;
      *(undefined2 *)(puVar3 + 1) = 0x100;
      func_0x00010488ade0();
      func_0x000107c614ac(puVar2);
      func_0x000107c615e8(puStack_78);
      func_0x000107c61170(puVar5);
      return;
    }
    puStack_70 = puVar3;
    func_0x000107c61174(puVar5);
    func_0x000100b60084(&puStack_78);
    func_0x000107c6142c(puVar3);
  }
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar5);
LAB_101d66340:
  func_0x000107c615e8(puStack_78);
  return;
}



/* Entry: 101d663d4; end: 101d664db;  */

undefined8 FUN_101d663d4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    param_3 = 0;
  }
  else {
    FUN_101d6b4f4(param_3,*(undefined8 *)(param_4 + 0x18));
    func_0x000107c61170(param_1);
  }
  return param_3;
}



/* Entry: 101d664dc; end: 101d6690b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d664dc(undefined8 param_1,ulong param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  if ((param_2 & 1) != 0) {
    func_0x0001000d224c(&puStack_80);
    if (puStack_80 == (undefined *)0x0) {
      func_0x0001000d224c(&puStack_80);
      puVar6 = puStack_80;
      if (puStack_80 != (undefined *)0x0) {
        func_0x0001000285a8(0x112d69a88,&UNK_10d97b880);
        func_0x000107c613fc();
        lVar1 = 0;
        func_0x00010095c380();
        func_0x000107c41750(puStack_80);
        puVar2 = puStack_80;
        func_0x000107c61180();
        puVar3 = &UNK_11047dff0;
        func_0x000107c613fc(&UNK_11047dff0,0x20,7);
        *(long *)(puVar3 + 0x10) = param_3;
        *(long *)(puVar3 + 0x18) = lVar1;
        pcStack_60 = FUN_101d6b4bc;
        puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_78 = 0x42000000;
        pcStack_70 = FUN_101d58ff0;
        puStack_68 = &UNK_11047e008;
        puStack_58 = puVar3;
        func_0x000107c60bc4(&puStack_80);
        puVar3 = puStack_58;
        func_0x000107c6157c(param_3);
        func_0x000107c6157c(lVar1);
        func_0x000107c61574(puVar3);
        func_0x0001000d224c(&puStack_80);
        puVar3 = puStack_80;
        func_0x000107c5dc64(puVar2);
        func_0x000107c615e8(puVar3);
        func_0x000107c615e8(puVar6);
        func_0x000107c60bd0(ppuVar4);
        func_0x000107c61170(puVar2);
        func_0x000107c6157c(*(undefined8 *)(lVar1 + 0x10));
        func_0x000107c61574(lVar1);
        return;
      }
      puVar5 = (undefined4 *)0x112d51a30;
      func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
      func_0x000101d6b37c();
      puVar6 = &UNK_11047e850;
      func_0x000107c613f8(&UNK_11047e850,puVar5,0,0);
      *puVar5 = 0;
      *(undefined2 *)(puVar5 + 1) = 0x100;
      func_0x00010488904c();
      func_0x000107c614ac(puVar6);
      return;
    }
    func_0x000107c615e8();
  }
  *(undefined1 *)(param_3 + 0x20) = 0;
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  func_0x000104888f7c();
  return;
}



/* Entry: 101d6690c; end: 101d66b5b;  */

undefined8 FUN_101d6690c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  uVar5 = param_1;
  func_0x000101d6717c();
  puVar6 = &UNK_11047dd70;
  puVar2 = puVar6;
  func_0x000107c613fc(&UNK_11047dd70,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_11047e180;
  func_0x000107c613fc(&UNK_11047e180,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  puVar2 = &UNK_11047e1a8;
  func_0x000107c613fc(&UNK_11047e1a8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x101d6bccc;
  *(undefined **)(puVar2 + 0x18) = puVar3;
  func_0x000107c61434(param_1);
  func_0x000107c6157c(param_2);
  puVar1 = PTR___sytN_11034f1b0;
  uVar4 = 0;
  func_0x0001048898b8(0,1,0x101d6bc24,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(puVar2);
  puVar2 = puVar6;
  func_0x000107c613fc(&UNK_11047dd70,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_11047e1d0;
  func_0x000107c613fc(&UNK_11047e1d0,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  puVar2 = &UNK_11047e1f8;
  func_0x000107c613fc(&UNK_11047e1f8,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_101d6b7b0;
  *(undefined **)(puVar2 + 0x18) = puVar3;
  func_0x000107c61434(param_1);
  func_0x000107c6157c(param_2);
  uVar5 = 0;
  func_0x0001048898b8(0,1,0x101d6bc38,puVar2,puVar1 + 8);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c613fc(&UNK_11047dd70,0x18,7);
  func_0x000107c61614(puVar6 + 0x10);
  puVar3 = &UNK_11047e220;
  func_0x000107c613fc(&UNK_11047e220,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar6;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  puVar6 = &UNK_11047e248;
  func_0x000107c613fc(&UNK_11047e248,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = 0x101d6b7d4;
  *(undefined **)(puVar6 + 0x18) = puVar3;
  func_0x000107c61434(param_1);
  func_0x000107c6157c(param_2);
  uVar4 = 0;
  func_0x0001048898b8(0,1,0x101d6bc4c,puVar6,puVar1 + 8);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(puVar6);
  return uVar4;
}



/* Entry: 101d66b5c; end: 101d66be7;  */

void FUN_101d66b5c(long param_1)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x000107c5b2d0();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x0001000d224c(&lStack_28);
    if (lStack_28 != 0) {
      func_0x000107c51688(lStack_28);
      func_0x000107c615e8(lStack_28);
    }
    func_0x000107c61170(lVar1);
  }
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  func_0x000104888f7c();
  return;
}



/* Entry: 101d66be8; end: 101d676eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101d66be8(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  long lVar10;
  undefined8 uVar11;
  long lStack_68;
  
  lVar8 = param_2;
  func_0x0001000d224c(&lStack_68);
  lVar1 = lStack_68;
  if (lStack_68 != 0) {
    lVar10 = *(long *)(param_2 + 0x10);
    lVar2 = lVar10;
    func_0x000107c5b2d0();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c615e8(lVar1);
    }
    else {
      lVar3 = lVar2;
      func_0x000107c5faec();
      lVar9 = lVar8;
      func_0x000107c61170(lVar2);
      func_0x000107c5b1b0();
      func_0x000107c61180();
      if (lVar10 != 0) {
        lVar2 = lVar10;
        func_0x000107c5ee30();
        func_0x000107c61170(lVar10);
        func_0x0001000285a8(0x112d69a88,&UNK_10d97b880);
        func_0x000107c613fc();
        lVar4 = 0;
        func_0x00010095c380();
        func_0x0001000d224c(&lStack_68);
        lVar10 = lStack_68;
        func_0x000107c614f0();
        uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112e29668);
        puVar7 = &UNK_11047e6d0;
        func_0x000107c613fc(&UNK_11047e6d0,0x58,7);
        *(undefined8 *)(puVar7 + 0x10) = uVar11;
        *(long *)(puVar7 + 0x18) = lVar2;
        *(long *)(puVar7 + 0x20) = lVar9;
        *(long *)(puVar7 + 0x28) = param_2;
        *(long *)(puVar7 + 0x30) = lVar4;
        *(long *)(puVar7 + 0x38) = lVar3;
        *(long *)(puVar7 + 0x40) = lVar8;
        *(undefined8 *)(puVar7 + 0x48) = param_1;
        *(long *)(puVar7 + 0x50) = lVar1;
        func_0x000107c6157c(uVar11);
        func_0x00010006c00c(lVar2,lVar9);
        func_0x000107c6157c(param_2);
        func_0x000107c6157c(lVar4);
        func_0x000107c61434(param_1);
        func_0x000107c615f0(lVar1);
        func_0x00010090569c(FUN_101d6ba7c,puVar7,lVar10);
        func_0x000107c615e8(lStack_68);
        func_0x000107c61574(puVar7);
        uVar11 = *(undefined8 *)(lVar4 + 0x10);
        puVar7 = &UNK_11047dd70;
        func_0x000107c613fc(&UNK_11047dd70,0x18,7);
        func_0x000107c61614(puVar7 + 0x10);
        puVar5 = &UNK_11047e6f8;
        func_0x000107c613fc(&UNK_11047e6f8,0x28,7);
        *(undefined **)(puVar5 + 0x10) = puVar7;
        *(undefined8 *)(puVar5 + 0x18) = param_1;
        *(long *)(puVar5 + 0x20) = param_2;
        puVar7 = &UNK_11047e720;
        func_0x000107c613fc(&UNK_11047e720,0x20,7);
        *(undefined8 *)(puVar7 + 0x10) = 0x101d6bae4;
        *(undefined **)(puVar7 + 0x18) = puVar5;
        func_0x000107c6157c(param_2);
        func_0x000107c61434(param_1);
        func_0x000107c6157c(uVar11);
        puVar5 = (undefined *)0x0;
        func_0x0001048898b8(0,1,0x101d6bcb0,puVar7,PTR___sytN_11034f1b0 + 8);
        func_0x000107c61574(lVar4);
        func_0x000107c61574(uVar11);
        func_0x000107c61574(puVar7);
        func_0x00010006c090(lVar2,lVar9);
        func_0x000107c615e8(lVar1);
        return puVar5;
      }
      func_0x000107c615e8(lVar1);
      func_0x000107c6142c(lVar8);
    }
  }
  puVar6 = (undefined4 *)0x112d51a30;
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  func_0x000101d6b37c();
  puVar7 = &UNK_11047e850;
  func_0x000107c613f8(&UNK_11047e850,puVar6,0,0);
  *puVar6 = 0;
  *(undefined2 *)(puVar6 + 1) = 0x100;
  puVar5 = puVar7;
  func_0x00010488904c();
  func_0x000107c614ac(puVar7);
  return puVar5;
}



/* Entry: 101d676ec; end: 101d678a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d676ec(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uStack_58;
  
  uVar1 = *(ulong *)(param_2 + 0x10);
  lVar7 = param_2;
  func_0x000107c5b2d0();
  func_0x000107c61180();
  if (uVar1 == 0) {
    *(undefined1 *)(param_2 + 0x28) = 5;
  }
  else {
    uVar2 = uVar1;
    func_0x000107c5faec();
    func_0x000107c61170(uVar1);
    uVar1 = uVar2;
    func_0x0001000f66f0(uVar2,lVar7,param_1);
    if ((uVar1 & 1) == 0) {
      uVar3 = 0x112d69a88;
      func_0x0001000285a8(0x112d69a88,&UNK_10d97b880);
      func_0x000107c613fc();
      lVar4 = 0;
      func_0x00010095c380(0,uVar3);
      func_0x0001000d224c(&uStack_58);
      uVar3 = uStack_58;
      func_0x000107c614f0(uStack_58);
      puVar5 = &UNK_11047dd70;
      func_0x000107c613fc(&UNK_11047dd70,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      puVar6 = &UNK_11047e270;
      func_0x000107c613fc(&UNK_11047e270,0x38,7);
      *(undefined **)(puVar6 + 0x10) = puVar5;
      *(long *)(puVar6 + 0x18) = lVar4;
      *(ulong *)(puVar6 + 0x20) = uVar2;
      *(long *)(puVar6 + 0x28) = lVar7;
      *(long *)(puVar6 + 0x30) = param_2;
      func_0x000107c6157c(puVar5);
      func_0x000107c6157c(lVar4);
      func_0x000107c6157c(param_2);
      func_0x00010090569c(FUN_101d6b7f8,puVar6,uVar3);
      func_0x000107c61574(puVar5);
      func_0x000107c615e8(uStack_58);
      func_0x000107c61574(puVar6);
      func_0x000107c6157c(*(undefined8 *)(lVar4 + 0x10));
      func_0x000107c61574(lVar4);
      return;
    }
    func_0x000107c6142c(lVar7);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  func_0x000104888f7c();
  return;
}



/* Entry: 101d678a4; end: 101d67d3f;  */

void FUN_101d678a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined1 uStack_71;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x0001000d224c(&uStack_70);
  uVar1 = uStack_70;
  func_0x000107c614f0(uStack_70);
  func_0x000103fbfb2c(param_2,param_3,uVar1,uStack_68);
  func_0x000107c615e8(uStack_70);
  if (((uint)param_3 & 0xff) == 1) {
    uStack_71 = (undefined1)param_2;
    uVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if ((int)uVar1 != 0) {
      FUN_101d58f10();
      func_0x000107c61658(&uStack_71,&UNK_11072c980,uVar1);
    }
    *(undefined1 *)(param_4 + 0x18) = 4;
    func_0x000100b60084();
  }
  else {
    puVar2 = PTR_PTR_1126b25b8;
    func_0x000107c610f8(PTR_PTR_1126b25b8);
    uVar3 = param_6;
    func_0x000107c5fadc(param_6,param_7);
    func_0x000107c46814(puVar2);
    func_0x000107c61170(uVar3);
    func_0x0001000f66f0(param_6,param_7,param_8);
    if ((param_6 & 1) == 0) {
      func_0x000107c4c4c4(param_9);
    }
    else {
      func_0x000107c4feb8(param_9);
    }
    *(undefined1 *)(param_4 + 0x18) = 2;
    func_0x000100b60084();
    func_0x000107c61170(puVar2);
    func_0x000101d58f7c(param_2,param_3);
  }
  return;
}



/* Entry: 101d67d40; end: 101d67eeb;  */

/* WARNING: Removing unreachable block (ram,0x000101d67e00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d67d40(undefined8 param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  if (param_2 == 0) {
    func_0x000107c61428(param_5 + 0x10,auStack_58,0,0);
    param_5 = param_5 + 0x10;
    func_0x000107c61618();
    if (param_5 != 0) {
      uVar1 = *(undefined8 *)(param_5 + _DAT_112e29688);
      func_0x000107c6157c(uVar1);
      func_0x000107c61170(param_5);
      func_0x0001000d224c(&uStack_68);
      func_0x000107c61574(uVar1);
      uVar1 = uStack_68;
      func_0x000107c614f0(uStack_68);
      (**(code **)(lStack_60 + 0x18))(0,0xf000000000000000,param_6,param_7,uVar1,lStack_60);
      func_0x000107c615e8(uStack_68);
    }
    *(undefined1 *)(param_3 + 0x19) = 2;
  }
  else {
    *(undefined1 *)(param_3 + 0x18) = 7;
  }
  func_0x000100b60084();
  return;
}



/* Entry: 101d67eec; end: 101d68553;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101d67eec(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined *puStack_90;
  long lStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar8 = &puStack_90;
  uVar12 = *(ulong *)(param_2 + 0x10);
  lVar9 = param_2;
  func_0x0001000d224c(&puStack_90);
  puVar11 = puStack_90;
  if (puStack_90 != (undefined *)0x0) {
    uVar1 = uVar12;
    func_0x000107c5b2d0();
    func_0x000107c61180();
    if (uVar1 != 0) {
      uVar2 = uVar1;
      func_0x000107c5faec();
      func_0x000107c61170(uVar1);
      uVar1 = uVar2;
      func_0x0001000f66f0(uVar2,lVar9,param_1);
      if ((uVar1 & 1) != 0) {
LAB_101d67f78:
        func_0x000107c6142c(lVar9);
        *(undefined1 *)(param_2 + 0x1b) = 2;
        puVar4 = (undefined *)0x112d51a30;
        func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
        func_0x000104888f7c();
        func_0x000107c615e8(puVar11);
        return puVar4;
      }
      func_0x0001000d224c(&puStack_90);
      puVar4 = puStack_90;
      func_0x000107c614f0(puStack_90);
      uVar1 = uVar2;
      lVar10 = lVar9;
      (**(code **)(lStack_88 + 0x10))(uVar2,lVar9,5,puVar4,lStack_88);
      lVar5 = lVar10;
      func_0x000107c615e8(puStack_90);
      if (lVar10 == 0) {
        func_0x000107c4c970();
        func_0x000107c61180();
        if (uVar12 == 0) goto LAB_101d67f78;
        uVar1 = uVar12;
        func_0x000107c5faec();
        func_0x000107c61170(uVar12);
        lVar10 = lVar5;
      }
      func_0x0001000285a8(0x112d69a88,&UNK_10d97b880);
      func_0x000107c613fc();
      lVar5 = 0;
      func_0x00010095c380();
      func_0x000107c5fadc(uVar1,lVar10);
      func_0x000107c6142c(lVar10);
      puVar6 = puVar11;
      func_0x000107c5d554(puVar11);
      func_0x000107c61180();
      func_0x000107c61170(uVar1);
      puVar4 = &UNK_11047dd70;
      func_0x000107c613fc(&UNK_11047dd70,0x18,7);
      func_0x000107c61614(puVar4 + 0x10);
      puVar7 = &UNK_11047e680;
      func_0x000107c613fc(&UNK_11047e680,0x38,7);
      *(long *)(puVar7 + 0x10) = param_2;
      *(long *)(puVar7 + 0x18) = lVar5;
      *(undefined **)(puVar7 + 0x20) = puVar4;
      *(ulong *)(puVar7 + 0x28) = uVar2;
      *(long *)(puVar7 + 0x30) = lVar9;
      uStack_70 = 0x101d6ba70;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      lStack_88 = 0x42000000;
      pcStack_80 = FUN_101d58ff0;
      puStack_78 = &UNK_11047e698;
      puStack_68 = puVar7;
      func_0x000107c60bc4(&puStack_90);
      puVar4 = puStack_68;
      func_0x000107c6157c(param_2);
      func_0x000107c6157c(lVar5);
      func_0x000107c61574(puVar4);
      func_0x0001000d224c(&puStack_90);
      puVar4 = puStack_90;
      func_0x000107c5dc64(puVar6);
      func_0x000107c615e8(puVar4);
      func_0x000107c615e8(puVar11);
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c61170(puVar6);
      puVar11 = *(undefined **)(lVar5 + 0x10);
      func_0x000107c6157c(puVar11);
      func_0x000107c61574(lVar5);
      return puVar11;
    }
    func_0x000107c615e8(puVar11);
  }
  puVar3 = (undefined4 *)0x112d51a30;
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  func_0x000101d6b37c();
  puVar11 = &UNK_11047e850;
  func_0x000107c613f8(&UNK_11047e850,puVar3,0,0);
  *puVar3 = 0;
  *(undefined2 *)(puVar3 + 1) = 0x100;
  puVar4 = puVar11;
  func_0x00010488904c();
  func_0x000107c614ac(puVar11);
  return puVar4;
}



/* Entry: 101d68554; end: 101d687ef;  */

/* WARNING: Removing unreachable block (ram,0x000101d68614) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d68554(undefined8 param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  if (param_2 == 0) {
    func_0x000107c61428(param_5 + 0x10,auStack_58,0,0);
    param_5 = param_5 + 0x10;
    func_0x000107c61618();
    if (param_5 != 0) {
      uVar2 = *(undefined8 *)(param_5 + _DAT_112e29688);
      func_0x000107c6157c(uVar2);
      func_0x000107c61170(param_5);
      func_0x0001000d224c(&uStack_68);
      func_0x000107c61574(uVar2);
      uVar2 = uStack_68;
      func_0x000107c614f0(uStack_68);
      (**(code **)(lStack_60 + 8))(0,0,param_6,param_7,5,uVar2,lStack_60);
      func_0x000107c615e8(uStack_68);
    }
    uVar1 = 2;
  }
  else {
    uVar1 = 7;
  }
  *(undefined1 *)(param_3 + 0x1b) = uVar1;
  func_0x000100b60084();
  return;
}



/* Entry: 101d687f0; end: 101d68873;  */

undefined8 FUN_101d687f0(long param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    param_2 = 0;
  }
  else {
    (*param_4)(param_2,param_3);
    func_0x000107c61170(param_1);
  }
  return param_2;
}



/* Entry: 101d68874; end: 101d68ba7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101d68874(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined *puStack_90;
  long lStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar8 = &puStack_90;
  uVar12 = *(ulong *)(param_2 + 0x10);
  lVar9 = param_2;
  func_0x0001000d224c(&puStack_90);
  puVar11 = puStack_90;
  if (puStack_90 != (undefined *)0x0) {
    uVar1 = uVar12;
    func_0x000107c5b2d0();
    func_0x000107c61180();
    if (uVar1 != 0) {
      uVar2 = uVar1;
      func_0x000107c5faec();
      func_0x000107c61170(uVar1);
      uVar1 = uVar2;
      func_0x0001000f66f0(uVar2,lVar9,param_1);
      if ((uVar1 & 1) != 0) {
LAB_101d68900:
        func_0x000107c6142c(lVar9);
        *(undefined1 *)(param_2 + 0x1d) = 2;
        puVar4 = (undefined *)0x112d51a30;
        func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
        func_0x000104888f7c();
        func_0x000107c615e8(puVar11);
        return puVar4;
      }
      func_0x0001000d224c(&puStack_90);
      puVar4 = puStack_90;
      func_0x000107c614f0(puStack_90);
      uVar1 = uVar2;
      lVar10 = lVar9;
      (**(code **)(lStack_88 + 0x10))(uVar2,lVar9,9,puVar4,lStack_88);
      lVar5 = lVar10;
      func_0x000107c615e8(puStack_90);
      if (lVar10 == 0) {
        func_0x000107c5c928();
        func_0x000107c61180();
        if (uVar12 == 0) goto LAB_101d68900;
        uVar1 = uVar12;
        func_0x000107c5faec();
        func_0x000107c61170(uVar12);
        lVar10 = lVar5;
      }
      func_0x0001000285a8(0x112d69a88,&UNK_10d97b880);
      func_0x000107c613fc();
      lVar5 = 0;
      func_0x00010095c380();
      func_0x000107c5fadc(uVar1,lVar10);
      func_0x000107c6142c(lVar10);
      puVar6 = puVar11;
      func_0x000107c5d564(puVar11);
      func_0x000107c61180();
      func_0x000107c61170(uVar1);
      puVar4 = &UNK_11047dd70;
      func_0x000107c613fc(&UNK_11047dd70,0x18,7);
      func_0x000107c61614(puVar4 + 0x10);
      puVar7 = &UNK_11047e518;
      func_0x000107c613fc(&UNK_11047e518,0x38,7);
      *(long *)(puVar7 + 0x10) = param_2;
      *(long *)(puVar7 + 0x18) = lVar5;
      *(undefined **)(puVar7 + 0x20) = puVar4;
      *(ulong *)(puVar7 + 0x28) = uVar2;
      *(long *)(puVar7 + 0x30) = lVar9;
      pcStack_70 = FUN_101d6b9ac;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      lStack_88 = 0x42000000;
      pcStack_80 = FUN_101d58ff0;
      puStack_78 = &UNK_11047e530;
      puStack_68 = puVar7;
      func_0x000107c60bc4(&puStack_90);
      puVar4 = puStack_68;
      func_0x000107c6157c(param_2);
      func_0x000107c6157c(lVar5);
      func_0x000107c61574(puVar4);
      func_0x0001000d224c(&puStack_90);
      puVar4 = puStack_90;
      func_0x000107c5dc64(puVar6);
      func_0x000107c615e8(puVar4);
      func_0x000107c615e8(puVar11);
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c61170(puVar6);
      puVar11 = *(undefined **)(lVar5 + 0x10);
      func_0x000107c6157c(puVar11);
      func_0x000107c61574(lVar5);
      return puVar11;
    }
    func_0x000107c615e8(puVar11);
  }
  puVar3 = (undefined4 *)0x112d51a30;
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  func_0x000101d6b37c();
  puVar11 = &UNK_11047e850;
  func_0x000107c613f8(&UNK_11047e850,puVar3,0,0);
  *puVar3 = 0;
  *(undefined2 *)(puVar3 + 1) = 0x100;
  puVar4 = puVar11;
  func_0x00010488904c();
  func_0x000107c614ac(puVar11);
  return puVar4;
}



/* Entry: 101d68ba8; end: 101d68c9f;  */

/* WARNING: Removing unreachable block (ram,0x000101d68c68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d68ba8(undefined8 param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  if (param_2 == 0) {
    func_0x000107c61428(param_5 + 0x10,auStack_58,0,0);
    param_5 = param_5 + 0x10;
    func_0x000107c61618();
    if (param_5 != 0) {
      uVar2 = *(undefined8 *)(param_5 + _DAT_112e29688);
      func_0x000107c6157c(uVar2);
      func_0x000107c61170(param_5);
      func_0x0001000d224c(&uStack_68);
      func_0x000107c61574(uVar2);
      uVar2 = uStack_68;
      func_0x000107c614f0(uStack_68);
      (**(code **)(lStack_60 + 8))(0,0,param_6,param_7,9,uVar2,lStack_60);
      func_0x000107c615e8(uStack_68);
    }
    uVar1 = 2;
  }
  else {
    uVar1 = 7;
  }
  *(undefined1 *)(param_3 + 0x1d) = uVar1;
  func_0x000100b60084();
  return;
}



/* Entry: 101d68ca0; end: 101d68ebb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d68ca0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 uVar8;
  code *pcVar9;
  long *aplStack_80 [3];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  lVar1 = param_1 + 0x10;
  func_0x000107c61618();
  plVar7 = (long *)0x0;
  if (lVar1 != 0) {
    plVar7 = *(long **)(lVar1 + _DAT_112e29640);
    func_0x000107c6157c(plVar7);
    func_0x000107c61170(lVar1);
    func_0x0001000d224c(aplStack_80);
    func_0x000107c61574();
    if (aplStack_80[0] != (long *)0x0) {
      func_0x000107c61428(param_1 + 0x10,aplStack_80,0,0);
      param_1 = param_1 + 0x10;
      func_0x000107c61618();
      if (param_1 != 0) {
        uVar8 = *(undefined8 *)(param_1 + _DAT_112e296a0);
        func_0x000107c6157c(uVar8);
        func_0x000107c61170(param_1);
        func_0x000107c5fadc(param_3,param_4);
        plVar7 = aplStack_80[0];
        func_0x000107c4fee4();
        func_0x000107c61180();
        func_0x000107c61170(param_3);
        func_0x0001000285a8(0x112d63f00,&UNK_10d929700);
        plVar2 = plVar7;
        func_0x0001000b637c();
        puVar5 = &UNK_11047e298;
        func_0x000107c613fc(&UNK_11047e298,0x20,7);
        *(undefined8 *)(puVar5 + 0x10) = param_5;
        *(undefined8 *)(puVar5 + 0x18) = param_2;
        pcVar9 = *(code **)(*plVar2 + 0x60);
        func_0x000107c6157c(param_5);
        func_0x000107c6157c(param_2);
        uVar3 = 0x101d6b808;
        puVar6 = puVar5;
        (*pcVar9)(0x101d6b808);
        func_0x000107c61574(plVar2);
        func_0x000107c61574(puVar5);
        uVar4 = uVar3;
        func_0x000107c614f0(uVar3);
        (**(code **)(puVar6 + 0x10))(uVar8,uVar4,puVar6);
        func_0x000107c615e8(aplStack_80[0]);
        func_0x000107c61574(uVar8);
        func_0x000107c61170(plVar7);
        func_0x000107c615e8(uVar3);
        return;
      }
      func_0x000107c615e8();
      plVar7 = aplStack_80[0];
    }
  }
  func_0x000101d6b37c();
  puVar5 = &UNK_11047e850;
  func_0x000107c613f8(&UNK_11047e850,plVar7,0,0);
  *(undefined4 *)plVar7 = 0;
  *(undefined2 *)((long)plVar7 + 4) = 0x100;
  func_0x00010488ade0();
  func_0x000107c614ac(puVar5);
  return;
}



/* Entry: 101d68ebc; end: 101d690e7;  */

void FUN_101d68ebc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar5 = &puStack_a0;
  ppuVar8 = &puStack_a0;
  uVar9 = *param_1;
  puVar3 = &UNK_11047e2c0;
  func_0x000107c613fc(&UNK_11047e2c0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  puVar4 = &UNK_11047e2e8;
  func_0x000107c613fc(&UNK_11047e2e8,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_101d6b810;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = (code *)0x101d6b838;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_10103b958;
  puStack_88 = &UNK_11047e300;
  puStack_78 = puVar4;
  func_0x000107c60bc4(&puStack_a0);
  puVar6 = puStack_78;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_11047e338;
  func_0x000107c613fc(&UNK_11047e338,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = param_2;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  puVar7 = &UNK_11047e360;
  func_0x000107c613fc(&UNK_11047e360,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = 0x101d6b858;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  pcStack_80 = FUN_101d6bcc4;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100e27b38;
  puStack_88 = &UNK_11047e378;
  puStack_78 = puVar7;
  func_0x000107c60bc4(&puStack_a0);
  puVar1 = puStack_78;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar1);
  func_0x000107c4c754(uVar9);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x5f,0x297,0x31,1);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101d690e4);
    (*pcVar2)();
  }
  puVar3 = puVar7;
  func_0x000107c61544(puVar7,"",0x5f,0x29a,0x20,1);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar3 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101d690e8);
  (*pcVar2)();
}



/* Entry: 101d690e8; end: 101d6921f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101d690e8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_58;
  
  func_0x0001000285a8(0x112e29700,&UNK_10da11c28);
  func_0x000107c613fc();
  lVar1 = 0;
  func_0x00010095c380();
  func_0x0001000d224c(&uStack_58);
  uVar4 = uStack_58;
  func_0x000107c614f0(uStack_58);
  puVar2 = &UNK_11047dd70;
  func_0x000107c613fc(&UNK_11047dd70,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_11047dfc8;
  func_0x000107c613fc(&UNK_11047dfc8,0x30,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(long *)(puVar3 + 0x18) = lVar1;
  *(undefined8 *)(puVar3 + 0x20) = param_1;
  *(undefined8 *)(puVar3 + 0x28) = param_2;
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(lVar1);
  func_0x000107c61434(param_2);
  func_0x00010090569c(FUN_101d6b4b0,puVar3,uVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c615e8(uStack_58);
  func_0x000107c61574(puVar3);
  uVar4 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c6157c(uVar4);
  func_0x000107c61574(lVar1);
  return uVar4;
}



/* Entry: 101d69220; end: 101d693a7;  */

long FUN_101d69220(long *param_1,long param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_68 [24];
  
  lVar4 = *param_1;
  if (lVar4 == 0) {
    lVar5 = 0;
    lVar6 = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined1 *)(param_2 + 0x30) = 1;
    lVar7 = param_2;
  }
  else {
    lVar5 = lVar4;
    lVar3 = param_2;
    func_0x000107c51f28();
    *(long *)(param_2 + 0x28) = lVar5;
    *(undefined1 *)(param_2 + 0x30) = 0;
    FUN_101d693a8();
    if (lVar5 != 0) {
      lVar7 = lVar5;
      func_0x000107c5d914();
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      if (lVar7 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101d693a8);
        (*pcVar1)();
      }
      lVar6 = lVar7;
      func_0x000107c3f5f8();
      func_0x000107c61180();
      func_0x000107c61170(lVar7);
      if (lVar6 != 0) {
        lVar5 = lVar6;
        func_0x000107c5faec();
        lVar7 = lVar3;
        func_0x000107c61170(lVar6);
        lVar6 = lVar3;
        goto LAB_101d692e4;
      }
    }
    lVar5 = 0;
    lVar6 = 0;
    lVar7 = lVar3;
  }
LAB_101d692e4:
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  *(long *)(param_2 + 0x38) = lVar5;
  *(long *)(param_2 + 0x40) = lVar6;
  func_0x000107c6142c(uVar2);
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c50370();
    func_0x000107c61180();
    if (lVar5 != 0) {
      lVar6 = lVar5;
      func_0x000107c5faec();
      func_0x000107c61170(lVar5);
      goto LAB_101d6932c;
    }
  }
  lVar6 = 0;
  lVar7 = 0;
LAB_101d6932c:
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  *(long *)(param_2 + 0x48) = lVar6;
  *(long *)(param_2 + 0x50) = lVar7;
  func_0x000107c6142c(uVar2);
  func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 == 0) {
    lVar4 = 0;
  }
  else {
    FUN_101d694e0(lVar4,param_2);
    func_0x000107c61170(param_3);
  }
  return lVar4;
}



/* Entry: 101d693a8; end: 101d694df;  */

void FUN_101d693a8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000107c4e48c();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar1 = unaff_x20;
    func_0x000107c5ee30();
    func_0x000107c61170(unaff_x20);
    lVar2 = lVar1;
    func_0x000107c5ee20(lVar1,param_2);
    lVar3 = lVar2;
    func_0x00010800c28c();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    lVar2 = lVar3;
    func_0x000107c5b560();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar2 == 0) {
      func_0x00010006c090(lVar1,param_2);
      uStack_68 = 0;
      uStack_70 = 0;
      lStack_58 = 0;
      uStack_60 = 0;
    }
    else {
      func_0x000107c60234(&uStack_70,lVar2);
      func_0x00010006c090(lVar1,param_2);
      func_0x000107c615e8(lVar2);
    }
    uStack_48 = uStack_68;
    uStack_50 = uStack_70;
    lStack_38 = lStack_58;
    uStack_40 = uStack_60;
    if (lStack_58 == 0) {
      func_0x00010006e7f4(&uStack_50);
    }
    else {
      uVar4 = 0;
      FUN_101d6b8f0(0,0x112e296e8,&PTR_PTR_1126d82b8);
      func_0x000107c6147c(auStack_78,&uStack_50,PTR___sypN_11034f1a8 + 8,uVar4,6);
    }
  }
  return;
}



/* Entry: 101d694e0; end: 101d697a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101d694e0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined4 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar6 = &puStack_80;
  func_0x0001000d224c(&puStack_80);
  puVar8 = puStack_80;
  if (puStack_80 == (undefined *)0x0) {
    puVar7 = (undefined4 *)0x112d51a30;
    func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
    func_0x000101d6b37c();
    puVar8 = &UNK_11047e850;
    func_0x000107c613f8(&UNK_11047e850,puVar7,0,0);
    *puVar7 = 0;
    *(undefined2 *)(puVar7 + 1) = 0x100;
    puVar9 = puVar8;
    func_0x00010488904c();
    func_0x000107c614ac(puVar8);
  }
  else if (param_1 == 0) {
    *(undefined1 *)(param_2 + 0x21) = 10;
    puVar9 = (undefined *)0x112d51a30;
    func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
    func_0x000104888f7c();
    func_0x000107c615e8(puStack_80);
  }
  else {
    func_0x0001000285a8(0x112d69a88,&UNK_10d97b880);
    func_0x000107c613fc();
    func_0x000107c61174();
    lVar1 = 0;
    func_0x00010095c380();
    lVar2 = 0x112e296f0;
    FUN_101d6a714(0x112e296f0,&PTR_PTR_1126bc7e8,0x112e296f8,&UNK_10da11c20);
    func_0x000107c613fc();
    *(undefined8 *)(lVar2 + 0x18) = 3;
    *(undefined8 *)(lVar2 + 0x10) = 1;
    *(long *)(lVar2 + 0x20) = param_1;
    uVar3 = 0;
    FUN_101d6b8f0(0,0x112e296f0,&PTR_PTR_1126bc7e8);
    func_0x000107c61174(param_1);
    lVar4 = lVar2;
    func_0x000107c5fc48(lVar2,uVar3);
    func_0x000107c61574(lVar2);
    func_0x000107c41710(puStack_80);
    puVar5 = puStack_80;
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    puVar9 = &UNK_11047df78;
    func_0x000107c613fc(&UNK_11047df78,0x20,7);
    *(long *)(puVar9 + 0x10) = param_2;
    *(long *)(puVar9 + 0x18) = lVar1;
    pcStack_60 = FUN_101d6b47c;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_100bcda3c;
    puStack_68 = &UNK_11047df90;
    puStack_58 = puVar9;
    func_0x000107c60bc4(&puStack_80);
    puVar9 = puStack_58;
    func_0x000107c6157c(param_2);
    func_0x000107c6157c(lVar1);
    func_0x000107c61574(puVar9);
    func_0x0001000d224c(&puStack_80);
    puVar9 = puStack_80;
    func_0x000107c5dc68(puVar5);
    func_0x000107c615e8(puVar9);
    func_0x000107c615e8(puVar8);
    func_0x000107c61170(param_1);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(puVar5);
    puVar9 = *(undefined **)(lVar1 + 0x10);
    func_0x000107c6157c(puVar9);
    func_0x000107c61574(lVar1);
  }
  return puVar9;
}



/* Entry: 101d697a4; end: 101d698cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d697a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  puVar3 = (undefined4 *)0x0;
  if (param_1 != 0) {
    puVar3 = *(undefined4 **)(param_1 + _DAT_112e29648);
    func_0x000107c6157c(puVar3);
    func_0x000107c61170(param_1);
    func_0x0001000d224c(&lStack_60);
    func_0x000107c61574();
    if (lStack_60 != 0) {
      func_0x000107c5fadc(param_3,param_4);
      lVar1 = lStack_60;
      func_0x000107c431b8();
      func_0x000107c61180();
      func_0x000107c61170(param_3);
      func_0x000100b60084(&lStack_60);
      func_0x000107c61170(lVar1);
      func_0x000107c615e8(lStack_60);
      return;
    }
  }
  func_0x000101d6b37c();
  puVar2 = &UNK_11047e850;
  func_0x000107c613f8(&UNK_11047e850,puVar3,0,0);
  *puVar3 = 0;
  *(undefined2 *)(puVar3 + 1) = 0x100;
  func_0x00010488ade0();
  func_0x000107c614ac(puVar2);
  return;
}



/* Entry: 101d698cc; end: 101d69b8f;  */

/* WARNING: Possible PIC construction at 0x000101d69aac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d69b44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d69b48) */

void FUN_101d698cc(ulong param_1,undefined *param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  uVar7 = param_1;
  if (param_1 == 0) {
LAB_101d69ab0:
    if (param_2 == (undefined *)0x0) {
      return;
    }
    FUN_101a3eb44();
    func_0x000107c613fc();
    *(undefined8 *)(uVar7 + 0x18) = 3;
    *(undefined8 *)(uVar7 + 0x10) = 1;
    func_0x000107c61174();
    puVar5 = param_2;
    func_0x000107c43c4c();
    func_0x000107c61180();
    *(undefined **)(uVar7 + 0x20) = puVar5;
    uVar3 = 0x112d511e8;
    func_0x0001000285a8(0x112d511e8,&UNK_10d927cd0);
    func_0x000107c5fc48(uVar7,uVar3);
    func_0x000107c61574(uVar7);
    func_0x000107c61168(PTR_PTR_1126bc830);
    func_0x000107c416f0();
  }
  else {
    if (param_1 >> 0x3e == 0) {
      uVar6 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
      if (uVar6 == 0) goto LAB_101d69ab0;
LAB_101d6990c:
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000100fa7f24(0,uVar6 & ((long)uVar6 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101d69b90);
        (*pcVar1)();
      }
      if ((param_1 & 0xc000000000000001) == 0) {
        puVar8 = (undefined8 *)(param_1 + 0x20);
        do {
          uVar3 = *puVar8;
          func_0x000107c43c78();
          func_0x000107c61180();
          uVar7 = *(ulong *)(puVar5 + 0x10);
          if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar7) {
            func_0x000100fa7f24(1 < *(ulong *)(puVar5 + 0x18),uVar7 + 1,1);
          }
          *(ulong *)(puVar5 + 0x10) = uVar7 + 1;
          *(undefined8 *)(puVar5 + uVar7 * 8 + 0x20) = uVar3;
          uVar6 = uVar6 - 1;
          puVar8 = puVar8 + 1;
        } while (uVar6 != 0);
      }
      else {
        uVar7 = 0;
        do {
          uVar4 = uVar7;
          FUN_101d6af0c(uVar7,param_1,&PTR_PTR_1126bc7d8,0x112e28b08);
          uVar2 = uVar4;
          func_0x000107c43c78();
          func_0x000107c61180();
          func_0x000107c615e8(uVar4);
          uVar4 = *(ulong *)(puVar5 + 0x10);
          if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar4) {
            func_0x000100fa7f24(1 < *(ulong *)(puVar5 + 0x18),uVar4 + 1,1);
          }
          uVar7 = uVar7 + 1;
          *(ulong *)(puVar5 + 0x10) = uVar4 + 1;
          *(ulong *)(puVar5 + uVar4 * 8 + 0x20) = uVar2;
        } while (uVar6 != uVar7);
      }
    }
    else {
      uVar6 = param_1;
      if (-1 < (long)param_1) {
        uVar6 = param_1 & 0xffffffffffffff8;
      }
      uVar4 = uVar6;
      func_0x000107c60480();
      uVar7 = 0;
      if (uVar4 == 0) goto LAB_101d69ab0;
      func_0x000107c60480();
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (uVar6 != 0) goto LAB_101d6990c;
    }
    uVar3 = 0x112d508c0;
    func_0x0001000285a8(0x112d508c0,&UNK_10d917410);
    param_2 = puVar5;
    func_0x000107c5fc48(puVar5,uVar3);
    func_0x000107c6142c(puVar5);
    func_0x000107c61168(PTR_PTR_1126bc7f8);
    func_0x000107c416f4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101d69b90; end: 101d69c27;  */

undefined8
FUN_101d69b90(undefined8 param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    param_3 = 0;
  }
  else {
    FUN_101d69c28(param_3,*(undefined8 *)(param_4 + 0x10),param_5);
    func_0x000107c61170(param_2);
  }
  return param_3;
}



/* Entry: 101d69c28; end: 101d69e07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101d69c28(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long lStack_68;
  
  lVar7 = param_2;
  func_0x0001000d224c(&lStack_68);
  lVar1 = lStack_68;
  if (lStack_68 != 0) {
    lVar2 = param_2;
    func_0x000107c5b2d0();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107c5faec();
      func_0x000107c61170(lVar2);
      func_0x0001000285a8(0x112d69a88,&UNK_10d97b880);
      func_0x000107c613fc();
      lVar4 = 0;
      func_0x00010095c380();
      func_0x0001000d224c(&lStack_68);
      lVar2 = lStack_68;
      func_0x000107c614f0(lStack_68);
      puVar8 = &UNK_11047e478;
      func_0x000107c613fc(&UNK_11047e478,0x48,7);
      *(undefined8 *)(puVar8 + 0x10) = param_3;
      *(long *)(puVar8 + 0x18) = lVar1;
      *(long *)(puVar8 + 0x20) = param_2;
      *(long *)(puVar8 + 0x28) = lVar4;
      *(undefined8 *)(puVar8 + 0x30) = param_1;
      *(long *)(puVar8 + 0x38) = lVar3;
      *(long *)(puVar8 + 0x40) = lVar7;
      func_0x000107c6157c(param_3);
      func_0x000107c615f0(lVar1);
      func_0x000107c61174(param_2);
      func_0x000107c6157c(lVar4);
      func_0x000107c61434(param_1);
      func_0x00010090569c(0x101d6b968,puVar8,lVar2);
      func_0x000107c615e8(lStack_68);
      func_0x000107c61574(puVar8);
      func_0x000107c615e8(lVar1);
      puVar8 = *(undefined **)(lVar4 + 0x10);
      func_0x000107c6157c(puVar8);
      func_0x000107c61574(lVar4);
      return puVar8;
    }
    func_0x000107c615e8(lVar1);
  }
  puVar5 = (undefined4 *)0x112d51a30;
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  func_0x000101d6b37c();
  puVar8 = &UNK_11047e850;
  func_0x000107c613f8(&UNK_11047e850,puVar5,0,0);
  *puVar5 = 0;
  *(undefined2 *)(puVar5 + 1) = 0x100;
  puVar6 = puVar8;
  func_0x00010488904c();
  func_0x000107c614ac(puVar8);
  return puVar6;
}



/* Entry: 101d69e08; end: 101d69e8b;  */

undefined8 FUN_101d69e08(long param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    param_2 = 0;
  }
  else {
    FUN_101d69e8c(param_2,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x20));
    func_0x000107c61170(param_1);
  }
  return param_2;
}



/* Entry: 101d69e8c; end: 101d6a4d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101d69e8c(undefined8 param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  undefined *puStack_d0;
  ulong uStack_b8;
  ulong uStack_a8;
  undefined *puStack_90;
  long lStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar13 = param_2;
  func_0x0001000d224c(&puStack_90);
  puVar15 = puStack_90;
  if (puStack_90 != (undefined *)0x0) {
    func_0x000107c5b2d0();
    func_0x000107c61180();
    if (param_2 != 0) {
      uVar16 = param_2;
      func_0x000107c5faec();
      func_0x000107c61170(param_2);
      uVar2 = uVar16;
      func_0x0001000f66f0(uVar16,uVar13,param_1);
      if ((uVar2 & 1) != 0) {
        func_0x000107c6142c(uVar13);
        if (param_3 >> 0x3e == 0) {
          uVar13 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar13 = param_3 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < param_3) {
            uVar13 = param_3;
          }
          func_0x000107c60480();
        }
        if (uVar13 != 0) {
          uVar16 = 0;
          do {
            if ((param_3 & 0xc000000000000001) == 0) {
              if (*(ulong *)((param_3 & 0xffffffffffffff8) + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x101d6a458);
                (*pcVar1)();
              }
              uVar2 = *(ulong *)(param_3 + uVar16 * 8 + 0x20);
              func_0x000107c6157c();
            }
            else {
              uVar2 = uVar16;
              func_0x000101d6ad5c(uVar16,param_3);
            }
            if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x101d69f9c);
              (*pcVar1)();
            }
            uVar19 = uVar16 + 1;
            *(undefined1 *)(uVar2 + 0x19) = 2;
            func_0x000107c61574();
            uVar16 = uVar16 + 1;
          } while (uVar19 != uVar13);
        }
        puVar4 = (undefined *)0x112d51a30;
        func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
        func_0x000104888f7c();
        func_0x000107c615e8(puVar15);
        return puVar4;
      }
      if (param_3 >> 0x3e == 0) {
        uStack_a8 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uStack_a8 = param_3 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < param_3) {
          uStack_a8 = param_3;
        }
        func_0x000107c60480();
      }
      uStack_b8 = param_3 & 0xffffffffffffff8;
      puStack_d0 = PTR___swiftEmptyArrayStorage_11034f1c8;
      uVar2 = 0;
      do {
        if (uStack_a8 == uVar2) {
          func_0x000107c6142c(uVar13);
          func_0x0001000285a8(0x112d69a88,&UNK_10d97b880);
          func_0x000107c613fc();
          lVar7 = 0;
          func_0x00010095c380();
          uVar5 = 0;
          FUN_101d6b8f0(0,0x112e28b18,&PTR_PTR_1126dea20);
          puVar4 = puStack_d0;
          func_0x000107c5fc48(puStack_d0,uVar5);
          func_0x000107c6142c(puStack_d0);
          puVar9 = puVar15;
          func_0x000107c5d550(puVar15);
          func_0x000107c61180();
          func_0x000107c61170(puVar4);
          puVar4 = &UNK_11047e428;
          func_0x000107c613fc(&UNK_11047e428,0x20,7);
          *(ulong *)(puVar4 + 0x10) = param_3;
          *(long *)(puVar4 + 0x18) = lVar7;
          pcStack_70 = FUN_101d6b960;
          puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
          lStack_88 = 0x42000000;
          pcStack_80 = FUN_101d58ff0;
          puStack_78 = &UNK_11047e440;
          ppuVar10 = &puStack_90;
          puStack_68 = puVar4;
          func_0x000107c60bc4(ppuVar10);
          puVar4 = puStack_68;
          func_0x000107c61434(param_3);
          func_0x000107c6157c(lVar7);
          func_0x000107c61574(puVar4);
          func_0x0001000d224c(&puStack_90);
          puVar4 = puStack_90;
          func_0x000107c5dc64(puVar9);
          func_0x000107c615e8(puVar4);
          func_0x000107c615e8(puVar15);
          func_0x000107c60bd0(ppuVar10);
          func_0x000107c61170(puVar9);
          puVar15 = *(undefined **)(lVar7 + 0x10);
          func_0x000107c6157c(puVar15);
          func_0x000107c61574(lVar7);
          return puVar15;
        }
        if ((param_3 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uStack_b8 + 0x10) <= uVar2) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101d6a454);
            (*pcVar1)();
          }
          uVar19 = *(ulong *)(param_3 + uVar2 * 8 + 0x20);
          func_0x000107c6157c(uVar19);
        }
        else {
          uVar19 = uVar2;
          func_0x000101d6ad5c(uVar2,param_3);
        }
        if (SCARRY8(uVar2,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101d6a450);
          (*pcVar1)();
        }
        uVar17 = uVar2 + 1;
        uVar5 = *(undefined8 *)(uVar19 + 0x10);
        func_0x000107c3e240(uVar5);
        func_0x000107c308dc();
        func_0x0001000d224c(&puStack_90);
        lVar7 = lStack_88;
        puVar4 = puStack_90;
        puVar9 = puStack_90;
        func_0x000107c614f0(puStack_90);
        uVar14 = uVar16;
        uVar6 = uVar13;
        (**(code **)(lVar7 + 0x10))(uVar16,uVar13,uVar5,puVar9,lVar7);
        uVar11 = uVar6;
        func_0x000107c615e8(puVar4);
        uVar12 = uVar11;
        if (uVar6 == 0) {
          uVar6 = *(ulong *)(uVar19 + 0x10);
          func_0x000107c42284();
          func_0x000107c61180();
          if (uVar6 == 0) {
            uVar14 = 0;
            uVar6 = 0;
            uVar12 = uVar11;
          }
          else {
            uVar14 = uVar6;
            func_0x000107c5faec();
            uVar12 = uVar11;
            func_0x000107c61170(uVar6);
            uVar6 = uVar11;
          }
        }
        lVar7 = *(long *)(uVar19 + 0x10);
        func_0x000107c3e234();
        func_0x000107c61180();
        if (lVar7 == 0) {
          lVar18 = 0;
          if (uVar6 != 0) goto LAB_101d6a040;
LAB_101d6a1d8:
          uVar14 = 0;
        }
        else {
          lVar18 = lVar7;
          func_0x000107c5faec();
          func_0x000107c61170(lVar7);
          func_0x000107c5fadc(lVar18,uVar12);
          func_0x000107c6142c(uVar12);
          if (uVar6 == 0) goto LAB_101d6a1d8;
LAB_101d6a040:
          func_0x000107c5fadc(uVar14,uVar6);
          func_0x000107c6142c(uVar6);
        }
        puVar4 = PTR_PTR_1126dea20;
        func_0x000107c610f8();
        func_0x000107c457b8();
        func_0x000107c61574(uVar19);
        func_0x000107c61170(lVar18);
        func_0x000107c61170(uVar14);
        uVar2 = uVar2 + 1;
        if (puVar4 != (undefined *)0x0) {
          puVar9 = puStack_d0;
          func_0x000107c61550();
          if ((((int)puVar9 == 0) || ((long)puStack_d0 < 0)) ||
             (puVar9 = puStack_d0, ((ulong)puStack_d0 >> 0x3e & 1) != 0)) {
            if ((ulong)puStack_d0 >> 0x3e == 0) {
              puVar8 = *(undefined **)(((ulong)puStack_d0 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar8 = (undefined *)((ulong)puStack_d0 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puStack_d0) {
                puVar8 = puStack_d0;
              }
              func_0x000107c60480(puVar8);
            }
            puVar9 = (undefined *)0x0;
            FUN_101d6a8b4(0,puVar8 + 1,1,puStack_d0,0x112e28b18,&PTR_PTR_1126dea20,0x112e29708,
                          &UNK_10da11c38);
          }
          uVar19 = (ulong)puVar9 & 0xffffffffffffff8;
          uVar2 = *(ulong *)(uVar19 + 0x10);
          puStack_d0 = puVar9;
          if (*(ulong *)(uVar19 + 0x18) >> 1 <= uVar2) {
            puStack_d0 = (undefined *)(ulong)(1 < *(ulong *)(uVar19 + 0x18));
            FUN_101d6a8b4(puStack_d0,uVar2 + 1,1,puVar9,0x112e28b18,&PTR_PTR_1126dea20,0x112e29708,
                          &UNK_10da11c38);
            uVar19 = (ulong)puStack_d0 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar19 + 0x10) = uVar2 + 1;
          *(undefined **)(uVar19 + uVar2 * 8 + 0x20) = puVar4;
          uVar2 = uVar17;
        }
      } while( true );
    }
    func_0x000107c615e8(puVar15);
  }
  puVar3 = (undefined4 *)0x112d51a30;
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  func_0x000101d6b37c();
  puVar15 = &UNK_11047e850;
  func_0x000107c613f8(&UNK_11047e850,puVar3,0,0);
  *puVar3 = 0;
  *(undefined2 *)(puVar3 + 1) = 0x100;
  puVar4 = puVar15;
  func_0x00010488904c();
  func_0x000107c614ac(puVar15);
  return puVar4;
}



/* Entry: 101d6a4d8; end: 101d6a713;  */

void FUN_101d6a4d8(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7)

{
  func_0x000107c3e240(*(undefined8 *)(param_1 + 0x10));
  func_0x000107c308d8();
  func_0x000107c505c4();
  func_0x000107c61180();
  if (param_2 != 0) {
    func_0x0001000f66f0(param_6,param_7,param_5);
    if ((param_6 & 1) == 0) {
      func_0x000107c4c4b0(param_2);
    }
    else {
      func_0x000107c498f8(param_2);
    }
    *(undefined1 *)(param_1 + 0x18) = 2;
    func_0x000100b60084();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_2);
    return;
  }
  *(undefined1 *)(param_1 + 0x18) = 3;
  func_0x000100b60084();
  return;
}



/* Entry: 101d6a714; end: 101d6a7f7;  */

void FUN_101d6a714(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_101d6b8f0(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 101d6a7f8; end: 101d6a82f;  */

void FUN_101d6a7f8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000101d649b0(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                      *(undefined8 *)(unaff_x20 + 0x48),*(undefined1 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 101d6a830; end: 101d6a85f;  */

void FUN_101d6a830(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,param_1[1]);
  return;
}



/* Entry: 101d6a860; end: 101d6a8b3;  */

void FUN_101d6a860(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101d65114(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined1 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 101d6a8b4; end: 101d6aa13;  */

ulong FUN_101d6a8b4(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101d6aa14);
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
  FUN_101d6aa14(uVar2,uVar4,param_5,param_6,param_7,param_8);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101d6aa10);
      (*pcVar1)();
    }
    FUN_101d6aaa4(0,uVar2,uVar3 + 0x20,param_4,param_5,param_6);
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



/* Entry: 101d6aa14; end: 101d6aaa3;  */

undefined *
FUN_101d6aa14(long param_1,long param_2,undefined *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    FUN_101d6a714(param_3,param_4,param_5,param_6);
    func_0x000107c613fc();
    puVar1 = param_3;
    func_0x000107c610a4();
    puVar2 = puVar1 + -0x19;
    if (0x1f < (long)puVar1) {
      puVar2 = puVar1 + -0x20;
    }
    *(long *)(param_3 + 0x10) = param_1;
    *(ulong *)(param_3 + 0x18) = ((long)puVar2 >> 3) << 1 | 1;
    puVar2 = param_3;
  }
  return puVar2;
}



/* Entry: 101d6aaa4; end: 101d6abbf;  */

long FUN_101d6aaa4(long param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101d6abbc);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101d6abc0);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_101d6b8f0(0,param_5,param_6);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_101d6b8f0(0,param_5,param_6);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101d6abb8);
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



/* Entry: 101d6abc0; end: 101d6aef7;  */

ulong FUN_101d6abc0(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101d6ac90);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101d6ac94);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000101d6d09c(0);
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
    func_0x000101d6d09c(0);
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
  func_0x000107c5fb78(0xd000000000000011,0x800000010f00ed60);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101d6ad5c);
  (*pcVar2)();
}



/* Entry: 101d6aef8; end: 101d6af0b;  */

ulong FUN_101d6aef8(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101d6aff0);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101d6aff4);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126dea20;
    func_0x000107c61168(PTR_PTR_1126dea20);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126dea20;
    func_0x000107c61168(PTR_PTR_1126dea20);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_101d6b8f0(0,0x112e28b18,&PTR_PTR_1126dea20);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101d6b0c8);
  (*pcVar2)();
}



/* Entry: 101d6af0c; end: 101d6b0c7;  */

ulong FUN_101d6af0c(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101d6aff0);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101d6aff4);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
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
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_101d6b8f0(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101d6b0c8);
  (*pcVar2)();
}



/* Entry: 101d6b0c8; end: 101d6b12f;  */

void FUN_101d6b0c8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_101d6b130();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 101d6b130; end: 101d6b26b;  */

code * FUN_101d6b130(ulong param_1,ulong param_2,ulong param_3,code *param_4,code *param_5,
                    undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101d6b26c);
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
  pcVar2 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    pcVar2 = param_5;
    func_0x000101d6a78c(param_5,param_6,param_7);
    func_0x000107c613fc();
    pcVar3 = pcVar2;
    func_0x000107c610a4();
    pcVar1 = pcVar3 + -0x19;
    if (0x1f < (long)pcVar3) {
      pcVar1 = pcVar3 + -0x20;
    }
    *(ulong *)(pcVar2 + 0x10) = uVar6;
    *(ulong *)(pcVar2 + 0x18) = ((long)pcVar1 >> 3) << 1 | 1;
  }
  pcVar1 = pcVar2 + 0x20;
  pcVar3 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar4 = 0;
    (*param_5)(0);
    func_0x000107c6140c(pcVar1,pcVar3,uVar6,uVar4);
  }
  else {
    if (pcVar2 != param_4 || pcVar3 + uVar6 * 8 <= pcVar1) {
      func_0x000107c610b8(pcVar1,pcVar3,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return pcVar2;
}



/* Entry: 101d6b26c; end: 101d6b32b;  */

undefined1  [16] FUN_101d6b26c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5ee20();
  func_0x000107c4636c();
  func_0x000107c61170(param_1);
  uVar1 = 0;
  if (unaff_x20 == 0) {
    func_0x000107c61174();
    func_0x000107c5ed30(0);
    func_0x000107c61170();
    func_0x000107c61654();
  }
  else {
    func_0x000107c61174();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = unaff_x20;
    return auVar4;
  }
  func_0x000107c60e78();
  if (uRam0000000112e29728 != 0) {
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uRam0000000112e29728;
    return auVar5;
  }
  puVar2 = &UNK_11047e7c0;
  func_0x000107c614d4();
  if (puVar2 != (undefined *)0x0) {
    auVar6._8_8_ = puVar2;
    auVar6._0_8_ = uVar1;
    return auVar6;
  }
  uRam0000000112e29728 = uVar1;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar1;
  return auVar7;
}



/* Entry: 101d6b32c; end: 101d6b3bb;  */

void FUN_101d6b32c(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112e29728 != 0) {
    return;
  }
  puVar1 = &UNK_11047e7c0;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112e29728 = param_1;
  return;
}



/* Entry: 101d6b3bc; end: 101d6b3eb;  */

/* WARNING: Possible PIC construction at 0x000101d69aac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d69b44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d69b48) */

void FUN_101d6b3bc(void)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  puVar6 = *(undefined **)(unaff_x20 + 0x18);
  uVar9 = uVar1;
  if (uVar1 == 0) {
LAB_101d69ab0:
    if (puVar6 == (undefined *)0x0) {
      return;
    }
    FUN_101a3eb44();
    func_0x000107c613fc();
    *(undefined8 *)(uVar9 + 0x18) = 3;
    *(undefined8 *)(uVar9 + 0x10) = 1;
    func_0x000107c61174();
    puVar7 = puVar6;
    func_0x000107c43c4c();
    func_0x000107c61180();
    *(undefined **)(uVar9 + 0x20) = puVar7;
    uVar4 = 0x112d511e8;
    func_0x0001000285a8(0x112d511e8,&UNK_10d927cd0);
    func_0x000107c5fc48(uVar9,uVar4);
    func_0x000107c61574(uVar9);
    func_0x000107c61168(PTR_PTR_1126bc830);
    func_0x000107c416f0();
  }
  else {
    if (uVar1 >> 0x3e == 0) {
      uVar8 = *(ulong *)((uVar1 & 0xffffffffffffff8) + 0x10);
      if (uVar8 == 0) goto LAB_101d69ab0;
LAB_101d6990c:
      puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000100fa7f24(0,uVar8 & ((long)uVar8 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101d69b90);
        (*pcVar2)();
      }
      if ((uVar1 & 0xc000000000000001) == 0) {
        puVar10 = (undefined8 *)(uVar1 + 0x20);
        do {
          uVar4 = *puVar10;
          func_0x000107c43c78();
          func_0x000107c61180();
          uVar1 = *(ulong *)(puVar7 + 0x10);
          if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
            func_0x000100fa7f24(1 < *(ulong *)(puVar7 + 0x18),uVar1 + 1,1);
          }
          *(ulong *)(puVar7 + 0x10) = uVar1 + 1;
          *(undefined8 *)(puVar7 + uVar1 * 8 + 0x20) = uVar4;
          uVar8 = uVar8 - 1;
          puVar10 = puVar10 + 1;
        } while (uVar8 != 0);
      }
      else {
        uVar9 = 0;
        do {
          uVar5 = uVar9;
          FUN_101d6af0c(uVar9,uVar1,&PTR_PTR_1126bc7d8,0x112e28b08);
          uVar3 = uVar5;
          func_0x000107c43c78();
          func_0x000107c61180();
          func_0x000107c615e8(uVar5);
          uVar5 = *(ulong *)(puVar7 + 0x10);
          if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar5) {
            func_0x000100fa7f24(1 < *(ulong *)(puVar7 + 0x18),uVar5 + 1,1);
          }
          uVar9 = uVar9 + 1;
          *(ulong *)(puVar7 + 0x10) = uVar5 + 1;
          *(ulong *)(puVar7 + uVar5 * 8 + 0x20) = uVar3;
        } while (uVar8 != uVar9);
      }
    }
    else {
      uVar8 = uVar1;
      if (-1 < (long)uVar1) {
        uVar8 = uVar1 & 0xffffffffffffff8;
      }
      uVar5 = uVar8;
      func_0x000107c60480();
      uVar9 = 0;
      if (uVar5 == 0) goto LAB_101d69ab0;
      func_0x000107c60480();
      puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (uVar8 != 0) goto LAB_101d6990c;
    }
    uVar4 = 0x112d508c0;
    func_0x0001000285a8(0x112d508c0,&UNK_10d917410);
    puVar6 = puVar7;
    func_0x000107c5fc48(puVar7,uVar4);
    func_0x000107c6142c(puVar7);
    func_0x000107c61168(PTR_PTR_1126bc7f8);
    func_0x000107c416f4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 101d6b3ec; end: 101d6b413;  */

void FUN_101d6b3ec(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101d6b414; end: 101d6b42b;  */

undefined8 FUN_101d6b414(void)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  bVar1 = *(byte *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    FUN_101d664dc(uVar4,bVar1 & 1,uVar3);
    func_0x000107c61170(lVar2);
  }
  return uVar4;
}



/* Entry: 101d6b42c; end: 101d6b463;  */

void FUN_101d6b42c(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  *param_1 = param_2;
  return;
}



/* Entry: 101d6b464; end: 101d6b47b;  */

void FUN_101d6b464(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101d69220(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 101d6b47c; end: 101d6b4af;  */

void FUN_101d6b47c(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  long unaff_x20;
  
  uVar1 = 2;
  if (param_2 != 0) {
    uVar1 = 7;
  }
  *(undefined1 *)(*(long *)(unaff_x20 + 0x10) + 0x21) = uVar1;
  func_0x000100b60084();
  return;
}



/* Entry: 101d6b4b0; end: 101d6b4bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d6b4b0(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  long unaff_x20;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  puVar5 = (undefined4 *)0x0;
  if (lVar2 != 0) {
    puVar5 = *(undefined4 **)(lVar2 + _DAT_112e29648);
    func_0x000107c6157c(puVar5);
    func_0x000107c61170(lVar2);
    func_0x0001000d224c(&lStack_60);
    func_0x000107c61574();
    if (lStack_60 != 0) {
      func_0x000107c5fadc(uVar3,uVar1);
      lVar2 = lStack_60;
      func_0x000107c431b8();
      func_0x000107c61180();
      func_0x000107c61170(uVar3);
      func_0x000100b60084(&lStack_60);
      func_0x000107c61170(lVar2);
      func_0x000107c615e8(lStack_60);
      return;
    }
  }
  func_0x000101d6b37c();
  puVar4 = &UNK_11047e850;
  func_0x000107c613f8(&UNK_11047e850,puVar5,0,0);
  *puVar5 = 0;
  *(undefined2 *)(puVar5 + 1) = 0x100;
  func_0x00010488ade0();
  func_0x000107c614ac(puVar4);
  return;
}



/* Entry: 101d6b4bc; end: 101d6b4f3;  */

void FUN_101d6b4bc(long param_1,long param_2)

{
  undefined1 uVar1;
  long unaff_x20;
  
  uVar1 = 2;
  if (param_2 != 0 || param_1 == 0) {
    uVar1 = 7;
  }
  *(undefined1 *)(*(long *)(unaff_x20 + 0x10) + 0x20) = uVar1;
  func_0x000100b60084();
  return;
}



/* Entry: 101d6b4f4; end: 101d6b75f;  */

undefined8 FUN_101d6b4f4(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar3 = 0x112d51a30;
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  func_0x000104888f7c();
  if (param_2 >> 0x3e == 0) {
    uVar6 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar6 = param_2;
    }
    func_0x000107c60480();
  }
  if (uVar6 != 0) {
    if ((long)uVar6 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101d6b760);
      (*pcVar1)();
    }
    if ((param_2 & 0xc000000000000001) == 0) {
      puVar8 = (undefined8 *)(param_2 + 0x20);
      uVar9 = uVar3;
      do {
        uVar10 = *puVar8;
        puVar4 = &UNK_11047dd70;
        func_0x000107c613fc(&UNK_11047dd70,0x18,7);
        func_0x000107c61614(puVar4 + 0x10);
        puVar5 = &UNK_11047e090;
        func_0x000107c613fc(&UNK_11047e090,0x28,7);
        *(undefined **)(puVar5 + 0x10) = puVar4;
        *(undefined8 *)(puVar5 + 0x18) = param_1;
        *(undefined8 *)(puVar5 + 0x20) = uVar10;
        puVar4 = &UNK_11047e0b8;
        func_0x000107c613fc(&UNK_11047e0b8,0x20,7);
        *(undefined8 *)(puVar4 + 0x10) = 0x101d6bcc8;
        *(undefined **)(puVar4 + 0x18) = puVar5;
        func_0x000107c61580(uVar10,2);
        func_0x000107c61434(param_1);
        uVar3 = 0;
        func_0x0001048898b8(0,1,0x101d6bbe8,puVar4,PTR___sytN_11034f1b0 + 8);
        func_0x000107c61574(uVar9);
        func_0x000107c61574(puVar4);
        func_0x000107c61574(uVar10);
        uVar6 = uVar6 - 1;
        puVar8 = puVar8 + 1;
        uVar9 = uVar3;
      } while (uVar6 != 0);
    }
    else {
      uVar7 = 0;
      uVar9 = uVar3;
      do {
        uVar2 = uVar7;
        FUN_101d6abc0(uVar7,param_2);
        uVar7 = uVar7 + 1;
        puVar4 = &UNK_11047dd70;
        func_0x000107c613fc(&UNK_11047dd70,0x18,7);
        func_0x000107c61614(puVar4 + 0x10);
        puVar5 = &UNK_11047e040;
        func_0x000107c613fc(&UNK_11047e040,0x28,7);
        *(undefined **)(puVar5 + 0x10) = puVar4;
        *(undefined8 *)(puVar5 + 0x18) = param_1;
        *(ulong *)(puVar5 + 0x20) = uVar2;
        puVar4 = &UNK_11047e068;
        func_0x000107c613fc(&UNK_11047e068,0x20,7);
        *(code **)(puVar4 + 0x10) = FUN_101d6b760;
        *(undefined **)(puVar4 + 0x18) = puVar5;
        func_0x000107c61434(param_1);
        func_0x000107c615f0(uVar2);
        uVar3 = 0;
        func_0x0001048898b8(0,1,0x101d6bbd4,puVar4,PTR___sytN_11034f1b0 + 8);
        func_0x000107c61574(uVar9);
        func_0x000107c61574(puVar4);
        func_0x000107c615e8(uVar2);
        uVar9 = uVar3;
      } while (uVar6 != uVar7);
    }
  }
  return uVar3;
}



/* Entry: 101d6b760; end: 101d6b7a7;  */

void FUN_101d6b760(void)

{
  long unaff_x20;
  
  FUN_101d687f0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),0x101d66700);
  return;
}



/* Entry: 101d6b7a8; end: 101d6b7af;  */

void FUN_101d6b7a8(void)

{
  long lVar1;
  long unaff_x20;
  long lStack_28;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x10);
  func_0x000107c5b2d0(lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x0001000d224c(&lStack_28);
    if (lStack_28 != 0) {
      func_0x000107c51688(lStack_28);
      func_0x000107c615e8(lStack_28);
    }
    func_0x000107c61170(lVar1);
  }
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  func_0x000104888f7c();
  return;
}



/* Entry: 101d6b7b0; end: 101d6b7f7;  */

void FUN_101d6b7b0(void)

{
  long unaff_x20;
  
  FUN_101d687f0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),0x101d674a8);
  return;
}



/* Entry: 101d6b7f8; end: 101d6b80f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d6b7f8(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long unaff_x20;
  undefined8 uVar11;
  code *pcVar12;
  long *aplStack_80 [3];
  undefined1 auStack_68 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar3 + 0x10,auStack_68,0,0);
  lVar2 = lVar3 + 0x10;
  func_0x000107c61618();
  plVar10 = (long *)0x0;
  if (lVar2 != 0) {
    plVar10 = *(long **)(lVar2 + _DAT_112e29640);
    func_0x000107c6157c(plVar10);
    func_0x000107c61170(lVar2);
    func_0x0001000d224c(aplStack_80);
    func_0x000107c61574();
    if (aplStack_80[0] != (long *)0x0) {
      func_0x000107c61428(lVar3 + 0x10,aplStack_80,0,0);
      lVar3 = lVar3 + 0x10;
      func_0x000107c61618();
      if (lVar3 != 0) {
        uVar11 = *(undefined8 *)(lVar3 + _DAT_112e296a0);
        func_0x000107c6157c(uVar11);
        func_0x000107c61170(lVar3);
        func_0x000107c5fadc(uVar4,uVar1);
        plVar10 = aplStack_80[0];
        func_0x000107c4fee4();
        func_0x000107c61180();
        func_0x000107c61170(uVar4);
        func_0x0001000285a8(0x112d63f00,&UNK_10d929700);
        plVar5 = plVar10;
        func_0x0001000b637c();
        puVar7 = &UNK_11047e298;
        func_0x000107c613fc(&UNK_11047e298,0x20,7);
        *(undefined8 *)(puVar7 + 0x10) = uVar9;
        *(undefined8 *)(puVar7 + 0x18) = uVar6;
        pcVar12 = *(code **)(*plVar5 + 0x60);
        func_0x000107c6157c(uVar9);
        func_0x000107c6157c(uVar6);
        uVar4 = 0x101d6b808;
        puVar8 = puVar7;
        (*pcVar12)(0x101d6b808);
        func_0x000107c61574(plVar5);
        func_0x000107c61574(puVar7);
        uVar6 = uVar4;
        func_0x000107c614f0(uVar4);
        (**(code **)(puVar8 + 0x10))(uVar11,uVar6,puVar8);
        func_0x000107c615e8(aplStack_80[0]);
        func_0x000107c61574(uVar11);
        func_0x000107c61170(plVar10);
        func_0x000107c615e8(uVar4);
        return;
      }
      func_0x000107c615e8();
      plVar10 = aplStack_80[0];
    }
  }
  func_0x000101d6b37c();
  puVar7 = &UNK_11047e850;
  func_0x000107c613f8(&UNK_11047e850,plVar10,0,0);
  *(undefined4 *)plVar10 = 0;
  *(undefined2 *)((long)plVar10 + 4) = 0x100;
  func_0x00010488ade0();
  func_0x000107c614ac(puVar7);
  return;
}



/* Entry: 101d6b810; end: 101d6b8c7;  */

void FUN_101d6b810(void)

{
  long unaff_x20;
  
  *(undefined1 *)(*(long *)(unaff_x20 + 0x10) + 0x28) = 2;
  func_0x000100b60084();
  return;
}



/* Entry: 101d6b8c8; end: 101d6b8e3;  */

void FUN_101d6b8c8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101d69b90(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 101d6b8e4; end: 101d6b8ef;  */

undefined8 FUN_101d6b8e4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    FUN_101d69e8c(uVar3,*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x20));
    func_0x000107c61170(lVar1);
  }
  return uVar3;
}



/* Entry: 101d6b8f0; end: 101d6b92f;  */

void FUN_101d6b8f0(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 101d6b930; end: 101d6b95f;  */

void FUN_101d6b930(code *param_1)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101d6b960; end: 101d6b987;  */

void FUN_101d6b960(undefined8 param_1,long param_2)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    if (uVar1 >> 0x3e == 0) {
      uVar4 = *(ulong *)((uVar1 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar4 = uVar1 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar1) {
        uVar4 = uVar1;
      }
      func_0x000107c60480();
    }
    if (uVar4 != 0) {
      uVar5 = 0;
      do {
        if ((uVar1 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar1 & 0xffffffffffffff8) + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101d6a6c4);
            (*pcVar2)();
          }
          uVar3 = *(ulong *)(uVar1 + uVar5 * 8 + 0x20);
          func_0x000107c6157c();
        }
        else {
          uVar3 = uVar5;
          func_0x000101d6ad5c(uVar5,uVar1);
        }
        if (SCARRY8(uVar5,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101d6a6bc);
          (*pcVar2)();
        }
        uVar6 = uVar5 + 1;
        *(undefined1 *)(uVar3 + 0x19) = 2;
        func_0x000107c61574();
        uVar5 = uVar5 + 1;
      } while (uVar6 != uVar4);
    }
  }
  else {
    if (uVar1 >> 0x3e == 0) {
      uVar4 = *(ulong *)((uVar1 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar4 = uVar1 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar1) {
        uVar4 = uVar1;
      }
      func_0x000107c60480();
    }
    if (uVar4 != 0) {
      uVar5 = 0;
      do {
        if ((uVar1 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar1 & 0xffffffffffffff8) + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101d6a6c0);
            (*pcVar2)();
          }
          uVar3 = *(ulong *)(uVar1 + uVar5 * 8 + 0x20);
          func_0x000107c6157c();
        }
        else {
          uVar3 = uVar5;
          func_0x000101d6ad5c(uVar5,uVar1);
        }
        if (SCARRY8(uVar5,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101d6a648);
          (*pcVar2)();
        }
        uVar6 = uVar5 + 1;
        *(undefined1 *)(uVar3 + 0x19) = 7;
        func_0x000107c61574();
        uVar5 = uVar5 + 1;
      } while (uVar6 != uVar4);
    }
  }
  func_0x000100b60084();
  return;
}



/* Entry: 101d6b988; end: 101d6b9ab;  */

void FUN_101d6b988(void)

{
  long unaff_x20;
  
  FUN_101d687f0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),FUN_101d68874);
  return;
}



/* Entry: 101d6b9ac; end: 101d6b9b7;  */

/* WARNING: Removing unreachable block (ram,0x000101d68c68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d6b9ac(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  if (param_2 == 0) {
    func_0x000107c61428(lVar3 + 0x10,auStack_58,0,0);
    lVar3 = lVar3 + 0x10;
    func_0x000107c61618();
    if (lVar3 != 0) {
      uVar6 = *(undefined8 *)(lVar3 + _DAT_112e29688);
      func_0x000107c6157c(uVar6);
      func_0x000107c61170(lVar3);
      func_0x0001000d224c(&uStack_68);
      func_0x000107c61574(uVar6);
      uVar6 = uStack_68;
      func_0x000107c614f0(uStack_68);
      (**(code **)(lStack_60 + 8))(0,0,uVar2,uVar4,9,uVar6,lStack_60);
      func_0x000107c615e8(uStack_68);
    }
    uVar5 = 2;
  }
  else {
    uVar5 = 7;
  }
  *(undefined1 *)(lVar1 + 0x1d) = uVar5;
  func_0x000100b60084();
  return;
}



/* Entry: 101d6b9b8; end: 101d6b9fb;  */

void FUN_101d6b9b8(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101d6b9fc; end: 101d6ba1b;  */

void FUN_101d6b9fc(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x20;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(ulong *)(unaff_x20 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c505c0(lVar4,lVar1,*(undefined8 *)(lVar1 + 0x10));
  func_0x000107c61180();
  if (lVar4 == 0) {
    *(undefined1 *)(lVar1 + 0x1a) = 3;
    *(undefined1 *)(lVar1 + 0x1e) = 3;
    func_0x000100b60084();
    return;
  }
  func_0x0001000f66f0(uVar5,uVar3,uVar2);
  if ((uVar5 & 1) == 0) {
    func_0x000107c4c4b0(lVar4);
  }
  else {
    func_0x000107c498f8(lVar4);
  }
  *(undefined1 *)(lVar1 + 0x1a) = 2;
  *(undefined1 *)(lVar1 + 0x1e) = 2;
  func_0x000100b60084();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar4);
  return;
}



/* Entry: 101d6ba1c; end: 101d6ba63;  */

void FUN_101d6ba1c(void)

{
  long unaff_x20;
  
  FUN_101d687f0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),FUN_101d67eec);
  return;
}



/* Entry: 101d6ba64; end: 101d6ba7b;  */

/* WARNING: Removing unreachable block (ram,0x000101d6870c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d6ba64(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  if (param_2 == 0) {
    func_0x000107c61428(lVar3 + 0x10,auStack_58,0,0);
    lVar3 = lVar3 + 0x10;
    func_0x000107c61618();
    if (lVar3 != 0) {
      uVar6 = *(undefined8 *)(lVar3 + _DAT_112e29688);
      func_0x000107c6157c(uVar6);
      func_0x000107c61170(lVar3);
      func_0x0001000d224c(&uStack_68);
      func_0x000107c61574(uVar6);
      uVar6 = uStack_68;
      func_0x000107c614f0(uStack_68);
      (**(code **)(lStack_60 + 8))(0,0,uVar2,uVar4,6,uVar6,lStack_60);
      func_0x000107c615e8(uStack_68);
    }
    uVar5 = 2;
  }
  else {
    uVar5 = 7;
  }
  *(undefined1 *)(lVar1 + 0x1f) = uVar5;
  func_0x000100b60084();
  return;
}



/* Entry: 101d6ba7c; end: 101d6bb43;  */

void FUN_101d6ba7c(void)

{
  long unaff_x20;
  
  FUN_101d678a4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 101d6bb44; end: 101d6bbbf;  */

/* WARNING: Removing unreachable block (ram,0x000101d67e00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d6bb44(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  if (param_2 == 0) {
    func_0x000107c61428(lVar3 + 0x10,auStack_58,0,0);
    lVar3 = lVar3 + 0x10;
    func_0x000107c61618();
    if (lVar3 != 0) {
      uVar5 = *(undefined8 *)(lVar3 + _DAT_112e29688);
      func_0x000107c6157c(uVar5);
      func_0x000107c61170(lVar3);
      func_0x0001000d224c(&uStack_68);
      func_0x000107c61574(uVar5);
      uVar5 = uStack_68;
      func_0x000107c614f0(uStack_68);
      (**(code **)(lStack_60 + 0x18))(0,0xf000000000000000,uVar2,uVar4,uVar5,lStack_60);
      func_0x000107c615e8(uStack_68);
    }
    *(undefined1 *)(lVar1 + 0x19) = 2;
  }
  else {
    *(undefined1 *)(lVar1 + 0x18) = 7;
  }
  func_0x000100b60084();
  return;
}



/* Entry: 101d6bbc0; end: 101d6bcc3;  */

void FUN_101d6bbc0(void)

{
  FUN_101d6b3ec();
  return;
}



/* Entry: 101d6bcc4; end: 101d6bdeb;  */

void FUN_101d6bcc4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101d6bdec; end: 101d6be87;  */

void FUN_101d6bdec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x60) = param_11;
  *(undefined8 *)(unaff_x20 + 0x68) = param_12;
  return;
}



/* Entry: 101d6be88; end: 101d6beaf;  */

void FUN_101d6be88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x60) = param_11;
  *(undefined8 *)(unaff_x20 + 0x68) = param_12;
  return;
}



/* Entry: 101d6beb0; end: 101d6c4a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_101d6beb0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  func_0x0001000285a8(0x112e28fc0,&UNK_10da11cf0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c5cf08();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x0001000bda74();
  func_0x000107c61170(uVar1);
  func_0x0001000285a8(0x112e28960,&UNK_10da10ca0);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = uVar9;
  func_0x000107c41258();
  func_0x000107c61180();
  uVar3 = uVar1;
  func_0x0001000bda74();
  func_0x000107c61170(uVar1);
  func_0x0001000285a8(0x112e29758,&UNK_10da11d00);
  func_0x000107c41260();
  func_0x000107c61180();
  uVar1 = uVar9;
  func_0x0001000bda74();
  func_0x000107c61170(uVar9);
  func_0x0001000285a8(0x112e28fb8,&UNK_10da11450);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c4cb54();
  func_0x000107c61180();
  uVar9 = uVar4;
  func_0x0001000bda74();
  func_0x000107c61170(uVar4);
  func_0x0001000285a8(0x112d51870,&UNK_10d9bd0b0);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c5b1d4();
  func_0x000107c61180();
  uVar4 = uVar5;
  func_0x0001000bda74();
  func_0x000107c61170(uVar5);
  uVar13 = *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + _DAT_11303ea70);
  uVar14 = *(undefined8 *)(*(long *)(unaff_x20 + 0x48) + _DAT_112ff4a28);
  uVar15 = *(undefined8 *)(*(long *)(unaff_x20 + 0x50) + _DAT_11303e6c0);
  uVar10 = *(undefined8 *)(*(long *)(unaff_x20 + 0x40) + _DAT_112ff4aa8);
  uVar11 = *(undefined8 *)(*(long *)(unaff_x20 + 0x58) + _DAT_112e2b508);
  func_0x0001000285a8(0x112e29760,&UNK_10da18280);
  uVar12 = *(undefined8 *)(*(long *)(unaff_x20 + 0x60) + _DAT_112ff4990);
  func_0x000107c6157c(uVar13);
  func_0x000107c6157c(uVar14);
  func_0x000107c6157c(uVar15);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar11);
  func_0x000107c61174();
  uVar5 = uVar12;
  func_0x0001000bda74();
  func_0x000107c61170(uVar12);
  func_0x0001000285a8(0x112e29768,&UNK_10da11d10);
  uVar6 = *(undefined8 *)(*(long *)(unaff_x20 + 0x68) + _DAT_113080730);
  func_0x000107c61174();
  uVar12 = uVar6;
  func_0x0001000bda74();
  func_0x000107c61170(uVar6);
  puVar7 = &UNK_11047e8a0;
  func_0x000107c613fc(&UNK_11047e8a0,0x70,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar2;
  *(undefined8 *)(puVar7 + 0x18) = uVar3;
  *(undefined8 *)(puVar7 + 0x20) = uVar1;
  *(undefined8 *)(puVar7 + 0x28) = uVar9;
  *(undefined8 *)(puVar7 + 0x30) = uVar4;
  *(undefined8 *)(puVar7 + 0x38) = uVar13;
  *(undefined8 *)(puVar7 + 0x40) = uVar14;
  *(undefined8 *)(puVar7 + 0x48) = uVar15;
  *(undefined8 *)(puVar7 + 0x50) = uVar10;
  *(undefined8 *)(puVar7 + 0x58) = uVar11;
  *(undefined8 *)(puVar7 + 0x60) = uVar5;
  *(undefined8 *)(puVar7 + 0x68) = uVar12;
  func_0x0001000285a8(0x112e29770,&UNK_10da11d18);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar13);
  func_0x000107c6157c(uVar14);
  func_0x000107c6157c(uVar15);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar12);
  pcVar8 = FUN_101d6c4a8;
  func_0x0001000bdd8c(FUN_101d6c4a8,puVar7);
  uVar6 = 0;
  func_0x0001002c0e88();
  func_0x000107c610f8();
  func_0x000103a6aed8(pcVar8,uVar6);
  func_0x000107c61574(uVar12);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar11);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar15);
  func_0x000107c61574(uVar14);
  func_0x000107c61574(uVar13);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(uVar2);
  return pcVar8;
}



/* Entry: 101d6c4a8; end: 101d6c673;  */

void FUN_101d6c4a8(void)

{
  long unaff_x20;
  
  func_0x000101d6c2d4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 101d6c674; end: 101d6c697;  */

void FUN_101d6c674(undefined8 *param_1,undefined8 param_2)

{
  FUN_101d6beb0();
  *param_1 = param_2;
  return;
}



/* Entry: 101d6c698; end: 101d6caab;  */

ulong FUN_101d6c698(void)

{
  code *pcVar1;
  ulong uVar2;
  long unaff_x20;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar2 = *(ulong *)(unaff_x20 + 0x18);
  if (uVar2 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uVar2 & 0xffffffffffffff8;
    if ((uVar2 & 0x8000000000000000) != 0) {
      uVar3 = uVar2;
    }
    func_0x000107c60480();
  }
  if (uVar3 != 0) {
    uVar4 = 0;
    do {
      if ((uVar2 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101d6ca90);
          (*pcVar1)();
        }
        uVar6 = *(ulong *)(uVar2 + 0x20 + uVar4 * 8);
        func_0x000107c6157c(uVar6);
      }
      else {
        uVar6 = uVar4;
        FUN_101d6abc0(uVar4,uVar2);
      }
      if (SCARRY8(uVar4,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101d6ca8c);
        (*pcVar1)();
      }
      uVar4 = uVar4 + 1;
      if ((((((10 < *(byte *)(uVar6 + 0x18) ||
               (1 << (ulong)(*(byte *)(uVar6 + 0x18) & 0x1f) & 0x605U) == 0) ||
             (10 < *(byte *)(uVar6 + 0x19) ||
              (1 << (ulong)(*(byte *)(uVar6 + 0x19) & 0x1f) & 0x605U) == 0)) ||
            (10 < *(byte *)(uVar6 + 0x1a))) ||
           ((((1 << (ulong)(*(byte *)(uVar6 + 0x1a) & 0x1f) & 0x605U) == 0 ||
             (10 < *(byte *)(uVar6 + 0x1b))) ||
            (((1 << (ulong)(*(byte *)(uVar6 + 0x1b) & 0x1f) & 0x605U) == 0 ||
             ((10 < *(byte *)(uVar6 + 0x1c) ||
              ((1 << (ulong)(*(byte *)(uVar6 + 0x1c) & 0x1f) & 0x605U) == 0)))))))) ||
          (10 < *(byte *)(uVar6 + 0x1d))) ||
         (((((1 << (ulong)(*(byte *)(uVar6 + 0x1d) & 0x1f) & 0x605U) == 0 ||
            (10 < *(byte *)(uVar6 + 0x1e))) ||
           ((1 << (ulong)(*(byte *)(uVar6 + 0x1e) & 0x1f) & 0x605U) == 0)) ||
          ((10 < *(byte *)(uVar6 + 0x1f) ||
           ((1 << (ulong)(*(byte *)(uVar6 + 0x1f) & 0x1f) & 0x605U) == 0)))))) {
LAB_101d6c96c:
        func_0x000107c61574(uVar6);
        goto LAB_101d6c97c;
      }
      uVar7 = *(ulong *)(uVar6 + 0x20);
      if (uVar7 >> 0x3e == 0) {
        uVar8 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar8 = uVar7 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar7) {
          uVar8 = uVar7;
        }
        func_0x000107c60480();
      }
      if (uVar8 != 0) {
        uVar10 = 0;
        do {
          if ((uVar7 & 0xc000000000000001) == 0) {
            if (*(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x101d6ca84);
              (*pcVar1)();
            }
            uVar9 = *(ulong *)(uVar7 + uVar10 * 8 + 0x20);
            func_0x000107c6157c(uVar9);
          }
          else {
            uVar9 = uVar10;
            func_0x000101d6ad5c(uVar10,uVar7);
          }
          if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101d6ca80);
            (*pcVar1)();
          }
          uVar5 = uVar10 + 1;
          if ((10 < *(byte *)(uVar9 + 0x18) ||
               (1 << (ulong)(*(byte *)(uVar9 + 0x18) & 0x1f) & 0x605U) == 0) ||
             (10 < *(byte *)(uVar9 + 0x19) ||
              (1 << (ulong)(*(byte *)(uVar9 + 0x19) & 0x1f) & 0x605U) == 0)) {
            func_0x000107c61574(uVar6);
            uVar6 = uVar9;
            goto LAB_101d6c96c;
          }
          func_0x000107c61574(uVar9);
          uVar10 = uVar10 + 1;
        } while (uVar5 != uVar8);
      }
      if ((10 < *(byte *)(uVar6 + 0x28)) ||
         ((1 << (ulong)(*(byte *)(uVar6 + 0x28) & 0x1f) & 0x605U) == 0)) goto LAB_101d6c96c;
      func_0x000107c61574(uVar6);
    } while (uVar4 != uVar3);
  }
  if (((*(byte *)(unaff_x20 + 0x20) < 0xb &&
        (1 << (ulong)(*(byte *)(unaff_x20 + 0x20) & 0x1f) & 0x605U) != 0) &&
      (*(byte *)(unaff_x20 + 0x21) < 0xb)) &&
     ((1 << (ulong)(*(byte *)(unaff_x20 + 0x21) & 0x1f) & 0x605U) != 0)) {
    uVar6 = 0x100000000;
    uVar7 = 0;
  }
  else {
LAB_101d6c97c:
    if (uVar2 >> 0x3e == 0) {
      uVar3 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar3 = uVar2 & 0xffffffffffffff8;
      if ((uVar2 & 0x8000000000000000) != 0) {
        uVar3 = uVar2;
      }
      func_0x000107c60480();
    }
    uVar4 = 0;
    do {
      if (uVar3 == uVar4) {
        uVar6 = (ulong)*(byte *)(unaff_x20 + 0x20);
        FUN_101d6d4e4();
        uVar7 = uVar6;
        if ((uVar6 & 0xff00000000) == 0x100000000) {
          uVar6 = (ulong)*(byte *)(unaff_x20 + 0x21);
          FUN_101d6d4e4(uVar6);
          uVar7 = uVar6;
        }
        break;
      }
      if ((uVar2 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101d6ca88);
          (*pcVar1)();
        }
        uVar7 = *(ulong *)(uVar2 + uVar4 * 8 + 0x20);
        uVar6 = uVar7;
        func_0x000107c6157c();
      }
      else {
        uVar7 = uVar4;
        FUN_101d6abc0(uVar4,uVar2);
        uVar6 = uVar7;
      }
      if (SCARRY8(uVar4,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101d6ca24);
        (*pcVar1)();
      }
      func_0x000101d6cd04();
      func_0x000107c61574(uVar7);
      uVar4 = uVar4 + 1;
      uVar7 = uVar6;
    } while ((uVar6 & 0xff00000000) == 0x100000000);
  }
  return uVar6 & 0xff00000000 | uVar7 & 0xffffffff;
}



/* Entry: 101d6caac; end: 101d6cb4b;  */

void FUN_101d6caac(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101d6cb4c; end: 101d6cf53;  */

undefined * FUN_101d6cb4c(ulong param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  if (param_1 >> 0x3e == 0) {
    uVar7 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar7 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar7 = param_1;
    }
    func_0x000107c60480();
  }
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar7 != 0) {
    lVar3 = 0;
    func_0x000101d6b0fc(0,uVar7 & ((long)uVar7 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101d6cd04);
      (*pcVar2)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      func_0x000101d6cb2c();
      puVar10 = (undefined8 *)(param_1 + 0x20);
      do {
        uVar9 = *puVar10;
        lVar6 = lVar3;
        func_0x000107c613fc(lVar3,0x1a,7);
        *(undefined8 *)(lVar6 + 0x10) = uVar9;
        *(undefined2 *)(lVar6 + 0x18) = 0x101;
        uVar8 = *(ulong *)(puVar1 + 0x10);
        uVar4 = *(ulong *)(puVar1 + 0x18);
        func_0x000107c61174(uVar9);
        if (uVar4 >> 1 <= uVar8) {
          func_0x000101d6b0fc(1 < uVar4,uVar8 + 1,1);
        }
        *(ulong *)(puVar1 + 0x10) = uVar8 + 1;
        *(long *)(puVar1 + uVar8 * 8 + 0x20) = lVar6;
        uVar7 = uVar7 - 1;
        puVar10 = puVar10 + 1;
      } while (uVar7 != 0);
    }
    else {
      uVar8 = 0;
      do {
        uVar4 = uVar8;
        FUN_101d6aef8(uVar8,param_1);
        uVar5 = uVar4;
        func_0x000101d6cb2c();
        func_0x000107c613fc();
        *(ulong *)(uVar5 + 0x10) = uVar4;
        *(undefined2 *)(uVar5 + 0x18) = 0x101;
        uVar4 = *(ulong *)(puVar1 + 0x10);
        if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar4) {
          func_0x000101d6b0fc(1 < *(ulong *)(puVar1 + 0x18),uVar4 + 1,1);
        }
        uVar8 = uVar8 + 1;
        *(ulong *)(puVar1 + 0x10) = uVar4 + 1;
        *(ulong *)(puVar1 + uVar4 * 8 + 0x20) = uVar5;
      } while (uVar7 != uVar8);
    }
  }
  return puVar1;
}



/* Entry: 101d6cf54; end: 101d6d06f;  */

void FUN_101d6cf54(undefined *param_1,ulong param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined *puVar3;
  undefined1 uVar4;
  
  *(undefined **)(unaff_x20 + 0x10) = param_1;
  func_0x000107c61174();
  puVar1 = param_1;
  func_0x000107c5b1b0();
  func_0x000107c61180();
  if (puVar1 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
    param_2 = 0xf000000000000000;
  }
  else {
    puVar3 = puVar1;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar1);
    if (param_2 >> 0x3c < 0xf) {
      func_0x0001000b44c0(puVar3,param_2);
      func_0x0001000b44c0(0,0xf000000000000000);
      uVar4 = 0;
      *(undefined8 *)(unaff_x20 + 0x18) = 0x10100000101;
      puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
      goto LAB_101d6d048;
    }
  }
  func_0x0001000b44c0(puVar3,param_2);
  *(undefined2 *)(unaff_x20 + 0x18) = 0;
  *(undefined4 *)(unaff_x20 + 0x1a) = 0x1010101;
  *(undefined2 *)(unaff_x20 + 0x1e) = 0x101;
  puVar1 = param_1;
  func_0x000107c43e48();
  func_0x000107c61180();
  uVar2 = 0;
  FUN_101d6d2f8(0);
  puVar3 = puVar1;
  func_0x000107c5fc54(puVar1,uVar2);
  func_0x000107c61170(puVar1);
  puVar1 = puVar3;
  FUN_101d6cb4c();
  func_0x000107c6142c(puVar3);
  uVar4 = 1;
LAB_101d6d048:
  func_0x000107c61170(param_1);
  *(undefined **)(unaff_x20 + 0x20) = puVar1;
  *(undefined1 *)(unaff_x20 + 0x28) = uVar4;
  return;
}


