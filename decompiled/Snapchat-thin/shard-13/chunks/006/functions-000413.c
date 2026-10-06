/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a96d1ec; end: 10a96d293;  */

undefined8 * FUN_10a96d1ec(undefined8 *param_1,undefined8 *param_2,byte param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a96d294);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a96d294; end: 10a96d2f7;  */

undefined1  [16] FUN_10a96d294(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 4;
  auVar1._0_8_ = "Blob";
  return auVar1;
}



/* Entry: 10a96d2f8; end: 10a96d603;  */

void FUN_10a96d2f8(ulong param_1)

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
  ulong uVar10;
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
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,"Blob",4);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c35350;
  pppuVar2 = (undefined8 ***)&UNK_10f68581c;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0x6ffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_54 = 0x122;
  uStack_50 = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,6);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c35350;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
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
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a96d5e4;
    FUN_10a054dac(param_1,"bytes",FUN_10a99c650,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a96d5e4;
    FUN_10a054dac(param_1,"text",FUN_10a99c7cc,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    func_0x00010a06ba0c(param_1,FUN_10a99c8e0,2,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f68f0dc,FUN_10a99d7c4,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f6858de,FUN_10a99d884,0);
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
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uVar10 = *(ulong *)(lVar3 + -0x18);
    uStack_58 = (undefined4)*(undefined8 *)(lVar3 + -0x20);
    uStack_54 = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x20) >> 0x20);
    uStack_50 = (undefined4)uVar10;
    uStack_4c = (undefined4)(uVar10 >> 0x20);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uVar10 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,"Blob",4);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a96d5e4:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a96d5e8);
  (*pcVar6)();
}



/* Entry: 10a96d604; end: 10a96d6a7;  */

void FUN_10a96d604(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)0x40;
  __Znwm();
  *puVar4 = &PTR_FUN_110c31c58;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = param_2;
  puVar4[4] = param_3;
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
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  *param_1 = puVar4;
  puVar5 = (undefined8 *)0x20;
  __Znwm();
  *puVar5 = &PTR_FUN_110c34630;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = puVar4;
  param_1[1] = puVar5;
  return;
}



/* Entry: 10a96d6a8; end: 10a96d773;  */

long * FUN_10a96d6a8(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puStack_30;
  long *plStack_28;
  
  if (*(int *)(param_1 + 1) == 7) {
    plVar1 = (long *)*param_1;
    (**(code **)(*plVar1 + 0x98))(plVar1,param_1[2]);
    plVar3 = (long *)*param_1;
    uVar2 = param_2;
    plStack_28 = plVar1;
    _strlen(param_2);
    (**(code **)(*plVar3 + 0xb8))(&puStack_30,plVar3,param_2,uVar2);
    (**(code **)(*plVar3 + 0x1b8))(plVar3,&plStack_28,&puStack_30);
    if (puStack_30 != (undefined8 *)0x0) {
      (**(code **)*puStack_30)();
    }
    if (plStack_28 != (long *)0x0) {
      (**(code **)*plStack_28)();
    }
  }
  else {
    plVar3 = (long *)0x0;
  }
  return plVar3;
}



/* Entry: 10a96d774; end: 10a96d8ef;  */

/* WARNING: Removing unreachable block (ram,0x00010a96d894) */
/* WARNING: Removing unreachable block (ram,0x00010a96d898) */
/* WARNING: Removing unreachable block (ram,0x00010a96d8a0) */
/* WARNING: Removing unreachable block (ram,0x00010a96d8a8) */
/* WARNING: Removing unreachable block (ram,0x00010a96d8b4) */
/* WARNING: Removing unreachable block (ram,0x00010a96d8bc) */
/* WARNING: Removing unreachable block (ram,0x00010a96d8c4) */
/* WARNING: Removing unreachable block (ram,0x00010a96d8c8) */

void FUN_10a96d774(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puStack_48;
  
  puVar4 = (undefined8 *)0xb0;
  __Znwm();
  plVar1 = puVar4 + 2;
  puVar4[2] = 0;
  puVar4[1] = 0x200000006;
  puVar7 = puVar4 + 3;
  *(undefined2 *)puVar7 = 4;
  puVar4[5] = 0;
  puVar4[4] = 0;
  puVar4[7] = 0;
  puVar4[6] = 0;
  puVar4[9] = 0;
  puVar4[8] = 0;
  puVar4[0xb] = 0;
  puVar4[10] = 0;
  puVar4[0xd] = 0;
  puVar4[0xc] = 0;
  puVar4[0xf] = 0;
  puVar4[0xe] = 0;
  puVar4[0x10] = 0;
  puVar4[0x11] = puVar7;
  puVar4[0x12] = 0;
  *puVar4 = &PTR_FUN_110ba6b10;
  puVar5 = puVar4 + 0x13;
  *(undefined1 *)puVar5 = 0;
  *(undefined1 *)(puVar4 + 0x15) = 0;
  do {
    lVar6 = *plVar1;
    puStack_48 = puVar4;
    if (lVar6 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        if (*(char *)(puVar4 + 0x15) == '\x01') {
          func_0x00010a12c080();
          *(undefined1 *)(puVar4 + 0x15) = 0;
        }
        lVar6 = param_2[1];
        uVar8 = *param_2;
        puVar5[1] = param_2[1];
        *puVar5 = uVar8;
        if (lVar6 != 0) {
          plVar1 = (long *)(lVar6 + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        *(undefined1 *)(puVar4 + 0x15) = 1;
        puVar4[2] = 2;
        FUN_109d1b4dc(puVar7);
LAB_10a96d878:
        *param_1 = puVar4;
        func_0x0001092b4274(&puStack_48,puVar4);
        return;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar6 >> 1 & 1) != 0) goto LAB_10a96d878;
  } while( true );
}



/* Entry: 10a96d8f0; end: 10a96dac7;  */

/* WARNING: Removing unreachable block (ram,0x00010a96db60) */
/* WARNING: Removing unreachable block (ram,0x00010a96db64) */
/* WARNING: Removing unreachable block (ram,0x00010a96db6c) */
/* WARNING: Removing unreachable block (ram,0x00010a96db74) */
/* WARNING: Removing unreachable block (ram,0x00010a96db80) */
/* WARNING: Removing unreachable block (ram,0x00010a96db88) */
/* WARNING: Removing unreachable block (ram,0x00010a96db90) */
/* WARNING: Removing unreachable block (ram,0x00010a96db94) */

void FUN_10a96d8f0(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 ***pppuVar6;
  undefined8 uVar7;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 **ppuStack_168;
  undefined8 **ppuStack_160;
  undefined8 *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 auStack_140 [2];
  char cStack_129;
  undefined8 **ppuStack_128;
  ulong uStack_120;
  byte bStack_111;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = **(undefined8 **)(param_2 + 0x18);
  puVar2 = (undefined8 *)0x28;
  __Znwm();
  __ZNSt3__17codecvtIwc11__mbstate_tEC2Em();
  puVar2[3] = 0x10ffff;
  *(undefined4 *)(puVar2 + 4) = 0;
  *puVar2 = &PTR_DAT_110980358;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d0 = 0;
  uStack_d8 = 0;
  uStack_c0 = 0;
  uStack_c8 = 0;
  uStack_b0 = 0;
  uStack_b8 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  puStack_e0 = puVar2;
  FUN_109ffe064(&ppuStack_128,uVar7,*(undefined8 *)(*(long *)(param_2 + 0x18) + 8));
  pppuVar6 = (undefined8 ***)ppuStack_128;
  if (-1 < (char)bStack_111) {
    uStack_120 = (ulong)bStack_111;
    pppuVar6 = &ppuStack_128;
  }
  func_0x000106e56bcc(auStack_140,&uStack_110,pppuVar6,(long)pppuVar6 + uStack_120);
  if (cStack_129 < '\0') {
    __ZdlPv(auStack_140[0]);
  }
  pppuVar6 = &ppuStack_128;
  FUN_10a96dac8(param_1);
  if ((char)bStack_111 < '\0') {
    __ZdlPv(ppuStack_128);
  }
  puVar3 = &uStack_110;
  func_0x000106e52cd8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  func_0x000106e52cd8(&uStack_110);
  if ((int)pppuVar6 == 1) {
    ___cxa_begin_catch(puVar3);
    FUN_10a00946c(&UNK_10f685bc5);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a96daa4);
    (*pcVar1)();
  }
  __Unwind_Resume(puVar3);
  puVar4 = puVar3;
  func_0x000104bd46a0();
  pcStack_148 = FUN_10a96dac8;
  puVar5 = (undefined8 *)0xb8;
  puStack_170 = puVar2;
  ppuStack_168 = &ppuStack_128;
  ppuStack_160 = pppuVar6;
  puStack_158 = puVar3;
  puStack_150 = &stack0xfffffffffffffff0;
  __Znwm();
  *(undefined2 *)(puVar5 + 3) = 4;
  puVar5[2] = 0;
  puVar5[1] = 0x200000006;
  puVar5[5] = 0;
  puVar5[4] = 0;
  puVar5[7] = 0;
  puVar5[6] = 0;
  puVar5[9] = 0;
  puVar5[8] = 0;
  puVar5[0xb] = 0;
  puVar5[10] = 0;
  puVar5[0xd] = 0;
  puVar5[0xc] = 0;
  puVar5[0xf] = 0;
  puVar5[0xe] = 0;
  puVar5[0x10] = 0;
  puVar5[0x11] = puVar5 + 3;
  puVar5[0x12] = 0;
  *puVar5 = &PTR_DAT_110be8e80;
  *(undefined1 *)(puVar5 + 0x13) = 0;
  *(undefined1 *)(puVar5 + 0x16) = 0;
  puStack_178 = puVar5;
  FUN_10a4f447c();
  *puVar4 = puVar5;
  func_0x0001092b4274(&puStack_178,puVar5);
  return;
}



/* Entry: 10a96dac8; end: 10a96dbcb;  */

/* WARNING: Removing unreachable block (ram,0x00010a96db60) */
/* WARNING: Removing unreachable block (ram,0x00010a96db64) */
/* WARNING: Removing unreachable block (ram,0x00010a96db6c) */
/* WARNING: Removing unreachable block (ram,0x00010a96db74) */
/* WARNING: Removing unreachable block (ram,0x00010a96db80) */
/* WARNING: Removing unreachable block (ram,0x00010a96db88) */
/* WARNING: Removing unreachable block (ram,0x00010a96db90) */
/* WARNING: Removing unreachable block (ram,0x00010a96db94) */

void FUN_10a96dac8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puStack_38;
  
  puVar1 = (undefined8 *)0xb8;
  __Znwm();
  *(undefined2 *)(puVar1 + 3) = 4;
  puVar1[2] = 0;
  puVar1[1] = 0x200000006;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = puVar1 + 3;
  puVar1[0x12] = 0;
  *puVar1 = &PTR_DAT_110be8e80;
  *(undefined1 *)(puVar1 + 0x13) = 0;
  *(undefined1 *)(puVar1 + 0x16) = 0;
  puStack_38 = puVar1;
  FUN_10a4f447c();
  *param_1 = puVar1;
  func_0x0001092b4274(&puStack_38,puVar1);
  return;
}



/* Entry: 10a96dbcc; end: 10a96dc3f;  */

undefined1  [16] FUN_10a96dbcc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 7;
  auVar1._0_8_ = &UNK_10f68727d;
  return auVar1;
}



/* Entry: 10a96dc40; end: 10a96e0e3;  */

void FUN_10a96dc40(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  code *pcVar5;
  ulong uVar6;
  undefined4 uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
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
  
  uVar7 = 4;
  if (*(int *)(param_1 + 0x160) != 100) {
    uVar7 = 0xffffffff;
  }
  func_0x000109887da8(appuStack_c8,&UNK_10f68727d,7);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c33330;
  pppuVar2 = (undefined8 ***)&UNK_10f68581c;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0x100000064;
  uStack_80 = CONCAT44(uVar7,0xffffffff);
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
  uVar6 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,uVar7);
  if ((uVar6 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c33330;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  iVar8 = *(int *)(param_1 + 0x160);
  if (*(int *)(param_1 + 0x160) != 100) {
    iVar8 = 0x19;
  }
  uVar6 = param_1;
  FUN_10a0051e8(param_1,iVar8,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar6 & 1) == 0) {
    func_0x00010a06ba0c(param_1,FUN_10a99dafc,0,0);
  }
  iVar8 = *(int *)(param_1 + 0x160);
  if (iVar8 != 100) {
    iVar8 = 0x19;
  }
  uVar6 = param_1;
  FUN_10a0051e8(param_1,iVar8,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar6 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a96e0c4;
    FUN_10a054dac(param_1,&DAT_10f3a37b1,FUN_10a99dc48,3,*(undefined8 *)(param_1 + 0x40));
  }
  iVar8 = *(int *)(param_1 + 0x160);
  if (iVar8 != 100) {
    iVar8 = 0x19;
  }
  uVar6 = param_1;
  FUN_10a0051e8(param_1,iVar8,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar6 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a96e0c4;
    FUN_10a054dac(param_1,&DAT_10f3dd81d,FUN_10a99de64,3,*(undefined8 *)(param_1 + 0x40));
  }
  iVar8 = *(int *)(param_1 + 0x160);
  if (iVar8 != 100) {
    iVar8 = 0x19;
  }
  uVar6 = param_1;
  FUN_10a0051e8(param_1,iVar8,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar6 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a96e0c4;
    FUN_10a054dac(param_1,"delete",FUN_10a99df1c,2,*(undefined8 *)(param_1 + 0x40));
  }
  iVar8 = *(int *)(param_1 + 0x160);
  if (*(int *)(param_1 + 0x160) != 100) {
    iVar8 = 0x19;
  }
  uVar6 = param_1;
  FUN_10a0051e8(param_1,iVar8,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar6 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a96e0c4;
    FUN_10a054dac(param_1,&DAT_10f3119d3,FUN_10a99e018,1,*(undefined8 *)(param_1 + 0x40));
  }
  iVar8 = *(int *)(param_1 + 0x160);
  if (iVar8 != 100) {
    iVar8 = 0x19;
  }
  uVar6 = param_1;
  FUN_10a0051e8(param_1,iVar8,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar6 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a96e0c4;
    FUN_10a054dac(param_1,"values",FUN_10a99e1f0,1,*(undefined8 *)(param_1 + 0x40));
  }
  iVar8 = *(int *)(param_1 + 0x160);
  if (iVar8 != 100) {
    iVar8 = 0x19;
  }
  uVar6 = param_1;
  FUN_10a0051e8(param_1,iVar8,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar6 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a96e0c4;
    FUN_10a054dac(param_1,"entries",FUN_10a99e2a0,1,*(undefined8 *)(param_1 + 0x40));
  }
  iVar8 = *(int *)(param_1 + 0x160);
  if (iVar8 != 100) {
    iVar8 = 0x19;
  }
  uVar6 = param_1;
  FUN_10a0051e8(param_1,iVar8,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar6 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a96e0c4;
    FUN_10a054dac(param_1,&DAT_10f4653d9,FUN_10a99e498,2,*(undefined8 *)(param_1 + 0x40));
  }
  iVar8 = *(int *)(param_1 + 0x160);
  if (iVar8 != 100) {
    iVar8 = 0x19;
  }
  uVar6 = param_1;
  FUN_10a0051e8(param_1,iVar8,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar6 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a96e0c4;
    FUN_10a054dac(param_1,&DAT_10f41677d,FUN_10a99e5f8,2,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar9 = *(ulong *)(lVar3 + -0x48);
    uVar10 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar10 >> 0x20);
    uVar7 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_80._4_4_;
    uVar6 = param_1;
    uStack_88 = uVar10;
    uStack_80 = uVar9;
    FUN_10a0051e8(param_1,uVar10 & 0xffffffff,uVar7,uStack_50 & 0xffffffff,uVar9 & 0xffffffff,uVar4)
    ;
    if ((uVar6 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f68727d,7);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a96e0c4:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a96e0c8);
  (*pcVar5)();
}



/* Entry: 10a96e0e4; end: 10a96e297;  */

void FUN_10a96e0e4(long param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined8 ******ppppppuVar3;
  ulong uVar4;
  byte bVar5;
  undefined *puVar6;
  code *pcVar7;
  char cVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *****pppppuStack_78;
  ulong uStack_70;
  ulong uStack_68;
  undefined1 uStack_59;
  undefined8 *****pppppuStack_58;
  
  bVar5 = *(byte *)((long)param_2 + 0x17);
  uVar4 = param_2[1];
  if (-1 < (char)bVar5) {
    uVar4 = (ulong)bVar5;
  }
  if (uVar4 == 0) {
    return;
  }
  plVar1 = (long *)*param_2;
  if (-1 < (char)bVar5) {
    plVar1 = param_2;
  }
  uStack_70 = 0;
  uStack_68 = 0;
  pppppuStack_78 = (undefined8 ******)0x0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
            (&pppppuStack_78,uVar4,0);
  puVar6 = PTR___DefaultRuneLocale_11034bcf8;
  uVar10 = 0;
  do {
    cVar8 = *(char *)((long)plVar1 + uVar10);
    lVar9 = (long)cVar8;
    if ((-1 < lVar9) && ((*(uint *)(puVar6 + lVar9 * 4 + 0x3c) >> 0xf & 1) != 0)) {
      ___tolower();
      cVar8 = (char)lVar9;
    }
    uVar2 = uStack_70;
    if (-1 < (long)uStack_68) {
      uVar2 = uStack_68 >> 0x38;
    }
    if (uVar2 < uVar10) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10a96e270);
      (*pcVar7)();
    }
    ppppppuVar3 = (undefined8 ******)pppppuStack_78;
    if (-1 < (long)uStack_68) {
      ppppppuVar3 = &pppppuStack_78;
    }
    *(char *)((long)ppppppuVar3 + uVar10) = cVar8;
    uVar10 = uVar10 + 1;
  } while (uVar4 != uVar10);
  pppppuStack_58 = &pppppuStack_78;
  param_1 = param_1 + 0x18;
  FUN_10a1945c0(param_1,&pppppuStack_78,&UNK_10dd5b8f9,&pppppuStack_58,&uStack_59);
  if ((long)uStack_68 < 0) {
    __ZdlPv(pppppuStack_78);
  }
  if (*(char *)(param_1 + 0x4f) < '\0') {
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_10a96e244;
  }
  else if (*(char *)(param_1 + 0x4f) == '\0') {
LAB_10a96e244:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x38,param_3)
    ;
    return;
  }
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (&pppppuStack_78,&DAT_10f68f19e,param_3);
  uVar4 = uStack_70;
  ppppppuVar3 = (undefined8 ******)pppppuStack_78;
  if (-1 < (long)uStack_68) {
    uVar4 = uStack_68 >> 0x38;
    ppppppuVar3 = &pppppuStack_78;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1 + 0x38,ppppppuVar3,uVar4);
  if ((long)uStack_68 < 0) {
    __ZdlPv(pppppuStack_78);
  }
  return;
}



/* Entry: 10a96e298; end: 10a96e3e3;  */

void FUN_10a96e298(long param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 ****ppppuVar4;
  byte bVar5;
  undefined *puVar6;
  code *pcVar7;
  char cVar8;
  long lVar9;
  ulong uVar10;
  undefined8 ***pppuStack_78;
  ulong uStack_70;
  ulong uStack_68;
  undefined1 uStack_59;
  undefined8 ***pppuStack_58;
  
  bVar5 = *(byte *)((long)param_2 + 0x17);
  uVar1 = param_2[1];
  if (-1 < (char)bVar5) {
    uVar1 = (ulong)bVar5;
  }
  if (uVar1 != 0) {
    plVar2 = (long *)*param_2;
    if (-1 < (char)bVar5) {
      plVar2 = param_2;
    }
    uStack_70 = 0;
    uStack_68 = 0;
    pppuStack_78 = (undefined8 ****)0x0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
              (&pppuStack_78,uVar1,0);
    puVar6 = PTR___DefaultRuneLocale_11034bcf8;
    uVar10 = 0;
    do {
      cVar8 = *(char *)((long)plVar2 + uVar10);
      lVar9 = (long)cVar8;
      if ((-1 < lVar9) && ((*(uint *)(puVar6 + lVar9 * 4 + 0x3c) >> 0xf & 1) != 0)) {
        ___tolower();
        cVar8 = (char)lVar9;
      }
      uVar3 = uStack_70;
      if (-1 < (long)uStack_68) {
        uVar3 = uStack_68 >> 0x38;
      }
      if (uVar3 < uVar10) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10a96e3c0);
        (*pcVar7)();
      }
      ppppuVar4 = (undefined8 ****)pppuStack_78;
      if (-1 < (long)uStack_68) {
        ppppuVar4 = &pppuStack_78;
      }
      *(char *)((long)ppppuVar4 + uVar10) = cVar8;
      uVar10 = uVar10 + 1;
    } while (uVar1 != uVar10);
    pppuStack_58 = &pppuStack_78;
    param_1 = param_1 + 0x18;
    FUN_10a1945c0(param_1,&pppuStack_78,&UNK_10dd5b8f9,&pppuStack_58,&uStack_59);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x38,param_3)
    ;
    if ((long)uStack_68 < 0) {
      __ZdlPv(pppuStack_78);
    }
  }
  return;
}



/* Entry: 10a96e3e4; end: 10a96e56b;  */

void FUN_10a96e3e4(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 ****ppppuVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long *plVar6;
  code *pcVar7;
  bool bVar8;
  char cVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 ***pppuStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  uVar1 = param_2[1];
  puVar4 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar4 = param_2;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  pppuStack_58 = (undefined8 ****)0x0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc(&pppuStack_58,uVar1,0);
  puVar5 = PTR___DefaultRuneLocale_11034bcf8;
  if (uVar1 != 0) {
    uVar14 = 0;
    do {
      cVar9 = *(char *)((long)puVar4 + uVar14);
      lVar10 = (long)cVar9;
      if ((-1 < lVar10) && ((*(uint *)(puVar5 + lVar10 * 4 + 0x3c) >> 0xf & 1) != 0)) {
        ___tolower();
        cVar9 = (char)lVar10;
      }
      uVar2 = uStack_50;
      if (-1 < (long)uStack_48) {
        uVar2 = uStack_48 >> 0x38;
      }
      if (uVar2 < uVar14) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10a96e548);
        (*pcVar7)();
      }
      ppppuVar3 = (undefined8 ****)pppuStack_58;
      if (-1 < (long)uStack_48) {
        ppppuVar3 = &pppuStack_58;
      }
      *(char *)((long)ppppuVar3 + uVar14) = cVar9;
      uVar14 = uVar14 + 1;
    } while (uVar1 != uVar14);
  }
  plVar11 = (long *)(param_1 + 0x18);
  FUN_10a99e700(plVar11,&pppuStack_58);
  if ((long *)(param_1 + 0x20) != plVar11) {
    plVar13 = plVar11;
    plVar6 = (long *)plVar11[1];
    if ((long *)plVar11[1] == (long *)0x0) {
      do {
        plVar12 = (long *)plVar13[2];
        bVar8 = (long *)*plVar12 != plVar13;
        plVar13 = plVar12;
      } while (bVar8);
    }
    else {
      do {
        plVar12 = plVar6;
        plVar6 = (long *)*plVar12;
      } while ((long *)*plVar12 != (long *)0x0);
    }
    if (*(long **)(param_1 + 0x18) == plVar11) {
      *(long **)(param_1 + 0x18) = plVar12;
    }
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
    FUN_10a04815c(*(undefined8 *)(param_1 + 0x20),plVar11);
    func_0x00010a052340(plVar11 + 4);
    __ZdlPv(plVar11);
  }
  if ((long)uStack_48 < 0) {
    __ZdlPv(pppuStack_58);
  }
  return;
}



/* Entry: 10a96e56c; end: 10a96e6d7;  */

void FUN_10a96e56c(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 ****ppppuVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  code *pcVar6;
  char cVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 ***pppuStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  uVar1 = param_3[1];
  puVar4 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar4 = param_3;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  pppuStack_68 = (undefined8 ****)0x0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc(&pppuStack_68,uVar1,0);
  puVar5 = PTR___DefaultRuneLocale_11034bcf8;
  if (uVar1 != 0) {
    uVar9 = 0;
    do {
      cVar7 = *(char *)((long)puVar4 + uVar9);
      lVar8 = (long)cVar7;
      if ((-1 < lVar8) && ((*(uint *)(puVar5 + lVar8 * 4 + 0x3c) >> 0xf & 1) != 0)) {
        ___tolower();
        cVar7 = (char)lVar8;
      }
      uVar2 = uStack_60;
      if (-1 < (long)uStack_58) {
        uVar2 = uStack_58 >> 0x38;
      }
      if (uVar2 < uVar9) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10a96e6b4);
        (*pcVar6)();
      }
      ppppuVar3 = (undefined8 ****)pppuStack_68;
      if (-1 < (long)uStack_58) {
        ppppuVar3 = &pppuStack_68;
      }
      *(char *)((long)ppppuVar3 + uVar9) = cVar7;
      uVar9 = uVar9 + 1;
    } while (uVar1 != uVar9);
  }
  lVar8 = param_2 + 0x18;
  func_0x000107c2aca8(lVar8,&pppuStack_68);
  if ((long)uStack_58 < 0) {
    __ZdlPv(pppuStack_68);
  }
  if (param_2 + 0x20 == lVar8) {
    func_0x000107c2b054(param_1,&UNK_10f68581c);
  }
  else if (*(char *)(lVar8 + 0x4f) < '\0') {
    func_0x000107c3192c(param_1,*(undefined8 *)(lVar8 + 0x38),*(undefined8 *)(lVar8 + 0x40));
  }
  else {
    uVar11 = *(undefined8 *)(lVar8 + 0x40);
    uVar10 = *(undefined8 *)(lVar8 + 0x38);
    param_1[2] = *(undefined8 *)(lVar8 + 0x48);
    param_1[1] = uVar11;
    *param_1 = uVar10;
  }
  return;
}



/* Entry: 10a96e6d8; end: 10a96e7fb;  */

bool FUN_10a96e6d8(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 ****ppppuVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  code *pcVar6;
  char cVar7;
  long lVar8;
  ulong uVar9;
  undefined8 ***pppuStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  uVar1 = param_2[1];
  puVar4 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar4 = param_2;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  pppuStack_58 = (undefined8 ****)0x0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc(&pppuStack_58,uVar1,0);
  puVar5 = PTR___DefaultRuneLocale_11034bcf8;
  if (uVar1 != 0) {
    uVar9 = 0;
    do {
      cVar7 = *(char *)((long)puVar4 + uVar9);
      lVar8 = (long)cVar7;
      if ((-1 < lVar8) && ((*(uint *)(puVar5 + lVar8 * 4 + 0x3c) >> 0xf & 1) != 0)) {
        ___tolower();
        cVar7 = (char)lVar8;
      }
      uVar2 = uStack_50;
      if (-1 < (long)uStack_48) {
        uVar2 = uStack_48 >> 0x38;
      }
      if (uVar2 < uVar9) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10a96e7d8);
        (*pcVar6)();
      }
      ppppuVar3 = (undefined8 ****)pppuStack_58;
      if (-1 < (long)uStack_48) {
        ppppuVar3 = &pppuStack_58;
      }
      *(char *)((long)ppppuVar3 + uVar9) = cVar7;
      uVar9 = uVar9 + 1;
    } while (uVar1 != uVar9);
  }
  lVar8 = param_1 + 0x18;
  func_0x000107c2aca8(lVar8,&pppuStack_58);
  if ((long)uStack_48 < 0) {
    __ZdlPv(pppuStack_58);
  }
  return param_1 + 0x20 != lVar8;
}



/* Entry: 10a96e7fc; end: 10a96e8af;  */

