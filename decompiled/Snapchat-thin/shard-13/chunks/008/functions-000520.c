/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10acc1e1c; end: 10acc1e8f;  */

void FUN_10acc1e1c(undefined8 *param_1,undefined8 param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    (*(code *)*param_1)(param_2,param_1);
    (**(code **)param_1[1])();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10acc1e90; end: 10acc1ed7;  */

void FUN_10acc1e90(void)

{
  return;
}



/* Entry: 10acc1ed8; end: 10acc2047;  */

void FUN_10acc1ed8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  undefined1 *puVar3;
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
  long *in_stack_ffffffffffffffa0;
  undefined1 *in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  ulong in_stack_ffffffffffffffb8;
  
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
  FUN_10acbdf4c(param_2,param_3);
  FUN_10a48f3fc(param_5);
  FUN_10a3f3f30(&stack0xffffffffffffffa8,param_2,param_4);
  puVar3 = in_stack_ffffffffffffffa8;
  if (-1 < (long)in_stack_ffffffffffffffb8) {
    in_stack_ffffffffffffffb0 = in_stack_ffffffffffffffb8 >> 0x38;
    puVar3 = &stack0xffffffffffffffa8;
  }
  FUN_10acc1334(&plStack_68,plVar7,puVar3,in_stack_ffffffffffffffb0);
  if ((long)in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  if (plStack_68 == (long *)0x0) {
    *param_1 = 1;
  }
  else {
    func_0x0001098849a4(param_1,param_2,plStack_68[2]);
  }
  if (in_stack_ffffffffffffffa0 != (long *)0x0) {
    plVar7 = in_stack_ffffffffffffffa0 + 1;
    do {
      lVar10 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*in_stack_ffffffffffffffa0 + 0x10))(in_stack_ffffffffffffffa0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa0);
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



/* Entry: 10acc2048; end: 10acc21b3;  */

undefined4 * FUN_10acc2048(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 ***pppuVar1;
  code *pcVar2;
  int iVar3;
  undefined8 ***pppuVar4;
  long lVar5;
  undefined4 *unaff_x19;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  if (param_3 < 0x7ffffffffffffff8) {
    if (param_3 < 0x17) {
      uStack_48 = CONCAT17((char)param_3,(undefined7)uStack_48);
      pppuVar4 = &ppuStack_58;
      if (param_3 != 0) goto LAB_10acc20b8;
    }
    else {
      pppuVar1 = (undefined8 ***)0x19;
      if ((param_3 | 7) != 0x17) {
        pppuVar1 = (undefined8 ***)((param_3 | 7) + 1);
      }
      pppuVar4 = pppuVar1;
      __Znwm();
      uStack_48 = (ulong)pppuVar1 | 0x8000000000000000;
      ppuStack_58 = pppuVar4;
      uStack_50 = param_3;
LAB_10acc20b8:
      _memmove(pppuVar4,param_2,param_3);
    }
    *(undefined1 *)((long)pppuVar4 + param_3) = 0;
    param_1 = param_1 + 0x38;
    FUN_10a54a2c0(param_1,&ppuStack_58);
    if (param_1 != 0) {
      if (*(short *)(param_1 + 0x32) != 2) {
        if (*(short *)(param_1 + 0x32) != 4) {
          FUN_10a00946c(&UNK_10f681ac3);
LAB_10acc2190:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10acc2194);
          (*pcVar2)();
        }
        lVar5 = *(long *)(param_1 + 0x40);
        if (lVar5 == *(long *)(param_1 + 0x48)) {
          FUN_10a108c2c(&UNK_10f63b259);
          goto LAB_10acc2190;
        }
        __ZNSt3__14stoiERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi(lVar5,0,10);
        *(int *)(param_1 + 0x38) = (int)lVar5;
      }
      unaff_x19 = (undefined4 *)(param_1 + 0x38);
      goto LAB_10acc212c;
    }
    unaff_x19 = (undefined4 *)0x1137ec798;
    iVar3 = 0x137ec7e8;
    if ((bRam00000001137ec7e8 & 1) != 0) goto LAB_10acc212c;
  }
  else {
    func_0x000109ffde50();
    iVar3 = (int)param_1;
  }
  ___cxa_guard_acquire();
  if (iVar3 != 0) {
    *unaff_x19 = 0;
    ___cxa_guard_release(unaff_x19 + 0x14);
  }
LAB_10acc212c:
  if ((long)uStack_48 < 0) {
    __ZdlPv(ppuStack_58);
  }
  return unaff_x19;
}



/* Entry: 10acc21b4; end: 10acc22db;  */

void FUN_10acc21b4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
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
  undefined1 *in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  ulong in_stack_ffffffffffffffb8;
  
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
  FUN_10acbdf4c(param_2,param_3);
  FUN_10a48f3fc(param_5);
  FUN_10a3f3f30(&stack0xffffffffffffffa8,param_2,param_4);
  puVar1 = in_stack_ffffffffffffffa8;
  if (-1 < (long)in_stack_ffffffffffffffb8) {
    in_stack_ffffffffffffffb0 = in_stack_ffffffffffffffb8 >> 0x38;
    puVar1 = &stack0xffffffffffffffa8;
  }
  FUN_10acc2048(plVar5,puVar1,in_stack_ffffffffffffffb0);
  if ((long)in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  lVar6 = *plVar5;
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)(int)lVar6;
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



/* Entry: 10acc22dc; end: 10acc2443;  */

undefined8 * FUN_10acc22dc(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined8 ***pppuVar1;
  code *pcVar2;
  int iVar3;
  undefined8 ***pppuVar4;
  undefined8 *unaff_x19;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  if (param_4 < 0x7ffffffffffffff8) {
    if (param_4 < 0x17) {
      uStack_48 = CONCAT17((char)param_4,(undefined7)uStack_48);
      pppuVar4 = &ppuStack_58;
      if (param_4 != 0) goto LAB_10acc234c;
    }
    else {
      pppuVar1 = (undefined8 ***)0x19;
      if ((param_4 | 7) != 0x17) {
        pppuVar1 = (undefined8 ***)((param_4 | 7) + 1);
      }
      pppuVar4 = pppuVar1;
      __Znwm();
      uStack_48 = (ulong)pppuVar1 | 0x8000000000000000;
      ppuStack_58 = pppuVar4;
      uStack_50 = param_4;
LAB_10acc234c:
      _memmove(pppuVar4,param_3,param_4);
    }
    *(undefined1 *)((long)pppuVar4 + param_4) = 0;
    param_2 = param_2 + 0x38;
    FUN_10a54a2c0(param_2,&ppuStack_58);
    if (param_2 != 0) {
      if (*(short *)(param_2 + 0x32) != 5) {
        if (*(short *)(param_2 + 0x32) != 4) {
          FUN_10a00946c(&UNK_10f681ac3);
LAB_10acc2420:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10acc2424);
          (*pcVar2)();
        }
        if (*(long *)(param_2 + 0x40) == *(long *)(param_2 + 0x48)) {
          FUN_10a108c2c(&UNK_10f63b259);
          goto LAB_10acc2420;
        }
        __ZNSt3__14stodERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPm
                  (*(long *)(param_2 + 0x40),0);
        *(undefined8 *)(param_2 + 0x38) = param_1;
      }
      unaff_x19 = (undefined8 *)(param_2 + 0x38);
      goto LAB_10acc23bc;
    }
    unaff_x19 = (undefined8 *)0x1137ec7f0;
    iVar3 = 0x137ec7f8;
    if ((bRam00000001137ec7f8 & 1) != 0) goto LAB_10acc23bc;
  }
  else {
    func_0x000109ffde50();
    iVar3 = (int)param_2;
  }
  ___cxa_guard_acquire();
  if (iVar3 != 0) {
    *unaff_x19 = 0;
    ___cxa_guard_release(unaff_x19 + 1);
  }
LAB_10acc23bc:
  if ((long)uStack_48 < 0) {
    __ZdlPv(ppuStack_58);
  }
  return unaff_x19;
}



/* Entry: 10acc2444; end: 10acc2567;  */

void FUN_10acc2444(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined1 *in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  ulong in_stack_ffffffffffffffb8;
  
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
  FUN_10acbdf4c(param_2,param_3);
  FUN_10a48f3fc(param_5);
  FUN_10a3f3f30(&stack0xffffffffffffffa8,param_2,param_4);
  puVar1 = in_stack_ffffffffffffffa8;
  if (-1 < (long)in_stack_ffffffffffffffb8) {
    in_stack_ffffffffffffffb0 = in_stack_ffffffffffffffb8 >> 0x38;
    puVar1 = &stack0xffffffffffffffa8;
  }
  FUN_10acc22dc(plVar5,puVar1,in_stack_ffffffffffffffb0);
  if ((long)in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  lVar14 = *plVar5;
  *param_1 = 3;
  *(long *)(param_1 + 2) = lVar14;
  plVar5 = plVar4 + 0x4b;
  lVar14 = plVar4[0x59];
  uVar6 = lVar14 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar5[lVar14 + 2];
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
  lVar14 = *plVar5;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar14;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar14 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar14)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar5;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar14,lVar8);
          *plVar5 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar14;
          lStack_80 = lVar14;
          lStack_78 = lVar14;
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
    lVar14 = lVar14 + uVar6 * 0x10;
    while (lVar10 != lVar14) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar14;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10acc2568; end: 10acc268b;  */

void FUN_10acc2568(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
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
  undefined1 *in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  ulong in_stack_ffffffffffffffb8;
  
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
  FUN_10acbdf4c(param_2,param_3);
  FUN_10a48f3fc(param_5);
  FUN_10a3f3f30(&stack0xffffffffffffffa8,param_2,param_4);
  puVar1 = in_stack_ffffffffffffffa8;
  if (-1 < (long)in_stack_ffffffffffffffb8) {
    in_stack_ffffffffffffffb0 = in_stack_ffffffffffffffb8 >> 0x38;
    puVar1 = &stack0xffffffffffffffa8;
  }
  FUN_10a8b7988(plVar5,puVar1,in_stack_ffffffffffffffb0);
  if ((long)in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  lVar6 = *plVar5;
  *param_1 = 2;
  *(char *)(param_1 + 2) = (char)lVar6;
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



/* Entry: 10acc268c; end: 10acc26ef;  */

ulong FUN_10acc268c(ulong param_1,undefined8 *param_2)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10acc26f0);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10acc26f0,2,*(undefined8 *)(param_1 + 0x40));
  }
  return param_1;
}



/* Entry: 10acc26f0; end: 10acc2837;  */

void FUN_10acc26f0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
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
  undefined1 *in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  ulong in_stack_ffffffffffffffb8;
  
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
  FUN_10acbdf4c(param_2,param_3);
  FUN_10a48f3fc(param_5);
  FUN_10a3f3f30(&stack0xffffffffffffffa8,param_2,param_4);
  puVar1 = in_stack_ffffffffffffffa8;
  if (-1 < (long)in_stack_ffffffffffffffb8) {
    in_stack_ffffffffffffffb0 = in_stack_ffffffffffffffb8 >> 0x38;
    puVar1 = &stack0xffffffffffffffa8;
  }
  FUN_10a53e714(plVar6,puVar1,in_stack_ffffffffffffffb0);
  if ((long)in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  uVar8 = plVar6[1];
  plVar2 = (long *)*plVar6;
  if (-1 < (char)*(byte *)((long)plVar6 + 0x17)) {
    uVar8 = (ulong)*(byte *)((long)plVar6 + 0x17);
    plVar2 = plVar6;
  }
  (**(code **)(*param_2 + 0x128))(param_1 + 2,param_2,plVar2,uVar8);
  *param_1 = 6;
  plVar6 = plVar5 + 0x4b;
  lVar7 = plVar5[0x59];
  uVar8 = lVar7 - 1;
  plVar5[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar6[lVar7 + 2];
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
  lVar7 = *plVar6;
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
        plStack_68 = plVar6;
        if (uVar9 >> 0x3c == 0) {
          lVar4 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar4 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar6 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar9 * 0x10;
          lStack_88 = lVar7;
          lStack_80 = lVar7;
          lStack_78 = lVar7;
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



/* Entry: 10acc2838; end: 10acc299f;  */

undefined4 * FUN_10acc2838(undefined4 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined8 ***pppuVar1;
  code *pcVar2;
  int iVar3;
  undefined8 ***pppuVar4;
  undefined4 *unaff_x19;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  if (param_4 < 0x7ffffffffffffff8) {
    if (param_4 < 0x17) {
      uStack_48 = CONCAT17((char)param_4,(undefined7)uStack_48);
      pppuVar4 = &ppuStack_58;
      if (param_4 != 0) goto LAB_10acc28a8;
    }
    else {
      pppuVar1 = (undefined8 ***)0x19;
      if ((param_4 | 7) != 0x17) {
        pppuVar1 = (undefined8 ***)((param_4 | 7) + 1);
      }
      pppuVar4 = pppuVar1;
      __Znwm();
      uStack_48 = (ulong)pppuVar1 | 0x8000000000000000;
      ppuStack_58 = pppuVar4;
      uStack_50 = param_4;
LAB_10acc28a8:
      _memmove(pppuVar4,param_3,param_4);
    }
    *(undefined1 *)((long)pppuVar4 + param_4) = 0;
    param_2 = param_2 + 0x38;
    FUN_10a54a2c0(param_2,&ppuStack_58);
    if (param_2 != 0) {
      if (*(short *)(param_2 + 0x32) != 3) {
        if (*(short *)(param_2 + 0x32) != 4) {
          FUN_10a00946c(&UNK_10f681ac3);
LAB_10acc297c:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10acc2980);
          (*pcVar2)();
        }
        if (*(long *)(param_2 + 0x40) == *(long *)(param_2 + 0x48)) {
          FUN_10a108c2c(&UNK_10f63b259);
          goto LAB_10acc297c;
        }
        __ZNSt3__14stofERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPm
                  (*(long *)(param_2 + 0x40),0);
        *(undefined4 *)(param_2 + 0x38) = param_1;
      }
      unaff_x19 = (undefined4 *)(param_2 + 0x38);
      goto LAB_10acc2918;
    }
    unaff_x19 = (undefined4 *)0x1137ec79c;
    iVar3 = 0x137ec800;
    if ((bRam00000001137ec800 & 1) != 0) goto LAB_10acc2918;
  }
  else {
    func_0x000109ffde50();
    iVar3 = (int)param_2;
  }
  ___cxa_guard_acquire();
  if (iVar3 != 0) {
    *unaff_x19 = 0;
    ___cxa_guard_release(unaff_x19 + 0x19);
  }
LAB_10acc2918:
  if ((long)uStack_48 < 0) {
    __ZdlPv(ppuStack_58);
  }
  return unaff_x19;
}



/* Entry: 10acc29a0; end: 10acc2ac7;  */

void FUN_10acc29a0(undefined4 *param_1,float *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined1 *puVar2;
  code *pcVar3;
  long lVar4;
  float *pfVar5;
  float *pfVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  float fVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  float *pfStack_68;
  undefined1 *in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  ulong in_stack_ffffffffffffffb8;
  
  pfVar5 = param_2;
  (**(code **)(*(long *)param_2 + 0x58))();
  if (*(ulong *)(pfVar5 + 0xb2) < 8) {
    *(long *)(pfVar5 + *(ulong *)(pfVar5 + 0xb2) * 2 + 0x9c) = *(long *)(pfVar5 + 0xb4);
    *(long *)(pfVar5 + 0xb2) = *(long *)(pfVar5 + 0xb2) + 1;
  }
  else {
    func_0x00010988bfcc(pfVar5 + 0x96);
  }
  pfVar6 = param_2;
  FUN_10acbdf4c(param_2,param_3);
  FUN_10a48f3fc(param_5);
  FUN_10a3f3f30(&stack0xffffffffffffffa8,param_2,param_4);
  puVar2 = in_stack_ffffffffffffffa8;
  if (-1 < (long)in_stack_ffffffffffffffb8) {
    in_stack_ffffffffffffffb0 = in_stack_ffffffffffffffb8 >> 0x38;
    puVar2 = &stack0xffffffffffffffa8;
  }
  FUN_10acc2838(pfVar6,puVar2,in_stack_ffffffffffffffb0);
  if ((long)in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  fVar15 = *pfVar6;
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)fVar15;
  pfVar6 = pfVar5 + 0x96;
  uVar7 = *(long *)(pfVar5 + 0xb2) - 1;
  *(ulong *)(pfVar5 + 0xb2) = uVar7;
  if (uVar7 < 8) {
    uVar7 = *(ulong *)(pfVar6 + uVar7 * 2 + 6);
    if (*(ulong *)(pfVar5 + 0xb4) == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(*(long *)(pfVar5 + 0xae) + -8);
    *(ulong **)(pfVar5 + 0xae) = (ulong *)(*(long *)(pfVar5 + 0xae) + -8);
    if (*(ulong *)(pfVar5 + 0xb4) == uVar7) {
      return;
    }
  }
  lVar1 = *(long *)pfVar6;
  lVar11 = *(long *)(pfVar5 + 0x98);
  lVar9 = lVar11 - lVar1;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = *(long *)(pfVar5 + 0x9a);
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar1 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar1)) {
          uVar8 = 0xfffffffffffffff;
        }
        pfStack_68 = pfVar6;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar1,lVar9);
          *(long *)pfVar6 = lVar10;
          *(ulong *)(pfVar5 + 0x98) = lVar11 + uVar14 * 0x10;
          *(ulong *)(pfVar5 + 0x9a) = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar1;
          lStack_80 = lVar1;
          lStack_78 = lVar1;
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
    *(ulong *)(pfVar5 + 0x98) = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar1 = lVar1 + uVar7 * 0x10;
    while (lVar11 != lVar1) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    *(long *)(pfVar5 + 0x98) = lVar1;
  }
