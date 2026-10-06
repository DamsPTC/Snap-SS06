/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1086e33f0; end: 1086e33f3;  */

void FUN_1086e33f0(void)

{
  return;
}



/* Entry: 1086e33f4; end: 1086e3493;  */

void FUN_1086e33f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)0x48;
  __Znwm();
  *puVar2 = FUN_1086e4bd4;
  puVar2[1] = FUN_1086e4ce0;
  uVar1 = param_1[1];
  puVar2[4] = *param_1;
  puVar2[5] = uVar1;
  param_1[1] = 0;
  func_0x0001086e5108();
  func_0x0001086e50fc();
  puVar2[6] = param_2;
  *(undefined1 *)(puVar2 + 8) = 0;
  func_0x0001086e51dc(*param_2);
  func_0x0001086e50b8();
  return;
}



/* Entry: 1086e3494; end: 1086e359b;  */

void FUN_1086e3494(long param_1)

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
  long *unaff_x20;
  
  func_0x0001086e4ff4();
  func_0x0001086e5164(FUN_1086e4b64);
  func_0x0001086e4e90();
  FUN_1086e359c(param_1 + 0x28);
  func_0x0001086e508c();
  do {
    func_0x0001086e4d64();
  } while (extraout_w10 != 0);
  func_0x0001086e4eb0();
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x30) = 0;
    func_0x0001086e4d94();
    if (*unaff_x20 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x0001086e50ac();
    plVar2 = extraout_x8;
    do {
      if (*plVar2 == 0) {
        func_0x0001086e4e04();
        plVar2 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar3 = extraout_w11_00;
      }
      else {
        func_0x0001086e4edc();
        plVar2 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar3 = extraout_w11;
      }
      if ((uVar3 & 1) != 0) {
        func_0x0001086e4e20();
        if ((bool)in_ZR) {
          func_0x0001086e4df4();
          func_0x0001086e4da4();
          func_0x0001086e4d74();
        }
        func_0x0001086e4d1c();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x0001086e4f9c();
  func_0x0001086e4e68();
  func_0x0001086e4e78();
  func_0x0001086e4e88();
  func_0x0001086e4e60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1086e359c; end: 1086e36ef;  */

void FUN_1086e359c(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined1 in_ZR;
  long lVar2;
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
  long *plVar4;
  
  plVar4 = (long *)*param_2;
  lVar2 = 0x38;
  __Znwm();
  func_0x0001086e5164(FUN_1086e4abc);
  func_0x000107c287c4(param_1,lVar2 + 0x10);
  FUN_1086e2468(lVar2 + 0x28);
  func_0x0001086e508c();
  do {
    func_0x0001086e4d64();
  } while (extraout_w10 != 0);
  func_0x0001086e4eb0();
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(lVar2 + 0x30) = 0;
    func_0x0001086e4d94();
    if (*plVar4 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x0001086e50ac();
    plVar4 = extraout_x8;
    do {
      if (*plVar4 == 0) {
        func_0x0001086e4e04();
        plVar4 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar3 = extraout_w11_00;
      }
      else {
        func_0x0001086e4edc();
        plVar4 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar3 = extraout_w11;
      }
      if ((uVar3 & 1) != 0) {
        func_0x0001086e4e20();
        if ((bool)in_ZR) {
          func_0x0001086e4df4();
          func_0x0001086e4da4();
          func_0x0001086e4d74();
        }
        func_0x0001086e4d1c();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x0001086e4f9c();
  func_0x0001086e4e68();
  func_0x0001086e4e78();
  func_0x0001086e4e88();
  func_0x0001086e4e60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar2);
  return;
}



/* Entry: 1086e36f0; end: 1086e374f;  */

undefined8 * FUN_1086e36f0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x000107c27994(param_1 + 1,param_2 + 1);
  param_1[4] = param_2[4];
  param_2[4] = 0;
  return param_1;
}



/* Entry: 1086e3750; end: 1086e37e7;  */

void FUN_1086e3750(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x68;
  __Znwm();
  *puVar1 = FUN_1086e4574;
  puVar1[1] = FUN_1086e467c;
  FUN_1086e37e8(puVar1 + 4,param_1);
  func_0x000107c27f94(puVar1 + 2);
  func_0x0001086e4e90();
  puVar1[10] = param_2;
  *(undefined1 *)(puVar1 + 0xc) = 0;
  func_0x0001086e51dc(*param_2);
  func_0x0001086e50b8();
  return;
}



/* Entry: 1086e37e8; end: 1086e380f;  */

void FUN_1086e37e8(long param_1,long param_2)

{
  FUN_1086e36f0();
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1086e3810; end: 1086e3917;  */

void FUN_1086e3810(long param_1)

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
  long *unaff_x20;
  
  func_0x0001086e4ff4();
  func_0x0001086e5164(FUN_1086e4504);
  func_0x0001086e4e90();
  FUN_1086e3918(param_1 + 0x28);
  func_0x0001086e508c();
  do {
    func_0x0001086e4d64();
  } while (extraout_w10 != 0);
  func_0x0001086e4eb0();
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x30) = 0;
    func_0x0001086e4d94();
    if (*unaff_x20 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x0001086e50ac();
    plVar2 = extraout_x8;
    do {
      if (*plVar2 == 0) {
        func_0x0001086e4e04();
        plVar2 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar3 = extraout_w11_00;
      }
      else {
        func_0x0001086e4edc();
        plVar2 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar3 = extraout_w11;
      }
      if ((uVar3 & 1) != 0) {
        func_0x0001086e4e20();
        if ((bool)in_ZR) {
          func_0x0001086e4df4();
          func_0x0001086e4da4();
          func_0x0001086e4d74();
        }
        func_0x0001086e4d1c();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x0001086e4f9c();
  func_0x0001086e4e68();
  func_0x0001086e4e78();
  func_0x0001086e4e88();
  func_0x0001086e4e60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1086e3918; end: 1086e3e33;  */

/* WARNING: Removing unreachable block (ram,0x0001086e3c80) */

void FUN_1086e3918(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  byte *pbVar11;
  uint extraout_w8;
  uint extraout_w8_00;
  long lVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  byte bVar13;
  long lVar14;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  ulong uVar15;
  undefined8 uVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  long *plVar20;
  undefined1 auStack_80 [32];
  
  uVar16 = *param_1;
  puVar8 = (undefined8 *)0xe8;
  __Znwm();
  *puVar8 = FUN_1086e40c4;
  puVar8[1] = FUN_1086e449c;
  puVar8[0x1a] = param_1;
  puVar8[0x1b] = uVar16;
  func_0x0001086e5108();
  func_0x0001086e4e90();
  plVar17 = puVar8 + 4;
  *plVar17 = (long)&PTR_FUN_110a8cf28;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  func_0x000107c29ee4(auStack_80,param_1 + 1);
  *(uint *)(puVar8 + 6) = *(uint *)(puVar8 + 6) | 1;
  uVar15 = puVar8[7];
  if (uVar15 == 0) {
    uVar15 = puVar8[5];
    if ((uVar15 & 1) != 0) {
      uVar15 = *(ulong *)(uVar15 & 0xfffffffffffffffe);
    }
    FUN_1086e3e50();
    puVar8[7] = uVar15;
  }
  *(uint *)(uVar15 + 0x10) = *(uint *)(uVar15 + 0x10) | 1;
  if (*(long *)(uVar15 + 0x18) == 0) {
    uVar9 = *(ulong *)(uVar15 + 8);
    if ((uVar9 & 1) != 0) {
      uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
    }
    func_0x000107c287e0();
    *(ulong *)(uVar15 + 0x18) = uVar9;
  }
  func_0x000107c287d0();
  func_0x000107c2a2e0(auStack_80);
  plVar10 = plVar17;
  func_0x00010b4d1804(puVar8 + 8);
  plVar1 = puVar8 + 0xb;
  plVar2 = puVar8 + 0x14;
  plVar3 = puVar8 + 0x15;
  plVar4 = puVar8 + 0x18;
  func_0x0001086e4d94();
  bVar13 = 0;
  do {
    lVar12 = puVar8[0x1b];
    bVar5 = *(byte *)(lVar12 + 0xf0);
    *(byte *)((long)puVar8 + 0xe1) = bVar5;
    if ((bVar5 & 1) == 0) {
      lVar19 = *(long *)(lVar12 + 0x100);
      *plVar2 = lVar19;
      if (lVar19 != 0) {
        do {
          func_0x0001086e4d64();
        } while (extraout_w10_02 != 0);
        lVar12 = puVar8[0x1b];
      }
      func_0x000107c2883c(plVar1,lVar12 + 0x20,plVar2);
      func_0x000107c27f9c(plVar2);
      *plVar3 = *plVar1;
      if (*plVar1 != 0) {
        do {
          func_0x0001086e4d64();
        } while (extraout_w10_03 != 0);
      }
      func_0x0001086e51e8();
      puVar8[0x16] = extraout_x8_00;
      if (extraout_x8_00 != 0) {
        do {
          func_0x0001086e4d64();
        } while (extraout_w10_04 != 0);
      }
      plVar18 = plVar3;
      FUN_1086e2884(puVar8 + 0x10,plVar3,puVar8 + 0x16);
      func_0x0001086e4f08();
      do {
        func_0x0001086e4d64();
      } while (extraout_w10_05 != 0);
      func_0x0001086e4ec8(puVar8[0xe]);
      if ((extraout_w8_00 >> 1 & 1) == 0) {
        *(undefined1 *)(puVar8 + 0x1c) = 0;
        lVar12 = puVar8[0xe];
        lVar19 = *plVar10;
        if (lVar19 == 0) {
          func_0x000107c3a5c0();
          lVar19 = *plVar18;
        }
        plVar20 = (long *)(lVar12 + 0x10);
        do {
          lVar14 = *plVar20;
          if (lVar14 == 0) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar7) {
              *plVar20 = 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_1086e3cf0;
          }
          else {
            ClearExclusiveLocal();
          }
        } while (((uint)lVar14 >> 1 & 1) == 0);
      }
      func_0x0001086e506c();
      plVar20 = plVar3;
    }
    else {
      if ((bVar13 & 1) != 0) {
        pbVar11 = (byte *)(lVar12 + 0xc0);
        func_0x000107c289e8();
        lVar12 = puVar8[0x1b];
        if ((*pbVar11 & 1) == 0) {
          func_0x0001086e51dc(*(undefined8 *)(lVar12 + 0xb0));
          func_0x0001086e4fa4();
          lVar12 = puVar8[0x1b];
        }
      }
      plVar18 = *(long **)(lVar12 + 0x80);
      func_0x000107c278b8(plVar1,&UNK_10f4b168a);
      func_0x0001086e5140();
      puVar8[0x11] = 0;
      puVar8[0x10] = 0;
      puVar8[0x13] = 0;
      puVar8[0x12] = 0;
      (**(code **)(*plVar18 + 0x10))(plVar18,plVar1,puVar8 + 0xe,puVar8 + 0x10,puVar8 + 0x12);
      lVar12 = puVar8[0x1b];
      func_0x0001086e4fec();
      func_0x0001086e4fe4();
      func_0x0001086e5074();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(plVar1);
      (**(code **)(**(long **)(lVar12 + 0xa0) + 0x10))(puVar8 + 0x17);
      func_0x000107c2883c(plVar1,puVar8[0x1b] + 0x20,puVar8 + 0x17);
      func_0x000107c27f9c(puVar8 + 0x17);
      *plVar4 = *plVar1;
      if (*plVar1 != 0) {
        do {
          func_0x0001086e4d64();
        } while (extraout_w10 != 0);
      }
      func_0x0001086e51e8();
      puVar8[0x19] = extraout_x8;
      if (extraout_x8 != 0) {
        do {
          func_0x0001086e4d64();
        } while (extraout_w10_00 != 0);
      }
      plVar18 = plVar4;
      FUN_1086e2884(puVar8 + 0x10,plVar4,puVar8 + 0x19);
      func_0x0001086e4f08();
      do {
        func_0x0001086e4d64();
      } while (extraout_w10_01 != 0);
      func_0x0001086e4ec8(puVar8[0xe]);
      if ((extraout_w8 >> 1 & 1) == 0) {
        *(undefined1 *)(puVar8 + 0x1c) = 1;
        lVar12 = puVar8[0xe];
        lVar19 = *plVar10;
        if (lVar19 == 0) {
          func_0x000107c3a5c0();
          lVar19 = *plVar18;
        }
        plVar20 = (long *)(lVar12 + 0x10);
        do {
          lVar14 = *plVar20;
          if (lVar14 == 0) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar7) {
              *plVar20 = 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
LAB_1086e3cf0:
              bVar7 = true;
              func_0x0001086e4e44();
              if (bVar7) {
                func_0x0001086e4df4();
                func_0x0001086e4db4();
                func_0x0001086e4d48();
                *(long **)(lVar12 + 0x90) = plVar18;
              }
              func_0x0001086e4e34();
              *(long *)(extraout_x8_01 + 0x20) = lVar19;
              func_0x0001086e4de4(*(undefined8 *)(lVar12 + 0x90));
              *(undefined8 *)(lVar12 + 0x10) = 0;
              return;
            }
          }
          else {
            ClearExclusiveLocal();
          }
        } while (((uint)lVar14 >> 1 & 1) == 0);
      }
      func_0x0001086e506c();
      plVar20 = plVar4;
    }
    lVar12 = *plVar18;
    func_0x0001086e4f60();
    func_0x0001086e4ee8();
    func_0x0001086e507c();
    func_0x000107c27f9c(plVar20);
    func_0x0001086e4ef0();
    bVar13 = *(byte *)((long)puVar8 + 0xe1) ^ 1;
    if ((char)lVar12 == '\0') {
      func_0x0001086e4f8c();
      FUN_1088f403c(plVar17);
      func_0x0001086e4e88();
      func_0x0001086e4e60();
      func_0x0001086e4ed4();
      return;
    }
  } while( true );
}



/* Entry: 1086e3e34; end: 1086e3e4f;  */

undefined8 * FUN_1086e3e34(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_40 [16];
  ulong uStack_30;
  undefined8 *puStack_28;
  
  uStack_30 = param_2[1];
  puStack_28 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uStack_30 = (ulong)*(byte *)((long)param_2 + 0x17);
    puStack_28 = param_2;
  }
  *param_1 = 0;
  param_1[1] = 0;
  func_0x00010bd48048(auStack_40,&puStack_28,&uStack_30);
  func_0x000107c3a984();
  func_0x000107c3a9a4();
  return param_1;
}



/* Entry: 1086e3e50; end: 1086e3ebf;  */

void FUN_1086e3e50(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x20);
  }
  *puVar1 = &PTR_FUN_110a8ced8;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}



/* Entry: 1086e3ec0; end: 1086e3ee7;  */

/* WARNING: Removing unreachable block (ram,0x0001005ed580) */

undefined1 FUN_1086e3ec0(long param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  
  lVar3 = *(long *)(param_1 + 0x10);
  plVar10 = (long *)(lVar3 + 0x10);
  do {
    lVar6 = *plVar10;
    if (lVar6 == 0) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = 2;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        lVar6 = lVar3 + 0x20;
        lVar7 = lVar6;
        do {
          if (*(char *)(lVar7 + 1) != '\0') {
            uVar8 = 0;
            plVar10 = (long *)(lVar7 + 0x20);
            do {
              plVar4 = (long *)*plVar10;
              pcVar5 = (code *)plVar10[-2];
              if (plVar4 == (long *)0x0) {
                if (pcVar5 == (code *)0x0) {
                  (**(code **)plVar10[-1])();
                }
                else {
                  (*pcVar5)();
                }
              }
              else {
                (**(code **)(*plVar4 + 0x10))(plVar4,pcVar5,plVar10[-1]);
              }
              uVar8 = uVar8 + 1;
              plVar10 = plVar10 + 3;
            } while (uVar8 < *(byte *)(lVar7 + 1));
          }
          lVar9 = *(long *)(lVar7 + 8);
          if (lVar7 != lVar6) {
            func_0x000107c60fd0(lVar7);
          }
          lVar7 = lVar9;
        } while (lVar9 != 0);
        *(long *)(lVar3 + 0x90) = lVar6;
        *(undefined1 *)(lVar3 + 0x21) = 0;
        return 1;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar6 >> 1 & 1) != 0) {
      return 0;
    }
  } while( true );
}



