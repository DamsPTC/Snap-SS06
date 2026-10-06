/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a43c664; end: 10a43c6cb;  */

void FUN_10a43c664(undefined8 param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  
  while( true ) {
    if (param_2 == (long *)0x0) {
      return;
    }
    if (3 < (ulong)*(byte *)(param_2 + 0xc)) break;
    lVar2 = *param_2;
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_2 + 0xc)])(param_2 + 4);
    FUN_10a004978(param_2 + 2);
    __ZdlPv(param_2);
    param_2 = (long *)lVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a43c6cc);
  (*pcVar1)();
}



/* Entry: 10a43c6cc; end: 10a43c7a3;  */

long * FUN_10a43c6cc(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = *param_2;
    uVar4 = ((ulong)(uint)((int)uVar3 << 3) + 8 ^ uVar3 >> 0x20) * -0x622015f714c7d297;
    uVar4 = (uVar3 >> 0x20 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
    uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    uVar5 = uVar2 - 1;
    if ((uVar2 & uVar5) == 0) {
      uVar6 = uVar4 & uVar5;
    }
    else {
      uVar6 = uVar4;
      if (uVar2 <= uVar4) {
        uVar6 = 0;
        if (uVar2 != 0) {
          uVar6 = uVar4 / uVar2;
        }
        uVar6 = uVar4 - uVar6 * uVar2;
      }
    }
    plVar7 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)*plVar7;
      do {
        if (plVar7 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar8 = plVar7[1];
        if (uVar8 == uVar4) {
          if (plVar7[2] == uVar3) {
            return plVar7;
          }
        }
        else {
          if ((uVar2 & uVar5) == 0) {
            uVar8 = uVar8 & uVar5;
          }
          else if (uVar2 <= uVar8) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar8 / uVar2;
            }
            uVar8 = uVar8 - uVar1 * uVar2;
          }
          if (uVar8 != uVar6) {
            return (long *)0x0;
          }
        }
        plVar7 = (long *)*plVar7;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10a43c7a4; end: 10a43c9a7;  */

void FUN_10a43c7a4(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_90);
  plVar6 = (long *)*param_1;
  plStack_58 = (long *)param_2[1];
  ppuStack_60 = (undefined8 **)*param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_40 = &PTR_DAT_110c41ae8;
  func_0x000109899de4(&puStack_70,plVar6,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_38 = 1;
  ppuStack_40 = &puStack_70;
  (**(code **)(*plVar6 + 0x58))(plVar6);
  ppuStack_60 = &puStack_88;
  plStack_58 = plVar6;
  puStack_50 = (undefined1 *)&puStack_90;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < (int)puStack_70) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a43c9a8; end: 10a43c9b7;  */

void FUN_10a43c9a8(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&ppuStack_60,puVar5 + 1,*puVar5);
  func_0x000109884820(&puStack_88,&ppuStack_60,*puVar5);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar5 + 0x30))(&puStack_90);
  plVar7 = (long *)*puVar5;
  plStack_58 = *(long **)(param_1 + 0x28);
  ppuStack_60 = *(undefined8 ***)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x28) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_40 = &PTR_DAT_110c41ae8;
  func_0x000109899de4(&puStack_70,plVar7,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_38 = 1;
  ppuStack_40 = &puStack_70;
  (**(code **)(*plVar7 + 0x58))(plVar7);
  ppuStack_60 = &puStack_88;
  plStack_58 = plVar7;
  puStack_50 = (undefined1 *)&puStack_90;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < (int)puStack_70) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a43c9b8; end: 10a43c9df;  */

long FUN_10a43c9b8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a43c35c(param_1 + 0x18);
  plVar5 = *(long **)(param_1 + 0x10);
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1 + 8;
}



/* Entry: 10a43c9e0; end: 10a43ca1f;  */

void FUN_10a43c9e0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110bd95b0;
  uVar5 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar5;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar4 = *(long *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = uVar5;
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
  return;
}



/* Entry: 10a43ca20; end: 10a43cad7;  */

void FUN_10a43ca20(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plStack_58;
  long *plStack_50;
  
  lVar3 = *(long *)(param_2 + 0x10);
  FUN_10a4108f0(&plStack_58,param_1);
  for (plVar1 = plStack_58; plVar1 != plStack_50; plVar1 = plVar1 + 1) {
    if (*plVar1 != 0) {
      lVar2 = *(long *)(param_1 + 0x140);
      func_0x00010a3e90b8(lVar2);
      func_0x00010a32a860(lVar3 + 0x2b0,lVar2 + 100);
    }
  }
  if (plStack_58 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plStack_58);
    return;
  }
  return;
}



/* Entry: 10a43cad8; end: 10a43cb5f;  */

void FUN_10a43cad8(void)

{
  return;
}



/* Entry: 10a43cb60; end: 10a43cc5b;  */

undefined1  [16] FUN_10a43cb60(ulong param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bd7510;
  puVar1 = &UNK_10f656650;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,puVar1);
  ppuStack_a8 = (undefined **)*param_2;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = (undefined4)param_3;
  uStack_8c = param_2[1];
  uStack_84 = *(undefined4 *)(param_2 + 2);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_2[7];
  uStack_58 = *(undefined4 *)(param_2 + 8);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
  if ((uVar2 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110bd7510;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110b178e0;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a43cc5c; end: 10a43ccaf;  */

ulong FUN_10a43cc5c(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a0605c4(param_1,*param_2,FUN_10a43ccb0,0);
  }
  return param_1;
}



/* Entry: 10a43ccb0; end: 10a43ce3b;  */

void FUN_10a43ccb0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined1 *in_stack_ffffffffffffffa0;
  ulong in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  undefined8 in_stack_ffffffffffffffb8;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = param_2;
  func_0x000109898688(param_2,param_3);
  if (plVar5 == (long *)0x0) {
    puVar7 = &UNK_10f68f52e;
  }
  else {
    plVar6 = param_2;
    FUN_10a052c2c(param_2,plVar5);
    if ((plVar6 != (long *)0x0) && (___dynamic_cast(), plVar6 != (long *)0x0)) {
      FUN_10a052e3c(param_5);
      if (*(char *)((long)plVar6 + 0x2f) < '\0') {
        func_0x000107c3192c(&stack0xffffffffffffffa0,plVar6[3],plVar6[4]);
      }
      else {
        in_stack_ffffffffffffffa8 = plVar6[4];
        in_stack_ffffffffffffffa0 = (undefined1 *)plVar6[3];
        in_stack_ffffffffffffffb0 = plVar6[5];
      }
      puVar1 = in_stack_ffffffffffffffa0;
      if (-1 < (long)in_stack_ffffffffffffffb0) {
        in_stack_ffffffffffffffa8 = in_stack_ffffffffffffffb0 >> 0x38;
        puVar1 = &stack0xffffffffffffffa0;
      }
      (**(code **)(*param_2 + 0x128))
                (&stack0xffffffffffffffb8,param_2,puVar1,in_stack_ffffffffffffffa8);
      *param_1 = 6;
      *(undefined8 *)(param_1 + 2) = in_stack_ffffffffffffffb8;
      if ((long)in_stack_ffffffffffffffb0 < 0) {
        __ZdlPv(in_stack_ffffffffffffffa0);
      }
      plVar5 = plVar4 + 0x4b;
      lVar8 = plVar4[0x59];
      uVar9 = lVar8 - 1;
      plVar4[0x59] = uVar9;
      if (uVar9 < 8) {
        uVar9 = plVar5[lVar8 + 2];
        if (plVar4[0x5a] == uVar9) {
          return;
        }
      }
      else {
        uVar9 = *(ulong *)(plVar4[0x57] + -8);
        plVar4[0x57] = plVar4[0x57] + -8;
        if (plVar4[0x5a] == uVar9) {
          return;
        }
      }
      lVar8 = *plVar5;
      lVar13 = plVar4[0x4c];
      lVar11 = lVar13 - lVar8;
      uVar15 = lVar11 >> 4;
      if (uVar15 < uVar9) {
        uVar16 = uVar9 - uVar15;
        lVar14 = plVar4[0x4d];
        if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
          if (uVar9 >> 0x3c == 0) {
            uVar10 = lVar14 - lVar8 >> 3;
            if (uVar10 <= uVar9) {
              uVar10 = uVar9;
            }
            if (0x7fffffffffffffef < (ulong)(lVar14 - lVar8)) {
              uVar10 = 0xfffffffffffffff;
            }
            plStack_68 = plVar5;
            if (uVar10 >> 0x3c == 0) {
              lVar3 = uVar10 << 4;
              __Znwm();
              lVar13 = lVar3 + lVar11;
              _bzero(lVar13,uVar16 * 0x10);
              lVar12 = lVar13 + uVar15 * -0x10;
              _memcpy(lVar12,lVar8,lVar11);
              *plVar5 = lVar12;
              plVar4[0x4c] = lVar13 + uVar16 * 0x10;
              plVar4[0x4d] = lVar3 + uVar10 * 0x10;
              lStack_88 = lVar8;
              lStack_80 = lVar8;
              lStack_78 = lVar8;
              lStack_70 = lVar14;
              func_0x00010988c1b8(&lStack_88);
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar2)();
        }
        _bzero(lVar13,uVar16 * 0x10);
        plVar4[0x4c] = lVar13 + uVar16 * 0x10;
      }
      else if (uVar9 < uVar15) {
        lVar8 = lVar8 + uVar9 * 0x10;
        while (lVar13 != lVar8) {
          lVar13 = lVar13 + -0x10;
          func_0x00010988c204(lVar13);
        }
        plVar4[0x4c] = lVar8;
      }
code_r0x00010988c138:
      plVar4[0x5a] = uVar9;
      return;
    }
    puVar7 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar7);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a43ce10);
  (*pcVar2)();
}



/* Entry: 10a43ce3c; end: 10a43cef7;  */

void FUN_10a43ce3c(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
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
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_88 = *(undefined8 *)(lVar1 + -0x60);
    uStack_90 = *(undefined8 *)(lVar1 + -0x68);
    uStack_68 = *(undefined8 *)(lVar1 + -0x40);
    uVar6 = *(ulong *)(lVar1 + -0x48);
    uVar7 = *(ulong *)(lVar1 + -0x50);
    uStack_80 = *(undefined8 *)(lVar1 + -0x58);
    uStack_58 = *(undefined8 *)(lVar1 + -0x30);
    uStack_60 = *(undefined8 *)(lVar1 + -0x38);
    uStack_48 = *(undefined8 *)(lVar1 + -0x20);
    uStack_50 = *(undefined8 *)(lVar1 + -0x28);
    uStack_30 = *(undefined8 *)(lVar1 + -8);
    uStack_38 = *(undefined8 *)(lVar1 + -0x10);
    uStack_40 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_78._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar2 = uStack_78._4_4_;
    uStack_70._4_4_ = (undefined4)(uVar6 >> 0x20);
    uVar3 = uStack_70._4_4_;
    uVar5 = param_1;
    uStack_78 = uVar7;
    uStack_70 = uVar6;
    FUN_10a0051e8(param_1,uVar7 & 0xffffffff,uVar2,uStack_40 & 0xffffffff,uVar6 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f658458,0x1a);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a43cef8);
  (*pcVar4)();
}



/* Entry: 10a43cef8; end: 10a43cfab;  */

