/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104aa3b98; end: 104aa3c4f;  */

void FUN_104aa3b98(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  code *param_5,code *param_6)

{
  undefined8 ***pppuVar1;
  undefined8 uVar2;
  undefined8 **ppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  uVar2 = param_3;
  (*param_5)(param_4);
  param_4 = param_4 & 0xff;
  (*param_6)(param_4);
  func_0x000100741c30(&ppuStack_48,param_4,uVar2);
  pppuVar1 = (undefined8 ***)ppuStack_48;
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
    pppuVar1 = &ppuStack_48;
  }
  FUN_104adf434(param_1,param_2,param_3,pppuVar1,uStack_40);
  if ((char)bStack_31 < '\0') {
    __ZdlPv(ppuStack_48);
  }
  return;
}



/* Entry: 104aa3c50; end: 104aa3c5b;  */

undefined1 FUN_104aa3c50(undefined8 *param_1)

{
  return *(undefined1 *)*param_1;
}



/* Entry: 104aa3c5c; end: 104aa3c7f;  */

void FUN_104aa3c5c(undefined1 param_1)

{
  undefined1 uStack_11;
  
  uStack_11 = param_1;
  FUN_104ab162c(&uStack_11);
  return;
}



/* Entry: 104aa3c80; end: 104aa3cc3;  */

void FUN_104aa3c80(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_2;
  FUN_104aa3cc4();
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  lVar2 = lVar1;
  FUN_104aa3d80();
  *param_1 = lVar2;
  *(int *)(param_1 + 5) = (int)uVar3;
  *(int *)(param_1 + 1) = (int)lVar1;
  return;
}



/* Entry: 104aa3cc4; end: 104aa3d7f;  */

undefined1 * FUN_104aa3cc4(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long **pplVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  pplVar3 = &plStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = param_1[1];
  plStack_50 = (long *)*param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  uVar6 = param_1[4];
  func_0x00010082dfb8(&plStack_50,uVar6,param_1[5]);
  iVar5 = (int)uVar6;
  plVar4 = plStack_50;
  if ((long *)0x1 < plStack_50) {
    do {
      lVar7 = *plStack_50;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar2) {
        *plStack_50 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return (undefined1 *)pplVar3;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    FUN_104bd46a0(plVar4);
    func_0x0001004b6d90(&plStack_50);
  }
  __Unwind_Resume(plVar4);
  if ((bRam00000001130a5c50 & 1) == 0) {
    iVar5 = 0x130a5c50;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      uRam00000001130a5c10 = 0;
      puRam00000001130a5c18 = &SUB_100744a04;
      pcRam00000001130a5c20 = FUN_104aa3ecc;
      pcRam00000001130a5c28 = FUN_104aa3e10;
      uRam00000001130a5c30 = 0x104aa3eec;
      pcRam00000001130a5c38 = "grpc-status";
      uRam00000001130a5c40 = 0xb;
      uRam00000001130a5c48 = 0;
      ___cxa_guard_release(0x1130a5c50);
    }
  }
  return (undefined1 *)0x1130a5c10;
}



/* Entry: 104aa3d80; end: 104aa3e0f;  */

undefined8 FUN_104aa3d80(void)

{
  int iVar1;
  
  if ((bRam00000001130a5c50 & 1) == 0) {
    iVar1 = 0x130a5c50;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001130a5c10 = 0;
      puRam00000001130a5c18 = &SUB_100744a04;
      pcRam00000001130a5c20 = FUN_104aa3ecc;
      pcRam00000001130a5c28 = FUN_104aa3e10;
      uRam00000001130a5c30 = 0x104aa3eec;
      pcRam00000001130a5c38 = "grpc-status";
      uRam00000001130a5c40 = 0xb;
      uRam00000001130a5c48 = 0;
      ___cxa_guard_release(0x1130a5c50);
    }
  }
  return 0x1130a5c10;
}



/* Entry: 104aa3e10; end: 104aa3ecb;  */

void FUN_104aa3e10(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  long *plVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  uVar6 = (undefined4)((ulong)param_2 >> 0x20);
  iVar5 = (int)param_2;
  uVar3 = SUB84(&plStack_50,0);
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = param_1[1];
  plStack_50 = (long *)*param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  func_0x00010082dfb8();
  plVar4 = plStack_50;
  if ((long *)0x1 < plStack_50) {
    do {
      lVar7 = *plStack_50;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar2) {
        *plStack_50 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  *(undefined4 *)(param_4 + 8) = uVar3;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(&plStack_50);
  }
  __Unwind_Resume();
  lVar7 = *plVar4;
  *(uint *)CONCAT44(uVar6,iVar5) = *(uint *)CONCAT44(uVar6,iVar5) | 0x400;
  *(int *)(CONCAT44(uVar6,iVar5) + 0x188) = (int)lVar7;
  return;
}



/* Entry: 104aa3ecc; end: 104aa3f0f;  */

void FUN_104aa3ecc(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  *param_2 = *param_2 | 0x400;
  param_2[0x62] = uVar1;
  return;
}



/* Entry: 104aa3f10; end: 104aa400b;  */

void FUN_104aa3f10(undefined8 param_1,undefined1 *param_2,undefined8 param_3,long param_4,
                  code *param_5,code *param_6)

{
  undefined1 **ppuVar1;
  undefined1 *puStack_90;
  ulong uStack_88;
  byte bStack_79;
  undefined1 *puStack_78;
  long lStack_70;
  undefined1 auStack_68 [32];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  (*param_5)();
  (*param_6)();
  func_0x00010ae8b9d8();
  lStack_70 = param_4 - (long)auStack_68;
  puStack_78 = auStack_68;
  func_0x000100741c30(&puStack_90,auStack_68);
  ppuVar1 = (undefined1 **)puStack_90;
  if (-1 < (char)bStack_79) {
    uStack_88 = (ulong)bStack_79;
    ppuVar1 = &puStack_90;
  }
  FUN_104adf434(param_1,param_2,param_3,ppuVar1,uStack_88);
  if ((char)bStack_79 < '\0') {
    param_2 = puStack_90;
    __ZdlPv(puStack_90);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    if ((char)bStack_79 < '\0') {
      __ZdlPv(puStack_90);
    }
    __Unwind_Resume(param_2);
    return;
  }
  return;
}



/* Entry: 104aa400c; end: 104aa400f;  */

void FUN_104aa400c(void)

{
  return;
}



/* Entry: 104aa4010; end: 104aa404f;  */

void FUN_104aa4010(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_2;
  FUN_104aa4050();
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  lVar2 = lVar1;
  FUN_104aa410c();
  *(int *)(param_1 + 5) = (int)uVar3;
  *param_1 = lVar2;
  param_1[1] = lVar1;
  return;
}



/* Entry: 104aa4050; end: 104aa410b;  */

undefined1 * FUN_104aa4050(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long **pplVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  pplVar3 = &plStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = param_1[1];
  plStack_50 = (long *)*param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  uVar6 = param_1[4];
  FUN_104adeec0(&plStack_50,uVar6,param_1[5]);
  iVar5 = (int)uVar6;
  plVar4 = plStack_50;
  if ((long *)0x1 < plStack_50) {
    do {
      lVar7 = *plStack_50;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar2) {
        *plStack_50 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return (undefined1 *)pplVar3;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    FUN_104bd46a0(plVar4);
    func_0x0001004b6d90(&plStack_50);
  }
  __Unwind_Resume(plVar4);
  if ((bRam00000001130a5c98 & 1) == 0) {
    iVar5 = 0x130a5c98;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      uRam00000001130a5c58 = 0;
      puRam00000001130a5c60 = &SUB_100744a04;
      pcRam00000001130a5c68 = FUN_104aa4258;
      pcRam00000001130a5c70 = FUN_104aa419c;
      uRam00000001130a5c78 = 0x104aa4294;
      pcRam00000001130a5c80 = "grpc-timeout";
      uRam00000001130a5c88 = 0xc;
      uRam00000001130a5c90 = 0;
      ___cxa_guard_release(0x1130a5c98);
    }
  }
  return (undefined1 *)0x1130a5c58;
}



/* Entry: 104aa410c; end: 104aa419b;  */

undefined8 FUN_104aa410c(void)

{
  int iVar1;
  
  if ((bRam00000001130a5c98 & 1) == 0) {
    iVar1 = 0x130a5c98;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001130a5c58 = 0;
      puRam00000001130a5c60 = &SUB_100744a04;
      pcRam00000001130a5c68 = FUN_104aa4258;
      pcRam00000001130a5c70 = FUN_104aa419c;
      uRam00000001130a5c78 = 0x104aa4294;
      pcRam00000001130a5c80 = "grpc-timeout";
      uRam00000001130a5c88 = 0xc;
      uRam00000001130a5c90 = 0;
      ___cxa_guard_release(0x1130a5c98);
    }
  }
  return 0x1130a5c58;
}



/* Entry: 104aa419c; end: 104aa4257;  */

void FUN_104aa419c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  uint *puVar3;
  long **pplVar4;
  long *plVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  uVar7 = (undefined4)((ulong)param_2 >> 0x20);
  iVar6 = (int)param_2;
  pplVar4 = &plStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = param_1[1];
  plStack_50 = (long *)*param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_104adeec0();
  plVar5 = plStack_50;
  if ((long *)0x1 < plStack_50) {
    do {
      lVar8 = *plStack_50;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar2) {
        *plStack_50 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  *(long ***)(param_4 + 8) = pplVar4;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar6 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(&plStack_50);
  }
  __Unwind_Resume();
  puVar3 = (uint *)CONCAT44(uVar7,iVar6);
  lVar8 = *plVar5;
  FUN_104adef14();
  *puVar3 = *puVar3 | 0x800;
  *(long *)(puVar3 + 0x60) = lVar8;
  return;
}



/* Entry: 104aa4258; end: 104aa428b;  */

void FUN_104aa4258(undefined8 *param_1,uint *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_104adef14();
  *param_2 = *param_2 | 0x800;
  *(undefined8 *)(param_2 + 0x60) = uVar1;
  return;
}



/* Entry: 104aa428c; end: 104aa42b7;  */

undefined8 FUN_104aa428c(undefined8 *param_1)

{
  return *param_1;
}



/* Entry: 104aa42b8; end: 104aa43ab;  */

void FUN_104aa42b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5,code *param_6)

{
  undefined1 **ppuVar1;
  undefined8 ***pppuVar2;
  undefined1 *puStack_70;
  ulong uStack_68;
  byte bStack_59;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  (*param_5)(param_4);
  (*param_6)(&puStack_70);
  ppuVar1 = (undefined1 **)puStack_70;
  if (-1 < (char)bStack_59) {
    uStack_68 = (ulong)bStack_59;
    ppuVar1 = &puStack_70;
  }
  func_0x000100741c30(&ppuStack_58,ppuVar1,uStack_68);
  pppuVar2 = (undefined8 ***)ppuStack_58;
  if (-1 < (char)bStack_41) {
    uStack_50 = (ulong)bStack_41;
    pppuVar2 = &ppuStack_58;
  }
  FUN_104adf434(param_1,param_2,param_3,pppuVar2,uStack_50);
  if ((char)bStack_41 < '\0') {
    __ZdlPv(ppuStack_58);
  }
  if ((char)bStack_59 < '\0') {
    __ZdlPv(puStack_70);
  }
  return;
}



/* Entry: 104aa43ac; end: 104aa43cf;  */

void FUN_104aa43ac(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_104ab7c14(&uStack_18);
  return;
}



/* Entry: 104aa43d0; end: 104aa4413;  */

void FUN_104aa43d0(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_2;
  func_0x000100745064();
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  lVar2 = lVar1;
  FUN_104aa4414();
  *param_1 = lVar2;
  *(int *)(param_1 + 5) = (int)uVar3;
  *(int *)(param_1 + 1) = (int)lVar1;
  return;
}



/* Entry: 104aa4414; end: 104aa44a3;  */

undefined8 FUN_104aa4414(void)

{
  int iVar1;
  
  if ((bRam00000001130a5ce0 & 1) == 0) {
    iVar1 = 0x130a5ce0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001130a5ca0 = 0;
      puRam00000001130a5ca8 = &SUB_100744a04;
      pcRam00000001130a5cb0 = FUN_104aa44a4;
      pcRam00000001130a5cb8 = FUN_104aa2ac4;
      uRam00000001130a5cc0 = 0x104aa44bc;
      pcRam00000001130a5cc8 = "grpc-previous-rpc-attempts";
      uRam00000001130a5cd0 = 0x1a;
      uRam00000001130a5cd8 = 0;
      ___cxa_guard_release(0x1130a5ce0);
    }
  }
  return 0x1130a5ca0;
}



/* Entry: 104aa44a4; end: 104aa44df;  */

void FUN_104aa44a4(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  *param_2 = *param_2 | 0x1000;
  param_2[0x5e] = uVar1;
  return;
}



/* Entry: 104aa44e0; end: 104aa451f;  */

void FUN_104aa44e0(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_2;
  FUN_104aa4520();
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  lVar2 = lVar1;
  FUN_104aa45dc();
  *(int *)(param_1 + 5) = (int)uVar3;
  *param_1 = lVar2;
  param_1[1] = lVar1;
  return;
}



/* Entry: 104aa4520; end: 104aa45db;  */

undefined1 * FUN_104aa4520(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long **pplVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  pplVar3 = &plStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = param_1[1];
  plStack_50 = (long *)*param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  uVar6 = param_1[4];
  FUN_104adf10c(&plStack_50,uVar6,param_1[5]);
  iVar5 = (int)uVar6;
  plVar4 = plStack_50;
  if ((long *)0x1 < plStack_50) {
    do {
      lVar7 = *plStack_50;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar2) {
        *plStack_50 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return (undefined1 *)pplVar3;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    FUN_104bd46a0(plVar4);
    func_0x0001004b6d90(&plStack_50);
  }
  __Unwind_Resume(plVar4);
  if ((bRam00000001130a5d28 & 1) == 0) {
    iVar5 = 0x130a5d28;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      uRam00000001130a5ce8 = 0;
      puRam00000001130a5cf0 = &SUB_100744a04;
      pcRam00000001130a5cf8 = FUN_104aa4728;
      pcRam00000001130a5d00 = FUN_104aa466c;
      uRam00000001130a5d08 = 0x104aa4740;
      pcRam00000001130a5d10 = "grpc-retry-pushback-ms";
      uRam00000001130a5d18 = 0x16;
      uRam00000001130a5d20 = 0;
      ___cxa_guard_release(0x1130a5d28);
    }
  }
  return (undefined1 *)0x1130a5ce8;
}



/* Entry: 104aa45dc; end: 104aa466b;  */

undefined8 FUN_104aa45dc(void)

{
  int iVar1;
  
  if ((bRam00000001130a5d28 & 1) == 0) {
    iVar1 = 0x130a5d28;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001130a5ce8 = 0;
      puRam00000001130a5cf0 = &SUB_100744a04;
      pcRam00000001130a5cf8 = FUN_104aa4728;
      pcRam00000001130a5d00 = FUN_104aa466c;
      uRam00000001130a5d08 = 0x104aa4740;
      pcRam00000001130a5d10 = "grpc-retry-pushback-ms";
      uRam00000001130a5d18 = 0x16;
      uRam00000001130a5d20 = 0;
      ___cxa_guard_release(0x1130a5d28);
    }
  }
  return 0x1130a5ce8;
}



/* Entry: 104aa466c; end: 104aa4727;  */

void FUN_104aa466c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  long **pplVar3;
  long *plVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  uVar6 = (undefined4)((ulong)param_2 >> 0x20);
  iVar5 = (int)param_2;
  pplVar3 = &plStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = param_1[1];
  plStack_50 = (long *)*param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_104adf10c();
  plVar4 = plStack_50;
  if ((long *)0x1 < plStack_50) {
    do {
      lVar7 = *plStack_50;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar2) {
        *plStack_50 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  *(long ***)(param_4 + 8) = pplVar3;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(&plStack_50);
  }
  __Unwind_Resume();
  lVar7 = *plVar4;
  *(uint *)CONCAT44(uVar6,iVar5) = *(uint *)CONCAT44(uVar6,iVar5) | 0x2000;
  *(long *)(CONCAT44(uVar6,iVar5) + 0x170) = lVar7;
  return;
}



/* Entry: 104aa4728; end: 104aa4763;  */

void FUN_104aa4728(undefined8 *param_1,uint *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_2 = *param_2 | 0x2000;
  *(undefined8 *)(param_2 + 0x5c) = uVar1;
  return;
}



/* Entry: 104aa4764; end: 104aa485f;  */

void FUN_104aa4764(undefined8 param_1,undefined1 *param_2,undefined8 param_3,long param_4,
                  code *param_5,code *param_6)

{
  undefined1 **ppuVar1;
  undefined1 *puStack_90;
  ulong uStack_88;
  byte bStack_79;
  undefined1 *puStack_78;
  long lStack_70;
  undefined1 auStack_68 [32];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  (*param_5)();
  (*param_6)();
  func_0x00010ae8bc54();
  lStack_70 = param_4 - (long)auStack_68;
  puStack_78 = auStack_68;
  func_0x000100741c30(&puStack_90,auStack_68);
  ppuVar1 = (undefined1 **)puStack_90;
  if (-1 < (char)bStack_79) {
    uStack_88 = (ulong)bStack_79;
    ppuVar1 = &puStack_90;
  }
  FUN_104adf434(param_1,param_2,param_3,ppuVar1,uStack_88);
  if ((char)bStack_79 < '\0') {
    param_2 = puStack_90;
    __ZdlPv(puStack_90);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    if ((char)bStack_79 < '\0') {
      __ZdlPv(puStack_90);
    }
    __Unwind_Resume(param_2);
    return;
  }
  return;
}



/* Entry: 104aa4860; end: 104aa48af;  */

void FUN_104aa4860(void)

{
  return;
}



/* Entry: 104aa48b0; end: 104aa4947;  */

