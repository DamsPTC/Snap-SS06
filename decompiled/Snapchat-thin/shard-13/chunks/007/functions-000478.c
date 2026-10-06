/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ab56ffc; end: 10ab57043;  */

void FUN_10ab56ffc(void)

{
  return;
}



/* Entry: 10ab57044; end: 10ab570e7;  */

void FUN_10ab57044(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lStack_30;
  long *plStack_28;
  
  lStack_30 = *param_1;
  plStack_28 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  if (lStack_30 != 0) {
    plVar5 = *(long **)(param_2 + 0x10);
    func_0x00010a7e2008(plVar5[0x1e] + 0xf8,1,&lStack_30);
    (**(code **)(*plVar5 + 0x90))(plVar5);
  }
  plVar5 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return;
}



/* Entry: 10ab570e8; end: 10ab57103;  */

void FUN_10ab570e8(void)

{
  return;
}



/* Entry: 10ab57104; end: 10ab57267;  */

void FUN_10ab57104(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lStack_40;
  long *plStack_38;
  long *plStack_30;
  long *plStack_28;
  
  plVar3 = (long *)0x90;
  __Znwm();
  plVar4 = plVar3 + 1;
  *plVar4 = 0;
  *plVar3 = (long)&PTR_FUN_110b9fe30;
  lStack_40 = *param_2;
  plStack_30 = plVar3 + 3;
  plVar3[4] = param_2[1];
  *plStack_30 = lStack_40;
  plVar3[2] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  plVar3[7] = 0x32aaaba7;
  plVar3[9] = 0;
  plVar3[8] = 0;
  plVar3[0xb] = 0;
  plVar3[10] = 0;
  plVar3[0xd] = 0;
  plVar3[0xc] = 0;
  plVar3[0xf] = 0;
  plVar3[0xe] = 0;
  plVar3[0x11] = 0;
  plVar3[0x10] = 0;
  *param_1 = lStack_40;
  param_1[1] = (long)plVar3;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plStack_38 = plVar3;
  plStack_28 = plVar3;
  func_0x00010a053e8c(plStack_30,&lStack_40);
  plVar3 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar4 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  if (*plStack_30 != 0) {
    func_0x00010a053ee8(*plStack_30,&plStack_30);
  }
  plVar3 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar4 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  return;
}



/* Entry: 10ab57268; end: 10ab57313;  */

undefined8 FUN_10ab57268(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_40;
  long *plStack_38;
  
  uVar5 = param_1;
  uVar6 = param_2;
  func_0x00010a0fda30();
  plStack_38 = (long *)param_3[1];
  uStack_40 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  FUN_10ab3c614(param_1,param_2,uVar5,uVar6,&uStack_40);
  plVar4 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return param_1;
}



/* Entry: 10ab57314; end: 10ab57433;  */

void FUN_10ab57314(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = param_2[1];
  if ((lVar4 == 0) || (*(long *)(lVar4 + 8) == -1)) {
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar5 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = param_2[1];
    }
    *param_2 = param_3;
    param_2[1] = plVar5;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
        return;
      }
    }
  }
  return;
}



/* Entry: 10ab57434; end: 10ab57473;  */

void FUN_10ab57434(long param_1)

{
  FUN_10aa88d20(param_1 + 0x20,*(undefined8 *)(param_1 + 0x18));
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10ab57474; end: 10ab574af;  */

long FUN_10ab57474(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c4ac90);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10ab574b0; end: 10ab574c3;  */

void FUN_10ab574b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab574c4; end: 10ab574e3;  */

void FUN_10ab574c4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c4acb0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab574e4; end: 10ab574f3;  */

void FUN_10ab574e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010ab574ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10ab574f4; end: 10ab575ef;  */

undefined1  [16] FUN_10ab574f4(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c4d9f8;
  puVar1 = &UNK_10f692150;
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
    ppuStack_40 = &PTR_DAT_110c4d9f8;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c46558;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10ab575f0; end: 10ab57653;  */

ulong FUN_10ab575f0(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10ab57654);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10ab57654,1,*(undefined8 *)(param_1 + 0x40));
  }
  return param_1;
}



/* Entry: 10ab57654; end: 10ab577c3;  */

void FUN_10ab57654(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
      func_0x00010ab3dd9c(&stack0xffffffffffffffa0,plVar6);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10ab57798);
  (*pcVar2)();
}



/* Entry: 10ab577c4; end: 10ab5787f;  */

void FUN_10ab577c4(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f6930a4,0xf);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ab57880);
  (*pcVar4)();
}



/* Entry: 10ab57880; end: 10ab579e3;  */

void FUN_10ab57880(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lStack_40;
  long *plStack_38;
  long *plStack_30;
  long *plStack_28;
  
  plVar3 = (long *)0x90;
  __Znwm();
  plVar4 = plVar3 + 1;
  *plVar4 = 0;
  *plVar3 = (long)&PTR_FUN_110b9fe30;
  lStack_40 = *param_2;
  plStack_30 = plVar3 + 3;
  plVar3[4] = param_2[1];
  *plStack_30 = lStack_40;
  plVar3[2] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  plVar3[7] = 0x32aaaba7;
  plVar3[9] = 0;
  plVar3[8] = 0;
  plVar3[0xb] = 0;
  plVar3[10] = 0;
  plVar3[0xd] = 0;
  plVar3[0xc] = 0;
  plVar3[0xf] = 0;
  plVar3[0xe] = 0;
  plVar3[0x11] = 0;
  plVar3[0x10] = 0;
  *param_1 = lStack_40;
  param_1[1] = (long)plVar3;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plStack_38 = plVar3;
  plStack_28 = plVar3;
  func_0x00010a053e8c(plStack_30,&lStack_40);
  plVar3 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar4 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  if (*plStack_30 != 0) {
    func_0x00010a053ee8(*plStack_30,&plStack_30);
  }
  plVar3 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar4 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  return;
}



/* Entry: 10ab579e4; end: 10ab57b03;  */

void FUN_10ab579e4(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = param_2[1];
  if ((lVar4 == 0) || (*(long *)(lVar4 + 8) == -1)) {
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar5 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = param_2[1];
    }
    *param_2 = param_3;
    param_2[1] = plVar5;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
        return;
      }
    }
  }
  return;
}



/* Entry: 10ab57b04; end: 10ab57b43;  */

void FUN_10ab57b04(long param_1)

