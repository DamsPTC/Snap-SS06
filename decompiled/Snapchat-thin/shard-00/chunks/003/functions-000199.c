/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10047e890; end: 10047e95b;  */

undefined8 * FUN_10047e890(undefined8 *param_1,undefined4 param_2,ulong *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined4 *)param_1 = param_2;
  uVar6 = param_3[1];
  uVar5 = *param_3;
  uVar7 = param_3[2];
  param_1[4] = param_3[3];
  param_1[3] = uVar7;
  param_1[2] = uVar6;
  param_1[1] = uVar5;
  puVar1 = param_1;
  func_0x000100460dc4();
  uVar2 = *puVar1;
  FUN_1004671a4();
  puVar1 = &uStack_58;
  uVar4 = 1;
  uStack_58 = uVar2;
  FUN_10047e568();
  param_1[5] = puVar1;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[6] = uVar4;
  uStack_48 = param_3[1];
  uStack_50 = *param_3;
  uStack_38 = param_3[3];
  uStack_40 = param_3[2];
  puVar3 = &uStack_50;
  FUN_10047e95c();
  param_1[9] = puVar3 + 10;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  func_0x000107c60e78();
  if (param_1[8] != 0) {
    func_0x000107c2c2ec();
  }
  func_0x000107c60bd8();
  if (*puVar3 < 2) {
    return (undefined8 *)0x0;
  }
  return (undefined8 *)puVar3[1];
}



/* Entry: 10047e95c; end: 10047e977;  */

ulong FUN_10047e95c(ulong *param_1)

{
  if (*param_1 < 2) {
    return 0;
  }
  return param_1[1];
}



/* Entry: 10047e978; end: 10047ea0f;  */

void FUN_10047e978(long param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)(param_1 + 0x58);
  *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 1;
  plVar3 = (long *)(param_1 + 0x60);
  if (*plVar2 != 0) {
    plVar2 = plVar3;
    plVar3 = (long *)(*plVar3 + 0x38);
  }
  *plVar3 = param_2;
  *plVar2 = param_2;
  uVar1 = *(long *)(param_1 + 0x48) + *(long *)(param_2 + 0x48);
  *(ulong *)(param_1 + 0x48) = uVar1;
  if (*(ulong *)(param_1 + 0x50) < uVar1) {
    do {
      *(ulong *)(param_1 + 0x48) = uVar1 - *(long *)(*(long *)(param_1 + 0x58) + 0x48);
      *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(*(long *)(param_1 + 0x58) + 0x38);
      func_0x000104aab238();
      func_0x000107c60e14();
      uVar1 = *(ulong *)(param_1 + 0x48);
    } while (*(ulong *)(param_1 + 0x50) < uVar1);
  }
  return;
}



/* Entry: 10047ea10; end: 10047ef3f;  */

/* WARNING: Removing unreachable block (ram,0x00010047ec98) */
/* WARNING: Removing unreachable block (ram,0x00010047eb4c) */

void FUN_10047ea10(long *param_1,long *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 auStack_1a0 [32];
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_160;
  long lStack_158;
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [32];
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_100;
  long lStack_f8;
  undefined1 auStack_f0 [32];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b0;
  long *plStack_a8;
  undefined1 auStack_a0 [32];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar13 = *param_2;
  if (lVar13 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  uVar4 = *param_3;
  uVar5 = param_3[1];
  puVar1 = (undefined8 *)(lVar13 + 0x10);
  bVar6 = *(byte *)(lVar13 + 0x27);
  uVar14 = (ulong)bVar6;
  puVar10 = puVar1;
  uVar15 = uVar14;
  if ((char)bVar6 < '\0') {
    puVar10 = *(undefined8 **)(lVar13 + 0x10);
    uVar15 = *(ulong *)(lVar13 + 0x18);
  }
  uVar3 = uVar15;
  if (uVar5 <= uVar15) {
    uVar3 = uVar5;
  }
  uVar9 = uVar4;
  func_0x000107c610b0(uVar4,puVar10,uVar3);
  if ((int)uVar9 == 0) {
    if (uVar5 < uVar15) goto LAB_10047ea88;
  }
  else if ((int)uVar9 < 0) {
LAB_10047ea88:
    if ((char)bVar6 < '\0') {
      FUN_100033dac(&uStack_80,*(undefined8 *)(lVar13 + 0x10),*(undefined8 *)(lVar13 + 0x18));
      lVar13 = *param_2;
    }
    else {
      uStack_78 = *(undefined8 *)(lVar13 + 0x18);
      uStack_80 = *puVar1;
      uStack_70 = *(undefined8 *)(lVar13 + 0x20);
    }
    FUN_100478b40(auStack_a0,lVar13 + 0x28);
    FUN_10047ea10(&lStack_b0,*param_2 + 0x48,param_3);
    FUN_100478b90(param_1,&uStack_80,auStack_a0,&lStack_b0,*param_2 + 0x58);
    if (plStack_a8 != (long *)0x0) {
      plVar2 = plStack_a8 + 1;
      do {
        lVar13 = *plVar2;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar8) {
          *plVar2 = lVar13 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
        func_0x000107c60d68(plStack_a8);
      }
    }
    FUN_100478948(auStack_a0);
    return;
  }
  puVar10 = puVar1;
  if ((char)bVar6 < '\0') {
    uVar14 = *(ulong *)(lVar13 + 0x18);
    puVar10 = *(undefined8 **)(lVar13 + 0x10);
  }
  uVar15 = uVar5;
  if (uVar14 <= uVar5) {
    uVar15 = uVar14;
  }
  func_0x000107c610b0(puVar10,uVar4,uVar15);
  if ((int)puVar10 == 0) {
    if (uVar5 <= uVar14) goto LAB_10047eb90;
  }
  else if (-1 < (int)puVar10) {
LAB_10047eb90:
    lVar11 = *(long *)(lVar13 + 0x48);
    lVar12 = *(long *)(lVar13 + 0x58);
    if (lVar11 == 0) {
      *param_1 = lVar12;
      lVar13 = *(long *)(lVar13 + 0x60);
      param_1[1] = lVar13;
      if (lVar13 == 0) {
        return;
      }
      plVar2 = (long *)(lVar13 + 8);
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar8) {
          *plVar2 = *plVar2 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      return;
    }
    if (lVar12 != 0) {
      if (*(long *)(lVar11 + 0x68) < *(long *)(lVar12 + 0x68)) {
        lStack_f8 = *(long *)(lVar13 + 0x60);
        if (lStack_f8 != 0) {
          plVar2 = (long *)(lStack_f8 + 8);
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar8) {
              *plVar2 = *plVar2 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        lStack_100 = lVar12;
        func_0x000104aaa690(&lStack_b0,&lStack_100);
        FUN_100478eac(&lStack_100);
        if (*(char *)(lStack_b0 + 0x27) < '\0') {
          FUN_100033dac(&uStack_120,*(undefined8 *)(lStack_b0 + 0x10),
                        *(undefined8 *)(lStack_b0 + 0x18));
        }
        else {
          uStack_118 = *(undefined8 *)(lStack_b0 + 0x18);
          uStack_120 = *(undefined8 *)(lStack_b0 + 0x10);
          lStack_110 = *(long *)(lStack_b0 + 0x20);
        }
        FUN_100478b40(auStack_140,lStack_b0 + 0x28);
        lVar13 = *param_2;
        func_0x000104aaa6dc(auStack_150,lVar13 + 0x58,lStack_b0 + 0x10);
        FUN_100478b90(param_1,&uStack_120,auStack_140,lVar13 + 0x48,auStack_150);
        FUN_100478eac(auStack_150);
        FUN_100478948(auStack_140);
        uVar4 = uStack_120;
        lVar13 = lStack_110;
      }
      else {
        lStack_158 = *(long *)(lVar13 + 0x50);
        if (lStack_158 != 0) {
          plVar2 = (long *)(lStack_158 + 8);
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar8) {
              *plVar2 = *plVar2 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        lStack_160 = lVar11;
        func_0x000104aaac54(&lStack_b0,&lStack_160);
        FUN_100478eac(&lStack_160);
        if (*(char *)(lStack_b0 + 0x27) < '\0') {
          FUN_100033dac(&uStack_180,*(undefined8 *)(lStack_b0 + 0x10),
                        *(undefined8 *)(lStack_b0 + 0x18));
        }
        else {
          uStack_178 = *(undefined8 *)(lStack_b0 + 0x18);
          uStack_180 = *(undefined8 *)(lStack_b0 + 0x10);
          lStack_170 = *(long *)(lStack_b0 + 0x20);
        }
        FUN_100478b40(auStack_1a0,lStack_b0 + 0x28);
        func_0x000104aaa6dc(auStack_150,*param_2 + 0x48,lStack_b0 + 0x10);
        FUN_100478b90(param_1,&uStack_180,auStack_1a0,auStack_150,*param_2 + 0x58);
        FUN_100478eac(auStack_150);
        FUN_100478948(auStack_1a0);
        uVar4 = uStack_180;
        lVar13 = lStack_170;
      }
      if (lVar13 < 0) {
        func_0x000107c60e14(uVar4);
      }
      FUN_100478eac(&lStack_b0);
      return;
    }
    *param_1 = lVar11;
    lVar13 = *(long *)(lVar13 + 0x50);
    param_1[1] = lVar13;
    if (lVar13 == 0) {
      return;
    }
    plVar2 = (long *)(lVar13 + 8);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar8) {
        *plVar2 = *plVar2 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    return;
  }
  if ((char)bVar6 < '\0') {
    FUN_100033dac(&uStack_d0,*(undefined8 *)(lVar13 + 0x10),*(undefined8 *)(lVar13 + 0x18));
    lVar13 = *param_2;
  }
  else {
    uStack_c8 = *(undefined8 *)(lVar13 + 0x18);
    uStack_d0 = *puVar1;
    uStack_c0 = *(undefined8 *)(lVar13 + 0x20);
  }
  FUN_100478b40(auStack_f0,lVar13 + 0x28);
  lVar13 = *param_2;
  FUN_10047ea10(&lStack_b0,lVar13 + 0x58,param_3);
  FUN_100478b90(param_1,&uStack_d0,auStack_f0,lVar13 + 0x48,&lStack_b0);
  if (plStack_a8 != (long *)0x0) {
    plVar2 = plStack_a8 + 1;
    do {
      lVar13 = *plVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar8) {
        *plVar2 = lVar13 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      func_0x000107c60d68(plStack_a8);
    }
  }
  FUN_100478948(auStack_f0);
  return;
}



/* Entry: 10047ef40; end: 10047ef7b;  */

void FUN_10047ef40(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_40 = param_3;
  uStack_38 = param_4;
  FUN_10047ea10(&uStack_30,param_2,&uStack_40);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  return;
}



/* Entry: 10047ef7c; end: 10047efcf;  */

void FUN_10047ef7c(void)

{
  return;
}



/* Entry: 10047efd0; end: 10047f3c3;  */

void FUN_10047efd0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 ****ppppuVar9;
  int *piVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  uint uStack_d0;
  undefined8 uStack_c0;
  long *plStack_b8;
  undefined8 ***pppuStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  uint uStack_90;
  undefined4 uStack_8c;
  uint uStack_88;
  undefined4 uStack_84;
  uint uStack_80;
  char cStack_79;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  
  uStack_60 = param_2[7];
  plStack_58 = (long *)param_2[8];
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  (**(code **)*param_2)(&uStack_70,param_2);
  if (uStack_70 == 0) {
    FUN_100486908(&uStack_90);
    puVar12 = &uStack_60;
    FUN_10047d9fc(puVar12,"grpc.default_compression_level",0x1e);
    if (((ulong)puVar12 & 0xff00000000) != 0) {
      uStack_88 = (uint)puVar12;
      if (2 < (int)uStack_88) {
        uStack_88 = 3;
      }
      uStack_88 = uStack_88 & ((int)uStack_88 >> 0x1f ^ 0xffffffffU);
      uStack_8c = 1;
    }
    puVar12 = &uStack_60;
    FUN_10047d9fc(puVar12,"grpc.default_compression_algorithm",0x22);
    if (((ulong)puVar12 & 0xff00000000) != 0) {
      uStack_80 = (uint)puVar12;
      if (1 < (int)uStack_80) {
        uStack_80 = 2;
      }
      uStack_80 = uStack_80 & ((int)uStack_80 >> 0x1f ^ 0xffffffffU);
      uStack_84 = 1;
    }
    puVar12 = &uStack_60;
    FUN_10047d9fc(puVar12,"grpc.compression_enabled_algorithms_bitset",0x2a);
    if (((ulong)puVar12 & 0xff00000000) != 0) {
      uStack_90 = (uint)puVar12 | 1;
    }
    uVar7 = 200;
    func_0x000107c60e20();
    uVar8 = (ulong)*(uint *)(param_2 + 2);
    FUN_10047d420(uVar8);
    if ((char)*(byte *)((long)param_2 + 0x2f) < '\0') {
      uVar13 = param_2[4];
      if (0x7ffffffffffffff7 < uVar13) {
        func_0x000104a6fa5c(&pppuStack_a8);
        goto LAB_10047f318;
      }
      puVar12 = (undefined8 *)param_2[3];
    }
    else {
      puVar12 = param_2 + 3;
      uVar13 = (ulong)*(byte *)((long)param_2 + 0x2f);
    }
    if (uVar13 < 0x17) {
      uStack_98 = CONCAT17((char)uVar13,(undefined7)uStack_98);
      ppppuVar9 = &pppuStack_a8;
      if (uVar13 != 0) goto LAB_10047f1e0;
    }
    else {
      uVar3 = (uVar13 & 0x7ffffffffffffff8) + 8;
      if ((uVar13 | 7) != 0x17) {
        uVar3 = uVar13 | 7;
      }
      ppppuVar9 = (undefined8 ****)(uVar3 + 1);
      func_0x000107c60e20();
      uStack_98 = uVar3 + 1 | 0x8000000000000000;
      pppuStack_a8 = ppppuVar9;
      uStack_a0 = uVar13;
LAB_10047f1e0:
      func_0x000107c610b8(ppppuVar9,puVar12,uVar13);
    }
    *(undefined1 *)((long)ppppuVar9 + uVar13) = 0;
    plStack_b8 = plStack_58;
    uStack_c0 = uStack_60;
    uStack_60 = 0;
    plStack_58 = (long *)0x0;
    uStack_d8 = CONCAT44(uStack_84,uStack_88);
    uStack_e0 = CONCAT44(uStack_8c,uStack_90);
    uStack_d0 = uStack_80;
    if (uStack_70 != 0) {
      func_0x000107c2b9e8(&uStack_70);
LAB_10047f318:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10047f31c);
      (*pcVar6)();
    }
    uStack_e8 = uStack_68;
    uStack_68 = 0;
    FUN_100486c78(uVar7,uVar8,&pppuStack_a8,&uStack_c0,&uStack_e0,&uStack_e8);
    *param_1 = 0;
    param_1[1] = uVar7;
    FUN_1004868c0(&uStack_e8);
    plVar1 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar2 = plStack_b8 + 1;
      do {
        lVar11 = *plVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        func_0x000107c60d68(plVar1);
      }
    }
    if ((long)uStack_98 < 0) {
      func_0x000107c60e14(pppuStack_a8);
    }
    goto LAB_10047f294;
  }
  uStack_78 = uStack_70;
  if ((uStack_70 & 1) == 0) {
LAB_10047f054:
    func_0x000107c2b9c0(&uStack_90,&uStack_78,1);
  }
  else {
    piVar10 = (int *)(uStack_70 - 1);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar5) {
        *piVar10 = *piVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (uStack_70 != 0) goto LAB_10047f054;
    FUN_10002b024(&uStack_90,"OK");
  }
  FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/channel.cc"
                ,0x75,2,"channel stack builder failed: %s");
  if (cStack_79 < '\0') {
    func_0x000107c60e14(CONCAT44(uStack_8c,uStack_90));
  }
  func_0x000104a96544(param_1,&uStack_78);
  if ((uStack_78 & 1) != 0) {
    FUN_10084dad0();
  }
LAB_10047f294:
  FUN_100487e0c(&uStack_70);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
    do {
      lVar11 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      func_0x000107c60d68(plVar1);
    }
  }
  return;
}



/* Entry: 10047f3c4; end: 10047f3fb;  */

void FUN_10047f3c4(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 10047f3fc; end: 10047f6cf;  */

void FUN_10047f3fc(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong *puVar5;
  long *plVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  ulong uStack_80;
  ulong uStack_78;
  long lStack_70;
  undefined **ppuStack_68;
  undefined4 uStack_58;
  ulong uStack_50;
  long *plStack_48;
  ulong uStack_40;
  long *plStack_38;
  
  plVar4 = *(long **)(param_2 + 0x48);
  func_0x00010047f3cc(plVar4,*(long *)(param_2 + 0x50) - (long)plVar4 >> 3);
  FUN_100460860();
  uStack_40 = *(ulong *)(param_2 + 0x38);
  plStack_38 = *(long **)(param_2 + 0x40);
  if (plStack_38 != (long *)0x0) {
    plVar6 = plStack_38 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (*(long *)(param_2 + 0x30) != 0) {
    ppuStack_68 = &PTR_FUN_1107c4a50;
    uStack_58 = 2;
    lStack_70 = *(long *)(param_2 + 0x30);
    FUN_100477f30(&uStack_50,&uStack_40,"grpc.internal.transport",0x17,&lStack_70);
    plVar6 = plStack_38;
    plStack_38 = plStack_48;
    uStack_40 = uStack_50;
    uStack_50 = 0;
    plStack_48 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        lVar8 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        func_0x000107c60d68(plVar6);
      }
    }
    plVar6 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
      do {
        lVar8 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        func_0x000107c60d68(plVar6);
      }
    }
    FUN_100478948(&lStack_70);
  }
  puVar5 = &uStack_40;
  FUN_10047f830(puVar5);
  FUN_10047fbe4(&uStack_50,1,&UNK_104aab1bc,plVar4,*(long *)(param_2 + 0x48),
                *(long *)(param_2 + 0x50) - *(long *)(param_2 + 0x48) >> 3,puVar5,
                *(undefined8 *)(param_2 + 8),plVar4);
  FUN_10048650c(puVar5);
  if (uStack_50 == 0) {
    if (*(long *)(param_2 + 0x50) != *(long *)(param_2 + 0x48)) {
      uVar9 = 0;
      do {
        plVar6 = plVar4;
        func_0x0001004868b0(plVar4,uVar9);
        (**(code **)(*plVar6 + 0x48))(plVar4);
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulong)(*(long *)(param_2 + 0x50) - *(long *)(param_2 + 0x48) >> 3));
    }
    uStack_78 = 0;
    *param_1 = 0;
    param_1[1] = plVar4;
    FUN_1004868c0(&uStack_78);
  }
  else {
    func_0x000104aab078(plVar4);
    FUN_100460314(plVar4);
    uStack_80 = uStack_50;
    if ((uStack_50 & 1) != 0) {
      piVar7 = (int *)(uStack_50 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = *piVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x000104addac4(&uStack_78,&uStack_80);
    if ((uStack_80 & 1) != 0) {
      FUN_10084dad0();
    }
    func_0x000104aab1e0(param_1,&uStack_78);
    if ((uStack_78 & 1) != 0) {
      FUN_10084dad0();
    }
  }
  if ((uStack_50 & 1) != 0) {
    FUN_10084dad0();
  }
  plVar4 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar6 = plStack_38 + 1;
    do {
      lVar8 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      func_0x000107c60d68(plVar4);
    }
  }
  return;
}



/* Entry: 10047f6d0; end: 10047f82f;  */

undefined8 FUN_10047f6d0(long param_1,undefined8 *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long *plStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  uVar3 = 0;
  if (param_1 != 0) {
    FUN_10047f6d0(*(undefined8 *)(param_1 + 0x48));
    lStack_50 = *(long *)(param_1 + 0x10);
    if (-1 < *(char *)(param_1 + 0x27)) {
      lStack_50 = param_1 + 0x10;
    }
    plVar10 = (long *)*param_2;
    lStack_48 = lStack_50;
    lStack_40 = lStack_50;
    if (*(uint *)(param_1 + 0x40) == 0xffffffff) {
      func_0x000104a71e10();
LAB_10047f828:
      func_0x000104aaa134();
      pcStack_78 = FUN_10047f830;
      lStack_a8 = 0;
      lStack_a0 = 0;
      uStack_98 = 0;
      plStack_b0 = &lStack_a8;
      lStack_90 = param_1;
      puStack_88 = param_2;
      puStack_80 = &stack0xfffffffffffffff0;
      FUN_10047f6d0(*plVar10,&plStack_b0);
      uVar3 = 0;
      FUN_10047f924(0,0,0,lStack_a8,lStack_a0 - lStack_a8 >> 5);
      if (lStack_a8 != 0) {
        lStack_a0 = lStack_a8;
        func_0x000107c60e14();
      }
      return uVar3;
    }
    plStack_38 = &lStack_50;
    (*(code *)(&PTR_DAT_1107c4940)[*(uint *)(param_1 + 0x40)])
              (&uStack_70,&plStack_38,param_1 + 0x28);
    puVar2 = (ulong *)(plVar10 + 2);
    puVar5 = (ulong *)plVar10[1];
    if (puVar5 < (ulong *)*puVar2) {
      puVar5[1] = uStack_68;
      *puVar5 = uStack_70;
      puVar5[3] = uStack_58;
      puVar5[2] = uStack_60;
      puVar5 = puVar5 + 4;
    }
    else {
      lVar11 = (long)puVar5 - *plVar10 >> 5;
      uVar12 = lVar11 + 1;
      if (uVar12 >> 0x3b != 0) goto LAB_10047f828;
      uVar4 = (long)*puVar2 - *plVar10;
      uVar8 = (long)uVar4 >> 4;
      if (uVar8 <= uVar12) {
        uVar8 = uVar12;
      }
      if (0x7fffffffffffffdf < uVar4) {
        uVar8 = 0x7ffffffffffffff;
      }
      if (uVar8 == 0) {
        puVar2 = (ulong *)0x0;
      }
      else {
        FUN_100469204();
      }
      puVar7 = puVar2 + lVar11 * 4;
      puVar7[1] = uStack_68;
      *puVar7 = uStack_70;
      puVar7[3] = uStack_58;
      puVar7[2] = uStack_60;
      puVar5 = puVar7 + 4;
      lVar11 = *plVar10;
      lVar9 = plVar10[1];
      puVar6 = puVar7;
      if (lVar9 != lVar11) {
        do {
          puVar1 = (ulong *)(lVar9 + -0x18);
          uVar12 = *(ulong *)(lVar9 + -0x20);
          uVar13 = *(ulong *)(lVar9 + -8);
          uVar4 = *(ulong *)(lVar9 + -0x10);
          lVar9 = lVar9 + -0x20;
          puVar7 = puVar6 + -4;
          puVar6[-3] = *puVar1;
          *puVar7 = uVar12;
          puVar6[-1] = uVar13;
          puVar6[-2] = uVar4;
          puVar6 = puVar7;
        } while (lVar9 != lVar11);
        lVar9 = *plVar10;
      }
      *plVar10 = (long)puVar7;
      plVar10[1] = (long)puVar5;
      plVar10[2] = (long)(puVar2 + uVar8 * 4);
      if (lVar9 != 0) {
        func_0x000107c60e14();
      }
    }
    plVar10[1] = (long)puVar5;
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    FUN_10047f6d0(uVar3,param_2);
  }
  return uVar3;
}



/* Entry: 10047f830; end: 10047f8bf;  */

undefined8 FUN_10047f830(undefined8 *param_1)

{
  undefined8 uVar1;
  long *plStack_40;
  long lStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  lStack_38 = 0;
  lStack_30 = 0;
  uStack_28 = 0;
  plStack_40 = &lStack_38;
  FUN_10047f6d0(*param_1,&plStack_40);
  uVar1 = 0;
  FUN_10047f924(0,0,0,lStack_38,lStack_30 - lStack_38 >> 5);
  if (lStack_38 != 0) {
    lStack_30 = lStack_38;
    func_0x000107c60e14();
  }
  return uVar1;
}



/* Entry: 10047f8c0; end: 10047f923;  */

void FUN_10047f8c0(undefined4 *param_1,long *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*param_2 + 0x10);
  *param_1 = 2;
  *(undefined8 *)(param_1 + 2) = uVar1;
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 6) = param_3[1];
  *(undefined8 *)(param_1 + 4) = uVar1;
  return;
}



/* Entry: 10047f924; end: 10047fb37;  */

long * FUN_10047f924(ulong *param_1,undefined8 *param_2,ulong param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((param_1 == (ulong *)0x0) || (uVar8 = *param_1, uVar8 == 0)) {
    lVar10 = 0;
  }
  else {
    uVar11 = 0;
    lVar10 = 0;
    do {
      if (param_3 == 0) {
        uVar5 = 1;
      }
      else {
        uVar9 = *(undefined8 *)(param_1[1] + uVar11 * 0x20 + 8);
        uVar2 = uVar9;
        func_0x000107c613c0(uVar9,*param_2);
        if ((int)uVar2 == 0) {
          uVar4 = 1;
        }
        else {
          uVar5 = 1;
          do {
            uVar6 = uVar5;
            if (param_3 == uVar6) break;
            uVar2 = uVar9;
            func_0x000107c613c0(uVar9,param_2[uVar6]);
            uVar5 = uVar6 + 1;
          } while ((int)uVar2 != 0);
          uVar4 = (uint)(uVar6 < param_3);
        }
        uVar5 = (ulong)(uVar4 ^ 1);
      }
      lVar10 = lVar10 + uVar5;
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar8);
  }
  plVar3 = (long *)0x10;
  FUN_100460200();
  lVar10 = lVar10 + param_5;
  *plVar3 = lVar10;
  if (lVar10 != 0) {
    lVar10 = lVar10 * 0x20;
    FUN_100460200();
    plVar3[1] = lVar10;
    if ((param_1 == (ulong *)0x0) || (uVar8 = *param_1, uVar8 == 0)) {
      lVar10 = 0;
    }
    else {
      uVar11 = 0;
      lVar10 = 0;
      do {
        lVar7 = param_1[1] + uVar11 * 0x20;
        if (param_3 == 0) {
LAB_10047fa80:
          FUN_10047fb38(&uStack_80,lVar7);
          puVar1 = (undefined8 *)(plVar3[1] + lVar10 * 0x20);
          lVar10 = lVar10 + 1;
          puVar1[1] = uStack_78;
          *puVar1 = uStack_80;
          puVar1[3] = uStack_68;
          puVar1[2] = uStack_70;
          uVar8 = *param_1;
        }
        else {
          uVar9 = *(undefined8 *)(lVar7 + 8);
          uVar2 = uVar9;
          func_0x000107c613c0(uVar9,*param_2);
          if ((int)uVar2 != 0) {
            uVar5 = 1;
            do {
              uVar6 = uVar5;
              if (param_3 == uVar6) break;
              uVar2 = uVar9;
              func_0x000107c613c0(uVar9,param_2[uVar6]);
              uVar5 = uVar6 + 1;
            } while ((int)uVar2 != 0);
            if (param_3 <= uVar6) goto LAB_10047fa80;
          }
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar8);
    }
    if (param_5 != 0) {
      lVar7 = lVar10 << 5;
      lVar10 = lVar10 + param_5;
      do {
        FUN_10047fb38(&uStack_80,param_4);
        puVar1 = (undefined8 *)(plVar3[1] + lVar7);
        puVar1[1] = uStack_78;
        *puVar1 = uStack_80;
        puVar1[3] = uStack_68;
        puVar1[2] = uStack_70;
        param_4 = param_4 + 0x20;
        lVar7 = lVar7 + 0x20;
        param_5 = param_5 + -1;
      } while (param_5 != 0);
    }
    if (lVar10 == *plVar3) {
      return plVar3;
    }
    func_0x000107c2c2e8();
  }
  plVar3[1] = 0;
  return plVar3;
}



/* Entry: 10047fb38; end: 10047fbb7;  */

void FUN_10047fb38(int *param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *param_2;
  *param_1 = iVar1;
  uVar2 = *(undefined8 *)(param_2 + 2);
  FUN_1004601ac();
  *(undefined8 *)(param_1 + 2) = uVar2;
  if (iVar1 == 2) {
    uVar2 = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = uVar2;
    uVar2 = *(undefined8 *)(param_2 + 4);
    (*(code *)**(undefined8 **)(param_2 + 6))();
  }
  else {
    if (iVar1 == 1) {
      param_1[4] = param_2[4];
      return;
    }
    if (iVar1 != 0) {
      return;
    }
    uVar2 = *(undefined8 *)(param_2 + 4);
    FUN_1004601ac();
  }
  *(undefined8 *)(param_1 + 4) = uVar2;
  return;
}



/* Entry: 10047fbb8; end: 10047fbe3;  */

void FUN_10047fbb8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  
  plVar1 = (long *)(param_1 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}



/* Entry: 10047fbe4; end: 10047fdf3;  */

void FUN_10047fbe4(ulong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5,long param_6,undefined8 param_7,undefined8 param_8,ulong param_9)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  uint uStack_68;
  uint uStack_64;
  
  *(undefined8 *)(param_9 + 0x40) = &PTR_DAT_1107c49e0;
  *(undefined8 **)(param_9 + 0x58) = (undefined8 *)(param_9 + 0x40);
  lVar12 = ((ulong)((int)param_6 * 0x18 + 0xf) & 0xfffffff0) + 0x30;
  *(long *)(param_9 + 0x30) = param_6;
  func_0x00010047fbd0(param_9,param_2,param_3,param_4);
  uVar10 = (ulong)(uint)((int)param_6 << 4);
  uVar13 = param_9 + 0x60 + uVar10;
  *param_1 = 0;
  if (param_6 == 0) {
    lVar14 = uVar13 - param_9;
    if (uVar13 < param_9 || lVar14 == 0) goto LAB_10047fd98;
    lVar8 = 0x60;
    lVar12 = 0x30;
  }
  else {
    uVar11 = 0;
    lVar14 = 0;
    do {
      uStack_68 = (uint)(lVar14 == 0);
      uStack_64 = (uint)(lVar14 == param_6 + -1);
      lVar8 = param_5[lVar14];
      plVar1 = (long *)(param_9 + 0x60 + lVar14 * 0x10);
      *plVar1 = lVar8;
      plVar1[1] = uVar13;
      uStack_78 = param_9;
      uStack_70 = param_7;
      (**(code **)(lVar8 + 0x40))(&uStack_80,plVar1,&uStack_78);
      if ((uStack_80 != 0) && (uVar11 == 0)) {
        if ((uStack_80 & 1) != 0) {
          piVar9 = (int *)(uStack_80 - 1);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar9,0x10);
            if (bVar5) {
              *piVar9 = *piVar9 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        *param_1 = uStack_80;
        uVar11 = uStack_80;
      }
      iVar2 = *(int *)(param_5[lVar14] + 0x38);
      iVar3 = *(int *)(param_5[lVar14] + 0x18);
      if ((uStack_80 & 1) != 0) {
        FUN_10084dad0();
      }
      uVar13 = uVar13 + ((ulong)(iVar2 + 0xf) & 0xfffffff0);
      lVar12 = ((ulong)(iVar3 + 0xf) & 0xfffffff0) + lVar12;
      lVar14 = lVar14 + 1;
    } while (lVar14 != param_6);
    lVar14 = uVar13 - param_9;
    if (uVar13 < param_9 || lVar14 == 0) {
LAB_10047fd98:
      uVar7 = 0x9e;
      goto LAB_10047fdb4;
    }
    lVar8 = uVar10 + 0x60;
    do {
      lVar8 = ((ulong)(*(int *)(*param_5 + 0x38) + 0xf) & 0xfffffff0) + lVar8;
      param_6 = param_6 + -1;
      param_5 = param_5 + 1;
    } while (param_6 != 0);
  }
  if (lVar14 == lVar8) {
    *(long *)(param_9 + 0x38) = lVar12;
    return;
  }
  uVar7 = 0xa0;
LAB_10047fdb4:
  FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/channel_stack.cc"
                ,uVar7,2,"assertion failed: %s");
  func_0x000107c60ebc();
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10047fdd8);
  (*pcVar6)();
}



