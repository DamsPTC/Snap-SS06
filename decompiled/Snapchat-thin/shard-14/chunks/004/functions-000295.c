/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b22cd2c; end: 10b22cd6f;  */

void FUN_10b22cd2c(void)

{
  func_0x00010b22e9a4();
  func_0x00010b22ebf0();
  func_0x00010b22eb6c();
  FUN_10b22cd70();
  func_0x00010b22e9d4();
  func_0x00010b22ebb8();
  return;
}



/* Entry: 10b22cd70; end: 10b22cd8b;  */

void FUN_10b22cd70(void)

{
  func_0x00010b22ed7c();
  FUN_10b22cd8c();
  return;
}



/* Entry: 10b22cd8c; end: 10b22ce1b;  */

void FUN_10b22cd8c(void)

{
  long unaff_x19;
  undefined8 uStack_30;
  
  func_0x00010b22e900();
  func_0x00010b22e910();
  FUN_10b22b274();
  func_0x00010b22eba4();
  FUN_10b22b29c();
  func_0x00010b22ec68();
  func_0x00010b22e9c0();
  __ZNSt3__15mutex4lockEv(uStack_30 + 0x40);
  func_0x00010b22e9c8();
  FUN_10b22ce1c();
  func_0x00010b22eb34();
  if (unaff_x19 == 0) {
    func_0x00010b22ecec(uStack_30);
  }
  else {
    func_0x00010b22ec10();
    func_0x00010b22e8d4();
    func_0x00010b22e7f8();
  }
  func_0x00010b22e9f0();
  return;
}



/* Entry: 10b22ce1c; end: 10b22ce2f;  */

void FUN_10b22ce1c(undefined8 *param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13exception_ptraSERKS__1103461a0)(*param_2 + 0x80,*param_1);
  return;
}



/* Entry: 10b22ce30; end: 10b22ce5b;  */

undefined8 * FUN_10b22ce30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc95a0;
  FUN_10b22ca54(param_1 + 1);
  return param_1;
}



/* Entry: 10b22ce5c; end: 10b22ce6f;  */

void FUN_10b22ce5c(void)

{
  FUN_10b22ce30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b22ce70; end: 10b22ceb7;  */

void FUN_10b22ce70(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  undefined1 auStack_30 [16];
  
  func_0x00010b22ea40();
  if (param_3 != 0) {
    do {
      func_0x000107c351a4();
    } while (extraout_w10 != 0);
  }
  FUN_10b22c0c8(param_1 + 8);
  func_0x00010b22ca84(auStack_30);
  return;
}



/* Entry: 10b22ceb8; end: 10b22cecf;  */

void FUN_10b22ceb8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b22ced0; end: 10b22cfab;  */

void FUN_10b22ced0(long param_1)

{
  func_0x00010b22eab8();
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10b22cfac; end: 10b22cfaf;  */

void FUN_10b22cfac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc95f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b22cfb0; end: 10b22cfc3;  */

void FUN_10b22cfb0(void)

{
  func_0x00010b22cfd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b22cfc4; end: 10b22cfdb;  */

long FUN_10b22cfc4(long param_1)

{
  FUN_10b245e80(param_1 + 0x58);
  func_0x00010b227f1c(param_1 + 0x48);
  func_0x00010b2481f8(param_1 + 0x40);
  func_0x00010b2481c8(param_1 + 0x38);
  func_0x00010b248000(param_1 + 0x30);
  func_0x00010b247f80(param_1 + 0x28);
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000107c278a0();
  }
  return param_1 + 0x18;
}



/* Entry: 10b22cfdc; end: 10b22cfff;  */

void FUN_10b22cfdc(long param_1)

{
  func_0x000107c351c8();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b22d000; end: 10b22d103;  */

void FUN_10b22d000(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined1 auStack_f0 [56];
  undefined8 uStack_b8;
  int iStack_b0;
  char cStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [72];
  
  iVar1 = (int)auStack_f0;
  plVar3 = *(long **)*param_1;
  lVar2 = *plVar3;
  func_0x000107c278b8(auStack_80,&UNK_10f73ab98);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  func_0x00010b22ec50(auStack_68,auStack_80);
  func_0x000107c27914(&uStack_98);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
  plVar3 = (long *)plVar3[1];
  (**(code **)(*plVar3 + 0x30))(&uStack_b8,plVar3,auStack_68);
  func_0x000107c2bebc(auStack_f0);
  if ((cStack_a0 == '\x01') &&
     (func_0x000107c3034c(auStack_f0,uStack_b8,iStack_b0 - (int)uStack_b8), iVar1 != 0)) {
    func_0x00010b52378c(lVar2 + 0x30,auStack_f0);
  }
  else {
    func_0x00010b22eb48(0x76);
  }
  FUN_10b5234a8(auStack_f0);
  func_0x000107c279c4(&uStack_b8);
  func_0x000107c27f6c(auStack_68);
  return;
}



/* Entry: 10b22d104; end: 10b22d13b;  */

undefined8 FUN_10b22d104(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  _strlen(param_2);
  func_0x00010ae6bd08(param_1,param_2,uVar1);
  return param_1;
}



/* Entry: 10b22d13c; end: 10b22d13f;  */

void FUN_10b22d13c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc9640;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b22d140; end: 10b22d153;  */

void FUN_10b22d140(void)

{
  func_0x00010b22dd58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b22d154; end: 10b22d1bf;  */

undefined8 FUN_10b22d154(long param_1)

{
  undefined8 unaff_x19;
  long lVar1;
  
  FUN_10b223388(param_1 + 0x170);
  func_0x000107276ba4(param_1 + 200);
  func_0x000107c27c20(param_1 + 0xb8);
  (*(code *)**(undefined8 **)(param_1 + 0x88))();
  lVar1 = param_1 + 0x18;
  (*(code *)**(undefined8 **)(param_1 + 0x58))((undefined8 *)(param_1 + 0x58));
  func_0x000107c27d08(param_1 + 0x40);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x28);
  func_0x00010b223980();
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 10b22d1c0; end: 10b22d1c3;  */

void FUN_10b22d1c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b22d1c4; end: 10b22d6e7;  */

void FUN_10b22d1c4(undefined8 *param_1,undefined ***param_2,long *param_3,long param_4)

{
  undefined4 uVar1;
  long *plVar2;
  ulong *puVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined ***pppuVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  int extraout_w10;
  int extraout_w10_00;
  undefined **ppuVar10;
  undefined8 uStack_288;
  undefined8 uStack_280;
  ulong uStack_270;
  undefined ***pppuStack_268;
  ulong uStack_260;
  ulong uStack_258;
  undefined8 uStack_250;
  ulong *puStack_248;
  undefined ***pppuStack_180;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined8 uStack_148;
  ulong uStack_140;
  undefined ***pppuStack_138;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined1 auStack_110 [16];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [24];
  undefined8 ******ppppppuStack_d0;
  ulong uStack_c8;
  byte bStack_b9;
  ulong uStack_88;
  undefined ***pppuStack_80;
  undefined1 uStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((param_3 == (long *)0x0) && (*(long *)(param_4 + 0x20) == 0)) {
    func_0x00010b22ec34();
    func_0x00010b22e9c8();
    FUN_10b22d6e8();
    func_0x00010b22eb94();
    return;
  }
  uStack_88 = 0;
  __ZNSt3__16chrono12steady_clock3nowEv();
  uStack_78 = 1;
  pppuStack_80 = param_2;
  func_0x00010b22ed40(auStack_e8);
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  func_0x00010b22ec50(&ppppppuStack_d0);
  func_0x000107c27914(&uStack_100);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e8);
  plVar2 = *(long **)(param_4 + 0x20);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x10))(auStack_110,plVar2,&ppppppuStack_d0);
    pppuStack_138 = pppuStack_80;
    uStack_140 = uStack_88;
    uStack_130 = uStack_78;
    uStack_120 = *(undefined8 *)(param_4 + 0x18);
    uStack_128 = *(ulong *)(param_4 + 0x10);
    if (*(long *)(param_4 + 0x18) != 0) {
      do {
        func_0x000107c351a4();
      } while (extraout_w10 != 0);
    }
    ppuStack_158 = (undefined **)0x0;
    ppuStack_150 = (undefined **)0x0;
    uStack_288 = 0;
    uStack_280 = 0;
    func_0x0001052b21e8(&uStack_270,auStack_110,&uStack_288);
    func_0x0001052b223c(&ppuStack_158,&uStack_270);
    puVar3 = &uStack_270;
    func_0x0001052b22bc();
    func_0x00010b22ec2c();
    func_0x00010b22eb58();
    puVar3[4] = 0;
    func_0x00010b22ed88();
    FUN_10b22d824();
    *puVar3 = (ulong)&PTR_FUN_110cc9710;
    FUN_10b22d7e8(&uStack_50,puVar3[3],puVar3[4]);
    pppuStack_268 = pppuStack_138;
    uStack_270 = uStack_140;
    uStack_260 = CONCAT71(uStack_12f,uStack_130);
    uStack_250 = uStack_120;
    uStack_258 = uStack_128;
    uStack_128 = 0;
    uStack_120 = 0;
    ppuStack_60 = (undefined **)0x0;
    lStack_58 = 0;
    ppuStack_70 = ppuStack_158 + 0xb;
    lStack_68 = CONCAT71(lStack_68._1_7_,1);
    puStack_248 = puVar3;
    __ZNSt3__15mutex4lockEv();
    ppuVar4 = ppuStack_158;
    func_0x0001052b2274();
    if ((int)ppuVar4 == 0) {
      puVar7 = (undefined8 *)0x38;
      __Znwm();
      puVar3 = puStack_248;
      *puVar7 = &PTR_FUN_110cc9748;
      puVar7[2] = pppuStack_268;
      puVar7[1] = uStack_270;
      puVar7[3] = uStack_260;
      puVar7[5] = uStack_250;
      puVar7[4] = uStack_258;
      uStack_258 = 0;
      uStack_250 = 0;
      puStack_248 = (ulong *)0x0;
      puVar7[6] = puVar3;
      puVar9 = ppuStack_158[0x14];
      ppuStack_158[0x14] = (undefined *)puVar7;
      if (puVar9 != (undefined *)0x0) {
        func_0x00010b22ec00();
      }
    }
    else {
      func_0x0001052b223c(&ppuStack_60,&ppuStack_158);
    }
    func_0x000107c2798c(&ppuStack_70);
    if (ppuStack_60 != (undefined **)0x0) {
      ppuStack_70 = ppuStack_60;
      lStack_68 = lStack_58;
      if (lStack_58 != 0) {
        do {
          func_0x000107c351a4();
        } while (extraout_w10_00 != 0);
      }
      FUN_10b22da84(&uStack_270);
      func_0x0001052b22bc(&ppuStack_70);
    }
    param_1[1] = uStack_48;
    *param_1 = uStack_50;
    uStack_50 = 0;
    uStack_48 = 0;
    func_0x0001052b22bc(&ppuStack_60);
    FUN_10b22db9c(&uStack_270);
    FUN_10b2223d4(&uStack_50);
    func_0x0001052b22bc(&ppuStack_158);
    func_0x00010b227f1c(&uStack_128);
    func_0x0001052b22bc(auStack_110);
    goto LAB_10b22d5a0;
  }
  uStack_140 = uStack_140 & 0xffffffffffffff00;
  uStack_128 = uStack_128 & 0xffffffffffffff00;
  func_0x000107c30034(&uStack_270);
  uVar5 = uStack_270;
  FUN_10b4a11d4(uStack_270,&ppppppuStack_d0);
  func_0x000107c2bec8(&uStack_270);
  if ((int)uVar5 == 0) {
    if (param_3 != (long *)0x0) {
      (**(code **)(*param_3 + 0x30))(&uStack_270,param_3,&ppppppuStack_d0);
      func_0x0001052b2b60(&uStack_140,&uStack_270);
      func_0x000107c279c4(&uStack_270);
      goto LAB_10b22d574;
    }
    func_0x00010b22ec34();
    func_0x00010b22e9c8();
    FUN_10b22d6e8();
  }
  else {
    uStack_148 = 0;
    ppuStack_150 = (undefined **)0x0;
    ppuStack_158 = &PTR_FUN_110cf8b38;
    func_0x000105637028(&uStack_270);
    uStack_148 = CONCAT44(uStack_148._4_4_,(int)uVar5);
    uStack_260 = uStack_260 | 0x100000;
    if (pppuStack_180 == (undefined ***)0x0) {
      pppuVar6 = pppuStack_268;
      if (((ulong)pppuStack_268 & 1) != 0) {
        pppuVar6 = *(undefined ****)((ulong)pppuStack_268 & 0xfffffffffffffffe);
      }
      FUN_10b22dc70();
      pppuStack_180 = pppuVar6;
    }
    if (pppuStack_180 != &ppuStack_158) {
      ppuVar8 = pppuStack_180[1];
      ppuVar4 = ppuVar8;
      if (((ulong)ppuVar8 & 1) != 0) {
        ppuVar4 = *(undefined ***)((ulong)ppuVar8 & 0xfffffffffffffffe);
      }
      ppuVar10 = ppuStack_150;
      if (((ulong)ppuStack_150 & 1) != 0) {
        ppuVar10 = *(undefined ***)((ulong)ppuStack_150 & 0xfffffffffffffffe);
      }
      if (ppuVar4 == ppuVar10) {
        pppuStack_180[1] = ppuStack_150;
        uVar1 = *(undefined4 *)(pppuStack_180 + 2);
        *(undefined4 *)(pppuStack_180 + 2) = (undefined4)uStack_148;
        uStack_148 = CONCAT44(uStack_148._4_4_,uVar1);
        ppuStack_150 = ppuVar8;
      }
      else {
        FUN_10b510c88();
      }
    }
    if (-1 < (char)bStack_b9) {
      uStack_c8 = (ulong)bStack_b9;
      ppppppuStack_d0 = &ppppppuStack_d0;
    }
    FUN_10b4b3734(&uStack_288,ppppppuStack_d0,uStack_c8,0,0,&uStack_270);
    func_0x0001086554b0(&uStack_140,&uStack_288);
    func_0x000107c27914(&uStack_288);
    FUN_10b50e8bc(&uStack_270);
    FUN_10b510af0(&ppuStack_158);
LAB_10b22d574:
    func_0x0001053a4504(&uStack_88);
    FUN_10b228b70(&uStack_270,&uStack_140,&uStack_88);
    func_0x00010b22e9c8();
    FUN_10b22d6e8();
  }
  func_0x00010b22eb94();
  func_0x000107c279c4(&uStack_140);
LAB_10b22d5a0:
  func_0x000107c27f6c(&ppppppuStack_d0);
  return;
}