/* Entry: 1086e3ee8; end: 1086e4077;  */

void FUN_1086e3ee8(long param_1)

{
  long *plVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined1 in_ZR;
  undefined1 in_CY;
  long *plVar4;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  long *plVar5;
  long *extraout_x8;
  long *extraout_x8_00;
  long extraout_x8_01;
  undefined1 extraout_w9;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 uStack_41;
  
  plVar1 = (long *)(param_1 + 0x48);
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    plVar4 = plVar1;
    func_0x000107c28870();
    lVar8 = *plVar4;
    *(long *)(param_1 + 0x58) = lVar8;
    func_0x0001086e4f00();
    func_0x0001086e4ef0();
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar8 * 8);
    do {
      func_0x0001086e4d64();
    } while (extraout_w10 != 0);
    func_0x0001086e4ec8(*plVar1);
    if ((extraout_w8_00 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x60) = 1;
      lVar8 = *(long *)(param_1 + 0x48);
      func_0x0001086e4d94();
      lVar9 = *plVar4;
      if (lVar9 == 0) {
        func_0x000107c3a5c0();
        lVar9 = *plVar4;
      }
      plVar5 = (long *)(lVar8 + 0x10);
      do {
        if (*plVar5 == 0) {
          func_0x0001086e4e04();
          plVar5 = extraout_x8_00;
          uVar3 = extraout_w10_01;
          uVar6 = extraout_w11_00;
        }
        else {
          func_0x0001086e4edc();
          plVar5 = extraout_x8;
          uVar3 = extraout_w10_00;
          uVar6 = extraout_w11;
        }
        if ((uVar6 & 1) != 0) {
          lVar7 = *(long *)(lVar8 + 0x90);
          func_0x0001086e4e44();
          if ((bool)in_ZR) {
            func_0x0001086e4df4();
            uVar2 = extraout_w8;
            if ((bool)in_CY) {
              uVar2 = extraout_w9;
            }
            func_0x0001086e4da4();
            *(undefined1 *)plVar4 = uVar2;
            *(undefined1 *)((long)plVar4 + 1) = 0;
            plVar4[1] = 0;
            *(long **)(lVar7 + 8) = plVar4;
            *(long **)(lVar8 + 0x90) = plVar4;
          }
          func_0x0001086e4e34();
          *(long *)(extraout_x8_01 + 0x20) = lVar9;
          func_0x0001086e4de4(*(undefined8 *)(lVar8 + 0x90));
          *(undefined8 *)(lVar8 + 0x10) = 0;
          return;
        }
      } while ((uVar3 >> 1 & 1) == 0);
    }
  }
  func_0x000107c28834(plVar1);
  lVar8 = *(long *)(param_1 + 0x58);
  func_0x0001086e4f00();
  uStack_41 = lVar8 == 0;
  FUN_108653be8(param_1 + 0x10,&uStack_41);
  func_0x0001086e514c();
  func_0x0001086e4e60();
  func_0x000107c27f9c(param_1 + 0x40);
  func_0x0001086e4fb8();
  func_0x0001086e4ed4();
  return;
}



/* Entry: 1086e4078; end: 1086e40c3;  */

void FUN_1086e4078(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x48;
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    lVar1 = param_1 + 0x50;
    func_0x000107c27f9c(param_1 + 0x48);
  }
  func_0x000107c27f9c(lVar1);
  func_0x0001086e514c();
  func_0x0001086e4e60();
  func_0x000107c27f9c(param_1 + 0x40);
  func_0x0001086e4fb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1086e40c4; end: 1086e449b;  */

void FUN_1086e40c4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  undefined1 in_ZR;
  byte *pbVar8;
  uint extraout_w8;
  uint extraout_w8_00;
  long lVar9;
  long extraout_x8;
  long *plVar10;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long extraout_x8_02;
  long *extraout_x8_03;
  long *extraout_x8_04;
  long extraout_x8_05;
  long lVar11;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  uint extraout_w10_02;
  uint extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  uint extraout_w10_08;
  uint extraout_w10_09;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar12;
  uint extraout_w11_01;
  uint extraout_w11_02;
  long *plVar13;
  long *plVar14;
  
  plVar1 = param_1 + 0xb;
  plVar2 = param_1 + 0x14;
  plVar3 = param_1 + 0x15;
  plVar4 = param_1 + 0x18;
  plVar13 = param_1;
  if ((*(byte *)(param_1 + 0x1c) & 1) == 0) goto LAB_1086e4384;
  do {
    do {
      func_0x0001086e506c();
      plVar10 = plVar4;
      plVar14 = param_1 + 0x19;
      while( true ) {
        lVar9 = *plVar13;
        func_0x0001086e4f60();
        func_0x0001086e4ee8();
        func_0x000107c27f9c(plVar14);
        func_0x000107c27f9c(plVar10);
        func_0x0001086e4f00();
        if ((char)lVar9 == '\0') {
          func_0x0001086e4f8c();
          func_0x0001086e5154();
          func_0x0001086e4e88();
          func_0x0001086e4e60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)(param_1);
          return;
        }
        bVar5 = *(byte *)((long)param_1 + 0xe1);
        lVar9 = param_1[0x1b];
        bVar6 = *(byte *)(lVar9 + 0xf0);
        *(byte *)((long)param_1 + 0xe1) = bVar6;
        if ((bVar6 & 1) != 0) break;
        lVar11 = *(long *)(lVar9 + 0x100);
        *plVar2 = lVar11;
        if (lVar11 != 0) {
          do {
            func_0x0001086e4d64();
          } while (extraout_w10_04 != 0);
          lVar9 = param_1[0x1b];
        }
        func_0x000107c2883c(plVar1,lVar9 + 0x20,plVar2);
        func_0x000107c27f9c(plVar2);
        *plVar3 = *plVar1;
        if (*plVar1 != 0) {
          do {
            func_0x0001086e4d64();
          } while (extraout_w10_05 != 0);
        }
        func_0x0001086e51e8();
        param_1[0x16] = extraout_x8_02;
        if (extraout_x8_02 != 0) {
          do {
            func_0x0001086e4d64();
          } while (extraout_w10_06 != 0);
        }
        plVar13 = plVar3;
        FUN_1086e2884(param_1 + 0x10,plVar3,param_1 + 0x16);
        func_0x0001086e4f08();
        do {
          func_0x0001086e4d64();
        } while (extraout_w10_07 != 0);
        func_0x0001086e4ec8(param_1[0xe]);
        if ((extraout_w8_00 >> 1 & 1) == 0) {
          *(char *)(param_1 + 0x1c) = '\0';
          func_0x0001086e503c();
          lVar9 = *plVar13;
          if (lVar9 == 0) {
            func_0x000107c3a5c0();
            lVar9 = *plVar13;
          }
          plVar10 = plVar14 + 2;
          do {
            if (*plVar10 == 0) {
              func_0x0001086e4e04();
              plVar10 = extraout_x8_04;
              uVar7 = extraout_w10_09;
              uVar12 = extraout_w11_02;
            }
            else {
              func_0x0001086e4edc();
              plVar10 = extraout_x8_03;
              uVar7 = extraout_w10_08;
              uVar12 = extraout_w11_01;
            }
            if ((uVar12 & 1) != 0) goto LAB_1086e4394;
          } while ((uVar7 >> 1 & 1) == 0);
        }
LAB_1086e4384:
        func_0x0001086e506c();
        plVar10 = plVar3;
        plVar14 = param_1 + 0x16;
      }
      if ((bVar5 & 1) == 0) {
        pbVar8 = (byte *)(lVar9 + 0xc0);
        func_0x000107c289e8();
        lVar9 = param_1[0x1b];
        if ((*pbVar8 & 1) == 0) {
          func_0x0001086e51dc(*(undefined8 *)(lVar9 + 0xb0));
          func_0x0001086e4fa4();
          lVar9 = param_1[0x1b];
        }
      }
      plVar13 = *(long **)(lVar9 + 0x80);
      func_0x000107c278b8(plVar1,&UNK_10f4b168a);
      func_0x0001086e5140();
      param_1[0x11] = 0;
      param_1[0x10] = 0;
      param_1[0x13] = 0;
      param_1[0x12] = 0;
      (**(code **)(*plVar13 + 0x10))(plVar13,plVar1,param_1 + 0xe,param_1 + 0x10,param_1 + 0x12);
      plVar14 = (long *)param_1[0x1b];
      func_0x0001086e4fec();
      func_0x0001086e4fe4();
      func_0x0001086e5074();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(plVar1);
      (**(code **)(*(long *)plVar14[0x14] + 0x10))(param_1 + 0x17);
      func_0x000107c2883c(plVar1,param_1[0x1b] + 0x20,param_1 + 0x17);
      func_0x000107c27f9c(param_1 + 0x17);
      *plVar4 = *plVar1;
      if (*plVar1 != 0) {
        do {
          func_0x0001086e4d64();
        } while (extraout_w10 != 0);
      }
      func_0x0001086e51e8();
      param_1[0x19] = extraout_x8;
      if (extraout_x8 != 0) {
        do {
          func_0x0001086e4d64();
        } while (extraout_w10_00 != 0);
      }
      plVar13 = plVar4;
      FUN_1086e2884(param_1 + 0x10,plVar4,param_1 + 0x19);
      func_0x0001086e4f08();
      do {
        func_0x0001086e4d64();
      } while (extraout_w10_01 != 0);
      func_0x0001086e4ec8(param_1[0xe]);
    } while ((extraout_w8 >> 1 & 1) != 0);
    *(char *)(param_1 + 0x1c) = '\x01';
    func_0x0001086e503c();
    lVar9 = *plVar13;
    if (lVar9 == 0) {
      func_0x000107c3a5c0();
      lVar9 = *plVar13;
    }
    plVar10 = plVar14 + 2;
    do {
      if (*plVar10 == 0) {
        func_0x0001086e4e04();
        plVar10 = extraout_x8_01;
        uVar7 = extraout_w10_03;
        uVar12 = extraout_w11_00;
      }
      else {
        func_0x0001086e4edc();
        plVar10 = extraout_x8_00;
        uVar7 = extraout_w10_02;
        uVar12 = extraout_w11;
      }
      if ((uVar12 & 1) != 0) {
LAB_1086e4394:
        func_0x0001086e4e44();
        if ((bool)in_ZR) {
          func_0x0001086e4df4();
          func_0x0001086e4db4();
          func_0x0001086e4d48();
          plVar14[0x12] = (long)plVar13;
        }
        func_0x0001086e4e34();
        *(long *)(extraout_x8_05 + 0x20) = lVar9;
        func_0x0001086e4de4(plVar14[0x12]);
        plVar14[2] = 0;
        return;
      }
    } while ((uVar7 >> 1 & 1) == 0);
  } while( true );
}



/* Entry: 1086e449c; end: 1086e4503;  */

void FUN_1086e449c(long param_1)