long FUN_104aa48b0(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_2;
  func_0x00010074482c(&lStack_48);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  FUN_104aa4948();
  *param_1 = lVar2;
  *(int *)(param_1 + 5) = (int)uVar3;
  param_1[2] = lStack_40;
  param_1[1] = lStack_48;
  param_1[4] = lStack_30;
  param_1[3] = lStack_38;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return lVar2;
  }
  ___stack_chk_fail();
  func_0x0001004b6d90(&lStack_48);
  __Unwind_Resume(lVar2);
  if ((bRam00000001130a5db8 & 1) == 0) {
    iVar1 = 0x130a5db8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001130a5d78 = 0;
      uRam00000001130a5d80 = 0x104adf4cc;
      pcRam00000001130a5d88 = FUN_104aa49d8;
      pcRam00000001130a5d90 = FUN_104aa2538;
      uRam00000001130a5d98 = 0x104aa4a00;
      puRam00000001130a5da0 = &UNK_10f67192f;
      uRam00000001130a5da8 = 0xc;
      uRam00000001130a5db0 = 0;
      ___cxa_guard_release(0x1130a5db8);
    }
  }
  return 0x1130a5d78;
}



/* Entry: 104aa4948; end: 104aa49d7;  */

undefined8 FUN_104aa4948(void)

{
  int iVar1;
  
  if ((bRam00000001130a5db8 & 1) == 0) {
    iVar1 = 0x130a5db8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001130a5d78 = 0;
      uRam00000001130a5d80 = 0x104adf4cc;
      pcRam00000001130a5d88 = FUN_104aa49d8;
      pcRam00000001130a5d90 = FUN_104aa2538;
      uRam00000001130a5d98 = 0x104aa4a00;
      puRam00000001130a5da0 = &UNK_10f67192f;
      uRam00000001130a5da8 = 0xc;
      uRam00000001130a5db0 = 0;
      ___cxa_guard_release(0x1130a5db8);
    }
  }
  return 0x1130a5d78;
}



/* Entry: 104aa49d8; end: 104aa4a6f;  */

undefined1  [16] FUN_104aa49d8(undefined8 param_1,uint *param_2)