/* Entry: 10047fdf4; end: 10047fe4b;  */

long FUN_10047fdf4(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  if ((param_1 != (long *)0x0) && (lVar3 = *param_1, lVar3 != 0)) {
    lVar2 = param_1[1];
    do {
      uVar1 = *(undefined8 *)(lVar2 + 8);
      func_0x000107c613c0(uVar1,param_2);
      if ((int)uVar1 == 0) {
        return lVar2;
      }
      lVar2 = lVar2 + 0x20;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return 0;
}



/* Entry: 10047fe4c; end: 10047fe87;  */

uint FUN_10047fe4c(int *param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_1;
  FUN_10047fdf4(param_1,"grpc.enable_deadline_checking");
  FUN_1004808a4(param_1);
  uVar2 = (uint)param_1 ^ 1;
  if (piVar1 != (int *)0x0) {
    if (*piVar1 == 1) {
      if (piVar1[4] == 0) {
        uVar2 = 0;
      }
      else {
        if (piVar1[4] != 1) {
          FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/channel_args.cc"
                        ,0x1cb,2,"%s treated as bool but set to %d (assuming true)");
        }
        uVar2 = 1;
      }
    }
    else {
      FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/channel_args.cc"
                    ,0x1c2,2,"%s ignored: it must be an integer");
    }
  }
  return uVar2;
}



/* Entry: 10047fe88; end: 10048083f;  */

/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_10047fe88(undefined1 *param_1,undefined8 *param_2,ulong *param_3)

{
  long *******ppppppplVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  int *piVar6;
  long *******ppppppplVar7;
  undefined *puVar8;
  ulong uVar9;
  char *pcVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *******ppppppplVar14;
  int iVar15;
  undefined *puVar16;
  char *pcVar17;
  ulong uVar18;
  long ******pppppplVar19;
  undefined8 *puVar20;
  char *pcVar21;
  char *pcVar22;
  undefined8 *puVar23;
  long *****ppppplStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 uStack_139;
  long *******ppppppplStack_138;
  ulong uStack_130;
  byte bStack_121;
  ulong uStack_120;
  long lStack_118;
  long alStack_110 [7];
  long ******pppppplStack_d8;
  char *pcStack_d0;
  ulong uStack_c8;
  long *******ppppppplStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = (undefined1)param_2[1];
  FUN_10047fe4c();
  *param_1 = uVar4;
  *(undefined8 *)(param_1 + 8) = *param_2;
  uVar5 = param_2[1];
  FUN_100480964();
  puVar20 = (undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *puVar20 = 0;
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  puVar23 = (undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *puVar23 = 0;
  pcVar21 = param_1 + 0x28;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  piVar6 = (int *)param_2[1];
  FUN_10047fdf4(piVar6,"grpc.internal.channelz_channel_node");
  if ((piVar6 == (int *)0x0) || (*piVar6 != 2)) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(piVar6 + 4);
  }
  *(undefined8 *)(param_1 + 0x58) = uVar5;
  FUN_10048099c();
  *(int **)(param_1 + 0x60) = piVar6;
  FUN_1004809b4();
  *(int **)(param_1 + 0x68) = piVar6;
  FUN_100460318(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  param_1[0xc0] = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  FUN_100460318(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  FUN_100480a68(&ppppppplStack_a0);
  *(char **)(param_1 + 0x140) = "client_channel";
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined1 **)(param_1 + 0x158) = param_1 + 0x160;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  uVar5 = param_2[1];
  param_1[0x178] = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  FUN_100480b50(uVar5,"grpc.use_local_subchannel_pool",0);
  if ((int)uVar5 == 0) {
    FUN_100480b74(&ppppppplStack_a0);
    ppppppplVar7 = ppppppplStack_a0;
  }
  else {
    ppppppplVar7 = (long *******)0x28;
    func_0x000107c60e20();
    *ppppppplVar7 = (long ******)&PTR_DAT_1107c2770;
    ppppppplVar7[1] = (long ******)0x1;
    ppppppplVar7[4] = (long ******)0x0;
    ppppppplVar7[3] = (long ******)0x0;
    ppppppplVar7[2] = (long ******)(ppppppplVar7 + 3);
  }
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(long ********)(param_1 + 0x198) = ppppppplVar7;
  *(undefined1 **)(param_1 + 0x1a0) = param_1 + 0x1a8;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined1 **)(param_1 + 0x1b8) = param_1 + 0x1c0;
  *(undefined4 *)(param_1 + 0x1d0) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  FUN_100460318();
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  FUN_100460318();
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined1 **)(param_1 + 0x290) = param_1 + 0x298;
  FUN_100480d00(*(undefined8 *)(param_1 + 0x60));
  if (*(long *)(param_1 + 0x10) == 0) {
    alStack_110[5] = 0;
    alStack_110[6] = 0;
    alStack_110[4] = 0;
    iVar15 = 0xf22ff06;
    func_0x000104ab5920(&pcStack_d0,2,
                        "Missing client channel factory in args for client channel filter",0x40,
                        &ppppppplStack_138,alStack_110 + 4);
    pcVar10 = (char *)*param_3;
    if (pcStack_d0 == pcVar10) {
LAB_100480190:
      if (((ulong)pcVar10 & 1) != 0) {
        FUN_10084dad0();
      }
    }
    else {
      *param_3 = (ulong)pcStack_d0;
      pcStack_d0 = (char *)0x36;
      if (((ulong)pcVar10 & 1) != 0) {
        FUN_10084dad0();
        pcVar10 = pcStack_d0;
        goto LAB_100480190;
      }
    }
    ppppppplStack_a0 = (long *******)(alStack_110 + 4);
  }
  else {
    puVar8 = (undefined *)param_2[1];
    pcVar10 = "grpc.service_config";
    pcVar22 = "grpc.service_config";
    FUN_100481218(puVar8,"grpc.service_config");
    puVar16 = &DAT_10f2fb62f;
    if (puVar8 != (undefined *)0x0) {
      puVar16 = puVar8;
    }
    uVar9 = *param_3;
    if (uVar9 != 0) {
      *param_3 = 0;
      ppppppplStack_a0 = (long *******)0x36;
      if (((uVar9 & 1) != 0) && (FUN_10084dad0(), ((ulong)ppppppplStack_a0 & 1) != 0)) {
        FUN_10084dad0();
      }
    }
    uVar5 = param_2[1];
    puVar8 = puVar16;
    func_0x000107c613d0(puVar16);
    FUN_1004820e0(&ppppppplStack_a0,uVar5,puVar16,puVar8,param_3);
    ppppppplVar14 = ppppppplStack_a0;
    iVar15 = (int)puVar16;
    ppppppplVar7 = (long *******)*puVar23;
    if (ppppppplVar7 != (long *******)0x0) {
      ppppppplVar1 = ppppppplVar7 + 1;
      do {
        pppppplVar19 = *ppppppplVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppplVar1,0x10);
        if (bVar3) {
          *ppppppplVar1 = (long ******)((long)pppppplVar19 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((long ******)((long)pppppplVar19 + -1) == (long ******)0x0) {
        (*(code *)(*ppppppplVar7)[1])();
      }
    }
    *puVar23 = ppppppplVar14;
    if (*param_3 != 0) {
      if (ppppppplVar14 != (long *******)0x0) {
        ppppppplVar1 = ppppppplVar14 + 1;
        do {
          pppppplVar19 = *ppppppplVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppppppplVar1,0x10);
          if (bVar3) {
            *ppppppplVar1 = (long ******)((long)pppppplVar19 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((long ******)((long)pppppplVar19 + -1) == (long ******)0x0) {
          (*(code *)(*ppppppplVar14)[1])();
          ppppppplVar7 = ppppppplVar14;
        }
      }
      *puVar23 = 0;
      pcVar21 = pcVar10;
      goto LAB_1004801a8;
    }
    lVar11 = param_2[1];
    FUN_100481218(lVar11,"grpc.server_uri");
    if (lVar11 != 0) {
      func_0x000107c60c64(pcVar21,lVar11);
      lStack_118 = 0;
      alStack_110[0] = 0;
      FUN_10048575c(lVar11,param_2[1],alStack_110,&lStack_118);
      if (alStack_110[0] != 0) {
        func_0x000107c60c64(pcVar21);
        FUN_100460314(alStack_110[0]);
      }
      lVar12 = lRam0000000113815be8;
      if (lRam0000000113815be8 == 0) {
        FUN_100472138();
      }
      uVar9 = lVar12 + 0xf0;
      if ((char)param_1[0x3f] < '\0') {
        pcVar17 = *(char **)(param_1 + 0x28);
        uVar18 = *(ulong *)(param_1 + 0x30);
      }
      else {
        uVar18 = (ulong)(byte)param_1[0x3f];
        pcVar17 = pcVar21;
      }
      FUN_10048634c(uVar9,pcVar17,uVar18);
      if ((uVar9 & 1) != 0) {
        pcStack_d0 = "grpc.service_config";
        lVar12 = lStack_118;
        if (lStack_118 == 0) {
          lVar12 = param_2[1];
        }
        FUN_100486500(lVar12,&pcStack_d0,1);
        *(long *)(param_1 + 0x18) = lVar12;
        FUN_10048650c(lStack_118);
        uVar5 = *(undefined8 *)(param_1 + 0x18);
        FUN_1004865ac(uVar5,&UNK_10f50ea26,0x1ffffffff,0x7fffffff);
        *(int *)(param_1 + 0x1d0) = (int)uVar5;
        lVar12 = *(long *)(param_1 + 0x18);
        FUN_100481218(lVar12,"grpc.default_authority");
        if (lVar12 == 0) {
          lVar12 = lRam0000000113815be8;
          if (lRam0000000113815be8 == 0) {
            FUN_100472138();
          }
          lVar13 = lVar11;
          func_0x000107c613d0(lVar11);
          FUN_100486690(&ppppppplStack_a0,lVar12 + 0xf0,lVar11,lVar13);
          iVar15 = (int)lVar11;
          if ((char)param_1[0x57] < '\0') {
            func_0x000107c60e14(*puVar20);
          }
          *(undefined8 *)(param_1 + 0x48) = uStack_98;
          *puVar20 = ppppppplStack_a0;
          *(undefined8 *)(param_1 + 0x50) = uStack_90;
        }
        else {
          func_0x000107c60c64(puVar20);
          iVar15 = (int)lVar12;
        }
        ppppppplVar7 = (long *******)*param_3;
        pcVar21 = pcVar10;
        if (ppppppplVar7 != (long *******)0x0) {
          *param_3 = 0;
          ppppppplStack_a0 = (long *******)0x36;
          pcVar21 = pcVar22;
          if ((((ulong)ppppppplVar7 & 1) != 0) &&
             (FUN_10084dad0(), ppppppplVar7 = ppppppplStack_a0, ((ulong)ppppppplStack_a0 & 1) != 0))
          {
            FUN_10084dad0();
          }
        }
        goto LAB_1004801a8;
      }
      ppppppplStack_a0 = (long *******)0x10f22ffb1;
      uStack_98 = 0x1d;
      uStack_c8 = *(ulong *)(param_1 + 0x30);
      pcStack_d0 = *(char **)(param_1 + 0x28);
      if (-1 < (char)param_1[0x3f]) {
        uStack_c8 = (ulong)(byte)param_1[0x3f];
        pcStack_d0 = pcVar21;
      }
      FUN_10047c83c(&ppppppplStack_138,&ppppppplStack_a0,&pcStack_d0);
      ppppppplVar7 = ppppppplStack_138;
      if (-1 < (char)bStack_121) {
        uStack_130 = (ulong)bStack_121;
        ppppppplVar7 = (long *******)&ppppppplStack_138;
      }
      uStack_150 = 0;
      uStack_148 = 0;
      ppppplStack_158 = (long *****)0x0;
      func_0x000104ab5920(&uStack_120,2,ppppppplVar7,uStack_130,&uStack_139,&ppppplStack_158);
      iVar15 = (int)ppppppplVar7;
      uVar9 = *param_3;
      if (uStack_120 == uVar9) {
LAB_1004803d8:
        if ((uVar9 & 1) != 0) {
          FUN_10084dad0();
        }
      }
      else {
        *param_3 = uStack_120;
        uStack_120 = 0x36;
        if ((uVar9 & 1) != 0) {
          FUN_10084dad0();
          uVar9 = uStack_120;
          goto LAB_1004803d8;
        }
      }
      pppppplStack_d8 = &ppppplStack_158;
      ppppppplVar7 = &pppppplStack_d8;
      func_0x000100482b64();
      pcVar21 = pcVar22;
      if ((char)bStack_121 < '\0') {
        func_0x000107c60e14();
        ppppppplVar7 = ppppppplStack_138;
      }
      goto LAB_1004801a8;
    }
    alStack_110[2] = 0;
    alStack_110[3] = 0;
    alStack_110[1] = 0;
    iVar15 = 0xf22ff6b;
    func_0x000104ab5920(&pcStack_d0,2,
                        "target URI channel arg missing or wrong type in client channel filter",0x45
                        ,&ppppppplStack_138,alStack_110 + 1);
    pcVar21 = (char *)*param_3;
    if (pcStack_d0 == pcVar21) {
LAB_1004802b4:
      if (((ulong)pcVar21 & 1) != 0) {
        FUN_10084dad0();
      }
    }
    else {
      *param_3 = (ulong)pcStack_d0;
      pcStack_d0 = (char *)0x36;
      if (((ulong)pcVar21 & 1) != 0) {
        FUN_10084dad0();
        pcVar21 = pcStack_d0;
        goto LAB_1004802b4;
      }
    }
    ppppppplStack_a0 = (long *******)(alStack_110 + 1);
    pcVar21 = pcVar10;
  }
  ppppppplVar7 = (long *******)&ppppppplStack_a0;
  func_0x000100482b64();
LAB_1004801a8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    func_0x000107c60e78();
    if (iVar15 != 0) {
      func_0x000104bd46a0();
      if ((char)param_1[0x57] < '\0') {
        func_0x000107c60e14(*puVar20);
      }
      if ((char)param_1[0x3f] < '\0') {
        func_0x000107c60e14(*(undefined8 *)pcVar21);
      }
      ppppppplVar14 = (long *******)*puVar23;
      if (ppppppplVar14 != (long *******)0x0) {
        ppppppplVar1 = ppppppplVar14 + 1;
        do {
          pppppplVar19 = *ppppppplVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppppppplVar1,0x10);
          if (bVar3) {
            *ppppppplVar1 = (long ******)((long)pppppplVar19 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((long ******)((long)pppppplVar19 + -1) == (long ******)0x0) goto LAB_100480830;
      }
    }
    do {
      ppppppplVar14 = ppppppplVar7;
      func_0x000107c60bd8();
LAB_100480830:
      (*(code *)(*ppppppplVar14)[1])();
    } while( true );
  }
  return param_1;
}



/* Entry: 100480840; end: 1004808a3;  */

undefined8 FUN_100480840(undefined8 *param_1,int *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*(int *)(param_3 + 0x14) == 0) {
    func_0x000107c2c180();
  }
  else if (*(undefined ***)param_2 == &PTR_FUN_1107c0f78) {
    *param_1 = 0;
    uVar1 = *(undefined8 *)(param_2 + 2);
    FUN_10047fe88(uVar1,param_3,param_1);
    return uVar1;
  }
  func_0x000107c2c184();
  FUN_1004bdf74(param_1);
  func_0x000107c60bd8();
  FUN_10047fdf4();
  uVar1 = 0;
  if (param_2 != (int *)0x0) {
    if (*param_2 == 1) {
      if (param_2[4] == 0) {
        uVar1 = 0;
      }
      else {
        if (param_2[4] != 1) {
          FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/channel_args.cc"
                        ,0x1cb,2,"%s treated as bool but set to %d (assuming true)");
        }
        uVar1 = 1;
      }
    }
    else {
      FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/channel_args.cc"
                    ,0x1c2,2,"%s ignored: it must be an integer");
    }
  }
  return uVar1;
}



/* Entry: 1004808a4; end: 1004808c3;  */

undefined8 FUN_1004808a4(int *param_1)

{
  undefined8 uVar1;
  
  FUN_10047fdf4(param_1,"grpc.minimal_stack");
  uVar1 = 0;
  if (param_1 != (int *)0x0) {
    if (*param_1 == 1) {
      if (param_1[4] == 0) {
        uVar1 = 0;
      }
      else {
        if (param_1[4] != 1) {
          FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/channel_args.cc"
                        ,0x1cb,2,"%s treated as bool but set to %d (assuming true)");
        }
        uVar1 = 1;
      }
    }
    else {
      FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/channel_args.cc"
                    ,0x1c2,2,"%s ignored: it must be an integer");
    }
  }
  return uVar1;
}



/* Entry: 1004808c4; end: 100480963;  */

undefined8 FUN_1004808c4(int *param_1,undefined8 param_2)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 == 1) {
      if (param_1[4] == 0) {
        param_2 = 0;
      }
      else {
        if (param_1[4] != 1) {
          FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/channel_args.cc"
                        ,0x1cb,2,"%s treated as bool but set to %d (assuming true)");
        }
        param_2 = 1;
      }
    }
    else {
      FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/channel_args.cc"
                    ,0x1c2,2,"%s ignored: it must be an integer");
    }
  }
  return param_2;
}



/* Entry: 100480964; end: 10048099b;  */

void FUN_100480964(undefined8 param_1)

{
  FUN_10047fdf4(param_1,"grpc.client_channel_factory");
  return;
}



/* Entry: 10048099c; end: 1004809b3;  */

void FUN_10048099c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001004809a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puRam0000000113815c18)();
  return;
}



/* Entry: 1004809b4; end: 1004809e7;  */

ulong FUN_1004809b4(void)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  char *pcVar4;
  long lVar5;
  ulong uVar6;
  
  lVar2 = lRam0000000113815be8;
  if (lRam0000000113815be8 == 0) {
    FUN_100472138();
  }
  lVar5 = *(long *)(lVar2 + 0xd8);
  if (*(long *)(lVar2 + 0xe0) != lVar5) {
    uVar6 = 0;
    pcVar4 = "client_channel";
    do {
      plVar3 = *(long **)(lVar5 + uVar6 * 8);
      (**(code **)(*plVar3 + 0x10))();
      iVar1 = (int)plVar3;
      if ((pcVar4 == (char *)0xe) && (pcVar4 = "client_channel", func_0x000107c610b0(), iVar1 == 0))
      {
        return uVar6;
      }
      uVar6 = uVar6 + 1;
      lVar5 = *(long *)(lVar2 + 0xd8);
    } while (uVar6 < (ulong)(*(long *)(lVar2 + 0xe0) - lVar5 >> 3));
  }
  return 0xffffffffffffffff;
}



/* Entry: 1004809e8; end: 100480a67;  */

ulong FUN_1004809e8(long *param_1,long param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  lVar4 = *param_1;
  if (param_1[1] != lVar4) {
    uVar5 = 0;
    lVar3 = param_2;
    do {
      plVar2 = *(long **)(lVar4 + uVar5 * 8);
      (**(code **)(*plVar2 + 0x10))();
      iVar1 = (int)plVar2;
      if ((lVar3 == param_3) && (lVar3 = param_2, func_0x000107c610b0(), iVar1 == 0)) {
        return uVar5;
      }
      uVar5 = uVar5 + 1;
      lVar4 = *param_1;
    } while (uVar5 < (ulong)(param_1[1] - lVar4 >> 3));
  }
  return 0xffffffffffffffff;
}



/* Entry: 100480a68; end: 100480aaf;  */

void FUN_100480a68(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x20;
  func_0x000107c60e20();
  FUN_100480b08();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 100480ab0; end: 100480b07;  */

undefined8 * FUN_100480ab0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x60;
  func_0x000107c60e20();
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  *puVar1 = &PTR_DAT_1107c5a80;
  puVar1[1] = 1;
  puVar2 = puVar1 + 0xb;
  *puVar2 = 0;
  puVar1[2] = puVar2;
  puVar1[10] = puVar2;
  *param_1 = puVar1;
  return param_1;
}



/* Entry: 100480b08; end: 100480b4f;  */

undefined8 * FUN_100480b08(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1107c1500;
  FUN_100480ab0(param_1 + 3);
  return param_1;
}



/* Entry: 100480b50; end: 100480b73;  */

undefined8 FUN_100480b50(int *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10047fdf4();
  if (param_1 != (int *)0x0) {
    if (*param_1 == 1) {
      if (param_1[4] == 0) {
        param_3 = 0;
      }
      else {
        if (param_1[4] != 1) {
          FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/channel_args.cc"
                        ,0x1cb,2,"%s treated as bool but set to %d (assuming true)");
        }
        param_3 = 1;
      }
    }
    else {
      FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/channel_args.cc"
                    ,0x1c2,2,"%s ignored: it must be an integer");
    }
  }
  return param_3;
}



/* Entry: 100480b74; end: 100480c23;  */

void FUN_100480b74(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  
  if ((bRam00000001136a1db0 & 1) == 0) {
    iVar4 = 0x136a1db0;
    func_0x000107c60e48();
    if (iVar4 != 0) {
      lVar5 = 0x68;
      func_0x000107c60e20();
      FUN_100480c24();
      lRam00000001136a1da8 = lVar5;
      func_0x000107c60e4c(0x1136a1db0);
    }
  }
  lVar5 = lRam00000001136a1da8;
  plVar1 = (long *)(lRam00000001136a1da8 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *param_1 = lVar5;
  return;
}



/* Entry: 100480c24; end: 100480c8f;  */

undefined8 * FUN_100480c24(undefined8 *param_1)

{
  param_1[3] = 0;
  *param_1 = &PTR_DAT_1107c2030;
  param_1[1] = 1;
  param_1[2] = param_1 + 3;
  param_1[4] = 0;
  FUN_100460318(param_1 + 5);
  return param_1;
}



/* Entry: 100480c90; end: 100480cff;  */

bool FUN_100480c90(void)

{
  bool bVar1;
  char *pcVar2;
  
  pcVar2 = "grpc_cfstream";
  func_0x000107c60ffc();
  if (pcVar2 == (char *)0x0) {
    bVar1 = false;
  }
  else {
    bVar1 = *pcVar2 == '0';
  }
  pcVar2 = "GRPC_CFSTREAM_RUN_LOOP";
  func_0x000107c60ffc();
  if (pcVar2 != (char *)0x0) {
    if (*pcVar2 != '1') {
      bVar1 = true;
    }
    if (!bVar1) {
      return false;
    }
  }
  if (lRam00000001136a1fd0 != 0) {
    return *(char *)(lRam00000001136a1fd0 + 9) != '\0';
  }
  return false;
}



/* Entry: 100480d00; end: 100480e57;  */

void FUN_100480d00(ulong param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((lRam00000001130a5860 == 0) || (uVar3 = param_1, FUN_100480c90(), (uVar3 & 1) != 0)) {
    return;
  }
  FUN_100460448(0x1136a1d60);
  if (lRam00000001136a1da0 != 0) goto LAB_100480e24;
  lVar1 = 0xa0;
  FUN_100460860();
  lRam00000001136a1da0 = lVar1;
  FUN_100480e58();
  FUN_100460860();
  lVar4 = lRam00000001136a1da0;
  *(long *)(lRam00000001136a1da0 + 0x80) = lVar1;
  *(undefined1 *)(lVar4 + 0x88) = 0;
  func_0x000100480e70();
  FUN_100480ed8(lRam00000001136a1da0 + 0x90,0);
  puVar2 = (ulong *)(lRam00000001136a1da0 + 0x98);
  FUN_100480ed8(puVar2,3);
  lVar1 = lRam00000001136a1da0;
  *(undefined **)(lRam00000001136a1da0 + 0x40) = &UNK_104a74244;
  *(long *)(lVar1 + 0x48) = lVar1;
  *(undefined8 *)(lVar1 + 0x50) = 0;
  func_0x000100460dc4();
  uVar3 = *puVar2;
  FUN_1004671a4();
  lVar4 = 0x7fffffffffffffff;
  if ((((uVar3 != 0x7fffffffffffffff) && (lRam00000001130a5860 != 0x7fffffffffffffff)) &&
      (lVar4 = -0x8000000000000000, uVar3 != 0x8000000000000000)) &&
     (lRam00000001130a5860 != -0x8000000000000000)) {
    if ((long)uVar3 < 1) {
      if ((long)(-0x8000000000000000 - uVar3) <= lRam00000001130a5860) goto LAB_100480e0c;
    }
    else if ((long)(uVar3 ^ 0x7fffffffffffffff) < lRam00000001130a5860) {
      lVar4 = 0x7fffffffffffffff;
    }
    else {
LAB_100480e0c:
      lVar4 = lRam00000001130a5860 + uVar3;
    }
  }
  func_0x000100480ee4(lVar1,lVar4,lRam00000001136a1da0 + 0x38);
LAB_100480e24:
  func_0x0001004811f0(lRam00000001136a1da0 + 0x90);
  uVar5 = *(undefined8 *)(lRam00000001136a1da0 + 0x80);
  func_0x000100466b80(0x1136a1d60);
                    /* WARNING: Could not recover jumptable at 0x000100481210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lRam0000000113815c18 + 0x10))(param_1,uVar5);
  return;
}



/* Entry: 100480e58; end: 100480e7f;  */

void FUN_100480e58(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100480e64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lRam0000000113815c10 + 0x38))();
  return;
}



