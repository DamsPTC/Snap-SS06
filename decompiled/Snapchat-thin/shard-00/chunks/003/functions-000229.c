/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10054eccc; end: 10054ed5b;  */

undefined8 * FUN_10054eccc(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
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
      (**(code **)(*plVar5 + 0x10))(plVar5,1,param_1);
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
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  return param_1;
}



/* Entry: 10054ed5c; end: 10054ed97;  */

void FUN_10054ed5c(void)

{
  func_0x000107c60e20(0xa0);
  FUN_10054ee24();
  FUN_10054ee4c();
  func_0x00010054ee5c();
  return;
}



/* Entry: 10054ed98; end: 10054edeb;  */

void FUN_10054ed98(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10054ed5c(&uStack_30);
  uVar2 = uStack_28;
  uVar1 = uStack_30;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  uStack_40 = 0;
  func_0x00010054ec98(&uStack_40);
  func_0x00010054eaf0();
  FUN_10054ee7c(&uStack_30);
  return;
}



/* Entry: 10054edec; end: 10054ee23;  */

void FUN_10054edec(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_DAT_110d9aa50;
  param_1[1] = param_2;
  *(undefined2 *)(param_1 + 4) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = 0;
  param_1[0x12] = param_1 + 4;
  return;
}



/* Entry: 10054ee24; end: 10054ee4b;  */

void FUN_10054ee24(undefined8 *param_1)

{
  FUN_10054edec();
  *param_1 = &PTR_DAT_11087bc20;
  *(undefined2 *)(param_1 + 0x13) = 0;
  return;
}



/* Entry: 10054ee4c; end: 10054ee7b;  */

/* WARNING: Removing unreachable block (ram,0x00010054ece8) */
/* WARNING: Removing unreachable block (ram,0x00010054ecf0) */
/* WARNING: Removing unreachable block (ram,0x00010054ecf8) */
/* WARNING: Removing unreachable block (ram,0x00010054ed00) */
/* WARNING: Removing unreachable block (ram,0x00010054ed0c) */
/* WARNING: Removing unreachable block (ram,0x00010054ed24) */
/* WARNING: Removing unreachable block (ram,0x00010054ed2c) */
/* WARNING: Removing unreachable block (ram,0x00010054ed34) */
/* WARNING: Removing unreachable block (ram,0x00010054ed38) */

void FUN_10054ee4c(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  *unaff_x19 = param_1;
  unaff_x19[1] = param_1;
  return;
}



/* Entry: 10054ee7c; end: 10054ee9b;  */

void FUN_10054ee7c(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *unaff_x19;
  long *plVar5;
  
  func_0x00010054ee70();
  plVar5 = (long *)*unaff_x19;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
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
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  return;
}



/* Entry: 10054ee9c; end: 10054eea7;  */

void FUN_10054ee9c(void)

{
  return;
}



/* Entry: 10054eea8; end: 10054eed3;  */

void FUN_10054eea8(undefined8 *param_1)

{
  long *plVar1;
  long unaff_x19;
  long unaff_x20;
  
  FUN_10054ee9c();
  FUN_10054eee0(*param_1);
  plVar1 = *(long **)(unaff_x20 + 8);
  FUN_10054eed4(plVar1,unaff_x19 + 8);
  if (*plVar1 != 0) {
    FUN_100850dfc(unaff_x19);
  }
  FUN_10054ef0c();
  return;
}



/* Entry: 10054eed4; end: 10054eedf;  */

void FUN_10054eed4(void)

{
  return;
}



/* Entry: 10054eee0; end: 10054ef0b;  */

void FUN_10054eee0(long *param_1)

{
  FUN_10054eed4();
  if (*param_1 != 0) {
    FUN_1005550d0();
  }
  FUN_10054ef0c();
  return;
}



/* Entry: 10054ef0c; end: 10054ef1f;  */

void FUN_10054ef0c(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  *unaff_x19 = *unaff_x20;
  *unaff_x20 = 0;
  return;
}



/* Entry: 10054ef20; end: 10054ef73;  */

void FUN_10054ef20(long *param_1)

{
  FUN_10054eed4();
  if (*param_1 != 0) {
    FUN_100850dfc();
  }
  FUN_10054ef0c();
  return;
}



/* Entry: 10054ef74; end: 10054f2eb;  */

undefined8 FUN_10054ef74(void)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  byte bVar6;
  long *plVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  
  if (lRam00000001138472b8 != 0) {
    return 0x113847248;
  }
  do {
    bVar6 = bRam0000000113847238;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(0x113847238,0x10);
    if (bVar5) {
      bRam0000000113847238 = 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while ((cVar4 != '\0') || ((bVar6 & 1) != 0));
  lVar10 = lRam00000001138472b8;
  FUN_100450040(&uStack_50);
  iVar8 = (int)lVar10;
  func_0x000107c60db8();
  func_0x000107c31540(&uStack_60,iVar8 << 1,&UNK_10f82fce6,7);
  plVar3 = plStack_48;
  plVar7 = plStack_58;
  if (plStack_58 == (long *)0x0) {
    plRam0000000113847250 = (long *)0x0;
    uRam0000000113847248 = uStack_60;
  }
  else {
    plVar1 = plStack_58 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uRam0000000113847248 = uStack_60;
    plRam0000000113847250 = plStack_58;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plRam0000000113847260 = plStack_48;
  uRam0000000113847258 = uStack_50;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar9 = (undefined8 *)0x20;
  func_0x000107c60e20();
  plVar1 = plStack_58;
  uRam0000000113847278 = 0x8000000000000020;
  uRam0000000113847270 = 0x18;
  puRam0000000113847268 = puVar9;
  puVar9[1] = 0x4c2d746c75616665;
  *puVar9 = 0x442d6d6574737953;
  puVar9[2] = 0x64617068636e7561;
  *(undefined1 *)(puVar9 + 3) = 0;
  if (plStack_58 == (long *)0x0) {
    plRam0000000113847288 = (long *)0x0;
    uRam0000000113847280 = uStack_60;
  }
  else {
    plVar2 = plStack_58 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = *plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uRam0000000113847280 = uStack_60;
    plRam0000000113847288 = plStack_58;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = *plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plRam0000000113847298 = plVar3;
  uRam0000000113847290 = uStack_50;
  if (plVar3 != (long *)0x0) {
    plVar3 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = *plVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar9 = (undefined8 *)0x20;
  func_0x000107c60e20();
  uRam00000001138472b0 = 0x8000000000000020;
  uRam00000001138472a8 = 0x19;
  puRam00000001138472a0 = puVar9;
  puVar9[1] = 0x2d676e696b636f6c;
  *puVar9 = 0x422d6d6574737953;
  *(undefined8 *)((long)puVar9 + 0x11) = 0x64617068636e7561;
  *(undefined8 *)((long)puVar9 + 9) = 0x4c2d676e696b636f;
  *(undefined1 *)((long)puVar9 + 0x19) = 0;
  if (plVar1 != (long *)0x0) {
    plVar3 = plVar1 + 1;
    do {
      lVar10 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      func_0x000107c60d68(plVar1);
    }
  }
  if (plVar7 != (long *)0x0) {
    plVar3 = plVar7 + 1;
    do {
      lVar10 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      func_0x000107c60d68(plVar7);
    }
  }
  if (plStack_58 != (long *)0x0) {
    plVar3 = plStack_58 + 1;
    do {
      lVar10 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      func_0x000107c60d68(plStack_58);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar3 = plStack_48 + 1;
    do {
      lVar10 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      func_0x000107c60d68(plStack_48);
    }
  }
  bRam0000000113847238 = 0;
  lRam00000001138472b8 = 0x113847248;
  return 0x113847248;
}



/* Entry: 10054f2ec; end: 10054f2fb;  */

void FUN_10054f2ec(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 4;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10054f2fc; end: 10054f3bb;  */

void FUN_10054f2fc(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)0x50;
  func_0x000107c60e20();
  *puVar2 = FUN_100578ed0;
  puVar2[1] = &UNK_108668efc;
  uVar1 = param_2[1];
  puVar2[4] = *param_2;
  *param_2 = 0;
  puVar2[5] = uVar1;
  *(undefined8 *)((long)puVar2 + 0x2d) = *(undefined8 *)((long)param_2 + 0xd);
  FUN_10054f3f8(puVar2 + 2);
  FUN_10054f4ac(param_1,puVar2 + 2);
  puVar2[7] = param_3;
  *(undefined1 *)(puVar2 + 9) = 0;
  (**(code **)(*(long *)*param_3 + 0x10))((long *)*param_3,0,puVar2);
  return;
}



/* Entry: 10054f3bc; end: 10054f3f7;  */

void FUN_10054f3bc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_28;
  undefined5 uStack_20;
  undefined3 uStack_1b;
  undefined5 uStack_18;
  
  uStack_28 = *param_2;
  *param_2 = 0;
  uStack_20 = (undefined5)param_2[1];
  uStack_1b = (undefined3)*(undefined8 *)((long)param_2 + 0xd);
  uStack_18 = (undefined5)((ulong)*(undefined8 *)((long)param_2 + 0xd) >> 0x18);
  FUN_10054f2fc(&uStack_28,param_1);
  func_0x00010054eaf0();
  return;
}



/* Entry: 10054f3f8; end: 10054f4ab;  */

undefined8 * FUN_10054f3f8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = (undefined8 *)0xa0;
  func_0x000107c60e20();
  *(undefined2 *)(puVar1 + 4) = 4;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[5] = 0;
  puVar1[0x12] = puVar1 + 4;
  *puVar1 = &PTR_DAT_11087bc20;
  puVar1[1] = 0x200000006;
  *(undefined2 *)(puVar1 + 0x13) = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010054ec98(&uStack_40);
  FUN_10054ebfc(&uStack_38);
  *param_1 = puVar1;
  param_1[1] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010054ec98((ulong)&uStack_50 | 8);
  FUN_10054ebfc(&uStack_50);
  return param_1;
}



/* Entry: 10054f4ac; end: 10054f4f3;  */

void FUN_10054f4ac(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
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
  func_0x00010054ee5c();
  return;
}



/* Entry: 10054f4f4; end: 10054f547;  */

void FUN_10054f4f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  puVar1 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *puVar1 = &PTR_DAT_110d9a420;
  puVar1[1] = plVar2;
  puVar1[2] = param_2;
  puVar1[3] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010054f544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2,puVar1);
  return;
}



/* Entry: 10054f548; end: 10054f55f;  */

void FUN_10054f548(void)

{
  return;
}



/* Entry: 10054f560; end: 10054f5cf;  */

void FUN_10054f560(void)

{
  int iVar1;
  
  if ((bRam000000011372ce60 & 1) == 0) {
    iVar1 = 0x1372ce60;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      uRam000000011372ce68 = 0x32aaaba7;
      uRam000000011372ce78 = 0;
      uRam000000011372ce70 = 0;
      uRam000000011372ce88 = 0;
      uRam000000011372ce80 = 0;
      uRam000000011372ce98 = 0;
      uRam000000011372ce90 = 0;
      uRam000000011372cea8 = 0;
      uRam000000011372cea0 = 0;
      uRam000000011372ceb8 = 0;
      uRam000000011372ceb0 = 0;
      uRam000000011372cec0 = 0;
      uRam000000011372cec8 = 0x3f800000;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x11372ce60);
      return;
    }
  }
  return;
}



/* Entry: 10054f5d0; end: 10054f613;  */

void FUN_10054f5d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x38);
  return;
}



/* Entry: 10054f614; end: 10054f693;  */

long * FUN_10054f614(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_10054fa10(lVar1 + 0x28);
      func_0x000107c60ca0(lVar1 + 0x10);
    }
    func_0x000107c33970();
  }
  return param_1;
}



/* Entry: 10054f694; end: 10054f69f;  */

void FUN_10054f694(void)

{
  return;
}



/* Entry: 10054f6a0; end: 10054f8b7;  */

undefined8 *
FUN_10054f6a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
             undefined8 param_5,undefined8 param_6,undefined8 *param_7)

{
  long *plVar1;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  undefined8 *unaff_x22;
  undefined8 unaff_x23;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  FUN_10054f694();
  *param_1 = &PTR_DAT_110a7c958;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  lVar2 = param_4[1];
  lVar4 = *param_4;
  param_1[7] = param_4[1];
  param_1[6] = lVar4;
  if (lVar2 != 0) {
    do {
      FUN_10054f8b8();
    } while (extraout_w10 != 0);
  }
  FUN_10054f8dc(param_1 + 8,param_3);
  plVar1 = (long *)*unaff_x22;
  (**(code **)(*plVar1 + 0x10))();
  param_1[0xb] = plVar1;
  FUN_10054f924();
  param_1[0xc] = plVar1;
  param_1[0xd] = unaff_x23;
  lVar2 = *param_4;
  if (lVar2 != 0) {
    FUN_10054ea0c(lVar2,0x1e);
  }
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  *(char *)(param_1 + 0xf) = (char)lVar2;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)(param_1 + 0x67) = 0;
  lVar2 = param_7[1];
  uVar3 = *param_7;
  param_1[0x69] = param_7[1];
  param_1[0x68] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_10054f8b8();
    } while (extraout_w10_00 != 0);
  }
  lVar2 = unaff_x22[1];
  uVar3 = *unaff_x22;
  param_1[0x6b] = unaff_x22[1];
  param_1[0x6a] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_10054f8b8();
    } while (extraout_w10_01 != 0);
  }
  uVar3 = param_1[0x68];
  lVar2 = param_1[0x69];
  uStack_70 = uVar3;
  lStack_68 = lVar2;
  if (lVar2 != 0) {
    do {
      FUN_10054f8b8();
    } while (extraout_w10_02 != 0);
  }
  FUN_10054f93c();
  param_1[0x6c] = uVar3;
  param_1[0x6d] = lVar2;
  uStack_70 = 0;
  lStack_68 = 0;
  param_1[0x6f] = uStack_80;
  param_1[0x6e] = uStack_88;
  param_1[0x70] = uStack_78;
  param_1[0x71] = 0;
  *(undefined1 *)(param_1 + 0x72) = 0;
  *(undefined1 *)(param_1 + 0x73) = 0;
  func_0x00010054f944();
  FUN_10054f94c(&uStack_70);
  func_0x00010054f970(0x11372ced0);
  return param_1;
}



/* Entry: 10054f8b8; end: 10054f8db;  */

void FUN_10054f8b8(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10054f8dc; end: 10054f903;  */

void FUN_10054f8dc(void)

{
  func_0x00010054f8c8();
  FUN_100292164();
  return;
}



/* Entry: 10054f904; end: 10054f907;  */

long FUN_10054f904(long param_1)

{
  func_0x000107c60da0();
  return param_1 / 1000;
}



/* Entry: 10054f908; end: 10054f923;  */

long FUN_10054f908(long param_1)

{
  func_0x000107c60da0();
  return param_1 / 1000;
}



/* Entry: 10054f924; end: 10054f93b;  */

void FUN_10054f924(void)

{
  func_0x000107c61294();
  return;
}



/* Entry: 10054f93c; end: 10054f94b;  */

void FUN_10054f93c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010002b82c(&stack0x00000008);
  func_0x000107c613d0(param_2);
  func_0x000107c60c50();
  return;
}



/* Entry: 10054f94c; end: 10054f9af;  */

void FUN_10054f94c(long param_1)

{
  func_0x00010054e364();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10054f9b0; end: 10054f9c3;  */

void FUN_10054f9b0(undefined8 param_1)

{
  undefined8 *unaff_x19;
  undefined8 in_register_00005008;
  
  unaff_x19[1] = in_register_00005008;
  *unaff_x19 = param_1;
  return;
}



/* Entry: 10054f9c4; end: 10054f9eb;  */

long FUN_10054f9c4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10054f9ec; end: 10054fa0f;  */

void FUN_10054f9ec(void)

{
  return;
}



/* Entry: 10054fa10; end: 10054fa5b;  */

void FUN_10054fa10(long param_1)

{
  FUN_1000dfb88();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 10054fa5c; end: 10054fa8f;  */

void FUN_10054fa5c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(0x11372ce68);
  return;
}



/* Entry: 10054fa90; end: 10054fb37;  */

void FUN_10054fa90(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,uint param_5)

{
  long *plVar1;
  long *plVar2;
  int extraout_w10;
  undefined8 uStack_60;
  long lStack_58;
  
  plVar1 = param_1;
  func_0x00010054fa88();
  plVar2 = plVar1;
  FUN_10054fb38(&PTR_DAT_110a750b8);
  uStack_60 = param_3;
  lStack_58 = param_4;
  if (param_4 != 0) {
    do {
      func_0x0001004a0330();
    } while (extraout_w10 != 0);
  }
  FUN_10054fb44(plVar2 + 3,param_2,&uStack_60,param_5 & 1);
  func_0x00010054fa34(&uStack_60);
  *param_1 = (long)(plVar2 + 3);
  param_1[1] = (long)plVar1;
  return;
}



/* Entry: 10054fb38; end: 10054fb43;  */

void FUN_10054fb38(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = param_1;
  return;
}



/* Entry: 10054fb44; end: 10054fb9f;  */

undefined8 * FUN_10054fb44(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,uint param_4)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_DAT_110a7a310;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  uVar1 = *param_3;
  param_1[6] = param_3[1];
  param_1[5] = uVar1;
  *param_3 = 0;
  param_3[1] = 0;
  if ((param_4 & 1) == 0) {
    FUN_1005ed8a8(param_1);
  }
  return param_1;
}