code_r0x00010988c138:
  *(ulong *)(pfVar5 + 0xb4) = uVar7;
  return;
}



/* Entry: 10acc2ac8; end: 10acc2c2f;  */

undefined8 * FUN_10acc2ac8(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 ***pppuVar1;
  code *pcVar2;
  int iVar3;
  undefined8 ***pppuVar4;
  long lVar5;
  undefined8 *unaff_x19;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  if (param_3 < 0x7ffffffffffffff8) {
    if (param_3 < 0x17) {
      uStack_48 = CONCAT17((char)param_3,(undefined7)uStack_48);
      pppuVar4 = &ppuStack_58;
      if (param_3 != 0) goto LAB_10acc2b38;
    }
    else {
      pppuVar1 = (undefined8 ***)0x19;
      if ((param_3 | 7) != 0x17) {
        pppuVar1 = (undefined8 ***)((param_3 | 7) + 1);
      }
      pppuVar4 = pppuVar1;
      __Znwm();
      uStack_48 = (ulong)pppuVar1 | 0x8000000000000000;
      ppuStack_58 = pppuVar4;
      uStack_50 = param_3;
LAB_10acc2b38:
      _memmove(pppuVar4,param_2,param_3);
    }
    *(undefined1 *)((long)pppuVar4 + param_3) = 0;
    param_1 = param_1 + 0x38;
    FUN_10a54a2c0(param_1,&ppuStack_58);
    if (param_1 != 0) {
      if (*(short *)(param_1 + 0x32) == 7) {
        lVar5 = *(long *)(param_1 + 0x58);
        if ((lVar5 != 0) &&
           (___dynamic_cast(lVar5,&PTR_DAT_110c6b678,&PTR_DAT_110c6ba08,0), lVar5 != 0)) {
          unaff_x19 = (undefined8 *)(lVar5 + 8);
          goto LAB_10acc2ba8;
        }
      }
      else if (*(short *)(param_1 + 0x32) == 4) {
        FUN_10a14efe0();
        goto LAB_10acc2bf0;
      }
      FUN_10a00946c(&UNK_10f681ac3);
LAB_10acc2bf0:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10acc2bf4);
      (*pcVar2)();
    }
    unaff_x19 = (undefined8 *)0x1137ec808;
    iVar3 = 0x137ec810;
    if ((bRam00000001137ec810 & 1) != 0) goto LAB_10acc2ba8;
  }
  else {
    func_0x000109ffde50();
    iVar3 = (int)param_1;
  }
  ___cxa_guard_acquire();
  if (iVar3 != 0) {
    *unaff_x19 = 0;
    ___cxa_guard_release(unaff_x19 + 1);
  }
LAB_10acc2ba8:
  if ((long)uStack_48 < 0) {
    __ZdlPv(ppuStack_58);
  }
  return unaff_x19;
}



/* Entry: 10acc2c30; end: 10acc2c57;  */

void FUN_10acc2c30(void)

{
  return;
}



/* Entry: 10acc2c58; end: 10acc2c93;  */

void FUN_10acc2c58(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_2 + 8);
  *puVar1 = &PTR_FUN_110c6b9e0;
  puVar1[1] = uVar2;
  *param_1 = puVar1;
  return;
}



/* Entry: 10acc2c94; end: 10acc2d43;  */

void FUN_10acc2c94(undefined8 param_1)

{
  undefined8 ***pppuVar1;
  undefined8 **appuStack_48 [2];
  char cStack_31;
  
  FUN_10a700a54(appuStack_48,&UNK_10f6a1cb6);
  pppuVar1 = (undefined8 ***)appuStack_48[0];
  if (-1 < cStack_31) {
    pppuVar1 = appuStack_48;
  }
  FUN_10a700a54(param_1,pppuVar1);
  if (cStack_31 < '\0') {
    __ZdlPv(appuStack_48[0]);
  }
  return;
}



/* Entry: 10acc2d44; end: 10acc2e67;  */

