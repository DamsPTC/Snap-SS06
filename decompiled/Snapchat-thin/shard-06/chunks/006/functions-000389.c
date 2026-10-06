/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104a86a48; end: 104a86ac3;  */

void FUN_104a86a48(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_d8 [144];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010047c654(auStack_d8);
  uStack_40 = *(undefined8 *)(param_3 + 0x98);
  uStack_48 = *(undefined8 *)(param_3 + 0x90);
  uStack_30 = *(undefined8 *)(param_3 + 0xa8);
  uStack_38 = *(undefined8 *)(param_3 + 0xa0);
  *(undefined8 *)(param_3 + 0xa0) = 0;
  *(undefined8 *)(param_3 + 0xa8) = 0;
  uStack_28 = *(undefined8 *)(param_3 + 0xb0);
  *(undefined8 *)(param_3 + 0xb0) = 0;
  FUN_104a866e0(param_1,auStack_d8,FUN_104aa8adc);
  func_0x0001004c0530(auStack_d8);
  return;
}



/* Entry: 104a86ac4; end: 104a86aef;  */

ulong * FUN_104a86ac4(ulong *param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong *puVar3;
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [8];
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  puVar2 = &DAT_10f3df6e2;
  func_0x000107c613d0();
  if ((undefined *)0x7ffffffffffffff7 < puVar2) {
    func_0x000104a6fa5c(param_1);
    puStack_48 = &UNK_10002b0d4;
    puVar3 = (ulong *)0x2947bdebdbc7a448;
    puStack_50 = &stack0xfffffffffffffff0;
    func_0x00010002b140(0x2947bdebdbc7a448,auStack_5c,auStack_58);
    return puVar3;
  }
  if (puVar2 < (undefined *)0x17) {
    *(char *)((long)param_1 + 0x17) = (char)puVar2;
    puVar3 = param_1;
    if (puVar2 == (undefined *)0x0) goto code_r0x00010002b0b0;
  }
  else {
    uVar1 = ((ulong)puVar2 & 0xfffffffffffffff8) + 8;
    if (((ulong)puVar2 | 7) != 0x17) {
      uVar1 = (ulong)puVar2 | 7;
    }
    puVar3 = (ulong *)(uVar1 + 1);
    func_0x000107c60e20();
    param_1[1] = (ulong)puVar2;
    param_1[2] = uVar1 + 1 | 0x8000000000000000;
    *param_1 = (ulong)puVar3;
  }
  func_0x000107c610b8(puVar3,&DAT_10f3df6e2,puVar2);
code_r0x00010002b0b0:
  *(undefined1 *)((long)puVar3 + (long)puVar2) = 0;
  return param_1;
}



/* Entry: 104a86af0; end: 104a86b6b;  */

void FUN_104a86af0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_d8 [144];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010047c654(auStack_d8);
  uStack_40 = *(undefined8 *)(param_3 + 0x98);
  uStack_48 = *(undefined8 *)(param_3 + 0x90);
  uStack_30 = *(undefined8 *)(param_3 + 0xa8);
  uStack_38 = *(undefined8 *)(param_3 + 0xa0);
  *(undefined8 *)(param_3 + 0xa0) = 0;
  *(undefined8 *)(param_3 + 0xa8) = 0;
  uStack_28 = *(undefined8 *)(param_3 + 0xb0);
  *(undefined8 *)(param_3 + 0xb0) = 0;
  FUN_104a866e0(param_1,auStack_d8,FUN_104aa8df4);
  func_0x0001004c0530(auStack_d8);
  return;
}



/* Entry: 104a86b6c; end: 104a86b7b;  */

ulong * FUN_104a86b6c(ulong *param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong *puVar3;
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [8];
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  puVar2 = &DAT_10f3df6e2;
  func_0x000107c613d0();
  if ((undefined *)0x7ffffffffffffff7 < puVar2) {
    func_0x000104a6fa5c(param_1);
    puStack_48 = &UNK_10002b0d4;
    puVar3 = (ulong *)0x2947bdebdbc7a448;
    puStack_50 = &stack0xfffffffffffffff0;
    func_0x00010002b140(0x2947bdebdbc7a448,auStack_5c,auStack_58);
    return puVar3;
  }
  if (puVar2 < (undefined *)0x17) {
    *(char *)((long)param_1 + 0x17) = (char)puVar2;
    puVar3 = param_1;
    if (puVar2 == (undefined *)0x0) goto code_r0x00010002b0b0;
  }
  else {
    uVar1 = ((ulong)puVar2 & 0xfffffffffffffff8) + 8;
    if (((ulong)puVar2 | 7) != 0x17) {
      uVar1 = (ulong)puVar2 | 7;
    }
    puVar3 = (ulong *)(uVar1 + 1);
    func_0x000107c60e20();
    param_1[1] = (ulong)puVar2;
    param_1[2] = uVar1 + 1 | 0x8000000000000000;
    *param_1 = (ulong)puVar3;
  }
  func_0x000107c610b8(puVar3,&DAT_10f3df6e2,puVar2);
code_r0x00010002b0b0:
  *(undefined1 *)((long)puVar3 + (long)puVar2) = 0;
  return param_1;
}



/* Entry: 104a86b7c; end: 104a86e7b;  */

void FUN_104a86b7c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  ulong *param_5)

{
  long lVar1;
  ulong *puVar2;
  code *pcVar3;
  ulong **ppuVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ushort uVar8;
  long lVar9;
  short sVar10;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_91;
  ulong *puStack_90;
  long lStack_88;
  ulong *puStack_80;
  ulong *puStack_78;
  ulong **ppuStack_70;
  ulong **ppuStack_68;
  ulong **ppuStack_60;
  ulong **ppuStack_58;
  ulong **ppuStack_50;
  ulong uStack_48;
  
  lStack_88 = 0;
  puStack_80 = (ulong *)0x0;
  puStack_78 = (ulong *)0x0;
  func_0x00010002b024(&ppuStack_70,"waitForReady");
  lVar1 = param_4 + 0x20;
  lVar9 = lVar1;
  func_0x000100484044(lVar1,&ppuStack_70);
  if ((long)ppuStack_60 < 0) {
    __ZdlPv(ppuStack_70);
  }
  if (param_4 + 0x28 == lVar9) {
LAB_104a86d0c:
    uVar8 = 0;
    sVar10 = 0;
  }
  else {
    if (*(int *)(lVar9 + 0x38) == 1) {
      uVar8 = 1;
    }
    else {
      if (*(int *)(lVar9 + 0x38) != 2) {
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_b0 = 0;
        FUN_104ab5920(&puStack_90,2,"field:waitForReady error:Type should be true/false",0x32,
                      &uStack_91,&uStack_b0);
        if (puStack_80 < puStack_78) {
          *puStack_80 = (ulong)puStack_90;
          puStack_90 = (ulong *)0x36;
          puStack_80 = puStack_80 + 1;
        }
        else {
          lVar9 = (long)puStack_80 - lStack_88 >> 3;
          uVar7 = lVar9 + 1;
          if (uVar7 >> 0x3d != 0) {
            FUN_104a83ee4(&lStack_88);
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x104a86dec);
            (*pcVar3)();
          }
          ppuVar4 = &puStack_78;
          uVar5 = (long)puStack_78 - lStack_88 >> 2;
          if (uVar5 <= uVar7) {
            uVar5 = uVar7;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)puStack_78 - lStack_88)) {
            uVar5 = 0x1fffffffffffffff;
          }
          ppuStack_50 = ppuVar4;
          if (uVar5 == 0) {
            ppuStack_70 = (ulong **)0x0;
          }
          else {
            FUN_104a83ef8();
            ppuStack_70 = ppuVar4;
          }
          ppuStack_68 = ppuStack_70 + lVar9;
          ppuStack_58 = ppuStack_70 + uVar5;
          ppuVar4 = ppuStack_68 + 1;
          *ppuStack_68 = puStack_90;
          puStack_90 = (ulong *)0x36;
          ppuStack_60 = ppuVar4;
          FUN_104a83e70(&lStack_88,&ppuStack_70);
          puVar2 = puStack_80;
          FUN_104a84040(&ppuStack_70);
          puStack_80 = puVar2;
          if (((ulong)puStack_90 & 1) != 0) {
            func_0x00010084dad0();
          }
        }
        ppuStack_70 = (ulong **)&uStack_b0;
        func_0x000100482b64(&ppuStack_70);
        goto LAB_104a86d0c;
      }
      uVar8 = 0;
    }
    sVar10 = 1;
  }
  ppuStack_70 = (ulong **)0x0;
  FUN_104ac973c(lVar1,"timeout",7,&ppuStack_70,&lStack_88,0);
  func_0x0001004840d0(&uStack_48,&puStack_90,"Client channel parser",0x15,&lStack_88);
  uVar7 = uStack_48;
  uVar5 = *param_5;
  if (uStack_48 != uVar5) {
    *param_5 = uStack_48;
    uStack_48 = 0x36;
    if ((uVar5 & 1) == 0) goto LAB_104a86d88;
    func_0x00010084dad0();
    uVar5 = uStack_48;
  }
  if ((uVar5 & 1) != 0) {
    func_0x00010084dad0();
  }
  uVar7 = *param_5;
LAB_104a86d88:
  if (uVar7 == 0) {
    puVar6 = (undefined8 *)0x18;
    __Znwm();
    *puVar6 = &PTR_FUN_1107c2f18;
    puVar6[1] = ppuStack_70;
    *(ushort *)(puVar6 + 2) = uVar8 | sVar10 << 8;
  }
  else {
    puVar6 = (undefined8 *)0x0;
  }
  *param_1 = puVar6;
  ppuStack_70 = (ulong **)&lStack_88;
  func_0x000100482b64(&ppuStack_70);
  return;
}



/* Entry: 104a86e7c; end: 104a86e83;  */

void FUN_104a86e7c(void)

{
  return;
}



/* Entry: 104a86e84; end: 104a8708f;  */

undefined8 * FUN_104a86e84(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 3) == '\0') {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000100033dac(param_1,*param_2,param_2[1]);
    }
    else {
      uVar2 = param_2[1];
      uVar1 = *param_2;
      param_1[2] = param_2[2];
      param_1[1] = uVar2;
      *param_1 = uVar1;
    }
    *(undefined1 *)(param_1 + 3) = 1;
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1);
  }
  return param_1;
}



/* Entry: 104a87090; end: 104a8709b;  */

void FUN_104a87090(void)

{
  return;
}



/* Entry: 104a8709c; end: 104a8726b;  */

void FUN_104a8709c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  lVar9 = *(long *)(param_1 + 0x10);
  puVar8 = *(undefined8 **)(lVar9 + 0x1b8);
  *(undefined8 *)(lVar9 + 0x1b8) = 0;
  func_0x000104a87358(lVar9);
  plVar5 = *(long **)(lVar9 + 0x168);
  if ((long *)0x1 < plVar5) {
    do {
      lVar7 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plVar5[1])();
    }
  }
  lVar7 = 0;
  do {
    if (*(long *)(lVar9 + 0x1d8 + lVar7) != 0) {
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/retry_filter.cc"
                          ,0x89a,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x104a87210);
      (*pcVar4)();
    }
    lVar7 = lVar7 + 0x10;
  } while (lVar7 != 0x60);
  func_0x0001004e2bc8(lVar9 + 0x4f8);
  if ((*(byte *)(lVar9 + 0x4b8) & 1) != 0) {
    __ZdlPv(*(undefined8 *)(lVar9 + 0x4c0));
  }
  func_0x0001004e2bc8(lVar9 + 0x2a0);
  puVar6 = *(undefined8 **)(lVar9 + 0x1c8);
  *(undefined8 *)(lVar9 + 0x1c8) = 0;
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)();
  }
  plVar5 = *(long **)(lVar9 + 0x1c0);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  puVar6 = *(undefined8 **)(lVar9 + 0x1b8);
  if (puVar6 != (undefined8 *)0x0) {
    plVar5 = puVar6 + 1;
    do {
      lVar7 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)*puVar6)();
    }
  }
  if ((*(ulong *)(lVar9 + 0x1b0) & 1) != 0) {
    func_0x00010084dad0();
  }
  plVar5 = *(long **)(lVar9 + 0x10);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar9 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  puVar8[2] = param_3;
  plVar5 = puVar8 + 1;
  do {
    lVar9 = *plVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar9 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar9 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000104a8722c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar8)(puVar8);
  return;
}



/* Entry: 104a8726c; end: 104a872a3;  */

void FUN_104a8726c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(*(long *)(param_1 + 8) + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x000104a8729c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 104a872a4; end: 104a873d7;  */

/* WARNING: Possible PIC construction at 0x000104a872fc: Changing call to branch */

void FUN_104a872a4(long param_1,long param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long unaff_x19;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  ulong uVar5;
  undefined8 unaff_x21;
  long *plVar6;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  if (((*(byte *)(param_1 + 0x238) >> 3 & 1) != 0) ||
     (*(byte *)(param_1 + 0x238) = *(byte *)(param_1 + 0x238) | 8, param_2 == 0)) {
    return;
  }
  if (*(char *)(param_2 + 0x30) != '\0') {
    (**(code **)(*(long *)(*(long *)(*(long *)(param_1 + 0x1a8) + 0x40) + 0x28) + 0x18))();
  }
  if ((*(ushort *)(param_2 + 0xb50) >> 1 & 1) == 0) {
    if (*(long *)(param_2 + 0xb38) != 0) {
      uVar5 = 0;
      do {
        FUN_104a87490(*(undefined8 *)(param_2 + 0x10),uVar5);
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(ulong *)(param_2 + 0xb38));
    }
    if ((*(ushort *)(param_2 + 0xb50) >> 3 & 1) == 0) {
      return;
    }
    lVar3 = *(long *)(param_2 + 0x10);
    func_0x00010083228c(lVar3 + 0x4f8);
    lVar3 = lVar3 + 0x6e8;
  }
  else {
    unaff_x20 = *(long *)(param_2 + 0x10);
    func_0x00010083228c(unaff_x20 + 0x2a0);
    lVar3 = unaff_x20 + 0x490;
    unaff_x30 = 0x104a87300;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x19 = param_2;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  plVar6 = *(long **)(lVar3 + 8);
  if (plVar6 == (long *)0x0) {
    uVar2 = 0;
  }
  else {
    do {
      if (plVar6[1] == 0) break;
      uVar5 = 0;
      plVar4 = plVar6 + 6;
      do {
        func_0x0001004b6d90(plVar4);
        func_0x0001004b6d90(plVar4 + -4);
        uVar5 = uVar5 + 1;
        plVar4 = plVar4 + 8;
      } while (uVar5 < (ulong)plVar6[1]);
      plVar6[1] = 0;
      plVar6 = (long *)*plVar6;
    } while (plVar6 != (long *)0x0);
    uVar2 = *(undefined8 *)(lVar3 + 8);
  }
  *(undefined8 *)(lVar3 + 0x10) = uVar2;
  return;
}



/* Entry: 104a873d8; end: 104a8741b;  */

long * FUN_104a873d8(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = *param_2;
  *param_2 = 0;
  puVar1 = (undefined8 *)*param_1;
  *param_1 = lVar2;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
  return param_1;
}



/* Entry: 104a8741c; end: 104a8748f;  */

void FUN_104a8741c(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  ulong uStack_28;
  
  lVar3 = *(long *)(param_1 + 0x18);
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
  FUN_104adfc18(param_1,&uStack_28,*(undefined8 *)(lVar3 + 0x1a0));
  if ((uStack_28 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104a87490; end: 104a874c7;  */

void FUN_104a87490(long param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x4c0);
  if ((*(byte *)(param_1 + 0x4b8) & 1) != 0) {
    puVar1 = (undefined8 *)*puVar1;
  }
  if (puVar1[param_2 * 2] != 0) {
    puVar1[param_2 * 2] = 0;
    func_0x0001008301a4();
  }
  return;
}



/* Entry: 104a874c8; end: 104a874fb;  */

long * FUN_104a874c8(long *param_1)

{
  if (*param_1 != 0) {
    FUN_104a874fc(param_1);
  }
  return param_1;
}



/* Entry: 104a874fc; end: 104a87587;  */

void FUN_104a874fc(ulong *param_1)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  puVar3 = param_1 + 1;
  uVar1 = *param_1;
  puVar2 = puVar3;
  if ((uVar1 & 1) != 0) {
    puVar2 = (ulong *)*puVar3;
  }
  if (1 < uVar1) {
    uVar1 = uVar1 >> 1;
    puVar2 = puVar2 + uVar1 * 4 + -3;
    do {
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        __ZdlPv(*puVar2);
      }
      puVar2 = puVar2 + -4;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
    uVar1 = *param_1;
  }
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*puVar3);
    return;
  }
  return;
}



/* Entry: 104a87588; end: 104a875bb;  */

long * FUN_104a87588(long *param_1)

{
  if (*param_1 != 0) {
    FUN_104a875bc(param_1);
  }
  return param_1;
}



/* Entry: 104a875bc; end: 104a8764b;  */

void FUN_104a875bc(ulong *param_1)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  puVar3 = param_1 + 1;
  uVar1 = *param_1;
  puVar2 = puVar3;
  if ((uVar1 & 1) != 0) {
    puVar2 = (ulong *)*puVar3;
  }
  if (1 < uVar1) {
    uVar1 = uVar1 >> 1;
    puVar2 = puVar2 + uVar1 * 3;
    do {
      if (*(char *)((long)puVar2 + -1) < '\0') {
        __ZdlPv(puVar2[-3]);
      }
      uVar1 = uVar1 - 1;
      puVar2 = puVar2 + -3;
    } while (uVar1 != 0);
    uVar1 = *param_1;
  }
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*puVar3);
    return;
  }
  return;
}



/* Entry: 104a8764c; end: 104a87803;  */

void FUN_104a8764c(long param_1)

{
  ulong *puVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  
  bVar2 = *(byte *)(param_1 + 0xbc0);
  *(byte *)(param_1 + 0xbc0) = bVar2 | 2;
  if (((*(ushort *)(param_1 + 0xb50) >> 6 & 1) != 0) && ((bVar2 & 1) == 0)) {
    puVar5 = *(undefined8 **)(param_1 + 0xbb0);
    if (puVar5 != (undefined8 *)0x0) {
      plVar8 = puVar5 + 1;
      do {
        lVar7 = *plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)*puVar5)();
      }
    }
    *(undefined8 *)(param_1 + 0xbb0) = 0;
  }
  uVar6 = *(ulong *)(param_1 + 3000);
  if ((uVar6 != 0) && (*(undefined8 *)(param_1 + 3000) = 0, (uVar6 & 1) != 0)) {
    func_0x00010084dad0();
  }
  puVar5 = *(undefined8 **)(param_1 + 0xb58);
  if (puVar5 != (undefined8 *)0x0) {
    plVar8 = puVar5 + 1;
    do {
      lVar7 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)*puVar5)();
    }
  }
  *(undefined8 *)(param_1 + 0xb58) = 0;
  uVar6 = *(ulong *)(param_1 + 0xb60);
  if ((uVar6 != 0) && (*(undefined8 *)(param_1 + 0xb60) = 0, (uVar6 & 1) != 0)) {
    func_0x00010084dad0();
  }
  puVar5 = *(undefined8 **)(param_1 + 0xb68);
  if (puVar5 != (undefined8 *)0x0) {
    plVar8 = puVar5 + 1;
    do {
      lVar7 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)*puVar5)();
    }
  }
  *(undefined8 *)(param_1 + 0xb68) = 0;
  uVar6 = *(ulong *)(param_1 + 0xb70);
  if ((uVar6 != 0) && (*(undefined8 *)(param_1 + 0xb70) = 0, (uVar6 & 1) != 0)) {
    func_0x00010084dad0();
  }
  puVar1 = (ulong *)(param_1 + 0xb78);
  uVar6 = *(ulong *)(param_1 + 0xb78);
  plVar8 = (long *)(param_1 + 0xb80);
  if ((uVar6 & 1) != 0) {
    plVar8 = (long *)*plVar8;
  }
  if (1 < uVar6) {
    plVar9 = plVar8;
    do {
      puVar5 = (undefined8 *)*plVar9;
      if (puVar5 != (undefined8 *)0x0) {
        plVar10 = puVar5 + 1;
        do {
          lVar7 = *plVar10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar4) {
            *plVar10 = lVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar7 + -1 == 0) {
          (**(code **)*puVar5)();
        }
      }
      plVar10 = plVar9 + 2;
      *plVar9 = 0;
      plVar9 = plVar10;
    } while (plVar10 != plVar8 + (uVar6 & 0xfffffffffffffffe));
  }
  puVar11 = (undefined8 *)(param_1 + 0xb80);
  uVar6 = *puVar1;
  puVar5 = puVar11;
  if ((uVar6 & 1) != 0) {
    puVar5 = (undefined8 *)*puVar11;
  }
  if (1 < uVar6) {
    uVar6 = uVar6 >> 1;
    puVar5 = puVar5 + uVar6 * 2;
    do {
      puVar5 = puVar5 + -2;
      FUN_104a87884(puVar5);
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    uVar6 = *puVar1;
  }
  if ((uVar6 & 1) != 0) {
    __ZdlPv(*puVar11);
  }
  *puVar1 = 0;
  return;
}



/* Entry: 104a87804; end: 104a87883;  */

void FUN_104a87804(ulong *param_1)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  puVar3 = param_1 + 1;
  uVar1 = *param_1;
  puVar2 = puVar3;
  if ((uVar1 & 1) != 0) {
    puVar2 = (ulong *)*puVar3;
  }
  if (1 < uVar1) {
    uVar1 = uVar1 >> 1;
    puVar2 = puVar2 + uVar1 * 2;
    do {
      puVar2 = puVar2 + -2;
      FUN_104a87884(puVar2);
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
    uVar1 = *param_1;
  }
  if ((uVar1 & 1) != 0) {
    __ZdlPv(*puVar3);
  }
  *param_1 = 0;
  return;
}



/* Entry: 104a87884; end: 104a878e3;  */

void FUN_104a87884(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if ((param_1[1] & 1U) != 0) {
    func_0x00010084dad0();
  }
  puVar4 = (undefined8 *)*param_1;
  if (puVar4 != (undefined8 *)0x0) {
    plVar1 = puVar4 + 1;
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
                    /* WARNING: Could not recover jumptable at 0x000104a878dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar4)();
      return;
    }
  }
  return;
}



/* Entry: 104a878e4; end: 104a8796b;  */

void FUN_104a878e4(int *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_2;
  if ((long *)0x1 < plVar3) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar3 = (long *)*param_2;
  }
  if (plVar3 == (long *)0x0) {
    *param_1 = *param_1 + ((uint)param_2[1] & 0xff) + 0x2a;
  }
  else {
    *param_1 = (uint)param_2[1] + *param_1 + 0x2a;
    if ((long *)0x1 < plVar3) {
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
        (*(code *)plVar3[1])();
      }
    }
  }
  return;
}



/* Entry: 104a8796c; end: 104a87a2b;  */