{
  long lVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  
  cVar3 = *(char *)(param_1 + 0xe0);
  func_0x000107c27f9c(param_1 + 0x70);
  func_0x0001086e4ee8();
  bVar4 = cVar3 == '\0';
  lVar1 = 200;
  if (bVar4) {
    lVar1 = 0xb0;
  }
  lVar2 = 0xc0;
  if (bVar4) {
    lVar2 = 0xa8;
  }
  func_0x000107c27f9c(param_1 + lVar1);
  func_0x000107c27f9c(param_1 + lVar2);
  func_0x0001086e5024();
  func_0x0001086e4f8c();
  func_0x0001086e5154();
  func_0x0001086e4e60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1086e4504; end: 1086e454f;  */

void FUN_1086e4504(undefined8 param_1)

{
  func_0x0001086e5180();
  func_0x0001086e4e68();
  func_0x0001086e4e78();
  func_0x0001086e4e88();
  func_0x0001086e4e60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1086e4550; end: 1086e4573;  */

void FUN_1086e4550(void)

{
  func_0x0001086e4e9c();
  func_0x0001086e4e78();
  func_0x0001086e4e60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086e4574; end: 1086e467b;  */

void FUN_1086e4574(long param_1)

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
  
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    plVar2 = (long *)(param_1 + 0x20);
    FUN_1086e3810(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x58);
    do {
      func_0x0001086e4d64();
    } while (extraout_w10 != 0);
    func_0x0001086e4ec8(*(undefined8 *)(param_1 + 0x50));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x60) = 1;
      func_0x0001086e4d94();
      if (*plVar2 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x0001086e50ac();
      plVar2 = extraout_x8;
      do {
        if (*plVar2 == 0) {
          func_0x0001086e4e04();
          plVar2 = extraout_x8_01;
          uVar1 = extraout_w10_01;
          uVar3 = extraout_w11_00;
        }
        else {
          func_0x0001086e4edc();
          plVar2 = extraout_x8_00;
          uVar1 = extraout_w10_00;
          uVar3 = extraout_w11;
        }
        if ((uVar3 & 1) != 0) {
          func_0x0001086e4e20();
          if ((bool)in_ZR) {
            func_0x0001086e4df4();
            func_0x0001086e4da4();
            func_0x0001086e4d74();
          }
          func_0x0001086e4d1c();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x000107c28834(param_1 + 0x50);
  func_0x0001086e50dc();
  func_0x0001086e5024();
  func_0x0001086e4e88();
  func_0x0001086e4e60();
  func_0x0001086e515c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1086e467c; end: 1086e46b3;  */

void FUN_1086e467c(long param_1)

{
  if (*(char *)(param_1 + 0x60) == '\x01') {
    func_0x0001086e50dc();
    func_0x0001086e5024();
  }
  func_0x0001086e4e60();
  func_0x0001086e515c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1086e46b4; end: 1086e4a73;  */

void FUN_1086e46b4(long param_1)

{
  long *plVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  undefined1 uVar8;
  long *plVar9;
  uint extraout_w8;
  long extraout_x8;
  undefined8 uVar10;
  long *plVar11;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  int extraout_w10;
  int extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar12;
  int extraout_w11_01;
  int extraout_w11_02;
  long *unaff_x24;
  long lVar13;
  
  plVar1 = (long *)(param_1 + 0x2d0);
  if ((*(byte *)(param_1 + 0x2e8) & 1) != 0) goto LAB_1086e47d4;
  do {
    unaff_x24 = (long *)(param_1 + 0x28);
    pbVar2 = (byte *)(*unaff_x24 + 0xa8);
    do {
      bVar3 = *pbVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pbVar2,0x10);
      if (bVar6) {
        *pbVar2 = 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while ((cVar5 != '\0') || ((bVar3 & 1) != 0));
    if ((*(long *)(*unaff_x24 + 0xe8) == 0) && ((*(byte *)(*unaff_x24 + 0xb8) & 1) != 0)) {
      func_0x000107c314e4(*unaff_x24 + 0x58);
      func_0x0001086e5194();
      func_0x0001086e501c();
      func_0x0001086e4e88();
      func_0x0001086e4e60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(param_1);
      return;
    }
    func_0x0001086e4f68();
    plVar9 = (long *)(extraout_x8 + 0x10);
    func_0x000107c314e4();
    func_0x0001086e5194();
    func_0x0001086e5188(*(undefined8 *)(param_1 + 0x2e0));
    uVar8 = *(char *)(param_1 + 0x2b0) == '\x01';
    if ((bool)uVar8) {
      plVar9 = (long *)(param_1 + 0x2a8);
      func_0x000107c28850();
    }
    uVar10 = 0;
    *(long *)(param_1 + 0x1f8) = *(long *)(param_1 + 0x2a0);
    if (*(long *)(param_1 + 0x2a0) != 0) {
      do {
        func_0x0001086e4d64();
      } while (extraout_w10 != 0);
      uVar10 = *(undefined8 *)(param_1 + 0x1f8);
    }
    *(undefined8 *)(param_1 + 0x20) = uVar10;
    do {
      func_0x0001086e4d64();
    } while (extraout_w10_00 != 0);
    func_0x0001086e4eb0();
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x2e8) = 1;
      func_0x0001086e5004();
      lVar13 = *plVar9;
      if (lVar13 == 0) {
        func_0x000107c3a5c0();
        lVar13 = *plVar9;
      }
      plVar11 = (long *)(param_1 + 0x38);
      do {
        if (*plVar11 == 0) {
          func_0x0001086e4e04();
          plVar11 = extraout_x8_01;
          uVar7 = extraout_w10_02;
          uVar12 = extraout_w11_00;
        }
        else {
          func_0x0001086e4edc();
          plVar11 = extraout_x8_00;
          uVar7 = extraout_w10_01;
          uVar12 = extraout_w11;
        }
        if ((uVar12 & 1) != 0) {
          func_0x0001086e4e44();
          if ((bool)uVar8) {
            func_0x0001086e4df4();
            func_0x0001086e4db4();
            func_0x0001086e4d48();
            *(long **)(param_1 + 0xb8) = plVar9;
          }
          func_0x0001086e4e34();
          *(long *)(extraout_x8_03 + 0x20) = lVar13;
          func_0x0001086e4de4(*(undefined8 *)(param_1 + 0xb8));
          *(undefined8 *)(param_1 + 0x38) = 0;
          return;
        }
      } while ((uVar7 >> 1 & 1) == 0);
    }
LAB_1086e47d4:
    func_0x0001086e4f9c();
    func_0x0001086e4e68();
    func_0x0001086e4f94();
    if (*(char *)(param_1 + 0x298) == '\x01') {
      func_0x0001086e505c(*(undefined8 *)(*(long *)(param_1 + 0x2e0) + 0x90));
      bVar3 = *(byte *)(param_1 + 0x1f0);
      unaff_x24 = (long *)(ulong)bVar3;
      iVar4 = *(int *)(param_1 + 0x13c);
      func_0x000107c288c8(param_1 + 0x20);
      if (bVar3 == 1 && iVar4 == 8) {
        uVar10 = *(undefined8 *)(param_1 + 0x2e0);
        func_0x000107c289cc(param_1 + 0x2b8);
        *(undefined8 *)(param_1 + 600) = uVar10;
        func_0x0001086e5128();
        *(long *)(param_1 + 0x278) = *(long *)(param_1 + 0x2b8);
        if (*(long *)(param_1 + 0x2b8) != 0) {
          do {
            func_0x0001086e4d64();
          } while (extraout_w10_03 != 0);
        }
        uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x2e0) + 0x30);
        func_0x0001086e511c();
        func_0x0001086e5110(*(undefined8 *)(param_1 + 0x2e0));
        func_0x0001086e5134();
        FUN_1086e3750((long *)(param_1 + 0x2c8),param_1 + 0x1f8,uVar10);
        func_0x0001086e3728(param_1 + 0x1f8);
        func_0x0001086e5034();
        func_0x0001086e502c();
        lVar13 = *(long *)(param_1 + 0x2c8);
        *plVar1 = lVar13;
        if (lVar13 != 0) {
          do {
            func_0x0001086e4d64();
          } while (extraout_w10_04 != 0);
        }
        *(long *)(param_1 + 0x2d8) = *(long *)(param_1 + 0x2c0);
        if (*(long *)(param_1 + 0x2c0) != 0) {
          do {
            func_0x0001086e509c();
          } while (extraout_w11_01 != 0);
        }
        *(long *)(param_1 + 0x20) = *plVar1;
        if (*plVar1 != 0) {
          do {
            func_0x0001086e4d64();
          } while (extraout_w10_05 != 0);
        }
        unaff_x24 = (long *)(param_1 + 0x28);
        *unaff_x24 = *(long *)(param_1 + 0x2d8);
        if (*(long *)(param_1 + 0x2d8) != 0) {
          do {
            func_0x0001086e509c();
          } while (extraout_w11_02 != 0);
        }
        *(undefined1 *)(param_1 + 0x30) = 1;
        func_0x000107c27f98(param_1 + 0x2d8);
        func_0x000107c27f9c(plVar1);
        func_0x0001086e4ef0();
        func_0x0001086e5014();
        func_0x0001086e50e4();
        FUN_1086e30bc(param_1 + 0x2a8,unaff_x24);
        FUN_1086e313c(param_1 + 0x20);
      }
    }
    func_0x0001086e4fc0();
    func_0x0001086e51c8();
    if (extraout_x8_02 != 0) {
      do {
        func_0x0001086e4d64();
      } while (extraout_w10_06 != 0);
    }
    plVar9 = (long *)(param_1 + 0x20);
    func_0x000107c314f0();
    if (((ulong)plVar9 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x2e8) = 0;
      func_0x0001086e5004();
      if (*plVar9 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x0001086e50c4();
      if (((ulong)unaff_x24 & 1) != 0) {
        return;
      }
    }
  } while( true );
}



/* Entry: 1086e4a74; end: 1086e4abb;  */

void FUN_1086e4a74(long param_1)

{
  if (*(char *)(param_1 + 0x2e8) == '\x01') {
    func_0x0001086e4e68();
    func_0x0001086e4f94();
    func_0x0001086e4fc0();
  }
  else {
    func_0x0001086e4fc8();
  }
  FUN_1086e313c(param_1 + 0x2a0);
  func_0x0001086e4e60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1086e4abc; end: 1086e4b3f;  */

void FUN_1086e4abc(undefined8 param_1)

{
  func_0x0001086e5180();
  func_0x0001086e4e68();
  func_0x0001086e4e78();
  func_0x0001086e4e88();
  func_0x0001086e4e60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1086e4b40; end: 1086e4b63;  */

void FUN_1086e4b40(void)

{
  func_0x0001086e4e9c();
  func_0x0001086e4e78();
  func_0x0001086e4e60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086e4b64; end: 1086e4baf;  */

void FUN_1086e4b64(undefined8 param_1)

{
  func_0x0001086e5180();
  func_0x0001086e4e68();
  func_0x0001086e4e78();
  func_0x0001086e4e88();
  func_0x0001086e4e60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1086e4bb0; end: 1086e4bd3;  */

void FUN_1086e4bb0(void)

{
  func_0x0001086e4e9c();
  func_0x0001086e4e78();
  func_0x0001086e4e60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086e4bd4; end: 1086e4cdf;  */

void FUN_1086e4bd4(long param_1)

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
  
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
    plVar2 = (long *)(param_1 + 0x20);
    FUN_1086e3494(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x38);
    do {
      func_0x0001086e4d64();
    } while (extraout_w10 != 0);
    func_0x0001086e4ec8(*(undefined8 *)(param_1 + 0x30));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x40) = 1;
      func_0x0001086e4d94();
      if (*plVar2 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x0001086e50ac();
      plVar2 = extraout_x8;
      do {
        if (*plVar2 == 0) {
          func_0x0001086e4e04();
          plVar2 = extraout_x8_01;
          uVar1 = extraout_w10_01;
          uVar3 = extraout_w11_00;
        }
        else {
          func_0x0001086e4edc();
          plVar2 = extraout_x8_00;
          uVar1 = extraout_w10_00;
          uVar3 = extraout_w11;
        }
        if ((uVar3 & 1) != 0) {
          func_0x0001086e4e20();
          if ((bool)in_ZR) {
            func_0x0001086e4df4();
            func_0x0001086e4da4();
            func_0x0001086e4d74();
          }
          func_0x0001086e4d1c();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x000107c28834(param_1 + 0x30);
  func_0x0001086e51ac();
  func_0x0001086e4fb8();
  func_0x0001086e4e88();
  func_0x0001086e4e60();
  func_0x000107c288ac(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1086e4ce0; end: 1086e4d1b;  */

void FUN_1086e4ce0(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    func_0x0001086e51ac();
    func_0x0001086e4fb8();
  }
  func_0x0001086e4e60();
  func_0x000107c288ac(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1086e4d1c; end: 1086e5207;  */

void FUN_1086e4d1c(ulong param_1)

{
  long lVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  
  lVar1 = unaff_x22 + (param_1 & 0xffffffff) * 0x18;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = unaff_x19;
  *(undefined8 *)(lVar1 + 0x20) = unaff_x21;
  *(char *)(*(long *)(unaff_x20 + 0x90) + 1) = *(char *)(*(long *)(unaff_x20 + 0x90) + 1) + '\x01';
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  return;
}



/* Entry: 1086e5208; end: 1086e532f;  */

void FUN_1086e5208(long **param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *extraout_x8;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long *aplStack_78 [2];
  code *pcStack_68;
  undefined **ppuStack_60;
  long *plStack_58;
  long *plStack_50;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_3 + 0x18) != 0) {
    FUN_1086e5330(aplStack_78,param_1 + 3);
    if (aplStack_78[0] != (long *)0x0) {
      plVar4 = param_1[5];
      (**(code **)(*plVar4 + 0x10))();
      plStack_50 = param_1[2];
      plStack_58 = param_1[1];
      if (param_1[2] != (long *)0x0) {
        plVar1 = param_1[2] + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      pcStack_68 = FUN_1086e53f8;
      ppuStack_60 = &PTR_FUN_110a65c08;
      uStack_88 = 0;
      uStack_80 = 0;
      (**(code **)(*aplStack_78[0] + 0x90))(aplStack_78[0],plVar4,param_2,param_3,&pcStack_68);
      func_0x0001086e5534();
      func_0x000107c29294(&uStack_88);
    }
    param_1 = aplStack_78;
    func_0x000107c288e8();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001086e5534();
  func_0x000107c29294(&uStack_88);
  func_0x000107c288e8(aplStack_78);
  __Unwind_Resume();
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  plVar4 = param_1[1];
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    extraout_x8[1] = plVar4;
    if (plVar4 != (long *)0x0) {
      *extraout_x8 = *param_1;
    }
  }
  return;
}



/* Entry: 1086e5330; end: 1086e536f;  */

void FUN_1086e5330(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 1086e5370; end: 1086e5373;  */

undefined8 * FUN_1086e5370(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a65b98;
  func_0x0001086e53d4(param_1 + 7);
  func_0x000107c29194(param_1 + 5);
  func_0x000107c29298(param_1 + 3);
  func_0x000107c29294(param_1 + 1);
  return param_1;
}



/* Entry: 1086e5374; end: 1086e5387;  */

void FUN_1086e5374(void)

{
  FUN_1086e5388();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086e5388; end: 1086e53f7;  */

undefined8 * FUN_1086e5388(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a65b98;
  func_0x0001086e53d4(param_1 + 7);
  func_0x000107c29194(param_1 + 5);
  func_0x000107c29298(param_1 + 3);
  func_0x000107c29294(param_1 + 1);
  return param_1;
}



/* Entry: 1086e53f8; end: 1086e54cf;  */

void FUN_1086e53f8(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 *extraout_x8;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 *apuStack_40 [2];
  long lStack_30;
  long lStack_28;
  
  if (*(int *)(param_1 + 0x3d) != 1) {
    if (*(int *)(param_1 + 0x3d) != 0) {
      func_0x00010563ab98();
      func_0x000104be1274(&uStack_58);
      func_0x000107c28ab8(apuStack_40);
      func_0x000107c2929c(&lStack_30);
      __Unwind_Resume();
      *extraout_x8 = 0;
      extraout_x8[1] = 0;
      lVar1 = param_1[1];
      if (lVar1 != 0) {
        __ZNSt3__119__shared_weak_count4lockEv();
        extraout_x8[1] = lVar1;
        if (lVar1 != 0) {
          *extraout_x8 = *param_1;
        }
      }
      return;
    }
    lStack_30 = 0;
    lStack_28 = 0;
    lVar1 = *(long *)(param_2 + 0x18);
    if (lVar1 != 0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      lStack_28 = lVar1;
      if (lVar1 != 0) {
        lStack_30 = *(long *)(param_2 + 0x10);
        if (lStack_30 != 0) {
          FUN_1086e54d0(apuStack_40,lStack_30 + 0x38);
          if (apuStack_40[0] != (undefined8 *)0x0) {
            uStack_58 = 0;
            uStack_50 = 0;
            uStack_48 = 0;
            (**(code **)*apuStack_40[0])(apuStack_40[0],param_1,param_1,0,param_1 + 0x3a,&uStack_58)
            ;
            func_0x000104be1274(&uStack_58);
          }
          func_0x000107c28ab8(apuStack_40);
        }
      }
    }
    func_0x000107c2929c(&lStack_30);
  }
  return;
}



/* Entry: 1086e54d0; end: 1086e550f;  */

void FUN_1086e54d0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 1086e5510; end: 1086e5563;  */

void FUN_1086e5510(long param_1)

{
  param_1 = param_1 + 8;
  func_0x0001005640ac();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 1086e5564; end: 1086e565b;  */

void FUN_1086e5564(long param_1,long param_2,long *param_3,long *param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined **ppuStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  if (*(int *)(param_1 + 0x11c) == 3) {
    iVar3 = (int)param_2 + 0x50;
    func_0x0001086e5544();
    if ((iVar3 != 0) && (*(char *)(param_2 + 0x28) == '\x01')) {
      ppuVar1 = &PTR_PTR_113286e08;
      if (*(undefined ***)(param_2 + 0x80) != (undefined **)0x0) {
        ppuVar1 = *(undefined ***)(param_2 + 0x80);
      }
      ppuVar2 = &PTR_PTR_113287db8;
      if ((undefined **)ppuVar1[0x23] != (undefined **)0x0) {
        ppuVar2 = (undefined **)ppuVar1[0x23];
      }
      if (*(char *)(ppuVar2 + 4) == '\x01') {
        if (param_4 != (long *)0x0) {
          uStack_48 = 0;
          uStack_40 = 0;
          ppuStack_58 = &PTR_FUN_110a609a8;
          uStack_50 = 0;
          uStack_38 = 0x27e;
          (**(code **)(*param_4 + 0x50))(param_4,&ppuStack_58);
          func_0x000107c2882c(&ppuStack_58);
        }
        (**(code **)(*param_3 + 0x30))(param_3,param_1,*(undefined8 *)(param_2 + 0x20));
      }
    }
  }
  return;
}



/* Entry: 1086e565c; end: 1086e5663;  */

bool FUN_1086e565c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  bool bVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000100152bac(unaff_x19 + 200);
  func_0x000107c613d0();
  uVar1 = *(ulong *)(unaff_x20 + 8);
  if (-1 < (char)*(byte *)(unaff_x20 + 0x17)) {
    uVar1 = (ulong)*(byte *)(unaff_x20 + 0x17);
  }
  if (param_2 == uVar1) {
    func_0x000107c60bf4();
    bVar2 = (int)unaff_x20 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 1086e5664; end: 1086e57ff;  */

void FUN_1086e5664(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined ***pppuVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [24];
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  if ((*(byte *)(param_2 + 0x10) >> 2 & 1) == 0) {
    plVar1 = *(long **)(param_1 + 0x40);
    if (plVar1 != (long *)0x0) {
      uStack_60 = 0;
      uStack_58 = 0;
      ppuStack_70 = &PTR_FUN_110a609a8;
      uStack_68 = 0;
      uStack_50 = CONCAT44(uStack_50._4_4_,0x27d);
      func_0x000107c278b8(auStack_88,&UNK_10f4b1727);
      pppuVar3 = &ppuStack_70;
      func_0x000107c28824(pppuVar3,auStack_88,&UNK_10f4b16e0);
      func_0x000107c2884c(auStack_48,pppuVar3);
      (**(code **)(*plVar1 + 0x50))(plVar1,auStack_48);
      func_0x000107c2882c(auStack_48);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_88);
      func_0x000107c2882c(&ppuStack_70);
    }
    return;
  }
  func_0x0001086e625c(*(undefined8 *)(param_2 + 0x20));
  func_0x000107c29ee0(auStack_48);
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  func_0x000107c27994(&uStack_68,auStack_48);
  if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(uint *)(*(long *)(param_2 + 0x18) + 0x24);
  }
  lVar2 = param_1 + 8;
  uStack_50 = uVar5;
  FUN_1086e58d0(lVar2,&uStack_68);
  if (lVar2 == 0) {
    func_0x0001086e623c(auStack_a8);
    ppuStack_70 = (undefined **)((ulong)ppuStack_70 & 0xffffffffffffff00);
    func_0x0001086e620c();
    FUN_1086e5800(*(undefined8 *)(param_1 + 0x40),&UNK_10f4b171b);
  }
  else {
    if (*(char *)(lVar2 + 0x38) == '\x01') {
      FUN_1086e5800(*(undefined8 *)(param_1 + 0x40),&UNK_10f4b16ee);
      goto LAB_1086e579c;
    }
    if ((*(byte *)(lVar2 + 0x10) & 1) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(uint *)(*(long *)(lVar2 + 0x18) + 0x24);
    }
    if (uVar6 <= uVar4) {
      FUN_1086e5800(*(undefined8 *)(param_1 + 0x40),&UNK_10f4b1707);
      goto LAB_1086e579c;
    }
    func_0x0001086e623c(auStack_a8);
    ppuStack_70 = (undefined **)CONCAT71(ppuStack_70._1_7_,*(undefined1 *)(lVar2 + 0x38));
    func_0x0001086e620c();
    FUN_1086e5800(*(undefined8 *)(param_1 + 0x40),&UNK_10f4b16ff);
  }
  FUN_108917e78(auStack_a8);
LAB_1086e579c:
  func_0x000107c27914(&uStack_68);
  func_0x000107c27914(auStack_48);
  return;
}



/* Entry: 1086e5800; end: 1086e58cf;  */

void FUN_1086e5800(long *param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_88 [24];
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [40];
  
  if (param_1 != (long *)0x0) {
    uStack_60 = 0;
    uStack_58 = 0;
    ppuStack_70 = &PTR_FUN_110a609a8;
    uStack_68 = 0;
    uStack_50 = 0x27d;
    func_0x000107c278b8(auStack_88,&UNK_10f4b1727);
    pppuVar1 = &ppuStack_70;
    func_0x000107c28824(pppuVar1,auStack_88,param_2);
    func_0x000107c2884c(auStack_48,pppuVar1);
    (**(code **)(*param_1 + 0x50))(param_1,auStack_48);
    func_0x000107c2882c(auStack_48);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_88);
    func_0x000107c2882c(&ppuStack_70);
  }
  return;
}



/* Entry: 1086e58d0; end: 1086e590f;  */

long FUN_1086e58d0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 8;
  FUN_1086e6010();
  if (param_1 + 0x10 == lVar1) {
    lVar1 = 0;
  }
  else {
    func_0x0001086e6224();
    lVar1 = lVar1 + 0x48;
  }
  return lVar1;
}



/* Entry: 1086e5910; end: 1086e591b;  */

undefined8 * FUN_1086e5910(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  param_1[1] = 0;
  *param_1 = &PTR_DAT_110a94678;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010891890c();
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    FUN_108915a40(0,*(undefined8 *)(param_2 + 0x18));
  }
  param_1[3] = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    func_0x000107c2a26c(0,*(undefined8 *)(param_2 + 0x20));
  }
  param_1[4] = uVar2;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    func_0x000108918848(0,*(undefined8 *)(param_2 + 0x28));
  }
  param_1[5] = uVar2;
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  return param_1;
}



/* Entry: 1086e591c; end: 1086e5b5b;  */

void FUN_1086e591c(ulong *param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong *puVar10;
  undefined1 auStack_100 [56];
  undefined1 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong *puStack_a0;
  ulong auStack_98 [8];
  undefined8 *puStack_58;
  ulong *puStack_50;
  undefined8 uStack_48;
  
  func_0x000107c27994(&uStack_c0);
  uStack_a8 = *(undefined8 *)(param_2 + 0x18);
  func_0x0001086e623c(auStack_100);
  uStack_c8 = *(undefined1 *)(param_3 + 0x38);
  puVar5 = param_1 + 1;
  FUN_1086e6010(puVar5,&uStack_c0);
  puVar10 = param_1 + 2;
  if (puVar10 == puVar5) {
    puStack_a0 = param_1 + 4;
    func_0x0001086e6120(auStack_98,auStack_100);
    puVar6 = (undefined8 *)0x88;
    __Znwm();
    uVar3 = uStack_b0;
    puVar8 = puVar6 + 4;
    puVar6[5] = uStack_b8;
    *puVar8 = uStack_c0;
    uStack_48 = 1;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    puVar6[6] = uVar3;
    puVar6[7] = uStack_a8;
    puVar6[8] = puStack_a0;
    puStack_58 = puVar6;
    puStack_50 = puVar10;
    func_0x0001086e6120(puVar6 + 9,auStack_98);
    puVar7 = (ulong *)*puVar10;
    puVar5 = puVar10;
    while (puVar7 != (ulong *)0x0) {
      while( true ) {
        puVar5 = puVar7;
        puVar6 = puVar8;
        func_0x0001086e608c(puVar8,puVar5 + 4);
        iVar4 = (int)puVar6;
        if (iVar4 == 0) break;
        puVar7 = (ulong *)*puVar5;
        puVar10 = puVar5;
        if ((ulong *)*puVar5 == (ulong *)0x0) goto LAB_1086e5a30;
      }
      func_0x0001086e6244();
      if (iVar4 == 0) {
        if (*puVar10 != 0) goto LAB_1086e5a6c;
        break;
      }
      puVar10 = puVar5 + 1;
      puVar7 = (ulong *)*puVar10;
    }
LAB_1086e5a30:
    *puStack_58 = 0;
    puStack_58[1] = 0;
    puStack_58[2] = puVar5;
    *puVar10 = (ulong)puStack_58;
    if (*(ulong *)param_1[1] != 0) {
      param_1[1] = *(ulong *)param_1[1];
    }
    func_0x000107c27be4(param_1[2],puStack_58);
    param_1[3] = param_1[3] + 1;
    puStack_58 = (undefined8 *)0x0;
LAB_1086e5a6c:
    func_0x0001086e60dc(&puStack_58);
    puVar5 = auStack_98;
    FUN_108917e78();
  }
  else {
    puVar5 = puVar5 + 9;
    FUN_1086e5dd4(puVar5,auStack_100);
  }
  func_0x0001086e6224();
  if (*param_1 < param_1[6]) {
    uVar9 = *(ulong *)(param_1[4] + 0x10);
    func_0x0001086e621c();
    if (param_1[1] == uVar9) {
      param_1[1] = (ulong)puVar5;
    }
    param_1[3] = param_1[3] - 1;
    func_0x00010530d618(param_1[2],uVar9);
    func_0x0001086e5f4c(uVar9 + 0x20);
    __ZdlPv(uVar9);
    lVar1 = *(long *)param_1[4];
    plVar2 = (long *)((long *)param_1[4])[1];
    *(long **)(lVar1 + 8) = plVar2;
    *plVar2 = lVar1;
    param_1[6] = param_1[6] - 1;
    __ZdlPv();
  }
  func_0x0001086e6204();
  func_0x000107c27914(&uStack_c0);
  return;
}



/* Entry: 1086e5b5c; end: 1086e5ba3;  */

void FUN_1086e5b5c(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  iVar1 = (int)param_1;
  lVar3 = *(long *)(param_1 + 0x10);
  while (lVar3 != param_1 + 0x18) {
    func_0x0001086e6230();
    if (iVar1 != 0) {
      *(undefined1 *)(lVar3 + 0x80) = 1;
    }
    func_0x0001086e621c();
    lVar3 = CONCAT44(uVar2,iVar1);
  }
  return;
}



/* Entry: 1086e5ba4; end: 1086e5d2f;  */

void FUN_1086e5ba4(undefined8 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong *puVar2;
  undefined **ppuVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar3 = &PTR_PTR_11327fd48;
  if (*(undefined ***)(param_3 + 0x20) != (undefined **)0x0) {
    ppuVar3 = *(undefined ***)(param_3 + 0x20);
  }
  if (*(int *)(ppuVar3 + 5) == 1) {
    ppuVar3 = (undefined **)ppuVar3[4];
  }
  else {
    ppuVar3 = &PTR_PTR_11327fd08;
  }
  func_0x0001086e625c(ppuVar3[3]);
  func_0x000107c29ee0(auStack_48);
  ppuVar3 = &PTR_PTR_113286e08;
  if (*(undefined ***)(param_3 + 0x30) != (undefined **)0x0) {
    ppuVar3 = *(undefined ***)(param_3 + 0x30);
  }
  if ((*(byte *)(ppuVar3 + 2) >> 2 & 1) == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    goto LAB_1086e5cb4;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x60);
  func_0x000107c27994(auStack_68,auStack_48);
  uVar4 = param_2 + 8;
  uStack_50 = uVar5;
  FUN_1086e58d0(uVar4,auStack_68);
  if ((uVar4 == 0) || (uVar1 = uVar4, FUN_1086a3140(uVar4,param_3), (uVar1 & 1) == 0)) {
LAB_1086e5ca4:
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else {
    ppuVar3 = &PTR_PTR_113283900;
    if (*(undefined ***)(uVar4 + 0x28) != (undefined **)0x0) {
      ppuVar3 = *(undefined ***)(uVar4 + 0x28);
    }
    if ((*(int *)((long)ppuVar3 + 0x1c) != 2) ||
       (puVar2 = (ulong *)(*(ulong *)(ppuVar3[2] + 0x10) & 0xfffffffffffffffc),
       puVar2 == (ulong *)0x0)) goto LAB_1086e5ca4;
    uVar4 = (ulong)*(char *)((long)puVar2 + 0x17);
    if ((long)uVar4 < 0) {
      uVar4 = puVar2[1];
      puVar2 = (ulong *)*puVar2;
    }
    func_0x000107c28004(&uStack_80,puVar2,(long)puVar2 + uVar4);
    param_1[1] = uStack_78;
    *param_1 = uStack_80;
    param_1[2] = uStack_70;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_80 = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    func_0x000107c27914(&uStack_80);
  }
  func_0x000107c27914(auStack_68);
LAB_1086e5cb4:
  func_0x000107c27914(auStack_48);
  return;
}



/* Entry: 1086e5d30; end: 1086e5dd3;  */

void FUN_1086e5d30(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  func_0x000107c27994(auStack_40);
  ppuStack_80 = &PTR_DAT_110a94678;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_4f = 0;
  uStack_57 = 0;
  uStack_50 = 0;
  lVar1 = param_1 + 8;
  uStack_28 = param_3;
  FUN_1086e58d0(lVar1,auStack_40);
  if (lVar1 != 0) {
    FUN_1086e5dd4(&ppuStack_80);
  }
  uStack_4f = CONCAT17(1,(undefined7)uStack_4f);
  FUN_1086e591c(param_1 + 8,auStack_40,&ppuStack_80);
  func_0x0001086e6204();
  func_0x000107c27914(auStack_40);
  return;
}



/* Entry: 1086e5dd4; end: 1086e5dff;  */

long FUN_1086e5dd4(long param_1,long param_2)

{
  FUN_1089180ec();
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  return param_1;
}



/* Entry: 1086e5e00; end: 1086e5e77;  */

bool FUN_1086e5e00(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x18;
  lVar3 = *(long *)(param_1 + 0x10);
  while (lVar3 != lVar1) {
    func_0x0001086e6230();
    if (((int)param_1 != 0) && ((*(byte *)(lVar3 + 0x80) & 1) == 0)) {
      ppuVar2 = &PTR_PTR_113287db8;
      if (*(undefined ***)(lVar3 + 0x60) != (undefined **)0x0) {
        ppuVar2 = *(undefined ***)(lVar3 + 0x60);
      }
      if (*(char *)(ppuVar2 + 4) != '\x01') break;
    }
    func_0x0001086e621c();
    lVar3 = param_1;
  }
  return lVar3 != lVar1;
}



/* Entry: 1086e5e78; end: 1086e5e7b;  */

undefined8 * FUN_1086e5e78(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  *param_1 = &PTR_FUN_110a65c30;
  func_0x000107c288a4(param_1 + 8);
  if (param_1[7] != 0) {
    plVar3 = (long *)param_1[6];
    plVar1 = *(long **)(param_1[5] + 8);
    lVar2 = *plVar3;
    *(long **)(lVar2 + 8) = plVar1;
    *plVar1 = lVar2;
    param_1[7] = 0;
    while (plVar3 != param_1 + 5) {
      plVar3 = (long *)plVar3[1];
      __ZdlPv();
    }
  }
  FUN_1086e5f0c(param_1[3]);
  return param_1;
}



/* Entry: 1086e5e7c; end: 1086e5e8f;  */

void FUN_1086e5e7c(void)

{
  FUN_1086e5e90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086e5e90; end: 1086e5f0b;  */

undefined8 * FUN_1086e5e90(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  *param_1 = &PTR_FUN_110a65c30;
  func_0x000107c288a4(param_1 + 8);
  if (param_1[7] != 0) {
    plVar3 = (long *)param_1[6];
    plVar1 = *(long **)(param_1[5] + 8);
    lVar2 = *plVar3;
    *(long **)(lVar2 + 8) = plVar1;
    *plVar1 = lVar2;
    param_1[7] = 0;
    while (plVar3 != param_1 + 5) {
      plVar3 = (long *)plVar3[1];
      __ZdlPv();
    }
  }
  FUN_1086e5f0c(param_1[3]);
  return param_1;
}



/* Entry: 1086e5f0c; end: 1086e5f73;  */

void FUN_1086e5f0c(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_1086e5f0c(*param_1);
    FUN_1086e5f0c(param_1[1]);
    func_0x0001086e5f4c(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 1086e5f74; end: 1086e600f;  */

void FUN_1086e5f74(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  plVar1 = *(long **)(param_2 + 0x40);
  plVar4 = *(long **)(param_1 + 0x28);
  if (plVar1 == (long *)(param_1 + 0x20)) {
    plVar1 = (long *)0x18;
    __Znwm();
    plVar1[2] = param_2;
    lVar3 = *plVar4;
    *(long **)(lVar3 + 8) = plVar1;
    *plVar1 = lVar3;
    *plVar4 = (long)plVar1;
    plVar1[1] = (long)plVar4;
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
    *(long **)(param_2 + 0x40) = plVar1;
  }
  else if ((plVar4 != plVar1) && (plVar2 = (long *)plVar1[1], plVar4 != plVar2)) {
    lVar3 = *plVar1;
    *(long **)(lVar3 + 8) = plVar2;
    *plVar2 = lVar3;
    lVar3 = *plVar4;
    *(long **)(lVar3 + 8) = plVar1;
    *plVar1 = lVar3;
    *plVar4 = (long)plVar1;
    plVar1[1] = (long)plVar4;
  }
  return;
}



/* Entry: 1086e6010; end: 1086e608b;  */

long * FUN_1086e6010(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  plVar1 = (long *)(param_1 + 8);
  plVar4 = plVar1;
  plVar5 = plVar1;
  while (plVar6 = (long *)*plVar4, plVar6 != (long *)0x0) {
    func_0x0001086e6244();
    bVar3 = (int)param_1 == 0;
    lVar2 = 8;
    if (bVar3) {
      lVar2 = 0;
    }
    plVar4 = (long *)((long)plVar6 + lVar2);
    if (bVar3) {
      plVar5 = plVar6;
    }
  }
  if ((plVar1 == plVar5) || (FUN_1086e608c(param_2,plVar5 + 4), (int)param_2 != 0)) {
    plVar5 = plVar1;
  }
  return plVar5;
}



/* Entry: 1086e608c; end: 1086e6143;  */

bool FUN_1086e608c(ulong param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  func_0x000107c28078();
  if ((uVar3 & 1) == 0) {
    FUN_108664d0c(param_1,param_2);
    bVar2 = (char)param_1 < '\0';
    bVar1 = false;
  }
  else {
    bVar1 = SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_2 + 0x18));
    bVar2 = *(long *)(param_1 + 0x18) - *(long *)(param_2 + 0x18) < 0;
  }
  return bVar2 != bVar1;
}



/* Entry: 1086e6144; end: 1086e614f;  */

undefined8 * FUN_1086e6144(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_DAT_110a94678;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  FUN_1086e6190(param_1,param_2);
  return param_1;
}



/* Entry: 1086e6150; end: 1086e618f;  */

undefined8 * FUN_1086e6150(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_DAT_110a94678;
  param_1[1] = param_2;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  FUN_1086e6190(param_1,param_3);
  return param_1;
}



/* Entry: 1086e6190; end: 1086e61f3;  */

long FUN_1086e6190(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      FUN_10891811c(param_1);
    }
    else {
      FUN_1089180ec(param_1);
    }
  }
  return param_1;
}



/* Entry: 1086e61f4; end: 1086e626f;  */

void FUN_1086e61f4(void)

{
  return;
}



/* Entry: 1086e6270; end: 1086e6323;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1086e6270(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined1 param_4,
                  ulong param_5)

{
  uint uVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined8 *puVar3;
  long **pplVar5;
  long **pplVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  int extraout_w10;
  undefined8 *puVar12;
  undefined1 *unaff_x21;
  ulong unaff_x22;
  undefined1 auStack_2b8 [48];
  undefined1 uStack_288;
  long **pplStack_280;
  undefined4 *puStack_278;
  undefined1 ***pppuStack_270;
  code *pcStack_268;
  undefined4 uStack_258;
  undefined1 uStack_254;
  undefined1 uStack_253;
  undefined1 auStack_250 [24];
  undefined8 uStack_238;
  undefined1 auStack_230 [32];
  undefined1 uStack_210;
  undefined8 uStack_208;
  ulong uStack_200;
  undefined1 *puStack_1f8;
  undefined8 *puStack_1f0;
  long **pplStack_1e8;
  undefined1 **ppuStack_1e0;
  code *pcStack_1d8;
  undefined1 auStack_1c8 [24];
  uint uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined8 uStack_19c;
  undefined8 auStack_188 [7];
  uint uStack_150;
  long *aplStack_148 [2];
  undefined1 auStack_138 [24];
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined1 auStack_b0 [48];
  undefined1 uStack_80;
  undefined4 uStack_78;
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  undefined **appuStack_50 [3];
  undefined ***pppuStack_38;
  undefined1 uStack_30;
  undefined8 uStack_28;
  undefined8 *puVar4;
  
  puVar9 = auStack_b0;
  uStack_78 = param_2;
  uStack_74 = param_4;
  func_0x00010086a224();
  uStack_73 = 0;
  puVar12 = (undefined8 *)&uStack_78;
  uStack_28 = extraout_x8;
  uStack_254 = uStack_74;
  func_0x000107c27994(auStack_70,param_3);
  pppuStack_38 = appuStack_50;
  uStack_58 = 0;
  appuStack_50[0] = &PTR_FUN_110a65d60;
  uStack_30 = 0;
  auStack_b0[0] = 0;
  uStack_80 = 0;
  pplVar5 = (long **)&uStack_78;
  FUN_1086e6324(param_1,pplVar5,auStack_b0);
  func_0x00010086ab34(auStack_b0);
  func_0x0001086cf1c0(&uStack_78);
  func_0x00010086ab20(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001086e934c();
  func_0x00010086ab34();
  puVar3 = (undefined8 *)&uStack_78;
  func_0x0001086cf1c0();
  func_0x0001086e92c8();
  pcStack_b8 = FUN_1086e6324;
  puVar4 = puVar3;
  puVar10 = puVar9;
  puStack_c0 = &stack0xfffffffffffffff0;
  func_0x00010086a224();
  iVar2 = (int)puVar4;
  uStack_118 = extraout_x8_00;
  FUN_1086e67e4();
  if (iVar2 == 0) {
    puVar4 = puVar3 + 9;
    FUN_1086e6640(puVar4,pplVar5 + 1);
    func_0x000107c27994(auStack_1c8,pplVar5 + 1);
    uVar1 = *(uint *)pplVar5;
    puVar12 = (undefined8 *)(ulong)uVar1;
    unaff_x21 = (undefined1 *)(ulong)*(byte *)((long)pplVar5 + 4);
    unaff_x22 = (ulong)*(byte *)((long)pplVar5 + 5);
    pplVar6 = (long **)(puVar3 + 9);
    FUN_1086e6874();
    uVar8 = SUB84(pplVar5,0);
    if (((ulong)puVar4 & 1) == 0) {
      FUN_1086e5330(aplStack_148,puVar3 + 5);
      if (aplStack_148[0] != (long *)0x0) {
        uStack_1a8 = (undefined4)puVar3[2];
        uStack_1a4 = (undefined4)((ulong)puVar3[2] >> 0x20);
        uStack_1b0 = (uint)puVar3[1];
        uStack_1ac = (undefined4)((ulong)puVar3[1] >> 0x20);
        if (puVar3[2] != 0) {
          do {
            func_0x000107c328dc();
          } while (extraout_w10 != 0);
        }
        func_0x000107c27994(&uStack_1a0,auStack_1c8);
        puVar3 = auStack_188;
        FUN_1086e76d4(puVar3,puVar9);
        puStack_120 = (undefined8 *)0x0;
        uStack_150 = uVar1;
        func_0x0001086e9464();
        *puVar3 = &PTR_SUB_110a65f40;
        puVar3[2] = CONCAT44(uStack_1a4,uStack_1a8);
        puVar3[1] = CONCAT44(uStack_1ac,uStack_1b0);
        uStack_1b0 = 0;
        uStack_1ac = 0;
        uStack_1a8 = 0;
        uStack_1a4 = 0;
        func_0x000107c27994(puVar3 + 3,&uStack_1a0);
        FUN_1086e76d4(puVar3 + 6,auStack_188);
        *(uint *)(puVar3 + 0xd) = uStack_150;
        puVar11 = auStack_1c8;
        puVar4 = puVar12;
        puVar10 = unaff_x21;
        param_5 = unaff_x22;
        puStack_120 = puVar3;
        (**(code **)(*aplStack_148[0] + 0x70))
                  (aplStack_148[0],puVar12,unaff_x21,puVar11,unaff_x22,auStack_138,puVar9);
        uStack_254 = SUB81(puVar11,0);
        uVar8 = SUB84(puVar4,0);
        FUN_1086d665c(auStack_138);
        func_0x0001086e6734(&uStack_1b0);
      }
      pplVar6 = aplStack_148;
      func_0x000107c288e8();
    }
    func_0x0001086e93c4();
  }
  else {
    uStack_1b0 = uStack_1b0 & 0xffffff00;
    uStack_1a4 = 0;
    uStack_1a0 = 0;
    uStack_1ac = 0;
    uStack_1a8 = 0;
    uStack_19c = 0x100000000;
    uVar8 = SUB84(&uStack_1b0,0);
    FUN_1086e6818();
    pplVar6 = pplVar5;
  }
  func_0x00010086ab20(uStack_118);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_1086d665c(auStack_138);
    func_0x0001086e6734(&uStack_1b0);
    pplVar5 = aplStack_148;
    func_0x000107c288e8();
    func_0x0001086e93c4();
    func_0x0001086e92c8();
    pcStack_1d8 = FUN_1086e6554;
    uStack_200 = unaff_x22;
    puStack_1f8 = unaff_x21;
    puStack_1f0 = puVar12;
    pplStack_1e8 = pplVar6;
    ppuStack_1e0 = &puStack_c0;
    func_0x00010086a224();
    uStack_253 = 0;
    uStack_258 = uVar8;
    uStack_208 = extraout_x8_01;
    func_0x000107c27994(auStack_250,puVar10);
    uStack_238 = 0;
    FUN_1086e7aa4(auStack_230,param_5);
    uStack_210 = 0;
    func_0x0001086e9548();
    puVar7 = &uStack_258;
    func_0x0001086cf1c0();
    func_0x00010086ab20(uStack_208);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001086cf1c0(&uStack_258);
      func_0x0001086e92c8();
      pcStack_268 = FUN_1086e65f8;
      auStack_2b8[0] = 0;
      uStack_288 = 0;
      pplStack_280 = pplVar5;
      puStack_278 = puVar7;
      pppuStack_270 = &ppuStack_1e0;
      FUN_1086e6324();
      func_0x00010086ab34(auStack_2b8);
      return;
    }
    return;
  }
  return;
}



/* Entry: 1086e6324; end: 1086e6553;  */

void FUN_1086e6324(long param_1,long **param_2,ulong param_3,undefined1 param_4,ulong param_5)

{
  uint uVar1;
  undefined1 in_ZR;
  int iVar2;
  ulong uVar4;
  long **pplVar5;
  undefined8 *puVar6;
  long **pplVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  ulong uVar10;
  undefined1 *puVar11;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w10;
  ulong unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  undefined1 auStack_208 [48];
  undefined1 uStack_1d8;
  long **pplStack_1d0;
  undefined4 *puStack_1c8;
  undefined1 **ppuStack_1c0;
  code *pcStack_1b8;
  undefined4 uStack_1a8;
  undefined1 uStack_1a4;
  undefined1 uStack_1a3;
  undefined1 auStack_1a0 [24];
  undefined8 uStack_188;
  undefined1 auStack_180 [32];
  undefined1 uStack_160;
  undefined8 uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  long **pplStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined1 auStack_118 [24];
  uint uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined8 uStack_ec;
  undefined8 auStack_d8 [7];
  uint uStack_a0;
  long *aplStack_98 [2];
  undefined1 auStack_88 [24];
  undefined8 *puStack_70;
  undefined8 uStack_68;
  long lVar3;
  
  lVar3 = param_1;
  uVar10 = param_3;
  uStack_1a4 = param_4;
  func_0x00010086a224();
  iVar2 = (int)lVar3;
  uStack_68 = extraout_x8;
  FUN_1086e67e4();
  if (iVar2 == 0) {
    uVar4 = param_1 + 0x48;
    FUN_1086e6640(uVar4,param_2 + 1);
    func_0x000107c27994(auStack_118,param_2 + 1);
    uVar1 = *(uint *)param_2;
    unaff_x20 = (ulong)uVar1;
    unaff_x21 = (ulong)*(byte *)((long)param_2 + 4);
    unaff_x22 = (ulong)*(byte *)((long)param_2 + 5);
    pplVar5 = (long **)(param_1 + 0x48);
    FUN_1086e6874();
    uVar9 = SUB84(param_2,0);
    if ((uVar4 & 1) == 0) {
      FUN_1086e5330(aplStack_98,param_1 + 0x28);
      if (aplStack_98[0] != (long *)0x0) {
        uStack_f8 = (undefined4)*(undefined8 *)(param_1 + 0x10);
        uStack_f4 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
        uStack_100 = (uint)*(undefined8 *)(param_1 + 8);
        uStack_fc = (undefined4)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20);
        if (*(long *)(param_1 + 0x10) != 0) {
          do {
            func_0x000107c328dc();
          } while (extraout_w10 != 0);
        }
        func_0x000107c27994(&uStack_f0,auStack_118);
        puVar6 = auStack_d8;
        FUN_1086e76d4(puVar6,param_3);
        puStack_70 = (undefined8 *)0x0;
        uStack_a0 = uVar1;
        func_0x0001086e9464();
        *puVar6 = &PTR_SUB_110a65f40;
        puVar6[2] = CONCAT44(uStack_f4,uStack_f8);
        puVar6[1] = CONCAT44(uStack_fc,uStack_100);
        uStack_100 = 0;
        uStack_fc = 0;
        uStack_f8 = 0;
        uStack_f4 = 0;
        func_0x000107c27994(puVar6 + 3,&uStack_f0);
        FUN_1086e76d4(puVar6 + 6,auStack_d8);
        *(uint *)(puVar6 + 0xd) = uStack_a0;
        puVar11 = auStack_118;
        uVar4 = unaff_x20;
        uVar10 = unaff_x21;
        param_5 = unaff_x22;
        puStack_70 = puVar6;
        (**(code **)(*aplStack_98[0] + 0x70))
                  (aplStack_98[0],unaff_x20,unaff_x21,puVar11,unaff_x22,auStack_88,param_3);
        uStack_1a4 = SUB81(puVar11,0);
        uVar9 = (undefined4)uVar4;
        FUN_1086d665c(auStack_88);
        func_0x0001086e6734(&uStack_100);
      }
      pplVar5 = aplStack_98;
      func_0x000107c288e8();
    }
    func_0x0001086e93c4();
  }
  else {
    uStack_100 = uStack_100 & 0xffffff00;
    uStack_f4 = 0;
    uStack_f0 = 0;
    uStack_fc = 0;
    uStack_f8 = 0;
    uStack_ec = 0x100000000;
    uVar9 = SUB84(&uStack_100,0);
    FUN_1086e6818();
    pplVar5 = param_2;
  }
  func_0x00010086ab20(uStack_68);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_1086d665c(auStack_88);
    func_0x0001086e6734(&uStack_100);
    pplVar7 = aplStack_98;
    func_0x000107c288e8();
    func_0x0001086e93c4();
    func_0x0001086e92c8();
    pcStack_128 = FUN_1086e6554;
    uStack_150 = unaff_x22;
    uStack_148 = unaff_x21;
    uStack_140 = unaff_x20;
    pplStack_138 = pplVar5;
    puStack_130 = &stack0xfffffffffffffff0;
    func_0x00010086a224();
    uStack_1a3 = 0;
    uStack_1a8 = uVar9;
    uStack_158 = extraout_x8_00;
    func_0x000107c27994(auStack_1a0,uVar10);
    uStack_188 = 0;
    FUN_1086e7aa4(auStack_180,param_5);
    uStack_160 = 0;
    func_0x0001086e9548();
    puVar8 = &uStack_1a8;
    func_0x0001086cf1c0();
    func_0x00010086ab20(uStack_158);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001086cf1c0(&uStack_1a8);
      func_0x0001086e92c8();
      pcStack_1b8 = FUN_1086e65f8;
      auStack_208[0] = 0;
      uStack_1d8 = 0;
      pplStack_1d0 = pplVar7;
      puStack_1c8 = puVar8;
      ppuStack_1c0 = &puStack_130;
      FUN_1086e6324();
      func_0x00010086ab34(auStack_208);
      return;
    }
    return;
  }
  return;
}



/* Entry: 1086e6554; end: 1086e65f7;  */

void FUN_1086e6554(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined1 in_ZR;
  undefined4 *puVar1;
  undefined8 extraout_x8;
  undefined1 auStack_e8 [48];
  undefined1 uStack_b8;
  undefined8 uStack_b0;
  undefined4 *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined4 uStack_88;
  undefined1 uStack_84;
  undefined1 uStack_83;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined1 auStack_60 [32];
  undefined1 uStack_40;
  undefined8 uStack_38;
  
  uStack_88 = param_2;
  uStack_84 = param_4;
  func_0x00010086a224();
  uStack_83 = 0;
  uStack_38 = extraout_x8;
  func_0x000107c27994(auStack_80,param_3);
  uStack_68 = 0;
  FUN_1086e7aa4(auStack_60,param_5);
  uStack_40 = 0;
  func_0x0001086e9548();
  puVar1 = &uStack_88;
  func_0x0001086cf1c0();
  func_0x00010086ab20(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001086cf1c0(&uStack_88);
  func_0x0001086e92c8();
  pcStack_98 = FUN_1086e65f8;
  auStack_e8[0] = 0;
  uStack_b8 = 0;
  uStack_b0 = param_1;
  puStack_a8 = puVar1;
  puStack_a0 = &stack0xfffffffffffffff0;
  FUN_1086e6324();
  func_0x00010086ab34(auStack_e8);
  return;
}



/* Entry: 1086e65f8; end: 1086e6637;  */

void FUN_1086e65f8(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [48];
  undefined1 uStack_28;
  
  auStack_58[0] = 0;
  uStack_28 = 0;
  FUN_1086e6324(param_1,param_2,auStack_58);
  func_0x00010086ab34(auStack_58);
  return;
}



/* Entry: 1086e6638; end: 1086e663f;  */

undefined8 FUN_1086e6638(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  
  plVar8 = *(long **)(param_1 + 0x50);
  if ((plVar8 != (long *)0x0) && (*(long *)(param_1 + 0x60) != 0)) {
    plVar3 = (long *)(param_1 + 0x48U);
    func_0x0001086e953c();
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      plVar10 = (long *)((ulong)plVar3 & uVar9);
    }
    else {
      plVar10 = plVar3;
      if (plVar8 <= plVar3) {
        uVar1 = 0;
        uVar7 = (uint)plVar8;
        if (uVar7 != 0) {
          uVar1 = (uint)plVar3 / uVar7;
        }
        plVar10 = (long *)(ulong)((uint)plVar3 - uVar1 * uVar7);
      }
    }
    plVar6 = *(long **)(*(long *)(param_1 + 0x48U) + (long)plVar10 * 8);
    plVar4 = plVar3;
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) {
            return 0;
          }
          plVar5 = (long *)plVar6[1];
          if (plVar3 != plVar5) break;
          func_0x0001086e9520();
          if ((int)plVar4 != 0) {
            return 1;
          }
        }
        if (((ulong)plVar8 & uVar9) == 0) {
          plVar5 = (long *)((ulong)plVar5 & uVar9);
        }
        else if (plVar8 <= plVar5) {
          uVar2 = 0;
          if (plVar8 != (long *)0x0) {
            uVar2 = (ulong)plVar5 / (ulong)plVar8;
          }
          plVar5 = (long *)((long)plVar5 - uVar2 * (long)plVar8);
        }
      } while (plVar5 == plVar10);
    }
  }
  return 0;
}



/* Entry: 1086e6640; end: 1086e670f;  */

undefined8 FUN_1086e6640(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  
  plVar8 = (long *)param_1[1];
  if ((plVar8 != (long *)0x0) && (param_1[3] != 0)) {
    plVar3 = param_1;
    func_0x0001086e953c();
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      plVar10 = (long *)((ulong)plVar3 & uVar9);
    }
    else {
      plVar10 = plVar3;
      if (plVar8 <= plVar3) {
        uVar1 = 0;
        uVar7 = (uint)plVar8;
        if (uVar7 != 0) {
          uVar1 = (uint)plVar3 / uVar7;
        }
        plVar10 = (long *)(ulong)((uint)plVar3 - uVar1 * uVar7);
      }
    }
    plVar6 = *(long **)(*param_1 + (long)plVar10 * 8);
    plVar4 = plVar3;
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) {
            return 0;
          }
          plVar5 = (long *)plVar6[1];
          if (plVar3 != plVar5) break;
          func_0x0001086e9520();
          if ((int)plVar4 != 0) {
            return 1;
          }
        }
        if (((ulong)plVar8 & uVar9) == 0) {
          plVar5 = (long *)((ulong)plVar5 & uVar9);
        }
        else if (plVar8 <= plVar5) {
          uVar2 = 0;
          if (plVar8 != (long *)0x0) {
            uVar2 = (ulong)plVar5 / (ulong)plVar8;
          }
          plVar5 = (long *)((long)plVar5 - uVar2 * (long)plVar8);
        }
      } while (plVar5 == plVar10);
    }
  }
  return 0;
}