/* Entry: 10b22d6e8; end: 10b22d737;  */

void FUN_10b22d6e8(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  
  func_0x00010b22e9b4();
  FUN_10b22d824();
  FUN_10b22d738(auStack_48,param_2);
  FUN_10b22d7e8();
  FUN_10b22d954(auStack_48);
  return;
}



/* Entry: 10b22d738; end: 10b22d7e7;  */

void FUN_10b22d738(void)

{
  long unaff_x19;
  undefined1 auStack_40 [16];
  long lStack_30;
  
  func_0x00010b22e900();
  func_0x00010b22e910();
  FUN_10b2221d0();
  func_0x00010b22eba4();
  FUN_10b2221f8();
  FUN_10b2223d4(auStack_40);
  func_0x00010b22eae0();
  __ZNSt3__15mutex4lockEv(lStack_30 + 0x60);
  if (*(char *)(lStack_30 + 0x28) == '\x01') {
    FUN_10b222918();
  }
  else {
    FUN_10b2228c8();
    *(undefined1 *)(lStack_30 + 0x28) = 1;
  }
  func_0x00010b22eb20();
  if (unaff_x19 == 0) {
    func_0x00010b22ed18();
  }
  else {
    func_0x00010b22ec10();
    func_0x00010b22e8d4();
    func_0x00010b22e7f8();
  }
  func_0x00010b22eb9c();
  return;
}



/* Entry: 10b22d7e8; end: 10b22d81f;  */

void FUN_10b22d7e8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  int extraout_w10_00;
  
  if (param_3 != 0) {
    do {
      func_0x000107c351a4();
    } while (extraout_w10 != 0);
    do {
      func_0x000107c351a4();
    } while (extraout_w10_00 != 0);
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  func_0x00010b22eae0();
  return;
}



/* Entry: 10b22d820; end: 10b22d823;  */

long FUN_10b22d820(long param_1)

{
  long extraout_x8;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x00010b22ec8c(&PTR_FUN_110cc9690);
  if (extraout_x8 != 0) {
    func_0x00010b22e9a4();
    func_0x000104bdfe3c(auStack_28,auStack_30);
    FUN_10b22d9ec(param_1,auStack_28);
    __ZNSt13exception_ptrD1Ev(auStack_28);
    __ZNSt9exceptionD2Ev(auStack_30);
    func_0x00010b22ed38();
  }
  FUN_10b2223d4(param_1 + 0x18);
  FUN_10b2223d4();
  return param_1;
}



/* Entry: 10b22d824; end: 10b22d8bb;  */

undefined8 * FUN_10b22d824(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  
  *param_1 = &PTR_FUN_110cc9690;
  puVar3 = (undefined8 *)0xc8;
  __Znwm();
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_110cc96c0;
  puVar3[6] = 0;
  puVar3[5] = 0;
  puVar3[8] = 0;
  puVar3[7] = 0;
  puVar5 = puVar3 + 3;
  puVar3[4] = 0;
  *puVar5 = 0;
  puVar3[9] = 0x3cb0b1bb;
  puVar3[0xb] = 0;
  puVar3[10] = 0;
  puVar3[0xd] = 0;
  puVar3[0xc] = 0;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0x32aaaba7;
  puVar3[0x11] = 0;
  puVar3[0x10] = 0;
  puVar3[0x13] = 0;
  puVar3[0x12] = 0;
  puVar3[0x15] = 0;
  puVar3[0x14] = 0;
  puVar3[0x17] = 0;
  puVar3[0x16] = 0;
  puVar3[0x18] = 0;
  param_1[1] = puVar5;
  param_1[2] = puVar3;
  param_1[3] = puVar5;
  param_1[4] = puVar3;
  plVar4 = puVar3 + 1;
  *plVar4 = 0;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return param_1;
}



