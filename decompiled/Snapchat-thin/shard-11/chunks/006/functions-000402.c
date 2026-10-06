/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10874eefc; end: 10874ef67;  */

void FUN_10874eefc(long *param_1)

{
  long *plVar1;
  uint extraout_w8;
  uint extraout_w8_00;
  
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 5) = 1;
  func_0x000108755af0(param_1[4]);
  if (((extraout_w8 >> 1 & 1) == 0) &&
     (func_0x000108755af0(param_1[4]), (extraout_w8_00 >> 5 & 1) == 0)) {
    FUN_10874ef68(*param_1 + 0x128);
  }
  else if ((char)param_1[3] == '\x01') {
    *(undefined1 *)((long)param_1 + 0x14) = 1;
  }
  plVar1 = param_1 + 1;
  if ((char)param_1[3] == '\x01') {
    FUN_108750a4c();
    *(undefined1 *)(plVar1 + 2) = 0;
  }
  return;
}



/* Entry: 10874ef68; end: 10874efaf;  */

void FUN_10874ef68(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x000107c27f98();
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  return;
}



/* Entry: 10874efb0; end: 10874f6e3;  */

void FUN_10874efb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  undefined1 uVar6;
  char cVar7;
  char cVar8;
  bool bVar9;
  undefined1 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int *piVar13;
  undefined8 uVar14;
  long lVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 *puVar19;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  uint extraout_w8_03;
  long lVar20;
  long extraout_x8;
  undefined8 extraout_x8_00;
  long *extraout_x8_01;
  long *plVar21;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined1 extraout_w9;
  uint extraout_w9_00;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  int extraout_w10;
  int extraout_w10_00;
  uint extraout_w10_01;
  ulong extraout_x11;
  ulong uVar22;
  long lVar23;
  uint uVar24;
  undefined8 uVar25;
  undefined1 auStack_1f8 [472];
  undefined8 uStack_20;
  undefined1 *puStack_18;
  undefined1 uStack_10;
  
  func_0x00010875615c();
  puVar11 = (undefined8 *)0x378;
  __Znwm();
  *puVar11 = FUN_1087541b4;
  puVar11[1] = FUN_108754524;
  uVar24 = (uint)param_3;
  *(uint *)(puVar11 + 0x6e) = uVar24;
  puVar11[0x6a] = param_2;
  puVar11[0x69] = param_1;
  puVar12 = puVar11;
  func_0x000108755de0();
  func_0x000108755fb4();
  puVar11[0x4f] = 0;
  func_0x000107c28258();
  puVar11[0x50] = puVar12;
  *(undefined1 *)(puVar11 + 0x51) = 1;
  lVar15 = param_1 + 0x280;
  FUN_108750c68(lVar15,param_2);
  puVar11[0x6b] = lVar15;
  if (lVar15 == 0) {
    FUN_10874f6e4(param_1,param_2,0x41019f,1,7);
  }
  else {
    pbVar1 = (byte *)(lVar15 + 0x28);
    puVar11[0x52] = param_1;
    puVar11[0x53] = param_2;
    puVar11[0x54] = pbVar1;
    if ((((0 < (int)uVar24) && (uVar24 < 0x65)) && ((*pbVar1 & 1) != 0)) &&
       ((int)*(uint *)(lVar15 + 0x34) < 1 || uVar24 <= *(uint *)(lVar15 + 0x34))) {
      func_0x000108755be0(puVar11 + 4,*(undefined8 *)(param_1 + 0x98),param_2);
      if ((*(byte *)(puVar11 + 0x3e) & 1) == 0) {
        func_0x000108755f54();
LAB_10874f15c:
        func_0x000108755ad0();
      }
      else {
        lVar23 = param_1;
        FUN_10874f7d8(param_1,param_2,pbVar1,1);
        if ((int)lVar23 == 0) goto LAB_10874f15c;
        func_0x000108756714();
        if (((extraout_w8_00 | extraout_w9_00) & 1) == 0) {
          func_0x0001087566f4();
          puVar11[0x4e] = puVar11 + 0x4b;
          FUN_10874f8e8();
          FUN_1086d1cac(puVar11 + 0x4b);
        }
        lVar23 = *(long *)(lVar15 + 0xb0);
        puVar11[0x6c] = lVar23;
        if ((*(uint *)(lVar15 + 0xb8) & 1) == 0) {
          func_0x0001087567a0();
          func_0x00010875624c();
          func_0x000108755e38(param_1);
          func_0x000108756244();
          func_0x00010875631c();
          goto LAB_10874f15c;
        }
        piVar2 = (int *)(puVar11 + 0x3f);
        piVar13 = piVar2;
        FUN_10874e168(piVar2,param_1,puVar11 + 4,lVar23);
        iVar3 = *piVar2;
        if (iVar3 == 2) {
          FUN_10874f7bc(puVar11 + 0x52,0);
          goto LAB_10874f15c;
        }
        puVar11[0x55] = 0;
        func_0x000107c28258();
        puVar11[0x56] = piVar13;
        *(undefined1 *)(puVar11 + 0x57) = 1;
        uVar14 = *(undefined8 *)(param_1 + 0x98);
        uVar25 = puVar11[0x42];
        puVar11[99] = lVar23 + 1;
        puVar11[100] = 1;
        func_0x0001087560f4(puVar11 + 0x58,uVar14,param_2,lVar23 + 1,1,uVar25,puVar11[0x43],param_3)
        ;
        *(undefined1 *)(puVar11 + 0x61) = 0;
        *(undefined1 *)(puVar11 + 0x62) = 0;
        lVar23 = puVar11[0x59];
        lVar15 = puVar11[0x58];
        uVar4 = (uint)((lVar23 - lVar15) / 0x1a8);
        bVar9 = iVar3 != 1;
        cVar7 = !bVar9 && SBORROW4(uVar24,uVar4);
        uVar10 = bVar9 || uVar24 == uVar4;
        cVar8 = !bVar9 && (int)(uVar24 - uVar4) < 0;
        if ((bVar9 || (int)uVar24 <= (int)uVar4) || ((*(byte *)((long)puVar11 + 0x1ec) & 1) != 0)) {
LAB_10874f230:
          func_0x0001086a9b00(lVar15,lVar23);
          func_0x000108756110();
          if (((bool)uVar10 || cVar8 != cVar7) || (*(int *)(puVar11 + 0x3f) != 0)) {
            if (extraout_x8 != extraout_x9) {
              func_0x0001087566c8();
              FUN_108747190(extraout_x9_00 + 0x28);
            }
          }
          else {
            lVar15 = puVar11[0x6b];
            *(undefined8 *)(lVar15 + 0xb0) = 0;
            *(undefined1 *)(lVar15 + 0xb8) = 0;
            FUN_108747190(lVar15 + 0x28);
            func_0x000108755f28();
            FUN_108864744(auStack_1f8);
            FUN_10867b070(&uStack_20,auStack_1f8);
            func_0x000107c28948(auStack_1f8);
            func_0x0001086a9b00(uStack_20,puStack_18);
            func_0x0001086c0798(&uStack_20,puStack_18,puVar11[0x58],puVar11[0x59]);
            func_0x0001086a9b44(puVar11 + 0x58,&uStack_20);
            func_0x00010867b9fc(&uStack_20);
          }
          func_0x000107c2825c();
          puVar16 = auStack_1f8;
          func_0x000108755f6c(puVar16,puVar11[0x69]);
          FUN_10874fa30();
          func_0x0001087564e0();
          uStack_10 = 1;
          puStack_18 = puVar16;
          func_0x00010875624c();
          func_0x000108755e38();
          func_0x000108756558();
          func_0x000108756388(puVar11[0x69]);
          func_0x000108756378();
          FUN_10874fd24(extraout_x8_00);
          func_0x000108755ad0();
          func_0x000108756324();
        }
        else {
          uVar24 = (extraout_w8_00 | extraout_w9_00) ^ 1;
          lVar20 = puVar11[0x2f];
          uVar6 = 1;
          cVar7 = '\0';
          cVar8 = lVar20 < 0;
          uVar10 = lVar20 == 0;
          if ((lVar20 < 1) && (((byte)uVar10 & uVar24) == 0)) goto LAB_10874f230;
          puVar12 = puVar11 + 0x5b;
          puVar17 = puVar11 + 0x45;
          FUN_10874ee34(puVar17,pbVar1,1,1);
          *puVar12 = 0;
          puVar11[0x5c] = 0;
          *(undefined1 *)(puVar11 + 0x5d) = 0;
          func_0x000107c28258();
          puVar11[0x5c] = puVar17;
          *(undefined1 *)(puVar11 + 0x5d) = 1;
          FUN_10874f9a4(puVar11 + 0x67,*(undefined8 *)(param_1 + 200),param_2,1,uVar25,puVar11 + 4,
                        uVar24 & 1);
          puVar11[0x68] = puVar11[0x49];
          if (puVar11[0x49] != 0) {
            do {
              func_0x00010875583c();
            } while (extraout_w10 != 0);
          }
          func_0x0001087561c4();
          plVar18 = puVar11 + 0x67;
          FUN_10874da20(puVar11 + 0x66,plVar18,puVar11 + 0x68,puVar11 + 0x5e);
          puVar17 = puVar11 + 0x6d;
          puVar19 = puVar11 + 0x65;
          *puVar19 = puVar11[0x66];
          do {
            func_0x00010875583c();
          } while (extraout_w10_00 != 0);
          func_0x000108755af0(*puVar19);
          if ((extraout_w8_01 >> 1 & 1) == 0) {
            *(undefined1 *)((long)puVar11 + 0x374) = 0;
            lVar15 = puVar11[0x65];
            func_0x000108755790();
            lVar23 = *plVar18;
            if (lVar23 == 0) {
              func_0x000107c3a5c0();
              lVar23 = *plVar18;
            }
            plVar21 = (long *)(lVar15 + 0x10);
            lVar20 = 1;
            do {
              if (*plVar21 == 0) {
                cVar7 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                if (bVar9) {
                  *plVar21 = lVar20;
                  cVar7 = ExclusiveMonitorsStatus();
                }
                cVar8 = '\0';
                uVar10 = cVar7 == '\0';
                uVar6 = 1;
                cVar7 = '\0';
                uVar22 = (ulong)-(uint)(byte)uVar10;
                uVar24 = 0;
              }
              else {
                func_0x000108755b70();
                plVar21 = extraout_x8_01;
                lVar20 = extraout_x9_01;
                uVar22 = extraout_x11;
                uVar24 = extraout_w10_01;
              }
              if ((uVar22 & 1) != 0) {
                func_0x0001087559ac();
                if ((bool)uVar10) {
                  func_0x000108755860();
                  uVar10 = extraout_w8;
                  if ((bool)uVar6) {
                    uVar10 = extraout_w9;
                  }
                  func_0x000108755964();
                  *(undefined1 *)plVar18 = uVar10;
                  func_0x00010875584c(0);
                  *(long **)(lVar15 + 0x90) = plVar18;
                }
                func_0x0001087559bc();
                *(long *)(extraout_x8_03 + 0x20) = lVar23;
                func_0x0001087558a0(*(undefined8 *)(lVar15 + 0x90));
                *(undefined8 *)(lVar15 + 0x10) = 0;
                return;
              }
            } while ((uVar24 >> 1 & 1) == 0);
          }
          FUN_1086cc64c();
          *puVar17 = *puVar19;
          func_0x000108755f40();
          func_0x000108755f38();
          func_0x000108755d30();
          func_0x000108755d28();
          func_0x000108755e10();
          func_0x000107c2825c();
          if ((*(byte *)(puVar11 + 0x62) & 1) == 0) {
            func_0x000108756698();
          }
          puVar11[0x61] = puVar12;
          func_0x000108755a58();
          if (((extraout_w8_02 >> 1 & 1) != 0) ||
             (func_0x000108755a58(), (extraout_w8_03 >> 5 & 1) != 0)) {
            func_0x000108755bd8();
            func_0x000107c278b8(auStack_1f8,&UNK_10f4b325f);
            func_0x000108756180();
            func_0x000108755800();
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10874f5b8);
            (*pcVar5)();
          }
          func_0x0001087561d4();
          if (*(int *)((long)puVar11 + 0x36c) == 0) {
            FUN_1086cc694();
            FUN_10874f7bc(puVar11 + 0x52,*(undefined4 *)puVar17);
          }
          else {
            func_0x000108755f28();
            func_0x000108755be0(auStack_1f8);
            func_0x0001087564fc();
            func_0x000107c288c8(auStack_1f8);
            if ((*(byte *)(puVar11 + 0x3e) & 1) != 0) {
              func_0x000108756258(auStack_1f8,puVar11[0x69]);
              func_0x000108756684();
              func_0x0001087563dc(puVar11[0x69]);
              func_0x0001087560f4(auStack_1f8,*(undefined8 *)(extraout_x8_02 + 0x98));
              func_0x0001087564e8();
              func_0x00010875631c();
              func_0x000108755c24();
              lVar15 = puVar11[0x58];
              lVar23 = puVar11[0x59];
              goto LAB_10874f230;
            }
            func_0x000108755f54();
          }
          func_0x000108755ad0();
          func_0x000108755c24();
        }
        func_0x000108755e18();
      }
      func_0x000108755c10();
      goto LAB_10874f144;
    }
    FUN_10874f7bc(puVar11 + 0x52,4);
  }
  func_0x000108755ad0();