/* Entry: 100480e80; end: 100480ed7;  */

void FUN_100480e80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  puVar1 = param_1 + 8;
  param_1[9] = 0;
  *puVar1 = 0;
  FUN_100460318();
  *puVar1 = puVar1;
  param_1[9] = puVar1;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *param_2 = param_1;
  return;
}



/* Entry: 100480ed8; end: 100480ef3;  */

void FUN_100480ed8(long *param_1,int param_2)

{
  *param_1 = (long)param_2;
  return;
}



/* Entry: 100480ef4; end: 1004811d7;  */

/* WARNING: Possible PIC construction at 0x0001004810c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100481044: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001004810c4) */
/* WARNING: Removing unreachable block (ram,0x0001004810c8) */
/* WARNING: Removing unreachable block (ram,0x0001004810e8) */
/* WARNING: Removing unreachable block (ram,0x000100481114) */
/* WARNING: Removing unreachable block (ram,0x000100481118) */
/* WARNING: Removing unreachable block (ram,0x00010048111c) */
/* WARNING: Removing unreachable block (ram,0x000100481128) */
/* WARNING: Removing unreachable block (ram,0x000100481048) */
/* WARNING: Type propagation algorithm not settling */

void FUN_100480ef4(ulong *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  double dVar11;
  ulong auStack_80 [4];
  undefined1 uStack_59;
  ulong uStack_58;
  undefined1 uStack_49;
  ulong *puStack_48;
  
  uVar6 = uRam00000001136a2188;
  lVar5 = lRam00000001136a2180;
  puVar2 = auStack_80;
  puVar10 = &stack0xfffffffffffffff0;
  param_1[4] = param_3;
  *param_1 = param_2;
  if (cRam00000001136a2110 == '\0') {
    *(undefined1 *)((long)param_1 + 0xc) = 0;
    auStack_80[2] = 0;
    auStack_80[3] = 0;
    auStack_80[1] = 0;
    func_0x000104ab5920(&uStack_58,2,"Attempt to create timer before initialization",0x2d,&uStack_59
                        ,auStack_80 + 1);
    FUN_1004bd7e8(&uStack_49,param_3,&uStack_58);
    if ((uStack_58 & 1) != 0) {
      FUN_10084dad0();
    }
    puStack_48 = auStack_80 + 1;
    func_0x000100482b64(&puStack_48);
    return;
  }
  uVar7 = (ulong)param_1 >> 4 ^ (ulong)param_1 >> 9 ^ (ulong)param_1 >> 0xe;
  uVar1 = 0;
  if (uVar6 != 0) {
    uVar1 = uVar7 / uVar6;
  }
  lVar9 = uVar7 - uVar1 * uVar6;
  plVar8 = (long *)(lVar5 + lVar9 * 0xd8);
  plVar3 = plVar8;
  FUN_100460448();
  *(undefined1 *)((long)param_1 + 0xc) = 1;
  func_0x000100460dc4();
  lVar4 = *plVar3;
  FUN_1004671a4();
  if (param_2 - lVar4 == 0 || (long)param_2 < lVar4) {
    *(undefined1 *)((long)param_1 + 0xc) = 0;
    auStack_80[0] = 0;
    FUN_1004bd7e8(&puStack_48,param_1[4],auStack_80);
    if ((auStack_80[0] & 1) != 0) {
      FUN_10084dad0();
    }
    unaff_x30 = 0x100481048;
    goto SUB_100466b80;
  }
  dVar11 = 9.223372036854776e+18;
  if ((param_2 != 0x7fffffffffffffff) && (lVar4 != -0x7fffffffffffffff)) {
    if (lVar4 == -0x8000000000000000) {
LAB_100480fb4:
      dVar11 = -9.223372036854776e+18;
    }
    else {
      if ((long)param_2 < 1) {
        if (-lVar4 < (long)(-0x8000000000000000 - param_2)) goto LAB_100480fb4;
      }
      else if ((long)(param_2 ^ 0x7fffffffffffffff) < -lVar4) {
        dVar11 = 9.223372036854776e+18;
        goto LAB_100481080;
      }
      dVar11 = (double)(long)(param_2 - lVar4);
    }
  }
LAB_100481080:
  FUN_1004811d8(dVar11 / 1000.0,lVar5 + lVar9 * 0xd8 + 0x40);
  if ((long)param_2 < *(long *)(lVar5 + lVar9 * 0xd8 + 0x78)) {
    func_0x000104ac8428(lVar5 + lVar9 * 0xd8 + 0x90,param_1);
    unaff_x30 = 0x1004810c4;
    puVar2 = auStack_80;
  }
  else {
    *(undefined4 *)(param_1 + 1) = 0xffffffff;
    lVar5 = lVar5 + lVar9 * 0xd8;
    param_1[2] = lVar5 + 0xa0;
    uVar6 = *(ulong *)(lVar5 + 0xb8);
    param_1[3] = uVar6;
    *(ulong **)(uVar6 + 0x10) = param_1;
    *(ulong **)(param_1[2] + 0x18) = param_1;
    puVar2 = (ulong *)register0x00000008;
    puVar10 = unaff_x29;
  }
SUB_100466b80:
  *(undefined1 **)((long)puVar2 + -0x10) = puVar10;
  *(undefined8 *)((long)puVar2 + -8) = unaff_x30;
  func_0x000107c61268();
  if ((int)plVar8 != 0) {
    func_0x000107c2c138();
                    /* WARNING: Could not recover jumptable at 0x000100466ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puRam00000001136a2078)();
    return;
  }
  return;
}



/* Entry: 1004811d8; end: 100481217;  */

void FUN_1004811d8(double param_1,long param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3ff0000000000000,8);
  *(double *)(param_2 + 0x20) = *(double *)(param_2 + 0x20) + auVar1._8_8_;
  *(double *)(param_2 + 0x18) = *(double *)(param_2 + 0x18) + param_1;
  return;
}



/* Entry: 100481218; end: 10048127f;  */

void FUN_100481218(int *param_1)

{
  FUN_10047fdf4();
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/channel_args.cc"
                  ,0x1b3,2,"%s ignored: it must be an string");
  }
  return;
}



/* Entry: 100481280; end: 1004820df;  */

void FUN_100481280(undefined4 *param_1,byte *param_2,long param_3,undefined8 *param_4)

{
  byte bVar1;
  uint uVar2;
  undefined8 *****pppppuVar3;
  int5 iVar4;
  ulong *puVar5;
  code *pcVar6;
  bool bVar7;
  byte **ppbVar8;
  byte *pbVar9;
  ulong **ppuVar10;
  undefined1 auVar11 [4];
  undefined4 uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong *puVar16;
  ulong **ppuStack_240;
  ulong *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 uStack_219;
  undefined8 ****ppppuStack_218;
  ulong uStack_210;
  byte bStack_201;
  ulong *puStack_200;
  ulong *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  byte *pbStack_1e0;
  byte *pbStack_1d8;
  long lStack_1d0;
  undefined1 auStack_1c8 [4];
  undefined4 uStack_1c4;
  short sStack_1c0;
  ulong *puStack_1b8;
  ulong *puStack_1b0;
  ulong *puStack_1a8;
  undefined2 uStack_1a0;
  undefined4 auStack_198 [2];
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  ulong *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  ulong **ppuStack_100;
  ulong **ppuStack_f8;
  ulong **ppuStack_f0;
  ulong **ppuStack_e8;
  ulong **ppuStack_e0;
  undefined1 *puStack_d0;
  long lStack_c8;
  undefined1 auStack_c0 [32];
  ulong **ppuStack_a0;
  ulong **ppuStack_98;
  ulong **ppuStack_90;
  ulong **ppuStack_88;
  ulong **ppuStack_80;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined4 **)(param_1 + 8) = param_1 + 10;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  _auStack_1c8 = 3;
  auStack_198[0] = 0;
  uStack_190 = 0;
  uStack_188 = 0;
  puStack_178 = &uStack_170;
  uStack_170 = 0;
  uStack_168 = 0;
  sStack_1c0 = 0;
  puStack_1b0 = (ulong *)0x0;
  puStack_1a8 = (ulong *)0x0;
  puStack_1b8 = (ulong *)0x0;
  uStack_1a0 = 0;
  lStack_180 = 0;
  uStack_118 = 0;
  lStack_120 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_138 = 0;
  lStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_158 = 0;
  puStack_160 = (ulong *)0x0;
  lStack_148 = 0;
  uStack_150 = 0;
  lStack_1d0 = param_3;
  pbStack_1e0 = param_2;
  pbStack_1d8 = param_2;
  if (param_3 != 0) {
LAB_100481344:
    pbVar9 = pbStack_1d8 + 1;
    bVar1 = *pbStack_1d8;
    uVar14 = (ulong)bVar1;
    lStack_1d0 = lStack_1d0 + -1;
    pbStack_1d8 = pbVar9;
    if (bVar1 == 0) {
      lStack_1d0 = 0;
      goto LAB_100481b98;
    }
    auVar11 = auStack_1c8;
    if (bVar1 < 0x5c) {
      if (bVar1 < 0x2d) {
        if ((1L << (uVar14 & 0x3f) & 0x100002600U) != 0) {
          bVar7 = true;
          if (0x1b < (uint)auStack_1c8) goto LAB_100481be8;
          uVar2 = 1 << (ulong)((uint)auStack_1c8 & 0x1f);
          if ((uVar2 & 0xc00000d) == 0) {
            if ((uVar2 & 0x9c00) != 0) {
              func_0x000104ac8ebc(&pbStack_1e0);
              _auStack_1c8 = CONCAT44(uStack_1c4,0x1a);
              goto LAB_1004815f4;
            }
            if ((((uVar2 & 0x12) != 0) && (bVar1 == 0x20)) && (sStack_1c0 == 0)) {
              ppbVar8 = &pbStack_1e0;
              func_0x000104ac8f5c(ppbVar8,0x20);
              goto LAB_1004814fc;
            }
            goto LAB_100481be8;
          }
          goto LAB_1004815f4;
        }
        if (uVar14 == 0x2c) goto LAB_10048141c;
      }
LAB_1004813c8:
      _auStack_1c8 = (uint6)_auStack_1c8;
      if ((uint)auVar11 < 0x1c) {
                    /* WARNING: Could not recover jumptable at 0x0001004813f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)*(ushort *)(&UNK_10dd5637c + ((ulong)_auStack_1c8 & 0xffffffff) * 2) * 4 +
                  0x1004813f4))();
        return;
      }
    }
    else {
      if (bVar1 == 0x5c) {
        if (auStack_1c8 == (undefined1  [4])0x5) {
          if (sStack_1c0 != 0) goto LAB_100481bd4;
          ppbVar8 = &pbStack_1e0;
          func_0x000104ac8f5c(ppbVar8,0x5c);
          if ((int)ppbVar8 == 0) goto LAB_100481bd4;
          if ((char)uStack_1c4 != '\0') {
            _auStack_1c8 = CONCAT44(uStack_1c4,1);
            goto LAB_1004815f4;
          }
          uVar12 = 4;
        }
        else {
          if (auStack_1c8 == (undefined1  [4])0x4) {
            iVar4 = 0;
          }
          else {
            if (auStack_1c8 != (undefined1  [4])0x1) goto LAB_100481bd4;
            iVar4 = 1;
          }
          _auStack_1c8 = CONCAT35(uStack_1c4._1_3_,iVar4 << 0x20);
          uVar12 = 5;
        }
      }
      else {
        if ((bVar1 != 0x5d) && (bVar1 != 0x7d)) goto LAB_1004813c8;
LAB_10048141c:
        bVar7 = true;
        if (0x1a < (uint)auStack_1c8) goto LAB_100481be8;
        uVar2 = 1 << (ulong)((uint)auStack_1c8 & 0x1f);
        if ((uVar2 & 0x9c00) == 0) {
          if ((uVar2 & 0x4000009) == 0) {
            if (((uVar2 & 0x12) != 0) && (sStack_1c0 == 0)) {
              ppbVar8 = &pbStack_1e0;
              func_0x000104ac8f5c(ppbVar8,uVar14);
LAB_1004814fc:
              bVar7 = true;
              if (((ulong)ppbVar8 & 1) != 0) goto LAB_1004815f4;
            }
            goto LAB_100481be8;
          }
          if (bVar1 == 0x2c) {
            if (auStack_1c8 != (undefined1  [4])0x1a) goto LAB_100481be8;
LAB_100481540:
            if (lStack_148 == lStack_140) goto LAB_100481be8;
            if (**(int **)(lStack_140 + -8) != 6) {
              if (**(int **)(lStack_140 + -8) == 5) {
                _auStack_1c8 = (ulong)uStack_1c4 << 0x20;
                goto LAB_1004815f4;
              }
              goto LAB_100481be8;
            }
            _auStack_1c8 = CONCAT44(uStack_1c4,3);
            goto LAB_1004815f4;
          }
        }
        else {
          if (lStack_148 == lStack_140) goto LAB_100481be8;
          if (bVar1 == 0x5d) {
            if (**(int **)(lStack_140 + -8) != 6) goto LAB_100481be8;
          }
          else {
            if (bVar1 != 0x7d) {
              func_0x000104ac8ebc(&pbStack_1e0);
              auVar11 = (undefined1  [4])0x1a;
              _auStack_1c8 = CONCAT44(uStack_1c4,0x1a);
              if (bVar1 == 0x2c) goto LAB_100481540;
              goto LAB_10048156c;
            }
            if (**(int **)(lStack_140 + -8) != 5) goto LAB_100481be8;
          }
          func_0x000104ac8ebc(&pbStack_1e0);
          auVar11 = (undefined1  [4])0x1a;
          _auStack_1c8 = CONCAT44(uStack_1c4,0x1a);
        }
LAB_10048156c:
        if (lStack_148 == lStack_140) goto LAB_100481be8;
        if (bVar1 == 0x5d) {
          if (**(int **)(lStack_140 + -8) != 6) goto LAB_100481be8;
          if (auVar11 == (undefined1  [4])0x3) {
LAB_1004815b8:
            if (uStack_1c4._1_1_ == '\0') goto LAB_100481be8;
          }
        }
        else if (bVar1 == 0x7d) {
          if (**(int **)(lStack_140 + -8) != 5) goto LAB_100481be8;
          if (auVar11 == (undefined1  [4])0x0) goto LAB_1004815b8;
        }
        _auStack_1c8 = CONCAT44(uStack_1c4,0x1a);
        lStack_140 = lStack_140 + -8;
        if (lStack_148 != lStack_140) goto LAB_1004815f4;
        uVar12 = 0x1b;
      }
      _auStack_1c8 = CONCAT44(uStack_1c4,uVar12);
    }
LAB_1004815f4:
    if (lStack_1d0 == 0) goto LAB_100481b98;
    goto LAB_100481344;
  }
LAB_100481b98:
  auVar11 = auStack_1c8;
  if (((uint)auStack_1c8 < 0x10) && ((1 << (ulong)((uint)auStack_1c8 & 0x1f) & 0x9c00U) != 0)) {
    func_0x000104ac8ebc(&pbStack_1e0);
    auVar11 = (undefined1  [4])0x1a;
    _auStack_1c8 = CONCAT44(uStack_1c4,0x1a);
  }
  if (lStack_148 == lStack_140) {
    bVar7 = ((uint)auVar11 & 0xfffffffe) != 0x1a;
  }
  else {
LAB_100481bd4:
    bVar7 = true;
  }
LAB_100481be8:
  if ((char)uStack_1a0 == '\0') {
LAB_100481cf0:
    if (bVar7) {
      ppuStack_a0 = (ulong **)0x10f23a504;
      ppuStack_98 = (ulong **)0x1a;
      pbVar9 = pbStack_1d8 + ~(ulong)pbStack_1e0;
      func_0x000107c2ba34(pbVar9,auStack_c0);
      lStack_c8 = (long)pbVar9 - (long)auStack_c0;
      puStack_d0 = auStack_c0;
      FUN_10047c83c(&ppppuStack_218,&ppuStack_a0,&puStack_d0);
      pppppuVar3 = (undefined8 *****)ppppuStack_218;
      if (-1 < (char)bStack_201) {
        uStack_210 = (ulong)bStack_201;
        pppppuVar3 = &ppppuStack_218;
      }
      uStack_230 = 0;
      uStack_228 = 0;
      puStack_238 = (ulong *)0x0;
      func_0x000104ab5920(&puStack_200,2,pppppuVar3,uStack_210,&uStack_219,&puStack_238);
      if (puStack_1b0 < puStack_1a8) {
        *puStack_1b0 = (ulong)puStack_200;
        puStack_200 = (ulong *)0x36;
        puStack_1b0 = puStack_1b0 + 1;
      }
      else {
        lVar15 = (long)puStack_1b0 - (long)puStack_1b8 >> 3;
        uVar14 = lVar15 + 1;
        if (uVar14 >> 0x3d != 0) {
          func_0x000104a83ee4(&puStack_1b8);
          goto LAB_100482000;
        }
        ppuVar10 = &puStack_1a8;
        uVar13 = (long)puStack_1a8 - (long)puStack_1b8 >> 2;
        if (uVar13 <= uVar14) {
          uVar13 = uVar14;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)puStack_1a8 - (long)puStack_1b8)) {
          uVar13 = 0x1fffffffffffffff;
        }
        ppuStack_e0 = ppuVar10;
        if (uVar13 == 0) {
          ppuStack_100 = (ulong **)0x0;
        }
        else {
          func_0x000104a83ef8();
          ppuStack_100 = ppuVar10;
        }
        ppuStack_f8 = ppuStack_100 + lVar15;
        ppuStack_e8 = ppuStack_100 + uVar13;
        ppuVar10 = ppuStack_f8 + 1;
        *ppuStack_f8 = puStack_200;
        puStack_200 = (ulong *)0x36;
        ppuStack_f0 = ppuVar10;
        func_0x000104a83e70(&puStack_1b8,&ppuStack_100);
        puVar5 = puStack_1b0;
        func_0x000104a84040(&ppuStack_100);
        puStack_1b0 = puVar5;
        if (((ulong)puStack_200 & 1) != 0) {
          FUN_10084dad0();
        }
      }
      ppuStack_100 = &puStack_238;
      func_0x000100482b64(&ppuStack_100);
      if ((char)bStack_201 < '\0') {
        func_0x000107c60e14(ppppuStack_218);
      }
    }
    if (puStack_1b8 == puStack_1b0) {
      FUN_1004829b8(param_1,auStack_198);
      ppuStack_240 = (ulong **)0x0;
    }
    else {
      ppuStack_240 = (ulong **)0x0;
      func_0x000104aba878(&ppuStack_a0,2,"JSON parsing failed",0x13,&puStack_d0,
                          (long)puStack_1b0 - (long)puStack_1b8 >> 3);
      puVar5 = puStack_1b8;
      if (ppuStack_a0 != (ulong **)0x0) {
        ppuStack_240 = ppuStack_a0;
      }
      if (puStack_1b0 != puStack_1b8) {
        puVar16 = puStack_1b0;
        do {
          puVar16 = puVar16 + -1;
          func_0x000104a713e4(&puStack_1a8,puVar16);
        } while (puVar16 != puVar5);
      }
      puStack_1b0 = puVar5;
    }
    if (lStack_108 < 0) {
      func_0x000107c60e14(uStack_118);
    }
    if (lStack_120 < 0) {
      func_0x000107c60e14(uStack_130);
    }
    if (lStack_148 != 0) {
      lStack_140 = lStack_148;
      func_0x000107c60e14();
    }
    ppuStack_a0 = &puStack_160;
    func_0x000100482ae0(&ppuStack_a0);
    FUN_100482900(&puStack_178,uStack_170);
    if (lStack_180 < 0) {
      func_0x000107c60e14(uStack_190);
    }
    ppuStack_a0 = &puStack_1b8;
    func_0x000100482b64(&ppuStack_a0);
    ppuVar10 = (ulong **)*param_4;
    if (ppuStack_240 == ppuVar10) {
LAB_100481f6c:
      if (((ulong)ppuVar10 & 1) != 0) {
        FUN_10084dad0();
      }
    }
    else {
      *param_4 = ppuStack_240;
      if (((ulong)ppuVar10 & 1) != 0) {
        FUN_10084dad0();
        ppuVar10 = (ulong **)0x0;
        goto LAB_100481f6c;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
    func_0x000107c60e78();
  }
  else {
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    puStack_1f8 = (ulong *)0x0;
    func_0x000104ab5920(&ppuStack_100,2,
                        "too many errors encountered during JSON parsing -- fix reported errors and try again to see additional errors"
                        ,0x6d,&ppppuStack_218,&puStack_1f8);
    if (puStack_1b0 < puStack_1a8) {
      *puStack_1b0 = (ulong)ppuStack_100;
      ppuStack_100 = (ulong **)0x36;
      puStack_1b0 = puStack_1b0 + 1;
LAB_100481ce0:
      ppuStack_a0 = &puStack_1f8;
      func_0x000100482b64(&ppuStack_a0);
      goto LAB_100481cf0;
    }
    lVar15 = (long)puStack_1b0 - (long)puStack_1b8 >> 3;
    uVar14 = lVar15 + 1;
    if (uVar14 >> 0x3d == 0) {
      ppuVar10 = &puStack_1a8;
      uVar13 = (long)puStack_1a8 - (long)puStack_1b8 >> 2;
      if (uVar13 <= uVar14) {
        uVar13 = uVar14;
      }
      if (0x7ffffffffffffff7 < (ulong)((long)puStack_1a8 - (long)puStack_1b8)) {
        uVar13 = 0x1fffffffffffffff;
      }
      ppuStack_80 = ppuVar10;
      if (uVar13 == 0) {
        ppuStack_a0 = (ulong **)0x0;
      }
      else {
        func_0x000104a83ef8();
        ppuStack_a0 = ppuVar10;
      }
      ppuStack_98 = ppuStack_a0 + lVar15;
      ppuStack_88 = ppuStack_a0 + uVar13;
      ppuVar10 = ppuStack_98 + 1;
      *ppuStack_98 = (ulong *)ppuStack_100;
      ppuStack_100 = (ulong **)0x36;
      ppuStack_90 = ppuVar10;
      func_0x000104a83e70(&puStack_1b8,&ppuStack_a0);
      puVar5 = puStack_1b0;
      func_0x000104a84040(&ppuStack_a0);
      puStack_1b0 = puVar5;
      if (((ulong)ppuStack_100 & 1) != 0) {
        FUN_10084dad0();
      }
      goto LAB_100481ce0;
    }
  }
  func_0x000104a83ee4(&puStack_1b8);
LAB_100482000:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x100482004);
  (*pcVar6)();
}



/* Entry: 1004820e0; end: 10048224b;  */

void FUN_1004820e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  long *param_5)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 **ppuVar3;
  undefined1 **ppuVar4;
  undefined1 *puStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  char cStack_81;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 auStack_68 [24];
  long *plStack_50;
  undefined8 uStack_48;
  
  ppuVar3 = &puStack_c0;
  ppuVar4 = &puStack_c0;
  plStack_50 = param_5;
  uStack_48 = param_2;
  FUN_100481280(auStack_a0,param_3,param_4,param_5);
  if (*param_5 != 0) {
    *param_1 = 0;
    goto LAB_1004821cc;
  }
  if (0x7ffffffffffffff7 < param_4) {
    func_0x000104a6fa5c(&puStack_c0);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100482220);
    (*pcVar2)();
  }
  if (param_4 < 0x17) {
    uStack_b0 = CONCAT17((char)param_4,(undefined7)uStack_b0);
    if (param_4 != 0) goto LAB_100482184;
  }
  else {
    uVar1 = (param_4 & 0xfffffffffffffff8) + 8;
    if ((param_4 | 7) != 0x17) {
      uVar1 = param_4 | 7;
    }
    ppuVar3 = (undefined1 **)(uVar1 + 1);
    func_0x000107c60e20();
    uStack_b0 = (ulong)(uVar1 + 1) | 0x8000000000000000;
    puStack_c0 = (undefined1 *)ppuVar3;
    uStack_b8 = param_4;
LAB_100482184:
    func_0x000107c610b8(ppuVar3,param_3,param_4);
    ppuVar4 = ppuVar3;
  }
  *(undefined1 *)((long)ppuVar4 + param_4) = 0;
  FUN_100482be8(&uStack_a8,&uStack_48,&puStack_c0,auStack_a0,&plStack_50);
  *param_1 = uStack_a8;
  uStack_a8 = 0;
  if ((long)uStack_b0 < 0) {
    func_0x000107c60e14(puStack_c0);
  }
LAB_1004821cc:
  puStack_c0 = auStack_68;
  FUN_100482ae0(&puStack_c0);
  FUN_100482900(auStack_80,uStack_78);
  if (cStack_81 < '\0') {
    func_0x000107c60e14(uStack_98);
  }
  return;
}



/* Entry: 10048224c; end: 100482523;  */

void FUN_10048224c(ulong *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  undefined8 ***pppuVar3;
  code *pcVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong *unaff_x22;
  long lVar10;
  ulong auStack_b8 [3];
  undefined1 uStack_99;
  undefined8 **ppuStack_98;
  ulong uStack_90;
  byte bStack_81;
  ulong auStack_80 [2];
  ulong *puStack_70;
  ulong *puStack_68;
  ulong *puStack_60;
  ulong *puStack_58;
  ulong *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1[0x13] == param_1[0x14]) {
    param_1 = param_1 + 9;
LAB_100482478:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return;
    }
    func_0x000107c60e78(param_1);
  }
  else {
    unaff_x22 = *(ulong **)(param_1[0x14] - 8);
    if ((int)*unaff_x22 != 5) {
      if ((int)*unaff_x22 != 6) {
        func_0x000107c2c388();
        goto LAB_1004824bc;
      }
      func_0x000104ac90f0(unaff_x22 + 7);
      param_1 = (ulong *)(unaff_x22[8] - 0x50);
      goto LAB_100482478;
    }
    puVar6 = unaff_x22 + 4;
    puVar1 = param_1 + 0x16;
    puVar5 = puVar6;
    FUN_100484044(puVar6,puVar1);
    if (unaff_x22 + 5 == puVar5) {
LAB_100482454:
      puStack_70 = puVar1;
      func_0x000104a81f70(puVar6,puVar1,&UNK_10dd5b8f9,&puStack_70,&ppuStack_98);
      param_1 = puVar6 + 7;
      goto LAB_100482478;
    }
    unaff_x22 = param_1 + 5;
    if (param_1[6] - *unaff_x22 == 0x80) {
      *(undefined1 *)(param_1 + 8) = 1;
      goto LAB_100482454;
    }
    puStack_60 = (ulong *)(~*param_1 + param_1[1]);
    puStack_68 = (ulong *)0x100746d14;
    puStack_58 = (ulong *)&UNK_10ae73f48;
    puStack_70 = puVar1;
    FUN_1004d4da0(&ppuStack_98,"duplicate key \"%s\" at index %lu",0x1f,&puStack_70,2);
    pppuVar3 = (undefined8 ***)ppuStack_98;
    if (-1 < (char)bStack_81) {
      uStack_90 = (ulong)bStack_81;
      pppuVar3 = &ppuStack_98;
    }
    auStack_b8[1] = 0;
    auStack_b8[2] = 0;
    auStack_b8[0] = 0;
    func_0x000104ab5920(auStack_80,2,pppuVar3,uStack_90,&uStack_99,auStack_b8);
    puVar5 = param_1 + 7;
    puVar8 = (ulong *)param_1[6];
    if (puVar8 < (ulong *)*puVar5) {
      *puVar8 = auStack_80[0];
      auStack_80[0] = 0x36;
      param_1[6] = (ulong)(puVar8 + 1);
LAB_100482434:
      puStack_70 = auStack_b8;
      func_0x000100482b64(&puStack_70);
      if ((char)bStack_81 < '\0') {
        func_0x000107c60e14(ppuStack_98);
      }
      goto LAB_100482454;
    }
    lVar10 = (long)((long)puVar8 - *unaff_x22) >> 3;
    uVar2 = lVar10 + 1;
    if (uVar2 >> 0x3d == 0) {
      uVar7 = (long)*puVar5 - *unaff_x22;
      uVar9 = (long)uVar7 >> 2;
      if (uVar9 <= uVar2) {
        uVar9 = uVar2;
      }
      if (0x7ffffffffffffff7 < uVar7) {
        uVar9 = 0x1fffffffffffffff;
      }
      puStack_50 = puVar5;
      if (uVar9 == 0) {
        puStack_70 = (ulong *)0x0;
      }
      else {
        func_0x000104a83ef8();
        puStack_70 = puVar5;
      }
      puStack_68 = puStack_70 + lVar10;
      puStack_58 = puStack_70 + uVar9;
      puStack_60 = puStack_68 + 1;
      *puStack_68 = auStack_80[0];
      auStack_80[0] = 0x36;
      func_0x000104a83e70(unaff_x22,&puStack_70);
      unaff_x22 = (ulong *)param_1[6];
      func_0x000104a84040(&puStack_70);
      param_1[6] = (ulong)unaff_x22;
      if ((auStack_80[0] & 1) != 0) {
        FUN_10084dad0();
      }
      goto LAB_100482434;
    }
  }
  func_0x000104a83ee4(unaff_x22);
