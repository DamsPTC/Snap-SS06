/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10aa8208c; end: 10aa82113;  */

void FUN_10aa8208c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    FUN_10ac99f74(param_1,*(undefined8 *)(param_2 + 0x30 + lVar1));
    lVar1 = lVar1 + 0x10;
  } while (lVar1 != 0x40);
  return;
}



/* Entry: 10aa82114; end: 10aa821cf;  */

void FUN_10aa82114(long param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar1 = *(long *)(param_1 + 0x30) + 0x58;
  }
  (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110c3eb10,lVar1);
  lVar1 = 0;
  if (*(long *)(param_1 + 0x40) != 0) {
    lVar1 = *(long *)(param_1 + 0x40) + 0x58;
  }
  (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110c3eb30,lVar1);
  lVar1 = 0;
  if (*(long *)(param_1 + 0x50) != 0) {
    lVar1 = *(long *)(param_1 + 0x50) + 0x58;
  }
  (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110c3eb50,lVar1);
  lVar1 = 0;
  if (*(long *)(param_1 + 0x60) != 0) {
    lVar1 = *(long *)(param_1 + 0x60) + 0x58;
  }
                    /* WARNING: Could not recover jumptable at 0x00010aa821cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110c3eb70,lVar1);
  return;
}



/* Entry: 10aa821d0; end: 10aa821d7;  */

void FUN_10aa821d0(long param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar1 = *(long *)(param_1 + 0x28) + 0x58;
  }
  (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110c3eb10,lVar1);
  lVar1 = 0;
  if (*(long *)(param_1 + 0x38) != 0) {
    lVar1 = *(long *)(param_1 + 0x38) + 0x58;
  }
  (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110c3eb30,lVar1);
  lVar1 = 0;
  if (*(long *)(param_1 + 0x48) != 0) {
    lVar1 = *(long *)(param_1 + 0x48) + 0x58;
  }
  (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110c3eb50,lVar1);
  lVar1 = 0;
  if (*(long *)(param_1 + 0x58) != 0) {
    lVar1 = *(long *)(param_1 + 0x58) + 0x58;
  }
                    /* WARNING: Could not recover jumptable at 0x00010aa821cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110c3eb70,lVar1);
  return;
}



/* Entry: 10aa821d8; end: 10aa82307;  */

void FUN_10aa821d8(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_48 [8];
  long *plStack_40;
  undefined1 uStack_31;
  
  lVar6 = 0x30;
  do {
    func_0x00010a493ed0(auStack_48,&uStack_31);
    FUN_10a468bcc(param_1 + lVar6,auStack_48);
    plVar4 = plStack_40;
    if (plStack_40 != (long *)0x0) {
      plVar1 = plStack_40 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    lVar6 = lVar6 + 0x10;
  } while (lVar6 != 0x70);
  lVar6 = 0;
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar6 = *(long *)(param_1 + 0x30) + 0x58;
  }
  (**(code **)(*param_2 + 0x1f0))(param_2,&PTR_DAT_110c3eb10,lVar6);
  lVar6 = 0;
  if (*(long *)(param_1 + 0x40) != 0) {
    lVar6 = *(long *)(param_1 + 0x40) + 0x58;
  }
  (**(code **)(*param_2 + 0x1f0))(param_2,&PTR_DAT_110c3eb30,lVar6);
  lVar6 = 0;
  if (*(long *)(param_1 + 0x50) != 0) {
    lVar6 = *(long *)(param_1 + 0x50) + 0x58;
  }
  (**(code **)(*param_2 + 0x1f0))(param_2,&PTR_DAT_110c3eb50,lVar6);
  lVar6 = 0;
  if (*(long *)(param_1 + 0x60) != 0) {
    lVar6 = *(long *)(param_1 + 0x60) + 0x58;
  }
  (**(code **)(*param_2 + 0x1f0))(param_2,&PTR_DAT_110c3eb70,lVar6);
  return;
}



/* Entry: 10aa82308; end: 10aa8230f;  */

void FUN_10aa82308(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_48 [8];
  long *plStack_40;
  undefined1 uStack_31;
  
  lVar6 = 0x30;
  do {
    func_0x00010a493ed0(auStack_48,&uStack_31);
    FUN_10a468bcc(param_1 + -8 + lVar6,auStack_48);
    plVar4 = plStack_40;
    if (plStack_40 != (long *)0x0) {
      plVar1 = plStack_40 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    lVar6 = lVar6 + 0x10;
  } while (lVar6 != 0x70);
  lVar6 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar6 = *(long *)(param_1 + 0x28) + 0x58;
  }
  (**(code **)(*param_2 + 0x1f0))(param_2,&PTR_DAT_110c3eb10,lVar6);
  lVar6 = 0;
  if (*(long *)(param_1 + 0x38) != 0) {
    lVar6 = *(long *)(param_1 + 0x38) + 0x58;
  }
  (**(code **)(*param_2 + 0x1f0))(param_2,&PTR_DAT_110c3eb30,lVar6);
  lVar6 = 0;
  if (*(long *)(param_1 + 0x48) != 0) {
    lVar6 = *(long *)(param_1 + 0x48) + 0x58;
  }
  (**(code **)(*param_2 + 0x1f0))(param_2,&PTR_DAT_110c3eb50,lVar6);
  lVar6 = 0;
  if (*(long *)(param_1 + 0x58) != 0) {
    lVar6 = *(long *)(param_1 + 0x58) + 0x58;
  }
  (**(code **)(*param_2 + 0x1f0))(param_2,&PTR_DAT_110c3eb70,lVar6);
  return;
}



/* Entry: 10aa82310; end: 10aa8246f;  */

void FUN_10aa82310(undefined8 param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined1 *puStack_b0;
  ulong uStack_a8;
  byte bStack_99;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined8 auStack_58 [3];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  lVar1 = *param_2;
  if (param_2[1] - lVar1 != 0xf0) {
    puStack_98 = &UNK_10f68d2f3;
    uStack_90 = 0x1a;
    func_0x0001098998d4(auStack_88,&puStack_98);
    FUN_109feb280(auStack_70,&UNK_10f68cf8a,auStack_88);
    FUN_10a012db0(auStack_58,auStack_70,&UNK_10f68cfac);
    __ZNSt3__19to_stringEi(&puStack_b0,3);
    if (-1 < (char)bStack_99) {
      uStack_a8 = (ulong)bStack_99;
      puStack_b0 = (undefined1 *)&puStack_b0;
    }
    puVar3 = auStack_58;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar3,puStack_b0,uStack_a8);
    uStack_38 = puVar3[1];
    uStack_40 = *puVar3;
    uStack_30 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    FUN_10a0029c0(&uStack_40);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aa823f4);
    (*pcVar2)();
  }
  uStack_40 = *(undefined8 *)(lVar1 + 0x18);
  uStack_38 = CONCAT44(*(undefined4 *)(lVar1 + 0xbc),*(undefined4 *)(lVar1 + 0x6c));
  FUN_10aa82470(param_1,&uStack_40);
  return;
}



/* Entry: 10aa82470; end: 10aa824fb;  */

void FUN_10aa82470(long param_1,float *param_2)

{
  long lVar1;
  code *pcVar2;
  float *pfVar3;
  float *pfVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 uVar7;
  
  pfVar4 = *(float **)(param_1 + 8);
  pfVar3 = *(float **)(param_1 + 0x10);
  lVar1 = (long)pfVar3 - (long)pfVar4;
  if (lVar1 != 0) {
    uVar5 = lVar1 >> 4;
    do {
      uVar6 = uVar5 >> 1;
      pfVar3 = pfVar4 + uVar6 * 4 + 4;
      uVar5 = uVar5 + (uVar5 >> 1 ^ 0xffffffffffffffff);
      if (*param_2 <= pfVar4[uVar6 * 4]) {
        pfVar3 = pfVar4;
        uVar5 = uVar6;
      }
      pfVar4 = pfVar3;
    } while (uVar5 != 0);
  }
  FUN_10aaa5c84((long *)(param_1 + 8),pfVar3);
  if (*(undefined4 **)(param_1 + 8) == *(undefined4 **)(param_1 + 0x10)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aa824fc);
    (*pcVar2)();
  }
  *(undefined4 *)(param_1 + 0x20) = (*(undefined4 **)(param_1 + 0x10))[-4];
  uVar7 = **(undefined4 **)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = uVar7;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return;
}



/* Entry: 10aa824fc; end: 10aa82503;  */

void FUN_10aa824fc(long param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined1 *puStack_b0;
  ulong uStack_a8;
  byte bStack_99;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined8 auStack_58 [3];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  lVar1 = *param_2;
  if (param_2[1] - lVar1 != 0xf0) {
    puStack_98 = &UNK_10f68d2f3;
    uStack_90 = 0x1a;
    func_0x0001098998d4(auStack_88,&puStack_98);
    FUN_109feb280(auStack_70,&UNK_10f68cf8a,auStack_88);
    FUN_10a012db0(auStack_58,auStack_70,&UNK_10f68cfac);
    __ZNSt3__19to_stringEi(&puStack_b0,3);
    if (-1 < (char)bStack_99) {
      uStack_a8 = (ulong)bStack_99;
      puStack_b0 = (undefined1 *)&puStack_b0;
    }
    puVar3 = auStack_58;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar3,puStack_b0,uStack_a8);
    uStack_38 = puVar3[1];
    uStack_40 = *puVar3;
    uStack_30 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    FUN_10a0029c0(&uStack_40);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aa823f4);
    (*pcVar2)();
  }
  uStack_40 = *(undefined8 *)(lVar1 + 0x18);
  uStack_38 = CONCAT44(*(undefined4 *)(lVar1 + 0xbc),*(undefined4 *)(lVar1 + 0x6c));
  FUN_10aa82470(param_1 + -0x40,&uStack_40);
  return;
}



/* Entry: 10aa82504; end: 10aa8252b;  */

void FUN_10aa82504(undefined *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  code *pcVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined4 uVar9;
  undefined4 uVar10;
  
  puVar7 = param_1;
  FUN_10aa8252c();
  iVar6 = (int)puVar7;
  puVar5 = (undefined1 *)register0x00000008;
  while( true ) {
    *(undefined8 *)(puVar5 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar5 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar5 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar5 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar5 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar5 + -8) = unaff_x30;
    puVar8 = *(undefined4 **)(param_1 + 8);
    puVar2 = *(undefined4 **)(param_1 + 0x10);
    if ((ulong)(long)iVar6 < (ulong)((long)puVar2 - (long)puVar8 >> 4)) break;
    param_1 = &UNK_10f68d56a;
    FUN_10a00946c();
    *(undefined8 *)(puVar5 + -0x50) = unaff_x20;
    *(undefined8 *)(puVar5 + -0x48) = unaff_x19;
    *(undefined1 **)(puVar5 + -0x40) = puVar5 + -0x10;
    *(code **)(puVar5 + -0x38) = FUN_10aa82648;
    param_1 = param_1 + -0x40;
    puVar7 = param_1;
    FUN_10aa8252c();
    iVar6 = (int)puVar7;
    unaff_x29 = *(undefined8 *)(puVar5 + -0x40);
    unaff_x30 = *(undefined8 *)(puVar5 + -0x38);
    unaff_x20 = *(undefined8 *)(puVar5 + -0x50);
    unaff_x19 = *(undefined8 *)(puVar5 + -0x48);
    puVar5 = puVar5 + -0x30;
  }
  puVar1 = puVar8 + (long)iVar6 * 4;
  if (puVar2 != puVar1) {
    lVar3 = (long)puVar2 - (long)(puVar1 + 4);
    if (lVar3 != 0) {
      _memmove(puVar1,puVar1 + 4,lVar3);
      puVar8 = *(undefined4 **)(param_1 + 8);
    }
    puVar1 = (undefined4 *)((long)puVar1 + lVar3);
    *(undefined4 **)(param_1 + 0x10) = puVar1;
    if (puVar8 == puVar1) {
      uVar9 = 0;
      uVar10 = 0x7f7fffff;
    }
    else {
      uVar9 = puVar1[-4];
      uVar10 = *puVar8;
    }
    *(undefined4 *)(param_1 + 0x20) = uVar9;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = uVar10;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa8263c);
  (*pcVar4)();
}



/* Entry: 10aa8252c; end: 10aa825a3;  */

int FUN_10aa8252c(float param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  
  lVar4 = param_2;
  FUN_10aaa5e8c();
  lVar1 = *(long *)(param_2 + 8);
  uVar5 = *(long *)(param_2 + 0x10) - lVar1 >> 4;
  iVar3 = (int)lVar4;
  if (((ulong)(long)iVar3 < uVar5) && ((ulong)(lVar4 >> 0x20) < uVar5)) {
    if (ABS(*(float *)(lVar1 + (lVar4 >> 0x20) * 0x10) - param_1) <=
        ABS(*(float *)(lVar1 + (long)iVar3 * 0x10) - param_1)) {
      iVar3 = (int)((ulong)lVar4 >> 0x20);
    }
    return iVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10aa825a4);
  (*pcVar2)();
}



/* Entry: 10aa825a4; end: 10aa82647;  */

void FUN_10aa825a4(undefined *param_1,ulong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined4 uVar7;
  undefined4 uVar8;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    puVar6 = *(undefined4 **)(param_1 + 8);
    puVar2 = *(undefined4 **)(param_1 + 0x10);
    if (param_2 < (ulong)((long)puVar2 - (long)puVar6 >> 4)) break;
    param_1 = &UNK_10f68d56a;
    FUN_10a00946c();
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x40) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x38) = FUN_10aa82648;
    param_1 = param_1 + -0x40;
    puVar5 = param_1;
    FUN_10aa8252c();
    param_2 = (ulong)(int)puVar5;
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x40);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x38);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x50);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x48);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
  }
  puVar1 = puVar6 + param_2 * 4;
  if (puVar2 != puVar1) {
    lVar3 = (long)puVar2 - (long)(puVar1 + 4);
    if (lVar3 != 0) {
      _memmove(puVar1,puVar1 + 4,lVar3);
      puVar6 = *(undefined4 **)(param_1 + 8);
    }
    puVar1 = (undefined4 *)((long)puVar1 + lVar3);
    *(undefined4 **)(param_1 + 0x10) = puVar1;
    if (puVar6 == puVar1) {
      uVar7 = 0;
      uVar8 = 0x7f7fffff;
    }
    else {
      uVar7 = puVar1[-4];
      uVar8 = *puVar6;
    }
    *(undefined4 *)(param_1 + 0x20) = uVar7;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = uVar8;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa8263c);
  (*pcVar4)();
}



/* Entry: 10aa82648; end: 10aa82673;  */

void FUN_10aa82648(undefined *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  code *pcVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined4 uVar7;
  undefined4 uVar8;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    iVar6 = (int)param_1 + -0x40;
    FUN_10aa8252c();
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x20);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    puVar5 = *(undefined4 **)(param_1 + -0x38);
    puVar2 = *(undefined4 **)(param_1 + -0x30);
    if ((ulong)(long)iVar6 < (ulong)((long)puVar2 - (long)puVar5 >> 4)) break;
    param_1 = &UNK_10f68d56a;
    unaff_x30 = FUN_10aa82648;
    FUN_10a00946c();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
  }
  puVar1 = puVar5 + (long)iVar6 * 4;
  if (puVar2 != puVar1) {
    lVar3 = (long)puVar2 - (long)(puVar1 + 4);
    if (lVar3 != 0) {
      _memmove(puVar1,puVar1 + 4,lVar3);
      puVar5 = *(undefined4 **)(param_1 + -0x38);
    }
    puVar1 = (undefined4 *)((long)puVar1 + lVar3);
    *(undefined4 **)(param_1 + -0x30) = puVar1;
    if (puVar5 == puVar1) {
      uVar7 = 0;
      uVar8 = 0x7f7fffff;
    }
    else {
      uVar7 = puVar1[-4];
      uVar8 = *puVar5;
    }
    *(undefined4 *)(param_1 + -0x20) = uVar7;
    *(undefined4 *)(param_1 + -0x1c) = 0;
    *(undefined4 *)(param_1 + -0x18) = uVar8;
    *(undefined4 *)(param_1 + -4) = 0;
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa8263c);
  (*pcVar4)();
}



/* Entry: 10aa82674; end: 10aa826bb;  */

void FUN_10aa82674(long param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010aa82694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x28))
            (param_2,&PTR_DAT_110c3eb90,*(long *)(param_1 + 8),
             *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8));
  return;
}



/* Entry: 10aa826bc; end: 10aa828a7;  */

void FUN_10aa826bc(long param_1,long *param_2)