/* Entry: 1086e6710; end: 1086e677b;  */

undefined8 FUN_1086e6710(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010086ab74(param_1 + 0x10);
  func_0x00010056567c();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return unaff_x19;
}



/* Entry: 1086e677c; end: 1086e67e3;  */

long * FUN_1086e677c(long param_1,ulong param_2)

{
  long *aplStack_30 [2];
  
  func_0x000107c292ac(aplStack_30,param_1 + 0x18);
  if (aplStack_30[0] == (long *)0x0) {
    aplStack_30[0] = (long *)0xffffffffffffffff;
  }
  else {
    (**(code **)(*aplStack_30[0] + 0x290))();
    if ((param_2 & 1) == 0) {
      aplStack_30[0] = (long *)0xffffffffffffffff;
    }
  }
  func_0x000107c2911c(aplStack_30);
  return aplStack_30[0];
}



/* Entry: 1086e67e4; end: 1086e6817;  */

bool FUN_1086e67e4(long param_1,long param_2)

{
  FUN_1086e677c(param_1,param_2 + 8);
  return *(long *)(param_2 + 0x20) != 0 && *(long *)(param_2 + 0x20) <= param_1;
}



/* Entry: 1086e6818; end: 1086e6873;  */

void FUN_1086e6818(long param_1,undefined8 *param_2)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined8 uStack_34;
  
  uStack_58 = *(undefined8 *)(param_1 + 0x10);
  uStack_60 = *(undefined8 *)(param_1 + 8);
  uStack_50 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  uStack_48 = *param_2;
  uStack_40 = (undefined4)param_2[1];
  uStack_34 = *(undefined8 *)((long)param_2 + 0x14);
  uStack_3c = (undefined4)*(undefined8 *)((long)param_2 + 0xc);
  uStack_38 = (undefined4)((ulong)*(undefined8 *)((long)param_2 + 0xc) >> 0x20);
  FUN_1086e7764(param_1 + 0x28,&uStack_60);
  func_0x0001086e9358();
  return;
}



