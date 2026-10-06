/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b907c0c; end: 10b907c33;  */

long FUN_10b907c0c(long param_1)

{
  func_0x00010b90f6a0(param_1 + 0x18);
  func_0x00010b910460();
  return param_1;
}



/* Entry: 10b907c34; end: 10b907c9f;  */

void FUN_10b907c34(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    lVar2 = 0;
    for (lVar3 = 0; lVar3 != lVar1; lVar3 = lVar3 + 1) {
      if (-1 < *(char *)(*param_1 + lVar3)) {
        FUN_10b907ca0(param_1[1] + lVar2);
        lVar1 = param_1[3];
      }
      lVar2 = lVar2 + 0x30;
    }
    __ZdlPv();
    func_0x00010b91016c();
  }
  return;
}



/* Entry: 10b907ca0; end: 10b907cef;  */

long FUN_10b907ca0(long param_1)

{
  func_0x00010b907cc8(param_1 + 0x18);
  func_0x00010b910460();
  return param_1;
}



/* Entry: 10b907cf0; end: 10b907e07;  */

undefined8 * FUN_10b907cf0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  int extraout_w11;
  long *unaff_x19;
  long *unaff_x20;
  long *plVar8;
  long *plVar9;
  long lVar10;
  
  plVar9 = (long *)*param_1;
  plVar8 = (long *)param_1[1];
  lVar10 = (long)plVar8 - (long)plVar9 >> 3;
  if (lVar10 + 1U >> 0x3d != 0) {
    func_0x00010bdb3f78();
LAB_10b907e04:
    func_0x000104bfe188();
    func_0x00010b907e30();
    if (param_1[2] != 0) {
      FUN_10b907e90(param_1,param_1);
    }
    return param_1;
  }
  func_0x00010b910148();
  uVar7 = param_1[2] - (long)plVar9 >> 2;
  if (uVar7 <= extraout_x8) {
    uVar7 = extraout_x8;
  }
  if (0x7ffffffffffffff7 < (ulong)(param_1[2] - (long)plVar9)) {
    uVar7 = 0x1fffffffffffffff;
  }
  if (uVar7 == 0) {
    lVar2 = 0;
  }
  else {
    if (uVar7 >> 0x3d != 0) goto LAB_10b907e04;
    lVar2 = uVar7 << 3;
    __Znwm();
  }
  puVar1 = (undefined8 *)(lVar2 + ((long)plVar8 - (long)plVar9));
  uVar4 = 0;
  if (*unaff_x20 != 0) {
    do {
      func_0x00010b90fce8();
    } while (extraout_w11 != 0);
    plVar9 = (long *)*unaff_x19;
    plVar8 = (long *)unaff_x19[1];
    lVar10 = (long)plVar8 - (long)plVar9 >> 3;
    uVar4 = extraout_x8_00;
  }
  *puVar1 = uVar4;
  plVar5 = puVar1 + -lVar10;
  for (plVar6 = plVar9; plVar6 != plVar8; plVar6 = plVar6 + 1) {
    *plVar5 = *plVar6;
    *plVar6 = 0;
    plVar5 = plVar5 + 1;
  }
  for (; plVar9 != plVar8; plVar9 = plVar9 + 1) {
    if (*plVar9 != 0) {
      func_0x00010b90fe14();
    }
  }
  lVar3 = *unaff_x19;
  *unaff_x19 = (long)(puVar1 + -lVar10);
  unaff_x19[1] = (long)(puVar1 + 1);
  unaff_x19[2] = lVar2 + uVar7 * 8;
  if (lVar3 != 0) {
    __ZdlPv();
  }
  return puVar1 + 1;
}



/* Entry: 10b907e08; end: 10b907e8f;  */

undefined8 * FUN_10b907e08(undefined8 *param_1)

{
  func_0x00010b907e30(param_1,*param_1,param_1[1]);
  if (param_1[2] != 0) {
    FUN_10b907e90(param_1,param_1);
  }
  return param_1;
}



/* Entry: 10b907e90; end: 10b907eab;  */

void FUN_10b907e90(long param_1,long *param_2)

