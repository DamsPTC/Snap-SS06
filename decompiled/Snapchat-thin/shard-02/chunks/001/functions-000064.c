/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1018793d4; end: 101879787;  */

void FUN_1018793d4(undefined8 *param_1,undefined8 param_2,long param_3,undefined *param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined8 uStack_12f;
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
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined8 uStack_af;
  
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (*(long *)(param_3 + 0x10) != 0) {
    func_0x000107c61434();
    lVar2 = 3;
    func_0x0001018815d4();
    puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (((ulong)param_4 & 1) != 0) {
      puVar12 = *(undefined **)(*(long *)(param_3 + 0x38) + lVar2 * 8);
      func_0x000107c61434(puVar12);
    }
    func_0x000107c6142c(param_3);
  }
  uVar9 = *(ulong *)(puVar12 + 0x10);
  if (uVar9 != 0) {
    uVar11 = 0;
    plVar10 = (long *)(puVar12 + 0x30);
    do {
      if (*(ulong *)(puVar12 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101879788);
        (*pcVar1)();
      }
      uVar4 = plVar10[-2];
      lVar2 = plVar10[-1];
      lVar13 = *plVar10;
      lVar3 = lVar13;
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174(lVar2);
      uVar5 = uVar4;
      func_0x000107c30b14();
      func_0x000107c61180();
      puVar8 = param_4;
      if (uVar5 != 0) {
        uVar6 = uVar5;
        func_0x000107c5faec();
        func_0x000107c61170(uVar5);
        if (uVar6 == 0xd000000000000021 && param_4 == (undefined *)0x800000010efbc4a0) {
          func_0x000107c6142c(puVar12);
          puVar12 = param_4;
        }
        else {
          puVar8 = param_4;
          func_0x000107c605b8(uVar6,param_4,0xd000000000000021,0x800000010efbc4a0,0);
          func_0x000107c6142c(param_4);
          if ((uVar6 & 1) == 0) goto LAB_101879480;
        }
        func_0x000107c6142c(puVar12);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(uVar4);
        if (lVar13 == 0) goto LAB_101879568;
        lVar2 = lVar3;
        func_0x000107c30c6c();
        func_0x000107c61180();
        uVar14 = 0;
        uVar15 = 0;
        uVar16 = 0;
        if (lVar2 != 0) {
          lVar13 = lVar3;
          func_0x000107c30c70();
          func_0x000107c61180();
          uVar17 = param_2;
          if (lVar13 != 0) {
            func_0x000107c4223c(lVar2);
            uVar16 = param_2;
            func_0x000107c4223c(lVar13);
            uVar17 = uVar16;
            func_0x000107c61170(lVar13);
            uVar15 = param_2;
          }
          param_2 = uVar17;
          func_0x000107c61170(lVar2);
        }
        lVar2 = lVar3;
        func_0x000107c30c74();
        func_0x000107c61180();
        uVar17 = 0;
        if (lVar2 != 0) {
          lVar13 = lVar3;
          func_0x000107c30c78();
          func_0x000107c61180();
          if (lVar13 != 0) {
            func_0x000107c4223c(lVar2);
            uVar17 = param_2;
            func_0x000107c4223c(lVar13);
            func_0x000107c61170(lVar13);
            uVar14 = param_2;
          }
          func_0x000107c61170(lVar2);
        }
        lVar2 = lVar3;
        func_0x000107c30c90();
        func_0x000107c61180();
        if (lVar2 != 0) {
          func_0x000107c4223c();
          func_0x000107c61170(lVar2);
        }
        lVar2 = lVar3;
        func_0x000107c30c94(lVar3);
        uVar7 = 0;
        func_0x0001047c8648(0);
        func_0x000107c610f8();
        func_0x0001047c7744(uVar15,uVar16,uVar14,uVar17,0,0,0,0,lVar2,uVar7);
        func_0x0001047c84d8(&uStack_1a0);
        func_0x000107c61170(lVar3);
        func_0x0001018797d8(&uStack_1a0);
        uStack_d8 = uStack_158;
        uStack_e0 = uStack_160;
        uStack_c8 = uStack_148;
        uStack_d0 = uStack_150;
        uStack_b8 = uStack_138;
        uStack_c0 = uStack_140;
        uStack_af = uStack_12f;
        uStack_b7 = uStack_137;
        uStack_b0 = uStack_130;
        uStack_118 = uStack_198;
        uStack_120 = uStack_1a0;
        uStack_108 = uStack_188;
        uStack_110 = uStack_190;
        uStack_f8 = uStack_178;
        uStack_100 = uStack_180;
        uStack_e8 = uStack_168;
        uStack_f0 = uStack_170;
        goto LAB_10187972c;
      }
LAB_101879480:
      uVar11 = uVar11 + 1;
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(uVar4);
      plVar10 = plVar10 + 3;
      param_4 = puVar8;
    } while (uVar9 != uVar11);
  }
  func_0x000107c6142c(puVar12);
LAB_101879568:
  func_0x0001018797b4(&uStack_120);
LAB_10187972c:
  param_1[9] = uStack_d8;
  param_1[8] = uStack_e0;
  param_1[0xb] = uStack_c8;
  param_1[10] = uStack_d0;
  param_1[0xd] = CONCAT71(uStack_b7,uStack_b8);
  param_1[0xc] = uStack_c0;
  *(undefined8 *)((long)param_1 + 0x71) = uStack_af;
  *(ulong *)((long)param_1 + 0x69) = CONCAT17(uStack_b0,uStack_b7);
  param_1[1] = uStack_118;
  *param_1 = uStack_120;
  param_1[3] = uStack_108;
  param_1[2] = uStack_110;
  param_1[5] = uStack_f8;
  param_1[4] = uStack_100;
  param_1[7] = uStack_e8;
  param_1[6] = uStack_f0;
  return;
}



/* Entry: 101879788; end: 1018797df;  */

void FUN_101879788(undefined8 *param_1)

{
  *(undefined8 *)((long)param_1 + 0x71) = 0;
  *(undefined8 *)((long)param_1 + 0x69) = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined1 *)((long)param_1 + 0x79) = 1;
  return;
}



/* Entry: 1018797e0; end: 1018799af;  */

long FUN_1018797e0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_130 [112];
  undefined1 auStack_c0 [112];
  
  puVar2 = &UNK_10d98f070;
  func_0x000107c614e0(&UNK_10d98f070);
  FUN_101879df4(param_1,auStack_c0);
  puVar3 = &UNK_11040a230;
  func_0x000107c613fc(&UNK_11040a230,0x38,7);
  FUN_101879e38(auStack_c0,puVar3 + 0x10);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100402814(auStack_130,0x657474696d627573,0xed00006461654c64,puVar2,0,0,0x101879e50,
                      puVar3,PTR___swiftEmptyArrayStorage_11034f1c8,FUN_10187a05c,0);
  puVar2 = &UNK_10d98f090;
  func_0x000107c614e0(&UNK_10d98f090);
  lVar4 = 0x65746e496d726f66;
  func_0x000100402814(auStack_c0,0x65746e496d726f66,0xef6e6f6974636172,puVar2,0,0,FUN_101879e58,0,
                      puVar1,FUN_10187a05c,0);
  func_0x000101876718();
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x18) = 5;
  *(undefined8 *)(lVar4 + 0x10) = 2;
  uVar5 = 0x112dcc700;
  func_0x0001000285a8(0x112dcc700,&UNK_10d98f0b0);
  func_0x000100401efc();
  *(undefined8 *)(lVar4 + 0x20) = uVar5;
  uVar5 = 0x112dcc708;
  func_0x0001000285a8(0x112dcc708,&UNK_10d98f0b8);
  func_0x000100401efc();
  FUN_10187a0ec(auStack_c0,0x112dcc708,&UNK_10d98f0b8);
  FUN_10187a0ec(auStack_130,0x112dcc700,&UNK_10d98f0b0);
  *(undefined8 *)(lVar4 + 0x28) = uVar5;
  return lVar4;
}



/* Entry: 1018799b0; end: 101879df3;  */

long FUN_1018799b0(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 auStack_1b0 [2];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long alStack_110 [11];
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = param_3;
  FUN_101882a30();
  lVar11 = *(long *)(param_2 + 0x10);
  if (lVar11 != 0) {
    plVar12 = (long *)((ulong)alStack_110 | 8);
    alStack_110[7] = 0;
    alStack_110[6] = 0;
    alStack_110[9] = 0;
    alStack_110[8] = 0;
    alStack_110[3] = 0;
    alStack_110[2] = 0;
    alStack_110[5] = 0;
    alStack_110[4] = 0;
    alStack_110[1] = 0;
    alStack_110[0] = 0;
    plVar13 = (long *)(param_2 + 0x28);
    do {
      lVar11 = lVar11 + -1;
      lVar1 = plVar13[-1];
      lVar2 = *plVar13;
      func_0x000107c61174();
      func_0x000107c61174();
      lVar3 = lVar2;
      func_0x000107c30da0();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar1);
LAB_101879bb4:
        lStack_138 = plVar12[5];
        lStack_140 = plVar12[4];
        lStack_128 = plVar12[7];
        lStack_130 = plVar12[6];
        lStack_120 = plVar12[8];
        lStack_158 = plVar12[1];
        lStack_160 = *plVar12;
        lStack_148 = plVar12[3];
        lStack_150 = plVar12[2];
        lVar3 = alStack_110[0];
      }
      else {
        lVar4 = lVar3;
        func_0x000107c5ee30();
        func_0x000107c61170(lVar3);
        puVar5 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
        func_0x000107c610f8();
        func_0x00010006c00c(lVar4,lVar10);
        lVar3 = lVar4;
        func_0x000107c5ee20(lVar4,lVar10);
        uStack_180 = 0;
        func_0x000107c45424();
        func_0x000107c61170(lVar3);
        uVar8 = uStack_180;
        if (puVar5 == (undefined *)0x0) {
          uVar7 = uStack_180;
          func_0x000107c61174();
          func_0x000107c5ed30(uVar8);
          func_0x000107c61170(uVar7);
          func_0x000107c61654();
          func_0x000107c614ac(uVar8);
          func_0x00010006c090(lVar4,lVar10);
          uVar8 = *(undefined8 *)(param_3 + 0x18);
          lVar3 = *(long *)(param_3 + 0x20);
          func_0x0001000a8868(param_3,uVar8);
          (**(code **)(lVar3 + 8))(0,uVar8,lVar3);
          func_0x00010006c090(lVar4);
          func_0x000107c61170(lVar2);
          func_0x000107c61170(lVar1);
          goto LAB_101879bb4;
        }
        func_0x000107c61174();
        func_0x00010006c090(lVar4,lVar10);
        func_0x000107c57e2c(puVar5);
        func_0x000107c53ec4(puVar5);
        puVar6 = puVar5;
        func_0x000107c41478();
        func_0x000107c61180();
        if (puVar6 == (undefined *)0x0) {
          uStack_198 = 0;
          uStack_1a0 = 0;
          lStack_188 = 0;
          uStack_190 = 0;
        }
        else {
          func_0x000107c60234(&uStack_1a0);
          func_0x000107c615e8(puVar6);
        }
        uStack_178 = uStack_198;
        uStack_180 = uStack_1a0;
        lStack_168 = lStack_188;
        uStack_170 = uStack_190;
        if (lStack_188 == 0) {
          FUN_10187a0ec(&uStack_180,0x112d387f8,&UNK_10d902650);
LAB_101879cbc:
          uVar8 = *(undefined8 *)(param_3 + 0x18);
          lVar3 = *(long *)(param_3 + 0x20);
          func_0x0001000a8868(param_3,uVar8);
          (**(code **)(lVar3 + 8))(1,uVar8,lVar3);
          func_0x000107c61170(puVar5);
          func_0x00010006c090(lVar4);
          func_0x000107c61170(lVar2);
          func_0x000107c61170(lVar1);
          lStack_138 = plVar12[5];
          lStack_140 = plVar12[4];
          lStack_128 = plVar12[7];
          lStack_130 = plVar12[6];
          lStack_120 = plVar12[8];
          lStack_158 = plVar12[1];
          lStack_160 = *plVar12;
          lStack_148 = plVar12[3];
          lStack_150 = plVar12[2];
          lVar3 = alStack_110[0];
        }
        else {
          uVar8 = 0;
          func_0x00010428a35c(0);
          puVar9 = auStack_1b0;
          func_0x000107c6147c(puVar9,&uStack_180,PTR___sypN_11034f1a8 + 8,uVar8,6);
          if (((ulong)puVar9 & 1) == 0) goto LAB_101879cbc;
          func_0x0001042889d0(alStack_110 + 10,auStack_1b0[0]);
          lVar3 = alStack_110[10];
          lStack_138 = lStack_90;
          lStack_140 = lStack_98;
          lStack_128 = lStack_80;
          lStack_130 = lStack_88;
          lStack_120 = lStack_78;
          lStack_158 = lStack_b0;
          lStack_160 = lStack_b8;
          lStack_148 = lStack_a0;
          lStack_150 = lStack_a8;
          func_0x000107c61170(puVar5);
          func_0x00010006c090(lVar4,lVar10);
          func_0x000107c61170(lVar2);
          func_0x000107c61170(lVar1);
          lVar10 = 0x112dcc710;
          FUN_10187a0ec(alStack_110,0x112dcc710,&UNK_10d98f0e0);
        }
      }
      if (lVar11 == 0) goto LAB_101879d54;
      plVar13 = plVar13 + 2;
      plVar12[5] = lStack_138;
      plVar12[4] = lStack_140;
      plVar12[7] = lStack_128;
      plVar12[6] = lStack_130;
      plVar12[8] = lStack_120;
      plVar12[1] = lStack_158;
      *plVar12 = lStack_160;
      plVar12[3] = lStack_148;
      plVar12[2] = lStack_150;
      alStack_110[0] = lVar3;
    } while( true );
  }
  func_0x000107c6142c();
LAB_101879d98:
  *param_1 = 1;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
LAB_101879db8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    func_0x000107c60e78();
    lVar11 = *(long *)(param_2 + 0x18);
    *(long *)(lVar10 + 0x18) = lVar11;
    *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    (*(code *)**(undefined8 **)(lVar11 + -8))(lVar10,param_2);
    return lVar10;
  }
  return param_2;
LAB_101879d54:
  func_0x000107c6142c();
  if (lVar3 != 0) {
    *param_1 = lVar3;
    param_1[4] = lStack_148;
    param_1[3] = lStack_150;
    param_1[6] = lStack_138;
    param_1[5] = lStack_140;
    param_1[8] = lStack_128;
    param_1[7] = lStack_130;
    param_1[9] = lStack_120;
    param_1[2] = lStack_158;
    param_1[1] = lStack_160;
    goto LAB_101879db8;
  }
  goto LAB_101879d98;
}



/* Entry: 101879df4; end: 101879e37;  */

long FUN_101879df4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 101879e38; end: 101879e57;  */

undefined8 * FUN_101879e38(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 101879e58; end: 10187a05b;  */

void FUN_101879e58(long *param_1,long param_2,long param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  
  FUN_101882a30();
  uVar13 = *(ulong *)(param_2 + 0x10);
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar13 != 0) {
    uVar10 = 0;
    do {
      plVar9 = (long *)(param_2 + 0x28 + uVar10 * 0x10);
      lVar11 = param_3;
      uVar14 = uVar10;
      while( true ) {
        if (*(ulong *)(param_2 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10187a05c);
          (*pcVar2)();
        }
        lVar12 = plVar9[-1];
        lVar3 = *plVar9;
        uVar10 = uVar14 + 1;
        func_0x000107c61174(lVar12);
        func_0x000107c61174();
        func_0x000107c61174(lVar12);
        func_0x000107c61174();
        lVar4 = lVar3;
        func_0x000107c30da4();
        func_0x000107c61180();
        if (lVar4 != 0) break;
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar12);
        func_0x000107c61170(lVar12);
        plVar9 = plVar9 + 2;
        uVar14 = uVar10;
        if (uVar13 == uVar10) goto LAB_101879ff4;
      }
      lVar5 = lVar4;
      func_0x000107c5ee30();
      param_3 = lVar11;
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar12);
      func_0x000107c61170(lVar12);
      func_0x000107c61170(lVar4);
      puVar6 = puVar8;
      func_0x000107c61558();
      puVar7 = puVar8;
      if (((ulong)puVar6 & 1) == 0) {
        param_3 = *(long *)(puVar8 + 0x10) + 1;
        puVar7 = (undefined *)0x0;
        func_0x000100f23260(0,param_3,1,puVar8);
      }
      uVar1 = *(ulong *)(puVar7 + 0x10);
      lVar12 = uVar1 + 1;
      puVar8 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
        param_3 = lVar12;
        func_0x000100f23260(puVar8,lVar12,1,puVar7);
      }
      *(long *)(puVar8 + 0x10) = lVar12;
      *(long *)(puVar8 + uVar1 * 0x10 + 0x20) = lVar5;
      *(long *)(puVar8 + uVar1 * 0x10 + 0x28) = lVar11;
    } while (uVar13 - 1 != uVar14);
  }
LAB_101879ff4:
  func_0x000107c6142c(param_2);
  plVar9 = (long *)(puVar8 + 0x10);
  if (*plVar9 == 0) {
    lVar11 = 0;
    lVar12 = -0x5000000000000000;
  }
  else {
    lVar11 = plVar9[*plVar9 * 2];
    lVar12 = (plVar9 + *plVar9 * 2)[1];
    func_0x00010006c00c(lVar11,lVar12);
  }
  func_0x000107c6142c(puVar8);
  *param_1 = lVar11;
  param_1[1] = lVar12;
  return;
}



/* Entry: 10187a05c; end: 10187a0db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10187a05c(undefined8 param_1,long param_2,long param_3)

{
  undefined1 uStack_21;
  
  if (*(int *)(param_3 + _DAT_113803418 + 0x18) == 0x16) {
    func_0x000107c614f0();
    (**(code **)(param_2 + 8))
              (&uStack_21,&UNK_11040a268,&UNK_1107383c8,&PTR_DAT_11304a4b0,param_1,param_2);
    return uStack_21;
  }
  return 0;
}



/* Entry: 10187a0dc; end: 10187a0eb;  */

undefined1  [16] FUN_10187a0dc(void)

{
  return ZEXT816(0x11040a258);
}



/* Entry: 10187a0ec; end: 10187a1bf;  */

