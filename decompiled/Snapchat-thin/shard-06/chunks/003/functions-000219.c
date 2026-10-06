/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104731334; end: 10473198f;  */

void FUN_104731334(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  
  lVar1 = 0;
  FUN_104739264();
  pcVar5 = *(code **)(*(long *)(lVar1 + -8) + 0x30);
  lVar2 = param_1;
  (*pcVar5)(param_1,1,lVar1);
  if ((int)lVar2 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x38));
    lVar2 = *(long *)(param_1 + 0x78);
    if (lVar2 != 1) {
      if (*(long *)(param_1 + 0x58) != 1) {
        _swift_bridgeObjectRelease(*(long *)(param_1 + 0x58));
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x68));
        lVar2 = *(long *)(param_1 + 0x78);
      }
      _swift_bridgeObjectRelease(lVar2);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x88));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x98));
    lVar2 = param_1 + *(int *)(lVar1 + 0x34);
    lVar3 = 0;
    FUN_104742f28();
    lVar4 = lVar2;
    (**(code **)(*(long *)(lVar3 + -8) + 0x30))(lVar2,1,lVar3);
    if ((int)lVar4 == 0) {
      lVar4 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar4 + -8) + 8))(lVar2,lVar4);
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + *(int *)(lVar3 + 0x14) + 8));
    }
  }
  lVar2 = param_1 + *(int *)(param_2 + 0x14);
  if (*(long *)(lVar2 + 0xc0) != 1) {
    if (*(long *)(lVar2 + 8) != 1) {
      _swift_bridgeObjectRelease();
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x10));
    }
    if (*(ulong *)(lVar2 + 0x28) >> 0x3c < 0xf &&
        (*(ulong *)(lVar2 + 0x28) & 0xf000000000000000) != 0xb000000000000000) {
      func_0x00010006c090(*(undefined8 *)(lVar2 + 0x20));
    }
    if (*(long *)(lVar2 + 0x48) != 1) {
      _swift_bridgeObjectRelease();
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x58));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x60));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x70));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x80));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x88));
      if (*(long *)(lVar2 + 0x98) != 1) {
        _swift_bridgeObjectRelease();
      }
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0xa8));
    }
    if (*(long *)(lVar2 + 0xc0) != 0) {
      _swift_bridgeObjectRelease();
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0xe0));
      if (*(long *)(lVar2 + 0xf0) != 0) {
        _swift_bridgeObjectRelease();
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0xf8));
      }
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x110));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x120));
    if (*(long *)(lVar2 + 0x150) != 0) {
      _swift_bridgeObjectRelease();
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x160));
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x170));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x180));
    if ((((*(ulong *)(lVar2 + 0x1b0) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
       (((ulong)*(uint5 *)(lVar2 + 0x1c8) & 0xfefefefefefefefe) != 0x6fefefefe)) {
      func_0x00010179b820(*(undefined8 *)(lVar2 + 400),*(undefined8 *)(lVar2 + 0x198),
                          *(undefined8 *)(lVar2 + 0x1a0),*(undefined8 *)(lVar2 + 0x1a8),
                          *(ulong *)(lVar2 + 0x1b0),*(undefined8 *)(lVar2 + 0x1b8),
                          *(undefined8 *)(lVar2 + 0x1c0));
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x1d8));
    if (*(long *)(lVar2 + 0x1f0) != 0) {
      _swift_bridgeObjectRelease();
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x200));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x210));
    }
    if (*(long *)(lVar2 + 0x228) != 0) {
      _swift_bridgeObjectRelease();
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x238));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x248));
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 600));
  }
  lVar2 = param_1 + *(int *)(param_2 + 0x18);
  lVar3 = 0;
  FUN_10470fbcc();
  lVar4 = lVar2;
  (**(code **)(*(long *)(lVar3 + -8) + 0x30))(lVar2,1,lVar3);
  if ((int)lVar4 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x18));
    lVar4 = *(long *)(lVar2 + 0x50);
    if (lVar4 != 1) {
      if (*(long *)(lVar2 + 0x30) != 1) {
        _swift_bridgeObjectRelease(*(long *)(lVar2 + 0x30));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x40));
        lVar4 = *(long *)(lVar2 + 0x50);
      }
      _swift_bridgeObjectRelease(lVar4);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x80));
    if (*(long *)(lVar2 + 0xa0) != 1) {
      _swift_bridgeObjectRelease();
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0xa8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0xb0));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0xb8));
    lVar2 = lVar2 + *(int *)(lVar3 + 0x38);
    lVar3 = 0;
    FUN_104742f28();
    lVar4 = lVar2;
    (**(code **)(*(long *)(lVar3 + -8) + 0x30))(lVar2,1,lVar3);
    if ((int)lVar4 == 0) {
      lVar4 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar4 + -8) + 8))(lVar2,lVar4);
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + *(int *)(lVar3 + 0x14) + 8));
    }
  }
  param_1 = param_1 + *(int *)(param_2 + 0x1c);
  lVar4 = 0;
  FUN_10475cf44();
  lVar2 = param_1;
  (**(code **)(*(long *)(lVar4 + -8) + 0x30))(param_1,1,lVar4);
  if ((int)lVar2 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
    func_0x00010006c090(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
    lVar2 = param_1 + *(int *)(lVar4 + 0x18);
    lVar3 = lVar2;
    (*pcVar5)(lVar2,1,lVar1);
    if ((int)lVar3 == 0) {
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 8));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x18));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x28));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x38));
      lVar3 = *(long *)(lVar2 + 0x78);
      if (lVar3 != 1) {
        if (*(long *)(lVar2 + 0x58) != 1) {
          _swift_bridgeObjectRelease(*(long *)(lVar2 + 0x58));
          _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x68));
          lVar3 = *(long *)(lVar2 + 0x78);
        }
        _swift_bridgeObjectRelease(lVar3);
      }
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x88));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x98));
      lVar2 = lVar2 + *(int *)(lVar1 + 0x34);
      lVar3 = 0;
      FUN_104742f28();
      lVar1 = lVar2;
      (**(code **)(*(long *)(lVar3 + -8) + 0x30))(lVar2,1,lVar3);
      if ((int)lVar1 == 0) {
        lVar1 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar1 + -8) + 8))(lVar2,lVar1);
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + *(int *)(lVar3 + 0x14) + 8));
      }
    }
    param_1 = param_1 + *(int *)(lVar4 + 0x1c);
    if (*(long *)(param_1 + 0xc0) != 1) {
      if (*(long *)(param_1 + 8) != 1) {
        _swift_bridgeObjectRelease();
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
      }
      if ((*(ulong *)(param_1 + 0x28) >> 0x3c < 0xf) &&
         ((*(ulong *)(param_1 + 0x28) & 0xf000000000000000) != 0xb000000000000000)) {
        func_0x00010006c090(*(undefined8 *)(param_1 + 0x20));
      }
      if (*(long *)(param_1 + 0x48) != 1) {
        _swift_bridgeObjectRelease();
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x58));
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x60));
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x70));
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x80));
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x88));
        if (*(long *)(param_1 + 0x98) != 1) {
          _swift_bridgeObjectRelease();
        }
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0xa8));
      }
      if (*(long *)(param_1 + 0xc0) != 0) {
        _swift_bridgeObjectRelease();
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0xe0));
        if (*(long *)(param_1 + 0xf0) != 0) {
          _swift_bridgeObjectRelease();
          _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0xf8));
        }
      }
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x110));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x120));
      if (*(long *)(param_1 + 0x150) != 0) {
        _swift_bridgeObjectRelease();
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x160));
      }
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x170));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x180));
      if ((((*(ulong *)(param_1 + 0x1b0) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
         (((ulong)*(uint5 *)(param_1 + 0x1c8) & 0xfefefefefefefefe) != 0x6fefefefe)) {
        func_0x00010179b820(*(undefined8 *)(param_1 + 400),*(undefined8 *)(param_1 + 0x198),
                            *(undefined8 *)(param_1 + 0x1a0),*(undefined8 *)(param_1 + 0x1a8),
                            *(ulong *)(param_1 + 0x1b0),*(undefined8 *)(param_1 + 0x1b8),
                            *(undefined8 *)(param_1 + 0x1c0));
      }
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x1d8));
      if (*(long *)(param_1 + 0x1f0) != 0) {
        _swift_bridgeObjectRelease();
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x200));
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x210));
      }
      if (*(long *)(param_1 + 0x228) != 0) {
        _swift_bridgeObjectRelease();
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x238));
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x248));
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 600));
      return;
    }
  }
  return;
}



/* Entry: 104731990; end: 104736bf3;  */

