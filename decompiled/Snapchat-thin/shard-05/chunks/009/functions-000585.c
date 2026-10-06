/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1042e405c; end: 1042e73ff;  */

undefined8 * FUN_1042e405c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  code *pcVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  ulong uVar27;
  long lVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  long lVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  
  uVar29 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar29;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  lVar14 = 0;
  FUN_1042dddf8();
  _swift_bridgeObjectRetain(uVar29);
  puVar15 = puVar2;
  _swift_getEnumCaseMultiPayload(puVar2,lVar14);
  iVar13 = (int)puVar15;
  if (iVar13 < 5) {
    if (iVar13 < 3) {
      if (iVar13 == 1) {
        uVar29 = puVar2[1];
        *puVar1 = *puVar2;
        puVar1[1] = uVar29;
        *(undefined2 *)(puVar1 + 2) = *(undefined2 *)(puVar2 + 2);
        uVar29 = puVar2[3];
        uVar30 = puVar2[4];
        puVar1[3] = uVar29;
        puVar1[4] = uVar30;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar29);
        _swift_storeEnumTagMultiPayload(puVar1,lVar14,1);
        goto LAB_1042e511c;
      }
      if (iVar13 == 2) {
        uVar29 = puVar2[1];
        *puVar1 = *puVar2;
        puVar1[1] = uVar29;
        *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(puVar2 + 2);
        _swift_bridgeObjectRetain();
        _swift_storeEnumTagMultiPayload(puVar1,lVar14,2);
        goto LAB_1042e511c;
      }
    }
    else {
      if (iVar13 == 3) {
        uVar29 = puVar2[1];
        *puVar1 = *puVar2;
        puVar1[1] = uVar29;
        *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(puVar2 + 2);
        _swift_bridgeObjectRetain();
        _swift_storeEnumTagMultiPayload(puVar1,lVar14,3);
        goto LAB_1042e511c;
      }
      if (iVar13 == 4) {
        uVar8 = puVar2[1];
        *puVar1 = *puVar2;
        puVar1[1] = uVar8;
        *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(puVar2 + 2);
        uVar22 = puVar2[3];
        puVar1[3] = uVar22;
        uVar29 = puVar2[4];
        puVar1[5] = puVar2[5];
        puVar1[4] = uVar29;
        lVar16 = 0;
        func_0x0001042e769c();
        puVar15 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar16 + 0x24));
        puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar16 + 0x24));
        uVar9 = puVar2[1];
        *puVar15 = *puVar2;
        puVar15[1] = uVar9;
        uVar10 = puVar2[3];
        puVar15[2] = puVar2[2];
        puVar15[3] = uVar10;
        lVar17 = 0;
        func_0x0001042e75b8();
        puVar3 = (undefined8 *)((long)puVar15 + (long)*(int *)(lVar17 + 0x18));
        puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar17 + 0x18));
        uVar29 = *puVar4;
        uVar32 = puVar4[3];
        uVar30 = puVar4[2];
        puVar3[1] = puVar4[1];
        *puVar3 = uVar29;
        puVar3[3] = uVar32;
        puVar3[2] = uVar30;
        uVar29 = puVar4[4];
        puVar3[5] = puVar4[5];
        puVar3[4] = uVar29;
        uVar29 = puVar4[6];
        uVar30 = puVar4[7];
        puVar3[6] = uVar29;
        puVar3[7] = uVar30;
        uVar30 = puVar4[8];
        uVar32 = puVar4[9];
        puVar3[8] = uVar30;
        puVar3[9] = uVar32;
        uVar32 = puVar4[10];
        uVar37 = puVar4[0xb];
        puVar3[10] = uVar32;
        puVar3[0xb] = uVar37;
        uVar37 = puVar4[0xc];
        uVar36 = puVar4[0xd];
        puVar3[0xc] = uVar37;
        puVar3[0xd] = uVar36;
        uVar36 = puVar4[0xe];
        uVar34 = puVar4[0xf];
        puVar3[0xe] = uVar36;
        puVar3[0xf] = uVar34;
        uVar34 = puVar4[0x10];
        puVar3[0x10] = uVar34;
        lVar18 = 0;
        func_0x000100b91d00();
        lVar28 = (long)*(int *)(lVar18 + 0x3c);
        lVar19 = 0;
        __s10Foundation4UUIDVMa();
        lVar23 = *(long *)(lVar19 + -8);
        pcVar24 = *(code **)(lVar23 + 0x30);
        _swift_bridgeObjectRetain(uVar8);
        _swift_bridgeObjectRetain(uVar22);
        _swift_bridgeObjectRetain(uVar9);
        _swift_bridgeObjectRetain(uVar10);
        _swift_bridgeObjectRetain(uVar29);
        _swift_bridgeObjectRetain(uVar30);
        _swift_bridgeObjectRetain(uVar32);
        _swift_bridgeObjectRetain(uVar37);
        _swift_bridgeObjectRetain(uVar36);
        _swift_bridgeObjectRetain(uVar34);
        lVar16 = (long)puVar4 + lVar28;
        (*pcVar24)(lVar16,1,lVar19);
        if ((int)lVar16 == 0) {
          (**(code **)(lVar23 + 0x10))((long)puVar3 + lVar28,(long)puVar4 + lVar28,lVar19);
          (**(code **)(lVar23 + 0x38))((long)puVar3 + lVar28,0,1,lVar19);
        }
        else {
          lVar16 = 0x112d3bc20;
          func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
          _memcpy((long)puVar3 + lVar28,(long)puVar4 + lVar28,
                  *(undefined8 *)(*(long *)(lVar16 + -8) + 0x40));
        }
        lVar28 = (long)*(int *)(lVar18 + 0x40);
        lVar16 = (long)puVar4 + lVar28;
        (*pcVar24)(lVar16,1,lVar19);
        if ((int)lVar16 == 0) {
          (**(code **)(lVar23 + 0x10))((long)puVar3 + lVar28,(long)puVar4 + lVar28,lVar19);
          (**(code **)(lVar23 + 0x38))((long)puVar3 + lVar28,0,1,lVar19);
        }
        else {
          lVar16 = 0x112d3bc20;
          func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
          _memcpy((long)puVar3 + lVar28,(long)puVar4 + lVar28,
                  *(undefined8 *)(*(long *)(lVar16 + -8) + 0x40));
        }
        lVar28 = (long)*(int *)(lVar18 + 0x44);
        lVar16 = (long)puVar4 + lVar28;
        (*pcVar24)(lVar16,1,lVar19);
        if ((int)lVar16 == 0) {
          (**(code **)(lVar23 + 0x10))((long)puVar3 + lVar28,(long)puVar4 + lVar28,lVar19);
          (**(code **)(lVar23 + 0x38))((long)puVar3 + lVar28,0,1,lVar19);
        }
        else {
          lVar16 = 0x112d3bc20;
          func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
          _memcpy((long)puVar3 + lVar28,(long)puVar4 + lVar28,
                  *(undefined8 *)(*(long *)(lVar16 + -8) + 0x40));
        }
        *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar18 + 0x48)) =
             *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar18 + 0x48));
        *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar18 + 0x4c)) =
             *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar18 + 0x4c));
        uVar29 = *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar18 + 0x50));
        *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar18 + 0x50)) = uVar29;
        uVar30 = *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar18 + 0x54));
        *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar18 + 0x54)) = uVar30;
        uVar32 = *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar18 + 0x58));
        *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar18 + 0x58)) = uVar32;
        puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar18 + 0x5c));
        puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar18 + 0x5c));
        lVar16 = puVar6[1];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar29);
        _swift_bridgeObjectRetain(uVar30);
        _swift_bridgeObjectRetain(uVar32);
        if (lVar16 == 1) {
          uVar29 = puVar6[0xc];
          uVar32 = puVar6[0xf];
          uVar30 = puVar6[0xe];
          puVar5[0xd] = puVar6[0xd];
          puVar5[0xc] = uVar29;
          puVar5[0xf] = uVar32;
          puVar5[0xe] = uVar30;
          uVar29 = puVar6[0x10];
          uVar32 = puVar6[0x13];
          uVar30 = puVar6[0x12];
          puVar5[0x11] = puVar6[0x11];
          puVar5[0x10] = uVar29;
          puVar5[0x13] = uVar32;
          puVar5[0x12] = uVar30;
          uVar29 = puVar6[4];
          uVar32 = puVar6[7];
          uVar30 = puVar6[6];
          puVar5[5] = puVar6[5];
          puVar5[4] = uVar29;
          puVar5[7] = uVar32;
          puVar5[6] = uVar30;
          uVar29 = puVar6[8];
          uVar32 = puVar6[0xb];
          uVar30 = puVar6[10];
          puVar5[9] = puVar6[9];
          puVar5[8] = uVar29;
          puVar5[0xb] = uVar32;
          puVar5[10] = uVar30;
          uVar29 = *puVar6;
          uVar32 = puVar6[3];
          uVar30 = puVar6[2];
          puVar5[1] = puVar6[1];
          *puVar5 = uVar29;
          puVar5[3] = uVar32;
          puVar5[2] = uVar30;
        }
        else {
          *puVar5 = *puVar6;
          puVar5[1] = lVar16;
          uVar29 = puVar6[3];
          puVar5[2] = puVar6[2];
          puVar5[3] = uVar29;
          uVar30 = puVar6[5];
          puVar5[4] = puVar6[4];
          puVar5[5] = uVar30;
          uVar32 = puVar6[7];
          puVar5[6] = puVar6[6];
          puVar5[7] = uVar32;
          uVar37 = puVar6[9];
          puVar5[8] = puVar6[8];
          puVar5[9] = uVar37;
          *(undefined1 *)(puVar5 + 10) = *(undefined1 *)(puVar6 + 10);
          uVar36 = puVar6[0xb];
          puVar5[0xc] = puVar6[0xc];
          puVar5[0xb] = uVar36;
          lVar28 = puVar6[0x12];
          _swift_bridgeObjectRetain(lVar16);
          _swift_bridgeObjectRetain(uVar29);
          _swift_bridgeObjectRetain(uVar30);
          _swift_bridgeObjectRetain(uVar32);
          _swift_bridgeObjectRetain(uVar37);
          if (lVar28 == 0) {
            uVar29 = puVar6[0xd];
            puVar5[0xe] = puVar6[0xe];
            puVar5[0xd] = uVar29;
            uVar29 = puVar6[0xf];
            puVar5[0x10] = puVar6[0x10];
            puVar5[0xf] = uVar29;
            uVar29 = puVar6[0x11];
            puVar5[0x12] = puVar6[0x12];
            puVar5[0x11] = uVar29;
            puVar5[0x13] = puVar6[0x13];
          }
          else {
            uVar29 = puVar6[0xe];
            puVar5[0xd] = puVar6[0xd];
            puVar5[0xe] = uVar29;
            uVar29 = puVar6[0x10];
            puVar5[0xf] = puVar6[0xf];
            puVar5[0x10] = uVar29;
            puVar5[0x11] = puVar6[0x11];
            puVar5[0x12] = lVar28;
            puVar5[0x13] = puVar6[0x13];
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar29);
            _swift_bridgeObjectRetain(lVar28);
          }
        }
        *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar18 + 0x60)) =
             *(undefined1 *)((long)puVar4 + (long)*(int *)(lVar18 + 0x60));
        puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar18 + 100));
        puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar18 + 100));
        lVar16 = puVar6[1];
        if (lVar16 == 1) {
          uVar29 = *puVar6;
          uVar32 = puVar6[3];
          uVar30 = puVar6[2];
          puVar5[1] = puVar6[1];
          *puVar5 = uVar29;
          puVar5[3] = uVar32;
          puVar5[2] = uVar30;
          puVar5[4] = puVar6[4];
        }
        else {
          *puVar5 = *puVar6;
          puVar5[1] = lVar16;
          puVar5[2] = puVar6[2];
          *(undefined1 *)(puVar5 + 3) = *(undefined1 *)(puVar6 + 3);
          *(undefined2 *)((long)puVar5 + 0x19) = *(undefined2 *)((long)puVar6 + 0x19);
          puVar5[4] = puVar6[4];
          _swift_bridgeObjectRetain();
        }
        puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar18 + 0x68));
        puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar18 + 0x68));
        if (puVar6[0x27] == 0) {
          _memcpy(puVar5,puVar6,0x160);
        }
        else {
          uVar29 = *puVar6;
          puVar5[1] = puVar6[1];
          *puVar5 = uVar29;
          uVar29 = puVar6[2];
          uVar30 = puVar6[3];
          puVar5[2] = uVar29;
          puVar5[3] = uVar30;
          uVar31 = puVar6[4];
          puVar5[4] = uVar31;
          uVar30 = puVar6[5];
          puVar5[6] = puVar6[6];
          puVar5[5] = uVar30;
          uVar30 = puVar6[7];
          uVar32 = puVar6[8];
          puVar5[7] = uVar30;
          puVar5[8] = uVar32;
          *(undefined2 *)(puVar5 + 9) = *(undefined2 *)(puVar6 + 9);
          *(undefined1 *)((long)puVar5 + 0x4a) = *(undefined1 *)((long)puVar6 + 0x4a);
          uVar32 = puVar6[0xb];
          puVar5[10] = puVar6[10];
          puVar5[0xb] = uVar32;
          uVar25 = puVar6[0xc];
          puVar5[0xc] = uVar25;
          *(undefined1 *)(puVar5 + 0xd) = *(undefined1 *)(puVar6 + 0xd);
          uVar37 = puVar6[0xe];
          puVar5[0xf] = puVar6[0xf];
          puVar5[0xe] = uVar37;
          *(undefined1 *)(puVar5 + 0x10) = *(undefined1 *)(puVar6 + 0x10);
          uVar37 = puVar6[0x12];
          puVar5[0x11] = puVar6[0x11];
          puVar5[0x12] = uVar37;
          uVar36 = puVar6[0x14];
          puVar5[0x13] = puVar6[0x13];
          puVar5[0x14] = uVar36;
          uVar8 = puVar6[0x16];
          puVar5[0x15] = puVar6[0x15];
          puVar5[0x16] = uVar8;
          uVar9 = puVar6[0x18];
          puVar5[0x17] = puVar6[0x17];
          puVar5[0x18] = uVar9;
          uVar10 = puVar6[0x1a];
          puVar5[0x19] = puVar6[0x19];
          puVar5[0x1a] = uVar10;
          uVar34 = puVar6[0x1b];
          puVar5[0x1c] = puVar6[0x1c];
          puVar5[0x1b] = uVar34;
          uVar35 = puVar6[0x1d];
          puVar5[0x1d] = uVar35;
          *(undefined1 *)(puVar5 + 0x1e) = *(undefined1 *)(puVar6 + 0x1e);
          *(undefined1 *)((long)puVar5 + 0xf1) = *(undefined1 *)((long)puVar6 + 0xf1);
          *(undefined1 *)((long)puVar5 + 0xf2) = *(undefined1 *)((long)puVar6 + 0xf2);
          uVar34 = puVar6[0x20];
          puVar5[0x1f] = puVar6[0x1f];
          puVar5[0x20] = uVar34;
          uVar22 = puVar6[0x22];
          puVar5[0x21] = puVar6[0x21];
          puVar5[0x22] = uVar22;
          uVar11 = puVar6[0x24];
          puVar5[0x23] = puVar6[0x23];
          puVar5[0x24] = uVar11;
          uVar12 = puVar6[0x26];
          puVar5[0x25] = puVar6[0x25];
          puVar5[0x26] = uVar12;
          uVar26 = puVar6[0x27];
          puVar5[0x27] = uVar26;
          uVar38 = puVar6[0x28];
          puVar5[0x29] = puVar6[0x29];
          puVar5[0x28] = uVar38;
          uVar38 = puVar6[0x2b];
          puVar5[0x2a] = puVar6[0x2a];
          puVar5[0x2b] = uVar38;
          _swift_bridgeObjectRetain(uVar29);
          _swift_bridgeObjectRetain(uVar31);
          _swift_bridgeObjectRetain(uVar30);
          _swift_bridgeObjectRetain(uVar32);
          _swift_bridgeObjectRetain(uVar25);
          _swift_bridgeObjectRetain(uVar37);
          _swift_bridgeObjectRetain(uVar36);
          _swift_bridgeObjectRetain(uVar8);
          _swift_bridgeObjectRetain(uVar9);
          _swift_bridgeObjectRetain(uVar10);
          _swift_bridgeObjectRetain(uVar35);
          _swift_bridgeObjectRetain(uVar34);
          _swift_bridgeObjectRetain(uVar22);
          _swift_bridgeObjectRetain(uVar11);
          _swift_bridgeObjectRetain(uVar12);
          _swift_bridgeObjectRetain(uVar26);
        }
        puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar18 + 0x6c));
        puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar18 + 0x6c));
        uVar27 = puVar6[1];
        if (uVar27 >> 0x3c < 0xf) {
          uVar29 = *puVar6;
          func_0x00010006c00c(uVar29,uVar27);
          *puVar5 = uVar29;
          puVar5[1] = uVar27;
        }
        else {
          uVar29 = *puVar6;
          puVar5[1] = puVar6[1];
          *puVar5 = uVar29;
        }
        *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar18 + 0x70)) =
             *(undefined1 *)((long)puVar4 + (long)*(int *)(lVar18 + 0x70));
        puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar18 + 0x74));
        puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar18 + 0x74));
        uVar29 = puVar6[1];
        *puVar5 = *puVar6;
        puVar5[1] = uVar29;
        puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar18 + 0x78));
        puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar18 + 0x78));
        uVar29 = puVar6[1];
        *puVar5 = *puVar6;
        puVar5[1] = uVar29;
        puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar18 + 0x7c));
        puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar18 + 0x7c));
        uVar30 = puVar6[1];
        *puVar5 = *puVar6;
        puVar5[1] = uVar30;
        puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar18 + 0x80));
        puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar18 + 0x80));
        uVar27 = puVar6[1];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar29);
        _swift_bridgeObjectRetain(uVar30);
        if (uVar27 >> 0x3c < 0xf) {
          uVar29 = *puVar6;
          func_0x00010006c00c(uVar29,uVar27);
          *puVar5 = uVar29;
          puVar5[1] = uVar27;
        }
        else {
          uVar29 = *puVar6;
          puVar5[1] = puVar6[1];
          *puVar5 = uVar29;
        }
        puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar18 + 0x84));
        puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar18 + 0x84));
        lVar16 = 0;
        func_0x000100b91fbc();
        lVar28 = *(long *)(lVar16 + -8);
        puVar20 = puVar6;
        (**(code **)(lVar28 + 0x30))(puVar6,1,lVar16);
        if ((int)puVar20 == 0) {
          uVar29 = puVar6[1];
          *puVar5 = *puVar6;
          puVar5[1] = uVar29;
          uVar29 = puVar6[2];
          uVar32 = puVar6[5];
          uVar30 = puVar6[4];
          puVar5[3] = puVar6[3];
          puVar5[2] = uVar29;
          puVar5[5] = uVar32;
          puVar5[4] = uVar30;
          uVar29 = puVar6[6];
          uVar30 = puVar6[7];
          puVar5[6] = uVar29;
          puVar5[7] = uVar30;
          uVar30 = puVar6[8];
          puVar5[8] = uVar30;
          lVar33 = (long)*(int *)(lVar16 + 0x28);
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar29);
          _swift_bridgeObjectRetain(uVar30);
          lVar21 = (long)puVar6 + lVar33;
          (*pcVar24)(lVar21,1,lVar19);
          if ((int)lVar21 == 0) {
            (**(code **)(lVar23 + 0x10))((long)puVar5 + lVar33,(long)puVar6 + lVar33,lVar19);
            (**(code **)(lVar23 + 0x38))((long)puVar5 + lVar33,0,1,lVar19);
          }
          else {
            lVar21 = 0x112d3bc20;
            func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
            _memcpy((long)puVar5 + lVar33,(long)puVar6 + lVar33,
                    *(undefined8 *)(*(long *)(lVar21 + -8) + 0x40));
          }
          puVar20 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar16 + 0x2c));
          puVar7 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar16 + 0x2c));
          uVar29 = puVar7[1];
          *puVar20 = *puVar7;
          puVar20[1] = uVar29;
          puVar20 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar16 + 0x30));
          puVar7 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar16 + 0x30));
          uVar29 = puVar7[1];
          *puVar20 = *puVar7;
          puVar20[1] = uVar29;
          lVar33 = (long)*(int *)(lVar16 + 0x34);
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar29);
          lVar21 = (long)puVar6 + lVar33;
          (*pcVar24)(lVar21,1,lVar19);
          if ((int)lVar21 == 0) {
            (**(code **)(lVar23 + 0x10))((long)puVar5 + lVar33,(long)puVar6 + lVar33,lVar19);
            (**(code **)(lVar23 + 0x38))((long)puVar5 + lVar33,0,1,lVar19);
          }
          else {
            lVar19 = 0x112d3bc20;
            func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
            _memcpy((long)puVar5 + lVar33,(long)puVar6 + lVar33,
                    *(undefined8 *)(*(long *)(lVar19 + -8) + 0x40));
          }
          puVar20 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar16 + 0x38));
          puVar7 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar16 + 0x38));
          uVar29 = puVar7[1];
          *puVar20 = *puVar7;
          puVar20[1] = uVar29;
          puVar20 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar16 + 0x3c));
          puVar6 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar16 + 0x3c));
          uVar29 = puVar6[1];
          *puVar20 = *puVar6;
          puVar20[1] = uVar29;
          pcVar24 = *(code **)(lVar28 + 0x38);
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar29);
          (*pcVar24)(puVar5,0,1,lVar16);
        }
        else {
          lVar16 = 0x112db39a8;
          func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
          _memcpy(puVar5,puVar6,*(undefined8 *)(*(long *)(lVar16 + -8) + 0x40));
        }
        puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar18 + 0x88));
        puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar18 + 0x88));
        lVar16 = puVar6[1];
        if (lVar16 == 0) {
          uVar29 = puVar6[0x10];
          uVar32 = puVar6[0x13];
          uVar30 = puVar6[0x12];
          puVar5[0x11] = puVar6[0x11];
          puVar5[0x10] = uVar29;
          puVar5[0x13] = uVar32;
          puVar5[0x12] = uVar30;
          *(undefined1 *)(puVar5 + 0x14) = *(undefined1 *)(puVar6 + 0x14);
          uVar29 = puVar6[8];
          uVar32 = puVar6[0xb];
          uVar30 = puVar6[10];
          puVar5[9] = puVar6[9];
          puVar5[8] = uVar29;
          puVar5[0xb] = uVar32;
          puVar5[10] = uVar30;
          uVar32 = puVar6[0xc];
          uVar30 = puVar6[0xf];
          uVar29 = puVar6[0xe];
          puVar5[0xd] = puVar6[0xd];
          puVar5[0xc] = uVar32;
          puVar5[0xf] = uVar30;
          puVar5[0xe] = uVar29;
          uVar29 = *puVar6;
          uVar32 = puVar6[3];
          uVar30 = puVar6[2];
          puVar5[1] = puVar6[1];
          *puVar5 = uVar29;
          puVar5[3] = uVar32;
          puVar5[2] = uVar30;
          uVar32 = puVar6[4];
          uVar30 = puVar6[7];
          uVar29 = puVar6[6];
          puVar5[5] = puVar6[5];
          puVar5[4] = uVar32;
          puVar5[7] = uVar30;
          puVar5[6] = uVar29;
        }
        else {
          *puVar5 = *puVar6;
          puVar5[1] = lVar16;
          lVar16 = puVar6[8];
          _swift_bridgeObjectRetain();
          if (lVar16 == 1) {
            uVar29 = puVar6[2];
            uVar32 = puVar6[5];
            uVar30 = puVar6[4];
            puVar5[3] = puVar6[3];
            puVar5[2] = uVar29;
            puVar5[5] = uVar32;
            puVar5[4] = uVar30;
            uVar29 = puVar6[6];
            puVar5[7] = puVar6[7];
            puVar5[6] = uVar29;
            puVar5[8] = puVar6[8];
          }
          else {
            lVar19 = puVar6[4];
            if (lVar19 == 1) {
              uVar29 = puVar6[2];
              uVar32 = puVar6[5];
              uVar30 = puVar6[4];
              puVar5[3] = puVar6[3];
              puVar5[2] = uVar29;
              puVar5[5] = uVar32;
              puVar5[4] = uVar30;
              puVar5[6] = puVar6[6];
            }
            else {
              uVar29 = puVar6[2];
              puVar5[3] = puVar6[3];
              puVar5[2] = uVar29;
              uVar29 = puVar6[5];
              uVar30 = puVar6[6];
              puVar5[4] = lVar19;
              puVar5[5] = uVar29;
              puVar5[6] = uVar30;
              _swift_bridgeObjectRetain();
              _swift_bridgeObjectRetain(uVar30);
            }
            puVar5[7] = puVar6[7];
            puVar5[8] = lVar16;
            _swift_bridgeObjectRetain(lVar16);
          }
          lVar16 = puVar6[0xf];
          if (lVar16 == 1) {
            uVar29 = puVar6[9];
            puVar5[10] = puVar6[10];
            puVar5[9] = uVar29;
            uVar29 = puVar6[0xb];
            puVar5[0xc] = puVar6[0xc];
            puVar5[0xb] = uVar29;
            uVar29 = puVar6[0xd];
            puVar5[0xe] = puVar6[0xe];
            puVar5[0xd] = uVar29;
            puVar5[0xf] = puVar6[0xf];
          }
          else {
            lVar19 = puVar6[0xb];
            if (lVar19 == 1) {
              uVar29 = puVar6[9];
              puVar5[10] = puVar6[10];
              puVar5[9] = uVar29;
              uVar29 = puVar6[0xb];
              puVar5[0xc] = puVar6[0xc];
              puVar5[0xb] = uVar29;
              puVar5[0xd] = puVar6[0xd];
            }
            else {
              uVar29 = puVar6[9];
              puVar5[10] = puVar6[10];
              puVar5[9] = uVar29;
              uVar29 = puVar6[0xc];
              uVar30 = puVar6[0xd];
              puVar5[0xb] = lVar19;
              puVar5[0xc] = uVar29;
              puVar5[0xd] = uVar30;
              _swift_bridgeObjectRetain();
              _swift_bridgeObjectRetain(uVar30);
            }
            puVar5[0xe] = puVar6[0xe];
            puVar5[0xf] = lVar16;
            _swift_bridgeObjectRetain(lVar16);
          }
          *(undefined2 *)(puVar5 + 0x10) = *(undefined2 *)(puVar6 + 0x10);
          uVar29 = puVar6[0x11];
          puVar5[0x12] = puVar6[0x12];
          puVar5[0x11] = uVar29;
          puVar5[0x13] = puVar6[0x13];
          *(undefined1 *)(puVar5 + 0x14) = *(undefined1 *)(puVar6 + 0x14);
          _swift_bridgeObjectRetain();
        }
        *(undefined4 *)((long)puVar3 + (long)*(int *)(lVar18 + 0x8c)) =
             *(undefined4 *)((long)puVar4 + (long)*(int *)(lVar18 + 0x8c));
        *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar18 + 0x90)) =
             *(undefined1 *)((long)puVar4 + (long)*(int *)(lVar18 + 0x90));
        puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar18 + 0x94));
        puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar18 + 0x94));
        uVar29 = *puVar6;
        uVar32 = puVar6[3];
        uVar30 = puVar6[2];
        puVar5[1] = puVar6[1];
        *puVar5 = uVar29;
        puVar5[3] = uVar32;
        puVar5[2] = uVar30;
        uVar29 = puVar6[4];
        uVar32 = puVar6[7];
        uVar30 = puVar6[6];
        puVar5[5] = puVar6[5];
        puVar5[4] = uVar29;
        puVar5[7] = uVar32;
        puVar5[6] = uVar30;
        uVar32 = puVar6[0xc];
        uVar30 = puVar6[0xf];
        uVar29 = puVar6[0xe];
        puVar5[0xd] = puVar6[0xd];
        puVar5[0xc] = uVar32;
        puVar5[0xf] = uVar30;
        puVar5[0xe] = uVar29;
        uVar32 = puVar6[8];
        uVar30 = puVar6[0xb];
        uVar29 = puVar6[10];
        puVar5[9] = puVar6[9];
        puVar5[8] = uVar32;
        puVar5[0xb] = uVar30;
        puVar5[10] = uVar29;
        uVar29 = *(undefined8 *)((long)puVar6 + 0xa9);
        *(undefined8 *)((long)puVar5 + 0xb1) = *(undefined8 *)((long)puVar6 + 0xb1);
        *(undefined8 *)((long)puVar5 + 0xa9) = uVar29;
        uVar29 = puVar6[0x12];
        uVar32 = puVar6[0x15];
        uVar30 = puVar6[0x14];
        puVar5[0x13] = puVar6[0x13];
        puVar5[0x12] = uVar29;
        puVar5[0x15] = uVar32;
        puVar5[0x14] = uVar30;
        uVar29 = puVar6[0x10];
        puVar5[0x11] = puVar6[0x11];
        puVar5[0x10] = uVar29;
        *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar18 + 0x98)) =
             *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar18 + 0x98));
        *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar18 + 0x9c)) =
             *(undefined1 *)((long)puVar4 + (long)*(int *)(lVar18 + 0x9c));
        *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar18 + 0xa0)) =
             *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar18 + 0xa0));
        *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar18 + 0xa4)) =
             *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar18 + 0xa4));
        *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar18 + 0xa8)) =
             *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar18 + 0xa8));
        puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar18 + 0xac));
        puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar18 + 0xac));
        lVar16 = puVar6[1];
        if (lVar16 == 0) {
          uVar29 = *puVar6;
          uVar32 = puVar6[3];
          uVar30 = puVar6[2];
          puVar5[1] = puVar6[1];
          *puVar5 = uVar29;
          puVar5[3] = uVar32;
          puVar5[2] = uVar30;
        }
        else {
          *puVar5 = *puVar6;
          puVar5[1] = lVar16;
          uVar29 = puVar6[3];
          puVar5[2] = puVar6[2];
          puVar5[3] = uVar29;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar29);
        }
        *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar18 + 0xb0)) =
             *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar18 + 0xb0));
        *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar18 + 0xb4)) =
             *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar18 + 0xb4));
        puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar18 + 0xb8));
        puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar18 + 0xb8));
        lVar16 = puVar6[1];
        if (lVar16 == 0) {
          uVar29 = puVar6[0x10];
          uVar32 = puVar6[0x13];
          uVar30 = puVar6[0x12];
          puVar5[0x11] = puVar6[0x11];
          puVar5[0x10] = uVar29;
          puVar5[0x13] = uVar32;
          puVar5[0x12] = uVar30;
          *(undefined1 *)(puVar5 + 0x14) = *(undefined1 *)(puVar6 + 0x14);
          uVar29 = puVar6[8];
          uVar32 = puVar6[0xb];
          uVar30 = puVar6[10];
          puVar5[9] = puVar6[9];
          puVar5[8] = uVar29;
          puVar5[0xb] = uVar32;
          puVar5[10] = uVar30;
          uVar32 = puVar6[0xc];
          uVar30 = puVar6[0xf];
          uVar29 = puVar6[0xe];
          puVar5[0xd] = puVar6[0xd];
          puVar5[0xc] = uVar32;
          puVar5[0xf] = uVar30;
          puVar5[0xe] = uVar29;
          uVar29 = *puVar6;
          uVar32 = puVar6[3];
          uVar30 = puVar6[2];
          puVar5[1] = puVar6[1];
          *puVar5 = uVar29;
          puVar5[3] = uVar32;
          puVar5[2] = uVar30;
          uVar32 = puVar6[4];
          uVar30 = puVar6[7];
          uVar29 = puVar6[6];
          puVar5[5] = puVar6[5];
          puVar5[4] = uVar32;
          puVar5[7] = uVar30;
          puVar5[6] = uVar29;
        }
        else {
          *puVar5 = *puVar6;
          puVar5[1] = lVar16;
          lVar16 = puVar6[8];
          _swift_bridgeObjectRetain();
          if (lVar16 == 1) {
            uVar29 = puVar6[2];
            uVar32 = puVar6[5];
            uVar30 = puVar6[4];
            puVar5[3] = puVar6[3];
            puVar5[2] = uVar29;
            puVar5[5] = uVar32;
            puVar5[4] = uVar30;
            uVar29 = puVar6[6];
            puVar5[7] = puVar6[7];
            puVar5[6] = uVar29;
            puVar5[8] = puVar6[8];
          }
          else {
            lVar19 = puVar6[4];
            if (lVar19 == 1) {
              uVar29 = puVar6[2];
              uVar32 = puVar6[5];
              uVar30 = puVar6[4];
              puVar5[3] = puVar6[3];
              puVar5[2] = uVar29;
              puVar5[5] = uVar32;
              puVar5[4] = uVar30;
              puVar5[6] = puVar6[6];
            }
            else {
              uVar29 = puVar6[2];
              puVar5[3] = puVar6[3];
              puVar5[2] = uVar29;
              uVar29 = puVar6[5];
              uVar30 = puVar6[6];
              puVar5[4] = lVar19;
              puVar5[5] = uVar29;
              puVar5[6] = uVar30;
              _swift_bridgeObjectRetain();
              _swift_bridgeObjectRetain(uVar30);
            }
            puVar5[7] = puVar6[7];
            puVar5[8] = lVar16;
            _swift_bridgeObjectRetain(lVar16);
          }
          lVar16 = puVar6[0xf];
          if (lVar16 == 1) {
            uVar29 = puVar6[9];
            puVar5[10] = puVar6[10];
            puVar5[9] = uVar29;
            uVar29 = puVar6[0xb];
            puVar5[0xc] = puVar6[0xc];
            puVar5[0xb] = uVar29;
            uVar29 = puVar6[0xd];
            puVar5[0xe] = puVar6[0xe];
            puVar5[0xd] = uVar29;
            puVar5[0xf] = puVar6[0xf];
          }
          else {
            lVar19 = puVar6[0xb];
            if (lVar19 == 1) {
              uVar29 = puVar6[9];
              puVar5[10] = puVar6[10];
              puVar5[9] = uVar29;
              uVar29 = puVar6[0xb];
              puVar5[0xc] = puVar6[0xc];
              puVar5[0xb] = uVar29;
              puVar5[0xd] = puVar6[0xd];
            }
            else {
              uVar29 = puVar6[9];
              puVar5[10] = puVar6[10];
              puVar5[9] = uVar29;
              uVar29 = puVar6[0xc];
              uVar30 = puVar6[0xd];
              puVar5[0xb] = lVar19;
              puVar5[0xc] = uVar29;
              puVar5[0xd] = uVar30;
              _swift_bridgeObjectRetain();
              _swift_bridgeObjectRetain(uVar30);
            }
            puVar5[0xe] = puVar6[0xe];
            puVar5[0xf] = lVar16;
            _swift_bridgeObjectRetain(lVar16);
          }
          *(undefined2 *)(puVar5 + 0x10) = *(undefined2 *)(puVar6 + 0x10);
          uVar29 = puVar6[0x11];
          puVar5[0x12] = puVar6[0x12];
          puVar5[0x11] = uVar29;
          puVar5[0x13] = puVar6[0x13];
          *(undefined1 *)(puVar5 + 0x14) = *(undefined1 *)(puVar6 + 0x14);
          _swift_bridgeObjectRetain();
        }
        puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar18 + 0xbc));
        puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar18 + 0xbc));
        lVar16 = puVar6[1];
        if (lVar16 == 0) {
          uVar29 = puVar6[0x10];
          uVar32 = puVar6[0x13];
          uVar30 = puVar6[0x12];
          puVar5[0x11] = puVar6[0x11];
          puVar5[0x10] = uVar29;
          puVar5[0x13] = uVar32;
          puVar5[0x12] = uVar30;
          *(undefined1 *)(puVar5 + 0x14) = *(undefined1 *)(puVar6 + 0x14);
          uVar29 = puVar6[8];
          uVar32 = puVar6[0xb];
          uVar30 = puVar6[10];
          puVar5[9] = puVar6[9];
          puVar5[8] = uVar29;
          puVar5[0xb] = uVar32;
          puVar5[10] = uVar30;
          uVar32 = puVar6[0xc];
          uVar30 = puVar6[0xf];
          uVar29 = puVar6[0xe];
          puVar5[0xd] = puVar6[0xd];
          puVar5[0xc] = uVar32;
          puVar5[0xf] = uVar30;
          puVar5[0xe] = uVar29;
          uVar29 = *puVar6;
          uVar32 = puVar6[3];
          uVar30 = puVar6[2];
          puVar5[1] = puVar6[1];
          *puVar5 = uVar29;
          puVar5[3] = uVar32;
          puVar5[2] = uVar30;
          uVar32 = puVar6[4];
          uVar30 = puVar6[7];
          uVar29 = puVar6[6];
          puVar5[5] = puVar6[5];
          puVar5[4] = uVar32;
          puVar5[7] = uVar30;
          puVar5[6] = uVar29;
        }
        else {
          *puVar5 = *puVar6;
          puVar5[1] = lVar16;
          lVar16 = puVar6[8];
          _swift_bridgeObjectRetain();
          if (lVar16 == 1) {
            uVar29 = puVar6[2];
            uVar32 = puVar6[5];
            uVar30 = puVar6[4];
            puVar5[3] = puVar6[3];
            puVar5[2] = uVar29;
            puVar5[5] = uVar32;
            puVar5[4] = uVar30;
            uVar29 = puVar6[6];
            puVar5[7] = puVar6[7];
            puVar5[6] = uVar29;
            puVar5[8] = puVar6[8];
          }
          else {
            lVar19 = puVar6[4];
            if (lVar19 == 1) {
              uVar29 = puVar6[2];
              uVar32 = puVar6[5];
              uVar30 = puVar6[4];
              puVar5[3] = puVar6[3];
              puVar5[2] = uVar29;
              puVar5[5] = uVar32;
              puVar5[4] = uVar30;
              puVar5[6] = puVar6[6];
            }
            else {
              uVar29 = puVar6[2];
              puVar5[3] = puVar6[3];
              puVar5[2] = uVar29;
              uVar29 = puVar6[5];
              uVar30 = puVar6[6];
              puVar5[4] = lVar19;
              puVar5[5] = uVar29;
              puVar5[6] = uVar30;
              _swift_bridgeObjectRetain();
              _swift_bridgeObjectRetain(uVar30);
            }
            puVar5[7] = puVar6[7];
            puVar5[8] = lVar16;
            _swift_bridgeObjectRetain(lVar16);
          }
          lVar16 = puVar6[0xf];
          if (lVar16 == 1) {
            uVar29 = puVar6[9];
            puVar5[10] = puVar6[10];
            puVar5[9] = uVar29;
            uVar29 = puVar6[0xb];
            puVar5[0xc] = puVar6[0xc];
            puVar5[0xb] = uVar29;
            uVar29 = puVar6[0xd];
            puVar5[0xe] = puVar6[0xe];
            puVar5[0xd] = uVar29;
            puVar5[0xf] = puVar6[0xf];
          }
          else {
            lVar19 = puVar6[0xb];
            if (lVar19 == 1) {
              uVar29 = puVar6[9];
              puVar5[10] = puVar6[10];
              puVar5[9] = uVar29;
              uVar29 = puVar6[0xb];
              puVar5[0xc] = puVar6[0xc];
              puVar5[0xb] = uVar29;
              puVar5[0xd] = puVar6[0xd];
            }
            else {
              uVar29 = puVar6[9];
              puVar5[10] = puVar6[10];
              puVar5[9] = uVar29;
              uVar29 = puVar6[0xc];
              uVar30 = puVar6[0xd];
              puVar5[0xb] = lVar19;
              puVar5[0xc] = uVar29;
              puVar5[0xd] = uVar30;
              _swift_bridgeObjectRetain();
              _swift_bridgeObjectRetain(uVar30);
            }
            puVar5[0xe] = puVar6[0xe];
            puVar5[0xf] = lVar16;
            _swift_bridgeObjectRetain(lVar16);
          }
          *(undefined2 *)(puVar5 + 0x10) = *(undefined2 *)(puVar6 + 0x10);
          uVar29 = puVar6[0x11];
          puVar5[0x12] = puVar6[0x12];
          puVar5[0x11] = uVar29;
          puVar5[0x13] = puVar6[0x13];
          *(undefined1 *)(puVar5 + 0x14) = *(undefined1 *)(puVar6 + 0x14);
          _swift_bridgeObjectRetain();
        }
        *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar18 + 0xc0)) =
             *(undefined1 *)((long)puVar4 + (long)*(int *)(lVar18 + 0xc0));
        *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar18 + 0xc4)) =
             *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar18 + 0xc4));
        *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar18 + 200)) =
             *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar18 + 200));
        *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar18 + 0xcc)) =
             *(undefined1 *)((long)puVar4 + (long)*(int *)(lVar18 + 0xcc));
        *(undefined1 *)((long)puVar15 + (long)*(int *)(lVar17 + 0x1c)) =
             *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar17 + 0x1c));
        *(undefined8 *)((long)puVar15 + (long)*(int *)(lVar17 + 0x20)) =
             *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar17 + 0x20));
        _swift_storeEnumTagMultiPayload(puVar1,lVar14,4);
        goto LAB_1042e511c;
      }
    }
  }
  else if (iVar13 < 10) {
    if (iVar13 == 5) {
      uVar29 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar29;
      *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(puVar2 + 2);
      _swift_bridgeObjectRetain();
      _swift_storeEnumTagMultiPayload(puVar1,lVar14,5);
      goto LAB_1042e511c;
    }
    if (iVar13 == 6) {
      uVar29 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar29;
      *(undefined2 *)(puVar1 + 2) = *(undefined2 *)(puVar2 + 2);
      _swift_bridgeObjectRetain();
      _swift_storeEnumTagMultiPayload(puVar1,lVar14,6);
      goto LAB_1042e511c;
    }
  }
  else {
    if (iVar13 == 10) {
      *(undefined1 *)puVar1 = *(undefined1 *)puVar2;
      uVar29 = puVar2[2];
      puVar1[1] = puVar2[1];
      puVar1[2] = uVar29;
      _swift_bridgeObjectRetain();
      _swift_storeEnumTagMultiPayload(puVar1,lVar14,10);
      goto LAB_1042e511c;
    }
    if (iVar13 == 0xb) {
      *(undefined1 *)puVar1 = *(undefined1 *)puVar2;
      uVar29 = puVar2[2];
      puVar1[1] = puVar2[1];
      puVar1[2] = uVar29;
      _swift_bridgeObjectRetain();
      _swift_storeEnumTagMultiPayload(puVar1,lVar14,0xb);
      goto LAB_1042e511c;
    }
  }
  _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar14 + -8) + 0x40));