LAB_1004824bc:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1004824c0);
  (*pcVar4)();
}



/* Entry: 100482524; end: 1004828ff;  */

void FUN_100482524(ulong *param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  code ******ppppppcVar4;
  code *pcVar5;
  ulong *puVar6;
  code *****pppppcVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  code ****ppppcVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong *puVar14;
  undefined8 *puVar15;
  long lVar16;
  ulong *puVar17;
  code ***pppcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_a9;
  code *****pppppcStack_a8;
  ulong uStack_a0;
  byte bStack_91;
  code ***apppcStack_90 [2];
  code ****ppppcStack_80;
  code ****ppppcStack_78;
  code ****ppppcStack_70;
  code ****ppppcStack_68;
  code ****ppppcStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar14 = param_1 + 0x13;
  uVar2 = *puVar14;
  uVar3 = param_1[0x14];
  if (uVar3 - uVar2 == 0x7f8) {
    puVar14 = param_1 + 5;
    if (param_1[6] - *puVar14 == 0x80) {
      *(undefined1 *)(param_1 + 8) = 1;
    }
    else {
      ppppcStack_70 = (code ****)(~*param_1 + param_1[1]);
      ppppcStack_80 = (code ****)0xff;
      ppppcStack_78 = (code ****)FUN_1004d50a8;
      ppppcStack_68 = (code ****)&UNK_10ae73f48;
      FUN_1004d4da0(&pppppcStack_a8,"exceeded max stack depth (%d) at index %lu",0x2a,&ppppcStack_80
                    ,2);
      ppppppcVar4 = (code ******)pppppcStack_a8;
      if (-1 < (char)bStack_91) {
        uStack_a0 = (ulong)bStack_91;
        ppppppcVar4 = &pppppcStack_a8;
      }
      uStack_c0 = 0;
      uStack_b8 = 0;
      pppcStack_c8 = (code ***)0x0;
      func_0x000104ab5920(apppcStack_90,2,ppppppcVar4,uStack_a0,&uStack_a9,&pppcStack_c8);
      pppppcVar7 = (code *****)(param_1 + 7);
      ppppcVar11 = (code ****)param_1[6];
      if (ppppcVar11 < *pppppcVar7) {
        *ppppcVar11 = apppcStack_90[0];
        apppcStack_90[0] = (code ***)0x36;
        param_1[6] = (ulong)(ppppcVar11 + 1);
      }
      else {
        lVar16 = (long)((long)ppppcVar11 - *puVar14) >> 3;
        uVar1 = lVar16 + 1;
        if (uVar1 >> 0x3d != 0) {
          func_0x000104a83ee4(puVar14);
          goto LAB_100482898;
        }
        uVar10 = (long)*pppppcVar7 - *puVar14;
        uVar12 = (long)uVar10 >> 2;
        if (uVar12 <= uVar1) {
          uVar12 = uVar1;
        }
        if (0x7ffffffffffffff7 < uVar10) {
          uVar12 = 0x1fffffffffffffff;
        }
        ppppcStack_60 = (code ****)pppppcVar7;
        if (uVar12 == 0) {
          ppppcStack_80 = (code ****)0x0;
        }
        else {
          func_0x000104a83ef8();
          ppppcStack_80 = (code ****)pppppcVar7;
        }
        ppppcStack_78 = ppppcStack_80 + lVar16;
        ppppcStack_68 = ppppcStack_80 + uVar12;
        ppppcStack_70 = ppppcStack_78 + 1;
        *ppppcStack_78 = apppcStack_90[0];
        apppcStack_90[0] = (code ***)0x36;
        func_0x000104a83e70(puVar14,&ppppcStack_80);
        puVar14 = (ulong *)param_1[6];
        func_0x000104a84040(&ppppcStack_80);
        param_1[6] = (ulong)puVar14;
        if (((ulong)apppcStack_90[0] & 1) != 0) {
          FUN_10084dad0();
        }
      }
      ppppcStack_80 = &pppcStack_c8;
      func_0x000100482b64(&ppppcStack_80);
      if ((char)bStack_91 < '\0') {
        func_0x000107c60e14(pppppcStack_a8);
      }
    }
LAB_100482844:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    func_0x000107c60e78(uVar3 - uVar2 != 0x7f8);
  }
  else {
    puVar6 = param_1;
    FUN_10048224c();
    if (param_2 == 5) {
      ppppcStack_78 = (code ****)0x0;
      ppppcStack_70 = (code ****)0x0;
      *(undefined4 *)puVar6 = 5;
      ppppcVar11 = (code ****)(puVar6 + 5);
      ppppcStack_80 = (code ****)&ppppcStack_78;
      FUN_100482900(puVar6 + 4,*ppppcVar11);
      puVar6[4] = (ulong)ppppcStack_80;
      *ppppcVar11 = (code ***)ppppcStack_78;
      puVar6[6] = (ulong)ppppcStack_70;
      if ((code *****)ppppcStack_70 == (code *****)0x0) {
        puVar6[4] = (ulong)ppppcVar11;
      }
      else {
        ppppcStack_78[2] = (code ***)ppppcVar11;
        ppppcStack_78 = (code ****)0x0;
        ppppcStack_70 = (code ****)0x0;
        ppppcStack_80 = (code ****)&ppppcStack_78;
      }
      FUN_100482900(&ppppcStack_80,ppppcStack_78);
    }
    else {
      *(undefined4 *)puVar6 = 6;
      func_0x000104a7781c(puVar6 + 7);
      puVar6[7] = 0;
      puVar6[8] = 0;
      puVar6[9] = 0;
      ppppcStack_78 = (code ****)0x0;
      ppppcStack_70 = (code ****)0x0;
      ppppcStack_80 = (code ****)0x0;
      pppppcStack_a8 = &ppppcStack_80;
      FUN_100482ae0(&pppppcStack_a8);
    }
    puVar8 = param_1 + 0x15;
    puVar15 = (undefined8 *)param_1[0x14];
    if (puVar15 < (undefined8 *)*puVar8) {
      puVar17 = puVar15 + 1;
      *puVar15 = puVar6;
LAB_1004827cc:
      param_1[0x14] = (ulong)puVar17;
      goto LAB_100482844;
    }
    lVar16 = (long)((long)puVar15 - *puVar14) >> 3;
    uVar1 = lVar16 + 1;
    if (uVar1 >> 0x3d == 0) {
      uVar10 = (long)*puVar8 - *puVar14;
      uVar12 = (long)uVar10 >> 2;
      if (uVar12 <= uVar1) {
        uVar12 = uVar1;
      }
      if (0x7ffffffffffffff7 < uVar10) {
        uVar12 = 0x1fffffffffffffff;
      }
      if (uVar12 == 0) {
        puVar8 = (ulong *)0x0;
      }
      else {
        func_0x000100482984();
      }
      puVar13 = puVar8 + lVar16;
      puVar17 = puVar13 + 1;
      *puVar13 = (ulong)puVar6;
      puVar6 = (ulong *)param_1[0x13];
      puVar9 = (ulong *)param_1[0x14];
      if (puVar9 != puVar6) {
        do {
          puVar9 = puVar9 + -1;
          puVar13 = puVar13 + -1;
          *puVar13 = *puVar9;
        } while (puVar9 != puVar6);
        puVar9 = (ulong *)*puVar14;
      }
      param_1[0x13] = (ulong)puVar13;
      param_1[0x14] = (ulong)puVar17;
      param_1[0x15] = (ulong)(puVar8 + uVar12);
      if (puVar9 != (ulong *)0x0) {
        func_0x000107c60e14();
      }
      goto LAB_1004827cc;
    }
  }
  func_0x000104ac9228(puVar14);
LAB_100482898:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10048289c);
  (*pcVar5)();
}



/* Entry: 100482900; end: 1004829b7;  */

void FUN_100482900(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puStack_28;
  
  if (param_2 != (undefined8 *)0x0) {
    FUN_100482900(param_1,*param_2);
    FUN_100482900(param_1,param_2[1]);
    puStack_28 = param_2 + 0xe;
    FUN_100482ae0(&puStack_28);
    FUN_100482900(param_2 + 0xb,param_2[0xc]);
    if (*(char *)((long)param_2 + 0x57) < '\0') {
      func_0x000107c60e14(param_2[8]);
    }
    if (*(char *)((long)param_2 + 0x37) < '\0') {
      func_0x000107c60e14(param_2[4]);
    }
    func_0x000107c60e14(param_2);
  }
  return;
}



/* Entry: 1004829b8; end: 100482adf;  */

void FUN_1004829b8(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  *param_1 = *param_2;
  *param_2 = 0;
  iVar2 = *param_1;
  if (iVar2 - 3U < 2) {
    if (*(char *)((long)param_1 + 0x1f) < '\0') {
      func_0x000107c60e14(*(undefined8 *)(param_1 + 2));
    }
    uVar8 = *(undefined8 *)(param_2 + 4);
    uVar7 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = uVar8;
    *(undefined8 *)(param_1 + 2) = uVar7;
    *(undefined1 *)((long)param_2 + 0x1f) = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    if (iVar2 == 5) {
      piVar1 = param_1 + 8;
      plVar6 = (long *)(param_1 + 10);
      FUN_100482900(piVar1,*plVar6);
      *(undefined8 *)piVar1 = *(undefined8 *)(param_2 + 8);
      plVar3 = (long *)(param_2 + 10);
      lVar4 = *plVar3;
      *plVar6 = lVar4;
      lVar5 = *(long *)(param_2 + 0xc);
      *(long *)(param_1 + 0xc) = lVar5;
      if (lVar5 == 0) {
        *(long **)piVar1 = plVar6;
      }
      else {
        *(long **)(lVar4 + 0x10) = plVar6;
        *(long **)(param_2 + 8) = plVar3;
        *plVar3 = 0;
        param_2[0xc] = 0;
        param_2[0xd] = 0;
      }
      return;
    }
    if (iVar2 == 6) {
      func_0x000104a7781c(param_1 + 0xe);
      uVar7 = *(undefined8 *)(param_2 + 0xe);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_1 + 0xe) = uVar7;
      *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
      param_2[0xe] = 0;
      param_2[0xf] = 0;
      param_2[0x10] = 0;
      param_2[0x11] = 0;
      param_2[0x12] = 0;
      param_2[0x13] = 0;
    }
  }
  return;
}



/* Entry: 100482ae0; end: 100482be7;  */

void FUN_100482ae0(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar2 = plVar3[1];
    lVar1 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x50;
        func_0x0001004c74fc(plVar3 + 2,lVar2);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 100482be8; end: 100482d07;  */

void FUN_100482be8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 auStack_b0 [2];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  
  uVar1 = 0xd8;
  func_0x000107c60e20();
  uVar2 = *param_2;
  uStack_58 = param_3[1];
  uStack_60 = *param_3;
  lStack_50 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  auStack_b0[0] = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  puStack_90 = &uStack_88;
  uStack_88 = 0;
  uStack_80 = 0;
  lStack_98 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_78 = 0;
  FUN_1004829b8(auStack_b0,param_4);
  FUN_100482d08(uVar1,uVar2,&uStack_60,auStack_b0,*param_5);
  puStack_48 = &uStack_78;
  *param_1 = uVar1;
  FUN_100482ae0(&puStack_48);
  FUN_100482900(&puStack_90,uStack_88);
  if (lStack_98 < 0) {
    func_0x000107c60e14(uStack_a8);
  }
  if (lStack_50 < 0) {
    func_0x000107c60e14(uStack_60);
  }
  return;
}



/* Entry: 100482d08; end: 100483017;  */

undefined8 *
FUN_100482d08(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  long lVar1;
  undefined8 ***pppuVar2;
  undefined8 **ppuVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uStack_a1;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 **ppuStack_48;
  
  *param_1 = &PTR_DAT_1107c6c08;
  param_1[1] = 1;
  uVar6 = param_3[1];
  uVar5 = *param_3;
  param_1[4] = param_3[2];
  param_1[3] = uVar6;
  param_1[2] = uVar5;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  piVar4 = (int *)(param_1 + 5);
  *piVar4 = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[10] = 0;
  param_1[8] = 0;
  param_1[9] = param_1 + 10;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  FUN_1004829b8(piVar4,param_4);
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0x3f800000;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  if (*piVar4 == 5) {
    puStack_78 = (undefined8 **)0x0;
    puStack_70 = (undefined8 **)0x0;
    uStack_68 = 0;
    uStack_80 = 0;
    lVar1 = lRam0000000113815be8;
    if (lRam0000000113815be8 == 0) {
      FUN_100472138();
    }
    FUN_100483018(&ppuStack_a0,lVar1 + 0xd8,param_2,piVar4,&uStack_80);
    FUN_100484ed4(param_1 + 0xf);
    param_1[0x10] = uStack_98;
    param_1[0xf] = ppuStack_a0;
    param_1[0x11] = uStack_90;
    uStack_98 = 0;
    uStack_90 = 0;
    ppuStack_a0 = (undefined8 **)0x0;
    ppuStack_48 = &ppuStack_a0;
    func_0x000100484f44(&ppuStack_48);
    if (uStack_80 != 0) {
      func_0x000104a83d48(&puStack_78,&uStack_80);
    }
    FUN_100484fc0(&ppuStack_a0,param_1,param_2);
    if (ppuStack_a0 != (undefined8 **)0x0) {
      func_0x000104a83d48(&puStack_78,&ppuStack_a0);
    }
    if (puStack_78 != puStack_70) {
      FUN_1004853bc(&ppuStack_48,&uStack_a1,"Service config parsing error",0x1c,&puStack_78);
      pppuVar2 = (undefined8 ***)*param_5;
      if ((undefined8 ***)ppuStack_48 != pppuVar2) {
        *param_5 = ppuStack_48;
        ppuStack_48 = (undefined8 ***)0x36;
        if (((ulong)pppuVar2 & 1) == 0) goto LAB_100482ea4;
        FUN_10084dad0();
        pppuVar2 = (undefined8 ***)ppuStack_48;
      }
      if (((ulong)pppuVar2 & 1) != 0) {
        FUN_10084dad0();
      }
    }
LAB_100482ea4:
    if (((ulong)ppuStack_a0 & 1) != 0) {
      FUN_10084dad0();
    }
    if ((uStack_80 & 1) != 0) {
      FUN_10084dad0();
    }
    ppuStack_a0 = &puStack_78;
    pppuVar2 = &ppuStack_a0;
    goto LAB_100482f30;
  }
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  func_0x000104ab5920(&ppuStack_a0,2,"JSON value is not an object",0x1b,&ppuStack_48,&uStack_60);
  ppuVar3 = (undefined8 **)*param_5;
  if (ppuStack_a0 == ppuVar3) {
LAB_100482f1c:
    if (((ulong)ppuVar3 & 1) != 0) {
      FUN_10084dad0();
    }
  }
  else {
    *param_5 = ppuStack_a0;
    ppuStack_a0 = (undefined8 **)0x36;
    if (((ulong)ppuVar3 & 1) != 0) {
      FUN_10084dad0();
      ppuVar3 = ppuStack_a0;
      goto LAB_100482f1c;
    }
  }
  puStack_78 = &uStack_60;
  pppuVar2 = (undefined8 ***)&puStack_78;
LAB_100482f30:
  func_0x000100482b64(pppuVar2);
  return param_1;
}



/* Entry: 100483018; end: 1004832c3;  */

void FUN_100483018(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  ulong uVar1;
  long *plVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long lStack_78;
  long *plStack_70;
  ulong uStack_68;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lStack_a8 = 0;
  lStack_a0 = 0;
  uStack_98 = 0;
  lVar10 = *param_2;
  if (param_2[1] != lVar10) {
    uVar9 = 0;
    plVar5 = param_1 + 2;
    do {
      uStack_68 = 0;
      plVar4 = *(long **)(lVar10 + uVar9 * 8);
      (**(code **)(*plVar4 + 0x18))(&plStack_b0,plVar4,param_3,param_4,&uStack_68);
      if (uStack_68 != 0) {
        func_0x000104a83d48(&lStack_a8,&uStack_68);
      }
      plVar7 = plStack_b0;
      plVar4 = (long *)param_1[1];
      if (plVar4 < (long *)param_1[2]) {
        plStack_b0 = (long *)0x0;
        plVar11 = plVar4 + 1;
        *plVar4 = (long)plVar7;
      }
      else {
        lVar10 = (long)plVar4 - *param_1 >> 3;
        uVar1 = lVar10 + 1;
        if (uVar1 >> 0x3d != 0) {
          func_0x000104ad710c(param_1);
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100483254);
          (*pcVar3)();
        }
        uVar6 = param_1[2] - *param_1;
        uVar8 = (long)uVar6 >> 2;
        if (uVar8 <= uVar1) {
          uVar8 = uVar1;
        }
        if (0x7ffffffffffffff7 < uVar6) {
          uVar8 = 0x1fffffffffffffff;
        }
        plStack_70 = plVar5;
        if (uVar8 == 0) {
          plVar4 = (long *)0x0;
        }
        else {
          plVar4 = plVar5;
          FUN_100484170();
        }
        plVar2 = plStack_b0;
        plVar7 = plVar4 + lVar10;
        plStack_b0 = (long *)0x0;
        plVar11 = plVar7 + 1;
        *plVar7 = (long)plVar2;
        plVar2 = (long *)*param_1;
        plStack_90 = (long *)param_1[1];
        plStack_80 = plStack_90;
        if (plStack_90 != plVar2) {
          do {
            plStack_90 = plStack_90 + -1;
            lVar10 = *plStack_90;
            *plStack_90 = 0;
            plVar7 = plVar7 + -1;
            *plVar7 = lVar10;
          } while (plStack_90 != plVar2);
          plStack_90 = (long *)*param_1;
          plStack_80 = (long *)param_1[1];
        }
        *param_1 = (long)plVar7;
        param_1[1] = (long)plVar11;
        lStack_78 = param_1[2];
        param_1[2] = (long)(plVar4 + uVar8);
        plStack_88 = plStack_90;
        func_0x0001004841a4(&plStack_90);
      }
      plVar4 = plStack_b0;
      param_1[1] = (long)plVar11;
      plStack_b0 = (long *)0x0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      if ((uStack_68 & 1) != 0) {
        FUN_10084dad0();
      }
      uVar9 = uVar9 + 1;
      lVar10 = *param_2;
    } while (uVar9 < (ulong)(param_2[1] - lVar10 >> 3));
    if (lStack_a8 != lStack_a0) {
      func_0x000104ad6dac(&plStack_90,&uStack_68,"Global Params",0xd,&lStack_a8);
      plVar5 = (long *)*param_5;
      if (plStack_90 != plVar5) {
        *param_5 = plStack_90;
        plStack_90 = (long *)0x36;
        if (((ulong)plVar5 & 1) == 0) goto LAB_100483218;
        FUN_10084dad0();
        plVar5 = plStack_90;
      }
      if (((ulong)plVar5 & 1) != 0) {
        FUN_10084dad0();
      }
    }
  }
LAB_100483218:
  plStack_90 = &lStack_a8;
  func_0x000100482b64(&plStack_90);
  return;
}



/* Entry: 1004832c4; end: 100484043;  */

/* WARNING: Removing unreachable block (ram,0x0001004838cc) */
/* WARNING: Removing unreachable block (ram,0x0001004834a4) */
/* WARNING: Removing unreachable block (ram,0x000100483330) */
/* WARNING: Removing unreachable block (ram,0x000100483874) */
/* WARNING: Removing unreachable block (ram,0x000100483c1c) */

void FUN_1004832c4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  ulong *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 ***pppuVar4;
  undefined7 uVar5;
  undefined7 uVar6;
  byte bVar7;
  ulong **ppuVar8;
  code *pcVar9;
  undefined1 uVar10;
  ulong ***pppuVar11;
  undefined8 ****ppppuVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 ****ppppuVar16;
  undefined1 extraout_w13;
  undefined1 uVar17;
  long *plVar18;
  long lVar19;
  ulong uVar20;
  undefined8 ***pppuStack_1c0;
  ulong *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 ***pppuStack_170;
  undefined7 uStack_168;
  undefined1 uStack_161;
  undefined7 uStack_160;
  byte bStack_159;
  long lStack_158;
  ulong **ppuStack_150;
  ulong **ppuStack_148;
  ulong **ppuStack_140;
  ulong **ppuStack_138;
  ulong **ppuStack_130;
  ulong **ppuStack_128;
  ulong **ppuStack_120;
  undefined8 ***pppuStack_118;
  ulong uStack_110;
  ulong uStack_108;
  undefined1 uStack_f9;
  ulong **ppuStack_f8;
  undefined1 auStack_f0 [8];
  byte bStack_e8;
  undefined6 uStack_e7;
  undefined1 uStack_e1;
  undefined7 uStack_e0;
  undefined1 uStack_d9;
  char cStack_d1;
  char cStack_d0;
  undefined8 ***pppuStack_b8;
  undefined7 uStack_b0;
  undefined1 uStack_a9;
  undefined7 uStack_a8;
  undefined1 uStack_a1;
  char cStack_a0;
  undefined8 uStack_88;
  undefined7 uStack_80;
  undefined1 uStack_79;
  ulong ***pppuStack_78;
  ulong ***pppuStack_70;
  ulong ***pppuStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_158 = 0;
  ppuStack_150 = (ulong **)0x0;
  ppuStack_148 = (ulong **)0x0;
  FUN_10002b024(&uStack_88,"loadBalancingConfig");
  lVar15 = param_4 + 0x20;
  lVar19 = lVar15;
  FUN_100484044(lVar15,&uStack_88);
  param_4 = param_4 + 0x28;
  if (param_4 == lVar19) {
    plVar18 = (long *)0x0;
LAB_100483474:
    pppuStack_170 = (undefined8 ****)0x0;
    uStack_168 = 0;
    uStack_161 = 0;
    uStack_160 = 0;
    bStack_159 = 0;
    FUN_10002b024(&uStack_88,"loadBalancingPolicy");
    lVar19 = lVar15;
    FUN_100484044(lVar15,&uStack_88);
    if (param_4 != lVar19) {
      if (*(int *)(lVar19 + 0x38) == 4) {
        func_0x000107c60ca4(&pppuStack_170,lVar19 + 0x40);
        uVar20 = 0;
        do {
          if ((char)bStack_159 < '\0') {
            ppppuVar16 = (undefined8 ****)pppuStack_170;
            if (CONCAT17(uStack_161,uStack_168) <= uVar20) goto LAB_1004835dc;
          }
          else if (bStack_159 <= uVar20) goto LAB_100483578;
          ppppuVar16 = (undefined8 ****)pppuStack_170;
          if (-1 < (char)bStack_159) {
            ppppuVar16 = &pppuStack_170;
          }
          uVar10 = *(undefined1 *)((long)ppppuVar16 + uVar20);
          func_0x000107c60e80();
          ppppuVar16 = (undefined8 ****)pppuStack_170;
          if (-1 < (char)bStack_159) {
            ppppuVar16 = &pppuStack_170;
          }
          *(undefined1 *)((long)ppppuVar16 + uVar20) = uVar10;
          uVar20 = uVar20 + 1;
        } while( true );
      }
      uStack_180 = 0;
      uStack_178 = 0;
      uStack_188 = 0;
      func_0x000104ab5920(&bStack_e8,2,"field:loadBalancingPolicy error:type should be string",0x35,
                          &ppuStack_140,&uStack_188);
      if (ppuStack_150 < ppuStack_148) {
        *ppuStack_150 = (ulong *)CONCAT17(uStack_e1,CONCAT61(uStack_e7,bStack_e8));
        bStack_e8 = 0x36;
        uStack_e7 = 0;
        uStack_e1 = 0;
        ppuStack_150 = ppuStack_150 + 1;
      }
      else {
        lVar19 = (long)ppuStack_150 - lStack_158 >> 3;
        uVar20 = lVar19 + 1;
        if (uVar20 >> 0x3d != 0) {
          func_0x000104a83ee4(&lStack_158);
          goto LAB_100483d58;
        }
        pppuVar11 = &ppuStack_148;
        uVar13 = (long)ppuStack_148 - lStack_158 >> 2;
        if (uVar13 <= uVar20) {
          uVar13 = uVar20;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)ppuStack_148 - lStack_158)) {
          uVar13 = 0x1fffffffffffffff;
        }
        pppuStack_68 = pppuVar11;
        if (uVar13 == 0) {
          pppuStack_70 = (ulong ***)0x0;
        }
        else {
          func_0x000104a83ef8();
          pppuStack_70 = pppuVar11;
        }
        pppuVar11 = pppuStack_70 + lVar19;
        uStack_88._0_7_ = SUB87(pppuStack_70,0);
        uStack_88._7_1_ = (undefined1)((ulong)pppuStack_70 >> 0x38);
        uStack_80 = SUB87(pppuVar11,0);
        uStack_79 = (undefined1)((ulong)pppuVar11 >> 0x38);
        pppuStack_70 = pppuStack_70 + uVar13;
        *pppuVar11 = (ulong **)CONCAT17(uStack_e1,CONCAT61(uStack_e7,bStack_e8));
        bStack_e8 = 0x36;
        uStack_e7 = 0;
        uStack_e1 = 0;
        pppuStack_78 = pppuVar11 + 1;
        func_0x000104a83e70(&lStack_158,&uStack_88);
        ppuVar8 = ppuStack_150;
        func_0x000104a84040(&uStack_88);
        ppuStack_150 = ppuVar8;
        if ((bStack_e8 & 1) != 0) {
          FUN_10084dad0();
        }
      }
      puVar14 = &uStack_188;
      goto LAB_100483838;
    }
    goto LAB_100483844;
  }
  ppuStack_140 = (ulong **)0x0;
  FUN_1004c6cfc(&uStack_88,lVar19 + 0x38,&ppuStack_140);
  plVar18 = (long *)CONCAT17(uStack_88._7_1_,(undefined7)uStack_88);
  if (ppuStack_140 == (ulong **)0x0) goto LAB_100483474;
  pppuStack_b8 = (undefined8 ****)0x0;
  uStack_b0 = 0;
  uStack_a9 = 0;
  uStack_a8 = 0;
  uStack_a1 = 0;
  func_0x000104a83d48(&pppuStack_b8,&ppuStack_140);
  FUN_1004840d0(&bStack_e8,&pppuStack_118,"field:loadBalancingConfig",0x19,&pppuStack_b8);
  if (ppuStack_150 < ppuStack_148) {
    *ppuStack_150 = (ulong *)CONCAT17(uStack_e1,CONCAT61(uStack_e7,bStack_e8));
    ppuStack_150 = ppuStack_150 + 1;
LAB_100483458:
    uStack_88._0_7_ = SUB87(&pppuStack_b8,0);
    uStack_88._7_1_ = (undefined1)((ulong)&pppuStack_b8 >> 0x38);
    func_0x000100482b64(&uStack_88);
    if (((ulong)ppuStack_140 & 1) != 0) {
      FUN_10084dad0();
    }
    goto LAB_100483474;
  }
  lVar19 = (long)ppuStack_150 - lStack_158 >> 3;
  uVar20 = lVar19 + 1;
  if (uVar20 >> 0x3d == 0) {
    pppuVar11 = &ppuStack_148;
    uVar13 = (long)ppuStack_148 - lStack_158 >> 2;
    if (uVar13 <= uVar20) {
      uVar13 = uVar20;
    }
    if (0x7ffffffffffffff7 < (ulong)((long)ppuStack_148 - lStack_158)) {
      uVar13 = 0x1fffffffffffffff;
    }
    pppuStack_68 = pppuVar11;
    if (uVar13 == 0) {
      pppuStack_70 = (ulong ***)0x0;
    }
    else {
      func_0x000104a83ef8();
      pppuStack_70 = pppuVar11;
    }
    pppuVar11 = pppuStack_70 + lVar19;
    uStack_88._0_7_ = SUB87(pppuStack_70,0);
    uStack_88._7_1_ = (undefined1)((ulong)pppuStack_70 >> 0x38);
    uStack_80 = SUB87(pppuVar11,0);
    uStack_79 = (undefined1)((ulong)pppuVar11 >> 0x38);
    pppuStack_70 = pppuStack_70 + uVar13;
    *pppuVar11 = (ulong **)CONCAT17(uStack_e1,CONCAT61(uStack_e7,bStack_e8));
    bStack_e8 = 0x36;
    uStack_e7 = 0;
    uStack_e1 = 0;
    pppuStack_78 = pppuVar11 + 1;
    func_0x000104a83e70(&lStack_158,&uStack_88);
    ppuVar8 = ppuStack_150;
    func_0x000104a84040(&uStack_88);
    ppuStack_150 = ppuVar8;
    if ((bStack_e8 & 1) != 0) {
      FUN_10084dad0();
    }
    goto LAB_100483458;
  }
  goto LAB_100483d20;