void FUN_10acc2d44(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
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
  undefined1 *in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  ulong in_stack_ffffffffffffffb8;
  
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
  FUN_10acbdf4c(param_2,param_3);
  FUN_10a48f3fc(param_5);
  FUN_10a3f3f30(&stack0xffffffffffffffa8,param_2,param_4);
  puVar1 = in_stack_ffffffffffffffa8;
  if (-1 < (long)in_stack_ffffffffffffffb8) {
    in_stack_ffffffffffffffb0 = in_stack_ffffffffffffffb8 >> 0x38;
    puVar1 = &stack0xffffffffffffffa8;
  }
  FUN_10acc2ac8(plVar5,puVar1,in_stack_ffffffffffffffb0);
  if ((long)in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  FUN_10a07aef4(param_1,param_2,plVar5);
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



/* Entry: 10acc2e68; end: 10acc2fdb;  */

undefined4 * FUN_10acc2e68(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 ***pppuVar1;
  code *pcVar2;
  undefined8 ***pppuVar3;
  long lVar4;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  if (param_3 < 0x7ffffffffffffff8) {
    if (param_3 < 0x17) {
      uStack_48 = CONCAT17((char)param_3,(undefined7)uStack_48);
      pppuVar3 = &ppuStack_58;
      if (param_3 != 0) goto LAB_10acc2ed8;
    }
    else {
      pppuVar1 = (undefined8 ***)0x19;
      if ((param_3 | 7) != 0x17) {
        pppuVar1 = (undefined8 ***)((param_3 | 7) + 1);
      }
      pppuVar3 = pppuVar1;
      __Znwm();
      uStack_48 = (ulong)pppuVar1 | 0x8000000000000000;
      ppuStack_58 = pppuVar3;
      uStack_50 = param_3;
LAB_10acc2ed8:
      _memmove(pppuVar3,param_2,param_3);
    }
    *(undefined1 *)((long)pppuVar3 + param_3) = 0;
    param_1 = param_1 + 0x38;
    FUN_10a54a2c0(param_1,&ppuStack_58);
    if (param_1 != 0) {
      if (*(short *)(param_1 + 0x32) == 8) {
        lVar4 = *(long *)(param_1 + 0x58);
        if ((lVar4 != 0) &&
           (___dynamic_cast(lVar4,&PTR_DAT_110c6b678,&PTR_DAT_110c6ba58,0), lVar4 != 0)) {
          unaff_x19 = (undefined4 *)(lVar4 + 8);
          goto LAB_10acc2f48;
        }
      }
      else if (*(short *)(param_1 + 0x32) == 4) {
        FUN_10a14efe0();
        goto LAB_10acc2f90;
      }
      FUN_10a00946c(&UNK_10f681ac3);
LAB_10acc2f90:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10acc2f94);
      (*pcVar2)();
    }
    unaff_x20 = 0x1137ec818;
    unaff_x19 = (undefined4 *)0x1137ec890;
    if ((bRam00000001137ec818 & 1) != 0) goto LAB_10acc2f48;
  }
  else {
    func_0x000109ffde50();
  }
  lVar4 = unaff_x20;
  ___cxa_guard_acquire();
  if ((int)lVar4 != 0) {
    unaff_x19 = (undefined4 *)(unaff_x20 + 0x78);
    *unaff_x19 = 0;
    *(undefined4 *)(unaff_x20 + 0x7c) = 0;
    *(undefined4 *)(unaff_x20 + 0x80) = 0;
    ___cxa_guard_release(unaff_x20);
  }
LAB_10acc2f48:
  if ((long)uStack_48 < 0) {
    __ZdlPv(ppuStack_58);
  }
  return unaff_x19;
}



/* Entry: 10acc2fdc; end: 10acc3003;  */

void FUN_10acc2fdc(void)

{
  return;
}



/* Entry: 10acc3004; end: 10acc3047;  */

void FUN_10acc3004(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  uVar2 = *(undefined8 *)(param_2 + 8);
  *puVar1 = &PTR_FUN_110c6ba30;
  puVar1[1] = uVar2;
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *param_1 = puVar1;
  return;
}



/* Entry: 10acc3048; end: 10acc3103;  */

void FUN_10acc3048(undefined8 param_1)

{
  undefined8 ***pppuVar1;
  undefined8 **appuStack_48 [2];
  char cStack_31;
  
  FUN_10a700a54(appuStack_48,&UNK_10f6a1cc5);
  pppuVar1 = (undefined8 ***)appuStack_48[0];
  if (-1 < cStack_31) {
    pppuVar1 = appuStack_48;
  }
  FUN_10a700a54(param_1,pppuVar1);
  if (cStack_31 < '\0') {
    __ZdlPv(appuStack_48[0]);
  }
  return;
}



/* Entry: 10acc3104; end: 10acc3227;  */

void FUN_10acc3104(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
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
  undefined1 *in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  ulong in_stack_ffffffffffffffb8;
  
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
  FUN_10acbdf4c(param_2,param_3);
  FUN_10a48f3fc(param_5);
  FUN_10a3f3f30(&stack0xffffffffffffffa8,param_2,param_4);
  puVar1 = in_stack_ffffffffffffffa8;
  if (-1 < (long)in_stack_ffffffffffffffb8) {
    in_stack_ffffffffffffffb0 = in_stack_ffffffffffffffb8 >> 0x38;
    puVar1 = &stack0xffffffffffffffa8;
  }
  FUN_10acc2e68(plVar5,puVar1,in_stack_ffffffffffffffb0);
  if ((long)in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  FUN_10a0881b8(param_1,param_2,plVar5);
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



/* Entry: 10acc3228; end: 10acc339b;  */

undefined8 * FUN_10acc3228(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 ***pppuVar1;
  code *pcVar2;
  undefined8 ***pppuVar3;
  long lVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  if (param_3 < 0x7ffffffffffffff8) {
    if (param_3 < 0x17) {
      uStack_48 = CONCAT17((char)param_3,(undefined7)uStack_48);
      pppuVar3 = &ppuStack_58;
      if (param_3 != 0) goto LAB_10acc3298;
    }
    else {
      pppuVar1 = (undefined8 ***)0x19;
      if ((param_3 | 7) != 0x17) {
        pppuVar1 = (undefined8 ***)((param_3 | 7) + 1);
      }
      pppuVar3 = pppuVar1;
      __Znwm();
      uStack_48 = (ulong)pppuVar1 | 0x8000000000000000;
      ppuStack_58 = pppuVar3;
      uStack_50 = param_3;
LAB_10acc3298:
      _memmove(pppuVar3,param_2,param_3);
    }
    *(undefined1 *)((long)pppuVar3 + param_3) = 0;
    param_1 = param_1 + 0x38;
    FUN_10a54a2c0(param_1,&ppuStack_58);
    if (param_1 != 0) {
      if (*(short *)(param_1 + 0x32) == 9) {
        lVar4 = *(long *)(param_1 + 0x58);
        if ((lVar4 != 0) &&
           (___dynamic_cast(lVar4,&PTR_DAT_110c6b678,&PTR_DAT_110c6baa8,0), lVar4 != 0)) {
          unaff_x19 = (undefined8 *)(lVar4 + 8);
          goto LAB_10acc3308;
        }
      }
      else if (*(short *)(param_1 + 0x32) == 4) {
        FUN_10a14efe0();
        goto LAB_10acc3350;
      }
      FUN_10a00946c(&UNK_10f681ac3);
LAB_10acc3350:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10acc3354);
      (*pcVar2)();
    }
    unaff_x20 = 0x1137ec820;
    unaff_x19 = (undefined8 *)0x1137ec89c;
    if ((bRam00000001137ec820 & 1) != 0) goto LAB_10acc3308;
  }
  else {
    func_0x000109ffde50();
  }
  lVar4 = unaff_x20;
  ___cxa_guard_acquire();
  if ((int)lVar4 != 0) {
    *(undefined8 *)(unaff_x20 + 0x84) = 0;
    unaff_x19 = (undefined8 *)(unaff_x20 + 0x7c);
    *unaff_x19 = 0;
    ___cxa_guard_release(unaff_x20);
  }
LAB_10acc3308:
  if ((long)uStack_48 < 0) {
    __ZdlPv(ppuStack_58);
  }
  return unaff_x19;
}



/* Entry: 10acc339c; end: 10acc33c3;  */

void FUN_10acc339c(void)

{
  return;
}



/* Entry: 10acc33c4; end: 10acc3403;  */

void FUN_10acc33c4(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *puVar1 = &PTR_FUN_110c6ba80;
  uVar2 = *(undefined8 *)(param_2 + 8);
  puVar1[2] = *(undefined8 *)(param_2 + 0x10);
  puVar1[1] = uVar2;
  *param_1 = puVar1;
  return;
}



/* Entry: 10acc3404; end: 10acc34c7;  */

void FUN_10acc3404(undefined8 param_1)

{
  undefined8 ***pppuVar1;
  undefined8 **appuStack_48 [2];
  char cStack_31;
  
  FUN_10a700a54(appuStack_48,&UNK_10f6a1cd8);
  pppuVar1 = (undefined8 ***)appuStack_48[0];
  if (-1 < cStack_31) {
    pppuVar1 = appuStack_48;
  }
  FUN_10a700a54(param_1,pppuVar1);
  if (cStack_31 < '\0') {
    __ZdlPv(appuStack_48[0]);
  }
  return;
}



/* Entry: 10acc34c8; end: 10acc35eb;  */

void FUN_10acc34c8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
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
  undefined1 *in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  ulong in_stack_ffffffffffffffb8;
  
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
  FUN_10acbdf4c(param_2,param_3);
  FUN_10a48f3fc(param_5);
  FUN_10a3f3f30(&stack0xffffffffffffffa8,param_2,param_4);
  puVar1 = in_stack_ffffffffffffffa8;
  if (-1 < (long)in_stack_ffffffffffffffb8) {
    in_stack_ffffffffffffffb0 = in_stack_ffffffffffffffb8 >> 0x38;
    puVar1 = &stack0xffffffffffffffa8;
  }
  FUN_10acc3228(plVar5,puVar1,in_stack_ffffffffffffffb0);
  if ((long)in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  FUN_10a1fbd9c(param_1,param_2,plVar5);
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



/* Entry: 10acc35ec; end: 10acc3763;  */

undefined8 * FUN_10acc35ec(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 ***pppuVar1;
  code *pcVar2;
  undefined8 ***pppuVar3;
  long lVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  if (param_3 < 0x7ffffffffffffff8) {
    if (param_3 < 0x17) {
      uStack_48 = CONCAT17((char)param_3,(undefined7)uStack_48);
      pppuVar3 = &ppuStack_58;
      if (param_3 != 0) goto LAB_10acc365c;
    }
    else {
      pppuVar1 = (undefined8 ***)0x19;
      if ((param_3 | 7) != 0x17) {
        pppuVar1 = (undefined8 ***)((param_3 | 7) + 1);
      }
      pppuVar3 = pppuVar1;
      __Znwm();
      uStack_48 = (ulong)pppuVar1 | 0x8000000000000000;
      ppuStack_58 = pppuVar3;
      uStack_50 = param_3;
LAB_10acc365c:
      _memmove(pppuVar3,param_2,param_3);
    }
    *(undefined1 *)((long)pppuVar3 + param_3) = 0;
    param_1 = param_1 + 0x38;
    FUN_10a54a2c0(param_1,&ppuStack_58);
    if (param_1 != 0) {
      if (*(short *)(param_1 + 0x32) == 0x16) {
        lVar4 = *(long *)(param_1 + 0x58);
        if ((lVar4 != 0) &&
           (___dynamic_cast(lVar4,&PTR_DAT_110c6b678,&PTR_DAT_110c6baf8,0), lVar4 != 0)) {
          unaff_x19 = (undefined8 *)(lVar4 + 8);
          goto LAB_10acc36cc;
        }
      }
      else if (*(short *)(param_1 + 0x32) == 4) {
        FUN_10a14efe0();
        goto LAB_10acc3714;
      }
      FUN_10a00946c(&UNK_10f681ac3);
LAB_10acc3714:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10acc3718);
      (*pcVar2)();
    }
    unaff_x20 = 0x1137ec828;
    unaff_x19 = (undefined8 *)0x1137ec8b0;
    if ((bRam00000001137ec828 & 1) != 0) goto LAB_10acc36cc;
  }
  else {
    func_0x000109ffde50();
  }
  lVar4 = unaff_x20;
  ___cxa_guard_acquire();
  if ((int)lVar4 != 0) {
    unaff_x19 = (undefined8 *)(unaff_x20 + 0x88);
    *(undefined8 *)(unaff_x20 + 0x90) = 0x3f80000000000000;
    *unaff_x19 = 0x3f800000;
    ___cxa_guard_release(unaff_x20);
  }
LAB_10acc36cc:
  if ((long)uStack_48 < 0) {
    __ZdlPv(ppuStack_58);
  }
  return unaff_x19;
}



/* Entry: 10acc3764; end: 10acc378b;  */

void FUN_10acc3764(void)

{
  return;
}



/* Entry: 10acc378c; end: 10acc37cb;  */

void FUN_10acc378c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *puVar1 = &PTR_FUN_110c6bad0;
  uVar2 = *(undefined8 *)(param_2 + 8);
  puVar1[2] = *(undefined8 *)(param_2 + 0x10);
  puVar1[1] = uVar2;
  *param_1 = puVar1;
  return;
}



/* Entry: 10acc37cc; end: 10acc388f;  */

void FUN_10acc37cc(undefined8 param_1)

{
  undefined8 ***pppuVar1;
  undefined8 **appuStack_48 [2];
  char cStack_31;
  
  FUN_10a700a54(appuStack_48,&UNK_10f6a1cef);
  pppuVar1 = (undefined8 ***)appuStack_48[0];
  if (-1 < cStack_31) {
    pppuVar1 = appuStack_48;
  }
  FUN_10a700a54(param_1,pppuVar1);
  if (cStack_31 < '\0') {
    __ZdlPv(appuStack_48[0]);
  }
  return;
}



/* Entry: 10acc3890; end: 10acc39b3;  */

void FUN_10acc3890(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
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
  undefined1 *in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  ulong in_stack_ffffffffffffffb8;
  
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
  FUN_10acbdf4c(param_2,param_3);
  FUN_10a48f3fc(param_5);
  FUN_10a3f3f30(&stack0xffffffffffffffa8,param_2,param_4);
  puVar1 = in_stack_ffffffffffffffa8;
  if (-1 < (long)in_stack_ffffffffffffffb8) {
    in_stack_ffffffffffffffb0 = in_stack_ffffffffffffffb8 >> 0x38;
    puVar1 = &stack0xffffffffffffffa8;
  }
  FUN_10acc35ec(plVar5,puVar1,in_stack_ffffffffffffffb0);
  if ((long)in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  FUN_10a3682fc(param_1,param_2,plVar5);
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



/* Entry: 10acc39b4; end: 10acc3b37;  */

long FUN_10acc39b4(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 ***pppuVar1;
  code *pcVar2;
  undefined8 ***pppuVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  if (param_3 < 0x7ffffffffffffff8) {
    if (param_3 < 0x17) {
      uStack_48 = CONCAT17((char)param_3,(undefined7)uStack_48);
      pppuVar3 = &ppuStack_58;
      if (param_3 != 0) goto LAB_10acc3a24;
    }
    else {
      pppuVar1 = (undefined8 ***)0x19;
      if ((param_3 | 7) != 0x17) {
        pppuVar1 = (undefined8 ***)((param_3 | 7) + 1);
      }
      pppuVar3 = pppuVar1;
      __Znwm();
      uStack_48 = (ulong)pppuVar1 | 0x8000000000000000;
      ppuStack_58 = pppuVar3;
      uStack_50 = param_3;
LAB_10acc3a24:
      _memmove(pppuVar3,param_2,param_3);
    }
    *(undefined1 *)((long)pppuVar3 + param_3) = 0;
    param_1 = param_1 + 0x38;
    FUN_10a54a2c0(param_1,&ppuStack_58);
    if (param_1 != 0) {
      if (*(short *)(param_1 + 0x32) == 10) {
        lVar4 = *(long *)(param_1 + 0x58);
        if ((lVar4 != 0) &&
           (___dynamic_cast(lVar4,&PTR_DAT_110c6b678,&PTR_DAT_110c6bb48,0), lVar4 != 0)) {
          unaff_x19 = lVar4 + 8;
          goto LAB_10acc3a94;
        }
      }
      else if (*(short *)(param_1 + 0x32) == 4) {
        FUN_10a14efe0();
        goto LAB_10acc3adc;
      }
      FUN_10a00946c(&UNK_10f681ac3);
LAB_10acc3adc:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10acc3ae0);
      (*pcVar2)();
    }
    unaff_x20 = 0x1137ec830;
    unaff_x19 = 0x1137eca80;
    if ((bRam00000001137ec830 & 1) != 0) goto LAB_10acc3a94;
  }
  else {
    func_0x000109ffde50();
  }
  lVar4 = unaff_x20;
  ___cxa_guard_acquire();
  if ((int)lVar4 != 0) {
    *(undefined4 *)(unaff_x20 + 0x270) = 0x3f800000;
    *(undefined8 *)(unaff_x20 + 600) = 0;
    *(undefined8 *)(unaff_x20 + 0x250) = 0x3f800000;
    *(undefined8 *)(unaff_x20 + 0x268) = 0;
    *(undefined8 *)(unaff_x20 + 0x260) = 0x3f800000;
    unaff_x19 = unaff_x20 + 0x250;
    ___cxa_guard_release(unaff_x20);
  }
LAB_10acc3a94:
  if ((long)uStack_48 < 0) {
    __ZdlPv(ppuStack_58);
  }
  return unaff_x19;
}



/* Entry: 10acc3b38; end: 10acc3b5f;  */

void FUN_10acc3b38(void)

{
  return;
}



/* Entry: 10acc3b60; end: 10acc3baf;  */

void FUN_10acc3b60(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  *puVar1 = &PTR_FUN_110c6bb20;
  uVar2 = *(undefined8 *)(param_2 + 8);
  puVar1[2] = *(undefined8 *)(param_2 + 0x10);
  puVar1[1] = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  puVar1[4] = *(undefined8 *)(param_2 + 0x20);
  puVar1[3] = uVar2;
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_2 + 0x28);
  *param_1 = puVar1;
  return;
}



/* Entry: 10acc3bb0; end: 10acc3bbb;  */

/* WARNING: Removing unreachable block (ram,0x00010acc3c7c) */

void FUN_10acc3bb0(undefined8 param_1)

{
  undefined1 auStack_48 [24];
  
  FUN_10a700a54(auStack_48,&UNK_10f6a1d0c);
  FUN_10a700a54(param_1,auStack_48);
  return;
}



/* Entry: 10acc3bbc; end: 10acc3cb3;  */

/* WARNING: Removing unreachable block (ram,0x00010acc3c7c) */

void FUN_10acc3bbc(undefined8 param_1)

{
  undefined1 auStack_48 [24];
  
  FUN_10a700a54(auStack_48,&UNK_10f6a1d0c);
  FUN_10a700a54(param_1,auStack_48);
  return;
}



/* Entry: 10acc3cb4; end: 10acc3dd7;  */

void FUN_10acc3cb4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
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
  undefined1 *in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  ulong in_stack_ffffffffffffffb8;
  
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
  FUN_10acbdf4c(param_2,param_3);
  FUN_10a48f3fc(param_5);
  FUN_10a3f3f30(&stack0xffffffffffffffa8,param_2,param_4);
  puVar1 = in_stack_ffffffffffffffa8;
  if (-1 < (long)in_stack_ffffffffffffffb8) {
    in_stack_ffffffffffffffb0 = in_stack_ffffffffffffffb8 >> 0x38;
    puVar1 = &stack0xffffffffffffffa8;
  }
  FUN_10acc39b4(plVar5,puVar1,in_stack_ffffffffffffffb0);
  if ((long)in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  FUN_10a368520(param_1,param_2,plVar5);
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



/* Entry: 10acc3dd8; end: 10acc3f5b;  */

undefined8 * FUN_10acc3dd8(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 ***pppuVar1;
  code *pcVar2;
  undefined8 ***pppuVar3;
  long lVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  if (param_3 < 0x7ffffffffffffff8) {
    if (param_3 < 0x17) {
      uStack_48 = CONCAT17((char)param_3,(undefined7)uStack_48);
      pppuVar3 = &ppuStack_58;
      if (param_3 != 0) goto LAB_10acc3e48;
    }
    else {
      pppuVar1 = (undefined8 ***)0x19;
      if ((param_3 | 7) != 0x17) {
        pppuVar1 = (undefined8 ***)((param_3 | 7) + 1);
      }
      pppuVar3 = pppuVar1;
      __Znwm();
      uStack_48 = (ulong)pppuVar1 | 0x8000000000000000;
      ppuStack_58 = pppuVar3;
      uStack_50 = param_3;
LAB_10acc3e48:
      _memmove(pppuVar3,param_2,param_3);
    }
    *(undefined1 *)((long)pppuVar3 + param_3) = 0;
    param_1 = param_1 + 0x38;
    FUN_10a54a2c0(param_1,&ppuStack_58);
    if (param_1 != 0) {
      if (*(short *)(param_1 + 0x32) == 0xb) {
        lVar4 = *(long *)(param_1 + 0x58);
        if ((lVar4 != 0) &&
           (___dynamic_cast(lVar4,&PTR_DAT_110c6b678,&PTR_DAT_110c6bb98,0), lVar4 != 0)) {
          unaff_x19 = (undefined8 *)(lVar4 + 8);
          goto LAB_10acc3eb8;
        }
      }
      else if (*(short *)(param_1 + 0x32) == 4) {
        FUN_10a14efe0();
        goto LAB_10acc3f00;
      }
      FUN_10a00946c(&UNK_10f681ac3);
LAB_10acc3f00:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10acc3f04);
      (*pcVar2)();
    }
    unaff_x20 = 0x1137ec838;
    unaff_x19 = (undefined8 *)0x1137ecaa4;
    if ((bRam00000001137ec838 & 1) != 0) goto LAB_10acc3eb8;
  }
  else {
    func_0x000109ffde50();
  }
  lVar4 = unaff_x20;
  ___cxa_guard_acquire();
  if ((int)lVar4 != 0) {
    unaff_x19 = (undefined8 *)(unaff_x20 + 0x26c);
    *(undefined8 *)(unaff_x20 + 0x274) = 0;
    *unaff_x19 = 0x3f800000;
    *(undefined8 *)(unaff_x20 + 0x284) = 0;
    *(undefined8 *)(unaff_x20 + 0x27c) = 0x3f80000000000000;
    *(undefined8 *)(unaff_x20 + 0x294) = 0x3f800000;
    *(undefined8 *)(unaff_x20 + 0x28c) = 0;
    *(undefined8 *)(unaff_x20 + 0x2a4) = 0x3f80000000000000;
    *(undefined8 *)(unaff_x20 + 0x29c) = 0;
    ___cxa_guard_release(unaff_x20);
  }
LAB_10acc3eb8:
  if ((long)uStack_48 < 0) {
    __ZdlPv(ppuStack_58);
  }
  return unaff_x19;
}



/* Entry: 10acc3f5c; end: 10acc3f83;  */

void FUN_10acc3f5c(void)

{
  return;
}



/* Entry: 10acc3f84; end: 10acc3fdb;  */

void FUN_10acc3f84(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x48;
  __Znwm();
  *puVar1 = &PTR_FUN_110c6bb70;
  uVar2 = *(undefined8 *)(param_2 + 8);
  puVar1[2] = *(undefined8 *)(param_2 + 0x10);
  puVar1[1] = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  puVar1[4] = *(undefined8 *)(param_2 + 0x20);
  puVar1[3] = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  puVar1[6] = *(undefined8 *)(param_2 + 0x30);
  puVar1[5] = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  puVar1[8] = *(undefined8 *)(param_2 + 0x40);
  puVar1[7] = uVar2;
  *param_1 = puVar1;
  return;
}



/* Entry: 10acc3fdc; end: 10acc3fe3;  */

/* WARNING: Removing unreachable block (ram,0x00010a700a1c) */

void FUN_10acc3fdc(undefined8 param_1)

{
  undefined1 auStack_48 [24];
  
  FUN_10a700a54(auStack_48,&UNK_10f670e15);
  FUN_10a700a54(param_1,auStack_48);
  return;
}



/* Entry: 10acc3fe4; end: 10acc4107;  */

void FUN_10acc3fe4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
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
  undefined1 *in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  ulong in_stack_ffffffffffffffb8;
  
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
  FUN_10acbdf4c(param_2,param_3);
  FUN_10a48f3fc(param_5);
  FUN_10a3f3f30(&stack0xffffffffffffffa8,param_2,param_4);
  puVar1 = in_stack_ffffffffffffffa8;
  if (-1 < (long)in_stack_ffffffffffffffb8) {
    in_stack_ffffffffffffffb0 = in_stack_ffffffffffffffb8 >> 0x38;
    puVar1 = &stack0xffffffffffffffa8;
  }
  FUN_10acc3dd8(plVar5,puVar1,in_stack_ffffffffffffffb0);
  if ((long)in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  FUN_10a368650(param_1,param_2,plVar5);
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



/* Entry: 10acc4108; end: 10acc427f;  */

undefined8 * FUN_10acc4108(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 ***pppuVar1;
  code *pcVar2;
  undefined8 ***pppuVar3;
  long lVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  if (param_3 < 0x7ffffffffffffff8) {
    if (param_3 < 0x17) {
      uStack_48 = CONCAT17((char)param_3,(undefined7)uStack_48);
      pppuVar3 = &ppuStack_58;
      if (param_3 != 0) goto LAB_10acc4178;
    }
    else {
      pppuVar1 = (undefined8 ***)0x19;
      if ((param_3 | 7) != 0x17) {
        pppuVar1 = (undefined8 ***)((param_3 | 7) + 1);
      }
      pppuVar3 = pppuVar1;
      __Znwm();
      uStack_48 = (ulong)pppuVar1 | 0x8000000000000000;
      ppuStack_58 = pppuVar3;
      uStack_50 = param_3;
LAB_10acc4178:
      _memmove(pppuVar3,param_2,param_3);
    }
    *(undefined1 *)((long)pppuVar3 + param_3) = 0;
    param_1 = param_1 + 0x38;
    FUN_10a54a2c0(param_1,&ppuStack_58);
    if (param_1 != 0) {
      if (*(short *)(param_1 + 0x32) == 0xc) {
        lVar4 = *(long *)(param_1 + 0x58);
        if ((lVar4 != 0) &&
           (___dynamic_cast(lVar4,&PTR_DAT_110c6b678,&PTR_DAT_110c6bbe8,0), lVar4 != 0)) {
          unaff_x19 = (undefined8 *)(lVar4 + 8);
          goto LAB_10acc41e8;
        }
      }
      else if (*(short *)(param_1 + 0x32) == 4) {
        FUN_10a14efe0();
        goto LAB_10acc4230;
      }
      FUN_10a00946c(&UNK_10f681ac3);
LAB_10acc4230:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10acc4234);
      (*pcVar2)();
    }
    unaff_x20 = 0x1137ec840;
    unaff_x19 = (undefined8 *)0x1137ec8c0;
    if ((bRam00000001137ec840 & 1) != 0) goto LAB_10acc41e8;
  }
  else {
    func_0x000109ffde50();
  }
  lVar4 = unaff_x20;
  ___cxa_guard_acquire();
  if ((int)lVar4 != 0) {
    unaff_x19 = (undefined8 *)(unaff_x20 + 0x80);
    *(undefined8 *)(unaff_x20 + 0x88) = 0x3f80000000000000;
    *unaff_x19 = 0;
    ___cxa_guard_release(unaff_x20);
  }
LAB_10acc41e8:
  if ((long)uStack_48 < 0) {
    __ZdlPv(ppuStack_58);
  }
  return unaff_x19;
}



/* Entry: 10acc4280; end: 10acc42a7;  */

void FUN_10acc4280(void)

{
  return;
}



/* Entry: 10acc42a8; end: 10acc42e7;  */

void FUN_10acc42a8(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *puVar1 = &PTR_FUN_110c6bbc0;
  uVar2 = *(undefined8 *)(param_2 + 8);
  puVar1[2] = *(undefined8 *)(param_2 + 0x10);
  puVar1[1] = uVar2;
  *param_1 = puVar1;
  return;
}



/* Entry: 10acc42e8; end: 10acc43ab;  */

void FUN_10acc42e8(undefined8 param_1)

{
  undefined8 ***pppuVar1;
  undefined8 **appuStack_48 [2];
  char cStack_31;
  
  FUN_10a700a54(appuStack_48,&UNK_10f6a1d3f);
  pppuVar1 = (undefined8 ***)appuStack_48[0];
  if (-1 < cStack_31) {
    pppuVar1 = appuStack_48;
  }
  FUN_10a700a54(param_1,pppuVar1);
  if (cStack_31 < '\0') {
    __ZdlPv(appuStack_48[0]);
  }
  return;
}



/* Entry: 10acc43ac; end: 10acc44cf;  */

void FUN_10acc43ac(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
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
  undefined1 *in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  ulong in_stack_ffffffffffffffb8;
  
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
  FUN_10acbdf4c(param_2,param_3);
  FUN_10a48f3fc(param_5);
  FUN_10a3f3f30(&stack0xffffffffffffffa8,param_2,param_4);
  puVar1 = in_stack_ffffffffffffffa8;
  if (-1 < (long)in_stack_ffffffffffffffb8) {
    in_stack_ffffffffffffffb0 = in_stack_ffffffffffffffb8 >> 0x38;
    puVar1 = &stack0xffffffffffffffa8;
  }
  FUN_10acc4108(plVar5,puVar1,in_stack_ffffffffffffffb0);
  if ((long)in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  FUN_10a07a354(param_1,param_2,plVar5);
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



/* Entry: 10acc44d0; end: 10acc45fb;  */

void FUN_10acc44d0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
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
  undefined1 *in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  ulong in_stack_ffffffffffffffb8;
  
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
  FUN_10acbdf4c(param_2,param_3);
  FUN_10a48f3fc(param_5);
  FUN_10a3f3f30(&stack0xffffffffffffffa8,param_2,param_4);
  puVar1 = in_stack_ffffffffffffffa8;
  if (-1 < (long)in_stack_ffffffffffffffb8) {
    in_stack_ffffffffffffffb0 = in_stack_ffffffffffffffb8 >> 0x38;
    puVar1 = &stack0xffffffffffffffa8;
  }
  FUN_10acc0780(plVar5,puVar1,in_stack_ffffffffffffffb0);
  if ((long)in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  FUN_10a2e43f8(param_1,param_2,*plVar5,plVar5[1] - *plVar5 >> 2);
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



/* Entry: 10acc45fc; end: 10acc4727;  */

void FUN_10acc45fc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
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
  undefined1 *in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  ulong in_stack_ffffffffffffffb8;
  
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
  FUN_10acbdf4c(param_2,param_3);
  FUN_10a48f3fc(param_5);
  FUN_10a3f3f30(&stack0xffffffffffffffa8,param_2,param_4);
  puVar1 = in_stack_ffffffffffffffa8;
  if (-1 < (long)in_stack_ffffffffffffffb8) {
    in_stack_ffffffffffffffb0 = in_stack_ffffffffffffffb8 >> 0x38;
    puVar1 = &stack0xffffffffffffffa8;
  }
  FUN_10acc0dcc(plVar5,puVar1,in_stack_ffffffffffffffb0);
  if ((long)in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  FUN_10a2a90b0(param_1,param_2,*plVar5,plVar5[1] - *plVar5 >> 2);
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



/* Entry: 10acc4728; end: 10acc489b;  */

long FUN_10acc4728(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 ***pppuVar1;
  code *pcVar2;
  undefined8 ***pppuVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  if (param_3 < 0x7ffffffffffffff8) {
    if (param_3 < 0x17) {
      uStack_48 = CONCAT17((char)param_3,(undefined7)uStack_48);
      pppuVar3 = &ppuStack_58;
      if (param_3 != 0) goto LAB_10acc4798;
    }
    else {
      pppuVar1 = (undefined8 ***)0x19;
      if ((param_3 | 7) != 0x17) {
        pppuVar1 = (undefined8 ***)((param_3 | 7) + 1);
      }
      pppuVar3 = pppuVar1;
      __Znwm();
      uStack_48 = (ulong)pppuVar1 | 0x8000000000000000;
      ppuStack_58 = pppuVar3;
      uStack_50 = param_3;
LAB_10acc4798:
      _memmove(pppuVar3,param_2,param_3);
    }
    *(undefined1 *)((long)pppuVar3 + param_3) = 0;
    param_1 = param_1 + 0x38;
    FUN_10a54a2c0(param_1,&ppuStack_58);
    if (param_1 != 0) {
      if (*(short *)(param_1 + 0x32) == 0xf) {
        lVar4 = *(long *)(param_1 + 0x58);
        if ((lVar4 != 0) &&
           (___dynamic_cast(lVar4,&PTR_DAT_110c6b678,&PTR_DAT_110c6bc38,0), lVar4 != 0)) {
          unaff_x19 = lVar4 + 8;
          goto LAB_10acc4808;
        }
      }
      else if (*(short *)(param_1 + 0x32) == 4) {
        FUN_10a14efe0();
        goto LAB_10acc4850;
      }
      FUN_10a00946c(&UNK_10f681ac3);
LAB_10acc4850:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10acc4854);
      (*pcVar2)();
    }
    unaff_x20 = 0x1137ec848;
    unaff_x19 = 0x1137ec9a8;
    if ((bRam00000001137ec848 & 1) != 0) goto LAB_10acc4808;
  }
  else {
    func_0x000109ffde50();
  }
  lVar4 = unaff_x20;
  ___cxa_guard_acquire();
  if ((int)lVar4 != 0) {
    *(undefined8 *)(unaff_x20 + 0x160) = 0;
    *(undefined8 *)(unaff_x20 + 0x168) = 0;
    unaff_x19 = unaff_x20 + 0x160;
    *(undefined8 *)(unaff_x20 + 0x170) = 0;
    ___cxa_guard_release(unaff_x20);
  }
LAB_10acc4808:
  if ((long)uStack_48 < 0) {
    __ZdlPv(ppuStack_58);
  }
  return unaff_x19;
}



/* Entry: 10acc489c; end: 10acc490b;  */

undefined8 * FUN_10acc489c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6bc10;
  if (param_1[1] != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10acc490c; end: 10acc49ef;  */

void FUN_10acc490c(long param_1,long *param_2)

{
  code *pcVar1;
  ulong uVar2;
  long lStack_38;
  long lStack_30;
  
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c6b470,1);
  FUN_10a0dc020(&lStack_38,*(undefined8 *)(param_1 + 0x10));
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar2 = 0;
    do {
      if ((ulong)(lStack_30 - lStack_38) <= uVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10acc49d4);
        (*pcVar1)();
      }
      *(byte *)(lStack_38 + uVar2) =
           (byte)(*(ulong *)(*(long *)(param_1 + 8) + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f)) & 1;
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ulong *)(param_1 + 0x10));
  }
  (**(code **)(*param_2 + 0x28))(param_2,&PTR_DAT_110c6b450,lStack_38,lStack_30 - lStack_38);
  if (lStack_38 != 0) {
    lStack_30 = lStack_38;
    __ZdlPv();
  }
  return;
}



/* Entry: 10acc49f0; end: 10acc4a4f;  */

void FUN_10acc49f0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_110c6bc10;
  func_0x000105007b50(puVar1 + 1,param_2 + 8);
  *param_1 = puVar1;
  return;
}