{
  uint *puVar1;
  ulong uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined1 **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long **pplVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 extraout_x8;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 *puStack_f0;
  ulong uStack_e8;
  byte bStack_d9;
  long *aplStack_d8 [4];
  long lStack_b8;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar1 = param_2 + 0x4c;
  uVar3 = *param_2;
  *param_2 = uVar3 | 0x8000;
  if ((uVar3 >> 0xf & 1) == 0) {
    param_2[0x4e] = 0;
    param_2[0x4f] = 0;
    puVar1[0] = 0;
    puVar1[1] = 0;
    param_2[0x52] = 0;
    param_2[0x53] = 0;
    param_2[0x50] = 0;
    param_2[0x51] = 0;
  }
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104adf4a4(&plStack_80,param_1);
  uVar8 = uStack_68;
  uVar7 = uStack_70;
  uVar12 = uStack_78;
  plVar10 = plStack_80;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  plStack_80 = (long *)0x0;
  plVar9 = *(long **)puVar1;
  uStack_58 = *(undefined8 *)(param_2 + 0x50);
  uStack_60 = *(undefined8 *)(param_2 + 0x4e);
  uStack_50 = *(undefined8 *)(param_2 + 0x52);
  *(long **)puVar1 = plVar10;
  *(undefined8 *)(param_2 + 0x50) = uVar7;
  *(undefined8 *)(param_2 + 0x4e) = uVar12;
  *(undefined8 *)(param_2 + 0x52) = uVar8;
  uStack_40 = uStack_60;
  uStack_38 = uStack_58;
  uStack_30 = uStack_50;
  if ((long *)0x1 < plVar9) {
    do {
      lVar13 = *plVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 + -1 == 0) {
      (*(code *)plVar9[1])();
    }
  }
  plVar10 = plStack_80;
  if ((long *)0x1 < plStack_80) {
    do {
      lVar13 = *plStack_80;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plStack_80,0x10);
      if (bVar5) {
        *plStack_80 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 + -1 == 0) {
      (*(code *)plStack_80[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    auVar14._8_8_ = param_1;
    auVar14._0_8_ = plVar10;
    return auVar14;
  }
  ___stack_chk_fail();
  if ((int)param_1 != 0) {
    FUN_104bd46a0();
  }
  __Unwind_Resume();
  uVar12 = 5;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104adf4a4(aplStack_d8,plVar10);
  pplVar11 = aplStack_d8;
  FUN_104aa288c(pplVar11);
  func_0x000100741c30(&puStack_f0,pplVar11,uVar12);
  ppuVar6 = (undefined1 **)puStack_f0;
  if (-1 < (char)bStack_d9) {
    uStack_e8 = (ulong)bStack_d9;
    ppuVar6 = &puStack_f0;
  }
  uVar12 = 5;
  FUN_104adf434(extraout_x8,&DAT_10f760227,5,ppuVar6,uStack_e8);
  if ((char)bStack_d9 < '\0') {
    __ZdlPv(puStack_f0);
  }
  plVar10 = aplStack_d8[0];
  if ((long *)0x1 < aplStack_d8[0]) {
    do {
      lVar13 = *aplStack_d8[0];
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(aplStack_d8[0],0x10);
      if (bVar5) {
        *aplStack_d8[0] = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 + -1 == 0) {
      (*(code *)aplStack_d8[0][1])();
      plVar10 = aplStack_d8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    auVar15._8_8_ = uVar12;
    auVar15._0_8_ = plVar10;
    return auVar15;
  }
  ___stack_chk_fail();
  if ((int)uVar12 != 0) {
    FUN_104bd46a0();
    if ((char)bStack_d9 < '\0') {
      __ZdlPv(puStack_f0);
    }
    func_0x0001004b6d90(aplStack_d8);
  }
  __Unwind_Resume();
  uVar2 = plVar10[1] & 0xff;
  lVar13 = (long)plVar10 + 9;
  if (*plVar10 != 0) {
    uVar2 = plVar10[1];
    lVar13 = plVar10[2];
  }
  auVar16._8_8_ = uVar2;
  auVar16._0_8_ = lVar13;
  return auVar16;
}



/* Entry: 104aa4a70; end: 104aa4b07;  */

long FUN_104aa4a70(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_2;
  func_0x00010074482c(&lStack_48);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  FUN_104aa4b08();
  *param_1 = lVar2;
  *(int *)(param_1 + 5) = (int)uVar3;
  param_1[2] = lStack_40;
  param_1[1] = lStack_48;
  param_1[4] = lStack_30;
  param_1[3] = lStack_38;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return lVar2;
  }
  ___stack_chk_fail();
  func_0x0001004b6d90(&lStack_48);
  __Unwind_Resume(lVar2);
  if ((bRam00000001130a5e48 & 1) == 0) {
    iVar1 = 0x130a5e48;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001130a5e08 = 1;
      uRam00000001130a5e10 = 0x104adf4cc;
      pcRam00000001130a5e18 = FUN_104aa4b9c;
      pcRam00000001130a5e20 = FUN_104aa2538;
      uRam00000001130a5e28 = 0x104aa4bc4;
      pcRam00000001130a5e30 = "endpoint-load-metrics-bin";
      uRam00000001130a5e38 = 0x19;
      uRam00000001130a5e40 = 0;
      ___cxa_guard_release(0x1130a5e48);
    }
  }
  return 0x1130a5e08;
}



/* Entry: 104aa4b08; end: 104aa4b9b;  */

undefined8 FUN_104aa4b08(void)

{
  int iVar1;
  
  if ((bRam00000001130a5e48 & 1) == 0) {
    iVar1 = 0x130a5e48;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001130a5e08 = 1;
      uRam00000001130a5e10 = 0x104adf4cc;
      pcRam00000001130a5e18 = FUN_104aa4b9c;
      pcRam00000001130a5e20 = FUN_104aa2538;
      uRam00000001130a5e28 = 0x104aa4bc4;
      pcRam00000001130a5e30 = "endpoint-load-metrics-bin";
      uRam00000001130a5e38 = 0x19;
      uRam00000001130a5e40 = 0;
      ___cxa_guard_release(0x1130a5e48);
    }
  }
  return 0x1130a5e08;
}



/* Entry: 104aa4b9c; end: 104aa4be7;  */

undefined1  [16] FUN_104aa4b9c(undefined8 param_1,uint *param_2)

{
  ulong uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined1 **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long **pplVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 extraout_x8;
  uint *puVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 *puStack_f0;
  ulong uStack_e8;
  byte bStack_d9;
  long *aplStack_d8 [4];
  long lStack_b8;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  uVar2 = *param_2;
  puVar13 = param_2 + 0x3c;
  *param_2 = uVar2 | 0x20000;
  if ((uVar2 >> 0x11 & 1) == 0) {
    param_2[0x3e] = 0;
    param_2[0x3f] = 0;
    puVar13[0] = 0;
    puVar13[1] = 0;
    param_2[0x42] = 0;
    param_2[0x43] = 0;
    param_2[0x40] = 0;
    param_2[0x41] = 0;
  }
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104adf4a4(&plStack_80,param_1);
  uVar7 = uStack_68;
  uVar6 = uStack_70;
  uVar11 = uStack_78;
  plVar9 = plStack_80;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  plStack_80 = (long *)0x0;
  plVar8 = *(long **)puVar13;
  uStack_58 = *(undefined8 *)(param_2 + 0x40);
  uStack_60 = *(undefined8 *)(param_2 + 0x3e);
  uStack_50 = *(undefined8 *)(param_2 + 0x42);
  *(long **)puVar13 = plVar9;
  *(undefined8 *)(param_2 + 0x40) = uVar6;
  *(undefined8 *)(param_2 + 0x3e) = uVar11;
  *(undefined8 *)(param_2 + 0x42) = uVar7;
  uStack_40 = uStack_60;
  uStack_38 = uStack_58;
  uStack_30 = uStack_50;
  if ((long *)0x1 < plVar8) {
    do {
      lVar12 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 + -1 == 0) {
      (*(code *)plVar8[1])();
    }
  }
  plVar9 = plStack_80;
  if ((long *)0x1 < plStack_80) {
    do {
      lVar12 = *plStack_80;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_80,0x10);
      if (bVar4) {
        *plStack_80 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 + -1 == 0) {
      (*(code *)plStack_80[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    auVar14._8_8_ = param_1;
    auVar14._0_8_ = plVar9;
    return auVar14;
  }
  ___stack_chk_fail();
  if ((int)param_1 != 0) {
    FUN_104bd46a0();
  }
  __Unwind_Resume();
  uVar11 = 5;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104adf4a4(aplStack_d8,plVar9);
  pplVar10 = aplStack_d8;
  FUN_104aa288c(pplVar10);
  func_0x000100741c30(&puStack_f0,pplVar10,uVar11);
  ppuVar5 = (undefined1 **)puStack_f0;
  if (-1 < (char)bStack_d9) {
    uStack_e8 = (ulong)bStack_d9;
    ppuVar5 = &puStack_f0;
  }
  uVar11 = 5;
  FUN_104adf434(extraout_x8,&DAT_10f760227,5,ppuVar5,uStack_e8);
  if ((char)bStack_d9 < '\0') {
    __ZdlPv(puStack_f0);
  }
  plVar9 = aplStack_d8[0];
  if ((long *)0x1 < aplStack_d8[0]) {
    do {
      lVar12 = *aplStack_d8[0];
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(aplStack_d8[0],0x10);
      if (bVar4) {
        *aplStack_d8[0] = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 + -1 == 0) {
      (*(code *)aplStack_d8[0][1])();
      plVar9 = aplStack_d8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    auVar15._8_8_ = uVar11;
    auVar15._0_8_ = plVar9;
    return auVar15;
  }
  ___stack_chk_fail();
  if ((int)uVar11 != 0) {
    FUN_104bd46a0();
    if ((char)bStack_d9 < '\0') {
      __ZdlPv(puStack_f0);
    }
    func_0x0001004b6d90(aplStack_d8);
  }
  __Unwind_Resume();
  uVar1 = plVar9[1] & 0xff;
  lVar12 = (long)plVar9 + 9;
  if (*plVar9 != 0) {
    uVar1 = plVar9[1];
    lVar12 = plVar9[2];
  }
  auVar16._8_8_ = uVar1;
  auVar16._0_8_ = lVar12;
  return auVar16;
}



/* Entry: 104aa4be8; end: 104aa4c7f;  */

long FUN_104aa4be8(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_2;
  func_0x00010074482c(&lStack_48);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  FUN_104aa4c80();
  *param_1 = lVar2;
  *(int *)(param_1 + 5) = (int)uVar3;
  param_1[2] = lStack_40;
  param_1[1] = lStack_48;
  param_1[4] = lStack_30;
  param_1[3] = lStack_38;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return lVar2;
  }
  ___stack_chk_fail();
  func_0x0001004b6d90(&lStack_48);
  __Unwind_Resume(lVar2);
  if ((bRam00000001130a5e90 & 1) == 0) {
    iVar1 = 0x130a5e90;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001130a5e50 = 1;
      uRam00000001130a5e58 = 0x104adf4cc;
      pcRam00000001130a5e60 = FUN_104aa4d14;
      pcRam00000001130a5e68 = FUN_104aa2538;
      uRam00000001130a5e70 = 0x104aa4d3c;
      pcRam00000001130a5e78 = "grpc-server-stats-bin";
      uRam00000001130a5e80 = 0x15;
      uRam00000001130a5e88 = 0;
      ___cxa_guard_release(0x1130a5e90);
    }
  }
  return 0x1130a5e50;
}



/* Entry: 104aa4c80; end: 104aa4d13;  */

undefined8 FUN_104aa4c80(void)

{
  int iVar1;
  
  if ((bRam00000001130a5e90 & 1) == 0) {
    iVar1 = 0x130a5e90;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001130a5e50 = 1;
      uRam00000001130a5e58 = 0x104adf4cc;
      pcRam00000001130a5e60 = FUN_104aa4d14;
      pcRam00000001130a5e68 = FUN_104aa2538;
      uRam00000001130a5e70 = 0x104aa4d3c;
      pcRam00000001130a5e78 = "grpc-server-stats-bin";
      uRam00000001130a5e80 = 0x15;
      uRam00000001130a5e88 = 0;
      ___cxa_guard_release(0x1130a5e90);
    }
  }
  return 0x1130a5e50;
}



/* Entry: 104aa4d14; end: 104aa4d5f;  */

undefined1  [16] FUN_104aa4d14(undefined8 param_1,uint *param_2)

{
  ulong uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined1 **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long **pplVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 extraout_x8;
  uint *puVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 *puStack_f0;
  ulong uStack_e8;
  byte bStack_d9;
  long *aplStack_d8 [4];
  long lStack_b8;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  uVar2 = *param_2;
  puVar13 = param_2 + 0x34;
  *param_2 = uVar2 | 0x40000;
  if ((uVar2 >> 0x12 & 1) == 0) {
    param_2[0x36] = 0;
    param_2[0x37] = 0;
    puVar13[0] = 0;
    puVar13[1] = 0;
    param_2[0x3a] = 0;
    param_2[0x3b] = 0;
    param_2[0x38] = 0;
    param_2[0x39] = 0;
  }
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104adf4a4(&plStack_80,param_1);
  uVar7 = uStack_68;
  uVar6 = uStack_70;
  uVar11 = uStack_78;
  plVar9 = plStack_80;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  plStack_80 = (long *)0x0;
  plVar8 = *(long **)puVar13;
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_60 = *(undefined8 *)(param_2 + 0x36);
  uStack_50 = *(undefined8 *)(param_2 + 0x3a);
  *(long **)puVar13 = plVar9;
  *(undefined8 *)(param_2 + 0x38) = uVar6;
  *(undefined8 *)(param_2 + 0x36) = uVar11;
  *(undefined8 *)(param_2 + 0x3a) = uVar7;
  uStack_40 = uStack_60;
  uStack_38 = uStack_58;
  uStack_30 = uStack_50;
  if ((long *)0x1 < plVar8) {
    do {
      lVar12 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 + -1 == 0) {
      (*(code *)plVar8[1])();
    }
  }
  plVar9 = plStack_80;
  if ((long *)0x1 < plStack_80) {
    do {
      lVar12 = *plStack_80;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_80,0x10);
      if (bVar4) {
        *plStack_80 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 + -1 == 0) {
      (*(code *)plStack_80[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    auVar14._8_8_ = param_1;
    auVar14._0_8_ = plVar9;
    return auVar14;
  }
  ___stack_chk_fail();
  if ((int)param_1 != 0) {
    FUN_104bd46a0();
  }
  __Unwind_Resume();
  uVar11 = 5;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104adf4a4(aplStack_d8,plVar9);
  pplVar10 = aplStack_d8;
  FUN_104aa288c(pplVar10);
  func_0x000100741c30(&puStack_f0,pplVar10,uVar11);
  ppuVar5 = (undefined1 **)puStack_f0;
  if (-1 < (char)bStack_d9) {
    uStack_e8 = (ulong)bStack_d9;
    ppuVar5 = &puStack_f0;
  }
  uVar11 = 5;
  FUN_104adf434(extraout_x8,&DAT_10f760227,5,ppuVar5,uStack_e8);
  if ((char)bStack_d9 < '\0') {
    __ZdlPv(puStack_f0);
  }
  plVar9 = aplStack_d8[0];
  if ((long *)0x1 < aplStack_d8[0]) {
    do {
      lVar12 = *aplStack_d8[0];
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(aplStack_d8[0],0x10);
      if (bVar4) {
        *aplStack_d8[0] = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 + -1 == 0) {
      (*(code *)aplStack_d8[0][1])();
      plVar9 = aplStack_d8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    auVar15._8_8_ = uVar11;
    auVar15._0_8_ = plVar9;
    return auVar15;
  }
  ___stack_chk_fail();
  if ((int)uVar11 != 0) {
    FUN_104bd46a0();
    if ((char)bStack_d9 < '\0') {
      __ZdlPv(puStack_f0);
    }
    func_0x0001004b6d90(aplStack_d8);
  }
  __Unwind_Resume();
  uVar1 = plVar9[1] & 0xff;
  lVar12 = (long)plVar9 + 9;
  if (*plVar9 != 0) {
    uVar1 = plVar9[1];
    lVar12 = plVar9[2];
  }
  auVar16._8_8_ = uVar1;
  auVar16._0_8_ = lVar12;
  return auVar16;
}



/* Entry: 104aa4d60; end: 104aa4df7;  */

long FUN_104aa4d60(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_2;
  func_0x00010074482c(&lStack_48);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  FUN_104aa4df8();
  *param_1 = lVar2;
  *(int *)(param_1 + 5) = (int)uVar3;
  param_1[2] = lStack_40;
  param_1[1] = lStack_48;
  param_1[4] = lStack_30;
  param_1[3] = lStack_38;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return lVar2;
  }
  ___stack_chk_fail();
  func_0x0001004b6d90(&lStack_48);
  __Unwind_Resume(lVar2);
  if ((bRam00000001130a5ed8 & 1) == 0) {
    iVar1 = 0x130a5ed8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001130a5e98 = 1;
      uRam00000001130a5ea0 = 0x104adf4cc;
      pcRam00000001130a5ea8 = FUN_104aa4e8c;
      pcRam00000001130a5eb0 = FUN_104aa2538;
      uRam00000001130a5eb8 = 0x104aa4eb4;
      pcRam00000001130a5ec0 = "grpc-trace-bin";
      uRam00000001130a5ec8 = 0xe;
      uRam00000001130a5ed0 = 0;
      ___cxa_guard_release(0x1130a5ed8);
    }
  }
  return 0x1130a5e98;
}



/* Entry: 104aa4df8; end: 104aa4e8b;  */

undefined8 FUN_104aa4df8(void)

{
  int iVar1;
  
  if ((bRam00000001130a5ed8 & 1) == 0) {
    iVar1 = 0x130a5ed8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001130a5e98 = 1;
      uRam00000001130a5ea0 = 0x104adf4cc;
      pcRam00000001130a5ea8 = FUN_104aa4e8c;
      pcRam00000001130a5eb0 = FUN_104aa2538;
      uRam00000001130a5eb8 = 0x104aa4eb4;
      pcRam00000001130a5ec0 = "grpc-trace-bin";
      uRam00000001130a5ec8 = 0xe;
      uRam00000001130a5ed0 = 0;
      ___cxa_guard_release(0x1130a5ed8);
    }
  }
  return 0x1130a5e98;
}



/* Entry: 104aa4e8c; end: 104aa4ed7;  */

undefined1  [16] FUN_104aa4e8c(undefined8 param_1,uint *param_2)

{
  ulong uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined1 **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long **pplVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 extraout_x8;
  uint *puVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 *puStack_f0;
  ulong uStack_e8;
  byte bStack_d9;
  long *aplStack_d8 [4];
  long lStack_b8;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  uVar2 = *param_2;
  puVar13 = param_2 + 0x2c;
  *param_2 = uVar2 | 0x80000;
  if ((uVar2 >> 0x13 & 1) == 0) {
    param_2[0x2e] = 0;
    param_2[0x2f] = 0;
    puVar13[0] = 0;
    puVar13[1] = 0;
    param_2[0x32] = 0;
    param_2[0x33] = 0;
    param_2[0x30] = 0;
    param_2[0x31] = 0;
  }
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104adf4a4(&plStack_80,param_1);
  uVar7 = uStack_68;
  uVar6 = uStack_70;
  uVar11 = uStack_78;
  plVar9 = plStack_80;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  plStack_80 = (long *)0x0;
  plVar8 = *(long **)puVar13;
  uStack_58 = *(undefined8 *)(param_2 + 0x30);
  uStack_60 = *(undefined8 *)(param_2 + 0x2e);
  uStack_50 = *(undefined8 *)(param_2 + 0x32);
  *(long **)puVar13 = plVar9;
  *(undefined8 *)(param_2 + 0x30) = uVar6;
  *(undefined8 *)(param_2 + 0x2e) = uVar11;
  *(undefined8 *)(param_2 + 0x32) = uVar7;
  uStack_40 = uStack_60;
  uStack_38 = uStack_58;
  uStack_30 = uStack_50;
  if ((long *)0x1 < plVar8) {
    do {
      lVar12 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 + -1 == 0) {
      (*(code *)plVar8[1])();
    }
  }
  plVar9 = plStack_80;
  if ((long *)0x1 < plStack_80) {
    do {
      lVar12 = *plStack_80;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_80,0x10);
      if (bVar4) {
        *plStack_80 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 + -1 == 0) {
      (*(code *)plStack_80[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    auVar14._8_8_ = param_1;
    auVar14._0_8_ = plVar9;
    return auVar14;
  }
  ___stack_chk_fail();
  if ((int)param_1 != 0) {
    FUN_104bd46a0();
  }
  __Unwind_Resume();
  uVar11 = 5;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104adf4a4(aplStack_d8,plVar9);
  pplVar10 = aplStack_d8;
  FUN_104aa288c(pplVar10);
  func_0x000100741c30(&puStack_f0,pplVar10,uVar11);
  ppuVar5 = (undefined1 **)puStack_f0;
  if (-1 < (char)bStack_d9) {
    uStack_e8 = (ulong)bStack_d9;
    ppuVar5 = &puStack_f0;
  }
  uVar11 = 5;
  FUN_104adf434(extraout_x8,&DAT_10f760227,5,ppuVar5,uStack_e8);
  if ((char)bStack_d9 < '\0') {
    __ZdlPv(puStack_f0);
  }
  plVar9 = aplStack_d8[0];
  if ((long *)0x1 < aplStack_d8[0]) {
    do {
      lVar12 = *aplStack_d8[0];
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(aplStack_d8[0],0x10);
      if (bVar4) {
        *aplStack_d8[0] = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 + -1 == 0) {
      (*(code *)aplStack_d8[0][1])();
      plVar9 = aplStack_d8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    auVar15._8_8_ = uVar11;
    auVar15._0_8_ = plVar9;
    return auVar15;
  }
  ___stack_chk_fail();
  if ((int)uVar11 != 0) {
    FUN_104bd46a0();
    if ((char)bStack_d9 < '\0') {
      __ZdlPv(puStack_f0);
    }
    func_0x0001004b6d90(aplStack_d8);
  }
  __Unwind_Resume();
  uVar1 = plVar9[1] & 0xff;
  lVar12 = (long)plVar9 + 9;
  if (*plVar9 != 0) {
    uVar1 = plVar9[1];
    lVar12 = plVar9[2];
  }
  auVar16._8_8_ = uVar1;
  auVar16._0_8_ = lVar12;
  return auVar16;
}



/* Entry: 104aa4ed8; end: 104aa4f6f;  */

long FUN_104aa4ed8(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_2;
  func_0x00010074482c(&lStack_48);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  FUN_104aa4f70();
  *param_1 = lVar2;
  *(int *)(param_1 + 5) = (int)uVar3;
  param_1[2] = lStack_40;
  param_1[1] = lStack_48;
  param_1[4] = lStack_30;
  param_1[3] = lStack_38;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return lVar2;
  }
  ___stack_chk_fail();
  func_0x0001004b6d90(&lStack_48);
  __Unwind_Resume(lVar2);
  if ((bRam00000001130a5f20 & 1) == 0) {
    iVar1 = 0x130a5f20;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001130a5ee0 = 1;
      uRam00000001130a5ee8 = 0x104adf4cc;
      pcRam00000001130a5ef0 = FUN_104aa5004;
      pcRam00000001130a5ef8 = FUN_104aa2538;
      uRam00000001130a5f00 = 0x104aa502c;
      pcRam00000001130a5f08 = "grpc-tags-bin";
      uRam00000001130a5f10 = 0xd;
      uRam00000001130a5f18 = 0;
      ___cxa_guard_release(0x1130a5f20);
    }
  }
  return 0x1130a5ee0;
}



/* Entry: 104aa4f70; end: 104aa5003;  */

undefined8 FUN_104aa4f70(void)

{
  int iVar1;
  
  if ((bRam00000001130a5f20 & 1) == 0) {
    iVar1 = 0x130a5f20;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001130a5ee0 = 1;
      uRam00000001130a5ee8 = 0x104adf4cc;
      pcRam00000001130a5ef0 = FUN_104aa5004;
      pcRam00000001130a5ef8 = FUN_104aa2538;
      uRam00000001130a5f00 = 0x104aa502c;
      pcRam00000001130a5f08 = "grpc-tags-bin";
      uRam00000001130a5f10 = 0xd;
      uRam00000001130a5f18 = 0;
      ___cxa_guard_release(0x1130a5f20);
    }
  }
  return 0x1130a5ee0;
}



/* Entry: 104aa5004; end: 104aa504f;  */

undefined1  [16] FUN_104aa5004(undefined8 param_1,uint *param_2)

{
  ulong uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined1 **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long **pplVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 extraout_x8;
  uint *puVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 *puStack_f0;
  ulong uStack_e8;
  byte bStack_d9;
  long *aplStack_d8 [4];
  long lStack_b8;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  uVar2 = *param_2;
  puVar13 = param_2 + 0x24;
  *param_2 = uVar2 | 0x100000;
  if ((uVar2 >> 0x14 & 1) == 0) {
    param_2[0x26] = 0;
    param_2[0x27] = 0;
    puVar13[0] = 0;
    puVar13[1] = 0;
    param_2[0x2a] = 0;
    param_2[0x2b] = 0;
    param_2[0x28] = 0;
    param_2[0x29] = 0;
  }
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104adf4a4(&plStack_80,param_1);
  uVar7 = uStack_68;
  uVar6 = uStack_70;
  uVar11 = uStack_78;
  plVar9 = plStack_80;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  plStack_80 = (long *)0x0;
  plVar8 = *(long **)puVar13;
  uStack_58 = *(undefined8 *)(param_2 + 0x28);
  uStack_60 = *(undefined8 *)(param_2 + 0x26);
  uStack_50 = *(undefined8 *)(param_2 + 0x2a);
  *(long **)puVar13 = plVar9;
  *(undefined8 *)(param_2 + 0x28) = uVar6;
  *(undefined8 *)(param_2 + 0x26) = uVar11;
  *(undefined8 *)(param_2 + 0x2a) = uVar7;
  uStack_40 = uStack_60;
  uStack_38 = uStack_58;
  uStack_30 = uStack_50;
  if ((long *)0x1 < plVar8) {
    do {
      lVar12 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 + -1 == 0) {
      (*(code *)plVar8[1])();
    }
  }
  plVar9 = plStack_80;
  if ((long *)0x1 < plStack_80) {
    do {
      lVar12 = *plStack_80;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_80,0x10);
      if (bVar4) {
        *plStack_80 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 + -1 == 0) {
      (*(code *)plStack_80[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    auVar14._8_8_ = param_1;
    auVar14._0_8_ = plVar9;
    return auVar14;
  }
  ___stack_chk_fail();
  if ((int)param_1 != 0) {
    FUN_104bd46a0();
  }
  __Unwind_Resume();
  uVar11 = 5;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104adf4a4(aplStack_d8,plVar9);
  pplVar10 = aplStack_d8;
  FUN_104aa288c(pplVar10);
  func_0x000100741c30(&puStack_f0,pplVar10,uVar11);
  ppuVar5 = (undefined1 **)puStack_f0;
  if (-1 < (char)bStack_d9) {
    uStack_e8 = (ulong)bStack_d9;
    ppuVar5 = &puStack_f0;
  }
  uVar11 = 5;
  FUN_104adf434(extraout_x8,&DAT_10f760227,5,ppuVar5,uStack_e8);
  if ((char)bStack_d9 < '\0') {
    __ZdlPv(puStack_f0);
  }
  plVar9 = aplStack_d8[0];
  if ((long *)0x1 < aplStack_d8[0]) {
    do {
      lVar12 = *aplStack_d8[0];
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(aplStack_d8[0],0x10);
      if (bVar4) {
        *aplStack_d8[0] = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 + -1 == 0) {
      (*(code *)aplStack_d8[0][1])();
      plVar9 = aplStack_d8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    auVar15._8_8_ = uVar11;
    auVar15._0_8_ = plVar9;
    return auVar15;
  }
  ___stack_chk_fail();
  if ((int)uVar11 != 0) {
    FUN_104bd46a0();
    if ((char)bStack_d9 < '\0') {
      __ZdlPv(puStack_f0);
    }
    func_0x0001004b6d90(aplStack_d8);
  }
  __Unwind_Resume();
  uVar1 = plVar9[1] & 0xff;
  lVar12 = (long)plVar9 + 9;
  if (*plVar9 != 0) {
    uVar1 = plVar9[1];
    lVar12 = plVar9[2];
  }
  auVar16._8_8_ = uVar1;
  auVar16._0_8_ = lVar12;
  return auVar16;
}



/* Entry: 104aa5050; end: 104aa508f;  */

void FUN_104aa5050(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_2;
  FUN_104aa5090();
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  lVar2 = lVar1;
  FUN_104aa50dc();
  *(int *)(param_1 + 5) = (int)uVar3;
  *param_1 = lVar2;
  param_1[1] = lVar1;
  return;
}



/* Entry: 104aa5090; end: 104aa50db;  */

undefined8 FUN_104aa5090(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
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
  return 0;
}



/* Entry: 104aa50dc; end: 104aa516b;  */

undefined8 FUN_104aa50dc(void)

{
  int iVar1;
  
  if ((bRam00000001130a5f68 & 1) == 0) {
    iVar1 = 0x130a5f68;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001130a5f28 = 0;
      puRam00000001130a5f30 = &SUB_100744a04;
      pcRam00000001130a5f38 = FUN_104aa51c4;
      pcRam00000001130a5f40 = FUN_104aa516c;
      uRam00000001130a5f48 = 0x104aa51e4;
      pcRam00000001130a5f50 = "grpclb_client_stats";
      uRam00000001130a5f58 = 0x13;
      uRam00000001130a5f60 = 0;
      ___cxa_guard_release(0x1130a5f68);
    }
  }
  return 0x1130a5f28;
}



/* Entry: 104aa516c; end: 104aa51c3;  */

void FUN_104aa516c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
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
  *(undefined8 *)(param_4 + 8) = 0;
  return;
}



/* Entry: 104aa51c4; end: 104aa5207;  */

void FUN_104aa51c4(undefined8 *param_1,uint *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_2 = *param_2 | 0x200000;
  *(undefined8 *)(param_2 + 0x22) = uVar1;
  return;
}



/* Entry: 104aa5208; end: 104aa52d3;  */

void FUN_104aa5208(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  code *param_5,code *param_6)

{
  undefined8 ***pppuVar1;
  long lVar2;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  (*param_5)();
  (*param_6)();
  if (param_4 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_4;
    _strlen(param_4);
  }
  func_0x000100741c30(&ppuStack_58,param_4,lVar2);
  pppuVar1 = (undefined8 ***)ppuStack_58;
  if (-1 < (char)bStack_41) {
    uStack_50 = (ulong)bStack_41;
    pppuVar1 = &ppuStack_58;
  }
  FUN_104adf434(param_1,param_2,param_3,pppuVar1,uStack_50);
  if ((char)bStack_41 < '\0') {
    __ZdlPv(ppuStack_58);
  }
  return;
}



/* Entry: 104aa52d4; end: 104aa52df;  */

char * FUN_104aa52d4(void)

{
  return "<internal-lb-stats>";
}



/* Entry: 104aa52e0; end: 104aa535f;  */

void FUN_104aa52e0(long *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = param_2;
  FUN_104aa5360(&uStack_40);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  FUN_104aa5414();
  *param_1 = lVar1;
  *(int *)(param_1 + 5) = (int)uVar3;
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  *puVar2 = uStack_40;
  puVar2[2] = uStack_30;
  puVar2[1] = uStack_38;
  puVar2[3] = uStack_28;
  param_1[1] = (long)puVar2;
  return;
}



/* Entry: 104aa5360; end: 104aa5413;  */

long * FUN_104aa5360(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = param_1[1];
  plStack_50 = (long *)*param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  uVar5 = param_1[4];
  FUN_104adf32c(&plStack_50,uVar5,param_1[5]);
  iVar4 = (int)uVar5;
  plVar3 = plStack_50;
  if ((long *)0x1 < plStack_50) {
    do {
      lVar6 = *plStack_50;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar2) {
        *plStack_50 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar3;
  }
  ___stack_chk_fail();
  if (iVar4 != 0) {
    FUN_104bd46a0(plVar3);
    func_0x0001004b6d90(&plStack_50);
  }
  __Unwind_Resume(plVar3);
  if ((bRam00000001130a5fb0 & 1) == 0) {
    iVar4 = 0x130a5fb0;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      uRam00000001130a5f70 = 1;
      pcRam00000001130a5f78 = FUN_104aa54a8;
      pcRam00000001130a5f80 = FUN_104aa54e8;
      pcRam00000001130a5f88 = FUN_104aa5604;
      pcRam00000001130a5f90 = FUN_104aa571c;
      pcRam00000001130a5f98 = "lb-cost-bin";
      uRam00000001130a5fa0 = 0xb;
      uRam00000001130a5fa8 = 0;
      ___cxa_guard_release(0x1130a5fb0);
    }
  }
  return (long *)0x1130a5f70;
}



/* Entry: 104aa5414; end: 104aa54a7;  */

undefined8 FUN_104aa5414(void)

{
  int iVar1;
  
  if ((bRam00000001130a5fb0 & 1) == 0) {
    iVar1 = 0x130a5fb0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001130a5f70 = 1;
      pcRam00000001130a5f78 = FUN_104aa54a8;
      pcRam00000001130a5f80 = FUN_104aa54e8;
      pcRam00000001130a5f88 = FUN_104aa5604;
      pcRam00000001130a5f90 = FUN_104aa571c;
      pcRam00000001130a5f98 = "lb-cost-bin";
      uRam00000001130a5fa0 = 0xb;
      uRam00000001130a5fa8 = 0;
      ___cxa_guard_release(0x1130a5fb0);
    }
  }
  return 0x1130a5f70;
}



/* Entry: 104aa54a8; end: 104aa54e7;  */

void FUN_104aa54a8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x1f) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 8));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 104aa54e8; end: 104aa550f;  */

void FUN_104aa54e8(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_104aa5510(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 104aa5510; end: 104aa5603;  */

void FUN_104aa5510(undefined8 param_1,long *param_2,uint *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  uint *puVar3;
  undefined8 uVar4;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar2 = (undefined8 *)*param_2;
  uVar4 = *puVar2;
  if (*(char *)((long)puVar2 + 0x1f) < '\0') {
    func_0x000100033dac(&uStack_58,puVar2[1],puVar2[2]);
  }
  else {
    uStack_50 = puVar2[2];
    uStack_58 = puVar2[1];
    lStack_48 = puVar2[3];
  }
  uStack_30 = uStack_50;
  uStack_38 = uStack_58;
  lStack_28 = lStack_48;
  uStack_58 = 0;
  uStack_50 = 0;
  lStack_48 = 0;
  uVar1 = *param_3;
  puVar3 = param_3 + 0x18;
  *param_3 = uVar1 | 0x400000;
  if ((uVar1 >> 0x16 & 1) == 0) {
    param_3[0x20] = 0;
    param_3[0x21] = 0;
    param_3[0x1a] = 0;
    param_3[0x1b] = 0;
    puVar3[0] = 0;
    puVar3[1] = 0;
    param_3[0x1e] = 0;
    param_3[0x1f] = 0;
    param_3[0x1c] = 0;
    param_3[0x1d] = 0;
  }
  uStack_40 = uVar4;
  FUN_104a7986c(puVar3,&uStack_40);
  if (lStack_28 < 0) {
    __ZdlPv(uStack_38);
  }
  if (lStack_48 < 0) {
    __ZdlPv(uStack_58);
  }
  return;
}



/* Entry: 104aa5604; end: 104aa571b;  */

void FUN_104aa5604(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 ***pppuVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 extraout_x8;
  undefined1 auStack_100 [8];
  undefined8 uStack_f8;
  char cStack_e1;
  undefined8 **ppuStack_e0;
  ulong uStack_d8;
  byte bStack_c9;
  undefined8 **ppuStack_c8;
  ulong uStack_c0;
  byte bStack_b1;
  long *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = 0x20;
  __Znwm();
  uStack_68 = param_1[1];
  plStack_70 = (long *)*param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_104adf32c(uVar4,&plStack_70,param_2,param_3);
  *(undefined8 *)(param_4 + 8) = uVar4;
  plVar5 = plStack_70;
  if ((long *)0x1 < plStack_70) {
    do {
      lVar6 = *plStack_70;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_70,0x10);
      if (bVar2) {
        *plStack_70 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 == 0) {
      (*(code *)plStack_70[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    while ((int)param_2 == 0) {
      __Unwind_Resume();
    }
    FUN_104bd46a0(plVar5);
    FUN_104aa5864(auStack_100,plVar5);
    FUN_104adf27c(&ppuStack_e0,auStack_100);
    pppuVar3 = (undefined8 ***)ppuStack_e0;
    if (-1 < (char)bStack_c9) {
      uStack_d8 = (ulong)bStack_c9;
      pppuVar3 = &ppuStack_e0;
    }
    func_0x000100741c30(&ppuStack_c8,pppuVar3,uStack_d8);
    pppuVar3 = (undefined8 ***)ppuStack_c8;
    if (-1 < (char)bStack_b1) {
      uStack_c0 = (ulong)bStack_b1;
      pppuVar3 = &ppuStack_c8;
    }
    FUN_104adf434(extraout_x8,"lb-cost-bin",0xb,pppuVar3,uStack_c0);
    if ((char)bStack_b1 < '\0') {
      __ZdlPv(ppuStack_c8);
    }
    if ((char)bStack_c9 < '\0') {
      __ZdlPv(ppuStack_e0);
    }
    if (cStack_e1 < '\0') {
      __ZdlPv(uStack_f8);
    }
    return;
  }
  return;
}



/* Entry: 104aa571c; end: 104aa573f;  */

void FUN_104aa571c(undefined8 param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  char cStack_71;
  undefined8 **ppuStack_70;
  ulong uStack_68;
  byte bStack_59;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  FUN_104aa5864(auStack_90,param_2);
  FUN_104adf27c(&ppuStack_70,auStack_90);
  pppuVar1 = (undefined8 ***)ppuStack_70;
  if (-1 < (char)bStack_59) {
    uStack_68 = (ulong)bStack_59;
    pppuVar1 = &ppuStack_70;
  }
  func_0x000100741c30(&ppuStack_58,pppuVar1,uStack_68);
  pppuVar1 = (undefined8 ***)ppuStack_58;
  if (-1 < (char)bStack_41) {
    uStack_50 = (ulong)bStack_41;
    pppuVar1 = &ppuStack_58;
  }
  FUN_104adf434(param_1,"lb-cost-bin",0xb,pppuVar1,uStack_50);
  if ((char)bStack_41 < '\0') {
    __ZdlPv(ppuStack_58);
  }
  if ((char)bStack_59 < '\0') {
    __ZdlPv(ppuStack_70);
  }
  if (cStack_71 < '\0') {
    __ZdlPv(uStack_88);
  }
  return;
}



/* Entry: 104aa5740; end: 104aa5863;  */

void FUN_104aa5740(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5,code *param_6)

{
  undefined8 ***pppuVar1;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  char cStack_71;
  undefined8 **ppuStack_70;
  ulong uStack_68;
  byte bStack_59;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  (*param_5)(auStack_90,param_4);
  (*param_6)(&ppuStack_70,auStack_90);
  pppuVar1 = (undefined8 ***)ppuStack_70;
  if (-1 < (char)bStack_59) {
    uStack_68 = (ulong)bStack_59;
    pppuVar1 = &ppuStack_70;
  }
  func_0x000100741c30(&ppuStack_58,pppuVar1,uStack_68);
  pppuVar1 = (undefined8 ***)ppuStack_58;
  if (-1 < (char)bStack_41) {
    uStack_50 = (ulong)bStack_41;
    pppuVar1 = &ppuStack_58;
  }
  FUN_104adf434(param_1,param_2,param_3,pppuVar1,uStack_50);
  if ((char)bStack_41 < '\0') {
    __ZdlPv(ppuStack_58);
  }
  if ((char)bStack_59 < '\0') {
    __ZdlPv(ppuStack_70);
  }
  if (cStack_71 < '\0') {
    __ZdlPv(uStack_88);
  }
  return;
}



/* Entry: 104aa5864; end: 104aa5897;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */

void FUN_104aa5864(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar3 = (undefined8 *)*param_2;
  *param_1 = *puVar3;
  if (-1 < *(char *)((long)puVar3 + 0x1f)) {
    uVar5 = puVar3[2];
    uVar4 = puVar3[1];
    param_1[3] = puVar3[3];
    param_1[2] = uVar5;
    param_1[1] = uVar4;
    return;
  }
  lVar2 = puVar3[1];
  uVar1 = puVar3[2];
  if (0x16 < uVar1) {
    if (uVar1 < 0x7ffffffffffffff7) {
      lVar2 = 0x19;
      if ((uVar1 | 7) != 0x17) {
        lVar2 = (uVar1 | 7) + 1;
      }
    }
    else {
      FUN_104bd47d4();
    }
    func_0x000107c60e20(lVar2);
    return;
  }
  *(char *)((long)param_1 + 0x1f) = (char)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_11034c660)(param_1 + 1,lVar2,uVar1 + 1);
  return;
}



/* Entry: 104aa5898; end: 104aa592f;  */

long FUN_104aa5898(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_2;
  func_0x00010074482c(&lStack_48);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  FUN_104aa5930();
  *param_1 = lVar2;
  *(int *)(param_1 + 5) = (int)uVar3;
  param_1[2] = lStack_40;
  param_1[1] = lStack_48;
  param_1[4] = lStack_30;
  param_1[3] = lStack_38;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return lVar2;
  }
  ___stack_chk_fail();
  func_0x0001004b6d90(&lStack_48);
  __Unwind_Resume(lVar2);
  if ((bRam00000001130a5ff8 & 1) == 0) {
    iVar1 = 0x130a5ff8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001130a5fb8 = 0;
      uRam00000001130a5fc0 = 0x104adf4cc;
      pcRam00000001130a5fc8 = FUN_104aa59c0;
      pcRam00000001130a5fd0 = FUN_104aa2538;
      uRam00000001130a5fd8 = 0x104aa59e8;
      pcRam00000001130a5fe0 = "lb-token";
      uRam00000001130a5fe8 = 8;
      uRam00000001130a5ff0 = 0;
      ___cxa_guard_release(0x1130a5ff8);
    }
  }
  return 0x1130a5fb8;
}



/* Entry: 104aa5930; end: 104aa59bf;  */

undefined8 FUN_104aa5930(void)

{
  int iVar1;
  
  if ((bRam00000001130a5ff8 & 1) == 0) {
    iVar1 = 0x130a5ff8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001130a5fb8 = 0;
      uRam00000001130a5fc0 = 0x104adf4cc;
      pcRam00000001130a5fc8 = FUN_104aa59c0;
      pcRam00000001130a5fd0 = FUN_104aa2538;
      uRam00000001130a5fd8 = 0x104aa59e8;
      pcRam00000001130a5fe0 = "lb-token";
      uRam00000001130a5fe8 = 8;
      uRam00000001130a5ff0 = 0;
      ___cxa_guard_release(0x1130a5ff8);
    }
  }
  return 0x1130a5fb8;
}



/* Entry: 104aa59c0; end: 104aa5a0b;  */

undefined1  [16] FUN_104aa59c0(undefined8 param_1,uint *param_2)

{
  ulong uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined1 **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long **pplVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 extraout_x8;
  uint *puVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 *puStack_f0;
  ulong uStack_e8;
  byte bStack_d9;
  long *aplStack_d8 [4];
  long lStack_b8;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  uVar2 = *param_2;
  puVar13 = param_2 + 0x10;
  *param_2 = uVar2 | 0x800000;
  if ((uVar2 >> 0x17 & 1) == 0) {
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    puVar13[0] = 0;
    puVar13[1] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
  }
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104adf4a4(&plStack_80,param_1);
  uVar7 = uStack_68;
  uVar6 = uStack_70;
  uVar11 = uStack_78;
  plVar9 = plStack_80;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  plStack_80 = (long *)0x0;
  plVar8 = *(long **)puVar13;
  uStack_58 = *(undefined8 *)(param_2 + 0x14);
  uStack_60 = *(undefined8 *)(param_2 + 0x12);
  uStack_50 = *(undefined8 *)(param_2 + 0x16);
  *(long **)puVar13 = plVar9;
  *(undefined8 *)(param_2 + 0x14) = uVar6;
  *(undefined8 *)(param_2 + 0x12) = uVar11;
  *(undefined8 *)(param_2 + 0x16) = uVar7;
  uStack_40 = uStack_60;
  uStack_38 = uStack_58;
  uStack_30 = uStack_50;
  if ((long *)0x1 < plVar8) {
    do {
      lVar12 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 + -1 == 0) {
      (*(code *)plVar8[1])();
    }
  }
  plVar9 = plStack_80;
  if ((long *)0x1 < plStack_80) {
    do {
      lVar12 = *plStack_80;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_80,0x10);
      if (bVar4) {
        *plStack_80 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 + -1 == 0) {
      (*(code *)plStack_80[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    auVar14._8_8_ = param_1;
    auVar14._0_8_ = plVar9;
    return auVar14;
  }
  ___stack_chk_fail();
  if ((int)param_1 != 0) {
    FUN_104bd46a0();
  }
  __Unwind_Resume();
  uVar11 = 5;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104adf4a4(aplStack_d8,plVar9);
  pplVar10 = aplStack_d8;
  FUN_104aa288c(pplVar10);
  func_0x000100741c30(&puStack_f0,pplVar10,uVar11);
  ppuVar5 = (undefined1 **)puStack_f0;
  if (-1 < (char)bStack_d9) {
    uStack_e8 = (ulong)bStack_d9;
    ppuVar5 = &puStack_f0;
  }
  uVar11 = 5;
  FUN_104adf434(extraout_x8,&DAT_10f760227,5,ppuVar5,uStack_e8);
  if ((char)bStack_d9 < '\0') {
    __ZdlPv(puStack_f0);
  }
  plVar9 = aplStack_d8[0];
  if ((long *)0x1 < aplStack_d8[0]) {
    do {
      lVar12 = *aplStack_d8[0];
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(aplStack_d8[0],0x10);
      if (bVar4) {
        *aplStack_d8[0] = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 + -1 == 0) {
      (*(code *)aplStack_d8[0][1])();
      plVar9 = aplStack_d8[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    auVar15._8_8_ = uVar11;
    auVar15._0_8_ = plVar9;
    return auVar15;
  }
  ___stack_chk_fail();
  if ((int)uVar11 != 0) {
    FUN_104bd46a0();
    if ((char)bStack_d9 < '\0') {
      __ZdlPv(puStack_f0);
    }
    func_0x0001004b6d90(aplStack_d8);
  }
  __Unwind_Resume();
  uVar1 = plVar9[1] & 0xff;
  lVar12 = (long)plVar9 + 9;
  if (*plVar9 != 0) {
    uVar1 = plVar9[1];
    lVar12 = plVar9[2];
  }
  auVar16._8_8_ = uVar1;
  auVar16._0_8_ = lVar12;
  return auVar16;
}



/* Entry: 104aa5a0c; end: 104aa5a47;  */

void FUN_104aa5a0c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    func_0x0001004b6d90(lVar1 + 0x20);
    func_0x0001004b6d90(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 104aa5a48; end: 104aa5b53;  */

undefined1  [16] FUN_104aa5a48(long *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  char **ppcVar5;
  ulong uVar6;
  long **pplVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  long lStack_138;
  ulong uStack_130;
  char *pcStack_108;
  undefined8 uStack_100;
  long lStack_d8;
  ulong uStack_d0;
  long lStack_a8;
  undefined1 **ppuStack_a0;
  code *pcStack_98;
  long lStack_78;
  undefined1 *puStack_60;
  code *pcStack_58;
  long *plStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_28;
  
  pplVar7 = &plStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1 = (long *)*param_1;
  if (*param_1 == 0) {
    lVar4 = (long)param_1 + 9;
    uVar6 = (ulong)*(byte *)(param_1 + 1);
  }
  else {
    uVar6 = param_1[1];
    lVar4 = param_1[2];
  }
  plVar10 = (long *)param_1[4];
  if ((long *)0x1 < plVar10) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = *plVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lStack_48 = param_1[5];
  plStack_50 = (long *)param_1[4];
  lStack_38 = param_1[7];
  lStack_40 = param_1[6];
  func_0x0001004bd340(param_2 + 0x1f0,lVar4,uVar6);
  plVar10 = plStack_50;
  if ((long *)0x1 < plStack_50) {
    do {
      lVar8 = *plStack_50;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar2) {
        *plStack_50 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    auVar14._8_8_ = lVar4;
    auVar14._0_8_ = plVar10;
    return auVar14;
  }
  ___stack_chk_fail();
  if ((int)lVar4 == 0) {
    __Unwind_Resume(plVar10);
  }
  FUN_104bd46a0();
  pcStack_58 = FUN_104aa5b54;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = (long *)0x40;
  puStack_60 = &stack0xfffffffffffffff0;
  __Znwm();
  puVar9 = *(undefined8 **)((long)pplVar7 + 8);
  plVar11 = (long *)*puVar9;
  if ((long *)0x1 < plVar11) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar11 = (long *)*puVar9;
  }
  lVar8 = puVar9[3];
  lVar13 = puVar9[2];
  lVar12 = puVar9[1];
  *plVar3 = (long)plVar11;
  plVar3[2] = lVar13;
  plVar3[1] = lVar12;
  plVar3[3] = lVar8;
  lVar8 = *plVar10;
  lVar13 = plVar10[3];
  lVar12 = plVar10[2];
  plVar3[5] = plVar10[1];
  plVar3[4] = lVar8;
  plVar3[7] = lVar13;
  plVar3[6] = lVar12;
  plVar10[1] = 0;
  *plVar10 = 0;
  plVar10[3] = 0;
  plVar10[2] = 0;
  *(long **)((long)pplVar7 + 8) = plVar3;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    auVar15._8_8_ = lVar4;
    auVar15._0_8_ = plVar3;
    return auVar15;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_104aa5bfc;
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = (long *)*plVar3;
  if (*plVar3 == 0) {
    lStack_d8 = (long)plVar3 + 9;
    uStack_d0 = (ulong)*(byte *)(plVar3 + 1);
  }
  else {
    uStack_d0 = plVar3[1];
    lStack_d8 = plVar3[2];
  }
  pcStack_108 = ": ";
  uStack_100 = 2;
  if (plVar3[4] == 0) {
    lStack_138 = (long)plVar3 + 0x29;
    uStack_130 = (ulong)*(byte *)(plVar3 + 5);
  }
  else {
    uStack_130 = plVar3[5];
    lStack_138 = plVar3[6];
  }
  plVar10 = &lStack_d8;
  ppcVar5 = &pcStack_108;
  ppuStack_a0 = &puStack_60;
  func_0x000100066c24(plVar10,ppcVar5,&lStack_138);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    auVar16._8_8_ = ppcVar5;
    auVar16._0_8_ = plVar10;
    return auVar16;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  plVar10 = (long *)*plVar10;
  if (*plVar10 != 0) {
    auVar17._8_8_ = plVar10[1];
    auVar17._0_8_ = plVar10[2];
    return auVar17;
  }
  auVar18[8] = (char)plVar10[1];
  auVar18._0_8_ = (long)plVar10 + 9;
  auVar18._9_7_ = 0;
  return auVar18;
}



/* Entry: 104aa5b54; end: 104aa5bfb;  */

undefined1  [16] FUN_104aa5b54(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  char **ppcVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  long lStack_e8;
  ulong uStack_e0;
  char *pcStack_b8;
  undefined8 uStack_b0;
  long lStack_88;
  ulong uStack_80;
  long lStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = (long *)0x40;
  __Znwm();
  puVar5 = *(undefined8 **)(param_4 + 8);
  plVar6 = (long *)*puVar5;
  if ((long *)0x1 < plVar6) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar6 = (long *)*puVar5;
  }
  lVar7 = puVar5[3];
  lVar9 = puVar5[2];
  lVar8 = puVar5[1];
  *plVar3 = (long)plVar6;
  plVar3[2] = lVar9;
  plVar3[1] = lVar8;
  plVar3[3] = lVar7;
  lVar7 = *param_1;
  lVar9 = param_1[3];
  lVar8 = param_1[2];
  plVar3[5] = param_1[1];
  plVar3[4] = lVar7;
  plVar3[7] = lVar9;
  plVar3[6] = lVar8;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(long **)(param_4 + 8) = plVar3;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    auVar10._8_8_ = param_2;
    auVar10._0_8_ = plVar3;
    return auVar10;
  }
  ___stack_chk_fail();
  pcStack_48 = FUN_104aa5bfc;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = (long *)*plVar3;
  if (*plVar3 == 0) {
    lStack_88 = (long)plVar3 + 9;
    uStack_80 = (ulong)*(byte *)(plVar3 + 1);
  }
  else {
    uStack_80 = plVar3[1];
    lStack_88 = plVar3[2];
  }
  pcStack_b8 = ": ";
  uStack_b0 = 2;
  if (plVar3[4] == 0) {
    lStack_e8 = (long)plVar3 + 0x29;
    uStack_e0 = (ulong)*(byte *)(plVar3 + 5);
  }
  else {
    uStack_e0 = plVar3[5];
    lStack_e8 = plVar3[6];
  }
  plVar3 = &lStack_88;
  ppcVar4 = &pcStack_b8;
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x000100066c24(plVar3,ppcVar4,&lStack_e8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    auVar11._8_8_ = ppcVar4;
    auVar11._0_8_ = plVar3;
    return auVar11;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  plVar3 = (long *)*plVar3;
  if (*plVar3 != 0) {
    auVar12._8_8_ = plVar3[1];
    auVar12._0_8_ = plVar3[2];
    return auVar12;
  }
  auVar13[8] = (char)plVar3[1];
  auVar13._0_8_ = (long)plVar3 + 9;
  auVar13._9_7_ = 0;
  return auVar13;
}



/* Entry: 104aa5bfc; end: 104aa5c9f;  */

undefined1  [16] FUN_104aa5bfc(long *param_1)

{
  char **ppcVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long lStack_a8;
  ulong uStack_a0;
  char *pcStack_78;
  undefined8 uStack_70;
  long lStack_48;
  ulong uStack_40;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1 = (long *)*param_1;
  if (*param_1 == 0) {
    lStack_48 = (long)param_1 + 9;
    uStack_40 = (ulong)*(byte *)(param_1 + 1);
  }
  else {
    uStack_40 = param_1[1];
    lStack_48 = param_1[2];
  }
  pcStack_78 = ": ";
  uStack_70 = 2;
  if (param_1[4] == 0) {
    lStack_a8 = (long)param_1 + 0x29;
    uStack_a0 = (ulong)*(byte *)(param_1 + 5);
  }
  else {
    uStack_a0 = param_1[5];
    lStack_a8 = param_1[6];
  }
  plVar2 = &lStack_48;
  ppcVar1 = &pcStack_78;
  func_0x000100066c24(plVar2,ppcVar1,&lStack_a8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    auVar3._8_8_ = ppcVar1;
    auVar3._0_8_ = plVar2;
    return auVar3;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  plVar2 = (long *)*plVar2;
  if (*plVar2 != 0) {
    auVar4._8_8_ = plVar2[1];
    auVar4._0_8_ = plVar2[2];
    return auVar4;
  }
  auVar5[8] = (char)plVar2[1];
  auVar5._0_8_ = (long)plVar2 + 9;
  auVar5._9_7_ = 0;
  return auVar5;
}



/* Entry: 104aa5ca0; end: 104aa5cbf;  */

undefined1  [16] FUN_104aa5ca0(long *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  param_1 = (long *)*param_1;
  if (*param_1 != 0) {
    auVar1._8_8_ = param_1[1];
    auVar1._0_8_ = param_1[2];
    return auVar1;
  }
  auVar2[8] = (char)param_1[1];
  auVar2._0_8_ = (long)param_1 + 9;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 104aa5cc0; end: 104aa5ce7;  */

void FUN_104aa5cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_2;
  uStack_18 = param_3;
  FUN_104aa5ce8(param_1,&uStack_20,param_4);
  return;
}



/* Entry: 104aa5ce8; end: 104aa5d17;  */

void FUN_104aa5ce8(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  char *pcVar1;
  char *apcStack_a0 [2];
  char cStack_89;
  char *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  char *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  char *pcStack_48;
  undefined8 uStack_40;
  long lStack_38;
  ulong uStack_30;
  long lStack_28;
  
  uStack_78 = *param_2;
  uStack_70 = param_2[1];
  uStack_58 = *param_1;
  uStack_50 = param_1[1];
  uStack_30 = param_3[1] & 0xff;
  lStack_38 = (long)param_3 + 9;
  if (*param_3 != 0) {
    uStack_30 = param_3[1];
    lStack_38 = param_3[2];
  }
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_88 = "error=";
  uStack_80 = 6;
  pcStack_68 = " key=";
  uStack_60 = 5;
  pcStack_48 = " value=";
  uStack_40 = 7;
  func_0x00010ae8c7e0(apcStack_a0,&pcStack_88,6);
  pcVar1 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
  ;
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                      ,0x4d3,2,"Error parsing metadata: %s");
  if (cStack_89 < '\0') {
    pcVar1 = apcStack_a0[0];
    __ZdlPv(apcStack_a0[0]);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    if (cStack_89 < '\0') {
      __ZdlPv(apcStack_a0[0]);
    }
    __Unwind_Resume(pcVar1);
    return;
  }
  return;
}



/* Entry: 104aa5d18; end: 104aa5e17;  */

void FUN_104aa5d18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  char *pcVar1;
  char *apcStack_a0 [2];
  char cStack_89;
  char *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  char *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  char *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_88 = "error=";
  uStack_80 = 6;
  pcStack_68 = " key=";
  uStack_60 = 5;
  pcStack_48 = " value=";
  uStack_40 = 7;
  uStack_78 = param_3;
  uStack_70 = param_4;
  uStack_58 = param_1;
  uStack_50 = param_2;
  uStack_38 = param_5;
  uStack_30 = param_6;
  func_0x00010ae8c7e0(apcStack_a0,&pcStack_88,6);
  pcVar1 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
  ;
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                      ,0x4d3,2,"Error parsing metadata: %s");
  if (cStack_89 < '\0') {
    pcVar1 = apcStack_a0[0];
    __ZdlPv(apcStack_a0[0]);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_89 < '\0') {
    __ZdlPv(apcStack_a0[0]);
  }
  __Unwind_Resume(pcVar1);
  return;
}



/* Entry: 104aa5e18; end: 104aa5e2f;  */

void FUN_104aa5e18(void)

{
  return;
}



/* Entry: 104aa5e30; end: 104aa5f33;  */

void FUN_104aa5e30(long *param_1,ulong param_2,ulong *param_3)

{
  ulong *puVar1;
  int iVar2;
  ulong *puVar4;
  uint uVar5;
  ulong *extraout_x8;
  ulong uVar6;
  ulong uVar7;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined4 uStack_38;
  char cStack_30;
  long lStack_28;
  long *plVar3;
  
  puVar4 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (ulong *)*param_1;
  uStack_60 = uStack_60 & 0xffffffffffffff00;
  cStack_30 = (char)param_3[6] != '\0';
  if ((bool)cStack_30) {
    uStack_60 = *param_3;
    uStack_50 = param_3[2];
    uStack_58 = param_3[1];
    uStack_40 = param_3[4];
    uStack_48 = param_3[3];
    uStack_38 = (undefined4)param_3[5];
    *param_3 = (ulong)&UNK_1107c4408;
  }
  param_2 = param_2 & 0xffffffff;
  FUN_104aa6004(puVar1,param_1,param_2,&uStack_60);
  if (cStack_30 != '\0') {
    puVar1 = &uStack_58;
    (**(code **)(uStack_60 + 8))();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((int)param_1 == 0) {
    __Unwind_Resume(puVar1);
  }
  FUN_104bd46a0();
  *(undefined4 *)(extraout_x8 + 5) = 0;
  uVar6 = *puVar1;
  *extraout_x8 = uVar6;
  uVar7 = puVar1[1];
  extraout_x8[2] = puVar1[2];
  extraout_x8[1] = uVar7;
  uVar7 = puVar1[3];
  extraout_x8[4] = puVar1[4];
  extraout_x8[3] = uVar7;
  if (*(code **)(uVar6 + 0x38) == (code *)0x0) {
    iVar2 = (int)*(undefined8 *)(uVar6 + 0x30);
  }
  else {
    plVar3 = param_1;
    (**(code **)(uVar6 + 0x38))(puVar1 + 1);
    iVar2 = (int)plVar3;
  }
  if (*param_1 == 0) {
    uVar5 = (uint)*(byte *)(param_1 + 1);
  }
  else {
    uVar5 = (uint)param_1[1];
  }
  *(uint *)(extraout_x8 + 5) = iVar2 + uVar5 + 0x20;
  (**(code **)(*puVar1 + 0x18))(param_1,param_2,puVar4,extraout_x8);
  return;
}



/* Entry: 104aa5f34; end: 104aa6003;  */

void FUN_104aa5f34(long *param_1,long *param_2,long *param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  uint uVar3;
  long lVar4;
  long lVar5;
  long *plVar2;
  
  *(undefined4 *)(param_1 + 5) = 0;
  lVar4 = *param_2;
  *param_1 = lVar4;
  lVar5 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = lVar5;
  lVar5 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = lVar5;
  if (*(code **)(lVar4 + 0x38) == (code *)0x0) {
    iVar1 = (int)*(undefined8 *)(lVar4 + 0x30);
  }
  else {
    plVar2 = param_3;
    (**(code **)(lVar4 + 0x38))(param_2 + 1);
    iVar1 = (int)plVar2;
  }
  if (*param_3 == 0) {
    uVar3 = (uint)*(byte *)(param_3 + 1);
  }
  else {
    uVar3 = (uint)param_3[1];
  }
  *(uint *)(param_1 + 5) = iVar1 + uVar3 + 0x20;
  (**(code **)(*param_2 + 0x18))(param_3,param_4,param_5,param_1);
  return;
}



/* Entry: 104aa6004; end: 104aa60eb;  */

void FUN_104aa6004(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((*(long *)(param_2 + 0x20) != 0) || (*(char *)(param_2 + 0x28) != '\0')) goto LAB_104aa607c;
  uStack_40 = param_3;
  uStack_38 = param_4;
  FUN_104aa60ec(&uStack_48,&uStack_40);
  uVar1 = *(ulong *)(param_2 + 0x20);
  if (uStack_48 == uVar1) {
LAB_104aa606c:
    if ((uVar1 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  else {
    *(ulong *)(param_2 + 0x20) = uStack_48;
    uStack_48 = 0x36;
    if ((uVar1 & 1) != 0) {
      func_0x00010084dad0();
      uVar1 = uStack_48;
      goto LAB_104aa606c;
    }
  }
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_2 + 0x10);
LAB_104aa607c:
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  if (*(char *)(param_5 + 6) != '\0') {
    *param_1 = *param_5;
    uVar2 = param_5[1];
    param_1[2] = param_5[2];
    param_1[1] = uVar2;
    uVar2 = param_5[3];
    param_1[4] = param_5[4];
    param_1[3] = uVar2;
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_5 + 5);
    *param_5 = &UNK_1107c4408;
    *(undefined1 *)(param_1 + 6) = 1;
  }
  return;
}



/* Entry: 104aa60ec; end: 104aa61df;  */

void FUN_104aa60ec(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_49;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 *puStack_38;
  
  lVar1 = *param_2;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_68 = 0;
  FUN_104ab5920(&uStack_48,2,"Invalid HPACK index received",0x1c,&uStack_49,&uStack_68);
  FUN_104abaa50(&uStack_40,&uStack_48,5,(int)param_2[1]);
  FUN_104abaa50(param_1,&uStack_40,6,*(undefined4 *)(*(long *)(lVar1 + 0x10) + 0x14));
  if ((uStack_40 & 1) != 0) {
    func_0x00010084dad0();
  }
  if ((uStack_48 & 1) != 0) {
    func_0x00010084dad0();
  }
  puStack_38 = &uStack_68;
  func_0x000100482b64(&puStack_38);
  return;
}



/* Entry: 104aa61e0; end: 104aa6207;  */

void FUN_104aa61e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_2;
  uStack_18 = param_3;
  FUN_104aa6208(param_1,&uStack_20,param_4);
  return;
}



/* Entry: 104aa6208; end: 104aa6273;  */

void FUN_104aa6208(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  long *plVar4;
  long lVar5;
  char *apcStack_a0 [2];
  char cStack_89;
  char *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  char *pcStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 *puStack_50;
  char *pcStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  lVar5 = *(long *)*param_1;
  if (*(code **)(lVar5 + 0x38) == (code *)0x0) {
    plVar4 = *(long **)(lVar5 + 0x28);
    param_2 = *(undefined8 **)(lVar5 + 0x30);
  }
  else {
    plVar4 = (long *)*param_1 + 1;
    (**(code **)(lVar5 + 0x38))();
  }
  lStack_38 = (long)param_3 + 9;
  if (*param_3 != 0) {
    lStack_38 = param_3[2];
  }
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_88 = "error=";
  uStack_80 = 6;
  pcStack_68 = " key=";
  uStack_60 = 5;
  pcStack_48 = " value=";
  uStack_40 = 7;
  uStack_78 = uVar1;
  uStack_70 = uVar2;
  plStack_58 = plVar4;
  puStack_50 = param_2;
  func_0x00010ae8c7e0(apcStack_a0,&pcStack_88,6);
  pcVar3 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
  ;
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                      ,0x4d3,2,"Error parsing metadata: %s");
  if (cStack_89 < '\0') {
    pcVar3 = apcStack_a0[0];
    __ZdlPv(apcStack_a0[0]);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    if (cStack_89 < '\0') {
      __ZdlPv(apcStack_a0[0]);
    }
    __Unwind_Resume(pcVar3);
    return;
  }
  return;
}



/* Entry: 104aa6274; end: 104aa6353;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_104aa6274(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong auStack_60 [4];
  undefined1 uStack_39;
  ulong *puStack_38;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    return param_2;
  }
  if (*(char *)(param_1 + 0x28) != '\0') {
    return param_2;
  }
  auStack_60[2] = 0;
  auStack_60[3] = 0;
  auStack_60[1] = 0;
  FUN_104ab5920(auStack_60,2,"More than two max table size changes in a single frame",0x36,
                &uStack_39,auStack_60 + 1);
  puStack_38 = auStack_60 + 1;
  func_0x000100482b64(&puStack_38);
  uVar1 = *(ulong *)(param_1 + 0x20);
  if (auStack_60[0] != uVar1) {
    *(ulong *)(param_1 + 0x20) = auStack_60[0];
    auStack_60[0] = 0x36;
    if ((uVar1 & 1) == 0) goto LAB_104aa6308;
    func_0x00010084dad0();
    uVar1 = auStack_60[0];
  }
  if ((uVar1 & 1) != 0) {
    func_0x00010084dad0();
  }
LAB_104aa6308:
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x10);
  return param_2;
}



/* Entry: 104aa6354; end: 104aa639b;  */

void FUN_104aa6354(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  int *piVar4;
  
  if ((*(long *)(param_1 + 0x20) == 0) && (*(char *)(param_1 + 0x28) == '\0')) {
    uVar3 = *param_2;
    if (uVar3 != 0) {
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
        uVar3 = *param_2;
      }
      *(ulong *)(param_1 + 0x20) = uVar3;
    }
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x10);
    return;
  }
  return;
}



/* Entry: 104aa639c; end: 104aa6437;  */

undefined8 FUN_104aa639c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uStack_30;
  undefined8 uStack_28;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    return param_3;
  }
  if (*(char *)(param_1 + 0x28) != '\0') {
    return param_3;
  }
  uStack_28 = param_2;
  FUN_104aa6438(&uStack_30,&uStack_28);
  uVar1 = *(ulong *)(param_1 + 0x20);
  if (uStack_30 != uVar1) {
    *(ulong *)(param_1 + 0x20) = uStack_30;
    uStack_30 = 0x36;
    if ((uVar1 & 1) == 0) goto LAB_104aa6404;
    func_0x00010084dad0();
    uVar1 = uStack_30;
  }
  if ((uVar1 & 1) != 0) {
    func_0x00010084dad0();
  }
LAB_104aa6404:
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x10);
  return param_3;
}



/* Entry: 104aa6438; end: 104aa654b;  */

undefined8 **** FUN_104aa6438(undefined8 param_1,uint *param_2)

{
  undefined8 ****ppppuVar1;
  undefined8 ****ppppuVar2;
  undefined8 ***pppuVar3;
  undefined8 ****ppppuVar4;
  ulong uVar5;
  undefined8 ****ppppuVar6;
  undefined8 **ppuStack_b8;
  undefined8 ***pppuStack_b0;
  ulong uStack_a8;
  undefined1 *puStack_a0;
  undefined8 ***pppuStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_61;
  undefined8 ***pppuStack_60;
  ulong uStack_58;
  byte bStack_49;
  undefined8 **ppuStack_48;
  undefined *puStack_40;
  ulong uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_48 = (undefined8 **)(ulong)*param_2;
  puStack_40 = &UNK_10ae73cc0;
  uStack_38 = (ulong)(byte)param_2[1];
  puStack_30 = &UNK_10ae73c30;
  func_0x0001004d4da0(&pppuStack_60,
                      "integer overflow in hpack integer decoding: have 0x%08x, got byte 0x%02x on byte 5"
                      ,0x52,&ppuStack_48,2);
  uVar5 = uStack_58;
  ppppuVar4 = (undefined8 ****)pppuStack_60;
  if (-1 < (char)bStack_49) {
    uVar5 = (ulong)bStack_49;
    ppppuVar4 = &pppuStack_60;
  }
  uStack_78 = 0;
  uStack_70 = 0;
  puStack_80 = (undefined8 *)0x0;
  ppppuVar6 = (undefined8 ****)&uStack_61;
  FUN_104ab5920(param_1,2,ppppuVar4,uVar5,ppppuVar6,&puStack_80);
  ppppuVar1 = (undefined8 ****)&ppuStack_48;
  ppuStack_48 = &puStack_80;
  func_0x000100482b64();
  if ((char)bStack_49 < '\0') {
    ppppuVar1 = (undefined8 ****)pppuStack_60;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return ppppuVar1;
  }
  ___stack_chk_fail();
  ppuStack_48 = &puStack_80;
  func_0x000100482b64(&ppuStack_48);
  if ((char)bStack_49 < '\0') {
    __ZdlPv(pppuStack_60);
  }
  ppppuVar2 = ppppuVar1;
  __Unwind_Resume();
  pcStack_88 = FUN_104aa654c;
  if (ppppuVar2[4] != (undefined8 ***)0x0) {
    return ppppuVar6;
  }
  if (*(char *)(ppppuVar2 + 5) != '\0') {
    return ppppuVar6;
  }
  pppuStack_b0 = ppppuVar4;
  uStack_a8 = uVar5;
  puStack_a0 = (undefined1 *)&puStack_80;
  pppuStack_98 = ppppuVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  FUN_104aa65e8(&ppuStack_b8,&pppuStack_b0);
  pppuVar3 = ppppuVar2[4];
  if ((undefined8 ***)ppuStack_b8 != pppuVar3) {
    ppppuVar2[4] = (undefined8 ***)ppuStack_b8;
    ppuStack_b8 = (undefined8 ***)0x36;
    if (((ulong)pppuVar3 & 1) == 0) goto LAB_104aa65b4;
    func_0x00010084dad0();
    pppuVar3 = (undefined8 ***)ppuStack_b8;
  }
  if (((ulong)pppuVar3 & 1) != 0) {
    func_0x00010084dad0();
  }
LAB_104aa65b4:
  ppppuVar2[1] = ppppuVar2[2];
  return ppppuVar6;
}



/* Entry: 104aa654c; end: 104aa65e7;  */

undefined8 FUN_104aa654c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    return param_4;
  }
  if (*(char *)(param_1 + 0x28) != '\0') {
    return param_4;
  }
  uStack_30 = param_2;
  uStack_28 = param_3;
  FUN_104aa65e8(&uStack_38,&uStack_30);
  uVar1 = *(ulong *)(param_1 + 0x20);
  if (uStack_38 != uVar1) {
    *(ulong *)(param_1 + 0x20) = uStack_38;
    uStack_38 = 0x36;
    if ((uVar1 & 1) == 0) goto LAB_104aa65b4;
    func_0x00010084dad0();
    uVar1 = uStack_38;
  }
  if ((uVar1 & 1) != 0) {
    func_0x00010084dad0();
  }
LAB_104aa65b4:
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x10);
  return param_4;
}



/* Entry: 104aa65e8; end: 104aa66db;  */

void FUN_104aa65e8(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_49;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 *puStack_38;
  
  lVar1 = *param_2;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_68 = 0;
  FUN_104ab5920(&uStack_48,2,"Invalid HPACK index received",0x1c,&uStack_49,&uStack_68);
  FUN_104abaa50(&uStack_40,&uStack_48,5,(int)param_2[1]);
  FUN_104abaa50(param_1,&uStack_40,6,*(undefined4 *)(*(long *)(lVar1 + 0x10) + 0x14));
  if ((uStack_40 & 1) != 0) {
    func_0x00010084dad0();
  }
  if ((uStack_48 & 1) != 0) {
    func_0x00010084dad0();
  }
  puStack_38 = &uStack_68;
  func_0x000100482b64(&puStack_38);
  return;
}



/* Entry: 104aa66dc; end: 104aa68c3;  */

ulong * FUN_104aa66dc(ulong *param_1,ulong *param_2,long param_3,long param_4,long param_5)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  ulong *puVar5;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  long lVar9;
  ulong *puVar10;
  
  puVar1 = param_2;
  if (0 < param_5) {
    puVar5 = (ulong *)param_1[1];
    if ((long)(param_1[2] - (long)puVar5) < param_5) {
      puVar10 = (ulong *)*param_1;
      puVar1 = (ulong *)((long)puVar5 + (param_5 - (long)puVar10));
      if ((long)puVar1 < 0) {
        FUN_104aa1644();
        puVar1 = param_1;
        if (param_4 != 0) {
          FUN_104aa693c();
          puVar5 = (ulong *)param_1[1];
          param_3 = param_3 - (long)param_2;
          if (param_3 != 0) {
            puVar1 = puVar5;
            _memmove(puVar5,param_2,param_3);
          }
          param_1[1] = (long)puVar5 + param_3;
        }
        return puVar1;
      }
      lVar9 = (long)param_2 - (long)puVar10;
      uVar2 = param_1[2] - (long)puVar10;
      puVar3 = (ulong *)(uVar2 * 2);
      if (puVar3 < puVar1 || (long)puVar3 - (long)puVar1 == 0) {
        puVar3 = puVar1;
      }
      if (0x3ffffffffffffffe < uVar2) {
        puVar3 = (ulong *)0x7fffffffffffffff;
      }
      if (puVar3 == (ulong *)0x0) {
        puVar8 = (ulong *)0x0;
      }
      else {
        puVar8 = puVar3;
        __Znwm();
      }
      puVar1 = (ulong *)((long)puVar8 + lVar9);
      _memcpy(puVar1,param_3,param_5);
      puVar7 = puVar1;
      if (puVar10 != param_2) {
        do {
          *(undefined1 *)((long)puVar8 + lVar9 + -1) = *(undefined1 *)((long)puVar10 + lVar9 + -1);
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        puVar5 = (ulong *)param_1[1];
        puVar7 = puVar8;
      }
      if (puVar5 != param_2) {
        _memmove((undefined1 *)((long)puVar1 + param_5),param_2,(long)puVar5 - (long)param_2);
      }
      uVar2 = *param_1;
      *param_1 = (ulong)puVar7;
      param_1[1] = (ulong)((undefined1 *)((long)puVar1 + param_5) + ((long)puVar5 - (long)param_2));
      param_1[2] = (ulong)((long)puVar8 + (long)puVar3);
      if (uVar2 != 0) {
        __ZdlPv();
      }
    }
    else {
      lVar9 = (long)puVar5 - (long)param_2;
      if (lVar9 < param_5) {
        lVar6 = param_3 + lVar9;
        param_4 = param_4 - lVar6;
        if (param_4 != 0) {
          _memmove(puVar5,lVar6,param_4);
        }
        param_1[1] = (ulong)((long)puVar5 + param_4);
        puVar10 = (ulong *)((long)puVar5 + param_4);
        if (lVar9 < 1) {
          return param_2;
        }
      }
      else {
        lVar6 = param_3 + param_5;
        puVar10 = puVar5;
      }
      puVar3 = puVar10;
      if ((ulong *)((long)puVar10 - param_5) < puVar5) {
        puVar4 = (undefined1 *)((long)puVar5 + (param_5 - (long)puVar10));
        puVar5 = (ulong *)((long)puVar10 - param_5);
        puVar8 = puVar10;
        do {
          puVar3 = (ulong *)((long)puVar8 + 1);
          *(char *)puVar8 = (char)*puVar5;
          puVar4 = puVar4 + -1;
          puVar5 = (ulong *)((long)puVar5 + 1);
          puVar8 = puVar3;
        } while (puVar4 != (undefined1 *)0x0);
      }
      param_1[1] = (ulong)puVar3;
      if (puVar10 != (ulong *)((long)param_2 + param_5)) {
        _memmove((ulong *)((long)param_2 + param_5),param_2);
      }
      if (lVar6 - param_3 != 0) {
        _memmove(param_2,param_3,lVar6 - param_3);
      }
    }
  }
  return puVar1;
}



/* Entry: 104aa68c4; end: 104aa693b;  */

void FUN_104aa68c4(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_104aa693c(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 104aa693c; end: 104aa697b;  */

uint * FUN_104aa693c(uint *param_1,uint *param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 **ppuVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  undefined8 *extraout_x8;
  undefined8 *puVar8;
  long lVar9;
  uint *puVar10;
  long lVar11;
  ulong uVar12;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 **ppuVar13;
  code *pcVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  if (-1 < (long)param_2) {
    puVar5 = param_2;
    __Znwm();
    *(uint **)param_1 = puVar5;
    *(uint **)(param_1 + 2) = puVar5;
    *(long *)(param_1 + 4) = (long)puVar5 + (long)param_2;
    return puVar5;
  }
  puVar5 = param_1;
  FUN_104aa1644();
  ppuVar4 = &puStack_30;
  ppuVar13 = &puStack_30;
  pcStack_28 = FUN_104aa697c;
  uVar7 = puVar5[1];
  uVar2 = puVar5[2];
  puStack_30 = &stack0xfffffffffffffff0;
  if (uVar7 < uVar2) {
    lVar9 = *(long *)(puVar5 + 4);
    if ((ulong)uVar2 <= (ulong)((*(long *)(puVar5 + 6) - lVar9 >> 4) * -0x5555555555555555)) {
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = (*puVar5 + uVar7) / uVar2;
      }
      puVar8 = (undefined8 *)(lVar9 + (ulong)((*puVar5 + uVar7) - uVar3 * uVar2) * 0x30);
      *puVar8 = *(undefined8 *)param_2;
      uVar16 = *(undefined8 *)(param_2 + 4);
      uVar15 = *(undefined8 *)(param_2 + 2);
      uVar17 = *(undefined8 *)(param_2 + 6);
      puVar8[4] = *(undefined8 *)(param_2 + 8);
      puVar8[3] = uVar17;
      puVar8[2] = uVar16;
      puVar8[1] = uVar15;
      *(uint *)(puVar8 + 5) = param_2[10];
      *(undefined **)param_2 = &UNK_1107c4408;
      puVar5[1] = puVar5[1] + 1;
      return puVar5;
    }
    puVar5[1] = uVar7 + 1;
    ppuVar4 = (undefined1 **)&stack0xffffffffffffffe0;
    pcVar14 = FUN_104aa697c;
    puVar5 = puVar5 + 4;
    ppuVar13 = (undefined1 **)&stack0xfffffffffffffff0;
  }
  else {
    pcVar14 = FUN_104aa6a24;
    func_0x00010bdab3a8();
  }
  *(undefined8 *)((long)ppuVar4 + -0x30) = unaff_x22;
  *(undefined8 *)((long)ppuVar4 + -0x28) = unaff_x21;
  *(undefined8 *)((long)ppuVar4 + -0x20) = unaff_x20;
  *(uint **)((long)ppuVar4 + -0x18) = param_1;
  *(undefined1 ***)((long)ppuVar4 + -0x10) = ppuVar13;
  *(code **)((long)ppuVar4 + -8) = pcVar14;
  puVar6 = puVar5 + 4;
  puVar8 = *(undefined8 **)(puVar5 + 2);
  if (puVar8 < *(undefined8 **)puVar6) {
    *puVar8 = *(undefined8 *)param_2;
    uVar16 = *(undefined8 *)(param_2 + 4);
    uVar15 = *(undefined8 *)(param_2 + 2);
    uVar17 = *(undefined8 *)(param_2 + 6);
    puVar8[4] = *(undefined8 *)(param_2 + 8);
    puVar8[3] = uVar17;
    puVar8[2] = uVar16;
    puVar8[1] = uVar15;
    *(uint *)(puVar8 + 5) = param_2[10];
    *(undefined **)param_2 = &UNK_1107c4408;
    puVar8 = puVar8 + 6;
    *(undefined8 **)(puVar5 + 2) = puVar8;
  }
  else {
    lVar9 = (long)puVar8 - *(long *)puVar5 >> 4;
    uVar1 = lVar9 * -0x5555555555555555 + 1;
    if (0x555555555555555 < uVar1) {
      FUN_104aa72d8();
      uVar7 = (uint)param_2;
      FUN_104aa7458((undefined1 *)((long)ppuVar4 + -0x58));
      __Unwind_Resume();
      *(undefined1 **)((long)ppuVar4 + -0x70) = (undefined1 *)((long)ppuVar4 + -0x10);
      *(code **)((long)ppuVar4 + -0x68) = FUN_104aa6b78;
      if (puVar5[1] != 0) {
        uVar7 = *puVar5;
        uVar2 = puVar5[2];
        uVar3 = 0;
        if (uVar2 != 0) {
          uVar3 = uVar7 / uVar2;
        }
        *puVar5 = uVar7 + 1;
        puVar5[1] = puVar5[1] - 1;
        puVar8 = (undefined8 *)(*(long *)(puVar5 + 4) + (ulong)(uVar7 - uVar3 * uVar2) * 0x30);
        *extraout_x8 = *puVar8;
        uVar15 = puVar8[1];
        extraout_x8[2] = puVar8[2];
        extraout_x8[1] = uVar15;
        uVar15 = puVar8[3];
        extraout_x8[4] = puVar8[4];
        extraout_x8[3] = uVar15;
        *(undefined4 *)(extraout_x8 + 5) = *(undefined4 *)(puVar8 + 5);
        *puVar8 = &UNK_1107c4408;
        return puVar5;
      }
      func_0x00010bdab3e0();
      if (uVar7 < puVar5[1]) {
        uVar7 = puVar5[1] + ~uVar7 + *puVar5;
        uVar2 = puVar5[2];
        uVar3 = 0;
        if (uVar2 != 0) {
          uVar3 = uVar7 / uVar2;
        }
        return (uint *)(*(long *)(puVar5 + 4) + (ulong)(uVar7 - uVar3 * uVar2) * 0x30);
      }
      return (uint *)0x0;
    }
    lVar11 = (long)*(undefined8 **)puVar6 - *(long *)puVar5 >> 4;
    uVar12 = lVar11 * 0x5555555555555556;
    if (uVar12 < uVar1 || uVar12 - uVar1 == 0) {
      uVar12 = uVar1;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar11 * -0x5555555555555555)) {
      uVar12 = 0x555555555555555;
    }
    *(uint **)((long)ppuVar4 + -0x38) = puVar6;
    FUN_104aa72ec();
    puVar10 = puVar6 + lVar9 * 4;
    *(uint **)((long)ppuVar4 + -0x58) = puVar6;
    *(uint **)((long)ppuVar4 + -0x50) = puVar10;
    *(uint **)((long)ppuVar4 + -0x40) = puVar6 + uVar12 * 0xc;
    *(undefined8 *)puVar10 = *(undefined8 *)param_2;
    uVar16 = *(undefined8 *)(param_2 + 4);
    uVar15 = *(undefined8 *)(param_2 + 2);
    uVar17 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(puVar10 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(puVar10 + 6) = uVar17;
    *(undefined8 *)(puVar10 + 4) = uVar16;
    *(undefined8 *)(puVar10 + 2) = uVar15;
    puVar10[10] = param_2[10];
    *(undefined **)param_2 = &UNK_1107c4408;
    *(uint **)((long)ppuVar4 + -0x48) = puVar10 + 0xc;
    FUN_104aa7264(puVar5,(undefined1 *)((long)ppuVar4 + -0x58));
    puVar8 = *(undefined8 **)(puVar5 + 2);
    puVar6 = (uint *)((long)ppuVar4 + -0x58);
    FUN_104aa7458(puVar6);
  }
  *(undefined8 **)(puVar5 + 2) = puVar8;
  return puVar6;
}



/* Entry: 104aa697c; end: 104aa6a23;  */

uint * FUN_104aa697c(uint *param_1,undefined8 *param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint *puVar5;
  uint uVar6;
  undefined8 *extraout_x8;
  undefined8 *puVar7;
  long lVar8;
  uint *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined1 *puVar12;
  code *unaff_x30;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar4 = &stack0xfffffffffffffff0;
  puVar12 = &stack0xfffffffffffffff0;
  uVar6 = param_1[1];
  uVar2 = param_1[2];
  if (uVar6 < uVar2) {
    lVar8 = *(long *)(param_1 + 4);
    if ((ulong)uVar2 <= (ulong)((*(long *)(param_1 + 6) - lVar8 >> 4) * -0x5555555555555555)) {
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = (*param_1 + uVar6) / uVar2;
      }
      puVar7 = (undefined8 *)(lVar8 + (ulong)((*param_1 + uVar6) - uVar3 * uVar2) * 0x30);
      *puVar7 = *param_2;
      uVar14 = param_2[2];
      uVar13 = param_2[1];
      uVar15 = param_2[3];
      puVar7[4] = param_2[4];
      puVar7[3] = uVar15;
      puVar7[2] = uVar14;
      puVar7[1] = uVar13;
      *(undefined4 *)(puVar7 + 5) = *(undefined4 *)(param_2 + 5);
      *param_2 = &UNK_1107c4408;
      param_1[1] = param_1[1] + 1;
      return param_1;
    }
    param_1[1] = uVar6 + 1;
    puVar4 = (undefined1 *)register0x00000008;
    param_1 = param_1 + 4;
    puVar12 = unaff_x29;
  }
  else {
    unaff_x30 = FUN_104aa6a24;
    func_0x00010bdab3a8();
  }
  *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar4 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar4 + -0x20) = unaff_x20;
  *(undefined8 *)(puVar4 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar4 + -0x10) = puVar12;
  *(code **)(puVar4 + -8) = unaff_x30;
  puVar5 = param_1 + 4;
  puVar7 = *(undefined8 **)(param_1 + 2);
  if (puVar7 < *(undefined8 **)puVar5) {
    *puVar7 = *param_2;
    uVar14 = param_2[2];
    uVar13 = param_2[1];
    uVar15 = param_2[3];
    puVar7[4] = param_2[4];
    puVar7[3] = uVar15;
    puVar7[2] = uVar14;
    puVar7[1] = uVar13;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)(param_2 + 5);
    *param_2 = &UNK_1107c4408;
    puVar7 = puVar7 + 6;
    *(undefined8 **)(param_1 + 2) = puVar7;
  }
  else {
    lVar8 = (long)puVar7 - *(long *)param_1 >> 4;
    uVar1 = lVar8 * -0x5555555555555555 + 1;
    if (0x555555555555555 < uVar1) {
      FUN_104aa72d8();
      uVar6 = (uint)param_2;
      FUN_104aa7458(puVar4 + -0x58);
      __Unwind_Resume();
      *(undefined1 **)(puVar4 + -0x70) = puVar4 + -0x10;
      *(code **)(puVar4 + -0x68) = FUN_104aa6b78;
      if (param_1[1] != 0) {
        uVar6 = *param_1;
        uVar2 = param_1[2];
        uVar3 = 0;
        if (uVar2 != 0) {
          uVar3 = uVar6 / uVar2;
        }
        *param_1 = uVar6 + 1;
        param_1[1] = param_1[1] - 1;
        puVar7 = (undefined8 *)(*(long *)(param_1 + 4) + (ulong)(uVar6 - uVar3 * uVar2) * 0x30);
        *extraout_x8 = *puVar7;
        uVar13 = puVar7[1];
        extraout_x8[2] = puVar7[2];
        extraout_x8[1] = uVar13;
        uVar13 = puVar7[3];
        extraout_x8[4] = puVar7[4];
        extraout_x8[3] = uVar13;
        *(undefined4 *)(extraout_x8 + 5) = *(undefined4 *)(puVar7 + 5);
        *puVar7 = &UNK_1107c4408;
        return param_1;
      }
      func_0x00010bdab3e0();
      if (uVar6 < param_1[1]) {
        uVar6 = param_1[1] + ~uVar6 + *param_1;
        uVar2 = param_1[2];
        uVar3 = 0;
        if (uVar2 != 0) {
          uVar3 = uVar6 / uVar2;
        }
        return (uint *)(*(long *)(param_1 + 4) + (ulong)(uVar6 - uVar3 * uVar2) * 0x30);
      }
      return (uint *)0x0;
    }
    lVar10 = (long)*(undefined8 **)puVar5 - *(long *)param_1 >> 4;
    uVar11 = lVar10 * 0x5555555555555556;
    if (uVar11 < uVar1 || uVar11 - uVar1 == 0) {
      uVar11 = uVar1;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar10 * -0x5555555555555555)) {
      uVar11 = 0x555555555555555;
    }
    *(uint **)(puVar4 + -0x38) = puVar5;
    FUN_104aa72ec();
    puVar9 = puVar5 + lVar8 * 4;
    *(uint **)(puVar4 + -0x58) = puVar5;
    *(uint **)(puVar4 + -0x50) = puVar9;
    *(uint **)(puVar4 + -0x40) = puVar5 + uVar11 * 0xc;
    *(undefined8 *)puVar9 = *param_2;
    uVar14 = param_2[2];
    uVar13 = param_2[1];
    uVar15 = param_2[3];
    *(undefined8 *)(puVar9 + 8) = param_2[4];
    *(undefined8 *)(puVar9 + 6) = uVar15;
    *(undefined8 *)(puVar9 + 4) = uVar14;
    *(undefined8 *)(puVar9 + 2) = uVar13;
    puVar9[10] = *(uint *)(param_2 + 5);
    *param_2 = &UNK_1107c4408;
    *(uint **)(puVar4 + -0x48) = puVar9 + 0xc;
    FUN_104aa7264(param_1,puVar4 + -0x58);
    puVar7 = *(undefined8 **)(param_1 + 2);
    puVar5 = (uint *)(puVar4 + -0x58);
    FUN_104aa7458(puVar5);
  }
  *(undefined8 **)(param_1 + 2) = puVar7;
  return puVar5;
}



/* Entry: 104aa6a24; end: 104aa6b77;  */

uint ***** FUN_104aa6a24(uint *****param_1,undefined8 *param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint *****pppppuVar4;
  uint uVar5;
  undefined8 *extraout_x8;
  uint ****ppppuVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  uint ***pppuVar10;
  uint ***pppuVar11;
  uint ****ppppuVar12;
  uint ***pppuVar13;
  uint ****ppppuVar14;
  uint ****ppppuStack_58;
  uint ****ppppuStack_50;
  uint ****ppppuStack_48;
  uint ****ppppuStack_40;
  uint ****ppppuStack_38;
  
  pppppuVar4 = param_1 + 2;
  ppppuVar6 = param_1[1];
  if (ppppuVar6 < *pppppuVar4) {
    *ppppuVar6 = (uint ***)*param_2;
    pppuVar11 = (uint ***)param_2[2];
    pppuVar10 = (uint ***)param_2[1];
    pppuVar13 = (uint ***)param_2[3];
    ppppuVar6[4] = (uint ***)param_2[4];
    ppppuVar6[3] = pppuVar13;
    ppppuVar6[2] = pppuVar11;
    ppppuVar6[1] = pppuVar10;
    *(undefined4 *)(ppppuVar6 + 5) = *(undefined4 *)(param_2 + 5);
    *param_2 = &UNK_1107c4408;
    ppppuVar6 = ppppuVar6 + 6;
    param_1[1] = ppppuVar6;
  }
  else {
    lVar7 = (long)ppppuVar6 - (long)*param_1 >> 4;
    uVar1 = lVar7 * -0x5555555555555555 + 1;
    if (0x555555555555555 < uVar1) {
      FUN_104aa72d8();
      uVar5 = (uint)param_2;
      FUN_104aa7458(&ppppuStack_58);
      __Unwind_Resume();
      if (*(uint *)((long)param_1 + 4) != 0) {
        uVar5 = *(uint *)param_1;
        uVar2 = *(uint *)(param_1 + 1);
        uVar3 = 0;
        if (uVar2 != 0) {
          uVar3 = uVar5 / uVar2;
        }
        *(uint *)param_1 = uVar5 + 1;
        *(uint *)((long)param_1 + 4) = *(uint *)((long)param_1 + 4) - 1;
        ppppuVar6 = param_1[2] + (ulong)(uVar5 - uVar3 * uVar2) * 6;
        *extraout_x8 = *ppppuVar6;
        pppuVar10 = ppppuVar6[1];
        extraout_x8[2] = ppppuVar6[2];
        extraout_x8[1] = pppuVar10;
        pppuVar10 = ppppuVar6[3];
        extraout_x8[4] = ppppuVar6[4];
        extraout_x8[3] = pppuVar10;
        *(undefined4 *)(extraout_x8 + 5) = *(undefined4 *)(ppppuVar6 + 5);
        *ppppuVar6 = (uint ***)&UNK_1107c4408;
        return param_1;
      }
      func_0x00010bdab3e0();
      if (uVar5 < *(uint *)((long)param_1 + 4)) {
        uVar5 = *(uint *)((long)param_1 + 4) + ~uVar5 + *(uint *)param_1;
        uVar2 = *(uint *)(param_1 + 1);
        uVar3 = 0;
        if (uVar2 != 0) {
          uVar3 = uVar5 / uVar2;
        }
        return (uint *****)(param_1[2] + (ulong)(uVar5 - uVar3 * uVar2) * 6);
      }
      return (uint *****)0x0;
    }
    lVar8 = (long)*pppppuVar4 - (long)*param_1 >> 4;
    uVar9 = lVar8 * 0x5555555555555556;
    if (uVar9 < uVar1 || uVar9 - uVar1 == 0) {
      uVar9 = uVar1;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar9 = 0x555555555555555;
    }
    ppppuStack_38 = (uint ****)pppppuVar4;
    FUN_104aa72ec();
    ppppuStack_50 = (uint ****)(pppppuVar4 + lVar7 * 2);
    ppppuStack_40 = (uint ****)(pppppuVar4 + uVar9 * 6);
    *ppppuStack_50 = (uint ***)*param_2;
    ppppuVar12 = (uint ****)param_2[2];
    ppppuVar6 = (uint ****)param_2[1];
    ppppuVar14 = (uint ****)param_2[3];
    ppppuStack_50[4] = (uint ***)param_2[4];
    ppppuStack_50[3] = (uint ***)ppppuVar14;
    ppppuStack_50[2] = (uint ***)ppppuVar12;
    ppppuStack_50[1] = (uint ***)ppppuVar6;
    *(uint *)(ppppuStack_50 + 5) = *(uint *)(param_2 + 5);
    *param_2 = &UNK_1107c4408;
    ppppuStack_48 = ppppuStack_50 + 6;
    ppppuStack_58 = (uint ****)pppppuVar4;
    FUN_104aa7264(param_1,&ppppuStack_58);
    ppppuVar6 = param_1[1];
    pppppuVar4 = &ppppuStack_58;
    FUN_104aa7458(pppppuVar4);
  }
  param_1[1] = ppppuVar6;
  return pppppuVar4;
}



/* Entry: 104aa6b78; end: 104aa6be7;  */

uint * FUN_104aa6b78(undefined8 *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (param_2[1] != 0) {
    uVar1 = *param_2;
    uVar2 = param_2[2];
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar1 / uVar2;
    }
    *param_2 = uVar1 + 1;
    param_2[1] = param_2[1] - 1;
    puVar4 = (undefined8 *)(*(long *)(param_2 + 4) + (ulong)(uVar1 - uVar3 * uVar2) * 0x30);
    *param_1 = *puVar4;
    uVar5 = puVar4[1];
    param_1[2] = puVar4[2];
    param_1[1] = uVar5;
    uVar5 = puVar4[3];
    param_1[4] = puVar4[4];
    param_1[3] = uVar5;
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(puVar4 + 5);
    *puVar4 = &UNK_1107c4408;
    return param_2;
  }
  func_0x00010bdab3e0();
  if (param_3 < param_2[1]) {
    uVar1 = param_2[1] + ~param_3 + *param_2;
    uVar2 = param_2[2];
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar1 / uVar2;
    }
    return (uint *)(*(long *)(param_2 + 4) + (ulong)(uVar1 - uVar3 * uVar2) * 0x30);
  }
  return (uint *)0x0;
}



