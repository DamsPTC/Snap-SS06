/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1004c0e48; end: 1004c1103;  */

undefined1  [16]
FUN_1004c0e48(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5,
             undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  code *pcVar2;
  ulong *puVar3;
  ulong *puVar4;
  long *plVar5;
  ulong *puVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  ulong uStack_80;
  long alStack_78 [3];
  long *plStack_60;
  long lStack_58;
  
  puVar6 = &uStack_80;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (ulong *)0x70;
  func_0x000107c60e20();
  FUN_1004c1104(alStack_78,param_7);
  if (0x7ffffffffffffff7 < param_3) {
    func_0x000104a6fa5c(puVar3);
    goto LAB_1004c1038;
  }
  if (param_3 < 0x17) {
    *(char *)((long)puVar3 + 0x17) = (char)param_3;
    puVar4 = puVar3;
    if (param_3 != 0) goto LAB_1004c0ef8;
  }
  else {
    uVar1 = (param_3 & 0xfffffffffffffff8) + 8;
    if ((param_3 | 7) != 0x17) {
      uVar1 = param_3 | 7;
    }
    puVar4 = (ulong *)(uVar1 + 1);
    func_0x000107c60e20();
    puVar3[1] = param_3;
    puVar3[2] = uVar1 + 1 | 0x8000000000000000;
    *puVar3 = (ulong)puVar4;
LAB_1004c0ef8:
    func_0x000107c610b8(puVar4,param_2,param_3);
  }
  *(undefined1 *)((long)puVar4 + param_3) = 0;
  puVar4 = puVar3 + 3;
  if (0x7ffffffffffffff7 < param_5) {
    func_0x000104a6fa5c(puVar4);
LAB_1004c1038:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1004c103c);
    (*pcVar2)();
  }
  if (param_5 < 0x17) {
    *(char *)((long)puVar3 + 0x2f) = (char)param_5;
    if (param_5 != 0) goto LAB_1004c0f60;
  }
  else {
    uVar1 = (param_5 & 0xfffffffffffffff8) + 8;
    if ((param_5 | 7) != 0x17) {
      uVar1 = param_5 | 7;
    }
    puVar4 = (ulong *)(uVar1 + 1);
    func_0x000107c60e20();
    puVar3[4] = param_5;
    puVar3[5] = uVar1 + 1 | 0x8000000000000000;
    puVar3[3] = (ulong)puVar4;
LAB_1004c0f60:
    func_0x000107c610b8(puVar4,param_4,param_5);
  }
  *(undefined1 *)((long)puVar4 + param_5) = 0;
  FUN_1004c1104(puVar3 + 6,alStack_78);
  puVar3[0xb] = (ulong)FUN_1004c18c8;
  puVar3[0xc] = (ulong)puVar3;
  puVar3[0xd] = 0;
  uStack_80 = 0;
  FUN_1004c1168(puVar3 + 10,&uStack_80,1,0);
  if ((uStack_80 & 1) != 0) {
    FUN_10084dad0();
  }
  if (plStack_60 == alStack_78) {
    lVar7 = 4;
    plVar5 = alStack_78;
LAB_1004c0fdc:
    (**(code **)(*plVar5 + lVar7 * 8))();
  }
  else {
    plVar5 = plStack_60;
    if (plStack_60 != (long *)0x0) {
      lVar7 = 5;
      goto LAB_1004c0fdc;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return ZEXT816(0);
  }
  func_0x000107c60e78();
  if ((int)puVar6 != 0) {
    func_0x000104bd46a0();
    if (*(char *)((long)puVar3 + 0x17) < '\0') {
      func_0x000107c60e14(*puVar3);
    }
    if (plStack_60 == alStack_78) {
      lVar7 = 4;
      plStack_60 = alStack_78;
LAB_1004c10e8:
      (**(code **)(*plStack_60 + lVar7 * 8))();
    }
    else if (plStack_60 != (long *)0x0) {
      lVar7 = 5;
      goto LAB_1004c10e8;
    }
    func_0x000107c60e14(puVar3);
  }
  func_0x000107c60bd8();
  plVar8 = (long *)(puVar6 + 3);
  plVar9 = (long *)*plVar8;
  if (plVar9 == (long *)0x0) {
    plVar8 = plVar5 + 3;
  }
  else {
    if ((ulong *)plVar9 == puVar6) {
      plVar5[3] = (long)plVar5;
      puVar6 = (ulong *)plVar5;
      (**(code **)(*(long *)*plVar8 + 0x18))((long *)*plVar8,plVar5);
      goto LAB_1004c1154;
    }
    plVar5[3] = (long)plVar9;
  }
  *plVar8 = 0;
LAB_1004c1154:
  auVar10._8_8_ = puVar6;
  auVar10._0_8_ = plVar5;
  return auVar10;
}



/* Entry: 1004c1104; end: 1004c1167;  */

long FUN_1004c1104(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_2 + 0x18);
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    plVar1 = (long *)(param_1 + 0x18);
  }
  else {
    if (lVar2 == param_2) {
      *(long *)(param_1 + 0x18) = param_1;
      (**(code **)(*(long *)*plVar1 + 0x18))((long *)*plVar1,param_1);
      return param_1;
    }
    *(long *)(param_1 + 0x18) = lVar2;
  }
  *plVar1 = 0;
  return param_1;
}



/* Entry: 1004c1168; end: 1004c11e3;  */