/* Entry: 10acc4a50; end: 10acc4bd3;  */

void FUN_10acc4a50(undefined8 param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  undefined8 ****ppppuVar5;
  long *plVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  ulong *puVar10;
  long alStack_88 [2];
  char cStack_71;
  undefined8 ***pppuStack_70;
  ulong uStack_68;
  ulong uStack_60;
  
  func_0x000107c2b054(param_1,&DAT_10f62a9e8);
  uVar7 = *(ulong *)(param_2 + 0x10);
  if (0x3f < uVar7 || (uVar7 & 0x3f) != 0) {
    uVar9 = 0;
    puVar10 = *(ulong **)(param_2 + 8);
    puVar1 = puVar10 + (uVar7 >> 6);
    do {
      __ZNSt3__19to_stringEi(alStack_88,(uint)(*puVar10 >> (uVar9 & 0x3f)) & 1);
      plVar6 = alStack_88;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (plVar6,&DAT_10f68f19e,2);
      uStack_68 = plVar6[1];
      pppuStack_70 = (undefined8 ***)*plVar6;
      uStack_60 = plVar6[2];
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = 0;
      uVar2 = uStack_68;
      ppppuVar5 = (undefined8 ****)pppuStack_70;
      if (-1 < (long)uStack_60) {
        uVar2 = uStack_60 >> 0x38;
        ppppuVar5 = &pppuStack_70;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_1,ppppuVar5,uVar2);
      if ((long)uStack_60 < 0) {
        __ZdlPv(pppuStack_70);
      }
      if (cStack_71 < '\0') {
        __ZdlPv(alStack_88[0]);
      }
      iVar8 = (int)uVar9;
      lVar3 = 8;
      if (iVar8 != 0x3f) {
        lVar3 = 0;
      }
      puVar10 = (ulong *)((long)puVar10 + lVar3);
      uVar4 = 0;
      if (iVar8 != 0x3f) {
        uVar4 = iVar8 + 1;
      }
      uVar9 = (ulong)uVar4;
    } while ((uVar4 != ((uint)uVar7 & 0x3f)) || (puVar10 != puVar1));
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&DAT_10f62a9ea,1);
  return;
}



/* Entry: 10acc4bd4; end: 10acc4cf7;  */

void FUN_10acc4bd4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
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
  undefined1 *in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  ulong in_stack_ffffffffffffffb8;
  
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
  FUN_10acbdf4c(param_2,param_3);
  FUN_10a48f3fc(param_5);
  FUN_10a3f3f30(&stack0xffffffffffffffa8,param_2,param_4);
  puVar1 = in_stack_ffffffffffffffa8;
  if (-1 < (long)in_stack_ffffffffffffffb8) {
    in_stack_ffffffffffffffb0 = in_stack_ffffffffffffffb8 >> 0x38;
    puVar1 = &stack0xffffffffffffffa8;
  }
  FUN_10acc4728(plVar5,puVar1,in_stack_ffffffffffffffb0);
  if ((long)in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  func_0x00010989a300(param_1,param_2,plVar5);
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



/* Entry: 10acc4cf8; end: 10acc4edb;  */

long FUN_10acc4cf8(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 ***pppuVar1;
  long lVar2;
  code *pcVar3;
  undefined8 ***pppuVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  undefined8 **ppuStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  
  if (param_3 < 0x7ffffffffffffff8) {
    if (param_3 < 0x17) {
      uStack_68 = CONCAT17((char)param_3,(undefined7)uStack_68);
      pppuVar4 = &ppuStack_78;
      if (param_3 != 0) goto LAB_10acc4d68;
    }
    else {
      pppuVar1 = (undefined8 ***)0x19;
      if ((param_3 | 7) != 0x17) {
        pppuVar1 = (undefined8 ***)((param_3 | 7) + 1);
      }
      pppuVar4 = pppuVar1;
      __Znwm();
      uStack_68 = (ulong)pppuVar1 | 0x8000000000000000;
      ppuStack_78 = pppuVar4;
      uStack_70 = param_3;
LAB_10acc4d68:
      _memmove(pppuVar4,param_2,param_3);
    }
    *(undefined1 *)((long)pppuVar4 + param_3) = 0;
    param_1 = param_1 + 0x38;
    FUN_10a54a2c0(param_1,&ppuStack_78);
    if (param_1 != 0) {
      if (*(short *)(param_1 + 0x32) == 0xf) {
LAB_10acc4df0:
        lVar5 = *(long *)(param_1 + 0x58);
        if ((lVar5 != 0) &&
           (___dynamic_cast(lVar5,&PTR_DAT_110c6b678,&PTR_DAT_110c6bc88,0), lVar5 != 0)) {
          unaff_x19 = lVar5 + 8;
          goto LAB_10acc4e30;
        }
      }
      else if (*(short *)(param_1 + 0x32) == 4) {
        lVar5 = *(long *)(param_1 + 0x40);
        lVar2 = *(long *)(param_1 + 0x48);
        if (lVar5 == lVar2) {
          FUN_10a108c2c(&UNK_10f63b259);
          goto LAB_10acc4ea0;
        }
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_50 = 0;
        FUN_10a0cf0cc(&uStack_60,lVar5,lVar2,(lVar2 - lVar5 >> 3) * -0x5555555555555555);
        FUN_10acc4edc(param_1 + 0x28,uStack_60,uStack_58);
        puStack_48 = &uStack_60;
        FUN_10a0426d8(&puStack_48);
        goto LAB_10acc4df0;
      }
      FUN_10a00946c(&UNK_10f681ac3);
LAB_10acc4ea0:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10acc4ea4);
      (*pcVar3)();
    }
    unaff_x20 = 0x1137ec850;
    unaff_x19 = 0x1137ec9c0;
    if ((bRam00000001137ec850 & 1) != 0) goto LAB_10acc4e30;
  }
  else {
    func_0x000109ffde50();
  }
  lVar5 = unaff_x20;
  ___cxa_guard_acquire();
  if ((int)lVar5 != 0) {
    *(undefined8 *)(unaff_x20 + 0x170) = 0;
    *(undefined8 *)(unaff_x20 + 0x178) = 0;
    unaff_x19 = unaff_x20 + 0x170;
    *(undefined8 *)(unaff_x20 + 0x180) = 0;
    ___cxa_guard_release(unaff_x20);
  }
LAB_10acc4e30:
  if ((long)uStack_68 < 0) {
    __ZdlPv(ppuStack_78);
  }
  return unaff_x19;
}