undefined8 * FUN_104731990(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint5 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  ulong uVar22;
  undefined8 uVar23;
  long lVar24;
  code *pcVar25;
  
  lVar8 = 0;
  FUN_104739264();
  lVar16 = *(long *)(lVar8 + -8);
  pcVar17 = *(code **)(lVar16 + 0x30);
  puVar9 = param_2;
  (*pcVar17)(param_2,1,lVar8);
  if ((int)puVar9 == 0) {
    uVar19 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar19;
    uVar19 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = uVar19;
    uVar20 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = uVar20;
    uVar23 = param_2[7];
    param_1[6] = param_2[6];
    param_1[7] = uVar23;
    param_1[8] = param_2[8];
    lVar10 = param_2[0xf];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar19);
    _swift_bridgeObjectRetain(uVar20);
    _swift_bridgeObjectRetain(uVar23);
    if (lVar10 == 1) {
      uVar19 = param_2[9];
      param_1[10] = param_2[10];
      param_1[9] = uVar19;
      uVar19 = param_2[0xb];
      param_1[0xc] = param_2[0xc];
      param_1[0xb] = uVar19;
      uVar19 = param_2[0xd];
      param_1[0xe] = param_2[0xe];
      param_1[0xd] = uVar19;
      param_1[0xf] = param_2[0xf];
    }
    else {
      lVar18 = param_2[0xb];
      if (lVar18 == 1) {
        uVar19 = param_2[9];
        param_1[10] = param_2[10];
        param_1[9] = uVar19;
        uVar19 = param_2[0xb];
        param_1[0xc] = param_2[0xc];
        param_1[0xb] = uVar19;
        param_1[0xd] = param_2[0xd];
      }
      else {
        uVar19 = param_2[9];
        param_1[10] = param_2[10];
        param_1[9] = uVar19;
        uVar19 = param_2[0xc];
        uVar20 = param_2[0xd];
        param_1[0xb] = lVar18;
        param_1[0xc] = uVar19;
        param_1[0xd] = uVar20;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar20);
      }
      param_1[0xe] = param_2[0xe];
      param_1[0xf] = lVar10;
      _swift_bridgeObjectRetain(lVar10);
    }
    uVar19 = param_2[0x11];
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = uVar19;
    uVar20 = param_2[0x13];
    param_1[0x12] = param_2[0x12];
    param_1[0x13] = uVar20;
    lVar10 = (long)param_1 + (long)*(int *)(lVar8 + 0x34);
    lVar18 = (long)param_2 + (long)*(int *)(lVar8 + 0x34);
    lVar13 = 0;
    FUN_104742f28();
    lVar15 = *(long *)(lVar13 + -8);
    pcVar25 = *(code **)(lVar15 + 0x30);
    _swift_bridgeObjectRetain(uVar19);
    _swift_bridgeObjectRetain(uVar20);
    lVar21 = lVar18;
    (*pcVar25)(lVar18,1,lVar13);
    if ((int)lVar21 == 0) {
      lVar21 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar21 + -8) + 0x10))(lVar10,lVar18,lVar21);
      puVar9 = (undefined8 *)(lVar10 + *(int *)(lVar13 + 0x14));
      puVar1 = (undefined8 *)(lVar18 + *(int *)(lVar13 + 0x14));
      uVar19 = puVar1[1];
      *puVar9 = *puVar1;
      puVar9[1] = uVar19;
      *(undefined1 *)(lVar10 + *(int *)(lVar13 + 0x18)) =
           *(undefined1 *)(lVar18 + *(int *)(lVar13 + 0x18));
      *(undefined1 *)(lVar10 + *(int *)(lVar13 + 0x1c)) =
           *(undefined1 *)(lVar18 + *(int *)(lVar13 + 0x1c));
      puVar9 = (undefined8 *)(lVar10 + *(int *)(lVar13 + 0x20));
      puVar1 = (undefined8 *)(lVar18 + *(int *)(lVar13 + 0x20));
      *puVar9 = *puVar1;
      *(undefined1 *)(puVar9 + 1) = *(undefined1 *)(puVar1 + 1);
      *(undefined1 *)(lVar10 + *(int *)(lVar13 + 0x24)) =
           *(undefined1 *)(lVar18 + *(int *)(lVar13 + 0x24));
      pcVar25 = *(code **)(lVar15 + 0x38);
      _swift_bridgeObjectRetain();
      (*pcVar25)(lVar10,0,1,lVar13);
    }
    else {
      lVar21 = 0x112dcbf00;
      func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
      _memcpy(lVar10,lVar18,*(undefined8 *)(*(long *)(lVar21 + -8) + 0x40));
    }
    puVar9 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x38));
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x38));
    uVar19 = *puVar1;
    puVar9[1] = puVar1[1];
    *puVar9 = uVar19;
    uVar19 = *(undefined8 *)((long)puVar1 + 9);
    *(undefined8 *)((long)puVar9 + 0x11) = *(undefined8 *)((long)puVar1 + 0x11);
    *(undefined8 *)((long)puVar9 + 9) = uVar19;
    (**(code **)(lVar16 + 0x38))(param_1,0,1);
  }
  else {
    lVar10 = 0x112db3ce0;
    func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
    _memcpy(param_1,param_2,*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  }
  puVar9 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  if (puVar1[0x18] == 1) {
    _memcpy(puVar9,puVar1,0x260);
  }
  else {
    lVar10 = puVar1[1];
    if (lVar10 == 1) {
      uVar19 = *puVar1;
      puVar9[1] = puVar1[1];
      *puVar9 = uVar19;
      puVar9[2] = puVar1[2];
    }
    else {
      *puVar9 = *puVar1;
      puVar9[1] = lVar10;
      uVar19 = puVar1[2];
      puVar9[2] = uVar19;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar19);
    }
    uVar22 = puVar1[5];
    if (uVar22 >> 0x3c == 0xb) {
      uVar19 = puVar1[3];
      puVar9[4] = puVar1[4];
      puVar9[3] = uVar19;
      puVar9[5] = puVar1[5];
    }
    else {
      puVar9[3] = puVar1[3];
      if (uVar22 >> 0x3c < 0xf) {
        uVar19 = puVar1[4];
        func_0x00010006c00c(uVar19,uVar22);
        puVar9[4] = uVar19;
        puVar9[5] = uVar22;
      }
      else {
        uVar19 = puVar1[4];
        puVar9[5] = puVar1[5];
        puVar9[4] = uVar19;
      }
    }
    *(undefined2 *)(puVar9 + 6) = *(undefined2 *)(puVar1 + 6);
    puVar9[7] = puVar1[7];
    lVar10 = puVar1[9];
    if (lVar10 == 1) {
      uVar19 = puVar1[0x10];
      uVar23 = puVar1[0x13];
      uVar20 = puVar1[0x12];
      puVar9[0x11] = puVar1[0x11];
      puVar9[0x10] = uVar19;
      puVar9[0x13] = uVar23;
      puVar9[0x12] = uVar20;
      uVar19 = puVar1[0x14];
      puVar9[0x15] = puVar1[0x15];
      puVar9[0x14] = uVar19;
      uVar19 = *(undefined8 *)((long)puVar1 + 0xaa);
      *(undefined8 *)((long)puVar9 + 0xb2) = *(undefined8 *)((long)puVar1 + 0xb2);
      *(undefined8 *)((long)puVar9 + 0xaa) = uVar19;
      uVar19 = puVar1[8];
      uVar23 = puVar1[0xb];
      uVar20 = puVar1[10];
      puVar9[9] = puVar1[9];
      puVar9[8] = uVar19;
      puVar9[0xb] = uVar23;
      puVar9[10] = uVar20;
      uVar19 = puVar1[0xc];
      uVar23 = puVar1[0xf];
      uVar20 = puVar1[0xe];
      puVar9[0xd] = puVar1[0xd];
      puVar9[0xc] = uVar19;
      puVar9[0xf] = uVar23;
      puVar9[0xe] = uVar20;
    }
    else {
      puVar9[8] = puVar1[8];
      puVar9[9] = lVar10;
      uVar4 = puVar1[0xb];
      puVar9[10] = puVar1[10];
      puVar9[0xb] = uVar4;
      uVar19 = puVar1[0xc];
      uVar20 = puVar1[0xd];
      puVar9[0xc] = uVar19;
      puVar9[0xd] = uVar20;
      uVar20 = puVar1[0xe];
      uVar23 = puVar1[0xf];
      puVar9[0xe] = uVar20;
      puVar9[0xf] = uVar23;
      uVar23 = puVar1[0x10];
      uVar5 = puVar1[0x11];
      puVar9[0x10] = uVar23;
      puVar9[0x11] = uVar5;
      lVar10 = puVar1[0x13];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar4);
      _swift_bridgeObjectRetain(uVar19);
      _swift_bridgeObjectRetain(uVar20);
      _swift_bridgeObjectRetain(uVar23);
      _swift_bridgeObjectRetain(uVar5);
      if (lVar10 == 1) {
        uVar19 = puVar1[0x12];
        puVar9[0x13] = puVar1[0x13];
        puVar9[0x12] = uVar19;
      }
      else {
        puVar9[0x12] = puVar1[0x12];
        puVar9[0x13] = lVar10;
        _swift_bridgeObjectRetain(lVar10);
      }
      uVar19 = puVar1[0x15];
      puVar9[0x14] = puVar1[0x14];
      puVar9[0x15] = uVar19;
      puVar9[0x16] = puVar1[0x16];
      *(undefined2 *)(puVar9 + 0x17) = *(undefined2 *)(puVar1 + 0x17);
      _swift_bridgeObjectRetain();
    }
    *(undefined2 *)((long)puVar9 + 0xba) = *(undefined2 *)((long)puVar1 + 0xba);
    if (puVar1[0x18] == 0) {
      lVar10 = puVar1[0x18];
      uVar20 = puVar1[0x1b];
      uVar19 = puVar1[0x1a];
      puVar9[0x19] = puVar1[0x19];
      puVar9[0x18] = lVar10;
      puVar9[0x1b] = uVar20;
      puVar9[0x1a] = uVar19;
      uVar19 = puVar1[0x1c];
      uVar23 = puVar1[0x1f];
      uVar20 = puVar1[0x1e];
      puVar9[0x1d] = puVar1[0x1d];
      puVar9[0x1c] = uVar19;
      puVar9[0x1f] = uVar23;
      puVar9[0x1e] = uVar20;
    }
    else {
      puVar9[0x18] = puVar1[0x18];
      uVar19 = puVar1[0x19];
      puVar9[0x1a] = puVar1[0x1a];
      puVar9[0x19] = uVar19;
      uVar19 = puVar1[0x1c];
      puVar9[0x1b] = puVar1[0x1b];
      puVar9[0x1c] = uVar19;
      lVar10 = puVar1[0x1e];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar19);
      if (lVar10 == 0) {
        uVar19 = puVar1[0x1d];
        puVar9[0x1e] = puVar1[0x1e];
        puVar9[0x1d] = uVar19;
        puVar9[0x1f] = puVar1[0x1f];
      }
      else {
        puVar9[0x1d] = puVar1[0x1d];
        puVar9[0x1e] = lVar10;
        uVar19 = puVar1[0x1f];
        puVar9[0x1f] = uVar19;
        _swift_bridgeObjectRetain(lVar10);
        _swift_bridgeObjectRetain(uVar19);
      }
    }
    *(undefined1 *)(puVar9 + 0x20) = *(undefined1 *)(puVar1 + 0x20);
    uVar19 = puVar1[0x22];
    puVar9[0x21] = puVar1[0x21];
    puVar9[0x22] = uVar19;
    uVar19 = puVar1[0x24];
    puVar9[0x23] = puVar1[0x23];
    puVar9[0x24] = uVar19;
    uVar20 = puVar1[0x25];
    puVar9[0x26] = puVar1[0x26];
    puVar9[0x25] = uVar20;
    uVar20 = *(undefined8 *)((long)puVar1 + 0x132);
    *(undefined8 *)((long)puVar9 + 0x13a) = *(undefined8 *)((long)puVar1 + 0x13a);
    *(undefined8 *)((long)puVar9 + 0x132) = uVar20;
    lVar10 = puVar1[0x2a];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar19);
    if (lVar10 == 0) {
      uVar19 = puVar1[0x29];
      uVar23 = puVar1[0x2c];
      uVar20 = puVar1[0x2b];
      puVar9[0x2a] = puVar1[0x2a];
      puVar9[0x29] = uVar19;
      puVar9[0x2c] = uVar23;
      puVar9[0x2b] = uVar20;
    }
    else {
      puVar9[0x29] = puVar1[0x29];
      puVar9[0x2a] = lVar10;
      uVar19 = puVar1[0x2c];
      puVar9[0x2b] = puVar1[0x2b];
      puVar9[0x2c] = uVar19;
      _swift_bridgeObjectRetain(lVar10);
      _swift_bridgeObjectRetain(uVar19);
    }
    uVar19 = puVar1[0x2e];
    puVar9[0x2d] = puVar1[0x2d];
    puVar9[0x2e] = uVar19;
    uVar19 = puVar1[0x2f];
    uVar20 = puVar1[0x30];
    *(undefined1 *)(puVar9 + 0x31) = *(undefined1 *)(puVar1 + 0x31);
    uVar22 = puVar1[0x36];
    uVar7 = *(uint5 *)(puVar1 + 0x39);
    puVar9[0x2f] = uVar19;
    puVar9[0x30] = uVar20;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar20);
    if ((((uVar22 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
       (((ulong)uVar7 & 0xfefefefefefefefe) == 0x6fefefefe)) {
      uVar19 = puVar1[0x32];
      uVar23 = puVar1[0x35];
      uVar20 = puVar1[0x34];
      puVar9[0x33] = puVar1[0x33];
      puVar9[0x32] = uVar19;
      puVar9[0x35] = uVar23;
      puVar9[0x34] = uVar20;
      uVar19 = puVar1[0x36];
      puVar9[0x37] = puVar1[0x37];
      puVar9[0x36] = uVar19;
      uVar19 = *(undefined8 *)((long)puVar1 + 0x1bd);
      *(undefined8 *)((long)puVar9 + 0x1c5) = *(undefined8 *)((long)puVar1 + 0x1c5);
      *(undefined8 *)((long)puVar9 + 0x1bd) = uVar19;
    }
    else {
      uVar19 = puVar1[0x32];
      uVar4 = puVar1[0x33];
      uVar20 = puVar1[0x34];
      uVar5 = puVar1[0x35];
      uVar23 = puVar1[0x37];
      uVar6 = puVar1[0x38];
      func_0x00010179a2b8(uVar19,uVar4,uVar20,uVar5,uVar22,uVar23,uVar6,(ulong)uVar7);
      puVar9[0x32] = uVar19;
      puVar9[0x33] = uVar4;
      puVar9[0x34] = uVar20;
      puVar9[0x35] = uVar5;
      puVar9[0x36] = uVar22;
      puVar9[0x37] = uVar23;
      puVar9[0x38] = uVar6;
      *(char *)((long)puVar9 + 0x1cc) = (char)(uVar7 >> 0x20);
      *(int *)(puVar9 + 0x39) = (int)uVar7;
    }
    *(undefined1 *)((long)puVar9 + 0x1cd) = *(undefined1 *)((long)puVar1 + 0x1cd);
    uVar19 = puVar1[0x3b];
    puVar9[0x3a] = puVar1[0x3a];
    puVar9[0x3b] = uVar19;
    *(undefined1 *)(puVar9 + 0x3c) = *(undefined1 *)(puVar1 + 0x3c);
    lVar10 = puVar1[0x3e];
    _swift_bridgeObjectRetain();
    if (lVar10 == 0) {
      uVar19 = puVar1[0x3d];
      uVar23 = puVar1[0x40];
      uVar20 = puVar1[0x3f];
      puVar9[0x3e] = puVar1[0x3e];
      puVar9[0x3d] = uVar19;
      puVar9[0x40] = uVar23;
      puVar9[0x3f] = uVar20;
      uVar19 = puVar1[0x41];
      puVar9[0x42] = puVar1[0x42];
      puVar9[0x41] = uVar19;
    }
    else {
      puVar9[0x3d] = puVar1[0x3d];
      puVar9[0x3e] = lVar10;
      uVar19 = puVar1[0x40];
      puVar9[0x3f] = puVar1[0x3f];
      puVar9[0x40] = uVar19;
      puVar9[0x41] = puVar1[0x41];
      uVar20 = puVar1[0x42];
      puVar9[0x42] = uVar20;
      _swift_bridgeObjectRetain(lVar10);
      _swift_bridgeObjectRetain(uVar19);
      _swift_bridgeObjectRetain(uVar20);
    }
    *(undefined1 *)(puVar9 + 0x43) = *(undefined1 *)(puVar1 + 0x43);
    lVar10 = puVar1[0x45];
    if (lVar10 == 0) {
      uVar19 = puVar1[0x44];
      uVar23 = puVar1[0x47];
      uVar20 = puVar1[0x46];
      puVar9[0x45] = puVar1[0x45];
      puVar9[0x44] = uVar19;
      puVar9[0x47] = uVar23;
      puVar9[0x46] = uVar20;
      uVar19 = puVar1[0x48];
      puVar9[0x49] = puVar1[0x49];
      puVar9[0x48] = uVar19;
      puVar9[0x4a] = puVar1[0x4a];
    }
    else {
      puVar9[0x44] = puVar1[0x44];
      puVar9[0x45] = lVar10;
      puVar9[0x46] = puVar1[0x46];
      uVar19 = puVar1[0x47];
      puVar9[0x47] = uVar19;
      puVar9[0x48] = puVar1[0x48];
      uVar20 = puVar1[0x49];
      puVar9[0x49] = uVar20;
      puVar9[0x4a] = puVar1[0x4a];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar19);
      _swift_bridgeObjectRetain(uVar20);
    }
    puVar9[0x4b] = puVar1[0x4b];
    _swift_bridgeObjectRetain();
  }
  puVar9 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  lVar10 = 0;
  FUN_10470fbcc();
  lVar18 = *(long *)(lVar10 + -8);
  puVar11 = puVar1;
  (**(code **)(lVar18 + 0x30))(puVar1,1,lVar10);
  if ((int)puVar11 == 0) {
    uVar19 = puVar1[1];
    *puVar9 = *puVar1;
    puVar9[1] = uVar19;
    uVar19 = puVar1[3];
    puVar9[2] = puVar1[2];
    puVar9[3] = uVar19;
    lVar21 = puVar1[10];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar19);
    if (lVar21 == 1) {
      uVar19 = puVar1[4];
      uVar23 = puVar1[7];
      uVar20 = puVar1[6];
      puVar9[5] = puVar1[5];
      puVar9[4] = uVar19;
      puVar9[7] = uVar23;
      puVar9[6] = uVar20;
      uVar19 = puVar1[8];
      puVar9[9] = puVar1[9];
      puVar9[8] = uVar19;
      puVar9[10] = puVar1[10];
    }
    else {
      lVar13 = puVar1[6];
      if (lVar13 == 1) {
        uVar19 = puVar1[4];
        uVar23 = puVar1[7];
        uVar20 = puVar1[6];
        puVar9[5] = puVar1[5];
        puVar9[4] = uVar19;
        puVar9[7] = uVar23;
        puVar9[6] = uVar20;
        puVar9[8] = puVar1[8];
      }
      else {
        uVar19 = puVar1[4];
        puVar9[5] = puVar1[5];
        puVar9[4] = uVar19;
        uVar19 = puVar1[7];
        uVar20 = puVar1[8];
        puVar9[6] = lVar13;
        puVar9[7] = uVar19;
        puVar9[8] = uVar20;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar20);
      }
      puVar9[9] = puVar1[9];
      puVar9[10] = lVar21;
      _swift_bridgeObjectRetain(lVar21);
    }
    uVar19 = puVar1[0xb];
    puVar9[0xc] = puVar1[0xc];
    puVar9[0xb] = uVar19;
    uVar19 = *(undefined8 *)((long)puVar1 + 0x61);
    *(undefined8 *)((long)puVar9 + 0x69) = *(undefined8 *)((long)puVar1 + 0x69);
    *(undefined8 *)((long)puVar9 + 0x61) = uVar19;
    uVar19 = puVar1[0x10];
    puVar9[0xf] = puVar1[0xf];
    puVar9[0x10] = uVar19;
    *(undefined1 *)(puVar9 + 0x11) = *(undefined1 *)(puVar1 + 0x11);
    lVar21 = puVar1[0x14];
    _swift_bridgeObjectRetain();
    if (lVar21 == 1) {
      uVar19 = puVar1[0x12];
      puVar9[0x13] = puVar1[0x13];
      puVar9[0x12] = uVar19;
      puVar9[0x14] = puVar1[0x14];
    }
    else {
      *(undefined4 *)(puVar9 + 0x12) = *(undefined4 *)(puVar1 + 0x12);
      *(undefined1 *)((long)puVar9 + 0x94) = *(undefined1 *)((long)puVar1 + 0x94);
      puVar9[0x13] = puVar1[0x13];
      puVar9[0x14] = lVar21;
      _swift_bridgeObjectRetain(lVar21);
    }
    uVar19 = puVar1[0x15];
    uVar20 = puVar1[0x16];
    puVar9[0x15] = uVar19;
    puVar9[0x16] = uVar20;
    uVar23 = puVar1[0x17];
    puVar9[0x17] = uVar23;
    lVar21 = (long)puVar9 + (long)*(int *)(lVar10 + 0x38);
    lVar13 = (long)puVar1 + (long)*(int *)(lVar10 + 0x38);
    lVar14 = 0;
    FUN_104742f28();
    lVar24 = *(long *)(lVar14 + -8);
    pcVar25 = *(code **)(lVar24 + 0x30);
    _swift_bridgeObjectRetain(uVar19);
    _swift_bridgeObjectRetain(uVar20);
    _swift_bridgeObjectRetain(uVar23);
    lVar15 = lVar13;
    (*pcVar25)(lVar13,1,lVar14);
    if ((int)lVar15 == 0) {
      lVar15 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar15 + -8) + 0x10))(lVar21,lVar13,lVar15);
      puVar1 = (undefined8 *)(lVar21 + *(int *)(lVar14 + 0x14));
      puVar11 = (undefined8 *)(lVar13 + *(int *)(lVar14 + 0x14));
      uVar19 = puVar11[1];
      *puVar1 = *puVar11;
      puVar1[1] = uVar19;
      *(undefined1 *)(lVar21 + *(int *)(lVar14 + 0x18)) =
           *(undefined1 *)(lVar13 + *(int *)(lVar14 + 0x18));
      *(undefined1 *)(lVar21 + *(int *)(lVar14 + 0x1c)) =
           *(undefined1 *)(lVar13 + *(int *)(lVar14 + 0x1c));
      puVar1 = (undefined8 *)(lVar21 + *(int *)(lVar14 + 0x20));
      puVar11 = (undefined8 *)(lVar13 + *(int *)(lVar14 + 0x20));
      *puVar1 = *puVar11;
      *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar11 + 1);
      *(undefined1 *)(lVar21 + *(int *)(lVar14 + 0x24)) =
           *(undefined1 *)(lVar13 + *(int *)(lVar14 + 0x24));
      pcVar25 = *(code **)(lVar24 + 0x38);
      _swift_bridgeObjectRetain();
      (*pcVar25)(lVar21,0,1,lVar14);
    }
    else {
      lVar15 = 0x112dcbf00;
      func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
      _memcpy(lVar21,lVar13,*(undefined8 *)(*(long *)(lVar15 + -8) + 0x40));
    }
    (**(code **)(lVar18 + 0x38))(puVar9,0,1,lVar10);
  }
  else {
    lVar10 = 0x112db3cd8;
    func_0x0001000285a8(0x112db3cd8,&UNK_10dd317d0);
    _memcpy(puVar9,puVar1,*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  }
  puVar9 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  lVar10 = 0;
  FUN_10475cf44();
  lVar18 = *(long *)(lVar10 + -8);
  puVar11 = puVar1;
  (**(code **)(lVar18 + 0x30))(puVar1,1,lVar10);
  if ((int)puVar11 == 0) {
    uVar19 = puVar1[1];
    *puVar9 = *puVar1;
    puVar9[1] = uVar19;
    uVar19 = puVar1[2];
    uVar20 = puVar1[3];
    _swift_bridgeObjectRetain();
    func_0x00010006c00c(uVar19,uVar20);
    puVar9[2] = uVar19;
    puVar9[3] = uVar20;
    puVar11 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar10 + 0x18));
    puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x18));
    puVar12 = puVar2;
    (*pcVar17)(puVar2,1,lVar8);
    if ((int)puVar12 == 0) {
      uVar19 = puVar2[1];
      *puVar11 = *puVar2;
      puVar11[1] = uVar19;
      uVar19 = puVar2[3];
      puVar11[2] = puVar2[2];
      puVar11[3] = uVar19;
      uVar20 = puVar2[5];
      puVar11[4] = puVar2[4];
      puVar11[5] = uVar20;
      uVar23 = puVar2[7];
      puVar11[6] = puVar2[6];
      puVar11[7] = uVar23;
      puVar11[8] = puVar2[8];
      lVar21 = puVar2[0xf];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar19);
      _swift_bridgeObjectRetain(uVar20);
      _swift_bridgeObjectRetain(uVar23);
      if (lVar21 == 1) {
        uVar19 = puVar2[9];
        puVar11[10] = puVar2[10];
        puVar11[9] = uVar19;
        uVar19 = puVar2[0xb];
        puVar11[0xc] = puVar2[0xc];
        puVar11[0xb] = uVar19;
        uVar19 = puVar2[0xd];
        puVar11[0xe] = puVar2[0xe];
        puVar11[0xd] = uVar19;
        puVar11[0xf] = puVar2[0xf];
      }
      else {
        lVar13 = puVar2[0xb];
        if (lVar13 == 1) {
          uVar19 = puVar2[9];
          puVar11[10] = puVar2[10];
          puVar11[9] = uVar19;
          uVar19 = puVar2[0xb];
          puVar11[0xc] = puVar2[0xc];
          puVar11[0xb] = uVar19;
          puVar11[0xd] = puVar2[0xd];
        }
        else {
          uVar19 = puVar2[9];
          puVar11[10] = puVar2[10];
          puVar11[9] = uVar19;
          uVar19 = puVar2[0xc];
          uVar20 = puVar2[0xd];
          puVar11[0xb] = lVar13;
          puVar11[0xc] = uVar19;
          puVar11[0xd] = uVar20;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar20);
        }
        puVar11[0xe] = puVar2[0xe];
        puVar11[0xf] = lVar21;
        _swift_bridgeObjectRetain(lVar21);
      }
      uVar19 = puVar2[0x11];
      puVar11[0x10] = puVar2[0x10];
      puVar11[0x11] = uVar19;
      uVar20 = puVar2[0x13];
      puVar11[0x12] = puVar2[0x12];
      puVar11[0x13] = uVar20;
      lVar21 = (long)puVar11 + (long)*(int *)(lVar8 + 0x34);
      lVar13 = (long)puVar2 + (long)*(int *)(lVar8 + 0x34);
      lVar14 = 0;
      FUN_104742f28();
      lVar24 = *(long *)(lVar14 + -8);
      pcVar17 = *(code **)(lVar24 + 0x30);
      _swift_bridgeObjectRetain(uVar19);
      _swift_bridgeObjectRetain(uVar20);
      lVar15 = lVar13;
      (*pcVar17)(lVar13,1,lVar14);
      if ((int)lVar15 == 0) {
        lVar15 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar15 + -8) + 0x10))(lVar21,lVar13,lVar15);
        puVar12 = (undefined8 *)(lVar21 + *(int *)(lVar14 + 0x14));
        puVar3 = (undefined8 *)(lVar13 + *(int *)(lVar14 + 0x14));
        uVar19 = puVar3[1];
        *puVar12 = *puVar3;
        puVar12[1] = uVar19;
        *(undefined1 *)(lVar21 + *(int *)(lVar14 + 0x18)) =
             *(undefined1 *)(lVar13 + *(int *)(lVar14 + 0x18));
        *(undefined1 *)(lVar21 + *(int *)(lVar14 + 0x1c)) =
             *(undefined1 *)(lVar13 + *(int *)(lVar14 + 0x1c));
        puVar12 = (undefined8 *)(lVar21 + *(int *)(lVar14 + 0x20));
        puVar3 = (undefined8 *)(lVar13 + *(int *)(lVar14 + 0x20));
        *puVar12 = *puVar3;
        *(undefined1 *)(puVar12 + 1) = *(undefined1 *)(puVar3 + 1);
        *(undefined1 *)(lVar21 + *(int *)(lVar14 + 0x24)) =
             *(undefined1 *)(lVar13 + *(int *)(lVar14 + 0x24));
        pcVar17 = *(code **)(lVar24 + 0x38);
        _swift_bridgeObjectRetain();
        (*pcVar17)(lVar21,0,1,lVar14);
      }
      else {
        lVar15 = 0x112dcbf00;
        func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
        _memcpy(lVar21,lVar13,*(undefined8 *)(*(long *)(lVar15 + -8) + 0x40));
      }
      puVar12 = (undefined8 *)((long)puVar11 + (long)*(int *)(lVar8 + 0x38));
      puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x38));
      uVar19 = *puVar2;
      puVar12[1] = puVar2[1];
      *puVar12 = uVar19;
      uVar19 = *(undefined8 *)((long)puVar2 + 9);
      *(undefined8 *)((long)puVar12 + 0x11) = *(undefined8 *)((long)puVar2 + 0x11);
      *(undefined8 *)((long)puVar12 + 9) = uVar19;
      (**(code **)(lVar16 + 0x38))(puVar11,0,1);
    }
    else {
      lVar8 = 0x112db3ce0;
      func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
      _memcpy(puVar11,puVar2,*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
    }
    puVar11 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar10 + 0x1c));
    puVar1 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x1c));
    if (puVar1[0x18] == 1) {
      _memcpy(puVar11,puVar1,0x260);
    }
    else {
      lVar8 = puVar1[1];
      if (lVar8 == 1) {
        uVar19 = *puVar1;
        puVar11[1] = puVar1[1];
        *puVar11 = uVar19;
        puVar11[2] = puVar1[2];
      }
      else {
        *puVar11 = *puVar1;
        puVar11[1] = lVar8;
        uVar19 = puVar1[2];
        puVar11[2] = uVar19;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar19);
      }
      uVar22 = puVar1[5];
      if (uVar22 >> 0x3c == 0xb) {
        uVar19 = puVar1[3];
        puVar11[4] = puVar1[4];
        puVar11[3] = uVar19;
        puVar11[5] = puVar1[5];
      }
      else {
        puVar11[3] = puVar1[3];
        if (uVar22 >> 0x3c < 0xf) {
          uVar19 = puVar1[4];
          func_0x00010006c00c(uVar19,uVar22);
          puVar11[4] = uVar19;
          puVar11[5] = uVar22;
        }
        else {
          uVar19 = puVar1[4];
          puVar11[5] = puVar1[5];
          puVar11[4] = uVar19;
        }
      }
      *(undefined2 *)(puVar11 + 6) = *(undefined2 *)(puVar1 + 6);
      puVar11[7] = puVar1[7];
      lVar8 = puVar1[9];
      if (lVar8 == 1) {
        uVar19 = puVar1[0x10];
        uVar23 = puVar1[0x13];
        uVar20 = puVar1[0x12];
        puVar11[0x11] = puVar1[0x11];
        puVar11[0x10] = uVar19;
        puVar11[0x13] = uVar23;
        puVar11[0x12] = uVar20;
        uVar19 = puVar1[0x14];
        puVar11[0x15] = puVar1[0x15];
        puVar11[0x14] = uVar19;
        uVar19 = *(undefined8 *)((long)puVar1 + 0xaa);
        *(undefined8 *)((long)puVar11 + 0xb2) = *(undefined8 *)((long)puVar1 + 0xb2);
        *(undefined8 *)((long)puVar11 + 0xaa) = uVar19;
        uVar19 = puVar1[8];
        uVar23 = puVar1[0xb];
        uVar20 = puVar1[10];
        puVar11[9] = puVar1[9];
        puVar11[8] = uVar19;
        puVar11[0xb] = uVar23;
        puVar11[10] = uVar20;
        uVar19 = puVar1[0xc];
        uVar23 = puVar1[0xf];
        uVar20 = puVar1[0xe];
        puVar11[0xd] = puVar1[0xd];
        puVar11[0xc] = uVar19;
        puVar11[0xf] = uVar23;
        puVar11[0xe] = uVar20;
      }
      else {
        puVar11[8] = puVar1[8];
        puVar11[9] = lVar8;
        uVar4 = puVar1[0xb];
        puVar11[10] = puVar1[10];
        puVar11[0xb] = uVar4;
        uVar19 = puVar1[0xc];
        uVar20 = puVar1[0xd];
        puVar11[0xc] = uVar19;
        puVar11[0xd] = uVar20;
        uVar20 = puVar1[0xe];
        uVar23 = puVar1[0xf];
        puVar11[0xe] = uVar20;
        puVar11[0xf] = uVar23;
        uVar23 = puVar1[0x10];
        uVar5 = puVar1[0x11];
        puVar11[0x10] = uVar23;
        puVar11[0x11] = uVar5;
        lVar8 = puVar1[0x13];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar4);
        _swift_bridgeObjectRetain(uVar19);
        _swift_bridgeObjectRetain(uVar20);
        _swift_bridgeObjectRetain(uVar23);
        _swift_bridgeObjectRetain(uVar5);
        if (lVar8 == 1) {
          uVar19 = puVar1[0x12];
          puVar11[0x13] = puVar1[0x13];
          puVar11[0x12] = uVar19;
        }
        else {
          puVar11[0x12] = puVar1[0x12];
          puVar11[0x13] = lVar8;
          _swift_bridgeObjectRetain(lVar8);
        }
        uVar19 = puVar1[0x15];
        puVar11[0x14] = puVar1[0x14];
        puVar11[0x15] = uVar19;
        puVar11[0x16] = puVar1[0x16];
        *(undefined2 *)(puVar11 + 0x17) = *(undefined2 *)(puVar1 + 0x17);
        _swift_bridgeObjectRetain();
      }
      *(undefined2 *)((long)puVar11 + 0xba) = *(undefined2 *)((long)puVar1 + 0xba);
      if (puVar1[0x18] == 0) {
        lVar8 = puVar1[0x18];
        uVar20 = puVar1[0x1b];
        uVar19 = puVar1[0x1a];
        puVar11[0x19] = puVar1[0x19];
        puVar11[0x18] = lVar8;
        puVar11[0x1b] = uVar20;
        puVar11[0x1a] = uVar19;
        uVar19 = puVar1[0x1c];
        uVar23 = puVar1[0x1f];
        uVar20 = puVar1[0x1e];
        puVar11[0x1d] = puVar1[0x1d];
        puVar11[0x1c] = uVar19;
        puVar11[0x1f] = uVar23;
        puVar11[0x1e] = uVar20;
      }
      else {
        puVar11[0x18] = puVar1[0x18];
        uVar19 = puVar1[0x19];
        puVar11[0x1a] = puVar1[0x1a];
        puVar11[0x19] = uVar19;
        uVar19 = puVar1[0x1c];
        puVar11[0x1b] = puVar1[0x1b];
        puVar11[0x1c] = uVar19;
        lVar8 = puVar1[0x1e];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar19);
        if (lVar8 == 0) {
          uVar19 = puVar1[0x1d];
          puVar11[0x1e] = puVar1[0x1e];
          puVar11[0x1d] = uVar19;
          puVar11[0x1f] = puVar1[0x1f];
        }
        else {
          puVar11[0x1d] = puVar1[0x1d];
          puVar11[0x1e] = lVar8;
          uVar19 = puVar1[0x1f];
          puVar11[0x1f] = uVar19;
          _swift_bridgeObjectRetain(lVar8);
          _swift_bridgeObjectRetain(uVar19);
        }
      }
      *(undefined1 *)(puVar11 + 0x20) = *(undefined1 *)(puVar1 + 0x20);
      uVar19 = puVar1[0x22];
      puVar11[0x21] = puVar1[0x21];
      puVar11[0x22] = uVar19;
      uVar19 = puVar1[0x24];
      puVar11[0x23] = puVar1[0x23];
      puVar11[0x24] = uVar19;
      uVar20 = puVar1[0x25];
      puVar11[0x26] = puVar1[0x26];
      puVar11[0x25] = uVar20;
      uVar20 = *(undefined8 *)((long)puVar1 + 0x132);
      *(undefined8 *)((long)puVar11 + 0x13a) = *(undefined8 *)((long)puVar1 + 0x13a);
      *(undefined8 *)((long)puVar11 + 0x132) = uVar20;
      lVar8 = puVar1[0x2a];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar19);
      if (lVar8 == 0) {
        uVar19 = puVar1[0x29];
        uVar23 = puVar1[0x2c];
        uVar20 = puVar1[0x2b];
        puVar11[0x2a] = puVar1[0x2a];
        puVar11[0x29] = uVar19;
        puVar11[0x2c] = uVar23;
        puVar11[0x2b] = uVar20;
      }
      else {
        puVar11[0x29] = puVar1[0x29];
        puVar11[0x2a] = lVar8;
        uVar19 = puVar1[0x2c];
        puVar11[0x2b] = puVar1[0x2b];
        puVar11[0x2c] = uVar19;
        _swift_bridgeObjectRetain(lVar8);
        _swift_bridgeObjectRetain(uVar19);
      }
      uVar19 = puVar1[0x2e];
      puVar11[0x2d] = puVar1[0x2d];
      puVar11[0x2e] = uVar19;
      uVar19 = puVar1[0x2f];
      uVar20 = puVar1[0x30];
      *(undefined1 *)(puVar11 + 0x31) = *(undefined1 *)(puVar1 + 0x31);
      uVar22 = puVar1[0x36];
      uVar7 = *(uint5 *)(puVar1 + 0x39);
      puVar11[0x2f] = uVar19;
      puVar11[0x30] = uVar20;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar20);
      if ((((uVar22 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
         (((ulong)uVar7 & 0xfefefefefefefefe) == 0x6fefefefe)) {
        uVar19 = puVar1[0x32];
        uVar23 = puVar1[0x35];
        uVar20 = puVar1[0x34];
        puVar11[0x33] = puVar1[0x33];
        puVar11[0x32] = uVar19;
        puVar11[0x35] = uVar23;
        puVar11[0x34] = uVar20;
        uVar19 = puVar1[0x36];
        puVar11[0x37] = puVar1[0x37];
        puVar11[0x36] = uVar19;
        uVar19 = *(undefined8 *)((long)puVar1 + 0x1bd);
        *(undefined8 *)((long)puVar11 + 0x1c5) = *(undefined8 *)((long)puVar1 + 0x1c5);
        *(undefined8 *)((long)puVar11 + 0x1bd) = uVar19;
      }
      else {
        uVar19 = puVar1[0x32];
        uVar4 = puVar1[0x33];
        uVar20 = puVar1[0x34];
        uVar5 = puVar1[0x35];
        uVar23 = puVar1[0x37];
        uVar6 = puVar1[0x38];
        func_0x00010179a2b8(uVar19,uVar4,uVar20,uVar5,uVar22,uVar23,uVar6,(ulong)uVar7);
        puVar11[0x32] = uVar19;
        puVar11[0x33] = uVar4;
        puVar11[0x34] = uVar20;
        puVar11[0x35] = uVar5;
        puVar11[0x36] = uVar22;
        puVar11[0x37] = uVar23;
        puVar11[0x38] = uVar6;
        *(char *)((long)puVar11 + 0x1cc) = (char)(uVar7 >> 0x20);
        *(int *)(puVar11 + 0x39) = (int)uVar7;
      }
      *(undefined1 *)((long)puVar11 + 0x1cd) = *(undefined1 *)((long)puVar1 + 0x1cd);
      uVar19 = puVar1[0x3b];
      puVar11[0x3a] = puVar1[0x3a];
      puVar11[0x3b] = uVar19;
      *(undefined1 *)(puVar11 + 0x3c) = *(undefined1 *)(puVar1 + 0x3c);
      lVar8 = puVar1[0x3e];
      _swift_bridgeObjectRetain();
      if (lVar8 == 0) {
        uVar19 = puVar1[0x3d];
        uVar23 = puVar1[0x40];
        uVar20 = puVar1[0x3f];
        puVar11[0x3e] = puVar1[0x3e];
        puVar11[0x3d] = uVar19;
        puVar11[0x40] = uVar23;
        puVar11[0x3f] = uVar20;
        uVar19 = puVar1[0x41];
        puVar11[0x42] = puVar1[0x42];
        puVar11[0x41] = uVar19;
      }
      else {
        puVar11[0x3d] = puVar1[0x3d];
        puVar11[0x3e] = lVar8;
        uVar19 = puVar1[0x40];
        puVar11[0x3f] = puVar1[0x3f];
        puVar11[0x40] = uVar19;
        puVar11[0x41] = puVar1[0x41];
        uVar20 = puVar1[0x42];
        puVar11[0x42] = uVar20;
        _swift_bridgeObjectRetain(lVar8);
        _swift_bridgeObjectRetain(uVar19);
        _swift_bridgeObjectRetain(uVar20);
      }
      *(undefined1 *)(puVar11 + 0x43) = *(undefined1 *)(puVar1 + 0x43);
      lVar8 = puVar1[0x45];
      if (lVar8 == 0) {
        uVar19 = puVar1[0x44];
        uVar23 = puVar1[0x47];
        uVar20 = puVar1[0x46];
        puVar11[0x45] = puVar1[0x45];
        puVar11[0x44] = uVar19;
        puVar11[0x47] = uVar23;
        puVar11[0x46] = uVar20;
        uVar19 = puVar1[0x48];
        puVar11[0x49] = puVar1[0x49];
        puVar11[0x48] = uVar19;
        puVar11[0x4a] = puVar1[0x4a];
      }
      else {
        puVar11[0x44] = puVar1[0x44];
        puVar11[0x45] = lVar8;
        puVar11[0x46] = puVar1[0x46];
        uVar19 = puVar1[0x47];
        puVar11[0x47] = uVar19;
        puVar11[0x48] = puVar1[0x48];
        uVar20 = puVar1[0x49];
        puVar11[0x49] = uVar20;
        puVar11[0x4a] = puVar1[0x4a];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar19);
        _swift_bridgeObjectRetain(uVar20);
      }
      puVar11[0x4b] = puVar1[0x4b];
      _swift_bridgeObjectRetain();
    }
    (**(code **)(lVar18 + 0x38))(puVar9,0,1,lVar10);
  }
  else {
    lVar8 = 0x112db3cc8;
    func_0x0001000285a8(0x112db3cc8,&UNK_10d98e570);
    _memcpy(puVar9,puVar1,*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  }
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  return param_1;
}