/* Entry: 1086e6874; end: 1086e6caf;  */

void FUN_1086e6874(undefined8 param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined1 in_ZR;
  bool bVar4;
  long *plVar5;
  undefined8 extraout_x8;
  long *plVar6;
  ulong extraout_x8_00;
  long lVar7;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong extraout_x9;
  ulong extraout_x9_00;
  long *extraout_x10;
  long *plVar8;
  long *extraout_x10_00;
  long *extraout_x11;
  long *plVar9;
  long *extraout_x11_00;
  long *plVar10;
  long *plVar11;
  long *unaff_x20;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  uint uVar15;
  long *plVar16;
  long *unaff_x26;
  undefined1 auStack_208 [24];
  long *plStack_1f0;
  long *plStack_1e8;
  undefined8 uStack_1e0;
  undefined1 auStack_1d8 [168];
  long lStack_130;
  long lStack_128;
  long lStack_120;
  undefined1 auStack_118 [176];
  undefined8 uStack_68;
  
  func_0x0001086e938c();
  func_0x00010086a224();
  uStack_68 = extraout_x8;
  func_0x000107c27994(auStack_208,param_2 + 8);
  plVar12 = unaff_x20;
  FUN_1086e8da4();
  if (plVar12 == (long *)0x0) {
    _bzero(auStack_1d8,0xa8);
    plVar13 = &lStack_130;
    func_0x000107c27994(&lStack_130,auStack_208);
    FUN_1086e8e70(auStack_118,auStack_1d8);
    plVar5 = &lStack_130;
    FUN_108848654();
    plVar16 = (long *)unaff_x20[1];
    if (plVar16 != (long *)0x0) {
      uVar14 = (long)plVar16 - 1;
      uVar15 = (uint)plVar16;
      if (((ulong)plVar16 & uVar14) == 0) {
        unaff_x26 = (long *)((ulong)(uVar15 - 1) & (ulong)plVar5);
      }
      else {
        unaff_x26 = plVar5;
        if (plVar16 <= plVar5) {
          uVar1 = 0;
          if (uVar15 != 0) {
            uVar1 = (uint)plVar5 / uVar15;
          }
          unaff_x26 = (long *)(ulong)((uint)plVar5 - uVar1 * uVar15);
        }
      }
      plVar12 = *(long **)(*unaff_x20 + (long)unaff_x26 * 8);
      if (plVar12 != (long *)0x0) {
        do {
          while( true ) {
            plVar12 = (long *)*plVar12;
            if (plVar12 == (long *)0x0) goto LAB_1086e6988;
            plVar6 = (long *)plVar12[1];
            in_ZR = plVar6 == plVar5;
            if (!(bool)in_ZR) break;
            plVar6 = plVar12 + 2;
            func_0x000107c28078(plVar6,&lStack_130);
            if (((ulong)plVar6 & 1) != 0) goto LAB_1086e6c14;
          }
          if (((ulong)plVar16 & uVar14) == 0) {
            plVar6 = (long *)((ulong)plVar6 & uVar14);
          }
          else if (plVar16 <= plVar6) {
            uVar2 = 0;
            if (plVar16 != (long *)0x0) {
              uVar2 = (ulong)plVar6 / (ulong)plVar16;
            }
            plVar6 = (long *)((long)plVar6 - uVar2 * (long)plVar16);
          }
        } while (plVar6 == unaff_x26);
      }
    }
LAB_1086e6988:
    plVar12 = (long *)0xd0;
    __Znwm();
    plVar6 = unaff_x20 + 2;
    uStack_1e0 = 1;
    *plVar12 = 0;
    plVar12[1] = (long)plVar5;
    plVar12[3] = lStack_128;
    plVar12[2] = lStack_130;
    plVar12[4] = lStack_120;
    lStack_130 = 0;
    lStack_128 = 0;
    lStack_120 = 0;
    plStack_1f0 = plVar12;
    plStack_1e8 = plVar6;
    FUN_1086e8e70(plVar12 + 5,auStack_118);
    if ((plVar16 == (long *)0x0) ||
       (in_ZR = *(float *)(unaff_x20 + 4) * (float)plVar16 == (float)(unaff_x20[3] + 1),
       *(float *)(unaff_x20 + 4) * (float)plVar16 < (float)(unaff_x20[3] + 1))) {
      bVar4 = plVar16 == (long *)0x3;
      func_0x0001086e9474((long)plVar16 << 1);
      if (bVar4) {
        plVar13 = (long *)0x2;
      }
      else if (((ulong)plVar13 & extraout_x8_00) != 0) {
        __ZNSt3__112__next_primeEm();
      }
      plVar16 = (long *)unaff_x20[1];
      if (plVar16 < plVar13) {
LAB_1086e6a3c:
        if ((ulong)plVar13 >> 0x3d != 0) goto LAB_1086e6c60;
        __Znwm((long)plVar13 << 3);
        FUN_1086e8f38();
        unaff_x20[1] = (long)plVar13;
        lVar7 = *unaff_x20;
        for (plVar16 = (long *)0x0; plVar13 != plVar16; plVar16 = (long *)((long)plVar16 + 1)) {
          *(undefined8 *)(lVar7 + (long)plVar16 * 8) = 0;
        }
        plVar16 = plVar13;
        if (*plVar6 != 0) {
          func_0x0001086e95e4();
          func_0x0001086e95d0();
          lVar7 = extraout_x8_01;
          uVar14 = extraout_x9;
          plVar10 = extraout_x10;
          plVar9 = extraout_x11;
          while (plVar8 = plVar10, plVar10 = (long *)*plVar8, plVar10 != (long *)0x0) {
            plVar11 = (long *)plVar10[1];
            if (((ulong)plVar13 & uVar14) == 0) {
              plVar11 = (long *)((ulong)plVar11 & uVar14);
            }
            else if (plVar13 <= plVar11) {
              uVar2 = 0;
              if (plVar13 != (long *)0x0) {
                uVar2 = (ulong)plVar11 / (ulong)plVar13;
              }
              plVar11 = (long *)((long)plVar11 - uVar2 * (long)plVar13);
            }
            if (plVar11 != plVar9) {
              if (*(long *)(lVar7 + (long)plVar11 * 8) == 0) {
                *(long **)(lVar7 + (long)plVar11 * 8) = plVar8;
                plVar9 = plVar11;
              }
              else {
                func_0x0001086e9428();
                lVar7 = extraout_x8_02;
                uVar14 = extraout_x9_00;
                plVar10 = extraout_x10_00;
                plVar9 = extraout_x11_00;
              }
            }
          }
        }
      }
      else if (plVar13 < plVar16) {
        plVar10 = (long *)(long)((float)(ulong)unaff_x20[3] / *(float *)(unaff_x20 + 4));
        if ((plVar16 < (long *)0x3) || (((ulong)plVar16 & (long)plVar16 - 1U) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if ((long *)0x1 < plVar10) {
          plVar10 = (long *)(1L << (-LZCOUNT((long)plVar10 + -1) & 0x3fU));
        }
        if (plVar13 <= plVar10) {
          plVar13 = plVar10;
        }
        if (plVar13 < plVar16) {
          if (plVar13 != (long *)0x0) goto LAB_1086e6a3c;
          FUN_1086e8f38();
          unaff_x20[1] = 0;
          plVar16 = (long *)0x0;
        }
        else {
          plVar16 = (long *)unaff_x20[1];
        }
      }
      if (((ulong)plVar16 & (long)plVar16 - 1U) == 0) {
        in_ZR = true;
        unaff_x26 = (long *)((ulong)((int)plVar16 - 1) & (ulong)plVar5);
      }
      else {
        in_ZR = plVar5 == plVar16;
        unaff_x26 = plVar5;
        if (plVar16 <= plVar5) {
          uVar14 = 0;
          if (plVar16 != (long *)0x0) {
            uVar14 = (ulong)plVar5 / (ulong)plVar16;
          }
          unaff_x26 = (long *)((long)plVar5 - uVar14 * (long)plVar16);
        }
      }
    }
    lVar7 = *unaff_x20;
    plVar13 = *(long **)(lVar7 + (long)unaff_x26 * 8);
    if (plVar13 == (long *)0x0) {
      *plVar12 = *plVar6;
      *plVar6 = (long)plVar12;
      *(long **)(lVar7 + (long)unaff_x26 * 8) = plVar6;
      if (*plVar12 != 0) {
        plVar13 = *(long **)(*plVar12 + 8);
        if (((ulong)plVar16 & (long)plVar16 - 1U) == 0) {
          plVar13 = (long *)((ulong)plVar13 & (long)plVar16 - 1U);
          in_ZR = true;
        }
        else {
          in_ZR = plVar13 == plVar16;
          if (plVar16 <= plVar13) {
            uVar14 = 0;
            if (plVar16 != (long *)0x0) {
              uVar14 = (ulong)plVar13 / (ulong)plVar16;
            }
            plVar13 = (long *)((long)plVar13 - uVar14 * (long)plVar16);
          }
        }
        *(long **)(lVar7 + (long)plVar13 * 8) = plVar12;
      }
    }
    else {
      *plVar12 = *plVar13;
      *plVar13 = (long)plVar12;
    }
    plStack_1f0 = (long *)0x0;
    unaff_x20[3] = unaff_x20[3] + 1;
    func_0x0001086e8f50(&plStack_1f0);
LAB_1086e6c14:
    func_0x0001086e8f90(&lStack_130);
    func_0x0001086e79b4(auStack_1d8);
    func_0x000107c28298(plVar12 + 0x17);
  }
  func_0x0001086872cc(plVar12 + 0x14);
  FUN_1086f3ee8(plVar12 + 5);
  func_0x0001086e93c4();
  func_0x00010086ab20(uStack_68);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_1086e6c60:
  func_0x000104bd35f4();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1086e6c68);
  (*pcVar3)();
}



/* Entry: 1086e6cb0; end: 1086e7243;  */

void FUN_1086e6cb0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 *puVar1;
  byte bVar2;
  long *plVar3;
  code *pcVar4;
  undefined1 in_ZR;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 uStack_290;
  byte bStack_28c;
  long *plStack_288;
  long *plStack_280;
  long lStack_278;
  long **pplStack_270;
  undefined1 uStack_268;
  long lStack_260;
  long lStack_258;
  undefined1 auStack_250 [32];
  long lStack_230;
  byte bStack_200;
  undefined4 *puStack_1f8;
  undefined4 *puStack_1f0;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  byte bStack_1a8;
  undefined4 uStack_1a0;
  undefined2 uStack_19c;
  undefined2 uStack_19a;
  undefined1 auStack_198 [15];
  char cStack_189;
  undefined4 uStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_160;
  undefined1 uStack_158;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long *plStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  undefined1 uStack_d8;
  undefined8 uStack_78;
  
  lVar7 = param_1;
  func_0x00010086a224();
  plVar5 = (long *)(lVar7 + 0x48);
  uStack_78 = extraout_x8;
  FUN_1086e8da4();
  if (plVar5 == (long *)0x0) {
    auStack_250[0] = 0;
    bStack_1a8 = 0;
  }
  else {
    func_0x0001086e8e9c(&plStack_f0,plVar5 + 5);
    FUN_1086878a8(plVar5 + 0x14);
    func_0x0001086e8e9c(&uStack_1a0,&plStack_f0);
    lStack_120 = plVar5[0x15];
    lStack_128 = plVar5[0x14];
    lStack_118 = plVar5[0x16];
    plVar5[0x15] = 0;
    plVar5[0x16] = 0;
    plVar5[0x14] = 0;
    lStack_100 = plVar5[0x19];
    lStack_108 = plVar5[0x18];
    lStack_110 = plVar5[0x17];
    uVar9 = *(ulong *)(param_1 + 0x50);
    lVar7 = *plVar5;
    uVar8 = plVar5[1];
    uVar11 = uVar9 - 1;
    if ((uVar9 & uVar11) == 0) {
      uVar8 = uVar11 & uVar8;
    }
    else if (uVar9 <= uVar8) {
      uVar13 = 0;
      if (uVar9 != 0) {
        uVar13 = uVar8 / uVar9;
      }
      uVar8 = uVar8 - uVar13 * uVar9;
    }
    lVar12 = *(long *)(param_1 + 0x48);
    plVar3 = *(long **)(lVar12 + uVar8 * 8);
    do {
      plVar10 = plVar3;
      plVar3 = (long *)*plVar10;
    } while ((long *)*plVar10 != plVar5);
    plStack_280 = (long *)(param_1 + 0x58);
    in_ZR = true;
    if (plVar10 == plStack_280) {
LAB_1086e6dd4:
      if (lVar7 == 0) {
LAB_1086e6e08:
        *(undefined8 *)(lVar12 + uVar8 * 8) = 0;
        lVar7 = *plVar5;
        goto LAB_1086e6e10;
      }
      uVar13 = *(ulong *)(lVar7 + 8);
      if ((uVar9 & uVar11) == 0) {
        uVar14 = uVar13 & uVar11;
      }
      else {
        uVar14 = uVar13;
        if (uVar9 <= uVar13) {
          uVar14 = 0;
          if (uVar9 != 0) {
            uVar14 = uVar13 / uVar9;
          }
          uVar14 = uVar13 - uVar14 * uVar9;
        }
      }
      in_ZR = uVar14 == uVar8;
      if (!(bool)in_ZR) goto LAB_1086e6e08;
LAB_1086e6e18:
      if ((uVar9 & uVar11) == 0) {
        uVar13 = uVar13 & uVar11;
      }
      else if (uVar9 <= uVar13) {
        uVar11 = 0;
        if (uVar9 != 0) {
          uVar11 = uVar13 / uVar9;
        }
        uVar13 = uVar13 - uVar11 * uVar9;
      }
      in_ZR = uVar13 == uVar8;
      if (!(bool)in_ZR) {
        *(long **)(lVar12 + uVar13 * 8) = plVar10;
        lVar7 = *plVar5;
      }
    }
    else {
      uVar13 = plVar10[1];
      if ((uVar9 & uVar11) == 0) {
        uVar13 = uVar13 & uVar11;
      }
      else if (uVar9 <= uVar13) {
        uVar14 = 0;
        if (uVar9 != 0) {
          uVar14 = uVar13 / uVar9;
        }
        uVar13 = uVar13 - uVar14 * uVar9;
      }
      in_ZR = uVar13 == uVar8;
      if (!(bool)in_ZR) goto LAB_1086e6dd4;
LAB_1086e6e10:
      if (lVar7 != 0) {
        uVar13 = *(ulong *)(lVar7 + 8);
        goto LAB_1086e6e18;
      }
    }
    *plVar10 = lVar7;
    *plVar5 = 0;
    *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + -1;
    lStack_278 = 1;
    plStack_288 = plVar5;
    FUN_1086e8f50(&plStack_288);
    func_0x0001086e78e0(&plStack_f0);
    func_0x0001086e8e9c(auStack_250,&uStack_1a0);
    lStack_1d0 = lStack_120;
    lStack_1d8 = lStack_128;
    lStack_1c8 = lStack_118;
    lStack_120 = 0;
    lStack_118 = 0;
    lStack_128 = 0;
    lStack_1b8 = lStack_108;
    lStack_1c0 = lStack_110;
    lStack_1b0 = lStack_100;
    bStack_1a8 = 1;
    func_0x0001086e78c0(&uStack_1a0);
  }
  FUN_1086d5eb4();
  uStack_290 = (undefined4)param_3;
  bStack_28c = (byte)((ulong)param_3 >> 0x20);
  if ((bStack_1a8 & 1) != 0) {
    lVar7 = param_1;
    FUN_1086e677c(param_1,param_2);
    if ((bStack_200 & 1) == 0) goto LAB_1086e7168;
    func_0x000107c292ac(&uStack_1a0,param_1 + 0x18);
    plVar5 = (long *)CONCAT26(uStack_19a,CONCAT24(uStack_19c,uStack_1a0));
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x2d8))(plVar5,param_2,param_5,&uStack_290);
    }
    func_0x000107c2911c(&uStack_1a0);
    if ((((bStack_28c & 1) == 0) && (lStack_230 != 0)) && (lVar7 < lStack_230)) {
      uStack_1a0 = 5;
      uStack_188 = 0;
      func_0x0001086e9554();
    }
    else {
      func_0x0001086e95a8();
      func_0x0001086e9554();
    }
    func_0x000107c2825c(&lStack_1c0);
    bVar2 = bStack_28c;
    puVar15 = puStack_1f0;
    puVar1 = puStack_1f8;
    while (puVar18 = puVar1, puVar1 = puVar18 + 0x14, puVar17 = puStack_1f8, puVar16 = puVar15,
          puVar18 != puVar15) {
      lVar12 = *(long *)(puVar18 + 8);
      if ((lVar12 == 0 || lVar7 < lVar12) &&
         ((((bVar2 & 1) != 0 || (lVar12 != 0)) || ((*(byte *)(puVar18 + 0x12) & 1) == 0)))) {
        puVar16 = puVar15 + -0x14;
        do {
          puVar15 = puVar16;
          puVar16 = puVar18;
          if (puVar15 == puVar18) goto LAB_1086e7008;
          lVar12 = *(long *)(puVar15 + 8);
          if (lVar12 != 0 && lVar12 <= lVar7) break;
          puVar16 = puVar15 + -0x14;
        } while (((lVar12 != 0) || ((*(byte *)(puVar15 + 0x12) & 1) == 0)) || ((bVar2 & 1) != 0));
        FUN_1086e7350(&uStack_1a0,puVar18);
        FUN_1086e777c(puVar18,puVar15);
        FUN_1086e777c(puVar15,&uStack_1a0);
        func_0x0001086e952c();
      }
    }