void FUN_1004c1168(undefined8 param_1,ulong *param_2,int param_3,int param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int *piVar4;
  ulong uStack_28;
  
  pcVar3 = (code *)(&PTR_DAT_1107c5888)[(long)param_3 * 2 + (long)param_4];
  uStack_28 = *param_2;
  if ((uStack_28 & 1) != 0) {
    piVar4 = (int *)(uStack_28 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  (*pcVar3)(param_1,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    FUN_10084dad0();
  }
  return;
}



/* Entry: 1004c11e4; end: 1004c1263;  */

void FUN_1004c11e4(undefined8 param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uVar5;
  ulong uStack_28;
  
  uVar3 = uRam00000001136a1fe0;
  uVar5 = *param_2;
  if ((uVar5 & 1) != 0) {
    piVar4 = (int *)(uVar5 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_28 = uVar5;
  FUN_1004c1264(uVar3,param_1,&uStack_28,1);
  if ((uVar5 & 1) != 0) {
    FUN_10084dad0(uVar5);
  }
  return;
}



/* Entry: 1004c1264; end: 1004c1647;  */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_1004c1264(undefined8 *param_1,undefined8 *param_2,ulong *param_3,byte param_4)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  int *piVar7;
  long extraout_x8;
  undefined *puVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  ulong uVar16;
  undefined2 auStack_a8 [4];
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined2 uStack_88;
  undefined6 uStack_86;
  undefined8 uStack_80;
  ulong uStack_78;
  ulong *puStack_70;
  ulong uStack_68;
  
  ppuVar4 = &PTR___tlv_bootstrap_11340d978;
  (*(code *)PTR___tlv_bootstrap_11340d978)();
  plVar10 = param_1 + 4;
  ppuVar15 = ppuVar4;
  while (uVar16 = param_1[3], uVar16 != 0) {
    puStack_70 = (ulong *)*param_3;
    if (((ulong)puStack_70 & 1) != 0) {
      piVar7 = (int *)((long)puStack_70 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = *piVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puVar5 = param_2;
    FUN_1004c1648(param_2,&puStack_70);
    puVar6 = puStack_70;
    if (((ulong)puStack_70 & 1) != 0) {
      FUN_10084dad0();
    }
    if (((ulong)puVar5 & 1) != 0) {
      return;
    }
    ppuVar13 = (undefined **)*ppuVar4;
    ppuVar14 = ppuVar13;
    if (ppuVar13 == (undefined **)0x0) {
      func_0x000100460dc4(param_1[1]);
      uVar11 = *puVar6;
      uVar12 = uVar11 >> 4 ^ uVar11 >> 9 ^ uVar11 >> 0xe;
      uVar11 = 0;
      if (uVar16 != 0) {
        uVar11 = uVar12 / uVar16;
      }
      ppuVar13 = (undefined **)(extraout_x8 + (uVar12 - uVar11 * uVar16) * 0xc0);
      ppuVar14 = ppuVar13;
    }
    while( true ) {
      FUN_100460448(ppuVar13);
      cVar2 = *(char *)((long)ppuVar13 + 0x99);
      if (cVar2 == '\0') break;
      ppuVar15 = ppuVar13;
      func_0x000100466b80();
      uVar11 = 0;
      if (uVar16 != 0) {
        uVar11 = (ulong)(ppuVar13[8] + 1) / uVar16;
      }
      ppuVar13 = (undefined **)(param_1[1] + ((long)(ppuVar13[8] + 1) - uVar11 * uVar16) * 0xc0);
      if (ppuVar13 == ppuVar14) goto LAB_1004c145c;
    }
    ppuVar15 = ppuVar13 + 0x10;
    if ((*ppuVar15 == (undefined *)0x0) && (*(char *)(ppuVar13 + 0x13) == '\0')) {
      func_0x000100466b64(ppuVar13 + 10);
    }
    uVar11 = *param_3;
    uStack_78 = uVar11;
    if ((uVar11 & 1) == 0) {
      if (param_2 != (undefined8 *)0x0) goto LAB_1004c13e8;
      goto LAB_1004c1418;
    }
    piVar7 = (int *)(uVar11 - 1);
    do {
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar3) {
        *piVar7 = *piVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (param_2 == (undefined8 *)0x0) {
LAB_1004c141c:
      FUN_10084dad0(uVar11);
    }
    else {
      do {
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = *piVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_1004c13e8:
      puVar6 = &uStack_98;
      uStack_98 = uVar11;
      FUN_1004bd890();
      param_2[3] = puVar6;
      if ((uStack_98 & 1) != 0) {
        FUN_10084dad0();
      }
      *param_2 = 0;
      if (*ppuVar15 != (undefined *)0x0) {
        ppuVar15 = (undefined **)ppuVar13[0x11];
      }
      *ppuVar15 = (undefined *)param_2;
      ppuVar13[0x11] = (undefined *)param_2;
LAB_1004c1418:
      if ((uVar11 & 1) != 0) goto LAB_1004c141c;
    }
    puVar8 = ppuVar13[0x12];
    ppuVar13[0x12] = puVar8 + 1;
    if ((puVar8 + 1 < (undefined *)0x3) || ((ulong)param_1[2] <= uVar16)) {
      *(byte *)((long)ppuVar13 + 0x99) = param_4 ^ 1;
      func_0x000100466b80(ppuVar13);
      return;
    }
    cVar1 = *(char *)(ppuVar13 + 0x13);
    *(byte *)((long)ppuVar13 + 0x99) = param_4 ^ 1;
    func_0x000100466b80();
    ppuVar15 = ppuVar13;
    if (cVar1 != '\0') {
      return;
    }
LAB_1004c145c:
    do {
      if (*plVar10 != 0) {
        ClearExclusiveLocal();
        goto joined_r0x0001004c152c;
      }
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    uVar16 = param_1[3];
    if (uVar16 < (ulong)param_1[2]) {
      param_1[3] = uVar16 + 1;
      auStack_a8[0] = 0x101;
      uStack_a0 = 0;
      FUN_100462a0c(&uStack_98,*param_1,FUN_100466d34,param_1[1] + uVar16 * 0xc0,0,auStack_a8);
      lVar9 = param_1[1];
      puVar6 = (ulong *)(lVar9 + uVar16 * 0xc0 + 0xa0);
      if (puVar6 != &uStack_98) {
        *(undefined4 *)puVar6 = (undefined4)uStack_98;
        lVar9 = lVar9 + uVar16 * 0xc0;
        *(undefined8 *)(lVar9 + 0xa8) = uStack_90;
        *(undefined8 *)(lVar9 + 0xb8) = uStack_80;
        *(ulong *)(lVar9 + 0xb0) = CONCAT62(uStack_86,uStack_88);
        uStack_98 = CONCAT44(uStack_98._4_4_,5);
        uStack_90 = 0;
        uStack_88 = 0x101;
        uStack_80 = 0;
      }
      FUN_1004629b0(&uStack_98);
      ppuVar15 = (undefined **)(param_1[1] + uVar16 * 0xc0 + 0xa0);
      FUN_100463850();
    }
    *plVar10 = 0;
joined_r0x0001004c152c:
    if (cVar2 == '\0') {
      return;
    }
  }
  func_0x000100460dc4();
  puVar8 = *ppuVar15;
  uVar16 = *param_3;
  uStack_68 = uVar16;
  if ((uVar16 & 1) == 0) {
    if (param_2 != (undefined8 *)0x0) goto LAB_1004c1598;
  }
  else {
    piVar7 = (int *)(uVar16 - 1);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar3) {
        *piVar7 = *piVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (param_2 == (undefined8 *)0x0) goto LAB_1004c15d0;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar3) {
        *piVar7 = *piVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_1004c1598:
    puVar6 = &uStack_98;
    uStack_98 = uVar16;
    FUN_1004bd890();
    param_2[3] = puVar6;
    if ((uStack_98 & 1) != 0) {
      FUN_10084dad0();
    }
    plVar10 = (long *)(puVar8 + 8);
    *param_2 = 0;
    if (*plVar10 != 0) {
      plVar10 = *(long **)(puVar8 + 0x10);
    }
    *plVar10 = (long)param_2;
    *(undefined8 **)(puVar8 + 0x10) = param_2;
  }
  if ((uVar16 & 1) == 0) {
    return;
  }
LAB_1004c15d0:
  FUN_10084dad0(uVar16);
  return;
}



/* Entry: 1004c1648; end: 1004c16c7;  */

undefined8 FUN_1004c1648(undefined8 param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int *piVar4;
  ulong uStack_28;
  
  pcVar3 = *(code **)(lRam00000001136a2078 + 0x28);
  uStack_28 = *param_2;
  if ((uStack_28 & 1) != 0) {
    piVar4 = (int *)(uStack_28 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  (*pcVar3)(param_1,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    FUN_10084dad0();
  }
  return param_1;
}



/* Entry: 1004c16c8; end: 1004c16eb;  */

undefined8 FUN_1004c16c8(void)

{
  return 0;
}



/* Entry: 1004c16ec; end: 1004c17cb;  */

void FUN_1004c16ec(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  code *extraout_x8;
  undefined8 *puVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x10);
  if ((*(byte *)(lVar5 + 0x124) & 1) == 0) {
    lVar3 = param_1;
    func_0x000107c60d9c();
    if ((*(byte *)(lVar5 + 0xb28) & 1) == 0) {
      *(undefined1 *)(lVar5 + 0xb28) = 1;
    }
    *(long *)(lVar5 + 0xb20) = lVar3;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x20);
    if (iVar2 != *(int *)(lVar5 + 0x120)) {
      lVar3 = param_1;
      func_0x000107c60d9c();
      FUN_1008e31fc(*(undefined4 *)(lVar5 + 0x120),lVar3 - *(long *)(lVar5 + 0xb20));
      if (iVar2 == 2) {
        FUN_1008e33ac();
      }
      if ((*(byte *)(lVar5 + 0xb28) & 1) == 0) {
        *(undefined1 *)(lVar5 + 0xb28) = 1;
      }
      *(long *)(lVar5 + 0xb20) = lVar3;
    }
  }
  lVar5 = *(long *)(param_1 + 0x10);
  *(undefined4 *)(lVar5 + 0x120) = *(undefined4 *)(param_1 + 0x20);
  *(undefined1 *)(lVar5 + 0x124) = 1;
  lVar5 = *(long *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x20) == 5) {
    *(undefined8 *)(lVar5 + 0x140) = *(undefined8 *)(lVar5 + 0x128);
  }
  puVar1 = *(undefined8 **)(lVar5 + 0x110);
  for (puVar4 = *(undefined8 **)(lVar5 + 0x108); puVar4 != puVar1; puVar4 = puVar4 + 1) {
    func_0x000100492554(*puVar4,*(undefined4 *)(param_1 + 0x20));
    (*extraout_x8)();
  }
  return;
}



/* Entry: 1004c17cc; end: 1004c18c7;  */

long FUN_1004c17cc(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_48 = 1;
  FUN_1004b6294();
  if (*param_1 == 0) {
    FUN_1004b6294();
    *param_1 = (long)&uStack_48;
  }
  lVar2 = 0;
  while (param_2 != (long *)0x0) {
    lVar3 = *param_2;
    func_0x0001004bd8dc(&puStack_50,param_2[3]);
    param_2[3] = 0;
    puStack_58 = puStack_50;
    puStack_50 = (undefined8 *)0x36;
    (*(code *)param_2[1])(param_2[2],&puStack_58);
    puVar1 = puStack_58;
    if (((ulong)puStack_58 & 1) != 0) {
      FUN_10084dad0();
    }
    func_0x000100460dc4();
    FUN_100467970(*puVar1);
    if (((ulong)puStack_50 & 1) != 0) {
      FUN_10084dad0();
    }
    lVar2 = lVar2 + 1;
    param_2 = (long *)lVar3;
  }
  FUN_1004b6ddc(&uStack_48);
  return lVar2;
}



/* Entry: 1004c18c8; end: 1004c1a0f;  */

void FUN_1004c18c8(long *param_1)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  plVar2 = param_1;
  FUN_1004c0c18();
  (**(code **)(*plVar2 + 0x18))(&lStack_50);
  lStack_70 = lStack_50;
  if (lStack_50 == 0) {
    uStack_60 = uStack_40;
    uStack_68 = uStack_48;
    uStack_58 = uStack_38;
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_48 = 0;
  }
  else {
    lStack_50 = 0x36;
  }
  plVar2 = (long *)param_1[9];
  if (plVar2 == (long *)0x0) {
    func_0x000104a71f98();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1004c19f4);
    (*pcVar1)();
  }
  (**(code **)(*plVar2 + 0x30))(plVar2,&lStack_70);
  plVar2 = param_1 + 6;
  FUN_1004da3a8(&lStack_70);
  plVar3 = (long *)param_1[9];
  if (plVar3 == plVar2) {
    lVar4 = 4;
  }
  else {
    if (plVar3 == (long *)0x0) goto LAB_1004c19a8;
    lVar4 = 5;
    plVar2 = plVar3;
  }
  (**(code **)(*plVar2 + lVar4 * 8))();
LAB_1004c19a8:
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    func_0x000107c60e14(param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    func_0x000107c60e14(*param_1);
  }
  func_0x000107c60e14(param_1);
  FUN_1004da3a8(&lStack_50);
  return;
}



/* Entry: 1004c1a10; end: 1004c228f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1004c1a10(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6)

{
  undefined *puVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  code *pcVar11;
  undefined8 *******pppppppuVar12;
  long *******ppppppplVar13;
  long *******ppppppplVar14;
  undefined *puVar15;
  undefined8 *******pppppppuVar16;
  long *******ppppppplVar17;
  bool bVar18;
  long lVar19;
  ulong **ppuVar20;
  int *piVar21;
  long lVar22;
  ulong *puVar23;
  ulong uVar24;
  ulong *puVar25;
  ulong uVar26;
  undefined *puVar27;
  long lVar28;
  byte bVar29;
  byte bVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  ulong auStack_260 [5];
  ulong uStack_238;
  ulong uStack_230;
  ulong auStack_228 [5];
  undefined8 ******ppppppuStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 uStack_1e1;
  ulong uStack_1e0;
  ulong uStack_1d8;
  undefined8 *******pppppppuStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  long *******ppppppplStack_1b8;
  ulong uStack_1b0;
  undefined8 uStack_1a8;
  ulong *puStack_1a0;
  ulong *puStack_198;
  ulong *apuStack_190 [2];
  ulong uStack_180;
  long lStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [72];
  undefined8 *******pppppppuStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
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
  undefined4 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_100460de4(auStack_140);
  uStack_180 = 0;
  lStack_178 = 0;
  puStack_1a0 = (ulong *)0x0;
  puStack_198 = (ulong *)0x0;
  apuStack_190[0] = (ulong *)0x0;
  ppppppplStack_1b8 = (long *******)0x0;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  pppppppuStack_1d0 = (undefined8 *******)0x0;
  puStack_1c8 = (undefined *)0x0;
  uStack_1c0 = 0;
  func_0x0001004c2450(param_3,param_4,&ppppppplStack_1b8,&pppppppuStack_1d0);
  uVar24 = uStack_1c0;
  bVar29 = uStack_1a8._7_1_;
  uVar26 = uStack_1b0;
  if (-1 < uStack_1a8) {
    uVar26 = (ulong)uStack_1a8._7_1_;
  }
  if (uVar26 == 0) {
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    ppppppuStack_200 = (undefined8 ******)0x0;
    func_0x000104ab5920(&uStack_1e0,2,"unparseable host:port",0x15,&uStack_1e1,&ppppppuStack_200);
    FUN_10084caf8(&uStack_1d8,&uStack_1e0,4,param_3,param_4);
    uVar26 = uStack_1d8;
    if (uStack_1d8 != 0) {
      uStack_180 = uStack_1d8;
      uStack_1d8 = 0x36;
    }
    if ((uStack_1e0 & 1) != 0) {
      FUN_10084dad0();
    }
    pppppppuStack_f8 = &ppppppuStack_200;
LAB_1004c1e24:
    func_0x000100482b64(&pppppppuStack_f8);
LAB_1004c2024:
    if (lStack_178 != 0) {
      func_0x000107c60fd4();
    }
    if (uVar26 == 0) goto LAB_1004c2084;
    if ((uVar26 & 1) != 0) {
      piVar21 = (int *)(uVar26 - 1);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar21,0x10);
        if (bVar4) {
          *piVar21 = *piVar21 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    auStack_260[0] = uVar26;
    func_0x000104addac4(&pppppppuStack_f8,auStack_260);
    if ((auStack_260[0] & 1) != 0) {
      FUN_10084dad0();
    }
    func_0x000104abea08(param_1,&pppppppuStack_f8);
    if (((ulong)pppppppuStack_f8 & 1) != 0) {
      FUN_10084dad0();
    }
  }
  else {
    puVar1 = puStack_1c8;
    if (-1 < (long)uStack_1c0) {
      puVar1 = (undefined *)(ulong)uStack_1c0._7_1_;
    }
    bVar30 = uStack_1c0._7_1_;
    if (puVar1 == (undefined *)0x0) {
      if (param_6 == (undefined *)0x0) {
        auStack_228[2] = 0;
        auStack_228[3] = 0;
        auStack_228[1] = 0;
        func_0x000104ab5920(auStack_228 + 4,2,"no port in name",0xf,&uStack_1e1,auStack_228 + 1);
        FUN_10084caf8(&uStack_1d8,auStack_228 + 4,4,param_3,param_4);
        uVar26 = uStack_1d8;
        if (uStack_1d8 != 0) {
          uStack_180 = uStack_1d8;
          uStack_1d8 = 0x36;
        }
        if ((auStack_228[4] & 1) != 0) {
          FUN_10084dad0();
        }
        pppppppuStack_f8 = (undefined8 *******)(auStack_228 + 1);
        goto LAB_1004c1e24;
      }
      if ((undefined *)0x7ffffffffffffff7 < param_6) goto LAB_1004c213c;
      if (param_6 < (undefined *)0x17) {
        uStack_e8 = CONCAT17((char)param_6,(undefined7)uStack_e8);
        pppppppuVar12 = &pppppppuStack_f8;
      }
      else {
        uVar26 = ((ulong)param_6 & 0xfffffffffffffff8) + 8;
        if (((ulong)param_6 | 7) != 0x17) {
          uVar26 = (ulong)param_6 | 7;
        }
        pppppppuVar12 = (undefined8 *******)(uVar26 + 1);
        func_0x000107c60e20();
        uStack_e8 = uVar26 + 1 | 0x8000000000000000;
        pppppppuStack_f8 = pppppppuVar12;
        puStack_f0 = param_6;
      }
      func_0x000107c610b8(pppppppuVar12,param_5,param_6);
      *(undefined1 *)((long)pppppppuVar12 + (long)param_6) = 0;
      if ((long)uVar24 < 0) {
        func_0x000107c60e14(pppppppuStack_1d0);
        bVar29 = uStack_1a8._7_1_;
      }
      uStack_1c0 = uStack_e8;
      puStack_1c8 = puStack_f0;
      pppppppuStack_1d0 = pppppppuStack_f8;
      bVar30 = (byte)(uStack_e8 >> 0x38);
    }
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_168 = 1;
    lStack_170 = 1;
    ppppppplVar13 = ppppppplStack_1b8;
    if (-1 < (char)bVar29) {
      ppppppplVar13 = (long *******)&ppppppplStack_1b8;
    }
    pppppppuVar12 = pppppppuStack_1d0;
    if (-1 < (char)bVar30) {
      pppppppuVar12 = &pppppppuStack_1d0;
    }
    func_0x000107c60ff8(ppppppplVar13,pppppppuVar12,&lStack_170,&lStack_178);
    ppppppplVar14 = ppppppplVar13;
    func_0x000100460dc4();
    uVar26 = uStack_1c0;
    puVar1 = puStack_1c8;
    pppppppuVar12 = pppppppuStack_1d0;
    *(undefined1 *)((long)*ppppppplVar14 + 0x34) = 0;
    if ((int)ppppppplVar13 != 0) {
      lVar28 = 0;
      puVar5 = (undefined *)(uStack_1c0 >> 0x38);
      bVar4 = true;
      do {
        bVar18 = bVar4;
        puVar27 = (&PTR_s_http_1107c58a8)[lVar28 * 2];
        puVar15 = puVar27;
        func_0x000107c613d0();
        if ((long)uVar26 < 0) {
          if (puVar15 == puVar1) {
            pppppppuVar16 = pppppppuVar12;
            if (puVar1 != (undefined *)0xffffffffffffffff) goto LAB_1004c1cd8;
            func_0x000104abe9e0(&pppppppuStack_1d0);
            goto LAB_1004c2144;
          }
        }
        else if (puVar15 == puVar5) {
          pppppppuVar16 = &pppppppuStack_1d0;
LAB_1004c1cd8:
          func_0x000107c610b0(pppppppuVar16,puVar27);
          if ((int)pppppppuVar16 == 0) {
            ppppppplVar13 = ppppppplStack_1b8;
            if (-1 < uStack_1a8) {
              ppppppplVar13 = (long *******)&ppppppplStack_1b8;
            }
            func_0x000107c60ff8(ppppppplVar13,(&PTR_s_80_1107c58b0)[lVar28 * 2],&lStack_170,
                                &lStack_178);
            ppppppplVar14 = ppppppplVar13;
            func_0x000100460dc4();
            *(undefined1 *)((long)*ppppppplVar14 + 0x34) = 0;
            break;
          }
        }
        lVar28 = 1;
        bVar4 = false;
      } while (bVar18);
      if ((int)ppppppplVar13 != 0) {
        ppppppplVar14 = ppppppplVar13;
        func_0x000107c60ff4(ppppppplVar13);
        ppppppplVar17 = ppppppplVar14;
        func_0x000107c613d0();
        auStack_260[2] = 0;
        auStack_260[3] = 0;
        auStack_260[1] = 0;
        func_0x000104ab5920(auStack_260 + 4,2,ppppppplVar14,ppppppplVar17,&uStack_1e1,
                            auStack_260 + 1);
        func_0x000104abaa50(&uStack_238,auStack_260 + 4,0,(long)(int)ppppppplVar13);
        func_0x000107c60ff4(ppppppplVar13);
        ppppppplVar14 = ppppppplVar13;
        func_0x000107c613d0();
        FUN_10084caf8(&uStack_230,&uStack_238,2,ppppppplVar13,ppppppplVar14);
        FUN_10084caf8(auStack_228,&uStack_230,3,"getaddrinfo",0xb);
        FUN_10084caf8(&uStack_1d8,auStack_228,4,param_3,param_4);
        uVar26 = uStack_1d8;
        if (uStack_1d8 != 0) {
          uStack_180 = uStack_1d8;
          uStack_1d8 = 0x36;
        }
        if ((auStack_228[0] & 1) != 0) {
          FUN_10084dad0();
        }
        if ((uStack_230 & 1) != 0) {
          FUN_10084dad0();
        }
        if ((uStack_238 & 1) != 0) {
          FUN_10084dad0();
        }
        if ((auStack_260[4] & 1) != 0) {
          FUN_10084dad0();
        }
        pppppppuStack_f8 = (undefined8 *******)(auStack_260 + 1);
        goto LAB_1004c1e24;
      }
    }
    if (lStack_178 != 0) {
      lVar28 = lStack_178;
      do {
        puVar25 = puStack_198;
        uVar2 = *(undefined4 *)(lVar28 + 0x10);
        func_0x000107c610b4(&pppppppuStack_f8,*(undefined8 *)(lVar28 + 0x20),uVar2);
        pppppppuVar12 = pppppppuStack_f8;
        uStack_78 = uVar2;
        if (puVar25 < apuStack_190[0]) {
          puVar25[1] = (ulong)puStack_f0;
          *puVar25 = (ulong)pppppppuVar12;
          uVar10 = uStack_b0;
          uVar9 = uStack_b8;
          uVar8 = uStack_c8;
          uVar7 = uStack_d0;
          uVar24 = uStack_d8;
          uVar26 = uStack_e8;
          puVar25[7] = uStack_c0;
          puVar25[6] = uVar8;
          puVar25[9] = uVar10;
          puVar25[8] = uVar9;
          puVar25[3] = uStack_e0;
          puVar25[2] = uVar26;
          puVar25[5] = uVar7;
          puVar25[4] = uVar24;
          uVar9 = uStack_80;
          uVar8 = uStack_88;
          uVar7 = uStack_98;
          uVar24 = uStack_a0;
          uVar26 = uStack_a8;
          *(undefined4 *)(puVar25 + 0x10) = uStack_78;
          puVar25[0xd] = uStack_90;
          puVar25[0xc] = uVar7;
          puVar25[0xf] = uVar9;
          puVar25[0xe] = uVar8;
          puVar25[0xb] = uVar24;
          puVar25[10] = uVar26;
          puVar25 = (ulong *)((long)puVar25 + 0x84);
        }
        else {
          lVar22 = (long)puVar25 - (long)puStack_1a0 >> 2;
          uVar26 = lVar22 * 0xf83e0f83e0f83e1 + 1;
          if (0x1f07c1f07c1f07c < uVar26) {
            func_0x000104abe9f4(&puStack_1a0);
            goto LAB_1004c2144;
          }
          lVar19 = (long)apuStack_190[0] - (long)puStack_1a0 >> 2;
          uVar24 = lVar19 * 0x1f07c1f07c1f07c2;
          if (uVar24 < uVar26 || uVar24 - uVar26 == 0) {
            uVar24 = uVar26;
          }
          if (0xf83e0f83e0f83d < (ulong)(lVar19 * 0xf83e0f83e0f83e1)) {
            uVar24 = 0x1f07c1f07c1f07c;
          }
          if (uVar24 == 0) {
            ppuVar20 = (ulong **)0x0;
          }
          else {
            ppuVar20 = apuStack_190;
            func_0x0001004c4400();
            puVar25 = puStack_198;
          }
          uVar26 = uStack_a8;
          puVar23 = (ulong *)((long)ppuVar20 + lVar22 * 4);
          puVar23[0xb] = uStack_a0;
          puVar23[10] = uVar26;
          uVar26 = uStack_98;
          puVar23[0xd] = uStack_90;
          puVar23[0xc] = uVar26;
          uVar26 = uStack_88;
          puVar23[0xf] = uStack_80;
          puVar23[0xe] = uVar26;
          *(undefined4 *)(puVar23 + 0x10) = uStack_78;
          uVar26 = uStack_e8;
          puVar23[3] = uStack_e0;
          puVar23[2] = uVar26;
          uVar26 = uStack_d8;
          puVar23[5] = uStack_d0;
          puVar23[4] = uVar26;
          uVar26 = uStack_c8;
          puVar23[7] = uStack_c0;
          puVar23[6] = uVar26;
          uVar26 = uStack_b8;
          puVar23[9] = uStack_b0;
          puVar23[8] = uVar26;
          pppppppuVar12 = pppppppuStack_f8;
          puVar23[1] = (ulong)puStack_f0;
          *puVar23 = (ulong)pppppppuVar12;
          puVar6 = puVar23;
          for (; puVar25 != puStack_1a0; puVar25 = (ulong *)((long)puVar25 + -0x84)) {
            uVar31 = *(undefined8 *)((long)puVar25 + -0x84);
            *(undefined8 *)((long)puVar6 + -0x7c) = *(undefined8 *)((long)puVar25 + -0x7c);
            *(undefined8 *)((long)puVar6 + -0x84) = uVar31;
            uVar32 = *(undefined8 *)((long)puVar25 + -0x6c);
            uVar31 = *(undefined8 *)((long)puVar25 + -0x74);
            uVar34 = *(undefined8 *)((long)puVar25 + -0x5c);
            uVar33 = *(undefined8 *)((long)puVar25 + -100);
            uVar36 = *(undefined8 *)((long)puVar25 + -0x4c);
            uVar35 = *(undefined8 *)((long)puVar25 + -0x54);
            uVar37 = *(undefined8 *)((long)puVar25 + -0x44);
            *(undefined8 *)((long)puVar6 + -0x3c) = *(undefined8 *)((long)puVar25 + -0x3c);
            *(undefined8 *)((long)puVar6 + -0x44) = uVar37;
            *(undefined8 *)((long)puVar6 + -0x4c) = uVar36;
            *(undefined8 *)((long)puVar6 + -0x54) = uVar35;
            *(undefined8 *)((long)puVar6 + -0x5c) = uVar34;
            *(undefined8 *)((long)puVar6 + -100) = uVar33;
            *(undefined8 *)((long)puVar6 + -0x6c) = uVar32;
            *(undefined8 *)((long)puVar6 + -0x74) = uVar31;
            uVar32 = *(undefined8 *)((long)puVar25 + -0x2c);
            uVar31 = *(undefined8 *)((long)puVar25 + -0x34);
            uVar34 = *(undefined8 *)((long)puVar25 + -0x1c);
            uVar33 = *(undefined8 *)((long)puVar25 + -0x24);
            uVar36 = *(undefined8 *)((long)puVar25 + -0xc);
            uVar35 = *(undefined8 *)((long)puVar25 + -0x14);
            *(undefined4 *)((long)puVar6 + -4) = *(undefined4 *)((long)puVar25 + -4);
            *(undefined8 *)((long)puVar6 + -0xc) = uVar36;
            *(undefined8 *)((long)puVar6 + -0x14) = uVar35;
            *(undefined8 *)((long)puVar6 + -0x1c) = uVar34;
            *(undefined8 *)((long)puVar6 + -0x24) = uVar33;
            *(undefined8 *)((long)puVar6 + -0x2c) = uVar32;
            *(undefined8 *)((long)puVar6 + -0x34) = uVar31;
            puVar6 = (ulong *)((long)puVar6 + -0x84);
          }
          apuStack_190[0] = (ulong *)((long)ppuVar20 + uVar24 * 0x84);
          puVar25 = (ulong *)((long)puVar23 + 0x84);
          bVar4 = puStack_1a0 != (ulong *)0x0;
          puStack_1a0 = puVar6;
          if (bVar4) {
            puStack_198 = puVar25;
            func_0x000107c60e14();
          }
        }
        lVar28 = *(long *)(lVar28 + 0x28);
        puStack_198 = puVar25;
      } while (lVar28 != 0);
      uVar26 = 0;
      goto LAB_1004c2024;
    }
LAB_1004c2084:
    uVar26 = 0;
    param_1[2] = puStack_198;
    param_1[1] = puStack_1a0;
    param_1[3] = apuStack_190[0];
    puStack_198 = (ulong *)0x0;
    apuStack_190[0] = (ulong *)0x0;
    puStack_1a0 = (ulong *)0x0;
    *param_1 = 0;
  }
  if ((long)uStack_1c0 < 0) {
    func_0x000107c60e14(pppppppuStack_1d0);
  }
  if (uStack_1a8 < 0) {
    func_0x000107c60e14(ppppppplStack_1b8);
  }
  if (puStack_1a0 != (ulong *)0x0) {
    puStack_198 = puStack_1a0;
    func_0x000107c60e14();
  }
  if ((uVar26 & 1) != 0) {
    FUN_10084dad0(uVar26);
  }
  FUN_100467a48(auStack_140);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  func_0x000107c60e78();
LAB_1004c213c:
  func_0x000104a6fa5c(&pppppppuStack_f8);
LAB_1004c2144:
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x1004c2148);
  (*pcVar11)();
}



/* Entry: 1004c2290; end: 1004c25e3;  */

undefined1  [16]
FUN_1004c2290(char *param_1,char *param_2,long *param_3,long *param_4,undefined1 *param_5)

{
  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 **ppuVar6;
  undefined1 **ppuVar7;
  undefined **ppuVar8;
  char *pcVar9;
  char *pcVar10;
  long *plVar11;
  char *pcVar12;
  undefined1 **ppuVar13;
  char *pcVar14;
  undefined1 **ppuVar15;
  char *pcVar16;
  char *unaff_x26;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 *puStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  char cStack_c1;
  char *pcStack_c0;
  ulong uStack_b8;
  char *pcStack_b0;
  ulong uStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  char *pcStack_90;
  char *pcStack_88;
  char *pcStack_80;
  undefined1 *puStack_78;
  long *plStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  
  *param_5 = 0;
  pcVar9 = param_2;
  if (param_2 == (char *)0x0) {
LAB_1004c2364:
    *param_3 = (long)param_1;
    param_3[1] = (long)param_2;
    uVar4 = 1;
    *param_4 = 0;
    param_4[1] = 0;
LAB_1004c2420:
    auVar17._8_8_ = pcVar9;
    auVar17._0_8_ = uVar4;
    return auVar17;
  }
  plVar11 = param_4;
  if (*param_1 == '[') {
    if (param_2 < (char *)0x2) {
LAB_1004c241c:
      uVar4 = 0;
      goto LAB_1004c2420;
    }
    pcVar16 = param_2 + -1;
    pcVar14 = param_1 + 1;
    pcVar9 = (char *)0x5d;
    pcVar12 = pcVar14;
    pcVar10 = pcVar16;
    func_0x000107c610ac(pcVar14,0x5d);
    uVar4 = 0;
    if ((pcVar12 == (char *)0x0) ||
       (pcVar12 = pcVar12 + -(long)param_1, pcVar12 == (char *)0xffffffffffffffff))
    goto LAB_1004c2420;
    if (pcVar12 == pcVar16) {
      *param_4 = 0;
      param_4[1] = 0;
LAB_1004c23e4:
      if (pcVar12 + -1 <= pcVar16) {
        pcVar16 = pcVar12 + -1;
      }
      *param_3 = (long)pcVar14;
      param_3[1] = (long)pcVar16;
      if (pcVar16 != (char *)0x0) {
        pcVar9 = (char *)0x3a;
        pcVar16 = pcVar14;
        func_0x000107c610ac(pcVar14,0x3a);
        if ((pcVar16 != (char *)0x0) && ((long)pcVar16 - (long)pcVar14 != -1)) {
          uVar4 = 1;
          goto LAB_1004c2420;
        }
      }
      uVar4 = 0;
      *param_3 = 0;
      param_3[1] = 0;
      goto LAB_1004c2420;
    }
    if ((pcVar12 + (long)param_1)[1] != ':') goto LAB_1004c241c;
    pcVar1 = pcVar12 + 2;
    if (pcVar1 <= param_2) {
      pcVar10 = param_2 + -(long)pcVar1;
      if (param_2 + (-2 - (long)pcVar12) <= param_2 + -(long)pcVar1) {
        pcVar10 = param_2 + (-2 - (long)pcVar12);
      }
      *param_4 = (long)(param_1 + (long)pcVar1);
      param_4[1] = (long)pcVar10;
      *param_5 = 1;
      goto LAB_1004c23e4;
    }
  }
  else {
    pcVar9 = (char *)0x3a;
    pcVar16 = param_1;
    pcVar10 = param_2;
    func_0x000107c610ac(param_1,0x3a);
    if ((pcVar16 == (char *)0x0) ||
       (pcVar16 = pcVar16 + -(long)param_1, pcVar16 == (char *)0xffffffffffffffff))
    goto LAB_1004c2364;
    unaff_x26 = pcVar16 + 1;
    pcVar14 = param_2 + -(long)unaff_x26;
    if (unaff_x26 <= param_2 && pcVar14 != (char *)0x0) {
      pcVar12 = param_1 + (long)unaff_x26;
      pcVar9 = (char *)0x3a;
      pcVar10 = pcVar14;
      func_0x000107c610ac(pcVar12,0x3a);
      if ((pcVar12 != (char *)0x0) && ((long)pcVar12 - (long)param_1 != -1)) goto LAB_1004c2364;
    }
    pcVar12 = param_2;
    if (pcVar16 <= param_2) {
      pcVar12 = pcVar16;
    }
    *param_3 = (long)param_1;
    param_3[1] = (long)pcVar12;
    if (pcVar16 < param_2) {
      if (param_2 + ~(ulong)pcVar16 <= pcVar14) {
        pcVar14 = param_2 + ~(ulong)pcVar16;
      }
      *param_4 = (long)(param_1 + (long)unaff_x26);
      param_4[1] = (long)pcVar14;
      uVar4 = 1;
      *param_5 = 1;
      goto LAB_1004c2420;
    }
  }
  puVar5 = &UNK_10f2fca6e;
  func_0x000104a6f9e8();
  ppuVar6 = &puStack_e0;
  ppuVar15 = &puStack_e0;
  ppuVar7 = &puStack_e0;
  ppuVar13 = &puStack_e0;
  uStack_58 = 0x1004c2450;
  pcStack_b0 = (char *)0x0;
  uStack_a8 = 0;
  pcStack_c0 = (char *)0x0;
  uStack_b8 = 0;
  pcStack_a0 = unaff_x26;
  pcStack_98 = pcVar16;
  pcStack_90 = pcVar14;
  pcStack_88 = param_2;
  pcStack_80 = param_1;
  puStack_78 = param_5;
  plStack_70 = param_4;
  plStack_68 = param_3;
  puStack_60 = &stack0xfffffffffffffff0;
  FUN_1004c2290();
  uVar3 = uStack_a8;
  pcVar16 = pcStack_b0;
  if ((int)puVar5 == 0) goto LAB_1004c25bc;
  if (0x7ffffffffffffff7 < uStack_a8) goto LAB_1004c25dc;
  if (uStack_a8 < 0x17) {
    uStack_d0 = CONCAT17((char)uStack_a8,(undefined7)uStack_d0);
    if (uStack_a8 != 0) goto LAB_1004c24f4;
  }
  else {
    uVar2 = (uStack_a8 & 0xfffffffffffffff8) + 8;
    if ((uStack_a8 | 7) != 0x17) {
      uVar2 = uStack_a8 | 7;
    }
    ppuVar6 = (undefined1 **)(uVar2 + 1);
    func_0x000107c60e20();
    uStack_d0 = (ulong)(uVar2 + 1) | 0x8000000000000000;
    uStack_d8 = uVar3;
    puStack_e0 = (undefined1 *)ppuVar6;
LAB_1004c24f4:
    func_0x000107c610b8(ppuVar6,pcVar16,uVar3);
    pcVar9 = pcVar16;
    ppuVar15 = ppuVar6;
  }
  *(undefined1 *)((long)ppuVar15 + uVar3) = 0;
  if (pcVar10[0x17] < '\0') {
    func_0x000107c60e14(*(undefined8 *)pcVar10);
  }
  uVar3 = uStack_b8;
  pcVar16 = pcStack_c0;
  *(ulong *)(pcVar10 + 8) = uStack_d8;
  *(undefined1 **)pcVar10 = puStack_e0;
  *(ulong *)(pcVar10 + 0x10) = uStack_d0;
  if (cStack_c1 == '\0') goto LAB_1004c25bc;
  if (0x7ffffffffffffff7 < uStack_b8) {
LAB_1004c25dc:
    func_0x000104a6fa5c(&puStack_e0);
    ppuVar8 = &PTR_PTR_11298c968;
    func_0x000107c61168(&PTR_PTR_11298c968);
    auVar19._8_8_ = 0;
    auVar19._0_8_ = ppuVar8;
    return auVar19;
  }
  if (uStack_b8 < 0x17) {
    uStack_d0 = CONCAT17((char)uStack_b8,(undefined7)uStack_d0);
    if (uStack_b8 != 0) goto LAB_1004c2588;
  }
  else {
    uVar2 = (uStack_b8 & 0xfffffffffffffff8) + 8;
    if ((uStack_b8 | 7) != 0x17) {
      uVar2 = uStack_b8 | 7;
    }
    ppuVar7 = (undefined1 **)(uVar2 + 1);
    func_0x000107c60e20();
    uStack_d0 = (ulong)(uVar2 + 1) | 0x8000000000000000;
    uStack_d8 = uVar3;
    puStack_e0 = (undefined1 *)ppuVar7;
LAB_1004c2588:
    func_0x000107c610b8(ppuVar7,pcVar16,uVar3);
    pcVar9 = pcVar16;
    ppuVar13 = ppuVar7;
  }
  *(undefined1 *)((long)ppuVar13 + uVar3) = 0;
  if (*(char *)((long)plVar11 + 0x17) < '\0') {
    func_0x000107c60e14(*plVar11);
  }
  plVar11[1] = uStack_d8;
  *plVar11 = (long)puStack_e0;
  plVar11[2] = uStack_d0;
LAB_1004c25bc:
  auVar18._8_8_ = pcVar9;
  auVar18._0_8_ = puVar5;
  return auVar18;
}



/* Entry: 1004c25e4; end: 1004c2603;  */

void FUN_1004c25e4(void)

{
  func_0x000107c61168(&PTR_PTR_11298c968);
  return;
}



/* Entry: 1004c2604; end: 1004c264b; -[GPBInt32ObjectDictionary dealloc] */

void FUN_1004c2604(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x000107c61170(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_11270e898;
  lStack_30 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1004c264c; end: 1004c2693; -[GPBInt32Array dealloc] */

void FUN_1004c264c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x000107c60fd0(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_11270e788;
  lStack_30 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1004c2694; end: 1004c28a7;  */

void FUN_1004c2694(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  uVar3 = *(undefined1 *)(*(long *)(param_2 + 8) + 0x1e);
  uVar5 = param_1;
  func_0x000100109988();
  iVar4 = (int)param_3 + 8;
  FUN_100109638();
  uVar7 = *(ulong *)(param_3 + 0x18);
  uVar2 = *(ulong *)(param_3 + 0x20);
  uVar1 = uVar7 + (long)iVar4;
  if (uVar2 < uVar1) {
    func_0x000107c3ab00(0xffffffffffffff9a,0);
    uVar7 = *(ulong *)(param_3 + 0x18);
  }
  *(ulong *)(param_3 + 0x20) = uVar1;
  if (uVar1 != uVar7) {
    do {
      switch(uVar3) {
      case 0:
        FUN_100109638(param_3 + 8);
        goto code_r0x0001004c2820;
      case 1:
      case 2:
        func_0x0001001095dc(param_3 + 8,4);
        *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 4;
        goto code_r0x0001004c2820;
      case 3:
        func_0x0001001095dc(param_3 + 8,4);
        uVar8 = *(undefined4 *)(*(long *)(param_3 + 8) + *(long *)(param_3 + 0x18));
        *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 4;
        func_0x000107c3d93c(uVar8,uVar5);
        break;
      case 4:
      case 5:
        func_0x0001001095dc(param_3 + 8,8);
        *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 8;
        goto code_r0x0001004c27ec;
      case 6:
        func_0x0001001095dc(param_3 + 8,8);
        uVar9 = *(undefined8 *)(*(long *)(param_3 + 8) + *(long *)(param_3 + 0x18));
        *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 8;
        func_0x000107c3d93c(uVar9,uVar5);
        break;
      case 7:
      case 0xb:
        FUN_100109638(param_3 + 8);
        goto code_r0x0001004c2820;
      case 8:
      case 0xc:
        FUN_100109638(param_3 + 8);
        goto code_r0x0001004c27ec;
      case 9:
        FUN_100109638(param_3 + 8);
code_r0x0001004c2820:
        func_0x000107c3d93c(uVar5);
        break;
      case 10:
        FUN_100109638(param_3 + 8);
code_r0x0001004c27ec:
        func_0x000107c3d93c(uVar5);
        break;
      case 0x11:
        FUN_100109638(param_3 + 8);
        if (((*(ushort *)(*(long *)(param_2 + 8) + 0x1c) >> 0xc & 1) == 0) ||
           (lVar6 = param_2, func_0x000107c4a6c0(), (int)lVar6 != 0)) {
          func_0x000107c3d810(uVar5);
        }
        else {
          func_0x000107c31890(param_1);
          func_0x000107c4cd68();
        }
      }
    } while (*(long *)(param_3 + 0x20) != *(long *)(param_3 + 0x18));
  }
  *(ulong *)(param_3 + 0x20) = uVar2;
  return;
}



/* Entry: 1004c28a8; end: 1004c290f; +[RTUSFilteringNullComparison descriptor] */

void FUN_1004c28a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0e30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c2a9b0,
                        &PTR____CFConstantStringClassReference_110f3dcf8,&PTR_DAT_11333e330,
                        &PTR_DAT_11333e568,3,0x10,0x1c);
    puRam00000001137f0e30 = puVar1;
  }
  return;
}



/* Entry: 1004c2910; end: 1004c2977; +[RTUSFilteringIsInt descriptor] */

void FUN_1004c2910(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0e38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c2aa00,
                        &PTR____CFConstantStringClassReference_110f3dd18,&PTR_DAT_11333e330,
                        &PTR_DAT_11333e3c8,1,0x10,0x1c);
    puRam00000001137f0e38 = puVar1;
  }
  return;
}



/* Entry: 1004c2978; end: 1004c2a03; +[RTUSFilteringNumberInequalityComparison descriptor] */

undefined * FUN_1004c2978(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0e10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c2a870,
                        &PTR____CFConstantStringClassReference_110f3dc78,&PTR_DAT_11333e330,
                        &PTR_DAT_11333e648,4,0x28,0x1c);
    func_0x000107c5a8b4();
    puRam00000001137f0e10 = puVar1;
  }
  return puRam00000001137f0e10;
}



/* Entry: 1004c2a04; end: 1004c2a7f;  */

undefined * FUN_1004c2a04(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f0dc8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x000107c3dbd4(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f3db58,
                        &UNK_10e53f09c,&UNK_10e53f0dc,5,&UNK_10af6dbdc,0);
    do {
      if (puRam00000001137f0dc8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        func_0x000107c61170();
        return puRam00000001137f0dc8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f0dc8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f0dc8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f0dc8;
}



/* Entry: 1004c2a80; end: 1004c2b1b; -[SCRTUSProductConfig eventPayloadIdToEventFieldsMap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004c2a80(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(param_1 + _DAT_11305ed18);
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    uVar1 = 0;
    FUN_1004c0060(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c61434(lVar4);
    uVar2 = 0x11305ed58;
    FUN_1000285a8(0x11305ed58,&UNK_10dcd3688);
    uVar3 = uVar2;
    FUN_100120cb0();
    lVar5 = lVar4;
    func_0x000107c5f9dc(lVar4,uVar1,uVar2,uVar3);
    func_0x000107c6142c(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 1004c2b1c; end: 1004c2b7f;  */

undefined ** FUN_1004c2b1c(void)

{
  int iVar1;
  
  if ((bRam0000000113819808 & 1) == 0) {
    iVar1 = 0x13819808;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      func_0x000107c60e34(&DAT_105004938,&PTR_PTR_1130d5658,0x100000000);
      func_0x000107c60e4c(0x113819808);
    }
  }
  return &PTR_PTR_1130d5658;
}



/* Entry: 1004c2b80; end: 1004c2bb3;  */

void FUN_1004c2b80(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long *plStack_68;
  long lStack_60;
  long lStack_58;
  long *plStack_50;
  long *plStack_48;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    func_0x000107c60e20((long)param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  plVar3 = param_1 + 2;
  lVar4 = *param_1;
  if ((undefined8 *)(*plVar3 - lVar4 >> 3) < param_2) {
    if ((ulong)param_2 >> 0x3d != 0) {
      func_0x000105005c10();
      FUN_1004c2cec(&plStack_68);
      func_0x000107c60bd8();
      puVar10 = (undefined8 *)*plVar3;
      puVar2 = (undefined8 *)plVar3[1];
      puVar1 = (undefined8 *)((long)puVar10 + (param_2[1] - (long)puVar2));
      puVar5 = puVar10;
      puVar8 = puVar1;
      if (puVar2 != puVar10) {
        do {
          uVar9 = *puVar5;
          puVar6 = puVar5 + 1;
          *puVar5 = 0;
          *puVar8 = uVar9;
          puVar5 = puVar6;
          puVar8 = puVar8 + 1;
        } while (puVar6 != puVar2);
        do {
          puVar5 = puVar10 + 1;
          func_0x000107c61170(*puVar10);
          puVar10 = puVar5;
        } while (puVar5 != puVar2);
        puVar10 = (undefined8 *)*plVar3;
      }
      param_2[1] = puVar1;
      *plVar3 = (long)puVar1;
      plVar3[1] = (long)puVar10;
      param_2[1] = puVar10;
      lVar4 = plVar3[1];
      plVar3[1] = param_2[2];
      param_2[2] = lVar4;
      lVar4 = plVar3[2];
      plVar3[2] = param_2[3];
      param_2[3] = lVar4;
      *param_2 = param_2[1];
      return;
    }
    lVar7 = param_1[1];
    plStack_48 = plVar3;
    FUN_1004c2b80();
    lStack_60 = (long)plVar3 + (lVar7 - lVar4);
    plStack_50 = plVar3 + (long)param_2;
    plStack_68 = plVar3;
    lStack_58 = lStack_60;
    FUN_1004c2c40(param_1,&plStack_68);
    FUN_1004c2cec(&plStack_68);
  }
  return;
}



/* Entry: 1004c2bb4; end: 1004c2c3f;  */

void FUN_1004c2bb4(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long *plStack_48;
  long lStack_40;
  long lStack_38;
  long *plStack_30;
  long *plStack_28;
  
  plVar3 = param_1 + 2;
  lVar4 = *param_1;
  if ((undefined8 *)(*plVar3 - lVar4 >> 3) < param_2) {
    if ((ulong)param_2 >> 0x3d != 0) {
      func_0x000105005c10();
      FUN_1004c2cec(&plStack_48);
      func_0x000107c60bd8();
      puVar10 = (undefined8 *)*plVar3;
      puVar2 = (undefined8 *)plVar3[1];
      puVar1 = (undefined8 *)((long)puVar10 + (param_2[1] - (long)puVar2));
      puVar5 = puVar10;
      puVar8 = puVar1;
      if (puVar2 != puVar10) {
        do {
          uVar9 = *puVar5;
          puVar6 = puVar5 + 1;
          *puVar5 = 0;
          *puVar8 = uVar9;
          puVar5 = puVar6;
          puVar8 = puVar8 + 1;
        } while (puVar6 != puVar2);
        do {
          puVar5 = puVar10 + 1;
          func_0x000107c61170(*puVar10);
          puVar10 = puVar5;
        } while (puVar5 != puVar2);
        puVar10 = (undefined8 *)*plVar3;
      }
      param_2[1] = puVar1;
      *plVar3 = (long)puVar1;
      plVar3[1] = (long)puVar10;
      param_2[1] = puVar10;
      lVar4 = plVar3[1];
      plVar3[1] = param_2[2];
      param_2[2] = lVar4;
      lVar4 = plVar3[2];
      plVar3[2] = param_2[3];
      param_2[3] = lVar4;
      *param_2 = param_2[1];
      return;
    }
    lVar7 = param_1[1];
    plStack_28 = plVar3;
    FUN_1004c2b80();
    lStack_40 = (long)plVar3 + (lVar7 - lVar4);
    plStack_30 = plVar3 + (long)param_2;
    plStack_48 = plVar3;
    lStack_38 = lStack_40;
    FUN_1004c2c40(param_1,&plStack_48);
    FUN_1004c2cec(&plStack_48);
  }
  return;
}



/* Entry: 1004c2c40; end: 1004c2ceb;  */

void FUN_1004c2c40(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  puVar8 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)((long)puVar8 + (param_2[1] - (long)puVar2));
  puVar3 = puVar8;
  puVar6 = puVar1;
  if (puVar2 != puVar8) {
    do {
      uVar7 = *puVar3;
      puVar4 = puVar3 + 1;
      *puVar3 = 0;
      *puVar6 = uVar7;
      puVar3 = puVar4;
      puVar6 = puVar6 + 1;
    } while (puVar4 != puVar2);
    do {
      puVar3 = puVar8 + 1;
      func_0x000107c61170(*puVar8);
      puVar8 = puVar3;
    } while (puVar3 != puVar2);
    puVar8 = (undefined8 *)*param_1;
  }
  param_2[1] = puVar1;
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar8;
  param_2[1] = puVar8;
  lVar5 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar5;
  lVar5 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar5;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1004c2cec; end: 1004c2d3b;  */

long * FUN_1004c2cec(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar1 != lVar2) {
    param_1[2] = lVar2 + -8;
    func_0x000107c61170(*(undefined8 *)(lVar2 + -8));
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 1004c2d3c; end: 1004c2e3b;  */

ulong * FUN_1004c2d3c(long *param_1,undefined8 *param_2,ulong param_3,long *param_4)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  ulong *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong *puStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  ulong *puStack_40;
  ulong *puStack_38;
  
  puVar4 = (ulong *)(param_1 + 2);
  puVar9 = (undefined8 *)param_1[1];
  if (puVar9 < (undefined8 *)*puVar4) {
    uVar8 = *param_2;
    func_0x000107c61174(uVar8);
    puVar11 = puVar9 + 1;
    *puVar9 = uVar8;
    param_1[1] = (long)puVar11;
  }
  else {
    lVar10 = (long)puVar9 - *param_1;
    uVar1 = (lVar10 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      func_0x000105005c10();
      uVar5 = SUB84(param_2,0);
      FUN_1004c2cec(&puStack_58);
      func_0x000107c60bd8();
      uVar3 = *(undefined2 *)(param_3 + 0x19);
      uVar2 = *(undefined1 *)(param_3 + 0x1b);
      *(undefined4 *)(puVar4 + 1) = uVar5;
      *(undefined1 *)(puVar4 + 3) = 0;
      *(undefined2 *)((long)puVar4 + 0x19) = uVar3;
      *(undefined1 *)((long)puVar4 + 0x1b) = uVar2;
      *puVar4 = (ulong)&PTR_DAT_110862700;
      puVar4[7] = param_3;
      puVar4[9] = 0;
      puVar4[8] = 0;
      puVar4[0xb] = 0;
      puVar4[10] = 0;
      FUN_1004c2ee8(puVar4 + 9,*param_4,param_4[1],param_4[1] - *param_4 >> 3);
      puVar4[0xc] = 0;
      puVar4[0xd] = 0;
      return puVar4;
    }
    uVar6 = (long)*puVar4 - *param_1;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    puStack_38 = puVar4;
    if (uVar7 == 0) {
      puStack_58 = (ulong *)0x0;
    }
    else {
      FUN_1004c2b80();
      puStack_58 = puVar4;
    }
    puVar9 = (undefined8 *)((long)puStack_58 + lVar10);
    puStack_40 = puStack_58 + uVar7;
    uVar8 = *param_2;
    puStack_50 = puVar9;
    func_0x000107c61174(uVar8);
    puStack_48 = puVar9 + 1;
    *puVar9 = uVar8;
    FUN_1004c2c40(param_1,&puStack_58);
    puVar11 = (undefined8 *)param_1[1];
    FUN_1004c2cec(&puStack_58);
  }
  param_1[1] = (long)puVar11;
  return puVar11 + -1;
}



/* Entry: 1004c2e3c; end: 1004c2eab;  */

undefined8 * FUN_1004c2e3c(undefined8 *param_1,undefined4 param_2,long param_3,long *param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  
  uVar2 = *(undefined2 *)(param_3 + 0x19);
  uVar1 = *(undefined1 *)(param_3 + 0x1b);
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined2 *)((long)param_1 + 0x19) = uVar2;
  *(undefined1 *)((long)param_1 + 0x1b) = uVar1;
  *param_1 = &PTR_DAT_110862700;
  param_1[7] = param_3;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  FUN_1004c2ee8(param_1 + 9,*param_4,param_4[1],param_4[1] - *param_4 >> 3);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return param_1;
}



/* Entry: 1004c2eac; end: 1004c2ee7;  */

void FUN_1004c2eac(long *param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    plVar1 = param_1 + 2;
    FUN_1004c2b80();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + (long)param_2);
    return;
  }
  func_0x000105005c10();
  if (param_4 != 0) {
    FUN_1004c2eac();
    puVar3 = (undefined8 *)param_1[1];
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      uVar2 = *param_2;
      func_0x000107c61174(uVar2);
      *puVar3 = uVar2;
      puVar3 = puVar3 + 1;
    }
    param_1[1] = (long)puVar3;
  }
  return;
}