undefined8 FUN_10187a0ec(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10187a1c0; end: 10187a1cf;  */

undefined1  [16] FUN_10187a1c0(void)

{
  return ZEXT816(0x11040a290);
}



/* Entry: 10187a1d0; end: 10187a223;  */

undefined1 FUN_10187a1d0(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_78 [72];
  
  if (lRam0000000112dcc490 != -1) {
    func_0x000107c61568(0x112dcc490,FUN_101875d88);
  }
  lVar1 = lRam0000000112dcc498;
  if (*(long *)(lRam0000000112dcc498 + 0x10) == 0) {
    return 0;
  }
  func_0x000107c6068c(auStack_78,*(undefined8 *)(lRam0000000112dcc498 + 0x28));
  uVar2 = param_1;
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar3 = -1L << ((ulong)*(byte *)(lVar1 + 0x20) & 0x3f);
  uVar2 = uVar2 & (uVar3 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + 0x38 + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) != 0) {
    do {
      if ((int)*(undefined8 *)(*(long *)(lVar1 + 0x30) + uVar2 * 8) == (int)param_1) {
        return 1;
      }
      uVar2 = uVar2 + 1 & ~uVar3;
    } while ((*(ulong *)(lVar1 + 0x38 + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) != 0);
  }
  return 0;
}



/* Entry: 10187a224; end: 10187a5a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10187a224(undefined8 *param_1,long param_2,undefined8 *param_3,code *param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uStack_258;
  long lStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long lStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined2 uStack_150;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  
  uStack_d8 = param_3[0xd];
  uStack_e0 = param_3[0xc];
  uStack_c8 = param_3[0xf];
  uStack_d0 = param_3[0xe];
  uStack_c0 = *(undefined1 *)(param_3 + 0x10);
  uStack_118 = param_3[5];
  uStack_120 = param_3[4];
  lStack_108 = param_3[7];
  uStack_110 = param_3[6];
  uStack_f8 = param_3[9];
  uStack_100 = param_3[8];
  uStack_e8 = param_3[0xb];
  uStack_f0 = param_3[10];
  lStack_138 = param_3[1];
  uStack_140 = *param_3;
  uStack_128 = param_3[3];
  uStack_130 = param_3[2];
  FUN_101881b6c();
  func_0x000107c6142c();
  lVar9 = param_3[2];
  func_0x000107c6142c(param_3);
  if (lVar9 == 0) {
    func_0x00010187bc18(&uStack_1d0);
  }
  else {
    uVar5 = param_2 + _DAT_113803418;
    (*param_4)();
    iVar1 = *(int *)(param_2 + _DAT_113803428);
    func_0x0001000d224c(&uStack_1d0);
    lVar9 = lStack_1c8;
    uVar8 = uStack_1d0;
    uVar6 = uStack_1d0;
    func_0x000107c614f0(uStack_1d0);
    (**(code **)(lVar9 + 8))
              (&uStack_258,&UNK_11040a2f0,&UNK_1107383c8,&PTR_DAT_11304a4b0,uVar6,lVar9);
    func_0x000107c615e8(uVar8);
    if ((((byte)uStack_258 & 1) == 0) && ((uVar5 & 1) == 0)) {
      uVar8 = 0;
      bVar4 = iVar1 == 0x16;
    }
    else {
      if ((uVar5 & 1) == 0) {
        uVar8 = 0;
      }
      else {
        func_0x0001000d224c(&uStack_1d0);
        uVar6 = uStack_1d0;
        uVar8 = uStack_1d0;
        func_0x000107c4260c(uStack_1d0);
        func_0x000107c615e8(uVar6);
      }
      bVar4 = true;
    }
    FUN_10187a5bc(&uStack_1d0,param_2,uVar8);
    lVar3 = lStack_1b0;
    uVar2 = uStack_1b8;
    uVar6 = uStack_1c0;
    lVar9 = lStack_1c8;
    uVar8 = uStack_1d0;
    FUN_10187a6d8(&uStack_1d0,uStack_1d0,lStack_1c8,uStack_1c0,uStack_1b8,lStack_1b0,uStack_1a8,
                  uStack_1a0);
    func_0x000107c6142c(lVar9);
    func_0x000107c6142c(uVar8);
    FUN_10187bbc0(uVar6,uVar2);
    FUN_10187bbc0(lVar3,uStack_1a8);
    func_0x000107c6142c(uStack_1a0);
    puVar7 = &uStack_140;
    FUN_10187bbec();
    uStack_218 = uStack_100;
    uStack_210 = uStack_f8;
    uStack_208 = uStack_f0;
    uStack_200 = uStack_e8;
    uStack_1f8 = uStack_e0;
    uStack_1f0 = uStack_d8;
    uStack_1e8 = uStack_d0;
    uStack_1e0 = uStack_c8;
    uVar8 = uStack_118;
    lStack_250 = lStack_138;
    uStack_258 = uStack_140;
    lVar9 = lStack_108;
    uStack_240 = uStack_128;
    uVar6 = uStack_110;
    if ((int)puVar7 == 1) {
      uStack_218 = 0;
      uStack_210 = 0;
      uStack_208 = 0;
      uStack_200 = 0;
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      uStack_1e8 = 0;
      uStack_1e0 = 0;
      uVar8 = 0;
      lStack_250 = 0;
      uStack_258 = 0;
      lVar9 = 0;
      uStack_240 = 0;
      uVar6 = 0;
    }
    if (*(int *)(param_2 + _DAT_113803420) == 10) {
      FUN_101881cb4();
    }
    else {
      puVar7 = *(undefined8 **)(param_2 + _DAT_113803430);
    }
    lStack_238 = 0;
    if (puVar7 != (undefined8 *)0x0 || iVar1 != 0x16) {
      lStack_238 = lStack_1c8;
    }
    uStack_228 = uStack_1b8;
    uStack_230 = uStack_1c0;
    if (!bVar4) {
      uStack_228 = uVar6;
      uStack_230 = uVar8;
    }
    uStack_248 = uStack_1d0;
    lStack_220 = lStack_1b0;
    if (!bVar4) {
      lStack_220 = lVar9;
    }
    func_0x00010187bc08(&uStack_258);
    uStack_168 = uStack_1f0;
    uStack_170 = uStack_1f8;
    uStack_158 = uStack_1e0;
    uStack_160 = uStack_1e8;
    uStack_150 = CONCAT11(uStack_150._1_1_,uStack_1d8);
    uStack_1a8 = uStack_230;
    lStack_1b0 = lStack_238;
    lStack_198 = lStack_220;
    uStack_1a0 = uStack_228;
    uStack_188 = uStack_210;
    uStack_190 = uStack_218;
    uStack_178 = uStack_200;
    uStack_180 = uStack_208;
    lStack_1c8 = lStack_250;
    uStack_1d0 = uStack_258;
    uStack_1b8 = uStack_240;
    uStack_1c0 = uStack_248;
    func_0x00010187bc10(&uStack_1d0);
  }
  param_1[0xd] = uStack_168;
  param_1[0xc] = uStack_170;
  param_1[0xf] = uStack_158;
  param_1[0xe] = uStack_160;
  *(undefined2 *)(param_1 + 0x10) = uStack_150;
  param_1[5] = uStack_1a8;
  param_1[4] = lStack_1b0;
  param_1[7] = lStack_198;
  param_1[6] = uStack_1a0;
  param_1[9] = uStack_188;
  param_1[8] = uStack_190;
  param_1[0xb] = uStack_178;
  param_1[10] = uStack_180;
  param_1[1] = lStack_1c8;
  *param_1 = uStack_1d0;
  param_1[3] = uStack_1b8;
  param_1[2] = uStack_1c0;
  return;
}



/* Entry: 10187a5a8; end: 10187a5bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10187a5a8(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lVar10;
  undefined8 uStack_258;
  long lStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long lStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined2 uStack_150;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uStack_d8 = param_3[0xd];
  uStack_e0 = param_3[0xc];
  uStack_c8 = param_3[0xf];
  uStack_d0 = param_3[0xe];
  uStack_c0 = *(undefined1 *)(param_3 + 0x10);
  uStack_118 = param_3[5];
  uStack_120 = param_3[4];
  lStack_108 = param_3[7];
  uStack_110 = param_3[6];
  uStack_f8 = param_3[9];
  uStack_100 = param_3[8];
  uStack_e8 = param_3[0xb];
  uStack_f0 = param_3[10];
  lStack_138 = param_3[1];
  uStack_140 = *param_3;
  uStack_128 = param_3[3];
  uStack_130 = param_3[2];
  FUN_101881b6c();
  func_0x000107c6142c();
  lVar10 = param_3[2];
  func_0x000107c6142c(param_3);
  if (lVar10 == 0) {
    func_0x00010187bc18(&uStack_1d0);
  }
  else {
    uVar6 = param_2 + _DAT_113803418;
    (*pcVar1)();
    iVar2 = *(int *)(param_2 + _DAT_113803428);
    func_0x0001000d224c(&uStack_1d0);
    lVar10 = lStack_1c8;
    uVar9 = uStack_1d0;
    uVar7 = uStack_1d0;
    func_0x000107c614f0(uStack_1d0);
    (**(code **)(lVar10 + 8))
              (&uStack_258,&UNK_11040a2f0,&UNK_1107383c8,&PTR_DAT_11304a4b0,uVar7,lVar10);
    func_0x000107c615e8(uVar9);
    if ((((byte)uStack_258 & 1) == 0) && ((uVar6 & 1) == 0)) {
      uVar9 = 0;
      bVar5 = iVar2 == 0x16;
    }
    else {
      if ((uVar6 & 1) == 0) {
        uVar9 = 0;
      }
      else {
        func_0x0001000d224c(&uStack_1d0);
        uVar7 = uStack_1d0;
        uVar9 = uStack_1d0;
        func_0x000107c4260c(uStack_1d0);
        func_0x000107c615e8(uVar7);
      }
      bVar5 = true;
    }
    FUN_10187a5bc(&uStack_1d0,param_2,uVar9);
    lVar4 = lStack_1b0;
    uVar3 = uStack_1b8;
    uVar7 = uStack_1c0;
    lVar10 = lStack_1c8;
    uVar9 = uStack_1d0;
    FUN_10187a6d8(&uStack_1d0,uStack_1d0,lStack_1c8,uStack_1c0,uStack_1b8,lStack_1b0,uStack_1a8,
                  uStack_1a0);
    func_0x000107c6142c(lVar10);
    func_0x000107c6142c(uVar9);
    FUN_10187bbc0(uVar7,uVar3);
    FUN_10187bbc0(lVar4,uStack_1a8);
    func_0x000107c6142c(uStack_1a0);
    puVar8 = &uStack_140;
    FUN_10187bbec();
    uStack_218 = uStack_100;
    uStack_210 = uStack_f8;
    uStack_208 = uStack_f0;
    uStack_200 = uStack_e8;
    uStack_1f8 = uStack_e0;
    uStack_1f0 = uStack_d8;
    uStack_1e8 = uStack_d0;
    uStack_1e0 = uStack_c8;
    uVar9 = uStack_118;
    lStack_250 = lStack_138;
    uStack_258 = uStack_140;
    lVar10 = lStack_108;
    uStack_240 = uStack_128;
    uVar7 = uStack_110;
    if ((int)puVar8 == 1) {
      uStack_218 = 0;
      uStack_210 = 0;
      uStack_208 = 0;
      uStack_200 = 0;
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      uStack_1e8 = 0;
      uStack_1e0 = 0;
      uVar9 = 0;
      lStack_250 = 0;
      uStack_258 = 0;
      lVar10 = 0;
      uStack_240 = 0;
      uVar7 = 0;
    }
    if (*(int *)(param_2 + _DAT_113803420) == 10) {
      FUN_101881cb4();
    }
    else {
      puVar8 = *(undefined8 **)(param_2 + _DAT_113803430);
    }
    lStack_238 = 0;
    if (puVar8 != (undefined8 *)0x0 || iVar2 != 0x16) {
      lStack_238 = lStack_1c8;
    }
    uStack_228 = uStack_1b8;
    uStack_230 = uStack_1c0;
    if (!bVar5) {
      uStack_228 = uVar7;
      uStack_230 = uVar9;
    }
    uStack_248 = uStack_1d0;
    lStack_220 = lStack_1b0;
    if (!bVar5) {
      lStack_220 = lVar10;
    }
    func_0x00010187bc08(&uStack_258);
    uStack_168 = uStack_1f0;
    uStack_170 = uStack_1f8;
    uStack_158 = uStack_1e0;
    uStack_160 = uStack_1e8;
    uStack_150 = CONCAT11(uStack_150._1_1_,uStack_1d8);
    uStack_1a8 = uStack_230;
    lStack_1b0 = lStack_238;
    lStack_198 = lStack_220;
    uStack_1a0 = uStack_228;
    uStack_188 = uStack_210;
    uStack_190 = uStack_218;
    uStack_178 = uStack_200;
    uStack_180 = uStack_208;
    lStack_1c8 = lStack_250;
    uStack_1d0 = uStack_258;
    uStack_1b8 = uStack_240;
    uStack_1c0 = uStack_248;
    func_0x00010187bc10(&uStack_1d0);
  }
  param_1[0xd] = uStack_168;
  param_1[0xc] = uStack_170;
  param_1[0xf] = uStack_158;
  param_1[0xe] = uStack_160;
  *(undefined2 *)(param_1 + 0x10) = uStack_150;
  param_1[5] = uStack_1a8;
  param_1[4] = lStack_1b0;
  param_1[7] = lStack_198;
  param_1[6] = uStack_1a0;
  param_1[9] = uStack_188;
  param_1[8] = uStack_190;
  param_1[0xb] = uStack_178;
  param_1[10] = uStack_180;
  param_1[1] = lStack_1c8;
  *param_1 = uStack_1d0;
  param_1[3] = uStack_1b8;
  param_1[2] = uStack_1c0;
  return;
}



/* Entry: 10187a5bc; end: 10187a6d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10187a5bc(ulong *param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  iVar1 = *(int *)(param_2 + _DAT_113803420);
  uVar3 = param_3;
  if (iVar1 == 10) {
    FUN_101881d1c();
    if (param_2 == 0) {
      FUN_101881b6c();
      uVar4 = uVar3;
LAB_10187a66c:
      uVar6 = 0;
      uVar3 = uVar4;
      uVar5 = 0;
LAB_10187a674:
      uVar7 = 0;
      uVar2 = 0;
      if ((param_3 & 1) != 0) goto LAB_10187a680;
    }
    else {
      uVar6 = param_2;
      uVar5 = uVar3;
      FUN_101881e00();
      uVar7 = uVar6;
      uVar2 = uVar5;
      FUN_101881fc8();
      if ((param_3 & 1) != 0) {
        uVar4 = uVar7;
        FUN_1018820d8();
        goto LAB_10187a6ac;
      }
    }
LAB_10187a6a8:
    uVar4 = 0;
  }
  else {
    FUN_101881b6c();
    uVar4 = uVar3;
    if (iVar1 != 3) {
      if (iVar1 != 6) goto LAB_10187a66c;
      uVar6 = param_2;
      FUN_101882274();
      uVar5 = uVar4;
      goto LAB_10187a674;
    }
    uVar7 = param_2;
    func_0x000101882438();
    uVar5 = 0;
    uVar6 = 0;
    uVar2 = uVar4;
    if ((param_3 & 1) == 0) goto LAB_10187a6a8;
LAB_10187a680:
    func_0x00010188244c();
    func_0x000107c6142c();
  }
LAB_10187a6ac:
  *param_1 = param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar6;
  param_1[3] = uVar5;
  param_1[4] = uVar7;
  param_1[5] = uVar2;
  param_1[6] = uVar4;
  return;
}



/* Entry: 10187a6d8; end: 10187bbbf;  */

void FUN_10187a6d8(undefined8 *param_1,undefined8 param_2,long param_3,ulong param_4,long param_5,
                  undefined8 param_6,long param_7,undefined8 param_8,long param_9)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  long lVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  long lStack_250;
  undefined8 uStack_248;
  long lStack_240;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long lStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  ulong uStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1a0;
  long lStack_180;
  long lStack_168;
  long lStack_158;
  long lStack_148;
  ulong uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  
  uVar11 = param_4;
  if (*(long *)(param_3 + 0x10) == 0) {
    puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (*(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10) != 0) goto LAB_10187a780;
LAB_10187a75c:
    uStack_a8 = 0;
    lStack_a0 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x000107c61434(param_3);
    lVar2 = 1;
    func_0x0001018815d4();
    puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if ((uVar11 & 1) != 0) {
      puVar14 = *(undefined **)(*(long *)(param_3 + 0x38) + lVar2 * 8);
      func_0x000107c61434(puVar14);
    }
    func_0x000107c6142c(param_3);
    if (*(long *)(puVar14 + 0x10) == 0) goto LAB_10187a75c;
LAB_10187a780:
    lStack_a0 = *(long *)(puVar14 + 0x20);
    uStack_a8 = *(ulong *)(puVar14 + 0x28);
    uStack_b0 = *(undefined8 *)(puVar14 + 0x30);
    func_0x000107c61174();
    func_0x000107c61174(lStack_a0);
    func_0x000107c61174(uStack_a8);
  }
  func_0x000107c6142c(puVar14);
  if (*(long *)(param_3 + 0x10) == 0) {
    puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (*(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10) != 0) goto LAB_10187a814;
LAB_10187a7f0:
    lVar2 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
  }
  else {
    func_0x000107c61434(param_3);
    lVar2 = 3;
    func_0x0001018815d4();
    puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if ((uVar11 & 1) != 0) {
      puVar14 = *(undefined **)(*(long *)(param_3 + 0x38) + lVar2 * 8);
      func_0x000107c61434(puVar14);
    }
    func_0x000107c6142c(param_3);
    if (*(long *)(puVar14 + 0x10) == 0) goto LAB_10187a7f0;
LAB_10187a814:
    lVar2 = *(long *)(puVar14 + 0x20);
    uStack_1c8 = *(ulong *)(puVar14 + 0x28);
    uStack_1d0 = *(undefined8 *)(puVar14 + 0x30);
    func_0x000107c61174();
    func_0x000107c61174(lVar2);
    func_0x000107c61174(uStack_1c8);
  }
  func_0x000107c6142c(puVar14);
  puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (*(long *)(param_3 + 0x10) != 0) {
    func_0x000107c61434(param_3);
    lVar3 = 4;
    func_0x0001018815d4();
    puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if ((uVar11 & 1) != 0) {
      puVar14 = *(undefined **)(*(long *)(param_3 + 0x38) + lVar3 * 8);
      func_0x000107c61434(puVar14);
    }
    func_0x000107c6142c(param_3);
  }
  if (*(long *)(puVar14 + 0x10) == 0) {
    lStack_d8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
  }
  else {
    lStack_d8 = *(long *)(puVar14 + 0x20);
    uStack_e8 = *(ulong *)(puVar14 + 0x28);
    uStack_f0 = *(undefined8 *)(puVar14 + 0x30);
    func_0x000107c61174();
    func_0x000107c61174(lStack_d8);
    func_0x000107c61174(uStack_e8);
  }
  func_0x000107c6142c(puVar14);
  if (*(long *)(param_3 + 0x10) == 0) {
    puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (*(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10) != 0) goto LAB_10187a93c;
LAB_10187a918:
    lStack_158 = 0;
    uStack_220 = 0;
    uStack_218 = 0;
  }
  else {
    func_0x000107c61434(param_3);
    lVar3 = 6;
    func_0x0001018815d4();
    puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if ((uVar11 & 1) != 0) {
      puVar14 = *(undefined **)(*(long *)(param_3 + 0x38) + lVar3 * 8);
      func_0x000107c61434(puVar14);
    }
    func_0x000107c6142c(param_3);
    if (*(long *)(puVar14 + 0x10) == 0) goto LAB_10187a918;
LAB_10187a93c:
    lStack_158 = *(long *)(puVar14 + 0x20);
    uStack_218 = *(undefined8 *)(puVar14 + 0x28);
    uStack_220 = *(undefined8 *)(puVar14 + 0x30);
    func_0x000107c61174();
    func_0x000107c61174(lStack_158);
    func_0x000107c61174(uStack_218);
  }
  func_0x000107c6142c(puVar14);
  if (*(long *)(param_3 + 0x10) == 0) {
    puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (*(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10) != 0) goto LAB_10187a9d0;
LAB_10187a9ac:
    lVar3 = 0;
    uStack_268 = 0;
    uStack_260 = 0;
  }
  else {
    func_0x000107c61434(param_3);
    lVar3 = 7;
    func_0x0001018815d4();
    puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if ((uVar11 & 1) != 0) {
      puVar14 = *(undefined **)(*(long *)(param_3 + 0x38) + lVar3 * 8);
      func_0x000107c61434(puVar14);
    }
    func_0x000107c6142c(param_3);
    if (*(long *)(puVar14 + 0x10) == 0) goto LAB_10187a9ac;
LAB_10187a9d0:
    lVar3 = *(long *)(puVar14 + 0x20);
    uStack_260 = *(undefined8 *)(puVar14 + 0x28);
    uStack_268 = *(undefined8 *)(puVar14 + 0x30);
    func_0x000107c61174();
    func_0x000107c61174(lVar3);
    func_0x000107c61174(uStack_260);
  }
  func_0x000107c6142c(puVar14);
  if (*(long *)(param_3 + 0x10) == 0) {
    puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (*(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10) != 0) goto LAB_10187aa60;
LAB_10187aa3c:
    uStack_c0 = 0;
    lStack_b8 = 0;
    uStack_c8 = 0;
  }
  else {
    func_0x000107c61434(param_3);
    lVar4 = 8;
    func_0x0001018815d4();
    puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if ((uVar11 & 1) != 0) {
      puVar14 = *(undefined **)(*(long *)(param_3 + 0x38) + lVar4 * 8);
      func_0x000107c61434(puVar14);
    }
    func_0x000107c6142c(param_3);
    if (*(long *)(puVar14 + 0x10) == 0) goto LAB_10187aa3c;
LAB_10187aa60:
    lStack_b8 = *(long *)(puVar14 + 0x20);
    uStack_c0 = *(ulong *)(puVar14 + 0x28);
    uStack_c8 = *(undefined8 *)(puVar14 + 0x30);
    func_0x000107c61174();
    func_0x000107c61174(lStack_b8);
    func_0x000107c61174(uStack_c0);
  }
  func_0x000107c6142c(puVar14);
  if (*(long *)(param_3 + 0x10) == 0) {
    lVar4 = *(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
    puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar4 != 0) goto LAB_10187aaf8;
LAB_10187aad0:
    lStack_e0 = 0;
    uStack_140 = 0;
    uStack_f8 = 0;
  }
  else {
    func_0x000107c61434(param_3);
    lVar4 = 2;
    func_0x0001018815d4();
    puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if ((uVar11 & 1) != 0) {
      puVar14 = *(undefined **)(*(long *)(param_3 + 0x38) + lVar4 * 8);
      func_0x000107c61434(puVar14);
    }
    func_0x000107c6142c(param_3);
    lVar4 = *(long *)(puVar14 + 0x10);
    if (lVar4 == 0) goto LAB_10187aad0;
LAB_10187aaf8:
    lStack_e0 = *(long *)(puVar14 + lVar4 * 0x18 + 8);
    uStack_140 = *(ulong *)(puVar14 + lVar4 * 0x18 + 0x10);
    uStack_f8 = *(undefined8 *)(puVar14 + lVar4 * 0x18 + 0x18);
    func_0x000107c61174();
    func_0x000107c61174(lStack_e0);
    func_0x000107c61174(uStack_140);
  }
  func_0x000107c6142c(puVar14);
  if (*(long *)(param_3 + 0x10) == 0) {
    uVar23 = *(ulong *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
    puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000107c61434(param_3);
    lVar4 = 0xc;
    func_0x0001018815d4();
    puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if ((uVar11 & 1) != 0) {
      puVar14 = *(undefined **)(*(long *)(param_3 + 0x38) + lVar4 * 8);
      func_0x000107c61434(puVar14);
    }
    func_0x000107c6142c(param_3);
    uVar23 = *(ulong *)(puVar14 + 0x10);
  }
  if (uVar23 != 0) {
    uVar24 = 0;
    puVar18 = (undefined8 *)(puVar14 + 0x30);
    do {
      if (*(ulong *)(puVar14 + 0x10) <= uVar24) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10187bb0c);
        (*pcVar1)();
      }
      lVar4 = puVar18[-2];
      uVar20 = puVar18[-1];
      uVar28 = *puVar18;
      uVar16 = uVar28;
      func_0x000107c61174(uVar28);
      func_0x000107c61174();
      func_0x000107c61174();
      uVar21 = uVar20;
      func_0x000107c30b34();
      if ((uVar21 & 1) != 0) {
        func_0x000107c6142c(puVar14);
        goto LAB_10187ac24;
      }
      func_0x000107c61170(uVar16);
      func_0x000107c61170(uVar20);
      func_0x000107c61170(lVar4);
      uVar24 = uVar24 + 1;
      puVar18 = puVar18 + 3;
    } while (uVar23 != uVar24);
  }
  func_0x000107c6142c(puVar14);
  lVar4 = 0;
  uVar20 = 0;
  uVar28 = 0;
LAB_10187ac24:
  if (*(long *)(param_3 + 0x10) == 0) {
    uVar23 = *(ulong *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
    puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000107c61434(param_3);
    lVar5 = 10;
    func_0x0001018815d4();
    puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if ((uVar11 & 1) != 0) {
      puVar14 = *(undefined **)(*(long *)(param_3 + 0x38) + lVar5 * 8);
      func_0x000107c61434(puVar14);
    }
    func_0x000107c6142c(param_3);
    uVar23 = *(ulong *)(puVar14 + 0x10);
  }
  if (uVar23 != 0) {
    uVar24 = 0;
    puVar18 = (undefined8 *)(puVar14 + 0x30);
    do {
      if (*(ulong *)(puVar14 + 0x10) <= uVar24) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10187bb10);
        (*pcVar1)();
      }
      lVar5 = puVar18[-2];
      uVar21 = puVar18[-1];
      uVar29 = *puVar18;
      uVar16 = uVar29;
      func_0x000107c61174(uVar29);
      func_0x000107c61174();
      func_0x000107c61174();
      uVar22 = uVar21;
      func_0x000107c30b28();
      if ((uVar22 & 1) != 0) {
        func_0x000107c6142c(puVar14);
        goto LAB_10187ad14;
      }
      func_0x000107c61170(uVar16);
      func_0x000107c61170(uVar21);
      func_0x000107c61170(lVar5);
      uVar24 = uVar24 + 1;
      puVar18 = puVar18 + 3;
    } while (uVar23 != uVar24);
  }
  func_0x000107c6142c(puVar14);
  lVar5 = 0;
  uVar21 = 0;
  uVar29 = 0;
LAB_10187ad14:
  if (*(long *)(param_3 + 0x10) == 0) {
    uVar23 = *(ulong *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
    puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000107c61434(param_3);
    lVar6 = 10;
    func_0x0001018815d4();
    puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if ((uVar11 & 1) != 0) {
      puVar14 = *(undefined **)(*(long *)(param_3 + 0x38) + lVar6 * 8);
      func_0x000107c61434(puVar14);
    }
    func_0x000107c6142c(param_3);
    uVar23 = *(ulong *)(puVar14 + 0x10);
  }
  if (uVar23 != 0) {
    uVar24 = 0;
    puVar18 = (undefined8 *)(puVar14 + 0x30);
    do {
      if (*(ulong *)(puVar14 + 0x10) <= uVar24) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10187bb14);
        (*pcVar1)();
      }
      lStack_148 = puVar18[-2];
      uVar22 = puVar18[-1];
      uVar15 = *puVar18;
      uVar16 = uVar15;
      func_0x000107c61174(uVar15);
      func_0x000107c61174();
      func_0x000107c61174();
      uVar17 = uVar22;
      func_0x000107c30b28();
      if ((uVar17 & 1) == 0) {
        func_0x000107c6142c(puVar14);
        goto LAB_10187ae08;
      }
      func_0x000107c61170(uVar16);
      func_0x000107c61170(uVar22);
      func_0x000107c61170(lStack_148);
      uVar24 = uVar24 + 1;
      puVar18 = puVar18 + 3;
    } while (uVar23 != uVar24);
  }
  func_0x000107c6142c(puVar14);
  lStack_148 = 0;
  uVar22 = 0;
  uVar15 = 0;
LAB_10187ae08:
  puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (*(long *)(param_3 + 0x10) != 0) {
    func_0x000107c61434(param_3);
    lVar6 = 9;
    func_0x0001018815d4();
    puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if ((uVar11 & 1) != 0) {
      puVar14 = *(undefined **)(*(long *)(param_3 + 0x38) + lVar6 * 8);
      func_0x000107c61434(puVar14);
    }
    func_0x000107c6142c(param_3);
  }
  uVar23 = *(ulong *)(puVar14 + 0x10);
  if (uVar23 != 0) {
    uVar24 = 0;
    puVar18 = (undefined8 *)(puVar14 + 0x30);
    do {
      if (*(ulong *)(puVar14 + 0x10) <= uVar24) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10187bb18);
        (*pcVar1)();
      }
      lVar6 = puVar18[-2];
      uVar17 = puVar18[-1];
      uVar26 = *puVar18;
      uVar16 = uVar26;
      func_0x000107c61174(uVar26);
      func_0x000107c61174();
      func_0x000107c61174();
      uVar25 = uVar17;
      func_0x000107c30b28();
      if ((uVar25 & 1) != 0) {
        func_0x000107c6142c(puVar14);
        goto LAB_10187aef0;
      }
      func_0x000107c61170(uVar16);
      func_0x000107c61170(uVar17);
      func_0x000107c61170(lVar6);
      uVar24 = uVar24 + 1;
      puVar18 = puVar18 + 3;
    } while (uVar23 != uVar24);
  }
  func_0x000107c6142c(puVar14);
  lVar6 = 0;
  uVar17 = 0;
  uVar26 = 0;
LAB_10187aef0:
  lVar30 = *(long *)(param_4 + 0x10);
  if (lVar30 == 0) {
    uVar27 = 0;
    uVar24 = 0;
    lStack_240 = 0;
    lStack_1f8 = 0;
    uVar23 = 0;
    uStack_208 = 0;
    lVar19 = 0;
    uVar25 = 0;
    uVar16 = 0;
  }
  else {
    puVar18 = (undefined8 *)(param_4 + 0x30);
    lVar19 = lVar30;
    do {
      lStack_1f8 = puVar18[-2];
      uVar23 = puVar18[-1];
      uStack_208 = *puVar18;
      uVar16 = uStack_208;
      func_0x000107c61174(uStack_208);
      func_0x000107c61174();
      func_0x000107c61174();
      uVar24 = uVar23;
      func_0x000107c30b24();
      if ((int)uVar24 == 4) goto LAB_10187afa0;
      func_0x000107c61170(uVar16);
      func_0x000107c61170(uVar23);
      func_0x000107c61170(lStack_1f8);
      lVar19 = lVar19 + -1;
      puVar18 = puVar18 + 3;
    } while (lVar19 != 0);
    uStack_208 = 0;
    uVar23 = 0;
    lStack_1f8 = 0;
LAB_10187afa0:
    lVar19 = lVar30;
    puVar18 = (undefined8 *)(param_4 + 0x30);
    do {
      lStack_240 = puVar18[-2];
      uVar24 = puVar18[-1];
      uVar27 = *puVar18;
      uVar16 = uVar27;
      func_0x000107c61174(uVar27);
      func_0x000107c61174();
      func_0x000107c61174();
      uVar25 = uVar24;
      func_0x000107c30b24();
      if ((int)uVar25 == 5) goto LAB_10187b018;
      func_0x000107c61170(uVar16);
      func_0x000107c61170(uVar24);
      func_0x000107c61170(lStack_240);
      lVar19 = lVar19 + -1;
      puVar18 = puVar18 + 3;
    } while (lVar19 != 0);
    uVar27 = 0;
    uVar24 = 0;
    lStack_240 = 0;
LAB_10187b018:
    puVar18 = (undefined8 *)(param_4 + 0x30);
    do {
      lVar19 = puVar18[-2];
      uVar25 = puVar18[-1];
      uVar16 = *puVar18;
      uVar32 = uVar16;
      func_0x000107c61174(uVar16);
      func_0x000107c61174();
      func_0x000107c61174();
      uVar7 = uVar25;
      func_0x000107c30b24();
      if ((int)uVar7 == 6) goto LAB_10187b088;
      func_0x000107c61170(uVar32);
      func_0x000107c61170(uVar25);
      func_0x000107c61170(lVar19);
      lVar30 = lVar30 + -1;
      puVar18 = puVar18 + 3;
    } while (lVar30 != 0);
    lVar19 = 0;
    uVar25 = 0;
    uVar16 = 0;
  }