{
  code *pcVar1;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  byte bStack_70;
  undefined7 uStack_68;
  undefined4 uStack_61;
  undefined1 uStack_5d;
  undefined1 uStack_51;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  (**(code **)(*param_2 + 0x1d8))(&uStack_80,param_2,&PTR_DAT_110c3eb90);
  if (bStack_70 == 1) {
    if (uStack_78 == 0) {
      lStack_98 = 0;
      lStack_90 = 0;
      uStack_88 = 0;
LAB_10aa82758:
      FUN_10a0cb98c(param_1,&lStack_98);
      if (lStack_98 != 0) {
        lStack_90 = lStack_98;
        __ZdlPv();
      }
      return;
    }
    if (uStack_78 < 0x10 || (uStack_78 & 0xf) != 0) {
      uStack_51 = 0xb;
      uStack_68 = 0x6974616d696e61;
      uStack_61 = 0x76746e6f;
      uStack_5d = 0;
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (auStack_50,&UNK_10f6854a8,&uStack_68);
      FUN_10a012db0(auStack_38,auStack_50,&UNK_10f6854b4);
      FUN_10a0029c0(auStack_38);
    }
    else {
      FUN_10a85c424(&lStack_98,uStack_78 >> 4);
      if ((bStack_70 & 1) != 0) {
        _memcpy(lStack_98,uStack_80,uStack_78);
        goto LAB_10aa82758;
      }
    }
  }
  else {
    uStack_51 = 0xb;
    uStack_68 = 0x6974616d696e61;
    uStack_61 = 0x76746e6f;
    uStack_5d = 0;
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_50,&UNK_10f6854a8,&uStack_68);
    FUN_10a012db0(auStack_38,auStack_50,&UNK_10f63cc0e);
    FUN_10a0029c0(auStack_38);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10aa8283c);
  (*pcVar1)();
}



/* Entry: 10aa828a8; end: 10aa828bf;  */

void FUN_10aa828a8(long param_1,long *param_2)

{
  code *pcVar1;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  byte bStack_70;
  undefined7 uStack_68;
  undefined4 uStack_61;
  undefined1 uStack_5d;
  undefined1 uStack_51;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  *(undefined8 *)(param_1 + -0x30) = *(undefined8 *)(param_1 + -0x38);
  *(undefined8 *)(param_1 + -0x20) = 0;
  *(undefined4 *)(param_1 + -0x18) = 0x7f7fffff;
  *(undefined4 *)(param_1 + -4) = 0;
  (**(code **)(*param_2 + 0x1d8))(&uStack_80,param_2,&PTR_DAT_110c3eb90);
  if (bStack_70 == 1) {
    if (uStack_78 == 0) {
      lStack_98 = 0;
      lStack_90 = 0;
      uStack_88 = 0;
LAB_10aa82758:
      FUN_10a0cb98c(param_1 + -0x40,&lStack_98);
      if (lStack_98 != 0) {
        lStack_90 = lStack_98;
        __ZdlPv();
      }
      return;
    }
    if (uStack_78 < 0x10 || (uStack_78 & 0xf) != 0) {
      uStack_51 = 0xb;
      uStack_68 = 0x6974616d696e61;
      uStack_61 = 0x76746e6f;
      uStack_5d = 0;
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (auStack_50,&UNK_10f6854a8,&uStack_68);
      FUN_10a012db0(auStack_38,auStack_50,&UNK_10f6854b4);
      FUN_10a0029c0(auStack_38);
    }
    else {
      FUN_10a85c424(&lStack_98,uStack_78 >> 4);
      if ((bStack_70 & 1) != 0) {
        _memcpy(lStack_98,uStack_80,uStack_78);
        goto LAB_10aa82758;
      }
    }
  }
  else {
    uStack_51 = 0xb;
    uStack_68 = 0x6974616d696e61;
    uStack_61 = 0x76746e6f;
    uStack_5d = 0;
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_50,&UNK_10f6854a8,&uStack_68);
    FUN_10a012db0(auStack_38,auStack_50,&UNK_10f63cc0e);
    FUN_10a0029c0(auStack_38);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10aa8283c);
  (*pcVar1)();
}



/* Entry: 10aa828c0; end: 10aa82a63;  */

void FUN_10aa828c0(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 *puStack_c0;
  ulong uStack_b8;
  byte bStack_a9;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined8 auStack_68 [3];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_30 [8];
  long *plStack_28;
  
  if (param_2[1] - *param_2 != 0x50) {
    puStack_a8 = &UNK_10f68d30e;
    uStack_a0 = 0x20;
    func_0x0001098998d4(auStack_98,&puStack_a8);
    FUN_109feb280(auStack_80,&UNK_10f68cf8a,auStack_98);
    FUN_10a012db0(auStack_68,auStack_80,&UNK_10f68cfac);
    __ZNSt3__19to_stringEi(&puStack_c0,1);
    if (-1 < (char)bStack_a9) {
      uStack_b8 = (ulong)bStack_a9;
      puStack_c0 = (undefined1 *)&puStack_c0;
    }
    puVar5 = auStack_68;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar5,puStack_c0,uStack_b8);
    uStack_48 = puVar5[1];
    uStack_50 = *puVar5;
    uStack_40 = puVar5[2];
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    FUN_10a0029c0(&uStack_50);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa829d8);
    (*pcVar4)();
  }
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  FUN_10aaa5b9c(auStack_30);
  FUN_10ac99870(uVar7,auStack_30);
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
    }
  }
  return;
}



/* Entry: 10aa82a64; end: 10aa82ad3;  */

void FUN_10aa82a64(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 *puStack_c0;
  ulong uStack_b8;
  byte bStack_a9;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined8 auStack_68 [3];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_30 [8];
  long *plStack_28;
  
  if (param_2[1] - *param_2 != 0x50) {
    puStack_a8 = &UNK_10f68d30e;
    uStack_a0 = 0x20;
    func_0x0001098998d4(auStack_98,&puStack_a8);
    FUN_109feb280(auStack_80,&UNK_10f68cf8a,auStack_98);
    FUN_10a012db0(auStack_68,auStack_80,&UNK_10f68cfac);
    __ZNSt3__19to_stringEi(&puStack_c0,1);
    if (-1 < (char)bStack_a9) {
      uStack_b8 = (ulong)bStack_a9;
      puStack_c0 = (undefined1 *)&puStack_c0;
    }
    puVar5 = auStack_68;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar5,puStack_c0,uStack_b8);
    uStack_48 = puVar5[1];
    uStack_50 = *puVar5;
    uStack_40 = puVar5[2];
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    FUN_10a0029c0(&uStack_50);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa829d8);
    (*pcVar4)();
  }
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  FUN_10aaa5b9c(auStack_30);
  FUN_10ac99870(uVar7,auStack_30);
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
    }
  }
  return;
}



/* Entry: 10aa82ad4; end: 10aa82b7b;  */

void FUN_10aa82ad4(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_48 [8];
  long *plStack_40;
  undefined1 uStack_31;
  
  func_0x00010a493ed0(auStack_48,&uStack_31);
  FUN_10a468bcc(param_1 + 0x30,auStack_48);
  if (plStack_40 != (long *)0x0) {
    plVar1 = plStack_40 + 1;
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
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
    }
  }
  lVar4 = 0;
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar4 = *(long *)(param_1 + 0x30) + 0x58;
  }
  (**(code **)(*param_2 + 0x1f0))(param_2,&PTR_DAT_110c3eb10,lVar4);
  return;
}



/* Entry: 10aa82b7c; end: 10aa82bcb;  */

void FUN_10aa82b7c(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_48 [8];
  long *plStack_40;
  undefined1 uStack_31;
  
  func_0x00010a493ed0(auStack_48,&uStack_31);
  FUN_10a468bcc(param_1 + 0x28,auStack_48);
  if (plStack_40 != (long *)0x0) {
    plVar1 = plStack_40 + 1;
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
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
    }
  }
  lVar4 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar4 = *(long *)(param_1 + 0x28) + 0x58;
  }
  (**(code **)(*param_2 + 0x1f0))(param_2,&PTR_DAT_110c3eb10,lVar4);
  return;
}



/* Entry: 10aa82bcc; end: 10aa82dc7;  */

void FUN_10aa82bcc(long param_1,long *param_2)

{
  code *pcVar1;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  byte bStack_70;
  undefined7 uStack_68;
  undefined4 uStack_61;
  undefined1 uStack_5d;
  undefined1 uStack_51;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x40) = 0;
  (**(code **)(*param_2 + 0x1d8))(&uStack_80,param_2,&PTR_DAT_110c3eb90);
  if (bStack_70 == 1) {
    if (uStack_78 == 0) {
      lStack_98 = 0;
      lStack_90 = 0;
      uStack_88 = 0;
LAB_10aa82c78:
      func_0x00010a0cbfcc(param_1,&lStack_98);
      if (lStack_98 != 0) {
        lStack_90 = lStack_98;
        __ZdlPv();
      }
      return;
    }
    if (0x13 < uStack_78) {
      if (uStack_78 % 0x14 == 0) {
        FUN_10a85c498(&lStack_98);
        if ((bStack_70 & 1) == 0) goto LAB_10aa82d58;
        _memcpy(lStack_98,uStack_80,uStack_78);
        goto LAB_10aa82c78;
      }
    }
    uStack_51 = 0xb;
    uStack_68 = 0x6974616d696e61;
    uStack_61 = 0x76746e6f;
    uStack_5d = 0;
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_50,&UNK_10f6854a8,&uStack_68);
    FUN_10a012db0(auStack_38,auStack_50,&UNK_10f6854b4);
    FUN_10a0029c0(auStack_38);
  }
  else {
    uStack_51 = 0xb;
    uStack_68 = 0x6974616d696e61;
    uStack_61 = 0x76746e6f;
    uStack_5d = 0;
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_50,&UNK_10f6854a8,&uStack_68);
    FUN_10a012db0(auStack_38,auStack_50,&UNK_10f63cc0e);
    FUN_10a0029c0(auStack_38);
  }
LAB_10aa82d58:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10aa82d5c);
  (*pcVar1)();
}



/* Entry: 10aa82dc8; end: 10aa82dcf;  */

void FUN_10aa82dc8(long param_1,long *param_2)

{
  code *pcVar1;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  byte bStack_70;
  undefined7 uStack_68;
  undefined4 uStack_61;
  undefined1 uStack_5d;
  undefined1 uStack_51;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  *(undefined8 *)(param_1 + -0x38) = *(undefined8 *)(param_1 + -0x40);
  *(undefined8 *)(param_1 + -0x28) = 0;
  *(undefined4 *)(param_1 + -0x20) = 0x7f7fffff;
  *(undefined4 *)(param_1 + -8) = 0;
  (**(code **)(*param_2 + 0x1d8))(&uStack_80,param_2,&PTR_DAT_110c3eb90);
  if (bStack_70 == 1) {
    if (uStack_78 == 0) {
      lStack_98 = 0;
      lStack_90 = 0;
      uStack_88 = 0;
LAB_10aa82c78:
      func_0x00010a0cbfcc(param_1 + -0x48,&lStack_98);
      if (lStack_98 != 0) {
        lStack_90 = lStack_98;
        __ZdlPv();
      }
      return;
    }
    if (0x13 < uStack_78) {
      if (uStack_78 % 0x14 == 0) {
        FUN_10a85c498(&lStack_98);
        if ((bStack_70 & 1) == 0) goto LAB_10aa82d58;
        _memcpy(lStack_98,uStack_80,uStack_78);
        goto LAB_10aa82c78;
      }
    }
    uStack_51 = 0xb;
    uStack_68 = 0x6974616d696e61;
    uStack_61 = 0x76746e6f;
    uStack_5d = 0;
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_50,&UNK_10f6854a8,&uStack_68);
    FUN_10a012db0(auStack_38,auStack_50,&UNK_10f6854b4);
    FUN_10a0029c0(auStack_38);
  }
  else {
    uStack_51 = 0xb;
    uStack_68 = 0x6974616d696e61;
    uStack_61 = 0x76746e6f;
    uStack_5d = 0;
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_50,&UNK_10f6854a8,&uStack_68);
    FUN_10a012db0(auStack_38,auStack_50,&UNK_10f63cc0e);
    FUN_10a0029c0(auStack_38);
  }
LAB_10aa82d58:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10aa82d5c);
  (*pcVar1)();
}



/* Entry: 10aa82dd0; end: 10aa82fb7;  */

void FUN_10aa82dd0(undefined8 param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined1 *puStack_e0;
  ulong uStack_d8;
  byte bStack_c9;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined8 auStack_88 [3];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  lVar1 = *param_2;
  if (param_2[1] - lVar1 != 0xf0) {
    puStack_c8 = &UNK_10f68d32f;
    uStack_c0 = 0x1a;
    func_0x0001098998d4(auStack_b8,&puStack_c8);
    FUN_109feb280(auStack_a0,&UNK_10f68cf8a,auStack_b8);
    FUN_10a012db0(auStack_88,auStack_a0,&UNK_10f68cfac);
    __ZNSt3__19to_stringEi(&puStack_e0,3);
    if (-1 < (char)bStack_c9) {
      uStack_d8 = (ulong)bStack_c9;
      puStack_e0 = (undefined1 *)&puStack_e0;
    }
    puVar3 = auStack_88;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar3,puStack_e0,uStack_d8);
    uStack_68 = puVar3[1];
    uStack_70 = *puVar3;
    uStack_60 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    FUN_10a0029c0(&uStack_70);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aa82f3c);
    (*pcVar2)();
  }
  uVar10 = *(undefined4 *)(lVar1 + 0x18);
  fVar5 = *(float *)(lVar1 + 0x6c);
  fVar4 = *(float *)(lVar1 + 0x1c) * 0.5;
  fVar8 = fVar5 * 0.5;
  fVar9 = *(float *)(lVar1 + 0xbc) * 0.5;
  ___sincosf_stret();
  fVar6 = fVar5;
  ___sincosf_stret();
  fVar7 = fVar6;
  ___sincosf_stret();
  uStack_70 = CONCAT44(-(fVar5 * fVar8 * fVar9) + fVar7 * fVar4 * fVar6,uVar10);
  uStack_68 = CONCAT44(-(fVar4 * fVar8 * fVar7) + fVar9 * fVar5 * fVar6,
                       fVar4 * fVar6 * fVar9 + fVar7 * fVar5 * fVar8);
  uStack_60 = CONCAT44(uStack_60._4_4_,fVar4 * fVar8 * fVar9 + fVar7 * fVar5 * fVar6);
  FUN_10aa80320(param_1,&uStack_70);
  return;
}



/* Entry: 10aa82fb8; end: 10aa82fbf;  */

void FUN_10aa82fb8(long param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined1 *puStack_e0;
  ulong uStack_d8;
  byte bStack_c9;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined8 auStack_88 [3];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  lVar1 = *param_2;
  if (param_2[1] - lVar1 != 0xf0) {
    puStack_c8 = &UNK_10f68d32f;
    uStack_c0 = 0x1a;
    func_0x0001098998d4(auStack_b8,&puStack_c8);
    FUN_109feb280(auStack_a0,&UNK_10f68cf8a,auStack_b8);
    FUN_10a012db0(auStack_88,auStack_a0,&UNK_10f68cfac);
    __ZNSt3__19to_stringEi(&puStack_e0,3);
    if (-1 < (char)bStack_c9) {
      uStack_d8 = (ulong)bStack_c9;
      puStack_e0 = (undefined1 *)&puStack_e0;
    }
    puVar3 = auStack_88;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar3,puStack_e0,uStack_d8);
    uStack_68 = puVar3[1];
    uStack_70 = *puVar3;
    uStack_60 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    FUN_10a0029c0(&uStack_70);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aa82f3c);
    (*pcVar2)();
  }
  uVar10 = *(undefined4 *)(lVar1 + 0x18);
  fVar5 = *(float *)(lVar1 + 0x6c);
  fVar4 = *(float *)(lVar1 + 0x1c) * 0.5;
  fVar8 = fVar5 * 0.5;
  fVar9 = *(float *)(lVar1 + 0xbc) * 0.5;
  ___sincosf_stret();
  fVar6 = fVar5;
  ___sincosf_stret();
  fVar7 = fVar6;
  ___sincosf_stret();
  uStack_70 = CONCAT44(-(fVar5 * fVar8 * fVar9) + fVar7 * fVar4 * fVar6,uVar10);
  uStack_68 = CONCAT44(-(fVar4 * fVar8 * fVar7) + fVar9 * fVar5 * fVar6,
                       fVar4 * fVar6 * fVar9 + fVar7 * fVar5 * fVar8);
  uStack_60 = CONCAT44(uStack_60._4_4_,fVar4 * fVar8 * fVar9 + fVar7 * fVar5 * fVar6);
  FUN_10aa80320(param_1 + -0x48,&uStack_70);
  return;
}



/* Entry: 10aa82fc0; end: 10aa82fe7;  */

void FUN_10aa82fc0(undefined *param_1)