/* Entry: 1004c2ee8; end: 1004c2f6f;  */

void FUN_1004c2ee8(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (param_4 != 0) {
    FUN_1004c2eac(param_1,param_4);
    puVar2 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      uVar1 = *param_2;
      func_0x000107c61174(uVar1);
      *puVar2 = uVar1;
      puVar2 = puVar2 + 1;
    }
    *(undefined8 **)(param_1 + 8) = puVar2;
  }
  return;
}



/* Entry: 1004c2f70; end: 1004c2f7b; +[SCUserInfoCoreUserData table] */

char * FUN_1004c2f70(void)

{
  return "userinfo__coreuserdata";
}



/* Entry: 1004c2f7c; end: 1004c31ab;  */

/* WARNING: Possible PIC construction at 0x0001004c3100: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004c3198: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001004c3104) */
/* WARNING: Removing unreachable block (ram,0x0001004c313c) */
/* WARNING: Removing unreachable block (ram,0x0001004c3150) */
/* WARNING: Removing unreachable block (ram,0x0001004c3194) */
/* WARNING: Removing unreachable block (ram,0x0001004c311c) */
/* WARNING: Removing unreachable block (ram,0x0001004c319c) */
/* WARNING: Removing unreachable block (ram,0x0001004c31a4) */

void FUN_1004c2f7c(undefined8 param_1,uint param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_e8 [96];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c415e0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  func_0x000107c61180();
  FUN_10046363c(auStack_e8,param_1,param_3);
  uVar2 = *(undefined8 *)PTR__NSFileProtectionKey_110345438;
  uVar3 = *(undefined8 *)PTR__NSFileProtectionNone_110345440;
  for (lVar4 = 0; lVar4 != 0x60; lVar4 = lVar4 + 0x18) {
    uStack_78 = uVar2;
    uStack_70 = uVar3;
    func_0x000107c419ac(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    func_0x000107c61180();
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c529d0(puVar1);
    FUN_1004c31ac();
    func_0x0001004c31b4();
  }
  FUN_100468bac(auStack_e8);
  if ((param_2 & 1) != 0) {
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c5c174();
    func_0x000107c61180();
    func_0x0001004c31b4();
    uStack_88 = uVar2;
    uStack_80 = uVar3;
    func_0x000107c419ac(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    func_0x000107c61180();
    func_0x000107c529d0(puVar1);
    func_0x0001004c31b4();
    FUN_1004c3304();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1004c31ac; end: 1004c31bb;  */

void FUN_1004c31ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1004c31bc; end: 1004c3303;  */

void FUN_1004c31bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long alStack_c0 [2];
  char acStack_a9 [73];
  
  FUN_10046363c(alStack_c0);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  uVar5 = *(undefined8 *)PTR__NSURLIsExcludedFromBackupKey_11034ab18;
  for (lVar7 = 0; lVar7 != 0x60; lVar7 = lVar7 + 0x18) {
    plVar4 = (long *)((long)alStack_c0 + lVar7);
    if (acStack_a9[lVar7] < '\0') {
      plVar4 = (long *)*plVar4;
    }
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,plVar4);
    func_0x000107c61180();
    puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x000107c43478(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,puVar2,0);
    func_0x000107c61180();
    puVar2 = puVar3;
    func_0x000107c44260();
    uVar6 = 0;
    func_0x000107c61174(0);
    if (((int)puVar2 == 0) || (func_0x000107c3ebcc(), (uVar6 & 1) == 0)) {
      func_0x000107c57e54(puVar3,param_2,puVar1,uVar5,0);
    }
    FUN_1004c31ac();
    func_0x0001004c31b4();
    FUN_1004c3304();
  }
  FUN_100468ba4();
  return;
}



/* Entry: 1004c3304; end: 1004c330b;  */

void FUN_1004c3304(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1004c330c; end: 1004c332b;  */

undefined * FUN_1004c330c(void)

{
  FUN_100061168();
  return PTR_DAT_113404410;
}



/* Entry: 1004c332c; end: 1004c337f;  */

long FUN_1004c332c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10028bb78();
  return lVar1 - *(long *)(param_1 + 8);
}



/* Entry: 1004c3380; end: 1004c3387;  */

void FUN_1004c3380(void)

{
  return;
}



/* Entry: 1004c3388; end: 1004c33ef;  */

void FUN_1004c3388(long *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  code *extraout_x8;
  long unaff_x23;
  
  FUN_1004c33f0();
  if (param_1 != (long *)0x0) {
    func_0x0001004c3408(*(undefined8 *)(*param_1 + 0x20));
    (*extraout_x8)();
  }
  if (*(long **)(unaff_x23 + 0x10) != (long *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(unaff_x23 + 0x10) + 0x20);
    func_0x0001004c3408();
                    /* WARNING: Could not recover jumptable at 0x0001004c33e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 1004c33f0; end: 1004c3427;  */

undefined8 FUN_1004c33f0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1004c3428; end: 1004c34c7;  */

void FUN_1004c3428(undefined8 *param_1)

{
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  func_0x0001004c3418();
  uStack_58 = 0;
  uStack_50 = 0;
  func_0x0001004c376c();
  uStack_60 = 0;
  uStack_48 = 2;
  func_0x0001004c3778();
  FUN_1004c37a8(auStack_68);
  func_0x0001004c394c();
  FUN_10002b838(auStack_80);
  func_0x0001004c3958(auStack_98);
  FUN_1004c39c0();
  FUN_1004c3a08(*param_1);
  func_0x0001004c3a14();
  func_0x0001004c3944();
  func_0x0001004c3a2c();
  func_0x0001004c3a34();
  return;
}



/* Entry: 1004c34c8; end: 1004c3567;  */

undefined8 FUN_1004c34c8(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [72];
  
  if ((bRam00000001138396f0 & 1) == 0) {
    iVar1 = 0x138396f0;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      FUN_1004c3568(auStack_68);
      puVar2 = auStack_68;
      FUN_10028f4b0();
      puRam00000001138396e8 = puVar2;
      FUN_100164334(auStack_68);
      func_0x000107c60e4c(0x1138396f0);
    }
  }
  return 0x1138396e8;
}



/* Entry: 1004c3568; end: 1004c3763;  */

undefined8 * FUN_1004c3568(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [168];
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10002b838(&uStack_110,&UNK_10f73a7fb);
  FUN_10002b838(&uStack_128,"");
  FUN_10002b838(auStack_f8,&UNK_10f73a806);
  FUN_1004c3764();
  FUN_1004c3764();
  FUN_1004c3764();
  FUN_1004c3764();
  FUN_1004c3764();
  FUN_1004c3764();
  FUN_1004c3764();
  puVar1 = auStack_f8;
  FUN_1000e3098(&uStack_140,puVar1,8);
  param_1[1] = uStack_108;
  *param_1 = uStack_110;
  param_1[2] = uStack_100;
  uStack_108 = 0;
  uStack_100 = 0;
  param_1[4] = uStack_120;
  param_1[3] = uStack_128;
  param_1[5] = uStack_118;
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  param_1[7] = uStack_138;
  param_1[6] = uStack_140;
  param_1[8] = uStack_130;
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_140 = 0;
  FUN_1000e30f4(&uStack_140);
  lVar4 = 0xa8;
  do {
    func_0x000107c60ca0(auStack_f8 + lVar4);
    lVar4 = lVar4 + -0x18;
  } while (lVar4 != -0x18);
  func_0x000107c60ca0(&uStack_128);
  puVar2 = &uStack_110;
  func_0x000107c60ca0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar2;
  }
  func_0x000107c60e78();
  puVar3 = auStack_50;
  lVar4 = -0xc0;
  do {
    func_0x000107c60ca0(puVar3);
    puVar3 = puVar3 + -0x18;
    lVar4 = lVar4 + 0x18;
  } while (lVar4 != 0);
  func_0x000107c60ca0(&uStack_128);
  func_0x000107c60ca0(&uStack_110);
  func_0x000107c60bd8(puVar2);
  func_0x00010002b82c(0);
  func_0x000107c613d0(puVar1);
  func_0x000107c60c50(0,puVar2,puVar1);
  return (undefined8 *)0x0;
}



/* Entry: 1004c3764; end: 1004c37a7;  */

void FUN_1004c3764(undefined8 param_1,undefined8 param_2)

{
  func_0x00010002b82c();
  func_0x000107c613d0(param_2);
  func_0x000107c60c50();
  return;
}



/* Entry: 1004c37a8; end: 1004c37db;  */

void FUN_1004c37a8(void)

{
  func_0x0001004c3788();
  FUN_1004c37dc();
  func_0x0001004c37f0();
  func_0x0001004c3944();
  return;
}



/* Entry: 1004c37dc; end: 1004c37fb;  */

void FUN_1004c37dc(void)

{
  return;
}



/* Entry: 1004c37fc; end: 1004c385f;  */

undefined8 FUN_1004c37fc(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_30 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar1 = param_3;
  func_0x000107c613d0(param_3);
  FUN_1004c3860(param_1,&uStack_40,param_3,uVar1);
  FUN_1004c3930();
  return param_1;
}



/* Entry: 1004c3860; end: 1004c38db;  */

long FUN_1004c3860(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_3;
  uStack_28 = param_4;
  FUN_1000fecf4(param_1 + 8);
  func_0x0001004c38a0(param_1 + 8,&uStack_30);
  return param_1;
}



/* Entry: 1004c38dc; end: 1004c392f;  */

undefined8 FUN_1004c38dc(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined8 uStack_48;
  
  FUN_10016e8c4();
  FUN_10016e948();
  FUN_100060b18(uStack_48);
  FUN_1000fc0c0();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x0001000fc0cc();
  return uVar1;
}



/* Entry: 1004c3930; end: 1004c3963;  */

void FUN_1004c3930(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)();
  return;
}



/* Entry: 1004c3964; end: 1004c39bf;  */

void FUN_1004c3964(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 uStack_22;
  undefined1 uStack_21;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_2;
  uStack_18 = param_3;
  FUN_100060b18(param_1,&uStack_20);
  uVar1 = param_1[1];
  puVar2 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar2 = param_1;
  }
  uStack_21 = 0x2e;
  uStack_22 = 0x5f;
  func_0x0001004a4aa4(puVar2,(long)puVar2 + uVar1,&uStack_21,&uStack_22);
  return;
}