void FUN_104a8796c(int *param_1,undefined4 *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  int *piVar4;
  long *plVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  uint uVar9;
  long *plStack_2c8;
  uint uStack_2c0;
  long lStack_2a8;
  long *plStack_278;
  uint uStack_270;
  long lStack_258;
  long *plStack_228;
  uint uStack_220;
  long lStack_208;
  long *plStack_1d8;
  uint uStack_1d0;
  long lStack_1b8;
  undefined1 uStack_189;
  long *plStack_188;
  uint uStack_180;
  long lStack_168;
  long *plStack_138;
  uint uStack_130;
  long lStack_118;
  long *plStack_e8;
  uint uStack_e0;
  long lStack_c8;
  long lStack_98;
  uint uStack_90;
  long lStack_78;
  long *plStack_48;
  uint uStack_40;
  long lStack_28;
  
  uVar7 = (undefined4)((ulong)param_2 >> 0x20);
  iVar6 = (int)param_2;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104a7a584(&plStack_48,*param_2);
  plVar3 = plStack_48;
  if (plStack_48 == (long *)0x0) {
    *param_1 = (uStack_40 & 0xff) + *param_1 + 0x27;
  }
  else {
    *param_1 = uStack_40 + *param_1 + 0x27;
    if ((long *)0x1 < plStack_48) {
      do {
        lVar8 = *plStack_48;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_48,0x10);
        if (bVar2) {
          *plStack_48 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 + -1 == 0) {
        (*(code *)plStack_48[1])();
        plVar3 = plStack_48;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar6 != 0) {
    FUN_104bd46a0();
  }
  __Unwind_Resume();
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  piVar4 = (int *)(ulong)*(uint *)CONCAT44(uVar7,iVar6);
  if (*(uint *)CONCAT44(uVar7,iVar6) != 2) {
    func_0x000100619644(&lStack_98);
    uVar9 = uStack_90 & 0xff;
    if (lStack_98 != 0) {
      uVar9 = uStack_90;
    }
    *(uint *)plVar3 = (int)*plVar3 + uVar9 + 0x2c;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104a7ac74(&plStack_e8,*(undefined4 *)CONCAT44(uVar7,iVar6));
  plVar3 = plStack_e8;
  if (plStack_e8 == (long *)0x0) {
    *piVar4 = (uStack_e0 & 0xff) + *piVar4 + 0x2d;
  }
  else {
    *piVar4 = uStack_e0 + *piVar4 + 0x2d;
    if ((long *)0x1 < plStack_e8) {
      do {
        lVar8 = *plStack_e8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_e8,0x10);
        if (bVar2) {
          *plStack_e8 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 + -1 == 0) {
        (*(code *)plStack_e8[1])();
        plVar3 = plStack_e8;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  if (iVar6 != 0) {
    FUN_104bd46a0();
  }
  __Unwind_Resume();
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104a7ac74(&plStack_138,*(undefined4 *)CONCAT44(uVar7,iVar6));
  plVar5 = plStack_138;
  if (plStack_138 == (long *)0x0) {
    *(uint *)plVar3 = (uStack_130 & 0xff) + (int)*plVar3 + 0x3e;
  }
  else {
    *(uint *)plVar3 = uStack_130 + (int)*plVar3 + 0x3e;
    if ((long *)0x1 < plStack_138) {
      do {
        lVar8 = *plStack_138;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_138,0x10);
        if (bVar2) {
          *plStack_138 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 + -1 == 0) {
        (*(code *)plStack_138[1])();
        plVar5 = plStack_138;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  if (iVar6 != 0) {
    FUN_104bd46a0();
  }
  __Unwind_Resume();
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_189 = *(undefined1 *)CONCAT44(uVar7,iVar6);
  func_0x00010061b500(&plStack_188,&uStack_189);
  plVar3 = plStack_188;
  if (plStack_188 == (long *)0x0) {
    *(uint *)plVar5 = (uStack_180 & 0xff) + (int)*plVar5 + 0x34;
  }
  else {
    *(uint *)plVar5 = uStack_180 + (int)*plVar5 + 0x34;
    if ((long *)0x1 < plStack_188) {
      do {
        lVar8 = *plStack_188;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_188,0x10);
        if (bVar2) {
          *plStack_188 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 + -1 == 0) {
        (*(code *)plStack_188[1])();
        plVar3 = plStack_188;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  if (iVar6 != 0) {
    FUN_104bd46a0();
  }
  __Unwind_Resume();
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104a7a584(&plStack_1d8,(long)*(int *)CONCAT44(uVar7,iVar6));
  plVar5 = plStack_1d8;
  if (plStack_1d8 == (long *)0x0) {
    *(uint *)plVar3 = (uStack_1d0 & 0xff) + (int)*plVar3 + 0x2b;
  }
  else {
    *(uint *)plVar3 = uStack_1d0 + (int)*plVar3 + 0x2b;
    if ((long *)0x1 < plStack_1d8) {
      do {
        lVar8 = *plStack_1d8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_1d8,0x10);
        if (bVar2) {
          *plStack_1d8 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 + -1 == 0) {
        (*(code *)plStack_1d8[1])();
        plVar5 = plStack_1d8;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return;
  }
  ___stack_chk_fail();
  if (iVar6 != 0) {
    FUN_104bd46a0();
  }
  __Unwind_Resume();
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010061b528(&plStack_228,*(undefined8 *)CONCAT44(uVar7,iVar6));
  plVar3 = plStack_228;
  if (plStack_228 == (long *)0x0) {
    *(uint *)plVar5 = (uStack_220 & 0xff) + (int)*plVar5 + 0x2c;
  }
  else {
    *(uint *)plVar5 = uStack_220 + (int)*plVar5 + 0x2c;
    if ((long *)0x1 < plStack_228) {
      do {
        lVar8 = *plStack_228;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_228,0x10);
        if (bVar2) {
          *plStack_228 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 + -1 == 0) {
        (*(code *)plStack_228[1])();
        plVar3 = plStack_228;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  if (iVar6 != 0) {
    FUN_104bd46a0();
  }
  __Unwind_Resume();
  lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104a7a584(&plStack_278,*(undefined4 *)CONCAT44(uVar7,iVar6));
  plVar5 = plStack_278;
  if (plStack_278 == (long *)0x0) {
    *(uint *)plVar3 = (uStack_270 & 0xff) + (int)*plVar3 + 0x3a;
  }
  else {
    *(uint *)plVar3 = uStack_270 + (int)*plVar3 + 0x3a;
    if ((long *)0x1 < plStack_278) {
      do {
        lVar8 = *plStack_278;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_278,0x10);
        if (bVar2) {
          *plStack_278 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 + -1 == 0) {
        (*(code *)plStack_278[1])();
        plVar5 = plStack_278;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_258) {
    return;
  }
  ___stack_chk_fail();
  if (iVar6 != 0) {
    FUN_104bd46a0();
  }
  __Unwind_Resume();
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104a7a584(&plStack_2c8,*(undefined8 *)CONCAT44(uVar7,iVar6));
  plVar3 = plStack_2c8;
  if (plStack_2c8 == (long *)0x0) {
    *(uint *)plVar5 = (uStack_2c0 & 0xff) + (int)*plVar5 + 0x36;
  }
  else {
    *(uint *)plVar5 = uStack_2c0 + (int)*plVar5 + 0x36;
    if ((long *)0x1 < plStack_2c8) {
      do {
        lVar8 = *plStack_2c8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_2c8,0x10);
        if (bVar2) {
          *plStack_2c8 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 + -1 == 0) {
        (*(code *)plStack_2c8[1])();
        plVar3 = plStack_2c8;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
    return;
  }
  ___stack_chk_fail();
  if (iVar6 != 0) {
    FUN_104bd46a0();
  }
  __Unwind_Resume();
  plVar5 = *(long **)CONCAT44(uVar7,iVar6);
  if ((long *)0x1 < plVar5) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar5 = *(long **)CONCAT44(uVar7,iVar6);
  }
  uVar9 = (uint)*(undefined8 *)(CONCAT44(uVar7,iVar6) + 8);
  if (plVar5 == (long *)0x0) {
    *(uint *)plVar3 = (int)*plVar3 + (uVar9 & 0xff) + 0x2a;
  }
  else {
    *(uint *)plVar3 = uVar9 + (int)*plVar3 + 0x2a;
    if ((long *)0x1 < plVar5) {
      do {
        lVar8 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 + -1 == 0) {
        (*(code *)plVar5[1])();
      }
    }
  }
  return;
}



/* Entry: 104a87a2c; end: 104a87ab7;  */

void FUN_104a87a2c(int *param_1,uint *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  uint uVar9;
  long *plStack_278;
  uint uStack_270;
  long lStack_258;
  long *plStack_228;
  uint uStack_220;
  long lStack_208;
  long *plStack_1d8;
  uint uStack_1d0;
  long lStack_1b8;
  long *plStack_188;
  uint uStack_180;
  long lStack_168;
  undefined1 uStack_139;
  long *plStack_138;
  uint uStack_130;
  long lStack_118;
  long *plStack_e8;
  uint uStack_e0;
  long lStack_c8;
  long *plStack_98;
  uint uStack_90;
  long lStack_78;
  long lStack_48;
  uint uStack_40;
  long lStack_28;
  
  uVar7 = (undefined4)((ulong)param_2 >> 0x20);
  iVar6 = (int)param_2;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  piVar3 = (int *)(ulong)*param_2;
  if (*param_2 != 2) {
    func_0x000100619644(&lStack_48);
    uVar9 = uStack_40 & 0xff;
    if (lStack_48 != 0) {
      uVar9 = uStack_40;
    }
    *param_1 = *param_1 + uVar9 + 0x2c;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104a7ac74(&plStack_98,*(undefined4 *)CONCAT44(uVar7,iVar6));
  plVar4 = plStack_98;
  if (plStack_98 == (long *)0x0) {
    *piVar3 = (uStack_90 & 0xff) + *piVar3 + 0x2d;
  }
  else {
    *piVar3 = uStack_90 + *piVar3 + 0x2d;
    if ((long *)0x1 < plStack_98) {
      do {
        lVar8 = *plStack_98;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_98,0x10);
        if (bVar2) {
          *plStack_98 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 + -1 == 0) {
        (*(code *)plStack_98[1])();
        plVar4 = plStack_98;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  if (iVar6 != 0) {
    FUN_104bd46a0();
  }
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104a7ac74(&plStack_e8,*(undefined4 *)CONCAT44(uVar7,iVar6));
  plVar5 = plStack_e8;
  if (plStack_e8 == (long *)0x0) {
    *(uint *)plVar4 = (uStack_e0 & 0xff) + (int)*plVar4 + 0x3e;
  }
  else {
    *(uint *)plVar4 = uStack_e0 + (int)*plVar4 + 0x3e;
    if ((long *)0x1 < plStack_e8) {
      do {
        lVar8 = *plStack_e8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_e8,0x10);
        if (bVar2) {
          *plStack_e8 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 + -1 == 0) {
        (*(code *)plStack_e8[1])();
        plVar5 = plStack_e8;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  if (iVar6 != 0) {
    FUN_104bd46a0();
  }
  __Unwind_Resume();
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_139 = *(undefined1 *)CONCAT44(uVar7,iVar6);
  func_0x00010061b500(&plStack_138,&uStack_139);
  plVar4 = plStack_138;
  if (plStack_138 == (long *)0x0) {
    *(uint *)plVar5 = (uStack_130 & 0xff) + (int)*plVar5 + 0x34;
  }
  else {
    *(uint *)plVar5 = uStack_130 + (int)*plVar5 + 0x34;
    if ((long *)0x1 < plStack_138) {
      do {
        lVar8 = *plStack_138;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_138,0x10);
        if (bVar2) {
          *plStack_138 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 + -1 == 0) {
        (*(code *)plStack_138[1])();
        plVar4 = plStack_138;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  if (iVar6 != 0) {
    FUN_104bd46a0();
  }
  __Unwind_Resume();
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104a7a584(&plStack_188,(long)*(int *)CONCAT44(uVar7,iVar6));
  plVar5 = plStack_188;
  if (plStack_188 == (long *)0x0) {
    *(uint *)plVar4 = (uStack_180 & 0xff) + (int)*plVar4 + 0x2b;
  }
  else {
    *(uint *)plVar4 = uStack_180 + (int)*plVar4 + 0x2b;
    if ((long *)0x1 < plStack_188) {
      do {
        lVar8 = *plStack_188;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_188,0x10);
        if (bVar2) {
          *plStack_188 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 + -1 == 0) {
        (*(code *)plStack_188[1])();
        plVar5 = plStack_188;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  if (iVar6 != 0) {
    FUN_104bd46a0();
  }
  __Unwind_Resume();
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010061b528(&plStack_1d8,*(undefined8 *)CONCAT44(uVar7,iVar6));
  plVar4 = plStack_1d8;
  if (plStack_1d8 == (long *)0x0) {
    *(uint *)plVar5 = (uStack_1d0 & 0xff) + (int)*plVar5 + 0x2c;
  }
  else {
    *(uint *)plVar5 = uStack_1d0 + (int)*plVar5 + 0x2c;
    if ((long *)0x1 < plStack_1d8) {
      do {
        lVar8 = *plStack_1d8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_1d8,0x10);
        if (bVar2) {
          *plStack_1d8 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 + -1 == 0) {
        (*(code *)plStack_1d8[1])();
        plVar4 = plStack_1d8;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return;
  }
  ___stack_chk_fail();
  if (iVar6 != 0) {
    FUN_104bd46a0();
  }
  __Unwind_Resume();
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104a7a584(&plStack_228,*(undefined4 *)CONCAT44(uVar7,iVar6));
  plVar5 = plStack_228;
  if (plStack_228 == (long *)0x0) {
    *(uint *)plVar4 = (uStack_220 & 0xff) + (int)*plVar4 + 0x3a;
  }
  else {
    *(uint *)plVar4 = uStack_220 + (int)*plVar4 + 0x3a;
    if ((long *)0x1 < plStack_228) {
      do {
        lVar8 = *plStack_228;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_228,0x10);
        if (bVar2) {
          *plStack_228 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 + -1 == 0) {
        (*(code *)plStack_228[1])();
        plVar5 = plStack_228;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  if (iVar6 != 0) {
    FUN_104bd46a0();
  }
  __Unwind_Resume();
  lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104a7a584(&plStack_278,*(undefined8 *)CONCAT44(uVar7,iVar6));
  plVar4 = plStack_278;
  if (plStack_278 == (long *)0x0) {
    *(uint *)plVar5 = (uStack_270 & 0xff) + (int)*plVar5 + 0x36;
  }
  else {
    *(uint *)plVar5 = uStack_270 + (int)*plVar5 + 0x36;
    if ((long *)0x1 < plStack_278) {
      do {
        lVar8 = *plStack_278;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_278,0x10);
        if (bVar2) {
          *plStack_278 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 + -1 == 0) {
        (*(code *)plStack_278[1])();
        plVar4 = plStack_278;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_258) {
    return;
  }
  ___stack_chk_fail();
  if (iVar6 != 0) {
    FUN_104bd46a0();
  }
  __Unwind_Resume();
  plVar5 = *(long **)CONCAT44(uVar7,iVar6);
  if ((long *)0x1 < plVar5) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar5 = *(long **)CONCAT44(uVar7,iVar6);
  }
  uVar9 = (uint)*(undefined8 *)(CONCAT44(uVar7,iVar6) + 8);
  if (plVar5 == (long *)0x0) {
    *(uint *)plVar4 = (int)*plVar4 + (uVar9 & 0xff) + 0x2a;
  }
  else {
    *(uint *)plVar4 = uVar9 + (int)*plVar4 + 0x2a;
    if ((long *)0x1 < plVar5) {
      do {
        lVar8 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 + -1 == 0) {
        (*(code *)plVar5[1])();
      }
    }
  }
  return;
}



/* Entry: 104a87ab8; end: 104a87b77;  */

void FUN_104a87ab8(int *param_1,undefined4 *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  uint uVar8;
  long *plStack_228;
  uint uStack_220;
  long lStack_208;
  long *plStack_1d8;
  uint uStack_1d0;
  long lStack_1b8;
  long *plStack_188;
  uint uStack_180;
  long lStack_168;
  long *plStack_138;
  uint uStack_130;
  long lStack_118;
  undefined1 uStack_e9;
  long *plStack_e8;
  uint uStack_e0;
  long lStack_c8;
  long *plStack_98;
  uint uStack_90;
  long lStack_78;
  long *plStack_48;
  uint uStack_40;
  long lStack_28;
  
  uVar6 = (undefined4)((ulong)param_2 >> 0x20);
  iVar5 = (int)param_2;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104a7ac74(&plStack_48,*param_2);
  plVar3 = plStack_48;
  if (plStack_48 == (long *)0x0) {
    *param_1 = (uStack_40 & 0xff) + *param_1 + 0x2d;
  }
  else {
    *param_1 = uStack_40 + *param_1 + 0x2d;
    if ((long *)0x1 < plStack_48) {
      do {
        lVar7 = *plStack_48;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_48,0x10);
        if (bVar2) {
          *plStack_48 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_48[1])();
        plVar3 = plStack_48;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    FUN_104bd46a0();
  }
  __Unwind_Resume();
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104a7ac74(&plStack_98,*(undefined4 *)CONCAT44(uVar6,iVar5));
  plVar4 = plStack_98;
  if (plStack_98 == (long *)0x0) {
    *(uint *)plVar3 = (uStack_90 & 0xff) + (int)*plVar3 + 0x3e;
  }
  else {
    *(uint *)plVar3 = uStack_90 + (int)*plVar3 + 0x3e;
    if ((long *)0x1 < plStack_98) {
      do {
        lVar7 = *plStack_98;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_98,0x10);
        if (bVar2) {
          *plStack_98 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_98[1])();
        plVar4 = plStack_98;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    FUN_104bd46a0();
  }
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_e9 = *(undefined1 *)CONCAT44(uVar6,iVar5);
  func_0x00010061b500(&plStack_e8,&uStack_e9);
  plVar3 = plStack_e8;
  if (plStack_e8 == (long *)0x0) {
    *(uint *)plVar4 = (uStack_e0 & 0xff) + (int)*plVar4 + 0x34;
  }
  else {
    *(uint *)plVar4 = uStack_e0 + (int)*plVar4 + 0x34;
    if ((long *)0x1 < plStack_e8) {
      do {
        lVar7 = *plStack_e8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_e8,0x10);
        if (bVar2) {
          *plStack_e8 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_e8[1])();
        plVar3 = plStack_e8;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    FUN_104bd46a0();
  }
  __Unwind_Resume();
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104a7a584(&plStack_138,(long)*(int *)CONCAT44(uVar6,iVar5));
  plVar4 = plStack_138;
  if (plStack_138 == (long *)0x0) {
    *(uint *)plVar3 = (uStack_130 & 0xff) + (int)*plVar3 + 0x2b;
  }
  else {
    *(uint *)plVar3 = uStack_130 + (int)*plVar3 + 0x2b;
    if ((long *)0x1 < plStack_138) {
      do {
        lVar7 = *plStack_138;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_138,0x10);
        if (bVar2) {
          *plStack_138 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_138[1])();
        plVar4 = plStack_138;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    FUN_104bd46a0();
  }
  __Unwind_Resume();
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010061b528(&plStack_188,*(undefined8 *)CONCAT44(uVar6,iVar5));
  plVar3 = plStack_188;
  if (plStack_188 == (long *)0x0) {
    *(uint *)plVar4 = (uStack_180 & 0xff) + (int)*plVar4 + 0x2c;
  }
  else {
    *(uint *)plVar4 = uStack_180 + (int)*plVar4 + 0x2c;
    if ((long *)0x1 < plStack_188) {
      do {
        lVar7 = *plStack_188;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_188,0x10);
        if (bVar2) {
          *plStack_188 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_188[1])();
        plVar3 = plStack_188;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    FUN_104bd46a0();
  }
  __Unwind_Resume();
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104a7a584(&plStack_1d8,*(undefined4 *)CONCAT44(uVar6,iVar5));
  plVar4 = plStack_1d8;
  if (plStack_1d8 == (long *)0x0) {
    *(uint *)plVar3 = (uStack_1d0 & 0xff) + (int)*plVar3 + 0x3a;
  }
  else {
    *(uint *)plVar3 = uStack_1d0 + (int)*plVar3 + 0x3a;
    if ((long *)0x1 < plStack_1d8) {
      do {
        lVar7 = *plStack_1d8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_1d8,0x10);
        if (bVar2) {
          *plStack_1d8 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_1d8[1])();
        plVar4 = plStack_1d8;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    FUN_104bd46a0();
  }
  __Unwind_Resume();
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104a7a584(&plStack_228,*(undefined8 *)CONCAT44(uVar6,iVar5));
  plVar3 = plStack_228;
  if (plStack_228 == (long *)0x0) {
    *(uint *)plVar4 = (uStack_220 & 0xff) + (int)*plVar4 + 0x36;
  }
  else {
    *(uint *)plVar4 = uStack_220 + (int)*plVar4 + 0x36;
    if ((long *)0x1 < plStack_228) {
      do {
        lVar7 = *plStack_228;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_228,0x10);
        if (bVar2) {
          *plStack_228 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_228[1])();
        plVar3 = plStack_228;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    FUN_104bd46a0();
  }
  __Unwind_Resume();
  plVar4 = *(long **)CONCAT44(uVar6,iVar5);
  if ((long *)0x1 < plVar4) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar4 = *(long **)CONCAT44(uVar6,iVar5);
  }
  uVar8 = (uint)*(undefined8 *)(CONCAT44(uVar6,iVar5) + 8);
  if (plVar4 == (long *)0x0) {
    *(uint *)plVar3 = (int)*plVar3 + (uVar8 & 0xff) + 0x2a;
  }
  else {
    *(uint *)plVar3 = uVar8 + (int)*plVar3 + 0x2a;
    if ((long *)0x1 < plVar4) {
      do {
        lVar7 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plVar4[1])();
      }
    }
  }
  return;
}



/* Entry: 104a87b78; end: 104a87c37;  */

void FUN_104a87b78(int *param_1,undefined4 *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  uint uVar8;
  long *plStack_1d8;
  uint uStack_1d0;
  long lStack_1b8;
  long *plStack_188;
  uint uStack_180;
  long lStack_168;
  long *plStack_138;
  uint uStack_130;
  long lStack_118;
  long *plStack_e8;
  uint uStack_e0;
  long lStack_c8;
  undefined1 uStack_99;
  long *plStack_98;
  uint uStack_90;
  long lStack_78;
  long *plStack_48;
  uint uStack_40;
  long lStack_28;
  
  uVar6 = (undefined4)((ulong)param_2 >> 0x20);
  iVar5 = (int)param_2;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104a7ac74(&plStack_48,*param_2);
  plVar4 = plStack_48;
  if (plStack_48 == (long *)0x0) {
    *param_1 = (uStack_40 & 0xff) + *param_1 + 0x3e;
  }
  else {
    *param_1 = uStack_40 + *param_1 + 0x3e;
    if ((long *)0x1 < plStack_48) {
      do {
        lVar7 = *plStack_48;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_48,0x10);
        if (bVar2) {
          *plStack_48 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_48[1])();
        plVar4 = plStack_48;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    FUN_104bd46a0();
  }
  __Unwind_Resume();
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_99 = *(undefined1 *)CONCAT44(uVar6,iVar5);
  func_0x00010061b500(&plStack_98,&uStack_99);
  plVar3 = plStack_98;
  if (plStack_98 == (long *)0x0) {
    *(uint *)plVar4 = (uStack_90 & 0xff) + (int)*plVar4 + 0x34;
  }
  else {
    *(uint *)plVar4 = uStack_90 + (int)*plVar4 + 0x34;
    if ((long *)0x1 < plStack_98) {
      do {
        lVar7 = *plStack_98;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_98,0x10);
        if (bVar2) {
          *plStack_98 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_98[1])();
        plVar3 = plStack_98;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    FUN_104bd46a0();
  }
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104a7a584(&plStack_e8,(long)*(int *)CONCAT44(uVar6,iVar5));
  plVar4 = plStack_e8;
  if (plStack_e8 == (long *)0x0) {
    *(uint *)plVar3 = (uStack_e0 & 0xff) + (int)*plVar3 + 0x2b;
  }
  else {
    *(uint *)plVar3 = uStack_e0 + (int)*plVar3 + 0x2b;
    if ((long *)0x1 < plStack_e8) {
      do {
        lVar7 = *plStack_e8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_e8,0x10);
        if (bVar2) {
          *plStack_e8 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_e8[1])();
        plVar4 = plStack_e8;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    FUN_104bd46a0();
  }
  __Unwind_Resume();
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010061b528(&plStack_138,*(undefined8 *)CONCAT44(uVar6,iVar5));
  plVar3 = plStack_138;
  if (plStack_138 == (long *)0x0) {
    *(uint *)plVar4 = (uStack_130 & 0xff) + (int)*plVar4 + 0x2c;
  }
  else {
    *(uint *)plVar4 = uStack_130 + (int)*plVar4 + 0x2c;
    if ((long *)0x1 < plStack_138) {
      do {
        lVar7 = *plStack_138;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_138,0x10);
        if (bVar2) {
          *plStack_138 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_138[1])();
        plVar3 = plStack_138;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    FUN_104bd46a0();
  }
  __Unwind_Resume();
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104a7a584(&plStack_188,*(undefined4 *)CONCAT44(uVar6,iVar5));
  plVar4 = plStack_188;
  if (plStack_188 == (long *)0x0) {
    *(uint *)plVar3 = (uStack_180 & 0xff) + (int)*plVar3 + 0x3a;
  }
  else {
    *(uint *)plVar3 = uStack_180 + (int)*plVar3 + 0x3a;
    if ((long *)0x1 < plStack_188) {
      do {
        lVar7 = *plStack_188;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_188,0x10);
        if (bVar2) {
          *plStack_188 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_188[1])();
        plVar4 = plStack_188;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    FUN_104bd46a0();
  }
  __Unwind_Resume();
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104a7a584(&plStack_1d8,*(undefined8 *)CONCAT44(uVar6,iVar5));
  plVar3 = plStack_1d8;
  if (plStack_1d8 == (long *)0x0) {
    *(uint *)plVar4 = (uStack_1d0 & 0xff) + (int)*plVar4 + 0x36;
  }
  else {
    *(uint *)plVar4 = uStack_1d0 + (int)*plVar4 + 0x36;
    if ((long *)0x1 < plStack_1d8) {
      do {
        lVar7 = *plStack_1d8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_1d8,0x10);
        if (bVar2) {
          *plStack_1d8 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_1d8[1])();
        plVar3 = plStack_1d8;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    FUN_104bd46a0();
  }
  __Unwind_Resume();
  plVar4 = *(long **)CONCAT44(uVar6,iVar5);
  if ((long *)0x1 < plVar4) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar4 = *(long **)CONCAT44(uVar6,iVar5);
  }
  uVar8 = (uint)*(undefined8 *)(CONCAT44(uVar6,iVar5) + 8);
  if (plVar4 == (long *)0x0) {
    *(uint *)plVar3 = (int)*plVar3 + (uVar8 & 0xff) + 0x2a;
  }
  else {
    *(uint *)plVar3 = uVar8 + (int)*plVar3 + 0x2a;
    if ((long *)0x1 < plVar4) {
      do {
        lVar7 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plVar4[1])();
      }
    }
  }
  return;
}



/* Entry: 104a87c38; end: 104a87cff;  */

void FUN_104a87c38(int *param_1,undefined1 *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  uint uVar8;
  long *plStack_188;
  uint uStack_180;
  long lStack_168;
  long *plStack_138;
  uint uStack_130;
  long lStack_118;
  long *plStack_e8;
  uint uStack_e0;
  long lStack_c8;
  long *plStack_98;
  uint uStack_90;
  long lStack_78;
  undefined1 uStack_49;
  long *plStack_48;
  uint uStack_40;
  long lStack_28;
  
  uVar6 = (undefined4)((ulong)param_2 >> 0x20);
  iVar5 = (int)param_2;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_49 = *param_2;
  func_0x00010061b500(&plStack_48,&uStack_49);
  plVar3 = plStack_48;
  if (plStack_48 == (long *)0x0) {
    *param_1 = (uStack_40 & 0xff) + *param_1 + 0x34;
  }
  else {
    *param_1 = uStack_40 + *param_1 + 0x34;
    if ((long *)0x1 < plStack_48) {
      do {
        lVar7 = *plStack_48;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_48,0x10);
        if (bVar2) {
          *plStack_48 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_48[1])();
        plVar3 = plStack_48;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    FUN_104bd46a0();
  }
  __Unwind_Resume();
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104a7a584(&plStack_98,(long)*(int *)CONCAT44(uVar6,iVar5));
  plVar4 = plStack_98;
  if (plStack_98 == (long *)0x0) {
    *(uint *)plVar3 = (uStack_90 & 0xff) + (int)*plVar3 + 0x2b;
  }
  else {
    *(uint *)plVar3 = uStack_90 + (int)*plVar3 + 0x2b;
    if ((long *)0x1 < plStack_98) {
      do {
        lVar7 = *plStack_98;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_98,0x10);
        if (bVar2) {
          *plStack_98 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_98[1])();
        plVar4 = plStack_98;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    FUN_104bd46a0();
  }
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010061b528(&plStack_e8,*(undefined8 *)CONCAT44(uVar6,iVar5));
  plVar3 = plStack_e8;
  if (plStack_e8 == (long *)0x0) {
    *(uint *)plVar4 = (uStack_e0 & 0xff) + (int)*plVar4 + 0x2c;
  }
  else {
    *(uint *)plVar4 = uStack_e0 + (int)*plVar4 + 0x2c;
    if ((long *)0x1 < plStack_e8) {
      do {
        lVar7 = *plStack_e8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_e8,0x10);
        if (bVar2) {
          *plStack_e8 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_e8[1])();
        plVar3 = plStack_e8;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    FUN_104bd46a0();
  }
  __Unwind_Resume();
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104a7a584(&plStack_138,*(undefined4 *)CONCAT44(uVar6,iVar5));
  plVar4 = plStack_138;
  if (plStack_138 == (long *)0x0) {
    *(uint *)plVar3 = (uStack_130 & 0xff) + (int)*plVar3 + 0x3a;
  }
  else {
    *(uint *)plVar3 = uStack_130 + (int)*plVar3 + 0x3a;
    if ((long *)0x1 < plStack_138) {
      do {
        lVar7 = *plStack_138;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_138,0x10);
        if (bVar2) {
          *plStack_138 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_138[1])();
        plVar4 = plStack_138;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    FUN_104bd46a0();
  }
  __Unwind_Resume();
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104a7a584(&plStack_188,*(undefined8 *)CONCAT44(uVar6,iVar5));
  plVar3 = plStack_188;
  if (plStack_188 == (long *)0x0) {
    *(uint *)plVar4 = (uStack_180 & 0xff) + (int)*plVar4 + 0x36;
  }
  else {
    *(uint *)plVar4 = uStack_180 + (int)*plVar4 + 0x36;
    if ((long *)0x1 < plStack_188) {
      do {
        lVar7 = *plStack_188;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_188,0x10);
        if (bVar2) {
          *plStack_188 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_188[1])();
        plVar3 = plStack_188;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    FUN_104bd46a0();
  }
  __Unwind_Resume();
  plVar4 = *(long **)CONCAT44(uVar6,iVar5);
  if ((long *)0x1 < plVar4) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar4 = *(long **)CONCAT44(uVar6,iVar5);
  }
  uVar8 = (uint)*(undefined8 *)(CONCAT44(uVar6,iVar5) + 8);
  if (plVar4 == (long *)0x0) {
    *(uint *)plVar3 = (int)*plVar3 + (uVar8 & 0xff) + 0x2a;
  }
  else {
    *(uint *)plVar3 = uVar8 + (int)*plVar3 + 0x2a;
    if ((long *)0x1 < plVar4) {
      do {
        lVar7 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plVar4[1])();
      }
    }
  }
  return;
}



/* Entry: 104a87d00; end: 104a87dbf;  */

void FUN_104a87d00(int *param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  uint uVar8;
  long *plStack_138;
  uint uStack_130;
  long lStack_118;
  long *plStack_e8;
  uint uStack_e0;
  long lStack_c8;
  long *plStack_98;
  uint uStack_90;
  long lStack_78;
  long *plStack_48;
  uint uStack_40;
  long lStack_28;
  
  uVar6 = (undefined4)((ulong)param_2 >> 0x20);
  iVar5 = (int)param_2;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104a7a584(&plStack_48,(long)*param_2);
  plVar4 = plStack_48;
  if (plStack_48 == (long *)0x0) {
    *param_1 = (uStack_40 & 0xff) + *param_1 + 0x2b;
  }
  else {
    *param_1 = uStack_40 + *param_1 + 0x2b;
    if ((long *)0x1 < plStack_48) {
      do {
        lVar7 = *plStack_48;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_48,0x10);
        if (bVar2) {
          *plStack_48 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_48[1])();
        plVar4 = plStack_48;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    FUN_104bd46a0();
  }
  __Unwind_Resume();
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010061b528(&plStack_98,*(undefined8 *)CONCAT44(uVar6,iVar5));
  plVar3 = plStack_98;
  if (plStack_98 == (long *)0x0) {
    *(uint *)plVar4 = (uStack_90 & 0xff) + (int)*plVar4 + 0x2c;
  }
  else {
    *(uint *)plVar4 = uStack_90 + (int)*plVar4 + 0x2c;
    if ((long *)0x1 < plStack_98) {
      do {
        lVar7 = *plStack_98;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_98,0x10);
        if (bVar2) {
          *plStack_98 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_98[1])();
        plVar3 = plStack_98;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    FUN_104bd46a0();
  }
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104a7a584(&plStack_e8,*(undefined4 *)CONCAT44(uVar6,iVar5));
  plVar4 = plStack_e8;
  if (plStack_e8 == (long *)0x0) {
    *(uint *)plVar3 = (uStack_e0 & 0xff) + (int)*plVar3 + 0x3a;
  }
  else {
    *(uint *)plVar3 = uStack_e0 + (int)*plVar3 + 0x3a;
    if ((long *)0x1 < plStack_e8) {
      do {
        lVar7 = *plStack_e8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_e8,0x10);
        if (bVar2) {
          *plStack_e8 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_e8[1])();
        plVar4 = plStack_e8;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    FUN_104bd46a0();
  }
  __Unwind_Resume();
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104a7a584(&plStack_138,*(undefined8 *)CONCAT44(uVar6,iVar5));
  plVar3 = plStack_138;
  if (plStack_138 == (long *)0x0) {
    *(uint *)plVar4 = (uStack_130 & 0xff) + (int)*plVar4 + 0x36;
  }
  else {
    *(uint *)plVar4 = uStack_130 + (int)*plVar4 + 0x36;
    if ((long *)0x1 < plStack_138) {
      do {
        lVar7 = *plStack_138;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_138,0x10);
        if (bVar2) {
          *plStack_138 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_138[1])();
        plVar3 = plStack_138;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    FUN_104bd46a0();
  }
  __Unwind_Resume();
  plVar4 = *(long **)CONCAT44(uVar6,iVar5);
  if ((long *)0x1 < plVar4) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar4 = *(long **)CONCAT44(uVar6,iVar5);
  }
  uVar8 = (uint)*(undefined8 *)(CONCAT44(uVar6,iVar5) + 8);
  if (plVar4 == (long *)0x0) {
    *(uint *)plVar3 = (int)*plVar3 + (uVar8 & 0xff) + 0x2a;
  }
  else {
    *(uint *)plVar3 = uVar8 + (int)*plVar3 + 0x2a;
    if ((long *)0x1 < plVar4) {
      do {
        lVar7 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plVar4[1])();
      }
    }
  }
  return;
}



/* Entry: 104a87dc0; end: 104a87e7f;  */

void FUN_104a87dc0(int *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  uint uVar8;
  long *plStack_e8;
  uint uStack_e0;
  long lStack_c8;
  long *plStack_98;
  uint uStack_90;
  long lStack_78;
  long *plStack_48;
  uint uStack_40;
  long lStack_28;
  
  uVar6 = (undefined4)((ulong)param_2 >> 0x20);
  iVar5 = (int)param_2;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010061b528(&plStack_48,*param_2);
  plVar3 = plStack_48;
  if (plStack_48 == (long *)0x0) {
    *param_1 = (uStack_40 & 0xff) + *param_1 + 0x2c;
  }
  else {
    *param_1 = uStack_40 + *param_1 + 0x2c;
    if ((long *)0x1 < plStack_48) {
      do {
        lVar7 = *plStack_48;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_48,0x10);
        if (bVar2) {
          *plStack_48 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_48[1])();
        plVar3 = plStack_48;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    FUN_104bd46a0();
  }
  __Unwind_Resume();
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104a7a584(&plStack_98,*(undefined4 *)CONCAT44(uVar6,iVar5));
  plVar4 = plStack_98;
  if (plStack_98 == (long *)0x0) {
    *(uint *)plVar3 = (uStack_90 & 0xff) + (int)*plVar3 + 0x3a;
  }
  else {
    *(uint *)plVar3 = uStack_90 + (int)*plVar3 + 0x3a;
    if ((long *)0x1 < plStack_98) {
      do {
        lVar7 = *plStack_98;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_98,0x10);
        if (bVar2) {
          *plStack_98 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_98[1])();
        plVar4 = plStack_98;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    FUN_104bd46a0();
  }
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104a7a584(&plStack_e8,*(undefined8 *)CONCAT44(uVar6,iVar5));
  plVar3 = plStack_e8;
  if (plStack_e8 == (long *)0x0) {
    *(uint *)plVar4 = (uStack_e0 & 0xff) + (int)*plVar4 + 0x36;
  }
  else {
    *(uint *)plVar4 = uStack_e0 + (int)*plVar4 + 0x36;
    if ((long *)0x1 < plStack_e8) {
      do {
        lVar7 = *plStack_e8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_e8,0x10);
        if (bVar2) {
          *plStack_e8 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_e8[1])();
        plVar3 = plStack_e8;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    FUN_104bd46a0();
  }
  __Unwind_Resume();
  plVar4 = *(long **)CONCAT44(uVar6,iVar5);
  if ((long *)0x1 < plVar4) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar4 = *(long **)CONCAT44(uVar6,iVar5);
  }
  uVar8 = (uint)*(undefined8 *)(CONCAT44(uVar6,iVar5) + 8);
  if (plVar4 == (long *)0x0) {
    *(uint *)plVar3 = (int)*plVar3 + (uVar8 & 0xff) + 0x2a;
  }
  else {
    *(uint *)plVar3 = uVar8 + (int)*plVar3 + 0x2a;
    if ((long *)0x1 < plVar4) {
      do {
        lVar7 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plVar4[1])();
      }
    }
  }
  return;
}



/* Entry: 104a87e80; end: 104a87f3f;  */

void FUN_104a87e80(int *param_1,undefined4 *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  uint uVar8;
  long *plStack_98;
  uint uStack_90;
  long lStack_78;
  long *plStack_48;
  uint uStack_40;
  long lStack_28;
  
  uVar6 = (undefined4)((ulong)param_2 >> 0x20);
  iVar5 = (int)param_2;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104a7a584(&plStack_48,*param_2);
  plVar4 = plStack_48;
  if (plStack_48 == (long *)0x0) {
    *param_1 = (uStack_40 & 0xff) + *param_1 + 0x3a;
  }
  else {
    *param_1 = uStack_40 + *param_1 + 0x3a;
    if ((long *)0x1 < plStack_48) {
      do {
        lVar7 = *plStack_48;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_48,0x10);
        if (bVar2) {
          *plStack_48 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_48[1])();
        plVar4 = plStack_48;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    FUN_104bd46a0();
  }
  __Unwind_Resume();
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104a7a584(&plStack_98,*(undefined8 *)CONCAT44(uVar6,iVar5));
  plVar3 = plStack_98;
  if (plStack_98 == (long *)0x0) {
    *(uint *)plVar4 = (uStack_90 & 0xff) + (int)*plVar4 + 0x36;
  }
  else {
    *(uint *)plVar4 = uStack_90 + (int)*plVar4 + 0x36;
    if ((long *)0x1 < plStack_98) {
      do {
        lVar7 = *plStack_98;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_98,0x10);
        if (bVar2) {
          *plStack_98 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_98[1])();
        plVar3 = plStack_98;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    FUN_104bd46a0();
  }
  __Unwind_Resume();
  plVar4 = *(long **)CONCAT44(uVar6,iVar5);
  if ((long *)0x1 < plVar4) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar4 = *(long **)CONCAT44(uVar6,iVar5);
  }
  uVar8 = (uint)*(undefined8 *)(CONCAT44(uVar6,iVar5) + 8);
  if (plVar4 == (long *)0x0) {
    *(uint *)plVar3 = (int)*plVar3 + (uVar8 & 0xff) + 0x2a;
  }
  else {
    *(uint *)plVar3 = uVar8 + (int)*plVar3 + 0x2a;
    if ((long *)0x1 < plVar4) {
      do {
        lVar7 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plVar4[1])();
      }
    }
  }
  return;
}



/* Entry: 104a87f40; end: 104a87fff;  */

void FUN_104a87f40(int *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  uint uVar8;
  long *plStack_48;
  uint uStack_40;
  long lStack_28;
  
  uVar6 = (undefined4)((ulong)param_2 >> 0x20);
  iVar5 = (int)param_2;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104a7a584(&plStack_48,*param_2);
  plVar3 = plStack_48;
  if (plStack_48 == (long *)0x0) {
    *param_1 = (uStack_40 & 0xff) + *param_1 + 0x36;
  }
  else {
    *param_1 = uStack_40 + *param_1 + 0x36;
    if ((long *)0x1 < plStack_48) {
      do {
        lVar7 = *plStack_48;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_48,0x10);
        if (bVar2) {
          *plStack_48 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_48[1])();
        plVar3 = plStack_48;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    FUN_104bd46a0();
  }
  __Unwind_Resume();
  plVar4 = *(long **)CONCAT44(uVar6,iVar5);
  if ((long *)0x1 < plVar4) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar4 = *(long **)CONCAT44(uVar6,iVar5);
  }
  uVar8 = (uint)*(undefined8 *)(CONCAT44(uVar6,iVar5) + 8);
  if (plVar4 == (long *)0x0) {
    *(uint *)plVar3 = (int)*plVar3 + (uVar8 & 0xff) + 0x2a;
  }
  else {
    *(uint *)plVar3 = uVar8 + (int)*plVar3 + 0x2a;
    if ((long *)0x1 < plVar4) {
      do {
        lVar7 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plVar4[1])();
      }
    }
  }
  return;
}



/* Entry: 104a88000; end: 104a88087;  */

void FUN_104a88000(int *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_2;
  if ((long *)0x1 < plVar3) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar3 = (long *)*param_2;
  }
  if (plVar3 == (long *)0x0) {
    *param_1 = *param_1 + ((uint)param_2[1] & 0xff) + 0x2a;
  }
  else {
    *param_1 = (uint)param_2[1] + *param_1 + 0x2a;
    if ((long *)0x1 < plVar3) {
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
        (*(code *)plVar3[1])();
      }
    }
  }
  return;
}



/* Entry: 104a88088; end: 104a8810f;  */

void FUN_104a88088(int *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_2;
  if ((long *)0x1 < plVar3) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar3 = (long *)*param_2;
  }
  if (plVar3 == (long *)0x0) {
    *param_1 = *param_1 + ((uint)param_2[1] & 0xff) + 0x2c;
  }
  else {
    *param_1 = (uint)param_2[1] + *param_1 + 0x2c;
    if ((long *)0x1 < plVar3) {
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
        (*(code *)plVar3[1])();
      }
    }
  }
  return;
}



/* Entry: 104a88110; end: 104a88197;  */

void FUN_104a88110(int *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_2;
  if ((long *)0x1 < plVar3) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar3 = (long *)*param_2;
  }
  if (plVar3 == (long *)0x0) {
    *param_1 = *param_1 + ((uint)param_2[1] & 0xff) + 0x24;
  }
  else {
    *param_1 = (uint)param_2[1] + *param_1 + 0x24;
    if ((long *)0x1 < plVar3) {
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
        (*(code *)plVar3[1])();
      }
    }
  }
  return;
}



/* Entry: 104a88198; end: 104a8821f;  */

void FUN_104a88198(int *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_2;
  if ((long *)0x1 < plVar3) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar3 = (long *)*param_2;
  }
  if (plVar3 == (long *)0x0) {
    *param_1 = *param_1 + ((uint)param_2[1] & 0xff) + 0x39;
  }
  else {
    *param_1 = (uint)param_2[1] + *param_1 + 0x39;
    if ((long *)0x1 < plVar3) {
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
        (*(code *)plVar3[1])();
      }
    }
  }
  return;
}



/* Entry: 104a88220; end: 104a882a7;  */

void FUN_104a88220(int *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_2;
  if ((long *)0x1 < plVar3) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar3 = (long *)*param_2;
  }
  if (plVar3 == (long *)0x0) {
    *param_1 = *param_1 + ((uint)param_2[1] & 0xff) + 0x35;
  }
  else {
    *param_1 = (uint)param_2[1] + *param_1 + 0x35;
    if ((long *)0x1 < plVar3) {
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
        (*(code *)plVar3[1])();
      }
    }
  }
  return;
}



/* Entry: 104a882a8; end: 104a8832f;  */

void FUN_104a882a8(int *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_2;
  if ((long *)0x1 < plVar3) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar3 = (long *)*param_2;
  }
  if (plVar3 == (long *)0x0) {
    *param_1 = *param_1 + ((uint)param_2[1] & 0xff) + 0x2e;
  }
  else {
    *param_1 = (uint)param_2[1] + *param_1 + 0x2e;
    if ((long *)0x1 < plVar3) {
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
        (*(code *)plVar3[1])();
      }
    }
  }
  return;
}



/* Entry: 104a88330; end: 104a883b7;  */

void FUN_104a88330(int *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_2;
  if ((long *)0x1 < plVar3) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar3 = (long *)*param_2;
  }
  if (plVar3 == (long *)0x0) {
    *param_1 = *param_1 + ((uint)param_2[1] & 0xff) + 0x2d;
  }
  else {
    *param_1 = (uint)param_2[1] + *param_1 + 0x2d;
    if ((long *)0x1 < plVar3) {
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
        (*(code *)plVar3[1])();
      }
    }
  }
  return;
}



/* Entry: 104a883b8; end: 104a88413;  */

void FUN_104a883b8(ulong *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong *puVar2;
  long lVar3;
  
  puVar2 = param_1 + 1;
  uVar1 = *param_1;
  if ((uVar1 & 1) != 0) {
    puVar2 = (ulong *)*puVar2;
  }
  if (1 < uVar1) {
    lVar3 = (uVar1 >> 1) << 5;
    do {
      FUN_104a88414(param_2,puVar2);
      puVar2 = puVar2 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  return;
}



/* Entry: 104a88414; end: 104a884d3;  */

void FUN_104a88414(int *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  uint uVar8;
  long *plStack_48;
  uint uStack_40;
  long lStack_28;
  
  uVar6 = (undefined4)((ulong)param_2 >> 0x20);
  iVar5 = (int)param_2;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104adf18c(&plStack_48,param_2);
  plVar3 = plStack_48;
  if (plStack_48 == (long *)0x0) {
    *param_1 = (uStack_40 & 0xff) + *param_1 + 0x2b;
  }
  else {
    *param_1 = uStack_40 + *param_1 + 0x2b;
    if ((long *)0x1 < plStack_48) {
      do {
        lVar7 = *plStack_48;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_48,0x10);
        if (bVar2) {
          *plStack_48 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plStack_48[1])();
        plVar3 = plStack_48;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    FUN_104bd46a0();
  }
  __Unwind_Resume();
  plVar4 = *(long **)CONCAT44(uVar6,iVar5);
  if ((long *)0x1 < plVar4) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar4 = *(long **)CONCAT44(uVar6,iVar5);
  }
  uVar8 = (uint)*(undefined8 *)(CONCAT44(uVar6,iVar5) + 8);
  if (plVar4 == (long *)0x0) {
    *(uint *)plVar3 = (int)*plVar3 + (uVar8 & 0xff) + 0x28;
  }
  else {
    *(uint *)plVar3 = uVar8 + (int)*plVar3 + 0x28;
    if ((long *)0x1 < plVar4) {
      do {
        lVar7 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plVar4[1])();
      }
    }
  }
  return;
}



/* Entry: 104a884d4; end: 104a8855b;  */

void FUN_104a884d4(int *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_2;
  if ((long *)0x1 < plVar3) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar3 = (long *)*param_2;
  }
  if (plVar3 == (long *)0x0) {
    *param_1 = *param_1 + ((uint)param_2[1] & 0xff) + 0x28;
  }
  else {
    *param_1 = (uint)param_2[1] + *param_1 + 0x28;
    if ((long *)0x1 < plVar3) {
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
        (*(code *)plVar3[1])();
      }
    }
  }
  return;
}



/* Entry: 104a8855c; end: 104a88583;  */

void FUN_104a8855c(undefined8 *param_1)

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
  if (lVar4 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000104a88580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}



/* Entry: 104a88584; end: 104a88617;  */

void FUN_104a88584(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uStack_28;
  
  *(code **)(param_1 + 0x78) = FUN_104a887b8;
  *(long *)(param_1 + 0x80) = param_1;
  *(undefined8 *)(param_1 + 0x88) = 0;
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x1a0);
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
  func_0x0001004bd618(uVar3,param_1 + 0x70,&uStack_28,"per-attempt timer fired");
  if ((uStack_28 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104a88618; end: 104a8864b;  */

long * FUN_104a88618(long *param_1)

{
  if (*param_1 != 0) {
    FUN_104a8b62c(param_1);
  }
  return param_1;
}



/* Entry: 104a8864c; end: 104a8864f;  */

void FUN_104a8864c(void)

{
  return;
}



/* Entry: 104a88650; end: 104a88797;  */

undefined8 * FUN_104a88650(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_1107c2fb8;
  if ((param_1[0x177] & 1) != 0) {
    func_0x00010084dad0();
  }
  puVar4 = (undefined8 *)param_1[0x176];
  if (puVar4 != (undefined8 *)0x0) {
    plVar1 = puVar4 + 1;
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
      (**(code **)*puVar4)();
    }
  }
  FUN_104a88618(param_1 + 0x16f);
  if ((param_1[0x16e] & 1) != 0) {
    func_0x00010084dad0();
  }
  puVar4 = (undefined8 *)param_1[0x16d];
  if (puVar4 != (undefined8 *)0x0) {
    plVar1 = puVar4 + 1;
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
      (**(code **)*puVar4)();
    }
  }
  if ((param_1[0x16c] & 1) != 0) {
    func_0x00010084dad0();
  }
  puVar4 = (undefined8 *)param_1[0x16b];
  if (puVar4 != (undefined8 *)0x0) {
    plVar1 = puVar4 + 1;
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
      (**(code **)*puVar4)();
    }
  }
  func_0x0001004e2bc8(param_1 + 0x11b);
  func_0x0001008373f8(param_1 + 0xf4);
  func_0x0001004e2bc8(param_1 + 0xaa);
  func_0x0001004e2bc8(param_1 + 0x69);
  func_0x0001004e2bc8(param_1 + 0x28);
  if ((param_1[0x26] & 1) != 0) {
    func_0x00010084dad0();
  }
  puVar4 = (undefined8 *)param_1[5];
  param_1[5] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)();
  }
  return param_1;
}



/* Entry: 104a88798; end: 104a887ab;  */

void FUN_104a88798(void)

{
  FUN_104a88650();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104a887ac; end: 104a887b7;  */

void FUN_104a887ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104a887b8; end: 104a889ab;  */

void FUN_104a887b8(long *param_1,long *param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong *puVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  ulong uVar11;
  ulong uStack_148;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 uStack_e9;
  ulong uStack_e8;
  ulong uStack_e0;
  undefined8 *puStack_d8;
  undefined8 auStack_d0 [19];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = param_1[2];
  auStack_d0[0] = 0;
  if ((*param_2 == 0) && ((char)param_1[0x12] != '\0')) {
    *(undefined1 *)(param_1 + 0x12) = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_108 = 0;
    FUN_104ab5920(&uStack_e8,2,"retry perAttemptRecvTimeout exceeded",0x24,&uStack_e9,&uStack_108);
    FUN_104abaa50(&uStack_e0,&uStack_e8,3,1);
    FUN_104a889ac(param_1,&uStack_e0,auStack_d0);
    if ((uStack_e0 & 1) != 0) {
      func_0x00010084dad0();
    }
    if ((uStack_e8 & 1) != 0) {
      func_0x00010084dad0();
    }
    puStack_d8 = &uStack_108;
    func_0x000100482b64(&puStack_d8);
    param_3 = 0;
    plVar3 = param_1;
    FUN_104a88ae8(param_1,0,0,0);
    if ((int)plVar3 == 0) {
      FUN_104a872a4(lVar10,param_1);
      func_0x0001008e2028(param_1);
    }
    else {
      FUN_104a8764c(param_1);
      param_3 = 0;
      func_0x000104a88bb0(lVar10,0,0);
    }
  }
  puVar7 = *(ulong **)(lVar10 + 0x1a0);
  func_0x0001004dffa0(auStack_d0);
  plVar3 = param_1 + 1;
  do {
    lVar8 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar8 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar8 + -1 == 0) {
    (**(code **)(*param_1 + 8))(param_1);
  }
  plVar3 = *(long **)(lVar10 + 0x198);
  do {
    lVar10 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar10 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar10 + -1 == 0) {
    func_0x000100836ca4();
  }
  puVar4 = auStack_d0;
  func_0x0001004e0194();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if ((int)puVar7 != 0) {
    FUN_104bd46a0();
    func_0x0001004bdf74(&uStack_e0);
    func_0x0001004bdf74(&uStack_e8);
    puStack_d8 = &uStack_108;
    func_0x000100482b64(&puStack_d8);
    func_0x0001004e0194(auStack_d0);
  }
  __Unwind_Resume();
  if ((*(ushort *)(puVar4 + 0x16a) >> 8 & 1) != 0) {
    return;
  }
  *(ushort *)(puVar4 + 0x16a) = *(ushort *)(puVar4 + 0x16a) | 0x100;
  puVar5 = puVar4;
  func_0x0001004e1918();
  uVar11 = *puVar7;
  uStack_148 = uVar11;
  if ((uVar11 & 1) == 0) {
    *(byte *)(puVar5 + 5) = *(byte *)(puVar5 + 5) | 0x40;
    puVar7 = (ulong *)(puVar5[4] + 0x98);
    uVar6 = *puVar7;
    if (uVar11 != uVar6) {
LAB_104a88a80:
      *puVar7 = uVar11;
      if ((uVar6 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    puVar5[0xc] = FUN_104a8b484;
    puVar5[0xd] = puVar5;
    puVar5[0xe] = 0;
    if ((uVar11 & 1) == 0) goto LAB_1004e2dfc;
  }
  else {
    piVar9 = (int *)(uVar11 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar2) {
        *piVar9 = *piVar9 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *(byte *)(puVar5 + 5) = *(byte *)(puVar5 + 5) | 0x40;
    puVar7 = (ulong *)(puVar5[4] + 0x98);
    uVar6 = *puVar7;
    if (uVar11 != uVar6) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar2) {
          *piVar9 = *piVar9 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      goto LAB_104a88a80;
    }
    puVar5[0xc] = FUN_104a8b484;
    puVar5[0xd] = puVar5;
    puVar5[0xe] = 0;
  }
  func_0x00010084dad0(uVar11);
LAB_1004e2dfc:
  puVar5[6] = puVar4[5];
  puVar5[8] = &UNK_1004e2e7c;
  puVar5[9] = puVar5 + 3;
  puVar5[10] = 0;
  uStack_148 = 0;
  func_0x0001004dfd88(param_3,&stack0xfffffffffffffec8,&uStack_148,&stack0xfffffffffffffec0);
  if ((uStack_148 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104a889ac; end: 104a88ae7;  */

void FUN_104a889ac(long param_1,ulong *param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  int *piVar6;
  ulong uVar7;
  ulong uStack_38;
  
  if ((*(ushort *)(param_1 + 0xb50) >> 8 & 1) != 0) {
    return;
  }
  *(ushort *)(param_1 + 0xb50) = *(ushort *)(param_1 + 0xb50) | 0x100;
  lVar3 = param_1;
  func_0x0001004e1918(param_1,1,1);
  uVar7 = *param_2;
  uStack_38 = uVar7;
  if ((uVar7 & 1) == 0) {
    *(byte *)(lVar3 + 0x28) = *(byte *)(lVar3 + 0x28) | 0x40;
    puVar5 = (ulong *)(*(long *)(lVar3 + 0x20) + 0x98);
    uVar4 = *puVar5;
    if (uVar7 != uVar4) {
LAB_104a88a80:
      *puVar5 = uVar7;
      if ((uVar4 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    *(code **)(lVar3 + 0x60) = FUN_104a8b484;
    *(long *)(lVar3 + 0x68) = lVar3;
    *(undefined8 *)(lVar3 + 0x70) = 0;
    if ((uVar7 & 1) == 0) goto LAB_104a88aa8;
  }
  else {
    piVar6 = (int *)(uVar7 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar2) {
        *piVar6 = *piVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *(byte *)(lVar3 + 0x28) = *(byte *)(lVar3 + 0x28) | 0x40;
    puVar5 = (ulong *)(*(long *)(lVar3 + 0x20) + 0x98);
    uVar4 = *puVar5;
    if (uVar7 != uVar4) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = *piVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      goto LAB_104a88a80;
    }
    *(code **)(lVar3 + 0x60) = FUN_104a8b484;
    *(long *)(lVar3 + 0x68) = lVar3;
    *(undefined8 *)(lVar3 + 0x70) = 0;
  }
  func_0x00010084dad0(uVar7);
LAB_104a88aa8:
  *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(lVar3 + 0x40) = &UNK_1004e2e7c;
  *(long *)(lVar3 + 0x48) = lVar3 + 0x18;
  *(undefined8 *)(lVar3 + 0x50) = 0;
  uStack_38 = 0;
  func_0x0001004dfd88(param_3,&stack0xffffffffffffffd8,&uStack_38,&stack0xffffffffffffffd0);
  if ((uStack_38 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104a88ae8; end: 104a88cbb;  */

long * FUN_104a88ae8(long param_1,ulong param_2,long param_3,char param_4)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (*(long *)(lVar4 + 0x18) == 0) {
    return (long *)0x0;
  }
  if ((param_2 & 0xff00000000) != 0) {
    if ((uint)param_2 == 0) {
      if (*(long *)(lVar4 + 0x10) == 0) {
        return (long *)0x0;
      }
      FUN_104a8d014();
      return (long *)0x0;
    }
    if ((*(uint *)(*(long *)(lVar4 + 0x18) + 0x24) >> (ulong)((uint)param_2 & 0x1f) & 1) == 0) {
      return (long *)0x0;
    }
  }
  lVar2 = *(long *)(lVar4 + 0x10);
  if (lVar2 != 0) {
    func_0x000104a8cfb8();
    if ((int)lVar2 == 0) {
      return (long *)0x0;
    }
    lVar4 = *(long *)(param_1 + 0x10);
  }
  if ((((*(byte *)(lVar4 + 0x238) >> 3 & 1) == 0) &&
      (iVar1 = *(int *)(lVar4 + 0x23c) + 1, *(int *)(lVar4 + 0x23c) = iVar1,
      iVar1 < *(int *)(*(long *)(lVar4 + 0x18) + 8))) && ((param_4 == '\0' || (-1 < param_3)))) {
    plVar3 = (long *)(*(long *)(*(long *)(lVar4 + 0x1a8) + 0x40) + 0x28);
                    /* WARNING: Could not recover jumptable at 0x000104a88bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return plVar3;
  }
  return (long *)0x0;
}



/* Entry: 104a88cbc; end: 104a88ccf;  */

void FUN_104a88cbc(void)

{
  func_0x0001008e20cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104a88cd0; end: 104a88d33;  */

ulong * FUN_104a88cd0(ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 unaff_x20;
  ulong uVar8;
  ulong *puVar9;
  
  puVar9 = param_1 + 1;
  if ((*param_1 & 1) == 0) {
    uVar7 = 3;
  }
  else {
    puVar9 = (ulong *)param_1[1];
    uVar7 = param_1[2];
  }
  uVar6 = *param_1 >> 1;
  if (uVar6 != uVar7) {
    puVar9 = puVar9 + uVar6 * 2;
    FUN_104a88db8(puVar9);
    *param_1 = *param_1 + 2;
    return puVar9;
  }
  puVar9 = param_1 + 1;
  uVar7 = *param_1;
  if ((uVar7 & 1) == 0) {
    uVar6 = 6;
  }
  else {
    if ((param_1[2] >> 0x3b & 0xf) != 0) {
      FUN_104a7757c();
      __ZdlPv(unaff_x20);
      __Unwind_Resume();
      *(ushort *)(param_1[2] + 0xb50) = *(ushort *)(param_1[2] + 0xb50) | 0x40;
      *(byte *)(param_1 + 5) = (byte)param_1[5] | 0x20;
      uVar7 = param_1[2];
      func_0x00010083228c(uVar7 + 0x8d8);
      puVar9 = (ulong *)(uVar7 + 0xac8);
      func_0x0001004e2b40(puVar9);
      uVar7 = param_1[2];
      uVar6 = param_1[4];
      *(ulong *)(uVar6 + 0x80) = uVar7 + 0x8d8;
      *(ulong *)(uVar6 + 0x88) = uVar7 + 0xae0;
      *(code **)(uVar7 + 0xb18) = FUN_104a88fb8;
      *(ulong **)(uVar7 + 0xb20) = param_1;
      *(undefined8 *)(uVar7 + 0xb28) = 0;
      *(ulong *)(param_1[4] + 0x90) = param_1[2] + 0xb10;
      return puVar9;
    }
    puVar9 = (ulong *)param_1[1];
    uVar6 = param_1[2] << 1;
  }
  uVar8 = uVar7 >> 1;
  uVar4 = uVar6 << 4;
  __Znwm();
  puVar1 = (ulong *)(uVar4 + uVar8 * 0x10);
  FUN_104a88db8(puVar1,param_2,param_3);
  if (1 < uVar7) {
    lVar5 = 0;
    uVar7 = uVar8;
    do {
      puVar2 = (undefined8 *)((long)puVar9 + lVar5);
      uVar3 = puVar2[1];
      *(undefined8 *)(uVar4 + lVar5) = *puVar2;
      ((undefined8 *)(uVar4 + lVar5))[1] = uVar3;
      *puVar2 = 0;
      puVar2[1] = 0x36;
      lVar5 = lVar5 + 0x10;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
    puVar9 = puVar9 + uVar8 * 2;
    do {
      puVar9 = puVar9 + -2;
      FUN_104a87884(puVar9);
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  uVar7 = *param_1;
  if ((uVar7 & 1) != 0) {
    __ZdlPv(param_1[1]);
    uVar7 = *param_1;
  }
  param_1[1] = uVar4;
  param_1[2] = uVar6;
  *param_1 = (uVar7 | 1) + 2;
  return puVar1;
}



/* Entry: 104a88d34; end: 104a88db7;  */

void FUN_104a88d34(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uStack_38;
  
  lVar4 = param_1;
  func_0x0001004e1918(param_1,2,0);
  FUN_104a88f34();
  puVar5 = *(undefined8 **)(param_1 + 0xbb0);
  if (puVar5 != (undefined8 *)0x0) {
    plVar1 = puVar5 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)*puVar5)();
    }
  }
  *(long *)(param_1 + 0xbb0) = lVar4;
  *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(lVar4 + 0x40) = &UNK_1004e2e7c;
  *(long *)(lVar4 + 0x48) = lVar4 + 0x18;
  *(undefined8 *)(lVar4 + 0x50) = 0;
  uStack_38 = 0;
  func_0x0001004dfd88(param_2,&stack0xffffffffffffffd8,&uStack_38,&stack0xffffffffffffffd0);
  if ((uStack_38 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104a88db8; end: 104a88e13;  */

void FUN_104a88db8(undefined8 *param_1,undefined8 *param_2,ulong *param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  int *piVar5;
  
  uVar4 = *param_2;
  *param_2 = 0;
  uVar3 = *param_3;
  if ((uVar3 & 1) == 0) {
    *param_1 = uVar4;
    param_1[1] = uVar3;
  }
  else {
    piVar5 = (int *)(uVar3 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = *piVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *param_1 = uVar4;
    param_1[1] = uVar3;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = *piVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104a88e14; end: 104a88f33;  */

long FUN_104a88e14(ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  
  puVar8 = param_1 + 1;
  uVar9 = *param_1;
  if ((uVar9 & 1) == 0) {
    uVar6 = 6;
  }
  else {
    if ((param_1[2] >> 0x3b & 0xf) != 0) {
      FUN_104a7757c();
      __ZdlPv();
      __Unwind_Resume();
      *(ushort *)(param_1[2] + 0xb50) = *(ushort *)(param_1[2] + 0xb50) | 0x40;
      *(byte *)(param_1 + 5) = (byte)param_1[5] | 0x20;
      uVar9 = param_1[2];
      func_0x00010083228c(uVar9 + 0x8d8);
      lVar4 = uVar9 + 0xac8;
      func_0x0001004e2b40(lVar4);
      uVar9 = param_1[2];
      uVar6 = param_1[4];
      *(ulong *)(uVar6 + 0x80) = uVar9 + 0x8d8;
      *(ulong *)(uVar6 + 0x88) = uVar9 + 0xae0;
      *(code **)(uVar9 + 0xb18) = FUN_104a88fb8;
      *(ulong **)(uVar9 + 0xb20) = param_1;
      *(undefined8 *)(uVar9 + 0xb28) = 0;
      *(ulong *)(param_1[4] + 0x90) = param_1[2] + 0xb10;
      return lVar4;
    }
    puVar8 = (ulong *)param_1[1];
    uVar6 = param_1[2] << 1;
  }
  uVar7 = uVar9 >> 1;
  uVar3 = uVar6 << 4;
  __Znwm();
  lVar4 = uVar3 + uVar7 * 0x10;
  FUN_104a88db8(lVar4,param_2,param_3);
  if (1 < uVar9) {
    lVar5 = 0;
    uVar9 = uVar7;
    do {
      puVar1 = (undefined8 *)((long)puVar8 + lVar5);
      uVar2 = puVar1[1];
      *(undefined8 *)(uVar3 + lVar5) = *puVar1;
      ((undefined8 *)(uVar3 + lVar5))[1] = uVar2;
      *puVar1 = 0;
      puVar1[1] = 0x36;
      lVar5 = lVar5 + 0x10;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
    puVar8 = puVar8 + uVar7 * 2;
    do {
      puVar8 = puVar8 + -2;
      FUN_104a87884(puVar8);
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar9 = *param_1;
  if ((uVar9 & 1) != 0) {
    __ZdlPv(param_1[1]);
    uVar9 = *param_1;
  }
  param_1[1] = uVar3;
  param_1[2] = uVar6;
  *param_1 = (uVar9 | 1) + 2;
  return lVar4;
}



/* Entry: 104a88f34; end: 104a88fb7;  */

void FUN_104a88f34(long param_1)

{
  long lVar1;
  long lVar2;
  
  *(ushort *)(*(long *)(param_1 + 0x10) + 0xb50) =
       *(ushort *)(*(long *)(param_1 + 0x10) + 0xb50) | 0x40;
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 0x20;
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010083228c(lVar2 + 0x8d8);
  func_0x0001004e2b40(lVar2 + 0xac8);
  lVar2 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x20);
  *(long *)(lVar1 + 0x80) = lVar2 + 0x8d8;
  *(long *)(lVar1 + 0x88) = lVar2 + 0xae0;
  *(code **)(lVar2 + 0xb18) = FUN_104a88fb8;
  *(long *)(lVar2 + 0xb20) = param_1;
  *(undefined8 *)(lVar2 + 0xb28) = 0;
  *(long *)(*(long *)(param_1 + 0x20) + 0x90) = *(long *)(param_1 + 0x10) + 0xb10;
  return;
}



/* Entry: 104a88fb8; end: 104a8995b;  */

void FUN_104a88fb8(undefined8 *param_1,ulong *param_2)

{
  long **pplVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  char **ppcVar6;
  long **pplVar7;
  undefined8 uVar8;
  int *piVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  undefined8 uVar21;
  char *pcVar22;
  char cVar23;
  uint *puVar24;
  uint uVar25;
  ulong uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  char *pcStack_158;
  uint uStack_14c;
  long *plStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  char *pcStack_118;
  undefined8 *puStack_110;
  char *apcStack_108 [19];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_148 = *(long **)(*(long *)(param_1[2] + 0x10) + 0x198);
  do {
    cVar23 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plStack_148,0x10);
    if (bVar3) {
      *plStack_148 = *plStack_148 + 1;
      cVar23 = ExclusiveMonitorsStatus();
    }
  } while (cVar23 != '\0');
  uVar13 = param_1[2];
  lVar17 = *(long *)(uVar13 + 0x10);
  *(ushort *)(uVar13 + 0xb50) = *(ushort *)(uVar13 + 0xb50) | 0x80;
  if ((*(byte *)(uVar13 + 0xbc0) >> 1 & 1) != 0) {
    func_0x000100612044(*(undefined8 *)(lVar17 + 0x1a0),
                        "recv_trailing_metadata_ready for abandoned attempt");
    goto LAB_104a89610;
  }
  if (*(char *)(uVar13 + 0x90) != '\0') {
    *(undefined1 *)(uVar13 + 0x90) = 0;
    func_0x0001005a5960(uVar13 + 0x38);
  }
  uStack_14c = 0;
  puVar24 = *(uint **)(param_1[4] + 0x80);
  uVar8 = *(undefined8 *)(lVar17 + 0x188);
  pcVar22 = (char *)*param_2;
  pcStack_158 = pcVar22;
  if (((ulong)pcVar22 & 1) == 0) {
    if (pcVar22 != (char *)0x0) goto LAB_104a890a4;
    uVar25 = *puVar24;
    if ((uVar25 >> 10 & 1) == 0) {
      uStack_14c = 0;
    }
    else {
      uStack_14c = puVar24[0x62];
    }
    iVar5 = 0;
    if ((uVar25 >> 0xd & 1) != 0) goto LAB_104a8914c;
LAB_104a89114:
    uVar8 = 0;
    uVar21 = 0;
    if ((uVar25 >> 0x18 & 1) != 0) goto LAB_104a89120;
LAB_104a89158:
    cVar23 = '\0';
  }
  else {
    piVar9 = (int *)(pcVar22 + -1);
    do {
      cVar23 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar3) {
        *piVar9 = *piVar9 + 1;
        cVar23 = ExclusiveMonitorsStatus();
      }
    } while (cVar23 != '\0');
    do {
      cVar23 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar3) {
        *piVar9 = *piVar9 + 1;
        cVar23 = ExclusiveMonitorsStatus();
      }
    } while (cVar23 != '\0');
LAB_104a890a4:
    apcStack_108[0] = pcVar22;
    func_0x000100831658(apcStack_108,uVar8,&uStack_14c,0,0,0);
    if (((ulong)apcStack_108[0] & 1) != 0) {
      func_0x00010084dad0();
    }
    puStack_110 = (undefined8 *)0x0;
    if (((ulong)pcVar22 & 1) != 0) {
      piVar9 = (int *)(pcVar22 + -1);
      do {
        cVar23 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = *piVar9 + 1;
          cVar23 = ExclusiveMonitorsStatus();
        }
      } while (cVar23 != '\0');
    }
    ppcVar6 = &pcStack_118;
    pcStack_118 = pcVar22;
    func_0x00010084d7f0(ppcVar6,0xe,&puStack_110);
    iVar5 = 0;
    if (puStack_110 != (undefined8 *)0x0) {
      iVar5 = (int)ppcVar6;
    }
    if (((ulong)pcStack_118 & 1) != 0) {
      func_0x00010084dad0();
    }
    uVar25 = *puVar24;
    if ((uVar25 >> 0xd & 1) == 0) goto LAB_104a89114;
LAB_104a8914c:
    uVar21 = *(undefined8 *)(puVar24 + 0x5c);
    uVar8 = 1;
    if ((uVar25 >> 0x18 & 1) == 0) goto LAB_104a89158;
LAB_104a89120:
    cVar23 = (char)puVar24[0xe];
  }
  if (((ulong)pcVar22 & 1) != 0) {
    func_0x00010084dad0(pcVar22);
  }
  if (iVar5 != 0) goto LAB_104a891e4;
  if (((uVar25 >> 0x18 & 1) == 0) || (bVar2 = *(byte *)(lVar17 + 0x238), (bVar2 >> 3 & 1) != 0)) {
LAB_104a89198:
    uVar20 = uVar13;
    func_0x000104a88ae8(uVar13,(ulong)uStack_14c | 0x100000000,uVar21,uVar8);
    if ((int)uVar20 == 0) {
LAB_104a891e4:
      FUN_104a872a4(lVar17,uVar13);
      func_0x0001008e2028(uVar13);
      uStack_188 = *param_2;
      if ((uStack_188 & 1) != 0) {
        piVar9 = (int *)(uStack_188 - 1);
        do {
          cVar23 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar3) {
            *piVar9 = *piVar9 + 1;
            cVar23 = ExclusiveMonitorsStatus();
          }
        } while (cVar23 != '\0');
        do {
          cVar23 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar3) {
            *piVar9 = *piVar9 + 1;
            cVar23 = ExclusiveMonitorsStatus();
          }
        } while (cVar23 != '\0');
      }
      apcStack_108[0] = (char *)0x0;
      lVar19 = param_1[2];
      lVar18 = *(long *)(lVar19 + 0x10);
      lVar17 = 0x1d8;
LAB_104a89248:
      lVar11 = *(long *)(lVar18 + lVar17);
      uStack_138 = uStack_188;
      if (((lVar11 == 0) || ((*(byte *)(lVar11 + 0x10) >> 5 & 1) == 0)) ||
         (*(long *)(*(long *)(lVar11 + 8) + 0x90) == 0)) goto LAB_104a89264;
      func_0x000104adfb90(lVar19 + 0xae0,*(undefined8 *)(*(long *)(lVar11 + 8) + 0x88));
      plVar14 = (long *)(lVar18 + lVar17);
      func_0x0001004e23e0(*(undefined8 *)(*(long *)(*plVar14 + 8) + 0x80),param_1[2] + 0x8d8);
      puStack_110 = *(undefined8 **)(*(long *)(*plVar14 + 8) + 0x90);
      if ((uStack_188 & 1) != 0) {
        piVar9 = (int *)(uStack_188 - 1);
        do {
          cVar23 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar3) {
            *piVar9 = *piVar9 + 1;
            cVar23 = ExclusiveMonitorsStatus();
          }
        } while (cVar23 != '\0');
      }
      pcStack_118 = "recv_trailing_metadata_ready for pending batch";
      uStack_120 = uStack_188;
      func_0x0001004dfd88(apcStack_108,&puStack_110,&uStack_120,&pcStack_118);
      if ((uStack_120 & 1) != 0) {
        func_0x00010084dad0();
      }
      *(undefined8 *)(*(long *)(*plVar14 + 8) + 0x90) = 0;
      func_0x0001008e1f84(lVar18,plVar14);
      if ((uStack_188 & 1) == 0) goto LAB_104a892ac;
      goto LAB_104a892a4;
    }
    bVar3 = true;
  }
  else if (cVar23 == '\0') {
    bVar3 = false;
  }
  else {
    if ((cVar23 != '\x01') || ((bVar2 >> 6 & 1) != 0)) goto LAB_104a89198;
    bVar3 = false;
    *(byte *)(lVar17 + 0x238) = bVar2 | 0x40;
  }
  apcStack_108[0] = (char *)0x0;
  uVar20 = *param_2;
  if (uVar20 == 0) {
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    FUN_104ab5920(&uStack_168,2,"call attempt failed",0x13,&pcStack_118,&uStack_180);
    FUN_104abaa50(&uStack_160,&uStack_168,3,1);
  }
  else {
    uStack_160 = uVar20;
    if ((uVar20 & 1) != 0) {
      piVar9 = (int *)(uVar20 - 1);
      do {
        cVar23 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar4) {
          *piVar9 = *piVar9 + 1;
          cVar23 = ExclusiveMonitorsStatus();
        }
      } while (cVar23 != '\0');
    }
  }
  FUN_104a889ac(uVar13,&uStack_160,apcStack_108);
  if (uVar20 == 0) {
    if ((uStack_160 & 1) != 0) {
      func_0x00010084dad0();
    }
    if ((uStack_168 & 1) != 0) {
      func_0x00010084dad0();
    }
    puStack_110 = &uStack_180;
    func_0x000100482b64(&puStack_110);
    if (!bVar3) goto LAB_104a89598;
LAB_104a8955c:
    func_0x000104a88bb0(lVar17,uVar21,uVar8);
  }
  else {
    if ((uStack_160 & 1) != 0) {
      func_0x00010084dad0();
    }
    if (bVar3) goto LAB_104a8955c;
LAB_104a89598:
    plVar14 = *(long **)(lVar17 + 0x198);
    do {
      cVar23 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar3) {
        *plVar14 = *plVar14 + 1;
        cVar23 = ExclusiveMonitorsStatus();
      }
    } while (cVar23 != '\0');
    puStack_110 = (undefined8 *)(lVar17 + 0x278);
    *(code **)(lVar17 + 0x280) = FUN_104a8995c;
    *(long *)(lVar17 + 0x288) = lVar17;
    *(undefined8 *)(lVar17 + 0x290) = 0;
    uStack_120 = 0;
    pcStack_118 = "start transparent retry";
    func_0x0001004dfd88(apcStack_108,&puStack_110,&uStack_120,&pcStack_118);
    if ((uStack_120 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  FUN_104a8764c(uVar13);
  func_0x0001004dffa0(apcStack_108,*(undefined8 *)(lVar17 + 0x1a0));
  func_0x0001004e0194(apcStack_108);
LAB_104a89610:
  while( true ) {
    plVar14 = param_1 + 1;
    do {
      lVar17 = *plVar14;
      cVar23 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar3) {
        *plVar14 = lVar17 + -1;
        cVar23 = ExclusiveMonitorsStatus();
      }
    } while (cVar23 != '\0');
    if (lVar17 + -1 == 0) {
      (**(code **)*param_1)(param_1);
    }
    pplVar7 = &plStack_148;
    FUN_104a8a3a8();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) break;
    ___stack_chk_fail();
LAB_104a897b0:
    (*(code *)**pplVar7)();
LAB_104a896e0:
    *(undefined8 *)(uVar13 + 0xb58) = 0;
    puStack_110 = (undefined8 *)0x0;
    uVar13 = *(ulong *)(param_1[2] + 0xb60);
    if (uVar13 != 0) {
      *(undefined8 *)(param_1[2] + 0xb60) = 0;
      puStack_110 = (undefined8 *)0x36;
      if ((uVar13 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    func_0x0001004bdf74(&puStack_110);
    lVar17 = param_1[2];
LAB_104a892b8:
    if (*(long *)(lVar17 + 0xb68) != 0) {
      uStack_128 = *(ulong *)(lVar17 + 0xb70);
      if ((uStack_128 & 1) != 0) {
        piVar9 = (int *)(uStack_128 - 1);
        do {
          cVar23 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar3) {
            *piVar9 = *piVar9 + 1;
            cVar23 = ExclusiveMonitorsStatus();
          }
        } while (cVar23 != '\0');
      }
      FUN_104a8a244(param_1,&uStack_128,apcStack_108);
      func_0x0001004bdf74(&uStack_128);
      lVar17 = param_1[2];
      puVar12 = *(undefined8 **)(lVar17 + 0xb68);
      if (puVar12 != (undefined8 *)0x0) {
        plVar14 = puVar12 + 1;
        do {
          lVar19 = *plVar14;
          cVar23 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar3) {
            *plVar14 = lVar19 + -1;
            cVar23 = ExclusiveMonitorsStatus();
          }
        } while (cVar23 != '\0');
        if (lVar19 + -1 == 0) {
          (**(code **)*puVar12)();
        }
      }
      *(undefined8 *)(lVar17 + 0xb68) = 0;
      puStack_110 = (undefined8 *)0x0;
      uVar13 = *(ulong *)(param_1[2] + 0xb70);
      if (uVar13 != 0) {
        *(undefined8 *)(param_1[2] + 0xb70) = 0;
        puStack_110 = (undefined8 *)0x36;
        if ((uVar13 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      func_0x0001004bdf74(&puStack_110);
      lVar17 = param_1[2];
    }
    uVar13 = *(ulong *)(lVar17 + 0xb78);
    plVar14 = (long *)(lVar17 + 0xb80);
    if ((uVar13 & 1) != 0) {
      plVar14 = (long *)*plVar14;
    }
    if (1 < uVar13) {
      plVar15 = plVar14;
      do {
        lVar17 = *plVar15;
        uStack_130 = plVar15[1];
        if ((uStack_130 & 1) != 0) {
          piVar9 = (int *)(uStack_130 - 1);
          do {
            cVar23 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
            if (bVar3) {
              *piVar9 = *piVar9 + 1;
              cVar23 = ExclusiveMonitorsStatus();
            }
          } while (cVar23 != '\0');
        }
        puStack_110 = (undefined8 *)(lVar17 + 0x58);
        pcStack_118 = "resuming on_complete";
        func_0x0001004dfd88(apcStack_108,&puStack_110,&uStack_130,&pcStack_118);
        if ((uStack_130 & 1) != 0) {
          func_0x00010084dad0();
        }
        plVar16 = plVar15 + 2;
        *plVar15 = 0;
        plVar15 = plVar16;
      } while (plVar16 != plVar14 + (uVar13 & 0xfffffffffffffffe));
      lVar17 = param_1[2];
    }
    FUN_104a87804(lVar17 + 0xb78);
    uStack_140 = uStack_188;
    piVar9 = (int *)(uStack_188 - 1);
    if ((uStack_188 & 1) != 0) {
      do {
        cVar23 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = *piVar9 + 1;
          cVar23 = ExclusiveMonitorsStatus();
        }
      } while (cVar23 != '\0');
    }
    lVar17 = 0;
    lVar19 = *(long *)(param_1[2] + 0x10);
    do {
      lVar18 = lVar19 + lVar17 * 0x10;
      puVar12 = *(undefined8 **)(lVar18 + 0x1d8);
      if ((puVar12 != (undefined8 *)0x0) &&
         (puVar10 = (undefined8 *)*puVar12, puVar10 != (undefined8 *)0x0)) {
        lVar11 = param_1[2];
        bVar2 = *(byte *)(puVar12 + 2);
        if (((((bVar2 & 1) != 0) && ((*(ushort *)(lVar11 + 0xb50) & 1) == 0)) ||
            (((bVar2 >> 2 & 1) != 0 &&
             (*(ulong *)(lVar11 + 0xb30) < *(ulong *)(*(long *)(lVar11 + 0x10) + 0x4b8) >> 1)))) ||
           (((bVar2 >> 1 & 1) != 0 && ((*(ushort *)(lVar11 + 0xb50) >> 2 & 1) == 0)))) {
          uStack_120 = uStack_188;
          if ((uStack_188 & 1) != 0) {
            do {
              cVar23 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
              if (bVar3) {
                *piVar9 = *piVar9 + 1;
                cVar23 = ExclusiveMonitorsStatus();
              }
            } while (cVar23 != '\0');
          }
          pcStack_118 = "failing on_complete for pending batch";
          puStack_110 = puVar10;
          func_0x0001004dfd88(apcStack_108,&puStack_110,&uStack_120,&pcStack_118);
          if ((uStack_120 & 1) != 0) {
            func_0x00010084dad0();
          }
          **(undefined8 **)(lVar18 + 0x1d8) = 0;
          func_0x0001008e1f84(lVar19);
        }
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 != 6);
    if ((uStack_188 & 1) != 0) {
      func_0x00010084dad0(uStack_188);
    }
    func_0x0001004dffa0(apcStack_108,*(undefined8 *)(*(long *)(param_1[2] + 0x10) + 0x1a0));
    func_0x0001004e0194(apcStack_108);
    uVar13 = uStack_188;
    if ((uStack_188 & 1) != 0) {
      func_0x00010084dad0(uStack_188);
    }
  }
  return;
LAB_104a89264:
  lVar17 = lVar17 + 0x10;
  if (lVar17 == 0x238) {
    uVar13 = *(ulong *)(lVar19 + 3000);
    if (uStack_188 != uVar13) {
      if ((uStack_188 & 1) != 0) {
        piVar9 = (int *)(uStack_188 - 1);
        do {
          cVar23 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar3) {
            *piVar9 = *piVar9 + 1;
            cVar23 = ExclusiveMonitorsStatus();
          }
        } while (cVar23 != '\0');
      }
      *(ulong *)(lVar19 + 3000) = uStack_188;
      if ((uVar13 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    if ((uStack_188 & 1) != 0) {
LAB_104a892a4:
      func_0x00010084dad0(uStack_188);
    }
LAB_104a892ac:
    lVar17 = param_1[2];
    if (*(long *)(lVar17 + 0xb58) == 0) goto LAB_104a892b8;
    uStack_120 = *(ulong *)(lVar17 + 0xb60);
    if ((uStack_120 & 1) != 0) {
      piVar9 = (int *)(uStack_120 - 1);
      do {
        cVar23 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = *piVar9 + 1;
          cVar23 = ExclusiveMonitorsStatus();
        }
      } while (cVar23 != '\0');
    }
    FUN_104a8a12c(param_1,&uStack_120,apcStack_108);
    func_0x0001004bdf74(&uStack_120);
    uVar13 = param_1[2];
    pplVar7 = *(long ***)(uVar13 + 0xb58);
    if (pplVar7 == (long **)0x0) goto LAB_104a896e0;
    pplVar1 = pplVar7 + 1;
    do {
      plVar14 = *pplVar1;
      cVar23 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pplVar1,0x10);
      if (bVar3) {
        *pplVar1 = (long *)((long)plVar14 + -1);
        cVar23 = ExclusiveMonitorsStatus();
      }
    } while (cVar23 != '\0');
    if ((long *)((long)plVar14 + -1) == (long *)0x0) goto LAB_104a897b0;
    goto LAB_104a896e0;
  }
  goto LAB_104a89248;
}



/* Entry: 104a8995c; end: 104a89a03;  */

void FUN_104a8995c(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uStack_38;
  undefined1 uStack_29;
  ulong uStack_28;
  
  if (*(long *)(param_1 + 0x1b0) == 0) {
    func_0x0001004e0c00(param_1,1);
  }
  else {
    func_0x000100612044(*(undefined8 *)(param_1 + 0x1a0),"call cancelled before transparent retry");
  }
  plVar4 = *(long **)(param_1 + 0x198);
  do {
    lVar5 = *plVar4;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar5 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar5 + -1 == 0) {
    plVar3 = plVar4;
    func_0x000100836ca0();
    if ((((ulong)plVar3 & 1) == 0) &&
       (func_0x000100460dc4(), (*(byte *)(*plVar3 + 0x28) >> 1 & 1) != 0)) {
      uStack_28 = 0;
      func_0x0001004c1168(plVar4 + 1,&uStack_28,0,0);
      if ((uStack_28 & 1) == 0) {
        return;
      }
      func_0x00010084dad0();
      return;
    }
    uStack_38 = 0;
    func_0x0001004bd7e8(&uStack_29,plVar4 + 1,&uStack_38);
    if ((uStack_38 & 1) != 0) {
      func_0x00010084dad0();
    }
    return;
  }
  return;
}



/* Entry: 104a89a04; end: 104a89a37;  */

long FUN_104a89a04(long param_1,long param_2)

{
  if (param_1 != param_2) {
    FUN_104a89a38(param_1);
  }
  return param_1;
}



/* Entry: 104a89a38; end: 104a89a4f;  */

void FUN_104a89a38(ulong *param_1,ulong *param_2)

{
  bool bVar1;
  ulong ****ppppuVar2;
  ulong uVar3;
  ulong uVar4;
  ulong ****ppppuVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong ***pppuVar12;
  ulong uVar13;
  ulong ***pppuVar14;
  ulong ***pppuStack_70;
  ulong uStack_68;
  
  if ((*param_2 & 1) != 0) {
    puVar10 = param_1 + 1;
    uVar3 = *param_1;
    puVar6 = puVar10;
    if ((uVar3 & 1) != 0) {
      puVar6 = (ulong *)*puVar10;
    }
    if (1 < uVar3) {
      uVar3 = uVar3 >> 1;
      puVar6 = puVar6 + uVar3 * 4 + -3;
      do {
        if (*(char *)((long)puVar6 + 0x17) < '\0') {
          __ZdlPv(*puVar6);
        }
        puVar6 = puVar6 + -4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      uVar3 = *param_1;
    }
    if ((uVar3 & 1) != 0) {
      __ZdlPv(*puVar10);
    }
    *param_1 = *param_2;
    uVar3 = param_2[1];
    uVar11 = param_2[4];
    uVar4 = param_2[3];
    param_1[2] = param_2[2];
    *puVar10 = uVar3;
    param_1[4] = uVar11;
    param_1[3] = uVar4;
    *param_2 = 0;
    return;
  }
  puVar6 = param_2 + 1;
  uVar3 = *param_2 >> 1;
  if ((*param_1 & 1) == 0) {
    uVar4 = 1;
    puVar10 = param_1 + 1;
  }
  else {
    puVar10 = (ulong *)param_1[1];
    uVar4 = param_1[2];
  }
  uVar11 = *param_1 >> 1;
  pppuStack_70 = (ulong ***)0x0;
  uStack_68 = 0;
  if (uVar4 < uVar3) {
    uVar4 = uVar4 * 2;
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar4 = uVar3;
    }
    ppppuVar2 = &pppuStack_70;
    FUN_104a79a00();
    puVar7 = puVar10;
    uVar8 = uVar11;
    uVar9 = uVar3;
    ppppuVar5 = ppppuVar2;
    pppuStack_70 = (ulong ***)ppppuVar2;
    uStack_68 = uVar4;
  }
  else {
    puVar7 = puVar10 + uVar3 * 4;
    uVar8 = uVar11 - uVar3;
    bVar1 = uVar11 < uVar3;
    if (bVar1) {
      uVar8 = 0;
      puVar7 = (ulong *)0x0;
    }
    uVar9 = 0;
    if (bVar1) {
      uVar9 = uVar3 - uVar11;
    }
    uVar4 = uVar3;
    ppppuVar5 = (ulong ****)0x0;
    if (bVar1) {
      uVar4 = uVar11;
      ppppuVar5 = (ulong ****)(puVar10 + uVar11 * 4);
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar10 = *puVar6;
      if (*(char *)((long)puVar10 + 0x1f) < '\0') {
        __ZdlPv(puVar10[1]);
      }
      uVar13 = puVar6[2];
      uVar11 = puVar6[1];
      puVar10[3] = puVar6[3];
      puVar10[2] = uVar13;
      puVar10[1] = uVar11;
      *(undefined1 *)((long)puVar6 + 0x1f) = 0;
      *(undefined1 *)(puVar6 + 1) = 0;
      puVar6 = puVar6 + 4;
      puVar10 = puVar10 + 4;
    }
    ppppuVar2 = (ulong ****)0x0;
    if (uVar9 == 0) goto LAB_104a89c28;
  }
  ppppuVar5 = ppppuVar5 + 1;
  do {
    ppppuVar5[-1] = (ulong ***)*puVar6;
    pppuVar14 = (ulong ***)puVar6[2];
    pppuVar12 = (ulong ***)puVar6[1];
    ppppuVar5[2] = (ulong ***)puVar6[3];
    ppppuVar5[1] = pppuVar14;
    *ppppuVar5 = pppuVar12;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[1] = 0;
    puVar6 = puVar6 + 4;
    uVar9 = uVar9 - 1;
    ppppuVar5 = ppppuVar5 + 4;
  } while (uVar9 != 0);
LAB_104a89c28:
  if (uVar8 != 0) {
    puVar7 = puVar7 + uVar8 * 4 + -3;
    do {
      if (*(char *)((long)puVar7 + 0x17) < '\0') {
        __ZdlPv(*puVar7);
      }
      puVar7 = puVar7 + -4;
      uVar8 = uVar8 - 1;
      ppppuVar2 = (ulong ****)pppuStack_70;
    } while (uVar8 != 0);
  }
  if (ppppuVar2 == (ulong ****)0x0) {
    uVar3 = *param_1 & 1 | uVar3 << 1;
  }
  else {
    if ((*param_1 & 1) != 0) {
      __ZdlPv(param_1[1]);
      ppppuVar2 = (ulong ****)pppuStack_70;
    }
    param_1[1] = (ulong)ppppuVar2;
    param_1[2] = uStack_68;
    uVar3 = uVar3 << 1 | 1;
  }
  *param_1 = uVar3;
  return;
}



/* Entry: 104a89a50; end: 104a89af3;  */

void FUN_104a89a50(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  puVar3 = param_1 + 1;
  uVar1 = *param_1;
  puVar2 = puVar3;
  if ((uVar1 & 1) != 0) {
    puVar2 = (ulong *)*puVar3;
  }
  if (1 < uVar1) {
    uVar1 = uVar1 >> 1;
    puVar2 = puVar2 + uVar1 * 4 + -3;
    do {
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        __ZdlPv(*puVar2);
      }
      puVar2 = puVar2 + -4;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
    uVar1 = *param_1;
  }
  if ((uVar1 & 1) != 0) {
    __ZdlPv(*puVar3);
  }
  *param_1 = *param_2;
  uVar1 = param_2[1];
  uVar5 = param_2[4];
  uVar4 = param_2[3];
  param_1[2] = param_2[2];
  *puVar3 = uVar1;
  param_1[4] = uVar5;
  param_1[3] = uVar4;
  *param_2 = 0;
  return;
}



/* Entry: 104a89af4; end: 104a89cc3;  */

void FUN_104a89af4(ulong *param_1,ulong *param_2,ulong param_3)

{
  bool bVar1;
  ulong ****ppppuVar2;
  ulong uVar3;
  ulong ****ppppuVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong ***pppuVar10;
  ulong uVar11;
  ulong ***pppuVar12;
  ulong ***pppuStack_70;
  ulong uStack_68;
  
  if ((*param_1 & 1) == 0) {
    uVar3 = 1;
    puVar8 = param_1 + 1;
  }
  else {
    puVar8 = (ulong *)param_1[1];
    uVar3 = param_1[2];
  }
  uVar9 = *param_1 >> 1;
  pppuStack_70 = (ulong ***)0x0;
  uStack_68 = 0;
  if (uVar3 < param_3) {
    uVar3 = uVar3 * 2;
    if (uVar3 < param_3 || uVar3 - param_3 == 0) {
      uVar3 = param_3;
    }
    ppppuVar2 = &pppuStack_70;
    FUN_104a79a00();
    puVar5 = puVar8;
    uVar6 = uVar9;
    uVar7 = param_3;
    ppppuVar4 = ppppuVar2;
    pppuStack_70 = (ulong ***)ppppuVar2;
    uStack_68 = uVar3;
  }
  else {
    puVar5 = puVar8 + param_3 * 4;
    uVar6 = uVar9 - param_3;
    bVar1 = uVar9 < param_3;
    if (bVar1) {
      uVar6 = 0;
      puVar5 = (ulong *)0x0;
    }
    uVar7 = 0;
    if (bVar1) {
      uVar7 = param_3 - uVar9;
    }
    uVar3 = param_3;
    ppppuVar4 = (ulong ****)0x0;
    if (bVar1) {
      uVar3 = uVar9;
      ppppuVar4 = (ulong ****)(puVar8 + uVar9 * 4);
    }
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar8 = *param_2;
      if (*(char *)((long)puVar8 + 0x1f) < '\0') {
        __ZdlPv(puVar8[1]);
      }
      uVar11 = param_2[2];
      uVar9 = param_2[1];
      puVar8[3] = param_2[3];
      puVar8[2] = uVar11;
      puVar8[1] = uVar9;
      *(undefined1 *)((long)param_2 + 0x1f) = 0;
      *(undefined1 *)(param_2 + 1) = 0;
      param_2 = param_2 + 4;
      puVar8 = puVar8 + 4;
    }
    ppppuVar2 = (ulong ****)0x0;
    if (uVar7 == 0) goto LAB_104a89c28;
  }
  ppppuVar4 = ppppuVar4 + 1;
  do {
    ppppuVar4[-1] = (ulong ***)*param_2;
    pppuVar12 = (ulong ***)param_2[2];
    pppuVar10 = (ulong ***)param_2[1];
    ppppuVar4[2] = (ulong ***)param_2[3];
    ppppuVar4[1] = pppuVar12;
    *ppppuVar4 = pppuVar10;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[1] = 0;
    param_2 = param_2 + 4;
    uVar7 = uVar7 - 1;
    ppppuVar4 = ppppuVar4 + 4;
  } while (uVar7 != 0);
LAB_104a89c28:
  if (uVar6 != 0) {
    puVar5 = puVar5 + uVar6 * 4 + -3;
    do {
      if (*(char *)((long)puVar5 + 0x17) < '\0') {
        __ZdlPv(*puVar5);
      }
      puVar5 = puVar5 + -4;
      uVar6 = uVar6 - 1;
      ppppuVar2 = (ulong ****)pppuStack_70;
    } while (uVar6 != 0);
  }
  if (ppppuVar2 == (ulong ****)0x0) {
    uVar3 = *param_1 & 1 | param_3 << 1;
  }
  else {
    if ((*param_1 & 1) != 0) {
      __ZdlPv(param_1[1]);
      ppppuVar2 = (ulong ****)pppuStack_70;
    }
    param_1[1] = (ulong)ppppuVar2;
    param_1[2] = uStack_68;
    uVar3 = param_3 << 1 | 1;
  }
  *param_1 = uVar3;
  return;
}



/* Entry: 104a89cc4; end: 104a89d3f;  */

void FUN_104a89cc4(ulong *param_1,ulong *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = 0;
  uVar2 = *param_2;
  if ((uVar2 & 1) == 0) {
    if (1 < uVar2) {
      lVar1 = 0;
      uVar2 = uVar2 >> 1;
      do {
        *(undefined8 *)((long)param_1 + lVar1 + 8) = *(undefined8 *)((long)param_2 + lVar1 + 8);
        uVar4 = *(undefined8 *)((long)param_2 + lVar1 + 0x18);
        uVar3 = *(undefined8 *)((long)param_2 + lVar1 + 0x10);
        *(undefined8 *)((long)param_1 + lVar1 + 0x20) =
             *(undefined8 *)((long)param_2 + lVar1 + 0x20);
        *(undefined8 *)((long)param_1 + lVar1 + 0x18) = uVar4;
        *(undefined8 *)((long)param_1 + lVar1 + 0x10) = uVar3;
        *(undefined8 *)((long)param_2 + lVar1 + 0x18) = 0;
        *(undefined8 *)((long)param_2 + lVar1 + 0x20) = 0;
        *(undefined8 *)((long)param_2 + lVar1 + 0x10) = 0;
        lVar1 = lVar1 + 0x20;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
      uVar2 = *param_2;
    }
    *param_1 = uVar2 & 0xfffffffffffffffe;
    return;
  }
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar2;
  *param_1 = *param_2 | 1;
  *param_2 = 0;
  return;
}



/* Entry: 104a89d40; end: 104a89d7f;  */

uint * FUN_104a89d40(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  *param_1 = uVar1 | 0x4000000;
  if ((uVar1 >> 0x1a & 1) == 0) {
    FUN_104a8a0b8();
  }
  else {
    FUN_104a89d80(param_1 + 2);
  }
  return param_1 + 2;
}



/* Entry: 104a89d80; end: 104a89db3;  */

long FUN_104a89d80(long param_1,long param_2)

{
  if (param_1 != param_2) {
    FUN_104a89db4(param_1);
  }
  return param_1;
}



/* Entry: 104a89db4; end: 104a89dcb;  */

void FUN_104a89db4(ulong *param_1,ulong *param_2)

{
  long lVar1;
  bool bVar2;
  ulong *****pppppuVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong ****ppppuVar13;
  ulong ****ppppuVar14;
  ulong ****ppppuStack_68;
  ulong uStack_60;
  ulong *puStack_58;
  
  if ((*param_2 & 1) != 0) {
    puVar11 = param_1 + 1;
    uVar4 = *param_1;
    puVar7 = puVar11;
    if ((uVar4 & 1) != 0) {
      puVar7 = (ulong *)*puVar11;
    }
    if (1 < uVar4) {
      uVar4 = uVar4 >> 1;
      puVar7 = puVar7 + uVar4 * 3;
      do {
        if (*(char *)((long)puVar7 + -1) < '\0') {
          __ZdlPv(puVar7[-3]);
        }
        uVar4 = uVar4 - 1;
        puVar7 = puVar7 + -3;
      } while (uVar4 != 0);
      uVar4 = *param_1;
    }
    if ((uVar4 & 1) != 0) {
      __ZdlPv(*puVar11);
    }
    *param_1 = *param_2;
    uVar6 = param_2[2];
    uVar4 = param_2[1];
    param_1[3] = param_2[3];
    param_1[2] = uVar6;
    *puVar11 = uVar4;
    *param_2 = 0;
    return;
  }
  puStack_58 = param_2 + 1;
  uVar4 = *param_2 >> 1;
  if ((*param_1 & 1) == 0) {
    uVar6 = 1;
    puVar7 = param_1 + 1;
  }
  else {
    puVar7 = (ulong *)param_1[1];
    uVar6 = param_1[2];
  }
  uVar10 = *param_1 >> 1;
  ppppuStack_68 = (ulong ****)0x0;
  uStack_60 = 0;
  if (uVar6 < uVar4) {
    uVar6 = uVar6 * 2;
    if (uVar6 < uVar4 || uVar6 - uVar4 == 0) {
      uVar6 = uVar4;
    }
    pppppuVar3 = &ppppuStack_68;
    FUN_104a8a074();
    uVar5 = 0;
    puVar9 = (ulong *)0x0;
    puVar11 = puVar7;
    uVar12 = uVar4;
    ppppuStack_68 = (ulong ****)pppppuVar3;
    uStack_60 = uVar6;
  }
  else {
    puVar11 = puVar7 + uVar4 * 3;
    lVar1 = uVar10 * 3;
    uVar8 = uVar4 - uVar10;
    bVar2 = uVar10 < uVar4;
    uVar6 = uVar10 - uVar4;
    uVar5 = uVar4;
    if (bVar2) {
      puVar11 = (ulong *)0x0;
      uVar6 = 0;
      uVar5 = uVar10;
    }
    uVar10 = uVar6;
    uVar12 = 0;
    if (bVar2) {
      uVar12 = uVar8;
    }
    puVar9 = puVar7;
    pppppuVar3 = (ulong *****)0x0;
    if (bVar2) {
      pppppuVar3 = (ulong *****)(puVar7 + lVar1);
    }
  }
  FUN_104a8a004(puVar9,&puStack_58,uVar5);
  for (; uVar12 != 0; uVar12 = uVar12 - 1) {
    ppppuVar14 = (ulong ****)puStack_58[1];
    ppppuVar13 = (ulong ****)*puStack_58;
    pppppuVar3[2] = (ulong ****)puStack_58[2];
    pppppuVar3[1] = ppppuVar14;
    *pppppuVar3 = ppppuVar13;
    puStack_58[1] = 0;
    puStack_58[2] = 0;
    *puStack_58 = 0;
    pppppuVar3 = pppppuVar3 + 3;
    puStack_58 = puStack_58 + 3;
  }
  if (uVar10 != 0) {
    puVar7 = puVar11 + uVar10 * 3;
    do {
      if (*(char *)((long)puVar7 + -1) < '\0') {
        __ZdlPv(puVar7[-3]);
      }
      uVar10 = uVar10 - 1;
      puVar7 = puVar7 + -3;
    } while (uVar10 != 0);
  }
  if ((ulong *****)ppppuStack_68 == (ulong *****)0x0) {
    uVar4 = *param_1 & 1 | uVar4 << 1;
  }
  else {
    if ((*param_1 & 1) != 0) {
      __ZdlPv(param_1[1]);
    }
    param_1[1] = (ulong)ppppuStack_68;
    param_1[2] = uStack_60;
    uVar4 = uVar4 << 1 | 1;
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 104a89dcc; end: 104a89e77;  */

void FUN_104a89dcc(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  
  puVar3 = param_1 + 1;
  uVar1 = *param_1;
  puVar2 = puVar3;
  if ((uVar1 & 1) != 0) {
    puVar2 = (ulong *)*puVar3;
  }
  if (1 < uVar1) {
    uVar1 = uVar1 >> 1;
    puVar2 = puVar2 + uVar1 * 3;
    do {
      if (*(char *)((long)puVar2 + -1) < '\0') {
        __ZdlPv(puVar2[-3]);
      }
      uVar1 = uVar1 - 1;
      puVar2 = puVar2 + -3;
    } while (uVar1 != 0);
    uVar1 = *param_1;
  }
  if ((uVar1 & 1) != 0) {
    __ZdlPv(*puVar3);
  }
  *param_1 = *param_2;
  uVar4 = param_2[2];
  uVar1 = param_2[1];
  param_1[3] = param_2[3];
  param_1[2] = uVar4;
  *puVar3 = uVar1;
  *param_2 = 0;
  return;
}



/* Entry: 104a89e78; end: 104a8a003;  */

void FUN_104a89e78(ulong *param_1,ulong *param_2,ulong param_3)

{
  long lVar1;
  bool bVar2;
  ulong ****ppppuVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong ***pppuVar12;
  ulong ***pppuVar13;
  ulong ***pppuStack_68;
  ulong uStack_60;
  ulong *puStack_58;
  
  if ((*param_1 & 1) == 0) {
    uVar5 = 1;
    puVar7 = param_1 + 1;
  }
  else {
    puVar7 = (ulong *)param_1[1];
    uVar5 = param_1[2];
  }
  uVar9 = *param_1 >> 1;
  pppuStack_68 = (ulong ***)0x0;
  uStack_60 = 0;
  puStack_58 = param_2;
  if (uVar5 < param_3) {
    uVar5 = uVar5 * 2;
    if (uVar5 < param_3 || uVar5 - param_3 == 0) {
      uVar5 = param_3;
    }
    ppppuVar3 = &pppuStack_68;
    FUN_104a8a074();
    uVar4 = 0;
    puVar8 = (ulong *)0x0;
    puVar10 = puVar7;
    uVar11 = param_3;
    pppuStack_68 = (ulong ***)ppppuVar3;
    uStack_60 = uVar5;
  }
  else {
    puVar10 = puVar7 + param_3 * 3;
    lVar1 = uVar9 * 3;
    uVar6 = param_3 - uVar9;
    bVar2 = uVar9 < param_3;
    uVar5 = uVar9 - param_3;
    uVar4 = param_3;
    if (bVar2) {
      puVar10 = (ulong *)0x0;
      uVar5 = 0;
      uVar4 = uVar9;
    }
    uVar9 = uVar5;
    uVar11 = 0;
    if (bVar2) {
      uVar11 = uVar6;
    }
    puVar8 = puVar7;
    ppppuVar3 = (ulong ****)0x0;
    if (bVar2) {
      ppppuVar3 = (ulong ****)(puVar7 + lVar1);
    }
  }
  FUN_104a8a004(puVar8,&puStack_58,uVar4);
  for (; uVar11 != 0; uVar11 = uVar11 - 1) {
    pppuVar13 = (ulong ***)puStack_58[1];
    pppuVar12 = (ulong ***)*puStack_58;
    ppppuVar3[2] = (ulong ***)puStack_58[2];
    ppppuVar3[1] = pppuVar13;
    *ppppuVar3 = pppuVar12;
    puStack_58[1] = 0;
    puStack_58[2] = 0;
    *puStack_58 = 0;
    ppppuVar3 = ppppuVar3 + 3;
    puStack_58 = puStack_58 + 3;
  }
  if (uVar9 != 0) {
    puVar7 = puVar10 + uVar9 * 3;
    do {
      if (*(char *)((long)puVar7 + -1) < '\0') {
        __ZdlPv(puVar7[-3]);
      }
      uVar9 = uVar9 - 1;
      puVar7 = puVar7 + -3;
    } while (uVar9 != 0);
  }
  if ((ulong ****)pppuStack_68 == (ulong ****)0x0) {
    uVar5 = *param_1 & 1 | param_3 << 1;
  }
  else {
    if ((*param_1 & 1) != 0) {
      __ZdlPv(param_1[1]);
    }
    param_1[1] = (ulong)pppuStack_68;
    param_1[2] = uStack_60;
    uVar5 = param_3 << 1 | 1;
  }
  *param_1 = uVar5;
  return;
}



/* Entry: 104a8a004; end: 104a8a073;  */

void FUN_104a8a004(undefined8 *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_3 != 0) {
    puVar1 = (undefined8 *)*param_2;
    do {
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        __ZdlPv(*param_1);
      }
      uVar3 = puVar1[1];
      uVar2 = *puVar1;
      param_1[2] = puVar1[2];
      param_1[1] = uVar3;
      *param_1 = uVar2;
      *(undefined1 *)((long)puVar1 + 0x17) = 0;
      *(undefined1 *)puVar1 = 0;
      puVar1 = (undefined8 *)(*param_2 + 0x18);
      *param_2 = (long)puVar1;
      param_3 = param_3 + -1;
      param_1 = param_1 + 3;
    } while (param_3 != 0);
  }
  return;
}



/* Entry: 104a8a074; end: 104a8a0b7;  */

void FUN_104a8a074(ulong *param_1,ulong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_2 < (ulong *)0xaaaaaaaaaaaaaab) {
    __Znwm((long)param_2 * 0x18);
    return;
  }
  FUN_104a7757c();
  *param_1 = 0;
  uVar3 = *param_2;
  if ((uVar3 & 1) == 0) {
    if (1 < uVar3) {
      uVar3 = uVar3 >> 1;
      lVar4 = 8;
      do {
        puVar1 = (undefined8 *)((long)param_2 + lVar4);
        puVar2 = (undefined8 *)((long)param_1 + lVar4);
        uVar6 = puVar1[1];
        uVar5 = *puVar1;
        puVar2[2] = puVar1[2];
        puVar2[1] = uVar6;
        *puVar2 = uVar5;
        puVar1[1] = 0;
        puVar1[2] = 0;
        *puVar1 = 0;
        lVar4 = lVar4 + 0x18;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      uVar3 = *param_2;
    }
    *param_1 = uVar3 & 0xfffffffffffffffe;
    return;
  }
  uVar3 = param_2[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar3;
  *param_1 = *param_2 | 1;
  *param_2 = 0;
  return;
}



/* Entry: 104a8a0b8; end: 104a8a12b;  */

void FUN_104a8a0b8(ulong *param_1,ulong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = 0;
  uVar3 = *param_2;
  if ((uVar3 & 1) == 0) {
    if (1 < uVar3) {
      uVar3 = uVar3 >> 1;
      lVar4 = 8;
      do {
        puVar1 = (undefined8 *)((long)param_2 + lVar4);
        puVar2 = (undefined8 *)((long)param_1 + lVar4);
        uVar6 = puVar1[1];
        uVar5 = *puVar1;
        puVar2[2] = puVar1[2];
        puVar2[1] = uVar6;
        *puVar2 = uVar5;
        puVar1[1] = 0;
        puVar1[2] = 0;
        *puVar1 = 0;
        lVar4 = lVar4 + 0x18;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      uVar3 = *param_2;
    }
    *param_1 = uVar3 & 0xfffffffffffffffe;
    return;
  }
  uVar3 = param_2[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar3;
  *param_1 = *param_2 | 1;
  *param_2 = 0;
  return;
}



/* Entry: 104a8a12c; end: 104a8a243;  */

void FUN_104a8a12c(long param_1,ulong *param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uStack_58;
  char *pcStack_50;
  undefined8 uStack_48;
  
  lVar6 = 0;
  lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  while (((lVar4 = *(long *)(lVar7 + 0x1d8 + lVar6), lVar4 == 0 ||
          ((*(byte *)(lVar4 + 0x10) >> 3 & 1) == 0)) ||
         (*(long *)(*(long *)(lVar4 + 8) + 0x48) == 0))) {
    lVar6 = lVar6 + 0x10;
    if (lVar6 == 0x60) {
      return;
    }
  }
  func_0x0001004e23e0(*(undefined8 *)(*(long *)(lVar4 + 8) + 0x38),*(long *)(param_1 + 0x10) + 0x550
                     );
  lVar4 = *(long *)(param_1 + 0x10);
  lVar7 = lVar7 + lVar6;
  lVar6 = *(long *)(*(long *)(lVar7 + 0x1d8) + 8);
  **(undefined1 **)(lVar6 + 0x50) = *(undefined1 *)(lVar4 + 0x778);
  uVar5 = *(undefined8 *)(lVar6 + 0x48);
  *(undefined8 *)(lVar6 + 0x48) = 0;
  func_0x0001008e1f84(*(undefined8 *)(lVar4 + 0x10),lVar7 + 0x1d8);
  uStack_58 = *param_2;
  if ((uStack_58 & 1) != 0) {
    piVar3 = (int *)(uStack_58 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  pcStack_50 = "recv_initial_metadata_ready for pending batch";
  uStack_48 = uVar5;
  func_0x0001004dfd88(param_3,&uStack_48,&uStack_58,&pcStack_50);
  if ((uStack_58 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104a8a244; end: 104a8a35f;  */

void FUN_104a8a244(long param_1,ulong *param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uStack_58;
  char *pcStack_50;
  undefined8 uStack_48;
  
  lVar6 = 0;
  lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  while (((lVar4 = *(long *)(lVar7 + 0x1d8 + lVar6), lVar4 == 0 ||
          ((*(byte *)(lVar4 + 0x10) >> 4 & 1) == 0)) ||
         (*(long *)(*(long *)(lVar4 + 8) + 0x78) == 0))) {
    lVar6 = lVar6 + 0x10;
    if (lVar6 == 0x60) {
      return;
    }
  }
  FUN_104a8a360(*(undefined8 *)(*(long *)(lVar4 + 8) + 0x60),*(long *)(param_1 + 0x10) + 0x7a0);
  lVar4 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(*(long *)(lVar7 + lVar6 + 0x1d8) + 8);
  **(undefined4 **)(lVar6 + 0x68) = *(undefined4 *)(lVar4 + 0x8d0);
  uVar5 = *(undefined8 *)(lVar6 + 0x78);
  *(undefined8 *)(lVar6 + 0x78) = 0;
  func_0x0001008e1f84(*(undefined8 *)(lVar4 + 0x10));
  uStack_58 = *param_2;
  if ((uStack_58 & 1) != 0) {
    piVar3 = (int *)(uStack_58 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  pcStack_50 = "recv_message_ready for pending batch";
  uStack_48 = uVar5;
  func_0x0001004dfd88(param_3,&uStack_48,&uStack_58,&pcStack_50);
  if ((uStack_58 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104a8a360; end: 104a8a3a7;  */

void FUN_104a8a360(long param_1,long param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x128);
  if (cVar1 == *(char *)(param_2 + 0x128)) {
    if (cVar1 != '\0') {
      func_0x0001006148f8();
    }
  }
  else {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x128) != '\0') {
        func_0x0001008301a4();
        *(undefined1 *)(param_1 + 0x128) = 0;
      }
      return;
    }
    func_0x00010082f684();
    *(undefined1 *)(param_1 + 0x128) = 1;
  }
  return;
}



/* Entry: 104a8a3a8; end: 104a8a3ef;  */

undefined8 * FUN_104a8a3a8(undefined8 *param_1)

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
      func_0x000100836ca4();
    }
  }
  return param_1;
}



/* Entry: 104a8a3f0; end: 104a8a43b;  */

void FUN_104a8a3f0(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  lVar2 = *(long *)(param_1 + 0x10);
  puVar3 = (undefined8 *)(*(long *)(lVar2 + 0x10) + 0x4c0);
  if ((*(byte *)(*(long *)(lVar2 + 0x10) + 0x4b8) & 1) != 0) {
    puVar3 = (undefined8 *)*puVar3;
  }
  uVar4 = puVar3[*(long *)(lVar2 + 0xb30) * 2];
  uVar1 = *(undefined4 *)(puVar3 + *(long *)(lVar2 + 0xb30) * 2 + 1);
  *(long *)(lVar2 + 0xb30) = *(long *)(lVar2 + 0xb30) + 1;
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 4;
  lVar2 = *(long *)(param_1 + 0x20);
  *(undefined8 *)(lVar2 + 0x28) = uVar4;
  *(undefined4 *)(lVar2 + 0x30) = uVar1;
  return;
}



/* Entry: 104a8a43c; end: 104a8a4e3;  */

void FUN_104a8a43c(long param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  long **pplVar10;
  ulong **ppuVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uStack_510;
  ulong uStack_508;
  ulong uStack_500;
  ulong uStack_4f8;
  ulong *apuStack_4a8 [4];
  long lStack_488;
  long *aplStack_458 [4];
  long lStack_438;
  long *aplStack_408 [4];
  long lStack_3e8;
  long *aplStack_3b8 [4];
  long lStack_398;
  long *aplStack_368 [4];
  long lStack_348;
  long *aplStack_318 [4];
  long lStack_2f8;
  long *aplStack_2c8 [4];
  long lStack_2a8;
  long *aplStack_278 [4];
  long lStack_258;
  undefined8 auStack_230 [65];
  long lStack_28;
  
  puVar9 = auStack_230;
  puVar4 = auStack_230;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001004e1dd4(auStack_230,*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x4f8);
  func_0x0001004e23e0(*(long *)(param_1 + 0x10) + 0x348,auStack_230);
  func_0x0001004e2bc8();
  *(ushort *)(*(long *)(param_1 + 0x10) + 0xb50) =
       *(ushort *)(*(long *)(param_1 + 0x10) + 0xb50) | 4;
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 2;
  *(long *)(*(long *)(param_1 + 0x20) + 0x18) = *(long *)(param_1 + 0x10) + 0x348;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar14 = *puVar4;
  func_0x0001004e1e28(aplStack_278,puVar9);
  pplVar10 = aplStack_278;
  func_0x0001008dc020(uVar14);
  plVar5 = aplStack_278[0];
  if ((long *)0x1 < aplStack_278[0]) {
    do {
      lVar12 = *aplStack_278[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_278[0],0x10);
      if (bVar2) {
        *aplStack_278[0] = lVar12 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar12 + -1 == 0) {
      (*(code *)aplStack_278[0][1])();
      plVar5 = aplStack_278[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_258) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar10 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(aplStack_278);
  }
  __Unwind_Resume();
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = *plVar5;
  func_0x0001004e1e28(aplStack_2c8,pplVar10);
  pplVar10 = aplStack_2c8;
  func_0x00010061564c(lVar12);
  plVar5 = aplStack_2c8[0];
  if ((long *)0x1 < aplStack_2c8[0]) {
    do {
      lVar12 = *aplStack_2c8[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_2c8[0],0x10);
      if (bVar2) {
        *aplStack_2c8[0] = lVar12 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar12 + -1 == 0) {
      (*(code *)aplStack_2c8[0][1])();
      plVar5 = aplStack_2c8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar10 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(aplStack_2c8);
  }
  __Unwind_Resume();
  lStack_2f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = *plVar5;
  func_0x0001004e1e28(aplStack_318,pplVar10);
  pplVar10 = aplStack_318;
  func_0x00010084bde4(lVar12);
  plVar5 = aplStack_318[0];
  if ((long *)0x1 < aplStack_318[0]) {
    do {
      lVar12 = *aplStack_318[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_318[0],0x10);
      if (bVar2) {
        *aplStack_318[0] = lVar12 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar12 + -1 == 0) {
      (*(code *)aplStack_318[0][1])();
      plVar5 = aplStack_318[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2f8) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar10 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(aplStack_318);
  }
  __Unwind_Resume();
  lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = *plVar5;
  func_0x0001004e1e28(aplStack_368,pplVar10);
  pplVar10 = aplStack_368;
  FUN_104a78ee8(lVar12);
  plVar5 = aplStack_368[0];
  if ((long *)0x1 < aplStack_368[0]) {
    do {
      lVar12 = *aplStack_368[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_368[0],0x10);
      if (bVar2) {
        *aplStack_368[0] = lVar12 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar12 + -1 == 0) {
      (*(code *)aplStack_368[0][1])();
      plVar5 = aplStack_368[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_348) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar10 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(aplStack_368);
  }
  __Unwind_Resume();
  lStack_398 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = *plVar5;
  func_0x0001004e1e28(aplStack_3b8,pplVar10);
  pplVar10 = aplStack_3b8;
  FUN_104a79098(lVar12);
  plVar5 = aplStack_3b8[0];
  if ((long *)0x1 < aplStack_3b8[0]) {
    do {
      lVar12 = *aplStack_3b8[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_3b8[0],0x10);
      if (bVar2) {
        *aplStack_3b8[0] = lVar12 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar12 + -1 == 0) {
      (*(code *)aplStack_3b8[0][1])();
      plVar5 = aplStack_3b8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_398) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar10 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(aplStack_3b8);
  }
  __Unwind_Resume();
  lStack_3e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = *plVar5;
  func_0x0001004e1e28(aplStack_408,pplVar10);
  pplVar10 = aplStack_408;
  FUN_104a79244(lVar12);
  plVar5 = aplStack_408[0];
  if ((long *)0x1 < aplStack_408[0]) {
    do {
      lVar12 = *aplStack_408[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_408[0],0x10);
      if (bVar2) {
        *aplStack_408[0] = lVar12 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar12 + -1 == 0) {
      (*(code *)aplStack_408[0][1])();
      plVar5 = aplStack_408[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3e8) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar10 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(aplStack_408);
  }
  __Unwind_Resume();
  lStack_438 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = *plVar5;
  func_0x0001004e1e28(aplStack_458,pplVar10);
  pplVar10 = aplStack_458;
  FUN_104a793f0(lVar12);
  plVar5 = aplStack_458[0];
  if ((long *)0x1 < aplStack_458[0]) {
    do {
      lVar12 = *aplStack_458[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_458[0],0x10);
      if (bVar2) {
        *aplStack_458[0] = lVar12 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar12 + -1 == 0) {
      (*(code *)aplStack_458[0][1])();
      plVar5 = aplStack_458[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_438) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar10 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(aplStack_458);
  }
  __Unwind_Resume();
  lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = *plVar5;
  func_0x0001004e1e28(apuStack_4a8,pplVar10);
  ppuVar11 = apuStack_4a8;
  FUN_104a7959c(lVar12);
  puVar6 = apuStack_4a8[0];
  if ((ulong *)0x1 < apuStack_4a8[0]) {
    do {
      uVar13 = *apuStack_4a8[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(apuStack_4a8[0],0x10);
      if (bVar2) {
        *apuStack_4a8[0] = uVar13 - 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (uVar13 - 1 == 0) {
      (*(code *)apuStack_4a8[0][1])();
      puVar6 = apuStack_4a8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_488) {
    return;
  }
  ___stack_chk_fail();
  if ((int)ppuVar11 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(apuStack_4a8);
  }
  __Unwind_Resume();
  puVar7 = puVar6 + 1;
  uVar13 = *puVar6;
  if ((uVar13 & 1) != 0) {
    puVar7 = (ulong *)*puVar7;
  }
  if (1 < uVar13) {
    puVar6 = puVar7 + 1;
    do {
      uStack_510 = puVar6[-1];
      if (*(char *)((long)puVar6 + 0x17) < '\0') {
        func_0x000100033dac(&uStack_508,*puVar6,puVar6[1]);
      }
      else {
        uStack_500 = puVar6[1];
        uStack_508 = *puVar6;
        uStack_4f8 = puVar6[2];
      }
      puVar8 = *ppuVar11;
      uVar3 = *puVar8;
      *(uint *)puVar8 = (uint)uVar3 | 0x400000;
      if (((uint)uVar3 >> 0x16 & 1) == 0) {
        puVar8[0x10] = 0;
        puVar8[0xd] = 0;
        puVar8[0xc] = 0;
        puVar8[0xf] = 0;
        puVar8[0xe] = 0;
      }
      FUN_104a8abb8(puVar8 + 0xc,&uStack_510);
      if ((long)uStack_4f8 < 0) {
        __ZdlPv(uStack_508);
      }
      puVar8 = puVar6 + 3;
      puVar6 = puVar6 + 4;
    } while (puVar8 != puVar7 + (uVar13 >> 1) * 4);
  }
  return;
}



/* Entry: 104a8a4e4; end: 104a8a59f;  */

void FUN_104a8a4e4(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  long **pplVar8;
  ulong **ppuVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong *apuStack_278 [4];
  long lStack_258;
  long *aplStack_228 [4];
  long lStack_208;
  long *aplStack_1d8 [4];
  long lStack_1b8;
  long *aplStack_188 [4];
  long lStack_168;
  long *aplStack_138 [4];
  long lStack_118;
  long *aplStack_e8 [4];
  long lStack_c8;
  long *aplStack_98 [4];
  long lStack_78;
  long *aplStack_48 [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = *param_1;
  func_0x0001004e1e28(aplStack_48,param_2);
  pplVar8 = aplStack_48;
  func_0x0001008dc020(uVar12);
  plVar4 = aplStack_48[0];
  if ((long *)0x1 < aplStack_48[0]) {
    do {
      lVar10 = *aplStack_48[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_48[0],0x10);
      if (bVar2) {
        *aplStack_48[0] = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)aplStack_48[0][1])();
      plVar4 = aplStack_48[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(aplStack_48);
  }
  __Unwind_Resume();
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *plVar4;
  func_0x0001004e1e28(aplStack_98,pplVar8);
  pplVar8 = aplStack_98;
  func_0x00010061564c(lVar10);
  plVar4 = aplStack_98[0];
  if ((long *)0x1 < aplStack_98[0]) {
    do {
      lVar10 = *aplStack_98[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_98[0],0x10);
      if (bVar2) {
        *aplStack_98[0] = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)aplStack_98[0][1])();
      plVar4 = aplStack_98[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(aplStack_98);
  }
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *plVar4;
  func_0x0001004e1e28(aplStack_e8,pplVar8);
  pplVar8 = aplStack_e8;
  func_0x00010084bde4(lVar10);
  plVar4 = aplStack_e8[0];
  if ((long *)0x1 < aplStack_e8[0]) {
    do {
      lVar10 = *aplStack_e8[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_e8[0],0x10);
      if (bVar2) {
        *aplStack_e8[0] = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)aplStack_e8[0][1])();
      plVar4 = aplStack_e8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(aplStack_e8);
  }
  __Unwind_Resume();
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *plVar4;
  func_0x0001004e1e28(aplStack_138,pplVar8);
  pplVar8 = aplStack_138;
  FUN_104a78ee8(lVar10);
  plVar4 = aplStack_138[0];
  if ((long *)0x1 < aplStack_138[0]) {
    do {
      lVar10 = *aplStack_138[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_138[0],0x10);
      if (bVar2) {
        *aplStack_138[0] = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)aplStack_138[0][1])();
      plVar4 = aplStack_138[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(aplStack_138);
  }
  __Unwind_Resume();
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *plVar4;
  func_0x0001004e1e28(aplStack_188,pplVar8);
  pplVar8 = aplStack_188;
  FUN_104a79098(lVar10);
  plVar4 = aplStack_188[0];
  if ((long *)0x1 < aplStack_188[0]) {
    do {
      lVar10 = *aplStack_188[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_188[0],0x10);
      if (bVar2) {
        *aplStack_188[0] = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)aplStack_188[0][1])();
      plVar4 = aplStack_188[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(aplStack_188);
  }
  __Unwind_Resume();
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *plVar4;
  func_0x0001004e1e28(aplStack_1d8,pplVar8);
  pplVar8 = aplStack_1d8;
  FUN_104a79244(lVar10);
  plVar4 = aplStack_1d8[0];
  if ((long *)0x1 < aplStack_1d8[0]) {
    do {
      lVar10 = *aplStack_1d8[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_1d8[0],0x10);
      if (bVar2) {
        *aplStack_1d8[0] = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)aplStack_1d8[0][1])();
      plVar4 = aplStack_1d8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(aplStack_1d8);
  }
  __Unwind_Resume();
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *plVar4;
  func_0x0001004e1e28(aplStack_228,pplVar8);
  pplVar8 = aplStack_228;
  FUN_104a793f0(lVar10);
  plVar4 = aplStack_228[0];
  if ((long *)0x1 < aplStack_228[0]) {
    do {
      lVar10 = *aplStack_228[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_228[0],0x10);
      if (bVar2) {
        *aplStack_228[0] = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)aplStack_228[0][1])();
      plVar4 = aplStack_228[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(aplStack_228);
  }
  __Unwind_Resume();
  lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *plVar4;
  func_0x0001004e1e28(apuStack_278,pplVar8);
  ppuVar9 = apuStack_278;
  FUN_104a7959c(lVar10);
  puVar5 = apuStack_278[0];
  if ((ulong *)0x1 < apuStack_278[0]) {
    do {
      uVar11 = *apuStack_278[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(apuStack_278[0],0x10);
      if (bVar2) {
        *apuStack_278[0] = uVar11 - 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (uVar11 - 1 == 0) {
      (*(code *)apuStack_278[0][1])();
      puVar5 = apuStack_278[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_258) {
    return;
  }
  ___stack_chk_fail();
  if ((int)ppuVar9 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(apuStack_278);
  }
  __Unwind_Resume();
  puVar6 = puVar5 + 1;
  uVar11 = *puVar5;
  if ((uVar11 & 1) != 0) {
    puVar6 = (ulong *)*puVar6;
  }
  if (1 < uVar11) {
    puVar5 = puVar6 + 1;
    do {
      uStack_2e0 = puVar5[-1];
      if (*(char *)((long)puVar5 + 0x17) < '\0') {
        func_0x000100033dac(&uStack_2d8,*puVar5,puVar5[1]);
      }
      else {
        uStack_2d0 = puVar5[1];
        uStack_2d8 = *puVar5;
        uStack_2c8 = puVar5[2];
      }
      puVar7 = *ppuVar9;
      uVar3 = *puVar7;
      *(uint *)puVar7 = (uint)uVar3 | 0x400000;
      if (((uint)uVar3 >> 0x16 & 1) == 0) {
        puVar7[0x10] = 0;
        puVar7[0xd] = 0;
        puVar7[0xc] = 0;
        puVar7[0xf] = 0;
        puVar7[0xe] = 0;
      }
      FUN_104a8abb8(puVar7 + 0xc,&uStack_2e0);
      if ((long)uStack_2c8 < 0) {
        __ZdlPv(uStack_2d8);
      }
      puVar7 = puVar5 + 3;
      puVar5 = puVar5 + 4;
    } while (puVar7 != puVar6 + (uVar11 >> 1) * 4);
  }
  return;
}



/* Entry: 104a8a5a0; end: 104a8a65b;  */

void FUN_104a8a5a0(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  long **pplVar8;
  ulong **ppuVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong *apuStack_228 [4];
  long lStack_208;
  long *aplStack_1d8 [4];
  long lStack_1b8;
  long *aplStack_188 [4];
  long lStack_168;
  long *aplStack_138 [4];
  long lStack_118;
  long *aplStack_e8 [4];
  long lStack_c8;
  long *aplStack_98 [4];
  long lStack_78;
  long *aplStack_48 [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = *param_1;
  func_0x0001004e1e28(aplStack_48,param_2);
  pplVar8 = aplStack_48;
  func_0x00010061564c(uVar12);
  plVar4 = aplStack_48[0];
  if ((long *)0x1 < aplStack_48[0]) {
    do {
      lVar10 = *aplStack_48[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_48[0],0x10);
      if (bVar2) {
        *aplStack_48[0] = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)aplStack_48[0][1])();
      plVar4 = aplStack_48[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(aplStack_48);
  }
  __Unwind_Resume();
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *plVar4;
  func_0x0001004e1e28(aplStack_98,pplVar8);
  pplVar8 = aplStack_98;
  func_0x00010084bde4(lVar10);
  plVar4 = aplStack_98[0];
  if ((long *)0x1 < aplStack_98[0]) {
    do {
      lVar10 = *aplStack_98[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_98[0],0x10);
      if (bVar2) {
        *aplStack_98[0] = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)aplStack_98[0][1])();
      plVar4 = aplStack_98[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(aplStack_98);
  }
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *plVar4;
  func_0x0001004e1e28(aplStack_e8,pplVar8);
  pplVar8 = aplStack_e8;
  FUN_104a78ee8(lVar10);
  plVar4 = aplStack_e8[0];
  if ((long *)0x1 < aplStack_e8[0]) {
    do {
      lVar10 = *aplStack_e8[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_e8[0],0x10);
      if (bVar2) {
        *aplStack_e8[0] = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)aplStack_e8[0][1])();
      plVar4 = aplStack_e8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(aplStack_e8);
  }
  __Unwind_Resume();
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *plVar4;
  func_0x0001004e1e28(aplStack_138,pplVar8);
  pplVar8 = aplStack_138;
  FUN_104a79098(lVar10);
  plVar4 = aplStack_138[0];
  if ((long *)0x1 < aplStack_138[0]) {
    do {
      lVar10 = *aplStack_138[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_138[0],0x10);
      if (bVar2) {
        *aplStack_138[0] = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)aplStack_138[0][1])();
      plVar4 = aplStack_138[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(aplStack_138);
  }
  __Unwind_Resume();
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *plVar4;
  func_0x0001004e1e28(aplStack_188,pplVar8);
  pplVar8 = aplStack_188;
  FUN_104a79244(lVar10);
  plVar4 = aplStack_188[0];
  if ((long *)0x1 < aplStack_188[0]) {
    do {
      lVar10 = *aplStack_188[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_188[0],0x10);
      if (bVar2) {
        *aplStack_188[0] = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)aplStack_188[0][1])();
      plVar4 = aplStack_188[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(aplStack_188);
  }
  __Unwind_Resume();
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *plVar4;
  func_0x0001004e1e28(aplStack_1d8,pplVar8);
  pplVar8 = aplStack_1d8;
  FUN_104a793f0(lVar10);
  plVar4 = aplStack_1d8[0];
  if ((long *)0x1 < aplStack_1d8[0]) {
    do {
      lVar10 = *aplStack_1d8[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_1d8[0],0x10);
      if (bVar2) {
        *aplStack_1d8[0] = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)aplStack_1d8[0][1])();
      plVar4 = aplStack_1d8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(aplStack_1d8);
  }
  __Unwind_Resume();
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *plVar4;
  func_0x0001004e1e28(apuStack_228,pplVar8);
  ppuVar9 = apuStack_228;
  FUN_104a7959c(lVar10);
  puVar5 = apuStack_228[0];
  if ((ulong *)0x1 < apuStack_228[0]) {
    do {
      uVar11 = *apuStack_228[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(apuStack_228[0],0x10);
      if (bVar2) {
        *apuStack_228[0] = uVar11 - 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (uVar11 - 1 == 0) {
      (*(code *)apuStack_228[0][1])();
      puVar5 = apuStack_228[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  if ((int)ppuVar9 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(apuStack_228);
  }
  __Unwind_Resume();
  puVar6 = puVar5 + 1;
  uVar11 = *puVar5;
  if ((uVar11 & 1) != 0) {
    puVar6 = (ulong *)*puVar6;
  }
  if (1 < uVar11) {
    puVar5 = puVar6 + 1;
    do {
      uStack_290 = puVar5[-1];
      if (*(char *)((long)puVar5 + 0x17) < '\0') {
        func_0x000100033dac(&uStack_288,*puVar5,puVar5[1]);
      }
      else {
        uStack_280 = puVar5[1];
        uStack_288 = *puVar5;
        uStack_278 = puVar5[2];
      }
      puVar7 = *ppuVar9;
      uVar3 = *puVar7;
      *(uint *)puVar7 = (uint)uVar3 | 0x400000;
      if (((uint)uVar3 >> 0x16 & 1) == 0) {
        puVar7[0x10] = 0;
        puVar7[0xd] = 0;
        puVar7[0xc] = 0;
        puVar7[0xf] = 0;
        puVar7[0xe] = 0;
      }
      FUN_104a8abb8(puVar7 + 0xc,&uStack_290);
      if ((long)uStack_278 < 0) {
        __ZdlPv(uStack_288);
      }
      puVar7 = puVar5 + 3;
      puVar5 = puVar5 + 4;
    } while (puVar7 != puVar6 + (uVar11 >> 1) * 4);
  }
  return;
}



/* Entry: 104a8a65c; end: 104a8a717;  */

void FUN_104a8a65c(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  long **pplVar8;
  ulong **ppuVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong *apuStack_1d8 [4];
  long lStack_1b8;
  long *aplStack_188 [4];
  long lStack_168;
  long *aplStack_138 [4];
  long lStack_118;
  long *aplStack_e8 [4];
  long lStack_c8;
  long *aplStack_98 [4];
  long lStack_78;
  long *aplStack_48 [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = *param_1;
  func_0x0001004e1e28(aplStack_48,param_2);
  pplVar8 = aplStack_48;
  func_0x00010084bde4(uVar12);
  plVar4 = aplStack_48[0];
  if ((long *)0x1 < aplStack_48[0]) {
    do {
      lVar10 = *aplStack_48[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_48[0],0x10);
      if (bVar2) {
        *aplStack_48[0] = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)aplStack_48[0][1])();
      plVar4 = aplStack_48[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(aplStack_48);
  }
  __Unwind_Resume();
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *plVar4;
  func_0x0001004e1e28(aplStack_98,pplVar8);
  pplVar8 = aplStack_98;
  FUN_104a78ee8(lVar10);
  plVar4 = aplStack_98[0];
  if ((long *)0x1 < aplStack_98[0]) {
    do {
      lVar10 = *aplStack_98[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_98[0],0x10);
      if (bVar2) {
        *aplStack_98[0] = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)aplStack_98[0][1])();
      plVar4 = aplStack_98[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(aplStack_98);
  }
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *plVar4;
  func_0x0001004e1e28(aplStack_e8,pplVar8);
  pplVar8 = aplStack_e8;
  FUN_104a79098(lVar10);
  plVar4 = aplStack_e8[0];
  if ((long *)0x1 < aplStack_e8[0]) {
    do {
      lVar10 = *aplStack_e8[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_e8[0],0x10);
      if (bVar2) {
        *aplStack_e8[0] = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)aplStack_e8[0][1])();
      plVar4 = aplStack_e8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(aplStack_e8);
  }
  __Unwind_Resume();
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *plVar4;
  func_0x0001004e1e28(aplStack_138,pplVar8);
  pplVar8 = aplStack_138;
  FUN_104a79244(lVar10);
  plVar4 = aplStack_138[0];
  if ((long *)0x1 < aplStack_138[0]) {
    do {
      lVar10 = *aplStack_138[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_138[0],0x10);
      if (bVar2) {
        *aplStack_138[0] = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)aplStack_138[0][1])();
      plVar4 = aplStack_138[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(aplStack_138);
  }
  __Unwind_Resume();
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *plVar4;
  func_0x0001004e1e28(aplStack_188,pplVar8);
  pplVar8 = aplStack_188;
  FUN_104a793f0(lVar10);
  plVar4 = aplStack_188[0];
  if ((long *)0x1 < aplStack_188[0]) {
    do {
      lVar10 = *aplStack_188[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_188[0],0x10);
      if (bVar2) {
        *aplStack_188[0] = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)aplStack_188[0][1])();
      plVar4 = aplStack_188[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(aplStack_188);
  }
  __Unwind_Resume();
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *plVar4;
  func_0x0001004e1e28(apuStack_1d8,pplVar8);
  ppuVar9 = apuStack_1d8;
  FUN_104a7959c(lVar10);
  puVar5 = apuStack_1d8[0];
  if ((ulong *)0x1 < apuStack_1d8[0]) {
    do {
      uVar11 = *apuStack_1d8[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(apuStack_1d8[0],0x10);
      if (bVar2) {
        *apuStack_1d8[0] = uVar11 - 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (uVar11 - 1 == 0) {
      (*(code *)apuStack_1d8[0][1])();
      puVar5 = apuStack_1d8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return;
  }
  ___stack_chk_fail();
  if ((int)ppuVar9 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(apuStack_1d8);
  }
  __Unwind_Resume();
  puVar6 = puVar5 + 1;
  uVar11 = *puVar5;
  if ((uVar11 & 1) != 0) {
    puVar6 = (ulong *)*puVar6;
  }
  if (1 < uVar11) {
    puVar5 = puVar6 + 1;
    do {
      uStack_240 = puVar5[-1];
      if (*(char *)((long)puVar5 + 0x17) < '\0') {
        func_0x000100033dac(&uStack_238,*puVar5,puVar5[1]);
      }
      else {
        uStack_230 = puVar5[1];
        uStack_238 = *puVar5;
        uStack_228 = puVar5[2];
      }
      puVar7 = *ppuVar9;
      uVar3 = *puVar7;
      *(uint *)puVar7 = (uint)uVar3 | 0x400000;
      if (((uint)uVar3 >> 0x16 & 1) == 0) {
        puVar7[0x10] = 0;
        puVar7[0xd] = 0;
        puVar7[0xc] = 0;
        puVar7[0xf] = 0;
        puVar7[0xe] = 0;
      }
      FUN_104a8abb8(puVar7 + 0xc,&uStack_240);
      if ((long)uStack_228 < 0) {
        __ZdlPv(uStack_238);
      }
      puVar7 = puVar5 + 3;
      puVar5 = puVar5 + 4;
    } while (puVar7 != puVar6 + (uVar11 >> 1) * 4);
  }
  return;
}



/* Entry: 104a8a718; end: 104a8a7d3;  */

void FUN_104a8a718(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  long **pplVar8;
  ulong **ppuVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong *apuStack_188 [4];
  long lStack_168;
  long *aplStack_138 [4];
  long lStack_118;
  long *aplStack_e8 [4];
  long lStack_c8;
  long *aplStack_98 [4];
  long lStack_78;
  long *aplStack_48 [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = *param_1;
  func_0x0001004e1e28(aplStack_48,param_2);
  pplVar8 = aplStack_48;
  FUN_104a78ee8(uVar12);
  plVar4 = aplStack_48[0];
  if ((long *)0x1 < aplStack_48[0]) {
    do {
      lVar10 = *aplStack_48[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_48[0],0x10);
      if (bVar2) {
        *aplStack_48[0] = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)aplStack_48[0][1])();
      plVar4 = aplStack_48[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(aplStack_48);
  }
  __Unwind_Resume();
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *plVar4;
  func_0x0001004e1e28(aplStack_98,pplVar8);
  pplVar8 = aplStack_98;
  FUN_104a79098(lVar10);
  plVar4 = aplStack_98[0];
  if ((long *)0x1 < aplStack_98[0]) {
    do {
      lVar10 = *aplStack_98[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_98[0],0x10);
      if (bVar2) {
        *aplStack_98[0] = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)aplStack_98[0][1])();
      plVar4 = aplStack_98[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(aplStack_98);
  }
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *plVar4;
  func_0x0001004e1e28(aplStack_e8,pplVar8);
  pplVar8 = aplStack_e8;
  FUN_104a79244(lVar10);
  plVar4 = aplStack_e8[0];
  if ((long *)0x1 < aplStack_e8[0]) {
    do {
      lVar10 = *aplStack_e8[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_e8[0],0x10);
      if (bVar2) {
        *aplStack_e8[0] = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)aplStack_e8[0][1])();
      plVar4 = aplStack_e8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(aplStack_e8);
  }
  __Unwind_Resume();
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *plVar4;
  func_0x0001004e1e28(aplStack_138,pplVar8);
  pplVar8 = aplStack_138;
  FUN_104a793f0(lVar10);
  plVar4 = aplStack_138[0];
  if ((long *)0x1 < aplStack_138[0]) {
    do {
      lVar10 = *aplStack_138[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_138[0],0x10);
      if (bVar2) {
        *aplStack_138[0] = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)aplStack_138[0][1])();
      plVar4 = aplStack_138[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(aplStack_138);
  }
  __Unwind_Resume();
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *plVar4;
  func_0x0001004e1e28(apuStack_188,pplVar8);
  ppuVar9 = apuStack_188;
  FUN_104a7959c(lVar10);
  puVar5 = apuStack_188[0];
  if ((ulong *)0x1 < apuStack_188[0]) {
    do {
      uVar11 = *apuStack_188[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(apuStack_188[0],0x10);
      if (bVar2) {
        *apuStack_188[0] = uVar11 - 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (uVar11 - 1 == 0) {
      (*(code *)apuStack_188[0][1])();
      puVar5 = apuStack_188[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  if ((int)ppuVar9 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(apuStack_188);
  }
  __Unwind_Resume();
  puVar6 = puVar5 + 1;
  uVar11 = *puVar5;
  if ((uVar11 & 1) != 0) {
    puVar6 = (ulong *)*puVar6;
  }
  if (1 < uVar11) {
    puVar5 = puVar6 + 1;
    do {
      uStack_1f0 = puVar5[-1];
      if (*(char *)((long)puVar5 + 0x17) < '\0') {
        func_0x000100033dac(&uStack_1e8,*puVar5,puVar5[1]);
      }
      else {
        uStack_1e0 = puVar5[1];
        uStack_1e8 = *puVar5;
        uStack_1d8 = puVar5[2];
      }
      puVar7 = *ppuVar9;
      uVar3 = *puVar7;
      *(uint *)puVar7 = (uint)uVar3 | 0x400000;
      if (((uint)uVar3 >> 0x16 & 1) == 0) {
        puVar7[0x10] = 0;
        puVar7[0xd] = 0;
        puVar7[0xc] = 0;
        puVar7[0xf] = 0;
        puVar7[0xe] = 0;
      }
      FUN_104a8abb8(puVar7 + 0xc,&uStack_1f0);
      if ((long)uStack_1d8 < 0) {
        __ZdlPv(uStack_1e8);
      }
      puVar7 = puVar5 + 3;
      puVar5 = puVar5 + 4;
    } while (puVar7 != puVar6 + (uVar11 >> 1) * 4);
  }
  return;
}



/* Entry: 104a8a7d4; end: 104a8a88f;  */

void FUN_104a8a7d4(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  long **pplVar8;
  ulong **ppuVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong *apuStack_138 [4];
  long lStack_118;
  long *aplStack_e8 [4];
  long lStack_c8;
  long *aplStack_98 [4];
  long lStack_78;
  long *aplStack_48 [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = *param_1;
  func_0x0001004e1e28(aplStack_48,param_2);
  pplVar8 = aplStack_48;
  FUN_104a79098(uVar12);
  plVar4 = aplStack_48[0];
  if ((long *)0x1 < aplStack_48[0]) {
    do {
      lVar10 = *aplStack_48[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_48[0],0x10);
      if (bVar2) {
        *aplStack_48[0] = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)aplStack_48[0][1])();
      plVar4 = aplStack_48[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(aplStack_48);
  }
  __Unwind_Resume();
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *plVar4;
  func_0x0001004e1e28(aplStack_98,pplVar8);
  pplVar8 = aplStack_98;
  FUN_104a79244(lVar10);
  plVar4 = aplStack_98[0];
  if ((long *)0x1 < aplStack_98[0]) {
    do {
      lVar10 = *aplStack_98[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_98[0],0x10);
      if (bVar2) {
        *aplStack_98[0] = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)aplStack_98[0][1])();
      plVar4 = aplStack_98[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(aplStack_98);
  }
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *plVar4;
  func_0x0001004e1e28(aplStack_e8,pplVar8);
  pplVar8 = aplStack_e8;
  FUN_104a793f0(lVar10);
  plVar4 = aplStack_e8[0];
  if ((long *)0x1 < aplStack_e8[0]) {
    do {
      lVar10 = *aplStack_e8[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_e8[0],0x10);
      if (bVar2) {
        *aplStack_e8[0] = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)aplStack_e8[0][1])();
      plVar4 = aplStack_e8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(aplStack_e8);
  }
  __Unwind_Resume();
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *plVar4;
  func_0x0001004e1e28(apuStack_138,pplVar8);
  ppuVar9 = apuStack_138;
  FUN_104a7959c(lVar10);
  puVar5 = apuStack_138[0];
  if ((ulong *)0x1 < apuStack_138[0]) {
    do {
      uVar11 = *apuStack_138[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(apuStack_138[0],0x10);
      if (bVar2) {
        *apuStack_138[0] = uVar11 - 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (uVar11 - 1 == 0) {
      (*(code *)apuStack_138[0][1])();
      puVar5 = apuStack_138[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  if ((int)ppuVar9 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(apuStack_138);
  }
  __Unwind_Resume();
  puVar6 = puVar5 + 1;
  uVar11 = *puVar5;
  if ((uVar11 & 1) != 0) {
    puVar6 = (ulong *)*puVar6;
  }
  if (1 < uVar11) {
    puVar5 = puVar6 + 1;
    do {
      uStack_1a0 = puVar5[-1];
      if (*(char *)((long)puVar5 + 0x17) < '\0') {
        func_0x000100033dac(&uStack_198,*puVar5,puVar5[1]);
      }
      else {
        uStack_190 = puVar5[1];
        uStack_198 = *puVar5;
        uStack_188 = puVar5[2];
      }
      puVar7 = *ppuVar9;
      uVar3 = *puVar7;
      *(uint *)puVar7 = (uint)uVar3 | 0x400000;
      if (((uint)uVar3 >> 0x16 & 1) == 0) {
        puVar7[0x10] = 0;
        puVar7[0xd] = 0;
        puVar7[0xc] = 0;
        puVar7[0xf] = 0;
        puVar7[0xe] = 0;
      }
      FUN_104a8abb8(puVar7 + 0xc,&uStack_1a0);
      if ((long)uStack_188 < 0) {
        __ZdlPv(uStack_198);
      }
      puVar7 = puVar5 + 3;
      puVar5 = puVar5 + 4;
    } while (puVar7 != puVar6 + (uVar11 >> 1) * 4);
  }
  return;
}



/* Entry: 104a8a890; end: 104a8a94b;  */

void FUN_104a8a890(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  long **pplVar8;
  ulong **ppuVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong *apuStack_e8 [4];
  long lStack_c8;
  long *aplStack_98 [4];
  long lStack_78;
  long *aplStack_48 [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = *param_1;
  func_0x0001004e1e28(aplStack_48,param_2);
  pplVar8 = aplStack_48;
  FUN_104a79244(uVar12);
  plVar4 = aplStack_48[0];
  if ((long *)0x1 < aplStack_48[0]) {
    do {
      lVar10 = *aplStack_48[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_48[0],0x10);
      if (bVar2) {
        *aplStack_48[0] = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)aplStack_48[0][1])();
      plVar4 = aplStack_48[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(aplStack_48);
  }
  __Unwind_Resume();
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *plVar4;
  func_0x0001004e1e28(aplStack_98,pplVar8);
  pplVar8 = aplStack_98;
  FUN_104a793f0(lVar10);
  plVar4 = aplStack_98[0];
  if ((long *)0x1 < aplStack_98[0]) {
    do {
      lVar10 = *aplStack_98[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_98[0],0x10);
      if (bVar2) {
        *aplStack_98[0] = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)aplStack_98[0][1])();
      plVar4 = aplStack_98[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(aplStack_98);
  }
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *plVar4;
  func_0x0001004e1e28(apuStack_e8,pplVar8);
  ppuVar9 = apuStack_e8;
  FUN_104a7959c(lVar10);
  puVar5 = apuStack_e8[0];
  if ((ulong *)0x1 < apuStack_e8[0]) {
    do {
      uVar11 = *apuStack_e8[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(apuStack_e8[0],0x10);
      if (bVar2) {
        *apuStack_e8[0] = uVar11 - 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (uVar11 - 1 == 0) {
      (*(code *)apuStack_e8[0][1])();
      puVar5 = apuStack_e8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  if ((int)ppuVar9 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(apuStack_e8);
  }
  __Unwind_Resume();
  puVar6 = puVar5 + 1;
  uVar11 = *puVar5;
  if ((uVar11 & 1) != 0) {
    puVar6 = (ulong *)*puVar6;
  }
  if (1 < uVar11) {
    puVar5 = puVar6 + 1;
    do {
      uStack_150 = puVar5[-1];
      if (*(char *)((long)puVar5 + 0x17) < '\0') {
        func_0x000100033dac(&uStack_148,*puVar5,puVar5[1]);
      }
      else {
        uStack_140 = puVar5[1];
        uStack_148 = *puVar5;
        uStack_138 = puVar5[2];
      }
      puVar7 = *ppuVar9;
      uVar3 = *puVar7;
      *(uint *)puVar7 = (uint)uVar3 | 0x400000;
      if (((uint)uVar3 >> 0x16 & 1) == 0) {
        puVar7[0x10] = 0;
        puVar7[0xd] = 0;
        puVar7[0xc] = 0;
        puVar7[0xf] = 0;
        puVar7[0xe] = 0;
      }
      FUN_104a8abb8(puVar7 + 0xc,&uStack_150);
      if ((long)uStack_138 < 0) {
        __ZdlPv(uStack_148);
      }
      puVar7 = puVar5 + 3;
      puVar5 = puVar5 + 4;
    } while (puVar7 != puVar6 + (uVar11 >> 1) * 4);
  }
  return;
}



/* Entry: 104a8a94c; end: 104a8aa07;  */

void FUN_104a8a94c(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  long **pplVar8;
  ulong **ppuVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong *apuStack_98 [4];
  long lStack_78;
  long *aplStack_48 [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = *param_1;
  func_0x0001004e1e28(aplStack_48,param_2);
  pplVar8 = aplStack_48;
  FUN_104a793f0(uVar12);
  plVar4 = aplStack_48[0];
  if ((long *)0x1 < aplStack_48[0]) {
    do {
      lVar10 = *aplStack_48[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_48[0],0x10);
      if (bVar2) {
        *aplStack_48[0] = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)aplStack_48[0][1])();
      plVar4 = aplStack_48[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar8 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(aplStack_48);
  }
  __Unwind_Resume();
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *plVar4;
  func_0x0001004e1e28(apuStack_98,pplVar8);
  ppuVar9 = apuStack_98;
  FUN_104a7959c(lVar10);
  puVar5 = apuStack_98[0];
  if ((ulong *)0x1 < apuStack_98[0]) {
    do {
      uVar11 = *apuStack_98[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(apuStack_98[0],0x10);
      if (bVar2) {
        *apuStack_98[0] = uVar11 - 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (uVar11 - 1 == 0) {
      (*(code *)apuStack_98[0][1])();
      puVar5 = apuStack_98[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  if ((int)ppuVar9 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(apuStack_98);
  }
  __Unwind_Resume();
  puVar6 = puVar5 + 1;
  uVar11 = *puVar5;
  if ((uVar11 & 1) != 0) {
    puVar6 = (ulong *)*puVar6;
  }
  if (1 < uVar11) {
    puVar5 = puVar6 + 1;
    do {
      uStack_100 = puVar5[-1];
      if (*(char *)((long)puVar5 + 0x17) < '\0') {
        func_0x000100033dac(&uStack_f8,*puVar5,puVar5[1]);
      }
      else {
        uStack_f0 = puVar5[1];
        uStack_f8 = *puVar5;
        uStack_e8 = puVar5[2];
      }
      puVar7 = *ppuVar9;
      uVar3 = *puVar7;
      *(uint *)puVar7 = (uint)uVar3 | 0x400000;
      if (((uint)uVar3 >> 0x16 & 1) == 0) {
        puVar7[0x10] = 0;
        puVar7[0xd] = 0;
        puVar7[0xc] = 0;
        puVar7[0xf] = 0;
        puVar7[0xe] = 0;
      }
      FUN_104a8abb8(puVar7 + 0xc,&uStack_100);
      if ((long)uStack_e8 < 0) {
        __ZdlPv(uStack_f8);
      }
      puVar7 = puVar5 + 3;
      puVar5 = puVar5 + 4;
    } while (puVar7 != puVar6 + (uVar11 >> 1) * 4);
  }
  return;
}



/* Entry: 104a8aa08; end: 104a8aac3;  */

void FUN_104a8aa08(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong **ppuVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong *apuStack_48 [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = *param_1;
  func_0x0001004e1e28(apuStack_48,param_2);
  ppuVar7 = apuStack_48;
  FUN_104a7959c(uVar9);
  puVar4 = apuStack_48[0];
  if ((ulong *)0x1 < apuStack_48[0]) {
    do {
      uVar8 = *apuStack_48[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(apuStack_48[0],0x10);
      if (bVar2) {
        *apuStack_48[0] = uVar8 - 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (uVar8 - 1 == 0) {
      (*(code *)apuStack_48[0][1])();
      puVar4 = apuStack_48[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((int)ppuVar7 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(apuStack_48);
  }
  __Unwind_Resume();
  puVar5 = puVar4 + 1;
  uVar8 = *puVar4;
  if ((uVar8 & 1) != 0) {
    puVar5 = (ulong *)*puVar5;
  }
  if (1 < uVar8) {
    puVar4 = puVar5 + 1;
    do {
      uStack_b0 = puVar4[-1];
      if (*(char *)((long)puVar4 + 0x17) < '\0') {
        func_0x000100033dac(&uStack_a8,*puVar4,puVar4[1]);
      }
      else {
        uStack_a0 = puVar4[1];
        uStack_a8 = *puVar4;
        uStack_98 = puVar4[2];
      }
      puVar6 = *ppuVar7;
      uVar3 = *puVar6;
      *(uint *)puVar6 = (uint)uVar3 | 0x400000;
      if (((uint)uVar3 >> 0x16 & 1) == 0) {
        puVar6[0x10] = 0;
        puVar6[0xd] = 0;
        puVar6[0xc] = 0;
        puVar6[0xf] = 0;
        puVar6[0xe] = 0;
      }
      FUN_104a8abb8(puVar6 + 0xc,&uStack_b0);
      if ((long)uStack_98 < 0) {
        __ZdlPv(uStack_a8);
      }
      puVar6 = puVar4 + 3;
      puVar4 = puVar4 + 4;
    } while (puVar6 != puVar5 + (uVar8 >> 1) * 4);
  }
  return;
}



/* Entry: 104a8aac4; end: 104a8abb7;  */

void FUN_104a8aac4(ulong *param_1,undefined8 *param_2)

{
  ulong *puVar1;
  uint uVar2;
  ulong *puVar3;
  uint *puVar4;
  uint *puVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  puVar3 = param_1 + 1;
  uVar6 = *param_1;
  if ((uVar6 & 1) != 0) {
    puVar3 = (ulong *)*puVar3;
  }
  if (1 < uVar6) {
    puVar7 = puVar3 + 1;
    do {
      uStack_60 = puVar7[-1];
      if (*(char *)((long)puVar7 + 0x17) < '\0') {
        func_0x000100033dac(&uStack_58,*puVar7,puVar7[1]);
      }
      else {
        uStack_50 = puVar7[1];
        uStack_58 = *puVar7;
        uStack_48 = puVar7[2];
      }
      puVar4 = (uint *)*param_2;
      uVar2 = *puVar4;
      puVar5 = puVar4 + 0x18;
      *puVar4 = uVar2 | 0x400000;
      if ((uVar2 >> 0x16 & 1) == 0) {
        puVar4[0x20] = 0;
        puVar4[0x21] = 0;
        puVar4[0x1a] = 0;
        puVar4[0x1b] = 0;
        puVar5[0] = 0;
        puVar5[1] = 0;
        puVar4[0x1e] = 0;
        puVar4[0x1f] = 0;
        puVar4[0x1c] = 0;
        puVar4[0x1d] = 0;
      }
      FUN_104a8abb8(puVar5,&uStack_60);
      if ((long)uStack_48 < 0) {
        __ZdlPv(uStack_58);
      }
      puVar1 = puVar7 + 3;
      puVar7 = puVar7 + 4;
    } while (puVar1 != puVar3 + (uVar6 >> 1) * 4);
  }
  return;
}



/* Entry: 104a8abb8; end: 104a8ac53;  */

ulong * FUN_104a8abb8(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  undefined1 **ppuVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 *puStack_50;
  ulong uStack_48;
  
  puVar3 = param_1 + 1;
  if ((*param_1 & 1) == 0) {
    uVar6 = 1;
  }
  else {
    puVar3 = (ulong *)param_1[1];
    uVar6 = param_1[2];
  }
  uVar5 = *param_1 >> 1;
  if (uVar5 != uVar6) {
    puVar3 = puVar3 + uVar5 * 4;
    *puVar3 = *param_2;
    if (*(char *)((long)param_2 + 0x1f) < '\0') {
      func_0x000100033dac(puVar3 + 1,param_2[1],param_2[2]);
    }
    else {
      uVar5 = param_2[2];
      uVar6 = param_2[1];
      puVar3[3] = param_2[3];
      puVar3[2] = uVar5;
      puVar3[1] = uVar6;
    }
    *param_1 = *param_1 + 2;
    return puVar3;
  }
  ppuVar2 = &puStack_50;
  puVar3 = param_1 + 1;
  uVar6 = *param_1;
  if ((uVar6 & 1) == 0) {
    uVar5 = 2;
  }
  else {
    puVar3 = (ulong *)param_1[1];
    uVar5 = param_1[2] << 1;
  }
  puStack_50 = (undefined1 *)0x0;
  uStack_48 = 0;
  FUN_104a79a00();
  uVar8 = uVar6 >> 1;
  puVar1 = (ulong *)((long)ppuVar2 + uVar8 * 0x20);
  puStack_50 = (undefined1 *)ppuVar2;
  uStack_48 = uVar5;
  *puVar1 = *param_2;
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    func_0x000100033dac(puVar1 + 1,param_2[1],param_2[2]);
    ppuVar2 = (undefined1 **)puStack_50;
  }
  else {
    uVar9 = param_2[2];
    uVar5 = param_2[1];
    puVar1[3] = param_2[3];
    puVar1[2] = uVar9;
    puVar1[1] = uVar5;
  }
  if (1 < uVar6) {
    puVar4 = (ulong *)((long)ppuVar2 + 8);
    uVar6 = uVar8;
    puVar7 = puVar3;
    do {
      puVar4[-1] = *puVar7;
      uVar9 = puVar7[2];
      uVar5 = puVar7[1];
      puVar4[2] = puVar7[3];
      puVar4[1] = uVar9;
      *puVar4 = uVar5;
      puVar7[2] = 0;
      puVar7[3] = 0;
      puVar7[1] = 0;
      puVar7 = puVar7 + 4;
      uVar6 = uVar6 - 1;
      puVar4 = puVar4 + 4;
    } while (uVar6 != 0);
    puVar3 = puVar3 + uVar8 * 4 + -3;
    do {
      if (*(char *)((long)puVar3 + 0x17) < '\0') {
        __ZdlPv(*puVar3);
      }
      puVar3 = puVar3 + -4;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  uVar6 = *param_1;
  if ((uVar6 & 1) != 0) {
    __ZdlPv(param_1[1]);
    uVar6 = *param_1;
  }
  param_1[1] = (ulong)puStack_50;
  param_1[2] = uStack_48;
  *param_1 = (uVar6 | 1) + 2;
  return puVar1;
}



/* Entry: 104a8ac54; end: 104a8ada7;  */

undefined8 * FUN_104a8ac54(ulong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 **ppuVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined1 *puStack_50;
  ulong uStack_48;
  
  ppuVar2 = &puStack_50;
  puVar6 = param_1 + 1;
  uVar8 = *param_1;
  if ((uVar8 & 1) == 0) {
    uVar3 = 2;
  }
  else {
    puVar6 = (ulong *)param_1[1];
    uVar3 = param_1[2] << 1;
  }
  puStack_50 = (undefined1 *)0x0;
  uStack_48 = 0;
  FUN_104a79a00();
  uVar7 = uVar8 >> 1;
  puVar1 = (undefined8 *)((long)ppuVar2 + uVar7 * 0x20);
  puStack_50 = (undefined1 *)ppuVar2;
  uStack_48 = uVar3;
  *puVar1 = *param_2;
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    func_0x000100033dac(puVar1 + 1,param_2[1],param_2[2]);
    ppuVar2 = (undefined1 **)puStack_50;
  }
  else {
    uVar10 = param_2[2];
    uVar9 = param_2[1];
    puVar1[3] = param_2[3];
    puVar1[2] = uVar10;
    puVar1[1] = uVar9;
  }
  if (1 < uVar8) {
    puVar4 = (ulong *)((long)ppuVar2 + 8);
    uVar8 = uVar7;
    puVar5 = puVar6;
    do {
      puVar4[-1] = *puVar5;
      uVar11 = puVar5[2];
      uVar3 = puVar5[1];
      puVar4[2] = puVar5[3];
      puVar4[1] = uVar11;
      *puVar4 = uVar3;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[1] = 0;
      puVar5 = puVar5 + 4;
      uVar8 = uVar8 - 1;
      puVar4 = puVar4 + 4;
    } while (uVar8 != 0);
    puVar6 = puVar6 + uVar7 * 4 + -3;
    do {
      if (*(char *)((long)puVar6 + 0x17) < '\0') {
        __ZdlPv(*puVar6);
      }
      puVar6 = puVar6 + -4;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar8 = *param_1;
  if ((uVar8 & 1) != 0) {
    __ZdlPv(param_1[1]);
    uVar8 = *param_1;
  }
  param_1[1] = (ulong)puStack_50;
  param_1[2] = uStack_48;
  *param_1 = (uVar8 | 1) + 2;
  return puVar1;
}



/* Entry: 104a8ada8; end: 104a8ae63;  */

ulong * FUN_104a8ada8(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  ulong **ppuVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong *apuStack_48 [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = *param_1;
  func_0x0001004e1e28(apuStack_48,param_2);
  ppuVar4 = apuStack_48;
  FUN_104a79af8(uVar7);
  puVar3 = apuStack_48[0];
  if ((ulong *)0x1 < apuStack_48[0]) {
    do {
      uVar5 = *apuStack_48[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(apuStack_48[0],0x10);
      if (bVar2) {
        *apuStack_48[0] = uVar5 - 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (uVar5 - 1 == 0) {
      (*(code *)apuStack_48[0][1])();
      puVar3 = apuStack_48[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  if ((int)ppuVar4 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(apuStack_48);
  }
  __Unwind_Resume();
  do {
    uVar6 = *puVar3;
    uVar5 = uVar6 + 0x130;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar2) {
      *puVar3 = uVar5;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (puVar3[2] < uVar5) {
    func_0x0001004bbee0();
  }
  else {
    puVar3 = (ulong *)((long)puVar3 + uVar6 + 0x30);
  }
  func_0x0001004b800c();
  func_0x0001006148f8(puVar3,ppuVar4);
  return puVar3;
}



/* Entry: 104a8ae64; end: 104a8aeb3;  */

ulong * FUN_104a8ae64(ulong *param_1,undefined8 param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  
  do {
    uVar4 = *param_1;
    uVar1 = uVar4 + 0x130;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = uVar1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (param_1[2] < uVar1) {
    func_0x0001004bbee0(param_1,0x130);
  }
  else {
    param_1 = (ulong *)((long)param_1 + uVar4 + 0x30);
  }
  func_0x0001004b800c();
  func_0x0001006148f8(param_1,param_2);
  return param_1;
}



/* Entry: 104a8aeb4; end: 104a8af6b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_104a8aeb4(ulong *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  ulong *puVar4;
  int *piVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uStack_130;
  ulong auStack_128 [20];
  long lStack_88;
  ulong *puStack_80;
  ulong *puStack_78;
  
  puVar9 = param_1 + 1;
  puVar7 = (ulong *)*param_1;
  if (((ulong)puVar7 & 1) == 0) {
    uVar8 = 6;
  }
  else {
    if ((param_1[2] >> 0x3b & 0xf) != 0) {
      puVar9 = param_2;
      FUN_104a7757c();
      puStack_80 = puVar7;
      puStack_78 = param_2;
      lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uVar8 = param_1[2];
      lVar6 = *(long *)(uVar8 + 0x10);
      *(ushort *)(uVar8 + 0xb50) = *(ushort *)(uVar8 + 0xb50) | 0x20;
      if ((*(byte *)(uVar8 + 0xbc0) >> 1 & 1) == 0) {
        if (*(char *)(uVar8 + 0x90) != '\0') {
          *(undefined1 *)(uVar8 + 0x90) = 0;
          func_0x0001005a5960(uVar8 + 0x38);
        }
        if ((*(byte *)(lVar6 + 0x238) >> 3 & 1) == 0) {
          if (((*(char *)(uVar8 + 0x778) != '\0') || (*puVar9 != 0)) &&
             ((*(ushort *)(uVar8 + 0xb50) >> 7 & 1) == 0)) {
            puVar4 = *(ulong **)(uVar8 + 0xb58);
            if (puVar4 == (ulong *)0x0) goto LAB_104a8b0dc;
            puVar7 = puVar4 + 1;
            do {
              uVar10 = *puVar7;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(puVar7,0x10);
              if (bVar2) {
                *puVar7 = uVar10 - 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (uVar10 - 1 == 0) goto LAB_104a8b15c;
            goto LAB_104a8b0dc;
          }
          FUN_104a872a4(lVar6,uVar8);
          func_0x0001008e2028(uVar8);
        }
        auStack_128[1] = 0;
        uVar8 = *puVar9;
        if ((uVar8 & 1) != 0) {
          piVar5 = (int *)(uVar8 - 1);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
            if (bVar2) {
              *piVar5 = *piVar5 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        uStack_130 = uVar8;
        FUN_104a8a12c(param_1,&uStack_130,auStack_128 + 1);
        if ((uVar8 & 1) != 0) {
          func_0x00010084dad0(uVar8);
        }
        func_0x0001004dffa0(auStack_128 + 1,*(undefined8 *)(lVar6 + 0x1a0));
        puVar4 = auStack_128 + 1;
        func_0x0001004e0194();
        puVar7 = puVar9;
      }
      else {
        puVar4 = *(ulong **)(lVar6 + 0x1a0);
        func_0x000100612044(puVar4,"recv_initial_metadata_ready for abandoned attempt");
      }
      puVar9 = param_1 + 1;
      do {
        uVar10 = *puVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar9,0x10);
        if (bVar2) {
          *puVar9 = uVar10 - 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      puVar9 = puVar7;
      if (uVar10 - 1 == 0) {
        puVar4 = param_1;
        (**(code **)*param_1)();
      }
      while (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
        ___stack_chk_fail();
LAB_104a8b15c:
        (**(code **)*puVar4)();
LAB_104a8b0dc:
        *(ulong **)(uVar8 + 0xb58) = param_1;
        FUN_104a75cac(uVar8 + 0xb60,puVar9);
        auStack_128[1] = 0;
        uVar10 = *puVar9;
        if (uVar10 != 0) {
          if ((uVar10 & 1) != 0) {
            piVar5 = (int *)(uVar10 - 1);
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
              if (bVar2) {
                *piVar5 = *piVar5 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          auStack_128[0] = uVar10;
          FUN_104a889ac(uVar8,auStack_128,auStack_128 + 1);
          func_0x0001004bdf74(auStack_128);
        }
        if ((*(ushort *)(uVar8 + 0xb50) >> 6 & 1) == 0) {
          FUN_104a88d34(uVar8,auStack_128 + 1);
        }
        func_0x0001004dffa0(auStack_128 + 1,*(undefined8 *)(lVar6 + 0x1a0));
        puVar4 = auStack_128 + 1;
        func_0x0001004e0194();
      }
      return;
    }
    puVar9 = (ulong *)param_1[1];
    uVar8 = param_1[2] << 1;
  }
  uVar10 = (ulong)puVar7 >> 1;
  puVar3 = (ulong *)(uVar8 << 4);
  __Znwm();
  uVar11 = *param_2;
  (puVar3 + uVar10 * 2)[1] = param_2[1];
  puVar3[uVar10 * 2] = uVar11;
  puVar4 = puVar3;
  if ((ulong *)0x1 < puVar7) {
    do {
      uVar11 = *puVar9;
      puVar4[1] = puVar9[1];
      *puVar4 = uVar11;
      uVar10 = uVar10 - 1;
      puVar4 = puVar4 + 2;
      puVar9 = puVar9 + 2;
    } while (uVar10 != 0);
  }
  if (((ulong)puVar7 & 1) != 0) {
    __ZdlPv(param_1[1]);
    puVar7 = (ulong *)*param_1;
  }
  param_1[1] = (ulong)puVar3;
  param_1[2] = uVar8;
  *param_1 = ((ulong)puVar7 | 1) + 2;
  return;
}



/* Entry: 104a8af6c; end: 104a8b1f3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_104a8af6c(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong *unaff_x22;
  ulong uStack_e0;
  ulong auStack_d8 [20];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = param_1[2];
  lVar7 = *(long *)(uVar8 + 0x10);
  *(ushort *)(uVar8 + 0xb50) = *(ushort *)(uVar8 + 0xb50) | 0x20;
  if ((*(byte *)(uVar8 + 0xbc0) >> 1 & 1) == 0) {
    if (*(char *)(uVar8 + 0x90) != '\0') {
      *(undefined1 *)(uVar8 + 0x90) = 0;
      func_0x0001005a5960(uVar8 + 0x38);
    }
    if ((*(byte *)(lVar7 + 0x238) >> 3 & 1) == 0) {
      if (((*(char *)(uVar8 + 0x778) != '\0') || (*param_2 != 0)) &&
         ((*(ushort *)(uVar8 + 0xb50) >> 7 & 1) == 0)) {
        puVar4 = *(ulong **)(uVar8 + 0xb58);
        if (puVar4 == (ulong *)0x0) goto LAB_104a8b0dc;
        puVar1 = puVar4 + 1;
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar6 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar6 - 1 == 0) goto LAB_104a8b15c;
        goto LAB_104a8b0dc;
      }
      FUN_104a872a4(lVar7,uVar8);
      func_0x0001008e2028(uVar8);
    }
    auStack_d8[1] = 0;
    uVar8 = *param_2;
    if ((uVar8 & 1) != 0) {
      piVar5 = (int *)(uVar8 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar3) {
          *piVar5 = *piVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_e0 = uVar8;
    FUN_104a8a12c(param_1,&uStack_e0,auStack_d8 + 1);
    if ((uVar8 & 1) != 0) {
      func_0x00010084dad0(uVar8);
    }
    func_0x0001004dffa0(auStack_d8 + 1,*(undefined8 *)(lVar7 + 0x1a0));
    puVar4 = auStack_d8 + 1;
    func_0x0001004e0194();
    unaff_x22 = param_2;
  }
  else {
    puVar4 = *(ulong **)(lVar7 + 0x1a0);
    func_0x000100612044(puVar4,"recv_initial_metadata_ready for abandoned attempt");
  }
  puVar1 = param_1 + 1;
  do {
    uVar6 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar6 - 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  param_2 = unaff_x22;
  if (uVar6 - 1 == 0) {
    puVar4 = param_1;
    (**(code **)*param_1)();
  }
  while (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
LAB_104a8b15c:
    (**(code **)*puVar4)();
LAB_104a8b0dc:
    *(ulong **)(uVar8 + 0xb58) = param_1;
    FUN_104a75cac(uVar8 + 0xb60,param_2);
    auStack_d8[1] = 0;
    uVar6 = *param_2;
    if (uVar6 != 0) {
      if ((uVar6 & 1) != 0) {
        piVar5 = (int *)(uVar6 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar3) {
            *piVar5 = *piVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      auStack_d8[0] = uVar6;
      FUN_104a889ac(uVar8,auStack_d8,auStack_d8 + 1);
      func_0x0001004bdf74(auStack_d8);
    }
    if ((*(ushort *)(uVar8 + 0xb50) >> 6 & 1) == 0) {
      FUN_104a88d34(uVar8,auStack_d8 + 1);
    }
    func_0x0001004dffa0(auStack_d8 + 1,*(undefined8 *)(lVar7 + 0x1a0));
    puVar4 = auStack_d8 + 1;
    func_0x0001004e0194();
  }
  return;
}



/* Entry: 104a8b1f4; end: 104a8b483;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_104a8b1f4(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong *unaff_x22;
  ulong uStack_e0;
  ulong auStack_d8 [20];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = param_1[2];
  lVar7 = *(long *)(uVar8 + 0x10);
  *(long *)(uVar8 + 0xb48) = *(long *)(uVar8 + 0xb48) + 1;
  if ((*(byte *)(uVar8 + 0xbc0) >> 1 & 1) == 0) {
    if (*(char *)(uVar8 + 0x90) != '\0') {
      *(undefined1 *)(uVar8 + 0x90) = 0;
      func_0x0001005a5960(uVar8 + 0x38);
    }
    if ((*(byte *)(lVar7 + 0x238) >> 3 & 1) == 0) {
      if (((*(char *)(uVar8 + 0x8c8) == '\0') || (*param_2 != 0)) &&
         ((*(ushort *)(uVar8 + 0xb50) >> 7 & 1) == 0)) {
        puVar4 = *(ulong **)(uVar8 + 0xb68);
        if (puVar4 == (ulong *)0x0) goto LAB_104a8b36c;
        puVar1 = puVar4 + 1;
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar6 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar6 - 1 == 0) goto LAB_104a8b3ec;
        goto LAB_104a8b36c;
      }
      FUN_104a872a4(lVar7,uVar8);
      func_0x0001008e2028(uVar8);
    }
    auStack_d8[1] = 0;
    uVar8 = *param_2;
    if ((uVar8 & 1) != 0) {
      piVar5 = (int *)(uVar8 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar3) {
          *piVar5 = *piVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_e0 = uVar8;
    FUN_104a8a244(param_1,&uStack_e0,auStack_d8 + 1);
    if ((uVar8 & 1) != 0) {
      func_0x00010084dad0(uVar8);
    }
    func_0x0001004dffa0(auStack_d8 + 1,*(undefined8 *)(lVar7 + 0x1a0));
    puVar4 = auStack_d8 + 1;
    func_0x0001004e0194();
    unaff_x22 = param_2;
  }
  else {
    func_0x000100614b50(uVar8 + 0x7a0);
    puVar4 = *(ulong **)(lVar7 + 0x1a0);
    func_0x000100612044(puVar4,"recv_message_ready for abandoned attempt");
  }
  puVar1 = param_1 + 1;
  do {
    uVar6 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar6 - 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  param_2 = unaff_x22;
  if (uVar6 - 1 == 0) {
    puVar4 = param_1;
    (**(code **)*param_1)();
  }
  while (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
LAB_104a8b3ec:
    (**(code **)*puVar4)();
LAB_104a8b36c:
    *(ulong **)(uVar8 + 0xb68) = param_1;
    FUN_104a75cac(uVar8 + 0xb70,param_2);
    auStack_d8[1] = 0;
    uVar6 = *param_2;
    if (uVar6 != 0) {
      if ((uVar6 & 1) != 0) {
        piVar5 = (int *)(uVar6 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar3) {
            *piVar5 = *piVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      auStack_d8[0] = uVar6;
      FUN_104a889ac(uVar8,auStack_d8,auStack_d8 + 1);
      func_0x0001004bdf74(auStack_d8);
    }
    if ((*(ushort *)(uVar8 + 0xb50) >> 6 & 1) == 0) {
      FUN_104a88d34(uVar8,auStack_d8 + 1);
    }
    func_0x0001004dffa0(auStack_d8 + 1,*(undefined8 *)(lVar7 + 0x1a0));
    puVar4 = auStack_d8 + 1;
    func_0x0001004e0194();
  }
  return;
}



/* Entry: 104a8b484; end: 104a8b51f;  */

void FUN_104a8b484(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  func_0x000100612044(*(undefined8 *)(*(long *)(param_1[2] + 0x10) + 0x1a0),
                      "on_complete for internally generated cancel_stream op");
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
  if (lVar4 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000104a8b4e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1);
  return;
}



/* Entry: 104a8b520; end: 104a8b5b3;  */

void FUN_104a8b520(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uStack_28;
  
  *(code **)(param_1 + 0x280) = FUN_104a8b5b4;
  *(long *)(param_1 + 0x288) = param_1;
  *(undefined8 *)(param_1 + 0x290) = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x1a0);
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
  func_0x0001004bd618(uVar3,param_1 + 0x278,&uStack_28,"retry timer fired");
  if ((uStack_28 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104a8b5b4; end: 104a8b62b;  */

void FUN_104a8b5b4(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uStack_38;
  undefined1 uStack_29;
  ulong uStack_28;
  
  if ((*param_2 == 0) && ((*(byte *)(param_1 + 0x238) >> 4 & 1) != 0)) {
    *(byte *)(param_1 + 0x238) = *(byte *)(param_1 + 0x238) & 0xef;
    func_0x0001004e0c00(param_1,0);
  }
  else {
    func_0x000100612044(*(undefined8 *)(param_1 + 0x1a0),"retry timer cancelled");
  }
  plVar4 = *(long **)(param_1 + 0x198);
  do {
    lVar5 = *plVar4;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar5 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar5 + -1 == 0) {
    plVar3 = plVar4;
    func_0x000100836ca0();
    if ((((ulong)plVar3 & 1) == 0) &&
       (func_0x000100460dc4(), (*(byte *)(*plVar3 + 0x28) >> 1 & 1) != 0)) {
      uStack_28 = 0;
      func_0x0001004c1168(plVar4 + 1,&uStack_28,0,0);
      if ((uStack_28 & 1) == 0) {
        return;
      }
      func_0x00010084dad0();
      return;
    }
    uStack_38 = 0;
    func_0x0001004bd7e8(&uStack_29,plVar4 + 1,&uStack_38);
    if ((uStack_38 & 1) != 0) {
      func_0x00010084dad0();
    }
    return;
  }
  return;
}



/* Entry: 104a8b62c; end: 104a8b6af;  */

void FUN_104a8b62c(ulong *param_1)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  puVar3 = param_1 + 1;
  uVar1 = *param_1;
  puVar2 = puVar3;
  if ((uVar1 & 1) != 0) {
    puVar2 = (ulong *)*puVar3;
  }
  if (1 < uVar1) {
    uVar1 = uVar1 >> 1;
    puVar2 = puVar2 + uVar1 * 2;
    do {
      puVar2 = puVar2 + -2;
      uVar1 = uVar1 - 1;
      FUN_104a87884(puVar2);
    } while (uVar1 != 0);
    uVar1 = *param_1;
  }
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*puVar3);
    return;
  }
  return;
}



/* Entry: 104a8b6b0; end: 104a8b70b;  */

undefined8 * FUN_104a8b6b0(undefined8 *param_1)

{
  ulong uStack_30;
  undefined1 uStack_21;
  
  *param_1 = &PTR_FUN_1107c30a0;
  uStack_30 = 0;
  func_0x0001004bd7e8(&uStack_21,param_1[2],&uStack_30);
  if ((uStack_30 & 1) != 0) {
    func_0x00010084dad0();
  }
  return param_1;
}



/* Entry: 104a8b70c; end: 104a8b71f;  */

void FUN_104a8b70c(void)

{
  FUN_104a8b6b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