/* Entry: 104736bf4; end: 104736c2f;  */

undefined8 FUN_104736bf4(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 104736c30; end: 104738eff;  */

undefined8 * FUN_104736c30(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  lVar4 = 0;
  FUN_104739264();
  lVar16 = *(long *)(lVar4 + -8);
  pcVar13 = *(code **)(lVar16 + 0x30);
  puVar5 = param_2;
  (*pcVar13)(param_2,1,lVar4);
  if ((int)puVar5 == 0) {
    uVar17 = *param_2;
    uVar19 = param_2[3];
    uVar18 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar17;
    param_1[3] = uVar19;
    param_1[2] = uVar18;
    uVar17 = param_2[4];
    uVar19 = param_2[7];
    uVar18 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar17;
    param_1[7] = uVar19;
    param_1[6] = uVar18;
    param_1[8] = param_2[8];
    param_1[0xf] = param_2[0xf];
    uVar17 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar17;
    uVar17 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar17;
    uVar17 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = uVar17;
    uVar17 = param_2[0x10];
    uVar19 = param_2[0x13];
    uVar18 = param_2[0x12];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar17;
    param_1[0x13] = uVar19;
    param_1[0x12] = uVar18;
    lVar8 = (long)param_1 + (long)*(int *)(lVar4 + 0x34);
    lVar15 = (long)param_2 + (long)*(int *)(lVar4 + 0x34);
    lVar6 = 0;
    FUN_104742f28();
    lVar12 = *(long *)(lVar6 + -8);
    lVar7 = lVar15;
    (**(code **)(lVar12 + 0x30))(lVar15,1,lVar6);
    if ((int)lVar7 == 0) {
      lVar7 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar7 + -8) + 0x20))(lVar8,lVar15,lVar7);
      puVar5 = (undefined8 *)(lVar15 + *(int *)(lVar6 + 0x14));
      uVar17 = *puVar5;
      puVar1 = (undefined8 *)(lVar8 + *(int *)(lVar6 + 0x14));
      puVar1[1] = puVar5[1];
      *puVar1 = uVar17;
      *(undefined1 *)(lVar8 + *(int *)(lVar6 + 0x18)) =
           *(undefined1 *)(lVar15 + *(int *)(lVar6 + 0x18));
      *(undefined1 *)(lVar8 + *(int *)(lVar6 + 0x1c)) =
           *(undefined1 *)(lVar15 + *(int *)(lVar6 + 0x1c));
      puVar5 = (undefined8 *)(lVar8 + *(int *)(lVar6 + 0x20));
      puVar1 = (undefined8 *)(lVar15 + *(int *)(lVar6 + 0x20));
      *puVar5 = *puVar1;
      *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(puVar1 + 1);
      *(undefined1 *)(lVar8 + *(int *)(lVar6 + 0x24)) =
           *(undefined1 *)(lVar15 + *(int *)(lVar6 + 0x24));
      (**(code **)(lVar12 + 0x38))(lVar8,0,1,lVar6);
    }
    else {
      lVar7 = 0x112dcbf00;
      func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
      _memcpy(lVar8,lVar15,*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
    }
    puVar5 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x38));
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x38));
    uVar17 = *puVar1;
    puVar5[1] = puVar1[1];
    *puVar5 = uVar17;
    uVar17 = *(undefined8 *)((long)puVar1 + 9);
    *(undefined8 *)((long)puVar5 + 0x11) = *(undefined8 *)((long)puVar1 + 0x11);
    *(undefined8 *)((long)puVar5 + 9) = uVar17;
    (**(code **)(lVar16 + 0x38))(param_1,0,1,lVar4);
  }
  else {
    lVar8 = 0x112db3ce0;
    func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
    _memcpy(param_1,param_2,*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  }
  _memcpy((long)param_1 + (long)*(int *)(param_3 + 0x14),
          (long)param_2 + (long)*(int *)(param_3 + 0x14),0x260);
  puVar5 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  lVar8 = 0;
  FUN_10470fbcc();
  lVar15 = *(long *)(lVar8 + -8);
  puVar9 = puVar1;
  (**(code **)(lVar15 + 0x30))(puVar1,1,lVar8);
  if ((int)puVar9 == 0) {
    uVar17 = *puVar1;
    uVar19 = puVar1[3];
    uVar18 = puVar1[2];
    puVar5[1] = puVar1[1];
    *puVar5 = uVar17;
    puVar5[3] = uVar19;
    puVar5[2] = uVar18;
    uVar17 = puVar1[4];
    uVar19 = puVar1[7];
    uVar18 = puVar1[6];
    puVar5[5] = puVar1[5];
    puVar5[4] = uVar17;
    puVar5[7] = uVar19;
    puVar5[6] = uVar18;
    uVar17 = puVar1[8];
    puVar5[9] = puVar1[9];
    puVar5[8] = uVar17;
    puVar5[10] = puVar1[10];
    uVar17 = puVar1[0xb];
    puVar5[0xc] = puVar1[0xc];
    puVar5[0xb] = uVar17;
    uVar17 = *(undefined8 *)((long)puVar1 + 0x61);
    *(undefined8 *)((long)puVar5 + 0x69) = *(undefined8 *)((long)puVar1 + 0x69);
    *(undefined8 *)((long)puVar5 + 0x61) = uVar17;
    uVar17 = puVar1[0xf];
    puVar5[0x10] = puVar1[0x10];
    puVar5[0xf] = uVar17;
    *(undefined1 *)(puVar5 + 0x11) = *(undefined1 *)(puVar1 + 0x11);
    uVar17 = puVar1[0x12];
    puVar5[0x13] = puVar1[0x13];
    puVar5[0x12] = uVar17;
    puVar5[0x14] = puVar1[0x14];
    uVar17 = puVar1[0x15];
    puVar5[0x16] = puVar1[0x16];
    puVar5[0x15] = uVar17;
    puVar5[0x17] = puVar1[0x17];
    lVar7 = (long)puVar5 + (long)*(int *)(lVar8 + 0x38);
    lVar6 = (long)puVar1 + (long)*(int *)(lVar8 + 0x38);
    lVar11 = 0;
    FUN_104742f28();
    lVar14 = *(long *)(lVar11 + -8);
    lVar12 = lVar6;
    (**(code **)(lVar14 + 0x30))(lVar6,1,lVar11);
    if ((int)lVar12 == 0) {
      lVar12 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar12 + -8) + 0x20))(lVar7,lVar6,lVar12);
      puVar1 = (undefined8 *)(lVar6 + *(int *)(lVar11 + 0x14));
      uVar17 = *puVar1;
      puVar9 = (undefined8 *)(lVar7 + *(int *)(lVar11 + 0x14));
      puVar9[1] = puVar1[1];
      *puVar9 = uVar17;
      *(undefined1 *)(lVar7 + *(int *)(lVar11 + 0x18)) =
           *(undefined1 *)(lVar6 + *(int *)(lVar11 + 0x18));
      *(undefined1 *)(lVar7 + *(int *)(lVar11 + 0x1c)) =
           *(undefined1 *)(lVar6 + *(int *)(lVar11 + 0x1c));
      puVar1 = (undefined8 *)(lVar7 + *(int *)(lVar11 + 0x20));
      puVar9 = (undefined8 *)(lVar6 + *(int *)(lVar11 + 0x20));
      *puVar1 = *puVar9;
      *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar9 + 1);
      *(undefined1 *)(lVar7 + *(int *)(lVar11 + 0x24)) =
           *(undefined1 *)(lVar6 + *(int *)(lVar11 + 0x24));
      (**(code **)(lVar14 + 0x38))(lVar7,0,1,lVar11);
    }
    else {
      lVar12 = 0x112dcbf00;
      func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
      _memcpy(lVar7,lVar6,*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
    }
    (**(code **)(lVar15 + 0x38))(puVar5,0,1,lVar8);
  }
  else {
    lVar8 = 0x112db3cd8;
    func_0x0001000285a8(0x112db3cd8,&UNK_10dd317d0);
    _memcpy(puVar5,puVar1,*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  }
  puVar5 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  lVar8 = 0;
  FUN_10475cf44();
  lVar15 = *(long *)(lVar8 + -8);
  puVar9 = puVar1;
  (**(code **)(lVar15 + 0x30))(puVar1,1,lVar8);
  if ((int)puVar9 == 0) {
    uVar17 = *puVar1;
    uVar19 = puVar1[3];
    uVar18 = puVar1[2];
    puVar5[1] = puVar1[1];
    *puVar5 = uVar17;
    puVar5[3] = uVar19;
    puVar5[2] = uVar18;
    puVar9 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar8 + 0x18));
    puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x18));
    puVar10 = puVar2;
    (*pcVar13)(puVar2,1,lVar4);
    if ((int)puVar10 == 0) {
      uVar17 = *puVar2;
      uVar19 = puVar2[3];
      uVar18 = puVar2[2];
      puVar9[1] = puVar2[1];
      *puVar9 = uVar17;
      puVar9[3] = uVar19;
      puVar9[2] = uVar18;
      uVar17 = puVar2[4];
      uVar19 = puVar2[7];
      uVar18 = puVar2[6];
      puVar9[5] = puVar2[5];
      puVar9[4] = uVar17;
      puVar9[7] = uVar19;
      puVar9[6] = uVar18;
      puVar9[8] = puVar2[8];
      puVar9[0xf] = puVar2[0xf];
      uVar17 = puVar2[0xd];
      puVar9[0xe] = puVar2[0xe];
      puVar9[0xd] = uVar17;
      uVar17 = puVar2[0xb];
      puVar9[0xc] = puVar2[0xc];
      puVar9[0xb] = uVar17;
      uVar17 = puVar2[9];
      puVar9[10] = puVar2[10];
      puVar9[9] = uVar17;
      uVar17 = puVar2[0x10];
      uVar19 = puVar2[0x13];
      uVar18 = puVar2[0x12];
      puVar9[0x11] = puVar2[0x11];
      puVar9[0x10] = uVar17;
      puVar9[0x13] = uVar19;
      puVar9[0x12] = uVar18;
      lVar7 = (long)puVar9 + (long)*(int *)(lVar4 + 0x34);
      lVar6 = (long)puVar2 + (long)*(int *)(lVar4 + 0x34);
      lVar11 = 0;
      FUN_104742f28();
      lVar14 = *(long *)(lVar11 + -8);
      lVar12 = lVar6;
      (**(code **)(lVar14 + 0x30))(lVar6,1,lVar11);
      if ((int)lVar12 == 0) {
        lVar12 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar12 + -8) + 0x20))(lVar7,lVar6,lVar12);
        puVar10 = (undefined8 *)(lVar6 + *(int *)(lVar11 + 0x14));
        uVar17 = *puVar10;
        puVar3 = (undefined8 *)(lVar7 + *(int *)(lVar11 + 0x14));
        puVar3[1] = puVar10[1];
        *puVar3 = uVar17;
        *(undefined1 *)(lVar7 + *(int *)(lVar11 + 0x18)) =
             *(undefined1 *)(lVar6 + *(int *)(lVar11 + 0x18));
        *(undefined1 *)(lVar7 + *(int *)(lVar11 + 0x1c)) =
             *(undefined1 *)(lVar6 + *(int *)(lVar11 + 0x1c));
        puVar10 = (undefined8 *)(lVar7 + *(int *)(lVar11 + 0x20));
        puVar3 = (undefined8 *)(lVar6 + *(int *)(lVar11 + 0x20));
        *puVar10 = *puVar3;
        *(undefined1 *)(puVar10 + 1) = *(undefined1 *)(puVar3 + 1);
        *(undefined1 *)(lVar7 + *(int *)(lVar11 + 0x24)) =
             *(undefined1 *)(lVar6 + *(int *)(lVar11 + 0x24));
        (**(code **)(lVar14 + 0x38))(lVar7,0,1,lVar11);
      }
      else {
        lVar12 = 0x112dcbf00;
        func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
        _memcpy(lVar7,lVar6,*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
      }
      puVar10 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar4 + 0x38));
      puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar4 + 0x38));
      uVar17 = *puVar2;
      puVar10[1] = puVar2[1];
      *puVar10 = uVar17;
      uVar17 = *(undefined8 *)((long)puVar2 + 9);
      *(undefined8 *)((long)puVar10 + 0x11) = *(undefined8 *)((long)puVar2 + 0x11);
      *(undefined8 *)((long)puVar10 + 9) = uVar17;
      (**(code **)(lVar16 + 0x38))(puVar9,0,1);
    }
    else {
      lVar4 = 0x112db3ce0;
      func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
      _memcpy(puVar9,puVar2,*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
    }
    _memcpy((long)puVar5 + (long)*(int *)(lVar8 + 0x1c),(long)puVar1 + (long)*(int *)(lVar8 + 0x1c),
            0x260);
    (**(code **)(lVar15 + 0x38))(puVar5,0,1,lVar8);
  }
  else {
    lVar4 = 0x112db3cc8;
    func_0x0001000285a8(0x112db3cc8,&UNK_10d98e570);
    _memcpy(puVar5,puVar1,*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  }
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  return param_1;
}