LAB_1042e511c:
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  return param_1;
}



/* Entry: 1042e7400; end: 1042e7417;  */

void FUN_1042e7400(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1042e7418; end: 1042e74d7;  */

void FUN_1042e7418(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_38 = &UNK_10dce71f0;
  lVar1 = 0x13f;
  FUN_1042dddf8();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = PTR___sBi64_WV_11034d670 + 0x40;
    _swift_initStructMetadata(param_1,0x100,3,&puStack_38,param_1 + 0x10);
  }
  return;
}



/* Entry: 1042e74d8; end: 1042e75a3;  */

undefined * FUN_1042e74d8(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  puVar1 = PTR_PTR_1126e14e0;
  _objc_allocWithZone(PTR_PTR_1126e14e0);
  func_0x00010bfee200();
  func_0x00010c1dbb40();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x00010102c3b8(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_allocWithZone(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  uVar4 = uVar2;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar2,PTR___sypN_11034f1a8 + 8);
  _swift_bridgeObjectRelease(uVar2);
  func_0x00010bff4000(puVar3);
  _objc_release(uVar4);
  func_0x00010c1684a0(puVar1);
  _objc_release(puVar3);
  func_0x00010c214840(puVar1);
  func_0x00010c227be0((float)*(long *)(unaff_x20 + 0x28),puVar1);
  return puVar1;
}



/* Entry: 1042e75a4; end: 1042e75cb;  */

bool FUN_1042e75a4(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1042e75cc; end: 1042e7677;  */

void FUN_1042e75cc(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1042e7678; end: 1042e76af;  */

void FUN_1042e7678(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 1042e76b0; end: 1042e76df;  */

void FUN_1042e76b0(undefined8 param_1,long *param_2,undefined8 param_3)

{
  if (*param_2 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,param_3);
  return;
}



/* Entry: 1042e76e0; end: 1042e771b;  */

undefined8 FUN_1042e76e0(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1042e771c; end: 1042e771f;  */

void FUN_1042e771c(void)

{
  undefined *puVar1;
  
  if (puRam000000011306c3f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce7210;
  _swift_getWitnessTable(&UNK_10dce7210,&UNK_110756250);
  puRam000000011306c3f0 = puVar1;
  return;
}



/* Entry: 1042e7720; end: 1042e775f;  */

void FUN_1042e7720(void)

{
  undefined *puVar1;
  
  if (puRam000000011306c3f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce7210;
  _swift_getWitnessTable(&UNK_10dce7210,&UNK_110756250);
  puRam000000011306c3f0 = puVar1;
  return;
}



/* Entry: 1042e7760; end: 1042e778f;  */

undefined * FUN_1042e7760(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  puVar1 = PTR_PTR_1126e14e0;
  _objc_allocWithZone(PTR_PTR_1126e14e0);
  func_0x00010bfee200();
  func_0x00010c1dbb40();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x00010102c3b8(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_allocWithZone(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  uVar4 = uVar2;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar2,PTR___sypN_11034f1a8 + 8);
  _swift_bridgeObjectRelease(uVar2);
  func_0x00010bff4000(puVar3);
  _objc_release(uVar4);
  func_0x00010c1684a0(puVar1);
  _objc_release(puVar3);
  func_0x00010c214840(puVar1);
  func_0x00010c227be0((float)*(long *)(unaff_x20 + 0x28),puVar1);
  return puVar1;
}



/* Entry: 1042e7790; end: 1042e8633;  */

long * FUN_1042e7790(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  code *pcVar26;
  undefined8 uVar27;
  long lVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  long lVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  
  uVar12 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar12 >> 0x11 & 1) == 0) {
    lVar21 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar21;
    lVar20 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar20;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
    uVar23 = *puVar2;
    uVar27 = puVar2[3];
    uVar25 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar23;
    puVar1[3] = uVar27;
    puVar1[2] = uVar25;
    uVar23 = puVar2[4];
    puVar1[5] = puVar2[5];
    puVar1[4] = uVar23;
    uVar23 = puVar2[6];
    uVar25 = puVar2[7];
    puVar1[6] = uVar23;
    puVar1[7] = uVar25;
    uVar25 = puVar2[8];
    uVar27 = puVar2[9];
    puVar1[8] = uVar25;
    puVar1[9] = uVar27;
    uVar27 = puVar2[10];
    uVar6 = puVar2[0xb];
    puVar1[10] = uVar27;
    puVar1[0xb] = uVar6;
    uVar6 = puVar2[0xc];
    uVar32 = puVar2[0xd];
    puVar1[0xc] = uVar6;
    puVar1[0xd] = uVar32;
    uVar32 = puVar2[0xe];
    uVar30 = puVar2[0xf];
    puVar1[0xe] = uVar32;
    puVar1[0xf] = uVar30;
    uVar30 = puVar2[0x10];
    puVar1[0x10] = uVar30;
    lVar13 = 0;
    func_0x000100b91d00();
    lVar31 = (long)*(int *)(lVar13 + 0x3c);
    lVar14 = 0;
    __s10Foundation4UUIDVMa();
    lVar16 = *(long *)(lVar14 + -8);
    pcVar26 = *(code **)(lVar16 + 0x30);
    _swift_bridgeObjectRetain(lVar21);
    _swift_bridgeObjectRetain(lVar20);
    _swift_bridgeObjectRetain(uVar23);
    _swift_bridgeObjectRetain(uVar25);
    _swift_bridgeObjectRetain(uVar27);
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(uVar32);
    _swift_bridgeObjectRetain(uVar30);
    lVar21 = (long)puVar2 + lVar31;
    (*pcVar26)(lVar21,1,lVar14);
    if ((int)lVar21 == 0) {
      (**(code **)(lVar16 + 0x10))((long)puVar1 + lVar31,(long)puVar2 + lVar31,lVar14);
      (**(code **)(lVar16 + 0x38))((long)puVar1 + lVar31,0,1,lVar14);
    }
    else {
      lVar21 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)puVar1 + lVar31,(long)puVar2 + lVar31,
              *(undefined8 *)(*(long *)(lVar21 + -8) + 0x40));
    }
    lVar20 = (long)*(int *)(lVar13 + 0x40);
    lVar21 = (long)puVar2 + lVar20;
    (*pcVar26)(lVar21,1,lVar14);
    if ((int)lVar21 == 0) {
      (**(code **)(lVar16 + 0x10))((long)puVar1 + lVar20,(long)puVar2 + lVar20,lVar14);
      (**(code **)(lVar16 + 0x38))((long)puVar1 + lVar20,0,1,lVar14);
    }
    else {
      lVar21 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)puVar1 + lVar20,(long)puVar2 + lVar20,
              *(undefined8 *)(*(long *)(lVar21 + -8) + 0x40));
    }
    lVar20 = (long)*(int *)(lVar13 + 0x44);
    lVar21 = (long)puVar2 + lVar20;
    (*pcVar26)(lVar21,1,lVar14);
    if ((int)lVar21 == 0) {
      (**(code **)(lVar16 + 0x10))((long)puVar1 + lVar20,(long)puVar2 + lVar20,lVar14);
      (**(code **)(lVar16 + 0x38))((long)puVar1 + lVar20,0,1,lVar14);
    }
    else {
      lVar21 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)puVar1 + lVar20,(long)puVar2 + lVar20,
              *(undefined8 *)(*(long *)(lVar21 + -8) + 0x40));
    }
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x48)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x48));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x4c)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x4c));
    uVar23 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x50));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x50)) = uVar23;
    uVar25 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x54));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x54)) = uVar25;
    uVar27 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x58));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x58)) = uVar27;
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x5c));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x5c));
    lVar21 = puVar4[1];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar23);
    _swift_bridgeObjectRetain(uVar25);
    _swift_bridgeObjectRetain(uVar27);
    if (lVar21 == 1) {
      uVar23 = puVar4[0xc];
      uVar27 = puVar4[0xf];
      uVar25 = puVar4[0xe];
      puVar3[0xd] = puVar4[0xd];
      puVar3[0xc] = uVar23;
      puVar3[0xf] = uVar27;
      puVar3[0xe] = uVar25;
      uVar23 = puVar4[0x10];
      uVar27 = puVar4[0x13];
      uVar25 = puVar4[0x12];
      puVar3[0x11] = puVar4[0x11];
      puVar3[0x10] = uVar23;
      puVar3[0x13] = uVar27;
      puVar3[0x12] = uVar25;
      uVar23 = puVar4[4];
      uVar27 = puVar4[7];
      uVar25 = puVar4[6];
      puVar3[5] = puVar4[5];
      puVar3[4] = uVar23;
      puVar3[7] = uVar27;
      puVar3[6] = uVar25;
      uVar23 = puVar4[8];
      uVar27 = puVar4[0xb];
      uVar25 = puVar4[10];
      puVar3[9] = puVar4[9];
      puVar3[8] = uVar23;
      puVar3[0xb] = uVar27;
      puVar3[10] = uVar25;
      uVar23 = *puVar4;
      uVar27 = puVar4[3];
      uVar25 = puVar4[2];
      puVar3[1] = puVar4[1];
      *puVar3 = uVar23;
      puVar3[3] = uVar27;
      puVar3[2] = uVar25;
    }
    else {
      *puVar3 = *puVar4;
      puVar3[1] = lVar21;
      uVar23 = puVar4[3];
      puVar3[2] = puVar4[2];
      puVar3[3] = uVar23;
      uVar25 = puVar4[5];
      puVar3[4] = puVar4[4];
      puVar3[5] = uVar25;
      uVar27 = puVar4[7];
      puVar3[6] = puVar4[6];
      puVar3[7] = uVar27;
      uVar6 = puVar4[9];
      puVar3[8] = puVar4[8];
      puVar3[9] = uVar6;
      *(undefined1 *)(puVar3 + 10) = *(undefined1 *)(puVar4 + 10);
      uVar32 = puVar4[0xb];
      puVar3[0xc] = puVar4[0xc];
      puVar3[0xb] = uVar32;
      lVar20 = puVar4[0x12];
      _swift_bridgeObjectRetain(lVar21);
      _swift_bridgeObjectRetain(uVar23);
      _swift_bridgeObjectRetain(uVar25);
      _swift_bridgeObjectRetain(uVar27);
      _swift_bridgeObjectRetain(uVar6);
      if (lVar20 == 0) {
        uVar23 = puVar4[0xd];
        puVar3[0xe] = puVar4[0xe];
        puVar3[0xd] = uVar23;
        uVar23 = puVar4[0xf];
        puVar3[0x10] = puVar4[0x10];
        puVar3[0xf] = uVar23;
        uVar23 = puVar4[0x11];
        puVar3[0x12] = puVar4[0x12];
        puVar3[0x11] = uVar23;
        puVar3[0x13] = puVar4[0x13];
      }
      else {
        uVar23 = puVar4[0xe];
        puVar3[0xd] = puVar4[0xd];
        puVar3[0xe] = uVar23;
        uVar23 = puVar4[0x10];
        puVar3[0xf] = puVar4[0xf];
        puVar3[0x10] = uVar23;
        puVar3[0x11] = puVar4[0x11];
        puVar3[0x12] = lVar20;
        puVar3[0x13] = puVar4[0x13];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar23);
        _swift_bridgeObjectRetain(lVar20);
      }
    }
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x60)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x60));
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 100));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 100));
    lVar21 = puVar4[1];
    if (lVar21 == 1) {
      uVar23 = *puVar4;
      uVar27 = puVar4[3];
      uVar25 = puVar4[2];
      puVar3[1] = puVar4[1];
      *puVar3 = uVar23;
      puVar3[3] = uVar27;
      puVar3[2] = uVar25;
      puVar3[4] = puVar4[4];
    }
    else {
      *puVar3 = *puVar4;
      puVar3[1] = lVar21;
      puVar3[2] = puVar4[2];
      *(undefined1 *)(puVar3 + 3) = *(undefined1 *)(puVar4 + 3);
      *(undefined2 *)((long)puVar3 + 0x19) = *(undefined2 *)((long)puVar4 + 0x19);
      puVar3[4] = puVar4[4];
      _swift_bridgeObjectRetain();
    }
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x68));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x68));
    if (puVar4[0x27] == 0) {
      _memcpy(puVar3,puVar4,0x160);
    }
    else {
      uVar23 = *puVar4;
      puVar3[1] = puVar4[1];
      *puVar3 = uVar23;
      uVar23 = puVar4[2];
      uVar25 = puVar4[3];
      puVar3[2] = uVar23;
      puVar3[3] = uVar25;
      uVar17 = puVar4[4];
      puVar3[4] = uVar17;
      uVar25 = puVar4[5];
      puVar3[6] = puVar4[6];
      puVar3[5] = uVar25;
      uVar19 = puVar4[7];
      uVar25 = puVar4[8];
      puVar3[7] = uVar19;
      puVar3[8] = uVar25;
      *(undefined2 *)(puVar3 + 9) = *(undefined2 *)(puVar4 + 9);
      *(undefined1 *)((long)puVar3 + 0x4a) = *(undefined1 *)((long)puVar4 + 0x4a);
      uVar25 = puVar4[0xb];
      puVar3[10] = puVar4[10];
      puVar3[0xb] = uVar25;
      uVar18 = puVar4[0xc];
      puVar3[0xc] = uVar18;
      *(undefined1 *)(puVar3 + 0xd) = *(undefined1 *)(puVar4 + 0xd);
      uVar27 = puVar4[0xe];
      puVar3[0xf] = puVar4[0xf];
      puVar3[0xe] = uVar27;
      *(undefined1 *)(puVar3 + 0x10) = *(undefined1 *)(puVar4 + 0x10);
      uVar27 = puVar4[0x12];
      puVar3[0x11] = puVar4[0x11];
      puVar3[0x12] = uVar27;
      uVar6 = puVar4[0x14];
      puVar3[0x13] = puVar4[0x13];
      puVar3[0x14] = uVar6;
      uVar32 = puVar4[0x16];
      puVar3[0x15] = puVar4[0x15];
      puVar3[0x16] = uVar32;
      uVar30 = puVar4[0x18];
      puVar3[0x17] = puVar4[0x17];
      puVar3[0x18] = uVar30;
      uVar7 = puVar4[0x1a];
      puVar3[0x19] = puVar4[0x19];
      puVar3[0x1a] = uVar7;
      uVar33 = puVar4[0x1b];
      puVar3[0x1c] = puVar4[0x1c];
      puVar3[0x1b] = uVar33;
      uVar29 = puVar4[0x1d];
      puVar3[0x1d] = uVar29;
      *(undefined1 *)(puVar3 + 0x1e) = *(undefined1 *)(puVar4 + 0x1e);
      *(undefined1 *)((long)puVar3 + 0xf1) = *(undefined1 *)((long)puVar4 + 0xf1);
      *(undefined1 *)((long)puVar3 + 0xf2) = *(undefined1 *)((long)puVar4 + 0xf2);
      uVar33 = puVar4[0x20];
      puVar3[0x1f] = puVar4[0x1f];
      puVar3[0x20] = uVar33;
      uVar8 = puVar4[0x22];
      puVar3[0x21] = puVar4[0x21];
      puVar3[0x22] = uVar8;
      uVar9 = puVar4[0x24];
      puVar3[0x23] = puVar4[0x23];
      puVar3[0x24] = uVar9;
      uVar10 = puVar4[0x26];
      puVar3[0x25] = puVar4[0x25];
      puVar3[0x26] = uVar10;
      uVar24 = puVar4[0x27];
      puVar3[0x27] = uVar24;
      uVar34 = puVar4[0x28];
      puVar3[0x29] = puVar4[0x29];
      puVar3[0x28] = uVar34;
      uVar34 = puVar4[0x2b];
      puVar3[0x2a] = puVar4[0x2a];
      puVar3[0x2b] = uVar34;
      _swift_bridgeObjectRetain(uVar23);
      _swift_bridgeObjectRetain(uVar17);
      _swift_bridgeObjectRetain(uVar19);
      _swift_bridgeObjectRetain(uVar25);
      _swift_bridgeObjectRetain(uVar18);
      _swift_bridgeObjectRetain(uVar27);
      _swift_bridgeObjectRetain(uVar6);
      _swift_bridgeObjectRetain(uVar32);
      _swift_bridgeObjectRetain(uVar30);
      _swift_bridgeObjectRetain(uVar7);
      _swift_bridgeObjectRetain(uVar29);
      _swift_bridgeObjectRetain(uVar33);
      _swift_bridgeObjectRetain(uVar8);
      _swift_bridgeObjectRetain(uVar9);
      _swift_bridgeObjectRetain(uVar10);
      _swift_bridgeObjectRetain(uVar24);
    }
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x6c));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x6c));
    uVar22 = puVar4[1];
    if (uVar22 >> 0x3c < 0xf) {
      uVar23 = *puVar4;
      func_0x00010006c00c(uVar23,uVar22);
      *puVar3 = uVar23;
      puVar3[1] = uVar22;
    }
    else {
      uVar23 = *puVar4;
      puVar3[1] = puVar4[1];
      *puVar3 = uVar23;
    }
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x70)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x70));
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x74));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x74));
    uVar23 = puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = uVar23;
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x78));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x78));
    uVar23 = puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = uVar23;
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x7c));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x7c));
    uVar25 = puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = uVar25;
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x80));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x80));
    uVar22 = puVar4[1];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar23);
    _swift_bridgeObjectRetain(uVar25);
    if (uVar22 >> 0x3c < 0xf) {
      uVar23 = *puVar4;
      func_0x00010006c00c(uVar23,uVar22);
      *puVar3 = uVar23;
      puVar3[1] = uVar22;
    }
    else {
      uVar23 = *puVar4;
      puVar3[1] = puVar4[1];
      *puVar3 = uVar23;
    }
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x84));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x84));
    lVar21 = 0;
    func_0x000100b91fbc();
    lVar20 = *(long *)(lVar21 + -8);
    puVar15 = puVar4;
    (**(code **)(lVar20 + 0x30))(puVar4,1,lVar21);
    if ((int)puVar15 == 0) {
      uVar23 = puVar4[1];
      *puVar3 = *puVar4;
      puVar3[1] = uVar23;
      uVar23 = puVar4[2];
      uVar27 = puVar4[5];
      uVar25 = puVar4[4];
      puVar3[3] = puVar4[3];
      puVar3[2] = uVar23;
      puVar3[5] = uVar27;
      puVar3[4] = uVar25;
      uVar23 = puVar4[6];
      uVar25 = puVar4[7];
      puVar3[6] = uVar23;
      puVar3[7] = uVar25;
      uVar25 = puVar4[8];
      puVar3[8] = uVar25;
      lVar28 = (long)*(int *)(lVar21 + 0x28);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar23);
      _swift_bridgeObjectRetain(uVar25);
      lVar31 = (long)puVar4 + lVar28;
      (*pcVar26)(lVar31,1,lVar14);
      if ((int)lVar31 == 0) {
        (**(code **)(lVar16 + 0x10))((long)puVar3 + lVar28,(long)puVar4 + lVar28,lVar14);
        (**(code **)(lVar16 + 0x38))((long)puVar3 + lVar28,0,1,lVar14);
      }
      else {
        lVar31 = 0x112d3bc20;
        func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
        _memcpy((long)puVar3 + lVar28,(long)puVar4 + lVar28,
                *(undefined8 *)(*(long *)(lVar31 + -8) + 0x40));
      }
      puVar15 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar21 + 0x2c));
      puVar5 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar21 + 0x2c));
      uVar23 = puVar5[1];
      *puVar15 = *puVar5;
      puVar15[1] = uVar23;
      puVar15 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar21 + 0x30));
      puVar5 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar21 + 0x30));
      uVar23 = puVar5[1];
      *puVar15 = *puVar5;
      puVar15[1] = uVar23;
      lVar28 = (long)*(int *)(lVar21 + 0x34);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar23);
      lVar31 = (long)puVar4 + lVar28;
      (*pcVar26)(lVar31,1,lVar14);
      if ((int)lVar31 == 0) {
        (**(code **)(lVar16 + 0x10))((long)puVar3 + lVar28,(long)puVar4 + lVar28,lVar14);
        (**(code **)(lVar16 + 0x38))((long)puVar3 + lVar28,0,1,lVar14);
      }
      else {
        lVar14 = 0x112d3bc20;
        func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
        _memcpy((long)puVar3 + lVar28,(long)puVar4 + lVar28,
                *(undefined8 *)(*(long *)(lVar14 + -8) + 0x40));
      }
      puVar15 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar21 + 0x38));
      puVar5 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar21 + 0x38));
      uVar23 = puVar5[1];
      *puVar15 = *puVar5;
      puVar15[1] = uVar23;
      puVar15 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar21 + 0x3c));
      puVar4 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar21 + 0x3c));
      uVar23 = puVar4[1];
      *puVar15 = *puVar4;
      puVar15[1] = uVar23;
      pcVar26 = *(code **)(lVar20 + 0x38);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar23);
      (*pcVar26)(puVar3,0,1,lVar21);
    }
    else {
      lVar21 = 0x112db39a8;
      func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
      _memcpy(puVar3,puVar4,*(undefined8 *)(*(long *)(lVar21 + -8) + 0x40));
    }
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x88));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x88));
    lVar21 = puVar4[1];
    if (lVar21 == 0) {
      uVar23 = puVar4[0x10];
      uVar27 = puVar4[0x13];
      uVar25 = puVar4[0x12];
      puVar3[0x11] = puVar4[0x11];
      puVar3[0x10] = uVar23;
      puVar3[0x13] = uVar27;
      puVar3[0x12] = uVar25;
      *(undefined1 *)(puVar3 + 0x14) = *(undefined1 *)(puVar4 + 0x14);
      uVar23 = puVar4[8];
      uVar27 = puVar4[0xb];
      uVar25 = puVar4[10];
      puVar3[9] = puVar4[9];
      puVar3[8] = uVar23;
      puVar3[0xb] = uVar27;
      puVar3[10] = uVar25;
      uVar27 = puVar4[0xc];
      uVar25 = puVar4[0xf];
      uVar23 = puVar4[0xe];
      puVar3[0xd] = puVar4[0xd];
      puVar3[0xc] = uVar27;
      puVar3[0xf] = uVar25;
      puVar3[0xe] = uVar23;
      uVar23 = *puVar4;
      uVar27 = puVar4[3];
      uVar25 = puVar4[2];
      puVar3[1] = puVar4[1];
      *puVar3 = uVar23;
      puVar3[3] = uVar27;
      puVar3[2] = uVar25;
      uVar27 = puVar4[4];
      uVar25 = puVar4[7];
      uVar23 = puVar4[6];
      puVar3[5] = puVar4[5];
      puVar3[4] = uVar27;
      puVar3[7] = uVar25;
      puVar3[6] = uVar23;
    }
    else {
      *puVar3 = *puVar4;
      puVar3[1] = lVar21;
      lVar21 = puVar4[8];
      _swift_bridgeObjectRetain();
      if (lVar21 == 1) {
        uVar23 = puVar4[2];
        uVar27 = puVar4[5];
        uVar25 = puVar4[4];
        puVar3[3] = puVar4[3];
        puVar3[2] = uVar23;
        puVar3[5] = uVar27;
        puVar3[4] = uVar25;
        uVar23 = puVar4[6];
        puVar3[7] = puVar4[7];
        puVar3[6] = uVar23;
        puVar3[8] = puVar4[8];
      }
      else {
        lVar20 = puVar4[4];
        if (lVar20 == 1) {
          uVar23 = puVar4[2];
          uVar27 = puVar4[5];
          uVar25 = puVar4[4];
          puVar3[3] = puVar4[3];
          puVar3[2] = uVar23;
          puVar3[5] = uVar27;
          puVar3[4] = uVar25;
          puVar3[6] = puVar4[6];
        }
        else {
          uVar23 = puVar4[2];
          puVar3[3] = puVar4[3];
          puVar3[2] = uVar23;
          uVar23 = puVar4[5];
          uVar25 = puVar4[6];
          puVar3[4] = lVar20;
          puVar3[5] = uVar23;
          puVar3[6] = uVar25;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar25);
        }
        puVar3[7] = puVar4[7];
        puVar3[8] = lVar21;
        _swift_bridgeObjectRetain(lVar21);
      }
      lVar21 = puVar4[0xf];
      if (lVar21 == 1) {
        uVar23 = puVar4[9];
        puVar3[10] = puVar4[10];
        puVar3[9] = uVar23;
        uVar23 = puVar4[0xb];
        puVar3[0xc] = puVar4[0xc];
        puVar3[0xb] = uVar23;
        uVar23 = puVar4[0xd];
        puVar3[0xe] = puVar4[0xe];
        puVar3[0xd] = uVar23;
        puVar3[0xf] = puVar4[0xf];
      }
      else {
        lVar20 = puVar4[0xb];
        if (lVar20 == 1) {
          uVar23 = puVar4[9];
          puVar3[10] = puVar4[10];
          puVar3[9] = uVar23;
          uVar23 = puVar4[0xb];
          puVar3[0xc] = puVar4[0xc];
          puVar3[0xb] = uVar23;
          puVar3[0xd] = puVar4[0xd];
        }
        else {
          uVar23 = puVar4[9];
          puVar3[10] = puVar4[10];
          puVar3[9] = uVar23;
          uVar23 = puVar4[0xc];
          uVar25 = puVar4[0xd];
          puVar3[0xb] = lVar20;
          puVar3[0xc] = uVar23;
          puVar3[0xd] = uVar25;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar25);
        }
        puVar3[0xe] = puVar4[0xe];
        puVar3[0xf] = lVar21;
        _swift_bridgeObjectRetain(lVar21);
      }
      *(undefined2 *)(puVar3 + 0x10) = *(undefined2 *)(puVar4 + 0x10);
      uVar23 = puVar4[0x11];
      puVar3[0x12] = puVar4[0x12];
      puVar3[0x11] = uVar23;
      puVar3[0x13] = puVar4[0x13];
      *(undefined1 *)(puVar3 + 0x14) = *(undefined1 *)(puVar4 + 0x14);
      _swift_bridgeObjectRetain();
    }
    *(undefined4 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x8c)) =
         *(undefined4 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x8c));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x90)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x90));
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x94));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x94));
    uVar23 = *puVar4;
    uVar27 = puVar4[3];
    uVar25 = puVar4[2];
    puVar3[1] = puVar4[1];
    *puVar3 = uVar23;
    puVar3[3] = uVar27;
    puVar3[2] = uVar25;
    uVar23 = puVar4[4];
    uVar27 = puVar4[7];
    uVar25 = puVar4[6];
    puVar3[5] = puVar4[5];
    puVar3[4] = uVar23;
    puVar3[7] = uVar27;
    puVar3[6] = uVar25;
    uVar27 = puVar4[0xc];
    uVar25 = puVar4[0xf];
    uVar23 = puVar4[0xe];
    puVar3[0xd] = puVar4[0xd];
    puVar3[0xc] = uVar27;
    puVar3[0xf] = uVar25;
    puVar3[0xe] = uVar23;
    uVar27 = puVar4[8];
    uVar25 = puVar4[0xb];
    uVar23 = puVar4[10];
    puVar3[9] = puVar4[9];
    puVar3[8] = uVar27;
    puVar3[0xb] = uVar25;
    puVar3[10] = uVar23;
    uVar23 = *(undefined8 *)((long)puVar4 + 0xa9);
    *(undefined8 *)((long)puVar3 + 0xb1) = *(undefined8 *)((long)puVar4 + 0xb1);
    *(undefined8 *)((long)puVar3 + 0xa9) = uVar23;
    uVar23 = puVar4[0x12];
    uVar27 = puVar4[0x15];
    uVar25 = puVar4[0x14];
    puVar3[0x13] = puVar4[0x13];
    puVar3[0x12] = uVar23;
    puVar3[0x15] = uVar27;
    puVar3[0x14] = uVar25;
    uVar23 = puVar4[0x10];
    puVar3[0x11] = puVar4[0x11];
    puVar3[0x10] = uVar23;
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x98)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x98));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x9c)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x9c));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0xa0)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0xa0));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0xa4)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0xa4));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0xa8)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0xa8));
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0xac));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0xac));
    lVar21 = puVar4[1];
    if (lVar21 == 0) {
      uVar23 = *puVar4;
      uVar27 = puVar4[3];
      uVar25 = puVar4[2];
      puVar3[1] = puVar4[1];
      *puVar3 = uVar23;
      puVar3[3] = uVar27;
      puVar3[2] = uVar25;
    }
    else {
      *puVar3 = *puVar4;
      puVar3[1] = lVar21;
      uVar23 = puVar4[3];
      puVar3[2] = puVar4[2];
      puVar3[3] = uVar23;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar23);
    }
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0xb0)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0xb0));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0xb4)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0xb4));
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0xb8));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0xb8));
    lVar21 = puVar4[1];
    if (lVar21 == 0) {
      uVar23 = puVar4[0x10];
      uVar27 = puVar4[0x13];
      uVar25 = puVar4[0x12];
      puVar3[0x11] = puVar4[0x11];
      puVar3[0x10] = uVar23;
      puVar3[0x13] = uVar27;
      puVar3[0x12] = uVar25;
      *(undefined1 *)(puVar3 + 0x14) = *(undefined1 *)(puVar4 + 0x14);
      uVar23 = puVar4[8];
      uVar27 = puVar4[0xb];
      uVar25 = puVar4[10];
      puVar3[9] = puVar4[9];
      puVar3[8] = uVar23;
      puVar3[0xb] = uVar27;
      puVar3[10] = uVar25;
      uVar27 = puVar4[0xc];
      uVar25 = puVar4[0xf];
      uVar23 = puVar4[0xe];
      puVar3[0xd] = puVar4[0xd];
      puVar3[0xc] = uVar27;
      puVar3[0xf] = uVar25;
      puVar3[0xe] = uVar23;
      uVar23 = *puVar4;
      uVar27 = puVar4[3];
      uVar25 = puVar4[2];
      puVar3[1] = puVar4[1];
      *puVar3 = uVar23;
      puVar3[3] = uVar27;
      puVar3[2] = uVar25;
      uVar27 = puVar4[4];
      uVar25 = puVar4[7];
      uVar23 = puVar4[6];
      puVar3[5] = puVar4[5];
      puVar3[4] = uVar27;
      puVar3[7] = uVar25;
      puVar3[6] = uVar23;
    }
    else {
      *puVar3 = *puVar4;
      puVar3[1] = lVar21;
      lVar21 = puVar4[8];
      _swift_bridgeObjectRetain();
      if (lVar21 == 1) {
        uVar23 = puVar4[2];
        uVar27 = puVar4[5];
        uVar25 = puVar4[4];
        puVar3[3] = puVar4[3];
        puVar3[2] = uVar23;
        puVar3[5] = uVar27;
        puVar3[4] = uVar25;
        uVar23 = puVar4[6];
        puVar3[7] = puVar4[7];
        puVar3[6] = uVar23;
        puVar3[8] = puVar4[8];
      }
      else {
        lVar20 = puVar4[4];
        if (lVar20 == 1) {
          uVar23 = puVar4[2];
          uVar27 = puVar4[5];
          uVar25 = puVar4[4];
          puVar3[3] = puVar4[3];
          puVar3[2] = uVar23;
          puVar3[5] = uVar27;
          puVar3[4] = uVar25;
          puVar3[6] = puVar4[6];
        }
        else {
          uVar23 = puVar4[2];
          puVar3[3] = puVar4[3];
          puVar3[2] = uVar23;
          uVar23 = puVar4[5];
          uVar25 = puVar4[6];
          puVar3[4] = lVar20;
          puVar3[5] = uVar23;
          puVar3[6] = uVar25;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar25);
        }
        puVar3[7] = puVar4[7];
        puVar3[8] = lVar21;
        _swift_bridgeObjectRetain(lVar21);
      }
      lVar21 = puVar4[0xf];
      if (lVar21 == 1) {
        uVar23 = puVar4[9];
        puVar3[10] = puVar4[10];
        puVar3[9] = uVar23;
        uVar23 = puVar4[0xb];
        puVar3[0xc] = puVar4[0xc];
        puVar3[0xb] = uVar23;
        uVar23 = puVar4[0xd];
        puVar3[0xe] = puVar4[0xe];
        puVar3[0xd] = uVar23;
        puVar3[0xf] = puVar4[0xf];
      }
      else {
        lVar20 = puVar4[0xb];
        if (lVar20 == 1) {
          uVar23 = puVar4[9];
          puVar3[10] = puVar4[10];
          puVar3[9] = uVar23;
          uVar23 = puVar4[0xb];
          puVar3[0xc] = puVar4[0xc];
          puVar3[0xb] = uVar23;
          puVar3[0xd] = puVar4[0xd];
        }
        else {
          uVar23 = puVar4[9];
          puVar3[10] = puVar4[10];
          puVar3[9] = uVar23;
          uVar23 = puVar4[0xc];
          uVar25 = puVar4[0xd];
          puVar3[0xb] = lVar20;
          puVar3[0xc] = uVar23;
          puVar3[0xd] = uVar25;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar25);
        }
        puVar3[0xe] = puVar4[0xe];
        puVar3[0xf] = lVar21;
        _swift_bridgeObjectRetain(lVar21);
      }
      *(undefined2 *)(puVar3 + 0x10) = *(undefined2 *)(puVar4 + 0x10);
      uVar23 = puVar4[0x11];
      puVar3[0x12] = puVar4[0x12];
      puVar3[0x11] = uVar23;
      puVar3[0x13] = puVar4[0x13];
      *(undefined1 *)(puVar3 + 0x14) = *(undefined1 *)(puVar4 + 0x14);
      _swift_bridgeObjectRetain();
    }
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0xbc));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0xbc));
    lVar21 = puVar4[1];
    if (lVar21 == 0) {
      uVar23 = puVar4[0x10];
      uVar27 = puVar4[0x13];
      uVar25 = puVar4[0x12];
      puVar3[0x11] = puVar4[0x11];
      puVar3[0x10] = uVar23;
      puVar3[0x13] = uVar27;
      puVar3[0x12] = uVar25;
      *(undefined1 *)(puVar3 + 0x14) = *(undefined1 *)(puVar4 + 0x14);
      uVar23 = puVar4[8];
      uVar27 = puVar4[0xb];
      uVar25 = puVar4[10];
      puVar3[9] = puVar4[9];
      puVar3[8] = uVar23;
      puVar3[0xb] = uVar27;
      puVar3[10] = uVar25;
      uVar27 = puVar4[0xc];
      uVar25 = puVar4[0xf];
      uVar23 = puVar4[0xe];
      puVar3[0xd] = puVar4[0xd];
      puVar3[0xc] = uVar27;
      puVar3[0xf] = uVar25;
      puVar3[0xe] = uVar23;
      uVar23 = *puVar4;
      uVar27 = puVar4[3];
      uVar25 = puVar4[2];
      puVar3[1] = puVar4[1];
      *puVar3 = uVar23;
      puVar3[3] = uVar27;
      puVar3[2] = uVar25;
      uVar27 = puVar4[4];
      uVar25 = puVar4[7];
      uVar23 = puVar4[6];
      puVar3[5] = puVar4[5];
      puVar3[4] = uVar27;
      puVar3[7] = uVar25;
      puVar3[6] = uVar23;
    }
    else {
      *puVar3 = *puVar4;
      puVar3[1] = lVar21;
      lVar21 = puVar4[8];
      _swift_bridgeObjectRetain();
      if (lVar21 == 1) {
        uVar23 = puVar4[2];
        uVar27 = puVar4[5];
        uVar25 = puVar4[4];
        puVar3[3] = puVar4[3];
        puVar3[2] = uVar23;
        puVar3[5] = uVar27;
        puVar3[4] = uVar25;
        uVar23 = puVar4[6];
        puVar3[7] = puVar4[7];
        puVar3[6] = uVar23;
        puVar3[8] = puVar4[8];
      }
      else {
        lVar20 = puVar4[4];
        if (lVar20 == 1) {
          uVar23 = puVar4[2];
          uVar27 = puVar4[5];
          uVar25 = puVar4[4];
          puVar3[3] = puVar4[3];
          puVar3[2] = uVar23;
          puVar3[5] = uVar27;
          puVar3[4] = uVar25;
          puVar3[6] = puVar4[6];
        }
        else {
          uVar23 = puVar4[2];
          puVar3[3] = puVar4[3];
          puVar3[2] = uVar23;
          uVar23 = puVar4[5];
          uVar25 = puVar4[6];
          puVar3[4] = lVar20;
          puVar3[5] = uVar23;
          puVar3[6] = uVar25;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar25);
        }
        puVar3[7] = puVar4[7];
        puVar3[8] = lVar21;
        _swift_bridgeObjectRetain(lVar21);
      }
      lVar21 = puVar4[0xf];
      if (lVar21 == 1) {
        uVar23 = puVar4[9];
        puVar3[10] = puVar4[10];
        puVar3[9] = uVar23;
        uVar23 = puVar4[0xb];
        puVar3[0xc] = puVar4[0xc];
        puVar3[0xb] = uVar23;
        uVar23 = puVar4[0xd];
        puVar3[0xe] = puVar4[0xe];
        puVar3[0xd] = uVar23;
        puVar3[0xf] = puVar4[0xf];
      }
      else {
        lVar20 = puVar4[0xb];
        if (lVar20 == 1) {
          uVar23 = puVar4[9];
          puVar3[10] = puVar4[10];
          puVar3[9] = uVar23;
          uVar23 = puVar4[0xb];
          puVar3[0xc] = puVar4[0xc];
          puVar3[0xb] = uVar23;
          puVar3[0xd] = puVar4[0xd];
        }
        else {
          uVar23 = puVar4[9];
          puVar3[10] = puVar4[10];
          puVar3[9] = uVar23;
          uVar23 = puVar4[0xc];
          uVar25 = puVar4[0xd];
          puVar3[0xb] = lVar20;
          puVar3[0xc] = uVar23;
          puVar3[0xd] = uVar25;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar25);
        }
        puVar3[0xe] = puVar4[0xe];
        puVar3[0xf] = lVar21;
        _swift_bridgeObjectRetain(lVar21);
      }
      *(undefined2 *)(puVar3 + 0x10) = *(undefined2 *)(puVar4 + 0x10);
      uVar23 = puVar4[0x11];
      puVar3[0x12] = puVar4[0x12];
      puVar3[0x11] = uVar23;
      puVar3[0x13] = puVar4[0x13];
      *(undefined1 *)(puVar3 + 0x14) = *(undefined1 *)(puVar4 + 0x14);
      _swift_bridgeObjectRetain();
    }
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar13 + 0xc0)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar13 + 0xc0));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0xc4)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0xc4));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 200)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 200));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar13 + 0xcc)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar13 + 0xcc));
    iVar11 = *(int *)(param_3 + 0x20);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    *(undefined8 *)((long)param_1 + (long)iVar11) = *(undefined8 *)((long)param_2 + (long)iVar11);
  }
  else {
    lVar21 = *param_2;
    *param_1 = lVar21;
    uVar22 = (ulong)uVar12 & 0xff;
    param_1 = (long *)(lVar21 + (uVar22 + 0x10 & (uVar22 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 1042e8634; end: 1042e8b67;  */

void FUN_1042e8634(long param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  param_1 = param_1 + *(int *)(param_2 + 0x18);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x30));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x40));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x50));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x60));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x70));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x80));
  lVar3 = 0;
  func_0x000100b91d00();
  iVar2 = *(int *)(lVar3 + 0x3c);
  lVar4 = 0;
  __s10Foundation4UUIDVMa();
  lVar8 = *(long *)(lVar4 + -8);
  pcVar9 = *(code **)(lVar8 + 0x30);
  lVar7 = param_1 + iVar2;
  (*pcVar9)(lVar7,1,lVar4);
  if ((int)lVar7 == 0) {
    (**(code **)(lVar8 + 8))(param_1 + iVar2,lVar4);
  }
  iVar2 = *(int *)(lVar3 + 0x40);
  lVar7 = param_1 + iVar2;
  (*pcVar9)(lVar7,1,lVar4);
  if ((int)lVar7 == 0) {
    (**(code **)(lVar8 + 8))(param_1 + iVar2,lVar4);
  }
  iVar2 = *(int *)(lVar3 + 0x44);
  lVar7 = param_1 + iVar2;
  (*pcVar9)(lVar7,1,lVar4);
  if ((int)lVar7 == 0) {
    (**(code **)(lVar8 + 8))(param_1 + iVar2,lVar4);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar3 + 0x4c)));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar3 + 0x50)));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar3 + 0x54)));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar3 + 0x58)));
  lVar7 = param_1 + *(int *)(lVar3 + 0x5c);
  if (*(long *)(lVar7 + 8) != 1) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x18));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x28));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x38));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x48));
    if (*(long *)(lVar7 + 0x90) != 0) {
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x70));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x80));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x90));
    }
  }
  if (*(long *)(param_1 + *(int *)(lVar3 + 100) + 8) != 1) {
    _swift_bridgeObjectRelease();
  }
  lVar7 = param_1 + *(int *)(lVar3 + 0x68);
  if (*(long *)(lVar7 + 0x138) != 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x10));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x20));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x38));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x58));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x60));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x90));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0xa0));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0xb0));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0xc0));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0xd0));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0xe8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x100));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x110));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x120));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x130));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x138));
  }
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar3 + 0x6c));
  if ((ulong)puVar1[1] >> 0x3c < 0xf) {
    func_0x00010006c090(*puVar1);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar3 + 0x74) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar3 + 0x78) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar3 + 0x7c) + 8));
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar3 + 0x80));
  if ((ulong)puVar1[1] >> 0x3c < 0xf) {
    func_0x00010006c090(*puVar1);
  }
  lVar7 = param_1 + *(int *)(lVar3 + 0x84);
  lVar5 = 0;
  func_0x000100b91fbc();
  lVar6 = lVar7;
  (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar7,1,lVar5);
  if ((int)lVar6 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x30));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x40));
    iVar2 = *(int *)(lVar5 + 0x28);
    lVar6 = lVar7 + iVar2;
    (*pcVar9)(lVar6,1,lVar4);
    if ((int)lVar6 == 0) {
      (**(code **)(lVar8 + 8))(lVar7 + iVar2,lVar4);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + *(int *)(lVar5 + 0x2c) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + *(int *)(lVar5 + 0x30) + 8));
    iVar2 = *(int *)(lVar5 + 0x34);
    lVar6 = lVar7 + iVar2;
    (*pcVar9)(lVar6,1,lVar4);
    if ((int)lVar6 == 0) {
      (**(code **)(lVar8 + 8))(lVar7 + iVar2,lVar4);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + *(int *)(lVar5 + 0x38) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + *(int *)(lVar5 + 0x3c) + 8));
  }
  lVar7 = param_1 + *(int *)(lVar3 + 0x88);
  if (*(long *)(lVar7 + 8) != 0) {
    _swift_bridgeObjectRelease();
    lVar4 = *(long *)(lVar7 + 0x40);
    if (lVar4 != 1) {
      if (*(long *)(lVar7 + 0x20) != 1) {
        _swift_bridgeObjectRelease(*(long *)(lVar7 + 0x20));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x30));
        lVar4 = *(long *)(lVar7 + 0x40);
      }
      _swift_bridgeObjectRelease(lVar4);
    }
    lVar4 = *(long *)(lVar7 + 0x78);
    if (lVar4 != 1) {
      if (*(long *)(lVar7 + 0x58) != 1) {
        _swift_bridgeObjectRelease(*(long *)(lVar7 + 0x58));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x68));
        lVar4 = *(long *)(lVar7 + 0x78);
      }
      _swift_bridgeObjectRelease(lVar4);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x98));
  }
  lVar7 = param_1 + *(int *)(lVar3 + 0xac);
  if (*(long *)(lVar7 + 8) != 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x18));
  }
  lVar7 = param_1 + *(int *)(lVar3 + 0xb8);
  if (*(long *)(lVar7 + 8) != 0) {
    _swift_bridgeObjectRelease();
    lVar4 = *(long *)(lVar7 + 0x40);
    if (lVar4 != 1) {
      if (*(long *)(lVar7 + 0x20) != 1) {
        _swift_bridgeObjectRelease(*(long *)(lVar7 + 0x20));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x30));
        lVar4 = *(long *)(lVar7 + 0x40);
      }
      _swift_bridgeObjectRelease(lVar4);
    }
    lVar4 = *(long *)(lVar7 + 0x78);
    if (lVar4 != 1) {
      if (*(long *)(lVar7 + 0x58) != 1) {
        _swift_bridgeObjectRelease(*(long *)(lVar7 + 0x58));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x68));
        lVar4 = *(long *)(lVar7 + 0x78);
      }
      _swift_bridgeObjectRelease(lVar4);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x98));
  }
  param_1 = param_1 + *(int *)(lVar3 + 0xbc);
  if (*(long *)(param_1 + 8) != 0) {
    _swift_bridgeObjectRelease();
    lVar7 = *(long *)(param_1 + 0x40);
    if (lVar7 != 1) {
      if (*(long *)(param_1 + 0x20) != 1) {
        _swift_bridgeObjectRelease(*(long *)(param_1 + 0x20));
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x30));
        lVar7 = *(long *)(param_1 + 0x40);
      }
      _swift_bridgeObjectRelease(lVar7);
    }
    lVar7 = *(long *)(param_1 + 0x78);
    if (lVar7 != 1) {
      if (*(long *)(param_1 + 0x58) != 1) {
        _swift_bridgeObjectRelease(*(long *)(param_1 + 0x58));
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x68));
        lVar7 = *(long *)(param_1 + 0x78);
      }
      _swift_bridgeObjectRelease(lVar7);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x98));
    return;
  }
  return;
}