/* Entry: 10b22d8bc; end: 10b22d8cf;  */

void FUN_10b22d8bc(void)

{
  FUN_10b22d954();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b22d8d0; end: 10b22d8d3;  */

void FUN_10b22d8d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc96c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b22d8d4; end: 10b22d8e7;  */

void FUN_10b22d8d4(void)

{
  FUN_10b22d944();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b22d8e8; end: 10b22d943;  */

long FUN_10b22d8e8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  if (lVar1 != 0) {
    func_0x00010b22e834();
  }
  __ZNSt13exception_ptrD1Ev(param_1 + 0xb8);
  __ZNSt3__15mutexD1Ev(param_1 + 0x78);
  lVar1 = param_1 + 0x48;
  __ZNSt3__118condition_variableD1Ev(lVar1);
  if (*(char *)(param_1 + 0x40) == '\x01') {
    func_0x000107c28090(param_1 + 0x20);
    func_0x00010598e0e4(param_1 + 0x28);
    return param_1 + 0x18;
  }
  return lVar1;
}



/* Entry: 10b22d944; end: 10b22d953;  */

void FUN_10b22d944(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b22d954; end: 10b22d9eb;  */

long FUN_10b22d954(long param_1)

{
  long extraout_x8;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x00010b22ec8c(&PTR_FUN_110cc9690);
  if (extraout_x8 != 0) {
    func_0x00010b22e9a4();
    func_0x000104bdfe3c(auStack_28,auStack_30);
    FUN_10b22d9ec(param_1,auStack_28);
    __ZNSt13exception_ptrD1Ev(auStack_28);
    __ZNSt9exceptionD2Ev(auStack_30);
    func_0x00010b22ed38();
  }
  FUN_10b2223d4(param_1 + 0x18);
  FUN_10b2223d4();
  return param_1;
}



/* Entry: 10b22d9ec; end: 10b22da83;  */

void FUN_10b22d9ec(void)

{
  long unaff_x19;
  undefined1 auStack_40 [16];
  long lStack_30;
  
  func_0x00010b22e900();
  func_0x00010b22e910();
  FUN_10b2221d0();
  func_0x00010b22eba4();
  FUN_10b2221f8();
  FUN_10b2223d4(auStack_40);
  func_0x00010b22eae0();
  __ZNSt3__15mutex4lockEv(lStack_30 + 0x60);
  __ZNSt13exception_ptraSERKS_(lStack_30 + 0xa0);
  func_0x00010b22eb20();
  if (unaff_x19 == 0) {
    func_0x00010b22ed18();
  }
  else {
    func_0x00010b22ec10();
    func_0x00010b22e8d4();
    func_0x00010b22e7f8();
  }
  func_0x00010b22eb9c();
  return;
}



/* Entry: 10b22da84; end: 10b22db9b;  */

void FUN_10b22da84(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar1;
  undefined8 uStack_88;
  long lStack_80;
  undefined1 auStack_78 [40];
  undefined1 auStack_50 [32];
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  if (param_3 != 0) {
    do {
      func_0x000107c351a4();
    } while (extraout_w10 != 0);
    do {
      func_0x000107c351a4();
    } while (extraout_w10_00 != 0);
  }
  uStack_88 = param_2;
  lStack_80 = param_3;
  func_0x0001052b22e4(auStack_50,&uStack_88);
  func_0x0001053a4504(param_1);
  FUN_10b228b70(auStack_78,auStack_50,param_1);
  func_0x000107c279c4(auStack_50);
  FUN_10b22d738(uVar1,auStack_78);
  FUN_10b48baa0(auStack_78);
  func_0x0001052b22bc(&uStack_88);
  func_0x00010b22ec2c();
  return;
}



/* Entry: 10b22db9c; end: 10b22dbcf;  */

long FUN_10b22db9c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (lVar1 != 0) {
    func_0x00010b22e834();
  }
  func_0x00010b227f1c(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b22dbd0; end: 10b22dbd3;  */

long FUN_10b22dbd0(long param_1)

{
  long extraout_x8;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x00010b22ec8c(&PTR_FUN_110cc9690);
  if (extraout_x8 != 0) {
    func_0x00010b22e9a4();
    func_0x000104bdfe3c(auStack_28,auStack_30);
    FUN_10b22d9ec(param_1,auStack_28);
    __ZNSt13exception_ptrD1Ev(auStack_28);
    __ZNSt9exceptionD2Ev(auStack_30);
    func_0x00010b22ed38();
  }
  FUN_10b2223d4(param_1 + 0x18);
  FUN_10b2223d4();
  return param_1;
}



/* Entry: 10b22dbd4; end: 10b22dbe7;  */

void FUN_10b22dbd4(void)

{
  FUN_10b22d954();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b22dbe8; end: 10b22dc13;  */

undefined8 * FUN_10b22dbe8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc9748;
  FUN_10b22db9c(param_1 + 1);
  return param_1;
}



/* Entry: 10b22dc14; end: 10b22dc27;  */

void FUN_10b22dc14(void)

{
  FUN_10b22dbe8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b22dc28; end: 10b22dc6f;  */

void FUN_10b22dc28(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  undefined1 auStack_30 [16];
  
  func_0x00010b22ea40();
  if (param_3 != 0) {
    do {
      func_0x000107c351a4();
    } while (extraout_w10 != 0);
  }
  FUN_10b22da84(param_1 + 8);
  func_0x0001052b22bc(auStack_30);
  return;
}



/* Entry: 10b22dc70; end: 10b22dcb7;  */

void FUN_10b22dc70(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x18;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x18);
  }
  *puVar1 = &PTR_FUN_110cf8b38;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b22dcb8; end: 10b22dd6f;  */

long FUN_10b22dcb8(long param_1)

{
  func_0x0001052b243c(param_1 + 0x18);
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c278a0();
  }
  return param_1 + 8;
}



/* Entry: 10b22dd70; end: 10b22de17;  */

void FUN_10b22dd70(long param_1)

{
  func_0x000107c351c8();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b22de18; end: 10b22de2f;  */

void FUN_10b22de18(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b22de30; end: 10b22e01b;  */

undefined1  [16]
FUN_10b22de30(undefined8 param_1,undefined8 param_2,long *param_3,long *param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined1 in_NG;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  long *plVar6;
  long *unaff_x21;
  long *plVar7;
  long *plVar8;
  long *unaff_x27;
  undefined1 auVar9 [16];
  undefined1 auStack_78 [24];
  
  plVar6 = param_3 + 3;
  FUN_10b22bd90();
  plVar8 = (long *)param_3[1];
  if (plVar8 != (long *)0x0) {
    uVar5 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar5) == 0) {
      unaff_x27 = (long *)(uVar5 & (ulong)plVar6);
      in_NG = false;
    }
    else {
      in_NG = (long)plVar6 - (long)plVar8 < 0;
      unaff_x27 = plVar6;
      if (plVar8 <= plVar6) {
        uVar1 = 0;
        if (plVar8 != (long *)0x0) {
          uVar1 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x27 = (long *)((long)plVar6 - uVar1 * (long)plVar8);
      }
    }
    plVar7 = *(long **)(*param_3 + (long)unaff_x27 * 8);
    unaff_x21 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      unaff_x21 = plVar7;
      do {
        while( true ) {
          unaff_x21 = (long *)*unaff_x21;
          if (unaff_x21 == (long *)0x0) goto LAB_10b22df00;
          plVar7 = (long *)unaff_x21[1];
          if (plVar7 != plVar6) break;
          in_NG = unaff_x21[2] - *param_4 < 0;
          if (unaff_x21[2] == *param_4) {
            uVar4 = 0;
            goto LAB_10b22dfec;
          }
        }
        if (((ulong)plVar8 & uVar5) == 0) {
          plVar7 = (long *)((ulong)plVar7 & uVar5);
        }
        else if (plVar8 <= plVar7) {
          uVar1 = 0;
          if (plVar8 != (long *)0x0) {
            uVar1 = (ulong)plVar7 / (ulong)plVar8;
          }
          plVar7 = (long *)((long)plVar7 - uVar1 * (long)plVar8);
        }
        in_NG = (long)plVar7 - (long)unaff_x27 < 0;
      } while (plVar7 == unaff_x27);
    }
  }
LAB_10b22df00:
  FUN_10b22e01c(auStack_78,param_3,plVar6,param_5,param_6,param_7);
  func_0x00010b22ea98();
  if ((plVar8 == (long *)0x0) || (func_0x00010b22eda8(param_1,param_2,(float)plVar8), (bool)in_NG))
  {
    bVar2 = (long *)0x2 < plVar8;
    bVar3 = plVar8 == (long *)0x3;
    func_0x00010b22e928((long)plVar8 << 1);
    uVar4 = extraout_x8;
    if (!bVar2 || bVar3) {
      uVar4 = extraout_x9;
    }
    func_0x00010b22e05c(param_3,uVar4);
    plVar8 = (long *)param_3[1];
    if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
      unaff_x27 = (long *)((long)plVar8 - 1U & (ulong)plVar6);
    }
    else {
      unaff_x27 = plVar6;
      if (plVar8 <= plVar6) {
        uVar5 = 0;
        if (plVar8 != (long *)0x0) {
          uVar5 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x27 = (long *)((long)plVar6 - uVar5 * (long)plVar8);
      }
    }
  }
  if (*(long *)(*param_3 + (long)unaff_x27 * 8) == 0) {
    func_0x00010b22ec9c();
    *(undefined8 *)(extraout_x8_00 + (long)unaff_x27 * 8) = extraout_x9_00;
    if (*unaff_x21 != 0) {
      plVar6 = *(long **)(*unaff_x21 + 8);
      if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
        plVar6 = (long *)((ulong)plVar6 & (long)plVar8 - 1U);
      }
      else if (plVar8 <= plVar6) {
        uVar5 = 0;
        if (plVar8 != (long *)0x0) {
          uVar5 = (ulong)plVar6 / (ulong)plVar8;
        }
        plVar6 = (long *)((long)plVar6 - uVar5 * (long)plVar8);
      }
      *(long **)(extraout_x8_00 + (long)plVar6 * 8) = unaff_x21;
    }
  }
  else {
    func_0x00010b22ed94();
  }
  func_0x00010b22ea80();
  uVar4 = 1;
LAB_10b22dfec:
  auVar9._8_8_ = uVar4;
  auVar9._0_8_ = unaff_x21;
  return auVar9;
}



/* Entry: 10b22e01c; end: 10b22e123;  */

void FUN_10b22e01c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 unaff_x20;
  undefined8 *unaff_x21;
  undefined8 unaff_x22;
  
  func_0x00010b22eaf8();
  *unaff_x21 = param_1;
  unaff_x21[1] = unaff_x22;
  unaff_x21[2] = 1;
  *param_1 = 0;
  param_1[1] = unaff_x20;
  param_1[2] = *(undefined8 *)*param_4;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}