/* Entry: 10acc4edc; end: 10acc4f7f;  */

void FUN_10acc4edc(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_110c6bc60;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[1] = 0;
  FUN_10a0cf0cc(puVar1 + 1,param_2,param_3,(param_3 - param_2 >> 3) * -0x5555555555555555);
  plVar2 = *(long **)(param_1 + 0x30);
  *(undefined8 **)(param_1 + 0x30) = puVar1;
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010acc4f58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))();
    return;
  }
  return;
}



/* Entry: 10acc4f80; end: 10acc505f;  */

undefined8 * FUN_10acc4f80(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  puStack_28 = param_1 + 1;
  *param_1 = &PTR_FUN_110c6bc60;
  FUN_10a0426d8(&puStack_28);
  return param_1;
}



/* Entry: 10acc5060; end: 10acc50db;  */

void FUN_10acc5060(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_110c6bc60;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[1] = 0;
  FUN_10a0cf0cc();
  *param_1 = puVar1;
  return;
}



/* Entry: 10acc50dc; end: 10acc523b;  */

void FUN_10acc50dc(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 ***pppuVar3;
  long *plVar4;
  long *plVar5;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 **ppuStack_60;
  ulong uStack_58;
  ulong uStack_50;
  
  func_0x000107c2b054(param_1,&DAT_10f62a9e8);
  plVar5 = *(long **)(param_2 + 8);
  plVar2 = *(long **)(param_2 + 0x10);
  if (plVar5 != plVar2) {
    do {
      if (*(char *)((long)plVar5 + 0x17) < '\0') {
        func_0x000107c3192c(&lStack_80,*plVar5,plVar5[1]);
      }
      else {
        lStack_78 = plVar5[1];
        lStack_80 = *plVar5;
        lStack_70 = plVar5[2];
      }
      plVar4 = &lStack_80;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&lStack_80,&DAT_10f68f19e,2);
      uStack_58 = plVar4[1];
      ppuStack_60 = (undefined8 **)*plVar4;
      uStack_50 = plVar4[2];
      plVar4[1] = 0;
      plVar4[2] = 0;
      *plVar4 = 0;
      uVar1 = uStack_58;
      pppuVar3 = (undefined8 ***)ppuStack_60;
      if (-1 < (long)uStack_50) {
        uVar1 = uStack_50 >> 0x38;
        pppuVar3 = &ppuStack_60;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_1,pppuVar3,uVar1);
      if ((long)uStack_50 < 0) {
        __ZdlPv(ppuStack_60);
      }
      if (lStack_70 < 0) {
        __ZdlPv(lStack_80);
      }
      plVar5 = plVar5 + 3;
    } while (plVar5 != plVar2);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&DAT_10f62a9ea,1);
  return;
}



/* Entry: 10acc523c; end: 10acc5373;  */

void FUN_10acc523c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
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
  undefined1 *in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  ulong in_stack_ffffffffffffffb8;
  
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
  FUN_10acbdf4c(param_2,param_3);
  FUN_10a48f3fc(param_5);
  FUN_10a3f3f30(&stack0xffffffffffffffa8,param_2,param_4);
  puVar1 = in_stack_ffffffffffffffa8;
  if (-1 < (long)in_stack_ffffffffffffffb8) {
    in_stack_ffffffffffffffb0 = in_stack_ffffffffffffffb8 >> 0x38;
    puVar1 = &stack0xffffffffffffffa8;
  }
  FUN_10acc4cf8(plVar5,puVar1,in_stack_ffffffffffffffb0);
  if ((long)in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  func_0x00010989a420(param_1,param_2,*plVar5,(plVar5[1] - *plVar5 >> 3) * -0x5555555555555555);
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



/* Entry: 10acc5374; end: 10acc54e7;  */

long FUN_10acc5374(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 ***pppuVar1;
  code *pcVar2;
  undefined8 ***pppuVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  if (param_3 < 0x7ffffffffffffff8) {
    if (param_3 < 0x17) {
      uStack_48 = CONCAT17((char)param_3,(undefined7)uStack_48);
      pppuVar3 = &ppuStack_58;
      if (param_3 != 0) goto LAB_10acc53e4;
    }
    else {
      pppuVar1 = (undefined8 ***)0x19;
      if ((param_3 | 7) != 0x17) {
        pppuVar1 = (undefined8 ***)((param_3 | 7) + 1);
      }
      pppuVar3 = pppuVar1;
      __Znwm();
      uStack_48 = (ulong)pppuVar1 | 0x8000000000000000;
      ppuStack_58 = pppuVar3;
      uStack_50 = param_3;
LAB_10acc53e4:
      _memmove(pppuVar3,param_2,param_3);
    }
    *(undefined1 *)((long)pppuVar3 + param_3) = 0;
    param_1 = param_1 + 0x38;
    FUN_10a54a2c0(param_1,&ppuStack_58);
    if (param_1 != 0) {
      if (*(short *)(param_1 + 0x32) == 0xf) {
        lVar4 = *(long *)(param_1 + 0x58);
        if ((lVar4 != 0) &&
           (___dynamic_cast(lVar4,&PTR_DAT_110c6b678,&PTR_DAT_110c6bcd8,0), lVar4 != 0)) {
          unaff_x19 = lVar4 + 8;
          goto LAB_10acc5454;
        }
      }
      else if (*(short *)(param_1 + 0x32) == 4) {
        FUN_10a14efe0();
        goto LAB_10acc549c;
      }
      FUN_10a00946c(&UNK_10f681ac3);
LAB_10acc549c:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10acc54a0);
      (*pcVar2)();
    }
    unaff_x20 = 0x1137ec858;
    unaff_x19 = 0x1137ec9d8;
    if ((bRam00000001137ec858 & 1) != 0) goto LAB_10acc5454;
  }
  else {
    func_0x000109ffde50();
  }
  lVar4 = unaff_x20;
  ___cxa_guard_acquire();
  if ((int)lVar4 != 0) {
    *(undefined8 *)(unaff_x20 + 0x180) = 0;
    *(undefined8 *)(unaff_x20 + 0x188) = 0;
    unaff_x19 = unaff_x20 + 0x180;
    *(undefined8 *)(unaff_x20 + 400) = 0;
    ___cxa_guard_release(unaff_x20);
  }
LAB_10acc5454:
  if ((long)uStack_48 < 0) {
    __ZdlPv(ppuStack_58);
  }
  return unaff_x19;
}



/* Entry: 10acc54e8; end: 10acc55b7;  */

undefined8 * FUN_10acc54e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6bcb0;
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10acc55b8; end: 10acc5627;  */

void FUN_10acc55b8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_110c6bcb0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[1] = 0;
  FUN_10a07b634();
  *param_1 = puVar1;
  return;
}



/* Entry: 10acc5628; end: 10acc57eb;  */

void FUN_10acc5628(undefined8 param_1,long param_2)

{
  undefined8 ***pppuVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long alStack_a8 [2];
  char cStack_91;
  undefined8 **ppuStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 **appuStack_78 [2];
  char cStack_61;
  
  func_0x000107c2b054(param_1,&DAT_10f62a9e8);
  lVar5 = *(long *)(param_2 + 8);
  lVar3 = *(long *)(param_2 + 0x10);
  if (lVar5 != lVar3) {
    do {
      FUN_10a700a54(appuStack_78,&UNK_10f6a1cb6);
      pppuVar1 = (undefined8 ***)appuStack_78[0];
      if (-1 < cStack_61) {
        pppuVar1 = appuStack_78;
      }
      FUN_10a700a54(alStack_a8,pppuVar1);
      if (cStack_61 < '\0') {
        __ZdlPv(appuStack_78[0]);
      }
      plVar4 = alStack_a8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (plVar4,&DAT_10f68f19e,2);
      uStack_88 = plVar4[1];
      ppuStack_90 = (undefined8 **)*plVar4;
      uStack_80 = plVar4[2];
      plVar4[1] = 0;
      plVar4[2] = 0;
      *plVar4 = 0;
      uVar2 = uStack_88;
      pppuVar1 = (undefined8 ***)ppuStack_90;
      if (-1 < (long)uStack_80) {
        uVar2 = uStack_80 >> 0x38;
        pppuVar1 = &ppuStack_90;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_1,pppuVar1,uVar2);
      if ((long)uStack_80 < 0) {
        __ZdlPv(ppuStack_90);
      }
      if (cStack_91 < '\0') {
        __ZdlPv(alStack_a8[0]);
      }
      lVar5 = lVar5 + 8;
    } while (lVar5 != lVar3);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&DAT_10f62a9ea,1);
  return;
}



/* Entry: 10acc57ec; end: 10acc5917;  */

void FUN_10acc57ec(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
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
  undefined1 *in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  ulong in_stack_ffffffffffffffb8;
  
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
  FUN_10acbdf4c(param_2,param_3);
  FUN_10a48f3fc(param_5);
  FUN_10a3f3f30(&stack0xffffffffffffffa8,param_2,param_4);
  puVar1 = in_stack_ffffffffffffffa8;
  if (-1 < (long)in_stack_ffffffffffffffb8) {
    in_stack_ffffffffffffffb0 = in_stack_ffffffffffffffb8 >> 0x38;
    puVar1 = &stack0xffffffffffffffa8;
  }
  FUN_10acc5374(plVar5,puVar1,in_stack_ffffffffffffffb0);
  if ((long)in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  FUN_10a07b090(param_1,param_2,*plVar5,plVar5[1] - *plVar5 >> 3);
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



/* Entry: 10acc5918; end: 10acc5a8b;  */

long FUN_10acc5918(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 ***pppuVar1;
  code *pcVar2;
  undefined8 ***pppuVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  if (param_3 < 0x7ffffffffffffff8) {
    if (param_3 < 0x17) {
      uStack_48 = CONCAT17((char)param_3,(undefined7)uStack_48);
      pppuVar3 = &ppuStack_58;
      if (param_3 != 0) goto LAB_10acc5988;
    }
    else {
      pppuVar1 = (undefined8 ***)0x19;
      if ((param_3 | 7) != 0x17) {
        pppuVar1 = (undefined8 ***)((param_3 | 7) + 1);
      }
      pppuVar3 = pppuVar1;
      __Znwm();
      uStack_48 = (ulong)pppuVar1 | 0x8000000000000000;
      ppuStack_58 = pppuVar3;
      uStack_50 = param_3;
LAB_10acc5988:
      _memmove(pppuVar3,param_2,param_3);
    }
    *(undefined1 *)((long)pppuVar3 + param_3) = 0;
    param_1 = param_1 + 0x38;
    FUN_10a54a2c0(param_1,&ppuStack_58);
    if (param_1 != 0) {
      if (*(short *)(param_1 + 0x32) == 0xf) {
        lVar4 = *(long *)(param_1 + 0x58);
        if ((lVar4 != 0) &&
           (___dynamic_cast(lVar4,&PTR_DAT_110c6b678,&PTR_DAT_110c6bd28,0), lVar4 != 0)) {
          unaff_x19 = lVar4 + 8;
          goto LAB_10acc59f8;
        }
      }
      else if (*(short *)(param_1 + 0x32) == 4) {
        FUN_10a14efe0();
        goto LAB_10acc5a40;
      }
      FUN_10a00946c(&UNK_10f681ac3);
LAB_10acc5a40:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10acc5a44);
      (*pcVar2)();
    }
    unaff_x20 = 0x1137ec860;
    unaff_x19 = 0x1137ec9f0;
    if ((bRam00000001137ec860 & 1) != 0) goto LAB_10acc59f8;
  }
  else {
    func_0x000109ffde50();
  }
  lVar4 = unaff_x20;
  ___cxa_guard_acquire();
  if ((int)lVar4 != 0) {
    *(undefined8 *)(unaff_x20 + 400) = 0;
    *(undefined8 *)(unaff_x20 + 0x198) = 0;
    unaff_x19 = unaff_x20 + 400;
    *(undefined8 *)(unaff_x20 + 0x1a0) = 0;
    ___cxa_guard_release(unaff_x20);
  }
LAB_10acc59f8:
  if ((long)uStack_48 < 0) {
    __ZdlPv(ppuStack_58);
  }
  return unaff_x19;
}



/* Entry: 10acc5a8c; end: 10acc5b5b;  */

undefined8 * FUN_10acc5a8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6bd00;
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10acc5b5c; end: 10acc5bd7;  */

void FUN_10acc5b5c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_110c6bd00;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[1] = 0;
  FUN_10a051a50();
  *param_1 = puVar1;
  return;
}



/* Entry: 10acc5bd8; end: 10acc5da7;  */

void FUN_10acc5bd8(undefined8 param_1,long param_2)

{
  undefined8 ***pppuVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long alStack_a8 [2];
  char cStack_91;
  undefined8 **ppuStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 **appuStack_78 [2];
  char cStack_61;
  
  func_0x000107c2b054(param_1,&DAT_10f62a9e8);
  lVar5 = *(long *)(param_2 + 8);
  lVar3 = *(long *)(param_2 + 0x10);
  if (lVar5 != lVar3) {
    do {
      FUN_10a700a54(appuStack_78,&UNK_10f6a1cc5);
      pppuVar1 = (undefined8 ***)appuStack_78[0];
      if (-1 < cStack_61) {
        pppuVar1 = appuStack_78;
      }
      FUN_10a700a54(alStack_a8,pppuVar1);
      if (cStack_61 < '\0') {
        __ZdlPv(appuStack_78[0]);
      }
      plVar4 = alStack_a8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (plVar4,&DAT_10f68f19e,2);
      uStack_88 = plVar4[1];
      ppuStack_90 = (undefined8 **)*plVar4;
      uStack_80 = plVar4[2];
      plVar4[1] = 0;
      plVar4[2] = 0;
      *plVar4 = 0;
      uVar2 = uStack_88;
      pppuVar1 = (undefined8 ***)ppuStack_90;
      if (-1 < (long)uStack_80) {
        uVar2 = uStack_80 >> 0x38;
        pppuVar1 = &ppuStack_90;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_1,pppuVar1,uVar2);
      if ((long)uStack_80 < 0) {
        __ZdlPv(ppuStack_90);
      }
      if (cStack_91 < '\0') {
        __ZdlPv(alStack_a8[0]);
      }
      lVar5 = lVar5 + 0xc;
    } while (lVar5 != lVar3);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&DAT_10f62a9ea,1);
  return;
}



/* Entry: 10acc5da8; end: 10acc5edf;  */