/* Entry: 1042e8b68; end: 1042edb73;  */

void FUN_1042e8b68(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  ulong uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  code *pcVar26;
  undefined8 uVar27;
  long lVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  long lVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  
  uVar6 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar6;
  uVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar7;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  uVar23 = *puVar2;
  uVar27 = puVar2[3];
  uVar25 = puVar2[2];
  puVar1[1] = puVar2[1];
  *puVar1 = uVar23;
  puVar1[3] = uVar27;
  puVar1[2] = uVar25;
  uVar23 = puVar2[4];
  puVar1[5] = puVar2[5];
  puVar1[4] = uVar23;
  uVar23 = puVar2[6];
  uVar25 = puVar2[7];
  puVar1[6] = uVar23;
  puVar1[7] = uVar25;
  uVar25 = puVar2[8];
  uVar27 = puVar2[9];
  puVar1[8] = uVar25;
  puVar1[9] = uVar27;
  uVar27 = puVar2[10];
  uVar8 = puVar2[0xb];
  puVar1[10] = uVar27;
  puVar1[0xb] = uVar8;
  uVar8 = puVar2[0xc];
  uVar32 = puVar2[0xd];
  puVar1[0xc] = uVar8;
  puVar1[0xd] = uVar32;
  uVar32 = puVar2[0xe];
  uVar30 = puVar2[0xf];
  puVar1[0xe] = uVar32;
  puVar1[0xf] = uVar30;
  uVar30 = puVar2[0x10];
  puVar1[0x10] = uVar30;
  lVar13 = 0;
  func_0x000100b91d00();
  lVar31 = (long)*(int *)(lVar13 + 0x3c);
  lVar14 = 0;
  __s10Foundation4UUIDVMa();
  lVar17 = *(long *)(lVar14 + -8);
  pcVar26 = *(code **)(lVar17 + 0x30);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar23);
  _swift_bridgeObjectRetain(uVar25);
  _swift_bridgeObjectRetain(uVar27);
  _swift_bridgeObjectRetain(uVar8);
  _swift_bridgeObjectRetain(uVar32);
  _swift_bridgeObjectRetain(uVar30);
  lVar21 = (long)puVar2 + lVar31;
  (*pcVar26)(lVar21,1,lVar14);
  if ((int)lVar21 == 0) {
    (**(code **)(lVar17 + 0x10))((long)puVar1 + lVar31,(long)puVar2 + lVar31,lVar14);
    (**(code **)(lVar17 + 0x38))((long)puVar1 + lVar31,0,1,lVar14);
  }
  else {
    lVar21 = 0x112d3bc20;
    func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
    _memcpy((long)puVar1 + lVar31,(long)puVar2 + lVar31,
            *(undefined8 *)(*(long *)(lVar21 + -8) + 0x40));
  }
  lVar31 = (long)*(int *)(lVar13 + 0x40);
  lVar21 = (long)puVar2 + lVar31;
  (*pcVar26)(lVar21,1,lVar14);
  if ((int)lVar21 == 0) {
    (**(code **)(lVar17 + 0x10))((long)puVar1 + lVar31,(long)puVar2 + lVar31,lVar14);
    (**(code **)(lVar17 + 0x38))((long)puVar1 + lVar31,0,1,lVar14);
  }
  else {
    lVar21 = 0x112d3bc20;
    func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
    _memcpy((long)puVar1 + lVar31,(long)puVar2 + lVar31,
            *(undefined8 *)(*(long *)(lVar21 + -8) + 0x40));
  }
  lVar31 = (long)*(int *)(lVar13 + 0x44);
  lVar21 = (long)puVar2 + lVar31;
  (*pcVar26)(lVar21,1,lVar14);
  if ((int)lVar21 == 0) {
    (**(code **)(lVar17 + 0x10))((long)puVar1 + lVar31,(long)puVar2 + lVar31,lVar14);
    (**(code **)(lVar17 + 0x38))((long)puVar1 + lVar31,0,1,lVar14);
  }
  else {
    lVar21 = 0x112d3bc20;
    func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
    _memcpy((long)puVar1 + lVar31,(long)puVar2 + lVar31,
            *(undefined8 *)(*(long *)(lVar21 + -8) + 0x40));
  }
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x48)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x48));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x4c)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x4c));
  uVar23 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x50));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x50)) = uVar23;
  uVar25 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x54));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x54)) = uVar25;
  uVar27 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x58));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x58)) = uVar27;
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x5c));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x5c));
  lVar21 = puVar4[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar23);
  _swift_bridgeObjectRetain(uVar25);
  _swift_bridgeObjectRetain(uVar27);
  if (lVar21 == 1) {
    uVar23 = puVar4[0xc];
    uVar27 = puVar4[0xf];
    uVar25 = puVar4[0xe];
    puVar3[0xd] = puVar4[0xd];
    puVar3[0xc] = uVar23;
    puVar3[0xf] = uVar27;
    puVar3[0xe] = uVar25;
    uVar23 = puVar4[0x10];
    uVar27 = puVar4[0x13];
    uVar25 = puVar4[0x12];
    puVar3[0x11] = puVar4[0x11];
    puVar3[0x10] = uVar23;
    puVar3[0x13] = uVar27;
    puVar3[0x12] = uVar25;
    uVar23 = puVar4[4];
    uVar27 = puVar4[7];
    uVar25 = puVar4[6];
    puVar3[5] = puVar4[5];
    puVar3[4] = uVar23;
    puVar3[7] = uVar27;
    puVar3[6] = uVar25;
    uVar23 = puVar4[8];
    uVar27 = puVar4[0xb];
    uVar25 = puVar4[10];
    puVar3[9] = puVar4[9];
    puVar3[8] = uVar23;
    puVar3[0xb] = uVar27;
    puVar3[10] = uVar25;
    uVar23 = *puVar4;
    uVar27 = puVar4[3];
    uVar25 = puVar4[2];
    puVar3[1] = puVar4[1];
    *puVar3 = uVar23;
    puVar3[3] = uVar27;
    puVar3[2] = uVar25;
  }
  else {
    *puVar3 = *puVar4;
    puVar3[1] = lVar21;
    uVar23 = puVar4[3];
    puVar3[2] = puVar4[2];
    puVar3[3] = uVar23;
    uVar25 = puVar4[5];
    puVar3[4] = puVar4[4];
    puVar3[5] = uVar25;
    uVar27 = puVar4[7];
    puVar3[6] = puVar4[6];
    puVar3[7] = uVar27;
    uVar8 = puVar4[9];
    puVar3[8] = puVar4[8];
    puVar3[9] = uVar8;
    *(undefined1 *)(puVar3 + 10) = *(undefined1 *)(puVar4 + 10);
    uVar32 = puVar4[0xb];
    puVar3[0xc] = puVar4[0xc];
    puVar3[0xb] = uVar32;
    lVar31 = puVar4[0x12];
    _swift_bridgeObjectRetain(lVar21);
    _swift_bridgeObjectRetain(uVar23);
    _swift_bridgeObjectRetain(uVar25);
    _swift_bridgeObjectRetain(uVar27);
    _swift_bridgeObjectRetain(uVar8);
    if (lVar31 == 0) {
      uVar23 = puVar4[0xd];
      puVar3[0xe] = puVar4[0xe];
      puVar3[0xd] = uVar23;
      uVar23 = puVar4[0xf];
      puVar3[0x10] = puVar4[0x10];
      puVar3[0xf] = uVar23;
      uVar23 = puVar4[0x11];
      puVar3[0x12] = puVar4[0x12];
      puVar3[0x11] = uVar23;
      puVar3[0x13] = puVar4[0x13];
    }
    else {
      uVar23 = puVar4[0xe];
      puVar3[0xd] = puVar4[0xd];
      puVar3[0xe] = uVar23;
      uVar23 = puVar4[0x10];
      puVar3[0xf] = puVar4[0xf];
      puVar3[0x10] = uVar23;
      puVar3[0x11] = puVar4[0x11];
      puVar3[0x12] = lVar31;
      puVar3[0x13] = puVar4[0x13];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar23);
      _swift_bridgeObjectRetain(lVar31);
    }
  }
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x60)) =
       *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x60));
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 100));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 100));
  lVar21 = puVar4[1];
  if (lVar21 == 1) {
    uVar23 = *puVar4;
    uVar27 = puVar4[3];
    uVar25 = puVar4[2];
    puVar3[1] = puVar4[1];
    *puVar3 = uVar23;
    puVar3[3] = uVar27;
    puVar3[2] = uVar25;
    puVar3[4] = puVar4[4];
  }
  else {
    *puVar3 = *puVar4;
    puVar3[1] = lVar21;
    puVar3[2] = puVar4[2];
    *(undefined1 *)(puVar3 + 3) = *(undefined1 *)(puVar4 + 3);
    *(undefined2 *)((long)puVar3 + 0x19) = *(undefined2 *)((long)puVar4 + 0x19);
    puVar3[4] = puVar4[4];
    _swift_bridgeObjectRetain();
  }
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x68));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x68));
  if (puVar4[0x27] == 0) {
    _memcpy(puVar3,puVar4,0x160);
  }
  else {
    uVar23 = *puVar4;
    puVar3[1] = puVar4[1];
    *puVar3 = uVar23;
    uVar23 = puVar4[2];
    uVar25 = puVar4[3];
    puVar3[2] = uVar23;
    puVar3[3] = uVar25;
    uVar18 = puVar4[4];
    puVar3[4] = uVar18;
    uVar25 = puVar4[5];
    puVar3[6] = puVar4[6];
    puVar3[5] = uVar25;
    uVar20 = puVar4[7];
    uVar25 = puVar4[8];
    puVar3[7] = uVar20;
    puVar3[8] = uVar25;
    *(undefined2 *)(puVar3 + 9) = *(undefined2 *)(puVar4 + 9);
    *(undefined1 *)((long)puVar3 + 0x4a) = *(undefined1 *)((long)puVar4 + 0x4a);
    uVar25 = puVar4[0xb];
    puVar3[10] = puVar4[10];
    puVar3[0xb] = uVar25;
    uVar19 = puVar4[0xc];
    puVar3[0xc] = uVar19;
    *(undefined1 *)(puVar3 + 0xd) = *(undefined1 *)(puVar4 + 0xd);
    uVar27 = puVar4[0xe];
    puVar3[0xf] = puVar4[0xf];
    puVar3[0xe] = uVar27;
    *(undefined1 *)(puVar3 + 0x10) = *(undefined1 *)(puVar4 + 0x10);
    uVar27 = puVar4[0x12];
    puVar3[0x11] = puVar4[0x11];
    puVar3[0x12] = uVar27;
    uVar8 = puVar4[0x14];
    puVar3[0x13] = puVar4[0x13];
    puVar3[0x14] = uVar8;
    uVar32 = puVar4[0x16];
    puVar3[0x15] = puVar4[0x15];
    puVar3[0x16] = uVar32;
    uVar6 = puVar4[0x18];
    puVar3[0x17] = puVar4[0x17];
    puVar3[0x18] = uVar6;
    uVar7 = puVar4[0x1a];
    puVar3[0x19] = puVar4[0x19];
    puVar3[0x1a] = uVar7;
    uVar30 = puVar4[0x1b];
    puVar3[0x1c] = puVar4[0x1c];
    puVar3[0x1b] = uVar30;
    uVar29 = puVar4[0x1d];
    puVar3[0x1d] = uVar29;
    *(undefined1 *)(puVar3 + 0x1e) = *(undefined1 *)(puVar4 + 0x1e);
    *(undefined1 *)((long)puVar3 + 0xf1) = *(undefined1 *)((long)puVar4 + 0xf1);
    *(undefined1 *)((long)puVar3 + 0xf2) = *(undefined1 *)((long)puVar4 + 0xf2);
    uVar30 = puVar4[0x20];
    puVar3[0x1f] = puVar4[0x1f];
    puVar3[0x20] = uVar30;
    uVar9 = puVar4[0x22];
    puVar3[0x21] = puVar4[0x21];
    puVar3[0x22] = uVar9;
    uVar10 = puVar4[0x24];
    puVar3[0x23] = puVar4[0x23];
    puVar3[0x24] = uVar10;
    uVar11 = puVar4[0x26];
    puVar3[0x25] = puVar4[0x25];
    puVar3[0x26] = uVar11;
    uVar24 = puVar4[0x27];
    puVar3[0x27] = uVar24;
    uVar33 = puVar4[0x28];
    puVar3[0x29] = puVar4[0x29];
    puVar3[0x28] = uVar33;
    uVar33 = puVar4[0x2b];
    puVar3[0x2a] = puVar4[0x2a];
    puVar3[0x2b] = uVar33;
    _swift_bridgeObjectRetain(uVar23);
    _swift_bridgeObjectRetain(uVar18);
    _swift_bridgeObjectRetain(uVar20);
    _swift_bridgeObjectRetain(uVar25);
    _swift_bridgeObjectRetain(uVar19);
    _swift_bridgeObjectRetain(uVar27);
    _swift_bridgeObjectRetain(uVar8);
    _swift_bridgeObjectRetain(uVar32);
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(uVar7);
    _swift_bridgeObjectRetain(uVar29);
    _swift_bridgeObjectRetain(uVar30);
    _swift_bridgeObjectRetain(uVar9);
    _swift_bridgeObjectRetain(uVar10);
    _swift_bridgeObjectRetain(uVar11);
    _swift_bridgeObjectRetain(uVar24);
  }
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x6c));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x6c));
  uVar22 = puVar4[1];
  if (uVar22 >> 0x3c < 0xf) {
    uVar23 = *puVar4;
    func_0x00010006c00c(uVar23,uVar22);
    *puVar3 = uVar23;
    puVar3[1] = uVar22;
  }
  else {
    uVar23 = *puVar4;
    puVar3[1] = puVar4[1];
    *puVar3 = uVar23;
  }
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x70)) =
       *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x70));
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x74));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x74));
  uVar23 = puVar4[1];
  *puVar3 = *puVar4;
  puVar3[1] = uVar23;
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x78));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x78));
  uVar23 = puVar4[1];
  *puVar3 = *puVar4;
  puVar3[1] = uVar23;
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x7c));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x7c));
  uVar25 = puVar4[1];
  *puVar3 = *puVar4;
  puVar3[1] = uVar25;
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x80));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x80));
  uVar22 = puVar4[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar23);
  _swift_bridgeObjectRetain(uVar25);
  if (uVar22 >> 0x3c < 0xf) {
    uVar23 = *puVar4;
    func_0x00010006c00c(uVar23,uVar22);
    *puVar3 = uVar23;
    puVar3[1] = uVar22;
  }
  else {
    uVar23 = *puVar4;
    puVar3[1] = puVar4[1];
    *puVar3 = uVar23;
  }
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x84));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x84));
  lVar21 = 0;
  func_0x000100b91fbc();
  lVar31 = *(long *)(lVar21 + -8);
  puVar15 = puVar4;
  (**(code **)(lVar31 + 0x30))(puVar4,1,lVar21);
  if ((int)puVar15 == 0) {
    uVar23 = puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = uVar23;
    uVar23 = puVar4[2];
    uVar27 = puVar4[5];
    uVar25 = puVar4[4];
    puVar3[3] = puVar4[3];
    puVar3[2] = uVar23;
    puVar3[5] = uVar27;
    puVar3[4] = uVar25;
    uVar23 = puVar4[6];
    uVar25 = puVar4[7];
    puVar3[6] = uVar23;
    puVar3[7] = uVar25;
    uVar25 = puVar4[8];
    puVar3[8] = uVar25;
    lVar28 = (long)*(int *)(lVar21 + 0x28);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar23);
    _swift_bridgeObjectRetain(uVar25);
    lVar16 = (long)puVar4 + lVar28;
    (*pcVar26)(lVar16,1,lVar14);
    if ((int)lVar16 == 0) {
      (**(code **)(lVar17 + 0x10))((long)puVar3 + lVar28,(long)puVar4 + lVar28,lVar14);
      (**(code **)(lVar17 + 0x38))((long)puVar3 + lVar28,0,1,lVar14);
    }
    else {
      lVar16 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)puVar3 + lVar28,(long)puVar4 + lVar28,
              *(undefined8 *)(*(long *)(lVar16 + -8) + 0x40));
    }
    puVar15 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar21 + 0x2c));
    puVar5 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar21 + 0x2c));
    uVar23 = puVar5[1];
    *puVar15 = *puVar5;
    puVar15[1] = uVar23;
    puVar15 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar21 + 0x30));
    puVar5 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar21 + 0x30));
    uVar23 = puVar5[1];
    *puVar15 = *puVar5;
    puVar15[1] = uVar23;
    lVar28 = (long)*(int *)(lVar21 + 0x34);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar23);
    lVar16 = (long)puVar4 + lVar28;
    (*pcVar26)(lVar16,1,lVar14);
    if ((int)lVar16 == 0) {
      (**(code **)(lVar17 + 0x10))((long)puVar3 + lVar28,(long)puVar4 + lVar28,lVar14);
      (**(code **)(lVar17 + 0x38))((long)puVar3 + lVar28,0,1,lVar14);
    }
    else {
      lVar14 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)puVar3 + lVar28,(long)puVar4 + lVar28,
              *(undefined8 *)(*(long *)(lVar14 + -8) + 0x40));
    }
    puVar15 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar21 + 0x38));
    puVar5 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar21 + 0x38));
    uVar23 = puVar5[1];
    *puVar15 = *puVar5;
    puVar15[1] = uVar23;
    puVar15 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar21 + 0x3c));
    puVar4 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar21 + 0x3c));
    uVar23 = puVar4[1];
    *puVar15 = *puVar4;
    puVar15[1] = uVar23;
    pcVar26 = *(code **)(lVar31 + 0x38);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar23);
    (*pcVar26)(puVar3,0,1,lVar21);
  }
  else {
    lVar21 = 0x112db39a8;
    func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
    _memcpy(puVar3,puVar4,*(undefined8 *)(*(long *)(lVar21 + -8) + 0x40));
  }
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x88));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x88));
  lVar21 = puVar4[1];
  if (lVar21 == 0) {
    uVar23 = puVar4[0x10];
    uVar27 = puVar4[0x13];
    uVar25 = puVar4[0x12];
    puVar3[0x11] = puVar4[0x11];
    puVar3[0x10] = uVar23;
    puVar3[0x13] = uVar27;
    puVar3[0x12] = uVar25;
    *(undefined1 *)(puVar3 + 0x14) = *(undefined1 *)(puVar4 + 0x14);
    uVar23 = puVar4[8];
    uVar27 = puVar4[0xb];
    uVar25 = puVar4[10];
    puVar3[9] = puVar4[9];
    puVar3[8] = uVar23;
    puVar3[0xb] = uVar27;
    puVar3[10] = uVar25;
    uVar27 = puVar4[0xc];
    uVar25 = puVar4[0xf];
    uVar23 = puVar4[0xe];
    puVar3[0xd] = puVar4[0xd];
    puVar3[0xc] = uVar27;
    puVar3[0xf] = uVar25;
    puVar3[0xe] = uVar23;
    uVar23 = *puVar4;
    uVar27 = puVar4[3];
    uVar25 = puVar4[2];
    puVar3[1] = puVar4[1];
    *puVar3 = uVar23;
    puVar3[3] = uVar27;
    puVar3[2] = uVar25;
    uVar27 = puVar4[4];
    uVar25 = puVar4[7];
    uVar23 = puVar4[6];
    puVar3[5] = puVar4[5];
    puVar3[4] = uVar27;
    puVar3[7] = uVar25;
    puVar3[6] = uVar23;
  }
  else {
    *puVar3 = *puVar4;
    puVar3[1] = lVar21;
    lVar21 = puVar4[8];
    _swift_bridgeObjectRetain();
    if (lVar21 == 1) {
      uVar23 = puVar4[2];
      uVar27 = puVar4[5];
      uVar25 = puVar4[4];
      puVar3[3] = puVar4[3];
      puVar3[2] = uVar23;
      puVar3[5] = uVar27;
      puVar3[4] = uVar25;
      uVar23 = puVar4[6];
      puVar3[7] = puVar4[7];
      puVar3[6] = uVar23;
      puVar3[8] = puVar4[8];
    }
    else {
      lVar14 = puVar4[4];
      if (lVar14 == 1) {
        uVar23 = puVar4[2];
        uVar27 = puVar4[5];
        uVar25 = puVar4[4];
        puVar3[3] = puVar4[3];
        puVar3[2] = uVar23;
        puVar3[5] = uVar27;
        puVar3[4] = uVar25;
        puVar3[6] = puVar4[6];
      }
      else {
        uVar23 = puVar4[2];
        puVar3[3] = puVar4[3];
        puVar3[2] = uVar23;
        uVar23 = puVar4[5];
        uVar25 = puVar4[6];
        puVar3[4] = lVar14;
        puVar3[5] = uVar23;
        puVar3[6] = uVar25;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar25);
      }
      puVar3[7] = puVar4[7];
      puVar3[8] = lVar21;
      _swift_bridgeObjectRetain(lVar21);
    }
    lVar21 = puVar4[0xf];
    if (lVar21 == 1) {
      uVar23 = puVar4[9];
      puVar3[10] = puVar4[10];
      puVar3[9] = uVar23;
      uVar23 = puVar4[0xb];
      puVar3[0xc] = puVar4[0xc];
      puVar3[0xb] = uVar23;
      uVar23 = puVar4[0xd];
      puVar3[0xe] = puVar4[0xe];
      puVar3[0xd] = uVar23;
      puVar3[0xf] = puVar4[0xf];
    }
    else {
      lVar14 = puVar4[0xb];
      if (lVar14 == 1) {
        uVar23 = puVar4[9];
        puVar3[10] = puVar4[10];
        puVar3[9] = uVar23;
        uVar23 = puVar4[0xb];
        puVar3[0xc] = puVar4[0xc];
        puVar3[0xb] = uVar23;
        puVar3[0xd] = puVar4[0xd];
      }
      else {
        uVar23 = puVar4[9];
        puVar3[10] = puVar4[10];
        puVar3[9] = uVar23;
        uVar23 = puVar4[0xc];
        uVar25 = puVar4[0xd];
        puVar3[0xb] = lVar14;
        puVar3[0xc] = uVar23;
        puVar3[0xd] = uVar25;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar25);
      }
      puVar3[0xe] = puVar4[0xe];
      puVar3[0xf] = lVar21;
      _swift_bridgeObjectRetain(lVar21);
    }
    *(undefined2 *)(puVar3 + 0x10) = *(undefined2 *)(puVar4 + 0x10);
    uVar23 = puVar4[0x11];
    puVar3[0x12] = puVar4[0x12];
    puVar3[0x11] = uVar23;
    puVar3[0x13] = puVar4[0x13];
    *(undefined1 *)(puVar3 + 0x14) = *(undefined1 *)(puVar4 + 0x14);
    _swift_bridgeObjectRetain();
  }
  *(undefined4 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x8c)) =
       *(undefined4 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x8c));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x90)) =
       *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x90));
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x94));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x94));
  uVar23 = *puVar4;
  uVar27 = puVar4[3];
  uVar25 = puVar4[2];
  puVar3[1] = puVar4[1];
  *puVar3 = uVar23;
  puVar3[3] = uVar27;
  puVar3[2] = uVar25;
  uVar23 = puVar4[4];
  uVar27 = puVar4[7];
  uVar25 = puVar4[6];
  puVar3[5] = puVar4[5];
  puVar3[4] = uVar23;
  puVar3[7] = uVar27;
  puVar3[6] = uVar25;
  uVar27 = puVar4[0xc];
  uVar25 = puVar4[0xf];
  uVar23 = puVar4[0xe];
  puVar3[0xd] = puVar4[0xd];
  puVar3[0xc] = uVar27;
  puVar3[0xf] = uVar25;
  puVar3[0xe] = uVar23;
  uVar27 = puVar4[8];
  uVar25 = puVar4[0xb];
  uVar23 = puVar4[10];
  puVar3[9] = puVar4[9];
  puVar3[8] = uVar27;
  puVar3[0xb] = uVar25;
  puVar3[10] = uVar23;
  uVar23 = *(undefined8 *)((long)puVar4 + 0xa9);
  *(undefined8 *)((long)puVar3 + 0xb1) = *(undefined8 *)((long)puVar4 + 0xb1);
  *(undefined8 *)((long)puVar3 + 0xa9) = uVar23;
  uVar23 = puVar4[0x12];
  uVar27 = puVar4[0x15];
  uVar25 = puVar4[0x14];
  puVar3[0x13] = puVar4[0x13];
  puVar3[0x12] = uVar23;
  puVar3[0x15] = uVar27;
  puVar3[0x14] = uVar25;
  uVar23 = puVar4[0x10];
  puVar3[0x11] = puVar4[0x11];
  puVar3[0x10] = uVar23;
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x98)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x98));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar13 + 0x9c)) =
       *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x9c));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0xa0)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0xa0));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0xa4)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0xa4));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0xa8)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0xa8));
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0xac));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0xac));
  lVar21 = puVar4[1];
  if (lVar21 == 0) {
    uVar23 = *puVar4;
    uVar27 = puVar4[3];
    uVar25 = puVar4[2];
    puVar3[1] = puVar4[1];
    *puVar3 = uVar23;
    puVar3[3] = uVar27;
    puVar3[2] = uVar25;
  }
  else {
    *puVar3 = *puVar4;
    puVar3[1] = lVar21;
    uVar23 = puVar4[3];
    puVar3[2] = puVar4[2];
    puVar3[3] = uVar23;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar23);
  }
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0xb0)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0xb0));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0xb4)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0xb4));
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0xb8));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0xb8));
  lVar21 = puVar4[1];
  if (lVar21 == 0) {
    uVar23 = puVar4[0x10];
    uVar27 = puVar4[0x13];
    uVar25 = puVar4[0x12];
    puVar3[0x11] = puVar4[0x11];
    puVar3[0x10] = uVar23;
    puVar3[0x13] = uVar27;
    puVar3[0x12] = uVar25;
    *(undefined1 *)(puVar3 + 0x14) = *(undefined1 *)(puVar4 + 0x14);
    uVar23 = puVar4[8];
    uVar27 = puVar4[0xb];
    uVar25 = puVar4[10];
    puVar3[9] = puVar4[9];
    puVar3[8] = uVar23;
    puVar3[0xb] = uVar27;
    puVar3[10] = uVar25;
    uVar27 = puVar4[0xc];
    uVar25 = puVar4[0xf];
    uVar23 = puVar4[0xe];
    puVar3[0xd] = puVar4[0xd];
    puVar3[0xc] = uVar27;
    puVar3[0xf] = uVar25;
    puVar3[0xe] = uVar23;
    uVar23 = *puVar4;
    uVar27 = puVar4[3];
    uVar25 = puVar4[2];
    puVar3[1] = puVar4[1];
    *puVar3 = uVar23;
    puVar3[3] = uVar27;
    puVar3[2] = uVar25;
    uVar27 = puVar4[4];
    uVar25 = puVar4[7];
    uVar23 = puVar4[6];
    puVar3[5] = puVar4[5];
    puVar3[4] = uVar27;
    puVar3[7] = uVar25;
    puVar3[6] = uVar23;
  }
  else {
    *puVar3 = *puVar4;
    puVar3[1] = lVar21;
    lVar21 = puVar4[8];
    _swift_bridgeObjectRetain();
    if (lVar21 == 1) {
      uVar23 = puVar4[2];
      uVar27 = puVar4[5];
      uVar25 = puVar4[4];
      puVar3[3] = puVar4[3];
      puVar3[2] = uVar23;
      puVar3[5] = uVar27;
      puVar3[4] = uVar25;
      uVar23 = puVar4[6];
      puVar3[7] = puVar4[7];
      puVar3[6] = uVar23;
      puVar3[8] = puVar4[8];
    }
    else {
      lVar14 = puVar4[4];
      if (lVar14 == 1) {
        uVar23 = puVar4[2];
        uVar27 = puVar4[5];
        uVar25 = puVar4[4];
        puVar3[3] = puVar4[3];
        puVar3[2] = uVar23;
        puVar3[5] = uVar27;
        puVar3[4] = uVar25;
        puVar3[6] = puVar4[6];
      }
      else {
        uVar23 = puVar4[2];
        puVar3[3] = puVar4[3];
        puVar3[2] = uVar23;
        uVar23 = puVar4[5];
        uVar25 = puVar4[6];
        puVar3[4] = lVar14;
        puVar3[5] = uVar23;
        puVar3[6] = uVar25;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar25);
      }
      puVar3[7] = puVar4[7];
      puVar3[8] = lVar21;
      _swift_bridgeObjectRetain(lVar21);
    }
    lVar21 = puVar4[0xf];
    if (lVar21 == 1) {
      uVar23 = puVar4[9];
      puVar3[10] = puVar4[10];
      puVar3[9] = uVar23;
      uVar23 = puVar4[0xb];
      puVar3[0xc] = puVar4[0xc];
      puVar3[0xb] = uVar23;
      uVar23 = puVar4[0xd];
      puVar3[0xe] = puVar4[0xe];
      puVar3[0xd] = uVar23;
      puVar3[0xf] = puVar4[0xf];
    }
    else {
      lVar14 = puVar4[0xb];
      if (lVar14 == 1) {
        uVar23 = puVar4[9];
        puVar3[10] = puVar4[10];
        puVar3[9] = uVar23;
        uVar23 = puVar4[0xb];
        puVar3[0xc] = puVar4[0xc];
        puVar3[0xb] = uVar23;
        puVar3[0xd] = puVar4[0xd];
      }
      else {
        uVar23 = puVar4[9];
        puVar3[10] = puVar4[10];
        puVar3[9] = uVar23;
        uVar23 = puVar4[0xc];
        uVar25 = puVar4[0xd];
        puVar3[0xb] = lVar14;
        puVar3[0xc] = uVar23;
        puVar3[0xd] = uVar25;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar25);
      }
      puVar3[0xe] = puVar4[0xe];
      puVar3[0xf] = lVar21;
      _swift_bridgeObjectRetain(lVar21);
    }
    *(undefined2 *)(puVar3 + 0x10) = *(undefined2 *)(puVar4 + 0x10);
    uVar23 = puVar4[0x11];
    puVar3[0x12] = puVar4[0x12];
    puVar3[0x11] = uVar23;
    puVar3[0x13] = puVar4[0x13];
    *(undefined1 *)(puVar3 + 0x14) = *(undefined1 *)(puVar4 + 0x14);
    _swift_bridgeObjectRetain();
  }
  puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0xbc));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0xbc));
  lVar21 = puVar4[1];
  if (lVar21 == 0) {
    uVar23 = puVar4[0x10];
    uVar27 = puVar4[0x13];
    uVar25 = puVar4[0x12];
    puVar3[0x11] = puVar4[0x11];
    puVar3[0x10] = uVar23;
    puVar3[0x13] = uVar27;
    puVar3[0x12] = uVar25;
    *(undefined1 *)(puVar3 + 0x14) = *(undefined1 *)(puVar4 + 0x14);
    uVar23 = puVar4[8];
    uVar27 = puVar4[0xb];
    uVar25 = puVar4[10];
    puVar3[9] = puVar4[9];
    puVar3[8] = uVar23;
    puVar3[0xb] = uVar27;
    puVar3[10] = uVar25;
    uVar27 = puVar4[0xc];
    uVar25 = puVar4[0xf];
    uVar23 = puVar4[0xe];
    puVar3[0xd] = puVar4[0xd];
    puVar3[0xc] = uVar27;
    puVar3[0xf] = uVar25;
    puVar3[0xe] = uVar23;
    uVar23 = *puVar4;
    uVar27 = puVar4[3];
    uVar25 = puVar4[2];
    puVar3[1] = puVar4[1];
    *puVar3 = uVar23;
    puVar3[3] = uVar27;
    puVar3[2] = uVar25;
    uVar27 = puVar4[4];
    uVar25 = puVar4[7];
    uVar23 = puVar4[6];
    puVar3[5] = puVar4[5];
    puVar3[4] = uVar27;
    puVar3[7] = uVar25;
    puVar3[6] = uVar23;
  }
  else {
    *puVar3 = *puVar4;
    puVar3[1] = lVar21;
    lVar21 = puVar4[8];
    _swift_bridgeObjectRetain();
    if (lVar21 == 1) {
      uVar23 = puVar4[2];
      uVar27 = puVar4[5];
      uVar25 = puVar4[4];
      puVar3[3] = puVar4[3];
      puVar3[2] = uVar23;
      puVar3[5] = uVar27;
      puVar3[4] = uVar25;
      uVar23 = puVar4[6];
      puVar3[7] = puVar4[7];
      puVar3[6] = uVar23;
      puVar3[8] = puVar4[8];
    }
    else {
      lVar14 = puVar4[4];
      if (lVar14 == 1) {
        uVar23 = puVar4[2];
        uVar27 = puVar4[5];
        uVar25 = puVar4[4];
        puVar3[3] = puVar4[3];
        puVar3[2] = uVar23;
        puVar3[5] = uVar27;
        puVar3[4] = uVar25;
        puVar3[6] = puVar4[6];
      }
      else {
        uVar23 = puVar4[2];
        puVar3[3] = puVar4[3];
        puVar3[2] = uVar23;
        uVar23 = puVar4[5];
        uVar25 = puVar4[6];
        puVar3[4] = lVar14;
        puVar3[5] = uVar23;
        puVar3[6] = uVar25;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar25);
      }
      puVar3[7] = puVar4[7];
      puVar3[8] = lVar21;
      _swift_bridgeObjectRetain(lVar21);
    }
    lVar21 = puVar4[0xf];
    if (lVar21 == 1) {
      uVar23 = puVar4[9];
      puVar3[10] = puVar4[10];
      puVar3[9] = uVar23;
      uVar23 = puVar4[0xb];
      puVar3[0xc] = puVar4[0xc];
      puVar3[0xb] = uVar23;
      uVar23 = puVar4[0xd];
      puVar3[0xe] = puVar4[0xe];
      puVar3[0xd] = uVar23;
      puVar3[0xf] = puVar4[0xf];
    }
    else {
      lVar14 = puVar4[0xb];
      if (lVar14 == 1) {
        uVar23 = puVar4[9];
        puVar3[10] = puVar4[10];
        puVar3[9] = uVar23;
        uVar23 = puVar4[0xb];
        puVar3[0xc] = puVar4[0xc];
        puVar3[0xb] = uVar23;
        puVar3[0xd] = puVar4[0xd];
      }
      else {
        uVar23 = puVar4[9];
        puVar3[10] = puVar4[10];
        puVar3[9] = uVar23;
        uVar23 = puVar4[0xc];
        uVar25 = puVar4[0xd];
        puVar3[0xb] = lVar14;
        puVar3[0xc] = uVar23;
        puVar3[0xd] = uVar25;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar25);
      }
      puVar3[0xe] = puVar4[0xe];
      puVar3[0xf] = lVar21;
      _swift_bridgeObjectRetain(lVar21);
    }
    *(undefined2 *)(puVar3 + 0x10) = *(undefined2 *)(puVar4 + 0x10);
    uVar23 = puVar4[0x11];
    puVar3[0x12] = puVar4[0x12];
    puVar3[0x11] = uVar23;
    puVar3[0x13] = puVar4[0x13];
    *(undefined1 *)(puVar3 + 0x14) = *(undefined1 *)(puVar4 + 0x14);
    _swift_bridgeObjectRetain();
  }
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar13 + 0xc0)) =
       *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar13 + 0xc0));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 0xc4)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0xc4));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar13 + 200)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 200));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar13 + 0xcc)) =
       *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar13 + 0xcc));
  iVar12 = *(int *)(param_3 + 0x20);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  *(undefined8 *)((long)param_1 + (long)iVar12) = *(undefined8 *)((long)param_2 + (long)iVar12);
  return;
}



