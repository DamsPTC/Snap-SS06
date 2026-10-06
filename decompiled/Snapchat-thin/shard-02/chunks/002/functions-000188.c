/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101af9a78; end: 101af9b5b;  */

undefined * FUN_101af9a78(long param_1)

{
  undefined1 uVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined1 *puVar9;
  
  puVar7 = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar7 != (undefined *)0x0) {
    uVar5 = 0;
    func_0x0001000285a8(0x112e00188);
    puVar3 = puVar7;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar9 = (undefined1 *)(param_1 + 0x28);
    do {
      uVar8 = *(ulong *)(puVar9 + -8);
      uVar1 = *puVar9;
      uVar4 = uVar8;
      func_0x000101b0fc0c();
      if ((uVar5 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101af9b58);
        (*pcVar2)();
      }
      uVar6 = uVar4 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar6 + 0x40) = *(ulong *)(puVar3 + uVar6 + 0x40) | 1L << (uVar4 & 0x3f);
      *(ulong *)(*(long *)(puVar3 + 0x30) + uVar4 * 8) = uVar8;
      *(undefined1 *)(*(long *)(puVar3 + 0x38) + uVar4) = uVar1;
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101af9b5c);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      puVar7 = puVar7 + -1;
      puVar9 = puVar9 + 0x10;
    } while (puVar7 != (undefined *)0x0);
    func_0x000107c61574(puVar3);
  }
  return puVar3;
}



/* Entry: 101af9b5c; end: 101afa1b3;  */

/* WARNING: Removing unreachable block (ram,0x000101af9ef4) */

void FUN_101af9b5c(ulong *param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  undefined *puVar13;
  long lVar14;
  ulong uVar15;
  undefined1 uVar16;
  long lVar17;
  double dVar18;
  long lVar19;
  ulong uVar20;
  char *pcVar21;
  double dVar22;
  undefined1 auStack_fe [4];
  undefined1 uStack_fa;
  undefined1 uStack_f9;
  undefined1 uStack_f8;
  undefined1 uStack_f7;
  undefined1 uStack_f6;
  undefined1 uStack_f5;
  undefined1 uStack_f4;
  undefined1 uStack_f3;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  uint auStack_e8 [2];
  long lStack_e0;
  uint uStack_d8;
  long lStack_d0;
  uint uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = 0x800000010effbe30;
  uVar4 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013);
  lVar5 = param_2;
  func_0x000107c4c270();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  dVar22 = 0.0;
  if (lVar5 == 0) {
LAB_101af9d34:
    uVar15 = 0;
    puVar13 = (undefined *)0x0;
    dVar18 = 0.0;
    uVar20 = 0;
    uVar10 = 0;
    uVar16 = 0;
  }
  else {
    lVar19 = lVar5;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    lVar6 = lVar19;
    func_0x000107c3dd54();
    func_0x000107c61180();
    func_0x000107c61170(lVar19);
    if (lVar6 == 0) goto LAB_101afa1b0;
    lVar19 = lVar6;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    if (lVar19 == 0) {
      func_0x000107c615e8(lVar5);
      goto LAB_101af9d34;
    }
    lVar6 = lVar19;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar19);
    uVar2 = (uint)(uVar10 >> 0x20);
    uVar12 = uVar2 >> 0x1e;
    lVar19 = lVar6 >> 0x20;
    if (uVar2 >> 0x1e < 2) {
      if (uVar12 == 0) {
        if ((uVar10 & 0xff000000000000) == 0) {
LAB_101af9d1c:
          func_0x00010006c090(lVar6,uVar10);
          func_0x000107c615e8(lVar5);
          goto LAB_101af9d34;
        }
      }
      else if ((int)lVar6 == lVar19) goto LAB_101af9d1c;
    }
    else if ((uVar12 != 2) || (*(long *)(lVar6 + 0x10) == *(long *)(lVar6 + 0x18)))
    goto LAB_101af9d1c;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    lVar11 = lVar6;
    func_0x00010006c00c(lVar6,uVar10);
    func_0x000101b20fa0(auStack_e8);
    if (uVar12 == 2) {
      lVar19 = *(long *)(lVar6 + 0x10);
      lVar17 = *(long *)(lVar6 + 0x18);
      func_0x000107c5ec30();
      lVar14 = lVar11;
      if (lVar11 != 0) {
        lVar7 = lVar11;
        func_0x000107c5ec3c();
        if (SBORROW8(lVar19,lVar7)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101afa1a8);
          (*pcVar3)();
        }
        lVar14 = (lVar19 - lVar7) + lVar11;
        lVar11 = lVar7;
      }
      lVar7 = lVar17 - lVar19;
      if (SBORROW8(lVar17,lVar19)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101afa1a4);
        (*pcVar3)();
      }
      func_0x000107c5ec38();
      lVar19 = lVar11;
      if (lVar7 <= lVar11) {
        lVar19 = lVar7;
      }
      lVar17 = 0;
      if (lVar14 != 0) {
        lVar17 = lVar19 + lVar14;
      }
LAB_101af9eac:
      FUN_101afa1b4();
      func_0x00010006ae80(lVar14,lVar17,&uStack_b0,0,100,0,&UNK_110444998,lVar11);
    }
    else {
      if (uVar12 == 1) {
        lVar17 = (long)(int)lVar6;
        if (lVar19 < lVar17) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101afa1a0);
          (*pcVar3)();
        }
        func_0x000107c5ec30();
        if (lVar11 == 0) {
          func_0x000107c5ec38();
          lVar14 = 0;
        }
        else {
          lVar7 = lVar11;
          func_0x000107c5ec3c();
          if (SBORROW8(lVar17,lVar7)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101afa1ac);
            (*pcVar3)();
          }
          lVar14 = (lVar17 - lVar7) + lVar11;
          func_0x000107c5ec38();
          lVar11 = lVar7;
          if (lVar14 != 0) {
            if (lVar19 - lVar17 <= lVar7) {
              lVar7 = lVar19 - lVar17;
            }
            lVar17 = lVar7 + lVar14;
            goto LAB_101af9eac;
          }
        }
        lVar17 = 0;
        goto LAB_101af9eac;
      }
      auStack_fe[0] = (undefined1)lVar6;
      auStack_fe[1] = (undefined1)((ulong)lVar6 >> 8);
      auStack_fe[2] = (undefined1)((ulong)lVar6 >> 0x10);
      auStack_fe[3] = (undefined1)((ulong)lVar6 >> 0x18);
      uStack_fa = (undefined1)((ulong)lVar6 >> 0x20);
      uStack_f9 = (undefined1)((ulong)lVar6 >> 0x28);
      uStack_f8 = (undefined1)((ulong)lVar6 >> 0x30);
      uStack_f7 = (undefined1)((ulong)lVar6 >> 0x38);
      uStack_f6 = (undefined1)uVar10;
      uStack_f5 = (undefined1)(uVar10 >> 8);
      uStack_f4 = (undefined1)(uVar10 >> 0x10);
      uStack_f3 = (undefined1)(uVar10 >> 0x18);
      uStack_f2 = (undefined1)(uVar10 >> 0x20);
      uStack_f1 = (undefined1)(uVar10 >> 0x28);
      FUN_101afa1b4();
      func_0x00010006ae80(auStack_fe,auStack_fe + (uVar10 >> 0x30 & 0xff),&uStack_b0,0,100,0,
                          &UNK_110444998,lVar11);
    }
    func_0x00010006c090(lVar6,uVar10);
    func_0x000100ee9068(&uStack_b0);
    uVar15 = (ulong)auStack_e8[0];
    lVar19 = *(long *)(lStack_e0 + 0x10);
    if (lVar19 == 0) {
      lVar19 = *(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
      puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      lVar11 = lStack_e0;
      func_0x000107c61434();
      puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
      pcVar21 = (char *)(lVar11 + 0x28);
      do {
        if (*pcVar21 == '\x01') {
          lVar11 = *(long *)(pcVar21 + -8);
          if (lVar11 < 3) {
            if (lVar11 == 0) goto LAB_101af9fb4;
            uVar20 = (ulong)(lVar11 != 1);
          }
          else {
            uVar20 = 4;
            if (lVar11 != 5) {
              uVar20 = 5;
            }
            uVar1 = 2;
            if (lVar11 != 3) {
              uVar1 = 3;
            }
            if (lVar11 < 5) {
              uVar20 = uVar1;
            }
          }
          puVar8 = puVar13;
          func_0x000107c61558();
          puVar9 = puVar13;
          if (((ulong)puVar8 & 1) == 0) {
            puVar9 = (undefined *)0x0;
            FUN_101b0f5b0(0,*(long *)(puVar13 + 0x10) + 1,1,puVar13);
          }
          uVar1 = *(ulong *)(puVar9 + 0x10);
          puVar13 = puVar9;
          if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar1) {
            puVar13 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
            FUN_101b0f5b0(puVar13,uVar1 + 1,1,puVar9);
          }
          *(ulong *)(puVar13 + 0x10) = uVar1 + 1;
          *(ulong *)(puVar13 + uVar1 * 8 + 0x20) = uVar20;
        }
LAB_101af9fb4:
        lVar19 = lVar19 + -1;
        pcVar21 = pcVar21 + 0x10;
      } while (lVar19 != 0);
      func_0x000107c6142c(lStack_e0);
      lVar19 = *(long *)(puVar13 + 0x10);
    }
    if (((lVar19 == 0) || (uVar16 = (undefined1)param_2, (int)auStack_e8[0] < 1)) ||
       ((int)uStack_d8 < 1)) {
      func_0x000107c6142c(lStack_e0);
      func_0x00010006c090(uStack_c0,uStack_b8);
      func_0x000107c615e8(lVar5);
      func_0x00010006c090(lVar6,uVar10);
      func_0x000107c6142c(puVar13);
      uVar15 = 0;
      dVar18 = 0.0;
      uVar20 = 0;
      uVar10 = 0;
      uVar16 = 0;
      puVar13 = (undefined *)0x2;
    }
    else {
      uVar20 = (ulong)(lStack_d0 < 1);
      dVar18 = 0.0;
      if (0 < lStack_d0) {
        dVar18 = (double)lStack_d0;
      }
      uVar4 = 0xd00000000000002a;
      func_0x000107c5fadc(0xd00000000000002a,0x800000010effbe50);
      func_0x000107c3ebd4();
      func_0x000107c615e8(lVar5);
      func_0x00010006c090(lVar6,uVar10);
      func_0x000107c6142c(lStack_e0);
      func_0x00010006c090(uStack_c0,uStack_b8);
      func_0x000107c61170(uVar4);
      uVar10 = (ulong)(uStack_c8 & ((int)uStack_c8 >> 0x1f ^ 0xffffffffU));
      dVar22 = (double)uStack_d8 / 1000.0;
    }
  }
  *param_1 = uVar15;
  param_1[1] = (ulong)puVar13;
  param_1[2] = (ulong)dVar22;
  param_1[3] = (ulong)dVar18;
  param_1[4] = uVar20;
  param_1[5] = uVar10;
  *(undefined1 *)(param_1 + 6) = uVar16;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  func_0x000107c60e78();
LAB_101afa1b0:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101afa1b4);
  (*pcVar3)();
}



/* Entry: 101afa1b4; end: 101afa1f3;  */

void FUN_101afa1b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e001a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d9d1bc8;
  func_0x000107c61520(&DAT_10d9d1bc8,&UNK_110444998);
  puRam0000000112e001a0 = puVar1;
  return;
}



/* Entry: 101afa1f4; end: 101afa20b;  */

void FUN_101afa1f4(long param_1)

{
  if (0xfffffffe < *(ulong *)(param_1 + 8)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  return;
}



/* Entry: 101afa20c; end: 101afa287;  */

undefined8 * FUN_101afa20c(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  if (0xfffffffe < uVar1) {
    *param_1 = *param_2;
    param_1[1] = uVar1;
    uVar2 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = uVar2;
    *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
    param_1[5] = param_2[5];
    *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
    func_0x000107c61434(uVar1);
    return param_1;
  }
  uVar2 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  return param_1;
}



/* Entry: 101afa288; end: 101afa387;  */

undefined8 * FUN_101afa288(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_1[1];
  if (uVar2 < 0xffffffff) {
    if (0xfffffffe < (ulong)param_2[1]) {
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      param_1[2] = param_2[2];
      uVar1 = param_2[3];
      *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
      param_1[3] = uVar1;
      param_1[5] = param_2[5];
      *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
      func_0x000107c61434();
      return param_1;
    }
  }
  else {
    if (0xfffffffe < (ulong)param_2[1]) {
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      func_0x000107c61434();
      func_0x000107c6142c(uVar2);
      param_1[2] = param_2[2];
      uVar1 = param_2[3];
      *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
      param_1[3] = uVar1;
      param_1[5] = param_2[5];
      *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
      return param_1;
    }
    func_0x000107c6142c(uVar2);
  }
  uVar3 = param_2[1];
  uVar1 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  uVar7 = param_2[5];
  uVar6 = param_2[4];
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  param_1[5] = uVar7;
  param_1[4] = uVar6;
  param_1[1] = uVar3;
  *param_1 = uVar1;
  return param_1;
}



/* Entry: 101afa388; end: 101afa43f;  */

undefined8 * FUN_101afa388(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_1[1];
  if (uVar1 < 0xffffffff) {
    uVar3 = *param_2;
    uVar5 = param_2[3];
    uVar4 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar3;
    param_1[3] = uVar5;
    param_1[2] = uVar4;
    uVar3 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar3;
    *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  }
  else {
    uVar2 = param_2[1];
    if (uVar2 < 0xffffffff) {
      func_0x000107c6142c(uVar1);
      uVar3 = *param_2;
      uVar5 = param_2[3];
      uVar4 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = uVar3;
      param_1[3] = uVar5;
      param_1[2] = uVar4;
      uVar3 = param_2[4];
      param_1[5] = param_2[5];
      param_1[4] = uVar3;
    }
    else {
      *param_1 = *param_2;
      param_1[1] = uVar2;
      func_0x000107c6142c(uVar1);
      param_1[2] = param_2[2];
      param_1[3] = param_2[3];
      *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
      param_1[5] = param_2[5];
    }
    *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  }
  return param_1;
}



/* Entry: 101afa440; end: 101afa55f;  */

int FUN_101afa440(int *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffc < param_2) && (*(char *)((long)param_1 + 0x31) != '\0')) {
    return *param_1 + 0x7ffffffd;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (3 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2 + -2;
  }
  return iVar1;
}



/* Entry: 101afa560; end: 101afa5ab;  */

undefined8 * FUN_101afa560(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[5] = param_2[5];
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  func_0x000107c61434();
  return param_1;
}



/* Entry: 101afa5ac; end: 101afa61f;  */

undefined8 * FUN_101afa5ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[3] = uVar1;
  param_1[5] = param_2[5];
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  return param_1;
}



/* Entry: 101afa620; end: 101afa67b;  */

undefined8 * FUN_101afa620(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[5] = param_2[5];
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  return param_1;
}



/* Entry: 101afa67c; end: 101afa7cb;  */

int FUN_101afa67c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x31) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101afa7cc; end: 101afa8e7;  */

undefined8 FUN_101afa7cc(long param_1)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  lVar7 = param_1;
  FUN_101b147f0();
  func_0x000107c5fe14(uVar5,&UNK_1106b5710,lVar7);
  lVar7 = 0;
  puVar6 = (ulong *)(param_1 + 0x40);
  uVar8 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar9 = 0xffffffffffffffff;
  if (-uVar8 < 0x40) {
    uVar9 = ~(-1L << (-uVar8 & 0x3f));
  }
  uVar9 = uVar9 & *puVar6;
  uStack_58 = uVar5;
  lVar1 = lVar7;
  while( true ) {
    for (; uVar9 != 0; uVar9 = uVar9 - 1 & uVar9) {
      uVar2 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      FUN_101b0edec(auStack_60,
                    *(undefined8 *)
                     (*(long *)(param_1 + 0x30) + LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) * 8 +
                     lVar1 * 0x200));
      lVar7 = lVar1;
    }
    bVar4 = SCARRY8(lVar1,1);
    lVar1 = lVar1 + 1;
    if (bVar4) break;
    if ((long)(0x3f - uVar8 >> 6) <= lVar1) {
      func_0x000100cc5bac(param_1,puVar6,~uVar8,lVar7,0);
      return uStack_58;
    }
    uVar9 = puVar6[lVar1];
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101afa8e8);
  (*pcVar3)();
}



/* Entry: 101afa8e8; end: 101afac37;  */

undefined1  [16] FUN_101afa8e8(void)

{
  byte bVar1;
  char *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long *unaff_x20;
  undefined1 auVar7 [16];
  long lStack_38;
  undefined8 uStack_30;
  ulong uStack_28;
  
  uStack_28 = 0xef6465646e756f72;
  lVar5 = *unaff_x20;
  bVar1 = *(byte *)(unaff_x20 + 4);
  if (bVar1 < 4) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        uStack_30 = 0;
        uStack_28 = 0xe000000000000000;
        func_0x000107c602fc(0x14,0xef6465646e756f72);
        func_0x000107c6142c(uStack_28);
        uStack_28 = 0x800000010effc010;
        uStack_30 = 0xd000000000000011;
      }
      else {
        uStack_30 = 0;
        uStack_28 = 0xe000000000000000;
        func_0x000107c602fc(0x16,0xef6465646e756f72);
        func_0x000107c6142c(uStack_28);
        uStack_28 = 0x800000010effbff0;
        uStack_30 = 0xd000000000000013;
      }
      goto LAB_101afaa40;
    }
    if (bVar1 == 2) {
      uStack_30 = 0x6765726f46707061;
      goto LAB_101afab8c;
    }
    uStack_30 = 0;
    uStack_28 = 0xe000000000000000;
    func_0x000107c602fc(0x11,0xef6465646e756f72);
    func_0x000107c6142c(uStack_28);
    uStack_30 = 0x6c46656372756f73;
    uStack_28 = 0xee00286465707069;
    if (2 < lVar5) goto LAB_101afaad0;
LAB_101afaa4c:
    if (lVar5 == 0) {
      uVar4 = 0x74616863;
      uVar6 = 0xe400000000000000;
    }
    else if (lVar5 == 1) {
      uVar4 = 0x6e69646e65697266;
      uVar6 = 0xe900000000000067;
    }
    else {
      if (lVar5 != 2) {
LAB_101afab9c:
        lStack_38 = lVar5;
        func_0x000107c60614(&UNK_1106b5710,&lStack_38,&UNK_1106b5710,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101afabc0);
        (*pcVar3)();
      }
      uVar6 = 0xe800000000000000;
      uVar4 = 0x7265766f63736964;
    }
  }
  else {
    if (5 < bVar1) {
      uStack_30 = 0xd000000000000012;
      pcVar2 = "registrationDeadline";
      if (bVar1 != 6) {
        uStack_30 = 0xd000000000000014;
        pcVar2 = "BADGE_RANKER_ENABLED";
      }
      uStack_28 = (ulong)pcVar2 | 0x8000000000000000;
      goto LAB_101afab8c;
    }
    if (bVar1 != 4) {
      uStack_30 = 0x676b636142707061;
      goto LAB_101afab8c;
    }
    uStack_30 = 0;
    uStack_28 = 0xe000000000000000;
    func_0x000107c602fc(0x17,0xef6465646e756f72);
    func_0x000107c6142c(uStack_28);
    uStack_28 = 0x800000010effbfd0;
    uStack_30 = 0xd000000000000014;
LAB_101afaa40:
    if (lVar5 < 3) goto LAB_101afaa4c;
LAB_101afaad0:
    if (lVar5 == 3) {
      uVar6 = 0xe800000000000000;
      uVar4 = 0x736569726f6d656d;
    }
    else if (lVar5 == 4) {
      uVar4 = 0x6867696c746f7073;
      uVar6 = 0xe900000000000074;
    }
    else {
      if (lVar5 != 5) goto LAB_101afab9c;
      uVar6 = 0xe700000000000000;
      uVar4 = 0x656c69666f7270;
    }
  }
  func_0x000107c5fb78(uVar4,uVar6);
  func_0x000107c6142c(uVar6);
  func_0x000107c5fb78(0x29,0xe100000000000000);
LAB_101afab8c:
  auVar7._8_8_ = uStack_28;
  auVar7._0_8_ = uStack_30;
  return auVar7;
}



/* Entry: 101afac38; end: 101afac57;  */

void FUN_101afac38(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 101afac58; end: 101afade3;  */

void FUN_101afac58(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x22;
  double dVar10;
  
  uVar2 = 2;
  uVar8 = 0x10;
  func_0x000100029b9c(2,0x10,0,0);
  if ((int)uVar2 != 0) {
    func_0x000107c606fc(*(undefined8 *)(unaff_x22 + 0x38));
    *(undefined8 *)(unaff_x22 + 0x28) = uVar2;
    *(undefined8 *)(unaff_x22 + 0x30) = uVar8;
    *(undefined8 *)(unaff_x22 + 0x18) = 0;
    *(undefined8 *)(unaff_x22 + 0x10) = 0;
    *(undefined1 *)(unaff_x22 + 0x20) = 1;
    lVar3 = 0;
    func_0x000107c603bc();
    *(long *)(unaff_x22 + 0x40) = lVar3;
    lVar9 = *(long *)(lVar3 + -8);
    *(long *)(unaff_x22 + 0x48) = lVar9;
    uVar4 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    *(ulong *)(unaff_x22 + 0x50) = uVar4;
    func_0x000107c603b8(uVar4);
    plVar5 = (long *)0x20;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x58) = plVar5;
    plVar6 = plVar5;
    func_0x0001000da454();
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_101afade4;
    plVar7 = (long *)0x20;
    _swift_task_alloc();
    plVar5[2] = (long)plVar7;
    *plVar7 = (long)plVar5;
    plVar7[1] = (long)&UNK_104891308;
                    /* WARNING: Could not recover jumptable at 0x000104890648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)&UNK_10489064c)
              ((undefined8 *)(unaff_x22 + 0x28),(undefined8 *)(unaff_x22 + 0x10),uVar4,lVar3,plVar6)
    ;
    return;
  }
  dVar10 = *(double *)(unaff_x22 + 0x38);
  if (dVar10 < 0.0) {
    dVar10 = 0.0;
  }
  dVar10 = dVar10 * 1000000000.0;
  if (0x7fefffffffffffff < (ulong)ABS(dVar10)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101afaddc);
    (*pcVar1)();
  }
  if (dVar10 <= -1.0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101afade0);
    (*pcVar1)();
  }
  if (dVar10 < 1.8446744073709552e+19) {
    plVar7 = (long *)(ulong)*(uint *)(
                                     PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x60) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_101afae68;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)
              ((long)dVar10);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101afade4);
  (*pcVar1)();
}



/* Entry: 101afade4; end: 101afae67;  */

void FUN_101afade4(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x58));
  if (unaff_x20 != 0) {
    func_0x000107c614ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(0x101afaeb0,0,0);
    return;
  }
  uVar1 = *(undefined8 *)(lVar2 + 0x50);
  (**(code **)(*(long *)(lVar2 + 0x48) + 8))(uVar1,*(undefined8 *)(lVar2 + 0x40));
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101afae64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Entry: 101afae68; end: 101afaef3;  */

void FUN_101afae68(void)

{
  long unaff_x20;
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x60));
  if (unaff_x20 != 0) {
    func_0x000107c614ac();
  }
                    /* WARNING: Could not recover jumptable at 0x000101afaeac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101afaef4; end: 101afaef7;  */

double FUN_101afaef4(long param_1)

{
  ulong uVar1;
  
  func_0x000107c61070();
  if (lRam00000001138473a0 != -1) {
    func_0x00010002a2fc(0x1138473a0,&PTR___NSConcreteGlobalBlock_110d9f240);
  }
  uVar1 = 0;
  if ((ulong)uRam00000001138473ac != 0) {
    uVar1 = (param_1 * (ulong)uRam00000001138473a8) / (ulong)uRam00000001138473ac;
  }
  return (double)uVar1 / 1000000000.0;
}



/* Entry: 101afaef8; end: 101afb5fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101afaef8(double param_1)

{
  double *pdVar1;
  uint uVar2;
  char cVar3;
  undefined8 ***pppuVar4;
  undefined8 ***pppuVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 ****ppppuVar8;
  uint uVar9;
  uint uVar10;
  long extraout_x8;
  long lVar11;
  long unaff_x20;
  undefined8 ****ppppuVar12;
  long lVar13;
  undefined8 ****ppppuVar14;
  code *pcVar15;
  long lVar16;
  undefined8 ****ppppuVar17;
  long lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auStack_170 [4];
  uint uStack_16c;
  double dStack_168;
  uint uStack_15c;
  long lStack_158;
  uint uStack_14c;
  long *plStack_148;
  uint uStack_13c;
  undefined8 ***pppuStack_138;
  long lStack_130;
  undefined8 ***pppuStack_128;
  long alStack_120 [3];
  undefined8 uStack_108;
  undefined **ppuStack_100;
  undefined1 auStack_f8 [24];
  long alStack_e0 [3];
  undefined8 uStack_c8;
  undefined8 ***pppuStack_b8;
  long lStack_b0;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  double dStack_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined8 ***pppuStack_90;
  
  lVar13 = 0x112e001b0;
  func_0x0001000285a8(0x112e001b0,&UNK_10d9d0938);
  lVar18 = *(long *)(lVar13 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if ((*(byte *)(unaff_x20 + _DAT_112e001b8) & 1) == 0) {
    lStack_130 = lVar13;
    func_0x000100b6a0c4(unaff_x20 + _DAT_112e001c0,alStack_e0);
    lVar16 = *(long *)(unaff_x20 + _DAT_112e001c8);
    cVar3 = *(char *)(unaff_x20 + _DAT_113803a88);
    uStack_13c = (uint)*(byte *)(unaff_x20 + _DAT_112e001d0);
    plStack_148 = (long *)CONCAT44(plStack_148._4_4_,(uint)*(byte *)(unaff_x20 + _DAT_112e001d8));
    pdVar1 = (double *)(unaff_x20 + _DAT_112e001e0);
    dVar20 = *pdVar1;
    uStack_14c = (uint)*(byte *)(pdVar1 + 1);
    dStack_168 = pdVar1[2];
    uStack_16c = (uint)*(byte *)(pdVar1 + 3);
    lStack_158 = CONCAT44(lStack_158._4_4_,(uint)*(byte *)(unaff_x20 + _DAT_112e001e8));
    uStack_15c = (uint)*(byte *)(unaff_x20 + _DAT_112e001f0);
    dVar21 = *(double *)(unaff_x20 + _DAT_112e001f8);
    pcVar15 = *(code **)(unaff_x20 + _DAT_112e00200);
    uVar7 = ((undefined8 *)(unaff_x20 + _DAT_112e00200))[1];
    func_0x000107c6157c(lVar16);
    func_0x000107c6157c(uVar7);
    (*pcVar15)();
    func_0x000107c61574(uVar7);
    lVar13 = _DAT_112e00210;
    ppppuVar17 = *(undefined8 *****)(unaff_x20 + _DAT_112e00208);
    func_0x000107c61428(unaff_x20 + _DAT_112e00210,auStack_f8,0,0);
    ppppuVar12 = *(undefined8 *****)(unaff_x20 + lVar13);
    pppuStack_128 = ppppuVar17;
    func_0x000107c61434(ppppuVar17);
    func_0x000107c61434();
    FUN_101afa7cc();
    plVar6 = alStack_e0;
    func_0x0001000a8868(plVar6,uStack_c8);
    lVar13 = *plVar6;
    uVar7 = 0;
    func_0x000100b68c58();
    uVar10 = uStack_14c;
    ppuStack_100 = &PTR_DAT_110443780;
    alStack_120[0] = lVar13;
    uStack_108 = uVar7;
    if ((lVar16 == 0) || ((*(byte *)(lVar16 + 0xa0) & 1) != 0)) {
      pppuStack_138 = ppppuVar12;
      if ((cVar3 == '\0') || (((uStack_13c & 1) != 0 || (((ulong)plStack_148 & 1) != 0)))) {
        func_0x000107c6157c(lVar13);
        func_0x000107c61574(lVar16);
        func_0x000107c6142c(pppuStack_128);
        ppppuVar12 = (undefined8 ****)pppuStack_138;
      }
      else {
        uVar9 = 1;
        if (uStack_15c == 0) {
          uVar9 = 2;
        }
        if ((int)lStack_158 == 0) {
          uVar9 = 3;
        }
        uVar2 = 0;
        if (uStack_14c != 1) {
          uVar2 = uVar9;
        }
        plVar6 = alStack_120;
        func_0x0001000a8868(plVar6,uVar7);
        pppuVar5 = pppuStack_128;
        pppuVar4 = pppuStack_138;
        dVar19 = (double)(long)((param_1 - dVar21) * 1000.0);
        if (0x7fefffffffffffff < (ulong)ABS(dVar19)) {
                    /* WARNING: Does not return */
          pcVar15 = (code *)SoftwareBreakpoint(1,0x101afb5e8);
          (*pcVar15)();
        }
        if (dVar19 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
          pcVar15 = (code *)SoftwareBreakpoint(1,0x101afb5ec);
          (*pcVar15)();
        }
        if (9.223372036854776e+18 <= dVar19) {
                    /* WARNING: Does not return */
          pcVar15 = (code *)SoftwareBreakpoint(1,0x101afb5f0);
          (*pcVar15)();
        }
        if (uVar10 == 1) {
          lVar11 = 0;
          uVar10 = 1;
        }
        else {
          dVar20 = (double)(long)((dVar20 - dVar21) * 1000.0);
          if (0x7fefffffffffffff < (ulong)ABS(dVar20)) {
                    /* WARNING: Does not return */
            pcVar15 = (code *)SoftwareBreakpoint(1,0x101afb5f4);
            (*pcVar15)();
          }
          if (dVar20 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
            pcVar15 = (code *)SoftwareBreakpoint(1,0x101afb5f8);
            (*pcVar15)();
          }
          if (9.223372036854776e+18 <= dVar20) {
                    /* WARNING: Does not return */
            pcVar15 = (code *)SoftwareBreakpoint(1,0x101afb5fc);
            (*pcVar15)();
          }
          uVar10 = 0;
          lVar11 = (long)dVar20;
        }
        uStack_13c = uVar2;
        if ((undefined8 ****)pppuStack_128 == (undefined8 ****)0x0) {
          func_0x000107c6157c(lVar13);
          ppppuVar12 = (undefined8 ****)0x0;
          uStack_98 = (undefined1)uStack_16c;
        }
        else {
          lStack_158 = lVar11;
          uStack_14c = uVar10;
          plStack_148 = plVar6;
          if ((undefined8 ***)((ulong)pppuStack_128[2] >> 3) < pppuStack_138[2]) {
            func_0x000107c61434();
            func_0x000107c6157c(lVar13);
            ppppuVar17 = (undefined8 ****)pppuVar4;
            func_0x000101b131e0(pppuVar4,pppuVar5);
          }
          else {
            pppuStack_b8 = pppuStack_128;
            func_0x000107c61434();
            func_0x000107c6157c(lVar13);
            FUN_101b13a2c(pppuVar4);
            ppppuVar17 = (undefined8 ****)pppuStack_b8;
          }
          ppppuVar14 = (undefined8 ****)ppppuVar17[2];
          if (ppppuVar14 == (undefined8 ****)0x0) {
            func_0x000107c6142c(ppppuVar17);
            ppppuVar12 = (undefined8 ****)PTR___swiftEmptyArrayStorage_11034f1c8;
          }
          else {
            ppppuVar12 = ppppuVar14;
            FUN_101b0fa20(ppppuVar14,0);
            ppppuVar8 = &pppuStack_b8;
            FUN_101b13dc4(ppppuVar8,ppppuVar12 + 4,ppppuVar14,ppppuVar17);
            func_0x000100cc5bac(pppuStack_b8,lStack_b0,CONCAT71(uStack_a7,uStack_a8),dStack_a0,
                                CONCAT71(uStack_97,uStack_98));
            if (ppppuVar8 != ppppuVar14) {
                    /* WARNING: Does not return */
              pcVar15 = (code *)SoftwareBreakpoint(1,0x101afb3bc);
              (*pcVar15)();
            }
          }
          uStack_98 = (undefined1)uStack_16c;
          lVar11 = lStack_158;
          uVar10 = uStack_14c;
        }
        pppuStack_b8 = (undefined8 ***)(long)dVar19;
        uStack_a8 = (undefined1)uVar10;
        dStack_a0 = dStack_168;
        lStack_b0 = lVar11;
        pppuStack_90 = ppppuVar12;
        FUN_101b1af34(uStack_13c,&pppuStack_b8);
        func_0x000107c61574(lVar16);
        func_0x000107c6142c(pppuStack_128);
        func_0x000107c6142c(pppuVar4);
      }
    }
    else {
      plVar6 = alStack_120;
      func_0x0001000a8868(plVar6,uVar7);
      uVar7 = *(undefined8 *)(*plVar6 + 0x18);
      func_0x000107c6157c(lVar16);
      func_0x000107c6157c(lVar13);
      func_0x0001056f0050(uVar7,1);
      func_0x0001000a8868(alStack_120,uStack_108);
      func_0x000101b19b3c(lVar16);
      func_0x000107c61578(lVar16,2);
      func_0x000107c6142c(pppuStack_128);
    }
    func_0x000107c6142c(ppppuVar12);
    func_0x0001000834e4(alStack_120);
    func_0x0001000834e4(alStack_e0);
    lVar13 = lStack_130;
  }
  lVar16 = _DAT_112e00218;
  (**(code **)(lVar18 + 0x10))(auStack_170 + -extraout_x8,unaff_x20 + _DAT_112e00218,lVar13);
  func_0x000107c5fd2c(lVar13);
  pcVar15 = *(code **)(lVar18 + 8);
  (*pcVar15)(auStack_170 + -extraout_x8,lVar13);
  (*pcVar15)(unaff_x20 + lVar16,lVar13);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_112e00220 + 8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_112e00228 + 8));
  func_0x0001000834e4(unaff_x20 + _DAT_112e00230);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_112e00200 + 8));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + _DAT_112e00210));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + _DAT_112e00208));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + _DAT_112e00238));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_112e00240));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_112e00248));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_112e00250));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + _DAT_112e00258));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + _DAT_112e00260));
  func_0x0001000834e4(unaff_x20 + _DAT_112e001c0);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_112e001c8));
  func_0x000101b16f40(unaff_x20 + _DAT_112e00268,0x112d373d8,&UNK_10d9014c0);
  func_0x000107c61470();
  return;
}



/* Entry: 101afb5fc; end: 101afb613;  */

void FUN_101afb5fc(void)

{
  FUN_101afaef8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_defaultActor_deallocate_110350098)();
  return;
}



/* Entry: 101afb614; end: 101afc0df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101afb614(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  long *plVar12;
  long extraout_x8;
  undefined1 *puVar13;
  code *pcVar14;
  ulong uVar15;
  long extraout_x12;
  long lVar16;
  undefined8 uVar17;
  long unaff_x20;
  long lVar18;
  long lVar19;
  code *pcVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined1 auStack_1e0 [8];
  long lStack_1d8;
  long lStack_1d0;
  ulong uStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  long lStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  long lStack_190;
  undefined8 uStack_188;
  long lStack_120;
  long lStack_118;
  undefined **ppuStack_110;
  double dStack_108;
  undefined1 uStack_100;
  double dStack_f8;
  undefined1 auStack_f0 [40];
  undefined1 auStack_c8 [40];
  undefined1 auStack_a0 [48];
  
  lVar6 = 0x112e00270;
  func_0x0001000285a8(0x112e00270,&UNK_10d9d0948);
  lVar21 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar21 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar13 = auStack_1e0 + -extraout_x8;
  lVar7 = 0x112e001b0;
  func_0x0001000285a8(0x112e001b0,&UNK_10d9d0938);
  lVar18 = *(long *)(lVar7 + -8);
  lVar16 = *(long *)(lVar18 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar25 = (long)puVar13 - (lVar16 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar24 = lVar25 - extraout_x12;
  uVar9 = param_3;
  if (*(char *)(unaff_x20 + _DAT_113803a88) == '\x01') {
    lVar19 = *(long *)(unaff_x20 + _DAT_112e00250);
    func_0x000107c4b940(*(undefined8 *)(lVar19 + 0x10));
    bVar3 = *(byte *)(lVar19 + 0x18);
    func_0x000107c5d278(*(undefined8 *)(lVar19 + 0x10));
    if ((bVar3 & 1) == 0) {
      uVar8 = 0;
      uStack_188 = param_4;
      FUN_101b1df30(0,param_4);
      lVar5 = _DAT_112e00218;
      lVar4 = _DAT_112e001c0;
      plVar12 = (long *)(unaff_x20 + _DAT_112e00230);
      pcVar2 = *(code **)(unaff_x20 + _DAT_112e00200);
      uVar9 = ((undefined8 *)(unaff_x20 + _DAT_112e00200))[1];
      plStack_1c0 = plVar12;
      uStack_1b8 = uVar8;
      func_0x000100b6a0c4(unaff_x20 + _DAT_112e001c0,&lStack_120);
      pcVar14 = *(code **)(lVar18 + 0x10);
      (*pcVar14)(lVar24,unaff_x20 + lVar5,lVar7);
      func_0x000100b6a0c4(plVar12,auStack_a0);
      uVar23 = (ulong)*(byte *)(lVar18 + 0x50);
      uStack_1a0 = ~uVar23;
      uVar15 = uVar23 + 0x40 & (uVar23 ^ 0xffffffffffffffff);
      lStack_1a8 = lVar16 + 7;
      uVar22 = lStack_1a8 + uVar15 & 0xfffffffffffffff8;
      puVar10 = &UNK_110443100;
      lStack_1d8 = lVar7;
      lStack_1d0 = lVar25;
      uStack_1c8 = uVar22;
      pcStack_1b0 = (code *)uVar15;
      func_0x000107c613fc(&UNK_110443100,uVar22 + 0x40,uVar23 | 7);
      *(long *)(puVar10 + 0x10) = lVar19;
      func_0x000100b69c8c(&lStack_120,puVar10 + 0x18);
      lVar7 = lStack_1d8;
      pcVar20 = *(code **)(lVar18 + 0x20);
      lStack_190 = lVar24;
      (*pcVar20)(puVar10 + uVar15,lVar24,lStack_1d8);
      *(long *)(puVar10 + uVar22) = param_1;
      func_0x000100b69c8c(auStack_a0,puVar10 + uVar22 + 8);
      *(code **)(puVar10 + uVar22 + 0x30) = pcVar2;
      *(undefined8 *)((long)(puVar10 + uVar22 + 0x30) + 8) = uVar9;
      func_0x000100b6a0c4(unaff_x20 + lVar4,auStack_c8);
      lVar16 = lStack_1d0;
      (*pcVar14)(lStack_1d0,unaff_x20 + lVar5,lVar7);
      plVar12 = plStack_1c0;
      func_0x000100b6a0c4(plStack_1c0,auStack_f0);
      puVar11 = &UNK_110443128;
      uStack_198 = uVar23;
      func_0x000107c613fc(&UNK_110443128,uVar22 + 0x40,uVar23 | 7);
      *(long *)(puVar11 + 0x10) = lVar19;
      func_0x000100b69c8c(auStack_c8,puVar11 + 0x18);
      puVar1 = puVar11 + (long)pcStack_1b0;
      pcStack_1b0 = pcVar20;
      (*pcVar20)(puVar1,lVar16,lVar7);
      *(long *)(puVar11 + uStack_1c8) = param_1;
      func_0x000100b69c8c(auStack_f0,puVar11 + uVar22 + 8);
      *(code **)(puVar11 + uVar22 + 0x30) = pcVar2;
      *(undefined8 *)((long)(puVar11 + uVar22 + 0x30) + 8) = uVar9;
      func_0x000107c61580(lVar19,2);
      func_0x000107c61580(uVar9,2);
      func_0x000107c6157c(param_3);
      lVar16 = param_1;
      FUN_101b1d764(param_1,param_2,param_3,FUN_101b1436c,puVar10,FUN_101b14430,puVar11);
      func_0x0001000a8868(plVar12,plVar12[3]);
      lVar18 = *plVar12;
      func_0x000107c4b940(*(undefined8 *)(lVar18 + 0x20));
      dVar27 = *(double *)(lVar18 + 0x28);
      dVar26 = 0.0;
      if (*(char *)(lVar18 + 0x38) != '\x01') {
        dVar28 = *(double *)(lVar18 + 0x30);
        (**(code **)(lVar18 + 0x10))();
        dVar26 = dVar26 - dVar28;
        if (dVar26 < 0.0) {
          dVar26 = 0.0;
        }
      }
      dVar27 = dVar27 + dVar26;
      func_0x000107c5d278(*(undefined8 *)(lVar18 + 0x20));
      func_0x000107c6157c(lVar16);
      (*pcVar2)();
      ppuStack_110 = &PTR_DAT_110443aa0;
      uStack_100 = 0;
      lStack_120 = param_1;
      lStack_118 = lVar16;
      dStack_108 = dVar27;
      dStack_f8 = dVar26;
      func_0x000107c5fd28(puVar13,&lStack_120,lVar7);
      (**(code **)(lVar21 + 8))(puVar13,lVar6);
      uVar8 = uStack_188;
      func_0x000103992a50(0,uStack_188);
      lVar6 = lStack_190;
      uVar17 = *(undefined8 *)(lVar16 + 0x38);
      (*pcVar14)(lStack_190,unaff_x20 + lVar5,lVar7);
      uVar15 = uStack_198 + 0x20 & uStack_1a0;
      uVar22 = lStack_1a8 + uVar15 & 0xfffffffffffffff8;
      puVar10 = &UNK_110443150;
      func_0x000107c613fc(&UNK_110443150,uVar22 + 0x20,uStack_198 | 7);
      *(undefined8 *)(puVar10 + 0x10) = uVar8;
      *(long *)(puVar10 + 0x18) = lVar19;
      (*pcStack_1b0)(puVar10 + uVar15,lVar6,lVar7);
      *(long *)(puVar10 + uVar22) = param_1;
      *(long *)(puVar10 + uVar22 + 8) = lVar16;
      *(code **)(puVar10 + uVar22 + 0x10) = pcVar2;
      *(undefined8 *)((long)(puVar10 + uVar22 + 0x10) + 8) = uVar9;
      uVar8 = uVar17;
      func_0x000103992620(uVar17,FUN_101b144cc,puVar10);
      func_0x000107c6157c(lVar19);
      func_0x000107c6157c(uVar9);
      func_0x000107c6157c(uVar17);
      return uVar8;
    }
    plVar12 = (long *)(unaff_x20 + _DAT_112e001c0);
    func_0x0001000a8868(plVar12,plVar12[3]);
    uVar17 = *(undefined8 *)(*plVar12 + 0x18);
    uVar8 = 0xd000000000000011;
    func_0x000107c5fadc(0xd000000000000011,0x800000010effbe80);
    func_0x0001056f0f70(uVar17,uVar8,1);
    func_0x000107c61170(uVar8);
    func_0x000103992a50(0,param_4);
    func_0x000103992620(param_3,0,0);
  }
  else {
    func_0x000103992a50(0,param_4);
    func_0x000103992620(param_3,0,0);
  }
  func_0x000107c6157c(param_3);
  return uVar9;
}



/* Entry: 101afc0e0; end: 101afc1f3;  */

void FUN_101afc0e0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,code *param_6)

{
  byte bVar1;
  long lVar2;
  long extraout_x8;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = 0x112e00270;
  func_0x0001000285a8(0x112e00270,&UNK_10d9d0948);
  lVar4 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c4b940(uVar3);
  bVar1 = *(byte *)(param_2 + 0x18);
  func_0x000107c5d278(uVar3);
  if ((bVar1 & 1) == 0) {
    func_0x000107c6157c(param_5);
    (*param_6)();
    ppuStack_80 = &PTR_DAT_110443aa0;
    uStack_78 = 0;
    uStack_70 = 1;
    uVar3 = 0x112e001b0;
    uStack_90 = param_4;
    uStack_88 = param_5;
    uStack_68 = param_1;
    func_0x0001000285a8(0x112e001b0,&UNK_10d9d0938);
    func_0x000107c5fd28((long)&uStack_90 - extraout_x8,&uStack_90,uVar3);
    (**(code **)(lVar4 + 8))((long)&uStack_90 - extraout_x8,lVar2);
  }
  return;
}



/* Entry: 101afc1f4; end: 101afc287;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101afc1f4(void)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112e00250);
  func_0x000107c4b940(*(undefined8 *)(lVar3 + 0x10));
  bVar1 = *(byte *)(lVar3 + 0x18);
  *(undefined1 *)(lVar3 + 0x18) = 1;
  func_0x000107c5d278(*(undefined8 *)(lVar3 + 0x10));
  if ((bVar1 & 1) == 0) {
    plVar2 = (long *)(unaff_x20 + _DAT_112e001c0);
    func_0x0001000a8868(plVar2,plVar2[3]);
    func_0x0001056f0ed4(*(undefined8 *)(*plVar2 + 0x18),1);
    func_0x0001000285a8(0x112e001b0,&UNK_10d9d0938);
    func_0x000107c5fd2c();
  }
  return;
}



/* Entry: 101afc288; end: 101afc47f;  */

void FUN_101afc288(double *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  plVar1 = param_4;
  func_0x0001000a8868(param_4,param_4[3]);
  lVar2 = *plVar1;
  func_0x000107c4b940(*(undefined8 *)(lVar2 + 0x20));
  if (*(char *)(lVar2 + 0x38) == '\x01') {
    (**(code **)(lVar2 + 0x10))();
    *(undefined8 *)(lVar2 + 0x30) = param_2;
    *(undefined1 *)(lVar2 + 0x38) = 0;
  }
  func_0x000107c5d278(*(undefined8 *)(lVar2 + 0x20));
  func_0x0001000a8868(param_4,param_4[3]);
  lVar2 = *param_4;
  func_0x000107c4b940(*(undefined8 *)(lVar2 + 0x20));
  dVar4 = *(double *)(lVar2 + 0x28);
  dVar3 = 0.0;
  if (*(char *)(lVar2 + 0x38) != '\x01') {
    dVar5 = *(double *)(lVar2 + 0x30);
    (**(code **)(lVar2 + 0x10))();
    dVar3 = dVar3 - dVar5;
    if (dVar3 < 0.0) {
      dVar3 = 0.0;
    }
  }
  func_0x000107c5d278(*(undefined8 *)(lVar2 + 0x20));
  *param_1 = dVar4 + dVar3;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 101afc480; end: 101afc4df;  */

void FUN_101afc480(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x3a0) = param_16;
  *(undefined8 *)(unaff_x22 + 0x398) = param_15;
  *(undefined8 *)(unaff_x22 + 0x390) = param_14;
  *(undefined8 *)(unaff_x22 + 0x388) = param_2;
  *(undefined8 *)(unaff_x22 + 0x380) = param_13;
  *(undefined8 *)(unaff_x22 + 0x378) = param_12;
  *(undefined8 *)(unaff_x22 + 0x370) = param_1;
  *(undefined8 *)(unaff_x22 + 0x368) = param_11;
  *(undefined8 *)(unaff_x22 + 0x360) = param_9;
  *(undefined8 *)(unaff_x22 + 0x358) = param_8;
  *(undefined8 *)(unaff_x22 + 0x350) = param_7;
  *(undefined8 *)(unaff_x22 + 0x348) = param_6;
  *(undefined8 *)(unaff_x22 + 0x340) = param_5;
  *(undefined8 *)(unaff_x22 + 0x338) = param_4;
  *(undefined8 *)(unaff_x22 + 0x330) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101afc4e0,0,0);
  return;
}



/* Entry: 101afc4e0; end: 101afd5df;  */

void FUN_101afc4e0(undefined8 param_1)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  byte *pbVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  code *pcVar21;
  code *pcVar22;
  ulong uVar23;
  long lVar24;
  double dVar25;
  undefined8 uVar26;
  long lVar27;
  long unaff_x22;
  undefined8 *puVar28;
  long lVar29;
  ulong uVar30;
  code *pcVar31;
  ulong uVar32;
  long lVar33;
  undefined8 uVar34;
  long lVar35;
  long lVar36;
  undefined8 uVar37;
  ulong uVar38;
  ulong uVar39;
  double dVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  
  lVar24 = *(long *)(unaff_x22 + 0x340);
  (**(code **)(unaff_x22 + 0x330))();
  *(undefined8 *)(unaff_x22 + 0x3a8) = param_1;
  func_0x000107c61428(lVar24 + 0x10,unaff_x22 + 0x208,0,0);
  lVar24 = lVar24 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0x3b0) = lVar24;
  if (lVar24 == 0) {
    lVar24 = *(long *)(unaff_x22 + 0x340);
    pcVar31 = *(code **)(unaff_x22 + 0x330);
    (*pcVar31)();
    *(undefined8 *)(unaff_x22 + 0x3b8) = param_1;
    func_0x000100083b20(unaff_x22 + 800);
    uVar26 = *(undefined8 *)(unaff_x22 + 800);
    FUN_101af9b5c(unaff_x22 + 0x110,uVar26);
    func_0x000107c615e8(uVar26);
    (*pcVar31)();
    *(undefined8 *)(unaff_x22 + 0x3c0) = param_1;
    func_0x000107c61428(lVar24 + 0x10,unaff_x22 + 0x220,0,0);
    lVar24 = lVar24 + 0x10;
    func_0x000107c61648();
    *(long *)(unaff_x22 + 0x3c8) = lVar24;
    if (lVar24 == 0) {
      lVar24 = *(long *)(unaff_x22 + 0x118);
      *(undefined8 *)(unaff_x22 + 0x3d8) = *(undefined8 *)(unaff_x22 + 0x118);
      *(undefined8 *)(unaff_x22 + 0x3d0) = *(undefined8 *)(unaff_x22 + 0x110);
      *(undefined8 *)(unaff_x22 + 0x3e0) = *(undefined8 *)(unaff_x22 + 0x120);
      dVar25 = *(double *)(unaff_x22 + 0x128);
      *(double *)(unaff_x22 + 1000) = dVar25;
      cVar1 = *(char *)(unaff_x22 + 0x130);
      *(char *)(unaff_x22 + 0x141) = cVar1;
      if (lVar24 == 0) {
        lVar24 = *(long *)(unaff_x22 + 0x340);
        func_0x000107c61428(lVar24 + 0x10,unaff_x22 + 0x268,0,0);
        lVar24 = lVar24 + 0x10;
        func_0x000107c61648();
        *(long *)(unaff_x22 + 0x3f8) = lVar24;
        if (lVar24 != 0) {
          pcVar31 = FUN_101aff7dc;
          goto LAB_107c615e0;
        }
        plVar10 = (long *)0x160;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x400) = plVar10;
        lVar24 = 0x101aff840;
      }
      else if (lVar24 == 1) {
        lVar24 = *(long *)(unaff_x22 + 0x340);
        func_0x000107c61428(lVar24 + 0x10,unaff_x22 + 0x250,0,0);
        lVar24 = lVar24 + 0x10;
        func_0x000107c61648();
        *(long *)(unaff_x22 + 0x408) = lVar24;
        if (lVar24 != 0) {
          pcVar31 = (code *)0x101aff87c;
          goto LAB_107c615e0;
        }
        plVar10 = (long *)0x160;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x410) = plVar10;
        lVar24 = 0x101aff8e0;
      }
      else if (lVar24 == 2) {
        lVar24 = *(long *)(unaff_x22 + 0x340);
        func_0x000107c61428(lVar24 + 0x10,unaff_x22 + 0x238,0,0);
        lVar24 = lVar24 + 0x10;
        func_0x000107c61648();
        *(long *)(unaff_x22 + 0x418) = lVar24;
        if (lVar24 != 0) {
          pcVar31 = (code *)0x101aff91c;
          goto LAB_107c615e0;
        }
        plVar10 = (long *)0x160;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x420) = plVar10;
        lVar24 = 0x101aff980;
      }
      else {
        dVar40 = *(double *)(unaff_x22 + 0x131);
        *(undefined8 *)(unaff_x22 + 0x318) = *(undefined8 *)(unaff_x22 + 0x139);
        *(double *)(unaff_x22 + 0x310) = dVar40;
        lVar24 = 0x112e009d8;
        func_0x0001000285a8(0x112e009d8,&UNK_10d9d0d38);
        uVar16 = *(long *)(*(long *)(lVar24 + -8) + 0x40) + 0xf;
        uVar8 = uVar16 & 0xfffffffffffffff0;
        func_0x000107c615b8();
        *(ulong *)(unaff_x22 + 0x3f0) = uVar8;
        lVar33 = (long)*(int *)(lVar24 + 0x30);
        *(int *)(unaff_x22 + 0x144) = *(int *)(lVar24 + 0x30);
        if (cVar1 == '\x01') {
          lVar9 = 0;
          func_0x000107c5eea4();
          (**(code **)(*(long *)(lVar9 + -8) + 0x38))(uVar8 + lVar33,1,1,lVar9);
          bVar6 = true;
        }
        else {
          uVar26 = *(undefined8 *)(unaff_x22 + 0x368);
          lVar18 = 0;
          func_0x000107c5eea4();
          lVar19 = *(long *)(lVar18 + -8);
          uVar14 = *(long *)(lVar19 + 0x40) + 0xf;
          uVar23 = uVar14 & 0xfffffffffffffff0;
          func_0x000107c615b8();
          func_0x000107c40ef8(uVar26);
          func_0x000107c61180();
          func_0x000107c5ee94(uVar23);
          func_0x000107c61170(uVar26);
          uVar14 = uVar14 & 0xfffffffffffffff0;
          func_0x000107c615b8();
          lVar9 = 0x112d373d8;
          func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
          uVar15 = *(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xf;
          uVar30 = uVar15 & 0xfffffffffffffff0;
          func_0x000107c615b8();
          FUN_101b1e898(uVar30);
          uVar32 = uVar15 & 0xfffffffffffffff0;
          func_0x000107c615b8();
          func_0x0001003a4c00(uVar30,uVar32);
          pcVar31 = *(code **)(lVar19 + 0x30);
          uVar17 = uVar32;
          (*pcVar31)(uVar32,1,lVar18);
          if ((int)uVar17 == 1) {
            uVar15 = uVar15 & 0xfffffffffffffff0;
            func_0x000107c615b8(uVar15);
            pcVar21 = *(code **)(lVar19 + 0x10);
            (*pcVar21)();
            (**(code **)(lVar19 + 0x38))(uVar15,0,1,lVar18);
            FUN_101b1e9dc(uVar15);
            func_0x000107c615c0(uVar15);
            (*pcVar21)(uVar14,uVar23,lVar18);
            uVar15 = uVar32;
            (*pcVar31)(uVar32,1,lVar18);
            if ((int)uVar15 != 1) {
              func_0x000101b16f40(uVar32,0x112d373d8,&UNK_10d9014c0);
            }
          }
          else {
            (**(code **)(lVar19 + 0x20))(uVar14,uVar32,lVar18);
          }
          func_0x000107c615c0(uVar32);
          func_0x000107c615c0(uVar30);
          func_0x000107c5ee68(uVar14);
          (**(code **)(lVar19 + 8))(uVar23,lVar18);
          if (0.0 <= dVar40) {
            bVar6 = dVar40 < dVar25;
            (**(code **)(lVar19 + 0x20))(uVar8 + lVar33,uVar14,lVar18);
            (**(code **)(lVar19 + 0x38))(uVar8 + lVar33,0,1,lVar18);
            func_0x000107c615c0(uVar14);
            func_0x000107c615c0(uVar23);
          }
          else {
            (**(code **)(lVar19 + 0x20))(uVar8 + lVar33,uVar14,lVar18);
            (**(code **)(lVar19 + 0x38))(uVar8 + lVar33,0,1,lVar18);
            func_0x000107c615c0(uVar14);
            func_0x000107c615c0(uVar23);
            bVar6 = false;
          }
        }
        *(bool *)uVar8 = bVar6;
        pbVar11 = (byte *)(uVar16 & 0xfffffffffffffff0);
        func_0x000107c615b8();
        FUN_101b16ef8(uVar8,pbVar11,0x112e009d8,&UNK_10d9d0d38);
        bVar2 = *pbVar11;
        func_0x000101b16f40(pbVar11 + *(int *)(lVar24 + 0x30),0x112d373d8,&UNK_10d9014c0);
        func_0x000107c615c0(pbVar11);
        lVar24 = *(long *)(unaff_x22 + 0x340);
        if ((bVar2 & 1) != 0) {
          func_0x000107c61428(lVar24 + 0x10,unaff_x22 + 0x298,0,0);
          lVar24 = lVar24 + 0x10;
          func_0x000107c61648();
          *(long *)(unaff_x22 + 0x428) = lVar24;
          if (lVar24 == 0) {
            lVar24 = *(long *)(unaff_x22 + 0x340);
            func_0x000107c61428(lVar24 + 0x10,unaff_x22 + 0x2b0,0,0);
            lVar24 = lVar24 + 0x10;
            func_0x000107c61648();
            *(long *)(unaff_x22 + 0x430) = lVar24;
            if (lVar24 == 0) {
              lVar24 = *(long *)(unaff_x22 + 0x340);
              func_0x000107c61428(lVar24 + 0x10,unaff_x22 + 0x2e0,0,0);
              lVar24 = lVar24 + 0x10;
              func_0x000107c61648();
              *(long *)(unaff_x22 + 0x438) = lVar24;
              if (lVar24 == 0) {
                dVar25 = (double)(long)((*(double *)(unaff_x22 + 0x3c0) -
                                        *(double *)(unaff_x22 + 0x3b8)) * 1000.0);
                if (0x7fefffffffffffff < (ulong)ABS(dVar25)) {
                    /* WARNING: Does not return */
                  pcVar31 = (code *)SoftwareBreakpoint(1,0x101afd5d8);
                  (*pcVar31)();
                }
                if (dVar25 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
                  pcVar31 = (code *)SoftwareBreakpoint(1,0x101afd5dc);
                  (*pcVar31)();
                }
                if (9.223372036854776e+18 <= dVar25) {
                    /* WARNING: Does not return */
                  pcVar31 = (code *)SoftwareBreakpoint(1,0x101afd5e0);
                  (*pcVar31)();
                }
                uVar3 = *(undefined1 *)(unaff_x22 + 0x141);
                uVar26 = *(undefined8 *)(unaff_x22 + 1000);
                uVar41 = *(undefined8 *)(unaff_x22 + 0x3e0);
                uVar34 = *(undefined8 *)(unaff_x22 + 0x3d8);
                uVar37 = *(undefined8 *)(unaff_x22 + 0x3d0);
                uVar44 = *(undefined8 *)(unaff_x22 + 0x3a8);
                puVar28 = *(undefined8 **)(unaff_x22 + 0x380);
                uVar47 = *(undefined8 *)(unaff_x22 + 0x370);
                lVar24 = *(long *)(unaff_x22 + 0x340);
                puVar12 = &UNK_1104433d8;
                func_0x000107c613fc(&UNK_1104433d8,0x18,7);
                *(undefined **)(unaff_x22 + 0x448) = puVar12;
                func_0x000107c61428(lVar24 + 0x10,unaff_x22 + 0x2f8,0,0);
                lVar24 = lVar24 + 0x10;
                func_0x000107c61648(lVar24);
                func_0x000107c61644(puVar12 + 0x10,lVar24);
                func_0x000107c61574(lVar24);
                puVar13 = &UNK_110443450;
                func_0x000107c613fc(&UNK_110443450,0x68,7);
                *(undefined **)(unaff_x22 + 0x450) = puVar13;
                *(undefined **)(puVar13 + 0x10) = puVar12;
                *(undefined8 *)(puVar13 + 0x18) = uVar37;
                *(undefined8 *)(puVar13 + 0x20) = uVar34;
                *(undefined8 *)(puVar13 + 0x28) = uVar41;
                *(undefined8 *)(puVar13 + 0x30) = uVar26;
                puVar13[0x38] = uVar3;
                uVar26 = *(undefined8 *)(unaff_x22 + 0x310);
                *(undefined8 *)(puVar13 + 0x41) = *(undefined8 *)(unaff_x22 + 0x318);
                *(undefined8 *)(puVar13 + 0x39) = uVar26;
                *(undefined8 *)(puVar13 + 0x50) = uVar47;
                *(undefined8 *)(puVar13 + 0x58) = uVar44;
                *(long *)(puVar13 + 0x60) = (long)dVar25;
                func_0x0001000a8868(puVar28,puVar28[3]);
                uVar34 = *puVar28;
                uVar26 = 0;
                func_0x000100b68ba4();
                *(undefined8 *)(unaff_x22 + 0x1d0) = uVar26;
                *(undefined ***)(unaff_x22 + 0x1d8) = &PTR_DAT_110442ef8;
                *(undefined8 *)(unaff_x22 + 0x1b8) = uVar34;
                func_0x000101b15ef8(unaff_x22 + 0x110,unaff_x22 + 0x180);
                func_0x000107c6157c(puVar12);
                func_0x000107c6157c(uVar34);
                lVar24 = 0x112e009e0;
                func_0x0001000285a8(0x112e009e0,&UNK_10d9d0d50);
                *(long *)(unaff_x22 + 0x458) = lVar24;
                lVar18 = *(long *)(lVar24 + -8);
                *(long *)(unaff_x22 + 0x460) = lVar18;
                lVar19 = *(long *)(lVar18 + 0x40);
                uVar16 = lVar19 + 0xf;
                uVar14 = uVar16 & 0xfffffffffffffff0;
                func_0x000107c615b8();
                *(ulong *)(unaff_x22 + 0x468) = uVar14;
                lVar33 = 0x112e009e8;
                func_0x0001000285a8(0x112e009e8,&UNK_10d9d5e80);
                *(long *)(unaff_x22 + 0x470) = lVar33;
                lVar29 = *(long *)(lVar33 + -8);
                *(long *)(unaff_x22 + 0x478) = lVar29;
                lVar35 = *(long *)(lVar29 + 0x40);
                uVar8 = lVar35 + 0xf;
                uVar15 = uVar8 & 0xfffffffffffffff0;
                func_0x000107c615b8();
                *(ulong *)(unaff_x22 + 0x480) = uVar15;
                lVar9 = 0x112e009f0;
                func_0x0001000285a8(0x112e009f0,&UNK_10d9d0d60);
                lVar27 = *(long *)(lVar9 + -8);
                puVar28 = (undefined8 *)(*(long *)(lVar27 + 0x40) + 0xfU & 0xfffffffffffffff0);
                func_0x000107c615b8();
                *puVar28 = 1;
                (**(code **)(lVar27 + 0x68))();
                iVar7 = 2;
                func_0x000100029b9c(2,0x11,0,0);
                if (iVar7 == 0) {
                  func_0x000101b0eb4c(uVar14,uVar15,puVar28);
                }
                else {
                  func_0x000107c5fd10(uVar14,uVar15,PTR___sytN_11034f1b0 + 8,puVar28,
                                      PTR___sytN_11034f1b0 + 8);
                }
                uVar42 = *(undefined8 *)(unaff_x22 + 0x3e0);
                uVar41 = *(undefined8 *)(unaff_x22 + 0x3a0);
                uVar45 = *(undefined8 *)(unaff_x22 + 0x388);
                uVar26 = *(undefined8 *)(unaff_x22 + 0x378);
                uVar34 = *(undefined8 *)(unaff_x22 + 0x358);
                uVar37 = *(undefined8 *)(unaff_x22 + 0x350);
                uVar46 = *(undefined8 *)(unaff_x22 + 0x398);
                uVar43 = *(undefined8 *)(unaff_x22 + 0x390);
                uVar47 = *(undefined8 *)(unaff_x22 + 0x338);
                uVar44 = *(undefined8 *)(unaff_x22 + 0x330);
                (**(code **)(lVar27 + 8))(puVar28,lVar9);
                func_0x000107c615c0(puVar28);
                lVar9 = 0;
                FUN_101b14550();
                func_0x000107c613fc();
                *(long *)(unaff_x22 + 0x488) = lVar9;
                puVar12 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
                func_0x000107c610f8();
                func_0x000107c453e4();
                *(undefined **)(lVar9 + 0x10) = puVar12;
                *(undefined1 *)(lVar9 + 0x18) = 0;
                *(undefined8 *)(lVar9 + 0x20) = 0;
                lVar27 = 0x90;
                func_0x000107c615b8();
                *(long *)(unaff_x22 + 0x490) = lVar27;
                *(undefined8 *)(lVar27 + 0x10) = uVar41;
                *(ulong *)(lVar27 + 0x18) = uVar14;
                *(long *)(lVar27 + 0x20) = lVar9;
                *(long *)(lVar27 + 0x28) = unaff_x22 + 0x1b8;
                *(undefined8 *)(lVar27 + 0x30) = uVar45;
                *(undefined8 *)(lVar27 + 0x38) = uVar42;
                *(undefined8 *)(lVar27 + 0x48) = uVar46;
                *(undefined8 *)(lVar27 + 0x40) = uVar43;
                *(undefined8 *)(lVar27 + 0x58) = uVar47;
                *(undefined8 *)(lVar27 + 0x50) = uVar44;
                *(undefined8 *)(lVar27 + 0x60) = uVar26;
                *(undefined8 *)(lVar27 + 0x68) = uVar34;
                *(ulong *)(lVar27 + 0x70) = uVar15;
                *(undefined8 *)(lVar27 + 0x78) = uVar37;
                *(undefined **)(lVar27 + 0x80) = &UNK_10d9d0d48;
                *(undefined **)(lVar27 + 0x88) = puVar13;
                iVar7 = 2;
                func_0x000100029b9c(2,0x12,0,0);
                if (iVar7 != 0) {
                  plVar10 = (long *)(ulong)*(uint *)(
                                                  PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lFTu_11034ff68
                                                  + 4);
                  func_0x000107c615b8();
                  *(long **)(unaff_x22 + 0x498) = plVar10;
                  *plVar10 = unaff_x22;
                  plVar10[1] = (long)FUN_101b01b48;
                    /* WARNING: Could not recover jumptable at 0x00010bdb929c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)
                    PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lF_11034ff60
                  )();
                  return;
                }
                uVar43 = *(undefined8 *)(unaff_x22 + 0x3e0);
                uVar41 = *(undefined8 *)(unaff_x22 + 0x3a0);
                uVar46 = *(undefined8 *)(unaff_x22 + 0x388);
                uVar26 = *(undefined8 *)(unaff_x22 + 0x338);
                uVar34 = *(undefined8 *)(unaff_x22 + 0x330);
                uVar37 = *(undefined8 *)(unaff_x22 + 0x398);
                uVar47 = *(undefined8 *)(unaff_x22 + 0x398);
                uVar44 = *(undefined8 *)(unaff_x22 + 0x390);
                func_0x000107c615ac(unaff_x22 + 0x10,PTR___sytN_11034f1b0 + 8);
                *(long *)(unaff_x22 + 0x328) = unaff_x22 + 0x10;
                lVar27 = 0x112d453c8;
                func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
                uVar14 = *(long *)(*(long *)(lVar27 + -8) + 0x40) + 0xf;
                uVar15 = uVar14 & 0xfffffffffffffff0;
                func_0x000107c615b8();
                lVar27 = 0;
                func_0x000107c5fd0c();
                pcVar31 = *(code **)(*(long *)(lVar27 + -8) + 0x38);
                (*pcVar31)(uVar15,1,1,lVar27);
                uVar16 = uVar16 & 0xfffffffffffffff0;
                func_0x000107c615b8();
                (**(code **)(lVar18 + 0x10))();
                func_0x000100b6a0c4(unaff_x22 + 0x1b8,unaff_x22 + 0x1e0);
                lVar27 = 0x112e001b0;
                func_0x0001000285a8(0x112e001b0,&UNK_10d9d0938);
                lVar36 = *(long *)(lVar27 + -8);
                lVar20 = *(long *)(lVar36 + 0x40);
                uVar17 = lVar20 + 0xfU & 0xfffffffffffffff0;
                func_0x000107c615b8();
                pcVar21 = *(code **)(lVar36 + 0x10);
                (*pcVar21)();
                bVar2 = *(byte *)(lVar18 + 0x50);
                uVar30 = (ulong)bVar2 + 0x28 & ((ulong)bVar2 ^ 0xffffffffffffffff);
                uVar39 = lVar19 + uVar30 + 7 & 0xfffffffffffffff8;
                bVar4 = *(byte *)(lVar36 + 0x50);
                uVar23 = (ulong)bVar4;
                uVar32 = uVar39 + 0x50 + uVar23 + 0x10 & (uVar23 ^ 0xffffffffffffffff);
                puVar12 = &UNK_110443478;
                func_0x000107c613fc(&UNK_110443478,uVar32 + lVar20,bVar4 | bVar2 | 7);
                *(undefined8 *)(puVar12 + 0x10) = 0;
                *(undefined8 *)(puVar12 + 0x18) = 0;
                *(undefined8 *)(puVar12 + 0x20) = uVar41;
                (**(code **)(lVar18 + 0x20))(puVar12 + uVar30,uVar16,lVar24);
                *(long *)(puVar12 + uVar39) = lVar9;
                func_0x000100b69c8c(unaff_x22 + 0x1e0,puVar12 + uVar39 + 8);
                *(undefined8 *)(puVar12 + uVar39 + 0x30) = uVar46;
                *(undefined8 *)(puVar12 + uVar39 + 0x38) = uVar43;
                *(undefined8 *)((long)(puVar12 + uVar39 + 0x40) + 8) = uVar47;
                *(undefined8 *)(puVar12 + uVar39 + 0x40) = uVar44;
                *(undefined8 *)(puVar12 + uVar39 + 0x50) = uVar34;
                *(undefined8 *)((long)(puVar12 + uVar39 + 0x50) + 8) = uVar26;
                pcVar22 = *(code **)(lVar36 + 0x20);
                (*pcVar22)(puVar12 + uVar32,uVar17,lVar27);
                func_0x000107c615c0(uVar17);
                func_0x000107c615c0(uVar16);
                func_0x000107c6157c(lVar9);
                func_0x000107c6157c(uVar37);
                func_0x000107c6157c(uVar26);
                FUN_101b02fc0(uVar15,&UNK_10d9d0d80,puVar12,&UNK_1104434f0,PTR___sytN_11034f1b0 + 8,
                              &UNK_10d9d0dd0);
                func_0x000101b16f40(uVar15,0x112d453c8,&UNK_10d90ac60);
                func_0x000107c615c0(uVar15);
                uVar16 = uVar14 & 0xfffffffffffffff0;
                func_0x000107c615b8();
                (*pcVar31)();
                lVar24 = 0x112e009c0;
                func_0x0001000285a8(0x112e009c0,&UNK_10d9d0cf8);
                lVar19 = *(long *)(lVar24 + -8);
                lVar18 = *(long *)(lVar19 + 0x40);
                uVar15 = lVar18 + 0xfU & 0xfffffffffffffff0;
                func_0x000107c615b8();
                (**(code **)(lVar19 + 0x10))();
                uVar8 = uVar8 & 0xfffffffffffffff0;
                func_0x000107c615b8();
                (**(code **)(lVar29 + 0x10))();
                uVar17 = lVar20 + 0xfU & 0xfffffffffffffff0;
                func_0x000107c615b8();
                (*pcVar21)();
                bVar2 = *(byte *)(lVar19 + 0x50);
                uVar39 = (ulong)bVar2 + 0x28 & ((ulong)bVar2 ^ 0xffffffffffffffff);
                uVar30 = lVar18 + uVar39 + 7 & 0xfffffffffffffff8;
                bVar5 = *(byte *)(lVar29 + 0x50);
                uVar38 = bVar5 + uVar30 + 8 & ((ulong)bVar5 ^ 0xffffffffffffffff);
                uVar32 = lVar35 + uVar38 + 7 & 0xfffffffffffffff8;
                uVar23 = uVar32 + uVar23 + 0x10 & (uVar23 ^ 0xffffffffffffffff);
                puVar12 = &UNK_1104434a0;
                func_0x000107c613fc(&UNK_1104434a0,uVar23 + lVar20,bVar4 | bVar2 | bVar5 | 7);
                *(undefined8 *)(puVar12 + 0x10) = 0;
                *(undefined8 *)(puVar12 + 0x18) = 0;
                *(undefined8 *)(puVar12 + 0x20) = uVar41;
                (**(code **)(lVar19 + 0x20))(puVar12 + uVar39,uVar15,lVar24);
                *(long *)(puVar12 + uVar30) = lVar9;
                (**(code **)(lVar29 + 0x20))(puVar12 + uVar38,uVar8,lVar33);
                *(undefined8 *)(puVar12 + uVar32) = uVar34;
                *(undefined8 *)((long)(puVar12 + uVar32) + 8) = uVar26;
                (*pcVar22)(puVar12 + uVar23,uVar17,lVar27);
                func_0x000107c615c0(uVar17);
                func_0x000107c615c0(uVar8);
                func_0x000107c615c0(uVar15);
                func_0x000107c6157c(lVar9);
                func_0x000107c6157c(uVar26);
                FUN_101b02fc0(uVar16,&UNK_10d9d0d90,puVar12,&UNK_1104434f0,PTR___sytN_11034f1b0 + 8,
                              &UNK_10d9d0dd0);
                func_0x000101b16f40(uVar16,0x112d453c8,&UNK_10d90ac60);
                func_0x000107c615c0(uVar16);
                uVar14 = uVar14 & 0xfffffffffffffff0;
                func_0x000107c615b8();
                (*pcVar31)();
                lVar24 = 0x112e009b0;
                func_0x0001000285a8(0x112e009b0,&UNK_10d9d0ce8);
                lVar9 = *(long *)(lVar24 + -8);
                lVar33 = *(long *)(lVar9 + 0x40);
                uVar16 = lVar33 + 0xfU & 0xfffffffffffffff0;
                func_0x000107c615b8();
                (**(code **)(lVar9 + 0x10))();
                uVar8 = (ulong)*(byte *)(lVar9 + 0x50);
                uVar15 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
                uVar17 = lVar33 + uVar15 + 7 & 0xfffffffffffffff8;
                puVar12 = &UNK_1104434c8;
                func_0x000107c613fc(&UNK_1104434c8,uVar17 + 0x10,uVar8 | 7);
                *(undefined8 *)(puVar12 + 0x10) = 0;
                *(undefined8 *)(puVar12 + 0x18) = 0;
                (**(code **)(lVar9 + 0x20))(puVar12 + uVar15,uVar16,lVar24);
                *(undefined **)(puVar12 + uVar17) = &UNK_10d9d0d48;
                *(undefined **)((long)(puVar12 + uVar17) + 8) = puVar13;
                func_0x000107c615c0(uVar16);
                func_0x000107c6157c(puVar13);
                FUN_101b02fc0(uVar14,&UNK_10d9d0da0,puVar12,&UNK_1104434f0,PTR___sytN_11034f1b0 + 8,
                              &UNK_10d9d0dd0);
                func_0x000101b16f40(uVar14,0x112d453c8,&UNK_10d90ac60);
                func_0x000107c615c0(uVar14);
                plVar10 = (long *)(ulong)*(uint *)(
                                                  PTR___sScG22awaitAllRemainingTasksyyYaFTu_11034fbe0
                                                  + 4);
                func_0x000107c615b8();
                *(long **)(unaff_x22 + 0x4a0) = plVar10;
                func_0x0001000285a8(0x112dc6b70,&UNK_10da1df30);
                *plVar10 = unaff_x22;
                plVar10[1] = 0x101b01b98;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)PTR___sScG22awaitAllRemainingTasksyyYaF_11034fbd8)();
                return;
              }
              uVar26 = *(undefined8 *)(unaff_x22 + 0x3d8);
              func_0x000101b15ef8(unaff_x22 + 0x110,unaff_x22 + 0x148);
              FUN_101b142fc();
              *(undefined8 *)(unaff_x22 + 0x440) = uVar26;
              func_0x000101b15ec4(unaff_x22 + 0x110);
              pcVar31 = FUN_101b0109c;
            }
            else {
              pcVar31 = FUN_101b00540;
            }
          }
          else {
            pcVar31 = (code *)0x101aff9bc;
          }
          goto LAB_107c615e0;
        }
        func_0x000107c61428(lVar24 + 0x10,unaff_x22 + 0x280,0,0);
        lVar24 = lVar24 + 0x10;
        func_0x000107c61648();
        *(long *)(unaff_x22 + 0x4a8) = lVar24;
        if (lVar24 != 0) {
          pcVar31 = FUN_101b01d08;
          goto LAB_107c615e0;
        }
        plVar10 = (long *)0x160;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x4b0) = plVar10;
        lVar24 = 0x101b01d6c;
      }
      *plVar10 = unaff_x22;
      plVar10[1] = lVar24;
      lVar24 = *(long *)(unaff_x22 + 0x358);
      plVar10[0x27] = *(long *)(unaff_x22 + 0x350);
      plVar10[0x28] = lVar24;
      pcVar31 = FUN_101b14848;
      lVar24 = 0;
    }
    else {
      pcVar31 = FUN_101afe6ec;
    }
  }
  else {
    pcVar31 = FUN_101afd5e0;
  }
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar31,lVar24,0);
  return;
}



/* Entry: 101afd5e0; end: 101afd633;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101afd5e0(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  
  puVar1 = (undefined8 *)(*(long *)(unaff_x22 + 0x3b0) + _DAT_112e001e0);
  *puVar1 = *(undefined8 *)(unaff_x22 + 0x3a8);
  *(undefined1 *)(puVar1 + 1) = 0;
  func_0x000107c61574();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101afd634,0,0);
  return;
}



/* Entry: 101afd634; end: 101afe6eb;  */

void FUN_101afd634(undefined8 param_1)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  byte *pbVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  code *pcVar23;
  code *pcVar24;
  ulong uVar25;
  double dVar26;
  undefined8 uVar27;
  long lVar28;
  long unaff_x22;
  long lVar29;
  undefined8 *puVar30;
  ulong uVar31;
  code *pcVar32;
  ulong uVar33;
  long lVar34;
  undefined8 uVar35;
  long lVar36;
  undefined8 uVar37;
  ulong uVar38;
  ulong uVar39;
  double dVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  
  lVar29 = *(long *)(unaff_x22 + 0x340);
  pcVar32 = *(code **)(unaff_x22 + 0x330);
  (*pcVar32)();
  *(undefined8 *)(unaff_x22 + 0x3b8) = param_1;
  func_0x000100083b20(unaff_x22 + 800);
  uVar27 = *(undefined8 *)(unaff_x22 + 800);
  FUN_101af9b5c(unaff_x22 + 0x110,uVar27);
  func_0x000107c615e8(uVar27);
  (*pcVar32)();
  *(undefined8 *)(unaff_x22 + 0x3c0) = param_1;
  func_0x000107c61428(lVar29 + 0x10,unaff_x22 + 0x220,0,0);
  lVar29 = lVar29 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0x3c8) = lVar29;
  if (lVar29 != 0) {
    pcVar32 = FUN_101afe6ec;
    goto LAB_107c615e0;
  }
  lVar29 = *(long *)(unaff_x22 + 0x118);
  *(undefined8 *)(unaff_x22 + 0x3d8) = *(undefined8 *)(unaff_x22 + 0x118);
  *(undefined8 *)(unaff_x22 + 0x3d0) = *(undefined8 *)(unaff_x22 + 0x110);
  *(undefined8 *)(unaff_x22 + 0x3e0) = *(undefined8 *)(unaff_x22 + 0x120);
  dVar26 = *(double *)(unaff_x22 + 0x128);
  *(double *)(unaff_x22 + 1000) = dVar26;
  cVar1 = *(char *)(unaff_x22 + 0x130);
  *(char *)(unaff_x22 + 0x141) = cVar1;
  if (lVar29 == 0) {
    lVar29 = *(long *)(unaff_x22 + 0x340);
    func_0x000107c61428(lVar29 + 0x10,unaff_x22 + 0x268,0,0);
    lVar29 = lVar29 + 0x10;
    func_0x000107c61648();
    *(long *)(unaff_x22 + 0x3f8) = lVar29;
    if (lVar29 != 0) {
      pcVar32 = FUN_101aff7dc;
      goto LAB_107c615e0;
    }
    plVar10 = (long *)0x160;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x400) = plVar10;
    lVar29 = 0x101aff840;
  }
  else if (lVar29 == 1) {
    lVar29 = *(long *)(unaff_x22 + 0x340);
    func_0x000107c61428(lVar29 + 0x10,unaff_x22 + 0x250,0,0);
    lVar29 = lVar29 + 0x10;
    func_0x000107c61648();
    *(long *)(unaff_x22 + 0x408) = lVar29;
    if (lVar29 != 0) {
      pcVar32 = (code *)0x101aff87c;
      goto LAB_107c615e0;
    }
    plVar10 = (long *)0x160;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x410) = plVar10;
    lVar29 = 0x101aff8e0;
  }
  else if (lVar29 == 2) {
    lVar29 = *(long *)(unaff_x22 + 0x340);
    func_0x000107c61428(lVar29 + 0x10,unaff_x22 + 0x238,0,0);
    lVar29 = lVar29 + 0x10;
    func_0x000107c61648();
    *(long *)(unaff_x22 + 0x418) = lVar29;
    if (lVar29 != 0) {
      pcVar32 = (code *)0x101aff91c;
      goto LAB_107c615e0;
    }
    plVar10 = (long *)0x160;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x420) = plVar10;
    lVar29 = 0x101aff980;
  }
  else {
    dVar40 = *(double *)(unaff_x22 + 0x131);
    *(undefined8 *)(unaff_x22 + 0x318) = *(undefined8 *)(unaff_x22 + 0x139);
    *(double *)(unaff_x22 + 0x310) = dVar40;
    lVar29 = 0x112e009d8;
    func_0x0001000285a8(0x112e009d8,&UNK_10d9d0d38);
    uVar16 = *(long *)(*(long *)(lVar29 + -8) + 0x40) + 0xf;
    uVar8 = uVar16 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    *(ulong *)(unaff_x22 + 0x3f0) = uVar8;
    lVar34 = (long)*(int *)(lVar29 + 0x30);
    *(int *)(unaff_x22 + 0x144) = *(int *)(lVar29 + 0x30);
    if (cVar1 == '\x01') {
      lVar9 = 0;
      func_0x000107c5eea4();
      (**(code **)(*(long *)(lVar9 + -8) + 0x38))(uVar8 + lVar34,1,1,lVar9);
      bVar6 = true;
    }
    else {
      uVar27 = *(undefined8 *)(unaff_x22 + 0x368);
      lVar18 = 0;
      func_0x000107c5eea4();
      lVar19 = *(long *)(lVar18 + -8);
      uVar14 = *(long *)(lVar19 + 0x40) + 0xf;
      uVar25 = uVar14 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      func_0x000107c40ef8(uVar27);
      func_0x000107c61180();
      func_0x000107c5ee94(uVar25);
      func_0x000107c61170(uVar27);
      uVar14 = uVar14 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      lVar9 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      uVar15 = *(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xf;
      uVar31 = uVar15 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      FUN_101b1e898(uVar31);
      uVar33 = uVar15 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      func_0x0001003a4c00(uVar31,uVar33);
      pcVar32 = *(code **)(lVar19 + 0x30);
      uVar17 = uVar33;
      (*pcVar32)(uVar33,1,lVar18);
      if ((int)uVar17 == 1) {
        uVar15 = uVar15 & 0xfffffffffffffff0;
        func_0x000107c615b8(uVar15);
        pcVar23 = *(code **)(lVar19 + 0x10);
        (*pcVar23)();
        (**(code **)(lVar19 + 0x38))(uVar15,0,1,lVar18);
        FUN_101b1e9dc(uVar15);
        func_0x000107c615c0(uVar15);
        (*pcVar23)(uVar14,uVar25,lVar18);
        uVar15 = uVar33;
        (*pcVar32)(uVar33,1,lVar18);
        if ((int)uVar15 != 1) {
          func_0x000101b16f40(uVar33,0x112d373d8,&UNK_10d9014c0);
        }
      }
      else {
        (**(code **)(lVar19 + 0x20))(uVar14,uVar33,lVar18);
      }
      func_0x000107c615c0(uVar33);
      func_0x000107c615c0(uVar31);
      func_0x000107c5ee68(uVar14);
      (**(code **)(lVar19 + 8))(uVar25,lVar18);
      if (0.0 <= dVar40) {
        bVar6 = dVar40 < dVar26;
        (**(code **)(lVar19 + 0x20))(uVar8 + lVar34,uVar14,lVar18);
        (**(code **)(lVar19 + 0x38))(uVar8 + lVar34,0,1,lVar18);
        func_0x000107c615c0(uVar14);
        func_0x000107c615c0(uVar25);
      }
      else {
        (**(code **)(lVar19 + 0x20))(uVar8 + lVar34,uVar14,lVar18);
        (**(code **)(lVar19 + 0x38))(uVar8 + lVar34,0,1,lVar18);
        func_0x000107c615c0(uVar14);
        func_0x000107c615c0(uVar25);
        bVar6 = false;
      }
    }
    *(bool *)uVar8 = bVar6;
    pbVar11 = (byte *)(uVar16 & 0xfffffffffffffff0);
    func_0x000107c615b8();
    FUN_101b16ef8(uVar8,pbVar11,0x112e009d8,&UNK_10d9d0d38);
    bVar2 = *pbVar11;
    func_0x000101b16f40(pbVar11 + *(int *)(lVar29 + 0x30),0x112d373d8,&UNK_10d9014c0);
    func_0x000107c615c0(pbVar11);
    lVar29 = *(long *)(unaff_x22 + 0x340);
    if ((bVar2 & 1) != 0) {
      func_0x000107c61428(lVar29 + 0x10,unaff_x22 + 0x298,0,0);
      lVar29 = lVar29 + 0x10;
      func_0x000107c61648();
      *(long *)(unaff_x22 + 0x428) = lVar29;
      if (lVar29 == 0) {
        lVar29 = *(long *)(unaff_x22 + 0x340);
        func_0x000107c61428(lVar29 + 0x10,unaff_x22 + 0x2b0,0,0);
        lVar29 = lVar29 + 0x10;
        func_0x000107c61648();
        *(long *)(unaff_x22 + 0x430) = lVar29;
        if (lVar29 == 0) {
          lVar29 = *(long *)(unaff_x22 + 0x340);
          func_0x000107c61428(lVar29 + 0x10,unaff_x22 + 0x2e0,0,0);
          lVar29 = lVar29 + 0x10;
          func_0x000107c61648();
          *(long *)(unaff_x22 + 0x438) = lVar29;
          if (lVar29 == 0) {
            dVar26 = (double)(long)((*(double *)(unaff_x22 + 0x3c0) - *(double *)(unaff_x22 + 0x3b8)
                                    ) * 1000.0);
            if (0x7fefffffffffffff < (ulong)ABS(dVar26)) {
                    /* WARNING: Does not return */
              pcVar32 = (code *)SoftwareBreakpoint(1,0x101afe6e4);
              (*pcVar32)();
            }
            if (dVar26 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
              pcVar32 = (code *)SoftwareBreakpoint(1,0x101afe6e8);
              (*pcVar32)();
            }
            if (9.223372036854776e+18 <= dVar26) {
                    /* WARNING: Does not return */
              pcVar32 = (code *)SoftwareBreakpoint(1,0x101afe6ec);
              (*pcVar32)();
            }
            uVar3 = *(undefined1 *)(unaff_x22 + 0x141);
            uVar27 = *(undefined8 *)(unaff_x22 + 1000);
            uVar41 = *(undefined8 *)(unaff_x22 + 0x3e0);
            uVar35 = *(undefined8 *)(unaff_x22 + 0x3d8);
            uVar37 = *(undefined8 *)(unaff_x22 + 0x3d0);
            uVar44 = *(undefined8 *)(unaff_x22 + 0x3a8);
            puVar30 = *(undefined8 **)(unaff_x22 + 0x380);
            uVar47 = *(undefined8 *)(unaff_x22 + 0x370);
            lVar29 = *(long *)(unaff_x22 + 0x340);
            puVar12 = &UNK_1104433d8;
            func_0x000107c613fc(&UNK_1104433d8,0x18,7);
            *(undefined **)(unaff_x22 + 0x448) = puVar12;
            func_0x000107c61428(lVar29 + 0x10,unaff_x22 + 0x2f8,0,0);
            lVar29 = lVar29 + 0x10;
            func_0x000107c61648(lVar29);
            func_0x000107c61644(puVar12 + 0x10,lVar29);
            func_0x000107c61574(lVar29);
            puVar13 = &UNK_110443450;
            func_0x000107c613fc(&UNK_110443450,0x68,7);
            *(undefined **)(unaff_x22 + 0x450) = puVar13;
            *(undefined **)(puVar13 + 0x10) = puVar12;
            *(undefined8 *)(puVar13 + 0x18) = uVar37;
            *(undefined8 *)(puVar13 + 0x20) = uVar35;
            *(undefined8 *)(puVar13 + 0x28) = uVar41;
            *(undefined8 *)(puVar13 + 0x30) = uVar27;
            puVar13[0x38] = uVar3;
            uVar27 = *(undefined8 *)(unaff_x22 + 0x310);
            *(undefined8 *)(puVar13 + 0x41) = *(undefined8 *)(unaff_x22 + 0x318);
            *(undefined8 *)(puVar13 + 0x39) = uVar27;
            *(undefined8 *)(puVar13 + 0x50) = uVar47;
            *(undefined8 *)(puVar13 + 0x58) = uVar44;
            *(long *)(puVar13 + 0x60) = (long)dVar26;
            func_0x0001000a8868(puVar30,puVar30[3]);
            uVar35 = *puVar30;
            uVar27 = 0;
            func_0x000100b68ba4();
            *(undefined8 *)(unaff_x22 + 0x1d0) = uVar27;
            *(undefined ***)(unaff_x22 + 0x1d8) = &PTR_DAT_110442ef8;
            *(undefined8 *)(unaff_x22 + 0x1b8) = uVar35;
            func_0x000101b15ef8(unaff_x22 + 0x110,unaff_x22 + 0x180);
            func_0x000107c6157c(puVar12);
            func_0x000107c6157c(uVar35);
            lVar29 = 0x112e009e0;
            func_0x0001000285a8(0x112e009e0,&UNK_10d9d0d50);
            *(long *)(unaff_x22 + 0x458) = lVar29;
            lVar18 = *(long *)(lVar29 + -8);
            *(long *)(unaff_x22 + 0x460) = lVar18;
            lVar19 = *(long *)(lVar18 + 0x40);
            uVar16 = lVar19 + 0xf;
            uVar14 = uVar16 & 0xfffffffffffffff0;
            func_0x000107c615b8();
            *(ulong *)(unaff_x22 + 0x468) = uVar14;
            lVar34 = 0x112e009e8;
            func_0x0001000285a8(0x112e009e8,&UNK_10d9d5e80);
            *(long *)(unaff_x22 + 0x470) = lVar34;
            lVar20 = *(long *)(lVar34 + -8);
            *(long *)(unaff_x22 + 0x478) = lVar20;
            lVar21 = *(long *)(lVar20 + 0x40);
            uVar8 = lVar21 + 0xf;
            uVar15 = uVar8 & 0xfffffffffffffff0;
            func_0x000107c615b8();
            *(ulong *)(unaff_x22 + 0x480) = uVar15;
            lVar9 = 0x112e009f0;
            func_0x0001000285a8(0x112e009f0,&UNK_10d9d0d60);
            lVar28 = *(long *)(lVar9 + -8);
            puVar30 = (undefined8 *)(*(long *)(lVar28 + 0x40) + 0xfU & 0xfffffffffffffff0);
            func_0x000107c615b8();
            *puVar30 = 1;
            (**(code **)(lVar28 + 0x68))();
            iVar7 = 2;
            func_0x000100029b9c(2,0x11,0,0);
            if (iVar7 == 0) {
              func_0x000101b0eb4c(uVar14,uVar15,puVar30);
            }
            else {
              func_0x000107c5fd10(uVar14,uVar15,PTR___sytN_11034f1b0 + 8,puVar30,
                                  PTR___sytN_11034f1b0 + 8);
            }
            uVar42 = *(undefined8 *)(unaff_x22 + 0x3e0);
            uVar41 = *(undefined8 *)(unaff_x22 + 0x3a0);
            uVar45 = *(undefined8 *)(unaff_x22 + 0x388);
            uVar27 = *(undefined8 *)(unaff_x22 + 0x378);
            uVar35 = *(undefined8 *)(unaff_x22 + 0x358);
            uVar37 = *(undefined8 *)(unaff_x22 + 0x350);
            uVar46 = *(undefined8 *)(unaff_x22 + 0x398);
            uVar43 = *(undefined8 *)(unaff_x22 + 0x390);
            uVar47 = *(undefined8 *)(unaff_x22 + 0x338);
            uVar44 = *(undefined8 *)(unaff_x22 + 0x330);
            (**(code **)(lVar28 + 8))(puVar30,lVar9);
            func_0x000107c615c0(puVar30);
            lVar9 = 0;
            FUN_101b14550();
            func_0x000107c613fc();
            *(long *)(unaff_x22 + 0x488) = lVar9;
            puVar12 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
            func_0x000107c610f8();
            func_0x000107c453e4();
            *(undefined **)(lVar9 + 0x10) = puVar12;
            *(undefined1 *)(lVar9 + 0x18) = 0;
            *(undefined8 *)(lVar9 + 0x20) = 0;
            lVar28 = 0x90;
            func_0x000107c615b8();
            *(long *)(unaff_x22 + 0x490) = lVar28;
            *(undefined8 *)(lVar28 + 0x10) = uVar41;
            *(ulong *)(lVar28 + 0x18) = uVar14;
            *(long *)(lVar28 + 0x20) = lVar9;
            *(long *)(lVar28 + 0x28) = unaff_x22 + 0x1b8;
            *(undefined8 *)(lVar28 + 0x30) = uVar45;
            *(undefined8 *)(lVar28 + 0x38) = uVar42;
            *(undefined8 *)(lVar28 + 0x48) = uVar46;
            *(undefined8 *)(lVar28 + 0x40) = uVar43;
            *(undefined8 *)(lVar28 + 0x58) = uVar47;
            *(undefined8 *)(lVar28 + 0x50) = uVar44;
            *(undefined8 *)(lVar28 + 0x60) = uVar27;
            *(undefined8 *)(lVar28 + 0x68) = uVar35;
            *(ulong *)(lVar28 + 0x70) = uVar15;
            *(undefined8 *)(lVar28 + 0x78) = uVar37;
            *(undefined **)(lVar28 + 0x80) = &UNK_10d9d0d48;
            *(undefined **)(lVar28 + 0x88) = puVar13;
            iVar7 = 2;
            func_0x000100029b9c(2,0x12,0,0);
            if (iVar7 != 0) {
              plVar10 = (long *)(ulong)*(uint *)(
                                                PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lFTu_11034ff68
                                                + 4);
              func_0x000107c615b8();
              *(long **)(unaff_x22 + 0x498) = plVar10;
              *plVar10 = unaff_x22;
              plVar10[1] = (long)FUN_101b01b48;
                    /* WARNING: Could not recover jumptable at 0x00010bdb929c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)
                PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lF_11034ff60
              )();
              return;
            }
            uVar43 = *(undefined8 *)(unaff_x22 + 0x3e0);
            uVar41 = *(undefined8 *)(unaff_x22 + 0x3a0);
            uVar46 = *(undefined8 *)(unaff_x22 + 0x388);
            uVar27 = *(undefined8 *)(unaff_x22 + 0x338);
            uVar35 = *(undefined8 *)(unaff_x22 + 0x330);
            uVar37 = *(undefined8 *)(unaff_x22 + 0x398);
            uVar47 = *(undefined8 *)(unaff_x22 + 0x398);
            uVar44 = *(undefined8 *)(unaff_x22 + 0x390);
            func_0x000107c615ac(unaff_x22 + 0x10,PTR___sytN_11034f1b0 + 8);
            *(long *)(unaff_x22 + 0x328) = unaff_x22 + 0x10;
            lVar28 = 0x112d453c8;
            func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
            uVar14 = *(long *)(*(long *)(lVar28 + -8) + 0x40) + 0xf;
            uVar15 = uVar14 & 0xfffffffffffffff0;
            func_0x000107c615b8();
            lVar28 = 0;
            func_0x000107c5fd0c();
            pcVar32 = *(code **)(*(long *)(lVar28 + -8) + 0x38);
            (*pcVar32)(uVar15,1,1,lVar28);
            uVar16 = uVar16 & 0xfffffffffffffff0;
            func_0x000107c615b8();
            (**(code **)(lVar18 + 0x10))();
            func_0x000100b6a0c4(unaff_x22 + 0x1b8,unaff_x22 + 0x1e0);
            lVar28 = 0x112e001b0;
            func_0x0001000285a8(0x112e001b0,&UNK_10d9d0938);
            lVar36 = *(long *)(lVar28 + -8);
            lVar22 = *(long *)(lVar36 + 0x40);
            uVar17 = lVar22 + 0xfU & 0xfffffffffffffff0;
            func_0x000107c615b8();
            pcVar23 = *(code **)(lVar36 + 0x10);
            (*pcVar23)();
            bVar2 = *(byte *)(lVar18 + 0x50);
            uVar31 = (ulong)bVar2 + 0x28 & ((ulong)bVar2 ^ 0xffffffffffffffff);
            uVar39 = lVar19 + uVar31 + 7 & 0xfffffffffffffff8;
            bVar4 = *(byte *)(lVar36 + 0x50);
            uVar25 = (ulong)bVar4;
            uVar33 = uVar39 + 0x50 + uVar25 + 0x10 & (uVar25 ^ 0xffffffffffffffff);
            puVar12 = &UNK_110443478;
            func_0x000107c613fc(&UNK_110443478,uVar33 + lVar22,bVar4 | bVar2 | 7);
            *(undefined8 *)(puVar12 + 0x10) = 0;
            *(undefined8 *)(puVar12 + 0x18) = 0;
            *(undefined8 *)(puVar12 + 0x20) = uVar41;
            (**(code **)(lVar18 + 0x20))(puVar12 + uVar31,uVar16,lVar29);
            *(long *)(puVar12 + uVar39) = lVar9;
            func_0x000100b69c8c(unaff_x22 + 0x1e0,puVar12 + uVar39 + 8);
            *(undefined8 *)(puVar12 + uVar39 + 0x30) = uVar46;
            *(undefined8 *)(puVar12 + uVar39 + 0x38) = uVar43;
            *(undefined8 *)((long)(puVar12 + uVar39 + 0x40) + 8) = uVar47;
            *(undefined8 *)(puVar12 + uVar39 + 0x40) = uVar44;
            *(undefined8 *)(puVar12 + uVar39 + 0x50) = uVar35;
            *(undefined8 *)((long)(puVar12 + uVar39 + 0x50) + 8) = uVar27;
            pcVar24 = *(code **)(lVar36 + 0x20);
            (*pcVar24)(puVar12 + uVar33,uVar17,lVar28);
            func_0x000107c615c0(uVar17);
            func_0x000107c615c0(uVar16);
            func_0x000107c6157c(lVar9);
            func_0x000107c6157c(uVar37);
            func_0x000107c6157c(uVar27);
            FUN_101b02fc0(uVar15,&UNK_10d9d0d80,puVar12,&UNK_1104434f0,PTR___sytN_11034f1b0 + 8,
                          &UNK_10d9d0dd0);
            func_0x000101b16f40(uVar15,0x112d453c8,&UNK_10d90ac60);
            func_0x000107c615c0(uVar15);
            uVar16 = uVar14 & 0xfffffffffffffff0;
            func_0x000107c615b8();
            (*pcVar32)();
            lVar29 = 0x112e009c0;
            func_0x0001000285a8(0x112e009c0,&UNK_10d9d0cf8);
            lVar19 = *(long *)(lVar29 + -8);
            lVar18 = *(long *)(lVar19 + 0x40);
            uVar15 = lVar18 + 0xfU & 0xfffffffffffffff0;
            func_0x000107c615b8();
            (**(code **)(lVar19 + 0x10))();
            uVar8 = uVar8 & 0xfffffffffffffff0;
            func_0x000107c615b8();
            (**(code **)(lVar20 + 0x10))();
            uVar17 = lVar22 + 0xfU & 0xfffffffffffffff0;
            func_0x000107c615b8();
            (*pcVar23)();
            bVar2 = *(byte *)(lVar19 + 0x50);
            uVar39 = (ulong)bVar2 + 0x28 & ((ulong)bVar2 ^ 0xffffffffffffffff);
            uVar31 = lVar18 + uVar39 + 7 & 0xfffffffffffffff8;
            bVar5 = *(byte *)(lVar20 + 0x50);
            uVar38 = bVar5 + uVar31 + 8 & ((ulong)bVar5 ^ 0xffffffffffffffff);
            uVar33 = lVar21 + uVar38 + 7 & 0xfffffffffffffff8;
            uVar25 = uVar33 + uVar25 + 0x10 & (uVar25 ^ 0xffffffffffffffff);
            puVar12 = &UNK_1104434a0;
            func_0x000107c613fc(&UNK_1104434a0,uVar25 + lVar22,bVar4 | bVar2 | bVar5 | 7);
            *(undefined8 *)(puVar12 + 0x10) = 0;
            *(undefined8 *)(puVar12 + 0x18) = 0;
            *(undefined8 *)(puVar12 + 0x20) = uVar41;
            (**(code **)(lVar19 + 0x20))(puVar12 + uVar39,uVar15,lVar29);
            *(long *)(puVar12 + uVar31) = lVar9;
            (**(code **)(lVar20 + 0x20))(puVar12 + uVar38,uVar8,lVar34);
            *(undefined8 *)(puVar12 + uVar33) = uVar35;
            *(undefined8 *)((long)(puVar12 + uVar33) + 8) = uVar27;
            (*pcVar24)(puVar12 + uVar25,uVar17,lVar28);
            func_0x000107c615c0(uVar17);
            func_0x000107c615c0(uVar8);
            func_0x000107c615c0(uVar15);
            func_0x000107c6157c(lVar9);
            func_0x000107c6157c(uVar27);
            FUN_101b02fc0(uVar16,&UNK_10d9d0d90,puVar12,&UNK_1104434f0,PTR___sytN_11034f1b0 + 8,
                          &UNK_10d9d0dd0);
            func_0x000101b16f40(uVar16,0x112d453c8,&UNK_10d90ac60);
            func_0x000107c615c0(uVar16);
            uVar14 = uVar14 & 0xfffffffffffffff0;
            func_0x000107c615b8();
            (*pcVar32)();
            lVar29 = 0x112e009b0;
            func_0x0001000285a8(0x112e009b0,&UNK_10d9d0ce8);
            lVar9 = *(long *)(lVar29 + -8);
            lVar34 = *(long *)(lVar9 + 0x40);
            uVar16 = lVar34 + 0xfU & 0xfffffffffffffff0;
            func_0x000107c615b8();
            (**(code **)(lVar9 + 0x10))();
            uVar8 = (ulong)*(byte *)(lVar9 + 0x50);
            uVar15 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
            uVar17 = lVar34 + uVar15 + 7 & 0xfffffffffffffff8;
            puVar12 = &UNK_1104434c8;
            func_0x000107c613fc(&UNK_1104434c8,uVar17 + 0x10,uVar8 | 7);
            *(undefined8 *)(puVar12 + 0x10) = 0;
            *(undefined8 *)(puVar12 + 0x18) = 0;
            (**(code **)(lVar9 + 0x20))(puVar12 + uVar15,uVar16,lVar29);
            *(undefined **)(puVar12 + uVar17) = &UNK_10d9d0d48;
            *(undefined **)((long)(puVar12 + uVar17) + 8) = puVar13;
            func_0x000107c615c0(uVar16);
            func_0x000107c6157c(puVar13);
            FUN_101b02fc0(uVar14,&UNK_10d9d0da0,puVar12,&UNK_1104434f0,PTR___sytN_11034f1b0 + 8,
                          &UNK_10d9d0dd0);
            func_0x000101b16f40(uVar14,0x112d453c8,&UNK_10d90ac60);
            func_0x000107c615c0(uVar14);
            plVar10 = (long *)(ulong)*(uint *)(PTR___sScG22awaitAllRemainingTasksyyYaFTu_11034fbe0 +
                                              4);
            func_0x000107c615b8();
            *(long **)(unaff_x22 + 0x4a0) = plVar10;
            func_0x0001000285a8(0x112dc6b70,&UNK_10da1df30);
            *plVar10 = unaff_x22;
            plVar10[1] = 0x101b01b98;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR___sScG22awaitAllRemainingTasksyyYaF_11034fbd8)();
            return;
          }
          uVar27 = *(undefined8 *)(unaff_x22 + 0x3d8);
          func_0x000101b15ef8(unaff_x22 + 0x110,unaff_x22 + 0x148);
          FUN_101b142fc();
          *(undefined8 *)(unaff_x22 + 0x440) = uVar27;
          func_0x000101b15ec4(unaff_x22 + 0x110);
          pcVar32 = FUN_101b0109c;
        }
        else {
          pcVar32 = FUN_101b00540;
        }
      }
      else {
        pcVar32 = (code *)0x101aff9bc;
      }
      goto LAB_107c615e0;
    }
    func_0x000107c61428(lVar29 + 0x10,unaff_x22 + 0x280,0,0);
    lVar29 = lVar29 + 0x10;
    func_0x000107c61648();
    *(long *)(unaff_x22 + 0x4a8) = lVar29;
    if (lVar29 != 0) {
      pcVar32 = FUN_101b01d08;
      goto LAB_107c615e0;
    }
    plVar10 = (long *)0x160;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x4b0) = plVar10;
    lVar29 = 0x101b01d6c;
  }
  *plVar10 = unaff_x22;
  plVar10[1] = lVar29;
  lVar29 = *(long *)(unaff_x22 + 0x358);
  plVar10[0x27] = *(long *)(unaff_x22 + 0x350);
  plVar10[0x28] = lVar29;
  pcVar32 = FUN_101b14848;
  lVar29 = 0;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar32,lVar29,0);
  return;
}



/* Entry: 101afe6ec; end: 101afe7a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101afe6ec(void)

{
  long lVar1;
  code *pcVar2;
  long unaff_x22;
  double dVar3;
  
  dVar3 = (double)(long)((*(double *)(unaff_x22 + 0x3c0) - *(double *)(unaff_x22 + 0x3b8)) * 1000.0)
  ;
  if (0x7fefffffffffffff < (ulong)ABS(dVar3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101afe79c);
    (*pcVar2)();
  }
  if (-9.223372036854778e+18 < dVar3) {
    if (dVar3 < 9.223372036854776e+18) {
      lVar1 = *(long *)(unaff_x22 + 0x3c8) + _DAT_112e001e0;
      *(long *)(lVar1 + 0x10) = (long)dVar3;
      *(undefined1 *)(lVar1 + 0x18) = 0;
      func_0x000107c61574();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_101afe7a4,0,0);
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101afe7a4);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101afe7a0);
  (*pcVar2)();
}



/* Entry: 101afe7a4; end: 101aff7db;  */

void FUN_101afe7a4(void)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  byte *pbVar11;
  code *pcVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  code *pcVar23;
  code *pcVar24;
  ulong uVar25;
  double dVar26;
  undefined8 uVar27;
  long lVar28;
  long unaff_x22;
  undefined8 *puVar29;
  long lVar30;
  ulong uVar31;
  ulong uVar32;
  long lVar33;
  undefined8 uVar34;
  long lVar35;
  long lVar36;
  undefined8 uVar37;
  ulong uVar38;
  ulong uVar39;
  double dVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  
  lVar19 = *(long *)(unaff_x22 + 0x118);
  *(undefined8 *)(unaff_x22 + 0x3d8) = *(undefined8 *)(unaff_x22 + 0x118);
  *(undefined8 *)(unaff_x22 + 0x3d0) = *(undefined8 *)(unaff_x22 + 0x110);
  *(undefined8 *)(unaff_x22 + 0x3e0) = *(undefined8 *)(unaff_x22 + 0x120);
  dVar26 = *(double *)(unaff_x22 + 0x128);
  *(double *)(unaff_x22 + 1000) = dVar26;
  cVar1 = *(char *)(unaff_x22 + 0x130);
  *(char *)(unaff_x22 + 0x141) = cVar1;
  if (lVar19 == 0) {
    lVar19 = *(long *)(unaff_x22 + 0x340);
    func_0x000107c61428(lVar19 + 0x10,unaff_x22 + 0x268,0,0);
    lVar19 = lVar19 + 0x10;
    func_0x000107c61648();
    *(long *)(unaff_x22 + 0x3f8) = lVar19;
    if (lVar19 != 0) {
      pcVar12 = FUN_101aff7dc;
      goto LAB_107c615e0;
    }
    plVar10 = (long *)0x160;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x400) = plVar10;
    lVar19 = 0x101aff840;
  }
  else if (lVar19 == 1) {
    lVar19 = *(long *)(unaff_x22 + 0x340);
    func_0x000107c61428(lVar19 + 0x10,unaff_x22 + 0x250,0,0);
    lVar19 = lVar19 + 0x10;
    func_0x000107c61648();
    *(long *)(unaff_x22 + 0x408) = lVar19;
    if (lVar19 != 0) {
      pcVar12 = (code *)0x101aff87c;
      goto LAB_107c615e0;
    }
    plVar10 = (long *)0x160;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x410) = plVar10;
    lVar19 = 0x101aff8e0;
  }
  else if (lVar19 == 2) {
    lVar19 = *(long *)(unaff_x22 + 0x340);
    func_0x000107c61428(lVar19 + 0x10,unaff_x22 + 0x238,0,0);
    lVar19 = lVar19 + 0x10;
    func_0x000107c61648();
    *(long *)(unaff_x22 + 0x418) = lVar19;
    if (lVar19 != 0) {
      pcVar12 = (code *)0x101aff91c;
      goto LAB_107c615e0;
    }
    plVar10 = (long *)0x160;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x420) = plVar10;
    lVar19 = 0x101aff980;
  }
  else {
    dVar40 = *(double *)(unaff_x22 + 0x131);
    *(undefined8 *)(unaff_x22 + 0x318) = *(undefined8 *)(unaff_x22 + 0x139);
    *(double *)(unaff_x22 + 0x310) = dVar40;
    lVar19 = 0x112e009d8;
    func_0x0001000285a8(0x112e009d8,&UNK_10d9d0d38);
    uVar17 = *(long *)(*(long *)(lVar19 + -8) + 0x40) + 0xf;
    uVar8 = uVar17 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    *(ulong *)(unaff_x22 + 0x3f0) = uVar8;
    lVar33 = (long)*(int *)(lVar19 + 0x30);
    *(int *)(unaff_x22 + 0x144) = *(int *)(lVar19 + 0x30);
    if (cVar1 == '\x01') {
      lVar9 = 0;
      func_0x000107c5eea4();
      (**(code **)(*(long *)(lVar9 + -8) + 0x38))(uVar8 + lVar33,1,1,lVar9);
      bVar6 = true;
    }
    else {
      uVar27 = *(undefined8 *)(unaff_x22 + 0x368);
      lVar20 = 0;
      func_0x000107c5eea4();
      lVar21 = *(long *)(lVar20 + -8);
      uVar15 = *(long *)(lVar21 + 0x40) + 0xf;
      uVar25 = uVar15 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      func_0x000107c40ef8(uVar27);
      func_0x000107c61180();
      func_0x000107c5ee94(uVar25);
      func_0x000107c61170(uVar27);
      uVar15 = uVar15 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      lVar9 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      uVar16 = *(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xf;
      uVar31 = uVar16 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      FUN_101b1e898(uVar31);
      uVar32 = uVar16 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      func_0x0001003a4c00(uVar31,uVar32);
      pcVar12 = *(code **)(lVar21 + 0x30);
      uVar18 = uVar32;
      (*pcVar12)(uVar32,1,lVar20);
      if ((int)uVar18 == 1) {
        uVar16 = uVar16 & 0xfffffffffffffff0;
        func_0x000107c615b8(uVar16);
        pcVar23 = *(code **)(lVar21 + 0x10);
        (*pcVar23)();
        (**(code **)(lVar21 + 0x38))(uVar16,0,1,lVar20);
        FUN_101b1e9dc(uVar16);
        func_0x000107c615c0(uVar16);
        (*pcVar23)(uVar15,uVar25,lVar20);
        uVar16 = uVar32;
        (*pcVar12)(uVar32,1,lVar20);
        if ((int)uVar16 != 1) {
          func_0x000101b16f40(uVar32,0x112d373d8,&UNK_10d9014c0);
        }
      }
      else {
        (**(code **)(lVar21 + 0x20))(uVar15,uVar32,lVar20);
      }
      func_0x000107c615c0(uVar32);
      func_0x000107c615c0(uVar31);
      func_0x000107c5ee68(uVar15);
      (**(code **)(lVar21 + 8))(uVar25,lVar20);
      if (0.0 <= dVar40) {
        bVar6 = dVar40 < dVar26;
        (**(code **)(lVar21 + 0x20))(uVar8 + lVar33,uVar15,lVar20);
        (**(code **)(lVar21 + 0x38))(uVar8 + lVar33,0,1,lVar20);
        func_0x000107c615c0(uVar15);
        func_0x000107c615c0(uVar25);
      }
      else {
        (**(code **)(lVar21 + 0x20))(uVar8 + lVar33,uVar15,lVar20);
        (**(code **)(lVar21 + 0x38))(uVar8 + lVar33,0,1,lVar20);
        func_0x000107c615c0(uVar15);
        func_0x000107c615c0(uVar25);
        bVar6 = false;
      }
    }
    *(bool *)uVar8 = bVar6;
    pbVar11 = (byte *)(uVar17 & 0xfffffffffffffff0);
    func_0x000107c615b8();
    FUN_101b16ef8(uVar8,pbVar11,0x112e009d8,&UNK_10d9d0d38);
    bVar2 = *pbVar11;
    func_0x000101b16f40(pbVar11 + *(int *)(lVar19 + 0x30),0x112d373d8,&UNK_10d9014c0);
    func_0x000107c615c0(pbVar11);
    lVar19 = *(long *)(unaff_x22 + 0x340);
    if ((bVar2 & 1) != 0) {
      func_0x000107c61428(lVar19 + 0x10,unaff_x22 + 0x298,0,0);
      lVar19 = lVar19 + 0x10;
      func_0x000107c61648();
      *(long *)(unaff_x22 + 0x428) = lVar19;
      if (lVar19 == 0) {
        lVar19 = *(long *)(unaff_x22 + 0x340);
        func_0x000107c61428(lVar19 + 0x10,unaff_x22 + 0x2b0,0,0);
        lVar19 = lVar19 + 0x10;
        func_0x000107c61648();
        *(long *)(unaff_x22 + 0x430) = lVar19;
        if (lVar19 == 0) {
          lVar19 = *(long *)(unaff_x22 + 0x340);
          func_0x000107c61428(lVar19 + 0x10,unaff_x22 + 0x2e0,0,0);
          lVar19 = lVar19 + 0x10;
          func_0x000107c61648();
          *(long *)(unaff_x22 + 0x438) = lVar19;
          if (lVar19 == 0) {
            dVar26 = (double)(long)((*(double *)(unaff_x22 + 0x3c0) - *(double *)(unaff_x22 + 0x3b8)
                                    ) * 1000.0);
            if (0x7fefffffffffffff < (ulong)ABS(dVar26)) {
                    /* WARNING: Does not return */
              pcVar12 = (code *)SoftwareBreakpoint(1,0x101aff7d4);
              (*pcVar12)();
            }
            if (dVar26 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
              pcVar12 = (code *)SoftwareBreakpoint(1,0x101aff7d8);
              (*pcVar12)();
            }
            if (9.223372036854776e+18 <= dVar26) {
                    /* WARNING: Does not return */
              pcVar12 = (code *)SoftwareBreakpoint(1,0x101aff7dc);
              (*pcVar12)();
            }
            uVar3 = *(undefined1 *)(unaff_x22 + 0x141);
            uVar27 = *(undefined8 *)(unaff_x22 + 1000);
            uVar41 = *(undefined8 *)(unaff_x22 + 0x3e0);
            uVar34 = *(undefined8 *)(unaff_x22 + 0x3d8);
            uVar37 = *(undefined8 *)(unaff_x22 + 0x3d0);
            uVar44 = *(undefined8 *)(unaff_x22 + 0x3a8);
            puVar29 = *(undefined8 **)(unaff_x22 + 0x380);
            uVar47 = *(undefined8 *)(unaff_x22 + 0x370);
            lVar19 = *(long *)(unaff_x22 + 0x340);
            puVar13 = &UNK_1104433d8;
            func_0x000107c613fc(&UNK_1104433d8,0x18,7);
            *(undefined **)(unaff_x22 + 0x448) = puVar13;
            func_0x000107c61428(lVar19 + 0x10,unaff_x22 + 0x2f8,0,0);
            lVar19 = lVar19 + 0x10;
            func_0x000107c61648(lVar19);
            func_0x000107c61644(puVar13 + 0x10,lVar19);
            func_0x000107c61574(lVar19);
            puVar14 = &UNK_110443450;
            func_0x000107c613fc(&UNK_110443450,0x68,7);
            *(undefined **)(unaff_x22 + 0x450) = puVar14;
            *(undefined **)(puVar14 + 0x10) = puVar13;
            *(undefined8 *)(puVar14 + 0x18) = uVar37;
            *(undefined8 *)(puVar14 + 0x20) = uVar34;
            *(undefined8 *)(puVar14 + 0x28) = uVar41;
            *(undefined8 *)(puVar14 + 0x30) = uVar27;
            puVar14[0x38] = uVar3;
            uVar27 = *(undefined8 *)(unaff_x22 + 0x310);
            *(undefined8 *)(puVar14 + 0x41) = *(undefined8 *)(unaff_x22 + 0x318);
            *(undefined8 *)(puVar14 + 0x39) = uVar27;
            *(undefined8 *)(puVar14 + 0x50) = uVar47;
            *(undefined8 *)(puVar14 + 0x58) = uVar44;
            *(long *)(puVar14 + 0x60) = (long)dVar26;
            func_0x0001000a8868(puVar29,puVar29[3]);
            uVar34 = *puVar29;
            uVar27 = 0;
            func_0x000100b68ba4();
            *(undefined8 *)(unaff_x22 + 0x1d0) = uVar27;
            *(undefined ***)(unaff_x22 + 0x1d8) = &PTR_DAT_110442ef8;
            *(undefined8 *)(unaff_x22 + 0x1b8) = uVar34;
            func_0x000101b15ef8(unaff_x22 + 0x110,unaff_x22 + 0x180);
            func_0x000107c6157c(puVar13);
            func_0x000107c6157c(uVar34);
            lVar19 = 0x112e009e0;
            func_0x0001000285a8(0x112e009e0,&UNK_10d9d0d50);
            *(long *)(unaff_x22 + 0x458) = lVar19;
            lVar20 = *(long *)(lVar19 + -8);
            *(long *)(unaff_x22 + 0x460) = lVar20;
            lVar21 = *(long *)(lVar20 + 0x40);
            uVar17 = lVar21 + 0xf;
            uVar15 = uVar17 & 0xfffffffffffffff0;
            func_0x000107c615b8();
            *(ulong *)(unaff_x22 + 0x468) = uVar15;
            lVar33 = 0x112e009e8;
            func_0x0001000285a8(0x112e009e8,&UNK_10d9d5e80);
            *(long *)(unaff_x22 + 0x470) = lVar33;
            lVar30 = *(long *)(lVar33 + -8);
            *(long *)(unaff_x22 + 0x478) = lVar30;
            lVar35 = *(long *)(lVar30 + 0x40);
            uVar8 = lVar35 + 0xf;
            uVar16 = uVar8 & 0xfffffffffffffff0;
            func_0x000107c615b8();
            *(ulong *)(unaff_x22 + 0x480) = uVar16;
            lVar9 = 0x112e009f0;
            func_0x0001000285a8(0x112e009f0,&UNK_10d9d0d60);
            lVar28 = *(long *)(lVar9 + -8);
            puVar29 = (undefined8 *)(*(long *)(lVar28 + 0x40) + 0xfU & 0xfffffffffffffff0);
            func_0x000107c615b8();
            *puVar29 = 1;
            (**(code **)(lVar28 + 0x68))();
            iVar7 = 2;
            func_0x000100029b9c(2,0x11,0,0);
            if (iVar7 == 0) {
              func_0x000101b0eb4c(uVar15,uVar16,puVar29);
            }
            else {
              func_0x000107c5fd10(uVar15,uVar16,PTR___sytN_11034f1b0 + 8,puVar29,
                                  PTR___sytN_11034f1b0 + 8);
            }
            uVar42 = *(undefined8 *)(unaff_x22 + 0x3e0);
            uVar41 = *(undefined8 *)(unaff_x22 + 0x3a0);
            uVar45 = *(undefined8 *)(unaff_x22 + 0x388);
            uVar27 = *(undefined8 *)(unaff_x22 + 0x378);
            uVar34 = *(undefined8 *)(unaff_x22 + 0x358);
            uVar37 = *(undefined8 *)(unaff_x22 + 0x350);
            uVar46 = *(undefined8 *)(unaff_x22 + 0x398);
            uVar43 = *(undefined8 *)(unaff_x22 + 0x390);
            uVar47 = *(undefined8 *)(unaff_x22 + 0x338);
            uVar44 = *(undefined8 *)(unaff_x22 + 0x330);
            (**(code **)(lVar28 + 8))(puVar29,lVar9);
            func_0x000107c615c0(puVar29);
            lVar9 = 0;
            FUN_101b14550();
            func_0x000107c613fc();
            *(long *)(unaff_x22 + 0x488) = lVar9;
            puVar13 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
            func_0x000107c610f8();
            func_0x000107c453e4();
            *(undefined **)(lVar9 + 0x10) = puVar13;
            *(undefined1 *)(lVar9 + 0x18) = 0;
            *(undefined8 *)(lVar9 + 0x20) = 0;
            lVar28 = 0x90;
            func_0x000107c615b8();
            *(long *)(unaff_x22 + 0x490) = lVar28;
            *(undefined8 *)(lVar28 + 0x10) = uVar41;
            *(ulong *)(lVar28 + 0x18) = uVar15;
            *(long *)(lVar28 + 0x20) = lVar9;
            *(long *)(lVar28 + 0x28) = unaff_x22 + 0x1b8;
            *(undefined8 *)(lVar28 + 0x30) = uVar45;
            *(undefined8 *)(lVar28 + 0x38) = uVar42;
            *(undefined8 *)(lVar28 + 0x48) = uVar46;
            *(undefined8 *)(lVar28 + 0x40) = uVar43;
            *(undefined8 *)(lVar28 + 0x58) = uVar47;
            *(undefined8 *)(lVar28 + 0x50) = uVar44;
            *(undefined8 *)(lVar28 + 0x60) = uVar27;
            *(undefined8 *)(lVar28 + 0x68) = uVar34;
            *(ulong *)(lVar28 + 0x70) = uVar16;
            *(undefined8 *)(lVar28 + 0x78) = uVar37;
            *(undefined **)(lVar28 + 0x80) = &UNK_10d9d0d48;
            *(undefined **)(lVar28 + 0x88) = puVar14;
            iVar7 = 2;
            func_0x000100029b9c(2,0x12,0,0);
            if (iVar7 != 0) {
              plVar10 = (long *)(ulong)*(uint *)(
                                                PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lFTu_11034ff68
                                                + 4);
              func_0x000107c615b8();
              *(long **)(unaff_x22 + 0x498) = plVar10;
              *plVar10 = unaff_x22;
              plVar10[1] = (long)FUN_101b01b48;
                    /* WARNING: Could not recover jumptable at 0x00010bdb929c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)
                PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lF_11034ff60
              )();
              return;
            }
            uVar43 = *(undefined8 *)(unaff_x22 + 0x3e0);
            uVar41 = *(undefined8 *)(unaff_x22 + 0x3a0);
            uVar46 = *(undefined8 *)(unaff_x22 + 0x388);
            uVar27 = *(undefined8 *)(unaff_x22 + 0x338);
            uVar34 = *(undefined8 *)(unaff_x22 + 0x330);
            uVar37 = *(undefined8 *)(unaff_x22 + 0x398);
            uVar47 = *(undefined8 *)(unaff_x22 + 0x398);
            uVar44 = *(undefined8 *)(unaff_x22 + 0x390);
            func_0x000107c615ac(unaff_x22 + 0x10,PTR___sytN_11034f1b0 + 8);
            *(long *)(unaff_x22 + 0x328) = unaff_x22 + 0x10;
            lVar28 = 0x112d453c8;
            func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
            uVar15 = *(long *)(*(long *)(lVar28 + -8) + 0x40) + 0xf;
            uVar16 = uVar15 & 0xfffffffffffffff0;
            func_0x000107c615b8();
            lVar28 = 0;
            func_0x000107c5fd0c();
            pcVar12 = *(code **)(*(long *)(lVar28 + -8) + 0x38);
            (*pcVar12)(uVar16,1,1,lVar28);
            uVar17 = uVar17 & 0xfffffffffffffff0;
            func_0x000107c615b8();
            (**(code **)(lVar20 + 0x10))();
            func_0x000100b6a0c4(unaff_x22 + 0x1b8,unaff_x22 + 0x1e0);
            lVar28 = 0x112e001b0;
            func_0x0001000285a8(0x112e001b0,&UNK_10d9d0938);
            lVar36 = *(long *)(lVar28 + -8);
            lVar22 = *(long *)(lVar36 + 0x40);
            uVar18 = lVar22 + 0xfU & 0xfffffffffffffff0;
            func_0x000107c615b8();
            pcVar23 = *(code **)(lVar36 + 0x10);
            (*pcVar23)();
            bVar2 = *(byte *)(lVar20 + 0x50);
            uVar31 = (ulong)bVar2 + 0x28 & ((ulong)bVar2 ^ 0xffffffffffffffff);
            uVar39 = lVar21 + uVar31 + 7 & 0xfffffffffffffff8;
            bVar4 = *(byte *)(lVar36 + 0x50);
            uVar25 = (ulong)bVar4;
            uVar32 = uVar39 + 0x50 + uVar25 + 0x10 & (uVar25 ^ 0xffffffffffffffff);
            puVar13 = &UNK_110443478;
            func_0x000107c613fc(&UNK_110443478,uVar32 + lVar22,bVar4 | bVar2 | 7);
            *(undefined8 *)(puVar13 + 0x10) = 0;
            *(undefined8 *)(puVar13 + 0x18) = 0;
            *(undefined8 *)(puVar13 + 0x20) = uVar41;
            (**(code **)(lVar20 + 0x20))(puVar13 + uVar31,uVar17,lVar19);
            *(long *)(puVar13 + uVar39) = lVar9;
            func_0x000100b69c8c(unaff_x22 + 0x1e0,puVar13 + uVar39 + 8);
            *(undefined8 *)(puVar13 + uVar39 + 0x30) = uVar46;
            *(undefined8 *)(puVar13 + uVar39 + 0x38) = uVar43;
            *(undefined8 *)((long)(puVar13 + uVar39 + 0x40) + 8) = uVar47;
            *(undefined8 *)(puVar13 + uVar39 + 0x40) = uVar44;
            *(undefined8 *)(puVar13 + uVar39 + 0x50) = uVar34;
            *(undefined8 *)((long)(puVar13 + uVar39 + 0x50) + 8) = uVar27;
            pcVar24 = *(code **)(lVar36 + 0x20);
            (*pcVar24)(puVar13 + uVar32,uVar18,lVar28);
            func_0x000107c615c0(uVar18);
            func_0x000107c615c0(uVar17);
            func_0x000107c6157c(lVar9);
            func_0x000107c6157c(uVar37);
            func_0x000107c6157c(uVar27);
            FUN_101b02fc0(uVar16,&UNK_10d9d0d80,puVar13,&UNK_1104434f0,PTR___sytN_11034f1b0 + 8,
                          &UNK_10d9d0dd0);
            func_0x000101b16f40(uVar16,0x112d453c8,&UNK_10d90ac60);
            func_0x000107c615c0(uVar16);
            uVar17 = uVar15 & 0xfffffffffffffff0;
            func_0x000107c615b8();
            (*pcVar12)();
            lVar19 = 0x112e009c0;
            func_0x0001000285a8(0x112e009c0,&UNK_10d9d0cf8);
            lVar21 = *(long *)(lVar19 + -8);
            lVar20 = *(long *)(lVar21 + 0x40);
            uVar16 = lVar20 + 0xfU & 0xfffffffffffffff0;
            func_0x000107c615b8();
            (**(code **)(lVar21 + 0x10))();
            uVar8 = uVar8 & 0xfffffffffffffff0;
            func_0x000107c615b8();
            (**(code **)(lVar30 + 0x10))();
            uVar18 = lVar22 + 0xfU & 0xfffffffffffffff0;
            func_0x000107c615b8();
            (*pcVar23)();
            bVar2 = *(byte *)(lVar21 + 0x50);
            uVar39 = (ulong)bVar2 + 0x28 & ((ulong)bVar2 ^ 0xffffffffffffffff);
            uVar31 = lVar20 + uVar39 + 7 & 0xfffffffffffffff8;
            bVar5 = *(byte *)(lVar30 + 0x50);
            uVar38 = bVar5 + uVar31 + 8 & ((ulong)bVar5 ^ 0xffffffffffffffff);
            uVar32 = lVar35 + uVar38 + 7 & 0xfffffffffffffff8;
            uVar25 = uVar32 + uVar25 + 0x10 & (uVar25 ^ 0xffffffffffffffff);
            puVar13 = &UNK_1104434a0;
            func_0x000107c613fc(&UNK_1104434a0,uVar25 + lVar22,bVar4 | bVar2 | bVar5 | 7);
            *(undefined8 *)(puVar13 + 0x10) = 0;
            *(undefined8 *)(puVar13 + 0x18) = 0;
            *(undefined8 *)(puVar13 + 0x20) = uVar41;
            (**(code **)(lVar21 + 0x20))(puVar13 + uVar39,uVar16,lVar19);
            *(long *)(puVar13 + uVar31) = lVar9;
            (**(code **)(lVar30 + 0x20))(puVar13 + uVar38,uVar8,lVar33);
            *(undefined8 *)(puVar13 + uVar32) = uVar34;
            *(undefined8 *)((long)(puVar13 + uVar32) + 8) = uVar27;
            (*pcVar24)(puVar13 + uVar25,uVar18,lVar28);
            func_0x000107c615c0(uVar18);
            func_0x000107c615c0(uVar8);
            func_0x000107c615c0(uVar16);
            func_0x000107c6157c(lVar9);
            func_0x000107c6157c(uVar27);
            FUN_101b02fc0(uVar17,&UNK_10d9d0d90,puVar13,&UNK_1104434f0,PTR___sytN_11034f1b0 + 8,
                          &UNK_10d9d0dd0);
            func_0x000101b16f40(uVar17,0x112d453c8,&UNK_10d90ac60);
            func_0x000107c615c0(uVar17);
            uVar15 = uVar15 & 0xfffffffffffffff0;
            func_0x000107c615b8();
            (*pcVar12)();
            lVar19 = 0x112e009b0;
            func_0x0001000285a8(0x112e009b0,&UNK_10d9d0ce8);
            lVar9 = *(long *)(lVar19 + -8);
            lVar33 = *(long *)(lVar9 + 0x40);
            uVar17 = lVar33 + 0xfU & 0xfffffffffffffff0;
            func_0x000107c615b8();
            (**(code **)(lVar9 + 0x10))();
            uVar8 = (ulong)*(byte *)(lVar9 + 0x50);
            uVar16 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
            uVar18 = lVar33 + uVar16 + 7 & 0xfffffffffffffff8;
            puVar13 = &UNK_1104434c8;
            func_0x000107c613fc(&UNK_1104434c8,uVar18 + 0x10,uVar8 | 7);
            *(undefined8 *)(puVar13 + 0x10) = 0;
            *(undefined8 *)(puVar13 + 0x18) = 0;
            (**(code **)(lVar9 + 0x20))(puVar13 + uVar16,uVar17,lVar19);
            *(undefined **)(puVar13 + uVar18) = &UNK_10d9d0d48;
            *(undefined **)((long)(puVar13 + uVar18) + 8) = puVar14;
            func_0x000107c615c0(uVar17);
            func_0x000107c6157c(puVar14);
            FUN_101b02fc0(uVar15,&UNK_10d9d0da0,puVar13,&UNK_1104434f0,PTR___sytN_11034f1b0 + 8,
                          &UNK_10d9d0dd0);
            func_0x000101b16f40(uVar15,0x112d453c8,&UNK_10d90ac60);
            func_0x000107c615c0(uVar15);
            plVar10 = (long *)(ulong)*(uint *)(PTR___sScG22awaitAllRemainingTasksyyYaFTu_11034fbe0 +
                                              4);
            func_0x000107c615b8();
            *(long **)(unaff_x22 + 0x4a0) = plVar10;
            func_0x0001000285a8(0x112dc6b70,&UNK_10da1df30);
            *plVar10 = unaff_x22;
            plVar10[1] = 0x101b01b98;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR___sScG22awaitAllRemainingTasksyyYaF_11034fbd8)();
            return;
          }
          uVar27 = *(undefined8 *)(unaff_x22 + 0x3d8);
          func_0x000101b15ef8(unaff_x22 + 0x110,unaff_x22 + 0x148);
          FUN_101b142fc();
          *(undefined8 *)(unaff_x22 + 0x440) = uVar27;
          func_0x000101b15ec4(unaff_x22 + 0x110);
          pcVar12 = FUN_101b0109c;
        }
        else {
          pcVar12 = FUN_101b00540;
        }
      }
      else {
        pcVar12 = (code *)0x101aff9bc;
      }
      goto LAB_107c615e0;
    }
    func_0x000107c61428(lVar19 + 0x10,unaff_x22 + 0x280,0,0);
    lVar19 = lVar19 + 0x10;
    func_0x000107c61648();
    *(long *)(unaff_x22 + 0x4a8) = lVar19;
    if (lVar19 != 0) {
      pcVar12 = FUN_101b01d08;
      goto LAB_107c615e0;
    }
    plVar10 = (long *)0x160;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x4b0) = plVar10;
    lVar19 = 0x101b01d6c;
  }
  *plVar10 = unaff_x22;
  plVar10[1] = lVar19;
  lVar19 = *(long *)(unaff_x22 + 0x358);
  plVar10[0x27] = *(long *)(unaff_x22 + 0x350);
  plVar10[0x28] = lVar19;
  pcVar12 = FUN_101b14848;
  lVar19 = 0;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar12,lVar19,0);
  return;
}



/* Entry: 101aff7dc; end: 101affa2b;  */

void FUN_101aff7dc(void)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x3f8);
  FUN_101b0c4a8(4);
  func_0x000107c61574(uVar3);
  plVar1 = (long *)0x160;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x400) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101aff840;
  lVar2 = *(long *)(unaff_x22 + 0x358);
  plVar1[0x27] = *(long *)(unaff_x22 + 0x350);
  plVar1[0x28] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b14848,0,0);
  return;
}



/* Entry: 101affa2c; end: 101b0053f;  */

void FUN_101affa2c(void)

{
  undefined1 uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  code *pcVar19;
  long lVar20;
  code *pcVar21;
  code *pcVar22;
  ulong uVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  long unaff_x22;
  undefined8 *puVar27;
  ulong uVar28;
  ulong uVar29;
  long lVar30;
  undefined8 uVar31;
  long lVar32;
  undefined8 uVar33;
  ulong uVar34;
  ulong uVar35;
  double dVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  
  lVar25 = *(long *)(unaff_x22 + 0x340);
  func_0x000107c61428(lVar25 + 0x10,unaff_x22 + 0x2b0,0,0);
  lVar25 = lVar25 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0x430) = lVar25;
  if (lVar25 == 0) {
    lVar25 = *(long *)(unaff_x22 + 0x340);
    func_0x000107c61428(lVar25 + 0x10,unaff_x22 + 0x2e0,0,0);
    lVar25 = lVar25 + 0x10;
    func_0x000107c61648();
    *(long *)(unaff_x22 + 0x438) = lVar25;
    if (lVar25 == 0) {
      dVar36 = (double)(long)((*(double *)(unaff_x22 + 0x3c0) - *(double *)(unaff_x22 + 0x3b8)) *
                             1000.0);
      if (0x7fefffffffffffff < (ulong)ABS(dVar36)) {
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(1,0x101b00538);
        (*pcVar19)();
      }
      if (dVar36 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(1,0x101b0053c);
        (*pcVar19)();
      }
      if (9.223372036854776e+18 <= dVar36) {
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(1,0x101b00540);
        (*pcVar19)();
      }
      uVar1 = *(undefined1 *)(unaff_x22 + 0x141);
      uVar24 = *(undefined8 *)(unaff_x22 + 1000);
      uVar37 = *(undefined8 *)(unaff_x22 + 0x3e0);
      uVar31 = *(undefined8 *)(unaff_x22 + 0x3d8);
      uVar33 = *(undefined8 *)(unaff_x22 + 0x3d0);
      uVar40 = *(undefined8 *)(unaff_x22 + 0x3a8);
      puVar27 = *(undefined8 **)(unaff_x22 + 0x380);
      uVar43 = *(undefined8 *)(unaff_x22 + 0x370);
      lVar25 = *(long *)(unaff_x22 + 0x340);
      puVar6 = &UNK_1104433d8;
      func_0x000107c613fc(&UNK_1104433d8,0x18,7);
      *(undefined **)(unaff_x22 + 0x448) = puVar6;
      func_0x000107c61428(lVar25 + 0x10,unaff_x22 + 0x2f8,0,0);
      lVar25 = lVar25 + 0x10;
      func_0x000107c61648(lVar25);
      func_0x000107c61644(puVar6 + 0x10,lVar25);
      func_0x000107c61574(lVar25);
      puVar7 = &UNK_110443450;
      func_0x000107c613fc(&UNK_110443450,0x68,7);
      *(undefined **)(unaff_x22 + 0x450) = puVar7;
      *(undefined **)(puVar7 + 0x10) = puVar6;
      *(undefined8 *)(puVar7 + 0x18) = uVar33;
      *(undefined8 *)(puVar7 + 0x20) = uVar31;
      *(undefined8 *)(puVar7 + 0x28) = uVar37;
      *(undefined8 *)(puVar7 + 0x30) = uVar24;
      puVar7[0x38] = uVar1;
      uVar24 = *(undefined8 *)(unaff_x22 + 0x310);
      *(undefined8 *)(puVar7 + 0x41) = *(undefined8 *)(unaff_x22 + 0x318);
      *(undefined8 *)(puVar7 + 0x39) = uVar24;
      *(undefined8 *)(puVar7 + 0x50) = uVar43;
      *(undefined8 *)(puVar7 + 0x58) = uVar40;
      *(long *)(puVar7 + 0x60) = (long)dVar36;
      func_0x0001000a8868(puVar27,puVar27[3]);
      uVar31 = *puVar27;
      uVar24 = 0;
      func_0x000100b68ba4();
      *(undefined8 *)(unaff_x22 + 0x1d0) = uVar24;
      *(undefined ***)(unaff_x22 + 0x1d8) = &PTR_DAT_110442ef8;
      *(undefined8 *)(unaff_x22 + 0x1b8) = uVar31;
      func_0x000101b15ef8(unaff_x22 + 0x110,unaff_x22 + 0x180);
      func_0x000107c6157c(puVar6);
      func_0x000107c6157c(uVar31);
      lVar25 = 0x112e009e0;
      func_0x0001000285a8(0x112e009e0,&UNK_10d9d0d50);
      *(long *)(unaff_x22 + 0x458) = lVar25;
      lVar15 = *(long *)(lVar25 + -8);
      *(long *)(unaff_x22 + 0x460) = lVar15;
      lVar16 = *(long *)(lVar15 + 0x40);
      uVar12 = lVar16 + 0xf;
      uVar8 = uVar12 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      *(ulong *)(unaff_x22 + 0x468) = uVar8;
      lVar30 = 0x112e009e8;
      func_0x0001000285a8(0x112e009e8,&UNK_10d9d5e80);
      *(long *)(unaff_x22 + 0x470) = lVar30;
      lVar17 = *(long *)(lVar30 + -8);
      *(long *)(unaff_x22 + 0x478) = lVar17;
      lVar18 = *(long *)(lVar17 + 0x40);
      uVar14 = lVar18 + 0xf;
      uVar9 = uVar14 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      *(ulong *)(unaff_x22 + 0x480) = uVar9;
      lVar10 = 0x112e009f0;
      func_0x0001000285a8(0x112e009f0,&UNK_10d9d0d60);
      lVar26 = *(long *)(lVar10 + -8);
      puVar27 = (undefined8 *)(*(long *)(lVar26 + 0x40) + 0xfU & 0xfffffffffffffff0);
      func_0x000107c615b8();
      *puVar27 = 1;
      (**(code **)(lVar26 + 0x68))();
      iVar5 = 2;
      func_0x000100029b9c(2,0x11,0,0);
      if (iVar5 == 0) {
        func_0x000101b0eb4c(uVar8,uVar9,puVar27);
      }
      else {
        func_0x000107c5fd10(uVar8,uVar9,PTR___sytN_11034f1b0 + 8,puVar27,PTR___sytN_11034f1b0 + 8);
      }
      uVar38 = *(undefined8 *)(unaff_x22 + 0x3e0);
      uVar37 = *(undefined8 *)(unaff_x22 + 0x3a0);
      uVar41 = *(undefined8 *)(unaff_x22 + 0x388);
      uVar24 = *(undefined8 *)(unaff_x22 + 0x378);
      uVar31 = *(undefined8 *)(unaff_x22 + 0x358);
      uVar33 = *(undefined8 *)(unaff_x22 + 0x350);
      uVar42 = *(undefined8 *)(unaff_x22 + 0x398);
      uVar39 = *(undefined8 *)(unaff_x22 + 0x390);
      uVar43 = *(undefined8 *)(unaff_x22 + 0x338);
      uVar40 = *(undefined8 *)(unaff_x22 + 0x330);
      (**(code **)(lVar26 + 8))(puVar27,lVar10);
      func_0x000107c615c0(puVar27);
      lVar10 = 0;
      FUN_101b14550();
      func_0x000107c613fc();
      *(long *)(unaff_x22 + 0x488) = lVar10;
      puVar6 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
      func_0x000107c610f8();
      func_0x000107c453e4();
      *(undefined **)(lVar10 + 0x10) = puVar6;
      *(undefined1 *)(lVar10 + 0x18) = 0;
      *(undefined8 *)(lVar10 + 0x20) = 0;
      lVar26 = 0x90;
      func_0x000107c615b8();
      *(long *)(unaff_x22 + 0x490) = lVar26;
      *(undefined8 *)(lVar26 + 0x10) = uVar37;
      *(ulong *)(lVar26 + 0x18) = uVar8;
      *(long *)(lVar26 + 0x20) = lVar10;
      *(long *)(lVar26 + 0x28) = unaff_x22 + 0x1b8;
      *(undefined8 *)(lVar26 + 0x30) = uVar41;
      *(undefined8 *)(lVar26 + 0x38) = uVar38;
      *(undefined8 *)(lVar26 + 0x48) = uVar42;
      *(undefined8 *)(lVar26 + 0x40) = uVar39;
      *(undefined8 *)(lVar26 + 0x58) = uVar43;
      *(undefined8 *)(lVar26 + 0x50) = uVar40;
      *(undefined8 *)(lVar26 + 0x60) = uVar24;
      *(undefined8 *)(lVar26 + 0x68) = uVar31;
      *(ulong *)(lVar26 + 0x70) = uVar9;
      *(undefined8 *)(lVar26 + 0x78) = uVar33;
      *(undefined **)(lVar26 + 0x80) = &UNK_10d9d0d48;
      *(undefined **)(lVar26 + 0x88) = puVar7;
      iVar5 = 2;
      func_0x000100029b9c(2,0x12,0,0);
      if (iVar5 != 0) {
        plVar11 = (long *)(ulong)*(uint *)(
                                          PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lFTu_11034ff68
                                          + 4);
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x498) = plVar11;
        *plVar11 = unaff_x22;
        plVar11[1] = (long)FUN_101b01b48;
                    /* WARNING: Could not recover jumptable at 0x00010bdb929c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lF_11034ff60
        )();
        return;
      }
      uVar39 = *(undefined8 *)(unaff_x22 + 0x3e0);
      uVar37 = *(undefined8 *)(unaff_x22 + 0x3a0);
      uVar42 = *(undefined8 *)(unaff_x22 + 0x388);
      uVar24 = *(undefined8 *)(unaff_x22 + 0x338);
      uVar31 = *(undefined8 *)(unaff_x22 + 0x330);
      uVar33 = *(undefined8 *)(unaff_x22 + 0x398);
      uVar43 = *(undefined8 *)(unaff_x22 + 0x398);
      uVar40 = *(undefined8 *)(unaff_x22 + 0x390);
      func_0x000107c615ac(unaff_x22 + 0x10,PTR___sytN_11034f1b0 + 8);
      *(long *)(unaff_x22 + 0x328) = unaff_x22 + 0x10;
      lVar26 = 0x112d453c8;
      func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
      uVar8 = *(long *)(*(long *)(lVar26 + -8) + 0x40) + 0xf;
      uVar9 = uVar8 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      lVar26 = 0;
      func_0x000107c5fd0c();
      pcVar19 = *(code **)(*(long *)(lVar26 + -8) + 0x38);
      (*pcVar19)(uVar9,1,1,lVar26);
      uVar12 = uVar12 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      (**(code **)(lVar15 + 0x10))();
      func_0x000100b6a0c4(unaff_x22 + 0x1b8,unaff_x22 + 0x1e0);
      lVar26 = 0x112e001b0;
      func_0x0001000285a8(0x112e001b0,&UNK_10d9d0938);
      lVar32 = *(long *)(lVar26 + -8);
      lVar20 = *(long *)(lVar32 + 0x40);
      uVar13 = lVar20 + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      pcVar21 = *(code **)(lVar32 + 0x10);
      (*pcVar21)();
      bVar2 = *(byte *)(lVar15 + 0x50);
      uVar28 = (ulong)bVar2 + 0x28 & ((ulong)bVar2 ^ 0xffffffffffffffff);
      uVar35 = lVar16 + uVar28 + 7 & 0xfffffffffffffff8;
      bVar3 = *(byte *)(lVar32 + 0x50);
      uVar23 = (ulong)bVar3;
      uVar29 = uVar35 + 0x50 + uVar23 + 0x10 & (uVar23 ^ 0xffffffffffffffff);
      puVar6 = &UNK_110443478;
      func_0x000107c613fc(&UNK_110443478,uVar29 + lVar20,bVar3 | bVar2 | 7);
      *(undefined8 *)(puVar6 + 0x10) = 0;
      *(undefined8 *)(puVar6 + 0x18) = 0;
      *(undefined8 *)(puVar6 + 0x20) = uVar37;
      (**(code **)(lVar15 + 0x20))(puVar6 + uVar28,uVar12,lVar25);
      *(long *)(puVar6 + uVar35) = lVar10;
      func_0x000100b69c8c(unaff_x22 + 0x1e0,puVar6 + uVar35 + 8);
      *(undefined8 *)(puVar6 + uVar35 + 0x30) = uVar42;
      *(undefined8 *)(puVar6 + uVar35 + 0x38) = uVar39;
      *(undefined8 *)((long)(puVar6 + uVar35 + 0x40) + 8) = uVar43;
      *(undefined8 *)(puVar6 + uVar35 + 0x40) = uVar40;
      *(undefined8 *)(puVar6 + uVar35 + 0x50) = uVar31;
      *(undefined8 *)((long)(puVar6 + uVar35 + 0x50) + 8) = uVar24;
      pcVar22 = *(code **)(lVar32 + 0x20);
      (*pcVar22)(puVar6 + uVar29,uVar13,lVar26);
      func_0x000107c615c0(uVar13);
      func_0x000107c615c0(uVar12);
      func_0x000107c6157c(lVar10);
      func_0x000107c6157c(uVar33);
      func_0x000107c6157c(uVar24);
      FUN_101b02fc0(uVar9,&UNK_10d9d0d80,puVar6,&UNK_1104434f0,PTR___sytN_11034f1b0 + 8,
                    &UNK_10d9d0dd0);
      func_0x000101b16f40(uVar9,0x112d453c8,&UNK_10d90ac60);
      func_0x000107c615c0(uVar9);
      uVar12 = uVar8 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      (*pcVar19)();
      lVar25 = 0x112e009c0;
      func_0x0001000285a8(0x112e009c0,&UNK_10d9d0cf8);
      lVar16 = *(long *)(lVar25 + -8);
      lVar15 = *(long *)(lVar16 + 0x40);
      uVar9 = lVar15 + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      (**(code **)(lVar16 + 0x10))();
      uVar14 = uVar14 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      (**(code **)(lVar17 + 0x10))();
      uVar13 = lVar20 + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      (*pcVar21)();
      bVar2 = *(byte *)(lVar16 + 0x50);
      uVar35 = (ulong)bVar2 + 0x28 & ((ulong)bVar2 ^ 0xffffffffffffffff);
      uVar28 = lVar15 + uVar35 + 7 & 0xfffffffffffffff8;
      bVar4 = *(byte *)(lVar17 + 0x50);
      uVar34 = bVar4 + uVar28 + 8 & ((ulong)bVar4 ^ 0xffffffffffffffff);
      uVar29 = lVar18 + uVar34 + 7 & 0xfffffffffffffff8;
      uVar23 = uVar29 + uVar23 + 0x10 & (uVar23 ^ 0xffffffffffffffff);
      puVar6 = &UNK_1104434a0;
      func_0x000107c613fc(&UNK_1104434a0,uVar23 + lVar20,bVar3 | bVar2 | bVar4 | 7);
      *(undefined8 *)(puVar6 + 0x10) = 0;
      *(undefined8 *)(puVar6 + 0x18) = 0;
      *(undefined8 *)(puVar6 + 0x20) = uVar37;
      (**(code **)(lVar16 + 0x20))(puVar6 + uVar35,uVar9,lVar25);
      *(long *)(puVar6 + uVar28) = lVar10;
      (**(code **)(lVar17 + 0x20))(puVar6 + uVar34,uVar14,lVar30);
      *(undefined8 *)(puVar6 + uVar29) = uVar31;
      *(undefined8 *)((long)(puVar6 + uVar29) + 8) = uVar24;
      (*pcVar22)(puVar6 + uVar23,uVar13,lVar26);
      func_0x000107c615c0(uVar13);
      func_0x000107c615c0(uVar14);
      func_0x000107c615c0(uVar9);
      func_0x000107c6157c(lVar10);
      func_0x000107c6157c(uVar24);
      FUN_101b02fc0(uVar12,&UNK_10d9d0d90,puVar6,&UNK_1104434f0,PTR___sytN_11034f1b0 + 8,
                    &UNK_10d9d0dd0);
      func_0x000101b16f40(uVar12,0x112d453c8,&UNK_10d90ac60);
      func_0x000107c615c0(uVar12);
      uVar8 = uVar8 & 0xfffffffffffffff0;
      func_0x000107c615b8(uVar8);
      (*pcVar19)();
      lVar25 = 0x112e009b0;
      func_0x0001000285a8(0x112e009b0,&UNK_10d9d0ce8);
      lVar10 = *(long *)(lVar25 + -8);
      lVar30 = *(long *)(lVar10 + 0x40);
      uVar12 = lVar30 + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8(uVar12);
      (**(code **)(lVar10 + 0x10))();
      uVar14 = (ulong)*(byte *)(lVar10 + 0x50);
      uVar9 = uVar14 + 0x20 & (uVar14 ^ 0xffffffffffffffff);
      uVar13 = lVar30 + uVar9 + 7 & 0xfffffffffffffff8;
      puVar6 = &UNK_1104434c8;
      func_0x000107c613fc(&UNK_1104434c8,uVar13 + 0x10,uVar14 | 7);
      *(undefined8 *)(puVar6 + 0x10) = 0;
      *(undefined8 *)(puVar6 + 0x18) = 0;
      (**(code **)(lVar10 + 0x20))(puVar6 + uVar9,uVar12,lVar25);
      *(undefined **)(puVar6 + uVar13) = &UNK_10d9d0d48;
      *(undefined **)((long)(puVar6 + uVar13) + 8) = puVar7;
      func_0x000107c615c0(uVar12);
      func_0x000107c6157c(puVar7);
      FUN_101b02fc0(uVar8,&UNK_10d9d0da0,puVar6,&UNK_1104434f0,PTR___sytN_11034f1b0 + 8,
                    &UNK_10d9d0dd0);
      func_0x000101b16f40(uVar8,0x112d453c8,&UNK_10d90ac60);
      func_0x000107c615c0(uVar8);
      plVar11 = (long *)(ulong)*(uint *)(PTR___sScG22awaitAllRemainingTasksyyYaFTu_11034fbe0 + 4);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x4a0) = plVar11;
      func_0x0001000285a8(0x112dc6b70,&UNK_10da1df30);
      *plVar11 = unaff_x22;
      plVar11[1] = 0x101b01b98;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sScG22awaitAllRemainingTasksyyYaF_11034fbd8)();
      return;
    }
    uVar24 = *(undefined8 *)(unaff_x22 + 0x3d8);
    func_0x000101b15ef8(unaff_x22 + 0x110,unaff_x22 + 0x148);
    FUN_101b142fc();
    *(undefined8 *)(unaff_x22 + 0x440) = uVar24;
    func_0x000101b15ec4(unaff_x22 + 0x110);
    pcVar19 = FUN_101b0109c;
  }
  else {
    pcVar19 = FUN_101b00540;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar19,lVar25,0);
  return;
}



/* Entry: 101b00540; end: 101b005bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b00540(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  
  lVar2 = _DAT_112e00268;
  lVar3 = *(long *)(unaff_x22 + 0x430);
  iVar1 = *(int *)(unaff_x22 + 0x144);
  lVar4 = *(long *)(unaff_x22 + 0x3f0);
  func_0x000107c61428(lVar3 + _DAT_112e00268,unaff_x22 + 0x2c8,0x21,0);
  func_0x000100ed9c6c(lVar4 + iVar1,lVar3 + lVar2);
  func_0x000107c614a8(unaff_x22 + 0x2c8);
  func_0x000107c61574(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b005c0,0,0);
  return;
}



/* Entry: 101b005c0; end: 101b0109b;  */

void FUN_101b005c0(void)

{
  undefined1 uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  long lVar18;
  code *pcVar19;
  code *pcVar20;
  ulong uVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  long unaff_x22;
  undefined8 *puVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  long lVar29;
  undefined8 uVar30;
  long lVar31;
  long lVar32;
  undefined8 uVar33;
  ulong uVar34;
  ulong uVar35;
  double dVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  
  lVar23 = *(long *)(unaff_x22 + 0x340);
  func_0x000107c61428(lVar23 + 0x10,unaff_x22 + 0x2e0,0,0);
  lVar23 = lVar23 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0x438) = lVar23;
  if (lVar23 != 0) {
    uVar22 = *(undefined8 *)(unaff_x22 + 0x3d8);
    func_0x000101b15ef8(unaff_x22 + 0x110,unaff_x22 + 0x148);
    FUN_101b142fc();
    *(undefined8 *)(unaff_x22 + 0x440) = uVar22;
    func_0x000101b15ec4(unaff_x22 + 0x110);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101b0109c,lVar23,0);
    return;
  }
  dVar36 = (double)(long)((*(double *)(unaff_x22 + 0x3c0) - *(double *)(unaff_x22 + 0x3b8)) * 1000.0
                         );
  if (0x7fefffffffffffff < (ulong)ABS(dVar36)) {
                    /* WARNING: Does not return */
    pcVar17 = (code *)SoftwareBreakpoint(1,0x101b01094);
    (*pcVar17)();
  }
  if (dVar36 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar17 = (code *)SoftwareBreakpoint(1,0x101b01098);
    (*pcVar17)();
  }
  if (dVar36 < 9.223372036854776e+18) {
    uVar1 = *(undefined1 *)(unaff_x22 + 0x141);
    uVar22 = *(undefined8 *)(unaff_x22 + 1000);
    uVar37 = *(undefined8 *)(unaff_x22 + 0x3e0);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x3d8);
    uVar33 = *(undefined8 *)(unaff_x22 + 0x3d0);
    uVar40 = *(undefined8 *)(unaff_x22 + 0x3a8);
    puVar25 = *(undefined8 **)(unaff_x22 + 0x380);
    uVar43 = *(undefined8 *)(unaff_x22 + 0x370);
    lVar23 = *(long *)(unaff_x22 + 0x340);
    puVar6 = &UNK_1104433d8;
    func_0x000107c613fc(&UNK_1104433d8,0x18,7);
    *(undefined **)(unaff_x22 + 0x448) = puVar6;
    func_0x000107c61428(lVar23 + 0x10,unaff_x22 + 0x2f8,0,0);
    lVar23 = lVar23 + 0x10;
    func_0x000107c61648(lVar23);
    func_0x000107c61644(puVar6 + 0x10,lVar23);
    func_0x000107c61574(lVar23);
    puVar7 = &UNK_110443450;
    func_0x000107c613fc(&UNK_110443450,0x68,7);
    *(undefined **)(unaff_x22 + 0x450) = puVar7;
    *(undefined **)(puVar7 + 0x10) = puVar6;
    *(undefined8 *)(puVar7 + 0x18) = uVar33;
    *(undefined8 *)(puVar7 + 0x20) = uVar30;
    *(undefined8 *)(puVar7 + 0x28) = uVar37;
    *(undefined8 *)(puVar7 + 0x30) = uVar22;
    puVar7[0x38] = uVar1;
    uVar22 = *(undefined8 *)(unaff_x22 + 0x310);
    *(undefined8 *)(puVar7 + 0x41) = *(undefined8 *)(unaff_x22 + 0x318);
    *(undefined8 *)(puVar7 + 0x39) = uVar22;
    *(undefined8 *)(puVar7 + 0x50) = uVar43;
    *(undefined8 *)(puVar7 + 0x58) = uVar40;
    *(long *)(puVar7 + 0x60) = (long)dVar36;
    func_0x0001000a8868(puVar25,puVar25[3]);
    uVar30 = *puVar25;
    uVar22 = 0;
    func_0x000100b68ba4();
    *(undefined8 *)(unaff_x22 + 0x1d0) = uVar22;
    *(undefined ***)(unaff_x22 + 0x1d8) = &PTR_DAT_110442ef8;
    *(undefined8 *)(unaff_x22 + 0x1b8) = uVar30;
    func_0x000101b15ef8(unaff_x22 + 0x110,unaff_x22 + 0x180);
    func_0x000107c6157c(puVar6);
    func_0x000107c6157c(uVar30);
    lVar23 = 0x112e009e0;
    func_0x0001000285a8(0x112e009e0,&UNK_10d9d0d50);
    *(long *)(unaff_x22 + 0x458) = lVar23;
    lVar15 = *(long *)(lVar23 + -8);
    *(long *)(unaff_x22 + 0x460) = lVar15;
    lVar16 = *(long *)(lVar15 + 0x40);
    uVar12 = lVar16 + 0xf;
    uVar8 = uVar12 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    *(ulong *)(unaff_x22 + 0x468) = uVar8;
    lVar29 = 0x112e009e8;
    func_0x0001000285a8(0x112e009e8,&UNK_10d9d5e80);
    *(long *)(unaff_x22 + 0x470) = lVar29;
    lVar26 = *(long *)(lVar29 + -8);
    *(long *)(unaff_x22 + 0x478) = lVar26;
    lVar31 = *(long *)(lVar26 + 0x40);
    uVar14 = lVar31 + 0xf;
    uVar9 = uVar14 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    *(ulong *)(unaff_x22 + 0x480) = uVar9;
    lVar10 = 0x112e009f0;
    func_0x0001000285a8(0x112e009f0,&UNK_10d9d0d60);
    lVar24 = *(long *)(lVar10 + -8);
    puVar25 = (undefined8 *)(*(long *)(lVar24 + 0x40) + 0xfU & 0xfffffffffffffff0);
    func_0x000107c615b8();
    *puVar25 = 1;
    (**(code **)(lVar24 + 0x68))();
    iVar5 = 2;
    func_0x000100029b9c(2,0x11,0,0);
    if (iVar5 == 0) {
      func_0x000101b0eb4c(uVar8,uVar9,puVar25);
    }
    else {
      func_0x000107c5fd10(uVar8,uVar9,PTR___sytN_11034f1b0 + 8,puVar25,PTR___sytN_11034f1b0 + 8);
    }
    uVar38 = *(undefined8 *)(unaff_x22 + 0x3e0);
    uVar37 = *(undefined8 *)(unaff_x22 + 0x3a0);
    uVar41 = *(undefined8 *)(unaff_x22 + 0x388);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x378);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x358);
    uVar33 = *(undefined8 *)(unaff_x22 + 0x350);
    uVar42 = *(undefined8 *)(unaff_x22 + 0x398);
    uVar39 = *(undefined8 *)(unaff_x22 + 0x390);
    uVar43 = *(undefined8 *)(unaff_x22 + 0x338);
    uVar40 = *(undefined8 *)(unaff_x22 + 0x330);
    (**(code **)(lVar24 + 8))(puVar25,lVar10);
    func_0x000107c615c0(puVar25);
    lVar10 = 0;
    FUN_101b14550();
    func_0x000107c613fc();
    *(long *)(unaff_x22 + 0x488) = lVar10;
    puVar6 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(undefined **)(lVar10 + 0x10) = puVar6;
    *(undefined1 *)(lVar10 + 0x18) = 0;
    *(undefined8 *)(lVar10 + 0x20) = 0;
    lVar24 = 0x90;
    func_0x000107c615b8();
    *(long *)(unaff_x22 + 0x490) = lVar24;
    *(undefined8 *)(lVar24 + 0x10) = uVar37;
    *(ulong *)(lVar24 + 0x18) = uVar8;
    *(long *)(lVar24 + 0x20) = lVar10;
    *(long *)(lVar24 + 0x28) = unaff_x22 + 0x1b8;
    *(undefined8 *)(lVar24 + 0x30) = uVar41;
    *(undefined8 *)(lVar24 + 0x38) = uVar38;
    *(undefined8 *)(lVar24 + 0x48) = uVar42;
    *(undefined8 *)(lVar24 + 0x40) = uVar39;
    *(undefined8 *)(lVar24 + 0x58) = uVar43;
    *(undefined8 *)(lVar24 + 0x50) = uVar40;
    *(undefined8 *)(lVar24 + 0x60) = uVar22;
    *(undefined8 *)(lVar24 + 0x68) = uVar30;
    *(ulong *)(lVar24 + 0x70) = uVar9;
    *(undefined8 *)(lVar24 + 0x78) = uVar33;
    *(undefined **)(lVar24 + 0x80) = &UNK_10d9d0d48;
    *(undefined **)(lVar24 + 0x88) = puVar7;
    iVar5 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar5 != 0) {
      plVar11 = (long *)(ulong)*(uint *)(
                                        PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lFTu_11034ff68
                                        + 4);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x498) = plVar11;
      *plVar11 = unaff_x22;
      plVar11[1] = (long)FUN_101b01b48;
                    /* WARNING: Could not recover jumptable at 0x00010bdb929c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lF_11034ff60
      )();
      return;
    }
    uVar39 = *(undefined8 *)(unaff_x22 + 0x3e0);
    uVar37 = *(undefined8 *)(unaff_x22 + 0x3a0);
    uVar42 = *(undefined8 *)(unaff_x22 + 0x388);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x338);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x330);
    uVar33 = *(undefined8 *)(unaff_x22 + 0x398);
    uVar43 = *(undefined8 *)(unaff_x22 + 0x398);
    uVar40 = *(undefined8 *)(unaff_x22 + 0x390);
    func_0x000107c615ac(unaff_x22 + 0x10,PTR___sytN_11034f1b0 + 8);
    *(long *)(unaff_x22 + 0x328) = unaff_x22 + 0x10;
    lVar24 = 0x112d453c8;
    func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
    uVar8 = *(long *)(*(long *)(lVar24 + -8) + 0x40) + 0xf;
    uVar9 = uVar8 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    lVar24 = 0;
    func_0x000107c5fd0c();
    pcVar17 = *(code **)(*(long *)(lVar24 + -8) + 0x38);
    (*pcVar17)(uVar9,1,1,lVar24);
    uVar12 = uVar12 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    (**(code **)(lVar15 + 0x10))();
    func_0x000100b6a0c4(unaff_x22 + 0x1b8,unaff_x22 + 0x1e0);
    lVar24 = 0x112e001b0;
    func_0x0001000285a8(0x112e001b0,&UNK_10d9d0938);
    lVar32 = *(long *)(lVar24 + -8);
    lVar18 = *(long *)(lVar32 + 0x40);
    uVar13 = lVar18 + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    pcVar19 = *(code **)(lVar32 + 0x10);
    (*pcVar19)();
    bVar2 = *(byte *)(lVar15 + 0x50);
    uVar27 = (ulong)bVar2 + 0x28 & ((ulong)bVar2 ^ 0xffffffffffffffff);
    uVar35 = lVar16 + uVar27 + 7 & 0xfffffffffffffff8;
    bVar3 = *(byte *)(lVar32 + 0x50);
    uVar21 = (ulong)bVar3;
    uVar28 = uVar35 + 0x50 + uVar21 + 0x10 & (uVar21 ^ 0xffffffffffffffff);
    puVar6 = &UNK_110443478;
    func_0x000107c613fc(&UNK_110443478,uVar28 + lVar18,bVar3 | bVar2 | 7);
    *(undefined8 *)(puVar6 + 0x10) = 0;
    *(undefined8 *)(puVar6 + 0x18) = 0;
    *(undefined8 *)(puVar6 + 0x20) = uVar37;
    (**(code **)(lVar15 + 0x20))(puVar6 + uVar27,uVar12,lVar23);
    *(long *)(puVar6 + uVar35) = lVar10;
    func_0x000100b69c8c(unaff_x22 + 0x1e0,puVar6 + uVar35 + 8);
    *(undefined8 *)(puVar6 + uVar35 + 0x30) = uVar42;
    *(undefined8 *)(puVar6 + uVar35 + 0x38) = uVar39;
    *(undefined8 *)((long)(puVar6 + uVar35 + 0x40) + 8) = uVar43;
    *(undefined8 *)(puVar6 + uVar35 + 0x40) = uVar40;
    *(undefined8 *)(puVar6 + uVar35 + 0x50) = uVar30;
    *(undefined8 *)((long)(puVar6 + uVar35 + 0x50) + 8) = uVar22;
    pcVar20 = *(code **)(lVar32 + 0x20);
    (*pcVar20)(puVar6 + uVar28,uVar13,lVar24);
    func_0x000107c615c0(uVar13);
    func_0x000107c615c0(uVar12);
    func_0x000107c6157c(lVar10);
    func_0x000107c6157c(uVar33);
    func_0x000107c6157c(uVar22);
    FUN_101b02fc0(uVar9,&UNK_10d9d0d80,puVar6,&UNK_1104434f0,PTR___sytN_11034f1b0 + 8,&UNK_10d9d0dd0
                 );
    func_0x000101b16f40(uVar9,0x112d453c8,&UNK_10d90ac60);
    func_0x000107c615c0(uVar9);
    uVar12 = uVar8 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    (*pcVar17)();
    lVar23 = 0x112e009c0;
    func_0x0001000285a8(0x112e009c0,&UNK_10d9d0cf8);
    lVar16 = *(long *)(lVar23 + -8);
    lVar15 = *(long *)(lVar16 + 0x40);
    uVar9 = lVar15 + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    (**(code **)(lVar16 + 0x10))();
    uVar14 = uVar14 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    (**(code **)(lVar26 + 0x10))();
    uVar13 = lVar18 + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    (*pcVar19)();
    bVar2 = *(byte *)(lVar16 + 0x50);
    uVar35 = (ulong)bVar2 + 0x28 & ((ulong)bVar2 ^ 0xffffffffffffffff);
    uVar27 = lVar15 + uVar35 + 7 & 0xfffffffffffffff8;
    bVar4 = *(byte *)(lVar26 + 0x50);
    uVar34 = bVar4 + uVar27 + 8 & ((ulong)bVar4 ^ 0xffffffffffffffff);
    uVar28 = lVar31 + uVar34 + 7 & 0xfffffffffffffff8;
    uVar21 = uVar28 + uVar21 + 0x10 & (uVar21 ^ 0xffffffffffffffff);
    puVar6 = &UNK_1104434a0;
    func_0x000107c613fc(&UNK_1104434a0,uVar21 + lVar18,bVar3 | bVar2 | bVar4 | 7);
    *(undefined8 *)(puVar6 + 0x10) = 0;
    *(undefined8 *)(puVar6 + 0x18) = 0;
    *(undefined8 *)(puVar6 + 0x20) = uVar37;
    (**(code **)(lVar16 + 0x20))(puVar6 + uVar35,uVar9,lVar23);
    *(long *)(puVar6 + uVar27) = lVar10;
    (**(code **)(lVar26 + 0x20))(puVar6 + uVar34,uVar14,lVar29);
    *(undefined8 *)(puVar6 + uVar28) = uVar30;
    *(undefined8 *)((long)(puVar6 + uVar28) + 8) = uVar22;
    (*pcVar20)(puVar6 + uVar21,uVar13,lVar24);
    func_0x000107c615c0(uVar13);
    func_0x000107c615c0(uVar14);
    func_0x000107c615c0(uVar9);
    func_0x000107c6157c(lVar10);
    func_0x000107c6157c(uVar22);
    FUN_101b02fc0(uVar12,&UNK_10d9d0d90,puVar6,&UNK_1104434f0,PTR___sytN_11034f1b0 + 8,
                  &UNK_10d9d0dd0);
    func_0x000101b16f40(uVar12,0x112d453c8,&UNK_10d90ac60);
    func_0x000107c615c0(uVar12);
    uVar8 = uVar8 & 0xfffffffffffffff0;
    func_0x000107c615b8(uVar8);
    (*pcVar17)();
    lVar23 = 0x112e009b0;
    func_0x0001000285a8(0x112e009b0,&UNK_10d9d0ce8);
    lVar10 = *(long *)(lVar23 + -8);
    lVar29 = *(long *)(lVar10 + 0x40);
    uVar12 = lVar29 + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8(uVar12);
    (**(code **)(lVar10 + 0x10))();
    uVar14 = (ulong)*(byte *)(lVar10 + 0x50);
    uVar9 = uVar14 + 0x20 & (uVar14 ^ 0xffffffffffffffff);
    uVar13 = lVar29 + uVar9 + 7 & 0xfffffffffffffff8;
    puVar6 = &UNK_1104434c8;
    func_0x000107c613fc(&UNK_1104434c8,uVar13 + 0x10,uVar14 | 7);
    *(undefined8 *)(puVar6 + 0x10) = 0;
    *(undefined8 *)(puVar6 + 0x18) = 0;
    (**(code **)(lVar10 + 0x20))(puVar6 + uVar9,uVar12,lVar23);
    *(undefined **)(puVar6 + uVar13) = &UNK_10d9d0d48;
    *(undefined **)((long)(puVar6 + uVar13) + 8) = puVar7;
    func_0x000107c615c0(uVar12);
    func_0x000107c6157c(puVar7);
    FUN_101b02fc0(uVar8,&UNK_10d9d0da0,puVar6,&UNK_1104434f0,PTR___sytN_11034f1b0 + 8,&UNK_10d9d0dd0
                 );
    func_0x000101b16f40(uVar8,0x112d453c8,&UNK_10d90ac60);
    func_0x000107c615c0(uVar8);
    plVar11 = (long *)(ulong)*(uint *)(PTR___sScG22awaitAllRemainingTasksyyYaFTu_11034fbe0 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x4a0) = plVar11;
    func_0x0001000285a8(0x112dc6b70,&UNK_10da1df30);
    *plVar11 = unaff_x22;
    plVar11[1] = 0x101b01b98;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScG22awaitAllRemainingTasksyyYaF_11034fbd8)();
    return;
  }
                    /* WARNING: Does not return */
  pcVar17 = (code *)SoftwareBreakpoint(1,0x101b0109c);
  (*pcVar17)();
}



/* Entry: 101b0109c; end: 101b010f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b0109c(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x22 + 0x438) + _DAT_112e00208);
  *(undefined8 *)(*(long *)(unaff_x22 + 0x438) + _DAT_112e00208) =
       *(undefined8 *)(unaff_x22 + 0x440);
  func_0x000107c61574();
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b010f4,0,0);
  return;
}



/* Entry: 101b010f4; end: 101b01b47;  */

void FUN_101b010f4(void)

{
  undefined1 uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  code *pcVar19;
  long lVar20;
  code *pcVar21;
  code *pcVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  long unaff_x22;
  undefined8 *puVar26;
  ulong uVar27;
  undefined8 uVar28;
  ulong uVar29;
  long lVar30;
  undefined8 uVar31;
  long lVar32;
  undefined8 uVar33;
  ulong uVar34;
  ulong uVar35;
  double dVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  
  dVar36 = (double)(long)((*(double *)(unaff_x22 + 0x3c0) - *(double *)(unaff_x22 + 0x3b8)) * 1000.0
                         );
  if (0x7fefffffffffffff < (ulong)ABS(dVar36)) {
                    /* WARNING: Does not return */
    pcVar19 = (code *)SoftwareBreakpoint(1,0x101b01b40);
    (*pcVar19)();
  }
  if (dVar36 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar19 = (code *)SoftwareBreakpoint(1,0x101b01b44);
    (*pcVar19)();
  }
  if (9.223372036854776e+18 <= dVar36) {
                    /* WARNING: Does not return */
    pcVar19 = (code *)SoftwareBreakpoint(1,0x101b01b48);
    (*pcVar19)();
  }
  uVar1 = *(undefined1 *)(unaff_x22 + 0x141);
  uVar28 = *(undefined8 *)(unaff_x22 + 1000);
  uVar37 = *(undefined8 *)(unaff_x22 + 0x3e0);
  uVar31 = *(undefined8 *)(unaff_x22 + 0x3d8);
  uVar33 = *(undefined8 *)(unaff_x22 + 0x3d0);
  uVar40 = *(undefined8 *)(unaff_x22 + 0x3a8);
  puVar26 = *(undefined8 **)(unaff_x22 + 0x380);
  uVar43 = *(undefined8 *)(unaff_x22 + 0x370);
  lVar24 = *(long *)(unaff_x22 + 0x340);
  puVar6 = &UNK_1104433d8;
  func_0x000107c613fc(&UNK_1104433d8,0x18,7);
  *(undefined **)(unaff_x22 + 0x448) = puVar6;
  func_0x000107c61428(lVar24 + 0x10,unaff_x22 + 0x2f8,0,0);
  lVar24 = lVar24 + 0x10;
  func_0x000107c61648(lVar24);
  func_0x000107c61644(puVar6 + 0x10,lVar24);
  func_0x000107c61574(lVar24);
  puVar7 = &UNK_110443450;
  func_0x000107c613fc(&UNK_110443450,0x68,7);
  *(undefined **)(unaff_x22 + 0x450) = puVar7;
  *(undefined **)(puVar7 + 0x10) = puVar6;
  *(undefined8 *)(puVar7 + 0x18) = uVar33;
  *(undefined8 *)(puVar7 + 0x20) = uVar31;
  *(undefined8 *)(puVar7 + 0x28) = uVar37;
  *(undefined8 *)(puVar7 + 0x30) = uVar28;
  puVar7[0x38] = uVar1;
  uVar28 = *(undefined8 *)(unaff_x22 + 0x310);
  *(undefined8 *)(puVar7 + 0x41) = *(undefined8 *)(unaff_x22 + 0x318);
  *(undefined8 *)(puVar7 + 0x39) = uVar28;
  *(undefined8 *)(puVar7 + 0x50) = uVar43;
  *(undefined8 *)(puVar7 + 0x58) = uVar40;
  *(long *)(puVar7 + 0x60) = (long)dVar36;
  func_0x0001000a8868(puVar26,puVar26[3]);
  uVar31 = *puVar26;
  uVar28 = 0;
  func_0x000100b68ba4();
  *(undefined8 *)(unaff_x22 + 0x1d0) = uVar28;
  *(undefined ***)(unaff_x22 + 0x1d8) = &PTR_DAT_110442ef8;
  *(undefined8 *)(unaff_x22 + 0x1b8) = uVar31;
  func_0x000101b15ef8(unaff_x22 + 0x110,unaff_x22 + 0x180);
  func_0x000107c6157c(puVar6);
  func_0x000107c6157c(uVar31);
  lVar24 = 0x112e009e0;
  func_0x0001000285a8(0x112e009e0,&UNK_10d9d0d50);
  *(long *)(unaff_x22 + 0x458) = lVar24;
  lVar15 = *(long *)(lVar24 + -8);
  *(long *)(unaff_x22 + 0x460) = lVar15;
  lVar16 = *(long *)(lVar15 + 0x40);
  uVar12 = lVar16 + 0xf;
  uVar8 = uVar12 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x468) = uVar8;
  lVar30 = 0x112e009e8;
  func_0x0001000285a8(0x112e009e8,&UNK_10d9d5e80);
  *(long *)(unaff_x22 + 0x470) = lVar30;
  lVar17 = *(long *)(lVar30 + -8);
  *(long *)(unaff_x22 + 0x478) = lVar17;
  lVar18 = *(long *)(lVar17 + 0x40);
  uVar14 = lVar18 + 0xf;
  uVar9 = uVar14 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x480) = uVar9;
  lVar10 = 0x112e009f0;
  func_0x0001000285a8(0x112e009f0,&UNK_10d9d0d60);
  lVar25 = *(long *)(lVar10 + -8);
  puVar26 = (undefined8 *)(*(long *)(lVar25 + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c615b8();
  *puVar26 = 1;
  (**(code **)(lVar25 + 0x68))();
  iVar5 = 2;
  func_0x000100029b9c(2,0x11,0,0);
  if (iVar5 == 0) {
    func_0x000101b0eb4c(uVar8,uVar9,puVar26);
  }
  else {
    func_0x000107c5fd10(uVar8,uVar9,PTR___sytN_11034f1b0 + 8,puVar26,PTR___sytN_11034f1b0 + 8);
  }
  uVar38 = *(undefined8 *)(unaff_x22 + 0x3e0);
  uVar37 = *(undefined8 *)(unaff_x22 + 0x3a0);
  uVar41 = *(undefined8 *)(unaff_x22 + 0x388);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x378);
  uVar31 = *(undefined8 *)(unaff_x22 + 0x358);
  uVar33 = *(undefined8 *)(unaff_x22 + 0x350);
  uVar42 = *(undefined8 *)(unaff_x22 + 0x398);
  uVar39 = *(undefined8 *)(unaff_x22 + 0x390);
  uVar43 = *(undefined8 *)(unaff_x22 + 0x338);
  uVar40 = *(undefined8 *)(unaff_x22 + 0x330);
  (**(code **)(lVar25 + 8))(puVar26,lVar10);
  func_0x000107c615c0(puVar26);
  lVar10 = 0;
  FUN_101b14550();
  func_0x000107c613fc();
  *(long *)(unaff_x22 + 0x488) = lVar10;
  puVar6 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar10 + 0x10) = puVar6;
  *(undefined1 *)(lVar10 + 0x18) = 0;
  *(undefined8 *)(lVar10 + 0x20) = 0;
  lVar25 = 0x90;
  func_0x000107c615b8();
  *(long *)(unaff_x22 + 0x490) = lVar25;
  *(undefined8 *)(lVar25 + 0x10) = uVar37;
  *(ulong *)(lVar25 + 0x18) = uVar8;
  *(long *)(lVar25 + 0x20) = lVar10;
  *(long *)(lVar25 + 0x28) = unaff_x22 + 0x1b8;
  *(undefined8 *)(lVar25 + 0x30) = uVar41;
  *(undefined8 *)(lVar25 + 0x38) = uVar38;
  *(undefined8 *)(lVar25 + 0x48) = uVar42;
  *(undefined8 *)(lVar25 + 0x40) = uVar39;
  *(undefined8 *)(lVar25 + 0x58) = uVar43;
  *(undefined8 *)(lVar25 + 0x50) = uVar40;
  *(undefined8 *)(lVar25 + 0x60) = uVar28;
  *(undefined8 *)(lVar25 + 0x68) = uVar31;
  *(ulong *)(lVar25 + 0x70) = uVar9;
  *(undefined8 *)(lVar25 + 0x78) = uVar33;
  *(undefined **)(lVar25 + 0x80) = &UNK_10d9d0d48;
  *(undefined **)(lVar25 + 0x88) = puVar7;
  iVar5 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar5 != 0) {
    plVar11 = (long *)(ulong)*(uint *)(
                                      PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lFTu_11034ff68
                                      + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x498) = plVar11;
    *plVar11 = unaff_x22;
    plVar11[1] = (long)FUN_101b01b48;
                    /* WARNING: Could not recover jumptable at 0x00010bdb929c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lF_11034ff60
    )();
    return;
  }
  uVar39 = *(undefined8 *)(unaff_x22 + 0x3e0);
  uVar37 = *(undefined8 *)(unaff_x22 + 0x3a0);
  uVar42 = *(undefined8 *)(unaff_x22 + 0x388);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x338);
  uVar31 = *(undefined8 *)(unaff_x22 + 0x330);
  uVar33 = *(undefined8 *)(unaff_x22 + 0x398);
  uVar43 = *(undefined8 *)(unaff_x22 + 0x398);
  uVar40 = *(undefined8 *)(unaff_x22 + 0x390);
  func_0x000107c615ac(unaff_x22 + 0x10,PTR___sytN_11034f1b0 + 8);
  *(long *)(unaff_x22 + 0x328) = unaff_x22 + 0x10;
  lVar25 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar8 = *(long *)(*(long *)(lVar25 + -8) + 0x40) + 0xf;
  uVar9 = uVar8 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  lVar25 = 0;
  func_0x000107c5fd0c();
  pcVar19 = *(code **)(*(long *)(lVar25 + -8) + 0x38);
  (*pcVar19)(uVar9,1,1,lVar25);
  uVar12 = uVar12 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  (**(code **)(lVar15 + 0x10))();
  func_0x000100b6a0c4(unaff_x22 + 0x1b8,unaff_x22 + 0x1e0);
  lVar25 = 0x112e001b0;
  func_0x0001000285a8(0x112e001b0,&UNK_10d9d0938);
  lVar32 = *(long *)(lVar25 + -8);
  lVar20 = *(long *)(lVar32 + 0x40);
  uVar13 = lVar20 + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  pcVar21 = *(code **)(lVar32 + 0x10);
  (*pcVar21)();
  bVar2 = *(byte *)(lVar15 + 0x50);
  uVar27 = (ulong)bVar2 + 0x28 & ((ulong)bVar2 ^ 0xffffffffffffffff);
  uVar35 = lVar16 + uVar27 + 7 & 0xfffffffffffffff8;
  bVar3 = *(byte *)(lVar32 + 0x50);
  uVar23 = (ulong)bVar3;
  uVar29 = uVar35 + 0x50 + uVar23 + 0x10 & (uVar23 ^ 0xffffffffffffffff);
  puVar6 = &UNK_110443478;
  func_0x000107c613fc(&UNK_110443478,uVar29 + lVar20,bVar3 | bVar2 | 7);
  *(undefined8 *)(puVar6 + 0x10) = 0;
  *(undefined8 *)(puVar6 + 0x18) = 0;
  *(undefined8 *)(puVar6 + 0x20) = uVar37;
  (**(code **)(lVar15 + 0x20))(puVar6 + uVar27,uVar12,lVar24);
  *(long *)(puVar6 + uVar35) = lVar10;
  func_0x000100b69c8c(unaff_x22 + 0x1e0,puVar6 + uVar35 + 8);
  *(undefined8 *)(puVar6 + uVar35 + 0x30) = uVar42;
  *(undefined8 *)(puVar6 + uVar35 + 0x38) = uVar39;
  *(undefined8 *)((long)(puVar6 + uVar35 + 0x40) + 8) = uVar43;
  *(undefined8 *)(puVar6 + uVar35 + 0x40) = uVar40;
  *(undefined8 *)(puVar6 + uVar35 + 0x50) = uVar31;
  *(undefined8 *)((long)(puVar6 + uVar35 + 0x50) + 8) = uVar28;
  pcVar22 = *(code **)(lVar32 + 0x20);
  (*pcVar22)(puVar6 + uVar29,uVar13,lVar25);
  func_0x000107c615c0(uVar13);
  func_0x000107c615c0(uVar12);
  func_0x000107c6157c(lVar10);
  func_0x000107c6157c(uVar33);
  func_0x000107c6157c(uVar28);
  FUN_101b02fc0(uVar9,&UNK_10d9d0d80,puVar6,&UNK_1104434f0,PTR___sytN_11034f1b0 + 8,&UNK_10d9d0dd0);
  func_0x000101b16f40(uVar9,0x112d453c8,&UNK_10d90ac60);
  func_0x000107c615c0(uVar9);
  uVar12 = uVar8 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  (*pcVar19)();
  lVar24 = 0x112e009c0;
  func_0x0001000285a8(0x112e009c0,&UNK_10d9d0cf8);
  lVar16 = *(long *)(lVar24 + -8);
  lVar15 = *(long *)(lVar16 + 0x40);
  uVar9 = lVar15 + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  (**(code **)(lVar16 + 0x10))();
  uVar14 = uVar14 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  (**(code **)(lVar17 + 0x10))();
  uVar13 = lVar20 + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  (*pcVar21)();
  bVar2 = *(byte *)(lVar16 + 0x50);
  uVar35 = (ulong)bVar2 + 0x28 & ((ulong)bVar2 ^ 0xffffffffffffffff);
  uVar27 = lVar15 + uVar35 + 7 & 0xfffffffffffffff8;
  bVar4 = *(byte *)(lVar17 + 0x50);
  uVar34 = bVar4 + uVar27 + 8 & ((ulong)bVar4 ^ 0xffffffffffffffff);
  uVar29 = lVar18 + uVar34 + 7 & 0xfffffffffffffff8;
  uVar23 = uVar29 + uVar23 + 0x10 & (uVar23 ^ 0xffffffffffffffff);
  puVar6 = &UNK_1104434a0;
  func_0x000107c613fc(&UNK_1104434a0,uVar23 + lVar20,bVar3 | bVar2 | bVar4 | 7);
  *(undefined8 *)(puVar6 + 0x10) = 0;
  *(undefined8 *)(puVar6 + 0x18) = 0;
  *(undefined8 *)(puVar6 + 0x20) = uVar37;
  (**(code **)(lVar16 + 0x20))(puVar6 + uVar35,uVar9,lVar24);
  *(long *)(puVar6 + uVar27) = lVar10;
  (**(code **)(lVar17 + 0x20))(puVar6 + uVar34,uVar14,lVar30);
  *(undefined8 *)(puVar6 + uVar29) = uVar31;
  *(undefined8 *)((long)(puVar6 + uVar29) + 8) = uVar28;
  (*pcVar22)(puVar6 + uVar23,uVar13,lVar25);
  func_0x000107c615c0(uVar13);
  func_0x000107c615c0(uVar14);
  func_0x000107c615c0(uVar9);
  func_0x000107c6157c(lVar10);
  func_0x000107c6157c(uVar28);
  FUN_101b02fc0(uVar12,&UNK_10d9d0d90,puVar6,&UNK_1104434f0,PTR___sytN_11034f1b0 + 8,&UNK_10d9d0dd0)
  ;
  func_0x000101b16f40(uVar12,0x112d453c8,&UNK_10d90ac60);
  func_0x000107c615c0(uVar12);
  uVar8 = uVar8 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  (*pcVar19)();
  lVar24 = 0x112e009b0;
  func_0x0001000285a8(0x112e009b0,&UNK_10d9d0ce8);
  lVar10 = *(long *)(lVar24 + -8);
  lVar30 = *(long *)(lVar10 + 0x40);
  uVar12 = lVar30 + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  (**(code **)(lVar10 + 0x10))();
  uVar14 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar9 = uVar14 + 0x20 & (uVar14 ^ 0xffffffffffffffff);
  uVar13 = lVar30 + uVar9 + 7 & 0xfffffffffffffff8;
  puVar6 = &UNK_1104434c8;
  func_0x000107c613fc(&UNK_1104434c8,uVar13 + 0x10,uVar14 | 7);
  *(undefined8 *)(puVar6 + 0x10) = 0;
  *(undefined8 *)(puVar6 + 0x18) = 0;
  (**(code **)(lVar10 + 0x20))(puVar6 + uVar9,uVar12,lVar24);
  *(undefined **)(puVar6 + uVar13) = &UNK_10d9d0d48;
  *(undefined **)((long)(puVar6 + uVar13) + 8) = puVar7;
  func_0x000107c615c0(uVar12);
  func_0x000107c6157c(puVar7);
  FUN_101b02fc0(uVar8,&UNK_10d9d0da0,puVar6,&UNK_1104434f0,PTR___sytN_11034f1b0 + 8,&UNK_10d9d0dd0);
  func_0x000101b16f40(uVar8,0x112d453c8,&UNK_10d90ac60);
  func_0x000107c615c0(uVar8);
  plVar11 = (long *)(ulong)*(uint *)(PTR___sScG22awaitAllRemainingTasksyyYaFTu_11034fbe0 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x4a0) = plVar11;
  func_0x0001000285a8(0x112dc6b70,&UNK_10da1df30);
  *plVar11 = unaff_x22;
  plVar11[1] = 0x101b01b98;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScG22awaitAllRemainingTasksyyYaF_11034fbd8)();
  return;
}



/* Entry: 101b01b48; end: 101b01c23;  */

void FUN_101b01b48(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x498));
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x490));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b01c24,0,0);
  return;
}



/* Entry: 101b01c24; end: 101b01d07;  */

void FUN_101b01c24(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x488);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x480);
  lVar8 = *(long *)(unaff_x22 + 0x478);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x470);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x468);
  lVar9 = *(long *)(unaff_x22 + 0x460);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x458);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x448);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x3f0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x450));
  func_0x000107c61574(uVar2);
  (**(code **)(lVar8 + 8))(uVar1,uVar3);
  func_0x000107c615c0(uVar1);
  (**(code **)(lVar9 + 8))(uVar4,uVar5);
  func_0x000107c615c0(uVar4);
  func_0x0001000834e4(unaff_x22 + 0x1b8);
  func_0x000107c61574(uVar6);
  FUN_101b15ec4(unaff_x22 + 0x110);
  func_0x000101b16f40(uVar7,0x112e009d8,&UNK_10d9d0d38);
  func_0x000107c615c0(uVar7);
                    /* WARNING: Could not recover jumptable at 0x000101b01d04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101b01d08; end: 101b01e07;  */

void FUN_101b01d08(void)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x4a8);
  FUN_101b0c4a8(7);
  func_0x000107c61574(uVar3);
  plVar1 = (long *)0x160;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x4b0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101b01d6c;
  lVar2 = *(long *)(unaff_x22 + 0x358);
  plVar1[0x27] = *(long *)(unaff_x22 + 0x350);
  plVar1[0x28] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b14848,0,0);
  return;
}



/* Entry: 101b01e08; end: 101b01e2b;  */

void FUN_101b01e08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_6;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  *(undefined8 *)(unaff_x22 + 0x30) = param_4;
  *(undefined8 *)(unaff_x22 + 0x38) = param_5;
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b01e2c,0,0);
  return;
}



/* Entry: 101b01e2c; end: 101b0223b;  */

void FUN_101b01e2c(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  long lVar5;
  long lVar6;
  
  lVar4 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x10,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0x58) = lVar4;
  if (lVar4 != 0) {
    plVar1 = (long *)0x90;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x60) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = 0x101b01ec4;
    lVar5 = *(long *)(unaff_x22 + 0x40);
    lVar6 = *(long *)(unaff_x22 + 0x48);
    lVar2 = *(long *)(unaff_x22 + 0x38);
    lVar3 = *(long *)(unaff_x22 + 0x28);
    plVar1[0xc] = *(long *)(unaff_x22 + 0x50);
    plVar1[0xd] = lVar4;
    plVar1[10] = lVar5;
    plVar1[0xb] = lVar6;
    plVar1[8] = lVar3;
    plVar1[9] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101b0455c,lVar4,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000101b01ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101b0223c; end: 101b027a3;  */

void FUN_101b0223c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  undefined8 uVar24;
  long lVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  long lVar34;
  undefined *puVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  code *pcVar39;
  code *pcVar40;
  code *pcVar41;
  ulong uVar42;
  long unaff_x22;
  ulong uVar43;
  ulong uVar44;
  ulong uVar45;
  ulong uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x160);
  lVar2 = *(long *)(unaff_x22 + 0x148);
  lVar17 = *(long *)(unaff_x22 + 0x150);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x140);
  lVar4 = *(long *)(unaff_x22 + 0x128);
  lVar19 = *(long *)(unaff_x22 + 0x130);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x120);
  lVar6 = *(long *)(unaff_x22 + 0x108);
  lVar21 = *(long *)(unaff_x22 + 0x110);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x100);
  lVar8 = *(long *)(unaff_x22 + 0xe8);
  lVar23 = *(long *)(unaff_x22 + 0xf0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar24 = *(undefined8 *)(unaff_x22 + 0xe0);
  lVar10 = *(long *)(unaff_x22 + 200);
  lVar25 = *(long *)(unaff_x22 + 0xd0);
  uVar36 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar26 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar52 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar51 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar29 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar30 = *(undefined8 *)(unaff_x22 + 0x48);
  lVar34 = 0;
  func_0x000107c5fd0c();
  pcVar41 = *(code **)(*(long *)(lVar34 + -8) + 0x38);
  uVar37 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar49 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar47 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar38 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar50 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar48 = *(undefined8 *)(unaff_x22 + 0xb0);
  (*pcVar41)(uVar16,1,1,lVar34);
  (**(code **)(lVar2 + 0x10))(uVar1,uVar30,uVar18);
  func_0x000100b6a0c4(uVar29,unaff_x22 + 0x10);
  pcVar39 = *(code **)(lVar4 + 0x10);
  (*pcVar39)(uVar3,uVar12,uVar20);
  bVar31 = *(byte *)(lVar2 + 0x50);
  uVar43 = (ulong)bVar31 + 0x28 & ((ulong)bVar31 ^ 0xffffffffffffffff);
  uVar44 = lVar17 + uVar43 + 7 & 0xfffffffffffffff8;
  bVar32 = *(byte *)(lVar4 + 0x50);
  uVar42 = (ulong)bVar32;
  uVar46 = uVar44 + 0x50 + uVar42 + 0x10 & (uVar42 ^ 0xffffffffffffffff);
  puVar35 = &UNK_110443518;
  func_0x000107c613fc(&UNK_110443518,uVar46 + lVar19,bVar32 | bVar31 | 7);
  *(undefined8 *)(puVar35 + 0x10) = 0;
  *(undefined8 *)(puVar35 + 0x18) = 0;
  *(undefined8 *)(puVar35 + 0x20) = uVar15;
  (**(code **)(lVar2 + 0x20))(puVar35 + uVar43,uVar1,uVar18);
  *(undefined8 *)(puVar35 + uVar44) = uVar14;
  func_0x000100b69c8c(unaff_x22 + 0x10,puVar35 + uVar44 + 8);
  *(undefined8 *)(puVar35 + uVar44 + 0x30) = uVar52;
  *(undefined8 *)(puVar35 + uVar44 + 0x38) = uVar51;
  *(undefined8 *)((long)(puVar35 + uVar44 + 0x40) + 8) = uVar49;
  *(undefined8 *)(puVar35 + uVar44 + 0x40) = uVar47;
  *(undefined8 *)(puVar35 + uVar44 + 0x50) = uVar13;
  *(undefined8 *)((long)(puVar35 + uVar44 + 0x50) + 8) = uVar28;
  pcVar40 = *(code **)(lVar4 + 0x20);
  (*pcVar40)(puVar35 + uVar46,uVar3,uVar20);
  func_0x000107c6157c(uVar14);
  func_0x000107c6157c(uVar37);
  func_0x000107c6157c(uVar28);
  FUN_101b02fc0(uVar16,&UNK_10d9d0de0,puVar35,&UNK_1104434f0,PTR___sytN_11034f1b0 + 8,&UNK_10d9d0dd0
               );
  func_0x000101b16f40(uVar16,0x112d453c8,&UNK_10d90ac60);
  (*pcVar41)(uVar16,1,1,lVar34);
  (**(code **)(lVar6 + 0x10))(uVar5,uVar27,uVar22);
  (**(code **)(lVar8 + 0x10))(uVar7,uVar11,uVar24);
  (*pcVar39)(uVar3,uVar12,uVar20);
  bVar31 = *(byte *)(lVar6 + 0x50);
  uVar43 = (ulong)bVar31 + 0x28 & ((ulong)bVar31 ^ 0xffffffffffffffff);
  uVar44 = lVar21 + uVar43 + 7 & 0xfffffffffffffff8;
  bVar33 = *(byte *)(lVar8 + 0x50);
  uVar46 = bVar33 + uVar44 + 8 & ((ulong)bVar33 ^ 0xffffffffffffffff);
  uVar45 = lVar23 + uVar46 + 7 & 0xfffffffffffffff8;
  uVar42 = uVar45 + uVar42 + 0x10 & (uVar42 ^ 0xffffffffffffffff);
  puVar35 = &UNK_110443540;
  func_0x000107c613fc(&UNK_110443540,uVar42 + lVar19,bVar32 | bVar31 | bVar33 | 7);
  *(undefined8 *)(puVar35 + 0x10) = 0;
  *(undefined8 *)(puVar35 + 0x18) = 0;
  *(undefined8 *)(puVar35 + 0x20) = uVar15;
  (**(code **)(lVar6 + 0x20))(puVar35 + uVar43,uVar5,uVar22);
  *(undefined8 *)(puVar35 + uVar44) = uVar14;
  (**(code **)(lVar8 + 0x20))(puVar35 + uVar46,uVar7,uVar24);
  *(undefined8 *)(puVar35 + uVar45) = uVar13;
  *(undefined8 *)((long)(puVar35 + uVar45) + 8) = uVar28;
  (*pcVar40)(puVar35 + uVar42,uVar3,uVar20);
  func_0x000107c6157c(uVar14);
  func_0x000107c6157c(uVar28);
  FUN_101b02fc0(uVar16,&UNK_10d9d0de8,puVar35,&UNK_1104434f0,PTR___sytN_11034f1b0 + 8,&UNK_10d9d0dd0
               );
  func_0x000101b16f40(uVar16,0x112d453c8,&UNK_10d90ac60);
  (*pcVar41)(uVar16,1,1,lVar34);
  (**(code **)(lVar10 + 0x10))(uVar9,uVar26,uVar36);
  uVar42 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar43 = uVar42 + 0x20 & (uVar42 ^ 0xffffffffffffffff);
  uVar44 = lVar25 + uVar43 + 7 & 0xfffffffffffffff8;
  puVar35 = &UNK_110443568;
  func_0x000107c613fc(&UNK_110443568,uVar44 + 0x10,uVar42 | 7);
  *(undefined8 *)(puVar35 + 0x10) = 0;
  *(undefined8 *)(puVar35 + 0x18) = 0;
  (**(code **)(lVar10 + 0x20))(puVar35 + uVar43,uVar9,uVar36);
  *(undefined8 *)((long)(puVar35 + uVar44) + 8) = uVar50;
  *(undefined8 *)(puVar35 + uVar44) = uVar48;
  func_0x000107c6157c(uVar38);
  FUN_101b02fc0(uVar16,&UNK_10d9d0df0,puVar35,&UNK_1104434f0,PTR___sytN_11034f1b0 + 8,&UNK_10d9d0dd0
               );
  func_0x000101b16f40(uVar16,0x112d453c8,&UNK_10d90ac60);
  func_0x000107c615c0(uVar16);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar7);
  func_0x000107c615c0(uVar9);
                    /* WARNING: Could not recover jumptable at 0x000101b027a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101b027a4; end: 101b0288f;  */

void FUN_101b027a4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 *in_x6;
  undefined8 in_x7;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = in_stack_00000010;
  *(undefined8 *)(unaff_x22 + 0xa8) = in_stack_00000018;
  *(undefined8 *)(unaff_x22 + 0x98) = in_stack_00000008;
  *(undefined8 *)(unaff_x22 + 0x90) = in_stack_00000000;
  *(undefined8 *)(unaff_x22 + 0x88) = in_x7;
  *(undefined8 *)(unaff_x22 + 0x78) = param_1;
  *(undefined8 *)(unaff_x22 + 0x80) = param_2;
  *(undefined8 *)(unaff_x22 + 0x68) = in_x4;
  *(undefined8 *)(unaff_x22 + 0x70) = in_x5;
  lVar3 = 0x112e00270;
  func_0x0001000285a8(0x112e00270,&UNK_10d9d0948);
  *(long *)(unaff_x22 + 0xb0) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0xb8) = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xc0) = uVar1;
  lVar3 = 0x112e00a10;
  func_0x0001000285a8(0x112e00a10,&UNK_10dc12dc0);
  *(long *)(unaff_x22 + 200) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0xd0) = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xd8) = uVar1;
  func_0x0001000a8868(in_x6,in_x6[3]);
  uVar4 = *in_x6;
  uVar2 = 0;
  func_0x000100b68ba4();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar2;
  *(undefined ***)(unaff_x22 + 0x60) = &PTR_DAT_110442ef8;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar4;
  func_0x000107c6157c(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b02890,0,0);
  return;
}



/* Entry: 101b02890; end: 101b02b43;  */

void FUN_101b02890(double param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 uVar6;
  long *plVar7;
  int *piVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long unaff_x22;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0xd8);
  lVar10 = *(long *)(unaff_x22 + 0x70);
  func_0x0001000285a8(0x112e009e0,&UNK_10d9d0d50);
  func_0x000107c5fd34(uVar9);
  uVar11 = *(ulong *)(lVar10 + 0x10);
  *(ulong *)(unaff_x22 + 0xe0) = uVar11;
  func_0x000107c4b940(uVar11);
  func_0x000107c5d278();
  func_0x000107c5fd5c();
  if ((uVar11 & 1) == 0) {
    uVar9 = *(undefined8 *)(unaff_x22 + 0xe0);
    lVar10 = *(long *)(unaff_x22 + 0x70);
    func_0x000107c4b940(uVar9);
    *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(lVar10 + 0x20);
    func_0x000107c5d278(uVar9);
    plVar7 = (long *)(unaff_x22 + 0x40);
    func_0x0001000a8868(plVar7,*(undefined8 *)(unaff_x22 + 0x58));
    lVar10 = *plVar7;
    func_0x000107c4b940(*(undefined8 *)(lVar10 + 0x20));
    dVar14 = *(double *)(lVar10 + 0x28);
    *(double *)(unaff_x22 + 0xf0) = dVar14;
    dVar13 = 0.0;
    if (*(char *)(lVar10 + 0x38) != '\x01') {
      dVar15 = *(double *)(lVar10 + 0x30);
      (**(code **)(lVar10 + 0x10))();
      dVar13 = dVar13 - dVar15;
      if (dVar13 < 0.0) {
        dVar13 = 0.0;
      }
    }
    *(double *)(unaff_x22 + 0xf8) = dVar13;
    param_1 = *(double *)(unaff_x22 + 0x78);
    dVar15 = *(double *)(unaff_x22 + 0x80);
    uVar11 = *(ulong *)(lVar10 + 0x20);
    func_0x000107c5d278();
    param_1 = (dVar14 + dVar13) - param_1;
    if (param_1 < dVar15) {
      uVar9 = *(undefined8 *)(unaff_x22 + 0xe0);
      lVar10 = *(long *)(unaff_x22 + 0x70);
      func_0x000107c4b940(uVar9);
      cVar5 = *(char *)(lVar10 + 0x18);
      func_0x000107c5d278(uVar9);
      if (cVar5 == '\x01') {
        dVar14 = *(double *)(unaff_x22 + 0xf0);
        dVar13 = *(double *)(unaff_x22 + 0xf8);
        piVar8 = *(int **)(unaff_x22 + 0x88);
        dVar16 = *(double *)(unaff_x22 + 0x78);
        dVar15 = *(double *)(unaff_x22 + 0x80);
        iVar1 = *piVar8;
        plVar7 = (long *)(ulong)(uint)piVar8[1];
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x100) = plVar7;
        *plVar7 = unaff_x22;
        plVar7[1] = (long)FUN_101b02b44;
                    /* WARNING: Could not recover jumptable at 0x000101b02a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)iVar1 + (long)piVar8))(dVar15 - ((dVar13 + dVar14) - dVar16));
        return;
      }
      plVar7 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x108) = plVar7;
      *plVar7 = unaff_x22;
      plVar7[1] = (long)FUN_101b02e28;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
                (plVar7,unaff_x22 + 0x110,*(undefined8 *)(unaff_x22 + 200));
      return;
    }
  }
  func_0x000107c5fd5c();
  lVar10 = *(long *)(unaff_x22 + 0xd0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar12 = *(undefined8 *)(unaff_x22 + 200);
  if ((uVar11 & 1) == 0) {
    lVar2 = *(long *)(unaff_x22 + 0xb8);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xb0);
    (**(code **)(unaff_x22 + 0x98))();
    *(undefined8 *)(unaff_x22 + 0x18) = 0;
    *(undefined8 *)(unaff_x22 + 0x10) = 0;
    *(undefined8 *)(unaff_x22 + 0x28) = 0;
    *(undefined8 *)(unaff_x22 + 0x20) = 0;
    *(undefined1 *)(unaff_x22 + 0x30) = 7;
    *(double *)(unaff_x22 + 0x38) = param_1;
    uVar6 = 0x112e001b0;
    func_0x0001000285a8(0x112e001b0,&UNK_10d9d0938);
    func_0x000107c5fd28(uVar3,unaff_x22 + 0x10,uVar6);
    (**(code **)(lVar2 + 8))(uVar3,uVar4);
  }
  (**(code **)(lVar10 + 8))(uVar9,uVar12);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xc0);
  func_0x0001000834e4(unaff_x22 + 0x40);
  func_0x000107c615c0(uVar12);
  func_0x000107c615c0(uVar9);
                    /* WARNING: Could not recover jumptable at 0x000101b02ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101b02b44; end: 101b02b8b;  */

void FUN_101b02b44(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x100));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b02b8c,0,0);
  return;
}



/* Entry: 101b02b8c; end: 101b02e27;  */

void FUN_101b02b8c(double param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  int *piVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long unaff_x22;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  uVar5 = *(ulong *)(unaff_x22 + 0xe0);
  lVar9 = *(long *)(unaff_x22 + 0xe8);
  lVar11 = *(long *)(unaff_x22 + 0x70);
  func_0x000107c4b940(uVar5);
  lVar11 = *(long *)(lVar11 + 0x20);
  func_0x000107c5d278();
  if ((lVar11 != lVar9) && (func_0x000107c5fd5c(), (uVar5 & 1) == 0)) {
    uVar10 = *(undefined8 *)(unaff_x22 + 0xe0);
    lVar9 = *(long *)(unaff_x22 + 0x70);
    func_0x000107c4b940(uVar10);
    *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(lVar9 + 0x20);
    func_0x000107c5d278(uVar10);
    plVar7 = (long *)(unaff_x22 + 0x40);
    func_0x0001000a8868(plVar7,*(undefined8 *)(unaff_x22 + 0x58));
    lVar9 = *plVar7;
    func_0x000107c4b940(*(undefined8 *)(lVar9 + 0x20));
    dVar14 = *(double *)(lVar9 + 0x28);
    *(double *)(unaff_x22 + 0xf0) = dVar14;
    dVar13 = 0.0;
    if (*(char *)(lVar9 + 0x38) != '\x01') {
      dVar15 = *(double *)(lVar9 + 0x30);
      (**(code **)(lVar9 + 0x10))();
      dVar13 = dVar13 - dVar15;
      if (dVar13 < 0.0) {
        dVar13 = 0.0;
      }
    }
    *(double *)(unaff_x22 + 0xf8) = dVar13;
    param_1 = *(double *)(unaff_x22 + 0x78);
    dVar15 = *(double *)(unaff_x22 + 0x80);
    uVar5 = *(ulong *)(lVar9 + 0x20);
    func_0x000107c5d278();
    param_1 = (dVar14 + dVar13) - param_1;
    if (param_1 < dVar15) {
      uVar10 = *(undefined8 *)(unaff_x22 + 0xe0);
      lVar9 = *(long *)(unaff_x22 + 0x70);
      func_0x000107c4b940(uVar10);
      cVar4 = *(char *)(lVar9 + 0x18);
      func_0x000107c5d278(uVar10);
      if (cVar4 == '\x01') {
        dVar14 = *(double *)(unaff_x22 + 0xf0);
        dVar13 = *(double *)(unaff_x22 + 0xf8);
        piVar8 = *(int **)(unaff_x22 + 0x88);
        dVar16 = *(double *)(unaff_x22 + 0x78);
        dVar15 = *(double *)(unaff_x22 + 0x80);
        iVar1 = *piVar8;
        plVar7 = (long *)(ulong)(uint)piVar8[1];
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x100) = plVar7;
        *plVar7 = unaff_x22;
        plVar7[1] = (long)FUN_101b02b44;
                    /* WARNING: Could not recover jumptable at 0x000101b02d00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)iVar1 + (long)piVar8))(dVar15 - ((dVar13 + dVar14) - dVar16));
        return;
      }
      plVar7 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x108) = plVar7;
      *plVar7 = unaff_x22;
      plVar7[1] = (long)FUN_101b02e28;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
                (plVar7,unaff_x22 + 0x110,*(undefined8 *)(unaff_x22 + 200));
      return;
    }
  }
  func_0x000107c5fd5c();
  lVar9 = *(long *)(unaff_x22 + 0xd0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar12 = *(undefined8 *)(unaff_x22 + 200);
  if ((uVar5 & 1) == 0) {
    lVar11 = *(long *)(unaff_x22 + 0xb8);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
    (**(code **)(unaff_x22 + 0x98))();
    *(undefined8 *)(unaff_x22 + 0x18) = 0;
    *(undefined8 *)(unaff_x22 + 0x10) = 0;
    *(undefined8 *)(unaff_x22 + 0x28) = 0;
    *(undefined8 *)(unaff_x22 + 0x20) = 0;
    *(undefined1 *)(unaff_x22 + 0x30) = 7;
    *(double *)(unaff_x22 + 0x38) = param_1;
    uVar6 = 0x112e001b0;
    func_0x0001000285a8(0x112e001b0,&UNK_10d9d0938);
    func_0x000107c5fd28(uVar2,unaff_x22 + 0x10,uVar6);
    (**(code **)(lVar11 + 8))(uVar2,uVar3);
  }
  (**(code **)(lVar9 + 8))(uVar10,uVar12);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xc0);
  func_0x0001000834e4(unaff_x22 + 0x40);
  func_0x000107c615c0(uVar12);
  func_0x000107c615c0(uVar10);
                    /* WARNING: Could not recover jumptable at 0x000101b02dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101b02e28; end: 101b02e6f;  */

void FUN_101b02e28(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x108));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b02e70,0,0);
  return;
}



/* Entry: 101b02e70; end: 101b02fbf;  */

void FUN_101b02e70(void)

{
  int iVar1;
  byte bVar2;
  long *plVar3;
  int *piVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  if (*(char *)(unaff_x22 + 0x110) == '\x01') {
    (**(code **)(*(long *)(unaff_x22 + 0xd0) + 8))
              (*(undefined8 *)(unaff_x22 + 0xd8),*(undefined8 *)(unaff_x22 + 200));
    uVar7 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xc0);
    func_0x0001000834e4(unaff_x22 + 0x40);
    func_0x000107c615c0(uVar7);
    func_0x000107c615c0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000101b02ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0xe0);
  lVar6 = *(long *)(unaff_x22 + 0x70);
  func_0x000107c4b940(uVar5);
  bVar2 = *(byte *)(lVar6 + 0x18);
  func_0x000107c5d278(uVar5);
  if ((bVar2 & 1) != 0) {
    dVar9 = *(double *)(unaff_x22 + 0xf0);
    dVar8 = *(double *)(unaff_x22 + 0xf8);
    piVar4 = *(int **)(unaff_x22 + 0x88);
    dVar11 = *(double *)(unaff_x22 + 0x78);
    dVar10 = *(double *)(unaff_x22 + 0x80);
    iVar1 = *piVar4;
    plVar3 = (long *)(ulong)(uint)piVar4[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x100) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_101b02b44;
                    /* WARNING: Could not recover jumptable at 0x000101b02f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar4))(dVar10 - ((dVar8 + dVar9) - dVar11));
    return;
  }
  plVar3 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x108) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101b02e28;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar3,unaff_x22 + 0x110,*(undefined8 *)(unaff_x22 + 200));
  return;
}



/* Entry: 101b02fc0; end: 101b03183;  */

void FUN_101b02fc0(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar1 = 0x112d453c8;
  uStack_a0 = param_6;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar4 = (long)&uStack_a0 - extraout_x8;
  FUN_101b16ef8(param_1,uVar4,0x112d453c8,&UNK_10d90ac60);
  lVar1 = 0;
  func_0x000107c5fd0c();
  lVar2 = *(long *)(lVar1 + -8);
  uVar5 = uVar4;
  (**(code **)(lVar2 + 0x30))(uVar4,1,lVar1);
  if ((int)uVar5 == 1) {
    func_0x000101b16f40(uVar4,0x112d453c8,&UNK_10d90ac60);
    uVar5 = 0x3100;
    lVar1 = *(long *)(param_3 + 0x10);
  }
  else {
    func_0x000107c5fd08();
    (**(code **)(lVar2 + 8))(uVar4,lVar1);
    uVar5 = uVar5 & 0xff | 0x3100;
    lVar1 = *(long *)(param_3 + 0x10);
  }
  if (lVar1 == 0) {
    lVar2 = 0;
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(param_3 + 0x18);
    lVar2 = lVar1;
    func_0x000107c614f0();
    func_0x000107c615f0(lVar1);
    func_0x000107c5fca8();
    func_0x000107c615e8(lVar1);
  }
  uVar3 = *unaff_x20;
  func_0x000107c613fc(param_4,0x20,7);
  *(undefined8 *)(param_4 + 0x10) = param_2;
  *(long *)(param_4 + 0x18) = param_3;
  puStack_90 = (undefined8 *)0x0;
  if (lVar6 != 0 || lVar2 != 0) {
    uStack_80 = 0;
    uStack_78 = 0;
    puStack_90 = &uStack_80;
    lStack_70 = lVar2;
    lStack_68 = lVar6;
  }
  uStack_98 = 1;
  uStack_88 = uVar3;
  func_0x000107c615bc(uVar5,&uStack_98,param_5,uStack_a0,param_4);
  func_0x000107c61574();
  return;
}



/* Entry: 101b03184; end: 101b03263;  */

void FUN_101b03184(void)

{
  ulong uVar1;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar2;
  long unaff_x22;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  *(undefined8 *)(unaff_x22 + 0xd0) = in_stack_00000000;
  *(undefined8 *)(unaff_x22 + 0xd8) = in_stack_00000008;
  *(undefined8 *)(unaff_x22 + 0xc0) = in_x6;
  *(undefined8 *)(unaff_x22 + 200) = in_x7;
  *(undefined8 *)(unaff_x22 + 0xb0) = in_x4;
  *(undefined8 *)(unaff_x22 + 0xb8) = in_x5;
  lVar2 = 0x112e00a00;
  func_0x0001000285a8(0x112e00a00,&UNK_10d9d5e90);
  *(long *)(unaff_x22 + 0xe0) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0xe8) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xf0) = uVar1;
  lVar2 = 0x112e00270;
  func_0x0001000285a8(0x112e00270,&UNK_10d9d0948);
  *(long *)(unaff_x22 + 0xf8) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x100) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x108) = uVar1;
  lVar2 = 0x112e00a08;
  func_0x0001000285a8(0x112e00a08,&UNK_10d9d0dc0);
  *(long *)(unaff_x22 + 0x110) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x118) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x120) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b03264,0,0);
  return;
}



/* Entry: 101b03264; end: 101b032ef;  */

void FUN_101b03264(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x120);
  lVar1 = *(long *)(unaff_x22 + 0xb8);
  func_0x0001000285a8(0x112e009c0,&UNK_10d9d0cf8);
  func_0x000107c5fd34(uVar3);
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(lVar1 + 0x10);
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x130) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101b032f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar2,unaff_x22 + 0xa0,*(undefined8 *)(unaff_x22 + 0x110));
  return;
}



/* Entry: 101b032f0; end: 101b03337;  */

void FUN_101b032f0(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x130));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b03338,0,0);
  return;
}



/* Entry: 101b03338; end: 101b035bf;  */

void FUN_101b03338(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  code *pcVar8;
  undefined8 *puVar9;
  long lVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar9 = (undefined8 *)(unaff_x22 + 0xa0);
  uVar13 = *puVar9;
  cVar3 = *(char *)(unaff_x22 + 0xa8);
  if (cVar3 == -1) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xf0);
    (**(code **)(*(long *)(unaff_x22 + 0x118) + 8))(uVar5,*(undefined8 *)(unaff_x22 + 0x110));
    func_0x0001000285a8(0x112e009e8,&UNK_10d9d5e80);
    func_0x000107c5fd2c();
    func_0x000107c615c0(uVar5);
    func_0x000107c615c0(uVar13);
    func_0x000107c615c0(uVar11);
                    /* WARNING: Could not recover jumptable at 0x000101b033e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  (**(code **)(unaff_x22 + 200))();
  if (cVar3 == '\0') {
    uVar12 = *(undefined8 *)(unaff_x22 + 0x128);
    lVar10 = *(long *)(unaff_x22 + 0x100);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xe0);
    lVar7 = *(long *)(unaff_x22 + 0xe8);
    lVar1 = *(long *)(unaff_x22 + 0xb8);
    func_0x000107c4b940(uVar12);
    *(undefined1 *)(lVar1 + 0x18) = 1;
    func_0x000107c5d278(uVar12);
    *(undefined8 *)(unaff_x22 + 0x70) = uVar13;
    *(undefined8 *)(unaff_x22 + 0x78) = 0;
    *(undefined8 *)(unaff_x22 + 0x80) = 0;
    *(undefined8 *)(unaff_x22 + 0x88) = 0;
    *(undefined1 *)(unaff_x22 + 0x90) = 2;
    *(undefined8 *)(unaff_x22 + 0x98) = param_1;
    uVar13 = 0x112e001b0;
    func_0x0001000285a8(0x112e001b0,&UNK_10d9d0938);
    func_0x000107c5fd28(uVar4,unaff_x22 + 0x70,uVar13);
    (**(code **)(lVar10 + 8))(uVar4,uVar2);
    func_0x0001000285a8(0x112e009e8,&UNK_10d9d5e80);
    func_0x000107c5fd28(uVar5);
    pcVar8 = *(code **)(lVar7 + 8);
  }
  else {
    if (cVar3 == '\x01') {
      lVar10 = *(long *)(unaff_x22 + 0xb8);
      func_0x000107c4b940(*(undefined8 *)(unaff_x22 + 0x128));
      *(undefined1 *)(lVar10 + 0x18) = 0;
      lVar7 = *(long *)(lVar10 + 0x20);
      if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x101b035c0);
        (*pcVar8)();
      }
      lVar1 = -0x60;
      uVar4 = *(undefined8 *)(unaff_x22 + 0x128);
      lVar10 = *(long *)(unaff_x22 + 0x100);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x108);
      uVar11 = *(undefined8 *)(unaff_x22 + 0xf8);
      *(long *)(*(long *)(unaff_x22 + 0xb8) + 0x20) = lVar7 + 1;
      func_0x000107c5d278(uVar4);
      *(undefined8 *)(unaff_x22 + 0x40) = uVar13;
      *(undefined8 *)(unaff_x22 + 0x48) = 0;
      *(undefined8 *)(unaff_x22 + 0x50) = 0;
      *(undefined8 *)(unaff_x22 + 0x58) = 0;
      *(undefined1 *)(unaff_x22 + 0x60) = 5;
      *(undefined8 *)(unaff_x22 + 0x68) = param_1;
    }
    else {
      lVar1 = -0x90;
      lVar10 = *(long *)(unaff_x22 + 0x100);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x108);
      uVar11 = *(undefined8 *)(unaff_x22 + 0xf8);
      *(undefined8 *)(unaff_x22 + 0x10) = uVar13;
      *(undefined8 *)(unaff_x22 + 0x18) = 0;
      *(undefined8 *)(unaff_x22 + 0x20) = 0;
      *(undefined8 *)(unaff_x22 + 0x28) = 0;
      *(undefined1 *)(unaff_x22 + 0x30) = 6;
      *(undefined8 *)(unaff_x22 + 0x38) = param_1;
    }
    uVar13 = 0x112e001b0;
    func_0x0001000285a8(0x112e001b0,&UNK_10d9d0938);
    func_0x000107c5fd28(uVar5,(long)puVar9 + lVar1,uVar13);
    pcVar8 = *(code **)(lVar10 + 8);
  }
  (*pcVar8)(uVar5,uVar11);
  plVar6 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x138) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_101b035c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar6,puVar9,*(undefined8 *)(unaff_x22 + 0x110));
  return;
}



/* Entry: 101b035c0; end: 101b03607;  */

void FUN_101b035c0(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x138));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b03608,0,0);
  return;
}



/* Entry: 101b03608; end: 101b0388f;  */

void FUN_101b03608(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  code *pcVar8;
  undefined8 *puVar9;
  long lVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar9 = (undefined8 *)(unaff_x22 + 0xa0);
  uVar13 = *puVar9;
  cVar3 = *(char *)(unaff_x22 + 0xa8);
  if (cVar3 == -1) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xf0);
    (**(code **)(*(long *)(unaff_x22 + 0x118) + 8))(uVar5,*(undefined8 *)(unaff_x22 + 0x110));
    func_0x0001000285a8(0x112e009e8,&UNK_10d9d5e80);
    func_0x000107c5fd2c();
    func_0x000107c615c0(uVar5);
    func_0x000107c615c0(uVar13);
    func_0x000107c615c0(uVar11);
                    /* WARNING: Could not recover jumptable at 0x000101b036b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  (**(code **)(unaff_x22 + 200))();
  if (cVar3 == '\0') {
    uVar12 = *(undefined8 *)(unaff_x22 + 0x128);
    lVar10 = *(long *)(unaff_x22 + 0x100);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xe0);
    lVar7 = *(long *)(unaff_x22 + 0xe8);
    lVar1 = *(long *)(unaff_x22 + 0xb8);
    func_0x000107c4b940(uVar12);
    *(undefined1 *)(lVar1 + 0x18) = 1;
    func_0x000107c5d278(uVar12);
    *(undefined8 *)(unaff_x22 + 0x70) = uVar13;
    *(undefined8 *)(unaff_x22 + 0x78) = 0;
    *(undefined8 *)(unaff_x22 + 0x80) = 0;
    *(undefined8 *)(unaff_x22 + 0x88) = 0;
    *(undefined1 *)(unaff_x22 + 0x90) = 2;
    *(undefined8 *)(unaff_x22 + 0x98) = param_1;
    uVar13 = 0x112e001b0;
    func_0x0001000285a8(0x112e001b0,&UNK_10d9d0938);
    func_0x000107c5fd28(uVar4,unaff_x22 + 0x70,uVar13);
    (**(code **)(lVar10 + 8))(uVar4,uVar2);
    func_0x0001000285a8(0x112e009e8,&UNK_10d9d5e80);
    func_0x000107c5fd28(uVar5);
    pcVar8 = *(code **)(lVar7 + 8);
  }
  else {
    if (cVar3 == '\x01') {
      lVar10 = *(long *)(unaff_x22 + 0xb8);
      func_0x000107c4b940(*(undefined8 *)(unaff_x22 + 0x128));
      *(undefined1 *)(lVar10 + 0x18) = 0;
      lVar7 = *(long *)(lVar10 + 0x20);
      if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x101b03890);
        (*pcVar8)();
      }
      lVar1 = -0x60;
      uVar4 = *(undefined8 *)(unaff_x22 + 0x128);
      lVar10 = *(long *)(unaff_x22 + 0x100);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x108);
      uVar11 = *(undefined8 *)(unaff_x22 + 0xf8);
      *(long *)(*(long *)(unaff_x22 + 0xb8) + 0x20) = lVar7 + 1;
      func_0x000107c5d278(uVar4);
      *(undefined8 *)(unaff_x22 + 0x40) = uVar13;
      *(undefined8 *)(unaff_x22 + 0x48) = 0;
      *(undefined8 *)(unaff_x22 + 0x50) = 0;
      *(undefined8 *)(unaff_x22 + 0x58) = 0;
      *(undefined1 *)(unaff_x22 + 0x60) = 5;
      *(undefined8 *)(unaff_x22 + 0x68) = param_1;
    }
    else {
      lVar1 = -0x90;
      lVar10 = *(long *)(unaff_x22 + 0x100);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x108);
      uVar11 = *(undefined8 *)(unaff_x22 + 0xf8);
      *(undefined8 *)(unaff_x22 + 0x10) = uVar13;
      *(undefined8 *)(unaff_x22 + 0x18) = 0;
      *(undefined8 *)(unaff_x22 + 0x20) = 0;
      *(undefined8 *)(unaff_x22 + 0x28) = 0;
      *(undefined1 *)(unaff_x22 + 0x30) = 6;
      *(undefined8 *)(unaff_x22 + 0x38) = param_1;
    }
    uVar13 = 0x112e001b0;
    func_0x0001000285a8(0x112e001b0,&UNK_10d9d0938);
    func_0x000107c5fd28(uVar5,(long)puVar9 + lVar1,uVar13);
    pcVar8 = *(code **)(lVar10 + 8);
  }
  (*pcVar8)(uVar5,uVar11);
  plVar6 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x138) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_101b035c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar6,puVar9,*(undefined8 *)(unaff_x22 + 0x110));
  return;
}



/* Entry: 101b03890; end: 101b038ff;  */

void FUN_101b03890(void)

{
  ulong uVar1;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  long lVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = in_x4;
  *(undefined8 *)(unaff_x22 + 0x80) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x70) = in_x3;
  lVar2 = 0x112e009f8;
  func_0x0001000285a8(0x112e009f8,&UNK_10d9d0db0);
  *(long *)(unaff_x22 + 0x88) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x90) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x98) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b03900,0,0);
  return;
}



/* Entry: 101b03900; end: 101b0397b;  */

void FUN_101b03900(void)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  func_0x0001000285a8(0x112e009b0,&UNK_10d9d0ce8);
  func_0x000107c5fd34(uVar2);
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xa0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101b0397c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar1,unaff_x22 + 0x40,*(undefined8 *)(unaff_x22 + 0x88));
  return;
}



/* Entry: 101b0397c; end: 101b03c0f;  */

void FUN_101b0397c(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101b039c4,0,0);
  return;
}



/* Entry: 101b03c10; end: 101b03e13;  */

void FUN_101b03c10(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puVar13;
  ulong uVar14;
  long unaff_x22;
  ulong uVar15;
  code *pcVar16;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
  lVar2 = *(long *)(unaff_x22 + 0x50);
  lVar7 = *(long *)(unaff_x22 + 0x58);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x48);
  lVar4 = *(long *)(unaff_x22 + 0x30);
  lVar9 = *(long *)(unaff_x22 + 0x38);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x18);
  lVar12 = 0;
  func_0x000107c5fd0c();
  pcVar16 = *(code **)(*(long *)(lVar12 + -8) + 0x38);
  (*pcVar16)(uVar6,1,1,lVar12);
  (**(code **)(lVar2 + 0x10))(uVar1,uVar11,uVar8);
  uVar14 = (ulong)*(byte *)(lVar2 + 0x50);
  uVar15 = uVar14 + 0x20 & (uVar14 ^ 0xffffffffffffffff);
  puVar13 = &UNK_1104435e0;
  func_0x000107c613fc(&UNK_1104435e0,uVar15 + lVar7,uVar14 | 7);
  *(undefined8 *)(puVar13 + 0x10) = 0;
  *(undefined8 *)(puVar13 + 0x18) = 0;
  (**(code **)(lVar2 + 0x20))(puVar13 + uVar15,uVar1,uVar8);
  FUN_101b02fc0(uVar6,&UNK_10d9d0e30,puVar13,&UNK_1104434f0,PTR___sytN_11034f1b0 + 8,&UNK_10d9d0dd0)
  ;
  func_0x000101b16f40(uVar6,0x112d453c8,&UNK_10d90ac60);
  (*pcVar16)(uVar6,1,1,lVar12);
  (**(code **)(lVar4 + 0x10))(uVar3,uVar5,uVar10);
  uVar14 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar15 = uVar14 + 0x20 & (uVar14 ^ 0xffffffffffffffff);
  puVar13 = &UNK_110443608;
  func_0x000107c613fc(&UNK_110443608,uVar15 + lVar9,uVar14 | 7);
  *(undefined8 *)(puVar13 + 0x10) = 0;
  *(undefined8 *)(puVar13 + 0x18) = 0;
  (**(code **)(lVar4 + 0x20))(puVar13 + uVar15,uVar3,uVar10);
  FUN_101b02fc0(uVar6,&UNK_10d9d0e38,puVar13,&UNK_1104434f0,PTR___sytN_11034f1b0 + 8,&UNK_10d9d0dd0)
  ;
  func_0x000101b16f40(uVar6,0x112d453c8,&UNK_10d90ac60);
  func_0x000107c615c0(uVar6);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101b03e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101b03e14; end: 101b03e7f;  */

void FUN_101b03e14(void)

{
  ulong uVar1;
  undefined8 in_x3;
  long lVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = in_x3;
  lVar2 = 0x112e00a08;
  func_0x0001000285a8(0x112e00a08,&UNK_10d9d0dc0);
  *(long *)(unaff_x22 + 0x28) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x30) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x38) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b03e80,0,0);
  return;
}



/* Entry: 101b03e80; end: 101b03efb;  */

void FUN_101b03e80(void)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x0001000285a8(0x112e009c0,&UNK_10d9d0cf8);
  func_0x000107c5fd34(uVar2);
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x40) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101b03efc;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar1,unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x28));
  return;
}



/* Entry: 101b03efc; end: 101b04043;  */

void FUN_101b03efc(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101b03f44,0,0);
  return;
}



/* Entry: 101b04044; end: 101b040cb;  */

void FUN_101b04044(void)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  func_0x0001000285a8(0x112e009b0,&UNK_10d9d0ce8);
  func_0x000107c5fd34(uVar2);
  *(undefined **)(unaff_x22 + 0x60) = PTR___swiftEmptyArrayStorage_11034f1c8;
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101b040cc;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar1,unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x48));
  return;
}



/* Entry: 101b040cc; end: 101b04113;  */

void FUN_101b040cc(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b04114,0,0);
  return;
}



/* Entry: 101b04114; end: 101b0453b;  */

void FUN_101b04114(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  code *pcVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long unaff_x22;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  uVar13 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar9 = *(ulong *)(unaff_x22 + 0x30);
  if ((~(uint)uVar9 & 0xff) == 0) {
    uVar13 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x60);
    (**(code **)(*(long *)(unaff_x22 + 0x50) + 8))(uVar13,*(undefined8 *)(unaff_x22 + 0x48));
    func_0x000107c6142c(uVar8);
    func_0x000107c615c0(uVar13);
                    /* WARNING: Could not recover jumptable at 0x000101b04194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar2 = *(long *)(unaff_x22 + 0x18);
  lVar3 = *(long *)(unaff_x22 + 0x20);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x38);
  if ((uVar9 & 0xff) == 0) {
    uVar16 = *(ulong *)(unaff_x22 + 0x60);
    lVar12 = lVar2;
    func_0x000107c614f0(lVar2);
    pcVar5 = *(code **)(lVar3 + 0x40);
    FUN_101b14570(uVar13,lVar2,lVar3,uVar10,0);
    (*pcVar5)(1,lVar12,lVar3);
    func_0x000107c615f0(lVar2);
    func_0x000107c61558();
    uVar17 = *(ulong *)(unaff_x22 + 0x60);
    uVar18 = uVar17;
    if ((uVar16 & 1) == 0) {
      uVar18 = 0;
      FUN_101b0f7d8(0,*(long *)(uVar17 + 0x10) + 1,1,uVar17);
    }
    uVar16 = *(ulong *)(uVar18 + 0x10);
    uVar17 = uVar18;
    if (*(ulong *)(uVar18 + 0x18) >> 1 <= uVar16) {
      uVar17 = (ulong)(1 < *(ulong *)(uVar18 + 0x18));
      FUN_101b0f7d8(uVar17,uVar16 + 1,1,uVar18);
    }
    *(ulong *)(uVar17 + 0x10) = uVar16 + 1;
    lVar12 = uVar17 + uVar16 * 0x10;
    *(long *)(lVar12 + 0x20) = lVar2;
    *(long *)(lVar12 + 0x28) = lVar3;
  }
  else {
    if (((uint)uVar9 & 0xff) != 1) {
      FUN_101b16460(uVar13,lVar2,lVar3,uVar10,uVar9);
      goto LAB_101b043a8;
    }
    lVar12 = *(long *)(unaff_x22 + 0x60);
    uVar18 = *(ulong *)(lVar12 + 0x10);
    if (uVar18 != 0) {
      uVar16 = 0;
      lVar14 = -0x30;
      plVar6 = (long *)(lVar12 + 0x20);
      do {
        if (*plVar6 == lVar2) {
          FUN_101b16d1c(uVar13,lVar2,lVar3,uVar10,uVar9);
          uVar11 = uVar16 + 1;
          uVar18 = *(ulong *)(lVar12 + 0x10);
          uVar17 = *(ulong *)(unaff_x22 + 0x60);
          if (uVar18 - 1 != uVar16) {
            lVar14 = -lVar14;
            do {
              if (uVar18 <= uVar11) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x101b044e4);
                (*pcVar5)();
              }
              lVar15 = ((long *)(uVar17 + lVar14))[1];
              lVar12 = *(long *)(uVar17 + lVar14);
              if (lVar12 != lVar2) {
                if (uVar11 != uVar16) {
                  if (uVar18 <= uVar16) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x101b044e8);
                    (*pcVar5)();
                  }
                  puVar4 = (undefined8 *)(uVar17 + 0x20 + uVar16 * 0x10);
                  uVar20 = puVar4[1];
                  uVar19 = *puVar4;
                  func_0x000107c615f0(uVar19);
                  func_0x000107c615f0(lVar12);
                  uVar18 = uVar17;
                  func_0x000107c61558();
                  if ((uVar18 & 1) == 0) {
                    FUN_101b11eec();
                  }
                  lVar1 = uVar17 + uVar16 * 0x10;
                  uVar7 = *(undefined8 *)(lVar1 + 0x20);
                  *(long *)(lVar1 + 0x28) = lVar15;
                  *(long *)(lVar1 + 0x20) = lVar12;
                  func_0x000107c615e8(uVar7);
                  if (*(ulong *)(uVar17 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x101b044ec);
                    (*pcVar5)();
                  }
                  uVar7 = *(undefined8 *)(uVar17 + lVar14);
                  ((undefined8 *)(uVar17 + lVar14))[1] = uVar20;
                  *(undefined8 *)(uVar17 + lVar14) = uVar19;
                  func_0x000107c615e8(uVar7);
                }
                uVar16 = uVar16 + 1;
              }
              uVar11 = uVar11 + 1;
              uVar18 = *(ulong *)(uVar17 + 0x10);
              lVar14 = lVar14 + 0x10;
            } while (uVar11 != uVar18);
          }
          goto LAB_101b04214;
        }
        uVar16 = uVar16 + 1;
        lVar14 = lVar14 + -0x10;
        plVar6 = plVar6 + 2;
      } while (uVar18 != uVar16);
    }
    FUN_101b16d1c(uVar13,lVar2,lVar3,uVar10,uVar9);
    uVar11 = *(ulong *)(lVar12 + 0x10);
    uVar17 = *(ulong *)(unaff_x22 + 0x60);
    uVar16 = uVar18;
LAB_101b04214:
    if ((long)uVar11 < (long)uVar16) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x101b04530);
      (*pcVar5)();
    }
    if ((long)uVar16 < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x101b04534);
      (*pcVar5)();
    }
    lVar12 = -(uVar11 - uVar16);
    if (SCARRY8(uVar11,lVar12)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x101b04538);
      (*pcVar5)();
    }
    uVar18 = uVar17;
    func_0x000107c61558();
    if (((uVar18 & 1) == 0) || ((long)(*(ulong *)(uVar17 + 0x18) >> 1) < (long)(uVar11 + lVar12))) {
      FUN_101b0f7d8();
      uVar17 = uVar18;
    }
    lVar14 = uVar17 + 0x20 + uVar16 * 0x10;
    uVar19 = 0x112e00998;
    func_0x0001000285a8(0x112e00998,&UNK_10d9d0ca8);
    func_0x000107c61408(lVar14,uVar11 - uVar16,uVar19);
    if (uVar11 != uVar16) {
      lVar15 = *(long *)(uVar17 + 0x10);
      func_0x000107c610b8(lVar14,uVar17 + 0x20 + uVar11 * 0x10,(lVar15 - uVar11) * 0x10);
      if (SCARRY8(lVar15,lVar12)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101b0453c);
        (*pcVar5)();
      }
      *(long *)(uVar17 + 0x10) = lVar15 + lVar12;
    }
  }
  FUN_101b16460(uVar13,lVar2,lVar3,uVar10,uVar9,uVar8);
  FUN_101b16460(uVar13,lVar2,lVar3,uVar10,uVar9,uVar8);
  *(ulong *)(unaff_x22 + 0x60) = uVar17;
LAB_101b043a8:
  plVar6 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_101b040cc;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar6,(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x48));
  return;
}



/* Entry: 101b0453c; end: 101b0455b;  */

void FUN_101b0453c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_5;
  *(undefined8 *)(unaff_x22 + 0x68) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
  *(undefined8 *)(unaff_x22 + 0x40) = param_3;
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b0455c);
  return;
}



/* Entry: 101b0455c; end: 101b04a47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b0455c(double param_1)

{
  double dVar1;
  byte bVar2;
  code *pcVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined1 uVar7;
  long lVar8;
  ulong uVar9;
  long unaff_x22;
  ulong *puVar10;
  double dVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  
  lVar8 = *(long *)(*(long *)(unaff_x22 + 0x68) + _DAT_112e00250);
  func_0x000107c4b940(*(undefined8 *)(lVar8 + 0x10));
  bVar2 = *(byte *)(lVar8 + 0x18);
  func_0x000107c5d278(*(undefined8 *)(lVar8 + 0x10));
  puVar10 = *(ulong **)(unaff_x22 + 0x40);
  if ((bVar2 & 1) == 0) {
    uVar15 = *puVar10;
    uVar5 = puVar10[1];
    dVar1 = (double)puVar10[2];
    uVar16 = puVar10[3];
    bVar2 = (byte)puVar10[4];
    (**(code **)(*(long *)(unaff_x22 + 0x68) + _DAT_112e00200))();
    dVar11 = (double)(long)((param_1 - (double)puVar10[5]) * 1000.0);
    if (0x7fefffffffffffff < (ulong)ABS(dVar11)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101b049e8);
      (*pcVar3)();
    }
    if (dVar11 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101b049ec);
      (*pcVar3)();
    }
    if (9.223372036854776e+18 <= dVar11) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101b049f0);
      (*pcVar3)();
    }
    lVar8 = *(long *)(unaff_x22 + 0x68);
    if (*(char *)(lVar8 + _DAT_112e00298) == '\x01') {
      func_0x0001000a8868(lVar8 + _DAT_112e001c0,*(undefined8 *)(lVar8 + _DAT_112e001c0 + 0x18));
      FUN_101b1b3c8(bVar2,(long)dVar11);
    }
    else {
      *(undefined1 *)(lVar8 + _DAT_112e00298) = 1;
      func_0x0001000a8868(lVar8 + _DAT_112e001c0,*(undefined8 *)(lVar8 + _DAT_112e001c0 + 0x18));
      FUN_101b1b65c(bVar2,(long)dVar11);
    }
    if (bVar2 < 4) {
      if (bVar2 < 2) {
        if (bVar2 == 0) {
          plVar4 = (long *)0x110;
          func_0x000107c615b8();
          *(long **)(unaff_x22 + 0x70) = plVar4;
          *plVar4 = unaff_x22;
          plVar4[1] = (long)FUN_101b04a48;
          lVar8 = *(long *)(unaff_x22 + 0x68);
          lVar12 = *(long *)(unaff_x22 + 0x50);
          lVar13 = *(long *)(unaff_x22 + 0x58);
          lVar6 = *(long *)(unaff_x22 + 0x48);
          plVar4[0x1f] = *(long *)(unaff_x22 + 0x60);
          plVar4[0x20] = lVar8;
          plVar4[0x1d] = lVar12;
          plVar4[0x1e] = lVar13;
          plVar4[0x1c] = uVar16;
          plVar4[0x1a] = (long)dVar1;
          plVar4[0x1b] = lVar6;
          plVar4[0x18] = uVar15;
          plVar4[0x19] = uVar5;
          pcVar3 = FUN_101b04b24;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_task_switch_110350130)(pcVar3,lVar8,0);
          return;
        }
        FUN_101b05478(uVar15,uVar5);
      }
      else {
        if (bVar2 == 2) {
          *(undefined1 *)(*(long *)(unaff_x22 + 0x68) + _DAT_112e001e8) = 1;
          plVar4 = (long *)0x400;
          func_0x000107c615b8();
          *(long **)(unaff_x22 + 0x78) = plVar4;
          *plVar4 = unaff_x22;
          plVar4[1] = 0x101b04a84;
          lVar6 = *(long *)(unaff_x22 + 0x60);
          lVar8 = *(long *)(unaff_x22 + 0x68);
          lVar13 = *(long *)(unaff_x22 + 0x50);
          lVar14 = *(long *)(unaff_x22 + 0x58);
          lVar12 = *(long *)(unaff_x22 + 0x48);
          plVar4[100] = lVar8;
          plVar4[99] = lVar6;
          plVar4[0x62] = lVar14;
          plVar4[0x61] = lVar13;
          plVar4[0x60] = uVar15;
          *(undefined1 *)((long)plVar4 + 0x51) = 1;
          plVar4[0x5f] = lVar12;
          lVar6 = 0;
          func_0x000107c5eec8();
          plVar4[0x65] = lVar6;
          lVar6 = *(long *)(lVar6 + -8);
          plVar4[0x66] = lVar6;
          uVar5 = *(long *)(lVar6 + 0x40) + 0xf;
          uVar15 = uVar5 & 0xfffffffffffffff0;
          func_0x000107c615b8();
          plVar4[0x67] = uVar15;
          uVar5 = uVar5 & 0xfffffffffffffff0;
          func_0x000107c615b8();
          plVar4[0x68] = uVar5;
          pcVar3 = FUN_101b08434;
          goto LAB_107c615e0;
        }
        FUN_101b05790(dVar1,uVar15,*(undefined8 *)(unaff_x22 + 0x48),(uint)uVar5 & 1);
      }
    }
    else if (bVar2 < 6) {
      if (bVar2 == 4) {
        lVar8 = *(long *)(*(long *)(unaff_x22 + 0x68) + _DAT_112e001c8);
        if (lVar8 != 0) {
          func_0x000107c61428(lVar8 + 0xc0,unaff_x22 + 0x10,0x21,0);
          func_0x000107c6157c(lVar8);
          uVar16 = uVar15;
          func_0x000101b0feb8();
          func_0x000107c614a8(unaff_x22 + 0x10);
          if (((uint)uVar16 & 0xff) != 2) {
            uVar7 = 1;
            if ((uVar16 & 1) == 0) {
              uVar7 = 2;
            }
            if ((((uint)uVar5 ^ (uint)uVar16) & 1) == 0) {
              uVar7 = 0;
            }
            dVar11 = (double)(long)((dVar1 - *(double *)(lVar8 + 0x80)) * 1000.0);
            if (0x7fefffffffffffff < (ulong)ABS(dVar11)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101b049f4);
              (*pcVar3)();
            }
            if (dVar11 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101b049f8);
              (*pcVar3)();
            }
            if (9.223372036854776e+18 <= dVar11) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101b049fc);
              (*pcVar3)();
            }
            lVar6 = *(long *)(unaff_x22 + 0x68) + _DAT_112e001c0;
            func_0x0001000a8868(lVar6,*(undefined8 *)(lVar6 + 0x18));
            FUN_101b186fc(uVar15,uVar7,(long)dVar11);
            func_0x000107c61428(lVar8 + 200,unaff_x22 + 0x28,0x21,0);
            uVar9 = *(ulong *)(lVar8 + 200);
            uVar5 = uVar9;
            func_0x000107c61558();
            *(ulong *)(lVar8 + 200) = uVar9;
            uVar16 = uVar9;
            if ((uVar5 & 1) == 0) {
              uVar16 = 0;
              FUN_101b0f908(0,*(long *)(uVar9 + 0x10) + 1,1,uVar9);
              *(ulong *)(lVar8 + 200) = uVar16;
            }
            uVar5 = *(ulong *)(uVar16 + 0x10);
            uVar9 = uVar16;
            if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar5) {
              uVar9 = (ulong)(1 < *(ulong *)(uVar16 + 0x18));
              FUN_101b0f908(uVar9,uVar5 + 1,1,uVar16);
            }
            *(ulong *)(uVar9 + 0x10) = uVar5 + 1;
            lVar6 = uVar9 + uVar5 * 0x18;
            *(ulong *)(lVar6 + 0x20) = uVar15;
            *(undefined1 *)(lVar6 + 0x28) = uVar7;
            *(long *)(lVar6 + 0x30) = (long)dVar11;
            *(ulong *)(lVar8 + 200) = uVar9;
            func_0x000107c614a8(unaff_x22 + 0x28);
          }
          func_0x000107c61574(lVar8);
        }
        FUN_101b064c8(dVar1,*(undefined8 *)(unaff_x22 + 0x48));
      }
      else {
        func_0x000101b075d8(uVar15);
      }
    }
    else {
      if (bVar2 != 6) {
        plVar4 = (long *)0x90;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x80) = plVar4;
        *plVar4 = unaff_x22;
        plVar4[1] = 0x101b04ac0;
        lVar8 = *(long *)(unaff_x22 + 0x68);
        lVar12 = *(long *)(unaff_x22 + 0x50);
        lVar13 = *(long *)(unaff_x22 + 0x58);
        lVar6 = *(long *)(unaff_x22 + 0x48);
        plVar4[0xf] = *(long *)(unaff_x22 + 0x60);
        plVar4[0x10] = lVar8;
        plVar4[0xd] = lVar12;
        plVar4[0xe] = lVar13;
        plVar4[0xc] = lVar6;
        pcVar3 = FUN_101b07c80;
        goto LAB_107c615e0;
      }
      puVar10 = (ulong *)(*(long *)(unaff_x22 + 0x68) + _DAT_112e002a0);
      *puVar10 = uVar15;
      *(undefined1 *)(puVar10 + 1) = 0;
      FUN_101b0c2bc();
    }
  }
  else {
    lVar8 = *(long *)(unaff_x22 + 0x68) + _DAT_112e001c0;
    func_0x0001000a8868(lVar8,*(undefined8 *)(lVar8 + 0x18));
    FUN_101b1b80c((char)puVar10[4]);
  }
                    /* WARNING: Could not recover jumptable at 0x000101b045e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101b04a48; end: 101b04afb;  */

void FUN_101b04a48(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x000101b04a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101b04afc; end: 101b04b23;  */

void FUN_101b04afc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xf8) = param_8;
  *(undefined8 *)(unaff_x22 + 0x100) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xe8) = param_2;
  *(undefined8 *)(unaff_x22 + 0xf0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xe0) = param_1;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_6;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_7;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_4;
  *(undefined8 *)(unaff_x22 + 200) = param_5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b04b24);
  return;
}



/* Entry: 101b04b24; end: 101b05283;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b04b24(void)

{
  byte bVar1;
  code *pcVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long unaff_x22;
  long lVar16;
  long lVar17;
  double dVar18;
  
  lVar16 = _DAT_112e00258;
  lVar17 = *(long *)(unaff_x22 + 0x100);
  uVar6 = unaff_x22 + 0x48;
  func_0x000107c61428(lVar17 + _DAT_112e00258,uVar6,0,0);
  lVar13 = *(long *)(lVar17 + lVar16);
  if (*(long *)(lVar13 + 0x10) != 0) {
    lVar10 = *(long *)(unaff_x22 + 0xc0);
    func_0x000107c61434(lVar13);
    func_0x000101b0fc0c();
    lVar11 = lVar13;
    if ((uVar6 & 1) != 0) {
      lVar11 = *(long *)(*(long *)(lVar13 + 0x38) + lVar10 * 8);
      func_0x000107c61434(lVar11);
      func_0x000107c6142c(lVar13);
      if (*(long *)(lVar11 + 0x10) != 0) {
        uVar7 = *(undefined8 *)(unaff_x22 + 200);
        lVar13 = *(long *)(unaff_x22 + 0xd0);
        uVar8 = *(undefined8 *)(lVar11 + 0x20);
        lVar10 = *(long *)(lVar11 + 0x28);
        func_0x000107c615f0(uVar8);
        func_0x000107c6142c(lVar11);
        func_0x000107c614f0(uVar7);
        uVar15 = uVar8;
        func_0x000107c614f0(uVar8);
        uVar3 = (uint)uVar15;
        (**(code **)(lVar10 + 0x28))();
        (**(code **)(lVar13 + 0x40))(uVar3 & 1,uVar7,lVar13);
        func_0x000107c615e8(uVar8);
        goto LAB_101b04c20;
      }
    }
    func_0x000107c6142c(lVar11);
  }
LAB_101b04c20:
  uVar12 = *(ulong *)(unaff_x22 + 0xc0);
  uVar6 = unaff_x22 + 0x60;
  func_0x000107c61428(lVar17 + lVar16,uVar6,0x21,0);
  uVar4 = *(ulong *)(lVar17 + lVar16);
  func_0x000107c61558();
  lVar11 = *(long *)(lVar17 + lVar16);
  *(undefined8 *)(lVar17 + lVar16) = 0x8000000000000000;
  func_0x000101b0fc0c();
  uVar9 = (ulong)~(uint)uVar6 & 1;
  lVar13 = *(long *)(lVar11 + 0x10) + uVar9;
  if (SCARRY8(*(long *)(lVar11 + 0x10),uVar9)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101b051c4);
    (*pcVar2)();
  }
  if (*(long *)(lVar11 + 0x18) < lVar13) {
    uVar12 = *(ulong *)(unaff_x22 + 0xc0);
    FUN_101b11478(lVar13,uVar4,0x112e00190,&UNK_10d9d0c30);
    uVar3 = (uint)uVar4;
    func_0x000101b0fc0c();
    if (((uint)uVar6 & 1) != (uVar3 & 1)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb9b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF_11034edd0)
                (&UNK_1106b5710);
      return;
    }
  }
  else if ((uVar4 & 1) == 0) {
    FUN_101b109f4(0x112e00190,&UNK_10d9d0c30);
  }
  *(long *)(lVar17 + lVar16) = lVar11;
  if ((uVar6 & 1) == 0) {
    uVar7 = *(undefined8 *)(unaff_x22 + 0xc0);
    lVar16 = lVar11 + (uVar12 >> 6) * 8;
    *(ulong *)(lVar16 + 0x40) = *(ulong *)(lVar16 + 0x40) | 1L << (uVar12 & 0x3f);
    *(undefined8 *)(*(long *)(lVar11 + 0x30) + uVar12 * 8) = uVar7;
    *(undefined **)(*(long *)(lVar11 + 0x38) + uVar12 * 8) = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (SCARRY8(*(long *)(lVar11 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101b0521c);
      (*pcVar2)();
    }
    *(long *)(lVar11 + 0x10) = *(long *)(lVar11 + 0x10) + 1;
  }
  lVar16 = *(long *)(lVar11 + 0x38);
  uVar9 = *(ulong *)(lVar16 + uVar12 * 8);
  uVar6 = uVar9;
  func_0x000107c61558();
  *(ulong *)(lVar16 + uVar12 * 8) = uVar9;
  uVar4 = uVar9;
  if ((uVar6 & 1) == 0) {
    uVar4 = 0;
    FUN_101b0f7d8(0,*(long *)(uVar9 + 0x10) + 1,1,uVar9);
    *(ulong *)(lVar16 + uVar12 * 8) = uVar4;
  }
  uVar6 = *(ulong *)(uVar4 + 0x10);
  uVar9 = uVar4;
  if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar6) {
    uVar9 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
    FUN_101b0f7d8(uVar9,uVar6 + 1,1,uVar4);
    *(ulong *)(lVar16 + uVar12 * 8) = uVar9;
  }
  lVar11 = *(long *)(unaff_x22 + 0x100);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xc0);
  lVar16 = uVar9 + uVar6 * 0x10;
  uVar15 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar8 = *(undefined8 *)(unaff_x22 + 200);
  *(ulong *)(uVar9 + 0x10) = uVar6 + 1;
  *(undefined8 *)(lVar16 + 0x28) = uVar15;
  *(undefined8 *)(lVar16 + 0x20) = uVar8;
  func_0x000107c614a8(unaff_x22 + 0x60);
  lVar16 = lVar11 + _DAT_112e001c0;
  func_0x0001000a8868(lVar16,*(undefined8 *)(lVar16 + 0x18));
  func_0x000107c615f0(uVar8);
  FUN_101b1b270(uVar7);
  lVar13 = _DAT_112e00210;
  uVar6 = unaff_x22 + 0x78;
  func_0x000107c61428(lVar11 + _DAT_112e00210,uVar6,0,0);
  lVar17 = *(long *)(lVar11 + lVar13);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_101b04e30:
    lVar17 = *(long *)(unaff_x22 + 0x100);
    dVar18 = *(double *)(unaff_x22 + 0xe0);
    uVar15 = *(undefined8 *)(unaff_x22 + 0xc0);
    func_0x000107c61428(lVar11 + lVar13,unaff_x22 + 0x90,0x21,0);
    uVar7 = *(undefined8 *)(lVar11 + lVar13);
    func_0x000107c61558(uVar7);
    uVar8 = *(undefined8 *)(lVar11 + lVar13);
    *(undefined8 *)(lVar11 + lVar13) = 0x8000000000000000;
    FUN_101b1047c(dVar18,uVar15,uVar7);
    *(undefined8 *)(lVar11 + lVar13) = uVar8;
    func_0x000107c614a8(unaff_x22 + 0x90);
    dVar18 = (double)(long)((dVar18 - *(double *)(lVar17 + _DAT_112e00278)) * 1000.0);
    if (0x7fefffffffffffff < (ulong)ABS(dVar18)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101b05210);
      (*pcVar2)();
    }
    if (dVar18 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101b05214);
      (*pcVar2)();
    }
    if (9.223372036854776e+18 <= dVar18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101b05218);
      (*pcVar2)();
    }
    lVar17 = *(long *)(unaff_x22 + 0x100);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xc0);
    func_0x0001000a8868(lVar16,*(undefined8 *)(lVar16 + 0x18));
    FUN_101b1aca8(uVar7,(long)dVar18,(*(byte *)(lVar17 + _DAT_112e00280) ^ 0xff) & 1);
    lVar16 = *(long *)(lVar17 + _DAT_112e001c8);
    if (lVar16 != 0) {
      func_0x000107c61428(lVar16 + 0xe8,unaff_x22 + 0xa8,0x21,0);
      uVar12 = *(ulong *)(lVar16 + 0xe8);
      func_0x000107c6157c(lVar16);
      uVar6 = uVar12;
      func_0x000107c61558();
      *(ulong *)(lVar16 + 0xe8) = uVar12;
      uVar4 = uVar12;
      if ((uVar6 & 1) == 0) {
        uVar4 = 0;
        func_0x000101b0f6d4(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12,0x112e009a0,&UNK_10d9d0cb0);
        *(ulong *)(lVar16 + 0xe8) = uVar4;
      }
      uVar6 = *(ulong *)(uVar4 + 0x10);
      uVar12 = uVar4;
      if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar6) {
        uVar12 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
        func_0x000101b0f6d4(uVar12,uVar6 + 1,1,uVar4,0x112e009a0,&UNK_10d9d0cb0);
      }
      uVar7 = *(undefined8 *)(unaff_x22 + 0xc0);
      *(ulong *)(uVar12 + 0x10) = uVar6 + 1;
      lVar17 = uVar12 + uVar6 * 0x10;
      *(undefined8 *)(lVar17 + 0x20) = uVar7;
      *(long *)(lVar17 + 0x28) = (long)dVar18;
      *(ulong *)(lVar16 + 0xe8) = uVar12;
      func_0x000107c614a8(unaff_x22 + 0xa8);
      func_0x000107c61574(lVar16);
    }
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x22 + 0xc0);
    func_0x000107c61434(lVar17);
    func_0x000101b0fc0c(uVar7);
    func_0x000107c6142c(lVar17);
    if ((uVar6 & 1) == 0) goto LAB_101b04e30;
  }
  lVar17 = *(long *)(unaff_x22 + 0x100);
  bVar1 = *(byte *)(lVar17 + _DAT_112e001d0);
  *(byte *)(unaff_x22 + 0x41) = bVar1;
  lVar16 = _DAT_112e00280;
  if ((*(byte *)(lVar17 + _DAT_112e00280) & 1) != 0) goto joined_r0x000101b05160;
  lVar14 = *(long *)(unaff_x22 + 0xd8);
  lVar10 = *(long *)(lVar14 + 8);
  uVar6 = unaff_x22 + 0x10;
  FUN_101b14780(lVar14);
  FUN_101b142fc();
  func_0x000101b147bc(lVar14);
  uVar4 = *(ulong *)(lVar11 + lVar13);
  if (*(long *)(lVar10 + 0x10) == 1) {
    func_0x000107c61434(uVar4);
    lVar13 = lVar10;
    FUN_101b05334(lVar10);
    if (((uint)uVar6 & 0xff) == 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101b05284);
      (*pcVar2)();
    }
    if (*(long *)(uVar4 + 0x10) == 0) {
      func_0x000107c6142c(lVar10);
      func_0x000107c6142c(uVar4);
    }
    else {
      func_0x000107c61434(uVar4);
      func_0x000101b0fc0c(lVar13);
      func_0x000107c61430(uVar4,2);
      func_0x000107c6142c(lVar10);
      if ((uVar6 & 1) != 0) goto LAB_101b05084;
    }
LAB_101b0515c:
    bVar1 = *(byte *)(unaff_x22 + 0x41) & 1;
joined_r0x000101b05160:
    if (bVar1 != 0) {
      uVar6 = *(ulong *)(unaff_x22 + 200);
      lVar16 = *(long *)(unaff_x22 + 0xd0);
      func_0x000107c614f0();
      (**(code **)(lVar16 + 0x20))();
      if ((uVar6 & 1) != 0) {
        FUN_101b05790(*(undefined8 *)(unaff_x22 + 0xe0),*(undefined8 *)(unaff_x22 + 0xc0),
                      *(undefined8 *)(unaff_x22 + 0xd8),1);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000101b051bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  if (*(long *)(lVar10 + 0x10) == 0) {
    func_0x000107c6142c(lVar10);
  }
  else {
    uVar6 = uVar4;
    func_0x000107c61434();
    FUN_101b0fd0c();
    func_0x000107c6142c(lVar10);
    func_0x000107c6142c(uVar4);
    if ((uVar6 & 1) == 0) goto LAB_101b0515c;
  }
LAB_101b05084:
  if ((*(byte *)(lVar17 + lVar16) & 1) == 0) {
    lVar13 = *(long *)(unaff_x22 + 0x100);
    *(undefined1 *)(lVar17 + lVar16) = 1;
    plVar5 = (long *)(lVar13 + _DAT_112e00288);
    if ((char)plVar5[1] != '\x01') {
      lVar14 = *plVar5;
      *plVar5 = 0;
      *(undefined1 *)(plVar5 + 1) = 1;
      plVar5 = (long *)0x400;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x108) = plVar5;
      *plVar5 = unaff_x22;
      plVar5[1] = (long)FUN_101b05284;
      lVar16 = *(long *)(unaff_x22 + 0xf8);
      lVar13 = *(long *)(unaff_x22 + 0x100);
      lVar11 = *(long *)(unaff_x22 + 0xe8);
      lVar10 = *(long *)(unaff_x22 + 0xf0);
      lVar17 = *(long *)(unaff_x22 + 0xd8);
      plVar5[100] = lVar13;
      plVar5[99] = lVar16;
      plVar5[0x62] = lVar10;
      plVar5[0x61] = lVar11;
      plVar5[0x60] = lVar14;
      *(undefined1 *)((long)plVar5 + 0x51) = 0;
      plVar5[0x5f] = lVar17;
      lVar16 = 0;
      func_0x000107c5eec8();
      plVar5[0x65] = lVar16;
      lVar16 = *(long *)(lVar16 + -8);
      plVar5[0x66] = lVar16;
      uVar6 = *(long *)(lVar16 + 0x40) + 0xf;
      uVar4 = uVar6 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar5[0x67] = uVar4;
      uVar6 = uVar6 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar5[0x68] = uVar6;
      pcVar2 = FUN_101b08434;
      goto LAB_107c615e0;
    }
  }
  lVar13 = *(long *)(unaff_x22 + 0x100);
  pcVar2 = FUN_101b052cc;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,lVar13,0);
  return;
}



/* Entry: 101b05284; end: 101b052cb;  */

void FUN_101b05284(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x108));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b052cc,*(undefined8 *)(lVar1 + 0x100),0);
  return;
}



/* Entry: 101b052cc; end: 101b05333;  */

void FUN_101b052cc(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x41) == '\x01') {
    uVar2 = *(ulong *)(unaff_x22 + 200);
    lVar1 = *(long *)(unaff_x22 + 0xd0);
    func_0x000107c614f0();
    (**(code **)(lVar1 + 0x20))();
    if ((uVar2 & 1) != 0) {
      FUN_101b05790(*(undefined8 *)(unaff_x22 + 0xe0),*(undefined8 *)(unaff_x22 + 0xc0),
                    *(undefined8 *)(unaff_x22 + 0xd8),1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000101b05330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101b05334; end: 101b05397;  */

void FUN_101b05334(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x38;
  func_0x000107c60268(lVar1,~(-1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)));
  if (lVar1 != 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)) {
    FUN_101b14144();
  }
  return;
}



/* Entry: 101b05398; end: 101b05477;  */

void FUN_101b05398(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  
  if (param_1 == 0) {
    lVar2 = *unaff_x20;
    uVar3 = param_2;
    func_0x000107c61434(lVar2);
    func_0x000101b0fc0c();
    func_0x000107c6142c(lVar2);
    if ((uVar3 & 1) != 0) {
      iVar1 = (int)*unaff_x20;
      func_0x000107c61558();
      lVar2 = *unaff_x20;
      if (iVar1 == 0) {
        FUN_101b109f4(0x112e00190,&UNK_10d9d0c30);
      }
      func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar2 + 0x38) + param_2 * 8));
      func_0x000101b11b00(param_2,lVar2);
      *unaff_x20 = lVar2;
    }
  }
  else {
    lVar2 = *unaff_x20;
    func_0x000107c61558(lVar2);
    lVar4 = *unaff_x20;
    func_0x000101b1007c(param_1,param_2,lVar2);
    *unaff_x20 = lVar4;
  }
  return;
}



/* Entry: 101b05478; end: 101b05673;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b05478(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  code *pcVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [24];
  
  lVar1 = _DAT_112e00258;
  puVar5 = auStack_68;
  func_0x000107c61428(unaff_x20 + _DAT_112e00258,puVar5,0,0);
  lVar9 = *(long *)(unaff_x20 + lVar1);
  if (*(long *)(lVar9 + 0x10) != 0) {
    func_0x000107c61434(lVar9);
    plVar2 = param_1;
    func_0x000101b0fc0c();
    lVar8 = lVar9;
    if (((ulong)puVar5 & 1) != 0) {
      lVar8 = *(long *)(*(long *)(lVar9 + 0x38) + (long)plVar2 * 8);
      func_0x000107c61434(lVar8);
      func_0x000107c6142c(lVar9);
      if (*(long *)(lVar8 + 0x10) != 0) {
        lVar9 = 0;
        lVar7 = 0x20;
        do {
          if (*(long *)(lVar8 + lVar7) == param_2) {
            func_0x000107c6142c(lVar8);
            pcVar3 = (code *)auStack_88;
            func_0x000101afabf8();
            pcVar4 = (code *)auStack_a8;
            plVar2 = param_1;
            FUN_101b05674();
            if (*plVar2 == 0) {
              (*pcVar4)(auStack_a8,0);
              uVar6 = 0;
              (*pcVar3)(auStack_88);
            }
            else {
              FUN_101b05708(lVar9);
              (*pcVar4)(auStack_a8,0);
              uVar6 = 0;
              (*pcVar3)(auStack_88);
              func_0x000107c615e8(lVar9);
            }
            lVar9 = *(long *)(unaff_x20 + lVar1);
            if (*(long *)(lVar9 + 0x10) != 0) {
              func_0x000107c61434(lVar9);
              plVar2 = param_1;
              func_0x000101b0fc0c();
              if ((uVar6 & 1) == 0) {
                func_0x000107c6142c(lVar9);
              }
              else {
                lVar8 = *(long *)(*(long *)(lVar9 + 0x38) + (long)plVar2 * 8);
                func_0x000107c61434(lVar8);
                func_0x000107c6142c(lVar9);
                lVar9 = *(long *)(lVar8 + 0x10);
                func_0x000107c6142c(lVar8);
                if (lVar9 == 0) {
                  func_0x000107c61428(unaff_x20 + lVar1,auStack_88,0x21,0);
                  FUN_101b05398(0,param_1);
                  func_0x000107c614a8(auStack_88);
                }
              }
            }
            func_0x0001000a8868(unaff_x20 + _DAT_112e001c0,
                                *(undefined8 *)(unaff_x20 + _DAT_112e001c0 + 0x18));
            func_0x000101b1b27c(param_1);
            return;
          }
          lVar9 = lVar9 + 1;
          lVar7 = lVar7 + 0x10;
        } while (*(long *)(lVar8 + 0x10) != lVar9);
      }
    }
    func_0x000107c6142c(lVar8);
  }
  return;
}



/* Entry: 101b05674; end: 101b056d7;  */

code * FUN_101b05674(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x28;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x28,0x5d77);
  }
  *param_1 = lVar1;
  lVar2 = lVar1;
  FUN_101b11e28();
  *(long *)(lVar1 + 0x20) = lVar2;
  return FUN_101b056d8;
}



/* Entry: 101b056d8; end: 101b05707;  */

void FUN_101b056d8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  (**(code **)(lVar1 + 0x20))(lVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 101b05708; end: 101b0578f;  */

undefined1  [16] FUN_101b05708(ulong param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  ulong uVar4;
  undefined1 (*pauVar5) [16];
  ulong uVar6;
  ulong *unaff_x20;
  long lVar7;
  
  uVar6 = *unaff_x20;
  uVar4 = uVar6;
  func_0x000107c61558();
  if ((uVar4 & 1) == 0) {
    FUN_101b11eec();
  }
  if (param_1 < *(ulong *)(uVar6 + 0x10)) {
    lVar7 = *(ulong *)(uVar6 + 0x10) - 1;
    lVar1 = uVar6 + param_1 * 0x10;
    pauVar5 = (undefined1 (*) [16])(lVar1 + 0x20);
    auVar2 = *pauVar5;
    func_0x000107c610b8(pauVar5,lVar1 + 0x30,(lVar7 - param_1) * 0x10);
    *(long *)(uVar6 + 0x10) = lVar7;
    *unaff_x20 = uVar6;
    return auVar2;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101b05790);
  (*pcVar3)();
}



/* Entry: 101b05790; end: 101b06297;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b05790(double param_1,ulong param_2,long *param_3,byte param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  uint uVar7;
  undefined1 *puVar8;
  long *plVar9;
  ulong *puVar10;
  int *piVar11;
  long unaff_x20;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  ulong uVar17;
  undefined1 uVar18;
  ulong uVar19;
  bool bVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  int iStack_178;
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined8 auStack_120 [3];
  undefined1 auStack_108 [24];
  ulong uStack_f0;
  byte bStack_e8;
  undefined1 uStack_e7;
  long lStack_e0;
  byte bStack_d8;
  undefined1 uStack_d7;
  ulong uStack_d0;
  undefined1 uStack_c8;
  long lStack_c0;
  undefined1 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  double dStack_a0;
  undefined8 uStack_98;
  double dStack_90;
  
  lVar12 = _DAT_112e00258;
  puVar8 = auStack_108;
  dVar26 = param_1;
  func_0x000107c61428(unaff_x20 + _DAT_112e00258,puVar8,0,0);
  lVar12 = *(long *)(unaff_x20 + lVar12);
  if (*(long *)(lVar12 + 0x10) == 0) {
    return;
  }
  func_0x000107c61434(lVar12);
  uVar4 = param_2;
  func_0x000101b0fc0c();
  lVar21 = lVar12;
  if (((ulong)puVar8 & 1) == 0) {
LAB_101b058b4:
    func_0x000107c6142c(lVar21);
    return;
  }
  lVar21 = *(long *)(*(long *)(lVar12 + 0x38) + uVar4 * 8);
  func_0x000107c61434(lVar21);
  func_0x000107c6142c(lVar12);
  if ((*(byte *)(unaff_x20 + _DAT_112e001d0) & 1) == 0) goto LAB_101b058b4;
  uVar4 = param_2;
  plVar9 = param_3;
  func_0x000101b0e614();
  lVar12 = _DAT_112e00238;
  uVar7 = (uint)plVar9;
  if ((param_4 & 1) == 0) {
    lVar12 = *(long *)(unaff_x20 + _DAT_112e001c8);
    if (lVar12 == 0) {
      func_0x000107c6142c(lVar21);
      uVar18 = 0;
    }
    else {
      puVar10 = &uStack_f0;
      func_0x000107c61428(lVar12 + 0xd8,puVar10,0x20,0);
      lVar25 = *(long *)(lVar12 + 0xd8);
      lVar23 = *(long *)(lVar25 + 0x10);
      func_0x000107c6157c(lVar12);
      if (lVar23 != 0) {
        func_0x000107c61434(lVar25);
        uVar17 = param_2;
        func_0x000101b0fc0c();
        if (((ulong)puVar10 & 1) != 0) {
          uVar13 = *(undefined8 *)(*(long *)(lVar25 + 0x38) + uVar17 * 0x10);
          func_0x000107c61434(uVar13);
          func_0x000107c614a8(&uStack_f0);
          func_0x000107c6142c(uVar13);
          func_0x000107c6142c(lVar25);
          lVar25 = *(long *)(lVar21 + 0x10);
          uVar17 = 0xffffffffffffffff;
          plVar5 = (long *)(lVar21 + 0x28);
          do {
            if (uVar17 - lVar25 == -1) {
              func_0x000107c6142c(lVar21);
              plVar5 = (long *)(unaff_x20 + _DAT_112e00230);
              func_0x0001000a8868(plVar5,plVar5[3]);
              lVar21 = *plVar5;
              func_0x000107c4b940(*(undefined8 *)(lVar21 + 0x20));
              dVar27 = *(double *)(lVar21 + 0x28);
              dVar28 = 0.0;
              if (*(char *)(lVar21 + 0x38) != '\x01') {
                dVar28 = *(double *)(lVar21 + 0x30);
                (**(code **)(lVar21 + 0x10))();
                dVar28 = dVar26 - dVar28;
                if (dVar28 < 0.0) {
                  dVar28 = 0.0;
                }
              }
              func_0x000107c5d278(*(undefined8 *)(lVar21 + 0x20));
              puVar10 = &uStack_f0;
              func_0x000107c61428(lVar12 + 0xd8,puVar10,0x21,0);
              uVar13 = *(undefined8 *)(lVar12 + 0xd8);
              func_0x000107c61434(uVar13);
              uVar17 = param_2;
              func_0x000101b0fc0c();
              func_0x000107c6142c(uVar13);
              if (((ulong)puVar10 & 1) == 0) {
                func_0x000107c614a8(&uStack_f0);
                func_0x000107c61574(lVar12);
                goto LAB_101b05e58;
              }
              dVar27 = dVar27 + dVar28;
              iVar3 = (int)*(undefined8 *)(lVar12 + 0xd8);
              func_0x000107c61558();
              uStack_b0 = *(ulong *)(lVar12 + 0xd8);
              *(undefined8 *)(lVar12 + 0xd8) = 0x8000000000000000;
              if (iVar3 == 0) {
                FUN_101b106e4();
              }
              uVar19 = uStack_b0;
              puVar1 = (undefined8 *)(*(long *)(uStack_b0 + 0x38) + uVar17 * 0x10);
              uVar22 = *puVar1;
              dVar26 = (double)puVar1[1];
              func_0x000101b11c94(uVar17,uStack_b0);
              *(ulong *)(lVar12 + 0xd8) = uVar19;
              func_0x000107c614a8(&uStack_f0);
              uStack_98 = 3;
              uStack_b0 = param_2;
              uStack_a8 = uVar22;
              dStack_a0 = dVar26;
              dStack_90 = dVar27;
              func_0x000107c61428(lVar12 + 0xe0,&uStack_f0,0x21,0);
              func_0x000107c61434(uVar22);
              uVar13 = *(undefined8 *)(lVar12 + 0xe0);
              func_0x000107c61558(uVar13);
              auStack_120[0] = *(undefined8 *)(lVar12 + 0xe0);
              *(undefined8 *)(lVar12 + 0xe0) = 0x8000000000000000;
              uVar17 = param_2;
              FUN_101b1031c(&uStack_b0,param_2,uVar13);
              *(undefined8 *)(lVar12 + 0xe0) = auStack_120[0];
              func_0x000107c614a8(&uStack_f0);
              func_0x000107c6142c(uVar22);
              lVar21 = *(long *)(lVar12 + 0xe0);
              if (*(long *)(lVar21 + 0x10) == 0) {
                uVar13 = 0;
                bVar20 = true;
              }
              else {
                func_0x000107c61434(lVar21);
                uVar19 = param_2;
                func_0x000101b0fc0c();
                if ((uVar17 & 1) == 0) {
                  uVar13 = 0;
                  bVar20 = true;
                  lVar25 = lVar21;
                }
                else {
                  lVar25 = *(long *)(*(long *)(lVar21 + 0x38) + uVar19 * 0x28 + 8);
                  func_0x000107c61434(lVar25);
                  func_0x000107c6142c(lVar21);
                  bVar20 = *(long *)(lVar25 + 0x10) == 0;
                  if (bVar20) {
                    uVar13 = 0;
                  }
                  else {
                    uVar13 = *(undefined8 *)(lVar25 + 0x20);
                  }
                }
                func_0x000107c6142c(lVar25);
              }
              func_0x0001000a8868(unaff_x20 + _DAT_112e001c0,
                                  *(undefined8 *)(unaff_x20 + _DAT_112e001c0 + 0x18));
              FUN_101b18134(dVar27 - dVar26,param_2,3,uVar13,bVar20);
              func_0x000107c61574(lVar12);
              goto LAB_101b05a90;
            }
            uVar17 = uVar17 + 1;
            if (*(ulong *)(lVar21 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x101b06238);
              (*pcVar2)();
            }
            uVar19 = plVar5[-1];
            lVar23 = *plVar5;
            uVar24 = uVar19;
            func_0x000107c614f0();
            pcVar2 = *(code **)(lVar23 + 0x20);
            func_0x000107c615f0(uVar19);
            (*pcVar2)(uVar24,lVar23);
            func_0x000107c615e8(uVar19);
            plVar5 = plVar5 + 2;
          } while ((uVar24 & 1) == 0);
          func_0x000107c61574(lVar12);
          func_0x000107c6142c(lVar21);
LAB_101b05e58:
          uVar18 = 0;
          goto LAB_101b05e60;
        }
        func_0x000107c6142c(lVar25);
      }
      func_0x000107c614a8(&uStack_f0);
      func_0x000107c61574(lVar12);
      func_0x000107c6142c(lVar21);
LAB_101b05a90:
      uVar18 = 0;
    }
    goto LAB_101b05e60;
  }
  func_0x000107c61428(unaff_x20 + _DAT_112e00238,&uStack_b0,0,0);
  uVar13 = *(undefined8 *)(unaff_x20 + lVar12);
  func_0x000107c61434(uVar13);
  uVar17 = param_2;
  FUN_101b06298(param_2,uVar13);
  func_0x000107c6142c(uVar13);
  lVar25 = _DAT_112e001c8;
  if ((uVar17 & 1) != 0) {
    func_0x000107c6142c(lVar21);
    uVar18 = 7;
    goto LAB_101b05e60;
  }
  lVar23 = *(long *)(unaff_x20 + _DAT_112e001c8);
  if (lVar23 != 0) {
    puVar10 = &uStack_f0;
    func_0x000107c61428(lVar23 + 0xd8,puVar10,0x20,0);
    lVar14 = *(long *)(lVar23 + 0xd8);
    lVar16 = *(long *)(lVar14 + 0x10);
    func_0x000107c6157c(lVar23);
    if (lVar16 != 0) {
      func_0x000107c61434(lVar14);
      uVar17 = param_2;
      func_0x000101b0fc0c();
      if (((ulong)puVar10 & 1) != 0) {
        uVar13 = *(undefined8 *)(*(long *)(lVar14 + 0x38) + uVar17 * 0x10);
        func_0x000107c61434(uVar13);
        func_0x000107c614a8(&uStack_f0);
        func_0x000107c6142c(lVar21);
        func_0x000107c6142c(uVar13);
        func_0x000107c61574(lVar23);
        func_0x000107c6142c(lVar14);
        uVar18 = 5;
        goto LAB_101b05e60;
      }
      func_0x000107c6142c(lVar14);
    }
    func_0x000107c614a8(&uStack_f0);
    func_0x000107c61574(lVar23);
  }
  uVar17 = 0;
  uVar19 = *(ulong *)(lVar21 + 0x10);
  plVar5 = (long *)(lVar21 + 0x28);
  do {
    if (uVar19 == uVar17) {
      func_0x000107c6142c(lVar21);
      uVar18 = 8;
      goto LAB_101b05e60;
    }
    if (*(ulong *)(lVar21 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101b06230);
      (*pcVar2)();
    }
    uVar17 = uVar17 + 1;
    uVar24 = plVar5[-1];
    lVar23 = *plVar5;
    uVar6 = uVar24;
    func_0x000107c614f0();
    pcVar2 = *(code **)(lVar23 + 0x20);
    func_0x000107c615f0(uVar24);
    (*pcVar2)(uVar6,lVar23);
    func_0x000107c615e8(uVar24);
    plVar5 = plVar5 + 2;
  } while ((uVar6 & 1) == 0);
  uVar17 = param_2;
  func_0x000101b0e2b4(param_2,param_3);
  if (*(long *)(lVar21 + 0x10) == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101b06284);
    (*pcVar2)();
  }
  uVar24 = *(ulong *)(lVar21 + 0x20);
  lVar23 = *(long *)(lVar21 + 0x28);
  uVar6 = uVar24;
  func_0x000107c614f0();
  pcVar2 = *(code **)(lVar23 + 0x10);
  func_0x000107c615f0(uVar24);
  (*pcVar2)(uVar6,lVar23);
  func_0x000107c615e8(uVar24);
  piVar11 = (int *)(param_3[1] + 0x20);
  lVar23 = *(long *)(param_3[1] + 0x10);
  do {
    lVar14 = lVar23;
    if (lVar14 == 0) break;
    iVar3 = *piVar11;
    piVar11 = piVar11 + 2;
    lVar23 = lVar14 + -1;
  } while (iVar3 != (int)param_2);
  if ((uVar6 & 1) == 0) {
    lVar23 = *(long *)(*(long *)(unaff_x20 + lVar12) + 0x10);
    if (SBORROW8(*param_3,lVar23)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101b06288);
      (*pcVar2)();
    }
    if (*param_3 - lVar23 < 1) {
      if (lVar14 == 0) goto LAB_101b06090;
      if ((uVar7 & 0xff) == 1) {
        func_0x000107c6142c(uVar17);
        func_0x000107c6142c(lVar21);
        uVar18 = 1;
        goto LAB_101b05e60;
      }
      lVar25 = *(long *)(unaff_x20 + lVar25);
      if ((lVar25 != 0) &&
         (func_0x000107c61428(lVar25 + 0xd0,auStack_150,0,0),
         *(long *)(*(long *)(lVar25 + 0xd0) + 0x10) < param_3[5])) {
        if (*(long *)(uVar17 + 0x10) != 0) {
          func_0x000107c61580(lVar25,2);
          func_0x000107c6142c(lVar21);
          func_0x000107c61428(lVar25 + 0xd8,&uStack_f0,0x21,0);
          func_0x000107c61434(uVar17);
          uVar13 = *(undefined8 *)(lVar25 + 0xd8);
          func_0x000107c61558(uVar13);
          auStack_120[0] = *(undefined8 *)(lVar25 + 0xd8);
          *(undefined8 *)(lVar25 + 0xd8) = 0x8000000000000000;
          FUN_101b101d0(param_1,uVar17,param_2,uVar13);
          *(undefined8 *)(lVar25 + 0xd8) = auStack_120[0];
          func_0x000107c614a8(&uStack_f0);
          if (*(long *)(uVar17 + 0x10) == 0) {
            func_0x000107c6142c(uVar17);
          }
          else {
            uVar13 = *(undefined8 *)(uVar17 + 0x20);
            func_0x000107c6142c(uVar17);
            func_0x0001000a8868(unaff_x20 + _DAT_112e001c0,
                                *(undefined8 *)(unaff_x20 + _DAT_112e001c0 + 0x18));
            FUN_101b17efc(param_2,uVar13);
          }
          func_0x000107c61574(lVar25);
          func_0x000101b15c40(lVar25);
          uVar18 = 5;
          goto LAB_101b05e60;
        }
        FUN_101b06354(param_1,param_2);
        iStack_178 = 2;
        goto LAB_101b05d9c;
      }
      func_0x000107c6142c(uVar17);
      func_0x000107c6142c(lVar21);
    }
    else {
      if (lVar14 != 0) {
        iStack_178 = 1;
        goto LAB_101b05d9c;
      }
LAB_101b06090:
      func_0x000107c6142c(uVar17);
      func_0x000107c6142c(lVar21);
      if ((uVar7 & 0xff) == 1) {
        uVar18 = 1;
        goto LAB_101b05e60;
      }
    }
    uVar18 = 2;
  }
  else {
    iStack_178 = 0;
LAB_101b05d9c:
    func_0x000107c61428(unaff_x20 + lVar12,&uStack_f0,0x21,0);
    FUN_101b0edec(auStack_120,param_2);
    func_0x000107c614a8(&uStack_f0);
    uVar24 = 0;
    plVar5 = (long *)(lVar21 + 0x28);
    do {
      if (*(ulong *)(lVar21 + 0x10) <= uVar24) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101b06234);
        (*pcVar2)();
      }
      uVar24 = uVar24 + 1;
      lVar12 = plVar5[-1];
      lVar25 = *plVar5;
      lVar23 = lVar12;
      func_0x000107c614f0(lVar12);
      pcVar2 = *(code **)(lVar25 + 0x40);
      func_0x000107c615f0(lVar12);
      (*pcVar2)(1,lVar23,lVar25);
      func_0x000107c615e8(lVar12);
      plVar5 = plVar5 + 2;
    } while (uVar19 != uVar24);
    func_0x000107c6142c(uVar17);
    func_0x000107c6142c(lVar21);
    uVar18 = (undefined1)(0x40306 >> (ulong)(uint)(iStack_178 << 3));
  }
LAB_101b05e60:
  lVar12 = _DAT_112e00238;
  lVar21 = *(long *)(unaff_x20 + _DAT_112e001c8);
  if (lVar21 == 0) {
    return;
  }
  dVar26 = (double)(long)((param_1 - *(double *)(lVar21 + 0x80)) * 1000.0);
  if (0x7fefffffffffffff < (ulong)ABS(dVar26)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101b06278);
    (*pcVar2)();
  }
  if (dVar26 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101b0627c);
    (*pcVar2)();
  }
  if (9.223372036854776e+18 <= dVar26) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101b06280);
    (*pcVar2)();
  }
  func_0x000107c61428(unaff_x20 + _DAT_112e00238,auStack_120,0,0);
  uVar13 = *(undefined8 *)(unaff_x20 + lVar12);
  func_0x000107c6157c(lVar21);
  func_0x000107c61434(uVar13);
  uVar17 = param_2;
  FUN_101b06298(param_2,uVar13);
  func_0x000107c6142c(uVar13);
  lVar12 = *(long *)(param_3[1] + 0x10);
  if (lVar12 == 0) {
    lStack_c0 = 0;
    uStack_b8 = 1;
  }
  else {
    lStack_c0 = 0;
    do {
      if ((int)*(undefined8 *)(param_3[1] + 0x20 + lStack_c0 * 8) == (int)param_2) {
        uStack_b8 = 0;
        goto LAB_101b05f64;
      }
      lStack_c0 = lStack_c0 + 1;
    } while (lVar12 != lStack_c0);
    lStack_c0 = 0;
    uStack_b8 = 1;
  }
LAB_101b05f64:
  uStack_d7 = (uVar7 & 0xff) != 1;
  bStack_e8 = param_4 & 1;
  bStack_d8 = (byte)uVar17 & 1;
  uStack_c8 = SUB81(plVar9,0);
  puVar8 = auStack_138;
  uStack_f0 = param_2;
  uStack_e7 = uVar18;
  lStack_e0 = (long)dVar26;
  uStack_d0 = uVar4;
  func_0x000107c61428(lVar21 + 0x98,puVar8,0x20,0);
  lVar12 = *(long *)(lVar21 + 0x98);
  puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (*(long *)(lVar12 + 0x10) != 0) {
    func_0x000107c61434(lVar12);
    func_0x000101b0fc0c();
    puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (((ulong)puVar8 & 1) != 0) {
      puVar15 = *(undefined **)(*(long *)(lVar12 + 0x38) + param_2 * 8);
      func_0x000107c61434(puVar15);
    }
    func_0x000107c6142c(lVar12);
  }
  func_0x000107c614a8(auStack_138);
  lVar12 = *(long *)(puVar15 + 0x10);
  func_0x000107c6142c(puVar15);
  FUN_101b1ebc4(&uStack_f0);
  func_0x0001000a8868(unaff_x20 + _DAT_112e001c0,*(undefined8 *)(unaff_x20 + _DAT_112e001c0 + 0x18))
  ;
  func_0x000101b17a10(&uStack_f0,lVar12 == 0);
  func_0x000107c61574(lVar21);
  return;
}



/* Entry: 101b06298; end: 101b06353;  */

undefined1 FUN_101b06298(ulong param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auStack_78 [72];
  
  if (*(long *)(param_2 + 0x10) == 0) {
    return 0;
  }
  func_0x000107c6068c(auStack_78,*(undefined8 *)(param_2 + 0x28));
  uVar1 = param_1;
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar2 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(param_2 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0) {
    do {
      if ((int)*(undefined8 *)(*(long *)(param_2 + 0x30) + uVar1 * 8) == (int)param_1) {
        return 1;
      }
      uVar1 = uVar1 + 1 & ~uVar2;
    } while ((*(ulong *)(param_2 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  }
  return 0;
}



/* Entry: 101b06354; end: 101b064c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b06354(double param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x20;
  ulong uVar6;
  double dVar7;
  undefined1 auStack_68 [24];
  
  lVar5 = *(long *)(unaff_x20 + _DAT_112e001c8);
  if (lVar5 != 0) {
    dVar7 = (double)(long)((param_1 - *(double *)(lVar5 + 0x80)) * 1000.0);
    if (0x7fefffffffffffff < (ulong)ABS(dVar7)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101b0645c);
      (*pcVar2)();
    }
    if (dVar7 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101b06460);
      (*pcVar2)();
    }
    if (9.223372036854776e+18 <= dVar7) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101b06464);
      (*pcVar2)();
    }
    func_0x000107c61428(lVar5 + 0xd0,auStack_68,0x21,0);
    uVar6 = *(ulong *)(lVar5 + 0xd0);
    func_0x000107c6157c(lVar5);
    uVar3 = uVar6;
    func_0x000107c61558();
    *(ulong *)(lVar5 + 0xd0) = uVar6;
    uVar4 = uVar6;
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
      func_0x000101b0f6d4(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6,0x112e00988,&UNK_10d9d0c90);
      *(ulong *)(lVar5 + 0xd0) = uVar4;
    }
    uVar3 = *(ulong *)(uVar4 + 0x10);
    uVar6 = uVar4;
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
      uVar6 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      func_0x000101b0f6d4(uVar6,uVar3 + 1,1,uVar4,0x112e00988,&UNK_10d9d0c90);
    }
    *(ulong *)(uVar6 + 0x10) = uVar3 + 1;
    lVar1 = uVar6 + uVar3 * 0x10;
    *(undefined8 *)(lVar1 + 0x20) = param_2;
    *(long *)(lVar1 + 0x28) = (long)dVar7;
    *(ulong *)(lVar5 + 0xd0) = uVar6;
    func_0x000107c614a8(auStack_68);
    func_0x000107c61574(lVar5);
  }
  return;
}



/* Entry: 101b064c8; end: 101b072ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b064c8(double param_1,long *param_2)

{
  int *piVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  undefined **ppuVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  long unaff_x20;
  undefined8 uVar12;
  long lVar13;
  bool bVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  code *pcVar25;
  long *plVar26;
  long lVar27;
  undefined *puVar28;
  long lVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined1 auStack_1f0 [24];
  undefined *apuStack_1d8 [9];
  long lStack_190;
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  ulong uStack_128;
  undefined8 uStack_120;
  double dStack_118;
  undefined8 uStack_110;
  double dStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  double dStack_f0;
  undefined8 uStack_e8;
  double dStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  double dStack_c8;
  undefined *puStack_c0;
  double dStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  double dStack_a0;
  undefined8 uStack_98;
  double dStack_90;
  
  lVar4 = _DAT_112e001c8;
  lVar17 = *(long *)(unaff_x20 + _DAT_112e001c8);
  if ((lVar17 != 0) &&
     (dVar31 = param_1, func_0x000107c61428(lVar17 + 0xd8,auStack_140,0,0),
     *(long *)(*(long *)(lVar17 + 0xd8) + 0x10) != 0)) {
    plVar7 = (long *)(unaff_x20 + _DAT_112e00230);
    func_0x0001000a8868(plVar7,plVar7[3]);
    lVar10 = *plVar7;
    uVar12 = *(undefined8 *)(lVar10 + 0x20);
    func_0x000107c6157c(lVar17);
    func_0x000107c4b940(uVar12);
    dVar30 = *(double *)(lVar10 + 0x28);
    dVar32 = 0.0;
    if (*(char *)(lVar10 + 0x38) != '\x01') {
      dVar32 = *(double *)(lVar10 + 0x30);
      (**(code **)(lVar10 + 0x10))();
      dVar32 = dVar31 - dVar32;
      if (dVar32 < 0.0) {
        dVar32 = 0.0;
      }
    }
    func_0x000107c5d278(*(undefined8 *)(lVar10 + 0x20));
    lVar5 = _DAT_112e00258;
    lVar10 = _DAT_112e00238;
    lVar27 = *(long *)(param_2[1] + 0x10);
    if (lVar27 != 0) {
      dVar30 = dVar30 + dVar32;
      lVar2 = unaff_x20 + _DAT_112e001c0;
      piVar1 = (int *)(param_2[1] + 0x20);
      func_0x000107c61428(unaff_x20 + _DAT_112e00258,auStack_158,0,0);
      func_0x000107c61428(unaff_x20 + lVar10,auStack_170,0,0);
      func_0x000107c61428(lVar17 + 0xd0,auStack_188,0,0);
      lVar11 = 0;
      do {
        uVar22 = *(ulong *)(piVar1 + lVar11 * 2);
        ppuVar8 = apuStack_1d8;
        func_0x000107c61428(lVar17 + 0xd8,ppuVar8,0x20,0);
        lVar13 = *(long *)(lVar17 + 0xd8);
        if (*(long *)(lVar13 + 0x10) == 0) {
LAB_101b06630:
          func_0x000107c614a8(apuStack_1d8);
        }
        else {
          func_0x000107c61434(lVar13);
          uVar18 = uVar22;
          func_0x000101b0fc0c();
          if (((ulong)ppuVar8 & 1) == 0) {
            func_0x000107c6142c(lVar13);
            goto LAB_101b06630;
          }
          uVar12 = *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar18 * 0x10);
          func_0x000107c61434(uVar12);
          func_0x000107c614a8(apuStack_1d8);
          func_0x000107c6142c(uVar12);
          func_0x000107c6142c(lVar13);
          lVar13 = *(long *)(unaff_x20 + lVar5);
          if (*(long *)(lVar13 + 0x10) == 0) {
LAB_101b068a4:
            ppuVar8 = apuStack_1d8;
            func_0x000107c61428(lVar17 + 0xd8,ppuVar8,0x21,0);
            uVar12 = *(undefined8 *)(lVar17 + 0xd8);
            func_0x000107c61434(uVar12);
            uVar18 = uVar22;
            func_0x000101b0fc0c();
            func_0x000107c6142c(uVar12);
            if (((ulong)ppuVar8 & 1) == 0) {
LAB_101b06ce4:
              func_0x000107c614a8(apuStack_1d8);
            }
            else {
              iVar6 = (int)*(undefined8 *)(lVar17 + 0xd8);
              func_0x000107c61558();
              lStack_190 = *(long *)(lVar17 + 0xd8);
              *(undefined8 *)(lVar17 + 0xd8) = 0x8000000000000000;
              if (iVar6 == 0) {
                FUN_101b106e4();
              }
              lVar13 = lStack_190;
              puVar3 = (undefined8 *)(*(long *)(lStack_190 + 0x38) + uVar18 * 0x10);
              uVar16 = *puVar3;
              dVar31 = (double)puVar3[1];
              func_0x000101b11c94(uVar18,lStack_190);
              *(long *)(lVar17 + 0xd8) = lVar13;
              func_0x000107c614a8(apuStack_1d8);
              uStack_110 = 4;
              uStack_128 = uVar22;
              uStack_120 = uVar16;
              dStack_118 = dVar31;
              dStack_108 = dVar30;
              func_0x000107c61428(lVar17 + 0xe0,apuStack_1d8,0x21,0);
              func_0x000107c61434(uVar16);
              uVar12 = *(undefined8 *)(lVar17 + 0xe0);
              func_0x000107c61558(uVar12);
              lStack_190 = *(long *)(lVar17 + 0xe0);
              *(undefined8 *)(lVar17 + 0xe0) = 0x8000000000000000;
              uVar18 = uVar22;
              FUN_101b1031c(&uStack_128,uVar22,uVar12);
              *(long *)(lVar17 + 0xe0) = lStack_190;
              func_0x000107c614a8(apuStack_1d8);
              func_0x000107c6142c(uVar16);
              lVar13 = *(long *)(lVar17 + 0xe0);
              if (*(long *)(lVar13 + 0x10) == 0) {
                uVar12 = 0;
                bVar14 = true;
              }
              else {
                func_0x000107c61434(lVar13);
                uVar20 = uVar22;
                func_0x000101b0fc0c();
                if ((uVar18 & 1) == 0) {
                  uVar12 = 0;
                  bVar14 = true;
                  lVar24 = lVar13;
                }
                else {
                  lVar24 = *(long *)(*(long *)(lVar13 + 0x38) + uVar20 * 0x28 + 8);
                  func_0x000107c61434(lVar24);
                  func_0x000107c6142c(lVar13);
                  bVar14 = *(long *)(lVar24 + 0x10) == 0;
                  if (bVar14) {
                    uVar12 = 0;
                  }
                  else {
                    uVar12 = *(undefined8 *)(lVar24 + 0x20);
                  }
                }
                func_0x000107c6142c(lVar24);
              }
              dVar31 = dVar30 - dVar31;
              func_0x0001000a8868(lVar2,*(undefined8 *)(lVar2 + 0x18));
              uVar16 = 4;
LAB_101b06d60:
              FUN_101b18134(dVar31,uVar22,uVar16,uVar12,bVar14);
            }
          }
          else {
            func_0x000107c61434(lVar13);
            uVar18 = uVar22;
            func_0x000101b0fc0c();
            if (((ulong)ppuVar8 & 1) == 0) {
              func_0x000107c6142c(lVar13);
              goto LAB_101b068a4;
            }
            lVar24 = *(long *)(*(long *)(lVar13 + 0x38) + uVar18 * 8);
            func_0x000107c61434(lVar24);
            func_0x000107c6142c(lVar13);
            lVar13 = *(long *)(unaff_x20 + lVar10);
            if (*(long *)(lVar13 + 0x10) != 0) {
              func_0x000107c6068c(apuStack_1d8,*(undefined8 *)(lVar13 + 0x28));
              uVar18 = uVar22;
              func_0x000107c60690();
              func_0x000107c606a8();
              uVar20 = -1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
              uVar18 = uVar18 & (uVar20 ^ 0xffffffffffffffff);
              uVar23 = *(ulong *)(lVar13 + 0x38 + (uVar18 >> 6) * 8);
              func_0x000107c61434(lVar13);
              if ((uVar23 >> (uVar18 & 0x3f) & 1) != 0) {
                do {
                  if ((int)*(undefined8 *)(*(long *)(lVar13 + 0x30) + uVar18 * 8) == (int)uVar22) {
                    func_0x000107c6142c(lVar13);
                    func_0x000107c6142c(lVar24);
                    ppuVar8 = apuStack_1d8;
                    func_0x000107c61428(lVar17 + 0xd8,ppuVar8,0x21,0);
                    uVar12 = *(undefined8 *)(lVar17 + 0xd8);
                    func_0x000107c61434(uVar12);
                    uVar18 = uVar22;
                    func_0x000101b0fc0c();
                    func_0x000107c6142c(uVar12);
                    if (((ulong)ppuVar8 & 1) == 0) goto LAB_101b06ce4;
                    iVar6 = (int)*(undefined8 *)(lVar17 + 0xd8);
                    func_0x000107c61558();
                    lStack_190 = *(long *)(lVar17 + 0xd8);
                    *(undefined8 *)(lVar17 + 0xd8) = 0x8000000000000000;
                    if (iVar6 == 0) {
                      FUN_101b106e4();
                    }
                    lVar13 = lStack_190;
                    puVar3 = (undefined8 *)(*(long *)(lStack_190 + 0x38) + uVar18 * 0x10);
                    uVar16 = *puVar3;
                    dVar31 = (double)puVar3[1];
                    func_0x000101b11c94(uVar18,lStack_190);
                    *(long *)(lVar17 + 0xd8) = lVar13;
                    func_0x000107c614a8(apuStack_1d8);
                    uStack_98 = 2;
                    uStack_b0 = uVar22;
                    uStack_a8 = uVar16;
                    dStack_a0 = dVar31;
                    dStack_90 = dVar30;
                    func_0x000107c61428(lVar17 + 0xe0,apuStack_1d8,0x21,0);
                    func_0x000107c61434(uVar16);
                    uVar12 = *(undefined8 *)(lVar17 + 0xe0);
                    func_0x000107c61558(uVar12);
                    lStack_190 = *(long *)(lVar17 + 0xe0);
                    *(undefined8 *)(lVar17 + 0xe0) = 0x8000000000000000;
                    uVar18 = uVar22;
                    FUN_101b1031c(&uStack_b0,uVar22,uVar12);
                    *(long *)(lVar17 + 0xe0) = lStack_190;
                    func_0x000107c614a8(apuStack_1d8);
                    func_0x000107c6142c(uVar16);
                    lVar13 = *(long *)(lVar17 + 0xe0);
                    if (*(long *)(lVar13 + 0x10) == 0) {
                      uVar12 = 0;
                      bVar14 = true;
                    }
                    else {
                      func_0x000107c61434(lVar13);
                      uVar20 = uVar22;
                      func_0x000101b0fc0c();
                      if ((uVar18 & 1) == 0) {
                        uVar12 = 0;
                        bVar14 = true;
                        lVar24 = lVar13;
                      }
                      else {
                        lVar24 = *(long *)(*(long *)(lVar13 + 0x38) + uVar20 * 0x28 + 8);
                        func_0x000107c61434(lVar24);
                        func_0x000107c6142c(lVar13);
                        bVar14 = *(long *)(lVar24 + 0x10) == 0;
                        if (bVar14) {
                          uVar12 = 0;
                        }
                        else {
                          uVar12 = *(undefined8 *)(lVar24 + 0x20);
                        }
                      }
                      func_0x000107c6142c(lVar24);
                    }
                    dVar31 = dVar30 - dVar31;
                    func_0x0001000a8868(lVar2,*(undefined8 *)(lVar2 + 0x18));
                    uVar16 = 2;
                    goto LAB_101b06d60;
                  }
                  uVar18 = uVar18 + 1 & ~uVar20;
                } while ((*(ulong *)(lVar13 + 0x38 + (uVar18 >> 6) * 8) >> (uVar18 & 0x3f) & 1) != 0
                        );
              }
              func_0x000107c6142c(lVar13);
            }
            uVar18 = 0;
            uVar20 = *(ulong *)(lVar24 + 0x10);
            plVar7 = (long *)(lVar24 + 0x28);
            do {
              if (uVar20 == uVar18) {
                func_0x000107c6142c(lVar24);
                ppuVar8 = apuStack_1d8;
                func_0x000107c61428(lVar17 + 0xd8,ppuVar8,0x21,0);
                uVar12 = *(undefined8 *)(lVar17 + 0xd8);
                func_0x000107c61434(uVar12);
                uVar18 = uVar22;
                func_0x000101b0fc0c();
                func_0x000107c6142c(uVar12);
                if (((ulong)ppuVar8 & 1) == 0) {
                  func_0x000107c614a8(apuStack_1d8);
                  goto LAB_101b06638;
                }
                iVar6 = (int)*(undefined8 *)(lVar17 + 0xd8);
                func_0x000107c61558();
                lStack_190 = *(long *)(lVar17 + 0xd8);
                *(undefined8 *)(lVar17 + 0xd8) = 0x8000000000000000;
                if (iVar6 == 0) {
                  FUN_101b106e4();
                }
                lVar13 = lStack_190;
                puVar3 = (undefined8 *)(*(long *)(lStack_190 + 0x38) + uVar18 * 0x10);
                uVar16 = *puVar3;
                dVar31 = (double)puVar3[1];
                func_0x000101b11c94(uVar18,lStack_190);
                *(long *)(lVar17 + 0xd8) = lVar13;
                func_0x000107c614a8(apuStack_1d8);
                uStack_e8 = 3;
                uStack_100 = uVar22;
                uStack_f8 = uVar16;
                dStack_f0 = dVar31;
                dStack_e0 = dVar30;
                func_0x000107c61428(lVar17 + 0xe0,apuStack_1d8,0x21,0);
                func_0x000107c61434(uVar16);
                uVar12 = *(undefined8 *)(lVar17 + 0xe0);
                func_0x000107c61558(uVar12);
                lStack_190 = *(long *)(lVar17 + 0xe0);
                *(undefined8 *)(lVar17 + 0xe0) = 0x8000000000000000;
                uVar18 = uVar22;
                FUN_101b1031c(&uStack_100,uVar22,uVar12);
                *(long *)(lVar17 + 0xe0) = lStack_190;
                func_0x000107c614a8(apuStack_1d8);
                func_0x000107c6142c(uVar16);
                lVar13 = *(long *)(lVar17 + 0xe0);
                if (*(long *)(lVar13 + 0x10) == 0) {
                  uVar12 = 0;
                  bVar14 = true;
                }
                else {
                  func_0x000107c61434(lVar13);
                  uVar20 = uVar22;
                  func_0x000101b0fc0c();
                  if ((uVar18 & 1) == 0) {
                    uVar12 = 0;
                    bVar14 = true;
                    lVar24 = lVar13;
                  }
                  else {
                    lVar24 = *(long *)(*(long *)(lVar13 + 0x38) + uVar20 * 0x28 + 8);
                    func_0x000107c61434(lVar24);
                    func_0x000107c6142c(lVar13);
                    bVar14 = *(long *)(lVar24 + 0x10) == 0;
                    if (bVar14) {
                      uVar12 = 0;
                    }
                    else {
                      uVar12 = *(undefined8 *)(lVar24 + 0x20);
                    }
                  }
                  func_0x000107c6142c(lVar24);
                }
                dVar31 = dVar30 - dVar31;
                func_0x0001000a8868(lVar2,*(undefined8 *)(lVar2 + 0x18));
                uVar16 = 3;
                goto LAB_101b06d60;
              }
              if (*(ulong *)(lVar24 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
                pcVar25 = (code *)SoftwareBreakpoint(1,0x101b072f4);
                (*pcVar25)();
              }
              uVar18 = uVar18 + 1;
              uVar23 = plVar7[-1];
              lVar13 = *plVar7;
              uVar21 = uVar23;
              func_0x000107c614f0();
              pcVar25 = *(code **)(lVar13 + 0x20);
              func_0x000107c615f0(uVar23);
              (*pcVar25)(uVar21,lVar13);
              func_0x000107c615e8(uVar23);
              plVar7 = plVar7 + 2;
            } while ((uVar21 & 1) == 0);
            plVar7 = param_2;
            func_0x000101b0e614(uVar22);
            uVar18 = uVar22;
            func_0x000101b0e2b4(uVar22,param_2);
            if (*(long *)(lVar24 + 0x10) == 0) {
                    /* WARNING: Does not return */
              pcVar25 = (code *)SoftwareBreakpoint(1,0x101b072fc);
              (*pcVar25)();
            }
            plVar26 = (long *)(lVar24 + 0x28);
            lVar13 = *plVar26;
            uVar21 = *(ulong *)(lVar24 + 0x20);
            uVar23 = uVar21;
            func_0x000107c614f0();
            pcVar25 = *(code **)(lVar13 + 0x10);
            func_0x000107c615f0(uVar21);
            (*pcVar25)(uVar23,lVar13);
            func_0x000107c615e8(uVar21);
            piVar9 = piVar1;
            lVar13 = lVar27;
            do {
              lVar15 = lVar13;
              if (lVar15 == 0) break;
              iVar6 = *piVar9;
              piVar9 = piVar9 + 2;
              lVar13 = lVar15 + -1;
            } while (iVar6 != (int)uVar22);
            if ((uVar23 & 1) == 0) {
              lVar13 = *(long *)(*(long *)(unaff_x20 + lVar10) + 0x10);
              if (SBORROW8(*param_2,lVar13)) {
                    /* WARNING: Does not return */
                pcVar25 = (code *)SoftwareBreakpoint(1,0x101b07300);
                (*pcVar25)();
              }
              if (*param_2 - lVar13 < 1) {
                if (lVar15 == 0) {
                  func_0x000107c6142c(uVar18);
                  goto LAB_101b06dd0;
                }
                if (((uint)plVar7 & 0xff) != 1) {
                  lVar13 = *(long *)(unaff_x20 + lVar4);
                  if ((lVar13 != 0) &&
                     (func_0x000107c61428(lVar13 + 0xd0,auStack_1f0,0,0),
                     *(long *)(*(long *)(lVar13 + 0xd0) + 0x10) < param_2[5])) {
                    lVar15 = *(long *)(uVar18 + 0x10);
                    func_0x000107c6157c(lVar13);
                    func_0x000107c6142c(uVar18);
                    if (lVar15 == 0) {
                      func_0x000107c61574(lVar13);
                      lVar13 = 2;
                    }
                    goto LAB_101b06e80;
                  }
                  func_0x000107c6142c(uVar18);
                  goto LAB_101b06e7c;
                }
                func_0x000107c6142c(uVar18);
LAB_101b06ddc:
                lVar13 = 3;
              }
              else {
                func_0x000107c6142c(uVar18);
                if (lVar15 == 0) {
LAB_101b06dd0:
                  if (((uint)plVar7 & 0xff) == 1) goto LAB_101b06ddc;
LAB_101b06e7c:
                  lVar13 = 4;
                }
                else {
                  lVar13 = 1;
                }
              }
            }
            else {
              func_0x000107c6142c(uVar18);
              lVar13 = 0;
            }
LAB_101b06e80:
            lVar29 = *(long *)(lVar17 + 0xd0);
            lVar15 = *(long *)(lVar29 + 0x10);
            puVar28 = PTR___swiftEmptyArrayStorage_11034f1c8;
            if (lVar15 != 0) {
              apuStack_1d8[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
              func_0x000107c61434(lVar29);
              func_0x000101b121d0(0,lVar15,0);
              lVar19 = 0x20;
              uVar18 = *(ulong *)(apuStack_1d8[0] + 0x10);
              do {
                uVar12 = *(undefined8 *)(lVar29 + lVar19);
                uVar23 = uVar18 + 1;
                if (*(ulong *)(apuStack_1d8[0] + 0x18) >> 1 <= uVar18) {
                  func_0x000101b121d0(1 < *(ulong *)(apuStack_1d8[0] + 0x18),uVar23,1);
                }
                puVar28 = apuStack_1d8[0];
                *(ulong *)(apuStack_1d8[0] + 0x10) = uVar23;
                *(undefined8 *)(apuStack_1d8[0] + uVar18 * 8 + 0x20) = uVar12;
                lVar19 = lVar19 + 0x10;
                lVar15 = lVar15 + -1;
                uVar18 = uVar23;
              } while (lVar15 != 0);
              func_0x000107c6142c(lVar29);
            }
            if (lVar13 < 3) {
              if ((lVar13 == 0) || (lVar13 == 1)) {
                func_0x000107c6142c(puVar28);
                puVar28 = (undefined *)0x2;
              }
              else {
                if (lVar13 != 2) goto LAB_101b06f90;
                func_0x000107c6142c(puVar28);
                FUN_101b06354(param_1,uVar22);
                puVar28 = (undefined *)0x1;
              }
              func_0x000107c61428(unaff_x20 + lVar10,apuStack_1d8,0x21,0);
              FUN_101b0edec(&lStack_190,uVar22);
              func_0x000107c614a8(apuStack_1d8);
              uVar18 = 0;
              do {
                if (*(ulong *)(lVar24 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
                  pcVar25 = (code *)SoftwareBreakpoint(1,0x101b072f8);
                  (*pcVar25)();
                }
                uVar18 = uVar18 + 1;
                lVar15 = plVar26[-1];
                lVar29 = *plVar26;
                lVar19 = lVar15;
                func_0x000107c614f0(lVar15);
                pcVar25 = *(code **)(lVar29 + 0x40);
                func_0x000107c615f0(lVar15);
                (*pcVar25)(1,lVar19,lVar29);
                func_0x000107c615e8(lVar15);
                plVar26 = plVar26 + 2;
              } while (uVar20 != uVar18);
LAB_101b0704c:
              func_0x000107c6142c(lVar24);
              ppuVar8 = apuStack_1d8;
              func_0x000107c61428(lVar17 + 0xd8,ppuVar8,0x21,0);
              uVar12 = *(undefined8 *)(lVar17 + 0xd8);
              func_0x000107c61434(uVar12);
              uVar18 = uVar22;
              func_0x000101b0fc0c();
              func_0x000107c6142c(uVar12);
              if (((ulong)ppuVar8 & 1) == 0) {
                func_0x000107c614a8(apuStack_1d8);
                FUN_101b15c30(puVar28);
                func_0x000101b15c40(lVar13);
              }
              else {
                iVar6 = (int)*(undefined8 *)(lVar17 + 0xd8);
                func_0x000107c61558();
                lStack_190 = *(long *)(lVar17 + 0xd8);
                *(undefined8 *)(lVar17 + 0xd8) = 0x8000000000000000;
                if (iVar6 == 0) {
                  FUN_101b106e4();
                }
                lVar24 = lStack_190;
                puVar3 = (undefined8 *)(*(long *)(lStack_190 + 0x38) + uVar18 * 0x10);
                uVar16 = *puVar3;
                dVar31 = (double)puVar3[1];
                func_0x000101b11c94(uVar18,lStack_190);
                *(long *)(lVar17 + 0xd8) = lVar24;
                func_0x000107c614a8(apuStack_1d8);
                uStack_d8 = uVar22;
                uStack_d0 = uVar16;
                dStack_c8 = dVar31;
                puStack_c0 = puVar28;
                dStack_b8 = dVar30;
                func_0x000107c61428(lVar17 + 0xe0,apuStack_1d8,0x21,0);
                func_0x000107c61434(uVar16);
                FUN_101af9a68(puVar28);
                uVar12 = *(undefined8 *)(lVar17 + 0xe0);
                func_0x000107c61558(uVar12);
                lStack_190 = *(long *)(lVar17 + 0xe0);
                *(undefined8 *)(lVar17 + 0xe0) = 0x8000000000000000;
                uVar18 = uVar22;
                FUN_101b1031c(&uStack_d8,uVar22,uVar12);
                *(long *)(lVar17 + 0xe0) = lStack_190;
                func_0x000107c614a8(apuStack_1d8);
                func_0x000107c6142c(uVar16);
                lVar24 = *(long *)(lVar17 + 0xe0);
                if (*(long *)(lVar24 + 0x10) == 0) {
                  uVar12 = 0;
                  bVar14 = true;
                }
                else {
                  func_0x000107c61434(lVar24);
                  uVar20 = uVar22;
                  func_0x000101b0fc0c();
                  if ((uVar18 & 1) == 0) {
                    uVar12 = 0;
                    bVar14 = true;
                    lVar15 = lVar24;
                  }
                  else {
                    lVar15 = *(long *)(*(long *)(lVar24 + 0x38) + uVar20 * 0x28 + 8);
                    func_0x000107c61434(lVar15);
                    func_0x000107c6142c(lVar24);
                    bVar14 = *(long *)(lVar15 + 0x10) == 0;
                    if (bVar14) {
                      uVar12 = 0;
                    }
                    else {
                      uVar12 = *(undefined8 *)(lVar15 + 0x20);
                    }
                  }
                  func_0x000107c6142c(lVar15);
                }
                func_0x0001000a8868(lVar2,*(undefined8 *)(lVar2 + 0x18));
                FUN_101b18134(dVar30 - dVar31,uVar22,puVar28,uVar12,bVar14);
                FUN_101b15c30(puVar28);
                func_0x000101b15c40(lVar13);
              }
            }
            else {
              if (lVar13 - 3U < 2) goto LAB_101b0704c;
LAB_101b06f90:
              func_0x000107c6142c(lVar24);
              func_0x000107c6142c(puVar28);
              func_0x000101b15c40(lVar13);
            }
          }
        }
LAB_101b06638:
        lVar11 = lVar11 + 1;
      } while (lVar11 != lVar27);
    }
    func_0x000107c61574(lVar17);
  }
  return;
}



/* Entry: 101b07300; end: 101b07c5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b07300(double param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  long unaff_x20;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  double dVar19;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  ulong uStack_98;
  undefined8 uStack_90;
  double dStack_88;
  undefined8 uStack_80;
  double dStack_78;
  
  func_0x000107c61428(param_2 + 0xd8,auStack_b0,0,0);
  lVar6 = *(long *)(param_2 + 0xd8);
  func_0x000107c61434();
  FUN_101afa7cc();
  lVar14 = 0;
  uVar11 = 1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if ((*(byte *)(lVar6 + 0x20) & 0x3f) < 6) {
    uVar18 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar18 = uVar18 & *(ulong *)(lVar6 + 0x38);
  lVar1 = unaff_x20 + _DAT_112e001c0;
  while( true ) {
    while (uVar18 != 0) {
      uVar7 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar18 = uVar18 - 1 & uVar18;
      uVar15 = *(ulong *)(*(long *)(lVar6 + 0x30) + LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) * 8 +
                         lVar14 * 0x200);
      puVar9 = auStack_c8;
      func_0x000107c61428(param_2 + 0xd8,puVar9,0x21,0);
      uVar12 = *(undefined8 *)(param_2 + 0xd8);
      func_0x000107c61434(uVar12);
      uVar7 = uVar15;
      func_0x000101b0fc0c();
      func_0x000107c6142c(uVar12);
      if (((ulong)puVar9 & 1) == 0) {
        func_0x000107c614a8(auStack_c8);
      }
      else {
        iVar5 = (int)*(undefined8 *)(param_2 + 0xd8);
        func_0x000107c61558();
        lVar13 = *(long *)(param_2 + 0xd8);
        *(undefined8 *)(param_2 + 0xd8) = 0x8000000000000000;
        if (iVar5 == 0) {
          FUN_101b106e4();
        }
        puVar2 = (undefined8 *)(*(long *)(lVar13 + 0x38) + uVar7 * 0x10);
        uVar16 = *puVar2;
        dVar19 = (double)puVar2[1];
        func_0x000101b11c94(uVar7,lVar13);
        *(long *)(param_2 + 0xd8) = lVar13;
        func_0x000107c614a8(auStack_c8);
        uStack_80 = 0;
        uStack_98 = uVar15;
        uStack_90 = uVar16;
        dStack_88 = dVar19;
        dStack_78 = param_1;
        func_0x000107c61428(param_2 + 0xe0,auStack_c8,0x21,0);
        func_0x000107c61434(uVar16);
        uVar12 = *(undefined8 *)(param_2 + 0xe0);
        func_0x000107c61558(uVar12);
        uVar10 = *(undefined8 *)(param_2 + 0xe0);
        *(undefined8 *)(param_2 + 0xe0) = 0x8000000000000000;
        uVar7 = uVar15;
        FUN_101b1031c(&uStack_98,uVar15,uVar12);
        *(undefined8 *)(param_2 + 0xe0) = uVar10;
        func_0x000107c614a8(auStack_c8);
        func_0x000107c6142c(uVar16);
        lVar13 = *(long *)(param_2 + 0xe0);
        if (*(long *)(lVar13 + 0x10) == 0) {
          uVar12 = 0;
          uVar10 = 1;
        }
        else {
          func_0x000107c61434(lVar13);
          uVar8 = uVar15;
          func_0x000101b0fc0c();
          if ((uVar7 & 1) == 0) {
            uVar12 = 0;
            uVar10 = 1;
          }
          else {
            lVar17 = *(long *)(*(long *)(lVar13 + 0x38) + uVar8 * 0x28 + 8);
            func_0x000107c61434(lVar17);
            func_0x000107c6142c(lVar13);
            lVar13 = lVar17;
            if (*(long *)(lVar17 + 0x10) == 0) {
              uVar10 = 1;
              uVar12 = 0;
            }
            else {
              uVar10 = 0;
              uVar12 = *(undefined8 *)(lVar17 + 0x20);
            }
          }
          func_0x000107c6142c(lVar13);
        }
        func_0x0001000a8868(lVar1,*(undefined8 *)(lVar1 + 0x18));
        FUN_101b18134(param_1 - dVar19,uVar15,0,uVar12,uVar10);
      }
    }
    bVar4 = SCARRY8(lVar14,1);
    lVar14 = lVar14 + 1;
    if (bVar4) break;
    if ((long)(uVar11 + 0x3f >> 6) <= lVar14) {
      func_0x000107c61574(lVar6);
      return;
    }
    uVar18 = ((ulong *)(lVar6 + 0x38))[lVar14];
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101b075d8);
  (*pcVar3)();
}



/* Entry: 101b07c60; end: 101b07c7f;  */

void FUN_101b07c60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_4;
  *(undefined8 *)(unaff_x22 + 0x80) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x68) = param_1;
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
  *(undefined8 *)(unaff_x22 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b07c80);
  return;
}



/* Entry: 101b07c80; end: 101b07e23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b07c80(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar2 = _DAT_112e00280;
  lVar8 = *(long *)(unaff_x22 + 0x80);
  if ((*(byte *)(lVar8 + _DAT_112e00280) & 1) == 0) {
    lVar6 = *(long *)(unaff_x22 + 0x60);
    uVar5 = *(undefined8 *)(lVar6 + 8);
    FUN_101b14780(lVar6,unaff_x22 + 0x10);
    FUN_101b142fc(uVar5);
    func_0x000101b147bc(lVar6);
    lVar6 = _DAT_112e00210;
    func_0x000107c61428(lVar8 + _DAT_112e00210,unaff_x22 + 0x48,0,0);
    uVar7 = *(undefined8 *)(lVar8 + lVar6);
    uVar5 = uVar7;
    func_0x000107c61434(uVar7);
    func_0x000101b1351c();
    func_0x000107c6142c(uVar7);
    uVar7 = uVar5;
    func_0x000107c6157c(uVar5);
    FUN_101b15698();
    func_0x000107c61574(uVar5);
    func_0x000107c61574(uVar7);
    uVar7 = uVar5;
    FUN_101b15698(uVar5,FUN_101b12c50,0x101b07e78);
    func_0x000107c61574(uVar5);
    func_0x000107c61574(uVar7);
    if ((*(byte *)(lVar8 + lVar2) & 1) == 0) {
      lVar6 = *(long *)(unaff_x22 + 0x80);
      *(undefined1 *)(lVar8 + lVar2) = 1;
      plVar1 = (long *)(lVar6 + _DAT_112e00288);
      if ((char)plVar1[1] != '\x01') {
        lVar11 = *plVar1;
        *plVar1 = 0;
        *(undefined1 *)(plVar1 + 1) = 1;
        plVar1 = (long *)0x400;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x88) = plVar1;
        *plVar1 = unaff_x22;
        plVar1[1] = (long)FUN_101b07e24;
        lVar2 = *(long *)(unaff_x22 + 0x78);
        lVar8 = *(long *)(unaff_x22 + 0x80);
        lVar9 = *(long *)(unaff_x22 + 0x68);
        lVar10 = *(long *)(unaff_x22 + 0x70);
        lVar6 = *(long *)(unaff_x22 + 0x60);
        plVar1[100] = lVar8;
        plVar1[99] = lVar2;
        plVar1[0x62] = lVar10;
        plVar1[0x61] = lVar9;
        plVar1[0x60] = lVar11;
        *(undefined1 *)((long)plVar1 + 0x51) = 2;
        plVar1[0x5f] = lVar6;
        lVar2 = 0;
        func_0x000107c5eec8();
        plVar1[0x65] = lVar2;
        lVar2 = *(long *)(lVar2 + -8);
        plVar1[0x66] = lVar2;
        uVar4 = *(long *)(lVar2 + 0x40) + 0xf;
        uVar3 = uVar4 & 0xfffffffffffffff0;
        func_0x000107c615b8();
        plVar1[0x67] = uVar3;
        uVar4 = uVar4 & 0xfffffffffffffff0;
        func_0x000107c615b8();
        plVar1[0x68] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_task_switch_110350130)(FUN_101b08434,lVar8,0);
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000101b07dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101b07e24; end: 101b07e5f;  */

void FUN_101b07e24(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x000101b07e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101b07e60; end: 101b07e8b;  */

uint FUN_101b07e60(ulong *param_1)

{
  return (uint)(5 < *param_1) | ((uint)*param_1 ^ 0xffffffff) & 1;
}



/* Entry: 101b07e8c; end: 101b083af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b07e8c(double param_1,long param_2,char param_3)

{
  long *plVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long unaff_x20;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  double dVar15;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  ulong uStack_a0;
  undefined1 auStack_98 [56];
  
  dVar15 = (double)(long)((param_1 - *(double *)(unaff_x20 + _DAT_112e00278)) * 1000.0);
  if (0x7fefffffffffffff < (ulong)ABS(dVar15)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101b08384);
    (*pcVar2)();
  }
  if (dVar15 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101b08388);
    (*pcVar2)();
  }
  if (9.223372036854776e+18 <= dVar15) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101b0838c);
    (*pcVar2)();
  }
  uVar9 = *(undefined8 *)(param_2 + 8);
  FUN_101b14780(param_2,auStack_98);
  FUN_101b142fc(uVar9);
  func_0x000101b147bc(param_2);
  lVar10 = _DAT_112e00210;
  func_0x000107c61428(unaff_x20 + _DAT_112e00210,auStack_98,0,0);
  lVar10 = *(long *)(unaff_x20 + lVar10);
  lVar4 = lVar10;
  func_0x000107c61434();
  func_0x000101b1351c();
  func_0x000107c6142c(lVar10);
  lVar10 = 0;
  uVar8 = 1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(lVar4 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar12 = uVar12 & *(ulong *)(lVar4 + 0x38);
  plVar1 = (long *)(unaff_x20 + _DAT_112e001c0);
  uStack_c0 = 0x800000010effbed0;
  uStack_d0 = 0x800000010effbef0;
  do {
    while (uVar12 == 0) {
      bVar3 = SCARRY8(lVar10,1);
      lVar10 = lVar10 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101b08380);
        (*pcVar2)();
      }
      if ((long)(uVar8 + 0x3f >> 6) <= lVar10) {
        func_0x000107c61574(lVar4);
        return;
      }
      uVar12 = ((ulong *)(lVar4 + 0x38))[lVar10];
    }
    uVar14 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
    uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
    uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
    uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
    uVar14 = *(ulong *)(*(long *)(lVar4 + 0x30) + LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) * 8 +
                       lVar10 * 0x200);
    plVar5 = plVar1;
    func_0x0001000a8868(plVar1,plVar1[3]);
    lVar11 = *plVar5;
    uVar9 = *(undefined8 *)(lVar11 + 0x18);
    if ((long)uVar14 < 3) {
      if (uVar14 == 0) {
        uVar13 = 0xe400000000000000;
        uVar6 = 0x74616863;
      }
      else if (uVar14 == 1) {
        uVar6 = 0x6e69646e65697266;
        uVar13 = 0xe900000000000067;
      }
      else {
        if (uVar14 != 2) {
LAB_101b0838c:
          uStack_a0 = uVar14;
          func_0x000107c60614(&UNK_1106b5710,&uStack_a0,&UNK_1106b5710,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101b083b0);
          (*pcVar2)();
        }
        uVar13 = 0xe800000000000000;
        uVar6 = 0x7265766f63736964;
      }
    }
    else if (uVar14 == 3) {
      uVar13 = 0xe800000000000000;
      uVar6 = 0x736569726f6d656d;
    }
    else if (uVar14 == 4) {
      uVar13 = 0xe900000000000074;
      uVar6 = 0x6867696c746f7073;
    }
    else {
      if (uVar14 != 5) goto LAB_101b0838c;
      uVar13 = 0xe700000000000000;
      uVar6 = 0x656c69666f7270;
    }
    func_0x000107c5fadc(uVar6,uVar13);
    func_0x000107c6142c(uVar13);
    if (param_3 == '\0') {
      uVar13 = 0xd000000000000015;
      uVar7 = uStack_d0;
    }
    else {
      uVar13 = 0x756f726765726f66;
      if (param_3 != '\x01') {
        uVar13 = 0xd000000000000015;
      }
      uVar7 = 0xea0000000000646e;
      if (param_3 != '\x01') {
        uVar7 = uStack_c0;
      }
    }
    func_0x000107c5fadc(uVar13,uVar7);
    func_0x000107c6142c(uVar7);
    func_0x0001056f0788(uVar9,(uint)(uVar14 < 6) & (uint)uVar14,uVar6,uVar13,1);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar13);
    uVar9 = *(undefined8 *)(lVar11 + 0x18);
    if ((long)dVar15 < 0) {
      uVar13 = 0xd000000000000014;
      func_0x000107c5fadc(0xd000000000000014,0x800000010effbf10);
      func_0x0001056f1258(uVar9,uVar13,1);
    }
    else {
      if ((long)uVar14 < 3) {
        if (uVar14 == 0) {
          uVar13 = 0xe400000000000000;
          uVar6 = 0x74616863;
        }
        else if (uVar14 == 1) {
          uVar6 = 0x6e69646e65697266;
          uVar13 = 0xe900000000000067;
        }
        else {
          uVar13 = 0xe800000000000000;
          uVar6 = 0x7265766f63736964;
        }
      }
      else if (uVar14 == 3) {
        uVar13 = 0xe800000000000000;
        uVar6 = 0x736569726f6d656d;
      }
      else if (uVar14 == 4) {
        uVar13 = 0xe900000000000074;
        uVar6 = 0x6867696c746f7073;
      }
      else {
        uVar13 = 0xe700000000000000;
        uVar6 = 0x656c69666f7270;
      }
      func_0x000107c5fadc(uVar6,uVar13);
      func_0x000107c6142c(uVar13);
      if (param_3 == '\0') {
        uVar13 = 0xd000000000000015;
        uVar7 = uStack_d0;
      }
      else {
        uVar13 = 0x756f726765726f66;
        if (param_3 != '\x01') {
          uVar13 = 0xd000000000000015;
        }
        uVar7 = 0xea0000000000646e;
        if (param_3 != '\x01') {
          uVar7 = uStack_c0;
        }
      }
      func_0x000107c5fadc(uVar13,uVar7);
      func_0x000107c6142c(uVar7);
      func_0x0001056f09fc(uVar9,(uint)(uVar14 < 6) & (uint)uVar14,uVar6,uVar13,(long)dVar15);
      func_0x000107c61170(uVar6);
    }
    uVar12 = uVar12 - 1 & uVar12;
    func_0x000107c61170(uVar13);
  } while( true );
}



/* Entry: 101b083b0; end: 101b08433;  */

void FUN_101b083b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 800) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x318) = param_6;
  *(undefined8 *)(unaff_x22 + 0x310) = param_3;
  *(undefined8 *)(unaff_x22 + 0x308) = param_2;
  *(undefined8 *)(unaff_x22 + 0x300) = param_1;
  *(undefined1 *)(unaff_x22 + 0x51) = param_5;
  *(undefined8 *)(unaff_x22 + 0x2f8) = param_4;
  lVar1 = 0;
  func_0x000107c5eec8();
  *(long *)(unaff_x22 + 0x328) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x330) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x338) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x340) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b08434);
  return;
}



/* Entry: 101b08434; end: 101b0a793;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b08434(undefined8 param_1)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  long *plVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  code *pcVar17;
  ulong uVar18;
  undefined1 uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  undefined *puVar25;
  long *plVar26;
  long lVar27;
  long lVar28;
  long unaff_x22;
  long lVar29;
  long lVar30;
  undefined8 *puVar31;
  undefined8 uVar32;
  long lVar33;
  long lVar34;
  long *plVar35;
  long lVar36;
  undefined8 uVar37;
  undefined1 uVar38;
  ulong uVar39;
  ulong uVar40;
  undefined *puVar41;
  undefined8 uVar42;
  long lVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  double dVar49;
  undefined8 uVar50;
  undefined1 uStack_138;
  undefined1 uStack_130;
  long lStack_120;
  long *plStack_110;
  undefined1 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  
  lVar11 = *(long *)(unaff_x22 + 800);
  if (*(char *)(lVar11 + _DAT_112e00280) == '\x01') {
    cVar2 = *(char *)(unaff_x22 + 0x51);
    *(undefined1 *)(lVar11 + _DAT_112e001d0) = 1;
    lVar16 = _DAT_112e001c0;
    *(long *)(unaff_x22 + 0x348) = _DAT_112e001c0;
    plVar35 = (long *)(lVar11 + lVar16);
    plVar26 = plVar35;
    func_0x0001000a8868(plVar35,plVar35[3]);
    uVar22 = *(undefined8 *)(*plVar26 + 0x18);
    uVar15 = 0x756f726765726f66;
    uVar23 = 0xea0000000000646e;
    if (cVar2 != '\x01') {
      uVar15 = 0xd000000000000015;
      uVar23 = 0x800000010effbed0;
    }
    uVar14 = 0x800000010effbef0;
    uVar21 = 0xd000000000000015;
    if (cVar2 != '\0') {
      uVar14 = uVar23;
      uVar21 = uVar15;
    }
    uVar15 = *(undefined8 *)(unaff_x22 + 0x340);
    lVar29 = *(long *)(unaff_x22 + 800);
    func_0x000107c5fadc(uVar21,uVar14);
    func_0x000107c6142c(uVar14);
    func_0x0001056ef0a0(uVar22,uVar21,1);
    func_0x000107c61170(uVar21);
    func_0x000107c5eec4(uVar15);
    lVar11 = _DAT_112e00290;
    *(long *)(unaff_x22 + 0x350) = _DAT_112e00290;
    lVar16 = *(long *)(lVar29 + lVar11);
    if (SCARRY8(lVar16,1)) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x101b0a734);
      (*pcVar17)();
    }
    lVar20 = *(long *)(unaff_x22 + 800);
    *(long *)(lVar29 + lVar11) = lVar16 + 1;
    puVar31 = (undefined8 *)(lVar20 + _DAT_112e00228);
    pcVar17 = (code *)*puVar31;
    *(code **)(unaff_x22 + 0x358) = pcVar17;
    *(undefined8 *)(unaff_x22 + 0x360) = puVar31[1];
    (*pcVar17)();
    *(undefined8 *)(unaff_x22 + 0x368) = param_1;
    lVar11 = _DAT_112e00230;
    *(long *)(unaff_x22 + 0x370) = _DAT_112e00230;
    plVar26 = (long *)(lVar20 + lVar11);
    plVar5 = plVar26;
    func_0x0001000a8868(plVar26,plVar26[3]);
    lVar11 = *plVar5;
    func_0x000107c4b940(*(undefined8 *)(lVar11 + 0x20));
    dVar46 = *(double *)(lVar11 + 0x28);
    *(double *)(unaff_x22 + 0x378) = dVar46;
    dVar44 = 0.0;
    if (*(char *)(lVar11 + 0x38) != '\x01') {
      dVar49 = *(double *)(lVar11 + 0x30);
      (**(code **)(lVar11 + 0x10))();
      dVar44 = dVar44 - dVar49;
      if (dVar44 < 0.0) {
        dVar44 = 0.0;
      }
    }
    *(double *)(unaff_x22 + 0x380) = dVar44;
    lVar29 = *(long *)(unaff_x22 + 800);
    lVar20 = *(long *)(unaff_x22 + 0x2f8);
    dVar46 = dVar46 + dVar44;
    uVar19 = *(undefined1 *)(unaff_x22 + 0x51);
    func_0x000107c5d278(*(undefined8 *)(lVar11 + 0x20));
    FUN_101b07e8c(lVar20,uVar19);
    lVar16 = _DAT_112e00238;
    *(long *)(unaff_x22 + 0x388) = _DAT_112e00238;
    func_0x000107c61428(lVar29 + lVar16,unaff_x22 + 0x278,1,0);
    uVar15 = *(undefined8 *)(lVar29 + lVar16);
    *(undefined **)(lVar29 + lVar16) = PTR___swiftEmptySetSingleton_11034f1d8;
    func_0x000107c6142c(uVar15);
    lVar11 = _DAT_112e00258;
    func_0x000107c61428(lVar29 + _DAT_112e00258,unaff_x22 + 0x290,0,0);
    lVar33 = *(long *)(lVar29 + lVar11);
    *(long *)(unaff_x22 + 0x2f0) = lVar33;
    func_0x000107c61438(lVar33,2);
    puStack_f8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puStack_f0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_101af9a78();
    lVar11 = _DAT_112e00210;
    lVar27 = -1L << ((ulong)*(byte *)(lVar33 + 0x20) & 0x3f);
    uVar18 = -lVar27;
    uVar40 = 0xffffffffffffffff;
    if (uVar18 < 0x40) {
      uVar40 = ~(-1L << (uVar18 & 0x3f));
    }
    uVar40 = uVar40 & *(ulong *)(lVar33 + 0x40);
    *(long *)(unaff_x22 + 0x390) = _DAT_112e00210;
    lVar24 = _DAT_112e00278;
    *(long *)(unaff_x22 + 0x398) = _DAT_112e00278;
    uVar18 = unaff_x22 + 0x2a8;
    func_0x000107c61428(lVar29 + lVar11,uVar18,0,0);
    lVar36 = 0;
joined_r0x000101b0873c:
    while (uVar40 != 0) {
      uVar12 = (uVar40 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar40 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar40 = uVar40 - 1 & uVar40;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | lVar36 << 6;
      lVar28 = *(long *)(*(long *)(lVar33 + 0x38) + uVar12 * 8);
      uVar39 = *(ulong *)(lVar28 + 0x10);
      if (uVar39 != 0) {
        lVar43 = *(long *)(*(long *)(lVar33 + 0x30) + uVar12 * 8);
        uVar12 = *(ulong *)(lVar28 + 0x20);
        uVar18 = *(ulong *)(lVar28 + 0x28);
        uVar8 = uVar12;
        func_0x000107c614f0();
        pcVar17 = *(code **)(uVar18 + 0x10);
        func_0x000107c61434(lVar28);
        func_0x000107c615f0(uVar12);
        (*pcVar17)();
        func_0x000107c615e8(uVar12);
        if ((uVar8 & 1) == 0) {
          func_0x000107c6142c(lVar28);
        }
        else {
          uVar18 = 0;
          plStack_110 = (long *)(lVar28 + 0x28);
          plVar5 = plStack_110;
          do {
            if (uVar39 == uVar18) goto LAB_101b08898;
            if (*(ulong *)(lVar28 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
              pcVar17 = (code *)SoftwareBreakpoint(1,0x101b0a724);
              (*pcVar17)();
            }
            uVar18 = uVar18 + 1;
            uVar12 = plVar5[-1];
            lVar30 = *plVar5;
            uVar8 = uVar12;
            func_0x000107c614f0();
            pcVar17 = *(code **)(lVar30 + 0x20);
            func_0x000107c615f0(uVar12);
            (*pcVar17)(uVar8,lVar30);
            func_0x000107c615e8(uVar12);
            plVar5 = plVar5 + 2;
          } while ((uVar8 & 1) == 0);
          func_0x000107c61428(lVar29 + lVar16,unaff_x22 + 0x2d8,0x21,0);
          FUN_101b0edec(&puStack_d0,lVar43);
          func_0x000107c614a8(unaff_x22 + 0x2d8);
LAB_101b08898:
          FUN_101b05398(0,lVar43);
          plVar5 = plStack_110;
          uVar18 = 0;
          do {
            uVar12 = uVar18;
            if (uVar39 == uVar12) break;
            if (*(ulong *)(lVar28 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
              pcVar17 = (code *)SoftwareBreakpoint(1,0x101b0a728);
              (*pcVar17)();
            }
            uVar18 = plVar5[-1];
            lVar30 = *plVar5;
            uVar8 = uVar18;
            func_0x000107c614f0();
            pcVar17 = *(code **)(lVar30 + 0x28);
            func_0x000107c615f0(uVar18);
            (*pcVar17)(uVar8,lVar30);
            func_0x000107c615e8(uVar18);
            plVar5 = plVar5 + 2;
            uVar18 = uVar12 + 1;
          } while ((uVar8 & 1) == 0);
          uVar18 = 0;
          plVar5 = plStack_110;
          do {
            if (*(ulong *)(lVar28 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
              pcVar17 = (code *)SoftwareBreakpoint(1,0x101b0a71c);
              (*pcVar17)();
            }
            uVar18 = uVar18 + 1;
            lVar30 = plVar5[-1];
            lVar13 = *plVar5;
            lVar34 = lVar30;
            func_0x000107c614f0(lVar30);
            pcVar17 = *(code **)(lVar13 + 0x40);
            func_0x000107c615f0(lVar30);
            (*pcVar17)(1,lVar34,lVar13);
            func_0x000107c615e8(lVar30);
            plVar5 = plVar5 + 2;
          } while (uVar39 != uVar18);
          plVar5 = plVar26;
          func_0x0001000a8868(plVar26,plVar26[3]);
          lVar30 = *plVar5;
          func_0x000107c4b940(*(undefined8 *)(lVar30 + 0x20));
          dVar44 = *(double *)(lVar30 + 0x28);
          dVar46 = 0.0;
          if (*(char *)(lVar30 + 0x38) != '\x01') {
            dVar49 = *(double *)(lVar30 + 0x30);
            (**(code **)(lVar30 + 0x10))();
            dVar46 = dVar46 - dVar49;
            if (dVar46 < 0.0) {
              dVar46 = 0.0;
            }
          }
          dVar44 = dVar44 + dVar46;
          func_0x000107c5d278(*(undefined8 *)(lVar30 + 0x20));
          uVar18 = 0xffffffffffffffff;
          do {
            lVar30 = uVar18 - uVar39;
            if (lVar30 == -1) break;
            uVar18 = uVar18 + 1;
            if (*(ulong *)(lVar28 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
              pcVar17 = (code *)SoftwareBreakpoint(1,0x101b0a72c);
              (*pcVar17)();
            }
            uVar8 = plStack_110[-1];
            lVar13 = *plStack_110;
            uVar9 = uVar8;
            func_0x000107c614f0();
            pcVar17 = *(code **)(lVar13 + 0x20);
            func_0x000107c615f0(uVar8);
            (*pcVar17)(uVar9,lVar13);
            func_0x000107c615e8(uVar8);
            plStack_110 = plStack_110 + 2;
          } while ((uVar9 & 1) == 0);
          func_0x000100b6a0c4(plVar35,unaff_x22 + 0x250);
          func_0x0001000a8868(unaff_x22 + 0x250,*(undefined8 *)(unaff_x22 + 0x268));
          lVar13 = *(long *)(*(long *)(lVar20 + 8) + 0x10);
          if (lVar13 != 0) {
            lVar34 = 0;
            do {
              if ((int)*(undefined8 *)(*(long *)(lVar20 + 8) + 0x20 + lVar34 * 8) == (int)lVar43) {
                uStack_108 = 0;
                goto LAB_101b08aa0;
              }
              lVar34 = lVar34 + 1;
            } while (lVar13 != lVar34);
          }
          lVar34 = 0;
          uStack_108 = 1;
LAB_101b08aa0:
          uVar15 = *(undefined8 *)(lVar28 + 0x20);
          uVar18 = *(ulong *)(lVar28 + 0x28);
          uVar23 = uVar15;
          func_0x000107c614f0();
          bVar4 = (byte)uVar23;
          pcVar17 = *(code **)(uVar18 + 0x10);
          func_0x000107c615f0(uVar15);
          (*pcVar17)();
          func_0x000107c615e8(uVar15);
          lVar13 = *(long *)(lVar29 + lVar11);
          if (*(long *)(lVar13 + 0x10) == 0) {
            lVar13 = 0;
            uVar19 = 1;
          }
          else {
            func_0x000107c61434(lVar13);
            lVar6 = lVar43;
            func_0x000101b0fc0c();
            if ((uVar18 & 1) == 0) {
              func_0x000107c6142c(lVar13);
              lVar13 = 0;
              uVar19 = 1;
            }
            else {
              dVar46 = *(double *)(*(long *)(lVar13 + 0x38) + lVar6 * 8);
              func_0x000107c6142c(lVar13);
              dVar46 = (double)(long)((dVar46 - *(double *)(lVar29 + lVar24)) * 1000.0);
              if (0x7fefffffffffffff < (ulong)ABS(dVar46)) {
                    /* WARNING: Does not return */
                pcVar17 = (code *)SoftwareBreakpoint(1,0x101b0a78c);
                (*pcVar17)();
              }
              if (dVar46 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
                pcVar17 = (code *)SoftwareBreakpoint(1,0x101b0a790);
                (*pcVar17)();
              }
              if (9.223372036854776e+18 <= dVar46) {
                    /* WARNING: Does not return */
                pcVar17 = (code *)SoftwareBreakpoint(1,0x101b0a794);
                (*pcVar17)();
              }
              uVar19 = 0;
              lVar13 = (long)dVar46;
            }
          }
          *(long *)(unaff_x22 + 0x130) = lVar43;
          *(undefined1 *)(unaff_x22 + 0x138) = 0;
          *(bool *)(unaff_x22 + 0x139) = lVar30 != -1;
          *(long *)(unaff_x22 + 0x140) = lVar34;
          *(undefined1 *)(unaff_x22 + 0x148) = uStack_108;
          *(byte *)(unaff_x22 + 0x149) = bVar4 & 1;
          *(undefined8 *)(unaff_x22 + 0x150) = 0;
          *(undefined8 *)(unaff_x22 + 0x158) = 0;
          *(undefined1 *)(unaff_x22 + 0x160) = 2;
          *(bool *)(unaff_x22 + 0x161) = uVar39 == uVar12;
          *(long *)(unaff_x22 + 0x168) = lVar13;
          *(undefined1 *)(unaff_x22 + 0x170) = uVar19;
          uVar18 = (ulong)*(byte *)(unaff_x22 + 0x51);
          FUN_101b172c4(unaff_x22 + 0x130);
          func_0x0001000834e4(unaff_x22 + 0x250);
          puVar7 = puStack_f8;
          func_0x000107c61558();
          if (((ulong)puVar7 & 1) == 0) {
            uVar18 = *(long *)(puStack_f8 + 0x10) + 1;
            puVar7 = (undefined *)0x0;
            FUN_101b1269c(0,uVar18,1,puStack_f8,PTR__swift_bridgeObjectRelease_11034f258);
            puStack_f8 = puVar7;
          }
          uVar9 = *(ulong *)(puStack_f8 + 0x10);
          uVar8 = uVar9 + 1;
          if (*(ulong *)(puStack_f8 + 0x18) >> 1 <= uVar9) {
            puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puStack_f8 + 0x18));
            uVar18 = uVar8;
            FUN_101b1269c(puVar7,uVar8,1,puStack_f8,PTR__swift_bridgeObjectRelease_11034f258);
            puStack_f8 = puVar7;
          }
          *(ulong *)(puStack_f8 + 0x10) = uVar8;
          *(long *)(puStack_f8 + uVar9 * 0x50 + 0x20) = lVar43;
          puStack_f8[uVar9 * 0x50 + 0x28] = 0;
          puStack_f8[uVar9 * 0x50 + 0x29] = lVar30 != -1;
          *(long *)(puStack_f8 + uVar9 * 0x50 + 0x30) = lVar34;
          puStack_f8[uVar9 * 0x50 + 0x38] = uStack_108;
          puStack_f8[uVar9 * 0x50 + 0x39] = bVar4 & 1;
          *(undefined8 *)(puStack_f8 + uVar9 * 0x50 + 0x40) = 0;
          *(undefined8 *)(puStack_f8 + uVar9 * 0x50 + 0x48) = 0;
          puStack_f8[uVar9 * 0x50 + 0x50] = 2;
          puStack_f8[uVar9 * 0x50 + 0x51] = uVar39 == uVar12;
          *(long *)(puStack_f8 + uVar9 * 0x50 + 0x58) = lVar13;
          puStack_f8[uVar9 * 0x50 + 0x60] = uVar19;
          *(double *)(puStack_f8 + uVar9 * 0x50 + 0x68) = dVar44;
          func_0x000107c6142c(lVar28);
        }
      }
    }
    bVar3 = SCARRY8(lVar36,1);
    lVar36 = lVar36 + 1;
    if (bVar3) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x101b0a6f0);
      (*pcVar17)();
    }
    if (lVar36 < (long)(0x3fU - lVar27 >> 6)) {
      uVar40 = ((ulong *)(lVar33 + 0x40))[lVar36];
      goto joined_r0x000101b0873c;
    }
    func_0x000107c61574(lVar33);
    lVar11 = *(long *)(lVar20 + 8);
    *(long *)(unaff_x22 + 0x3a0) = lVar11;
    lVar16 = *(long *)(lVar11 + 0x10);
    *(long *)(unaff_x22 + 0x3a8) = lVar16;
    puStack_100 = puStack_f0;
    if (lVar16 != 0) {
      lVar11 = 0;
LAB_101b08d54:
      *(undefined **)(unaff_x22 + 0x3c8) = puStack_f0;
      *(undefined **)(unaff_x22 + 0x3c0) = puStack_f8;
      *(long *)(unaff_x22 + 0x3b8) = lVar11;
      *(undefined **)(unaff_x22 + 0x3b0) = puStack_100;
      lVar16 = *(long *)(*(long *)(unaff_x22 + 0x3a0) + lVar11 * 8 + 0x20);
      *(long *)(unaff_x22 + 0x3d0) = lVar16;
      lVar11 = *(long *)(unaff_x22 + 0x2f0);
      if (*(long *)(lVar11 + 0x10) != 0) {
        func_0x000107c61434(lVar11);
        lVar29 = lVar16;
        func_0x000101b0fc0c();
        if ((uVar18 & 1) == 0) {
          func_0x000107c6142c(lVar11);
          goto LAB_101b08d40;
        }
        lVar27 = *(long *)(unaff_x22 + 0x388);
        lVar20 = *(long *)(unaff_x22 + 800);
        plVar35 = *(long **)(unaff_x22 + 0x2f8);
        uVar40 = *(ulong *)(*(long *)(lVar11 + 0x38) + lVar29 * 8);
        *(ulong *)(unaff_x22 + 0x3d8) = uVar40;
        func_0x000107c61434(uVar40);
        func_0x000107c6142c(lVar11);
        FUN_101b05398(0,lVar16);
        lVar11 = *(long *)(*(long *)(lVar20 + lVar27) + 0x10);
        if (SBORROW8(*plVar35,lVar11)) {
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x101b0a718);
          (*pcVar17)();
        }
        if (*plVar35 - lVar11 < 1) {
          uVar12 = *(ulong *)(uVar40 + 0x10);
          plVar35 = (long *)(uVar40 + 0x28);
          plVar26 = plVar35;
          uVar18 = 0;
          do {
            uVar39 = uVar18;
            if (uVar12 == uVar39) break;
            if (*(ulong *)(uVar40 + 0x10) <= uVar39) {
                    /* WARNING: Does not return */
              pcVar17 = (code *)SoftwareBreakpoint(1,0x101b0a6fc);
              (*pcVar17)();
            }
            uVar18 = plVar26[-1];
            lVar11 = *plVar26;
            uVar8 = uVar18;
            func_0x000107c614f0();
            pcVar17 = *(code **)(lVar11 + 0x28);
            func_0x000107c615f0(uVar18);
            (*pcVar17)(uVar8,lVar11);
            func_0x000107c615e8(uVar18);
            plVar26 = plVar26 + 2;
            uVar18 = uVar39 + 1;
          } while ((uVar8 & 1) == 0);
          if (uVar12 != 0) {
            uVar18 = 0;
            plVar26 = plVar35;
            do {
              if (*(ulong *)(uVar40 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
                pcVar17 = (code *)SoftwareBreakpoint(1,0x101b0a6f4);
                (*pcVar17)();
              }
              uVar18 = uVar18 + 1;
              lVar11 = plVar26[-1];
              lVar29 = *plVar26;
              lVar20 = lVar11;
              func_0x000107c614f0(lVar11);
              pcVar17 = *(code **)(lVar29 + 0x40);
              func_0x000107c615f0(lVar11);
              (*pcVar17)(0,lVar20,lVar29);
              func_0x000107c615e8(lVar11);
              plVar26 = plVar26 + 2;
            } while (uVar12 != uVar18);
          }
          plVar26 = (long *)(*(long *)(unaff_x22 + 800) + *(long *)(unaff_x22 + 0x370));
          func_0x0001000a8868(plVar26,plVar26[3]);
          lVar11 = *plVar26;
          func_0x000107c4b940(*(undefined8 *)(lVar11 + 0x20));
          dVar44 = *(double *)(lVar11 + 0x28);
          dVar46 = 0.0;
          if (*(char *)(lVar11 + 0x38) != '\x01') {
            dVar49 = *(double *)(lVar11 + 0x30);
            (**(code **)(lVar11 + 0x10))();
            dVar46 = dVar46 - dVar49;
            if (dVar46 < 0.0) {
              dVar46 = 0.0;
            }
          }
          dVar44 = dVar44 + dVar46;
          func_0x000107c5d278(*(undefined8 *)(lVar11 + 0x20));
          uVar18 = 0xffffffffffffffff;
          do {
            lVar11 = uVar18 - uVar12;
            if (lVar11 == -1) break;
            uVar18 = uVar18 + 1;
            if (*(ulong *)(uVar40 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
              pcVar17 = (code *)SoftwareBreakpoint(1,0x101b0a700);
              (*pcVar17)();
            }
            uVar8 = plVar35[-1];
            lVar29 = *plVar35;
            uVar9 = uVar8;
            func_0x000107c614f0();
            pcVar17 = *(code **)(lVar29 + 0x20);
            func_0x000107c615f0(uVar8);
            (*pcVar17)(uVar9,lVar29);
            func_0x000107c615e8(uVar8);
            plVar35 = plVar35 + 2;
          } while ((uVar9 & 1) == 0);
          lVar29 = *(long *)(unaff_x22 + 0x3a0);
          func_0x000100b6a0c4(*(long *)(unaff_x22 + 800) + *(long *)(unaff_x22 + 0x348),
                              unaff_x22 + 0x1d8);
          uVar18 = *(ulong *)(unaff_x22 + 0x1f0);
          func_0x0001000a8868();
          lVar29 = *(long *)(lVar29 + 0x10);
          if (lVar29 == 0) {
            lVar20 = 0;
            uVar19 = 1;
            if (uVar12 == 0) goto LAB_101b09588;
LAB_101b0953c:
            if (*(long *)(uVar40 + 0x10) == 0) {
                    /* WARNING: Does not return */
              pcVar17 = (code *)SoftwareBreakpoint(1,0x101b0a738);
              (*pcVar17)();
            }
            uVar15 = *(undefined8 *)(uVar40 + 0x20);
            uVar18 = *(ulong *)(uVar40 + 0x28);
            uVar23 = uVar15;
            func_0x000107c614f0();
            bVar4 = (byte)uVar23;
            pcVar17 = *(code **)(uVar18 + 0x10);
            func_0x000107c615f0(uVar15);
            (*pcVar17)();
            func_0x000107c615e8(uVar15);
          }
          else {
            lVar20 = 0;
            do {
              if ((int)*(undefined8 *)(*(long *)(unaff_x22 + 0x3a0) + 0x20 + lVar20 * 8) ==
                  (int)lVar16) {
                uVar19 = 0;
                goto joined_r0x000101b09584;
              }
              lVar20 = lVar20 + 1;
            } while (lVar29 != lVar20);
            lVar20 = 0;
            uVar19 = 1;
joined_r0x000101b09584:
            if (uVar12 != 0) goto LAB_101b0953c;
LAB_101b09588:
            bVar4 = 0;
          }
          lVar29 = *(long *)(*(long *)(unaff_x22 + 800) + *(long *)(unaff_x22 + 0x390));
          if (*(long *)(lVar29 + 0x10) == 0) {
LAB_101b09644:
            lVar29 = 0;
            uVar38 = 1;
          }
          else {
            func_0x000107c61434(lVar29);
            lVar27 = lVar16;
            func_0x000101b0fc0c();
            if ((uVar18 & 1) == 0) {
              func_0x000107c6142c(lVar29);
              goto LAB_101b09644;
            }
            lVar33 = *(long *)(unaff_x22 + 0x398);
            lVar36 = *(long *)(unaff_x22 + 800);
            dVar46 = *(double *)(*(long *)(lVar29 + 0x38) + lVar27 * 8);
            func_0x000107c6142c(lVar29);
            dVar46 = (double)(long)((dVar46 - *(double *)(lVar36 + lVar33)) * 1000.0);
            if (0x7fefffffffffffff < (ulong)ABS(dVar46)) {
                    /* WARNING: Does not return */
              pcVar17 = (code *)SoftwareBreakpoint(1,0x101b0a75c);
              (*pcVar17)();
            }
            if (dVar46 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
              pcVar17 = (code *)SoftwareBreakpoint(1,0x101b0a760);
              (*pcVar17)();
            }
            if (9.223372036854776e+18 <= dVar46) {
                    /* WARNING: Does not return */
              pcVar17 = (code *)SoftwareBreakpoint(1,0x101b0a764);
              (*pcVar17)();
            }
            uVar38 = 0;
            lVar29 = (long)dVar46;
          }
          *(long *)(unaff_x22 + 0x10) = lVar16;
          *(undefined1 *)(unaff_x22 + 0x18) = 1;
          *(bool *)(unaff_x22 + 0x19) = lVar11 != -1;
          *(long *)(unaff_x22 + 0x20) = lVar20;
          *(undefined1 *)(unaff_x22 + 0x28) = uVar19;
          *(byte *)(unaff_x22 + 0x29) = bVar4 & 1;
          *(undefined8 *)(unaff_x22 + 0x30) = 0;
          *(undefined8 *)(unaff_x22 + 0x38) = 0;
          *(undefined1 *)(unaff_x22 + 0x40) = 2;
          *(bool *)(unaff_x22 + 0x41) = uVar12 != uVar39;
          *(long *)(unaff_x22 + 0x48) = lVar29;
          *(undefined1 *)(unaff_x22 + 0x50) = uVar38;
          uVar18 = (ulong)*(byte *)(unaff_x22 + 0x51);
          FUN_101b172c4(unaff_x22 + 0x10);
          func_0x0001000834e4(unaff_x22 + 0x1d8);
          puVar7 = puStack_f8;
          func_0x000107c61558();
          if (((ulong)puVar7 & 1) == 0) {
            uVar18 = *(long *)(puStack_f8 + 0x10) + 1;
            puVar7 = (undefined *)0x0;
            FUN_101b1269c(0,uVar18,1,puStack_f8,PTR__swift_bridgeObjectRelease_11034f258);
            puStack_f8 = puVar7;
          }
          uVar9 = *(ulong *)(puStack_f8 + 0x10);
          uVar8 = uVar9 + 1;
          if (*(ulong *)(puStack_f8 + 0x18) >> 1 <= uVar9) {
            puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puStack_f8 + 0x18));
            uVar18 = uVar8;
            FUN_101b1269c(puVar7,uVar8,1,puStack_f8,PTR__swift_bridgeObjectRelease_11034f258);
            puStack_f8 = puVar7;
          }
          *(ulong *)(puStack_f8 + 0x10) = uVar8;
          *(long *)(puStack_f8 + uVar9 * 0x50 + 0x20) = lVar16;
          puStack_f8[uVar9 * 0x50 + 0x28] = 1;
          puStack_f8[uVar9 * 0x50 + 0x29] = lVar11 != -1;
          *(long *)(puStack_f8 + uVar9 * 0x50 + 0x30) = lVar20;
          puStack_f8[uVar9 * 0x50 + 0x38] = uVar19;
          puStack_f8[uVar9 * 0x50 + 0x39] = bVar4 & 1;
          *(undefined8 *)(puStack_f8 + uVar9 * 0x50 + 0x40) = 0;
          *(undefined8 *)(puStack_f8 + uVar9 * 0x50 + 0x48) = 0;
          puStack_f8[uVar9 * 0x50 + 0x50] = 2;
          puStack_f8[uVar9 * 0x50 + 0x51] = uVar12 != uVar39;
          *(long *)(puStack_f8 + uVar9 * 0x50 + 0x58) = lVar29;
          puStack_f8[uVar9 * 0x50 + 0x60] = uVar38;
          *(double *)(puStack_f8 + uVar9 * 0x50 + 0x68) = dVar44;
          func_0x000107c6142c(uVar40);
          goto LAB_101b08d40;
        }
        uVar19 = *(undefined1 *)(*(long *)(unaff_x22 + 0x2f8) + 0x30);
        uVar18 = uVar40;
        FUN_101b14e6c(uVar40,uVar19);
        if ((uVar18 & 1) == 0) {
          dVar44 = *(double *)(unaff_x22 + 0x368);
          dVar49 = *(double *)(*(long *)(unaff_x22 + 0x2f8) + 0x10);
          (**(code **)(unaff_x22 + 0x358))();
          plVar35 = (long *)0x1c0;
          func_0x000107c615b8();
          *(long **)(unaff_x22 + 0x3e0) = plVar35;
          *plVar35 = unaff_x22;
          plVar35[1] = (long)FUN_101b0a794;
          plVar26 = *(long **)(unaff_x22 + 800);
          plVar35[0x30] = (long)plVar26;
          *(undefined1 *)((long)plVar35 + 0x161) = uVar19;
          plVar35[0x2f] = (long)(dVar49 - (dVar46 - dVar44));
          plVar35[0x2e] = uVar40;
          plVar35[0x31] = *plVar26;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_task_switch_110350130)(FUN_101b0ce78,plVar26,0);
          return;
        }
        uVar40 = 0;
        lVar11 = *(long *)(unaff_x22 + 0x3d8);
        uVar12 = *(ulong *)(lVar11 + 0x10);
        plVar35 = (long *)(lVar11 + 0x28);
        plVar26 = plVar35;
        do {
          if (uVar12 == uVar40) {
            plVar26 = plVar35;
            uVar40 = 0;
            goto LAB_101b092e0;
          }
          if (*(ulong *)(lVar11 + 0x10) <= uVar40) {
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x101b0a6e8);
            (*pcVar17)();
          }
          uVar40 = uVar40 + 1;
          uVar18 = plVar26[-1];
          lVar16 = *plVar26;
          uVar39 = uVar18;
          func_0x000107c614f0();
          pcVar17 = *(code **)(lVar16 + 0x20);
          func_0x000107c615f0(uVar18);
          (*pcVar17)(uVar39,lVar16);
          func_0x000107c615e8(uVar18);
          plVar26 = plVar26 + 2;
        } while ((uVar39 & 1) == 0);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x3d0);
        func_0x000107c61428(*(long *)(unaff_x22 + 800) + *(long *)(unaff_x22 + 0x388),
                            unaff_x22 + 0x2c0,0x21,0);
        FUN_101b0edec(&puStack_d0,uVar15);
        func_0x000107c614a8(unaff_x22 + 0x2c0);
        plVar26 = plVar35;
        uVar40 = 0;
        do {
          uVar39 = uVar40;
          if (uVar12 == uVar39) break;
          if (*(ulong *)(lVar11 + 0x10) <= uVar39) {
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x101b0a710);
            (*pcVar17)();
          }
          uVar40 = plVar26[-1];
          lVar16 = *plVar26;
          uVar18 = uVar40;
          func_0x000107c614f0();
          pcVar17 = *(code **)(lVar16 + 0x28);
          func_0x000107c615f0(uVar40);
          (*pcVar17)(uVar18,lVar16);
          func_0x000107c615e8(uVar40);
          plVar26 = plVar26 + 2;
          uVar40 = uVar39 + 1;
        } while ((uVar18 & 1) == 0);
        uVar40 = 0;
        plVar26 = plVar35;
        do {
          if (*(ulong *)(lVar11 + 0x10) <= uVar40) {
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x101b0a6ec);
            (*pcVar17)();
          }
          uVar40 = uVar40 + 1;
          lVar16 = plVar26[-1];
          lVar29 = *plVar26;
          lVar20 = lVar16;
          func_0x000107c614f0(lVar16);
          pcVar17 = *(code **)(lVar29 + 0x40);
          func_0x000107c615f0(lVar16);
          (*pcVar17)(1,lVar20,lVar29);
          func_0x000107c615e8(lVar16);
          plVar26 = plVar26 + 2;
        } while (uVar12 != uVar40);
        plVar26 = (long *)(*(long *)(unaff_x22 + 800) + *(long *)(unaff_x22 + 0x370));
        func_0x0001000a8868(plVar26,plVar26[3]);
        lVar16 = *plVar26;
        func_0x000107c4b940(*(undefined8 *)(lVar16 + 0x20));
        dVar44 = *(double *)(lVar16 + 0x28);
        dVar46 = 0.0;
        if (*(char *)(lVar16 + 0x38) != '\x01') {
          dVar49 = *(double *)(lVar16 + 0x30);
          (**(code **)(lVar16 + 0x10))();
          dVar46 = dVar46 - dVar49;
          if (dVar46 < 0.0) {
            dVar46 = 0.0;
          }
        }
        dVar44 = dVar44 + dVar46;
        func_0x000107c5d278(*(undefined8 *)(lVar16 + 0x20));
        uVar40 = 0xffffffffffffffff;
        do {
          lVar16 = uVar40 - uVar12;
          if (lVar16 == -1) break;
          uVar40 = uVar40 + 1;
          if (*(ulong *)(lVar11 + 0x10) <= uVar40) {
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x101b0a714);
            (*pcVar17)();
          }
          uVar18 = plVar35[-1];
          lVar29 = *plVar35;
          uVar8 = uVar18;
          func_0x000107c614f0();
          pcVar17 = *(code **)(lVar29 + 0x20);
          func_0x000107c615f0(uVar18);
          (*pcVar17)(uVar8,lVar29);
          func_0x000107c615e8(uVar18);
          plVar35 = plVar35 + 2;
        } while ((uVar8 & 1) == 0);
        puStack_f0 = *(undefined **)(unaff_x22 + 0x3c8);
        puStack_100 = *(undefined **)(unaff_x22 + 0x3b0);
        lVar29 = *(long *)(unaff_x22 + 0x3a0);
        func_0x000100b6a0c4(*(long *)(unaff_x22 + 800) + *(long *)(unaff_x22 + 0x348),
                            unaff_x22 + 0x200);
        func_0x0001000a8868(unaff_x22 + 0x200,*(undefined8 *)(unaff_x22 + 0x218));
        lVar29 = *(long *)(lVar29 + 0x10);
        if (lVar29 != 0) {
          lVar20 = 0;
          do {
            if ((int)*(undefined8 *)(*(long *)(unaff_x22 + 0x3a0) + 0x20 + lVar20 * 8) ==
                *(int *)(unaff_x22 + 0x3d0)) {
              puStack_f8._0_1_ = 0;
              lVar29 = *(long *)(lVar11 + 0x10);
              uVar19 = puStack_f8._0_1_;
              goto joined_r0x000101b0990c;
            }
            lVar20 = lVar20 + 1;
          } while (lVar29 != lVar20);
        }
        lVar20 = 0;
        puStack_f8._0_1_ = 1;
        lVar29 = *(long *)(lVar11 + 0x10);
        uVar19 = puStack_f8._0_1_;
joined_r0x000101b0990c:
        if (lVar29 == 0) {
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x101b0a730);
          (*pcVar17)();
        }
        lVar27 = *(long *)(unaff_x22 + 0x390);
        lVar29 = *(long *)(unaff_x22 + 800);
        uVar23 = *(undefined8 *)(lVar11 + 0x20);
        uVar40 = *(ulong *)(*(long *)(unaff_x22 + 0x3d8) + 0x28);
        uVar15 = uVar23;
        func_0x000107c614f0();
        bVar4 = (byte)uVar15;
        pcVar17 = *(code **)(uVar40 + 0x10);
        func_0x000107c615f0(uVar23);
        (*pcVar17)();
        func_0x000107c615e8(uVar23);
        lVar11 = *(long *)(lVar29 + lVar27);
        if (*(long *)(lVar11 + 0x10) == 0) {
LAB_101b099fc:
          lVar11 = 0;
          uVar38 = 1;
        }
        else {
          lVar29 = *(long *)(unaff_x22 + 0x3d0);
          func_0x000107c61434(lVar11);
          func_0x000101b0fc0c();
          if ((uVar40 & 1) == 0) {
            func_0x000107c6142c(lVar11);
            goto LAB_101b099fc;
          }
          lVar33 = *(long *)(unaff_x22 + 0x398);
          lVar27 = *(long *)(unaff_x22 + 800);
          dVar46 = *(double *)(*(long *)(lVar11 + 0x38) + lVar29 * 8);
          func_0x000107c6142c(lVar11);
          dVar46 = (double)(long)((dVar46 - *(double *)(lVar27 + lVar33)) * 1000.0);
          if (0x7fefffffffffffff < (ulong)ABS(dVar46)) {
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x101b0a774);
            (*pcVar17)();
          }
          if (dVar46 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x101b0a778);
            (*pcVar17)();
          }
          if (9.223372036854776e+18 <= dVar46) {
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x101b0a77c);
            (*pcVar17)();
          }
          uVar38 = 0;
          lVar11 = (long)dVar46;
        }
        uVar40 = *(ulong *)(unaff_x22 + 0x3c0);
        *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x3d0);
        *(undefined1 *)(unaff_x22 + 0x60) = 0;
        *(bool *)(unaff_x22 + 0x61) = lVar16 != -1;
        *(long *)(unaff_x22 + 0x68) = lVar20;
        *(undefined1 *)(unaff_x22 + 0x70) = uVar19;
        *(byte *)(unaff_x22 + 0x71) = bVar4 & 1;
        *(undefined8 *)(unaff_x22 + 0x78) = 0;
        *(undefined8 *)(unaff_x22 + 0x80) = 0;
        *(undefined1 *)(unaff_x22 + 0x88) = 2;
        *(bool *)(unaff_x22 + 0x89) = uVar12 == uVar39;
        *(long *)(unaff_x22 + 0x90) = lVar11;
        *(undefined1 *)(unaff_x22 + 0x98) = uVar38;
        uVar18 = (ulong)*(byte *)(unaff_x22 + 0x51);
        FUN_101b172c4(unaff_x22 + 0x58);
        func_0x0001000834e4(unaff_x22 + 0x200);
        func_0x000107c61558();
        puVar41 = *(undefined **)(unaff_x22 + 0x3c0);
        puVar7 = puVar41;
        if ((uVar40 & 1) == 0) {
          uVar18 = *(long *)(puVar41 + 0x10) + 1;
          puVar7 = (undefined *)0x0;
          FUN_101b1269c(0,uVar18,1,puVar41,PTR__swift_bridgeObjectRelease_11034f258);
        }
        uVar8 = *(ulong *)(puVar7 + 0x10);
        uVar40 = uVar8 + 1;
        puStack_f8 = puVar7;
        if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar8) {
          puStack_f8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
          uVar18 = uVar40;
          FUN_101b1269c(puStack_f8,uVar40,1,puVar7,PTR__swift_bridgeObjectRelease_11034f258);
        }
        uVar15 = *(undefined8 *)(unaff_x22 + 0x3d8);
        uVar23 = *(undefined8 *)(unaff_x22 + 0x3d0);
        *(ulong *)(puStack_f8 + 0x10) = uVar40;
        puVar7 = puStack_f8 + uVar8 * 0x50;
        *(undefined8 *)(puVar7 + 0x20) = uVar23;
        puVar7[0x28] = 0;
        puVar7[0x29] = lVar16 != -1;
        *(long *)(puVar7 + 0x30) = lVar20;
        puVar7[0x38] = uVar19;
        puVar7[0x39] = bVar4 & 1;
        *(undefined8 *)(puVar7 + 0x40) = 0;
        *(undefined8 *)(puVar7 + 0x48) = 0;
        puVar7[0x50] = 2;
        puVar7[0x51] = uVar12 == uVar39;
        *(long *)(puVar7 + 0x58) = lVar11;
        goto LAB_101b09ae0;
      }
      goto LAB_101b08d40;
    }
    goto LAB_101b09bf4;
  }
  puVar31 = (undefined8 *)(lVar11 + _DAT_112e00288);
  *puVar31 = *(undefined8 *)(unaff_x22 + 0x300);
  *(undefined1 *)(puVar31 + 1) = 0;
  goto LAB_101b0a620;
  while( true ) {
    if (*(ulong *)(lVar11 + 0x10) <= uVar39) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x101b0a708);
      (*pcVar17)();
    }
    uVar40 = plVar26[-1];
    lVar16 = *plVar26;
    uVar18 = uVar40;
    func_0x000107c614f0();
    pcVar17 = *(code **)(lVar16 + 0x28);
    func_0x000107c615f0(uVar40);
    (*pcVar17)(uVar18,lVar16);
    func_0x000107c615e8(uVar40);
    plVar26 = plVar26 + 2;
    uVar40 = uVar39 + 1;
    if ((uVar18 & 1) != 0) break;
LAB_101b092e0:
    uVar39 = uVar40;
    if (uVar12 == uVar39) break;
  }
  if (uVar12 != 0) {
    uVar40 = 0;
    plVar26 = plVar35;
    do {
      if (*(ulong *)(lVar11 + 0x10) <= uVar40) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x101b0a6f8);
        (*pcVar17)();
      }
      uVar40 = uVar40 + 1;
      lVar16 = plVar26[-1];
      lVar29 = *plVar26;
      lVar20 = lVar16;
      func_0x000107c614f0(lVar16);
      pcVar17 = *(code **)(lVar29 + 0x40);
      func_0x000107c615f0(lVar16);
      (*pcVar17)(0,lVar20,lVar29);
      func_0x000107c615e8(lVar16);
      plVar26 = plVar26 + 2;
    } while (uVar12 != uVar40);
  }
  plVar26 = (long *)(*(long *)(unaff_x22 + 800) + *(long *)(unaff_x22 + 0x370));
  func_0x0001000a8868(plVar26,plVar26[3]);
  lVar16 = *plVar26;
  func_0x000107c4b940(*(undefined8 *)(lVar16 + 0x20));
  dVar44 = *(double *)(lVar16 + 0x28);
  dVar46 = 0.0;
  if (*(char *)(lVar16 + 0x38) != '\x01') {
    dVar49 = *(double *)(lVar16 + 0x30);
    (**(code **)(lVar16 + 0x10))();
    dVar46 = dVar46 - dVar49;
    if (dVar46 < 0.0) {
      dVar46 = 0.0;
    }
  }
  dVar44 = dVar44 + dVar46;
  func_0x000107c5d278(*(undefined8 *)(lVar16 + 0x20));
  uVar40 = 0xffffffffffffffff;
  do {
    lVar16 = uVar40 - uVar12;
    if (lVar16 == -1) break;
    uVar40 = uVar40 + 1;
    if (*(ulong *)(lVar11 + 0x10) <= uVar40) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x101b0a70c);
      (*pcVar17)();
    }
    uVar18 = plVar35[-1];
    lVar29 = *plVar35;
    uVar8 = uVar18;
    func_0x000107c614f0();
    pcVar17 = *(code **)(lVar29 + 0x20);
    func_0x000107c615f0(uVar18);
    (*pcVar17)(uVar8,lVar29);
    func_0x000107c615e8(uVar18);
    plVar35 = plVar35 + 2;
  } while ((uVar8 & 1) == 0);
  puStack_f0 = *(undefined **)(unaff_x22 + 0x3c8);
  puStack_100 = *(undefined **)(unaff_x22 + 0x3b0);
  lVar29 = *(long *)(unaff_x22 + 0x3a0);
  func_0x000100b6a0c4(*(long *)(unaff_x22 + 800) + *(long *)(unaff_x22 + 0x348),unaff_x22 + 0x228);
  uVar40 = *(ulong *)(unaff_x22 + 0x240);
  func_0x0001000a8868();
  lVar29 = *(long *)(lVar29 + 0x10);
  if (lVar29 != 0) {
    lVar20 = 0;
    do {
      if ((int)*(undefined8 *)(*(long *)(unaff_x22 + 0x3a0) + 0x20 + lVar20 * 8) ==
          *(int *)(unaff_x22 + 0x3d0)) {
        uVar19 = 0;
        goto joined_r0x000101b09740;
      }
      lVar20 = lVar20 + 1;
    } while (lVar29 != lVar20);
  }
  lVar20 = 0;
  uVar19 = 1;
joined_r0x000101b09740:
  if (uVar12 == 0) {
    bVar4 = 0;
  }
  else {
    if (*(long *)(lVar11 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x101b0a748);
      (*pcVar17)();
    }
    uVar23 = *(undefined8 *)(lVar11 + 0x20);
    uVar40 = *(ulong *)(*(long *)(unaff_x22 + 0x3d8) + 0x28);
    uVar15 = uVar23;
    func_0x000107c614f0();
    bVar4 = (byte)uVar15;
    pcVar17 = *(code **)(uVar40 + 0x10);
    func_0x000107c615f0(uVar23);
    (*pcVar17)();
    func_0x000107c615e8(uVar23);
  }
  lVar11 = *(long *)(*(long *)(unaff_x22 + 800) + *(long *)(unaff_x22 + 0x390));
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar29 = *(long *)(unaff_x22 + 0x3d0);
    func_0x000107c61434(lVar11);
    func_0x000101b0fc0c();
    if ((uVar40 & 1) != 0) {
      lVar33 = *(long *)(unaff_x22 + 0x398);
      lVar27 = *(long *)(unaff_x22 + 800);
      dVar46 = *(double *)(*(long *)(lVar11 + 0x38) + lVar29 * 8);
      func_0x000107c6142c(lVar11);
      dVar46 = (double)(long)((dVar46 - *(double *)(lVar27 + lVar33)) * 1000.0);
      if (0x7fefffffffffffff < (ulong)ABS(dVar46)) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x101b0a768);
        (*pcVar17)();
      }
      if (dVar46 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x101b0a76c);
        (*pcVar17)();
      }
      if (9.223372036854776e+18 <= dVar46) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x101b0a770);
        (*pcVar17)();
      }
      uVar38 = 0;
      lVar11 = (long)dVar46;
      goto LAB_101b0981c;
    }
    func_0x000107c6142c(lVar11);
  }
  lVar11 = 0;
  uVar38 = 1;
LAB_101b0981c:
  uVar40 = *(ulong *)(unaff_x22 + 0x3c0);
  *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x3d0);
  *(undefined1 *)(unaff_x22 + 0xa8) = 1;
  *(bool *)(unaff_x22 + 0xa9) = lVar16 != -1;
  *(long *)(unaff_x22 + 0xb0) = lVar20;
  *(undefined1 *)(unaff_x22 + 0xb8) = uVar19;
  *(byte *)(unaff_x22 + 0xb9) = bVar4 & 1;
  *(undefined8 *)(unaff_x22 + 0xc0) = 0;
  *(undefined8 *)(unaff_x22 + 200) = 0;
  *(undefined1 *)(unaff_x22 + 0xd0) = 2;
  *(bool *)(unaff_x22 + 0xd1) = uVar12 != uVar39;
  *(long *)(unaff_x22 + 0xd8) = lVar11;
  *(undefined1 *)(unaff_x22 + 0xe0) = uVar38;
  uVar18 = (ulong)*(byte *)(unaff_x22 + 0x51);
  FUN_101b172c4(unaff_x22 + 0xa0);
  func_0x0001000834e4(unaff_x22 + 0x228);
  func_0x000107c61558();
  puVar41 = *(undefined **)(unaff_x22 + 0x3c0);
  puVar7 = puVar41;
  if ((uVar40 & 1) == 0) {
    uVar18 = *(long *)(puVar41 + 0x10) + 1;
    puVar7 = (undefined *)0x0;
    FUN_101b1269c(0,uVar18,1,puVar41,PTR__swift_bridgeObjectRelease_11034f258);
  }
  uVar8 = *(ulong *)(puVar7 + 0x10);
  uVar40 = uVar8 + 1;
  puStack_f8 = puVar7;
  if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar8) {
    puStack_f8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
    uVar18 = uVar40;
    FUN_101b1269c(puStack_f8,uVar40,1,puVar7,PTR__swift_bridgeObjectRelease_11034f258);
  }
  uVar15 = *(undefined8 *)(unaff_x22 + 0x3d8);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x3d0);
  *(ulong *)(puStack_f8 + 0x10) = uVar40;
  puVar7 = puStack_f8 + uVar8 * 0x50;
  *(undefined8 *)(puVar7 + 0x20) = uVar23;
  puVar7[0x28] = 1;
  puVar7[0x29] = lVar16 != -1;
  *(long *)(puVar7 + 0x30) = lVar20;
  puVar7[0x38] = uVar19;
  puVar7[0x39] = bVar4 & 1;
  *(undefined8 *)(puVar7 + 0x40) = 0;
  *(undefined8 *)(puVar7 + 0x48) = 0;
  puVar7[0x50] = 2;
  puVar7[0x51] = uVar12 != uVar39;
  *(long *)(puVar7 + 0x58) = lVar11;
LAB_101b09ae0:
  puVar7[0x60] = uVar38;
  *(double *)(puVar7 + 0x68) = dVar44;
  func_0x000107c6142c(uVar15);
LAB_101b08d40:
  lVar11 = *(long *)(unaff_x22 + 0x3b8) + 1;
  if (lVar11 == *(long *)(unaff_x22 + 0x3a8)) goto LAB_101b09be4;
  goto LAB_101b08d54;
LAB_101b09be4:
  lVar11 = *(long *)(unaff_x22 + 0x3a0);
  puStack_100 = puStack_f0;
LAB_101b09bf4:
  lVar16 = *(long *)(unaff_x22 + 0x2f0);
  lVar29 = -1L << ((ulong)*(byte *)(lVar16 + 0x20) & 0x3f);
  uVar18 = -lVar29;
  uVar40 = 0xffffffffffffffff;
  if (uVar18 < 0x40) {
    uVar40 = ~(-1L << (uVar18 & 0x3f));
  }
  uVar40 = uVar40 & *(ulong *)(lVar16 + 0x40);
  func_0x000107c61434();
  lVar20 = 0;
  puVar7 = puStack_f8;
  do {
    while (uVar40 != 0) {
      uVar18 = (uVar40 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar40 & 0x5555555555555555) << 1;
      uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
      uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
      uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
      uVar40 = uVar40 - 1 & uVar40;
      uVar18 = lVar20 << 9 | LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) << 3;
      lVar27 = *(long *)(*(long *)(lVar16 + 0x30) + uVar18);
      lVar33 = *(long *)(*(long *)(lVar16 + 0x38) + uVar18);
      uVar12 = *(ulong *)(lVar33 + 0x10);
      func_0x000107c61434(lVar33);
      plVar35 = (long *)(lVar33 + 0x28);
      plVar26 = plVar35;
      uVar18 = 0;
      do {
        uVar39 = uVar18;
        if (uVar12 == uVar39) break;
        if (*(ulong *)(lVar33 + 0x10) <= uVar39) {
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x101b0a6e0);
          (*pcVar17)();
        }
        uVar18 = plVar26[-1];
        lVar36 = *plVar26;
        uVar8 = uVar18;
        func_0x000107c614f0();
        pcVar17 = *(code **)(lVar36 + 0x28);
        func_0x000107c615f0(uVar18);
        (*pcVar17)(uVar8,lVar36);
        func_0x000107c615e8(uVar18);
        plVar26 = plVar26 + 2;
        uVar18 = uVar39 + 1;
      } while ((uVar8 & 1) == 0);
      if (uVar12 != 0) {
        uVar18 = 0;
        plVar26 = plVar35;
        do {
          if (*(ulong *)(lVar33 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x101b0a6dc);
            (*pcVar17)();
          }
          uVar18 = uVar18 + 1;
          lVar36 = plVar26[-1];
          lVar24 = *plVar26;
          lVar28 = lVar36;
          func_0x000107c614f0(lVar36);
          pcVar17 = *(code **)(lVar24 + 0x40);
          func_0x000107c615f0(lVar36);
          (*pcVar17)(0,lVar28,lVar24);
          func_0x000107c615e8(lVar36);
          plVar26 = plVar26 + 2;
        } while (uVar12 != uVar18);
      }
      plVar26 = (long *)(*(long *)(unaff_x22 + 800) + *(long *)(unaff_x22 + 0x370));
      func_0x0001000a8868(plVar26,plVar26[3]);
      lVar36 = *plVar26;
      func_0x000107c4b940(*(undefined8 *)(lVar36 + 0x20));
      dVar46 = *(double *)(lVar36 + 0x28);
      dVar44 = 0.0;
      if (*(char *)(lVar36 + 0x38) != '\x01') {
        dVar49 = *(double *)(lVar36 + 0x30);
        (**(code **)(lVar36 + 0x10))();
        dVar44 = dVar44 - dVar49;
        if (dVar44 < 0.0) {
          dVar44 = 0.0;
        }
      }
      func_0x000107c5d278(*(undefined8 *)(lVar36 + 0x20));
      uVar18 = 0xffffffffffffffff;
      do {
        lVar36 = uVar18 - uVar12;
        if (lVar36 == -1) break;
        uVar18 = uVar18 + 1;
        if (*(ulong *)(lVar33 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x101b0a6e4);
          (*pcVar17)();
        }
        uVar8 = plVar35[-1];
        lVar24 = *plVar35;
        uVar9 = uVar8;
        func_0x000107c614f0();
        pcVar17 = *(code **)(lVar24 + 0x20);
        func_0x000107c615f0(uVar8);
        (*pcVar17)(uVar9,lVar24);
        func_0x000107c615e8(uVar8);
        plVar35 = plVar35 + 2;
      } while ((uVar9 & 1) == 0);
      lVar24 = *(long *)(unaff_x22 + 0x3a0);
      func_0x000100b6a0c4(*(long *)(unaff_x22 + 800) + *(long *)(unaff_x22 + 0x348),
                          unaff_x22 + 0x1b0);
      uVar18 = *(ulong *)(unaff_x22 + 0x1c8);
      func_0x0001000a8868();
      lVar24 = *(long *)(lVar24 + 0x10);
      if (lVar24 == 0) {
        lVar28 = 0;
        uVar19 = 1;
        if (uVar12 == 0) goto LAB_101b09f2c;
LAB_101b09ed4:
        if (*(long *)(lVar33 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x101b0a720);
          (*pcVar17)();
        }
        uVar15 = *(undefined8 *)(lVar33 + 0x20);
        uVar18 = *(ulong *)(lVar33 + 0x28);
        uVar23 = uVar15;
        func_0x000107c614f0();
        lStack_120._0_1_ = (byte)uVar23;
        pcVar17 = *(code **)(uVar18 + 0x10);
        func_0x000107c615f0(uVar15);
        (*pcVar17)();
        func_0x000107c615e8(uVar15);
      }
      else {
        lVar28 = 0;
        do {
          if ((int)*(undefined8 *)(lVar11 + 0x20 + lVar28 * 8) == (int)lVar27) {
            uVar19 = 0;
            goto joined_r0x000101b09f28;
          }
          lVar28 = lVar28 + 1;
        } while (lVar24 != lVar28);
        lVar28 = 0;
        uVar19 = 1;
joined_r0x000101b09f28:
        if (uVar12 != 0) goto LAB_101b09ed4;
LAB_101b09f2c:
        lStack_120._0_1_ = 0;
      }
      lVar24 = *(long *)(*(long *)(unaff_x22 + 800) + *(long *)(unaff_x22 + 0x390));
      if (*(long *)(lVar24 + 0x10) == 0) {
LAB_101b09fd8:
        lVar24 = 0;
        uVar38 = 1;
      }
      else {
        func_0x000107c61434(lVar24);
        lVar43 = lVar27;
        func_0x000101b0fc0c();
        if ((uVar18 & 1) == 0) {
          func_0x000107c6142c(lVar24);
          goto LAB_101b09fd8;
        }
        lVar13 = *(long *)(unaff_x22 + 0x398);
        lVar30 = *(long *)(unaff_x22 + 800);
        dVar49 = *(double *)(*(long *)(lVar24 + 0x38) + lVar43 * 8);
        func_0x000107c6142c(lVar24);
        dVar49 = (double)(long)((dVar49 - *(double *)(lVar30 + lVar13)) * 1000.0);
        if (0x7fefffffffffffff < (ulong)ABS(dVar49)) {
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x101b0a73c);
          (*pcVar17)();
        }
        if (dVar49 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x101b0a740);
          (*pcVar17)();
        }
        if (9.223372036854776e+18 <= dVar49) {
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x101b0a744);
          (*pcVar17)();
        }
        uVar38 = 0;
        lVar24 = (long)dVar49;
      }
      *(long *)(unaff_x22 + 0xe8) = lVar27;
      *(undefined1 *)(unaff_x22 + 0xf0) = 2;
      *(bool *)(unaff_x22 + 0xf1) = lVar36 != -1;
      *(long *)(unaff_x22 + 0xf8) = lVar28;
      *(undefined1 *)(unaff_x22 + 0x100) = uVar19;
      *(byte *)(unaff_x22 + 0x101) = (byte)lStack_120 & 1;
      *(undefined8 *)(unaff_x22 + 0x108) = 0;
      *(undefined8 *)(unaff_x22 + 0x110) = 0;
      *(undefined1 *)(unaff_x22 + 0x118) = 2;
      *(bool *)(unaff_x22 + 0x119) = uVar12 != uVar39;
      *(long *)(unaff_x22 + 0x120) = lVar24;
      *(undefined1 *)(unaff_x22 + 0x128) = uVar38;
      FUN_101b172c4(unaff_x22 + 0xe8,*(undefined1 *)(unaff_x22 + 0x51));
      func_0x0001000834e4(unaff_x22 + 0x1b0);
      puVar41 = puVar7;
      func_0x000107c61558();
      puStack_f8 = puVar7;
      if (((ulong)puVar41 & 1) == 0) {
        puStack_f8 = (undefined *)0x0;
        FUN_101b1269c(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7,
                      PTR__swift_bridgeObjectRelease_11034f258);
      }
      uVar18 = *(ulong *)(puStack_f8 + 0x10);
      if (*(ulong *)(puStack_f8 + 0x18) >> 1 <= uVar18) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puStack_f8 + 0x18));
        FUN_101b1269c(puVar7,uVar18 + 1,1,puStack_f8,PTR__swift_bridgeObjectRelease_11034f258);
        puStack_f8 = puVar7;
      }
      *(ulong *)(puStack_f8 + 0x10) = uVar18 + 1;
      *(long *)(puStack_f8 + uVar18 * 0x50 + 0x20) = lVar27;
      puStack_f8[uVar18 * 0x50 + 0x28] = 2;
      puStack_f8[uVar18 * 0x50 + 0x29] = lVar36 != -1;
      *(long *)(puStack_f8 + uVar18 * 0x50 + 0x30) = lVar28;
      puStack_f8[uVar18 * 0x50 + 0x38] = uVar19;
      puStack_f8[uVar18 * 0x50 + 0x39] = (byte)lStack_120 & 1;
      *(undefined8 *)(puStack_f8 + uVar18 * 0x50 + 0x40) = 0;
      *(undefined8 *)(puStack_f8 + uVar18 * 0x50 + 0x48) = 0;
      puStack_f8[uVar18 * 0x50 + 0x50] = 2;
      puStack_f8[uVar18 * 0x50 + 0x51] = uVar12 != uVar39;
      *(long *)(puStack_f8 + uVar18 * 0x50 + 0x58) = lVar24;
      puStack_f8[uVar18 * 0x50 + 0x60] = uVar38;
      *(double *)(puStack_f8 + uVar18 * 0x50 + 0x68) = dVar46 + dVar44;
      func_0x000107c6142c(lVar33);
      puVar7 = puStack_f8;
    }
    bVar3 = SCARRY8(lVar20,1);
    lVar20 = lVar20 + 1;
    if (bVar3) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x101b0a704);
      (*pcVar17)();
    }
    if ((long)(0x3fU - lVar29 >> 6) <= lVar20) break;
    uVar40 = ((ulong *)(lVar16 + 0x40))[lVar20];
  } while( true );
  func_0x000107c61574(lVar16);
  puVar41 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar29 = *(long *)(puVar7 + 0x10);
  if (lVar29 == 0) {
    func_0x000107c61434(puVar7);
    puVar41 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000107c61434(puVar7);
    func_0x000101b12234(0,lVar29,0);
    puVar31 = (undefined8 *)(puVar7 + 0x20);
    lVar20 = *(ulong *)(puVar41 + 0x10) * 0x48 + 0x20;
    uVar40 = *(ulong *)(puVar41 + 0x10);
    do {
      uStack_b8 = puVar31[3];
      uStack_c0 = puVar31[2];
      uStack_a8 = puVar31[5];
      uStack_b0 = puVar31[4];
      uStack_98 = puVar31[7];
      uStack_a0 = puVar31[6];
      uStack_90 = *(undefined1 *)(puVar31 + 8);
      uStack_c8 = puVar31[1];
      puStack_d0 = (undefined *)*puVar31;
      uVar18 = uVar40 + 1;
      if (*(ulong *)(puVar41 + 0x18) >> 1 <= uVar40) {
        func_0x000101b12234(1 < *(ulong *)(puVar41 + 0x18),uVar18,1);
      }
      *(ulong *)(puVar41 + 0x10) = uVar18;
      puVar1 = (undefined8 *)(puVar41 + lVar20);
      puVar1[1] = uStack_c8;
      *puVar1 = puStack_d0;
      *(undefined1 *)(puVar1 + 8) = uStack_90;
      puVar1[5] = uStack_a8;
      puVar1[4] = uStack_b0;
      puVar1[7] = uStack_98;
      puVar1[6] = uStack_a0;
      puVar1[3] = uStack_b8;
      puVar1[2] = uStack_c0;
      lVar20 = lVar20 + 0x48;
      puVar31 = puVar31 + 10;
      lVar29 = lVar29 + -1;
      uVar40 = uVar18;
    } while (lVar29 != 0);
  }
  lVar20 = *(long *)(unaff_x22 + 0x388);
  lVar27 = *(long *)(unaff_x22 + 0x350);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x340);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x338);
  lVar33 = *(long *)(unaff_x22 + 0x330);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x328);
  lVar29 = *(long *)(unaff_x22 + 800);
  plVar35 = *(long **)(unaff_x22 + 0x2f8);
  FUN_101b153b0(puVar41);
  func_0x000107c6142c(puVar41);
  (**(code **)(lVar33 + 0x10))(uVar15,uVar23,uVar22);
  uVar19 = (undefined1)uVar23;
  uVar23 = *(undefined8 *)(lVar29 + lVar27);
  FUN_101b0cc18();
  lVar27 = *plVar35;
  lVar29 = *(long *)(*(long *)(lVar29 + lVar20) + 0x10);
  if (SBORROW8(lVar27,lVar29)) {
                    /* WARNING: Does not return */
    pcVar17 = (code *)SoftwareBreakpoint(1,0x101b0a74c);
    (*pcVar17)();
  }
  plVar35 = (long *)(*(long *)(unaff_x22 + 800) + *(long *)(unaff_x22 + 0x370));
  lVar20 = plVar35[3];
  func_0x0001000a8868();
  lVar33 = *plVar35;
  func_0x000107c4b940(*(undefined8 *)(lVar33 + 0x20));
  dVar46 = *(double *)(lVar33 + 0x28);
  dVar44 = 0.0;
  if (*(char *)(lVar33 + 0x38) != '\x01') {
    dVar49 = *(double *)(lVar33 + 0x30);
    (**(code **)(lVar33 + 0x10))();
    dVar44 = dVar44 - dVar49;
    if (dVar44 < 0.0) {
      dVar44 = 0.0;
    }
  }
  dVar49 = *(double *)(unaff_x22 + 0x380);
  dVar45 = *(double *)(unaff_x22 + 0x378);
  uVar22 = *(undefined8 *)(lVar33 + 0x20);
  func_0x000107c5d278();
  dVar44 = (double)(long)(((dVar46 + dVar44) - (dVar49 + dVar45)) * 1000.0);
  if (0x7fefffffffffffff < (ulong)ABS(dVar44)) {
                    /* WARNING: Does not return */
    pcVar17 = (code *)SoftwareBreakpoint(1,0x101b0a750);
    (*pcVar17)();
  }
  if (dVar44 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar17 = (code *)SoftwareBreakpoint(1,0x101b0a754);
    (*pcVar17)();
  }
  if (9.223372036854776e+18 <= dVar44) {
                    /* WARNING: Does not return */
    pcVar17 = (code *)SoftwareBreakpoint(1,0x101b0a758);
    (*pcVar17)();
  }
  if (*(char *)(*(long *)(unaff_x22 + 0x2f8) + 0x20) == '\x01') {
    lStack_120 = 0;
    uStack_138 = 0;
    uStack_130 = 1;
  }
  else {
    dVar46 = *(double *)(*(long *)(unaff_x22 + 0x2f8) + 0x18) * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(dVar46)) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x101b0a780);
      (*pcVar17)();
    }
    if (dVar46 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x101b0a784);
      (*pcVar17)();
    }
    if (9.223372036854776e+18 <= dVar46) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x101b0a788);
      (*pcVar17)();
    }
    uStack_130 = 0;
    lStack_120 = (long)dVar46;
    uStack_138 = 1;
  }
  lVar33 = *(long *)(unaff_x22 + 0x3a8);
  func_0x000107c5eeac();
  puVar41 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar25 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar33 != 0) {
    lVar33 = 0;
    do {
      if (*(long *)(lVar11 + 0x20 + lVar33 * 8) == 0) {
        puVar10 = puVar25;
        func_0x000107c61558();
        puStack_d0 = puVar25;
        if (((ulong)puVar10 & 1) == 0) {
          func_0x000101b121d0(0,*(long *)(puVar25 + 0x10) + 1,1);
        }
        uVar40 = *(ulong *)(puStack_d0 + 0x10);
        if (*(ulong *)(puStack_d0 + 0x18) >> 1 <= uVar40) {
          func_0x000101b121d0(1 < *(ulong *)(puStack_d0 + 0x18),uVar40 + 1,1);
        }
        *(ulong *)(puStack_d0 + 0x10) = uVar40 + 1;
        *(undefined8 *)(puStack_d0 + uVar40 * 8 + 0x20) = 0;
        puVar25 = puStack_d0;
      }
      lVar33 = lVar33 + 1;
    } while (lVar33 != *(long *)(unaff_x22 + 0x3a8));
  }
  uVar37 = *(undefined8 *)(unaff_x22 + 0x3a0);
  dVar46 = *(double *)(unaff_x22 + 0x380);
  dVar49 = *(double *)(unaff_x22 + 0x378);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x340);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x328);
  lVar33 = *(long *)(unaff_x22 + 800);
  uVar32 = *(undefined8 *)(unaff_x22 + 0x318);
  uVar47 = *(undefined8 *)(unaff_x22 + 0x310);
  uVar48 = *(undefined8 *)(unaff_x22 + 0x308);
  uVar50 = *(undefined8 *)(unaff_x22 + 0x300);
  uVar38 = *(undefined1 *)(unaff_x22 + 0x51);
  uVar42 = *(undefined8 *)(unaff_x22 + 0x2f8);
  pcVar17 = *(code **)(*(long *)(unaff_x22 + 0x330) + 8);
  (*pcVar17)(*(undefined8 *)(unaff_x22 + 0x338),uVar21);
  lVar11 = 0;
  func_0x000101b1ee28();
  func_0x000107c613fc();
  FUN_101b14780(uVar42,unaff_x22 + 0x178);
  func_0x000107c61434(puStack_100);
  puVar10 = puVar41;
  FUN_101af9834();
  *(undefined **)(lVar11 + 0x98) = puVar10;
  *(undefined1 *)(lVar11 + 0xa0) = 0;
  *(undefined **)(lVar11 + 200) = puVar41;
  *(undefined **)(lVar11 + 0xd0) = puVar41;
  puVar10 = puVar41;
  FUN_101af9848();
  *(undefined **)(lVar11 + 0xd8) = puVar10;
  puVar10 = puVar41;
  FUN_101af9944();
  *(undefined **)(lVar11 + 0xe0) = puVar10;
  *(undefined **)(lVar11 + 0xe8) = puVar41;
  *(undefined8 *)(lVar11 + 0x10) = uVar22;
  *(long *)(lVar11 + 0x18) = lVar20;
  *(undefined8 *)(lVar11 + 0x20) = uVar23;
  *(undefined1 *)(lVar11 + 0x28) = uVar38;
  *(long *)(lVar11 + 0x30) = lVar27;
  *(undefined8 *)(lVar11 + 0x38) = uVar37;
  *(undefined **)(lVar11 + 0x40) = puVar25;
  *(undefined1 *)(lVar11 + 0x48) = uStack_138;
  *(long *)(lVar11 + 0x50) = lStack_120;
  *(undefined1 *)(lVar11 + 0x58) = uStack_130;
  *(undefined8 *)(lVar11 + 0x60) = uVar15;
  *(undefined1 *)(lVar11 + 0x68) = uVar19;
  *(long *)(lVar11 + 0x70) = lVar27 - lVar29;
  *(long *)(lVar11 + 0x78) = (long)dVar44;
  *(undefined **)(lVar11 + 0x90) = puVar7;
  *(double *)(lVar11 + 0x80) = dVar46 + dVar49;
  *(undefined8 *)(lVar11 + 0x88) = uVar50;
  *(undefined8 *)(lVar11 + 0xa8) = uVar48;
  *(undefined8 *)(lVar11 + 0xb0) = uVar47;
  *(undefined8 *)(lVar11 + 0xb8) = uVar32;
  *(undefined **)(lVar11 + 0xc0) = puStack_100;
  uVar15 = *(undefined8 *)(lVar33 + _DAT_112e001c8);
  *(long *)(lVar33 + _DAT_112e001c8) = lVar11;
  func_0x000107c61574(uVar15);
  FUN_101b0c2bc();
  func_0x000107c6142c(lVar16);
  (*pcVar17)(uVar14,uVar21);
  func_0x000107c6142c(puStack_100);
  func_0x000107c6142c(puVar7);
  func_0x0001002a64a8();
LAB_101b0a620:
  uVar15 = *(undefined8 *)(unaff_x22 + 0x338);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x340));
  func_0x000107c615c0(uVar15);
                    /* WARNING: Could not recover jumptable at 0x000101b0a65c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101b0a794; end: 101b0a7ef;  */

void FUN_101b0a794(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar1 + 800);
  *(undefined8 *)(lVar1 + 1000) = param_1;
  *(undefined8 *)(lVar1 + 0x3f0) = param_2;
  *(undefined1 *)(lVar1 + 0x52) = param_3;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x3e0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b0a7f0,uVar2,0);
  return;
}



/* Entry: 101b0a7f0; end: 101b0c2bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b0a7f0(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined1 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  undefined *puVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  long unaff_x22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined8 *puVar27;
  undefined8 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  ulong uVar31;
  long lVar32;
  undefined8 uVar33;
  code *pcVar34;
  ulong uVar35;
  ulong uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  byte bVar39;
  long lVar40;
  byte bVar41;
  ulong uVar42;
  long lVar43;
  double dVar44;
  double dVar45;
  undefined8 uVar46;
  double dVar47;
  undefined8 uVar48;
  double dVar49;
  undefined8 uVar50;
  undefined1 uStack_158;
  undefined1 uStack_154;
  long lStack_150;
  undefined *puStack_140;
  undefined *puStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  
  bVar41 = *(byte *)(unaff_x22 + 0x52);
  uStack_f8 = *(undefined8 *)(unaff_x22 + 0x3f0);
  uStack_100 = *(undefined8 *)(unaff_x22 + 1000);
LAB_101b0a838:
  uVar31 = 0;
  lVar32 = *(long *)(unaff_x22 + 0x3d8);
  uVar42 = *(ulong *)(lVar32 + 0x10);
  plVar21 = (long *)(lVar32 + 0x28);
  plVar20 = plVar21;
  do {
    if (uVar42 == uVar31) {
      plVar20 = plVar21;
      uVar31 = 0;
      goto LAB_101b0aac0;
    }
    if (*(ulong *)(lVar32 + 0x10) <= uVar31) {
                    /* WARNING: Does not return */
      pcVar34 = (code *)SoftwareBreakpoint(1,0x101b0c1c0);
      (*pcVar34)();
    }
    uVar31 = uVar31 + 1;
    uVar35 = plVar20[-1];
    lVar23 = *plVar20;
    uVar36 = uVar35;
    func_0x000107c614f0();
    pcVar34 = *(code **)(lVar23 + 0x20);
    func_0x000107c615f0(uVar35);
    (*pcVar34)(uVar36,lVar23);
    func_0x000107c615e8(uVar35);
    plVar20 = plVar20 + 2;
  } while ((uVar36 & 1) == 0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x3d0);
  func_0x000107c61428(*(long *)(unaff_x22 + 800) + *(long *)(unaff_x22 + 0x388),unaff_x22 + 0x2c0,
                      0x21,0);
  FUN_101b0edec(&puStack_d0,uVar14);
  func_0x000107c614a8(unaff_x22 + 0x2c0);
  plVar20 = plVar21;
  uVar31 = 0;
  do {
    uVar35 = uVar31;
    if (uVar42 == uVar35) break;
    if (*(ulong *)(lVar32 + 0x10) <= uVar35) {
                    /* WARNING: Does not return */
      pcVar34 = (code *)SoftwareBreakpoint(1,0x101b0c1e0);
      (*pcVar34)();
    }
    uVar31 = plVar20[-1];
    lVar23 = *plVar20;
    uVar36 = uVar31;
    func_0x000107c614f0();
    pcVar34 = *(code **)(lVar23 + 0x28);
    func_0x000107c615f0(uVar31);
    (*pcVar34)(uVar36,lVar23);
    func_0x000107c615e8(uVar31);
    plVar20 = plVar20 + 2;
    uVar31 = uVar35 + 1;
  } while ((uVar36 & 1) == 0);
  uVar31 = 0;
  plVar20 = plVar21;
  do {
    if (*(ulong *)(lVar32 + 0x10) <= uVar31) {
                    /* WARNING: Does not return */
      pcVar34 = (code *)SoftwareBreakpoint(1,0x101b0c1c4);
      (*pcVar34)();
    }
    uVar31 = uVar31 + 1;
    lVar23 = plVar20[-1];
    lVar16 = *plVar20;
    lVar43 = lVar23;
    func_0x000107c614f0(lVar23);
    pcVar34 = *(code **)(lVar16 + 0x40);
    func_0x000107c615f0(lVar23);
    (*pcVar34)(1,lVar43,lVar16);
    func_0x000107c615e8(lVar23);
    plVar20 = plVar20 + 2;
  } while (uVar42 != uVar31);
  plVar20 = (long *)(*(long *)(unaff_x22 + 800) + *(long *)(unaff_x22 + 0x370));
  func_0x0001000a8868(plVar20,plVar20[3]);
  lVar23 = *plVar20;
  func_0x000107c4b940(*(undefined8 *)(lVar23 + 0x20));
  dVar47 = *(double *)(lVar23 + 0x28);
  dVar44 = 0.0;
  if (*(char *)(lVar23 + 0x38) != '\x01') {
    dVar49 = *(double *)(lVar23 + 0x30);
    (**(code **)(lVar23 + 0x10))();
    dVar44 = dVar44 - dVar49;
    if (dVar44 < 0.0) {
      dVar44 = 0.0;
    }
  }
  dVar47 = dVar47 + dVar44;
  func_0x000107c5d278(*(undefined8 *)(lVar23 + 0x20));
  uVar31 = 0xffffffffffffffff;
  do {
    lVar23 = uVar31 - uVar42;
    if (lVar23 == -1) break;
    uVar31 = uVar31 + 1;
    if (*(ulong *)(lVar32 + 0x10) <= uVar31) {
                    /* WARNING: Does not return */
      pcVar34 = (code *)SoftwareBreakpoint(1,0x101b0c1e4);
      (*pcVar34)();
    }
    uVar36 = plVar21[-1];
    lVar16 = *plVar21;
    uVar8 = uVar36;
    func_0x000107c614f0();
    pcVar34 = *(code **)(lVar16 + 0x20);
    func_0x000107c615f0(uVar36);
    (*pcVar34)(uVar8,lVar16);
    func_0x000107c615e8(uVar36);
    plVar21 = plVar21 + 2;
  } while ((uVar8 & 1) == 0);
  puStack_110 = *(undefined **)(unaff_x22 + 0x3b0);
  if ((bVar41 & 1) == 0) {
    puStack_140 = *(undefined **)(unaff_x22 + 0x3c8);
  }
  else {
    uVar14 = *(undefined8 *)(unaff_x22 + 0x3d0);
    puVar5 = puStack_110;
    func_0x000107c61558(puStack_110);
    puStack_d0 = puStack_110;
    FUN_101b0ff5c(lVar23 != -1,uVar14,puVar5);
    puStack_140 = puStack_d0;
    puStack_110 = puStack_d0;
  }
  lVar16 = *(long *)(unaff_x22 + 0x3a0);
  func_0x000100b6a0c4(*(long *)(unaff_x22 + 800) + *(long *)(unaff_x22 + 0x348),unaff_x22 + 0x200);
  func_0x0001000a8868(unaff_x22 + 0x200,*(undefined8 *)(unaff_x22 + 0x218));
  lVar16 = *(long *)(lVar16 + 0x10);
  if (lVar16 != 0) {
    lVar43 = 0;
    do {
      if ((int)*(undefined8 *)(*(long *)(unaff_x22 + 0x3a0) + 0x20 + lVar43 * 8) ==
          *(int *)(unaff_x22 + 0x3d0)) {
        uVar10 = 0;
        lVar16 = *(long *)(lVar32 + 0x10);
        goto joined_r0x000101b0af48;
      }
      lVar43 = lVar43 + 1;
    } while (lVar16 != lVar43);
  }
  lVar43 = 0;
  uVar10 = 1;
  lVar16 = *(long *)(lVar32 + 0x10);
joined_r0x000101b0af48:
  if (lVar16 == 0) {
                    /* WARNING: Does not return */
    pcVar34 = (code *)SoftwareBreakpoint(1,0x101b0c284);
    (*pcVar34)();
  }
  lVar24 = *(long *)(unaff_x22 + 0x390);
  lVar16 = *(long *)(unaff_x22 + 800);
  uVar17 = *(undefined8 *)(lVar32 + 0x20);
  uVar31 = *(ulong *)(*(long *)(unaff_x22 + 0x3d8) + 0x28);
  uVar14 = uVar17;
  func_0x000107c614f0();
  bVar39 = (byte)uVar14;
  pcVar34 = *(code **)(uVar31 + 0x10);
  func_0x000107c615f0(uVar17);
  (*pcVar34)();
  func_0x000107c615e8(uVar17);
  lVar32 = *(long *)(lVar16 + lVar24);
  if (*(long *)(lVar32 + 0x10) == 0) {
LAB_101b0b040:
    lVar32 = 0;
    uVar30 = 1;
  }
  else {
    lVar16 = *(long *)(unaff_x22 + 0x3d0);
    func_0x000107c61434(lVar32);
    func_0x000101b0fc0c();
    if ((uVar31 & 1) == 0) {
      func_0x000107c6142c(lVar32);
      goto LAB_101b0b040;
    }
    lVar25 = *(long *)(unaff_x22 + 0x398);
    lVar24 = *(long *)(unaff_x22 + 800);
    dVar44 = *(double *)(*(long *)(lVar32 + 0x38) + lVar16 * 8);
    func_0x000107c6142c(lVar32);
    dVar44 = (double)(long)((dVar44 - *(double *)(lVar24 + lVar25)) * 1000.0);
    if (0x7fefffffffffffff < (ulong)ABS(dVar44)) {
                    /* WARNING: Does not return */
      pcVar34 = (code *)SoftwareBreakpoint(1,0x101b0c2b4);
      (*pcVar34)();
    }
    if (dVar44 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar34 = (code *)SoftwareBreakpoint(1,0x101b0c2b8);
      (*pcVar34)();
    }
    if (9.223372036854776e+18 <= dVar44) {
                    /* WARNING: Does not return */
      pcVar34 = (code *)SoftwareBreakpoint(1,0x101b0c2bc);
      (*pcVar34)();
    }
    uVar30 = 0;
    lVar32 = (long)dVar44;
  }
  bVar3 = lVar23 != -1;
  bVar4 = uVar42 == uVar35;
  uVar35 = *(ulong *)(unaff_x22 + 0x3c0);
  bVar39 = bVar39 & 1;
  *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x3d0);
  *(undefined1 *)(unaff_x22 + 0x60) = 0;
  *(bool *)(unaff_x22 + 0x61) = bVar3;
  *(long *)(unaff_x22 + 0x68) = lVar43;
  *(undefined1 *)(unaff_x22 + 0x70) = uVar10;
  *(byte *)(unaff_x22 + 0x71) = bVar39;
  *(undefined8 *)(unaff_x22 + 0x78) = uStack_100;
  *(undefined8 *)(unaff_x22 + 0x80) = uStack_f8;
  *(byte *)(unaff_x22 + 0x88) = bVar41;
  *(bool *)(unaff_x22 + 0x89) = bVar4;
  *(long *)(unaff_x22 + 0x90) = lVar32;
  *(undefined1 *)(unaff_x22 + 0x98) = uVar30;
  uVar31 = (ulong)*(byte *)(unaff_x22 + 0x51);
  FUN_101b172c4(unaff_x22 + 0x58);
  func_0x0001000834e4(unaff_x22 + 0x200);
  func_0x000107c61558();
  uVar36 = *(ulong *)(unaff_x22 + 0x3c0);
  uVar42 = uVar36;
  if ((uVar35 & 1) == 0) {
    uVar31 = *(long *)(uVar36 + 0x10) + 1;
    uVar42 = 0;
    FUN_101b1269c(0,uVar31,1,uVar36,PTR__swift_bridgeObjectRelease_11034f258);
  }
  uVar36 = *(ulong *)(uVar42 + 0x10);
  uVar35 = uVar36 + 1;
  uVar8 = uVar42;
  if (*(ulong *)(uVar42 + 0x18) >> 1 <= uVar36) {
    uVar8 = (ulong)(1 < *(ulong *)(uVar42 + 0x18));
    uVar31 = uVar35;
    FUN_101b1269c(uVar8,uVar35,1,uVar42,PTR__swift_bridgeObjectRelease_11034f258);
  }
  uVar29 = 0;
  goto LAB_101b0b0e4;
  while( true ) {
    if (*(ulong *)(lVar32 + 0x10) <= uVar35) {
                    /* WARNING: Does not return */
      pcVar34 = (code *)SoftwareBreakpoint(1,0x101b0c1d8);
      (*pcVar34)();
    }
    uVar31 = plVar20[-1];
    lVar23 = *plVar20;
    uVar36 = uVar31;
    func_0x000107c614f0();
    pcVar34 = *(code **)(lVar23 + 0x28);
    func_0x000107c615f0(uVar31);
    (*pcVar34)(uVar36,lVar23);
    func_0x000107c615e8(uVar31);
    plVar20 = plVar20 + 2;
    uVar31 = uVar35 + 1;
    if ((uVar36 & 1) != 0) break;
LAB_101b0aac0:
    uVar35 = uVar31;
    if (uVar42 == uVar35) break;
  }
  if (uVar42 != 0) {
    uVar31 = 0;
    plVar20 = plVar21;
    do {
      if (*(ulong *)(lVar32 + 0x10) <= uVar31) {
                    /* WARNING: Does not return */
        pcVar34 = (code *)SoftwareBreakpoint(1,0x101b0c1cc);
        (*pcVar34)();
      }
      uVar31 = uVar31 + 1;
      lVar23 = plVar20[-1];
      lVar16 = *plVar20;
      lVar43 = lVar23;
      func_0x000107c614f0(lVar23);
      pcVar34 = *(code **)(lVar16 + 0x40);
      func_0x000107c615f0(lVar23);
      (*pcVar34)(0,lVar43,lVar16);
      func_0x000107c615e8(lVar23);
      plVar20 = plVar20 + 2;
    } while (uVar42 != uVar31);
  }
  plVar20 = (long *)(*(long *)(unaff_x22 + 800) + *(long *)(unaff_x22 + 0x370));
  func_0x0001000a8868(plVar20,plVar20[3]);
  lVar23 = *plVar20;
  func_0x000107c4b940(*(undefined8 *)(lVar23 + 0x20));
  dVar47 = *(double *)(lVar23 + 0x28);
  dVar44 = 0.0;
  if (*(char *)(lVar23 + 0x38) != '\x01') {
    dVar49 = *(double *)(lVar23 + 0x30);
    (**(code **)(lVar23 + 0x10))();
    dVar44 = dVar44 - dVar49;
    if (dVar44 < 0.0) {
      dVar44 = 0.0;
    }
  }
  dVar47 = dVar47 + dVar44;
  func_0x000107c5d278(*(undefined8 *)(lVar23 + 0x20));
  uVar31 = 0xffffffffffffffff;
  do {
    lVar23 = uVar31 - uVar42;
    if (lVar23 == -1) break;
    uVar31 = uVar31 + 1;
    if (*(ulong *)(lVar32 + 0x10) <= uVar31) {
                    /* WARNING: Does not return */
      pcVar34 = (code *)SoftwareBreakpoint(1,0x101b0c1dc);
      (*pcVar34)();
    }
    uVar36 = plVar21[-1];
    lVar16 = *plVar21;
    uVar8 = uVar36;
    func_0x000107c614f0();
    pcVar34 = *(code **)(lVar16 + 0x20);
    func_0x000107c615f0(uVar36);
    (*pcVar34)(uVar8,lVar16);
    func_0x000107c615e8(uVar36);
    plVar21 = plVar21 + 2;
  } while ((uVar8 & 1) == 0);
  puStack_110 = *(undefined **)(unaff_x22 + 0x3b0);
  if ((bVar41 & 1) == 0) {
    puStack_140 = *(undefined **)(unaff_x22 + 0x3c8);
  }
  else {
    uVar14 = *(undefined8 *)(unaff_x22 + 0x3d0);
    puVar5 = puStack_110;
    func_0x000107c61558(puStack_110);
    puStack_d0 = puStack_110;
    FUN_101b0ff5c(lVar23 != -1,uVar14,puVar5);
    puStack_140 = puStack_d0;
    puStack_110 = puStack_d0;
  }
  lVar16 = *(long *)(unaff_x22 + 0x3a0);
  func_0x000100b6a0c4(*(long *)(unaff_x22 + 800) + *(long *)(unaff_x22 + 0x348),unaff_x22 + 0x228);
  uVar31 = *(ulong *)(unaff_x22 + 0x240);
  func_0x0001000a8868();
  lVar16 = *(long *)(lVar16 + 0x10);
  if (lVar16 != 0) {
    lVar43 = 0;
    do {
      if ((int)*(undefined8 *)(*(long *)(unaff_x22 + 0x3a0) + 0x20 + lVar43 * 8) ==
          *(int *)(unaff_x22 + 0x3d0)) {
        uVar10 = 0;
        goto joined_r0x000101b0adbc;
      }
      lVar43 = lVar43 + 1;
    } while (lVar16 != lVar43);
  }
  lVar43 = 0;
  uVar10 = 1;
joined_r0x000101b0adbc:
  if (uVar42 == 0) {
    bVar39 = 0;
  }
  else {
    if (*(long *)(lVar32 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar34 = (code *)SoftwareBreakpoint(1,0x101b0c298);
      (*pcVar34)();
    }
    uVar17 = *(undefined8 *)(lVar32 + 0x20);
    uVar31 = *(ulong *)(*(long *)(unaff_x22 + 0x3d8) + 0x28);
    uVar14 = uVar17;
    func_0x000107c614f0();
    bVar39 = (byte)uVar14;
    pcVar34 = *(code **)(uVar31 + 0x10);
    func_0x000107c615f0(uVar17);
    (*pcVar34)();
    func_0x000107c615e8(uVar17);
  }
  lVar32 = *(long *)(*(long *)(unaff_x22 + 800) + *(long *)(unaff_x22 + 0x390));
  if (*(long *)(lVar32 + 0x10) != 0) {
    lVar16 = *(long *)(unaff_x22 + 0x3d0);
    func_0x000107c61434(lVar32);
    func_0x000101b0fc0c();
    if ((uVar31 & 1) != 0) {
      lVar25 = *(long *)(unaff_x22 + 0x398);
      lVar24 = *(long *)(unaff_x22 + 800);
      dVar44 = *(double *)(*(long *)(lVar32 + 0x38) + lVar16 * 8);
      func_0x000107c6142c(lVar32);
      dVar44 = (double)(long)((dVar44 - *(double *)(lVar24 + lVar25)) * 1000.0);
      if (0x7fefffffffffffff < (ulong)ABS(dVar44)) {
                    /* WARNING: Does not return */
        pcVar34 = (code *)SoftwareBreakpoint(1,0x101b0c2a8);
        (*pcVar34)();
      }
      if (dVar44 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar34 = (code *)SoftwareBreakpoint(1,0x101b0c2ac);
        (*pcVar34)();
      }
      if (9.223372036854776e+18 <= dVar44) {
                    /* WARNING: Does not return */
        pcVar34 = (code *)SoftwareBreakpoint(1,0x101b0c2b0);
        (*pcVar34)();
      }
      uVar30 = 0;
      lVar32 = (long)dVar44;
      goto LAB_101b0ae9c;
    }
    func_0x000107c6142c(lVar32);
  }
  lVar32 = 0;
  uVar30 = 1;
LAB_101b0ae9c:
  bVar3 = lVar23 != -1;
  bVar4 = uVar42 != uVar35;
  uVar35 = *(ulong *)(unaff_x22 + 0x3c0);
  bVar39 = bVar39 & 1;
  *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x3d0);
  *(undefined1 *)(unaff_x22 + 0xa8) = 1;
  *(bool *)(unaff_x22 + 0xa9) = bVar3;
  *(long *)(unaff_x22 + 0xb0) = lVar43;
  *(undefined1 *)(unaff_x22 + 0xb8) = uVar10;
  *(byte *)(unaff_x22 + 0xb9) = bVar39;
  *(undefined8 *)(unaff_x22 + 0xc0) = uStack_100;
  *(undefined8 *)(unaff_x22 + 200) = uStack_f8;
  *(byte *)(unaff_x22 + 0xd0) = bVar41;
  *(bool *)(unaff_x22 + 0xd1) = bVar4;
  *(long *)(unaff_x22 + 0xd8) = lVar32;
  *(undefined1 *)(unaff_x22 + 0xe0) = uVar30;
  uVar31 = (ulong)*(byte *)(unaff_x22 + 0x51);
  FUN_101b172c4(unaff_x22 + 0xa0);
  func_0x0001000834e4(unaff_x22 + 0x228);
  func_0x000107c61558();
  uVar36 = *(ulong *)(unaff_x22 + 0x3c0);
  uVar42 = uVar36;
  if ((uVar35 & 1) == 0) {
    uVar31 = *(long *)(uVar36 + 0x10) + 1;
    uVar42 = 0;
    FUN_101b1269c(0,uVar31,1,uVar36,PTR__swift_bridgeObjectRelease_11034f258);
  }
  uVar36 = *(ulong *)(uVar42 + 0x10);
  uVar35 = uVar36 + 1;
  if (uVar36 < *(ulong *)(uVar42 + 0x18) >> 1) {
    uVar29 = 1;
    uVar8 = uVar42;
  }
  else {
    uVar8 = (ulong)(1 < *(ulong *)(uVar42 + 0x18));
    uVar29 = 1;
    uVar31 = uVar35;
    FUN_101b1269c(uVar8,uVar35,1,uVar42,PTR__swift_bridgeObjectRelease_11034f258);
  }
LAB_101b0b0e4:
  uVar14 = *(undefined8 *)(unaff_x22 + 0x3d8);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x3d0);
  *(ulong *)(uVar8 + 0x10) = uVar35;
  lVar23 = uVar8 + uVar36 * 0x50;
  *(undefined8 *)(lVar23 + 0x20) = uVar17;
  *(undefined1 *)(lVar23 + 0x28) = uVar29;
  *(bool *)(lVar23 + 0x29) = bVar3;
  *(long *)(lVar23 + 0x30) = lVar43;
  *(undefined1 *)(lVar23 + 0x38) = uVar10;
  *(byte *)(lVar23 + 0x39) = bVar39;
  *(undefined8 *)(lVar23 + 0x40) = uStack_100;
  *(undefined8 *)(lVar23 + 0x48) = uStack_f8;
  *(byte *)(lVar23 + 0x50) = bVar41;
  *(bool *)(lVar23 + 0x51) = bVar4;
  *(long *)(lVar23 + 0x58) = lVar32;
  *(undefined1 *)(lVar23 + 0x60) = uVar30;
  *(double *)(lVar23 + 0x68) = dVar47;
  func_0x000107c6142c(uVar14);
  lVar23 = *(long *)(unaff_x22 + 0x3a8);
  lVar32 = *(long *)(unaff_x22 + 0x3b8) + 1;
  if (lVar32 != lVar23) {
    do {
      while( true ) {
        *(undefined **)(unaff_x22 + 0x3c8) = puStack_140;
        *(ulong *)(unaff_x22 + 0x3c0) = uVar8;
        *(long *)(unaff_x22 + 0x3b8) = lVar32;
        *(undefined **)(unaff_x22 + 0x3b0) = puStack_110;
        lVar43 = *(long *)(*(long *)(unaff_x22 + 0x3a0) + lVar32 * 8 + 0x20);
        *(long *)(unaff_x22 + 0x3d0) = lVar43;
        lVar16 = *(long *)(unaff_x22 + 0x2f0);
        if (*(long *)(lVar16 + 0x10) != 0) break;
LAB_101b0b174:
        lVar32 = lVar32 + 1;
        if (lVar32 == lVar23) goto LAB_101b0b75c;
      }
      func_0x000107c61434(lVar16);
      lVar32 = lVar43;
      func_0x000101b0fc0c();
      if ((uVar31 & 1) == 0) {
        func_0x000107c6142c(lVar16);
        lVar32 = *(long *)(unaff_x22 + 0x3b8);
        lVar23 = *(long *)(unaff_x22 + 0x3a8);
        goto LAB_101b0b174;
      }
      lVar24 = *(long *)(unaff_x22 + 0x388);
      lVar23 = *(long *)(unaff_x22 + 800);
      plVar21 = *(long **)(unaff_x22 + 0x2f8);
      uVar42 = *(ulong *)(*(long *)(lVar16 + 0x38) + lVar32 * 8);
      *(ulong *)(unaff_x22 + 0x3d8) = uVar42;
      func_0x000107c61434(uVar42);
      func_0x000107c6142c(lVar16);
      FUN_101b05398(0,lVar43);
      lVar32 = *(long *)(*(long *)(lVar23 + lVar24) + 0x10);
      if (SBORROW8(*plVar21,lVar32)) {
                    /* WARNING: Does not return */
        pcVar34 = (code *)SoftwareBreakpoint(1,0x101b0c280);
        (*pcVar34)();
      }
      if (0 < *plVar21 - lVar32) goto LAB_101b0b688;
      uVar35 = *(ulong *)(uVar42 + 0x10);
      plVar21 = (long *)(uVar42 + 0x28);
      plVar20 = plVar21;
      uVar31 = 0;
      do {
        uVar36 = uVar31;
        if (uVar35 == uVar36) break;
        if (*(ulong *)(uVar42 + 0x10) <= uVar36) {
                    /* WARNING: Does not return */
          pcVar34 = (code *)SoftwareBreakpoint(1,0x101b0c1d0);
          (*pcVar34)();
        }
        uVar31 = plVar20[-1];
        lVar32 = *plVar20;
        uVar6 = uVar31;
        func_0x000107c614f0();
        pcVar34 = *(code **)(lVar32 + 0x28);
        func_0x000107c615f0(uVar31);
        (*pcVar34)(uVar6,lVar32);
        func_0x000107c615e8(uVar31);
        plVar20 = plVar20 + 2;
        uVar31 = uVar36 + 1;
      } while ((uVar6 & 1) == 0);
      if (uVar35 != 0) {
        uVar31 = 0;
        plVar20 = plVar21;
        do {
          if (*(ulong *)(uVar42 + 0x10) <= uVar31) {
                    /* WARNING: Does not return */
            pcVar34 = (code *)SoftwareBreakpoint(1,0x101b0c1c8);
            (*pcVar34)();
          }
          uVar31 = uVar31 + 1;
          lVar32 = plVar20[-1];
          lVar23 = *plVar20;
          lVar16 = lVar32;
          func_0x000107c614f0(lVar32);
          pcVar34 = *(code **)(lVar23 + 0x40);
          func_0x000107c615f0(lVar32);
          (*pcVar34)(0,lVar16,lVar23);
          func_0x000107c615e8(lVar32);
          plVar20 = plVar20 + 2;
        } while (uVar35 != uVar31);
      }
      plVar20 = (long *)(*(long *)(unaff_x22 + 800) + *(long *)(unaff_x22 + 0x370));
      func_0x0001000a8868(plVar20,plVar20[3]);
      lVar32 = *plVar20;
      func_0x000107c4b940(*(undefined8 *)(lVar32 + 0x20));
      dVar47 = *(double *)(lVar32 + 0x28);
      dVar44 = 0.0;
      if (*(char *)(lVar32 + 0x38) != '\x01') {
        dVar49 = *(double *)(lVar32 + 0x30);
        (**(code **)(lVar32 + 0x10))();
        dVar44 = dVar44 - dVar49;
        if (dVar44 < 0.0) {
          dVar44 = 0.0;
        }
      }
      dVar47 = dVar47 + dVar44;
      func_0x000107c5d278(*(undefined8 *)(lVar32 + 0x20));
      uVar31 = 0xffffffffffffffff;
      do {
        lVar32 = uVar31 - uVar35;
        if (lVar32 == -1) break;
        uVar31 = uVar31 + 1;
        if (*(ulong *)(uVar42 + 0x10) <= uVar31) {
                    /* WARNING: Does not return */
          pcVar34 = (code *)SoftwareBreakpoint(1,0x101b0c1d4);
          (*pcVar34)();
        }
        uVar6 = plVar21[-1];
        lVar23 = *plVar21;
        uVar7 = uVar6;
        func_0x000107c614f0();
        pcVar34 = *(code **)(lVar23 + 0x20);
        func_0x000107c615f0(uVar6);
        (*pcVar34)(uVar7,lVar23);
        func_0x000107c615e8(uVar6);
        plVar21 = plVar21 + 2;
      } while ((uVar7 & 1) == 0);
      lVar23 = *(long *)(unaff_x22 + 0x3a0);
      func_0x000100b6a0c4(*(long *)(unaff_x22 + 800) + *(long *)(unaff_x22 + 0x348),
                          unaff_x22 + 0x1d8);
      uVar31 = *(ulong *)(unaff_x22 + 0x1f0);
      func_0x0001000a8868();
      lVar23 = *(long *)(lVar23 + 0x10);
      if (lVar23 != 0) {
        lVar16 = 0;
        do {
          if ((int)*(undefined8 *)(*(long *)(unaff_x22 + 0x3a0) + 0x20 + lVar16 * 8) == (int)lVar43)
          {
            uVar10 = 0;
            goto joined_r0x000101b0b47c;
          }
          lVar16 = lVar16 + 1;
        } while (lVar23 != lVar16);
      }
      lVar16 = 0;
      uVar10 = 1;
joined_r0x000101b0b47c:
      if (uVar35 == 0) {
        bVar41 = 0;
      }
      else {
        if (*(long *)(uVar42 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar34 = (code *)SoftwareBreakpoint(1,0x101b0c294);
          (*pcVar34)();
        }
        uVar14 = *(undefined8 *)(uVar42 + 0x20);
        uVar31 = *(ulong *)(uVar42 + 0x28);
        uVar17 = uVar14;
        func_0x000107c614f0();
        bVar41 = (byte)uVar17;
        pcVar34 = *(code **)(uVar31 + 0x10);
        func_0x000107c615f0(uVar14);
        (*pcVar34)();
        func_0x000107c615e8(uVar14);
      }
      lVar23 = *(long *)(*(long *)(unaff_x22 + 800) + *(long *)(unaff_x22 + 0x390));
      if (*(long *)(lVar23 + 0x10) == 0) {
LAB_101b0b534:
        lVar23 = 0;
        uVar30 = 1;
      }
      else {
        func_0x000107c61434(lVar23);
        lVar24 = lVar43;
        func_0x000101b0fc0c();
        if ((uVar31 & 1) == 0) {
          func_0x000107c6142c(lVar23);
          goto LAB_101b0b534;
        }
        lVar26 = *(long *)(unaff_x22 + 0x398);
        lVar25 = *(long *)(unaff_x22 + 800);
        dVar44 = *(double *)(*(long *)(lVar23 + 0x38) + lVar24 * 8);
        func_0x000107c6142c(lVar23);
        dVar44 = (double)(long)((dVar44 - *(double *)(lVar25 + lVar26)) * 1000.0);
        if (0x7fefffffffffffff < (ulong)ABS(dVar44)) {
                    /* WARNING: Does not return */
          pcVar34 = (code *)SoftwareBreakpoint(1,0x101b0c29c);
          (*pcVar34)();
        }
        if (dVar44 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
          pcVar34 = (code *)SoftwareBreakpoint(1,0x101b0c2a0);
          (*pcVar34)();
        }
        if (9.223372036854776e+18 <= dVar44) {
                    /* WARNING: Does not return */
          pcVar34 = (code *)SoftwareBreakpoint(1,0x101b0c2a4);
          (*pcVar34)();
        }
        uVar30 = 0;
        lVar23 = (long)dVar44;
      }
      *(long *)(unaff_x22 + 0x10) = lVar43;
      *(undefined1 *)(unaff_x22 + 0x18) = 1;
      *(bool *)(unaff_x22 + 0x19) = lVar32 != -1;
      *(long *)(unaff_x22 + 0x20) = lVar16;
      *(undefined1 *)(unaff_x22 + 0x28) = uVar10;
      *(byte *)(unaff_x22 + 0x29) = bVar41 & 1;
      *(undefined8 *)(unaff_x22 + 0x30) = 0;
      *(undefined8 *)(unaff_x22 + 0x38) = 0;
      *(undefined1 *)(unaff_x22 + 0x40) = 2;
      *(bool *)(unaff_x22 + 0x41) = uVar35 != uVar36;
      *(long *)(unaff_x22 + 0x48) = lVar23;
      *(undefined1 *)(unaff_x22 + 0x50) = uVar30;
      uVar31 = (ulong)*(byte *)(unaff_x22 + 0x51);
      FUN_101b172c4(unaff_x22 + 0x10);
      func_0x0001000834e4(unaff_x22 + 0x1d8);
      uVar6 = uVar8;
      func_0x000107c61558();
      uVar7 = uVar8;
      if ((uVar6 & 1) == 0) {
        uVar31 = *(long *)(uVar8 + 0x10) + 1;
        uVar7 = 0;
        FUN_101b1269c(0,uVar31,1,uVar8,PTR__swift_bridgeObjectRelease_11034f258);
      }
      uVar2 = *(ulong *)(uVar7 + 0x10);
      uVar6 = uVar2 + 1;
      uVar8 = uVar7;
      if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar2) {
        uVar8 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
        uVar31 = uVar6;
        FUN_101b1269c(uVar8,uVar6,1,uVar7,PTR__swift_bridgeObjectRelease_11034f258);
      }
      *(ulong *)(uVar8 + 0x10) = uVar6;
      lVar24 = uVar8 + uVar2 * 0x50;
      *(long *)(lVar24 + 0x20) = lVar43;
      *(undefined1 *)(lVar24 + 0x28) = 1;
      *(bool *)(lVar24 + 0x29) = lVar32 != -1;
      *(long *)(lVar24 + 0x30) = lVar16;
      *(undefined1 *)(lVar24 + 0x38) = uVar10;
      *(byte *)(lVar24 + 0x39) = bVar41 & 1;
      *(undefined8 *)(lVar24 + 0x40) = 0;
      *(undefined8 *)(lVar24 + 0x48) = 0;
      *(undefined1 *)(lVar24 + 0x50) = 2;
      *(bool *)(lVar24 + 0x51) = uVar35 != uVar36;
      *(long *)(lVar24 + 0x58) = lVar23;
      *(undefined1 *)(lVar24 + 0x60) = uVar30;
      *(double *)(lVar24 + 0x68) = dVar47;
      func_0x000107c6142c(uVar42);
      lVar23 = *(long *)(unaff_x22 + 0x3a8);
      lVar32 = *(long *)(unaff_x22 + 0x3b8) + 1;
      if (lVar32 == lVar23) break;
    } while( true );
  }
LAB_101b0b75c:
  lVar32 = *(long *)(unaff_x22 + 0x2f0);
  lVar23 = -1L << ((ulong)*(byte *)(lVar32 + 0x20) & 0x3f);
  uVar42 = -lVar23;
  uVar31 = 0xffffffffffffffff;
  if (uVar42 < 0x40) {
    uVar31 = ~(-1L << (uVar42 & 0x3f));
  }
  uVar31 = uVar31 & *(ulong *)(lVar32 + 0x40);
  lVar16 = *(long *)(unaff_x22 + 0x3a0) + 0x20;
  func_0x000107c61434();
  lVar43 = 0;
  goto joined_r0x000101b0b7b8;
LAB_101b0b688:
  uVar10 = *(undefined1 *)(*(long *)(unaff_x22 + 0x2f8) + 0x30);
  uVar31 = uVar42;
  FUN_101b14e6c(uVar42,uVar10);
  uStack_100 = 0;
  uStack_f8 = 0;
  bVar41 = 2;
  if ((uVar31 & 1) == 0) {
    dVar47 = *(double *)(unaff_x22 + 0x368);
    dVar49 = *(double *)(*(long *)(unaff_x22 + 0x2f8) + 0x10);
    (**(code **)(unaff_x22 + 0x358))();
    plVar21 = (long *)0x1c0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x3e0) = plVar21;
    *plVar21 = unaff_x22;
    plVar21[1] = (long)FUN_101b0a794;
    plVar20 = *(long **)(unaff_x22 + 800);
    plVar21[0x30] = (long)plVar20;
    *(undefined1 *)((long)plVar21 + 0x161) = uVar10;
    plVar21[0x2f] = (long)(dVar49 - (dVar44 - dVar47));
    plVar21[0x2e] = uVar42;
    plVar21[0x31] = *plVar20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101b0ce78,plVar20,0);
    return;
  }
  goto LAB_101b0a838;
joined_r0x000101b0b7b8:
  while (uVar31 == 0) {
    bVar3 = SCARRY8(lVar43,1);
    lVar43 = lVar43 + 1;
    if (bVar3) {
                    /* WARNING: Does not return */
      pcVar34 = (code *)SoftwareBreakpoint(1,0x101b0c1bc);
      (*pcVar34)();
    }
    if ((long)(0x3fU - lVar23 >> 6) <= lVar43) {
      func_0x000107c61574(lVar32);
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      lVar23 = *(long *)(uVar8 + 0x10);
      if (lVar23 == 0) {
        func_0x000107c61434(uVar8);
        puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        func_0x000107c61434(uVar8);
        func_0x000101b12234(0,lVar23,0);
        puVar27 = (undefined8 *)(uVar8 + 0x20);
        lVar43 = *(ulong *)(puVar5 + 0x10) * 0x48 + 0x20;
        uVar31 = *(ulong *)(puVar5 + 0x10);
        do {
          uStack_b8 = puVar27[3];
          uStack_c0 = puVar27[2];
          uStack_a8 = puVar27[5];
          uStack_b0 = puVar27[4];
          uStack_98 = puVar27[7];
          uStack_a0 = puVar27[6];
          uStack_90 = *(undefined1 *)(puVar27 + 8);
          uStack_c8 = puVar27[1];
          puStack_d0 = (undefined *)*puVar27;
          uVar42 = uVar31 + 1;
          if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar31) {
            func_0x000101b12234(1 < *(ulong *)(puVar5 + 0x18),uVar42,1);
          }
          *(ulong *)(puVar5 + 0x10) = uVar42;
          puVar1 = (undefined8 *)(puVar5 + lVar43);
          puVar1[1] = uStack_c8;
          *puVar1 = puStack_d0;
          *(undefined1 *)(puVar1 + 8) = uStack_90;
          puVar1[5] = uStack_a8;
          puVar1[4] = uStack_b0;
          puVar1[7] = uStack_98;
          puVar1[6] = uStack_a0;
          puVar1[3] = uStack_b8;
          puVar1[2] = uStack_c0;
          lVar43 = lVar43 + 0x48;
          puVar27 = puVar27 + 10;
          lVar23 = lVar23 + -1;
          uVar31 = uVar42;
        } while (lVar23 != 0);
      }
      lVar25 = *(long *)(unaff_x22 + 0x388);
      lVar23 = *(long *)(unaff_x22 + 0x350);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x340);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x338);
      lVar24 = *(long *)(unaff_x22 + 0x330);
      uVar37 = *(undefined8 *)(unaff_x22 + 0x328);
      lVar43 = *(long *)(unaff_x22 + 800);
      plVar21 = *(long **)(unaff_x22 + 0x2f8);
      FUN_101b153b0(puVar5);
      func_0x000107c6142c(puVar5);
      (**(code **)(lVar24 + 0x10))(uVar14,uVar17,uVar37);
      uVar10 = (undefined1)uVar17;
      uVar17 = *(undefined8 *)(lVar43 + lVar23);
      FUN_101b0cc18();
      lVar24 = *plVar21;
      lVar23 = *(long *)(*(long *)(lVar43 + lVar25) + 0x10);
      if (SBORROW8(lVar24,lVar23)) {
                    /* WARNING: Does not return */
        pcVar34 = (code *)SoftwareBreakpoint(1,0x101b0c270);
        (*pcVar34)();
      }
      plVar21 = (long *)(*(long *)(unaff_x22 + 800) + *(long *)(unaff_x22 + 0x370));
      lVar43 = plVar21[3];
      func_0x0001000a8868();
      lVar25 = *plVar21;
      func_0x000107c4b940(*(undefined8 *)(lVar25 + 0x20));
      dVar47 = *(double *)(lVar25 + 0x28);
      dVar44 = 0.0;
      if (*(char *)(lVar25 + 0x38) != '\x01') {
        dVar49 = *(double *)(lVar25 + 0x30);
        (**(code **)(lVar25 + 0x10))();
        dVar44 = dVar44 - dVar49;
        if (dVar44 < 0.0) {
          dVar44 = 0.0;
        }
      }
      dVar49 = *(double *)(unaff_x22 + 0x380);
      dVar45 = *(double *)(unaff_x22 + 0x378);
      uVar37 = *(undefined8 *)(lVar25 + 0x20);
      func_0x000107c5d278();
      dVar44 = (double)(long)(((dVar47 + dVar44) - (dVar49 + dVar45)) * 1000.0);
      if (0x7fefffffffffffff < (ulong)ABS(dVar44)) {
                    /* WARNING: Does not return */
        pcVar34 = (code *)SoftwareBreakpoint(1,0x101b0c274);
        (*pcVar34)();
      }
      if (dVar44 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar34 = (code *)SoftwareBreakpoint(1,0x101b0c278);
        (*pcVar34)();
      }
      if (9.223372036854776e+18 <= dVar44) {
                    /* WARNING: Does not return */
        pcVar34 = (code *)SoftwareBreakpoint(1,0x101b0c27c);
        (*pcVar34)();
      }
      if (*(char *)(*(long *)(unaff_x22 + 0x2f8) + 0x20) == '\x01') {
        lStack_150 = 0;
        uStack_158 = 0;
        uStack_154 = 1;
      }
      else {
        dVar47 = *(double *)(*(long *)(unaff_x22 + 0x2f8) + 0x18) * 1000.0;
        if (0x7fefffffffffffff < (ulong)ABS(dVar47)) {
                    /* WARNING: Does not return */
          pcVar34 = (code *)SoftwareBreakpoint(1,0x101b0c288);
          (*pcVar34)();
        }
        if (dVar47 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
          pcVar34 = (code *)SoftwareBreakpoint(1,0x101b0c28c);
          (*pcVar34)();
        }
        if (9.223372036854776e+18 <= dVar47) {
                    /* WARNING: Does not return */
          pcVar34 = (code *)SoftwareBreakpoint(1,0x101b0c290);
          (*pcVar34)();
        }
        lStack_150 = (long)dVar47;
        uStack_158 = 1;
        uStack_154 = 0;
      }
      lVar25 = *(long *)(unaff_x22 + 0x3a8);
      func_0x000107c5eeac();
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      puVar19 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (lVar25 != 0) {
        lVar25 = 0;
        do {
          if (*(long *)(lVar16 + lVar25 * 8) == 0) {
            puVar9 = puVar19;
            func_0x000107c61558();
            puStack_d0 = puVar19;
            if (((ulong)puVar9 & 1) == 0) {
              func_0x000101b121d0(0,*(long *)(puVar19 + 0x10) + 1,1);
            }
            uVar31 = *(ulong *)(puStack_d0 + 0x10);
            if (*(ulong *)(puStack_d0 + 0x18) >> 1 <= uVar31) {
              func_0x000101b121d0(1 < *(ulong *)(puStack_d0 + 0x18),uVar31 + 1,1);
            }
            *(ulong *)(puStack_d0 + 0x10) = uVar31 + 1;
            *(undefined8 *)(puStack_d0 + uVar31 * 8 + 0x20) = 0;
            puVar19 = puStack_d0;
          }
          lVar25 = lVar25 + 1;
        } while (lVar25 != *(long *)(unaff_x22 + 0x3a8));
      }
      uVar33 = *(undefined8 *)(unaff_x22 + 0x3a0);
      dVar47 = *(double *)(unaff_x22 + 0x380);
      dVar49 = *(double *)(unaff_x22 + 0x378);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x340);
      uVar38 = *(undefined8 *)(unaff_x22 + 0x328);
      lVar25 = *(long *)(unaff_x22 + 800);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x318);
      uVar46 = *(undefined8 *)(unaff_x22 + 0x310);
      uVar48 = *(undefined8 *)(unaff_x22 + 0x308);
      uVar50 = *(undefined8 *)(unaff_x22 + 0x300);
      uVar30 = *(undefined1 *)(unaff_x22 + 0x51);
      uVar28 = *(undefined8 *)(unaff_x22 + 0x2f8);
      pcVar34 = *(code **)(*(long *)(unaff_x22 + 0x330) + 8);
      (*pcVar34)(*(undefined8 *)(unaff_x22 + 0x338),uVar38);
      lVar16 = 0;
      func_0x000101b1ee28();
      func_0x000107c613fc();
      FUN_101b14780(uVar28,unaff_x22 + 0x178);
      func_0x000107c61434(puStack_140);
      puVar9 = puVar5;
      FUN_101af9834();
      *(undefined **)(lVar16 + 0x98) = puVar9;
      *(undefined1 *)(lVar16 + 0xa0) = 0;
      *(undefined **)(lVar16 + 200) = puVar5;
      *(undefined **)(lVar16 + 0xd0) = puVar5;
      puVar9 = puVar5;
      FUN_101af9848();
      *(undefined **)(lVar16 + 0xd8) = puVar9;
      puVar9 = puVar5;
      FUN_101af9944();
      *(undefined **)(lVar16 + 0xe0) = puVar9;
      *(undefined **)(lVar16 + 0xe8) = puVar5;
      *(undefined8 *)(lVar16 + 0x10) = uVar37;
      *(long *)(lVar16 + 0x18) = lVar43;
      *(undefined8 *)(lVar16 + 0x20) = uVar17;
      *(undefined1 *)(lVar16 + 0x28) = uVar30;
      *(long *)(lVar16 + 0x30) = lVar24;
      *(undefined8 *)(lVar16 + 0x38) = uVar33;
      *(undefined **)(lVar16 + 0x40) = puVar19;
      *(undefined1 *)(lVar16 + 0x48) = uStack_158;
      *(long *)(lVar16 + 0x50) = lStack_150;
      *(undefined1 *)(lVar16 + 0x58) = uStack_154;
      *(undefined8 *)(lVar16 + 0x60) = uVar14;
      *(undefined1 *)(lVar16 + 0x68) = uVar10;
      *(long *)(lVar16 + 0x70) = lVar24 - lVar23;
      *(long *)(lVar16 + 0x78) = (long)dVar44;
      *(ulong *)(lVar16 + 0x90) = uVar8;
      *(double *)(lVar16 + 0x80) = dVar47 + dVar49;
      *(undefined8 *)(lVar16 + 0x88) = uVar50;
      *(undefined8 *)(lVar16 + 0xa8) = uVar48;
      *(undefined8 *)(lVar16 + 0xb0) = uVar46;
      *(undefined8 *)(lVar16 + 0xb8) = uVar13;
      *(undefined **)(lVar16 + 0xc0) = puStack_140;
      uVar14 = *(undefined8 *)(lVar25 + _DAT_112e001c8);
      *(long *)(lVar25 + _DAT_112e001c8) = lVar16;
      func_0x000107c61574(uVar14);
      FUN_101b0c2bc();
      func_0x000107c6142c(lVar32);
      (*pcVar34)(uVar12,uVar38);
      func_0x000107c6142c(puStack_140);
      func_0x000107c6142c(uVar8);
      func_0x0001002a64a8();
      uVar14 = *(undefined8 *)(unaff_x22 + 0x338);
      func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x340));
      func_0x000107c615c0(uVar14);
                    /* WARNING: Could not recover jumptable at 0x000101b0c1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    uVar31 = ((ulong *)(lVar32 + 0x40))[lVar43];
  }
  uVar42 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
  uVar42 = (uVar42 & 0xcccccccccccccccc) >> 2 | (uVar42 & 0x3333333333333333) << 2;
  uVar42 = (uVar42 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar42 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar42 = (uVar42 & 0xff00ff00ff00ff00) >> 8 | (uVar42 & 0xff00ff00ff00ff) << 8;
  uVar42 = (uVar42 & 0xffff0000ffff0000) >> 0x10 | (uVar42 & 0xffff0000ffff) << 0x10;
  uVar31 = uVar31 - 1 & uVar31;
  uVar42 = lVar43 << 9 | LZCOUNT(uVar42 >> 0x20 | uVar42 << 0x20) << 3;
  lVar24 = *(long *)(*(long *)(lVar32 + 0x30) + uVar42);
  lVar25 = *(long *)(*(long *)(lVar32 + 0x38) + uVar42);
  uVar35 = *(ulong *)(lVar25 + 0x10);
  func_0x000107c61434(lVar25);
  plVar21 = (long *)(lVar25 + 0x28);
  plVar20 = plVar21;
  uVar42 = 0;
  do {
    uVar36 = uVar42;
    if (uVar35 == uVar36) break;
    if (*(ulong *)(lVar25 + 0x10) <= uVar36) {
                    /* WARNING: Does not return */
      pcVar34 = (code *)SoftwareBreakpoint(1,0x101b0c1b4);
      (*pcVar34)();
    }
    uVar42 = plVar20[-1];
    lVar26 = *plVar20;
    uVar6 = uVar42;
    func_0x000107c614f0();
    pcVar34 = *(code **)(lVar26 + 0x28);
    func_0x000107c615f0(uVar42);
    (*pcVar34)(uVar6,lVar26);
    func_0x000107c615e8(uVar42);
    plVar20 = plVar20 + 2;
    uVar42 = uVar36 + 1;
  } while ((uVar6 & 1) == 0);
  if (uVar35 != 0) {
    uVar42 = 0;
    plVar20 = plVar21;
    do {
      if (*(ulong *)(lVar25 + 0x10) <= uVar42) {
                    /* WARNING: Does not return */
        pcVar34 = (code *)SoftwareBreakpoint(1,0x101b0c1b0);
        (*pcVar34)();
      }
      uVar42 = uVar42 + 1;
      lVar26 = plVar20[-1];
      lVar18 = *plVar20;
      lVar40 = lVar26;
      func_0x000107c614f0(lVar26);
      pcVar34 = *(code **)(lVar18 + 0x40);
      func_0x000107c615f0(lVar26);
      (*pcVar34)(0,lVar40,lVar18);
      func_0x000107c615e8(lVar26);
      plVar20 = plVar20 + 2;
    } while (uVar35 != uVar42);
  }
  plVar20 = (long *)(*(long *)(unaff_x22 + 800) + *(long *)(unaff_x22 + 0x370));
  func_0x0001000a8868(plVar20,plVar20[3]);
  lVar26 = *plVar20;
  func_0x000107c4b940(*(undefined8 *)(lVar26 + 0x20));
  dVar47 = *(double *)(lVar26 + 0x28);
  dVar44 = 0.0;
  if (*(char *)(lVar26 + 0x38) != '\x01') {
    dVar49 = *(double *)(lVar26 + 0x30);
    (**(code **)(lVar26 + 0x10))();
    dVar44 = dVar44 - dVar49;
    if (dVar44 < 0.0) {
      dVar44 = 0.0;
    }
  }
  func_0x000107c5d278(*(undefined8 *)(lVar26 + 0x20));
  uVar42 = 0xffffffffffffffff;
  do {
    lVar26 = uVar42 - uVar35;
    if (lVar26 == -1) break;
    uVar42 = uVar42 + 1;
    if (*(ulong *)(lVar25 + 0x10) <= uVar42) {
                    /* WARNING: Does not return */
      pcVar34 = (code *)SoftwareBreakpoint(1,0x101b0c1b8);
      (*pcVar34)();
    }
    uVar6 = plVar21[-1];
    lVar18 = *plVar21;
    uVar7 = uVar6;
    func_0x000107c614f0();
    pcVar34 = *(code **)(lVar18 + 0x20);
    func_0x000107c615f0(uVar6);
    (*pcVar34)(uVar7,lVar18);
    func_0x000107c615e8(uVar6);
    plVar21 = plVar21 + 2;
  } while ((uVar7 & 1) == 0);
  lVar18 = *(long *)(unaff_x22 + 0x3a0);
  func_0x000100b6a0c4(*(long *)(unaff_x22 + 800) + *(long *)(unaff_x22 + 0x348),unaff_x22 + 0x1b0);
  uVar42 = *(ulong *)(unaff_x22 + 0x1c8);
  func_0x0001000a8868();
  lVar18 = *(long *)(lVar18 + 0x10);
  if (lVar18 == 0) {
    lVar40 = 0;
    uVar10 = 1;
    if (uVar35 == 0) goto LAB_101b0ba84;
LAB_101b0ba38:
    if (*(long *)(lVar25 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar34 = (code *)SoftwareBreakpoint(1,0x101b0c1e8);
      (*pcVar34)();
    }
    uVar14 = *(undefined8 *)(lVar25 + 0x20);
    uVar42 = *(ulong *)(lVar25 + 0x28);
    uVar17 = uVar14;
    func_0x000107c614f0();
    bVar41 = (byte)uVar17;
    pcVar34 = *(code **)(uVar42 + 0x10);
    func_0x000107c615f0(uVar14);
    (*pcVar34)();
    func_0x000107c615e8(uVar14);
  }
  else {
    lVar40 = 0;
    do {
      if ((int)*(undefined8 *)(lVar16 + lVar40 * 8) == (int)lVar24) {
        uVar10 = 0;
        goto joined_r0x000101b0ba80;
      }
      lVar40 = lVar40 + 1;
    } while (lVar18 != lVar40);
    lVar40 = 0;
    uVar10 = 1;
joined_r0x000101b0ba80:
    if (uVar35 != 0) goto LAB_101b0ba38;
LAB_101b0ba84:
    bVar41 = 0;
  }
  lVar18 = *(long *)(*(long *)(unaff_x22 + 800) + *(long *)(unaff_x22 + 0x390));
  if (*(long *)(lVar18 + 0x10) == 0) {
LAB_101b0bb40:
    lVar18 = 0;
    uVar30 = 1;
  }
  else {
    func_0x000107c61434(lVar18);
    lVar11 = lVar24;
    func_0x000101b0fc0c();
    if ((uVar42 & 1) == 0) {
      func_0x000107c6142c(lVar18);
      goto LAB_101b0bb40;
    }
    lVar22 = *(long *)(unaff_x22 + 0x398);
    lVar15 = *(long *)(unaff_x22 + 800);
    dVar49 = *(double *)(*(long *)(lVar18 + 0x38) + lVar11 * 8);
    func_0x000107c6142c(lVar18);
    dVar49 = (double)(long)((dVar49 - *(double *)(lVar15 + lVar22)) * 1000.0);
    if (0x7fefffffffffffff < (ulong)ABS(dVar49)) {
                    /* WARNING: Does not return */
      pcVar34 = (code *)SoftwareBreakpoint(1,0x101b0c264);
      (*pcVar34)();
    }
    if (dVar49 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar34 = (code *)SoftwareBreakpoint(1,0x101b0c268);
      (*pcVar34)();
    }
    if (9.223372036854776e+18 <= dVar49) {
                    /* WARNING: Does not return */
      pcVar34 = (code *)SoftwareBreakpoint(1,0x101b0c26c);
      (*pcVar34)();
    }
    uVar30 = 0;
    lVar18 = (long)dVar49;
  }
  *(long *)(unaff_x22 + 0xe8) = lVar24;
  *(undefined1 *)(unaff_x22 + 0xf0) = 2;
  *(bool *)(unaff_x22 + 0xf1) = lVar26 != -1;
  *(long *)(unaff_x22 + 0xf8) = lVar40;
  *(undefined1 *)(unaff_x22 + 0x100) = uVar10;
  *(byte *)(unaff_x22 + 0x101) = bVar41 & 1;
  *(undefined8 *)(unaff_x22 + 0x108) = 0;
  *(undefined8 *)(unaff_x22 + 0x110) = 0;
  *(undefined1 *)(unaff_x22 + 0x118) = 2;
  *(bool *)(unaff_x22 + 0x119) = uVar35 != uVar36;
  *(long *)(unaff_x22 + 0x120) = lVar18;
  *(undefined1 *)(unaff_x22 + 0x128) = uVar30;
  FUN_101b172c4(unaff_x22 + 0xe8,*(undefined1 *)(unaff_x22 + 0x51));
  func_0x0001000834e4(unaff_x22 + 0x1b0);
  uVar42 = uVar8;
  func_0x000107c61558();
  uStack_f0 = uVar8;
  if ((uVar42 & 1) == 0) {
    uStack_f0 = 0;
    FUN_101b1269c(0,*(long *)(uVar8 + 0x10) + 1,1,uVar8,PTR__swift_bridgeObjectRelease_11034f258);
  }
  uVar42 = *(ulong *)(uStack_f0 + 0x10);
  if (*(ulong *)(uStack_f0 + 0x18) >> 1 <= uVar42) {
    uVar8 = (ulong)(1 < *(ulong *)(uStack_f0 + 0x18));
    FUN_101b1269c(uVar8,uVar42 + 1,1,uStack_f0,PTR__swift_bridgeObjectRelease_11034f258);
    uStack_f0 = uVar8;
  }
  *(ulong *)(uStack_f0 + 0x10) = uVar42 + 1;
  lVar11 = uStack_f0 + uVar42 * 0x50;
  *(long *)(lVar11 + 0x20) = lVar24;
  *(undefined1 *)(lVar11 + 0x28) = 2;
  *(bool *)(lVar11 + 0x29) = lVar26 != -1;
  *(long *)(lVar11 + 0x30) = lVar40;
  *(undefined1 *)(lVar11 + 0x38) = uVar10;
  *(byte *)(lVar11 + 0x39) = bVar41 & 1;
  *(undefined8 *)(lVar11 + 0x40) = 0;
  *(undefined8 *)(lVar11 + 0x48) = 0;
  *(undefined1 *)(lVar11 + 0x50) = 2;
  *(bool *)(lVar11 + 0x51) = uVar35 != uVar36;
  *(long *)(lVar11 + 0x58) = lVar18;
  *(undefined1 *)(lVar11 + 0x60) = uVar30;
  *(double *)(lVar11 + 0x68) = dVar47 + dVar44;
  func_0x000107c6142c(lVar25);
  uVar8 = uStack_f0;
  goto joined_r0x000101b0b7b8;
}



/* Entry: 101b0c2bc; end: 101b0c4a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b0c2bc(double param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  byte bVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  double dVar7;
  
  lVar1 = _DAT_112e002a8;
  lVar5 = *(long *)(unaff_x20 + _DAT_112e001c8);
  if ((lVar5 != 0) && ((*(byte *)(lVar5 + 0xa0) & 1) == 0)) {
    bVar4 = *(byte *)(unaff_x20 + _DAT_112e002a8);
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_112e002a0) + 1) == '\x01') {
      if ((bVar4 & 1) != 0) {
        return;
      }
      uVar6 = *(undefined8 *)(lVar5 + 0x88);
      pcVar2 = *(code **)(unaff_x20 + _DAT_112e00200);
      func_0x000107c6157c(lVar5);
      (*pcVar2)();
      dVar7 = (double)(long)((param_1 - *(double *)(lVar5 + 0xa8)) * 1000.0);
      if (0x7fefffffffffffff < (ulong)ABS(dVar7)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101b0c4a0);
        (*pcVar2)();
      }
      if (dVar7 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101b0c4a4);
        (*pcVar2)();
      }
      if (9.223372036854776e+18 <= dVar7) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101b0c4a8);
        (*pcVar2)();
      }
      func_0x0001000a8868(unaff_x20 + _DAT_112e001c0,
                          *(undefined8 *)(unaff_x20 + _DAT_112e001c0 + 0x18));
      uVar3 = 1;
      bVar4 = 1;
    }
    else {
      uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112e002a0);
      pcVar2 = *(code **)(unaff_x20 + _DAT_112e00200);
      func_0x000107c6157c(lVar5);
      (*pcVar2)();
      dVar7 = (double)(long)((param_1 - *(double *)(lVar5 + 0xa8)) * 1000.0);
      if (0x7fefffffffffffff < (ulong)ABS(dVar7)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101b0c494);
        (*pcVar2)();
      }
      if (dVar7 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101b0c498);
        (*pcVar2)();
      }
      if (9.223372036854776e+18 <= dVar7) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101b0c49c);
        (*pcVar2)();
      }
      func_0x0001000a8868(unaff_x20 + _DAT_112e001c0,
                          *(undefined8 *)(unaff_x20 + _DAT_112e001c0 + 0x18));
      bVar4 = bVar4 ^ 1;
      uVar3 = 0;
    }
    FUN_101b189a0(lVar5,uVar6,uVar3,bVar4,(long)dVar7);
    *(undefined1 *)(lVar5 + 0xa0) = 1;
    func_0x000107c61574(lVar5);
    *(undefined1 *)(unaff_x20 + lVar1) = 1;
  }
  return;
}



/* Entry: 101b0c4a8; end: 101b0c753;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b0c4a8(double param_1,undefined8 param_2)

{
  double *pdVar1;
  undefined1 uVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined1 uVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined8 uStack_b0;
  long lStack_a0;
  long lStack_98;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  double dStack_88;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  long *plStack_78;
  
  func_0x000100b6a0c4(unaff_x20 + _DAT_112e001c0,auStack_c8);
  func_0x0001000a8868(auStack_c8,uStack_b0);
  (**(code **)(unaff_x20 + _DAT_112e00200))();
  lVar4 = _DAT_112e00210;
  dVar13 = (double)(long)((param_1 - *(double *)(unaff_x20 + _DAT_112e001f8)) * 1000.0);
  if (0x7fefffffffffffff < (ulong)ABS(dVar13)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101b0c73c);
    (*pcVar3)();
  }
  if (dVar13 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101b0c740);
    (*pcVar3)();
  }
  if (9.223372036854776e+18 <= dVar13) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101b0c744);
    (*pcVar3)();
  }
  pdVar1 = (double *)(unaff_x20 + _DAT_112e001e0);
  if (*(char *)(pdVar1 + 1) == '\x01') {
    lVar11 = 0;
    uVar10 = 1;
  }
  else {
    dVar12 = (double)(long)((*pdVar1 - *(double *)(unaff_x20 + _DAT_112e001f8)) * 1000.0);
    if (0x7fefffffffffffff < (ulong)ABS(dVar12)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101b0c748);
      (*pcVar3)();
    }
    if (dVar12 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101b0c74c);
      (*pcVar3)();
    }
    if (9.223372036854776e+18 <= dVar12) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101b0c750);
      (*pcVar3)();
    }
    uVar10 = 0;
    lVar11 = (long)dVar12;
  }
  dVar12 = pdVar1[2];
  uVar2 = *(undefined1 *)(pdVar1 + 3);
  lVar7 = *(long *)(unaff_x20 + _DAT_112e00208);
  if (lVar7 == 0) {
    plVar5 = (long *)0x0;
  }
  else {
    func_0x000107c61428(unaff_x20 + _DAT_112e00210,auStack_e0,0,0);
    lVar8 = *(long *)(unaff_x20 + lVar4);
    func_0x000107c61438(lVar7,2);
    lVar4 = lVar8;
    func_0x000107c61434();
    func_0x000101b1351c();
    func_0x000107c6142c(lVar8);
    plVar9 = *(long **)(lVar4 + 0x10);
    if (plVar9 == (long *)0x0) {
      func_0x000107c6142c(lVar7);
      func_0x000107c61574(lVar4);
      plVar5 = (long *)PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      plVar5 = plVar9;
      FUN_101b0fa20(plVar9,0);
      plVar6 = &lStack_a0;
      FUN_101b13dc4(plVar6,plVar5 + 4,plVar9,lVar4);
      func_0x000100cc5bac(lStack_a0,lStack_98,CONCAT71(uStack_8f,uStack_90),dStack_88,
                          CONCAT71(uStack_7f,uStack_80));
      if (plVar6 != plVar9) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101b0c754);
        (*pcVar3)();
      }
      func_0x000107c6142c(lVar7);
    }
  }
  lStack_a0 = (long)dVar13;
  lStack_98 = lVar11;
  uStack_90 = uVar10;
  dStack_88 = dVar12;
  uStack_80 = uVar2;
  plStack_78 = plVar5;
  FUN_101b1af34(param_2,&lStack_a0);
  func_0x000107c6142c(plVar5);
  func_0x0001000834e4(auStack_c8);
  *(undefined1 *)(unaff_x20 + _DAT_112e001d8) = 1;
  return;
}



/* Entry: 101b0c754; end: 101b0cc17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b0c754(double param_1)

{
  double *pdVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  char cVar4;
  undefined1 uVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  char cVar9;
  char cVar10;
  long lVar11;
  code *pcVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 *******pppppppuVar16;
  undefined8 *******pppppppuVar17;
  undefined8 *******pppppppuVar18;
  undefined4 uVar19;
  double dVar20;
  long unaff_x20;
  undefined8 *******pppppppuVar21;
  long lVar22;
  undefined8 *******pppppppuVar23;
  long lVar24;
  undefined8 *******pppppppuVar25;
  long lVar26;
  undefined1 uVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  long alStack_f8 [3];
  undefined8 uStack_e0;
  undefined **ppuStack_d8;
  undefined1 auStack_d0 [24];
  undefined8 ******ppppppuStack_b8;
  long lStack_b0;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  double dStack_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined8 ******ppppppuStack_90;
  
  lVar11 = _DAT_112e001c8;
  plVar13 = (long *)(unaff_x20 + _DAT_112e001c0);
  lVar24 = *(long *)(unaff_x20 + _DAT_112e001c8);
  cVar6 = *(char *)(unaff_x20 + _DAT_113803a88);
  bVar7 = *(byte *)(unaff_x20 + _DAT_112e001d0);
  bVar8 = *(byte *)(unaff_x20 + _DAT_112e001d8);
  pdVar1 = (double *)(unaff_x20 + _DAT_112e001e0);
  dVar29 = *pdVar1;
  cVar4 = *(char *)(pdVar1 + 1);
  dVar20 = pdVar1[2];
  cVar9 = *(char *)(unaff_x20 + _DAT_112e001e8);
  cVar10 = *(char *)(unaff_x20 + _DAT_112e001f0);
  dVar30 = *(double *)(unaff_x20 + _DAT_112e001f8);
  uVar5 = *(undefined1 *)(pdVar1 + 3);
  pcVar12 = *(code **)(unaff_x20 + _DAT_112e00200);
  func_0x000107c6157c(lVar24);
  (*pcVar12)();
  lVar22 = _DAT_112e00210;
  pppppppuVar25 = *(undefined8 ********)(unaff_x20 + _DAT_112e00208);
  func_0x000107c61428(unaff_x20 + _DAT_112e00210,auStack_d0,0,0);
  pppppppuVar21 = *(undefined8 ********)(unaff_x20 + lVar22);
  func_0x000107c61434(pppppppuVar25);
  func_0x000107c61434();
  FUN_101afa7cc();
  func_0x0001000a8868(plVar13,plVar13[3]);
  lVar22 = *plVar13;
  uVar14 = 0;
  func_0x000100b68c58();
  ppuStack_d8 = &PTR_DAT_110443780;
  alStack_f8[0] = lVar22;
  uStack_e0 = uVar14;
  if ((lVar24 == 0) || ((*(byte *)(lVar24 + 0xa0) & 1) != 0)) {
    if ((cVar6 != '\0') && (((bVar7 & 1) == 0 && ((bVar8 & 1) == 0)))) {
      uVar19 = 1;
      if (cVar10 == '\0') {
        uVar19 = 2;
      }
      if (cVar9 == '\0') {
        uVar19 = 3;
      }
      uVar3 = 0;
      if (cVar4 != '\x01') {
        uVar3 = uVar19;
      }
      func_0x0001000a8868(alStack_f8,uVar14);
      dVar28 = (double)(long)((param_1 - dVar30) * 1000.0);
      if (0x7fefffffffffffff < (ulong)ABS(dVar28)) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x101b0cc04);
        (*pcVar12)();
      }
      if (dVar28 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x101b0cc08);
        (*pcVar12)();
      }
      if (9.223372036854776e+18 <= dVar28) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x101b0cc0c);
        (*pcVar12)();
      }
      if (cVar4 == '\x01') {
        lVar26 = 0;
        uVar27 = 1;
        if (pppppppuVar25 == (undefined8 *******)0x0) goto LAB_101b0cb50;
LAB_101b0ca78:
        if ((undefined8 ******)((ulong)pppppppuVar25[2] >> 3) < pppppppuVar21[2]) {
          func_0x000107c61434(pppppppuVar25);
          func_0x000107c6157c(lVar22);
          pppppppuVar16 = pppppppuVar21;
          func_0x000101b131e0(pppppppuVar21,pppppppuVar25);
          pppppppuVar23 = (undefined8 *******)pppppppuVar16[2];
        }
        else {
          ppppppuStack_b8 = pppppppuVar25;
          func_0x000107c61434(pppppppuVar25);
          func_0x000107c6157c(lVar22);
          FUN_101b13a2c(pppppppuVar21);
          pppppppuVar23 = (undefined8 *******)ppppppuStack_b8[2];
          pppppppuVar16 = (undefined8 *******)ppppppuStack_b8;
        }
        if (pppppppuVar23 == (undefined8 *******)0x0) {
          func_0x000107c6142c(pppppppuVar16);
          pppppppuVar17 = (undefined8 *******)PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        else {
          pppppppuVar17 = pppppppuVar23;
          FUN_101b0fa20(pppppppuVar23,0);
          pppppppuVar18 = &ppppppuStack_b8;
          FUN_101b13dc4(pppppppuVar18,pppppppuVar17 + 4,pppppppuVar23,pppppppuVar16);
          func_0x000100cc5bac(ppppppuStack_b8,lStack_b0,CONCAT71(uStack_a7,uStack_a8),dStack_a0,
                              CONCAT71(uStack_97,uStack_98));
          if (pppppppuVar18 != pppppppuVar23) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x101b0caf8);
            (*pcVar12)();
          }
        }
      }
      else {
        dVar29 = (double)(long)((dVar29 - dVar30) * 1000.0);
        if (0x7fefffffffffffff < (ulong)ABS(dVar29)) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x101b0cc10);
          (*pcVar12)();
        }
        if (dVar29 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x101b0cc14);
          (*pcVar12)();
        }
        if (9.223372036854776e+18 <= dVar29) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x101b0cc18);
          (*pcVar12)();
        }
        uVar27 = 0;
        lVar26 = (long)dVar29;
        if (pppppppuVar25 != (undefined8 *******)0x0) goto LAB_101b0ca78;
LAB_101b0cb50:
        func_0x000107c6157c(lVar22);
        pppppppuVar17 = (undefined8 *******)0x0;
      }
      ppppppuStack_b8 = (undefined8 ******)(long)dVar28;
      lStack_b0 = lVar26;
      uStack_a8 = uVar27;
      dStack_a0 = dVar20;
      uStack_98 = uVar5;
      ppppppuStack_90 = pppppppuVar17;
      FUN_101b1af34(uVar3,&ppppppuStack_b8);
      func_0x000107c61574(lVar24);
      func_0x000107c6142c(pppppppuVar25);
      func_0x000107c6142c(pppppppuVar21);
      goto LAB_101b0c924;
    }
    func_0x000107c6157c(lVar22);
    func_0x000107c61574(lVar24);
  }
  else {
    plVar13 = alStack_f8;
    func_0x0001000a8868(plVar13,uVar14);
    uVar14 = *(undefined8 *)(*plVar13 + 0x18);
    func_0x000107c6157c(lVar24);
    func_0x000107c6157c(lVar22);
    func_0x0001056f0050(uVar14,1);
    func_0x0001000a8868(alStack_f8,uStack_e0);
    func_0x000101b19b3c(lVar24);
    func_0x000107c61578(lVar24,2);
  }
  func_0x000107c6142c(pppppppuVar25);
  pppppppuVar17 = pppppppuVar21;
LAB_101b0c924:
  func_0x000107c6142c(pppppppuVar17);
  func_0x0001000834e4(alStack_f8);
  *(undefined1 *)(unaff_x20 + _DAT_112e001b8) = 1;
  uVar14 = *(undefined8 *)(unaff_x20 + lVar11);
  *(undefined8 *)(unaff_x20 + lVar11) = 0;
  func_0x000107c61574(uVar14);
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112e00288);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112e002a0);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100b69fcc();
  lVar11 = _DAT_112e00258;
  func_0x000107c61428(unaff_x20 + _DAT_112e00258,alStack_f8,1,0);
  uVar14 = *(undefined8 *)(unaff_x20 + lVar11);
  *(undefined **)(unaff_x20 + lVar11) = puVar15;
  func_0x000107c6142c(uVar14);
  func_0x0001002a64a8();
  return;
}



/* Entry: 101b0cc18; end: 101b0ce4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101b0cc18(double param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  code *pcVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [24];
  
  lVar3 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_90 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar7 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = _DAT_112e00268;
  lVar6 = lVar7 - extraout_x12;
  func_0x000107c61428(unaff_x20 + _DAT_112e00268,auStack_88,0,0);
  FUN_101b16ef8(unaff_x20 + lVar3,puVar8,0x112d373d8,&UNK_10d9014c0);
  puVar2 = puVar8;
  (**(code **)(lVar9 + 0x30))(puVar8,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x000101b16f40(puVar8,0x112d373d8,&UNK_10d9014c0);
  }
  else {
    (**(code **)(lVar9 + 0x20))(lVar6,puVar8,lVar1);
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e00260);
    func_0x000107c40ef8(uVar4);
    func_0x000107c61180();
    func_0x000107c5ee94(lVar7);
    func_0x000107c61170(uVar4);
    func_0x000107c5ee68(lVar6);
    pcVar5 = *(code **)(lVar9 + 8);
    (*pcVar5)(lVar7,lVar1);
    if (0.0 <= param_1) {
      dVar10 = (double)(long)(param_1 * 1000.0);
      (*pcVar5)(lVar6,lVar1);
      if (0x7fefffffffffffff < (ulong)ABS(dVar10)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101b0ce44);
        (*pcVar5)();
      }
      if (dVar10 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101b0ce48);
        (*pcVar5)();
      }
      if (9.223372036854776e+18 <= dVar10) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101b0ce4c);
        (*pcVar5)();
      }
      uVar4 = 0;
      lVar3 = (long)dVar10;
      goto LAB_101b0ce1c;
    }
    (*pcVar5)(lVar6,lVar1);
  }
  lVar3 = 0;
  uVar4 = 1;
LAB_101b0ce1c:
  auVar11._8_8_ = uVar4;
  auVar11._0_8_ = lVar3;
  return auVar11;
}



/* Entry: 101b0ce4c; end: 101b0ce77;  */

void FUN_101b0ce4c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 **)(unaff_x22 + 0x180) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x161) = param_3;
  *(undefined8 *)(unaff_x22 + 0x178) = param_1;
  *(undefined8 *)(unaff_x22 + 0x170) = param_2;
  *(undefined8 *)(unaff_x22 + 0x188) = *unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b0ce78);
  return;
}



/* Entry: 101b0ce78; end: 101b0d017;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b0ce78(void)

{
  long lVar1;
  undefined1 uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x22;
  double dVar8;
  undefined8 uVar9;
  
  dVar8 = *(double *)(unaff_x22 + 0x178);
  if (dVar8 <= 0.0) {
    uVar7 = 1;
    uVar5 = 2;
  }
  else {
    uVar4 = *(ulong *)(unaff_x22 + 0x170);
    FUN_101b14e6c(uVar4,*(undefined1 *)(unaff_x22 + 0x161));
    if ((uVar4 & 1) == 0) {
      lVar1 = *(long *)(unaff_x22 + 0x180);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x188);
      uVar2 = *(undefined1 *)(unaff_x22 + 0x161);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x178);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x170);
      (**(code **)(lVar1 + _DAT_112e00228))();
      *(double *)(unaff_x22 + 400) = dVar8;
      FUN_101b14f4c();
      *(undefined1 *)(unaff_x22 + 0x120) = uVar2;
      *(undefined8 *)(unaff_x22 + 0x128) = uVar7;
      *(long *)(unaff_x22 + 0x130) = lVar1;
      *(undefined8 *)(unaff_x22 + 0x138) = uVar9;
      *(double *)(unaff_x22 + 0x140) = dVar8;
      *(undefined8 *)(unaff_x22 + 0x148) = uVar5;
      iVar3 = 2;
      func_0x000100029b9c(2,0x12,0,0);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x180);
      if (iVar3 != 0) {
        uVar7 = 0x112e008d0;
        func_0x0001000285a8(0x112e008d0,&UNK_10d9d0b58);
        plVar6 = (long *)(ulong)*(uint *)(
                                         PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lFTu_11034ff68
                                         + 4);
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x198) = plVar6;
        *plVar6 = unaff_x22;
        plVar6[1] = (long)FUN_101b0d018;
                    /* WARNING: Could not recover jumptable at 0x00010bdb929c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lF_11034ff60
        )(plVar6,unaff_x22 + 0x150,PTR___sSbN_11034dd40,uVar7,uVar5,uVar4,&UNK_10d9d0b48,
          unaff_x22 + 0x110,PTR___sSbN_11034dd40,uVar7);
        return;
      }
      func_0x000107c614f0();
      func_0x000107c5fca8();
      *(ulong *)(unaff_x22 + 0x1a0) = uVar4;
      *(undefined8 *)(unaff_x22 + 0x1a8) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(0x101b0d060,uVar5,uVar4);
      return;
    }
    uVar5 = 0;
    uVar7 = 2;
  }
                    /* WARNING: Could not recover jumptable at 0x000101b0cee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar5,0,uVar7);
  return;
}



/* Entry: 101b0d018; end: 101b0d0db;  */

void FUN_101b0d018(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x198));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b0d1d0,*(undefined8 *)(lVar1 + 0x180),0);
  return;
}