LAB_100483578:
  ppppuVar16 = &pppuStack_170;
LAB_1004835dc:
  pppuStack_1c0 = (undefined8 ***)((ulong)pppuStack_1c0 & 0xffffffffffffff00);
  FUN_1004c7394(ppppuVar16,&pppuStack_1c0);
  if (((ulong)ppppuVar16 & 1) == 0) {
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_1a0 = 0;
    func_0x000104ab5920(&bStack_e8,2,"field:loadBalancingPolicy error:Unknown lb policy",0x31,
                        &ppuStack_140,&uStack_1a0);
    if (ppuStack_150 < ppuStack_148) {
      *ppuStack_150 = (ulong *)CONCAT17(uStack_e1,CONCAT61(uStack_e7,bStack_e8));
      bStack_e8 = 0x36;
      uStack_e7 = 0;
      uStack_e1 = 0;
      ppuStack_150 = ppuStack_150 + 1;
    }
    else {
      lVar19 = (long)ppuStack_150 - lStack_158 >> 3;
      uVar20 = lVar19 + 1;
      if (uVar20 >> 0x3d != 0) {
        func_0x000104a83ee4(&lStack_158);
        goto LAB_100483d58;
      }
      pppuVar11 = &ppuStack_148;
      uVar13 = (long)ppuStack_148 - lStack_158 >> 2;
      if (uVar13 <= uVar20) {
        uVar13 = uVar20;
      }
      if (0x7ffffffffffffff7 < (ulong)((long)ppuStack_148 - lStack_158)) {
        uVar13 = 0x1fffffffffffffff;
      }
      pppuStack_68 = pppuVar11;
      if (uVar13 == 0) {
        pppuStack_70 = (ulong ***)0x0;
      }
      else {
        func_0x000104a83ef8();
        pppuStack_70 = pppuVar11;
      }
      pppuVar11 = pppuStack_70 + lVar19;
      uStack_88._0_7_ = SUB87(pppuStack_70,0);
      uStack_88._7_1_ = (undefined1)((ulong)pppuStack_70 >> 0x38);
      uStack_80 = SUB87(pppuVar11,0);
      uStack_79 = (undefined1)((ulong)pppuVar11 >> 0x38);
      pppuStack_70 = pppuStack_70 + uVar13;
      *pppuVar11 = (ulong **)CONCAT17(uStack_e1,CONCAT61(uStack_e7,bStack_e8));
      bStack_e8 = 0x36;
      uStack_e7 = 0;
      uStack_e1 = 0;
      pppuStack_78 = pppuVar11 + 1;
      func_0x000104a83e70(&lStack_158,&uStack_88);
      ppuVar8 = ppuStack_150;
      func_0x000104a84040(&uStack_88);
      ppuStack_150 = ppuVar8;
      if ((bStack_e8 & 1) != 0) {
        FUN_10084dad0();
      }
    }
    puVar14 = &uStack_1a0;
LAB_100483838:
    uStack_88._0_7_ = SUB87(puVar14,0);
    uStack_88._7_1_ = (undefined1)((ulong)puVar14 >> 0x38);
    func_0x000100482b64(&uStack_88);
  }
  else if ((char)pppuStack_1c0 != '\0') {
    uStack_88._0_7_ = 0x10f2319d9;
    uStack_88._7_1_ = 0;
    uStack_80 = 0x20;
    uStack_79 = 0;
    uVar20 = CONCAT17(uStack_161,uStack_168);
    pppuStack_b8 = pppuStack_170;
    if (-1 < (char)bStack_159) {
      uVar20 = (ulong)bStack_159;
      pppuStack_b8 = &pppuStack_170;
    }
    uStack_b0 = (undefined7)uVar20;
    uStack_a9 = (undefined1)(uVar20 >> 0x38);
    bStack_e8 = 0xfa;
    uStack_e7 = 0x10f2319;
    uStack_e1 = 0;
    uStack_e0 = 0x3b;
    uStack_d9 = 0;
    FUN_100066c24(&pppuStack_118,&uStack_88,&pppuStack_b8,&bStack_e8);
    uVar20 = uStack_110;
    ppppuVar16 = (undefined8 ****)pppuStack_118;
    if (-1 < (long)uStack_108) {
      uVar20 = uStack_108 >> 0x38;
      ppppuVar16 = &pppuStack_118;
    }
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    puStack_1b8 = (ulong *)0x0;
    func_0x000104ab5920(&ppuStack_f8,2,ppppuVar16,uVar20,&uStack_f9,&puStack_1b8);
    if (ppuStack_150 < ppuStack_148) {
      *ppuStack_150 = (ulong *)ppuStack_f8;
      ppuStack_f8 = (ulong **)0x36;
      ppuStack_150 = ppuStack_150 + 1;
    }
    else {
      lVar19 = (long)ppuStack_150 - lStack_158 >> 3;
      uVar20 = lVar19 + 1;
      if (uVar20 >> 0x3d != 0) {
        func_0x000104a83ee4(&lStack_158);
        goto LAB_100483d58;
      }
      pppuVar11 = &ppuStack_148;
      uVar13 = (long)ppuStack_148 - lStack_158 >> 2;
      if (uVar13 <= uVar20) {
        uVar13 = uVar20;
      }
      if (0x7ffffffffffffff7 < (ulong)((long)ppuStack_148 - lStack_158)) {
        uVar13 = 0x1fffffffffffffff;
      }
      ppuStack_120 = (ulong **)pppuVar11;
      if (uVar13 == 0) {
        ppuStack_140 = (ulong **)0x0;
      }
      else {
        func_0x000104a83ef8();
        ppuStack_140 = (ulong **)pppuVar11;
      }
      ppuStack_138 = ppuStack_140 + lVar19;
      ppuStack_128 = ppuStack_140 + uVar13;
      pppuVar11 = (ulong ***)(ppuStack_138 + 1);
      *ppuStack_138 = (ulong *)ppuStack_f8;
      ppuStack_f8 = (ulong **)0x36;
      ppuStack_130 = (ulong **)pppuVar11;
      func_0x000104a83e70(&lStack_158,&ppuStack_140);
      ppuVar8 = ppuStack_150;
      func_0x000104a84040(&ppuStack_140);
      ppuStack_150 = ppuVar8;
      if (((ulong)ppuStack_f8 & 1) != 0) {
        FUN_10084dad0();
      }
    }
    ppuStack_140 = &puStack_1b8;
    func_0x000100482b64(&ppuStack_140);
    if ((long)uStack_108 < 0) {
      func_0x000107c60e14(pppuStack_118);
    }
  }
LAB_100483844:
  pppuStack_b8 = (undefined8 ***)((ulong)pppuStack_b8 & 0xffffffffffffff00);
  cStack_a0 = '\0';
  FUN_10002b024(&uStack_88,"healthCheckConfig");
  FUN_100484044(lVar15,&uStack_88);
  if (param_4 != lVar15) {
    pppuStack_1c0 = (undefined8 ****)0x0;
    if (*(int *)(lVar15 + 0x38) == 5) {
      ppuStack_140 = (ulong **)0x0;
      ppuStack_138 = (ulong **)0x0;
      ppuStack_130 = (ulong **)0x0;
      bStack_e8 = 0;
      cStack_d0 = '\0';
      FUN_10002b024(&uStack_88,&DAT_10f3e193d);
      lVar19 = lVar15 + 0x58;
      FUN_100484044(lVar19,&uStack_88);
      if (lVar15 + 0x60 != lVar19) {
        if (*(int *)(lVar19 + 0x38) == 4) {
          func_0x000104a86e84(&bStack_e8,lVar19 + 0x40);
        }
        else {
          uStack_110 = 0;
          uStack_108 = 0;
          pppuStack_118 = (undefined8 ****)0x0;
          func_0x000104ab5920(&ppuStack_f8,2,"field:serviceName error:should be of type string",0x30
                              ,&uStack_f9,&pppuStack_118);
          if (ppuStack_138 < ppuStack_130) {
            *ppuStack_138 = (ulong *)ppuStack_f8;
            ppuStack_f8 = (ulong **)0x36;
            ppuStack_138 = ppuStack_138 + 1;
          }
          else {
            lVar15 = (long)ppuStack_138 - (long)ppuStack_140 >> 3;
            uVar20 = lVar15 + 1;
            if (uVar20 >> 0x3d != 0) {
              func_0x000104a83ee4(&ppuStack_140);
              goto LAB_100483d58;
            }
            pppuVar11 = &ppuStack_130;
            uVar13 = (long)ppuStack_130 - (long)ppuStack_140 >> 2;
            if (uVar13 <= uVar20) {
              uVar13 = uVar20;
            }
            if (0x7ffffffffffffff7 < (ulong)((long)ppuStack_130 - (long)ppuStack_140)) {
              uVar13 = 0x1fffffffffffffff;
            }
            pppuStack_68 = pppuVar11;
            if (uVar13 == 0) {
              pppuStack_70 = (ulong ***)0x0;
            }
            else {
              func_0x000104a83ef8();
              pppuStack_70 = pppuVar11;
            }
            pppuVar11 = pppuStack_70 + lVar15;
            uStack_88._0_7_ = SUB87(pppuStack_70,0);
            uStack_88._7_1_ = (undefined1)((ulong)pppuStack_70 >> 0x38);
            uStack_80 = SUB87(pppuVar11,0);
            uStack_79 = (undefined1)((ulong)pppuVar11 >> 0x38);
            pppuStack_70 = pppuStack_70 + uVar13;
            *pppuVar11 = ppuStack_f8;
            ppuStack_f8 = (ulong **)0x36;
            pppuStack_78 = pppuVar11 + 1;
            func_0x000104a83e70(&ppuStack_140,&uStack_88);
            ppuVar8 = ppuStack_138;
            func_0x000104a84040(&uStack_88);
            ppuStack_138 = ppuVar8;
            if (((ulong)ppuStack_f8 & 1) != 0) {
              FUN_10084dad0();
            }
          }
          uStack_88._0_7_ = SUB87(&pppuStack_118,0);
          uStack_88._7_1_ = (undefined1)((ulong)&pppuStack_118 >> 0x38);
          func_0x000100482b64(&uStack_88);
        }
      }
      FUN_1004840d0(&uStack_88,auStack_f0,"field:healthCheckConfig",0x17,&ppuStack_140);
      ppppuVar16 = (undefined8 ****)CONCAT17(uStack_88._7_1_,(undefined7)uStack_88);
      ppppuVar12 = (undefined8 ****)pppuStack_1c0;
      if (ppppuVar16 == (undefined8 ****)pppuStack_1c0) {
LAB_100483ab0:
        if (((ulong)ppppuVar12 & 1) != 0) {
          FUN_10084dad0();
        }
      }
      else {
        uStack_88._0_7_ = 0x36;
        uStack_88._7_1_ = 0;
        uVar20 = (ulong)pppuStack_1c0 & 1;
        pppuStack_1c0 = ppppuVar16;
        if (uVar20 != 0) {
          FUN_10084dad0();
          ppppuVar12 = (undefined8 ****)CONCAT17(uStack_88._7_1_,(undefined7)uStack_88);
          goto LAB_100483ab0;
        }
      }
      uStack_88._0_7_ = SUB87(&ppuStack_140,0);
      uStack_88._7_1_ = (undefined1)((ulong)&ppuStack_140 >> 0x38);
      func_0x000100482b64(&uStack_88);
    }
    else {
      uStack_80 = 0;
      uStack_79 = 0;
      pppuStack_78 = (ulong ***)0x0;
      uStack_88._0_7_ = 0;
      uStack_88._7_1_ = 0;
      func_0x000104ab5920(&pppuStack_118,2,"field:healthCheckConfig error:should be of type object",
                          0x36,auStack_f0,&uStack_88);
      pppuVar4 = pppuStack_1c0;
      ppppuVar16 = (undefined8 ****)pppuStack_1c0;
      if (pppuStack_118 == pppuStack_1c0) {
LAB_10048394c:
        if (((ulong)ppppuVar16 & 1) != 0) {
          FUN_10084dad0();
        }
      }
      else {
        pppuStack_1c0 = pppuStack_118;
        pppuStack_118 = (undefined8 ****)0x36;
        if (((ulong)pppuVar4 & 1) != 0) {
          FUN_10084dad0();
          ppppuVar16 = (undefined8 ****)pppuStack_118;
          goto LAB_10048394c;
        }
      }
      ppuStack_140 = (ulong **)&uStack_88;
      func_0x000100482b64(&ppuStack_140);
      bStack_e8 = 0;
      cStack_d0 = '\0';
    }
    func_0x000104a86eec(&pppuStack_b8,&bStack_e8);
    if ((cStack_d0 != '\0') && (cStack_d1 < '\0')) {
      func_0x000107c60e14(CONCAT17(uStack_e1,CONCAT61(uStack_e7,bStack_e8)));
    }
    if (((undefined8 ****)pppuStack_1c0 != (undefined8 ****)0x0) &&
       (func_0x000104a83d48(&lStack_158,&pppuStack_1c0), ((ulong)pppuStack_1c0 & 1) != 0)) {
      FUN_10084dad0();
    }
  }
  FUN_1004840d0(&uStack_88,&bStack_e8,"Client channel global parser",0x1c,&lStack_158);
  uVar13 = *param_5;
  uVar20 = CONCAT17(uStack_88._7_1_,(undefined7)uStack_88);
  if (uVar20 == uVar13) {
LAB_100483b50:
    if ((uVar13 & 1) != 0) {
      FUN_10084dad0();
    }
    uVar20 = *param_5;
  }
  else {
    *param_5 = uVar20;
    uStack_88._0_7_ = 0x36;
    uStack_88._7_1_ = 0;
    if ((uVar13 & 1) != 0) {
      FUN_10084dad0();
      uVar13 = CONCAT17(uStack_88._7_1_,(undefined7)uStack_88);
      goto LAB_100483b50;
    }
  }
  if (uVar20 == 0) {
    puVar14 = (undefined8 *)0x48;
    func_0x000107c60e20();
    uVar17 = uStack_a1;
    ppppuVar16 = (undefined8 ****)pppuStack_b8;
    bVar7 = bStack_159;
    uVar6 = uStack_160;
    uVar10 = uStack_161;
    uVar5 = uStack_168;
    pppuVar4 = pppuStack_170;
    uStack_88._0_7_ = uStack_168;
    uStack_88._7_1_ = uStack_161;
    uStack_80 = uStack_160;
    uStack_168 = 0;
    uStack_161 = 0;
    uStack_160 = 0;
    bStack_159 = 0;
    pppuStack_170 = (undefined8 ****)0x0;
    if (cStack_a0 == '\0') {
      ppppuVar16 = (undefined8 ****)0x0;
      uVar17 = extraout_w13;
    }
    else {
      bStack_e8 = (byte)uStack_b0;
      uStack_e7 = (undefined6)((uint7)uStack_b0 >> 8);
      uStack_e1 = uStack_a9;
      uStack_e0 = uStack_a8;
      uStack_b0 = 0;
      uStack_a9 = 0;
      uStack_a8 = 0;
      uStack_a1 = 0;
      pppuStack_b8 = (undefined8 ****)0x0;
    }
    *puVar14 = &PTR_DAT_1107c2ed0;
    puVar14[1] = plVar18;
    puVar14[2] = pppuVar4;
    puVar14[3] = CONCAT17(uVar10,uVar5);
    *(ulong *)((long)puVar14 + 0x1f) = CONCAT71(uVar6,uVar10);
    *(byte *)((long)puVar14 + 0x27) = bVar7;
    *(undefined1 *)(puVar14 + 5) = 0;
    *(undefined1 *)(puVar14 + 8) = 0;
    if (cStack_a0 != '\0') {
      puVar14[5] = ppppuVar16;
      puVar14[6] = CONCAT17(uStack_e1,CONCAT61(uStack_e7,bStack_e8));
      *(ulong *)((long)puVar14 + 0x37) = CONCAT71(uStack_e0,uStack_e1);
      *(undefined1 *)((long)puVar14 + 0x3f) = uVar17;
      *(undefined1 *)(puVar14 + 8) = 1;
    }
    plVar18 = (long *)0x0;
  }
  else {
    puVar14 = (undefined8 *)0x0;
  }
  *param_1 = puVar14;
  if ((char)bStack_159 < '\0') {
    func_0x000107c60e14(pppuStack_170);
  }
  if (plVar18 != (long *)0x0) {
    plVar1 = plVar18 + 1;
    do {
      lVar15 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar15 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar18 + 8))(plVar18);
    }
  }
  uStack_88._0_7_ = SUB87(&lStack_158,0);
  uStack_88._7_1_ = (undefined1)((ulong)&lStack_158 >> 0x38);
  func_0x000100482b64(&uStack_88);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  func_0x000107c60e78();
LAB_100483d20:
  func_0x000104a83ee4(&lStack_158);
LAB_100483d58:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x100483d5c);
  (*pcVar9)();
}



/* Entry: 100484044; end: 1004840cf;  */

long * FUN_100484044(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar4 = (long *)(param_1 + 8);
  plVar5 = (long *)*plVar4;
  if (plVar5 != (long *)0x0) {
    param_1 = param_1 + 0x10;
    plVar3 = plVar4;
    do {
      lVar2 = param_1;
      func_0x000104a77514(param_1,plVar5 + 4,param_2);
      plVar1 = plVar5 + 1;
      if ((int)lVar2 == 0) {
        plVar3 = plVar5;
        plVar1 = plVar5;
      }
      plVar5 = (long *)*plVar1;
    } while (plVar5 != (long *)0x0);
    if ((plVar3 != plVar4) && (func_0x000104a77514(param_1,param_2,plVar3 + 4), (int)param_1 == 0))
    {
      return plVar3;
    }
  }
  return plVar4;
}



/* Entry: 1004840d0; end: 10048416f;  */

void FUN_1004840d0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  long lVar1;
  long lVar2;
  long lStack_38;
  
  *param_1 = 0;
  if (param_5[1] - *param_5 != 0) {
    func_0x000104aba878(&lStack_38,2,param_3,param_4,param_2,param_5[1] - *param_5 >> 3);
    if (lStack_38 != 0) {
      *param_1 = lStack_38;
    }
    lVar1 = *param_5;
    lVar2 = param_5[1];
    if (lVar2 != lVar1) {
      do {
        lVar2 = lVar2 + -8;
        func_0x000104a713e4(param_5 + 2,lVar2);
      } while (lVar2 != lVar1);
    }
    param_5[1] = lVar1;
  }
  return;
}



/* Entry: 100484170; end: 100484203;  */

undefined1  [16] FUN_100484170(long *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
    func_0x000107c60e20(lVar1);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  func_0x000104a7757c();
  lVar1 = param_1[1];
  lVar3 = param_1[2];
  while (lVar3 != lVar1) {
    param_1[2] = lVar3 + -8;
    plVar2 = *(long **)(lVar3 + -8);
    *(undefined8 *)(lVar3 + -8) = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    lVar3 = param_1[2];
  }
  if (*param_1 != 0) {
    func_0x000107c60e14();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 100484204; end: 100484ecb;  */

void FUN_100484204(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  ulong *param_5)

{
  undefined1 auVar1 [16];
  char cVar2;
  char cVar3;
  undefined8 **ppuVar4;
  code *pcVar5;
  long *plVar6;
  ulong ****ppppuVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined1 uVar17;
  int iVar18;
  uint5 uVar19;
  undefined1 auVar20 [16];
  ulong uStack_e8;
  undefined1 uStack_d9;
  int iStack_d8;
  int iStack_d4;
  undefined8 **ppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 **ppuStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 ****ppppuStack_98;
  undefined8 **ppuStack_90;
  undefined8 **ppuStack_88;
  ulong ****ppppuStack_80;
  undefined8 ***pppuStack_78;
  undefined8 ***pppuStack_70;
  undefined8 ***pppuStack_68;
  undefined8 ***pppuStack_60;
  undefined8 **ppuStack_58;
  
  lVar13 = param_4 + 0x20;
  FUN_10002b024(&ppppuStack_80,"retryThrottling");
  FUN_100484044(lVar13,&ppppuStack_80);
  if ((long)pppuStack_70 < 0) {
    func_0x000107c60e14(ppppuStack_80);
  }
  if (param_4 + 0x28 != lVar13) {
    if (*(int *)(lVar13 + 0x38) == 5) {
      ppppuStack_98 = (ulong *****)0x0;
      ppuStack_90 = (ulong ***)0x0;
      ppuStack_88 = (ulong ***)0x0;
      FUN_10002b024(&ppppuStack_80,&DAT_10f6e8b21);
      lVar8 = lVar13 + 0x58;
      lVar16 = lVar8;
      FUN_100484044(lVar8,&ppppuStack_80);
      if ((long)pppuStack_70 < 0) {
        func_0x000107c60e14(ppppuStack_80);
      }
      if (lVar13 + 0x60 == lVar16) {
        uStack_a8 = 0;
        uStack_a0 = 0;
        ppuStack_b0 = (ulong ***)0x0;
        func_0x000104ab5920(&ppuStack_58,2,"field:retryThrottling field:maxTokens error:Not found",
                            0x35,&ppuStack_b8,&ppuStack_b0);
        if (ppuStack_90 < ppuStack_88) {
LAB_10048443c:
          *ppuStack_90 = ppuStack_58;
          ppuStack_58 = (ulong ***)0x36;
          ppuStack_90 = ppuStack_90 + 1;
        }
        else {
          lVar16 = (long)ppuStack_90 - (long)ppppuStack_98 >> 3;
          uVar14 = lVar16 + 1;
          if (uVar14 >> 0x3d != 0) {
            func_0x000104a83ee4(&ppppuStack_98);
            goto LAB_100484d64;
          }
          ppppuVar7 = (ulong ****)&ppuStack_88;
          uVar10 = (long)ppuStack_88 - (long)ppppuStack_98 >> 2;
          if (uVar10 <= uVar14) {
            uVar10 = uVar14;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)ppuStack_88 - (long)ppppuStack_98)) {
            uVar10 = 0x1fffffffffffffff;
          }
          pppuStack_60 = ppppuVar7;
          if (uVar10 == 0) {
            ppppuStack_80 = (ulong ****)0x0;
          }
          else {
            func_0x000104a83ef8();
            ppppuStack_80 = ppppuVar7;
          }
          pppuStack_78 = ppppuStack_80 + lVar16;
          pppuStack_68 = ppppuStack_80 + uVar10;
          ppppuVar7 = (ulong ****)(pppuStack_78 + 1);
          *pppuStack_78 = ppuStack_58;
          ppuStack_58 = (ulong ***)0x36;
          pppuStack_70 = ppppuVar7;
          func_0x000104a83e70(&ppppuStack_98,&ppppuStack_80);
          ppuVar4 = ppuStack_90;
          func_0x000104a84040(&ppppuStack_80);
          ppuStack_90 = ppuVar4;
          if (((ulong)ppuStack_58 & 1) != 0) {
            FUN_10084dad0();
          }
        }
LAB_100484598:
        ppppuStack_80 = (ulong ****)&ppuStack_b0;
        func_0x000100482b64(&ppppuStack_80);
        lVar16 = 0;
      }
      else {
        if (*(int *)(lVar16 + 0x38) != 3) {
          uStack_a8 = 0;
          uStack_a0 = 0;
          ppuStack_b0 = (ulong ***)0x0;
          func_0x000104ab5920(&ppuStack_58,2,
                              "field:retryThrottling field:maxTokens error:Type should be number",
                              0x41,&ppuStack_b8,&ppuStack_b0);
          if (ppuStack_90 < ppuStack_88) goto LAB_10048443c;
          lVar16 = (long)ppuStack_90 - (long)ppppuStack_98 >> 3;
          uVar14 = lVar16 + 1;
          if (uVar14 >> 0x3d != 0) {
            func_0x000104a83ee4(&ppppuStack_98);
            goto LAB_100484d64;
          }
          ppppuVar7 = (ulong ****)&ppuStack_88;
          uVar10 = (long)ppuStack_88 - (long)ppppuStack_98 >> 2;
          if (uVar10 <= uVar14) {
            uVar10 = uVar14;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)ppuStack_88 - (long)ppppuStack_98)) {
            uVar10 = 0x1fffffffffffffff;
          }
          pppuStack_60 = ppppuVar7;
          if (uVar10 == 0) {
            ppppuStack_80 = (ulong ****)0x0;
          }
          else {
            func_0x000104a83ef8();
            ppppuStack_80 = ppppuVar7;
          }
          pppuStack_78 = ppppuStack_80 + lVar16;
          pppuStack_68 = ppppuStack_80 + uVar10;
          ppppuVar7 = (ulong ****)(pppuStack_78 + 1);
          *pppuStack_78 = ppuStack_58;
          ppuStack_58 = (ulong ***)0x36;
          pppuStack_70 = ppppuVar7;
          func_0x000104a83e70(&ppppuStack_98,&ppppuStack_80);
          ppuVar4 = ppuStack_90;
          func_0x000104a84040(&ppppuStack_80);
          ppuStack_90 = ppuVar4;
          if (((ulong)ppuStack_58 & 1) != 0) {
            FUN_10084dad0();
          }
          goto LAB_100484598;
        }
        plVar6 = (long *)(lVar16 + 0x40);
        if (*(char *)(lVar16 + 0x57) < '\0') {
          plVar6 = (long *)*plVar6;
        }
        iVar12 = (int)plVar6;
        func_0x000104a6f25c();
        lVar16 = (long)(iVar12 * 1000);
        if (iVar12 < 1) {
          uStack_a8 = 0;
          uStack_a0 = 0;
          ppuStack_b0 = (ulong ***)0x0;
          func_0x000104ab5920(&ppuStack_58,2,
                              "field:retryThrottling field:maxTokens error:should be greater than zero"
                              ,0x47,&ppuStack_b8,&ppuStack_b0);
          if (ppuStack_90 < ppuStack_88) {
            *ppuStack_90 = ppuStack_58;
            ppuStack_58 = (ulong ***)0x36;
            ppuStack_90 = ppuStack_90 + 1;
          }
          else {
            lVar15 = (long)ppuStack_90 - (long)ppppuStack_98 >> 3;
            uVar14 = lVar15 + 1;
            if (uVar14 >> 0x3d != 0) {
              func_0x000104a83ee4(&ppppuStack_98);
              goto LAB_100484d64;
            }
            ppppuVar7 = (ulong ****)&ppuStack_88;
            uVar10 = (long)ppuStack_88 - (long)ppppuStack_98 >> 2;
            if (uVar10 <= uVar14) {
              uVar10 = uVar14;
            }
            if (0x7ffffffffffffff7 < (ulong)((long)ppuStack_88 - (long)ppppuStack_98)) {
              uVar10 = 0x1fffffffffffffff;
            }
            pppuStack_60 = ppppuVar7;
            if (uVar10 == 0) {
              ppppuStack_80 = (ulong ****)0x0;
            }
            else {
              func_0x000104a83ef8();
              ppppuStack_80 = ppppuVar7;
            }
            pppuStack_78 = ppppuStack_80 + lVar15;
            pppuStack_68 = ppppuStack_80 + uVar10;
            ppppuVar7 = (ulong ****)(pppuStack_78 + 1);
            *pppuStack_78 = ppuStack_58;
            ppuStack_58 = (ulong ***)0x36;
            pppuStack_70 = ppppuVar7;
            func_0x000104a83e70(&ppppuStack_98,&ppppuStack_80);
            ppuVar4 = ppuStack_90;
            func_0x000104a84040(&ppppuStack_80);
            ppuStack_90 = ppuVar4;
            if (((ulong)ppuStack_58 & 1) != 0) {
              FUN_10084dad0();
            }
          }
          ppppuStack_80 = (ulong ****)&ppuStack_b0;
          func_0x000100482b64(&ppppuStack_80);
        }
      }
      FUN_10002b024(&ppppuStack_80,"tokenRatio");
      FUN_100484044(lVar8,&ppppuStack_80);
      if ((long)pppuStack_70 < 0) {
        func_0x000107c60e14(ppppuStack_80);
      }
      if (lVar13 + 0x60 == lVar8) {
        uStack_c8 = 0;
        uStack_c0 = 0;
        ppuStack_d0 = (ulong ***)0x0;
        func_0x000104ab5920(&ppuStack_b8,2,"field:retryThrottling field:tokenRatio error:Not found",
                            0x36,&iStack_d4,&ppuStack_d0);
        if (ppuStack_90 < ppuStack_88) {
LAB_1004846bc:
          *ppuStack_90 = ppuStack_b8;
          ppuStack_b8 = (ulong ***)0x36;
          ppuStack_90 = ppuStack_90 + 1;
        }
        else {
          lVar13 = (long)ppuStack_90 - (long)ppppuStack_98 >> 3;
          uVar14 = lVar13 + 1;
          if (uVar14 >> 0x3d != 0) {
            func_0x000104a83ee4(&ppppuStack_98);
            goto LAB_100484d64;
          }
          ppppuVar7 = (ulong ****)&ppuStack_88;
          uVar10 = (long)ppuStack_88 - (long)ppppuStack_98 >> 2;
          if (uVar10 <= uVar14) {
            uVar10 = uVar14;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)ppuStack_88 - (long)ppppuStack_98)) {
            uVar10 = 0x1fffffffffffffff;
          }
          pppuStack_60 = ppppuVar7;
          if (uVar10 == 0) {
            ppppuStack_80 = (ulong ****)0x0;
          }
          else {
            func_0x000104a83ef8();
            ppppuStack_80 = ppppuVar7;
          }
          pppuStack_78 = ppppuStack_80 + lVar13;
          pppuStack_68 = ppppuStack_80 + uVar10;
          ppppuVar7 = (ulong ****)(pppuStack_78 + 1);
          *pppuStack_78 = ppuStack_b8;
          ppuStack_b8 = (ulong ***)0x36;
          pppuStack_70 = ppppuVar7;
          func_0x000104a83e70(&ppppuStack_98,&ppppuStack_80);
          ppuVar4 = ppuStack_90;
          func_0x000104a84040(&ppppuStack_80);
          ppuStack_90 = ppuVar4;
          if (((ulong)ppuStack_b8 & 1) != 0) {
            FUN_10084dad0();
          }
        }