LAB_10187b088:
  if (param_5 == 0) {
    uStack_200 = 0;
    lStack_180 = 0;
    uStack_248 = 0;
    lStack_1c0 = 0;
    uStack_1d8 = 0;
    lStack_1e0 = 0;
    if (param_7 != 0) goto LAB_10187b298;
LAB_10187b0ec:
    lStack_168 = 0;
    lStack_250 = 0;
    lStack_1e8 = 0;
    uStack_228 = 0;
  }
  else {
    if (*(long *)(param_5 + 0x10) == 0) {
      puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (*(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10) != 0) goto LAB_10187b18c;
LAB_10187b110:
      func_0x000107c6142c(puVar14);
      lStack_180 = 0;
      uStack_248 = 0;
      if (*(long *)(param_5 + 0x10) != 0) goto LAB_10187b1b8;
LAB_10187b128:
      puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (*(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10) != 0) goto LAB_10187b1fc;
LAB_10187b138:
      func_0x000107c6142c(puVar14);
      lStack_1c0 = 0;
      uStack_1d8 = 0;
      if (*(long *)(param_5 + 0x10) != 0) goto LAB_10187b228;
LAB_10187b150:
      puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (*(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10) != 0) goto LAB_10187b26c;
LAB_10187b160:
      func_0x000107c6142c(puVar14);
      lStack_1e0 = 0;
      uStack_200 = 0;
    }
    else {
      func_0x000107c61434(param_5);
      lVar30 = 1;
      func_0x0001018815d0();
      puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if ((uVar11 & 1) != 0) {
        puVar14 = *(undefined **)(*(long *)(param_5 + 0x38) + lVar30 * 8);
        func_0x000107c61434(puVar14);
      }
      func_0x000107c6142c(param_5);
      if (*(long *)(puVar14 + 0x10) == 0) goto LAB_10187b110;
LAB_10187b18c:
      lStack_180 = *(long *)(puVar14 + 0x20);
      uStack_248 = *(undefined8 *)(puVar14 + 0x28);
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c6142c(puVar14);
      if (*(long *)(param_5 + 0x10) == 0) goto LAB_10187b128;
LAB_10187b1b8:
      func_0x000107c61434(param_5);
      lVar30 = 2;
      func_0x0001018815d0();
      puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if ((uVar11 & 1) != 0) {
        puVar14 = *(undefined **)(*(long *)(param_5 + 0x38) + lVar30 * 8);
        func_0x000107c61434(puVar14);
      }
      func_0x000107c6142c(param_5);
      if (*(long *)(puVar14 + 0x10) == 0) goto LAB_10187b138;
LAB_10187b1fc:
      lStack_1c0 = *(long *)(puVar14 + 0x20);
      uStack_1d8 = *(undefined8 *)(puVar14 + 0x28);
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c6142c(puVar14);
      if (*(long *)(param_5 + 0x10) == 0) goto LAB_10187b150;
LAB_10187b228:
      func_0x000107c61434(param_5);
      lVar30 = 4;
      func_0x0001018815d0();
      puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if ((uVar11 & 1) != 0) {
        puVar14 = *(undefined **)(*(long *)(param_5 + 0x38) + lVar30 * 8);
        func_0x000107c61434(puVar14);
      }
      func_0x000107c6142c(param_5);
      if (*(long *)(puVar14 + 0x10) == 0) goto LAB_10187b160;
LAB_10187b26c:
      lStack_1e0 = *(long *)(puVar14 + 0x20);
      uStack_200 = *(undefined8 *)(puVar14 + 0x28);
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c6142c(puVar14);
    }
    if (param_7 == 0) goto LAB_10187b0ec;
LAB_10187b298:
    if (*(long *)(param_7 + 0x10) == 0) {
      puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (*(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10) != 0) goto LAB_10187b318;
LAB_10187b2dc:
      func_0x000107c6142c(puVar14);
      lStack_1e8 = 0;
      uStack_228 = 0;
      lVar30 = *(long *)(param_7 + 0x10);
      puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      func_0x000107c61434(param_7);
      lVar30 = 10;
      func_0x0001018815c8();
      puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if ((uVar11 & 1) != 0) {
        puVar14 = *(undefined **)(*(long *)(param_7 + 0x38) + lVar30 * 8);
        func_0x000107c61434(puVar14);
      }
      func_0x000107c6142c(param_7);
      if (*(long *)(puVar14 + 0x10) == 0) goto LAB_10187b2dc;
LAB_10187b318:
      lStack_1e8 = *(long *)(puVar14 + 0x20);
      uStack_228 = *(undefined8 *)(puVar14 + 0x28);
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c6142c(puVar14);
      lVar30 = *(long *)(param_7 + 0x10);
      puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = puVar14;
    if (lVar30 != 0) {
      func_0x000107c61434(param_7);
      lVar30 = 7;
      func_0x0001018815c8();
      puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if ((uVar11 & 1) != 0) {
        puVar14 = *(undefined **)(*(long *)(param_7 + 0x38) + lVar30 * 8);
        func_0x000107c61434(puVar14);
      }
      func_0x000107c6142c(param_7);
    }
    plVar12 = (long *)(puVar14 + 0x10);
    if (*plVar12 == 0) {
      func_0x000107c6142c(puVar14);
      lStack_168 = 0;
      lStack_250 = 0;
    }
    else {
      lStack_168 = plVar12[*plVar12 * 2];
      lStack_250 = (plVar12 + *plVar12 * 2)[1];
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c6142c(puVar14);
    }
  }
  lStack_d0 = lStack_a0;
  uStack_110 = uStack_b0;
  uStack_108 = uStack_a8;
  if (lStack_a0 == 0) {
    if (lVar6 == 0) {
      lStack_d0 = 0;
      uStack_110 = 0;
      uStack_108 = 0;
    }
    else {
      func_0x000107c61174(uVar26);
      func_0x000107c61174(lVar6);
      func_0x000107c61174(uVar17);
      uStack_110 = uVar26;
      uStack_108 = uVar17;
      lStack_d0 = lVar6;
    }
  }
  uStack_118 = uStack_c0;
  uStack_120 = uStack_c8;
  lVar30 = lStack_b8;
  if (lStack_b8 == 0) {
    if (lVar5 != 0) {
      func_0x000107c61174(uVar29);
      func_0x000107c61174(lVar5);
      func_0x000107c61174(uVar21);
      lVar30 = lVar5;
      uStack_120 = uVar29;
      uStack_118 = uVar21;
      goto LAB_10187b464;
    }
    if (lVar3 == 0) {
      if ((((lStack_1e8 == 0) && (lStack_1c0 == 0)) && (lStack_1e0 == 0)) && (lVar4 == 0)) {
        uStack_120 = 0;
        uStack_118 = 0;
        lVar30 = 0;
      }
      else if (lStack_d8 == 0) {
        func_0x000101878638(lVar2,uStack_1c8,uStack_1d0);
        uStack_120 = uStack_1d0;
        uStack_118 = uStack_1c8;
        lVar30 = lVar2;
      }
      else {
        func_0x000107c61174(uStack_f0);
        func_0x000107c61174(lStack_d8);
        func_0x000107c61174(uStack_e8);
        uStack_120 = uStack_f0;
        uStack_118 = uStack_e8;
        lVar30 = lStack_d8;
      }
      goto LAB_10187b9c8;
    }
    if (lStack_148 == 0) {
      if (lStack_1f8 == 0) {
        func_0x000101878638(lStack_240,uVar24,uVar27);
        lVar30 = lStack_240;
        uStack_120 = uVar27;
        uStack_118 = uVar24;
      }
      else {
        func_0x000107c61174(uStack_208);
        func_0x000107c61174(lStack_1f8);
        func_0x000107c61174(uVar23);
        uStack_120 = uStack_208;
        lVar30 = lStack_1f8;
        uStack_118 = uVar23;
      }
    }
    else {
      func_0x000107c61174(uVar15);
      func_0x000107c61174(lStack_148);
      func_0x000107c61174(uVar22);
      lVar30 = lStack_148;
      uStack_120 = uVar15;
      uStack_118 = uVar22;
    }
LAB_10187b470:
    uStack_128 = uStack_e8;
    uStack_130 = uStack_f0;
    lStack_138 = lStack_d8;
    uVar32 = param_2;
    if (lStack_d8 == 0) {
      if (lVar2 == 0) {
        func_0x000101878638(lVar6,uVar17,uVar26);
        lStack_138 = lVar6;
        uVar32 = param_2;
        uStack_130 = uVar26;
        uStack_128 = uVar17;
      }
      else {
        func_0x000107c61174(uStack_1d0);
        func_0x000107c61174(lVar2);
        func_0x000107c61174(uStack_1c8);
        uStack_130 = uStack_1d0;
        uStack_128 = uStack_1c8;
        lStack_138 = lVar2;
        uVar32 = param_2;
      }
    }
    if (lStack_e0 == 0) {
      func_0x000101878638(lStack_d8,uStack_e8,uStack_f0);
      param_2 = uVar32;
      if (lStack_148 == 0) goto LAB_10187ba04;
LAB_10187b560:
      uStack_1a0 = uVar15;
      func_0x000107c61174();
      lVar13 = lStack_148;
      func_0x000107c61174(lStack_148);
      uVar11 = uVar22;
      func_0x000107c61174(uVar22);
      uStack_270 = uVar15;
    }
    else {
      func_0x000101878638(lStack_d8,uStack_e8,uStack_f0);
      uStack_1a0 = uStack_f8;
      uStack_270 = uStack_f8;
      uVar11 = uStack_140;
      lVar13 = lStack_e0;
    }
    func_0x000101878638(lStack_a0,uStack_a8,uStack_b0);
    func_0x000101878638(lStack_b8,uStack_c0,uStack_c8);
    func_0x000101878638(lStack_e0,uStack_140,uStack_f8);
    func_0x0001018868e4(lVar13,uVar11,uStack_270);
    param_2 = uVar32;
    func_0x000107c61170(uStack_1a0);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(lVar13);
  }
  else {
LAB_10187b464:
    if (lVar3 != 0) goto LAB_10187b470;
LAB_10187b9c8:
    if ((((lStack_158 != 0) || (lStack_168 != 0)) ||
        ((lStack_180 != 0 || ((param_9 != 0 || (lVar30 != 0)))))) || (lStack_e0 != 0))
    goto LAB_10187b470;
    lStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    lVar30 = 0;
    uVar32 = param_2;
    if (lStack_148 != 0) goto LAB_10187b560;
LAB_10187ba04:
    lVar13 = lStack_1c0;
    uVar10 = uStack_1d8;
    uVar32 = param_2;
    if (lStack_1c0 == 0) {
      if (lStack_1e0 == 0) {
        if (lStack_1e8 == 0) {
          if (lStack_1f8 == 0) {
            if (lVar19 == 0) {
              func_0x000101878638(lStack_a0,uStack_a8,uStack_b0);
              func_0x000101878638(lStack_b8,uStack_c0,uStack_c8);
              lStack_1f8 = 0;
              uVar32 = 0;
              goto LAB_10187b5ec;
            }
            uStack_1a0 = uVar16;
            func_0x000107c61174();
            lVar13 = lVar19;
            func_0x000107c61174(lVar19);
            uVar11 = uVar25;
            func_0x000107c61174(uVar25);
            uVar32 = uVar16;
          }
          else {
            uStack_1a0 = uStack_208;
            uVar11 = uVar23;
            uVar32 = uStack_208;
            lVar13 = lStack_1f8;
          }
          func_0x000101878638(lStack_1f8,uVar23,uStack_208);
          func_0x000101878638(lStack_a0,uStack_a8,uStack_b0);
          func_0x000101878638(lStack_b8,uStack_c0,uStack_c8);
          func_0x0001018868e4(lVar13,uVar11,uVar32);
          uVar10 = param_2;
          func_0x000107c61170(uStack_1a0);
          func_0x000107c61170(uVar11);
          uVar32 = param_2;
        }
        else {
          func_0x000101878638(lStack_a0,uStack_a8,uStack_b0);
          func_0x000101878638(lStack_b8,uStack_c0,uStack_c8);
          func_0x000100cbd4f4(lStack_1e8,uStack_228);
          func_0x0001018868d8(lStack_1e8,uStack_228);
          uVar10 = param_2;
          func_0x000107c61170(uStack_228);
          lVar13 = lStack_1e8;
          uVar32 = param_2;
        }
        param_2 = uVar10;
        func_0x000107c61170(lVar13);
        goto LAB_10187b5ec;
      }
      lVar13 = lStack_1e0;
      func_0x000107c61174();
      uVar10 = uStack_200;
      func_0x000107c61174(uStack_200);
      uVar32 = param_2;
    }
    func_0x000101878638(lStack_a0,uStack_a8,uStack_b0);
    func_0x000101878638(lStack_b8,uStack_c0,uStack_c8);
    func_0x000100cbd4f4(lStack_1c0,uStack_1d8);
    func_0x000101886c4c(lVar13,uVar10);
    param_2 = uVar32;
    func_0x000107c61170(uVar10);
    func_0x000107c61170(lVar13);
  }
LAB_10187b5ec:
  if (lVar30 == 0) {
    uVar10 = 0;
    if ((lStack_138 == 0) || (uVar10 = 0, param_9 == 0)) goto LAB_10187b650;
    lVar13 = *(long *)(param_9 + 0x10);
    if (lVar13 == 0) goto LAB_10187b650;
    plVar12 = (long *)(param_9 + 0x10) + lVar13 * 2;
    lVar13 = *plVar12;
    uVar11 = plVar12[1];
    func_0x000107c61174(lVar13);
    func_0x000107c61174(uVar11);
    func_0x000101886c50(lVar13,uVar11);
    uVar31 = param_2;
    uVar10 = param_2;
  }
  else {
    uVar10 = uStack_120;
    func_0x000107c61174();
    lVar13 = lVar30;
    func_0x000107c61174(lVar30);
    uVar11 = uStack_118;
    func_0x000107c61174(uStack_118);
    func_0x0001018868e4(lVar13,uVar11,uStack_120);
    uVar31 = param_2;
    func_0x000107c61170(uVar10);
    uVar10 = param_2;
  }
  func_0x000107c61170(uVar11);
  func_0x000107c61170(lVar13);
  param_2 = uVar31;
LAB_10187b650:
  uVar31 = 0;
  if (lStack_d0 != 0) {
    func_0x0001018868e4(lStack_d0,uStack_108,uStack_110);
    uVar31 = param_2;
  }
  uVar33 = 0;
  if (lStack_138 != 0) {
    func_0x0001018868e4(lStack_138,uStack_128,uStack_130);
    uVar33 = param_2;
  }
  if (lVar3 == 0) {
    func_0x000100cbd4c8(lStack_180,uStack_248);
    func_0x000100cbd4c8(lStack_168,lStack_250);
    func_0x000101878600(lStack_158,uStack_218,uStack_220);
    func_0x000101878600(lVar4,uVar20,uVar28);
    func_0x000101878600(lVar5,uVar21,uVar29);
    func_0x000101878600(lStack_240,uVar24,uVar27);
    func_0x000101878600(lVar2,uStack_1c8,uStack_1d0);
    func_0x000101878600(lStack_d8,uStack_e8,uStack_f0);
    param_2 = 0;
  }
  else {
    uVar8 = uStack_268;
    func_0x000107c61174();
    lVar13 = lVar3;
    func_0x000107c61174(lVar3);
    uVar9 = uStack_260;
    func_0x000107c61174(uStack_260);
    func_0x0001018868e4(lVar13,uVar9,uStack_268);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(lVar13);
    func_0x000100cbd4c8(lStack_180,uStack_248);
    func_0x000100cbd4c8(lStack_168,lStack_250);
    func_0x000101878600(lStack_158,uStack_218,uStack_220);
    func_0x000101878600(lVar4,uVar20,uVar28);
    func_0x000101878600(lVar5,uVar21,uVar29);
    func_0x000101878600(lStack_240,uVar24,uVar27);
    func_0x000101878600(lVar2,uStack_1c8,uStack_1d0);
    func_0x000101878600(lStack_d8,uStack_e8,uStack_f0);
    func_0x000101878600(lVar3,uStack_260,uStack_268);
  }
  func_0x000101878600(lStack_1f8,uVar23,uStack_208);
  func_0x000100cbd4c8(lStack_1e8,uStack_228);
  func_0x000100cbd4c8(lStack_1c0,uStack_1d8);
  func_0x000101878600(lStack_e0,uStack_140,uStack_f8);
  func_0x000101878600(lStack_b8,uStack_c0,uStack_c8);
  func_0x000101878600(lVar6,uVar17,uVar26);
  func_0x000101878600(lStack_a0,uStack_a8,uStack_b0);
  func_0x000101878600(lVar19,uVar25,uVar16);
  func_0x000100cbd4c8(lStack_1e0,uStack_200);
  func_0x000101878600(lStack_148,uVar22,uVar15);
  func_0x000101878600(lStack_d0,uStack_108,uStack_110);
  func_0x000101878600(lVar30,uStack_118,uStack_120);
  func_0x000101878600(lStack_138,uStack_128,uStack_130);
  *param_1 = uVar31;
  param_1[1] = uVar33;
  param_1[2] = param_2;
  param_1[3] = uVar10;
  param_1[4] = uVar32;
  return;
}



/* Entry: 10187bbc0; end: 10187bbeb;  */

/* WARNING: Possible PIC construction at 0x00010187bbd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010187bbd8) */

void FUN_10187bbc0(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  return;
}



/* Entry: 10187bbec; end: 10187bc37;  */

int FUN_10187bbec(int *param_1)