{
  undefined4 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined4 *puVar8;
  ulong uVar9;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined4 *puVar10;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined4 uVar11;
  undefined4 uVar12;
  
  puVar6 = param_1;
  FUN_10aa82fe8();
  iVar5 = (int)puVar6;
  puVar4 = (undefined1 *)register0x00000008;
  while( true ) {
    uVar7 = (ulong)iVar5;
    *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar4 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar4 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar4 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar4 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar4 + -8) = unaff_x30;
    puVar8 = *(undefined4 **)(param_1 + 8);
    puVar1 = *(undefined4 **)(param_1 + 0x10);
    uVar9 = ((long)puVar1 - (long)puVar8 >> 2) * -0x3333333333333333;
    if (uVar7 <= uVar9 && uVar9 - uVar7 != 0) break;
    param_1 = &UNK_10f68d56a;
    FUN_10a00946c();
    *(undefined8 *)(puVar4 + -0x50) = unaff_x20;
    *(undefined8 *)(puVar4 + -0x48) = unaff_x19;
    *(undefined1 **)(puVar4 + -0x40) = puVar4 + -0x10;
    *(code **)(puVar4 + -0x38) = FUN_10aa83124;
    param_1 = param_1 + -0x48;
    puVar6 = param_1;
    FUN_10aa82fe8();
    iVar5 = (int)puVar6;
    unaff_x29 = *(undefined8 *)(puVar4 + -0x40);
    unaff_x30 = *(undefined8 *)(puVar4 + -0x38);
    unaff_x20 = *(undefined8 *)(puVar4 + -0x50);
    unaff_x19 = *(undefined8 *)(puVar4 + -0x48);
    puVar4 = puVar4 + -0x30;
  }
  puVar10 = puVar8 + uVar7 * 5;
  if (puVar1 != puVar10) {
    lVar2 = (long)puVar1 - (long)(puVar10 + 5);
    if (lVar2 != 0) {
      _memmove(puVar10,puVar10 + 5,lVar2);
      puVar8 = *(undefined4 **)(param_1 + 8);
    }
    puVar10 = (undefined4 *)((long)puVar10 + lVar2);
    *(undefined4 **)(param_1 + 0x10) = puVar10;
    if (puVar8 == puVar10) {
      uVar11 = 0;
      uVar12 = 0x7f7fffff;
    }
    else {
      uVar11 = puVar10[-5];
      uVar12 = *puVar8;
    }
    *(undefined4 *)(param_1 + 0x20) = uVar11;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = uVar12;
    *(undefined4 *)(param_1 + 0x40) = 0;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10aa83118);
  (*pcVar3)();
}



/* Entry: 10aa82fe8; end: 10aa8306b;  */

int FUN_10aa82fe8(float param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  
  lVar4 = param_2;
  func_0x00010aaa6084();
  lVar1 = *(long *)(param_2 + 8);
  uVar6 = (*(long *)(param_2 + 0x10) - lVar1 >> 2) * -0x3333333333333333;
  iVar3 = (int)lVar4;
  if (((ulong)(long)iVar3 <= uVar6 && uVar6 - (long)iVar3 != 0) &&
     ((ulong)(lVar4 >> 0x20) <= uVar6 && uVar6 - (lVar4 >> 0x20) != 0)) {
    iVar5 = (int)((ulong)lVar4 >> 0x20);
    if (ABS(*(float *)(lVar1 + (long)iVar5 * 0x14) - param_1) <=
        ABS(*(float *)(lVar1 + (long)iVar3 * 0x14) - param_1)) {
      iVar3 = iVar5;
    }
    return iVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10aa8306c);
  (*pcVar2)();
}



/* Entry: 10aa8306c; end: 10aa83123;  */

void FUN_10aa8306c(undefined *param_1,ulong param_2)

{
  undefined4 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined4 *puVar7;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined4 uVar8;
  undefined4 uVar9;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    puVar5 = *(undefined4 **)(param_1 + 8);
    puVar1 = *(undefined4 **)(param_1 + 0x10);
    uVar6 = ((long)puVar1 - (long)puVar5 >> 2) * -0x3333333333333333;
    if (param_2 <= uVar6 && uVar6 - param_2 != 0) break;
    param_1 = &UNK_10f68d56a;
    FUN_10a00946c();
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x40) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x38) = FUN_10aa83124;
    param_1 = param_1 + -0x48;
    puVar4 = param_1;
    FUN_10aa82fe8();
    param_2 = (ulong)(int)puVar4;
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x40);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x38);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x50);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x48);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
  }
  puVar7 = puVar5 + param_2 * 5;
  if (puVar1 != puVar7) {
    lVar2 = (long)puVar1 - (long)(puVar7 + 5);
    if (lVar2 != 0) {
      _memmove(puVar7,puVar7 + 5,lVar2);
      puVar5 = *(undefined4 **)(param_1 + 8);
    }
    puVar7 = (undefined4 *)((long)puVar7 + lVar2);
    *(undefined4 **)(param_1 + 0x10) = puVar7;
    if (puVar5 == puVar7) {
      uVar8 = 0;
      uVar9 = 0x7f7fffff;
    }
    else {
      uVar8 = puVar7[-5];
      uVar9 = *puVar5;
    }
    *(undefined4 *)(param_1 + 0x20) = uVar8;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = uVar9;
    *(undefined4 *)(param_1 + 0x40) = 0;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10aa83118);
  (*pcVar3)();
}



/* Entry: 10aa83124; end: 10aa8314f;  */

void FUN_10aa83124(undefined *param_1)

{
  undefined4 *puVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  int iVar7;
  undefined8 unaff_x19;
  undefined4 *puVar8;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined4 uVar9;
  undefined4 uVar10;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    iVar7 = (int)param_1 + -0x48;
    FUN_10aa82fe8();
    uVar4 = (ulong)iVar7;
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x20);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    puVar5 = *(undefined4 **)(param_1 + -0x40);
    puVar1 = *(undefined4 **)(param_1 + -0x38);
    uVar6 = ((long)puVar1 - (long)puVar5 >> 2) * -0x3333333333333333;
    if (uVar4 <= uVar6 && uVar6 - uVar4 != 0) break;
    param_1 = &UNK_10f68d56a;
    unaff_x30 = FUN_10aa83124;
    FUN_10a00946c();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
  }
  puVar8 = puVar5 + uVar4 * 5;
  if (puVar1 != puVar8) {
    lVar2 = (long)puVar1 - (long)(puVar8 + 5);
    if (lVar2 != 0) {
      _memmove(puVar8,puVar8 + 5,lVar2);
      puVar5 = *(undefined4 **)(param_1 + -0x40);
    }
    puVar8 = (undefined4 *)((long)puVar8 + lVar2);
    *(undefined4 **)(param_1 + -0x38) = puVar8;
    if (puVar5 == puVar8) {
      uVar9 = 0;
      uVar10 = 0x7f7fffff;
    }
    else {
      uVar9 = puVar8[-5];
      uVar10 = *puVar5;
    }
    *(undefined4 *)(param_1 + -0x28) = uVar9;
    *(undefined4 *)(param_1 + -0x24) = 0;
    *(undefined4 *)(param_1 + -0x20) = uVar10;
    *(undefined4 *)(param_1 + -8) = 0;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10aa83118);
  (*pcVar3)();
}



/* Entry: 10aa83150; end: 10aa832f3;  */

void FUN_10aa83150(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 *puStack_c0;
  ulong uStack_b8;
  byte bStack_a9;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined8 auStack_68 [3];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_30 [8];
  long *plStack_28;
  
  if (param_2[1] - *param_2 != 0x50) {
    puStack_a8 = &UNK_10f68d34a;
    uStack_a0 = 0x1f;
    func_0x0001098998d4(auStack_98,&puStack_a8);
    FUN_109feb280(auStack_80,&UNK_10f68cf8a,auStack_98);
    FUN_10a012db0(auStack_68,auStack_80,&UNK_10f68cfba);
    __ZNSt3__19to_stringEi(&puStack_c0,1);
    if (-1 < (char)bStack_a9) {
      uStack_b8 = (ulong)bStack_a9;
      puStack_c0 = (undefined1 *)&puStack_c0;
    }
    puVar5 = auStack_68;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar5,puStack_c0,uStack_b8);
    uStack_48 = puVar5[1];
    uStack_50 = *puVar5;
    uStack_40 = puVar5[2];
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    FUN_10a0029c0(&uStack_50);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa83268);
    (*pcVar4)();
  }
  uVar7 = *(undefined8 *)(param_1 + 0x50);
  FUN_10aaa5b9c(auStack_30);
  FUN_10ac99870(uVar7,auStack_30);
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
    }
  }
  return;
}



/* Entry: 10aa832f4; end: 10aa8330b;  */

void FUN_10aa832f4(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 *puStack_c0;
  ulong uStack_b8;
  byte bStack_a9;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined8 auStack_68 [3];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_30 [8];
  long *plStack_28;
  
  if (param_2[1] - *param_2 != 0x50) {
    puStack_a8 = &UNK_10f68d34a;
    uStack_a0 = 0x1f;
    func_0x0001098998d4(auStack_98,&puStack_a8);
    FUN_109feb280(auStack_80,&UNK_10f68cf8a,auStack_98);
    FUN_10a012db0(auStack_68,auStack_80,&UNK_10f68cfba);
    __ZNSt3__19to_stringEi(&puStack_c0,1);
    if (-1 < (char)bStack_a9) {
      uStack_b8 = (ulong)bStack_a9;
      puStack_c0 = (undefined1 *)&puStack_c0;
    }
    puVar5 = auStack_68;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar5,puStack_c0,uStack_b8);
    uStack_48 = puVar5[1];
    uStack_50 = *puVar5;
    uStack_40 = puVar5[2];
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    FUN_10a0029c0(&uStack_50);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa83268);
    (*pcVar4)();
  }
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  FUN_10aaa5b9c(auStack_30);
  FUN_10ac99870(uVar7,auStack_30);
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
    }
  }
  return;
}



/* Entry: 10aa8330c; end: 10aa83413;  */

float FUN_10aa8330c(float param_1,long param_2)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  float fVar10;
  
  (**(code **)**(undefined8 **)(param_2 + 0x50))();
  pauVar1 = (undefined1 (*) [12])(param_2 + 0x40);
  fVar3 = (float)*(undefined8 *)*pauVar1;
  fVar10 = (float)*(undefined8 *)(param_2 + 0x30);
  fVar4 = fVar3 * fVar10;
  fVar5 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20) *
          (float)((ulong)*(undefined8 *)(param_2 + 0x30) >> 0x20);
  fVar6 = (float)*(undefined8 *)(param_2 + 0x48) * (float)*(undefined8 *)(param_2 + 0x38);
  fVar7 = (float)((ulong)*(undefined8 *)(param_2 + 0x48) >> 0x20) *
          (float)((ulong)*(undefined8 *)(param_2 + 0x38) >> 0x20);
  auVar9._4_4_ = fVar5;
  auVar9._0_4_ = fVar4;
  auVar9._8_4_ = fVar6;
  auVar9._12_4_ = fVar7;
  auVar2._4_4_ = fVar5;
  auVar2._0_4_ = fVar4;
  auVar2._8_4_ = fVar6;
  auVar2._12_4_ = fVar7;
  auVar9 = NEON_ext(auVar9,auVar2,8,1);
  uVar8 = NEON_rev64(auVar9._0_8_,4);
  fVar4 = fVar4 + (float)uVar8 + fVar5 + (float)((ulong)uVar8 >> 0x20);
  fVar5 = (float)(SUB124(*pauVar1,0) ^ (SUB124(*pauVar1,0) ^ (uint)-fVar3) & -(uint)(fVar4 < 0.0));
  fVar3 = -fVar4;
  if (0.0 <= fVar4) {
    fVar3 = fVar4;
  }
  if (fVar3 <= 0.9999999) {
    _acosf();
    fVar4 = (1.0 - param_1) * fVar3;
    _sinf();
    param_1 = param_1 * fVar3;
    _sinf();
    _sinf(fVar3);
    fVar3 = (fVar10 * fVar4 + fVar5 * param_1) / fVar3;
  }
  else {
    fVar3 = fVar5 * param_1 + fVar10 * (1.0 - param_1);
  }
  return fVar3;
}



/* Entry: 10aa83414; end: 10aa8350b;  */

void FUN_10aa83414(long param_1,long *param_2)

{
  long lVar1;
  
  (**(code **)(*param_2 + 0xd0))(param_2,&PTR_DAT_110c3ebb0,param_1 + 0x30);
  (**(code **)(*param_2 + 0xd0))(param_2,&PTR_DAT_110c3ebd0,param_1 + 0x40);
  lVar1 = 0;
  if (*(long *)(param_1 + 0x50) != 0) {
    lVar1 = *(long *)(param_1 + 0x50) + 0x58;
  }
                    /* WARNING: Could not recover jumptable at 0x00010aa8348c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110c3eb10,lVar1);
  return;
}



/* Entry: 10aa8350c; end: 10aa835f3;  */

void FUN_10aa8350c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,long *param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_48 [8];
  long *plStack_40;
  undefined1 uStack_31;
  
  (**(code **)(*param_6 + 0x188))(param_6,&PTR_DAT_110c3ebb0);
  *(undefined4 *)(param_5 + 0x30) = param_1;
  *(undefined4 *)(param_5 + 0x34) = param_2;
  *(undefined4 *)(param_5 + 0x38) = param_3;
  *(undefined4 *)(param_5 + 0x3c) = param_4;
  (**(code **)(*param_6 + 0x188))(param_6,&PTR_DAT_110c3ebd0);
  *(undefined4 *)(param_5 + 0x40) = param_1;
  *(undefined4 *)(param_5 + 0x44) = param_2;
  *(undefined4 *)(param_5 + 0x48) = param_3;
  *(undefined4 *)(param_5 + 0x4c) = param_4;
  func_0x00010a493ed0(auStack_48,&uStack_31);
  FUN_10a468bcc(param_5 + 0x50,auStack_48);
  if (plStack_40 != (long *)0x0) {
    plVar1 = plStack_40 + 1;
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
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
    }
  }
  lVar4 = 0;
  if (*(long *)(param_5 + 0x50) != 0) {
    lVar4 = *(long *)(param_5 + 0x50) + 0x58;
  }
  (**(code **)(*param_6 + 0x1f0))(param_6,&PTR_DAT_110c3eb10,lVar4);
  return;
}



/* Entry: 10aa835f4; end: 10aa83643;  */

void FUN_10aa835f4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,long *param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_48 [8];
  long *plStack_40;
  undefined1 uStack_31;
  
  (**(code **)(*param_6 + 0x188))(param_6,&PTR_DAT_110c3ebb0);
  *(undefined4 *)(param_5 + 0x28) = param_1;
  *(undefined4 *)(param_5 + 0x2c) = param_2;
  *(undefined4 *)(param_5 + 0x30) = param_3;
  *(undefined4 *)(param_5 + 0x34) = param_4;
  (**(code **)(*param_6 + 0x188))(param_6,&PTR_DAT_110c3ebd0);
  *(undefined4 *)(param_5 + 0x38) = param_1;
  *(undefined4 *)(param_5 + 0x3c) = param_2;
  *(undefined4 *)(param_5 + 0x40) = param_3;
  *(undefined4 *)(param_5 + 0x44) = param_4;
  func_0x00010a493ed0(auStack_48,&uStack_31);
  FUN_10a468bcc(param_5 + 0x48,auStack_48);
  if (plStack_40 != (long *)0x0) {
    plVar1 = plStack_40 + 1;
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
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
    }
  }
  lVar4 = 0;
  if (*(long *)(param_5 + 0x48) != 0) {
    lVar4 = *(long *)(param_5 + 0x48) + 0x58;
  }
  (**(code **)(*param_6 + 0x1f0))(param_6,&PTR_DAT_110c3eb10,lVar4);
  return;
}



/* Entry: 10aa83644; end: 10aa8382f;  */

void FUN_10aa83644(long param_1,long *param_2)

{
  code *pcVar1;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  byte bStack_70;
  undefined7 uStack_68;
  undefined4 uStack_61;
  undefined1 uStack_5d;
  undefined1 uStack_51;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  (**(code **)(*param_2 + 0x1d8))(&uStack_80,param_2,&PTR_DAT_110c3eb90);
  if (bStack_70 == 1) {
    if (uStack_78 == 0) {
      lStack_98 = 0;
      lStack_90 = 0;
      uStack_88 = 0;
LAB_10aa836e0:
      FUN_10a0ca9fc(param_1,&lStack_98);
      if (lStack_98 != 0) {
        lStack_90 = lStack_98;
        __ZdlPv();
      }
      return;
    }
    if (uStack_78 < 8 || (uStack_78 & 7) != 0) {
      uStack_51 = 0xb;
      uStack_68 = 0x6974616d696e61;
      uStack_61 = 0x76746e6f;
      uStack_5d = 0;
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (auStack_50,&UNK_10f6854a8,&uStack_68);
      FUN_10a012db0(auStack_38,auStack_50,&UNK_10f6854b4);
      FUN_10a0029c0(auStack_38);
    }
    else {
      FUN_10a85c514(&lStack_98,uStack_78 >> 3);
      if ((bStack_70 & 1) != 0) {
        _memcpy(lStack_98,uStack_80,uStack_78);
        goto LAB_10aa836e0;
      }
    }
  }
  else {
    uStack_51 = 0xb;
    uStack_68 = 0x6974616d696e61;
    uStack_61 = 0x76746e6f;
    uStack_5d = 0;
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_50,&UNK_10f6854a8,&uStack_68);
    FUN_10a012db0(auStack_38,auStack_50,&UNK_10f63cc0e);
    FUN_10a0029c0(auStack_38);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10aa837c4);
  (*pcVar1)();
}



/* Entry: 10aa83830; end: 10aa83837;  */

void FUN_10aa83830(long param_1,long *param_2)