/* Entry: 104aa6be8; end: 104aa6c27;  */

long FUN_104aa6be8(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 < (uint)param_1[1]) {
    uVar1 = param_1[1] + ~param_2 + *param_1;
    uVar2 = param_1[2];
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar1 / uVar2;
    }
    return *(long *)(param_1 + 4) + (ulong)(uVar1 - uVar3 * uVar2) * 0x30;
  }
  return 0;
}



/* Entry: 104aa6c28; end: 104aa6d17;  */

void FUN_104aa6c28(uint *param_1,uint param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 *puStack_38;
  
  if (param_1[2] != param_2) {
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    FUN_104aa6d18(&uStack_50,param_1[1]);
    if (param_1[1] != 0) {
      uVar4 = 0;
      do {
        uVar2 = (*(long *)(param_1 + 6) - *(long *)(param_1 + 4) >> 4) * -0x5555555555555555;
        uVar1 = 0;
        if (uVar2 != 0) {
          uVar1 = (uVar4 + *param_1) / uVar2;
        }
        FUN_104aa6a24(&uStack_50,
                      *(long *)(param_1 + 4) + ((uVar4 + *param_1) - uVar1 * uVar2) * 0x30);
        uVar4 = uVar4 + 1;
      } while (uVar4 < param_1[1]);
    }
    *param_1 = 0;
    uVar6 = *(undefined8 *)(param_1 + 6);
    uVar5 = *(undefined8 *)(param_1 + 4);
    *(undefined8 *)(param_1 + 6) = uStack_48;
    *(undefined8 *)(param_1 + 4) = uStack_50;
    uVar3 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = uStack_40;
    uStack_50 = uVar5;
    uStack_48 = uVar6;
    uStack_40 = uVar3;
    puStack_38 = (undefined1 *)&uStack_50;
    FUN_104aa74d0(&puStack_38);
  }
  return;
}