/* Entry: 1042edb74; end: 1042edb8b;  */

void FUN_1042edb74(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1042edb8c; end: 1042edc17;  */

void FUN_1042edb8c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_48 = &UNK_10dce7308;
  puStack_40 = &UNK_10dce7308;
  lVar1 = 0x13f;
  func_0x000100b91d00();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = &UNK_10dce7320;
    puStack_28 = PTR___sBi64_WV_11034d670 + 0x40;
    _swift_initStructMetadata(param_1,0x100,5,&puStack_48,param_1 + 0x10);
  }
  return;
}



/* Entry: 1042edc18; end: 1042edd7b;  */

int FUN_1042edc18(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1042edc94;
        goto LAB_1042edc78;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1042edc78:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_1042edc94:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1042edd7c; end: 1042eec5b;  */

long * FUN_1042edd7c(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  ulong uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  code *pcVar30;
  undefined8 uVar31;
  long lVar32;
  long lVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  
  uVar14 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar14 >> 0x11 & 1) == 0) {
    lVar24 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar24;
    *(char *)(param_1 + 2) = (char)param_2[2];
    lVar19 = param_2[3];
    param_1[3] = lVar19;
    lVar15 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = lVar15;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
    uVar8 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar8;
    uVar9 = puVar2[3];
    puVar1[2] = puVar2[2];
    puVar1[3] = uVar9;
    lVar15 = 0;
    func_0x0001042e75b8();
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar15 + 0x18));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar15 + 0x18));
    uVar26 = *puVar4;
    uVar31 = puVar4[3];
    uVar28 = puVar4[2];
    puVar3[1] = puVar4[1];
    *puVar3 = uVar26;
    puVar3[3] = uVar31;
    puVar3[2] = uVar28;
    uVar26 = puVar4[4];
    puVar3[5] = puVar4[5];
    puVar3[4] = uVar26;
    uVar26 = puVar4[6];
    uVar28 = puVar4[7];
    puVar3[6] = uVar26;
    puVar3[7] = uVar28;
    uVar28 = puVar4[8];
    uVar31 = puVar4[9];
    puVar3[8] = uVar28;
    puVar3[9] = uVar31;
    uVar31 = puVar4[10];
    uVar10 = puVar4[0xb];
    puVar3[10] = uVar31;
    puVar3[0xb] = uVar10;
    uVar10 = puVar4[0xc];
    uVar35 = puVar4[0xd];
    puVar3[0xc] = uVar10;
    puVar3[0xd] = uVar35;
    uVar35 = puVar4[0xe];
    uVar27 = puVar4[0xf];
    puVar3[0xe] = uVar35;
    puVar3[0xf] = uVar27;
    uVar27 = puVar4[0x10];
    puVar3[0x10] = uVar27;
    lVar16 = 0;
    func_0x000100b91d00();
    lVar32 = (long)*(int *)(lVar16 + 0x3c);
    lVar17 = 0;
    __s10Foundation4UUIDVMa();
    lVar20 = *(long *)(lVar17 + -8);
    pcVar30 = *(code **)(lVar20 + 0x30);
    _swift_bridgeObjectRetain(lVar24);
    _swift_bridgeObjectRetain(lVar19);
    _swift_bridgeObjectRetain(uVar8);
    _swift_bridgeObjectRetain(uVar9);
    _swift_bridgeObjectRetain(uVar26);
    _swift_bridgeObjectRetain(uVar28);
    _swift_bridgeObjectRetain(uVar31);
    _swift_bridgeObjectRetain(uVar10);
    _swift_bridgeObjectRetain(uVar35);
    _swift_bridgeObjectRetain(uVar27);
    lVar24 = (long)puVar4 + lVar32;
    (*pcVar30)(lVar24,1,lVar17);
    if ((int)lVar24 == 0) {
      (**(code **)(lVar20 + 0x10))((long)puVar3 + lVar32,(long)puVar4 + lVar32,lVar17);
      (**(code **)(lVar20 + 0x38))((long)puVar3 + lVar32,0,1,lVar17);
    }
    else {
      lVar24 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)puVar3 + lVar32,(long)puVar4 + lVar32,
              *(undefined8 *)(*(long *)(lVar24 + -8) + 0x40));
    }
    lVar19 = (long)*(int *)(lVar16 + 0x40);
    lVar24 = (long)puVar4 + lVar19;
    (*pcVar30)(lVar24,1,lVar17);
    if ((int)lVar24 == 0) {
      (**(code **)(lVar20 + 0x10))((long)puVar3 + lVar19,(long)puVar4 + lVar19,lVar17);
      (**(code **)(lVar20 + 0x38))((long)puVar3 + lVar19,0,1,lVar17);
    }
    else {
      lVar24 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)puVar3 + lVar19,(long)puVar4 + lVar19,
              *(undefined8 *)(*(long *)(lVar24 + -8) + 0x40));
    }
    lVar19 = (long)*(int *)(lVar16 + 0x44);
    lVar24 = (long)puVar4 + lVar19;
    (*pcVar30)(lVar24,1,lVar17);
    if ((int)lVar24 == 0) {
      (**(code **)(lVar20 + 0x10))((long)puVar3 + lVar19,(long)puVar4 + lVar19,lVar17);
      (**(code **)(lVar20 + 0x38))((long)puVar3 + lVar19,0,1,lVar17);
    }
    else {
      lVar24 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)puVar3 + lVar19,(long)puVar4 + lVar19,
              *(undefined8 *)(*(long *)(lVar24 + -8) + 0x40));
    }
    *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar16 + 0x48)) =
         *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar16 + 0x48));
    *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar16 + 0x4c)) =
         *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar16 + 0x4c));
    uVar26 = *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar16 + 0x50));
    *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar16 + 0x50)) = uVar26;
    uVar28 = *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar16 + 0x54));
    *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar16 + 0x54)) = uVar28;
    uVar31 = *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar16 + 0x58));
    *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar16 + 0x58)) = uVar31;
    puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar16 + 0x5c));
    puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar16 + 0x5c));
    lVar24 = puVar6[1];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar26);
    _swift_bridgeObjectRetain(uVar28);
    _swift_bridgeObjectRetain(uVar31);
    if (lVar24 == 1) {
      uVar26 = puVar6[0xc];
      uVar31 = puVar6[0xf];
      uVar28 = puVar6[0xe];
      puVar5[0xd] = puVar6[0xd];
      puVar5[0xc] = uVar26;
      puVar5[0xf] = uVar31;
      puVar5[0xe] = uVar28;
      uVar26 = puVar6[0x10];
      uVar31 = puVar6[0x13];
      uVar28 = puVar6[0x12];
      puVar5[0x11] = puVar6[0x11];
      puVar5[0x10] = uVar26;
      puVar5[0x13] = uVar31;
      puVar5[0x12] = uVar28;
      uVar26 = puVar6[4];
      uVar31 = puVar6[7];
      uVar28 = puVar6[6];
      puVar5[5] = puVar6[5];
      puVar5[4] = uVar26;
      puVar5[7] = uVar31;
      puVar5[6] = uVar28;
      uVar26 = puVar6[8];
      uVar31 = puVar6[0xb];
      uVar28 = puVar6[10];
      puVar5[9] = puVar6[9];
      puVar5[8] = uVar26;
      puVar5[0xb] = uVar31;
      puVar5[10] = uVar28;
      uVar26 = *puVar6;
      uVar31 = puVar6[3];
      uVar28 = puVar6[2];
      puVar5[1] = puVar6[1];
      *puVar5 = uVar26;
      puVar5[3] = uVar31;
      puVar5[2] = uVar28;
    }
    else {
      *puVar5 = *puVar6;
      puVar5[1] = lVar24;
      uVar26 = puVar6[3];
      puVar5[2] = puVar6[2];
      puVar5[3] = uVar26;
      uVar28 = puVar6[5];
      puVar5[4] = puVar6[4];
      puVar5[5] = uVar28;
      uVar31 = puVar6[7];
      puVar5[6] = puVar6[6];
      puVar5[7] = uVar31;
      uVar10 = puVar6[9];
      puVar5[8] = puVar6[8];
      puVar5[9] = uVar10;
      *(undefined1 *)(puVar5 + 10) = *(undefined1 *)(puVar6 + 10);
      uVar35 = puVar6[0xb];
      puVar5[0xc] = puVar6[0xc];
      puVar5[0xb] = uVar35;
      lVar19 = puVar6[0x12];
      _swift_bridgeObjectRetain(lVar24);
      _swift_bridgeObjectRetain(uVar26);
      _swift_bridgeObjectRetain(uVar28);
      _swift_bridgeObjectRetain(uVar31);
      _swift_bridgeObjectRetain(uVar10);
      if (lVar19 == 0) {
        uVar26 = puVar6[0xd];
        puVar5[0xe] = puVar6[0xe];
        puVar5[0xd] = uVar26;
        uVar26 = puVar6[0xf];
        puVar5[0x10] = puVar6[0x10];
        puVar5[0xf] = uVar26;
        uVar26 = puVar6[0x11];
        puVar5[0x12] = puVar6[0x12];
        puVar5[0x11] = uVar26;
        puVar5[0x13] = puVar6[0x13];
      }
      else {
        uVar26 = puVar6[0xe];
        puVar5[0xd] = puVar6[0xd];
        puVar5[0xe] = uVar26;
        uVar26 = puVar6[0x10];
        puVar5[0xf] = puVar6[0xf];
        puVar5[0x10] = uVar26;
        puVar5[0x11] = puVar6[0x11];
        puVar5[0x12] = lVar19;
        puVar5[0x13] = puVar6[0x13];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar26);
        _swift_bridgeObjectRetain(lVar19);
      }
    }
    *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar16 + 0x60)) =
         *(undefined1 *)((long)puVar4 + (long)*(int *)(lVar16 + 0x60));
    puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar16 + 100));
    puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar16 + 100));
    lVar24 = puVar6[1];
    if (lVar24 == 1) {
      uVar26 = *puVar6;
      uVar31 = puVar6[3];
      uVar28 = puVar6[2];
      puVar5[1] = puVar6[1];
      *puVar5 = uVar26;
      puVar5[3] = uVar31;
      puVar5[2] = uVar28;
      puVar5[4] = puVar6[4];
    }
    else {
      *puVar5 = *puVar6;
      puVar5[1] = lVar24;
      puVar5[2] = puVar6[2];
      *(undefined1 *)(puVar5 + 3) = *(undefined1 *)(puVar6 + 3);
      *(undefined2 *)((long)puVar5 + 0x19) = *(undefined2 *)((long)puVar6 + 0x19);
      puVar5[4] = puVar6[4];
      _swift_bridgeObjectRetain();
    }
    puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar16 + 0x68));
    puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar16 + 0x68));
    if (puVar6[0x27] == 0) {
      _memcpy(puVar5,puVar6,0x160);
    }
    else {
      uVar26 = *puVar6;
      puVar5[1] = puVar6[1];
      *puVar5 = uVar26;
      uVar26 = puVar6[2];
      uVar28 = puVar6[3];
      puVar5[2] = uVar26;
      puVar5[3] = uVar28;
      uVar21 = puVar6[4];
      puVar5[4] = uVar21;
      uVar28 = puVar6[5];
      puVar5[6] = puVar6[6];
      puVar5[5] = uVar28;
      uVar23 = puVar6[7];
      uVar28 = puVar6[8];
      puVar5[7] = uVar23;
      puVar5[8] = uVar28;
      *(undefined2 *)(puVar5 + 9) = *(undefined2 *)(puVar6 + 9);
      *(undefined1 *)((long)puVar5 + 0x4a) = *(undefined1 *)((long)puVar6 + 0x4a);
      uVar28 = puVar6[0xb];
      puVar5[10] = puVar6[10];
      puVar5[0xb] = uVar28;
      uVar22 = puVar6[0xc];
      puVar5[0xc] = uVar22;
      *(undefined1 *)(puVar5 + 0xd) = *(undefined1 *)(puVar6 + 0xd);
      uVar31 = puVar6[0xe];
      puVar5[0xf] = puVar6[0xf];
      puVar5[0xe] = uVar31;
      *(undefined1 *)(puVar5 + 0x10) = *(undefined1 *)(puVar6 + 0x10);
      uVar31 = puVar6[0x12];
      puVar5[0x11] = puVar6[0x11];
      puVar5[0x12] = uVar31;
      uVar10 = puVar6[0x14];
      puVar5[0x13] = puVar6[0x13];
      puVar5[0x14] = uVar10;
      uVar35 = puVar6[0x16];
      puVar5[0x15] = puVar6[0x15];
      puVar5[0x16] = uVar35;
      uVar8 = puVar6[0x18];
      puVar5[0x17] = puVar6[0x17];
      puVar5[0x18] = uVar8;
      uVar9 = puVar6[0x1a];
      puVar5[0x19] = puVar6[0x19];
      puVar5[0x1a] = uVar9;
      uVar27 = puVar6[0x1b];
      puVar5[0x1c] = puVar6[0x1c];
      puVar5[0x1b] = uVar27;
      uVar29 = puVar6[0x1d];
      puVar5[0x1d] = uVar29;
      *(undefined1 *)(puVar5 + 0x1e) = *(undefined1 *)(puVar6 + 0x1e);
      *(undefined1 *)((long)puVar5 + 0xf1) = *(undefined1 *)((long)puVar6 + 0xf1);
      *(undefined1 *)((long)puVar5 + 0xf2) = *(undefined1 *)((long)puVar6 + 0xf2);
      uVar27 = puVar6[0x20];
      puVar5[0x1f] = puVar6[0x1f];
      puVar5[0x20] = uVar27;
      uVar11 = puVar6[0x22];
      puVar5[0x21] = puVar6[0x21];
      puVar5[0x22] = uVar11;
      uVar12 = puVar6[0x24];
      puVar5[0x23] = puVar6[0x23];
      puVar5[0x24] = uVar12;
      uVar13 = puVar6[0x26];
      puVar5[0x25] = puVar6[0x25];
      puVar5[0x26] = uVar13;
      uVar34 = puVar6[0x27];
      puVar5[0x27] = uVar34;
      uVar36 = puVar6[0x28];
      puVar5[0x29] = puVar6[0x29];
      puVar5[0x28] = uVar36;
      uVar36 = puVar6[0x2b];
      puVar5[0x2a] = puVar6[0x2a];
      puVar5[0x2b] = uVar36;
      _swift_bridgeObjectRetain(uVar26);
      _swift_bridgeObjectRetain(uVar21);
      _swift_bridgeObjectRetain(uVar23);
      _swift_bridgeObjectRetain(uVar28);
      _swift_bridgeObjectRetain(uVar22);
      _swift_bridgeObjectRetain(uVar31);
      _swift_bridgeObjectRetain(uVar10);
      _swift_bridgeObjectRetain(uVar35);
      _swift_bridgeObjectRetain(uVar8);
      _swift_bridgeObjectRetain(uVar9);
      _swift_bridgeObjectRetain(uVar29);
      _swift_bridgeObjectRetain(uVar27);
      _swift_bridgeObjectRetain(uVar11);
      _swift_bridgeObjectRetain(uVar12);
      _swift_bridgeObjectRetain(uVar13);
      _swift_bridgeObjectRetain(uVar34);
    }
    puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar16 + 0x6c));
    puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar16 + 0x6c));
    uVar25 = puVar6[1];
    if (uVar25 >> 0x3c < 0xf) {
      uVar26 = *puVar6;
      func_0x00010006c00c(uVar26,uVar25);
      *puVar5 = uVar26;
      puVar5[1] = uVar25;
    }
    else {
      uVar26 = *puVar6;
      puVar5[1] = puVar6[1];
      *puVar5 = uVar26;
    }
    *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar16 + 0x70)) =
         *(undefined1 *)((long)puVar4 + (long)*(int *)(lVar16 + 0x70));
    puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar16 + 0x74));
    puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar16 + 0x74));
    uVar26 = puVar6[1];
    *puVar5 = *puVar6;
    puVar5[1] = uVar26;
    puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar16 + 0x78));
    puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar16 + 0x78));
    uVar26 = puVar6[1];
    *puVar5 = *puVar6;
    puVar5[1] = uVar26;
    puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar16 + 0x7c));
    puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar16 + 0x7c));
    uVar28 = puVar6[1];
    *puVar5 = *puVar6;
    puVar5[1] = uVar28;
    puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar16 + 0x80));
    puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar16 + 0x80));
    uVar25 = puVar6[1];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar26);
    _swift_bridgeObjectRetain(uVar28);
    if (uVar25 >> 0x3c < 0xf) {
      uVar26 = *puVar6;
      func_0x00010006c00c(uVar26,uVar25);
      *puVar5 = uVar26;
      puVar5[1] = uVar25;
    }
    else {
      uVar26 = *puVar6;
      puVar5[1] = puVar6[1];
      *puVar5 = uVar26;
    }
    puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar16 + 0x84));
    puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar16 + 0x84));
    lVar24 = 0;
    func_0x000100b91fbc();
    lVar19 = *(long *)(lVar24 + -8);
    puVar18 = puVar6;
    (**(code **)(lVar19 + 0x30))(puVar6,1,lVar24);
    if ((int)puVar18 == 0) {
      uVar26 = puVar6[1];
      *puVar5 = *puVar6;
      puVar5[1] = uVar26;
      uVar26 = puVar6[2];
      uVar31 = puVar6[5];
      uVar28 = puVar6[4];
      puVar5[3] = puVar6[3];
      puVar5[2] = uVar26;
      puVar5[5] = uVar31;
      puVar5[4] = uVar28;
      uVar26 = puVar6[6];
      uVar28 = puVar6[7];
      puVar5[6] = uVar26;
      puVar5[7] = uVar28;
      uVar28 = puVar6[8];
      puVar5[8] = uVar28;
      lVar33 = (long)*(int *)(lVar24 + 0x28);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar26);
      _swift_bridgeObjectRetain(uVar28);
      lVar32 = (long)puVar6 + lVar33;
      (*pcVar30)(lVar32,1,lVar17);
      if ((int)lVar32 == 0) {
        (**(code **)(lVar20 + 0x10))((long)puVar5 + lVar33,(long)puVar6 + lVar33,lVar17);
        (**(code **)(lVar20 + 0x38))((long)puVar5 + lVar33,0,1,lVar17);
      }
      else {
        lVar32 = 0x112d3bc20;
        func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
        _memcpy((long)puVar5 + lVar33,(long)puVar6 + lVar33,
                *(undefined8 *)(*(long *)(lVar32 + -8) + 0x40));
      }
      puVar18 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar24 + 0x2c));
      puVar7 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar24 + 0x2c));
      uVar26 = puVar7[1];
      *puVar18 = *puVar7;
      puVar18[1] = uVar26;
      puVar18 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar24 + 0x30));
      puVar7 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar24 + 0x30));
      uVar26 = puVar7[1];
      *puVar18 = *puVar7;
      puVar18[1] = uVar26;
      lVar33 = (long)*(int *)(lVar24 + 0x34);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar26);
      lVar32 = (long)puVar6 + lVar33;
      (*pcVar30)(lVar32,1,lVar17);
      if ((int)lVar32 == 0) {
        (**(code **)(lVar20 + 0x10))((long)puVar5 + lVar33,(long)puVar6 + lVar33,lVar17);
        (**(code **)(lVar20 + 0x38))((long)puVar5 + lVar33,0,1,lVar17);
      }
      else {
        lVar17 = 0x112d3bc20;
        func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
        _memcpy((long)puVar5 + lVar33,(long)puVar6 + lVar33,
                *(undefined8 *)(*(long *)(lVar17 + -8) + 0x40));
      }
      puVar18 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar24 + 0x38));
      puVar7 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar24 + 0x38));
      uVar26 = puVar7[1];
      *puVar18 = *puVar7;
      puVar18[1] = uVar26;
      puVar18 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar24 + 0x3c));
      puVar6 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar24 + 0x3c));
      uVar26 = puVar6[1];
      *puVar18 = *puVar6;
      puVar18[1] = uVar26;
      pcVar30 = *(code **)(lVar19 + 0x38);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar26);
      (*pcVar30)(puVar5,0,1,lVar24);
    }
    else {
      lVar24 = 0x112db39a8;
      func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
      _memcpy(puVar5,puVar6,*(undefined8 *)(*(long *)(lVar24 + -8) + 0x40));
    }
    puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar16 + 0x88));
    puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar16 + 0x88));
    lVar24 = puVar6[1];
    if (lVar24 == 0) {
      uVar26 = puVar6[0x10];
      uVar31 = puVar6[0x13];
      uVar28 = puVar6[0x12];
      puVar5[0x11] = puVar6[0x11];
      puVar5[0x10] = uVar26;
      puVar5[0x13] = uVar31;
      puVar5[0x12] = uVar28;
      *(undefined1 *)(puVar5 + 0x14) = *(undefined1 *)(puVar6 + 0x14);
      uVar26 = puVar6[8];
      uVar31 = puVar6[0xb];
      uVar28 = puVar6[10];
      puVar5[9] = puVar6[9];
      puVar5[8] = uVar26;
      puVar5[0xb] = uVar31;
      puVar5[10] = uVar28;
      uVar31 = puVar6[0xc];
      uVar28 = puVar6[0xf];
      uVar26 = puVar6[0xe];
      puVar5[0xd] = puVar6[0xd];
      puVar5[0xc] = uVar31;
      puVar5[0xf] = uVar28;
      puVar5[0xe] = uVar26;
      uVar26 = *puVar6;
      uVar31 = puVar6[3];
      uVar28 = puVar6[2];
      puVar5[1] = puVar6[1];
      *puVar5 = uVar26;
      puVar5[3] = uVar31;
      puVar5[2] = uVar28;
      uVar31 = puVar6[4];
      uVar28 = puVar6[7];
      uVar26 = puVar6[6];
      puVar5[5] = puVar6[5];
      puVar5[4] = uVar31;
      puVar5[7] = uVar28;
      puVar5[6] = uVar26;
    }
    else {
      *puVar5 = *puVar6;
      puVar5[1] = lVar24;
      lVar24 = puVar6[8];
      _swift_bridgeObjectRetain();
      if (lVar24 == 1) {
        uVar26 = puVar6[2];
        uVar31 = puVar6[5];
        uVar28 = puVar6[4];
        puVar5[3] = puVar6[3];
        puVar5[2] = uVar26;
        puVar5[5] = uVar31;
        puVar5[4] = uVar28;
        uVar26 = puVar6[6];
        puVar5[7] = puVar6[7];
        puVar5[6] = uVar26;
        puVar5[8] = puVar6[8];
      }
      else {
        lVar17 = puVar6[4];
        if (lVar17 == 1) {
          uVar26 = puVar6[2];
          uVar31 = puVar6[5];
          uVar28 = puVar6[4];
          puVar5[3] = puVar6[3];
          puVar5[2] = uVar26;
          puVar5[5] = uVar31;
          puVar5[4] = uVar28;
          puVar5[6] = puVar6[6];
        }
        else {
          uVar26 = puVar6[2];
          puVar5[3] = puVar6[3];
          puVar5[2] = uVar26;
          uVar26 = puVar6[5];
          uVar28 = puVar6[6];
          puVar5[4] = lVar17;
          puVar5[5] = uVar26;
          puVar5[6] = uVar28;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar28);
        }
        puVar5[7] = puVar6[7];
        puVar5[8] = lVar24;
        _swift_bridgeObjectRetain(lVar24);
      }
      lVar24 = puVar6[0xf];
      if (lVar24 == 1) {
        uVar26 = puVar6[9];
        puVar5[10] = puVar6[10];
        puVar5[9] = uVar26;
        uVar26 = puVar6[0xb];
        puVar5[0xc] = puVar6[0xc];
        puVar5[0xb] = uVar26;
        uVar26 = puVar6[0xd];
        puVar5[0xe] = puVar6[0xe];
        puVar5[0xd] = uVar26;
        puVar5[0xf] = puVar6[0xf];
      }
      else {
        lVar17 = puVar6[0xb];
        if (lVar17 == 1) {
          uVar26 = puVar6[9];
          puVar5[10] = puVar6[10];
          puVar5[9] = uVar26;
          uVar26 = puVar6[0xb];
          puVar5[0xc] = puVar6[0xc];
          puVar5[0xb] = uVar26;
          puVar5[0xd] = puVar6[0xd];
        }
        else {
          uVar26 = puVar6[9];
          puVar5[10] = puVar6[10];
          puVar5[9] = uVar26;
          uVar26 = puVar6[0xc];
          uVar28 = puVar6[0xd];
          puVar5[0xb] = lVar17;
          puVar5[0xc] = uVar26;
          puVar5[0xd] = uVar28;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar28);
        }
        puVar5[0xe] = puVar6[0xe];
        puVar5[0xf] = lVar24;
        _swift_bridgeObjectRetain(lVar24);
      }
      *(undefined2 *)(puVar5 + 0x10) = *(undefined2 *)(puVar6 + 0x10);
      uVar26 = puVar6[0x11];
      puVar5[0x12] = puVar6[0x12];
      puVar5[0x11] = uVar26;
      puVar5[0x13] = puVar6[0x13];
      *(undefined1 *)(puVar5 + 0x14) = *(undefined1 *)(puVar6 + 0x14);
      _swift_bridgeObjectRetain();
    }
    *(undefined4 *)((long)puVar3 + (long)*(int *)(lVar16 + 0x8c)) =
         *(undefined4 *)((long)puVar4 + (long)*(int *)(lVar16 + 0x8c));
    *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar16 + 0x90)) =
         *(undefined1 *)((long)puVar4 + (long)*(int *)(lVar16 + 0x90));
    puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar16 + 0x94));
    puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar16 + 0x94));
    uVar26 = *puVar6;
    uVar31 = puVar6[3];
    uVar28 = puVar6[2];
    puVar5[1] = puVar6[1];
    *puVar5 = uVar26;
    puVar5[3] = uVar31;
    puVar5[2] = uVar28;
    uVar26 = puVar6[4];
    uVar31 = puVar6[7];
    uVar28 = puVar6[6];
    puVar5[5] = puVar6[5];
    puVar5[4] = uVar26;
    puVar5[7] = uVar31;
    puVar5[6] = uVar28;
    uVar31 = puVar6[0xc];
    uVar28 = puVar6[0xf];
    uVar26 = puVar6[0xe];
    puVar5[0xd] = puVar6[0xd];
    puVar5[0xc] = uVar31;
    puVar5[0xf] = uVar28;
    puVar5[0xe] = uVar26;
    uVar31 = puVar6[8];
    uVar28 = puVar6[0xb];
    uVar26 = puVar6[10];
    puVar5[9] = puVar6[9];
    puVar5[8] = uVar31;
    puVar5[0xb] = uVar28;
    puVar5[10] = uVar26;
    uVar26 = *(undefined8 *)((long)puVar6 + 0xa9);
    *(undefined8 *)((long)puVar5 + 0xb1) = *(undefined8 *)((long)puVar6 + 0xb1);
    *(undefined8 *)((long)puVar5 + 0xa9) = uVar26;
    uVar26 = puVar6[0x12];
    uVar31 = puVar6[0x15];
    uVar28 = puVar6[0x14];
    puVar5[0x13] = puVar6[0x13];
    puVar5[0x12] = uVar26;
    puVar5[0x15] = uVar31;
    puVar5[0x14] = uVar28;
    uVar26 = puVar6[0x10];
    puVar5[0x11] = puVar6[0x11];
    puVar5[0x10] = uVar26;
    *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar16 + 0x98)) =
         *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar16 + 0x98));
    *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar16 + 0x9c)) =
         *(undefined1 *)((long)puVar4 + (long)*(int *)(lVar16 + 0x9c));
    *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar16 + 0xa0)) =
         *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar16 + 0xa0));
    *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar16 + 0xa4)) =
         *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar16 + 0xa4));
    *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar16 + 0xa8)) =
         *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar16 + 0xa8));
    puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar16 + 0xac));
    puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar16 + 0xac));
    lVar24 = puVar6[1];
    if (lVar24 == 0) {
      uVar26 = *puVar6;
      uVar31 = puVar6[3];
      uVar28 = puVar6[2];
      puVar5[1] = puVar6[1];
      *puVar5 = uVar26;
      puVar5[3] = uVar31;
      puVar5[2] = uVar28;
    }
    else {
      *puVar5 = *puVar6;
      puVar5[1] = lVar24;
      uVar26 = puVar6[3];
      puVar5[2] = puVar6[2];
      puVar5[3] = uVar26;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar26);
    }
    *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar16 + 0xb0)) =
         *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar16 + 0xb0));
    *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar16 + 0xb4)) =
         *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar16 + 0xb4));
    puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar16 + 0xb8));
    puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar16 + 0xb8));
    lVar24 = puVar6[1];
    if (lVar24 == 0) {
      uVar26 = puVar6[0x10];
      uVar31 = puVar6[0x13];
      uVar28 = puVar6[0x12];
      puVar5[0x11] = puVar6[0x11];
      puVar5[0x10] = uVar26;
      puVar5[0x13] = uVar31;
      puVar5[0x12] = uVar28;
      *(undefined1 *)(puVar5 + 0x14) = *(undefined1 *)(puVar6 + 0x14);
      uVar26 = puVar6[8];
      uVar31 = puVar6[0xb];
      uVar28 = puVar6[10];
      puVar5[9] = puVar6[9];
      puVar5[8] = uVar26;
      puVar5[0xb] = uVar31;
      puVar5[10] = uVar28;
      uVar31 = puVar6[0xc];
      uVar28 = puVar6[0xf];
      uVar26 = puVar6[0xe];
      puVar5[0xd] = puVar6[0xd];
      puVar5[0xc] = uVar31;
      puVar5[0xf] = uVar28;
      puVar5[0xe] = uVar26;
      uVar26 = *puVar6;
      uVar31 = puVar6[3];
      uVar28 = puVar6[2];
      puVar5[1] = puVar6[1];
      *puVar5 = uVar26;
      puVar5[3] = uVar31;
      puVar5[2] = uVar28;
      uVar31 = puVar6[4];
      uVar28 = puVar6[7];
      uVar26 = puVar6[6];
      puVar5[5] = puVar6[5];
      puVar5[4] = uVar31;
      puVar5[7] = uVar28;
      puVar5[6] = uVar26;
    }
    else {
      *puVar5 = *puVar6;
      puVar5[1] = lVar24;
      lVar24 = puVar6[8];
      _swift_bridgeObjectRetain();
      if (lVar24 == 1) {
        uVar26 = puVar6[2];
        uVar31 = puVar6[5];
        uVar28 = puVar6[4];
        puVar5[3] = puVar6[3];
        puVar5[2] = uVar26;
        puVar5[5] = uVar31;
        puVar5[4] = uVar28;
        uVar26 = puVar6[6];
        puVar5[7] = puVar6[7];
        puVar5[6] = uVar26;
        puVar5[8] = puVar6[8];
      }
      else {
        lVar17 = puVar6[4];
        if (lVar17 == 1) {
          uVar26 = puVar6[2];
          uVar31 = puVar6[5];
          uVar28 = puVar6[4];
          puVar5[3] = puVar6[3];
          puVar5[2] = uVar26;
          puVar5[5] = uVar31;
          puVar5[4] = uVar28;
          puVar5[6] = puVar6[6];
        }
        else {
          uVar26 = puVar6[2];
          puVar5[3] = puVar6[3];
          puVar5[2] = uVar26;
          uVar26 = puVar6[5];
          uVar28 = puVar6[6];
          puVar5[4] = lVar17;
          puVar5[5] = uVar26;
          puVar5[6] = uVar28;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar28);
        }
        puVar5[7] = puVar6[7];
        puVar5[8] = lVar24;
        _swift_bridgeObjectRetain(lVar24);
      }
      lVar24 = puVar6[0xf];
      if (lVar24 == 1) {
        uVar26 = puVar6[9];
        puVar5[10] = puVar6[10];
        puVar5[9] = uVar26;
        uVar26 = puVar6[0xb];
        puVar5[0xc] = puVar6[0xc];
        puVar5[0xb] = uVar26;
        uVar26 = puVar6[0xd];
        puVar5[0xe] = puVar6[0xe];
        puVar5[0xd] = uVar26;
        puVar5[0xf] = puVar6[0xf];
      }
      else {
        lVar17 = puVar6[0xb];
        if (lVar17 == 1) {
          uVar26 = puVar6[9];
          puVar5[10] = puVar6[10];
          puVar5[9] = uVar26;
          uVar26 = puVar6[0xb];
          puVar5[0xc] = puVar6[0xc];
          puVar5[0xb] = uVar26;
          puVar5[0xd] = puVar6[0xd];
        }
        else {
          uVar26 = puVar6[9];
          puVar5[10] = puVar6[10];
          puVar5[9] = uVar26;
          uVar26 = puVar6[0xc];
          uVar28 = puVar6[0xd];
          puVar5[0xb] = lVar17;
          puVar5[0xc] = uVar26;
          puVar5[0xd] = uVar28;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar28);
        }
        puVar5[0xe] = puVar6[0xe];
        puVar5[0xf] = lVar24;
        _swift_bridgeObjectRetain(lVar24);
      }
      *(undefined2 *)(puVar5 + 0x10) = *(undefined2 *)(puVar6 + 0x10);
      uVar26 = puVar6[0x11];
      puVar5[0x12] = puVar6[0x12];
      puVar5[0x11] = uVar26;
      puVar5[0x13] = puVar6[0x13];
      *(undefined1 *)(puVar5 + 0x14) = *(undefined1 *)(puVar6 + 0x14);
      _swift_bridgeObjectRetain();
    }
    puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar16 + 0xbc));
    puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar16 + 0xbc));
    lVar24 = puVar6[1];
    if (lVar24 == 0) {
      uVar26 = puVar6[0x10];
      uVar31 = puVar6[0x13];
      uVar28 = puVar6[0x12];
      puVar5[0x11] = puVar6[0x11];
      puVar5[0x10] = uVar26;
      puVar5[0x13] = uVar31;
      puVar5[0x12] = uVar28;
      *(undefined1 *)(puVar5 + 0x14) = *(undefined1 *)(puVar6 + 0x14);
      uVar26 = puVar6[8];
      uVar31 = puVar6[0xb];
      uVar28 = puVar6[10];
      puVar5[9] = puVar6[9];
      puVar5[8] = uVar26;
      puVar5[0xb] = uVar31;
      puVar5[10] = uVar28;
      uVar31 = puVar6[0xc];
      uVar28 = puVar6[0xf];
      uVar26 = puVar6[0xe];
      puVar5[0xd] = puVar6[0xd];
      puVar5[0xc] = uVar31;
      puVar5[0xf] = uVar28;
      puVar5[0xe] = uVar26;
      uVar26 = *puVar6;
      uVar31 = puVar6[3];
      uVar28 = puVar6[2];
      puVar5[1] = puVar6[1];
      *puVar5 = uVar26;
      puVar5[3] = uVar31;
      puVar5[2] = uVar28;
      uVar31 = puVar6[4];
      uVar28 = puVar6[7];
      uVar26 = puVar6[6];
      puVar5[5] = puVar6[5];
      puVar5[4] = uVar31;
      puVar5[7] = uVar28;
      puVar5[6] = uVar26;
    }
    else {
      *puVar5 = *puVar6;
      puVar5[1] = lVar24;
      lVar24 = puVar6[8];
      _swift_bridgeObjectRetain();
      if (lVar24 == 1) {
        uVar26 = puVar6[2];
        uVar31 = puVar6[5];
        uVar28 = puVar6[4];
        puVar5[3] = puVar6[3];
        puVar5[2] = uVar26;
        puVar5[5] = uVar31;
        puVar5[4] = uVar28;
        uVar26 = puVar6[6];
        puVar5[7] = puVar6[7];
        puVar5[6] = uVar26;
        puVar5[8] = puVar6[8];
      }
      else {
        lVar17 = puVar6[4];
        if (lVar17 == 1) {
          uVar26 = puVar6[2];
          uVar31 = puVar6[5];
          uVar28 = puVar6[4];
          puVar5[3] = puVar6[3];
          puVar5[2] = uVar26;
          puVar5[5] = uVar31;
          puVar5[4] = uVar28;
          puVar5[6] = puVar6[6];
        }
        else {
          uVar26 = puVar6[2];
          puVar5[3] = puVar6[3];
          puVar5[2] = uVar26;
          uVar26 = puVar6[5];
          uVar28 = puVar6[6];
          puVar5[4] = lVar17;
          puVar5[5] = uVar26;
          puVar5[6] = uVar28;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar28);
        }
        puVar5[7] = puVar6[7];
        puVar5[8] = lVar24;
        _swift_bridgeObjectRetain(lVar24);
      }
      lVar24 = puVar6[0xf];
      if (lVar24 == 1) {
        uVar26 = puVar6[9];
        puVar5[10] = puVar6[10];
        puVar5[9] = uVar26;
        uVar26 = puVar6[0xb];
        puVar5[0xc] = puVar6[0xc];
        puVar5[0xb] = uVar26;
        uVar26 = puVar6[0xd];
        puVar5[0xe] = puVar6[0xe];
        puVar5[0xd] = uVar26;
        puVar5[0xf] = puVar6[0xf];
      }
      else {
        lVar17 = puVar6[0xb];
        if (lVar17 == 1) {
          uVar26 = puVar6[9];
          puVar5[10] = puVar6[10];
          puVar5[9] = uVar26;
          uVar26 = puVar6[0xb];
          puVar5[0xc] = puVar6[0xc];
          puVar5[0xb] = uVar26;
          puVar5[0xd] = puVar6[0xd];
        }
        else {
          uVar26 = puVar6[9];
          puVar5[10] = puVar6[10];
          puVar5[9] = uVar26;
          uVar26 = puVar6[0xc];
          uVar28 = puVar6[0xd];
          puVar5[0xb] = lVar17;
          puVar5[0xc] = uVar26;
          puVar5[0xd] = uVar28;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar28);
        }
        puVar5[0xe] = puVar6[0xe];
        puVar5[0xf] = lVar24;
        _swift_bridgeObjectRetain(lVar24);
      }
      *(undefined2 *)(puVar5 + 0x10) = *(undefined2 *)(puVar6 + 0x10);
      uVar26 = puVar6[0x11];
      puVar5[0x12] = puVar6[0x12];
      puVar5[0x11] = uVar26;
      puVar5[0x13] = puVar6[0x13];
      *(undefined1 *)(puVar5 + 0x14) = *(undefined1 *)(puVar6 + 0x14);
      _swift_bridgeObjectRetain();
    }
    *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar16 + 0xc0)) =
         *(undefined1 *)((long)puVar4 + (long)*(int *)(lVar16 + 0xc0));
    *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar16 + 0xc4)) =
         *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar16 + 0xc4));
    *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar16 + 200)) =
         *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar16 + 200));
    *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar16 + 0xcc)) =
         *(undefined1 *)((long)puVar4 + (long)*(int *)(lVar16 + 0xcc));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar15 + 0x1c)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar15 + 0x1c));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar15 + 0x20)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar15 + 0x20));
  }
  else {
    lVar24 = *param_2;
    *param_1 = lVar24;
    uVar25 = (ulong)uVar14 & 0xff;
    param_1 = (long *)(lVar24 + (uVar25 + 0x10 & (uVar25 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 1042eec5c; end: 1042ef1af;  */

void FUN_1042eec5c(long param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  param_1 = param_1 + *(int *)(param_2 + 0x24);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  lVar3 = 0;
  func_0x0001042e75b8();
  param_1 = param_1 + *(int *)(lVar3 + 0x18);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x30));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x40));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x50));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x60));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x70));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x80));
  lVar4 = 0;
  func_0x000100b91d00();
  iVar2 = *(int *)(lVar4 + 0x3c);
  lVar5 = 0;
  __s10Foundation4UUIDVMa();
  lVar8 = *(long *)(lVar5 + -8);
  pcVar9 = *(code **)(lVar8 + 0x30);
  lVar3 = param_1 + iVar2;
  (*pcVar9)(lVar3,1,lVar5);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar8 + 8))(param_1 + iVar2,lVar5);
  }
  iVar2 = *(int *)(lVar4 + 0x40);
  lVar3 = param_1 + iVar2;
  (*pcVar9)(lVar3,1,lVar5);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar8 + 8))(param_1 + iVar2,lVar5);
  }
  iVar2 = *(int *)(lVar4 + 0x44);
  lVar3 = param_1 + iVar2;
  (*pcVar9)(lVar3,1,lVar5);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar8 + 8))(param_1 + iVar2,lVar5);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar4 + 0x4c)));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar4 + 0x50)));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar4 + 0x54)));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar4 + 0x58)));
  lVar3 = param_1 + *(int *)(lVar4 + 0x5c);
  if (*(long *)(lVar3 + 8) != 1) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x18));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x28));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x38));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x48));
    if (*(long *)(lVar3 + 0x90) != 0) {
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x70));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x80));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x90));
    }
  }
  if (*(long *)(param_1 + *(int *)(lVar4 + 100) + 8) != 1) {
    _swift_bridgeObjectRelease();
  }
  lVar3 = param_1 + *(int *)(lVar4 + 0x68);
  if (*(long *)(lVar3 + 0x138) != 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x10));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x20));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x38));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x58));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x60));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x90));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0xa0));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0xb0));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0xc0));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0xd0));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0xe8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x100));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x110));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x120));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x130));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x138));
  }
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x6c));
  if ((ulong)puVar1[1] >> 0x3c < 0xf) {
    func_0x00010006c090(*puVar1);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar4 + 0x74) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar4 + 0x78) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar4 + 0x7c) + 8));
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x80));
  if ((ulong)puVar1[1] >> 0x3c < 0xf) {
    func_0x00010006c090(*puVar1);
  }
  lVar3 = param_1 + *(int *)(lVar4 + 0x84);
  lVar6 = 0;
  func_0x000100b91fbc();
  lVar7 = lVar3;
  (**(code **)(*(long *)(lVar6 + -8) + 0x30))(lVar3,1,lVar6);
  if ((int)lVar7 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x30));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x40));
    iVar2 = *(int *)(lVar6 + 0x28);
    lVar7 = lVar3 + iVar2;
    (*pcVar9)(lVar7,1,lVar5);
    if ((int)lVar7 == 0) {
      (**(code **)(lVar8 + 8))(lVar3 + iVar2,lVar5);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + *(int *)(lVar6 + 0x2c) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + *(int *)(lVar6 + 0x30) + 8));
    iVar2 = *(int *)(lVar6 + 0x34);
    lVar7 = lVar3 + iVar2;
    (*pcVar9)(lVar7,1,lVar5);
    if ((int)lVar7 == 0) {
      (**(code **)(lVar8 + 8))(lVar3 + iVar2,lVar5);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + *(int *)(lVar6 + 0x38) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + *(int *)(lVar6 + 0x3c) + 8));
  }
  lVar3 = param_1 + *(int *)(lVar4 + 0x88);
  if (*(long *)(lVar3 + 8) != 0) {
    _swift_bridgeObjectRelease();
    lVar5 = *(long *)(lVar3 + 0x40);
    if (lVar5 != 1) {
      if (*(long *)(lVar3 + 0x20) != 1) {
        _swift_bridgeObjectRelease(*(long *)(lVar3 + 0x20));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x30));
        lVar5 = *(long *)(lVar3 + 0x40);
      }
      _swift_bridgeObjectRelease(lVar5);
    }
    lVar5 = *(long *)(lVar3 + 0x78);
    if (lVar5 != 1) {
      if (*(long *)(lVar3 + 0x58) != 1) {
        _swift_bridgeObjectRelease(*(long *)(lVar3 + 0x58));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x68));
        lVar5 = *(long *)(lVar3 + 0x78);
      }
      _swift_bridgeObjectRelease(lVar5);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x98));
  }
  lVar3 = param_1 + *(int *)(lVar4 + 0xac);
  if (*(long *)(lVar3 + 8) != 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x18));
  }
  lVar3 = param_1 + *(int *)(lVar4 + 0xb8);
  if (*(long *)(lVar3 + 8) != 0) {
    _swift_bridgeObjectRelease();
    lVar5 = *(long *)(lVar3 + 0x40);
    if (lVar5 != 1) {
      if (*(long *)(lVar3 + 0x20) != 1) {
        _swift_bridgeObjectRelease(*(long *)(lVar3 + 0x20));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x30));
        lVar5 = *(long *)(lVar3 + 0x40);
      }
      _swift_bridgeObjectRelease(lVar5);
    }
    lVar5 = *(long *)(lVar3 + 0x78);
    if (lVar5 != 1) {
      if (*(long *)(lVar3 + 0x58) != 1) {
        _swift_bridgeObjectRelease(*(long *)(lVar3 + 0x58));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x68));
        lVar5 = *(long *)(lVar3 + 0x78);
      }
      _swift_bridgeObjectRelease(lVar5);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x98));
  }
  param_1 = param_1 + *(int *)(lVar4 + 0xbc);
  if (*(long *)(param_1 + 8) != 0) {
    _swift_bridgeObjectRelease();
    lVar3 = *(long *)(param_1 + 0x40);
    if (lVar3 != 1) {
      if (*(long *)(param_1 + 0x20) != 1) {
        _swift_bridgeObjectRelease(*(long *)(param_1 + 0x20));
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x30));
        lVar3 = *(long *)(param_1 + 0x40);
      }
      _swift_bridgeObjectRelease(lVar3);
    }
    lVar3 = *(long *)(param_1 + 0x78);
    if (lVar3 != 1) {
      if (*(long *)(param_1 + 0x58) != 1) {
        _swift_bridgeObjectRelease(*(long *)(param_1 + 0x58));
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x68));
        lVar3 = *(long *)(param_1 + 0x78);
      }
      _swift_bridgeObjectRelease(lVar3);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x98));
    return;
  }
  return;
}