LAB_100484990:
        ppppuStack_80 = (ulong ****)&ppuStack_d0;
        func_0x000100482b64(&ppppuStack_80);
        lVar13 = 0;
LAB_1004849a4:
        func_0x000104a8ce48(&uStack_e8,&ppppuStack_80,"retryThrottling",0xf,&ppppuStack_98);
      }
      else {
        if (*(int *)(lVar8 + 0x38) != 3) {
          uStack_c8 = 0;
          uStack_c0 = 0;
          ppuStack_d0 = (ulong ***)0x0;
          func_0x000104ab5920(&ppuStack_b8,2,
                              "field:retryThrottling field:tokenRatio error:type should be number",
                              0x42,&iStack_d4,&ppuStack_d0);
          if (ppuStack_90 < ppuStack_88) goto LAB_1004846bc;
          lVar13 = (long)ppuStack_90 - (long)ppppuStack_98 >> 3;
          uVar14 = lVar13 + 1;
          if (uVar14 >> 0x3d != 0) {
            func_0x000104a83ee4(&ppppuStack_98);
            goto LAB_100484d64;
          }
          ppppuVar7 = (ulong ****)&ppuStack_88;
          uVar10 = (long)ppuStack_88 - (long)ppppuStack_98 >> 2;
          if (uVar10 <= uVar14) {
            uVar10 = uVar14;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)ppuStack_88 - (long)ppppuStack_98)) {
            uVar10 = 0x1fffffffffffffff;
          }
          pppuStack_60 = ppppuVar7;
          if (uVar10 == 0) {
            ppppuStack_80 = (ulong ****)0x0;
          }
          else {
            func_0x000104a83ef8();
            ppppuStack_80 = ppppuVar7;
          }
          pppuStack_78 = ppppuStack_80 + lVar13;
          pppuStack_68 = ppppuStack_80 + uVar10;
          ppppuVar7 = (ulong ****)(pppuStack_78 + 1);
          *pppuStack_78 = ppuStack_b8;
          ppuStack_b8 = (ulong ***)0x36;
          pppuStack_70 = ppppuVar7;
          func_0x000104a83e70(&ppppuStack_98,&ppppuStack_80);
          ppuVar4 = ppuStack_90;
          func_0x000104a84040(&ppppuStack_80);
          ppuStack_90 = ppuVar4;
          if (((ulong)ppuStack_b8 & 1) != 0) {
            FUN_10084dad0();
          }
          goto LAB_100484990;
        }
        if ((char)*(byte *)(lVar8 + 0x57) < '\0') {
          lVar13 = *(long *)(lVar8 + 0x40);
          uVar14 = *(ulong *)(lVar8 + 0x48);
        }
        else {
          lVar13 = lVar8 + 0x40;
          uVar14 = (ulong)*(byte *)(lVar8 + 0x57);
        }
        iStack_d4 = 0;
        lVar8 = lVar13;
        func_0x000107c613bc(lVar13,0x2e);
        if (lVar8 == 0) {
          iVar12 = 1;
LAB_100484884:
          func_0x000104a6f15c(lVar13,uVar14,&iStack_d8);
          if ((int)lVar13 == 0) {
            uStack_c8 = 0;
            uStack_c0 = 0;
            ppuStack_d0 = (ulong ***)0x0;
            func_0x000104ab5920(&ppuStack_b8,2,
                                "field:retryThrottling field:tokenRatio error:Failed parsing",0x3b,
                                &uStack_d9,&ppuStack_d0);
            if (ppuStack_90 < ppuStack_88) {
              *ppuStack_90 = ppuStack_b8;
              ppuStack_b8 = (ulong ***)0x36;
              ppuStack_90 = ppuStack_90 + 1;
            }
            else {
              lVar13 = (long)ppuStack_90 - (long)ppppuStack_98 >> 3;
              uVar14 = lVar13 + 1;
              if (uVar14 >> 0x3d != 0) {
                func_0x000104a83ee4(&ppppuStack_98);
LAB_100484d64:
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x100484d68);
                (*pcVar5)();
              }
              ppppuVar7 = (ulong ****)&ppuStack_88;
              uVar10 = (long)ppuStack_88 - (long)ppppuStack_98 >> 2;
              if (uVar10 <= uVar14) {
                uVar10 = uVar14;
              }
              if (0x7ffffffffffffff7 < (ulong)((long)ppuStack_88 - (long)ppppuStack_98)) {
                uVar10 = 0x1fffffffffffffff;
              }
              pppuStack_60 = ppppuVar7;
              if (uVar10 == 0) {
                ppppuStack_80 = (ulong ****)0x0;
              }
              else {
                func_0x000104a83ef8();
                ppppuStack_80 = ppppuVar7;
              }
              pppuStack_78 = ppppuStack_80 + lVar13;
              pppuStack_68 = ppppuStack_80 + uVar10;
              ppppuVar7 = (ulong ****)(pppuStack_78 + 1);
              *pppuStack_78 = ppuStack_b8;
              ppuStack_b8 = (ulong ***)0x36;
              pppuStack_70 = ppppuVar7;
              func_0x000104a83e70(&ppppuStack_98,&ppppuStack_80);
              ppuVar4 = ppuStack_90;
              func_0x000104a84040(&ppppuStack_80);
              ppuStack_90 = ppuVar4;
              if (((ulong)ppuStack_b8 & 1) != 0) {
                FUN_10084dad0();
              }
            }
            ppppuStack_80 = (ulong ****)&ppuStack_d0;
            func_0x000100482b64(&ppppuStack_80);
            func_0x000104a8ce48(&uStack_e8,&ppppuStack_80,"retryThrottling",0xf,&ppppuStack_98);
            goto LAB_100484c98;
          }
          iVar12 = iStack_d4 + iStack_d8 * iVar12;
          if (iVar12 < 1) {
            uStack_c8 = 0;
            uStack_c0 = 0;
            ppuStack_d0 = (ulong ***)0x0;
            func_0x000104ab5920(&ppuStack_b8,2,
                                "field:retryThrottling field:tokenRatio error:value should be greater than 0"
                                ,0x4b,&uStack_d9,&ppuStack_d0);
            if (ppuStack_90 < ppuStack_88) {
              *ppuStack_90 = ppuStack_b8;
              ppuStack_b8 = (ulong ***)0x36;
              ppuStack_90 = ppuStack_90 + 1;
            }
            else {
              lVar13 = (long)ppuStack_90 - (long)ppppuStack_98 >> 3;
              uVar14 = lVar13 + 1;
              if (uVar14 >> 0x3d != 0) {
                func_0x000104a83ee4(&ppppuStack_98);
                goto LAB_100484d64;
              }
              ppppuVar7 = (ulong ****)&ppuStack_88;
              uVar10 = (long)ppuStack_88 - (long)ppppuStack_98 >> 2;
              if (uVar10 <= uVar14) {
                uVar10 = uVar14;
              }
              if (0x7ffffffffffffff7 < (ulong)((long)ppuStack_88 - (long)ppppuStack_98)) {
                uVar10 = 0x1fffffffffffffff;
              }
              pppuStack_60 = ppppuVar7;
              if (uVar10 == 0) {
                ppppuStack_80 = (ulong ****)0x0;
              }
              else {
                func_0x000104a83ef8();
                ppppuStack_80 = ppppuVar7;
              }
              pppuStack_78 = ppppuStack_80 + lVar13;
              pppuStack_68 = ppppuStack_80 + uVar10;
              ppppuVar7 = (ulong ****)(pppuStack_78 + 1);
              *pppuStack_78 = ppuStack_b8;
              ppuStack_b8 = (ulong ***)0x36;
              pppuStack_70 = ppppuVar7;
              func_0x000104a83e70(&ppppuStack_98,&ppppuStack_80);
              ppuVar4 = ppuStack_90;
              func_0x000104a84040(&ppppuStack_80);
              ppuStack_90 = ppuVar4;
              if (((ulong)ppuStack_b8 & 1) != 0) {
                FUN_10084dad0();
              }
            }
            ppppuStack_80 = (ulong ****)&ppuStack_d0;
            func_0x000100482b64(&ppppuStack_80);
          }
          lVar13 = (long)iVar12;
          goto LAB_1004849a4;
        }
        uVar14 = lVar8 + 1;
        uVar9 = uVar14;
        func_0x000107c613d0();
        uVar10 = uVar9;
        if (2 < uVar9) {
          uVar10 = 3;
        }
        func_0x000104a6f15c(uVar14,uVar10,&iStack_d4);
        if ((int)uVar14 != 0) {
          uVar14 = lVar8 - lVar13;
          if (uVar9 < 3) {
            lVar8 = -uVar10;
            uVar10 = lVar8 + 2;
            uVar19 = CONCAT14(~-(lVar8 == -2),10) & 0xaffffffff;
            iVar18 = (int)uVar19;
            iVar12 = (uint)(byte)(uVar19 >> 0x20) + (uint)(lVar8 == -2);
            uVar17 = (undefined1)iVar12;
            cVar2 = (~-(uVar10 < 2) & 10U) + (uVar10 < 2);
            cVar3 = (~-(uVar10 < 3) & 10U) + (uVar10 < 3);
            auVar20[4] = uVar17;
            auVar20._0_4_ = iVar18;
            auVar20._5_3_ = 0;
            auVar20[8] = cVar2;
            auVar20._9_3_ = 0;
            auVar20[0xc] = cVar3;
            auVar20._13_3_ = 0;
            auVar1[4] = uVar17;
            auVar1._0_4_ = iVar18;
            auVar1._5_3_ = 0;
            auVar1[8] = cVar2;
            auVar1._9_3_ = 0;
            auVar1[0xc] = cVar3;
            auVar1._13_3_ = 0;
            auVar20 = NEON_ext(auVar20,auVar1,8,1);
            iVar12 = iVar18 * auVar20._0_4_ * iVar12 * auVar20._4_4_;
          }
          else {
            iVar12 = 1;
          }
          iStack_d4 = iStack_d4 * iVar12;
          iVar12 = 1000;
          goto LAB_100484884;
        }
        uStack_c8 = 0;
        uStack_c0 = 0;
        ppuStack_d0 = (ulong ***)0x0;
        func_0x000104ab5920(&ppuStack_b8,2,
                            "field:retryThrottling field:tokenRatio error:Failed parsing",0x3b,
                            &iStack_d8,&ppuStack_d0);
        if (ppuStack_90 < ppuStack_88) {
          *ppuStack_90 = ppuStack_b8;
          ppuStack_b8 = (ulong ***)0x36;
          ppuStack_90 = ppuStack_90 + 1;
        }
        else {
          lVar13 = (long)ppuStack_90 - (long)ppppuStack_98 >> 3;
          uVar14 = lVar13 + 1;
          if (uVar14 >> 0x3d != 0) {
            func_0x000104a83ee4(&ppppuStack_98);
            goto LAB_100484d64;
          }
          ppppuVar7 = (ulong ****)&ppuStack_88;
          uVar10 = (long)ppuStack_88 - (long)ppppuStack_98 >> 2;
          if (uVar10 <= uVar14) {
            uVar10 = uVar14;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)ppuStack_88 - (long)ppppuStack_98)) {
            uVar10 = 0x1fffffffffffffff;
          }
          pppuStack_60 = ppppuVar7;
          if (uVar10 == 0) {
            ppppuStack_80 = (ulong ****)0x0;
          }
          else {
            func_0x000104a83ef8();
            ppppuStack_80 = ppppuVar7;
          }
          pppuStack_78 = ppppuStack_80 + lVar13;
          pppuStack_68 = ppppuStack_80 + uVar10;
          ppppuVar7 = (ulong ****)(pppuStack_78 + 1);
          *pppuStack_78 = ppuStack_b8;
          ppuStack_b8 = (ulong ***)0x36;
          pppuStack_70 = ppppuVar7;
          func_0x000104a83e70(&ppppuStack_98,&ppppuStack_80);
          ppuVar4 = ppuStack_90;
          func_0x000104a84040(&ppppuStack_80);
          ppuStack_90 = ppuVar4;
          if (((ulong)ppuStack_b8 & 1) != 0) {
            FUN_10084dad0();
          }
        }
        ppppuStack_80 = (ulong ****)&ppuStack_d0;
        func_0x000100482b64(&ppppuStack_80);
        func_0x000104a8ce48(&uStack_e8,&ppppuStack_80,"retryThrottling",0xf,&ppppuStack_98);
LAB_100484c98:
        lVar13 = 0;
      }
      ppppuStack_80 = (ulong ****)&ppppuStack_98;
      func_0x000100482b64(&ppppuStack_80);
    }
    else {
      pppuStack_78 = (ulong ****)0x0;
      pppuStack_70 = (ulong ****)0x0;
      ppppuStack_80 = (ulong ****)0x0;
      func_0x000104ab5920(&uStack_e8,2,"field:retryThrottling error:Type should be object",0x31,
                          &ppuStack_b0,&ppppuStack_80);
      ppppuStack_98 = &ppppuStack_80;
      func_0x000100482b64(&ppppuStack_98);
      lVar13 = 0;
      lVar16 = 0;
    }
    uVar14 = uStack_e8;
    uVar10 = *param_5;
    if (uStack_e8 == uVar10) {
LAB_1004849f8:
      if ((uVar10 & 1) != 0) {
        FUN_10084dad0();
      }
      uVar14 = *param_5;
    }
    else {
      *param_5 = uStack_e8;
      uStack_e8 = 0x36;
      if ((uVar10 & 1) != 0) {
        FUN_10084dad0();
        uVar10 = uStack_e8;
        goto LAB_1004849f8;
      }
    }
    if (uVar14 == 0) {
      puVar11 = (undefined8 *)0x18;
      func_0x000107c60e20();
      *puVar11 = &PTR_DAT_1107c3140;
      puVar11[1] = lVar16;
      puVar11[2] = lVar13;
      goto LAB_100484a28;
    }
  }
  puVar11 = (undefined8 *)0x0;
LAB_100484a28:
  *param_1 = puVar11;
  return;
}



/* Entry: 100484ecc; end: 100484ed3;  */

void FUN_100484ecc(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 100484ed4; end: 100484fbf;  */

void FUN_100484ed4(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)*param_1;
  if (plVar2 != (long *)0x0) {
    plVar3 = (long *)param_1[1];
    plVar1 = plVar2;
    if (plVar3 != plVar2) {
      do {
        plVar3 = plVar3 + -1;
        plVar1 = (long *)*plVar3;
        *plVar3 = 0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
      } while (plVar3 != plVar2);
      plVar1 = (long *)*param_1;
    }
    param_1[1] = plVar2;
    func_0x000107c60e14(plVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 100484fc0; end: 1004853bb;  */

void FUN_100484fc0(undefined8 param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  int *piVar2;
  ulong *puVar3;
  code *pcVar4;
  ulong **ppuVar5;
  ulong **ppuVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b1;
  ulong *puStack_b0;
  long lStack_a8;
  ulong *puStack_a0;
  ulong *puStack_98;
  ulong **ppuStack_90;
  ulong **ppuStack_88;
  ulong **ppuStack_80;
  ulong **ppuStack_78;
  ulong **ppuStack_70;
  
  lStack_a8 = 0;
  puStack_a0 = (ulong *)0x0;
  puStack_98 = (ulong *)0x0;
  FUN_10002b024(&ppuStack_90,"methodConfig");
  lVar10 = param_2 + 0x48;
  FUN_100484044(lVar10,&ppuStack_90);
  if ((long)ppuStack_80 < 0) {
    func_0x000107c60e14(ppuStack_90);
  }
  if (param_2 + 0x50 != lVar10) {
    if (*(int *)(lVar10 + 0x38) != 6) {
      uStack_c8 = 0;
      uStack_c0 = 0;
      uStack_d0 = (ulong *)0x0;
      func_0x000104ab5920(&puStack_b0,2,"field:methodConfig error:not of type Array",0x2a,&uStack_b1
                          ,&uStack_d0);
      if (puStack_a0 < puStack_98) {
        *puStack_a0 = (ulong)puStack_b0;
        puStack_b0 = (ulong *)0x36;
        puStack_a0 = puStack_a0 + 1;
      }
      else {
        lVar8 = (long)puStack_a0 - lStack_a8 >> 3;
        uVar1 = lVar8 + 1;
        if (uVar1 >> 0x3d != 0) {
          func_0x000104a83ee4(&lStack_a8);
LAB_1004852f8:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1004852fc);
          (*pcVar4)();
        }
        ppuVar5 = &puStack_98;
        uVar7 = (long)puStack_98 - lStack_a8 >> 2;
        if (uVar7 <= uVar1) {
          uVar7 = uVar1;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)puStack_98 - lStack_a8)) {
          uVar7 = 0x1fffffffffffffff;
        }
        ppuStack_70 = ppuVar5;
        if (uVar7 == 0) {
          ppuStack_90 = (ulong **)0x0;
        }
        else {
          func_0x000104a83ef8();
          ppuStack_90 = ppuVar5;
        }
        ppuStack_88 = ppuStack_90 + lVar8;
        ppuStack_78 = ppuStack_90 + uVar7;
        ppuVar5 = ppuStack_88 + 1;
        *ppuStack_88 = puStack_b0;
        puStack_b0 = (ulong *)0x36;
        ppuStack_80 = ppuVar5;
        func_0x000104a83e70(&lStack_a8,&ppuStack_90);
        puVar3 = puStack_a0;
        func_0x000104a84040(&ppuStack_90);
        puStack_a0 = puVar3;
        if (((ulong)puStack_b0 & 1) != 0) {
          FUN_10084dad0();
        }
      }
      ppuStack_90 = (ulong **)&uStack_d0;
      func_0x000100482b64(&ppuStack_90);
    }
    piVar9 = *(int **)(lVar10 + 0x70);
    piVar2 = *(int **)(lVar10 + 0x78);
    if (piVar9 != piVar2) {
      do {
        if (*piVar9 == 5) {
          func_0x000104ad5898(&ppuStack_90,param_2,param_3,piVar9);
          if (ppuStack_90 != (ulong **)0x0) {
            func_0x000104a83d48(&lStack_a8,&ppuStack_90);
            if (((ulong)ppuStack_90 & 1) != 0) {
              FUN_10084dad0();
            }
          }
        }
        else {
          uStack_e0 = 0;
          uStack_d8 = 0;
          uStack_e8 = (ulong *)0x0;
          func_0x000104ab5920(&puStack_b0,2,"field:methodConfig error:not of type Object",0x2b,
                              &uStack_b1,&uStack_e8);
          if (puStack_a0 < puStack_98) {
            *puStack_a0 = (ulong)puStack_b0;
            puStack_b0 = (ulong *)0x36;
            puStack_a0 = puStack_a0 + 1;
          }
          else {
            lVar10 = (long)puStack_a0 - lStack_a8 >> 3;
            uVar1 = lVar10 + 1;
            if (uVar1 >> 0x3d != 0) {
              func_0x000104a83ee4(&lStack_a8);
              goto LAB_1004852f8;
            }
            uVar7 = (long)puStack_98 - lStack_a8 >> 2;
            if (uVar7 <= uVar1) {
              uVar7 = uVar1;
            }
            if (0x7ffffffffffffff7 < (ulong)((long)puStack_98 - lStack_a8)) {
              uVar7 = 0x1fffffffffffffff;
            }
            ppuStack_70 = &puStack_98;
            if (uVar7 == 0) {
              ppuVar5 = (ulong **)0x0;
            }
            else {
              ppuVar5 = &puStack_98;
              func_0x000104a83ef8();
            }
            ppuStack_88 = ppuVar5 + lVar10;
            ppuStack_78 = ppuVar5 + uVar7;
            ppuVar6 = ppuStack_88 + 1;
            ppuStack_90 = ppuVar5;
            *ppuStack_88 = puStack_b0;
            puStack_b0 = (ulong *)0x36;
            ppuStack_80 = ppuVar6;
            func_0x000104a83e70(&lStack_a8,&ppuStack_90);
            puVar3 = puStack_a0;
            func_0x000104a84040(&ppuStack_90);
            puStack_a0 = puVar3;
            if (((ulong)puStack_b0 & 1) != 0) {
              FUN_10084dad0();
            }
          }
          ppuStack_90 = (ulong **)&uStack_e8;
          func_0x000100482b64(&ppuStack_90);
        }
        piVar9 = piVar9 + 0x14;
      } while (piVar9 != piVar2);
    }
  }
  FUN_1004853bc(param_1,&ppuStack_90,"Method Params",0xd,&lStack_a8);
  ppuStack_90 = (ulong **)&lStack_a8;
  func_0x000100482b64(&ppuStack_90);
  return;
}



/* Entry: 1004853bc; end: 10048545b;  */

void FUN_1004853bc(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  long lVar1;
  long lVar2;
  long lStack_38;
  
  *param_1 = 0;
  if (param_5[1] - *param_5 != 0) {
    func_0x000104aba878(&lStack_38,2,param_3,param_4,param_2,param_5[1] - *param_5 >> 3);
    if (lStack_38 != 0) {
      *param_1 = lStack_38;
    }
    lVar1 = *param_5;
    lVar2 = param_5[1];
    if (lVar2 != lVar1) {
      do {
        lVar2 = lVar2 + -8;
        func_0x000104a713e4(param_5 + 2,lVar2);
      } while (lVar2 != lVar1);
    }
    param_5[1] = lVar1;
  }
  return;
}



/* Entry: 10048545c; end: 10048575b; -[SCUserSessionScopedLensEffectOffscreenRenderingServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10048545c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  lVar1 = param_1 + _DAT_112779b98;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c3f770();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_112779b9c;
  func_0x000107c61148();
  lVar3 = lVar1;
  func_0x000107c4ad38();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_112779ba0;
  func_0x000107c61148();
  lVar4 = lVar1;
  func_0x000107c4ab28();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_112779ba4;
  func_0x000107c61148();
  lVar5 = lVar1;
  func_0x000107c4b2ec();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  puVar6 = PTR_PTR_1126ae720;
  uStack_a0 = 0xc2000000;
  puStack_98 = &UNK_108ca9cdc;
  puStack_90 = &UNK_110ac1528;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  lStack_88 = lVar3;
  lStack_80 = lVar2;
  lStack_78 = lVar4;
  lStack_70 = lVar5;
  func_0x000107c61174(lVar5);
  func_0x000107c61174(lVar4);
  func_0x000107c61174(lVar2);
  func_0x000107c61174(lVar3);
  func_0x000107c3e4fc(puVar6,param_2,&puStack_a8);
  func_0x000107c61180();
  puVar7 = PTR_PTR_1126db8e8;
  func_0x000107c610f4();
  lVar1 = param_1 + _DAT_112779ba8;
  func_0x000107c61148();
  lVar8 = param_1 + _DAT_112779bac;
  func_0x000107c61148(lVar8);
  uVar16 = *(undefined8 *)(param_1 + _DAT_112779bb0);
  lVar9 = param_1 + _DAT_112779bb4;
  func_0x000107c61148(lVar9);
  uVar17 = *(undefined8 *)(param_1 + _DAT_112779bb8);
  lVar10 = param_1 + _DAT_112779bbc;
  func_0x000107c61148(lVar10);
  lVar11 = lVar10;
  func_0x000107c4af44();
  func_0x000107c61180();
  uVar18 = *(undefined8 *)(param_1 + _DAT_112779bc0);
  lVar12 = param_1 + _DAT_112779bc4;
  func_0x000107c61148();
  lVar13 = lVar12;
  func_0x000107c4e604();
  func_0x000107c61180();
  param_1 = param_1 + _DAT_112779bc8;
  func_0x000107c61148();
  lVar14 = param_1;
  func_0x000107c496e0();
  func_0x000107c61180();
  func_0x000107c473c8(puVar7,param_2,lVar1,lVar8,uVar16,lVar9,uVar17,lVar11,uVar18,lVar13,lVar14);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar1);
  puVar15 = PTR_PTR_1126db8f8;
  func_0x000107c610f4(PTR_PTR_1126db8f8);
  func_0x000107c49584();
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(lStack_70);
  func_0x000107c61170(lStack_78);
  func_0x000107c61170(lStack_80);
  func_0x000107c61170(lStack_88);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 10048575c; end: 10048580b;  */

void FUN_10048575c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  if (plRam00000001136a1dc0 == (long *)0x0) {
    plVar1 = (long *)0x18;
    func_0x000107c60e20();
    puVar2 = (ulong *)0x0;
    plVar1[1] = 0;
    plVar1[2] = 0;
    *plVar1 = 0;
    plRam00000001136a1dc0 = plVar1;
  }
  else {
    puVar2 = (ulong *)*plRam00000001136a1dc0;
  }
  puVar3 = (ulong *)plRam00000001136a1dc0[1];
  do {
    if (puVar2 == puVar3) {
      return;
    }
    plVar1 = (long *)*puVar2;
    (**(code **)(*plVar1 + 0x10))(plVar1,param_1,param_2,param_3,param_4);
    puVar2 = puVar2 + 1;
  } while (((ulong)plVar1 & 1) == 0);
  return;
}



/* Entry: 10048580c; end: 10048626b;  */

/* WARNING: Removing unreachable block (ram,0x000100485d40) */
/* WARNING: Removing unreachable block (ram,0x000100486050) */
/* WARNING: Removing unreachable block (ram,0x000100485b04) */
/* WARNING: Removing unreachable block (ram,0x000100485960) */
/* WARNING: Removing unreachable block (ram,0x000100485e5c) */

undefined8
FUN_10048580c(undefined8 param_1,undefined8 param_2,char ****param_3,long *param_4,
             undefined8 *param_5)