/* Entry: 1004c39c0; end: 1004c39cf;  */

undefined1 * FUN_1004c39c0(void)

{
  FUN_1000fecf4(&stack0x00000040,&stack0x00000020);
  FUN_1000fecf4(&stack0x00000040,&stack0x00000008);
  return &stack0x00000038;
}



/* Entry: 1004c39d0; end: 1004c3a07;  */

long FUN_1004c39d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1000fecf4(param_1 + 8);
  FUN_1000fecf4(param_1 + 8,param_3);
  return param_1;
}



/* Entry: 1004c3a08; end: 1004c3a3b;  */

void FUN_1004c3a08(void)

{
  return;
}



/* Entry: 1004c3a3c; end: 1004c3a6b;  */

undefined8 * FUN_1004c3a3c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cc8368;
  FUN_1000e30f4(param_1 + 1);
  return param_1;
}



/* Entry: 1004c3a6c; end: 1004c3a8f;  */

void FUN_1004c3a6c(void)

{
  return;
}



/* Entry: 1004c3a90; end: 1004c3ac3;  */

long * FUN_1004c3a90(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    (*(code *)param_1[1])();
  }
  return param_1;
}



/* Entry: 1004c3ac4; end: 1004c3b37;  */

bool FUN_1004c3ac4(long *param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  int aiStack_c0 [2];
  undefined8 uStack_b8;
  
  func_0x000107c60ee4(aiStack_c0,0x90);
  plVar1 = (long *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    plVar1 = param_1;
  }
  func_0x000107c613b8(plVar1,aiStack_c0);
  if ((int)plVar1 == 0) {
    *param_2 = (long)aiStack_c0[0];
    *param_3 = uStack_b8;
  }
  return (int)plVar1 == 0;
}