{
  if ((char)param_1[0x20] != '\0') {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 10187bc38; end: 10187bc8b;  */

undefined1 FUN_10187bc38(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_78 [72];
  
  if (lRam0000000112dcc490 != -1) {
    func_0x000107c61568(0x112dcc490,FUN_101875d88);
  }
  lVar1 = lRam0000000112dcc498;
  if (*(long *)(lRam0000000112dcc498 + 0x10) == 0) {
    return 0;
  }
  func_0x000107c6068c(auStack_78,*(undefined8 *)(lRam0000000112dcc498 + 0x28));
  uVar2 = param_1;
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar3 = -1L << ((ulong)*(byte *)(lVar1 + 0x20) & 0x3f);
  uVar2 = uVar2 & (uVar3 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + 0x38 + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) != 0) {
    do {
      if ((int)*(undefined8 *)(*(long *)(lVar1 + 0x30) + uVar2 * 8) == (int)param_1) {
        return 1;
      }
      uVar2 = uVar2 + 1 & ~uVar3;
    } while ((*(ulong *)(lVar1 + 0x38 + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) != 0);
  }
  return 0;
}



/* Entry: 10187bc8c; end: 10187bddf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10187bc8c(undefined8 *param_1,undefined8 param_2,long param_3,code *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_68;
  
  if (*(int *)(param_3 + _DAT_113803420) == 10) {
    func_0x000107c6157c(param_5);
    func_0x000107c6157c(param_3);
    func_0x000107c6157c(param_6);
    FUN_10187cae0(param_3,0,param_4,param_5,param_3,param_6);
    func_0x000107c61574(param_5);
    func_0x000107c61574(param_3);
    func_0x000107c61574(param_6);
    uVar3 = 0;
    *param_1 = param_2;
  }
  else {
    pcVar2 = param_4;
    FUN_101881b6c();
    func_0x000107c6142c();
    lVar5 = *(long *)(pcVar2 + 0x10);
    func_0x000107c6142c(pcVar2);
    if (lVar5 == 0) {
      *param_1 = 0;
      uVar3 = 1;
    }
    else {
      uVar1 = param_3 + _DAT_113803418;
      (*param_4)();
      if ((uVar1 & 1) == 0) {
        uVar4 = 0;
      }
      else {
        func_0x0001000d224c(&uStack_68);
        uVar4 = uStack_68;
        func_0x000107c4260c(uStack_68);
        func_0x000107c615e8(uStack_68);
      }
      FUN_10187cd88(param_3,uVar4);
      uVar3 = 0;
      *param_1 = param_2;
    }
  }
  *(undefined1 *)(param_1 + 1) = uVar3;
  return;
}



/* Entry: 10187bde0; end: 10187bde3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10187bde0(undefined8 param_1,long param_2,long param_3,code *param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  byte bStack_52;
  char cStack_51;
  
  if (*(int *)(param_3 + _DAT_113803420) != 10) {
    return 1;
  }
  func_0x000107c614f0();
  pcVar4 = *(code **)(param_2 + 8);
  (*pcVar4)(&cStack_51,&UNK_110409ef0,&UNK_1107383c8,&PTR_DAT_11304a4b0,param_1,param_2);
  if (cStack_51 != '\x01') {
    uVar1 = 0;
    goto LAB_1018763c8;
  }
  lVar3 = *(long *)(param_3 + _DAT_113803438);
  if (lVar3 - 4U < 2) {
LAB_101876364:
    uVar1 = 1;
  }
  else {
    if (lVar3 == 3) {
      (*pcVar4)(&bStack_52,&UNK_110409f08,&UNK_1107383c8,&PTR_DAT_11304a4b0,param_1,param_2);
      if ((bStack_52 & 1) != 0) goto LAB_101876364;
    }
    else if (lVar3 == 9) {
      uVar2 = 0;
      func_0x00010403c628(0xd00000000000002a,0x800000010efbc050,param_1,param_2);
      if ((uVar2 & 1) != 0) goto LAB_101876364;
    }
    param_3 = param_3 + _DAT_113803418;
    (*param_4)(param_3);
    uVar1 = (uint)param_3;
  }
LAB_1018763c8:
  return uVar1 & 1;
}



/* Entry: 10187bde4; end: 10187cadf;  */

/* WARNING: Type propagation algorithm not settling */

double FUN_10187bde4(double param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  bool bVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  
  lVar11 = *(long *)(param_2 + 0x10);
  if (lVar11 == 0) {
    lStack_160 = 0;
    lStack_170 = 0;
    lStack_168 = 0;
    lStack_148 = 0;
    lStack_140 = 0;
    lStack_150 = 0;
    lVar12 = 0;
    lStack_100 = 0;
    lStack_a8 = 0;
    lStack_d0 = 0;
    lStack_c8 = 0;
    lStack_f8 = 0;
    lStack_f0 = 0;
    lStack_98 = 0;
    lStack_e8 = 0;
    lStack_e0 = 0;
    lStack_138 = 0;
    lStack_130 = 0;
    lStack_d8 = 0;
    lStack_128 = 0;
    lStack_120 = 0;
    lStack_118 = 0;
    lStack_110 = 0;
    lStack_108 = 0;
    lStack_158 = 0;
    lStack_a0 = 0;
    dVar23 = 0.0;
    lStack_90 = 0;
joined_r0x00010187c6bc:
    if (param_3 == 0) {
      FUN_101878600(lStack_e0,lStack_138,lStack_130);
      FUN_101878600(lStack_d8,lStack_128,lStack_120);
      FUN_101878600(lStack_98,lStack_d0,lStack_e8);
      FUN_101878600(lVar12,lStack_100,lStack_a8);
      FUN_101878600(lStack_c8,lStack_f8,lStack_f0);
      FUN_101878600(lStack_148,lStack_140,lStack_150);
      FUN_101878600(lStack_90,lStack_118,lStack_110);
      goto LAB_10187c8a0;
    }
    lVar11 = *(long *)(param_3 + 0x10);
    if (lVar11 != 0) {
      plVar19 = (long *)(param_3 + 0x10) + lVar11 * 2;
      lVar11 = *plVar19;
      lVar6 = plVar19[1];
      if (lStack_90 == 0) {
        if (lStack_108 == 0) {
          func_0x000107c61174(lVar11);
          func_0x000107c61174(lVar6);
          FUN_101878600(lStack_e0,lStack_138,lStack_130);
          FUN_101878600(lStack_d8,lStack_128,lStack_120);
          FUN_101878600(lStack_98,lStack_d0,lStack_e8);
          FUN_101878600(lVar12,lStack_100,lStack_a8);
          FUN_101878600(lStack_c8,lStack_f8,lStack_f0);
          FUN_101878600(lStack_148,lStack_140,lStack_150);
          FUN_101878600(lStack_160,lStack_170,lStack_168);
          func_0x000107c61170(lVar6);
          func_0x000107c61170(lVar11);
          goto LAB_10187c93c;
        }
        func_0x000107c61174();
        func_0x000107c61174(lVar6);
        func_0x000101886c50(lVar11,lVar6);
        dVar23 = param_1;
        func_0x0001018868e4(lStack_108,lStack_158,lStack_a0);
        FUN_101878600(lStack_e0,lStack_138,lStack_130);
        FUN_101878600(lStack_d8,lStack_128,lStack_120);
        FUN_101878600(lStack_98,lStack_d0,lStack_e8);
        FUN_101878600(lVar12,lStack_100,lStack_a8);
        FUN_101878600(lStack_c8,lStack_f8,lStack_f0);
        FUN_101878600(lStack_148,lStack_140,lStack_150);
        FUN_101878600(lStack_160,lStack_170,lStack_168);
        func_0x000107c61170(lStack_158);
        func_0x000107c61170(lStack_108);
        func_0x000107c61170(lVar6);
        func_0x000107c61170(lVar11);
      }
      else {
        func_0x000107c61174();
        func_0x000107c61174(lVar6);
        func_0x000101886c50(lVar11,lVar6);
        dVar23 = param_1;
        func_0x0001018868e4(lStack_90,lStack_118,lStack_110);
        FUN_101878600(lStack_e0,lStack_138,lStack_130);
        FUN_101878600(lStack_d8,lStack_128,lStack_120);
        FUN_101878600(lStack_98,lStack_d0,lStack_e8);
        FUN_101878600(lVar12,lStack_100,lStack_a8);
        FUN_101878600(lStack_c8,lStack_f8,lStack_f0);
        FUN_101878600(lStack_148,lStack_140,lStack_150);
        FUN_101878600(lStack_108,lStack_158,lStack_a0);
        FUN_101878600(lStack_160,lStack_170,lStack_168);
        func_0x000107c61170(lVar6);
        func_0x000107c61170(lVar11);
        func_0x000107c61170(lStack_118);
        func_0x000107c61170(lStack_90);
        lStack_a0 = lStack_110;
      }
      func_0x000107c61170(lStack_a0);
      dVar23 = param_1 - dVar23;
      if (dVar23 <= 0.0) {
        dVar23 = 0.0;
      }
      goto LAB_10187c93c;
    }
    FUN_101878600(lStack_e0,lStack_138,lStack_130);
    FUN_101878600(lStack_d8,lStack_128,lStack_120);
    FUN_101878600(lStack_98,lStack_d0,lStack_e8);
    FUN_101878600(lVar12,lStack_100,lStack_a8);
    FUN_101878600(lStack_c8,lStack_f8,lStack_f0);
    FUN_101878600(lStack_148,lStack_140,lStack_150);
    FUN_101878600(lStack_90,lStack_118,lStack_110);
    FUN_101878600(lStack_108,lStack_158,lStack_a0);
  }
  else {
    lStack_168 = 0;
    lStack_160 = 0;
    lStack_170 = 0;
    lStack_148 = 0;
    lStack_140 = 0;
    lStack_150 = 0;
    lVar12 = 0;
    lStack_100 = 0;
    lStack_f8 = 0;
    lStack_a8 = 0;
    lStack_c8 = 0;
    lStack_f0 = 0;
    lStack_98 = 0;
    lStack_d8 = 0;
    lStack_d0 = 0;
    lStack_e8 = 0;
    lStack_e0 = 0;
    lStack_138 = 0;
    lStack_130 = 0;
    lStack_128 = 0;
    lStack_120 = 0;
    lStack_90 = 0;
    lStack_118 = 0;
    lStack_110 = 0;
    lStack_108 = 0;
    lStack_158 = 0;
    lStack_a0 = 0;
    dVar23 = 0.0;
    plVar19 = (long *)(param_2 + 0x30);
    do {
      lVar6 = plVar19[-2];
      lVar5 = plVar19[-1];
      lVar16 = *plVar19;
      lVar4 = lVar16;
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar7 = lVar5;
      func_0x000107c30b1c();
      iVar3 = (int)lVar7;
      lVar17 = lStack_a0;
      lVar7 = lStack_170;
      lVar10 = lStack_168;
      lVar18 = lStack_160;
      lVar1 = lStack_158;
      lVar13 = lStack_118;
      lVar9 = lStack_110;
      lVar2 = lStack_108;
      lVar15 = lStack_90;
      if (iVar3 < 7) {
        lVar1 = lVar5;
        lVar2 = lVar6;
        lVar17 = lVar16;
        lVar8 = lStack_108;
        if ((iVar3 != 3) &&
           (lVar9 = lVar16, lVar13 = lVar5, lVar15 = lVar6, lVar1 = lStack_158, lVar2 = lStack_108,
           lVar17 = lStack_a0, lVar8 = lStack_90, iVar3 != 4)) {
          if (iVar3 != 6) goto LAB_10187c024;
          FUN_101878600(lStack_e0,lStack_138,lStack_130);
          lStack_138 = lVar5;
          lStack_130 = lVar16;
          lVar13 = lStack_118;
          lVar9 = lStack_110;
          lStack_e0 = lVar6;
          lVar15 = lStack_90;
          goto LAB_10187c060;
        }
joined_r0x00010187c050:
        if (lVar8 == 0) {
LAB_10187c060:
          lStack_90 = lVar15;
          lStack_108 = lVar2;
          lStack_110 = lVar9;
          lStack_118 = lVar13;
          lStack_158 = lVar1;
          lStack_160 = lVar18;
          lStack_168 = lVar10;
          lStack_170 = lVar7;
          func_0x000107c61174(lVar5);
          func_0x000107c61174(lVar6);
          func_0x000107c61174(lVar4);
          lStack_a0 = lVar17;
        }
LAB_10187c080:
        lVar10 = lStack_e8;
        lVar18 = lStack_98;
        lVar9 = lStack_98;
        lVar13 = lStack_d0;
        lVar15 = lStack_d0;
        lVar16 = lStack_e8;
        lVar7 = lStack_e8;
        if (lStack_98 != 0) goto LAB_10187c0e0;
        if (lVar12 != 0) {
          lStack_98 = lStack_a8;
          lVar10 = lStack_a8;
          lVar18 = 0;
          lVar9 = lVar12;
          lVar13 = lStack_100;
          lVar15 = lVar12;
          lVar16 = lStack_a8;
          lVar7 = lStack_100;
          goto LAB_10187c0e0;
        }
        lVar18 = 0;
        bVar14 = true;
        dVar21 = 0.0;
        dVar20 = param_1;
      }
      else {
        if (8 < iVar3) {
          if (iVar3 == 9) {
            lVar8 = lVar5;
            func_0x000107c30b28();
            if ((int)lVar8 == 0) goto LAB_10187c024;
            FUN_101878600(lStack_c8,lStack_f8,lStack_f0);
            lStack_c8 = lVar6;
            lStack_f8 = lVar5;
            lStack_f0 = lVar16;
          }
          else if (iVar3 == 10) {
            FUN_101878600(lVar12,lStack_100,lStack_a8);
            lStack_a8 = lVar16;
            lVar12 = lVar6;
            lStack_100 = lVar5;
          }
          else {
LAB_10187c024:
            lVar9 = lVar5;
            func_0x000107c30b24();
            if ((int)lVar9 != 4) {
              lVar7 = lVar5;
              func_0x000107c30b24();
              if ((int)lVar7 == 5) {
                lVar7 = lVar5;
                lVar10 = lVar16;
                lVar18 = lVar6;
                lVar9 = lStack_110;
                lVar13 = lStack_118;
                lVar15 = lStack_90;
                lVar1 = lStack_158;
                lVar2 = lStack_108;
                lVar17 = lStack_a0;
                lVar8 = lStack_160;
                if (lStack_d8 != 0 || lStack_e0 != 0) goto joined_r0x00010187c050;
                lStack_e0 = 0;
                lStack_d8 = 0;
              }
              goto LAB_10187c080;
            }
            FUN_101878600(lStack_148,lStack_140,lStack_150);
            lVar17 = lStack_a0;
            lVar1 = lStack_158;
            lStack_150 = lVar16;
            lStack_148 = lVar6;
            lStack_140 = lVar5;
            lVar13 = lStack_118;
            lVar9 = lStack_110;
            lVar2 = lStack_108;
            lVar15 = lStack_90;
          }
          goto LAB_10187c060;
        }
        if (iVar3 == 7) {
          FUN_101878600(lStack_d8,lStack_128,lStack_120);
          lStack_128 = lVar5;
          lStack_120 = lVar16;
          lStack_d8 = lVar6;
          goto LAB_10187c060;
        }
        if (iVar3 != 8) goto LAB_10187c024;
        FUN_101878600(lStack_98,lStack_d0,lStack_e8);
        func_0x000107c61174(lVar5);
        func_0x000107c61174(lVar6);
        lVar7 = lVar4;
        func_0x000107c61174(lVar4);
        lStack_98 = lVar6;
        lVar10 = lVar7;
        lVar18 = lVar6;
        lVar9 = lVar6;
        lVar13 = lVar5;
        lVar15 = lVar5;
        lStack_e8 = lVar16;
        lStack_d0 = lVar5;
LAB_10187c0e0:
        func_0x000107c61174(lStack_98);
        func_0x000107c61174(lVar15);
        func_0x000107c61174(lVar7);
        func_0x0001018868e4(lVar9,lVar13,lVar16);
        dVar20 = param_1;
        func_0x000107c61170(lVar10);
        func_0x000107c61170(lVar13);
        func_0x000107c61170(lVar9);
        bVar14 = false;
        dVar21 = param_1;
      }
      param_1 = dVar20;
      lStack_98 = lVar18;
      if (lStack_c8 == 0) {
        lVar9 = lStack_110;
        lVar7 = lStack_90;
        lVar10 = lStack_118;
        if (lStack_90 == 0) {
          if (lStack_108 != 0) {
            func_0x000107c61174(lStack_a0);
            lVar7 = lStack_108;
            func_0x000107c61174(lStack_108);
            lVar10 = lStack_158;
            func_0x000107c61174(lStack_158);
            lVar9 = lStack_a0;
            goto LAB_10187c228;
          }
          func_0x000107c61170(lVar4);
          func_0x000107c61170(lVar6);
          func_0x000107c61170(lVar5);
          func_0x000107c61170(lVar5);
          lStack_c8 = 0;
          lStack_90 = 0;
          lStack_108 = 0;
        }
        else {
LAB_10187c228:
          func_0x000101878638(lStack_90,lStack_118,lStack_110);
          if (lStack_d8 != 0 || lStack_e0 != 0) {
            func_0x0001018868e4(lVar7,lVar10,lVar9);
            dVar20 = param_1;
            func_0x000107c61170(lVar10);
            func_0x000107c61170(lVar7);
            func_0x000107c61170(lVar4);
            func_0x000107c61170(lVar5);
            func_0x000107c61170(lVar5);
            func_0x000107c61170(lVar6);
            dVar22 = param_1;
            goto LAB_10187c288;
          }
          func_0x000107c61170(lVar10);
          func_0x000107c61170(lVar7);
          func_0x000107c61170(lVar4);
          func_0x000107c61170(lVar6);
          func_0x000107c61170(lVar5);
          func_0x000107c61170(lVar5);
          func_0x000107c61170(lVar9);
          lStack_c8 = 0;
          lStack_e0 = 0;
          lStack_d8 = 0;
        }
      }
      else {
        lVar7 = lStack_f0;
        func_0x000107c61174(lStack_f0);
        lVar10 = lStack_c8;
        func_0x000107c61174(lStack_c8);
        lVar9 = lStack_f8;
        func_0x000107c61174(lStack_f8);
        func_0x0001018868e4(lVar10,lVar9,lStack_f0);
        dVar20 = param_1;
        func_0x000107c61170(lVar7);
        func_0x000107c61170(lVar9);
        func_0x000107c61170(lVar10);
        func_0x000107c61170(lVar4);
        func_0x000107c61170(lVar5);
        func_0x000107c61170(lVar5);
        lVar9 = lVar6;
        dVar22 = param_1;
LAB_10187c288:
        param_1 = dVar20;
        func_0x000107c61170(lVar9);
        if (!bVar14) {
          FUN_101878600(lVar18,lStack_d0,lStack_e8);
          FUN_101878600(lVar12,lStack_100,lStack_a8);
          FUN_101878600(lStack_c8,lStack_f8,lStack_f0);
          FUN_101878600(lStack_90,lStack_118,lStack_110);
          FUN_101878600(lStack_108,lStack_158,lStack_a0);
          FUN_101878600(lStack_d8,lStack_128,lStack_120);
          FUN_101878600(lStack_e0,lStack_138,lStack_130);
          FUN_101878600(lStack_160,lStack_170,lStack_168);
          FUN_101878600(lStack_148,lStack_140,lStack_150);
          lStack_168 = 0;
          lStack_160 = 0;
          lStack_170 = 0;
          lStack_148 = 0;
          lStack_140 = 0;
          lStack_150 = 0;
          lVar12 = 0;
          lStack_100 = 0;
          lStack_f8 = 0;
          lStack_a8 = 0;
          lStack_c8 = 0;
          lStack_f0 = 0;
          lStack_98 = 0;
          lStack_d8 = 0;
          lStack_d0 = 0;
          lStack_e8 = 0;
          lStack_e0 = 0;
          lStack_138 = 0;
          lStack_130 = 0;
          lStack_128 = 0;
          lStack_120 = 0;
          lStack_90 = 0;
          lStack_118 = 0;
          lStack_110 = 0;
          lStack_108 = 0;
          lStack_158 = 0;
          lStack_a0 = 0;
          param_1 = 0.0;
          if (0.0 < dVar21 - dVar22) {
            param_1 = dVar21 - dVar22;
          }
          dVar23 = dVar23 + param_1;
        }
      }
      plVar19 = plVar19 + 3;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    if (dVar23 == 0.0) {
      lVar11 = lStack_90;
      lVar6 = lStack_118;
      dVar20 = param_1;
      lVar5 = lStack_110;
      if (lStack_90 == 0) {
        if (lStack_108 == 0) {
          lStack_108 = 0;
          lStack_90 = 0;
          goto LAB_10187c724;
        }
        func_0x000107c61174(lStack_a0);
        lVar11 = lStack_108;
        func_0x000107c61174(lStack_108);
        lVar6 = lStack_158;
        func_0x000107c61174(lStack_158);
        dVar20 = param_1;
        lVar5 = lStack_a0;
      }
      lVar18 = lStack_150;
      lVar7 = lStack_148;
      lVar10 = lStack_140;
      if (lStack_148 == 0) {
        if (lStack_160 != 0) {
          func_0x000107c61174(lStack_168);
          lVar7 = lStack_160;
          func_0x000107c61174(lStack_160);
          lVar10 = lStack_170;
          func_0x000107c61174(lStack_170);
          lVar18 = lStack_168;
          goto LAB_10187c5c4;
        }
        func_0x000101878638(lStack_90,lStack_118,lStack_110);
        func_0x000107c61170(lVar6);
        func_0x000107c61170(lVar11);
        lStack_148 = 0;
        lStack_160 = 0;
      }
      else {
LAB_10187c5c4:
        func_0x000101878638(lStack_90,lStack_118,lStack_110);
        func_0x000101878638(lStack_148,lStack_140,lStack_150);
        if (lStack_d8 != 0 || lStack_e0 != 0) {
          func_0x0001018868e4(lVar7,lVar10,lVar18);
          dVar23 = dVar20;
          func_0x0001018868e4(lVar11,lVar6,lVar5);
          param_1 = dVar23;
          func_0x000107c61170(lVar10);
          func_0x000107c61170(lVar7);
          func_0x000107c61170(lVar6);
          func_0x000107c61170(lVar11);
          func_0x000107c61170(lVar5);
          func_0x000107c61170(lVar18);
          dVar23 = dVar20 - dVar23;
          if (dVar23 <= 0.0) {
            dVar23 = 0.0;
            goto joined_r0x00010187c6bc;
          }
          goto LAB_10187c724;
        }
        func_0x000107c61170(lVar6);
        func_0x000107c61170(lVar11);
        func_0x000107c61170(lVar10);
        func_0x000107c61170(lVar7);
        func_0x000107c61170(lVar18);
        lStack_e0 = 0;
        lStack_d8 = 0;
      }
      func_0x000107c61170(lVar5);
      param_1 = dVar20;
    }
LAB_10187c724:
    if (dVar23 == 0.0) goto joined_r0x00010187c6bc;
    FUN_101878600(lStack_e0,lStack_138,lStack_130);
    FUN_101878600(lStack_d8,lStack_128,lStack_120);
    FUN_101878600(lStack_98,lStack_d0,lStack_e8);
    FUN_101878600(lVar12,lStack_100,lStack_a8);
    FUN_101878600(lStack_c8,lStack_f8,lStack_f0);
    FUN_101878600(lStack_148,lStack_140,lStack_150);
    FUN_101878600(lStack_90,lStack_118,lStack_110);
LAB_10187c8a0:
    FUN_101878600(lStack_108,lStack_158,lStack_a0);
  }
  FUN_101878600(lStack_160,lStack_170,lStack_168);
LAB_10187c93c:
  dVar20 = 0.0;
  if (0.0 < dVar23) {
    dVar20 = dVar23;
  }
  return dVar20;
}



/* Entry: 10187cae0; end: 10187cd87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_10187cae0(undefined8 param_1,undefined8 param_2,ulong param_3,code *param_4,undefined8 param_5,
             long param_6)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uStack_78;
  
  uVar1 = param_3;
  uVar5 = param_3;
  FUN_101881d40();
  if (uVar1 == 0) {
    return 0;
  }
  uVar2 = param_3;
  uVar6 = uVar5;
  FUN_101881ebc();
  uVar7 = uVar6;
  if (uVar2 != 0) {
    if (*(long *)(uVar2 + 0x10) == 0) {
LAB_10187cc34:
      func_0x000107c6142c(uVar2);
      func_0x000107c6142c(uVar6);
      goto LAB_10187cc44;
    }
    func_0x000107c61434(uVar2);
    lVar3 = 2;
    func_0x0001018815d0();
    if ((uVar7 & 1) == 0) {
      func_0x000107c6142c(uVar2);
LAB_10187cbcc:
      if (*(long *)(uVar2 + 0x10) != 0) {
        func_0x000107c61434(uVar2);
        lVar3 = 4;
        func_0x0001018815d0();
        if ((uVar7 & 1) != 0) {
          lVar8 = *(long *)(*(long *)(uVar2 + 0x38) + lVar3 * 8);
          func_0x000107c61434(lVar8);
          func_0x000107c6142c(uVar6);
          uVar7 = 2;
          func_0x000107c61430(uVar2);
          lVar3 = *(long *)(lVar8 + 0x10);
          func_0x000107c6142c(lVar8);
          if (lVar3 == 0) goto LAB_10187cc44;
          goto LAB_10187ccb4;
        }
        func_0x000107c6142c(uVar2);
      }
      goto LAB_10187cc34;
    }
    lVar3 = *(long *)(*(long *)(uVar2 + 0x38) + lVar3 * 8);
    func_0x000107c61434(lVar3);
    func_0x000107c6142c(uVar2);
    lVar8 = *(long *)(lVar3 + 0x10);
    func_0x000107c6142c(lVar3);
    if (lVar8 == 0) goto LAB_10187cbcc;
    func_0x000107c6142c(uVar6);
    func_0x000107c6142c(uVar2);
LAB_10187ccb4:
    func_0x000107c6142c(uVar5);
    param_3 = uVar1;
    param_1 = 0;
    goto LAB_10187cd5c;
  }
LAB_10187cc44:
  uVar2 = param_3;
  FUN_101881fec();
  if (uVar2 != 0) {
    if (*(long *)(uVar2 + 0x10) != 0) {
      uVar6 = uVar7;
      func_0x000107c61434(uVar2);
      lVar3 = 10;
      func_0x0001018815c8();
      if ((uVar6 & 1) != 0) {
        lVar8 = *(long *)(*(long *)(uVar2 + 0x38) + lVar3 * 8);
        func_0x000107c61434(lVar8);
        func_0x000107c6142c(uVar7);
        func_0x000107c61430(uVar2,2);
        lVar3 = *(long *)(lVar8 + 0x10);
        func_0x000107c6142c(lVar8);
        if (lVar3 != 0) goto LAB_10187ccb4;
        goto LAB_10187ccdc;
      }
      func_0x000107c6142c(uVar2);
    }
    func_0x000107c6142c(uVar2);
    func_0x000107c6142c(uVar7);
  }
LAB_10187ccdc:
  uVar2 = param_6 + _DAT_113803418;
  (*param_4)();
  if ((uVar2 & 1) == 0) {
LAB_10187cd34:
    param_3 = 0;
  }
  else {
    func_0x0001000d224c(&uStack_78);
    uVar4 = uStack_78;
    func_0x000107c4260c();
    func_0x000107c615e8(uStack_78);
    if ((int)uVar4 == 0) goto LAB_10187cd34;
    FUN_1018821c4(param_3);
  }
  FUN_10187bde4(uVar5,param_3);
  func_0x000107c6142c(uVar5);
  func_0x000107c6142c(uVar1);
LAB_10187cd5c:
  func_0x000107c6142c(param_3);
  return param_1;
}



/* Entry: 10187cd88; end: 10187cf57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10187cd88(undefined8 param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar3 = param_3;
  if (*(int *)(param_2 + _DAT_113803420) == 3) {
    func_0x000101882438();
    uVar2 = uVar3;
    if (*(long *)(param_2 + 0x10) != 0) {
      func_0x000107c61434(param_2);
      lVar1 = 10;
      func_0x0001018815c8();
      goto joined_r0x00010187ce54;
    }
  }
  else {
    if (*(int *)(param_2 + _DAT_113803420) != 6) goto LAB_10187cef0;
    uVar2 = param_3;
    FUN_101882274();
    uVar3 = uVar2;
    if (*(long *)(param_2 + 0x10) == 0) {
LAB_10187ce9c:
      func_0x000107c6142c(param_2);
      func_0x000107c6142c();
      uVar4 = uVar2;
    }
    else {
      func_0x000107c61434(param_2);
      lVar1 = 2;
      func_0x0001018815d0();
      if ((uVar3 & 1) == 0) {
        func_0x000107c6142c(param_2);
        goto LAB_10187ce9c;
      }
      uVar4 = *(ulong *)(*(long *)(param_2 + 0x38) + lVar1 * 8);
      func_0x000107c61434(uVar4);
      func_0x000107c6142c(uVar2);
      uVar3 = 2;
      func_0x000107c61430(param_2);
      lVar1 = *(long *)(uVar4 + 0x10);
      func_0x000107c6142c();
      if (lVar1 != 0) {
        return 0;
      }
    }
    FUN_101882274();
    param_2 = uVar4;
    uVar2 = uVar3;
    if (*(long *)(uVar4 + 0x10) != 0) {
      func_0x000107c61434(uVar4);
      lVar1 = 4;
      func_0x0001018815d0();
joined_r0x00010187ce54:
      if ((uVar3 & 1) != 0) {
        lVar5 = *(long *)(*(long *)(param_2 + 0x38) + lVar1 * 8);
        func_0x000107c61434(lVar5);
        func_0x000107c6142c(uVar2);
        uVar3 = 2;
        func_0x000107c61430(param_2,2);
        lVar1 = *(long *)(lVar5 + 0x10);
        func_0x000107c6142c(lVar5);
        if (lVar1 != 0) {
          return 0;
        }
        goto LAB_10187cef0;
      }
      func_0x000107c6142c(param_2);
    }
  }
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar2);
LAB_10187cef0:
  if ((param_3 & 1) == 0) {
    uVar4 = 0;
    uVar2 = uVar3;
  }
  else {
    func_0x00010188244c();
    uVar2 = uVar3;
    func_0x000107c6142c();
    uVar4 = uVar3;
  }
  FUN_101881b6c();
  func_0x000107c6142c();
  FUN_10187bde4(uVar2,uVar4);
  func_0x000107c6142c(uVar2);
  func_0x000107c6142c(uVar4);
  return param_1;
}



/* Entry: 10187cf58; end: 10187d007;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10187cf58(undefined8 *param_1,long param_2)

{
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  if (*(char *)(param_2 + _DAT_113803440) == '\x01') {
    FUN_101882848();
    FUN_10187d2e4(&uStack_88);
    func_0x000107c6142c(param_2);
    if (lStack_48 != 1) {
      param_1[9] = uStack_40;
      param_1[8] = lStack_48;
      param_1[0xb] = uStack_30;
      param_1[10] = uStack_38;
      *(undefined1 *)(param_1 + 0xc) = uStack_28;
      param_1[1] = uStack_80;
      *param_1 = uStack_88;
      param_1[3] = uStack_70;
      param_1[2] = uStack_78;
      param_1[5] = uStack_60;
      param_1[4] = uStack_68;
      param_1[7] = uStack_50;
      param_1[6] = uStack_58;
      return;
    }
  }
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[8] = 2;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  return;
}



/* Entry: 10187d008; end: 10187d00b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10187d008(undefined8 *param_1,long param_2)

{
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  if (*(char *)(param_2 + _DAT_113803440) == '\x01') {
    FUN_101882848();
    FUN_10187d2e4(&uStack_88);
    func_0x000107c6142c(param_2);
    if (lStack_48 != 1) {
      param_1[9] = uStack_40;
      param_1[8] = lStack_48;
      param_1[0xb] = uStack_30;
      param_1[10] = uStack_38;
      *(undefined1 *)(param_1 + 0xc) = uStack_28;
      param_1[1] = uStack_80;
      *param_1 = uStack_88;
      param_1[3] = uStack_70;
      param_1[2] = uStack_78;
      param_1[5] = uStack_60;
      param_1[4] = uStack_68;
      param_1[7] = uStack_50;
      param_1[6] = uStack_58;
      return;
    }
  }
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[8] = 2;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  return;
}



/* Entry: 10187d00c; end: 10187d2d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10187d00c(undefined8 *param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  
  if (*(char *)(param_3 + _DAT_113803440) == '\x01') {
    FUN_101881b6c();
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (*(long *)(param_3 + 0x10) != 0) {
      uVar15 = param_4;
      func_0x000107c61434(param_3);
      lVar3 = 10;
      func_0x0001018815d4();
      puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if ((uVar15 & 1) != 0) {
        puVar11 = *(undefined **)(*(long *)(param_3 + 0x38) + lVar3 * 8);
        func_0x000107c61434(puVar11);
      }
      func_0x000107c6142c(param_3);
    }
    func_0x000107c6142c(param_3);
    func_0x000107c6142c(param_4);
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar15 = *(ulong *)(puVar11 + 0x10);
    if (uVar15 != 0) {
      uVar14 = 0;
      do {
        uVar9 = uVar14;
        puVar13 = (undefined8 *)(puVar11 + uVar14 * 0x18 + 0x30);
        while( true ) {
          if (*(ulong *)(puVar11 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10187d2d4);
            (*pcVar2)();
          }
          uVar5 = puVar13[-2];
          uVar6 = puVar13[-1];
          uVar14 = uVar9 + 1;
          uVar12 = *puVar13;
          uVar4 = uVar12;
          func_0x000107c61174(uVar12);
          func_0x000107c61174();
          func_0x000107c61174();
          uVar7 = uVar6;
          func_0x000107c30b28();
          if ((uVar7 & 1) != 0) break;
          func_0x000107c61170(uVar4);
          func_0x000107c61170(uVar6);
          func_0x000107c61170(uVar5);
          uVar9 = uVar14;
          puVar13 = puVar13 + 3;
          if (uVar15 == uVar14) goto LAB_10187d1dc;
        }
        puVar8 = puVar1;
        func_0x000107c61558();
        if (((ulong)puVar8 & 1) == 0) {
          func_0x0001018740dc(0,*(long *)(puVar1 + 0x10) + 1,1);
        }
        uVar7 = *(ulong *)(puVar1 + 0x10);
        if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar7) {
          func_0x0001018740dc(1 < *(ulong *)(puVar1 + 0x18),uVar7 + 1,1);
        }
        *(ulong *)(puVar1 + 0x10) = uVar7 + 1;
        *(undefined8 *)(puVar1 + uVar7 * 0x18 + 0x20) = uVar5;
        *(ulong *)(puVar1 + uVar7 * 0x18 + 0x28) = uVar6;
        *(undefined8 *)(puVar1 + uVar7 * 0x18 + 0x30) = uVar12;
      } while (uVar15 - 1 != uVar9);
    }
LAB_10187d1dc:
    func_0x000107c6142c(puVar11);
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
    lVar3 = *(long *)(puVar1 + 0x10);
    if (lVar3 == 0) {
      func_0x000107c61574(puVar1);
      puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      func_0x00010134166c(0,lVar3,0);
      lVar10 = 0x20;
      do {
        func_0x000107c30b10(*(undefined8 *)(puVar1 + lVar10));
        uVar15 = *(ulong *)(puVar11 + 0x10);
        if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar15) {
          func_0x00010134166c(1 < *(ulong *)(puVar11 + 0x18),uVar15 + 1,1);
        }
        *(ulong *)(puVar11 + 0x10) = uVar15 + 1;
        *(undefined8 *)(puVar11 + uVar15 * 8 + 0x20) = param_2;
        lVar10 = lVar10 + 0x18;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      func_0x000107c61574(puVar1);
    }
    if (*(long *)(puVar11 + 0x10) != 0) goto LAB_10187d2a8;
    func_0x000107c6142c(puVar11);
  }
  puVar11 = (undefined *)0x1;
LAB_10187d2a8:
  *param_1 = puVar11;
  return;
}



/* Entry: 10187d2d4; end: 10187d2e3;  */

undefined1  [16] FUN_10187d2d4(void)

{
  return ZEXT816(0x11040a318);
}



/* Entry: 10187d2e4; end: 10187d4e3;  */

void FUN_10187d2e4(undefined8 *param_1,double param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 uStack_98;
  
  lVar9 = *(long *)(param_3 + 0x10);
  if (lVar9 == 0) {
    uVar8 = 0;
    uStack_98 = 0;
    uVar11 = 0;
    uVar6 = 0;
    dVar13 = 0.0;
    dVar15 = 0.0;
    puVar7 = (undefined *)0x1;
    dVar16 = 0.0;
    dVar14 = 0.0;
  }
  else {
    puVar7 = (undefined *)0x0;
    plVar10 = (long *)(param_3 + 0x28);
    uVar8 = 1;
    dVar14 = 0.0;
    dVar16 = 0.0;
    dVar15 = 0.0;
    uStack_98 = 1;
    dVar13 = 0.0;
    uVar11 = 1;
    do {
      lVar1 = plVar10[-1];
      lVar2 = *plVar10;
      func_0x000107c61174(lVar1);
      func_0x000107c61174();
      lVar3 = lVar2;
      func_0x000107c30d68();
      if (lVar3 == 4) {
        lVar3 = lVar2;
        func_0x000107c30d6c();
        func_0x000107c61180();
        func_0x000107c30b10(lVar1);
        dVar12 = param_2;
        if (lVar3 == 0) {
          uStack_98 = 0;
          dVar15 = param_2;
        }
        else {
          lVar4 = lVar2;
          func_0x000107c30d70();
          func_0x000107c61180();
          if (lVar4 != 0) {
            func_0x000107c49820();
            func_0x000107c61170(lVar4);
          }
          puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x000107c610f8();
          func_0x000107c466bc();
          func_0x000107c61170(lVar3);
          func_0x000107c61170(puVar7);
          uVar8 = 0;
          puVar7 = puVar5;
          dVar16 = param_2;
        }
      }
      else {
        dVar12 = param_2;
        if (lVar3 == 2) {
          func_0x000107c30b10(lVar1);
          uVar11 = 0;
          dVar12 = param_2;
          dVar13 = param_2;
        }
      }
      plVar10 = plVar10 + 2;
      func_0x000107c30d74(lVar2);
      param_2 = dVar12;
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar1);
      if (dVar14 < dVar12) {
        dVar14 = dVar12;
      }
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    uVar6 = 1;
  }
  *param_1 = 0;
  param_1[1] = uVar6;
  param_1[2] = 0;
  param_1[3] = uVar6;
  param_1[4] = dVar13;
  param_1[5] = uVar11;
  param_1[6] = dVar15;
  param_1[7] = uStack_98;
  param_1[8] = puVar7;
  param_1[9] = dVar16;
  param_1[10] = uVar8;
  param_1[0xb] = dVar14;
  *(undefined1 *)(param_1 + 0xc) = 0;
  return;
}



/* Entry: 10187d4e4; end: 10187d4eb;  */

uint FUN_10187d4e4(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  
  func_0x000107c614f0();
  uVar1 = 0;
  func_0x00010403c628(0xd000000000000014,0x800000010efbc590,param_1,param_2);
  return uVar1 & 1;
}



/* Entry: 10187d4ec; end: 10187d53f;  */

undefined1 FUN_10187d4ec(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_78 [72];
  
  if (lRam0000000112dcc490 != -1) {
    func_0x000107c61568(0x112dcc490,FUN_101875d88);
  }
  lVar1 = lRam0000000112dcc498;
  if (*(long *)(lRam0000000112dcc498 + 0x10) == 0) {
    return 0;
  }
  func_0x000107c6068c(auStack_78,*(undefined8 *)(lRam0000000112dcc498 + 0x28));
  uVar2 = param_1;
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar3 = -1L << ((ulong)*(byte *)(lVar1 + 0x20) & 0x3f);
  uVar2 = uVar2 & (uVar3 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + 0x38 + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) != 0) {
    do {
      if ((int)*(undefined8 *)(*(long *)(lVar1 + 0x30) + uVar2 * 8) == (int)param_1) {
        return 1;
      }
      uVar2 = uVar2 + 1 & ~uVar3;
    } while ((*(ulong *)(lVar1 + 0x38 + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) != 0);
  }
  return 0;
}



/* Entry: 10187d540; end: 10187d6e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10187d540(long *param_1,code *param_2,code *param_3)

{
  int iVar1;
  code *pcVar2;
  code *pcVar3;
  undefined1 uVar4;
  code *pcVar5;
  long lVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  code *pcStack_68;
  
  iVar1 = *(int *)(param_2 + _DAT_113803420);
  if (iVar1 == 10) {
    FUN_101881cb4();
  }
  else {
    pcVar8 = param_3;
    FUN_101881b6c();
    pcVar3 = pcVar8;
    func_0x000107c6142c();
    lVar6 = *(long *)(pcVar8 + 0x10);
    func_0x000107c6142c(pcVar8);
    if (lVar6 == 0) {
      param_2 = (code *)0x0;
      uVar4 = 1;
      goto LAB_10187d6bc;
    }
    if (iVar1 == 3) {
      FUN_101882438();
      pcVar5 = (code *)0x0;
      pcVar7 = (code *)0x0;
      pcVar10 = pcVar3;
    }
    else {
      if (iVar1 == 6) {
        FUN_101882274();
        pcVar5 = pcVar3;
      }
      else {
        pcVar5 = (code *)0x0;
        pcVar8 = (code *)0x0;
      }
      pcVar7 = pcVar8;
      pcVar8 = (code *)0x0;
      pcVar10 = (code *)0x0;
    }
    pcVar2 = param_2 + _DAT_113803418;
    (*param_3)();
    if (((ulong)pcVar2 & 1) == 0) {
      pcVar9 = (code *)0x0;
    }
    else {
      func_0x0001000d224c(&pcStack_68);
      pcVar9 = pcStack_68;
      func_0x000107c4260c(pcStack_68);
      func_0x000107c615e8(pcStack_68);
      pcVar2 = pcStack_68;
    }
    FUN_101881b6c();
    param_2 = pcVar3;
    FUN_10187db1c(pcVar3,pcVar7,pcVar5,pcVar8,pcVar10,pcVar9);
    func_0x000107c6142c(pcVar3);
    func_0x000107c6142c(pcVar2);
    FUN_10187e2f8(pcVar8,pcVar10);
    FUN_10187e2f8(pcVar7,pcVar5);
  }
  uVar4 = 0;
LAB_10187d6bc:
  *param_1 = (long)param_2;
  *(undefined1 *)(param_1 + 1) = uVar4;
  return;
}



/* Entry: 10187d6e4; end: 10187d6e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10187d6e4(undefined8 param_1,long param_2,long param_3,code *param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  byte bStack_52;
  char cStack_51;
  
  if (*(int *)(param_3 + _DAT_113803420) != 10) {
    return 1;
  }
  func_0x000107c614f0();
  pcVar4 = *(code **)(param_2 + 8);
  (*pcVar4)(&cStack_51,&UNK_110409ef0,&UNK_1107383c8,&PTR_DAT_11304a4b0,param_1,param_2);
  if (cStack_51 != '\x01') {
    uVar1 = 0;
    goto LAB_1018763c8;
  }
  lVar3 = *(long *)(param_3 + _DAT_113803438);
  if (lVar3 - 4U < 2) {
LAB_101876364:
    uVar1 = 1;
  }
  else {
    if (lVar3 == 3) {
      (*pcVar4)(&bStack_52,&UNK_110409f08,&UNK_1107383c8,&PTR_DAT_11304a4b0,param_1,param_2);
      if ((bStack_52 & 1) != 0) goto LAB_101876364;
    }
    else if (lVar3 == 9) {
      uVar2 = 0;
      func_0x00010403c628(0xd00000000000002a,0x800000010efbc050,param_1,param_2);
      if ((uVar2 & 1) != 0) goto LAB_101876364;
    }
    param_3 = param_3 + _DAT_113803418;
    (*param_4)(param_3);
    uVar1 = (uint)param_3;
  }
LAB_1018763c8:
  return uVar1 & 1;
}



/* Entry: 10187d6e8; end: 10187d903;  */

ulong FUN_10187d6e8(long param_1,uint param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar6 = 0;
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000107c61434(param_1);
    lVar3 = 1;
    func_0x0001018815d0();
    if ((param_2 & 1) == 0) {
      func_0x000107c6142c(param_1);
      uVar6 = 0;
      lVar3 = *(long *)(param_1 + 0x10);
    }
    else {
      lVar3 = *(long *)(*(long *)(param_1 + 0x38) + lVar3 * 8);
      func_0x000107c61434(lVar3);
      func_0x000107c6142c(param_1);
      uVar6 = *(ulong *)(lVar3 + 0x10);
      func_0x000107c6142c(lVar3);
      lVar3 = *(long *)(param_1 + 0x10);
    }
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar3 != 0) {
      func_0x000107c61434(param_1);
      lVar3 = 2;
      func_0x0001018815d0();
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if ((param_2 & 1) != 0) {
        puVar5 = *(undefined **)(*(long *)(param_1 + 0x38) + lVar3 * 8);
        func_0x000107c61434(puVar5);
      }
      func_0x000107c6142c(param_1);
    }
  }
  uVar7 = *(ulong *)(puVar5 + 0x10);
  func_0x000107c6142c(puVar5);
  if (*(long *)(param_1 + 0x10) == 0) {
    lVar3 = 0;
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000107c61434(param_1);
    lVar3 = 3;
    func_0x0001018815d0();
    if ((param_2 & 1) == 0) {
      func_0x000107c6142c(param_1);
      lVar3 = 0;
      lVar4 = *(long *)(param_1 + 0x10);
    }
    else {
      lVar4 = *(long *)(*(long *)(param_1 + 0x38) + lVar3 * 8);
      func_0x000107c61434(lVar4);
      func_0x000107c6142c(param_1);
      lVar3 = *(long *)(lVar4 + 0x10);
      func_0x000107c6142c(lVar4);
      lVar4 = *(long *)(param_1 + 0x10);
    }
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar4 != 0) {
      func_0x000107c61434(param_1);
      lVar4 = 4;
      func_0x0001018815d0();
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if ((param_2 & 1) != 0) {
        puVar5 = *(undefined **)(*(long *)(param_1 + 0x38) + lVar4 * 8);
        func_0x000107c61434(puVar5);
      }
      func_0x000107c6142c(param_1);
    }
  }
  lVar8 = *(long *)(puVar5 + 0x10);
  func_0x000107c6142c(puVar5);
  lVar4 = lVar3 + lVar8;
  if (!SCARRY8(lVar3,lVar8)) {
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (*(long *)(param_1 + 0x10) != 0) {
      func_0x000107c61434(param_1);
      lVar3 = 5;
      func_0x0001018815d0();
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if ((param_2 & 1) != 0) {
        puVar5 = *(undefined **)(*(long *)(param_1 + 0x38) + lVar3 * 8);
        func_0x000107c61434(puVar5);
      }
      func_0x000107c6142c(param_1);
    }
    lVar3 = *(long *)(puVar5 + 0x10);
    func_0x000107c6142c(puVar5);
    uVar1 = lVar4 + lVar3;
    if (!SCARRY8(lVar4,lVar3)) {
      if (uVar7 <= uVar6) {
        uVar7 = uVar6;
      }
      if ((long)uVar1 <= (long)uVar7) {
        uVar1 = uVar7;
      }
      return uVar1;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10187d904);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10187d900);
  (*pcVar2)();
}