/* Entry: 104aa6d18; end: 104aa6dc7;  */

long *** FUN_104aa6d18(long ***param_1,ulong param_2)

{
  long ***ppplVar1;
  long **pplVar2;
  long **pplVar3;
  long **pplStack_78;
  long **pplStack_48;
  long lStack_40;
  long lStack_38;
  long **pplStack_30;
  long **pplStack_28;
  
  ppplVar1 = param_1 + 2;
  pplVar2 = *param_1;
  if ((ulong)(((long)*ppplVar1 - (long)pplVar2 >> 4) * -0x5555555555555555) < param_2) {
    if (0x555555555555555 < param_2) {
      FUN_104aa72d8();
      FUN_104aa7458(&pplStack_48);
      __Unwind_Resume();
      pplStack_78 = (long **)(param_1 + 4);
      FUN_104aa74d0(&pplStack_78);
      return param_1;
    }
    pplVar3 = param_1[1];
    pplStack_28 = (long **)ppplVar1;
    FUN_104aa72ec();
    lStack_40 = (long)ppplVar1 + ((long)pplVar3 - (long)pplVar2);
    pplStack_30 = (long **)(ppplVar1 + param_2 * 6);
    pplStack_48 = (long **)ppplVar1;
    lStack_38 = lStack_40;
    FUN_104aa7264(param_1,&pplStack_48);
    ppplVar1 = &pplStack_48;
    FUN_104aa7458(ppplVar1);
  }
  return ppplVar1;
}