/* Entry: 1004c3b38; end: 1004c3b63;  */

void FUN_1004c3b38(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0xe0;
  FUN_1004c3ac4(lVar1,param_1 + 400,param_1 + 0x198);
  *(char *)(param_1 + 0x1a0) = (char)lVar1;
  return;
}



/* Entry: 1004c3b64; end: 1004c3b6b;  */

void FUN_1004c3b64(void)

{
  return;
}



/* Entry: 1004c3b6c; end: 1004c3bf7;  */

undefined8 FUN_1004c3b6c(void)

{
  int iVar1;
  
  if ((bRam0000000113404408 & 1) == 0) {
    iVar1 = 0x13404408;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      uRam0000000113404378 = 0x32aaaba7;
      uRam0000000113404388 = 0;
      uRam0000000113404380 = 0;
      uRam0000000113404398 = 0;
      uRam0000000113404390 = 0;
      uRam00000001134043a8 = 0;
      uRam00000001134043a0 = 0;
      uRam00000001134043b8 = 0;
      uRam00000001134043b0 = 0;
      uRam00000001134043c8 = 0;
      uRam00000001134043c0 = 0;
      uRam00000001134043d0 = 0;
      uRam00000001134043d8 = 0x3f800000;
      uRam00000001134043e8 = 0;
      uRam00000001134043e0 = 0;
      uRam00000001134043f8 = 0;
      uRam00000001134043f0 = 0;
      uRam0000000113404400 = 0x3f800000;
      func_0x000107c60e4c(0x113404408);
    }
  }
  return 0x113404378;
}