/* Entry: 104738f00; end: 104738f17;  */

void FUN_104738f00(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 104738f18; end: 1047390cb;  */

void FUN_104738f18(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_48;
  undefined *puStack_40;
  long lStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  uVar2 = 0x11308e318;
  lVar1 = 0x13f;
  func_0x000104738ffc(0x13f,0x11308e318,FUN_104739264);
  if (uVar2 < 0x40) {
    lStack_48 = *(long *)(lVar1 + -8) + 0x40;
    puStack_40 = &UNK_10dd318c0;
    uVar2 = 0x11308e320;
    lVar1 = 0x13f;
    func_0x000104738ffc(0x13f,0x11308e320,FUN_10470fbcc);
    if (uVar2 < 0x40) {
      lStack_38 = *(long *)(lVar1 + -8) + 0x40;
      uVar2 = 0x11308e328;
      lVar1 = 0x13f;
      func_0x000104738ffc(0x13f,0x11308e328,FUN_10475cf44);
      if (uVar2 < 0x40) {
        lStack_30 = *(long *)(lVar1 + -8) + 0x40;
        puStack_28 = PTR___sBi64_WV_11034d670 + 0x40;
        _swift_initStructMetadata(param_1,0x100,5,&lStack_48,param_1 + 0x10);
      }
    }
  }
  return;
}



/* Entry: 1047390cc; end: 104739263;  */

uint FUN_1047390cc(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  long extraout_x8;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffc0 + -extraout_x8;
  if (param_2 != 0) {
    uVar6 = 0x7461686370616e73;
    __sSS9hasPrefixySbSSF(0x7461686370616e73,0xeb000000002f2f3a,param_1,param_2);
    if ((uVar6 & 1) != 0) {
      uVar5 = 1;
      goto LAB_10473920c;
    }
    __s10Foundation3URLV6stringACSgSSh_tcfC(puVar3,param_1,param_2);
    lVar1 = 0;
    __s10Foundation3URLVMa();
    lVar7 = *(long *)(lVar1 + -8);
    lVar4 = 1;
    puVar2 = puVar3;
    (**(code **)(lVar7 + 0x30))(puVar3,1,lVar1);
    if ((int)puVar2 == 1) {
      func_0x0001000293e4(puVar3);
    }
    else {
      __s10Foundation3URLV4hostSSSgvg();
      (**(code **)(lVar7 + 8))(puVar3,lVar1);
      if (lVar4 != 0) {
        if ((puVar2 == (undefined1 *)0x7461686370616e73 && lVar4 == -0x13ffffff92909cd2) ||
           (puVar3 = puVar2,
           __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                     (puVar2,lVar4,0x7461686370616e73,0xec0000006d6f632e,0),
           ((ulong)puVar3 & 1) != 0)) {
          _swift_bridgeObjectRelease(lVar4);
          uVar5 = 1;
        }
        else {
          uVar5 = 0;
          __sSS9hasSuffixySbSSF(0x61686370616e732e,0xed00006d6f632e74,puVar2,lVar4);
          _swift_bridgeObjectRelease(lVar4);
        }
        goto LAB_10473920c;
      }
    }
  }
  uVar5 = 0;
LAB_10473920c:
  return uVar5 & 1;
}



/* Entry: 104739264; end: 10473929b;  */

void FUN_104739264(undefined8 param_1)

{
  if (lRam000000011308e3c8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e81a0f0);
  return;
}



/* Entry: 10473929c; end: 1047392e3;  */

undefined8 FUN_10473929c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1047392e4; end: 1047392e7;  */

undefined8 FUN_1047392e4(ulong *param_1,ulong *param_2)

{
  double *pdVar1;
  double *pdVar2;
  ulong uVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 *puVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  code *pcVar17;
  long lVar18;
  ulong uVar19;
  undefined1 auStack_150 [4];
  uint uStack_14c;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
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
  ulong uVar9;
  
  lVar6 = 0;
  FUN_104742f28();
  lVar18 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  puVar13 = auStack_150 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar16 = 0x112dcbf00;
  func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar16 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar15 = (long)puVar13 - extraout_x8_00;
  lVar16 = 0x11308df20;
  func_0x0001000285a8(0x11308df20,&UNK_10dd30820);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar16 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = uVar15 - extraout_x8_01;
  uVar11 = *param_1;
  if (((uVar11 != *param_2) || (param_1[1] != param_2[1])) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar11 & 1) == 0)) {
    return 0;
  }
  uVar11 = param_2[3];
  if (param_1[3] == 0) {
    if (uVar11 != 0) {
      return 0;
    }
  }
  else {
    if (uVar11 == 0) {
      return 0;
    }
    uVar7 = param_1[2];
    if (((uVar7 != param_2[2]) || (param_1[3] != uVar11)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar7 & 1) == 0)) {
      return 0;
    }
  }
  uVar11 = param_2[5];
  if (param_1[5] == 0) {
    if (uVar11 != 0) {
      return 0;
    }
  }
  else {
    if (uVar11 == 0) {
      return 0;
    }
    uVar7 = param_1[4];
    if (((uVar7 != param_2[4]) || (param_1[5] != uVar11)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar7 & 1) == 0)) {
      return 0;
    }
  }
  uVar11 = param_2[7];
  if (param_1[7] == 0) {
    if (uVar11 != 0) {
      return 0;
    }
  }
  else {
    if (uVar11 == 0) {
      return 0;
    }
    uVar7 = param_1[6];
    if (((uVar7 != param_2[6]) || (param_1[7] != uVar11)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar7 & 1) == 0)) {
      return 0;
    }
  }
  if ((int)param_1[8] != (int)param_2[8]) {
    return 0;
  }
  uStack_130 = param_1[9];
  uStack_128 = param_1[10];
  uStack_120 = param_1[0xb];
  uStack_e8 = param_1[0xc];
  uVar11 = param_1[0xd];
  uVar9 = param_1[0xe];
  uVar19 = param_1[0xf];
  uStack_138 = param_2[9];
  uStack_110 = param_2[10];
  uVar7 = param_2[0xb];
  uStack_108 = param_2[0xc];
  uStack_118 = param_2[0xd];
  uVar3 = param_2[0xe];
  uVar12 = param_2[0xf];
  uStack_140 = uVar3;
  uStack_e0 = uVar7;
  if (uVar19 == 1) {
    if (uVar12 != 1) {
LAB_104739a80:
      uStack_100 = uVar12;
      uStack_f8 = uVar9;
      uStack_f0 = uVar11;
      func_0x000104711a50(uStack_130,uStack_128,uStack_120,uStack_e8,uVar11,uVar9,uVar19);
      uVar11 = uStack_100;
      func_0x000104711a50(uStack_138,uStack_110,uVar7,uStack_108,uStack_118,uVar3,uStack_100);
      func_0x0001015543ac(uStack_130,uStack_128,uStack_120,uStack_e8,uStack_f0,uStack_f8,uVar19);
      func_0x0001015543ac(uStack_138,uStack_110,uStack_e0,uStack_108,uStack_118,uVar3,uVar11);
      return 0;
    }
    func_0x000104711a50(uStack_130,uStack_128,uStack_120,uStack_e8,uVar11,uVar9,1);
    func_0x000104711a50(uStack_138,uStack_110,uStack_e0,uStack_108,uStack_118,uStack_140,1);
    func_0x0001015543ac(uStack_130,uStack_128,uStack_120,uStack_e8,uVar11,uVar9,1);
  }
  else {
    if (uVar12 == 1) goto LAB_104739a80;
    uStack_148 = uVar19;
    uStack_100 = uVar12;
    uStack_f8 = uVar9;
    uStack_f0 = uVar11;
    uStack_d8 = uStack_130;
    uStack_d0 = uStack_128;
    uStack_c8 = uStack_120;
    uStack_c0 = uStack_e8;
    uStack_b8 = uVar11;
    uStack_b0 = uVar9;
    uStack_a8 = uVar19;
    uStack_a0 = uStack_138;
    uStack_98 = uStack_110;
    uStack_90 = uVar7;
    uStack_88 = uStack_108;
    uStack_80 = uStack_118;
    uStack_78 = uVar3;
    uStack_70 = uVar12;
    func_0x000104711a50(uStack_130,uStack_128,uStack_120,uStack_e8,uVar11,uVar9,uVar19);
    uVar7 = uStack_100;
    uVar11 = uStack_138;
    func_0x000104711a50(uStack_138,uStack_110,uStack_e0,uStack_108,uStack_118,uVar3,uStack_100);
    puVar8 = &uStack_d8;
    FUN_104741990(puVar8,&uStack_a0);
    uStack_14c = (uint)puVar8;
    func_0x0001015543ac(uVar11,uStack_110,uStack_e0,uStack_108,uStack_118,uStack_140,uVar7);
    func_0x0001015543ac(uStack_130,uStack_128,uStack_120,uStack_e8,uStack_f0,uStack_f8,uStack_148);
    if ((uStack_14c & 1) == 0) {
      return 0;
    }
  }
  uVar11 = param_2[0x11];
  if (param_1[0x11] == 0) {
    if (uVar11 != 0) {
      return 0;
    }
  }
  else {
    if (uVar11 == 0) {
      return 0;
    }
    uVar7 = param_1[0x10];
    if (((uVar7 != param_2[0x10]) || (param_1[0x11] != uVar11)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar7 & 1) == 0)) {
      return 0;
    }
  }
  if ((int)param_1[0x12] != (int)param_2[0x12]) {
    return 0;
  }
  uVar7 = param_1[0x13];
  uVar11 = param_2[0x13];
  if (uVar7 == 0) {
    if (uVar11 != 0) {
      return 0;
    }
  }
  else {
    if (uVar11 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(uVar11);
    uVar9 = uVar7;
    _swift_bridgeObjectRetain();
    uVar5 = (undefined4)uVar9;
    func_0x00010470c484();
    uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar5);
    _swift_bridgeObjectRelease(uVar7);
    _swift_bridgeObjectRelease(uVar11);
    if ((uStack_e0 & 1) == 0) {
      return 0;
    }
  }
  lVar10 = 0;
  FUN_104739264();
  iVar4 = *(int *)(lVar10 + 0x34);
  lVar16 = (long)*(int *)(lVar16 + 0x30);
  uStack_e0 = lVar10;
  FUN_10473929c((long)param_1 + (long)iVar4,lVar14,0x112dcbf00,&UNK_10dd317c0);
  FUN_10473929c((long)param_2 + (long)iVar4,lVar14 + lVar16,0x112dcbf00,&UNK_10dd317c0);
  pcVar17 = *(code **)(lVar18 + 0x30);
  lVar18 = lVar14;
  (*pcVar17)(lVar14,1,lVar6);
  if ((int)lVar18 == 1) {
    lVar16 = lVar14 + lVar16;
    (*pcVar17)(lVar16,1,lVar6);
    if ((int)lVar16 != 1) {
LAB_104739dec:
      func_0x00010473aec4(lVar14,0x11308df20,&UNK_10dd30820);
      return 0;
    }
    func_0x00010473aec4(lVar14,0x112dcbf00,&UNK_10dd317c0);
  }
  else {
    FUN_10473929c(lVar14,uVar15,0x112dcbf00,&UNK_10dd317c0);
    lVar18 = lVar14 + lVar16;
    (*pcVar17)(lVar18,1,lVar6);
    if ((int)lVar18 == 1) {
      func_0x000104710904(uVar15);
      goto LAB_104739dec;
    }
    func_0x0001047108c0(lVar14 + lVar16,puVar13);
    uVar11 = uVar15;
    FUN_1047430d0(uVar15,puVar13);
    func_0x000104710904(puVar13);
    func_0x000104710904(uVar15);
    func_0x00010473aec4(lVar14,0x112dcbf00,&UNK_10dd317c0);
    if ((uVar11 & 1) == 0) {
      return 0;
    }
  }
  pdVar1 = (double *)((long)param_1 + (long)*(int *)(uStack_e0 + 0x38));
  pdVar2 = (double *)((long)param_2 + (long)*(int *)(uStack_e0 + 0x38));
  if (*(char *)(pdVar1 + 3) == '\x01') {
    if (*(char *)(pdVar2 + 3) == '\x01') {
      return 1;
    }
  }
  else if (((*(char *)(pdVar2 + 3) != '\x01') && (*pdVar1 == *pdVar2)) &&
          ((pdVar1[1] == pdVar2[1] && (pdVar1[2] == pdVar2[2])))) {
    return 1;
  }
  return 0;
}



/* Entry: 1047392e8; end: 10473974b;  */

void FUN_1047392e8(undefined8 param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *unaff_x20;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  ulong auStack_80 [4];
  
  lVar5 = 0;
  FUN_104742f28();
  lVar14 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar8 = (long)auStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar10 = 0x112dcbf00;
  func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar8 - extraout_x8_00;
  __sSS4hash4intoys6HasherVz_tF(param_1,*unaff_x20,unaff_x20[1]);
  lVar12 = unaff_x20[3];
  if (lVar12 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar12 = unaff_x20[5];
    if (lVar12 == 0) goto LAB_104739420;
LAB_1047393c0:
    uVar13 = unaff_x20[4];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar13,lVar12);
    lVar12 = unaff_x20[7];
    if (lVar12 != 0) goto LAB_1047393e8;
LAB_104739434:
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar13 = unaff_x20[2];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar13,lVar12);
    lVar12 = unaff_x20[5];
    if (lVar12 != 0) goto LAB_1047393c0;
LAB_104739420:
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar12 = unaff_x20[7];
    if (lVar12 == 0) goto LAB_104739434;
LAB_1047393e8:
    uVar13 = unaff_x20[6];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar13,lVar12);
  }
  __ss6HasherV8_combineyySuF(unaff_x20[8]);
  lVar12 = unaff_x20[0xf];
  if (lVar12 != 1) {
    uVar13 = unaff_x20[9];
    auStack_80[0] = unaff_x20[10];
    lVar6 = unaff_x20[0xb];
    auStack_80[1] = unaff_x20[0xc];
    auStack_80[2] = unaff_x20[0xd];
    auStack_80[3] = unaff_x20[0xe];
    __ss6HasherV8_combineyys5UInt8VF(1);
    if (lVar6 == 1) {
LAB_104739528:
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(uVar13);
      if (lVar6 == 0) {
        __ss6HasherV8_combineyys5UInt8VF(0);
        uVar3 = auStack_80[2];
      }
      else {
        __ss6HasherV8_combineyys5UInt8VF(1);
        __sSS4hash4intoys6HasherVz_tF(param_1,auStack_80[0],lVar6);
        uVar3 = auStack_80[2];
      }
      auStack_80[2] = uVar3;
      if (uVar3 == 0) goto LAB_104739528;
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,auStack_80[1],uVar3);
    }
    if (lVar12 != 0) {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,auStack_80[3],lVar12);
      lVar12 = unaff_x20[0x11];
      goto joined_r0x0001047394ec;
    }
  }
  __ss6HasherV8_combineyys5UInt8VF(0);
  lVar12 = unaff_x20[0x11];
joined_r0x0001047394ec:
  if (lVar12 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar13 = unaff_x20[0x10];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar13,lVar12);
  }
  __ss6HasherV8_combineyySuF(unaff_x20[0x12]);
  lVar12 = unaff_x20[0x13];
  if (lVar12 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_1046daeb0(param_1,lVar12);
  }
  lVar6 = 0;
  FUN_104739264();
  FUN_10473929c((long)unaff_x20 + (long)*(int *)(lVar6 + 0x34),lVar10,0x112dcbf00,&UNK_10dd317c0);
  lVar12 = lVar10;
  (**(code **)(lVar14 + 0x30))(lVar10,1,lVar5);
  if ((int)lVar12 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1047108c0(lVar10,lVar8);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar7 = 0;
    __s10Foundation3URLVMa(0);
    uVar13 = 0x112e092e0;
    FUN_104739ee8(0x112e092e0,PTR___s10Foundation3URLVMa_110350988,
                  PTR___s10Foundation3URLVSHAAMc_1103509a0);
    __sSH4hash4intoys6HasherVz_tFTj(param_1,uVar7,uVar13);
    puVar1 = (undefined8 *)(lVar8 + *(int *)(lVar5 + 0x14));
    __sSS4hash4intoys6HasherVz_tF(param_1,*puVar1,puVar1[1]);
    __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(lVar8 + *(int *)(lVar5 + 0x18)));
    __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(lVar8 + *(int *)(lVar5 + 0x1c)));
    puVar2 = (ulong *)(lVar8 + *(int *)(lVar5 + 0x20));
    if ((char)puVar2[1] == '\x01') {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      uVar11 = *puVar2;
      __ss6HasherV8_combineyys5UInt8VF(1);
      uVar3 = 0;
      if ((uVar11 & 0x7fffffffffffffff) != 0) {
        uVar3 = uVar11;
      }
      __ss6HasherV8_combineyys6UInt64VF(uVar3);
    }
    __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(lVar8 + *(int *)(lVar5 + 0x24)));
    func_0x000104710904(lVar8);
  }
  puVar2 = (ulong *)((long)unaff_x20 + (long)*(int *)(lVar6 + 0x38));
  if ((char)puVar2[3] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar11 = puVar2[1];
    uVar4 = puVar2[2];
    uVar9 = *puVar2;
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar3 = 0;
    if ((uVar9 & 0x7fffffffffffffff) != 0) {
      uVar3 = uVar9;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar3);
    __ss6HasherV8_combineyySuF(uVar11);
    __ss6HasherV8_combineyySuF(uVar4);
  }
  return;
}



/* Entry: 10473974c; end: 104739787;  */

void FUN_10473974c(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_1047392e8(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104739788; end: 10473978b;  */

void FUN_104739788(undefined8 param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *unaff_x20;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  ulong auStack_80 [4];
  
  lVar5 = 0;
  FUN_104742f28();
  lVar14 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar8 = (long)auStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar10 = 0x112dcbf00;
  func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar8 - extraout_x8_00;
  __sSS4hash4intoys6HasherVz_tF(param_1,*unaff_x20,unaff_x20[1]);
  lVar12 = unaff_x20[3];
  if (lVar12 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar12 = unaff_x20[5];
    if (lVar12 == 0) goto LAB_104739420;
LAB_1047393c0:
    uVar13 = unaff_x20[4];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar13,lVar12);
    lVar12 = unaff_x20[7];
    if (lVar12 != 0) goto LAB_1047393e8;
LAB_104739434:
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar13 = unaff_x20[2];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar13,lVar12);
    lVar12 = unaff_x20[5];
    if (lVar12 != 0) goto LAB_1047393c0;
LAB_104739420:
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar12 = unaff_x20[7];
    if (lVar12 == 0) goto LAB_104739434;
LAB_1047393e8:
    uVar13 = unaff_x20[6];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar13,lVar12);
  }
  __ss6HasherV8_combineyySuF(unaff_x20[8]);
  lVar12 = unaff_x20[0xf];
  if (lVar12 != 1) {
    uVar13 = unaff_x20[9];
    auStack_80[0] = unaff_x20[10];
    lVar6 = unaff_x20[0xb];
    auStack_80[1] = unaff_x20[0xc];
    auStack_80[2] = unaff_x20[0xd];
    auStack_80[3] = unaff_x20[0xe];
    __ss6HasherV8_combineyys5UInt8VF(1);
    if (lVar6 == 1) {
LAB_104739528:
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(uVar13);
      if (lVar6 == 0) {
        __ss6HasherV8_combineyys5UInt8VF(0);
        uVar3 = auStack_80[2];
      }
      else {
        __ss6HasherV8_combineyys5UInt8VF(1);
        __sSS4hash4intoys6HasherVz_tF(param_1,auStack_80[0],lVar6);
        uVar3 = auStack_80[2];
      }
      auStack_80[2] = uVar3;
      if (uVar3 == 0) goto LAB_104739528;
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,auStack_80[1],uVar3);
    }
    if (lVar12 != 0) {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __sSS4hash4intoys6HasherVz_tF(param_1,auStack_80[3],lVar12);
      lVar12 = unaff_x20[0x11];
      goto joined_r0x0001047394ec;
    }
  }
  __ss6HasherV8_combineyys5UInt8VF(0);
  lVar12 = unaff_x20[0x11];