{
  code *pcVar1;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  byte bStack_70;
  undefined7 uStack_68;
  undefined4 uStack_61;
  undefined1 uStack_5d;
  undefined1 uStack_51;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  *(undefined8 *)(param_1 + -0x28) = *(undefined8 *)(param_1 + -0x30);
  *(undefined8 *)(param_1 + -0x18) = 0;
  *(undefined4 *)(param_1 + -0x10) = 0x7f7fffff;
  *(undefined4 *)(param_1 + -4) = 0;
  (**(code **)(*param_2 + 0x1d8))(&uStack_80,param_2,&PTR_DAT_110c3eb90);
  if (bStack_70 == 1) {
    if (uStack_78 == 0) {
      lStack_98 = 0;
      lStack_90 = 0;
      uStack_88 = 0;
LAB_10aa836e0:
      FUN_10a0ca9fc(param_1 + -0x38,&lStack_98);
      if (lStack_98 != 0) {
        lStack_90 = lStack_98;
        __ZdlPv();
      }
      return;
    }
    if (uStack_78 < 8 || (uStack_78 & 7) != 0) {
      uStack_51 = 0xb;
      uStack_68 = 0x6974616d696e61;
      uStack_61 = 0x76746e6f;
      uStack_5d = 0;
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (auStack_50,&UNK_10f6854a8,&uStack_68);
      FUN_10a012db0(auStack_38,auStack_50,&UNK_10f6854b4);
      FUN_10a0029c0(auStack_38);
    }
    else {
      FUN_10a85c514(&lStack_98,uStack_78 >> 3);
      if ((bStack_70 & 1) != 0) {
        _memcpy(lStack_98,uStack_80,uStack_78);
        goto LAB_10aa836e0;
      }
    }
  }
  else {
    uStack_51 = 0xb;
    uStack_68 = 0x6974616d696e61;
    uStack_61 = 0x76746e6f;
    uStack_5d = 0;
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_50,&UNK_10f6854a8,&uStack_68);
    FUN_10a012db0(auStack_38,auStack_50,&UNK_10f63cc0e);
    FUN_10a0029c0(auStack_38);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10aa837c4);
  (*pcVar1)();
}



/* Entry: 10aa83838; end: 10aa8398b;  */

void FUN_10aa83838(undefined8 param_1,long *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined1 *puStack_b0;
  ulong uStack_a8;
  byte bStack_99;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined8 auStack_58 [3];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if (param_2[1] - *param_2 != 0x50) {
    puStack_98 = &UNK_10f68d36a;
    uStack_90 = 0x1b;
    func_0x0001098998d4(auStack_88,&puStack_98);
    FUN_109feb280(auStack_70,&UNK_10f68cf8a,auStack_88);
    FUN_10a012db0(auStack_58,auStack_70,&UNK_10f68cfac);
    __ZNSt3__19to_stringEi(&puStack_b0,1);
    if (-1 < (char)bStack_99) {
      uStack_a8 = (ulong)bStack_99;
      puStack_b0 = (undefined1 *)&puStack_b0;
    }
    puVar2 = auStack_58;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar2,puStack_b0,uStack_a8);
    uStack_38 = puVar2[1];
    uStack_40 = *puVar2;
    uStack_30 = puVar2[2];
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
    FUN_10a0029c0(&uStack_40);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10aa83910);
    (*pcVar1)();
  }
  uStack_40 = *(undefined8 *)(*param_2 + 0x18);
  FUN_10aa8398c(param_1,&uStack_40);
  return;
}



/* Entry: 10aa8398c; end: 10aa83beb;  */

void FUN_10aa8398c(long param_1,float *param_2)

{
  float *pfVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  float *pfVar8;
  ulong uVar9;
  float *pfVar10;
  float *pfVar11;
  long lVar12;
  undefined8 *puVar13;
  long unaff_x23;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined4 uVar17;
  undefined1 *puStack_110;
  ulong uStack_108;
  byte bStack_f9;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined8 auStack_b8 [3];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  float *pfStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  
  puVar13 = (undefined8 *)(param_1 + 8);
  pfVar8 = (float *)*puVar13;
  pfVar1 = *(float **)(param_1 + 0x10);
  uVar5 = (long)pfVar1 - (long)pfVar8 >> 3;
  pfVar11 = pfVar1;
  if ((long)pfVar1 - (long)pfVar8 != 0) {
    uVar7 = uVar5;
    pfVar10 = pfVar8;
    do {
      uVar9 = uVar7 >> 1;
      pfVar11 = pfVar10 + uVar9 * 2 + 2;
      uVar7 = uVar7 + (uVar7 >> 1 ^ 0xffffffffffffffff);
      if (*param_2 <= pfVar10[uVar9 * 2]) {
        pfVar11 = pfVar10;
        uVar7 = uVar9;
      }
      pfVar10 = pfVar11;
    } while (uVar7 != 0);
  }
  if (pfVar1 < *(float **)(param_1 + 0x18)) {
    if (pfVar11 == pfVar1) {
      *(long *)pfVar1 = *(long *)param_2;
      *(float **)(param_1 + 0x10) = pfVar1 + 2;
    }
    else {
      pfVar8 = pfVar1;
      if (pfVar1 + -2 < pfVar1) {
        *(long *)pfVar1 = *(long *)(pfVar1 + -2);
        pfVar8 = pfVar1 + 2;
      }
      *(float **)(param_1 + 0x10) = pfVar8;
      if (pfVar1 != pfVar11 + 2) {
        _memmove(pfVar11 + 2,pfVar11);
        pfVar8 = *(float **)(param_1 + 0x10);
      }
      if (pfVar8 < pfVar11) goto LAB_10aa83bcc;
      lVar4 = 8;
      if (pfVar8 <= param_2 || param_2 < pfVar11) {
        lVar4 = 0;
      }
      *(long *)pfVar11 = *(long *)((long)param_2 + lVar4);
    }
  }
  else {
    uVar5 = uVar5 + 1;
    if (uVar5 >> 0x3d != 0) {
      FUN_10a0caba8();
      if (unaff_x23 != 0) {
        __ZdlPv();
      }
      lVar4 = param_1;
      __Unwind_Resume(param_1);
      pcStack_68 = FUN_10aa83bec;
      pfStack_80 = pfVar11;
      lStack_78 = param_1;
      puStack_70 = &stack0xfffffffffffffff0;
      if (*(long *)(param_2 + 2) - *(long *)param_2 != 0x50) {
        puStack_f8 = &UNK_10f68d36a;
        uStack_f0 = 0x1b;
        func_0x0001098998d4(auStack_e8,&puStack_f8);
        FUN_109feb280(auStack_d0,&UNK_10f68cf8a,auStack_e8);
        FUN_10a012db0(auStack_b8,auStack_d0,&UNK_10f68cfac);
        __ZNSt3__19to_stringEi(&puStack_110,1);
        if (-1 < (char)bStack_f9) {
          uStack_108 = (ulong)bStack_f9;
          puStack_110 = (undefined1 *)&puStack_110;
        }
        puVar13 = auStack_b8;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (puVar13,puStack_110,uStack_108);
        uStack_98 = puVar13[1];
        uStack_a0 = *puVar13;
        uStack_90 = puVar13[2];
        puVar13[1] = 0;
        puVar13[2] = 0;
        *puVar13 = 0;
        FUN_10a0029c0(&uStack_a0);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10aa83910);
        (*pcVar2)();
      }
      uStack_a0 = *(undefined8 *)(*(long *)param_2 + 0x18);
      FUN_10aa8398c(lVar4 + -0x38,&uStack_a0);
      return;
    }
    uVar9 = (long)pfVar11 - (long)pfVar8;
    uVar6 = (long)*(float **)(param_1 + 0x18) - (long)pfVar8;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar5) {
      uVar7 = uVar5;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      puVar14 = (undefined8 *)0x0;
      uVar7 = 0;
    }
    else {
      puVar14 = puVar13;
      FUN_10a0cabbc();
      uVar7 = uVar7 << 3;
    }
    plVar16 = (long *)((long)puVar14 + uVar9);
    puVar15 = (undefined8 *)((long)puVar14 + uVar7);
    if (uVar9 == uVar7) {
      if ((long)uVar9 < 1) {
        uVar9 = (long)uVar9 >> 2;
        if (pfVar11 == pfVar8) {
          uVar9 = 1;
        }
        uVar5 = uVar9;
        FUN_10a0cabbc();
        plVar16 = puVar13 + (uVar9 >> 2);
        puVar15 = puVar13 + uVar5;
        if (puVar14 != (undefined8 *)0x0) {
          __ZdlPv(puVar14);
        }
      }
      else {
        plVar16 = (long *)((long)plVar16 - ((uVar9 >> 1) + 4 & 0xfffffffffffffff8));
      }
    }
    *plVar16 = *(long *)param_2;
    _memcpy(plVar16 + 1,pfVar11,*(long *)(param_1 + 0x10) - (long)pfVar11);
    lVar4 = *(long *)(param_1 + 0x10);
    *(float **)(param_1 + 0x10) = pfVar11;
    lVar12 = (long)plVar16 - ((long)pfVar11 - *(long *)(param_1 + 8));
    _memcpy(lVar12);
    lVar3 = *(long *)(param_1 + 8);
    *(long *)(param_1 + 8) = lVar12;
    *(long *)(param_1 + 0x10) = (long)(plVar16 + 1) + (lVar4 - (long)pfVar11);
    *(undefined8 **)(param_1 + 0x18) = puVar15;
    if (lVar3 != 0) {
      __ZdlPv();
    }
  }
  if (*(undefined4 **)(param_1 + 8) != *(undefined4 **)(param_1 + 0x10)) {
    *(undefined4 *)(param_1 + 0x20) = (*(undefined4 **)(param_1 + 0x10))[-2];
    uVar17 = **(undefined4 **)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = uVar17;
    *(undefined4 *)(param_1 + 0x34) = 0;
    return;
  }
LAB_10aa83bcc:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10aa83bd0);
  (*pcVar2)();
}



/* Entry: 10aa83bec; end: 10aa83bf3;  */

void FUN_10aa83bec(long param_1,long *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined1 *puStack_b0;
  ulong uStack_a8;
  byte bStack_99;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined8 auStack_58 [3];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if (param_2[1] - *param_2 != 0x50) {
    puStack_98 = &UNK_10f68d36a;
    uStack_90 = 0x1b;
    func_0x0001098998d4(auStack_88,&puStack_98);
    FUN_109feb280(auStack_70,&UNK_10f68cf8a,auStack_88);
    FUN_10a012db0(auStack_58,auStack_70,&UNK_10f68cfac);
    __ZNSt3__19to_stringEi(&puStack_b0,1);
    if (-1 < (char)bStack_99) {
      uStack_a8 = (ulong)bStack_99;
      puStack_b0 = (undefined1 *)&puStack_b0;
    }
    puVar2 = auStack_58;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar2,puStack_b0,uStack_a8);
    uStack_38 = puVar2[1];
    uStack_40 = *puVar2;
    uStack_30 = puVar2[2];
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
    FUN_10a0029c0(&uStack_40);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10aa83910);
    (*pcVar1)();
  }
  uStack_40 = *(undefined8 *)(*param_2 + 0x18);
  FUN_10aa8398c(param_1 + -0x38,&uStack_40);
  return;
}



/* Entry: 10aa83bf4; end: 10aa83c1b;  */

void FUN_10aa83bf4(undefined *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  code *pcVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined4 uVar9;
  undefined4 uVar10;
  
  puVar7 = param_1;
  FUN_10aa83c1c();
  iVar6 = (int)puVar7;
  puVar5 = (undefined1 *)register0x00000008;
  while( true ) {
    *(undefined8 *)(puVar5 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar5 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar5 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar5 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar5 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar5 + -8) = unaff_x30;
    puVar8 = *(undefined4 **)(param_1 + 8);
    puVar2 = *(undefined4 **)(param_1 + 0x10);
    if ((ulong)(long)iVar6 < (ulong)((long)puVar2 - (long)puVar8 >> 3)) break;
    param_1 = &UNK_10f68d56a;
    FUN_10a00946c();
    *(undefined8 *)(puVar5 + -0x50) = unaff_x20;
    *(undefined8 *)(puVar5 + -0x48) = unaff_x19;
    *(undefined1 **)(puVar5 + -0x40) = puVar5 + -0x10;
    *(code **)(puVar5 + -0x38) = FUN_10aa83d38;
    param_1 = param_1 + -0x38;
    puVar7 = param_1;
    FUN_10aa83c1c();
    iVar6 = (int)puVar7;
    unaff_x29 = *(undefined8 *)(puVar5 + -0x40);
    unaff_x30 = *(undefined8 *)(puVar5 + -0x38);
    unaff_x20 = *(undefined8 *)(puVar5 + -0x50);
    unaff_x19 = *(undefined8 *)(puVar5 + -0x48);
    puVar5 = puVar5 + -0x30;
  }
  puVar1 = puVar8 + (long)iVar6 * 2;
  if (puVar2 != puVar1) {
    lVar3 = (long)puVar2 - (long)(puVar1 + 2);
    if (lVar3 != 0) {
      _memmove(puVar1,puVar1 + 2,lVar3);
      puVar8 = *(undefined4 **)(param_1 + 8);
    }
    puVar1 = (undefined4 *)((long)puVar1 + lVar3);
    *(undefined4 **)(param_1 + 0x10) = puVar1;
    if (puVar8 == puVar1) {
      uVar9 = 0;
      uVar10 = 0x7f7fffff;
    }
    else {
      uVar9 = puVar1[-2];
      uVar10 = *puVar8;
    }
    *(undefined4 *)(param_1 + 0x20) = uVar9;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = uVar10;
    *(undefined4 *)(param_1 + 0x34) = 0;
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa83d2c);
  (*pcVar4)();
}



/* Entry: 10aa83c1c; end: 10aa83c93;  */

int FUN_10aa83c1c(float param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  
  lVar4 = param_2;
  FUN_10a0cae78();
  lVar1 = *(long *)(param_2 + 8);
  uVar5 = *(long *)(param_2 + 0x10) - lVar1 >> 3;
  iVar3 = (int)lVar4;
  if (((ulong)(long)iVar3 < uVar5) && ((ulong)(lVar4 >> 0x20) < uVar5)) {
    if (ABS(*(float *)(lVar1 + (lVar4 >> 0x20) * 8) - param_1) <=
        ABS(*(float *)(lVar1 + (long)iVar3 * 8) - param_1)) {
      iVar3 = (int)((ulong)lVar4 >> 0x20);
    }
    return iVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10aa83c94);
  (*pcVar2)();
}



/* Entry: 10aa83c94; end: 10aa83d37;  */

void FUN_10aa83c94(undefined *param_1,ulong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined4 uVar7;
  undefined4 uVar8;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    puVar6 = *(undefined4 **)(param_1 + 8);
    puVar2 = *(undefined4 **)(param_1 + 0x10);
    if (param_2 < (ulong)((long)puVar2 - (long)puVar6 >> 3)) break;
    param_1 = &UNK_10f68d56a;
    FUN_10a00946c();
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x40) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x38) = FUN_10aa83d38;
    param_1 = param_1 + -0x38;
    puVar5 = param_1;
    FUN_10aa83c1c();
    param_2 = (ulong)(int)puVar5;
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x40);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x38);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x50);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x48);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
  }
  puVar1 = puVar6 + param_2 * 2;
  if (puVar2 != puVar1) {
    lVar3 = (long)puVar2 - (long)(puVar1 + 2);
    if (lVar3 != 0) {
      _memmove(puVar1,puVar1 + 2,lVar3);
      puVar6 = *(undefined4 **)(param_1 + 8);
    }
    puVar1 = (undefined4 *)((long)puVar1 + lVar3);
    *(undefined4 **)(param_1 + 0x10) = puVar1;
    if (puVar6 == puVar1) {
      uVar7 = 0;
      uVar8 = 0x7f7fffff;
    }
    else {
      uVar7 = puVar1[-2];
      uVar8 = *puVar6;
    }
    *(undefined4 *)(param_1 + 0x20) = uVar7;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = uVar8;
    *(undefined4 *)(param_1 + 0x34) = 0;
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa83d2c);
  (*pcVar4)();
}



/* Entry: 10aa83d38; end: 10aa83dcf;  */

void FUN_10aa83d38(undefined *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  code *pcVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined4 uVar7;
  undefined4 uVar8;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    iVar6 = (int)param_1 + -0x38;
    FUN_10aa83c1c();
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x20);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    puVar5 = *(undefined4 **)(param_1 + -0x30);
    puVar2 = *(undefined4 **)(param_1 + -0x28);
    if ((ulong)(long)iVar6 < (ulong)((long)puVar2 - (long)puVar5 >> 3)) break;
    param_1 = &UNK_10f68d56a;
    unaff_x30 = FUN_10aa83d38;
    FUN_10a00946c();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
  }
  puVar1 = puVar5 + (long)iVar6 * 2;
  if (puVar2 != puVar1) {
    lVar3 = (long)puVar2 - (long)(puVar1 + 2);
    if (lVar3 != 0) {
      _memmove(puVar1,puVar1 + 2,lVar3);
      puVar5 = *(undefined4 **)(param_1 + -0x30);
    }
    puVar1 = (undefined4 *)((long)puVar1 + lVar3);
    *(undefined4 **)(param_1 + -0x28) = puVar1;
    if (puVar5 == puVar1) {
      uVar7 = 0;
      uVar8 = 0x7f7fffff;
    }
    else {
      uVar7 = puVar1[-2];
      uVar8 = *puVar5;
    }
    *(undefined4 *)(param_1 + -0x18) = uVar7;
    *(undefined4 *)(param_1 + -0x14) = 0;
    *(undefined4 *)(param_1 + -0x10) = uVar8;
    *(undefined4 *)(param_1 + -4) = 0;
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa83d2c);
  (*pcVar4)();
}