/* Entry: 1004c3bf8; end: 1004c3c2f;  */

void FUN_1004c3bf8(undefined8 param_1)

{
  long unaff_x19;
  
  FUN_1004c3b6c();
  FUN_1004c3c30();
  func_0x0001004c3c6c(unaff_x19 + 0x68,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 1004c3c30; end: 1004c3c37;  */

void FUN_1004c3c30(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd46c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex4lockEv_110346780)();
  return;
}



/* Entry: 1004c3c38; end: 1004c3c83;  */

void FUN_1004c3c38(undefined8 param_1,undefined8 param_2)

{
  FUN_10013365c(param_1,param_2,param_2);
  return;
}



/* Entry: 1004c3c84; end: 1004c3ccf;  */

void FUN_1004c3c84(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 1004c3cd0; end: 1004c3d0f;  */

void FUN_1004c3cd0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  func_0x000107c60c6c(param_3,0,param_2);
  uVar1 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar1;
  param_1[2] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  return;
}



/* Entry: 1004c3d10; end: 1004c3d33;  */

void FUN_1004c3d10(void)

{
  func_0x000107c60c58(&stack0x00000040,&stack0x00000020,";");
  FUN_10048a6e8();
  return;
}



/* Entry: 1004c3d34; end: 1004c3ea3;  */

ulong FUN_1004c3d34(undefined8 param_1,long param_2,undefined8 param_3,int param_4,long param_5)

{
  code *pcVar1;
  char *pcVar2;
  ulong uVar3;
  long unaff_x19;
  ulong uVar4;
  int iVar5;
  undefined1 auStack_b0 [24];
  char *pcStack_98;
  long lStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  char *pcStack_60;
  undefined8 uStack_58;
  
  FUN_10045e98c();
  FUN_1004c3ea4();
  uVar4 = 0;
  lStack_90 = 0x1e;
  for (iVar5 = -5; iVar5 != 0; iVar5 = iVar5 + 1) {
    uVar4 = *(ulong *)(unaff_x19 + 0x188);
    pcVar1 = (code *)0x0;
    if (*(char *)(*(long *)(param_5 + 8) + 8) == '\0') {
      pcVar1 = FUN_10054a6c0;
    }
    func_0x000107c6137c(uVar4,param_2,pcVar1,param_5,&pcStack_98);
    if ((int)uVar4 != 5) break;
    func_0x000107c310bc(&lStack_90);
    lStack_90 = lStack_90 << 1;
    uVar4 = 5;
  }
  pcVar2 = pcStack_98;
  if ((int)uVar4 == 0) {
    FUN_10054a768();
  }
  else {
    uVar3 = *(ulong *)(unaff_x19 + 0x188);
    func_0x000107c61380();
    pcStack_60 = "unknown";
    if (pcVar2 != (char *)0x0) {
      pcStack_60 = pcVar2;
    }
    uStack_80 = uVar4 & 0xffffffff;
    uStack_78 = 0;
    uStack_70 = uVar3 & 0xffffffff;
    uStack_68 = 0;
    uStack_58 = 0;
    lStack_90 = param_2;
    uStack_88 = param_3;
    FUN_1003a91d4(&UNK_10f82f643);
    FUN_1003a9204(auStack_b0);
    func_0x000107c6138c(pcStack_98);
    if (param_4 != 0) {
      func_0x000107c313a4();
    }
    func_0x000107c3a40c();
  }
  FUN_100463330();
  return uVar4;
}



/* Entry: 1004c3ea4; end: 1004c3f27;  */

void FUN_1004c3ea4(undefined8 param_1,int param_2)

{
  long unaff_x19;
  
  FUN_10045e98c();
  if ((*(int *)(unaff_x19 + 0x144) != 0) && (param_2 == *(int *)(unaff_x19 + 0x140))) {
    *(undefined4 *)(unaff_x19 + 0x144) = 0;
    FUN_10054a760();
    func_0x000107c313a4();
    FUN_100456adc();
  }
  FUN_100463330();
  return;
}



/* Entry: 1004c3f28; end: 1004c3fc7; -[SCBlizzardEvent dealloc] */

void FUN_1004c3f28(undefined **param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuStack_40;
  undefined *puStack_38;
  
  if (param_1[2] != (undefined *)0x0) {
    ppuVar2 = param_1;
    func_0x000107c4d3e4();
    func_0x000107c61180();
    ppuVar1 = &PTR____CFConstantStringClassReference_110e6df98;
    if (ppuVar2 != (undefined **)0x0) {
      ppuVar1 = ppuVar2;
    }
    func_0x000107c61174(ppuVar1);
    func_0x000107c61170(ppuVar2);
    func_0x000107c56bec(param_1[2]);
    func_0x000107c61170(ppuVar1);
  }
  puStack_38 = PTR_PTR_1126f4bf0;
  ppuStack_40 = param_1;
  func_0x000107c61154(&ppuStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1004c3fc8; end: 1004c401b; -[SCBlizzardEvent .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001004c3fe0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004c3ff8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001004c3fe4) */
/* WARNING: Removing unreachable block (ram,0x0001004c3ffc) */

void FUN_1004c3fc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x38,0);
  return;
}



/* Entry: 1004c401c; end: 1004c4043; -[SCBlizzardEventLogger _incrementProtoFrameSequenceId] */

void FUN_1004c401c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c4f538();
                    /* WARNING: Could not recover jumptable at 0x00010c1e5210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setProtoFrameSequenceId__112656ea8,lVar1 + 1)
  ;
  return;
}



/* Entry: 1004c4044; end: 1004c404b; -[SCBlizzardEventLogger setProtoFrameSequenceId:] */

void FUN_1004c4044(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x68) = param_3;
  return;
}



/* Entry: 1004c404c; end: 1004c4053; -[SCBlizzardEventList allEvents] */

void FUN_1004c404c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc53d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_getEvents__1125cee98,0xffffffffffffffff);
  return;
}



/* Entry: 1004c4054; end: 1004c40b7; -[SCBlizzardEventList getEvents:] */