joined_r0x0001047394ec:
  if (lVar12 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar13 = unaff_x20[0x10];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar13,lVar12);
  }
  __ss6HasherV8_combineyySuF(unaff_x20[0x12]);
  lVar12 = unaff_x20[0x13];
  if (lVar12 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_1046daeb0(param_1,lVar12);
  }
  lVar6 = 0;
  FUN_104739264();
  FUN_10473929c((long)unaff_x20 + (long)*(int *)(lVar6 + 0x34),lVar10,0x112dcbf00,&UNK_10dd317c0);
  lVar12 = lVar10;
  (**(code **)(lVar14 + 0x30))(lVar10,1,lVar5);
  if ((int)lVar12 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1047108c0(lVar10,lVar8);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar7 = 0;
    __s10Foundation3URLVMa(0);
    uVar13 = 0x112e092e0;
    FUN_104739ee8(0x112e092e0,PTR___s10Foundation3URLVMa_110350988,
                  PTR___s10Foundation3URLVSHAAMc_1103509a0);
    __sSH4hash4intoys6HasherVz_tFTj(param_1,uVar7,uVar13);
    puVar1 = (undefined8 *)(lVar8 + *(int *)(lVar5 + 0x14));
    __sSS4hash4intoys6HasherVz_tF(param_1,*puVar1,puVar1[1]);
    __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(lVar8 + *(int *)(lVar5 + 0x18)));
    __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(lVar8 + *(int *)(lVar5 + 0x1c)));
    puVar2 = (ulong *)(lVar8 + *(int *)(lVar5 + 0x20));
    if ((char)puVar2[1] == '\x01') {
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      uVar11 = *puVar2;
      __ss6HasherV8_combineyys5UInt8VF(1);
      uVar3 = 0;
      if ((uVar11 & 0x7fffffffffffffff) != 0) {
        uVar3 = uVar11;
      }
      __ss6HasherV8_combineyys6UInt64VF(uVar3);
    }
    __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(lVar8 + *(int *)(lVar5 + 0x24)));
    func_0x000104710904(lVar8);
  }
  puVar2 = (ulong *)((long)unaff_x20 + (long)*(int *)(lVar6 + 0x38));
  if ((char)puVar2[3] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar11 = puVar2[1];
    uVar4 = puVar2[2];
    uVar9 = *puVar2;
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar3 = 0;
    if ((uVar9 & 0x7fffffffffffffff) != 0) {
      uVar3 = uVar9;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar3);
    __ss6HasherV8_combineyySuF(uVar11);
    __ss6HasherV8_combineyySuF(uVar4);
  }
  return;
}



/* Entry: 10473978c; end: 1047397c3;  */

void FUN_10473978c(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_1047392e8(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047397c4; end: 1047397c7;  */

undefined8 FUN_1047397c4(ulong *param_1,ulong *param_2)

{
  double *pdVar1;
  double *pdVar2;
  ulong uVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 *puVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  code *pcVar17;
  long lVar18;
  ulong uVar19;
  undefined1 auStack_150 [4];
  uint uStack_14c;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
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
  ulong uVar9;
  
  lVar6 = 0;
  FUN_104742f28();
  lVar18 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  puVar13 = auStack_150 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar16 = 0x112dcbf00;
  func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar16 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar15 = (long)puVar13 - extraout_x8_00;
  lVar16 = 0x11308df20;
  func_0x0001000285a8(0x11308df20,&UNK_10dd30820);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar16 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = uVar15 - extraout_x8_01;
  uVar11 = *param_1;
  if (((uVar11 != *param_2) || (param_1[1] != param_2[1])) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar11 & 1) == 0)) {
    return 0;
  }
  uVar11 = param_2[3];
  if (param_1[3] == 0) {
    if (uVar11 != 0) {
      return 0;
    }
  }
  else {
    if (uVar11 == 0) {
      return 0;
    }
    uVar7 = param_1[2];
    if (((uVar7 != param_2[2]) || (param_1[3] != uVar11)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar7 & 1) == 0)) {
      return 0;
    }
  }
  uVar11 = param_2[5];
  if (param_1[5] == 0) {
    if (uVar11 != 0) {
      return 0;
    }
  }
  else {
    if (uVar11 == 0) {
      return 0;
    }
    uVar7 = param_1[4];
    if (((uVar7 != param_2[4]) || (param_1[5] != uVar11)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar7 & 1) == 0)) {
      return 0;
    }
  }
  uVar11 = param_2[7];
  if (param_1[7] == 0) {
    if (uVar11 != 0) {
      return 0;
    }
  }
  else {
    if (uVar11 == 0) {
      return 0;
    }
    uVar7 = param_1[6];
    if (((uVar7 != param_2[6]) || (param_1[7] != uVar11)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar7 & 1) == 0)) {
      return 0;
    }
  }
  if ((int)param_1[8] != (int)param_2[8]) {
    return 0;
  }
  uStack_130 = param_1[9];
  uStack_128 = param_1[10];
  uStack_120 = param_1[0xb];
  uStack_e8 = param_1[0xc];
  uVar11 = param_1[0xd];
  uVar9 = param_1[0xe];
  uVar19 = param_1[0xf];
  uStack_138 = param_2[9];
  uStack_110 = param_2[10];
  uVar7 = param_2[0xb];
  uStack_108 = param_2[0xc];
  uStack_118 = param_2[0xd];
  uVar3 = param_2[0xe];
  uVar12 = param_2[0xf];
  uStack_140 = uVar3;
  uStack_e0 = uVar7;
  if (uVar19 == 1) {
    if (uVar12 != 1) {
LAB_104739a80:
      uStack_100 = uVar12;
      uStack_f8 = uVar9;
      uStack_f0 = uVar11;
      func_0x000104711a50(uStack_130,uStack_128,uStack_120,uStack_e8,uVar11,uVar9,uVar19);
      uVar11 = uStack_100;
      func_0x000104711a50(uStack_138,uStack_110,uVar7,uStack_108,uStack_118,uVar3,uStack_100);
      func_0x0001015543ac(uStack_130,uStack_128,uStack_120,uStack_e8,uStack_f0,uStack_f8,uVar19);
      func_0x0001015543ac(uStack_138,uStack_110,uStack_e0,uStack_108,uStack_118,uVar3,uVar11);
      return 0;
    }
    func_0x000104711a50(uStack_130,uStack_128,uStack_120,uStack_e8,uVar11,uVar9,1);
    func_0x000104711a50(uStack_138,uStack_110,uStack_e0,uStack_108,uStack_118,uStack_140,1);
    func_0x0001015543ac(uStack_130,uStack_128,uStack_120,uStack_e8,uVar11,uVar9,1);
  }
  else {
    if (uVar12 == 1) goto LAB_104739a80;
    uStack_148 = uVar19;
    uStack_100 = uVar12;
    uStack_f8 = uVar9;
    uStack_f0 = uVar11;
    uStack_d8 = uStack_130;
    uStack_d0 = uStack_128;
    uStack_c8 = uStack_120;
    uStack_c0 = uStack_e8;
    uStack_b8 = uVar11;
    uStack_b0 = uVar9;
    uStack_a8 = uVar19;
    uStack_a0 = uStack_138;
    uStack_98 = uStack_110;
    uStack_90 = uVar7;
    uStack_88 = uStack_108;
    uStack_80 = uStack_118;
    uStack_78 = uVar3;
    uStack_70 = uVar12;
    func_0x000104711a50(uStack_130,uStack_128,uStack_120,uStack_e8,uVar11,uVar9,uVar19);
    uVar7 = uStack_100;
    uVar11 = uStack_138;
    func_0x000104711a50(uStack_138,uStack_110,uStack_e0,uStack_108,uStack_118,uVar3,uStack_100);
    puVar8 = &uStack_d8;
    FUN_104741990(puVar8,&uStack_a0);
    uStack_14c = (uint)puVar8;
    func_0x0001015543ac(uVar11,uStack_110,uStack_e0,uStack_108,uStack_118,uStack_140,uVar7);
    func_0x0001015543ac(uStack_130,uStack_128,uStack_120,uStack_e8,uStack_f0,uStack_f8,uStack_148);
    if ((uStack_14c & 1) == 0) {
      return 0;
    }
  }
  uVar11 = param_2[0x11];
  if (param_1[0x11] == 0) {
    if (uVar11 != 0) {
      return 0;
    }
  }
  else {
    if (uVar11 == 0) {
      return 0;
    }
    uVar7 = param_1[0x10];
    if (((uVar7 != param_2[0x10]) || (param_1[0x11] != uVar11)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar7 & 1) == 0)) {
      return 0;
    }
  }
  if ((int)param_1[0x12] != (int)param_2[0x12]) {
    return 0;
  }
  uVar7 = param_1[0x13];
  uVar11 = param_2[0x13];
  if (uVar7 == 0) {
    if (uVar11 != 0) {
      return 0;
    }
  }
  else {
    if (uVar11 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(uVar11);
    uVar9 = uVar7;
    _swift_bridgeObjectRetain();
    uVar5 = (undefined4)uVar9;
    func_0x00010470c484();
    uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar5);
    _swift_bridgeObjectRelease(uVar7);
    _swift_bridgeObjectRelease(uVar11);
    if ((uStack_e0 & 1) == 0) {
      return 0;
    }
  }
  lVar10 = 0;
  FUN_104739264();
  iVar4 = *(int *)(lVar10 + 0x34);
  lVar16 = (long)*(int *)(lVar16 + 0x30);
  uStack_e0 = lVar10;
  FUN_10473929c((long)param_1 + (long)iVar4,lVar14,0x112dcbf00,&UNK_10dd317c0);
  FUN_10473929c((long)param_2 + (long)iVar4,lVar14 + lVar16,0x112dcbf00,&UNK_10dd317c0);
  pcVar17 = *(code **)(lVar18 + 0x30);
  lVar18 = lVar14;
  (*pcVar17)(lVar14,1,lVar6);
  if ((int)lVar18 == 1) {
    lVar16 = lVar14 + lVar16;
    (*pcVar17)(lVar16,1,lVar6);
    if ((int)lVar16 != 1) {
LAB_104739dec:
      func_0x00010473aec4(lVar14,0x11308df20,&UNK_10dd30820);
      return 0;
    }
    func_0x00010473aec4(lVar14,0x112dcbf00,&UNK_10dd317c0);
  }
  else {
    FUN_10473929c(lVar14,uVar15,0x112dcbf00,&UNK_10dd317c0);
    lVar18 = lVar14 + lVar16;
    (*pcVar17)(lVar18,1,lVar6);
    if ((int)lVar18 == 1) {
      func_0x000104710904(uVar15);
      goto LAB_104739dec;
    }
    func_0x0001047108c0(lVar14 + lVar16,puVar13);
    uVar11 = uVar15;
    FUN_1047430d0(uVar15,puVar13);
    func_0x000104710904(puVar13);
    func_0x000104710904(uVar15);
    func_0x00010473aec4(lVar14,0x112dcbf00,&UNK_10dd317c0);
    if ((uVar11 & 1) == 0) {
      return 0;
    }
  }
  pdVar1 = (double *)((long)param_1 + (long)*(int *)(uStack_e0 + 0x38));
  pdVar2 = (double *)((long)param_2 + (long)*(int *)(uStack_e0 + 0x38));
  if (*(char *)(pdVar1 + 3) == '\x01') {
    if (*(char *)(pdVar2 + 3) == '\x01') {
      return 1;
    }
  }
  else if (((*(char *)(pdVar2 + 3) != '\x01') && (*pdVar1 == *pdVar2)) &&
          ((pdVar1[1] == pdVar2[1] && (pdVar1[2] == pdVar2[2])))) {
    return 1;
  }
  return 0;
}



/* Entry: 1047397c8; end: 104739ebb;  */

undefined8 FUN_1047397c8(ulong *param_1,ulong *param_2)

{
  double *pdVar1;
  double *pdVar2;
  ulong uVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 *puVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  code *pcVar17;
  long lVar18;
  ulong uVar19;
  undefined1 auStack_150 [4];
  uint uStack_14c;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
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
  ulong uVar9;
  
  lVar6 = 0;
  FUN_104742f28();
  lVar18 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  puVar13 = auStack_150 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar16 = 0x112dcbf00;
  func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar16 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar15 = (long)puVar13 - extraout_x8_00;
  lVar16 = 0x11308df20;
  func_0x0001000285a8(0x11308df20,&UNK_10dd30820);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar16 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = uVar15 - extraout_x8_01;
  uVar11 = *param_1;
  if (((uVar11 != *param_2) || (param_1[1] != param_2[1])) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar11 & 1) == 0)) {
    return 0;
  }
  uVar11 = param_2[3];
  if (param_1[3] == 0) {
    if (uVar11 != 0) {
      return 0;
    }
  }
  else {
    if (uVar11 == 0) {
      return 0;
    }
    uVar7 = param_1[2];
    if (((uVar7 != param_2[2]) || (param_1[3] != uVar11)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar7 & 1) == 0)) {
      return 0;
    }
  }
  uVar11 = param_2[5];
  if (param_1[5] == 0) {
    if (uVar11 != 0) {
      return 0;
    }
  }
  else {
    if (uVar11 == 0) {
      return 0;
    }
    uVar7 = param_1[4];
    if (((uVar7 != param_2[4]) || (param_1[5] != uVar11)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar7 & 1) == 0)) {
      return 0;
    }
  }
  uVar11 = param_2[7];
  if (param_1[7] == 0) {
    if (uVar11 != 0) {
      return 0;
    }
  }
  else {
    if (uVar11 == 0) {
      return 0;
    }
    uVar7 = param_1[6];
    if (((uVar7 != param_2[6]) || (param_1[7] != uVar11)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar7 & 1) == 0)) {
      return 0;
    }
  }
  if ((int)param_1[8] != (int)param_2[8]) {
    return 0;
  }
  uStack_130 = param_1[9];
  uStack_128 = param_1[10];
  uStack_120 = param_1[0xb];
  uStack_e8 = param_1[0xc];
  uVar11 = param_1[0xd];
  uVar9 = param_1[0xe];
  uVar19 = param_1[0xf];
  uStack_138 = param_2[9];
  uStack_110 = param_2[10];
  uVar7 = param_2[0xb];
  uStack_108 = param_2[0xc];
  uStack_118 = param_2[0xd];
  uVar3 = param_2[0xe];
  uVar12 = param_2[0xf];
  uStack_140 = uVar3;
  uStack_e0 = uVar7;
  if (uVar19 == 1) {
    if (uVar12 != 1) {
LAB_104739a80:
      uStack_100 = uVar12;
      uStack_f8 = uVar9;
      uStack_f0 = uVar11;
      func_0x000104711a50(uStack_130,uStack_128,uStack_120,uStack_e8,uVar11,uVar9,uVar19);
      uVar11 = uStack_100;
      func_0x000104711a50(uStack_138,uStack_110,uVar7,uStack_108,uStack_118,uVar3,uStack_100);
      func_0x0001015543ac(uStack_130,uStack_128,uStack_120,uStack_e8,uStack_f0,uStack_f8,uVar19);
      func_0x0001015543ac(uStack_138,uStack_110,uStack_e0,uStack_108,uStack_118,uVar3,uVar11);
      return 0;
    }
    func_0x000104711a50(uStack_130,uStack_128,uStack_120,uStack_e8,uVar11,uVar9,1);
    func_0x000104711a50(uStack_138,uStack_110,uStack_e0,uStack_108,uStack_118,uStack_140,1);
    func_0x0001015543ac(uStack_130,uStack_128,uStack_120,uStack_e8,uVar11,uVar9,1);
  }
  else {
    if (uVar12 == 1) goto LAB_104739a80;
    uStack_148 = uVar19;
    uStack_100 = uVar12;
    uStack_f8 = uVar9;
    uStack_f0 = uVar11;
    uStack_d8 = uStack_130;
    uStack_d0 = uStack_128;
    uStack_c8 = uStack_120;
    uStack_c0 = uStack_e8;
    uStack_b8 = uVar11;
    uStack_b0 = uVar9;
    uStack_a8 = uVar19;
    uStack_a0 = uStack_138;
    uStack_98 = uStack_110;
    uStack_90 = uVar7;
    uStack_88 = uStack_108;
    uStack_80 = uStack_118;
    uStack_78 = uVar3;
    uStack_70 = uVar12;
    func_0x000104711a50(uStack_130,uStack_128,uStack_120,uStack_e8,uVar11,uVar9,uVar19);
    uVar7 = uStack_100;
    uVar11 = uStack_138;
    func_0x000104711a50(uStack_138,uStack_110,uStack_e0,uStack_108,uStack_118,uVar3,uStack_100);
    puVar8 = &uStack_d8;
    FUN_104741990(puVar8,&uStack_a0);
    uStack_14c = (uint)puVar8;
    func_0x0001015543ac(uVar11,uStack_110,uStack_e0,uStack_108,uStack_118,uStack_140,uVar7);
    func_0x0001015543ac(uStack_130,uStack_128,uStack_120,uStack_e8,uStack_f0,uStack_f8,uStack_148);
    if ((uStack_14c & 1) == 0) {
      return 0;
    }
  }
  uVar11 = param_2[0x11];
  if (param_1[0x11] == 0) {
    if (uVar11 != 0) {
      return 0;
    }
  }
  else {
    if (uVar11 == 0) {
      return 0;
    }
    uVar7 = param_1[0x10];
    if (((uVar7 != param_2[0x10]) || (param_1[0x11] != uVar11)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar7 & 1) == 0)) {
      return 0;
    }
  }
  if ((int)param_1[0x12] != (int)param_2[0x12]) {
    return 0;
  }
  uVar7 = param_1[0x13];
  uVar11 = param_2[0x13];
  if (uVar7 == 0) {
    if (uVar11 != 0) {
      return 0;
    }
  }
  else {
    if (uVar11 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(uVar11);
    uVar9 = uVar7;
    _swift_bridgeObjectRetain();
    uVar5 = (undefined4)uVar9;
    func_0x00010470c484();
    uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar5);
    _swift_bridgeObjectRelease(uVar7);
    _swift_bridgeObjectRelease(uVar11);
    if ((uStack_e0 & 1) == 0) {
      return 0;
    }
  }
  lVar10 = 0;
  FUN_104739264();
  iVar4 = *(int *)(lVar10 + 0x34);
  lVar16 = (long)*(int *)(lVar16 + 0x30);
  uStack_e0 = lVar10;
  FUN_10473929c((long)param_1 + (long)iVar4,lVar14,0x112dcbf00,&UNK_10dd317c0);
  FUN_10473929c((long)param_2 + (long)iVar4,lVar14 + lVar16,0x112dcbf00,&UNK_10dd317c0);
  pcVar17 = *(code **)(lVar18 + 0x30);
  lVar18 = lVar14;
  (*pcVar17)(lVar14,1,lVar6);
  if ((int)lVar18 == 1) {
    lVar16 = lVar14 + lVar16;
    (*pcVar17)(lVar16,1,lVar6);
    if ((int)lVar16 != 1) {
LAB_104739dec:
      func_0x00010473aec4(lVar14,0x11308df20,&UNK_10dd30820);
      return 0;
    }
    func_0x00010473aec4(lVar14,0x112dcbf00,&UNK_10dd317c0);
  }
  else {
    FUN_10473929c(lVar14,uVar15,0x112dcbf00,&UNK_10dd317c0);
    lVar18 = lVar14 + lVar16;
    (*pcVar17)(lVar18,1,lVar6);
    if ((int)lVar18 == 1) {
      func_0x000104710904(uVar15);
      goto LAB_104739dec;
    }
    func_0x0001047108c0(lVar14 + lVar16,puVar13);
    uVar11 = uVar15;
    FUN_1047430d0(uVar15,puVar13);
    func_0x000104710904(puVar13);
    func_0x000104710904(uVar15);
    func_0x00010473aec4(lVar14,0x112dcbf00,&UNK_10dd317c0);
    if ((uVar11 & 1) == 0) {
      return 0;
    }
  }
  pdVar1 = (double *)((long)param_1 + (long)*(int *)(uStack_e0 + 0x38));
  pdVar2 = (double *)((long)param_2 + (long)*(int *)(uStack_e0 + 0x38));
  if (*(char *)(pdVar1 + 3) == '\x01') {
    if (*(char *)(pdVar2 + 3) == '\x01') {
      return 1;
    }
  }
  else if (((*(char *)(pdVar2 + 3) != '\x01') && (*pdVar1 == *pdVar2)) &&
          ((pdVar1[1] == pdVar2[1] && (pdVar1[2] == pdVar2[2])))) {
    return 1;
  }
  return 0;
}



/* Entry: 104739ebc; end: 104739ee7;  */

void FUN_104739ebc(void)

{
  FUN_104739ee8(0x11308e368,FUN_104739264,&UNK_10dd31928);
  return;
}



/* Entry: 104739ee8; end: 104739f27;  */