/* Entry: 10187d904; end: 10187db1b;  */

bool FUN_10187d904(double param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  double dVar12;
  
  lVar11 = *(long *)(param_2 + 0x10);
  if (lVar11 != 0) {
    puVar9 = (undefined8 *)(param_2 + 0x30);
    lVar7 = lVar11;
    do {
      lVar5 = puVar9[-2];
      uVar6 = puVar9[-1];
      uVar4 = *puVar9;
      uVar8 = uVar4;
      func_0x000107c61174(uVar4);
      func_0x000107c61174();
      func_0x000107c61174(uVar6);
      lVar1 = lVar5;
      func_0x0001018868c8(lVar5,uVar6,uVar4);
      if (((int)lVar1 == 4) ||
         (lVar1 = lVar5, func_0x0001018868c8(lVar5,uVar6,uVar4), (int)lVar1 == 3))
      goto LAB_10187d9c0;
      func_0x000107c61170(uVar8);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(lVar5);
      lVar7 = lVar7 + -1;
      puVar9 = puVar9 + 3;
    } while (lVar7 != 0);
    uVar4 = 0;
    uVar6 = 0;
    lVar5 = 0;
LAB_10187d9c0:
    puVar9 = (undefined8 *)(param_2 + 0x30);
    do {
      lVar7 = puVar9[-2];
      uVar8 = puVar9[-1];
      uVar10 = *puVar9;
      uVar2 = uVar10;
      func_0x000107c61174(uVar10);
      func_0x000107c61174();
      func_0x000107c61174();
      lVar1 = lVar7;
      func_0x0001018868c8(lVar7,uVar8,uVar10);
      if (((int)lVar1 == 10) || (uVar3 = uVar8, func_0x000107c30b24(), (int)uVar3 == 4)) {
        if (lVar5 == 0) goto LAB_10187dacc;
        if (lVar7 != 0) {
          func_0x0001018868e4(lVar7,uVar8,uVar10);
          dVar12 = param_1;
          func_0x0001018868e4(lVar5,uVar6,uVar4);
          func_0x000107c61170(uVar2);
          func_0x000107c61170(uVar8);
          func_0x000107c61170(lVar7);
          func_0x000107c61170(uVar6);
          func_0x000107c61170(lVar5);
          func_0x000107c61170(uVar4);
          if (param_1 - dVar12 <= 0.0) {
            return false;
          }
          return param_1 - dVar12 < 400.0;
        }
        goto LAB_10187dae0;
      }
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uVar8);
      func_0x000107c61170(lVar7);
      lVar11 = lVar11 + -1;
      puVar9 = puVar9 + 3;
    } while (lVar11 != 0);
    if (lVar5 != 0) {
LAB_10187dae0:
      func_0x000107c61170(uVar6);
      func_0x000107c61170(lVar5);
      func_0x000107c61170(uVar4);
      return false;
    }
  }
  uVar10 = 0;
  uVar8 = 0;
  lVar7 = 0;
LAB_10187dacc:
  FUN_101878600(lVar7,uVar8,uVar10);
  return false;
}



/* Entry: 10187db1c; end: 10187e2f7;  */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_10187db1c(ulong param_1,ulong param_2,undefined8 param_3,long param_4,undefined8 param_5,
                   ulong param_6)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (param_2 != 0) {
    uVar18 = param_2;
    if (*(long *)(param_2 + 0x10) == 0) {
      uVar11 = 0;
      puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      func_0x000107c61434(param_2);
      lVar3 = 1;
      func_0x0001018815d0();
      if ((uVar18 & 1) == 0) {
        func_0x000107c6142c(param_2);
        uVar11 = 0;
        lVar3 = *(long *)(param_2 + 0x10);
      }
      else {
        lVar3 = *(long *)(*(long *)(param_2 + 0x38) + lVar3 * 8);
        func_0x000107c61434(lVar3);
        func_0x000107c6142c(param_2);
        uVar11 = *(ulong *)(lVar3 + 0x10);
        func_0x000107c6142c(lVar3);
        lVar3 = *(long *)(param_2 + 0x10);
      }
      puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (lVar3 != 0) {
        func_0x000107c61434(param_2);
        lVar3 = 2;
        func_0x0001018815d0();
        puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if ((uVar18 & 1) != 0) {
          puVar10 = *(undefined **)(*(long *)(param_2 + 0x38) + lVar3 * 8);
          func_0x000107c61434(puVar10);
        }
        func_0x000107c6142c(param_2);
      }
    }
    uVar13 = *(ulong *)(puVar10 + 0x10);
    func_0x000107c6142c(puVar10);
    if (*(long *)(param_2 + 0x10) == 0) {
      lVar3 = 0;
      puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      func_0x000107c61434(param_2);
      lVar3 = 3;
      func_0x0001018815d0();
      if ((uVar18 & 1) == 0) {
        func_0x000107c6142c(param_2);
        lVar3 = 0;
        lVar9 = *(long *)(param_2 + 0x10);
      }
      else {
        lVar9 = *(long *)(*(long *)(param_2 + 0x38) + lVar3 * 8);
        func_0x000107c61434(lVar9);
        func_0x000107c6142c(param_2);
        lVar3 = *(long *)(lVar9 + 0x10);
        func_0x000107c6142c(lVar9);
        lVar9 = *(long *)(param_2 + 0x10);
      }
      puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (lVar9 != 0) {
        func_0x000107c61434(param_2);
        lVar9 = 4;
        func_0x0001018815d0();
        puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if ((uVar18 & 1) != 0) {
          puVar10 = *(undefined **)(*(long *)(param_2 + 0x38) + lVar9 * 8);
          func_0x000107c61434(puVar10);
        }
        func_0x000107c6142c(param_2);
      }
    }
    lVar16 = *(long *)(puVar10 + 0x10);
    func_0x000107c6142c(puVar10);
    lVar9 = lVar3 + lVar16;
    if (SCARRY8(lVar3,lVar16)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10187d900);
      (*pcVar1)();
    }
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (*(long *)(param_2 + 0x10) != 0) {
      func_0x000107c61434(param_2);
      lVar3 = 5;
      func_0x0001018815d0();
      puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if ((uVar18 & 1) != 0) {
        puVar10 = *(undefined **)(*(long *)(param_2 + 0x38) + lVar3 * 8);
        func_0x000107c61434(puVar10);
      }
      func_0x000107c6142c(param_2);
    }
    lVar3 = *(long *)(puVar10 + 0x10);
    func_0x000107c6142c(puVar10);
    uVar18 = lVar9 + lVar3;
    if (SCARRY8(lVar9,lVar3)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10187d904);
      (*pcVar1)();
    }
    if (uVar13 <= uVar11) {
      uVar13 = uVar11;
    }
    if ((long)uVar18 <= (long)uVar13) {
      uVar18 = uVar13;
    }
    return uVar18;
  }
  if (param_4 == 0) {
    uStack_b8 = 0;
    lStack_b0 = 0;
    lVar3 = 0;
    uVar17 = 0;
    lStack_a8 = 0;
    lVar9 = 0;
    lVar16 = *(long *)(param_1 + 0x10);
    goto joined_r0x00010187dbdc;
  }
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (*(long *)(param_4 + 0x10) != 0) {
    func_0x000107c61434(param_4);
    lVar3 = 10;
    func_0x0001018815c8();
    if ((param_2 & 1) == 0) {
      func_0x000107c6142c(param_4);
      lVar3 = *(long *)(param_4 + 0x10);
      puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      lVar3 = *(long *)(*(long *)(param_4 + 0x38) + lVar3 * 8);
      func_0x000107c61434(lVar3);
      func_0x000107c6142c(param_4);
      lVar9 = *(long *)(lVar3 + 0x10);
      func_0x000107c6142c(lVar3);
      if (lVar9 != 0) {
        return 1;
      }
      lVar3 = *(long *)(param_4 + 0x10);
      puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = puVar10;
    if (lVar3 != 0) {
      func_0x000107c61434(param_4);
      lVar3 = 9;
      func_0x0001018815c8();
      if ((param_2 & 1) == 0) {
        func_0x000107c6142c(param_4);
      }
      else {
        lVar3 = *(long *)(*(long *)(param_4 + 0x38) + lVar3 * 8);
        func_0x000107c61434(lVar3);
        func_0x000107c6142c(param_4);
        lVar9 = *(long *)(lVar3 + 0x10);
        func_0x000107c6142c(lVar3);
        if (lVar9 != 0) {
          return 1;
        }
      }
      puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (*(long *)(param_4 + 0x10) != 0) {
        func_0x000107c61434(param_4);
        lVar3 = 1;
        func_0x0001018815c8();
        puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if ((param_2 & 1) != 0) {
          puVar10 = *(undefined **)(*(long *)(param_4 + 0x38) + lVar3 * 8);
          func_0x000107c61434(puVar10);
        }
        func_0x000107c6142c(param_4);
      }
    }
  }
  if (*(long *)(puVar10 + 0x10) == 0) {
    lVar3 = 0;
    uVar17 = 0;
  }
  else {
    lVar3 = *(long *)(puVar10 + 0x20);
    uVar17 = *(undefined8 *)(puVar10 + 0x28);
    func_0x000107c61174(lVar3);
    func_0x000107c61174(uVar17);
  }
  func_0x000107c6142c(puVar10);
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (*(long *)(param_4 + 0x10) != 0) {
    func_0x000107c61434(param_4);
    lVar9 = 7;
    func_0x0001018815c8();
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if ((param_2 & 1) != 0) {
      puVar10 = *(undefined **)(*(long *)(param_4 + 0x38) + lVar9 * 8);
      func_0x000107c61434(puVar10);
    }
    func_0x000107c6142c(param_4);
  }
  plVar8 = (long *)(puVar10 + 0x10);
  if (*plVar8 == 0) {
    lStack_a8 = 0;
    lVar9 = 0;
  }
  else {
    lStack_a8 = plVar8[*plVar8 * 2];
    lVar9 = (plVar8 + *plVar8 * 2)[1];
    func_0x000107c61174();
    func_0x000107c61174(lVar9);
  }
  func_0x000107c6142c(puVar10);
  if (*(long *)(param_4 + 0x10) == 0) {
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (*(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10) != 0) goto LAB_10187dde8;
LAB_10187ddc0:
    func_0x000107c6142c(puVar10);
    uStack_b8 = 0;
    lStack_b0 = 0;
  }
  else {
    func_0x000107c61434(param_4);
    lVar16 = 2;
    func_0x0001018815c8();
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if ((param_2 & 1) != 0) {
      puVar10 = *(undefined **)(*(long *)(param_4 + 0x38) + lVar16 * 8);
      func_0x000107c61434(puVar10);
    }
    func_0x000107c6142c(param_4);
    if (*(long *)(puVar10 + 0x10) == 0) goto LAB_10187ddc0;
LAB_10187dde8:
    lStack_b0 = *(long *)(puVar10 + 0x20);
    uStack_b8 = *(undefined8 *)(puVar10 + 0x28);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c6142c(puVar10);
  }
  lVar16 = *(long *)(param_1 + 0x10);
joined_r0x00010187dbdc:
  if (lVar16 == 0) {
    uStack_a0 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    lVar20 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    lVar15 = 0;
    uStack_98 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uVar18 = 0;
    bVar2 = true;
  }
  else {
    uVar18 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    lVar15 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    lVar20 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    puVar21 = (undefined8 *)(param_1 + 0x30);
    do {
      lVar5 = puVar21[-2];
      uVar6 = puVar21[-1];
      uVar14 = *puVar21;
      uVar4 = uVar14;
      func_0x000107c61174(uVar14);
      func_0x000107c61174();
      func_0x000107c61174();
      lVar12 = lVar5;
      func_0x0001018868c8(lVar5,uVar6,uVar14);
      if ((int)lVar12 == 3) {
        if (lVar20 == 0) {
          func_0x000107c61174(lVar5);
          func_0x000107c61174(uVar6);
          func_0x000107c61174(uVar4);
          lVar20 = lVar5;
          uStack_70 = uVar6;
          uStack_68 = uVar14;
        }
LAB_10187df1c:
        if (lVar15 != 0) goto LAB_10187df20;
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar6);
        func_0x000107c61170(lVar5);
      }
      else {
        lVar12 = lVar5;
        func_0x0001018868c8(lVar5,uVar6,uVar14);
        if ((int)lVar12 != 4) goto LAB_10187df1c;
        if (lVar15 == 0) {
          func_0x000107c61174(lVar5);
          func_0x000107c61174(uVar6);
          func_0x000107c61174(uVar4);
          lVar15 = lVar5;
          uStack_90 = uVar6;
          uStack_88 = uVar14;
        }
LAB_10187df20:
        lVar12 = lVar5;
        func_0x0001018868c8(lVar5,uVar6,uVar14);
        if ((int)lVar12 == 7) {
          FUN_101878600(0,0,0);
          FUN_101878600(lVar20,uStack_70,uStack_68);
          FUN_101878600(0,uStack_80,uStack_78);
          FUN_101878600(0,uStack_a0,uStack_98);
          FUN_101878600(0,0,0);
          FUN_101878600(0,0,0);
          func_0x000107c61170(uVar4);
          func_0x000107c61170(uVar6);
          func_0x000107c61170(lVar5);
        }
        else {
          lVar12 = lVar5;
          func_0x0001018868c8(lVar5,uVar6,uVar14);
          if ((int)lVar12 == 6) {
            FUN_101878600(0,0,0);
            FUN_101878600(lVar20,uStack_70,uStack_68);
            FUN_101878600(0,uStack_80,uStack_78);
            FUN_101878600(0,uStack_a0,uStack_98);
            FUN_101878600(0,0,0);
            func_0x000107c61170(uVar4);
            func_0x000107c61170(uVar6);
            func_0x000107c61170(lVar5);
          }
          else {
            lVar12 = lVar5;
            func_0x0001018868c8(lVar5,uVar6,uVar14);
            if ((int)lVar12 == 8) {
              FUN_101878600(0,0,0);
              FUN_101878600(lVar20,uStack_70,uStack_68);
              FUN_101878600(0,uStack_80,uStack_78);
              FUN_101878600(0,uStack_a0,uStack_98);
              func_0x000107c61170(uVar4);
              func_0x000107c61170(uVar6);
              func_0x000107c61170(lVar5);
            }
            else {
              lVar12 = lVar5;
              func_0x0001018868c8(lVar5,uVar6,uVar14);
              if (((int)lVar12 == 10) && (uVar7 = uVar6, func_0x000107c30b28(), (int)uVar7 != 0)) {
                FUN_101878600(0,uStack_a0,uStack_98);
                lVar12 = lVar5;
                uStack_a0 = uVar6;
                uStack_98 = uVar14;
joined_r0x00010187e124:
                lVar5 = 0;
                lVar19 = lVar5;
                if (lStack_a8 != 0) goto LAB_10187e134;
LAB_10187e128:
                lVar19 = lVar5;
                if ((lStack_b0 != 0) || (lVar12 != 0)) goto LAB_10187e134;
                if (lVar5 == 0) goto LAB_10187de64;
                FUN_101878600(lVar20,uStack_70,uStack_68);
                uStack_a0 = uStack_80;
                uStack_98 = uStack_78;
              }
              else {
                uVar7 = uVar6;
                func_0x000107c30b24();
                if ((int)uVar7 != 5) {
                  func_0x000107c61170(uVar4);
                  func_0x000107c61170(uVar6);
                  func_0x000107c61170(lVar5);
                  lVar12 = 0;
                  goto joined_r0x00010187e124;
                }
                FUN_101878600(0,uStack_80,uStack_78);
                lVar12 = 0;
                lVar19 = lVar5;
                uStack_80 = uVar6;
                uStack_78 = uVar14;
                if (lStack_a8 == 0) goto LAB_10187e128;
LAB_10187e134:
                lVar5 = lVar12;
                FUN_101878600(lVar20,uStack_70,uStack_68);
                FUN_101878600(lVar19,uStack_80,uStack_78);
              }
              FUN_101878600(lVar5,uStack_a0,uStack_98);
              FUN_101878600(0,0,0);
            }
            FUN_101878600(0,0,0);
          }
          FUN_101878600(0,0,0);
        }
        FUN_101878600(lVar15,uStack_90,uStack_88);
        bVar2 = SCARRY8(uVar18,1);
        uVar18 = uVar18 + 1;
        if (bVar2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10187e2f8);
          (*pcVar1)();
        }
        uStack_80 = 0;
        uStack_78 = 0;
        uStack_a0 = 0;
        uStack_98 = 0;
        lVar15 = 0;
        uStack_90 = 0;
        uStack_88 = 0;
        lVar20 = 0;
        uStack_70 = 0;
        uStack_68 = 0;
      }
LAB_10187de64:
      puVar21 = puVar21 + 3;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    uVar11 = uVar18;
    if (lVar20 != 0) {
      uVar11 = (ulong)((lVar3 != 0 || lStack_a8 != 0) || lStack_b0 != 0);
    }
    bVar2 = lVar20 == 0;
    if (uVar18 == 0) {
      uVar18 = uVar11;
    }
    param_6 = param_6 & 0xffffffff;
  }
  uVar11 = uVar18;
  if ((param_6 & 1) != 0) {
    uVar11 = 1;
  }
  if (!(bool)(uVar18 != 0 | bVar2)) {
    uVar18 = uVar11;
  }
  if (uVar18 == 0) {
    FUN_10187d904(param_1);
    uVar18 = param_1;
  }
  FUN_101878600(0,uStack_80,uStack_78);
  FUN_101878600(0,uStack_a0,uStack_98);
  FUN_101878600(0,0,0);
  FUN_101878600(0,0,0);
  FUN_101878600(0,0,0);
  FUN_101878600(lVar15,uStack_90,uStack_88);
  FUN_101878600(lVar20,uStack_70,uStack_68);
  func_0x00010187e324(lStack_a8,lVar9);
  func_0x00010187e324(lStack_b0,uStack_b8);
  func_0x00010187e324(lVar3,uVar17);
  return uVar18;
}



/* Entry: 10187e2f8; end: 10187e3a3;  */

/* WARNING: Possible PIC construction at 0x00010187e30c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010187e310) */

void FUN_10187e2f8(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  return;
}