LAB_10874f144:
  func_0x000108755ac8();
  func_0x000108755ae8();
  return;
}



/* Entry: 10874f6e4; end: 10874f7bb;  */

void FUN_10874f6e4(long param_1)

{
  undefined1 *puVar1;
  int in_w4;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_68 [40];
  
  func_0x000108755cec();
  uStack_80 = 0;
  uStack_78 = 0;
  func_0x0001087567b4();
  puVar1 = auStack_90;
  FUN_10875082c(puVar1);
  func_0x0001087564f4();
  func_0x00010875640c();
  func_0x000108755c38();
  func_0x000107c28824(puVar1,auStack_a8,(&PTR_DAT_110a6a840)[in_w4]);
  func_0x000107c2884c(auStack_68,puVar1);
  func_0x000108756770();
  func_0x00010875621c();
  func_0x000108756214();
  func_0x000108755b68();
  func_0x000108755dd8();
  func_0x000108755df8(*(undefined8 *)(param_1 + 0x88));
  func_0x0001087561fc();
  return;
}



/* Entry: 10874f7bc; end: 10874f7d7;  */

void FUN_10874f7bc(long *param_1,int param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_68 [40];
  
  lVar1 = *param_1;
  func_0x000108755cec(lVar1,param_1[1],*(undefined4 *)(param_1[2] + 0x120));
  uStack_80 = 0;
  uStack_78 = 0;
  func_0x0001087567b4();
  puVar2 = auStack_90;
  FUN_10875082c(puVar2);
  func_0x0001087564f4();
  func_0x00010875640c();
  func_0x000108755c38();
  func_0x000107c28824(puVar2,auStack_a8,(&PTR_DAT_110a6a840)[param_2]);
  func_0x000107c2884c(auStack_68,puVar2);
  func_0x000108756770();
  func_0x00010875621c();
  func_0x000108756214();
  func_0x000108755b68();
  func_0x000108755dd8();
  func_0x000108755df8(*(undefined8 *)(lVar1 + 0x88));
  func_0x0001087561fc();
  return;
}



/* Entry: 10874f7d8; end: 10874f8e7;  */

undefined8 FUN_10874f7d8(long param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_48 [40];
  
  if (*(char *)(param_3 + 0x138) == '\x01') {
    if ((*(int *)(param_3 + 0x130) == param_4) && ((*(byte *)(param_3 + 0x134) & 1) == 0)) {
      plVar3 = *(long **)(param_1 + 0xe8);
      uStack_60 = 0;
      uStack_58 = 0;
      func_0x000108755cec();
      func_0x0001087567b4();
      uVar1 = 0x6b0240;
      if (param_4 == 2) {
        uVar1 = 0x6b0241;
      }
      puVar2 = auStack_70;
      FUN_10875082c(puVar2,uVar1);
      func_0x000107c29054();
      func_0x00010875640c();
      func_0x000108755c38();
      func_0x0001087559dc();
      func_0x000107c2884c(auStack_48,puVar2);
      func_0x0001087564c8(*(undefined8 *)(*plVar3 + 0x50));
      func_0x000107c2882c(auStack_48);
      func_0x000108755b68();
      func_0x000108755dd8();
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
      FUN_10874a794(param_1,param_2,param_3,1);
      *(undefined4 *)(param_3 + 4) = 0;
      *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
    }
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}



/* Entry: 10874f8e8; end: 10874f9a3;  */

void FUN_10874f8e8(long *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  undefined4 uStack_88;
  undefined2 uStack_84;
  undefined1 auStack_80 [24];
  long lStack_68;
  undefined1 auStack_60 [32];
  undefined1 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_88 = 0x1200b1;
  uStack_84 = 1;
  lVar6 = param_3;
  uVar8 = param_4;
  func_0x000107c27994(auStack_80);
  iVar7 = (int)uVar8;
  lStack_68 = param_3;
  FUN_1086e7aa4(auStack_60,param_4);
  uVar3 = param_3 == 0;
  plVar5 = (long *)&uStack_88;
  uStack_40 = uVar3;
  func_0x0001087564c8(*(undefined8 *)(*param_1 + 0x28));
  puVar4 = &uStack_88;
  func_0x0001086cf1c0(puVar4);
  func_0x000108756650(uStack_38);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    func_0x000108755c2c();
    func_0x0001086cf1c0();
    func_0x000108755b58();
    uVar1 = 100;
    uVar2 = 0;
    if (iVar7 != 1) {
      uVar1 = 0;
      uVar2 = 100;
    }
    func_0x000107c28da8(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010874fa28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x20))(puVar4,plVar5,lVar6,param_5,uVar2,uVar1,0,param_7,param_6);
    return;
  }
  return;
}



/* Entry: 10874f9a4; end: 10874fa2b;  */

void FUN_10874f9a4(undefined8 param_1,long *param_2,undefined8 param_3,int param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = 100;
  uVar2 = 0;
  if (param_4 != 1) {
    uVar1 = 0;
    uVar2 = 100;
  }
  func_0x000107c28da8(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010874fa28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_1,param_2,param_3,param_5,uVar2,uVar1,0,param_7,param_6);
  return;
}



/* Entry: 10874fa2c; end: 10874fa2f;  */

void FUN_10874fa2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 10874fa30; end: 10874fd23;  */

void FUN_10874fa30(undefined8 *param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,int param_6)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined ***pppuVar6;
  long lVar7;
  long extraout_x8;
  undefined *puVar8;
  code *extraout_x8_00;
  long extraout_x9;
  undefined *puVar9;
  undefined **ppuVar10;
  long *plVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  long lVar14;
  long lVar15;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  byte bStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  byte bStack_88;
  undefined8 *puStack_78;
  undefined1 uStack_70;
  
  lVar14 = *(long *)(param_4 + 0xa8);
  lVar7 = *(long *)(param_4 + 0xc0);
  lVar15 = *(long *)(param_4 + 0xe0);
  puVar4 = param_1;
  func_0x0001087564e0();
  uStack_70 = 1;
  puStack_78 = puVar4;
  FUN_1087479b8(param_4,param_5);
  ppuStack_f0 = (undefined **)0x0;
  ppuStack_e8 = (undefined **)0x0;
  uStack_e0 = 0;
  FUN_108747820(&ppuStack_b8,param_4,param_3,param_2 + 0xf8,param_5,&ppuStack_f0);
  FUN_10869ccc0(&ppuStack_f0);
  *(undefined2 *)(param_1 + 6) = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  lVar5 = param_4;
  FUN_108747dfc();
  if ((int)lVar5 == 0) {
    FUN_108747e24(param_1,&ppuStack_b8);
    if (*(char *)((long)param_1 + 0x31) == '\x01') {
      FUN_10874737c(param_4,param_6 != 2);
    }
  }
  else {
    FUN_108747a3c(&ppuStack_f0,param_4,param_2 + 0x98,param_3,param_2 + 0xf8);
    FUN_10874b684(param_2,param_3,param_4,param_6 != 2,&ppuStack_f0);
    func_0x000108755f18(ppuStack_b0);
    func_0x000108756678();
    FUN_10867d03c(param_1,extraout_x9 + extraout_x8);
    ppuVar3 = ppuStack_e8;
    ppuVar10 = ppuStack_b8;
    ppuVar12 = ppuStack_f0;
    while( true ) {
      ppuVar2 = ppuVar3;
      ppuVar13 = ppuVar12;
      if (ppuVar10 != ppuStack_b0) {
        ppuVar2 = ppuStack_b0;
        ppuVar13 = ppuVar10;
      }
      if (ppuVar10 == ppuStack_b0 || ppuVar12 == ppuVar3) break;
      if (((ulong)ppuVar12[5] & 1) == 0) {
        if ((*(byte *)(ppuVar10 + 5) & 1) == 0) {
          puVar8 = ppuVar12[3];
          puVar9 = ppuVar10[3];
          goto LAB_10874fb78;
        }
LAB_10874fb94:
        func_0x0001087566a4();
        FUN_10867b444();
        ppuVar12 = ppuVar12 + 0x35;
      }
      else {
        if (*(byte *)(ppuVar10 + 5) != 0) {
          puVar8 = ppuVar12[4];
          puVar9 = ppuVar10[4];
LAB_10874fb78:
          if ((long)puVar9 < (long)puVar8) goto LAB_10874fb94;
        }
        FUN_10867b444(param_1,ppuVar10);
        ppuVar10 = ppuVar10 + 0x35;
      }
    }
    for (; ppuVar13 != ppuVar2; ppuVar13 = ppuVar13 + 0x35) {
      func_0x000108756400();
      FUN_10867b444();
    }
    *(byte *)(param_1 + 6) = (bStack_88 | bStack_c0) & 1;
    func_0x000108748ad0(param_1 + 3,&uStack_d8);
    func_0x000108748a7c(&ppuStack_f0);
  }
  uVar1 = lVar7 + lVar14 + lVar15;
  if (0 < (int)uVar1) {
    plVar11 = *(long **)(param_2 + 0xe8);
    uStack_e0 = 0;
    uStack_d8 = 0;
    ppuStack_f0 = &PTR_FUN_110a609a8;
    ppuStack_e8 = (undefined **)0x0;
    uStack_d0 = 699;
    pppuVar6 = &ppuStack_f0;
    func_0x0001087564f4(pppuVar6);
    (**(code **)(*plVar11 + 0x78))(plVar11,pppuVar6,uVar1 & 0x7fffffff);
    func_0x000108755dd8();
    plVar11 = *(long **)(param_2 + 0xe8);
    uStack_e0 = 0;
    uStack_d8 = 0;
    ppuStack_f0 = &PTR_FUN_110a609a8;
    ppuStack_e8 = (undefined **)0x0;
    uStack_d0 = 0x2ba;
    func_0x0001087564f4();
    FUN_10874b9f8();
    func_0x000108756558();
    func_0x000108756174(*(undefined8 *)(*plVar11 + 0x18));
    (*extraout_x8_00)();
    func_0x000108755dd8();
  }
  func_0x000108748a7c(&ppuStack_b8);
  return;
}



/* Entry: 10874fd24; end: 108750027;  */

void FUN_10874fd24(long param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  long *plVar3;
  long *plVar4;
  long in_stack_00000000;
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [40];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  undefined1 auStack_90 [32];
  undefined4 uStack_70;
  
  puVar2 = auStack_120;
  plVar3 = *(long **)(param_1 + 0xe8);
  func_0x000108755ba8();
  uStack_70 = 0x2b4;
  puVar1 = auStack_90;
  func_0x000108755fa0(puVar1);
  func_0x000107c29054();
  FUN_108750940();
  func_0x000107c2825c();
  uStack_98 = in_x5;
  (**(code **)(*plVar3 + 0x18))(plVar3,puVar1,&uStack_98);
  func_0x000108755ea0();
  plVar4 = *(long **)(param_1 + 0xe8);
  func_0x000108755ba8();
  uStack_70 = 0x2b5;
  func_0x000108755fa0();
  func_0x000107c29054();
  func_0x000107c278b8(auStack_b0,&UNK_10f4b0eff);
  func_0x000108681620(in_x4);
  func_0x0001087564d0(plVar3,auStack_b0);
  (**(code **)(*plVar4 + 0x18))(plVar4,plVar3,in_x6);
  puVar1 = auStack_b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar1);
  func_0x000108755ea0();
  plVar3 = *(long **)(param_1 + 0xe8);
  func_0x000108755ba8();
  uStack_70 = 0x2b7;
  func_0x000108755fa0();
  func_0x000107c29054();
  func_0x000107c278b8(auStack_c8,&UNK_10f4b0eff);
  func_0x0001087564d0(puVar1,auStack_c8);
  func_0x00010875654c(*(undefined8 *)(*plVar3 + 0x18));
  puVar1 = auStack_c8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar1);
  func_0x000108755ea0();
  if (*(char *)(in_stack_00000000 + 8) == '\x01') {
    plVar3 = *(long **)(param_1 + 0xe8);
    func_0x000108755ba8();
    uStack_70 = 0x2b6;
    func_0x000108755fa0();
    func_0x000107c29054();
    func_0x000107c278b8(auStack_e0,&UNK_10f4b0eff);
    func_0x0001087564d0(puVar1,auStack_e0);
    func_0x00010875654c(*(undefined8 *)(*plVar3 + 0x18));
    puVar1 = auStack_e0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar1);
    func_0x000108755ea0();
  }
  func_0x000108755ba8();
  uStack_70 = 0x2b9;
  func_0x000108755fa0();
  func_0x000107c29054();
  func_0x00010875640c();
  func_0x000107c278b8(auStack_120);
  func_0x000107c28824(puVar1,auStack_120,"Success");
  func_0x000107c2884c(auStack_108,puVar1);
  func_0x000108756770();
  func_0x00010875621c();
  func_0x000108756304();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_120);
  func_0x000108755ea0();
  plVar3 = *(long **)(param_1 + 0xe8);
  func_0x000108755ba8();
  uStack_70 = 0x2b8;
  func_0x000108755fa0();
  func_0x000107c29054();
  (**(code **)(*plVar3 + 0x78))(plVar3,puVar2,(long)(int)in_x4);
  func_0x000108755ea0();
  return;
}