/* Entry: 10aa83dd0; end: 10aa83e47;  */

int FUN_10aa83dd0(float param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  
  lVar4 = param_2;
  func_0x00010a14431c();
  lVar1 = *(long *)(param_2 + 8);
  uVar5 = *(long *)(param_2 + 0x10) - lVar1 >> 3;
  iVar3 = (int)lVar4;
  if (((ulong)(long)iVar3 < uVar5) && ((ulong)(lVar4 >> 0x20) < uVar5)) {
    if (ABS(*(float *)(lVar1 + (lVar4 >> 0x20) * 8) - param_1) <=
        ABS(*(float *)(lVar1 + (long)iVar3 * 8) - param_1)) {
      iVar3 = (int)((ulong)lVar4 >> 0x20);
    }
    return iVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10aa83e48);
  (*pcVar2)();
}



/* Entry: 10aa83e48; end: 10aa83eeb;  */

void FUN_10aa83e48(long param_1,float *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float *pfVar3;
  long lVar4;
  code *pcVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *puVar9;
  ulong uVar10;
  ulong uVar11;
  float *pfVar12;
  ulong uVar13;
  float *pfVar14;
  float *pfVar15;
  long lVar16;
  long *plVar17;
  long unaff_x23;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  
  puVar9 = *(undefined4 **)(param_1 + 8);
  puVar2 = *(undefined4 **)(param_1 + 0x10);
  if (param_2 < (float *)((long)puVar2 - (long)puVar9 >> 3)) {
    puVar1 = puVar9 + (long)param_2 * 2;
    if (puVar2 == puVar1) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10aa83ee0);
      (*pcVar5)();
    }
    lVar4 = (long)puVar2 - (long)(puVar1 + 2);
    if (lVar4 != 0) {
      _memmove(puVar1,puVar1 + 2,lVar4);
      puVar9 = *(undefined4 **)(param_1 + 8);
    }
    puVar1 = (undefined4 *)((long)puVar1 + lVar4);
    *(undefined4 **)(param_1 + 0x10) = puVar1;
    if (puVar9 == puVar1) {
      uVar21 = 0;
      uVar22 = 0x7f7fffff;
    }
    else {
      uVar21 = puVar1[-2];
      uVar22 = *puVar9;
    }
    *(undefined4 *)(param_1 + 0x20) = uVar21;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = uVar22;
    *(undefined4 *)(param_1 + 0x34) = 0;
    return;
  }
  puVar6 = &UNK_10f68d56a;
  FUN_10a00946c();
  plVar17 = (long *)(puVar6 + 8);
  pfVar12 = (float *)*plVar17;
  pfVar3 = *(float **)(puVar6 + 0x10);
  uVar8 = (long)pfVar3 - (long)pfVar12 >> 3;
  pfVar15 = pfVar3;
  if ((long)pfVar3 - (long)pfVar12 != 0) {
    uVar11 = uVar8;
    pfVar14 = pfVar12;
    do {
      uVar13 = uVar11 >> 1;
      pfVar15 = pfVar14 + uVar13 * 2 + 2;
      uVar11 = uVar11 + (uVar11 >> 1 ^ 0xffffffffffffffff);
      if (*param_2 <= pfVar14[uVar13 * 2]) {
        pfVar15 = pfVar14;
        uVar11 = uVar13;
      }
      pfVar14 = pfVar15;
    } while (uVar11 != 0);
  }
  if (pfVar3 < *(float **)(puVar6 + 0x18)) {
    if (pfVar15 == pfVar3) {
      *(long *)pfVar3 = *(long *)param_2;
      *(float **)(puVar6 + 0x10) = pfVar3 + 2;
    }
    else {
      pfVar12 = pfVar3;
      if (pfVar3 + -2 < pfVar3) {
        *(long *)pfVar3 = *(long *)(pfVar3 + -2);
        pfVar12 = pfVar3 + 2;
      }
      *(float **)(puVar6 + 0x10) = pfVar12;
      if (pfVar3 != pfVar15 + 2) {
        _memmove(pfVar15 + 2,pfVar15);
        pfVar12 = *(float **)(puVar6 + 0x10);
      }
      if (pfVar12 < pfVar15) goto LAB_10aa8412c;
      lVar4 = 8;
      if (pfVar12 <= param_2 || param_2 < pfVar15) {
        lVar4 = 0;
      }
      *(long *)pfVar15 = *(long *)((long)param_2 + lVar4);
    }
  }
  else {
    uVar8 = uVar8 + 1;
    if (uVar8 >> 0x3d != 0) {
      FUN_10a107b28();
      if (unaff_x23 != 0) {
        __ZdlPv();
      }
      __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010aa8416c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_2 + 0x28))
                (param_2,&PTR_DAT_110c3eb90,*(long *)(puVar6 + 8),
                 *(long *)(puVar6 + 0x10) - *(long *)(puVar6 + 8));
      return;
    }
    uVar13 = (long)pfVar15 - (long)pfVar12;
    uVar10 = (long)*(float **)(puVar6 + 0x18) - (long)pfVar12;
    uVar11 = (long)uVar10 >> 2;
    if (uVar11 <= uVar8) {
      uVar11 = uVar8;
    }
    if (0x7ffffffffffffff7 < uVar10) {
      uVar11 = 0x1fffffffffffffff;
    }
    if (uVar11 == 0) {
      plVar18 = (long *)0x0;
      uVar11 = 0;
    }
    else {
      plVar18 = plVar17;
      FUN_10a107b3c();
      uVar11 = uVar11 << 3;
    }
    plVar20 = (long *)((long)plVar18 + uVar13);
    plVar19 = (long *)((long)plVar18 + uVar11);
    if (uVar13 == uVar11) {
      if ((long)uVar13 < 1) {
        uVar13 = (long)uVar13 >> 2;
        if (pfVar15 == pfVar12) {
          uVar13 = 1;
        }
        uVar8 = uVar13;
        FUN_10a107b3c();
        plVar20 = plVar17 + (uVar13 >> 2);
        plVar19 = plVar17 + uVar8;
        if (plVar18 != (long *)0x0) {
          __ZdlPv(plVar18);
        }
      }
      else {
        plVar20 = (long *)((long)plVar20 - ((uVar13 >> 1) + 4 & 0xfffffffffffffff8));
      }
    }
    *plVar20 = *(long *)param_2;
    _memcpy(plVar20 + 1,pfVar15,*(long *)(puVar6 + 0x10) - (long)pfVar15);
    lVar4 = *(long *)(puVar6 + 0x10);
    *(float **)(puVar6 + 0x10) = pfVar15;
    lVar16 = (long)plVar20 - ((long)pfVar15 - *(long *)(puVar6 + 8));
    _memcpy(lVar16);
    lVar7 = *(long *)(puVar6 + 8);
    *(long *)(puVar6 + 8) = lVar16;
    *(undefined **)(puVar6 + 0x10) = (undefined *)((long)(plVar20 + 1) + (lVar4 - (long)pfVar15));
    *(long **)(puVar6 + 0x18) = plVar19;
    if (lVar7 != 0) {
      __ZdlPv();
    }
  }
  if (*(undefined4 **)(puVar6 + 8) != *(undefined4 **)(puVar6 + 0x10)) {
    *(undefined4 *)(puVar6 + 0x20) = (*(undefined4 **)(puVar6 + 0x10))[-2];
    uVar22 = **(undefined4 **)(puVar6 + 8);
    *(undefined4 *)(puVar6 + 0x24) = 0;
    *(undefined4 *)(puVar6 + 0x28) = uVar22;
    *(undefined4 *)(puVar6 + 0x34) = 0;
    return;
  }
LAB_10aa8412c:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10aa84130);
  (*pcVar5)();
}



/* Entry: 10aa83eec; end: 10aa8414b;  */

void FUN_10aa83eec(long param_1,float *param_2)

{
  long lVar1;
  float *pfVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  float *pfVar8;
  ulong uVar9;
  float *pfVar10;
  float *pfVar11;
  long lVar12;
  long *plVar13;
  long unaff_x23;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined4 uVar17;
  
  plVar13 = (long *)(param_1 + 8);
  pfVar8 = (float *)*plVar13;
  pfVar2 = *(float **)(param_1 + 0x10);
  uVar5 = (long)pfVar2 - (long)pfVar8 >> 3;
  pfVar11 = pfVar2;
  if ((long)pfVar2 - (long)pfVar8 != 0) {
    uVar7 = uVar5;
    pfVar10 = pfVar8;
    do {
      uVar9 = uVar7 >> 1;
      pfVar11 = pfVar10 + uVar9 * 2 + 2;
      uVar7 = uVar7 + (uVar7 >> 1 ^ 0xffffffffffffffff);
      if (*param_2 <= pfVar10[uVar9 * 2]) {
        pfVar11 = pfVar10;
        uVar7 = uVar9;
      }
      pfVar10 = pfVar11;
    } while (uVar7 != 0);
  }
  if (pfVar2 < *(float **)(param_1 + 0x18)) {
    if (pfVar11 == pfVar2) {
      *(long *)pfVar2 = *(long *)param_2;
      *(float **)(param_1 + 0x10) = pfVar2 + 2;
    }
    else {
      pfVar8 = pfVar2;
      if (pfVar2 + -2 < pfVar2) {
        *(long *)pfVar2 = *(long *)(pfVar2 + -2);
        pfVar8 = pfVar2 + 2;
      }
      *(float **)(param_1 + 0x10) = pfVar8;
      if (pfVar2 != pfVar11 + 2) {
        _memmove(pfVar11 + 2,pfVar11);
        pfVar8 = *(float **)(param_1 + 0x10);
      }
      if (pfVar8 < pfVar11) goto LAB_10aa8412c;
      lVar1 = 8;
      if (pfVar8 <= param_2 || param_2 < pfVar11) {
        lVar1 = 0;
      }
      *(long *)pfVar11 = *(long *)((long)param_2 + lVar1);
    }
  }
  else {
    uVar5 = uVar5 + 1;
    if (uVar5 >> 0x3d != 0) {
      FUN_10a107b28();
      if (unaff_x23 != 0) {
        __ZdlPv();
      }
      __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010aa8416c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_2 + 0x28))
                (param_2,&PTR_DAT_110c3eb90,*(long *)(param_1 + 8),
                 *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8));
      return;
    }
    uVar9 = (long)pfVar11 - (long)pfVar8;
    uVar6 = (long)*(float **)(param_1 + 0x18) - (long)pfVar8;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar5) {
      uVar7 = uVar5;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      plVar14 = (long *)0x0;
      uVar7 = 0;
    }
    else {
      plVar14 = plVar13;
      FUN_10a107b3c();
      uVar7 = uVar7 << 3;
    }
    plVar16 = (long *)((long)plVar14 + uVar9);
    plVar15 = (long *)((long)plVar14 + uVar7);
    if (uVar9 == uVar7) {
      if ((long)uVar9 < 1) {
        uVar9 = (long)uVar9 >> 2;
        if (pfVar11 == pfVar8) {
          uVar9 = 1;
        }
        uVar5 = uVar9;
        FUN_10a107b3c();
        plVar16 = plVar13 + (uVar9 >> 2);
        plVar15 = plVar13 + uVar5;
        if (plVar14 != (long *)0x0) {
          __ZdlPv(plVar14);
        }
      }
      else {
        plVar16 = (long *)((long)plVar16 - ((uVar9 >> 1) + 4 & 0xfffffffffffffff8));
      }
    }
    *plVar16 = *(long *)param_2;
    _memcpy(plVar16 + 1,pfVar11,*(long *)(param_1 + 0x10) - (long)pfVar11);
    lVar1 = *(long *)(param_1 + 0x10);
    *(float **)(param_1 + 0x10) = pfVar11;
    lVar12 = (long)plVar16 - ((long)pfVar11 - *(long *)(param_1 + 8));
    _memcpy(lVar12);
    lVar4 = *(long *)(param_1 + 8);
    *(long *)(param_1 + 8) = lVar12;
    *(long *)(param_1 + 0x10) = (long)(plVar16 + 1) + (lVar1 - (long)pfVar11);
    *(long **)(param_1 + 0x18) = plVar15;
    if (lVar4 != 0) {
      __ZdlPv();
    }
  }
  if (*(undefined4 **)(param_1 + 8) != *(undefined4 **)(param_1 + 0x10)) {
    *(undefined4 *)(param_1 + 0x20) = (*(undefined4 **)(param_1 + 0x10))[-2];
    uVar17 = **(undefined4 **)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = uVar17;
    *(undefined4 *)(param_1 + 0x34) = 0;
    return;
  }
LAB_10aa8412c:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10aa84130);
  (*pcVar3)();
}



/* Entry: 10aa8414c; end: 10aa84193;  */

void FUN_10aa8414c(long param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010aa8416c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x28))
            (param_2,&PTR_DAT_110c3eb90,*(long *)(param_1 + 8),
             *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8));
  return;
}



/* Entry: 10aa84194; end: 10aa8437f;  */

void FUN_10aa84194(long param_1,long *param_2)

{
  code *pcVar1;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  byte bStack_70;
  undefined7 uStack_68;
  undefined4 uStack_61;
  undefined1 uStack_5d;
  undefined1 uStack_51;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  (**(code **)(*param_2 + 0x1d8))(&uStack_80,param_2,&PTR_DAT_110c3eb90);
  if (bStack_70 == 1) {
    if (uStack_78 == 0) {
      lStack_98 = 0;
      lStack_90 = 0;
      uStack_88 = 0;
LAB_10aa84230:
      func_0x00010aa83d64(param_1,&lStack_98);
      if (lStack_98 != 0) {
        lStack_90 = lStack_98;
        __ZdlPv();
      }
      return;
    }
    if (uStack_78 < 8 || (uStack_78 & 7) != 0) {
      uStack_51 = 0xb;
      uStack_68 = 0x6974616d696e61;
      uStack_61 = 0x76746e6f;
      uStack_5d = 0;
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (auStack_50,&UNK_10f6854a8,&uStack_68);
      FUN_10a012db0(auStack_38,auStack_50,&UNK_10f6854b4);
      FUN_10a0029c0(auStack_38);
    }
    else {
      FUN_10a85c588(&lStack_98,uStack_78 >> 3);
      if ((bStack_70 & 1) != 0) {
        _memcpy(lStack_98,uStack_80,uStack_78);
        goto LAB_10aa84230;
      }
    }
  }
  else {
    uStack_51 = 0xb;
    uStack_68 = 0x6974616d696e61;
    uStack_61 = 0x76746e6f;
    uStack_5d = 0;
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_50,&UNK_10f6854a8,&uStack_68);
    FUN_10a012db0(auStack_38,auStack_50,&UNK_10f63cc0e);
    FUN_10a0029c0(auStack_38);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10aa84314);
  (*pcVar1)();
}



/* Entry: 10aa84380; end: 10aa84387;  */

void FUN_10aa84380(long param_1,long *param_2)

{
  code *pcVar1;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  byte bStack_70;
  undefined7 uStack_68;
  undefined4 uStack_61;
  undefined1 uStack_5d;
  undefined1 uStack_51;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  *(undefined8 *)(param_1 + -0x28) = *(undefined8 *)(param_1 + -0x30);
  *(undefined8 *)(param_1 + -0x18) = 0;
  *(undefined4 *)(param_1 + -0x10) = 0x7f7fffff;
  *(undefined4 *)(param_1 + -4) = 0;
  (**(code **)(*param_2 + 0x1d8))(&uStack_80,param_2,&PTR_DAT_110c3eb90);
  if (bStack_70 == 1) {
    if (uStack_78 == 0) {
      lStack_98 = 0;
      lStack_90 = 0;
      uStack_88 = 0;
LAB_10aa84230:
      func_0x00010aa83d64(param_1 + -0x38,&lStack_98);
      if (lStack_98 != 0) {
        lStack_90 = lStack_98;
        __ZdlPv();
      }
      return;
    }
    if (uStack_78 < 8 || (uStack_78 & 7) != 0) {
      uStack_51 = 0xb;
      uStack_68 = 0x6974616d696e61;
      uStack_61 = 0x76746e6f;
      uStack_5d = 0;
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (auStack_50,&UNK_10f6854a8,&uStack_68);
      FUN_10a012db0(auStack_38,auStack_50,&UNK_10f6854b4);
      FUN_10a0029c0(auStack_38);
    }
    else {
      FUN_10a85c588(&lStack_98,uStack_78 >> 3);
      if ((bStack_70 & 1) != 0) {
        _memcpy(lStack_98,uStack_80,uStack_78);
        goto LAB_10aa84230;
      }
    }
  }
  else {
    uStack_51 = 0xb;
    uStack_68 = 0x6974616d696e61;
    uStack_61 = 0x76746e6f;
    uStack_5d = 0;
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_50,&UNK_10f6854a8,&uStack_68);
    FUN_10a012db0(auStack_38,auStack_50,&UNK_10f63cc0e);
    FUN_10a0029c0(auStack_38);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10aa84314);
  (*pcVar1)();
}