/* Entry: 10054fba0; end: 10054fbaf;  */

void FUN_10054fba0(void)

{
  return;
}



/* Entry: 10054fbb0; end: 10054fc0b;  */

undefined8 * FUN_10054fbb0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x00010054fba8();
  puVar1[2] = 0;
  puVar1[3] = 0x32aaaba7;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0x3cb0b1bb;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  *(undefined8 *)((long)puVar1 + 0x84) = 0;
  *(undefined8 *)((long)puVar1 + 0x7c) = 0;
  *puVar1 = &PTR_DAT_110a75108;
  puVar1[1] = 0;
  *param_1 = puVar1;
  return param_1;
}



/* Entry: 10054fc0c; end: 10054fc27;  */

void FUN_10054fc0c(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  
  lVar5 = *param_2;
  if (lVar5 == 0) {
    func_0x000107c33c44();
    return;
  }
  *param_1 = lVar5;
  func_0x000107c60d88(lVar5 + 0x18);
  if ((*(uint *)(lVar5 + 0x88) >> 1 & 1) == 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(uint *)(lVar5 + 0x88) = *(uint *)(lVar5 + 0x88) | 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(lVar5 + 0x18);
    return;
  }
  func_0x00010538ceb0(1);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1003b7a30);
  (*pcVar4)();
}



/* Entry: 10054fc28; end: 10054fc3f;  */

void FUN_10054fc28(void)

{
  return;
}



/* Entry: 10054fc40; end: 10054fc77;  */

void FUN_10054fc40(long param_1)

{
  code *extraout_x8;
  long extraout_x9;
  int extraout_w11;
  
  func_0x00010054fc34();
  if (param_1 != 0) {
    do {
      func_0x0001005eedc8();
    } while (extraout_w11 != 0);
    if (extraout_x9 == 0) {
      FUN_10054fc78();
      (*extraout_x8)();
    }
  }
  return;
}



/* Entry: 10054fc78; end: 10054fccf;  */

void FUN_10054fc78(void)

{
  return;
}



/* Entry: 10054fcd0; end: 10054fd2f;  */

void FUN_10054fcd0(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined1 uStack_51;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010054fcb8();
  FUN_10054fd50();
  FUN_10054fd68();
  FUN_10054fe24(uStack_30,param_2);
  func_0x00010054ff60();
  func_0x00010054ffb0();
  func_0x00010054ff88(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x0001053a6b34();
  func_0x00010054ffb0();
  func_0x0001053a6ad0();
  pcStack_48 = FUN_10054fd30;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_10054fcd0(&uStack_51,uStack_30);
  return;
}



/* Entry: 10054fd30; end: 10054fd4f;  */

void FUN_10054fd30(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_10054fcd0(&uStack_11,param_1);
  return;
}



/* Entry: 10054fd50; end: 10054fd67;  */

void FUN_10054fd50(void)

{
  return;
}



/* Entry: 10054fd68; end: 10054fd87;  */

void FUN_10054fd68(void)

{
  func_0x00010054fd5c();
  FUN_10054fd88();
  FUN_10054fdb8();
  return;
}



/* Entry: 10054fd88; end: 10054fdb7;  */

void FUN_10054fd88(undefined8 param_1,ulong param_2)

{
  long unaff_x19;
  
  if (param_2 < 0x492492492492493) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x38);
    return;
  }
  func_0x000104bd35f4();
  *(undefined8 *)(unaff_x19 + 0x10) = param_1;
  return;
}



/* Entry: 10054fdb8; end: 10054fdd3;  */

void FUN_10054fdb8(undefined8 param_1)

{
  long unaff_x19;
  
  *(undefined8 *)(unaff_x19 + 0x10) = param_1;
  return;
}



/* Entry: 10054fdd4; end: 10054fe23;  */

undefined8 * FUN_10054fdd4(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010054fdc4();
    } while (extraout_w10 != 0);
  }
  FUN_10054fef0(param_1 + 2);
  return param_1;
}



/* Entry: 10054fe24; end: 10054fe5f;  */

undefined8 * FUN_10054fe24(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110880e60;
  param_1[1] = 0;
  FUN_10054fdd4(param_1 + 3);
  return param_1;
}



/* Entry: 10054fe60; end: 10054feef;  */

void FUN_10054fe60(void)

{
  undefined1 in_ZR;
  undefined1 uStack_51;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  func_0x00010054fcb8();
  FUN_10054fd50();
  FUN_10054ff0c();
  *puStack_30 = &PTR_DAT_110880eb0;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  puStack_30[3] = &PTR_DAT_110880f00;
  puStack_30[4] = 0x32aaaba7;
  puStack_30[6] = 0;
  puStack_30[5] = 0;
  puStack_30[8] = 0;
  puStack_30[7] = 0;
  puStack_30[10] = 0;
  puStack_30[9] = 0;
  puStack_30[0xc] = 0;
  puStack_30[0xb] = 0;
  puStack_30[0xe] = 0;
  puStack_30[0xd] = 0;
  puStack_30[0x10] = 0;
  puStack_30[0xf] = 0;
  puStack_30[0x11] = 0;
  func_0x00010054ff60();
  func_0x00010054ff78();
  func_0x00010054ff88(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c60bd8();
  pcStack_48 = FUN_10054fef0;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_10054fe60(&uStack_51);
  return;
}



/* Entry: 10054fef0; end: 10054ff0b;  */

void FUN_10054fef0(void)

{
  undefined1 uStack_11;
  
  FUN_10054fe60(&uStack_11);
  return;
}



/* Entry: 10054ff0c; end: 10054ff2b;  */

void FUN_10054ff0c(void)

{
  func_0x00010054fd5c();
  FUN_10054ff2c();
  FUN_10054fdb8();
  return;
}



/* Entry: 10054ff2c; end: 10054ff57;  */

void FUN_10054ff2c(undefined8 param_1,ulong param_2)

{
  long extraout_x8;
  long lVar1;
  
  if (param_2 < 0x1c71c71c71c71c8) {
    lVar1 = param_2 * 9;
  }
  else {
    func_0x000104bd35f4();
    lVar1 = extraout_x8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(lVar1 << 4);
  return;
}



/* Entry: 10054ff58; end: 10054ffef;  */

void FUN_10054ff58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(param_1 << 4);
  return;
}



/* Entry: 10054fff0; end: 100550013;  */

void FUN_10054fff0(long param_1)

{
  func_0x00010054ffe4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100550014; end: 10055007f;  */

undefined8 FUN_100550014(void)

{
  undefined8 *in_x9;
  
  return *in_x9;
}



/* Entry: 100550080; end: 10055030b;  */

undefined8 *
FUN_100550080(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8,
             undefined8 *param_9)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  
  param_1[1] = 0;
  param_1[2] = 0;
  uVar6 = *param_7;
  *param_1 = &PTR_DAT_110a623b0;
  param_1[3] = &PTR_DAT_110a62450;
  param_1[4] = uVar6;
  param_1[5] = &PTR_DAT_110a62480;
  param_1[0x10] = &PTR_DAT_110a624b0;
  param_1[0x11] = &PTR_DAT_110a624e0;
  lVar7 = param_7[1];
  uStack_80 = uVar6;
  lStack_78 = lVar7;
  if (lVar7 != 0) {
    do {
      func_0x000100550070();
    } while (extraout_w10 != 0);
  }
  if (*(char *)(param_9 + 5) == '\x01') {
    puVar4 = (undefined8 *)0x8;
    func_0x000107c60e20();
    *puVar4 = &PTR_DAT_110a61ba0;
    puStack_70 = puVar4;
  }
  else {
    FUN_100550318(&puStack_70,param_9,param_9 + 1);
  }
  uVar5 = param_9[4];
  param_1[5] = &PTR_DAT_110a625b8;
  param_1[6] = param_1;
  param_1[7] = uVar6;
  param_1[8] = lVar7;
  uStack_80 = 0;
  lStack_78 = 0;
  param_1[9] = puStack_70;
  param_1[10] = uVar5;
  param_1[0xb] = &UNK_10f4b045f;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  FUN_100450be4(&uStack_80);
  *param_1 = &PTR_DAT_110a623b0;
  param_1[3] = &PTR_DAT_110a62450;
  param_1[5] = &PTR_DAT_110a62480;
  param_1[0x10] = &PTR_DAT_110a624b0;
  param_1[0x11] = &PTR_DAT_110a624e0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0x3f800000;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0x3f800000;
  puStack_90 = (undefined8 *)*param_8;
  lStack_88 = param_8[1];
  if (lStack_88 != 0) {
    plVar1 = (long *)(lStack_88 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
  puStack_70 = puStack_90;
  lStack_68 = lStack_88;
  if (lStack_88 != 0) {
    do {
      func_0x000100550070();
    } while (extraout_w10_00 != 0);
  }
  FUN_100550388(param_1 + 0x21,&puStack_70);
  FUN_100550638(&puStack_70);
  param_1[0x2e] = lStack_88;
  param_1[0x2d] = puStack_90;
  puStack_90 = (undefined8 *)0x0;
  lStack_88 = 0;
  FUN_100550638(&puStack_90);
  param_1[0x2f] = *param_7;
  lVar7 = param_7[1];
  param_1[0x30] = lVar7;
  if (lVar7 != 0) {
    do {
      func_0x000100550070();
    } while (extraout_w10_01 != 0);
  }
  uVar5 = param_9[1];
  uVar6 = *param_9;
  uVar8 = param_9[2];
  uVar10 = param_9[5];
  uVar9 = param_9[4];
  param_1[0x34] = param_9[3];
  param_1[0x33] = uVar8;
  param_1[0x36] = uVar10;
  param_1[0x35] = uVar9;
  param_1[0x32] = uVar5;
  param_1[0x31] = uVar6;
  FUN_100550674(param_1 + 0x37,param_2,param_3,param_4,param_5,param_6);
  return param_1;
}



/* Entry: 10055030c; end: 100550317;  */

void FUN_10055030c(void)

{
  return;
}



/* Entry: 100550318; end: 100550363;  */

void FUN_100550318(void)

{
  undefined8 *puVar1;
  undefined8 *extraout_x8;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  FUN_10055030c();
  puVar1 = (undefined8 *)0x28;
  func_0x000107c60e20();
  uVar2 = *unaff_x20;
  uVar3 = *unaff_x19;
  *puVar1 = &PTR_DAT_110a61b68;
  puVar1[1] = uVar2;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = uVar3;
  *extraout_x8 = puVar1;
  return;
}



/* Entry: 100550364; end: 100550387;  */

void FUN_100550364(void)

{
  return;
}



/* Entry: 100550388; end: 100550423;  */

long FUN_100550388(long param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  
  func_0x000100550370();
  puVar1 = auStack_58;
  FUN_10055042c(puVar1,1);
  func_0x0001005505a0(param_1,puVar1);
  func_0x0001005505dc();
  func_0x000100550370();
  puVar1 = auStack_58;
  FUN_10055042c(puVar1,2);
  func_0x0001005505a0(param_1 + 0x28,puVar1);
  func_0x0001005505dc();
  uVar2 = *param_2;
  *(undefined8 *)(param_1 + 0x58) = param_2[1];
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  *param_2 = 0;
  param_2[1] = 0;
  return param_1;
}



/* Entry: 100550424; end: 10055042b;  */

void FUN_100550424(undefined8 param_1,undefined8 param_2)

{
  func_0x00010002b82c(&stack0x00000008);
  func_0x000107c613d0(param_2);
  func_0x000107c60c50();
  return;
}



/* Entry: 10055042c; end: 100550483;  */

undefined8 FUN_10055042c(undefined8 param_1,undefined8 param_2)

{
  FUN_100550424(param_1,&UNK_10f4b1ddd);
  FUN_100550484();
  func_0x000100550554();
  return param_2;
}



/* Entry: 100550484; end: 1005504ab;  */

undefined8 FUN_100550484(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000100550490();
  func_0x000107c613d0(uVar1);
  FUN_1005504fc();
  FUN_10055053c();
  return param_3;
}



/* Entry: 1005504ac; end: 1005504fb;  */

undefined8 FUN_1005504ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = param_3;
  func_0x000100550490();
  func_0x000107c613d0(uVar1);
  FUN_1005504fc(param_1,auStack_40,param_3,uVar1);
  FUN_10055053c();
  return param_3;
}



/* Entry: 1005504fc; end: 10055053b;  */

long FUN_1005504fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_3;
  uStack_28 = param_4;
  FUN_1000fecf4(param_1 + 8);
  func_0x0001004c38a0(param_1 + 8,&uStack_30);
  return param_1;
}



/* Entry: 10055053c; end: 10055056b;  */

void FUN_10055053c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)();
  return;
}



/* Entry: 10055056c; end: 1005505cf;  */

undefined8 * FUN_10055056c(undefined8 *param_1,long param_2)

{
  *param_1 = &PTR_DAT_110a60a10;
  FUN_10015bc98(param_1 + 1,param_2 + 8);
  return param_1;
}



/* Entry: 1005505d0; end: 1005505e3;  */

void FUN_1005505d0(long param_1,long *param_2)

{
  *param_2 = param_1 + 0x10;
  return;
}



/* Entry: 1005505e4; end: 100550613;  */

undefined8 * FUN_1005505e4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a60a10;
  FUN_1000e30f4(param_1 + 1);
  return param_1;
}



/* Entry: 100550614; end: 100550637;  */

void FUN_100550614(void)

{
  return;
}



/* Entry: 100550638; end: 10055065b;  */

void FUN_100550638(long param_1)

{
  func_0x00010055062c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10055065c; end: 100550673;  */

void FUN_10055065c(void)

{
  return;
}



/* Entry: 100550674; end: 100550737;  */

undefined8 *
FUN_100550674(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  undefined8 uVar2;
  
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000100550664();
    } while (extraout_w10 != 0);
  }
  FUN_1005507d0(param_1 + 2,param_3);
  lVar1 = param_4[1];
  uVar2 = *param_4;
  param_1[5] = param_4[1];
  param_1[4] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000100550664();
    } while (extraout_w10_00 != 0);
  }
  lVar1 = param_5[1];
  uVar2 = *param_5;
  param_1[7] = param_5[1];
  param_1[6] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000100550664();
    } while (extraout_w10_01 != 0);
  }
  lVar1 = param_6[1];
  uVar2 = *param_6;
  param_1[9] = param_6[1];
  param_1[8] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000100550664();
    } while (extraout_w10_02 != 0);
  }
  return param_1;
}



/* Entry: 100550738; end: 100550747;  */

void FUN_100550738(void)

{
  return;
}



/* Entry: 100550748; end: 1005507cf;  */