void FUN_104739ee8(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    _swift_getWitnessTable(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 104739f28; end: 10473a193;  */

long * FUN_104739f28(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  undefined8 uVar12;
  
  uVar3 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar3 >> 0x11 & 1) == 0) {
    lVar4 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar4;
    lVar4 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar4;
    lVar11 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = lVar11;
    lVar6 = param_2[7];
    param_1[6] = param_2[6];
    param_1[7] = lVar6;
    param_1[8] = param_2[8];
    lVar8 = param_2[0xf];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(lVar4);
    _swift_bridgeObjectRetain(lVar11);
    _swift_bridgeObjectRetain(lVar6);
    if (lVar8 == 1) {
      lVar4 = param_2[9];
      param_1[10] = param_2[10];
      param_1[9] = lVar4;
      lVar4 = param_2[0xb];
      param_1[0xc] = param_2[0xc];
      param_1[0xb] = lVar4;
      lVar4 = param_2[0xd];
      param_1[0xe] = param_2[0xe];
      param_1[0xd] = lVar4;
      param_1[0xf] = param_2[0xf];
    }
    else {
      lVar4 = param_2[0xb];
      if (lVar4 == 1) {
        lVar4 = param_2[9];
        param_1[10] = param_2[10];
        param_1[9] = lVar4;
        lVar4 = param_2[0xb];
        param_1[0xc] = param_2[0xc];
        param_1[0xb] = lVar4;
        param_1[0xd] = param_2[0xd];
      }
      else {
        lVar11 = param_2[9];
        param_1[10] = param_2[10];
        param_1[9] = lVar11;
        lVar11 = param_2[0xc];
        lVar6 = param_2[0xd];
        param_1[0xb] = lVar4;
        param_1[0xc] = lVar11;
        param_1[0xd] = lVar6;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(lVar6);
      }
      param_1[0xe] = param_2[0xe];
      param_1[0xf] = lVar8;
      _swift_bridgeObjectRetain(lVar8);
    }
    lVar6 = param_2[0x11];
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = lVar6;
    lVar8 = param_2[0x13];
    param_1[0x12] = param_2[0x12];
    param_1[0x13] = lVar8;
    lVar4 = (long)param_1 + (long)*(int *)(param_3 + 0x34);
    lVar11 = (long)param_2 + (long)*(int *)(param_3 + 0x34);
    lVar5 = 0;
    FUN_104742f28();
    lVar9 = *(long *)(lVar5 + -8);
    pcVar10 = *(code **)(lVar9 + 0x30);
    _swift_bridgeObjectRetain(lVar6);
    _swift_bridgeObjectRetain(lVar8);
    lVar6 = lVar11;
    (*pcVar10)(lVar11,1,lVar5);
    if ((int)lVar6 == 0) {
      lVar6 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar6 + -8) + 0x10))(lVar4,lVar11,lVar6);
      puVar1 = (undefined8 *)(lVar4 + *(int *)(lVar5 + 0x14));
      puVar2 = (undefined8 *)(lVar11 + *(int *)(lVar5 + 0x14));
      uVar12 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar12;
      *(undefined1 *)(lVar4 + *(int *)(lVar5 + 0x18)) =
           *(undefined1 *)(lVar11 + *(int *)(lVar5 + 0x18));
      *(undefined1 *)(lVar4 + *(int *)(lVar5 + 0x1c)) =
           *(undefined1 *)(lVar11 + *(int *)(lVar5 + 0x1c));
      puVar1 = (undefined8 *)(lVar4 + *(int *)(lVar5 + 0x20));
      puVar2 = (undefined8 *)(lVar11 + *(int *)(lVar5 + 0x20));
      *puVar1 = *puVar2;
      *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
      *(undefined1 *)(lVar4 + *(int *)(lVar5 + 0x24)) =
           *(undefined1 *)(lVar11 + *(int *)(lVar5 + 0x24));
      pcVar10 = *(code **)(lVar9 + 0x38);
      _swift_bridgeObjectRetain();
      (*pcVar10)(lVar4,0,1,lVar5);
    }
    else {
      lVar6 = 0x112dcbf00;
      func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
      _memcpy(lVar4,lVar11,*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
    uVar12 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar12;
    uVar12 = *(undefined8 *)((long)puVar2 + 9);
    *(undefined8 *)((long)puVar1 + 0x11) = *(undefined8 *)((long)puVar2 + 0x11);
    *(undefined8 *)((long)puVar1 + 9) = uVar12;
  }
  else {
    lVar4 = *param_2;
    *param_1 = lVar4;
    uVar7 = (ulong)uVar3 & 0xff;
    param_1 = (long *)(lVar4 + (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 10473a194; end: 10473a27f;  */

void FUN_10473a194(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x38));
  lVar2 = *(long *)(param_1 + 0x78);
  if (lVar2 != 1) {
    if (*(long *)(param_1 + 0x58) != 1) {
      _swift_bridgeObjectRelease();
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x68));
    }
    _swift_bridgeObjectRelease(lVar2);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x88));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x98));
  param_1 = param_1 + *(int *)(param_2 + 0x34);
  lVar1 = 0;
  FUN_104742f28();
  lVar2 = param_1;
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(param_1,1,lVar1);
  if ((int)lVar2 != 0) {
    return;
  }
  lVar2 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(param_1 + *(int *)(lVar1 + 0x14) + 8));
  return;
}



/* Entry: 10473a280; end: 10473a977;  */

undefined8 * FUN_10473a280(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  undefined8 uVar11;
  
  uVar11 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar11;
  uVar11 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar11;
  uVar3 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar3;
  uVar4 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar4;
  param_1[8] = param_2[8];
  lVar8 = param_2[0xf];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar11);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  if (lVar8 == 1) {
    uVar11 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = uVar11;
    uVar11 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar11;
    uVar11 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar11;
    param_1[0xf] = param_2[0xf];
  }
  else {
    lVar5 = param_2[0xb];
    if (lVar5 == 1) {
      uVar11 = param_2[9];
      param_1[10] = param_2[10];
      param_1[9] = uVar11;
      uVar11 = param_2[0xb];
      param_1[0xc] = param_2[0xc];
      param_1[0xb] = uVar11;
      param_1[0xd] = param_2[0xd];
    }
    else {
      uVar11 = param_2[9];
      param_1[10] = param_2[10];
      param_1[9] = uVar11;
      uVar11 = param_2[0xc];
      uVar3 = param_2[0xd];
      param_1[0xb] = lVar5;
      param_1[0xc] = uVar11;
      param_1[0xd] = uVar3;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar3);
    }
    param_1[0xe] = param_2[0xe];
    param_1[0xf] = lVar8;
    _swift_bridgeObjectRetain(lVar8);
  }
  uVar11 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar11;
  uVar3 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar3;
  lVar8 = (long)param_1 + (long)*(int *)(param_3 + 0x34);
  lVar5 = (long)param_2 + (long)*(int *)(param_3 + 0x34);
  lVar6 = 0;
  FUN_104742f28();
  lVar9 = *(long *)(lVar6 + -8);
  pcVar10 = *(code **)(lVar9 + 0x30);
  _swift_bridgeObjectRetain(uVar11);
  _swift_bridgeObjectRetain(uVar3);
  lVar7 = lVar5;
  (*pcVar10)(lVar5,1,lVar6);
  if ((int)lVar7 == 0) {
    lVar7 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar7 + -8) + 0x10))(lVar8,lVar5,lVar7);
    puVar2 = (undefined8 *)(lVar8 + *(int *)(lVar6 + 0x14));
    puVar1 = (undefined8 *)(lVar5 + *(int *)(lVar6 + 0x14));
    uVar11 = puVar1[1];
    *puVar2 = *puVar1;
    puVar2[1] = uVar11;
    *(undefined1 *)(lVar8 + *(int *)(lVar6 + 0x18)) =
         *(undefined1 *)(lVar5 + *(int *)(lVar6 + 0x18));
    *(undefined1 *)(lVar8 + *(int *)(lVar6 + 0x1c)) =
         *(undefined1 *)(lVar5 + *(int *)(lVar6 + 0x1c));
    puVar2 = (undefined8 *)(lVar8 + *(int *)(lVar6 + 0x20));
    puVar1 = (undefined8 *)(lVar5 + *(int *)(lVar6 + 0x20));
    *puVar2 = *puVar1;
    *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar1 + 1);
    *(undefined1 *)(lVar8 + *(int *)(lVar6 + 0x24)) =
         *(undefined1 *)(lVar5 + *(int *)(lVar6 + 0x24));
    pcVar10 = *(code **)(lVar9 + 0x38);
    _swift_bridgeObjectRetain();
    (*pcVar10)(lVar8,0,1,lVar6);
  }
  else {
    lVar7 = 0x112dcbf00;
    func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
    _memcpy(lVar8,lVar5,*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  }
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  uVar11 = *param_2;
  puVar2[1] = param_2[1];
  *puVar2 = uVar11;
  uVar11 = *(undefined8 *)((long)param_2 + 9);
  *(undefined8 *)((long)puVar2 + 0x11) = *(undefined8 *)((long)param_2 + 0x11);
  *(undefined8 *)((long)puVar2 + 9) = uVar11;
  return param_1;
}



/* Entry: 10473a978; end: 10473aaf7;  */

undefined8 * FUN_10473a978(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar8 = *param_2;
  uVar10 = param_2[3];
  uVar9 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar8;
  param_1[3] = uVar10;
  param_1[2] = uVar9;
  uVar8 = param_2[4];
  uVar10 = param_2[7];
  uVar9 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar8;
  param_1[7] = uVar10;
  param_1[6] = uVar9;
  param_1[8] = param_2[8];
  param_1[0xf] = param_2[0xf];
  uVar8 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar8;
  uVar8 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar8;
  uVar8 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar8;
  uVar8 = param_2[0x10];
  uVar10 = param_2[0x13];
  uVar9 = param_2[0x12];
  lVar1 = (long)param_1 + (long)*(int *)(param_3 + 0x34);
  lVar2 = (long)param_2 + (long)*(int *)(param_3 + 0x34);
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar8;
  param_1[0x13] = uVar10;
  param_1[0x12] = uVar9;
  lVar5 = 0;
  FUN_104742f28();
  lVar7 = *(long *)(lVar5 + -8);
  lVar6 = lVar2;
  (**(code **)(lVar7 + 0x30))(lVar2,1,lVar5);
  if ((int)lVar6 == 0) {
    lVar6 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar6 + -8) + 0x20))(lVar1,lVar2,lVar6);
    puVar3 = (undefined8 *)(lVar2 + *(int *)(lVar5 + 0x14));
    uVar8 = *puVar3;
    puVar4 = (undefined8 *)(lVar1 + *(int *)(lVar5 + 0x14));
    puVar4[1] = puVar3[1];
    *puVar4 = uVar8;
    *(undefined1 *)(lVar1 + *(int *)(lVar5 + 0x18)) =
         *(undefined1 *)(lVar2 + *(int *)(lVar5 + 0x18));
    *(undefined1 *)(lVar1 + *(int *)(lVar5 + 0x1c)) =
         *(undefined1 *)(lVar2 + *(int *)(lVar5 + 0x1c));
    puVar3 = (undefined8 *)(lVar1 + *(int *)(lVar5 + 0x20));
    puVar4 = (undefined8 *)(lVar2 + *(int *)(lVar5 + 0x20));
    *puVar3 = *puVar4;
    *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar4 + 1);
    *(undefined1 *)(lVar1 + *(int *)(lVar5 + 0x24)) =
         *(undefined1 *)(lVar2 + *(int *)(lVar5 + 0x24));
    (**(code **)(lVar7 + 0x38))(lVar1,0,1,lVar5);
  }
  else {
    lVar6 = 0x112dcbf00;
    func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
    _memcpy(lVar1,lVar2,*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  }
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  uVar8 = *param_2;
  puVar3[1] = param_2[1];
  *puVar3 = uVar8;
  uVar8 = *(undefined8 *)((long)param_2 + 9);
  *(undefined8 *)((long)puVar3 + 0x11) = *(undefined8 *)((long)param_2 + 0x11);
  *(undefined8 *)((long)puVar3 + 9) = uVar8;
  return param_1;
}



/* Entry: 10473aaf8; end: 10473adfb;  */

undefined8 * FUN_10473aaf8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  
  uVar4 = param_2[1];
  uVar3 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  _swift_bridgeObjectRelease(uVar3);
  uVar4 = param_2[3];
  uVar3 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar4;
  _swift_bridgeObjectRelease(uVar3);
  uVar4 = param_2[5];
  uVar3 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar4;
  _swift_bridgeObjectRelease(uVar3);
  uVar4 = param_2[7];
  uVar3 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar4;
  _swift_bridgeObjectRelease(uVar3);
  param_1[8] = param_2[8];
  if (param_1[0xf] == 1) {
LAB_10473ab88:
    uVar4 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = uVar4;
    uVar4 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar4;
    uVar4 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar4;
    param_1[0xf] = param_2[0xf];
  }
  else {
    lVar9 = param_2[0xf];
    if (lVar9 == 1) {
      func_0x0001017b64d0(param_1 + 9);
      goto LAB_10473ab88;
    }
    if (param_1[0xb] == 1) {
LAB_10473abcc:
      uVar4 = param_2[9];
      param_1[10] = param_2[10];
      param_1[9] = uVar4;
      uVar4 = param_2[0xb];
      param_1[0xc] = param_2[0xc];
      param_1[0xb] = uVar4;
      param_1[0xd] = param_2[0xd];
    }
    else {
      lVar8 = param_2[0xb];
      if (lVar8 == 1) {
        func_0x0001017b649c(param_1 + 9);
        goto LAB_10473abcc;
      }
      uVar4 = param_2[9];
      param_1[10] = param_2[10];
      param_1[9] = uVar4;
      param_1[0xb] = lVar8;
      _swift_bridgeObjectRelease();
      uVar4 = param_2[0xd];
      uVar3 = param_1[0xd];
      param_1[0xc] = param_2[0xc];
      param_1[0xd] = uVar4;
      _swift_bridgeObjectRelease(uVar3);
    }
    uVar4 = param_1[0xf];
    param_1[0xe] = param_2[0xe];
    param_1[0xf] = lVar9;
    _swift_bridgeObjectRelease(uVar4);
  }
  uVar4 = param_2[0x11];
  uVar3 = param_1[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar4;
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = param_1[0x13];
  uVar4 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar4;
  _swift_bridgeObjectRelease(uVar3);
  lVar9 = (long)param_1 + (long)*(int *)(param_3 + 0x34);
  lVar8 = (long)param_2 + (long)*(int *)(param_3 + 0x34);
  lVar5 = 0;
  FUN_104742f28();
  lVar10 = *(long *)(lVar5 + -8);
  pcVar11 = *(code **)(lVar10 + 0x30);
  lVar7 = lVar9;
  (*pcVar11)(lVar9,1,lVar5);
  lVar6 = lVar8;
  (*pcVar11)(lVar8,1,lVar5);
  if ((int)lVar7 == 0) {
    if ((int)lVar6 == 0) {
      lVar7 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar7 + -8) + 0x28))(lVar9,lVar8,lVar7);
      puVar1 = (undefined8 *)(lVar9 + *(int *)(lVar5 + 0x14));
      puVar2 = (undefined8 *)(lVar8 + *(int *)(lVar5 + 0x14));
      uVar4 = puVar2[1];
      uVar3 = puVar1[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar4;
      _swift_bridgeObjectRelease(uVar3);
      *(undefined1 *)(lVar9 + *(int *)(lVar5 + 0x18)) =
           *(undefined1 *)(lVar8 + *(int *)(lVar5 + 0x18));
      *(undefined1 *)(lVar9 + *(int *)(lVar5 + 0x1c)) =
           *(undefined1 *)(lVar8 + *(int *)(lVar5 + 0x1c));
      puVar1 = (undefined8 *)(lVar9 + *(int *)(lVar5 + 0x20));
      puVar2 = (undefined8 *)(lVar8 + *(int *)(lVar5 + 0x20));
      *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
      *puVar1 = *puVar2;
      *(undefined1 *)(lVar9 + *(int *)(lVar5 + 0x24)) =
           *(undefined1 *)(lVar8 + *(int *)(lVar5 + 0x24));
      goto LAB_10473ad40;
    }
    func_0x000104710904(lVar9);
  }
  else if ((int)lVar6 == 0) {
    lVar7 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar7 + -8) + 0x20))(lVar9,lVar8,lVar7);
    puVar1 = (undefined8 *)(lVar8 + *(int *)(lVar5 + 0x14));
    uVar4 = *puVar1;
    puVar2 = (undefined8 *)(lVar9 + *(int *)(lVar5 + 0x14));
    puVar2[1] = puVar1[1];
    *puVar2 = uVar4;
    *(undefined1 *)(lVar9 + *(int *)(lVar5 + 0x18)) =
         *(undefined1 *)(lVar8 + *(int *)(lVar5 + 0x18));
    *(undefined1 *)(lVar9 + *(int *)(lVar5 + 0x1c)) =
         *(undefined1 *)(lVar8 + *(int *)(lVar5 + 0x1c));
    puVar1 = (undefined8 *)(lVar9 + *(int *)(lVar5 + 0x20));
    puVar2 = (undefined8 *)(lVar8 + *(int *)(lVar5 + 0x20));
    *puVar1 = *puVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    *(undefined1 *)(lVar9 + *(int *)(lVar5 + 0x24)) =
         *(undefined1 *)(lVar8 + *(int *)(lVar5 + 0x24));
    (**(code **)(lVar10 + 0x38))(lVar9,0,1,lVar5);
    goto LAB_10473ad40;
  }
  lVar7 = 0x112dcbf00;
  func_0x0001000285a8(0x112dcbf00,&UNK_10dd317c0);
  _memcpy(lVar9,lVar8,*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
LAB_10473ad40:
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  uVar4 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar4;
  uVar4 = *(undefined8 *)((long)param_2 + 9);
  *(undefined8 *)((long)puVar1 + 0x11) = *(undefined8 *)((long)param_2 + 0x11);
  *(undefined8 *)((long)puVar1 + 9) = uVar4;
  return param_1;
}



/* Entry: 10473adfc; end: 10473ae13;  */

void FUN_10473adfc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 10473ae14; end: 10473af3f;  */

void FUN_10473ae14(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_78 = &UNK_10dd31960;
  puStack_70 = &UNK_10dd31978;
  puStack_68 = &UNK_10dd31978;
  puStack_60 = &UNK_10dd31978;
  puStack_58 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_50 = &UNK_10dd31990;
  puStack_48 = &UNK_10dd31978;
  puStack_38 = &UNK_10dd319a8;
  lVar1 = 0x13f;
  puStack_40 = puStack_58;
  func_0x0001047119fc();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_10dd319c0;
    _swift_initStructMetadata(param_1,0x100,0xb,&puStack_78,param_1 + 0x10);
  }
  return;
}



/* Entry: 10473af40; end: 10473b03b;  */

void FUN_10473af40(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_a8 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_a8,0);
  __ss6HasherV8_combineyySuF(*unaff_x20);
  __sSS4hash4intoys6HasherVz_tF(auStack_a8,unaff_x20[1],unaff_x20[2]);
  __sSS4hash4intoys6HasherVz_tF(auStack_a8,unaff_x20[3],unaff_x20[4]);
  __sSS4hash4intoys6HasherVz_tF(auStack_a8,unaff_x20[5],unaff_x20[6]);
  uVar2 = unaff_x20[8];
  uVar1 = unaff_x20[9];
  uVar3 = unaff_x20[10];
  dVar5 = (double)unaff_x20[0xb];
  dVar6 = (double)unaff_x20[0xc];
  dVar7 = (double)unaff_x20[0xd];
  __ss6HasherV8_combineyySuF(unaff_x20[7]);
  __sSS4hash4intoys6HasherVz_tF(auStack_a8,uVar2,uVar1);
  __ss6HasherV8_combineyySuF(uVar3);
  dVar4 = 0.0;
  if (dVar5 != 0.0) {
    dVar4 = dVar5;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar4);
  dVar4 = 0.0;
  if (dVar6 != 0.0) {
    dVar4 = dVar6;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar4);
  dVar4 = 0.0;
  if (dVar7 != 0.0) {
    dVar4 = dVar7;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar4);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10473b03c; end: 10473b03f;  */

void FUN_10473b03c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_a8 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_a8,0);
  __ss6HasherV8_combineyySuF(*unaff_x20);
  __sSS4hash4intoys6HasherVz_tF(auStack_a8,unaff_x20[1],unaff_x20[2]);
  __sSS4hash4intoys6HasherVz_tF(auStack_a8,unaff_x20[3],unaff_x20[4]);
  __sSS4hash4intoys6HasherVz_tF(auStack_a8,unaff_x20[5],unaff_x20[6]);
  uVar2 = unaff_x20[8];
  uVar1 = unaff_x20[9];
  uVar3 = unaff_x20[10];
  dVar5 = (double)unaff_x20[0xb];
  dVar6 = (double)unaff_x20[0xc];
  dVar7 = (double)unaff_x20[0xd];
  __ss6HasherV8_combineyySuF(unaff_x20[7]);
  __sSS4hash4intoys6HasherVz_tF(auStack_a8,uVar2,uVar1);
  __ss6HasherV8_combineyySuF(uVar3);
  dVar4 = 0.0;
  if (dVar5 != 0.0) {
    dVar4 = dVar5;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar4);
  dVar4 = 0.0;
  if (dVar6 != 0.0) {
    dVar4 = dVar6;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar4);
  dVar4 = 0.0;
  if (dVar7 != 0.0) {
    dVar4 = dVar7;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar4);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10473b040; end: 10473b1a7;  */

void FUN_10473b040(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  
  uVar3 = unaff_x20[1];
  uVar1 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  uVar2 = unaff_x20[4];
  uVar5 = unaff_x20[5];
  uVar6 = unaff_x20[6];
  __ss6HasherV8_combineyySuF(*unaff_x20);
  __sSS4hash4intoys6HasherVz_tF(param_1,uVar3,uVar1);
  __sSS4hash4intoys6HasherVz_tF(param_1,uVar4,uVar2);
  __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,uVar6);
  FUN_10473c63c(param_1);
  return;
}