/* Entry: 10aa84388; end: 10aa844e3;  */

void FUN_10aa84388(undefined8 param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined1 *puStack_b0;
  ulong uStack_a8;
  byte bStack_99;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined8 auStack_58 [3];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  lVar1 = *param_2;
  if (param_2[1] - lVar1 != 0x50) {
    puStack_98 = &UNK_10f68d3a0;
    uStack_90 = 0x1d;
    func_0x0001098998d4(auStack_88,&puStack_98);
    FUN_109feb280(auStack_70,&UNK_10f68cf8a,auStack_88);
    FUN_10a012db0(auStack_58,auStack_70,&UNK_10f68cfac);
    __ZNSt3__19to_stringEi(&puStack_b0,1);
    if (-1 < (char)bStack_99) {
      uStack_a8 = (ulong)bStack_99;
      puStack_b0 = (undefined1 *)&puStack_b0;
    }
    puVar3 = auStack_58;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar3,puStack_b0,uStack_a8);
    uStack_38 = puVar3[1];
    uStack_40 = *puVar3;
    uStack_30 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    FUN_10a0029c0(&uStack_40);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aa84468);
    (*pcVar2)();
  }
  uStack_40 = CONCAT44((int)*(float *)(lVar1 + 0x1c),*(undefined4 *)(lVar1 + 0x18));
  FUN_10aa83eec(param_1,&uStack_40);
  return;
}



/* Entry: 10aa844e4; end: 10aa844eb;  */

void FUN_10aa844e4(long param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined1 *puStack_b0;
  ulong uStack_a8;
  byte bStack_99;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined8 auStack_58 [3];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  lVar1 = *param_2;
  if (param_2[1] - lVar1 != 0x50) {
    puStack_98 = &UNK_10f68d3a0;
    uStack_90 = 0x1d;
    func_0x0001098998d4(auStack_88,&puStack_98);
    FUN_109feb280(auStack_70,&UNK_10f68cf8a,auStack_88);
    FUN_10a012db0(auStack_58,auStack_70,&UNK_10f68cfac);
    __ZNSt3__19to_stringEi(&puStack_b0,1);
    if (-1 < (char)bStack_99) {
      uStack_a8 = (ulong)bStack_99;
      puStack_b0 = (undefined1 *)&puStack_b0;
    }
    puVar3 = auStack_58;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar3,puStack_b0,uStack_a8);
    uStack_38 = puVar3[1];
    uStack_40 = *puVar3;
    uStack_30 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    FUN_10a0029c0(&uStack_40);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10aa84468);
    (*pcVar2)();
  }
  uStack_40 = CONCAT44((int)*(float *)(lVar1 + 0x1c),*(undefined4 *)(lVar1 + 0x18));
  FUN_10aa83eec(param_1 + -0x38,&uStack_40);
  return;
}



/* Entry: 10aa844ec; end: 10aa8453f;  */

void FUN_10aa844ec(long param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float *pfVar3;
  code *pcVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  float *pfVar9;
  undefined4 *puVar10;
  ulong uVar11;
  ulong uVar12;
  float *pfVar13;
  ulong uVar14;
  float *pfVar15;
  float *pfVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  long unaff_x23;
  long *plVar20;
  long *plVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  
  lVar7 = param_1;
  FUN_10aa83dd0();
  pfVar9 = (float *)(long)(int)lVar7;
  puVar10 = *(undefined4 **)(param_1 + 8);
  puVar2 = *(undefined4 **)(param_1 + 0x10);
  if (pfVar9 < (float *)((long)puVar2 - (long)puVar10 >> 3)) {
    puVar1 = puVar10 + (long)pfVar9 * 2;
    if (puVar2 == puVar1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa83ee0);
      (*pcVar4)();
    }
    lVar7 = (long)puVar2 - (long)(puVar1 + 2);
    if (lVar7 != 0) {
      _memmove(puVar1,puVar1 + 2,lVar7);
      puVar10 = *(undefined4 **)(param_1 + 8);
    }
    puVar1 = (undefined4 *)((long)puVar1 + lVar7);
    *(undefined4 **)(param_1 + 0x10) = puVar1;
    if (puVar10 == puVar1) {
      uVar22 = 0;
      uVar23 = 0x7f7fffff;
    }
    else {
      uVar22 = puVar1[-2];
      uVar23 = *puVar10;
    }
    *(undefined4 *)(param_1 + 0x20) = uVar22;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = uVar23;
    *(undefined4 *)(param_1 + 0x34) = 0;
    return;
  }
  puVar5 = &UNK_10f68d56a;
  FUN_10a00946c();
  plVar18 = (long *)(puVar5 + 8);
  pfVar13 = (float *)*plVar18;
  pfVar3 = *(float **)(puVar5 + 0x10);
  uVar8 = (long)pfVar3 - (long)pfVar13 >> 3;
  pfVar16 = pfVar3;
  if ((long)pfVar3 - (long)pfVar13 != 0) {
    uVar12 = uVar8;
    pfVar15 = pfVar13;
    do {
      uVar14 = uVar12 >> 1;
      pfVar16 = pfVar15 + uVar14 * 2 + 2;
      uVar12 = uVar12 + (uVar12 >> 1 ^ 0xffffffffffffffff);
      if (*pfVar9 <= pfVar15[uVar14 * 2]) {
        pfVar16 = pfVar15;
        uVar12 = uVar14;
      }
      pfVar15 = pfVar16;
    } while (uVar12 != 0);
  }
  if (pfVar3 < *(float **)(puVar5 + 0x18)) {
    if (pfVar16 == pfVar3) {
      *(long *)pfVar3 = *(long *)pfVar9;
      *(float **)(puVar5 + 0x10) = pfVar3 + 2;
    }
    else {
      pfVar13 = pfVar3;
      if (pfVar3 + -2 < pfVar3) {
        *(long *)pfVar3 = *(long *)(pfVar3 + -2);
        pfVar13 = pfVar3 + 2;
      }
      *(float **)(puVar5 + 0x10) = pfVar13;
      if (pfVar3 != pfVar16 + 2) {
        _memmove(pfVar16 + 2,pfVar16);
        pfVar13 = *(float **)(puVar5 + 0x10);
      }
      if (pfVar13 < pfVar16) goto LAB_10aa8412c;
      lVar7 = 8;
      if (pfVar13 <= pfVar9 || pfVar9 < pfVar16) {
        lVar7 = 0;
      }
      *(long *)pfVar16 = *(long *)((long)pfVar9 + lVar7);
    }
  }
  else {
    uVar8 = uVar8 + 1;
    if (uVar8 >> 0x3d != 0) {
      FUN_10a107b28();
      if (unaff_x23 != 0) {
        __ZdlPv();
      }
      __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010aa8416c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)pfVar9 + 0x28))
                (pfVar9,&PTR_DAT_110c3eb90,*(long *)(puVar5 + 8),
                 *(long *)(puVar5 + 0x10) - *(long *)(puVar5 + 8));
      return;
    }
    uVar14 = (long)pfVar16 - (long)pfVar13;
    uVar11 = (long)*(float **)(puVar5 + 0x18) - (long)pfVar13;
    uVar12 = (long)uVar11 >> 2;
    if (uVar12 <= uVar8) {
      uVar12 = uVar8;
    }
    if (0x7ffffffffffffff7 < uVar11) {
      uVar12 = 0x1fffffffffffffff;
    }
    if (uVar12 == 0) {
      plVar19 = (long *)0x0;
      uVar12 = 0;
    }
    else {
      plVar19 = plVar18;
      FUN_10a107b3c();
      uVar12 = uVar12 << 3;
    }
    plVar21 = (long *)((long)plVar19 + uVar14);
    plVar20 = (long *)((long)plVar19 + uVar12);
    if (uVar14 == uVar12) {
      if ((long)uVar14 < 1) {
        uVar14 = (long)uVar14 >> 2;
        if (pfVar16 == pfVar13) {
          uVar14 = 1;
        }
        uVar8 = uVar14;
        FUN_10a107b3c();
        plVar21 = plVar18 + (uVar14 >> 2);
        plVar20 = plVar18 + uVar8;
        if (plVar19 != (long *)0x0) {
          __ZdlPv(plVar19);
        }
      }
      else {
        plVar21 = (long *)((long)plVar21 - ((uVar14 >> 1) + 4 & 0xfffffffffffffff8));
      }
    }
    *plVar21 = *(long *)pfVar9;
    _memcpy(plVar21 + 1,pfVar16,*(long *)(puVar5 + 0x10) - (long)pfVar16);
    lVar7 = *(long *)(puVar5 + 0x10);
    *(float **)(puVar5 + 0x10) = pfVar16;
    lVar17 = (long)plVar21 - ((long)pfVar16 - *(long *)(puVar5 + 8));
    _memcpy(lVar17);
    lVar6 = *(long *)(puVar5 + 8);
    *(long *)(puVar5 + 8) = lVar17;
    *(undefined **)(puVar5 + 0x10) = (undefined *)((long)(plVar21 + 1) + (lVar7 - (long)pfVar16));
    *(long **)(puVar5 + 0x18) = plVar20;
    if (lVar6 != 0) {
      __ZdlPv();
    }
  }
  if (*(undefined4 **)(puVar5 + 8) != *(undefined4 **)(puVar5 + 0x10)) {
    *(undefined4 *)(puVar5 + 0x20) = (*(undefined4 **)(puVar5 + 0x10))[-2];
    uVar23 = **(undefined4 **)(puVar5 + 8);
    *(undefined4 *)(puVar5 + 0x24) = 0;
    *(undefined4 *)(puVar5 + 0x28) = uVar23;
    *(undefined4 *)(puVar5 + 0x34) = 0;
    return;
  }
LAB_10aa8412c:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa84130);
  (*pcVar4)();
}



/* Entry: 10aa84540; end: 10aa8489b;  */

undefined1  [16] FUN_10aa84540(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x19;
  auVar1._0_8_ = &UNK_10f68d415;
  return auVar1;
}



/* Entry: 10aa8489c; end: 10aa84903;  */

bool FUN_10aa8489c(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x22) {
    iVar2 = 0xf661fc4;
    _memcmp(&UNK_10f661fc4,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0x19) &&
     (((*param_2 == 0x6c462e7465737341 && param_2[1] == 0x616d696e4174616f) &&
      param_2[2] == 0x636172546e6f6974) && (char)param_2[3] == 'k')) {
    return true;
  }
  if ((param_3 == 0x14) &&
     ((*param_2 == 0x6e412e7465737341 && param_2[1] == 0x546e6f6974616d69) &&
      (int)param_2[2] == 0x6b636172)) {
    return true;
  }
  if ((param_3 == 5) && ((int)*param_2 == 0x65737341 && *(char *)((long)param_2 + 4) == 't')) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x13) {
      return false;
    }
    bVar1 = (*param_2 == 0x7a696c6169726553 && param_2[1] == 0x68746957656c6261) &&
            *(long *)((long)param_2 + 0xb) == 0x4449556874695765;
  }
  return bVar1;
}



/* Entry: 10aa84904; end: 10aa8492b;  */

bool FUN_10aa84904(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x22) {
    iVar2 = 0xf661fc4;
    _memcmp(&UNK_10f661fc4,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0x19) &&
     (((*param_2 == 0x6c462e7465737341 && param_2[1] == 0x616d696e4174616f) &&
      param_2[2] == 0x636172546e6f6974) && (char)param_2[3] == 'k')) {
    return true;
  }
  if ((param_3 == 0x14) &&
     ((*param_2 == 0x6e412e7465737341 && param_2[1] == 0x546e6f6974616d69) &&
      (int)param_2[2] == 0x6b636172)) {
    return true;
  }
  if ((param_3 == 5) && ((int)*param_2 == 0x65737341 && *(char *)((long)param_2 + 4) == 't')) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x13) {
      return false;
    }
    bVar1 = (*param_2 == 0x7a696c6169726553 && param_2[1] == 0x68746957656c6261) &&
            *(long *)((long)param_2 + 0xb) == 0x4449556874695765;
  }
  return bVar1;
}



/* Entry: 10aa8492c; end: 10aa84993;  */

bool FUN_10aa8492c(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x21) {
    iVar2 = 0xf662010;
    _memcmp(&UNK_10f662010,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0x18) &&
     ((*param_2 == 0x65562e7465737341 && param_2[1] == 0x74616d696e413263) &&
      param_2[2] == 0x6b636172546e6f69)) {
    return true;
  }
  if ((param_3 == 0x14) &&
     ((*param_2 == 0x6e412e7465737341 && param_2[1] == 0x546e6f6974616d69) &&
      (int)param_2[2] == 0x6b636172)) {
    return true;
  }
  if ((param_3 == 5) && ((int)*param_2 == 0x65737341 && *(char *)((long)param_2 + 4) == 't')) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x13) {
      return false;
    }
    bVar1 = (*param_2 == 0x7a696c6169726553 && param_2[1] == 0x68746957656c6261) &&
            *(long *)((long)param_2 + 0xb) == 0x4449556874695765;
  }
  return bVar1;
}



/* Entry: 10aa84994; end: 10aa849bb;  */

bool FUN_10aa84994(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x21) {
    iVar2 = 0xf662010;
    _memcmp(&UNK_10f662010,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0x18) &&
     ((*param_2 == 0x65562e7465737341 && param_2[1] == 0x74616d696e413263) &&
      param_2[2] == 0x6b636172546e6f69)) {
    return true;
  }
  if ((param_3 == 0x14) &&
     ((*param_2 == 0x6e412e7465737341 && param_2[1] == 0x546e6f6974616d69) &&
      (int)param_2[2] == 0x6b636172)) {
    return true;
  }
  if ((param_3 == 5) && ((int)*param_2 == 0x65737341 && *(char *)((long)param_2 + 4) == 't')) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x13) {
      return false;
    }
    bVar1 = (*param_2 == 0x7a696c6169726553 && param_2[1] == 0x68746957656c6261) &&
            *(long *)((long)param_2 + 0xb) == 0x4449556874695765;
  }
  return bVar1;
}



/* Entry: 10aa849bc; end: 10aa84a23;  */

bool FUN_10aa849bc(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x21) {
    iVar2 = 0xf662032;
    _memcmp(&UNK_10f662032,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0x18) &&
     ((*param_2 == 0x65562e7465737341 && param_2[1] == 0x74616d696e413363) &&
      param_2[2] == 0x6b636172546e6f69)) {
    return true;
  }
  if ((param_3 == 0x14) &&
     ((*param_2 == 0x6e412e7465737341 && param_2[1] == 0x546e6f6974616d69) &&
      (int)param_2[2] == 0x6b636172)) {
    return true;
  }
  if ((param_3 == 5) && ((int)*param_2 == 0x65737341 && *(char *)((long)param_2 + 4) == 't')) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x13) {
      return false;
    }
    bVar1 = (*param_2 == 0x7a696c6169726553 && param_2[1] == 0x68746957656c6261) &&
            *(long *)((long)param_2 + 0xb) == 0x4449556874695765;
  }
  return bVar1;
}



/* Entry: 10aa84a24; end: 10aa84a4b;  */

bool FUN_10aa84a24(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x21) {
    iVar2 = 0xf662032;
    _memcmp(&UNK_10f662032,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0x18) &&
     ((*param_2 == 0x65562e7465737341 && param_2[1] == 0x74616d696e413363) &&
      param_2[2] == 0x6b636172546e6f69)) {
    return true;
  }
  if ((param_3 == 0x14) &&
     ((*param_2 == 0x6e412e7465737341 && param_2[1] == 0x546e6f6974616d69) &&
      (int)param_2[2] == 0x6b636172)) {
    return true;
  }
  if ((param_3 == 5) && ((int)*param_2 == 0x65737341 && *(char *)((long)param_2 + 4) == 't')) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x13) {
      return false;
    }
    bVar1 = (*param_2 == 0x7a696c6169726553 && param_2[1] == 0x68746957656c6261) &&
            *(long *)((long)param_2 + 0xb) == 0x4449556874695765;
  }
  return bVar1;
}



/* Entry: 10aa84a4c; end: 10aa84ab3;  */

bool FUN_10aa84a4c(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x21) {
    iVar2 = 0xf662070;
    _memcmp(&UNK_10f662070,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0x18) &&
     ((*param_2 == 0x65562e7465737341 && param_2[1] == 0x74616d696e413463) &&
      param_2[2] == 0x6b636172546e6f69)) {
    return true;
  }
  if ((param_3 == 0x14) &&
     ((*param_2 == 0x6e412e7465737341 && param_2[1] == 0x546e6f6974616d69) &&
      (int)param_2[2] == 0x6b636172)) {
    return true;
  }
  if ((param_3 == 5) && ((int)*param_2 == 0x65737341 && *(char *)((long)param_2 + 4) == 't')) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x13) {
      return false;
    }
    bVar1 = (*param_2 == 0x7a696c6169726553 && param_2[1] == 0x68746957656c6261) &&
            *(long *)((long)param_2 + 0xb) == 0x4449556874695765;
  }
  return bVar1;
}



/* Entry: 10aa84ab4; end: 10aa84adb;  */