LAB_1086e7008:
    for (; puVar17 != puVar16; puVar17 = puVar17 + 0x14) {
      func_0x0001086e95a8();
      FUN_1086e6818(puVar17,&uStack_1a0);
    }
    in_ZR = puVar16 == puStack_1f0;
    if (!(bool)in_ZR) {
      uStack_1a0 = *puVar16;
      uStack_19c = *(undefined2 *)(puVar16 + 1);
      func_0x000107c27994(auStack_198,param_2);
      uStack_180 = uStack_1e0;
      plStack_288 = (long *)0x0;
      plStack_280 = (long *)0x0;
      pplStack_270 = &plStack_288;
      lStack_278 = 0;
      uStack_268 = 0;
      func_0x0001086e8fb0(&plStack_288,((long)puStack_1f0 - (long)puVar16) / 0x50);
      plStack_f0 = &lStack_278;
      lStack_260 = (long)plStack_280;
      plStack_e8 = &lStack_260;
      plStack_e0 = &lStack_258;
      plVar5 = plStack_280;
      for (; in_ZR = puVar16 == puStack_1f0, lStack_258 = (long)plVar5, !(bool)in_ZR;
          puVar16 = puVar16 + 0x14) {
        FUN_1086e7350(plVar5,puVar16);
        plVar5 = (long *)(lStack_258 + 0x50);
      }
      uStack_d8 = 1;
      FUN_1086e7550(&plStack_f0);
      uStack_268 = 1;
      plStack_280 = plVar5;
      func_0x0001086e8ff8(&pplStack_270);
      lVar7 = lStack_278;
      plVar3 = plStack_280;
      plVar5 = plStack_288;
      plStack_f0 = plStack_288;
      plStack_e8 = plStack_280;
      plStack_e0 = (long *)lStack_278;
      plStack_280 = (long *)0x0;
      lStack_278 = 0;
      plStack_288 = (long *)0x0;
      puStack_160 = (undefined8 *)0x0;
      puVar6 = (undefined8 *)0x20;
      __Znwm();
      *puVar6 = &PTR_FUN_110a66050;
      puVar6[1] = plVar5;
      puVar6[2] = plVar3;
      puVar6[3] = lVar7;
      plStack_e8 = (long *)0x0;
      plStack_e0 = (long *)0x0;
      plStack_f0 = (long *)0x0;
      puStack_160 = puVar6;
      func_0x0001086e7638(&plStack_f0);
      func_0x0001086e7638(&plStack_288);
      uStack_158 = 0;
      func_0x0001086e9548();
      func_0x0001086e952c();
    }
  }
  FUN_1086e78a0(auStack_250);
  func_0x00010086ab20(uStack_78);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_1086e7168:
  func_0x00010bd3f434(&uStack_1a0,&UNK_10f4b1735,0x27,&UNK_10f4b175d);
  puVar1 = (undefined4 *)CONCAT26(uStack_19a,CONCAT24(uStack_19c,uStack_1a0));
  if (-1 < cStack_189) {
    puVar1 = &uStack_1a0;
  }
  func_0x00010bd3f4e0(puVar1,"unknown",0x16e);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1086e71ac);
  (*pcVar4)();
}