/* Entry: 10187e3a4; end: 10187e53f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10187e3a4(undefined8 *param_1,long param_2,code *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 *puVar10;
  
  pcVar6 = param_3;
  FUN_101881b6c();
  func_0x000107c6142c();
  lVar9 = *(long *)(pcVar6 + 0x10);
  func_0x000107c6142c(pcVar6);
  if ((lVar9 != 0) && (*(int *)(param_2 + 0x10) == 5)) {
    uVar2 = param_2 + _DAT_113803418;
    (*param_3)();
    if ((uVar2 & 1) != 0) {
      FUN_101883988();
      puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      lVar9 = *(long *)(uVar2 + 0x10);
      if (lVar9 == 0) {
        func_0x000107c6142c(uVar2);
        lVar9 = *(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
        puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        func_0x0001018740f8(0,lVar9,0);
        puVar10 = (undefined8 *)(uVar2 + 0x28);
        do {
          uVar3 = puVar10[-1];
          uVar4 = *puVar10;
          func_0x000107c61174();
          func_0x000107c61174();
          uVar5 = uVar3;
          uVar7 = uVar4;
          FUN_1018868f8();
          func_0x000107c61170(uVar4);
          func_0x000107c61170(uVar3);
          uVar1 = *(ulong *)(puVar8 + 0x10);
          if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
            func_0x0001018740f8(1 < *(ulong *)(puVar8 + 0x18),uVar1 + 1,1);
          }
          puVar10 = puVar10 + 2;
          *(ulong *)(puVar8 + 0x10) = uVar1 + 1;
          *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x20) = uVar5;
          *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x28) = uVar7;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        func_0x000107c6142c(uVar2);
        lVar9 = *(long *)(puVar8 + 0x10);
      }
      if (lVar9 != 0) goto LAB_10187e51c;
      func_0x000107c6142c(puVar8);
    }
  }
  puVar8 = (undefined *)0x1;
LAB_10187e51c:
  *param_1 = puVar8;
  return;
}



/* Entry: 10187e540; end: 10187e6df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10187e540(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_58 = 1;
  uStack_60 = 0;
  if ((*(ulong *)(param_2 + _DAT_113803448 + 0x20) & 0xfffffffe) == 0x16) {
    uStack_58 = 1;
    uStack_60 = 0;
    FUN_10188cb54();
    if (param_2 != 0) {
      lVar5 = *(long *)(param_3 + 0x10) + 1;
      puVar1 = (undefined8 *)(param_3 + *(long *)(param_3 + 0x10) * 0x18 + 0x30);
      do {
        puVar8 = puVar1;
        lVar5 = lVar5 + -1;
        if (lVar5 == 0) {
          func_0x000107c6142c(param_3);
          func_0x000107c6142c(param_2);
          goto LAB_10187e6b0;
        }
        if (*(long *)(param_3 + 0x10) < lVar5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10187e6e0);
          (*pcVar2)();
        }
        iVar3 = (int)puVar8[-4];
        func_0x000107c30b30();
        puVar1 = puVar8 + -3;
      } while (iVar3 == 0);
      lVar5 = puVar8[-5];
      uVar6 = puVar8[-4];
      uVar9 = puVar8[-3];
      uVar4 = uVar9;
      func_0x000107c61174(uVar9);
      func_0x000107c61174();
      func_0x000107c61174(uVar6);
      func_0x000107c6142c(param_3);
      func_0x000107c6142c(param_2);
      func_0x000107c61174();
      func_0x000107c61174(uVar6);
      func_0x000107c61174(uVar4);
      lVar7 = lVar5;
      func_0x0001018868c8(lVar5,uVar6,uVar9);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(lVar5);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(lVar5);
      if (lVar7 == 8) {
        uStack_58 = 0xe500000000000000;
        uStack_60 = 0x524548544f;
      }
      else if (lVar7 == 10) {
        uStack_58 = 0xea0000000000444e;
        uStack_60 = 0x554f52474b434142;
      }
    }
  }
LAB_10187e6b0:
  param_1[1] = uStack_58;
  *param_1 = uStack_60;
  return;
}



/* Entry: 10187e6e0; end: 10187e6ef;  */

undefined1  [16] FUN_10187e6e0(void)

{
  return ZEXT816(0x11040a338);
}



/* Entry: 10187e6f0; end: 10187e78b;  */

undefined1 * FUN_10187e6f0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long extraout_x8;
  
  lVar1 = 0;
  func_0x0001046d90b0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000101541068(param_1,puVar3);
  uVar2 = 0;
  func_0x0001047c6864(0);
  func_0x000107c610f8();
  func_0x0001047c2b40(puVar3,uVar2);
  puVar4 = puVar3;
  func_0x000107c5e224();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  return puVar4;
}



/* Entry: 10187e78c; end: 10187e79b;  */

undefined1  [16] FUN_10187e78c(void)

{
  return ZEXT816(0x11040a358);
}



/* Entry: 10187e79c; end: 10187e97f;  */

void FUN_10187e79c(undefined1 *param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  FUN_101883748();
  uVar6 = *(ulong *)(param_2 + 0x10);
  if (uVar6 != 0) {
    uVar7 = 0;
    puVar8 = (undefined8 *)(param_2 + 0x28);
    do {
      if (*(ulong *)(param_2 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10187e88c);
        (*pcVar1)();
      }
      uVar2 = puVar8[-1];
      uVar3 = *puVar8;
      func_0x000107c61174();
      func_0x000107c61174(uVar3);
      uVar4 = uVar2;
      func_0x0001018868e8(uVar2,uVar3);
      if ((int)uVar4 == 3) {
        uVar4 = uVar2;
        func_0x0001018868f0(uVar2,uVar3);
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uVar2);
        if ((int)uVar4 == 8) {
          uVar5 = 1;
          goto LAB_10187e864;
        }
      }
      else {
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uVar2);
      }
      uVar7 = uVar7 + 1;
      puVar8 = puVar8 + 2;
    } while (uVar6 != uVar7);
  }
  uVar5 = 2;
LAB_10187e864:
  func_0x000107c6142c(param_2);
  *param_1 = uVar5;
  return;
}



/* Entry: 10187e980; end: 10187ea1f;  */

void FUN_10187e980(undefined1 *param_1,ulong param_2)

{
  long lVar1;
  code *pcVar2;
  undefined1 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  FUN_10187f1f8();
  if ((param_2 & 1) == 0) {
    uVar3 = 2;
  }
  else {
    FUN_1018832c8();
    lVar5 = *(long *)(param_2 + 0x10);
    uVar7 = 0xffffffffffffffff;
    lVar6 = 0x28;
    do {
      lVar1 = uVar7 - lVar5;
      if (lVar1 == -1) break;
      uVar7 = uVar7 + 1;
      if (*(ulong *)(param_2 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10187ea20);
        (*pcVar2)();
      }
      iVar4 = (int)*(undefined8 *)(param_2 + lVar6);
      func_0x000107c30c60();
      lVar6 = lVar6 + 0x10;
    } while (iVar4 == 0);
    uVar3 = lVar1 != -1;
    func_0x000107c6142c(param_2);
  }
  *param_1 = uVar3;
  return;
}



/* Entry: 10187ea20; end: 10187eb0b;  */

void FUN_10187ea20(undefined1 *param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  
  FUN_10187f1f8();
  if ((param_2 & 1) == 0) {
    uVar5 = 2;
  }
  else {
    FUN_1018832c8();
    uVar6 = *(ulong *)(param_2 + 0x10);
    if (uVar6 != 0) {
      uVar7 = 0;
      puVar8 = (ulong *)(param_2 + 0x28);
      do {
        if (*(ulong *)(param_2 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10187eb0c);
          (*pcVar1)();
        }
        uVar2 = puVar8[-1];
        uVar3 = *puVar8;
        func_0x000107c61174(uVar2);
        func_0x000107c61174();
        uVar4 = uVar3;
        func_0x000107c30c60();
        if ((int)uVar4 == 0) {
          func_0x000107c61170(uVar3);
          func_0x000107c61170(uVar2);
        }
        else {
          uVar4 = uVar3;
          func_0x000107c30c64();
          func_0x000107c61170(uVar3);
          func_0x000107c61170(uVar2);
          if ((uVar4 & 1) != 0) {
            uVar5 = 1;
            goto LAB_10187eae4;
          }
        }
        uVar7 = uVar7 + 1;
        puVar8 = puVar8 + 2;
      } while (uVar6 != uVar7);
    }
    uVar5 = 0;
LAB_10187eae4:
    func_0x000107c6142c(param_2);
  }
  *param_1 = uVar5;
  return;
}



/* Entry: 10187eb0c; end: 10187eb5f;  */

void FUN_10187eb0c(undefined8 *param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2;
  FUN_10187f1f8();
  bVar1 = (uVar2 & 1) == 0;
  if (bVar1) {
    uVar3 = 0;
  }
  else {
    FUN_10187f2c4();
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    func_0x000107c6142c();
  }
  *param_1 = uVar3;
  *(undefined1 *)(param_1 + 1) = 0;
  *(bool *)((long)param_1 + 9) = bVar1;
  return;
}



/* Entry: 10187eb60; end: 10187ec27;  */

void FUN_10187eb60(long *param_1,ulong param_2,code *param_3)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  FUN_10187f1f8();
  if ((param_2 & 1) == 0) {
    lVar3 = 0;
    uVar4 = 0;
    uVar2 = 1;
  }
  else {
    FUN_1018832c8();
    if (*(long *)(param_2 + 0x10) == 0) {
      func_0x000107c6142c();
    }
    else {
      lVar3 = *(long *)(param_2 + 0x28);
      func_0x000107c61174();
      func_0x000107c6142c(param_2);
      lVar1 = lVar3;
      (*param_3)();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      if (lVar1 != 0) {
        lVar3 = lVar1;
        func_0x000107c49820();
        func_0x000107c61170(lVar1);
        uVar4 = 0;
        uVar2 = 0;
        goto LAB_10187ec0c;
      }
    }
    lVar3 = 0;
    uVar2 = 0;
    uVar4 = 1;
  }
LAB_10187ec0c:
  *param_1 = lVar3;
  *(undefined1 *)(param_1 + 1) = uVar4;
  *(undefined1 *)((long)param_1 + 9) = uVar2;
  return;
}



/* Entry: 10187ec28; end: 10187ed17;  */

void FUN_10187ec28(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  FUN_101882438();
  func_0x000107c6142c();
  lVar8 = *(long *)(param_3 + 0x10) + 1;
  puVar1 = (undefined8 *)(param_3 + *(long *)(param_3 + 0x10) * 0x10 + 0x18);
  do {
    puVar6 = puVar1;
    lVar8 = lVar8 + -1;
    if (lVar8 == 0) {
      func_0x000107c6142c(param_3);
      uVar7 = 0;
      uVar5 = 1;
      goto LAB_10187ecf4;
    }
    if (*(long *)(param_3 + 0x10) < lVar8) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10187ed18);
      (*pcVar2)();
    }
    uVar7 = puVar6[-1];
    uVar4 = *puVar6;
    func_0x000107c61174(uVar7);
    func_0x000107c61174();
    uVar3 = uVar4;
    func_0x000107c30c40();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar7);
    puVar1 = puVar6 + -2;
  } while ((int)uVar3 == 0);
  uVar4 = *puVar6;
  func_0x000107c61174();
  func_0x000107c6142c(param_3);
  uVar7 = uVar4;
  func_0x000107c30c40();
  func_0x000107c61170(uVar4);
  uVar5 = 0;
LAB_10187ecf4:
  *param_1 = uVar7;
  *(undefined1 *)(param_1 + 1) = uVar5;
  return;
}



/* Entry: 10187ed18; end: 10187ee3f;  */

void FUN_10187ed18(undefined1 *param_1,long param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  undefined1 uVar3;
  long lVar4;
  
  func_0x00010188244c();
  if (*(long *)(param_2 + 0x10) != 0) {
    uVar2 = param_3;
    func_0x000107c61434(param_2);
    lVar1 = 5;
    func_0x0001018815d8();
    if ((uVar2 & 1) != 0) {
      lVar4 = *(long *)(*(long *)(param_2 + 0x38) + lVar1 * 8);
      func_0x000107c61434(lVar4);
      func_0x000107c6142c(param_3);
      func_0x000107c61430(param_2,2);
      lVar1 = *(long *)(lVar4 + 0x10);
      func_0x000107c6142c(lVar4);
      uVar3 = 1;
      if (lVar1 == 0) {
        uVar3 = 2;
      }
      goto LAB_10187edb4;
    }
    func_0x000107c6142c(param_2);
  }
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(param_3);
  uVar3 = 2;
LAB_10187edb4:
  *param_1 = uVar3;
  return;
}



/* Entry: 10187ee40; end: 10187eec7;  */

void FUN_10187ee40(undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  FUN_10187f48c();
  uVar3 = 0;
  if (param_3 != 0) {
    func_0x000107c61170();
    lVar1 = param_4;
    func_0x000107c30c4c();
    func_0x000107c61180();
    func_0x000107c61170(param_4);
    if (lVar1 != 0) {
      func_0x000107c4223c(lVar1);
      func_0x000107c61170(lVar1);
      uVar2 = 0;
      uVar3 = param_2;
      goto LAB_10187eeac;
    }
  }
  uVar2 = 1;
LAB_10187eeac:
  *param_1 = uVar3;
  *(undefined1 *)(param_1 + 1) = uVar2;
  return;
}



/* Entry: 10187eec8; end: 10187ef37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10187eec8(long *param_1,long param_2,code *param_3)

{
  long lVar1;
  
  param_2 = param_2 + _DAT_113803418;
  (*param_3)();
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_2;
    func_0x000103bfc614();
    func_0x000107c61170(param_2);
  }
  *param_1 = lVar1;
  *(bool *)(param_1 + 1) = param_2 == 0;
  return;
}



/* Entry: 10187ef38; end: 10187f15f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10187ef38(undefined8 *param_1,long param_2,int *param_3,code *param_4)

{
  int iVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined1 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  
  uVar6 = (undefined4)((ulong)param_3 >> 0x20);
  uVar5 = (uint)param_3;
  iVar1 = *param_3;
  plVar3 = (long *)(param_2 + _DAT_113803418);
  (*param_4)();
  if ((plVar3 == (long *)0x0) ||
     (lVar7 = *(long *)((long)plVar3 + _DAT_1130913c0), func_0x000107c61170(), lVar7 == 0)) {
    if (iVar1 == 0) {
      FUN_101882438();
      plVar8 = (long *)CONCAT44(uVar6,uVar5);
      plVar10 = plVar3;
      func_0x000103c02174();
      plVar9 = (long *)*plVar10;
      uVar13 = plVar9[2];
      plVar4 = plVar8;
      if (uVar13 != 0) {
        func_0x000107c61434(plVar9);
        uVar14 = 0;
        uVar12 = 3;
        do {
          if ((ulong)plVar9[2] <= uVar14) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10187f15c);
            (*pcVar2)();
          }
          if (plVar3[2] != 0) {
            lVar7 = plVar9[uVar14 + 4];
            func_0x000107c61434(plVar3);
            func_0x0001018815c8();
            if ((uVar5 & 1) == 0) {
              func_0x000107c6142c(plVar3);
            }
            else {
              lVar7 = *(long *)(plVar3[7] + lVar7 * 8);
              func_0x000107c61434(lVar7);
              func_0x000107c6142c(plVar3);
              lVar15 = *(long *)(lVar7 + 0x10);
              func_0x000107c6142c(lVar7);
              if (lVar15 != 0) {
                uVar11 = 0;
                plVar8 = plVar3;
                plVar3 = plVar9;
                goto LAB_10187f110;
              }
            }
          }
          uVar14 = uVar14 + 1;
        } while (uVar13 != uVar14);
        func_0x000107c6142c();
        plVar10 = plVar9;
      }
      func_0x000103c021ec();
      plVar10 = (long *)*plVar10;
      uVar13 = plVar10[2];
      if (uVar13 == 0) {
        uVar12 = 0;
        uVar11 = 1;
      }
      else {
        func_0x000107c61434(plVar10);
        uVar14 = 0;
        uVar12 = 1;
        do {
          if ((ulong)plVar10[2] <= uVar14) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10187f160);
            (*pcVar2)();
          }
          if (plVar3[2] != 0) {
            lVar7 = plVar10[uVar14 + 4];
            func_0x000107c61434(plVar3);
            func_0x0001018815c8();
            if ((uVar5 & 1) == 0) {
              func_0x000107c6142c(plVar3);
            }
            else {
              lVar7 = *(long *)(plVar3[7] + lVar7 * 8);
              func_0x000107c61434(lVar7);
              func_0x000107c6142c(plVar3);
              lVar15 = *(long *)(lVar7 + 0x10);
              func_0x000107c6142c(lVar7);
              if (lVar15 != 0) {
                uVar11 = 0;
                plVar4 = plVar10;
                goto LAB_10187f110;
              }
            }
          }
          uVar14 = uVar14 + 1;
        } while (uVar13 != uVar14);
        uVar12 = 0;
        uVar11 = 1;
        plVar8 = plVar3;
        plVar3 = plVar10;
LAB_10187f110:
        func_0x000107c6142c(plVar4);
      }
      func_0x000107c6142c(plVar8);
      func_0x000107c6142c(plVar3);
    }
    else {
      uVar12 = 0;
      uVar11 = 1;
    }
  }
  else {
    uVar11 = 0;
    uVar12 = 1;
  }
  *param_1 = uVar12;
  *(undefined1 *)(param_1 + 1) = uVar11;
  return;
}



/* Entry: 10187f160; end: 10187f1f3;  */

void FUN_10187f160(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined1 auStack_348 [264];
  undefined1 auStack_240 [264];
  undefined1 auStack_138 [264];
  
  func_0x000107c610b4(auStack_138,param_3,0x101);
  uVar1 = param_2;
  FUN_10187f1f8();
  if ((uVar1 & 1) == 0) {
    FUN_10187f290(auStack_240);
  }
  else {
    FUN_10187f590(auStack_348,param_2,auStack_138);
    FUN_1018803e8(auStack_348);
    func_0x000107c610b4(auStack_240,auStack_348,0x101);
    FUN_1018803e8(auStack_240);
  }
  func_0x000107c610b4(param_1,auStack_240,0x101);
  return;
}



/* Entry: 10187f1f4; end: 10187f1f7;  */

void FUN_10187f1f4(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined1 auStack_348 [264];
  undefined1 auStack_240 [264];
  undefined1 auStack_138 [264];
  
  func_0x000107c610b4(auStack_138,param_3,0x101);
  uVar1 = param_2;
  FUN_10187f1f8();
  if ((uVar1 & 1) == 0) {
    FUN_10187f290(auStack_240);
  }
  else {
    FUN_10187f590(auStack_348,param_2,auStack_138);
    FUN_1018803e8(auStack_348);
    func_0x000107c610b4(auStack_240,auStack_348,0x101);
    FUN_1018803e8(auStack_240);
  }
  func_0x000107c610b4(param_1,auStack_240,0x101);
  return;
}



/* Entry: 10187f1f8; end: 10187f28f;  */

bool FUN_10187f1f8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  FUN_1018832c8();
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x000107c6142c();
  if (lVar1 == 0) {
    FUN_101882438();
    lVar1 = param_2;
    func_0x000107c6142c();
    lVar2 = *(long *)(param_2 + 0x10);
    func_0x000107c6142c();
    if (lVar2 == 0) {
      FUN_101883508();
      lVar2 = *(long *)(param_2 + 0x10);
      func_0x000107c6142c();
      if (lVar2 == 0) {
        func_0x00010188244c();
        func_0x000107c6142c();
        lVar2 = *(long *)(lVar1 + 0x10);
        func_0x000107c6142c();
        if (lVar2 == 0) {
          FUN_101883748();
          lVar1 = *(long *)(lVar1 + 0x10);
          func_0x000107c6142c();
          return lVar1 != 0;
        }
      }
    }
  }
  return true;
}



/* Entry: 10187f290; end: 10187f2c3;  */

void FUN_10187f290(undefined8 *param_1)

{
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[10] = 0;
  param_1[0xb] = 2;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 10187f2c4; end: 10187f48b;  */

undefined * FUN_10187f2c4(long param_1,long param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  FUN_1018832c8();
  uVar12 = *(ulong *)(param_1 + 0x10);
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar12 != 0) {
    uVar13 = 0;
    do {
      plVar11 = (long *)(param_1 + 0x28 + uVar13 * 0x10);
      lVar10 = param_2;
      uVar14 = uVar13;
      while( true ) {
        if (*(ulong *)(param_1 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10187f48c);
          (*pcVar2)();
        }
        lVar3 = plVar11[-1];
        lVar4 = *plVar11;
        uVar13 = uVar14 + 1;
        func_0x000107c61174(lVar3);
        func_0x000107c61174();
        func_0x000107c61174(lVar3);
        func_0x000107c61174();
        lVar5 = lVar4;
        func_0x000107c30c54();
        func_0x000107c61180();
        if (lVar5 != 0) break;
        func_0x000107c61170(lVar4);
        func_0x000107c61170(lVar4);
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar3);
        plVar11 = plVar11 + 2;
        uVar14 = uVar13;
        if (uVar12 == uVar13) goto LAB_10187f45c;
      }
      lVar6 = lVar5;
      func_0x000107c5faec();
      param_2 = lVar10;
      func_0x000107c61170(lVar4);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar5);
      puVar7 = puVar9;
      func_0x000107c61558();
      puVar8 = puVar9;
      if (((ulong)puVar7 & 1) == 0) {
        param_2 = *(long *)(puVar9 + 0x10) + 1;
        puVar8 = (undefined *)0x0;
        func_0x0001000d182c(0,param_2,1,puVar9);
      }
      uVar1 = *(ulong *)(puVar8 + 0x10);
      lVar3 = uVar1 + 1;
      puVar9 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
        puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
        param_2 = lVar3;
        func_0x0001000d182c(puVar9,lVar3,1,puVar8);
      }
      *(long *)(puVar9 + 0x10) = lVar3;
      *(long *)(puVar9 + uVar1 * 0x10 + 0x20) = lVar6;
      *(long *)(puVar9 + uVar1 * 0x10 + 0x28) = lVar10;
    } while (uVar12 - 1 != uVar14);
  }
LAB_10187f45c:
  func_0x000107c6142c(param_1);
  return puVar9;
}



/* Entry: 10187f48c; end: 10187f58f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10187f48c(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined *puVar5;
  undefined1 auVar6 [16];
  
  if ((*(ulong *)(param_1 + _DAT_113803428) & 0xfffffffe) != 0x16) {
    return ZEXT816(0);
  }
  FUN_101882438();
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar2 = param_2;
    func_0x000107c61434(param_1);
    lVar1 = 5;
    func_0x0001018815c8();
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if ((uVar2 & 1) != 0) {
      puVar5 = *(undefined **)(*(long *)(param_1 + 0x38) + lVar1 * 8);
      func_0x000107c61434(puVar5);
    }
    func_0x000107c6142c(param_1);
  }
  func_0x000107c6142c(param_1);
  func_0x000107c6142c(param_2);
  plVar4 = (long *)(puVar5 + 0x10);
  if (*plVar4 == 0) {
    func_0x000107c6142c(puVar5);
    lVar1 = 0;
    lVar3 = 0;
  }
  else {
    lVar1 = plVar4[*plVar4 * 2];
    lVar3 = (plVar4 + *plVar4 * 2)[1];
    func_0x000107c61174(lVar1);
    func_0x000107c61174(lVar3);
    func_0x000107c6142c(puVar5);
  }
  auVar6._8_8_ = lVar3;
  auVar6._0_8_ = lVar1;
  return auVar6;
}



/* Entry: 10187f590; end: 1018803e7;  */