/* Entry: 10473b1a8; end: 10473b20b;  */

uint FUN_10473b1a8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_98 = param_1[0xb];
  uStack_a0 = param_1[10];
  uStack_88 = param_1[0xd];
  uStack_90 = param_1[0xc];
  uStack_e8 = param_1[1];
  uStack_f0 = *param_1;
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  uStack_c8 = param_1[5];
  uStack_d0 = param_1[4];
  uStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  uStack_78 = param_2[1];
  uStack_80 = *param_2;
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  uStack_58 = param_2[5];
  uStack_60 = param_2[4];
  uStack_48 = param_2[7];
  uStack_50 = param_2[6];
  uStack_28 = param_2[0xb];
  uStack_30 = param_2[10];
  uStack_18 = param_2[0xd];
  uStack_20 = param_2[0xc];
  uStack_38 = param_2[9];
  uStack_40 = param_2[8];
  FUN_10473b20c(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 10473b20c; end: 10473b367;  */

undefined8 FUN_10473b20c(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  if (*param_1 != *param_2) {
    return 0;
  }
  uVar1 = param_1[1];
  if (((uVar1 == param_2[1] && param_1[2] == param_2[2]) ||
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar1 & 1) != 0)) &&
     ((uVar1 = param_1[3], uVar1 == param_2[3] && param_1[4] == param_2[4] ||
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar1 & 1) != 0)))) {
    uVar1 = param_1[5];
    if ((((uVar1 == param_2[5]) && (param_1[6] == param_2[6])) ||
        (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                   (), (uVar1 & 1) != 0)) && (param_1[7] == param_2[7])) {
      uVar1 = param_1[8];
      lVar3 = param_1[10];
      dVar8 = (double)param_1[0xb];
      dVar6 = (double)param_1[0xc];
      dVar4 = (double)param_1[0xd];
      lVar2 = param_2[10];
      dVar9 = (double)param_2[0xb];
      dVar7 = (double)param_2[0xc];
      dVar5 = (double)param_2[0xd];
      if ((((uVar1 == param_2[8]) && (param_1[9] == param_2[9])) ||
          (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                     (), (uVar1 & 1) != 0)) &&
         (((lVar3 == lVar2 && (dVar8 == dVar9)) && ((dVar6 == dVar7 && (dVar4 == dVar5)))))) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 10473b368; end: 10473b36b;  */

void FUN_10473b368(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e428 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd31a20;
  _swift_getWitnessTable(&UNK_10dd31a20,&UNK_11079da88);
  puRam000000011308e428 = puVar1;
  return;
}



/* Entry: 10473b36c; end: 10473b3ab;  */

void FUN_10473b36c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e428 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd31a20;
  _swift_getWitnessTable(&UNK_10dd31a20,&UNK_11079da88);
  puRam000000011308e428 = puVar1;
  return;
}



/* Entry: 10473b3ac; end: 10473b40f;  */

long FUN_10473b3ac(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10473b410; end: 10473b567;  */

undefined8 * FUN_10473b410(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  uVar3 = param_2[4];
  uVar1 = param_2[5];
  param_1[4] = uVar3;
  param_1[5] = uVar1;
  uVar1 = param_2[6];
  param_1[6] = uVar1;
  uVar2 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar2;
  uVar2 = param_2[9];
  param_1[9] = uVar2;
  uVar4 = param_2[10];
  uVar6 = param_2[0xd];
  uVar5 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar4;
  param_1[0xd] = uVar6;
  param_1[0xc] = uVar5;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}



/* Entry: 10473b568; end: 10473b5f3;  */

undefined8 * FUN_10473b568(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[6];
  uVar2 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  _swift_bridgeObjectRelease(uVar1);
  param_1[10] = param_2[10];
  uVar1 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar1;
  param_1[0xd] = param_2[0xd];
  return param_1;
}



/* Entry: 10473b5f4; end: 10473b6ab;  */

int FUN_10473b5f4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x1c] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10473b6ac; end: 10473b937;  */

void FUN_10473b6ac(undefined8 param_1)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  undefined5 uVar16;
  byte bVar17;
  long lVar18;
  undefined3 uVar19;
  byte bVar20;
  undefined8 uVar21;
  undefined8 *unaff_x20;
  long lVar22;
  undefined8 *puVar23;
  undefined1 auStack_1f0 [192];
  undefined8 uStack_130;
  undefined8 uStack_128;
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
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar2 = *unaff_x20;
  uVar4 = unaff_x20[1];
  pbVar1 = (byte *)(unaff_x20 + 2);
  bVar6 = *pbVar1;
  bVar7 = *(byte *)((long)unaff_x20 + 0x11);
  bVar8 = *(byte *)((long)unaff_x20 + 0x12);
  bVar9 = *(byte *)((long)unaff_x20 + 0x13);
  bVar10 = *(byte *)((long)unaff_x20 + 0x14);
  lVar18 = *(long *)pbVar1;
  uVar3 = *(undefined8 *)pbVar1;
  bVar11 = *(byte *)(unaff_x20 + 3);
  bVar12 = *(byte *)((long)unaff_x20 + 0x19);
  bVar13 = *(byte *)((long)unaff_x20 + 0x1a);
  bVar14 = *(byte *)((long)unaff_x20 + 0x1b);
  bVar15 = *(byte *)((long)unaff_x20 + 0x3c);
  bVar17 = bVar15 >> 6;
  bVar20 = *(byte *)((long)unaff_x20 + 0x1c);
  uVar16 = *(undefined5 *)(unaff_x20 + 3);
  if (bVar17 == 0) {
    uVar3 = unaff_x20[4];
    uVar5 = unaff_x20[5];
    bVar20 = *(byte *)((long)unaff_x20 + 0x3b);
    bVar6 = *(byte *)((long)unaff_x20 + 0x3a);
    bVar7 = *(byte *)((long)unaff_x20 + 0x39);
    bVar8 = *(byte *)(unaff_x20 + 7);
    uVar21 = unaff_x20[6];
    uVar19 = *(undefined3 *)((long)unaff_x20 + 0x1d);
    __ss6HasherV8_combineyySuF(0);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,uVar4);
    lVar22 = *(long *)(lVar18 + 0x10);
    __ss6HasherV8_combineyySuF(lVar22);
    if (lVar22 != 0) {
      puVar23 = (undefined8 *)(lVar18 + 0x20);
      do {
        uStack_128 = puVar23[1];
        uStack_130 = *puVar23;
        uStack_118 = puVar23[3];
        uStack_120 = puVar23[2];
        uStack_108 = puVar23[5];
        uStack_110 = puVar23[4];
        uStack_f8 = puVar23[7];
        uStack_100 = puVar23[6];
        uStack_e8 = puVar23[9];
        uStack_f0 = puVar23[8];
        uStack_d8 = puVar23[0xb];
        uStack_e0 = puVar23[10];
        uStack_c8 = puVar23[0xd];
        uStack_d0 = puVar23[0xc];
        uStack_b8 = puVar23[0xf];
        uStack_c0 = puVar23[0xe];
        uStack_a8 = puVar23[0x11];
        uStack_b0 = puVar23[0x10];
        uStack_98 = puVar23[0x13];
        uStack_a0 = puVar23[0x12];
        uStack_88 = puVar23[0x15];
        uStack_90 = puVar23[0x14];
        uStack_78 = puVar23[0x17];
        uStack_80 = puVar23[0x16];
        func_0x00010470dc20(&uStack_130,auStack_1f0);
        FUN_10473d750(param_1);
        func_0x00010470dc5c(&uStack_130);
        puVar23 = puVar23 + 0x18;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
    }
    __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,CONCAT35(uVar19,uVar16),uVar3);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,uVar21);
    __ss6HasherV8_combineyys5UInt8VF(bVar8 & 1);
    __ss6HasherV8_combineyys5UInt8VF(bVar7 & 1);
    __ss6HasherV8_combineyys5UInt8VF(bVar6 & 1);
    __ss6HasherV8_combineyys5UInt8VF(bVar20 & 1);
    bVar20 = bVar15 & 1;
  }
  else if (bVar17 == 1) {
    __ss6HasherV8_combineyySuF(1);
    FUN_1046dc25c(param_1,uVar2);
    __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,uVar4,uVar3);
    __ss6HasherV8_combineyys5UInt8VF(bVar11 & 1);
    __ss6HasherV8_combineyys5UInt8VF(bVar12 & 1);
    __ss6HasherV8_combineyys5UInt8VF(bVar13 & 1);
    __ss6HasherV8_combineyys5UInt8VF(bVar14 & 1);
    bVar20 = bVar20 & 1;
  }
  else {
    __ss6HasherV8_combineyySuF(2);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,uVar4);
    __ss6HasherV8_combineyys5UInt8VF(bVar6 & 1);
    __ss6HasherV8_combineyys5UInt8VF(bVar7 & 1);
    __ss6HasherV8_combineyys5UInt8VF(bVar8 & 1);
    __ss6HasherV8_combineyys5UInt8VF(bVar9 & 1);
    bVar20 = bVar10 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(bVar20);
  return;
}



/* Entry: 10473b938; end: 10473b973;  */

void FUN_10473b938(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_10473b6ac(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10473b974; end: 10473b977;  */

void FUN_10473b974(undefined8 param_1)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  undefined5 uVar16;
  byte bVar17;
  long lVar18;
  undefined3 uVar19;
  byte bVar20;
  undefined8 uVar21;
  undefined8 *unaff_x20;
  long lVar22;
  undefined8 *puVar23;
  undefined1 auStack_1f0 [192];
  undefined8 uStack_130;
  undefined8 uStack_128;
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
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar2 = *unaff_x20;
  uVar4 = unaff_x20[1];
  pbVar1 = (byte *)(unaff_x20 + 2);
  bVar6 = *pbVar1;
  bVar7 = *(byte *)((long)unaff_x20 + 0x11);
  bVar8 = *(byte *)((long)unaff_x20 + 0x12);
  bVar9 = *(byte *)((long)unaff_x20 + 0x13);
  bVar10 = *(byte *)((long)unaff_x20 + 0x14);
  lVar18 = *(long *)pbVar1;
  uVar3 = *(undefined8 *)pbVar1;
  bVar11 = *(byte *)(unaff_x20 + 3);
  bVar12 = *(byte *)((long)unaff_x20 + 0x19);
  bVar13 = *(byte *)((long)unaff_x20 + 0x1a);
  bVar14 = *(byte *)((long)unaff_x20 + 0x1b);
  bVar15 = *(byte *)((long)unaff_x20 + 0x3c);
  bVar17 = bVar15 >> 6;
  bVar20 = *(byte *)((long)unaff_x20 + 0x1c);
  uVar16 = *(undefined5 *)(unaff_x20 + 3);
  if (bVar17 == 0) {
    uVar3 = unaff_x20[4];
    uVar5 = unaff_x20[5];
    bVar20 = *(byte *)((long)unaff_x20 + 0x3b);
    bVar6 = *(byte *)((long)unaff_x20 + 0x3a);
    bVar7 = *(byte *)((long)unaff_x20 + 0x39);
    bVar8 = *(byte *)(unaff_x20 + 7);
    uVar21 = unaff_x20[6];
    uVar19 = *(undefined3 *)((long)unaff_x20 + 0x1d);
    __ss6HasherV8_combineyySuF(0);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,uVar4);
    lVar22 = *(long *)(lVar18 + 0x10);
    __ss6HasherV8_combineyySuF(lVar22);
    if (lVar22 != 0) {
      puVar23 = (undefined8 *)(lVar18 + 0x20);
      do {
        uStack_128 = puVar23[1];
        uStack_130 = *puVar23;
        uStack_118 = puVar23[3];
        uStack_120 = puVar23[2];
        uStack_108 = puVar23[5];
        uStack_110 = puVar23[4];
        uStack_f8 = puVar23[7];
        uStack_100 = puVar23[6];
        uStack_e8 = puVar23[9];
        uStack_f0 = puVar23[8];
        uStack_d8 = puVar23[0xb];
        uStack_e0 = puVar23[10];
        uStack_c8 = puVar23[0xd];
        uStack_d0 = puVar23[0xc];
        uStack_b8 = puVar23[0xf];
        uStack_c0 = puVar23[0xe];
        uStack_a8 = puVar23[0x11];
        uStack_b0 = puVar23[0x10];
        uStack_98 = puVar23[0x13];
        uStack_a0 = puVar23[0x12];
        uStack_88 = puVar23[0x15];
        uStack_90 = puVar23[0x14];
        uStack_78 = puVar23[0x17];
        uStack_80 = puVar23[0x16];
        func_0x00010470dc20(&uStack_130,auStack_1f0);
        FUN_10473d750(param_1);
        func_0x00010470dc5c(&uStack_130);
        puVar23 = puVar23 + 0x18;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
    }
    __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,CONCAT35(uVar19,uVar16),uVar3);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,uVar21);
    __ss6HasherV8_combineyys5UInt8VF(bVar8 & 1);
    __ss6HasherV8_combineyys5UInt8VF(bVar7 & 1);
    __ss6HasherV8_combineyys5UInt8VF(bVar6 & 1);
    __ss6HasherV8_combineyys5UInt8VF(bVar20 & 1);
    bVar20 = bVar15 & 1;
  }
  else if (bVar17 == 1) {
    __ss6HasherV8_combineyySuF(1);
    FUN_1046dc25c(param_1,uVar2);
    __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,uVar4,uVar3);
    __ss6HasherV8_combineyys5UInt8VF(bVar11 & 1);
    __ss6HasherV8_combineyys5UInt8VF(bVar12 & 1);
    __ss6HasherV8_combineyys5UInt8VF(bVar13 & 1);
    __ss6HasherV8_combineyys5UInt8VF(bVar14 & 1);
    bVar20 = bVar20 & 1;
  }
  else {
    __ss6HasherV8_combineyySuF(2);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,uVar4);
    __ss6HasherV8_combineyys5UInt8VF(bVar6 & 1);
    __ss6HasherV8_combineyys5UInt8VF(bVar7 & 1);
    __ss6HasherV8_combineyys5UInt8VF(bVar8 & 1);
    __ss6HasherV8_combineyys5UInt8VF(bVar9 & 1);
    bVar20 = bVar10 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(bVar20);
  return;
}



/* Entry: 10473b978; end: 10473b9af;  */

void FUN_10473b978(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_10473b6ac(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10473b9b0; end: 10473ba07;  */

uint FUN_10473b9b0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined5 uStack_68;
  undefined3 uStack_63;
  undefined5 uStack_60;
  undefined8 uStack_5b;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined5 uStack_28;
  undefined3 uStack_23;
  undefined5 uStack_20;
  undefined8 uStack_1b;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_70 = param_1[4];
  uStack_68 = (undefined5)param_1[5];
  uStack_5b = *(undefined8 *)((long)param_1 + 0x35);
  uStack_63 = (undefined3)*(undefined8 *)((long)param_1 + 0x2d);
  uStack_60 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x2d) >> 0x18);
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_30 = param_2[4];
  uStack_28 = (undefined5)param_2[5];
  uStack_1b = *(undefined8 *)((long)param_2 + 0x35);
  uStack_23 = (undefined3)*(undefined8 *)((long)param_2 + 0x2d);
  uStack_20 = (undefined5)((ulong)*(undefined8 *)((long)param_2 + 0x2d) >> 0x18);
  FUN_10473ba08(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10473ba08; end: 10473bd3f;  */

byte FUN_10473ba08(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  undefined3 uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  byte bVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  
  uVar19 = *param_1;
  uVar26 = param_1[1];
  puVar1 = param_1 + 2;
  uVar14 = *puVar1;
  bVar22 = *(byte *)((long)param_1 + 0x11);
  bVar4 = *(byte *)((long)param_1 + 0x12);
  bVar5 = *(byte *)((long)param_1 + 0x13);
  bVar6 = *(byte *)((long)param_1 + 0x14);
  uVar20 = *puVar1;
  uVar18 = *puVar1;
  uVar15 = param_1[3];
  bVar7 = *(byte *)((long)param_1 + 0x19);
  bVar8 = *(byte *)((long)param_1 + 0x1a);
  bVar9 = *(byte *)((long)param_1 + 0x1b);
  bVar10 = *(byte *)((long)param_1 + 0x3c);
  bVar12 = bVar10 >> 6;
  bVar11 = *(byte *)((long)param_1 + 0x1c);
  uVar24 = param_1[3];
  if (bVar12 == 0) {
    bVar22 = *(byte *)((long)param_2 + 0x3c);
    if (bVar22 < 0x40) {
      uVar18 = param_1[4];
      uVar21 = param_1[5];
      uVar25 = param_1[6];
      bVar4 = *(byte *)((long)param_1 + 0x3b);
      bVar5 = *(byte *)((long)param_1 + 0x3a);
      bVar6 = *(byte *)((long)param_1 + 0x39);
      uVar16 = param_1[7];
      uVar13 = *(undefined3 *)((long)param_1 + 0x1d);
      uVar14 = param_2[4];
      uVar2 = param_2[5];
      uVar23 = param_2[6];
      bVar7 = *(byte *)((long)param_2 + 0x3b);
      bVar8 = *(byte *)((long)param_2 + 0x3a);
      bVar9 = *(byte *)((long)param_2 + 0x39);
      uVar17 = param_2[7];
      uVar15 = param_2[2];
      uVar3 = param_2[3];
      if ((uVar19 != *param_2) || (uVar26 != param_2[1])) {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar19,uVar26,*param_2,param_2[1],0);
        if ((uVar19 & 1) == 0) goto LAB_10473bd18;
      }
      FUN_10470b9dc(uVar20,uVar15);
      if ((uVar20 & 1) != 0) {
        uVar20 = CONCAT35(uVar13,(int5)uVar24);
        func_0x000100e25fcc(uVar20,uVar18,uVar3,uVar14);
        if ((uVar20 & 1) != 0) {
          if (((uVar21 == uVar2) && (uVar25 == uVar23)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar21 & 1) != 0)) {
            bVar22 = ((bVar10 ^ bVar22 | bVar4 ^ bVar7) & 1) == 0 &
                     (((byte)uVar16 ^ (byte)uVar17 | bVar6 ^ bVar9 | bVar5 ^ bVar8) ^ 0xff);
            goto LAB_10473bd1c;
          }
        }
      }
    }
  }
  else if (bVar12 == 1) {
    if ((*(byte *)((long)param_2 + 0x3c) & 0xc0) == 0x40) {
      uVar24 = param_2[2];
      uVar14 = param_2[3];
      bVar22 = *(byte *)((long)param_2 + 0x19);
      bVar4 = *(byte *)((long)param_2 + 0x1a);
      bVar5 = *(byte *)((long)param_2 + 0x1b);
      bVar6 = *(byte *)((long)param_2 + 0x1c);
      uVar20 = param_2[1];
      FUN_10470bde8(uVar19,*param_2);
      if (((uVar19 & 1) != 0) &&
         (func_0x000100e25fcc(uVar26,uVar18,uVar20,uVar24), (uVar26 & 1) != 0)) {
        bVar22 = (byte)uVar15 ^ (byte)uVar14 | bVar7 ^ bVar22 | bVar8 ^ bVar4 | bVar9 ^ bVar5;
        bVar6 = bVar11 ^ bVar6;
LAB_10473bd0c:
        bVar22 = (bVar22 | bVar6) ^ 1;
        goto LAB_10473bd1c;
      }
    }
  }
  else if ((long)(int5)param_2[7] < -0x4000000000) {
    uVar18 = param_2[2];
    bVar7 = *(byte *)((long)param_2 + 0x11);
    bVar8 = *(byte *)((long)param_2 + 0x12);
    bVar9 = *(byte *)((long)param_2 + 0x13);
    bVar10 = *(byte *)((long)param_2 + 0x14);
    if (((uVar19 == *param_2) && (uVar26 == param_2[1])) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar19,uVar26,*param_2,param_2[1],0), (uVar19 & 1) != 0)) {
      bVar22 = (byte)uVar14 ^ (byte)uVar18 | bVar22 ^ bVar7 | bVar4 ^ bVar8 | bVar5 ^ bVar9;
      bVar6 = bVar6 ^ bVar10;
      goto LAB_10473bd0c;
    }
  }
LAB_10473bd18:
  bVar22 = 0;
LAB_10473bd1c:
  return bVar22 & 1;
}



/* Entry: 10473bd40; end: 10473bd43;  */

void FUN_10473bd40(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e430 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd31ab0;
  _swift_getWitnessTable(&UNK_10dd31ab0,&UNK_11079db68);
  puRam000000011308e430 = puVar1;
  return;
}



/* Entry: 10473bd44; end: 10473bd83;  */

void FUN_10473bd44(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e430 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd31ab0;
  _swift_getWitnessTable(&UNK_10dd31ab0,&UNK_11079db68);
  puRam000000011308e430 = puVar1;
  return;
}



/* Entry: 10473bd84; end: 10473bdaf;  */