void FUN_1004c4054(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c40808();
  func_0x000107c4d2d8(param_1);
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c5c274();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1004c40b8; end: 1004c40f3; -[SCBlizzardEventList count] */

undefined8 FUN_1004c40b8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c4d2d8();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c40808();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 1004c40f4; end: 1004c40fb; -[SCBlizzardLogQueueConfigAdapter protoEventSaveBatch] */

undefined8 FUN_1004c40f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 1004c40fc; end: 1004c43c3; -[SCBlizzardEventLoggerAdapter _exposeToObserverEvent:isCritical:andProperties:blizzardEventSource:loggers:] */

void FUN_1004c40fc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_7);
  lVar2 = *(long *)(param_1 + 0x78);
  func_0x000107c44048();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c40808();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    uVar11 = param_7;
    func_0x000107c4c280();
    func_0x000107c61180();
    uVar4 = param_5;
    func_0x000107c4d2d4(param_5);
    func_0x000107c56bd8();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar5 = PTR_PTR_1126b72d8;
    func_0x000107c61158(PTR_PTR_1126b72d8);
    func_0x000107c6115c(param_3,puVar5);
    func_0x000107c4d94c(puVar6);
    func_0x000107c61180();
    func_0x000107c5a4a0(uVar4);
    func_0x000107c61170(puVar6);
    lVar3 = param_3;
    func_0x000107c4404c(param_3);
    FUN_1002ced14();
    func_0x000107c61180();
    func_0x000107c5a4a0(uVar4);
    func_0x000107c61170(lVar3);
    puVar6 = PTR_PTR_1126d0410;
    func_0x000107c43f28(PTR_PTR_1126d0410);
    func_0x000107c61180();
    func_0x000107c5a4a0(uVar4);
    func_0x000107c61170(puVar6);
    lVar7 = *(long *)(param_1 + 0x78);
    func_0x000107c44048();
    func_0x000107c61180();
    lVar3 = lVar7;
    func_0x000107c4080c();
    lVar2 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          func_0x000107c61128(lVar7);
        }
        puVar6 = PTR_DAT_1126a5720;
        uVar12 = *(undefined8 *)(lVar10 * 8);
        func_0x000107c61174(uVar12);
        uVar8 = uVar12;
        FUN_10010fab4(uVar12,puVar6);
        uVar1 = uVar12;
        if ((int)uVar8 == 0) {
          uVar1 = 0;
        }
        func_0x000107c61174(uVar1);
        func_0x000107c61170(uVar12);
        func_0x000107c4da38(uVar1);
        func_0x000107c61170(uVar1);
        lVar10 = lVar10 + 1;
      } while (lVar3 != lVar10);
      lVar3 = lVar7;
      func_0x000107c4080c();
    }
    func_0x000107c61170(lVar7);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar11);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_5);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c611ec(param_3 + 8);
  uVar11 = *(undefined8 *)(param_3 + 0x18);
  func_0x000107c61174(uVar11);
  func_0x000107c611f0(param_3 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar11);
  return;
}



/* Entry: 1004c43c4; end: 1004c4447; -[SCBlizzardEventObserverManager getEventObserversSnapshot] */

void FUN_1004c43c4(long param_1)

{
  undefined8 uVar1;
  
  func_0x000107c611ec(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c61174(uVar1);
  func_0x000107c611f0(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1004c4448; end: 1004c44d3;  */

void FUN_1004c4448(long param_1,long *param_2)

{
  long *plVar1;
  code *pcVar2;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  pcVar2 = *(code **)(param_1 + 8);
  plVar1 = (long *)(*(long *)(param_1 + 0x18) + ((long)*(ulong *)(param_1 + 0x10) >> 1));
  if ((*(ulong *)(param_1 + 0x10) & 1) != 0) {
    pcVar2 = *(code **)(*plVar1 + ((ulong)pcVar2 & 0xffffffff));
  }
  lStack_40 = *param_2;
  if (lStack_40 == 0) {
    lStack_30 = param_2[2];
    lStack_38 = param_2[1];
    lStack_28 = param_2[3];
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = 0x36;
  }
  (*pcVar2)(plVar1,&lStack_40);
  FUN_1004da3a8(&lStack_40);
  return;
}



/* Entry: 1004c44d4; end: 1004c4543;  */

undefined8 FUN_1004c44d4(undefined8 param_1)

{
  ulong uStack_28;
  
  func_0x00010047ad8c(&uStack_28,2,"",0);
  FUN_1004c4848(param_1,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    FUN_10084dad0();
  }
  return param_1;
}



/* Entry: 1004c4544; end: 1004c4847;  */

long * FUN_1004c4544(long *param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  undefined8 ***pppuVar4;
  char **ppcVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long alStack_1e0 [10];
  undefined8 **ppuStack_190;
  ulong uStack_188;
  byte bStack_179;
  undefined8 **ppuStack_178;
  ulong uStack_170;
  byte bStack_161;
  ulong uStack_160;
  long alStack_158 [4];
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 **ppuStack_108;
  ulong uStack_100;
  char *pcStack_d8;
  undefined8 uStack_d0;
  char **ppcStack_a8;
  ulong uStack_a0;
  char *pcStack_78;
  char **ppcStack_70;
  char **appcStack_68 [4];
  long lStack_48;
  
  plVar8 = alStack_1e0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1004c44d4(alStack_158);
  uStack_120 = 0;
  uStack_128 = 0;
  lStack_110 = 0;
  uStack_118 = 0;
  uStack_130 = 0;
  uStack_138 = 0;
  if (*param_2 == 0) {
    pcStack_78 = (char *)0x0;
    ppcStack_70 = (char **)0x0;
    appcStack_68[0] = (char **)0x0;
    lVar6 = param_2[1];
    lVar1 = param_2[2];
    if (lVar6 != lVar1) {
      do {
        ppcVar5 = ppcStack_70;
        ppcStack_a8 = (char **)0x0;
        if (ppcStack_70 < appcStack_68[0]) {
          FUN_1004c4a8c(appcStack_68,ppcStack_70,lVar6,&ppcStack_a8);
          ppcVar5 = ppcVar5 + 0x15;
        }
        else {
          ppcVar5 = &pcStack_78;
          FUN_1004c48e8(ppcVar5,lVar6,&ppcStack_a8);
        }
        lVar6 = lVar6 + 0x84;
        ppcStack_70 = ppcVar5;
      } while (lVar6 != lVar1);
    }
    FUN_1004c4c1c(alStack_158,&pcStack_78);
    ppcStack_a8 = &pcStack_78;
    FUN_1004c4cbc(&ppcStack_a8);
  }
  else {
    pcStack_78 = "DNS resolution failed for ";
    ppcStack_70 = (char **)0x1a;
    uStack_a0 = param_1[6];
    ppcStack_a8 = (char **)param_1[5];
    if (-1 < (char)*(byte *)((long)param_1 + 0x3f)) {
      uStack_a0 = (ulong)*(byte *)((long)param_1 + 0x3f);
      ppcStack_a8 = (char **)(param_1 + 5);
    }
    pcStack_d8 = ": ";
    uStack_d0 = 2;
    func_0x000107c2b9c0(&ppuStack_190,param_2,1);
    uStack_100 = uStack_188;
    ppuStack_108 = ppuStack_190;
    if (-1 < (char)bStack_179) {
      uStack_100 = (ulong)bStack_179;
      ppuStack_108 = &ppuStack_190;
    }
    func_0x000107c2ba48(&ppuStack_178,&pcStack_78,&ppcStack_a8,&pcStack_d8,&ppuStack_108);
    pppuVar4 = (undefined8 ***)ppuStack_178;
    if (-1 < (char)bStack_161) {
      uStack_170 = (ulong)bStack_161;
      pppuVar4 = &ppuStack_178;
    }
    func_0x000107c2b9cc(&uStack_160,pppuVar4,uStack_170);
    func_0x000104a77a7c(alStack_158,&uStack_160);
    if ((uStack_160 & 1) != 0) {
      FUN_10084dad0();
    }
    if ((char)bStack_161 < '\0') {
      func_0x000107c60e14(ppuStack_178);
    }
    if ((char)bStack_179 < '\0') {
      func_0x000107c60e14(ppuStack_190);
    }
  }
  lVar6 = param_1[8];
  FUN_1004bf248();
  lStack_110 = lVar6;
  FUN_1004c4d2c(alStack_1e0,alStack_158);
  FUN_1004c4dc0(param_1);
  FUN_1004d8a60(alStack_1e0);
  plVar7 = param_1 + 1;
  do {
    lVar6 = *plVar7;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 + -1 == 0) {
    (**(code **)(*param_1 + 0x10))(param_1);
  }
  plVar7 = alStack_158;
  FUN_1004d8a60();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    func_0x000107c60e78();
    if ((int)plVar8 != 0) {
      func_0x000104bd46a0();
      ppcStack_a8 = &pcStack_78;
      FUN_1004c4cbc(&ppcStack_a8);
      FUN_1004d8a60(alStack_158);
    }
    func_0x000107c60bd8();
    *plVar7 = *plVar8;
    *plVar8 = 0x36;
    if (*plVar7 == 0) {
      func_0x000107c2b9e4(plVar7);
    }
    return plVar7;
  }
  return plVar7;
}



/* Entry: 1004c4848; end: 1004c489f;  */

long * FUN_1004c4848(long *param_1,long *param_2)

{
  *param_1 = *param_2;
  *param_2 = 0x36;
  if (*param_1 == 0) {
    func_0x000107c2b9e4(param_1);
  }
  return param_1;
}



/* Entry: 1004c48a0; end: 1004c48e7;  */

undefined1  [16] FUN_1004c48a0(long *param_1,long *param_2,long param_3,long *param_4)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long **pplVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  
  if (param_2 < (long *)0x186186186186187) {
    lVar2 = (long)param_2 * 0xa8;
    func_0x000107c60e20(lVar2);
    auVar13._8_8_ = param_2;
    auVar13._0_8_ = lVar2;
    return auVar13;
  }
  func_0x000104a7757c();
  lVar2 = param_1[1] - *param_1 >> 3;
  uVar1 = lVar2 * -0x30c30c30c30c30c3 + 1;
  if (uVar1 < 0x186186186186187) {
    plVar5 = param_1 + 2;
    lVar6 = *plVar5 - *param_1 >> 3;
    uVar7 = lVar6 * -0x6186186186186186;
    if (uVar7 < uVar1 || uVar7 - uVar1 == 0) {
      uVar7 = uVar1;
    }
    if (0xc30c30c30c30c2 < (ulong)(lVar6 * -0x30c30c30c30c30c3)) {
      uVar7 = 0x186186186186186;
    }
    plStack_68 = plVar5;
    if (uVar7 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = plVar5;
      FUN_1004c48a0();
    }
    plStack_80 = plVar3 + lVar2;
    plStack_70 = plVar3 + uVar7 * 0x15;
    plStack_88 = plVar3;
    plStack_78 = plStack_80;
    FUN_1004c4a8c(plVar5,plStack_80,param_2,param_3);
    plStack_78 = plStack_78 + 0x15;
    pplVar4 = &plStack_88;
    FUN_1004c4b4c(param_1,pplVar4);
    lVar2 = param_1[1];
    FUN_1004c4bd0(&plStack_88);
    auVar14._8_8_ = pplVar4;
    auVar14._0_8_ = lVar2;
    return auVar14;
  }
  func_0x000104a83310();
  FUN_1004c4bd0(&plStack_88);
  func_0x000107c60bd8();
  lVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = lVar2;
  lVar6 = param_2[3];
  lVar2 = param_2[2];
  lVar9 = param_2[5];
  lVar8 = param_2[4];
  lVar10 = param_2[6];
  lVar12 = param_2[9];
  lVar11 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = lVar10;
  param_1[9] = lVar12;
  param_1[8] = lVar11;
  param_1[3] = lVar6;
  param_1[2] = lVar2;
  param_1[5] = lVar9;
  param_1[4] = lVar8;
  lVar6 = param_2[0xb];
  lVar2 = param_2[10];
  lVar9 = param_2[0xd];
  lVar8 = param_2[0xc];
  lVar11 = param_2[0xf];
  lVar10 = param_2[0xe];
  *(int *)(param_1 + 0x10) = (int)param_2[0x10];
  param_1[0xd] = lVar9;
  param_1[0xc] = lVar8;
  param_1[0xf] = lVar11;
  param_1[0xe] = lVar10;
  param_1[0xb] = lVar6;
  param_1[10] = lVar2;
  param_1[0x11] = param_3;
  param_1[0x12] = *param_4;
  plVar5 = param_4 + 1;
  lVar2 = *plVar5;
  plVar3 = param_1 + 0x13;
  *plVar3 = lVar2;
  lVar6 = param_4[2];
  param_1[0x14] = lVar6;
  if (lVar6 != 0) {
    *(long **)(lVar2 + 0x10) = plVar3;
    *param_4 = (long)plVar5;
    *plVar5 = 0;
    param_4[2] = 0;
    auVar15._8_8_ = param_2;
    auVar15._0_8_ = param_1;
    return auVar15;
  }
  param_1[0x12] = (long)plVar3;
  auVar16._8_8_ = param_2;
  auVar16._0_8_ = param_1;
  return auVar16;
}



/* Entry: 1004c48e8; end: 1004c4a1b;  */

long * FUN_1004c48e8(long *param_1,long *param_2,long param_3,long *param_4)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  lVar4 = param_1[1] - *param_1 >> 3;
  uVar1 = lVar4 * -0x30c30c30c30c30c3 + 1;
  if (uVar1 < 0x186186186186187) {
    plVar6 = param_1 + 2;
    lVar3 = *plVar6 - *param_1 >> 3;
    uVar5 = lVar3 * -0x6186186186186186;
    if (uVar5 < uVar1 || uVar5 - uVar1 == 0) {
      uVar5 = uVar1;
    }
    if (0xc30c30c30c30c2 < (ulong)(lVar3 * -0x30c30c30c30c30c3)) {
      uVar5 = 0x186186186186186;
    }
    plStack_48 = plVar6;
    if (uVar5 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = plVar6;
      FUN_1004c48a0();
    }
    plStack_60 = plVar2 + lVar4;
    plStack_50 = plVar2 + uVar5 * 0x15;
    plStack_68 = plVar2;
    plStack_58 = plStack_60;
    FUN_1004c4a8c(plVar6,plStack_60,param_2,param_3);
    plStack_58 = plStack_58 + 0x15;
    FUN_1004c4b4c(param_1,&plStack_68);
    plVar6 = (long *)param_1[1];
    FUN_1004c4bd0(&plStack_68);
    return plVar6;
  }
  func_0x000104a83310();
  FUN_1004c4bd0(&plStack_68);
  func_0x000107c60bd8();
  lVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = lVar4;
  lVar3 = param_2[3];
  lVar4 = param_2[2];
  lVar8 = param_2[5];
  lVar7 = param_2[4];
  lVar9 = param_2[6];
  lVar11 = param_2[9];
  lVar10 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = lVar9;
  param_1[9] = lVar11;
  param_1[8] = lVar10;
  param_1[3] = lVar3;
  param_1[2] = lVar4;
  param_1[5] = lVar8;
  param_1[4] = lVar7;
  lVar3 = param_2[0xb];
  lVar4 = param_2[10];
  lVar8 = param_2[0xd];
  lVar7 = param_2[0xc];
  lVar10 = param_2[0xf];
  lVar9 = param_2[0xe];
  *(int *)(param_1 + 0x10) = (int)param_2[0x10];
  param_1[0xd] = lVar8;
  param_1[0xc] = lVar7;
  param_1[0xf] = lVar10;
  param_1[0xe] = lVar9;
  param_1[0xb] = lVar3;
  param_1[10] = lVar4;
  param_1[0x11] = param_3;
  param_1[0x12] = *param_4;
  plVar6 = param_4 + 1;
  lVar4 = *plVar6;
  plVar2 = param_1 + 0x13;
  *plVar2 = lVar4;
  lVar3 = param_4[2];
  param_1[0x14] = lVar3;
  if (lVar3 != 0) {
    *(long **)(lVar4 + 0x10) = plVar2;
    *param_4 = (long)plVar6;
    *plVar6 = 0;
    param_4[2] = 0;
    return param_1;
  }
  param_1[0x12] = (long)plVar2;
  return param_1;
}