/* Entry: 104aa6dc8; end: 104aa6dff;  */

long FUN_104aa6dc8(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x20;
  FUN_104aa74d0(&lStack_28);
  return param_1;
}



/* Entry: 104aa6e00; end: 104aa6ef3;  */

void FUN_104aa6e00(uint *param_1,uint *****param_2)

{
  code *pcVar1;
  uint *****pppppuVar2;
  uint *****pppppuVar3;
  uint uVar4;
  uint *****pppppuVar5;
  undefined8 in_x7;
  uint uVar6;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  uint ****ppppuVar7;
  uint ****ppppuVar8;
  uint uVar9;
  uint *****unaff_x20;
  uint *****pppppuVar10;
  undefined1 ***pppuStack_1c0;
  code *pcStack_1b8;
  uint ***pppuStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 uStack_191;
  uint ****ppppuStack_190;
  ulong uStack_188;
  byte bStack_179;
  uint ***pppuStack_178;
  uint ***pppuStack_170;
  uint ***pppuStack_168;
  uint ***pppuStack_160;
  uint ***pppuStack_158;
  uint uStack_150;
  uint ****ppppuStack_148;
  undefined *puStack_140;
  ulong uStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  uint ***pppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d1;
  uint ****ppppuStack_d0;
  ulong uStack_c8;
  byte bStack_b9;
  uint ****ppppuStack_b8;
  undefined *puStack_b0;
  ulong uStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined1 *puStack_70;
  code *pcStack_68;
  char *pcStack_60;
  long lStack_58;
  uint ***apppuStack_50 [4];
  uint uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_104aa6b78(&lStack_58,param_1 + 4);
  if (*param_1 < uStack_30) {
    pcStack_60 = "first_entry.transport_size() <= mem_used_";
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/hpack_parser_table.cc"
                        ,0x58,2,"assertion failed: %s");
    _abort();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104aa6eb0);
    (*pcVar1)();
  }
  *param_1 = *param_1 - uStack_30;
  pppppuVar2 = (uint *****)apppuStack_50;
  (**(code **)(lStack_58 + 8))();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((int)param_2 == 0) {
    __Unwind_Resume(pppppuVar2);
  }
  FUN_104bd46a0();
  pcStack_68 = FUN_104aa6ef4;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = (uint)param_2;
  pppppuVar5 = param_2;
  puStack_70 = &stack0xfffffffffffffff0;
  if (*(uint *)(pppppuVar2 + 1) != uVar4) {
    if (*(uint *)((long)pppppuVar2 + 4) < uVar4) {
      ppppuStack_b8 = (uint ****)((ulong)param_2 & 0xffffffff);
      puStack_b0 = &UNK_10ae73cc0;
      puStack_a0 = &UNK_10ae73cc0;
      uStack_a8 = (ulong)*(uint *)((long)pppppuVar2 + 4);
      func_0x0001004d4da0(&ppppuStack_d0,"Attempt to make hpack table %d bytes when max is %d bytes"
                          ,0x39,&ppppuStack_b8,2);
      pppppuVar5 = (uint *****)ppppuStack_d0;
      if (-1 < (char)bStack_b9) {
        uStack_c8 = (ulong)bStack_b9;
        pppppuVar5 = &ppppuStack_d0;
      }
      uStack_e8 = 0;
      uStack_e0 = 0;
      pppuStack_f0 = (uint ***)0x0;
      FUN_104ab5920(extraout_x8,2,pppppuVar5,uStack_c8,&uStack_d1,&pppuStack_f0);
      pppppuVar2 = &ppppuStack_b8;
      ppppuStack_b8 = &pppuStack_f0;
      func_0x000100482b64();
      unaff_x20 = (uint *****)&pppuStack_f0;
      if ((char)bStack_b9 < '\0') {
        pppppuVar2 = (uint *****)ppppuStack_d0;
        __ZdlPv();
        unaff_x20 = (uint *****)&pppuStack_f0;
      }
      goto LAB_104aa7004;
    }
    while (uVar4 < *(uint *)pppppuVar2) {
      FUN_104aa6e00(pppppuVar2);
    }
    *(uint *)(pppppuVar2 + 1) = uVar4;
    uVar4 = uVar4 + 0x1f >> 5;
    if (uVar4 < 0x81) {
      uVar4 = 0x80;
    }
    pppppuVar5 = (uint *****)(ulong)uVar4;
    pppppuVar2 = pppppuVar2 + 2;
    FUN_104aa6c28();
    unaff_x20 = param_2;
  }
  *extraout_x8 = 0;