void FUN_10187f590(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  code *pcVar12;
  bool bVar13;
  int iVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  ulong uVar26;
  undefined8 *puVar27;
  long *plVar28;
  undefined8 *puVar29;
  ulong uVar30;
  undefined8 *puVar31;
  long lVar32;
  long lVar33;
  ulong uVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  undefined8 *puStack_7d8;
  undefined8 *puStack_7c8;
  undefined8 *puStack_7c0;
  undefined8 *puStack_7b0;
  undefined8 *puStack_7a0;
  undefined8 *puStack_790;
  undefined8 *puStack_780;
  undefined8 *puStack_770;
  undefined8 *puStack_760;
  undefined8 *puStack_750;
  undefined8 *puStack_748;
  undefined8 *puStack_740;
  undefined1 auStack_738 [264];
  undefined8 *puStack_630;
  undefined1 uStack_628;
  undefined4 uStack_627;
  undefined3 uStack_623;
  undefined8 *puStack_620;
  undefined1 uStack_618;
  undefined4 uStack_617;
  undefined3 uStack_613;
  undefined8 *puStack_610;
  undefined1 uStack_608;
  undefined4 uStack_607;
  undefined3 uStack_603;
  undefined8 *puStack_600;
  undefined1 uStack_5f8;
  undefined4 uStack_5f7;
  undefined3 uStack_5f3;
  double dStack_5f0;
  undefined1 uStack_5e8;
  undefined1 uStack_5e7;
  undefined4 uStack_5e6;
  undefined2 uStack_5e2;
  undefined8 *puStack_5e0;
  undefined8 *puStack_5d8;
  undefined8 *puStack_5d0;
  undefined8 *puStack_5c8;
  undefined8 *puStack_5c0;
  undefined1 uStack_5b8;
  undefined4 uStack_5b7;
  undefined3 uStack_5b3;
  undefined8 *puStack_5b0;
  undefined1 uStack_5a8;
  undefined4 uStack_5a7;
  undefined3 uStack_5a3;
  undefined8 *puStack_5a0;
  undefined1 uStack_598;
  undefined4 uStack_597;
  undefined3 uStack_593;
  undefined8 *puStack_590;
  undefined1 uStack_588;
  undefined4 uStack_587;
  undefined3 uStack_583;
  undefined8 *puStack_580;
  undefined1 uStack_578;
  undefined4 uStack_577;
  undefined3 uStack_573;
  undefined8 *puStack_570;
  undefined8 *puStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  double dStack_540;
  undefined8 uStack_538;
  undefined1 uStack_530;
  undefined8 *puStack_528;
  undefined1 uStack_520;
  undefined4 uStack_51f;
  undefined3 uStack_51b;
  undefined8 *puStack_518;
  undefined1 uStack_510;
  undefined4 uStack_50f;
  undefined3 uStack_50b;
  undefined8 *puStack_508;
  undefined1 uStack_500;
  undefined4 uStack_4ff;
  undefined3 uStack_4fb;
  undefined8 *puStack_4f8;
  undefined1 uStack_4f0;
  undefined4 uStack_4ef;
  undefined3 uStack_4eb;
  double dStack_4e8;
  undefined1 uStack_4e0;
  undefined1 uStack_4df;
  undefined4 uStack_4de;
  undefined2 uStack_4da;
  undefined8 *puStack_4d8;
  undefined8 *puStack_4d0;
  undefined8 *puStack_4c8;
  undefined8 *puStack_4c0;
  undefined8 *puStack_4b8;
  undefined1 uStack_4b0;
  undefined4 uStack_4af;
  undefined3 uStack_4ab;
  undefined8 *puStack_4a8;
  undefined1 uStack_4a0;
  undefined4 uStack_49f;
  undefined3 uStack_49b;
  undefined8 *puStack_498;
  undefined1 uStack_490;
  undefined4 uStack_48f;
  undefined3 uStack_48b;
  undefined8 *puStack_488;
  undefined1 uStack_480;
  undefined4 uStack_47f;
  undefined3 uStack_47b;
  undefined8 *puStack_478;
  undefined1 uStack_470;
  undefined4 uStack_46f;
  undefined3 uStack_46b;
  undefined8 *puStack_468;
  undefined8 *puStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  double dStack_438;
  undefined8 uStack_430;
  undefined1 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  double dStack_400;
  undefined8 uStack_3f8;
  undefined1 uStack_3f0;
  undefined4 uStack_3e8;
  undefined3 uStack_3e4;
  undefined4 uStack_3e0;
  undefined3 uStack_3dc;
  undefined4 uStack_3d8;
  undefined3 uStack_3d4;
  undefined4 uStack_3d0;
  undefined3 uStack_3cc;
  undefined4 uStack_3c8;
  undefined3 uStack_3c4;
  undefined4 uStack_3c0;
  undefined2 uStack_3bc;
  undefined4 uStack_3b8;
  undefined3 uStack_3b4;
  undefined4 uStack_3b0;
  undefined3 uStack_3ac;
  undefined4 uStack_3a8;
  undefined3 uStack_3a4;
  undefined4 uStack_3a0;
  undefined3 uStack_39c;
  undefined8 *puStack_398;
  undefined1 uStack_390;
  undefined4 uStack_38f;
  undefined3 uStack_38b;
  undefined8 *puStack_388;
  undefined1 uStack_380;
  undefined4 uStack_37f;
  undefined3 uStack_37b;
  undefined8 *puStack_378;
  undefined1 uStack_370;
  undefined4 uStack_36f;
  undefined3 uStack_36b;
  undefined8 *puStack_368;
  undefined1 uStack_360;
  undefined4 uStack_35f;
  undefined3 uStack_35b;
  double dStack_358;
  undefined1 uStack_350;
  undefined1 uStack_34f;
  undefined4 uStack_34e;
  undefined2 uStack_34a;
  undefined8 *puStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined8 *puStack_330;
  undefined8 *puStack_328;
  undefined1 uStack_320;
  undefined4 uStack_31f;
  undefined3 uStack_31b;
  undefined8 *puStack_318;
  undefined1 uStack_310;
  undefined4 uStack_30f;
  undefined3 uStack_30b;
  undefined8 *puStack_308;
  undefined1 uStack_300;
  undefined4 uStack_2ff;
  undefined3 uStack_2fb;
  undefined8 *puStack_2f8;
  undefined1 uStack_2f0;
  undefined4 uStack_2ef;
  undefined3 uStack_2eb;
  undefined8 *puStack_2e8;
  undefined1 uStack_2e0;
  undefined4 uStack_2df;
  undefined3 uStack_2db;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 auStack_2c8 [7];
  undefined8 auStack_290 [10];
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined1 auStack_188 [280];
  
  puStack_7a0 = (undefined8 *)*param_3;
  uVar1 = *(undefined1 *)(param_3 + 1);
  puStack_7b0 = (undefined8 *)param_3[2];
  uVar2 = *(undefined1 *)(param_3 + 3);
  puStack_7c0 = (undefined8 *)param_3[4];
  uVar3 = *(undefined1 *)(param_3 + 5);
  puStack_7c8 = (undefined8 *)param_3[6];
  uVar4 = *(undefined1 *)(param_3 + 7);
  dVar36 = (double)param_3[8];
  uVar5 = *(undefined1 *)(param_3 + 9);
  uVar6 = *(undefined1 *)((long)param_3 + 0x49);
  puStack_748 = (undefined8 *)param_3[10];
  puVar31 = (undefined8 *)param_3[0xb];
  puStack_7d8 = (undefined8 *)param_3[0xc];
  puVar29 = (undefined8 *)param_3[0xd];
  puStack_750 = (undefined8 *)param_3[0xe];
  uVar7 = *(undefined1 *)(param_3 + 0xf);
  puStack_760 = (undefined8 *)param_3[0x10];
  uVar8 = *(undefined1 *)(param_3 + 0x11);
  puStack_770 = (undefined8 *)param_3[0x12];
  uVar9 = *(undefined1 *)(param_3 + 0x13);
  puStack_780 = (undefined8 *)param_3[0x14];
  uVar10 = *(undefined1 *)(param_3 + 0x15);
  puStack_790 = (undefined8 *)param_3[0x16];
  uVar11 = *(undefined1 *)(param_3 + 0x17);
  puVar27 = (undefined8 *)param_3[0x18];
  puStack_740 = (undefined8 *)param_3[0x19];
  func_0x000107c610b4(auStack_188,param_3,0x101);
  iVar14 = (int)auStack_188;
  func_0x0001018803f0();
  if (iVar14 == 1) {
    func_0x00010425f244(&puStack_398,0,1,0,1,0,1,0,1,0,0x201);
    puStack_7a0 = puStack_398;
    uStack_3a0 = uStack_38f;
    uStack_39c = uStack_38b;
    puStack_7b0 = puStack_388;
    uStack_3a8 = uStack_37f;
    uStack_3a4 = uStack_37b;
    uStack_3ac = uStack_36b;
    uStack_3b0 = uStack_36f;
    puStack_7c8 = puStack_368;
    puStack_7c0 = puStack_378;
    uStack_3b8 = uStack_35f;
    uStack_3b4 = uStack_35b;
    uStack_3bc = uStack_34a;
    uStack_3c0 = uStack_34e;
    puStack_750 = puStack_328;
    puStack_748 = puStack_348;
    uStack_3c4 = uStack_31b;
    uStack_3c8 = uStack_31f;
    puStack_760 = puStack_318;
    uStack_3cc = uStack_30b;
    uStack_3d0 = uStack_30f;
    puStack_770 = puStack_308;
    uStack_3d4 = uStack_2fb;
    uStack_3d8 = uStack_2ff;
    puStack_780 = puStack_2f8;
    uStack_3dc = uStack_2eb;
    uStack_3e0 = uStack_2ef;
    puStack_790 = puStack_2e8;
    uStack_3e4 = uStack_2db;
    uStack_3e8 = uStack_2df;
    puVar25 = auStack_2c8;
    puVar27 = puStack_2d8;
    puVar29 = puStack_330;
    puStack_740 = puStack_2d0;
    puVar31 = puStack_340;
    puStack_7d8 = puStack_338;
    dVar36 = dStack_358;
    uVar5 = uStack_350;
    uVar6 = uStack_34f;
    uVar4 = uStack_360;
    uVar3 = uStack_370;
    uVar2 = uStack_380;
    uVar1 = uStack_390;
    uVar11 = uStack_2e0;
    uVar10 = uStack_2f0;
    uVar9 = uStack_300;
    uVar8 = uStack_310;
    uVar7 = uStack_320;
  }
  else {
    puVar25 = param_3 + 0x1a;
    uStack_3a0._0_3_ = (undefined3)*(undefined4 *)((long)param_3 + 9);
    uStack_3a0._3_1_ = (undefined1)*(undefined4 *)((long)param_3 + 0xc);
    uStack_39c = (undefined3)((uint)*(undefined4 *)((long)param_3 + 0xc) >> 8);
    uStack_3a8._0_3_ = (undefined3)*(undefined4 *)((long)param_3 + 0x19);
    uStack_3a8._3_1_ = (undefined1)*(undefined4 *)((long)param_3 + 0x1c);
    uStack_3a4 = (undefined3)((uint)*(undefined4 *)((long)param_3 + 0x1c) >> 8);
    uStack_3b0._0_3_ = (undefined3)*(undefined4 *)((long)param_3 + 0x29);
    uStack_3b0._3_1_ = (undefined1)*(undefined4 *)((long)param_3 + 0x2c);
    uStack_3ac = (undefined3)((uint)*(undefined4 *)((long)param_3 + 0x2c) >> 8);
    uStack_3b4 = (undefined3)((uint)*(undefined4 *)((long)param_3 + 0x3c) >> 8);
    uStack_3b8 = *(undefined4 *)((long)param_3 + 0x39);
    uStack_3c0 = *(undefined4 *)((long)param_3 + 0x4a);
    uStack_3bc = *(undefined2 *)((long)param_3 + 0x4e);
    uStack_3c4 = (undefined3)((uint)*(undefined4 *)((long)param_3 + 0x7c) >> 8);
    uStack_3c8 = *(undefined4 *)((long)param_3 + 0x79);
    uStack_3cc = (undefined3)((uint)*(undefined4 *)((long)param_3 + 0x8c) >> 8);
    uStack_3d0 = *(undefined4 *)((long)param_3 + 0x89);
    uStack_3d4 = (undefined3)((uint)*(undefined4 *)((long)param_3 + 0x9c) >> 8);
    uStack_3d8 = *(undefined4 *)((long)param_3 + 0x99);
    uStack_3dc = (undefined3)((uint)*(undefined4 *)((long)param_3 + 0xac) >> 8);
    uStack_3e0 = *(undefined4 *)((long)param_3 + 0xa9);
    uStack_3e8 = *(undefined4 *)((long)param_3 + 0xb9);
    uStack_3e4 = (undefined3)((uint)*(undefined4 *)((long)param_3 + 0xbc) >> 8);
  }
  uStack_418 = puVar25[1];
  uStack_420 = *puVar25;
  uStack_408 = puVar25[3];
  uStack_410 = puVar25[2];
  uStack_3f8 = puVar25[5];
  dVar35 = (double)puVar25[4];
  uStack_3f0 = *(undefined1 *)(puVar25 + 6);
  puVar25 = auStack_290;
  puVar19 = param_3;
  dStack_400 = dVar35;
  FUN_101880414();
  FUN_101883508();
  lVar33 = puVar19[2];
  if (lVar33 != 0) {
    puVar24 = puVar19 + 5;
    do {
      uVar15 = puVar24[-1];
      puVar17 = (undefined8 *)*puVar24;
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174(uVar15);
      puVar27 = puVar17;
      func_0x000107c30bfc();
      func_0x000107c61180();
      uVar7 = puVar27 == (undefined8 *)0x0;
      if ((bool)uVar7) {
        puStack_750 = (undefined8 *)0x0;
      }
      else {
        puStack_750 = puVar27;
        func_0x000107c49820();
        func_0x000107c61170(puVar27);
      }
      puVar27 = puVar17;
      func_0x000107c30c00();
      func_0x000107c61180();
      uVar8 = puVar27 == (undefined8 *)0x0;
      if ((bool)uVar8) {
        puStack_760 = (undefined8 *)0x0;
      }
      else {
        puStack_760 = puVar27;
        func_0x000107c49820();
        func_0x000107c61170(puVar27);
      }
      puVar27 = puVar17;
      func_0x000107c30c04();
      func_0x000107c61180();
      uVar9 = puVar27 == (undefined8 *)0x0;
      if ((bool)uVar9) {
        puStack_770 = (undefined8 *)0x0;
      }
      else {
        puStack_770 = puVar27;
        func_0x000107c49820();
        func_0x000107c61170(puVar27);
      }
      puVar27 = puVar17;
      func_0x000107c30c08();
      func_0x000107c61180();
      uVar10 = puVar27 == (undefined8 *)0x0;
      if ((bool)uVar10) {
        puStack_780 = (undefined8 *)0x0;
      }
      else {
        puStack_780 = puVar27;
        func_0x000107c49820();
        func_0x000107c61170(puVar27);
      }
      puVar27 = puVar17;
      func_0x000107c30c0c();
      func_0x000107c61180();
      uVar11 = puVar27 == (undefined8 *)0x0;
      if ((bool)uVar11) {
        puStack_790 = (undefined8 *)0x0;
      }
      else {
        puStack_790 = puVar27;
        func_0x000107c49820();
        func_0x000107c61170(puVar27);
      }
      puVar27 = puVar17;
      func_0x000107c30c10();
      func_0x000107c61180();
      uVar1 = puVar27 == (undefined8 *)0x0;
      if ((bool)uVar1) {
        puStack_7a0 = (undefined8 *)0x0;
      }
      else {
        puStack_7a0 = puVar27;
        func_0x000107c49820();
        func_0x000107c61170(puVar27);
      }
      puVar27 = puVar17;
      func_0x000107c30c14();
      func_0x000107c61180();
      uVar2 = puVar27 == (undefined8 *)0x0;
      if ((bool)uVar2) {
        puStack_7b0 = (undefined8 *)0x0;
      }
      else {
        puStack_7b0 = puVar27;
        func_0x000107c49820();
        func_0x000107c61170(puVar27);
      }
      puVar27 = puVar17;
      func_0x000107c30c18();
      func_0x000107c61180();
      uVar3 = puVar27 == (undefined8 *)0x0;
      if ((bool)uVar3) {
        puStack_7c0 = (undefined8 *)0x0;
      }
      else {
        puStack_7c0 = puVar27;
        func_0x000107c49820();
        func_0x000107c61170(puVar27);
      }
      puVar27 = puVar17;
      func_0x000107c30c1c();
      func_0x000107c61180();
      uVar4 = puVar27 == (undefined8 *)0x0;
      if ((bool)uVar4) {
        puStack_7c8 = (undefined8 *)0x0;
      }
      else {
        puStack_7c8 = puVar27;
        func_0x000107c49820();
        func_0x000107c61170(puVar27);
      }
      puVar27 = puVar17;
      func_0x000107c30c20();
      func_0x000107c61180();
      if (puVar27 == (undefined8 *)0x0) {
        func_0x000107c6142c(puVar31);
        puStack_748 = (undefined8 *)0x0;
        puVar31 = (undefined8 *)0x0;
        puVar16 = puVar25;
      }
      else {
        puStack_748 = puVar27;
        func_0x000107c5faec();
        puVar16 = puVar25;
        func_0x000107c61170(puVar27);
        func_0x000107c6142c(puVar31);
        puVar31 = puVar25;
      }
      puVar27 = puVar17;
      func_0x000107c30c24();
      func_0x000107c61180();
      if (puVar27 == (undefined8 *)0x0) {
        func_0x000107c6142c(puVar29);
        puStack_7d8 = (undefined8 *)0x0;
        puVar29 = (undefined8 *)0x0;
        puVar23 = puVar16;
      }
      else {
        puStack_7d8 = puVar27;
        func_0x000107c5faec();
        puVar23 = puVar16;
        func_0x000107c61170(puVar27);
        func_0x000107c6142c(puVar29);
        puVar29 = puVar16;
      }
      puVar16 = puVar17;
      func_0x000107c30c28();
      func_0x000107c61180();
      if (puVar16 == (undefined8 *)0x0) {
        func_0x000107c61170(uVar15);
        func_0x000107c61170(puVar17);
        func_0x000107c61170(puVar17);
        func_0x000107c6142c(puStack_740);
        puVar27 = (undefined8 *)0x0;
        puStack_740 = (undefined8 *)0x0;
        puVar25 = puVar23;
      }
      else {
        puVar27 = puVar16;
        func_0x000107c5faec();
        puVar25 = puVar23;
        func_0x000107c61170(puVar16);
        func_0x000107c61170(uVar15);
        func_0x000107c61170(puVar17);
        func_0x000107c61170(puVar17);
        func_0x000107c6142c(puStack_740);
        puStack_740 = puVar23;
      }
      puVar24 = puVar24 + 2;
      lVar33 = lVar33 + -1;
    } while (lVar33 != 0);
  }
  func_0x000107c6142c(puVar19);
  func_0x00010188244c();
  puVar19 = puVar25;
  func_0x000107c6142c();
  puVar24 = puVar19;
  puVar17 = puVar25;
  puVar16 = puVar31;
  puVar23 = puStack_748;
  if (puVar25[2] == 0) {
LAB_10187fdb0:
    func_0x000107c6142c();
    puStack_748 = puVar23;
  }
  else {
    puVar17 = (undefined8 *)puVar25[5];
    func_0x000107c61174();
    func_0x000107c6142c(puVar25);
    puVar25 = puVar17;
    func_0x000107c30cc4();
    func_0x000107c61180();
    func_0x000107c61170();
    puVar24 = puVar19;
    if (puVar25 != (undefined8 *)0x0) {
      puVar18 = puVar25;
      func_0x000107c5faec();
      func_0x000107c61170(puVar25);
      func_0x000107c610b4(auStack_290,param_3,0x101);
      iVar14 = (int)auStack_290;
      func_0x0001018803f0();
      puVar24 = param_3;
      puVar17 = puVar19;
      if ((((iVar14 != 1) && (puVar24 = param_3, puStack_238 != (undefined8 *)0x0)) &&
          ((puStack_240 != puVar18 ||
           (puVar24 = param_3, puVar17 = puVar31, puVar16 = puStack_238, puVar23 = puVar18,
           puStack_238 != puVar19)))) &&
         (func_0x000107c605b8(puStack_240,puStack_238,puVar18,puVar19,0), puVar24 = puStack_238,
         puVar17 = puVar19, puVar16 = puVar31, puVar23 = puStack_748, ((ulong)puStack_240 & 1) != 0)
         ) {
        puVar17 = puVar31;
        puVar16 = puVar19;
        puVar23 = puVar18;
      }
      goto LAB_10187fdb0;
    }
  }
  func_0x00010188244c();
  puVar25 = puVar24;
  puVar31 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar17[2] != 0) {
    func_0x000107c61434(puVar17);
    lVar33 = 6;
    func_0x0001018815d8();
    puVar31 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
    if (((ulong)puVar25 & 1) != 0) {
      puVar31 = *(undefined8 **)(puVar17[7] + lVar33 * 8);
      func_0x000107c61434(puVar31);
    }
    func_0x000107c6142c(puVar17);
  }
  func_0x000107c6142c(puVar17);
  func_0x000107c6142c(puVar24);
  if (puVar31[2] == 0) {
    func_0x000107c6142c();
    puVar19 = puVar25;
  }
  else {
    puVar19 = (undefined8 *)puVar31[5];
    func_0x000107c61174();
    func_0x000107c6142c(puVar31);
    puVar31 = puVar19;
    func_0x000107c30cbc();
    func_0x000107c61180();
    func_0x000107c61170(puVar19);
    puStack_7d8 = puVar31;
    func_0x000107c5faec();
    puVar19 = puVar25;
    func_0x000107c61170(puVar31);
    func_0x000107c6142c();
    puVar31 = puVar29;
    puVar29 = puVar25;
  }
  func_0x000101882438();
  puVar25 = puVar19;
  if (puVar31[2] != 0) {
    func_0x000107c61434(puVar31);
    lVar33 = 3;
    func_0x0001018815c8();
    if (((ulong)puVar25 & 1) != 0) {
      lVar32 = *(long *)(puVar31[7] + lVar33 * 8);
      func_0x000107c61434(lVar32);
      func_0x000107c6142c(puVar19);
      puVar25 = (undefined8 *)0x2;
      func_0x000107c61430(puVar31);
      lVar33 = *(long *)(lVar32 + 0x10);
      func_0x000107c6142c(lVar32);
      if (lVar33 != 0) {
        uVar6 = 1;
      }
      goto LAB_10187ff20;
    }
    func_0x000107c6142c(puVar31);
  }
  func_0x000107c6142c(puVar31);
  func_0x000107c6142c(puVar19);
LAB_10187ff20:
  func_0x000101882438();
  func_0x000107c6142c();
  uVar30 = puVar25[2];
  if (uVar30 == 0) {
    func_0x000107c6142c(puVar25);
    uStack_5e8 = uVar5;
  }
  else {
    lVar33 = puVar25[4];
    lVar32 = puVar25[5];
    func_0x000107c61174();
    func_0x000107c61174();
    if (uVar30 != 1) {
      uVar26 = 1;
LAB_10187ff64:
      plVar28 = puVar25 + uVar26 * 2 + 5;
      uVar34 = uVar26;
      do {
        if ((ulong)puVar25[2] <= uVar34) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x1018803e8);
          (*pcVar12)();
        }
        lVar20 = plVar28[-1];
        lVar21 = *plVar28;
        func_0x000107c61174();
        func_0x000107c61174();
        lVar22 = lVar32;
        func_0x000107c30c34();
        func_0x000107c61180();
        if (lVar22 == 0) {
          dVar37 = 0.0;
          dVar36 = dVar35;
        }
        else {
          func_0x000107c4223c();
          dVar36 = dVar35;
          func_0x000107c61170(lVar22);
          dVar37 = dVar35;
        }
        dVar35 = dVar36;
        lVar22 = lVar21;
        func_0x000107c30c34();
        func_0x000107c61180();
        if (lVar22 == 0) {
          if (dVar37 < 0.0) goto LAB_101880028;
        }
        else {
          func_0x000107c4223c();
          dVar36 = dVar35;
          func_0x000107c61170(lVar22);
          bVar13 = dVar37 < dVar35;
          dVar35 = dVar36;
          if (bVar13) goto LAB_101880028;
        }
        uVar34 = uVar34 + 1;
        func_0x000107c61170(lVar21);
        func_0x000107c61170(lVar20);
        plVar28 = plVar28 + 2;
        if (uVar30 == uVar34) break;
      } while( true );
    }
LAB_10188006c:
    func_0x000107c6142c(puVar25);
    lVar20 = lVar32;
    func_0x000107c30c34();
    func_0x000107c61180();
    if (lVar20 == 0) {
      func_0x000107c61170(lVar32);
      func_0x000107c61170(lVar33);
      dVar36 = 0.0;
      uStack_5e8 = 1;
    }
    else {
      func_0x000107c4223c();
      func_0x000107c61170(lVar20);
      func_0x000107c61170(lVar32);
      func_0x000107c61170(lVar33);
      dVar36 = dVar35;
      uStack_5e8 = 0;
    }
  }
  uStack_627 = uStack_3a0;
  uStack_623 = uStack_39c;
  uStack_617 = uStack_3a8;
  uStack_613 = uStack_3a4;
  uStack_607 = uStack_3b0;
  uStack_603 = uStack_3ac;
  uStack_5f7 = uStack_3b8;
  uStack_5f3 = uStack_3b4;
  uStack_5e6 = uStack_3c0;
  uStack_5e2 = uStack_3bc;
  uStack_5b3 = uStack_3c4;
  uStack_5b7 = uStack_3c8;
  uStack_5a3 = uStack_3cc;
  uStack_5a7 = uStack_3d0;
  uStack_593 = uStack_3d4;
  uStack_597 = uStack_3d8;
  uStack_583 = uStack_3dc;
  uStack_587 = uStack_3e0;
  uStack_573 = uStack_3e4;
  uStack_577 = uStack_3e8;
  uStack_530 = uStack_3f0;
  uStack_548 = uStack_408;
  uStack_550 = uStack_410;
  uStack_538 = uStack_3f8;
  dStack_540 = dStack_400;
  uStack_558 = uStack_418;
  uStack_560 = uStack_420;
  puStack_630 = puStack_7a0;
  puStack_528 = puStack_7a0;
  uStack_51b = uStack_39c;
  uStack_51f = uStack_3a0;
  puStack_620 = puStack_7b0;
  puStack_518 = puStack_7b0;
  uStack_50b = uStack_3a4;
  uStack_50f = uStack_3a8;
  puStack_610 = puStack_7c0;
  puStack_508 = puStack_7c0;
  puStack_600 = puStack_7c8;
  puStack_5e0 = puStack_748;
  puStack_5d0 = puStack_7d8;
  puStack_5c0 = puStack_750;
  puStack_5b0 = puStack_760;
  puStack_5a0 = puStack_770;
  puStack_590 = puStack_780;
  puStack_580 = puStack_790;
  puStack_568 = puStack_740;
  uStack_4fb = uStack_3ac;
  uStack_4ff = uStack_3b0;
  puStack_4f8 = puStack_7c8;
  uStack_4eb = uStack_3b4;
  uStack_4ef = uStack_3b8;
  uStack_4da = uStack_3bc;
  uStack_4de = uStack_3c0;
  puStack_4d8 = puStack_748;
  puStack_4c8 = puStack_7d8;
  puStack_4b8 = puStack_750;
  uStack_4ab = uStack_3c4;
  uStack_4af = uStack_3c8;
  puStack_4a8 = puStack_760;
  uStack_49b = uStack_3cc;
  uStack_49f = uStack_3d0;
  puStack_498 = puStack_770;
  uStack_48b = uStack_3d4;
  uStack_48f = uStack_3d8;
  puStack_488 = puStack_780;
  uStack_47b = uStack_3dc;
  uStack_47f = uStack_3e0;
  puStack_478 = puStack_790;
  uStack_46b = uStack_3e4;
  uStack_46f = uStack_3e8;
  puStack_460 = puStack_740;
  uStack_428 = uStack_3f0;
  uStack_430 = uStack_3f8;
  dStack_438 = dStack_400;
  uStack_440 = uStack_408;
  uStack_448 = uStack_410;
  uStack_450 = uStack_418;
  uStack_458 = uStack_420;
  uStack_628 = uVar1;
  uStack_618 = uVar2;
  uStack_608 = uVar3;
  uStack_5f8 = uVar4;
  dStack_5f0 = dVar36;
  uStack_5e7 = uVar6;
  puStack_5d8 = puVar16;
  puStack_5c8 = puVar29;
  uStack_5b8 = uVar7;
  uStack_5a8 = uVar8;
  uStack_598 = uVar9;
  uStack_588 = uVar10;
  uStack_578 = uVar11;
  puStack_570 = puVar27;
  uStack_520 = uVar1;
  uStack_510 = uVar2;
  uStack_500 = uVar3;
  uStack_4f0 = uVar4;
  dStack_4e8 = dVar36;
  uStack_4e0 = uStack_5e8;
  uStack_4df = uVar6;
  puStack_4d0 = puVar16;
  puStack_4c0 = puVar29;
  uStack_4b0 = uVar7;
  uStack_4a0 = uVar8;
  uStack_490 = uVar9;
  uStack_480 = uVar10;
  uStack_470 = uVar11;
  puStack_468 = puVar27;
  func_0x000101880464(&puStack_630,auStack_738);
  FUN_1017e2180(&puStack_528);
  func_0x000107c610b4(param_1,&puStack_630,0x101);
  return;
LAB_101880028:
  func_0x000107c61170(lVar32);
  func_0x000107c61170(lVar33);
  uVar26 = uVar34 + 1;
  lVar33 = lVar20;
  lVar32 = lVar21;
  if (uVar30 - 1 == uVar34) goto LAB_10188006c;
  goto LAB_10187ff64;
}



/* Entry: 1018803e8; end: 101880413;  */

void FUN_1018803e8(void)

{
  return;
}



/* Entry: 101880414; end: 1018804ff;  */

undefined8 FUN_101880414(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112dcc740;
  func_0x0001000285a8(0x112dcc740,&UNK_10d9907d0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101880500; end: 10188050f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101880500(long *param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  
  param_2 = param_2 + _DAT_113803418;
  (**(code **)(unaff_x20 + 0x10))
            (param_2,*(code **)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_2;
    func_0x000103bfc614();
    func_0x000107c61170(param_2);
  }
  *param_1 = lVar1;
  *(bool *)(param_1 + 1) = param_2 == 0;
  return;
}



/* Entry: 101880510; end: 101880547;  */

void FUN_101880510(undefined8 param_1)

{
  func_0x00010187edc8(param_1,&UNK_10b8930a8);
  return;
}



/* Entry: 101880548; end: 101880553;  */

void FUN_101880548(undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  FUN_10187f48c();
  uVar3 = 0;
  if (param_3 != 0) {
    func_0x000107c61170();
    lVar1 = param_4;
    func_0x000107c30c4c();
    func_0x000107c61180();
    func_0x000107c61170(param_4);
    if (lVar1 != 0) {
      func_0x000107c4223c(lVar1);
      func_0x000107c61170(lVar1);
      uVar2 = 0;
      uVar3 = param_2;
      goto LAB_10187eeac;
    }
  }
  uVar2 = 1;
LAB_10187eeac:
  *param_1 = uVar3;
  *(undefined1 *)(param_1 + 1) = uVar2;
  return;
}



/* Entry: 101880554; end: 10188058f;  */

void FUN_101880554(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = param_2;
  FUN_10187f1f8();
  if ((uVar1 & 1) == 0) {
    param_2 = 1;
  }
  else {
    FUN_10187f2c4();
  }
  *param_1 = param_2;
  return;
}



/* Entry: 101880590; end: 101880593;  */

void FUN_101880590(undefined8 *param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2;
  FUN_10187f1f8();
  bVar1 = (uVar2 & 1) == 0;
  if (bVar1) {
    uVar3 = 0;
  }
  else {
    FUN_10187f2c4();
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    func_0x000107c6142c();
  }
  *param_1 = uVar3;
  *(undefined1 *)(param_1 + 1) = 0;
  *(bool *)((long)param_1 + 9) = bVar1;
  return;
}



/* Entry: 101880594; end: 1018805cb;  */

void FUN_101880594(undefined8 param_1)

{
  FUN_10187eb60(param_1,&UNK_10b893420);
  return;
}



/* Entry: 1018805cc; end: 1018805eb;  */

void FUN_1018805cc(undefined1 *param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  FUN_101883748();
  uVar6 = *(ulong *)(param_2 + 0x10);
  if (uVar6 != 0) {
    uVar7 = 0;
    puVar8 = (undefined8 *)(param_2 + 0x28);
    do {
      if (*(ulong *)(param_2 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10187e88c);
        (*pcVar1)();
      }
      uVar2 = puVar8[-1];
      uVar3 = *puVar8;
      func_0x000107c61174();
      func_0x000107c61174(uVar3);
      uVar4 = uVar2;
      func_0x0001018868e8(uVar2,uVar3);
      if ((int)uVar4 == 3) {
        uVar4 = uVar2;
        func_0x0001018868f0(uVar2,uVar3);
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uVar2);
        if ((int)uVar4 == 8) {
          uVar5 = 1;
          goto LAB_10187e864;
        }
      }
      else {
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uVar2);
      }
      uVar7 = uVar7 + 1;
      puVar8 = puVar8 + 2;
    } while (uVar6 != uVar7);
  }
  uVar5 = 2;
LAB_10187e864:
  func_0x000107c6142c(param_2);
  *param_1 = uVar5;
  return;
}