void FUN_10acc5da8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
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
  undefined1 *in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  ulong in_stack_ffffffffffffffb8;
  
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
  FUN_10acbdf4c(param_2,param_3);
  FUN_10a48f3fc(param_5);
  FUN_10a3f3f30(&stack0xffffffffffffffa8,param_2,param_4);
  puVar1 = in_stack_ffffffffffffffa8;
  if (-1 < (long)in_stack_ffffffffffffffb8) {
    in_stack_ffffffffffffffb0 = in_stack_ffffffffffffffb8 >> 0x38;
    puVar1 = &stack0xffffffffffffffa8;
  }
  FUN_10acc5918(plVar5,puVar1,in_stack_ffffffffffffffb0);
  if ((long)in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  FUN_10a3699ec(param_1,param_2,*plVar5,(plVar5[1] - *plVar5 >> 2) * -0x5555555555555555);
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



/* Entry: 10acc5ee0; end: 10acc6053;  */

long FUN_10acc5ee0(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 ***pppuVar1;
  code *pcVar2;
  undefined8 ***pppuVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  if (param_3 < 0x7ffffffffffffff8) {
    if (param_3 < 0x17) {
      uStack_48 = CONCAT17((char)param_3,(undefined7)uStack_48);
      pppuVar3 = &ppuStack_58;
      if (param_3 != 0) goto LAB_10acc5f50;
    }
    else {
      pppuVar1 = (undefined8 ***)0x19;
      if ((param_3 | 7) != 0x17) {
        pppuVar1 = (undefined8 ***)((param_3 | 7) + 1);
      }
      pppuVar3 = pppuVar1;
      __Znwm();
      uStack_48 = (ulong)pppuVar1 | 0x8000000000000000;
      ppuStack_58 = pppuVar3;
      uStack_50 = param_3;
LAB_10acc5f50:
      _memmove(pppuVar3,param_2,param_3);
    }
    *(undefined1 *)((long)pppuVar3 + param_3) = 0;
    param_1 = param_1 + 0x38;
    FUN_10a54a2c0(param_1,&ppuStack_58);
    if (param_1 != 0) {
      if (*(short *)(param_1 + 0x32) == 0xf) {
        lVar4 = *(long *)(param_1 + 0x58);
        if ((lVar4 != 0) &&
           (___dynamic_cast(lVar4,&PTR_DAT_110c6b678,&PTR_DAT_110c6bd78,0), lVar4 != 0)) {
          unaff_x19 = lVar4 + 8;
          goto LAB_10acc5fc0;
        }
      }
      else if (*(short *)(param_1 + 0x32) == 4) {
        FUN_10a14efe0();
        goto LAB_10acc6008;
      }
      FUN_10a00946c(&UNK_10f681ac3);
LAB_10acc6008:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10acc600c);
      (*pcVar2)();
    }
    unaff_x20 = 0x1137ec868;
    unaff_x19 = 0x1137eca08;
    if ((bRam00000001137ec868 & 1) != 0) goto LAB_10acc5fc0;
  }
  else {
    func_0x000109ffde50();
  }
  lVar4 = unaff_x20;
  ___cxa_guard_acquire();
  if ((int)lVar4 != 0) {
    *(undefined8 *)(unaff_x20 + 0x1a0) = 0;
    *(undefined8 *)(unaff_x20 + 0x1a8) = 0;
    unaff_x19 = unaff_x20 + 0x1a0;
    *(undefined8 *)(unaff_x20 + 0x1b0) = 0;
    ___cxa_guard_release(unaff_x20);
  }
LAB_10acc5fc0:
  if ((long)uStack_48 < 0) {
    __ZdlPv(ppuStack_58);
  }
  return unaff_x19;
}



/* Entry: 10acc6054; end: 10acc6123;  */

undefined8 * FUN_10acc6054(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6bd50;
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10acc6124; end: 10acc6193;  */

void FUN_10acc6124(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_110c6bd50;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[1] = 0;
  FUN_10ac7a494();
  *param_1 = puVar1;
  return;
}



/* Entry: 10acc6194; end: 10acc636b;  */

void FUN_10acc6194(undefined8 param_1,long param_2)

{
  undefined8 ***pppuVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long alStack_a8 [2];
  char cStack_91;
  undefined8 **ppuStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 **appuStack_78 [2];
  char cStack_61;
  
  func_0x000107c2b054(param_1,&DAT_10f62a9e8);
  lVar5 = *(long *)(param_2 + 8);
  lVar3 = *(long *)(param_2 + 0x10);
  if (lVar5 != lVar3) {
    do {
      FUN_10a700a54(appuStack_78,&UNK_10f6a1cd8);
      pppuVar1 = (undefined8 ***)appuStack_78[0];
      if (-1 < cStack_61) {
        pppuVar1 = appuStack_78;
      }
      FUN_10a700a54(alStack_a8,pppuVar1);
      if (cStack_61 < '\0') {
        __ZdlPv(appuStack_78[0]);
      }
      plVar4 = alStack_a8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (plVar4,&DAT_10f68f19e,2);
      uStack_88 = plVar4[1];
      ppuStack_90 = (undefined8 **)*plVar4;
      uStack_80 = plVar4[2];
      plVar4[1] = 0;
      plVar4[2] = 0;
      *plVar4 = 0;
      uVar2 = uStack_88;
      pppuVar1 = (undefined8 ***)ppuStack_90;
      if (-1 < (long)uStack_80) {
        uVar2 = uStack_80 >> 0x38;
        pppuVar1 = &ppuStack_90;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_1,pppuVar1,uVar2);
      if ((long)uStack_80 < 0) {
        __ZdlPv(ppuStack_90);
      }
      if (cStack_91 < '\0') {
        __ZdlPv(alStack_a8[0]);
      }
      lVar5 = lVar5 + 0x10;
    } while (lVar5 != lVar3);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&DAT_10f62a9ea,1);
  return;
}



/* Entry: 10acc636c; end: 10acc6497;  */

void FUN_10acc636c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
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
  undefined1 *in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  ulong in_stack_ffffffffffffffb8;
  
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
  FUN_10acbdf4c(param_2,param_3);
  FUN_10a48f3fc(param_5);
  FUN_10a3f3f30(&stack0xffffffffffffffa8,param_2,param_4);
  puVar1 = in_stack_ffffffffffffffa8;
  if (-1 < (long)in_stack_ffffffffffffffb8) {
    in_stack_ffffffffffffffb0 = in_stack_ffffffffffffffb8 >> 0x38;
    puVar1 = &stack0xffffffffffffffa8;
  }
  FUN_10acc5ee0(plVar5,puVar1,in_stack_ffffffffffffffb0);
  if ((long)in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  FUN_10a369ce8(param_1,param_2,*plVar5,plVar5[1] - *plVar5 >> 4);
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



/* Entry: 10acc6498; end: 10acc660b;  */

long FUN_10acc6498(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 ***pppuVar1;
  code *pcVar2;
  undefined8 ***pppuVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  if (param_3 < 0x7ffffffffffffff8) {
    if (param_3 < 0x17) {
      uStack_48 = CONCAT17((char)param_3,(undefined7)uStack_48);
      pppuVar3 = &ppuStack_58;
      if (param_3 != 0) goto LAB_10acc6508;
    }
    else {
      pppuVar1 = (undefined8 ***)0x19;
      if ((param_3 | 7) != 0x17) {
        pppuVar1 = (undefined8 ***)((param_3 | 7) + 1);
      }
      pppuVar3 = pppuVar1;
      __Znwm();
      uStack_48 = (ulong)pppuVar1 | 0x8000000000000000;
      ppuStack_58 = pppuVar3;
      uStack_50 = param_3;
LAB_10acc6508:
      _memmove(pppuVar3,param_2,param_3);
    }
    *(undefined1 *)((long)pppuVar3 + param_3) = 0;
    param_1 = param_1 + 0x38;
    FUN_10a54a2c0(param_1,&ppuStack_58);
    if (param_1 != 0) {
      if (*(short *)(param_1 + 0x32) == 0xf) {
        lVar4 = *(long *)(param_1 + 0x58);
        if ((lVar4 != 0) &&
           (___dynamic_cast(lVar4,&PTR_DAT_110c6b678,&PTR_DAT_110c6bdc8,0), lVar4 != 0)) {
          unaff_x19 = lVar4 + 8;
          goto LAB_10acc6578;
        }
      }
      else if (*(short *)(param_1 + 0x32) == 4) {
        FUN_10a14efe0();
        goto LAB_10acc65c0;
      }
      FUN_10a00946c(&UNK_10f681ac3);
LAB_10acc65c0:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10acc65c4);
      (*pcVar2)();
    }
    unaff_x20 = 0x1137ec870;
    unaff_x19 = 0x1137eca20;
    if ((bRam00000001137ec870 & 1) != 0) goto LAB_10acc6578;
  }
  else {
    func_0x000109ffde50();
  }
  lVar4 = unaff_x20;
  ___cxa_guard_acquire();
  if ((int)lVar4 != 0) {
    *(undefined8 *)(unaff_x20 + 0x1b0) = 0;
    *(undefined8 *)(unaff_x20 + 0x1b8) = 0;
    unaff_x19 = unaff_x20 + 0x1b0;
    *(undefined8 *)(unaff_x20 + 0x1c0) = 0;
    ___cxa_guard_release(unaff_x20);
  }
LAB_10acc6578:
  if ((long)uStack_48 < 0) {
    __ZdlPv(ppuStack_58);
  }
  return unaff_x19;
}



/* Entry: 10acc660c; end: 10acc66db;  */

undefined8 * FUN_10acc660c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6bda0;
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10acc66dc; end: 10acc674b;  */

void FUN_10acc66dc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_110c6bda0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[1] = 0;
  FUN_10acc6924();
  *param_1 = puVar1;
  return;
}



/* Entry: 10acc674c; end: 10acc6923;  */

void FUN_10acc674c(undefined8 param_1,long param_2)

{
  undefined8 ***pppuVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long alStack_a8 [2];
  char cStack_91;
  undefined8 **ppuStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 **appuStack_78 [2];
  char cStack_61;
  
  func_0x000107c2b054(param_1,&DAT_10f62a9e8);
  lVar5 = *(long *)(param_2 + 8);
  lVar3 = *(long *)(param_2 + 0x10);
  if (lVar5 != lVar3) {
    do {
      FUN_10a700a54(appuStack_78,&UNK_10f6a1cef);
      pppuVar1 = (undefined8 ***)appuStack_78[0];
      if (-1 < cStack_61) {
        pppuVar1 = appuStack_78;
      }
      FUN_10a700a54(alStack_a8,pppuVar1);
      if (cStack_61 < '\0') {
        __ZdlPv(appuStack_78[0]);
      }
      plVar4 = alStack_a8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (plVar4,&DAT_10f68f19e,2);
      uStack_88 = plVar4[1];
      ppuStack_90 = (undefined8 **)*plVar4;
      uStack_80 = plVar4[2];
      plVar4[1] = 0;
      plVar4[2] = 0;
      *plVar4 = 0;
      uVar2 = uStack_88;
      pppuVar1 = (undefined8 ***)ppuStack_90;
      if (-1 < (long)uStack_80) {
        uVar2 = uStack_80 >> 0x38;
        pppuVar1 = &ppuStack_90;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_1,pppuVar1,uVar2);
      if ((long)uStack_80 < 0) {
        __ZdlPv(ppuStack_90);
      }
      if (cStack_91 < '\0') {
        __ZdlPv(alStack_a8[0]);
      }
      lVar5 = lVar5 + 0x10;
    } while (lVar5 != lVar3);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&DAT_10f62a9ea,1);
  return;
}



/* Entry: 10acc6924; end: 10acc699b;  */