{
  if (param_1 + 0x18 != *param_2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b907eac; end: 10b907ecb;  */

void FUN_10b907eac(void)

{
  func_0x00010b9105f0();
  FUN_10b907ecc();
  return;
}



/* Entry: 10b907ecc; end: 10b907ef3;  */

void FUN_10b907ecc(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined8 *extraout_x8;
  undefined8 extraout_x9;
  
  if (param_1 != (long *)0x0) {
    do {
      func_0x000107c39f2c();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_x9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010b90fd54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10b907ef4; end: 10b907f13;  */

void FUN_10b907ef4(void)

{
  func_0x00010b9105f0();
  FUN_10b907f14();
  return;
}



/* Entry: 10b907f14; end: 10b907f3b;  */

void FUN_10b907f14(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined8 *extraout_x8;
  undefined8 extraout_x9;
  
  if (param_1 != (long *)0x0) {
    do {
      func_0x000107c39f2c();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_x9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010b90fd54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10b907f3c; end: 10b908073;  */

undefined8 *
FUN_10b907f3c(undefined8 *param_1,undefined8 *param_2,long *param_3,long *param_4,undefined8 param_5
             )

{
  undefined8 extraout_x8;
  undefined8 uVar1;
  long lVar2;
  long extraout_x8_00;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 in_stack_00000000;
  
  func_0x00010b910964();
  *param_1 = *param_2;
  uVar1 = 0;
  if (*param_3 != 0) {
    do {
      func_0x00010b90fce8();
      uVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  param_1[1] = uVar1;
  param_1[2] = &UNK_10dd5b8b0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  param_1[7] = 0;
  param_1[8] = &UNK_10dd5b8b0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[9] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  lVar2 = *param_4;
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x10) != 0)) {
    do {
      func_0x00010b9101e8();
      lVar2 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  param_1[0x17] = lVar2;
  func_0x000107c31084();
  func_0x000107c2793c(&UNK_10f7ccd58);
  func_0x00010b910288(&stack0x00000008);
  func_0x00010b9106e4(param_1 + 0x18);
  func_0x000107c31080();
  func_0x00010b910098();
  func_0x000107c31084();
  func_0x000107c31074(param_5);
  func_0x000107c2793c(&UNK_10f7ccd66);
  func_0x00010b910288(&stack0x00000008);
  func_0x00010b9106e4(param_1 + 0x19);
  func_0x000107c31080();
  func_0x00010b910098();
  func_0x000107c278f8(in_stack_00000000);
  param_1[0x1a] = 0;
  return param_1;
}



/* Entry: 10b908074; end: 10b9080df;  */

void FUN_10b908074(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 in_ZR;
  undefined1 auStack_48 [24];
  
  FUN_10b9080e0(auStack_48);
  func_0x00010b9104d8();
  if (((bool)in_ZR) && (*(long *)(param_1 + 0xb0) != 0)) {
    func_0x00010b9099e4(param_1,param_4);
    if ((*(byte *)(param_4 + 8) & 1) == 0) {
      func_0x00010b910930();
      goto LAB_10b9080c8;
    }
  }
  func_0x00010b9104f0();
  FUN_10b90f050();
LAB_10b9080c8:
  func_0x00010b907cc8(auStack_48);
  return;
}



/* Entry: 10b9080e0; end: 10b90a1df;  */

/* WARNING: Possible PIC construction at 0x00010b909adc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b90a064: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b909c2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b908b2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b9092b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b908b30) */
/* WARNING: Removing unreachable block (ram,0x00010b908b40) */
/* WARNING: Removing unreachable block (ram,0x00010b908b48) */
/* WARNING: Removing unreachable block (ram,0x00010b908b4c) */
/* WARNING: Removing unreachable block (ram,0x00010b909274) */
/* WARNING: Removing unreachable block (ram,0x00010b909284) */
/* WARNING: Removing unreachable block (ram,0x00010b908b50) */
/* WARNING: Removing unreachable block (ram,0x00010b908b54) */
/* WARNING: Removing unreachable block (ram,0x00010b909134) */
/* WARNING: Removing unreachable block (ram,0x00010b90916c) */
/* WARNING: Removing unreachable block (ram,0x00010b908b6c) */
/* WARNING: Removing unreachable block (ram,0x00010b909180) */
/* WARNING: Removing unreachable block (ram,0x00010b909c30) */
/* WARNING: Removing unreachable block (ram,0x00010b909ae0) */
/* WARNING: Removing unreachable block (ram,0x00010b909c44) */
/* WARNING: Removing unreachable block (ram,0x00010b909ae8) */
/* WARNING: Removing unreachable block (ram,0x00010b909b18) */
/* WARNING: Removing unreachable block (ram,0x00010b909b08) */
/* WARNING: Removing unreachable block (ram,0x00010b909b1c) */
/* WARNING: Removing unreachable block (ram,0x00010b909b38) */
/* WARNING: Removing unreachable block (ram,0x00010b90a068) */
/* WARNING: Removing unreachable block (ram,0x00010b90a070) */
/* WARNING: Removing unreachable block (ram,0x00010b90a078) */
/* WARNING: Removing unreachable block (ram,0x00010b90a07c) */
/* WARNING: Removing unreachable block (ram,0x00010b90a084) */
/* WARNING: Removing unreachable block (ram,0x00010b90a088) */
/* WARNING: Removing unreachable block (ram,0x00010b90a090) */
/* WARNING: Removing unreachable block (ram,0x00010b90a098) */
/* WARNING: Removing unreachable block (ram,0x00010b90a0b8) */
/* WARNING: Removing unreachable block (ram,0x00010b90a0c0) */
/* WARNING: Removing unreachable block (ram,0x00010b90a0c8) */
/* WARNING: Removing unreachable block (ram,0x00010b90fe20) */
/* WARNING: Removing unreachable block (ram,0x00010b9092b8) */
/* WARNING: Removing unreachable block (ram,0x00010b909310) */
/* WARNING: Removing unreachable block (ram,0x00010b909314) */
/* WARNING: Removing unreachable block (ram,0x00010b90931c) */
/* WARNING: Removing unreachable block (ram,0x00010b909320) */
/* WARNING: Removing unreachable block (ram,0x00010b909960) */
/* WARNING: Removing unreachable block (ram,0x00010b90933c) */
/* WARNING: Removing unreachable block (ram,0x00010b909968) */
/* WARNING: Removing unreachable block (ram,0x00010b909348) */
/* WARNING: Removing unreachable block (ram,0x00010b909980) */
/* WARNING: Removing unreachable block (ram,0x00010b909994) */
/* WARNING: Removing unreachable block (ram,0x00010b90999c) */
/* WARNING: Removing unreachable block (ram,0x00010b9099b4) */
/* WARNING: Removing unreachable block (ram,0x00010b9099bc) */
/* WARNING: Removing unreachable block (ram,0x00010b9099c4) */
/* WARNING: Removing unreachable block (ram,0x00010b9099c8) */
/* WARNING: Removing unreachable block (ram,0x00010b9099cc) */
/* WARNING: Removing unreachable block (ram,0x00010b90918c) */
/* WARNING: Removing unreachable block (ram,0x00010b9091a4) */
/* WARNING: Removing unreachable block (ram,0x00010b9091b0) */
/* WARNING: Removing unreachable block (ram,0x00010b9091bc) */
/* WARNING: Removing unreachable block (ram,0x00010b9091c0) */
/* WARNING: Removing unreachable block (ram,0x00010b9091c8) */
/* WARNING: Removing unreachable block (ram,0x00010b9091cc) */
/* WARNING: Removing unreachable block (ram,0x00010b9091d8) */
/* WARNING: Removing unreachable block (ram,0x00010b909354) */
/* WARNING: Removing unreachable block (ram,0x00010b9091e4) */
/* WARNING: Removing unreachable block (ram,0x00010b9091ec) */
/* WARNING: Removing unreachable block (ram,0x00010b9091f4) */
/* WARNING: Removing unreachable block (ram,0x00010b9091f8) */
/* WARNING: Removing unreachable block (ram,0x00010b909200) */
/* WARNING: Removing unreachable block (ram,0x00010b909358) */
/* WARNING: Removing unreachable block (ram,0x00010b909398) */
/* WARNING: Removing unreachable block (ram,0x00010b9093a0) */
/* WARNING: Removing unreachable block (ram,0x00010b9093a4) */
/* WARNING: Removing unreachable block (ram,0x00010b9093ac) */
/* WARNING: Removing unreachable block (ram,0x00010b9093b8) */
/* WARNING: Removing unreachable block (ram,0x00010b9093bc) */
/* WARNING: Removing unreachable block (ram,0x00010b9093c4) */
/* WARNING: Removing unreachable block (ram,0x00010b9093d0) */
/* WARNING: Removing unreachable block (ram,0x00010b9093d4) */
/* WARNING: Removing unreachable block (ram,0x00010b9093dc) */
/* WARNING: Removing unreachable block (ram,0x00010b9093ec) */
/* WARNING: Removing unreachable block (ram,0x00010b9093fc) */
/* WARNING: Removing unreachable block (ram,0x00010b90940c) */
/* WARNING: Removing unreachable block (ram,0x00010b9094ec) */
/* WARNING: Removing unreachable block (ram,0x00010b9094f4) */
/* WARNING: Removing unreachable block (ram,0x00010b9094fc) */
/* WARNING: Removing unreachable block (ram,0x00010b909530) */
/* WARNING: Removing unreachable block (ram,0x00010b909534) */
/* WARNING: Removing unreachable block (ram,0x00010b909620) */
/* WARNING: Removing unreachable block (ram,0x00010b909650) */
/* WARNING: Removing unreachable block (ram,0x00010b909654) */
/* WARNING: Removing unreachable block (ram,0x00010b90965c) */
/* WARNING: Removing unreachable block (ram,0x00010b90966c) */
/* WARNING: Removing unreachable block (ram,0x00010b909674) */
/* WARNING: Removing unreachable block (ram,0x00010b909678) */
/* WARNING: Removing unreachable block (ram,0x00010b909680) */
/* WARNING: Removing unreachable block (ram,0x00010b909684) */
/* WARNING: Removing unreachable block (ram,0x00010b909538) */
/* WARNING: Removing unreachable block (ram,0x00010b909694) */
/* WARNING: Removing unreachable block (ram,0x00010b90941c) */
/* WARNING: Removing unreachable block (ram,0x00010b90959c) */
/* WARNING: Removing unreachable block (ram,0x00010b9095d8) */
/* WARNING: Removing unreachable block (ram,0x00010b909434) */
/* WARNING: Removing unreachable block (ram,0x00010b90947c) */
/* WARNING: Removing unreachable block (ram,0x00010b9094b4) */
/* WARNING: Removing unreachable block (ram,0x00010b9094b8) */
/* WARNING: Removing unreachable block (ram,0x00010b90944c) */
/* WARNING: Removing unreachable block (ram,0x00010b909454) */
/* WARNING: Removing unreachable block (ram,0x00010b909458) */
/* WARNING: Removing unreachable block (ram,0x00010b909460) */
/* WARNING: Removing unreachable block (ram,0x00010b9094d0) */
/* WARNING: Removing unreachable block (ram,0x00010b9095fc) */
/* WARNING: Removing unreachable block (ram,0x00010b9096ac) */
/* WARNING: Removing unreachable block (ram,0x00010b9096b4) */
/* WARNING: Removing unreachable block (ram,0x00010b9096bc) */
/* WARNING: Removing unreachable block (ram,0x00010b9096c0) */
/* WARNING: Removing unreachable block (ram,0x00010b9096c4) */
/* WARNING: Removing unreachable block (ram,0x00010b9094e4) */
/* WARNING: Type propagation algorithm not settling */

long *******
FUN_10b9080e0(long *******param_1,long *******param_2,long *******param_3,long ******param_4)

{
  long *******ppppppplVar1;
  bool bVar2;
  long *******ppppppplVar3;
  char cVar4;
  char cVar5;
  undefined1 uVar6;
  long *******ppppppplVar7;
  long *******ppppppplVar8;
  char *pcVar9;
  char *pcVar10;
  long *******ppppppplVar11;
  long *****ppppplVar12;
  long *******ppppppplVar13;
  uint uVar14;
  undefined8 extraout_x8;
  long ******extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 *extraout_x8_04;
  undefined8 *extraout_x8_05;
  undefined8 *extraout_x8_06;
  undefined8 *extraout_x8_07;
  undefined8 *extraout_x8_08;
  undefined8 *extraout_x8_09;
  undefined8 *extraout_x8_10;
  undefined8 *extraout_x8_11;
  undefined8 *extraout_x8_12;
  undefined8 *extraout_x8_13;
  undefined8 *extraout_x8_14;
  long ******extraout_x8_15;
  undefined8 *extraout_x8_16;
  undefined8 *extraout_x8_17;
  undefined8 *extraout_x8_18;
  undefined8 *extraout_x8_19;
  undefined8 *extraout_x8_20;
  undefined8 *extraout_x8_21;
  long *******extraout_x8_22;
  long ******extraout_x8_23;
  long *******extraout_x8_24;
  long *******extraout_x8_25;
  long ******extraout_x8_26;
  long ******extraout_x8_27;
  undefined *extraout_x8_28;
  undefined *puVar15;
  undefined8 extraout_x8_29;
  long extraout_x8_30;
  long extraout_x8_31;
  ulong extraout_x8_32;
  long ******pppppplVar16;
  int extraout_w9;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  long ******extraout_x9_01;
  undefined8 extraout_x9_02;
  long ******extraout_x9_03;
  long ******extraout_x9_04;
  undefined8 extraout_x9_05;
  long ******extraout_x9_06;
  undefined8 extraout_x9_07;
  undefined8 extraout_x9_08;
  long ******extraout_x9_09;
  undefined8 extraout_x9_10;
  undefined8 extraout_x9_11;
  undefined8 extraout_x9_12;
  long ******extraout_x9_13;
  long ******extraout_x9_14;
  undefined8 extraout_x9_15;
  undefined8 extraout_x9_16;
  undefined8 extraout_x9_17;
  undefined8 extraout_x9_18;
  long ******extraout_x9_19;
  undefined8 extraout_x9_20;
  long ******extraout_x9_21;
  undefined8 extraout_x9_22;
  undefined8 extraout_x9_23;
  undefined8 extraout_x9_24;
  undefined8 extraout_x9_25;
  undefined8 extraout_x9_26;
  undefined8 extraout_x9_27;
  long extraout_x9_28;
  long extraout_x9_29;
  long extraout_x9_30;
  long extraout_x9_31;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  int extraout_w10_10;
  int extraout_w10_11;
  int extraout_w10_12;
  int extraout_w10_13;
  int extraout_w10_14;
  int extraout_w10_15;
  int extraout_w10_16;
  int extraout_w10_17;
  int extraout_w10_18;
  int extraout_w10_19;
  int extraout_w10_20;
  int extraout_w10_21;
  int extraout_w10_22;
  int extraout_w10_23;
  int extraout_w10_24;
  long extraout_x10;
  long extraout_x10_00;
  long *******ppppppplVar17;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  int extraout_w11_04;
  int extraout_w11_05;
  int extraout_w11_06;
  int extraout_w11_07;
  int extraout_w11_08;
  int extraout_w11_09;
  int extraout_w11_10;
  int extraout_w11_11;
  int extraout_w11_12;
  int extraout_w11_13;
  int extraout_w11_14;
  int extraout_w11_15;
  int extraout_w11_16;
  int extraout_w11_17;
  int extraout_w11_18;
  int extraout_w11_19;
  int extraout_w11_20;
  int extraout_w11_21;
  int extraout_w11_22;
  long *******extraout_x11;
  long *******extraout_x11_00;
  long *******extraout_x11_01;
  long extraout_x11_02;
  int extraout_w12;
  int extraout_w12_00;
  int extraout_w12_01;
  int extraout_w12_02;
  int extraout_w12_03;
  int extraout_w12_04;
  int extraout_w12_05;
  int extraout_w12_06;
  int extraout_w12_07;
  long *******unaff_x19;
  ulong uVar18;
  long *******unaff_x20;
  long *******unaff_x21;
  long ******pppppplVar19;
  long ******unaff_x22;
  long *******ppppppplVar20;
  long *******unaff_x24;
  long *******unaff_x25;
  ulong uVar21;
  long *******ppppppplVar22;
  long lVar23;
  long *******unaff_x26;
  long ******unaff_x27;
  ulong uVar24;
  long ******unaff_x28;
  undefined **ppuVar25;
  ulong uVar26;
  long *******unaff_x29;
  undefined8 unaff_x30;
  long ******pppppplVar27;
  long *******ppppppplStack_320;
  long *******ppppppplStack_318;
  long ******pppppplStack_310;
  long ******pppppplStack_308;
  undefined1 auStack_300 [8];
  long ******apppppplStack_2f8 [2];
  long ******pppppplStack_2e8;
  undefined8 uStack_2e0;
  long *******ppppppplStack_2d8;
  undefined8 uStack_2d0;
  long *******ppppppplStack_2c8;
  long *******ppppppplStack_2c0;
  long *******ppppppplStack_2b8;
  long *******ppppppplStack_2b0;
  long *******ppppppplStack_2a8;
  long *******ppppppplStack_2a0;
  long *******ppppppplStack_298;
  undefined8 uStack_290;
  long *******ppppppplStack_288;
  long *******ppppppplStack_280;
  undefined1 uStack_278;
  long *******ppppppplStack_270;
  long *******ppppppplStack_268;
  long lStack_258;
  long ******apppppplStack_250 [4];
  long ******pppppplStack_230;
  long ******pppppplStack_228;
  long *******ppppppplStack_220;
  long *******ppppppplStack_218;
  long *******ppppppplStack_210;
  long *******ppppppplStack_208;
  long ******pppppplStack_200;
  long *******ppppppplStack_1f8;
  long *******ppppppplStack_1f0;
  long *******ppppppplStack_1e8;
  long *******ppppppplStack_1e0;
  undefined8 uStack_1d8;
  long *******ppppppplStack_1d0;
  long *******ppppppplStack_1c8;
  uint uStack_1bc;
  long *******ppppppplStack_1b8;
  long *******ppppppplStack_1b0;
  long *******ppppppplStack_1a0;
  char acStack_191 [9];
  long *******appppppplStack_188 [3];
  undefined8 auStack_170 [4];
  long ******pppppplStack_150;
  undefined1 auStack_148 [56];
  long ******apppppplStack_110 [2];
  long ******pppppplStack_100;
  undefined1 auStack_f8 [16];
  long lStack_e8;
  long *******appppppplStack_e0 [7];
  long ******pppppplStack_a8;
  byte bStack_a0;
  byte bStack_9f;
  undefined1 auStack_98 [8];
  long *******ppppppplStack_90;
  long *******appppppplStack_88 [3];
  undefined8 uStack_70;
  
  ppppppplVar20 = (long *******)&ppppppplStack_1d0;
  ppppppplVar13 = (long *******)&stack0xfffffffffffffff0;
  ppppppplVar17 = param_3;
  func_0x00010b90fc50();
  uVar6 = *(char *)ppppppplVar17 == '\x11';
  uStack_70 = extraout_x8;
  if ((bool)uVar6) {
    func_0x00010b990764(param_3);
    cVar5 = (char)param_4;
    func_0x00010b910744(*(undefined *)((long)param_3 + 1),appppppplStack_e0);
    ppppppplVar11 = appppppplStack_e0[0];
    ppppppplVar17 = param_3;
    func_0x00010b90a940();
    ppppppplVar7 = appppppplStack_e0[0];
    func_0x00010b8e0a44();
    ppppppplVar8 = appppppplStack_e0[0];
    param_4 = unaff_x22;
    param_2 = unaff_x26;
    goto LAB_10b909934;
  }
  ppppppplVar7 = param_1 + 2;
  ppppppplVar11 = param_2;
  pppppplVar27 = param_4;
  func_0x00010b90a0f0();
  func_0x00010b9108e0(param_1[2]);
  cVar5 = (char)pppppplVar27;
  if (!(bool)uVar6) {
    pppppplVar16 = (long ******)0x0;
    if (ppppppplVar11[3] != (long ******)0x0) {
      do {
        func_0x00010b90fce8();
        cVar5 = (char)pppppplVar27;
        pppppplVar16 = extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    ppppppplVar22 = unaff_x19 + 1;
    *unaff_x19 = pppppplVar16;
    func_0x00010b90fc10(uStack_70);
    if ((bool)uVar6) {
      ppppppplVar8 = ppppppplVar11 + 4;
      ppppppplVar20 = (long *******)register0x00000008;
      param_1 = unaff_x20;
      ppppppplVar13 = unaff_x29;
      goto code_r0x0001003adcc0;
    }
    goto LAB_10b9099e0;
  }
  acStack_191[0] = '\0';
  unaff_x24 = &pppppplStack_a8;
  ppppppplVar7 = (long *******)acStack_191;
  ppppppplVar17 = (long *******)0x1;
  ppppppplVar8 = param_1;
  ppppppplVar11 = param_3;
  FUN_10b994bf0(&pppppplStack_a8);
  cVar5 = (char)ppppppplVar7;
  uVar6 = pppppplStack_a8 == (long ******)0x1;
  if (!(bool)uVar6) {
    func_0x000107c31084();
    ppppppplVar20 = param_2;
    func_0x00010b98fa8c(&pppppplStack_150);
    func_0x00010b9104bc();
    ppppppplStack_90 = ppppppplVar20;
    appppppplStack_88[0] = ppppppplVar11;
    func_0x000107c2793c(&UNK_10f7ccd74);
    func_0x00010b90fe98();
    func_0x000107c31080(&pppppplStack_100,ppppppplVar8,appppppplStack_e0);
    ppppppplVar11 = &pppppplStack_100;
    FUN_10b99fa14(&ppppppplStack_90,&bStack_a0);
    func_0x00010b9103f0();
    func_0x00010b91086c();
    func_0x000107c278f8(pppppplStack_100);
    func_0x00010b9102ec();
    func_0x00010b910264();
    func_0x00010b910930();
    goto LAB_10b90992c;
  }
  if ((acStack_191[0] == '\x01') &&
     (ppppppplVar8 = (long *******)*param_1, ppppppplVar8 != (long *******)0x0)) {
    ppppppplVar17 = (long *******)&bStack_a0;
    ppppppplVar11 = param_2;
    FUN_10b994158();
  }
  uVar6 = bStack_a0 == 0x11;
  if ((bool)uVar6) {
    ppppppplVar17 = (long *******)&bStack_a0;
    func_0x00010b990764();
    func_0x00010b910744(bStack_9f,&ppppppplStack_1a0);
    goto LAB_10b9097c4;
  }
  ppuVar25 = &PTR_FUN_110d74a90;
  uVar6 = bStack_a0 == 1;
  if ((bool)uVar6) {
    func_0x00010b90fdb4();
    func_0x00010b90fc3c();
    if (unaff_x21 != (long *******)0x0) {
      do {
        func_0x00010b90fce8();
      } while (extraout_w11_00 != 0);
    }
    ppppppplVar8[2] = (long ******)unaff_x21;
    *ppppppplVar8 = (long ******)&PTR_FUN_110d74ae0;
    do {
      func_0x00010b90fe5c();
      ppppppplStack_1a0 = ppppppplVar8;
    } while (extraout_w10 != 0);
    do {
      func_0x000107c39f2c();
      cVar5 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_01,0x10);
      if (bVar2) {
        *extraout_x8_01 = extraout_x9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    goto code_r0x00010b908270;
  }
  param_3 = (long *******)(ulong)bStack_9f;
  unaff_x28 = (long ******)&PTR_FUN_110d74a90;
  if ((bStack_9f & 1) != 0) {
    unaff_x21 = (long *******)&ppppppplStack_90;
    FUN_10b9907d0(&ppppppplStack_90,param_2);
    param_3 = &pppppplStack_150;
    func_0x000107c31030(&pppppplStack_150,&ppppppplStack_90);
    unaff_x24 = &pppppplStack_100;
    FUN_10b9907d0(&pppppplStack_100,&bStack_a0);
    ppppppplVar11 = &pppppplStack_150;
    ppppppplVar17 = &pppppplStack_100;
    func_0x00010b90fd58(appppppplStack_e0);
    func_0x000107c27900(auStack_f8);
    func_0x000107c27900(auStack_148);
    ppppppplVar20 = (long *******)appppppplStack_88;
    func_0x000107c27900();
    if (((ulong)param_4[1] & 1) == 0) {
      ppppppplStack_1a0 = (long *******)0x0;
    }
    else {
      func_0x00010b910128();
      func_0x00010b90fc3c();
      if (unaff_x21 != (long *******)0x0) {
        do {
          func_0x00010b90fce8();
        } while (extraout_w11_02 != 0);
      }
      ppppppplVar20[2] = (long ******)unaff_x21;
      *ppppppplVar20 = (long ******)&PTR_DAT_110d74b48;
      pppppplVar27 = (long ******)0x0;
      if (appppppplStack_e0[0] != (long *******)0x0) {
        do {
          func_0x00010b90ff54();
          pppppplVar27 = extraout_x9_01;
        } while (extraout_w12 != 0);
      }
      ppppppplVar20[3] = pppppplVar27;
      do {
        func_0x00010b90fe5c();
        ppppppplStack_1a0 = ppppppplVar20;
      } while (extraout_w10_01 != 0);
      do {
        func_0x000107c39f2c();
        cVar5 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_03,0x10);
        if (bVar2) {
          *extraout_x8_03 = extraout_x9_02;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((bool)uVar6) {
        (*(code *)(*ppppppplVar20)[1])();
      }
    }
    func_0x00010b907cc8(appppppplStack_e0);
    goto LAB_10b9097c4;
  }
  uVar14 = (uint)bStack_a0;
  cVar4 = SBORROW4(uVar14,0x16);
  cVar5 = (int)(uVar14 - 0x16) < 0;
  uVar6 = uVar14 == 0x16;
  switch(bStack_a0) {
  case 0:
    func_0x00010b90fdb4();
    func_0x00010b90fc3c();
    if (unaff_x21 != (long *******)0x0) {
      do {
        func_0x00010b90fce8();
      } while (extraout_w11_01 != 0);
    }
    ppppppplVar8[2] = (long ******)unaff_x21;
    *ppppppplVar8 = (long ******)&PTR_DAT_110d74ef0;
    do {
      func_0x00010b90fe5c();
      ppppppplStack_1a0 = ppppppplVar8;
    } while (extraout_w10_00 != 0);
    do {
      func_0x000107c39f2c();
      cVar5 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_02,0x10);
      if (bVar2) {
        *extraout_x8_02 = extraout_x9_00;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    break;
  default:
    func_0x000107c31084();
    ppppppplVar20 = ppppppplVar8;
    func_0x00010b910858(&pppppplStack_150);
    func_0x00010b9104bc();
    ppppppplStack_90 = ppppppplVar20;
    appppppplStack_88[0] = ppppppplVar11;
    func_0x000107c2793c(&UNK_10f7ccdcd);
    func_0x00010b90fe98();
    func_0x000107c31080(&pppppplStack_100,ppppppplVar8,appppppplStack_e0);
    ppppppplVar11 = &pppppplStack_100;
    FUN_10b99f560(&ppppppplStack_90);
    func_0x00010b9103f0();
    func_0x00010b91086c();
    func_0x000107c278f8(pppppplStack_100);
    func_0x00010b9102ec();
    func_0x00010b910264();
    ppppppplStack_1a0 = (long *******)0x0;
    param_3 = ppppppplVar8;
    goto LAB_10b9097c4;
  case 2:
    func_0x00010b90fdb4();
    func_0x00010b90fc3c();
    if ((bStack_9f >> 1 & 1) == 0) {
      if (unaff_x21 != (long *******)0x0) {
        do {
          func_0x00010b90fce8();
        } while (extraout_w11_07 != 0);
      }
      ppppppplVar8[2] = (long ******)unaff_x21;
      *ppppppplVar8 = (long ******)&PTR_FUN_110d74ce8;
      do {
        func_0x00010b90fe5c();
        ppppppplStack_1a0 = ppppppplVar8;
      } while (extraout_w10_06 != 0);
      do {
        func_0x000107c39f2c();
        cVar5 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_08,0x10);
        if (bVar2) {
          *extraout_x8_08 = extraout_x9_11;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    else {
      if (unaff_x21 != (long *******)0x0) {
        do {
          func_0x00010b90fce8();
        } while (extraout_w11_17 != 0);
      }
      ppppppplVar8[2] = (long ******)unaff_x21;
      *ppppppplVar8 = (long ******)&PTR_DAT_110d74c80;
      do {
        func_0x00010b90fe5c();
        ppppppplStack_1a0 = ppppppplVar8;
      } while (extraout_w10_19 != 0);
      do {
        func_0x000107c39f2c();
        cVar5 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_19,0x10);
        if (bVar2) {
          *extraout_x8_19 = extraout_x9_25;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    break;
  case 3:
    func_0x00010b90fdb4();
    func_0x00010b90fc3c();
    if ((bStack_9f >> 1 & 1) == 0) {
      if (unaff_x21 != (long *******)0x0) {
        do {
          func_0x00010b90fce8();
        } while (extraout_w11_11 != 0);
      }
      ppppppplVar8[2] = (long ******)unaff_x21;
      *ppppppplVar8 = (long ******)&PTR_FUN_110d74db8;
      do {
        func_0x00010b90fe5c();
        ppppppplStack_1a0 = ppppppplVar8;
      } while (extraout_w10_10 != 0);
      do {
        func_0x000107c39f2c();
        cVar5 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_12,0x10);
        if (bVar2) {
          *extraout_x8_12 = extraout_x9_17;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    else {
      if (unaff_x21 != (long *******)0x0) {
        do {
          func_0x00010b90fce8();
        } while (extraout_w11_19 != 0);
      }
      ppppppplVar8[2] = (long ******)unaff_x21;
      *ppppppplVar8 = (long ******)&PTR_DAT_110d74d50;
      do {
        func_0x00010b90fe5c();
        ppppppplStack_1a0 = ppppppplVar8;
      } while (extraout_w10_21 != 0);
      do {
        func_0x000107c39f2c();
        cVar5 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_21,0x10);
        if (bVar2) {
          *extraout_x8_21 = extraout_x9_27;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    break;
  case 4:
    func_0x00010b90fdb4();
    func_0x00010b90fc3c();
    if ((bStack_9f >> 1 & 1) == 0) {
      if (unaff_x21 != (long *******)0x0) {
        do {
          func_0x00010b90fce8();
        } while (extraout_w11_10 != 0);
      }
      ppppppplVar8[2] = (long ******)unaff_x21;
      *ppppppplVar8 = (long ******)&PTR_FUN_110d74e88;
      do {
        func_0x00010b90fe5c();
        ppppppplStack_1a0 = ppppppplVar8;
      } while (extraout_w10_09 != 0);
      do {
        func_0x000107c39f2c();
        cVar5 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_11,0x10);
        if (bVar2) {
          *extraout_x8_11 = extraout_x9_16;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    else {
      if (unaff_x21 != (long *******)0x0) {
        do {
          func_0x00010b90fce8();
        } while (extraout_w11_18 != 0);
      }
      ppppppplVar8[2] = (long ******)unaff_x21;
      *ppppppplVar8 = (long ******)&PTR_DAT_110d74e20;
      do {
        func_0x00010b90fe5c();
        ppppppplStack_1a0 = ppppppplVar8;
      } while (extraout_w10_20 != 0);
      do {
        func_0x000107c39f2c();
        cVar5 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_20,0x10);
        if (bVar2) {
          *extraout_x8_20 = extraout_x9_26;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    break;
  case 5:
    func_0x00010b90fdb4();
    func_0x00010b90fc3c();
    if ((bStack_9f >> 1 & 1) == 0) {
      if (unaff_x21 != (long *******)0x0) {
        do {
          func_0x00010b90fce8();
        } while (extraout_w11_05 != 0);
      }
      ppppppplVar8[2] = (long ******)unaff_x21;
      *ppppppplVar8 = (long ******)&PTR_FUN_110d74c18;
      do {
        func_0x00010b90fe5c();
        ppppppplStack_1a0 = ppppppplVar8;
      } while (extraout_w10_04 != 0);
      do {
        func_0x000107c39f2c();
        cVar5 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_06,0x10);
        if (bVar2) {
          *extraout_x8_06 = extraout_x9_08;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    else {
      if (unaff_x21 != (long *******)0x0) {
        do {
          func_0x00010b90fce8();
        } while (extraout_w11_16 != 0);
      }
      ppppppplVar8[2] = (long ******)unaff_x21;
      *ppppppplVar8 = (long ******)&PTR_FUN_110d74bb0;
      do {
        func_0x00010b90fe5c();
        ppppppplStack_1a0 = ppppppplVar8;
      } while (extraout_w10_18 != 0);
      do {
        func_0x000107c39f2c();
        cVar5 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_18,0x10);
        if (bVar2) {
          *extraout_x8_18 = extraout_x9_24;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    break;
  case 6:
    func_0x00010b90fdb4();
    func_0x00010b90fc3c();
    if (unaff_x21 != (long *******)0x0) {
      do {
        func_0x00010b90fce8();
      } while (extraout_w11_08 != 0);
    }
    ppppppplVar8[2] = (long ******)unaff_x21;
    *ppppppplVar8 = (long ******)&PTR_DAT_110d74f58;
    do {
      func_0x00010b90fe5c();
      ppppppplStack_1a0 = ppppppplVar8;
    } while (extraout_w10_07 != 0);
    do {
      func_0x000107c39f2c();
      cVar5 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_09,0x10);
      if (bVar2) {
        *extraout_x8_09 = extraout_x9_12;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    break;
  case 7:
    func_0x00010b90fdb4();
    func_0x00010b90fc3c();
    if (unaff_x21 != (long *******)0x0) {
      do {
        func_0x00010b90fce8();
      } while (extraout_w11_12 != 0);
    }
    ppppppplVar8[2] = (long ******)unaff_x21;
    *ppppppplVar8 = (long ******)&PTR_DAT_110d74fc0;
    do {
      func_0x00010b90fe5c();
      ppppppplStack_1a0 = ppppppplVar8;
    } while (extraout_w10_11 != 0);
    do {
      func_0x000107c39f2c();
      cVar5 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_13,0x10);
      if (bVar2) {
        *extraout_x8_13 = extraout_x9_18;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    break;
  case 0xb:
    func_0x000107c30f7c(&ppppppplStack_90,auStack_98);
    func_0x00010b910598();
    ppppppplVar17 = ppppppplStack_90;
    pppppplVar27 = pppppplStack_100;
    if (((ulong)param_4[1] & 1) == 0) {
      func_0x00010b910450(ppppppplStack_90);
      func_0x000107c2793c(&UNK_10f7cd021);
      unaff_x21 = (long *******)appppppplStack_e0;
      ppppppplVar7 = &pppppplStack_150;
      func_0x00010b910288(appppppplStack_e0);
      func_0x00010b91021c();
      ppppppplVar17 = extraout_x11;
      if (cVar5 == cVar4) {
        ppppppplVar17 = extraout_x8_22;
      }
      func_0x00010b91043c();
      func_0x00010b9102ec();
      ppppppplStack_1a0 = (long *******)0x0;
    }
    else {
      uStack_1bc = (uint)*(byte *)(ppppppplStack_90 + 3);
      pppppplStack_100 = (long ******)0x0;
      pppppplVar16 = param_1[1];
      ppppppplVar20 = (long *******)((long)ppppppplStack_90[4] * 8 + 0x28);
      __Znwm();
      param_3 = ppppppplVar20 + 1;
      *param_3 = (long ******)0x1;
      *ppppppplVar20 = (long ******)&PTR_FUN_110d74a90;
      unaff_x24 = ppppppplVar17;
      if (pppppplVar16 != (long ******)0x0) {
        do {
          func_0x00010b90fe5c();
          unaff_x24 = ppppppplStack_90;
        } while (extraout_w10_12 != 0);
      }
      ppppppplVar20[2] = pppppplVar16;
      *ppppppplVar20 = (long ******)&PTR_FUN_110d75218;
      do {
        func_0x00010b90fe5c();
      } while (extraout_w10_13 != 0);
      ppppppplVar20[3] = (long ******)unaff_x24;
      ppppppplVar20[4] = pppppplVar27;
      pppppplVar16 = ppppppplStack_90[4];
      unaff_x25 = ppppppplVar20 + 5;
      pppppplVar19 = (long ******)(ulong)uStack_1bc;
      for (pppppplVar27 = (long ******)0x0; pppppplVar16 != pppppplVar27;
          pppppplVar27 = (long ******)((long)pppppplVar27 + 1)) {
        ppppppplVar20[(long)pppppplVar27 + 5] = (long ******)0x0;
      }
      ppppppplStack_1b8 = ppppppplStack_1a0;
      ppppppplStack_1d0 = ppppppplVar20;
      ppppppplStack_1c8 = unaff_x25;
      ppppppplStack_1b0 = param_2;
      for (ppuVar25 = (undefined **)0x0; ppppppplVar20 = ppppppplStack_90,
          ppppppplVar17 = ppppppplStack_90, ppuVar25 < pppppplVar16;
          ppuVar25 = (undefined **)((long)ppuVar25 + 1)) {
        ppppppplVar7 = ppppppplStack_90 + (long)ppuVar25 * 3 + 5;
        func_0x00010b910860(&pppppplStack_150);
        if (((ulong)param_4[1] & 1) == 0) {
          ppppppplStack_1a0 = (long *******)0x0;
code_r0x00010b909208:
          unaff_x21 = ppppppplStack_1d0;
          func_0x00010b8e0a44(pppppplStack_150);
          goto code_r0x00010b90921c;
        }
        unaff_x24 = unaff_x25 + (long)ppuVar25;
        if (((int)pppppplVar19 != 0) &&
           (pppppplVar27 = param_1[0x1a], pppppplVar27 != (long ******)0x0)) {
          (*(code *)(*pppppplVar27)[2])
                    (appppppplStack_e0,pppppplVar27,ppppppplVar20 + (long)ppuVar25 * 3 + 6);
          ppppppplVar8 = (long *******)appppppplStack_e0;
          ppppppplVar11 = ppppppplVar20 + (long)ppuVar25 * 3 + 6;
          FUN_10b990e08();
          if ((int)ppppppplVar8 != 0) {
            func_0x00010b910430();
            ppppppplVar22 = ppppppplVar8 + 1;
            *ppppppplVar22 = (long ******)0x1;
            *ppppppplVar8 = (long ******)&PTR_FUN_110d74a90;
            if (pppppplVar19 != (long ******)0x0) {
              do {
                func_0x00010b90fe5c();
              } while (extraout_w10_22 != 0);
            }
            ppppppplVar8[2] = pppppplVar19;
            *ppppppplVar8 = (long ******)&PTR_DAT_110d75280;
            ppppppplVar8[3] = (long ******)0x0;
            ppppppplVar8[4] = (long ******)0x0;
            ppppppplVar7 = ppppppplVar20 + (long)ppuVar25 * 3 + 5;
            ppppppplVar17 = ppppppplStack_90;
            func_0x00010b910860(auStack_170);
            cVar5 = *(char *)(param_4 + 1);
            ppppppplVar20 = (long *******)0x0;
            if (cVar5 == '\x01') {
              FUN_10b9074d0(ppppppplVar8 + 3,&pppppplStack_150);
              FUN_10b9074d0(ppppppplVar8 + 4,auStack_170);
              do {
                func_0x00010b91065c();
              } while (extraout_w9 != 0);
              ppppppplVar11 = (long *******)appppppplStack_188;
              appppppplStack_188[0] = ppppppplVar8;
              FUN_10b90719c(unaff_x24);
              func_0x00010b8e0a44(appppppplStack_188[0]);
              ppppppplVar20 = ppppppplStack_1b8;
            }
            func_0x00010b8e0a44(auStack_170[0]);
            do {
              pppppplVar27 = *ppppppplVar22;
              cVar4 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(ppppppplVar22,0x10);
              if (bVar2) {
                *ppppppplVar22 = (long ******)((long)pppppplVar27 + -1);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if ((long ******)((long)pppppplVar27 + -1) == (long ******)0x0) {
              (*(code *)(*ppppppplVar8)[1])(ppppppplVar8);
            }
            unaff_x25 = ppppppplStack_1c8;
            if (cVar5 == '\0') {
              ppppppplStack_1a0 = ppppppplVar20;
              func_0x00010b9100a0(appppppplStack_e0);
              goto code_r0x00010b909208;
            }
            pppppplVar19 = (long ******)(ulong)uStack_1bc;
            ppppppplStack_1b8 = ppppppplVar20;
          }
          func_0x00010b910460();
        }
        if (*unaff_x24 == (long ******)0x0) {
          pppppplVar27 = (long ******)0x0;
          if (pppppplStack_150 != (long ******)0x0) {
            do {
              func_0x00010b90fce8();
              pppppplVar27 = extraout_x8_23;
            } while (extraout_w11_20 != 0);
          }
          ppppppplVar11 = apppppplStack_110;
          apppppplStack_110[0] = pppppplVar27;
          FUN_10b90719c(unaff_x24);
          func_0x00010b8e0a44(apppppplStack_110[0]);
        }
        func_0x00010b8e0a44(pppppplStack_150);
        pppppplVar16 = ppppppplStack_90[4];
      }
      do {
        cVar5 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_3,0x10);
        if (bVar2) {
          *param_3 = (long ******)((long)*param_3 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      ppppppplStack_1a0 = ppppppplStack_1d0;
      unaff_x21 = ppppppplStack_1d0;
code_r0x00010b90921c:
      do {
        param_2 = ppppppplStack_1b0;
        uVar6 = (long ******)((long)*param_3 + -1) == (long ******)0x0;
        cVar5 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_3,0x10);
        if (bVar2) {
          *param_3 = (long ******)((long)*param_3 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((bool)uVar6) {
        (*(code *)(*unaff_x21)[1])(unaff_x21);
      }
    }
    FUN_10b90ccdc(pppppplStack_100);
    func_0x000107c2792c(ppppppplStack_90);
    unaff_x28 = (long ******)ppuVar25;
    goto LAB_10b9097c4;
  case 0xc:
    func_0x00010b990904(&ppppppplStack_90,auStack_98);
    param_3 = (long *******)param_1[1];
    func_0x00010b910598();
    if (((ulong)param_4[1] & 1) == 0) {
      func_0x00010b910450(ppppppplStack_90);
      func_0x000107c2793c(&UNK_10f7cd30b);
      unaff_x21 = (long *******)appppppplStack_e0;
      ppppppplVar7 = &pppppplStack_150;
      func_0x00010b910288(appppppplStack_e0);
      func_0x00010b91021c();
      ppppppplVar17 = extraout_x11_01;
      if (cVar5 == cVar4) {
        ppppppplVar17 = extraout_x8_25;
      }
      func_0x00010b91043c();
      func_0x00010b9102ec();
      param_3 = (long *******)0x0;
    }
    else {
      unaff_x24 = (long *******)(ulong)bStack_9f;
      unaff_x21 = (long *******)param_1[1];
      func_0x00010b910530();
      pppppplVar27 = pppppplStack_100;
      pppppplStack_100 = (long ******)0x0;
      param_3[1] = (long ******)0x1;
      *param_3 = (long ******)&PTR_FUN_110d74a90;
      if (unaff_x21 != (long *******)0x0) {
        do {
          func_0x00010b90ff54();
          pppppplVar27 = extraout_x9_21;
        } while (extraout_w12_07 != 0);
      }
      param_3[2] = (long ******)unaff_x21;
      *param_3 = (long ******)&PTR_FUN_110d756f0;
      if (ppppppplStack_90 != (long *******)0x0) {
        ppppppplVar20 = ppppppplStack_90 + 1;
        do {
          cVar5 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(ppppppplVar20,0x10);
          if (bVar2) {
            *ppppppplVar20 = (long ******)((long)*ppppppplVar20 + 1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      param_3[3] = (long ******)ppppppplStack_90;
      param_3[4] = pppppplVar27;
      *(byte *)(param_3 + 5) = bStack_9f >> 1 & 1;
      do {
        func_0x00010b90fe5c();
      } while (extraout_w10_15 != 0);
      do {
        func_0x000107c39f2c();
        cVar5 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_16,0x10);
        if (bVar2) {
          *extraout_x8_16 = extraout_x9_22;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((bool)uVar6) {
        func_0x00010b90fcd8();
      }
    }
    ppppppplStack_1a0 = param_3;
    FUN_10b90e5c4(pppppplStack_100);
    FUN_10b90558c(ppppppplStack_90);
    goto LAB_10b9097c4;
  case 0xd:
    FUN_10b9908c0(&lStack_e8,auStack_98);
    ppppppplVar17 = &pppppplStack_100;
    func_0x00010b90fd64();
    if (((ulong)param_4[1] & 1) != 0) {
      ppppppplVar22 = apppppplStack_110;
      ppppppplVar8 = (long *******)(lStack_e8 + 0x18);
      unaff_x30 = 0x10b908b30;
      goto code_r0x0001003adcc0;
    }
    func_0x00010b910858(&pppppplStack_150);
    func_0x00010b9104bc();
    ppppppplStack_90 = ppppppplVar17;
    appppppplStack_88[0] = ppppppplVar11;
    func_0x00010b910818();
    unaff_x21 = (long *******)appppppplStack_e0;
    func_0x00010b90fe98();
    func_0x00010b91021c();
    ppppppplVar17 = extraout_x11_00;
    if (cVar5 == cVar4) {
      ppppppplVar17 = extraout_x8_24;
    }
    func_0x00010b91043c();
    func_0x00010b9102ec();
    func_0x00010b910264();
    ppppppplStack_1a0 = (long *******)0x0;
    func_0x00010b9100a0(&pppppplStack_100);
    func_0x000107c30df4(lStack_e8);
    goto LAB_10b9097c4;
  case 0xe:
    FUN_10b990668(&ppppppplStack_90,&bStack_a0);
    ppppppplVar20 = (long *******)appppppplStack_e0;
    ppppppplVar17 = (long *******)&ppppppplStack_90;
    func_0x00010b90fd64();
    if (((ulong)param_4[1] & 1) == 0) {
      func_0x00010b9108c8();
      func_0x00010b9102bc();
      ppppppplStack_1a0 = (long *******)0x0;
    }
    else {
      ppppppplVar11 = (long *******)appppppplStack_e0;
      ppppppplVar17 = (long *******)&ppppppplStack_90;
      func_0x00010b90fd58(&pppppplStack_150);
      if (((ulong)param_4[1] & 1) == 0) {
        func_0x00010b9108c8();
        func_0x00010b9102bc();
        ppppppplVar20 = (long *******)0x0;
      }
      else {
        func_0x00010b910128();
        func_0x00010b90fc3c();
        if (unaff_x21 != (long *******)0x0) {
          do {
            func_0x00010b90fce8();
          } while (extraout_w11_04 != 0);
        }
        ppppppplVar20[2] = (long ******)unaff_x21;
        *ppppppplVar20 = (long ******)&PTR_FUN_110d752e8;
        pppppplVar27 = (long ******)0x0;
        if (pppppplStack_150 != (long ******)0x0) {
          do {
            func_0x00010b90ff54();
            pppppplVar27 = extraout_x9_06;
          } while (extraout_w12_02 != 0);
        }
        ppppppplVar20[3] = pppppplVar27;
        do {
          func_0x00010b90fe5c();
        } while (extraout_w10_03 != 0);
        do {
          func_0x000107c39f2c();
          cVar5 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_05,0x10);
          if (bVar2) {
            *extraout_x8_05 = extraout_x9_07;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((bool)uVar6) {
          func_0x00010b90fcd8();
        }
      }
      func_0x00010b910758();
      param_3 = ppppppplVar20;
    }
    func_0x00010b9100a0(appppppplStack_e0);
    lVar23 = -0x80;
    goto code_r0x00010b9097c0;
  case 0xf:
    func_0x00010b9906a4(&bStack_a0);
    func_0x00010b90fc90();
    if (((ulong)param_4[1] & 1) == 0) {
code_r0x00010b9087e0:
      ppppppplVar11 = (long *******)&UNK_10f7cd181;
      goto code_r0x00010b90903c;
    }
    ppppppplVar20 = &pppppplStack_150;
    ppppppplVar17 = param_3 + 4;
    func_0x00010b90fd64();
    if (((ulong)param_4[1] & 1) != 0) {
      func_0x00010b90fd20(&ppppppplStack_90);
      if (((ulong)param_4[1] & 1) != 0) {
        ppppppplVar11 = &pppppplStack_150;
        ppppppplVar17 = param_3 + 4;
        func_0x00010b90fd58(&pppppplStack_100);
        if (((ulong)param_4[1] & 1) != 0) {
          func_0x00010b910430();
          func_0x00010b90fc3c();
          if (unaff_x21 != (long *******)0x0) {
            do {
              func_0x00010b90fce8();
            } while (extraout_w11_09 != 0);
          }
          ppppppplVar20[2] = (long ******)unaff_x21;
          *ppppppplVar20 = (long ******)&PTR_FUN_110d75350;
          pppppplVar27 = (long ******)0x0;
          if (ppppppplStack_90 != (long *******)0x0) {
            do {
              func_0x00010b90ff54();
              pppppplVar27 = extraout_x9_13;
            } while (extraout_w12_04 != 0);
          }
          ppppppplVar20[3] = pppppplVar27;
          pppppplVar27 = (long ******)0x0;
          if (pppppplStack_100 != (long ******)0x0) {
            do {
              func_0x00010b90ff54();
              pppppplVar27 = extraout_x9_14;
            } while (extraout_w12_05 != 0);
          }
          ppppppplVar20[4] = pppppplVar27;
          do {
            func_0x00010b90fe5c();
          } while (extraout_w10_08 != 0);
          do {
            func_0x000107c39f2c();
            cVar5 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_10,0x10);
            if (bVar2) {
              *extraout_x8_10 = extraout_x9_15;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          goto code_r0x00010b9087d0;
        }
code_r0x00010b909254:
        ppppppplVar11 = (long *******)&UNK_10f7cd1a1;
code_r0x00010b909614:
        func_0x00010b9102bc();
        ppppppplVar20 = (long *******)0x0;
        goto code_r0x00010b90979c;
      }
code_r0x00010b9090f4:
      ppppppplVar11 = (long *******)&UNK_10f7cd181;
code_r0x00010b909268:
      func_0x00010b9102bc();
      ppppppplStack_1a0 = (long *******)0x0;
      goto code_r0x00010b9097ac;
    }
code_r0x00010b908d14:
    ppppppplVar11 = (long *******)&UNK_10f7cd1a1;
code_r0x00010b909128:
    func_0x00010b9102bc();
    ppppppplStack_1a0 = (long *******)0x0;
    goto code_r0x00010b9097b4;
  case 0x10:
    ppppppplVar20 = (long *******)&bStack_a0;
    func_0x00010b990744();
    func_0x00010b90fc90();
    if (((ulong)param_4[1] & 1) == 0) {
      func_0x00010b9108c8();
      goto code_r0x00010b90903c;
    }
    func_0x00010b90fd20(&pppppplStack_150);
    if (((ulong)param_4[1] & 1) != 0) {
      func_0x00010b910128();
      func_0x00010b90fc3c();
      if (unaff_x21 != (long *******)0x0) {
        do {
          func_0x00010b90fce8();
        } while (extraout_w11_06 != 0);
      }
      ppppppplVar20[2] = (long ******)unaff_x21;
      *ppppppplVar20 = (long ******)&PTR_DAT_110d75758;
      pppppplVar27 = (long ******)0x0;
      if (pppppplStack_150 != (long ******)0x0) {
        do {
          func_0x00010b90ff54();
          pppppplVar27 = extraout_x9_09;
        } while (extraout_w12_03 != 0);
      }
      ppppppplVar20[3] = pppppplVar27;
      do {
        func_0x00010b90fe5c();
      } while (extraout_w10_05 != 0);
      do {
        func_0x000107c39f2c();
        cVar5 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_07,0x10);
        if (bVar2) {
          *extraout_x8_07 = extraout_x9_10;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      goto code_r0x00010b908a60;
    }
    func_0x00010b9108c8();
code_r0x00010b909110:
    func_0x00010b9102bc();
    ppppppplVar20 = (long *******)0x0;
code_r0x00010b909118:
    func_0x00010b910758();
    param_3 = ppppppplVar20;
    goto code_r0x00010b9097bc;
  case 0x12:
    func_0x00010b9906c4(&bStack_a0);
    func_0x00010b90fc90();
    if (((ulong)param_4[1] & 1) == 0) goto code_r0x00010b9087e0;
    ppppppplVar20 = &pppppplStack_150;
    ppppppplVar17 = param_3 + 4;
    func_0x00010b90fd64();
    if (((ulong)param_4[1] & 1) == 0) goto code_r0x00010b908d14;
    func_0x00010b90fd20(&ppppppplStack_90);
    if (((ulong)param_4[1] & 1) == 0) goto code_r0x00010b9090f4;
    ppppppplVar11 = &pppppplStack_150;
    ppppppplVar17 = param_3 + 4;
    func_0x00010b90fd58(&pppppplStack_100);
    if (((ulong)param_4[1] & 1) == 0) goto code_r0x00010b909254;
    func_0x00010b910430();
    func_0x00010b90fc3c();
    if (unaff_x21 != (long *******)0x0) {
      do {
        func_0x00010b90fce8();
      } while (extraout_w11_03 != 0);
    }
    ppppppplVar20[2] = (long ******)unaff_x21;
    *ppppppplVar20 = (long ******)&PTR_FUN_110d75410;
    pppppplVar27 = (long ******)0x0;
    if (ppppppplStack_90 != (long *******)0x0) {
      do {
        func_0x00010b90ff54();
        pppppplVar27 = extraout_x9_03;
      } while (extraout_w12_00 != 0);
    }
    ppppppplVar20[3] = pppppplVar27;
    pppppplVar27 = (long ******)0x0;
    if (pppppplStack_100 != (long ******)0x0) {
      do {
        func_0x00010b90ff54();
        pppppplVar27 = extraout_x9_04;
      } while (extraout_w12_01 != 0);
    }
    ppppppplVar20[4] = pppppplVar27;
    do {
      func_0x00010b90fe5c();
    } while (extraout_w10_02 != 0);
    do {
      func_0x000107c39f2c();
      cVar5 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_04,0x10);
      if (bVar2) {
        *extraout_x8_04 = extraout_x9_05;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
code_r0x00010b9087d0:
    unaff_x24 = param_1;
    if ((bool)uVar6) {
      func_0x00010b90fcd8();
    }
    goto code_r0x00010b90979c;
  case 0x13:
    ppppppplVar20 = (long *******)&bStack_a0;
    func_0x00010b9906e4();
    func_0x00010b90fc90();
    if (((ulong)param_4[1] & 1) != 0) {
      func_0x00010b90fd20(&pppppplStack_150);
      if (((ulong)param_4[1] & 1) == 0) {
        ppppppplVar11 = (long *******)&UNK_10f7cd22d;
        goto code_r0x00010b909110;
      }
      func_0x00010b910128();
      func_0x00010b90fc3c();
      if (unaff_x21 != (long *******)0x0) {
        do {
          func_0x00010b90fce8();
        } while (extraout_w11_13 != 0);
      }
      ppppppplVar20[2] = (long ******)unaff_x21;
      *ppppppplVar20 = (long ******)&PTR_FUN_110d754c0;
      pppppplVar27 = (long ******)0x0;
      if (pppppplStack_150 != (long ******)0x0) {
        do {
          func_0x00010b90ff54();
          pppppplVar27 = extraout_x9_19;
        } while (extraout_w12_06 != 0);
      }
      ppppppplVar20[3] = pppppplVar27;
      do {
        func_0x00010b90fe5c();
      } while (extraout_w10_14 != 0);
      do {
        func_0x000107c39f2c();
        cVar5 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_14,0x10);
        if (bVar2) {
          *extraout_x8_14 = extraout_x9_20;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
code_r0x00010b908a60:
      if ((bool)uVar6) {
        func_0x00010b90fcd8();
      }
      goto code_r0x00010b909118;
    }
    ppppppplVar11 = (long *******)&UNK_10f7cd22d;
code_r0x00010b90903c:
    func_0x00010b9102bc();
    ppppppplStack_1a0 = (long *******)0x0;
    goto code_r0x00010b9097bc;
  case 0x14:
    func_0x00010b990704(&bStack_a0);
    func_0x00010b90fc90();
    if (((ulong)param_4[1] & 1) == 0) {
      ppppppplVar11 = (long *******)&UNK_10f7cd285;
      goto code_r0x00010b90903c;
    }
    ppppppplVar20 = &pppppplStack_150;
    ppppppplVar17 = param_3 + 4;
    func_0x00010b90fd64();
    if (((ulong)param_4[1] & 1) == 0) {
      ppppppplVar11 = (long *******)&UNK_10f7cd2ab;
      goto code_r0x00010b909128;
    }
    func_0x00010b90fd20(&ppppppplStack_90);
    if (((ulong)param_4[1] & 1) == 0) {
      ppppppplVar11 = (long *******)&UNK_10f7cd285;
      goto code_r0x00010b909268;
    }
    ppppppplVar11 = &pppppplStack_150;
    ppppppplVar17 = param_3 + 4;
    func_0x00010b90fd58(&pppppplStack_100);
    if (((ulong)param_4[1] & 1) == 0) {
      ppppppplVar11 = (long *******)&UNK_10f7cd2ab;
      goto code_r0x00010b909614;
    }
    func_0x00010b910530();
    pppppplVar27 = param_1[1];
    unaff_x24 = ppppppplVar20 + 1;
    *unaff_x24 = (long ******)0x1;
    *ppppppplVar20 = (long ******)&PTR_FUN_110d74a90;
    if (pppppplVar27 == (long ******)0x0) {
      unaff_x21 = (long *******)0x0;
      pppppplVar27 = (long ******)0x0;
    }
    else {
      do {
        func_0x00010b90fce8();
      } while (extraout_w11_14 != 0);
      unaff_x21 = (long *******)param_1[1];
      pppppplVar27 = extraout_x8_15;
    }
    ppppppplVar20[2] = pppppplVar27;
    *ppppppplVar20 = (long ******)&PTR_FUN_110d75570;
    pppppplVar27 = (long ******)0x18;
    __Znwm();
    *pppppplVar27 = (long *****)&PTR_FUN_110d74a90;
    pppppplVar27[1] = (long *****)0x1;
    if (unaff_x21 != (long *******)0x0) {
      do {
        func_0x00010b90fe5c();
      } while (extraout_w10_23 != 0);
    }
    pppppplVar27[2] = (long *****)unaff_x21;
    *pppppplVar27 = (long *****)&PTR_DAT_110d74f58;
    ppppppplVar20[3] = pppppplVar27;
    pppppplVar27 = (long ******)0x0;
    if (ppppppplStack_90 != (long *******)0x0) {
      do {
        func_0x00010b90fce8();
        pppppplVar27 = extraout_x8_26;
      } while (extraout_w11_21 != 0);
    }
    ppppppplVar20[4] = pppppplVar27;
    pppppplVar27 = (long ******)0x0;
    if (pppppplStack_100 != (long ******)0x0) {
      do {
        func_0x00010b90fce8();
        pppppplVar27 = extraout_x8_27;
      } while (extraout_w11_22 != 0);
    }
    ppppppplVar20[5] = pppppplVar27;
    do {
      cVar5 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(unaff_x24,0x10);
      if (bVar2) {
        *unaff_x24 = (long ******)((long)*unaff_x24 + 1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      uVar6 = (long ******)((long)*unaff_x24 + -1) == (long ******)0x0;
      cVar5 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(unaff_x24,0x10);
      if (bVar2) {
        *unaff_x24 = (long ******)((long)*unaff_x24 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    unaff_x25 = (long *******)ppuVar25;
    if ((bool)uVar6) {
      func_0x00010b90fcd8();
    }
code_r0x00010b90979c:
    ppppppplStack_1a0 = ppppppplVar20;
    func_0x00010b907cc8(&pppppplStack_100);
    param_3 = ppppppplVar20;
code_r0x00010b9097ac:
    func_0x00010b907cc8(&ppppppplStack_90);
code_r0x00010b9097b4:
    func_0x00010b9100a0(&pppppplStack_150);
code_r0x00010b9097bc:
    lVar23 = -0xd0;
code_r0x00010b9097c0:
    func_0x00010b9100a0((undefined *)((long)ppppppplVar13 + lVar23));
    goto LAB_10b9097c4;
  case 0x15:
    func_0x00010b90fdb4();
    func_0x00010b90fc3c();
    if (unaff_x21 != (long *******)0x0) {
      do {
        func_0x00010b90fce8();
      } while (extraout_w11_15 != 0);
    }
    ppppppplVar8[2] = (long ******)unaff_x21;
    *ppppppplVar8 = (long ******)&PTR_FUN_110d75620;
    do {
      func_0x00010b90fe5c();
      ppppppplStack_1a0 = ppppppplVar8;
    } while (extraout_w10_17 != 0);
    do {
      func_0x000107c39f2c();
      cVar5 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_17,0x10);
      if (bVar2) {
        *extraout_x8_17 = extraout_x9_23;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    break;
  case 0x16:
    unaff_x24 = (long *******)&bStack_a0;
    func_0x00010b990724();
    unaff_x25 = (long *******)param_1[1];
    param_3 = unaff_x24;
    func_0x00010b910530();
    unaff_x21 = param_3 + 1;
    *unaff_x21 = (long ******)0x1;
    *param_3 = (long ******)&PTR_FUN_110d74a90;
    if (unaff_x25 != (long *******)0x0) {
      do {
        func_0x00010b90fe5c();
      } while (extraout_w10_16 != 0);
    }
    param_3[2] = (long ******)unaff_x25;
    *param_3 = (long ******)&PTR_FUN_110d75688;
    ppppppplVar11 = unaff_x24 + 2;
    func_0x00010b90e320(param_3 + 3);
    do {
      cVar5 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(unaff_x21,0x10);
      if (bVar2) {
        *unaff_x21 = (long ******)((long)*unaff_x21 + 1);
        cVar5 = ExclusiveMonitorsStatus();
      }
      ppppppplStack_1a0 = param_3;
    } while (cVar5 != '\0');
    do {
      uVar6 = (long ******)((long)*unaff_x21 + -1) == (long ******)0x0;
      cVar5 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(unaff_x21,0x10);
      if (bVar2) {
        *unaff_x21 = (long ******)((long)*unaff_x21 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (!(bool)uVar6) goto LAB_10b9097c4;
    ppppplVar12 = (*param_3)[1];
    goto code_r0x00010b90827c;
  }
code_r0x00010b908270:
  unaff_x28 = (long ******)ppuVar25;
  if ((bool)uVar6) {
    ppppplVar12 = (*ppppppplVar8)[1];
code_r0x00010b90827c:
    (*(code *)ppppplVar12)();
    unaff_x28 = (long ******)ppuVar25;
  }
LAB_10b9097c4:
  cVar5 = (char)ppppppplVar7;
  unaff_x27 = (long ******)&pppppplStack_a8;
  if (((ulong)param_4[1] & 1) == 0) {
    func_0x00010b910930();
    ppppppplVar7 = ppppppplStack_1a0;
    ppppppplVar20 = unaff_x19;
  }
  else {
    ppppppplVar17 = (long *******)&bStack_a0;
    ppppppplStack_1b8 = ppppppplStack_1a0;
    func_0x00010b90a940(unaff_x19);
    param_4 = param_2[2];
    ppppppplStack_1b0 = param_2;
    FUN_10b90a97c();
    unaff_x27 = (long ******)0x0;
    param_2 = (long *******)param_1[5];
    func_0x00010b91093c((ulong)param_4 >> 7);
    puVar15 = extraout_x8_28;
    while( true ) {
      unaff_x25 = (long *******)((ulong)puVar15 & (ulong)param_2);
      uVar18 = *(ulong *)((long)param_1[2] + (long)unaff_x25);
      uVar24 = uVar18 ^ extraout_x9_28 * extraout_x10;
      ppppppplVar20 = ppppppplStack_1b0;
      for (unaff_x28 = (long ******)
                       (uVar24 + 0xfefefefefefefeff & (uVar24 ^ 0xffffffffffffffff) &
                       0x8080808080808080); ppppppplStack_1b0 = ppppppplVar20,
          unaff_x28 != (long ******)0x0;
          unaff_x28 = (long ******)((long)unaff_x28 - 1U & (ulong)unaff_x28)) {
        uVar24 = ((ulong)unaff_x28 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                 ((ulong)unaff_x28 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
        unaff_x24 = (long *******)
                    ((ulong)((long)unaff_x25 +
                            ((ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3)) & (ulong)param_2
                    );
        pppppplVar27 = param_1[3] + (long)unaff_x24 * 6;
        FUN_10b9909a8(pppppplVar27,ppppppplVar20);
        cVar5 = (char)ppppppplVar7;
        if (((ulong)pppppplVar27 & 1) != 0) goto LAB_10b9098f0;
        ppppppplVar20 = ppppppplStack_1b0;
      }
      cVar5 = (char)ppppppplVar7;
      uVar6 = (uVar18 & ~uVar18 << 6 & 0x8080808080808080) == 0;
      if (!(bool)uVar6) break;
      unaff_x27 = unaff_x27 + 1;
      puVar15 = (undefined *)((long)unaff_x27 + (long)unaff_x25);
    }
    unaff_x24 = param_1 + 2;
    FUN_10b90e740(unaff_x24,param_4);
    ppppppplVar20 = ppppppplStack_1b0;
    pppppplVar27 = param_1[3] + (long)unaff_x24 * 6;
    func_0x000107c30df0(pppppplVar27,ppppppplStack_1b0);
    pppppplVar27[3] = (long *****)0x0;
    pppppplVar27[4] = (long *****)0x0;
    pppppplVar27[5] = (long *****)0x0;
    *(byte *)((long)param_1[2] + (long)unaff_x24) = (byte)param_4 & 0x7f;
    func_0x00010b90fd34();
LAB_10b9098f0:
    unaff_x21 = (long *******)(param_1[3] + (long)unaff_x24 * 6);
    FUN_10b9074d0(unaff_x21 + 3,unaff_x19);
    func_0x000107c30f8c(unaff_x21 + 4,unaff_x19 + 1);
    ppppppplVar11 = ppppppplVar20;
    FUN_10b90a1e0(param_1 + 0xe);
    ppppppplVar7 = ppppppplStack_1b8;
    param_3 = unaff_x19;
  }
  func_0x00010b8e0a44(ppppppplVar7);
  unaff_x19 = ppppppplVar20;
  ppppppplVar8 = param_1;
LAB_10b90992c:
  ppppppplVar7 = &pppppplStack_a8;
  func_0x000107c2a668();
LAB_10b909934:
  func_0x00010b90fc10(uStack_70);
  ppppppplVar22 = unaff_x19;
  param_1 = ppppppplVar8;
  if ((bool)uVar6) {
    return ppppppplVar7;
  }
LAB_10b9099e0:
  unaff_x19 = ppppppplVar22;
  uVar6 = 0;
  ___stack_chk_fail();
  uStack_1d8 = 0x10b9099e4;
  pppppplStack_230 = unaff_x28;
  pppppplStack_228 = unaff_x27;
  ppppppplStack_220 = param_2;
  ppppppplStack_218 = unaff_x25;
  ppppppplStack_210 = unaff_x24;
  ppppppplStack_208 = param_3;
  pppppplStack_200 = param_4;
  ppppppplStack_1f8 = unaff_x21;
  ppppppplStack_1f0 = param_1;
  ppppppplStack_1e8 = unaff_x19;
  ppppppplStack_1e0 = ppppppplVar13;
  func_0x00010b910148();
  func_0x00010b90fcb8();
  ppppppplVar8 = &pppppplStack_2e8;
  ppppppplStack_318 = (long *******)0xffffffffffffffff;
  ppppppplStack_320 = (long *******)0x1;
  if (unaff_x19[0x16] != (long ******)0x0) {
    func_0x00010b9106f0();
    FUN_10b90ef68(auStack_300,extraout_x8_30 + extraout_x9_29 * 0x38);
    func_0x00010b9106f0();
    FUN_10b907a40(extraout_x8_31 + extraout_x9_30 * 0x38);
    pppppplVar27 = (long ******)((long)unaff_x19[0x15] + (long)ppppppplStack_320);
    unaff_x19[0x16] = (long ******)((long)unaff_x19[0x16] + (long)ppppppplStack_318);
    unaff_x19[0x15] = pppppplVar27;
    uVar6 = pppppplVar27 == (long ******)0x92;
    if ((long ******)0x91 < pppppplVar27) {
      __ZdlPv(*unaff_x19[0x12]);
      unaff_x19[0x12] = unaff_x19[0x12] + 1;
      unaff_x19[0x15] = (long ******)((long)unaff_x19[0x15] + -0x49);
    }
    ppppppplVar13 = (long *******)&ppppppplStack_1e0;
    if ((*unaff_x19 == (long ******)0x0) && (ppppppplStack_2d8 != (long *******)0x0)) {
      func_0x00010b90a0f0(unaff_x19 + 2,auStack_300);
      func_0x00010b9108e0(unaff_x19[2]);
      if ((bool)uVar6) {
        ppppppplStack_280 = ppppppplStack_2d8 + 3;
        uStack_278 = 1;
        __ZNSt3__115recursive_mutex4lockEv();
        ppppppplStack_288 = ppppppplStack_2d8;
        uStack_290 = (long *******)((ulong)uStack_290 & 0xffffffffffffff);
        ppppppplVar17 = (long *******)&ppppppplStack_288;
        ppppppplVar20 = ppppppplVar8;
        FUN_10b994bf0(&lStack_258,ppppppplVar17,ppppppplVar8,1,(long)&uStack_290 + 7);
        if (lStack_258 == 1) {
          ppppppplVar8 = apppppplStack_250;
          if (uStack_290._7_1_ == '\x01') {
            FUN_10b994158(ppppppplStack_2d8,auStack_300,apppppplStack_250);
          }
        }
        else {
          func_0x000107c31084();
          func_0x00010b98fa8c(&ppppppplStack_2c8,auStack_300);
          ppppppplVar7 = (long *******)&ppppppplStack_2c8;
          func_0x000107c27e5c();
          ppppppplStack_270 = ppppppplVar7;
          ppppppplStack_268 = ppppppplVar20;
          func_0x000107c2793c(&UNK_10f7cd364);
          func_0x00010b910140(&ppppppplStack_2b0);
          func_0x000107c31080(&ppppppplStack_298,ppppppplVar17,&ppppppplStack_2b0);
          FUN_10b99fa14(&ppppppplStack_270,apppppplStack_250,&ppppppplStack_298);
          func_0x00010b910590();
          func_0x000104bda960(ppppppplStack_270);
          func_0x000107c278f8(ppppppplStack_298);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppppplStack_2b0);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppppplStack_2c8);
        }
        ppppppplVar22 = &pppppplStack_310;
        unaff_x30 = 0x10b909c30;
        ppppppplVar20 = (long *******)&ppppppplStack_320;
        goto code_r0x0001003adcc0;
      }
    }
    ppppppplVar22 = &pppppplStack_310;
    unaff_x30 = 0x10b909ae0;
    ppppppplVar20 = (long *******)&ppppppplStack_320;
    goto code_r0x0001003adcc0;
  }
  func_0x00010b90fc10(extraout_x8_29);
  if ((bool)uVar6) {
    return ppppppplVar7;
  }
  ___stack_chk_fail();
  ppppppplVar13 = (long *******)0x10b909c88;
  func_0x00010b910948();
  ppppppplStack_220 = (long *******)&ppppppplStack_1e0;
  ppppppplStack_218 = ppppppplVar13;
  ppppppplStack_318 = ppppppplVar7;
  (*(code *)(*ppppppplVar17)[4])(&ppppppplStack_2a0,ppppppplVar17);
  pcVar9 = (char *)apppppplStack_2f8;
  func_0x000107c31030(pcVar9,&ppppppplStack_2a0);
  func_0x00010b910460();
  pppppplVar27 = ppppppplVar11[1];
  func_0x00010b910530();
  pcVar9[8] = '\x01';
  pcVar9[9] = '\0';
  pcVar9[10] = '\0';
  pcVar9[0xb] = '\0';
  pcVar9[0xc] = '\0';
  pcVar9[0xd] = '\0';
  pcVar9[0xe] = '\0';
  pcVar9[0xf] = '\0';
  *(undefined ***)pcVar9 = &PTR_FUN_110d74a90;
  if (pppppplVar27 != (long ******)0x0) {
    do {
      func_0x00010b90fe5c();
    } while (extraout_w10_24 != 0);
  }
  *(undefined ***)pcVar9 = &PTR_FUN_110d74a10;
  pcVar9[0x18] = '\0';
  pcVar9[0x19] = '\0';
  pcVar9[0x1a] = '\0';
  pcVar9[0x1b] = '\0';
  pcVar9[0x1c] = '\0';
  pcVar9[0x1d] = '\0';
  pcVar9[0x1e] = '\0';
  pcVar9[0x1f] = '\0';
  pcVar9[0x20] = '\0';
  pcVar9[0x21] = '\0';
  pcVar9[0x22] = '\0';
  pcVar9[0x23] = '\0';
  pcVar9[0x24] = '\0';
  pcVar9[0x25] = '\0';
  pcVar9[0x26] = '\0';
  pcVar9[0x27] = '\0';
  *(long *******)(pcVar9 + 0x10) = pppppplVar27;
  pcVar9[0x28] = cVar5;
  if ((char)apppppplStack_2f8[0] == '\n') {
    pcVar10 = (char *)apppppplStack_2f8;
    FUN_10b9905a4(pcVar10);
    func_0x000107c30fa8(&ppppppplStack_2c8,pcVar10 + 0x10);
    ppppppplVar13 = (long *******)&ppppppplStack_2c8;
    func_0x000107c31030(&ppppppplStack_2a0);
    func_0x00010b910460();
  }
  else {
    ppppppplVar13 = apppppplStack_2f8;
    func_0x000107c30df0(&ppppppplStack_2a0);
  }
  ppppppplVar20 = uStack_290;
  FUN_10b90a560(uStack_290);
  pppppplVar27 = ppppppplVar11[0xb];
  func_0x00010b91093c((ulong)ppppppplVar20 >> 7);
  ppppppplStack_320 = (long *******)(extraout_x9_31 * extraout_x10_00);
  uVar24 = extraout_x8_32;
  lVar23 = extraout_x11_02;
  while( true ) {
    uVar24 = uVar24 & (ulong)pppppplVar27;
    uVar26 = *(ulong *)((long)ppppppplVar11[8] + uVar24);
    for (uVar18 = (uVar26 ^ (ulong)ppppppplStack_320) + 0xfefefefefefefeff &
                  (uVar26 ^ (ulong)ppppppplStack_320 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar18 != 0; uVar18 = uVar18 - 1 & uVar18) {
      uVar21 = (uVar18 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar18 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
      uVar21 = uVar24 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3) & (ulong)pppppplVar27
      ;
      pppppplVar16 = ppppppplVar11[9];
      ppppppplVar13 = (long *******)&ppppppplStack_2a0;
      FUN_10b9909a8();
      if (((ulong)pppppplVar16 & 1) != 0) {
        puVar15 = (undefined *)((long)ppppppplVar11[8] + uVar21);
        unaff_x19 = (long *******)(ppppppplVar11[9] + uVar21 * 4);
        goto LAB_10b909e34;
      }
    }
    if ((uVar26 & ~uVar26 << 6 & 0x8080808080808080) != 0) break;
    lVar23 = lVar23 + 8;
    uVar24 = lVar23 + uVar24;
  }
  puVar15 = (undefined *)((long)ppppppplVar11[8] + (long)ppppppplVar11[0xb]);
  unaff_x19 = (long *******)0x0;
LAB_10b909e34:
  func_0x00010b9100a0(&ppppppplStack_2a0);
  if ((undefined *)((long)ppppppplVar11[8] + (long)ppppppplVar11[0xb]) != puVar15) {
    ppppppplVar13 = unaff_x19 + 3;
    FUN_10b90a578(pcVar9 + 0x20);
  }
  (*(code *)(*ppppppplVar17)[5])(&pppppplStack_308,ppppppplVar17);
  (*(code *)(*ppppppplVar17)[6])(&pppppplStack_310,ppppppplVar17);
  ppppppplVar17 = ppppppplVar11 + 0x11;
  func_0x00010b90a5e0();
  if (ppppppplVar17 == (long *******)0x0) {
    if (ppppppplVar11[0x15] < (long ******)0x49) {
      unaff_x19 = (long *******)ppppppplVar11[0x14];
      ppppppplVar20 = (long *******)ppppppplVar11[0x13];
      uVar18 = (long)ppppppplVar20 - (long)ppppppplVar11[0x12];
      uVar24 = (long)unaff_x19 - (long)ppppppplVar11[0x11];
      if (uVar18 < uVar24) {
        func_0x00010b9105fc();
        if (unaff_x19 == ppppppplVar20) {
          FUN_10b90a738(ppppppplVar11 + 0x11,ppppppplVar17);
          goto LAB_10b909ea0;
        }
        func_0x00010b90a6a4();
      }
      else {
        ppppppplVar17 = (long *******)((long)uVar24 >> 2);
        if (unaff_x19 == (long *******)ppppppplVar11[0x11]) {
          ppppppplVar17 = (long *******)0x1;
        }
        ppppppplStack_2a8 = ppppppplVar11 + 0x14;
        func_0x00010b90a8a4();
        ppppppplStack_2c0 = (long *******)((long)ppppppplVar17 + uVar18);
        ppppppplStack_2b0 = ppppppplVar17 + (long)ppppppplVar13;
        ppppppplStack_2c8 = ppppppplVar17;
        ppppppplStack_2b8 = ppppppplStack_2c0;
        func_0x00010b9105fc();
        uStack_2d0 = 0x49;
        ppppppplStack_2d8 = ppppppplVar11 + 0x16;
        FUN_10b90a7dc(&ppppppplStack_2c8);
        uStack_2e0 = 0;
        pppppplVar27 = ppppppplVar11[0x13];
        ppppppplStack_320 = ppppppplStack_2a8;
        ppppppplVar13 = ppppppplStack_2b8;
        ppppppplVar20 = ppppppplStack_2c8;
        ppppppplVar7 = ppppppplStack_2c0;
        ppppppplVar8 = ppppppplStack_2b0;
        while (pppppplVar16 = ppppppplVar11[0x12], pppppplVar27 != pppppplVar16) {
          ppppppplVar22 = ppppppplVar7;
          if (ppppppplVar7 == ppppppplVar20) {
            if (ppppppplVar13 < ppppppplVar8) {
              lVar23 = (long)ppppppplVar13 - (long)ppppppplVar20;
              ppppppplVar1 = ppppppplVar13 +
                             (((long)ppppppplVar8 - (long)ppppppplVar13 >> 3) + 1) / 2;
              ppppppplVar22 =
                   (long *******)((long)ppppppplVar1 - ((long)ppppppplVar13 - (long)ppppppplVar20));
              ppppppplVar13 = ppppppplVar1;
              if (lVar23 != 0) {
                _memmove(ppppppplVar22,ppppppplVar7,lVar23);
                ppppppplVar17 = ppppppplVar7;
              }
            }
            else {
              ppppppplVar22 = (long *******)((long)ppppppplVar8 - (long)ppppppplVar20 >> 2);
              if ((long)ppppppplVar8 - (long)ppppppplVar20 == 0) {
                ppppppplVar22 = (long *******)0x1;
              }
              lVar23 = (long)ppppppplVar22 * 2;
              ppppppplStack_280 = ppppppplStack_320;
              func_0x00010b90a8a4();
              ppppppplStack_298 =
                   (long *******)((long)ppppppplVar22 + (lVar23 + 6U & 0xfffffffffffffff8));
              ppppppplStack_288 = ppppppplVar22 + (long)ppppppplVar17;
              ppppppplVar17 = ppppppplVar20;
              ppppppplStack_2a0 = ppppppplVar22;
              uStack_290 = ppppppplStack_298;
              FUN_10b90a87c(&ppppppplStack_2a0,ppppppplVar20,ppppppplVar13);
              ppppppplVar3 = ppppppplStack_288;
              ppppppplVar1 = uStack_290;
              ppppppplVar22 = ppppppplStack_298;
              unaff_x19 = ppppppplStack_2a0;
              ppppppplStack_2a0 = ppppppplVar20;
              ppppppplStack_298 = ppppppplVar7;
              uStack_290 = ppppppplVar13;
              ppppppplStack_288 = ppppppplVar8;
              func_0x00010b90a900(&ppppppplStack_2a0);
              ppppppplVar13 = ppppppplVar1;
              ppppppplVar20 = unaff_x19;
              ppppppplVar8 = ppppppplVar3;
            }
          }
          pppppplVar27 = pppppplVar27 + -1;
          ppppppplVar7 = ppppppplVar22 + -1;
          *ppppppplVar7 = (long ******)*pppppplVar27;
        }
        ppppppplStack_2c8 = (long *******)ppppppplVar11[0x11];
        ppppppplVar11[0x11] = (long ******)ppppppplVar20;
        ppppppplVar11[0x12] = (long ******)ppppppplVar7;
        ppppppplStack_2c0 = (long *******)pppppplVar16;
        ppppppplStack_2b0 = (long *******)ppppppplVar11[0x14];
        ppppppplStack_2b8 = (long *******)ppppppplVar11[0x13];
        ppppppplVar11[0x13] = (long ******)ppppppplVar13;
        ppppppplVar11[0x14] = (long ******)ppppppplVar8;
        func_0x00010b90a8d8(&uStack_2e0);
        func_0x00010b90a900(&ppppppplStack_2c8);
      }
    }
    else {
      ppppppplVar11[0x15] = (long ******)((long)ppppppplVar11[0x15] + -0x49);
LAB_10b909ea0:
      ppppplVar12 = *ppppppplVar11[0x12];
      ppppppplVar11[0x12] = ppppppplVar11[0x12] + 1;
      FUN_10b90a610(ppppppplVar11 + 0x11,ppppplVar12);
    }
  }
  ppppppplVar22 = ppppppplVar11 + 0x11;
  func_0x00010b907a08(ppppppplVar22);
  func_0x000107c30df0();
  ppppppplVar22 = ppppppplVar22 + 3;
  ppppppplVar8 = &pppppplStack_308;
  unaff_x30 = 0x10b90a068;
  ppppppplVar20 = (long *******)&ppppppplStack_320;
  param_1 = ppppppplVar11;
  ppppppplVar13 = (long *******)&ppppppplStack_220;
code_r0x0001003adcc0:
  *(long ********)((long)ppppppplVar20 + -0x20) = param_1;
  *(long ********)((long)ppppppplVar20 + -0x18) = unaff_x19;
  *(long ********)((long)ppppppplVar20 + -0x10) = ppppppplVar13;
  *(undefined8 *)((long)ppppppplVar20 + -8) = unaff_x30;
  func_0x0001003adda4(ppppppplVar22);
  pppppplVar27 = ppppppplVar8[1];
  if (pppppplVar27 != (long ******)0x0) {
    (*(code *)(*pppppplVar27)[2])(pppppplVar27);
  }
  unaff_x19[1] = pppppplVar27;
  func_0x0001003addd4();
  return unaff_x19;
}



/* Entry: 10b90a1e0; end: 10b90a21b;  */

long FUN_10b90a1e0(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    func_0x00010b90e9f4();
    lVar2 = uVar1 + 0x10;
  }
  else {
    lVar2 = param_1;
    func_0x00010b90ea1c();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x10;
}



/* Entry: 10b90a21c; end: 10b90a21f;  */

undefined8 * FUN_10b90a21c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d74a10;
  func_0x00010b90f6a0(param_1 + 4);
  *param_1 = &PTR_FUN_110d74a90;
  FUN_10b907ef4(param_1 + 2);
  return param_1;
}



/* Entry: 10b90a220; end: 10b90a233;  */

void FUN_10b90a220(void)

{
  FUN_10b90a484();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b90a234; end: 10b90a23b;  */

undefined1 FUN_10b90a234(long param_1)

{
  return *(undefined1 *)(param_1 + 0x28);
}



/* Entry: 10b90a23c; end: 10b90a327;  */

void FUN_10b90a23c(code *param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long *plVar2;
  long *plVar3;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 extraout_x8_02;
  long *unaff_x19;
  undefined8 unaff_x21;
  long alStack_d8 [4];
  undefined8 uStack_b8;
  undefined1 auStack_58 [32];
  undefined8 uStack_38;
  
  UNRECOVERED_JUMPTABLE_00 = param_1;
  func_0x00010b90fc50();
  plVar2 = *(long **)(UNRECOVERED_JUMPTABLE_00 + 0x18);
  uStack_38 = extraout_x8;
  if (plVar2 == (long *)0x0) {
    func_0x00010b910558();
    UNRECOVERED_JUMPTABLE_00 = param_1;
    func_0x00010b90a4dc();
    func_0x00010b9103cc();
LAB_10b90a310:
    func_0x00010b90fc10(uStack_38);
    plVar2 = unaff_x19;
    if ((bool)in_ZR) {
      return;
    }
  }
  else {
    in_ZR = param_1[0x28] == (code)0x1 && *(byte *)(param_2 + 8) == 1;
    if (param_1[0x28] != (code)0x1 || 1 < *(byte *)(param_2 + 8)) {
      func_0x00010b910044();
      func_0x00010b9101f8(auStack_58);
      if ((*(long *)(param_1 + 0x20) == 0) || ((*(byte *)(param_4 + 8) & 1) == 0)) {
        UNRECOVERED_JUMPTABLE_00 = (code *)auStack_58;
        func_0x00010b9104b4(*(long *)(param_1 + 0x20),UNRECOVERED_JUMPTABLE_00);
      }
      else {
        func_0x00010b910044();
        UNRECOVERED_JUMPTABLE_00 = (code *)auStack_58;
        func_0x00010b9101f8();
      }
      unaff_x19 = (long *)auStack_58;
      func_0x0001080e0bc0();
      unaff_x21 = param_3;
      goto LAB_10b90a310;
    }
    func_0x00010b9106d8();
    UNRECOVERED_JUMPTABLE_00 = *(code **)(extraout_x8_00 + 0x28);
    func_0x00010b90fc10(uStack_38);
    if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010b90a2fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
  }
  uVar1 = 0;
  ___stack_chk_fail();
  func_0x00010b90fcb8();
  uStack_b8 = extraout_x8_02;
  if (plVar2[3] == 0) {
    func_0x00010b910558();
    func_0x00010b9100a8();
    func_0x00010b9103cc();
  }
  else {
    func_0x00010b9104fc();
    uVar1 = (char)plVar2[5] == '\x01';
    if ((bool)uVar1) {
      plVar3 = (long *)plVar2[2];
      (**(code **)(*plVar3 + 0x128))(plVar3,param_1);
      if ((int)plVar3 != 0) {
        *(undefined2 *)(extraout_x8_01 + 1) = 1;
        *extraout_x8_01 = 0;
        plVar2 = plVar3;
        goto LAB_10b90a43c;
      }
    }
    if (plVar2[4] == 0) {
      plVar2 = (long *)plVar2[3];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar2 + 0x30);
      func_0x00010b90fc10(uStack_b8);
      if ((bool)uVar1) {
        func_0x00010b9103a0(extraout_x8_01);
                    /* WARNING: Could not recover jumptable at 0x00010b90a42c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return;
      }
      goto LAB_10b90a450;
    }
    func_0x00010b91025c(alStack_d8,plVar2[4],UNRECOVERED_JUMPTABLE_00,param_1,unaff_x21);
    if ((*(byte *)(param_5 + 8) & 1) == 0) {
      func_0x00010b9108ec();
    }
    else {
      func_0x00010b910194(plVar2[3]);
      func_0x00010b91025c(extraout_x8_01);
    }
    plVar2 = alStack_d8;
    func_0x0001080e0bc0();
  }
LAB_10b90a43c:
  func_0x00010b90fc10(uStack_b8);
  if ((bool)uVar1) {
    return;
  }
LAB_10b90a450:
  ___stack_chk_fail();
  if (((*(byte *)(plVar2 + 5) & 1) == 0) && (plVar3 = (long *)plVar2[3], plVar3 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010b90a470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x38))(plVar3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010b90fe78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)plVar2[2] + 0x28))();
  return;
}



/* Entry: 10b90a328; end: 10b90a453;  */

void FUN_10b90a328(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined1 in_ZR;
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 extraout_x8;
  long alStack_68 [4];
  undefined8 uStack_48;
  
  func_0x00010b90fcb8();
  uStack_48 = extraout_x8;
  if (param_2[3] == 0) {
    func_0x00010b910558();
    func_0x00010b9100a8();
    func_0x00010b9103cc();
  }
  else {
    func_0x00010b9104fc();
    in_ZR = (char)param_2[5] == '\x01';
    if ((bool)in_ZR) {
      plVar1 = (long *)param_2[2];
      (**(code **)(*plVar1 + 0x128))();
      if ((int)plVar1 != 0) {
        *(undefined2 *)(param_1 + 1) = 1;
        *param_1 = 0;
        param_2 = plVar1;
        goto LAB_10b90a43c;
      }
    }
    if (param_2[4] == 0) {
      param_2 = (long *)param_2[3];
      UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x30);
      func_0x00010b90fc10(uStack_48);
      if ((bool)in_ZR) {
        func_0x00010b9103a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010b90a42c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      goto LAB_10b90a450;
    }
    func_0x00010b91025c(alStack_68,param_2[4],param_3);
    if ((*(byte *)(param_6 + 8) & 1) == 0) {
      func_0x00010b9108ec();
    }
    else {
      func_0x00010b910194(param_2[3]);
      func_0x00010b91025c(param_1);
    }
    param_2 = alStack_68;
    func_0x0001080e0bc0();
  }
LAB_10b90a43c:
  func_0x00010b90fc10(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
LAB_10b90a450:
  ___stack_chk_fail();
  if (((*(byte *)(param_2 + 5) & 1) == 0) && (plVar1 = (long *)param_2[3], plVar1 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010b90a470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x38))(plVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010b90fe78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_2[2] + 0x28))();
  return;
}



/* Entry: 10b90a454; end: 10b90a483;  */

void FUN_10b90a454(long param_1)

{
  long *plVar1;
  
  if (((*(byte *)(param_1 + 0x28) & 1) == 0) &&
     (plVar1 = *(long **)(param_1 + 0x18), plVar1 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010b90a470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x38))(plVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010b90fe78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x28))();
  return;
}



/* Entry: 10b90a484; end: 10b90a55f;  */

undefined8 * FUN_10b90a484(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d74a10;
  func_0x00010b90f6a0(param_1 + 4);
  *param_1 = &PTR_FUN_110d74a90;
  FUN_10b907ef4(param_1 + 2);
  return param_1;
}



/* Entry: 10b90a560; end: 10b90a577;  */

void FUN_10b90a560(void)

{
  func_0x00010b910444();
  return;
}



/* Entry: 10b90a578; end: 10b90a5b7;  */

void FUN_10b90a578(undefined8 param_1,long *param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 uVar1;
  int extraout_w11;
  undefined8 *unaff_x19;
  
  func_0x00010b910720();
  if (!(bool)in_ZR) {
    uVar1 = 0;
    if (*param_2 != 0) {
      do {
        func_0x00010b90fce8();
        uVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    *unaff_x19 = uVar1;
    FUN_10b90a5b8();
  }
  return;
}



/* Entry: 10b90a5b8; end: 10b90a60f;  */

void FUN_10b90a5b8(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined8 *extraout_x8;
  undefined8 extraout_x9;
  
  if (param_1 != (long *)0x0) {
    do {
      func_0x000107c39f2c();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_x9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010b90fd54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10b90a610; end: 10b90a737;  */

void FUN_10b90a610(void)

{
  undefined1 in_ZR;
  bool bVar1;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *puVar2;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  
  func_0x00010b910964();
  func_0x00010b910148();
  func_0x00010b910338();
  puVar2 = extraout_x8;
  if ((bool)in_ZR) {
    bVar1 = unaff_x19[1] == *unaff_x19;
    if (*unaff_x19 < unaff_x19[1]) {
      func_0x00010b9101a0();
      if (!bVar1) {
        func_0x00010b9103c0();
      }
      func_0x00010b91060c();
      puVar2 = extraout_x8_00;
    }
    else {
      func_0x00010b910770();
      FUN_10b90a87c();
      func_0x00010b90fc78();
      puVar2 = (undefined8 *)unaff_x19[2];
    }
  }
  *puVar2 = unaff_x20;
  unaff_x19[2] = (ulong)(puVar2 + 1);
  return;
}



/* Entry: 10b90a738; end: 10b90a7db;  */

void FUN_10b90a738(ulong *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x10;
  long unaff_x19;
  undefined8 unaff_x20;
  ulong unaff_x21;
  ulong uVar4;
  long unaff_x22;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  func_0x00010b910148();
  uVar4 = param_1[1];
  bVar1 = *param_1 <= uVar4;
  uVar2 = uVar4 == *param_1;
  if ((bool)uVar2) {
    func_0x00010b910338();
    if (bVar1) {
      lVar3 = (long)(extraout_x10 - uVar4) >> 2;
      if (extraout_x10 - uVar4 == 0) {
        lVar3 = 1;
      }
      func_0x00010b910738();
      lStack_58 = lVar3 + (unaff_x21 + 6 & 0xfffffffffffffff8);
      lStack_48 = lVar3 + uVar4 * 8;
      lStack_60 = lVar3;
      lStack_50 = lStack_58;
      FUN_10b90a87c(&lStack_60,*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 0x10));
      func_0x00010b90fc78();
      uVar4 = *(ulong *)(unaff_x19 + 8);
    }
    else {
      func_0x00010b9102f4();
      lVar3 = extraout_x8;
      if (!(bool)uVar2) {
        _memmove();
        lVar3 = *(long *)(unaff_x19 + 0x10);
      }
      *(long *)(unaff_x19 + 0x10) = lVar3 + unaff_x22 * 8;
      uVar4 = unaff_x21;
    }
  }
  *(undefined8 *)(uVar4 - 8) = unaff_x20;
  *(undefined8 **)(unaff_x19 + 8) = (undefined8 *)(uVar4 - 8);
  return;
}



/* Entry: 10b90a7dc; end: 10b90a87b;  */

void FUN_10b90a7dc(long param_1)

{
  bool bVar1;
  undefined8 *extraout_x8;
  undefined8 *puVar2;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  
  func_0x00010b910964();
  func_0x00010b910148();
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  if (puVar2 == *(undefined8 **)(param_1 + 0x18)) {
    bVar1 = unaff_x19[1] == *unaff_x19;
    if (*unaff_x19 < unaff_x19[1]) {
      func_0x00010b9101a0();
      if (!bVar1) {
        func_0x00010b9103c0();
      }
      func_0x00010b91060c();
      puVar2 = extraout_x8;
    }
    else {
      FUN_10b90a8a4();
      FUN_10b90a87c();
      func_0x00010b90fc78();
      puVar2 = (undefined8 *)unaff_x19[2];
    }
  }
  *puVar2 = unaff_x20;
  unaff_x19[2] = (ulong)(puVar2 + 1);
  return;
}



/* Entry: 10b90a87c; end: 10b90a8a3;  */

void FUN_10b90a87c(long param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  param_3 = param_3 - (long)param_2;
  lVar1 = (long)*(undefined8 **)(param_1 + 0x10) + param_3;
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  for (; param_3 != 0; param_3 = param_3 + -8) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10b90a8a4; end: 10b90a97b;  */

void FUN_10b90a8a4(ulong param_1)

{
  undefined8 *unaff_x19;
  
  if (param_1 >> 0x3d == 0) {
    __Znwm(param_1 << 3);
    return;
  }
  func_0x000104bfe188();
  func_0x00010b9105f0();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10b90a97c; end: 10b90a993;  */

void FUN_10b90a97c(void)

{
  func_0x00010b910444();
  return;
}



/* Entry: 10b90a994; end: 10b90a997;  */

undefined8 * FUN_10b90a994(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d74a90;
  FUN_10b907ef4(param_1 + 2);
  return param_1;
}



/* Entry: 10b90a998; end: 10b90a9ab;  */

void FUN_10b90a998(void)

{
  func_0x00010b90a4b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b90a9ac; end: 10b90a9c7;  */

void FUN_10b90a9ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b910544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
  return;
}



/* Entry: 10b90a9c8; end: 10b90a9db;  */

void FUN_10b90a9c8(void)

{
  FUN_10b90aa88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b90a9dc; end: 10b90a9fb;  */

undefined8 FUN_10b90a9dc(void)

{
  return 1;
}



/* Entry: 10b90a9fc; end: 10b90aa87;  */

void FUN_10b90a9fc(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_2 + 0x10);
  (**(code **)(*plVar1 + 0x128))(plVar1,param_4);
  if ((int)plVar1 != 0) {
    *(undefined2 *)(param_1 + 1) = 1;
    *param_1 = 0;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010b90aa84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_2 + 0x18) + 0x30))
            (param_1,*(long **)(param_2 + 0x18),param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 10b90aa88; end: 10b90aaaf;  */

undefined8 * FUN_10b90aa88(undefined8 *param_1)

{
  func_0x00010b9105d8(&PTR_DAT_110d74b48);
  *param_1 = &PTR_FUN_110d74a90;
  FUN_10b907ef4(param_1 + 2);
  return param_1;
}



/* Entry: 10b90aab0; end: 10b90aab3;  */

undefined8 * FUN_10b90aab0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d74a90;
  FUN_10b907ef4(param_1 + 2);
  return param_1;
}



/* Entry: 10b90aab4; end: 10b90aac7;  */

void FUN_10b90aab4(void)

{
  func_0x00010b90a4b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b90aac8; end: 10b90ab07;  */

void FUN_10b90aac8(code *UNRECOVERED_JUMPTABLE)

{
  code *UNRECOVERED_JUMPTABLE_00;
  long extraout_x8;
  uint extraout_w9;
  
  func_0x00010b90fc24();
  FUN_10b9aaa1c();
  func_0x00010b90fe4c();
  if ((extraout_w9 & 1) != 0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(extraout_x8 + 0x68);
    func_0x00010b9104e4();
                    /* WARNING: Could not recover jumptable at 0x00010b9100ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  func_0x00010b910388();
                    /* WARNING: Could not recover jumptable at 0x00010b90fd78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10b90ab08; end: 10b90ab33;  */

void FUN_10b90ab08(undefined1 param_1)

{
  long extraout_x8;
  undefined1 *unaff_x19;
  
  func_0x00010b90fc64();
  func_0x00010b910570(*(undefined8 *)(extraout_x8 + 0x168));
  *(undefined2 *)(unaff_x19 + 8) = 7;
  *unaff_x19 = param_1;
  return;
}



/* Entry: 10b90ab34; end: 10b90ab37;  */

undefined8 * FUN_10b90ab34(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d74a90;
  FUN_10b907ef4(param_1 + 2);
  return param_1;
}



/* Entry: 10b90ab38; end: 10b90ab4b;  */

void FUN_10b90ab38(void)

{
  func_0x00010b90a4b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b90ab4c; end: 10b90ab8b;  */

void FUN_10b90ab4c(code *UNRECOVERED_JUMPTABLE)

{
  code *UNRECOVERED_JUMPTABLE_00;
  long extraout_x8;
  uint extraout_w9;
  
  func_0x00010b90fc24();
  FUN_10b9aaa1c();
  func_0x00010b90fe4c();
  if ((extraout_w9 & 1) != 0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(extraout_x8 + 0x60);
    func_0x00010b9104e4();
                    /* WARNING: Could not recover jumptable at 0x00010b9100ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  func_0x00010b910388();
                    /* WARNING: Could not recover jumptable at 0x00010b90fd78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10b90ab8c; end: 10b90abb7;  */

void FUN_10b90ab8c(undefined1 param_1)

{
  long extraout_x8;
  undefined1 *unaff_x19;
  
  func_0x00010b90fc64();
  func_0x00010b910570(*(undefined8 *)(extraout_x8 + 0x148));
  *(undefined2 *)(unaff_x19 + 8) = 7;
  *unaff_x19 = param_1;
  return;
}



/* Entry: 10b90abb8; end: 10b90abd3;  */

void FUN_10b90abb8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010b90abcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x60))(*(long **)(param_1 + 0x10),0,param_2);
  return;
}



/* Entry: 10b90abd4; end: 10b90abe7;  */

void FUN_10b90abd4(void)

{
  func_0x00010b90a4b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b90abe8; end: 10b90ac27;  */

void FUN_10b90abe8(code *UNRECOVERED_JUMPTABLE)

{
  code *UNRECOVERED_JUMPTABLE_00;
  long extraout_x8;
  uint extraout_w9;
  
  func_0x00010b90fc24();
  FUN_10b9aa97c();
  func_0x00010b90fe4c();
  if ((extraout_w9 & 1) != 0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(extraout_x8 + 0x38);
    func_0x00010b9104e4();
                    /* WARNING: Could not recover jumptable at 0x00010b9100ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  func_0x00010b910388();
                    /* WARNING: Could not recover jumptable at 0x00010b90fd78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10b90ac28; end: 10b90ac53;  */

void FUN_10b90ac28(undefined4 param_1)

{
  long extraout_x8;
  undefined4 *unaff_x19;
  
  func_0x00010b90fc64();
  func_0x00010b910570(*(undefined8 *)(extraout_x8 + 0x150));
  *(undefined2 *)(unaff_x19 + 2) = 4;
  *unaff_x19 = param_1;
  return;
}



/* Entry: 10b90ac54; end: 10b90ac57;  */

undefined8 * FUN_10b90ac54(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d74a90;
  FUN_10b907ef4(param_1 + 2);
  return param_1;
}



/* Entry: 10b90ac58; end: 10b90ac6b;  */

void FUN_10b90ac58(void)

{
  func_0x00010b90a4b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b90ac6c; end: 10b90acab;  */

void FUN_10b90ac6c(code *UNRECOVERED_JUMPTABLE)

{
  code *UNRECOVERED_JUMPTABLE_00;
  long extraout_x8;
  uint extraout_w9;
  
  func_0x00010b90fc24();
  FUN_10b9aa97c();
  func_0x00010b90fe4c();
  if ((extraout_w9 & 1) != 0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(extraout_x8 + 0x30);
    func_0x00010b9104e4();
                    /* WARNING: Could not recover jumptable at 0x00010b9100ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  func_0x00010b910388();
                    /* WARNING: Could not recover jumptable at 0x00010b90fd78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10b90acac; end: 10b90acd7;  */

void FUN_10b90acac(undefined4 param_1)

{
  long extraout_x8;
  undefined4 *unaff_x19;
  
  func_0x00010b90fc64();
  func_0x00010b910570(*(undefined8 *)(extraout_x8 + 0x130));
  *(undefined2 *)(unaff_x19 + 2) = 4;
  *unaff_x19 = param_1;
  return;
}



/* Entry: 10b90acd8; end: 10b90acf3;  */

void FUN_10b90acd8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010b90acec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x30))(*(long **)(param_1 + 0x10),0,param_2);
  return;
}



/* Entry: 10b90acf4; end: 10b90ad07;  */

void FUN_10b90acf4(void)

{
  func_0x00010b90a4b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b90ad08; end: 10b90ad47;  */

void FUN_10b90ad08(code *UNRECOVERED_JUMPTABLE)

{
  code *UNRECOVERED_JUMPTABLE_00;
  long extraout_x8;
  uint extraout_w9;
  
  func_0x00010b90fc24();
  FUN_10b9aa9cc();
  func_0x00010b90fe4c();
  if ((extraout_w9 & 1) != 0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(extraout_x8 + 0x48);
    func_0x00010b9104e4();
                    /* WARNING: Could not recover jumptable at 0x00010b910848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  func_0x00010b910388();
                    /* WARNING: Could not recover jumptable at 0x00010b90fd78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10b90ad48; end: 10b90ad73;  */

void FUN_10b90ad48(undefined8 param_1)

{
  long extraout_x8;
  undefined8 *unaff_x19;
  
  func_0x00010b90fc64();
  func_0x00010b910800(*(undefined8 *)(extraout_x8 + 0x158));
  *(undefined2 *)(unaff_x19 + 1) = 5;
  *unaff_x19 = param_1;
  return;
}



/* Entry: 10b90ad74; end: 10b90ad77;  */

undefined8 * FUN_10b90ad74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d74a90;
  FUN_10b907ef4(param_1 + 2);
  return param_1;
}



/* Entry: 10b90ad78; end: 10b90ad8b;  */

void FUN_10b90ad78(void)

{
  func_0x00010b90a4b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b90ad8c; end: 10b90adcb;  */

void FUN_10b90ad8c(code *UNRECOVERED_JUMPTABLE)

{
  code *UNRECOVERED_JUMPTABLE_00;
  long extraout_x8;
  uint extraout_w9;
  
  func_0x00010b90fc24();
  FUN_10b9aa9cc();
  func_0x00010b90fe4c();
  if ((extraout_w9 & 1) != 0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(extraout_x8 + 0x40);
    func_0x00010b9104e4();
                    /* WARNING: Could not recover jumptable at 0x00010b910848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  func_0x00010b910388();
                    /* WARNING: Could not recover jumptable at 0x00010b90fd78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10b90adcc; end: 10b90adf7;  */

void FUN_10b90adcc(undefined8 param_1)

{
  long extraout_x8;
  undefined8 *unaff_x19;
  
  func_0x00010b90fc64();
  func_0x00010b910800(*(undefined8 *)(extraout_x8 + 0x138));
  *(undefined2 *)(unaff_x19 + 1) = 5;
  *unaff_x19 = param_1;
  return;
}



/* Entry: 10b90adf8; end: 10b90ae13;  */

void FUN_10b90adf8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010b90ae0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x40))(*(long **)(param_1 + 0x10),0,param_2);
  return;
}



/* Entry: 10b90ae14; end: 10b90ae27;  */

void FUN_10b90ae14(void)

{
  func_0x00010b90a4b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b90ae28; end: 10b90ae67;  */

void FUN_10b90ae28(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
  long extraout_x8;
  uint extraout_w9;
  
  func_0x00010b90fc24();
  FUN_10b9aaa6c();
  func_0x00010b90fe4c();
  if ((extraout_w9 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b9103ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(extraout_x8 + 0x58))();
    return;
  }
  func_0x00010b910388();
                    /* WARNING: Could not recover jumptable at 0x00010b90fd78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10b90ae68; end: 10b90ae8b;  */

void FUN_10b90ae68(void)

{
  long extraout_x8;
  
  func_0x00010b90fc64();
  func_0x00010b910808(*(undefined8 *)(extraout_x8 + 0x160));
  func_0x00010b91064c();
  return;
}



/* Entry: 10b90ae8c; end: 10b90ae8f;  */

undefined8 * FUN_10b90ae8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d74a90;
  FUN_10b907ef4(param_1 + 2);
  return param_1;
}



/* Entry: 10b90ae90; end: 10b90aea3;  */

void FUN_10b90ae90(void)

{
  func_0x00010b90a4b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b90aea4; end: 10b90aee3;  */

void FUN_10b90aea4(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
  long extraout_x8;
  uint extraout_w9;
  
  func_0x00010b90fc24();
  FUN_10b9aaa6c();
  func_0x00010b90fe4c();
  if ((extraout_w9 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b9103ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(extraout_x8 + 0x50))();
    return;
  }
  func_0x00010b910388();
                    /* WARNING: Could not recover jumptable at 0x00010b90fd78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10b90aee4; end: 10b90af07;  */

void FUN_10b90aee4(void)

{
  long extraout_x8;
  
  func_0x00010b90fc64();
  func_0x00010b910808(*(undefined8 *)(extraout_x8 + 0x140));
  func_0x00010b91064c();
  return;
}



/* Entry: 10b90af08; end: 10b90af1f;  */

void FUN_10b90af08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b90af18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x50))(0);
  return;
}



/* Entry: 10b90af20; end: 10b90af33;  */

void FUN_10b90af20(void)

{
  func_0x00010b90a4b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b90af34; end: 10b90af63;  */

void FUN_10b90af34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b90af40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x98))();
  return;
}



/* Entry: 10b90af64; end: 10b90af77;  */

void FUN_10b90af64(void)

{
  func_0x00010b90a4b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b90af78; end: 10b90b04f;  */

void FUN_10b90af78(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  uint uVar5;
  code *extraout_x9;
  long unaff_x20;
  undefined8 unaff_x21;
  long *plVar6;
  long lStack_38;
  
  bVar1 = *(byte *)(param_3 + 1);
  uVar5 = (uint)bVar1;
  if ((bVar1 & 0xfe) == 2) {
    plVar6 = *(long **)(param_2 + 0x10);
    if (bVar1 != 2) {
                    /* WARNING: Could not recover jumptable at 0x00010b90b020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x80))(param_1,plVar6,*param_3,param_5);
      return;
    }
    FUN_10b9a9358(&lStack_38,param_3);
    if (lStack_38 == 0) {
      uVar3 = 0;
      puVar2 = &UNK_10f7d0ef0;
    }
    else {
      puVar2 = (undefined *)(lStack_38 + 0x18);
      uVar3 = *(undefined4 *)(lStack_38 + 0xc);
    }
    func_0x00010b910484(param_1,plVar6,puVar2,uVar3);
    func_0x00010b910428();
  }
  else {
    uVar4 = 3;
    func_0x00010b91020c(param_1,param_2,param_5,3);
    FUN_10b9aa5f0(&lStack_38,uVar4,uVar5 & 0xff);
    func_0x00010b9104f0();
    FUN_10b99ff08();
    func_0x000104bda960(lStack_38);
    func_0x00010b910044(*(undefined8 *)(unaff_x20 + 0x10));
    (*extraout_x9)(unaff_x21);
  }
  return;
}



/* Entry: 10b90b050; end: 10b90b08b;  */

void FUN_10b90b050(void)

{
  long extraout_x8;
  undefined8 uStack_28;
  
  func_0x00010b90fc64();
  (**(code **)(extraout_x8 + 0x170))(&uStack_28);
  func_0x00010b9104f0();
  func_0x00010b9a8f9c();
  func_0x0001080e44b4(uStack_28);
  return;
}



/* Entry: 10b90b08c; end: 10b90b0db;  */

void FUN_10b90b08c(void)

{
  undefined8 in_x3;
  uint in_w4;
  code *extraout_x9;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x00010b91020c();
  FUN_10b9aa5f0(&uStack_38,in_x3,in_w4 & 0xff);
  func_0x00010b9104f0();
  FUN_10b99ff08();
  func_0x000104bda960(uStack_38);
  func_0x00010b910044(*(undefined8 *)(unaff_x20 + 0x10));
  (*extraout_x9)();
  return;
}



/* Entry: 10b90b0dc; end: 10b90b107;  */

void FUN_10b90b0dc(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined8 *extraout_x8;
  undefined8 extraout_x9;
  
  if (param_1 != (long *)0x0) {
    do {
      func_0x000107c39f2c();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_x9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010b90fd54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10b90b108; end: 10b90b11b;  */

void FUN_10b90b108(void)

{
  func_0x00010b90a4b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b90b11c; end: 10b90b187;  */

void FUN_10b90b11c(void)

{
  long in_x3;
  long unaff_x21;
  long lStack_38;
  
  func_0x00010b910200();
  func_0x00010b910134(&lStack_38);
  FUN_10b9aac28();
  if ((*(byte *)(in_x3 + 8) & 1) == 0) {
    func_0x00010b90fca8();
  }
  else {
    (**(code **)(**(long **)(unaff_x21 + 0x10) + 0x90))
              (*(long **)(unaff_x21 + 0x10),*(undefined4 *)(lStack_38 + 0x10),lStack_38 + 0x18,in_x3
              );
  }
  func_0x000104bdb3b0(lStack_38);
  return;
}



/* Entry: 10b90b188; end: 10b90b1bb;  */

void FUN_10b90b188(void)

{
  undefined8 uStack_28;
  
  func_0x00010b90fc64();
  func_0x00010b9105e0();
  func_0x00010b9104f0();
  func_0x00010b9a8f90();
  func_0x000104bdb3b0(uStack_28);
  return;
}



/* Entry: 10b90b1bc; end: 10b90b2bf;  */

long * FUN_10b90b1bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 extraout_x8;
  long lStack_60;
  undefined1 auStack_58 [8];
  long lStack_50;
  long alStack_48 [2];
  undefined8 uStack_38;
  
  plVar3 = &lStack_60;
  func_0x00010b90fcb8();
  uStack_38 = extraout_x8;
  func_0x00010b9108bc(&lStack_50,param_2,param_3);
  uVar1 = lStack_50 == 1;
  if ((bool)uVar1) {
    plVar3 = alStack_48;
    func_0x000107c31030(param_1);
  }
  else {
    FUN_10b99fa70(&lStack_60,alStack_48,&UNK_10f7cce6c,0x1c);
    func_0x00010b910590();
    func_0x000104bda960(lStack_60);
    func_0x000107c30f98(&lStack_60);
    func_0x000107c31030(param_1);
    func_0x000107c27900(auStack_58);
  }
  plVar2 = &lStack_50;
  func_0x000107c2a668();
  func_0x00010b90fc10(uStack_38);
  if ((bool)uVar1) {
    return plVar2;
  }
  ___stack_chk_fail();
  *plVar2 = *plVar3;
  func_0x000107c30df0(plVar2 + 1,plVar3 + 1);
  func_0x000107c30f40(plVar2 + 4,plVar3 + 4);
  return plVar2;
}



/* Entry: 10b90b2c0; end: 10b90b2c3;  */

undefined8 * FUN_10b90b2c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d75028;
  func_0x00010b90b778(param_1 + 1);
  return param_1;
}



/* Entry: 10b90b2c4; end: 10b90b2d7;  */

void FUN_10b90b2c4(void)

{
  FUN_10b90b418();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b90b2d8; end: 10b90b2ff;  */

undefined8 * FUN_10b90b2d8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110d75028;
  puVar1[1] = uVar2;
  func_0x000107c30df0(puVar1 + 2,param_1 + 0x10);
  func_0x000107c30f3c(puVar1 + 5,param_1 + 0x28);
  return puVar1;
}



/* Entry: 10b90b300; end: 10b90b323;  */

undefined8 * FUN_10b90b300(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110d75028;
  param_2[1] = uVar1;
  func_0x000107c30df0(param_2 + 2,param_1 + 0x10);
  func_0x000107c30f3c(param_2 + 5,param_1 + 0x28);
  return param_2;
}



/* Entry: 10b90b324; end: 10b90b3d3;  */

void FUN_10b90b324(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 *extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_70 [24];
  undefined8 auStack_58 [3];
  undefined1 *puStack_40;
  long lStack_38;
  
  puVar1 = auStack_70;
  func_0x00010b9102e0();
  lVar2 = unaff_x20 + 0x10;
  FUN_10b908074(auStack_58,*(undefined8 *)(param_1 + 8),lVar2,unaff_x20 + 0x28);
  *extraout_x8 = auStack_58[0];
  auStack_58[0] = 0;
  func_0x00010b907cc8(auStack_58);
  if ((*(byte *)(unaff_x19 + 8) & 1) == 0) {
    func_0x00010b98fa8c(auStack_70,unaff_x20 + 0x28);
    func_0x000107c27e5c();
    puStack_40 = puVar1;
    lStack_38 = lVar2;
    func_0x000107c2793c(&UNK_10f7cce89);
    func_0x00010b910140(auStack_58);
    func_0x00010b9105c0();
    func_0x00010b91079c();
    func_0x00010b9103cc();
  }
  return;
}



/* Entry: 10b90b3d4; end: 10b90b40b;  */

long FUN_10b90b3d4(long param_1,undefined8 param_2)

{
  func_0x00010812092c(param_2,&PTR_DAT_110d75098);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10b90b40c; end: 10b90b417;  */

undefined ** FUN_10b90b40c(void)

{
  return &PTR_DAT_110d75098;
}



/* Entry: 10b90b418; end: 10b90b487;  */

undefined8 * FUN_10b90b418(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d75028;
  func_0x00010b90b778(param_1 + 1);
  return param_1;
}



/* Entry: 10b90b488; end: 10b90b48b;  */

undefined8 * FUN_10b90b488(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d750b8;
  func_0x00010b8e0a20(param_1 + 9);
  FUN_10b90b73c(param_1 + 5);
  *param_1 = &PTR_FUN_110d74a90;
  FUN_10b907ef4(param_1 + 2);
  return param_1;
}



/* Entry: 10b90b48c; end: 10b90b49f;  */

void FUN_10b90b48c(void)

{
  FUN_10b90b610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b90b4a0; end: 10b90b4a7;  */

undefined1 FUN_10b90b4a0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* Entry: 10b90b4a8; end: 10b90b5a7;  */

void FUN_10b90b4a8(long *param_1)

{
  func_0x00010b910200();
  FUN_10b90b64c();
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010b90b508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x28))();
    return;
  }
  func_0x00010b910290();
  func_0x00010b90fe7c();
  func_0x00010b910098();
  return;
}



/* Entry: 10b90b5a8; end: 10b90b60f;  */

void FUN_10b90b5a8(undefined8 param_1,long *param_2)

{
  long extraout_x8;
  
  if (((char)param_2[3] != '\x01') && (FUN_10b90b64c(), param_2 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010b90b5f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x38))(param_1);
    return;
  }
  func_0x00010b90ffcc();
                    /* WARNING: Could not recover jumptable at 0x00010b90fd78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(extraout_x8 + 0x28))(param_1);
  return;
}



/* Entry: 10b90b610; end: 10b90b64b;  */

undefined8 * FUN_10b90b610(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d750b8;
  func_0x00010b8e0a20(param_1 + 9);
  FUN_10b90b73c(param_1 + 5);
  *param_1 = &PTR_FUN_110d74a90;
  FUN_10b907ef4(param_1 + 2);
  return param_1;
}



/* Entry: 10b90b64c; end: 10b90b73b;  */

long FUN_10b90b64c(long param_1)

{
  undefined8 uVar1;
  code *extraout_x9;
  long *plVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined1 uStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    return *(long *)(param_1 + 0x50);
  }
  lStack_40 = 0;
  uStack_38 = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar3 = *(long *)(param_1 + 0x20) + 0x18;
    __ZNSt3__115recursive_mutex4lockEv(lVar3);
    uStack_38 = 1;
    uStack_50 = 0;
    uStack_48 = 0;
    lStack_40 = lVar3;
    func_0x000107c2851c(&uStack_50);
  }
  plVar2 = (long *)(param_1 + 0x48);
  lVar3 = *plVar2;
  if (lVar3 != 0) goto LAB_10b90b718;
  if (*(long *)(param_1 + 0x40) == 0) {
    lVar3 = 0;
    goto LAB_10b90b718;
  }
  func_0x00010b910194();
  (*extraout_x9)(&uStack_50);
  FUN_10b90719c(plVar2,&uStack_50);
  func_0x00010b8e0a44(uStack_50);
  lVar3 = *(long *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (lVar3 == param_1 + 0x28) {
    uVar1 = 0x20;
LAB_10b90b710:
    func_0x00010b9107c4(uVar1);
  }
  else if (lVar3 != 0) {
    uVar1 = 0x28;
    goto LAB_10b90b710;
  }
  lVar3 = *plVar2;
LAB_10b90b718:
  *(long *)(param_1 + 0x50) = lVar3;
  func_0x000107c2851c(&lStack_40);
  return lVar3;
}



/* Entry: 10b90b73c; end: 10b90b7a3;  */

long FUN_10b90b73c(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x18) == param_1) {
    uVar1 = 0x20;
  }
  else {
    if (*(long *)(param_1 + 0x18) == 0) {
      return param_1;
    }
    uVar1 = 0x28;
  }
  func_0x00010b9107c4(uVar1);
  return param_1;
}



/* Entry: 10b90b7a4; end: 10b90b7a7;  */

undefined8 * FUN_10b90b7a4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110d75120;
  puVar1 = param_1 + 8;
  for (lVar2 = param_1[3]; lVar2 != 0; lVar2 = lVar2 + -1) {
    func_0x00010b8e0a20(puVar1);
    puVar1 = puVar1 + 1;
  }
  func_0x000107c278f4(param_1 + 7);
  func_0x000107c278f4(param_1 + 6);
  func_0x0001090b64f0(param_1 + 5);
  func_0x00010b8e0a20(param_1 + 2);
  return param_1;
}



/* Entry: 10b90b7a8; end: 10b90b7bb;  */

void FUN_10b90b7a8(void)

{
  FUN_10b90bec4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b90b7bc; end: 10b90bd87;  */

undefined1 **
FUN_10b90b7bc(long *****param_1,long *****param_2,long *****param_3,long *****param_4,
             long *****param_5,long *****param_6,long *****param_7,long *****param_8)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  long *****ppppplVar6;
  undefined1 **ppuVar7;
  long ****pppplVar8;
  undefined1 **ppuVar9;
  undefined1 *puVar10;
  long *****ppppplVar11;
  long *****ppppplVar12;
  long *****ppppplVar13;
  long *****ppppplVar14;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long *****extraout_x8_01;
  undefined8 extraout_x8_02;
  long *****ppppplVar15;
  long *****extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 extraout_x8_05;
  long *****ppppplVar16;
  int extraout_w10;
  long *****extraout_x10;
  long *****extraout_x11;
  long *****extraout_x11_00;
  long *****unaff_x19;
  undefined1 **ppuVar17;
  long *****unaff_x25;
  long *****ppppplVar18;
  long *****unaff_x28;
  undefined1 auStack_4d0 [8];
  undefined1 auStack_4c8 [16];
  undefined1 auStack_4b8 [24];
  long ****pppplStack_4a0;
  undefined8 uStack_498;
  undefined1 uStack_490;
  char cStack_489;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined1 uStack_478;
  undefined1 *puStack_470;
  long ****pppplStack_468;
  undefined1 auStack_458 [88];
  undefined1 uStack_400;
  undefined8 uStack_3f8;
  long ****pppplStack_3f0;
  long ****pppplStack_3e8;
  long ****pppplStack_3e0;
  long ****pppplStack_3d8;
  undefined1 **ppuStack_3d0;
  long ****pppplStack_3c8;
  undefined1 **ppuStack_3c0;
  code *pcStack_3b8;
  long ***appplStack_3a8 [3];
  long ****pppplStack_390;
  undefined8 uStack_388;
  long ***ppplStack_380;
  undefined *puStack_378;
  long ****pppplStack_370;
  undefined1 uStack_368;
  undefined8 uStack_360;
  undefined2 uStack_358;
  long ***appplStack_350 [2];
  undefined1 uStack_339;
  undefined1 auStack_330 [88];
  undefined1 uStack_2d8;
  undefined8 uStack_2d0;
  long ****pppplStack_2c0;
  long ****pppplStack_2b8;
  long ****pppplStack_2b0;
  long ****pppplStack_2a8;
  long ****pppplStack_2a0;
  long ****pppplStack_298;
  long ****pppplStack_290;
  long ****pppplStack_288;
  long ****pppplStack_280;
  long ****pppplStack_278;
  undefined1 *puStack_270;
  undefined8 uStack_268;
  long ****pppplStack_258;
  long ****apppplStack_250 [3];
  undefined1 auStack_238 [8];
  char cStack_230;
  undefined1 auStack_228 [8];
  undefined1 *puStack_220;
  undefined8 uStack_218;
  long ****pppplStack_210;
  long ****pppplStack_208;
  long ****pppplStack_200;
  long ****pppplStack_1f8;
  long ****pppplStack_1e0;
  long ****pppplStack_1d8;
  undefined8 uStack_1d0;
  long ***ppplStack_1c8;
  long ****pppplStack_1c0;
  undefined1 uStack_1b8;
  long ****pppplStack_1b0;
  undefined1 *puStack_1a8;
  long ****pppplStack_1a0;
  undefined1 auStack_198 [24];
  undefined8 uStack_180;
  long ****pppplStack_178;
  long ****pppplStack_168;
  long ****pppplStack_160;
  byte bStack_151;
  undefined1 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  undefined8 uStack_70;
  
  ppppplVar6 = param_2;
  ppppplVar12 = param_6;
  ppppplVar13 = param_7;
  ppppplVar14 = param_8;
  func_0x00010b90fcb8();
  puStack_108 = auStack_f0;
  uStack_f8 = 8;
  uStack_100 = 0;
  ppppplVar16 = (long *****)ppppplVar6[3];
  uVar4 = param_5 == ppppplVar16;
  ppppplVar15 = param_5;
  if (ppppplVar16 <= param_5) {
    ppppplVar15 = ppppplVar16;
  }
  uStack_70 = extraout_x8;
  if (ppppplVar15 != (long *****)0x0) {
    ppppplVar16 = param_4;
    pppplStack_258 = (long ****)param_1;
    func_0x00010b910764();
    if ((int)ppppplVar6 != 0) {
      func_0x00010b8fb56c(&pppplStack_168,param_2 + 7);
    }
    param_1 = (long *****)0x0;
    unaff_x28 = param_2 + 8;
    unaff_x19 = (long *****)0x4;
    unaff_x25 = param_4;
    while( true ) {
      param_4 = ppppplVar16;
      cVar2 = SBORROW8((long)ppppplVar15,(long)param_1);
      cVar3 = (long)ppppplVar15 - (long)param_1 < 0;
      uVar4 = ppppplVar15 == param_1;
      if ((bool)uVar4) break;
      pppplStack_1d8 = (long ****)0x0;
      uStack_1d0 = (long *****)CONCAT71(uStack_1d0._1_7_,4);
      ppplStack_1c8 = (long ***)0x0;
      uStack_1b8 = 0;
      pppplStack_1e0 = (long ****)param_6;
      pppplStack_1c0 = (long ****)param_1;
      func_0x00010b910194(unaff_x28[(long)param_1]);
      param_5 = &pppplStack_1e0;
      ppppplVar16 = unaff_x25;
      func_0x00010b910468(auStack_228);
      puVar10 = auStack_228;
      FUN_10b8defb4(&puStack_108);
      FUN_10b9a8d98(auStack_228);
      if (((ulong)param_8[1] & 1) == 0) {
        param_2 = &pppplStack_200;
        func_0x00010b910578(&pppplStack_200);
        FUN_10b9a360c(&pppplStack_1a0,&pppplStack_200);
        ppppplVar6 = &pppplStack_1a0;
        func_0x000107c27e5c();
        pppplStack_1d8 = (long ****)0x0;
        pppplStack_1e0 = (long ****)param_1;
        uStack_1d0 = ppppplVar6;
        ppplStack_1c8 = (long ***)puVar10;
        func_0x000107c2793c(&UNK_10f7cceee);
        unaff_x19 = (long *****)auStack_228;
        param_5 = &pppplStack_1e0;
        func_0x00010b9107a4(auStack_228);
        func_0x00010b910910();
        param_4 = extraout_x11;
        ppppplVar6 = extraout_x10;
        if (cVar3 == cVar2) {
          param_4 = extraout_x8_01;
          ppppplVar6 = unaff_x19;
        }
        func_0x00010b910588();
        func_0x00010b91082c();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppplStack_1a0);
        func_0x00010b9107d0();
        *(undefined1 *)pppplStack_258 = 0;
        *(undefined1 *)(pppplStack_258 + 4) = 0;
        func_0x00010b910750();
        goto LAB_10b90bbb4;
      }
      param_1 = (long *****)((long)param_1 + 1);
      unaff_x25 = unaff_x25 + 4;
    }
    func_0x00010b910750();
    param_1 = (long *****)pppplStack_258;
  }
  auStack_228[0] = *(undefined1 *)(param_2 + 4);
  ppppplVar6 = (long *****)auStack_228;
  ppppplVar16 = param_3;
  puStack_220 = puStack_108;
  uStack_218 = uStack_100;
  pppplStack_210 = (long ****)param_8;
  pppplStack_208 = (long ****)param_7;
  (*(code *)(*param_3)[4])(auStack_238);
  iVar5 = (int)ppppplVar16;
  if (((ulong)param_8[1] & 1) == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 4) = 0;
  }
  else {
    bVar1 = *(byte *)((long)param_2 + 0x21);
    uVar4 = bVar1 == 1 && cStack_230 == '\x01';
    if (bVar1 == 1 && cStack_230 == '\x01') {
      func_0x000104bf2d3c(apppplStack_250);
      unaff_x19 = &pppplStack_1a0;
      func_0x00010b910578(&pppplStack_1a0);
      ppppplVar16 = &pppplStack_1a0;
      FUN_10b9a360c(&pppplStack_1e0);
      func_0x00010b9104bc();
      pppplStack_200 = (long ****)ppppplVar16;
      pppplStack_1f8 = (long ****)ppppplVar6;
      func_0x000107c2793c(&UNK_10f7ccf1f);
      unaff_x25 = &pppplStack_168;
      param_5 = &pppplStack_200;
      func_0x00010b910140(&pppplStack_168);
      func_0x00010b910264();
      FUN_10b9a3d64(auStack_198);
      pppplVar8 = apppplStack_250[0];
      uVar4 = bStack_151 == 0;
      pppplStack_1d8 = pppplStack_160;
      if (-1 < (char)bStack_151) {
        pppplStack_1d8 = (long ****)(ulong)bStack_151;
        pppplStack_168 = (long ****)unaff_x25;
      }
      pppplStack_1e0 = pppplStack_168;
      FUN_10b99f5a8(&pppplStack_1a0,&pppplStack_1e0);
      uStack_180 = 2;
      pppplStack_178 = pppplStack_1a0;
      pppplStack_1a0 = (long ****)0x0;
      FUN_10b9a4940(pppplVar8,&uStack_180);
      func_0x000104bda914(&uStack_180);
      func_0x000104bda960(pppplStack_1a0);
      param_7 = (long *****)apppplStack_250[0];
      if (((long *****)apppplStack_250[0] != (long *****)0x0) &&
         ((long ****)apppplStack_250[0][2] != (long ****)0x0)) {
        do {
          func_0x00010b910018();
        } while (extraout_w10 != 0);
      }
      pppplStack_1a0 = (long ****)param_7;
      func_0x00010b9a8f78(&pppplStack_1e0,&pppplStack_1a0);
      FUN_10b9a9020(auStack_238,&pppplStack_1e0);
      FUN_10b9a8d98(&pppplStack_1e0);
      func_0x000104bddf04(param_7);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppplStack_168);
      iVar5 = (int)apppplStack_250[0];
      func_0x000104bf3588();
      bVar1 = *(byte *)((long)param_2 + 0x21);
    }
    if (((bVar1 & 1) == 0) && (uVar4 = cStack_230 == '\x01', (bool)uVar4)) {
      ppppplVar6 = param_3;
      (*(code *)(*param_3)[8])();
      iVar5 = 0;
      if ((int)ppppplVar6 != 0) {
        func_0x00010b9106d8();
        (**(code **)(extraout_x8_00 + 0x38))(&pppplStack_168);
        ppppplVar6 = &pppplStack_168;
        FUN_10b904f7c(param_1);
        func_0x0001080e0bc0(&pppplStack_168);
        goto LAB_10b90bbac;
      }
    }
    func_0x00010b910764();
    if (iVar5 != 0) {
      func_0x00010b8fb56c(&pppplStack_168,param_2 + 6);
    }
    pppplStack_1d8 = (long ****)0x0;
    uStack_1d0 = (long *****)CONCAT71(uStack_1d0._1_7_,3);
    ppplStack_1c8 = (long ***)0x0;
    pppplStack_1c0 = (long ****)0x0;
    uStack_1b8 = 0;
    pppplStack_1e0 = (long ****)param_6;
    func_0x00010b910044(param_2[2]);
    param_3 = &pppplStack_1e0;
    puVar10 = auStack_238;
    param_4 = &pppplStack_1e0;
    func_0x00010b9101f8(&pppplStack_1a0);
    if (((ulong)param_8[1] & 1) == 0) {
      param_2 = apppplStack_250;
      func_0x00010b910578(apppplStack_250);
      FUN_10b9a360c(&pppplStack_200,apppplStack_250);
      ppppplVar6 = &pppplStack_200;
      func_0x000107c27e5c();
      pppplStack_1b0 = (long ****)ppppplVar6;
      puStack_1a8 = puVar10;
      func_0x000107c2793c(&UNK_10f7ccf8e);
      param_5 = &pppplStack_1b0;
      func_0x00010b910140(&pppplStack_1e0);
      uVar4 = uStack_1d0._7_1_ == 0;
      param_4 = (long *****)pppplStack_1d8;
      ppppplVar6 = (long *****)pppplStack_1e0;
      if (-1 < (long)uStack_1d0) {
        param_4 = (long *****)(ulong)uStack_1d0._7_1_;
        ppppplVar6 = param_3;
      }
      func_0x00010b910588();
      func_0x00010b910264();
      func_0x00010b9105a8();
      func_0x00010b9107d0();
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 4) = 0;
    }
    else {
      ppppplVar6 = &pppplStack_1a0;
      FUN_10b904f7c(param_1);
    }
    func_0x0001080e0bc0(&pppplStack_1a0);
    func_0x00010b910750();
  }
LAB_10b90bbac:
  FUN_10b9a8d98(auStack_238);
LAB_10b90bbb4:
  ppuVar7 = &puStack_108;
  func_0x00010b8df154();
  func_0x00010b90fc10(uStack_70);
  if ((bool)uVar4) {
    return ppuVar7;
  }
  ___stack_chk_fail();
  uStack_268 = 0x10b90bbd8;
  pppplStack_2c0 = (long ****)unaff_x28;
  pppplStack_2b8 = (long ****)ppppplVar15;
  pppplStack_2b0 = (long ****)param_1;
  pppplStack_2a8 = (long ****)unaff_x25;
  pppplStack_2a0 = (long ****)param_7;
  pppplStack_298 = (long ****)param_3;
  pppplStack_290 = (long ****)param_2;
  pppplStack_288 = (long ****)param_6;
  pppplStack_280 = (long ****)param_8;
  pppplStack_278 = (long ****)unaff_x19;
  puStack_270 = &stack0xfffffffffffffff0;
  func_0x00010b90fcb8();
  ppppplVar15 = (long *****)ppuVar7[3];
  uVar4 = ppppplVar12 == ppppplVar15;
  if (ppppplVar15 <= ppppplVar12) {
    ppppplVar12 = ppppplVar15;
  }
  ppppplVar15 = param_4;
  uStack_2d0 = extraout_x8_02;
  if (ppppplVar12 == (long *****)0x0) {
    ppuVar17 = (undefined1 **)0x1;
  }
  else {
    auStack_330[0] = 0;
    uStack_2d8 = 0;
    ppuVar17 = ppuVar7;
    ppppplVar16 = ppppplVar6;
    ppppplVar11 = param_5;
    func_0x000105c3b044();
    if ((int)ppuVar17 != 0) {
      ppppplVar16 = (long *****)(ppuVar7 + 6);
      func_0x00010b8fb56c(auStack_330);
    }
    ppppplVar18 = (long *****)0x0;
    param_2 = param_5;
    param_7 = ppppplVar6;
    while( true ) {
      ppuVar17 = (undefined1 **)(ulong)(ppppplVar12 == ppppplVar18);
      uVar4 = 1;
      if (ppppplVar12 == ppppplVar18) break;
      cVar2 = SBORROW8((long)ppppplVar18,(long)param_4);
      cVar3 = (long)ppppplVar18 - (long)param_4 < 0;
      uVar4 = ppppplVar18 == param_4;
      if (ppppplVar18 < param_4) {
        FUN_10b9a8f04(&uStack_360,param_7);
      }
      else {
        uStack_358 = 1;
        uStack_360 = 0;
      }
      uStack_388 = 0;
      ppplStack_380 = (long ***)CONCAT71(ppplStack_380._1_7_,4);
      puStack_378 = (undefined *)0x0;
      uStack_368 = 0;
      pppplStack_390 = (long ****)ppppplVar13;
      pppplStack_370 = (long ****)ppppplVar18;
      func_0x00010b910044(ppuVar7[(long)(ppppplVar18 + 1)]);
      ppppplVar15 = &pppplStack_390;
      func_0x00010b910484(appplStack_350);
      ppppplVar16 = (long *****)appplStack_350;
      func_0x0001080df8d0(param_2);
      func_0x00010b910880();
      if (((ulong)ppppplVar14[1] & 1) == 0) {
        param_2 = (long *****)appplStack_3a8;
        func_0x00010b910578(appplStack_3a8);
        pppplVar8 = appplStack_3a8;
        func_0x00010b9a35e8();
        uStack_388 = 0;
        puStack_378 = &UNK_1003ab990;
        pppplStack_390 = (long ****)ppppplVar18;
        ppplStack_380 = (long ***)pppplVar8;
        func_0x000107c2793c(&UNK_10f7ccfbf);
        ppppplVar13 = (long *****)appplStack_350;
        ppppplVar11 = &pppplStack_390;
        func_0x000107c3173c(appplStack_350);
        func_0x00010b910470(uStack_339);
        ppppplVar15 = extraout_x11_00;
        if (cVar3 == cVar2) {
          ppppplVar15 = extraout_x8_03;
        }
        func_0x00010b9105c0();
        func_0x00010b9105a8();
        func_0x00010b9107d0();
        FUN_10b9a8d98(&uStack_360);
        break;
      }
      FUN_10b9a8d98(&uStack_360);
      ppppplVar18 = (long *****)((long)ppppplVar18 + 1);
      param_7 = param_7 + 2;
      param_2 = param_2 + 4;
    }
    ppuVar7 = (undefined1 **)auStack_330;
    func_0x0001080e8dd4();
    ppppplVar6 = ppppplVar16;
    param_5 = ppppplVar11;
    unaff_x19 = ppppplVar14;
    param_6 = ppppplVar13;
    param_3 = param_4;
  }
  func_0x00010b90fc10(uStack_2d0);
  if ((bool)uVar4) {
    return ppuVar17;
  }
  ___stack_chk_fail();
  pcStack_3b8 = FUN_10b90bd88;
  ppuVar9 = ppuVar7;
  pppplStack_3f0 = (long ****)param_7;
  pppplStack_3e8 = (long ****)param_3;
  pppplStack_3e0 = (long ****)param_2;
  pppplStack_3d8 = (long ****)param_6;
  ppuStack_3d0 = ppuVar17;
  pppplStack_3c8 = (long ****)unaff_x19;
  ppuStack_3c0 = &puStack_270;
  func_0x00010b90fcb8();
  iVar5 = (int)ppuVar9;
  auStack_458[0] = 0;
  uStack_400 = 0;
  uStack_3f8 = extraout_x8_05;
  func_0x000105c3b044();
  if (iVar5 != 0) {
    ppppplVar6 = (long *****)(ppuVar7 + 7);
    func_0x00010b8fb56c(auStack_458);
  }
  uStack_498 = 0;
  uStack_490 = 3;
  uStack_488 = 0;
  uStack_480 = 0;
  uStack_478 = 0;
  pppplStack_4a0 = (long ****)ppppplVar15;
  func_0x00010b910194(ppuVar7[2]);
  func_0x00010b910068(extraout_x8_04);
  if (((ulong)param_5[1] & 1) == 0) {
    FUN_10b9a3a64(auStack_4d0,ppppplVar15);
    FUN_10b9a360c(auStack_4b8,auStack_4d0);
    puVar10 = auStack_4b8;
    func_0x000107c27e5c();
    puStack_470 = puVar10;
    pppplStack_468 = (long ****)ppppplVar6;
    func_0x000107c2793c(&UNK_10f7ccff2);
    func_0x00010b910140(&pppplStack_4a0);
    uVar4 = cStack_489 == '\0';
    func_0x00010b9105c0();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppplStack_4a0);
    func_0x00010b91079c();
    FUN_10b9a3d64(auStack_4c8);
  }
  ppuVar7 = (undefined1 **)auStack_458;
  func_0x0001080e8dd4();
  func_0x00010b90fc10(uStack_3f8);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    return (undefined1 **)ppuVar7[3];
  }
  return ppuVar7;
}