/* Entry: 1004c4a1c; end: 1004c4a8b;  */

void FUN_1004c4a1c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar6 = param_2[3];
  uVar5 = param_2[2];
  uVar8 = param_2[5];
  uVar7 = param_2[4];
  uVar9 = param_2[6];
  uVar11 = param_2[9];
  uVar10 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar9;
  param_1[9] = uVar11;
  param_1[8] = uVar10;
  param_1[3] = uVar6;
  param_1[2] = uVar5;
  param_1[5] = uVar8;
  param_1[4] = uVar7;
  uVar6 = param_2[0xb];
  uVar5 = param_2[10];
  uVar8 = param_2[0xd];
  uVar7 = param_2[0xc];
  uVar10 = param_2[0xf];
  uVar9 = param_2[0xe];
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  param_1[0xd] = uVar8;
  param_1[0xc] = uVar7;
  param_1[0xf] = uVar10;
  param_1[0xe] = uVar9;
  param_1[0xb] = uVar6;
  param_1[10] = uVar5;
  param_1[0x11] = param_3;
  param_1[0x12] = *param_4;
  plVar1 = param_4 + 1;
  lVar3 = *plVar1;
  plVar2 = param_1 + 0x13;
  *plVar2 = lVar3;
  lVar4 = param_4[2];
  param_1[0x14] = lVar4;
  if (lVar4 != 0) {
    *(long **)(lVar3 + 0x10) = plVar2;
    *param_4 = plVar1;
    *plVar1 = 0;
    param_4[2] = 0;
    return;
  }
  param_1[0x12] = plVar2;
  return;
}



/* Entry: 1004c4a8c; end: 1004c4af3;  */

void FUN_1004c4a8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  uStack_28 = 0;
  puStack_38 = &uStack_30;
  FUN_1004c4a1c(param_2,param_3,0,&puStack_38);
  FUN_1004c4af4(&puStack_38,uStack_30);
  return;
}



/* Entry: 1004c4af4; end: 1004c4b4b;  */

void FUN_1004c4af4(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    FUN_1004c4af4(param_1,*param_2);
    FUN_1004c4af4(param_1,param_2[1]);
    plVar1 = (long *)param_2[5];
    param_2[5] = 0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 1004c4b4c; end: 1004c4bcf;  */

void FUN_1004c4b4c(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  lVar3 = param_1[1];
  lVar1 = param_2[1];
  while (lVar3 != lVar2) {
    lVar1 = lVar1 + -0xa8;
    lVar3 = lVar3 + -0xa8;
    FUN_1004c94f0(lVar1,lVar3);
  }
  param_2[1] = lVar1;
  lVar2 = *param_1;
  *param_1 = lVar1;
  param_2[1] = lVar2;
  lVar2 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar2;
  lVar2 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1004c4bd0; end: 1004c4c1b;  */

long * FUN_1004c4bd0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0xa8;
    FUN_1004d79ec();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 1004c4c1c; end: 1004c4cbb;  */

void FUN_1004c4c1c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  if (*param_1 == 0) {
    FUN_1004c886c();
    uVar1 = *param_2;
    param_1[2] = param_2[1];
    param_1[1] = uVar1;
    param_1[3] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  else {
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    uVar1 = *param_2;
    param_1[2] = param_2[1];
    param_1[1] = uVar1;
    param_1[3] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    uVar1 = *param_1;
    if (uVar1 != 0) {
      *param_1 = 0;
      if ((uVar1 & 1) != 0) {
        FUN_10084dad0();
      }
    }
  }
  return;
}



/* Entry: 1004c4cbc; end: 1004c4d2b;  */

void FUN_1004c4cbc(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0xa8;
        FUN_1004d79ec();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 1004c4d2c; end: 1004c4dbf;  */

void FUN_1004c4d2c(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  if (*param_2 == 0) {
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    lVar1 = param_2[1];
    param_1[2] = param_2[2];
    param_1[1] = lVar1;
    param_1[3] = param_2[3];
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    *param_1 = 0;
  }
  else {
    *param_1 = *param_2;
    *param_2 = 0x36;
  }
  if (param_2[4] == 0) {
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[5] = param_2[5];
    param_2[5] = 0;
  }
  else {
    param_1[4] = param_2[4];
    param_2[4] = 0x36;
  }
  lVar2 = param_2[7];
  lVar1 = param_2[6];
  param_1[8] = param_2[8];
  param_1[7] = lVar2;
  param_1[6] = lVar1;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[6] = 0;
  param_1[9] = param_2[9];
  param_2[9] = 0;
  return;
}



/* Entry: 1004c4dc0; end: 1004c4f03;  */

ulong * FUN_1004c4dc0(ulong param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined1 uStack_b1;
  ulong uStack_b0;
  ulong auStack_a8 [10];
  ulong auStack_58 [3];
  ulong *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = (long *)(param_1 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar10 = *(undefined8 *)(param_1 + 0x48);
  uStack_b0 = param_1;
  func_0x0001004c4dbc(auStack_a8);
  puStack_40 = (ulong *)0x0;
  puVar4 = (ulong *)0x60;
  func_0x000107c60e20();
  *puVar4 = (ulong)&PTR_DAT_1107c2c30;
  puVar4[1] = uStack_b0;
  func_0x0001004c4d2c(puVar4 + 2,auStack_a8);
  puVar6 = auStack_58;
  puStack_40 = puVar4;
  FUN_1004be2c8(uVar10,puVar6,&uStack_b1);
  if (puStack_40 == auStack_58) {
    lVar7 = 4;
    puVar4 = auStack_58;
LAB_1004c4e70:
    (**(code **)(*puVar4 + lVar7 * 8))();
  }
  else if (puStack_40 != (ulong *)0x0) {
    lVar7 = 5;
    puVar4 = puStack_40;
    goto LAB_1004c4e70;
  }
  puVar4 = auStack_a8;
  FUN_1004d8a60();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar4;
  }
  func_0x000107c60e78();
  if (puStack_40 == auStack_58) {
    lVar7 = 4;
    puVar5 = auStack_58;
  }
  else {
    if (puStack_40 == (ulong *)0x0) goto LAB_1004c4eec;
    lVar7 = 5;
    puVar5 = puStack_40;
  }
  (**(code **)(*puVar5 + lVar7 * 8))();
LAB_1004c4eec:
  FUN_1004d8a60(auStack_a8);
  func_0x000107c60bd8();
  uVar8 = *puVar6;
  if (uVar8 == 0) {
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[1] = 0;
    FUN_1004c50cc(puVar4 + 1,puVar6[1],puVar6[2],
                  ((long)(puVar6[2] - puVar6[1]) >> 3) * -0x30c30c30c30c30c3);
    *puVar4 = 0;
  }
  else {
    *puVar4 = uVar8;
    if ((uVar8 & 1) != 0) {
      piVar9 = (int *)(uVar8 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = *piVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  return puVar4;
}



/* Entry: 1004c4f04; end: 1004c4f83;  */

ulong * FUN_1004c4f04(ulong *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  int *piVar4;
  
  uVar3 = *param_2;
  if (uVar3 == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[1] = 0;
    FUN_1004c50cc(param_1 + 1,param_2[1],param_2[2],
                  ((long)(param_2[2] - param_2[1]) >> 3) * -0x30c30c30c30c30c3);
    *param_1 = 0;
  }
  else {
    *param_1 = uVar3;
    if ((uVar3 & 1) != 0) {
      piVar4 = (int *)(uVar3 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  return param_1;
}



/* Entry: 1004c4f84; end: 1004c5077;  */

long FUN_1004c4f84(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  
  lVar4 = param_1;
  FUN_1004c4f04();
  uVar6 = *(ulong *)(param_2 + 0x20);
  if (uVar6 == 0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    uVar5 = 0;
    if (*(long *)(param_2 + 0x28) != 0) {
      plVar1 = (long *)(*(long *)(param_2 + 0x28) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      uVar5 = *(undefined8 *)(param_2 + 0x28);
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = uVar5;
  }
  else {
    *(ulong *)(lVar4 + 0x20) = uVar6;
    if ((uVar6 & 1) != 0) {
      piVar7 = (int *)(uVar6 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = *piVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  if (*(char *)(param_2 + 0x47) < '\0') {
    FUN_100033dac((undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_2 + 0x30),
                  *(undefined8 *)(param_2 + 0x38));
  }
  else {
    uVar8 = *(undefined8 *)(param_2 + 0x38);
    uVar5 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = uVar8;
    *(undefined8 *)(param_1 + 0x30) = uVar5;
  }
  uVar5 = *(undefined8 *)(param_2 + 0x48);
  FUN_1004bf248();
  *(undefined8 *)(param_1 + 0x48) = uVar5;
  return param_1;
}



/* Entry: 1004c5078; end: 1004c50cb;  */

void FUN_1004c5078(long *param_1,ulong param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  
  if (param_2 < 0x186186186186187) {
    plVar1 = param_1 + 2;
    FUN_1004c48a0();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 0x15);
    return;
  }
  func_0x000104a83310();
  if (param_4 != 0) {
    FUN_1004c5078();
    plVar1 = param_1 + 2;
    FUN_1004c5154(plVar1,param_2,param_3,param_1[1]);
    param_1[1] = (long)plVar1;
  }
  return;
}



/* Entry: 1004c50cc; end: 1004c514f;  */

void FUN_1004c50cc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_1004c5078(param_1,param_4);
    lVar1 = param_1 + 0x10;
    FUN_1004c5154(lVar1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 1004c5150; end: 1004c5153;  */

undefined8 * FUN_1004c5150(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *plStack_58;
  undefined1 uStack_49;
  long *plStack_48;
  
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  uVar8 = param_2[3];
  uVar3 = param_2[2];
  uVar10 = param_2[5];
  uVar9 = param_2[4];
  uVar11 = param_2[6];
  uVar13 = param_2[9];
  uVar12 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar11;
  param_1[9] = uVar13;
  param_1[8] = uVar12;
  param_1[3] = uVar8;
  param_1[2] = uVar3;
  param_1[5] = uVar10;
  param_1[4] = uVar9;
  uVar8 = param_2[0xb];
  uVar3 = param_2[10];
  uVar10 = param_2[0xd];
  uVar9 = param_2[0xc];
  uVar12 = param_2[0xf];
  uVar11 = param_2[0xe];
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  param_1[0xd] = uVar10;
  param_1[0xc] = uVar9;
  param_1[0xf] = uVar12;
  param_1[0xe] = uVar11;
  param_1[0xb] = uVar8;
  param_1[10] = uVar3;
  uVar3 = param_2[0x11];
  FUN_1004bf248();
  param_1[0x13] = 0;
  puVar6 = param_1 + 0x12;
  *puVar6 = param_1 + 0x13;
  param_1[0x11] = uVar3;
  param_1[0x14] = 0;
  plVar7 = (long *)param_2[0x12];
  while (plVar7 != param_2 + 0x13) {
    (**(code **)(*(long *)plVar7[5] + 0x10))(&plStack_58);
    plStack_48 = plVar7 + 4;
    puVar4 = puVar6;
    func_0x000104acaf9c(puVar6,plStack_48,&UNK_10dd5b8f9,&plStack_48,&uStack_49);
    plVar1 = plStack_58;
    plStack_58 = (long *)0x0;
    plVar5 = (long *)puVar4[5];
    puVar4[5] = plVar1;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))(plVar5);
      plVar1 = plStack_58;
      plStack_58 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
    }
    plVar1 = (long *)plVar7[1];
    plVar5 = plVar7;
    if ((long *)plVar7[1] == (long *)0x0) {
      do {
        plVar7 = (long *)plVar5[2];
        bVar2 = (long *)*plVar7 != plVar5;
        plVar5 = plVar7;
      } while (bVar2);
    }
    else {
      do {
        plVar7 = plVar1;
        plVar1 = (long *)*plVar7;
      } while ((long *)*plVar7 != (long *)0x0);
    }
  }
  return param_1;
}



/* Entry: 1004c5154; end: 1004c51d3;  */

long FUN_1004c5154(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_2 != param_3) {
    lVar1 = 0;
    do {
      FUN_1004c5150(param_4 + lVar1,param_2 + lVar1);
      lVar1 = lVar1 + 0xa8;
    } while (param_2 + lVar1 != param_3);
    param_4 = param_4 + lVar1;
  }
  return param_4;
}