{
  ulong uVar1;
  char *pcVar2;
  undefined8 ***pppuVar3;
  char ***pppcVar4;
  code *pcVar5;
  char ****ppppcVar6;
  char *pcVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  undefined8 *puVar10;
  int *piVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 ***pppuStack_260;
  undefined8 ***pppuStack_258;
  long lStack_250;
  undefined8 *puStack_248;
  undefined8 ***pppuStack_240;
  undefined8 ***pppuStack_238;
  long lStack_230;
  undefined8 ***pppuStack_228;
  long **pplStack_220;
  undefined8 **ppuStack_218;
  char ***pppcStack_210;
  undefined8 uStack_208;
  long lStack_200;
  undefined8 *puStack_1f8;
  long *plStack_1f0;
  long lStack_1e8;
  int iStack_1e0;
  undefined4 uStack_1dc;
  long lStack_1d8;
  char cStack_1c9;
  undefined8 ***pppuStack_1c8;
  ulong uStack_1c0;
  byte bStack_1b1;
  undefined8 uStack_1b0;
  undefined8 ***pppuStack_1a8;
  byte bStack_199;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  long *plStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 ***pppuStack_f0;
  undefined8 ***pppuStack_e8;
  undefined8 uStack_e0;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppcVar6 = param_3;
  plStack_1f0 = param_4;
  FUN_100480b50(param_3,"grpc.enable_http_proxy",1);
  if ((int)ppppcVar6 == 0) {
LAB_100485b48:
    uVar13 = 0;
LAB_100485b4c:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return uVar13;
    }
    func_0x000107c60e78();
  }
  else {
    puStack_1f8 = (undefined8 *)0x0;
    FUN_10048626c(&lStack_1e8);
    plStack_120 = (long *)0x0;
    ppppcVar6 = param_3;
    FUN_100481218(param_3,"grpc.http_proxy");
    FUN_1004601ac();
    pppcStack_210 = (char ***)ppppcVar6;
    if (ppppcVar6 == (char ****)0x0) {
      pcVar7 = "grpc_proxy";
      FUN_10046018c();
      pppcStack_210 = (char ***)pcVar7;
      if ((char ****)pcVar7 != (char ****)0x0) goto LAB_1004858d8;
      pcVar7 = "https_proxy";
      FUN_10046018c();
      pppcStack_210 = (char ***)pcVar7;
      if ((char ****)pcVar7 != (char ****)0x0) goto LAB_1004858d8;
      ppppcVar6 = (char ****)&UNK_10f4bcd1a;
      FUN_10046018c();
      pppcStack_210 = (char ***)ppppcVar6;
      if (ppppcVar6 != (char ****)0x0) goto LAB_1004858d8;
      lVar15 = 0;
    }
    else {
LAB_1004858d8:
      pppcVar4 = pppcStack_210;
      if (*(char *)pppcStack_210 == '\0') {
LAB_100485a58:
        lVar15 = 0;
      }
      else {
        ppppcVar6 = (char ****)pppcStack_210;
        func_0x000107c613d0(pppcStack_210);
        FUN_10047ae00(&pppuStack_f0,pppcVar4,ppppcVar6);
        func_0x000104a82bd0(&lStack_1e8,&pppuStack_f0);
        FUN_10047cac8(&pppuStack_f0);
        if (lStack_1e8 != 0) {
          func_0x000107c2b9c0(&pppuStack_f0,&lStack_1e8,1);
LAB_100485924:
          FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/http_proxy.cc"
                        ,0x57,2,"cannot parse value of \'http_proxy\' env var. Error: %s");
          goto LAB_100485a58;
        }
        if (-1 < (char)bStack_1b1) {
          uStack_1c0 = (ulong)bStack_1b1;
        }
        if (uStack_1c0 == 0) {
          FUN_10002b024();
          goto LAB_100485924;
        }
        if (cStack_1c9 < '\0') {
          if (lStack_1d8 == 4) {
            iVar12 = *(int *)CONCAT44(uStack_1dc,iStack_1e0);
            goto LAB_1004859c4;
          }
LAB_100485a38:
          FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/http_proxy.cc"
                        ,0x5c,2,"\'%s\' scheme not supported in proxy URI");
          goto LAB_100485a58;
        }
        iVar12 = iStack_1e0;
        if (cStack_1c9 != '\x04') goto LAB_100485a38;
LAB_1004859c4:
        if (iVar12 != 0x70747468) goto LAB_100485a38;
        if (-1 < (char)bStack_1b1) {
          pppuStack_1c8 = &pppuStack_1c8;
        }
        func_0x000104a6f29c(pppuStack_1c8,"@",&plStack_120,&puStack_150);
        if (puStack_150 == (undefined8 *)0x1) {
          lVar15 = *plStack_120;
        }
        else if (puStack_150 == (undefined8 *)0x2) {
          puStack_1f8 = (undefined8 *)*plStack_120;
          lVar15 = plStack_120[1];
          FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/http_proxy.cc"
                        ,0x6b,0,"userinfo found in proxy URI");
        }
        else {
          if (puStack_150 == (undefined8 *)0x0) {
            FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/http_proxy.cc"
                          ,99,2,"assertion failed: %s");
            func_0x000107c60ebc();
            goto LAB_1004860e8;
          }
          puVar14 = (undefined8 *)0x0;
          do {
            FUN_100460314(plStack_120[(long)puVar14]);
            puVar14 = (undefined8 *)((long)puVar14 + 1);
          } while (puVar14 < puStack_150);
          lVar15 = 0;
        }
        FUN_100460314(plStack_120);
      }
      pppcStack_210 = (char ***)0x0;
      FUN_100460314(pppcVar4);
    }
    FUN_10047cac8(&lStack_1e8);
    *plStack_1f0 = lVar15;
    if (*plStack_1f0 == 0) goto LAB_100485b48;
    pppcStack_210 = (char ***)0x0;
    uStack_208 = 0;
    lStack_200 = 0;
    uVar13 = param_2;
    func_0x000107c613d0(param_2);
    FUN_10047ae00(&lStack_1e8,param_2,uVar13);
    pplStack_220 = &plStack_1f0;
    ppuStack_218 = &puStack_1f8;
    if (lStack_1e8 != 0) {
      func_0x000107c2b9c0(&pppuStack_f0,&lStack_1e8,1);
LAB_100485ac8:
      FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/http_proxy.cc"
                    ,0x97,2,
                    "\'http_proxy\' environment variable set, but cannot parse server URI \'%s\' -- not using proxy. Error: %s"
                   );
LAB_100485b0c:
      FUN_100460314(*plStack_1f0);
      *plStack_1f0 = 0;
      FUN_100460314(puStack_1f8);
      uVar13 = 0;
LAB_100485b2c:
      FUN_10047cac8(&lStack_1e8);
      if (lStack_200 < 0) {
        func_0x000107c60e14(pppcStack_210);
      }
      goto LAB_100485b4c;
    }
    ppppuVar8 = (undefined8 ****)pppuStack_1a8;
    if (-1 < (char)bStack_199) {
      ppppuVar8 = (undefined8 ****)(ulong)bStack_199;
    }
    if (ppppuVar8 == (undefined8 ****)0x0) {
      FUN_10002b024(&pppuStack_f0,"OK");
      goto LAB_100485ac8;
    }
    if (cStack_1c9 < '\0') {
      if (lStack_1d8 != 4) goto LAB_100485bf0;
      piVar11 = (int *)CONCAT44(uStack_1dc,iStack_1e0);
LAB_100485bdc:
      if (*piVar11 != 0x78696e75) goto LAB_100485bf0;
      FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/http_proxy.cc"
                    ,0x9e,1,"not using proxy for Unix domain socket \'%s\'");
      goto LAB_100485b0c;
    }
    if (cStack_1c9 == '\x04') {
      piVar11 = &iStack_1e0;
      goto LAB_100485bdc;
    }
LAB_100485bf0:
    pcVar7 = "no_grpc_proxy";
    FUN_10046018c();
    pppuStack_228 = (undefined8 ***)pcVar7;
    if ((undefined8 ****)pcVar7 == (undefined8 ****)0x0) {
      pcVar7 = "no_proxy";
      FUN_10046018c("no_proxy");
      pppuStack_f0 = (undefined8 ****)0x0;
      FUN_100474c88(&pppuStack_228,pcVar7);
      FUN_100474c88(&pppuStack_f0,0);
      if ((undefined8 ****)pppuStack_228 != (undefined8 ****)0x0) goto LAB_100485c38;
    }
    else {
LAB_100485c38:
      pppuStack_f0 = (undefined8 ****)0x0;
      pppuStack_e8 = (undefined8 ****)0x0;
      uStack_e0 = 0;
      plStack_120 = (long *)0x0;
      uStack_118 = 0;
      lStack_110 = 0;
      if (lStack_1e8 != 0) {
        func_0x000107c2b9e8(&lStack_1e8);
        goto LAB_1004860e8;
      }
      ppppuVar8 = (undefined8 ****)pppuStack_1a8;
      pcVar7 = uStack_1b0;
      if (-1 < (char)bStack_199) {
        ppppuVar8 = (undefined8 ****)(ulong)bStack_199;
        pcVar7 = (char *)&uStack_1b0;
      }
      func_0x000107c3a630(pcVar7,ppppuVar8,"/",1);
      func_0x0001004c2450();
      pppuVar3 = pppuStack_228;
      if (((ulong)pcVar7 & 1) == 0) {
        FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/http_proxy.cc"
                      ,0xad,1,
                      "unable to split host and port, not checking no_proxy list for host \'%s\'");
      }
      else {
        ppppuVar8 = (undefined8 ****)pppuStack_228;
        func_0x000107c613d0();
        pppuStack_240 = pppuVar3;
        lStack_230 = CONCAT71(lStack_230._1_7_,0x2c);
        pppuStack_238 = ppppuVar8;
        func_0x000104a82df0(&puStack_150,&pppuStack_260,&pppuStack_240);
        puVar14 = puStack_148;
        if (puStack_150 != puStack_148) {
          puVar10 = puStack_150;
          do {
            ppppuVar8 = (undefined8 ****)pppuStack_e8;
            ppppuVar9 = (undefined8 ****)pppuStack_f0;
            if (-1 < (long)uStack_e0) {
              ppppuVar8 = (undefined8 ****)(uStack_e0 >> 0x38);
              ppppuVar9 = &pppuStack_f0;
            }
            func_0x000107c2ba28(ppppuVar9,ppppuVar8,*puVar10,puVar10[1]);
            if ((int)ppppuVar9 != 0) {
              FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/http_proxy.cc"
                            ,0xb6,1,"not using proxy for host in no_proxy list \'%s\'");
              func_0x000104a82b88(&pplStack_220);
              if (puStack_150 != (undefined8 *)0x0) {
                puStack_148 = puStack_150;
                func_0x000107c60e14();
              }
              if (lStack_110 < 0) {
                func_0x000107c60e14(plStack_120);
              }
              uVar13 = 0;
              goto LAB_100485fe4;
            }
            puVar10 = puVar10 + 2;
          } while (puVar10 != puVar14);
        }
        if (puStack_150 != (undefined8 *)0x0) {
          puStack_148 = puStack_150;
          func_0x000107c60e14(puStack_150);
        }
      }
      if (lStack_110 < 0) {
        func_0x000107c60e14(plStack_120);
      }
    }
    if (lStack_1e8 != 0) {
      func_0x000107c2b9e8(&lStack_1e8);
      goto LAB_1004860e8;
    }
    pcVar7 = uStack_1b0;
    if (-1 < (char)bStack_199) {
      pppuStack_1a8 = (undefined8 ****)(ulong)bStack_199;
      pcVar7 = (char *)&uStack_1b0;
    }
    if ((undefined8 ****)pppuStack_1a8 == (undefined8 ****)0x0) {
      ppppuVar8 = (undefined8 ****)0x0;
    }
    else {
      pcVar2 = (char *)((long)&uStack_1b0 + 1);
      if ((char)bStack_199 < '\0') {
        pcVar2 = uStack_1b0 + 1;
      }
      ppppuVar8 = (undefined8 ****)pppuStack_1a8;
      if (*pcVar7 == '/') {
        pcVar7 = pcVar2;
        ppppuVar8 = (undefined8 ****)((long)pppuStack_1a8 + -1);
      }
    }
    plStack_120 = (long *)0x0;
    uStack_118 = 0;
    puStack_150 = (undefined8 *)0x0;
    puStack_148 = (undefined8 *)0x0;
    FUN_1004ca784(pcVar7,ppppuVar8,&plStack_120,&puStack_150);
    if (puStack_148 == (undefined8 *)0x0) {
      FUN_1004d4a64(&pppuStack_f0,plStack_120,uStack_118,0x1bb);
LAB_100485e38:
      func_0x000107c60c64(&pppcStack_210,&pppuStack_f0);
      pppuStack_f0 = (undefined8 ****)0x0;
      ppppcVar6 = (char ****)pppcStack_210;
      if (-1 < lStack_200) {
        ppppcVar6 = &pppcStack_210;
      }
      func_0x0001004c9ae8(&plStack_120,"grpc.http_connect_server",ppppcVar6);
      func_0x0001004c9af4(&pppuStack_f0,&plStack_120);
      puVar14 = puStack_1f8;
      pppuStack_240 = (undefined8 ****)0x0;
      pppuStack_238 = (undefined8 ****)0x0;
      lStack_230 = 0;
      if (puStack_1f8 != (undefined8 *)0x0) {
        puVar10 = puStack_1f8;
        func_0x000107c613d0(puStack_1f8);
        func_0x000104ad7120(puVar14,puVar10,0,0);
        plStack_120 = (long *)0x10f230bc1;
        uStack_118 = 0x1a;
        puStack_248 = puVar14;
        if (puVar14 == (undefined8 *)0x0) {
          puVar10 = (undefined8 *)0x0;
        }
        else {
          puVar10 = puVar14;
          func_0x000107c613d0();
        }
        puStack_150 = puVar14;
        puStack_148 = puVar10;
        FUN_10047c83c(&pppuStack_260,&plStack_120,&puStack_150);
        if (lStack_230 < 0) {
          func_0x000107c60e14(pppuStack_240);
        }
        pppuStack_238 = pppuStack_258;
        pppuStack_240 = pppuStack_260;
        lStack_230 = lStack_250;
        if (-1 < lStack_250) {
          pppuStack_260 = &pppuStack_240;
        }
        func_0x0001004c9ae8(&plStack_120,"grpc.http_connect_headers",pppuStack_260);
        func_0x0001004c9af4(&pppuStack_f0,&plStack_120);
        puStack_248 = (undefined8 *)0x0;
        if (puVar14 != (undefined8 *)0x0) {
          FUN_100460314(puVar14);
        }
      }
      ppppuVar8 = &pppuStack_e8;
      if (((ulong)pppuStack_f0 & 1) != 0) {
        ppppuVar8 = (undefined8 ****)pppuStack_e8;
      }
      FUN_1004c87a4(param_3,ppppuVar8,(ulong)pppuStack_f0 >> 1);
      *param_5 = param_3;
      FUN_100460314(puStack_1f8);
      if (lStack_230 < 0) {
        func_0x000107c60e14(pppuStack_240);
      }
      if (((ulong)pppuStack_f0 & 1) != 0) {
        func_0x000107c60e14(pppuStack_e8);
      }
      uVar13 = 1;
LAB_100485fe4:
      pppuVar3 = pppuStack_228;
      pppuStack_228 = (undefined8 ****)0x0;
      if ((undefined8 ****)pppuVar3 != (undefined8 ****)0x0) {
        FUN_100460314();
      }
      goto LAB_100485b2c;
    }
    if (ppppuVar8 < (undefined8 ****)0x7ffffffffffffff8) {
      if (ppppuVar8 < (undefined8 ****)0x17) {
        uStack_e0 = CONCAT17((char)ppppuVar8,(undefined7)uStack_e0);
        ppppuVar9 = &pppuStack_f0;
        if (ppppuVar8 != (undefined8 ****)0x0) goto LAB_100485e24;
      }
      else {
        uVar1 = ((ulong)ppppuVar8 & 0xfffffffffffffff8) + 8;
        if (((ulong)ppppuVar8 | 7) != 0x17) {
          uVar1 = (ulong)ppppuVar8 | 7;
        }
        ppppuVar9 = (undefined8 ****)(uVar1 + 1);
        func_0x000107c60e20();
        uStack_e0 = uVar1 + 1 | 0x8000000000000000;
        pppuStack_f0 = ppppuVar9;
        pppuStack_e8 = ppppuVar8;
LAB_100485e24:
        func_0x000107c610b8(ppppuVar9,pcVar7,ppppuVar8);
      }
      *(undefined1 *)((long)ppppuVar9 + (long)ppppuVar8) = 0;
      goto LAB_100485e38;
    }
  }
  func_0x000104a6fa5c(&pppuStack_f0);
LAB_1004860e8:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1004860ec);
  (*pcVar5)();
}



/* Entry: 10048626c; end: 1004862db;  */

undefined8 FUN_10048626c(undefined8 param_1)

{
  ulong uStack_28;
  
  func_0x00010047ad8c(&uStack_28,2,"",0);
  FUN_1004862dc(param_1,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    FUN_10084dad0();
  }
  return param_1;
}



/* Entry: 1004862dc; end: 100486333;  */

long * FUN_1004862dc(long *param_1,long *param_2)

{
  *param_1 = *param_2;
  *param_2 = 0x36;
  if (*param_1 == 0) {
    func_0x000107c2b9e4(param_1);
  }
  return param_1;
}



/* Entry: 100486334; end: 10048633b; -[SCLensMetadataRetrievingServices centralizedLensMetadataStoreProvider] */