/* Entry: 10b22e124; end: 10b22e20f;  */

void FUN_10b22e124(long *param_1,ulong param_2)

{
  long lVar1;
  long extraout_x8;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *extraout_x9;
  ulong uVar5;
  ulong extraout_x10;
  ulong uVar6;
  ulong uVar7;
  ulong extraout_x11;
  
  if (param_2 == 0) {
    FUN_10b22e210(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    FUN_10b22e228(plVar3);
    FUN_10b22e210(param_1,plVar3);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar2 = 0; param_2 != uVar2; uVar2 = uVar2 + 1) {
      *(undefined8 *)(lVar1 + uVar2 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar6 = plVar3[1];
      uVar5 = param_2 - 1;
      uVar2 = 0;
      if (param_2 != 0) {
        uVar2 = uVar6 / param_2;
      }
      uVar7 = uVar6;
      if (param_2 <= uVar6) {
        uVar7 = uVar6 - uVar2 * param_2;
      }
      if ((param_2 & uVar5) == 0) {
        uVar7 = uVar6 & uVar5;
      }
      *(long **)(lVar1 + uVar7 * 8) = param_1 + 2;
      while (plVar4 = plVar3, plVar3 = (long *)*plVar4, plVar3 != (long *)0x0) {
        uVar2 = plVar3[1];
        if ((param_2 & uVar5) == 0) {
          uVar2 = uVar2 & uVar5;
        }
        else if (param_2 <= uVar2) {
          uVar6 = 0;
          if (param_2 != 0) {
            uVar6 = uVar2 / param_2;
          }
          uVar2 = uVar2 - uVar6 * param_2;
        }
        if (uVar2 != uVar7) {
          if (*(long *)(lVar1 + uVar2 * 8) == 0) {
            *(long **)(lVar1 + uVar2 * 8) = plVar4;
            uVar7 = uVar2;
          }
          else {
            *plVar4 = *plVar3;
            func_0x00010b22ecb4();
            lVar1 = extraout_x8;
            plVar3 = extraout_x9;
            uVar5 = extraout_x10;
            uVar7 = extraout_x11;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10b22e210; end: 10b22e227;  */

void FUN_10b22e210(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b22e228; end: 10b22e243;  */

long FUN_10b22e228(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  FUN_10b22e268();
  return param_1;
}



/* Entry: 10b22e244; end: 10b22e267;  */

undefined8 FUN_10b22e244(undefined8 param_1)

{
  FUN_10b22e268(param_1,0);
  return param_1;
}



/* Entry: 10b22e268; end: 10b22e27f;  */

void FUN_10b22e268(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    FUN_10b22dd70(lVar1 + 0x18);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 10b22e280; end: 10b22e2c3;  */

void FUN_10b22e280(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_10b22dd70(param_2 + 0x18);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10b22e2c4; end: 10b22e383;  */

long FUN_10b22e2c4(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar7 = (long *)param_1[1];
  if (plVar7 != (long *)0x0) {
    plVar2 = param_1 + 3;
    if (*plVar2 == 0) {
      return 0;
    }
    FUN_10b22bd90();
    uVar4 = (long)plVar7 - 1;
    if (((ulong)plVar7 & uVar4) == 0) {
      plVar5 = (long *)((ulong)plVar2 & uVar4);
    }
    else {
      plVar5 = plVar2;
      if (plVar7 <= plVar2) {
        uVar1 = 0;
        if (plVar7 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar7;
        }
        plVar5 = (long *)((long)plVar2 - uVar1 * (long)plVar7);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar5 * 8);
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar3 = (long *)*plVar3;
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        plVar6 = (long *)plVar3[1];
        if (plVar2 != plVar6) break;
        if (plVar3[2] == *param_2) {
          return (long)plVar3;
        }
      }
      if (((ulong)plVar7 & uVar4) == 0) {
        plVar6 = (long *)((ulong)plVar6 & uVar4);
      }
      else if (plVar7 <= plVar6) {
        uVar1 = 0;
        if (plVar7 != (long *)0x0) {
          uVar1 = (ulong)plVar6 / (ulong)plVar7;
        }
        plVar6 = (long *)((long)plVar6 - uVar1 * (long)plVar7);
      }
    } while (plVar6 == plVar5);
  }
  return 0;
}



/* Entry: 10b22e384; end: 10b22e3b7;  */

void FUN_10b22e384(void)

{
  func_0x00010b22e39c();
  return;
}



/* Entry: 10b22e3b8; end: 10b22e577;  */

undefined1  [16]
FUN_10b22e3b8(undefined8 param_1,undefined8 param_2,long *param_3,long *param_4,undefined8 param_5)

{
  ulong uVar1;
  undefined1 in_NG;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  long *plVar6;
  long *unaff_x21;
  long *plVar7;
  long *plVar8;
  long *unaff_x25;
  undefined1 auVar9 [16];
  undefined1 auStack_68 [24];
  
  plVar6 = param_3 + 3;
  FUN_10b22bd90();
  plVar8 = (long *)param_3[1];
  if (plVar8 != (long *)0x0) {
    uVar5 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar5) == 0) {
      unaff_x25 = (long *)(uVar5 & (ulong)plVar6);
      in_NG = false;
    }
    else {
      in_NG = (long)plVar6 - (long)plVar8 < 0;
      unaff_x25 = plVar6;
      if (plVar8 <= plVar6) {
        uVar1 = 0;
        if (plVar8 != (long *)0x0) {
          uVar1 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x25 = (long *)((long)plVar6 - uVar1 * (long)plVar8);
      }
    }
    plVar7 = *(long **)(*param_3 + (long)unaff_x25 * 8);
    unaff_x21 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      unaff_x21 = plVar7;
      do {
        while( true ) {
          unaff_x21 = (long *)*unaff_x21;
          if (unaff_x21 == (long *)0x0) goto LAB_10b22e47c;
          plVar7 = (long *)unaff_x21[1];
          if (plVar7 != plVar6) break;
          in_NG = unaff_x21[2] - *param_4 < 0;
          if (unaff_x21[2] == *param_4) {
            uVar4 = 0;
            goto LAB_10b22e560;
          }
        }
        if (((ulong)plVar8 & uVar5) == 0) {
          plVar7 = (long *)((ulong)plVar7 & uVar5);
        }
        else if (plVar8 <= plVar7) {
          uVar1 = 0;
          if (plVar8 != (long *)0x0) {
            uVar1 = (ulong)plVar7 / (ulong)plVar8;
          }
          plVar7 = (long *)((long)plVar7 - uVar1 * (long)plVar8);
        }
        in_NG = (long)plVar7 - (long)unaff_x25 < 0;
      } while (plVar7 == unaff_x25);
    }
  }
LAB_10b22e47c:
  FUN_10b22e578(auStack_68,param_3,plVar6,param_5);
  func_0x00010b22ea98();
  if ((plVar8 == (long *)0x0) || (func_0x00010b22eda8(param_1,param_2,(float)plVar8), (bool)in_NG))
  {
    bVar2 = (long *)0x2 < plVar8;
    bVar3 = plVar8 == (long *)0x3;
    func_0x00010b22e928((long)plVar8 << 1);
    uVar4 = extraout_x8;
    if (!bVar2 || bVar3) {
      uVar4 = extraout_x9;
    }
    func_0x00010b22e05c(param_3,uVar4);
    plVar8 = (long *)param_3[1];
    if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar8 - 1U & (ulong)plVar6);
    }
    else {
      unaff_x25 = plVar6;
      if (plVar8 <= plVar6) {
        uVar5 = 0;
        if (plVar8 != (long *)0x0) {
          uVar5 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x25 = (long *)((long)plVar6 - uVar5 * (long)plVar8);
      }
    }
  }
  if (*(long *)(*param_3 + (long)unaff_x25 * 8) == 0) {
    func_0x00010b22ec9c();
    *(undefined8 *)(extraout_x8_00 + (long)unaff_x25 * 8) = extraout_x9_00;
    if (*unaff_x21 != 0) {
      plVar6 = *(long **)(*unaff_x21 + 8);
      if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
        plVar6 = (long *)((ulong)plVar6 & (long)plVar8 - 1U);
      }
      else if (plVar8 <= plVar6) {
        uVar5 = 0;
        if (plVar8 != (long *)0x0) {
          uVar5 = (ulong)plVar6 / (ulong)plVar8;
        }
        plVar6 = (long *)((long)plVar6 - uVar5 * (long)plVar8);
      }
      *(long **)(extraout_x8_00 + (long)plVar6 * 8) = unaff_x21;
    }
  }
  else {
    func_0x00010b22ed94();
  }
  func_0x00010b22ea80();
  uVar4 = 1;
LAB_10b22e560:
  auVar9._8_8_ = uVar4;
  auVar9._0_8_ = unaff_x21;
  return auVar9;
}



/* Entry: 10b22e578; end: 10b22e5bb;  */

void FUN_10b22e578(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x20;
  undefined8 *unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar2;
  
  func_0x00010b22eaf8();
  *unaff_x21 = param_1;
  unaff_x21[1] = unaff_x22;
  unaff_x21[2] = 1;
  *param_1 = 0;
  param_1[1] = unaff_x20;
  uVar2 = *param_3;
  param_1[3] = param_3[1];
  param_1[2] = uVar2;
  lVar1 = param_3[2];
  param_1[4] = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x000107c351a4();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10b22e5bc; end: 10b22e657;  */

void FUN_10b22e5bc(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  lVar1 = param_2[2];
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x000107c351a4();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10b22e658; end: 10b22e67b;  */

void FUN_10b22e658(long param_1)

{
  func_0x000107c351c8();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b22e67c; end: 10b22e717;  */

long * FUN_10b22e67c(long *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  if ((int)param_1[1] == 1) {
    *(undefined4 *)(param_1 + 1) = 2;
  }
  else {
    lVar1 = *(long *)param_1[4];
    lVar5 = ((long *)param_1[4])[1];
    plVar2 = param_1 + 5;
    lVar4 = lVar1;
    lStack_40 = lVar1;
    lStack_38 = lVar5;
    func_0x00010ae8cab0(plVar2,lVar1,lVar5,*param_1);
    if ((long *)(lVar1 + lVar5) == plVar2) {
      *(undefined4 *)(param_1 + 1) = 1;
    }
    lVar5 = *param_1;
    func_0x000107c2810c(&lStack_40,lVar5,(long)plVar2 - (lVar1 + lVar5));
    param_1[2] = (long)plVar3;
    param_1[3] = lVar5;
    *param_1 = lVar5 + lVar4 + *param_1;
  }
  return param_1;
}



/* Entry: 10b22e718; end: 10b22e733;  */

void FUN_10b22e718(void)

{
  func_0x00010b22ed7c();
  FUN_10b22e734();
  return;
}



/* Entry: 10b22e734; end: 10b22e7d3;  */

void FUN_10b22e734(void)

{
  undefined8 *unaff_x19;
  undefined8 *puStack_30;
  
  func_0x00010b22e900();
  func_0x00010b22e910();
  FUN_10b22b274();
  func_0x00010b22eba4();
  FUN_10b22b29c();
  func_0x00010b22ec68();
  func_0x00010b22e9c0();
  __ZNSt3__15mutex4lockEv(puStack_30 + 8);
  *puStack_30 = *(undefined8 *)*unaff_x19;
  *(undefined1 *)(puStack_30 + 1) = 1;
  func_0x00010b22eb34();
  if (unaff_x19 == (undefined8 *)0x0) {
    func_0x00010b22ecec(puStack_30);
  }
  else {
    func_0x00010b22ec10();
    func_0x00010b22e8d4();
    func_0x00010b22e7f8();
  }
  func_0x00010b22e9f0();
  return;
}



/* Entry: 10b22e7d4; end: 10b22e7f7;  */

void FUN_10b22e7d4(long param_1)

{
  func_0x000107c351c8();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b22e7f8; end: 10b22edb3;  */

void FUN_10b22e7f8(void)

{
  long *unaff_x19;
  
                    /* WARNING: Could not recover jumptable at 0x00010b22e804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x19 + 8))();
  return;
}



/* Entry: 10b22edb4; end: 10b22ee0f;  */

void FUN_10b22edb4(undefined8 param_1)

{
  undefined8 **ppuStack_38;
  ulong uStack_30;
  byte bStack_21;
  
  FUN_10b4d1804(&ppuStack_38);
  if (-1 < (char)bStack_21) {
    uStack_30 = (ulong)bStack_21;
    ppuStack_38 = &ppuStack_38;
  }
  func_0x00010bcd5a00(param_1,ppuStack_38,uStack_30);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_38);
  return;
}



/* Entry: 10b22ee10; end: 10b22f363;  */

void FUN_10b22ee10(long *param_1,long param_2,long *param_3,undefined4 *param_4,long *param_5)

{
  int iVar1;
  code *pcVar2;
  undefined1 *puVar3;
  char *pcVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined1 auStack_1c0 [24];
  undefined1 auStack_1a8 [24];
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [256];
  long lStack_60;
  long lStack_58;
  
  *param_4 = 0;
  if (*(int *)(*param_3 + 0x2c) == 3) {
    ppuVar7 = *(undefined ***)(*param_3 + 0x20);
  }
  else {
    ppuVar7 = &PTR_PTR_113373710;
  }
  iVar1 = *(int *)(param_2 + 0x30);
  if (iVar1 != 0) {
    if (iVar1 == 4) {
      if (((ulong)ppuVar7[2] & 1) != 0) {
        lVar8 = *(long *)(param_2 + 0x28);
        FUN_10b22f364(&lStack_60,ppuVar7[8]);
        ppuVar7 = &PTR_PTR_113373148;
        if (*(undefined ***)(lVar8 + 0x18) != (undefined **)0x0) {
          ppuVar7 = *(undefined ***)(lVar8 + 0x18);
        }
        FUN_10b485cd8(lStack_60,ppuVar7);
        func_0x000105680760(auStack_178);
        puVar3 = auStack_168;
        func_0x000107c28084(puVar3,*(ulong *)(lStack_60 + 0x60) & 0xfffffffffffffffc);
        if (*(int *)(lVar8 + 0x30) == 2) {
          iVar1 = *(int *)(param_2 + 0x20);
          if (iVar1 == 0) {
            FUN_10b22edb4(auStack_190,*param_3);
            __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                      (auStack_1a8,&UNK_10f73ac65,auStack_190);
            if (*param_5 != 0) {
              func_0x00010b2303d4(0x6a);
            }
            *param_4 = 7;
            *param_1 = 0;
            param_1[1] = 0;
            func_0x00010b230340();
            func_0x00010b230324();
            goto LAB_10b22f2dc;
          }
          func_0x00010b2302b4();
          __ZNSt3__19to_stringEi(auStack_190,iVar1);
          func_0x000107c28084(puVar3,auStack_190);
          func_0x00010b230324();
        }
        else if (*(int *)(lVar8 + 0x30) == 3) {
          func_0x00010b2302b4();
          func_0x000107c28084();
        }
        if (*(int *)(lVar8 + 0x34) == 5) {
          func_0x00010b2302b4();
          func_0x000107c28084();
        }
        else if (*(int *)(lVar8 + 0x34) == 4) {
          iVar1 = *(int *)(lVar8 + 0x28);
          if (iVar1 == 0) {
            *param_4 = 8;
            *param_1 = 0;
            param_1[1] = 0;
            goto LAB_10b22f2dc;
          }
          pcVar4 = "WEBP";
          switch(iVar1) {
          case 1:
            break;
          case 2:
            pcVar4 = "PNG";
            break;
          case 3:
            pcVar4 = "JPG";
            break;
          case 4:
            pcVar4 = "GIF";
            break;
          case 5:
            pcVar4 = "ICO";
            break;
          case 6:
            pcVar4 = "SVG";
            break;
          case 7:
            pcVar4 = "HEIF";
            break;
          case 8:
            pcVar4 = "HEIC";
            break;
          case 9:
            pcVar4 = "TIFF";
            break;
          case 10:
            pcVar4 = "BMP";
            break;
          case 0xb:
          case 0xc:
          case 0xd:
          case 0xe:
          case 0xf:
          case 0x10:
          case 0x11:
          case 0x12:
          case 0x13:
          case 0x1e:
          case 0x1f:
          case 0x20:
          case 0x21:
          case 0x22:
          case 0x23:
          case 0x24:
          case 0x25:
          case 0x26:
          case 0x27:
          case 0x2d:
          case 0x2e:
          case 0x2f:
          case 0x30:
          case 0x31:
          case 0x32:
          case 0x33:
          case 0x34:
          case 0x35:
          case 0x36:
          case 0x37:
          case 0x38:
          case 0x39:
          case 0x3a:
          case 0x3b:
          case 0x41:
          case 0x42:
          case 0x43:
          case 0x44:
          case 0x45:
          case 0x46:
          case 0x47:
          case 0x48:
          case 0x49:
          case 0x4a:
          case 0x4b:
          case 0x4c:
          case 0x4d:
          case 0x4e:
          case 0x4f:
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10b22f2f4);
            (*pcVar2)();
          case 0x14:
            pcVar4 = "MP4";
            break;
          case 0x15:
            pcVar4 = "M3U8";
            break;
          case 0x16:
            pcVar4 = "MPD";
            break;
          case 0x17:
            pcVar4 = "TS";
            break;
          case 0x18:
            pcVar4 = "GIFV";
            break;
          case 0x19:
            pcVar4 = "MOV";
            break;
          case 0x1a:
            pcVar4 = "WEBM";
            break;
          case 0x1b:
            pcVar4 = "FLV";
            break;
          case 0x1c:
            pcVar4 = "AVI";
            break;
          case 0x1d:
            pcVar4 = "MKV";
            break;
          case 0x28:
            pcVar4 = "ZIP";
            break;
          case 0x29:
            pcVar4 = "GZ";
            break;
          case 0x2a:
            pcVar4 = "TAR";
            break;
          case 0x2b:
            pcVar4 = "RAR";
            break;
          case 0x2c:
            pcVar4 = "TAR_GZ";
            break;
          case 0x3c:
            pcVar4 = "VTT";
            break;
          case 0x3d:
            pcVar4 = "WEBVTT";
            break;
          case 0x3e:
            pcVar4 = "SRT";
            break;
          case 0x3f:
            pcVar4 = "SUB";
            break;
          case 0x40:
            pcVar4 = "SBV";
            break;
          case 0x50:
            pcVar4 = "MP3";
            break;
          case 0x51:
            pcVar4 = "AAC";
            break;
          case 0x52:
            pcVar4 = "WAV";
            break;
          case 0x53:
            pcVar4 = "M4A";
            break;
          default:
            if (iVar1 == -0x80000000) {
              pcVar4 = "INT_MIN_SENTINEL_DO_NOT_USE";
            }
            else if (iVar1 == 100) {
              pcVar4 = "GLB";
            }
            else if (iVar1 == 0x65) {
              pcVar4 = "KTX";
            }
            else if (iVar1 == 0x66) {
              pcVar4 = "GLSL";
            }
            else {
              pcVar4 = "INT_MAX_SENTINEL_DO_NOT_USE";
            }
          }
          func_0x000107c278b8(auStack_190,pcVar4);
          FUN_10b241078(auStack_190);
          func_0x000107c278b8(auStack_1a8,"_");
          func_0x000107c278b8(auStack_1c0,&DAT_10f62a9de);
          FUN_10b2410c8(auStack_190,auStack_1a8,auStack_1c0);
          func_0x00010b230314();
          func_0x00010b230340();
          func_0x00010b2302b4();
          func_0x000107c28084();
          func_0x00010b230324();
        }
        lVar8 = lStack_60;
        func_0x000105491b64(auStack_190,auStack_160);
        uVar5 = *(ulong *)(lVar8 + 8);
        if ((uVar5 & 1) != 0) {
          uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
        }
        func_0x000107c3024c(lVar8 + 0x60,auStack_190,uVar5);
        func_0x00010b230324();
        param_1[1] = lStack_58;
        *param_1 = lStack_60;
        lStack_60 = 0;
        lStack_58 = 0;
LAB_10b22f2dc:
        func_0x000105673d7c(auStack_178);
        FUN_10b22dd70(&lStack_60);
        return;
      }
      uVar6 = 6;
      goto LAB_10b22ee80;
    }
    if (iVar1 != 0xb) {
      FUN_10b230134(param_1,&stack0xffffffffffffffef,*(undefined8 *)(param_2 + 0x28));
      return;
    }
  }
  uVar6 = 9;
LAB_10b22ee80:
  *param_4 = uVar6;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10b22f364; end: 10b22f387;  */

void FUN_10b22f364(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_10b230134(&uStack_11,param_1);
  return;
}



/* Entry: 10b22f388; end: 10b22f3db;  */

void FUN_10b22f388(void)

{
  func_0x00010b486c2c();
  return;
}



/* Entry: 10b22f3dc; end: 10b22f4d7;  */

void FUN_10b22f3dc(void)

{
  undefined1 in_ZR;
  int iVar1;
  long extraout_x8;
  undefined8 *unaff_x19;
  undefined8 *puVar2;
  long alStack_78 [3];
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  
  func_0x00010b230350();
  if ((bool)in_ZR) {
    iVar1 = (int)*(undefined8 *)(extraout_x8 + 0x20);
  }
  else {
    iVar1 = 0x13373710;
  }
  FUN_10b22f388();
  unaff_x19[1] = 0;
  *unaff_x19 = 0;
  unaff_x19[3] = 0;
  unaff_x19[2] = 0;
  *(undefined4 *)(unaff_x19 + 4) = 0x3f800000;
  if (iVar1 != 0) {
    FUN_10b22f4d8(&puStack_58);
    for (puVar2 = puStack_58; puVar2 != puStack_50; puVar2 = puVar2 + 1) {
      uStack_60 = *puVar2;
      FUN_10b22ee10(alStack_78);
      if (alStack_78[0] != 0) {
        FUN_10b22a8c8();
        FUN_10b22a8fc();
      }
      FUN_10b22dd70(alStack_78);
    }
    FUN_10b22bec4(&puStack_58);
  }
  return;
}



/* Entry: 10b22f4d8; end: 10b22f603;  */

void FUN_10b22f4d8(void)

{
  undefined **ppuVar1;
  int iVar2;
  undefined1 in_ZR;
  long extraout_x8;
  undefined *puVar3;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined **ppuVar4;
  long lVar5;
  undefined1 auStack_80 [24];
  undefined *apuStack_68 [3];
  
  func_0x00010b230350();
  if ((bool)in_ZR) {
    ppuVar4 = *(undefined ***)(extraout_x8 + 0x20);
  }
  else {
    ppuVar4 = &PTR_PTR_113373710;
  }
  iVar2 = *(int *)(ppuVar4 + 0xb);
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  FUN_10b22a850();
  puVar3 = ppuVar4[3];
  ppuVar1 = ppuVar4 + 3;
  if (((ulong)puVar3 & 1) != 0) {
    ppuVar1 = (undefined **)(puVar3 + 7);
  }
  for (lVar5 = (long)*(int *)(ppuVar4 + 4) << 3; lVar5 != 0; lVar5 = lVar5 + -8) {
    puVar3 = *ppuVar1;
    if (*(int *)(puVar3 + 0x20) == 0) {
      FUN_10b22edb4(apuStack_68,*unaff_x21);
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (auStack_80,&UNK_10f73ac65,apuStack_68);
      if (*unaff_x20 != 0) {
        func_0x00010b2303d4(0x6a);
      }
      func_0x00010b230314();
      func_0x00010b230340();
    }
    else if ((iVar2 == 0) || (*(int *)(puVar3 + 0x24) == 10)) {
      apuStack_68[0] = puVar3;
      func_0x00010b22f9e4();
    }
    ppuVar1 = ppuVar1 + 1;
  }
  return;
}



/* Entry: 10b22f604; end: 10b22f963;  */

void FUN_10b22f604(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4,long *param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int extraout_w10;
  int extraout_w10_00;
  long lVar5;
  undefined1 auStack_180 [24];
  long lStack_168;
  long lStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined1 uStack_148;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [16];
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long alStack_60 [2];
  
  uVar1 = *(ulong *)(param_2 + 8);
  if (-1 < (char)*(byte *)(param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_2 + 0x17);
  }
  if (uVar1 == 0) {
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    func_0x00010b2303c8();
  }
  else {
    if (*param_4 != 0) {
      lVar4 = param_2;
      __ZNSt3__16chrono12steady_clock3nowEv();
      lVar5 = *param_4;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_128,param_2);
      FUN_10b2208bc(auStack_110,lVar5,auStack_128);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_180,param_3);
      lStack_160 = param_5[1];
      lStack_168 = *param_5;
      if (param_5[1] != 0) {
        do {
          func_0x00010b2302c4();
        } while (extraout_w10 != 0);
      }
      uStack_158 = 0;
      uStack_148 = 1;
      lStack_150 = lVar4;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_140,param_2);
      alStack_60[0] = 0;
      alStack_60[1] = 0;
      uStack_70 = 0;
      uStack_68 = 0;
      FUN_10b2220d8(&uStack_e0,auStack_110,&uStack_70);
      FUN_10b222100(alStack_60,&uStack_e0);
      FUN_10b222164(&uStack_e0);
      FUN_10b222164(&uStack_70);
      puVar2 = (undefined8 *)0x28;
      __Znwm();
      puVar2[4] = 0;
      puVar2[1] = 0;
      *puVar2 = 0;
      puVar2[3] = 0;
      puVar2[2] = 0;
      func_0x00010b22fd40();
      *puVar2 = &PTR_FUN_110cc9828;
      FUN_10b22fad0(&uStack_80,puVar2[3],puVar2[4]);
      FUN_10b22fb0c(&uStack_e0,auStack_180);
      lStack_f0 = 0;
      lStack_e8 = 0;
      lStack_100 = alStack_60[0] + 0x48;
      lStack_f8 = CONCAT71(lStack_f8._1_7_,1);
      puStack_88 = puVar2;
      __ZNSt3__15mutex4lockEv();
      lVar4 = alStack_60[0];
      FUN_10b222190();
      if ((int)lVar4 == 0) {
        puVar3 = (undefined8 *)0x68;
        __Znwm();
        *puVar3 = &PTR_FUN_110cc98e0;
        FUN_10b22fb0c(puVar3 + 1,&uStack_e0);
        puVar2 = puStack_88;
        puStack_88 = (undefined8 *)0x0;
        puVar3[0xc] = puVar2;
        lVar4 = *(long *)(alStack_60[0] + 0x90);
        *(undefined8 **)(alStack_60[0] + 0x90) = puVar3;
        if (lVar4 != 0) {
          func_0x00010b2302f8();
        }
      }
      else {
        FUN_10b222100(&lStack_f0,alStack_60);
      }
      func_0x000107c2798c(&lStack_100);
      if (lStack_f0 != 0) {
        lStack_100 = lStack_f0;
        lStack_f8 = lStack_e8;
        if (lStack_e8 != 0) {
          do {
            func_0x00010b2302c4();
          } while (extraout_w10_00 != 0);
        }
        FUN_10b22fb90(&uStack_e0);
        FUN_10b222164(&lStack_100);
      }
      param_1[1] = uStack_78;
      *param_1 = uStack_80;
      uStack_80 = 0;
      uStack_78 = 0;
      FUN_10b222164(&lStack_f0);
      func_0x00010b22fd10(&uStack_e0);
      func_0x00010b22ca84(&uStack_80);
      FUN_10b222164(alStack_60);
      FUN_10b22f9b4(auStack_180);
      FUN_10b222164(auStack_110);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_128);
      return;
    }
    if (*param_5 != 0) {
      func_0x00010b2303d4(0x74);
    }
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    func_0x00010b2303c8();
  }
  func_0x000107c27a18(&uStack_e0);
  return;
}



/* Entry: 10b22f964; end: 10b22f9b3;  */

void FUN_10b22f964(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  
  func_0x00010b2303f0();
  func_0x00010b22fd40();
  FUN_10b230048(auStack_48,param_2);
  FUN_10b22fad0();
  FUN_10b22fe6c(auStack_48);
  return;
}



/* Entry: 10b22f9b4; end: 10b22fa27;  */

void FUN_10b22f9b4(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x40);
  func_0x00010b227f1c(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 10b22fa28; end: 10b22facf;  */

long FUN_10b22fa28(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar2 = param_1;
  FUN_10b22b1fc(param_1,(param_1[1] - *param_1 >> 3) + 1);
  lVar3 = *param_1;
  lVar1 = param_1[1];
  plStack_58 = param_1 + 2;
  plStack_38 = plStack_58;
  if (plVar2 == (long *)0x0) {
    plStack_58 = (long *)0x0;
  }
  else {
    FUN_10b22b0b0();
  }
  puStack_50 = (undefined8 *)((long)plStack_58 + (lVar1 - lVar3));
  plStack_40 = plStack_58 + (long)plVar2;
  puStack_48 = puStack_50 + 1;
  *puStack_50 = *param_2;
  FUN_10b22b038(param_1,&plStack_58);
  lVar3 = param_1[1];
  FUN_10b22b0f0(&plStack_58);
  return lVar3;
}



/* Entry: 10b22fad0; end: 10b22fb0b;  */

void FUN_10b22fad0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  int extraout_w10_00;
  
  if (param_3 != 0) {
    do {
      func_0x00010b2302c4();
    } while (extraout_w10 != 0);
    do {
      func_0x00010b2302c4();
    } while (extraout_w10_00 != 0);
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  func_0x00010b23031c();
  return;
}



/* Entry: 10b22fb0c; end: 10b22fb8f;  */

long FUN_10b22fb0c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  lVar2 = *(long *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(lVar1 + 0x18) = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010b2302c4();
    } while (extraout_w10 != 0);
  }
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0x40,param_2 + 0x40);
  return param_1;
}



/* Entry: 10b22fb90; end: 10b22fd0f;  */

void FUN_10b22fb90(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_44;
  long alStack_40 [2];
  
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uStack_80 = param_2;
  lStack_78 = param_3;
  if (param_3 != 0) {
    do {
      func_0x00010b2302c4();
    } while (extraout_w10 != 0);
    do {
      func_0x00010b2302c4();
    } while (extraout_w10_00 != 0);
  }
  uStack_70 = param_2;
  lStack_68 = param_3;
  func_0x0001053a4504(param_1 + 0x28);
  FUN_10b220ee8(alStack_40,&uStack_70);
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  func_0x000107c27e9c(&uStack_60,(long)*(int *)(alStack_40[0] + 0x10));
  puVar1 = *(undefined8 **)(alStack_40[0] + 0x18);
  for (lVar3 = (long)*(int *)(alStack_40[0] + 0x10) << 3; lVar3 != 0; lVar3 = lVar3 + -8) {
    uStack_44 = (undefined4)*puVar1;
    func_0x000107c27eac(&uStack_60,&uStack_44);
    puVar1 = puVar1 + 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    param_1 = param_1 + 0x28;
    func_0x000107c28148(param_1);
    FUN_10b23ee68(0x1f,param_1,0);
  }
  FUN_10b223518(alStack_40);
  FUN_10b230048(uVar2,&uStack_60);
  func_0x000107c27a18(&uStack_60);
  FUN_10b222164(&uStack_70);
  FUN_10b222164(&uStack_80);
  return;
}



/* Entry: 10b22fd10; end: 10b22fdc7;  */

void FUN_10b22fd10(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (lVar1 != 0) {
    func_0x00010b2302f8();
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x40);
  func_0x00010b227f1c(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 10b22fdc8; end: 10b22fdcb;  */

void FUN_10b22fdc8(long param_1)

{
  long unaff_x19;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined1 auStack_28 [8];
  
  func_0x00010b2303dc();
  if (*(long *)(param_1 + 8) != 0) {
    ppuStack_38 = &PTR_DAT_1107e6938;
    ppuStack_30 = &PTR_DAT_1107e6938;
    func_0x000104bdfe3c(auStack_28,&ppuStack_30);
    FUN_10b22ff0c();
    __ZNSt13exception_ptrD1Ev(auStack_28);
    __ZNSt9exceptionD2Ev(&ppuStack_30);
    __ZNSt9exceptionD2Ev(&ppuStack_38);
  }
  func_0x00010b22ca84(unaff_x19 + 0x18);
  func_0x00010b22ca84((long *)(param_1 + 8));
  return;
}



/* Entry: 10b22fdcc; end: 10b22fddf;  */

void FUN_10b22fdcc(void)

{
  FUN_10b22fe6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b22fde0; end: 10b22fde3;  */

void FUN_10b22fde0(long param_1)

{
  long unaff_x19;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined1 auStack_28 [8];
  
  func_0x00010b2303dc();
  if (*(long *)(param_1 + 8) != 0) {
    ppuStack_38 = &PTR_DAT_1107e6938;
    ppuStack_30 = &PTR_DAT_1107e6938;
    func_0x000104bdfe3c(auStack_28,&ppuStack_30);
    FUN_10b22ff0c();
    __ZNSt13exception_ptrD1Ev(auStack_28);
    __ZNSt9exceptionD2Ev(&ppuStack_30);
    __ZNSt9exceptionD2Ev(&ppuStack_38);
  }
  func_0x00010b22ca84(unaff_x19 + 0x18);
  func_0x00010b22ca84((long *)(param_1 + 8));
  return;
}



/* Entry: 10b22fde4; end: 10b22fdf7;  */

void FUN_10b22fde4(void)

{
  FUN_10b22fe6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b22fdf8; end: 10b22fdfb;  */

void FUN_10b22fdf8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc9890;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b22fdfc; end: 10b22fe0f;  */

void FUN_10b22fdfc(void)

{
  FUN_10b22fe58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b22fe10; end: 10b22fe57;  */

void FUN_10b22fe10(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  if (lVar1 != 0) {
    func_0x00010b2302f8();
  }
  __ZNSt13exception_ptrD1Ev(param_1 + 0xa8);
  __ZNSt3__15mutexD1Ev(param_1 + 0x68);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x38);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    func_0x0001002920a0();
  }
  return;
}



/* Entry: 10b22fe58; end: 10b22fe6b;  */

void FUN_10b22fe58(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b22fe6c; end: 10b22ff0b;  */

void FUN_10b22fe6c(long param_1)

{
  long unaff_x19;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined1 auStack_28 [8];
  
  func_0x00010b2303dc();
  if (*(long *)(param_1 + 8) != 0) {
    ppuStack_38 = &PTR_DAT_1107e6938;
    ppuStack_30 = &PTR_DAT_1107e6938;
    func_0x000104bdfe3c(auStack_28,&ppuStack_30);
    FUN_10b22ff0c();
    __ZNSt13exception_ptrD1Ev(auStack_28);
    __ZNSt9exceptionD2Ev(&ppuStack_30);
    __ZNSt9exceptionD2Ev(&ppuStack_38);
  }
  func_0x00010b22ca84(unaff_x19 + 0x18);
  func_0x00010b22ca84((long *)(param_1 + 8));
  return;
}



/* Entry: 10b22ff0c; end: 10b22ffa7;  */

void FUN_10b22ff0c(undefined8 param_1,long *param_2)

{
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  lStack_30 = 0;
  uStack_28 = 0;
  func_0x00010b23036c();
  func_0x00010b230398();
  func_0x00010b22ca84(auStack_40);
  func_0x00010b23031c();
  __ZNSt3__15mutex4lockEv(lStack_30 + 0x50);
  __ZNSt13exception_ptraSERKS_(lStack_30 + 0x90,param_2);
  func_0x00010b23032c();
  if (param_2 == (long *)0x0) {
    func_0x00010b2303a4();
  }
  else {
    func_0x00010b23038c(*(undefined8 *)(*param_2 + 0x10));
    func_0x00010b2302d4();
  }
  func_0x00010b230348();
  return;
}



/* Entry: 10b22ffa8; end: 10b22ffd3;  */

undefined8 * FUN_10b22ffa8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc98e0;
  FUN_10b22fd10(param_1 + 1);
  return param_1;
}



/* Entry: 10b22ffd4; end: 10b22ffe7;  */

void FUN_10b22ffd4(void)

{
  FUN_10b22ffa8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b22ffe8; end: 10b230047;  */

void FUN_10b22ffe8(long param_1,undefined8 *param_2)

{
  int extraout_w10;
  undefined8 uStack_30;
  long lStack_28;
  
  uStack_30 = *param_2;
  lStack_28 = param_2[1];
  if (lStack_28 != 0) {
    do {
      func_0x00010b2302c4();
    } while (extraout_w10 != 0);
  }
  FUN_10b22fb90(param_1 + 8);
  FUN_10b222164(&uStack_30);
  return;
}



/* Entry: 10b230048; end: 10b2300ff;  */

void FUN_10b230048(undefined8 param_1,long *param_2)

{
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  lStack_30 = 0;
  uStack_28 = 0;
  func_0x00010b23036c();
  func_0x00010b230398();
  func_0x00010b22ca84(auStack_40);
  func_0x00010b23031c();
  __ZNSt3__15mutex4lockEv(lStack_30 + 0x50);
  FUN_10b230100(lStack_30,param_2);
  func_0x00010b23032c();
  if (param_2 == (long *)0x0) {
    func_0x00010b2303a4();
  }
  else {
    func_0x00010b23038c(*(undefined8 *)(*param_2 + 0x10));
    func_0x00010b2302d4();
  }
  func_0x00010b230348();
  return;
}



/* Entry: 10b230100; end: 10b230133;  */

long FUN_10b230100(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x00010869e720();
  }
  else {
    func_0x0001052b4f48();
  }
  return param_1;
}



/* Entry: 10b230134; end: 10b2301c7;  */

undefined1 * FUN_10b230134(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_40 [16];
  long lStack_30;
  long lStack_28;
  
  puVar2 = auStack_40;
  puVar3 = auStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10b2301c8(auStack_40,1);
  FUN_10b23021c(lStack_30);
  lVar1 = lStack_30;
  lStack_30 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x00010b2302a4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010b2302a4();
  func_0x00010b2302e4();
  *(undefined8 *)(puVar3 + 8) = param_3;
  puVar2 = puVar3;
  FUN_10b2301f0();
  *(undefined1 **)(puVar3 + 0x10) = puVar2;
  return puVar3;
}



/* Entry: 10b2301c8; end: 10b2301ef;  */

long FUN_10b2301c8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10b2301f0();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10b2301f0; end: 10b23021b;  */

undefined8 * FUN_10b2301f0(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x155555555555556) {
    puVar1 = (undefined8 *)(param_2 * 0xc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110cc9930;
  param_1[1] = 0;
  func_0x00010b230284(param_1 + 3);
  return param_1;
}



/* Entry: 10b23021c; end: 10b23025f;  */

undefined8 * FUN_10b23021c(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110cc9930;
  param_1[1] = 0;
  func_0x00010b230284(param_1 + 3);
  return param_1;
}



/* Entry: 10b230260; end: 10b230263;  */

void FUN_10b230260(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc9930;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b230264; end: 10b230277;  */

void FUN_10b230264(void)

{
  func_0x00010b230290();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b230278; end: 10b2303fb;  */

long FUN_10b230278(long param_1)

{
  func_0x00010b4861b4();
  FUN_10b4855e4(param_1 + 0x18);
  return param_1 + 0x18;
}



/* Entry: 10b2303fc; end: 10b2304a3;  */

void FUN_10b2303fc(undefined8 param_1,undefined1 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *unaff_x19;
  long alStack_f0 [3];
  long alStack_d8 [6];
  undefined8 uStack_a8;
  undefined8 uStack_68;
  undefined1 uStack_59;
  code *pcStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_28;
  
  uStack_59 = param_2;
  func_0x000107c351dc();
  pcStack_58 = FUN_10b23a350;
  ppuStack_50 = &PTR_FUN_110cca068;
  puStack_40 = &uStack_59;
  puStack_38 = &uStack_68;
  uStack_68 = param_3;
  uStack_48 = param_1;
  uStack_28 = extraout_x8;
  FUN_10b2304a4(&pcStack_58);
  (*(code *)*ppuStack_50)(&ppuStack_50);
  FUN_10b23051c(&uStack_68,*unaff_x19);
  func_0x000107c351d4(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b23b190();
  func_0x000107c2be8c();
  func_0x00010b23acec();
  plVar1 = alStack_f0;
  func_0x000107c351dc();
  uStack_a8 = extraout_x8_00;
  func_0x00010b23af18();
  func_0x000107c278b8(alStack_f0);
  func_0x00010b23aed0();
  plVar2 = alStack_d8;
  FUN_10b239d8c();
  func_0x00010b23aca4();
  func_0x00010b23ad44();
  func_0x000107c351d4(uStack_a8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b23aca4();
  func_0x00010b23ad44();
  func_0x00010b23acc0();
  if (*(char *)(*plVar1 + 0x30) == '\x01') {
    (**(code **)(*plVar2 + 0x80))(plVar2);
    (**(code **)(*plVar2 + 0x90))(plVar2,*plVar1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010b230584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x88))(plVar2,*plVar1 + 0x10);
    return;
  }
  return;
}



/* Entry: 10b2304a4; end: 10b23051b;  */

void FUN_10b2304a4(void)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  undefined8 extraout_x8;
  long alStack_80 [3];
  long alStack_68 [6];
  undefined8 uStack_38;
  
  plVar1 = alStack_80;
  func_0x000107c351dc();
  uStack_38 = extraout_x8;
  func_0x00010b23af18();
  func_0x000107c278b8(alStack_80);
  func_0x00010b23aed0();
  plVar2 = alStack_68;
  FUN_10b239d8c();
  func_0x00010b23aca4();
  func_0x00010b23ad44();
  func_0x000107c351d4(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b23aca4();
  func_0x00010b23ad44();
  func_0x00010b23acc0();
  if (*(char *)(*plVar1 + 0x30) == '\x01') {
    (**(code **)(*plVar2 + 0x80))(plVar2);
    (**(code **)(*plVar2 + 0x90))(plVar2,*plVar1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010b230584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x88))(plVar2,*plVar1 + 0x10);
    return;
  }
  return;
}