/* Entry: 1086e7244; end: 1086e7247;  */

undefined8 * FUN_1086e7244(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110a65ca0;
  plVar2 = (long *)param_1[0xb];
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 2);
    plVar2 = (long *)*plVar2;
    FUN_1086e7994(lVar1);
    func_0x0001086e94a8();
  }
  lVar1 = param_1[9];
  param_1[9] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  func_0x000107c289fc(param_1 + 7);
  func_0x000107c29298(param_1 + 5);
  func_0x000107c28cac(param_1 + 3);
  func_0x000107c292d4(param_1 + 1);
  return param_1;
}



/* Entry: 1086e7248; end: 1086e725b;  */

void FUN_1086e7248(void)

{
  FUN_1086e7918();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086e725c; end: 1086e7273;  */

void FUN_1086e725c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001086e7270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))();
  return;
}



/* Entry: 1086e7274; end: 1086e72d3;  */

long FUN_1086e7274(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    func_0x0001086e72b0();
    lVar2 = uVar1 + 0x50;
  }
  else {
    lVar2 = param_1;
    FUN_1086e72d4();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x50;
}



/* Entry: 1086e72d4; end: 1086e734f;  */

undefined8 FUN_1086e72d4(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x0001086e95bc();
  FUN_1086e7388();
  func_0x0001086e9448();
  FUN_1086e7420();
  FUN_1086e7350(lStack_48);
  lStack_48 = lStack_48 + 0x50;
  FUN_1086e73d0();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x0001086e75d0(auStack_58);
  return uVar1;
}