/* Entry: 1042ef1b0; end: 1042f42fb;  */

undefined8 * FUN_1042ef1b0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  ulong uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  code *pcVar27;
  undefined8 uVar28;
  long lVar29;
  long lVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  
  uVar7 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar7;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar16 = param_2[3];
  param_1[3] = uVar16;
  uVar23 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar23;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  uVar8 = param_2[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar8;
  uVar33 = param_2[3];
  puVar1[2] = param_2[2];
  puVar1[3] = uVar33;
  lVar11 = 0;
  func_0x0001042e75b8();
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x18));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x18));
  uVar23 = *puVar3;
  uVar28 = puVar3[3];
  uVar25 = puVar3[2];
  puVar2[1] = puVar3[1];
  *puVar2 = uVar23;
  puVar2[3] = uVar28;
  puVar2[2] = uVar25;
  uVar23 = puVar3[4];
  puVar2[5] = puVar3[5];
  puVar2[4] = uVar23;
  uVar23 = puVar3[6];
  uVar25 = puVar3[7];
  puVar2[6] = uVar23;
  puVar2[7] = uVar25;
  uVar25 = puVar3[8];
  uVar28 = puVar3[9];
  puVar2[8] = uVar25;
  puVar2[9] = uVar28;
  uVar28 = puVar3[10];
  uVar9 = puVar3[0xb];
  puVar2[10] = uVar28;
  puVar2[0xb] = uVar9;
  uVar9 = puVar3[0xc];
  uVar32 = puVar3[0xd];
  puVar2[0xc] = uVar9;
  puVar2[0xd] = uVar32;
  uVar32 = puVar3[0xe];
  uVar24 = puVar3[0xf];
  puVar2[0xe] = uVar32;
  puVar2[0xf] = uVar24;
  uVar24 = puVar3[0x10];
  puVar2[0x10] = uVar24;
  lVar12 = 0;
  func_0x000100b91d00();
  lVar29 = (long)*(int *)(lVar12 + 0x3c);
  lVar13 = 0;
  __s10Foundation4UUIDVMa();
  lVar17 = *(long *)(lVar13 + -8);
  pcVar27 = *(code **)(lVar17 + 0x30);
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar16);
  _swift_bridgeObjectRetain(uVar8);
  _swift_bridgeObjectRetain(uVar33);
  _swift_bridgeObjectRetain(uVar23);
  _swift_bridgeObjectRetain(uVar25);
  _swift_bridgeObjectRetain(uVar28);
  _swift_bridgeObjectRetain(uVar9);
  _swift_bridgeObjectRetain(uVar32);
  _swift_bridgeObjectRetain(uVar24);
  lVar21 = (long)puVar3 + lVar29;
  (*pcVar27)(lVar21,1,lVar13);
  if ((int)lVar21 == 0) {
    (**(code **)(lVar17 + 0x10))((long)puVar2 + lVar29,(long)puVar3 + lVar29,lVar13);
    (**(code **)(lVar17 + 0x38))((long)puVar2 + lVar29,0,1,lVar13);
  }
  else {
    lVar21 = 0x112d3bc20;
    func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
    _memcpy((long)puVar2 + lVar29,(long)puVar3 + lVar29,
            *(undefined8 *)(*(long *)(lVar21 + -8) + 0x40));
  }
  lVar29 = (long)*(int *)(lVar12 + 0x40);
  lVar21 = (long)puVar3 + lVar29;
  (*pcVar27)(lVar21,1,lVar13);
  if ((int)lVar21 == 0) {
    (**(code **)(lVar17 + 0x10))((long)puVar2 + lVar29,(long)puVar3 + lVar29,lVar13);
    (**(code **)(lVar17 + 0x38))((long)puVar2 + lVar29,0,1,lVar13);
  }
  else {
    lVar21 = 0x112d3bc20;
    func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
    _memcpy((long)puVar2 + lVar29,(long)puVar3 + lVar29,
            *(undefined8 *)(*(long *)(lVar21 + -8) + 0x40));
  }
  lVar29 = (long)*(int *)(lVar12 + 0x44);
  lVar21 = (long)puVar3 + lVar29;
  (*pcVar27)(lVar21,1,lVar13);
  if ((int)lVar21 == 0) {
    (**(code **)(lVar17 + 0x10))((long)puVar2 + lVar29,(long)puVar3 + lVar29,lVar13);
    (**(code **)(lVar17 + 0x38))((long)puVar2 + lVar29,0,1,lVar13);
  }
  else {
    lVar21 = 0x112d3bc20;
    func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
    _memcpy((long)puVar2 + lVar29,(long)puVar3 + lVar29,
            *(undefined8 *)(*(long *)(lVar21 + -8) + 0x40));
  }
  *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x48)) =
       *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar12 + 0x48));
  *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x4c)) =
       *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar12 + 0x4c));
  uVar23 = *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar12 + 0x50));
  *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x50)) = uVar23;
  uVar25 = *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar12 + 0x54));
  *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x54)) = uVar25;
  uVar28 = *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar12 + 0x58));
  *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x58)) = uVar28;
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x5c));
  puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar12 + 0x5c));
  lVar21 = puVar5[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar23);
  _swift_bridgeObjectRetain(uVar25);
  _swift_bridgeObjectRetain(uVar28);
  if (lVar21 == 1) {
    uVar23 = puVar5[0xc];
    uVar28 = puVar5[0xf];
    uVar25 = puVar5[0xe];
    puVar4[0xd] = puVar5[0xd];
    puVar4[0xc] = uVar23;
    puVar4[0xf] = uVar28;
    puVar4[0xe] = uVar25;
    uVar23 = puVar5[0x10];
    uVar28 = puVar5[0x13];
    uVar25 = puVar5[0x12];
    puVar4[0x11] = puVar5[0x11];
    puVar4[0x10] = uVar23;
    puVar4[0x13] = uVar28;
    puVar4[0x12] = uVar25;
    uVar23 = puVar5[4];
    uVar28 = puVar5[7];
    uVar25 = puVar5[6];
    puVar4[5] = puVar5[5];
    puVar4[4] = uVar23;
    puVar4[7] = uVar28;
    puVar4[6] = uVar25;
    uVar23 = puVar5[8];
    uVar28 = puVar5[0xb];
    uVar25 = puVar5[10];
    puVar4[9] = puVar5[9];
    puVar4[8] = uVar23;
    puVar4[0xb] = uVar28;
    puVar4[10] = uVar25;
    uVar23 = *puVar5;
    uVar28 = puVar5[3];
    uVar25 = puVar5[2];
    puVar4[1] = puVar5[1];
    *puVar4 = uVar23;
    puVar4[3] = uVar28;
    puVar4[2] = uVar25;
  }
  else {
    *puVar4 = *puVar5;
    puVar4[1] = lVar21;
    uVar23 = puVar5[3];
    puVar4[2] = puVar5[2];
    puVar4[3] = uVar23;
    uVar25 = puVar5[5];
    puVar4[4] = puVar5[4];
    puVar4[5] = uVar25;
    uVar28 = puVar5[7];
    puVar4[6] = puVar5[6];
    puVar4[7] = uVar28;
    uVar9 = puVar5[9];
    puVar4[8] = puVar5[8];
    puVar4[9] = uVar9;
    *(undefined1 *)(puVar4 + 10) = *(undefined1 *)(puVar5 + 10);
    uVar32 = puVar5[0xb];
    puVar4[0xc] = puVar5[0xc];
    puVar4[0xb] = uVar32;
    lVar29 = puVar5[0x12];
    _swift_bridgeObjectRetain(lVar21);
    _swift_bridgeObjectRetain(uVar23);
    _swift_bridgeObjectRetain(uVar25);
    _swift_bridgeObjectRetain(uVar28);
    _swift_bridgeObjectRetain(uVar9);
    if (lVar29 == 0) {
      uVar23 = puVar5[0xd];
      puVar4[0xe] = puVar5[0xe];
      puVar4[0xd] = uVar23;
      uVar23 = puVar5[0xf];
      puVar4[0x10] = puVar5[0x10];
      puVar4[0xf] = uVar23;
      uVar23 = puVar5[0x11];
      puVar4[0x12] = puVar5[0x12];
      puVar4[0x11] = uVar23;
      puVar4[0x13] = puVar5[0x13];
    }
    else {
      uVar23 = puVar5[0xe];
      puVar4[0xd] = puVar5[0xd];
      puVar4[0xe] = uVar23;
      uVar23 = puVar5[0x10];
      puVar4[0xf] = puVar5[0xf];
      puVar4[0x10] = uVar23;
      puVar4[0x11] = puVar5[0x11];
      puVar4[0x12] = lVar29;
      puVar4[0x13] = puVar5[0x13];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar23);
      _swift_bridgeObjectRetain(lVar29);
    }
  }
  *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x60)) =
       *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar12 + 0x60));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 100));
  puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar12 + 100));
  lVar21 = puVar5[1];
  if (lVar21 == 1) {
    uVar23 = *puVar5;
    uVar28 = puVar5[3];
    uVar25 = puVar5[2];
    puVar4[1] = puVar5[1];
    *puVar4 = uVar23;
    puVar4[3] = uVar28;
    puVar4[2] = uVar25;
    puVar4[4] = puVar5[4];
  }
  else {
    *puVar4 = *puVar5;
    puVar4[1] = lVar21;
    puVar4[2] = puVar5[2];
    *(undefined1 *)(puVar4 + 3) = *(undefined1 *)(puVar5 + 3);
    *(undefined2 *)((long)puVar4 + 0x19) = *(undefined2 *)((long)puVar5 + 0x19);
    puVar4[4] = puVar5[4];
    _swift_bridgeObjectRetain();
  }
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x68));
  puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar12 + 0x68));
  if (puVar5[0x27] == 0) {
    _memcpy(puVar4,puVar5,0x160);
  }
  else {
    uVar23 = *puVar5;
    puVar4[1] = puVar5[1];
    *puVar4 = uVar23;
    uVar23 = puVar5[2];
    uVar25 = puVar5[3];
    puVar4[2] = uVar23;
    puVar4[3] = uVar25;
    uVar18 = puVar5[4];
    puVar4[4] = uVar18;
    uVar25 = puVar5[5];
    puVar4[6] = puVar5[6];
    puVar4[5] = uVar25;
    uVar20 = puVar5[7];
    uVar25 = puVar5[8];
    puVar4[7] = uVar20;
    puVar4[8] = uVar25;
    *(undefined2 *)(puVar4 + 9) = *(undefined2 *)(puVar5 + 9);
    *(undefined1 *)((long)puVar4 + 0x4a) = *(undefined1 *)((long)puVar5 + 0x4a);
    uVar25 = puVar5[0xb];
    puVar4[10] = puVar5[10];
    puVar4[0xb] = uVar25;
    uVar19 = puVar5[0xc];
    puVar4[0xc] = uVar19;
    *(undefined1 *)(puVar4 + 0xd) = *(undefined1 *)(puVar5 + 0xd);
    uVar28 = puVar5[0xe];
    puVar4[0xf] = puVar5[0xf];
    puVar4[0xe] = uVar28;
    *(undefined1 *)(puVar4 + 0x10) = *(undefined1 *)(puVar5 + 0x10);
    uVar28 = puVar5[0x12];
    puVar4[0x11] = puVar5[0x11];
    puVar4[0x12] = uVar28;
    uVar9 = puVar5[0x14];
    puVar4[0x13] = puVar5[0x13];
    puVar4[0x14] = uVar9;
    uVar32 = puVar5[0x16];
    puVar4[0x15] = puVar5[0x15];
    puVar4[0x16] = uVar32;
    uVar7 = puVar5[0x18];
    puVar4[0x17] = puVar5[0x17];
    puVar4[0x18] = uVar7;
    uVar8 = puVar5[0x1a];
    puVar4[0x19] = puVar5[0x19];
    puVar4[0x1a] = uVar8;
    uVar33 = puVar5[0x1b];
    puVar4[0x1c] = puVar5[0x1c];
    puVar4[0x1b] = uVar33;
    uVar26 = puVar5[0x1d];
    puVar4[0x1d] = uVar26;
    *(undefined1 *)(puVar4 + 0x1e) = *(undefined1 *)(puVar5 + 0x1e);
    *(undefined1 *)((long)puVar4 + 0xf1) = *(undefined1 *)((long)puVar5 + 0xf1);
    *(undefined1 *)((long)puVar4 + 0xf2) = *(undefined1 *)((long)puVar5 + 0xf2);
    uVar33 = puVar5[0x20];
    puVar4[0x1f] = puVar5[0x1f];
    puVar4[0x20] = uVar33;
    uVar24 = puVar5[0x22];
    puVar4[0x21] = puVar5[0x21];
    puVar4[0x22] = uVar24;
    uVar16 = puVar5[0x24];
    puVar4[0x23] = puVar5[0x23];
    puVar4[0x24] = uVar16;
    uVar10 = puVar5[0x26];
    puVar4[0x25] = puVar5[0x25];
    puVar4[0x26] = uVar10;
    uVar31 = puVar5[0x27];
    puVar4[0x27] = uVar31;
    uVar34 = puVar5[0x28];
    puVar4[0x29] = puVar5[0x29];
    puVar4[0x28] = uVar34;
    uVar34 = puVar5[0x2b];
    puVar4[0x2a] = puVar5[0x2a];
    puVar4[0x2b] = uVar34;
    _swift_bridgeObjectRetain(uVar23);
    _swift_bridgeObjectRetain(uVar18);
    _swift_bridgeObjectRetain(uVar20);
    _swift_bridgeObjectRetain(uVar25);
    _swift_bridgeObjectRetain(uVar19);
    _swift_bridgeObjectRetain(uVar28);
    _swift_bridgeObjectRetain(uVar9);
    _swift_bridgeObjectRetain(uVar32);
    _swift_bridgeObjectRetain(uVar7);
    _swift_bridgeObjectRetain(uVar8);
    _swift_bridgeObjectRetain(uVar26);
    _swift_bridgeObjectRetain(uVar33);
    _swift_bridgeObjectRetain(uVar24);
    _swift_bridgeObjectRetain(uVar16);
    _swift_bridgeObjectRetain(uVar10);
    _swift_bridgeObjectRetain(uVar31);
  }
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x6c));
  puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar12 + 0x6c));
  uVar22 = puVar5[1];
  if (uVar22 >> 0x3c < 0xf) {
    uVar23 = *puVar5;
    func_0x00010006c00c(uVar23,uVar22);
    *puVar4 = uVar23;
    puVar4[1] = uVar22;
  }
  else {
    uVar23 = *puVar5;
    puVar4[1] = puVar5[1];
    *puVar4 = uVar23;
  }
  *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x70)) =
       *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar12 + 0x70));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x74));
  puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar12 + 0x74));
  uVar23 = puVar5[1];
  *puVar4 = *puVar5;
  puVar4[1] = uVar23;
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x78));
  puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar12 + 0x78));
  uVar23 = puVar5[1];
  *puVar4 = *puVar5;
  puVar4[1] = uVar23;
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x7c));
  puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar12 + 0x7c));
  uVar25 = puVar5[1];
  *puVar4 = *puVar5;
  puVar4[1] = uVar25;
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x80));
  puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar12 + 0x80));
  uVar22 = puVar5[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar23);
  _swift_bridgeObjectRetain(uVar25);
  if (uVar22 >> 0x3c < 0xf) {
    uVar23 = *puVar5;
    func_0x00010006c00c(uVar23,uVar22);
    *puVar4 = uVar23;
    puVar4[1] = uVar22;
  }
  else {
    uVar23 = *puVar5;
    puVar4[1] = puVar5[1];
    *puVar4 = uVar23;
  }
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x84));
  puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar12 + 0x84));
  lVar21 = 0;
  func_0x000100b91fbc();
  lVar29 = *(long *)(lVar21 + -8);
  puVar14 = puVar5;
  (**(code **)(lVar29 + 0x30))(puVar5,1,lVar21);
  if ((int)puVar14 == 0) {
    uVar23 = puVar5[1];
    *puVar4 = *puVar5;
    puVar4[1] = uVar23;
    uVar23 = puVar5[2];
    uVar28 = puVar5[5];
    uVar25 = puVar5[4];
    puVar4[3] = puVar5[3];
    puVar4[2] = uVar23;
    puVar4[5] = uVar28;
    puVar4[4] = uVar25;
    uVar23 = puVar5[6];
    uVar25 = puVar5[7];
    puVar4[6] = uVar23;
    puVar4[7] = uVar25;
    uVar25 = puVar5[8];
    puVar4[8] = uVar25;
    lVar30 = (long)*(int *)(lVar21 + 0x28);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar23);
    _swift_bridgeObjectRetain(uVar25);
    lVar15 = (long)puVar5 + lVar30;
    (*pcVar27)(lVar15,1,lVar13);
    if ((int)lVar15 == 0) {
      (**(code **)(lVar17 + 0x10))((long)puVar4 + lVar30,(long)puVar5 + lVar30,lVar13);
      (**(code **)(lVar17 + 0x38))((long)puVar4 + lVar30,0,1,lVar13);
    }
    else {
      lVar15 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)puVar4 + lVar30,(long)puVar5 + lVar30,
              *(undefined8 *)(*(long *)(lVar15 + -8) + 0x40));
    }
    puVar14 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar21 + 0x2c));
    puVar6 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar21 + 0x2c));
    uVar23 = puVar6[1];
    *puVar14 = *puVar6;
    puVar14[1] = uVar23;
    puVar14 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar21 + 0x30));
    puVar6 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar21 + 0x30));
    uVar23 = puVar6[1];
    *puVar14 = *puVar6;
    puVar14[1] = uVar23;
    lVar30 = (long)*(int *)(lVar21 + 0x34);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar23);
    lVar15 = (long)puVar5 + lVar30;
    (*pcVar27)(lVar15,1,lVar13);
    if ((int)lVar15 == 0) {
      (**(code **)(lVar17 + 0x10))((long)puVar4 + lVar30,(long)puVar5 + lVar30,lVar13);
      (**(code **)(lVar17 + 0x38))((long)puVar4 + lVar30,0,1,lVar13);
    }
    else {
      lVar13 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)puVar4 + lVar30,(long)puVar5 + lVar30,
              *(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
    }
    puVar14 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar21 + 0x38));
    puVar6 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar21 + 0x38));
    uVar23 = puVar6[1];
    *puVar14 = *puVar6;
    puVar14[1] = uVar23;
    puVar14 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar21 + 0x3c));
    puVar5 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar21 + 0x3c));
    uVar23 = puVar5[1];
    *puVar14 = *puVar5;
    puVar14[1] = uVar23;
    pcVar27 = *(code **)(lVar29 + 0x38);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar23);
    (*pcVar27)(puVar4,0,1,lVar21);
  }
  else {
    lVar21 = 0x112db39a8;
    func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
    _memcpy(puVar4,puVar5,*(undefined8 *)(*(long *)(lVar21 + -8) + 0x40));
  }
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x88));
  puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar12 + 0x88));
  lVar21 = puVar5[1];
  if (lVar21 == 0) {
    uVar23 = puVar5[0x10];
    uVar28 = puVar5[0x13];
    uVar25 = puVar5[0x12];
    puVar4[0x11] = puVar5[0x11];
    puVar4[0x10] = uVar23;
    puVar4[0x13] = uVar28;
    puVar4[0x12] = uVar25;
    *(undefined1 *)(puVar4 + 0x14) = *(undefined1 *)(puVar5 + 0x14);
    uVar23 = puVar5[8];
    uVar28 = puVar5[0xb];
    uVar25 = puVar5[10];
    puVar4[9] = puVar5[9];
    puVar4[8] = uVar23;
    puVar4[0xb] = uVar28;
    puVar4[10] = uVar25;
    uVar28 = puVar5[0xc];
    uVar25 = puVar5[0xf];
    uVar23 = puVar5[0xe];
    puVar4[0xd] = puVar5[0xd];
    puVar4[0xc] = uVar28;
    puVar4[0xf] = uVar25;
    puVar4[0xe] = uVar23;
    uVar23 = *puVar5;
    uVar28 = puVar5[3];
    uVar25 = puVar5[2];
    puVar4[1] = puVar5[1];
    *puVar4 = uVar23;
    puVar4[3] = uVar28;
    puVar4[2] = uVar25;
    uVar28 = puVar5[4];
    uVar25 = puVar5[7];
    uVar23 = puVar5[6];
    puVar4[5] = puVar5[5];
    puVar4[4] = uVar28;
    puVar4[7] = uVar25;
    puVar4[6] = uVar23;
  }
  else {
    *puVar4 = *puVar5;
    puVar4[1] = lVar21;
    lVar21 = puVar5[8];
    _swift_bridgeObjectRetain();
    if (lVar21 == 1) {
      uVar23 = puVar5[2];
      uVar28 = puVar5[5];
      uVar25 = puVar5[4];
      puVar4[3] = puVar5[3];
      puVar4[2] = uVar23;
      puVar4[5] = uVar28;
      puVar4[4] = uVar25;
      uVar23 = puVar5[6];
      puVar4[7] = puVar5[7];
      puVar4[6] = uVar23;
      puVar4[8] = puVar5[8];
    }
    else {
      lVar13 = puVar5[4];
      if (lVar13 == 1) {
        uVar23 = puVar5[2];
        uVar28 = puVar5[5];
        uVar25 = puVar5[4];
        puVar4[3] = puVar5[3];
        puVar4[2] = uVar23;
        puVar4[5] = uVar28;
        puVar4[4] = uVar25;
        puVar4[6] = puVar5[6];
      }
      else {
        uVar23 = puVar5[2];
        puVar4[3] = puVar5[3];
        puVar4[2] = uVar23;
        uVar23 = puVar5[5];
        uVar25 = puVar5[6];
        puVar4[4] = lVar13;
        puVar4[5] = uVar23;
        puVar4[6] = uVar25;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar25);
      }
      puVar4[7] = puVar5[7];
      puVar4[8] = lVar21;
      _swift_bridgeObjectRetain(lVar21);
    }
    lVar21 = puVar5[0xf];
    if (lVar21 == 1) {
      uVar23 = puVar5[9];
      puVar4[10] = puVar5[10];
      puVar4[9] = uVar23;
      uVar23 = puVar5[0xb];
      puVar4[0xc] = puVar5[0xc];
      puVar4[0xb] = uVar23;
      uVar23 = puVar5[0xd];
      puVar4[0xe] = puVar5[0xe];
      puVar4[0xd] = uVar23;
      puVar4[0xf] = puVar5[0xf];
    }
    else {
      lVar13 = puVar5[0xb];
      if (lVar13 == 1) {
        uVar23 = puVar5[9];
        puVar4[10] = puVar5[10];
        puVar4[9] = uVar23;
        uVar23 = puVar5[0xb];
        puVar4[0xc] = puVar5[0xc];
        puVar4[0xb] = uVar23;
        puVar4[0xd] = puVar5[0xd];
      }
      else {
        uVar23 = puVar5[9];
        puVar4[10] = puVar5[10];
        puVar4[9] = uVar23;
        uVar23 = puVar5[0xc];
        uVar25 = puVar5[0xd];
        puVar4[0xb] = lVar13;
        puVar4[0xc] = uVar23;
        puVar4[0xd] = uVar25;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar25);
      }
      puVar4[0xe] = puVar5[0xe];
      puVar4[0xf] = lVar21;
      _swift_bridgeObjectRetain(lVar21);
    }
    *(undefined2 *)(puVar4 + 0x10) = *(undefined2 *)(puVar5 + 0x10);
    uVar23 = puVar5[0x11];
    puVar4[0x12] = puVar5[0x12];
    puVar4[0x11] = uVar23;
    puVar4[0x13] = puVar5[0x13];
    *(undefined1 *)(puVar4 + 0x14) = *(undefined1 *)(puVar5 + 0x14);
    _swift_bridgeObjectRetain();
  }
  *(undefined4 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x8c)) =
       *(undefined4 *)((long)puVar3 + (long)*(int *)(lVar12 + 0x8c));
  *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x90)) =
       *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar12 + 0x90));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x94));
  puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar12 + 0x94));
  uVar23 = *puVar5;
  uVar28 = puVar5[3];
  uVar25 = puVar5[2];
  puVar4[1] = puVar5[1];
  *puVar4 = uVar23;
  puVar4[3] = uVar28;
  puVar4[2] = uVar25;
  uVar23 = puVar5[4];
  uVar28 = puVar5[7];
  uVar25 = puVar5[6];
  puVar4[5] = puVar5[5];
  puVar4[4] = uVar23;
  puVar4[7] = uVar28;
  puVar4[6] = uVar25;
  uVar28 = puVar5[0xc];
  uVar25 = puVar5[0xf];
  uVar23 = puVar5[0xe];
  puVar4[0xd] = puVar5[0xd];
  puVar4[0xc] = uVar28;
  puVar4[0xf] = uVar25;
  puVar4[0xe] = uVar23;
  uVar28 = puVar5[8];
  uVar25 = puVar5[0xb];
  uVar23 = puVar5[10];
  puVar4[9] = puVar5[9];
  puVar4[8] = uVar28;
  puVar4[0xb] = uVar25;
  puVar4[10] = uVar23;
  uVar23 = *(undefined8 *)((long)puVar5 + 0xa9);
  *(undefined8 *)((long)puVar4 + 0xb1) = *(undefined8 *)((long)puVar5 + 0xb1);
  *(undefined8 *)((long)puVar4 + 0xa9) = uVar23;
  uVar23 = puVar5[0x12];
  uVar28 = puVar5[0x15];
  uVar25 = puVar5[0x14];
  puVar4[0x13] = puVar5[0x13];
  puVar4[0x12] = uVar23;
  puVar4[0x15] = uVar28;
  puVar4[0x14] = uVar25;
  uVar23 = puVar5[0x10];
  puVar4[0x11] = puVar5[0x11];
  puVar4[0x10] = uVar23;
  *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x98)) =
       *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar12 + 0x98));
  *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x9c)) =
       *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar12 + 0x9c));
  *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0xa0)) =
       *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar12 + 0xa0));
  *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0xa4)) =
       *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar12 + 0xa4));
  *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0xa8)) =
       *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar12 + 0xa8));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0xac));
  puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar12 + 0xac));
  lVar21 = puVar5[1];
  if (lVar21 == 0) {
    uVar23 = *puVar5;
    uVar28 = puVar5[3];
    uVar25 = puVar5[2];
    puVar4[1] = puVar5[1];
    *puVar4 = uVar23;
    puVar4[3] = uVar28;
    puVar4[2] = uVar25;
  }
  else {
    *puVar4 = *puVar5;
    puVar4[1] = lVar21;
    uVar23 = puVar5[3];
    puVar4[2] = puVar5[2];
    puVar4[3] = uVar23;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar23);
  }
  *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0xb0)) =
       *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar12 + 0xb0));
  *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0xb4)) =
       *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar12 + 0xb4));
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0xb8));
  puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar12 + 0xb8));
  lVar21 = puVar5[1];
  if (lVar21 == 0) {
    uVar23 = puVar5[0x10];
    uVar28 = puVar5[0x13];
    uVar25 = puVar5[0x12];
    puVar4[0x11] = puVar5[0x11];
    puVar4[0x10] = uVar23;
    puVar4[0x13] = uVar28;
    puVar4[0x12] = uVar25;
    *(undefined1 *)(puVar4 + 0x14) = *(undefined1 *)(puVar5 + 0x14);
    uVar23 = puVar5[8];
    uVar28 = puVar5[0xb];
    uVar25 = puVar5[10];
    puVar4[9] = puVar5[9];
    puVar4[8] = uVar23;
    puVar4[0xb] = uVar28;
    puVar4[10] = uVar25;
    uVar28 = puVar5[0xc];
    uVar25 = puVar5[0xf];
    uVar23 = puVar5[0xe];
    puVar4[0xd] = puVar5[0xd];
    puVar4[0xc] = uVar28;
    puVar4[0xf] = uVar25;
    puVar4[0xe] = uVar23;
    uVar23 = *puVar5;
    uVar28 = puVar5[3];
    uVar25 = puVar5[2];
    puVar4[1] = puVar5[1];
    *puVar4 = uVar23;
    puVar4[3] = uVar28;
    puVar4[2] = uVar25;
    uVar28 = puVar5[4];
    uVar25 = puVar5[7];
    uVar23 = puVar5[6];
    puVar4[5] = puVar5[5];
    puVar4[4] = uVar28;
    puVar4[7] = uVar25;
    puVar4[6] = uVar23;
  }
  else {
    *puVar4 = *puVar5;
    puVar4[1] = lVar21;
    lVar21 = puVar5[8];
    _swift_bridgeObjectRetain();
    if (lVar21 == 1) {
      uVar23 = puVar5[2];
      uVar28 = puVar5[5];
      uVar25 = puVar5[4];
      puVar4[3] = puVar5[3];
      puVar4[2] = uVar23;
      puVar4[5] = uVar28;
      puVar4[4] = uVar25;
      uVar23 = puVar5[6];
      puVar4[7] = puVar5[7];
      puVar4[6] = uVar23;
      puVar4[8] = puVar5[8];
    }
    else {
      lVar13 = puVar5[4];
      if (lVar13 == 1) {
        uVar23 = puVar5[2];
        uVar28 = puVar5[5];
        uVar25 = puVar5[4];
        puVar4[3] = puVar5[3];
        puVar4[2] = uVar23;
        puVar4[5] = uVar28;
        puVar4[4] = uVar25;
        puVar4[6] = puVar5[6];
      }
      else {
        uVar23 = puVar5[2];
        puVar4[3] = puVar5[3];
        puVar4[2] = uVar23;
        uVar23 = puVar5[5];
        uVar25 = puVar5[6];
        puVar4[4] = lVar13;
        puVar4[5] = uVar23;
        puVar4[6] = uVar25;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar25);
      }
      puVar4[7] = puVar5[7];
      puVar4[8] = lVar21;
      _swift_bridgeObjectRetain(lVar21);
    }
    lVar21 = puVar5[0xf];
    if (lVar21 == 1) {
      uVar23 = puVar5[9];
      puVar4[10] = puVar5[10];
      puVar4[9] = uVar23;
      uVar23 = puVar5[0xb];
      puVar4[0xc] = puVar5[0xc];
      puVar4[0xb] = uVar23;
      uVar23 = puVar5[0xd];
      puVar4[0xe] = puVar5[0xe];
      puVar4[0xd] = uVar23;
      puVar4[0xf] = puVar5[0xf];
    }
    else {
      lVar13 = puVar5[0xb];
      if (lVar13 == 1) {
        uVar23 = puVar5[9];
        puVar4[10] = puVar5[10];
        puVar4[9] = uVar23;
        uVar23 = puVar5[0xb];
        puVar4[0xc] = puVar5[0xc];
        puVar4[0xb] = uVar23;
        puVar4[0xd] = puVar5[0xd];
      }
      else {
        uVar23 = puVar5[9];
        puVar4[10] = puVar5[10];
        puVar4[9] = uVar23;
        uVar23 = puVar5[0xc];
        uVar25 = puVar5[0xd];
        puVar4[0xb] = lVar13;
        puVar4[0xc] = uVar23;
        puVar4[0xd] = uVar25;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar25);
      }
      puVar4[0xe] = puVar5[0xe];
      puVar4[0xf] = lVar21;
      _swift_bridgeObjectRetain(lVar21);
    }
    *(undefined2 *)(puVar4 + 0x10) = *(undefined2 *)(puVar5 + 0x10);
    uVar23 = puVar5[0x11];
    puVar4[0x12] = puVar5[0x12];
    puVar4[0x11] = uVar23;
    puVar4[0x13] = puVar5[0x13];
    *(undefined1 *)(puVar4 + 0x14) = *(undefined1 *)(puVar5 + 0x14);
    _swift_bridgeObjectRetain();
  }
  puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0xbc));
  puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar12 + 0xbc));
  lVar21 = puVar5[1];
  if (lVar21 == 0) {
    uVar23 = puVar5[0x10];
    uVar28 = puVar5[0x13];
    uVar25 = puVar5[0x12];
    puVar4[0x11] = puVar5[0x11];
    puVar4[0x10] = uVar23;
    puVar4[0x13] = uVar28;
    puVar4[0x12] = uVar25;
    *(undefined1 *)(puVar4 + 0x14) = *(undefined1 *)(puVar5 + 0x14);
    uVar23 = puVar5[8];
    uVar28 = puVar5[0xb];
    uVar25 = puVar5[10];
    puVar4[9] = puVar5[9];
    puVar4[8] = uVar23;
    puVar4[0xb] = uVar28;
    puVar4[10] = uVar25;
    uVar28 = puVar5[0xc];
    uVar25 = puVar5[0xf];
    uVar23 = puVar5[0xe];
    puVar4[0xd] = puVar5[0xd];
    puVar4[0xc] = uVar28;
    puVar4[0xf] = uVar25;
    puVar4[0xe] = uVar23;
    uVar23 = *puVar5;
    uVar28 = puVar5[3];
    uVar25 = puVar5[2];
    puVar4[1] = puVar5[1];
    *puVar4 = uVar23;
    puVar4[3] = uVar28;
    puVar4[2] = uVar25;
    uVar28 = puVar5[4];
    uVar25 = puVar5[7];
    uVar23 = puVar5[6];
    puVar4[5] = puVar5[5];
    puVar4[4] = uVar28;
    puVar4[7] = uVar25;
    puVar4[6] = uVar23;
  }
  else {
    *puVar4 = *puVar5;
    puVar4[1] = lVar21;
    lVar21 = puVar5[8];
    _swift_bridgeObjectRetain();
    if (lVar21 == 1) {
      uVar23 = puVar5[2];
      uVar28 = puVar5[5];
      uVar25 = puVar5[4];
      puVar4[3] = puVar5[3];
      puVar4[2] = uVar23;
      puVar4[5] = uVar28;
      puVar4[4] = uVar25;
      uVar23 = puVar5[6];
      puVar4[7] = puVar5[7];
      puVar4[6] = uVar23;
      puVar4[8] = puVar5[8];
    }
    else {
      lVar13 = puVar5[4];
      if (lVar13 == 1) {
        uVar23 = puVar5[2];
        uVar28 = puVar5[5];
        uVar25 = puVar5[4];
        puVar4[3] = puVar5[3];
        puVar4[2] = uVar23;
        puVar4[5] = uVar28;
        puVar4[4] = uVar25;
        puVar4[6] = puVar5[6];
      }
      else {
        uVar23 = puVar5[2];
        puVar4[3] = puVar5[3];
        puVar4[2] = uVar23;
        uVar23 = puVar5[5];
        uVar25 = puVar5[6];
        puVar4[4] = lVar13;
        puVar4[5] = uVar23;
        puVar4[6] = uVar25;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar25);
      }
      puVar4[7] = puVar5[7];
      puVar4[8] = lVar21;
      _swift_bridgeObjectRetain(lVar21);
    }
    lVar21 = puVar5[0xf];
    if (lVar21 == 1) {
      uVar23 = puVar5[9];
      puVar4[10] = puVar5[10];
      puVar4[9] = uVar23;
      uVar23 = puVar5[0xb];
      puVar4[0xc] = puVar5[0xc];
      puVar4[0xb] = uVar23;
      uVar23 = puVar5[0xd];
      puVar4[0xe] = puVar5[0xe];
      puVar4[0xd] = uVar23;
      puVar4[0xf] = puVar5[0xf];
    }
    else {
      lVar13 = puVar5[0xb];
      if (lVar13 == 1) {
        uVar23 = puVar5[9];
        puVar4[10] = puVar5[10];
        puVar4[9] = uVar23;
        uVar23 = puVar5[0xb];
        puVar4[0xc] = puVar5[0xc];
        puVar4[0xb] = uVar23;
        puVar4[0xd] = puVar5[0xd];
      }
      else {
        uVar23 = puVar5[9];
        puVar4[10] = puVar5[10];
        puVar4[9] = uVar23;
        uVar23 = puVar5[0xc];
        uVar25 = puVar5[0xd];
        puVar4[0xb] = lVar13;
        puVar4[0xc] = uVar23;
        puVar4[0xd] = uVar25;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar25);
      }
      puVar4[0xe] = puVar5[0xe];
      puVar4[0xf] = lVar21;
      _swift_bridgeObjectRetain(lVar21);
    }
    *(undefined2 *)(puVar4 + 0x10) = *(undefined2 *)(puVar5 + 0x10);
    uVar23 = puVar5[0x11];
    puVar4[0x12] = puVar5[0x12];
    puVar4[0x11] = uVar23;
    puVar4[0x13] = puVar5[0x13];
    *(undefined1 *)(puVar4 + 0x14) = *(undefined1 *)(puVar5 + 0x14);
    _swift_bridgeObjectRetain();
  }
  *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0xc0)) =
       *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar12 + 0xc0));
  *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0xc4)) =
       *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar12 + 0xc4));
  *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 200)) =
       *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar12 + 200));
  *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0xcc)) =
       *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar12 + 0xcc));
  *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x1c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar11 + 0x1c));
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x20)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x20));
  return param_1;
}