undefined8 FUN_100486334(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10048633c; end: 100486343; -[SCLensProcessingLaunchDataServices launchDataStore] */

undefined8 FUN_10048633c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100486344; end: 10048634b; -[SCLensProcessingSharedServices inmemoryAssetsDataProvider] */

undefined8 FUN_100486344(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10048634c; end: 100486463;  */

/* WARNING: Removing unreachable block (ram,0x000100486420) */
/* WARNING: Removing unreachable block (ram,0x000100486400) */
/* WARNING: Removing unreachable block (ram,0x0001004863f0) */
/* WARNING: Removing unreachable block (ram,0x000100486410) */

long * FUN_10048634c(long *param_1)

{
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  puStack_98 = &uStack_90;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  lStack_58 = 0;
  uStack_60 = 0;
  FUN_10047b830();
  if (param_1 == (long *)0x0) {
    param_1 = (long *)0x0;
  }
  else {
    (**(code **)(*param_1 + 0x18))();
  }
  if (lStack_58 < 0) {
    func_0x000107c60e14(uStack_68);
  }
  puStack_38 = &uStack_80;
  FUN_10047c710(&puStack_38);
  FUN_10047c794(&puStack_98,uStack_90);
  return param_1;
}



/* Entry: 100486464; end: 1004864ff;  */

undefined8 FUN_100486464(undefined8 param_1,long param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  uVar1 = *(ulong *)(param_2 + 0x20);
  if (-1 < (char)*(byte *)(param_2 + 0x2f)) {
    uVar1 = (ulong)*(byte *)(param_2 + 0x2f);
  }
  if (uVar1 == 0) {
    bVar2 = *(byte *)(param_2 + 0x47);
    uVar1 = *(ulong *)(param_2 + 0x38);
    if (-1 < (char)bVar2) {
      uVar1 = (ulong)bVar2;
    }
    if (uVar1 != 0) {
      pcVar4 = *(char **)(param_2 + 0x30);
      if (-1 < (char)bVar2) {
        pcVar4 = (char *)(param_2 + 0x30);
      }
      if (*pcVar4 != '/' || uVar1 != 1) {
        return 1;
      }
    }
    pcVar4 = "no server name supplied in dns URI";
    uVar3 = 0xa9;
  }
  else {
    pcVar4 = "authority based dns uri\'s not supported";
    uVar3 = 0xa5;
  }
  FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/resolver/dns/native/dns_resolver.cc"
                ,uVar3,2,pcVar4);
  return 0;
}



/* Entry: 100486500; end: 10048650b;  */

/* WARNING: Removing unreachable block (ram,0x00010047facc) */
/* WARNING: Removing unreachable block (ram,0x00010047fad4) */

long * FUN_100486500(ulong *param_1,undefined8 *param_2,ulong param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((param_1 == (ulong *)0x0) || (uVar8 = *param_1, uVar8 == 0)) {
    lVar10 = 0;
  }
  else {
    uVar11 = 0;
    lVar10 = 0;
    do {
      if (param_3 == 0) {
        uVar6 = 1;
      }
      else {
        uVar9 = *(undefined8 *)(param_1[1] + uVar11 * 0x20 + 8);
        uVar3 = uVar9;
        func_0x000107c613c0(uVar9,*param_2);
        if ((int)uVar3 == 0) {
          uVar5 = 1;
        }
        else {
          uVar6 = 1;
          do {
            uVar7 = uVar6;
            if (param_3 == uVar7) break;
            uVar3 = uVar9;
            func_0x000107c613c0(uVar9,param_2[uVar7]);
            uVar6 = uVar7 + 1;
          } while ((int)uVar3 != 0);
          uVar5 = (uint)(uVar7 < param_3);
        }
        uVar6 = (ulong)(uVar5 ^ 1);
      }
      lVar10 = lVar10 + uVar6;
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar8);
  }
  plVar4 = (long *)0x10;
  FUN_100460200();
  *plVar4 = lVar10;
  if (lVar10 != 0) {
    lVar10 = lVar10 << 5;
    FUN_100460200();
    plVar4[1] = lVar10;
    if ((param_1 == (ulong *)0x0) || (uVar8 = *param_1, uVar8 == 0)) {
      lVar10 = 0;
    }
    else {
      uVar11 = 0;
      lVar10 = 0;
      do {
        lVar1 = param_1[1] + uVar11 * 0x20;
        if (param_3 == 0) {
LAB_10047fa80:
          FUN_10047fb38(&uStack_80,lVar1);
          puVar2 = (undefined8 *)(plVar4[1] + lVar10 * 0x20);
          lVar10 = lVar10 + 1;
          puVar2[1] = uStack_78;
          *puVar2 = uStack_80;
          puVar2[3] = uStack_68;
          puVar2[2] = uStack_70;
          uVar8 = *param_1;
        }
        else {
          uVar9 = *(undefined8 *)(lVar1 + 8);
          uVar3 = uVar9;
          func_0x000107c613c0(uVar9,*param_2);
          if ((int)uVar3 != 0) {
            uVar6 = 1;
            do {
              uVar7 = uVar6;
              if (param_3 == uVar7) break;
              uVar3 = uVar9;
              func_0x000107c613c0(uVar9,param_2[uVar7]);
              uVar6 = uVar7 + 1;
            } while ((int)uVar3 != 0);
            if (param_3 <= uVar7) goto LAB_10047fa80;
          }
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar8);
    }
    if (lVar10 == *plVar4) {
      return plVar4;
    }
    func_0x000107c2c2e8();
  }
  plVar4[1] = 0;
  return plVar4;
}



/* Entry: 10048650c; end: 1004865ab;  */

void FUN_10048650c(ulong *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if (param_1 != (ulong *)0x0) {
    if (*param_1 != 0) {
      lVar2 = 0;
      uVar3 = 0;
      do {
        uVar1 = param_1[1];
        if (*(int *)(uVar1 + lVar2) == 2) {
          (**(code **)(*(long *)(uVar1 + lVar2 + 0x18) + 8))(*(undefined8 *)(uVar1 + lVar2 + 0x10));
        }
        else if (*(int *)(uVar1 + lVar2) == 0) {
          FUN_100460314(*(undefined8 *)(uVar1 + lVar2 + 0x10));
        }
        FUN_100460314(*(undefined8 *)(param_1[1] + lVar2 + 8));
        uVar3 = uVar3 + 1;
        lVar2 = lVar2 + 0x20;
      } while (uVar3 < *param_1);
    }
    FUN_100460314(param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(param_1);
    return;
  }
  return;
}



/* Entry: 1004865ac; end: 10048668f;  */

ulong FUN_1004865ac(int *param_1,undefined8 param_2,ulong param_3,int param_4)

{
  uint uVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  FUN_10047fdf4();
  if (param_1 != (int *)0x0) {
    if (*param_1 == 1) {
      uVar1 = param_1[4];
      if ((int)uVar1 < (int)(param_3 >> 0x20)) {
        pcVar3 = "%s ignored: it must be >= %d";
        uVar2 = 0x19d;
      }
      else {
        if ((int)uVar1 <= param_4) {
          return (ulong)uVar1;
        }
        pcVar3 = "%s ignored: it must be <= %d";
        uVar2 = 0x1a2;
      }
    }
    else {
      pcVar3 = "%s ignored: it must be an integer";
      uVar2 = 0x199;
    }
    FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/channel_args.cc"
                  ,uVar2,2,pcVar3);
  }
  return param_3;
}



/* Entry: 100486690; end: 1004867ab;  */

/* WARNING: Removing unreachable block (ram,0x000100486770) */
/* WARNING: Removing unreachable block (ram,0x000100486750) */
/* WARNING: Removing unreachable block (ram,0x000100486740) */
/* WARNING: Removing unreachable block (ram,0x000100486760) */

void FUN_100486690(undefined8 param_1,long *param_2)

{
  undefined8 *puStack_88;
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
  undefined8 *puStack_28;
  
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  puStack_88 = &uStack_80;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  lStack_48 = 0;
  uStack_50 = 0;
  FUN_10047b830();
  if (param_2 == (long *)0x0) {
    FUN_10002b024(param_1,"");
  }
  else {
    (**(code **)(*param_2 + 0x28))(param_1);
  }
  if (lStack_48 < 0) {
    func_0x000107c60e14(uStack_58);
  }
  puStack_28 = &uStack_70;
  FUN_10047c710(&puStack_28);
  FUN_10047c794(&puStack_88,uStack_80);
  return;
}



/* Entry: 1004867ac; end: 100486883;  */

void FUN_1004867ac(ulong *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  ulong *puVar6;
  ulong uVar7;
  
  bVar3 = *(byte *)(param_3 + 0x47);
  uVar7 = *(ulong *)(param_3 + 0x38);
  if (-1 < (char)bVar3) {
    uVar7 = (ulong)bVar3;
  }
  if (uVar7 == 0) {
    uVar7 = 0;
    *(undefined1 *)((long)param_1 + 0x17) = 0;
  }
  else {
    plVar1 = (long *)*(long *)(param_3 + 0x30);
    if (-1 < (char)bVar3) {
      plVar1 = (long *)(param_3 + 0x30);
    }
    bVar5 = (char)*plVar1 == '/';
    if (bVar5) {
      plVar1 = (long *)((long)plVar1 + 1);
    }
    uVar7 = uVar7 - bVar5;
    if (0x7ffffffffffffff7 < uVar7) {
      func_0x000104a6fa5c();
      puVar6 = param_1 + 1;
      do {
        uVar7 = *puVar6;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar6,0x10);
        if (bVar5) {
          *puVar6 = uVar7 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar7 - 1 != 0 || param_1 == (ulong *)0x0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0001004868ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
    if (uVar7 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)uVar7;
      puVar6 = param_1;
      if (uVar7 == 0) goto LAB_100486868;
    }
    else {
      uVar2 = (uVar7 & 0xfffffffffffffff8) + 8;
      if ((uVar7 | 7) != 0x17) {
        uVar2 = uVar7 | 7;
      }
      puVar6 = (ulong *)(uVar2 + 1);
      func_0x000107c60e20();
      param_1[1] = uVar7;
      param_1[2] = uVar2 + 1 | 0x8000000000000000;
      *param_1 = (ulong)puVar6;
    }
    func_0x000107c610b8(puVar6,plVar1,uVar7);
    param_1 = puVar6;
  }
LAB_100486868:
  *(undefined1 *)((long)param_1 + uVar7) = 0;
  return;
}



/* Entry: 100486884; end: 1004868bf;  */

void FUN_100486884(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = param_1 + 1;
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 != 0 || param_1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001004868ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1004868c0; end: 100486907;  */

undefined8 * FUN_1004868c0(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  if (plVar3 != (long *)0x0) {
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      FUN_100836ca4();
    }
  }
  return param_1;
}



/* Entry: 100486908; end: 10048691b;  */

void FUN_100486908(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  *param_1 = 7;
  return;
}



/* Entry: 10048691c; end: 100486b3f; -[SCLensEffectOffscreenRenderingFactoryImpl initWithLensProcessingOffscreenFactory:lensProcessingFactory:lensProcessingPluginScopeExposer:lensProcessingPluginsScopeServices:lensProcessingURIPluginScopeExposer:lensCarouselStudySettings:bitmojiScopeExposer:performerProvider:inmemoryAssetsDataProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10048691c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  puStack_68 = PTR_PTR_1126fe100;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112779bd0;
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    func_0x000107c61170(uVar2);
    lVar3 = (long)_DAT_112779bd4;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    func_0x000107c61170(uVar2);
    lVar3 = (long)_DAT_112779bd8;
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    func_0x000107c61170(uVar2);
    lVar3 = (long)_DAT_112779bdc;
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    func_0x000107c61170(uVar2);
    lVar3 = (long)_DAT_112779be0;
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    func_0x000107c61170(uVar2);
    lVar3 = (long)_DAT_112779be4;
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    func_0x000107c61170(uVar2);
    lVar3 = (long)_DAT_112779be8;
    func_0x000107c61174(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_9;
    func_0x000107c61170(uVar2);
    lVar3 = (long)_DAT_112779bec;
    func_0x000107c61174(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_10;
    func_0x000107c61170(uVar2);
    lVar3 = (long)_DAT_112779bf0;
    func_0x000107c61174(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_11;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100486b40; end: 100486be3; -[SCUserSessionScopedLensEffectOffscreenRenderingServices initWithWarmuper:factory:] */

undefined1 *
FUN_100486b40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126fe178;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100486be4; end: 100486c6f;  */

void FUN_100486be4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100486c70; end: 100486c77;  */

undefined8 FUN_100486c70(void)

{
  return 0x1280;
}



/* Entry: 100486c78; end: 100486feb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_100486c78(undefined8 *param_1,undefined1 param_2,undefined8 *param_3,long param_4,
             undefined8 *param_5,long *param_6)

{
  long *plVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  ulong uVar27;
  long lVar28;
  long lVar29;
  long *plVar30;
  long *plVar31;
  undefined8 uVar32;
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [16];
  long lStack_80;
  undefined8 uStack_78;
  long *plStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = &PTR_DAT_1107c6ef0;
  param_1[1] = 1;
  *(undefined1 *)(param_1 + 2) = param_2;
  uVar32 = param_5[1];
  uVar6 = *param_5;
  *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)(param_5 + 2);
  *(undefined8 *)((long)param_1 + 0x1c) = uVar32;
  *(undefined8 *)((long)param_1 + 0x14) = uVar6;
  lVar28 = *(long *)(*param_6 + 0x38);
  puVar5 = param_1;
  FUN_100486c70();
  param_1[5] = (long)puVar5 + lVar28;
  FUN_100460318(param_1 + 6);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xe] = param_1 + 0xf;
  *(undefined4 *)(param_1 + 0x11) = 0;
  lVar28 = param_4;
  FUN_100479434(param_4,"grpc.internal.channelz_channel_node",0x23);
  if (lVar28 != 0) {
    plVar31 = (long *)(lVar28 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar4) {
        *plVar31 = *plVar31 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  param_1[0x12] = lVar28;
  FUN_100479434(param_4,"grpc.resource_quota",0x13);
  uVar6 = *(undefined8 *)(param_4 + 0x10);
  plVar31 = *(long **)(param_4 + 0x18);
  if (plVar31 != (long *)0x0) {
    plVar30 = plVar31 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar30,0x10);
      if (bVar4) {
        *plVar30 = *plVar30 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if ((char)*(byte *)((long)param_3 + 0x17) < '\0') {
    puVar5 = (undefined8 *)*param_3;
    uVar27 = param_3[1];
  }
  else {
    uVar27 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar5 = param_3;
  }
  FUN_100487758(&lStack_80,uVar6,puVar5,uVar27);
  param_1[0x14] = uStack_78;
  param_1[0x13] = lStack_80;
  lStack_80 = 0;
  uStack_78 = 0;
  FUN_100487bf4(&lStack_80);
  if (plVar31 != (long *)0x0) {
    plVar30 = plVar31 + 1;
    do {
      lVar28 = *plVar30;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar30,0x10);
      if (bVar4) {
        *plVar30 = lVar28 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar28 == 0) {
      (**(code **)(*plVar31 + 0x10))(plVar31);
      func_0x000107c60d68(plVar31);
    }
  }
  uVar32 = param_3[1];
  uVar6 = *param_3;
  param_1[0x17] = param_3[2];
  param_1[0x16] = uVar32;
  param_1[0x15] = uVar6;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  plVar31 = param_1 + 0x18;
  *plVar31 = 0;
  *plVar31 = *param_6;
  *param_6 = 0;
  FUN_10045fe88();
  if (param_1[0x12] == 0) {
    plVar30 = (long *)0x0;
LAB_100486e54:
    bVar4 = true;
  }
  else {
    plVar30 = (long *)(param_1[0x12] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar30,0x10);
      if (bVar4) {
        *plVar30 = *plVar30 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar30 = (long *)param_1[0x12];
    if (plVar30 == (long *)0x0) goto LAB_100486e54;
    plVar7 = plVar30 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar4 = false;
  }
  lVar28 = *plVar31;
  plStack_68 = (long *)0x0;
  plVar7 = (long *)0x10;
  func_0x000107c60e20();
  *plVar7 = (long)&PTR_DAT_1107c6f88;
  plVar7[1] = (long)plVar30;
  plStack_68 = plVar7;
  FUN_100487c84(&lStack_80,lVar28 + 0x40);
  if (plStack_68 == &lStack_80) {
    lVar28 = 4;
    plVar7 = &lStack_80;
  }
  else {
    plVar7 = plStack_68;
    if (plStack_68 == (long *)0x0) goto LAB_100486eb4;
    lVar28 = 5;
  }
  (**(code **)(*plVar7 + lVar28 * 8))();
LAB_100486eb4:
  if (!bVar4) {
    plVar1 = plVar30 + 1;
    do {
      lVar28 = *plVar1;
      cVar3 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar2) {
        *plVar1 = lVar28 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar28 + -1 == 0) {
      plVar7 = plVar30;
      (**(code **)(*plVar30 + 8))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  func_0x000107c60e78();
  if (plVar30 != (long *)0x0) {
    func_0x000107c2c410(plVar30);
  }
  if (!bVar4) {
    plVar1 = plVar30 + 1;
    do {
      lVar28 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar28 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar28 + -1 == 0) {
      (**(code **)(*plVar30 + 8))(plVar30);
    }
  }
  FUN_1004868c0(plVar31);
  if (*(char *)((long)param_1 + 0xbf) < '\0') {
    func_0x000107c60e14(param_1[0x15]);
  }
  FUN_100487bf4(param_1 + 0x13);
  plVar31 = (long *)param_1[0x12];
  if (plVar31 != (long *)0x0) {
    plVar30 = plVar31 + 1;
    do {
      lVar28 = *plVar30;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar30,0x10);
      if (bVar4) {
        *plVar30 = lVar28 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar28 + -1 == 0) {
      (**(code **)(*plVar31 + 8))();
    }
  }
  func_0x000104ad9324(&lStack_80);
  func_0x000107c60bd8();
  lVar28 = (long)plVar7 + (long)_DAT_112723d68;
  func_0x000107c61148();
  lVar8 = lVar28;
  func_0x000107c4d47c();
  func_0x000107c61180();
  func_0x000107c61170(lVar28);
  lVar28 = (long)plVar7 + (long)_DAT_112723d6c;
  func_0x000107c61148();
  lVar9 = lVar28;
  func_0x000107c40430();
  func_0x000107c61180();
  func_0x000107c61170(lVar28);
  lVar28 = (long)plVar7 + (long)_DAT_112723d70;
  func_0x000107c61148();
  lVar10 = lVar28;
  func_0x000107c40430();
  func_0x000107c61180();
  func_0x000107c61170(lVar28);
  lVar29 = (long)_DAT_112723d74;
  lVar28 = (long)plVar7 + lVar29;
  func_0x000107c61148();
  lVar11 = lVar28;
  func_0x000107c4bfcc();
  func_0x000107c61180();
  func_0x000107c61170(lVar28);
  lVar29 = (long)plVar7 + lVar29;
  func_0x000107c61148();
  lVar12 = lVar29;
  func_0x000107c400d0();
  func_0x000107c61180();
  func_0x000107c61170(lVar29);
  lVar29 = (long)_DAT_112723d78;
  lVar28 = (long)plVar7 + lVar29;
  func_0x000107c61148();
  lVar13 = lVar28;
  func_0x000107c4db04();
  func_0x000107c61180();
  func_0x000107c61170(lVar28);
  lVar29 = (long)plVar7 + lVar29;
  func_0x000107c61148();
  lVar14 = lVar29;
  func_0x000107c4db0c();
  func_0x000107c61180();
  func_0x000107c61170(lVar29);
  lVar28 = (long)plVar7 + (long)_DAT_112723d7c;
  func_0x000107c61148();
  lVar15 = lVar28;
  func_0x000107c4e604();
  func_0x000107c61180();
  func_0x000107c61170(lVar28);
  lVar29 = (long)_DAT_112723d80;
  lVar28 = (long)plVar7 + lVar29;
  func_0x000107c61148();
  lVar16 = lVar28;
  func_0x000107c3ea0c();
  func_0x000107c61180();
  func_0x000107c61170(lVar28);
  lVar29 = (long)plVar7 + lVar29;
  func_0x000107c61148();
  lVar17 = lVar29;
  func_0x000107c3e9cc();
  func_0x000107c61180();
  func_0x000107c61170(lVar29);
  lVar28 = (long)plVar7 + (long)_DAT_112723d84;
  func_0x000107c61148();
  lVar29 = lVar28;
  func_0x000107c3e550();
  func_0x000107c61180();
  func_0x000107c61170(lVar28);
  lVar28 = (long)plVar7 + (long)_DAT_112723d88;
  func_0x000107c61148();
  lVar18 = lVar28;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lVar28);
  lVar28 = (long)plVar7 + (long)_DAT_112723d8c;
  func_0x000107c61148();
  lVar19 = lVar28;
  func_0x000107c3dfac();
  func_0x000107c61180();
  func_0x000107c61170(lVar28);
  lVar28 = (long)plVar7 + (long)_DAT_112723d90;
  func_0x000107c61148();
  lVar20 = lVar28;
  func_0x000107c3ea58();
  func_0x000107c61180();
  func_0x000107c61170(lVar28);
  lVar28 = (long)plVar7 + (long)_DAT_112723d94;
  func_0x000107c61148();
  lVar21 = lVar28;
  func_0x000107c500ac();
  func_0x000107c61180();
  lVar22 = lVar21;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar21);
  func_0x000107c61170(lVar28);
  func_0x000107c61144(auStack_110,plVar7);
  func_0x000107c61144(auStack_118,lVar13);
  puVar23 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_128,auStack_110);
  func_0x000107c6111c(auStack_120,auStack_118);
  func_0x000107c61174(lVar18);
  func_0x000107c61174(lVar19);
  func_0x000107c61174(lVar14);
  func_0x000107c61174(lVar16);
  func_0x000107c61174(lVar17);
  func_0x000107c61174(lVar29);
  func_0x000107c61174(lVar15);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar24 = PTR_PTR_1126ae720;
  func_0x000107c61174(lVar12);
  func_0x000107c61174(lVar20);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar25 = PTR_PTR_1126ae720;
  func_0x000107c61174(puVar23);
  func_0x000107c61174(lVar8);
  func_0x000107c61174(lVar29);
  func_0x000107c61174(lVar18);
  func_0x000107c61174(lVar17);
  func_0x000107c61174(lVar22);
  func_0x000107c61174(lVar9);
  func_0x000107c61174(lVar10);
  func_0x000107c61174(lVar11);
  func_0x000107c61174(lVar12);
  func_0x000107c61174(puVar24);
  func_0x000107c3e4fc(puVar25);
  func_0x000107c61180();
  puVar26 = PTR_PTR_1126ae720;
  func_0x000107c61174(puVar23);
  func_0x000107c61174(lVar10);
  func_0x000107c61174(lVar11);
  func_0x000107c61174(lVar12);
  func_0x000107c61174(lVar22);
  func_0x000107c61174(puVar24);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar5 = (undefined8 *)PTR_PTR_1126b9548;
  func_0x000107c610f4(PTR_PTR_1126b9548);
  func_0x000107c4596c();
  func_0x000107c61170(puVar26);
  func_0x000107c61170(puVar24);
  func_0x000107c61170(lVar22);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(puVar23);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar24);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar22);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lVar29);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(puVar23);
  func_0x000107c61170(puVar24);
  func_0x000107c61170(lVar20);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(puVar23);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(lVar29);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar19);
  func_0x000107c61170(lVar18);
  func_0x000107c61120(auStack_120);
  func_0x000107c61120(auStack_128);
  func_0x000107c61120(auStack_118);
  func_0x000107c61120(auStack_110);
  func_0x000107c61170(lVar22);
  func_0x000107c61170(lVar20);
  func_0x000107c61170(lVar19);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lVar29);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return puVar5;
}



/* Entry: 100486fec; end: 100487757; -[SCBitmojiFlatlandBatchContentServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100486fec(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
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
  long lVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  long lVar22;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  lVar1 = param_1 + _DAT_112723d68;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c4d47c();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_112723d6c;
  func_0x000107c61148();
  lVar3 = lVar1;
  func_0x000107c40430();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_112723d70;
  func_0x000107c61148();
  lVar4 = lVar1;
  func_0x000107c40430();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar22 = (long)_DAT_112723d74;
  lVar1 = param_1 + lVar22;
  func_0x000107c61148();
  lVar5 = lVar1;
  func_0x000107c4bfcc();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar22 = param_1 + lVar22;
  func_0x000107c61148();
  lVar6 = lVar22;
  func_0x000107c400d0();
  func_0x000107c61180();
  func_0x000107c61170(lVar22);
  lVar22 = (long)_DAT_112723d78;
  lVar1 = param_1 + lVar22;
  func_0x000107c61148();
  lVar7 = lVar1;
  func_0x000107c4db04();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar22 = param_1 + lVar22;
  func_0x000107c61148();
  lVar8 = lVar22;
  func_0x000107c4db0c();
  func_0x000107c61180();
  func_0x000107c61170(lVar22);
  lVar1 = param_1 + _DAT_112723d7c;
  func_0x000107c61148();
  lVar9 = lVar1;
  func_0x000107c4e604();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar22 = (long)_DAT_112723d80;
  lVar1 = param_1 + lVar22;
  func_0x000107c61148();
  lVar10 = lVar1;
  func_0x000107c3ea0c();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar22 = param_1 + lVar22;
  func_0x000107c61148();
  lVar11 = lVar22;
  func_0x000107c3e9cc();
  func_0x000107c61180();
  func_0x000107c61170(lVar22);
  lVar1 = param_1 + _DAT_112723d84;
  func_0x000107c61148();
  lVar22 = lVar1;
  func_0x000107c3e550();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_112723d88;
  func_0x000107c61148();
  lVar12 = lVar1;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_112723d8c;
  func_0x000107c61148();
  lVar13 = lVar1;
  func_0x000107c3dfac();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_112723d90;
  func_0x000107c61148();
  lVar14 = lVar1;
  func_0x000107c3ea58();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_112723d94;
  func_0x000107c61148();
  lVar15 = lVar1;
  func_0x000107c500ac();
  func_0x000107c61180();
  lVar16 = lVar15;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar15);
  func_0x000107c61170(lVar1);
  func_0x000107c61144(auStack_80,param_1);
  func_0x000107c61144(auStack_88,lVar7);
  puVar17 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_98,auStack_80);
  func_0x000107c6111c(auStack_90,auStack_88);
  func_0x000107c61174(lVar12);
  func_0x000107c61174(lVar13);
  func_0x000107c61174(lVar8);
  func_0x000107c61174(lVar10);
  func_0x000107c61174(lVar11);
  func_0x000107c61174(lVar22);
  func_0x000107c61174(lVar9);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar18 = PTR_PTR_1126ae720;
  func_0x000107c61174(lVar6);
  func_0x000107c61174(lVar14);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar19 = PTR_PTR_1126ae720;
  func_0x000107c61174(puVar17);
  func_0x000107c61174(lVar2);
  func_0x000107c61174(lVar22);
  func_0x000107c61174(lVar12);
  func_0x000107c61174(lVar11);
  func_0x000107c61174(lVar16);
  func_0x000107c61174(lVar3);
  func_0x000107c61174(lVar4);
  func_0x000107c61174(lVar5);
  func_0x000107c61174(lVar6);
  func_0x000107c61174(puVar18);
  func_0x000107c3e4fc(puVar19);
  func_0x000107c61180();
  puVar20 = PTR_PTR_1126ae720;
  func_0x000107c61174(puVar17);
  func_0x000107c61174(lVar4);
  func_0x000107c61174(lVar5);
  func_0x000107c61174(lVar6);
  func_0x000107c61174(lVar16);
  func_0x000107c61174(puVar18);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar21 = PTR_PTR_1126b9548;
  func_0x000107c610f4(PTR_PTR_1126b9548);
  func_0x000107c4596c();
  func_0x000107c61170(puVar20);
  func_0x000107c61170(puVar18);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(puVar17);
  func_0x000107c61170(puVar19);
  func_0x000107c61170(puVar18);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar22);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(puVar17);
  func_0x000107c61170(puVar18);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(puVar17);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar22);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar12);
  func_0x000107c61120(auStack_90);
  func_0x000107c61120(auStack_98);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_80);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar22);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar21);
  return;
}



/* Entry: 100487758; end: 100487843;  */

/* WARNING: Possible PIC construction at 0x000100487ba8: Changing call to branch */

void FUN_100487758(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  undefined1 *puVar3;
  long *plVar4;
  long *extraout_x8;
  long lVar5;
  long *plVar6;
  undefined1 *apuStack_e8 [2];
  char cStack_d1;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_b9;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  char *pcStack_88;
  undefined8 uStack_80;
  long lStack_58;
  ulong uStack_50;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_2 + 8);
  if ((char)*(byte *)(lVar5 + 0x87) < '\0') {
    lStack_58 = *(long *)(lVar5 + 0x70);
    uStack_50 = *(ulong *)(lVar5 + 0x78);
  }
  else {
    lStack_58 = lVar5 + 0x70;
    uStack_50 = (ulong)*(byte *)(lVar5 + 0x87);
  }
  pcStack_88 = "/owner/";
  uStack_80 = 7;
  uStack_b8 = param_3;
  uStack_b0 = param_4;
  FUN_100066c24(apuStack_e8,&lStack_58,&pcStack_88,&uStack_b8);
  puVar3 = &uStack_b9;
  FUN_100487844(&uStack_d0,puVar3,(long *)(param_2 + 8),apuStack_e8);
  if (cStack_d1 < '\0') {
    puVar3 = apuStack_e8[0];
    func_0x000107c60e14();
  }
  param_1[1] = uStack_c8;
  *param_1 = uStack_d0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  func_0x000107c60e78();
  if (cStack_d1 < '\0') {
    func_0x000107c60e14(apuStack_e8[0]);
  }
  func_0x000107c60bd8(puVar3);
  lVar5 = 0xd8;
  func_0x000107c60e20();
  FUN_100487ae4();
  *extraout_x8 = lVar5 + 0x18;
  extraout_x8[1] = lVar5;
  if (((long *)(lVar5 + 0x20) != (long *)0x0) &&
     ((plVar4 = *(long **)(lVar5 + 0x28), plVar4 == (long *)0x0 || (plVar4[1] == -1)))) {
    plVar6 = (long *)extraout_x8[1];
    if (plVar6 != (long *)0x0) {
      plVar4 = plVar6 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar4 = plVar6 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar4 = *(long **)(lVar5 + 0x28);
    }
    *(long *)(lVar5 + 0x20) = lVar5 + 0x18;
    *(long **)(lVar5 + 0x28) = plVar6;
    if (plVar4 != (long *)0x0) {
code_r0x000107c60d68:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
      return;
    }
    if (plVar6 != (long *)0x0) {
      plVar4 = plVar6 + 1;
      do {
        lVar5 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        plVar4 = plVar6;
        goto code_r0x000107c60d68;
      }
    }
  }
  return;
}



/* Entry: 100487844; end: 1004878ab;  */

/* WARNING: Possible PIC construction at 0x000100487ba8: Changing call to branch */

void FUN_100487844(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  lVar3 = 0xd8;
  func_0x000107c60e20();
  FUN_100487ae4();
  *param_1 = lVar3 + 0x18;
  param_1[1] = lVar3;
  if (((long *)(lVar3 + 0x20) != (long *)0x0) &&
     ((plVar4 = *(long **)(lVar3 + 0x28), plVar4 == (long *)0x0 || (plVar4[1] == -1)))) {
    plVar5 = (long *)param_1[1];
    if (plVar5 != (long *)0x0) {
      plVar4 = plVar5 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar4 = plVar5 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar4 = *(long **)(lVar3 + 0x28);
    }
    *(long *)(lVar3 + 0x20) = lVar3 + 0x18;
    *(long **)(lVar3 + 0x28) = plVar5;
    if (plVar4 != (long *)0x0) {
code_r0x000107c60d68:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
      return;
    }
    if (plVar5 != (long *)0x0) {
      plVar4 = plVar5 + 1;
      do {
        lVar3 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar3 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar3 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        plVar4 = plVar5;
        goto code_r0x000107c60d68;
      }
    }
  }
  return;
}



/* Entry: 1004878ac; end: 1004879ff;  */

undefined8 * FUN_1004878ac(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1107c5d28;
  lVar4 = param_2[1];
  param_1[3] = *param_2;
  param_1[4] = lVar4;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[6] = 0xc0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  FUN_100460318(param_1 + 8);
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  uVar8 = param_3[1];
  uVar7 = *param_3;
  param_1[0x17] = param_3[2];
  param_1[0x16] = uVar8;
  param_1[0x15] = uVar7;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  lVar4 = param_1[3];
  lVar5 = param_1[6];
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar4 + 0x10);
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 - lVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((-1 < lVar6) && (lVar6 < lVar5)) && (*(long *)(lVar4 + 0x60) != 0)) {
      func_0x000104acb90c();
    }
  }
  return param_1;
}



/* Entry: 100487a00; end: 100487ae3;  */

void FUN_100487a00(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_30;
  long *plStack_28;
  
  uStack_30 = *param_3;
  plVar2 = (long *)param_3[1];
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_48 = param_4[1];
  uStack_50 = *param_4;
  lStack_40 = param_4[2];
  param_4[1] = 0;
  param_4[2] = 0;
  *param_4 = 0;
  plStack_28 = plVar2;
  FUN_1004878ac(param_2,&uStack_30,&uStack_50);
  if (lStack_40 < 0) {
    func_0x000107c60e14(uStack_50);
  }
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar2);
      return;
    }
  }
  return;
}



/* Entry: 100487ae4; end: 100487b43;  */

undefined8 * FUN_100487ae4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_21;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1107c5fc8;
  FUN_100487a00(&uStack_21,param_1 + 3,param_2,param_3);
  return param_1;
}



/* Entry: 100487b44; end: 100487bf3;  */

/* WARNING: Possible PIC construction at 0x000100487ba8: Changing call to branch */

void FUN_100487b44(long param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  if ((param_2 != (undefined8 *)0x0) &&
     ((plVar3 = (long *)param_2[1], plVar3 == (long *)0x0 || (plVar3[1] == -1)))) {
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 != (long *)0x0) {
      plVar3 = plVar5 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = *plVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar3 = plVar5 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = *plVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar3 = (long *)param_2[1];
    }
    *param_2 = param_3;
    param_2[1] = plVar5;
    if (plVar3 != (long *)0x0) {
code_r0x000107c60d68:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar3);
      return;
    }
    if (plVar5 != (long *)0x0) {
      plVar3 = plVar5 + 1;
      do {
        lVar4 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        plVar3 = plVar5;
        goto code_r0x000107c60d68;
      }
    }
  }
  return;
}



/* Entry: 100487bf4; end: 100487c2b;  */

long * FUN_100487bf4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if ((long *)*param_1 != (long *)0x0) {
    (**(code **)(*(long *)*param_1 + 0x20))();
  }
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      func_0x000107c60d68(plVar5);
    }
  }
  return param_1;
}



/* Entry: 100487c2c; end: 100487c83;  */

long FUN_100487c2c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      func_0x000107c60d68(plVar5);
    }
  }
  return param_1;
}



/* Entry: 100487c84; end: 100487df7;  */

void FUN_100487c84(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long alStack_40 [3];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = param_2;
  if (param_2 != param_1) {
    plVar2 = (long *)param_1[3];
    plVar3 = (long *)param_2[3];
    if (plVar2 == param_1) {
      if (plVar3 == param_2) {
        (**(code **)(*param_1 + 0x18))(param_1,alStack_40);
        (**(code **)(*(long *)param_1[3] + 0x20))();
        param_1[3] = 0;
        (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],param_1);
        (**(code **)(*(long *)param_2[3] + 0x20))();
        param_2[3] = 0;
        param_1[3] = (long)param_1;
        (**(code **)(alStack_40[0] + 0x18))(alStack_40);
        (**(code **)(alStack_40[0] + 0x20))(alStack_40);
      }
      else {
        (**(code **)(*param_1 + 0x18))(param_1);
        (**(code **)(*(long *)param_1[3] + 0x20))();
        param_1[3] = param_2[3];
      }
      param_2[3] = (long)param_2;
    }
    else if (plVar3 == param_2) {
      plVar1 = param_1;
      (**(code **)(*param_2 + 0x18))(param_2);
      (**(code **)(*(long *)param_2[3] + 0x20))();
      param_2[3] = param_1[3];
      param_1[3] = (long)param_1;
    }
    else {
      param_1[3] = (long)plVar3;
      param_2[3] = (long)plVar2;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  func_0x000107c60e78();
  if ((int)plVar1 == 0) {
    func_0x000107c60bd8();
  }
  func_0x000104bd46a0();
  *plVar1 = (long)&PTR_DAT_1107c49e0;
  return;
}



/* Entry: 100487df8; end: 100487e0b;  */

void FUN_100487df8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1107c49e0;
  return;
}



/* Entry: 100487e0c; end: 100487e4b;  */

ulong * FUN_100487e0c(ulong *param_1)

{
  if (*param_1 == 0) {
    FUN_1004868c0(param_1 + 1);
  }
  else if ((*param_1 & 1) != 0) {
    FUN_10084dad0();
  }
  return param_1;
}



/* Entry: 100487e4c; end: 100487e9f;  */

undefined8 * FUN_100487e4c(undefined8 *param_1)

{
  *param_1 = &PTR____cxa_pure_virtual_1107c3390;
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    func_0x000107c60e14();
  }
  FUN_100478eac(param_1 + 7);
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    func_0x000107c60e14(param_1[3]);
  }
  return param_1;
}



/* Entry: 100487ea0; end: 100487f07;  */

ulong * FUN_100487ea0(ulong *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  if (*param_1 == 0) {
    plVar4 = (long *)param_1[1];
    if (plVar4 != (long *)0x0) {
      plVar1 = plVar4 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  else if ((*param_1 & 1) != 0) {
    FUN_10084dad0();
  }
  return param_1;
}



/* Entry: 100487f08; end: 100487fd3;  */

void FUN_100487f08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 *puStack_48;
  
  uVar1 = 200;
  func_0x000107c60e20(200);
  uStack_58 = param_4[1];
  uStack_60 = *param_4;
  uStack_50 = param_4[2];
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  FUN_100487fd4();
  FUN_1004888b4(param_1,uVar1);
  puStack_48 = (undefined1 *)&uStack_60;
  FUN_1004889dc(&puStack_48);
  return;
}



/* Entry: 100487fd4; end: 100487fd7;  */

undefined8 *
FUN_100487fd4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_DAT_1107c7b58;
  param_1[1] = &PTR_DAT_1107c7bb8;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_10046ddec(param_1 + 4,1);
  *param_1 = &PTR_DAT_1107c79e0;
  param_1[1] = &PTR_DAT_1107c7a40;
  param_1[4] = &PTR_DAT_1107c7a68;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_100033dac(param_1 + 6,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[8] = param_2[2];
    param_1[7] = uVar2;
    param_1[6] = uVar1;
  }
  param_1[9] = param_3;
  (**(code **)(*plRam0000000113815c70 + 0x70))(plRam0000000113815c70,param_1 + 10);
  param_1[0x18] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  FUN_100488844(param_1 + 0x13);
  uVar1 = *param_4;
  param_1[0x14] = param_4[1];
  param_1[0x13] = uVar1;
  param_1[0x15] = param_4[2];
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  return param_1;
}



/* Entry: 100487fd8; end: 10048810f;  */

undefined8 *
FUN_100487fd8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_DAT_1107c7b58;
  param_1[1] = &PTR_DAT_1107c7bb8;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_10046ddec(param_1 + 4,1);
  *param_1 = &PTR_DAT_1107c79e0;
  param_1[1] = &PTR_DAT_1107c7a40;
  param_1[4] = &PTR_DAT_1107c7a68;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_100033dac(param_1 + 6,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[8] = param_2[2];
    param_1[7] = uVar2;
    param_1[6] = uVar1;
  }
  param_1[9] = param_3;
  (**(code **)(*plRam0000000113815c70 + 0x70))(plRam0000000113815c70,param_1 + 10);
  param_1[0x18] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  FUN_100488844(param_1 + 0x13);
  uVar1 = *param_4;
  param_1[0x14] = param_4[1];
  param_1[0x13] = uVar1;
  param_1[0x15] = param_4[2];
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  return param_1;
}



/* Entry: 100488110; end: 100488117; -[SCUserNetworkServices nativeNetworkAPI] */

undefined8 FUN_100488110(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