/* Entry: 108750028; end: 108750797;  */

void FUN_108750028(undefined8 param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  byte *pbVar14;
  long lVar15;
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  int extraout_w8_03;
  long lVar16;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  ulong uVar17;
  uint extraout_w9;
  int extraout_w9_00;
  long extraout_x9;
  long extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  uint extraout_w10_01;
  uint uVar18;
  long lVar19;
  ulong extraout_x11;
  long unaff_x21;
  byte *pbVar20;
  undefined8 unaff_x22;
  undefined1 auStack_1f8 [480];
  undefined1 *puStack_18;
  undefined1 uStack_10;
  
  func_0x00010875615c();
  func_0x000108755c48();
  puVar6 = (undefined8 *)0x390;
  __Znwm();
  *puVar6 = FUN_108753b70;
  puVar6[1] = FUN_108753ec4;
  *(uint *)(puVar6 + 0x71) = param_3;
  puVar6[0x6b] = unaff_x22;
  puVar6[0x6a] = unaff_x21;
  puVar7 = puVar6;
  func_0x000108755de0();
  func_0x000108755fb4();
  puVar6[0x4f] = 0;
  func_0x000107c28258();
  puVar6[0x50] = puVar7;
  *(undefined1 *)(puVar6 + 0x51) = 1;
  lVar16 = unaff_x21 + 0x280;
  func_0x000108756610();
  puVar6[0x6c] = lVar16;
  if (lVar16 == 0) {
    FUN_10874f6e4();
  }
  else {
    pbVar14 = (byte *)(lVar16 + 0x28);
    puVar6[0x52] = unaff_x21;
    puVar6[0x53] = unaff_x22;
    puVar6[0x54] = pbVar14;
    if ((((0 < (int)param_3) && (param_3 < 0x65)) && ((*pbVar14 & 1) != 0)) &&
       ((int)*(uint *)(lVar16 + 0x34) < 1 || param_3 <= *(uint *)(lVar16 + 0x34))) {
      func_0x000108755be0(puVar6 + 4,*(undefined8 *)(unaff_x21 + 0x98));
      if ((*(byte *)(puVar6 + 0x3e) & 1) == 0) {
        func_0x000108755f48();
LAB_1087501d8:
        func_0x000108755ad0();
      }
      else {
        lVar15 = unaff_x21;
        FUN_10874f7d8();
        if ((int)lVar15 == 0) goto LAB_1087501d8;
        func_0x000108756714();
        if (((extraout_w8 | extraout_w9) & 1) == 0) {
          func_0x0001087566f4();
          puVar6[0x4e] = puVar6 + 0x4b;
          FUN_10874f8e8();
          func_0x00010875623c();
        }
        lVar15 = *(long *)(lVar16 + 0xa0);
        puVar6[0x6d] = lVar15;
        if ((*(uint *)(lVar16 + 0xa8) & 1) == 0) {
          func_0x0001087567a0();
          func_0x00010875624c();
          func_0x000108756398();
          func_0x000108755e38();
          func_0x000108756244();
          func_0x00010875631c();
          goto LAB_1087501d8;
        }
        lVar16 = lVar15 + -1;
        if (lVar15 == 0x7fffffffffffffff) {
          lVar16 = 0x7fffffffffffffff;
        }
        piVar8 = (int *)(puVar6 + 0x3f);
        FUN_10874e168();
        if ((*(int *)(puVar6 + 0x3f) == 2) && ((*(byte *)(puVar6 + 0x34) & 1) != 0)) {
          func_0x000108755f60();
          goto LAB_1087501d8;
        }
        puVar7 = puVar6 + 0x55;
        *puVar7 = 0;
        puVar6[0x56] = 0;
        *(undefined1 *)(puVar6 + 0x57) = 0;
        func_0x000107c28258();
        puVar6[0x56] = piVar8;
        *(undefined1 *)(puVar6 + 0x57) = 1;
        uVar9 = *(undefined8 *)(unaff_x21 + 0x98);
        puVar6[99] = lVar16;
        puVar6[100] = (ulong)(lVar15 != 0x7fffffffffffffff);
        func_0x000108755ef0(puVar6 + 0x58,uVar9);
        func_0x000107c2825c();
        puVar6[0x65] = puVar7;
        *(undefined1 *)(puVar6 + 0x61) = 0;
        *(undefined1 *)(puVar6 + 0x62) = 0;
        lVar16 = puVar6[0x59];
        puVar6[0x6e] = lVar16;
        lVar15 = puVar6[0x58];
        puVar6[0x6f] = lVar15;
        bVar2 = *(byte *)(puVar6 + 0x44);
        *(byte *)((long)puVar6 + 0x38d) = bVar2;
        *(byte *)((long)puVar6 + 0x38e) = *(byte *)((long)puVar6 + 0x1ec);
        lVar19 = puVar6[0x2f];
        if ((((int)((lVar16 - lVar15) / 0x1a8) < (int)param_3) && ((bVar2 & 1) != 0)) &&
           ((*(byte *)((long)puVar6 + 0x1ec) & 1) == 0)) {
          if ((lVar19 < 1) && (((uint)(lVar19 == 0) & ((extraout_w8 | extraout_w9) ^ 1)) == 0))
          goto LAB_108750334;
          puVar7 = puVar6 + 0x5b;
          puVar11 = puVar6 + 0x45;
          FUN_10874ee34(puVar11,pbVar14,2,1);
          *puVar7 = 0;
          puVar6[0x5c] = 0;
          *(undefined1 *)(puVar6 + 0x5d) = 0;
          func_0x000107c28258();
          puVar6[0x5c] = puVar11;
          *(undefined1 *)(puVar6 + 0x5d) = 1;
          FUN_10874f9a4(puVar6 + 0x68,*(undefined8 *)(unaff_x21 + 200));
          puVar6[0x69] = puVar6[0x49];
          if (puVar6[0x49] != 0) {
            do {
              func_0x00010875583c();
            } while (extraout_w10 != 0);
          }
          func_0x0001087561c4();
          plVar12 = puVar6 + 0x68;
          FUN_10874da20(puVar6 + 0x67,plVar12,puVar6 + 0x69,puVar6 + 0x5e);
          puVar11 = puVar6 + 0x70;
          puVar13 = puVar6 + 0x66;
          *puVar13 = puVar6[0x67];
          do {
            func_0x00010875583c();
          } while (extraout_w10_00 != 0);
          func_0x000108755af0(*puVar13);
          if ((extraout_w8_00 >> 1 & 1) == 0) {
            *(undefined1 *)((long)puVar6 + 0x38c) = 0;
            lVar16 = puVar6[0x66];
            func_0x000108755790();
            lVar15 = *plVar12;
            if (lVar15 == 0) {
              func_0x000107c3a5c0();
              lVar15 = *plVar12;
            }
            func_0x000108755c18();
            plVar12 = extraout_x8_00;
            lVar19 = extraout_x9;
            do {
              if (*plVar12 == 0) {
                cVar3 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                if (bVar5) {
                  *plVar12 = lVar19;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                uVar17 = (ulong)-(uint)(cVar3 == '\0');
                uVar18 = 0;
              }
              else {
                func_0x000108755b70();
                plVar12 = extraout_x8_01;
                lVar19 = extraout_x9_00;
                uVar17 = extraout_x11;
                uVar18 = extraout_w10_01;
              }
              if ((uVar17 & 1) != 0) {
                pbVar20 = *(byte **)(lVar16 + 0x90);
                bVar2 = pbVar20[1];
                uVar17 = (ulong)bVar2;
                bVar5 = *pbVar20 <= bVar2;
                pbVar14 = pbVar20;
                if (bVar2 == *pbVar20) {
                  func_0x000108755860();
                  iVar1 = extraout_w8_03;
                  if (bVar5) {
                    iVar1 = extraout_w9_00;
                  }
                  pbVar14 = (byte *)(ulong)(iVar1 * 0x18 + 0x10);
                  _malloc();
                  uVar17 = 0;
                  *pbVar14 = (byte)iVar1;
                  pbVar14[1] = 0;
                  pbVar14[8] = 0;
                  pbVar14[9] = 0;
                  pbVar14[10] = 0;
                  pbVar14[0xb] = 0;
                  pbVar14[0xc] = 0;
                  pbVar14[0xd] = 0;
                  pbVar14[0xe] = 0;
                  pbVar14[0xf] = 0;
                  *(byte **)(pbVar20 + 8) = pbVar14;
                  *(byte **)(lVar16 + 0x90) = pbVar14;
                }
                pbVar20 = pbVar14 + uVar17 * 0x18 + 0x10;
                pbVar20[0] = 0;
                pbVar20[1] = 0;
                pbVar20[2] = 0;
                pbVar20[3] = 0;
                pbVar20[4] = 0;
                pbVar20[5] = 0;
                pbVar20[6] = 0;
                pbVar20[7] = 0;
                *(undefined8 **)(pbVar14 + uVar17 * 0x18 + 0x18) = puVar6;
                *(long *)(pbVar14 + uVar17 * 0x18 + 0x20) = lVar15;
                func_0x0001087558a0(*(undefined8 *)(lVar16 + 0x90));
                *(undefined8 *)(lVar16 + 0x10) = 0;
                return;
              }
            } while ((uVar18 >> 1 & 1) == 0);
          }
          FUN_1086cc64c();
          *puVar11 = *puVar13;
          func_0x000108755f40();
          func_0x0001087561f4();
          func_0x000108755d30();
          func_0x0001087560b8();
          func_0x000108755d28();
          func_0x000107c2825c();
          if ((*(byte *)(puVar6 + 0x62) & 1) == 0) {
            func_0x000108756698();
          }
          puVar6[0x61] = puVar7;
          func_0x000108755a58();
          if (((extraout_w8_01 >> 1 & 1) != 0) ||
             (func_0x000108755a58(), (extraout_w8_02 >> 5 & 1) != 0)) {
            func_0x000108755bd8();
            func_0x000107c278b8(auStack_1f8,&UNK_10f4b327f);
            func_0x000108756180();
            func_0x000108755800();
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10875069c);
            (*pcVar4)();
          }
          func_0x0001087561d4();
          if (*(int *)((long)puVar6 + 900) == 0) {
            FUN_1086cc694();
            FUN_108750798(puVar6 + 0x52,*(undefined4 *)puVar11);
          }
          else {
            func_0x000108755be0(auStack_1f8,*(undefined8 *)(puVar6[0x6a] + 0x98),puVar6[0x6b]);
            func_0x0001087564fc();
            func_0x000107c288c8(auStack_1f8);
            if ((*(byte *)(puVar6 + 0x3e) & 1) == 0) {
              func_0x000108755f48();
            }
            else {
              func_0x000108756258(auStack_1f8,puVar6[0x6a]);
              func_0x0001087563dc();
              if (*(int *)(puVar6 + 0x3f) != 2) {
                func_0x000108755ebc();
                func_0x000108755ef0(auStack_1f8);
                func_0x0001087564e8();
                func_0x00010875631c();
                func_0x000108755c24();
                lVar19 = puVar6[0x2f];
                lVar15 = puVar6[0x58];
                lVar16 = puVar6[0x59];
                bVar2 = *(byte *)(puVar6 + 0x44);
                goto LAB_1087502e8;
              }
              func_0x000108755f60();
            }
          }
          func_0x000108755ad0();
          func_0x000108755c24();
        }
        else {
LAB_1087502e8:
          if (((lVar19 == 0) || ((bVar2 & 1) != 0)) ||
             (*(int *)(puVar6 + 0x71) <= (int)((lVar16 - lVar15) / 0x1a8))) {
LAB_108750334:
            if (lVar15 != lVar16) {
              func_0x000108756620(puVar6[0x6c] + 0x28,*(undefined8 *)(lVar16 + -0x188),
                                  *(undefined8 *)(lVar16 + -0x180));
            }
          }
          else {
            func_0x000108756620(puVar6[0x6c] + 0x28,0,0);
          }
          puVar10 = auStack_1f8;
          func_0x000108755f6c(puVar10,puVar6[0x6a]);
          FUN_10874fa30();
          func_0x0001087564e0();
          uStack_10 = 1;
          puStack_18 = puVar10;
          func_0x00010875624c();
          func_0x000108756398();
          func_0x000108755e38();
          func_0x000108756558();
          func_0x000108756388(puVar6[0x6a]);
          func_0x000108756378();
          FUN_10874fd24(extraout_x8);
          func_0x000108755ad0();
          func_0x000108756324();
        }
        func_0x000108755e18();
      }
      func_0x000108755c10();
      goto LAB_1087501c0;
    }
    FUN_108750798(puVar6 + 0x52,4);
  }
  func_0x000108755ad0();
LAB_1087501c0:
  func_0x000108755ac8();
  func_0x000108755ae8();
  return;
}



/* Entry: 108750798; end: 1087507b3;  */