/* Entry: 1042f42fc; end: 1042f4313;  */

void FUN_1042f42fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1042f4314; end: 1042f43af;  */

void FUN_1042f4314(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_50 = &UNK_10dce7308;
  puStack_48 = &UNK_10dce7358;
  puStack_40 = PTR___sBbWV_11034d660 + 0x40;
  puStack_38 = PTR___sBi64_WV_11034d670 + 0x40;
  lVar1 = 0x13f;
  puStack_30 = puStack_38;
  func_0x0001042e75b8();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,6,&puStack_50,param_1 + 0x10);
  }
  return;
}



/* Entry: 1042f43b0; end: 1042f459f;  */

undefined * FUN_1042f43b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  undefined *puVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  long alStack_88 [3];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  FUN_1042dde50();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar3 = PTR_PTR_1126e14d0;
  _objc_allocWithZone(PTR_PTR_1126e14d0);
  func_0x00010bfee200();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
  func_0x00010c1dc3a0(puVar3);
  _objc_release(param_1);
  func_0x00010c214840(puVar3);
  lVar2 = *(long *)(param_4 + 0x10);
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar2 != 0) {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100c077e4(0,lVar2,0);
    param_4 = param_4 + ((ulong)*(byte *)(lVar9 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar9 + 0x50) ^ 0xffffffffffffffff));
    lVar9 = *(long *)(lVar9 + 0x48);
    puVar8 = puStack_68;
    do {
      lVar4 = param_4;
      FUN_1042f45ac(param_4,auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      FUN_1042dd25c();
      uVar5 = 0;
      FUN_1042f45f0();
      alStack_88[0] = lVar4;
      uStack_70 = uVar5;
      FUN_1042f4634(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      uVar1 = *(ulong *)(puVar8 + 0x10);
      puStack_68 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
        func_0x000100c077e4(1 < *(ulong *)(puVar8 + 0x18),uVar1 + 1,1);
      }
      puVar8 = puStack_68;
      *(ulong *)(puStack_68 + 0x10) = uVar1 + 1;
      func_0x000100102924(alStack_88,puStack_68 + uVar1 * 0x20 + 0x20);
      param_4 = param_4 + lVar9;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_allocWithZone(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar7 = puVar8;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puVar8,PTR___sypN_11034f1a8 + 8);
  _swift_bridgeObjectRelease(puVar8);
  func_0x00010bff4000(puVar6);
  _objc_release(puVar7);
  func_0x00010c197dc0(puVar3);
  _objc_release(puVar6);
  return puVar3;
}



/* Entry: 1042f45a0; end: 1042f45ab;  */

undefined * FUN_1042f45a0(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  undefined8 *unaff_x20;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_90 [8];
  long alStack_88 [3];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  uVar6 = *unaff_x20;
  uVar2 = unaff_x20[1];
  lVar10 = unaff_x20[3];
  lVar3 = 0;
  FUN_1042dde50();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar4 = PTR_PTR_1126e14d0;
  _objc_allocWithZone(PTR_PTR_1126e14d0);
  func_0x00010bfee200();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar6,uVar2);
  func_0x00010c1dc3a0(puVar4);
  _objc_release(uVar6);
  func_0x00010c214840(puVar4);
  lVar3 = *(long *)(lVar10 + 0x10);
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar3 != 0) {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100c077e4(0,lVar3,0);
    lVar10 = lVar10 + ((ulong)*(byte *)(lVar11 + 0x50) + 0x20 &
                      ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff));
    lVar11 = *(long *)(lVar11 + 0x48);
    puVar9 = puStack_68;
    do {
      lVar5 = lVar10;
      FUN_1042f45ac(lVar10,auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      FUN_1042dd25c();
      uVar6 = 0;
      FUN_1042f45f0();
      alStack_88[0] = lVar5;
      uStack_70 = uVar6;
      FUN_1042f4634(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      uVar1 = *(ulong *)(puVar9 + 0x10);
      puStack_68 = puVar9;
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar1) {
        func_0x000100c077e4(1 < *(ulong *)(puVar9 + 0x18),uVar1 + 1,1);
      }
      puVar9 = puStack_68;
      *(ulong *)(puStack_68 + 0x10) = uVar1 + 1;
      func_0x000100102924(alStack_88,puStack_68 + uVar1 * 0x20 + 0x20);
      lVar10 = lVar10 + lVar11;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_allocWithZone(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar8 = puVar9;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puVar9,PTR___sypN_11034f1a8 + 8);
  _swift_bridgeObjectRelease(puVar9);
  func_0x00010bff4000(puVar7);
  _objc_release(puVar8);
  func_0x00010c197dc0(puVar4);
  _objc_release(puVar7);
  return puVar4;
}



/* Entry: 1042f45ac; end: 1042f45ef;  */

undefined8 FUN_1042f45ac(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1042dde50();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1042f45f0; end: 1042f4633;  */

void FUN_1042f45f0(void)

{
  undefined *puVar1;
  
  if (puRam000000011306c550 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126e14d8;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  puRam000000011306c550 = puVar1;
  return;
}



/* Entry: 1042f4634; end: 1042f46ff;  */

undefined8 FUN_1042f4634(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1042dde50();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1042f4700; end: 1042f476b;  */

undefined8 * FUN_1042f4700(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 1042f476c; end: 1042f47af;  */

undefined8 * FUN_1042f476c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Entry: 1042f47b0; end: 1042f4847;  */

int FUN_1042f47b0(int *param_1,int param_2)

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



/* Entry: 1042f4848; end: 1042f487f;  */

void FUN_1042f4848(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1042f4880();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1042f4880; end: 1042f49a3;  */

undefined * FUN_1042f4880(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1042f49a4);
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
    FUN_1042f4b20();
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
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
    func_0x00010430189c(0);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Entry: 1042f49a4; end: 1042f4b1f;  */

undefined * FUN_1042f49a4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1042f4b20);
        (*pcVar3)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar9 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar9) {
    uVar7 = uVar9;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar7 != 0) {
    puVar4 = (undefined *)0x112eae540;
    func_0x0001000285a8(0x112eae540,&UNK_10dac28c8);
    lVar5 = 0;
    FUN_1042dde50();
    lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar11 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    _swift_allocObject(puVar4,uVar11 + lVar10 * uVar7,uVar8 | 7);
    puVar6 = puVar4;
    _malloc_size();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1042f4b18);
      (*pcVar3)();
    }
    lVar5 = (long)puVar6 - uVar11;
    if (lVar5 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1042f4b1c);
      (*pcVar3)();
    }
    lVar2 = 0;
    if (lVar10 != 0) {
      lVar2 = lVar5 / lVar10;
    }
    *(ulong *)(puVar4 + 0x10) = uVar9;
    *(long *)(puVar4 + 0x18) = lVar2 << 1;
  }
  lVar5 = 0;
  FUN_1042dde50();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar6 = puVar4 + uVar7;
  puVar1 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar6,puVar1,uVar9,lVar5);
  }
  else {
    if ((puVar4 < param_4) || (puVar1 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar9 <= puVar6))
    {
      _swift_arrayInitWithTakeFrontToBack(puVar6,puVar1,uVar9);
    }
    else if (puVar4 != param_4) {
      _swift_arrayInitWithTakeBackToFront(puVar6,puVar1,uVar9);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar4;
}



/* Entry: 1042f4b20; end: 1042f4b7b;  */

void FUN_1042f4b20(void)

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
    func_0x00010430189c();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x11306c570;
  plVar5 = (long *)&UNK_10dce73c0;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 1042f4b7c; end: 1042f4c0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f4b7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  FUN_1042f43b0(param_1,param_2,param_3,param_4);
  _swift_bridgeObjectRelease(param_4);
  _swift_bridgeObjectRelease(param_2);
  *(undefined8 *)(unaff_x20 + _DAT_11306c578) = param_1;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042f4c10; end: 1042f4c7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f4c10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  FUN_1042f43b0();
  _swift_bridgeObjectRelease(param_4);
  _swift_bridgeObjectRelease();
  *(undefined8 *)(unaff_x20 + _DAT_11306c578) = param_1;
  FUN_1042f4c7c();
  _objc_msgSendSuper2(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042f4c7c; end: 1042f4c9b;  */

void FUN_1042f4c7c(void)

{
  _objc_opt_self(&PTR_PTR_112996b38);
  return;
}



/* Entry: 1042f4c9c; end: 1042f4cc7;  */

void FUN_1042f4c9c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  FUN_1042f4c7c();
  param_1[3] = param_2;
  *param_1 = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1042f4cc8; end: 1042f4ccb; -[SCPromotedPlaceTrackInfo copyWithZone:] */

void FUN_1042f4cc8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1042f4ccc; end: 1042f4d3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042f4ccc(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_48;
  undefined1 auStack_40 [32];
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306c578);
  func_0x00010bf51e00(uVar1);
  __ss018_bridgeAnyObjectToB0yypyXlSgF(auStack_40);
  _swift_unknownObjectRelease(uVar1);
  uVar1 = 0;
  FUN_1042f4d3c(0);
  _swift_dynamicCast(&uStack_48,auStack_40,PTR___sypN_11034f1a8 + 8,uVar1,7);
  return uStack_48;
}



/* Entry: 1042f4d3c; end: 1042f4d7f;  */

void FUN_1042f4d3c(void)

{
  undefined *puVar1;
  
  if (puRam000000011306c580 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126e14d0;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  puRam000000011306c580 = puVar1;
  return;
}



/* Entry: 1042f4d80; end: 1042f4e03; -[SCPromotedPlaceTrackInfo toProto] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f4d80(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_48;
  undefined1 auStack_40 [32];
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11306c578);
  _objc_retain();
  func_0x00010bf51e00(uVar1);
  __ss018_bridgeAnyObjectToB0yypyXlSgF(auStack_40);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(param_1);
  uVar1 = 0;
  FUN_1042f4d3c(0);
  _swift_dynamicCast(&uStack_48,auStack_40,PTR___sypN_11034f1a8 + 8,uVar1,7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_48);
  return;
}



/* Entry: 1042f4e04; end: 1042f4e5f; -[SCPromotedPlaceTrackInfo init] */

void FUN_1042f4e04(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("PromotedPlaceTrackerServices.SCPromotedPlaceTrackInfo",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042f4e30);
  (*pcVar1)();
}



/* Entry: 1042f4e60; end: 1042f4e6f; -[SCPromotedPlaceTrackInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f4e60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306c578));
  return;
}



/* Entry: 1042f4e70; end: 1042f4ec3;  */

undefined * FUN_1042f4e70(uint param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e1510;
  _objc_allocWithZone(PTR_PTR_1126e1510);
  func_0x00010bfee200();
  func_0x00010c21acc0();
  func_0x00010c1d9960(puVar1,param_2,param_1 >> 8 & 0xff);
  return puVar1;
}



/* Entry: 1042f4ec4; end: 1042f4f47;  */

void FUN_1042f4ec4(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1042f4f48; end: 1042f4f6f;  */

undefined * FUN_1042f4f48(undefined8 param_1,undefined8 param_2)

{
  ushort uVar1;
  undefined *puVar2;
  ushort *unaff_x20;
  
  uVar1 = *unaff_x20;
  puVar2 = PTR_PTR_1126e1510;
  _objc_allocWithZone(PTR_PTR_1126e1510);
  func_0x00010bfee200();
  func_0x00010c21acc0();
  func_0x00010c1d9960(puVar2,param_2,uVar1 >> 8);
  return puVar2;
}



/* Entry: 1042f4f70; end: 1042f4faf;  */

void FUN_1042f4f70(void)

{
  undefined *puVar1;
  
  if (puRam000000011306c5b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce7410;
  _swift_getWitnessTable(&UNK_10dce7410,&UNK_1107563d0);
  puRam000000011306c5b0 = puVar1;
  return;
}



/* Entry: 1042f4fb0; end: 1042f4fb3;  */

void FUN_1042f4fb0(void)

{
  undefined *puVar1;
  
  if (puRam000000011306c5b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce74b0;
  _swift_getWitnessTable(&UNK_10dce74b0,&UNK_110756460);
  puRam000000011306c5b8 = puVar1;
  return;
}



/* Entry: 1042f4fb4; end: 1042f4ff3;  */

void FUN_1042f4fb4(void)

{
  undefined *puVar1;
  
  if (puRam000000011306c5b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce74b0;
  _swift_getWitnessTable(&UNK_10dce74b0,&UNK_110756460);
  puRam000000011306c5b8 = puVar1;
  return;
}



/* Entry: 1042f4ff4; end: 1042f52f7;  */

void FUN_1042f4ff4(void)

{
  return;
}



/* Entry: 1042f52f8; end: 1042f5333;  */

undefined * FUN_1042f52f8(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126adc60;
  _objc_allocWithZone(PTR_PTR_1126adc60);
  func_0x00010bfee200();
  func_0x00010c1ed200();
  return puVar1;
}



/* Entry: 1042f5334; end: 1042f5383;  */

long FUN_1042f5334(char *param_1,char *param_2)

{
  long lVar1;
  
  if (*param_1 != *param_2) {
    return 0;
  }
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != *(long *)(param_2 + 8) || *(long *)(param_1 + 0x10) != *(long *)(param_2 + 0x10)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )();
    return lVar1;
  }
  return 1;
}



/* Entry: 1042f5384; end: 1042f5437;  */

undefined1 * FUN_1042f5384(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 1042f5438; end: 1042f54eb;  */

int FUN_1042f5438(int *param_1,int param_2)

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



/* Entry: 1042f54ec; end: 1042f55bf;  */

void FUN_1042f54ec(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1042f55c0; end: 1042f55cb;  */

void FUN_1042f55c0(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 1042f55cc; end: 1042f5607;  */

undefined * FUN_1042f55cc(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e14f8;
  _objc_allocWithZone(PTR_PTR_1126e14f8);
  func_0x00010bfee200();
  func_0x00010c161620();
  return puVar1;
}



/* Entry: 1042f5608; end: 1042f561b;  */

ulong FUN_1042f5608(ulong param_1)

{
  if (4 < param_1) {
    param_1 = 5;
  }
  return param_1;
}



/* Entry: 1042f561c; end: 1042f565b;  */

void FUN_1042f561c(void)

{
  undefined *puVar1;
  
  if (puRam000000011306c5f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce7650;
  _swift_getWitnessTable(&UNK_10dce7650,&UNK_110756668);
  puRam000000011306c5f0 = puVar1;
  return;
}



/* Entry: 1042f565c; end: 1042f57c7;  */

int FUN_1042f565c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfb < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 4) {
      iVar2 = 4;
    }
    if (param_2 + 4 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1042f56d8;
        goto LAB_1042f56bc;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1042f56bc:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_1042f56d8:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1042f57c8; end: 1042f57fb;  */

undefined8 * FUN_1042f57c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 1042f57fc; end: 1042f584f;  */

undefined8 * FUN_1042f57fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



/* Entry: 1042f5850; end: 1042f588b;  */

undefined8 * FUN_1042f5850(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



/* Entry: 1042f588c; end: 1042f593f;  */

int FUN_1042f588c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1042f5940; end: 1042f59eb;  */

void FUN_1042f5940(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1042f59ec; end: 1042f5a0f;  */

void FUN_1042f59ec(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 1042f5a10; end: 1042f5a4b;  */

undefined * FUN_1042f5a10(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e1500;
  _objc_allocWithZone(PTR_PTR_1126e1500);
  func_0x00010bfee200();
  func_0x00010c21acc0();
  return puVar1;
}



/* Entry: 1042f5a4c; end: 1042f5a67;  */

bool FUN_1042f5a4c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *param_1;
  uVar1 = param_2[2];
  uVar2 = param_1[2];
  if (((uVar3 != *param_2) || (param_1[1] != param_2[1])) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar3,param_1[1],*param_2,param_2[1],0), (uVar3 & 1) == 0)) {
    return false;
  }
  return (char)uVar2 == (char)uVar1;
}



/* Entry: 1042f5a68; end: 1042f5abf;  */

bool FUN_1042f5a68(ulong param_1,long param_2,char param_3,ulong param_4,long param_5,char param_6)

{
  if (((param_1 != param_4) || (param_2 != param_5)) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (param_1,param_2,param_4,param_5,0), (param_1 & 1) == 0)) {
    return false;
  }
  return param_3 == param_6;
}



/* Entry: 1042f5ac0; end: 1042f5ac3;  */

void FUN_1042f5ac0(void)

{
  undefined *puVar1;
  
  if (puRam000000011306c610 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce7730;
  _swift_getWitnessTable(&UNK_10dce7730,&UNK_1107567d8);
  puRam000000011306c610 = puVar1;
  return;
}



/* Entry: 1042f5ac4; end: 1042f5b03;  */

void FUN_1042f5ac4(void)

{
  undefined *puVar1;
  
  if (puRam000000011306c610 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce7730;
  _swift_getWitnessTable(&UNK_10dce7730,&UNK_1107567d8);
  puRam000000011306c610 = puVar1;
  return;
}



/* Entry: 1042f5b04; end: 1042f5c6f;  */

int FUN_1042f5b04(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1042f5b80;
        goto LAB_1042f5b64;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1042f5b64:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_1042f5b80:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1042f5c70; end: 1042f5ca3;  */

undefined8 * FUN_1042f5c70(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 1042f5ca4; end: 1042f5cf7;  */

undefined8 * FUN_1042f5ca4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



/* Entry: 1042f5cf8; end: 1042f5d33;  */

undefined8 * FUN_1042f5cf8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



/* Entry: 1042f5d34; end: 1042f5dd3;  */

int FUN_1042f5d34(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1042f5dd4; end: 1042f5e0f;  */

undefined * FUN_1042f5dd4(void)

{
  undefined *puVar1;
  long *unaff_x20;
  long lVar2;
  
  lVar2 = *unaff_x20;
  puVar1 = PTR_PTR_1126adc68;
  _objc_allocWithZone(PTR_PTR_1126adc68);
  func_0x00010bfee200();
  func_0x00010c227be0((float)lVar2);
  return puVar1;
}



/* Entry: 1042f5e10; end: 1042f5e33;  */

bool FUN_1042f5e10(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1042f5e34; end: 1042f5ecb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f5e34(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306c648) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042f5ecc; end: 1042f5f2b; -[_TtC28PromotedPlaceTrackerServices28PromotedPlaceTrackerServices init] */

void FUN_1042f5ecc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("PromotedPlaceTrackerServices.PromotedPlaceTrackerServices",0x39,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042f5ef8);
  (*pcVar1)();
}



/* Entry: 1042f5f2c; end: 1042f5f3b; -[_TtC28PromotedPlaceTrackerServices28PromotedPlaceTrackerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f5f2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11306c648));
  return;
}



/* Entry: 1042f5f3c; end: 1042f5f5b;  */

void FUN_1042f5f3c(void)

{
  _objc_opt_self(&PTR_PTR_112996c08);
  return;
}



/* Entry: 1042f5f5c; end: 1042f5f6b; -[SCAttachmentEvent isAttachmentClosed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042f5f5c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306c680);
}



/* Entry: 1042f5f6c; end: 1042f5fb7; -[SCAttachmentEvent placeId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f5f6c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306c678);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11306c678))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1042f5fb8; end: 1042f5fbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f5fb8(undefined1 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11306c680) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306c678);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042f5fbc; end: 1042f609b; -[SCAttachmentEvent initWithIsAttachmentClosed:placeId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f5fbc(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *(undefined1 *)(param_1 + _DAT_11306c680) = param_3;
  puVar1 = (undefined8 *)(param_1 + _DAT_11306c678);
  *puVar1 = param_4;
  puVar1[1] = param_2;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042f609c; end: 1042f60cf; -[SCAttachmentEvent hash] */

undefined8 FUN_1042f609c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1042f60d0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1042f60d0; end: 1042f6237;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f60d0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306c680));
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306c678);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_11306c678))[1]);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1042f6238; end: 1042f62b7; -[SCAttachmentEvent isEqual:] */

uint FUN_1042f6238(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  func_0x0001042f6154(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1042f62b8; end: 1042f62bb; -[SCAttachmentEvent copyWithZone:] */

void FUN_1042f62b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1042f62bc; end: 1042f62d7; -[SCAttachmentEvent description] */

void FUN_1042f62bc(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042f62d8; end: 1042f6353; -[SCAttachmentEvent init] */

void FUN_1042f62d8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "PromotedPlaceTrackerServices/AttachmentCloseEventWrapper.swift",0x3e,2,0x37,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042f6320);
  (*pcVar1)();
}



/* Entry: 1042f6354; end: 1042f6367; -[SCAttachmentEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f6354(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11306c678 + 8))
  ;
  return;
}



/* Entry: 1042f6368; end: 1042f6387;  */

void FUN_1042f6368(void)

{
  _objc_opt_self(&PTR_PTR_112996cc8);
  return;
}



/* Entry: 1042f6388; end: 1042f63a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f6388(undefined1 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11306c680) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306c678);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042f63a4; end: 1042f63eb; -[SCEffectEventType init] */

void FUN_1042f63a4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "PromotedPlaceTrackerServices/EffectEventWrapper.swift",0x35,2,0x33,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042f63ec);
  (*pcVar1)();
}



/* Entry: 1042f63ec; end: 1042f64af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042f63ec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_11306c6b0) == '\0') {
    uVar3 = 0x45534e55;
  }
  else {
    if (*(char *)(unaff_x20 + _DAT_11306c6b0) != '\x01') {
      uVar3 = 0xec000000504f5453;
      goto LAB_1042f6444;
    }
    uVar3 = 0x52415453;
  }
  uVar3 = uVar3 | 0xed00005400000000;
LAB_1042f6444:
  uVar1 = 0x5f45505954425553;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f45505954425553,uVar3);
  uVar2 = 0x55535f4445444f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55535f4445444f43,0xed00004550595442);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1042f64b0; end: 1042f64ff; -[SCEffectEventType encodeWithCoder:] */

void FUN_1042f64b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1042f63ec(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