bool FUN_10aa84ab4(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x21) {
    iVar2 = 0xf662070;
    _memcmp(&UNK_10f662070,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0x18) &&
     ((*param_2 == 0x65562e7465737341 && param_2[1] == 0x74616d696e413463) &&
      param_2[2] == 0x6b636172546e6f69)) {
    return true;
  }
  if ((param_3 == 0x14) &&
     ((*param_2 == 0x6e412e7465737341 && param_2[1] == 0x546e6f6974616d69) &&
      (int)param_2[2] == 0x6b636172)) {
    return true;
  }
  if ((param_3 == 5) && ((int)*param_2 == 0x65737341 && *(char *)((long)param_2 + 4) == 't')) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x13) {
      return false;
    }
    bVar1 = (*param_2 == 0x7a696c6169726553 && param_2[1] == 0x68746957656c6261) &&
            *(long *)((long)param_2 + 0xb) == 0x4449556874695765;
  }
  return bVar1;
}



/* Entry: 10aa84adc; end: 10aa84b43;  */

bool FUN_10aa84adc(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x27) {
    iVar2 = 0xf662092;
    _memcmp(&UNK_10f662092,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0x1e) &&
     (((*param_2 == 0x75512e7465737341 && param_2[1] == 0x6e6f696e72657461) &&
      param_2[2] == 0x6f6974616d696e41) && *(long *)((long)param_2 + 0x16) == 0x6b636172546e6f69)) {
    return true;
  }
  if ((param_3 == 0x14) &&
     ((*param_2 == 0x6e412e7465737341 && param_2[1] == 0x546e6f6974616d69) &&
      (int)param_2[2] == 0x6b636172)) {
    return true;
  }
  if ((param_3 == 5) && ((int)*param_2 == 0x65737341 && *(char *)((long)param_2 + 4) == 't')) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x13) {
      return false;
    }
    bVar1 = (*param_2 == 0x7a696c6169726553 && param_2[1] == 0x68746957656c6261) &&
            *(long *)((long)param_2 + 0xb) == 0x4449556874695765;
  }
  return bVar1;
}



/* Entry: 10aa84b44; end: 10aa84b6b;  */

bool FUN_10aa84b44(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x27) {
    iVar2 = 0xf662092;
    _memcmp(&UNK_10f662092,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0x1e) &&
     (((*param_2 == 0x75512e7465737341 && param_2[1] == 0x6e6f696e72657461) &&
      param_2[2] == 0x6f6974616d696e41) && *(long *)((long)param_2 + 0x16) == 0x6b636172546e6f69)) {
    return true;
  }
  if ((param_3 == 0x14) &&
     ((*param_2 == 0x6e412e7465737341 && param_2[1] == 0x546e6f6974616d69) &&
      (int)param_2[2] == 0x6b636172)) {
    return true;
  }
  if ((param_3 == 5) && ((int)*param_2 == 0x65737341 && *(char *)((long)param_2 + 4) == 't')) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x13) {
      return false;
    }
    bVar1 = (*param_2 == 0x7a696c6169726553 && param_2[1] == 0x68746957656c6261) &&
            *(long *)((long)param_2 + 0xb) == 0x4449556874695765;
  }
  return bVar1;
}



/* Entry: 10aa84b6c; end: 10aa84bd3;  */

bool FUN_10aa84b6c(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x24) {
    iVar2 = 0xf6620e1;
    _memcmp(&UNK_10f6620e1,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0x17) &&
     ((*param_2 == 0x6e492e7465737341 && param_2[1] == 0x6974616d696e4174) &&
      *(long *)((long)param_2 + 0xf) == 0x6b636172546e6f69)) {
    return true;
  }
  if ((param_3 == 0x14) &&
     ((*param_2 == 0x6e412e7465737341 && param_2[1] == 0x546e6f6974616d69) &&
      (int)param_2[2] == 0x6b636172)) {
    return true;
  }
  if ((param_3 == 5) && ((int)*param_2 == 0x65737341 && *(char *)((long)param_2 + 4) == 't')) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x13) {
      return false;
    }
    bVar1 = (*param_2 == 0x7a696c6169726553 && param_2[1] == 0x68746957656c6261) &&
            *(long *)((long)param_2 + 0xb) == 0x4449556874695765;
  }
  return bVar1;
}



/* Entry: 10aa84bd4; end: 10aa84bfb;  */

bool FUN_10aa84bd4(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x24) {
    iVar2 = 0xf6620e1;
    _memcmp(&UNK_10f6620e1,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0x17) &&
     ((*param_2 == 0x6e492e7465737341 && param_2[1] == 0x6974616d696e4174) &&
      *(long *)((long)param_2 + 0xf) == 0x6b636172546e6f69)) {
    return true;
  }
  if ((param_3 == 0x14) &&
     ((*param_2 == 0x6e412e7465737341 && param_2[1] == 0x546e6f6974616d69) &&
      (int)param_2[2] == 0x6b636172)) {
    return true;
  }
  if ((param_3 == 5) && ((int)*param_2 == 0x65737341 && *(char *)((long)param_2 + 4) == 't')) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x13) {
      return false;
    }
    bVar1 = (*param_2 == 0x7a696c6169726553 && param_2[1] == 0x68746957656c6261) &&
            *(long *)((long)param_2 + 0xb) == 0x4449556874695765;
  }
  return bVar1;
}



/* Entry: 10aa84bfc; end: 10aa84c63;  */

bool FUN_10aa84bfc(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x2a) {
    iVar2 = 0xf662106;
    _memcmp(&UNK_10f662106,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0x17) &&
     ((*param_2 == 0x6e492e7465737341 && param_2[1] == 0x6974616d696e4174) &&
      *(long *)((long)param_2 + 0xf) == 0x6b636172546e6f69)) {
    return true;
  }
  if ((param_3 == 0x14) &&
     ((*param_2 == 0x6e412e7465737341 && param_2[1] == 0x546e6f6974616d69) &&
      (int)param_2[2] == 0x6b636172)) {
    return true;
  }
  if ((param_3 == 5) && ((int)*param_2 == 0x65737341 && *(char *)((long)param_2 + 4) == 't')) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x13) {
      return false;
    }
    bVar1 = (*param_2 == 0x7a696c6169726553 && param_2[1] == 0x68746957656c6261) &&
            *(long *)((long)param_2 + 0xb) == 0x4449556874695765;
  }
  return bVar1;
}



/* Entry: 10aa84c64; end: 10aa84c8b;  */

bool FUN_10aa84c64(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x2a) {
    iVar2 = 0xf662106;
    _memcmp(&UNK_10f662106,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0x17) &&
     ((*param_2 == 0x6e492e7465737341 && param_2[1] == 0x6974616d696e4174) &&
      *(long *)((long)param_2 + 0xf) == 0x6b636172546e6f69)) {
    return true;
  }
  if ((param_3 == 0x14) &&
     ((*param_2 == 0x6e412e7465737341 && param_2[1] == 0x546e6f6974616d69) &&
      (int)param_2[2] == 0x6b636172)) {
    return true;
  }
  if ((param_3 == 5) && ((int)*param_2 == 0x65737341 && *(char *)((long)param_2 + 4) == 't')) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x13) {
      return false;
    }
    bVar1 = (*param_2 == 0x7a696c6169726553 && param_2[1] == 0x68746957656c6261) &&
            *(long *)((long)param_2 + 0xb) == 0x4449556874695765;
  }
  return bVar1;
}



/* Entry: 10aa84c8c; end: 10aa84cf3;  */

bool FUN_10aa84c8c(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x28) {
    iVar2 = 0xf661fe7;
    _memcmp(&UNK_10f661fe7,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0x19) &&
     (((*param_2 == 0x6c462e7465737341 && param_2[1] == 0x616d696e4174616f) &&
      param_2[2] == 0x636172546e6f6974) && (char)param_2[3] == 'k')) {
    return true;
  }
  if ((param_3 == 0x14) &&
     ((*param_2 == 0x6e412e7465737341 && param_2[1] == 0x546e6f6974616d69) &&
      (int)param_2[2] == 0x6b636172)) {
    return true;
  }
  if ((param_3 == 5) && ((int)*param_2 == 0x65737341 && *(char *)((long)param_2 + 4) == 't')) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x13) {
      return false;
    }
    bVar1 = (*param_2 == 0x7a696c6169726553 && param_2[1] == 0x68746957656c6261) &&
            *(long *)((long)param_2 + 0xb) == 0x4449556874695765;
  }
  return bVar1;
}



/* Entry: 10aa84cf4; end: 10aa84db7;  */

bool FUN_10aa84cf4(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x28) {
    iVar2 = 0xf661fe7;
    _memcmp(&UNK_10f661fe7,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0x19) &&
     (((*param_2 == 0x6c462e7465737341 && param_2[1] == 0x616d696e4174616f) &&
      param_2[2] == 0x636172546e6f6974) && (char)param_2[3] == 'k')) {
    return true;
  }
  if ((param_3 == 0x14) &&
     ((*param_2 == 0x6e412e7465737341 && param_2[1] == 0x546e6f6974616d69) &&
      (int)param_2[2] == 0x6b636172)) {
    return true;
  }
  if ((param_3 == 5) && ((int)*param_2 == 0x65737341 && *(char *)((long)param_2 + 4) == 't')) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x13) {
      return false;
    }
    bVar1 = (*param_2 == 0x7a696c6169726553 && param_2[1] == 0x68746957656c6261) &&
            *(long *)((long)param_2 + 0xb) == 0x4449556874695765;
  }
  return bVar1;
}



/* Entry: 10aa84db8; end: 10aa84e1f;  */

bool FUN_10aa84db8(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x26) {
    iVar2 = 0xf68d4cd;
    _memcmp(&UNK_10f68d4cd,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0x1e) &&
     (((*param_2 == 0x75512e7465737341 && param_2[1] == 0x6e6f696e72657461) &&
      param_2[2] == 0x6f6974616d696e41) && *(long *)((long)param_2 + 0x16) == 0x6b636172546e6f69)) {
    return true;
  }
  if ((param_3 == 0x14) &&
     ((*param_2 == 0x6e412e7465737341 && param_2[1] == 0x546e6f6974616d69) &&
      (int)param_2[2] == 0x6b636172)) {
    return true;
  }
  if ((param_3 == 5) && ((int)*param_2 == 0x65737341 && *(char *)((long)param_2 + 4) == 't')) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x13) {
      return false;
    }
    bVar1 = (*param_2 == 0x7a696c6169726553 && param_2[1] == 0x68746957656c6261) &&
            *(long *)((long)param_2 + 0xb) == 0x4449556874695765;
  }
  return bVar1;
}



/* Entry: 10aa84e20; end: 10aa84e27;  */

bool FUN_10aa84e20(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x26) {
    iVar2 = 0xf68d4cd;
    _memcmp(&UNK_10f68d4cd,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0x1e) &&
     (((*param_2 == 0x75512e7465737341 && param_2[1] == 0x6e6f696e72657461) &&
      param_2[2] == 0x6f6974616d696e41) && *(long *)((long)param_2 + 0x16) == 0x6b636172546e6f69)) {
    return true;
  }
  if ((param_3 == 0x14) &&
     ((*param_2 == 0x6e412e7465737341 && param_2[1] == 0x546e6f6974616d69) &&
      (int)param_2[2] == 0x6b636172)) {
    return true;
  }
  if ((param_3 == 5) && ((int)*param_2 == 0x65737341 && *(char *)((long)param_2 + 4) == 't')) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x13) {
      return false;
    }
    bVar1 = (*param_2 == 0x7a696c6169726553 && param_2[1] == 0x68746957656c6261) &&
            *(long *)((long)param_2 + 0xb) == 0x4449556874695765;
  }
  return bVar1;
}



/* Entry: 10aa84e28; end: 10aa84e7f;  */

void FUN_10aa84e28(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000001;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f68c0c1;
  uStack_30 = 0;
  uStack_38 = 0;
  uStack_20 = 0;
  uStack_28 = 0;
  uStack_18 = 0xffffffff;
  FUN_10aa84e80(param_1,&uStack_58);
  FUN_10aaa64d0();
  return;
}



/* Entry: 10aa84e80; end: 10aa84f57;  */

/* WARNING: Removing unreachable block (ram,0x00010aa84f18) */