void FUN_108750798(long *param_1,int param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_68 [40];
  
  lVar1 = *param_1;
  func_0x000108755cec(lVar1,param_1[1],*(undefined4 *)(param_1[2] + 0x120));
  uStack_80 = 0;
  uStack_78 = 0;
  func_0x0001087567b4();
  puVar2 = auStack_90;
  FUN_10875082c(puVar2);
  func_0x0001087564f4();
  func_0x00010875640c();
  func_0x000108755c38();
  func_0x000107c28824(puVar2,auStack_a8,(&PTR_DAT_110a6a840)[param_2]);
  func_0x000107c2884c(auStack_68,puVar2);
  func_0x000108756770();
  func_0x00010875621c();
  func_0x000108756214();
  func_0x000108755b68();
  func_0x000108755dd8();
  func_0x000108755df8(*(undefined8 *)(lVar1 + 0x88));
  func_0x0001087561fc();
  return;
}



/* Entry: 1087507b4; end: 10875082b;  */

void FUN_1087507b4(long param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  func_0x000108755eb0();
  func_0x000108755f18(*(undefined8 *)(param_1 + 8));
  func_0x000108756678();
  func_0x00010875648c();
  uVar1 = param_3[1];
  for (lVar2 = *param_3 + 0x20; uVar3 = lVar2 - 0x20, uVar3 != uVar1; lVar2 = lVar2 + 0x1a8) {
    if (*(char *)(lVar2 + 8) == '\x01') {
      func_0x0001087563f4();
      FUN_10867b1ac();
      if ((param_2 & 1) != 0) {
        FUN_10867b444();
        param_2 = uVar3;
      }
    }
  }
  return;
}



/* Entry: 10875082c; end: 10875086f;  */

void FUN_10875082c(void)

{
  func_0x000108756130();
  func_0x000108755c38();
  func_0x000108755928(0x241);
  func_0x0001087559dc();
  func_0x0001087558b0();
  return;
}



/* Entry: 108750870; end: 1087508fb;  */

undefined8 FUN_108750870(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined1 auStack_38 [24];
  
  if (((uint)(param_2 >> 0x11) & 0x7fff) < 0x47) {
    puVar2 = (&PTR_DAT_113268bb8)[param_2 >> 0x10 & 0xffff];
  }
  else {
    puVar2 = &UNK_10f3158b1;
  }
  func_0x000108755c38(param_1,puVar2);
  uVar1 = (uint)param_2 & 0xffff;
  if (uVar1 < 0x2b8) {
    puVar2 = (&PTR_s_success_113269028)[uVar1];
  }
  else {
    puVar2 = &UNK_10f3158c2;
  }
  func_0x000107c28824(param_1,auStack_38,puVar2);
  func_0x0001087558b0();
  return param_1;
}



/* Entry: 1087508fc; end: 10875093f;  */

void FUN_1087508fc(void)

{
  func_0x000108756130();
  func_0x000108755c38();
  func_0x000108755928(0x243);
  func_0x0001087559dc();
  func_0x0001087558b0();
  return;
}



/* Entry: 108750940; end: 108750983;  */

void FUN_108750940(void)

{
  func_0x000108756130();
  func_0x000108755c38();
  func_0x000108755928(0x245);
  func_0x0001087559dc();
  func_0x0001087558b0();
  return;
}



/* Entry: 108750984; end: 108750987;  */

undefined8 * FUN_108750984(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6a690;
  param_1[1] = &PTR_FUN_110a6a708;
  param_1[2] = &PTR_DAT_110a6a738;
  func_0x000108750bd4(param_1 + 0x50);
  func_0x000107c28cc4(param_1 + 0x4e);
  func_0x000107c28eb4(param_1 + 0x46);
  func_0x000107c289f8(param_1 + 0x40);
  func_0x000107c289f8(param_1 + 0x3a);
  func_0x000107c289f8(param_1 + 0x34);
  func_0x000107c289f8(param_1 + 0x2e);
  func_0x000107c289f8(param_1 + 0x28);
  func_0x000107c289f8(param_1 + 0x22);
  func_0x000107c27914(param_1 + 0x1f);
  func_0x000107c288a4(param_1 + 0x1d);
  func_0x000107c28abc(param_1 + 0x1b);
  func_0x000107c29188(param_1 + 0x19);
  func_0x000107c28ec0(param_1 + 0x17);
  func_0x000107c28ebc(param_1 + 0x15);
  func_0x000107c28808(param_1 + 0x13);
  func_0x000107c27a6c(param_1 + 0x11);
  FUN_10865a95c(param_1 + 5);
  FUN_108687d5c(param_1 + 2);
  return param_1;
}



/* Entry: 108750988; end: 10875099b;  */

void FUN_108750988(void)

{
  FUN_108750b04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10875099c; end: 1087509bb;  */

undefined8 * FUN_10875099c(undefined8 *param_1)

{
  param_1[-1] = &PTR_FUN_110a6a690;
  *param_1 = &PTR_FUN_110a6a708;
  param_1[1] = &PTR_DAT_110a6a738;
  func_0x000108750bd4(param_1 + 0x4f);
  func_0x000107c28cc4(param_1 + 0x4d);
  func_0x000107c28eb4(param_1 + 0x45);
  func_0x000107c289f8(param_1 + 0x3f);
  func_0x000107c289f8(param_1 + 0x39);
  func_0x000107c289f8(param_1 + 0x33);
  func_0x000107c289f8(param_1 + 0x2d);
  func_0x000107c289f8(param_1 + 0x27);
  func_0x000107c289f8(param_1 + 0x21);
  func_0x000107c27914(param_1 + 0x1e);
  func_0x000107c288a4(param_1 + 0x1c);
  func_0x000107c28abc(param_1 + 0x1a);
  func_0x000107c29188(param_1 + 0x18);
  func_0x000107c28ec0(param_1 + 0x16);
  func_0x000107c28ebc(param_1 + 0x14);
  func_0x000107c28808(param_1 + 0x12);
  func_0x000107c27a6c(param_1 + 0x10);
  FUN_10865a95c(param_1 + 4);
  FUN_108687d5c(param_1 + 1);
  return param_1 + -1;
}



/* Entry: 1087509bc; end: 108750a4b;  */

void FUN_1087509bc(void)

{
  undefined1 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108755eb0();
  func_0x000107c2887c();
  uVar1 = *(undefined1 *)(unaff_x19 + 0xc);
  *(undefined4 *)(unaff_x20 + 8) = *(undefined4 *)(unaff_x19 + 8);
  *(undefined1 *)(unaff_x20 + 0xc) = uVar1;
  return;
}



/* Entry: 108750a4c; end: 108750a77;  */

void FUN_108750a4c(long *param_1)

{
  long lVar1;
  
  if (((*(byte *)((long)param_1 + 0xc) & 1) == 0) &&
     (lVar1 = *param_1, (int)param_1[1] == *(int *)(lVar1 + 8))) {
    *(int *)(lVar1 + 4) = *(int *)(lVar1 + 4) + -1;
  }
  return;
}



/* Entry: 108750a78; end: 108750aab;  */

void FUN_108750a78(undefined8 *param_1)

{
  __ZNSt13runtime_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE();
  *param_1 = &PTR_FUN_110a6a828;
  return;
}



/* Entry: 108750aac; end: 108750ae3;  */

long FUN_108750aac(long param_1)

{
  FUN_10874eefc();
  func_0x000108755b14();
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_108750a4c(param_1 + 8);
  }
  return param_1;
}



/* Entry: 108750ae4; end: 108750b03;  */

bool FUN_108750ae4(undefined8 param_1,long param_2)

{
  FUN_1087470cc(param_1,param_2 + 8);
  return (int)param_1 != 2;
}



/* Entry: 108750b04; end: 108750c67;  */

undefined8 * FUN_108750b04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6a690;
  param_1[1] = &PTR_FUN_110a6a708;
  param_1[2] = &PTR_DAT_110a6a738;
  func_0x000108750bd4(param_1 + 0x50);
  func_0x000107c28cc4(param_1 + 0x4e);
  func_0x000107c28eb4(param_1 + 0x46);
  func_0x000107c289f8(param_1 + 0x40);
  func_0x000107c289f8(param_1 + 0x3a);
  func_0x000107c289f8(param_1 + 0x34);
  func_0x000107c289f8(param_1 + 0x2e);
  func_0x000107c289f8(param_1 + 0x28);
  func_0x000107c289f8(param_1 + 0x22);
  func_0x000107c27914(param_1 + 0x1f);
  func_0x000107c288a4(param_1 + 0x1d);
  func_0x000107c28abc(param_1 + 0x1b);
  func_0x000107c29188(param_1 + 0x19);
  func_0x000107c28ec0(param_1 + 0x17);
  func_0x000107c28ebc(param_1 + 0x15);
  func_0x000107c28808(param_1 + 0x13);
  func_0x000107c27a6c(param_1 + 0x11);
  FUN_10865a95c(param_1 + 5);
  FUN_108687d5c(param_1 + 2);
  return param_1;
}



/* Entry: 108750c68; end: 108750d3b;  */

long FUN_108750c68(long *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar7 = param_1[1];
  if ((uVar7 != 0) && (param_1[3] != 0)) {
    FUN_108848654();
    uVar8 = uVar7 - 1;
    if ((uVar7 & uVar8) == 0) {
      uVar9 = param_2 & uVar8;
    }
    else {
      uVar9 = param_2;
      if (uVar7 <= param_2) {
        uVar1 = 0;
        uVar6 = (uint)uVar7;
        if (uVar6 != 0) {
          uVar1 = (uint)param_2 / uVar6;
        }
        uVar9 = (ulong)((uint)param_2 - uVar1 * uVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + uVar9 * 8);
    uVar3 = param_2;
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        uVar4 = plVar5[1];
        if (uVar4 != param_2) break;
        func_0x0001087564bc();
        if ((int)uVar3 != 0) {
          return (long)plVar5;
        }
      }
      if ((uVar7 & uVar8) == 0) {
        uVar4 = uVar4 & uVar8;
      }
      else if (uVar7 <= uVar4) {
        uVar2 = 0;
        if (uVar7 != 0) {
          uVar2 = uVar4 / uVar7;
        }
        uVar4 = uVar4 - uVar2 * uVar7;
      }
    } while (uVar4 == uVar9);
  }
  return 0;
}



/* Entry: 108750d3c; end: 108750edb;  */

void FUN_108750d3c(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar3 = param_1;
  plVar5 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar3 = param_2;
  }
  plVar7 = (long *)param_1[1];
  if (plVar7 > param_2 || param_2 == plVar7) {
    if (plVar7 <= param_2) {
      return;
    }
    plVar3 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar7 < (long *)0x3) || (((ulong)plVar7 & (long)plVar7 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar3) {
      plVar3 = (long *)(1L << (-LZCOUNT((long)plVar3 - 1) & 0x3fU));
    }
    if (param_2 <= plVar3) {
      param_2 = plVar3;
    }
    if (plVar7 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      FUN_108750edc(param_1,0);
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm(lVar2);
    FUN_108750edc(param_1,lVar2);
    param_1[1] = (long)param_2;
    lVar2 = *param_1;
    for (plVar3 = (long *)0x0; param_2 != plVar3; plVar3 = (long *)((long)plVar3 + 1)) {
      *(undefined8 *)(lVar2 + (long)plVar3 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      plVar5 = (long *)plVar3[1];
      uVar4 = (long)param_2 - 1;
      uVar1 = 0;
      if (param_2 != (long *)0x0) {
        uVar1 = (ulong)plVar5 / (ulong)param_2;
      }
      plVar7 = plVar5;
      if (param_2 <= plVar5) {
        plVar7 = (long *)((long)plVar5 - uVar1 * (long)param_2);
      }
      if (((ulong)param_2 & uVar4) == 0) {
        plVar7 = (long *)((ulong)plVar5 & uVar4);
      }
      *(long **)(lVar2 + (long)plVar7 * 8) = param_1 + 2;
      while (plVar5 = plVar3, plVar3 = (long *)*plVar5, plVar3 != (long *)0x0) {
        plVar6 = (long *)plVar3[1];
        if (((ulong)param_2 & uVar4) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar4);
        }
        else if (param_2 <= plVar6) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar6 / (ulong)param_2;
          }
          plVar6 = (long *)((long)plVar6 - uVar1 * (long)param_2);
        }
        if (plVar6 != plVar7) {
          if (*(long *)(lVar2 + (long)plVar6 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar6 * 8) = plVar5;
            plVar7 = plVar6;
          }
          else {
            *plVar5 = *plVar3;
            *plVar3 = **(undefined8 **)(lVar2 + (long)plVar6 * 8);
            **(long **)(lVar2 + (long)plVar6 * 8) = (long)plVar3;
            plVar3 = plVar5;
          }
        }
      }
    }
    return;
  }
  func_0x000104bd35f4();
  lVar2 = *plVar3;
  *plVar3 = (long)plVar5;
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108750edc; end: 108750ef3;  */

void FUN_108750edc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108750ef4; end: 108750f8b;  */

long * FUN_108750ef4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x000108750c40(lVar1 + 0x10);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 108750f8c; end: 10875100b;  */