{
  FUN_10aa88d20(param_1 + 0x20,*(undefined8 *)(param_1 + 0x18));
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10ab57b44; end: 10ab57b7f;  */

long FUN_10ab57b44(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c4ad40);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10ab57b80; end: 10ab57b93;  */

void FUN_10ab57b80(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab57b94; end: 10ab57bb3;  */

void FUN_10ab57b94(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c4ad60;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab57bb4; end: 10ab57bc3;  */

void FUN_10ab57bb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010ab57bbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10ab57bc4; end: 10ab57c7b;  */

void FUN_10ab57bc4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ab57c7c(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a29fd20(param_1,param_2,plVar4 + 3);
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



/* Entry: 10ab57c7c; end: 10ab57ce3;  */

void FUN_10ab57c7c(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined4 *extraout_x8;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
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
      param_4 = 0;
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
  FUN_10ab57c7c(plVar4,param_2);
  FUN_10a052e3c(param_4);
  lVar14 = plVar4[5];
  *extraout_x8 = 3;
  *(double *)(extraout_x8 + 2) = (double)lVar14;
  plVar4 = plVar5 + 0x4b;
  lVar14 = plVar5[0x59];
  uVar6 = lVar14 - 1;
  plVar5[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar14 + 2];
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
  lVar14 = *plVar4;
  lVar10 = plVar5[0x4c];
  lVar8 = lVar10 - lVar14;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar5[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar14 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar14)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_88 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar14,lVar8);
          *plVar4 = lVar9;
          plVar5[0x4c] = lVar10 + uVar13 * 0x10;
          plVar5[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_a8 = lVar14;
          lStack_a0 = lVar14;
          lStack_98 = lVar14;
          lStack_90 = lVar11;
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
    _bzero(lVar10,uVar13 * 0x10);
    plVar5[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar14 = lVar14 + uVar6 * 0x10;
    while (lVar10 != lVar14) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar5[0x4c] = lVar14;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar6;
  return;
}



/* Entry: 10ab57ce4; end: 10ab57d9f;  */

void FUN_10ab57ce4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
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
  FUN_10ab57c7c(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar13 = param_2[5];
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)lVar13;
  plVar1 = plVar4 + 0x4b;
  lVar13 = plVar4[0x59];
  uVar5 = lVar13 - 1;
  plVar4[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar1[lVar13 + 2];
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
  lVar13 = *plVar1;
  lVar9 = plVar4[0x4c];
  lVar7 = lVar9 - lVar13;
  uVar11 = lVar7 >> 4;
  if (uVar11 < uVar5) {
    uVar12 = uVar5 - uVar11;
    lVar10 = plVar4[0x4d];
    if ((ulong)(lVar10 - lVar9 >> 4) < uVar12) {
      if (uVar5 >> 0x3c == 0) {
        uVar6 = lVar10 - lVar13 >> 3;
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar10 - lVar13)) {
          uVar6 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar6 >> 0x3c == 0) {
          lVar3 = uVar6 << 4;
          __Znwm();
          lVar9 = lVar3 + lVar7;
          _bzero(lVar9,uVar12 * 0x10);
          lVar8 = lVar9 + uVar11 * -0x10;
          _memcpy(lVar8,lVar13,lVar7);
          *plVar1 = lVar8;
          plVar4[0x4c] = lVar9 + uVar12 * 0x10;
          plVar4[0x4d] = lVar3 + uVar6 * 0x10;
          lStack_88 = lVar13;
          lStack_80 = lVar13;
          lStack_78 = lVar13;
          lStack_70 = lVar10;
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
    _bzero(lVar9,uVar12 * 0x10);
    plVar4[0x4c] = lVar9 + uVar12 * 0x10;
  }
  else if (uVar5 < uVar11) {
    lVar13 = lVar13 + uVar5 * 0x10;
    while (lVar9 != lVar13) {
      lVar9 = lVar9 + -0x10;
      func_0x00010988c204(lVar9);
    }
    plVar4[0x4c] = lVar13;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar5;
  return;
}



/* Entry: 10ab57da0; end: 10ab57e5b;  */

void FUN_10ab57da0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ab57c7c(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[6];
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)(int)lVar5;
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



/* Entry: 10ab57e5c; end: 10ab57f27;  */

void FUN_10ab57e5c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  undefined4 uVar5;
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
  FUN_10ab57c7c(param_2,param_3);
  FUN_10a052e3c(param_5);
  if ((*(uint *)(param_2 + 8) & 1) == 0) {
    uVar5 = 1;
  }
  else {
    *(double *)(param_1 + 2) = (double)param_2[7];
    uVar5 = 3;
  }
  *param_1 = uVar5;
  plVar1 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
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
  lVar6 = *plVar1;
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
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
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



/* Entry: 10ab57f28; end: 10ab57fdf;  */

void FUN_10ab57f28(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ab57fe0(param_2,param_3);
  FUN_10a052e3c(param_5);
  func_0x00010a29bb50(param_1,param_2,plVar4 + 3);
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



/* Entry: 10ab57fe0; end: 10ab58047;  */

void FUN_10ab57fe0(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined4 *extraout_x8;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
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
      param_4 = 0;
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
  FUN_10ab57fe0(plVar4,param_2);
  FUN_10a052e3c(param_4);
  lVar14 = plVar4[5];
  *extraout_x8 = 3;
  *(double *)(extraout_x8 + 2) = (double)lVar14;
  plVar4 = plVar5 + 0x4b;
  lVar14 = plVar5[0x59];
  uVar6 = lVar14 - 1;
  plVar5[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar14 + 2];
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
  lVar14 = *plVar4;
  lVar10 = plVar5[0x4c];
  lVar8 = lVar10 - lVar14;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar5[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar14 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar14)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_88 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar14,lVar8);
          *plVar4 = lVar9;
          plVar5[0x4c] = lVar10 + uVar13 * 0x10;
          plVar5[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_a8 = lVar14;
          lStack_a0 = lVar14;
          lStack_98 = lVar14;
          lStack_90 = lVar11;
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
    _bzero(lVar10,uVar13 * 0x10);
    plVar5[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar14 = lVar14 + uVar6 * 0x10;
    while (lVar10 != lVar14) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar5[0x4c] = lVar14;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar6;
  return;
}



/* Entry: 10ab58048; end: 10ab58103;  */

void FUN_10ab58048(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
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
  FUN_10ab57fe0(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar13 = param_2[5];
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)lVar13;
  plVar1 = plVar4 + 0x4b;
  lVar13 = plVar4[0x59];
  uVar5 = lVar13 - 1;
  plVar4[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar1[lVar13 + 2];
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
  lVar13 = *plVar1;
  lVar9 = plVar4[0x4c];
  lVar7 = lVar9 - lVar13;
  uVar11 = lVar7 >> 4;
  if (uVar11 < uVar5) {
    uVar12 = uVar5 - uVar11;
    lVar10 = plVar4[0x4d];
    if ((ulong)(lVar10 - lVar9 >> 4) < uVar12) {
      if (uVar5 >> 0x3c == 0) {
        uVar6 = lVar10 - lVar13 >> 3;
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar10 - lVar13)) {
          uVar6 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar6 >> 0x3c == 0) {
          lVar3 = uVar6 << 4;
          __Znwm();
          lVar9 = lVar3 + lVar7;
          _bzero(lVar9,uVar12 * 0x10);
          lVar8 = lVar9 + uVar11 * -0x10;
          _memcpy(lVar8,lVar13,lVar7);
          *plVar1 = lVar8;
          plVar4[0x4c] = lVar9 + uVar12 * 0x10;
          plVar4[0x4d] = lVar3 + uVar6 * 0x10;
          lStack_88 = lVar13;
          lStack_80 = lVar13;
          lStack_78 = lVar13;
          lStack_70 = lVar10;
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
    _bzero(lVar9,uVar12 * 0x10);
    plVar4[0x4c] = lVar9 + uVar12 * 0x10;
  }
  else if (uVar5 < uVar11) {
    lVar13 = lVar13 + uVar5 * 0x10;
    while (lVar9 != lVar13) {
      lVar9 = lVar9 + -0x10;
      func_0x00010988c204(lVar9);
    }
    plVar4[0x4c] = lVar13;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar5;
  return;
}



/* Entry: 10ab58104; end: 10ab581bf;  */

void FUN_10ab58104(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ab57fe0(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[6];
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)(int)lVar5;
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



/* Entry: 10ab581c0; end: 10ab5828b;  */

void FUN_10ab581c0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  undefined4 uVar5;
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
  FUN_10ab57fe0(param_2,param_3);
  FUN_10a052e3c(param_5);
  if ((*(uint *)(param_2 + 8) & 1) == 0) {
    uVar5 = 1;
  }
  else {
    *(double *)(param_1 + 2) = (double)param_2[7];
    uVar5 = 3;
  }
  *param_1 = uVar5;
  plVar1 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
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
  lVar6 = *plVar1;
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
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
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



/* Entry: 10ab5828c; end: 10ab5836b;  */

void FUN_10ab5828c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
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
  FUN_10ab58468(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar7 = plVar5[4];
  plVar1 = (long *)plVar5[3];
  if (-1 < (char)*(byte *)((long)plVar5 + 0x2f)) {
    uVar7 = (ulong)*(byte *)((long)plVar5 + 0x2f);
    plVar1 = plVar5 + 3;
  }
  (**(code **)(*param_2 + 0x128))(param_1 + 2,param_2,plVar1,uVar7);
  *param_1 = 6;
  plVar1 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
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
  lVar6 = *plVar1;
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
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
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



/* Entry: 10ab5836c; end: 10ab58467;  */

void FUN_10ab5836c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010ab584d0(param_2,param_3);
  FUN_10a0584c8(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (plVar4 + 3,&stack0xffffffffffffffa8);
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



/* Entry: 10ab58468; end: 10ab58537;  */

void FUN_10ab58468(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  undefined4 *extraout_x8;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long *plStack_a8;
  
  ppuVar3 = param_1;
  func_0x000109898688();
  if (ppuVar3 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar3);
    param_2 = ppuVar3;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  ppuVar3 = (undefined **)&UNK_10f68f52e;
  func_0x00010988bd28();
  ppuVar4 = ppuVar3;
  func_0x000109898688();
  if (ppuVar4 != (undefined **)0x0) {
    FUN_10a053854(ppuVar3,ppuVar4);
    param_2 = ppuVar4;
    if (ppuVar3 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0;
      ___dynamic_cast();
      if (ppuVar3 != (undefined **)0x0) {
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
  FUN_10ab58468(plVar5,param_2);
  FUN_10a052e3c(param_4);
  lVar15 = plVar5[6];
  *extraout_x8 = 3;
  *(double *)(extraout_x8 + 2) = (double)lVar15;
  plVar5 = plVar6 + 0x4b;
  lVar15 = plVar6[0x59];
  uVar7 = lVar15 - 1;
  plVar6[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar5[lVar15 + 2];
    if (plVar6[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar7) {
      return;
    }
  }
  lVar15 = *plVar5;
  lVar11 = plVar6[0x4c];
  lVar9 = lVar11 - lVar15;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar6[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar15 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar15)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_a8 = plVar5;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar15,lVar9);
          *plVar5 = lVar10;
          plVar6[0x4c] = lVar11 + uVar14 * 0x10;
          plVar6[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_c8 = lVar15;
          lStack_c0 = lVar15;
          lStack_b8 = lVar15;
          lStack_b0 = lVar12;
          func_0x00010988c1b8(&lStack_c8);
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
    plVar6[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar15 = lVar15 + uVar7 * 0x10;
    while (lVar11 != lVar15) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar6[0x4c] = lVar15;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar7;
  return;
}



/* Entry: 10ab58538; end: 10ab585f3;  */

void FUN_10ab58538(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
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
  FUN_10ab58468(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar13 = param_2[6];
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)lVar13;
  plVar1 = plVar4 + 0x4b;
  lVar13 = plVar4[0x59];
  uVar5 = lVar13 - 1;
  plVar4[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar1[lVar13 + 2];
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
  lVar13 = *plVar1;
  lVar9 = plVar4[0x4c];
  lVar7 = lVar9 - lVar13;
  uVar11 = lVar7 >> 4;
  if (uVar11 < uVar5) {
    uVar12 = uVar5 - uVar11;
    lVar10 = plVar4[0x4d];
    if ((ulong)(lVar10 - lVar9 >> 4) < uVar12) {
      if (uVar5 >> 0x3c == 0) {
        uVar6 = lVar10 - lVar13 >> 3;
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar10 - lVar13)) {
          uVar6 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar6 >> 0x3c == 0) {
          lVar3 = uVar6 << 4;
          __Znwm();
          lVar9 = lVar3 + lVar7;
          _bzero(lVar9,uVar12 * 0x10);
          lVar8 = lVar9 + uVar11 * -0x10;
          _memcpy(lVar8,lVar13,lVar7);
          *plVar1 = lVar8;
          plVar4[0x4c] = lVar9 + uVar12 * 0x10;
          plVar4[0x4d] = lVar3 + uVar6 * 0x10;
          lStack_88 = lVar13;
          lStack_80 = lVar13;
          lStack_78 = lVar13;
          lStack_70 = lVar10;
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
    _bzero(lVar9,uVar12 * 0x10);
    plVar4[0x4c] = lVar9 + uVar12 * 0x10;
  }
  else if (uVar5 < uVar11) {
    lVar13 = lVar13 + uVar5 * 0x10;
    while (lVar9 != lVar13) {
      lVar9 = lVar9 + -0x10;
      func_0x00010988c204(lVar9);
    }
    plVar4[0x4c] = lVar13;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar5;
  return;
}



/* Entry: 10ab585f4; end: 10ab586b3;  */

void FUN_10ab585f4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010ab584d0(param_2,param_3);
  FUN_10ab0364c(param_5);
  func_0x00010a9fdb74(param_2,param_4);
  plVar4[6] = (long)param_2;
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



/* Entry: 10ab586b4; end: 10ab5876f;  */

void FUN_10ab586b4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ab58468(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[7];
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)(int)lVar5;
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



/* Entry: 10ab58770; end: 10ab5882f;  */

void FUN_10ab58770(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010ab584d0(param_2,param_3);
  FUN_10ab58830(param_5);
  func_0x000109898518(param_2,param_4);
  *(int *)(plVar4 + 7) = (int)param_2;
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



/* Entry: 10ab58830; end: 10ab58853;  */

void FUN_10ab58830(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 extraout_x8;
  long lVar7;
  undefined **ppuStack_58;
  undefined8 *puStack_50;
  long *plStack_48;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar3 = (long *)0x1;
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
  FUN_10a052e3c(param_4);
  puVar5 = (undefined8 *)0x40;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_110c49578;
  puVar5[4] = 0;
  puVar5[3] = 0;
  puVar5[6] = 0;
  puVar5[5] = 0;
  *(undefined4 *)(puVar5 + 7) = 1;
  plVar6 = (long *)0x20;
  __Znwm();
  *plVar6 = (long)&PTR_FUN_110c4af40;
  plVar6[1] = 0;
  plVar6[2] = 0;
  plVar6[3] = (long)puVar5;
  ppuStack_58 = &PTR_DAT_110c4a728;
  puStack_50 = puVar5;
  plStack_48 = plVar6;
  func_0x000109899de4(extraout_x8,plVar3,&puStack_50,&ppuStack_58,0,0);
  plVar3 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar6 = plStack_48 + 1;
    do {
      lVar7 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  func_0x00010988c170(plVar4 + 0x4b);
  return;
}



/* Entry: 10ab58854; end: 10ab589ab;  */

void FUN_10ab58854(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined **ppuStack_48;
  undefined8 *puStack_40;
  long *plStack_38;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a052e3c(param_5);
  puVar5 = (undefined8 *)0x40;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_110c49578;
  puVar5[4] = 0;
  puVar5[3] = 0;
  puVar5[6] = 0;
  puVar5[5] = 0;
  *(undefined4 *)(puVar5 + 7) = 1;
  plVar6 = (long *)0x20;
  __Znwm();
  *plVar6 = (long)&PTR_FUN_110c4af40;
  plVar6[1] = 0;
  plVar6[2] = 0;
  plVar6[3] = (long)puVar5;
  ppuStack_48 = &PTR_DAT_110c4a728;
  puStack_40 = puVar5;
  plStack_38 = plVar6;
  func_0x000109899de4(param_1,param_2,&puStack_40,&ppuStack_48,0,0);
  plVar6 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  func_0x00010988c170(plVar4 + 0x4b);
  return;
}



/* Entry: 10ab589ac; end: 10ab58a67;  */

void FUN_10ab589ac(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ab58b28(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[3];
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)(int)lVar5;
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



/* Entry: 10ab58a68; end: 10ab58b27;  */

void FUN_10ab58a68(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010ab58b90(param_2,param_3);
  FUN_10ab58bf8(param_5);
  func_0x000109898518(param_2,param_4);
  *(int *)(plVar4 + 3) = (int)param_2;
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



/* Entry: 10ab58b28; end: 10ab58bf7;  */

void FUN_10ab58b28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined4 *extraout_x8;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long *plStack_b8;
  
  lVar9 = param_1;
  func_0x000109898688();
  if (lVar9 != 0) {
    FUN_10a052c2c(param_1,lVar9);
    if (param_1 != 0) {
      param_4 = 0;
      ___dynamic_cast();
      if (param_1 != 0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar4 = &UNK_10f68f52e;
  func_0x00010988bd28();
  puVar5 = puVar4;
  func_0x000109898688();
  if (puVar5 != (undefined *)0x0) {
    FUN_10a053854(puVar4,puVar5);
    if (puVar4 != (undefined *)0x0) {
      param_4 = 0;
      ___dynamic_cast();
      if (puVar4 != (undefined *)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar4 = &UNK_10f68f52e;
  func_0x00010988bd28();
  if ((int)puVar4 == 1) {
    return;
  }
  plVar6 = (long *)0x1;
  uVar8 = 0;
  FUN_10a052ee0(1,0,puVar4);
  plVar7 = plVar6;
  (**(code **)(*plVar6 + 0x58))();
  if ((ulong)plVar7[0x59] < 8) {
    plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
    plVar7[0x59] = plVar7[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar7 + 0x4b);
  }
  FUN_10ab58b28(plVar6,uVar8);
  FUN_10a052e3c(param_4);
  iVar1 = *(int *)((long)plVar6 + 0x1c);
  *extraout_x8 = 3;
  *(double *)(extraout_x8 + 2) = (double)iVar1;
  plVar6 = plVar7 + 0x4b;
  lVar9 = plVar7[0x59];
  uVar10 = lVar9 - 1;
  plVar7[0x59] = uVar10;
  if (uVar10 < 8) {
    uVar10 = plVar6[lVar9 + 2];
    if (plVar7[0x5a] == uVar10) {
      return;
    }
  }
  else {
    uVar10 = *(ulong *)(plVar7[0x57] + -8);
    plVar7[0x57] = plVar7[0x57] + -8;
    if (plVar7[0x5a] == uVar10) {
      return;
    }
  }
  lVar9 = *plVar6;
  lVar14 = plVar7[0x4c];
  lVar12 = lVar14 - lVar9;
  uVar16 = lVar12 >> 4;
  if (uVar16 < uVar10) {
    uVar17 = uVar10 - uVar16;
    lVar15 = plVar7[0x4d];
    if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
      if (uVar10 >> 0x3c == 0) {
        uVar11 = lVar15 - lVar9 >> 3;
        if (uVar11 <= uVar10) {
          uVar11 = uVar10;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - lVar9)) {
          uVar11 = 0xfffffffffffffff;
        }
        plStack_b8 = plVar6;
        if (uVar11 >> 0x3c == 0) {
          lVar3 = uVar11 << 4;
          __Znwm();
          lVar14 = lVar3 + lVar12;
          _bzero(lVar14,uVar17 * 0x10);
          lVar13 = lVar14 + uVar16 * -0x10;
          _memcpy(lVar13,lVar9,lVar12);
          *plVar6 = lVar13;
          plVar7[0x4c] = lVar14 + uVar17 * 0x10;
          plVar7[0x4d] = lVar3 + uVar11 * 0x10;
          lStack_d8 = lVar9;
          lStack_d0 = lVar9;
          lStack_c8 = lVar9;
          lStack_c0 = lVar15;
          func_0x00010988c1b8(&lStack_d8);
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
    _bzero(lVar14,uVar17 * 0x10);
    plVar7[0x4c] = lVar14 + uVar17 * 0x10;
  }
  else if (uVar10 < uVar16) {
    lVar9 = lVar9 + uVar10 * 0x10;
    while (lVar14 != lVar9) {
      lVar14 = lVar14 + -0x10;
      func_0x00010988c204(lVar14);
    }
    plVar7[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar10;
  return;
}



/* Entry: 10ab58bf8; end: 10ab58c1b;  */

void FUN_10ab58bf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
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
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar4 = (long *)0x1;
  uVar6 = 0;
  FUN_10a052ee0(1,0,param_1);
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10ab58b28(plVar4,uVar6);
  FUN_10a052e3c(param_4);
  iVar1 = *(int *)((long)plVar4 + 0x1c);
  *extraout_x8 = 3;
  *(double *)(extraout_x8 + 2) = (double)iVar1;
  plVar4 = plVar5 + 0x4b;
  lVar7 = plVar5[0x59];
  uVar8 = lVar7 - 1;
  plVar5[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar4[lVar7 + 2];
    if (plVar5[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar8) {
      return;
    }
  }
  lVar7 = *plVar4;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar7;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar8) {
    uVar15 = uVar8 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar7 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_78 = plVar4;
        if (uVar9 >> 0x3c == 0) {
          lVar3 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar3 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar4 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar3 + uVar9 * 0x10;
          lStack_98 = lVar7;
          lStack_90 = lVar7;
          lStack_88 = lVar7;
          lStack_80 = lVar13;
          func_0x00010988c1b8(&lStack_98);
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
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar8 < uVar14) {
    lVar7 = lVar7 + uVar8 * 0x10;
    while (lVar12 != lVar7) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar8;
  return;
}



/* Entry: 10ab58c1c; end: 10ab58cd7;  */

void FUN_10ab58c1c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  int iVar2;
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
  FUN_10ab58b28(param_2,param_3);
  FUN_10a052e3c(param_5);
  iVar2 = *(int *)((long)param_2 + 0x1c);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)iVar2;
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



/* Entry: 10ab58cd8; end: 10ab58d97;  */

void FUN_10ab58cd8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010ab58b90(param_2,param_3);
  FUN_10a076f00(param_5);
  func_0x000109898518(param_2,param_4);
  *(int *)((long)plVar4 + 0x1c) = (int)param_2;
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



/* Entry: 10ab58d98; end: 10ab58f0b;  */

void FUN_10ab58d98(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined **ppuStack_58;
  undefined8 *puStack_50;
  long *plStack_48;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a052e3c(param_5);
  puVar5 = (undefined8 *)0x20;
  __Znwm();
  puVar5[2] = 0;
  puVar5[1] = 0;
  *puVar5 = &PTR_FUN_110c49740;
  puVar5[3] = 0x4000000000;
  plVar6 = (long *)0x20;
  __Znwm();
  *plVar6 = (long)&PTR_DAT_110c4afb8;
  plVar6[1] = 0;
  plVar6[2] = 0;
  plVar6[3] = (long)puVar5;
  ppuStack_58 = &PTR_DAT_110c4a740;
  puStack_50 = puVar5;
  plStack_48 = plVar6;
  func_0x000109899de4(param_1,param_2,&puStack_50,&ppuStack_58,0,0);
  plVar6 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  func_0x00010988c170(plVar4 + 0x4b);
  return;
}



/* Entry: 10ab58f0c; end: 10ab59227;  */

void FUN_10ab58f0c(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  long *plStack_a0;
  long *plStack_98;
  long lStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  long *plVar17;
  
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
  FUN_10ab59228(param_2,param_3);
  FUN_10ab59290(param_5);
  plVar8 = param_2;
  func_0x00010a9fdb74(param_2,param_4);
  if (*(int *)(param_4 + 0x10) == 7) {
    plVar10 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_4 + 0x18));
    plVar14 = param_2;
    (**(code **)(*param_2 + 0x228))(param_2,&stack0xffffffffffffffa8);
    plVar17 = plVar10;
    if ((int)plVar14 != 0) {
      plVar17 = param_2;
      (**(code **)(*param_2 + 0x58))();
      lVar9 = plVar17[0x48];
      if ((lVar9 == 0) ||
         (___dynamic_cast(lVar9,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), lVar9 == 0)) {
        func_0x00010988bd28(&UNK_10f685540);
        goto LAB_10ab591c4;
      }
      plVar17 = (long *)0x0;
      plStack_68 = (long *)CONCAT44(plStack_68._4_4_,7);
      plStack_70 = param_2;
      FUN_10a688ac0(&lStack_90,&plStack_70,*(undefined8 *)(lVar9 + 8));
      if ((3 < (int)plStack_68) && (plVar10 != (long *)0x0)) {
        (**(code **)*plVar10)();
      }
    }
    if (plVar17 != (long *)0x0) {
      (**(code **)*plVar17)();
    }
    if (((ulong)plVar14 & 1) != 0) {
      plVar10 = (long *)0x60;
      __Znwm();
      plVar10[1] = 0;
      plVar10[2] = 0;
      *plVar10 = (long)&PTR_FUN_110c4adb0;
      plStack_a0 = plVar10 + 3;
      plVar10[4] = (long)plStack_88;
      *plStack_a0 = lStack_90;
      if (plStack_88 != (long *)0x0) {
        plVar14 = plStack_88 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar3) {
            *plVar14 = *plVar14 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar10[6] = (long)plStack_78;
      plVar10[5] = (long)plStack_80;
      if (plStack_78 != (long *)0x0) {
        plStack_78 = (long *)((long)plStack_78 + 0x10);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_78,0x10);
          if (bVar3) {
            *plStack_78 = *plStack_78 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      *(undefined1 *)(plVar10 + 0xb) = 2;
      plStack_98 = plVar10;
      FUN_10a688c1c(&lStack_90);
      FUN_10ab5930c(&lStack_90,param_2,*(undefined4 *)(param_4 + 0x20),
                    *(undefined8 *)(param_4 + 0x28));
      FUN_10ab3ff14(plVar7,plVar8,&plStack_a0,&lStack_90);
      if (plStack_88 != (long *)0x0) {
        plVar7 = plStack_88 + 1;
        do {
          lVar9 = *plVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_88 + 0x10))(plStack_88);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
        }
      }
      plVar7 = plStack_98;
      if (plStack_98 != (long *)0x0) {
        plVar8 = plStack_98 + 1;
        do {
          lVar9 = *plVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_98 + 0x10))(plStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      *param_1 = 0;
      plVar7 = plVar6 + 0x4b;
      lVar9 = plVar6[0x59];
      uVar11 = lVar9 - 1;
      plVar6[0x59] = uVar11;
      if (uVar11 < 8) {
        uVar11 = plVar7[lVar9 + 2];
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
      plVar8 = (long *)*plVar7;
      plVar10 = (long *)plVar6[0x4c];
      lVar9 = (long)plVar10 - (long)plVar8;
      uVar15 = lVar9 >> 4;
      if (uVar15 < uVar11) {
        uVar16 = uVar11 - uVar15;
        plVar14 = (long *)plVar6[0x4d];
        if ((ulong)((long)plVar14 - (long)plVar10 >> 4) < uVar16) {
          if (uVar11 >> 0x3c == 0) {
            uVar12 = (long)plVar14 - (long)plVar8 >> 3;
            if (uVar12 <= uVar11) {
              uVar12 = uVar11;
            }
            if (0x7fffffffffffffef < (ulong)((long)plVar14 - (long)plVar8)) {
              uVar12 = 0xfffffffffffffff;
            }
            plStack_68 = plVar7;
            if (uVar12 >> 0x3c == 0) {
              lVar5 = uVar12 << 4;
              __Znwm();
              lVar1 = lVar5 + lVar9;
              _bzero(lVar1,uVar16 * 0x10);
              lVar13 = lVar1 + uVar15 * -0x10;
              _memcpy(lVar13,plVar8,lVar9);
              *plVar7 = lVar13;
              plVar6[0x4c] = lVar1 + uVar16 * 0x10;
              plVar6[0x4d] = lVar5 + uVar12 * 0x10;
              plStack_88 = plVar8;
              plStack_80 = plVar8;
              plStack_78 = plVar8;
              plStack_70 = plVar14;
              func_0x00010988c1b8(&plStack_88);
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
        _bzero(plVar10,uVar16 * 0x10);
        plVar6[0x4c] = (long)(plVar10 + uVar16 * 2);
      }
      else if (uVar11 < uVar15) {
        while (plVar10 != plVar8 + uVar11 * 2) {
          plVar10 = plVar10 + -2;
          func_0x00010988c204(plVar10);
        }
        plVar6[0x4c] = (long)(plVar8 + uVar11 * 2);
      }
code_r0x00010988c138:
      plVar6[0x5a] = uVar11;
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10ab591c4:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ab591c8);
  (*pcVar4)();
}



/* Entry: 10ab59228; end: 10ab5928f;  */

void FUN_10ab59228(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  
  lVar1 = param_1;
  func_0x000109898688();
  if (lVar1 != 0) {
    FUN_10a053854(param_1,lVar1);
    if ((param_1 != 0) && (___dynamic_cast(), param_1 != 0)) {
      return;
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar2 = &UNK_10f68f52e;
  func_0x00010988bd28();
  if ((int)puVar2 == 3) {
    return;
  }
  puVar3 = (undefined8 *)0x3;
  FUN_10a052ee0(3,0,puVar2);
  *puVar3 = &PTR_FUN_110c4adb0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ab59290; end: 10ab592b3;  */

void FUN_10ab59290(undefined8 param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1 == 3) {
    return;
  }
  puVar1 = (undefined8 *)0x3;
  FUN_10a052ee0(3,0,param_1);
  *puVar1 = &PTR_FUN_110c4adb0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ab592b4; end: 10ab592c3;  */

void FUN_10ab592b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c4adb0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ab592c4; end: 10ab592e3;  */

void FUN_10ab592c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c4adb0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab592e4; end: 10ab5930b;  */

undefined1  [16] FUN_10ab592e4(long param_1)

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
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10ab59308);
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



/* Entry: 10ab5930c; end: 10ab594cf;  */

void FUN_10ab5930c(undefined8 *param_1,long *param_2,int param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long *plStack_50;
  int iStack_48;
  long *plStack_40;
  long *plStack_38;
  
  if (param_3 == 7) {
    plVar4 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,param_4);
    plVar5 = param_2;
    plStack_38 = plVar4;
    (**(code **)(*param_2 + 0x228))(param_2,&plStack_38);
    if ((int)plVar5 != 0) {
      plVar4 = param_2;
      (**(code **)(*param_2 + 0x58))();
      lVar6 = plVar4[0x48];
      if ((lVar6 == 0) ||
         (___dynamic_cast(lVar6,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), plVar4 = plStack_38,
         lVar6 == 0)) goto LAB_10ab59490;
      plStack_38 = (long *)0x0;
      iStack_48 = 7;
      plStack_40 = plVar4;
      plStack_50 = param_2;
      FUN_10a688ac0(&uStack_70,&plStack_50,*(undefined8 *)(lVar6 + 8));
      if ((3 < iStack_48) && (plStack_40 != (long *)0x0)) {
        (**(code **)*plStack_40)();
      }
    }
    if (plStack_38 != (long *)0x0) {
      (**(code **)*plStack_38)();
    }
    if (((ulong)plVar5 & 1) != 0) {
      puVar7 = (undefined8 *)0x60;
      __Znwm();
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = &PTR_FUN_110c4ae00;
      puVar7[4] = lStack_68;
      puVar7[3] = uStack_70;
      if (lStack_68 != 0) {
        plVar4 = (long *)(lStack_68 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = *plVar4 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      puVar7[6] = lStack_58;
      puVar7[5] = uStack_60;
      if (lStack_58 != 0) {
        plVar4 = (long *)(lStack_58 + 0x10);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = *plVar4 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      *(undefined1 *)(puVar7 + 0xb) = 2;
      *param_1 = puVar7 + 3;
      param_1[1] = puVar7;
      FUN_10a688c1c(&uStack_70);
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10ab59490:
  func_0x00010988bd28(&UNK_10f685540);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10ab594a0);
  (*pcVar3)();
}



/* Entry: 10ab594d0; end: 10ab594df;  */

void FUN_10ab594d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c4ae00;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ab594e0; end: 10ab594ff;  */

void FUN_10ab594e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c4ae00;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab59500; end: 10ab59527;  */

undefined1  [16] FUN_10ab59500(long param_1)

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
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10ab59524);
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



/* Entry: 10ab59528; end: 10ab5993f;  */

void FUN_10ab59528(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long lStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  
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
  FUN_10ab59228(param_2,param_3);
  FUN_10ab59940(param_5);
  plVar8 = param_2;
  func_0x00010a9fdb74(param_2,param_4);
  if (*(int *)(param_4 + 0x10) == 7) {
    plVar11 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_4 + 0x18));
    plVar9 = param_2;
    plStack_c0 = plVar11;
    (**(code **)(*param_2 + 0x228))(param_2,&plStack_c0);
    if ((int)plVar9 != 0) {
      plVar11 = param_2;
      (**(code **)(*param_2 + 0x58))();
      lVar10 = plVar11[0x48];
      if ((lVar10 == 0) ||
         (___dynamic_cast(lVar10,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), plVar11 = plStack_c0,
         lVar10 == 0)) {
        func_0x00010988bd28(&UNK_10f685540);
        goto LAB_10ab598c4;
      }
      plStack_c0 = (long *)0x0;
      plStack_70 = (long *)CONCAT44(plStack_70._4_4_,7);
      plStack_68 = plVar11;
      plStack_78 = param_2;
      FUN_10a688ac0(&plStack_a0,&plStack_78,*(undefined8 *)(lVar10 + 8));
      if ((3 < (int)plStack_70) && (plStack_68 != (long *)0x0)) {
        (**(code **)*plStack_68)();
      }
    }
    if (plStack_c0 != (long *)0x0) {
      (**(code **)*plStack_c0)();
    }
    if (((ulong)plVar9 & 1) != 0) {
      plVar11 = (long *)0x60;
      __Znwm();
      plVar9 = plVar11 + 1;
      *plVar9 = 0;
      plVar11[2] = 0;
      *plVar11 = (long)&PTR_FUN_110c4ae50;
      plVar19 = plVar11 + 3;
      plVar11[4] = (long)plStack_98;
      *plVar19 = (long)plStack_a0;
      if (plStack_98 != (long *)0x0) {
        plStack_98 = (long *)((long)plStack_98 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_98,0x10);
          if (bVar3) {
            *plStack_98 = *plStack_98 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar11[6] = (long)plStack_88;
      plVar11[5] = lStack_90;
      if (plStack_88 != (long *)0x0) {
        plStack_88 = plStack_88 + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_88,0x10);
          if (bVar3) {
            *plStack_88 = *plStack_88 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      *(undefined1 *)(plVar11 + 0xb) = 2;
      plStack_b0 = plVar19;
      plStack_a8 = plVar11;
      FUN_10a688c1c(&plStack_a0);
      FUN_10ab5930c(&plStack_c0,param_2,*(undefined4 *)(param_4 + 0x20),
                    *(undefined8 *)(param_4 + 0x28));
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = *plVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar12 = (long *)0x60;
      plStack_78 = plVar19;
      plStack_70 = plVar11;
      __Znwm();
      plVar12[1] = 0;
      plVar12[2] = 0;
      plStack_a0 = plVar12 + 3;
      *plStack_a0 = (long)FUN_10ab5c18c;
      *plVar12 = (long)&PTR_FUN_110c4adb0;
      plVar12[4] = (long)&PTR_DAT_110c4b120;
      plVar12[5] = (long)plVar19;
      plVar12[6] = (long)plVar11;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = *plVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *(undefined1 *)(plVar12 + 0xb) = 1;
      do {
        lVar10 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plStack_98 = plVar12;
      if (lVar10 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
      FUN_10ab3ff14(plVar7,plVar8,&plStack_a0,&plStack_c0);
      plVar7 = plStack_98;
      if (plStack_98 != (long *)0x0) {
        plVar8 = plStack_98 + 1;
        do {
          lVar10 = *plVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_98 + 0x10))(plStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      if (plStack_b8 != (long *)0x0) {
        plVar7 = plStack_b8 + 1;
        do {
          lVar10 = *plVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b8);
        }
      }
      plVar7 = plStack_a8;
      if (plStack_a8 != (long *)0x0) {
        plVar8 = plStack_a8 + 1;
        do {
          lVar10 = *plVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      *param_1 = 0;
      plVar7 = plVar6 + 0x4b;
      lVar10 = plVar6[0x59];
      uVar13 = lVar10 - 1;
      plVar6[0x59] = uVar13;
      if (uVar13 < 8) {
        uVar13 = plVar7[lVar10 + 2];
        if (plVar6[0x5a] == uVar13) {
          return;
        }
      }
      else {
        uVar13 = *(ulong *)(plVar6[0x57] + -8);
        plVar6[0x57] = plVar6[0x57] + -8;
        if (plVar6[0x5a] == uVar13) {
          return;
        }
      }
      plVar8 = (long *)*plVar7;
      plVar11 = (long *)plVar6[0x4c];
      lVar10 = (long)plVar11 - (long)plVar8;
      uVar17 = lVar10 >> 4;
      if (uVar17 < uVar13) {
        uVar18 = uVar13 - uVar17;
        lVar16 = plVar6[0x4d];
        if ((ulong)(lVar16 - (long)plVar11 >> 4) < uVar18) {
          if (uVar13 >> 0x3c == 0) {
            uVar14 = lVar16 - (long)plVar8 >> 3;
            if (uVar14 <= uVar13) {
              uVar14 = uVar13;
            }
            if (0x7fffffffffffffef < (ulong)(lVar16 - (long)plVar8)) {
              uVar14 = 0xfffffffffffffff;
            }
            plStack_68 = plVar7;
            if (uVar14 >> 0x3c == 0) {
              lVar5 = uVar14 << 4;
              __Znwm();
              lVar1 = lVar5 + lVar10;
              _bzero(lVar1,uVar18 * 0x10);
              lVar15 = lVar1 + uVar17 * -0x10;
              _memcpy(lVar15,plVar8,lVar10);
              *plVar7 = lVar15;
              plVar6[0x4c] = lVar1 + uVar18 * 0x10;
              plVar6[0x4d] = lVar5 + uVar14 * 0x10;
              plStack_88 = plVar8;
              plStack_80 = plVar8;
              plStack_78 = plVar8;
              plStack_70 = (long *)lVar16;
              func_0x00010988c1b8(&plStack_88);
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
        _bzero(plVar11,uVar18 * 0x10);
        plVar6[0x4c] = (long)(plVar11 + uVar18 * 2);
      }
      else if (uVar13 < uVar17) {
        while (plVar11 != plVar8 + uVar13 * 2) {
          plVar11 = plVar11 + -2;
          func_0x00010988c204(plVar11);
        }
        plVar6[0x4c] = (long)(plVar8 + uVar13 * 2);
      }
code_r0x00010988c138:
      plVar6[0x5a] = uVar13;
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10ab598c4:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ab598c8);
  (*pcVar4)();
}



/* Entry: 10ab59940; end: 10ab59963;  */

void FUN_10ab59940(undefined8 param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1 == 3) {
    return;
  }
  puVar1 = (undefined8 *)0x3;
  FUN_10a052ee0(3,0,param_1);
  *puVar1 = &PTR_FUN_110c4ae50;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ab59964; end: 10ab59973;  */

void FUN_10ab59964(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c4ae50;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ab59974; end: 10ab59993;  */

void FUN_10ab59974(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c4ae50;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab59994; end: 10ab599bb;  */

undefined1  [16] FUN_10ab59994(long param_1)

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
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10ab599b8);
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



/* Entry: 10ab599bc; end: 10ab5a4b3;  */

/* WARNING: Possible PIC construction at 0x00010ab5a4a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ab5a4ac) */
/* WARNING: Removing unreachable block (ram,0x00010ab5a4c0) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd2e4) */
/* WARNING: Removing unreachable block (ram,0x00010ab5a4bc) */

void FUN_10ab599bc(undefined4 *param_1,undefined ****param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  long ****pppplVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  code *pcVar9;
  long lVar10;
  undefined ****ppppuVar11;
  undefined ****ppppuVar12;
  undefined ****ppppuVar13;
  undefined ****ppppuVar14;
  undefined ****ppppuVar15;
  undefined ***pppuVar16;
  long ****pppplVar17;
  long ****pppplVar18;
  long ***ppplVar19;
  long ****pppplVar20;
  long ****pppplVar21;
  undefined ***pppuVar22;
  undefined ***pppuVar23;
  long **pplVar24;
  undefined ****unaff_x19;
  long ****unaff_x20;
  long ****unaff_x21;
  long lVar25;
  undefined ****unaff_x22;
  long ****unaff_x23;
  undefined ***pppuVar26;
  long ****unaff_x24;
  long ****pppplVar27;
  undefined ***pppuVar28;
  long ****unaff_x25;
  long ****pppplVar29;
  ulong uVar30;
  long ****unaff_x26;
  undefined4 *unaff_x27;
  ulong unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  long ***ppplStack_200;
  long **pplStack_1f8;
  undefined ****ppppuStack_1f0;
  undefined ****ppppuStack_1e0;
  undefined ****ppppuStack_1d8;
  undefined ****ppppuStack_1d0;
  undefined ****ppppuStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined ****ppppuStack_1a8;
  undefined ***pppuStack_1a0;
  long ***ppplStack_198;
  undefined ****ppppuStack_190;
  long ***ppplStack_188;
  undefined ****ppppuStack_180;
  undefined ****ppppuStack_178;
  undefined ****ppppuStack_170;
  undefined ****ppppuStack_168;
  long ***ppplStack_160;
  int iStack_158;
  undefined4 uStack_154;
  long ***appplStack_150 [7];
  undefined8 uStack_118;
  long ***ppplStack_110;
  undefined **ppuStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined ****ppppuStack_d0;
  undefined ***pppuStack_c8;
  undefined ***pppuStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_88;
  long lStack_78;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuVar11 = param_2;
  (*(code *)(*param_2)[0xb])();
  if (ppppuVar11[0x59] < (undefined ***)0x8) {
    ppppuVar11[(long)ppppuVar11[0x59] + 0x4e] = ppppuVar11[0x5a];
    ppppuVar11[0x59] = (undefined ***)((long)ppppuVar11[0x59] + 1);
  }
  else {
    func_0x00010988bfcc(ppppuVar11 + 0x4b);
  }
  ppppuVar12 = param_2;
  FUN_10ab59228(param_2,param_3);
  FUN_10ab5a4b4(param_5);
  ppppuVar13 = param_2;
  func_0x00010ab58b90(param_2,param_4);
  if (*(int *)(param_4 + 0x10) == 7) {
    ppppuVar14 = param_2;
    (*(code *)(*param_2)[0x13])(param_2,*(undefined8 *)(param_4 + 0x18));
    ppppuVar15 = param_2;
    ppplStack_110 = (long ***)ppppuVar14;
    (*(code *)(*param_2)[0x45])(param_2,&ppplStack_110);
    if ((int)ppppuVar15 != 0) {
      ppppuVar14 = param_2;
      (*(code *)(*param_2)[0xb])();
      pppuVar16 = ppppuVar14[0x48];
      if ((pppuVar16 == (undefined ***)0x0) ||
         (___dynamic_cast(pppuVar16,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0),
         ppplVar19 = ppplStack_110, pppuVar16 == (undefined ***)0x0)) {
        func_0x00010988bd28(&UNK_10f685540);
        goto LAB_10ab5a358;
      }
      ppplStack_110 = (long ***)0x0;
      iStack_158 = 7;
      appplStack_150[0] = ppplVar19;
      ppplStack_160 = (long ***)param_2;
      FUN_10a688ac0(&ppppuStack_d0,&ppplStack_160,pppuVar16[1]);
      if ((3 < iStack_158) && ((undefined ****)appplStack_150[0] != (undefined ****)0x0)) {
        (*(code *)**appplStack_150[0])();
      }
    }
    if ((undefined ****)ppplStack_110 != (undefined ****)0x0) {
      (*(code *)**ppplStack_110)();
    }
    if (((ulong)ppppuVar15 & 1) != 0) {
      pppplVar17 = (long ****)0x60;
      __Znwm();
      pppplVar29 = pppplVar17 + 1;
      *pppplVar29 = (long ***)0x0;
      pppplVar17[2] = (long ***)0x0;
      *pppplVar17 = (long ***)&PTR_FUN_110c4aea0;
      ppppuStack_180 = (undefined ****)(pppplVar17 + 3);
      pppplVar17[4] = (long ***)pppuStack_c8;
      *ppppuStack_180 = (undefined ***)ppppuStack_d0;
      if ((long ***)pppuStack_c8 != (long ***)0x0) {
        ppplVar19 = (long ***)(pppuStack_c8 + 1);
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ppplVar19,0x10);
          if (bVar8) {
            *ppplVar19 = (long **)((long)*ppplVar19 + 1);
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      pppplVar17[6] = uStack_b8;
      pppplVar17[5] = (long ***)pppuStack_c0;
      if (uStack_b8 != (long ***)0x0) {
        ppplVar19 = uStack_b8 + 2;
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ppplVar19,0x10);
          if (bVar8) {
            *ppplVar19 = (long **)((long)*ppplVar19 + 1);
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      *(undefined1 *)(pppplVar17 + 0xb) = 2;
      ppppuStack_1d0 = ppppuStack_180;
      ppppuStack_1c8 = (undefined ****)pppplVar17;
      FUN_10a688c1c(&ppppuStack_d0);
      FUN_10ab5930c(&ppppuStack_1e0,param_2,*(undefined4 *)(param_4 + 0x20),
                    *(undefined8 *)(param_4 + 0x28));
      uVar5 = *(uint *)((long)ppppuVar13 + 0x1c);
      pppplVar20 = (long ****)ppppuStack_1e0;
      pppplVar27 = (long ****)ppppuStack_1e0;
      ppplStack_188 = (long ***)ppppuVar12;
      ppppuStack_178 = (undefined ****)pppplVar17;
      if (*(int *)(ppppuVar13 + 3) == 0) {
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(pppplVar29,0x10);
          if (bVar8) {
            *pppplVar29 = (long ***)((long)*pppplVar29 + 1);
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        ppppuStack_170 = ppppuStack_1e0;
        ppppuStack_168 = ppppuStack_1d8;
        if ((long ****)ppppuStack_1d8 != (long ****)0x0) {
          pppplVar18 = (long ****)(ppppuStack_1d8 + 1);
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(pppplVar18,0x10);
            if (bVar8) {
              *pppplVar18 = (long ***)((long)*pppplVar18 + 1);
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        ppplStack_198 = (long ***)0x0;
        ppppuStack_190 = (undefined ****)0x0;
        pppplVar18 = (long ****)ppppuVar12[0xe];
        if ((pppplVar18 == (long ****)0x0) ||
           (__ZNSt3__119__shared_weak_count4lockEv(), ppppuStack_190 = (undefined ****)pppplVar18,
           pppplVar18 == (long ****)0x0)) {
LAB_10ab5a194:
          pppplVar18 = (long ****)ppppuStack_190;
          if ((bRam000000011330a9e8 & 1) != 0) {
            func_0x00010ae06f08(0,1,&UNK_10f69231b,&UNK_10f69243c,0xe4,&UNK_10f6923fc);
          }
          ppppuStack_d0 = (undefined ****)CONCAT44(ppppuStack_d0._4_4_,1);
          FUN_10ab403b4(ppppuStack_1e0,&ppppuStack_d0);
        }
        else {
          pppplVar17 = &ppplStack_188;
          param_2 = (undefined ****)ppppuVar12[0xd];
          ppplStack_198 = (long ***)param_2;
          if (param_2 == (undefined ****)0x0) goto LAB_10ab5a194;
          ppppuStack_d0 = (undefined ****)&PTR_FUN_110c77ba8;
          pppuStack_c8 = (undefined ***)0x0;
          uStack_ac = 0;
          pppuStack_c0 = (undefined ***)&DAT_11383d918;
          uStack_b8 = (long ***)0x0;
          uStack_b0 = 0;
          func_0x000107c30248(&pppuStack_c0,ppppuVar12 + 6,0);
          iVar6 = *(int *)((long)ppppuVar12 + 0x4c);
          iVar4 = iVar6;
          if (iVar6 != 2) {
            iVar4 = 0;
          }
          if (iVar6 == 1) {
            iVar4 = 1;
          }
          uStack_b8 = (long ***)CONCAT44(iVar4,uVar5);
          FUN_10a3bf4bc(&ppplStack_160,&ppppuStack_d0);
          FUN_10ae09e98(&ppppuStack_d0);
          FUN_10ab40884(&uStack_1c0,ppppuVar12[0x11],&ppplStack_188);
          ppplVar19 = (long ***)0x138;
          __Znwm();
          ppppuStack_d0 = (undefined ****)ppplStack_160;
          pppplVar29 = (long ****)(ppplVar19 + 1);
          *pppplVar29 = (long ***)0x0;
          ppplVar19[2] = (long **)0x0;
          *ppplVar19 = (long **)&PTR_FUN_110b9f3b0;
          pppplVar27 = (long ****)(ppplVar19 + 3);
          pppuStack_c8 = (undefined ***)CONCAT44(uStack_154,iStack_158);
          ppplStack_160 = (long ***)0x0;
          (*(code *)appplStack_150[0][2])(&pppuStack_c0,appplStack_150);
          uStack_88 = uStack_118;
          pplStack_1f8 = (long **)ppppuVar12[0xb];
          ppplStack_200 = (long ***)ppppuVar12[10];
          if (-1 < (char)*(code *)((long)ppppuVar12 + 0x67)) {
            pplStack_1f8 = (long **)(ulong)(byte)*(code *)((long)ppppuVar12 + 0x67);
            ppplStack_200 = (long ***)(ppppuVar12 + 10);
          }
          ppppuStack_1f0 = (undefined ****)&ppplStack_110;
          ppplStack_110 = (long ***)FUN_10ab5c808;
          ppuStack_108 = &PTR_DAT_110c4b158;
          uStack_100 = uStack_1c0;
          uStack_f0 = uStack_1b0;
          uStack_f8 = uStack_1b8;
          uStack_1b8 = 0;
          uStack_1b0 = 0;
          FUN_10a23708c(pppplVar27,&UNK_10e4f6c1b,0x2c,&UNK_10f647b45,3,&ppppuStack_d0,0);
          (*(code *)*ppuStack_108)(&ppuStack_108);
          FUN_10a042634(&ppppuStack_d0);
          ppppuStack_1a8 = (undefined ****)pppplVar27;
          pppuStack_1a0 = (undefined ***)ppplVar19;
          FUN_10ab40b34(&uStack_1c0);
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(pppplVar29,0x10);
            if (bVar8) {
              *pppplVar29 = (long ***)((long)*pppplVar29 + 1);
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          ppppuStack_d0 = (undefined ****)pppplVar27;
          pppuStack_c8 = (undefined ***)ppplVar19;
          (*(code *)**param_2)(param_2,&ppppuStack_d0);
          pppuVar16 = pppuStack_c8;
          if ((long ***)pppuStack_c8 != (long ***)0x0) {
            ppplVar19 = (long ***)(pppuStack_c8 + 1);
            do {
              pplVar24 = *ppplVar19;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(ppplVar19,0x10);
              if (bVar8) {
                *ppplVar19 = (long **)((long)pplVar24 + -1);
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (pplVar24 == (long **)0x0) {
              (*(code *)(*pppuStack_c8)[2])(pppuStack_c8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar16);
            }
          }
          pppuVar16 = pppuStack_1a0;
          if ((long ***)pppuStack_1a0 != (long ***)0x0) {
            ppplVar19 = (long ***)(pppuStack_1a0 + 1);
            do {
              pplVar24 = *ppplVar19;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(ppplVar19,0x10);
              if (bVar8) {
                *ppplVar19 = (long **)((long)pplVar24 + -1);
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (pplVar24 == (long **)0x0) {
              (*(code *)(*pppuStack_1a0)[2])(pppuStack_1a0);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar16);
            }
          }
          pppplVar20 = &ppplStack_160;
          FUN_10a042634();
          pppplVar18 = (long ****)ppppuStack_190;
        }
        if (pppplVar18 != (long ****)0x0) {
          pppplVar21 = pppplVar18 + 1;
          do {
            ppplVar19 = *pppplVar21;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(pppplVar21,0x10);
            if (bVar8) {
              *pppplVar21 = (long ***)((long)ppplVar19 + -1);
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (ppplVar19 == (long ***)0x0) {
            (*(code *)(*pppplVar18)[2])(pppplVar18);
            pppplVar20 = pppplVar18;
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
        }
        pppplVar21 = (long ****)ppppuStack_168;
        if ((long ****)ppppuStack_168 != (long ****)0x0) {
          pppplVar2 = (long ****)(ppppuStack_168 + 1);
          do {
            ppplVar19 = *pppplVar2;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(pppplVar2,0x10);
            if (bVar8) {
              *pppplVar2 = (long ***)((long)ppplVar19 + -1);
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (ppplVar19 == (long ***)0x0) {
            (*(code *)(*ppppuStack_168)[2])(ppppuStack_168);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            pppplVar20 = pppplVar21;
          }
        }
        if ((long ****)ppppuStack_178 != (long ****)0x0) {
          pppplVar21 = (long ****)(ppppuStack_178 + 1);
          do {
            ppplVar19 = *pppplVar21;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(pppplVar21,0x10);
            if (bVar8) {
              *pppplVar21 = (long ***)((long)ppplVar19 + -1);
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          goto LAB_10ab5a264;
        }
      }
      else {
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(pppplVar29,0x10);
          if (bVar8) {
            *pppplVar29 = (long ***)((long)*pppplVar29 + 1);
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        ppppuStack_170 = ppppuStack_1e0;
        ppppuStack_168 = ppppuStack_1d8;
        if ((long ****)ppppuStack_1d8 != (long ****)0x0) {
          pppplVar18 = (long ****)(ppppuStack_1d8 + 1);
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(pppplVar18,0x10);
            if (bVar8) {
              *pppplVar18 = (long ***)((long)*pppplVar18 + 1);
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        ppplStack_198 = (long ***)0x0;
        ppppuStack_190 = (undefined ****)0x0;
        pppplVar18 = (long ****)ppppuVar12[0xe];
        if ((pppplVar18 == (long ****)0x0) ||
           (__ZNSt3__119__shared_weak_count4lockEv(), ppppuStack_190 = (undefined ****)pppplVar18,
           pppplVar18 == (long ****)0x0)) {
LAB_10ab5a0bc:
          pppplVar18 = (long ****)ppppuStack_190;
          if ((bRam000000011330a9e8 & 1) != 0) {
            func_0x00010ae06f08(0,1,&UNK_10f69231b,&UNK_10f6924f2,0x14a,&UNK_10f6923fc);
          }
          ppppuStack_d0 = (undefined ****)CONCAT44(ppppuStack_d0._4_4_,1);
          FUN_10ab403b4(ppppuStack_1e0,&ppppuStack_d0);
        }
        else {
          pppplVar17 = &ppplStack_188;
          param_2 = (undefined ****)ppppuVar12[0xd];
          ppplStack_198 = (long ***)param_2;
          if (param_2 == (undefined ****)0x0) goto LAB_10ab5a0bc;
          ppppuStack_d0 = (undefined ****)&PTR_FUN_110c77c48;
          pppuStack_c8 = (undefined ***)0x0;
          uStack_ac = 0;
          pppuStack_c0 = (undefined ***)&DAT_11383d918;
          uStack_b8 = (long ***)0x0;
          uStack_b0 = 0;
          func_0x000107c30248(&pppuStack_c0,ppppuVar12 + 6,0);
          iVar6 = *(int *)((long)ppppuVar12 + 0x4c);
          iVar4 = iVar6;
          if (iVar6 != 2) {
            iVar4 = 0;
          }
          if (iVar6 == 1) {
            iVar4 = 1;
          }
          uStack_b8 = (long ***)CONCAT44(iVar4,uVar5);
          FUN_10a3bf4bc(&ppplStack_160,&ppppuStack_d0);
          FUN_10ae0a34c(&ppppuStack_d0);
          FUN_10ab40bb4(&uStack_1c0,ppppuVar12[0x11],&ppplStack_188);
          ppplVar19 = (long ***)0x138;
          __Znwm();
          ppppuStack_d0 = (undefined ****)ppplStack_160;
          pppplVar29 = (long ****)(ppplVar19 + 1);
          *pppplVar29 = (long ***)0x0;
          ppplVar19[2] = (long **)0x0;
          *ppplVar19 = (long **)&PTR_FUN_110b9f3b0;
          pppplVar27 = (long ****)(ppplVar19 + 3);
          pppuStack_c8 = (undefined ***)CONCAT44(uStack_154,iStack_158);
          ppplStack_160 = (long ***)0x0;
          (*(code *)appplStack_150[0][2])(&pppuStack_c0,appplStack_150);
          uStack_88 = uStack_118;
          pplStack_1f8 = (long **)ppppuVar12[0xb];
          ppplStack_200 = (long ***)ppppuVar12[10];
          if (-1 < (char)*(code *)((long)ppppuVar12 + 0x67)) {
            pplStack_1f8 = (long **)(ulong)(byte)*(code *)((long)ppppuVar12 + 0x67);
            ppplStack_200 = (long ***)(ppppuVar12 + 10);
          }
          ppppuStack_1f0 = (undefined ****)&ppplStack_110;
          ppplStack_110 = (long ***)FUN_10ab5dac0;
          ppuStack_108 = &PTR_FUN_110c4b170;
          uStack_100 = uStack_1c0;
          uStack_f0 = uStack_1b0;
          uStack_f8 = uStack_1b8;
          uStack_1b8 = 0;
          uStack_1b0 = 0;
          FUN_10a23708c(pppplVar27,&UNK_10e4f6c48,0x2a,&UNK_10f647b45,3,&ppppuStack_d0,0);
          (*(code *)*ppuStack_108)(&ppuStack_108);
          FUN_10a042634(&ppppuStack_d0);
          ppppuStack_1a8 = (undefined ****)pppplVar27;
          pppuStack_1a0 = (undefined ***)ppplVar19;
          FUN_10ab40e64(&uStack_1c0);
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(pppplVar29,0x10);
            if (bVar8) {
              *pppplVar29 = (long ***)((long)*pppplVar29 + 1);
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          ppppuStack_d0 = (undefined ****)pppplVar27;
          pppuStack_c8 = (undefined ***)ppplVar19;
          (*(code *)**param_2)(param_2,&ppppuStack_d0);
          pppuVar16 = pppuStack_c8;
          if ((long ***)pppuStack_c8 != (long ***)0x0) {
            ppplVar19 = (long ***)(pppuStack_c8 + 1);
            do {
              pplVar24 = *ppplVar19;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(ppplVar19,0x10);
              if (bVar8) {
                *ppplVar19 = (long **)((long)pplVar24 + -1);
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (pplVar24 == (long **)0x0) {
              (*(code *)(*pppuStack_c8)[2])(pppuStack_c8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar16);
            }
          }
          pppuVar16 = pppuStack_1a0;
          if ((long ***)pppuStack_1a0 != (long ***)0x0) {
            ppplVar19 = (long ***)(pppuStack_1a0 + 1);
            do {
              pplVar24 = *ppplVar19;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(ppplVar19,0x10);
              if (bVar8) {
                *ppplVar19 = (long **)((long)pplVar24 + -1);
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (pplVar24 == (long **)0x0) {
              (*(code *)(*pppuStack_1a0)[2])(pppuStack_1a0);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar16);
            }
          }
          pppplVar20 = &ppplStack_160;
          FUN_10a042634();
          pppplVar18 = (long ****)ppppuStack_190;
        }
        if (pppplVar18 != (long ****)0x0) {
          pppplVar21 = pppplVar18 + 1;
          do {
            ppplVar19 = *pppplVar21;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(pppplVar21,0x10);
            if (bVar8) {
              *pppplVar21 = (long ***)((long)ppplVar19 + -1);
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (ppplVar19 == (long ***)0x0) {
            (*(code *)(*pppplVar18)[2])(pppplVar18);
            pppplVar20 = pppplVar18;
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
        }
        pppplVar21 = (long ****)ppppuStack_168;
        if ((long ****)ppppuStack_168 != (long ****)0x0) {
          pppplVar2 = (long ****)(ppppuStack_168 + 1);
          do {
            ppplVar19 = *pppplVar2;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(pppplVar2,0x10);
            if (bVar8) {
              *pppplVar2 = (long ***)((long)ppplVar19 + -1);
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (ppplVar19 == (long ***)0x0) {
            (*(code *)(*ppppuStack_168)[2])(ppppuStack_168);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            pppplVar20 = pppplVar21;
          }
        }
        if ((long ****)ppppuStack_178 != (long ****)0x0) {
          pppplVar21 = (long ****)(ppppuStack_178 + 1);
          do {
            ppplVar19 = *pppplVar21;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(pppplVar21,0x10);
            if (bVar8) {
              *pppplVar21 = (long ***)((long)ppplVar19 + -1);
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
LAB_10ab5a264:
          pppplVar21 = (long ****)ppppuStack_178;
          if (ppplVar19 == (long ***)0x0) {
            (*(code *)(*ppppuStack_178)[2])(ppppuStack_178);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            pppplVar20 = pppplVar21;
          }
        }
      }
      if ((long ****)ppppuStack_1d8 != (long ****)0x0) {
        pppplVar21 = (long ****)(ppppuStack_1d8 + 1);
        do {
          ppplVar19 = *pppplVar21;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(pppplVar21,0x10);
          if (bVar8) {
            *pppplVar21 = (long ***)((long)ppplVar19 + -1);
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (ppplVar19 == (long ***)0x0) {
          (*(code *)(*ppppuStack_1d8)[2])(ppppuStack_1d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppplVar20 = (long ****)ppppuStack_1d8;
        }
      }
      pppplVar21 = (long ****)ppppuStack_1c8;
      if ((long ****)ppppuStack_1c8 != (long ****)0x0) {
        pppplVar2 = (long ****)(ppppuStack_1c8 + 1);
        do {
          ppplVar19 = *pppplVar2;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(pppplVar2,0x10);
          if (bVar8) {
            *pppplVar2 = (long ***)((long)ppplVar19 + -1);
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (ppplVar19 == (long ***)0x0) {
          (*(code *)(*ppppuStack_1c8)[2])(ppppuStack_1c8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppplVar20 = pppplVar21;
        }
      }
      *param_1 = 0;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
        ___stack_chk_fail();
        FUN_10a05bd88(&ppppuStack_d0);
        FUN_10a05bd88(&ppppuStack_1a8);
        FUN_10a042634(&ppplStack_160);
        unaff_x21 = &ppplStack_188;
        func_0x00010a05a8c4(&ppplStack_198);
        FUN_10ab54778(&ppppuStack_170);
        FUN_10ab548ac(pppplVar17 + 1);
        FUN_10ab54778(&ppppuStack_1e0);
        FUN_10ab548ac(&ppppuStack_1d0);
        unaff_x30 = 0x10ab5a4ac;
        register0x00000008 = (BADSPACEBASE *)&ppplStack_200;
        unaff_x19 = ppppuVar11;
        unaff_x20 = pppplVar20;
        unaff_x22 = param_2;
        unaff_x23 = pppplVar18;
        unaff_x24 = pppplVar27;
        unaff_x25 = pppplVar29;
        unaff_x26 = pppplVar17;
        unaff_x27 = param_1;
        unaff_x28 = (ulong)uVar5;
        unaff_x29 = puVar1;
      }
      ppppuVar12 = ppppuVar11 + 0x4b;
      pppuVar16 = ppppuVar11[0x59];
      pppuVar22 = (undefined ***)((long)pppuVar16 - 1);
      ppppuVar11[0x59] = pppuVar22;
      if (pppuVar22 < (undefined ***)0x8) {
        pppuVar16 = ppppuVar12[(long)pppuVar16 + 2];
        if (ppppuVar11[0x5a] == pppuVar16) {
          return;
        }
      }
      else {
        pppuVar16 = (undefined ***)ppppuVar11[0x57][-1];
        ppppuVar11[0x57] = ppppuVar11[0x57] + -1;
        if (ppppuVar11[0x5a] == pppuVar16) {
          return;
        }
      }
      *(ulong *)((long)register0x00000008 + -0x60) = unaff_x28;
      *(undefined4 **)((long)register0x00000008 + -0x58) = unaff_x27;
      *(long *****)((long)register0x00000008 + -0x50) = unaff_x26;
      *(long *****)((long)register0x00000008 + -0x48) = unaff_x25;
      *(long *****)((long)register0x00000008 + -0x40) = unaff_x24;
      *(long *****)((long)register0x00000008 + -0x38) = unaff_x23;
      *(undefined *****)((long)register0x00000008 + -0x30) = unaff_x22;
      *(long *****)((long)register0x00000008 + -0x28) = unaff_x21;
      *(long *****)((long)register0x00000008 + -0x20) = unaff_x20;
      *(undefined *****)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      pppuVar22 = *ppppuVar12;
      pppuVar23 = ppppuVar11[0x4c];
      lVar25 = (long)pppuVar23 - (long)pppuVar22;
      pppuVar28 = (undefined ***)(lVar25 >> 4);
      if (pppuVar28 < pppuVar16) {
        uVar30 = (long)pppuVar16 - (long)pppuVar28;
        pppuVar26 = ppppuVar11[0x4d];
        if ((ulong)((long)pppuVar26 - (long)pppuVar23 >> 4) < uVar30) {
          if ((ulong)pppuVar16 >> 0x3c == 0) {
            pppuVar23 = (undefined ***)((long)pppuVar26 - (long)pppuVar22 >> 3);
            if (pppuVar23 <= pppuVar16) {
              pppuVar23 = pppuVar16;
            }
            if (0x7fffffffffffffef < (ulong)((long)pppuVar26 - (long)pppuVar22)) {
              pppuVar23 = (undefined ***)0xfffffffffffffff;
            }
            *(undefined *****)((long)register0x00000008 + -0x68) = ppppuVar12;
            if ((ulong)pppuVar23 >> 0x3c == 0) {
              lVar10 = (long)pppuVar23 << 4;
              __Znwm();
              lVar3 = lVar10 + lVar25;
              _bzero(lVar3,uVar30 * 0x10);
              pppuVar28 = (undefined ***)(lVar3 + (long)pppuVar28 * -0x10);
              _memcpy(pppuVar28,pppuVar22,lVar25);
              *ppppuVar12 = pppuVar28;
              ppppuVar11[0x4c] = (undefined ***)(lVar3 + uVar30 * 0x10);
              ppppuVar11[0x4d] = (undefined ***)(lVar10 + (long)pppuVar23 * 0x10);
              *(undefined ****)((long)register0x00000008 + -0x78) = pppuVar22;
              *(undefined ****)((long)register0x00000008 + -0x70) = pppuVar26;
              *(undefined ****)((long)register0x00000008 + -0x88) = pppuVar22;
              *(undefined ****)((long)register0x00000008 + -0x80) = pppuVar22;
              func_0x00010988c1b8((undefined1 *)((long)register0x00000008 + -0x88));
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar9)();
        }
        _bzero(pppuVar23,uVar30 * 0x10);
        ppppuVar11[0x4c] = pppuVar23 + uVar30 * 2;
      }
      else if (pppuVar16 < pppuVar28) {
        while (pppuVar23 != pppuVar22 + (long)pppuVar16 * 2) {
          pppuVar23 = pppuVar23 + -2;
          func_0x00010988c204(pppuVar23);
        }
        ppppuVar11[0x4c] = pppuVar22 + (long)pppuVar16 * 2;
      }
code_r0x00010988c138:
      ppppuVar11[0x5a] = pppuVar16;
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10ab5a358:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10ab5a35c);
  (*pcVar9)();
}



/* Entry: 10ab5a4b4; end: 10ab5a4d7;  */

void FUN_10ab5a4b4(undefined8 param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1 == 3) {
    return;
  }
  puVar1 = (undefined8 *)0x3;
  FUN_10a052ee0(3,0,param_1);
  *puVar1 = &PTR_FUN_110c4aea0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ab5a4d8; end: 10ab5a4e7;  */

void FUN_10ab5a4d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c4aea0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ab5a4e8; end: 10ab5a507;  */

void FUN_10ab5a4e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c4aea0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab5a508; end: 10ab5a52f;  */

undefined1  [16] FUN_10ab5a508(long param_1)

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
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10ab5a52c);
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



/* Entry: 10ab5a530; end: 10ab5a60f;  */

void FUN_10ab5a530(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
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
  FUN_10ab5a610(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar7 = plVar5[4];
  plVar1 = (long *)plVar5[3];
  if (-1 < (char)*(byte *)((long)plVar5 + 0x2f)) {
    uVar7 = (ulong)*(byte *)((long)plVar5 + 0x2f);
    plVar1 = plVar5 + 3;
  }
  (**(code **)(*param_2 + 0x128))(param_1 + 2,param_2,plVar1,uVar7);
  *param_1 = 6;
  plVar1 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
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
  lVar6 = *plVar1;
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
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
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



/* Entry: 10ab5a610; end: 10ab5a677;  */

void FUN_10ab5a610(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined **ppuVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *extraout_x8;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
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
      param_4 = 0;
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
  plVar7 = plVar5;
  FUN_10ab5a610(plVar5,param_2);
  FUN_10a052e3c(param_4);
  uVar9 = plVar7[7];
  plVar1 = (long *)plVar7[6];
  if (-1 < (char)*(byte *)((long)plVar7 + 0x47)) {
    uVar9 = (ulong)*(byte *)((long)plVar7 + 0x47);
    plVar1 = plVar7 + 6;
  }
  (**(code **)(*plVar5 + 0x128))(extraout_x8 + 2,plVar5,plVar1,uVar9);
  *extraout_x8 = 6;
  plVar5 = plVar6 + 0x4b;
  lVar8 = plVar6[0x59];
  uVar9 = lVar8 - 1;
  plVar6[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar5[lVar8 + 2];
    if (plVar6[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar9) {
      return;
    }
  }
  lVar8 = *plVar5;
  lVar13 = plVar6[0x4c];
  lVar11 = lVar13 - lVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar9) {
    uVar16 = uVar9 - uVar15;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar14 - lVar8 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar8)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_88 = plVar5;
        if (uVar10 >> 0x3c == 0) {
          lVar3 = uVar10 << 4;
          __Znwm();
          lVar13 = lVar3 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar5 = lVar12;
          plVar6[0x4c] = lVar13 + uVar16 * 0x10;
          plVar6[0x4d] = lVar3 + uVar10 * 0x10;
          lStack_a8 = lVar8;
          lStack_a0 = lVar8;
          lStack_98 = lVar8;
          lStack_90 = lVar14;
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
    _bzero(lVar13,uVar16 * 0x10);
    plVar6[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar9 < uVar15) {
    lVar8 = lVar8 + uVar9 * 0x10;
    while (lVar13 != lVar8) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar6[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar9;
  return;
}



/* Entry: 10ab5a678; end: 10ab5a757;  */

void FUN_10ab5a678(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
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
  FUN_10ab5a610(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar7 = plVar5[7];
  plVar1 = (long *)plVar5[6];
  if (-1 < (char)*(byte *)((long)plVar5 + 0x47)) {
    uVar7 = (ulong)*(byte *)((long)plVar5 + 0x47);
    plVar1 = plVar5 + 6;
  }
  (**(code **)(*param_2 + 0x128))(param_1 + 2,param_2,plVar1,uVar7);
  *param_1 = 6;
  plVar1 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
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
  lVar6 = *plVar1;
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
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
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



/* Entry: 10ab5a758; end: 10ab5a813;  */

void FUN_10ab5a758(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ab5a610(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[9];
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)(int)lVar5;
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



/* Entry: 10ab5a814; end: 10ab5a8cf;  */

void FUN_10ab5a814(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  int iVar2;
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
  FUN_10ab5a610(param_2,param_3);
  FUN_10a052e3c(param_5);
  iVar2 = *(int *)((long)param_2 + 0x4c);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)iVar2;
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



/* Entry: 10ab5a8d0; end: 10ab5a9cb;  */

undefined1  [16] FUN_10ab5a8d0(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c4a770;
  puVar1 = &UNK_10f692150;
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
    ppuStack_40 = &PTR_DAT_110c4a770;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c42c58;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10ab5a9cc; end: 10ab5aa2f;  */

ulong FUN_10ab5a9cc(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10ab5aa30);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10ab5aa30,4,*(undefined8 *)(param_1 + 0x40));
  }
  return param_1;
}



/* Entry: 10ab5aa30; end: 10ab5b1f3;  */

void FUN_10ab5aa30(undefined4 *param_1,code *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined *puVar14;
  ulong uVar15;
  code **ppcVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  long *plVar24;
  undefined8 uStack_168;
  long *plStack_160;
  long *plStack_158;
  long *plStack_150;
  code *pcStack_148;
  long *plStack_140;
  code *pcStack_138;
  code *pcStack_130;
  code *pcStack_128;
  long *plStack_120;
  long *plStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  code *pcStack_f8;
  code *pcStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  code *pcStack_c0;
  long *plStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  code *pcStack_68;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = param_2;
  (**(code **)(*(long *)param_2 + 0x58))();
  if (*(ulong *)(pcVar4 + 0x2c8) < 8) {
    *(long *)(pcVar4 + (*(ulong *)(pcVar4 + 0x2c8) + 0x4e) * 8) = *(long *)(pcVar4 + 0x2d0);
    *(long *)(pcVar4 + 0x2c8) = *(long *)(pcVar4 + 0x2c8) + 1;
  }
  else {
    func_0x00010988bfcc(pcVar4 + 600);
  }
  pcVar6 = param_2;
  func_0x000109898688(param_2,param_3);
  if (pcVar6 == (code *)0x0) {
LAB_10ab5b100:
    puVar14 = &UNK_10f68f52e;
  }
  else {
    pcVar7 = param_2;
    FUN_10a053854(param_2,pcVar6);
    if ((pcVar7 != (code *)0x0) && (___dynamic_cast(), pcVar7 != (code *)0x0)) {
      FUN_10ab5b1f4(param_5);
      if (*param_4 == 1) {
        pcStack_148 = (code *)0x0;
        plStack_140 = (long *)0x0;
      }
      else {
        pcVar6 = param_2;
        func_0x000109898688(param_2,param_4);
        if (pcVar6 == (code *)0x0) goto LAB_10ab5b100;
        func_0x00010989879c(&pcStack_c0);
        if ((pcStack_c0 == (code *)0x0) ||
           (pcVar6 = pcStack_c0, ___dynamic_cast(pcStack_c0,&PTR_DAT_110b178e0,&PTR_DAT_110c4a728,0)
           , pcVar6 == (code *)0x0)) {
          ppcVar16 = &pcStack_148;
        }
        else {
          plStack_140 = plStack_b8;
          ppcVar16 = &pcStack_c0;
          pcStack_148 = pcVar6;
        }
        *ppcVar16 = (code *)0x0;
        ppcVar16[1] = (code *)0x0;
        plVar11 = plStack_b8;
        if (plStack_b8 != (long *)0x0) {
          plVar12 = plStack_b8 + 1;
          do {
            lVar10 = *plVar12;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar3) {
              *plVar12 = lVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
          }
        }
        if (pcStack_148 == (code *)0x0) {
          func_0x00010988bd28(&UNK_10f58251f);
          goto LAB_10ab5b14c;
        }
      }
      pcVar6 = pcStack_148;
      if (param_4[4] == 7) {
        pcVar8 = param_2;
        (**(code **)(*(long *)param_2 + 0x98))(param_2,*(undefined8 *)(param_4 + 6));
        pcVar9 = param_2;
        pcStack_f8 = pcVar8;
        (**(code **)(*(long *)param_2 + 0x228))(param_2,&pcStack_f8);
        if ((int)pcVar9 != 0) {
          pcVar8 = param_2;
          (**(code **)(*(long *)param_2 + 0x58))();
          lVar10 = *(long *)(pcVar8 + 0x240);
          if ((lVar10 == 0) ||
             (___dynamic_cast(lVar10,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), pcVar8 = pcStack_f8,
             lVar10 == 0)) {
            func_0x00010988bd28(&UNK_10f685540);
            goto LAB_10ab5b14c;
          }
          pcStack_f8 = (code *)0x0;
          pcStack_130 = (code *)CONCAT44(pcStack_130._4_4_,7);
          pcStack_128 = pcVar8;
          pcStack_138 = param_2;
          FUN_10a688ac0(&pcStack_c0,&pcStack_138,*(undefined8 *)(lVar10 + 8));
          if ((3 < (int)pcStack_130) && (pcStack_128 != (code *)0x0)) {
            (*(code *)**(undefined8 **)pcStack_128)();
          }
        }
        if (pcStack_f8 != (code *)0x0) {
          (*(code *)**(undefined8 **)pcStack_f8)();
        }
        if (((ulong)pcVar9 & 1) != 0) {
          plVar11 = (long *)0x60;
          __Znwm();
          plVar12 = plVar11 + 1;
          *plVar12 = 0;
          plVar11[2] = 0;
          *plVar11 = (long)&PTR_FUN_110c4aef0;
          plStack_e0 = plVar11 + 3;
          plVar11[4] = (long)plStack_b8;
          *plStack_e0 = (long)pcStack_c0;
          if (plStack_b8 != (long *)0x0) {
            plVar1 = plStack_b8 + 1;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = *plVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          plVar11[6] = lStack_a8;
          plVar11[5] = lStack_b0;
          if (lStack_a8 != 0) {
            plVar1 = (long *)(lStack_a8 + 0x10);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = *plVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          *(undefined1 *)(plVar11 + 0xb) = 2;
          plStack_158 = plStack_e0;
          plStack_150 = plVar11;
          FUN_10a688c1c(&pcStack_c0);
          FUN_10a059354(&uStack_168,param_2,param_4 + 8);
          plVar1 = plStack_160;
          plStack_e8 = plStack_140;
          if (plStack_140 != (long *)0x0) {
            plVar24 = plStack_140 + 1;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar24,0x10);
              if (bVar3) {
                *plVar24 = *plVar24 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar3) {
              *plVar12 = *plVar12 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          uStack_d0 = uStack_168;
          plStack_c8 = plStack_160;
          if (plStack_160 != (long *)0x0) {
            plVar24 = plStack_160 + 1;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar24,0x10);
              if (bVar3) {
                *plVar24 = *plVar24 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          pcStack_f8 = pcVar7;
          pcStack_f0 = pcVar6;
          plStack_d8 = plVar11;
          if (*(long *)(pcVar7 + 0x108) == 0) {
            plVar24 = *(long **)(*(long *)(pcVar7 + 0x50) + 0xaa0);
            plStack_120 = plStack_140;
            if (plStack_140 != (long *)0x0) {
              plVar13 = plStack_140 + 1;
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                if (bVar3) {
                  *plVar13 = *plVar13 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar3) {
                *plVar12 = *plVar12 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            uStack_108 = uStack_168;
            plStack_100 = plStack_160;
            if (plStack_160 != (long *)0x0) {
              plVar12 = plStack_160 + 1;
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                if (bVar3) {
                  *plVar12 = *plVar12 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            plVar12 = plVar24 + 9;
            pcStack_138 = pcVar7;
            pcStack_130 = pcVar7;
            pcStack_128 = pcVar6;
            plStack_118 = plStack_e0;
            plStack_110 = plVar11;
            FUN_10a1cda24(plVar12,&PTR_DAT_110c49788);
            if (plVar12 != (long *)0x0) {
              pcStack_c0 = (code *)&DAT_10f648b9d;
              plStack_b8 = (long *)0xb;
              FUN_10a2677b4(plVar24[0x11],&pcStack_c0);
              plVar11 = (long *)plVar12[4];
              if ((plVar11 != (long *)0x0) &&
                 (plVar13 = plVar11,
                 ___dynamic_cast(plVar11,&PTR_DAT_110bbadc8,&PTR_DAT_110bbade0,0),
                 plVar13 != (long *)0x0)) {
                pcStack_c0 = FUN_10ab5e5b8;
                FUN_10ab5ed48(&plStack_b8,&pcStack_138);
                FUN_10a2a6cbc(plVar13,&pcStack_c0);
                (*(code *)*plStack_b8)(&plStack_b8);
                (**(code **)(*plVar11 + 0x10))(plVar11);
                plVar11 = (long *)plVar12[4];
                (**(code **)(*plVar11 + 0x18))();
                if ((int)plVar11 != 0) {
                  (**(code **)(*(long *)((long)plVar24 + *(long *)(*plVar24 + -0x18)) + 0x28))
                            ((long)plVar24 + *(long *)(*plVar24 + -0x18));
                }
                if (plVar1 != (long *)0x0) {
                  plVar11 = plVar1 + 1;
                  do {
                    lVar10 = *plVar11;
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar3) {
                      *plVar11 = lVar10 + -1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  if (lVar10 == 0) {
                    (**(code **)(*plVar1 + 0x10))(plVar1);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
                  }
                }
                plVar11 = plStack_110;
                if (plStack_110 != (long *)0x0) {
                  plVar12 = plStack_110 + 1;
                  do {
                    lVar10 = *plVar12;
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                    if (bVar3) {
                      *plVar12 = lVar10 + -1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  if (lVar10 == 0) {
                    (**(code **)(*plStack_110 + 0x10))(plStack_110);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
                  }
                }
                plVar11 = plStack_120;
                plVar1 = plStack_c8;
                if (plStack_120 != (long *)0x0) {
                  plVar12 = plStack_120 + 1;
                  do {
                    lVar10 = *plVar12;
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                    if (bVar3) {
                      *plVar12 = lVar10 + -1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  if (lVar10 == 0) {
                    (**(code **)(*plStack_120 + 0x10))(plStack_120);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
                    plVar1 = plStack_c8;
                  }
                }
                goto joined_r0x00010ab5af4c;
              }
              goto LAB_10ab5b124;
            }
            puVar14 = &UNK_10f64981f;
          }
          else {
            FUN_10ab41028(&pcStack_f8);
joined_r0x00010ab5af4c:
            if (plVar1 != (long *)0x0) {
              plVar11 = plVar1 + 1;
              do {
                lVar10 = *plVar11;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                if (bVar3) {
                  *plVar11 = lVar10 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar10 == 0) {
                (**(code **)(*plVar1 + 0x10))(plVar1);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
              }
            }
            plVar11 = plStack_d8;
            if (plStack_d8 != (long *)0x0) {
              plVar12 = plStack_d8 + 1;
              do {
                lVar10 = *plVar12;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                if (bVar3) {
                  *plVar12 = lVar10 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar10 == 0) {
                (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
              }
            }
            plVar11 = plStack_e8;
            if (plStack_e8 != (long *)0x0) {
              plVar12 = plStack_e8 + 1;
              do {
                lVar10 = *plVar12;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                if (bVar3) {
                  *plVar12 = lVar10 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar10 == 0) {
                (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
              }
            }
            if (plStack_160 != (long *)0x0) {
              plVar11 = plStack_160 + 1;
              do {
                lVar10 = *plVar11;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                if (bVar3) {
                  *plVar11 = lVar10 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar10 == 0) {
                (**(code **)(*plStack_160 + 0x10))(plStack_160);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_160);
              }
            }
            plVar11 = plStack_150;
            if (plStack_150 != (long *)0x0) {
              plVar12 = plStack_150 + 1;
              do {
                lVar10 = *plVar12;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                if (bVar3) {
                  *plVar12 = lVar10 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar10 == 0) {
                (**(code **)(*plStack_150 + 0x10))(plStack_150);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
              }
            }
            plVar11 = plStack_140;
            if (plStack_140 != (long *)0x0) {
              plVar12 = plStack_140 + 1;
              do {
                lVar10 = *plVar12;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                if (bVar3) {
                  *plVar12 = lVar10 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar10 == 0) {
                (**(code **)(*plStack_140 + 0x10))(plStack_140);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
              }
            }
            *param_1 = 0;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
              pcVar6 = pcVar4 + 600;
              lVar10 = *(long *)(pcVar4 + 0x2c8);
              uVar15 = lVar10 - 1;
              *(ulong *)(pcVar4 + 0x2c8) = uVar15;
              if (uVar15 < 8) {
                uVar15 = *(ulong *)(pcVar6 + (lVar10 + 2) * 8);
                if (*(ulong *)(pcVar4 + 0x2d0) == uVar15) {
                  return;
                }
              }
              else {
                uVar15 = *(ulong *)(*(long *)(pcVar4 + 0x2b8) + -8);
                *(ulong **)(pcVar4 + 0x2b8) = (ulong *)(*(long *)(pcVar4 + 0x2b8) + -8);
                if (*(ulong *)(pcVar4 + 0x2d0) == uVar15) {
                  return;
                }
              }
              lVar10 = *(long *)pcVar6;
              lVar20 = *(long *)(pcVar4 + 0x260);
              lVar18 = lVar20 - lVar10;
              uVar22 = lVar18 >> 4;
              if (uVar22 < uVar15) {
                uVar23 = uVar15 - uVar22;
                lVar21 = *(long *)(pcVar4 + 0x268);
                if ((ulong)(lVar21 - lVar20 >> 4) < uVar23) {
                  if (uVar15 >> 0x3c == 0) {
                    uVar17 = lVar21 - lVar10 >> 3;
                    if (uVar17 <= uVar15) {
                      uVar17 = uVar15;
                    }
                    if (0x7fffffffffffffef < (ulong)(lVar21 - lVar10)) {
                      uVar17 = 0xfffffffffffffff;
                    }
                    pcStack_68 = pcVar6;
                    if (uVar17 >> 0x3c == 0) {
                      lVar5 = uVar17 << 4;
                      __Znwm();
                      lVar20 = lVar5 + lVar18;
                      _bzero(lVar20,uVar23 * 0x10);
                      lVar19 = lVar20 + uVar22 * -0x10;
                      _memcpy(lVar19,lVar10,lVar18);
                      *(long *)pcVar6 = lVar19;
                      *(ulong *)(pcVar4 + 0x260) = lVar20 + uVar23 * 0x10;
                      *(ulong *)(pcVar4 + 0x268) = lVar5 + uVar17 * 0x10;
                      lStack_88 = lVar10;
                      lStack_80 = lVar10;
                      lStack_78 = lVar10;
                      lStack_70 = lVar21;
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
                _bzero(lVar20,uVar23 * 0x10);
                *(ulong *)(pcVar4 + 0x260) = lVar20 + uVar23 * 0x10;
              }
              else if (uVar15 < uVar22) {
                lVar10 = lVar10 + uVar15 * 0x10;
                while (lVar20 != lVar10) {
                  lVar20 = lVar20 + -0x10;
                  func_0x00010988c204(lVar20);
                }
                *(long *)(pcVar4 + 0x260) = lVar10;
              }
code_r0x00010988c138:
              *(ulong *)(pcVar4 + 0x2d0) = uVar15;
              return;
            }
            ___stack_chk_fail();
LAB_10ab5b124:
            puVar14 = &UNK_10f64983a;
          }
          FUN_10a00946c(puVar14);
          goto LAB_10ab5b14c;
        }
      }
      func_0x00010988bd28(&UNK_10f6347ad);
      goto LAB_10ab5b14c;
    }
    puVar14 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar14);
LAB_10ab5b14c:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ab5b150);
  (*pcVar4)();
}



/* Entry: 10ab5b1f4; end: 10ab5b217;  */

void FUN_10ab5b1f4(undefined8 param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1 == 3) {
    return;
  }
  puVar1 = (undefined8 *)0x3;
  FUN_10a052ee0(3,0,param_1);
  *puVar1 = &PTR_FUN_110c4aef0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ab5b218; end: 10ab5b227;  */

void FUN_10ab5b218(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c4aef0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ab5b228; end: 10ab5b247;  */

void FUN_10ab5b228(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c4aef0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab5b248; end: 10ab5b26f;  */

undefined1  [16] FUN_10ab5b248(long param_1)

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
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10ab5b26c);
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



/* Entry: 10ab5b270; end: 10ab5b32b;  */

void FUN_10ab5b270(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f6930e0,0x17);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ab5b32c);
  (*pcVar4)();
}



/* Entry: 10ab5b32c; end: 10ab5b413;  */

void FUN_10ab5b32c(undefined8 *param_1,undefined8 param_2,int param_3)

{
  code *pcVar1;
  int aiStack_20 [2];
  undefined8 *puStack_18;
  
  if (param_1[2] != param_1[3]) {
    aiStack_20[0] = 3;
    puStack_18 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,param_2,aiStack_20);
    if ((3 < aiStack_20[0]) && (puStack_18 != (undefined8 *)0x0)) {
      (**(code **)*puStack_18)();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ab5b3a0);
  (*pcVar1)();
}



/* Entry: 10ab5b414; end: 10ab5b417;  */

void FUN_10ab5b414(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ab5b418; end: 10ab5b42b;  */

void FUN_10ab5b418(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab5b42c; end: 10ab5b443;  */

void FUN_10ab5b42c(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010ab5b43c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 10ab5b444; end: 10ab5b47b;  */

undefined8 FUN_10ab5b444(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c4af90);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10ab5b47c; end: 10ab5b483;  */

void FUN_10ab5b47c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab5b484; end: 10ab5b497;  */

void FUN_10ab5b484(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab5b498; end: 10ab5b4af;  */

void FUN_10ab5b498(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010ab5b4a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 10ab5b4b0; end: 10ab5b4e7;  */

undefined8 FUN_10ab5b4b0(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c4b008);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10ab5b4e8; end: 10ab5b4fb;  */

void FUN_10ab5b4e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab5b4fc; end: 10ab5b51b;  */

void FUN_10ab5b4fc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c4b030;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab5b51c; end: 10ab5b52b;  */

void FUN_10ab5b51c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010ab5b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10ab5b52c; end: 10ab5b583;  */

long FUN_10ab5b52c(long param_1)

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



/* Entry: 10ab5b584; end: 10ab5b717;  */

void FUN_10ab5b584(undefined8 *param_1,int *param_2)

{
  long *plVar1;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined4 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_90);
  plVar1 = (long *)*param_1;
  aiStack_70[0] = 3;
  puStack_68 = (undefined8 *)(double)*param_2;
  piStack_40 = aiStack_70;
  uStack_38 = 1;
  (**(code **)(*plVar1 + 0x58))(plVar1);
  ppuStack_60 = &puStack_88;
  ppuStack_48 = &piStack_40;
  plStack_58 = plVar1;
  puStack_50 = (undefined1 *)&puStack_90;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
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



/* Entry: 10ab5b718; end: 10ab5b753;  */

void FUN_10ab5b718(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined4 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&ppuStack_60,puVar1 + 1,*puVar1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*puVar1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar1 + 0x30))(&puStack_90);
  plVar2 = (long *)*puVar1;
  aiStack_70[0] = 3;
  puStack_68 = (undefined8 *)(double)*(int *)(param_1 + 0x20);
  piStack_40 = aiStack_70;
  uStack_38 = 1;
  (**(code **)(*plVar2 + 0x58))(plVar2);
  ppuStack_60 = &puStack_88;
  ppuStack_48 = &piStack_40;
  plStack_58 = plVar2;
  puStack_50 = (undefined1 *)&puStack_90;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
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



/* Entry: 10ab5b754; end: 10ab5b7ab;  */

long FUN_10ab5b754(long param_1)

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



/* Entry: 10ab5b7ac; end: 10ab5bb9b;  */

void FUN_10ab5b7ac(long *param_1,long *param_2,undefined *param_3,long *param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined ***pppuVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lStack_1b8;
  long *plStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined8 uStack_158;
  undefined **ppuStack_140;
  undefined8 uStack_138;
  ulong uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long *plStack_108;
  long *plStack_100;
  long lStack_f8;
  long lStack_f0;
  long *plStack_e8;
  long lStack_e0;
  long lStack_d8;
  int iStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined1 auStack_b8 [56];
  long lStack_80;
  undefined4 uStack_78;
  undefined1 auStack_70 [40];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1b8 = 0;
  plStack_1b0 = (long *)0x0;
  plVar4 = (long *)param_2[4];
  plVar8 = param_2;
  if (((plVar4 == (long *)0x0) ||
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_1b0 = plVar4, plVar4 == (long *)0x0)) ||
     (lStack_1b8 = param_2[3], lStack_1b8 == 0)) goto LAB_10ab5ba04;
  lVar9 = param_2[2];
  lStack_f8 = param_1[1];
  plStack_100 = (long *)*param_1;
  lStack_f0 = param_1[2];
  *param_1 = 0;
  param_1[1] = 0;
  lStack_e0 = param_1[4];
  plStack_e8 = (long *)param_1[3];
  lStack_d8 = param_1[5];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  iStack_d0 = (int)param_1[6];
  lStack_c8 = param_1[7];
  lStack_c0 = param_1[8];
  param_1[7] = 0;
  (**(code **)(param_1[9] + 0x10))(auStack_b8,param_1 + 9);
  lStack_80 = param_1[0x10];
  uStack_78 = (undefined4)param_1[0x11];
  plVar8 = param_1 + 0x12;
  FUN_10a0424c4(auStack_70);
  lVar10 = *(long *)(lVar9 + 0x18);
  plVar4 = *(long **)(lVar10 + 0x80);
  if ((plVar4 != (long *)0x0) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), plStack_108 = plVar4, plVar4 != (long *)0x0)) {
    lVar10 = *(long *)(lVar10 + 0x78);
    lStack_110 = lVar10;
    if (lVar10 != 0) {
      if (iStack_d0 - 200U < 100) {
        ppuStack_140 = &PTR_FUN_110c77d88;
        uStack_138 = 0;
        uStack_128 = 0;
        uStack_130 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        lStack_190 = (long)(int)lStack_80;
        lStack_198 = lStack_c8;
        pppuVar5 = &ppuStack_140;
        func_0x000107c30348(pppuVar5,&lStack_198);
        if (((ulong)pppuVar5 & 1) == 0) {
          if ((bRam000000011330a9e8 & 1) != 0) {
            param_3 = &UNK_10f69231b;
            param_4 = (long *)&UNK_10f6933e6;
            func_0x00010ae06f08(0,1,&UNK_10f69231b,&UNK_10f6933e6,0x70,&UNK_10f693506);
          }
          lStack_198 = CONCAT44(lStack_198._4_4_,1);
          plVar8 = &lStack_198;
          FUN_10ab403b4(*(undefined8 *)(lVar9 + 0x30));
        }
        else {
          if ((uStack_130 & 1) != 0) {
            FUN_10ae08fbc(&lStack_198,0,uStack_128);
            plVar8 = *(long **)(lVar10 + 0x108);
            param_3 = *(undefined **)(lVar10 + 0x110);
            param_4 = &lStack_198;
            FUN_10ab5bb9c(&lStack_1a8);
            *(undefined8 *)(lStack_1a8 + 0x38) = uStack_158;
            *(undefined1 *)(lStack_1a8 + 0x40) = 1;
            plVar4 = *(long **)(lVar9 + 0x20);
            if ((plVar4 == (long *)0x0) || ((char)plVar4[8] != '\x02')) {
              if ((plVar4 != (long *)0x0) && ((char)plVar4[8] == '\x01')) {
                (*(code *)*plVar4)(&lStack_1a8);
                plVar8 = plVar4;
              }
            }
            else {
              plVar8 = &lStack_1a8;
              FUN_10ab5bc70(plVar4);
            }
            if (plStack_1a0 != (long *)0x0) {
              plVar4 = plStack_1a0 + 1;
              do {
                lVar9 = *plVar4;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                if (bVar3) {
                  *plVar4 = lVar9 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar9 == 0) {
                (**(code **)(*plStack_1a0 + 0x10))(plStack_1a0);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1a0);
              }
            }
            FUN_10ae09064(&lStack_198);
            plVar4 = plStack_108;
            FUN_10ae09bc8(&ppuStack_140);
            if (plVar4 == (long *)0x0) goto LAB_10ab5b9d4;
            goto LAB_10ab5b9a4;
          }
          lStack_198 = CONCAT44(lStack_198._4_4_,1);
          plVar8 = &lStack_198;
          FUN_10ab403b4(*(undefined8 *)(lVar9 + 0x30));
        }
        FUN_10ae09bc8(&ppuStack_140);
      }
      else {
        if ((bRam000000011330a9e8 & 1) != 0) {
          param_3 = &UNK_10f69231b;
          param_4 = (long *)&UNK_10f6933e6;
          func_0x00010ae06f08(0,1,&UNK_10f69231b,&UNK_10f6933e6,0x68,&UNK_10f6934bc,param_7,param_8,
                              iStack_d0);
        }
        lStack_198 = CONCAT44(lStack_198._4_4_,1);
        plVar8 = &lStack_198;
        FUN_10ab403b4(*(undefined8 *)(lVar9 + 0x30));
      }
    }
LAB_10ab5b9a4:
    plVar6 = plVar4 + 1;
    do {
      lVar9 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
LAB_10ab5b9d4:
  func_0x000104c4f944(auStack_70);
  plVar4 = &lStack_c8;
  FUN_10a042634();
  if (lStack_d8 < 0) {
    plVar4 = plStack_e8;
    __ZdlPv();
  }
  if (lStack_f0 < 0) {
    plVar4 = plStack_100;
    __ZdlPv();
  }
LAB_10ab5ba04:
  plVar6 = plStack_1b0;
  if (plStack_1b0 != (long *)0x0) {
    plVar1 = plStack_1b0 + 1;
    do {
      lVar9 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_1b0 + 0x10))(plStack_1b0);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar4 = plVar6;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_10ab5c108(&lStack_1a8);
    FUN_10ae09064(&lStack_198);
    FUN_10ae09bc8(&ppuStack_140);
    FUN_10ab54eb8(&lStack_110);
    FUN_10a05bd10(&plStack_100);
    func_0x00010a05a86c(&lStack_1b8);
    __Unwind_Resume();
    puVar7 = (undefined8 *)0x60;
    __Znwm();
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = &PTR_FUN_110c4b098;
    puVar7[3] = &PTR_FUN_110c494c8;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[6] = plVar8;
    puVar7[7] = param_3;
    if (param_3 != (undefined *)0x0) {
      plVar8 = (long *)(param_3 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = *plVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puVar7[8] = param_4[9];
    *(int *)(puVar7 + 9) = (int)param_4[10];
    *(undefined1 *)(puVar7 + 10) = 0;
    *(undefined1 *)(puVar7 + 0xb) = 0;
    *plVar4 = (long)(puVar7 + 3);
    plVar4[1] = (long)puVar7;
    return;
  }
  return;
}



/* Entry: 10ab5bb9c; end: 10ab5bc2f;  */

void FUN_10ab5bb9c(undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)0x60;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110c4b098;
  puVar4[3] = &PTR_FUN_110c494c8;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[6] = param_2;
  puVar4[7] = param_3;
  if (param_3 != 0) {
    plVar1 = (long *)(param_3 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar4[8] = *(undefined8 *)(param_4 + 0x48);
  *(undefined4 *)(puVar4 + 9) = *(undefined4 *)(param_4 + 0x50);
  *(undefined1 *)(puVar4 + 10) = 0;
  *(undefined1 *)(puVar4 + 0xb) = 0;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  return;
}



/* Entry: 10ab5bc30; end: 10ab5bc3f;  */

void FUN_10ab5bc30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c4b098;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}