void FUN_100550748(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  undefined1 uStack_51;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  FUN_100550738();
  uStack_28 = extraout_x8;
  FUN_100550824(auStack_40,1);
  FUN_100550890(lStack_30,param_3);
  lVar1 = lStack_30;
  lStack_30 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  FUN_1005508c0(auStack_40);
  func_0x0001005508d0(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  FUN_1005508c0(auStack_40);
  func_0x000107c329cc();
  pcStack_48 = FUN_1005507d0;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_100550748(&uStack_51,puVar2);
  return;
}



/* Entry: 1005507d0; end: 100550823;  */

void FUN_1005507d0(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_100550748(&uStack_11,param_1);
  return;
}



/* Entry: 100550824; end: 10055084b;  */

long FUN_100550824(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x0001005507f4();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10055084c; end: 10055088f;  */

void FUN_10055084c(void)

{
  return;
}



/* Entry: 100550890; end: 1005508bf;  */

undefined8 * FUN_100550890(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110a66c68;
  func_0x000100550854(param_1 + 3);
  return param_1;
}



/* Entry: 1005508c0; end: 1005508ff;  */

void FUN_1005508c0(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 100550900; end: 10055096b;  */

void FUN_100550900(long param_1)

{
  func_0x00010055062c();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 10055096c; end: 100550983;  */

void FUN_10055096c(void)

{
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x38) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  return;
}



/* Entry: 100550984; end: 100550bfb;  */

void FUN_100550984(long param_1,undefined **param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  int iVar7;
  code *extraout_x8;
  long unaff_x19;
  char cVar8;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined1 uStack_50;
  
  FUN_10055096c();
  uVar2 = (*(byte **)(param_1 + 0x20))[0x18] == 1;
  if ((!(bool)uVar2) || ((**(byte **)(param_1 + 0x20) & 1) == 0)) {
    unaff_x23 = *(undefined8 **)(unaff_x19 + 0x10);
    ppuVar4 = (undefined **)unaff_x23[1];
    uStack_88 = unaff_x23[2];
    unaff_x24 = (undefined8 *)unaff_x23[3];
    uVar2 = *(char *)((long)ppuVar4 + 0x17) == '\0';
    param_2 = (undefined **)*ppuVar4;
    if (-1 < *(char *)((long)ppuVar4 + 0x17)) {
      param_2 = ppuVar4;
    }
    puStack_98 = &UNK_1088209f4;
    ppuStack_90 = &PTR_DAT_110a751e8;
    FUN_100550c0c(*(undefined8 *)*unaff_x23,param_2,&puStack_98);
    func_0x0001005ed530(ppuStack_90);
    cVar8 = '\x01';
    goto LAB_100550a10;
  }
  cVar8 = '\0';
  do {
    iVar7 = (int)param_2;
    unaff_x19 = **(long **)(unaff_x19 + 0x18);
    if (unaff_x19 == 0) {
      func_0x000107c33c44();
LAB_100550a98:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100550a9c);
      (*pcVar1)();
    }
    puStack_98 = (undefined *)(unaff_x19 + 0x18);
    ppuStack_90 = (undefined **)CONCAT71(ppuStack_90._1_7_,1);
    func_0x000107c60d88();
    lVar3 = unaff_x19;
    FUN_1005ee0f0();
    if ((int)lVar3 != 0) {
      func_0x00010538ceb0(2);
      goto LAB_100550a98;
    }
    *(char *)(unaff_x19 + 0x8c) = cVar8;
    FUN_1005ee13c();
    ppuVar4 = &puStack_98;
    FUN_1000df5a0();
    func_0x0001005ee154();
    if ((bool)uVar2) {
      return;
    }
    func_0x000107c60e78();
    func_0x000107c33818(&puStack_98);
    uVar2 = iVar7 == 1;
    if (!(bool)uVar2) {
      func_0x000107c339e8();
      return;
    }
    func_0x000107c60e38();
    ppuVar5 = ppuVar4;
    func_0x000100458ae4();
    (**(code **)(*ppuVar4 + 0x10))();
    uStack_c8 = 0;
    ppuStack_d0 = ppuVar4;
    FUN_1003a91d4(&UNK_10f4bcc8c);
    FUN_1003a9204(&uStack_b0);
    func_0x000107c316c0(&ppuStack_d0,3);
    uVar6 = *unaff_x24;
    FUN_10054fc78();
    (*extraout_x8)();
    puStack_98 = (undefined *)CONCAT44(puStack_98._4_4_,0x11);
    ppuStack_90 = (undefined **)0x1;
    uStack_80 = uStack_a8;
    uStack_88 = uStack_b0;
    uStack_78 = uStack_a0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_68 = uStack_c8;
    ppuStack_70 = ppuStack_d0;
    func_0x000107c33c80(uStack_c0);
    uStack_50 = 0;
    param_2 = &puStack_98;
    uStack_58 = uVar6;
    func_0x000107c31340(ppuVar5);
    func_0x00010786e114(&puStack_98);
    func_0x000107c60ca0(&ppuStack_d0);
    func_0x000107c60ca0(&uStack_b0);
    FUN_10054f560();
    func_0x000107c29b38(cVar8);
    func_0x000107c60e3c();
    cVar8 = '\0';
LAB_100550a10:
    func_0x0001005ed540(unaff_x23[4]);
    FUN_1005641fc(unaff_x23[5]);
    if (cVar8 != '\0') {
      func_0x0001005ed808(unaff_x23[6]);
      func_0x0001005ed808(unaff_x23[7]);
      func_0x0001005ed808(unaff_x23[8]);
    }
  } while( true );
}



/* Entry: 100550bfc; end: 100550c0b;  */

void FUN_100550bfc(void)

{
  return;
}



/* Entry: 100550c0c; end: 100550c63;  */

void FUN_100550c0c(long param_1)

{
  undefined1 auStack_68 [56];
  
  FUN_100550bfc();
  FUN_100550c64(auStack_68,param_1 + 0x40);
  FUN_100556d98();
  FUN_100556dbc();
  func_0x00010054d304(auStack_68);
  return;
}



/* Entry: 100550c64; end: 100550c73;  */

void FUN_100550c64(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined8 extraout_x8;
  long lVar6;
  undefined1 auStack_2f78 [24];
  undefined1 auStack_2f60 [24];
  undefined1 auStack_2f48 [24];
  undefined8 uStack_2f30;
  undefined1 auStack_2f28 [24];
  undefined1 uStack_2f10;
  undefined1 uStack_2ee0;
  undefined8 uStack_2ed8;
  undefined1 auStack_2ed0 [24];
  undefined1 uStack_2eb8;
  undefined1 uStack_2e88;
  undefined8 uStack_2e80;
  undefined1 auStack_2e78 [24];
  undefined1 uStack_2e60;
  undefined1 uStack_2e30;
  undefined8 uStack_2e28;
  undefined1 auStack_2e20 [24];
  undefined *puStack_2e08;
  undefined **ppuStack_2e00;
  undefined *puStack_2df8;
  undefined1 uStack_2dd8;
  undefined8 uStack_2dd0;
  undefined1 auStack_2dc8 [24];
  undefined1 uStack_2db0;
  undefined1 uStack_2d80;
  undefined8 uStack_2d78;
  undefined1 auStack_2d70 [24];
  undefined1 uStack_2d58;
  undefined1 uStack_2d28;
  undefined8 uStack_2d20;
  undefined1 auStack_2d18 [24];
  undefined1 uStack_2d00;
  undefined1 uStack_2cd0;
  undefined8 uStack_2cc8;
  undefined1 auStack_2cc0 [24];
  undefined1 uStack_2ca8;
  undefined1 uStack_2c78;
  undefined8 uStack_2c70;
  undefined1 auStack_2c68 [24];
  undefined1 uStack_2c50;
  undefined1 uStack_2c20;
  undefined8 uStack_2c18;
  undefined1 auStack_2c10 [24];
  undefined *puStack_2bf8;
  undefined **ppuStack_2bf0;
  undefined1 *puStack_2be8;
  undefined1 uStack_2bc8;
  undefined8 uStack_2bc0;
  undefined1 auStack_2bb8 [24];
  undefined1 uStack_2ba0;
  undefined1 uStack_2b70;
  undefined8 uStack_2b68;
  undefined1 auStack_2b60 [24];
  undefined1 uStack_2b48;
  undefined1 uStack_2b18;
  undefined8 uStack_2b10;
  undefined1 auStack_2b08 [24];
  undefined *puStack_2af0;
  undefined **ppuStack_2ae8;
  undefined *puStack_2ae0;
  undefined1 uStack_2ac0;
  undefined8 uStack_2ab8;
  undefined1 auStack_2ab0 [24];
  undefined1 uStack_2a98;
  undefined1 uStack_2a68;
  undefined8 uStack_2a60;
  undefined1 auStack_2a58 [24];
  undefined *puStack_2a40;
  undefined **ppuStack_2a38;
  undefined *puStack_2a30;
  undefined1 uStack_2a10;
  undefined8 uStack_2a08;
  undefined1 auStack_2a00 [24];
  undefined *puStack_29e8;
  undefined **ppuStack_29e0;
  undefined *puStack_29d8;
  undefined1 uStack_29b8;
  undefined8 uStack_29b0;
  undefined1 auStack_29a8 [24];
  undefined1 uStack_2990;
  undefined1 uStack_2960;
  undefined8 uStack_2958;
  undefined1 auStack_2950 [24];
  undefined1 uStack_2938;
  undefined1 uStack_2908;
  undefined8 uStack_2900;
  undefined1 auStack_28f8 [24];
  undefined1 uStack_28e0;
  undefined1 uStack_28b0;
  undefined8 uStack_28a8;
  undefined1 auStack_28a0 [24];
  undefined1 uStack_2888;
  undefined1 uStack_2858;
  undefined8 uStack_2850;
  undefined1 auStack_2848 [24];
  undefined1 uStack_2830;
  undefined1 uStack_2800;
  undefined8 uStack_27f8;
  undefined1 auStack_27f0 [24];
  undefined1 uStack_27d8;
  undefined1 uStack_27a8;
  undefined8 uStack_27a0;
  undefined1 auStack_2798 [24];
  undefined1 uStack_2780;
  undefined1 uStack_2750;
  undefined8 uStack_2748;
  undefined1 auStack_2740 [24];
  undefined1 uStack_2728;
  undefined1 uStack_26f8;
  undefined8 uStack_26f0;
  undefined1 auStack_26e8 [24];
  undefined1 uStack_26d0;
  undefined1 uStack_26a0;
  undefined8 uStack_2698;
  undefined1 auStack_2690 [24];
  undefined1 uStack_2678;
  undefined1 uStack_2648;
  undefined8 uStack_2640;
  undefined1 auStack_2638 [24];
  undefined1 uStack_2620;
  undefined1 uStack_25f0;
  undefined8 uStack_25e8;
  undefined1 auStack_25e0 [24];
  undefined1 uStack_25c8;
  undefined1 uStack_2598;
  undefined8 uStack_2590;
  undefined1 auStack_2588 [24];
  undefined1 uStack_2570;
  undefined1 uStack_2540;
  undefined8 uStack_2538;
  undefined1 auStack_2530 [24];
  undefined1 uStack_2518;
  undefined1 uStack_24e8;
  undefined8 uStack_24e0;
  undefined1 auStack_24d8 [24];
  undefined1 uStack_24c0;
  undefined1 uStack_2490;
  undefined8 uStack_2488;
  undefined1 auStack_2480 [24];
  undefined1 uStack_2468;
  undefined1 uStack_2438;
  undefined8 uStack_2430;
  undefined1 auStack_2428 [24];
  undefined *puStack_2410;
  undefined **ppuStack_2408;
  undefined1 *puStack_2400;
  undefined1 uStack_23e0;
  undefined8 uStack_23d8;
  undefined1 auStack_23d0 [24];
  undefined1 uStack_23b8;
  undefined1 uStack_2388;
  undefined8 uStack_2380;
  undefined1 auStack_2378 [24];
  undefined1 uStack_2360;
  undefined1 uStack_2330;
  undefined8 uStack_2328;
  undefined1 auStack_2320 [24];
  undefined1 uStack_2308;
  undefined1 uStack_22d8;
  undefined8 uStack_22d0;
  undefined1 auStack_22c8 [24];
  undefined1 uStack_22b0;
  undefined1 uStack_2280;
  undefined8 uStack_2278;
  undefined1 auStack_2270 [24];
  undefined1 uStack_2258;
  undefined1 uStack_2228;
  undefined8 uStack_2220;
  undefined1 auStack_2218 [24];
  undefined1 uStack_2200;
  undefined1 uStack_21d0;
  undefined8 uStack_21c8;
  undefined1 auStack_21c0 [24];
  undefined1 uStack_21a8;
  undefined1 uStack_2178;
  undefined8 uStack_2170;
  undefined1 auStack_2168 [24];
  undefined1 uStack_2150;
  undefined1 uStack_2120;
  undefined8 uStack_2118;
  undefined1 auStack_2110 [24];
  undefined1 uStack_20f8;
  undefined1 uStack_20c8;
  undefined8 uStack_20c0;
  undefined1 auStack_20b8 [24];
  undefined *puStack_20a0;
  undefined **ppuStack_2098;
  undefined *puStack_2090;
  undefined1 uStack_2070;
  undefined8 uStack_2068;
  undefined1 auStack_2060 [24];
  undefined1 uStack_2048;
  undefined1 uStack_2018;
  undefined8 uStack_2010;
  undefined1 auStack_2008 [24];
  undefined1 uStack_1ff0;
  undefined1 uStack_1fc0;
  undefined8 uStack_1fb8;
  undefined1 auStack_1fb0 [24];
  undefined1 uStack_1f98;
  undefined1 uStack_1f68;
  undefined8 uStack_1f60;
  undefined1 auStack_1f58 [24];
  undefined1 uStack_1f40;
  undefined1 uStack_1f10;
  undefined8 uStack_1f08;
  undefined1 uStack_1ee8;
  undefined1 uStack_1eb8;
  undefined8 uStack_1eb0;
  undefined1 uStack_1e90;
  undefined1 uStack_1e60;
  undefined8 uStack_1e58;
  undefined1 uStack_1e38;
  undefined1 uStack_1e08;
  undefined8 uStack_1e00;
  undefined1 uStack_1de0;
  undefined1 uStack_1db0;
  undefined8 uStack_1da8;
  undefined1 uStack_1d88;
  undefined1 uStack_1d58;
  undefined8 uStack_1d50;
  undefined1 uStack_1d30;
  undefined1 uStack_1d00;
  undefined8 uStack_1cf8;
  undefined1 uStack_1cd8;
  undefined1 uStack_1ca8;
  undefined8 uStack_1ca0;
  undefined1 uStack_1c80;
  undefined1 uStack_1c50;
  undefined8 uStack_1c48;
  undefined1 uStack_1c28;
  undefined1 uStack_1bf8;
  undefined8 uStack_1bf0;
  undefined1 uStack_1bd0;
  undefined1 uStack_1ba0;
  undefined8 uStack_1b98;
  undefined1 uStack_1b78;
  undefined1 uStack_1b48;
  undefined8 uStack_1b40;
  undefined *puStack_1b20;
  undefined **ppuStack_1b18;
  undefined *puStack_1b10;
  undefined1 uStack_1af0;
  undefined8 uStack_1ae8;
  undefined *puStack_1ac8;
  undefined **ppuStack_1ac0;
  undefined *puStack_1ab8;
  undefined1 uStack_1a98;
  undefined8 uStack_1a90;
  undefined1 uStack_1a70;
  undefined1 uStack_1a40;
  undefined8 uStack_1a38;
  undefined1 uStack_1a18;
  undefined1 uStack_19e8;
  undefined8 uStack_19e0;
  undefined1 uStack_19c0;
  undefined1 uStack_1990;
  undefined8 uStack_1988;
  undefined1 uStack_1968;
  undefined1 uStack_1938;
  undefined8 uStack_1930;
  undefined1 uStack_1910;
  undefined1 uStack_18e0;
  undefined8 uStack_18d8;
  undefined1 uStack_18b8;
  undefined1 uStack_1888;
  undefined8 uStack_1880;
  undefined1 uStack_1860;
  undefined1 uStack_1830;
  undefined8 uStack_1828;
  undefined1 uStack_1808;
  undefined1 uStack_17d8;
  undefined8 uStack_17d0;
  undefined1 uStack_17b0;
  undefined1 uStack_1780;
  undefined8 uStack_1778;
  undefined1 uStack_1758;
  undefined1 uStack_1728;
  undefined8 uStack_1720;
  undefined1 uStack_1700;
  undefined1 uStack_16d0;
  undefined8 uStack_16c8;
  undefined *puStack_16a8;
  undefined **ppuStack_16a0;
  undefined *puStack_1698;
  undefined1 uStack_1678;
  undefined8 uStack_1670;
  undefined1 uStack_1650;
  undefined1 uStack_1620;
  undefined8 uStack_1618;
  undefined1 uStack_15f8;
  undefined1 uStack_15c8;
  undefined8 uStack_15c0;
  undefined1 uStack_15a0;
  undefined1 uStack_1570;
  undefined8 uStack_1568;
  undefined1 auStack_1560 [24];
  undefined1 uStack_1548;
  undefined1 uStack_1518;
  undefined8 uStack_1510;
  undefined1 auStack_1508 [24];
  undefined *puStack_14f0;
  undefined **ppuStack_14e8;
  undefined1 *puStack_14e0;
  undefined1 uStack_14c0;
  undefined8 uStack_14b8;
  undefined1 uStack_1498;
  undefined1 uStack_1468;
  undefined8 uStack_1460;
  undefined1 uStack_1440;
  undefined1 uStack_1410;
  undefined8 uStack_1408;
  undefined1 uStack_13e8;
  undefined1 uStack_13b8;
  undefined8 uStack_13b0;
  undefined1 uStack_1390;
  undefined1 uStack_1360;
  undefined8 uStack_1358;
  undefined1 uStack_1338;
  undefined1 uStack_1308;
  undefined8 uStack_1300;
  undefined1 uStack_12e0;
  undefined1 uStack_12b0;
  undefined8 uStack_12a8;
  undefined1 uStack_1288;
  undefined1 uStack_1258;
  undefined8 uStack_1250;
  undefined1 uStack_1230;
  undefined1 uStack_1200;
  undefined8 uStack_11f8;
  undefined1 uStack_11d8;
  undefined1 uStack_11a8;
  undefined8 uStack_11a0;
  undefined1 uStack_1180;
  undefined1 uStack_1150;
  undefined8 uStack_1148;
  undefined1 uStack_1128;
  undefined1 uStack_10f8;
  undefined8 uStack_10f0;
  undefined1 uStack_10d0;
  undefined1 uStack_10a0;
  undefined8 uStack_1098;
  undefined1 uStack_1078;
  undefined1 uStack_1048;
  undefined8 uStack_1040;
  undefined1 uStack_1020;
  undefined1 uStack_ff0;
  undefined8 uStack_fe8;
  undefined1 uStack_fc8;
  undefined1 uStack_f98;
  undefined8 uStack_f90;
  undefined1 uStack_f70;
  undefined1 uStack_f40;
  undefined8 uStack_f38;
  undefined1 uStack_f18;
  undefined1 uStack_ee8;
  undefined8 uStack_ee0;
  undefined1 uStack_ec0;
  undefined1 uStack_e90;
  undefined8 uStack_e88;
  undefined1 uStack_e68;
  undefined1 uStack_e38;
  undefined8 uStack_e30;
  undefined1 uStack_e10;
  undefined1 uStack_de0;
  undefined8 uStack_dd8;
  undefined1 uStack_db8;
  undefined1 uStack_d88;
  undefined8 uStack_d80;
  undefined1 uStack_d60;
  undefined1 uStack_d30;
  undefined8 uStack_d28;
  undefined1 uStack_d08;
  undefined1 uStack_cd8;
  undefined8 uStack_cd0;
  undefined1 uStack_cb0;
  undefined1 uStack_c80;
  undefined8 uStack_c78;
  undefined1 uStack_c58;
  undefined1 uStack_c28;
  undefined8 uStack_c20;
  undefined1 uStack_c00;
  undefined1 uStack_bd0;
  undefined8 uStack_bc8;
  undefined1 uStack_ba8;
  undefined1 uStack_b78;
  undefined8 uStack_b70;
  undefined1 uStack_b50;
  undefined1 uStack_b20;
  undefined8 uStack_b18;
  undefined *puStack_af8;
  undefined **ppuStack_af0;
  undefined *puStack_ae8;
  undefined1 uStack_ac8;
  undefined8 uStack_ac0;
  undefined1 uStack_aa0;
  undefined1 uStack_a70;
  undefined8 uStack_a68;
  undefined1 uStack_a48;
  undefined1 uStack_a18;
  undefined8 uStack_a10;
  undefined1 uStack_9f0;
  undefined1 uStack_9c0;
  undefined8 uStack_9b8;
  undefined1 uStack_998;
  undefined1 uStack_968;
  undefined8 uStack_960;
  undefined1 uStack_940;
  undefined1 uStack_910;
  undefined8 uStack_908;
  undefined *puStack_8e8;
  undefined **ppuStack_8e0;
  undefined *puStack_8d8;
  undefined1 uStack_8b8;
  undefined8 uStack_8b0;
  undefined1 uStack_890;
  undefined1 uStack_860;
  undefined8 uStack_858;
  undefined1 uStack_838;
  undefined1 uStack_808;
  undefined8 uStack_800;
  undefined1 uStack_7e0;
  undefined1 uStack_7b0;
  undefined8 uStack_7a8;
  undefined1 uStack_788;
  undefined1 uStack_758;
  undefined8 uStack_750;
  undefined1 uStack_730;
  undefined1 uStack_700;
  undefined8 uStack_6f8;
  undefined1 uStack_6d8;
  undefined1 uStack_6a8;
  undefined8 uStack_6a0;
  undefined1 uStack_680;
  undefined1 uStack_650;
  undefined8 uStack_648;
  undefined1 uStack_628;
  undefined1 uStack_5f8;
  undefined8 uStack_5f0;
  undefined1 uStack_5d0;
  undefined1 uStack_5a0;
  undefined8 uStack_598;
  undefined1 uStack_578;
  undefined1 uStack_548;
  undefined8 uStack_540;
  undefined1 uStack_520;
  undefined1 uStack_4f0;
  undefined8 uStack_4e8;
  undefined1 uStack_4c8;
  undefined1 uStack_498;
  undefined8 uStack_490;
  undefined1 uStack_470;
  undefined1 uStack_440;
  undefined8 uStack_438;
  undefined1 uStack_418;
  undefined1 uStack_3e8;
  undefined8 uStack_3e0;
  undefined1 uStack_3c0;
  undefined1 uStack_390;
  undefined8 uStack_388;
  undefined1 uStack_368;
  undefined1 uStack_338;
  undefined8 uStack_330;
  undefined1 uStack_310;
  undefined1 uStack_2e0;
  undefined8 uStack_2d8;
  undefined1 uStack_2b8;
  undefined1 uStack_288;
  undefined8 uStack_280;
  undefined1 uStack_260;
  undefined1 uStack_230;
  undefined8 uStack_228;
  undefined1 uStack_208;
  undefined1 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 uStack_1b0;
  undefined1 uStack_180;
  undefined8 uStack_178;
  undefined1 uStack_158;
  undefined1 uStack_128;
  undefined8 uStack_120;
  undefined1 uStack_100;
  undefined1 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [24];
  undefined1 uStack_a8;
  undefined1 uStack_78;
  long lStack_70;
  
  puVar5 = &UNK_10f4c9b8e;
  uVar4 = 0xc2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(param_1,0xc2,&UNK_10f4c9b8e);
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_2f30 = 0x3b0000003a;
  FUN_10002b838(auStack_2f28,&UNK_10f4bead8);
  uStack_2f10 = 0;
  uStack_2ee0 = 0;
  uStack_2ed8 = 0x3c0000003b;
  FUN_10002b838(auStack_2ed0,&UNK_10f4bf3b1);
  uStack_2eb8 = 0;
  uStack_2e88 = 0;
  uStack_2e80 = 0x3d0000003c;
  FUN_10002b838(auStack_2e78,&UNK_10f4bfeae);
  uStack_2e60 = 0;
  uStack_2e30 = 0;
  uStack_2e28 = 0x3e0000003d;
  FUN_10002b838(auStack_2e20,&UNK_10f4bff04);
  puStack_2e08 = &UNK_10885e630;
  ppuStack_2e00 = &PTR_FUN_110a7c8c8;
  puStack_2df8 = &UNK_10887e2e4;
  uStack_2dd8 = 1;
  uStack_2dd0 = 0x3f0000003e;
  FUN_10002b838(auStack_2dc8,&UNK_10f4bff0d);
  uStack_2db0 = 0;
  uStack_2d80 = 0;
  uStack_2d78 = 0x400000003f;
  FUN_10002b838(auStack_2d70,&UNK_10f4bffba);
  uStack_2d58 = 0;
  uStack_2d28 = 0;
  uStack_2d20 = 0x4100000040;
  FUN_10002b838(auStack_2d18,&UNK_10f4c022e);
  uStack_2d00 = 0;
  uStack_2cd0 = 0;
  uStack_2cc8 = 0x4200000041;
  FUN_10002b838(auStack_2cc0,&UNK_10f4c0296);
  uStack_2ca8 = 0;
  uStack_2c78 = 0;
  uStack_2c70 = 0x4300000042;
  FUN_10002b838(auStack_2c68,&UNK_10f4c031a);
  uStack_2c50 = 0;
  uStack_2c20 = 0;
  uStack_2c18 = 0x4400000043;
  FUN_10002b838(auStack_2c10,&UNK_10f4c0368);
  puVar1 = auStack_2f48;
  FUN_1005537d0();
  puStack_2bf8 = &UNK_10885e63c;
  ppuStack_2bf0 = &PTR_DAT_110a7c8e8;
  func_0x0001005537d8();
  FUN_10054f8dc();
  uStack_2bc8 = 1;
  uStack_2bc0 = 0x4500000044;
  puStack_2be8 = puVar1;
  FUN_10002b838(auStack_2bb8,&UNK_10f4c061b);
  uStack_2ba0 = 0;
  uStack_2b70 = 0;
  uStack_2b68 = 0x4600000045;
  FUN_10002b838(auStack_2b60,&UNK_10f4c0657);
  uStack_2b48 = 0;
  uStack_2b18 = 0;
  uStack_2b10 = 0x4700000046;
  FUN_10002b838(auStack_2b08,&UNK_10f4c06ee);
  puStack_2af0 = &UNK_10885e630;
  ppuStack_2ae8 = &PTR_FUN_110a7c8c8;
  puStack_2ae0 = &UNK_108880070;
  uStack_2ac0 = 1;
  uStack_2ab8 = 0x4800000047;
  FUN_10002b838(auStack_2ab0,&UNK_10f4c074b);
  uStack_2a98 = 0;
  uStack_2a68 = 0;
  uStack_2a60 = 0x4900000048;
  FUN_10002b838(auStack_2a58,&UNK_10f4c078e);
  puStack_2a40 = &UNK_10885e630;
  ppuStack_2a38 = &PTR_FUN_110a7c8c8;
  puStack_2a30 = &UNK_1088807f4;
  uStack_2a10 = 1;
  uStack_2a08 = 0x4a00000049;
  FUN_10002b838(auStack_2a00,&UNK_10f4c07c0);
  puStack_29e8 = &UNK_10885e630;
  ppuStack_29e0 = &PTR_FUN_110a7c8c8;
  puStack_29d8 = &UNK_108880888;
  uStack_29b8 = 1;
  uStack_29b0 = 0x4b0000004a;
  FUN_10002b838(auStack_29a8,&UNK_10f4c0855);
  uStack_2990 = 0;
  uStack_2960 = 0;
  uStack_2958 = 0x4c0000004b;
  FUN_10002b838(auStack_2950,&UNK_10f4c08b6);
  uStack_2938 = 0;
  uStack_2908 = 0;
  uStack_2900 = 0x4d0000004c;
  func_0x0001005537e0();
  FUN_10002b838(auStack_28f8);
  uStack_28e0 = 0;
  uStack_28b0 = 0;
  uStack_28a8 = 0x4e0000004d;
  FUN_10002b838(auStack_28a0,&UNK_10f4c0915);
  uStack_2888 = 0;
  uStack_2858 = 0;
  uStack_2850 = 0x4f0000004e;
  FUN_10002b838(auStack_2848,&UNK_10f4c0975);
  uStack_2830 = 0;
  uStack_2800 = 0;
  uStack_27f8 = 0x500000004f;
  FUN_10002b838(auStack_27f0,&UNK_10f4c09d6);
  uStack_27d8 = 0;
  uStack_27a8 = 0;
  uStack_27a0 = 0x5100000050;
  FUN_10002b838(auStack_2798,&UNK_10f4c0ca7);
  uStack_2780 = 0;
  uStack_2750 = 0;
  uStack_2748 = 0x5200000051;
  FUN_10002b838(auStack_2740,&UNK_10f4c0f1a);
  uStack_2728 = 0;
  uStack_26f8 = 0;
  uStack_26f0 = 0x5300000052;
  FUN_10002b838(auStack_26e8,&UNK_10f4c0fbe);
  uStack_26d0 = 0;
  uStack_26a0 = 0;
  uStack_2698 = 0x5400000053;
  FUN_10002b838(auStack_2690,&UNK_10f4c101d);
  uStack_2678 = 0;
  uStack_2648 = 0;
  uStack_2640 = 0x5500000054;
  FUN_10002b838(auStack_2638,&UNK_10f4c178c);
  uStack_2620 = 0;
  uStack_25f0 = 0;
  uStack_25e8 = 0x5600000055;
  FUN_10002b838(auStack_25e0,&UNK_10f4c17e4);
  uStack_25c8 = 0;
  uStack_2598 = 0;
  uStack_2590 = 0x5700000056;
  FUN_10002b838(auStack_2588,&UNK_10f4c186f);
  uStack_2570 = 0;
  uStack_2540 = 0;
  uStack_2538 = 0x5800000057;
  FUN_10002b838(auStack_2530,&UNK_10f4c1b0f);
  uStack_2518 = 0;
  uStack_24e8 = 0;
  uStack_24e0 = 0x5900000058;
  FUN_10002b838(auStack_24d8,&UNK_10f4c1dc7);
  uStack_24c0 = 0;
  uStack_2490 = 0;
  uStack_2488 = 0x5a00000059;
  FUN_10002b838(auStack_2480,&UNK_10f4c2063);
  uStack_2468 = 0;
  uStack_2438 = 0;
  uStack_2430 = 0x5b0000005a;
  FUN_10002b838(auStack_2428,&UNK_10f4bff04);
  puVar1 = auStack_2f60;
  FUN_1005537d0();
  puStack_2410 = &UNK_10885e648;
  ppuStack_2408 = &PTR_DAT_110a7c908;
  func_0x0001005537d8();
  FUN_10054f8dc();
  uStack_23e0 = 1;
  uStack_23d8 = 0x5c0000005b;
  puStack_2400 = puVar1;
  FUN_10002b838(auStack_23d0,&UNK_10f4c22a9);
  uStack_23b8 = 0;
  uStack_2388 = 0;
  uStack_2380 = 0x5d0000005c;
  FUN_10002b838(auStack_2378,&UNK_10f4c2307);
  uStack_2360 = 0;
  uStack_2330 = 0;
  uStack_2328 = 0x5e0000005d;
  FUN_10002b838(auStack_2320,&UNK_10f4c2364);
  uStack_2308 = 0;
  uStack_22d8 = 0;
  uStack_22d0 = 0x5f0000005e;
  FUN_10002b838(auStack_22c8,&UNK_10f4c23be);
  uStack_22b0 = 0;
  uStack_2280 = 0;
  uStack_2278 = 0x600000005f;
  FUN_10002b838(auStack_2270,&UNK_10f4c2460);
  uStack_2258 = 0;
  uStack_2228 = 0;
  uStack_2220 = 0x6100000060;
  FUN_10002b838(auStack_2218,&UNK_10f4c24b6);
  uStack_2200 = 0;
  uStack_21d0 = 0;
  uStack_21c8 = 0x6200000061;
  FUN_10002b838(auStack_21c0,&UNK_10f4c2574);
  uStack_21a8 = 0;
  uStack_2178 = 0;
  uStack_2170 = 0x6300000062;
  FUN_10002b838(auStack_2168,&UNK_10f4c25d1);
  uStack_2150 = 0;
  uStack_2120 = 0;
  uStack_2118 = 0x6400000063;
  FUN_10002b838(auStack_2110,&UNK_10f4c2625);
  uStack_20f8 = 0;
  uStack_20c8 = 0;
  uStack_20c0 = 0x6500000064;
  func_0x0001005537e0();
  FUN_10002b838(auStack_20b8);
  puStack_20a0 = &UNK_10885e630;
  ppuStack_2098 = &PTR_FUN_110a7c8c8;
  puStack_2090 = &UNK_10887d1ac;
  uStack_2070 = 1;
  uStack_2068 = 0x6600000065;
  FUN_10002b838(auStack_2060,&UNK_10f4c267c);
  uStack_2048 = 0;
  uStack_2018 = 0;
  uStack_2010 = 0x6700000066;
  FUN_10002b838(auStack_2008,&UNK_10f4c2784);
  uStack_1ff0 = 0;
  uStack_1fc0 = 0;
  uStack_1fb8 = 0x6800000067;
  FUN_10002b838(auStack_1fb0,&UNK_10f4c27cc);
  uStack_1f98 = 0;
  uStack_1f68 = 0;
  uStack_1f60 = 0x6900000068;
  FUN_10002b838(auStack_1f58,&UNK_10f4c2920);
  uStack_1f40 = 0;
  uStack_1f10 = 0;
  func_0x0001005537ec(0x1028);
  uStack_1f08 = 0x6a00000069;
  func_0x0001005537f8(0x1030);
  uStack_1ee8 = 0;
  uStack_1eb8 = 0;
  uStack_1eb0 = 0x6b0000006a;
  func_0x0001005537f8(0x1088);
  uStack_1e90 = 0;
  uStack_1e60 = 0;
  func_0x0001005537ec(0x10d8);
  uStack_1e58 = 0x6c0000006b;
  func_0x0001005537f8(0x10e0);
  uStack_1e38 = 0;
  uStack_1e08 = 0;
  uStack_1e00 = 0x6d0000006c;
  func_0x0001005537f8(0x1138);
  uStack_1de0 = 0;
  uStack_1db0 = 0;
  func_0x0001005537ec(0x1188);
  uStack_1da8 = 0x6e0000006d;
  func_0x0001005537f8(0x1190);
  uStack_1d88 = 0;
  uStack_1d58 = 0;
  uStack_1d50 = 0x6f0000006e;
  func_0x0001005537f8(0x11e8);
  uStack_1d30 = 0;
  uStack_1d00 = 0;
  func_0x0001005537ec(0x1238);
  uStack_1cf8 = 0x700000006f;
  func_0x0001005537f8(0x1240);
  uStack_1cd8 = 0;
  uStack_1ca8 = 0;
  uStack_1ca0 = 0x7100000070;
  func_0x0001005537f8(0x1298);
  uStack_1c80 = 0;
  uStack_1c50 = 0;
  func_0x0001005537ec(0x12e8);
  uStack_1c48 = 0x7200000071;
  func_0x0001005537f8(0x12f0);
  uStack_1c28 = 0;
  uStack_1bf8 = 0;
  uStack_1bf0 = 0x7300000072;
  func_0x0001005537f8(0x1348);
  uStack_1bd0 = 0;
  uStack_1ba0 = 0;
  func_0x0001005537ec(0x1398);
  uStack_1b98 = 0x7400000073;
  func_0x0001005537f8(0x13a0);
  uStack_1b78 = 0;
  uStack_1b48 = 0;
  uStack_1b40 = 0x7500000074;
  func_0x0001005537f8(0x13f8);
  puStack_1b20 = &UNK_10885e630;
  ppuStack_1b18 = &PTR_FUN_110a7c8c8;
  puStack_1b10 = &UNK_10887d37c;
  uStack_1af0 = 1;
  func_0x000100553a5c(0x1448);
  uStack_1ae8 = 0x7600000075;
  func_0x000100553a68(0x1450);
  puStack_1ac8 = &UNK_10885e630;
  ppuStack_1ac0 = &PTR_FUN_110a7c8c8;
  puStack_1ab8 = &UNK_10885dc40;
  uStack_1a98 = 1;
  uStack_1a90 = 0x7700000076;
  func_0x000100553a68(0x14a8);
  uStack_1a70 = 0;
  uStack_1a40 = 0;
  func_0x000100553a5c(0x14f8);
  uStack_1a38 = 0x7800000077;
  func_0x000100553a68(0x1500);
  uStack_1a18 = 0;
  uStack_19e8 = 0;
  uStack_19e0 = 0x7900000078;
  func_0x000100553a68(0x1558);
  uStack_19c0 = 0;
  uStack_1990 = 0;
  func_0x000100553a5c(0x15a8);
  uStack_1988 = 0x7a00000079;
  func_0x000100553a68(0x15b0);
  uStack_1968 = 0;
  uStack_1938 = 0;
  uStack_1930 = 0x7b0000007a;
  func_0x000100553a68(0x1608);
  uStack_1910 = 0;
  uStack_18e0 = 0;
  func_0x000100553a5c(0x1658);
  uStack_18d8 = 0x7c0000007b;
  func_0x000100553a68(0x1660);
  uStack_18b8 = 0;
  uStack_1888 = 0;
  uStack_1880 = 0x7d0000007c;
  func_0x000100553a68(0x16b8);
  uStack_1860 = 0;
  uStack_1830 = 0;
  func_0x000100553a5c(0x1708);
  uStack_1828 = 0x7e0000007d;
  func_0x000100553a68(0x1710);
  uStack_1808 = 0;
  uStack_17d8 = 0;
  uStack_17d0 = 0x7f0000007e;
  func_0x000100553a68(0x1768);
  uStack_17b0 = 0;
  uStack_1780 = 0;
  func_0x000100553a5c(0x17b8);
  uStack_1778 = 0x800000007f;
  func_0x000100553a68(0x17c0);
  uStack_1758 = 0;
  uStack_1728 = 0;
  uStack_1720 = 0x8100000080;
  func_0x000100553a68(0x1818);
  uStack_1700 = 0;
  uStack_16d0 = 0;
  func_0x000100553a5c(0x1868);
  uStack_16c8 = 0x8200000081;
  func_0x0001005537e0(0x1870);
  func_0x000100553a68();
  puStack_16a8 = &UNK_10885e630;
  ppuStack_16a0 = &PTR_FUN_110a7c8c8;
  puStack_1698 = &UNK_10885dc40;
  uStack_1678 = 1;
  uStack_1670 = 0x8300000082;
  func_0x000100553a68(0x18c8);
  uStack_1650 = 0;
  uStack_1620 = 0;
  func_0x0001005537ec(0x1918);
  uStack_1618 = 0x8400000083;
  func_0x0001005537f8(0x1920);
  uStack_15f8 = 0;
  uStack_15c8 = 0;
  uStack_15c0 = 0x8500000084;
  func_0x0001005537f8(0x1978);
  uStack_15a0 = 0;
  uStack_1570 = 0;
  uStack_1568 = 0x8600000085;
  FUN_10002b838(auStack_1560,&UNK_10f4c3c38);
  uStack_1548 = 0;
  uStack_1518 = 0;
  uStack_1510 = 0x8700000086;
  FUN_10002b838(auStack_1508,&UNK_10f4c3e39);
  puVar1 = auStack_2f78;
  FUN_1005537d0();
  puStack_14f0 = &UNK_10885e654;
  ppuStack_14e8 = &PTR_FUN_110a7c928;
  func_0x0001005537d8();
  FUN_10054f8dc();
  uStack_14c0 = 1;
  puStack_14e0 = puVar1;
  func_0x0001005537ec(0x1a78);
  uStack_14b8 = 0x8800000087;
  func_0x0001005537f8(0x1a80);
  uStack_1498 = 0;
  uStack_1468 = 0;
  uStack_1460 = 0x8900000088;
  func_0x0001005537f8(0x1ad8);
  uStack_1440 = 0;
  uStack_1410 = 0;
  func_0x0001005537ec(0x1b28);
  uStack_1408 = 0x8a00000089;
  func_0x0001005537f8(0x1b30);
  uStack_13e8 = 0;
  uStack_13b8 = 0;
  uStack_13b0 = 0x8b0000008a;
  func_0x0001005537f8(0x1b88);
  uStack_1390 = 0;
  uStack_1360 = 0;
  func_0x0001005537ec(0x1bd8);
  uStack_1358 = 0x8c0000008b;
  func_0x0001005537f8(0x1be0);
  uStack_1338 = 0;
  uStack_1308 = 0;
  uStack_1300 = 0x8d0000008c;
  func_0x0001005537e0(0x1c38);
  func_0x0001005537f8();
  uStack_12e0 = 0;
  uStack_12b0 = 0;
  func_0x0001005537ec(0x1c88);
  uStack_12a8 = 0x8e0000008d;
  func_0x0001005537f8(0x1c90);
  uStack_1288 = 0;
  uStack_1258 = 0;
  uStack_1250 = 0x8f0000008e;
  func_0x0001005537f8(0x1ce8);
  uStack_1230 = 0;
  uStack_1200 = 0;
  func_0x0001005537ec(0x1d38);
  uStack_11f8 = 0x900000008f;
  func_0x0001005537f8(0x1d40);
  uStack_11d8 = 0;
  uStack_11a8 = 0;
  uStack_11a0 = 0x9100000090;
  func_0x0001005537f8(0x1d98);
  uStack_1180 = 0;
  uStack_1150 = 0;
  func_0x0001005537ec(0x1de8);
  uStack_1148 = 0x9200000091;
  func_0x0001005537f8(0x1df0);
  uStack_1128 = 0;
  uStack_10f8 = 0;
  uStack_10f0 = 0x9300000092;
  func_0x0001005537f8(0x1e48);
  uStack_10d0 = 0;
  uStack_10a0 = 0;
  func_0x0001005537ec(0x1e98);
  uStack_1098 = 0x9400000093;
  func_0x0001005537f8(0x1ea0);
  uStack_1078 = 0;
  uStack_1048 = 0;
  uStack_1040 = 0x9500000094;
  func_0x0001005537f8(0x1ef8);
  uStack_1020 = 0;
  uStack_ff0 = 0;
  func_0x0001005537ec(0x1f48);
  uStack_fe8 = 0x9600000095;
  func_0x0001005537f8(0x1f50);
  uStack_fc8 = 0;
  uStack_f98 = 0;
  uStack_f90 = 0x9700000096;
  func_0x0001005537f8(0x1fa8);
  uStack_f70 = 0;
  uStack_f40 = 0;
  func_0x0001005537ec(0x1ff8);
  uStack_f38 = 0x9800000097;
  FUN_10002b838(&UNK_10885fc40,&UNK_10f4c4d36);
  uStack_f18 = 0;
  uStack_ee8 = 0;
  uStack_ee0 = 0x9900000098;
  func_0x0001005537f8(0x2058);
  uStack_ec0 = 0;
  uStack_e90 = 0;
  func_0x0001005537ec(0x20a8);
  uStack_e88 = 0x9a00000099;
  func_0x0001005537f8(0x20b0);
  uStack_e68 = 0;
  uStack_e38 = 0;
  uStack_e30 = 0x9b0000009a;
  func_0x0001005537f8(0x2108);
  uStack_e10 = 0;
  uStack_de0 = 0;
  func_0x0001005537ec(0x2158);
  uStack_dd8 = 0x9c0000009b;
  func_0x0001005537f8(0x2160);
  uStack_db8 = 0;
  uStack_d88 = 0;
  uStack_d80 = 0x9d0000009c;
  func_0x0001005537f8(0x21b8);
  uStack_d60 = 0;
  uStack_d30 = 0;
  func_0x0001005537ec(0x2208);
  uStack_d28 = 0x9e0000009d;
  func_0x0001005537f8(0x2210);
  uStack_d08 = 0;
  uStack_cd8 = 0;
  uStack_cd0 = 0x9f0000009e;
  func_0x0001005537f8(0x2268);
  uStack_cb0 = 0;
  uStack_c80 = 0;
  func_0x0001005537ec(0x22b8);
  uStack_c78 = 0xa00000009f;
  func_0x0001005537f8(0x22c0);
  uStack_c58 = 0;
  uStack_c28 = 0;
  uStack_c20 = 0xa1000000a0;
  func_0x0001005537f8(0x2318);
  uStack_c00 = 0;
  uStack_bd0 = 0;
  func_0x0001005537ec(0x2368);
  uStack_bc8 = 0xa2000000a1;
  func_0x0001005537f8(0x2370);
  uStack_ba8 = 0;
  uStack_b78 = 0;
  uStack_b70 = 0xa3000000a2;
  func_0x0001005537f8(0x23c8);
  uStack_b50 = 0;
  uStack_b20 = 0;
  func_0x0001005537ec(0x2418);
  uStack_b18 = 0xa4000000a3;
  func_0x0001005537f8(0x2420);
  puStack_af8 = &UNK_10885e630;
  ppuStack_af0 = &PTR_FUN_110a7c8c8;
  puStack_ae8 = &UNK_10885cf08;
  uStack_ac8 = 1;
  uStack_ac0 = 0xa5000000a4;
  func_0x0001005537f8(0x2478);
  uStack_aa0 = 0;
  uStack_a70 = 0;
  func_0x0001005537ec(0x24c8);
  uStack_a68 = 0xa6000000a5;
  func_0x0001005537f8(0x24d0);
  uStack_a48 = 0;
  uStack_a18 = 0;
  uStack_a10 = 0xa7000000a6;
  func_0x0001005537f8(0x2528);
  uStack_9f0 = 0;
  uStack_9c0 = 0;
  func_0x0001005537ec(0x2578);
  uStack_9b8 = 0xa8000000a7;
  func_0x0001005537f8(0x2580);
  uStack_998 = 0;
  uStack_968 = 0;
  uStack_960 = 0xa9000000a8;
  func_0x0001005537f8(0x25d8);
  uStack_940 = 0;
  uStack_910 = 0;
  func_0x0001005537ec(0x2628);
  uStack_908 = 0xaa000000a9;
  func_0x0001005537f8(0x2630);
  puStack_8e8 = &UNK_10885e630;
  ppuStack_8e0 = &PTR_FUN_110a7c8c8;
  puStack_8d8 = &UNK_10885cfa8;
  uStack_8b8 = 1;
  uStack_8b0 = 0xab000000aa;
  func_0x0001005537f8(0x2688);
  uStack_890 = 0;
  uStack_860 = 0;
  func_0x0001005537ec(0x26d8);
  uStack_858 = 0xac000000ab;
  func_0x0001005537f8(0x26e0);
  uStack_838 = 0;
  uStack_808 = 0;
  uStack_800 = 0xad000000ac;
  func_0x0001005537f8(0x2738);
  uStack_7e0 = 0;
  uStack_7b0 = 0;
  func_0x0001005537ec(0x2788);
  uStack_7a8 = 0xae000000ad;
  func_0x0001005537f8(0x2790);
  uStack_788 = 0;
  uStack_758 = 0;
  uStack_750 = 0xaf000000ae;
  func_0x0001005537f8(0x27e8);
  uStack_730 = 0;
  uStack_700 = 0;
  func_0x0001005537ec(0x2838);
  uStack_6f8 = 0xb0000000af;
  func_0x0001005537f8(0x2840);
  uStack_6d8 = 0;
  uStack_6a8 = 0;
  uStack_6a0 = 0xb1000000b0;
  func_0x0001005537f8(0x2898);
  uStack_680 = 0;
  uStack_650 = 0;
  func_0x0001005537ec(0x28e8);
  uStack_648 = 0xb2000000b1;
  func_0x0001005537f8(0x28f0);
  uStack_628 = 0;
  uStack_5f8 = 0;
  uStack_5f0 = 0xb3000000b2;
  func_0x0001005537f8(0x2948);
  uStack_5d0 = 0;
  uStack_5a0 = 0;
  func_0x0001005537ec(0x2998);
  uStack_598 = 0xb4000000b3;
  func_0x0001005537f8(0x29a0);
  uStack_578 = 0;
  uStack_548 = 0;
  uStack_540 = 0xb5000000b4;
  func_0x0001005537f8(0x29f8);
  uStack_520 = 0;
  uStack_4f0 = 0;
  func_0x0001005537ec(0x2a48);
  uStack_4e8 = 0xb6000000b5;
  func_0x0001005537f8(0x2a50);
  uStack_4c8 = 0;
  uStack_498 = 0;
  uStack_490 = 0xb7000000b6;
  func_0x0001005537f8(0x2aa8);
  uStack_470 = 0;
  uStack_440 = 0;
  func_0x0001005537ec(11000);
  uStack_438 = 0xb8000000b7;
  func_0x0001005537f8(0x2b00);
  uStack_418 = 0;
  uStack_3e8 = 0;
  uStack_3e0 = 0xb9000000b8;
  func_0x0001005537f8(0x2b58);
  uStack_3c0 = 0;
  uStack_390 = 0;
  func_0x0001005537ec(0x2ba8);
  uStack_388 = 0xba000000b9;
  func_0x0001005537f8(0x2bb0);
  uStack_368 = 0;
  uStack_338 = 0;
  uStack_330 = 0xbb000000ba;
  func_0x0001005537f8(0x2c08);
  uStack_310 = 0;
  uStack_2e0 = 0;
  func_0x0001005537ec(0x2c58);
  uStack_2d8 = 0xbc000000bb;
  func_0x0001005537f8(0x2c60);
  uStack_2b8 = 0;
  uStack_288 = 0;
  uStack_280 = 0xbd000000bc;
  func_0x0001005537f8(0x2cb8);
  uStack_260 = 0;
  uStack_230 = 0;
  func_0x0001005537ec(0x2d08);
  uStack_228 = 0xbe000000bd;
  func_0x0001005537f8(0x2d10);
  uStack_208 = 0;
  uStack_1d8 = 0;
  uStack_1d0 = 0xbf000000be;
  func_0x0001005537f8(0x2d68);
  uStack_1b0 = 0;
  uStack_180 = 0;
  func_0x0001005537ec(0x2db8);
  uStack_178 = 0xc0000000bf;
  func_0x0001005537f8(0x2dc0);
  uStack_158 = 0;
  uStack_128 = 0;
  uStack_120 = 0xc1000000c0;
  func_0x0001005537f8(0x2e18);
  uStack_100 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0xc2000000c1;
  FUN_10002b838(auStack_c0,&UNK_10f4c974a);
  uStack_a8 = 0;
  uStack_78 = 0;
  FUN_100100fec(auStack_2f78);
  FUN_100100fec(auStack_2f60);
  FUN_100100fec(auStack_2f48);
  FUN_10054ae4c(extraout_x8,uVar4,puVar5,&uStack_2f30,0x88);
  puVar2 = &uStack_c8;
  lVar6 = -0x2ec0;
  do {
    lVar3 = lVar6;
    func_0x00010054b180(puVar2);
    puVar2 = puVar2 + -0xb;
    lVar6 = lVar3 + 0x58;
  } while (lVar6 != 0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  func_0x000107c60e78();
  lVar3 = lVar3 + 0x2ec0;
  lVar6 = -0x2ec0;
  do {
    func_0x00010054b180(lVar3);
    lVar3 = lVar3 + -0x58;
    lVar6 = lVar6 + 0x58;
  } while (lVar6 != 0);
  func_0x000107c60bd8(puVar2);
  return;
}



/* Entry: 100550c74; end: 1005527cb;  */

void FUN_100550c74(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 extraout_x8;
  long lVar4;
  undefined1 auStack_2f78 [24];
  undefined1 auStack_2f60 [24];
  undefined1 auStack_2f48 [24];
  undefined8 uStack_2f30;
  undefined1 auStack_2f28 [24];
  undefined1 uStack_2f10;
  undefined1 uStack_2ee0;
  undefined8 uStack_2ed8;
  undefined1 auStack_2ed0 [24];
  undefined1 uStack_2eb8;
  undefined1 uStack_2e88;
  undefined8 uStack_2e80;
  undefined1 auStack_2e78 [24];
  undefined1 uStack_2e60;
  undefined1 uStack_2e30;
  undefined8 uStack_2e28;
  undefined1 auStack_2e20 [24];
  undefined *puStack_2e08;
  undefined **ppuStack_2e00;
  undefined *puStack_2df8;
  undefined1 uStack_2dd8;
  undefined8 uStack_2dd0;
  undefined1 auStack_2dc8 [24];
  undefined1 uStack_2db0;
  undefined1 uStack_2d80;
  undefined8 uStack_2d78;
  undefined1 auStack_2d70 [24];
  undefined1 uStack_2d58;
  undefined1 uStack_2d28;
  undefined8 uStack_2d20;
  undefined1 auStack_2d18 [24];
  undefined1 uStack_2d00;
  undefined1 uStack_2cd0;
  undefined8 uStack_2cc8;
  undefined1 auStack_2cc0 [24];
  undefined1 uStack_2ca8;
  undefined1 uStack_2c78;
  undefined8 uStack_2c70;
  undefined1 auStack_2c68 [24];
  undefined1 uStack_2c50;
  undefined1 uStack_2c20;
  undefined8 uStack_2c18;
  undefined1 auStack_2c10 [24];
  undefined *puStack_2bf8;
  undefined **ppuStack_2bf0;
  undefined1 *puStack_2be8;
  undefined1 uStack_2bc8;
  undefined8 uStack_2bc0;
  undefined1 auStack_2bb8 [24];
  undefined1 uStack_2ba0;
  undefined1 uStack_2b70;
  undefined8 uStack_2b68;
  undefined1 auStack_2b60 [24];
  undefined1 uStack_2b48;
  undefined1 uStack_2b18;
  undefined8 uStack_2b10;
  undefined1 auStack_2b08 [24];
  undefined *puStack_2af0;
  undefined **ppuStack_2ae8;
  undefined *puStack_2ae0;
  undefined1 uStack_2ac0;
  undefined8 uStack_2ab8;
  undefined1 auStack_2ab0 [24];
  undefined1 uStack_2a98;
  undefined1 uStack_2a68;
  undefined8 uStack_2a60;
  undefined1 auStack_2a58 [24];
  undefined *puStack_2a40;
  undefined **ppuStack_2a38;
  undefined *puStack_2a30;
  undefined1 uStack_2a10;
  undefined8 uStack_2a08;
  undefined1 auStack_2a00 [24];
  undefined *puStack_29e8;
  undefined **ppuStack_29e0;
  undefined *puStack_29d8;
  undefined1 uStack_29b8;
  undefined8 uStack_29b0;
  undefined1 auStack_29a8 [24];
  undefined1 uStack_2990;
  undefined1 uStack_2960;
  undefined8 uStack_2958;
  undefined1 auStack_2950 [24];
  undefined1 uStack_2938;
  undefined1 uStack_2908;
  undefined8 uStack_2900;
  undefined1 auStack_28f8 [24];
  undefined1 uStack_28e0;
  undefined1 uStack_28b0;
  undefined8 uStack_28a8;
  undefined1 auStack_28a0 [24];
  undefined1 uStack_2888;
  undefined1 uStack_2858;
  undefined8 uStack_2850;
  undefined1 auStack_2848 [24];
  undefined1 uStack_2830;
  undefined1 uStack_2800;
  undefined8 uStack_27f8;
  undefined1 auStack_27f0 [24];
  undefined1 uStack_27d8;
  undefined1 uStack_27a8;
  undefined8 uStack_27a0;
  undefined1 auStack_2798 [24];
  undefined1 uStack_2780;
  undefined1 uStack_2750;
  undefined8 uStack_2748;
  undefined1 auStack_2740 [24];
  undefined1 uStack_2728;
  undefined1 uStack_26f8;
  undefined8 uStack_26f0;
  undefined1 auStack_26e8 [24];
  undefined1 uStack_26d0;
  undefined1 uStack_26a0;
  undefined8 uStack_2698;
  undefined1 auStack_2690 [24];
  undefined1 uStack_2678;
  undefined1 uStack_2648;
  undefined8 uStack_2640;
  undefined1 auStack_2638 [24];
  undefined1 uStack_2620;
  undefined1 uStack_25f0;
  undefined8 uStack_25e8;
  undefined1 auStack_25e0 [24];
  undefined1 uStack_25c8;
  undefined1 uStack_2598;
  undefined8 uStack_2590;
  undefined1 auStack_2588 [24];
  undefined1 uStack_2570;
  undefined1 uStack_2540;
  undefined8 uStack_2538;
  undefined1 auStack_2530 [24];
  undefined1 uStack_2518;
  undefined1 uStack_24e8;
  undefined8 uStack_24e0;
  undefined1 auStack_24d8 [24];
  undefined1 uStack_24c0;
  undefined1 uStack_2490;
  undefined8 uStack_2488;
  undefined1 auStack_2480 [24];
  undefined1 uStack_2468;
  undefined1 uStack_2438;
  undefined8 uStack_2430;
  undefined1 auStack_2428 [24];
  undefined *puStack_2410;
  undefined **ppuStack_2408;
  undefined1 *puStack_2400;
  undefined1 uStack_23e0;
  undefined8 uStack_23d8;
  undefined1 auStack_23d0 [24];
  undefined1 uStack_23b8;
  undefined1 uStack_2388;
  undefined8 uStack_2380;
  undefined1 auStack_2378 [24];
  undefined1 uStack_2360;
  undefined1 uStack_2330;
  undefined8 uStack_2328;
  undefined1 auStack_2320 [24];
  undefined1 uStack_2308;
  undefined1 uStack_22d8;
  undefined8 uStack_22d0;
  undefined1 auStack_22c8 [24];
  undefined1 uStack_22b0;
  undefined1 uStack_2280;
  undefined8 uStack_2278;
  undefined1 auStack_2270 [24];
  undefined1 uStack_2258;
  undefined1 uStack_2228;
  undefined8 uStack_2220;
  undefined1 auStack_2218 [24];
  undefined1 uStack_2200;
  undefined1 uStack_21d0;
  undefined8 uStack_21c8;
  undefined1 auStack_21c0 [24];
  undefined1 uStack_21a8;
  undefined1 uStack_2178;
  undefined8 uStack_2170;
  undefined1 auStack_2168 [24];
  undefined1 uStack_2150;
  undefined1 uStack_2120;
  undefined8 uStack_2118;
  undefined1 auStack_2110 [24];
  undefined1 uStack_20f8;
  undefined1 uStack_20c8;
  undefined8 uStack_20c0;
  undefined1 auStack_20b8 [24];
  undefined *puStack_20a0;
  undefined **ppuStack_2098;
  undefined *puStack_2090;
  undefined1 uStack_2070;
  undefined8 uStack_2068;
  undefined1 auStack_2060 [24];
  undefined1 uStack_2048;
  undefined1 uStack_2018;
  undefined8 uStack_2010;
  undefined1 auStack_2008 [24];
  undefined1 uStack_1ff0;
  undefined1 uStack_1fc0;
  undefined8 uStack_1fb8;
  undefined1 auStack_1fb0 [24];
  undefined1 uStack_1f98;
  undefined1 uStack_1f68;
  undefined8 uStack_1f60;
  undefined1 auStack_1f58 [24];
  undefined1 uStack_1f40;
  undefined1 uStack_1f10;
  undefined8 uStack_1f08;
  undefined1 uStack_1ee8;
  undefined1 uStack_1eb8;
  undefined8 uStack_1eb0;
  undefined1 uStack_1e90;
  undefined1 uStack_1e60;
  undefined8 uStack_1e58;
  undefined1 uStack_1e38;
  undefined1 uStack_1e08;
  undefined8 uStack_1e00;
  undefined1 uStack_1de0;
  undefined1 uStack_1db0;
  undefined8 uStack_1da8;
  undefined1 uStack_1d88;
  undefined1 uStack_1d58;
  undefined8 uStack_1d50;
  undefined1 uStack_1d30;
  undefined1 uStack_1d00;
  undefined8 uStack_1cf8;
  undefined1 uStack_1cd8;
  undefined1 uStack_1ca8;
  undefined8 uStack_1ca0;
  undefined1 uStack_1c80;
  undefined1 uStack_1c50;
  undefined8 uStack_1c48;
  undefined1 uStack_1c28;
  undefined1 uStack_1bf8;
  undefined8 uStack_1bf0;
  undefined1 uStack_1bd0;
  undefined1 uStack_1ba0;
  undefined8 uStack_1b98;
  undefined1 uStack_1b78;
  undefined1 uStack_1b48;
  undefined8 uStack_1b40;
  undefined *puStack_1b20;
  undefined **ppuStack_1b18;
  undefined *puStack_1b10;
  undefined1 uStack_1af0;
  undefined8 uStack_1ae8;
  undefined *puStack_1ac8;
  undefined **ppuStack_1ac0;
  undefined *puStack_1ab8;
  undefined1 uStack_1a98;
  undefined8 uStack_1a90;
  undefined1 uStack_1a70;
  undefined1 uStack_1a40;
  undefined8 uStack_1a38;
  undefined1 uStack_1a18;
  undefined1 uStack_19e8;
  undefined8 uStack_19e0;
  undefined1 uStack_19c0;
  undefined1 uStack_1990;
  undefined8 uStack_1988;
  undefined1 uStack_1968;
  undefined1 uStack_1938;
  undefined8 uStack_1930;
  undefined1 uStack_1910;
  undefined1 uStack_18e0;
  undefined8 uStack_18d8;
  undefined1 uStack_18b8;
  undefined1 uStack_1888;
  undefined8 uStack_1880;
  undefined1 uStack_1860;
  undefined1 uStack_1830;
  undefined8 uStack_1828;
  undefined1 uStack_1808;
  undefined1 uStack_17d8;
  undefined8 uStack_17d0;
  undefined1 uStack_17b0;
  undefined1 uStack_1780;
  undefined8 uStack_1778;
  undefined1 uStack_1758;
  undefined1 uStack_1728;
  undefined8 uStack_1720;
  undefined1 uStack_1700;
  undefined1 uStack_16d0;
  undefined8 uStack_16c8;
  undefined *puStack_16a8;
  undefined **ppuStack_16a0;
  undefined *puStack_1698;
  undefined1 uStack_1678;
  undefined8 uStack_1670;
  undefined1 uStack_1650;
  undefined1 uStack_1620;
  undefined8 uStack_1618;
  undefined1 uStack_15f8;
  undefined1 uStack_15c8;
  undefined8 uStack_15c0;
  undefined1 uStack_15a0;
  undefined1 uStack_1570;
  undefined8 uStack_1568;
  undefined1 auStack_1560 [24];
  undefined1 uStack_1548;
  undefined1 uStack_1518;
  undefined8 uStack_1510;
  undefined1 auStack_1508 [24];
  undefined *puStack_14f0;
  undefined **ppuStack_14e8;
  undefined1 *puStack_14e0;
  undefined1 uStack_14c0;
  undefined8 uStack_14b8;
  undefined1 uStack_1498;
  undefined1 uStack_1468;
  undefined8 uStack_1460;
  undefined1 uStack_1440;
  undefined1 uStack_1410;
  undefined8 uStack_1408;
  undefined1 uStack_13e8;
  undefined1 uStack_13b8;
  undefined8 uStack_13b0;
  undefined1 uStack_1390;
  undefined1 uStack_1360;
  undefined8 uStack_1358;
  undefined1 uStack_1338;
  undefined1 uStack_1308;
  undefined8 uStack_1300;
  undefined1 uStack_12e0;
  undefined1 uStack_12b0;
  undefined8 uStack_12a8;
  undefined1 uStack_1288;
  undefined1 uStack_1258;
  undefined8 uStack_1250;
  undefined1 uStack_1230;
  undefined1 uStack_1200;
  undefined8 uStack_11f8;
  undefined1 uStack_11d8;
  undefined1 uStack_11a8;
  undefined8 uStack_11a0;
  undefined1 uStack_1180;
  undefined1 uStack_1150;
  undefined8 uStack_1148;
  undefined1 uStack_1128;
  undefined1 uStack_10f8;
  undefined8 uStack_10f0;
  undefined1 uStack_10d0;
  undefined1 uStack_10a0;
  undefined8 uStack_1098;
  undefined1 uStack_1078;
  undefined1 uStack_1048;
  undefined8 uStack_1040;
  undefined1 uStack_1020;
  undefined1 uStack_ff0;
  undefined8 uStack_fe8;
  undefined1 uStack_fc8;
  undefined1 uStack_f98;
  undefined8 uStack_f90;
  undefined1 uStack_f70;
  undefined1 uStack_f40;
  undefined8 uStack_f38;
  undefined1 uStack_f18;
  undefined1 uStack_ee8;
  undefined8 uStack_ee0;
  undefined1 uStack_ec0;
  undefined1 uStack_e90;
  undefined8 uStack_e88;
  undefined1 uStack_e68;
  undefined1 uStack_e38;
  undefined8 uStack_e30;
  undefined1 uStack_e10;
  undefined1 uStack_de0;
  undefined8 uStack_dd8;
  undefined1 uStack_db8;
  undefined1 uStack_d88;
  undefined8 uStack_d80;
  undefined1 uStack_d60;
  undefined1 uStack_d30;
  undefined8 uStack_d28;
  undefined1 uStack_d08;
  undefined1 uStack_cd8;
  undefined8 uStack_cd0;
  undefined1 uStack_cb0;
  undefined1 uStack_c80;
  undefined8 uStack_c78;
  undefined1 uStack_c58;
  undefined1 uStack_c28;
  undefined8 uStack_c20;
  undefined1 uStack_c00;
  undefined1 uStack_bd0;
  undefined8 uStack_bc8;
  undefined1 uStack_ba8;
  undefined1 uStack_b78;
  undefined8 uStack_b70;
  undefined1 uStack_b50;
  undefined1 uStack_b20;
  undefined8 uStack_b18;
  undefined *puStack_af8;
  undefined **ppuStack_af0;
  undefined *puStack_ae8;
  undefined1 uStack_ac8;
  undefined8 uStack_ac0;
  undefined1 uStack_aa0;
  undefined1 uStack_a70;
  undefined8 uStack_a68;
  undefined1 uStack_a48;
  undefined1 uStack_a18;
  undefined8 uStack_a10;
  undefined1 uStack_9f0;
  undefined1 uStack_9c0;
  undefined8 uStack_9b8;
  undefined1 uStack_998;
  undefined1 uStack_968;
  undefined8 uStack_960;
  undefined1 uStack_940;
  undefined1 uStack_910;
  undefined8 uStack_908;
  undefined *puStack_8e8;
  undefined **ppuStack_8e0;
  undefined *puStack_8d8;
  undefined1 uStack_8b8;
  undefined8 uStack_8b0;
  undefined1 uStack_890;
  undefined1 uStack_860;
  undefined8 uStack_858;
  undefined1 uStack_838;
  undefined1 uStack_808;
  undefined8 uStack_800;
  undefined1 uStack_7e0;
  undefined1 uStack_7b0;
  undefined8 uStack_7a8;
  undefined1 uStack_788;
  undefined1 uStack_758;
  undefined8 uStack_750;
  undefined1 uStack_730;
  undefined1 uStack_700;
  undefined8 uStack_6f8;
  undefined1 uStack_6d8;
  undefined1 uStack_6a8;
  undefined8 uStack_6a0;
  undefined1 uStack_680;
  undefined1 uStack_650;
  undefined8 uStack_648;
  undefined1 uStack_628;
  undefined1 uStack_5f8;
  undefined8 uStack_5f0;
  undefined1 uStack_5d0;
  undefined1 uStack_5a0;
  undefined8 uStack_598;
  undefined1 uStack_578;
  undefined1 uStack_548;
  undefined8 uStack_540;
  undefined1 uStack_520;
  undefined1 uStack_4f0;
  undefined8 uStack_4e8;
  undefined1 uStack_4c8;
  undefined1 uStack_498;
  undefined8 uStack_490;
  undefined1 uStack_470;
  undefined1 uStack_440;
  undefined8 uStack_438;
  undefined1 uStack_418;
  undefined1 uStack_3e8;
  undefined8 uStack_3e0;
  undefined1 uStack_3c0;
  undefined1 uStack_390;
  undefined8 uStack_388;
  undefined1 uStack_368;
  undefined1 uStack_338;
  undefined8 uStack_330;
  undefined1 uStack_310;
  undefined1 uStack_2e0;
  undefined8 uStack_2d8;
  undefined1 uStack_2b8;
  undefined1 uStack_288;
  undefined8 uStack_280;
  undefined1 uStack_260;
  undefined1 uStack_230;
  undefined8 uStack_228;
  undefined1 uStack_208;
  undefined1 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 uStack_1b0;
  undefined1 uStack_180;
  undefined8 uStack_178;
  undefined1 uStack_158;
  undefined1 uStack_128;
  undefined8 uStack_120;
  undefined1 uStack_100;
  undefined1 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [24];
  undefined1 uStack_a8;
  undefined1 uStack_78;
  long lStack_70;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_2f30 = 0x3b0000003a;
  FUN_10002b838(auStack_2f28,&UNK_10f4bead8);
  uStack_2f10 = 0;
  uStack_2ee0 = 0;
  uStack_2ed8 = 0x3c0000003b;
  FUN_10002b838(auStack_2ed0,&UNK_10f4bf3b1);
  uStack_2eb8 = 0;
  uStack_2e88 = 0;
  uStack_2e80 = 0x3d0000003c;
  FUN_10002b838(auStack_2e78,&UNK_10f4bfeae);
  uStack_2e60 = 0;
  uStack_2e30 = 0;
  uStack_2e28 = 0x3e0000003d;
  FUN_10002b838(auStack_2e20,&UNK_10f4bff04);
  puStack_2e08 = &UNK_10885e630;
  ppuStack_2e00 = &PTR_FUN_110a7c8c8;
  puStack_2df8 = &UNK_10887e2e4;
  uStack_2dd8 = 1;
  uStack_2dd0 = 0x3f0000003e;
  FUN_10002b838(auStack_2dc8,&UNK_10f4bff0d);
  uStack_2db0 = 0;
  uStack_2d80 = 0;
  uStack_2d78 = 0x400000003f;
  FUN_10002b838(auStack_2d70,&UNK_10f4bffba);
  uStack_2d58 = 0;
  uStack_2d28 = 0;
  uStack_2d20 = 0x4100000040;
  FUN_10002b838(auStack_2d18,&UNK_10f4c022e);
  uStack_2d00 = 0;
  uStack_2cd0 = 0;
  uStack_2cc8 = 0x4200000041;
  FUN_10002b838(auStack_2cc0,&UNK_10f4c0296);
  uStack_2ca8 = 0;
  uStack_2c78 = 0;
  uStack_2c70 = 0x4300000042;
  FUN_10002b838(auStack_2c68,&UNK_10f4c031a);
  uStack_2c50 = 0;
  uStack_2c20 = 0;
  uStack_2c18 = 0x4400000043;
  FUN_10002b838(auStack_2c10,&UNK_10f4c0368);
  puVar1 = auStack_2f48;
  FUN_1005537d0();
  puStack_2bf8 = &UNK_10885e63c;
  ppuStack_2bf0 = &PTR_DAT_110a7c8e8;
  func_0x0001005537d8();
  FUN_10054f8dc();
  uStack_2bc8 = 1;
  uStack_2bc0 = 0x4500000044;
  puStack_2be8 = puVar1;
  FUN_10002b838(auStack_2bb8,&UNK_10f4c061b);
  uStack_2ba0 = 0;
  uStack_2b70 = 0;
  uStack_2b68 = 0x4600000045;
  FUN_10002b838(auStack_2b60,&UNK_10f4c0657);
  uStack_2b48 = 0;
  uStack_2b18 = 0;
  uStack_2b10 = 0x4700000046;
  FUN_10002b838(auStack_2b08,&UNK_10f4c06ee);
  puStack_2af0 = &UNK_10885e630;
  ppuStack_2ae8 = &PTR_FUN_110a7c8c8;
  puStack_2ae0 = &UNK_108880070;
  uStack_2ac0 = 1;
  uStack_2ab8 = 0x4800000047;
  FUN_10002b838(auStack_2ab0,&UNK_10f4c074b);
  uStack_2a98 = 0;
  uStack_2a68 = 0;
  uStack_2a60 = 0x4900000048;
  FUN_10002b838(auStack_2a58,&UNK_10f4c078e);
  puStack_2a40 = &UNK_10885e630;
  ppuStack_2a38 = &PTR_FUN_110a7c8c8;
  puStack_2a30 = &UNK_1088807f4;
  uStack_2a10 = 1;
  uStack_2a08 = 0x4a00000049;
  FUN_10002b838(auStack_2a00,&UNK_10f4c07c0);
  puStack_29e8 = &UNK_10885e630;
  ppuStack_29e0 = &PTR_FUN_110a7c8c8;
  puStack_29d8 = &UNK_108880888;
  uStack_29b8 = 1;
  uStack_29b0 = 0x4b0000004a;
  FUN_10002b838(auStack_29a8,&UNK_10f4c0855);
  uStack_2990 = 0;
  uStack_2960 = 0;
  uStack_2958 = 0x4c0000004b;
  FUN_10002b838(auStack_2950,&UNK_10f4c08b6);
  uStack_2938 = 0;
  uStack_2908 = 0;
  uStack_2900 = 0x4d0000004c;
  func_0x0001005537e0();
  FUN_10002b838(auStack_28f8);
  uStack_28e0 = 0;
  uStack_28b0 = 0;
  uStack_28a8 = 0x4e0000004d;
  FUN_10002b838(auStack_28a0,&UNK_10f4c0915);
  uStack_2888 = 0;
  uStack_2858 = 0;
  uStack_2850 = 0x4f0000004e;
  FUN_10002b838(auStack_2848,&UNK_10f4c0975);
  uStack_2830 = 0;
  uStack_2800 = 0;
  uStack_27f8 = 0x500000004f;
  FUN_10002b838(auStack_27f0,&UNK_10f4c09d6);
  uStack_27d8 = 0;
  uStack_27a8 = 0;
  uStack_27a0 = 0x5100000050;
  FUN_10002b838(auStack_2798,&UNK_10f4c0ca7);
  uStack_2780 = 0;
  uStack_2750 = 0;
  uStack_2748 = 0x5200000051;
  FUN_10002b838(auStack_2740,&UNK_10f4c0f1a);
  uStack_2728 = 0;
  uStack_26f8 = 0;
  uStack_26f0 = 0x5300000052;
  FUN_10002b838(auStack_26e8,&UNK_10f4c0fbe);
  uStack_26d0 = 0;
  uStack_26a0 = 0;
  uStack_2698 = 0x5400000053;
  FUN_10002b838(auStack_2690,&UNK_10f4c101d);
  uStack_2678 = 0;
  uStack_2648 = 0;
  uStack_2640 = 0x5500000054;
  FUN_10002b838(auStack_2638,&UNK_10f4c178c);
  uStack_2620 = 0;
  uStack_25f0 = 0;
  uStack_25e8 = 0x5600000055;
  FUN_10002b838(auStack_25e0,&UNK_10f4c17e4);
  uStack_25c8 = 0;
  uStack_2598 = 0;
  uStack_2590 = 0x5700000056;
  FUN_10002b838(auStack_2588,&UNK_10f4c186f);
  uStack_2570 = 0;
  uStack_2540 = 0;
  uStack_2538 = 0x5800000057;
  FUN_10002b838(auStack_2530,&UNK_10f4c1b0f);
  uStack_2518 = 0;
  uStack_24e8 = 0;
  uStack_24e0 = 0x5900000058;
  FUN_10002b838(auStack_24d8,&UNK_10f4c1dc7);
  uStack_24c0 = 0;
  uStack_2490 = 0;
  uStack_2488 = 0x5a00000059;
  FUN_10002b838(auStack_2480,&UNK_10f4c2063);
  uStack_2468 = 0;
  uStack_2438 = 0;
  uStack_2430 = 0x5b0000005a;
  FUN_10002b838(auStack_2428,&UNK_10f4bff04);
  puVar1 = auStack_2f60;
  FUN_1005537d0();
  puStack_2410 = &UNK_10885e648;
  ppuStack_2408 = &PTR_DAT_110a7c908;
  func_0x0001005537d8();
  FUN_10054f8dc();
  uStack_23e0 = 1;
  uStack_23d8 = 0x5c0000005b;
  puStack_2400 = puVar1;
  FUN_10002b838(auStack_23d0,&UNK_10f4c22a9);
  uStack_23b8 = 0;
  uStack_2388 = 0;
  uStack_2380 = 0x5d0000005c;
  FUN_10002b838(auStack_2378,&UNK_10f4c2307);
  uStack_2360 = 0;
  uStack_2330 = 0;
  uStack_2328 = 0x5e0000005d;
  FUN_10002b838(auStack_2320,&UNK_10f4c2364);
  uStack_2308 = 0;
  uStack_22d8 = 0;
  uStack_22d0 = 0x5f0000005e;
  FUN_10002b838(auStack_22c8,&UNK_10f4c23be);
  uStack_22b0 = 0;
  uStack_2280 = 0;
  uStack_2278 = 0x600000005f;
  FUN_10002b838(auStack_2270,&UNK_10f4c2460);
  uStack_2258 = 0;
  uStack_2228 = 0;
  uStack_2220 = 0x6100000060;
  FUN_10002b838(auStack_2218,&UNK_10f4c24b6);
  uStack_2200 = 0;
  uStack_21d0 = 0;
  uStack_21c8 = 0x6200000061;
  FUN_10002b838(auStack_21c0,&UNK_10f4c2574);
  uStack_21a8 = 0;
  uStack_2178 = 0;
  uStack_2170 = 0x6300000062;
  FUN_10002b838(auStack_2168,&UNK_10f4c25d1);
  uStack_2150 = 0;
  uStack_2120 = 0;
  uStack_2118 = 0x6400000063;
  FUN_10002b838(auStack_2110,&UNK_10f4c2625);
  uStack_20f8 = 0;
  uStack_20c8 = 0;
  uStack_20c0 = 0x6500000064;
  func_0x0001005537e0();
  FUN_10002b838(auStack_20b8);
  puStack_20a0 = &UNK_10885e630;
  ppuStack_2098 = &PTR_FUN_110a7c8c8;
  puStack_2090 = &UNK_10887d1ac;
  uStack_2070 = 1;
  uStack_2068 = 0x6600000065;
  FUN_10002b838(auStack_2060,&UNK_10f4c267c);
  uStack_2048 = 0;
  uStack_2018 = 0;
  uStack_2010 = 0x6700000066;
  FUN_10002b838(auStack_2008,&UNK_10f4c2784);
  uStack_1ff0 = 0;
  uStack_1fc0 = 0;
  uStack_1fb8 = 0x6800000067;
  FUN_10002b838(auStack_1fb0,&UNK_10f4c27cc);
  uStack_1f98 = 0;
  uStack_1f68 = 0;
  uStack_1f60 = 0x6900000068;
  FUN_10002b838(auStack_1f58,&UNK_10f4c2920);
  uStack_1f40 = 0;
  uStack_1f10 = 0;
  func_0x0001005537ec(0x1028);
  uStack_1f08 = 0x6a00000069;
  func_0x0001005537f8(0x1030);
  uStack_1ee8 = 0;
  uStack_1eb8 = 0;
  uStack_1eb0 = 0x6b0000006a;
  func_0x0001005537f8(0x1088);
  uStack_1e90 = 0;
  uStack_1e60 = 0;
  func_0x0001005537ec(0x10d8);
  uStack_1e58 = 0x6c0000006b;
  func_0x0001005537f8(0x10e0);
  uStack_1e38 = 0;
  uStack_1e08 = 0;
  uStack_1e00 = 0x6d0000006c;
  func_0x0001005537f8(0x1138);
  uStack_1de0 = 0;
  uStack_1db0 = 0;
  func_0x0001005537ec(0x1188);
  uStack_1da8 = 0x6e0000006d;
  func_0x0001005537f8(0x1190);
  uStack_1d88 = 0;
  uStack_1d58 = 0;
  uStack_1d50 = 0x6f0000006e;
  func_0x0001005537f8(0x11e8);
  uStack_1d30 = 0;
  uStack_1d00 = 0;
  func_0x0001005537ec(0x1238);
  uStack_1cf8 = 0x700000006f;
  func_0x0001005537f8(0x1240);
  uStack_1cd8 = 0;
  uStack_1ca8 = 0;
  uStack_1ca0 = 0x7100000070;
  func_0x0001005537f8(0x1298);
  uStack_1c80 = 0;
  uStack_1c50 = 0;
  func_0x0001005537ec(0x12e8);
  uStack_1c48 = 0x7200000071;
  func_0x0001005537f8(0x12f0);
  uStack_1c28 = 0;
  uStack_1bf8 = 0;
  uStack_1bf0 = 0x7300000072;
  func_0x0001005537f8(0x1348);
  uStack_1bd0 = 0;
  uStack_1ba0 = 0;
  func_0x0001005537ec(0x1398);
  uStack_1b98 = 0x7400000073;
  func_0x0001005537f8(0x13a0);
  uStack_1b78 = 0;
  uStack_1b48 = 0;
  uStack_1b40 = 0x7500000074;
  func_0x0001005537f8(0x13f8);
  puStack_1b20 = &UNK_10885e630;
  ppuStack_1b18 = &PTR_FUN_110a7c8c8;
  puStack_1b10 = &UNK_10887d37c;
  uStack_1af0 = 1;
  func_0x000100553a5c(0x1448);
  uStack_1ae8 = 0x7600000075;
  func_0x000100553a68(0x1450);
  puStack_1ac8 = &UNK_10885e630;
  ppuStack_1ac0 = &PTR_FUN_110a7c8c8;
  puStack_1ab8 = &UNK_10885dc40;
  uStack_1a98 = 1;
  uStack_1a90 = 0x7700000076;
  func_0x000100553a68(0x14a8);
  uStack_1a70 = 0;
  uStack_1a40 = 0;
  func_0x000100553a5c(0x14f8);
  uStack_1a38 = 0x7800000077;
  func_0x000100553a68(0x1500);
  uStack_1a18 = 0;
  uStack_19e8 = 0;
  uStack_19e0 = 0x7900000078;
  func_0x000100553a68(0x1558);
  uStack_19c0 = 0;
  uStack_1990 = 0;
  func_0x000100553a5c(0x15a8);
  uStack_1988 = 0x7a00000079;
  func_0x000100553a68(0x15b0);
  uStack_1968 = 0;
  uStack_1938 = 0;
  uStack_1930 = 0x7b0000007a;
  func_0x000100553a68(0x1608);
  uStack_1910 = 0;
  uStack_18e0 = 0;
  func_0x000100553a5c(0x1658);
  uStack_18d8 = 0x7c0000007b;
  func_0x000100553a68(0x1660);
  uStack_18b8 = 0;
  uStack_1888 = 0;
  uStack_1880 = 0x7d0000007c;
  func_0x000100553a68(0x16b8);
  uStack_1860 = 0;
  uStack_1830 = 0;
  func_0x000100553a5c(0x1708);
  uStack_1828 = 0x7e0000007d;
  func_0x000100553a68(0x1710);
  uStack_1808 = 0;
  uStack_17d8 = 0;
  uStack_17d0 = 0x7f0000007e;
  func_0x000100553a68(0x1768);
  uStack_17b0 = 0;
  uStack_1780 = 0;
  func_0x000100553a5c(0x17b8);
  uStack_1778 = 0x800000007f;
  func_0x000100553a68(0x17c0);
  uStack_1758 = 0;
  uStack_1728 = 0;
  uStack_1720 = 0x8100000080;
  func_0x000100553a68(0x1818);
  uStack_1700 = 0;
  uStack_16d0 = 0;
  func_0x000100553a5c(0x1868);
  uStack_16c8 = 0x8200000081;
  func_0x0001005537e0(0x1870);
  func_0x000100553a68();
  puStack_16a8 = &UNK_10885e630;
  ppuStack_16a0 = &PTR_FUN_110a7c8c8;
  puStack_1698 = &UNK_10885dc40;
  uStack_1678 = 1;
  uStack_1670 = 0x8300000082;
  func_0x000100553a68(0x18c8);
  uStack_1650 = 0;
  uStack_1620 = 0;
  func_0x0001005537ec(0x1918);
  uStack_1618 = 0x8400000083;
  func_0x0001005537f8(0x1920);
  uStack_15f8 = 0;
  uStack_15c8 = 0;
  uStack_15c0 = 0x8500000084;
  func_0x0001005537f8(0x1978);
  uStack_15a0 = 0;
  uStack_1570 = 0;
  uStack_1568 = 0x8600000085;
  FUN_10002b838(auStack_1560,&UNK_10f4c3c38);
  uStack_1548 = 0;
  uStack_1518 = 0;
  uStack_1510 = 0x8700000086;
  FUN_10002b838(auStack_1508,&UNK_10f4c3e39);
  puVar1 = auStack_2f78;
  FUN_1005537d0();
  puStack_14f0 = &UNK_10885e654;
  ppuStack_14e8 = &PTR_FUN_110a7c928;
  func_0x0001005537d8();
  FUN_10054f8dc();
  uStack_14c0 = 1;
  puStack_14e0 = puVar1;
  func_0x0001005537ec(0x1a78);
  uStack_14b8 = 0x8800000087;
  func_0x0001005537f8(0x1a80);
  uStack_1498 = 0;
  uStack_1468 = 0;
  uStack_1460 = 0x8900000088;
  func_0x0001005537f8(0x1ad8);
  uStack_1440 = 0;
  uStack_1410 = 0;
  func_0x0001005537ec(0x1b28);
  uStack_1408 = 0x8a00000089;
  func_0x0001005537f8(0x1b30);
  uStack_13e8 = 0;
  uStack_13b8 = 0;
  uStack_13b0 = 0x8b0000008a;
  func_0x0001005537f8(0x1b88);
  uStack_1390 = 0;
  uStack_1360 = 0;
  func_0x0001005537ec(0x1bd8);
  uStack_1358 = 0x8c0000008b;
  func_0x0001005537f8(0x1be0);
  uStack_1338 = 0;
  uStack_1308 = 0;
  uStack_1300 = 0x8d0000008c;
  func_0x0001005537e0(0x1c38);
  func_0x0001005537f8();
  uStack_12e0 = 0;
  uStack_12b0 = 0;
  func_0x0001005537ec(0x1c88);
  uStack_12a8 = 0x8e0000008d;
  func_0x0001005537f8(0x1c90);
  uStack_1288 = 0;
  uStack_1258 = 0;
  uStack_1250 = 0x8f0000008e;
  func_0x0001005537f8(0x1ce8);
  uStack_1230 = 0;
  uStack_1200 = 0;
  func_0x0001005537ec(0x1d38);
  uStack_11f8 = 0x900000008f;
  func_0x0001005537f8(0x1d40);
  uStack_11d8 = 0;
  uStack_11a8 = 0;
  uStack_11a0 = 0x9100000090;
  func_0x0001005537f8(0x1d98);
  uStack_1180 = 0;
  uStack_1150 = 0;
  func_0x0001005537ec(0x1de8);
  uStack_1148 = 0x9200000091;
  func_0x0001005537f8(0x1df0);
  uStack_1128 = 0;
  uStack_10f8 = 0;
  uStack_10f0 = 0x9300000092;
  func_0x0001005537f8(0x1e48);
  uStack_10d0 = 0;
  uStack_10a0 = 0;
  func_0x0001005537ec(0x1e98);
  uStack_1098 = 0x9400000093;
  func_0x0001005537f8(0x1ea0);
  uStack_1078 = 0;
  uStack_1048 = 0;
  uStack_1040 = 0x9500000094;
  func_0x0001005537f8(0x1ef8);
  uStack_1020 = 0;
  uStack_ff0 = 0;
  func_0x0001005537ec(0x1f48);
  uStack_fe8 = 0x9600000095;
  func_0x0001005537f8(0x1f50);
  uStack_fc8 = 0;
  uStack_f98 = 0;
  uStack_f90 = 0x9700000096;
  func_0x0001005537f8(0x1fa8);
  uStack_f70 = 0;
  uStack_f40 = 0;
  func_0x0001005537ec(0x1ff8);
  uStack_f38 = 0x9800000097;
  FUN_10002b838(&UNK_10885fc40,&UNK_10f4c4d36);
  uStack_f18 = 0;
  uStack_ee8 = 0;
  uStack_ee0 = 0x9900000098;
  func_0x0001005537f8(0x2058);
  uStack_ec0 = 0;
  uStack_e90 = 0;
  func_0x0001005537ec(0x20a8);
  uStack_e88 = 0x9a00000099;
  func_0x0001005537f8(0x20b0);
  uStack_e68 = 0;
  uStack_e38 = 0;
  uStack_e30 = 0x9b0000009a;
  func_0x0001005537f8(0x2108);
  uStack_e10 = 0;
  uStack_de0 = 0;
  func_0x0001005537ec(0x2158);
  uStack_dd8 = 0x9c0000009b;
  func_0x0001005537f8(0x2160);
  uStack_db8 = 0;
  uStack_d88 = 0;
  uStack_d80 = 0x9d0000009c;
  func_0x0001005537f8(0x21b8);
  uStack_d60 = 0;
  uStack_d30 = 0;
  func_0x0001005537ec(0x2208);
  uStack_d28 = 0x9e0000009d;
  func_0x0001005537f8(0x2210);
  uStack_d08 = 0;
  uStack_cd8 = 0;
  uStack_cd0 = 0x9f0000009e;
  func_0x0001005537f8(0x2268);
  uStack_cb0 = 0;
  uStack_c80 = 0;
  func_0x0001005537ec(0x22b8);
  uStack_c78 = 0xa00000009f;
  func_0x0001005537f8(0x22c0);
  uStack_c58 = 0;
  uStack_c28 = 0;
  uStack_c20 = 0xa1000000a0;
  func_0x0001005537f8(0x2318);
  uStack_c00 = 0;
  uStack_bd0 = 0;
  func_0x0001005537ec(0x2368);
  uStack_bc8 = 0xa2000000a1;
  func_0x0001005537f8(0x2370);
  uStack_ba8 = 0;
  uStack_b78 = 0;
  uStack_b70 = 0xa3000000a2;
  func_0x0001005537f8(0x23c8);
  uStack_b50 = 0;
  uStack_b20 = 0;
  func_0x0001005537ec(0x2418);
  uStack_b18 = 0xa4000000a3;
  func_0x0001005537f8(0x2420);
  puStack_af8 = &UNK_10885e630;
  ppuStack_af0 = &PTR_FUN_110a7c8c8;
  puStack_ae8 = &UNK_10885cf08;
  uStack_ac8 = 1;
  uStack_ac0 = 0xa5000000a4;
  func_0x0001005537f8(0x2478);
  uStack_aa0 = 0;
  uStack_a70 = 0;
  func_0x0001005537ec(0x24c8);
  uStack_a68 = 0xa6000000a5;
  func_0x0001005537f8(0x24d0);
  uStack_a48 = 0;
  uStack_a18 = 0;
  uStack_a10 = 0xa7000000a6;
  func_0x0001005537f8(0x2528);
  uStack_9f0 = 0;
  uStack_9c0 = 0;
  func_0x0001005537ec(0x2578);
  uStack_9b8 = 0xa8000000a7;
  func_0x0001005537f8(0x2580);
  uStack_998 = 0;
  uStack_968 = 0;
  uStack_960 = 0xa9000000a8;
  func_0x0001005537f8(0x25d8);
  uStack_940 = 0;
  uStack_910 = 0;
  func_0x0001005537ec(0x2628);
  uStack_908 = 0xaa000000a9;
  func_0x0001005537f8(0x2630);
  puStack_8e8 = &UNK_10885e630;
  ppuStack_8e0 = &PTR_FUN_110a7c8c8;
  puStack_8d8 = &UNK_10885cfa8;
  uStack_8b8 = 1;
  uStack_8b0 = 0xab000000aa;
  func_0x0001005537f8(0x2688);
  uStack_890 = 0;
  uStack_860 = 0;
  func_0x0001005537ec(0x26d8);
  uStack_858 = 0xac000000ab;
  func_0x0001005537f8(0x26e0);
  uStack_838 = 0;
  uStack_808 = 0;
  uStack_800 = 0xad000000ac;
  func_0x0001005537f8(0x2738);
  uStack_7e0 = 0;
  uStack_7b0 = 0;
  func_0x0001005537ec(0x2788);
  uStack_7a8 = 0xae000000ad;
  func_0x0001005537f8(0x2790);
  uStack_788 = 0;
  uStack_758 = 0;
  uStack_750 = 0xaf000000ae;
  func_0x0001005537f8(0x27e8);
  uStack_730 = 0;
  uStack_700 = 0;
  func_0x0001005537ec(0x2838);
  uStack_6f8 = 0xb0000000af;
  func_0x0001005537f8(0x2840);
  uStack_6d8 = 0;
  uStack_6a8 = 0;
  uStack_6a0 = 0xb1000000b0;
  func_0x0001005537f8(0x2898);
  uStack_680 = 0;
  uStack_650 = 0;
  func_0x0001005537ec(0x28e8);
  uStack_648 = 0xb2000000b1;
  func_0x0001005537f8(0x28f0);
  uStack_628 = 0;
  uStack_5f8 = 0;
  uStack_5f0 = 0xb3000000b2;
  func_0x0001005537f8(0x2948);
  uStack_5d0 = 0;
  uStack_5a0 = 0;
  func_0x0001005537ec(0x2998);
  uStack_598 = 0xb4000000b3;
  func_0x0001005537f8(0x29a0);
  uStack_578 = 0;
  uStack_548 = 0;
  uStack_540 = 0xb5000000b4;
  func_0x0001005537f8(0x29f8);
  uStack_520 = 0;
  uStack_4f0 = 0;
  func_0x0001005537ec(0x2a48);
  uStack_4e8 = 0xb6000000b5;
  func_0x0001005537f8(0x2a50);
  uStack_4c8 = 0;
  uStack_498 = 0;
  uStack_490 = 0xb7000000b6;
  func_0x0001005537f8(0x2aa8);
  uStack_470 = 0;
  uStack_440 = 0;
  func_0x0001005537ec(11000);
  uStack_438 = 0xb8000000b7;
  func_0x0001005537f8(0x2b00);
  uStack_418 = 0;
  uStack_3e8 = 0;
  uStack_3e0 = 0xb9000000b8;
  func_0x0001005537f8(0x2b58);
  uStack_3c0 = 0;
  uStack_390 = 0;
  func_0x0001005537ec(0x2ba8);
  uStack_388 = 0xba000000b9;
  func_0x0001005537f8(0x2bb0);
  uStack_368 = 0;
  uStack_338 = 0;
  uStack_330 = 0xbb000000ba;
  func_0x0001005537f8(0x2c08);
  uStack_310 = 0;
  uStack_2e0 = 0;
  func_0x0001005537ec(0x2c58);
  uStack_2d8 = 0xbc000000bb;
  func_0x0001005537f8(0x2c60);
  uStack_2b8 = 0;
  uStack_288 = 0;
  uStack_280 = 0xbd000000bc;
  func_0x0001005537f8(0x2cb8);
  uStack_260 = 0;
  uStack_230 = 0;
  func_0x0001005537ec(0x2d08);
  uStack_228 = 0xbe000000bd;
  func_0x0001005537f8(0x2d10);
  uStack_208 = 0;
  uStack_1d8 = 0;
  uStack_1d0 = 0xbf000000be;
  func_0x0001005537f8(0x2d68);
  uStack_1b0 = 0;
  uStack_180 = 0;
  func_0x0001005537ec(0x2db8);
  uStack_178 = 0xc0000000bf;
  func_0x0001005537f8(0x2dc0);
  uStack_158 = 0;
  uStack_128 = 0;
  uStack_120 = 0xc1000000c0;
  func_0x0001005537f8(0x2e18);
  uStack_100 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0xc2000000c1;
  FUN_10002b838(auStack_c0,&UNK_10f4c974a);
  uStack_a8 = 0;
  uStack_78 = 0;
  FUN_100100fec(auStack_2f78);
  FUN_100100fec(auStack_2f60);
  FUN_100100fec(auStack_2f48);
  FUN_10054ae4c(extraout_x8,param_2,param_3,&uStack_2f30,0x88);
  puVar2 = &uStack_c8;
  lVar4 = -0x2ec0;
  do {
    lVar3 = lVar4;
    func_0x00010054b180(puVar2);
    puVar2 = puVar2 + -0xb;
    lVar4 = lVar3 + 0x58;
  } while (lVar4 != 0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  func_0x000107c60e78();
  lVar3 = lVar3 + 0x2ec0;
  lVar4 = -0x2ec0;
  do {
    func_0x00010054b180(lVar3);
    lVar3 = lVar3 + -0x58;
    lVar4 = lVar4 + 0x58;
  } while (lVar4 != 0);
  func_0x000107c60bd8(puVar2);
  return;
}



/* Entry: 1005527cc; end: 1005527ff;  */

void FUN_1005527cc(void)

{
  return;
}



/* Entry: 100552800; end: 10055286b;  */

undefined8 * FUN_100552800(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong extraout_x8;
  
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = &PTR_DAT_110d12eb0;
  if (param_1 != param_2) {
    uVar1 = param_2[1];
    if ((uVar1 & 1) != 0) {
      func_0x000107c33ba0();
      uVar1 = extraout_x8;
    }
    if (uVar1 == 0) {
      FUN_10055286c(param_1);
    }
    else {
      func_0x000107c30664(param_1);
    }
  }
  return param_1;
}



/* Entry: 10055286c; end: 100552893;  */

undefined1  [16] FUN_10055286c(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  uVar5 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar5;
  puVar3 = (undefined1 *)(param_2 + 0x10);
  puVar4 = puVar3;
  for (puVar2 = (undefined1 *)(param_1 + 0x10); puVar2 != (undefined1 *)(param_1 + 0x14);
      puVar2 = puVar2 + 1) {
    uVar1 = *puVar2;
    *puVar2 = *puVar4;
    *puVar4 = uVar1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  auVar6._8_8_ = puVar3;
  auVar6._0_8_ = (undefined1 *)(param_1 + 0x14);
  return auVar6;
}



/* Entry: 100552894; end: 1005528bf;  */

long FUN_100552894(long param_1)

{
  FUN_1001a3db4(param_1 + 8);
  return param_1;
}



/* Entry: 1005528c0; end: 1005528df;  */

void FUN_1005528c0(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_100552894();
  }
  return;
}



/* Entry: 1005528e0; end: 1005528f7;  */

void FUN_1005528e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00001240);
  return;
}