void FUN_10a43cef8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a43cfac(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a416330(param_2);
  *param_1 = 0;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a43cfac; end: 10a43d013;  */

void FUN_10a43cfac(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined4 *extraout_x8;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar3 = param_1;
  func_0x000109898688();
  if (ppuVar3 != (undefined **)0x0) {
    FUN_10a053854(param_1,ppuVar3);
    param_2 = ppuVar3;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0x10;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar4 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a43cfac(plVar4,param_2);
  FUN_10a052e3c(param_4);
  lVar9 = plVar4[0x4d];
  for (lVar7 = plVar4[0x4c]; lVar7 != lVar9; lVar7 = lVar7 + 0x20) {
    if (*(byte *)(lVar7 + 0x18) - 1 < 2) {
      *(undefined1 *)(lVar7 + 0x18) = 3;
    }
  }
  *extraout_x8 = 0;
  plVar4 = plVar5 + 0x4b;
  lVar7 = plVar5[0x59];
  uVar6 = lVar7 - 1;
  plVar5[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar7 + 2];
    if (plVar5[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar6) {
      return;
    }
  }
  lVar7 = *plVar4;
  lVar9 = plVar5[0x4c];
  lVar10 = lVar9 - lVar7;
  uVar13 = lVar10 >> 4;
  if (uVar13 < uVar6) {
    uVar14 = uVar6 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar9 >> 4) < uVar14) {
      if (uVar6 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar7 >> 3;
        if (uVar8 <= uVar6) {
          uVar8 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar7)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_88 = plVar4;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar9 = lVar2 + lVar10;
          _bzero(lVar9,uVar14 * 0x10);
          lVar11 = lVar9 + uVar13 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar4 = lVar11;
          plVar5[0x4c] = lVar9 + uVar14 * 0x10;
          plVar5[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_a8 = lVar7;
          lStack_a0 = lVar7;
          lStack_98 = lVar7;
          lStack_90 = lVar12;
          func_0x00010988c1b8(&lStack_a8);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar9,uVar14 * 0x10);
    plVar5[0x4c] = lVar9 + uVar14 * 0x10;
  }
  else if (uVar6 < uVar13) {
    lVar7 = lVar7 + uVar6 * 0x10;
    while (lVar9 != lVar7) {
      lVar9 = lVar9 + -0x10;
      func_0x00010988c204(lVar9);
    }
    plVar5[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar6;
  return;
}



/* Entry: 10a43d014; end: 10a43d0f3;  */

void FUN_10a43d014(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a43cfac(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar8 = param_2[0x4d];
  for (lVar6 = param_2[0x4c]; lVar6 != lVar8; lVar6 = lVar6 + 0x20) {
    if (*(byte *)(lVar6 + 0x18) - 1 < 2) {
      *(undefined1 *)(lVar6 + 0x18) = 3;
    }
  }
  *param_1 = 0;
  plVar1 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar5 = lVar6 - 1;
  plVar4[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar1[lVar6 + 2];
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar8 = plVar4[0x4c];
  lVar9 = lVar8 - lVar6;
  uVar12 = lVar9 >> 4;
  if (uVar12 < uVar5) {
    uVar13 = uVar5 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar8 >> 4) < uVar13) {
      if (uVar5 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar6 >> 3;
        if (uVar7 <= uVar5) {
          uVar7 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar6)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar8 = lVar3 + lVar9;
          _bzero(lVar8,uVar13 * 0x10);
          lVar10 = lVar8 + uVar12 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar4[0x4c] = lVar8 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar8,uVar13 * 0x10);
    plVar4[0x4c] = lVar8 + uVar13 * 0x10;
  }
  else if (uVar5 < uVar12) {
    lVar6 = lVar6 + uVar5 * 0x10;
    while (lVar8 != lVar6) {
      lVar8 = lVar8 + -0x10;
      func_0x00010988c204(lVar8);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar5;
  return;
}



/* Entry: 10a43d0f4; end: 10a43d1df;  */

void FUN_10a43d0f4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined4 uVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  FUN_10a43cfac(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar8 = (long *)param_2[0x4d];
  for (plVar6 = (long *)param_2[0x4c]; plVar6 != plVar8; plVar6 = plVar6 + 4) {
    *(undefined1 *)(plVar6 + 3) = 0;
    lVar4 = 0x60;
    if (*(char *)(*plVar6 + 0x68) == '\0') {
      lVar4 = 0x5c;
    }
    uVar15 = *(undefined4 *)(*plVar6 + lVar4);
    *(undefined4 *)(plVar6 + 2) = uVar15;
    *(undefined4 *)((long)plVar6 + 0x14) = uVar15;
  }
  *param_1 = 0;
  plVar6 = plVar3 + 0x4b;
  lVar4 = plVar3[0x59];
  uVar5 = lVar4 - 1;
  plVar3[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar6[lVar4 + 2];
    if (plVar3[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar5) {
      return;
    }
  }
  lVar4 = *plVar6;
  lVar11 = plVar3[0x4c];
  lVar9 = lVar11 - lVar4;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar5) {
    uVar14 = uVar5 - uVar13;
    lVar12 = plVar3[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar5 >> 0x3c == 0) {
        uVar7 = lVar12 - lVar4 >> 3;
        if (uVar7 <= uVar5) {
          uVar7 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar4)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar4,lVar9);
          *plVar6 = lVar10;
          plVar3[0x4c] = lVar11 + uVar14 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar4;
          lStack_80 = lVar4;
          lStack_78 = lVar4;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar3[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar5 < uVar13) {
    lVar4 = lVar4 + uVar5 * 0x10;
    while (lVar11 != lVar4) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar3[0x4c] = lVar4;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar5;
  return;
}



/* Entry: 10a43d1e0; end: 10a43d2bb;  */

void FUN_10a43d1e0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a43cfac(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar8 = param_2[0x4d];
  for (lVar6 = param_2[0x4c]; lVar6 != lVar8; lVar6 = lVar6 + 0x20) {
    if (*(char *)(lVar6 + 0x18) != '\x01') {
      *(undefined1 *)(lVar6 + 0x18) = 2;
    }
  }
  *param_1 = 0;
  plVar1 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar5 = lVar6 - 1;
  plVar4[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar1[lVar6 + 2];
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar8 = plVar4[0x4c];
  lVar9 = lVar8 - lVar6;
  uVar12 = lVar9 >> 4;
  if (uVar12 < uVar5) {
    uVar13 = uVar5 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar8 >> 4) < uVar13) {
      if (uVar5 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar6 >> 3;
        if (uVar7 <= uVar5) {
          uVar7 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar6)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar8 = lVar3 + lVar9;
          _bzero(lVar8,uVar13 * 0x10);
          lVar10 = lVar8 + uVar12 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar4[0x4c] = lVar8 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar8,uVar13 * 0x10);
    plVar4[0x4c] = lVar8 + uVar13 * 0x10;
  }
  else if (uVar5 < uVar12) {
    lVar6 = lVar6 + uVar5 * 0x10;
    while (lVar8 != lVar6) {
      lVar8 = lVar8 + -0x10;
      func_0x00010988c204(lVar8);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar5;
  return;
}



/* Entry: 10a43d2bc; end: 10a43d3fb;  */

void FUN_10a43d2bc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  byte in_stack_ffffffffffffffa0;
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar7 = param_2;
  FUN_10a43cfac(param_2,param_3);
  FUN_10a0584c8(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  FUN_10a416100(&lStack_70,plVar7,&stack0xffffffffffffffa8);
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  plVar7 = plStack_68;
  if ((in_stack_ffffffffffffffa0 & 1) == 0) {
    *param_1 = 1;
  }
  else {
    FUN_10a43d3fc(param_1,param_2,lStack_70,plStack_68);
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
      do {
        lVar10 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
  }
  plVar7 = plVar6 + 0x4b;
  lVar10 = plVar6[0x59];
  uVar8 = lVar10 - 1;
  plVar6[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar7[lVar10 + 2];
    if (plVar6[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar8) {
      return;
    }
  }
  lVar10 = *plVar7;
  lVar13 = plVar6[0x4c];
  lVar11 = lVar13 - lVar10;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar8) {
    uVar16 = uVar8 - uVar15;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar14 - lVar10 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar10)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar7;
        if (uVar9 >> 0x3c == 0) {
          lVar5 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar5 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar10,lVar11);
          *plVar7 = lVar12;
          plVar6[0x4c] = lVar13 + uVar16 * 0x10;
          plVar6[0x4d] = lVar5 + uVar9 * 0x10;
          lStack_88 = lVar10;
          lStack_80 = lVar10;
          lStack_78 = lVar10;
          lStack_70 = lVar14;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar4)();
    }
    _bzero(lVar13,uVar16 * 0x10);
    plVar6[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar8 < uVar15) {
    lVar10 = lVar10 + uVar8 * 0x10;
    while (lVar13 != lVar10) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar6[0x4c] = lVar10;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar8;
  return;
}



/* Entry: 10a43d3fc; end: 10a43d49b;  */

void FUN_10a43d3fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  if (param_4 != (long *)0x0) {
    plVar1 = param_4 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_38 = &PTR_DAT_110c6ad10;
  uStack_30 = param_3;
  plStack_28 = param_4;
  func_0x000109899de4(param_1,param_2,&uStack_30,&ppuStack_38,0,0);
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a43d49c; end: 10a43d553;  */

void FUN_10a43d49c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a43d554(param_1,param_2,FUN_10a415a3c,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a43d554; end: 10a43d613;  */

void FUN_10a43d554(undefined4 *param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  long lVar2;
  undefined8 auStack_68 [2];
  char cStack_51;
  
  lVar2 = param_2;
  FUN_10a43cfac(param_2,param_5);
  FUN_10a0584c8(param_7);
  func_0x000109898570(auStack_68,param_2,param_6);
  plVar1 = (long *)(lVar2 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*plVar1 + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(plVar1,auStack_68);
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  *param_1 = 0;
  return;
}



/* Entry: 10a43d614; end: 10a43d6cb;  */

void FUN_10a43d614(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a43d6cc(param_1,param_2,FUN_10a415c0c,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a43d6cc; end: 10a43d7c7;  */

void FUN_10a43d6cc(undefined4 *param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  long param_6,undefined8 param_7)

{
  long *plVar1;
  float fVar2;
  code *pcVar3;
  long lVar4;
  undefined8 auStack_68 [2];
  char cStack_51;
  
  lVar4 = param_2;
  FUN_10a43cfac(param_2,param_5);
  FUN_10a3aaeb0(param_7);
  func_0x000109898570(auStack_68,param_2,param_6);
  if (*(int *)(param_6 + 0x10) == 3) {
    fVar2 = (float)*(double *)(param_6 + 0x18);
    if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_6 + 0x18))) {
      fVar2 = 0.0;
    }
    plVar1 = (long *)(lVar4 + ((long)param_4 >> 1));
    if ((param_4 & 1) != 0) {
      param_3 = *(code **)(*plVar1 + ((ulong)param_3 & 0xffffffff));
    }
    (*param_3)(fVar2,plVar1,auStack_68);
    if (cStack_51 < '\0') {
      __ZdlPv(auStack_68[0]);
    }
    *param_1 = 0;
    return;
  }
  func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a43d7ac);
  (*pcVar3)();
}



/* Entry: 10a43d7c8; end: 10a43d87f;  */

void FUN_10a43d7c8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a43d554(param_1,param_2,FUN_10a415d50,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a43d880; end: 10a43d937;  */

void FUN_10a43d880(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a43d554(param_1,param_2,FUN_10a415e88,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a43d938; end: 10a43d9ef;  */

void FUN_10a43d938(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a43d554(param_1,param_2,FUN_10a415fcc,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a43d9f0; end: 10a43dc17;  */

/* WARNING: Removing unreachable block (ram,0x00010a43db68) */
/* WARNING: Removing unreachable block (ram,0x00010a43db6c) */
/* WARNING: Removing unreachable block (ram,0x00010a43db74) */
/* WARNING: Removing unreachable block (ram,0x00010a43db7c) */
/* WARNING: Removing unreachable block (ram,0x00010a43db80) */

void FUN_10a43d9f0(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long in_stack_ffffffffffffffa0;
  long *in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb0;
  long *in_stack_ffffffffffffffb8;
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar7 = param_2;
  FUN_10a43cfac(param_2,param_3);
  FUN_10a43dc18(param_5);
  if (*param_4 == 1) {
    in_stack_ffffffffffffffa8 = (long *)0x0;
  }
  else {
    func_0x000109898688(param_2,param_4);
    if (param_2 == (long *)0x0) {
      func_0x00010988bd28(&UNK_10f68f52e);
LAB_10a43dbe0:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a43dbe4);
      (*pcVar4)();
    }
    func_0x00010989879c(&stack0xffffffffffffffb0);
    puVar9 = (undefined8 *)&stack0xffffffffffffffa0;
    if ((in_stack_ffffffffffffffb0 != 0) &&
       (___dynamic_cast(in_stack_ffffffffffffffb0,&PTR_DAT_110b178e0,&PTR_DAT_110c6ad10,0),
       puVar9 = (undefined8 *)&stack0xffffffffffffffa0, in_stack_ffffffffffffffb0 != 0)) {
      puVar9 = (undefined8 *)&stack0xffffffffffffffb0;
      in_stack_ffffffffffffffa0 = in_stack_ffffffffffffffb0;
      in_stack_ffffffffffffffa8 = in_stack_ffffffffffffffb8;
    }
    *puVar9 = 0;
    puVar9[1] = 0;
    if (in_stack_ffffffffffffffb8 != (long *)0x0) {
      plVar1 = in_stack_ffffffffffffffb8 + 1;
      do {
        lVar11 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
      }
    }
    if (in_stack_ffffffffffffffa0 == 0) {
      func_0x00010988bd28(&UNK_10f58251f);
      goto LAB_10a43dbe0;
    }
  }
  FUN_10a419588(plVar7,&stack0xffffffffffffffb0);
  if (in_stack_ffffffffffffffa8 != (long *)0x0) {
    plVar7 = in_stack_ffffffffffffffa8 + 1;
    do {
      lVar11 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*in_stack_ffffffffffffffa8 + 0x10))(in_stack_ffffffffffffffa8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa8);
    }
  }
  *param_1 = 0;
  plVar7 = plVar6 + 0x4b;
  lVar11 = plVar6[0x59];
  uVar8 = lVar11 - 1;
  plVar6[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar7[lVar11 + 2];
    if (plVar6[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar8) {
      return;
    }
  }
  lVar11 = *plVar7;
  lVar14 = plVar6[0x4c];
  lVar12 = lVar14 - lVar11;
  uVar16 = lVar12 >> 4;
  if (uVar16 < uVar8) {
    uVar17 = uVar8 - uVar16;
    lVar15 = plVar6[0x4d];
    if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
      if (uVar8 >> 0x3c == 0) {
        uVar10 = lVar15 - lVar11 >> 3;
        if (uVar10 <= uVar8) {
          uVar10 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - lVar11)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_68 = plVar7;
        if (uVar10 >> 0x3c == 0) {
          lVar5 = uVar10 << 4;
          __Znwm();
          lVar14 = lVar5 + lVar12;
          _bzero(lVar14,uVar17 * 0x10);
          lVar13 = lVar14 + uVar16 * -0x10;
          _memcpy(lVar13,lVar11,lVar12);
          *plVar7 = lVar13;
          plVar6[0x4c] = lVar14 + uVar17 * 0x10;
          plVar6[0x4d] = lVar5 + uVar10 * 0x10;
          lStack_88 = lVar11;
          lStack_80 = lVar11;
          lStack_78 = lVar11;
          lStack_70 = lVar15;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar4)();
    }
    _bzero(lVar14,uVar17 * 0x10);
    plVar6[0x4c] = lVar14 + uVar17 * 0x10;
  }
  else if (uVar8 < uVar16) {
    lVar11 = lVar11 + uVar8 * 0x10;
    while (lVar14 != lVar11) {
      lVar14 = lVar14 + -0x10;
      func_0x00010988c204(lVar14);
    }
    plVar6[0x4c] = lVar11;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar8;
  return;
}



/* Entry: 10a43dc18; end: 10a43dc3b;  */

void FUN_10a43dc18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 extraout_x8;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar3 = (long *)0x1;
  uVar5 = 0;
  FUN_10a052ee0(1,0,param_1);
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a43d554(extraout_x8,plVar3,FUN_10a41998c,0,uVar5,param_1,param_4);
  plVar3 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar3[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar3;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar4[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_78 = plVar3;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar3 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_98 = lVar6;
          lStack_90 = lVar6;
          lStack_88 = lVar6;
          lStack_80 = lVar12;
          func_0x00010988c1b8(&lStack_98);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10a43dc3c; end: 10a43dcf3;  */

void FUN_10a43dc3c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a43d554(param_1,param_2,FUN_10a41998c,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a43dcf4; end: 10a43dda3;  */

void FUN_10a43dcf4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a43dda4(param_1,param_2,FUN_10a4163ec,0,param_3,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a43dda4; end: 10a43de5b;  */

void FUN_10a43dda4(undefined8 param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lStack_58;
  long lStack_50;
  
  lVar1 = param_2;
  FUN_10a43cfac(param_2,param_5);
  FUN_10a052e3c(param_6);
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*(long *)(lVar1 + ((long)param_4 >> 1)) + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(&lStack_58);
  FUN_10a43de5c(param_1,param_2,lStack_58,lStack_50 - lStack_58 >> 4);
  if (lStack_58 != 0) {
    lStack_50 = lStack_58;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a43de5c; end: 10a43df8f;  */

void FUN_10a43de5c(undefined4 *param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 *puVar2;
  int iStack_60;
  undefined4 uStack_5c;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  
  (**(code **)(*param_2 + 600))(&iStack_60,param_2,param_4);
  uStack_50 = CONCAT44(uStack_5c,iStack_60);
  if (param_4 != 0) {
    lVar1 = 0;
    puVar2 = (undefined8 *)(param_3 + 8);
    do {
      (**(code **)(*param_2 + 0x128))(&puStack_48,param_2,puVar2[-1],*puVar2);
      iStack_60 = 6;
      puStack_58 = puStack_48;
      (**(code **)(*param_2 + 0x290))(param_2,&uStack_50,lVar1,&iStack_60);
      if ((3 < iStack_60) && (puStack_58 != (undefined8 *)0x0)) {
        (**(code **)*puStack_58)();
      }
      puVar2 = puVar2 + 2;
      lVar1 = lVar1 + 1;
    } while (param_4 != lVar1);
  }
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = uStack_50;
  return;
}



/* Entry: 10a43df90; end: 10a43e03f;  */

void FUN_10a43df90(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a43dda4(param_1,param_2,FUN_10a416594,0,param_3,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a43e040; end: 10a43e187;  */

void FUN_10a43e040(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a43cfac(param_2,param_3);
  FUN_10a1d625c(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  func_0x00010989847c(param_2,param_4 + 0x10);
  lVar5 = plVar4[0x49];
  lVar9 = plVar4[0x4a];
  FUN_10a415b78(lVar5,lVar9,&stack0xffffffffffffffa8);
  if (lVar9 != lVar5) {
    if ((ulong)(plVar4[0x4d] - plVar4[0x4c] >> 5) <= *(ulong *)(lVar5 + 0x18)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a43e15c);
      (*pcVar1)();
    }
    *(byte *)(*(long *)(plVar4[0x4c] + *(ulong *)(lVar5 + 0x18) * 0x20) + 0x69) = (byte)param_2 ^ 1;
  }
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar9 = plVar3[0x4c];
  lVar8 = lVar9 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar9 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar9 = lVar2 + lVar8;
          _bzero(lVar9,uVar13 * 0x10);
          lVar10 = lVar9 + uVar12 * -0x10;
          _memcpy(lVar10,lVar5,lVar8);
          *plVar4 = lVar10;
          plVar3[0x4c] = lVar9 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar9,uVar13 * 0x10);
    plVar3[0x4c] = lVar9 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar9 != lVar5) {
      lVar9 = lVar9 + -0x10;
      func_0x00010988c204(lVar9);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a43e188; end: 10a43e23f;  */

void FUN_10a43e188(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a43e240(param_1,param_2,FUN_10a416678,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a43e240; end: 10a43e30b;  */

void FUN_10a43e240(undefined4 *param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long *plVar2;
  undefined8 auStack_68 [2];
  char cStack_51;
  
  lVar1 = param_2;
  FUN_10a43cfac(param_2,param_5);
  FUN_10a0584c8(param_7);
  func_0x000109898570(auStack_68,param_2,param_6);
  plVar2 = (long *)(lVar1 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*plVar2 + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(plVar2,auStack_68);
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  *param_1 = 2;
  *(char *)(param_1 + 2) = (char)plVar2;
  return;
}



/* Entry: 10a43e30c; end: 10a43e3c3;  */

void FUN_10a43e30c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a43e240(param_1,param_2,FUN_10a4167ac,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a43e3c4; end: 10a43e4d7;  */

void FUN_10a43e3c4(undefined4 *param_1,float param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long in_stack_ffffffffffffffa8;
  
  plVar3 = param_3;
  (**(code **)(*param_3 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_3;
  FUN_10a43cfac(param_3,param_4);
  FUN_10a0584c8(param_6);
  func_0x000109898570(&plStack_68,param_3,param_5);
  FUN_10a4168dc(plVar4,&plStack_68);
  if (in_stack_ffffffffffffffa8 < 0) {
    __ZdlPv(plStack_68);
  }
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)param_2;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a43e4d8; end: 10a43e587;  */

void FUN_10a43e4d8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a43e588(param_1,param_2,FUN_10a4161a0,0,param_3,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a43e588; end: 10a43e6fb;  */

void FUN_10a43e588(undefined4 *param_1,long *param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lStack_70;
  long lStack_68;
  int iStack_58;
  undefined4 uStack_54;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  plVar1 = param_2;
  FUN_10a43e6fc(param_2,param_5);
  FUN_10a052e3c(param_6);
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*(long *)((long)plVar1 + ((long)param_4 >> 1)) +
                        ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(&lStack_70);
  lVar2 = lStack_68 - lStack_70 >> 4;
  (**(code **)(*param_2 + 600))(&iStack_58,param_2,lVar2);
  uStack_48 = CONCAT44(uStack_54,iStack_58);
  if (lStack_68 != lStack_70) {
    lVar3 = 0;
    puVar4 = (undefined8 *)(lStack_70 + 8);
    do {
      FUN_10a43d3fc(&iStack_58,param_2,puVar4[-1],*puVar4);
      (**(code **)(*param_2 + 0x290))(param_2,&uStack_48,lVar3,&iStack_58);
      if ((3 < iStack_58) && (puStack_50 != (undefined8 *)0x0)) {
        (**(code **)*puStack_50)();
      }
      puVar4 = puVar4 + 2;
      lVar3 = lVar3 + 1;
    } while (lVar2 != lVar3);
  }
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = uStack_48;
  FUN_10a435430(&lStack_70);
  return;
}



/* Entry: 10a43e6fc; end: 10a43e763;  */

void FUN_10a43e6fc(undefined **param_1,undefined **param_2,undefined **param_3,undefined8 param_4)

{
  float fVar1;
  code *pcVar2;
  long lVar3;
  undefined **ppuVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *extraout_x8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar4 = param_1;
  func_0x000109898688();
  if (ppuVar4 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar4);
    param_2 = ppuVar4;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_3 = &PTR_DAT_110bd9e28;
      param_4 = 0x10;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar5 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar6 = plVar5;
  (**(code **)(*plVar5 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  FUN_10a43cfac(plVar5,param_2);
  FUN_10a05ed04(param_4);
  if (*(int *)param_3 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a43e888);
    (*pcVar2)();
  }
  if ((*(ushort *)(plVar5 + 0x30) >> 4 & 1) == 0) {
    fVar1 = (float)(double)param_3[1];
    if (0x7fefffffffffffff < ((ulong)param_3[1] & 0x7fffffffffffffff)) {
      fVar1 = 0.0;
    }
    FUN_10a41a100(fVar1,plVar5,plVar5[0x2d]);
  }
  else if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
    func_0x00010ae06f08(1,2,&UNK_10f656b15,&UNK_10f656b50,0x3dd,&UNK_10f656b94);
  }
  *extraout_x8 = 0;
  plVar5 = plVar6 + 0x4b;
  lVar7 = plVar6[0x59];
  uVar8 = lVar7 - 1;
  plVar6[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar5[lVar7 + 2];
    if (plVar6[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar8) {
      return;
    }
  }
  lVar7 = *plVar5;
  lVar12 = plVar6[0x4c];
  lVar10 = lVar12 - lVar7;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar8) {
    uVar15 = uVar8 - uVar14;
    lVar13 = plVar6[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar7 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_88 = plVar5;
        if (uVar9 >> 0x3c == 0) {
          lVar3 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar3 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar5 = lVar11;
          plVar6[0x4c] = lVar12 + uVar15 * 0x10;
          plVar6[0x4d] = lVar3 + uVar9 * 0x10;
          lStack_a8 = lVar7;
          lStack_a0 = lVar7;
          lStack_98 = lVar7;
          lStack_90 = lVar13;
          func_0x00010988c1b8(&lStack_a8);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar6[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar8 < uVar14) {
    lVar7 = lVar7 + uVar8 * 0x10;
    while (lVar12 != lVar7) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar6[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar8;
  return;
}



/* Entry: 10a43e764; end: 10a43e89b;  */

void FUN_10a43e764(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  float fVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a43cfac(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a43e888);
    (*pcVar3)();
  }
  if ((*(ushort *)(param_2 + 0x30) >> 4 & 1) == 0) {
    fVar2 = (float)*(double *)(param_4 + 2);
    if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
      fVar2 = 0.0;
    }
    FUN_10a41a100(fVar2,param_2,param_2[0x2d]);
  }
  else if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
    func_0x00010ae06f08(1,2,&UNK_10f656b15,&UNK_10f656b50,0x3dd,&UNK_10f656b94);
  }
  *param_1 = 0;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a43e89c; end: 10a43e953;  */

void FUN_10a43e89c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a43d6cc(param_1,param_2,FUN_10a41b418,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a43e954; end: 10a43ea0b;  */

void FUN_10a43e954(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a43e6fc(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[0x3e];
  *param_1 = 2;
  *(char *)(param_1 + 2) = (char)lVar5;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a43ea0c; end: 10a43eacb;  */

void FUN_10a43ea0c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a43cfac(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  *(char *)(plVar4 + 0x3e) = (char)param_2;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a43eacc; end: 10a43eb7b;  */

void FUN_10a43eacc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a43e588(param_1,param_2,FUN_10a41619c,0,param_3,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a43eb7c; end: 10a43ed83;  */

void FUN_10a43eb7c(ulong param_1)

{
  undefined ***pppuVar1;
  undefined **ppuVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined4 uVar8;
  code *pcVar9;
  ulong uVar10;
  undefined **appuStack_c0 [2];
  char cStack_a9;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  func_0x000109887da8(appuStack_c0,&UNK_10e4b5544,0x90);
  pppuVar1 = (undefined ***)appuStack_c0[0];
  if (-1 < cStack_a9) {
    pppuVar1 = appuStack_c0;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bd9628;
  ppuVar2 = (undefined **)&UNK_10f656650;
  if (pppuVar1 != (undefined ***)0x0) {
    ppuVar2 = (undefined **)pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,ppuVar2);
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  ppuStack_a8 = (undefined **)pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar10 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar10 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110bd9628;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110b178e0;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_40,&ppuStack_a8);
  }
  if (cStack_a9 < '\0') {
    __ZdlPv(appuStack_c0[0]);
  }
  uVar10 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar10 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a43ed64;
    FUN_10a054dac(param_1,&DAT_10f68571c,FUN_10a43efa4,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar10 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar10 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a43ed64;
    FUN_10a054dac(param_1,&DAT_10f685720,FUN_10a43f868,2,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar7 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar7) {
    uVar3 = *(undefined4 *)(lVar7 + -0x50);
    uVar5 = *(undefined4 *)(lVar7 + -0x4c);
    uVar4 = *(undefined4 *)(lVar7 + -0x48);
    uVar6 = *(undefined4 *)(lVar7 + -0x44);
    uVar8 = *(undefined4 *)(lVar7 + -0x18);
    *(long *)(param_1 + 0x170) = lVar7 + -0x68;
    uVar10 = param_1;
    FUN_10a0051e8(param_1,uVar3,uVar5,uVar8,uVar4,uVar6);
    if ((uVar10 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a43ed64:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10a43ed68);
  (*pcVar9)();
}



/* Entry: 10a43ed84; end: 10a43ef53;  */

void FUN_10a43ed84(long *param_1,long *param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  plVar5 = param_1;
  plVar7 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar5 = param_2;
  }
  plVar10 = (long *)param_1[1];
  if (plVar10 > param_2 || param_2 == plVar10) {
    if (plVar10 <= param_2) {
      return;
    }
    plVar5 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar10 < (long *)0x3) || (((ulong)plVar10 & (long)plVar10 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar5) {
      plVar5 = (long *)(1L << (-LZCOUNT((long)plVar5 + -1) & 0x3fU));
    }
    if (param_2 <= plVar5) {
      param_2 = plVar5;
    }
    if (plVar10 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar3 = (long)param_2 << 3;
    __Znwm();
    lVar4 = *param_1;
    *param_1 = lVar3;
    if (lVar4 != 0) {
      __ZdlPv();
    }
    plVar5 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar5 * 8) = 0;
      plVar5 = (long *)((long)plVar5 + 1);
    } while (param_2 != plVar5);
    plVar5 = (long *)param_1[2];
    if (plVar5 != (long *)0x0) {
      plVar7 = (long *)plVar5[1];
      uVar6 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar6) == 0) {
        plVar7 = (long *)((ulong)plVar7 & uVar6);
      }
      else if (param_2 <= plVar7) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar7 / (ulong)param_2;
        }
        plVar7 = (long *)((long)plVar7 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar7 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar5;
      while (plVar10 != (long *)0x0) {
        plVar9 = (long *)plVar10[1];
        if (((ulong)param_2 & uVar6) == 0) {
          plVar9 = (long *)((ulong)plVar9 & uVar6);
        }
        else if (param_2 <= plVar9) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar9 / (ulong)param_2;
          }
          plVar9 = (long *)((long)plVar9 - uVar1 * (long)param_2);
        }
        plVar8 = plVar10;
        if (plVar9 != plVar7) {
          lVar3 = *param_1;
          if (*(long *)(lVar3 + (long)plVar9 * 8) == 0) {
            *(long **)(lVar3 + (long)plVar9 * 8) = plVar5;
            plVar7 = plVar9;
          }
          else {
            *plVar5 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar3 + (long)plVar9 * 8);
            **(long **)(lVar3 + (long)plVar9 * 8) = (long)plVar10;
            plVar8 = plVar5;
          }
        }
        plVar5 = plVar8;
        plVar10 = (long *)*plVar8;
      }
    }
    return;
  }
  func_0x000109ffded8();
  if (((ulong)plVar5 & 1) != 0) {
    if (3 < (ulong)*(byte *)(plVar7 + 0xc)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a43efa4);
      (*pcVar2)();
    }
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(plVar7 + 0xc)])(plVar7 + 4);
    FUN_10a004978(plVar7 + 2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar7);
  return;
}



/* Entry: 10a43ef54; end: 10a43efa3;  */

void FUN_10a43ef54(ulong param_1,long param_2)

{
  code *pcVar1;
  
  if ((param_1 & 1) != 0) {
    if (3 < (ulong)*(byte *)(param_2 + 0x60)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a43efa4);
      (*pcVar1)();
    }
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_2 + 0x60)])(param_2 + 0x20);
    FUN_10a004978(param_2 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10a43efa4; end: 10a43f59f;  */

/* WARNING: Possible PIC construction at 0x00010a43f594: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a43f598) */
/* WARNING: Removing unreachable block (ram,0x00010a43f5b8) */
/* WARNING: Removing unreachable block (ram,0x00010a43f5c8) */
/* WARNING: Removing unreachable block (ram,0x00010a43f5f0) */
/* WARNING: Removing unreachable block (ram,0x00010a43f5fc) */
/* WARNING: Removing unreachable block (ram,0x00010a43f614) */
/* WARNING: Removing unreachable block (ram,0x00010a43f64c) */
/* WARNING: Removing unreachable block (ram,0x00010a43f678) */
/* WARNING: Removing unreachable block (ram,0x00010a43f664) */
/* WARNING: Removing unreachable block (ram,0x00010a43f66c) */
/* WARNING: Removing unreachable block (ram,0x00010a43f67c) */
/* WARNING: Removing unreachable block (ram,0x00010a43f684) */
/* WARNING: Removing unreachable block (ram,0x00010a43f694) */
/* WARNING: Removing unreachable block (ram,0x00010a43f6a0) */
/* WARNING: Removing unreachable block (ram,0x00010a43f6c0) */
/* WARNING: Removing unreachable block (ram,0x00010a43f6ac) */
/* WARNING: Removing unreachable block (ram,0x00010a43f6b4) */
/* WARNING: Removing unreachable block (ram,0x00010a43f6c4) */
/* WARNING: Removing unreachable block (ram,0x00010a43f6cc) */
/* WARNING: Removing unreachable block (ram,0x00010a43f6d0) */
/* WARNING: Removing unreachable block (ram,0x00010a43f6f4) */
/* WARNING: Removing unreachable block (ram,0x00010a43f6dc) */
/* WARNING: Removing unreachable block (ram,0x00010a43f6e8) */
/* WARNING: Removing unreachable block (ram,0x00010a43f6f8) */
/* WARNING: Removing unreachable block (ram,0x00010a43f700) */
/* WARNING: Removing unreachable block (ram,0x00010a43f708) */
/* WARNING: Removing unreachable block (ram,0x00010a43f70c) */
/* WARNING: Removing unreachable block (ram,0x00010a43f710) */
/* WARNING: Removing unreachable block (ram,0x00010a43f72c) */
/* WARNING: Removing unreachable block (ram,0x00010a43f718) */
/* WARNING: Removing unreachable block (ram,0x00010a43f720) */
/* WARNING: Removing unreachable block (ram,0x00010a43f730) */
/* WARNING: Removing unreachable block (ram,0x00010a43f738) */
/* WARNING: Removing unreachable block (ram,0x00010a43f744) */
/* WARNING: Removing unreachable block (ram,0x00010a43f760) */
/* WARNING: Removing unreachable block (ram,0x00010a43f788) */
/* WARNING: Removing unreachable block (ram,0x00010a43f770) */
/* WARNING: Removing unreachable block (ram,0x00010a43f610) */
/* WARNING: Removing unreachable block (ram,0x00010a43f5e4) */

void FUN_10a43efa4(undefined8 param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long lVar17;
  long *unaff_x22;
  long lVar18;
  long lVar19;
  long *unaff_x23;
  long *plVar20;
  long lVar21;
  long *unaff_x24;
  long *plVar22;
  ulong unaff_x25;
  ulong uVar23;
  ulong unaff_x26;
  ulong uVar24;
  long *unaff_x27;
  ulong unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  long *plStack_e0;
  long lStack_d8;
  long *plStack_d0;
  long lStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long lStack_a8;
  long *plStack_a0;
  long lStack_98;
  byte bStack_70;
  long lStack_68;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = param_2;
  uStack_e8 = param_1;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar8[0x59] < 8) {
    plVar8[plVar8[0x59] + 0x4e] = plVar8[0x5a];
    plVar8[0x59] = plVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar8 + 0x4b);
  }
  plVar9 = param_2;
  FUN_10a43f5a0(param_2,param_3);
  FUN_10a43f608(param_5);
  if (*param_4 == 7) {
    plVar11 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_4 + 2));
    plVar12 = param_2;
    plStack_c0 = plVar11;
    (**(code **)(*param_2 + 0x228))(param_2,&plStack_c0);
    if ((int)plVar12 != 0) {
      plVar11 = param_2;
      (**(code **)(*param_2 + 0x58))();
      lVar10 = plVar11[0x48];
      if ((lVar10 == 0) ||
         (___dynamic_cast(lVar10,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), plVar11 = plStack_c0,
         lVar10 == 0)) {
        func_0x00010988bd28(&UNK_10f685540);
        goto LAB_10a43f588;
      }
      plStack_c0 = (long *)0x0;
      lStack_a8 = CONCAT44(lStack_a8._4_4_,7);
      plStack_a0 = plVar11;
      plStack_b0 = param_2;
      FUN_10a688ac0(&plStack_e0,&plStack_b0,*(undefined8 *)(lVar10 + 8));
      if ((3 < (int)lStack_a8) && (plStack_a0 != (long *)0x0)) {
        (**(code **)*plStack_a0)();
      }
    }
    if (plStack_c0 != (long *)0x0) {
      (**(code **)*plStack_c0)();
    }
    if (((ulong)plVar12 & 1) != 0) {
      plStack_b0 = plStack_e0;
      lStack_a8 = lStack_d8;
      if (lStack_d8 != 0) {
        plVar11 = (long *)(lStack_d8 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = *plVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lStack_98 = lStack_c8;
      plStack_a0 = plStack_d0;
      if (lStack_c8 != 0) {
        plVar11 = (long *)(lStack_c8 + 0x10);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = *plVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      bStack_70 = 2;
      plVar11 = (long *)0x30;
      __Znwm();
      plVar12 = plVar11 + 1;
      *plVar12 = 0;
      plVar11[2] = 0;
      *plVar11 = (long)&PTR_FUN_110b9fc88;
      plVar22 = plVar11 + 3;
      *plVar22 = (long)&PTR_FUN_110c0f9b0;
      plVar11[4] = 0;
      plVar11[5] = 0;
      uVar14 = ((ulong)(uint)((int)plVar22 << 3) + 8 ^ (ulong)plVar22 >> 0x20) * -0x622015f714c7d297
      ;
      uVar14 = ((ulong)plVar22 >> 0x20 ^ uVar14 >> 0x2f ^ uVar14) * -0x622015f714c7d297;
      uVar24 = (uVar14 ^ uVar14 >> 0x2f) * -0x622015f714c7d297;
      uVar23 = plVar9[4];
      uVar14 = unaff_x28;
      plStack_c0 = plVar22;
      plStack_b8 = plVar11;
      if (uVar23 != 0) {
        uVar13 = uVar23 - 1;
        if ((uVar23 & uVar13) == 0) {
          uVar14 = uVar13 & uVar24;
        }
        else {
          uVar14 = uVar24;
          if (uVar23 <= uVar24) {
            uVar14 = 0;
            if (uVar23 != 0) {
              uVar14 = uVar24 / uVar23;
            }
            uVar14 = uVar24 - uVar14 * uVar23;
          }
        }
        puVar15 = *(undefined8 **)(plVar9[3] + uVar14 * 8);
        if (puVar15 != (undefined8 *)0x0) {
          for (plVar20 = (long *)*puVar15; plVar20 != (long *)0x0; plVar20 = (long *)*plVar20) {
            uVar16 = plVar20[1];
            if (uVar16 == uVar24) {
              if ((long *)plVar20[2] == plVar22) goto LAB_10a43f344;
            }
            else {
              if ((uVar23 & uVar13) == 0) {
                uVar16 = uVar16 & uVar13;
              }
              else if (uVar23 <= uVar16) {
                uVar5 = 0;
                if (uVar23 != 0) {
                  uVar5 = uVar16 / uVar23;
                }
                uVar16 = uVar16 - uVar5 * uVar23;
              }
              if (uVar16 != uVar14) break;
            }
          }
        }
      }
      plVar20 = (long *)0x68;
      __Znwm();
      *plVar20 = 0;
      plVar20[1] = uVar24;
      plVar20[2] = (long)plVar22;
      plVar20[3] = (long)plVar11;
      plStack_c0 = (long *)0x0;
      plStack_b8 = (long *)0x0;
      *(undefined1 *)(plVar20 + 0xc) = 3;
      plVar20[4] = (long)plStack_e0;
      plVar20[5] = lStack_a8;
      if (lStack_a8 != 0) {
        plVar12 = (long *)(lStack_a8 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar4) {
            *plVar12 = *plVar12 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar20[7] = lStack_98;
      plVar20[6] = (long)plStack_a0;
      if (lStack_98 != 0) {
        plVar12 = (long *)(lStack_98 + 0x10);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar4) {
            *plVar12 = *plVar12 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      *(byte *)(plVar20 + 0xc) = bStack_70;
      if ((uVar23 == 0) || (*(float *)(plVar9 + 7) * (float)uVar23 < (float)(plVar9[6] + 1))) {
        uVar14 = 1;
        if (2 < uVar23) {
          uVar14 = (ulong)((uVar23 & uVar23 - 1) != 0);
        }
        uVar14 = uVar14 | uVar23 << 1;
        uVar23 = (ulong)((float)(plVar9[6] + 1) / *(float *)(plVar9 + 7));
        if (uVar14 <= uVar23) {
          uVar14 = uVar23;
        }
        FUN_10a43ed84(plVar9 + 3,uVar14);
        uVar23 = plVar9[4];
        if ((uVar23 & uVar23 - 1) == 0) {
          uVar14 = uVar23 - 1 & uVar24;
        }
        else {
          uVar14 = uVar24;
          if (uVar23 <= uVar24) {
            uVar14 = 0;
            if (uVar23 != 0) {
              uVar14 = uVar24 / uVar23;
            }
            uVar14 = uVar24 - uVar14 * uVar23;
          }
        }
      }
      lVar10 = plVar9[3];
      plVar12 = *(long **)(lVar10 + uVar14 * 8);
      if (plVar12 == (long *)0x0) {
        plVar12 = plVar9 + 5;
        *plVar20 = *plVar12;
        *plVar12 = (long)plVar20;
        *(long **)(lVar10 + uVar14 * 8) = plVar12;
        if (*plVar20 != 0) {
          uVar13 = *(ulong *)(*plVar20 + 8);
          if ((uVar23 & uVar23 - 1) == 0) {
            uVar13 = uVar13 & uVar23 - 1;
          }
          else if (uVar23 <= uVar13) {
            uVar16 = 0;
            if (uVar23 != 0) {
              uVar16 = uVar13 / uVar23;
            }
            uVar13 = uVar13 - uVar16 * uVar23;
          }
          plVar12 = (long *)(plVar9[3] + uVar13 * 8);
          goto LAB_10a43f3e8;
        }
      }
      else {
        *plVar20 = *plVar12;
LAB_10a43f3e8:
        *plVar12 = (long)plVar20;
      }
      plVar9[6] = plVar9[6] + 1;
      goto LAB_10a43f3f8;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
  goto LAB_10a43f588;
LAB_10a43f344:
  do {
    lVar10 = *plVar12;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar4) {
      *plVar12 = lVar10 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar10 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
  }
LAB_10a43f3f8:
  if (*(char *)(plVar9[9] + 8) == '\x01') {
    (*(code *)plVar9[8])(plVar9);
  }
  plStack_b8 = (long *)plVar20[3];
  plStack_c0 = (long *)plVar20[2];
  if (plVar20[3] != 0) {
    plVar12 = (long *)(plVar20[3] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *plVar12 = *plVar12 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if ((ulong)bStack_70 < 4) {
    (*(code *)(&PTR_FUN_110b9a040)[bStack_70])(&plStack_b0);
    FUN_10a688c1c(&plStack_e0);
    FUN_10a05ff7c(uStack_e8,param_2,&plStack_c0);
    plVar12 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar2 = plStack_b8 + 1;
      do {
        lVar10 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_2 = plVar12;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
      ___stack_chk_fail();
      FUN_10a43ef54(1,plVar20);
      FUN_10a004978(&plStack_c0);
      if (3 < (ulong)bStack_70) goto LAB_10a43f588;
      (*(code *)(&PTR_FUN_110b9a040)[bStack_70])(&plStack_b0);
      FUN_10a688c1c(&plStack_e0);
      unaff_x30 = 0x10a43f598;
      register0x00000008 = (BADSPACEBASE *)auStack_f0;
      unaff_x19 = plVar8;
      unaff_x20 = param_2;
      unaff_x21 = plVar11;
      unaff_x22 = plVar9;
      unaff_x23 = plVar20;
      unaff_x24 = plVar22;
      unaff_x25 = uVar23;
      unaff_x26 = uVar24;
      unaff_x27 = plStack_e0;
      unaff_x28 = uVar14;
      unaff_x29 = puVar1;
    }
    plVar9 = plVar8 + 0x4b;
    lVar10 = plVar8[0x59];
    uVar14 = lVar10 - 1;
    plVar8[0x59] = uVar14;
    if (uVar14 < 8) {
      uVar14 = plVar9[lVar10 + 2];
      if (plVar8[0x5a] == uVar14) {
        return;
      }
    }
    else {
      uVar14 = *(ulong *)(plVar8[0x57] + -8);
      plVar8[0x57] = plVar8[0x57] + -8;
      if (plVar8[0x5a] == uVar14) {
        return;
      }
    }
    *(ulong *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(long **)((long)register0x00000008 + -0x58) = unaff_x27;
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(long **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    lVar10 = *plVar9;
    lVar19 = plVar8[0x4c];
    lVar17 = lVar19 - lVar10;
    uVar23 = lVar17 >> 4;
    if (uVar23 < uVar14) {
      uVar24 = uVar14 - uVar23;
      lVar21 = plVar8[0x4d];
      if ((ulong)(lVar21 - lVar19 >> 4) < uVar24) {
        if (uVar14 >> 0x3c == 0) {
          uVar13 = lVar21 - lVar10 >> 3;
          if (uVar13 <= uVar14) {
            uVar13 = uVar14;
          }
          if (0x7fffffffffffffef < (ulong)(lVar21 - lVar10)) {
            uVar13 = 0xfffffffffffffff;
          }
          *(long **)((long)register0x00000008 + -0x68) = plVar9;
          if (uVar13 >> 0x3c == 0) {
            lVar7 = uVar13 << 4;
            __Znwm();
            lVar19 = lVar7 + lVar17;
            _bzero(lVar19,uVar24 * 0x10);
            lVar18 = lVar19 + uVar23 * -0x10;
            _memcpy(lVar18,lVar10,lVar17);
            *plVar9 = lVar18;
            plVar8[0x4c] = lVar19 + uVar24 * 0x10;
            plVar8[0x4d] = lVar7 + uVar13 * 0x10;
            *(long *)((long)register0x00000008 + -0x78) = lVar10;
            *(long *)((long)register0x00000008 + -0x70) = lVar21;
            *(long *)((long)register0x00000008 + -0x88) = lVar10;
            *(long *)((long)register0x00000008 + -0x80) = lVar10;
            func_0x00010988c1b8((undefined1 *)((long)register0x00000008 + -0x88));
            goto code_r0x00010988c138;
          }
          func_0x000104c4f740();
        }
        else {
          func_0x00010988c1a4();
        }
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10988c16c);
        (*pcVar6)();
      }
      _bzero(lVar19,uVar24 * 0x10);
      plVar8[0x4c] = lVar19 + uVar24 * 0x10;
    }
    else if (uVar14 < uVar23) {
      lVar10 = lVar10 + uVar14 * 0x10;
      while (lVar19 != lVar10) {
        lVar19 = lVar19 + -0x10;
        func_0x00010988c204(lVar19);
      }
      plVar8[0x4c] = lVar10;
    }
code_r0x00010988c138:
    plVar8[0x5a] = uVar14;
    return;
  }
LAB_10a43f588:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a43f58c);
  (*pcVar6)();
}



/* Entry: 10a43f5a0; end: 10a43f607;  */

void FUN_10a43f5a0(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  
  lVar3 = param_1;
  func_0x000109898688();
  if (lVar3 != 0) {
    FUN_10a053854(param_1,lVar3);
    if ((param_1 != 0) && (___dynamic_cast(), param_1 != 0)) {
      return;
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar2 = &UNK_10f68f52e;
  func_0x00010988bd28();
  if ((int)puVar2 == 1) {
    return;
  }
  lVar3 = 1;
  puVar5 = (undefined8 *)0x0;
  FUN_10a052ee0(1,0,puVar2);
  plVar4 = (long *)(lVar3 + 0x18);
  FUN_10a43f794(plVar4,*puVar5);
  if (plVar4 == (long *)0x0) goto LAB_10a43f760;
  uVar8 = *(ulong *)(lVar3 + 0x20);
  lVar6 = *plVar4;
  uVar7 = plVar4[1];
  uVar9 = uVar8 - 1;
  if ((uVar8 & uVar9) == 0) {
    uVar7 = uVar9 & uVar7;
  }
  else if (uVar8 <= uVar7) {
    uVar11 = 0;
    if (uVar8 != 0) {
      uVar11 = uVar7 / uVar8;
    }
    uVar7 = uVar7 - uVar11 * uVar8;
  }
  plVar1 = *(long **)(*(long *)(lVar3 + 0x18) + uVar7 * 8);
  do {
    plVar10 = plVar1;
    plVar1 = (long *)*plVar10;
  } while ((long *)*plVar10 != plVar4);
  if (plVar10 == (long *)(lVar3 + 0x28)) {
LAB_10a43f6cc:
    if (lVar6 == 0) {
LAB_10a43f700:
      *(undefined8 *)(*(long *)(lVar3 + 0x18) + uVar7 * 8) = 0;
      lVar6 = *plVar4;
      goto LAB_10a43f708;
    }
    uVar11 = *(ulong *)(lVar6 + 8);
    if ((uVar8 & uVar9) == 0) {
      uVar12 = uVar11 & uVar9;
    }
    else {
      uVar12 = uVar11;
      if (uVar8 <= uVar11) {
        uVar12 = 0;
        if (uVar8 != 0) {
          uVar12 = uVar11 / uVar8;
        }
        uVar12 = uVar11 - uVar12 * uVar8;
      }
    }
    if (uVar12 != uVar7) goto LAB_10a43f700;
LAB_10a43f710:
    if ((uVar8 & uVar9) == 0) {
      uVar11 = uVar11 & uVar9;
    }
    else if (uVar8 <= uVar11) {
      uVar9 = 0;
      if (uVar8 != 0) {
        uVar9 = uVar11 / uVar8;
      }
      uVar11 = uVar11 - uVar9 * uVar8;
    }
    if (uVar11 != uVar7) {
      *(long **)(*(long *)(lVar3 + 0x18) + uVar11 * 8) = plVar10;
      lVar6 = *plVar4;
    }
  }
  else {
    uVar11 = plVar10[1];
    if ((uVar8 & uVar9) == 0) {
      uVar11 = uVar11 & uVar9;
    }
    else if (uVar8 <= uVar11) {
      uVar12 = 0;
      if (uVar8 != 0) {
        uVar12 = uVar11 / uVar8;
      }
      uVar11 = uVar11 - uVar12 * uVar8;
    }
    if (uVar11 != uVar7) goto LAB_10a43f6cc;
LAB_10a43f708:
    if (lVar6 != 0) {
      uVar11 = *(ulong *)(lVar6 + 8);
      goto LAB_10a43f710;
    }
  }
  *plVar10 = lVar6;
  *plVar4 = 0;
  *(long *)(lVar3 + 0x30) = *(long *)(lVar3 + 0x30) + -1;
  FUN_10a43ef54(1);
LAB_10a43f760:
  if (*(char *)(*(long *)(lVar3 + 0x48) + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010a43f784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x40))(lVar3);
    return;
  }
  return;
}



/* Entry: 10a43f608; end: 10a43f62b;  */

void FUN_10a43f608(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  
  if ((int)param_1 == 1) {
    return;
  }
  lVar2 = 1;
  puVar4 = (undefined8 *)0x0;
  FUN_10a052ee0(1,0,param_1);
  plVar3 = (long *)(lVar2 + 0x18);
  FUN_10a43f794(plVar3,*puVar4);
  if (plVar3 == (long *)0x0) goto LAB_10a43f760;
  uVar7 = *(ulong *)(lVar2 + 0x20);
  lVar5 = *plVar3;
  uVar6 = plVar3[1];
  uVar8 = uVar7 - 1;
  if ((uVar7 & uVar8) == 0) {
    uVar6 = uVar8 & uVar6;
  }
  else if (uVar7 <= uVar6) {
    uVar10 = 0;
    if (uVar7 != 0) {
      uVar10 = uVar6 / uVar7;
    }
    uVar6 = uVar6 - uVar10 * uVar7;
  }
  plVar1 = *(long **)(*(long *)(lVar2 + 0x18) + uVar6 * 8);
  do {
    plVar9 = plVar1;
    plVar1 = (long *)*plVar9;
  } while ((long *)*plVar9 != plVar3);
  if (plVar9 == (long *)(lVar2 + 0x28)) {
LAB_10a43f6cc:
    if (lVar5 == 0) {
LAB_10a43f700:
      *(undefined8 *)(*(long *)(lVar2 + 0x18) + uVar6 * 8) = 0;
      lVar5 = *plVar3;
      goto LAB_10a43f708;
    }
    uVar10 = *(ulong *)(lVar5 + 8);
    if ((uVar7 & uVar8) == 0) {
      uVar11 = uVar10 & uVar8;
    }
    else {
      uVar11 = uVar10;
      if (uVar7 <= uVar10) {
        uVar11 = 0;
        if (uVar7 != 0) {
          uVar11 = uVar10 / uVar7;
        }
        uVar11 = uVar10 - uVar11 * uVar7;
      }
    }
    if (uVar11 != uVar6) goto LAB_10a43f700;
LAB_10a43f710:
    if ((uVar7 & uVar8) == 0) {
      uVar10 = uVar10 & uVar8;
    }
    else if (uVar7 <= uVar10) {
      uVar8 = 0;
      if (uVar7 != 0) {
        uVar8 = uVar10 / uVar7;
      }
      uVar10 = uVar10 - uVar8 * uVar7;
    }
    if (uVar10 != uVar6) {
      *(long **)(*(long *)(lVar2 + 0x18) + uVar10 * 8) = plVar9;
      lVar5 = *plVar3;
    }
  }
  else {
    uVar10 = plVar9[1];
    if ((uVar7 & uVar8) == 0) {
      uVar10 = uVar10 & uVar8;
    }
    else if (uVar7 <= uVar10) {
      uVar11 = 0;
      if (uVar7 != 0) {
        uVar11 = uVar10 / uVar7;
      }
      uVar10 = uVar10 - uVar11 * uVar7;
    }
    if (uVar10 != uVar6) goto LAB_10a43f6cc;
LAB_10a43f708:
    if (lVar5 != 0) {
      uVar10 = *(ulong *)(lVar5 + 8);
      goto LAB_10a43f710;
    }
  }
  *plVar9 = lVar5;
  *plVar3 = 0;
  *(long *)(lVar2 + 0x30) = *(long *)(lVar2 + 0x30) + -1;
  FUN_10a43ef54(1);
LAB_10a43f760:
  if (*(char *)(*(long *)(lVar2 + 0x48) + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010a43f784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x40))(lVar2);
    return;
  }
  return;
}



/* Entry: 10a43f62c; end: 10a43f793;  */

void FUN_10a43f62c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  
  plVar2 = (long *)(param_1 + 0x18);
  FUN_10a43f794(plVar2,*param_2);
  if (plVar2 == (long *)0x0) goto LAB_10a43f760;
  uVar5 = *(ulong *)(param_1 + 0x20);
  lVar3 = *plVar2;
  uVar4 = plVar2[1];
  uVar6 = uVar5 - 1;
  if ((uVar5 & uVar6) == 0) {
    uVar4 = uVar6 & uVar4;
  }
  else if (uVar5 <= uVar4) {
    uVar8 = 0;
    if (uVar5 != 0) {
      uVar8 = uVar4 / uVar5;
    }
    uVar4 = uVar4 - uVar8 * uVar5;
  }
  plVar1 = *(long **)(*(long *)(param_1 + 0x18) + uVar4 * 8);
  do {
    plVar7 = plVar1;
    plVar1 = (long *)*plVar7;
  } while ((long *)*plVar7 != plVar2);
  if (plVar7 == (long *)(param_1 + 0x28)) {
LAB_10a43f6cc:
    if (lVar3 == 0) {
LAB_10a43f700:
      *(undefined8 *)(*(long *)(param_1 + 0x18) + uVar4 * 8) = 0;
      lVar3 = *plVar2;
      goto LAB_10a43f708;
    }
    uVar8 = *(ulong *)(lVar3 + 8);
    if ((uVar5 & uVar6) == 0) {
      uVar9 = uVar8 & uVar6;
    }
    else {
      uVar9 = uVar8;
      if (uVar5 <= uVar8) {
        uVar9 = 0;
        if (uVar5 != 0) {
          uVar9 = uVar8 / uVar5;
        }
        uVar9 = uVar8 - uVar9 * uVar5;
      }
    }
    if (uVar9 != uVar4) goto LAB_10a43f700;
LAB_10a43f710:
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar6 = 0;
      if (uVar5 != 0) {
        uVar6 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar6 * uVar5;
    }
    if (uVar8 != uVar4) {
      *(long **)(*(long *)(param_1 + 0x18) + uVar8 * 8) = plVar7;
      lVar3 = *plVar2;
    }
  }
  else {
    uVar8 = plVar7[1];
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar9 = 0;
      if (uVar5 != 0) {
        uVar9 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar9 * uVar5;
    }
    if (uVar8 != uVar4) goto LAB_10a43f6cc;
LAB_10a43f708:
    if (lVar3 != 0) {
      uVar8 = *(ulong *)(lVar3 + 8);
      goto LAB_10a43f710;
    }
  }
  *plVar7 = lVar3;
  *plVar2 = 0;
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -1;
  FUN_10a43ef54(1);
LAB_10a43f760:
  if (*(char *)(*(long *)(param_1 + 0x48) + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010a43f784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x40))(param_1);
    return;
  }
  return;
}



/* Entry: 10a43f794; end: 10a43f867;  */

long * FUN_10a43f794(long *param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar2 = (uint)((ulong)param_2 >> 0x20);
  uVar3 = param_1[1];
  if (uVar3 != 0) {
    uVar4 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ (ulong)uVar2) * -0x622015f714c7d297;
    uVar4 = ((ulong)uVar2 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
    uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar5 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar7 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)*plVar7;
      do {
        if (plVar7 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar8 = plVar7[1];
        if (uVar8 == uVar4) {
          if (plVar7[2] == param_2) {
            return plVar7;
          }
        }
        else {
          if ((uVar3 & uVar5) == 0) {
            uVar8 = uVar8 & uVar5;
          }
          else if (uVar3 <= uVar8) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar8 / uVar3;
            }
            uVar8 = uVar8 - uVar1 * uVar3;
          }
          if (uVar8 != uVar6) {
            return (long *)0x0;
          }
        }
        plVar7 = (long *)*plVar7;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10a43f868; end: 10a43f983;  */

void FUN_10a43f868(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long *in_stack_ffffffffffffffb8;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_2;
  FUN_10a43f5a0(param_2,param_3);
  FUN_10a060490(param_5);
  FUN_10a0604b4(&stack0xffffffffffffffb0,param_2,param_4);
  FUN_10a43f62c(plVar6,&stack0xffffffffffffffb0);
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffb8 + 1;
    do {
      lVar9 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
    }
  }
  *param_1 = 0;
  plVar6 = plVar5 + 0x4b;
  lVar9 = plVar5[0x59];
  uVar7 = lVar9 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar6[lVar9 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar9 = *plVar6;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar9;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar13 - lVar9 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar9)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar12 = lVar4 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar9,lVar10);
          *plVar6 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          lStack_78 = lVar9;
          lStack_70 = lVar13;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar9 = lVar9 + uVar7 * 0x10;
    while (lVar12 != lVar9) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a43f984; end: 10a43fab7;  */

void FUN_10a43f984(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_2;
  FUN_10a43e6fc(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar16 = (long *)plVar6[0x43];
  if (plVar6[0x43] != 0) {
    plVar6 = (long *)(plVar6[0x43] + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  func_0x000109899de4(param_1,param_2,&stack0xffffffffffffffb0,&stack0xffffffffffffffa8,0,0);
  if (plVar16 != (long *)0x0) {
    plVar6 = plVar16 + 1;
    do {
      lVar9 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
    }
  }
  plVar6 = plVar5 + 0x4b;
  lVar9 = plVar5[0x59];
  uVar7 = lVar9 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar6[lVar9 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar9 = *plVar6;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar9;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar13 - lVar9 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar9)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar12 = lVar4 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar9,lVar10);
          *plVar6 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          lStack_78 = lVar9;
          lStack_70 = lVar13;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar9 = lVar9 + uVar7 * 0x10;
    while (lVar12 != lVar9) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a43fab8; end: 10a43fb0f;  */

long FUN_10a43fab8(long param_1)

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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a43fb10; end: 10a43fb1f;  */

void FUN_10a43fb10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bd9650;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a43fb20; end: 10a43fb3f;  */

void FUN_10a43fb20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bd9650;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a43fb40; end: 10a43fb4f;  */

void FUN_10a43fb40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a43fb48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a43fb50; end: 10a43fbf7;  */

undefined8 * FUN_10a43fb50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bd96a0;
  (**(code **)param_1[9])();
  FUN_10a43fd9c(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a43fbf8; end: 10a43fc5b;  */

bool FUN_10a43fbf8(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  
  if (param_3 == 0xc) {
    return *param_2 == 0x624f747069726353 && (int)param_2[1] == 0x7463656a;
  }
  if (param_3 == 0x90) {
    iVar1 = 0xe4b5544;
    _memcmp(&UNK_10e4b5544);
    return iVar1 == 0;
  }
  return false;
}



/* Entry: 10a43fc5c; end: 10a43fd7b;  */

void FUN_10a43fc5c(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 **ppuStack_38;
  ulong uStack_30;
  undefined7 uStack_28;
  byte bStack_21;
  
  func_0x000107c2b054(param_1,&UNK_10f656650);
  uVar1 = param_1[1];
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
  }
  if (uVar1 == 0) {
    func_0x00010989f98c(&ppuStack_38,param_2);
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
    param_1[1] = uStack_30;
    *param_1 = (long)ppuStack_38;
    param_1[2] = CONCAT17(bStack_21,uStack_28);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&UNK_10f685178,7);
  __ZNSt3__19to_stringEm(&ppuStack_38,*(undefined8 *)(param_2 + 0x30));
  pppuVar2 = (undefined8 ***)ppuStack_38;
  if (-1 < (char)bStack_21) {
    uStack_30 = (ulong)bStack_21;
    pppuVar2 = &ppuStack_38;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,pppuVar2,uStack_30);
  if ((char)bStack_21 < '\0') {
    __ZdlPv(ppuStack_38);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&DAT_10f684600,1);
  return;
}



/* Entry: 10a43fd7c; end: 10a43fd8b;  */

undefined1  [16] FUN_10a43fd7c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x90;
  auVar1._0_8_ = &UNK_10e4b5544;
  return auVar1;
}



/* Entry: 10a43fd8c; end: 10a43fd9b;  */

long * FUN_10a43fd8c(undefined8 param_1,long *param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  
  func_0x000105277f8c();
  plVar1 = (long *)param_2[2];
  while( true ) {
    if (plVar1 == (long *)0x0) {
      lVar3 = *param_2;
      *param_2 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      return param_2;
    }
    if (3 < (ulong)*(byte *)(plVar1 + 0xc)) break;
    lVar3 = *plVar1;
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(plVar1 + 0xc)])(plVar1 + 4);
    FUN_10a004978(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a43fe1c);
  (*pcVar2)();
}



/* Entry: 10a43fd9c; end: 10a43fe1b;  */

long * FUN_10a43fd9c(long *param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[2];
  while( true ) {
    if (plVar1 == (long *)0x0) {
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    if (3 < (ulong)*(byte *)(plVar1 + 0xc)) break;
    lVar3 = *plVar1;
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(plVar1 + 0xc)])(plVar1 + 4);
    FUN_10a004978(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a43fe1c);
  (*pcVar2)();
}



/* Entry: 10a43fe1c; end: 10a440163;  */

void FUN_10a43fe1c(long param_1,long param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  long *plStack_60;
  
  lVar14 = *(long *)(param_2 + 0x10);
  puStack_d0 = (undefined8 *)0x0;
  puStack_c8 = (undefined8 *)0x0;
  puStack_c0 = (undefined8 *)0x0;
  uStack_b8 = (undefined8 *)0x28cd94bfde;
  plStack_a8 = (long *)0x0;
  uStack_b0 = 0;
  puStack_98 = (undefined8 *)0x0;
  plStack_a0 = (long *)0x0;
  puStack_88 = (undefined8 *)0x0;
  puStack_90 = (undefined8 *)0x0;
  FUN_10a0d09b4(&puStack_80,param_1 + 0x168);
  lVar12 = *(long *)(param_1 + 0x158);
  uStack_b0 = *(undefined8 *)(param_1 + 0x140);
  puStack_c8 = puStack_78;
  puStack_d0 = puStack_80;
  puStack_c0 = puStack_70;
  uStack_b8 = puStack_68;
  lVar9 = param_1 + 0x150;
  if (lVar12 == lVar9) {
    plStack_a0 = (long *)0x0;
  }
  else {
    do {
      if (*(long *)(lVar12 + 0x10) != 0) {
        plVar3 = (long *)(*(long *)(lVar12 + 0x10) + 0xb0);
        (**(code **)(*plVar3 + 0x18))(plVar3,0xcc065e1a2996816);
        if (plVar3 != (long *)0x0) goto LAB_10a43fed0;
      }
      lVar12 = *(long *)(lVar12 + 8);
    } while (lVar12 != lVar9);
    plVar3 = (long *)0x0;
LAB_10a43fed0:
    lVar12 = *(long *)(param_1 + 0x158);
    plStack_a0 = plVar3;
  }
  for (; lVar12 != lVar9; lVar12 = *(long *)(lVar12 + 8)) {
    if (*(long *)(lVar12 + 0x10) != 0) {
      plVar3 = (long *)(*(long *)(lVar12 + 0x10) + 0xb0);
      (**(code **)(*plVar3 + 0x18))(plVar3,0xd07927f5ab7790e9);
      if (plVar3 != (long *)0x0) goto LAB_10a43ff24;
    }
  }
  plVar3 = (long *)0x0;
LAB_10a43ff24:
  plStack_a8 = plVar3;
  FUN_10a0d78b8(&puStack_80,param_1);
  puVar13 = puStack_80;
  uVar10 = *(ulong *)(lVar14 + 0x238);
  puStack_90 = puStack_78;
  puStack_98 = puStack_80;
  puStack_88 = puStack_70;
  if (uVar10 < *(ulong *)(lVar14 + 0x240)) {
    FUN_10a440164(uVar10,&puStack_d0);
    lVar9 = uVar10 + 0x50;
    *(long *)(lVar14 + 0x238) = lVar9;
  }
  else {
    plVar3 = (long *)(lVar14 + 0x230);
    lVar9 = uVar10 - *plVar3;
    uVar10 = (lVar9 >> 4) * -0x3333333333333333 + 1;
    if (0x333333333333333 < uVar10) {
      FUN_10a44025c();
LAB_10a440128:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a44012c);
      (*pcVar2)();
    }
    lVar12 = (long)(*(ulong *)(lVar14 + 0x240) - *plVar3) >> 4;
    uVar7 = lVar12 * -0x6666666666666666;
    if (uVar7 < uVar10 || uVar7 - uVar10 == 0) {
      uVar7 = uVar10;
    }
    if (0x199999999999998 < (ulong)(lVar12 * -0x3333333333333333)) {
      uVar7 = 0x333333333333333;
    }
    plStack_60 = plVar3;
    if (uVar7 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      if (0x333333333333333 < uVar7) {
        func_0x000109ffded8();
        goto LAB_10a440128;
      }
      puVar4 = (undefined8 *)(uVar7 * 0x50);
      __Znwm();
    }
    lVar9 = (long)puVar4 + lVar9;
    puStack_80 = puVar4;
    puStack_78 = (undefined8 *)lVar9;
    puStack_70 = (undefined8 *)lVar9;
    puStack_68 = puVar4 + uVar7 * 10;
    FUN_10a440164(lVar9,&puStack_d0);
    puVar15 = *(undefined8 **)(lVar14 + 0x238);
    puVar11 = *(undefined8 **)(lVar14 + 0x230);
    puVar1 = (undefined8 *)((long)puVar11 + (lVar9 - (long)puVar15));
    puVar5 = puVar11;
    puVar6 = puVar1;
    if (puVar15 != puVar11) {
      do {
        uVar16 = puVar5[1];
        uVar8 = *puVar5;
        puVar6[2] = puVar5[2];
        puVar6[1] = uVar16;
        *puVar6 = uVar8;
        puVar5[1] = 0;
        puVar5[2] = 0;
        *puVar5 = 0;
        puVar6[3] = puVar5[3];
        uVar16 = puVar5[4];
        uVar8 = puVar5[6];
        puVar6[5] = puVar5[5];
        puVar6[4] = uVar16;
        puVar6[6] = uVar8;
        puVar6[7] = 0;
        puVar6[8] = 0;
        puVar6[9] = 0;
        uVar8 = puVar5[7];
        puVar6[8] = puVar5[8];
        puVar6[7] = uVar8;
        puVar6[9] = puVar5[9];
        puVar5[7] = 0;
        puVar5[8] = 0;
        puVar5[9] = 0;
        puVar5 = puVar5 + 10;
        puVar6 = puVar6 + 10;
      } while (puVar5 != puVar15);
      do {
        func_0x00010a43548c(puVar11);
        puVar11 = puVar11 + 10;
      } while (puVar11 != puVar15);
      puVar11 = (undefined8 *)*plVar3;
      puVar13 = puStack_98;
    }
    lVar9 = lVar9 + 0x50;
    *(undefined8 **)(lVar14 + 0x230) = puVar1;
    *(long *)(lVar14 + 0x238) = lVar9;
    puStack_68 = *(undefined8 **)(lVar14 + 0x240);
    *(undefined8 **)(lVar14 + 0x240) = puVar4 + uVar7 * 10;
    puStack_80 = puVar11;
    puStack_78 = puVar11;
    puStack_70 = puVar11;
    FUN_10a440270(&puStack_80);
  }
  *(long *)(lVar14 + 0x238) = lVar9;
  if (puVar13 != (undefined8 *)0x0) {
    puStack_90 = puVar13;
    __ZdlPv(puVar13);
  }
  if ((long)puStack_c0 < 0) {
    __ZdlPv(puStack_d0);
  }
  return;
}



/* Entry: 10a440164; end: 10a44025b;  */

undefined8 * FUN_10a440164(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar6 = param_2[1];
    uVar5 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar6;
    *param_1 = uVar5;
  }
  param_1[3] = param_2[3];
  uVar7 = param_2[5];
  uVar6 = param_2[4];
  uVar5 = param_2[6];
  puVar3 = param_1 + 7;
  *puVar3 = 0;
  param_1[6] = uVar5;
  param_1[5] = uVar7;
  param_1[4] = uVar6;
  param_1[8] = 0;
  param_1[9] = 0;
  lVar1 = param_2[8] - param_2[7];
  if (lVar1 != 0) {
    uVar4 = lVar1 >> 3;
    if (uVar4 >> 0x3d != 0) {
      FUN_10a0d85fc();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a440230);
      (*pcVar2)();
    }
    FUN_10a0d8610();
    param_1[7] = puVar3;
    param_1[8] = puVar3;
    param_1[9] = puVar3 + uVar4;
    _memmove();
    param_1[8] = (long)puVar3 + lVar1;
  }
  return param_1;
}



/* Entry: 10a44025c; end: 10a44026f;  */

long * FUN_10a44025c(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lVar1 = plVar2[1];
  lVar3 = plVar2[2];
  while (lVar3 != lVar1) {
    plVar2[2] = lVar3 + -0x50;
    func_0x00010a43548c();
    lVar3 = plVar2[2];
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 10a440270; end: 10a4402bb;  */

long * FUN_10a440270(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x50;
    func_0x00010a43548c();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a4402bc; end: 10a4402d7;  */

void FUN_10a4402bc(void)

{
  return;
}



/* Entry: 10a4402d8; end: 10a440333;  */

long * FUN_10a4402d8(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_10a440334(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a440334; end: 10a440483;  */

void FUN_10a440334(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[4];
  param_1[4] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10a440484; end: 10a440567;  */

long * FUN_10a440484(long *param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar2 = (uint)((ulong)param_2 >> 0x20);
  uVar3 = param_1[1];
  if (uVar3 != 0) {
    uVar4 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ (ulong)uVar2) * -0x622015f714c7d297;
    uVar4 = ((ulong)uVar2 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
    uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar5 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar7 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)*plVar7;
      do {
        if (plVar7 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar8 = plVar7[1];
        if (uVar4 - uVar8 == 0) {
          if (plVar7[2] == param_2) {
            return plVar7;
          }
        }
        else {
          if ((uVar3 & uVar5) == 0) {
            uVar8 = uVar8 & uVar5;
          }
          else if (uVar3 <= uVar8) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar8 / uVar3;
            }
            uVar8 = uVar8 - uVar1 * uVar3;
          }
          if (uVar8 != uVar6) {
            return (long *)0x0;
          }
        }
        plVar7 = (long *)*plVar7;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10a440568; end: 10a440587;  */

void FUN_10a440568(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bd9710;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a440588; end: 10a440597;  */

void FUN_10a440588(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a440590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a440598; end: 10a4405ef;  */

long FUN_10a440598(long param_1)

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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a4405f0; end: 10a4407f3;  */

void FUN_10a4405f0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_90);
  plVar6 = (long *)*param_1;
  plStack_58 = (long *)param_2[1];
  ppuStack_60 = (undefined8 **)*param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_40 = &PTR_DAT_110bd7510;
  func_0x000109899de4(&puStack_70,plVar6,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_38 = 1;
  ppuStack_40 = &puStack_70;
  (**(code **)(*plVar6 + 0x58))(plVar6);
  ppuStack_60 = &puStack_88;
  plStack_58 = plVar6;
  puStack_50 = (undefined1 *)&puStack_90;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < (int)puStack_70) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a4407f4; end: 10a440803;  */

void FUN_10a4407f4(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&ppuStack_60,puVar5 + 1,*puVar5);
  func_0x000109884820(&puStack_88,&ppuStack_60,*puVar5);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar5 + 0x30))(&puStack_90);
  plVar7 = (long *)*puVar5;
  plStack_58 = *(long **)(param_1 + 0x28);
  ppuStack_60 = *(undefined8 ***)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x28) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_40 = &PTR_DAT_110bd7510;
  func_0x000109899de4(&puStack_70,plVar7,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_38 = 1;
  ppuStack_40 = &puStack_70;
  (**(code **)(*plVar7 + 0x58))(plVar7);
  ppuStack_60 = &puStack_88;
  plStack_58 = plVar7;
  puStack_50 = (undefined1 *)&puStack_90;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < (int)puStack_70) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a440804; end: 10a44082b;  */

long FUN_10a440804(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a440598(param_1 + 0x18);
  plVar5 = *(long **)(param_1 + 0x10);
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1 + 8;
}



/* Entry: 10a44082c; end: 10a44086b;  */

void FUN_10a44082c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110bd9750;
  uVar5 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar5;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar4 = *(long *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = uVar5;
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
  return;
}



/* Entry: 10a44086c; end: 10a440977;  */

void FUN_10a44086c(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = *param_1;
  *param_1 = 0;
  lVar4 = *param_2;
  *param_2 = 0;
  lVar3 = *param_1;
  *param_1 = lVar4;
  if (lVar3 != 0) {
    __ZdlPv();
  }
  lVar3 = *param_2;
  *param_2 = lVar6;
  if (lVar3 != 0) {
    __ZdlPv();
  }
  lVar3 = param_1[2];
  lVar4 = param_1[1];
  lVar6 = param_2[2];
  param_1[1] = param_2[1];
  param_1[2] = lVar6;
  param_2[1] = lVar4;
  param_2[2] = lVar3;
  lVar4 = param_1[3];
  param_1[3] = param_2[3];
  param_2[3] = lVar4;
  lVar3 = param_1[4];
  *(int *)(param_1 + 4) = (int)param_2[4];
  *(int *)(param_2 + 4) = (int)lVar3;
  if (param_1[3] != 0) {
    uVar1 = param_1[1];
    uVar5 = *(ulong *)(param_1[2] + 8);
    if ((uVar1 & uVar1 - 1) == 0) {
      uVar5 = uVar1 - 1 & uVar5;
    }
    else if (uVar1 <= uVar5) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar5 / uVar1;
      }
      uVar5 = uVar5 - uVar2 * uVar1;
    }
    *(long **)(*param_1 + uVar5 * 8) = param_1 + 2;
  }
  if (lVar4 != 0) {
    uVar1 = param_2[1];
    uVar5 = *(ulong *)(param_2[2] + 8);
    if ((uVar1 & uVar1 - 1) == 0) {
      uVar5 = uVar1 - 1 & uVar5;
    }
    else if (uVar1 <= uVar5) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar5 / uVar1;
      }
      uVar5 = uVar5 - uVar2 * uVar1;
    }
    *(long **)(*param_2 + uVar5 * 8) = param_2 + 2;
  }
  return;
}



/* Entry: 10a440978; end: 10a4409cb;  */

void FUN_10a440978(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1[3] != 0) {
    FUN_10a0d5b00(param_1,param_1[2]);
    param_1[2] = 0;
    lVar1 = param_1[1];
    if (lVar1 != 0) {
      lVar2 = 0;
      do {
        *(undefined8 *)(*param_1 + lVar2 * 8) = 0;
        lVar2 = lVar2 + 1;
      } while (lVar1 != lVar2);
    }
    param_1[3] = 0;
  }
  return;
}



/* Entry: 10a4409cc; end: 10a4409df;  */

/* WARNING: Possible PIC construction at 0x00010a32b264: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a32b268) */
/* WARNING: Removing unreachable block (ram,0x00010a32b270) */
/* WARNING: Removing unreachable block (ram,0x00010a32b278) */
/* WARNING: Removing unreachable block (ram,0x00010a32c18c) */
/* WARNING: Removing unreachable block (ram,0x00010a32bef8) */
/* WARNING: Removing unreachable block (ram,0x00010a32be4c) */
/* WARNING: Removing unreachable block (ram,0x00010a32b92c) */
/* WARNING: Removing unreachable block (ram,0x00010a32b694) */
/* WARNING: Removing unreachable block (ram,0x00010a32b5f0) */
/* WARNING: Removing unreachable block (ram,0x00010a32b544) */
/* WARNING: Removing unreachable block (ram,0x00010a32b39c) */
/* WARNING: Removing unreachable block (ram,0x00010a32ad9c) */
/* WARNING: Removing unreachable block (ram,0x00010a32aa08) */
/* WARNING: Removing unreachable block (ram,0x00010a32adec) */
/* WARNING: Removing unreachable block (ram,0x00010a32b450) */
/* WARNING: Removing unreachable block (ram,0x00010a32b59c) */
/* WARNING: Removing unreachable block (ram,0x00010a32b644) */
/* WARNING: Removing unreachable block (ram,0x00010a32b780) */
/* WARNING: Removing unreachable block (ram,0x00010a32be3c) */
/* WARNING: Removing unreachable block (ram,0x00010a32bea4) */
/* WARNING: Removing unreachable block (ram,0x00010a32bf4c) */
/* WARNING: Removing unreachable block (ram,0x00010a32c1c0) */
/* WARNING: Removing unreachable block (ram,0x00010a32aab4) */
/* WARNING: Removing unreachable block (ram,0x00010a32aafc) */
/* WARNING: Removing unreachable block (ram,0x00010a32ab3c) */
/* WARNING: Removing unreachable block (ram,0x00010a32ab84) */
/* WARNING: Removing unreachable block (ram,0x00010a32abcc) */
/* WARNING: Removing unreachable block (ram,0x00010a32ac14) */
/* WARNING: Removing unreachable block (ram,0x00010a32accc) */

long * FUN_10a4409cc(undefined8 param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  code *pcVar4;
  undefined1 *puVar5;
  bool bVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  double *pdVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  undefined *puVar13;
  long *plVar14;
  uint uVar15;
  undefined4 uVar16;
  uint *puVar17;
  ushort *puVar18;
  short *psVar19;
  ulong uVar20;
  ulong uVar21;
  int *piVar22;
  long *unaff_x19;
  long lVar23;
  long *plVar24;
  long unaff_x20;
  long lVar25;
  long *unaff_x21;
  long *unaff_x22;
  long *plVar26;
  long *unaff_x23;
  ulong uVar27;
  long *unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  long *unaff_x27;
  long unaff_x28;
  undefined1 *puVar28;
  float fVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  long lVar32;
  float fVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  code *pcStack_18;
  
  puVar28 = &stack0xfffffffffffffff0;
  puVar13 = &DAT_10f62a4d8;
  FUN_109ffde64();
  pcStack_18 = FUN_10a4409e0;
  lVar25 = *(long *)(param_2 + 0x10);
  if (puVar13 == (undefined *)0x0) {
    plVar8 = (long *)&UNK_10e482b48;
  }
  else {
    lVar23 = *(long *)(puVar13 + 0x140);
    func_0x00010a3e90b8(lVar23);
    plVar8 = (long *)(lVar23 + 100);
  }
  plVar14 = (long *)(lVar25 + 0x338);
  puVar5 = &stack0xfffffffffffffff0;
SUB_10a32a860:
  *(long **)(puVar5 + -0x30) = unaff_x22;
  *(long **)(puVar5 + -0x28) = unaff_x21;
  *(long *)(puVar5 + -0x20) = unaff_x20;
  *(long **)(puVar5 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar5 + -0x10) = puVar28;
  *(code **)(puVar5 + -8) = pcStack_18;
  plVar26 = (long *)plVar14[1];
  if (plVar26 < (long *)plVar14[2]) {
    lVar23 = plVar8[1];
    lVar25 = *plVar8;
    lVar34 = plVar8[3];
    lVar32 = plVar8[2];
    lVar35 = plVar8[4];
    lVar37 = plVar8[7];
    lVar36 = plVar8[6];
    plVar26[5] = plVar8[5];
    plVar26[4] = lVar35;
    plVar26[7] = lVar37;
    plVar26[6] = lVar36;
    plVar26[1] = lVar23;
    *plVar26 = lVar25;
    plVar26[3] = lVar34;
    plVar26[2] = lVar32;
    plVar26 = plVar26 + 8;
    plVar8 = plVar14;
  }
  else {
    lVar25 = (long)plVar26 - *plVar14;
    uVar27 = (lVar25 >> 6) + 1;
    if (uVar27 >> 0x3a != 0) {
      plVar26 = plVar14;
      plVar24 = plVar8;
      FUN_10a0435cc();
      *(long *)(puVar5 + -0x90) = unaff_x28;
      *(long **)(puVar5 + -0x88) = unaff_x27;
      *(undefined8 *)(puVar5 + -0x80) = unaff_x26;
      *(undefined8 *)(puVar5 + -0x78) = unaff_x25;
      *(long **)(puVar5 + -0x70) = unaff_x24;
      *(long **)(puVar5 + -0x68) = unaff_x23;
      *(long **)(puVar5 + -0x60) = unaff_x22;
      *(long *)(puVar5 + -0x58) = lVar25;
      *(long **)(puVar5 + -0x50) = plVar8;
      *(long **)(puVar5 + -0x48) = plVar14;
      *(undefined1 **)(puVar5 + -0x40) = puVar5 + -0x10;
      *(code **)(puVar5 + -0x38) = FUN_10a32a938;
      puVar28 = puVar5 + -0x40;
      *(undefined8 *)(puVar5 + -0xa8) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      uVar27 = plVar24[1];
      if (-1 < (char)*(byte *)((long)plVar24 + 0x17)) {
        uVar27 = (ulong)*(byte *)((long)plVar24 + 0x17);
      }
      unaff_x22 = (long *)(puVar5 + -0xf0);
      FUN_10a003c90(puVar5 + -0xf0,uVar27 + 1,puVar5 + -0x1b8);
      if (uVar27 != 0) {
        plVar8 = (long *)*plVar24;
        if (-1 < *(char *)((long)plVar24 + 0x17)) {
          plVar8 = plVar24;
        }
        _memmove(unaff_x22,plVar8,uVar27);
      }
      *(undefined2 *)((long)unaff_x22 + uVar27) = 0x2f;
      puVar13 = &UNK_10f64f440;
      puVar9 = (undefined8 *)(puVar5 + -0xf0);
      plVar14 = (long *)0xe;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar9,&UNK_10f64f440,0xe);
      uVar31 = puVar9[1];
      uVar30 = *puVar9;
      *(undefined8 *)(puVar5 + -0x160) = puVar9[2];
      *(undefined8 *)(puVar5 + -0x168) = uVar31;
      *(undefined8 *)(puVar5 + -0x170) = uVar30;
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = 0;
      plVar8 = (long *)(puVar5 + -0x170);
      FUN_10ad01a04();
      if ((int)plVar8 != 0) {
        FUN_10ad01b0c(puVar5 + -0x188,puVar5 + -0x170);
        *(undefined1 **)(puVar5 + -0x1b8) = puVar5 + -0x1b0;
        *(undefined8 *)(puVar5 + -0x1b0) = 0;
        *(undefined1 **)(puVar5 + -0x260) = puVar5 + -0x1b0;
        *(undefined8 *)(puVar5 + -0x1a8) = 0;
        *(undefined8 *)(puVar5 + -0x1a0) = 0;
        *(undefined8 *)(puVar5 + -0x198) = 0;
        *(undefined8 *)(puVar5 + -400) = 0;
        func_0x00010983a984(puVar5 + -0x1b8,puVar5 + -0x188);
        puVar9 = (undefined8 *)0x20;
        __Znwm();
        *(undefined8 **)(puVar5 + -0xf0) = puVar9;
        *(undefined8 *)(puVar5 + -0xe0) = 0x8000000000000020;
        *(undefined8 *)(puVar5 + -0xe8) = 0x1e;
        puVar9[1] = 0x626f5f666f5f7265;
        *puVar9 = 0x626d756e5f78616d;
        *(undefined8 *)((long)puVar9 + 0x16) = 0x6b636172745f6f74;
        *(undefined8 *)((long)puVar9 + 0xe) = 0x5f737463656a626f;
        *(undefined1 *)((long)puVar9 + 0x1e) = 0;
        *(double *)(puVar5 + -0x1e8) = (double)*(int *)((long)plVar26 + 0x1c);
        pdVar10 = (double *)(puVar5 + -0x1b8);
        FUN_10a32c3a8(pdVar10,puVar5 + -0xf0,puVar5 + -0x1e8);
        *(int *)((long)plVar26 + 0x1c) = (int)*pdVar10;
        puVar5[-0xd9] = 0xc;
        *(undefined4 *)(puVar5 + -0xe8) = 0x736c6562;
        *(undefined8 *)(puVar5 + -0xf0) = 0x616c5f746e657665;
        puVar5[-0xe4] = 0;
        FUN_10a32c428(puVar5 + -0x1b8,puVar5 + -0xf0,plVar26 + 8);
        puVar5[-0xd9] = 6;
        *(undefined4 *)(puVar5 + -0xf0) = 0x6562616c;
        *(undefined2 *)(puVar5 + -0xec) = 0x736c;
        puVar5[-0xea] = 0;
        FUN_10a32c428(puVar5 + -0x1b8,puVar5 + -0xf0,plVar26 + 5);
        puVar5[-0xd9] = 0xf;
        *(undefined8 *)(puVar5 + -0xf0) = 0x6b72616d646e616c;
        *(undefined8 *)(puVar5 + -0xe9) = 0x736c6562616c5f6b;
        puVar5[-0xe1] = 0;
        FUN_10a32c428(puVar5 + -0x1b8,puVar5 + -0xf0,plVar26 + 0xb);
        puVar5[-0xd9] = 0xf;
        *(undefined8 *)(puVar5 + -0xf0) = 0x6e6f697461746f72;
        *(undefined8 *)(puVar5 + -0xe9) = 0x736c6562616c5f6e;
        puVar5[-0xe1] = 0;
        FUN_10a32c428(puVar5 + -0x1b8,puVar5 + -0xf0,plVar26 + 0xe);
        puVar5[-0xd9] = 0xc;
        *(undefined4 *)(puVar5 + -0xe8) = 0x736c6562;
        *(undefined8 *)(puVar5 + -0xf0) = 0x616c5f736b73616d;
        puVar5[-0xe4] = 0;
        FUN_10a32c428(puVar5 + -0x1b8,puVar5 + -0xf0,plVar26 + 0x11);
        *(long **)(puVar5 + -0x240) = plVar26 + 0x14;
        func_0x00010a35ced0();
        func_0x000107c2b054(puVar5 + -0x110,&UNK_10f64f44f);
        *(undefined1 **)(puVar5 + -0xf0) = puVar5 + -0xe8;
        *(undefined8 *)(puVar5 + -0xe8) = 0;
        *(undefined8 *)(puVar5 + -0xe0) = 0;
        *(undefined8 *)(puVar5 + -0xd8) = 0;
        *(undefined8 *)(puVar5 + -0xd0) = 0;
        *(undefined8 *)(puVar5 + -200) = 0;
        puVar12 = puVar5 + -0x1b8;
        FUN_10a10a278(puVar12,puVar5 + -0x110);
        if ((*(undefined1 **)(puVar5 + -0x260) == puVar12) || (**(int **)(puVar12 + 0x38) != 5)) {
          puVar12 = puVar5 + -0xf0;
          unaff_x19 = unaff_x22;
        }
        else {
          puVar12 = puVar5 + -0x1b8;
          FUN_10a10a278(puVar12,puVar5 + -0x110);
          unaff_x19 = *(long **)(puVar12 + 0x38);
          func_0x0001098390a4(&UNK_10f63c7bf,0x1e5,&UNK_10f6514b1,(int)*unaff_x19 == 5);
          puVar12 = (undefined1 *)unaff_x19[1];
        }
        func_0x00010983a670(puVar5 + -0x1e8,puVar12);
        func_0x000109839668(puVar5 + -0xf0);
        if (*(long *)(puVar5 + -0x1d8) == 0) {
          *(undefined8 *)(puVar5 + -0x110) = 0;
          *(undefined8 *)(puVar5 + -0x108) = 0;
          *(undefined8 *)(puVar5 + -0x100) = 0;
          *(undefined8 *)(puVar5 + -0x130) = 0;
          *(undefined8 *)(puVar5 + -0x128) = 0;
          *(undefined8 *)(puVar5 + -0x120) = 0;
          puVar9 = (undefined8 *)0x20;
          __Znwm();
          *(undefined8 **)(puVar5 + -0xf0) = puVar9;
          *(undefined8 *)(puVar5 + -0xe0) = 0x8000000000000020;
          *(undefined8 *)(puVar5 + -0xe8) = 0x19;
          puVar9[1] = 0x746e696f705f746e;
          *puVar9 = 0x656d686361747461;
          *(undefined8 *)((long)puVar9 + 0x11) = 0x656d616e5f64335f;
          *(undefined8 *)((long)puVar9 + 9) = 0x73746e696f705f74;
          *(undefined1 *)((long)puVar9 + 0x19) = 0;
          FUN_10a32c428(puVar5 + -0x1b8,puVar5 + -0xf0,puVar5 + -0x110);
          puVar9 = (undefined8 *)0x28;
          __Znwm();
          *(undefined8 **)(puVar5 + -0xf0) = puVar9;
          *(undefined8 *)(puVar5 + -0xe0) = 0x8000000000000028;
          *(undefined8 *)(puVar5 + -0xe8) = 0x20;
          puVar9[1] = 0x746e696f705f746e;
          *puVar9 = 0x656d686361747461;
          puVar9[3] = 0x656d616e5f746e65;
          puVar9[2] = 0x7261705f64335f73;
          *(undefined1 *)(puVar9 + 4) = 0;
          FUN_10a32c428(puVar5 + -0x1b8,puVar5 + -0xf0,puVar5 + -0x130);
          *(undefined8 *)(puVar5 + -0xf0) = 0;
          *(undefined8 *)(puVar5 + -0xe8) = 0;
          *(undefined8 *)(puVar5 + -0xe0) = 0;
          FUN_10a0cf0cc(puVar5 + -0xf0,*(long *)(puVar5 + -0x110),*(long *)(puVar5 + -0x108),
                        (*(long *)(puVar5 + -0x108) - *(long *)(puVar5 + -0x110) >> 3) *
                        -0x5555555555555555);
          *(undefined8 *)(puVar5 + -0xd8) = 0;
          *(undefined8 *)(puVar5 + -0xd0) = 0;
          *(undefined8 *)(puVar5 + -200) = 0;
          FUN_10a0cf0cc(puVar5 + -0xd8,*(long *)(puVar5 + -0x130),*(long *)(puVar5 + -0x128),
                        (*(long *)(puVar5 + -0x128) - *(long *)(puVar5 + -0x130) >> 3) *
                        -0x5555555555555555);
          *(undefined8 *)(puVar5 + -0xc0) = 0;
          *(undefined8 *)(puVar5 + -0xb8) = 0;
          *(undefined8 *)(puVar5 + -0xb0) = 0;
          FUN_10a35cf24(*(undefined8 *)(puVar5 + -0x240),puVar5 + -0xf0);
          if (*(long *)(puVar5 + -0xc0) != 0) {
            *(long *)(puVar5 + -0xb8) = *(long *)(puVar5 + -0xc0);
            __ZdlPv();
          }
          *(undefined1 **)(puVar5 + -0x150) = puVar5 + -0xd8;
          FUN_10a0426d8(puVar5 + -0x150);
          *(undefined1 **)(puVar5 + -0x150) = puVar5 + -0xf0;
          FUN_10a0426d8(puVar5 + -0x150);
          *(undefined1 **)(puVar5 + -0xf0) = puVar5 + -0x130;
          FUN_10a0426d8(puVar5 + -0xf0);
          *(undefined1 **)(puVar5 + -0xf0) = puVar5 + -0x110;
          FUN_10a0426d8(puVar5 + -0xf0);
        }
        else {
          func_0x000109839e84(puVar5 + -0x200,puVar5 + -0x1e8);
          *(undefined8 *)(puVar5 + -0xd8) = 0;
          func_0x0001094749d8(puVar5 + -0x110,puVar5 + -0x200,puVar5 + -0xf0,1,0);
          func_0x000109380c8c(puVar5 + -0x220,puVar5 + -0x110);
          func_0x000109380ffc(puVar5 + -0x108,puVar5[-0x110]);
          plVar8 = *(long **)(puVar5 + -0xd8);
          if (plVar8 == (long *)(puVar5 + -0xf0)) {
            lVar25 = 0x20;
LAB_10a32aeac:
            (**(code **)(*plVar8 + lVar25))();
          }
          else if (plVar8 != (long *)0x0) {
            lVar25 = 0x28;
            goto LAB_10a32aeac;
          }
          *(long **)(puVar5 + -0x248) = plVar26;
          func_0x0001094a72dc(puVar5 + -0x130,puVar5 + -0x220);
          unaff_x21 = *(long **)(puVar5 + -0x130);
          *(long **)(puVar5 + -0x250) = *(long **)(puVar5 + -0x128);
          if (unaff_x21 != *(long **)(puVar5 + -0x128)) {
            *(long *)(puVar5 + -600) = *(long *)(puVar5 + -0x248) + 0xb0;
            unaff_x25 = 0xaaaaaaaaaaaaaaab;
            unaff_x26 = 0x18;
            do {
              func_0x0001094a68cc(puVar5 + -0x110,puVar5 + -0x220,unaff_x21);
              func_0x0001094cb264(puVar5 + -0x138,puVar5 + -0x110);
              func_0x000109380f8c(puVar5 + -0x110);
              *(undefined8 *)(puVar5 + -0x148) = 0;
              *(undefined8 *)(puVar5 + -0x140) = 0;
              *(undefined8 *)(puVar5 + -0x150) = 0;
              lVar25 = **(long **)(puVar5 + -0x138);
              lVar23 = (*(long **)(puVar5 + -0x138))[1];
              func_0x0001094cd180(puVar5 + -0x150,lVar25,lVar23,
                                  (lVar23 - lVar25 >> 3) * -0x79435e50d79435e5);
              unaff_x20 = *(long *)(puVar5 + -0x150);
              lVar25 = *(long *)(puVar5 + -0x148);
              plVar8 = *(long **)(puVar5 + -0x240);
              func_0x000107c2b05c(plVar8,unaff_x21);
              unaff_x27 = *(long **)(*(long *)(puVar5 + -0x248) + 0xa8);
              if (unaff_x27 != (long *)0x0) {
                uVar27 = (long)unaff_x27 - 1;
                if (((ulong)unaff_x27 & uVar27) == 0) {
                  unaff_x19 = (long *)(uVar27 & (ulong)plVar8);
                }
                else {
                  unaff_x19 = plVar8;
                  if (unaff_x27 <= plVar8) {
                    uVar21 = 0;
                    if (unaff_x27 != (long *)0x0) {
                      uVar21 = (ulong)plVar8 / (ulong)unaff_x27;
                    }
                    unaff_x19 = (long *)((long)plVar8 - uVar21 * (long)unaff_x27);
                  }
                }
                unaff_x28 = lVar25;
                if (*(undefined8 **)(**(long **)(puVar5 + -0x240) + (long)unaff_x19 * 8) !=
                    (undefined8 *)0x0) {
                  for (unaff_x22 = (long *)**(undefined8 **)
                                             (**(long **)(puVar5 + -0x240) + (long)unaff_x19 * 8);
                      unaff_x22 != (long *)0x0; unaff_x22 = (long *)*unaff_x22) {
                    plVar14 = (long *)unaff_x22[1];
                    if (plVar14 == plVar8) {
                      uVar21 = *(ulong *)(puVar5 + -0x240);
                      func_0x000107c2b068(uVar21,unaff_x22 + 2,unaff_x21);
                      if ((uVar21 & 1) != 0) goto LAB_10a32b17c;
                    }
                    else {
                      if (((ulong)unaff_x27 & uVar27) == 0) {
                        plVar14 = (long *)((ulong)plVar14 & uVar27);
                      }
                      else if (unaff_x27 <= plVar14) {
                        uVar21 = 0;
                        if (unaff_x27 != (long *)0x0) {
                          uVar21 = (ulong)plVar14 / (ulong)unaff_x27;
                        }
                        plVar14 = (long *)((long)plVar14 - uVar21 * (long)unaff_x27);
                      }
                      if (plVar14 != unaff_x19) break;
                    }
                  }
                }
              }
              unaff_x22 = (long *)0x70;
              __Znwm();
              *(long **)(puVar5 + -0x110) = unaff_x22;
              *(undefined8 *)(puVar5 + -0x108) = *(undefined8 *)(puVar5 + -0x240);
              *(undefined8 *)(puVar5 + -0x100) = 0;
              *unaff_x22 = 0;
              unaff_x22[1] = (long)plVar8;
              if (*(char *)((long)unaff_x21 + 0x17) < '\0') {
                func_0x000107c3192c(unaff_x22 + 2,*unaff_x21,unaff_x21[1]);
              }
              else {
                lVar32 = unaff_x21[1];
                lVar23 = *unaff_x21;
                unaff_x22[4] = unaff_x21[2];
                unaff_x22[3] = lVar32;
                unaff_x22[2] = lVar23;
              }
              unaff_x22[0xd] = 0;
              unaff_x22[0xc] = 0;
              unaff_x22[0xb] = 0;
              unaff_x22[10] = 0;
              unaff_x22[9] = 0;
              unaff_x22[8] = 0;
              unaff_x22[7] = 0;
              unaff_x22[6] = 0;
              unaff_x22[5] = 0;
              puVar5[-0x100] = 1;
              fVar29 = (float)(*(long *)(*(long *)(puVar5 + -0x248) + 0xb8) + 1);
              fVar33 = *(float *)(*(long *)(puVar5 + -0x248) + 0xc0);
              if ((unaff_x27 == (long *)0x0) || (fVar33 * (float)unaff_x27 < fVar29)) {
                uVar27 = 1;
                if ((long *)0x2 < unaff_x27) {
                  uVar27 = (ulong)(((ulong)unaff_x27 & (long)unaff_x27 - 1U) != 0);
                }
                uVar27 = uVar27 | (long)unaff_x27 << 1;
                uVar21 = (ulong)(fVar29 / fVar33);
                if (uVar27 <= uVar21) {
                  uVar27 = uVar21;
                }
                FUN_10a35ccb8(*(undefined8 *)(puVar5 + -0x240),uVar27);
                unaff_x27 = *(long **)(*(long *)(puVar5 + -0x248) + 0xa8);
                if (((ulong)unaff_x27 & (long)unaff_x27 - 1U) == 0) {
                  unaff_x19 = (long *)((long)unaff_x27 - 1U & (ulong)plVar8);
                }
                else {
                  unaff_x19 = plVar8;
                  if (unaff_x27 <= plVar8) {
                    uVar27 = 0;
                    if (unaff_x27 != (long *)0x0) {
                      uVar27 = (ulong)plVar8 / (ulong)unaff_x27;
                    }
                    unaff_x19 = (long *)((long)plVar8 - uVar27 * (long)unaff_x27);
                  }
                }
              }
              lVar23 = **(long **)(puVar5 + -0x240);
              plVar8 = *(long **)(lVar23 + (long)unaff_x19 * 8);
              if (plVar8 == (long *)0x0) {
                plVar8 = *(long **)(puVar5 + -600);
                *unaff_x22 = *plVar8;
                *plVar8 = (long)unaff_x22;
                *(long **)(lVar23 + (long)unaff_x19 * 8) = plVar8;
                if (*unaff_x22 != 0) {
                  plVar8 = *(long **)(*unaff_x22 + 8);
                  if (((ulong)unaff_x27 & (long)unaff_x27 - 1U) == 0) {
                    plVar8 = (long *)((ulong)plVar8 & (long)unaff_x27 - 1U);
                  }
                  else if (unaff_x27 <= plVar8) {
                    uVar27 = 0;
                    if (unaff_x27 != (long *)0x0) {
                      uVar27 = (ulong)plVar8 / (ulong)unaff_x27;
                    }
                    plVar8 = (long *)((long)plVar8 - uVar27 * (long)unaff_x27);
                  }
                  *(long **)(**(long **)(puVar5 + -0x240) + (long)plVar8 * 8) = unaff_x22;
                }
              }
              else {
                *unaff_x22 = *plVar8;
                *plVar8 = (long)unaff_x22;
              }
              *(long *)(*(long *)(puVar5 + -0x248) + 0xb8) =
                   *(long *)(*(long *)(puVar5 + -0x248) + 0xb8) + 1;
LAB_10a32b17c:
              lVar25 = (lVar25 - unaff_x20 >> 3) * -0x79435e50d79435e5;
              FUN_10a042718(unaff_x22 + 5);
              func_0x000107c31930(unaff_x22 + 5,lVar25);
              FUN_10a042718(unaff_x22 + 8);
              func_0x000107c31930(unaff_x22 + 8,lVar25);
              plVar14 = unaff_x22 + 0xb;
              unaff_x22[0xc] = *plVar14;
              FUN_10a32a7d4(plVar14,lVar25);
              unaff_x19 = *(long **)(puVar5 + -0x150);
              unaff_x24 = *(long **)(puVar5 + -0x148);
              if (unaff_x19 != unaff_x24) goto code_r0x00010a32b1e4;
              *(undefined1 **)(puVar5 + -0x110) = puVar5 + -0x150;
              FUN_10a34e6f0(puVar5 + -0x110);
              lVar25 = *(long *)(puVar5 + -0x138);
              *(undefined8 *)(puVar5 + -0x138) = 0;
              if (lVar25 != 0) {
                func_0x0001094cf2b0(puVar5 + -0x138);
              }
              unaff_x21 = unaff_x21 + 3;
              if (unaff_x21 == *(long **)(puVar5 + -0x250)) break;
            } while( true );
          }
          *(undefined1 **)(puVar5 + -0x110) = puVar5 + -0x130;
          FUN_10a0426d8(puVar5 + -0x110);
          func_0x000109380f8c(puVar5 + -0x220);
          if ((char)puVar5[-0x1e9] < '\0') {
            __ZdlPv(*(undefined8 *)(puVar5 + -0x200));
          }
          plVar26 = *(long **)(puVar5 + -0x248);
        }
        *(undefined8 *)(puVar5 + -0xf0) = 0;
        *(undefined8 *)(puVar5 + -0xe8) = 0;
        func_0x00010a32c640(plVar26 + 0x19,puVar5 + -0xf0);
        plVar8 = *(long **)(puVar5 + -0xe8);
        if (plVar8 != (long *)0x0) {
          plVar14 = plVar8 + 1;
          do {
            lVar25 = *plVar14;
            cVar3 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar6) {
              *plVar14 = lVar25 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar25 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
        puVar5[-0xd9] = 0xd;
        *(undefined8 *)(puVar5 + -0xf0) = 0x665f646564697567;
        plVar24 = (long *)0x7265746c69665f64;
        *(undefined8 *)(puVar5 + -0xeb) = 0x7265746c69665f64;
        puVar5[-0xe3] = 0;
        puVar12 = puVar5 + -0x1b8;
        FUN_10a10a278(puVar12,puVar5 + -0xf0);
        if (*(undefined1 **)(puVar5 + -0x260) == puVar12) {
          uVar27 = 0;
        }
        else {
          uVar27 = (ulong)(**(int **)(puVar12 + 0x38) == 5);
        }
        if ((int)uVar27 != 0) {
          puVar5[-0xf9] = 0xd;
          *(undefined8 *)(puVar5 + -0x110) = 0x665f646564697567;
          *(undefined8 *)(puVar5 + -0x10b) = 0x7265746c69665f64;
          puVar5[-0x103] = 0;
          puVar12 = puVar5 + -0x1b8;
          FUN_10a10a278(puVar12,puVar5 + -0x110);
          if (*(undefined1 **)(puVar5 + -0x260) == puVar12) {
            bVar6 = false;
          }
          else {
            bVar6 = **(int **)(puVar12 + 0x38) == 5;
          }
          func_0x0001098390a4(&UNK_10f63c7bf,0x18b,&UNK_10f63cc4d,bVar6);
          puVar12 = puVar5 + -0x1b8;
          func_0x00010983b55c(puVar12,puVar5 + -0x110);
          piVar22 = *(int **)(puVar12 + 0x38);
          func_0x0001098390a4(&UNK_10f63c7bf,0x1e5,&UNK_10f6514b1,*piVar22 == 5);
          func_0x00010983a670(puVar5 + -0xf0,*(undefined8 *)(piVar22 + 2));
          puVar9 = (undefined8 *)0x48;
          __Znwm();
          puVar9[1] = 0;
          puVar9[2] = 0;
          *puVar9 = &PTR_FUN_110bc66a8;
          puVar9[4] = 0x10000000080;
          puVar9[3] = 0x8000000000;
          puVar9[5] = 0x3bf5c28f00000100;
          puVar9[6] = 0x3f80000000000000;
          puVar9[7] = 0x200000002;
          *(undefined4 *)(puVar9 + 8) = 1;
          *(undefined8 **)(puVar5 + -0x110) = puVar9 + 3;
          *(undefined8 **)(puVar5 + -0x108) = puVar9;
          func_0x00010a32c640(plVar26 + 0x19,puVar5 + -0x110);
          plVar24 = *(long **)(puVar5 + -0x108);
          if (plVar24 != (long *)0x0) {
            plVar8 = plVar24 + 1;
            do {
              lVar25 = *plVar8;
              cVar3 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar6) {
                *plVar8 = lVar25 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar25 == 0) {
              (**(code **)(*plVar24 + 0x10))(plVar24);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar24);
            }
          }
          *(undefined1 *)plVar26[0x19] = 1;
          puVar5[-0xf9] = 0x14;
          *(undefined4 *)(puVar5 + -0x100) = 0x68746469;
          *(undefined8 *)(puVar5 + -0x108) = 0x775f676e69737365;
          *(undefined8 *)(puVar5 + -0x110) = 0x636f72705f6e696d;
          puVar5[-0xfc] = 0;
          pdVar10 = (double *)(puVar5 + -0xf0);
          func_0x00010a32c6a4(pdVar10,puVar5 + -0x110);
          *(int *)(plVar26[0x19] + 4) = (int)*pdVar10;
          puVar5[-0xf9] = 0x15;
          *(undefined8 *)(puVar5 + -0x108) = 0x685f676e69737365;
          *(undefined8 *)(puVar5 + -0x110) = 0x636f72705f6e696d;
          *(undefined8 *)(puVar5 + -0x103) = 0x7468676965685f67;
          puVar5[-0xfb] = 0;
          pdVar10 = (double *)(puVar5 + -0xf0);
          func_0x00010a32c6a4(pdVar10,puVar5 + -0x110);
          *(int *)(plVar26[0x19] + 8) = (int)*pdVar10;
          puVar5[-0xf9] = 0x14;
          *(undefined4 *)(puVar5 + -0x100) = 0x68746469;
          *(undefined8 *)(puVar5 + -0x108) = 0x775f657275747865;
          *(undefined8 *)(puVar5 + -0x110) = 0x745f74757074756f;
          puVar5[-0xfc] = 0;
          pdVar10 = (double *)(puVar5 + -0xf0);
          func_0x00010a32c6a4(pdVar10,puVar5 + -0x110);
          *(int *)(plVar26[0x19] + 0xc) = (int)*pdVar10;
          puVar5[-0xf9] = 0x15;
          *(undefined8 *)(puVar5 + -0x108) = 0x685f657275747865;
          *(undefined8 *)(puVar5 + -0x110) = 0x745f74757074756f;
          *(undefined8 *)(puVar5 + -0x103) = 0x7468676965685f65;
          puVar5[-0xfb] = 0;
          pdVar10 = (double *)(puVar5 + -0xf0);
          func_0x00010a32c6a4(pdVar10,puVar5 + -0x110);
          *(int *)(plVar26[0x19] + 0x10) = (int)*pdVar10;
          puVar5[-0xf9] = 10;
          *(undefined2 *)(puVar5 + -0x108) = 0x7173;
          *(undefined8 *)(puVar5 + -0x110) = 0x5f6e6f6c69737065;
          puVar5[-0x106] = 0;
          pdVar10 = (double *)(puVar5 + -0xf0);
          func_0x00010a32c6a4(pdVar10,puVar5 + -0x110);
          *(float *)(plVar26[0x19] + 0x14) = (float)*pdVar10;
          puVar5[-0x119] = 0x14;
          *(undefined4 *)(puVar5 + -0x120) = 0x65707974;
          *(undefined8 *)(puVar5 + -0x128) = 0x5f676e6973736563;
          *(undefined8 *)(puVar5 + -0x130) = 0x6f72705f6b73616d;
          puVar5[-0x11c] = 0;
          puVar12 = puVar5 + -0xf0;
          FUN_10a10a278(puVar12,puVar5 + -0x130);
          if (puVar5 + -0xe8 == puVar12) {
            bVar6 = false;
          }
          else {
            bVar6 = **(int **)(puVar12 + 0x38) == 1;
          }
          func_0x0001098390a4(&UNK_10f63c7bf,0x18b,&UNK_10f63cc4d,bVar6);
          puVar12 = puVar5 + -0xf0;
          func_0x00010983b55c(puVar12,puVar5 + -0x130);
          piVar22 = *(int **)(puVar12 + 0x38);
          func_0x0001098390a4(&UNK_10f63c7bf,0x1d3,&UNK_10f580d70,*piVar22 == 1);
          puVar9 = *(undefined8 **)(piVar22 + 2);
          if (*(char *)((long)puVar9 + 0x17) < '\0') {
            func_0x000107c3192c(puVar5 + -0x110,*puVar9,puVar9[1]);
          }
          else {
            uVar31 = puVar9[1];
            uVar30 = *puVar9;
            *(undefined8 *)(puVar5 + -0x100) = puVar9[2];
            *(undefined8 *)(puVar5 + -0x108) = uVar31;
            *(undefined8 *)(puVar5 + -0x110) = uVar30;
          }
          lVar25 = plVar26[0x19];
          *(undefined4 *)(lVar25 + 0x18) = 0;
          cVar3 = puVar5[-0xf9];
          if (cVar3 < '\0') {
            lVar23 = *(long *)(puVar5 + -0x108);
            if (lVar23 != 5) {
              if (lVar23 == 6) {
                if (**(int **)(puVar5 + -0x110) == 0x6f6f6d73 &&
                    (short)(*(int **)(puVar5 + -0x110))[1] == 0x6874) goto LAB_10a32b898;
              }
              else if ((lVar23 == 0xe) &&
                      (**(long **)(puVar5 + -0x110) == 0x696c7069746c756d &&
                       *(long *)((long)*(long **)(puVar5 + -0x110) + 6) == 0x6e6f69746163696c))
              goto LAB_10a32b840;
              goto LAB_10a32b934;
            }
            piVar22 = *(int **)(puVar5 + -0x110);
LAB_10a32b8a8:
            if (*piVar22 == 0x6c616373 && (char)piVar22[1] == 'e') {
              *(undefined4 *)(lVar25 + 0x18) = 3;
              puVar9 = (undefined8 *)0x20;
              __Znwm();
              *(undefined8 **)(puVar5 + -0x130) = puVar9;
              *(undefined8 *)(puVar5 + -0x120) = 0x8000000000000020;
              *(undefined8 *)(puVar5 + -0x128) = 0x1a;
              puVar9[1] = 0x5f676e6973736563;
              *puVar9 = 0x6f72705f6b73616d;
              *(undefined8 *)((long)puVar9 + 0x12) = 0x7265696c7069746c;
              *(undefined8 *)((long)puVar9 + 10) = 0x756d5f676e697373;
              *(undefined1 *)((long)puVar9 + 0x1a) = 0;
              pdVar10 = (double *)(puVar5 + -0xf0);
              func_0x00010a32c6a4(pdVar10,puVar5 + -0x130);
              *(float *)(plVar26[0x19] + 0x1c) = (float)*pdVar10;
            }
          }
          else {
            if (cVar3 == '\x05') {
              piVar22 = (int *)(puVar5 + -0x110);
              goto LAB_10a32b8a8;
            }
            if (cVar3 == '\x06') {
              if (*(int *)(puVar5 + -0x110) == 0x6f6f6d73 && *(short *)(puVar5 + -0x10c) == 0x6874)
              {
LAB_10a32b898:
                uVar16 = 1;
                goto LAB_10a32b89c;
              }
            }
            else if ((cVar3 == '\x0e') &&
                    (*(long *)(puVar5 + -0x110) == 0x696c7069746c756d &&
                     *(long *)(puVar5 + -0x10a) == 0x6e6f69746163696c)) {
LAB_10a32b840:
              uVar16 = 2;
LAB_10a32b89c:
              *(undefined4 *)(lVar25 + 0x18) = uVar16;
            }
          }
LAB_10a32b934:
          puVar9 = (undefined8 *)0x20;
          __Znwm();
          *(undefined8 **)(puVar5 + -0x150) = puVar9;
          *(undefined8 *)(puVar5 + -0x140) = 0x8000000000000020;
          *(undefined8 *)(puVar5 + -0x148) = 0x18;
          puVar9[1] = 0x697665645f64696f;
          *puVar9 = 0x72646e615f6e696d;
          puVar9[2] = 0x7373616c635f6563;
          *(undefined1 *)(puVar9 + 3) = 0;
          func_0x000107c2b054(puVar5 + -0x200,&UNK_10f64efef);
          puVar9 = (undefined8 *)(puVar5 + -0xf0);
          func_0x00010a32c744(puVar9,puVar5 + -0x150,puVar5 + -0x200);
          if (*(char *)((long)puVar9 + 0x17) < '\0') {
            func_0x000107c3192c(puVar5 + -0x130,*puVar9,puVar9[1]);
          }
          else {
            uVar31 = puVar9[1];
            uVar30 = *puVar9;
            *(undefined8 *)(puVar5 + -0x120) = puVar9[2];
            *(undefined8 *)(puVar5 + -0x128) = uVar31;
            *(undefined8 *)(puVar5 + -0x130) = uVar30;
          }
          if ((char)puVar5[-0x1e9] < '\0') {
            __ZdlPv(*(undefined8 *)(puVar5 + -0x200));
          }
          if ((char)puVar5[-0x139] < '\0') {
            __ZdlPv(*(undefined8 *)(puVar5 + -0x150));
          }
          cVar3 = puVar5[-0x119];
          if (cVar3 < '\0') {
            if (*(long *)(puVar5 + -0x128) == 3) {
              puVar18 = *(ushort **)(puVar5 + -0x130);
              if (*puVar18 == 0x6f6c && (char)puVar18[1] == 'w') goto LAB_10a32bc04;
              uVar15 = *puVar18 ^ 0x696d | (byte)puVar18[1] ^ 100;
LAB_10a32bab8:
              uVar16 = 2;
            }
            else {
              if (*(long *)(puVar5 + -0x128) != 4) goto LAB_10a32ba38;
              puVar17 = *(uint **)(puVar5 + -0x130);
LAB_10a32ba10:
              uVar15 = (*puVar17 & 0xff00ff00) >> 8 | (*puVar17 & 0xff00ff) << 8;
              uVar2 = uVar15 >> 0x10 | uVar15 << 0x10;
              uVar15 = (uint)(0x68696768 < uVar2);
              if (uVar2 < 0x68696768) {
                uVar15 = 0xffffffff;
              }
              uVar16 = 3;
            }
            if (uVar15 != 0) {
              uVar16 = 0xffffffff;
            }
          }
          else if (cVar3 == '\x03') {
            if (*(short *)(puVar5 + -0x130) != 0x6f6c || puVar5[-0x12e] != 'w') {
              uVar15 = *(ushort *)(puVar5 + -0x130) ^ 0x696d | (byte)puVar5[-0x12e] ^ 100;
              goto LAB_10a32bab8;
            }
LAB_10a32bc04:
            uVar16 = 1;
          }
          else {
            if (cVar3 == '\x04') {
              puVar17 = (uint *)(puVar5 + -0x130);
              goto LAB_10a32ba10;
            }
LAB_10a32ba38:
            uVar16 = 0xffffffff;
          }
          *(undefined4 *)(plVar26[0x19] + 0x20) = uVar16;
          puVar5[-0x1e9] = 0x14;
          *(undefined4 *)(puVar5 + -0x1f0) = 0x7373616c;
          *(undefined8 *)(puVar5 + -0x1f8) = 0x635f656369766564;
          *(undefined8 *)(puVar5 + -0x200) = 0x5f736f695f6e696d;
          puVar5[-0x1ec] = 0;
          func_0x000107c2b054(puVar5 + -0x220,&UNK_10f64efef);
          puVar9 = (undefined8 *)(puVar5 + -0xf0);
          func_0x00010a32c744(puVar9,puVar5 + -0x200,puVar5 + -0x220);
          if (*(char *)((long)puVar9 + 0x17) < '\0') {
            func_0x000107c3192c(puVar5 + -0x150,*puVar9,puVar9[1]);
          }
          else {
            uVar31 = puVar9[1];
            uVar30 = *puVar9;
            *(undefined8 *)(puVar5 + -0x140) = puVar9[2];
            *(undefined8 *)(puVar5 + -0x148) = uVar31;
            *(undefined8 *)(puVar5 + -0x150) = uVar30;
          }
          if ((char)puVar5[-0x209] < '\0') {
            __ZdlPv(*(undefined8 *)(puVar5 + -0x220));
          }
          if ((char)puVar5[-0x1e9] < '\0') {
            __ZdlPv(*(undefined8 *)(puVar5 + -0x200));
          }
          cVar3 = puVar5[-0x139];
          if (cVar3 < '\0') {
            if (*(long *)(puVar5 + -0x148) == 3) {
              puVar18 = *(ushort **)(puVar5 + -0x150);
              if (*puVar18 == 0x6f6c && (char)puVar18[1] == 'w') goto LAB_10a32bda4;
              uVar15 = *puVar18 ^ 0x696d | (byte)puVar18[1] ^ 100;
LAB_10a32bc48:
              uVar16 = 2;
            }
            else {
              if (*(long *)(puVar5 + -0x148) != 4) goto LAB_10a32bbc0;
              puVar17 = *(uint **)(puVar5 + -0x150);
LAB_10a32bb98:
              uVar15 = (*puVar17 & 0xff00ff00) >> 8 | (*puVar17 & 0xff00ff) << 8;
              uVar2 = uVar15 >> 0x10 | uVar15 << 0x10;
              uVar15 = (uint)(0x68696768 < uVar2);
              if (uVar2 < 0x68696768) {
                uVar15 = 0xffffffff;
              }
              uVar16 = 3;
            }
            if (uVar15 != 0) {
              uVar16 = 0xffffffff;
            }
          }
          else if (cVar3 == '\x03') {
            if (*(short *)(puVar5 + -0x150) != 0x6f6c || puVar5[-0x14e] != 'w') {
              uVar15 = *(ushort *)(puVar5 + -0x150) ^ 0x696d | (byte)puVar5[-0x14e] ^ 100;
              goto LAB_10a32bc48;
            }
LAB_10a32bda4:
            uVar16 = 1;
          }
          else {
            if (cVar3 == '\x04') {
              puVar17 = (uint *)(puVar5 + -0x150);
              goto LAB_10a32bb98;
            }
LAB_10a32bbc0:
            uVar16 = 0xffffffff;
          }
          *(undefined4 *)(plVar26[0x19] + 0x24) = uVar16;
          *(undefined8 *)(puVar5 + -0x218) = 0x6563697665645f72;
          *(undefined8 *)(puVar5 + -0x220) = 0x6568746f5f6e696d;
          *(undefined8 *)(puVar5 + -0x212) = 0x7373616c635f6563;
          *(undefined2 *)(puVar5 + -0x20a) = 0x1600;
          func_0x000107c2b054(puVar5 + -0x238,&UNK_10f64efef);
          puVar9 = (undefined8 *)(puVar5 + -0xf0);
          func_0x00010a32c744(puVar9,puVar5 + -0x220,puVar5 + -0x238);
          if (*(char *)((long)puVar9 + 0x17) < '\0') {
            func_0x000107c3192c(puVar5 + -0x200,*puVar9,puVar9[1]);
          }
          else {
            uVar31 = puVar9[1];
            uVar30 = *puVar9;
            *(undefined8 *)(puVar5 + -0x1f0) = puVar9[2];
            *(undefined8 *)(puVar5 + -0x1f8) = uVar31;
            *(undefined8 *)(puVar5 + -0x200) = uVar30;
          }
          if ((char)puVar5[-0x221] < '\0') {
            __ZdlPv(*(undefined8 *)(puVar5 + -0x238));
          }
          if ((char)puVar5[-0x209] < '\0') {
            __ZdlPv(*(undefined8 *)(puVar5 + -0x220));
          }
          cVar3 = puVar5[-0x1e9];
          if (cVar3 < '\0') {
            if (*(long *)(puVar5 + -0x1f8) == 3) {
              psVar19 = *(short **)(puVar5 + -0x200);
              if (*psVar19 == 0x6f6c && (char)psVar19[1] == 'w') {
                uVar16 = 1;
              }
              else {
                uVar16 = 2;
                if (*psVar19 != 0x696d || (char)psVar19[1] != 'd') {
                  uVar16 = 0xffffffff;
                }
              }
            }
            else {
              if (*(long *)(puVar5 + -0x1f8) == 4) {
                puVar17 = *(uint **)(puVar5 + -0x200);
                goto LAB_10a32bd1c;
              }
              uVar16 = 0xffffffff;
            }
            *(undefined4 *)(plVar26[0x19] + 0x28) = uVar16;
LAB_10a32be1c:
            __ZdlPv(*(undefined8 *)(puVar5 + -0x200));
          }
          else {
            if (cVar3 == '\x03') {
              if (*(short *)(puVar5 + -0x200) == 0x6f6c && puVar5[-0x1fe] == 'w') {
                uVar16 = 1;
              }
              else {
                uVar16 = 2;
                if (*(short *)(puVar5 + -0x200) != 0x696d || puVar5[-0x1fe] != 'd') {
                  uVar16 = 0xffffffff;
                }
              }
            }
            else {
              if (cVar3 == '\x04') {
                puVar17 = (uint *)(puVar5 + -0x200);
LAB_10a32bd1c:
                uVar15 = (*puVar17 & 0xff00ff00) >> 8 | (*puVar17 & 0xff00ff) << 8;
                uVar2 = uVar15 >> 0x10 | uVar15 << 0x10;
                uVar15 = (uint)(0x68696768 < uVar2);
                if (uVar2 < 0x68696768) {
                  uVar15 = 0xffffffff;
                }
                uVar16 = 3;
                if (uVar15 != 0) {
                  uVar16 = 0xffffffff;
                }
                *(undefined4 *)(plVar26[0x19] + 0x28) = uVar16;
                if (cVar3 < '\0') goto LAB_10a32be1c;
                goto LAB_10a32be24;
              }
              uVar16 = 0xffffffff;
            }
            *(undefined4 *)(plVar26[0x19] + 0x28) = uVar16;
          }
LAB_10a32be24:
          if ((char)puVar5[-0x139] < '\0') {
            __ZdlPv(*(undefined8 *)(puVar5 + -0x150));
          }
          func_0x000109839668(puVar5 + -0xf0);
        }
        puVar5[-0xd9] = 8;
        *(undefined8 *)(puVar5 + -0xf0) = 0x64695f7465737361;
        puVar5[-0xe8] = 0;
        *(undefined8 *)(puVar5 + -0x110) = 0;
        pdVar10 = (double *)(puVar5 + -0x1b8);
        FUN_10a32c3a8(pdVar10,puVar5 + -0xf0,puVar5 + -0x110);
        *(int *)(plVar26 + 4) = (int)*pdVar10;
        puVar5[-0xd9] = 0x12;
        *(undefined2 *)(puVar5 + -0xe0) = 0x6465;
        *(undefined8 *)(puVar5 + -0xe8) = 0x7269757165725f6f;
        *(undefined8 *)(puVar5 + -0xf0) = 0x65726574735f7369;
        puVar5[-0xde] = 0;
        puVar5[-0x110] = 0;
        puVar12 = puVar5 + -0x1b8;
        func_0x00010a32c7cc(puVar12,puVar5 + -0xf0,puVar5 + -0x110);
        *(undefined1 *)(plVar26 + 0x1b) = *puVar12;
        puVar5[-0xd9] = 0x12;
        *(undefined2 *)(puVar5 + -0xe0) = 0x7475;
        *(undefined8 *)(puVar5 + -0xe8) = 0x706e695f656c6163;
        *(undefined8 *)(puVar5 + -0xf0) = 0x73796172675f7369;
        puVar5[-0xde] = 0;
        puVar5[-0x110] = 0;
        puVar12 = puVar5 + -0x1b8;
        puVar13 = puVar5 + -0xf0;
        plVar14 = (long *)(puVar5 + -0x110);
        func_0x00010a32c7cc(puVar12,puVar13,plVar14);
        *(undefined1 *)((long)plVar26 + 0xd9) = *puVar12;
        *(undefined1 *)(plVar26 + 3) = 1;
        plVar8 = (long *)plVar26[0x16];
        if (plVar8 != (long *)0x0) {
          puVar11 = &UNK_10f64f465;
          do {
            lVar25 = plVar8[8];
            if ((plVar8[6] - plVar8[5] != plVar8[9] - lVar25) ||
               (plVar8[0xc] - plVar8[0xb] != 0 &&
                (plVar8[6] - plVar8[5] >> 3) * -0x5555555555555555 -
                (plVar8[0xc] - plVar8[0xb] >> 6) != 0)) {
LAB_10a32c03c:
              FUN_10a00946c(puVar11);
LAB_10a32c040:
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10a32c044);
              (*pcVar4)();
            }
            if (lVar25 != plVar8[9]) {
              lVar23 = (long)*(char *)(lVar25 + 0x17);
              if (lVar23 < 0) {
                lVar23 = *(long *)(lVar25 + 8);
              }
              if (lVar23 != 0) {
                puVar11 = &UNK_10f64f4ca;
                goto LAB_10a32c03c;
              }
            }
            plVar8 = (long *)*plVar8;
          } while (plVar8 != (long *)0x0);
        }
        func_0x000109839668(puVar5 + -0x1e8);
        plVar8 = (long *)(puVar5 + -0x1b8);
        func_0x000109839668();
        if ((char)puVar5[-0x171] < '\0') {
          plVar8 = *(long **)(puVar5 + -0x188);
          __ZdlPv();
        }
      }
      if ((char)puVar5[-0x159] < '\0') {
        plVar8 = *(long **)(puVar5 + -0x170);
        __ZdlPv();
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar5 + -0xa8)) {
        return plVar8;
      }
      ___stack_chk_fail();
      func_0x000109839668(puVar5 + -0xf0);
      func_0x000109839668(puVar5 + -0x1e8);
      func_0x000109839668(puVar5 + -0x1b8);
      if ((char)puVar5[-0x171] < '\0') {
        __ZdlPv(*(undefined8 *)(puVar5 + -0x188));
      }
      if ((char)puVar5[-0x159] < '\0') {
        __ZdlPv(*(undefined8 *)(puVar5 + -0x170));
      }
      plVar26 = plVar8;
      __Unwind_Resume();
      *(long **)(puVar5 + -0x290) = unaff_x22;
      *(ulong *)(puVar5 + -0x288) = uVar27;
      *(long **)(puVar5 + -0x280) = plVar24;
      *(long **)(puVar5 + -0x278) = plVar8;
      *(undefined1 **)(puVar5 + -0x270) = puVar28;
      *(code **)(puVar5 + -0x268) = FUN_10a32c3a8;
      plVar8 = plVar26;
      FUN_10a10a278();
      if ((plVar26 + 1 != plVar8) && (*(int *)plVar8[7] == 0)) {
        FUN_10a10a278(plVar26,puVar13);
        plVar14 = (long *)((int *)plVar26[7] + 2);
        func_0x0001098390a4(&UNK_10f63c7bf,0x1d9,&UNK_10f6514a4,*(int *)plVar26[7] == 0);
      }
      return plVar14;
    }
    uVar20 = plVar14[2] - *plVar14;
    uVar21 = (long)uVar20 >> 5;
    if (uVar21 <= uVar27) {
      uVar21 = uVar27;
    }
    if (0x7fffffffffffffbf < uVar20) {
      uVar21 = 0x3ffffffffffffff;
    }
    plVar7 = plVar14;
    FUN_10a0435e0();
    plVar24 = (long *)((long)plVar7 + lVar25);
    lVar25 = plVar8[4];
    lVar32 = plVar8[7];
    lVar23 = plVar8[6];
    lVar37 = plVar8[1];
    lVar36 = *plVar8;
    lVar35 = plVar8[3];
    lVar34 = plVar8[2];
    plVar24[5] = plVar8[5];
    plVar24[4] = lVar25;
    plVar24[7] = lVar32;
    plVar24[6] = lVar23;
    plVar24[1] = lVar37;
    *plVar24 = lVar36;
    plVar24[3] = lVar35;
    plVar24[2] = lVar34;
    plVar26 = plVar24 + 8;
    lVar25 = (long)plVar24 - (plVar14[1] - *plVar14);
    _memcpy(lVar25);
    plVar8 = (long *)*plVar14;
    *plVar14 = lVar25;
    plVar14[1] = (long)plVar26;
    plVar14[2] = (long)(plVar7 + uVar21 * 8);
    if (plVar8 != (long *)0x0) {
      __ZdlPv();
    }
  }
  plVar14[1] = (long)plVar26;
  return plVar8;
code_r0x00010a32b1e4:
  FUN_10a0b4ec0(unaff_x22 + 5,unaff_x19 + 2);
  iVar1 = *(int *)((long)unaff_x19 + 4);
  if (iVar1 == -1) {
    *(undefined8 *)(puVar5 + -0x110) = 0;
    *(undefined8 *)(puVar5 + -0x108) = 0;
    *(undefined8 *)(puVar5 + -0x100) = 0;
  }
  else {
    uVar27 = (unaff_x22[6] - unaff_x22[5] >> 3) * -0x5555555555555555;
    if (uVar27 < (ulong)(long)iVar1 || uVar27 - (long)iVar1 == 0) goto LAB_10a32c040;
    puVar9 = (undefined8 *)(unaff_x22[5] + (long)iVar1 * 0x18);
    if (*(char *)((long)puVar9 + 0x17) < '\0') {
      func_0x000107c3192c(puVar5 + -0x110,*puVar9,puVar9[1]);
    }
    else {
      uVar31 = puVar9[1];
      uVar30 = *puVar9;
      *(undefined8 *)(puVar5 + -0x100) = puVar9[2];
      *(undefined8 *)(puVar5 + -0x108) = uVar31;
      *(undefined8 *)(puVar5 + -0x110) = uVar30;
    }
  }
  FUN_10a0b4ec0(unaff_x22 + 8,puVar5 + -0x110);
  plVar8 = unaff_x19 + 0xb;
  pcStack_18 = (code *)0x10a32b268;
  puVar5 = puVar5 + -0x260;
  unaff_x23 = plVar14;
  goto SUB_10a32a860;
}



/* Entry: 10a4409e0; end: 10a440a1f;  */

/* WARNING: Possible PIC construction at 0x00010a32b264: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a32b268) */
/* WARNING: Removing unreachable block (ram,0x00010a32b270) */
/* WARNING: Removing unreachable block (ram,0x00010a32b278) */
/* WARNING: Removing unreachable block (ram,0x00010a32c18c) */
/* WARNING: Removing unreachable block (ram,0x00010a32bef8) */
/* WARNING: Removing unreachable block (ram,0x00010a32be4c) */
/* WARNING: Removing unreachable block (ram,0x00010a32b92c) */
/* WARNING: Removing unreachable block (ram,0x00010a32b694) */
/* WARNING: Removing unreachable block (ram,0x00010a32b5f0) */
/* WARNING: Removing unreachable block (ram,0x00010a32b544) */
/* WARNING: Removing unreachable block (ram,0x00010a32b39c) */
/* WARNING: Removing unreachable block (ram,0x00010a32ad9c) */
/* WARNING: Removing unreachable block (ram,0x00010a32aa08) */
/* WARNING: Removing unreachable block (ram,0x00010a32adec) */
/* WARNING: Removing unreachable block (ram,0x00010a32b450) */
/* WARNING: Removing unreachable block (ram,0x00010a32b59c) */
/* WARNING: Removing unreachable block (ram,0x00010a32b644) */
/* WARNING: Removing unreachable block (ram,0x00010a32b780) */
/* WARNING: Removing unreachable block (ram,0x00010a32be3c) */
/* WARNING: Removing unreachable block (ram,0x00010a32bea4) */
/* WARNING: Removing unreachable block (ram,0x00010a32bf4c) */
/* WARNING: Removing unreachable block (ram,0x00010a32c1c0) */
/* WARNING: Removing unreachable block (ram,0x00010a32aab4) */
/* WARNING: Removing unreachable block (ram,0x00010a32aafc) */
/* WARNING: Removing unreachable block (ram,0x00010a32ab3c) */
/* WARNING: Removing unreachable block (ram,0x00010a32ab84) */
/* WARNING: Removing unreachable block (ram,0x00010a32abcc) */
/* WARNING: Removing unreachable block (ram,0x00010a32ac14) */
/* WARNING: Removing unreachable block (ram,0x00010a32accc) */

long * FUN_10a4409e0(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  code *pcVar4;
  undefined1 *puVar5;
  bool bVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  double *pdVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  undefined *puVar13;
  long *plVar14;
  uint uVar15;
  undefined4 uVar16;
  uint *puVar17;
  ushort *puVar18;
  short *psVar19;
  ulong uVar20;
  ulong uVar21;
  int *piVar22;
  long *unaff_x19;
  long lVar23;
  long *plVar24;
  long unaff_x20;
  long lVar25;
  long *unaff_x21;
  long *unaff_x22;
  long *plVar26;
  long *unaff_x23;
  ulong uVar27;
  long *unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  long *unaff_x27;
  long unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  float fVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  long lVar31;
  float fVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  
  lVar25 = *(long *)(param_2 + 0x10);
  if (param_1 == 0) {
    plVar8 = (long *)&UNK_10e482b48;
  }
  else {
    lVar23 = *(long *)(param_1 + 0x140);
    func_0x00010a3e90b8(lVar23);
    plVar8 = (long *)(lVar23 + 100);
  }
  plVar14 = (long *)(lVar25 + 0x338);
  puVar5 = (undefined1 *)register0x00000008;
SUB_10a32a860:
  *(long **)(puVar5 + -0x30) = unaff_x22;
  *(long **)(puVar5 + -0x28) = unaff_x21;
  *(long *)(puVar5 + -0x20) = unaff_x20;
  *(long **)(puVar5 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar5 + -0x10) = unaff_x29;
  *(undefined8 *)(puVar5 + -8) = unaff_x30;
  plVar26 = (long *)plVar14[1];
  if (plVar26 < (long *)plVar14[2]) {
    lVar23 = plVar8[1];
    lVar25 = *plVar8;
    lVar33 = plVar8[3];
    lVar31 = plVar8[2];
    lVar34 = plVar8[4];
    lVar36 = plVar8[7];
    lVar35 = plVar8[6];
    plVar26[5] = plVar8[5];
    plVar26[4] = lVar34;
    plVar26[7] = lVar36;
    plVar26[6] = lVar35;
    plVar26[1] = lVar23;
    *plVar26 = lVar25;
    plVar26[3] = lVar33;
    plVar26[2] = lVar31;
    plVar26 = plVar26 + 8;
    plVar8 = plVar14;
  }
  else {
    lVar25 = (long)plVar26 - *plVar14;
    uVar27 = (lVar25 >> 6) + 1;
    if (uVar27 >> 0x3a != 0) {
      plVar26 = plVar14;
      plVar24 = plVar8;
      FUN_10a0435cc();
      *(long *)(puVar5 + -0x90) = unaff_x28;
      *(long **)(puVar5 + -0x88) = unaff_x27;
      *(undefined8 *)(puVar5 + -0x80) = unaff_x26;
      *(undefined8 *)(puVar5 + -0x78) = unaff_x25;
      *(long **)(puVar5 + -0x70) = unaff_x24;
      *(long **)(puVar5 + -0x68) = unaff_x23;
      *(long **)(puVar5 + -0x60) = unaff_x22;
      *(long *)(puVar5 + -0x58) = lVar25;
      *(long **)(puVar5 + -0x50) = plVar8;
      *(long **)(puVar5 + -0x48) = plVar14;
      *(undefined1 **)(puVar5 + -0x40) = puVar5 + -0x10;
      *(code **)(puVar5 + -0x38) = FUN_10a32a938;
      unaff_x29 = puVar5 + -0x40;
      *(undefined8 *)(puVar5 + -0xa8) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      uVar27 = plVar24[1];
      if (-1 < (char)*(byte *)((long)plVar24 + 0x17)) {
        uVar27 = (ulong)*(byte *)((long)plVar24 + 0x17);
      }
      unaff_x22 = (long *)(puVar5 + -0xf0);
      FUN_10a003c90(puVar5 + -0xf0,uVar27 + 1,puVar5 + -0x1b8);
      if (uVar27 != 0) {
        plVar8 = (long *)*plVar24;
        if (-1 < *(char *)((long)plVar24 + 0x17)) {
          plVar8 = plVar24;
        }
        _memmove(unaff_x22,plVar8,uVar27);
      }
      *(undefined2 *)((long)unaff_x22 + uVar27) = 0x2f;
      puVar13 = &UNK_10f64f440;
      puVar9 = (undefined8 *)(puVar5 + -0xf0);
      plVar14 = (long *)0xe;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar9,&UNK_10f64f440,0xe);
      uVar30 = puVar9[1];
      uVar29 = *puVar9;
      *(undefined8 *)(puVar5 + -0x160) = puVar9[2];
      *(undefined8 *)(puVar5 + -0x168) = uVar30;
      *(undefined8 *)(puVar5 + -0x170) = uVar29;
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = 0;
      plVar8 = (long *)(puVar5 + -0x170);
      FUN_10ad01a04();
      if ((int)plVar8 != 0) {
        FUN_10ad01b0c(puVar5 + -0x188,puVar5 + -0x170);
        *(undefined1 **)(puVar5 + -0x1b8) = puVar5 + -0x1b0;
        *(undefined8 *)(puVar5 + -0x1b0) = 0;
        *(undefined1 **)(puVar5 + -0x260) = puVar5 + -0x1b0;
        *(undefined8 *)(puVar5 + -0x1a8) = 0;
        *(undefined8 *)(puVar5 + -0x1a0) = 0;
        *(undefined8 *)(puVar5 + -0x198) = 0;
        *(undefined8 *)(puVar5 + -400) = 0;
        func_0x00010983a984(puVar5 + -0x1b8,puVar5 + -0x188);
        puVar9 = (undefined8 *)0x20;
        __Znwm();
        *(undefined8 **)(puVar5 + -0xf0) = puVar9;
        *(undefined8 *)(puVar5 + -0xe0) = 0x8000000000000020;
        *(undefined8 *)(puVar5 + -0xe8) = 0x1e;
        puVar9[1] = 0x626f5f666f5f7265;
        *puVar9 = 0x626d756e5f78616d;
        *(undefined8 *)((long)puVar9 + 0x16) = 0x6b636172745f6f74;
        *(undefined8 *)((long)puVar9 + 0xe) = 0x5f737463656a626f;
        *(undefined1 *)((long)puVar9 + 0x1e) = 0;
        *(double *)(puVar5 + -0x1e8) = (double)*(int *)((long)plVar26 + 0x1c);
        pdVar10 = (double *)(puVar5 + -0x1b8);
        FUN_10a32c3a8(pdVar10,puVar5 + -0xf0,puVar5 + -0x1e8);
        *(int *)((long)plVar26 + 0x1c) = (int)*pdVar10;
        puVar5[-0xd9] = 0xc;
        *(undefined4 *)(puVar5 + -0xe8) = 0x736c6562;
        *(undefined8 *)(puVar5 + -0xf0) = 0x616c5f746e657665;
        puVar5[-0xe4] = 0;
        FUN_10a32c428(puVar5 + -0x1b8,puVar5 + -0xf0,plVar26 + 8);
        puVar5[-0xd9] = 6;
        *(undefined4 *)(puVar5 + -0xf0) = 0x6562616c;
        *(undefined2 *)(puVar5 + -0xec) = 0x736c;
        puVar5[-0xea] = 0;
        FUN_10a32c428(puVar5 + -0x1b8,puVar5 + -0xf0,plVar26 + 5);
        puVar5[-0xd9] = 0xf;
        *(undefined8 *)(puVar5 + -0xf0) = 0x6b72616d646e616c;
        *(undefined8 *)(puVar5 + -0xe9) = 0x736c6562616c5f6b;
        puVar5[-0xe1] = 0;
        FUN_10a32c428(puVar5 + -0x1b8,puVar5 + -0xf0,plVar26 + 0xb);
        puVar5[-0xd9] = 0xf;
        *(undefined8 *)(puVar5 + -0xf0) = 0x6e6f697461746f72;
        *(undefined8 *)(puVar5 + -0xe9) = 0x736c6562616c5f6e;
        puVar5[-0xe1] = 0;
        FUN_10a32c428(puVar5 + -0x1b8,puVar5 + -0xf0,plVar26 + 0xe);
        puVar5[-0xd9] = 0xc;
        *(undefined4 *)(puVar5 + -0xe8) = 0x736c6562;
        *(undefined8 *)(puVar5 + -0xf0) = 0x616c5f736b73616d;
        puVar5[-0xe4] = 0;
        FUN_10a32c428(puVar5 + -0x1b8,puVar5 + -0xf0,plVar26 + 0x11);
        *(long **)(puVar5 + -0x240) = plVar26 + 0x14;
        func_0x00010a35ced0();
        func_0x000107c2b054(puVar5 + -0x110,&UNK_10f64f44f);
        *(undefined1 **)(puVar5 + -0xf0) = puVar5 + -0xe8;
        *(undefined8 *)(puVar5 + -0xe8) = 0;
        *(undefined8 *)(puVar5 + -0xe0) = 0;
        *(undefined8 *)(puVar5 + -0xd8) = 0;
        *(undefined8 *)(puVar5 + -0xd0) = 0;
        *(undefined8 *)(puVar5 + -200) = 0;
        puVar12 = puVar5 + -0x1b8;
        FUN_10a10a278(puVar12,puVar5 + -0x110);
        if ((*(undefined1 **)(puVar5 + -0x260) == puVar12) || (**(int **)(puVar12 + 0x38) != 5)) {
          puVar12 = puVar5 + -0xf0;
          unaff_x19 = unaff_x22;
        }
        else {
          puVar12 = puVar5 + -0x1b8;
          FUN_10a10a278(puVar12,puVar5 + -0x110);
          unaff_x19 = *(long **)(puVar12 + 0x38);
          func_0x0001098390a4(&UNK_10f63c7bf,0x1e5,&UNK_10f6514b1,(int)*unaff_x19 == 5);
          puVar12 = (undefined1 *)unaff_x19[1];
        }
        func_0x00010983a670(puVar5 + -0x1e8,puVar12);
        func_0x000109839668(puVar5 + -0xf0);
        if (*(long *)(puVar5 + -0x1d8) == 0) {
          *(undefined8 *)(puVar5 + -0x110) = 0;
          *(undefined8 *)(puVar5 + -0x108) = 0;
          *(undefined8 *)(puVar5 + -0x100) = 0;
          *(undefined8 *)(puVar5 + -0x130) = 0;
          *(undefined8 *)(puVar5 + -0x128) = 0;
          *(undefined8 *)(puVar5 + -0x120) = 0;
          puVar9 = (undefined8 *)0x20;
          __Znwm();
          *(undefined8 **)(puVar5 + -0xf0) = puVar9;
          *(undefined8 *)(puVar5 + -0xe0) = 0x8000000000000020;
          *(undefined8 *)(puVar5 + -0xe8) = 0x19;
          puVar9[1] = 0x746e696f705f746e;
          *puVar9 = 0x656d686361747461;
          *(undefined8 *)((long)puVar9 + 0x11) = 0x656d616e5f64335f;
          *(undefined8 *)((long)puVar9 + 9) = 0x73746e696f705f74;
          *(undefined1 *)((long)puVar9 + 0x19) = 0;
          FUN_10a32c428(puVar5 + -0x1b8,puVar5 + -0xf0,puVar5 + -0x110);
          puVar9 = (undefined8 *)0x28;
          __Znwm();
          *(undefined8 **)(puVar5 + -0xf0) = puVar9;
          *(undefined8 *)(puVar5 + -0xe0) = 0x8000000000000028;
          *(undefined8 *)(puVar5 + -0xe8) = 0x20;
          puVar9[1] = 0x746e696f705f746e;
          *puVar9 = 0x656d686361747461;
          puVar9[3] = 0x656d616e5f746e65;
          puVar9[2] = 0x7261705f64335f73;
          *(undefined1 *)(puVar9 + 4) = 0;
          FUN_10a32c428(puVar5 + -0x1b8,puVar5 + -0xf0,puVar5 + -0x130);
          *(undefined8 *)(puVar5 + -0xf0) = 0;
          *(undefined8 *)(puVar5 + -0xe8) = 0;
          *(undefined8 *)(puVar5 + -0xe0) = 0;
          FUN_10a0cf0cc(puVar5 + -0xf0,*(long *)(puVar5 + -0x110),*(long *)(puVar5 + -0x108),
                        (*(long *)(puVar5 + -0x108) - *(long *)(puVar5 + -0x110) >> 3) *
                        -0x5555555555555555);
          *(undefined8 *)(puVar5 + -0xd8) = 0;
          *(undefined8 *)(puVar5 + -0xd0) = 0;
          *(undefined8 *)(puVar5 + -200) = 0;
          FUN_10a0cf0cc(puVar5 + -0xd8,*(long *)(puVar5 + -0x130),*(long *)(puVar5 + -0x128),
                        (*(long *)(puVar5 + -0x128) - *(long *)(puVar5 + -0x130) >> 3) *
                        -0x5555555555555555);
          *(undefined8 *)(puVar5 + -0xc0) = 0;
          *(undefined8 *)(puVar5 + -0xb8) = 0;
          *(undefined8 *)(puVar5 + -0xb0) = 0;
          FUN_10a35cf24(*(undefined8 *)(puVar5 + -0x240),puVar5 + -0xf0);
          if (*(long *)(puVar5 + -0xc0) != 0) {
            *(long *)(puVar5 + -0xb8) = *(long *)(puVar5 + -0xc0);
            __ZdlPv();
          }
          *(undefined1 **)(puVar5 + -0x150) = puVar5 + -0xd8;
          FUN_10a0426d8(puVar5 + -0x150);
          *(undefined1 **)(puVar5 + -0x150) = puVar5 + -0xf0;
          FUN_10a0426d8(puVar5 + -0x150);
          *(undefined1 **)(puVar5 + -0xf0) = puVar5 + -0x130;
          FUN_10a0426d8(puVar5 + -0xf0);
          *(undefined1 **)(puVar5 + -0xf0) = puVar5 + -0x110;
          FUN_10a0426d8(puVar5 + -0xf0);
        }
        else {
          func_0x000109839e84(puVar5 + -0x200,puVar5 + -0x1e8);
          *(undefined8 *)(puVar5 + -0xd8) = 0;
          func_0x0001094749d8(puVar5 + -0x110,puVar5 + -0x200,puVar5 + -0xf0,1,0);
          func_0x000109380c8c(puVar5 + -0x220,puVar5 + -0x110);
          func_0x000109380ffc(puVar5 + -0x108,puVar5[-0x110]);
          plVar8 = *(long **)(puVar5 + -0xd8);
          if (plVar8 == (long *)(puVar5 + -0xf0)) {
            lVar25 = 0x20;
LAB_10a32aeac:
            (**(code **)(*plVar8 + lVar25))();
          }
          else if (plVar8 != (long *)0x0) {
            lVar25 = 0x28;
            goto LAB_10a32aeac;
          }
          *(long **)(puVar5 + -0x248) = plVar26;
          func_0x0001094a72dc(puVar5 + -0x130,puVar5 + -0x220);
          unaff_x21 = *(long **)(puVar5 + -0x130);
          *(long **)(puVar5 + -0x250) = *(long **)(puVar5 + -0x128);
          if (unaff_x21 != *(long **)(puVar5 + -0x128)) {
            *(long *)(puVar5 + -600) = *(long *)(puVar5 + -0x248) + 0xb0;
            unaff_x25 = 0xaaaaaaaaaaaaaaab;
            unaff_x26 = 0x18;
            do {
              func_0x0001094a68cc(puVar5 + -0x110,puVar5 + -0x220,unaff_x21);
              func_0x0001094cb264(puVar5 + -0x138,puVar5 + -0x110);
              func_0x000109380f8c(puVar5 + -0x110);
              *(undefined8 *)(puVar5 + -0x148) = 0;
              *(undefined8 *)(puVar5 + -0x140) = 0;
              *(undefined8 *)(puVar5 + -0x150) = 0;
              lVar25 = **(long **)(puVar5 + -0x138);
              lVar23 = (*(long **)(puVar5 + -0x138))[1];
              func_0x0001094cd180(puVar5 + -0x150,lVar25,lVar23,
                                  (lVar23 - lVar25 >> 3) * -0x79435e50d79435e5);
              unaff_x20 = *(long *)(puVar5 + -0x150);
              lVar25 = *(long *)(puVar5 + -0x148);
              plVar8 = *(long **)(puVar5 + -0x240);
              func_0x000107c2b05c(plVar8,unaff_x21);
              unaff_x27 = *(long **)(*(long *)(puVar5 + -0x248) + 0xa8);
              if (unaff_x27 != (long *)0x0) {
                uVar27 = (long)unaff_x27 - 1;
                if (((ulong)unaff_x27 & uVar27) == 0) {
                  unaff_x19 = (long *)(uVar27 & (ulong)plVar8);
                }
                else {
                  unaff_x19 = plVar8;
                  if (unaff_x27 <= plVar8) {
                    uVar21 = 0;
                    if (unaff_x27 != (long *)0x0) {
                      uVar21 = (ulong)plVar8 / (ulong)unaff_x27;
                    }
                    unaff_x19 = (long *)((long)plVar8 - uVar21 * (long)unaff_x27);
                  }
                }
                unaff_x28 = lVar25;
                if (*(undefined8 **)(**(long **)(puVar5 + -0x240) + (long)unaff_x19 * 8) !=
                    (undefined8 *)0x0) {
                  for (unaff_x22 = (long *)**(undefined8 **)
                                             (**(long **)(puVar5 + -0x240) + (long)unaff_x19 * 8);
                      unaff_x22 != (long *)0x0; unaff_x22 = (long *)*unaff_x22) {
                    plVar14 = (long *)unaff_x22[1];
                    if (plVar14 == plVar8) {
                      uVar21 = *(ulong *)(puVar5 + -0x240);
                      func_0x000107c2b068(uVar21,unaff_x22 + 2,unaff_x21);
                      if ((uVar21 & 1) != 0) goto LAB_10a32b17c;
                    }
                    else {
                      if (((ulong)unaff_x27 & uVar27) == 0) {
                        plVar14 = (long *)((ulong)plVar14 & uVar27);
                      }
                      else if (unaff_x27 <= plVar14) {
                        uVar21 = 0;
                        if (unaff_x27 != (long *)0x0) {
                          uVar21 = (ulong)plVar14 / (ulong)unaff_x27;
                        }
                        plVar14 = (long *)((long)plVar14 - uVar21 * (long)unaff_x27);
                      }
                      if (plVar14 != unaff_x19) break;
                    }
                  }
                }
              }
              unaff_x22 = (long *)0x70;
              __Znwm();
              *(long **)(puVar5 + -0x110) = unaff_x22;
              *(undefined8 *)(puVar5 + -0x108) = *(undefined8 *)(puVar5 + -0x240);
              *(undefined8 *)(puVar5 + -0x100) = 0;
              *unaff_x22 = 0;
              unaff_x22[1] = (long)plVar8;
              if (*(char *)((long)unaff_x21 + 0x17) < '\0') {
                func_0x000107c3192c(unaff_x22 + 2,*unaff_x21,unaff_x21[1]);
              }
              else {
                lVar31 = unaff_x21[1];
                lVar23 = *unaff_x21;
                unaff_x22[4] = unaff_x21[2];
                unaff_x22[3] = lVar31;
                unaff_x22[2] = lVar23;
              }
              unaff_x22[0xd] = 0;
              unaff_x22[0xc] = 0;
              unaff_x22[0xb] = 0;
              unaff_x22[10] = 0;
              unaff_x22[9] = 0;
              unaff_x22[8] = 0;
              unaff_x22[7] = 0;
              unaff_x22[6] = 0;
              unaff_x22[5] = 0;
              puVar5[-0x100] = 1;
              fVar28 = (float)(*(long *)(*(long *)(puVar5 + -0x248) + 0xb8) + 1);
              fVar32 = *(float *)(*(long *)(puVar5 + -0x248) + 0xc0);
              if ((unaff_x27 == (long *)0x0) || (fVar32 * (float)unaff_x27 < fVar28)) {
                uVar27 = 1;
                if ((long *)0x2 < unaff_x27) {
                  uVar27 = (ulong)(((ulong)unaff_x27 & (long)unaff_x27 - 1U) != 0);
                }
                uVar27 = uVar27 | (long)unaff_x27 << 1;
                uVar21 = (ulong)(fVar28 / fVar32);
                if (uVar27 <= uVar21) {
                  uVar27 = uVar21;
                }
                FUN_10a35ccb8(*(undefined8 *)(puVar5 + -0x240),uVar27);
                unaff_x27 = *(long **)(*(long *)(puVar5 + -0x248) + 0xa8);
                if (((ulong)unaff_x27 & (long)unaff_x27 - 1U) == 0) {
                  unaff_x19 = (long *)((long)unaff_x27 - 1U & (ulong)plVar8);
                }
                else {
                  unaff_x19 = plVar8;
                  if (unaff_x27 <= plVar8) {
                    uVar27 = 0;
                    if (unaff_x27 != (long *)0x0) {
                      uVar27 = (ulong)plVar8 / (ulong)unaff_x27;
                    }
                    unaff_x19 = (long *)((long)plVar8 - uVar27 * (long)unaff_x27);
                  }
                }
              }
              lVar23 = **(long **)(puVar5 + -0x240);
              plVar8 = *(long **)(lVar23 + (long)unaff_x19 * 8);
              if (plVar8 == (long *)0x0) {
                plVar8 = *(long **)(puVar5 + -600);
                *unaff_x22 = *plVar8;
                *plVar8 = (long)unaff_x22;
                *(long **)(lVar23 + (long)unaff_x19 * 8) = plVar8;
                if (*unaff_x22 != 0) {
                  plVar8 = *(long **)(*unaff_x22 + 8);
                  if (((ulong)unaff_x27 & (long)unaff_x27 - 1U) == 0) {
                    plVar8 = (long *)((ulong)plVar8 & (long)unaff_x27 - 1U);
                  }
                  else if (unaff_x27 <= plVar8) {
                    uVar27 = 0;
                    if (unaff_x27 != (long *)0x0) {
                      uVar27 = (ulong)plVar8 / (ulong)unaff_x27;
                    }
                    plVar8 = (long *)((long)plVar8 - uVar27 * (long)unaff_x27);
                  }
                  *(long **)(**(long **)(puVar5 + -0x240) + (long)plVar8 * 8) = unaff_x22;
                }
              }
              else {
                *unaff_x22 = *plVar8;
                *plVar8 = (long)unaff_x22;
              }
              *(long *)(*(long *)(puVar5 + -0x248) + 0xb8) =
                   *(long *)(*(long *)(puVar5 + -0x248) + 0xb8) + 1;
LAB_10a32b17c:
              lVar25 = (lVar25 - unaff_x20 >> 3) * -0x79435e50d79435e5;
              FUN_10a042718(unaff_x22 + 5);
              func_0x000107c31930(unaff_x22 + 5,lVar25);
              FUN_10a042718(unaff_x22 + 8);
              func_0x000107c31930(unaff_x22 + 8,lVar25);
              plVar14 = unaff_x22 + 0xb;
              unaff_x22[0xc] = *plVar14;
              FUN_10a32a7d4(plVar14,lVar25);
              unaff_x19 = *(long **)(puVar5 + -0x150);
              unaff_x24 = *(long **)(puVar5 + -0x148);
              if (unaff_x19 != unaff_x24) goto code_r0x00010a32b1e4;
              *(undefined1 **)(puVar5 + -0x110) = puVar5 + -0x150;
              FUN_10a34e6f0(puVar5 + -0x110);
              lVar25 = *(long *)(puVar5 + -0x138);
              *(undefined8 *)(puVar5 + -0x138) = 0;
              if (lVar25 != 0) {
                func_0x0001094cf2b0(puVar5 + -0x138);
              }
              unaff_x21 = unaff_x21 + 3;
              if (unaff_x21 == *(long **)(puVar5 + -0x250)) break;
            } while( true );
          }
          *(undefined1 **)(puVar5 + -0x110) = puVar5 + -0x130;
          FUN_10a0426d8(puVar5 + -0x110);
          func_0x000109380f8c(puVar5 + -0x220);
          if ((char)puVar5[-0x1e9] < '\0') {
            __ZdlPv(*(undefined8 *)(puVar5 + -0x200));
          }
          plVar26 = *(long **)(puVar5 + -0x248);
        }
        *(undefined8 *)(puVar5 + -0xf0) = 0;
        *(undefined8 *)(puVar5 + -0xe8) = 0;
        func_0x00010a32c640(plVar26 + 0x19,puVar5 + -0xf0);
        plVar8 = *(long **)(puVar5 + -0xe8);
        if (plVar8 != (long *)0x0) {
          plVar14 = plVar8 + 1;
          do {
            lVar25 = *plVar14;
            cVar3 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar6) {
              *plVar14 = lVar25 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar25 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
        puVar5[-0xd9] = 0xd;
        *(undefined8 *)(puVar5 + -0xf0) = 0x665f646564697567;
        plVar24 = (long *)0x7265746c69665f64;
        *(undefined8 *)(puVar5 + -0xeb) = 0x7265746c69665f64;
        puVar5[-0xe3] = 0;
        puVar12 = puVar5 + -0x1b8;
        FUN_10a10a278(puVar12,puVar5 + -0xf0);
        if (*(undefined1 **)(puVar5 + -0x260) == puVar12) {
          uVar27 = 0;
        }
        else {
          uVar27 = (ulong)(**(int **)(puVar12 + 0x38) == 5);
        }
        if ((int)uVar27 != 0) {
          puVar5[-0xf9] = 0xd;
          *(undefined8 *)(puVar5 + -0x110) = 0x665f646564697567;
          *(undefined8 *)(puVar5 + -0x10b) = 0x7265746c69665f64;
          puVar5[-0x103] = 0;
          puVar12 = puVar5 + -0x1b8;
          FUN_10a10a278(puVar12,puVar5 + -0x110);
          if (*(undefined1 **)(puVar5 + -0x260) == puVar12) {
            bVar6 = false;
          }
          else {
            bVar6 = **(int **)(puVar12 + 0x38) == 5;
          }
          func_0x0001098390a4(&UNK_10f63c7bf,0x18b,&UNK_10f63cc4d,bVar6);
          puVar12 = puVar5 + -0x1b8;
          func_0x00010983b55c(puVar12,puVar5 + -0x110);
          piVar22 = *(int **)(puVar12 + 0x38);
          func_0x0001098390a4(&UNK_10f63c7bf,0x1e5,&UNK_10f6514b1,*piVar22 == 5);
          func_0x00010983a670(puVar5 + -0xf0,*(undefined8 *)(piVar22 + 2));
          puVar9 = (undefined8 *)0x48;
          __Znwm();
          puVar9[1] = 0;
          puVar9[2] = 0;
          *puVar9 = &PTR_FUN_110bc66a8;
          puVar9[4] = 0x10000000080;
          puVar9[3] = 0x8000000000;
          puVar9[5] = 0x3bf5c28f00000100;
          puVar9[6] = 0x3f80000000000000;
          puVar9[7] = 0x200000002;
          *(undefined4 *)(puVar9 + 8) = 1;
          *(undefined8 **)(puVar5 + -0x110) = puVar9 + 3;
          *(undefined8 **)(puVar5 + -0x108) = puVar9;
          func_0x00010a32c640(plVar26 + 0x19,puVar5 + -0x110);
          plVar24 = *(long **)(puVar5 + -0x108);
          if (plVar24 != (long *)0x0) {
            plVar8 = plVar24 + 1;
            do {
              lVar25 = *plVar8;
              cVar3 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar6) {
                *plVar8 = lVar25 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar25 == 0) {
              (**(code **)(*plVar24 + 0x10))(plVar24);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar24);
            }
          }
          *(undefined1 *)plVar26[0x19] = 1;
          puVar5[-0xf9] = 0x14;
          *(undefined4 *)(puVar5 + -0x100) = 0x68746469;
          *(undefined8 *)(puVar5 + -0x108) = 0x775f676e69737365;
          *(undefined8 *)(puVar5 + -0x110) = 0x636f72705f6e696d;
          puVar5[-0xfc] = 0;
          pdVar10 = (double *)(puVar5 + -0xf0);
          func_0x00010a32c6a4(pdVar10,puVar5 + -0x110);
          *(int *)(plVar26[0x19] + 4) = (int)*pdVar10;
          puVar5[-0xf9] = 0x15;
          *(undefined8 *)(puVar5 + -0x108) = 0x685f676e69737365;
          *(undefined8 *)(puVar5 + -0x110) = 0x636f72705f6e696d;
          *(undefined8 *)(puVar5 + -0x103) = 0x7468676965685f67;
          puVar5[-0xfb] = 0;
          pdVar10 = (double *)(puVar5 + -0xf0);
          func_0x00010a32c6a4(pdVar10,puVar5 + -0x110);
          *(int *)(plVar26[0x19] + 8) = (int)*pdVar10;
          puVar5[-0xf9] = 0x14;
          *(undefined4 *)(puVar5 + -0x100) = 0x68746469;
          *(undefined8 *)(puVar5 + -0x108) = 0x775f657275747865;
          *(undefined8 *)(puVar5 + -0x110) = 0x745f74757074756f;
          puVar5[-0xfc] = 0;
          pdVar10 = (double *)(puVar5 + -0xf0);
          func_0x00010a32c6a4(pdVar10,puVar5 + -0x110);
          *(int *)(plVar26[0x19] + 0xc) = (int)*pdVar10;
          puVar5[-0xf9] = 0x15;
          *(undefined8 *)(puVar5 + -0x108) = 0x685f657275747865;
          *(undefined8 *)(puVar5 + -0x110) = 0x745f74757074756f;
          *(undefined8 *)(puVar5 + -0x103) = 0x7468676965685f65;
          puVar5[-0xfb] = 0;
          pdVar10 = (double *)(puVar5 + -0xf0);
          func_0x00010a32c6a4(pdVar10,puVar5 + -0x110);
          *(int *)(plVar26[0x19] + 0x10) = (int)*pdVar10;
          puVar5[-0xf9] = 10;
          *(undefined2 *)(puVar5 + -0x108) = 0x7173;
          *(undefined8 *)(puVar5 + -0x110) = 0x5f6e6f6c69737065;
          puVar5[-0x106] = 0;
          pdVar10 = (double *)(puVar5 + -0xf0);
          func_0x00010a32c6a4(pdVar10,puVar5 + -0x110);
          *(float *)(plVar26[0x19] + 0x14) = (float)*pdVar10;
          puVar5[-0x119] = 0x14;
          *(undefined4 *)(puVar5 + -0x120) = 0x65707974;
          *(undefined8 *)(puVar5 + -0x128) = 0x5f676e6973736563;
          *(undefined8 *)(puVar5 + -0x130) = 0x6f72705f6b73616d;
          puVar5[-0x11c] = 0;
          puVar12 = puVar5 + -0xf0;
          FUN_10a10a278(puVar12,puVar5 + -0x130);
          if (puVar5 + -0xe8 == puVar12) {
            bVar6 = false;
          }
          else {
            bVar6 = **(int **)(puVar12 + 0x38) == 1;
          }
          func_0x0001098390a4(&UNK_10f63c7bf,0x18b,&UNK_10f63cc4d,bVar6);
          puVar12 = puVar5 + -0xf0;
          func_0x00010983b55c(puVar12,puVar5 + -0x130);
          piVar22 = *(int **)(puVar12 + 0x38);
          func_0x0001098390a4(&UNK_10f63c7bf,0x1d3,&UNK_10f580d70,*piVar22 == 1);
          puVar9 = *(undefined8 **)(piVar22 + 2);
          if (*(char *)((long)puVar9 + 0x17) < '\0') {
            func_0x000107c3192c(puVar5 + -0x110,*puVar9,puVar9[1]);
          }
          else {
            uVar30 = puVar9[1];
            uVar29 = *puVar9;
            *(undefined8 *)(puVar5 + -0x100) = puVar9[2];
            *(undefined8 *)(puVar5 + -0x108) = uVar30;
            *(undefined8 *)(puVar5 + -0x110) = uVar29;
          }
          lVar25 = plVar26[0x19];
          *(undefined4 *)(lVar25 + 0x18) = 0;
          cVar3 = puVar5[-0xf9];
          if (cVar3 < '\0') {
            lVar23 = *(long *)(puVar5 + -0x108);
            if (lVar23 != 5) {
              if (lVar23 == 6) {
                if (**(int **)(puVar5 + -0x110) == 0x6f6f6d73 &&
                    (short)(*(int **)(puVar5 + -0x110))[1] == 0x6874) goto LAB_10a32b898;
              }
              else if ((lVar23 == 0xe) &&
                      (**(long **)(puVar5 + -0x110) == 0x696c7069746c756d &&
                       *(long *)((long)*(long **)(puVar5 + -0x110) + 6) == 0x6e6f69746163696c))
              goto LAB_10a32b840;
              goto LAB_10a32b934;
            }
            piVar22 = *(int **)(puVar5 + -0x110);
LAB_10a32b8a8:
            if (*piVar22 == 0x6c616373 && (char)piVar22[1] == 'e') {
              *(undefined4 *)(lVar25 + 0x18) = 3;
              puVar9 = (undefined8 *)0x20;
              __Znwm();
              *(undefined8 **)(puVar5 + -0x130) = puVar9;
              *(undefined8 *)(puVar5 + -0x120) = 0x8000000000000020;
              *(undefined8 *)(puVar5 + -0x128) = 0x1a;
              puVar9[1] = 0x5f676e6973736563;
              *puVar9 = 0x6f72705f6b73616d;
              *(undefined8 *)((long)puVar9 + 0x12) = 0x7265696c7069746c;
              *(undefined8 *)((long)puVar9 + 10) = 0x756d5f676e697373;
              *(undefined1 *)((long)puVar9 + 0x1a) = 0;
              pdVar10 = (double *)(puVar5 + -0xf0);
              func_0x00010a32c6a4(pdVar10,puVar5 + -0x130);
              *(float *)(plVar26[0x19] + 0x1c) = (float)*pdVar10;
            }
          }
          else {
            if (cVar3 == '\x05') {
              piVar22 = (int *)(puVar5 + -0x110);
              goto LAB_10a32b8a8;
            }
            if (cVar3 == '\x06') {
              if (*(int *)(puVar5 + -0x110) == 0x6f6f6d73 && *(short *)(puVar5 + -0x10c) == 0x6874)
              {
LAB_10a32b898:
                uVar16 = 1;
                goto LAB_10a32b89c;
              }
            }
            else if ((cVar3 == '\x0e') &&
                    (*(long *)(puVar5 + -0x110) == 0x696c7069746c756d &&
                     *(long *)(puVar5 + -0x10a) == 0x6e6f69746163696c)) {
LAB_10a32b840:
              uVar16 = 2;
LAB_10a32b89c:
              *(undefined4 *)(lVar25 + 0x18) = uVar16;
            }
          }
LAB_10a32b934:
          puVar9 = (undefined8 *)0x20;
          __Znwm();
          *(undefined8 **)(puVar5 + -0x150) = puVar9;
          *(undefined8 *)(puVar5 + -0x140) = 0x8000000000000020;
          *(undefined8 *)(puVar5 + -0x148) = 0x18;
          puVar9[1] = 0x697665645f64696f;
          *puVar9 = 0x72646e615f6e696d;
          puVar9[2] = 0x7373616c635f6563;
          *(undefined1 *)(puVar9 + 3) = 0;
          func_0x000107c2b054(puVar5 + -0x200,&UNK_10f64efef);
          puVar9 = (undefined8 *)(puVar5 + -0xf0);
          func_0x00010a32c744(puVar9,puVar5 + -0x150,puVar5 + -0x200);
          if (*(char *)((long)puVar9 + 0x17) < '\0') {
            func_0x000107c3192c(puVar5 + -0x130,*puVar9,puVar9[1]);
          }
          else {
            uVar30 = puVar9[1];
            uVar29 = *puVar9;
            *(undefined8 *)(puVar5 + -0x120) = puVar9[2];
            *(undefined8 *)(puVar5 + -0x128) = uVar30;
            *(undefined8 *)(puVar5 + -0x130) = uVar29;
          }
          if ((char)puVar5[-0x1e9] < '\0') {
            __ZdlPv(*(undefined8 *)(puVar5 + -0x200));
          }
          if ((char)puVar5[-0x139] < '\0') {
            __ZdlPv(*(undefined8 *)(puVar5 + -0x150));
          }
          cVar3 = puVar5[-0x119];
          if (cVar3 < '\0') {
            if (*(long *)(puVar5 + -0x128) == 3) {
              puVar18 = *(ushort **)(puVar5 + -0x130);
              if (*puVar18 == 0x6f6c && (char)puVar18[1] == 'w') goto LAB_10a32bc04;
              uVar15 = *puVar18 ^ 0x696d | (byte)puVar18[1] ^ 100;
LAB_10a32bab8:
              uVar16 = 2;
            }
            else {
              if (*(long *)(puVar5 + -0x128) != 4) goto LAB_10a32ba38;
              puVar17 = *(uint **)(puVar5 + -0x130);
LAB_10a32ba10:
              uVar15 = (*puVar17 & 0xff00ff00) >> 8 | (*puVar17 & 0xff00ff) << 8;
              uVar2 = uVar15 >> 0x10 | uVar15 << 0x10;
              uVar15 = (uint)(0x68696768 < uVar2);
              if (uVar2 < 0x68696768) {
                uVar15 = 0xffffffff;
              }
              uVar16 = 3;
            }
            if (uVar15 != 0) {
              uVar16 = 0xffffffff;
            }
          }
          else if (cVar3 == '\x03') {
            if (*(short *)(puVar5 + -0x130) != 0x6f6c || puVar5[-0x12e] != 'w') {
              uVar15 = *(ushort *)(puVar5 + -0x130) ^ 0x696d | (byte)puVar5[-0x12e] ^ 100;
              goto LAB_10a32bab8;
            }
LAB_10a32bc04:
            uVar16 = 1;
          }
          else {
            if (cVar3 == '\x04') {
              puVar17 = (uint *)(puVar5 + -0x130);
              goto LAB_10a32ba10;
            }
LAB_10a32ba38:
            uVar16 = 0xffffffff;
          }
          *(undefined4 *)(plVar26[0x19] + 0x20) = uVar16;
          puVar5[-0x1e9] = 0x14;
          *(undefined4 *)(puVar5 + -0x1f0) = 0x7373616c;
          *(undefined8 *)(puVar5 + -0x1f8) = 0x635f656369766564;
          *(undefined8 *)(puVar5 + -0x200) = 0x5f736f695f6e696d;
          puVar5[-0x1ec] = 0;
          func_0x000107c2b054(puVar5 + -0x220,&UNK_10f64efef);
          puVar9 = (undefined8 *)(puVar5 + -0xf0);
          func_0x00010a32c744(puVar9,puVar5 + -0x200,puVar5 + -0x220);
          if (*(char *)((long)puVar9 + 0x17) < '\0') {
            func_0x000107c3192c(puVar5 + -0x150,*puVar9,puVar9[1]);
          }
          else {
            uVar30 = puVar9[1];
            uVar29 = *puVar9;
            *(undefined8 *)(puVar5 + -0x140) = puVar9[2];
            *(undefined8 *)(puVar5 + -0x148) = uVar30;
            *(undefined8 *)(puVar5 + -0x150) = uVar29;
          }
          if ((char)puVar5[-0x209] < '\0') {
            __ZdlPv(*(undefined8 *)(puVar5 + -0x220));
          }
          if ((char)puVar5[-0x1e9] < '\0') {
            __ZdlPv(*(undefined8 *)(puVar5 + -0x200));
          }
          cVar3 = puVar5[-0x139];
          if (cVar3 < '\0') {
            if (*(long *)(puVar5 + -0x148) == 3) {
              puVar18 = *(ushort **)(puVar5 + -0x150);
              if (*puVar18 == 0x6f6c && (char)puVar18[1] == 'w') goto LAB_10a32bda4;
              uVar15 = *puVar18 ^ 0x696d | (byte)puVar18[1] ^ 100;
LAB_10a32bc48:
              uVar16 = 2;
            }
            else {
              if (*(long *)(puVar5 + -0x148) != 4) goto LAB_10a32bbc0;
              puVar17 = *(uint **)(puVar5 + -0x150);
LAB_10a32bb98:
              uVar15 = (*puVar17 & 0xff00ff00) >> 8 | (*puVar17 & 0xff00ff) << 8;
              uVar2 = uVar15 >> 0x10 | uVar15 << 0x10;
              uVar15 = (uint)(0x68696768 < uVar2);
              if (uVar2 < 0x68696768) {
                uVar15 = 0xffffffff;
              }
              uVar16 = 3;
            }
            if (uVar15 != 0) {
              uVar16 = 0xffffffff;
            }
          }
          else if (cVar3 == '\x03') {
            if (*(short *)(puVar5 + -0x150) != 0x6f6c || puVar5[-0x14e] != 'w') {
              uVar15 = *(ushort *)(puVar5 + -0x150) ^ 0x696d | (byte)puVar5[-0x14e] ^ 100;
              goto LAB_10a32bc48;
            }
LAB_10a32bda4:
            uVar16 = 1;
          }
          else {
            if (cVar3 == '\x04') {
              puVar17 = (uint *)(puVar5 + -0x150);
              goto LAB_10a32bb98;
            }
LAB_10a32bbc0:
            uVar16 = 0xffffffff;
          }
          *(undefined4 *)(plVar26[0x19] + 0x24) = uVar16;
          *(undefined8 *)(puVar5 + -0x218) = 0x6563697665645f72;
          *(undefined8 *)(puVar5 + -0x220) = 0x6568746f5f6e696d;
          *(undefined8 *)(puVar5 + -0x212) = 0x7373616c635f6563;
          *(undefined2 *)(puVar5 + -0x20a) = 0x1600;
          func_0x000107c2b054(puVar5 + -0x238,&UNK_10f64efef);
          puVar9 = (undefined8 *)(puVar5 + -0xf0);
          func_0x00010a32c744(puVar9,puVar5 + -0x220,puVar5 + -0x238);
          if (*(char *)((long)puVar9 + 0x17) < '\0') {
            func_0x000107c3192c(puVar5 + -0x200,*puVar9,puVar9[1]);
          }
          else {
            uVar30 = puVar9[1];
            uVar29 = *puVar9;
            *(undefined8 *)(puVar5 + -0x1f0) = puVar9[2];
            *(undefined8 *)(puVar5 + -0x1f8) = uVar30;
            *(undefined8 *)(puVar5 + -0x200) = uVar29;
          }
          if ((char)puVar5[-0x221] < '\0') {
            __ZdlPv(*(undefined8 *)(puVar5 + -0x238));
          }
          if ((char)puVar5[-0x209] < '\0') {
            __ZdlPv(*(undefined8 *)(puVar5 + -0x220));
          }
          cVar3 = puVar5[-0x1e9];
          if (cVar3 < '\0') {
            if (*(long *)(puVar5 + -0x1f8) == 3) {
              psVar19 = *(short **)(puVar5 + -0x200);
              if (*psVar19 == 0x6f6c && (char)psVar19[1] == 'w') {
                uVar16 = 1;
              }
              else {
                uVar16 = 2;
                if (*psVar19 != 0x696d || (char)psVar19[1] != 'd') {
                  uVar16 = 0xffffffff;
                }
              }
            }
            else {
              if (*(long *)(puVar5 + -0x1f8) == 4) {
                puVar17 = *(uint **)(puVar5 + -0x200);
                goto LAB_10a32bd1c;
              }
              uVar16 = 0xffffffff;
            }
            *(undefined4 *)(plVar26[0x19] + 0x28) = uVar16;
LAB_10a32be1c:
            __ZdlPv(*(undefined8 *)(puVar5 + -0x200));
          }
          else {
            if (cVar3 == '\x03') {
              if (*(short *)(puVar5 + -0x200) == 0x6f6c && puVar5[-0x1fe] == 'w') {
                uVar16 = 1;
              }
              else {
                uVar16 = 2;
                if (*(short *)(puVar5 + -0x200) != 0x696d || puVar5[-0x1fe] != 'd') {
                  uVar16 = 0xffffffff;
                }
              }
            }
            else {
              if (cVar3 == '\x04') {
                puVar17 = (uint *)(puVar5 + -0x200);
LAB_10a32bd1c:
                uVar15 = (*puVar17 & 0xff00ff00) >> 8 | (*puVar17 & 0xff00ff) << 8;
                uVar2 = uVar15 >> 0x10 | uVar15 << 0x10;
                uVar15 = (uint)(0x68696768 < uVar2);
                if (uVar2 < 0x68696768) {
                  uVar15 = 0xffffffff;
                }
                uVar16 = 3;
                if (uVar15 != 0) {
                  uVar16 = 0xffffffff;
                }
                *(undefined4 *)(plVar26[0x19] + 0x28) = uVar16;
                if (cVar3 < '\0') goto LAB_10a32be1c;
                goto LAB_10a32be24;
              }
              uVar16 = 0xffffffff;
            }
            *(undefined4 *)(plVar26[0x19] + 0x28) = uVar16;
          }
LAB_10a32be24:
          if ((char)puVar5[-0x139] < '\0') {
            __ZdlPv(*(undefined8 *)(puVar5 + -0x150));
          }
          func_0x000109839668(puVar5 + -0xf0);
        }
        puVar5[-0xd9] = 8;
        *(undefined8 *)(puVar5 + -0xf0) = 0x64695f7465737361;
        puVar5[-0xe8] = 0;
        *(undefined8 *)(puVar5 + -0x110) = 0;
        pdVar10 = (double *)(puVar5 + -0x1b8);
        FUN_10a32c3a8(pdVar10,puVar5 + -0xf0,puVar5 + -0x110);
        *(int *)(plVar26 + 4) = (int)*pdVar10;
        puVar5[-0xd9] = 0x12;
        *(undefined2 *)(puVar5 + -0xe0) = 0x6465;
        *(undefined8 *)(puVar5 + -0xe8) = 0x7269757165725f6f;
        *(undefined8 *)(puVar5 + -0xf0) = 0x65726574735f7369;
        puVar5[-0xde] = 0;
        puVar5[-0x110] = 0;
        puVar12 = puVar5 + -0x1b8;
        func_0x00010a32c7cc(puVar12,puVar5 + -0xf0,puVar5 + -0x110);
        *(undefined1 *)(plVar26 + 0x1b) = *puVar12;
        puVar5[-0xd9] = 0x12;
        *(undefined2 *)(puVar5 + -0xe0) = 0x7475;
        *(undefined8 *)(puVar5 + -0xe8) = 0x706e695f656c6163;
        *(undefined8 *)(puVar5 + -0xf0) = 0x73796172675f7369;
        puVar5[-0xde] = 0;
        puVar5[-0x110] = 0;
        puVar12 = puVar5 + -0x1b8;
        puVar13 = puVar5 + -0xf0;
        plVar14 = (long *)(puVar5 + -0x110);
        func_0x00010a32c7cc(puVar12,puVar13,plVar14);
        *(undefined1 *)((long)plVar26 + 0xd9) = *puVar12;
        *(undefined1 *)(plVar26 + 3) = 1;
        plVar8 = (long *)plVar26[0x16];
        if (plVar8 != (long *)0x0) {
          puVar11 = &UNK_10f64f465;
          do {
            lVar25 = plVar8[8];
            if ((plVar8[6] - plVar8[5] != plVar8[9] - lVar25) ||
               (plVar8[0xc] - plVar8[0xb] != 0 &&
                (plVar8[6] - plVar8[5] >> 3) * -0x5555555555555555 -
                (plVar8[0xc] - plVar8[0xb] >> 6) != 0)) {
LAB_10a32c03c:
              FUN_10a00946c(puVar11);
LAB_10a32c040:
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10a32c044);
              (*pcVar4)();
            }
            if (lVar25 != plVar8[9]) {
              lVar23 = (long)*(char *)(lVar25 + 0x17);
              if (lVar23 < 0) {
                lVar23 = *(long *)(lVar25 + 8);
              }
              if (lVar23 != 0) {
                puVar11 = &UNK_10f64f4ca;
                goto LAB_10a32c03c;
              }
            }
            plVar8 = (long *)*plVar8;
          } while (plVar8 != (long *)0x0);
        }
        func_0x000109839668(puVar5 + -0x1e8);
        plVar8 = (long *)(puVar5 + -0x1b8);
        func_0x000109839668();
        if ((char)puVar5[-0x171] < '\0') {
          plVar8 = *(long **)(puVar5 + -0x188);
          __ZdlPv();
        }
      }
      if ((char)puVar5[-0x159] < '\0') {
        plVar8 = *(long **)(puVar5 + -0x170);
        __ZdlPv();
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar5 + -0xa8)) {
        return plVar8;
      }
      ___stack_chk_fail();
      func_0x000109839668(puVar5 + -0xf0);
      func_0x000109839668(puVar5 + -0x1e8);
      func_0x000109839668(puVar5 + -0x1b8);
      if ((char)puVar5[-0x171] < '\0') {
        __ZdlPv(*(undefined8 *)(puVar5 + -0x188));
      }
      if ((char)puVar5[-0x159] < '\0') {
        __ZdlPv(*(undefined8 *)(puVar5 + -0x170));
      }
      plVar26 = plVar8;
      __Unwind_Resume();
      *(long **)(puVar5 + -0x290) = unaff_x22;
      *(ulong *)(puVar5 + -0x288) = uVar27;
      *(long **)(puVar5 + -0x280) = plVar24;
      *(long **)(puVar5 + -0x278) = plVar8;
      *(undefined1 **)(puVar5 + -0x270) = unaff_x29;
      *(code **)(puVar5 + -0x268) = FUN_10a32c3a8;
      plVar8 = plVar26;
      FUN_10a10a278();
      if ((plVar26 + 1 != plVar8) && (*(int *)plVar8[7] == 0)) {
        FUN_10a10a278(plVar26,puVar13);
        plVar14 = (long *)((int *)plVar26[7] + 2);
        func_0x0001098390a4(&UNK_10f63c7bf,0x1d9,&UNK_10f6514a4,*(int *)plVar26[7] == 0);
      }
      return plVar14;
    }
    uVar20 = plVar14[2] - *plVar14;
    uVar21 = (long)uVar20 >> 5;
    if (uVar21 <= uVar27) {
      uVar21 = uVar27;
    }
    if (0x7fffffffffffffbf < uVar20) {
      uVar21 = 0x3ffffffffffffff;
    }
    plVar7 = plVar14;
    FUN_10a0435e0();
    plVar24 = (long *)((long)plVar7 + lVar25);
    lVar25 = plVar8[4];
    lVar31 = plVar8[7];
    lVar23 = plVar8[6];
    lVar36 = plVar8[1];
    lVar35 = *plVar8;
    lVar34 = plVar8[3];
    lVar33 = plVar8[2];
    plVar24[5] = plVar8[5];
    plVar24[4] = lVar25;
    plVar24[7] = lVar31;
    plVar24[6] = lVar23;
    plVar24[1] = lVar36;
    *plVar24 = lVar35;
    plVar24[3] = lVar34;
    plVar24[2] = lVar33;
    plVar26 = plVar24 + 8;
    lVar25 = (long)plVar24 - (plVar14[1] - *plVar14);
    _memcpy(lVar25);
    plVar8 = (long *)*plVar14;
    *plVar14 = lVar25;
    plVar14[1] = (long)plVar26;
    plVar14[2] = (long)(plVar7 + uVar21 * 8);
    if (plVar8 != (long *)0x0) {
      __ZdlPv();
    }
  }
  plVar14[1] = (long)plVar26;
  return plVar8;
code_r0x00010a32b1e4:
  FUN_10a0b4ec0(unaff_x22 + 5,unaff_x19 + 2);
  iVar1 = *(int *)((long)unaff_x19 + 4);
  if (iVar1 == -1) {
    *(undefined8 *)(puVar5 + -0x110) = 0;
    *(undefined8 *)(puVar5 + -0x108) = 0;
    *(undefined8 *)(puVar5 + -0x100) = 0;
  }
  else {
    uVar27 = (unaff_x22[6] - unaff_x22[5] >> 3) * -0x5555555555555555;
    if (uVar27 < (ulong)(long)iVar1 || uVar27 - (long)iVar1 == 0) goto LAB_10a32c040;
    puVar9 = (undefined8 *)(unaff_x22[5] + (long)iVar1 * 0x18);
    if (*(char *)((long)puVar9 + 0x17) < '\0') {
      func_0x000107c3192c(puVar5 + -0x110,*puVar9,puVar9[1]);
    }
    else {
      uVar30 = puVar9[1];
      uVar29 = *puVar9;
      *(undefined8 *)(puVar5 + -0x100) = puVar9[2];
      *(undefined8 *)(puVar5 + -0x108) = uVar30;
      *(undefined8 *)(puVar5 + -0x110) = uVar29;
    }
  }
  FUN_10a0b4ec0(unaff_x22 + 8,puVar5 + -0x110);
  plVar8 = unaff_x19 + 0xb;
  unaff_x30 = 0x10a32b268;
  puVar5 = puVar5 + -0x260;
  unaff_x23 = plVar14;
  goto SUB_10a32a860;
}



/* Entry: 10a440a20; end: 10a440aef;  */

void FUN_10a440a20(void)

{
  return;
}



/* Entry: 10a440af0; end: 10a440bbf;  */

void FUN_10a440af0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a440bc0(param_2,param_3);
  FUN_10a076f00(param_5);
  func_0x000109898518(param_2,param_4);
  (**(code **)(*plVar4 + 0x100))(plVar4,param_2);
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a440bc0; end: 10a440c27;  */

void FUN_10a440bc0(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *extraout_x8;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar3 = param_1;
  func_0x000109898688();
  if (ppuVar3 != (undefined **)0x0) {
    FUN_10a053854(param_1,ppuVar3);
    param_2 = ppuVar3;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0x10;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar4 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a440cec(plVar4,param_2);
  FUN_10a052e3c(param_4);
  (**(code **)(*plVar4 + 0x120))();
  *extraout_x8 = 2;
  *(char *)(extraout_x8 + 2) = (char)plVar4;
  plVar4 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar4[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar4;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_88 = plVar4;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar4 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_a8 = lVar6;
          lStack_a0 = lVar6;
          lStack_98 = lVar6;
          lStack_90 = lVar12;
          func_0x00010988c1b8(&lStack_a8);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a440c28; end: 10a440ceb;  */

void FUN_10a440c28(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a440cec(param_2,param_3);
  FUN_10a052e3c(param_5);
  (**(code **)(*param_2 + 0x120))();
  *param_1 = 2;
  *(char *)(param_1 + 2) = (char)param_2;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a440cec; end: 10a440d53;  */

void FUN_10a440cec(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *extraout_x8;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar3 = param_1;
  func_0x000109898688();
  if (ppuVar3 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar3);
    param_2 = ppuVar3;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0x10;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar4 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a440cec(plVar4,param_2);
  FUN_10a052e3c(param_4);
  (**(code **)(*plVar4 + 0x128))();
  *extraout_x8 = 2;
  *(char *)(extraout_x8 + 2) = (char)plVar4;
  plVar4 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar4[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar4;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_88 = plVar4;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar4 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_a8 = lVar6;
          lStack_a0 = lVar6;
          lStack_98 = lVar6;
          lStack_90 = lVar12;
          func_0x00010988c1b8(&lStack_a8);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a440d54; end: 10a440e17;  */

void FUN_10a440d54(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a440cec(param_2,param_3);
  FUN_10a052e3c(param_5);
  (**(code **)(*param_2 + 0x128))();
  *param_1 = 2;
  *(char *)(param_1 + 2) = (char)param_2;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a440e18; end: 10a440f5b;  */

void FUN_10a440e18(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  float fVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = param_2;
  FUN_10a440bc0(param_2,param_3);
  FUN_10a440f5c(param_5);
  func_0x000109898518(param_2,param_4);
  if (*(int *)(param_4 + 0x10) == 3) {
    fVar1 = (float)*(double *)(param_4 + 0x18);
    if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 0x18))) {
      fVar1 = 0.0;
    }
    if (plVar5[0x44] != 0) {
      FUN_10a41dae8(plVar5);
      if ((uint)param_2 < 8) {
        (**(code **)(*(long *)plVar5[0x44] + 0x1b0))(fVar1,(long *)plVar5[0x44],param_2);
      }
      *param_1 = 0;
      plVar5 = plVar4 + 0x4b;
      lVar6 = plVar4[0x59];
      uVar7 = lVar6 - 1;
      plVar4[0x59] = uVar7;
      if (uVar7 < 8) {
        uVar7 = plVar5[lVar6 + 2];
        if (plVar4[0x5a] == uVar7) {
          return;
        }
      }
      else {
        uVar7 = *(ulong *)(plVar4[0x57] + -8);
        plVar4[0x57] = plVar4[0x57] + -8;
        if (plVar4[0x5a] == uVar7) {
          return;
        }
      }
      lVar6 = *plVar5;
      lVar11 = plVar4[0x4c];
      lVar9 = lVar11 - lVar6;
      uVar13 = lVar9 >> 4;
      if (uVar13 < uVar7) {
        uVar14 = uVar7 - uVar13;
        lVar12 = plVar4[0x4d];
        if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
          if (uVar7 >> 0x3c == 0) {
            uVar8 = lVar12 - lVar6 >> 3;
            if (uVar8 <= uVar7) {
              uVar8 = uVar7;
            }
            if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
              uVar8 = 0xfffffffffffffff;
            }
            plStack_68 = plVar5;
            if (uVar8 >> 0x3c == 0) {
              lVar3 = uVar8 << 4;
              __Znwm();
              lVar11 = lVar3 + lVar9;
              _bzero(lVar11,uVar14 * 0x10);
              lVar10 = lVar11 + uVar13 * -0x10;
              _memcpy(lVar10,lVar6,lVar9);
              *plVar5 = lVar10;
              plVar4[0x4c] = lVar11 + uVar14 * 0x10;
              plVar4[0x4d] = lVar3 + uVar8 * 0x10;
              lStack_88 = lVar6;
              lStack_80 = lVar6;
              lStack_78 = lVar6;
              lStack_70 = lVar12;
              func_0x00010988c1b8(&lStack_88);
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar2)();
        }
        _bzero(lVar11,uVar14 * 0x10);
        plVar4[0x4c] = lVar11 + uVar14 * 0x10;
      }
      else if (uVar7 < uVar13) {
        lVar6 = lVar6 + uVar7 * 0x10;
        while (lVar11 != lVar6) {
          lVar11 = lVar11 + -0x10;
          func_0x00010988c204(lVar11);
        }
        plVar4[0x4c] = lVar6;
      }
code_r0x00010988c138:
      plVar4[0x5a] = uVar7;
      return;
    }
    FUN_10a00946c(&UNK_10f656fd4);
  }
  else {
    func_0x00010988bd28(&UNK_10f68f550);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a440f48);
  (*pcVar2)();
}



/* Entry: 10a440f5c; end: 10a440f7f;  */

void FUN_10a440f5c(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined4 *extraout_x8;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  long *plVar20;
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar5 = (long *)0x2;
  uVar10 = 0;
  FUN_10a052ee0(2,0);
  plVar6 = plVar5;
  (**(code **)(*plVar5 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar7 = plVar5;
  FUN_10a440bc0(plVar5,uVar10);
  FUN_10a441250(param_4);
  if (*param_1 == 7) {
    plVar8 = plVar5;
    (**(code **)(*plVar5 + 0x98))(plVar5,*(undefined8 *)(param_1 + 2));
    plVar16 = plVar5;
    (**(code **)(*plVar5 + 0x228))(plVar5,&stack0xffffffffffffffa8);
    plVar20 = plVar8;
    if ((int)plVar16 != 0) {
      (**(code **)(*plVar5 + 0x58))();
      lVar9 = plVar5[0x48];
      if ((lVar9 == 0) ||
         (___dynamic_cast(lVar9,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), lVar9 == 0)) {
        func_0x00010988bd28(&UNK_10f685540);
        goto LAB_10a44120c;
      }
      plVar20 = (long *)0x0;
      FUN_10a688ac0(&lStack_90,&stack0xffffffffffffff90,*(undefined8 *)(lVar9 + 8));
      if (plVar8 != (long *)0x0) {
        (**(code **)*plVar8)();
      }
    }
    if (plVar20 != (long *)0x0) {
      (**(code **)*plVar20)();
    }
    if (((ulong)plVar16 & 1) != 0) {
      plVar5 = (long *)0x60;
      __Znwm();
      plVar8 = plVar5 + 1;
      *plVar8 = 0;
      plVar5[2] = 0;
      *plVar5 = (long)&PTR_FUN_110bd9808;
      plVar5[4] = lStack_88;
      plVar5[3] = lStack_90;
      if (lStack_88 != 0) {
        plVar16 = (long *)(lStack_88 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar2) {
            *plVar16 = *plVar16 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      plVar5[6] = (long)plStack_78;
      plVar5[5] = lStack_80;
      if (plStack_78 != (long *)0x0) {
        plVar16 = plStack_78 + 2;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar2) {
            *plVar16 = *plVar16 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      *(undefined1 *)(plVar5 + 0xb) = 2;
      FUN_10a688c1c(&lStack_90);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar2) {
          *plVar8 = *plVar8 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar7[0x4c] = (long)(plVar5 + 3);
      plVar16 = (long *)plVar7[0x4d];
      plVar7[0x4d] = (long)plVar5;
      if (plVar16 != (long *)0x0) {
        plVar7 = plVar16 + 1;
        do {
          lVar9 = *plVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = lVar9 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
        }
      }
      do {
        lVar9 = *plVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar2) {
          *plVar8 = lVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
      *extraout_x8 = 0;
      plVar5 = plVar6 + 0x4b;
      lVar9 = plVar6[0x59];
      uVar11 = lVar9 - 1;
      plVar6[0x59] = uVar11;
      if (uVar11 < 8) {
        uVar11 = plVar5[lVar9 + 2];
        if (plVar6[0x5a] == uVar11) {
          return;
        }
      }
      else {
        uVar11 = *(ulong *)(plVar6[0x57] + -8);
        plVar6[0x57] = plVar6[0x57] + -8;
        if (plVar6[0x5a] == uVar11) {
          return;
        }
      }
      lVar9 = *plVar5;
      lVar15 = plVar6[0x4c];
      lVar13 = lVar15 - lVar9;
      uVar18 = lVar13 >> 4;
      if (uVar18 < uVar11) {
        uVar19 = uVar11 - uVar18;
        lVar17 = plVar6[0x4d];
        if ((ulong)(lVar17 - lVar15 >> 4) < uVar19) {
          if (uVar11 >> 0x3c == 0) {
            uVar12 = lVar17 - lVar9 >> 3;
            if (uVar12 <= uVar11) {
              uVar12 = uVar11;
            }
            if (0x7fffffffffffffef < (ulong)(lVar17 - lVar9)) {
              uVar12 = 0xfffffffffffffff;
            }
            plStack_78 = plVar5;
            if (uVar12 >> 0x3c == 0) {
              lVar4 = uVar12 << 4;
              __Znwm();
              lVar15 = lVar4 + lVar13;
              _bzero(lVar15,uVar19 * 0x10);
              lVar14 = lVar15 + uVar18 * -0x10;
              _memcpy(lVar14,lVar9,lVar13);
              *plVar5 = lVar14;
              plVar6[0x4c] = lVar15 + uVar19 * 0x10;
              plVar6[0x4d] = lVar4 + uVar12 * 0x10;
              lStack_98 = lVar9;
              lStack_90 = lVar9;
              lStack_88 = lVar9;
              lStack_80 = lVar17;
              func_0x00010988c1b8(&lStack_98);
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar3)();
        }
        _bzero(lVar15,uVar19 * 0x10);
        plVar6[0x4c] = lVar15 + uVar19 * 0x10;
      }
      else if (uVar11 < uVar18) {
        lVar9 = lVar9 + uVar11 * 0x10;
        while (lVar15 != lVar9) {
          lVar15 = lVar15 + -0x10;
          func_0x00010988c204(lVar15);
        }
        plVar6[0x4c] = lVar9;
      }
code_r0x00010988c138:
      plVar6[0x5a] = uVar11;
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a44120c:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a441210);
  (*pcVar3)();
}



/* Entry: 10a440f80; end: 10a44124f;  */

void FUN_10a440f80(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long *plVar18;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_2;
  FUN_10a440bc0(param_2,param_3);
  FUN_10a441250(param_5);
  if (*param_4 == 7) {
    plVar9 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_4 + 2));
    plVar7 = param_2;
    (**(code **)(*param_2 + 0x228))(param_2,&stack0xffffffffffffffb8);
    plVar18 = plVar9;
    if ((int)plVar7 != 0) {
      (**(code **)(*param_2 + 0x58))();
      lVar8 = param_2[0x48];
      if ((lVar8 == 0) ||
         (___dynamic_cast(lVar8,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), lVar8 == 0)) {
        func_0x00010988bd28(&UNK_10f685540);
        goto LAB_10a44120c;
      }
      plVar18 = (long *)0x0;
      FUN_10a688ac0(&lStack_80,&stack0xffffffffffffffa0,*(undefined8 *)(lVar8 + 8));
      if (plVar9 != (long *)0x0) {
        (**(code **)*plVar9)();
      }
    }
    if (plVar18 != (long *)0x0) {
      (**(code **)*plVar18)();
    }
    if (((ulong)plVar7 & 1) != 0) {
      plVar9 = (long *)0x60;
      __Znwm();
      plVar7 = plVar9 + 1;
      *plVar7 = 0;
      plVar9[2] = 0;
      *plVar9 = (long)&PTR_FUN_110bd9808;
      plVar9[4] = lStack_78;
      plVar9[3] = lStack_80;
      if (lStack_78 != 0) {
        plVar18 = (long *)(lStack_78 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar2) {
            *plVar18 = *plVar18 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      plVar9[6] = (long)plStack_68;
      plVar9[5] = lStack_70;
      if (plStack_68 != (long *)0x0) {
        plVar18 = plStack_68 + 2;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar2) {
            *plVar18 = *plVar18 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      *(undefined1 *)(plVar9 + 0xb) = 2;
      FUN_10a688c1c(&lStack_80);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = *plVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar6[0x4c] = (long)(plVar9 + 3);
      plVar18 = (long *)plVar6[0x4d];
      plVar6[0x4d] = (long)plVar9;
      if (plVar18 != (long *)0x0) {
        plVar6 = plVar18 + 1;
        do {
          lVar8 = *plVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
        }
      }
      do {
        lVar8 = *plVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
      *param_1 = 0;
      plVar6 = plVar5 + 0x4b;
      lVar8 = plVar5[0x59];
      uVar10 = lVar8 - 1;
      plVar5[0x59] = uVar10;
      if (uVar10 < 8) {
        uVar10 = plVar6[lVar8 + 2];
        if (plVar5[0x5a] == uVar10) {
          return;
        }
      }
      else {
        uVar10 = *(ulong *)(plVar5[0x57] + -8);
        plVar5[0x57] = plVar5[0x57] + -8;
        if (plVar5[0x5a] == uVar10) {
          return;
        }
      }
      lVar8 = *plVar6;
      lVar14 = plVar5[0x4c];
      lVar12 = lVar14 - lVar8;
      uVar16 = lVar12 >> 4;
      if (uVar16 < uVar10) {
        uVar17 = uVar10 - uVar16;
        lVar15 = plVar5[0x4d];
        if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
          if (uVar10 >> 0x3c == 0) {
            uVar11 = lVar15 - lVar8 >> 3;
            if (uVar11 <= uVar10) {
              uVar11 = uVar10;
            }
            if (0x7fffffffffffffef < (ulong)(lVar15 - lVar8)) {
              uVar11 = 0xfffffffffffffff;
            }
            plStack_68 = plVar6;
            if (uVar11 >> 0x3c == 0) {
              lVar4 = uVar11 << 4;
              __Znwm();
              lVar14 = lVar4 + lVar12;
              _bzero(lVar14,uVar17 * 0x10);
              lVar13 = lVar14 + uVar16 * -0x10;
              _memcpy(lVar13,lVar8,lVar12);
              *plVar6 = lVar13;
              plVar5[0x4c] = lVar14 + uVar17 * 0x10;
              plVar5[0x4d] = lVar4 + uVar11 * 0x10;
              lStack_88 = lVar8;
              lStack_80 = lVar8;
              lStack_78 = lVar8;
              lStack_70 = lVar15;
              func_0x00010988c1b8(&lStack_88);
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar3)();
        }
        _bzero(lVar14,uVar17 * 0x10);
        plVar5[0x4c] = lVar14 + uVar17 * 0x10;
      }
      else if (uVar10 < uVar16) {
        lVar8 = lVar8 + uVar10 * 0x10;
        while (lVar14 != lVar8) {
          lVar14 = lVar14 + -0x10;
          func_0x00010988c204(lVar14);
        }
        plVar5[0x4c] = lVar8;
      }
code_r0x00010988c138:
      plVar5[0x5a] = uVar10;
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a44120c:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a441210);
  (*pcVar3)();
}



/* Entry: 10a441250; end: 10a441273;  */

void FUN_10a441250(undefined8 param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1 == 1) {
    return;
  }
  puVar1 = (undefined8 *)0x1;
  FUN_10a052ee0(1,0,param_1);
  *puVar1 = &PTR_FUN_110bd9808;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a441274; end: 10a441283;  */

void FUN_10a441274(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bd9808;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a441284; end: 10a4412a3;  */

void FUN_10a441284(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bd9808;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a4412a4; end: 10a4412cb;  */

undefined1  [16] FUN_10a4412a4(long param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar5;
  undefined **ppuVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_38;
  
  bVar2 = *(byte *)(param_1 + 0x58);
  if (3 < (ulong)bVar2) {
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10a4412c8);
    (*UNRECOVERED_JUMPTABLE)();
  }
  auVar10._8_8_ = (code **)(&PTR_FUN_110b9a040)[bVar2];
  puVar5 = (undefined8 *)(param_1 + 0x18);
  switch(bVar2) {
  case 0:
    auVar10._0_8_ = puVar5;
    return auVar10;
  case 1:
    puVar5 = (undefined8 *)(param_1 + 0x20);
    UNRECOVERED_JUMPTABLE = *(code **)*puVar5;
                    /* WARNING: Could not recover jumptable at 0x00010a00496c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    auVar11._8_8_ = UNRECOVERED_JUMPTABLE;
    auVar11._0_8_ = puVar5;
    return auVar11;
  case 3:
    auVar12._8_8_ = auVar10._8_8_;
    auVar12._0_8_ = puVar5;
    return auVar12;
  }
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  if (((*ppuVar6 == (undefined *)0x0) &&
      (plVar7 = *(long **)(param_1 + 0x30), plVar7 != (long *)0x0)) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), plVar7 != (long *)0x0)) {
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x870);
      uStack_60 = *(undefined8 *)(param_1 + 0x20);
      uStack_68 = *puVar5;
      *puVar5 = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      pcStack_78 = FUN_10a69fabc;
      ppuStack_70 = &PTR_DAT_110c0ce80;
      auVar10._8_8_ = &pcStack_78;
      FUN_10a4634ec(uVar8);
      (*(code *)*ppuStack_70)(&ppuStack_70);
    }
    plVar1 = plVar7 + 1;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x00010a004dac(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    auVar13._8_8_ = auVar10._8_8_;
    auVar13._0_8_ = puVar5;
    return auVar13;
  }
  ___stack_chk_fail();
  if ((int)auVar10._8_8_ == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  auVar14._8_8_ = 0x18;
  auVar14._0_8_ = &UNK_10f66c09c;
  return auVar14;
}



/* Entry: 10a4412cc; end: 10a44137f;  */

void FUN_10a4412cc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a441380(param_1,param_2,0x178,1,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a441380; end: 10a441407;  */

void FUN_10a441380(undefined4 *param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = param_2;
  FUN_10a440bc0(param_2,param_5);
  FUN_10a065020(param_7);
  func_0x00010989847c(param_2,param_6);
  plVar1 = (long *)(lVar2 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*plVar1 + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(plVar1,param_2);
  *param_1 = 0;
  return;
}