long FUN_10473bd84(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10473bdb0; end: 10473bdd3;  */

/* WARNING: Possible PIC construction at 0x00010179b854: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010179b868: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010179b86c) */
/* WARNING: Removing unreachable block (ram,0x00010179b858) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10473bdb0(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar2 = param_1[1];
  uVar1 = param_1[2];
  uVar3 = (uint)((uint5)*(undefined5 *)(param_1 + 7) >> 0x26);
  if (uVar3 < 2) {
    if (uVar3 != 0) {
      func_0x000107c6142c(*param_1,uVar2,uVar1,param_1[3],param_1[4],param_1[5],param_1[6]);
      uVar3 = (uint)(uVar1 >> 0x3e);
      if (uVar3 == 1) {
        uVar2 = uVar1 & 0x3fffffffffffffff;
      }
      else if (uVar3 != 2) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(uVar2);
      return;
    }
  }
  else if (uVar3 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 10473bdd4; end: 10473bf1f;  */

undefined8 * FUN_10473bdd4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  uint5 uVar8;
  undefined8 uVar9;
  
  uVar1 = *param_2;
  uVar4 = param_2[1];
  uVar2 = param_2[2];
  uVar5 = param_2[3];
  uVar3 = param_2[4];
  uVar6 = param_2[5];
  uVar9 = param_2[6];
  uVar7 = *(undefined1 *)((long)param_2 + 0x3c);
  uVar8 = *(uint5 *)(param_2 + 7);
  func_0x00010179a2b8(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar9,(ulong)*(uint5 *)(param_2 + 7));
  *param_1 = uVar1;
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  param_1[3] = uVar5;
  param_1[4] = uVar3;
  param_1[5] = uVar6;
  param_1[6] = uVar9;
  *(undefined1 *)((long)param_1 + 0x3c) = uVar7;
  *(int *)(param_1 + 7) = (int)uVar8;
  return param_1;
}



/* Entry: 10473bf20; end: 10473bf8f;  */

undefined8 * FUN_10473bf20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  uint5 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar11 = param_2[6];
  uVar8 = *(undefined1 *)((long)param_2 + 0x3c);
  uVar7 = *(undefined4 *)(param_2 + 7);
  uVar10 = *param_1;
  uVar1 = param_1[1];
  uVar4 = param_1[2];
  uVar2 = param_1[3];
  uVar5 = param_1[4];
  uVar3 = param_1[5];
  uVar6 = param_1[6];
  uVar9 = *(uint5 *)(param_1 + 7);
  uVar12 = *param_2;
  uVar14 = param_2[3];
  uVar13 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar12;
  param_1[3] = uVar14;
  param_1[2] = uVar13;
  uVar12 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar12;
  param_1[6] = uVar11;
  *(undefined4 *)(param_1 + 7) = uVar7;
  *(undefined1 *)((long)param_1 + 0x3c) = uVar8;
  func_0x00010179b820(uVar10,uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,(ulong)uVar9);
  return param_1;
}



/* Entry: 10473bf90; end: 10473c11f;  */

int FUN_10473bf90(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x3d) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = param_1[0xe];
  uVar1 = uVar1 & 0xfe00 |
          (uint)((ulong)*(undefined8 *)(param_1 + 8) >> 0x3c) & 3 | (uVar1 >> 1 & 0x7f) << 2 |
          uVar1 >> 1 & 0x7f0000 | (uVar1 >> 0x19) << 0x17 |
          (uint)(*(byte *)(param_1 + 0xf) >> 1) << 0x1e;
  uVar2 = 0xffffffff;
  if (0x80000000 < uVar1) {
    uVar2 = ~uVar1;
  }
  return uVar2 + 1;
}



/* Entry: 10473c120; end: 10473c14b;  */

void FUN_10473c120(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_10473c2dc();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 10473c14c; end: 10473c157;  */

void FUN_10473c14c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 10473c158; end: 10473c203;  */

void FUN_10473c158(void)

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



/* Entry: 10473c204; end: 10473c2db;  */

undefined1  [16] FUN_10473c204(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined1 auVar4 [16];
  long lStack_18;
  
  lStack_18 = *unaff_x20;
  if (lStack_18 < 2) {
    if (lStack_18 == 0) {
      uVar3 = 0xe500000000000000;
      uVar2 = 0x7465736e75;
    }
    else {
      if (lStack_18 != 1) {
LAB_10473c2c0:
        __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                  (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10473c2dc);
        (*pcVar1)();
      }
      uVar2 = 0x707370;
      uVar3 = 0xe300000000000000;
    }
  }
  else if (lStack_18 == 2) {
    uVar3 = 0xed00006e6f697463;
    uVar2 = 0x656c6c6f43707370;
  }
  else if (lStack_18 == 3) {
    uVar3 = 0xe300000000000000;
    uVar2 = 0x706470;
  }
  else {
    if (lStack_18 != 4) goto LAB_10473c2c0;
    uVar3 = 0xea00000000007463;
    uVar2 = 0x75646f7250707370;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 10473c2dc; end: 10473c2ef;  */

undefined1  [16] FUN_10473c2dc(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 5) {
    uVar1 = param_1;
  }
  auVar2[8] = 4 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 10473c2f0; end: 10473c3ab;  */

void FUN_10473c2f0(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_2;
  __ss6HasherV8_combineyys5UInt8VF(uVar1 & 1);
  __ss6HasherV8_combineyys5UInt8VF(uVar1 >> 8 & 1);
  __ss6HasherV8_combineyys5UInt8VF(uVar1 >> 0x10 & 1);
  __ss6HasherV8_combineyys5UInt8VF(uVar1 >> 0x18 & 1);
  __ss6HasherV8_combineyys5UInt8VF(param_2 >> 0x20 & 1);
  return;
}



/* Entry: 10473c3ac; end: 10473c45b;  */

void FUN_10473c3ac(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  byte bVar5;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar5 = *unaff_x20;
  uVar4 = 0x100000000;
  if (unaff_x20[4] == 0) {
    uVar4 = 0;
  }
  uVar1 = 0x1000000;
  if (unaff_x20[3] == 0) {
    uVar1 = 0;
  }
  uVar2 = 0x10000;
  if (unaff_x20[2] == 0) {
    uVar2 = 0;
  }
  uVar3 = 0x100;
  if (unaff_x20[1] == 0) {
    uVar3 = 0;
  }
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyys5UInt8VF(bVar5 & 1);
  __ss6HasherV8_combineyys5UInt8VF(uVar3 >> 8);
  __ss6HasherV8_combineyys5UInt8VF(uVar2 >> 0x10);
  __ss6HasherV8_combineyys5UInt8VF(uVar1 >> 0x18);
  __ss6HasherV8_combineyys5UInt8VF(uVar4 >> 0x20);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10473c45c; end: 10473c4f7;  */

void FUN_10473c45c(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte *unaff_x20;
  undefined1 auStack_88 [72];
  
  bVar5 = *unaff_x20;
  bVar6 = unaff_x20[1];
  bVar7 = unaff_x20[2];
  bVar8 = unaff_x20[3];
  bVar9 = unaff_x20[4];
  __ss6HasherV5_seedABSi_tcfC(auStack_88);
  uVar1 = 0x100000000;
  if (bVar9 == 0) {
    uVar1 = 0;
  }
  uVar2 = 0x1000000;
  if (bVar8 == 0) {
    uVar2 = 0;
  }
  uVar3 = 0x10000;
  if (bVar7 == 0) {
    uVar3 = 0;
  }
  uVar4 = 0x100;
  if (bVar6 == 0) {
    uVar4 = 0;
  }
  FUN_10473c2f0(auStack_88,uVar4 | bVar5 | uVar3 | uVar2 | uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10473c4f8; end: 10473c4fb;  */

void FUN_10473c4f8(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e438 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd31c30;
  _swift_getWitnessTable(&UNK_10dd31c30,&UNK_11079dca0);
  puRam000000011308e438 = puVar1;
  return;
}



/* Entry: 10473c4fc; end: 10473c53b;  */

void FUN_10473c4fc(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e438 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd31c30;
  _swift_getWitnessTable(&UNK_10dd31c30,&UNK_11079dca0);
  puRam000000011308e438 = puVar1;
  return;
}



/* Entry: 10473c53c; end: 10473c63b;  */

byte FUN_10473c53c(byte *param_1,byte *param_2)

{
  return ((*param_1 ^ *param_2 | param_1[1] ^ param_2[1] |
           param_1[2] ^ param_2[2] | param_1[3] ^ param_2[3] | param_2[4] ^ param_1[4]) ^ 0xff) & 1;
}



/* Entry: 10473c63c; end: 10473c76f;  */

void FUN_10473c63c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  double dVar1;
  
  __ss6HasherV8_combineyySuF(*unaff_x20);
  __sSS4hash4intoys6HasherVz_tF(param_1,unaff_x20[1],unaff_x20[2]);
  __ss6HasherV8_combineyySuF(unaff_x20[3]);
  dVar1 = 0.0;
  if ((double)unaff_x20[4] != 0.0) {
    dVar1 = (double)unaff_x20[4];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if ((double)unaff_x20[5] != 0.0) {
    dVar1 = (double)unaff_x20[5];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if ((double)unaff_x20[6] != 0.0) {
    dVar1 = (double)unaff_x20[6];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  return;
}



/* Entry: 10473c770; end: 10473c777;  */

void FUN_10473c770(void)

{
  undefined8 *unaff_x20;
  double dVar1;
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  __ss6HasherV8_combineyySuF(*unaff_x20);
  __sSS4hash4intoys6HasherVz_tF(auStack_78,unaff_x20[1],unaff_x20[2]);
  __ss6HasherV8_combineyySuF(unaff_x20[3]);
  dVar1 = 0.0;
  if ((double)unaff_x20[4] != 0.0) {
    dVar1 = (double)unaff_x20[4];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if ((double)unaff_x20[5] != 0.0) {
    dVar1 = (double)unaff_x20[5];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if ((double)unaff_x20[6] != 0.0) {
    dVar1 = (double)unaff_x20[6];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10473c778; end: 10473c7af;  */

void FUN_10473c778(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_10473c63c(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10473c7b0; end: 10473c807;  */

uint FUN_10473c7b0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_20 = param_2[6];
  FUN_10473c808(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10473c808; end: 10473c8b3;  */

bool FUN_10473c808(long *param_1,long *param_2)

{
  ulong uVar1;
  
  if (*param_1 == *param_2) {
    uVar1 = param_1[1];
    if ((((uVar1 == param_2[1] && param_1[2] == param_2[2]) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar1,param_1[2],param_2[1],param_2[2],0), (uVar1 & 1) != 0)) &&
        (param_1[3] == param_2[3])) &&
       (((double)param_1[4] == (double)param_2[4] && ((double)param_1[5] == (double)param_2[5])))) {
      return (double)param_1[6] == (double)param_2[6];
    }
  }
  return false;
}



/* Entry: 10473c8b4; end: 10473c8b7;  */

void FUN_10473c8b4(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e440 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd31cc0;
  _swift_getWitnessTable(&UNK_10dd31cc0,&UNK_11079dd68);
  puRam000000011308e440 = puVar1;
  return;
}



/* Entry: 10473c8b8; end: 10473c8f7;  */

void FUN_10473c8b8(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e440 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd31cc0;
  _swift_getWitnessTable(&UNK_10dd31cc0,&UNK_11079dd68);
  puRam000000011308e440 = puVar1;
  return;
}



/* Entry: 10473c8f8; end: 10473c923;  */

long FUN_10473c8f8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10473c924; end: 10473c92b;  */

void FUN_10473c924(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 10473c92c; end: 10473c96f;  */

undefined8 * FUN_10473c92c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 10473c970; end: 10473c9e3;  */

undefined8 * FUN_10473c970(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  return param_1;
}



/* Entry: 10473c9e4; end: 10473ca37;  */

undefined8 * FUN_10473c9e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRelease(uVar1);
  param_1[3] = param_2[3];
  uVar1 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  param_1[6] = param_2[6];
  return param_1;
}



/* Entry: 10473ca38; end: 10473cadb;  */

int FUN_10473ca38(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10473cadc; end: 10473cbb7;  */

void FUN_10473cadc(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  long lVar6;
  undefined8 *puVar7;
  
  if (param_3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,param_2,param_3);
  }
  lVar6 = *(long *)(param_4 + 0x10);
  __ss6HasherV8_combineyySuF(lVar6);
  if (lVar6 != 0) {
    puVar7 = (undefined8 *)(param_4 + 0x40);
    do {
      uVar1 = puVar7[-4];
      uVar3 = puVar7[-3];
      uVar5 = *(undefined1 *)(puVar7 + -2);
      uVar2 = puVar7[-1];
      uVar4 = *puVar7;
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(uVar4);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar3);
      __ss6HasherV8_combineyys5UInt8VF(uVar5);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,uVar4);
      _swift_bridgeObjectRelease(uVar4);
      _swift_bridgeObjectRelease(uVar3);
      puVar7 = puVar7 + 5;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



/* Entry: 10473cbb8; end: 10473cc0f;  */

void FUN_10473cbb8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  FUN_10473cadc(auStack_78,uVar1,uVar2,uVar3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10473cc10; end: 10473cc1b;  */

void FUN_10473cc10(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *unaff_x20;
  undefined8 *puVar8;
  
  uVar2 = *unaff_x20;
  lVar7 = unaff_x20[1];
  lVar6 = unaff_x20[2];
  if (lVar7 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,lVar7);
  }
  lVar7 = *(long *)(lVar6 + 0x10);
  __ss6HasherV8_combineyySuF(lVar7);
  if (lVar7 != 0) {
    puVar8 = (undefined8 *)(lVar6 + 0x40);
    do {
      uVar2 = puVar8[-4];
      uVar3 = puVar8[-3];
      uVar5 = *(undefined1 *)(puVar8 + -2);
      uVar1 = puVar8[-1];
      uVar4 = *puVar8;
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(uVar4);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,uVar3);
      __ss6HasherV8_combineyys5UInt8VF(uVar5);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar4);
      _swift_bridgeObjectRelease(uVar4);
      _swift_bridgeObjectRelease(uVar3);
      puVar8 = puVar8 + 5;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}



/* Entry: 10473cc1c; end: 10473cc6f;  */

void FUN_10473cc1c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(auStack_78);
  FUN_10473cadc(auStack_78,uVar1,uVar2,uVar3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10473cc70; end: 10473ccd7;  */

undefined8 FUN_10473cc70(ulong *param_1,ulong *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  
  uVar7 = param_1[2];
  uVar6 = param_2[1];
  uVar3 = param_2[2];
  if (param_1[1] == 0) {
    if (uVar6 == 0) goto FUN_10470b830;
  }
  else if ((uVar6 != 0) &&
          ((uVar9 = *param_1, uVar9 == *param_2 && param_1[1] == uVar6 ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar9 & 1) != 0)))) {
FUN_10470b830:
    lVar10 = *(long *)(uVar7 + 0x10);
    if (lVar10 == *(long *)(uVar3 + 0x10)) {
      if ((lVar10 != 0) && (uVar7 != uVar3)) {
        plVar11 = (long *)(uVar3 + 0x40);
        plVar12 = (long *)(uVar7 + 0x40);
        do {
          uVar6 = plVar12[-4];
          bVar4 = *(byte *)(plVar12 + -2);
          uVar7 = plVar12[-1];
          lVar1 = *plVar12;
          bVar5 = *(byte *)(plVar11 + -2);
          uVar3 = plVar11[-1];
          lVar2 = *plVar11;
          if (uVar6 == plVar11[-4] && plVar12[-3] == plVar11[-3]) {
            if (bVar4 != bVar5) goto LAB_10470b8f8;
          }
          else {
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      ();
            if ((uVar6 & 1) == 0) {
              return 0;
            }
            if (((bVar4 ^ bVar5) & 1) != 0) {
              return 0;
            }
          }
          if ((uVar7 != uVar3 || lVar1 != lVar2) &&
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (uVar7,lVar1,uVar3,lVar2,0), (uVar7 & 1) == 0)) goto LAB_10470b8f8;
          plVar11 = plVar11 + 5;
          plVar12 = plVar12 + 5;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      uVar8 = 1;
    }
    else {
LAB_10470b8f8:
      uVar8 = 0;
    }
    return uVar8;
  }
  return 0;
}



/* Entry: 10473ccd8; end: 10473ccdb;  */

void FUN_10473ccd8(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e448 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd31d50;
  _swift_getWitnessTable(&UNK_10dd31d50,&UNK_11079de30);
  puRam000000011308e448 = puVar1;
  return;
}



/* Entry: 10473ccdc; end: 10473cd1b;  */

void FUN_10473ccdc(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e448 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd31d50;
  _swift_getWitnessTable(&UNK_10dd31d50,&UNK_11079de30);
  puRam000000011308e448 = puVar1;
  return;
}



/* Entry: 10473cd1c; end: 10473cd7f;  */

void FUN_10473cd1c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 10473cd80; end: 10473cde3;  */

undefined8 * FUN_10473cd80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 10473cde4; end: 10473ce27;  */

undefined8 * FUN_10473cde4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 10473ce28; end: 10473cec7;  */

int FUN_10473ce28(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10473cec8; end: 10473d00f;  */

void FUN_10473cec8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 *unaff_x20;
  undefined1 auStack_88 [72];
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar5 = *(undefined1 *)(unaff_x20 + 2);
  uVar2 = unaff_x20[3];
  uVar4 = unaff_x20[4];
  __ss6HasherV5_seedABSi_tcfC(auStack_88,0);
  __sSS4hash4intoys6HasherVz_tF(auStack_88,uVar1,uVar3);
  __ss6HasherV8_combineyys5UInt8VF(uVar5);
  __sSS4hash4intoys6HasherVz_tF(auStack_88,uVar2,uVar4);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10473d010; end: 10473d057;  */

uint FUN_10473d010(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_20 = param_2[4];
  FUN_10473d058(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10473d058; end: 10473d0db;  */

ulong FUN_10473d058(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  if (((uVar1 == *param_2 && param_1[1] == param_2[1]) ||
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar1 & 1) != 0)) && ((((byte)param_1[2] ^ (byte)param_2[2]) & 1) == 0)) {
    uVar1 = param_1[3];
    if (uVar1 != param_2[3] || param_1[4] != param_2[4]) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )();
      return uVar1;
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 10473d0dc; end: 10473d0df;  */

void FUN_10473d0dc(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e450 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd31de0;
  _swift_getWitnessTable(&UNK_10dd31de0,&UNK_11079dee8);
  puRam000000011308e450 = puVar1;
  return;
}



/* Entry: 10473d0e0; end: 10473d11f;  */

void FUN_10473d0e0(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e450 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd31de0;
  _swift_getWitnessTable(&UNK_10dd31de0,&UNK_11079dee8);
  puRam000000011308e450 = puVar1;
  return;
}



/* Entry: 10473d120; end: 10473d1b7;  */

long FUN_10473d120(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10473d1b8; end: 10473d22b;  */

undefined8 * FUN_10473d1b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[3] = param_2[3];
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 10473d22c; end: 10473d277;  */

undefined8 * FUN_10473d22c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Entry: 10473d278; end: 10473d317;  */

int FUN_10473d278(int *param_1,int param_2)

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



/* Entry: 10473d318; end: 10473d36f;  */

void FUN_10473d318(double param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  
  dVar1 = 0.0;
  if (param_1 != 0.0) {
    dVar1 = param_1;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (param_2 != 0.0) {
    dVar1 = param_2;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  __ss6HasherV8_combineyySuF(param_4);
  return;
}



/* Entry: 10473d370; end: 10473d3f7;  */

void FUN_10473d370(double param_1,double param_2,undefined8 param_3)

{
  double dVar1;
  undefined1 auStack_88 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_88,0);
  dVar1 = 0.0;
  if (param_1 != 0.0) {
    dVar1 = param_1;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (param_2 != 0.0) {
    dVar1 = param_2;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  __ss6HasherV8_combineyySuF(param_3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10473d3f8; end: 10473d40f;  */

void FUN_10473d3f8(void)

{
  double dVar1;
  double *unaff_x20;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_88 [72];
  
  dVar3 = *unaff_x20;
  dVar4 = unaff_x20[1];
  dVar1 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(auStack_88,0);
  dVar2 = 0.0;
  if (dVar3 != 0.0) {
    dVar2 = dVar3;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar2);
  dVar2 = 0.0;
  if (dVar4 != 0.0) {
    dVar2 = dVar4;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar2);
  __ss6HasherV8_combineyySuF(dVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10473d410; end: 10473d463;  */

void FUN_10473d410(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [72];
  
  uVar2 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar1 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(auStack_78);
  FUN_10473d318(uVar2,uVar3,auStack_78,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10473d464; end: 10473d467;  */

void FUN_10473d464(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e458 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd31e70;
  _swift_getWitnessTable(&UNK_10dd31e70,&UNK_11079dfa8);
  puRam000000011308e458 = puVar1;
  return;
}



/* Entry: 10473d468; end: 10473d4a7;  */

void FUN_10473d468(void)

{
  undefined *puVar1;
  
  if (puRam000000011308e458 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd31e70;
  _swift_getWitnessTable(&UNK_10dd31e70,&UNK_11079dfa8);
  puRam000000011308e458 = puVar1;
  return;
}



/* Entry: 10473d4a8; end: 10473d533;  */

bool FUN_10473d4a8(double *param_1,double *param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if ((*param_1 == *param_2) && (bVar1 = false, !NAN(param_1[1]) && !NAN(param_2[1]))) {
    bVar1 = param_1[1] == param_2[1];
  }
  if (!bVar1) {
    return false;
  }
  return param_1[2] == param_2[2];
}