void FUN_10a96e7fc(undefined8 *param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x000107c31930(param_1,*(undefined8 *)(param_2 + 0x28));
  plVar3 = *(long **)(param_2 + 0x18);
  while (plVar3 != (long *)(param_2 + 0x20)) {
    FUN_10a0b4ec0(param_1,plVar3 + 4);
    plVar1 = (long *)plVar3[1];
    plVar4 = plVar3;
    if ((long *)plVar3[1] == (long *)0x0) {
      do {
        plVar3 = (long *)plVar4[2];
        bVar2 = (long *)*plVar3 != plVar4;
        plVar4 = plVar3;
      } while (bVar2);
    }
    else {
      do {
        plVar3 = plVar1;
        plVar1 = (long *)*plVar3;
      } while ((long *)*plVar3 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 10a96e8b0; end: 10a96e963;  */

void FUN_10a96e8b0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x000107c31930(param_1,*(undefined8 *)(param_2 + 0x28));
  plVar3 = *(long **)(param_2 + 0x18);
  while (plVar3 != (long *)(param_2 + 0x20)) {
    FUN_10a0b4ec0(param_1,plVar3 + 7);
    plVar1 = (long *)plVar3[1];
    plVar4 = plVar3;
    if ((long *)plVar3[1] == (long *)0x0) {
      do {
        plVar3 = (long *)plVar4[2];
        bVar2 = (long *)*plVar3 != plVar4;
        plVar4 = plVar3;
      } while (bVar2);
    }
    else {
      do {
        plVar3 = plVar1;
        plVar1 = (long *)*plVar3;
      } while ((long *)*plVar3 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 10a96e964; end: 10a96ec5f;  */

void FUN_10a96e964(undefined1 **param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *****pppppuVar2;
  long *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 **ppuVar6;
  undefined1 **ppuVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *extraout_x8;
  long lVar10;
  ulong uVar11;
  undefined1 *puVar12;
  long lVar13;
  ulong unaff_x22;
  undefined1 ***unaff_x23;
  undefined8 *unaff_x24;
  undefined1 **ppuVar14;
  undefined1 **ppuVar15;
  long *plVar16;
  long *plVar17;
  undefined8 unaff_x26;
  undefined8 *puVar18;
  long alStack_1b8 [2];
  char cStack_1a1;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  undefined8 ****ppppuStack_160;
  ulong uStack_158;
  ulong uStack_150;
  undefined8 uStack_140;
  long *plStack_138;
  undefined1 *puStack_130;
  undefined1 ***pppuStack_128;
  ulong uStack_120;
  long *plStack_118;
  undefined1 **ppuStack_110;
  undefined1 **ppuStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 *puStack_c8;
  undefined1 *puStack_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 **ppuStack_a8;
  undefined1 **ppuStack_a0;
  long lStack_98;
  long lStack_90;
  long alStack_88 [2];
  long lStack_78;
  char acStack_71 [9];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = (undefined1 *)0x0;
  param_1[1] = (undefined1 *)0x0;
  param_1[2] = (undefined1 *)0x0;
  ppuVar6 = param_1;
  func_0x000107c2b140(param_1,*(undefined8 *)(param_2 + 0x28));
  plVar16 = *(long **)(param_2 + 0x18);
  plVar8 = (long *)(param_2 + 0x20);
  if (plVar16 != plVar8) {
    unaff_x22 = 0xaaaaaaaaaaaaaaa;
    unaff_x23 = &ppuStack_a0;
    unaff_x26 = 0xaaaaaaaaaaaaaaab;
    do {
      if (*(char *)((long)plVar16 + 0x37) < '\0') {
        func_0x000107c3192c(&ppuStack_a0,plVar16[4],plVar16[5]);
      }
      else {
        lStack_98 = plVar16[5];
        ppuStack_a0 = (undefined1 **)plVar16[4];
        lStack_90 = plVar16[6];
      }
      if (*(char *)((long)plVar16 + 0x4f) < '\0') {
        func_0x000107c3192c(alStack_88,plVar16[7],plVar16[8]);
      }
      else {
        alStack_88[1] = plVar16[8];
        alStack_88[0] = plVar16[7];
        lStack_78 = plVar16[9];
      }
      uStack_f0 = 0;
      uStack_e8 = 0;
      uStack_e0 = 0;
      FUN_10a102f04(&uStack_f0,&ppuStack_a0,(char *)((long)register0x00000008 + -0x71) + 1,2);
      puVar18 = (undefined8 *)param_1[1];
      if (puVar18 < param_1[2]) {
        *puVar18 = 0;
        puVar18[1] = 0;
        puVar18[2] = 0;
        puVar18[1] = uStack_e8;
        *puVar18 = uStack_f0;
        puVar18[2] = uStack_e0;
        uStack_f0 = 0;
        uStack_e8 = 0;
        uStack_e0 = 0;
        puVar18 = puVar18 + 3;
      }
      else {
        lVar13 = (long)puVar18 - (long)*param_1;
        uVar9 = (lVar13 >> 3) * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar9) {
          FUN_10a0cf4c8();
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a96ebd8);
          (*pcVar4)();
        }
        lVar10 = (long)param_1[2] - (long)*param_1 >> 3;
        uVar11 = lVar10 * 0x5555555555555556;
        if (uVar11 < uVar9 || uVar11 - uVar9 == 0) {
          uVar11 = uVar9;
        }
        if (0x555555555555554 < (ulong)(lVar10 * -0x5555555555555555)) {
          uVar11 = unaff_x22;
        }
        ppuVar6 = param_1;
        ppuStack_a8 = param_1;
        FUN_10a0cf4dc();
        puVar1 = (undefined8 *)((long)ppuVar6 + lVar13);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[1] = uStack_e8;
        *puVar1 = uStack_f0;
        puVar1[2] = uStack_e0;
        uStack_f0 = 0;
        uStack_e8 = 0;
        uStack_e0 = 0;
        puVar18 = puVar1 + 3;
        puVar12 = (undefined1 *)((long)puVar1 - ((long)param_1[1] - (long)*param_1));
        _memcpy(puVar12);
        puStack_c8 = *param_1;
        *param_1 = puVar12;
        param_1[1] = (undefined1 *)puVar18;
        puStack_b0 = param_1[2];
        param_1[2] = (undefined1 *)(ppuVar6 + uVar11 * 3);
        puStack_c0 = puStack_c8;
        puStack_b8 = puStack_c8;
        func_0x000107f4e37c(&puStack_c8);
      }
      param_1[1] = (undefined1 *)puVar18;
      ppuVar6 = &puStack_c8;
      puStack_c8 = (undefined1 *)&uStack_f0;
      FUN_10a0426d8();
      lVar13 = 0;
      do {
        if (((char *)((long)register0x00000008 + -0x71))[lVar13] < '\0') {
          ppuVar6 = *(undefined1 ***)((long)alStack_88 + lVar13);
          __ZdlPv();
        }
        lVar13 = lVar13 + -0x18;
      } while (lVar13 != -0x30);
      plVar3 = (long *)plVar16[1];
      plVar17 = plVar16;
      if ((long *)plVar16[1] == (long *)0x0) {
        do {
          plVar16 = (long *)plVar17[2];
          bVar5 = (long *)*plVar16 != plVar17;
          plVar17 = plVar16;
        } while (bVar5);
      }
      else {
        do {
          plVar16 = plVar3;
          plVar3 = (long *)*plVar16;
        } while ((long *)*plVar16 != (long *)0x0);
      }
      unaff_x24 = &uStack_f0;
    } while (plVar16 != plVar8);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  ppuStack_a0 = param_1;
  func_0x00010a0d494c(&ppuStack_a0);
  ppuVar7 = ppuVar6;
  __Unwind_Resume();
  pcStack_f8 = FUN_10a96ec60;
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  ppuVar14 = (undefined1 **)ppuVar7[3];
  if (ppuVar14 != ppuVar7 + 4) {
    uStack_140 = unaff_x26;
    plStack_138 = plVar16;
    puStack_130 = (undefined1 *)unaff_x24;
    pppuStack_128 = unaff_x23;
    uStack_120 = unaff_x22;
    plStack_118 = plVar8;
    ppuStack_110 = ppuVar6;
    ppuStack_108 = param_1;
    puStack_100 = &stack0xfffffffffffffff0;
    do {
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (alStack_1b8,&UNK_10f685beb,ppuVar14 + 4);
      plVar8 = alStack_1b8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (plVar8,&UNK_10f685bf8,9);
      lStack_198 = plVar8[1];
      lStack_1a0 = *plVar8;
      lStack_190 = plVar8[2];
      plVar8[1] = 0;
      plVar8[2] = 0;
      *plVar8 = 0;
      puVar12 = ppuVar14[8];
      ppuVar6 = (undefined1 **)ppuVar14[7];
      if (-1 < (char)*(byte *)((long)ppuVar14 + 0x4f)) {
        puVar12 = (undefined1 *)(ulong)*(byte *)((long)ppuVar14 + 0x4f);
        ppuVar6 = ppuVar14 + 7;
      }
      plVar8 = &lStack_1a0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (plVar8,ppuVar6,puVar12);
      lStack_178 = plVar8[1];
      lStack_180 = *plVar8;
      lStack_170 = plVar8[2];
      plVar8[1] = 0;
      plVar8[2] = 0;
      *plVar8 = 0;
      plVar8 = &lStack_180;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (plVar8,&DAT_10f68f57e,1);
      uStack_158 = plVar8[1];
      ppppuStack_160 = (undefined8 ****)*plVar8;
      uStack_150 = plVar8[2];
      plVar8[1] = 0;
      plVar8[2] = 0;
      *plVar8 = 0;
      uVar9 = uStack_158;
      pppppuVar2 = (undefined8 *****)ppppuStack_160;
      if (-1 < (long)uStack_150) {
        uVar9 = uStack_150 >> 0x38;
        pppppuVar2 = &ppppuStack_160;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (extraout_x8,pppppuVar2,uVar9);
      if ((long)uStack_150 < 0) {
        __ZdlPv(ppppuStack_160);
      }
      if (lStack_170 < 0) {
        __ZdlPv(lStack_180);
      }
      if (lStack_190 < 0) {
        __ZdlPv(lStack_1a0);
      }
      if (cStack_1a1 < '\0') {
        __ZdlPv(alStack_1b8[0]);
      }
      ppuVar6 = (undefined1 **)ppuVar14[1];
      ppuVar15 = ppuVar14;
      if ((undefined1 **)ppuVar14[1] == (undefined1 **)0x0) {
        do {
          ppuVar14 = (undefined1 **)ppuVar15[2];
          bVar5 = (undefined1 **)*ppuVar14 != ppuVar15;
          ppuVar15 = ppuVar14;
        } while (bVar5);
      }
      else {
        do {
          ppuVar14 = ppuVar6;
          ppuVar6 = (undefined1 **)*ppuVar14;
        } while ((undefined1 **)*ppuVar14 != (undefined1 **)0x0);
      }
    } while (ppuVar14 != ppuVar7 + 4);
  }
  return;
}



/* Entry: 10a96ec60; end: 10a96ee7f;  */

void FUN_10a96ec60(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long alStack_c8 [2];
  char cStack_b1;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 **ppuStack_70;
  ulong uStack_68;
  ulong uStack_60;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar6 = *(long **)(param_2 + 0x18);
  if (plVar6 != (long *)(param_2 + 0x20)) {
    do {
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (alStack_c8,&UNK_10f685beb,plVar6 + 4);
      plVar4 = alStack_c8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (plVar4,&UNK_10f685bf8,9);
      lStack_a8 = plVar4[1];
      lStack_b0 = *plVar4;
      lStack_a0 = plVar4[2];
      plVar4[1] = 0;
      plVar4[2] = 0;
      *plVar4 = 0;
      uVar1 = plVar6[8];
      plVar4 = (long *)plVar6[7];
      if (-1 < (char)*(byte *)((long)plVar6 + 0x4f)) {
        uVar1 = (ulong)*(byte *)((long)plVar6 + 0x4f);
        plVar4 = plVar6 + 7;
      }
      plVar5 = &lStack_b0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (plVar5,plVar4,uVar1);
      lStack_88 = plVar5[1];
      lStack_90 = *plVar5;
      lStack_80 = plVar5[2];
      plVar5[1] = 0;
      plVar5[2] = 0;
      *plVar5 = 0;
      plVar4 = &lStack_90;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (plVar4,&DAT_10f68f57e,1);
      uStack_68 = plVar4[1];
      ppuStack_70 = (undefined8 **)*plVar4;
      uStack_60 = plVar4[2];
      plVar4[1] = 0;
      plVar4[2] = 0;
      *plVar4 = 0;
      uVar1 = uStack_68;
      pppuVar2 = (undefined8 ***)ppuStack_70;
      if (-1 < (long)uStack_60) {
        uVar1 = uStack_60 >> 0x38;
        pppuVar2 = &ppuStack_70;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_1,pppuVar2,uVar1);
      if ((long)uStack_60 < 0) {
        __ZdlPv(ppuStack_70);
      }
      if (lStack_80 < 0) {
        __ZdlPv(lStack_90);
      }
      if (lStack_a0 < 0) {
        __ZdlPv(lStack_b0);
      }
      if (cStack_b1 < '\0') {
        __ZdlPv(alStack_c8[0]);
      }
      plVar4 = (long *)plVar6[1];
      plVar5 = plVar6;
      if ((long *)plVar6[1] == (long *)0x0) {
        do {
          plVar6 = (long *)plVar5[2];
          bVar3 = (long *)*plVar6 != plVar5;
          plVar5 = plVar6;
        } while (bVar3);
      }
      else {
        do {
          plVar6 = plVar4;
          plVar4 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
    } while (plVar6 != (long *)(param_2 + 0x20));
  }
  return;
}



/* Entry: 10a96ee80; end: 10a96ef07;  */

undefined1  [16] FUN_10a96ee80(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 7;
  auVar1._0_8_ = &UNK_10f687285;
  return auVar1;
}



/* Entry: 10a96ef08; end: 10a96f36f;  */

void FUN_10a96ef08(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  code *pcVar5;
  ulong uVar6;
  undefined4 uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
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
  
  uVar7 = 4;
  if (*(int *)(param_1 + 0x160) != 100) {
    uVar7 = 0xffffffff;
  }
  func_0x000109887da8(appuStack_c8,&UNK_10f687285,7);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c35318;
  pppuVar2 = (undefined8 ***)&UNK_10f68581c;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0x100000064;
  uStack_80 = CONCAT44(uVar7,0xffffffff);
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
  uVar6 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,uVar7);
  if ((uVar6 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c35318;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  iVar8 = *(int *)(param_1 + 0x160);
  if (*(int *)(param_1 + 0x160) != 100) {
    iVar8 = 0x19;
  }
  uVar6 = param_1;
  FUN_10a0051e8(param_1,iVar8,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar6 & 1) == 0) {
    func_0x00010a06ba0c(param_1,FUN_10a99e7d4,2,1);
  }
  iVar8 = *(int *)(param_1 + 0x160);
  if (iVar8 != 100) {
    iVar8 = 0x19;
  }
  uVar6 = param_1;
  FUN_10a0051e8(param_1,iVar8,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar6 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a96f350;
    FUN_10a054dac(param_1,"text",FUN_10a99eaf8,1,*(undefined8 *)(param_1 + 0x40));
  }
  iVar8 = *(int *)(param_1 + 0x160);
  if (iVar8 != 100) {
    iVar8 = 0x19;
  }
  uVar6 = param_1;
  FUN_10a0051e8(param_1,iVar8,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar6 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a96f350;
    FUN_10a054dac(param_1,"bytes",FUN_10a99ec74,1,*(undefined8 *)(param_1 + 0x40));
  }
  iVar8 = *(int *)(param_1 + 0x160);
  if (iVar8 != 100) {
    iVar8 = 0x19;
  }
  uVar6 = param_1;
  FUN_10a0051e8(param_1,iVar8,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar6 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a96f350;
    FUN_10a054dac(param_1,&DAT_10f368f38,FUN_10a99ed88,1,*(undefined8 *)(param_1 + 0x40));
  }
  iVar8 = *(int *)(param_1 + 0x160);
  if (*(int *)(param_1 + 0x160) != 100) {
    iVar8 = 0x19;
  }
  uVar6 = param_1;
  FUN_10a0051e8(param_1,iVar8,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar6 & 1) == 0) {
    FUN_10a0605c4(param_1,"url",FUN_10a9a1158,0);
  }
  iVar8 = *(int *)(param_1 + 0x160);
  if (iVar8 != 100) {
    iVar8 = 0x19;
  }
  uVar6 = param_1;
  FUN_10a0051e8(param_1,iVar8,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar6 & 1) == 0) {
    FUN_10a0605c4(param_1,"method",FUN_10a9a1300,0);
  }
  iVar8 = *(int *)(param_1 + 0x160);
  if (iVar8 != 100) {
    iVar8 = 0x19;
  }
  uVar6 = param_1;
  FUN_10a0051e8(param_1,iVar8,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar6 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f685c02,FUN_10a9a13dc,0);
  }
  iVar8 = *(int *)(param_1 + 0x160);
  if (iVar8 != 100) {
    iVar8 = 0x19;
  }
  uVar6 = param_1;
  FUN_10a0051e8(param_1,iVar8,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar6 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f685c0b,FUN_10a9a14d4,0);
  }
  iVar8 = *(int *)(param_1 + 0x160);
  if (iVar8 != 100) {
    iVar8 = 0x19;
  }
  uVar6 = param_1;
  FUN_10a0051e8(param_1,iVar8,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar6 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f685c13,FUN_10a9a162c,0);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar9 = *(ulong *)(lVar3 + -0x48);
    uVar10 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar10 >> 0x20);
    uVar7 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_80._4_4_;
    uVar6 = param_1;
    uStack_88 = uVar10;
    uStack_80 = uVar9;
    FUN_10a0051e8(param_1,uVar10 & 0xffffffff,uVar7,uStack_50 & 0xffffffff,uVar9 & 0xffffffff,uVar4)
    ;
    if ((uVar6 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f687285,7);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a96f350:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a96f354);
  (*pcVar5)();
}



/* Entry: 10a96f370; end: 10a96f4a7;  */

undefined8 * FUN_10a96f370(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  
  param_1[1] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = &PTR_FUN_110c31cb0;
  param_1[9] = &PTR_FUN_110c31ce8;
  puVar1 = (undefined8 *)0x48;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110c34730;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[3] = &PTR_FUN_110c332e8;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[6] = puVar1 + 7;
  param_1[0x10] = 0;
  param_1[0xc] = puVar1 + 3;
  param_1[0xd] = puVar1;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((long)param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 1,param_2);
  if (*(char *)(param_3 + 0x18) == '\x01') {
    FUN_10a96f4a8(param_1,param_3);
  }
  return param_1;
}



/* Entry: 10a96f4a8; end: 10a96fa5f;  */

undefined8 ***** FUN_10a96f4a8(long param_1,undefined8 *****param_2)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *****pppppuVar5;
  undefined *puVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 auStack_180 [2];
  char cStack_169;
  undefined1 auStack_168 [8];
  int iStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_138;
  char cStack_121;
  undefined8 uStack_120;
  char cStack_109;
  undefined8 ****ppppuStack_108;
  int iStack_100;
  undefined4 uStack_fc;
  undefined7 uStack_f8;
  byte bStack_f1;
  long lStack_e8;
  undefined8 uStack_d8;
  char cStack_c1;
  undefined8 uStack_c0;
  char cStack_a9;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  byte bStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar5 = param_2;
  FUN_10a96d6a8(param_2,"body");
  if ((int)pppppuVar5 != 0) {
    FUN_10a54bf88(&ppppuStack_108,param_2,"body");
    FUN_10a9a1724(auStack_90,ppppuStack_108,&iStack_100);
    FUN_10a269f70(param_1 + 0x28,auStack_90);
    if (3 < (ulong)bStack_78) goto LAB_10a96f998;
    (*(code *)(&PTR_FUN_110bbab80)[bStack_78])(auStack_90);
    if ((3 < iStack_100) && ((undefined8 *)CONCAT17(bStack_f1,uStack_f8) != (undefined8 *)0x0)) {
      (*(code *)**(undefined8 **)CONCAT17(bStack_f1,uStack_f8))();
    }
  }
  pppppuVar5 = param_2;
  FUN_10a96fac0(param_2,"method");
  if ((int)pppppuVar5 == 0) {
LAB_10a96f688:
    pppppuVar5 = param_2;
    FUN_10a96fb8c();
    if ((int)pppppuVar5 != 0) {
      FUN_10a464bc0(&ppppuStack_108,param_2,&UNK_10f685c0b);
      FUN_10a96fc50(auStack_a0,&ppppuStack_108);
      if ((3 < iStack_100) && ((undefined8 *)CONCAT17(bStack_f1,uStack_f8) != (undefined8 *)0x0)) {
        (*(code *)**(undefined8 **)CONCAT17(bStack_f1,uStack_f8))();
      }
      puStack_a8 = auStack_a0;
      func_0x0001094a830c(&ppppuStack_108,&puStack_a8);
      func_0x0001094a838c(auStack_168,&puStack_a8);
      while( true ) {
        pppppuVar5 = &ppppuStack_108;
        func_0x000109379420(pppppuVar5,auStack_168);
        if ((int)pppppuVar5 != 0) break;
        pppppuVar5 = &ppppuStack_108;
        func_0x0001094a8400(pppppuVar5);
        func_0x00010937b950(&ppppuStack_108);
        uVar10 = *(undefined8 *)(param_1 + 0x60);
        func_0x00010937c804(auStack_180);
        FUN_10a96e298(uVar10,pppppuVar5,auStack_180);
        if (cStack_169 < '\0') {
          __ZdlPv(auStack_180[0]);
        }
        func_0x000109386b30(&ppppuStack_108);
        lStack_e8 = lStack_e8 + 1;
      }
      if (cStack_109 < '\0') {
        __ZdlPv(uStack_120);
      }
      if (cStack_121 < '\0') {
        __ZdlPv(uStack_138);
      }
      if (cStack_a9 < '\0') {
        __ZdlPv(uStack_c0);
      }
      if (cStack_c1 < '\0') {
        __ZdlPv(uStack_d8);
      }
      func_0x000109380ffc(auStack_98,auStack_a0[0]);
    }
    pppppuVar5 = param_2;
    FUN_10a555ce8(param_2,&UNK_10f685c02);
    if ((int)pppppuVar5 == 0) {
LAB_10a96f8b0:
      pppppuVar5 = param_2;
      func_0x000109897c10(param_2,&UNK_10f685c1c);
      if ((int)pppppuVar5 != 0) {
        func_0x000109897cdc(&ppppuStack_108,param_2,&UNK_10f685c1c);
        pppppuVar5 = &ppppuStack_108;
        FUN_10a36bf34();
        *(char *)(param_1 + 0x78) = (char)pppppuVar5;
        if ((3 < iStack_100) &&
           (pppppuVar5 = (undefined8 *****)CONCAT17(bStack_f1,uStack_f8),
           pppppuVar5 != (undefined8 *****)0x0)) {
          (*(code *)**pppppuVar5)();
        }
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
        ___stack_chk_fail();
        if ((3 < iStack_100) && ((undefined8 *)CONCAT17(bStack_f1,uStack_f8) != (undefined8 *)0x0))
        {
          (*(code *)**(undefined8 **)CONCAT17(bStack_f1,uStack_f8))();
        }
        __Unwind_Resume();
        *pppppuVar5 = (undefined8 ****)&PTR_FUN_110c33b08;
        if (3 < (ulong)*(byte *)(pppppuVar5 + 8)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10a96fac0);
          (*pcVar3)();
        }
        (*(code *)(&PTR_FUN_110bbab80)[*(byte *)(pppppuVar5 + 8)])(pppppuVar5 + 5);
        if (*(char *)((long)pppppuVar5 + 0x1f) < '\0') {
          __ZdlPv(pppppuVar5[1]);
        }
        return pppppuVar5;
      }
      return pppppuVar5;
    }
    FUN_10a555db4(auStack_168,param_2,&UNK_10f685c02);
    FUN_10a54c108(&ppppuStack_108,auStack_168);
    ppuVar8 = (undefined **)&UNK_110c31e50;
    lVar7 = 0;
    do {
      puVar6 = (&PTR_DAT_110c31e08)[lVar7 * 3];
      uVar11 = CONCAT44(uStack_fc,iStack_100);
      pppppuVar5 = (undefined8 *****)ppppuStack_108;
      if (-1 < (char)bStack_f1) {
        uVar11 = (ulong)bStack_f1;
        pppppuVar5 = &ppppuStack_108;
      }
      FUN_10a003d5c(puVar6,*(undefined8 *)(&UNK_110c31e10 + lVar7 * 0x18),pppppuVar5,uVar11);
      bVar4 = -1 < (char)puVar6;
      if (bVar4) {
        ppuVar8 = &PTR_DAT_110c31e08 + lVar7 * 3;
      }
      lVar1 = 1;
      if (!bVar4) {
        lVar1 = 2;
      }
      bVar4 = lVar7 == 0;
      lVar7 = lVar1;
    } while (bVar4);
    if (ppuVar8 != (undefined **)&UNK_110c31e50) {
      puVar6 = *ppuVar8;
      uVar11 = CONCAT44(uStack_fc,iStack_100);
      pppppuVar5 = (undefined8 *****)ppppuStack_108;
      if (-1 < (char)bStack_f1) {
        uVar11 = (ulong)bStack_f1;
        pppppuVar5 = &ppppuStack_108;
      }
      FUN_10a003d5c(puVar6,ppuVar8[1],pppppuVar5,uVar11);
      if ((char)puVar6 < '\x01') {
        *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(ppuVar8 + 2);
        if ((char)bStack_f1 < '\0') {
          __ZdlPv(ppppuStack_108);
        }
        if ((3 < iStack_160) && (puStack_158 != (undefined8 *)0x0)) {
          (**(code **)*puStack_158)();
        }
        goto LAB_10a96f8b0;
      }
    }
    func_0x0001093fd0ac(&UNK_10f61d92d);
  }
  else {
    func_0x000109895f40(auStack_168,param_2,"method");
    FUN_10a54c108(&ppppuStack_108,auStack_168);
    uVar11 = 0;
    ppuVar8 = (undefined **)&UNK_110c31e00;
    while( true ) {
      while( true ) {
        ppuVar9 = &PTR_DAT_110c31d88 + uVar11 * 3;
        puVar6 = *ppuVar9;
        uVar2 = CONCAT44(uStack_fc,iStack_100);
        pppppuVar5 = (undefined8 *****)ppppuStack_108;
        if (-1 < (char)bStack_f1) {
          uVar2 = (ulong)bStack_f1;
          pppppuVar5 = &ppppuStack_108;
        }
        FUN_10a003d5c(puVar6,*(undefined8 *)(&UNK_110c31d90 + uVar11 * 0x18),pppppuVar5,uVar2);
        if (((uint)puVar6 >> 7 & 1) == 0) break;
        ppuVar9 = ppuVar8;
        if (1 < uVar11) goto LAB_10a96f614;
        uVar11 = uVar11 * 2 + 2;
      }
      if (1 < uVar11) break;
      uVar11 = uVar11 << 1 | 1;
      ppuVar8 = ppuVar9;
    }
LAB_10a96f614:
    if (ppuVar9 != (undefined **)&UNK_110c31e00) {
      puVar6 = *ppuVar9;
      uVar11 = CONCAT44(uStack_fc,iStack_100);
      pppppuVar5 = (undefined8 *****)ppppuStack_108;
      if (-1 < (char)bStack_f1) {
        uVar11 = (ulong)bStack_f1;
        pppppuVar5 = &ppppuStack_108;
      }
      FUN_10a003d5c(puVar6,ppuVar9[1],pppppuVar5,uVar11);
      if ((char)puVar6 < '\x01' && ppuVar9 != (undefined **)&UNK_110c31e00) {
        *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(ppuVar9 + 2);
        if ((char)bStack_f1 < '\0') {
          __ZdlPv(ppppuStack_108);
        }
        if ((3 < iStack_160) && (puStack_158 != (undefined8 *)0x0)) {
          (**(code **)*puStack_158)();
        }
        goto LAB_10a96f688;
      }
    }
    func_0x0001093fd0ac(&UNK_10f61d92d);
  }
LAB_10a96f998:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a96f99c);
  (*pcVar3)();
}



/* Entry: 10a96fa60; end: 10a96fabf;  */

undefined8 * FUN_10a96fa60(undefined8 *param_1)

{
  code *pcVar1;
  
  *param_1 = &PTR_FUN_110c33b08;
  if ((ulong)*(byte *)(param_1 + 8) < 4) {
    (*(code *)(&PTR_FUN_110bbab80)[*(byte *)(param_1 + 8)])(param_1 + 5);
    if (*(char *)((long)param_1 + 0x1f) < '\0') {
      __ZdlPv(param_1[1]);
    }
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a96fac0);
  (*pcVar1)();
}



/* Entry: 10a96fac0; end: 10a96fb8b;  */

long * FUN_10a96fac0(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puStack_30;
  long *plStack_28;
  
  if (*(int *)(param_1 + 1) == 7) {
    plVar1 = (long *)*param_1;
    (**(code **)(*plVar1 + 0x98))(plVar1,param_1[2]);
    plVar3 = (long *)*param_1;
    uVar2 = param_2;
    plStack_28 = plVar1;
    _strlen(param_2);
    (**(code **)(*plVar3 + 0xb8))(&puStack_30,plVar3,param_2,uVar2);
    (**(code **)(*plVar3 + 0x1b8))(plVar3,&plStack_28,&puStack_30);
    if (puStack_30 != (undefined8 *)0x0) {
      (**(code **)*puStack_30)();
    }
    if (plStack_28 != (long *)0x0) {
      (**(code **)*plStack_28)();
    }
  }
  else {
    plVar3 = (long *)0x0;
  }
  return plVar3;
}



/* Entry: 10a96fb8c; end: 10a96fc4f;  */

long * FUN_10a96fb8c(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puStack_30;
  long *plStack_28;
  
  if (*(int *)(param_1 + 1) == 7) {
    plVar1 = (long *)*param_1;
    (**(code **)(*plVar1 + 0x98))(plVar1,param_1[2]);
    plVar2 = (long *)*param_1;
    plStack_28 = plVar1;
    (**(code **)(*plVar2 + 0xb8))(&puStack_30,plVar2,&UNK_10f685c0b,7);
    (**(code **)(*plVar2 + 0x1b8))(plVar2,&plStack_28,&puStack_30);
    if (puStack_30 != (undefined8 *)0x0) {
      (**(code **)*puStack_30)();
    }
    if (plStack_28 != (long *)0x0) {
      (**(code **)*plStack_28)();
    }
  }
  else {
    plVar2 = (long *)0x0;
  }
  return plVar2;
}



/* Entry: 10a96fc50; end: 10a96fcb3;  */

void FUN_10a96fc50(undefined8 param_1,undefined8 *param_2)

{
  FUN_10a381960(param_1,*param_2,param_2 + 1);
  return;
}



/* Entry: 10a96fcb4; end: 10a96fd1b;  */

void FUN_10a96fcb4(undefined8 param_1,long param_2)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  *(undefined1 *)(param_2 + 0x70) = 1;
  FUN_10a96fd1c(&uStack_38,param_2);
  if (*(char *)(param_2 + 0x97) < '\0') {
    __ZdlPv(*(undefined8 *)(param_2 + 0x80));
  }
  *(undefined8 *)(param_2 + 0x88) = uStack_30;
  *(undefined8 *)(param_2 + 0x80) = uStack_38;
  *(undefined8 *)(param_2 + 0x90) = uStack_28;
  FUN_10a96dac8(param_1,param_2 + 0x80);
  return;
}