void FUN_108750f8c(void)

{
  undefined8 *puVar1;
  undefined8 unaff_x20;
  
  func_0x000108755d48();
  puVar1 = (undefined8 *)0x90;
  __Znwm();
  *puVar1 = FUN_1087555dc;
  puVar1[1] = FUN_1087556e4;
  FUN_10875100c(puVar1 + 4);
  func_0x0001087560e4();
  func_0x0001087558f4();
  puVar1[0xf] = unaff_x20;
  *(undefined1 *)(puVar1 + 0x11) = 0;
  func_0x000108755d18();
  func_0x000108755b38();
  return;
}



/* Entry: 10875100c; end: 108751033;  */

void FUN_10875100c(long param_1,long param_2)

{
  func_0x000108750f38();
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x50) = 0;
  return;
}



/* Entry: 108751034; end: 10875113b;  */

void FUN_108751034(long *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  
  func_0x000108755988();
  plVar2 = param_1;
  func_0x000108755e5c(FUN_10875556c);
  func_0x0001087558f4();
  func_0x000108756430();
  FUN_10875113c();
  func_0x000108755bb8();
  do {
    func_0x00010875583c();
  } while (extraout_w10 != 0);
  func_0x000108755af0(param_1[4]);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 6) = 0;
    func_0x000108755790();
    if (*plVar2 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x000108755c18();
    plVar2 = extraout_x8;
    do {
      if (*plVar2 == 0) {
        func_0x000108755890();
        plVar2 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar3 = extraout_w11_00;
      }
      else {
        func_0x000108755b70();
        plVar2 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar3 = extraout_w11;
      }
      if ((uVar3 & 1) != 0) {
        func_0x0001087557ec();
        if ((bool)in_ZR) {
          func_0x000108755860();
          func_0x0001087557a0();
          func_0x000108755748();
        }
        func_0x00010875571c();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x000108756044();
  func_0x000108755b14();
  func_0x000108755afc();
  func_0x000108755ad0();
  func_0x000108755ac8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10875113c; end: 1087512f7;  */

void FUN_10875113c(long param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  uint extraout_w8;
  long *extraout_x8;
  long *plVar2;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  long *unaff_x22;
  
  func_0x000108755998();
  func_0x000108755ab8(FUN_10875544c);
  func_0x0001087558f4();
  FUN_10874c27c(param_1 + 0x50);
  func_0x000108755d08();
  do {
    func_0x00010875583c();
  } while (extraout_w10 != 0);
  func_0x0001087559cc();
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x68) = 0;
    func_0x000108755790();
    if (*unaff_x22 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x000108755c18();
    plVar2 = extraout_x8;
    do {
      if (*plVar2 == 0) {
        func_0x000108755890();
        plVar2 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar3 = extraout_w11_00;
      }
      else {
        func_0x000108755b70();
        plVar2 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar3 = extraout_w11;
      }
      if ((uVar3 & 1) != 0) {
        func_0x0001087557ec();
        if ((bool)in_ZR) {
          func_0x000108755860();
          func_0x0001087557a0();
          func_0x000108755748();
        }
        func_0x00010875571c();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x000108756088();
  func_0x000108755b1c();
  func_0x000108755b04();
  func_0x000108755ad0();
  func_0x000108755ac8();
  func_0x000108755ae8();
  return;
}



/* Entry: 1087512f8; end: 10875133b;  */

void FUN_1087512f8(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108755974();
  *(undefined4 *)(unaff_x20 + 0x20) = *(undefined4 *)(unaff_x19 + 0x20);
  return;
}



/* Entry: 10875133c; end: 1087513bb;  */

void FUN_10875133c(void)

{
  undefined8 *puVar1;
  undefined8 unaff_x20;
  
  func_0x000108755d48();
  puVar1 = (undefined8 *)0x68;
  __Znwm();
  *puVar1 = FUN_1087546e0;
  puVar1[1] = FUN_1087547e0;
  FUN_1087513bc(puVar1 + 4);
  func_0x0001087560e4();
  func_0x0001087558f4();
  puVar1[10] = unaff_x20;
  *(undefined1 *)(puVar1 + 0xc) = 0;
  func_0x000108755d18();
  func_0x000108755b38();
  return;
}



/* Entry: 1087513bc; end: 1087513e3;  */

void FUN_1087513bc(long param_1,long param_2)

{
  FUN_1087512f8();
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1087513e4; end: 1087514eb;  */

void FUN_1087513e4(long *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  
  func_0x000108755988();
  plVar2 = param_1;
  func_0x000108755e5c(FUN_108754670);
  func_0x0001087558f4();
  func_0x000108756430();
  FUN_1087514ec();
  func_0x000108755bb8();
  do {
    func_0x00010875583c();
  } while (extraout_w10 != 0);
  func_0x000108755af0(param_1[4]);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 6) = 0;
    func_0x000108755790();
    if (*plVar2 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x000108755c18();
    plVar2 = extraout_x8;
    do {
      if (*plVar2 == 0) {
        func_0x000108755890();
        plVar2 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar3 = extraout_w11_00;
      }
      else {
        func_0x000108755b70();
        plVar2 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar3 = extraout_w11;
      }
      if ((uVar3 & 1) != 0) {
        func_0x0001087557ec();
        if ((bool)in_ZR) {
          func_0x000108755860();
          func_0x0001087557a0();
          func_0x000108755748();
        }
        func_0x00010875571c();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x000108756044();
  func_0x000108755b14();
  func_0x000108755afc();
  func_0x000108755ad0();
  func_0x000108755ac8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087514ec; end: 108751683;  */

void FUN_1087514ec(long *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  
  func_0x000108755998();
  plVar2 = param_1;
  func_0x000108755ab8(FUN_108754568);
  func_0x0001087558f4();
  func_0x000108756358();
  FUN_10874efb0();
  func_0x000108755d08();
  do {
    func_0x00010875583c();
  } while (extraout_w10 != 0);
  func_0x0001087559cc();
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0xd) = 0;
    func_0x000108755790();
    if (*plVar2 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x000108755c18();
    plVar2 = extraout_x8;
    do {
      if (*plVar2 == 0) {
        func_0x000108755890();
        plVar2 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar3 = extraout_w11_00;
      }
      else {
        func_0x000108755b70();
        plVar2 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar3 = extraout_w11;
      }
      if ((uVar3 & 1) != 0) {
        func_0x0001087557ec();
        if ((bool)in_ZR) {
          func_0x000108755860();
          func_0x0001087557a0();
          func_0x000108755748();
        }
        func_0x00010875571c();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x000108756088();
  func_0x000108755b1c();
  func_0x000108755b04();
  func_0x000108755ad0();
  func_0x000108755ac8();
  func_0x000108755ae8();
  return;
}



/* Entry: 108751684; end: 1087516c7;  */

void FUN_108751684(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108755974();
  *(undefined4 *)(unaff_x20 + 0x20) = *(undefined4 *)(unaff_x19 + 0x20);
  return;
}



/* Entry: 1087516c8; end: 108751747;  */

void FUN_1087516c8(void)

{
  undefined8 *puVar1;
  undefined8 unaff_x20;
  
  func_0x000108755d48();
  puVar1 = (undefined8 *)0x68;
  __Znwm();
  *puVar1 = FUN_108754080;
  puVar1[1] = FUN_108754180;
  FUN_108751748(puVar1 + 4);
  func_0x0001087560e4();
  func_0x0001087558f4();
  puVar1[10] = unaff_x20;
  *(undefined1 *)(puVar1 + 0xc) = 0;
  func_0x000108755d18();
  func_0x000108755b38();
  return;
}



/* Entry: 108751748; end: 10875176f;  */

void FUN_108751748(long param_1,long param_2)

{
  FUN_108751684();
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108751770; end: 108751877;  */

void FUN_108751770(long *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  
  func_0x000108755988();
  plVar2 = param_1;
  func_0x000108755e5c(FUN_108754010);
  func_0x0001087558f4();
  func_0x000108756430();
  FUN_108751878();
  func_0x000108755bb8();
  do {
    func_0x00010875583c();
  } while (extraout_w10 != 0);
  func_0x000108755af0(param_1[4]);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 6) = 0;
    func_0x000108755790();
    if (*plVar2 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x000108755c18();
    plVar2 = extraout_x8;
    do {
      if (*plVar2 == 0) {
        func_0x000108755890();
        plVar2 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar3 = extraout_w11_00;
      }
      else {
        func_0x000108755b70();
        plVar2 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar3 = extraout_w11;
      }
      if ((uVar3 & 1) != 0) {
        func_0x0001087557ec();
        if ((bool)in_ZR) {
          func_0x000108755860();
          func_0x0001087557a0();
          func_0x000108755748();
        }
        func_0x00010875571c();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x000108756044();
  func_0x000108755b14();
  func_0x000108755afc();
  func_0x000108755ad0();
  func_0x000108755ac8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108751878; end: 108751a0f;  */

void FUN_108751878(long *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  
  func_0x000108755998();
  plVar2 = param_1;
  func_0x000108755ab8(FUN_108753f08);
  func_0x0001087558f4();
  func_0x000108756358();
  FUN_108750028();
  func_0x000108755d08();
  do {
    func_0x00010875583c();
  } while (extraout_w10 != 0);
  func_0x0001087559cc();
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0xd) = 0;
    func_0x000108755790();
    if (*plVar2 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x000108755c18();
    plVar2 = extraout_x8;
    do {
      if (*plVar2 == 0) {
        func_0x000108755890();
        plVar2 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar3 = extraout_w11_00;
      }
      else {
        func_0x000108755b70();
        plVar2 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar3 = extraout_w11;
      }
      if ((uVar3 & 1) != 0) {
        func_0x0001087557ec();
        if ((bool)in_ZR) {
          func_0x000108755860();
          func_0x0001087557a0();
          func_0x000108755748();
        }
        func_0x00010875571c();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x000108756088();
  func_0x000108755b1c();
  func_0x000108755b04();
  func_0x000108755ad0();
  func_0x000108755ac8();
  func_0x000108755ae8();
  return;
}



/* Entry: 108751a10; end: 108751a5f;  */

undefined8 * FUN_108751a10(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x000107c27994(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 108751a60; end: 108751adf;  */

void FUN_108751a60(void)

{
  undefined8 *puVar1;
  undefined8 unaff_x20;
  
  func_0x000108755d48();
  puVar1 = (undefined8 *)0x60;
  __Znwm();
  *puVar1 = FUN_108753a44;
  puVar1[1] = FUN_108753b38;
  FUN_108751ae0(puVar1 + 4);
  func_0x0001087560e4();
  func_0x0001087558f4();
  puVar1[9] = unaff_x20;
  *(undefined1 *)(puVar1 + 0xb) = 0;
  func_0x000108755d18();
  func_0x000108755b38();
  return;
}



/* Entry: 108751ae0; end: 108751b07;  */

void FUN_108751ae0(long param_1,long param_2)

{
  FUN_108751a10();
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = 0;
  return;
}



/* Entry: 108751b08; end: 108751c0f;  */

void FUN_108751b08(long *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  
  func_0x000108755988();
  plVar2 = param_1;
  func_0x000108755e5c(FUN_1087539d4);
  func_0x0001087558f4();
  func_0x000108756430();
  FUN_108751c10();
  func_0x000108755bb8();
  do {
    func_0x00010875583c();
  } while (extraout_w10 != 0);
  func_0x000108755af0(param_1[4]);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 6) = 0;
    func_0x000108755790();
    if (*plVar2 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x000108755c18();
    plVar2 = extraout_x8;
    do {
      if (*plVar2 == 0) {
        func_0x000108755890();
        plVar2 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar3 = extraout_w11_00;
      }
      else {
        func_0x000108755b70();
        plVar2 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar3 = extraout_w11;
      }
      if ((uVar3 & 1) != 0) {
        func_0x0001087557ec();
        if ((bool)in_ZR) {
          func_0x000108755860();
          func_0x0001087557a0();
          func_0x000108755748();
        }
        func_0x00010875571c();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x000108756044();
  func_0x000108755b14();
  func_0x000108755afc();
  func_0x000108755ad0();
  func_0x000108755ac8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108751c10; end: 108751da3;  */

void FUN_108751c10(long *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  
  func_0x000108755998();
  plVar2 = param_1;
  func_0x000108755ab8(FUN_1087538cc);
  func_0x0001087558f4();
  func_0x000108756358();
  FUN_10874abb8();
  func_0x000108755d08();
  do {
    func_0x00010875583c();
  } while (extraout_w10 != 0);
  func_0x0001087559cc();
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0xd) = 0;
    func_0x000108755790();
    if (*plVar2 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x000108755c18();
    plVar2 = extraout_x8;
    do {
      if (*plVar2 == 0) {
        func_0x000108755890();
        plVar2 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar3 = extraout_w11_00;
      }
      else {
        func_0x000108755b70();
        plVar2 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar3 = extraout_w11;
      }
      if ((uVar3 & 1) != 0) {
        func_0x0001087557ec();
        if ((bool)in_ZR) {
          func_0x000108755860();
          func_0x0001087557a0();
          func_0x000108755748();
        }
        func_0x00010875571c();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x000108756088();
  func_0x000108755b1c();
  func_0x000108755b04();
  func_0x000108755ad0();
  func_0x000108755ac8();
  func_0x000108755ae8();
  return;
}



/* Entry: 108751da4; end: 108751ddf;  */

void FUN_108751da4(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar1 = param_2 + 1;
  lVar2 = *plVar1;
  *param_1 = *param_2;
  plVar3 = param_1 + 1;
  *plVar3 = lVar2;
  lVar4 = param_2[2];
  param_1[2] = lVar4;
  if (lVar4 != 0) {
    *(long **)(lVar2 + 0x10) = plVar3;
    *param_2 = plVar1;
    *plVar1 = 0;
    param_2[2] = 0;
    return;
  }
  *param_1 = plVar3;
  return;
}



/* Entry: 108751de0; end: 108751e7b;  */

void FUN_108751de0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  long lVar2;
  undefined8 in_stack_00000018;
  
  func_0x0001087567dc();
  plVar1 = param_1;
  FUN_10874971c();
  if (*plVar1 == 0) {
    lVar2 = 0x30;
    __Znwm();
    *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)*param_4;
    *(undefined8 *)(lVar2 + 0x28) = 0;
    FUN_108748718(param_1,in_stack_00000018,plVar1,lVar2);
    FUN_1087488b8();
  }
  func_0x0001087563f4();
  return;
}



/* Entry: 108751e7c; end: 108751edb;  */

void FUN_108751e7c(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000108755974();
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  uVar2 = *(undefined8 *)(unaff_x19 + 0x30);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x31);
  *(undefined8 *)(unaff_x20 + 0x39) = *(undefined8 *)(unaff_x19 + 0x39);
  *(undefined8 *)(unaff_x20 + 0x31) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x28) = uVar1;
  return;
}



/* Entry: 108751edc; end: 108751f5b;  */

void FUN_108751edc(void)

{
  undefined8 *puVar1;
  undefined8 unaff_x20;
  
  func_0x000108755d48();
  puVar1 = (undefined8 *)0x88;
  __Znwm();
  *puVar1 = FUN_108753430;
  puVar1[1] = FUN_108753538;
  FUN_108751f5c(puVar1 + 4);
  func_0x0001087560e4();
  func_0x0001087558f4();
  puVar1[0xe] = unaff_x20;
  *(undefined1 *)(puVar1 + 0x10) = 0;
  func_0x000108755d18();
  func_0x000108755b38();
  return;
}



/* Entry: 108751f5c; end: 108751f83;  */

void FUN_108751f5c(long param_1,long param_2)

{
  FUN_108751e7c();
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_2 + 0x48) = 0;
  return;
}



/* Entry: 108751f84; end: 10875208b;  */

void FUN_108751f84(long *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  
  func_0x000108755988();
  plVar2 = param_1;
  func_0x000108755e5c(FUN_10875385c);
  func_0x0001087558f4();
  func_0x000108756430();
  FUN_10875208c();
  func_0x000108755bb8();
  do {
    func_0x00010875583c();
  } while (extraout_w10 != 0);
  func_0x000108755af0(param_1[4]);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 6) = 0;
    func_0x000108755790();
    if (*plVar2 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x000108755c18();
    plVar2 = extraout_x8;
    do {
      if (*plVar2 == 0) {
        func_0x000108755890();
        plVar2 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar3 = extraout_w11_00;
      }
      else {
        func_0x000108755b70();
        plVar2 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar3 = extraout_w11;
      }
      if ((uVar3 & 1) != 0) {
        func_0x0001087557ec();
        if ((bool)in_ZR) {
          func_0x000108755860();
          func_0x0001087557a0();
          func_0x000108755748();
        }
        func_0x00010875571c();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x000108756044();
  func_0x000108755b14();
  func_0x000108755afc();
  func_0x000108755ad0();
  func_0x000108755ac8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10875208c; end: 10875226f;  */

void FUN_10875208c(long *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long lVar2;
  uint extraout_w8;
  undefined8 extraout_x8;
  long lVar3;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  uint extraout_w10_02;
  uint extraout_w10_03;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  long *plVar5;
  
  func_0x0001087567dc();
  plVar5 = (long *)*param_1;
  lVar2 = 0x50;
  __Znwm();
  func_0x000108755e5c(FUN_1087537b8);
  func_0x000107c287c4(extraout_x8,lVar2 + 0x10);
  (**(code **)(*(long *)plVar5[0x19] + 0x20))
            (lVar2 + 0x20,(long *)plVar5[0x19],param_1 + 1,0x7fffffffffffffff,100,0,0,0,
             (char)param_1[8]);
  *(long *)(lVar2 + 0x38) = *(long *)(lVar2 + 0x20);
  if (*(long *)(lVar2 + 0x20) != 0) {
    do {
      func_0x00010875583c();
    } while (extraout_w10 != 0);
  }
  lVar3 = param_1[4];
  *(long *)(lVar2 + 0x40) = lVar3;
  if (lVar3 != 0) {
    do {
      func_0x00010875583c();
    } while (extraout_w10_00 != 0);
  }
  FUN_10874d638(lVar2 + 0x30,plVar5,param_1 + 1,lVar2 + 0x38,lVar2 + 0x40);
  *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(lVar2 + 0x30);
  do {
    func_0x00010875583c();
  } while (extraout_w10_01 != 0);
  func_0x000108755af0(*(undefined8 *)(lVar2 + 0x28));
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(lVar2 + 0x48) = 0;
    func_0x000108755790();
    if (*plVar5 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x000108755c18();
    plVar5 = extraout_x8_00;
    do {
      if (*plVar5 == 0) {
        func_0x000108755890();
        plVar5 = extraout_x8_02;
        uVar1 = extraout_w10_03;
        uVar4 = extraout_w11_00;
      }
      else {
        func_0x000108755b70();
        plVar5 = extraout_x8_01;
        uVar1 = extraout_w10_02;
        uVar4 = extraout_w11;
      }
      if ((uVar4 & 1) != 0) {
        func_0x0001087557ec();
        if ((bool)in_ZR) {
          func_0x000108755860();
          func_0x0001087557a0();
          func_0x000108755748();
        }
        func_0x00010875571c();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x000107c28834(lVar2 + 0x28);
  func_0x000108755afc();
  func_0x000108755cdc();
  func_0x000108755c40();
  func_0x000108755ce4();
  func_0x000108755ad0();
  func_0x000108755b14();
  func_0x000108755ac8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar2);
  return;
}



/* Entry: 108752270; end: 1087522bb;  */

void FUN_108752270(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_18;
  
  lVar4 = *param_2;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar4;
  uStack_18 = 0;
  func_0x000107c27f9c(&uStack_18);
  return;
}



/* Entry: 1087522bc; end: 108752333;  */

/* WARNING: Removing unreachable block (ram,0x0001005f953c) */
/* WARNING: Removing unreachable block (ram,0x0001005f9544) */
/* WARNING: Removing unreachable block (ram,0x0001005f954c) */

void FUN_1087522bc(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  puVar5 = (undefined8 *)(param_1 + 8);
  FUN_1087523cc(*puVar5,puVar5,param_2);
  plVar6 = (long *)*puVar5;
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 >> 0x21 == 1) {
      (**(code **)(*plVar6 + 0x10))(plVar6,1,puVar5);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  *puVar5 = 0;
  return;
}



/* Entry: 108752334; end: 108752387;  */

void FUN_108752334(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0xa8;
  __Znwm();
  FUN_108752388();
  uStack_30 = 0;
  uStack_28 = 0;
  *param_1 = uVar1;
  param_1[1] = uVar1;
  func_0x000107c27f98(&uStack_30);
  func_0x000107c27f9c(&uStack_28);
  return;
}



/* Entry: 108752388; end: 1087523b3;  */

void FUN_108752388(undefined8 *param_1)

{
  func_0x000107c31510();
  *param_1 = &PTR_FUN_110a6a8b8;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  return;
}



/* Entry: 1087523b4; end: 1087523b7;  */

undefined8 * FUN_1087523b4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 1087523b8; end: 1087523cb;  */

void FUN_1087523b8(void)

{
  func_0x000107c31514();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087523cc; end: 108752443;  */

/* WARNING: Removing unreachable block (ram,0x000108752404) */

long FUN_1087523cc(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long unaff_x20;
  
  func_0x000108755eb0();
  do {
    lVar1 = unaff_x20 + 0x10;
    func_0x000108755c5c();
  } while ((int)lVar1 == 0);
  if (*(char *)(unaff_x20 + 0xa0) == '\x01') {
    *(undefined1 *)(unaff_x20 + 0xa0) = 0;
  }
  *(undefined8 *)(unaff_x20 + 0x98) = *param_3;
  *(undefined1 *)(unaff_x20 + 0xa0) = 1;
  func_0x000108755f00();
  return lVar1;
}



/* Entry: 108752444; end: 1087526df;  */

void FUN_108752444(long param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar3;
  long *plVar4;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  long extraout_x8;
  long lVar5;
  long *extraout_x8_00;
  long *plVar6;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long *extraout_x8_04;
  long *extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  undefined1 extraout_w9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  uint extraout_w10_02;
  uint extraout_w10_03;
  int extraout_w10_04;
  uint extraout_w10_05;
  uint extraout_w10_06;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar7;
  uint extraout_w11_01;
  uint extraout_w11_02;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  
  func_0x0001087567dc();
  func_0x000108755fd0();
  func_0x0001087563a8(FUN_108754ad4);
  *(long *)(unaff_x20 + 0x38) = extraout_x8;
  if (extraout_x8 != 0) {
    do {
      func_0x00010875583c();
    } while (extraout_w10 != 0);
  }
  lVar5 = *unaff_x23;
  *(long *)(param_1 + 0x40) = lVar5;
  if (lVar5 != 0) {
    do {
      func_0x00010875583c();
    } while (extraout_w10_00 != 0);
  }
  func_0x00010875613c();
  func_0x000107c295fc();
  plVar4 = (long *)(param_1 + 0x10);
  func_0x000107c295e8();
  func_0x000108756574();
  func_0x000108756580();
  func_0x000108755b24();
  func_0x000108756628();
  func_0x000108756074();
  func_0x000108756060();
  func_0x0001087560a4();
  func_0x0001087564d8();
  *(undefined8 *)(param_1 + 0x48) = unaff_x21;
  do {
    func_0x00010875583c();
  } while (extraout_w10_01 != 0);
  func_0x0001087559cc();
  if ((extraout_w8_00 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x60) = 0;
    func_0x000108755a90();
    lVar5 = *plVar4;
    if (lVar5 == 0) {
      func_0x000107c3a5c0();
      lVar5 = *plVar4;
    }
    func_0x000108756268();
    plVar6 = extraout_x8_00;
    do {
      if (*plVar6 == 0) {
        func_0x000108755890();
        plVar6 = extraout_x8_02;
        uVar1 = extraout_w10_03;
        uVar7 = extraout_w11_00;
      }
      else {
        func_0x000108755b70();
        plVar6 = extraout_x8_01;
        uVar1 = extraout_w10_02;
        uVar7 = extraout_w11;
      }
      if ((uVar7 & 1) != 0) {
        func_0x0001087559ac();
        if ((bool)in_ZR) {
          func_0x000108755860();
          uVar3 = extraout_w8;
          if ((bool)in_CY) {
            uVar3 = extraout_w9;
          }
          func_0x000108755964();
          *(undefined1 *)plVar4 = uVar3;
          func_0x00010875584c(0);
          *(long **)(unaff_x22 + 0x90) = plVar4;
        }
        func_0x0001087559bc();
        *(long *)(extraout_x8_06 + 0x20) = lVar5;
        goto LAB_108752624;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x000108756260();
  unaff_x22 = *plVar4;
  func_0x000108755b1c();
  func_0x000108755b04();
  uVar3 = unaff_x22 == 1;
  if ((bool)uVar3) {
    func_0x000108755af0(*(undefined8 *)(param_1 + 0x40));
    if ((extraout_w8_02 >> 5 & 1) == 0) {
      func_0x000108755bd8();
      func_0x00010875620c();
      func_0x000108755828();
      func_0x000108755ef8();
    }
    else {
      func_0x000108755a80();
      func_0x000108756234();
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10875266c);
    (*pcVar2)();
  }
  func_0x000108755f7c(*(long *)(unaff_x20 + 0x38));
  do {
    func_0x00010875583c();
  } while (extraout_w10_04 != 0);
  func_0x0001087559cc();
  if ((extraout_w8_01 >> 1 & 1) == 0) {
    func_0x00010875600c();
    func_0x000108755a90();
    lVar5 = *plVar4;
    if (lVar5 == 0) {
      func_0x000107c3a5c0();
      lVar5 = *plVar4;
    }
    func_0x000108756268();
    plVar4 = extraout_x8_03;
    do {
      if (*plVar4 == 0) {
        func_0x000108755890();
        plVar4 = extraout_x8_05;
        uVar1 = extraout_w10_06;
        uVar7 = extraout_w11_02;
      }
      else {
        func_0x000108755b70();
        plVar4 = extraout_x8_04;
        uVar1 = extraout_w10_05;
        uVar7 = extraout_w11_01;
      }
      if ((uVar7 & 1) != 0) {
        func_0x0001087559ac();
        if ((bool)uVar3) {
          func_0x000108755860();
          func_0x0001087557a0();
          func_0x0001087557b0();
          func_0x000108755b84();
        }
        func_0x0001087559bc();
        *(long *)(extraout_x8_07 + 0x20) = lVar5;
LAB_108752624:
        func_0x0001087558a0(*(undefined8 *)(unaff_x22 + 0x90));
        *(undefined8 *)(unaff_x22 + 0x10) = 0;
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x000107c28a1c(param_1 + 0x48);
  func_0x0001087562f0();
  func_0x000108755b1c();
  func_0x000108755ac8();
  func_0x000108755e30();
  func_0x000108755c40();
  func_0x000108755be8();
  func_0x000108755ae8();
  return;
}



/* Entry: 1087526e0; end: 108752a1f;  */

void FUN_1087526e0(long param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar4;
  long lVar5;
  long *plVar6;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  long extraout_x8;
  long *extraout_x8_00;
  long *plVar7;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long *extraout_x8_04;
  long *extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  undefined1 extraout_w9;
  int extraout_w10;
  int extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  int extraout_w10_03;
  uint extraout_w10_04;
  uint extraout_w10_05;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar8;
  uint extraout_w11_01;
  uint extraout_w11_02;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  long in_stack_00000018;
  
  func_0x0001087567dc();
  lVar5 = 0x50;
  __Znwm();
  lVar10 = lVar5;
  func_0x0001087563a8(FUN_1087548e4);
  plVar9 = (long *)(param_2 + 0x20);
  *plVar9 = extraout_x8;
  *(long *)(lVar10 + 0x40) = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x00010875583c();
    } while (extraout_w10 != 0);
  }
  func_0x000107c295fc(lVar5 + 0x10);
  func_0x0001087565d8();
  func_0x000107c314e0(lVar5 + 0x28,*(undefined8 *)(param_1 + 0x10),param_3 * 1000000);
  func_0x000107c28874(&stack0x00000008);
  func_0x000107c28878(3);
  func_0x000108755b24();
  func_0x000108756628();
  *(undefined8 *)(in_stack_00000018 + 8) = 3;
  func_0x000107c2887c(in_stack_00000018,&stack0x00000010);
  FUN_10865ba74(in_stack_00000018,0,plVar9,lVar5 + 0x28,param_1 + 0x38);
  uVar2 = in_stack_00000008;
  in_stack_00000000 = 0;
  in_stack_00000008 = 0;
  *(undefined8 *)(lVar5 + 0x38) = uVar2;
  plVar6 = (long *)register0x00000008;
  func_0x000107c27f9c();
  func_0x0001087564d8();
  *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)(lVar5 + 0x38);
  do {
    func_0x00010875583c();
  } while (extraout_w10_00 != 0);
  func_0x000108755af0(*(undefined8 *)(lVar5 + 0x30));
  if ((extraout_w8_00 >> 1 & 1) == 0) {
    *(undefined1 *)(lVar5 + 0x48) = 0;
    lVar10 = *(long *)(lVar5 + 0x30);
    func_0x000108755aa0();
    lVar11 = *plVar6;
    if (lVar11 == 0) {
      func_0x000107c3a5c0();
      lVar11 = *plVar6;
    }
    func_0x000108756268();
    plVar7 = extraout_x8_00;
    do {
      if (*plVar7 == 0) {
        func_0x000108755890();
        plVar7 = extraout_x8_02;
        uVar1 = extraout_w10_02;
        uVar8 = extraout_w11_00;
      }
      else {
        func_0x000108755b70();
        plVar7 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar8 = extraout_w11;
      }
      if ((uVar8 & 1) != 0) {
        func_0x0001087559ac();
        if ((bool)in_ZR) {
          func_0x000108755860();
          uVar4 = extraout_w8;
          if ((bool)in_CY) {
            uVar4 = extraout_w9;
          }
          func_0x000108755964();
          *(undefined1 *)plVar6 = uVar4;
          func_0x00010875584c(0);
          *(long **)(lVar10 + 0x90) = plVar6;
        }
        func_0x0001087559bc();
        *(long *)(extraout_x8_06 + 0x20) = lVar11;
        goto LAB_108752938;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  plVar6 = (long *)(lVar5 + 0x30);
  func_0x000107c28870();
  lVar10 = *plVar6;
  func_0x000108755cdc();
  func_0x000108755ce4();
  if (lVar10 == 2) {
    func_0x000108755bd8();
    func_0x0001087560c0();
    FUN_10865aaac(plVar6,&stack0x00000008);
    func_0x000108756750();
    func_0x000108755ef8();
  }
  else {
    uVar4 = lVar10 == 1;
    if (!(bool)uVar4) {
      *(long *)(lVar5 + 0x30) = *plVar9;
      do {
        func_0x00010875583c();
      } while (extraout_w10_03 != 0);
      func_0x000108755af0(*(undefined8 *)(lVar5 + 0x30));
      if ((extraout_w8_01 >> 1 & 1) == 0) {
        *(undefined1 *)(lVar5 + 0x48) = 1;
        lVar10 = *(long *)(lVar5 + 0x30);
        func_0x000108755aa0();
        lVar11 = *plVar6;
        if (lVar11 == 0) {
          func_0x000107c3a5c0();
          lVar11 = *plVar6;
        }
        func_0x000108756268();
        plVar9 = extraout_x8_03;
        do {
          if (*plVar9 == 0) {
            func_0x000108755890();
            plVar9 = extraout_x8_05;
            uVar1 = extraout_w10_05;
            uVar8 = extraout_w11_02;
          }
          else {
            func_0x000108755b70();
            plVar9 = extraout_x8_04;
            uVar1 = extraout_w10_04;
            uVar8 = extraout_w11_01;
          }
          if ((uVar8 & 1) != 0) {
            func_0x0001087559ac();
            if ((bool)uVar4) {
              func_0x000108755860();
              func_0x0001087557a0();
              func_0x0001087557b0();
              func_0x000108755b84();
            }
            func_0x0001087559bc();
            *(long *)(extraout_x8_07 + 0x20) = lVar11;
LAB_108752938:
            func_0x0001087558a0(*(undefined8 *)(lVar10 + 0x90));
            *(undefined8 *)(lVar10 + 0x10) = 0;
            return;
          }
        } while ((uVar1 >> 1 & 1) == 0);
      }
      func_0x000107c28a1c(lVar5 + 0x30);
      func_0x0001087562f0();
      func_0x000108755cdc();
      func_0x000108755afc();
      func_0x000108755ac8();
      func_0x000108755be8();
      func_0x000108755ae8();
      return;
    }
    func_0x000108755bd8();
    func_0x0001087565a4();
    func_0x00010875673c();
    func_0x000108755ef8();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x108752990);
  (*pcVar3)();
}



/* Entry: 108752a20; end: 108752a27;  */

void FUN_108752a20(void)

{
  return;
}



/* Entry: 108752a28; end: 108752a4b;  */

void FUN_108752a28(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_110a6a8f8;
  return;
}



/* Entry: 108752a4c; end: 108752a6b;  */

void FUN_108752a4c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_110a6a8f8;
  return;
}



/* Entry: 108752a6c; end: 108752ab3;  */

void FUN_108752a6c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined8 uStack_24;
  
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_40 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uStack_38 = param_2[3];
  uStack_30 = (undefined4)param_2[4];
  uStack_24 = *(undefined8 *)((long)param_2 + 0x2c);
  uStack_2c = (undefined4)*(undefined8 *)((long)param_2 + 0x24);
  uStack_28 = (undefined4)((ulong)*(undefined8 *)((long)param_2 + 0x24) >> 0x20);
  func_0x000107c27914(&uStack_50);
  return;
}



/* Entry: 108752ab4; end: 108752aeb;  */

long FUN_108752ab4(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110a6a958);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 108752aec; end: 108752af7;  */

undefined ** FUN_108752aec(void)

{
  return &PTR_DAT_110a6a958;
}



/* Entry: 108752af8; end: 108752b17;  */

bool FUN_108752af8(undefined8 param_1,long param_2)

{
  FUN_1087470cc(param_1,param_2 + 0x20);
  return (int)param_1 == 2;
}



/* Entry: 108752b18; end: 108752dbf;  */

long FUN_108752b18(undefined8 param_1,undefined8 param_2,ulong *param_3,long param_4,ulong param_5,
                  long param_6)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uStack_78;
  long *plStack_70;
  long lStack_68;
  
  func_0x000108755c04();
  if (param_4 == 3) {
    uVar1 = *param_3;
    FUN_108752af8(uVar1,unaff_x19 + 0x1a8);
    if ((int)uVar1 == 0) {
      func_0x000108756174();
      FUN_10865fa18();
      func_0x0001087563f4();
      FUN_10865fa18();
      return unaff_x19 + 0x1a8;
    }
    func_0x0001087563f4();
    FUN_10865fa18();
  }
  else if (param_4 != 2) {
    if (param_4 <= param_6) {
      plStack_70 = &lStack_68;
      lStack_68 = 0;
      uStack_78 = param_5;
      func_0x000107c28970(param_5);
      lStack_68 = lStack_68 + 1;
      uVar1 = param_5 + 0x1a8;
      lVar5 = unaff_x19;
      while (lVar5 = lVar5 + 0x1a8, lVar5 != unaff_x20) {
        uVar2 = *param_3;
        FUN_108752af8(uVar2,lVar5);
        if ((int)uVar2 == 0) {
          func_0x000107c28970(uVar1,lVar5);
          lStack_68 = lStack_68 + 1;
          uVar1 = uVar1 + 0x1a8;
        }
        else {
          func_0x000108756400();
          func_0x000107c28950();
          unaff_x19 = unaff_x19 + 0x1a8;
        }
      }
      func_0x000108756400();
      func_0x000107c28950();
      for (; param_5 < uVar1; param_5 = param_5 + 0x1a8) {
        func_0x0001087563f4();
        func_0x000107c28950();
      }
      FUN_108752dfc(&uStack_78);
      return unaff_x19 + 0x1a8;
    }
    lVar4 = (param_4 / 2) * 0x1a8;
    lVar5 = unaff_x19 + lVar4;
    do {
      lVar4 = lVar4 + -0x1a8;
      uVar1 = *param_3;
      FUN_108752af8(uVar1,unaff_x19 + lVar4);
      if ((uVar1 & 1) != 0) {
        func_0x000108756538();
        break;
      }
    } while (lVar4 != 0);
    lVar4 = lVar5;
    do {
      lVar3 = lVar4;
      uVar1 = *param_3;
      FUN_108752af8(uVar1,lVar3);
      if ((int)uVar1 == 0) {
        func_0x000108756538();
        break;
      }
      lVar4 = lVar3 + 0x1a8;
      lVar3 = unaff_x20 + 0x1a8;
    } while (lVar4 != unaff_x20);
    if (unaff_x19 == lVar5) {
      return lVar3;
    }
    lVar4 = lVar5;
    if (lVar5 == lVar3) {
      return unaff_x19;
    }
    while( true ) {
      lVar6 = lVar4;
      func_0x0001087566b0();
      FUN_10865fa18();
      unaff_x19 = unaff_x19 + 0x1a8;
      lVar5 = lVar5 + 0x1a8;
      if (lVar5 == lVar3) break;
      lVar4 = lVar5;
      if (unaff_x19 != lVar6) {
        lVar4 = lVar6;
      }
    }
    lVar5 = unaff_x19;
    lVar4 = lVar6;
    if (unaff_x19 == lVar6) {
      return lVar6;
    }
    do {
      while( true ) {
        lVar7 = lVar4;
        FUN_10865fa18(lVar5,lVar6);
        lVar5 = lVar5 + 0x1a8;
        lVar6 = lVar6 + 0x1a8;
        if (lVar6 == lVar3) break;
        lVar4 = lVar6;
        if (lVar5 != lVar7) {
          lVar4 = lVar7;
        }
      }
      lVar6 = lVar7;
      lVar4 = lVar7;
    } while (lVar5 != lVar7);
    return unaff_x19;
  }
  FUN_10865fa18();
  return unaff_x20;
}



/* Entry: 108752dc0; end: 108752dd7;  */

void FUN_108752dc0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108752dd8; end: 108752dfb;  */

undefined8 FUN_108752dd8(undefined8 param_1)

{
  FUN_108752dc0(param_1,0);
  return param_1;
}



/* Entry: 108752dfc; end: 108752e53;  */

long * FUN_108752dfc(long *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong *puVar3;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    puVar3 = (ulong *)param_1[1];
    for (uVar2 = 0; uVar2 < *puVar3; uVar2 = uVar2 + 1) {
      func_0x000107c288e0(lVar1);
      lVar1 = lVar1 + 0x1a8;
    }
  }
  return param_1;
}



/* Entry: 108752e54; end: 108752f93;  */

void FUN_108752e54(long param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 auStack_618 [1496];
  
  puVar6 = param_2[2];
  lVar7 = *(long *)(puVar6 + 8);
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    FUN_1086e0ad4(auStack_618,*(undefined8 *)(lVar7 + 0xb8),param_1);
    func_0x000108755e04();
    func_0x000107c27aa8();
  }
  else {
    if (**(char **)(puVar6 + 0x10) == '\x01') {
      ppuVar2 = &PTR_PTR_113286e08;
      if (*(undefined ***)(param_1 + 0x80) != (undefined **)0x0) {
        ppuVar2 = *(undefined ***)(param_1 + 0x80);
      }
      ppuVar1 = ppuVar2 + 0x18;
      FUN_1086a2990(ppuVar1);
      ppuVar3 = ppuVar1;
      if (((ulong)ppuVar2[0x18] & 1) != 0) {
        ppuVar3 = (undefined **)(ppuVar2[0x18] + 7);
      }
      if (((ppuVar3 != param_2) && ((*(byte *)(param_1 + 0x138) & 1) != 0)) &&
         (**(long **)(puVar6 + 0x18) < *(long *)(param_1 + 0x130))) {
        func_0x000107c29ee4(auStack_618,lVar7 + 0xf8);
        puVar4 = auStack_618;
        FUN_1086a5c08(puVar4,*(undefined8 *)(puVar6 + 0x20),ppuVar1,*(undefined8 *)(param_1 + 0x18))
        ;
        func_0x000107c2a2e0(auStack_618);
        puVar5 = (undefined1 *)**(undefined8 **)(puVar6 + 0x18);
        if ((long)puVar4 <= (long)puVar5) {
          puVar4 = puVar5;
        }
        **(undefined8 **)(puVar6 + 0x18) = puVar4;
      }
    }
    func_0x000107c29260(auStack_618,*(undefined8 *)(lVar7 + 0xb8),param_1,
                        *(undefined8 *)(puVar6 + 0x20));
    func_0x000108755e04();
    func_0x000107c27aa8();
  }
  func_0x000107c27a10(auStack_618);
  return;
}



/* Entry: 108752f94; end: 108752fbf;  */

void FUN_108752f94(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108752fc0; end: 108752fd3;  */

void FUN_108752fc0(void)

{
  FUN_108753058();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108752fd4; end: 108752ffb;  */

undefined8 * FUN_108752fd4(long param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  
  func_0x000107c27f98(param_1 + 0x20);
  puVar2 = (undefined8 *)(param_1 + 0x18);
  plVar6 = (long *)*puVar2;
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar5 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar5 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0,puVar2);
      do {
        uVar5 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar5 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  return puVar2;
}



/* Entry: 108752ffc; end: 108753003;  */

void FUN_108752ffc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108753004; end: 108753017;  */

void FUN_108753004(void)

{
  FUN_108753018();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108753018; end: 108753057;  */

undefined8 * FUN_108753018(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a6a9e0;
  if (*(char *)(param_1 + 0x1a) == '\x01') {
    func_0x000107c27914(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108753058; end: 108753067;  */

void FUN_108753058(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a6a990;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108753068; end: 1087530bb;  */

long FUN_108753068(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 1087530bc; end: 1087530cf;  */

void FUN_1087530bc(void)

{
  func_0x000108753090();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087530d0; end: 108753117;  */

void FUN_1087530d0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *puVar1 = &PTR_SUB_110a6aa20;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107c332b4();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 108753118; end: 10875315f;  */

void FUN_108753118(long param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar2;
  
  *param_2 = &PTR_SUB_110a6aa20;
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107c332b4(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 108753160; end: 108753243;  */

void FUN_108753160(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined8 uStack_34;
  undefined8 uStack_28;
  
  uStack_50 = param_2[2];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uStack_80 = param_2[3];
  uStack_78 = (undefined4)param_2[4];
  uStack_6c = *(undefined8 *)((long)param_2 + 0x2c);
  uStack_74 = (undefined4)*(undefined8 *)((long)param_2 + 0x24);
  uStack_70 = (undefined4)((ulong)*(undefined8 *)((long)param_2 + 0x24) >> 0x20);
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  uStack_48 = param_2[3];
  uStack_40 = (undefined4)param_2[4];
  uStack_34 = *(undefined8 *)((long)param_2 + 0x2c);
  uStack_3c = (undefined4)*(undefined8 *)((long)param_2 + 0x24);
  uStack_38 = (undefined4)((ulong)*(undefined8 *)((long)param_2 + 0x24) >> 0x20);
  lVar2 = *(long *)(*(long *)(param_1 + 8) + 8);
  do {
    uStack_28 = 0;
    lVar1 = lVar2 + 0x10;
    func_0x000107c27ff0(lVar1,&uStack_28,1,2);
    if ((int)lVar1 != 0) {
      if (*(char *)(lVar2 + 0xd0) == '\x01') {
        func_0x000107c27914(lVar2 + 0x98);
        *(undefined1 *)(lVar2 + 0xd0) = 0;
      }
      FUN_1086d48a8(lVar2 + 0x98,&uStack_60);
      *(undefined1 *)(lVar2 + 0xd0) = 1;
      func_0x000108755f00();
      break;
    }
  } while (((uint)uStack_28 >> 1 & 1) == 0);
  func_0x000107c27914(&uStack_60);
  func_0x000107c27914(&uStack_98);
  return;
}



/* Entry: 108753244; end: 10875327b;  */

long FUN_108753244(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110a6aa80);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10875327c; end: 108753287;  */

undefined ** FUN_10875327c(void)

{
  return &PTR_DAT_110a6aa80;
}



/* Entry: 108753288; end: 1087533e7;  */

void FUN_108753288(long *param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 uVar3;
  uint extraout_w8;
  uint extraout_w8_00;
  ulong extraout_x8;
  long *extraout_x8_00;
  long *plVar4;
  long *extraout_x8_01;
  long *extraout_x8_02;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar5;
  long unaff_x19;
  long lVar6;
  
  func_0x0001087562f8();
  if ((extraout_x8 & 1) == 0) {
    func_0x000108756260();
    lVar6 = *param_1;
    func_0x000108755b1c();
    func_0x000108755b04();
    uVar3 = lVar6 == 1;
    if ((bool)uVar3) {
      func_0x000108755af0(*(undefined8 *)(unaff_x19 + 0x40));
      if ((extraout_w8_00 >> 5 & 1) == 0) {
        func_0x000108755bd8();
        func_0x00010875620c();
        func_0x000108755800();
      }
      else {
        func_0x000108755a80();
        func_0x000108756234();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x108753398);
      (*pcVar2)();
    }
    func_0x000108755f7c(*(undefined8 *)(unaff_x19 + 0x38));
    do {
      func_0x00010875583c();
    } while (extraout_w10 != 0);
    func_0x0001087559cc();
    if ((extraout_w8 >> 1 & 1) == 0) {
      func_0x00010875600c();
      func_0x000108755790();
      if (*param_1 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x000108755c18();
      plVar4 = extraout_x8_00;
      do {
        if (*plVar4 == 0) {
          func_0x000108755890();
          plVar4 = extraout_x8_02;
          uVar1 = extraout_w10_01;
          uVar5 = extraout_w11_00;
        }
        else {
          func_0x000108755b70();
          plVar4 = extraout_x8_01;
          uVar1 = extraout_w10_00;
          uVar5 = extraout_w11;
        }
        if ((uVar5 & 1) != 0) {
          func_0x0001087557ec();
          if ((bool)uVar3) {
            func_0x000108755860();
            func_0x0001087557a0();
            func_0x000108755748();
          }
          func_0x00010875571c();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  lVar6 = unaff_x19 + 0x48;
  FUN_1086cc64c(lVar6);
  FUN_1087522bc(unaff_x19 + 0x10,lVar6);
  func_0x000108755b1c();
  func_0x000108755ac8();
  func_0x000108755e30();
  func_0x000108755c40();
  func_0x000108755ce4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087533e8; end: 10875342f;  */

void FUN_1087533e8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x48;
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    lVar1 = param_1 + 0x50;
    func_0x000107c27f9c(param_1 + 0x48);
  }
  func_0x000107c27f9c(lVar1);
  func_0x000108755ac8();
  func_0x000108755e30();
  func_0x000108755c40();
  func_0x000108755ce4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108753430; end: 108753537;  */

void FUN_108753430(long param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  
  if ((*(byte *)(param_1 + 0x80) & 1) == 0) {
    plVar2 = (long *)(param_1 + 0x20);
    FUN_108751f84(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x78);
    do {
      func_0x00010875583c();
    } while (extraout_w10 != 0);
    func_0x000108755af0(*(undefined8 *)(param_1 + 0x70));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x80) = 1;
      func_0x000108755790();
      if (*plVar2 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x000108755c18();
      plVar2 = extraout_x8;
      do {
        if (*plVar2 == 0) {
          func_0x000108755890();
          plVar2 = extraout_x8_01;
          uVar1 = extraout_w10_01;
          uVar3 = extraout_w11_00;
        }
        else {
          func_0x000108755b70();
          plVar2 = extraout_x8_00;
          uVar1 = extraout_w10_00;
          uVar3 = extraout_w11;
        }
        if ((uVar3 & 1) != 0) {
          func_0x0001087557ec();
          if ((bool)in_ZR) {
            func_0x000108755860();
            func_0x0001087557a0();
            func_0x000108755748();
          }
          func_0x00010875571c();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x000107c28834(param_1 + 0x70);
  func_0x000108755cf8();
  func_0x000108755d40();
  func_0x000108755ad0();
  func_0x000108755ac8();
  func_0x000108756520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108753538; end: 10875356f;  */

void FUN_108753538(long param_1)

{
  if (*(char *)(param_1 + 0x80) == '\x01') {
    func_0x000108755cf8();
    func_0x000108755d40();
  }
  func_0x000108755ac8();
  func_0x000108756520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108753570; end: 108753783;  */

void FUN_108753570(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  uint extraout_w8;
  uint extraout_w8_00;
  undefined1 auStack_228 [384];
  byte bStack_a8;
  byte bStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  FUN_1086cc64c(param_1 + 0x78);
  func_0x000108755d40();
  func_0x000108755af0(*(undefined8 *)(param_1 + 0x58));
  if (((extraout_w8 >> 1 & 1) == 0) &&
     (func_0x000108755af0(*(undefined8 *)(param_1 + 0x58)), (extraout_w8_00 >> 5 & 1) == 0)) {
    lVar2 = param_1 + 0x20;
    func_0x000107c2825c();
    lVar3 = lVar2;
    func_0x000108755f98(*(undefined8 *)(param_1 + 0x80));
    if ((lVar3 == 0) ||
       (((*(char *)(lVar3 + 0x160) != '\x01' || (*(char *)(lVar3 + 0x15c) != '\x01')) ||
        (*(int *)(lVar3 + 0x158) != 0)))) goto LAB_1087535ec;
    func_0x000108755be0(auStack_228,*(undefined8 *)(*(long *)(param_1 + 0x80) + 0x98),
                        *(undefined8 *)(param_1 + 0x88));
    if ((bStack_58 & 1) == 0) {
      func_0x000108755ea8(*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x88),
                          lVar3 + 0x28);
    }
    else {
      if (((*(char *)(lVar3 + 0x28) == '\x01') && ((*(uint *)(lVar3 + 0xb8) & 1) == 0)) &&
         ((bVar1 = *(char *)(lVar3 + 0xa8) == '\x01', bVar1 &&
          ((func_0x0001087563b8(*(undefined8 *)(lVar3 + 0xa0)), bVar1 && ((bStack_a8 & 1) != 0))))))
      {
        uStack_48 = 1;
        lStack_50 = lVar2;
        func_0x000108755ca4(*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x88),
                            lVar3 + 0x28,0x254,&lStack_50);
        func_0x000108755dd0();
        func_0x0001087561dc();
        func_0x000108755ad0();
        goto LAB_1087535f4;
      }
      func_0x000108755ea8(*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x88),
                          lVar3 + 0x28);
    }
    func_0x000108755ad0();
    func_0x000108755dd0();
  }
  else {
LAB_1087535ec:
    func_0x000108755ad0();
  }
  func_0x0001087561dc();
LAB_1087535f4:
  func_0x000108755ac8();
  func_0x000108755e40();
  func_0x000108755b04();
  func_0x000108755ae8();
  return;
}



/* Entry: 108753784; end: 1087537b7;  */

void FUN_108753784(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x78);
  func_0x0001087561dc();
  func_0x000108755ac8();
  func_0x000108755e40();
  func_0x000108755b04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087537b8; end: 108753823;  */

void FUN_1087537b8(long param_1)

{
  func_0x000107c28834(param_1 + 0x28);
  func_0x000108755afc();
  func_0x000108755cdc();
  func_0x000108755c40();
  func_0x000108755ce4();
  func_0x000108755ad0();
  func_0x000108755b14();
  func_0x000108755ac8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108753824; end: 10875385b;  */

void FUN_108753824(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x28);
  func_0x000108755cdc();
  func_0x000108755c40();
  func_0x000108755ce4();
  func_0x000108755b14();
  func_0x000108755ac8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}