LAB_104aa7004:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  ppppuStack_b8 = (uint ****)unaff_x20;
  func_0x000100482b64(&ppppuStack_b8);
  if ((char)bStack_b9 < '\0') {
    __ZdlPv(ppppuStack_d0);
  }
  __Unwind_Resume();
  pcStack_f8 = FUN_104aa7064;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *(uint *)(pppppuVar2 + 1);
  ppuStack_100 = &puStack_70;
  if (*(uint *)((long)pppppuVar2 + 4) < uVar4) {
    puStack_140 = &UNK_10ae73cc0;
    puStack_130 = &UNK_10ae73cc0;
    ppppuStack_148 = (uint ****)(ulong)*(uint *)((long)pppppuVar2 + 4);
    uStack_138 = (ulong)uVar4;
    func_0x0001004d4da0(&ppppuStack_190,
                        "HPACK max table size reduced to %d but not reflected by hpack stream (still at %d)"
                        ,0x52,&ppppuStack_148,2);
    pppppuVar5 = (uint *****)ppppuStack_190;
    if (-1 < (char)bStack_179) {
      uStack_188 = (ulong)bStack_179;
      pppppuVar5 = &ppppuStack_190;
    }
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    pppuStack_1b0 = (uint ***)0x0;
    FUN_104ab5920(extraout_x8_00,2,pppppuVar5,uStack_188,&uStack_191,&pppuStack_1b0);
    pppppuVar3 = &ppppuStack_148;
    ppppuStack_148 = &pppuStack_1b0;
    func_0x000100482b64();
    pppppuVar10 = (uint *****)&pppuStack_1b0;
    if ((char)bStack_179 < '\0') {
      pppppuVar3 = (uint *****)ppppuStack_190;
      __ZdlPv();
      pppppuVar10 = (uint *****)&pppuStack_1b0;
    }
  }
  else {
    uVar6 = *(uint *)(pppppuVar5 + 5);
    pppppuVar3 = pppppuVar2;
    if (uVar4 < uVar6) {
      while (pppppuVar10 = pppppuVar2, *(uint *)((long)pppppuVar2 + 0x14) != 0) {
        pppppuVar3 = pppppuVar2;
        FUN_104aa6e00();
      }
    }
    else {
      uVar9 = *(uint *)pppppuVar2;
      if ((ulong)uVar4 - (ulong)uVar9 < (ulong)uVar6) {
        do {
          FUN_104aa6e00(pppppuVar2);
          uVar6 = *(uint *)(pppppuVar5 + 5);
          uVar9 = *(uint *)pppppuVar2;
        } while ((ulong)*(uint *)(pppppuVar2 + 1) - (ulong)uVar9 < (ulong)uVar6);
      }
      pppppuVar10 = pppppuVar2 + 2;
      *(uint *)pppppuVar2 = uVar9 + uVar6;
      pppuStack_178 = (uint ***)*pppppuVar5;
      pppppuVar3 = (uint *****)&pppuStack_170;
      pppuStack_168 = (uint ***)pppppuVar5[2];
      pppuStack_170 = (uint ***)pppppuVar5[1];
      pppuStack_158 = (uint ***)pppppuVar5[4];
      pppuStack_160 = (uint ***)pppppuVar5[3];
      *pppppuVar5 = (uint ****)&UNK_1107c4408;
      pppppuVar5 = (uint *****)&pppuStack_178;
      uStack_150 = uVar6;
      FUN_104aa697c(pppppuVar10);
      (*(code *)pppuStack_178[1])();
    }
    *extraout_x8_00 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_128) {
    ___stack_chk_fail();
    if ((int)pppppuVar5 != 0) {
      FUN_104bd46a0();
      ppppuStack_148 = (uint ****)pppppuVar10;
      func_0x000100482b64(&ppppuStack_148);
      if ((char)bStack_179 < '\0') {
        __ZdlPv(ppppuStack_190);
      }
    }
    pppppuVar2 = pppppuVar3;
    __Unwind_Resume();
    pcStack_1b8 = FUN_104aa7258;
    pppuStack_1c0 = &ppuStack_100;
    _abort();
    ppppuVar8 = pppppuVar2[1];
    func_0x000104aa7330(pppppuVar2 + 2,ppppuVar8,ppppuVar8,*pppppuVar2,*pppppuVar2,pppppuVar5[1],
                        pppppuVar5[1],in_x7,pppppuVar10,pppppuVar3,&pppuStack_1c0,FUN_104aa7264);
    pppppuVar5[1] = ppppuVar8;
    ppppuVar7 = *pppppuVar2;
    *pppppuVar2 = ppppuVar8;
    pppppuVar5[1] = ppppuVar7;
    ppppuVar8 = pppppuVar2[1];
    pppppuVar2[1] = pppppuVar5[2];
    pppppuVar5[2] = ppppuVar8;
    ppppuVar8 = pppppuVar2[2];
    pppppuVar2[2] = pppppuVar5[3];
    pppppuVar5[3] = ppppuVar8;
    *pppppuVar5 = pppppuVar5[1];
    return;
  }
  return;
}