/* Entry: 10a96fd1c; end: 10a96fd8b;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a96fe78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a7577ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */

undefined1  [16] FUN_10a96fd1c(undefined8 ***param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 ***pppuVar5;
  undefined8 ***pppuVar6;
  undefined8 **ppuVar7;
  undefined **ppuVar8;
  code **ppcVar9;
  code *pcVar10;
  long lVar11;
  code **ppcVar12;
  undefined8 **ppuVar13;
  undefined1 *puVar14;
  code *pcVar15;
  undefined8 ***pppuVar16;
  undefined8 **ppuVar17;
  code **extraout_x8;
  long lVar18;
  undefined8 extraout_x8_00;
  undefined8 *puVar19;
  long extraout_x9;
  long extraout_x9_00;
  code *pcVar20;
  code **unaff_x19;
  code **unaff_x20;
  undefined8 uVar21;
  code **unaff_x21;
  undefined8 ***unaff_x22;
  undefined8 ***unaff_x29;
  undefined *puVar22;
  undefined8 unaff_x30;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined8 ***pppuStack_140;
  code **ppcStack_138;
  code **ppcStack_130;
  undefined8 **ppuStack_128;
  code **ppcStack_120;
  code *pcStack_118;
  undefined8 **ppuStack_110;
  undefined8 **ppuStack_108;
  undefined8 **ppuStack_100;
  code *pcStack_f8;
  code *pcStack_f0;
  undefined8 **ppuStack_e8;
  code *pcStack_e0;
  code *pcStack_d8;
  code *pcStack_c8;
  undefined8 *apuStack_c0 [3];
  undefined8 *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  code **in_stack_ffffffffffffffa8;
  undefined8 **ppuStack_50;
  undefined8 **ppuStack_48;
  
  cVar2 = *(char *)(param_2 + 0x40);
  if (cVar2 != '\x02') {
    if (cVar2 == '\x01') {
      unaff_x21 = *(code ***)(param_2 + 0x28);
      unaff_x20 = *(code ***)(param_2 + 0x30);
      ppuVar17 = (undefined8 **)((long)unaff_x20 - (long)unaff_x21);
      if (ppuVar17 < (undefined8 **)0x7ffffffffffffff8) {
        ppcVar9 = unaff_x21;
        if (ppuVar17 < (undefined8 **)0x17) {
          *(char *)((long)param_1 + 0x17) = (char)ppuVar17;
          pppuVar6 = param_1;
        }
        else {
          pppuVar5 = (undefined8 ***)0x19;
          if (((ulong)ppuVar17 | 7) != 0x17) {
            pppuVar5 = (undefined8 ***)(((ulong)ppuVar17 | 7) + 1);
          }
          pppuVar6 = pppuVar5;
          __Znwm();
          param_1[1] = ppuVar17;
          param_1[2] = (undefined8 **)((ulong)pppuVar5 | 0x8000000000000000);
          *param_1 = pppuVar6;
          param_1 = pppuVar6;
        }
        for (; unaff_x21 != unaff_x20; unaff_x21 = (code **)((long)unaff_x21 + 1)) {
          *(undefined1 *)param_1 = *(undefined1 *)unaff_x21;
          param_1 = (undefined8 ***)((long)param_1 + 1);
        }
        *(undefined1 *)param_1 = 0;
        auVar26._8_8_ = ppcVar9;
        auVar26._0_8_ = pppuVar6;
        return auVar26;
      }
      func_0x000109ffde50();
      if ((param_1 == (undefined8 ***)0x0) || (*(char *)(param_1 + 8) != '\x02')) {
        if ((param_1 != (undefined8 ***)0x0) && (*(char *)(param_1 + 8) == '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x00010a7576ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*param_1)(unaff_x21,unaff_x20,param_1);
          auVar27._8_8_ = unaff_x20;
          auVar27._0_8_ = unaff_x21;
          return auVar27;
        }
        auVar28._8_8_ = unaff_x21;
        auVar28._0_8_ = param_1;
        return auVar28;
      }
      pppuVar5 = &ppuStack_110;
      pppuVar16 = &ppuStack_110;
      ppuStack_48 = (undefined8 **)FUN_10a7576b4;
      unaff_x29 = &ppuStack_50;
      lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pppuVar6 = param_1;
      unaff_x19 = unaff_x21;
      ppcVar9 = unaff_x20;
      ppuStack_50 = (undefined8 **)&stack0xfffffffffffffff0;
      FUN_10a688b40();
      if (pppuVar6 == (undefined8 ***)0x0) {
        ppcVar12 = (code **)0x0;
        ppuVar17 = (undefined8 **)0x0;
        if (unaff_x19 != (code **)0x0) {
          ppuStack_108 = param_1[1];
          ppuStack_110 = *param_1;
          if (param_1[1] != (undefined8 **)0x0) {
            ppuVar17 = param_1[1] + 1;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
              if (bVar3) {
                *ppuVar17 = (undefined8 *)((long)*ppuVar17 + 1);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          if (*(char *)((long)unaff_x21 + 0x17) < '\0') {
            func_0x000107c3192c(&ppuStack_100,*unaff_x21,unaff_x21[1]);
          }
          else {
            pcStack_f8 = unaff_x21[1];
            ppuStack_100 = (undefined8 **)*unaff_x21;
            pcStack_f0 = unaff_x21[2];
          }
          if (*(char *)((long)unaff_x20 + 0x17) < '\0') {
            pcVar20 = *unaff_x20;
            pcVar15 = unaff_x20[1];
            param_1 = &ppuStack_e8;
            unaff_x30 = 0x10a7577f0;
            goto code_r0x000100033dac;
          }
          pcStack_e0 = unaff_x20[1];
          ppuStack_e8 = (undefined8 **)*unaff_x20;
          pcStack_d8 = unaff_x20[2];
          pcStack_c8 = FUN_10a757c44;
          unaff_x20 = &pcStack_c8;
          FUN_10a757cc0(apuStack_c0,&PTR_FUN_110c17200,&ppuStack_110);
          ppcVar12 = &pcStack_c8;
          FUN_10a4634ec(unaff_x19,ppcVar12);
          ppuVar17 = apuStack_c0;
          (*(code *)*apuStack_c0[0])();
          ppcVar9 = (code **)pppuVar16;
          if ((long)pcStack_d8 < 0) {
            ppuVar17 = ppuStack_e8;
            __ZdlPv();
            ppcVar9 = (code **)pppuVar16;
          }
          if ((long)pcStack_f0 < 0) {
            ppuVar17 = ppuStack_100;
            __ZdlPv();
          }
          ppuVar7 = ppuStack_108;
          if (ppuStack_108 != (undefined8 **)0x0) {
            ppuVar13 = ppuStack_108 + 1;
            do {
              puVar19 = *ppuVar13;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
              if (bVar3) {
                *ppuVar13 = (undefined8 *)((long)puVar19 + -1);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (puVar19 == (undefined8 *)0x0) {
              (*(code *)(*ppuStack_108)[2])(ppuStack_108);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              ppuVar17 = ppuVar7;
            }
          }
        }
      }
      else {
        *pppuVar6 = (undefined8 **)CONCAT44((int)((ulong)*pppuVar6 >> 0x20) + 1,(int)*pppuVar6 + 1);
        ppuVar17 = *param_1;
        ppcVar12 = unaff_x21;
        ppcVar9 = unaff_x20;
        FUN_10a75792c(ppuVar17,unaff_x21,unaff_x20);
        iVar4 = *(int *)((long)pppuVar6 + 4) + -1;
        *(int *)((long)pppuVar6 + 4) = iVar4;
        unaff_x22 = pppuVar6;
        if (iVar4 == 0) {
          *(undefined4 *)pppuVar6 = 0;
        }
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar18) {
        ___stack_chk_fail();
        if ((long)pcStack_f0 < 0) {
          __ZdlPv(ppuStack_100);
        }
        func_0x00010a004dac(&ppuStack_110);
        ppuVar7 = ppuVar17;
        __Unwind_Resume();
        ppuVar13 = &puStack_150;
        pcStack_118 = FUN_10a75792c;
        pppuStack_140 = unaff_x22;
        ppcStack_138 = unaff_x21;
        ppcStack_130 = unaff_x20;
        ppuStack_128 = ppuVar17;
        ppcStack_120 = (code **)unaff_x29;
        func_0x000109884c0c(&puStack_150,ppuVar7 + 1,*ppuVar7);
        func_0x000109884820(&puStack_148,&puStack_150,*ppuVar7);
        if (puStack_150 != (undefined8 *)0x0) {
          (**(code **)*puStack_150)();
        }
        (**(code **)(**ppuVar7 + 0x30))(&puStack_150);
        FUN_10a757a68(*ppuVar7,&puStack_150,&puStack_148,ppcVar12,ppcVar9);
        if (puStack_150 != (undefined8 *)0x0) {
          (**(code **)*puStack_150)();
        }
        if (puStack_148 != (undefined8 *)0x0) {
          (**(code **)*puStack_148)();
        }
        auVar30._8_8_ = ppuVar13;
        auVar30._0_8_ = puStack_148;
        return auVar30;
      }
      auVar29._8_8_ = ppcVar12;
      auVar29._0_8_ = ppuVar17;
      return auVar29;
    }
    if (cVar2 == '\0') {
      if (-1 < *(char *)(param_2 + 0x3f)) {
        ppuVar17 = *(undefined8 ***)(param_2 + 0x28);
        param_1[1] = *(undefined8 ***)(param_2 + 0x30);
        *param_1 = ppuVar17;
        param_1[2] = *(undefined8 ***)(param_2 + 0x38);
        auVar31._8_8_ = param_2;
        auVar31._0_8_ = param_1;
        return auVar31;
      }
      pcVar20 = *(code **)(param_2 + 0x28);
      pcVar15 = *(code **)(param_2 + 0x30);
      pppuVar5 = (undefined8 ***)register0x00000008;
code_r0x000100033dac:
      *(undefined8 ****)((long)pppuVar5 + -0x30) = unaff_x22;
      *(code ***)((long)pppuVar5 + -0x28) = unaff_x21;
      *(code ***)((long)pppuVar5 + -0x20) = unaff_x20;
      *(code ***)((long)pppuVar5 + -0x18) = unaff_x19;
      *(undefined8 ****)((long)pppuVar5 + -0x10) = unaff_x29;
      *(undefined8 *)((long)pppuVar5 + -8) = unaff_x30;
      if ((code *)0x16 < pcVar15) {
        if (pcVar15 < (code *)0x7ffffffffffffff7) {
          pcVar10 = (code *)0x19;
          if (((ulong)pcVar15 | 7) != 0x17) {
            pcVar10 = (code *)(((ulong)pcVar15 | 7) + 1);
          }
          puVar22 = &UNK_100033e00;
        }
        else {
          puVar22 = &UNK_100033e30;
          pcVar10 = pcVar20;
          func_0x000104bd47d4();
        }
        *(code **)((long)pppuVar5 + -0x50) = pcVar15;
        *(code **)((long)pppuVar5 + -0x48) = pcVar20;
        *(undefined1 **)((long)pppuVar5 + -0x40) = (undefined1 *)((long)pppuVar5 + -0x10);
        *(undefined **)((long)pppuVar5 + -0x38) = puVar22;
        pcVar20 = pcVar10;
        func_0x000107c60e20(pcVar10);
        auVar23._8_8_ = pcVar10;
        auVar23._0_8_ = pcVar20;
        return auVar23;
      }
      *(char *)((long)param_1 + 0x17) = (char)pcVar15;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memmove_11034c660)(param_1,pcVar20,pcVar15 + 1);
      auVar34._8_8_ = pcVar20;
      auVar34._0_8_ = param_1;
      return auVar34;
    }
    puVar22 = &UNK_10f68728d;
    FUN_10a05bab8();
    pppuVar5 = (undefined8 ***)&stack0xffffffffffffffa0;
    puVar14 = &stack0xffffffffffffffa0;
    unaff_x29 = (undefined8 ***)&stack0xffffffffffffffe0;
    puVar22[0x70] = 1;
    cVar2 = puVar22[0x40];
    if (cVar2 == '\0') {
      ppuVar8 = &PTR___tlv_bootstrap_11340df48;
      (*(code *)PTR___tlv_bootstrap_11340df48)();
      unaff_x20 = *(code ***)(*ppuVar8 + 0x870);
      if (*(char *)(extraout_x9_00 + 0x3f) < '\0') {
        pcVar20 = *(code **)(extraout_x9_00 + 0x28);
        pcVar15 = *(code **)(extraout_x9_00 + 0x30);
        param_1 = &ppuStack_50;
        unaff_x30 = 0x10a96fe7c;
        unaff_x19 = extraout_x8;
        goto code_r0x000100033dac;
      }
      ppuStack_48 = *(undefined8 ***)(extraout_x9_00 + 0x30);
      ppuStack_50 = *(undefined8 ***)(extraout_x9_00 + 0x28);
      lVar18 = *(long *)(extraout_x9_00 + 0x38);
      FUN_10a970fc8(&stack0xffffffffffffffa0,unaff_x20,&ppuStack_50);
      if (-1 < lVar18) goto LAB_10a96fe9c;
    }
    else {
      if (cVar2 != '\x01') {
        if (cVar2 != '\x02') {
          puVar22 = &UNK_10f68728d;
          FUN_10a05bab8();
          if (ppuStack_50 != (undefined8 **)0x0) {
            ppuStack_48 = ppuStack_50;
            __ZdlPv();
          }
          __Unwind_Resume();
          puVar22[0x70] = 1;
          FUN_10a96fd1c(&puStack_a8,puVar22);
          puVar19 = (undefined8 *)(puVar22 + 0x80);
          if ((char)puVar22[0x97] < '\0') {
            __ZdlPv(*puVar19);
          }
          *(long *)(puVar22 + 0x88) = lStack_a0;
          *puVar19 = puStack_a8;
          *(undefined8 *)(puVar22 + 0x90) = uStack_98;
          lStack_a0 = (long)(char)puVar22[0x97];
          puStack_a8 = puVar19;
          if (lStack_a0 < 0) {
            puStack_a8 = *(undefined8 **)(puVar22 + 0x80);
            lStack_a0 = *(long *)(puVar22 + 0x88);
            if (lStack_a0 < 0) {
                    /* WARNING: Does not return */
              pcVar20 = (code *)SoftwareBreakpoint(1,0x10a96ffd0);
              (*pcVar20)();
            }
          }
          ppuVar17 = &puStack_a8;
          uVar21 = extraout_x8_00;
          FUN_10a96ffd0(extraout_x8_00,ppuVar17);
          auVar33._8_8_ = ppuVar17;
          auVar33._0_8_ = uVar21;
          return auVar33;
        }
        in_stack_ffffffffffffffa8 = *(code ***)(puVar22 + 0x30);
        if (*(long *)(puVar22 + 0x30) != 0) {
          plVar1 = (long *)(*(long *)(puVar22 + 0x30) + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        goto LAB_10a96fe9c;
      }
      ppuVar8 = &PTR___tlv_bootstrap_11340df48;
      (*(code *)PTR___tlv_bootstrap_11340df48)();
      uVar21 = *(undefined8 *)(*ppuVar8 + 0x870);
      ppuStack_50 = (undefined8 **)0x0;
      ppuStack_48 = (undefined8 **)0x0;
      FUN_10a05151c(&ppuStack_50,*(long *)(extraout_x9 + 0x28),*(long *)(extraout_x9 + 0x30),
                    *(long *)(extraout_x9 + 0x30) - *(long *)(extraout_x9 + 0x28));
      FUN_10a12c178(&stack0xffffffffffffffa0,uVar21,&ppuStack_50);
      if (ppuStack_50 == (undefined8 **)0x0) goto LAB_10a96fe9c;
      ppuStack_48 = ppuStack_50;
    }
    __ZdlPv(ppuStack_50);
LAB_10a96fe9c:
    ppcVar9 = extraout_x8;
    FUN_10a96d774(extraout_x8,&stack0xffffffffffffffa0);
    if (in_stack_ffffffffffffffa8 != (code **)0x0) {
      ppcVar12 = in_stack_ffffffffffffffa8 + 1;
      do {
        pcVar20 = *ppcVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppcVar12,0x10);
        if (bVar3) {
          *ppcVar12 = pcVar20 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (pcVar20 == (code *)0x0) {
        (**(code **)(*in_stack_ffffffffffffffa8 + 0x10))(in_stack_ffffffffffffffa8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa8);
        ppcVar9 = in_stack_ffffffffffffffa8;
      }
    }
    auVar32._8_8_ = puVar14;
    auVar32._0_8_ = ppcVar9;
    return auVar32;
  }
  lVar18 = **(long **)(param_2 + 0x28);
  ppuVar17 = (undefined8 **)(*(long **)(param_2 + 0x28))[1];
  if ((undefined8 **)0x7ffffffffffffff7 < ppuVar17) {
    func_0x000109ffde50();
    ppuStack_48 = (undefined8 **)FUN_109ffe100;
    *param_1 = (undefined8 **)0x0;
    param_1[1] = (undefined8 **)0x0;
    param_1[2] = (undefined8 **)0x0;
    lVar11 = 0;
    if (lVar18 != 0) {
      ppuStack_50 = (undefined8 **)&stack0xfffffffffffffff0;
      FUN_109ffe174(param_1);
      ppuVar17 = param_1[1];
      lVar11 = lVar18 << 2;
      _bzero(ppuVar17,lVar11);
      param_1[1] = (undefined8 **)((long)ppuVar17 + lVar18 * 4);
    }
    auVar25._8_8_ = lVar11;
    auVar25._0_8_ = param_1;
    return auVar25;
  }
  if (ppuVar17 < (undefined8 **)0x17) {
    *(char *)((long)param_1 + 0x17) = (char)ppuVar17;
    pppuVar6 = param_1;
    if (ppuVar17 == (undefined8 **)0x0) goto LAB_109ffe0e0;
  }
  else {
    pppuVar5 = (undefined8 ***)0x19;
    if (((ulong)ppuVar17 | 7) != 0x17) {
      pppuVar5 = (undefined8 ***)(((ulong)ppuVar17 | 7) + 1);
    }
    pppuVar6 = pppuVar5;
    __Znwm();
    param_1[1] = ppuVar17;
    param_1[2] = (undefined8 **)((ulong)pppuVar5 | 0x8000000000000000);
    *param_1 = pppuVar6;
  }
  _memmove(pppuVar6,lVar18,ppuVar17);
LAB_109ffe0e0:
  *(undefined1 *)((long)pppuVar6 + (long)ppuVar17) = 0;
  auVar24._8_8_ = lVar18;
  auVar24._0_8_ = param_1;
  return auVar24;
}



/* Entry: 10a96fd8c; end: 10a96ff3b;  */

void FUN_10a96fd8c(undefined8 param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined8 extraout_x8;
  long extraout_x9;
  long extraout_x9_00;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_50;
  long *plStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  
  *(undefined1 *)(param_2 + 0x70) = 1;
  cVar4 = *(char *)(param_2 + 0x40);
  if (cVar4 == '\0') {
    ppuVar7 = &PTR___tlv_bootstrap_11340df48;
    (*(code *)PTR___tlv_bootstrap_11340df48)();
    uVar10 = *(undefined8 *)(*ppuVar7 + 0x870);
    if (*(char *)(extraout_x9_00 + 0x3f) < '\0') {
      func_0x000107c3192c(&lStack_40,*(undefined8 *)(extraout_x9_00 + 0x28),
                          *(undefined8 *)(extraout_x9_00 + 0x30));
    }
    else {
      lStack_38 = *(long *)(extraout_x9_00 + 0x30);
      lStack_40 = *(long *)(extraout_x9_00 + 0x28);
      lStack_30 = *(long *)(extraout_x9_00 + 0x38);
    }
    FUN_10a970fc8(&uStack_50,uVar10,&lStack_40);
    if (-1 < lStack_30) goto LAB_10a96fe9c;
  }
  else {
    if (cVar4 != '\x01') {
      if (cVar4 != '\x02') {
        puVar8 = &UNK_10f68728d;
        FUN_10a05bab8();
        if (lStack_40 != 0) {
          lStack_38 = lStack_40;
          __ZdlPv();
        }
        __Unwind_Resume();
        puVar8[0x70] = 1;
        FUN_10a96fd1c(&puStack_98,puVar8);
        puVar3 = (undefined8 *)(puVar8 + 0x80);
        if ((char)puVar8[0x97] < '\0') {
          __ZdlPv(*puVar3);
        }
        *(long *)(puVar8 + 0x88) = lStack_90;
        *puVar3 = puStack_98;
        *(undefined8 *)(puVar8 + 0x90) = uStack_88;
        lStack_90 = (long)(char)puVar8[0x97];
        puStack_98 = puVar3;
        if (lStack_90 < 0) {
          puStack_98 = *(undefined8 **)(puVar8 + 0x80);
          lStack_90 = *(long *)(puVar8 + 0x88);
          if (lStack_90 < 0) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10a96ffd0);
            (*pcVar6)();
          }
        }
        FUN_10a96ffd0(extraout_x8,&puStack_98);
        return;
      }
      plStack_48 = *(long **)(param_2 + 0x30);
      uStack_50 = *(undefined8 *)(param_2 + 0x28);
      if (*(long *)(param_2 + 0x30) != 0) {
        plVar1 = (long *)(*(long *)(param_2 + 0x30) + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      goto LAB_10a96fe9c;
    }
    ppuVar7 = &PTR___tlv_bootstrap_11340df48;
    (*(code *)PTR___tlv_bootstrap_11340df48)();
    uVar10 = *(undefined8 *)(*ppuVar7 + 0x870);
    lStack_40 = 0;
    lStack_38 = 0;
    lStack_30 = 0;
    FUN_10a05151c(&lStack_40,*(long *)(extraout_x9 + 0x28),*(long *)(extraout_x9 + 0x30),
                  *(long *)(extraout_x9 + 0x30) - *(long *)(extraout_x9 + 0x28));
    FUN_10a12c178(&uStack_50,uVar10,&lStack_40);
    if (lStack_40 == 0) goto LAB_10a96fe9c;
    lStack_38 = lStack_40;
  }
  __ZdlPv(lStack_40);
LAB_10a96fe9c:
  FUN_10a96d774(param_1,&uStack_50);
  plVar1 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar2 = plStack_48 + 1;
    do {
      lVar9 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a96ff3c; end: 10a96ffcf;  */

void FUN_10a96ff3c(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  *(undefined1 *)(param_2 + 0x70) = 1;
  FUN_10a96fd1c(&puStack_48,param_2);
  puVar1 = (undefined8 *)(param_2 + 0x80);
  if (*(char *)(param_2 + 0x97) < '\0') {
    __ZdlPv(*puVar1);
  }
  *(long *)(param_2 + 0x88) = lStack_40;
  *puVar1 = puStack_48;
  *(undefined8 *)(param_2 + 0x90) = uStack_38;
  lStack_40 = (long)*(char *)(param_2 + 0x97);
  puStack_48 = puVar1;
  if (lStack_40 < 0) {
    puStack_48 = *(undefined8 **)(param_2 + 0x80);
    lStack_40 = *(long *)(param_2 + 0x88);
    if (lStack_40 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a96ffd0);
      (*pcVar2)();
    }
  }
  FUN_10a96ffd0(param_1,&puStack_48);
  return;
}



/* Entry: 10a96ffd0; end: 10a97010f;  */

/* WARNING: Removing unreachable block (ram,0x00010a9700b8) */
/* WARNING: Removing unreachable block (ram,0x00010a9700bc) */
/* WARNING: Removing unreachable block (ram,0x00010a9700c4) */
/* WARNING: Removing unreachable block (ram,0x00010a9700cc) */
/* WARNING: Removing unreachable block (ram,0x00010a9700d8) */
/* WARNING: Removing unreachable block (ram,0x00010a9700e0) */
/* WARNING: Removing unreachable block (ram,0x00010a9700e8) */
/* WARNING: Removing unreachable block (ram,0x00010a9700ec) */

void FUN_10a96ffd0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puStack_38;
  
  puVar4 = (undefined8 *)0xb0;
  __Znwm();
  plVar1 = puVar4 + 2;
  puVar4[2] = 0;
  puVar4[1] = 0x200000006;
  *(undefined2 *)(puVar4 + 3) = 4;
  puVar4[5] = 0;
  puVar4[4] = 0;
  puVar4[7] = 0;
  puVar4[6] = 0;
  puVar4[9] = 0;
  puVar4[8] = 0;
  puVar4[0xb] = 0;
  puVar4[10] = 0;
  puVar4[0xd] = 0;
  puVar4[0xc] = 0;
  puVar4[0xf] = 0;
  puVar4[0xe] = 0;
  puVar4[0x10] = 0;
  puVar4[0x11] = puVar4 + 3;
  puVar4[0x12] = 0;
  *puVar4 = &PTR_FUN_110c346f8;
  *(undefined1 *)(puVar4 + 0x13) = 0;
  *(undefined1 *)(puVar4 + 0x15) = 0;
  do {
    lVar5 = *plVar1;
    puStack_38 = puVar4;
    if (lVar5 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        uVar6 = *param_2;
        puVar4[0x14] = param_2[1];
        puVar4[0x13] = uVar6;
        *(undefined1 *)(puVar4 + 0x15) = 1;
        puVar4[2] = 2;
        FUN_109d1b4dc();
        goto LAB_10a97009c;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar5 >> 1 & 1) != 0) {
LAB_10a97009c:
      *param_1 = puVar4;
      func_0x0001092b4274(&puStack_38,puVar4);
      return;
    }
  } while( true );
}



/* Entry: 10a970110; end: 10a9706bb;  */

void FUN_10a970110(undefined8 *param_1,long param_2)

{
  char *pcVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 **ppuVar4;
  code *pcVar5;
  ulong uVar6;
  undefined8 ***pppuVar7;
  undefined8 ***pppuVar8;
  undefined8 **ppuVar9;
  undefined *puVar10;
  undefined1 *puStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 **ppuStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 **ppuStack_60;
  ulong uStack_58;
  ulong uStack_50;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar10 = &UNK_10f685c26;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&UNK_10f685c26,0x11);
  puStack_b0 = (undefined1 *)0x0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uVar6 = (ulong)*(uint *)(param_2 + 0x20);
  FUN_10a971eb8(uVar6);
  if ((undefined *)0x7ffffffffffffff7 < puVar10) {
    func_0x000109ffde50();
    goto LAB_10a9705b8;
  }
  if (puVar10 < (undefined *)0x17) {
    uStack_88 = CONCAT17((char)puVar10,(undefined7)uStack_88);
    pppuVar7 = &ppuStack_98;
    if (puVar10 != (undefined *)0x0) goto LAB_10a9701b0;
  }
  else {
    pppuVar8 = (undefined8 ***)0x19;
    if (((ulong)puVar10 | 7) != 0x17) {
      pppuVar8 = (undefined8 ***)(((ulong)puVar10 | 7) + 1);
    }
    pppuVar7 = pppuVar8;
    __Znwm();
    uStack_88 = (ulong)pppuVar8 | 0x8000000000000000;
    ppuStack_98 = pppuVar7;
    puStack_90 = puVar10;
LAB_10a9701b0:
    _memmove(pppuVar7,uVar6,puVar10);
  }
  *(undefined1 *)((long)pppuVar7 + (long)puVar10) = 0;
  pppuVar8 = &ppuStack_98;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (pppuVar8,0,&UNK_10f685f2f,8);
  puStack_78 = pppuVar8[1];
  puStack_80 = *pppuVar8;
  puStack_70 = pppuVar8[2];
  pppuVar8[1] = (undefined8 **)0x0;
  pppuVar8[2] = (undefined8 **)0x0;
  *pppuVar8 = (undefined8 **)0x0;
  ppuVar9 = &puStack_80;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar9,&DAT_10f68f57e,1);
  uStack_58 = (ulong)ppuVar9[1];
  ppuStack_60 = (undefined8 **)*ppuVar9;
  uStack_50 = (ulong)ppuVar9[2];
  ppuVar9[1] = (undefined8 *)0x0;
  ppuVar9[2] = (undefined8 *)0x0;
  *ppuVar9 = (undefined8 *)0x0;
  puVar2 = (undefined8 *)uStack_58;
  pppuVar8 = (undefined8 ***)ppuStack_60;
  if (-1 < (long)uStack_50) {
    puVar2 = (undefined8 *)(uStack_50 >> 0x38);
    pppuVar8 = &ppuStack_60;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&puStack_b0,pppuVar8,puVar2);
  if ((long)uStack_50 < 0) {
    __ZdlPv(ppuStack_60);
  }
  if ((long)puStack_70 < 0) {
    __ZdlPv(puStack_80);
  }
  if ((long)uStack_88 < 0) {
    __ZdlPv(ppuStack_98);
  }
  FUN_10a96fd1c(&ppuStack_98,param_2);
  pppuVar8 = &ppuStack_98;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (pppuVar8,0,&UNK_10f685f38,6);
  puStack_78 = pppuVar8[1];
  puStack_80 = *pppuVar8;
  puStack_70 = pppuVar8[2];
  pppuVar8[1] = (undefined8 **)0x0;
  pppuVar8[2] = (undefined8 **)0x0;
  *pppuVar8 = (undefined8 **)0x0;
  ppuVar9 = &puStack_80;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar9,&DAT_10f68f57e,1);
  uStack_58 = (ulong)ppuVar9[1];
  ppuStack_60 = (undefined8 **)*ppuVar9;
  uStack_50 = (ulong)ppuVar9[2];
  ppuVar9[1] = (undefined8 *)0x0;
  ppuVar9[2] = (undefined8 *)0x0;
  *ppuVar9 = (undefined8 *)0x0;
  puVar2 = (undefined8 *)uStack_58;
  pppuVar8 = (undefined8 ***)ppuStack_60;
  if (-1 < (long)uStack_50) {
    puVar2 = (undefined8 *)(uStack_50 >> 0x38);
    pppuVar8 = &ppuStack_60;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&puStack_b0,pppuVar8,puVar2);
  if ((long)uStack_50 < 0) {
    __ZdlPv(ppuStack_60);
  }
  if ((long)puStack_70 < 0) {
    __ZdlPv(puStack_80);
  }
  if ((long)uStack_88 < 0) {
    __ZdlPv(ppuStack_98);
  }
  uVar6 = uStack_a8;
  ppuVar4 = (undefined1 **)puStack_b0;
  if (-1 < (long)uStack_a0) {
    uVar6 = uStack_a0 >> 0x38;
    ppuVar4 = &puStack_b0;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,ppuVar4,uVar6);
  if ((long)uStack_a0 < 0) {
    __ZdlPv(puStack_b0);
  }
  (**(code **)(**(long **)(param_2 + 0x60) + 0x30))(&ppuStack_60);
  puVar2 = (undefined8 *)uStack_58;
  pppuVar8 = (undefined8 ***)ppuStack_60;
  if (-1 < (long)uStack_50) {
    puVar2 = (undefined8 *)(uStack_50 >> 0x38);
    pppuVar8 = &ppuStack_60;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,pppuVar8,puVar2);
  if ((long)uStack_50 < 0) {
    __ZdlPv(ppuStack_60);
  }
  iVar3 = *(int *)(param_2 + 0x74);
  if (iVar3 == 0) {
    puVar10 = &DAT_10f685cce;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 != 1) {
        FUN_10a00946c(&UNK_10f685ce2);
LAB_10a9705b8:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10a9705bc);
        (*pcVar5)();
      }
      puVar10 = &DAT_10f685cd5;
      uVar6 = 5;
      goto LAB_10a9703ec;
    }
    puVar10 = &DAT_10f685cdb;
  }
  uVar6 = 6;
LAB_10a9703ec:
  uStack_88 = CONCAT17((char)uVar6,(undefined7)uStack_88);
  _memcpy(&ppuStack_98,puVar10,uVar6);
  *(undefined1 *)((ulong)&ppuStack_98 | uVar6) = 0;
  pppuVar8 = &ppuStack_98;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (pppuVar8,0,&UNK_10f685c38,10);
  puStack_78 = pppuVar8[1];
  puStack_80 = *pppuVar8;
  puStack_70 = pppuVar8[2];
  pppuVar8[1] = (undefined8 **)0x0;
  pppuVar8[2] = (undefined8 **)0x0;
  *pppuVar8 = (undefined8 **)0x0;
  ppuVar9 = &puStack_80;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar9,&DAT_10f68f57e,1);
  uStack_58 = (ulong)ppuVar9[1];
  ppuStack_60 = (undefined8 **)*ppuVar9;
  uStack_50 = (ulong)ppuVar9[2];
  ppuVar9[1] = (undefined8 *)0x0;
  ppuVar9[2] = (undefined8 *)0x0;
  *ppuVar9 = (undefined8 *)0x0;
  puVar2 = (undefined8 *)uStack_58;
  pppuVar8 = (undefined8 ***)ppuStack_60;
  if (-1 < (long)uStack_50) {
    puVar2 = (undefined8 *)(uStack_50 >> 0x38);
    pppuVar8 = &ppuStack_60;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,pppuVar8,puVar2);
  if ((long)uStack_50 < 0) {
    __ZdlPv(ppuStack_60);
  }
  if ((long)puStack_70 < 0) {
    __ZdlPv(puStack_80);
  }
  if ((long)uStack_88 < 0) {
    __ZdlPv(ppuStack_98);
  }
  pcVar1 = "true";
  if (*(char *)(param_2 + 0x78) == '\0') {
    pcVar1 = "false";
  }
  func_0x000107c2b054(&ppuStack_98,pcVar1);
  pppuVar8 = &ppuStack_98;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (pppuVar8,0,&UNK_10f685c43,0xb);
  puStack_78 = pppuVar8[1];
  puStack_80 = *pppuVar8;
  puStack_70 = pppuVar8[2];
  pppuVar8[1] = (undefined8 **)0x0;
  pppuVar8[2] = (undefined8 **)0x0;
  *pppuVar8 = (undefined8 **)0x0;
  ppuVar9 = &puStack_80;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar9,&DAT_10f68f57e,1);
  uStack_58 = (ulong)ppuVar9[1];
  ppuStack_60 = (undefined8 **)*ppuVar9;
  uStack_50 = (ulong)ppuVar9[2];
  ppuVar9[1] = (undefined8 *)0x0;
  ppuVar9[2] = (undefined8 *)0x0;
  *ppuVar9 = (undefined8 *)0x0;
  puVar2 = (undefined8 *)uStack_58;
  pppuVar8 = (undefined8 ***)ppuStack_60;
  if (-1 < (long)uStack_50) {
    puVar2 = (undefined8 *)(uStack_50 >> 0x38);
    pppuVar8 = &ppuStack_60;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,pppuVar8,puVar2);
  if ((long)uStack_50 < 0) {
    __ZdlPv(ppuStack_60);
  }
  if ((long)puStack_70 < 0) {
    __ZdlPv(puStack_80);
  }
  if ((long)uStack_88 < 0) {
    __ZdlPv(ppuStack_98);
  }
  return;
}