void FUN_10acc6924(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a4954ac(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 10acc699c; end: 10acc6ac7;  */

void FUN_10acc699c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
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
  undefined1 *in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  ulong in_stack_ffffffffffffffb8;
  
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
  FUN_10acbdf4c(param_2,param_3);
  FUN_10a48f3fc(param_5);
  FUN_10a3f3f30(&stack0xffffffffffffffa8,param_2,param_4);
  puVar1 = in_stack_ffffffffffffffa8;
  if (-1 < (long)in_stack_ffffffffffffffb8) {
    in_stack_ffffffffffffffb0 = in_stack_ffffffffffffffb8 >> 0x38;
    puVar1 = &stack0xffffffffffffffa8;
  }
  FUN_10acc6498(plVar5,puVar1,in_stack_ffffffffffffffb0);
  if ((long)in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  FUN_10a36a0b8(param_1,param_2,*plVar5,plVar5[1] - *plVar5 >> 4);
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



/* Entry: 10acc6ac8; end: 10acc6c3b;  */

long FUN_10acc6ac8(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 ***pppuVar1;
  code *pcVar2;
  undefined8 ***pppuVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  if (param_3 < 0x7ffffffffffffff8) {
    if (param_3 < 0x17) {
      uStack_48 = CONCAT17((char)param_3,(undefined7)uStack_48);
      pppuVar3 = &ppuStack_58;
      if (param_3 != 0) goto LAB_10acc6b38;
    }
    else {
      pppuVar1 = (undefined8 ***)0x19;
      if ((param_3 | 7) != 0x17) {
        pppuVar1 = (undefined8 ***)((param_3 | 7) + 1);
      }
      pppuVar3 = pppuVar1;
      __Znwm();
      uStack_48 = (ulong)pppuVar1 | 0x8000000000000000;
      ppuStack_58 = pppuVar3;
      uStack_50 = param_3;
LAB_10acc6b38:
      _memmove(pppuVar3,param_2,param_3);
    }
    *(undefined1 *)((long)pppuVar3 + param_3) = 0;
    param_1 = param_1 + 0x38;
    FUN_10a54a2c0(param_1,&ppuStack_58);
    if (param_1 != 0) {
      if (*(short *)(param_1 + 0x32) == 0xf) {
        lVar4 = *(long *)(param_1 + 0x58);
        if ((lVar4 != 0) &&
           (___dynamic_cast(lVar4,&PTR_DAT_110c6b678,&PTR_DAT_110c6be18,0), lVar4 != 0)) {
          unaff_x19 = lVar4 + 8;
          goto LAB_10acc6ba8;
        }
      }
      else if (*(short *)(param_1 + 0x32) == 4) {
        FUN_10a14efe0();
        goto LAB_10acc6bf0;
      }
      FUN_10a00946c(&UNK_10f681ac3);
LAB_10acc6bf0:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10acc6bf4);
      (*pcVar2)();
    }
    unaff_x20 = 0x1137ec878;
    unaff_x19 = 0x1137eca38;
    if ((bRam00000001137ec878 & 1) != 0) goto LAB_10acc6ba8;
  }
  else {
    func_0x000109ffde50();
  }
  lVar4 = unaff_x20;
  ___cxa_guard_acquire();
  if ((int)lVar4 != 0) {
    *(undefined8 *)(unaff_x20 + 0x1c0) = 0;
    *(undefined8 *)(unaff_x20 + 0x1c8) = 0;
    unaff_x19 = unaff_x20 + 0x1c0;
    *(undefined8 *)(unaff_x20 + 0x1d0) = 0;
    ___cxa_guard_release(unaff_x20);
  }
LAB_10acc6ba8:
  if ((long)uStack_48 < 0) {
    __ZdlPv(ppuStack_58);
  }
  return unaff_x19;
}



/* Entry: 10acc6c3c; end: 10acc6d0b;  */

undefined8 * FUN_10acc6c3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6bdf0;
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10acc6d0c; end: 10acc6d8f;  */

void FUN_10acc6d0c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_110c6bdf0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[1] = 0;
  FUN_10ab146f4();
  *param_1 = puVar1;
  return;
}



/* Entry: 10acc6d90; end: 10acc6ed3;  */

void FUN_10acc6d90(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 ***pppuVar3;
  long *plVar4;
  long lVar5;
  long alStack_78 [2];
  char cStack_61;
  undefined8 **ppuStack_60;
  ulong uStack_58;
  ulong uStack_50;
  
  func_0x000107c2b054(param_1,&DAT_10f62a9e8);
  lVar5 = *(long *)(param_2 + 8);
  lVar2 = *(long *)(param_2 + 0x10);
  if (lVar5 != lVar2) {
    do {
      FUN_10acc3bbc(alStack_78,lVar5);
      plVar4 = alStack_78;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (plVar4,&DAT_10f68f19e,2);
      uStack_58 = plVar4[1];
      ppuStack_60 = (undefined8 **)*plVar4;
      uStack_50 = plVar4[2];
      plVar4[1] = 0;
      plVar4[2] = 0;
      *plVar4 = 0;
      uVar1 = uStack_58;
      pppuVar3 = (undefined8 ***)ppuStack_60;
      if (-1 < (long)uStack_50) {
        uVar1 = uStack_50 >> 0x38;
        pppuVar3 = &ppuStack_60;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_1,pppuVar3,uVar1);
      if ((long)uStack_50 < 0) {
        __ZdlPv(ppuStack_60);
      }
      if (cStack_61 < '\0') {
        __ZdlPv(alStack_78[0]);
      }
      lVar5 = lVar5 + 0x24;
    } while (lVar5 != lVar2);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&DAT_10f62a9ea,1);
  return;
}



/* Entry: 10acc6ed4; end: 10acc7013;  */

void FUN_10acc6ed4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
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
  undefined1 *in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  ulong in_stack_ffffffffffffffb8;
  
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
  FUN_10acbdf4c(param_2,param_3);
  FUN_10a48f3fc(param_5);
  FUN_10a3f3f30(&stack0xffffffffffffffa8,param_2,param_4);
  puVar1 = in_stack_ffffffffffffffa8;
  if (-1 < (long)in_stack_ffffffffffffffb8) {
    in_stack_ffffffffffffffb0 = in_stack_ffffffffffffffb8 >> 0x38;
    puVar1 = &stack0xffffffffffffffa8;
  }
  FUN_10acc6ac8(plVar5,puVar1,in_stack_ffffffffffffffb0);
  if ((long)in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  FUN_10a36a46c(param_1,param_2,*plVar5,(plVar5[1] - *plVar5 >> 2) * -0x71c71c71c71c71c7);
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



/* Entry: 10acc7014; end: 10acc7187;  */

long FUN_10acc7014(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 ***pppuVar1;
  code *pcVar2;
  undefined8 ***pppuVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  if (param_3 < 0x7ffffffffffffff8) {
    if (param_3 < 0x17) {
      uStack_48 = CONCAT17((char)param_3,(undefined7)uStack_48);
      pppuVar3 = &ppuStack_58;
      if (param_3 != 0) goto LAB_10acc7084;
    }
    else {
      pppuVar1 = (undefined8 ***)0x19;
      if ((param_3 | 7) != 0x17) {
        pppuVar1 = (undefined8 ***)((param_3 | 7) + 1);
      }
      pppuVar3 = pppuVar1;
      __Znwm();
      uStack_48 = (ulong)pppuVar1 | 0x8000000000000000;
      ppuStack_58 = pppuVar3;
      uStack_50 = param_3;
LAB_10acc7084:
      _memmove(pppuVar3,param_2,param_3);
    }
    *(undefined1 *)((long)pppuVar3 + param_3) = 0;
    param_1 = param_1 + 0x38;
    FUN_10a54a2c0(param_1,&ppuStack_58);
    if (param_1 != 0) {
      if (*(short *)(param_1 + 0x32) == 0xf) {
        lVar4 = *(long *)(param_1 + 0x58);
        if ((lVar4 != 0) &&
           (___dynamic_cast(lVar4,&PTR_DAT_110c6b678,&PTR_DAT_110c6be68,0), lVar4 != 0)) {
          unaff_x19 = lVar4 + 8;
          goto LAB_10acc70f4;
        }
      }
      else if (*(short *)(param_1 + 0x32) == 4) {
        FUN_10a14efe0();
        goto LAB_10acc713c;
      }
      FUN_10a00946c(&UNK_10f681ac3);
LAB_10acc713c:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10acc7140);
      (*pcVar2)();
    }
    unaff_x20 = 0x1137ec880;
    unaff_x19 = 0x1137eca50;
    if ((bRam00000001137ec880 & 1) != 0) goto LAB_10acc70f4;
  }
  else {
    func_0x000109ffde50();
  }
  lVar4 = unaff_x20;
  ___cxa_guard_acquire();
  if ((int)lVar4 != 0) {
    *(undefined8 *)(unaff_x20 + 0x1d0) = 0;
    *(undefined8 *)(unaff_x20 + 0x1d8) = 0;
    unaff_x19 = unaff_x20 + 0x1d0;
    *(undefined8 *)(unaff_x20 + 0x1e0) = 0;
    ___cxa_guard_release(unaff_x20);
  }
LAB_10acc70f4:
  if ((long)uStack_48 < 0) {
    __ZdlPv(ppuStack_58);
  }
  return unaff_x19;
}



/* Entry: 10acc7188; end: 10acc7257;  */

undefined8 * FUN_10acc7188(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6be40;
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10acc7258; end: 10acc72c7;  */

void FUN_10acc7258(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_110c6be40;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[1] = 0;
  FUN_10a34e7c8();
  *param_1 = puVar1;
  return;
}



/* Entry: 10acc72c8; end: 10acc740b;  */

void FUN_10acc72c8(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 ***pppuVar3;
  long *plVar4;
  long lVar5;
  long alStack_78 [2];
  char cStack_61;
  undefined8 **ppuStack_60;
  ulong uStack_58;
  ulong uStack_50;
  
  func_0x000107c2b054(param_1,&DAT_10f62a9e8);
  lVar5 = *(long *)(param_2 + 8);
  lVar2 = *(long *)(param_2 + 0x10);
  if (lVar5 != lVar2) {
    do {
      FUN_10a700918(alStack_78,lVar5);
      plVar4 = alStack_78;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (plVar4,&DAT_10f68f19e,2);
      uStack_58 = plVar4[1];
      ppuStack_60 = (undefined8 **)*plVar4;
      uStack_50 = plVar4[2];
      plVar4[1] = 0;
      plVar4[2] = 0;
      *plVar4 = 0;
      uVar1 = uStack_58;
      pppuVar3 = (undefined8 ***)ppuStack_60;
      if (-1 < (long)uStack_50) {
        uVar1 = uStack_50 >> 0x38;
        pppuVar3 = &ppuStack_60;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_1,pppuVar3,uVar1);
      if ((long)uStack_50 < 0) {
        __ZdlPv(ppuStack_60);
      }
      if (cStack_61 < '\0') {
        __ZdlPv(alStack_78[0]);
      }
      lVar5 = lVar5 + 0x40;
    } while (lVar5 != lVar2);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&DAT_10f62a9ea,1);
  return;
}



/* Entry: 10acc740c; end: 10acc7537;  */

void FUN_10acc740c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
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
  undefined1 *in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  ulong in_stack_ffffffffffffffb8;
  
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
  FUN_10acbdf4c(param_2,param_3);
  FUN_10a48f3fc(param_5);
  FUN_10a3f3f30(&stack0xffffffffffffffa8,param_2,param_4);
  puVar1 = in_stack_ffffffffffffffa8;
  if (-1 < (long)in_stack_ffffffffffffffb8) {
    in_stack_ffffffffffffffb0 = in_stack_ffffffffffffffb8 >> 0x38;
    puVar1 = &stack0xffffffffffffffa8;
  }
  FUN_10acc7014(plVar5,puVar1,in_stack_ffffffffffffffb0);
  if ((long)in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  FUN_10a36a6a0(param_1,param_2,*plVar5,plVar5[1] - *plVar5 >> 6);
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



/* Entry: 10acc7538; end: 10acc76ab;  */

long FUN_10acc7538(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 ***pppuVar1;
  code *pcVar2;
  undefined8 ***pppuVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  if (param_3 < 0x7ffffffffffffff8) {
    if (param_3 < 0x17) {
      uStack_48 = CONCAT17((char)param_3,(undefined7)uStack_48);
      pppuVar3 = &ppuStack_58;
      if (param_3 != 0) goto LAB_10acc75a8;
    }
    else {
      pppuVar1 = (undefined8 ***)0x19;
      if ((param_3 | 7) != 0x17) {
        pppuVar1 = (undefined8 ***)((param_3 | 7) + 1);
      }
      pppuVar3 = pppuVar1;
      __Znwm();
      uStack_48 = (ulong)pppuVar1 | 0x8000000000000000;
      ppuStack_58 = pppuVar3;
      uStack_50 = param_3;
LAB_10acc75a8:
      _memmove(pppuVar3,param_2,param_3);
    }
    *(undefined1 *)((long)pppuVar3 + param_3) = 0;
    param_1 = param_1 + 0x38;
    FUN_10a54a2c0(param_1,&ppuStack_58);
    if (param_1 != 0) {
      if (*(short *)(param_1 + 0x32) == 0xf) {
        lVar4 = *(long *)(param_1 + 0x58);
        if ((lVar4 != 0) &&
           (___dynamic_cast(lVar4,&PTR_DAT_110c6b678,&PTR_DAT_110c6beb8,0), lVar4 != 0)) {
          unaff_x19 = lVar4 + 8;
          goto LAB_10acc7618;
        }
      }
      else if (*(short *)(param_1 + 0x32) == 4) {
        FUN_10a14efe0();
        goto LAB_10acc7660;
      }
      FUN_10a00946c(&UNK_10f681ac3);
LAB_10acc7660:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10acc7664);
      (*pcVar2)();
    }
    unaff_x20 = 0x1137ec888;
    unaff_x19 = 0x1137eca68;
    if ((bRam00000001137ec888 & 1) != 0) goto LAB_10acc7618;
  }
  else {
    func_0x000109ffde50();
  }
  lVar4 = unaff_x20;
  ___cxa_guard_acquire();
  if ((int)lVar4 != 0) {
    *(undefined8 *)(unaff_x20 + 0x1e0) = 0;
    *(undefined8 *)(unaff_x20 + 0x1e8) = 0;
    unaff_x19 = unaff_x20 + 0x1e0;
    *(undefined8 *)(unaff_x20 + 0x1f0) = 0;
    ___cxa_guard_release(unaff_x20);
  }
LAB_10acc7618:
  if ((long)uStack_48 < 0) {
    __ZdlPv(ppuStack_58);
  }
  return unaff_x19;
}



/* Entry: 10acc76ac; end: 10acc777b;  */

undefined8 * FUN_10acc76ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6be90;
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10acc777c; end: 10acc77eb;  */

void FUN_10acc777c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_110c6be90;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[1] = 0;
  FUN_10acc79c4();
  *param_1 = puVar1;
  return;
}



/* Entry: 10acc77ec; end: 10acc79c3;  */

void FUN_10acc77ec(undefined8 param_1,long param_2)

{
  undefined8 ***pppuVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long alStack_a8 [2];
  char cStack_91;
  undefined8 **ppuStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 **appuStack_78 [2];
  char cStack_61;
  
  func_0x000107c2b054(param_1,&DAT_10f62a9e8);
  lVar5 = *(long *)(param_2 + 8);
  lVar3 = *(long *)(param_2 + 0x10);
  if (lVar5 != lVar3) {
    do {
      FUN_10a700a54(appuStack_78,&UNK_10f6a1d3f);
      pppuVar1 = (undefined8 ***)appuStack_78[0];
      if (-1 < cStack_61) {
        pppuVar1 = appuStack_78;
      }
      FUN_10a700a54(alStack_a8,pppuVar1);
      if (cStack_61 < '\0') {
        __ZdlPv(appuStack_78[0]);
      }
      plVar4 = alStack_a8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (plVar4,&DAT_10f68f19e,2);
      uStack_88 = plVar4[1];
      ppuStack_90 = (undefined8 **)*plVar4;
      uStack_80 = plVar4[2];
      plVar4[1] = 0;
      plVar4[2] = 0;
      *plVar4 = 0;
      uVar2 = uStack_88;
      pppuVar1 = (undefined8 ***)ppuStack_90;
      if (-1 < (long)uStack_80) {
        uVar2 = uStack_80 >> 0x38;
        pppuVar1 = &ppuStack_90;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_1,pppuVar1,uVar2);
      if ((long)uStack_80 < 0) {
        __ZdlPv(ppuStack_90);
      }
      if (cStack_91 < '\0') {
        __ZdlPv(alStack_a8[0]);
      }
      lVar5 = lVar5 + 0x10;
    } while (lVar5 != lVar3);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&DAT_10f62a9ea,1);
  return;
}



/* Entry: 10acc79c4; end: 10acc7a3b;  */

void FUN_10acc79c4(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a494f08(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 10acc7a3c; end: 10acc7b67;  */

void FUN_10acc7a3c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
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
  undefined1 *in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  ulong in_stack_ffffffffffffffb8;
  
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
  FUN_10acbdf4c(param_2,param_3);
  FUN_10a48f3fc(param_5);
  FUN_10a3f3f30(&stack0xffffffffffffffa8,param_2,param_4);
  puVar1 = in_stack_ffffffffffffffa8;
  if (-1 < (long)in_stack_ffffffffffffffb8) {
    in_stack_ffffffffffffffb0 = in_stack_ffffffffffffffb8 >> 0x38;
    puVar1 = &stack0xffffffffffffffa8;
  }
  FUN_10acc7538(plVar5,puVar1,in_stack_ffffffffffffffb0);
  if ((long)in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  FUN_10a494f98(param_1,param_2,*plVar5,plVar5[1] - *plVar5 >> 4);
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



/* Entry: 10acc7b68; end: 10acc7c63;  */

/* WARNING: Removing unreachable block (ram,0x00010acc8044) */
/* WARNING: Removing unreachable block (ram,0x00010acc8254) */

void FUN_10acc7b68(ulong *param_1,ulong param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *******pppppppuVar2;
  char cVar3;
  bool bVar4;
  undefined8 *******pppppppuVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *******pppppppuVar12;
  long *plVar13;
  ulong uVar14;
  undefined4 *extraout_x8;
  undefined8 *puVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  long *plVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  long *plVar25;
  long *plVar26;
  undefined8 ******ppppppuStack_1b8;
  long *plStack_1b0;
  byte bStack_1a1;
  long *plStack_1a0;
  long *plStack_198;
  undefined8 ******ppppppuStack_190;
  long *plStack_188;
  int aiStack_180 [2];
  undefined8 *puStack_178;
  undefined8 ******ppppppuStack_170;
  ulong uStack_168;
  byte bStack_159;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  long alStack_118 [3];
  long *plStack_100;
  long *plStack_f8;
  long lStack_f0;
  undefined8 ******ppppppuStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  long lStack_c0;
  long *plStack_b8;
  
  plVar11 = (long *)param_1[1];
  if (param_2 <= param_1[2] - (long)plVar11) {
    plVar8 = plVar11;
    if (param_2 != 0) {
      plVar8 = (long *)((long)plVar11 + param_2);
      _bzero(plVar11,param_2);
    }
    param_1[1] = (ulong)plVar8;
    return;
  }
  uVar20 = *param_1;
  lVar21 = (long)plVar11 - uVar20;
  uVar23 = lVar21 + param_2;
  if (-1 < (long)uVar23) {
    uVar14 = param_1[2] - uVar20;
    uVar18 = uVar14 * 2;
    if (uVar18 < uVar23 || uVar18 - uVar23 == 0) {
      uVar18 = uVar23;
    }
    if (0x3ffffffffffffffe < uVar14) {
      uVar18 = 0x7fffffffffffffff;
    }
    if (uVar18 == 0) {
      uVar23 = 0;
    }
    else {
      uVar23 = uVar18;
      __Znwm();
    }
    _bzero(uVar23 + lVar21,param_2);
    _memcpy(uVar23,uVar20,lVar21);
    *param_1 = uVar23;
    param_1[1] = uVar23 + lVar21 + param_2;
    param_1[2] = uVar23 + uVar18;
    if (uVar20 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(uVar20);
    return;
  }
  FUN_10acbebb4();
  plVar8 = plVar11;
  (**(code **)(*plVar11 + 0x58))();
  if ((ulong)plVar8[0x59] < 8) {
    plVar8[plVar8[0x59] + 0x4e] = plVar8[0x5a];
    plVar8[0x59] = plVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar8 + 0x4b);
  }
  plVar9 = plVar11;
  FUN_10acc8580(plVar11,param_2);
  FUN_10acc85e8(param_4);
  func_0x000109898570(&ppppppuStack_1b8,plVar11,param_3);
  func_0x0001098849a4(aiStack_180,plVar11,param_3 + 0x10);
  plStack_198 = (long *)0x0;
  plStack_1a0 = (long *)0x0;
  plStack_188 = (long *)0x0;
  ppppppuStack_190 = (undefined8 *******)0x0;
  if (aiStack_180[0] == 7) {
    plVar10 = plVar11;
    (**(code **)(*plVar11 + 0x98))(plVar11,puStack_178);
    plVar25 = plVar11;
    plStack_100 = plVar10;
    (**(code **)(*plVar11 + 0x58))(plVar11);
    func_0x000109899ccc();
    plVar10 = plVar11;
    (**(code **)(*plVar11 + 0x2e8))(plVar11,&plStack_100,plVar25);
    if ((int)plVar10 != 0) {
      plVar25 = plVar11;
      plVar13 = plStack_100;
      FUN_10acbe9b8();
      plStack_1a0 = plVar25;
      plStack_198 = plVar13;
      FUN_10a12c3a8(&ppppppuStack_e0,alStack_118,aiStack_180);
      plVar13 = plStack_d8;
      ppppppuStack_190 = ppppppuStack_e0;
      plVar25 = plStack_188;
      ppppppuStack_e0 = (undefined8 *******)0x0;
      plStack_d8 = (long *)0x0;
      plStack_188 = plVar13;
      if (plVar25 != (long *)0x0) {
        plVar13 = plVar25 + 1;
        do {
          lVar21 = *plVar13;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = lVar21 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar21 == 0) {
          (**(code **)(*plVar25 + 0x10))(plVar25);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
        }
      }
      plVar25 = plStack_d8;
      if (plStack_d8 != (long *)0x0) {
        plVar13 = plStack_d8 + 1;
        do {
          lVar21 = *plVar13;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = lVar21 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar21 == 0) {
          (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
        }
      }
    }
    if (plStack_100 != (long *)0x0) {
      (**(code **)*plStack_100)();
    }
    if (((ulong)plVar10 & 1) != 0) {
      if ((3 < aiStack_180[0]) && (puStack_178 != (undefined8 *)0x0)) {
        (**(code **)*puStack_178)();
      }
      plVar11 = (long *)0x38;
      __Znwm();
      plVar11[4] = (long)plStack_198;
      plVar11[3] = (long)plStack_1a0;
      plVar10 = plVar11 + 1;
      *plVar10 = 0;
      plVar11[2] = 0;
      *plVar11 = (long)&PTR_FUN_110c6b700;
      plVar11[6] = (long)plStack_188;
      plVar11[5] = (long)ppppppuStack_190;
      plStack_100 = (long *)0x0;
      plStack_f8 = (long *)0x0;
      lStack_f0 = 0;
      if (plVar11[4] == 0) {
        lVar21 = 0;
      }
      else {
        FUN_10acc7b68(&plStack_100);
        lVar21 = plVar11[4];
      }
      plVar25 = plStack_f8;
      _memcpy(plStack_100,plVar11[3],lVar21);
      if ((char)plVar9[0xc] == '\x01') {
        FUN_10a00946c(&UNK_10f6a1d58);
        goto LAB_10acc83a8;
      }
      plVar13 = plStack_1b0;
      pppppppuVar5 = (undefined8 *******)ppppppuStack_1b8;
      if (-1 < (char)bStack_1a1) {
        plVar13 = (long *)(ulong)bStack_1a1;
        pppppppuVar5 = &ppppppuStack_1b8;
      }
      if ((long *)0x7ffffffffffffff7 < plVar13) {
        func_0x000109ffde50();
        goto LAB_10acc83a8;
      }
      if (plVar13 < (long *)0x17) {
        uStack_d0 = (long *)CONCAT17((char)plVar13,(undefined7)uStack_d0);
        pppppppuVar12 = &ppppppuStack_e0;
        if (plVar13 != (long *)0x0) goto LAB_10acc7f34;
      }
      else {
        pppppppuVar2 = (undefined8 *******)0x19;
        if (((ulong)plVar13 | 7) != 0x17) {
          pppppppuVar2 = (undefined8 *******)(((ulong)plVar13 | 7) + 1);
        }
        pppppppuVar12 = pppppppuVar2;
        __Znwm();
        uStack_d0 = (long *)((ulong)pppppppuVar2 | 0x8000000000000000);
        ppppppuStack_e0 = pppppppuVar12;
        plStack_d8 = plVar13;
LAB_10acc7f34:
        _memmove(pppppppuVar12,pppppppuVar5,plVar13);
      }
      *(undefined1 *)((long)pppppppuVar12 + (long)plVar13) = 0;
      FUN_10ac9e388(plVar9,&ppppppuStack_e0,0);
      plVar13 = plVar9 + 7;
      plVar17 = plVar13;
      func_0x000107c2b05c(plVar13,&ppppppuStack_e0);
      plVar19 = (long *)plVar9[8];
      if (plVar19 != (long *)0x0) {
        uVar23 = (long)plVar19 - 1;
        if (((ulong)plVar19 & uVar23) == 0) {
          plVar25 = (long *)(uVar23 & (ulong)plVar17);
        }
        else {
          plVar25 = plVar17;
          if (plVar19 <= plVar17) {
            uVar20 = 0;
            if (plVar19 != (long *)0x0) {
              uVar20 = (ulong)plVar17 / (ulong)plVar19;
            }
            plVar25 = (long *)((long)plVar17 - uVar20 * (long)plVar19);
          }
        }
        puVar15 = *(undefined8 **)(*plVar13 + (long)plVar25 * 8);
        if (puVar15 != (undefined8 *)0x0) {
          for (plVar26 = (long *)*puVar15; plVar26 != (long *)0x0; plVar26 = (long *)*plVar26) {
            plVar16 = (long *)plVar26[1];
            if (plVar16 == plVar17) {
              plVar16 = plVar13;
              func_0x000107c2b068(plVar13,plVar26 + 2,&ppppppuStack_e0);
              if (((ulong)plVar16 & 1) != 0) goto LAB_10acc81d4;
            }
            else {
              if (((ulong)plVar19 & uVar23) == 0) {
                plVar16 = (long *)((ulong)plVar16 & uVar23);
              }
              else if (plVar19 <= plVar16) {
                uVar20 = 0;
                if (plVar19 != (long *)0x0) {
                  uVar20 = (ulong)plVar16 / (ulong)plVar19;
                }
                plVar16 = (long *)((long)plVar16 - uVar20 * (long)plVar19);
              }
              if (plVar16 != plVar25) break;
            }
          }
        }
      }
      plVar26 = (long *)0x60;
      __Znwm();
      ppppppuStack_190 = (undefined8 ******)0x0;
      *plVar26 = 0;
      plVar26[1] = (long)plVar17;
      plVar26[3] = (long)plStack_d8;
      plVar26[2] = (long)ppppppuStack_e0;
      plVar26[4] = (long)uStack_d0;
      plVar26[9] = 0;
      plVar26[8] = 0;
      *(undefined1 *)(plVar26 + 6) = 0;
      plVar26[5] = (long)&PTR_FUN_110c6c2d0;
      *(undefined2 *)((long)plVar26 + 0x32) = 0xf;
      plVar26[0xb] = 0;
      plVar26[10] = 0;
      puVar15 = (undefined8 *)0x20;
      plStack_1a0 = plVar26;
      plStack_198 = plVar13;
      __Znwm();
      *puVar15 = &PTR_FUN_110c6b6b0;
      puVar15[2] = 0;
      puVar15[3] = 0;
      puVar15[1] = 0;
      FUN_10acbeb18();
      plVar16 = (long *)plVar26[0xb];
      plVar26[0xb] = (long)puVar15;
      if (plVar16 != (long *)0x0) {
        (**(code **)(*plVar16 + 8))();
      }
      ppppppuStack_190 = (undefined8 ******)CONCAT71(ppppppuStack_190._1_7_,1);
      if ((plVar19 == (long *)0x0) ||
         (*(float *)(plVar9 + 0xb) * (float)plVar19 < (float)(plVar9[10] + 1))) {
        uVar23 = 1;
        if ((long *)0x2 < plVar19) {
          uVar23 = (ulong)(((ulong)plVar19 & (long)plVar19 - 1U) != 0);
        }
        uVar23 = uVar23 | (long)plVar19 << 1;
        uVar20 = (ulong)((float)(plVar9[10] + 1) / *(float *)(plVar9 + 0xb));
        if (uVar23 <= uVar20) {
          uVar23 = uVar20;
        }
        FUN_10a4ba824(plVar13,uVar23);
        plVar19 = (long *)plVar9[8];
        if (((ulong)plVar19 & (long)plVar19 - 1U) == 0) {
          plVar25 = (long *)((long)plVar19 - 1U & (ulong)plVar17);
        }
        else {
          plVar25 = plVar17;
          if (plVar19 <= plVar17) {
            uVar23 = 0;
            if (plVar19 != (long *)0x0) {
              uVar23 = (ulong)plVar17 / (ulong)plVar19;
            }
            plVar25 = (long *)((long)plVar17 - uVar23 * (long)plVar19);
          }
        }
      }
      lVar21 = *plVar13;
      plVar17 = *(long **)(lVar21 + (long)plVar25 * 8);
      if (plVar17 == (long *)0x0) {
        plVar17 = plVar9 + 9;
        *plStack_1a0 = *plVar17;
        *plVar17 = (long)plStack_1a0;
        *(long **)(lVar21 + (long)plVar25 * 8) = plVar17;
        if (*plStack_1a0 != 0) {
          plVar25 = *(long **)(*plStack_1a0 + 8);
          if (((ulong)plVar19 & (long)plVar19 - 1U) == 0) {
            plVar25 = (long *)((ulong)plVar25 & (long)plVar19 - 1U);
          }
          else if (plVar19 <= plVar25) {
            uVar23 = 0;
            if (plVar19 != (long *)0x0) {
              uVar23 = (ulong)plVar25 / (ulong)plVar19;
            }
            plVar25 = (long *)((long)plVar25 - uVar23 * (long)plVar19);
          }
          *(long **)(*plVar13 + (long)plVar25 * 8) = plStack_1a0;
        }
      }
      else {
        *plStack_1a0 = *plVar17;
        *plVar17 = (long)plStack_1a0;
      }
      plVar9[10] = plVar9[10] + 1;
      plVar26 = plStack_1a0;
LAB_10acc81d4:
      func_0x00010a5499ec(plVar9,1,plVar26 + 5,&ppppppuStack_e0);
      if (*(char *)(plVar9[0x11] + 8) == '\x01') {
        FUN_10a54a030(&plStack_1a0,plVar9 + 5);
        FUN_10a549a74(plVar9 + 0x10,&plStack_1a0,&ppppppuStack_e0);
        plVar9 = plStack_198;
        if (plStack_198 != (long *)0x0) {
          plVar25 = plStack_198 + 1;
          do {
            lVar21 = *plVar25;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar25,0x10);
            if (bVar4) {
              *plVar25 = lVar21 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar21 == 0) {
            (**(code **)(*plStack_198 + 0x10))(plStack_198);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          }
        }
      }
      if (plStack_100 != (long *)0x0) {
        __ZdlPv();
      }
      do {
        lVar21 = *plVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar21 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar21 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
      if ((char)bStack_1a1 < '\0') {
        __ZdlPv(ppppppuStack_1b8);
      }
      *extraout_x8 = 0;
      plVar11 = plVar8 + 0x4b;
      lVar21 = plVar8[0x59];
      uVar23 = lVar21 - 1;
      plVar8[0x59] = uVar23;
      if (uVar23 < 8) {
        uVar23 = plVar11[lVar21 + 2];
        if (plVar8[0x5a] == uVar23) {
          return;
        }
      }
      else {
        uVar23 = *(ulong *)(plVar8[0x57] + -8);
        plVar8[0x57] = plVar8[0x57] + -8;
        if (plVar8[0x5a] == uVar23) {
          return;
        }
      }
      plVar9 = (long *)*plVar11;
      plVar10 = (long *)plVar8[0x4c];
      lVar21 = (long)plVar10 - (long)plVar9;
      uVar20 = lVar21 >> 4;
      if (uVar20 < uVar23) {
        uVar18 = uVar23 - uVar20;
        lVar24 = plVar8[0x4d];
        if ((ulong)(lVar24 - (long)plVar10 >> 4) < uVar18) {
          if (uVar23 >> 0x3c == 0) {
            uVar14 = lVar24 - (long)plVar9 >> 3;
            if (uVar14 <= uVar23) {
              uVar14 = uVar23;
            }
            if (0x7fffffffffffffef < (ulong)(lVar24 - (long)plVar9)) {
              uVar14 = 0xfffffffffffffff;
            }
            plStack_b8 = plVar11;
            if (uVar14 >> 0x3c == 0) {
              lVar7 = uVar14 << 4;
              __Znwm();
              lVar1 = lVar7 + lVar21;
              _bzero(lVar1,uVar18 * 0x10);
              lVar22 = lVar1 + uVar20 * -0x10;
              _memcpy(lVar22,plVar9,lVar21);
              *plVar11 = lVar22;
              plVar8[0x4c] = lVar1 + uVar18 * 0x10;
              plVar8[0x4d] = lVar7 + uVar14 * 0x10;
              plStack_d8 = plVar9;
              uStack_d0 = plVar9;
              plStack_c8 = plVar9;
              lStack_c0 = lVar24;
              func_0x00010988c1b8(&plStack_d8);
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
        _bzero(plVar10,uVar18 * 0x10);
        plVar8[0x4c] = (long)(plVar10 + uVar18 * 2);
      }
      else if (uVar23 < uVar20) {
        while (plVar10 != plVar9 + uVar23 * 2) {
          plVar10 = plVar10 + -2;
          func_0x00010988c204(plVar10);
        }
        plVar8[0x4c] = (long)(plVar9 + uVar23 * 2);
      }
code_r0x00010988c138:
      plVar8[0x5a] = uVar23;
      return;
    }
  }
  puStack_158 = &DAT_10f58255b;
  uStack_150 = 9;
  func_0x0001098998d4(auStack_148,&puStack_158);
  FUN_109feb280(auStack_130,&UNK_10f493d5b,auStack_148);
  FUN_10a012db0(alStack_118,auStack_130,&UNK_10f582552);
  func_0x000109899970(&ppppppuStack_170,plVar11,aiStack_180);
  if (-1 < (char)bStack_159) {
    uStack_168 = (ulong)bStack_159;
    ppppppuStack_170 = &ppppppuStack_170;
  }
  plVar11 = alStack_118;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (plVar11,ppppppuStack_170,uStack_168);
  plStack_f8 = (long *)plVar11[1];
  plStack_100 = (long *)*plVar11;
  lStack_f0 = plVar11[2];
  plVar11[1] = 0;
  plVar11[2] = 0;
  *plVar11 = 0;
  FUN_10a012db0(&ppppppuStack_e0,&plStack_100,&DAT_10f638984);
  func_0x00010989842c(&ppppppuStack_e0);
LAB_10acc83a8:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10acc83ac);
  (*pcVar6)();
}