/* Entry: 1018805ec; end: 10188062b;  */

void FUN_1018805ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dcc800 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d98f498;
  func_0x000107c61520(&UNK_10d98f498,&UNK_11040a460);
  puRam0000000112dcc800 = puVar1;
  return;
}



/* Entry: 10188062c; end: 1018807b3;  */

void FUN_10188062c(void)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar3 = 0x625f666f5f74756f;
  if (cVar2 != '\x01') {
    uVar3 = 0xd000000000000012;
  }
  uVar1 = 0xed000073646e756f;
  if (cVar2 != '\x01') {
    uVar1 = 0x800000010efbbdb0;
  }
  func_0x000107c5fb58(auStack_68,uVar3,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1018807b4; end: 10188082b;  */

void FUN_1018807b4(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar2);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 10188082c; end: 1018809f7;  */

void FUN_10188082c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  
  uVar2 = 0x625f666f5f74756f;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xd000000000000012;
  }
  uVar1 = 0xed000073646e756f;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x800000010efbbdb0;
  }
  *param_1 = uVar2;
  param_1[1] = uVar1;
  return;
}



/* Entry: 1018809f8; end: 101880a37;  */

void FUN_1018809f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dcc860 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d98f578;
  func_0x000107c61520(&UNK_10d98f578,&UNK_11040a548);
  puRam0000000112dcc860 = puVar1;
  return;
}



/* Entry: 101880a38; end: 101880b83;  */

void FUN_101880a38(void)

{
  char *pcVar1;
  char cVar2;
  undefined8 uVar3;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar3 = 0xd000000000000017;
  pcVar1 = "in_bounds_mismatch";
  if (cVar2 != '\x01') {
    uVar3 = 0xd000000000000015;
    pcVar1 = "root_object_cast_failed";
  }
  func_0x000107c5fb58(auStack_68,uVar3,(ulong)pcVar1 | 0x8000000000000000);
  func_0x000107c6142c((ulong)pcVar1 | 0x8000000000000000);
  func_0x000107c606a8();
  return;
}



/* Entry: 101880b84; end: 101880bfb;  */

void FUN_101880b84(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar2);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 101880bfc; end: 101880d9f;  */

void FUN_101880bfc(undefined8 *param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  char *unaff_x20;
  
  uVar2 = 0xd000000000000017;
  pcVar1 = "in_bounds_mismatch";
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xd000000000000015;
    pcVar1 = "root_object_cast_failed";
  }
  *param_1 = uVar2;
  param_1[1] = (ulong)pcVar1 | 0x8000000000000000;
  return;
}



/* Entry: 101880da0; end: 101880ddf;  */

bool FUN_101880da0(void)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  if (uVar2 >> 0x3e == 0) {
    uVar1 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar1 = uVar2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar2) {
      uVar1 = uVar2;
    }
    func_0x000107c60480(uVar1);
  }
  return uVar1 != 0;
}



/* Entry: 101880de0; end: 101880e1b;  */

undefined8 FUN_101880de0(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x000100407ebc(param_1);
  return unaff_x20;
}



/* Entry: 101880e1c; end: 10188130b;  */

undefined1  [16] FUN_101880e1c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  code *pcVar11;
  long *plVar12;
  long unaff_x20;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined1 auVar16 [16];
  undefined *puStack_1a0;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined2 uStack_110;
  undefined6 uStack_10e;
  undefined2 uStack_108;
  undefined8 uStack_106;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  char cStack_70;
  
  plVar10 = *(long **)(unaff_x20 + 0x10);
  if ((ulong)plVar10 >> 0x3e == 0) {
    lVar8 = *(long *)(((ulong)plVar10 & 0xffffffffffffff8) + 0x10);
    if (lVar8 == 0) {
LAB_1018812d4:
      puStack_1a0 = PTR___swiftEmptyArrayStorage_11034f1c8;
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      goto LAB_1018812e0;
    }
    puVar5 = (undefined *)0x0;
    func_0x00010179067c(0,lVar8,0,PTR___swiftEmptyArrayStorage_11034f1c8);
    plVar12 = *(long **)(((ulong)plVar10 & 0xffffffffffffff8) + 0x10);
  }
  else {
    plVar12 = (long *)((ulong)plVar10 & 0xffffffffffffff8);
    if ((long *)0x7fffffffffffffff < plVar10) {
      plVar12 = plVar10;
    }
    plVar15 = plVar12;
    func_0x000107c60480();
    if (plVar15 == (long *)0x0) goto LAB_1018812d4;
    plVar15 = plVar12;
    func_0x000107c60480(plVar12);
    puVar5 = (undefined *)0x0;
    func_0x00010179067c(0,(ulong)plVar15 & ((long)plVar15 >> 0x3f ^ 0xffffffffffffffffU),0,
                        PTR___swiftEmptyArrayStorage_11034f1c8);
    func_0x000107c60480();
  }
  puStack_1a0 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (plVar12 != (long *)0x0) {
    uVar6 = param_3;
    func_0x000107c614f0();
    if ((long)plVar12 < 1) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10188130c);
      (*pcVar11)();
    }
    plVar15 = (long *)0x0;
    pcVar11 = *(code **)(param_4 + 0x10);
    puStack_1a0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      if (((ulong)plVar10 & 0xc000000000000001) == 0) {
        plVar13 = (long *)plVar10[(long)plVar15 + 4];
        func_0x000107c6157c(plVar13);
      }
      else {
        plVar13 = plVar15;
        func_0x00010178f6b0();
      }
      lStack_f8 = -0x2fffffffffffffda;
      uStack_f0 = 0x800000010efbc700;
      func_0x000107c5fb78(plVar13[2],plVar13[3]);
      func_0x000107c5fb78(0x65646f6d5f,0xe500000000000000);
      uVar14 = uStack_f0;
      lVar8 = lStack_f8;
      (*pcVar11)(lStack_f8,uStack_f0,0,uVar6,param_4);
      func_0x000107c6142c(uVar14);
      puVar7 = puVar5;
      if (lVar8 == 2) {
        if (*(long *)(param_2 + 0x10) == 0) {
          uVar14 = 0;
        }
        else {
          lVar8 = plVar13[4];
          uVar9 = plVar13[5];
          func_0x000107c61434(param_2);
          func_0x000100029284();
          if ((uVar9 & 1) == 0) {
            uVar14 = 0;
          }
          else {
            uVar14 = *(undefined8 *)(*(long *)(param_2 + 0x38) + lVar8 * 8);
            func_0x000107c615f0(uVar14);
          }
          func_0x000107c6142c(param_2);
        }
        (**(code **)(*plVar13 + 0x70))(&lStack_f8,param_1,uVar14,param_3,param_4);
        func_0x000107c615e8(uVar14);
        func_0x00010178e580(&lStack_f8,&uStack_168);
        uVar9 = *(ulong *)(puVar5 + 0x10);
        if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar9) {
          puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
          func_0x00010179067c(puVar7,uVar9 + 1,1,puVar5);
        }
        cVar4 = cStack_70;
        uVar3 = uStack_78;
        uVar2 = uStack_80;
        uVar14 = uStack_88;
        *(ulong *)(puVar7 + 0x10) = uVar9 + 1;
        *(undefined8 *)(puVar7 + uVar9 * 0x70 + 0x38) = uStack_150;
        *(undefined8 *)(puVar7 + uVar9 * 0x70 + 0x30) = uStack_158;
        *(undefined8 *)(puVar7 + uVar9 * 0x70 + 0x48) = uStack_140;
        *(undefined8 *)(puVar7 + uVar9 * 0x70 + 0x40) = uStack_148;
        *(undefined8 *)(puVar7 + uVar9 * 0x70 + 0x28) = uStack_160;
        *(undefined8 *)(puVar7 + uVar9 * 0x70 + 0x20) = uStack_168;
        *(undefined8 *)(puVar7 + uVar9 * 0x70 + 0x82) = uStack_106;
        *(ulong *)(puVar7 + uVar9 * 0x70 + 0x7a) = CONCAT26(uStack_108,uStack_10e);
        *(undefined8 *)(puVar7 + uVar9 * 0x70 + 0x68) = uStack_120;
        *(undefined8 *)(puVar7 + uVar9 * 0x70 + 0x60) = uStack_128;
        *(ulong *)(puVar7 + uVar9 * 0x70 + 0x78) = CONCAT62(uStack_10e,uStack_110);
        *(undefined8 *)(puVar7 + uVar9 * 0x70 + 0x70) = uStack_118;
        *(undefined8 *)(puVar7 + uVar9 * 0x70 + 0x58) = uStack_130;
        *(undefined8 *)(puVar7 + uVar9 * 0x70 + 0x50) = uStack_138;
        if (cStack_70 == -1) {
          FUN_101881394(&lStack_f8);
          goto LAB_101880ee4;
        }
        func_0x00010178e0e0(uStack_88,uStack_80,uStack_78,cStack_70);
        func_0x00010178e0e0(uVar14,uVar2,uVar3,cVar4);
        puVar5 = puStack_1a0;
        func_0x000107c61558();
        if (((ulong)puVar5 & 1) == 0) {
          plVar1 = (long *)(puStack_1a0 + 0x10);
          puStack_1a0 = (undefined *)0x0;
          func_0x0001018723b8(0,*plVar1 + 1,1);
        }
        uVar9 = *(ulong *)(puStack_1a0 + 0x10);
        if (*(ulong *)(puStack_1a0 + 0x18) >> 1 <= uVar9) {
          puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puStack_1a0 + 0x18));
          func_0x0001018723b8(puVar5,uVar9 + 1,1,puStack_1a0);
          puStack_1a0 = puVar5;
        }
        *(ulong *)(puStack_1a0 + 0x10) = uVar9 + 1;
        *(undefined8 *)(puStack_1a0 + uVar9 * 0x20 + 0x20) = uVar14;
        *(undefined8 *)(puStack_1a0 + uVar9 * 0x20 + 0x28) = uVar2;
        *(undefined8 *)(puStack_1a0 + uVar9 * 0x20 + 0x30) = uVar3;
        puStack_1a0[uVar9 * 0x20 + 0x38] = cVar4;
        func_0x000107c61574(plVar13);
        FUN_1018813c8(uVar14,uVar2,uVar3,cVar4);
        FUN_101881394(&lStack_f8);
      }
      else if (lVar8 == 1) {
        if (*(long *)(param_2 + 0x10) == 0) {
          uVar14 = 0;
        }
        else {
          lVar8 = plVar13[4];
          uVar9 = plVar13[5];
          func_0x000107c61434(param_2);
          func_0x000100029284();
          if ((uVar9 & 1) == 0) {
            uVar14 = 0;
          }
          else {
            uVar14 = *(undefined8 *)(*(long *)(param_2 + 0x38) + lVar8 * 8);
            func_0x000107c615f0(uVar14);
          }
          func_0x000107c6142c(param_2);
        }
        (**(code **)(*plVar13 + 0x70))(&lStack_f8,param_1,uVar14,param_3,param_4);
        func_0x000107c615e8(uVar14);
        func_0x00010178e580(&lStack_f8,&uStack_168);
        uVar9 = *(ulong *)(puVar5 + 0x10);
        if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar9) {
          puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
          func_0x00010179067c(puVar7,uVar9 + 1,1,puVar5);
        }
        *(ulong *)(puVar7 + 0x10) = uVar9 + 1;
        *(undefined8 *)(puVar7 + uVar9 * 0x70 + 0x38) = uStack_150;
        *(undefined8 *)(puVar7 + uVar9 * 0x70 + 0x30) = uStack_158;
        *(undefined8 *)(puVar7 + uVar9 * 0x70 + 0x48) = uStack_140;
        *(undefined8 *)(puVar7 + uVar9 * 0x70 + 0x40) = uStack_148;
        *(undefined8 *)(puVar7 + uVar9 * 0x70 + 0x28) = uStack_160;
        *(undefined8 *)(puVar7 + uVar9 * 0x70 + 0x20) = uStack_168;
        *(undefined8 *)(puVar7 + uVar9 * 0x70 + 0x82) = uStack_106;
        *(ulong *)(puVar7 + uVar9 * 0x70 + 0x7a) = CONCAT26(uStack_108,uStack_10e);
        *(undefined8 *)(puVar7 + uVar9 * 0x70 + 0x68) = uStack_120;
        *(undefined8 *)(puVar7 + uVar9 * 0x70 + 0x60) = uStack_128;
        *(ulong *)(puVar7 + uVar9 * 0x70 + 0x78) = CONCAT62(uStack_10e,uStack_110);
        *(undefined8 *)(puVar7 + uVar9 * 0x70 + 0x70) = uStack_118;
        *(undefined8 *)(puVar7 + uVar9 * 0x70 + 0x58) = uStack_130;
        *(undefined8 *)(puVar7 + uVar9 * 0x70 + 0x50) = uStack_138;
        func_0x000107c61574(plVar13);
        FUN_101881394(&lStack_f8);
      }
      else {
LAB_101880ee4:
        func_0x000107c61574(plVar13);
      }
      plVar15 = (long *)((long)plVar15 + 1);
      puVar5 = puVar7;
    } while (plVar12 != plVar15);
  }
LAB_1018812e0:
  auVar16._8_8_ = puStack_1a0;
  auVar16._0_8_ = puVar5;
  return auVar16;
}



/* Entry: 10188130c; end: 10188132f;  */

void FUN_10188130c(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101881330; end: 101881393;  */

void FUN_101881330(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  func_0x000107c6068c(auStack_78,*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = param_1;
  func_0x000107c60690(param_1);
  func_0x000107c606a8();
  func_0x000101881564(param_1,uVar1);
  return;
}



/* Entry: 101881394; end: 1018813c7;  */

undefined8 FUN_101881394(undefined8 param_1)

{
  FUN_10188c4a8();
  return param_1;
}



/* Entry: 1018813c8; end: 1018813db;  */

void FUN_1018813c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == -1) {
    return;
  }
  func_0x000107c6142c(param_2);
  if (param_4 == '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_3);
  return;
}



/* Entry: 1018813dc; end: 101881437;  */

/* WARNING: Possible PIC construction at 0x0001018813f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018813f4) */

void FUN_1018813dc(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*param_1);
  return;
}



/* Entry: 101881438; end: 101881493;  */

undefined8 * FUN_101881438(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 101881494; end: 1018814cf;  */

undefined8 * FUN_101881494(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c6142c(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1018814d0; end: 1018815f7;  */

int FUN_1018814d0(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1018815f8; end: 1018816a3;  */

void FUN_1018815f8(void)

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



/* Entry: 1018816a4; end: 101881b27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1018816a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12,
                  undefined4 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dcc908);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dcc910);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dcc918);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dcc920);
  puVar1[1] = 0;
  *puVar1 = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dcc928);
  puVar1[1] = 0;
  *puVar1 = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dcc930);
  puVar1[1] = 0;
  *puVar1 = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112dcc938) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dcc940);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dcc948);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dcc950) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dcc958) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dcc960) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dcc968);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dcc970);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dcc978) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dcc980) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dcc988) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dcc990) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dcc998);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dcc9a0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dcc9a8) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  FUN_101881b28(param_6,unaff_x20 + _DAT_113803410,&SUB_100b91d00);
  FUN_101881b28(param_7,unaff_x20 + _DAT_113803418,&SUB_1046d90b0);
  *(undefined8 *)(unaff_x20 + _DAT_113803420) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_113803428) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_113803430) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_113803438) = param_11;
  *(undefined1 *)(unaff_x20 + _DAT_113803440) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112dcc9b0) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_112dcc9b8) = param_15;
  return unaff_x20;
}



/* Entry: 101881b28; end: 101881b6b;  */

undefined8 FUN_101881b28(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101881b6c; end: 101881cb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101881b6c(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  undefined1 auVar8 [16];
  
  plVar1 = (long *)(unaff_x20 + _DAT_112dcc908);
  lVar2 = *plVar1;
  lVar4 = plVar1[1];
  lVar6 = lVar2;
  lVar7 = lVar4;
  if (lVar2 == 0) {
    lVar6 = *(long *)(unaff_x20 + 0x18);
    lVar7 = *(long *)(unaff_x20 + 0x20);
    FUN_101886c6c(*(undefined8 *)(unaff_x20 + _DAT_112dcc9b8),lVar6,lVar7,
                  *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x28));
    lVar3 = *plVar1;
    lVar5 = plVar1[1];
    *plVar1 = lVar6;
    plVar1[1] = lVar7;
    func_0x000107c61434();
    func_0x000107c61434(lVar7);
    func_0x000101885560(lVar3,lVar5);
  }
  FUN_1018859f0(lVar2,lVar4);
  auVar8._8_8_ = lVar7;
  auVar8._0_8_ = lVar6;
  return auVar8;
}



/* Entry: 101881cb4; end: 101881d1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101881cb4(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dcc918);
  if (*(char *)(puVar1 + 1) == '\x01') {
    func_0x000101881c14();
    func_0x000107c6142c(param_2);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c6142c(param_1);
    *puVar1 = uVar2;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  return uVar2;
}



/* Entry: 101881d1c; end: 101881d3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101881d1c(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  long unaff_x20;
  code *pcVar8;
  undefined1 auVar9 [16];
  
  pcVar7 = FUN_101881d40;
  plVar1 = (long *)(unaff_x20 + _DAT_112dcc920);
  lVar2 = *plVar1;
  pcVar4 = (code *)plVar1[1];
  pcVar8 = pcVar4;
  lVar6 = lVar2;
  if (lVar2 == 1) {
    lVar6 = 0;
    FUN_101881d40();
    lVar3 = *plVar1;
    lVar5 = plVar1[1];
    *plVar1 = lVar6;
    plVar1[1] = (long)pcVar7;
    FUN_1018859f0();
    FUN_101885a1c(lVar3,lVar5);
    pcVar8 = pcVar7;
  }
  (*(code *)0x101885a24)(lVar2,pcVar4);
  auVar9._8_8_ = pcVar8;
  auVar9._0_8_ = lVar6;
  return auVar9;
}



/* Entry: 101881d40; end: 101881dff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101881d40(ulong param_1,undefined8 param_2)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auVar6 [16];
  
  uVar2 = param_1;
  func_0x000101881c14();
  func_0x000107c6142c(param_2);
  lVar5 = *(long *)(uVar2 + 0x10);
  func_0x000107c6142c(uVar2);
  lVar3 = 0;
  lVar4 = 0;
  if ((-1 < (long)param_1) && ((long)param_1 < lVar5)) {
    if (*(ulong *)(*(long *)(unaff_x20 + _DAT_112dcc910) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101881e00);
      (*pcVar1)();
    }
    lVar4 = *(long *)(*(long *)(unaff_x20 + _DAT_112dcc910) + param_1 * 8 + 0x20);
    if (*(long *)(lVar4 + 0x10) == 0) {
      lVar3 = 0;
      lVar4 = 0;
    }
    else {
      func_0x000107c61438(lVar4,2);
      lVar3 = lVar4;
      FUN_101888eb4(lVar4);
      func_0x000107c6142c(lVar4);
    }
  }
  auVar6._8_8_ = lVar4;
  auVar6._0_8_ = lVar3;
  return auVar6;
}



/* Entry: 101881e00; end: 101881e23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101881e00(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  long unaff_x20;
  code *pcVar8;
  undefined1 auVar9 [16];
  
  pcVar7 = FUN_101881ebc;
  plVar1 = (long *)(unaff_x20 + _DAT_112dcc928);
  lVar2 = *plVar1;
  pcVar4 = (code *)plVar1[1];
  pcVar8 = pcVar4;
  lVar6 = lVar2;
  if (lVar2 == 1) {
    lVar6 = 0;
    FUN_101881ebc();
    lVar3 = *plVar1;
    lVar5 = plVar1[1];
    *plVar1 = lVar6;
    plVar1[1] = (long)pcVar7;
    FUN_1018859f0();
    FUN_101885a1c(lVar3,lVar5);
    pcVar8 = pcVar7;
  }
  (*(code *)0x101885a28)(lVar2,pcVar4);
  auVar9._8_8_ = pcVar8;
  auVar9._0_8_ = lVar6;
  return auVar9;
}



/* Entry: 101881e24; end: 101881ebb;  */

undefined1  [16] FUN_101881e24(long *param_1,code *param_2,code *param_3,code *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  code *pcVar7;
  undefined1 auVar8 [16];
  
  plVar1 = (long *)(unaff_x20 + *param_1);
  lVar2 = *plVar1;
  pcVar4 = (code *)plVar1[1];
  pcVar7 = pcVar4;
  lVar6 = lVar2;
  if (lVar2 == 1) {
    lVar6 = 0;
    (*param_2)();
    lVar3 = *plVar1;
    lVar5 = plVar1[1];
    *plVar1 = lVar6;
    plVar1[1] = (long)param_2;
    FUN_1018859f0();
    (*param_3)(lVar3,lVar5);
    pcVar7 = param_2;
  }
  (*param_4)(lVar2,pcVar4);
  auVar8._8_8_ = pcVar7;
  auVar8._0_8_ = lVar6;
  return auVar8;
}



/* Entry: 101881ebc; end: 101881fc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101881ebc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auVar7 [16];
  
  if (*(int *)(unaff_x20 + _DAT_113803438) == 5) {
    lVar5 = param_1;
    func_0x000101881c14();
    func_0x000107c6142c(param_2);
    lVar6 = *(long *)(lVar5 + 0x10);
    func_0x000107c6142c(lVar5);
    lVar3 = 0;
    lVar4 = 0;
    lVar5 = lVar4;
    if ((param_1 < 0) || (lVar6 <= param_1)) goto LAB_101881fb4;
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112dcc910);
    uVar2 = ((undefined8 *)(unaff_x20 + _DAT_112dcc910))[1];
    func_0x000107c61434(uVar1);
    func_0x000107c61434(uVar2);
    FUN_101882274();
    func_0x000107c6142c();
    lVar5 = lVar4;
    FUN_101886350(lVar4,param_1,uVar2);
    func_0x000107c6142c(uVar2);
    func_0x000107c6142c(uVar1);
    func_0x000107c6142c(lVar4);
    if (lVar5 != 0) {
      if (*(long *)(lVar5 + 0x10) != 0) {
        lVar3 = lVar5;
        func_0x000107c61434(lVar5);
        FUN_101884c2c();
        func_0x000107c6142c(lVar5);
        goto LAB_101881fb4;
      }
      func_0x000107c6142c(lVar5);
    }
  }
  lVar3 = 0;
  lVar5 = 0;
LAB_101881fb4:
  auVar7._8_8_ = lVar5;
  auVar7._0_8_ = lVar3;
  return auVar7;
}



/* Entry: 101881fc8; end: 101881feb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101881fc8(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  long unaff_x20;
  code *pcVar8;
  undefined1 auVar9 [16];
  
  pcVar7 = FUN_101881fec;
  plVar1 = (long *)(unaff_x20 + _DAT_112dcc930);
  lVar2 = *plVar1;
  pcVar4 = (code *)plVar1[1];
  pcVar8 = pcVar4;
  lVar6 = lVar2;
  if (lVar2 == 1) {
    lVar6 = 0;
    FUN_101881fec();
    lVar3 = *plVar1;
    lVar5 = plVar1[1];
    *plVar1 = lVar6;
    plVar1[1] = (long)pcVar7;
    FUN_1018859f0();
    (*(code *)0x101885a2c)(lVar3,lVar5);
    pcVar8 = pcVar7;
  }
  (*(code *)0x101885a30)(lVar2,pcVar4);
  auVar9._8_8_ = pcVar8;
  auVar9._0_8_ = lVar6;
  return auVar9;
}



/* Entry: 101881fec; end: 1018820d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101881fec(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  lVar4 = param_1;
  func_0x000101881c14();
  func_0x000107c6142c(param_2);
  lVar5 = *(long *)(lVar4 + 0x10);
  func_0x000107c6142c(lVar4);
  lVar3 = 0;
  lVar4 = 0;
  if ((-1 < param_1) && (param_1 < lVar5)) {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112dcc910);
    uVar2 = ((undefined8 *)(unaff_x20 + _DAT_112dcc910))[1];
    func_0x000107c61434(uVar1);
    func_0x000107c61434(uVar2);
    FUN_101882438();
    func_0x000107c6142c();
    lVar4 = param_2;
    func_0x00010188635c(param_2,param_1,uVar2);
    func_0x000107c6142c(uVar2);
    func_0x000107c6142c(uVar1);
    func_0x000107c6142c(param_2);
    if (lVar4 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar4;
      func_0x000107c61434(lVar4);
      FUN_101884e6c();
      func_0x000107c6142c(lVar4);
    }
  }
  auVar6._8_8_ = lVar4;
  auVar6._0_8_ = lVar3;
  return auVar6;
}



/* Entry: 1018820d8; end: 1018821c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1018820d8(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  
  lVar2 = _DAT_112dcc938;
  lVar3 = *(long *)(unaff_x20 + _DAT_112dcc938);
  lVar4 = lVar3;
  if (lVar3 == 1) {
    func_0x000101881c14();
    func_0x000107c6142c(param_2);
    lVar4 = *(long *)(param_1 + 0x10);
    func_0x000107c6142c(param_1);
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112dcc910);
      uVar1 = ((undefined8 *)(unaff_x20 + _DAT_112dcc910))[1];
      func_0x000107c61434(uVar5);
      func_0x000107c61434(uVar1);
      func_0x00010188244c();
      func_0x000107c6142c();
      lVar4 = param_2;
      FUN_101886368(param_2,0,uVar1);
      func_0x000107c6142c(uVar1);
      func_0x000107c6142c(uVar5);
      func_0x000107c6142c(param_2);
    }
    uVar5 = *(undefined8 *)(unaff_x20 + lVar2);
    *(long *)(unaff_x20 + lVar2) = lVar4;
    func_0x000107c61434(lVar4);
    FUN_1018850ac(uVar5);
  }
  func_0x0001018850bc(lVar3);
  return lVar4;
}