/* Entry: 10a9706bc; end: 10a97072f;  */

void FUN_10a9706bc(undefined8 *param_1,long param_2)

{
  char *pcVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 **ppuVar4;
  code *pcVar5;
  ulong uVar6;
  undefined8 ***pppuVar7;
  undefined8 ***pppuVar8;
  undefined8 **ppuVar9;
  undefined *puVar10;
  undefined1 *puStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 **ppuStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 **ppuStack_60;
  ulong uStack_58;
  ulong uStack_50;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar10 = &UNK_10f685c26;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&UNK_10f685c26,0x11);
  puStack_b0 = (undefined1 *)0x0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uVar6 = (ulong)*(uint *)(param_2 + -0x28);
  FUN_10a971eb8(uVar6);
  if ((undefined *)0x7ffffffffffffff7 < puVar10) {
    func_0x000109ffde50();
    goto LAB_10a9705b8;
  }
  if (puVar10 < (undefined *)0x17) {
    uStack_88 = CONCAT17((char)puVar10,(undefined7)uStack_88);
    pppuVar7 = &ppuStack_98;
    if (puVar10 != (undefined *)0x0) goto LAB_10a9701b0;
  }
  else {
    pppuVar8 = (undefined8 ***)0x19;
    if (((ulong)puVar10 | 7) != 0x17) {
      pppuVar8 = (undefined8 ***)(((ulong)puVar10 | 7) + 1);
    }
    pppuVar7 = pppuVar8;
    __Znwm();
    uStack_88 = (ulong)pppuVar8 | 0x8000000000000000;
    ppuStack_98 = pppuVar7;
    puStack_90 = puVar10;
LAB_10a9701b0:
    _memmove(pppuVar7,uVar6,puVar10);
  }
  *(undefined1 *)((long)pppuVar7 + (long)puVar10) = 0;
  pppuVar8 = &ppuStack_98;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (pppuVar8,0,&UNK_10f685f2f,8);
  puStack_78 = pppuVar8[1];
  puStack_80 = *pppuVar8;
  puStack_70 = pppuVar8[2];
  pppuVar8[1] = (undefined8 **)0x0;
  pppuVar8[2] = (undefined8 **)0x0;
  *pppuVar8 = (undefined8 **)0x0;
  ppuVar9 = &puStack_80;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar9,&DAT_10f68f57e,1);
  uStack_58 = (ulong)ppuVar9[1];
  ppuStack_60 = (undefined8 **)*ppuVar9;
  uStack_50 = (ulong)ppuVar9[2];
  ppuVar9[1] = (undefined8 *)0x0;
  ppuVar9[2] = (undefined8 *)0x0;
  *ppuVar9 = (undefined8 *)0x0;
  puVar2 = (undefined8 *)uStack_58;
  pppuVar8 = (undefined8 ***)ppuStack_60;
  if (-1 < (long)uStack_50) {
    puVar2 = (undefined8 *)(uStack_50 >> 0x38);
    pppuVar8 = &ppuStack_60;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&puStack_b0,pppuVar8,puVar2);
  if ((long)uStack_50 < 0) {
    __ZdlPv(ppuStack_60);
  }
  if ((long)puStack_70 < 0) {
    __ZdlPv(puStack_80);
  }
  if ((long)uStack_88 < 0) {
    __ZdlPv(ppuStack_98);
  }
  FUN_10a96fd1c(&ppuStack_98,param_2 + -0x48);
  pppuVar8 = &ppuStack_98;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (pppuVar8,0,&UNK_10f685f38,6);
  puStack_78 = pppuVar8[1];
  puStack_80 = *pppuVar8;
  puStack_70 = pppuVar8[2];
  pppuVar8[1] = (undefined8 **)0x0;
  pppuVar8[2] = (undefined8 **)0x0;
  *pppuVar8 = (undefined8 **)0x0;
  ppuVar9 = &puStack_80;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar9,&DAT_10f68f57e,1);
  uStack_58 = (ulong)ppuVar9[1];
  ppuStack_60 = (undefined8 **)*ppuVar9;
  uStack_50 = (ulong)ppuVar9[2];
  ppuVar9[1] = (undefined8 *)0x0;
  ppuVar9[2] = (undefined8 *)0x0;
  *ppuVar9 = (undefined8 *)0x0;
  puVar2 = (undefined8 *)uStack_58;
  pppuVar8 = (undefined8 ***)ppuStack_60;
  if (-1 < (long)uStack_50) {
    puVar2 = (undefined8 *)(uStack_50 >> 0x38);
    pppuVar8 = &ppuStack_60;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&puStack_b0,pppuVar8,puVar2);
  if ((long)uStack_50 < 0) {
    __ZdlPv(ppuStack_60);
  }
  if ((long)puStack_70 < 0) {
    __ZdlPv(puStack_80);
  }
  if ((long)uStack_88 < 0) {
    __ZdlPv(ppuStack_98);
  }
  uVar6 = uStack_a8;
  ppuVar4 = (undefined1 **)puStack_b0;
  if (-1 < (long)uStack_a0) {
    uVar6 = uStack_a0 >> 0x38;
    ppuVar4 = &puStack_b0;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,ppuVar4,uVar6);
  if ((long)uStack_a0 < 0) {
    __ZdlPv(puStack_b0);
  }
  (**(code **)(**(long **)(param_2 + 0x18) + 0x30))(&ppuStack_60);
  puVar2 = (undefined8 *)uStack_58;
  pppuVar8 = (undefined8 ***)ppuStack_60;
  if (-1 < (long)uStack_50) {
    puVar2 = (undefined8 *)(uStack_50 >> 0x38);
    pppuVar8 = &ppuStack_60;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,pppuVar8,puVar2);
  if ((long)uStack_50 < 0) {
    __ZdlPv(ppuStack_60);
  }
  iVar3 = *(int *)(param_2 + 0x2c);
  if (iVar3 == 0) {
    puVar10 = &DAT_10f685cce;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 != 1) {
        FUN_10a00946c(&UNK_10f685ce2);
LAB_10a9705b8:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10a9705bc);
        (*pcVar5)();
      }
      puVar10 = &DAT_10f685cd5;
      uVar6 = 5;
      goto LAB_10a9703ec;
    }
    puVar10 = &DAT_10f685cdb;
  }
  uVar6 = 6;
LAB_10a9703ec:
  uStack_88 = CONCAT17((char)uVar6,(undefined7)uStack_88);
  _memcpy(&ppuStack_98,puVar10,uVar6);
  *(undefined1 *)((ulong)&ppuStack_98 | uVar6) = 0;
  pppuVar8 = &ppuStack_98;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (pppuVar8,0,&UNK_10f685c38,10);
  puStack_78 = pppuVar8[1];
  puStack_80 = *pppuVar8;
  puStack_70 = pppuVar8[2];
  pppuVar8[1] = (undefined8 **)0x0;
  pppuVar8[2] = (undefined8 **)0x0;
  *pppuVar8 = (undefined8 **)0x0;
  ppuVar9 = &puStack_80;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar9,&DAT_10f68f57e,1);
  uStack_58 = (ulong)ppuVar9[1];
  ppuStack_60 = (undefined8 **)*ppuVar9;
  uStack_50 = (ulong)ppuVar9[2];
  ppuVar9[1] = (undefined8 *)0x0;
  ppuVar9[2] = (undefined8 *)0x0;
  *ppuVar9 = (undefined8 *)0x0;
  puVar2 = (undefined8 *)uStack_58;
  pppuVar8 = (undefined8 ***)ppuStack_60;
  if (-1 < (long)uStack_50) {
    puVar2 = (undefined8 *)(uStack_50 >> 0x38);
    pppuVar8 = &ppuStack_60;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,pppuVar8,puVar2);
  if ((long)uStack_50 < 0) {
    __ZdlPv(ppuStack_60);
  }
  if ((long)puStack_70 < 0) {
    __ZdlPv(puStack_80);
  }
  if ((long)uStack_88 < 0) {
    __ZdlPv(ppuStack_98);
  }
  pcVar1 = "true";
  if (*(char *)(param_2 + 0x30) == '\0') {
    pcVar1 = "false";
  }
  func_0x000107c2b054(&ppuStack_98,pcVar1);
  pppuVar8 = &ppuStack_98;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (pppuVar8,0,&UNK_10f685c43,0xb);
  puStack_78 = pppuVar8[1];
  puStack_80 = *pppuVar8;
  puStack_70 = pppuVar8[2];
  pppuVar8[1] = (undefined8 **)0x0;
  pppuVar8[2] = (undefined8 **)0x0;
  *pppuVar8 = (undefined8 **)0x0;
  ppuVar9 = &puStack_80;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar9,&DAT_10f68f57e,1);
  uStack_58 = (ulong)ppuVar9[1];
  ppuStack_60 = (undefined8 **)*ppuVar9;
  uStack_50 = (ulong)ppuVar9[2];
  ppuVar9[1] = (undefined8 *)0x0;
  ppuVar9[2] = (undefined8 *)0x0;
  *ppuVar9 = (undefined8 *)0x0;
  puVar2 = (undefined8 *)uStack_58;
  pppuVar8 = (undefined8 ***)ppuStack_60;
  if (-1 < (long)uStack_50) {
    puVar2 = (undefined8 *)(uStack_50 >> 0x38);
    pppuVar8 = &ppuStack_60;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,pppuVar8,puVar2);
  if ((long)uStack_50 < 0) {
    __ZdlPv(ppuStack_60);
  }
  if ((long)puStack_70 < 0) {
    __ZdlPv(puStack_80);
  }
  if ((long)uStack_88 < 0) {
    __ZdlPv(ppuStack_98);
  }
  return;
}



/* Entry: 10a970730; end: 10a970c2b;  */

void FUN_10a970730(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  code *pcVar5;
  ulong uVar6;
  undefined4 uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
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
  
  uVar7 = 4;
  if (*(int *)(param_1 + 0x160) != 100) {
    uVar7 = 0xffffffff;
  }
  func_0x000109887da8(appuStack_c8,&DAT_10f2d936d,8);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c352e0;
  pppuVar2 = (undefined8 ***)&UNK_10f68581c;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0x100000064;
  uStack_80 = CONCAT44(uVar7,0xffffffff);
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
  uVar6 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,uVar7);
  if ((uVar6 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c352e0;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  iVar8 = *(int *)(param_1 + 0x160);
  if (*(int *)(param_1 + 0x160) != 100) {
    iVar8 = 0x19;
  }
  uVar6 = param_1;
  FUN_10a0051e8(param_1,iVar8,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar6 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a970c0c;
    FUN_10a054dac(param_1,"text",FUN_10a9a195c,1,*(undefined8 *)(param_1 + 0x40));
  }
  iVar8 = *(int *)(param_1 + 0x160);
  if (iVar8 != 100) {
    iVar8 = 0x19;
  }
  uVar6 = param_1;
  FUN_10a0051e8(param_1,iVar8,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar6 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a970c0c;
    FUN_10a054dac(param_1,"bytes",FUN_10a9a1ad8,1,*(undefined8 *)(param_1 + 0x40));
  }
  iVar8 = *(int *)(param_1 + 0x160);
  if (iVar8 != 100) {
    iVar8 = 0x19;
  }
  uVar6 = param_1;
  FUN_10a0051e8(param_1,iVar8,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar6 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a970c0c;
    FUN_10a054dac(param_1,&DAT_10f368f38,FUN_10a9a1bec,1,*(undefined8 *)(param_1 + 0x40));
  }
  iVar8 = *(int *)(param_1 + 0x160);
  if (iVar8 != 100) {
    iVar8 = 0x19;
  }
  uVar6 = param_1;
  FUN_10a0051e8(param_1,iVar8,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar6 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a970c0c;
    FUN_10a054dac(param_1,&DAT_10f415a81,FUN_10a9a1d00,1,*(undefined8 *)(param_1 + 0x40));
  }
  iVar8 = *(int *)(param_1 + 0x160);
  if (*(int *)(param_1 + 0x160) != 100) {
    iVar8 = 0x19;
  }
  uVar6 = param_1;
  FUN_10a0051e8(param_1,iVar8,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar6 & 1) == 0) {
    func_0x00010a06ba0c(param_1,FUN_10a9a41e8,2,0);
  }
  iVar8 = *(int *)(param_1 + 0x160);
  if (iVar8 != 100) {
    iVar8 = 0x19;
  }
  uVar6 = param_1;
  FUN_10a0051e8(param_1,iVar8,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar6 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f685c4f,FUN_10a9a4a7c,0);
  }
  iVar8 = *(int *)(param_1 + 0x160);
  if (iVar8 != 100) {
    iVar8 = 0x19;
  }
  uVar6 = param_1;
  FUN_10a0051e8(param_1,iVar8,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar6 & 1) == 0) {
    FUN_10a0605c4(param_1,"ok",FUN_10a9a4c34,0);
  }
  iVar8 = *(int *)(param_1 + 0x160);
  if (iVar8 != 100) {
    iVar8 = 0x19;
  }
  uVar6 = param_1;
  FUN_10a0051e8(param_1,iVar8,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar6 & 1) == 0) {
    FUN_10a0605c4(param_1,"status",FUN_10a9a4cf8,0);
  }
  iVar8 = *(int *)(param_1 + 0x160);
  if (iVar8 != 100) {
    iVar8 = 0x19;
  }
  uVar6 = param_1;
  FUN_10a0051e8(param_1,iVar8,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar6 & 1) == 0) {
    FUN_10a0605c4(param_1,"url",FUN_10a9a4db4,0);
  }
  iVar8 = *(int *)(param_1 + 0x160);
  if (iVar8 != 100) {
    iVar8 = 0x19;
  }
  uVar6 = param_1;
  FUN_10a0051e8(param_1,iVar8,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar6 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f685c0b,FUN_10a9a4ef4,0);
  }
  iVar8 = *(int *)(param_1 + 0x160);
  if (iVar8 != 100) {
    iVar8 = 0x19;
  }
  uVar6 = param_1;
  FUN_10a0051e8(param_1,iVar8,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar6 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f685c13,FUN_10a9a4fac,0);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar9 = *(ulong *)(lVar3 + -0x48);
    uVar10 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar10 >> 0x20);
    uVar7 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_80._4_4_;
    uVar6 = param_1;
    uStack_88 = uVar10;
    uStack_80 = uVar9;
    FUN_10a0051e8(param_1,uVar10 & 0xffffffff,uVar7,uStack_50 & 0xffffffff,uVar9 & 0xffffffff,uVar4)
    ;
    if ((uVar6 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&DAT_10f2d936d,8);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a970c0c:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a970c10);
  (*pcVar5)();
}



/* Entry: 10a970c2c; end: 10a970d0f;  */

undefined8 *
FUN_10a970c2c(undefined8 *param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_110c31d40;
  *(undefined4 *)(param_1 + 5) = param_2;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 6,*param_3,param_3[1]);
  }
  else {
    uVar6 = param_3[1];
    uVar5 = *param_3;
    param_1[8] = param_3[2];
    param_1[7] = uVar6;
    param_1[6] = uVar5;
  }
  lVar4 = param_4[1];
  uVar5 = *param_4;
  param_1[10] = param_4[1];
  param_1[9] = uVar5;
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
  uVar6 = param_5[1];
  uVar5 = *param_5;
  param_1[0xd] = param_5[2];
  param_1[0xc] = uVar6;
  param_1[0xb] = uVar5;
  param_5[1] = 0;
  param_5[2] = 0;
  *param_5 = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  return param_1;
}



/* Entry: 10a970d10; end: 10a970e1b;  */

/* WARNING: Removing unreachable block (ram,0x00010a970db0) */
/* WARNING: Removing unreachable block (ram,0x00010a970db4) */
/* WARNING: Removing unreachable block (ram,0x00010a970dbc) */
/* WARNING: Removing unreachable block (ram,0x00010a970dc4) */
/* WARNING: Removing unreachable block (ram,0x00010a970dd0) */
/* WARNING: Removing unreachable block (ram,0x00010a970dd8) */
/* WARNING: Removing unreachable block (ram,0x00010a970de0) */
/* WARNING: Removing unreachable block (ram,0x00010a970de4) */

void FUN_10a970d10(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puStack_38;
  
  *(undefined1 *)(param_2 + 0x70) = 1;
  puVar1 = (undefined8 *)0xb8;
  __Znwm();
  *(undefined2 *)(puVar1 + 3) = 4;
  puVar1[2] = 0;
  puVar1[1] = 0x200000006;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = puVar1 + 3;
  puVar1[0x12] = 0;
  *puVar1 = &PTR_DAT_110be8e80;
  *(undefined1 *)(puVar1 + 0x13) = 0;
  *(undefined1 *)(puVar1 + 0x16) = 0;
  puStack_38 = puVar1;
  FUN_10a84df14();
  *param_1 = puVar1;
  func_0x0001092b4274(&puStack_38,puVar1);
  return;
}



/* Entry: 10a970e1c; end: 10a970fc7;  */

void FUN_10a970e1c(undefined8 *param_1,long param_2)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  long extraout_x9;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plStack_60;
  undefined8 *puStack_58;
  long lStack_50;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  *(undefined1 *)(param_2 + 0x70) = 1;
  ppuVar5 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  uVar9 = *(undefined8 *)(*ppuVar5 + 0x870);
  if (*(char *)(extraout_x9 + 0x6f) < '\0') {
    func_0x000107c3192c(&plStack_60,*(undefined8 *)(extraout_x9 + 0x58),
                        *(undefined8 *)(extraout_x9 + 0x60));
  }
  else {
    puStack_58 = *(undefined8 **)(extraout_x9 + 0x60);
    plStack_60 = *(long **)(extraout_x9 + 0x58);
    lStack_50 = *(long *)(extraout_x9 + 0x68);
  }
  FUN_10a970fc8(auStack_40,uVar9,&plStack_60);
  if (lStack_50 < 0) {
    __ZdlPv(plStack_60);
  }
  puVar6 = (undefined8 *)0xb0;
  __Znwm();
  *(undefined2 *)(puVar6 + 3) = 4;
  puVar6[2] = 0;
  puVar6[1] = 0x200000006;
  puVar6[5] = 0;
  puVar6[4] = 0;
  puVar6[7] = 0;
  puVar6[6] = 0;
  puVar6[9] = 0;
  puVar6[8] = 0;
  puVar6[0xb] = 0;
  puVar6[10] = 0;
  puVar6[0xd] = 0;
  puVar6[0xc] = 0;
  puVar6[0xf] = 0;
  puVar6[0xe] = 0;
  puVar6[0x10] = 0;
  puVar6[0x11] = puVar6 + 3;
  puVar6[0x12] = 0;
  *puVar6 = &PTR_FUN_110ba6b10;
  *(undefined1 *)(puVar6 + 0x13) = 0;
  *(undefined1 *)(puVar6 + 0x15) = 0;
  puStack_58 = puVar6;
  FUN_10a13c980();
  *param_1 = puVar6;
  plStack_60 = (long *)0x0;
  func_0x0001092b4274(&puStack_58,puVar6);
  if (plStack_60 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_60 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plStack_60 + 8))();
      }
    }
  }
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
    do {
      lVar8 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  return;
}



/* Entry: 10a970fc8; end: 10a9711cf;  */

void FUN_10a970fc8(long *param_1,long param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 extraout_x8;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plStack_e0;
  long lStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined8 *puStack_78;
  long lStack_48;
  
  plVar5 = &lStack_c0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = (undefined8 *)0x18;
  __Znwm();
  puVar2[2] = param_3[2];
  uVar8 = *param_3;
  puVar2[1] = param_3[1];
  *puVar2 = uVar8;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  lVar6 = (long)*(char *)((long)puVar2 + 0x17);
  puVar3 = puVar2;
  if (lVar6 < 0) {
    lVar6 = puVar2[1];
    puVar3 = (undefined8 *)*puVar2;
  }
  lStack_b8 = 0;
  lVar7 = *(long *)(param_2 + 0x68);
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 0x70);
  lVar7 = *(long *)(lVar7 + 0xb8);
  if ((*(byte *)(lVar7 + 0x1e0) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a971148);
    (*pcVar1)();
  }
  lStack_c0 = 0;
  pcStack_88 = FUN_10a989d44;
  ppuStack_80 = &PTR_DAT_110c33b18;
  lStack_b0 = 0;
  puStack_78 = puVar2;
  FUN_10a12c348(&uStack_a8,*(undefined8 *)(lVar7 + 0x50),puVar3,lVar6,&pcStack_88);
  puVar3 = (undefined8 *)0x38;
  __Znwm();
  puVar3[4] = uStack_a0;
  puVar3[3] = uStack_a8;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_DAT_110ba7910;
  puVar3[6] = uStack_90;
  puVar3[5] = uStack_98;
  uStack_98 = 0;
  uStack_90 = 0;
  *param_1 = (long)(puVar3 + 3);
  param_1[1] = (long)puVar3;
  (*(code *)*ppuStack_80)(&ppuStack_80);
  lVar6 = lStack_b0;
  lStack_b0 = 0;
  if (lVar6 != 0) {
    func_0x00010a31f3b0(&lStack_b0);
  }
  plVar4 = (long *)(param_2 + 0x70);
  __ZNSt3__115recursive_mutex6unlockEv();
  lVar6 = lStack_c0;
  lStack_c0 = 0;
  if (lVar6 != 0) {
    func_0x00010a31f3b0();
    lVar6 = lStack_b8;
    lStack_b8 = 0;
    plVar4 = plVar5;
    if (lVar6 != 0) {
      plVar4 = &lStack_b8;
      func_0x00010a31f3b0();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_10a12c460(&uStack_98);
    (*(code *)*ppuStack_80)(&ppuStack_80);
    lVar6 = lStack_b0;
    lStack_b0 = 0;
    if (lVar6 != 0) {
      func_0x00010a31f3b0(&lStack_b0);
    }
    __ZNSt3__115recursive_mutex6unlockEv(param_2 + 0x70);
    lVar6 = lStack_c0;
    lStack_c0 = 0;
    if (lVar6 != 0) {
      func_0x00010a31f3b0(&lStack_c0,lVar6);
      lVar6 = lStack_b8;
      lStack_b8 = 0;
      if (lVar6 != 0) {
        func_0x00010a31f3b0(&lStack_b8);
      }
    }
    __Unwind_Resume();
    pcStack_c8 = FUN_10a9711d0;
    *(undefined1 *)(plVar4 + 0xe) = 1;
    lStack_d8 = (long)*(char *)((long)plVar4 + 0x6f);
    puStack_d0 = &stack0xfffffffffffffff0;
    if (lStack_d8 < 0) {
      plStack_e0 = (long *)plVar4[0xb];
      lStack_d8 = plVar4[0xc];
      if (lStack_d8 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a971220);
        (*pcVar1)();
      }
    }
    else {
      plStack_e0 = plVar4 + 0xb;
    }
    FUN_10a96ffd0(extraout_x8,&plStack_e0);
    return;
  }
  return;
}



/* Entry: 10a9711d0; end: 10a97121f;  */