/* Entry: 104aa6ef4; end: 104aa7063;  */

void FUN_104aa6ef4(undefined8 *param_1,uint *****param_2,uint *****param_3)

{
  uint *****pppppuVar1;
  uint *****pppppuVar2;
  uint uVar3;
  uint *****pppppuVar4;
  undefined8 in_x7;
  uint uVar5;
  undefined8 *extraout_x8;
  uint ****ppppuVar6;
  uint ****ppppuVar7;
  uint uVar8;
  uint *****unaff_x20;
  uint *****pppppuVar9;
  undefined1 **ppuStack_160;
  code *pcStack_158;
  uint ***pppuStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 uStack_131;
  uint ****ppppuStack_130;
  ulong uStack_128;
  byte bStack_119;
  uint ***pppuStack_118;
  uint ***pppuStack_110;
  uint ***pppuStack_108;
  uint ***pppuStack_100;
  uint ***pppuStack_f8;
  uint uStack_f0;
  uint ****ppppuStack_e8;
  undefined *puStack_e0;
  ulong uStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  uint ***pppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_71;
  uint ****ppppuStack_70;
  ulong uStack_68;
  byte bStack_59;
  uint ****ppppuStack_58;
  undefined *puStack_50;
  ulong uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = (uint)param_3;
  pppppuVar4 = param_3;
  if (*(uint *)(param_2 + 1) != uVar3) {
    if (*(uint *)((long)param_2 + 4) < uVar3) {
      ppppuStack_58 = (uint ****)((ulong)param_3 & 0xffffffff);
      puStack_50 = &UNK_10ae73cc0;
      puStack_40 = &UNK_10ae73cc0;
      uStack_48 = (ulong)*(uint *)((long)param_2 + 4);
      func_0x0001004d4da0(&ppppuStack_70,"Attempt to make hpack table %d bytes when max is %d bytes"
                          ,0x39,&ppppuStack_58,2);
      pppppuVar4 = (uint *****)ppppuStack_70;
      if (-1 < (char)bStack_59) {
        uStack_68 = (ulong)bStack_59;
        pppppuVar4 = &ppppuStack_70;
      }
      uStack_88 = 0;
      uStack_80 = 0;
      pppuStack_90 = (uint ***)0x0;
      FUN_104ab5920(param_1,2,pppppuVar4,uStack_68,&uStack_71,&pppuStack_90);
      param_2 = &ppppuStack_58;
      ppppuStack_58 = &pppuStack_90;
      func_0x000100482b64();
      unaff_x20 = (uint *****)&pppuStack_90;
      if ((char)bStack_59 < '\0') {
        param_2 = (uint *****)ppppuStack_70;
        __ZdlPv();
        unaff_x20 = (uint *****)&pppuStack_90;
      }
      goto LAB_104aa7004;
    }
    while (uVar3 < *(uint *)param_2) {
      FUN_104aa6e00(param_2);
    }
    *(uint *)(param_2 + 1) = uVar3;
    uVar3 = uVar3 + 0x1f >> 5;
    if (uVar3 < 0x81) {
      uVar3 = 0x80;
    }
    pppppuVar4 = (uint *****)(ulong)uVar3;
    param_2 = param_2 + 2;
    FUN_104aa6c28();
    unaff_x20 = param_3;
  }
  *param_1 = 0;
LAB_104aa7004:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  ppppuStack_58 = (uint ****)unaff_x20;
  func_0x000100482b64(&ppppuStack_58);
  if ((char)bStack_59 < '\0') {
    __ZdlPv(ppppuStack_70);
  }
  __Unwind_Resume();
  pcStack_98 = FUN_104aa7064;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(uint *)(param_2 + 1);
  puStack_a0 = &stack0xfffffffffffffff0;
  if (*(uint *)((long)param_2 + 4) < uVar3) {
    puStack_e0 = &UNK_10ae73cc0;
    puStack_d0 = &UNK_10ae73cc0;
    ppppuStack_e8 = (uint ****)(ulong)*(uint *)((long)param_2 + 4);
    uStack_d8 = (ulong)uVar3;
    func_0x0001004d4da0(&ppppuStack_130,
                        "HPACK max table size reduced to %d but not reflected by hpack stream (still at %d)"
                        ,0x52,&ppppuStack_e8,2);
    pppppuVar4 = (uint *****)ppppuStack_130;
    if (-1 < (char)bStack_119) {
      uStack_128 = (ulong)bStack_119;
      pppppuVar4 = &ppppuStack_130;
    }
    uStack_148 = 0;
    uStack_140 = 0;
    pppuStack_150 = (uint ***)0x0;
    FUN_104ab5920(extraout_x8,2,pppppuVar4,uStack_128,&uStack_131,&pppuStack_150);
    pppppuVar1 = &ppppuStack_e8;
    ppppuStack_e8 = &pppuStack_150;
    func_0x000100482b64();
    pppppuVar9 = (uint *****)&pppuStack_150;
    if ((char)bStack_119 < '\0') {
      pppppuVar1 = (uint *****)ppppuStack_130;
      __ZdlPv();
      pppppuVar9 = (uint *****)&pppuStack_150;
    }
  }
  else {
    uVar5 = *(uint *)(pppppuVar4 + 5);
    pppppuVar1 = param_2;
    if (uVar3 < uVar5) {
      while (pppppuVar9 = param_2, *(uint *)((long)param_2 + 0x14) != 0) {
        pppppuVar1 = param_2;
        FUN_104aa6e00();
      }
    }
    else {
      uVar8 = *(uint *)param_2;
      if ((ulong)uVar3 - (ulong)uVar8 < (ulong)uVar5) {
        do {
          FUN_104aa6e00(param_2);
          uVar5 = *(uint *)(pppppuVar4 + 5);
          uVar8 = *(uint *)param_2;
        } while ((ulong)*(uint *)(param_2 + 1) - (ulong)uVar8 < (ulong)uVar5);
      }
      pppppuVar9 = param_2 + 2;
      *(uint *)param_2 = uVar8 + uVar5;
      pppuStack_118 = (uint ***)*pppppuVar4;
      pppppuVar1 = (uint *****)&pppuStack_110;
      pppuStack_108 = (uint ***)pppppuVar4[2];
      pppuStack_110 = (uint ***)pppppuVar4[1];
      pppuStack_f8 = (uint ***)pppppuVar4[4];
      pppuStack_100 = (uint ***)pppppuVar4[3];
      *pppppuVar4 = (uint ****)&UNK_1107c4408;
      pppppuVar4 = (uint *****)&pppuStack_118;
      uStack_f0 = uVar5;
      FUN_104aa697c(pppppuVar9);
      (*(code *)pppuStack_118[1])();
    }
    *extraout_x8 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
    ___stack_chk_fail();
    if ((int)pppppuVar4 != 0) {
      FUN_104bd46a0();
      ppppuStack_e8 = (uint ****)pppppuVar9;
      func_0x000100482b64(&ppppuStack_e8);
      if ((char)bStack_119 < '\0') {
        __ZdlPv(ppppuStack_130);
      }
    }
    pppppuVar2 = pppppuVar1;
    __Unwind_Resume();
    pcStack_158 = FUN_104aa7258;
    ppuStack_160 = &puStack_a0;
    _abort();
    ppppuVar7 = pppppuVar2[1];
    func_0x000104aa7330(pppppuVar2 + 2,ppppuVar7,ppppuVar7,*pppppuVar2,*pppppuVar2,pppppuVar4[1],
                        pppppuVar4[1],in_x7,pppppuVar9,pppppuVar1,&ppuStack_160,FUN_104aa7264);
    pppppuVar4[1] = ppppuVar7;
    ppppuVar6 = *pppppuVar2;
    *pppppuVar2 = ppppuVar7;
    pppppuVar4[1] = ppppuVar6;
    ppppuVar7 = pppppuVar2[1];
    pppppuVar2[1] = pppppuVar4[2];
    pppppuVar4[2] = ppppuVar7;
    ppppuVar7 = pppppuVar2[2];
    pppppuVar2[2] = pppppuVar4[3];
    pppppuVar4[3] = ppppuVar7;
    *pppppuVar4 = pppppuVar4[1];
    return;
  }
  return;
}



/* Entry: 104aa7064; end: 104aa7257;  */

void FUN_104aa7064(undefined8 *param_1,uint *****param_2,uint *****param_3)

{
  uint uVar1;
  uint *****pppppuVar2;
  uint *****pppppuVar3;
  undefined8 in_x7;
  uint uVar4;
  uint ****ppppuVar5;
  uint ****ppppuVar6;
  uint uVar7;
  uint *****pppppuVar8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  uint ***pppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a1;
  uint ****ppppuStack_a0;
  ulong uStack_98;
  byte bStack_89;
  uint ***pppuStack_88;
  uint ***pppuStack_80;
  uint ***pppuStack_78;
  uint ***pppuStack_70;
  uint ***pppuStack_68;
  uint uStack_60;
  uint ****ppppuStack_58;
  undefined *puStack_50;
  ulong uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(uint *)(param_2 + 1);
  if (*(uint *)((long)param_2 + 4) < uVar1) {
    puStack_50 = &UNK_10ae73cc0;
    puStack_40 = &UNK_10ae73cc0;
    ppppuStack_58 = (uint ****)(ulong)*(uint *)((long)param_2 + 4);
    uStack_48 = (ulong)uVar1;
    func_0x0001004d4da0(&ppppuStack_a0,
                        "HPACK max table size reduced to %d but not reflected by hpack stream (still at %d)"
                        ,0x52,&ppppuStack_58,2);
    param_3 = (uint *****)ppppuStack_a0;
    if (-1 < (char)bStack_89) {
      uStack_98 = (ulong)bStack_89;
      param_3 = &ppppuStack_a0;
    }
    uStack_b8 = 0;
    uStack_b0 = 0;
    pppuStack_c0 = (uint ***)0x0;
    FUN_104ab5920(param_1,2,param_3,uStack_98,&uStack_a1,&pppuStack_c0);
    pppppuVar2 = &ppppuStack_58;
    ppppuStack_58 = &pppuStack_c0;
    func_0x000100482b64();
    pppppuVar8 = (uint *****)&pppuStack_c0;
    if ((char)bStack_89 < '\0') {
      pppppuVar2 = (uint *****)ppppuStack_a0;
      __ZdlPv();
      pppppuVar8 = (uint *****)&pppuStack_c0;
    }
  }
  else {
    uVar4 = *(uint *)(param_3 + 5);
    pppppuVar2 = param_2;
    if (uVar1 < uVar4) {
      while (pppppuVar8 = param_2, *(uint *)((long)param_2 + 0x14) != 0) {
        pppppuVar2 = param_2;
        FUN_104aa6e00();
      }
    }
    else {
      uVar7 = *(uint *)param_2;
      if ((ulong)uVar1 - (ulong)uVar7 < (ulong)uVar4) {
        do {
          FUN_104aa6e00(param_2);
          uVar4 = *(uint *)(param_3 + 5);
          uVar7 = *(uint *)param_2;
        } while ((ulong)*(uint *)(param_2 + 1) - (ulong)uVar7 < (ulong)uVar4);
      }
      pppppuVar8 = param_2 + 2;
      *(uint *)param_2 = uVar7 + uVar4;
      pppuStack_88 = (uint ***)*param_3;
      pppppuVar2 = (uint *****)&pppuStack_80;
      pppuStack_78 = (uint ***)param_3[2];
      pppuStack_80 = (uint ***)param_3[1];
      pppuStack_68 = (uint ***)param_3[4];
      pppuStack_70 = (uint ***)param_3[3];
      *param_3 = (uint ****)&UNK_1107c4408;
      param_3 = (uint *****)&pppuStack_88;
      uStack_60 = uVar4;
      FUN_104aa697c(pppppuVar8);
      (*(code *)pppuStack_88[1])();
    }
    *param_1 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    if ((int)param_3 != 0) {
      FUN_104bd46a0();
      ppppuStack_58 = (uint ****)pppppuVar8;
      func_0x000100482b64(&ppppuStack_58);
      if ((char)bStack_89 < '\0') {
        __ZdlPv(ppppuStack_a0);
      }
    }
    pppppuVar3 = pppppuVar2;
    __Unwind_Resume();
    pcStack_c8 = FUN_104aa7258;
    puStack_d0 = &stack0xfffffffffffffff0;
    _abort();
    ppppuVar6 = pppppuVar3[1];
    func_0x000104aa7330(pppppuVar3 + 2,ppppuVar6,ppppuVar6,*pppppuVar3,*pppppuVar3,param_3[1],
                        param_3[1],in_x7,pppppuVar8,pppppuVar2,&puStack_d0,FUN_104aa7264);
    param_3[1] = ppppuVar6;
    ppppuVar5 = *pppppuVar3;
    *pppppuVar3 = ppppuVar6;
    param_3[1] = ppppuVar5;
    ppppuVar6 = pppppuVar3[1];
    pppppuVar3[1] = param_3[2];
    param_3[2] = ppppuVar6;
    ppppuVar6 = pppppuVar3[2];
    pppppuVar3[2] = param_3[3];
    param_3[3] = ppppuVar6;
    *param_3 = param_3[1];
    return;
  }
  return;
}



/* Entry: 104aa7258; end: 104aa7263;  */

void FUN_104aa7258(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _abort();
  uVar2 = param_1[1];
  func_0x000104aa7330(param_1 + 2,uVar2,uVar2,*param_1,*param_1,param_2[1],param_2[1]);
  param_2[1] = uVar2;
  uVar1 = *param_1;
  *param_1 = uVar2;
  param_2[1] = uVar1;
  uVar2 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = uVar2;
  uVar2 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = uVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 104aa7264; end: 104aa72d7;  */

void FUN_104aa7264(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1[1];
  func_0x000104aa7330(param_1 + 2,uVar2,uVar2,*param_1,*param_1,param_2[1],param_2[1]);
  param_2[1] = uVar2;
  uVar1 = *param_1;
  *param_1 = uVar2;
  param_2[1] = uVar1;
  uVar2 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = uVar2;
  uVar2 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = uVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 104aa72d8; end: 104aa72eb;  */

undefined1  [16]
FUN_104aa72d8(undefined8 param_1,ulong param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 param_6,undefined8 *param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_104a6fa70();
  if (param_2 < 0x555555555555556) {
    lVar2 = param_2 * 0x30;
    __Znwm(lVar2);
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = lVar2;
    return auVar8;
  }
  FUN_104a7757c();
  puStack_88 = &uStack_70;
  puStack_80 = &uStack_60;
  puStack_58 = param_7;
  puVar4 = param_7;
  while (param_3 != param_5) {
    puVar3 = param_3 + -6;
    puStack_58[-6] = *puVar3;
    uVar6 = param_3[-4];
    uVar5 = param_3[-5];
    uVar7 = param_3[-3];
    puStack_58[-2] = param_3[-2];
    puStack_58[-3] = uVar7;
    puStack_58[-4] = uVar6;
    puStack_58[-5] = uVar5;
    *(undefined4 *)(puStack_58 + -1) = *(undefined4 *)(param_3 + -1);
    *puVar3 = &UNK_1107c4408;
    puVar4 = puVar4 + -6;
    param_3 = puVar3;
    puStack_58 = puStack_58 + -6;
  }
  uStack_78 = 1;
  puStack_90 = puVar1;
  uStack_70 = param_6;
  puStack_68 = param_7;
  uStack_60 = param_6;
  FUN_104aa73dc(&puStack_90);
  auVar9._8_8_ = puVar4;
  auVar9._0_8_ = param_6;
  return auVar9;
}