undefined1  [16] FUN_10aa84e80(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f68d400,0x14);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10aaa63d4(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10aa84f58; end: 10aa84faf;  */

void FUN_10aa84f58(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000002;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f68c0c1;
  uStack_30 = 0;
  uStack_38 = 0;
  uStack_20 = 0;
  uStack_28 = 0;
  uStack_18 = 0xffffffff;
  FUN_10aa84fb0(param_1,&uStack_58);
  FUN_10aaa6688();
  return;
}



/* Entry: 10aa84fb0; end: 10aa85087;  */

/* WARNING: Removing unreachable block (ram,0x00010aa85048) */

undefined1  [16] FUN_10aa84fb0(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f68d415,0x19);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10aaa658c(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10aa85088; end: 10aa850df;  */

void FUN_10aa85088(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000002;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f68c0c1;
  uStack_30 = 0;
  uStack_38 = 0;
  uStack_20 = 0;
  uStack_28 = 0;
  uStack_18 = 0xffffffff;
  FUN_10aa850e0(param_1,&uStack_58);
  FUN_10aaa6840();
  return;
}



/* Entry: 10aa850e0; end: 10aa851b7;  */

/* WARNING: Removing unreachable block (ram,0x00010aa85178) */

undefined1  [16] FUN_10aa850e0(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f68d42f,0x18);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10aaa6744(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10aa851b8; end: 10aa8520f;  */

void FUN_10aa851b8(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000002;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f68c0c1;
  uStack_30 = 0;
  uStack_38 = 0;
  uStack_20 = 0;
  uStack_28 = 0;
  uStack_18 = 0xffffffff;
  FUN_10aa85210(param_1,&uStack_58);
  FUN_10aaa69f8();
  return;
}



/* Entry: 10aa85210; end: 10aa852e7;  */

/* WARNING: Removing unreachable block (ram,0x00010aa852a8) */

undefined1  [16] FUN_10aa85210(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f68d448,0x18);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10aaa68fc(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10aa852e8; end: 10aa8533f;  */

void FUN_10aa852e8(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000002;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f68c0c1;
  uStack_30 = 0;
  uStack_38 = 0;
  uStack_20 = 0;
  uStack_28 = 0;
  uStack_18 = 0xffffffff;
  FUN_10aa85340(param_1,&uStack_58);
  FUN_10aaa6bb0();
  return;
}



/* Entry: 10aa85340; end: 10aa85417;  */

/* WARNING: Removing unreachable block (ram,0x00010aa853d8) */

undefined1  [16] FUN_10aa85340(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f68d461,0x18);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10aaa6ab4(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10aa85418; end: 10aa8546f;  */

void FUN_10aa85418(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000002;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f68c0c1;
  uStack_30 = 0;
  uStack_38 = 0;
  uStack_20 = 0;
  uStack_28 = 0;
  uStack_18 = 0xffffffff;
  FUN_10aa85470(param_1,&uStack_58);
  FUN_10aaa6d68();
  return;
}



/* Entry: 10aa85470; end: 10aa85547;  */

/* WARNING: Removing unreachable block (ram,0x00010aa85508) */

undefined1  [16] FUN_10aa85470(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f68d47a,0x1e);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10aaa6c6c(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10aa85548; end: 10aa8559f;  */

void FUN_10aa85548(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000002;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f68c0c1;
  uStack_30 = 0;
  uStack_38 = 0;
  uStack_20 = 0;
  uStack_28 = 0;
  uStack_18 = 0xffffffff;
  FUN_10aa855a0(param_1,&uStack_58);
  FUN_10aaa6f20();
  return;
}



/* Entry: 10aa855a0; end: 10aa85677;  */

/* WARNING: Removing unreachable block (ram,0x00010aa85638) */

undefined1  [16] FUN_10aa855a0(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f68d499,0x17);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10aaa6e24(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10aa85678; end: 10aa85917;  */

void FUN_10aa85678(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f661fc4,0x22);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c3f7e8;
  pppuVar2 = (undefined8 ***)&UNK_10f68c0c1;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c3f7e8;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110c3f750;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa858f8;
    FUN_10a054dac(param_1,&UNK_10f68cfc6,FUN_10aaa6fdc,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa858f8;
    FUN_10a054dac(param_1,&UNK_10f68cfd4,FUN_10aaa7108,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa858f8;
    FUN_10a054dac(param_1,&UNK_10f68cfe6,FUN_10aaa71d0,3,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f661fc4,0x22);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10aa858f8:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10aa858fc);
  (*pcVar6)();
}



/* Entry: 10aa85918; end: 10aa85bb7;  */

void FUN_10aa85918(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f662010,0x21);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c3f850;
  pppuVar2 = (undefined8 ***)&UNK_10f68c0c1;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c3f850;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110c3f768;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa85b98;
    FUN_10a054dac(param_1,&UNK_10f68cfc6,FUN_10aaa72f8,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa85b98;
    FUN_10a054dac(param_1,&UNK_10f68cfd4,FUN_10aaa7424,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa85b98;
    FUN_10a054dac(param_1,&UNK_10f68cfe6,FUN_10aaa7864,3,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f662010,0x21);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10aa85b98:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10aa85b9c);
  (*pcVar6)();
}



/* Entry: 10aa85bb8; end: 10aa85e57;  */

void FUN_10aa85bb8(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f662032,0x21);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c3f8a0;
  pppuVar2 = (undefined8 ***)&UNK_10f68c0c1;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c3f8a0;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110c3f058;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa85e38;
    FUN_10a054dac(param_1,&UNK_10f68cfc6,FUN_10aaa7994,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa85e38;
    FUN_10a054dac(param_1,&UNK_10f68cfd4,FUN_10aaa7ac0,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa85e38;
    FUN_10a054dac(param_1,&UNK_10f68cfe6,FUN_10aaa7b88,3,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f662032,0x21);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10aa85e38:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10aa85e3c);
  (*pcVar6)();
}



/* Entry: 10aa85e58; end: 10aa860f7;  */

void FUN_10aa85e58(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f662070,0x21);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c3f920;
  pppuVar2 = (undefined8 ***)&UNK_10f68c0c1;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c3f920;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110c3f780;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa860d8;
    FUN_10a054dac(param_1,&UNK_10f68cfc6,FUN_10aaa7cd4,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa860d8;
    FUN_10a054dac(param_1,&UNK_10f68cfd4,FUN_10aaa7e00,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa860d8;
    FUN_10a054dac(param_1,&UNK_10f68cfe6,FUN_10aaa8244,3,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f662070,0x21);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10aa860d8:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10aa860dc);
  (*pcVar6)();
}



/* Entry: 10aa860f8; end: 10aa86397;  */

void FUN_10aa860f8(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f662092,0x27);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c3f970;
  pppuVar2 = (undefined8 ***)&UNK_10f68c0c1;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c3f970;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110c3f0b8;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa86378;
    FUN_10a054dac(param_1,&UNK_10f68cfc6,FUN_10aaa8354,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa86378;
    FUN_10a054dac(param_1,&UNK_10f68cfd4,FUN_10aaa8480,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa86378;
    FUN_10a054dac(param_1,&UNK_10f68cfe6,FUN_10aaa8548,3,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f662092,0x27);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10aa86378:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10aa8637c);
  (*pcVar6)();
}



/* Entry: 10aa86398; end: 10aa86637;  */

void FUN_10aa86398(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f6620e1,0x24);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c42bd8;
  pppuVar2 = (undefined8 ***)&UNK_10f68c0c1;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c42bd8;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110c3f798;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa86618;
    FUN_10a054dac(param_1,&UNK_10f68cfc6,FUN_10aaa868c,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa86618;
    FUN_10a054dac(param_1,&UNK_10f68cfd4,FUN_10aaa87b8,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa86618;
    FUN_10a054dac(param_1,&UNK_10f68cfe6,FUN_10aaa8880,3,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f6620e1,0x24);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10aa86618:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10aa8661c);
  (*pcVar6)();
}



/* Entry: 10aa86638; end: 10aa868d7;  */

void FUN_10aa86638(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f662106,0x2a);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c3fa10;
  pppuVar2 = (undefined8 ***)&UNK_10f68c0c1;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c3fa10;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110c3f798;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa868b8;
    FUN_10a054dac(param_1,&UNK_10f68cfc6,FUN_10aaa899c,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa868b8;
    FUN_10a054dac(param_1,&UNK_10f68cfd4,FUN_10aaa8ac8,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa868b8;
    FUN_10a054dac(param_1,&UNK_10f68cfe6,FUN_10aaa8b90,3,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f662106,0x2a);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10aa868b8:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10aa868bc);
  (*pcVar6)();
}



/* Entry: 10aa868d8; end: 10aa86b77;  */

void FUN_10aa868d8(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f661fe7,0x28);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c3fa90;
  pppuVar2 = (undefined8 ***)&UNK_10f68c0c1;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c3fa90;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110c3f750;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa86b58;
    FUN_10a054dac(param_1,&UNK_10f68cfc6,FUN_10aaa8cac,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa86b58;
    FUN_10a054dac(param_1,&UNK_10f68cfd4,FUN_10aaa8dd8,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa86b58;
    FUN_10a054dac(param_1,&UNK_10f68cfe6,FUN_10aaa8fb0,3,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f661fe7,0x28);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10aa86b58:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10aa86b5c);
  (*pcVar6)();
}



/* Entry: 10aa86b78; end: 10aa86c9b;  */

void FUN_10aa86b78(undefined8 param_1)

{
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puStack_a8 = (undefined *)0x0;
  ppuStack_a0 = (undefined **)0xffffffff00000002;
  uStack_98 = CONCAT44(uStack_98._4_4_,0xffffffff);
  puStack_90 = &UNK_10f68c0c1;
  puStack_80 = (undefined *)0x0;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_68 = CONCAT44(uStack_68._4_4_,0xffffffff);
  FUN_10aa86c9c(param_1,&puStack_a8);
  puStack_b8 = &UNK_10f68cfe0;
  puStack_a8 = &UNK_10f68cfed;
  uStack_98 = 1;
  uStack_88 = 0xffffffffffffffff;
  puStack_90 = (undefined *)0x100000064;
  puStack_80 = &UNK_10f68c0c1;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0x133;
  uStack_50 = 0;
  uStack_48 = 0;
  ppuStack_a0 = &puStack_b8;
  FUN_10aaa91bc();
  puStack_b8 = &UNK_10f68cfe0;
  puStack_b0 = &DAT_10f68c5c6;
  puStack_a8 = &UNK_10f68d002;
  uStack_98 = 2;
  uStack_88 = 0xffffffffffffffff;
  puStack_90 = (undefined *)0x100000064;
  puStack_80 = &UNK_10f68c0c1;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0x133;
  uStack_50 = 0;
  uStack_48 = 0;
  ppuStack_a0 = &puStack_b8;
  func_0x00010aaa9414(param_1,&puStack_a8,0);
  FUN_10aaa9ae8(param_1);
  return;
}



/* Entry: 10aa86c9c; end: 10aa86d73;  */

/* WARNING: Removing unreachable block (ram,0x00010aa86d34) */

undefined1  [16] FUN_10aa86c9c(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f68d4b1,0x1b);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10aaa90c0(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10aa86d74; end: 10aa86e97;  */

void FUN_10aa86d74(undefined8 param_1)

{
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puStack_a8 = (undefined *)0x0;
  ppuStack_a0 = (undefined **)0xffffffff00000002;
  uStack_98 = CONCAT44(uStack_98._4_4_,0xffffffff);
  puStack_90 = &UNK_10f68c0c1;
  puStack_80 = (undefined *)0x0;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_68 = CONCAT44(uStack_68._4_4_,0xffffffff);
  FUN_10aa86e98(param_1,&puStack_a8);
  puStack_b8 = &UNK_10f68cfe0;
  puStack_a8 = &UNK_10f68cfed;
  uStack_98 = 1;
  uStack_88 = 0xffffffffffffffff;
  puStack_90 = (undefined *)0x100000064;
  puStack_80 = &UNK_10f68c0c1;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0x133;
  uStack_50 = 0;
  uStack_48 = 0;
  ppuStack_a0 = &puStack_b8;
  FUN_10aaa9ca0();
  puStack_b8 = &UNK_10f68cfe0;
  puStack_b0 = &DAT_10f68c5c6;
  puStack_a8 = &UNK_10f68d002;
  uStack_98 = 2;
  uStack_88 = 0xffffffffffffffff;
  puStack_90 = (undefined *)0x100000064;
  puStack_80 = &UNK_10f68c0c1;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0x133;
  uStack_50 = 0;
  uStack_48 = 0;
  ppuStack_a0 = &puStack_b8;
  FUN_10aaa9e70(param_1,&puStack_a8,0);
  FUN_10aaaa0a4(param_1);
  return;
}



/* Entry: 10aa86e98; end: 10aa86f6f;  */

/* WARNING: Removing unreachable block (ram,0x00010aa86f30) */

undefined1  [16] FUN_10aa86e98(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f68d4cd,0x26);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10aaa9ba4(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10aa86f70; end: 10aa8700b;  */

undefined8 FUN_10aa86f70(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(long **)(param_2 + 0xe8) != (long *)0x0) {
    uVar1 = param_1;
    (**(code **)(**(long **)(param_2 + 0xe8) + 0x98))(param_1);
  }
  if (*(long **)(param_2 + 0xf8) != (long *)0x0) {
    (**(code **)(**(long **)(param_2 + 0xf8) + 0x98))(param_1);
  }
  if (*(long **)(param_2 + 0x108) != (long *)0x0) {
    (**(code **)(**(long **)(param_2 + 0x108) + 0x98))(param_1);
  }
  return uVar1;
}



/* Entry: 10aa8700c; end: 10aa8715b;  */

void FUN_10aa8700c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  undefined ***pppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined8 uStack_f8;
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010aa70acc();
  pcStack_78 = FUN_10aaaa160;
  ppuStack_70 = &PTR_DAT_110c40608;
  uStack_68 = param_1;
  FUN_10aa77204(param_2,&PTR_DAT_110c3fdf0,&pcStack_78);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  uStack_b8 = 0x10aaaa190;
  ppuStack_b0 = &PTR_DAT_110c40620;
  uStack_a8 = param_1;
  FUN_10aa77204(param_2,&PTR_s_y_110c3fe10,&uStack_b8);
  (*(code *)*ppuStack_b0)(&ppuStack_b0);
  uStack_f8 = 0x10aaaa1c0;
  ppuStack_f0 = &PTR_DAT_110c40638;
  ppuVar5 = &PTR_s_z_110c3fe30;
  uStack_e8 = param_1;
  FUN_10aa77204(param_2,&PTR_s_z_110c3fe30,&uStack_f8);
  pppuVar4 = &ppuStack_f0;
  (*(code *)*ppuStack_f0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_f0)(&ppuStack_f0);
  __Unwind_Resume();
  func_0x00010aa70b70();
  FUN_10aa76510(ppuVar5,&PTR_DAT_110c3fdf0,pppuVar4[0x1d],pppuVar4[0x1e],&UNK_10f68d415,0x19);
  FUN_10aa76510(ppuVar5,&PTR_s_y_110c3fe10,pppuVar4[0x1f],pppuVar4[0x20],&UNK_10f68d415,0x19);
  ppuStack_140 = pppuVar4[0x21];
  ppuStack_138 = pppuVar4[0x22];
  if (ppuStack_138 != (undefined **)0x0) {
    ppuVar1 = ppuStack_138 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar3) {
        *ppuVar1 = *ppuVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  (**(code **)(*ppuVar5 + 0x108))(ppuVar5,&PTR_s_z_110c3fe30,&ppuStack_140,&stack0xfffffffffffffed0)
  ;
  ppuVar5 = ppuStack_138;
  if (ppuStack_138 != (undefined **)0x0) {
    ppuVar1 = ppuStack_138 + 1;
    do {
      puVar6 = *ppuVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar3) {
        *ppuVar1 = puVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar6 == (undefined *)0x0) {
      (**(code **)(*ppuStack_138 + 0x10))(ppuStack_138);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar5);
    }
  }
  return;
}



/* Entry: 10aa8715c; end: 10aa871df;  */

void FUN_10aa8715c(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_40;
  long *plStack_38;
  
  func_0x00010aa70b70();
  FUN_10aa76510(param_2,&PTR_DAT_110c3fdf0,*(undefined8 *)(param_1 + 0xe8),
                *(undefined8 *)(param_1 + 0xf0),&UNK_10f68d415,0x19);
  FUN_10aa76510(param_2,&PTR_s_y_110c3fe10,*(undefined8 *)(param_1 + 0xf8),
                *(undefined8 *)(param_1 + 0x100),&UNK_10f68d415,0x19);
  uStack_40 = *(undefined8 *)(param_1 + 0x108);
  plStack_38 = *(long **)(param_1 + 0x110);
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  (**(code **)(*param_2 + 0x108))(param_2,&PTR_s_z_110c3fe30,&uStack_40,&stack0xffffffffffffffd0);
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10aa871e0; end: 10aa876ff;  */

void FUN_10aa871e0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  
  lVar6 = *(long *)(param_2 + 0x50);
  if (lVar6 == 0) {
    plVar3 = (long *)0x130;
    __Znwm();
    plVar3[1] = 0;
    plVar3[2] = 0;
    *plVar3 = (long)&PTR_DAT_110c406c0;
    plVar5 = plVar3 + 3;
    plVar4 = plVar3;
    func_0x00010a0fda30();
    FUN_10aa7093c(plVar5,0,plVar4,param_3);
    plVar3[3] = (long)&PTR_DAT_110c421a8;
    plVar3[5] = (long)&PTR_DAT_110c42278;
    plVar3[10] = (long)&PTR_DAT_110c422d0;
    plVar3[0x1f] = (long)&PTR_DAT_110c422f0;
    plVar3[0x21] = 0;
    plVar3[0x20] = 0;
    plVar3[0x23] = 0;
    plVar3[0x22] = 0;
    plVar3[0x25] = 0;
    plVar3[0x24] = 0;
    plStack_60 = plVar5;
    plStack_58 = plVar3;
    FUN_10aaaa354(&plStack_60,plVar3 + 8,plVar5);
    FUN_10aaaa1f0(&plStack_a0,&plStack_60);
    if (plStack_58 == (long *)0x0) goto LAB_10aa874ec;
    plVar5 = plStack_58 + 1;
    do {
      lVar6 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      plVar4 = plStack_58;
    } while (cVar1 != '\0');
  }
  else {
    lVar7 = *(long *)(lVar6 + 0x858);
    plVar5 = *(long **)(lVar6 + 0x860);
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
    }
    plVar3 = (long *)0x118;
    lStack_90 = lVar7;
    plStack_88 = plVar5;
    __Znwm();
    plVar4 = plVar3;
    func_0x00010a0fda30();
    FUN_10aa7093c(plVar3,lVar6,plVar4,param_3);
    *plVar3 = (long)&PTR_DAT_110c421a8;
    plVar3[2] = (long)&PTR_DAT_110c42278;
    plVar3[7] = (long)&PTR_DAT_110c422d0;
    plVar3[0x1c] = (long)&PTR_DAT_110c422f0;
    plVar3[0x20] = 0;
    plVar3[0x1f] = 0;
    plVar3[0x1e] = 0;
    plVar3[0x1d] = 0;
    plVar3[0x22] = 0;
    plVar3[0x21] = 0;
    lStack_80 = lVar7;
    plStack_78 = plVar5;
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
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
    plVar4 = (long *)0x30;
    lStack_70 = lVar7;
    plStack_68 = plVar5;
    plStack_60 = plVar3;
    __Znwm();
    lStack_70 = 0;
    plStack_68 = (long *)0x0;
    *plVar4 = (long)&PTR_DAT_110c40660;
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar4[3] = (long)plVar3;
    plVar4[4] = lVar7;
    plVar4[5] = (long)plVar5;
    plStack_58 = plVar4;
    FUN_10aaaa354(&plStack_60,plVar3 + 5,plVar3);
    FUN_10aaaa1f0(&plStack_a0,&plStack_60);
    plVar5 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar4 = plStack_58 + 1;
      do {
        lVar6 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if (plStack_68 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar5 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar4 = plStack_78 + 1;
      do {
        lVar6 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if ((lStack_90 != 0) && (plStack_a0 != (long *)0x0)) {
      plStack_60 = plStack_a0;
      plStack_58 = plStack_98;
      if (plStack_98 != (long *)0x0) {
        plVar5 = plStack_98 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_10aa88c30(lStack_90,&plStack_60);
      plVar5 = plStack_58;
      if (plStack_58 != (long *)0x0) {
        plVar4 = plStack_58 + 1;
        do {
          lVar6 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
    }
    if (plStack_88 == (long *)0x0) goto LAB_10aa874ec;
    plVar5 = plStack_88 + 1;
    do {
      lVar6 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      plVar4 = plStack_88;
    } while (cVar1 != '\0');
  }
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
LAB_10aa874ec:
  lVar6 = 0;
  do {
    plVar5 = (long *)(param_2 + 0xe8 + lVar6 * 0x10);
    lStack_70 = *plVar5;
    if (lStack_70 != 0) {
      plStack_68 = (long *)plVar5[1];
      if (plStack_68 != (long *)0x0) {
        plVar5 = plStack_68 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_10a5726c4(&plStack_b0,param_4,&lStack_70);
      plStack_58 = plStack_a8;
      plStack_60 = plStack_b0;
      if (plStack_a8 != (long *)0x0) {
        plVar5 = plStack_a8 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      func_0x00010aa77e78(plStack_a0 + lVar6 * 2 + 0x1d,&plStack_60);
      plVar5 = plStack_58;
      if (plStack_58 != (long *)0x0) {
        plVar4 = plStack_58 + 1;
        do {
          lVar7 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      plVar5 = plStack_a8;
      if (plStack_a8 != (long *)0x0) {
        plVar4 = plStack_a8 + 1;
        do {
          lVar7 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      plVar5 = plStack_68;
      if (plStack_68 != (long *)0x0) {
        plVar4 = plStack_68 + 1;
        do {
          lVar7 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_68 + 0x10))(plStack_68);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
    }
    lVar6 = lVar6 + 1;
  } while (lVar6 != 3);
  param_1[1] = plStack_98;
  *param_1 = plStack_a0;
  return;
}