/* Entry: 1086e7350; end: 1086e7387;  */

void FUN_1086e7350(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001086e938c();
  func_0x0001086e94cc();
  FUN_1086b130c();
  FUN_1086e7aa4(unaff_x20 + 0x28,unaff_x19 + 0x28);
  *(undefined1 *)(unaff_x20 + 0x48) = *(undefined1 *)(unaff_x19 + 0x48);
  return;
}



/* Entry: 1086e7388; end: 1086e73cf;  */

long * FUN_1086e7388(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if (param_2 < (long *)0x333333333333334) {
    uVar1 = (param_1[2] - *param_1) / 0x50;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0x199999999999998 < uVar1) {
      plVar2 = (long *)0x333333333333333;
    }
    return plVar2;
  }
  FUN_1086e7414();
  func_0x0001086e938c();
  plVar2 = param_1 + 2;
  FUN_1086e74ac(plVar2,*param_1,param_1[1],param_2[1] + ((param_1[1] - *param_1) / -0x50) * 0x50);
  func_0x0001086e9308();
  return plVar2;
}



/* Entry: 1086e73d0; end: 1086e7413;  */

void FUN_1086e73d0(long *param_1,long param_2)

{
  func_0x0001086e938c();
  FUN_1086e74ac(param_1 + 2,*param_1,param_1[1],
                *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x50) * 0x50);
  func_0x0001086e9308();
  return;
}



/* Entry: 1086e7414; end: 1086e741f;  */

void FUN_1086e7414(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001086e9578();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    func_0x0001086e745c(param_4);
  }
  func_0x0001086e94e4(0x50);
  return;
}



/* Entry: 1086e7420; end: 1086e747f;  */

void FUN_1086e7420(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    func_0x0001086e745c(param_4);
  }
  func_0x0001086e94e4(0x50);
  return;
}



/* Entry: 1086e7480; end: 1086e74ab;  */

void FUN_1086e7480(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_70 [24];
  undefined1 uStack_58;
  long lStack_48;
  
  if (param_2 < 0x333333333333334) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x50);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001086e93f0();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0x50) {
    FUN_1086e7350(param_4,unaff_x22);
    param_4 = lStack_48 + 0x50;
    lStack_48 = param_4;
  }
  uStack_58 = 1;
  FUN_1086e7520();
  FUN_1086e7550(auStack_70);
  return;
}



/* Entry: 1086e74ac; end: 1086e751f;  */

void FUN_1086e74ac(void)

{
  long in_x3;
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  long lStack_38;
  
  func_0x0001086e93f0();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0x50) {
    FUN_1086e7350(in_x3,unaff_x22);
    in_x3 = lStack_38 + 0x50;
    lStack_38 = in_x3;
  }
  uStack_48 = 1;
  FUN_1086e7520();
  FUN_1086e7550(auStack_60);
  return;
}



/* Entry: 1086e7520; end: 1086e754f;  */

void FUN_1086e7520(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x50) {
    func_0x0001086cf1c0();
  }
  return;
}



/* Entry: 1086e7550; end: 1086e757f;  */

long FUN_1086e7550(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_1086e7580(param_1);
  }
  return param_1;
}



/* Entry: 1086e7580; end: 1086e759f;  */

void FUN_1086e7580(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x50;
    func_0x0001086cf1c0();
  }
  return;
}



/* Entry: 1086e75a0; end: 1086e75fb;  */

void FUN_1086e75a0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x50;
    func_0x0001086cf1c0();
  }
  return;
}



/* Entry: 1086e75fc; end: 1086e7603;  */

void FUN_1086e75fc(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001086e938c(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x50;
    func_0x0001086cf1c0();
  }
  return;
}



/* Entry: 1086e7604; end: 1086e76d3;  */

void FUN_1086e7604(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001086e938c();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x50;
    func_0x0001086cf1c0();
  }
  return;
}



/* Entry: 1086e76d4; end: 1086e770b;  */

undefined1 * FUN_1086e76d4(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x30] = 0;
  FUN_1086e770c();
  return param_1;
}



/* Entry: 1086e770c; end: 1086e771f;  */

void FUN_1086e770c(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_1086e773c();
    *(undefined1 *)(param_1 + 0x30) = 1;
    return;
  }
  return;
}



/* Entry: 1086e7720; end: 1086e773b;  */

void FUN_1086e7720(long param_1)

{
  FUN_1086e773c();
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 1086e773c; end: 1086e7763;  */

undefined8 * FUN_1086e773c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  func_0x000107c279a0(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 1086e7764; end: 1086e777b;  */

void FUN_1086e7764(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010086a68c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  func_0x0001086e938c();
  func_0x0001086e94cc();
  func_0x0001086e77b4();
  FUN_1086e77dc(unaff_x20 + 0x28,unaff_x19 + 0x28);
  *(undefined1 *)(unaff_x20 + 0x48) = *(undefined1 *)(unaff_x19 + 0x48);
  return;
}



/* Entry: 1086e777c; end: 1086e77db;  */

void FUN_1086e777c(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001086e938c();
  func_0x0001086e94cc();
  func_0x0001086e77b4();
  FUN_1086e77dc(unaff_x20 + 0x28,unaff_x19 + 0x28);
  *(undefined1 *)(unaff_x20 + 0x48) = *(undefined1 *)(unaff_x19 + 0x48);
  return;
}



/* Entry: 1086e77dc; end: 1086e77ff;  */

undefined8 FUN_1086e77dc(undefined8 param_1)

{
  FUN_1086e7800();
  return param_1;
}



/* Entry: 1086e7800; end: 1086e789f;  */

long FUN_1086e7800(long param_1,long param_2)

{
  long lVar1;
  
  func_0x0001086e7860(param_1,0);
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    func_0x0001086e946c(*(undefined8 *)(**(long **)(param_2 + 0x18) + 0x18));
  }
  else {
    *(long *)(param_1 + 0x18) = lVar1;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 1086e78a0; end: 1086e78bf;  */

void FUN_1086e78a0(long param_1)

{
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    FUN_1086e78c0();
  }
  return;
}



/* Entry: 1086e78c0; end: 1086e7917;  */

void FUN_1086e78c0(void)

{
  long unaff_x19;
  
  func_0x0001086e9590();
  func_0x0001086e7638(unaff_x19 + 0x58);
  if (*(char *)(unaff_x19 + 0x50) == '\x01') {
    func_0x0001086cf1c0();
  }
  return;
}