void FUN_10a9711d0(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long lStack_20;
  long lStack_18;
  
  *(undefined1 *)(param_2 + 0x70) = 1;
  lStack_18 = (long)*(char *)(param_2 + 0x6f);
  if (lStack_18 < 0) {
    lStack_20 = *(long *)(param_2 + 0x58);
    lStack_18 = *(long *)(param_2 + 0x60);
    if (lStack_18 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a971220);
      (*pcVar1)();
    }
  }
  else {
    lStack_20 = param_2 + 0x58;
  }
  FUN_10a96ffd0(param_1,&lStack_20);
  return;
}



/* Entry: 10a971220; end: 10a97147b;  */

void FUN_10a971220(undefined8 *param_1,long param_2)

{
  long *plVar1;
  ulong *puVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  long extraout_x9;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined1 auStack_70 [8];
  long *plStack_68;
  long *plStack_60;
  undefined8 *puStack_58;
  long lStack_50;
  undefined8 uStack_40;
  long *plStack_38;
  
  *(undefined1 *)(param_2 + 0x70) = 1;
  ppuVar6 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  uVar10 = *(undefined8 *)(*ppuVar6 + 0x870);
  if (*(char *)(extraout_x9 + 0x6f) < '\0') {
    func_0x000107c3192c(&plStack_60,*(undefined8 *)(extraout_x9 + 0x58),
                        *(undefined8 *)(extraout_x9 + 0x60));
  }
  else {
    puStack_58 = *(undefined8 **)(extraout_x9 + 0x60);
    plStack_60 = *(long **)(extraout_x9 + 0x58);
    lStack_50 = *(long *)(extraout_x9 + 0x68);
  }
  FUN_10a970fc8(&uStack_40,uVar10,&plStack_60);
  if (lStack_50 < 0) {
    __ZdlPv(plStack_60);
  }
  plVar3 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_10a96d604(auStack_70,uStack_40,plStack_38);
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  puVar7 = (undefined8 *)0xb0;
  __Znwm();
  *(undefined2 *)(puVar7 + 3) = 4;
  puVar7[2] = 0;
  puVar7[1] = 0x200000006;
  puVar7[5] = 0;
  puVar7[4] = 0;
  puVar7[7] = 0;
  puVar7[6] = 0;
  puVar7[9] = 0;
  puVar7[8] = 0;
  puVar7[0xb] = 0;
  puVar7[10] = 0;
  puVar7[0xd] = 0;
  puVar7[0xc] = 0;
  puVar7[0xf] = 0;
  puVar7[0xe] = 0;
  puVar7[0x10] = 0;
  puVar7[0x11] = puVar7 + 3;
  puVar7[0x12] = 0;
  *puVar7 = &PTR_FUN_110c347d0;
  *(undefined1 *)(puVar7 + 0x13) = 0;
  *(undefined1 *)(puVar7 + 0x15) = 0;
  puStack_58 = puVar7;
  func_0x00010a9a4118();
  *param_1 = puVar7;
  plStack_60 = (long *)0x0;
  func_0x0001092b4274(&puStack_58,puVar7);
  if (plStack_60 != (long *)0x0) {
    puVar2 = (ulong *)(plStack_60 + 1);
    do {
      uVar9 = *puVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar5) {
        *puVar2 = uVar9 - 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar9 & 0x1fffffffc) == 4) {
      do {
        uVar9 = *puVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = uVar9 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar9 - 1 == 0) {
        (**(code **)(*plStack_60 + 8))();
      }
    }
  }
  if (plStack_68 != (long *)0x0) {
    plVar3 = plStack_68 + 1;
    do {
      lVar8 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
    }
  }
  if (plStack_38 != (long *)0x0) {
    plVar3 = plStack_38 + 1;
    do {
      lVar8 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  return;
}



/* Entry: 10a97147c; end: 10a9714df;  */

undefined *** FUN_10a97147c(long *param_1)

{
  undefined ***pppuVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  bool bVar8;
  long *plVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined **ppuVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined ***pppuStack_100;
  undefined ***pppuStack_f0;
  undefined ***pppuStack_d0;
  undefined ***pppuStack_c0;
  undefined ***pppuStack_b0;
  code *pcStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  undefined ***pppuStack_80;
  long lStack_58;
  
  cVar5 = (char)param_1[3];
  if (cVar5 == '\x02') {
    uVar12 = *(ulong *)(*param_1 + 8);
LAB_10a9714c0:
    bVar8 = uVar12 == 0;
LAB_10a9714c4:
    return (undefined ***)(ulong)bVar8;
  }
  if (cVar5 == '\x01') {
    bVar8 = *param_1 == param_1[1];
    goto LAB_10a9714c4;
  }
  if (cVar5 == '\0') {
    uVar12 = param_1[1];
    if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
      uVar12 = (ulong)*(byte *)((long)param_1 + 0x17);
    }
    goto LAB_10a9714c0;
  }
  plVar9 = (long *)&UNK_10f68728d;
  FUN_10a05bab8();
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *plVar9;
  pppuVar11 = (undefined ***)plVar9[1];
  if (pppuVar11 == (undefined ***)0x0) {
    pppuStack_d0 = (undefined ***)0x0;
    pppuStack_f0 = (undefined ***)0x0;
    lVar15 = lVar2;
LAB_10a9715c4:
    pppuStack_c0 = (undefined ***)0x0;
    bVar8 = true;
    pppuStack_100 = (undefined ***)0x0;
    lVar16 = lVar15;
LAB_10a9715d8:
    pppuStack_b0 = (undefined ***)0x0;
    bVar6 = true;
    lVar17 = lVar16;
  }
  else {
    pppuVar10 = pppuVar11 + 1;
    do {
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pppuVar10,0x10);
      if (bVar8) {
        *pppuVar10 = (undefined **)((long)*pppuVar10 + 1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pppuVar10,0x10);
      if (bVar8) {
        *pppuVar10 = (undefined **)((long)*pppuVar10 + 1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar15 = *plVar9;
    pppuStack_f0 = (undefined ***)plVar9[1];
    pppuStack_d0 = pppuVar11;
    if (pppuStack_f0 == (undefined ***)0x0) goto LAB_10a9715c4;
    pppuVar10 = pppuStack_f0 + 1;
    do {
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pppuVar10,0x10);
      if (bVar8) {
        *pppuVar10 = (undefined **)((long)*pppuVar10 + 1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pppuVar10,0x10);
      if (bVar8) {
        *pppuVar10 = (undefined **)((long)*pppuVar10 + 1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar16 = *plVar9;
    pppuStack_100 = (undefined ***)plVar9[1];
    pppuStack_c0 = pppuStack_f0;
    if (pppuStack_100 == (undefined ***)0x0) {
      bVar8 = false;
      goto LAB_10a9715d8;
    }
    pppuVar10 = pppuStack_100 + 1;
    do {
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pppuVar10,0x10);
      if (bVar8) {
        *pppuVar10 = (undefined **)((long)*pppuVar10 + 1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pppuVar10,0x10);
      if (bVar8) {
        *pppuVar10 = (undefined **)((long)*pppuVar10 + 1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar6 = false;
    bVar8 = false;
    lVar17 = *plVar9;
    pppuStack_b0 = pppuStack_100;
  }
  cVar5 = *(char *)(lVar17 + 0x40);
  if (cVar5 == '\x02') {
    puVar13 = *(undefined8 **)(lVar17 + 0x28);
    uVar3 = *puVar13;
    uVar4 = puVar13[1];
    if (bVar6) {
      pppuStack_80 = (undefined ***)0x0;
    }
    else {
      pppuVar10 = pppuStack_b0 + 1;
      do {
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pppuVar10,0x10);
        if (bVar8) {
          *pppuVar10 = (undefined **)((long)*pppuVar10 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      do {
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pppuVar10,0x10);
        if (bVar8) {
          *pppuVar10 = (undefined **)((long)*pppuVar10 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
        pppuStack_80 = pppuStack_b0;
      } while (cVar5 != '\0');
    }
    ppuStack_90 = &PTR_DAT_110c34898;
    pppuVar10 = &ppuStack_90;
    pcStack_98 = (code *)0x10a9a50e4;
    lStack_88 = lVar16;
    FUN_10a3bf6d0(uVar3,uVar4,&pcStack_98);
    (*(code *)*ppuStack_90)(pppuVar10);
    if (!bVar6) {
      pppuVar1 = pppuStack_b0 + 1;
      do {
        ppuVar14 = *pppuVar1;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
        if (bVar8) {
          *pppuVar1 = (undefined **)((long)ppuVar14 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (ppuVar14 == (undefined **)0x0) {
        (*(code *)(*pppuStack_b0)[2])(pppuStack_b0);
        pppuVar10 = pppuStack_b0;
LAB_10a971848:
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar10);
      }
    }
  }
  else if (cVar5 == '\x01') {
    lVar2 = *(long *)(lVar17 + 0x28);
    lVar16 = *(long *)(lVar17 + 0x30);
    if (bVar8) {
      pppuStack_80 = (undefined ***)0x0;
    }
    else {
      pppuVar10 = pppuStack_c0 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pppuVar10,0x10);
        if (bVar6) {
          *pppuVar10 = (undefined **)((long)*pppuVar10 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pppuVar10,0x10);
        if (bVar6) {
          *pppuVar10 = (undefined **)((long)*pppuVar10 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
        pppuStack_80 = pppuStack_c0;
      } while (cVar5 != '\0');
    }
    ppuStack_90 = &PTR_DAT_110c34880;
    pppuVar10 = &ppuStack_90;
    pcStack_98 = (code *)0x10a9a50a4;
    lStack_88 = lVar15;
    FUN_10a3bf6d0(lVar2,lVar16 - lVar2,&pcStack_98);
    (*(code *)*ppuStack_90)(pppuVar10);
    if (!bVar8) {
      pppuVar1 = pppuStack_c0 + 1;
      do {
        ppuVar14 = *pppuVar1;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
        if (bVar8) {
          *pppuVar1 = (undefined **)((long)ppuVar14 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (ppuVar14 == (undefined **)0x0) {
        (*(code *)(*pppuStack_c0)[2])(pppuStack_c0);
        pppuVar10 = pppuStack_c0;
        goto LAB_10a971848;
      }
    }
  }
  else {
    if (cVar5 != '\0') goto LAB_10a9719d0;
    uVar12 = *(ulong *)(lVar17 + 0x30);
    puVar13 = *(undefined8 **)(lVar17 + 0x28);
    if (-1 < (char)*(byte *)(lVar17 + 0x3f)) {
      uVar12 = (ulong)*(byte *)(lVar17 + 0x3f);
      puVar13 = (undefined8 *)(lVar17 + 0x28);
    }
    if (pppuVar11 == (undefined ***)0x0) {
      pppuStack_80 = (undefined ***)0x0;
    }
    else {
      pppuVar10 = pppuVar11 + 1;
      do {
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pppuVar10,0x10);
        if (bVar8) {
          *pppuVar10 = (undefined **)((long)*pppuVar10 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      do {
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pppuVar10,0x10);
        if (bVar8) {
          *pppuVar10 = (undefined **)((long)*pppuVar10 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
        pppuStack_80 = pppuVar11;
      } while (cVar5 != '\0');
    }
    ppuStack_90 = &PTR_DAT_110c34868;
    pppuVar10 = &ppuStack_90;
    pcStack_98 = FUN_10a9a5064;
    lStack_88 = lVar2;
    FUN_10a3bf6d0(puVar13,uVar12,&pcStack_98);
    (*(code *)*ppuStack_90)(pppuVar10);
    if (pppuVar11 != (undefined ***)0x0) {
      pppuVar1 = pppuVar11 + 1;
      do {
        ppuVar14 = *pppuVar1;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
        if (bVar8) {
          *pppuVar1 = (undefined **)((long)ppuVar14 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (ppuVar14 == (undefined **)0x0) {
        (*(code *)(*pppuVar11)[2])(pppuVar11);
        pppuVar10 = pppuVar11;
        goto LAB_10a971848;
      }
    }
  }
  if (pppuStack_b0 != (undefined ***)0x0) {
    pppuVar1 = pppuStack_b0 + 1;
    do {
      ppuVar14 = *pppuVar1;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
      if (bVar8) {
        *pppuVar1 = (undefined **)((long)ppuVar14 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (ppuVar14 == (undefined **)0x0) {
      (*(code *)(*pppuStack_b0)[2])(pppuStack_b0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuStack_b0);
      pppuVar10 = pppuStack_b0;
    }
  }
  if (pppuStack_c0 != (undefined ***)0x0) {
    pppuVar1 = pppuStack_c0 + 1;
    do {
      ppuVar14 = *pppuVar1;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
      if (bVar8) {
        *pppuVar1 = (undefined **)((long)ppuVar14 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (ppuVar14 == (undefined **)0x0) {
      (*(code *)(*pppuStack_c0)[2])(pppuStack_c0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuStack_c0);
      pppuVar10 = pppuStack_c0;
    }
  }
  if (pppuStack_d0 != (undefined ***)0x0) {
    pppuVar1 = pppuStack_d0 + 1;
    do {
      ppuVar14 = *pppuVar1;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
      if (bVar8) {
        *pppuVar1 = (undefined **)((long)ppuVar14 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (ppuVar14 == (undefined **)0x0) {
      (*(code *)(*pppuStack_d0)[2])(pppuStack_d0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuStack_d0);
      pppuVar10 = pppuStack_d0;
    }
  }
  if (pppuStack_100 != (undefined ***)0x0) {
    pppuVar1 = pppuStack_100 + 1;
    do {
      ppuVar14 = *pppuVar1;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
      if (bVar8) {
        *pppuVar1 = (undefined **)((long)ppuVar14 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (ppuVar14 == (undefined **)0x0) {
      (*(code *)(*pppuStack_100)[2])(pppuStack_100);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuStack_100);
      pppuVar10 = pppuStack_100;
    }
  }
  if (pppuStack_f0 != (undefined ***)0x0) {
    pppuVar1 = pppuStack_f0 + 1;
    do {
      ppuVar14 = *pppuVar1;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
      if (bVar8) {
        *pppuVar1 = (undefined **)((long)ppuVar14 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (ppuVar14 == (undefined **)0x0) {
      (*(code *)(*pppuStack_f0)[2])(pppuStack_f0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuStack_f0);
      pppuVar10 = pppuStack_f0;
    }
  }
  if (pppuVar11 != (undefined ***)0x0) {
    pppuVar1 = pppuVar11 + 1;
    do {
      ppuVar14 = *pppuVar1;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
      if (bVar8) {
        *pppuVar1 = (undefined **)((long)ppuVar14 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (ppuVar14 == (undefined **)0x0) {
      (*(code *)(*pppuVar11)[2])(pppuVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar11);
      pppuVar10 = pppuVar11;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pppuVar10;
  }
  ___stack_chk_fail();
LAB_10a9719d0:
  FUN_10a05bab8(&UNK_10f68728d);
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a9719e0);
  (*pcVar7)();
}



/* Entry: 10a9714e0; end: 10a971a43;  */

void FUN_10a9714e0(long *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  code *pcVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plStack_f0;
  long *plStack_e0;
  long *plStack_c0;
  long *plStack_b0;
  long *plStack_a0;
  code *pcStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  long *plStack_70;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = *param_1;
  plVar3 = (long *)param_1[1];
  if (plVar3 == (long *)0x0) {
    plStack_c0 = (long *)0x0;
    plStack_e0 = (long *)0x0;
    lVar12 = lVar11;
LAB_10a9715c4:
    plStack_b0 = (long *)0x0;
    bVar6 = true;
    plStack_f0 = (long *)0x0;
    lVar13 = lVar12;
LAB_10a9715d8:
    plStack_a0 = (long *)0x0;
    bVar7 = true;
    lVar14 = lVar13;
  }
  else {
    plVar9 = plVar3 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = *plVar9 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = *plVar9 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar12 = *param_1;
    plStack_e0 = (long *)param_1[1];
    plStack_c0 = plVar3;
    if (plStack_e0 == (long *)0x0) goto LAB_10a9715c4;
    plVar9 = plStack_e0 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = *plVar9 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = *plVar9 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar13 = *param_1;
    plStack_f0 = (long *)param_1[1];
    plStack_b0 = plStack_e0;
    if (plStack_f0 == (long *)0x0) {
      bVar6 = false;
      goto LAB_10a9715d8;
    }
    plVar9 = plStack_f0 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = *plVar9 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = *plVar9 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar7 = false;
    bVar6 = false;
    lVar14 = *param_1;
    plStack_a0 = plStack_f0;
  }
  cVar5 = *(char *)(lVar14 + 0x40);
  if (cVar5 == '\x02') {
    puVar10 = *(undefined8 **)(lVar14 + 0x28);
    uVar2 = *puVar10;
    uVar4 = puVar10[1];
    if (bVar7) {
      plStack_70 = (long *)0x0;
    }
    else {
      plVar9 = plStack_a0 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *plVar9 = *plVar9 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *plVar9 = *plVar9 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        plStack_70 = plStack_a0;
      } while (cVar5 != '\0');
    }
    ppuStack_80 = &PTR_DAT_110c34898;
    pcStack_88 = (code *)0x10a9a50e4;
    lStack_78 = lVar13;
    FUN_10a3bf6d0(uVar2,uVar4,&pcStack_88);
    (*(code *)*ppuStack_80)(&ppuStack_80);
    if (!bVar7) {
      plVar9 = plStack_a0 + 1;
      do {
        lVar11 = *plVar9;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *plVar9 = lVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
        plVar9 = plStack_a0;
LAB_10a971848:
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
  }
  else if (cVar5 == '\x01') {
    lVar11 = *(long *)(lVar14 + 0x28);
    lVar13 = *(long *)(lVar14 + 0x30);
    if (bVar6) {
      plStack_70 = (long *)0x0;
    }
    else {
      plVar9 = plStack_b0 + 1;
      do {
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar7) {
          *plVar9 = *plVar9 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      do {
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar7) {
          *plVar9 = *plVar9 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        plStack_70 = plStack_b0;
      } while (cVar5 != '\0');
    }
    ppuStack_80 = &PTR_DAT_110c34880;
    pcStack_88 = (code *)0x10a9a50a4;
    lStack_78 = lVar12;
    FUN_10a3bf6d0(lVar11,lVar13 - lVar11,&pcStack_88);
    (*(code *)*ppuStack_80)(&ppuStack_80);
    if (!bVar6) {
      plVar9 = plStack_b0 + 1;
      do {
        lVar11 = *plVar9;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *plVar9 = lVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
        plVar9 = plStack_b0;
        goto LAB_10a971848;
      }
    }
  }
  else {
    if (cVar5 != '\0') goto LAB_10a9719d0;
    uVar1 = *(ulong *)(lVar14 + 0x30);
    puVar10 = *(undefined8 **)(lVar14 + 0x28);
    if (-1 < (char)*(byte *)(lVar14 + 0x3f)) {
      uVar1 = (ulong)*(byte *)(lVar14 + 0x3f);
      puVar10 = (undefined8 *)(lVar14 + 0x28);
    }
    if (plVar3 == (long *)0x0) {
      plStack_70 = (long *)0x0;
    }
    else {
      plVar9 = plVar3 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *plVar9 = *plVar9 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *plVar9 = *plVar9 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        plStack_70 = plVar3;
      } while (cVar5 != '\0');
    }
    ppuStack_80 = &PTR_DAT_110c34868;
    pcStack_88 = FUN_10a9a5064;
    lStack_78 = lVar11;
    FUN_10a3bf6d0(puVar10,uVar1,&pcStack_88);
    (*(code *)*ppuStack_80)(&ppuStack_80);
    if (plVar3 != (long *)0x0) {
      plVar9 = plVar3 + 1;
      do {
        lVar11 = *plVar9;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *plVar9 = lVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        plVar9 = plVar3;
        goto LAB_10a971848;
      }
    }
  }
  if (plStack_a0 != (long *)0x0) {
    plVar9 = plStack_a0 + 1;
    do {
      lVar11 = *plVar9;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = lVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a0);
    }
  }
  if (plStack_b0 != (long *)0x0) {
    plVar9 = plStack_b0 + 1;
    do {
      lVar11 = *plVar9;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = lVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b0);
    }
  }
  if (plStack_c0 != (long *)0x0) {
    plVar9 = plStack_c0 + 1;
    do {
      lVar11 = *plVar9;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = lVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_c0);
    }
  }
  if (plStack_f0 != (long *)0x0) {
    plVar9 = plStack_f0 + 1;
    do {
      lVar11 = *plVar9;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = lVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_f0);
    }
  }
  if (plStack_e0 != (long *)0x0) {
    plVar9 = plStack_e0 + 1;
    do {
      lVar11 = *plVar9;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = lVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_e0);
    }
  }
  if (plVar3 != (long *)0x0) {
    plVar9 = plVar3 + 1;
    do {
      lVar11 = *plVar9;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = lVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_10a9719d0:
  FUN_10a05bab8(&UNK_10f68728d);
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10a9719e0);
  (*pcVar8)();
}



/* Entry: 10a971a44; end: 10a971a73;  */

long FUN_10a971a44(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a05c024(param_1 + 0x20);
  FUN_10a05c024(param_1 + 0x10);
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



/* Entry: 10a971a74; end: 10a971bb3;  */

void FUN_10a971a74(undefined8 param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar3 = (long *)0x48;
  __Znwm();
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_110c34730;
  plVar3[4] = 0;
  plVar3[5] = 0;
  plVar3[8] = 0;
  plVar3[7] = 0;
  plVar3[6] = (long)(plVar3 + 7);
  plStack_40 = plVar3 + 3;
  *plStack_40 = (long)&PTR_FUN_110c332e8;
  plVar5 = (long *)(param_2 + 0xa0);
  plStack_38 = plVar3;
  while (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0) {
    FUN_10a96e298(plStack_40,plVar5 + 2,plVar5 + 5);
  }
  uStack_58 = 0;
  uStack_50 = 0;
  lStack_48 = 0;
  if (*(long *)(param_2 + 0x38) != 0 && *(long *)(param_2 + 0x80) != 0) {
    func_0x000107c2c4d8(&uStack_58);
  }
  FUN_10a971bb4(param_1,*(undefined4 *)(param_2 + 0x30),param_2,&plStack_40,&uStack_58);
  if (lStack_48 < 0) {
    __ZdlPv(uStack_58);
  }
  plVar5 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar3 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return;
}



/* Entry: 10a971bb4; end: 10a971c2b;  */

long * FUN_10a971bb4(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar2 = 0x78;
  __Znwm();
  FUN_10a970c2c();
  *param_1 = lVar2;
  puVar3 = (undefined8 *)0x20;
  __Znwm();
  *puVar3 = &PTR_FUN_110c33b40;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = lVar2;
  param_1[1] = (long)puVar3;
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + 0x18;
  }
  FUN_10a989df0(param_1,lVar1,lVar2);
  return param_1;
}



/* Entry: 10a971c2c; end: 10a971e13;  */

void FUN_10a971c2c(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f685c5a;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f68581c;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x11100000133;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_a8);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_58,uStack_88 & 0xffffffff,
                uStack_88._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_a8);
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f5a928b;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f68581c;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x11100000133;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a971e14(param_1,&puStack_a8,0);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f536f1d;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f68581c;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x11100000133;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a971e14();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f685c6c;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f68581c;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x11100000133;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a971e14();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f517e18;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f68581c;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x11100000133;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a971e14();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f685c70;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f68581c;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x11100000133;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a971e14();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a971e14; end: 10a971eb7;  */

undefined8 * FUN_10a971e14(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a971eb8);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a971eb8; end: 10a971eef;  */

undefined1  [16] FUN_10a971eb8(uint param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  if (param_1 < 5) {
    auVar1._8_8_ = *(undefined8 *)(&UNK_10e4e7fa8 + (ulong)param_1 * 8);
    auVar1._0_8_ = (&PTR_DAT_110c35500)[param_1];
    return auVar1;
  }
  FUN_10a00946c(&UNK_10f685c90);
  auVar2._8_8_ = 0x10;
  auVar2._0_8_ = &UNK_10f654f65;
  return auVar2;
}



/* Entry: 10a971ef0; end: 10a971f6f;  */

undefined1  [16] FUN_10a971ef0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10;
  auVar1._0_8_ = &UNK_10f654f65;
  return auVar1;
}



/* Entry: 10a971f70; end: 10a97231b;  */

void FUN_10a971f70(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f654f65,0x10);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c351c8;
  pppuVar2 = (undefined8 ***)&UNK_10f68581c;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0xa4;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c351c8;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xb);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9722fc;
    FUN_10a054dac(param_1,&UNK_10f685f3f,FUN_10a9a5124,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"endpoint",FUN_10a9a5340,FUN_10a9a5420);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f2d99b4,FUN_10a9a5584,FUN_10a9a563c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"body",FUN_10a9a5758,FUN_10a9a5810);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f685f5a,FUN_10a9a5aa4,FUN_10a9a5b64);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f654f65,0x10);
      FUN_10a05431c(param_1);
    }
    uStack_98 = 0;
    uStack_90 = 0;
    ppuStack_a0 = (undefined8 **)&UNK_10f654f65;
    uStack_80 = 0xffffffffffffffff;
    uStack_88 = 0x100000064;
    uStack_70 = 0;
    uStack_78 = 0;
    uStack_60 = 0;
    uStack_68 = 0;
    uStack_58 = 0;
    uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
    uStack_48 = 0;
    uStack_40 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_a0);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a9722fc;
      FUN_10a054dac(param_1,&DAT_10f68efec,FUN_10a9a6074,0,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    return;
  }
LAB_10a9722fc:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a972300);
  (*pcVar6)();
}



/* Entry: 10a97231c; end: 10a9723a7;  */

undefined1  [16] FUN_10a97231c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x11;
  auVar1._0_8_ = &UNK_10f6872a1;
  return auVar1;
}



/* Entry: 10a9723a8; end: 10a9726eb;  */

void FUN_10a9723a8(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f6872a1,0x11);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c351e0;
  pppuVar2 = (undefined8 ***)&UNK_10f68581c;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0xa4;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c351e0;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
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
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9726cc;
    FUN_10a054dac(param_1,&UNK_10f685f90,FUN_10a9a61dc,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f685f9b,FUN_10a9a6348,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,"statusCode",FUN_10a9a6460,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,"metadata",FUN_10a9a651c,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,"body",FUN_10a9a6600,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f685f5a,FUN_10a9a6740,0);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f6872a1,0x11);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a9726cc:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a9726d0);
  (*pcVar6)();
}



/* Entry: 10a9726ec; end: 10a97278f;  */

void FUN_10a9726ec(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar7 = *(undefined8 **)(param_2 + 0x70);
  puVar2 = *(undefined8 **)(param_2 + 0x78);
  lVar6 = (long)puVar2 - (long)puVar7;
  if (lVar6 != 0) {
    func_0x00010a352b48(param_1,lVar6 >> 4);
    puVar5 = (undefined8 *)param_1[1];
    do {
      lVar6 = puVar7[1];
      uVar8 = *puVar7;
      puVar5[1] = puVar7[1];
      *puVar5 = uVar8;
      if (lVar6 != 0) {
        plVar1 = (long *)(lVar6 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      puVar7 = puVar7 + 2;
      puVar5 = puVar5 + 2;
    } while (puVar7 != puVar2);
    param_1[1] = puVar5;
  }
  return;
}



/* Entry: 10a972790; end: 10a972943;  */

undefined8 *
FUN_10a972790(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5,int param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_110c32260;
  *(undefined4 *)(param_1 + 5) = param_2;
  FUN_10a0424c4(param_1 + 6,param_3);
  uVar11 = param_4[1];
  uVar10 = *param_4;
  param_1[0xd] = param_4[2];
  param_1[0xc] = uVar11;
  param_1[0xb] = uVar10;
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  if (param_6 == 0) {
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    uVar10 = *param_5;
    param_1[0xf] = param_5[1];
    param_1[0xe] = uVar10;
  }
  else {
    puVar8 = (undefined8 *)*param_5;
    puVar9 = (undefined8 *)param_5[1];
    if (puVar8 != puVar9) {
      do {
        puVar4 = (undefined8 *)0x38;
        __Znwm();
        puVar4[4] = 0;
        puVar4[3] = 0;
        puVar4[2] = 0;
        puVar4[1] = 0;
        *puVar4 = &PTR_DAT_110baea40;
        uVar10 = *puVar8;
        puVar4[6] = puVar8[1];
        puVar4[5] = uVar10;
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar5 = (undefined8 *)0x20;
        __Znwm();
        *puVar5 = &PTR_FUN_110bb2238;
        puVar5[1] = 0;
        puVar5[2] = 0;
        puVar5[3] = puVar4;
        plVar7 = (long *)puVar8[1];
        *puVar8 = puVar4;
        puVar8[1] = puVar5;
        if (plVar7 != (long *)0x0) {
          plVar1 = plVar7 + 1;
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
            (**(code **)(*plVar7 + 0x10))(plVar7);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
          }
        }
        puVar8 = puVar8 + 2;
      } while (puVar8 != puVar9);
      puVar8 = (undefined8 *)*param_5;
      puVar9 = (undefined8 *)param_5[1];
    }
    param_1[0xe] = puVar8;
    param_1[0xf] = puVar9;
  }
  param_1[0x10] = param_5[2];
  *param_5 = 0;
  param_5[1] = 0;
  param_5[2] = 0;
  *(char *)(param_1 + 0x11) = (char)param_6;
  return param_1;
}



/* Entry: 10a972944; end: 10a9729e7;  */

void FUN_10a972944(undefined8 param_1)

{
  undefined **ppuVar1;
  long extraout_x9;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  ppuVar1 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  uVar2 = *(undefined8 *)(*ppuVar1 + 0x870);
  if (*(char *)(extraout_x9 + 0x6f) < '\0') {
    func_0x000107c3192c(&uStack_40,*(undefined8 *)(extraout_x9 + 0x58),
                        *(undefined8 *)(extraout_x9 + 0x60));
  }
  else {
    uStack_38 = *(undefined8 *)(extraout_x9 + 0x60);
    uStack_40 = *(undefined8 *)(extraout_x9 + 0x58);
    lStack_30 = *(long *)(extraout_x9 + 0x68);
  }
  FUN_10a970fc8(param_1,uVar2,&uStack_40);
  if (lStack_30 < 0) {
    __ZdlPv(uStack_40);
  }
  return;
}



/* Entry: 10a9729e8; end: 10a972b8f;  */

undefined1  [16] FUN_10a9729e8(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long *plStack_58;
  
  plVar4 = *(long **)(param_2 + 0x20);
  if ((plVar4 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 == (long *)0x0))
  {
    uVar7 = 0;
    FUN_10a043ecc();
    func_0x00010a1f32ac(param_2);
    func_0x00010a1f6f04(&puStack_80);
    FUN_10a9a683c(&uStack_70);
    FUN_10a9a1904(&lStack_60);
    __Unwind_Resume(uVar7);
    auVar12._8_8_ = 0x18;
    auVar12._0_8_ = &UNK_10f63f250;
    return auVar12;
  }
  lVar9 = param_2 + 0x58;
  puVar5 = (undefined8 *)0x68;
  lStack_60 = lVar9;
  plStack_58 = plVar4;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_DAT_110b9f6a8;
  puVar10 = puVar5 + 3;
  *puVar10 = &PTR_DAT_110c5ee10;
  puVar5[5] = 0;
  puVar5[4] = 0;
  puVar5[7] = 0;
  puVar5[6] = 0;
  plVar1 = plVar4 + 1;
  puVar5[8] = lVar9;
  puVar5[9] = plVar4;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *(undefined4 *)(puVar5 + 10) = 1;
  lVar8 = (long)*(char *)(param_2 + 0x6f);
  if (lVar8 < 0) {
    lVar9 = *(long *)(param_2 + 0x58);
    lVar8 = *(long *)(param_2 + 0x60);
  }
  puVar5[0xb] = lVar9;
  puVar5[0xc] = lVar8;
  if (*(char *)(param_2 + 0x88) == '\x01') {
    uStack_70 = 0;
    uStack_68 = 0;
    puVar6 = (undefined8 *)0x38;
    puStack_80 = puVar10;
    puStack_78 = puVar5;
    __Znwm();
    puVar6[4] = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    puVar6[1] = 0;
    *puVar6 = &PTR_DAT_110baea40;
    puVar6[5] = puVar10;
    puVar6[6] = puVar5;
    puStack_80 = (undefined8 *)0x0;
    puStack_78 = (undefined8 *)0x0;
    puVar5 = (undefined8 *)0x20;
    __Znwm();
    *puVar5 = &PTR_FUN_110bb2238;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = puVar6;
    *param_1 = puVar6;
    param_1[1] = puVar5;
  }
  else {
    *param_1 = puVar10;
    param_1[1] = puVar5;
  }
  do {
    lVar9 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar9 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar9 != 0) {
    auVar11._8_8_ = param_3;
    auVar11._0_8_ = puVar5;
    return auVar11;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
  auVar13._8_8_ = param_3;
  auVar13._0_8_ = plVar4;
  return auVar13;
}



/* Entry: 10a972b90; end: 10a972c3b;  */

undefined1  [16] FUN_10a972b90(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x18;
  auVar1._0_8_ = &UNK_10f63f250;
  return auVar1;
}



/* Entry: 10a972c3c; end: 10a9730e7;  */

void FUN_10a972c3c(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  code *pcVar5;
  ulong uVar6;
  undefined4 uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 **appuStack_e8 [2];
  char cStack_d1;
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  undefined8 **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uVar7 = 6;
  if (*(int *)(param_1 + 0x160) != 100) {
    uVar7 = 0xffffffff;
  }
  func_0x000109887da8(appuStack_e8,&UNK_10f63f250,0x18);
  pppuVar1 = (undefined8 ***)appuStack_e8[0];
  if (-1 < cStack_d1) {
    pppuVar1 = appuStack_e8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c35368;
  pppuVar2 = (undefined8 ***)&UNK_10f68581c;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0x100000064;
  uStack_a0 = CONCAT44(uVar7,0xffffffff);
  uStack_90 = 0;
  puStack_98 = (undefined *)0x0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_78 = 0x10f;
  uStack_70 = CONCAT44(uStack_70._4_4_,0xffffffff);
  uStack_68 = 0;
  uStack_60 = 0;
  ppuStack_c0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_c0);
  uVar6 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,uVar7);
  if ((uVar6 & 1) == 0) {
    ppuStack_d0 = &PTR_DAT_110c35368;
    uStack_c8 = 0;
    ppuStack_c0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_b8 = 0;
    uStack_b0 = CONCAT71(uStack_b0._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_d0,&ppuStack_c0);
  }
  if (cStack_d1 < '\0') {
    __ZdlPv(appuStack_e8[0]);
  }
  iVar8 = *(int *)(param_1 + 0x160);
  if (*(int *)(param_1 + 0x160) != 100) {
    iVar8 = 0x19;
  }
  uVar6 = param_1;
  FUN_10a0051e8(param_1,iVar8,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar6 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9730c8;
    FUN_10a054dac(param_1,&UNK_10f685fa7,FUN_10a9a6894,2,*(undefined8 *)(param_1 + 0x40));
  }
  iVar8 = *(int *)(param_1 + 0x160);
  if (iVar8 != 100) {
    iVar8 = 0x19;
  }
  uVar6 = param_1;
  FUN_10a0051e8(param_1,iVar8,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar6 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9730c8;
    FUN_10a054dac(param_1,&UNK_10f685fb1,FUN_10a9a6a5c,3,*(undefined8 *)(param_1 + 0x40));
  }
  iVar8 = *(int *)(param_1 + 0x160);
  if (iVar8 != 100) {
    iVar8 = 0x19;
  }
  uVar6 = param_1;
  FUN_10a0051e8(param_1,iVar8,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar6 & 1) == 0) {
    FUN_10a052828(param_1,"url",FUN_10a9a6c1c,FUN_10a9a6d5c);
  }
  iVar8 = *(int *)(param_1 + 0x160);
  if (iVar8 != 100) {
    iVar8 = 0x19;
  }
  uVar6 = param_1;
  FUN_10a0051e8(param_1,iVar8,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar6 & 1) == 0) {
    FUN_10a052828(param_1,"method",FUN_10a9a6e58,FUN_10a9a6f14);
  }
  iVar8 = *(int *)(param_1 + 0x160);
  if (*(int *)(param_1 + 0x160) != 100) {
    iVar8 = 0x19;
  }
  uVar6 = param_1;
  FUN_10a0051e8(param_1,iVar8,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar6 & 1) == 0) {
    FUN_10a052828(param_1,"body",FUN_10a9a6ff8,FUN_10a9a70b0);
  }
  iVar8 = *(int *)(param_1 + 0x160);
  if (iVar8 != 100) {
    iVar8 = 0x19;
  }
  uVar6 = param_1;
  FUN_10a0051e8(param_1,iVar8,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar6 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f685c0b,FUN_10a9a7244,FUN_10a9a72fc);
  }
  iVar8 = *(int *)(param_1 + 0x160);
  if (iVar8 != 100) {
    iVar8 = 0x19;
  }
  uVar6 = param_1;
  FUN_10a0051e8(param_1,iVar8,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar6 & 1) == 0) {
    FUN_10a052828(param_1,"contentType",FUN_10a9a7400,FUN_10a9a74e0);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_b8 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_c0 = *(undefined8 ***)(lVar3 + -0x68);
    puStack_98 = *(undefined **)(lVar3 + -0x40);
    uVar9 = *(ulong *)(lVar3 + -0x48);
    uVar10 = *(ulong *)(lVar3 + -0x50);
    uStack_b0 = *(undefined8 *)(lVar3 + -0x58);
    uStack_88 = *(undefined8 *)(lVar3 + -0x30);
    uStack_90 = *(undefined8 *)(lVar3 + -0x38);
    uStack_78 = *(undefined8 *)(lVar3 + -0x20);
    uStack_80 = *(undefined8 *)(lVar3 + -0x28);
    uStack_60 = *(undefined8 *)(lVar3 + -8);
    uStack_68 = *(undefined8 *)(lVar3 + -0x10);
    uStack_70 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_a8._4_4_ = (undefined4)(uVar10 >> 0x20);
    uVar7 = uStack_a8._4_4_;
    uStack_a0._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_a0._4_4_;
    uVar6 = param_1;
    uStack_a8 = uVar10;
    uStack_a0 = uVar9;
    FUN_10a0051e8(param_1,uVar10 & 0xffffffff,uVar7,uStack_70 & 0xffffffff,uVar9 & 0xffffffff,uVar4)
    ;
    if ((uVar6 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_c0,param_1 + 0x1b8,&UNK_10f63f250,0x18);
      FUN_10a05431c(param_1);
    }
    uStack_b8 = 0;
    uStack_b0 = 0;
    ppuStack_c0 = (undefined8 **)&UNK_10f63f250;
    uStack_a8 = 0x100000064;
    uVar7 = 6;
    if (*(int *)(param_1 + 0x160) != 100) {
      uVar7 = 0xffffffff;
    }
    uStack_a0 = CONCAT44(uVar7,0xffffffff);
    puStack_98 = &UNK_10f68581c;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_70 = CONCAT44(uStack_70._4_4_,0xffffffff);
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_c0);
    iVar8 = *(int *)(param_1 + 0x160);
    if (iVar8 != 100) {
      iVar8 = 0x19;
    }
    uVar6 = param_1;
    FUN_10a0051e8(param_1,iVar8,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar6 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a9730c8;
      FUN_10a054dac(param_1,&DAT_10f68efec,FUN_10a9a75dc,0,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    return;
  }
LAB_10a9730c8:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a9730cc);
  (*pcVar5)();
}



/* Entry: 10a9730e8; end: 10a973147;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */

undefined1  [16] FUN_10a9730e8(undefined8 *param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  param_2 = param_2 + 0x60;
  func_0x000104c5e210();
  if (param_2 == 0) {
    FUN_10a00946c(&UNK_10f685fbb);
    auVar8._8_8_ = 0x19;
    auVar8._0_8_ = &UNK_10f6872b3;
    return auVar8;
  }
  if (*(char *)(param_2 + 0x3f) < '\0') {
    lVar3 = *(long *)(param_2 + 0x28);
    uVar1 = *(ulong *)(param_2 + 0x30);
    if (0x16 < uVar1) {
      if (uVar1 < 0x7ffffffffffffff7) {
        lVar3 = 0x19;
        if ((uVar1 | 7) != 0x17) {
          lVar3 = (uVar1 | 7) + 1;
        }
      }
      else {
        func_0x000104bd47d4();
      }
      lVar2 = lVar3;
      func_0x000107c60e20(lVar3);
      auVar6._8_8_ = lVar3;
      auVar6._0_8_ = lVar2;
      return auVar6;
    }
    *(char *)((long)param_1 + 0x17) = (char)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memmove_11034c660)(param_1,lVar3,uVar1 + 1);
    auVar9._8_8_ = lVar3;
    auVar9._0_8_ = param_1;
    return auVar9;
  }
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  param_1[2] = *(undefined8 *)(param_2 + 0x38);
  param_1[1] = uVar5;
  *param_1 = uVar4;
  auVar7._8_8_ = param_3;
  auVar7._0_8_ = param_2;
  return auVar7;
}



/* Entry: 10a973148; end: 10a9731eb;  */

undefined1  [16] FUN_10a973148(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x19;
  auVar1._0_8_ = &UNK_10f6872b3;
  return auVar1;
}



/* Entry: 10a9731ec; end: 10a9735e3;  */

void FUN_10a9731ec(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  ulong uVar10;
  ulong uVar11;
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
  
  uVar7 = 6;
  if (*(int *)(param_1 + 0x160) != 100) {
    uVar7 = 0xffffffff;
  }
  func_0x000109887da8(appuStack_c8,&UNK_10f6872b3,0x19);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c35408;
  pppuVar2 = (undefined8 ***)&UNK_10f68581c;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0x100000064;
  uStack_80 = CONCAT44(uVar7,0xffffffff);
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0x10f;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar6 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,uVar7);
  if ((uVar6 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c35408;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  iVar8 = *(int *)(param_1 + 0x160);
  bVar5 = iVar8 != 100;
  if (bVar5) {
    iVar8 = 0x19;
  }
  uVar7 = 6;
  if (bVar5) {
    uVar7 = 0xffffffff;
  }
  uVar6 = param_1;
  FUN_10a0051e8(param_1,iVar8,1,0xffffffff,0xffffffff,uVar7);
  if ((uVar6 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9735c4;
    FUN_10a054dac(param_1,&UNK_10f685fa7,FUN_10a9a7774,2,*(undefined8 *)(param_1 + 0x40));
  }
  iVar8 = *(int *)(param_1 + 0x160);
  if (iVar8 != 100) {
    iVar8 = 0x19;
  }
  uVar6 = param_1;
  FUN_10a0051e8(param_1,iVar8,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar6 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9735c4;
    FUN_10a054dac(param_1,&UNK_10f685fd1,FUN_10a9a793c,1,*(undefined8 *)(param_1 + 0x40));
  }
  iVar8 = *(int *)(param_1 + 0x160);
  if (iVar8 != 100) {
    iVar8 = 0x19;
  }
  uVar6 = param_1;
  FUN_10a0051e8(param_1,iVar8,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar6 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9735c4;
    FUN_10a054dac(param_1,&UNK_10f685f90,FUN_10a9a7a40,1,*(undefined8 *)(param_1 + 0x40));
  }
  iVar8 = *(int *)(param_1 + 0x160);
  bVar5 = iVar8 != 100;
  if (bVar5) {
    iVar8 = 0x19;
  }
  uVar9 = 6;
  uVar7 = uVar9;
  if (bVar5) {
    uVar7 = 0xffffffff;
  }
  uVar6 = param_1;
  FUN_10a0051e8(param_1,iVar8,1,0xffffffff,0xffffffff,uVar7);
  if ((uVar6 & 1) == 0) {
    FUN_10a0605c4(param_1,"statusCode",FUN_10a9a7b44,0);
  }
  iVar8 = *(int *)(param_1 + 0x160);
  if (*(int *)(param_1 + 0x160) != 100) {
    uVar9 = 0xffffffff;
    iVar8 = 0x19;
  }
  uVar6 = param_1;
  FUN_10a0051e8(param_1,iVar8,1,0xffffffff,0xffffffff,uVar9);
  if ((uVar6 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f685c0b,FUN_10a9a7c00,0);
  }
  iVar8 = *(int *)(param_1 + 0x160);
  bVar5 = iVar8 != 100;
  if (bVar5) {
    iVar8 = 0x19;
  }
  uVar9 = 6;
  uVar7 = uVar9;
  if (bVar5) {
    uVar7 = 0xffffffff;
  }
  uVar6 = param_1;
  FUN_10a0051e8(param_1,iVar8,1,0xffffffff,0xffffffff,uVar7);
  if ((uVar6 & 1) == 0) {
    FUN_10a0605c4(param_1,"contentType",FUN_10a9a7ce4,0);
  }
  iVar8 = *(int *)(param_1 + 0x160);
  if (iVar8 != 100) {
    iVar8 = 0x19;
    uVar9 = 0xffffffff;
  }
  uVar6 = param_1;
  FUN_10a0051e8(param_1,iVar8,1,0xffffffff,0xffffffff,uVar9);
  if ((uVar6 & 1) == 0) {
    FUN_10a0605c4(param_1,"body",FUN_10a9a7e74,0);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar10 = *(ulong *)(lVar3 + -0x48);
    uVar11 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar11 >> 0x20);
    uVar7 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar10 >> 0x20);
    uVar9 = uStack_80._4_4_;
    uVar6 = param_1;
    uStack_88 = uVar11;
    uStack_80 = uVar10;
    FUN_10a0051e8(param_1,uVar11 & 0xffffffff,uVar7,uStack_50 & 0xffffffff,uVar10 & 0xffffffff,uVar9
                 );
    if ((uVar6 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f6872b3,0x19);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a9735c4:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9735c8);
  (*pcVar4)();
}



/* Entry: 10a9735e4; end: 10a973633;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */

void FUN_10a9735e4(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (-1 < *(char *)(param_2 + 0x77)) {
    uVar3 = *(undefined8 *)(param_2 + 0x60);
    param_1[1] = *(undefined8 *)(param_2 + 0x68);
    *param_1 = uVar3;
    param_1[2] = *(undefined8 *)(param_2 + 0x70);
    return;
  }
  lVar2 = *(long *)(param_2 + 0x60);
  uVar1 = *(ulong *)(param_2 + 0x68);
  if (0x16 < uVar1) {
    if (uVar1 < 0x7ffffffffffffff7) {
      lVar2 = 0x19;
      if ((uVar1 | 7) != 0x17) {
        lVar2 = (uVar1 | 7) + 1;
      }
    }
    else {
      func_0x000104bd47d4();
    }
    func_0x000107c60e20(lVar2);
    return;
  }
  *(char *)((long)param_1 + 0x17) = (char)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_11034c660)(param_1,lVar2,uVar1 + 1);
  return;
}



/* Entry: 10a973634; end: 10a973693;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a973808: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */

void FUN_10a973634(undefined **param_1,long param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *extraout_x8;
  long lVar10;
  long lVar11;
  undefined8 *unaff_x19;
  undefined *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong uVar12;
  undefined8 uVar13;
  undefined1 **unaff_x29;
  undefined *puVar14;
  undefined8 unaff_x30;
  undefined *puVar15;
  undefined8 uStack_2a0;
  long *plStack_298;
  long *plStack_288;
  long *plStack_280;
  long lStack_278;
  long *plStack_270;
  long *plStack_268;
  long *plStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  long lStack_220;
  ulong uStack_218;
  long lStack_210;
  char cStack_208;
  undefined4 uStack_200;
  undefined2 uStack_1fc;
  undefined **ppuStack_1f8;
  undefined *puStack_1f0;
  undefined **appuStack_1e8 [7];
  undefined **ppuStack_1b0;
  undefined *puStack_1a8;
  undefined **appuStack_1a0 [8];
  undefined *puStack_160;
  undefined8 uStack_158;
  long lStack_150;
  ulong uStack_148;
  long lStack_140;
  char cStack_138;
  undefined4 uStack_130;
  undefined2 uStack_12c;
  undefined **ppuStack_128;
  undefined *puStack_120;
  undefined **appuStack_118 [7];
  undefined **ppuStack_e0;
  undefined *puStack_d8;
  undefined **appuStack_d0 [7];
  long lStack_98;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  param_2 = param_2 + 0x38;
  func_0x000104c5e210();
  if (param_2 != 0) {
    if (-1 < *(char *)(param_2 + 0x3f)) {
      puVar15 = *(undefined **)(param_2 + 0x30);
      puVar14 = *(undefined **)(param_2 + 0x28);
      param_1[2] = *(undefined **)(param_2 + 0x38);
      param_1[1] = puVar15;
      *param_1 = puVar14;
      return;
    }
    lVar10 = *(long *)(param_2 + 0x28);
    uVar9 = *(ulong *)(param_2 + 0x30);
    puVar5 = (undefined8 *)register0x00000008;
code_r0x000100033dac:
    *(long *)((long)puVar5 + -0x30) = unaff_x22;
    *(long *)((long)puVar5 + -0x28) = unaff_x21;
    *(undefined **)((long)puVar5 + -0x20) = unaff_x20;
    *(undefined8 **)((long)puVar5 + -0x18) = unaff_x19;
    *(undefined1 ***)((long)puVar5 + -0x10) = unaff_x29;
    *(undefined8 *)((long)puVar5 + -8) = unaff_x30;
    if (0x16 < uVar9) {
      if (uVar9 < 0x7ffffffffffffff7) {
        lVar11 = 0x19;
        if ((uVar9 | 7) != 0x17) {
          lVar11 = (uVar9 | 7) + 1;
        }
        puVar14 = &UNK_100033e00;
      }
      else {
        puVar14 = &UNK_100033e30;
        lVar11 = lVar10;
        func_0x000104bd47d4();
      }
      *(ulong *)((long)puVar5 + -0x50) = uVar9;
      *(long *)((long)puVar5 + -0x48) = lVar10;
      *(undefined1 **)((long)puVar5 + -0x40) = (undefined1 *)((long)puVar5 + -0x10);
      *(undefined **)((long)puVar5 + -0x38) = puVar14;
      func_0x000107c60e20(lVar11);
      return;
    }
    *(char *)((long)param_1 + 0x17) = (char)uVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memmove_11034c660)(param_1,lVar10,uVar9 + 1);
    return;
  }
  unaff_x20 = &UNK_10f685fbb;
  FUN_10a00946c();
  pcStack_28 = FUN_10a973694;
  unaff_x29 = &puStack_30;
  puVar5 = &uStack_2a0;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  unaff_x21 = *(long *)(unaff_x20 + 0x28);
  puStack_30 = &stack0xfffffffffffffff0;
  if (unaff_x21 == 0) {
    if ((bRam000000011330a9e8 & 1) != 0) {
      func_0x00010ae06f08(0,1,&UNK_10f685fdf,&UNK_10f686030,0x36,&UNK_10f6860a5);
    }
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
LAB_10a973be4:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
      return;
    }
    ___stack_chk_fail();
LAB_10a973c28:
    FUN_10a00946c(&UNK_10f6860ce);
  }
  else {
    if (*(int *)(unaff_x20 + 0x30) != 200) goto LAB_10a973c28;
    lVar10 = (long)(char)unaff_x20[0x8f];
    if (lVar10 < 0) {
      lVar10 = *(long *)(unaff_x20 + 0x80);
    }
    if (lVar10 != 0) {
      lVar10 = 0;
      puVar14 = unaff_x20 + 0x78;
      bVar1 = unaff_x20[0x77];
      do {
        uVar12 = *(ulong *)((long)&PTR_DAT_110c32300 + lVar10);
        uVar9 = uVar12;
        _strlen();
        if ((char)bVar1 < '\0') {
          if (uVar9 == *(ulong *)(unaff_x20 + 0x68)) {
            if (uVar9 != 0xffffffffffffffff) {
              puVar6 = *(undefined8 **)(unaff_x20 + 0x60);
              goto LAB_10a973748;
            }
            FUN_109ffddc8();
            goto LAB_10a973c48;
          }
        }
        else {
          puVar6 = (undefined8 *)(unaff_x20 + 0x60);
          if (uVar9 == bVar1) {
LAB_10a973748:
            _memcmp(puVar6,uVar12);
            if ((int)puVar6 == 0) goto LAB_10a97376c;
          }
        }
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0x18);
      do {
        FUN_10a00946c(&UNK_10f686109);
LAB_10a97376c:
      } while (lVar10 == 0x18);
      FUN_10a2421c8();
      unaff_x22 = *(long *)(unaff_x21 + 0x1d0);
      puStack_160 = &UNK_10f646e68;
      uStack_158 = 0x20;
      if (unaff_x22 == 0) goto LAB_10a973c40;
      lVar11 = *(long *)(*(long *)(unaff_x20 + 0x28) + 0x100);
      if (*(char *)(lVar11 + 0x21f) < '\0') {
        lVar10 = *(long *)(lVar11 + 0x208);
        uVar9 = *(ulong *)(lVar11 + 0x210);
        param_1 = &puStack_160;
        unaff_x30 = 0x10a97380c;
        unaff_x19 = extraout_x8;
        goto code_r0x000100033dac;
      }
      uStack_158 = *(undefined8 *)(lVar11 + 0x210);
      puStack_160 = *(undefined **)(lVar11 + 0x208);
      lStack_150 = *(long *)(lVar11 + 0x218);
      uStack_148 = uStack_148 & 0xffffffffffffff00;
      cStack_138 = '\0';
      uStack_130 = 0;
      uStack_12c = 0x100;
      ppuStack_128 = &PTR_PTR_1132fed50;
      puStack_120 = &UNK_1053a6a3c;
      appuStack_118[0] = &PTR_DAT_110ae9180;
      ppuStack_e0 = &PTR_PTR_1132fed50;
      puStack_d8 = &UNK_1053a6a3c;
      appuStack_d0[0] = &PTR_DAT_110ae9180;
      lVar10 = (long)(char)unaff_x20[0x8f];
      if (lVar10 < 0) {
        puVar14 = *(undefined **)(unaff_x20 + 0x78);
        lVar10 = *(long *)(unaff_x20 + 0x80);
      }
      lStack_248 = 0;
      lStack_240 = 0;
      uStack_238 = 0;
      FUN_10a1cdca0(&lStack_248,puVar14,puVar14 + lVar10);
      plVar7 = (long *)0x38;
      __Znwm();
      plVar7[2] = 0;
      plVar7[3] = 0;
      *plVar7 = (long)&PTR_FUN_110ba5138;
      plVar7[1] = 0;
      plVar7[4] = 0;
      plVar7[5] = lStack_248;
      plVar7[6] = lStack_240 - lStack_248;
      lVar10 = 0x90;
      __Znwm();
      lStack_250 = 0;
      plStack_268 = plVar7;
      FUN_10a1b11d8();
      lStack_258 = lVar10;
      if (plStack_268 != (long *)0x0) {
        (**(code **)(*plStack_268 + 8))();
      }
      plStack_288 = (long *)(CONCAT71(plStack_288._1_7_,(undefined1)uStack_130) & 0xffffffffffffff01
                            );
      FUN_10a1cad34(&plStack_268,&lStack_278,&lStack_258,&plStack_288);
      uStack_228 = uStack_158;
      puStack_230 = puStack_160;
      lStack_220 = lStack_150;
      puStack_160 = (undefined *)0x0;
      uStack_158 = 0;
      lStack_150 = 0;
      uStack_218 = uStack_218 & 0xffffffffffffff00;
      cStack_208 = '\0';
      if (cStack_138 == '\x01') {
        lStack_210 = lStack_140;
        uStack_218 = uStack_148;
        uStack_148 = 0;
        lStack_140 = 0;
        cStack_208 = cStack_138;
      }
      uStack_200 = uStack_130;
      uStack_1fc = uStack_12c;
      ppuStack_1f8 = ppuStack_128;
      puStack_1f0 = puStack_120;
      appuStack_1e8[0] = &PTR_DAT_110ae9180;
      (*(code *)appuStack_118[0][2])(appuStack_1e8,appuStack_118);
      puStack_120 = &UNK_1053a6a3c;
      (*(code *)*appuStack_118[0])(appuStack_118);
      appuStack_118[0] = &PTR_DAT_110ae9180;
      ppuStack_1b0 = ppuStack_e0;
      puStack_1a8 = puStack_d8;
      appuStack_1a0[0] = &PTR_DAT_110ae9180;
      (*(code *)appuStack_d0[0][2])(appuStack_1a0,appuStack_d0);
      puStack_d8 = &UNK_1053a6a3c;
      (*(code *)*appuStack_d0[0])(appuStack_d0);
      appuStack_d0[0] = &PTR_DAT_110ae9180;
      FUN_10a25684c(&lStack_278,unaff_x22,unaff_x21,&plStack_268,&puStack_230);
      func_0x0001092ba41c(&ppuStack_1b0);
      func_0x0001092ba41c(&ppuStack_1f8);
      if ((cStack_208 == '\x01') && (lStack_210 != 0)) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if (lStack_220 < 0) {
        __ZdlPv(puStack_230);
      }
      FUN_10a254398(lStack_278);
      FUN_10a254398(lStack_278);
      plStack_298 = *(long **)(lStack_278 + 0x18);
      uStack_2a0 = *(undefined8 *)(lStack_278 + 0x10);
      if (*(long *)(lStack_278 + 0x18) != 0) {
        plVar7 = (long *)(*(long *)(lStack_278 + 0x18) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = *plVar7 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uVar13 = *(undefined8 *)(unaff_x20 + 0x28);
      plVar8 = (long *)0x2d0;
      __Znwm();
      plVar8[1] = 0;
      plVar8[2] = 0;
      *plVar8 = (long)&PTR_FUN_110b9fcf0;
      plVar7 = plVar8 + 3;
      FUN_10a1db5e8(plVar7,uVar13,&uStack_2a0);
      plStack_288 = plVar7;
      plStack_280 = plVar8;
      FUN_10a063ca4(&plStack_288,plVar8 + 0xb,plVar7);
      plVar7 = plStack_298;
      if (plStack_298 != (long *)0x0) {
        plVar8 = plStack_298 + 1;
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
          (**(code **)(*plStack_298 + 0x10))(plStack_298);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      FUN_10a1cb720(extraout_x8,*(undefined8 *)(unaff_x20 + 0x28),&plStack_288);
      plVar7 = plStack_280;
      if (plStack_280 != (long *)0x0) {
        plVar8 = plStack_280 + 1;
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
          (**(code **)(*plStack_280 + 0x10))(plStack_280);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      if (plStack_270 != (long *)0x0) {
        plVar7 = plStack_270 + 1;
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
          (**(code **)(*plStack_270 + 0x10))(plStack_270);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_270);
        }
      }
      if (plStack_260 != (long *)0x0) {
        plVar7 = plStack_260 + 1;
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
          (**(code **)(*plStack_260 + 0x10))(plStack_260);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_260);
        }
      }
      lVar10 = lStack_258;
      lStack_258 = 0;
      if (lVar10 != 0) {
        func_0x00010a0e32bc(&lStack_258);
      }
      lVar10 = lStack_250;
      lStack_250 = 0;
      if (lVar10 != 0) {
        func_0x00010a1cbbe4(&lStack_250);
      }
      if (lStack_248 != 0) {
        lStack_240 = lStack_248;
        __ZdlPv();
      }
      func_0x0001092ba41c(&ppuStack_e0);
      func_0x0001092ba41c(&ppuStack_128);
      if ((cStack_138 == '\x01') && (lStack_140 != 0)) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if (lStack_150 < 0) {
        __ZdlPv(puStack_160);
      }
      goto LAB_10a973be4;
    }
  }
  FUN_10a00946c(&UNK_10f6860ed);
LAB_10a973c40:
  FUN_10a0edfc4(&puStack_160);
LAB_10a973c48:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a973c4c);
  (*pcVar4)();
}



/* Entry: 10a973694; end: 10a973d57;  */

void FUN_10a973694(undefined8 *param_1,long param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uStack_280;
  long *plStack_278;
  long *plStack_268;
  long *plStack_260;
  long lStack_258;
  long *plStack_250;
  long *plStack_248;
  long *plStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  long lStack_200;
  ulong uStack_1f8;
  long lStack_1f0;
  char cStack_1e8;
  undefined4 uStack_1e0;
  undefined2 uStack_1dc;
  undefined **ppuStack_1d8;
  undefined *puStack_1d0;
  undefined **appuStack_1c8 [7];
  undefined **ppuStack_190;
  undefined *puStack_188;
  undefined **appuStack_180 [8];
  undefined *puStack_140;
  undefined8 uStack_138;
  long lStack_130;
  ulong uStack_128;
  long lStack_120;
  char cStack_118;
  undefined4 uStack_110;
  undefined2 uStack_10c;
  undefined **ppuStack_108;
  undefined *puStack_100;
  undefined **appuStack_f8 [7];
  undefined **ppuStack_c0;
  undefined *puStack_b8;
  undefined **appuStack_b0 [7];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *(long *)(param_2 + 0x28);
  if (lVar10 == 0) {
    if ((bRam000000011330a9e8 & 1) != 0) {
      func_0x00010ae06f08(0,1,&UNK_10f685fdf,&UNK_10f686030,0x36,&UNK_10f6860a5);
    }
    *param_1 = 0;
    param_1[1] = 0;
LAB_10a973be4:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
    ___stack_chk_fail();
LAB_10a973c28:
    FUN_10a00946c(&UNK_10f6860ce);
  }
  else {
    if (*(int *)(param_2 + 0x30) != 200) goto LAB_10a973c28;
    lVar8 = (long)*(char *)(param_2 + 0x8f);
    if (lVar8 < 0) {
      lVar8 = *(long *)(param_2 + 0x80);
    }
    if (lVar8 != 0) {
      lVar13 = 0;
      lVar8 = param_2 + 0x78;
      bVar1 = *(byte *)(param_2 + 0x77);
      do {
        uVar11 = *(ulong *)((long)&PTR_DAT_110c32300 + lVar13);
        uVar5 = uVar11;
        _strlen();
        if ((char)bVar1 < '\0') {
          if (uVar5 == *(ulong *)(param_2 + 0x68)) {
            if (uVar5 != 0xffffffffffffffff) {
              plVar6 = *(long **)(param_2 + 0x60);
              goto LAB_10a973748;
            }
            FUN_109ffddc8();
            goto LAB_10a973c48;
          }
        }
        else {
          plVar6 = (long *)(param_2 + 0x60);
          if (uVar5 == bVar1) {
LAB_10a973748:
            _memcmp(plVar6,uVar11);
            if ((int)plVar6 == 0) goto LAB_10a97376c;
          }
        }
        lVar13 = lVar13 + 8;
      } while (lVar13 != 0x18);
      do {
        FUN_10a00946c(&UNK_10f686109);
LAB_10a97376c:
      } while (lVar13 == 0x18);
      FUN_10a2421c8();
      lVar13 = *(long *)(lVar10 + 0x1d0);
      puStack_140 = &UNK_10f646e68;
      uStack_138 = 0x20;
      if (lVar13 == 0) goto LAB_10a973c40;
      lVar9 = *(long *)(*(long *)(param_2 + 0x28) + 0x100);
      if (*(char *)(lVar9 + 0x21f) < '\0') {
        func_0x000107c3192c(&puStack_140,*(undefined8 *)(lVar9 + 0x208),
                            *(undefined8 *)(lVar9 + 0x210));
      }
      else {
        uStack_138 = *(undefined8 *)(lVar9 + 0x210);
        puStack_140 = *(undefined **)(lVar9 + 0x208);
        lStack_130 = *(long *)(lVar9 + 0x218);
      }
      uStack_128 = uStack_128 & 0xffffffffffffff00;
      cStack_118 = '\0';
      uStack_110 = 0;
      uStack_10c = 0x100;
      ppuStack_108 = &PTR_PTR_1132fed50;
      puStack_100 = &UNK_1053a6a3c;
      appuStack_f8[0] = &PTR_DAT_110ae9180;
      ppuStack_c0 = &PTR_PTR_1132fed50;
      puStack_b8 = &UNK_1053a6a3c;
      appuStack_b0[0] = &PTR_DAT_110ae9180;
      lVar9 = (long)*(char *)(param_2 + 0x8f);
      if (lVar9 < 0) {
        lVar8 = *(long *)(param_2 + 0x78);
        lVar9 = *(long *)(param_2 + 0x80);
      }
      lStack_228 = 0;
      lStack_220 = 0;
      uStack_218 = 0;
      FUN_10a1cdca0(&lStack_228,lVar8,lVar8 + lVar9);
      plVar6 = (long *)0x38;
      __Znwm();
      plVar6[2] = 0;
      plVar6[3] = 0;
      *plVar6 = (long)&PTR_FUN_110ba5138;
      plVar6[1] = 0;
      plVar6[4] = 0;
      plVar6[5] = lStack_228;
      plVar6[6] = lStack_220 - lStack_228;
      lVar8 = 0x90;
      __Znwm();
      lStack_230 = 0;
      plStack_248 = plVar6;
      FUN_10a1b11d8();
      lStack_238 = lVar8;
      if (plStack_248 != (long *)0x0) {
        (**(code **)(*plStack_248 + 8))();
      }
      plStack_268 = (long *)(CONCAT71(plStack_268._1_7_,(undefined1)uStack_110) & 0xffffffffffffff01
                            );
      FUN_10a1cad34(&plStack_248,&lStack_258,&lStack_238,&plStack_268);
      uStack_208 = uStack_138;
      puStack_210 = puStack_140;
      lStack_200 = lStack_130;
      puStack_140 = (undefined *)0x0;
      uStack_138 = 0;
      lStack_130 = 0;
      uStack_1f8 = uStack_1f8 & 0xffffffffffffff00;
      cStack_1e8 = '\0';
      if (cStack_118 == '\x01') {
        lStack_1f0 = lStack_120;
        uStack_1f8 = uStack_128;
        uStack_128 = 0;
        lStack_120 = 0;
        cStack_1e8 = cStack_118;
      }
      uStack_1e0 = uStack_110;
      uStack_1dc = uStack_10c;
      ppuStack_1d8 = ppuStack_108;
      puStack_1d0 = puStack_100;
      appuStack_1c8[0] = &PTR_DAT_110ae9180;
      (*(code *)appuStack_f8[0][2])(appuStack_1c8,appuStack_f8);
      puStack_100 = &UNK_1053a6a3c;
      (*(code *)*appuStack_f8[0])(appuStack_f8);
      appuStack_f8[0] = &PTR_DAT_110ae9180;
      ppuStack_190 = ppuStack_c0;
      puStack_188 = puStack_b8;
      appuStack_180[0] = &PTR_DAT_110ae9180;
      (*(code *)appuStack_b0[0][2])(appuStack_180,appuStack_b0);
      puStack_b8 = &UNK_1053a6a3c;
      (*(code *)*appuStack_b0[0])(appuStack_b0);
      appuStack_b0[0] = &PTR_DAT_110ae9180;
      FUN_10a25684c(&lStack_258,lVar13,lVar10,&plStack_248,&puStack_210);
      func_0x0001092ba41c(&ppuStack_190);
      func_0x0001092ba41c(&ppuStack_1d8);
      if ((cStack_1e8 == '\x01') && (lStack_1f0 != 0)) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if (lStack_200 < 0) {
        __ZdlPv(puStack_210);
      }
      FUN_10a254398(lStack_258);
      FUN_10a254398(lStack_258);
      plStack_278 = *(long **)(lStack_258 + 0x18);
      uStack_280 = *(undefined8 *)(lStack_258 + 0x10);
      if (*(long *)(lStack_258 + 0x18) != 0) {
        plVar6 = (long *)(*(long *)(lStack_258 + 0x18) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = *plVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uVar12 = *(undefined8 *)(param_2 + 0x28);
      plVar7 = (long *)0x2d0;
      __Znwm();
      plVar7[1] = 0;
      plVar7[2] = 0;
      *plVar7 = (long)&PTR_FUN_110b9fcf0;
      plVar6 = plVar7 + 3;
      FUN_10a1db5e8(plVar6,uVar12,&uStack_280);
      plStack_268 = plVar6;
      plStack_260 = plVar7;
      FUN_10a063ca4(&plStack_268,plVar7 + 0xb,plVar6);
      plVar6 = plStack_278;
      if (plStack_278 != (long *)0x0) {
        plVar7 = plStack_278 + 1;
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
          (**(code **)(*plStack_278 + 0x10))(plStack_278);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      FUN_10a1cb720(param_1,*(undefined8 *)(param_2 + 0x28),&plStack_268);
      plVar6 = plStack_260;
      if (plStack_260 != (long *)0x0) {
        plVar7 = plStack_260 + 1;
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
          (**(code **)(*plStack_260 + 0x10))(plStack_260);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      if (plStack_250 != (long *)0x0) {
        plVar6 = plStack_250 + 1;
        do {
          lVar10 = *plVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_250 + 0x10))(plStack_250);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_250);
        }
      }
      if (plStack_240 != (long *)0x0) {
        plVar6 = plStack_240 + 1;
        do {
          lVar10 = *plVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_240 + 0x10))(plStack_240);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_240);
        }
      }
      lVar10 = lStack_238;
      lStack_238 = 0;
      if (lVar10 != 0) {
        func_0x00010a0e32bc(&lStack_238);
      }
      lVar10 = lStack_230;
      lStack_230 = 0;
      if (lVar10 != 0) {
        func_0x00010a1cbbe4(&lStack_230);
      }
      if (lStack_228 != 0) {
        lStack_220 = lStack_228;
        __ZdlPv();
      }
      func_0x0001092ba41c(&ppuStack_c0);
      func_0x0001092ba41c(&ppuStack_108);
      if ((cStack_118 == '\x01') && (lStack_120 != 0)) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if (lStack_130 < 0) {
        __ZdlPv(puStack_140);
      }
      goto LAB_10a973be4;
    }
  }
  FUN_10a00946c(&UNK_10f6860ed);
LAB_10a973c40:
  FUN_10a0edfc4(&puStack_140);
LAB_10a973c48:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a973c4c);
  (*pcVar4)();
}



/* Entry: 10a973d58; end: 10a973e5b;  */

undefined1  [16]
FUN_10a973d58(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6,undefined8 param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [56];
  undefined8 uStack_90;
  long lStack_88;
  long lStack_40;
  long *plStack_38;
  
  plVar4 = *(long **)(param_2 + 0x20);
  if ((plVar4 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 == (long *)0x0))
  {
    uVar6 = 0;
    FUN_10a043ecc();
    FUN_10a9a1904(&lStack_40);
    __Unwind_Resume(uVar6);
    lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uStack_d8 = *param_6;
    uStack_d0 = param_6[1];
    *param_6 = 0;
    (**(code **)(param_6[2] + 0x10))(auStack_c8);
    uStack_90 = param_6[9];
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_e0 = 0x3f800000;
    FUN_10a989f0c(uVar6,param_3,param_4,param_5,&uStack_d8,param_7,&uStack_100);
    func_0x000104c4f944(&uStack_100);
    puVar5 = &uStack_d8;
    FUN_10a042634(puVar5);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
      auVar10._8_8_ = param_3;
      auVar10._0_8_ = uVar6;
      return auVar10;
    }
    ___stack_chk_fail();
    func_0x000104c4f944(&uStack_100);
    FUN_10a042634(&uStack_d8);
    __Unwind_Resume(puVar5);
    auVar11._8_8_ = 9;
    auVar11._0_8_ = &UNK_10f6872d8;
    return auVar11;
  }
  lVar7 = param_2 + 0x78;
  puVar5 = (undefined8 *)0x68;
  lStack_40 = lVar7;
  plStack_38 = plVar4;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_DAT_110b9f6a8;
  puVar5[3] = &PTR_DAT_110c5ee10;
  puVar5[5] = 0;
  puVar5[4] = 0;
  puVar5[7] = 0;
  puVar5[6] = 0;
  plVar1 = plVar4 + 1;
  puVar5[8] = lVar7;
  puVar5[9] = plVar4;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *(undefined4 *)(puVar5 + 10) = 1;
  lVar8 = (long)*(char *)(param_2 + 0x8f);
  if (lVar8 < 0) {
    lVar7 = *(long *)(param_2 + 0x78);
    lVar8 = *(long *)(param_2 + 0x80);
  }
  puVar5[0xb] = lVar7;
  puVar5[0xc] = lVar8;
  *param_1 = puVar5 + 3;
  param_1[1] = puVar5;
  do {
    lVar7 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar7 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar7 != 0) {
    auVar9._8_8_ = param_3;
    auVar9._0_8_ = puVar5;
    return auVar9;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
  auVar12._8_8_ = param_3;
  auVar12._0_8_ = plVar4;
  return auVar12;
}



/* Entry: 10a973e5c; end: 10a973f5b;  */

undefined1  [16]
FUN_10a973e5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [56];
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_98 = *param_5;
  uStack_90 = param_5[1];
  *param_5 = 0;
  (**(code **)(param_5[2] + 0x10))(auStack_88);
  uStack_50 = param_5[9];
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_a0 = 0x3f800000;
  FUN_10a989f0c(param_1,param_2,param_3,param_4,&uStack_98,param_6,&uStack_c0);
  func_0x000104c4f944(&uStack_c0);
  puVar1 = &uStack_98;
  FUN_10a042634(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = param_1;
    return auVar2;
  }
  ___stack_chk_fail();
  func_0x000104c4f944(&uStack_c0);
  FUN_10a042634(&uStack_98);
  __Unwind_Resume(puVar1);
  auVar3._8_8_ = 9;
  auVar3._0_8_ = &UNK_10f6872d8;
  return auVar3;
}



/* Entry: 10a973f5c; end: 10a973fd3;  */

undefined1  [16] FUN_10a973f5c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 9;
  auVar1._0_8_ = &UNK_10f6872d8;
  return auVar1;
}



/* Entry: 10a973fd4; end: 10a97442f;  */

void FUN_10a973fd4(ulong param_1)

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
  ulong uVar10;
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
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f6872d8,9);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c353b8;
  pppuVar2 = (undefined8 ***)&UNK_10f68581c;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0x6ffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_54 = 0x122;
  uStack_50 = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,6);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c353b8;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
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
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a974410;
    FUN_10a054dac(param_1,"send",FUN_10a9a7f24,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a974410;
    FUN_10a054dac(param_1,"close",FUN_10a9a84f8,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a974410;
    FUN_10a054dac(param_1,&UNK_10f68615e,FUN_10a9a85ac,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f322425,FUN_10a9a8f54,FUN_10a9a9024);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f68616f,FUN_10a9a91a0,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,"url",FUN_10a9a925c,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f68617a,FUN_10a9a9334,FUN_10a9a9410);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f686181,FUN_10a9a95d0,FUN_10a9a96ac);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f68618b,FUN_10a9a99fc,FUN_10a9a9ad8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f686193,FUN_10a9a9e28,FUN_10a9a9f04);
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
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uVar10 = *(ulong *)(lVar3 + -0x18);
    uStack_58 = (undefined4)*(undefined8 *)(lVar3 + -0x20);
    uStack_54 = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x20) >> 0x20);
    uStack_50 = (undefined4)uVar10;
    uStack_4c = (undefined4)(uVar10 >> 0x20);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uVar10 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f6872d8,9);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a974410:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a974414);
  (*pcVar6)();
}



/* Entry: 10a974430; end: 10a97443f;  */

undefined8 * FUN_10a974430(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  
  uVar2 = *param_2;
  lVar5 = param_2[1];
  if (lVar5 != 0) {
    plVar6 = (long *)(lVar5 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar6 = *(long **)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xe8) = uVar2;
  *(long *)(param_1 + 0xf0) = lVar5;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return (undefined8 *)(param_1 + 0xe8);
}



/* Entry: 10a974440; end: 10a9744b3;  */

undefined8 * FUN_10a974440(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (param_3 != 0) {
    plVar5 = (long *)(param_3 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)param_1[1];
  *param_1 = param_2;
  param_1[1] = param_3;
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



/* Entry: 10a9744b4; end: 10a9744c3;  */

undefined8 * FUN_10a9744b4(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  
  uVar2 = *param_2;
  lVar5 = param_2[1];
  if (lVar5 != 0) {
    plVar6 = (long *)(lVar5 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar6 = *(long **)(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0x118) = uVar2;
  *(long *)(param_1 + 0x120) = lVar5;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return (undefined8 *)(param_1 + 0x118);
}



/* Entry: 10a9744c4; end: 10a9751cf;  */

/* WARNING: Removing unreachable block (ram,0x00010a974c24) */
/* WARNING: Removing unreachable block (ram,0x00010a974a50) */
/* WARNING: Removing unreachable block (ram,0x00010a9748b4) */
/* WARNING: Removing unreachable block (ram,0x00010a974b58) */
/* WARNING: Removing unreachable block (ram,0x00010a974c34) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10a9744c4(long *param_1,undefined8 *param_2,long *param_3,long param_4,ulong *param_5,
                  undefined8 param_6,undefined8 param_7)

{
  code ****ppppcVar1;
  code *******pppppppcVar2;
  char cVar3;
  bool bVar4;
  code *****pppppcVar5;
  byte *pbVar6;
  undefined8 *******pppppppuVar7;
  code *pcVar8;
  byte bVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  code *******pppppppcVar13;
  code *******pppppppcVar14;
  long *plVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  code ****ppppcVar20;
  long *plVar21;
  ulong uVar22;
  code *****pppppcVar23;
  code ****ppppcVar24;
  long *plVar25;
  undefined8 uVar26;
  undefined *puStack_2a0;
  long *plStack_288;
  long *plStack_280;
  undefined1 auStack_278 [24];
  undefined1 auStack_260 [40];
  char cStack_238;
  long *plStack_230;
  long *plStack_228;
  undefined1 auStack_220 [40];
  ulong uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  code *******pppppppcStack_1e0;
  code ****ppppcStack_1d8;
  code *****pppppcStack_1d0;
  long lStack_1c8;
  undefined4 uStack_1c0;
  code *******pppppppcStack_1b8;
  code ****ppppcStack_1b0;
  code *****pppppcStack_1a8;
  long lStack_1a0;
  undefined4 uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  byte bStack_178;
  char cStack_170;
  undefined8 *******pppppppuStack_160;
  code ******ppppppcStack_158;
  undefined8 uStack_150;
  undefined8 uStack_118;
  code *******pppppppcStack_110;
  code ****ppppcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 *******pppppppuStack_d0;
  code ******ppppppcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = (undefined8 *)0x128;
  __Znwm();
  FUN_10a0424c4(auStack_220,param_7);
  puVar10[2] = 0;
  puVar10[1] = 0;
  puVar10[4] = 0;
  puVar10[3] = 0;
  *puVar10 = &PTR_FUN_110c32328;
  puVar10[5] = 0x300000000;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(puVar10 + 6,*param_2,param_2[1]);
  }
  else {
    uVar26 = *param_2;
    puVar10[7] = param_2[1];
    puVar10[6] = uVar26;
    puVar10[8] = param_2[2];
  }
  lVar17 = param_3[1];
  lVar19 = *param_3;
  puVar10[10] = param_3[1];
  puVar10[9] = lVar19;
  if (lVar17 != 0) {
    plVar11 = (long *)(lVar17 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *plVar11 = *plVar11 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar19 = *(long *)(param_4 + 0x100);
  lVar17 = (long)*(char *)(lVar19 + 0x21f);
  if (lVar17 < 0) {
    lVar18 = *(long *)(lVar19 + 0x208);
    lVar17 = *(long *)(lVar19 + 0x210);
  }
  else {
    lVar18 = lVar19 + 0x208;
  }
  puVar10[0xe] = 0;
  puVar10[0xd] = 0;
  puVar10[0xb] = lVar18;
  puVar10[0xc] = lVar17;
  puVar10[0x10] = 0;
  puVar10[0xf] = 0;
  *(undefined4 *)(puVar10 + 0x11) = 0x3f800000;
  puVar10[0x12] = 0;
  puVar10[0x13] = 0;
  puVar10[0x14] = 0;
  puVar10[0x15] = param_4;
  FUN_10a05a5d4(puVar10 + 0x16,&pppppppuStack_d0);
  puVar10[0x19] = 0;
  puVar10[0x18] = 0;
  puVar10[0x1b] = 0;
  puVar10[0x1a] = 0;
  puVar10[0x1e] = 0;
  puVar10[0x1d] = 0;
  puVar10[0x20] = 0;
  puVar10[0x1f] = 0;
  puVar10[0x22] = 0;
  puVar10[0x21] = 0;
  puVar10[0x24] = 0;
  puVar10[0x23] = 0;
  *(undefined4 *)(puVar10 + 0x1c) = 0x3f800000;
  uVar12 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar12 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  if (uVar12 == 0) {
    puVar16 = &UNK_10f68619b;
  }
  else {
    if (*param_3 != 0) {
      func_0x0001094f977c(puVar10 + 0xd,auStack_220);
      *param_1 = (long)puVar10;
      plVar11 = (long *)0x20;
      __Znwm();
      plVar21 = plVar11 + 1;
      *plVar21 = 0;
      *plVar11 = (long)&PTR_FUN_110c34a18;
      plVar11[2] = 0;
      plVar11[3] = (long)puVar10;
      param_1[1] = (long)plVar11;
      if (puVar10[4] == 0) {
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar4) {
            *plVar21 = *plVar21 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        plVar15 = plVar11 + 2;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar4) {
            *plVar15 = *plVar15 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        puVar10[3] = puVar10;
        puVar10[4] = plVar11;
LAB_10a9746f0:
        do {
          lVar17 = *plVar21;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar4) {
            *plVar21 = lVar17 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
      else if (*(long *)(puVar10[4] + 8) == -1) {
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar4) {
            *plVar21 = *plVar21 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        plVar15 = plVar11 + 2;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar4) {
            *plVar15 = *plVar15 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        puVar10[3] = puVar10;
        puVar10[4] = plVar11;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        goto LAB_10a9746f0;
      }
      func_0x000104c4f944(auStack_220);
      lVar17 = *param_1;
      *(undefined4 *)(lVar17 + 0x2c) = 0;
      uStack_190 = uStack_190 & 0xffffffffffffff00;
      cStack_170 = '\0';
      if ((char)param_5[4] == '\x01') {
        bStack_178 = (byte)param_5[3];
        if ((bStack_178 == 1) || (bStack_178 == 0)) {
          uStack_188 = param_5[1];
          uStack_190 = *param_5;
          uStack_180 = param_5[2];
          *param_5 = 0;
          param_5[1] = 0;
          param_5[2] = 0;
        }
        cStack_170 = '\x01';
      }
      FUN_10a042418(auStack_278,param_6);
      lStack_1c8 = 0;
      pppppcStack_1d0 = (code *****)0x0;
      ppppcStack_1d8 = (code ****)0x0;
      pppppppcStack_1e0 = (code *******)0x0;
      uStack_1c0 = 0x3f800000;
      if (&pppppppcStack_1e0 != (code ********)(lVar17 + 0x68)) {
        uStack_1c0 = *(undefined4 *)(lVar17 + 0x88);
        FUN_10a75eb64(&pppppppcStack_1e0,*(undefined8 *)(lVar17 + 0x78),0);
      }
      if (cStack_238 == '\x01') {
        func_0x000107c2791c(&pppppppuStack_160,auStack_260);
        puVar16 = PTR___DefaultRuneLocale_11034bcf8;
        ppppppcStack_c8 = (code ******)0x0;
        pppppppuStack_d0 = (undefined8 *******)0x0;
        uStack_b8 = 0;
        uStack_c0 = (code ******)0x0;
        uStack_b0 = 0x3f800000;
        if (pppppcStack_1d0 != (code *****)0x0) {
          pppppcVar23 = pppppcStack_1d0;
          do {
            ppppcVar20 = pppppcVar23[3];
            pppppcVar5 = (code *****)pppppcVar23[2];
            if (-1 < (char)*(byte *)((long)pppppcVar23 + 0x27)) {
              ppppcVar20 = (code ****)(ulong)*(byte *)((long)pppppcVar23 + 0x27);
              pppppcVar5 = pppppcVar23 + 2;
            }
            ppppcStack_108 = (code ****)0x0;
            uStack_100 = 0;
            pppppppcStack_110 = (code *******)0x0;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                      (&pppppppcStack_110,ppppcVar20,0);
            if (ppppcVar20 != (code ****)0x0) {
              ppppcVar24 = (code ****)0x0;
              do {
                bVar9 = *(byte *)((long)pppppcVar5 + (long)ppppcVar24);
                lVar19 = (long)(char)bVar9;
                if ((-1 < lVar19) && ((*(uint *)(puVar16 + lVar19 * 4 + 0x3c) >> 0xf & 1) != 0)) {
                  ___tolower();
                  bVar9 = (byte)lVar19;
                }
                ppppcVar1 = ppppcStack_108;
                if (-1 < (long)uStack_100) {
                  ppppcVar1 = (code ****)(uStack_100 >> 0x38);
                }
                if (ppppcVar1 < ppppcVar24) goto LAB_10a9751cc;
                pppppppcVar14 = pppppppcStack_110;
                if (-1 < (long)uStack_100) {
                  pppppppcVar14 = (code *******)&pppppppcStack_110;
                }
                *(byte *)((long)pppppppcVar14 + (long)ppppcVar24) = bVar9;
                ppppcVar24 = (code ****)((long)ppppcVar24 + 1);
              } while (ppppcVar20 != ppppcVar24);
            }
            func_0x00010726db4c(&pppppppuStack_d0,&pppppppcStack_110,&pppppppcStack_110);
            pppppcVar23 = (code *****)*pppppcVar23;
          } while (pppppcVar23 != (code *****)0x0);
        }
        puVar16 = PTR___DefaultRuneLocale_11034bcf8;
        puVar10 = &uStack_150;
        puStack_2a0 = &UNK_10f687386;
        while (puVar10 = (undefined8 *)*puVar10, puVar10 != (undefined8 *)0x0) {
          pppppppcVar14 = (code *******)(puVar10 + 2);
          cVar3 = *(char *)((long)puVar10 + 0x27);
          lVar19 = (long)cVar3;
          if (lVar19 < 0) {
            pppppppcVar13 = (code *******)puVar10[2];
            if (puVar10[3] == 0) goto LAB_10a974920;
LAB_10a974914:
            if (*(byte *)pppppppcVar13 != 0x3a) goto LAB_10a974920;
            puStack_2a0 = &UNK_10f6872e2;
            goto LAB_10a974f14;
          }
          pppppppcVar13 = pppppppcVar14;
          if (lVar19 != 0) goto LAB_10a974914;
LAB_10a974920:
          if (cVar3 < '\0') {
            pppppppcVar13 = (code *******)puVar10[2];
            lVar18 = puVar10[3];
            if (lVar18 != 0) goto LAB_10a97493c;
LAB_10a974f08:
            puStack_2a0 = &UNK_10f68731a;
LAB_10a974f14:
            FUN_10a00946c(puStack_2a0);
            goto LAB_10a9751cc;
          }
          pppppppcVar13 = pppppppcVar14;
          lVar18 = lVar19;
          if (lVar19 == 0) goto LAB_10a974f08;
LAB_10a97493c:
          do {
            uVar12 = (ulong)*(byte *)pppppppcVar13;
            FUN_10a98a018();
            if ((uVar12 & 1) == 0) goto LAB_10a974f08;
            lVar18 = lVar18 + -1;
            pppppppcVar13 = (code *******)((long)pppppppcVar13 + 1);
          } while (lVar18 != 0);
          pppppppcVar13 = pppppppcVar14;
          if (cVar3 < '\0') {
            lVar19 = puVar10[3];
            pppppppcVar13 = (code *******)puVar10[2];
          }
          FUN_10a22ab3c(pppppppcVar13,lVar19);
          if (((ulong)pppppppcVar13 & 1) != 0) {
            puStack_2a0 = &UNK_10f687350;
            goto LAB_10a974f14;
          }
          lVar19 = (long)*(char *)((long)puVar10 + 0x3f);
          pbVar6 = (byte *)(puVar10 + 5);
          if (lVar19 < 0) {
            lVar19 = puVar10[6];
            pbVar6 = (byte *)puVar10[5];
          }
          for (; lVar19 != 0; lVar19 = lVar19 + -1) {
            bVar9 = *pbVar6;
            if ((bVar9 == 0x7f) || (bVar9 < 0x20 && bVar9 != 9)) goto LAB_10a974f14;
            pbVar6 = pbVar6 + 1;
          }
          ppppcVar20 = (code ****)puVar10[3];
          pppppppcVar13 = (code *******)puVar10[2];
          if (-1 < (char)*(byte *)((long)puVar10 + 0x27)) {
            ppppcVar20 = (code ****)(ulong)*(byte *)((long)puVar10 + 0x27);
            pppppppcVar13 = pppppppcVar14;
          }
          ppppcStack_108 = (code ****)0x0;
          uStack_100 = 0;
          pppppppcStack_110 = (code *******)0x0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                    (&pppppppcStack_110,ppppcVar20,0);
          if (ppppcVar20 != (code ****)0x0) {
            ppppcVar24 = (code ****)0x0;
            do {
              bVar9 = *(byte *)((long)pppppppcVar13 + (long)ppppcVar24);
              lVar19 = (long)(char)bVar9;
              if ((-1 < lVar19) && ((*(uint *)(puVar16 + lVar19 * 4 + 0x3c) >> 0xf & 1) != 0)) {
                ___tolower();
                bVar9 = (byte)lVar19;
              }
              ppppcVar1 = ppppcStack_108;
              if (-1 < (long)uStack_100) {
                ppppcVar1 = (code ****)(uStack_100 >> 0x38);
              }
              if (ppppcVar1 < ppppcVar24) goto LAB_10a9751cc;
              pppppppcVar2 = pppppppcStack_110;
              if (-1 < (long)uStack_100) {
                pppppppcVar2 = (code *******)&pppppppcStack_110;
              }
              *(byte *)((long)pppppppcVar2 + (long)ppppcVar24) = bVar9;
              ppppcVar24 = (code ****)((long)ppppcVar24 + 1);
            } while (ppppcVar20 != ppppcVar24);
          }
          pppppppcVar13 = (code *******)&pppppppcStack_110;
          func_0x00010726db4c(&pppppppuStack_d0,pppppppcVar13,&pppppppcStack_110);
          if (((ulong)pppppppcVar13 & 1) == 0) {
            puStack_2a0 = &UNK_10f6873c3;
            goto LAB_10a974f14;
          }
          pppppppcVar13 = (code *******)&pppppppcStack_1e0;
          pppppppcStack_110 = pppppppcVar14;
          FUN_109cf993c(pppppppcVar13,pppppppcVar14,&UNK_10dd5b8f9,&pppppppcStack_110,
                        &pppppppcStack_1b8);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (pppppppcVar13 + 5,puVar10 + 5);
        }
        func_0x000107c2826c(&pppppppuStack_d0);
        func_0x000104c4f944(&pppppppuStack_160);
      }
      uVar12 = uStack_188;
      if (cStack_170 == '\x01') {
        lVar19 = *(long *)(*(long *)(lVar17 + 0xa8) + 0xa20);
        if (lVar19 == 0) {
          bVar4 = true;
        }
        else {
          bVar4 = 0x173 < *(int *)(lVar19 + 0x18);
        }
        if (bStack_178 == 1) {
          if (uStack_190 != uStack_188) {
            uVar22 = uStack_190;
            if (bVar4) {
              do {
                FUN_10a98a078(uVar22);
                uVar22 = uVar22 + 0x18;
              } while (uVar22 != uVar12);
            }
            func_0x000107c2b054(&pppppppuStack_160,&DAT_10f68f19e);
            FUN_10a97e3f4(&pppppppuStack_d0,&uStack_190,&pppppppuStack_160);
            uStack_100 = CONCAT17(0x14,(undefined7)uStack_100);
            ppppcStack_108 = (code ****)0x6f746f72705f7465;
            pppppppcStack_110 = (code *******)0x6b636f736265773a;
            uStack_100 = CONCAT35(uStack_100._5_3_,0x736c6f63);
            pppppppcStack_1b8 = (code *******)&pppppppcStack_110;
            pppppppcVar14 = (code *******)&pppppppcStack_1e0;
            func_0x000104c5bc74(pppppppcVar14,&pppppppcStack_110,&UNK_10dd5b8f9,&pppppppcStack_1b8,
                                &uStack_1f8);
            if (*(char *)((long)pppppppcVar14 + 0x3f) < '\0') {
              __ZdlPv(pppppppcVar14[5]);
            }
            pppppppuVar7 = pppppppuStack_d0;
            pppppppcVar14[6] = ppppppcStack_c8;
            pppppppcVar14[5] = (code ******)pppppppuVar7;
            pppppppcVar14[7] = uStack_c0;
            uStack_c0 = (code ******)((ulong)uStack_c0 & 0xffffffffffffff);
            pppppppuStack_d0 = (undefined8 *******)((ulong)pppppppuStack_d0 & 0xffffffffffffff00);
            if (uStack_150._7_1_ < '\0') {
              __ZdlPv(pppppppuStack_160);
            }
          }
          goto LAB_10a974c4c;
        }
        if (bStack_178 == 0) {
          if (bVar4) {
            FUN_10a98a078(&uStack_190);
          }
          uStack_c0 = (code ******)CONCAT17(0x14,(undefined7)uStack_c0);
          ppppppcStack_c8 = (code ******)0x6f746f72705f7465;
          pppppppuStack_d0 = (undefined8 *******)0x6b636f736265773a;
          uStack_c0 = (code ******)CONCAT35(uStack_c0._5_3_,0x736c6f63);
          pppppppuStack_160 = &pppppppuStack_d0;
          pppppppcVar14 = (code *******)&pppppppcStack_1e0;
          func_0x000104c5bc74(pppppppcVar14,&pppppppuStack_d0,&UNK_10dd5b8f9,&pppppppuStack_160,
                              &pppppppcStack_110);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (pppppppcVar14 + 5,&uStack_190);
          goto LAB_10a974c4c;
        }
      }
      else {
LAB_10a974c4c:
        FUN_10a3bf120(&pppppppuStack_160);
        FUN_10a9753f4(&uStack_1f8,*(undefined8 *)(lVar17 + 0xb0),lVar17);
        plVar15 = (long *)0x138;
        __Znwm();
        pppppppuStack_d0 = pppppppuStack_160;
        plVar25 = plVar15 + 1;
        *plVar25 = 0;
        plVar15[2] = 0;
        *plVar15 = (long)&PTR_FUN_110b9f3b0;
        plVar11 = plVar15 + 3;
        uVar12 = *(ulong *)(lVar17 + 0x38);
        plVar21 = (long *)*(long *)(lVar17 + 0x30);
        if (-1 < (char)*(byte *)(lVar17 + 0x47)) {
          uVar12 = (ulong)*(byte *)(lVar17 + 0x47);
          plVar21 = (long *)(lVar17 + 0x30);
        }
        pppppppuStack_160 = (undefined8 *******)0x0;
        ppppppcStack_c8 = ppppppcStack_158;
        (**(code **)(CONCAT17(uStack_150._7_1_,(undefined7)uStack_150) + 0x10))
                  (&uStack_c0,&uStack_150);
        ppppcStack_1b0 = ppppcStack_1d8;
        pppppppcStack_1b8 = pppppppcStack_1e0;
        uStack_88 = uStack_118;
        pppppppcStack_1e0 = (code *******)0x0;
        ppppcStack_1d8 = (code ****)0x0;
        pppppcStack_1a8 = pppppcStack_1d0;
        lStack_1a0 = lStack_1c8;
        uStack_198 = uStack_1c0;
        if (lStack_1c8 != 0) {
          ppppcVar20 = pppppcStack_1d0[1];
          if (((ulong)ppppcStack_1b0 & (long)ppppcStack_1b0 - 1U) == 0) {
            ppppcVar20 = (code ****)((ulong)ppppcVar20 & (long)ppppcStack_1b0 - 1U);
          }
          else {
            uVar22 = 0;
            if (ppppcStack_1b0 != (code ****)0x0) {
              uVar22 = (ulong)ppppcVar20 / (ulong)ppppcStack_1b0;
            }
            if (ppppcStack_1b0 <= ppppcVar20) {
              ppppcVar20 = (code ****)((long)ppppcVar20 - uVar22 * (long)ppppcStack_1b0);
            }
          }
          pppppppcStack_1b8[(long)ppppcVar20] = &pppppcStack_1a8;
          pppppcStack_1d0 = (code *****)0x0;
          lStack_1c8 = 0;
        }
        pppppppcStack_110 = (code *******)FUN_10a9aa240;
        ppppcStack_108 = (code ****)&PTR_DAT_110c34bb8;
        uStack_100 = uStack_1f8;
        uStack_f0 = uStack_1e8;
        uStack_f8 = uStack_1f0;
        uStack_1f0 = 0;
        uStack_1e8 = 0;
        FUN_10a05c494(plVar11,plVar21,uVar12,&UNK_10f68581c,0,&pppppppuStack_d0,2,&pppppppcStack_1b8
                      ,*(undefined8 *)(lVar17 + 0x58),*(undefined8 *)(lVar17 + 0x60),
                      &pppppppcStack_110);
        (*(code *)*ppppcStack_108)(&ppppcStack_108);
        func_0x000104c4f944(&pppppppcStack_1b8);
        FUN_10a042634(&pppppppuStack_d0);
        plStack_230 = plVar11;
        plStack_228 = plVar15;
        FUN_10a97549c(&uStack_1f8);
        FUN_10a042634(&pppppppuStack_160);
        func_0x000104c4f944(&pppppppcStack_1e0);
        FUN_10a042530(auStack_278);
        if (cStack_170 == '\x01') {
          if (2 < (ulong)bStack_178) goto LAB_10a9751cc;
          (*(code *)(&PTR_FUN_110b9f188)[bStack_178])(&uStack_190);
        }
        param_3 = (long *)*param_3;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar4) {
            *plVar25 = *plVar25 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        plStack_288 = plVar11;
        plStack_280 = plVar15;
        (**(code **)(*param_3 + 0x10))(&pppppppuStack_d0,param_3,&plStack_288);
        if (*(char *)(lVar17 + 0xa7) < '\0') {
          __ZdlPv(*(undefined8 *)(lVar17 + 0x90));
        }
        plVar11 = plStack_280;
        *(code *******)(lVar17 + 0x98) = ppppppcStack_c8;
        *(undefined8 ********)(lVar17 + 0x90) = pppppppuStack_d0;
        *(code *******)(lVar17 + 0xa0) = uStack_c0;
        uStack_c0 = (code ******)((ulong)uStack_c0 & 0xffffffffffffff);
        pppppppuStack_d0 = (undefined8 *******)((ulong)pppppppuStack_d0 & 0xffffffffffffff00);
        if (plStack_280 != (long *)0x0) {
          plVar21 = plStack_280 + 1;
          do {
            lVar17 = *plVar21;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar4) {
              *plVar21 = lVar17 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar17 == 0) {
            (**(code **)(*plStack_280 + 0x10))(plStack_280);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
          }
        }
        plVar11 = plStack_228;
        if (plStack_228 != (long *)0x0) {
          plVar21 = plStack_228 + 1;
          do {
            lVar17 = *plVar21;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar4) {
              *plVar21 = lVar17 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar17 == 0) {
            (**(code **)(*plStack_228 + 0x10))(plStack_228);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
          }
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
          return;
        }
        ___stack_chk_fail();
      }
      FUN_10a05bab8(&UNK_10f68728d);
      goto LAB_10a9751cc;
    }
    puVar16 = &UNK_10f6861c4;
  }
  FUN_10a00946c(puVar16);
LAB_10a9751cc:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10a9751d0);
  (*pcVar8)();
}



/* Entry: 10a9751d0; end: 10a975287;  */

undefined8 * FUN_10a9751d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c32328;
  FUN_10a975288();
  func_0x00010a9aa138(param_1 + 0x23);
  func_0x00010a9aa1e8(param_1 + 0x21);
  func_0x00010a9aa190(param_1 + 0x1f);
  func_0x00010a9aa138(param_1 + 0x1d);
  FUN_10a9aa080(param_1 + 0x18);
  func_0x00010a05a86c(param_1 + 0x16);
  if (*(char *)((long)param_1 + 0xa7) < '\0') {
    __ZdlPv(param_1[0x12]);
  }
  func_0x000104c4f944(param_1 + 0xd);
  if (param_1[10] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a975288; end: 10a9753db;  */

void FUN_10a975288(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  long *plStack_30;
  long *plStack_28;
  
  plStack_30 = (long *)0x0;
  plStack_28 = (long *)0x0;
  plVar4 = *(long **)(param_1 + 0x50);
  if (((plVar4 == (long *)0x0) ||
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_28 = plVar4, plVar4 == (long *)0x0)) ||
     (plStack_30 = *(long **)(param_1 + 0x48), plStack_30 == (long *)0x0)) {
    plVar4 = plStack_28;
    if ((bRam000000011330a9e8 & 1) != 0) {
      func_0x00010ae06f08(0,1,&UNK_10f6861ed,&UNK_10f6862ab,300,&UNK_10f6862ec);
    }
    *(undefined4 *)(param_1 + 0x2c) = 3;
    if (plVar4 == (long *)0x0) {
      return;
    }
  }
  else if (*(int *)(param_1 + 0x2c) != 3) {
    *(undefined4 *)(param_1 + 0x2c) = 2;
    lVar5 = (long)*(char *)(param_1 + 0xa7);
    if (lVar5 < 0) {
      lVar5 = *(long *)(param_1 + 0x98);
    }
    if (lVar5 != 0) {
      uStack_48 = *(undefined8 *)(param_1 + 0x98);
      uStack_50 = *(undefined8 *)(param_1 + 0x90);
      lStack_40 = *(long *)(param_1 + 0xa0);
      *(undefined8 *)(param_1 + 0x98) = 0;
      *(undefined8 *)(param_1 + 0xa0) = 0;
      *(undefined8 *)(param_1 + 0x90) = 0;
      (**(code **)(*plStack_30 + 8))(plStack_30,&uStack_50);
      if (lStack_40 < 0) {
        __ZdlPv(uStack_50);
      }
    }
    *(undefined4 *)(param_1 + 0x2c) = 3;
  }
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
  if (lVar5 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  return;
}



/* Entry: 10a9753dc; end: 10a9753df;  */

undefined8 * FUN_10a9753dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c32328;
  FUN_10a975288();
  func_0x00010a9aa138(param_1 + 0x23);
  func_0x00010a9aa1e8(param_1 + 0x21);
  func_0x00010a9aa190(param_1 + 0x1f);
  func_0x00010a9aa138(param_1 + 0x1d);
  FUN_10a9aa080(param_1 + 0x18);
  func_0x00010a05a86c(param_1 + 0x16);
  if (*(char *)((long)param_1 + 0xa7) < '\0') {
    __ZdlPv(param_1[0x12]);
  }
  func_0x000104c4f944(param_1 + 0xd);
  if (param_1[10] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a9753e0; end: 10a9753f3;  */

void FUN_10a9753e0(void)

{
  FUN_10a9751d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a9753f4; end: 10a97549b;  */

void FUN_10a9753f4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  plVar6 = (long *)0x48;
  __Znwm();
  plVar6[2] = (long)&PTR_FUN_110c33ba8;
  plVar6[3] = param_3;
  puVar2 = (undefined8 *)param_2[0xb];
  lVar3 = param_2[0xc];
  *plVar6 = (long)(param_2 + 10);
  plVar6[1] = (long)puVar2;
  *puVar2 = plVar6;
  param_2[0xb] = plVar6;
  param_2[0xc] = lVar3 + 1;
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
  uVar8 = param_2[1];
  uVar7 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *param_1 = plVar6;
  param_1[2] = uVar8;
  param_1[1] = uVar7;
  return;
}



/* Entry: 10a97549c; end: 10a97551b;  */

undefined8 * FUN_10a97549c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)param_1[2];
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (param_1[1] != 0) {
        FUN_10a05c0fc(param_1[1],*param_1);
      }
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
      if (lVar5 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (param_1[2] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return param_1;
}



/* Entry: 10a97551c; end: 10a97596b;  */

void FUN_10a97551c(undefined8 *param_1,long param_2)

{
  bool bVar1;
  code *pcVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined8 **ppuVar5;
  undefined8 *puVar6;
  int *piVar7;
  int *piVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 **ppuStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 **ppuStack_70;
  ulong uStack_68;
  ulong uStack_60;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&UNK_10f68631d,10);
  piVar7 = (int *)&UNK_110c324d8;
  uVar9 = 0;
  do {
    for (; piVar8 = (int *)(&UNK_110c32478 + uVar9 * 0x18), *(int *)(param_2 + 0x2c) <= *piVar8;
        uVar9 = uVar9 << 1 | 1) {
      piVar7 = piVar8;
      if (1 < uVar9) goto LAB_10a9755b8;
    }
    bVar1 = uVar9 == 0;
    uVar9 = 2;
  } while (bVar1);
LAB_10a9755b8:
  if ((piVar7 == (int *)&UNK_110c324d8) || (*(int *)(param_2 + 0x2c) < *piVar7)) {
    func_0x0001093fd0ac(&UNK_10f61d92d);
    goto LAB_10a9758c0;
  }
  uVar9 = *(ulong *)(piVar7 + 4);
  if (0x7ffffffffffffff7 < uVar9) {
    func_0x000109ffde50();
    goto LAB_10a9758c0;
  }
  uVar10 = *(undefined8 *)(piVar7 + 2);
  if (uVar9 < 0x17) {
    uStack_98 = CONCAT17((char)uVar9,(undefined7)uStack_98);
    pppuVar3 = &ppuStack_a8;
    if (uVar9 != 0) goto LAB_10a975624;
  }
  else {
    pppuVar4 = (undefined8 ***)0x19;
    if ((uVar9 | 7) != 0x17) {
      pppuVar4 = (undefined8 ***)((uVar9 | 7) + 1);
    }
    pppuVar3 = pppuVar4;
    __Znwm();
    uStack_98 = (ulong)pppuVar4 | 0x8000000000000000;
    ppuStack_a8 = pppuVar3;
    uStack_a0 = uVar9;
LAB_10a975624:
    _memmove(pppuVar3,uVar10,uVar9);
  }
  *(undefined1 *)((long)pppuVar3 + uVar9) = 0;
  pppuVar4 = &ppuStack_a8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (pppuVar4,0,&UNK_10f686328,0xc);
  puStack_88 = pppuVar4[1];
  puStack_90 = *pppuVar4;
  puStack_80 = pppuVar4[2];
  pppuVar4[1] = (undefined8 **)0x0;
  pppuVar4[2] = (undefined8 **)0x0;
  *pppuVar4 = (undefined8 **)0x0;
  ppuVar5 = &puStack_90;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar5,&DAT_10f68f57e,1);
  uStack_68 = (ulong)ppuVar5[1];
  ppuStack_70 = (undefined8 **)*ppuVar5;
  uStack_60 = (ulong)ppuVar5[2];
  ppuVar5[1] = (undefined8 *)0x0;
  ppuVar5[2] = (undefined8 *)0x0;
  *ppuVar5 = (undefined8 *)0x0;
  puVar6 = (undefined8 *)uStack_68;
  pppuVar4 = (undefined8 ***)ppuStack_70;
  if (-1 < (long)uStack_60) {
    puVar6 = (undefined8 *)(uStack_60 >> 0x38);
    pppuVar4 = &ppuStack_70;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,pppuVar4,puVar6);
  if ((long)uStack_60 < 0) {
    __ZdlPv(ppuStack_70);
  }
  if ((long)puStack_80 < 0) {
    __ZdlPv(puStack_90);
  }
  if ((long)uStack_98 < 0) {
    __ZdlPv(ppuStack_a8);
  }
  puVar6 = (undefined8 *)(ulong)*(uint *)(param_2 + 0x28);
  FUN_10a98a0f0();
  uVar9 = puVar6[1];
  if (0x7ffffffffffffff7 < uVar9) {
    func_0x000109ffde50();
LAB_10a9758c0:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a9758c4);
    (*pcVar2)();
  }
  uVar10 = *puVar6;
  if (uVar9 < 0x17) {
    uStack_98 = CONCAT17((char)uVar9,(undefined7)uStack_98);
    pppuVar3 = &ppuStack_a8;
    if (uVar9 == 0) goto LAB_10a975750;
  }
  else {
    pppuVar4 = (undefined8 ***)0x19;
    if ((uVar9 | 7) != 0x17) {
      pppuVar4 = (undefined8 ***)((uVar9 | 7) + 1);
    }
    pppuVar3 = pppuVar4;
    __Znwm();
    uStack_98 = (ulong)pppuVar4 | 0x8000000000000000;
    ppuStack_a8 = pppuVar3;
    uStack_a0 = uVar9;
  }
  _memmove(pppuVar3,uVar10,uVar9);
LAB_10a975750:
  *(undefined1 *)((long)pppuVar3 + uVar9) = 0;
  pppuVar4 = &ppuStack_a8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (pppuVar4,0,&UNK_10f686335,0xc);
  puStack_88 = pppuVar4[1];
  puStack_90 = *pppuVar4;
  puStack_80 = pppuVar4[2];
  pppuVar4[1] = (undefined8 **)0x0;
  pppuVar4[2] = (undefined8 **)0x0;
  *pppuVar4 = (undefined8 **)0x0;
  ppuVar5 = &puStack_90;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar5,&DAT_10f68f57e,1);
  uStack_68 = (ulong)ppuVar5[1];
  ppuStack_70 = (undefined8 **)*ppuVar5;
  uStack_60 = (ulong)ppuVar5[2];
  ppuVar5[1] = (undefined8 *)0x0;
  ppuVar5[2] = (undefined8 *)0x0;
  *ppuVar5 = (undefined8 *)0x0;
  puVar6 = (undefined8 *)uStack_68;
  pppuVar4 = (undefined8 ***)ppuStack_70;
  if (-1 < (long)uStack_60) {
    puVar6 = (undefined8 *)(uStack_60 >> 0x38);
    pppuVar4 = &ppuStack_70;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,pppuVar4,puVar6);
  if ((long)uStack_60 < 0) {
    __ZdlPv(ppuStack_70);
  }
  if ((long)puStack_80 < 0) {
    __ZdlPv(puStack_90);
  }
  if ((long)uStack_98 < 0) {
    __ZdlPv(ppuStack_a8);
  }
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (&puStack_90,&UNK_10f686342,param_2 + 0x30);
  ppuVar5 = &puStack_90;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar5,&DAT_10f68f57e,1);
  uStack_68 = (ulong)ppuVar5[1];
  ppuStack_70 = (undefined8 **)*ppuVar5;
  uStack_60 = (ulong)ppuVar5[2];
  ppuVar5[1] = (undefined8 *)0x0;
  ppuVar5[2] = (undefined8 *)0x0;
  *ppuVar5 = (undefined8 *)0x0;
  puVar6 = (undefined8 *)uStack_68;
  pppuVar4 = (undefined8 ***)ppuStack_70;
  if (-1 < (long)uStack_60) {
    puVar6 = (undefined8 *)(uStack_60 >> 0x38);
    pppuVar4 = &ppuStack_70;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,pppuVar4,puVar6);
  if ((long)uStack_60 < 0) {
    __ZdlPv(ppuStack_70);
  }
  if ((long)puStack_80 < 0) {
    __ZdlPv(puStack_90);
  }
  return;
}



/* Entry: 10a97596c; end: 10a975b1f;  */

undefined1  [16] FUN_10a97596c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe;
  auVar1._0_8_ = &UNK_10f687417;
  return auVar1;
}



/* Entry: 10a975b20; end: 10a975b7f;  */

void FUN_10a975b20(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000001;
  uStack_48 = 6;
  puStack_40 = &UNK_10f68581c;
  uStack_38 = 0;
  puStack_30 = &UNK_10f68581c;
  uStack_28 = 0;
  uStack_20 = 0x12200000000;
  uStack_18 = 0xffffffff;
  FUN_10a975b80(param_1,&uStack_58);
  FUN_10a9abfa8();
  return;
}



/* Entry: 10a975b80; end: 10a975c57;  */

/* WARNING: Removing unreachable block (ram,0x00010a975c18) */

undefined1  [16] FUN_10a975b80(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f687417,0xe);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a9abeac(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a975c58; end: 10a975d43;  */

void FUN_10a975c58(undefined8 param_1)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,6);
  puStack_80 = &UNK_10f68581c;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_70 = &UNK_10f68581c;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a975d44(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6858de;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f68581c;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a9ac160();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f686159;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f68581c;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a9ac348(param_1,&puStack_98);
  FUN_10a9ac538(param_1);
  return;
}



/* Entry: 10a975d44; end: 10a975e1b;  */

/* WARNING: Removing unreachable block (ram,0x00010a975ddc) */

undefined1  [16] FUN_10a975d44(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f687426,0x15);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a9ac064(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a975e1c; end: 10a975f43;  */

void FUN_10a975e1c(undefined8 param_1)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,6);
  puStack_80 = &UNK_10f68581c;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_70 = &UNK_10f68581c;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a975f44(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f686348;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f68581c;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a9ac6f0();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f68634d;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f68581c;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a9ac868(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f686354;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f68581c;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a9ac9fc(param_1,&puStack_98);
  FUN_10a9acb08(param_1);
  return;
}



/* Entry: 10a975f44; end: 10a97601b;  */

/* WARNING: Removing unreachable block (ram,0x00010a975fdc) */

undefined1  [16] FUN_10a975f44(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f68743c,0x13);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a9ac5f4(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a97601c; end: 10a9760df;  */

undefined8 * FUN_10a97601c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a9760e0; end: 10a9760e3;  */

undefined8 * FUN_10a9760e0(undefined8 *param_1)

{
  code *pcVar1;
  
  *param_1 = &PTR_FUN_110c323d8;
  if ((ulong)*(byte *)(param_1 + 7) < 3) {
    (*(code *)(&PTR_FUN_110c34bd0)[*(byte *)(param_1 + 7)])(param_1 + 4);
    *param_1 = &PTR_DAT_110b17898;
    func_0x00010a004dac(param_1 + 1);
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a9760e0);
  (*pcVar1)();
}



/* Entry: 10a9760e4; end: 10a9760f7;  */

void FUN_10a9760e4(void)

{
  func_0x00010a97607c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a9760f8; end: 10a976147;  */

undefined8 * FUN_10a9760f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c32430;
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a976148; end: 10a97614b;  */

undefined8 * FUN_10a976148(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c32430;
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a97614c; end: 10a97615f;  */

void FUN_10a97614c(void)

{
  FUN_10a9760f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a976160; end: 10a9761df;  */

undefined1  [16] FUN_10a976160(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10;
  auVar1._0_8_ = &UNK_10f687450;
  return auVar1;
}



/* Entry: 10a9761e0; end: 10a976297;  */

void FUN_10a9761e0(undefined8 param_1)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_88 = (undefined *)0x0;
  uStack_80 = 0xffffffff00000001;
  uStack_78 = CONCAT44(uStack_78._4_4_,6);
  puStack_70 = &UNK_10f68581c;
  uStack_68 = 0;
  puStack_60 = &UNK_10f68581c;
  uStack_58 = 0;
  uStack_50 = 0x17300000000;
  uStack_48 = CONCAT44(uStack_48._4_4_,0xffffffff);
  FUN_10a976298(param_1,&puStack_88);
  uStack_68 = 0x6ffffffff;
  puStack_70 = (undefined *)0x100000064;
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f685c0b;
  puStack_60 = &UNK_10f68581c;
  uStack_58 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_3c = 0xffffffff00000173;
  puStack_30 = &UNK_10f68581c;
  uStack_28 = 0;
  FUN_10a9accdc();
  FUN_10a9acfc8(param_1);
  return;
}



/* Entry: 10a976298; end: 10a97636f;  */

/* WARNING: Removing unreachable block (ram,0x00010a976330) */

undefined1  [16] FUN_10a976298(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f687450,0x10);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a9acbe0(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a976370; end: 10a9763f3;  */

undefined1  [16] FUN_10a976370(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe;
  auVar1._0_8_ = &UNK_10f687461;
  return auVar1;
}



/* Entry: 10a9763f4; end: 10a9764e3;  */

void FUN_10a9763f4(undefined8 param_1)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000400;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f68581c;
  uStack_78 = 0;
  puStack_70 = &UNK_10f68581c;
  uStack_68 = 0;
  uStack_60 = 0x11e00000000;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a9764e4(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f68637c;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f68581c;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f68581c;
  uStack_38 = 0;
  FUN_10a9ad180();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f686387;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f68581c;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = (undefined *)0x0;
  uStack_38 = 0;
  func_0x00010a9ad41c(param_1,&puStack_98);
  FUN_10a9ad5a4(param_1);
  return;
}



/* Entry: 10a9764e4; end: 10a9765bb;  */

/* WARNING: Removing unreachable block (ram,0x00010a97657c) */

undefined1  [16] FUN_10a9764e4(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f687461,0xe);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a9ad084(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a9765bc; end: 10a976647;  */

undefined4 FUN_10a9765bc(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}


