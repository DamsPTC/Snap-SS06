/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 004639d4; end: 004639fb;  */

long FUN_004639d4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0040ce94();
  }
  return param_1;
}



/* Entry: 004639fc; end: 004639ff;  */

undefined8 * FUN_004639fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e5fa0;
  FUN_00463c5c(param_1 + 3);
  func_0x00463cb8(param_1 + 1);
  return param_1;
}



/* Entry: 00463a00; end: 00463a13;  */

void FUN_00463a00(void)

{
  FUN_00463c20();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00463a14; end: 00463a3f;  */

undefined1 * FUN_00463a14(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0xb0] = 0;
  FUN_00463a40();
  return param_1;
}



/* Entry: 00463a40; end: 00463a53;  */

void FUN_00463a40(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    FUN_00463a70();
    *(undefined1 *)(param_1 + 0xb0) = 1;
    return;
  }
  return;
}



/* Entry: 00463a54; end: 00463a6f;  */

void FUN_00463a54(long param_1)

{
  FUN_00463a70();
  *(undefined1 *)(param_1 + 0xb0) = 1;
  return;
}



/* Entry: 00463a70; end: 00463b53;  */

undefined8 * FUN_00463a70(undefined8 *param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  FUN_00463b54(param_1 + 2,param_2 + 2);
  uVar1 = *(undefined2 *)(param_2 + 8);
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined2 *)(param_1 + 8) = uVar1;
  *(undefined1 *)(param_1 + 0xc) = 0;
  if (*(char *)(param_2 + 0xc) == '\x01') {
    uVar3 = param_2[10];
    uVar2 = param_2[9];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar3;
    param_1[9] = uVar2;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[9] = 0;
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  if (*(char *)(param_2 + 0x10) == '\x01') {
    uVar3 = param_2[0xe];
    uVar2 = param_2[0xd];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar3;
    param_1[0xd] = uVar2;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    param_2[0xd] = 0;
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  uVar2 = param_2[0x11];
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x11] = uVar2;
  *(undefined1 *)(param_1 + 0x15) = 0;
  if (*(char *)(param_2 + 0x15) == '\x01') {
    uVar3 = param_2[0x13];
    uVar2 = param_2[0x12];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar3;
    param_1[0x12] = uVar2;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x12] = 0;
    *(undefined1 *)(param_1 + 0x15) = 1;
  }
  return param_1;
}



/* Entry: 00463b54; end: 00463b7f;  */

undefined1 * FUN_00463b54(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x28] = 0;
  FUN_00463b80();
  return param_1;
}



/* Entry: 00463b80; end: 00463b93;  */

void FUN_00463b80(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_00463bb0();
    *(undefined1 *)(param_1 + 0x28) = 1;
    return;
  }
  return;
}



/* Entry: 00463b94; end: 00463baf;  */

void FUN_00463b94(long param_1)

{
  FUN_00463bb0();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 00463bb0; end: 00463c1f;  */

void FUN_00463bb0(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar2 = *param_2;
  *param_2 = 0;
  *param_1 = lVar2;
  lVar4 = param_2[2];
  lVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = lVar3;
  param_2[1] = 0;
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  *(int *)(param_1 + 4) = (int)param_2[4];
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = param_1[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long **)(lVar2 + uVar5 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 00463c20; end: 00463c5b;  */

undefined8 * FUN_00463c20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e5fa0;
  FUN_00463c5c(param_1 + 3);
  func_0x00463cb8(param_1 + 1);
  return param_1;
}



/* Entry: 00463c5c; end: 00463c7b;  */

void FUN_00463c5c(long param_1)

{
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    FUN_00463c7c();
  }
  return;
}



/* Entry: 00463c7c; end: 00463cdf;  */

long FUN_00463c7c(long param_1)

{
  FUN_00457530(param_1 + 0x90);
  FUN_00457530(param_1 + 0x68);
  FUN_00457530(param_1 + 0x48);
  FUN_00459de4(param_1 + 0x10);
  return param_1;
}



/* Entry: 00463ce0; end: 00463cef;  */

void FUN_00463ce0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e5ff0;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 00463cf0; end: 00463d03;  */

void FUN_00463cf0(void)

{
  FUN_00463ce0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00463d04; end: 00463d13;  */

void FUN_00463d04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00463d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 00463d14; end: 00463d5f;  */

undefined8 * FUN_00463d14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e6040;
  FUN_00463fcc(param_1 + 0xe);
  (**(code **)param_1[8])();
  (**(code **)param_1[2])();
  return param_1;
}



/* Entry: 00463d60; end: 00463d73;  */

void FUN_00463d60(void)

{
  FUN_00463d14();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00463d74; end: 00463da3;  */

void FUN_00463d74(void)

{
  return;
}



/* Entry: 00463da4; end: 00463e77;  */

void FUN_00463da4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 **ppuStack_68;
  ulong uStack_60;
  char *pcStack_58;
  undefined8 uStack_50;
  undefined8 **ppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  FUN_005bad5c(&ppuStack_48);
  pcStack_58 = "x-envoy-overloaded";
  uStack_50 = 0x12;
  lVar1 = param_3;
  FUN_00464080(param_3,&pcStack_58);
  if (param_3 + 8 == lVar1) {
    if (-1 < (char)bStack_31) {
      uStack_40 = (ulong)bStack_31;
    }
    if (uStack_40 == 0) goto LAB_00463e04;
    ppuStack_68 = ppuStack_48;
    if (-1 < (char)bStack_31) {
      ppuStack_68 = &ppuStack_48;
    }
    uStack_60 = uStack_40;
    FUN_00464080(param_3,&ppuStack_68);
    if (lVar1 == param_3) goto LAB_00463e04;
  }
  FUN_00464068(param_1 + 0x70,param_2);
LAB_00463e04:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_48);
  return;
}



/* Entry: 00463e78; end: 00463f5b;  */

void FUN_00463e78(long param_1,long param_2,int *param_3,undefined1 param_4)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined1 auStack_88 [56];
  undefined1 uStack_50;
  undefined1 uStack_4c;
  undefined1 uStack_48;
  undefined1 uStack_47;
  undefined1 uStack_46;
  undefined1 uStack_45;
  
  if ((*(byte *)(*(long *)(param_1 + 0x40) + 8) & 1) == 0) {
    uVar1 = *(ulong *)(param_2 + 8);
    if (-1 < (char)*(byte *)(param_2 + 0x17)) {
      uVar1 = (ulong)*(byte *)(param_2 + 0x17);
    }
    if (uVar1 == 0 && *param_3 == 0xd) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_88,param_3 + 2);
      puVar2 = auStack_88;
      FUN_004636dc(puVar2,"Failed to serialize message");
      uVar3 = SUB81(puVar2,0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_88);
    }
    else {
      uVar3 = 0;
    }
    FUN_004648ec(auStack_88,param_3);
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = param_4;
    FUN_00464794(param_1,param_2);
    uStack_47 = (undefined1)param_1;
    uStack_45 = 0;
    uStack_46 = uVar3;
    func_0x00464abc();
    func_0x00464a6c();
  }
  return;
}



/* Entry: 00463f5c; end: 00463fcb;  */

void FUN_00463f5c(long param_1)

{
  if ((*(byte *)(*(long *)(param_1 + 0x40) + 8) & 1) == 0) {
    FUN_00464794();
    func_0x00464abc();
    func_0x00464a6c();
  }
  return;
}



/* Entry: 00463fcc; end: 0046404f;  */

long FUN_00463fcc(long param_1)

{
  func_0x00463ff4(param_1,*(undefined8 *)(param_1 + 0x10));
  FUN_00464050(param_1,0);
  return param_1;
}



/* Entry: 00464050; end: 00464067;  */

void FUN_00464050(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 00464068; end: 0046407f;  */

void FUN_00464068(void)

{
  FUN_004641f0();
  return;
}



/* Entry: 00464080; end: 004640d7;  */

undefined8 * FUN_00464080(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1 + 1;
  puVar1 = param_1;
  FUN_004640d8(param_1,param_2,*puVar2,puVar2);
  if (puVar2 != puVar1) {
    param_1 = param_1 + 2;
    FUN_00464134(param_1,param_2,puVar1 + 4);
    if ((int)param_1 == 0) {
      return puVar1;
    }
  }
  return puVar2;
}



/* Entry: 004640d8; end: 00464133;  */

long FUN_004640d8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  for (; param_3 != 0; param_3 = *(long *)(param_3 + lVar1)) {
    lVar2 = param_1 + 0x10;
    FUN_00464134(lVar2,param_3 + 0x20,param_2);
    lVar1 = 8;
    if ((int)lVar2 == 0) {
      lVar1 = 0;
      param_4 = param_3;
    }
  }
  return param_4;
}



/* Entry: 00464134; end: 00464193;  */

void FUN_00464134(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = *param_2;
  uStack_18 = param_2[1];
  uStack_30 = *param_3;
  uStack_28 = param_3[1];
  func_0x00464168(&uStack_20,&uStack_30);
  return;
}



/* Entry: 00464194; end: 004641ef;  */

uint FUN_00464194(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  
  uVar6 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_2[1];
  uVar1 = uVar2;
  if (uVar3 <= uVar2) {
    uVar1 = uVar3;
  }
  _memcmp(uVar6,*param_2,uVar1);
  iVar4 = (int)uVar6;
  if (iVar4 < 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = 0xffffffff;
    if (iVar4 != 0) {
      uVar5 = 1;
    }
    if (uVar3 <= uVar2 && iVar4 == 0) {
      uVar5 = (uint)(uVar3 < uVar2);
    }
  }
  return uVar5;
}



/* Entry: 004641f0; end: 00464223;  */

void FUN_004641f0(void)

{
  func_0x00464208();
  return;
}



/* Entry: 00464224; end: 0046443f;  */

undefined1  [16] FUN_00464224(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *unaff_x25;
  undefined1 *puVar9;
  undefined1 auVar10 [16];
  long *aplStack_68 [3];
  
  plVar6 = param_1 + 3;
  FUN_004597c4();
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    puVar9 = (undefined1 *)((long)plVar8 + -1);
    if (((ulong)plVar8 & (ulong)puVar9) == 0) {
      unaff_x25 = (long *)((ulong)puVar9 & (ulong)plVar6);
    }
    else {
      unaff_x25 = plVar6;
      if (plVar8 <= plVar6) {
        uVar3 = 0;
        if (plVar8 != (long *)0x0) {
          uVar3 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x25 = (long *)((long)plVar6 - uVar3 * (long)plVar8);
      }
    }
    plVar7 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_004642e8;
          plVar2 = (long *)plVar7[1];
          if (plVar2 != plVar6) break;
          plVar2 = plVar7 + 2;
          FUN_00459c38(plVar2,param_2);
          if (((ulong)plVar2 & 1) != 0) {
            uVar1 = 0;
            goto LAB_00464414;
          }
        }
        if (((ulong)plVar8 & (ulong)puVar9) == 0) {
          plVar2 = (long *)((ulong)plVar2 & (ulong)puVar9);
        }
        else if (plVar8 <= plVar2) {
          uVar3 = 0;
          if (plVar8 != (long *)0x0) {
            uVar3 = (ulong)plVar2 / (ulong)plVar8;
          }
          plVar2 = (long *)((long)plVar2 - uVar3 * (long)plVar8);
        }
      } while (plVar2 == unaff_x25);
    }
  }
LAB_004642e8:
  FUN_00464440(aplStack_68,param_1,plVar6,param_3);
  if ((plVar8 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar8 < (float)(param_1[3] + 1))
     ) {
    uVar3 = 1;
    if ((long *)((long)&MACH_HEADER.magic + 2) < plVar8) {
      uVar3 = (ulong)(((ulong)plVar8 & (ulong)((long)plVar8 + -1)) != 0);
    }
    uVar3 = uVar3 | (long)plVar8 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar5) {
      uVar3 = uVar5;
    }
    FUN_004644a0(param_1,uVar3);
    plVar8 = (long *)param_1[1];
    if (((ulong)plVar8 & (ulong)((long)plVar8 + -1)) == 0) {
      unaff_x25 = (long *)((ulong)((long)plVar8 + -1) & (ulong)plVar6);
    }
    else {
      unaff_x25 = plVar6;
      if (plVar8 <= plVar6) {
        uVar3 = 0;
        if (plVar8 != (long *)0x0) {
          uVar3 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x25 = (long *)((long)plVar6 - uVar3 * (long)plVar8);
      }
    }
  }
  plVar7 = aplStack_68[0];
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + (long)unaff_x25 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *aplStack_68[0] = *plVar6;
    *plVar6 = (long)aplStack_68[0];
    *(long **)(lVar4 + (long)unaff_x25 * 8) = plVar6;
    if (*aplStack_68[0] != 0) {
      plVar6 = *(long **)(*aplStack_68[0] + 8);
      if (((ulong)plVar8 & (ulong)((long)plVar8 + -1)) == 0) {
        plVar6 = (long *)((ulong)plVar6 & (ulong)((long)plVar8 + -1));
      }
      else if (plVar8 <= plVar6) {
        uVar3 = 0;
        if (plVar8 != (long *)0x0) {
          uVar3 = (ulong)plVar6 / (ulong)plVar8;
        }
        plVar6 = (long *)((long)plVar6 - uVar3 * (long)plVar8);
      }
      *(long **)(lVar4 + (long)plVar6 * 8) = aplStack_68[0];
    }
  }
  else {
    *aplStack_68[0] = *plVar6;
    *plVar6 = (long)aplStack_68[0];
  }
  aplStack_68[0] = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  func_0x00464aa4();
  uVar1 = 1;
LAB_00464414:
  auVar10._8_8_ = uVar1;
  auVar10._0_8_ = plVar7;
  return auVar10;
}



/* Entry: 00464440; end: 0046449f;  */

void FUN_00464440(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  
  pcVar1 = segment_command_00000020.segname;
  __Znwm();
  *param_1 = pcVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 0;
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar1[4] = '\0';
  pcVar1[5] = '\0';
  pcVar1[6] = '\0';
  pcVar1[7] = '\0';
  *(undefined8 *)(pcVar1 + 8) = param_3;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(pcVar1 + 0x10,param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 004644a0; end: 00464567;  */

void FUN_004644a0(long *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar7 = param_1[1];
  if (param_2 <= uVar7) {
    if (param_2 < uVar7) {
      uVar4 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar4) {
        uVar4 = 1L << (-LZCOUNT(uVar4 - 1) & 0x3fU);
      }
      if (param_2 <= uVar4) {
        param_2 = uVar4;
      }
      if (param_2 < uVar7) goto LAB_004644e8;
    }
    return;
  }
LAB_004644e8:
  if (param_2 == 0) {
    FUN_00464664(param_1);
    param_1[1] = 0;
  }
  else {
    plVar2 = param_1 + 1;
    FUN_0046467c(plVar2);
    FUN_00464664(param_1,plVar2);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar7 = 0; param_2 != uVar7; uVar7 = uVar7 + 1) {
      *(undefined8 *)(lVar1 + uVar7 * 8) = 0;
    }
    plVar2 = (long *)param_1[2];
    if (plVar2 != (long *)0x0) {
      uVar5 = plVar2[1];
      uVar4 = param_2 - 1;
      uVar7 = 0;
      if (param_2 != 0) {
        uVar7 = uVar5 / param_2;
      }
      uVar6 = uVar5;
      if (param_2 <= uVar5) {
        uVar6 = uVar5 - uVar7 * param_2;
      }
      if ((param_2 & uVar4) == 0) {
        uVar6 = uVar5 & uVar4;
      }
      *(long **)(lVar1 + uVar6 * 8) = param_1 + 2;
      while (plVar3 = plVar2, plVar2 = (long *)*plVar3, plVar2 != (long *)0x0) {
        uVar7 = plVar2[1];
        if ((param_2 & uVar4) == 0) {
          uVar7 = uVar7 & uVar4;
        }
        else if (param_2 <= uVar7) {
          uVar5 = 0;
          if (param_2 != 0) {
            uVar5 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar5 * param_2;
        }
        if (uVar7 != uVar6) {
          if (*(long *)(lVar1 + uVar7 * 8) == 0) {
            *(long **)(lVar1 + uVar7 * 8) = plVar3;
            uVar6 = uVar7;
          }
          else {
            *plVar3 = *plVar2;
            *plVar2 = **(undefined8 **)(lVar1 + uVar7 * 8);
            **(long **)(lVar1 + uVar7 * 8) = (long)plVar2;
            plVar2 = plVar3;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 00464568; end: 00464663;  */

void FUN_00464568(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_00464664(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    FUN_0046467c(plVar3);
    FUN_00464664(param_1,plVar3);
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
            *plVar3 = **(undefined8 **)(lVar1 + uVar2 * 8);
            **(long **)(lVar1 + uVar2 * 8) = (long)plVar3;
            plVar3 = plVar4;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 00464664; end: 0046467b;  */

void FUN_00464664(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 0046467c; end: 00464697;  */

long FUN_0046467c(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)(lVar1);
    return lVar1;
  }
  FUN_0040cee8();
  FUN_004646bc();
  return param_1;
}



/* Entry: 00464698; end: 004646bb;  */

undefined8 FUN_00464698(undefined8 param_1)

{
  FUN_004646bc(param_1,0);
  return param_1;
}



/* Entry: 004646bc; end: 004646d3;  */

void FUN_004646bc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x10);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(lVar1);
  return;
}



/* Entry: 004646d4; end: 00464717;  */

void FUN_004646d4(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_2 + 0x10);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(param_2);
  return;
}



/* Entry: 00464718; end: 00464793;  */

void FUN_00464718(undefined8 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined4 auStack_68 [2];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  pcVar1 = (code *)*param_1;
  auStack_68[0] = *param_2;
  uStack_58 = *(undefined8 *)(param_2 + 4);
  uStack_60 = *(undefined8 *)(param_2 + 2);
  uStack_50 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  uStack_40 = *(undefined8 *)(param_2 + 10);
  uStack_48 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  uStack_38 = *(undefined8 *)(param_2 + 0xc);
  uStack_30 = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  uStack_28 = param_2[0x10];
  (*pcVar1)(auStack_68,param_1);
  func_0x00464a6c();
  return;
}



/* Entry: 00464794; end: 004648eb;  */

bool FUN_00464794(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  
  plVar2 = (long *)(param_1 + 0x70);
  FUN_00464948();
  if (plVar2 == (long *)0x0) goto LAB_004648d4;
  uVar5 = *(ulong *)(param_1 + 0x78);
  lVar3 = *plVar2;
  uVar4 = plVar2[1];
  uVar7 = uVar5 - 1;
  if ((uVar5 & uVar7) == 0) {
    uVar4 = uVar7 & uVar4;
  }
  else if (uVar5 <= uVar4) {
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = uVar4 / uVar5;
    }
    uVar4 = uVar4 - uVar9 * uVar5;
  }
  lVar8 = *(long *)(param_1 + 0x70);
  plVar1 = *(long **)(lVar8 + uVar4 * 8);
  do {
    plVar6 = plVar1;
    plVar1 = (long *)*plVar6;
  } while ((long *)*plVar6 != plVar2);
  if (plVar6 == (long *)(param_1 + 0x80)) {
LAB_00464834:
    if (lVar3 == 0) {
LAB_00464868:
      *(undefined8 *)(lVar8 + uVar4 * 8) = 0;
      lVar3 = *plVar2;
      goto LAB_00464870;
    }
    uVar9 = *(ulong *)(lVar3 + 8);
    if ((uVar5 & uVar7) == 0) {
      uVar10 = uVar9 & uVar7;
    }
    else {
      uVar10 = uVar9;
      if (uVar5 <= uVar9) {
        uVar10 = 0;
        if (uVar5 != 0) {
          uVar10 = uVar9 / uVar5;
        }
        uVar10 = uVar9 - uVar10 * uVar5;
      }
    }
    if (uVar10 != uVar4) goto LAB_00464868;
LAB_00464878:
    if ((uVar5 & uVar7) == 0) {
      uVar9 = uVar9 & uVar7;
    }
    else if (uVar5 <= uVar9) {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar7 * uVar5;
    }
    if (uVar9 != uVar4) {
      *(long **)(lVar8 + uVar9 * 8) = plVar6;
      lVar3 = *plVar2;
    }
  }
  else {
    uVar9 = plVar6[1];
    if ((uVar5 & uVar7) == 0) {
      uVar9 = uVar9 & uVar7;
    }
    else if (uVar5 <= uVar9) {
      uVar10 = 0;
      if (uVar5 != 0) {
        uVar10 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar10 * uVar5;
    }
    if (uVar9 != uVar4) goto LAB_00464834;
LAB_00464870:
    if (lVar3 != 0) {
      uVar9 = *(ulong *)(lVar3 + 8);
      goto LAB_00464878;
    }
  }
  *plVar6 = lVar3;
  *plVar2 = 0;
  *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + -1;
  func_0x00464aa4();
LAB_004648d4:
  return plVar2 != (long *)0x0;
}



/* Entry: 004648ec; end: 00464947;  */

undefined4 * FUN_004648ec(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 2,param_2 + 2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 8,param_2 + 8);
  return param_1;
}



/* Entry: 00464948; end: 00464a0f;  */

long FUN_00464948(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    FUN_004597c4();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar4 != plVar2) break;
        lVar3 = (long)(plVar5 + 2);
        FUN_00459c38(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & uVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 00464a10; end: 00464a63;  */

long FUN_00464a10(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x20);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 8);
  return param_1;
}



/* Entry: 00464a64; end: 00464ac7;  */

void FUN_00464a64(void)

{
  return;
}



/* Entry: 00464ac8; end: 00464c87;  */

undefined8 * FUN_00464ac8(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined1 *puVar5;
  char *pcVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_b0;
  qword qStack_a8;
  undefined1 auStack_a0 [24];
  undefined4 uStack_88;
  undefined4 uStack_84;
  code *pcStack_80;
  undefined **ppuStack_78;
  char *pcStack_70;
  undefined1 *puStack_50;
  long lStack_48;
  
  puVar8 = &uStack_b0;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  qStack_a8 = *(qword *)(param_1 + 0x10);
  uStack_b0 = *(undefined8 *)(param_1 + 8);
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar7 = (long *)(*(long *)(param_1 + 0x10) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar5 = auStack_a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  uStack_88 = param_3;
  uStack_84 = param_4;
  FUN_0045cc3c();
  lVar9 = puVar2[2];
  __ZNSt3__15mutex4lockEv(lVar9 + 8);
  lVar10 = *(long *)(lVar9 + 0x70);
  pcStack_80 = FUN_00464d08;
  ppuStack_78 = &PTR_FUN_009e6110;
  pcVar6 = segment_command_00000020.segname + 8;
  __Znwm();
  *(qword *)(pcVar6 + 8) = qStack_a8;
  *(undefined8 *)pcVar6 = uStack_b0;
  uStack_b0 = 0;
  qStack_a8 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(pcVar6 + 0x10,auStack_a0)
  ;
  *(ulong *)(pcVar6 + 0x28) = CONCAT44(uStack_84,uStack_88);
  pcStack_70 = pcVar6;
  puStack_50 = puVar5;
  FUN_0045cc5c(lVar9 + 0x48,&pcStack_80);
  func_0x00464d5c();
  __ZNSt3__15mutex6unlockEv(lVar9 + 8);
  if (lVar10 == 0) {
    plVar7 = (long *)*puVar2;
    ppuStack_78 = (undefined **)puVar2[3];
    pcStack_80 = (code *)puVar2[2];
    if (puVar2[3] != 0) {
      plVar1 = (long *)(puVar2[3] + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    (**(code **)(*plVar7 + 0x10))(plVar7,&pcStack_80);
    FUN_0045d30c(&pcStack_80);
  }
  FUN_00464c88();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return puVar8;
  }
  ___stack_chk_fail();
  FUN_0045d30c(&pcStack_80);
  FUN_00464c88(&uStack_b0);
  __Unwind_Resume();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
            ((undefined1 *)((long)puVar8 + 0x10));
  if (*(long *)((long)puVar8 + 8) != 0) {
    func_0x0040ce94();
  }
  return (undefined8 *)(undefined1 *)puVar8;
}



/* Entry: 00464c88; end: 00464caf;  */

long FUN_00464c88(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x10);
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0040ce94();
  }
  return param_1;
}



/* Entry: 00464cb0; end: 00464cb3;  */

undefined8 * FUN_00464cb0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e60d0;
  func_0x0045cbec(param_1 + 3);
  func_0x0045f4d0(param_1 + 1);
  return param_1;
}



/* Entry: 00464cb4; end: 00464cc7;  */

void FUN_00464cb4(void)

{
  FUN_00464cc8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00464cc8; end: 00464d07;  */

undefined8 * FUN_00464cc8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e60d0;
  func_0x0045cbec(param_1 + 3);
  func_0x0045f4d0(param_1 + 1);
  return param_1;
}



/* Entry: 00464d08; end: 00464d23;  */

void FUN_00464d08(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00464d20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*puVar1 + 0x10))
            ((long *)*puVar1,puVar1 + 2,*(undefined4 *)(puVar1 + 5),
             *(undefined4 *)((long)puVar1 + 0x2c));
  return;
}



/* Entry: 00464d24; end: 00464d43;  */

void FUN_00464d24(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_00464c88();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 00464d44; end: 00464d6b;  */

void FUN_00464d44(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 00464d6c; end: 00464ee7;  */

undefined8 * FUN_00464d6c(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long lVar5;
  long lVar6;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  puVar3 = &uStack_a0;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  uStack_98 = *(undefined8 *)(param_1 + 0x10);
  uStack_a0 = *(undefined8 *)(param_1 + 8);
  if (*(long *)(param_1 + 0x10) != 0) {
    do {
      func_0x00464ff4();
    } while (extraout_w10 != 0);
  }
  lStack_88 = param_2[1];
  uStack_90 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x00464ff4();
    } while (extraout_w10_00 != 0);
  }
  FUN_0045cc3c();
  lVar5 = puVar1[2];
  __ZNSt3__15mutex4lockEv(lVar5 + 8);
  uStack_68 = uStack_98;
  uStack_70 = uStack_a0;
  lVar6 = *(long *)(lVar5 + 0x70);
  uStack_80 = 0x464f94;
  ppuStack_78 = &PTR_DAT_009e6178;
  uStack_a0 = 0;
  uStack_98 = 0;
  lStack_58 = lStack_88;
  uStack_60 = uStack_90;
  if (lStack_88 != 0) {
    do {
      func_0x00464ff4();
    } while (extraout_w10_01 != 0);
  }
  lStack_50 = param_1;
  FUN_0045cc5c(lVar5 + 0x48,&uStack_80);
  func_0x00465004();
  __ZNSt3__15mutex6unlockEv(lVar5 + 8);
  if (lVar6 == 0) {
    plVar2 = (long *)*puVar1;
    ppuStack_78 = (undefined **)puVar1[3];
    uStack_80 = puVar1[2];
    if (puVar1[3] != 0) {
      do {
        func_0x00464ff4();
      } while (extraout_w10_02 != 0);
    }
    (**(code **)(*plVar2 + 0x10))();
    FUN_0045d30c(&uStack_80);
  }
  FUN_00464ee8();
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_48) {
    ___stack_chk_fail();
    FUN_0045d30c(&uStack_80);
    FUN_00464ee8(&uStack_a0);
    puVar4 = (undefined1 *)puVar3;
    __Unwind_Resume();
    FUN_00464f28(puVar4 + 0x10);
    func_0x0045e910();
    if (puVar4 != (undefined1 *)0x0) {
      func_0x0040ce94();
    }
    return (undefined8 *)(undefined1 *)puVar3;
  }
  return puVar3;
}



/* Entry: 00464ee8; end: 00464f0f;  */

undefined8 FUN_00464ee8(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_00464f28(param_1 + 0x10);
  func_0x0045e910();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return unaff_x19;
}



/* Entry: 00464f10; end: 00464f13;  */

undefined8 * FUN_00464f10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e6138;
  func_0x0045cbec(param_1 + 3);
  func_0x0045e7a8(param_1 + 1);
  return param_1;
}



/* Entry: 00464f14; end: 00464f27;  */

void FUN_00464f14(void)

{
  func_0x00464f54();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00464f28; end: 00464f93;  */

long FUN_00464f28(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0040ce94();
  }
  return param_1;
}



/* Entry: 00464f94; end: 00465013;  */

void FUN_00464f94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00464fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x10))(*(long **)(param_1 + 0x10),param_1 + 0x20);
  return;
}



/* Entry: 00465014; end: 00465117;  */

void FUN_00465014(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  char *pcVar2;
  undefined1 auStack_70 [8];
  ulong uStack_68;
  byte bStack_59;
  char cStack_58;
  undefined1 auStack_50 [24];
  byte bStack_38;
  
  FUN_004732d8(auStack_50,param_2,0x12);
  pcVar2 = (char *)(ulong)bStack_38;
  if ((bStack_38 & 1) != 0) {
    puVar1 = auStack_50;
    FUN_00465118(puVar1,&PTR_s_CUSTOM_009e61b0);
    if ((int)puVar1 != 0) {
      FUN_004732d8(auStack_70,param_2,0x13);
      if (cStack_58 == '\x01') {
        if (-1 < (char)bStack_59) {
          uStack_68 = (ulong)bStack_59;
        }
        if (uStack_68 == 0) goto LAB_004650d0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1,auStack_70)
        ;
      }
      else {
LAB_004650d0:
        FUN_00425cb4(param_1,"aws.api.snapchat.com:443");
      }
      FUN_00457530(auStack_70);
      goto LAB_004650e8;
    }
    FUN_00465118(auStack_50,&PTR_s_STAGING_009e61a0);
    pcVar2 = "us-east1-aws-api.sc-gw-dev.snapchat.com:443";
  }
  func_0x0046cd9c(pcVar2);
  FUN_00425cb4();
LAB_004650e8:
  FUN_00457530(auStack_50);
  return;
}



/* Entry: 00465118; end: 0046514f;  */

bool FUN_00465118(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_1 + 3) != '\x01') {
    return false;
  }
  uVar4 = *param_2;
  uVar1 = param_1[1];
  puVar2 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar2 = param_1;
  }
  if (param_2[1] == uVar1) {
    func_0x0046d038(uVar4,param_2[1],puVar2);
    bVar3 = (int)uVar4 == 0;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}



/* Entry: 00465150; end: 00465297;  */

void FUN_00465150(long *param_1,undefined8 param_2,undefined *param_3,undefined1 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auStack_78 [24];
  char cStack_60;
  undefined1 auStack_58 [24];
  long lStack_40;
  long lStack_38;
  
  FUN_00465298(&lStack_40);
  FUN_0046083c(lStack_40 + 8,param_2);
  FUN_00465014(auStack_58,param_3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lStack_40 + 0x98,auStack_58);
  uVar2 = 0;
  puVar1 = param_3;
  FUN_0047332c();
  if ((uVar2 & 1) == 0) {
    puVar1 = (undefined *)0xbb8;
  }
  *(undefined **)(lStack_40 + 0x68) = puVar1;
  *(undefined1 *)(lStack_40 + 0x70) = 1;
  uVar2 = 0x17;
  puVar1 = param_3;
  FUN_0047332c();
  if ((uVar2 & 1) == 0) {
    puVar1 = &UNK_00003a98;
  }
  *(undefined **)(lStack_40 + 0x90) = puVar1;
  FUN_004732d8(auStack_78,param_3,0x15);
  if (cStack_60 == '\x01') {
    FUN_0046083c(lStack_40 + 0x48,auStack_78);
  }
  param_1[1] = lStack_38;
  *param_1 = lStack_40;
  *(undefined1 *)(lStack_40 + 0xb0) = param_4;
  lStack_40 = 0;
  lStack_38 = 0;
  FUN_00457530(auStack_78);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  FUN_00465f1c(&lStack_40);
  return;
}



/* Entry: 00465298; end: 004652b3;  */

void FUN_00465298(void)

{
  undefined1 uStack_11;
  
  FUN_00465e04(&uStack_11);
  return;
}



/* Entry: 004652b4; end: 00465483;  */

undefined1 * FUN_004652b4(undefined1 *param_1,undefined8 param_2,uint param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  undefined1 auStack_1c0 [24];
  undefined1 uStack_1a8;
  undefined1 auStack_1a0 [24];
  undefined1 uStack_188;
  undefined1 auStack_180 [24];
  undefined1 uStack_168;
  undefined1 auStack_160 [48];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined1 auStack_108 [8];
  ulong uStack_100;
  byte bStack_f1;
  char cStack_f0;
  undefined1 auStack_e8 [176];
  undefined8 uStack_38;
  
  func_0x0046cb34();
  uStack_38 = extraout_x8;
  FUN_004732d8(auStack_108);
  uVar1 = cStack_f0 == '\x01';
  if ((bool)uVar1) {
    uVar1 = bStack_f1 == 0;
    if (-1 < (char)bStack_f1) {
      uStack_100 = (ulong)bStack_f1;
    }
    if ((param_3 != 0) && (uStack_100 == 0)) {
LAB_00465354:
      *param_1 = 0;
      param_1[0xb0] = 0;
      goto LAB_00465400;
    }
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_110 = 0x3f800000;
    if (uStack_100 != 0) {
      FUN_00465a8c(auStack_e8,&PTR_s_x_snap_route_tag_009e61c0,auStack_108);
      FUN_00465484(&uStack_130,auStack_e8,1);
      func_0x00459d5c(auStack_e8);
    }
  }
  else {
    if ((param_3 & 1) != 0) goto LAB_00465354;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_110 = 0x3f800000;
  }
  FUN_00465ac8(auStack_160,&uStack_130);
  auStack_180[0] = 0;
  uStack_168 = 0;
  auStack_1a0[0] = 0;
  uStack_188 = 0;
  auStack_1c0[0] = 0;
  uStack_1a8 = 0;
  FUN_004654ac(auStack_e8,0,0,auStack_160,param_3 | 0x100,auStack_180,auStack_1a0,0,auStack_1c0);
  FUN_00465bcc(param_1,auStack_e8);
  FUN_00463c7c(auStack_e8);
  FUN_00457530(auStack_1c0);
  FUN_00457530(auStack_1a0);
  FUN_00457530(auStack_180);
  FUN_00459de4(auStack_160);
  func_0x00459d84(&uStack_130);
LAB_00465400:
  puVar2 = auStack_108;
  FUN_00457530();
  func_0x0046ca74(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00459d5c(auStack_e8);
  func_0x00459d84(&uStack_130);
  puVar2 = auStack_108;
  FUN_00457530(puVar2);
  func_0x0046cc64();
  FUN_00465f40();
  return puVar2;
}



/* Entry: 00465484; end: 004654ab;  */

undefined8 FUN_00465484(undefined8 param_1,long param_2,long param_3)

{
  FUN_00465f40(param_1,param_2,param_2 + param_3 * 0x30);
  return param_1;
}



/* Entry: 004654ac; end: 004654b3;  */

undefined8 *
FUN_004654ac(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined2 unaff_w23;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *in_stack_00000000;
  
  func_0x0046d244();
  *param_1 = param_2;
  param_1[1] = param_3;
  FUN_00463b54(param_1 + 2,param_4);
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined2 *)(param_1 + 8) = unaff_w23;
  *(undefined1 *)(param_1 + 0xc) = 0;
  if (*(char *)(unaff_x22 + 3) == '\x01') {
    uVar2 = unaff_x22[1];
    uVar1 = *unaff_x22;
    param_1[0xb] = unaff_x22[2];
    param_1[10] = uVar2;
    param_1[9] = uVar1;
    unaff_x22[1] = 0;
    unaff_x22[2] = 0;
    *unaff_x22 = 0;
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  if (*(char *)(unaff_x21 + 3) == '\x01') {
    uVar2 = unaff_x21[1];
    uVar1 = *unaff_x21;
    param_1[0xf] = unaff_x21[2];
    param_1[0xe] = uVar2;
    param_1[0xd] = uVar1;
    unaff_x21[1] = 0;
    unaff_x21[2] = 0;
    *unaff_x21 = 0;
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x11] = unaff_x20;
  *(undefined1 *)(param_1 + 0x15) = 0;
  if (*(char *)(in_stack_00000000 + 3) == '\x01') {
    uVar2 = in_stack_00000000[1];
    uVar1 = *in_stack_00000000;
    param_1[0x14] = in_stack_00000000[2];
    param_1[0x13] = uVar2;
    param_1[0x12] = uVar1;
    in_stack_00000000[1] = 0;
    in_stack_00000000[2] = 0;
    *in_stack_00000000 = 0;
    *(undefined1 *)(param_1 + 0x15) = 1;
  }
  return param_1;
}



/* Entry: 004654b4; end: 0046579b;  */

void FUN_004654b4(undefined8 param_1,uint param_2)

{
  ulong uVar1;
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  undefined4 uVar2;
  undefined8 extraout_x8;
  uint uVar3;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0046d210();
  FUN_0046579c(extraout_x8);
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0046cdd4();
  }
  func_0x00532e08(unaff_x19 + 0x18);
  if (*(char *)(unaff_x20 + 0x20) == '\x01') {
    *(undefined8 *)(unaff_x19 + 0x98) = *(undefined8 *)(unaff_x20 + 0x18);
  }
  *(undefined8 *)(unaff_x19 + 0xa0) = *(undefined8 *)(unaff_x20 + 0x28);
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0046cdd4();
  }
  func_0x00532e08(unaff_x19 + 0x28,unaff_x20 + 0x30);
  if (param_2 != 2) {
    param_2 = (uint)(param_2 == 1);
  }
  *(uint *)(unaff_x19 + 0xb0) = param_2;
  *(uint *)(unaff_x19 + 0x10) = *(uint *)(unaff_x19 + 0x10) | 1;
  if (*(long *)(unaff_x19 + 0x68) == 0) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0046d090();
    }
    FUN_00465be8();
    *(ulong *)(unaff_x19 + 0x68) = uVar1;
  }
  func_0x0046d304(*(undefined1 *)(unaff_x20 + 0x48));
  *(uint *)(unaff_x19 + 0x10) = extraout_w8 | 2;
  if (*(long *)(unaff_x19 + 0x70) == 0) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0046d090();
    }
    FUN_00465be8();
    *(ulong *)(unaff_x19 + 0x70) = uVar1;
  }
  func_0x0046d304(*(undefined1 *)(unaff_x20 + 0x49));
  *(uint *)(unaff_x19 + 0x10) = extraout_w8_00 | 4;
  if (*(long *)(unaff_x19 + 0x78) == 0) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0046d090();
    }
    FUN_00465be8();
    *(ulong *)(unaff_x19 + 0x78) = uVar1;
  }
  func_0x0046d304(*(undefined1 *)(unaff_x20 + 0x4a));
  *(uint *)(unaff_x19 + 0x10) = extraout_w8_01 | 0x20;
  if (*(long *)(unaff_x19 + 0x90) == 0) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0046d090();
    }
    FUN_00465be8();
    *(ulong *)(unaff_x19 + 0x90) = uVar1;
  }
  func_0x0046d304(*(undefined1 *)(unaff_x20 + 0xb0));
  *(uint *)(unaff_x19 + 0x10) = extraout_w8_02 | 8;
  uVar1 = *(ulong *)(unaff_x19 + 0x80);
  if (uVar1 == 0) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0046d090();
    }
    FUN_00465be8();
    *(ulong *)(unaff_x19 + 0x80) = uVar1;
  }
  *(undefined1 *)(uVar1 + 0x10) = *(undefined1 *)(unaff_x20 + 0x170);
  if (*(char *)(unaff_x20 + 0x80) == '\x01') {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0046cdd4();
    }
    func_0x00532e08(unaff_x19 + 0x20,unaff_x20 + 0x68);
  }
  if (*(char *)(unaff_x20 + 0xa0) == '\x01') {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0046cdd4();
    }
    func_0x00532e08(unaff_x19 + 0x30,unaff_x20 + 0x88);
  }
  if (*(char *)(unaff_x20 + 0xf0) == '\x01') {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0046cdd4();
    }
    func_0x00532e08(unaff_x19 + 0x60,unaff_x20 + 0xd8);
  }
  uVar3 = *(int *)(unaff_x20 + 0x4c) - 1;
  if (uVar3 < 5) {
    uVar2 = *(undefined4 *)(&UNK_008031e0 + (ulong)uVar3 * 4);
  }
  else {
    uVar2 = 0;
  }
  *(undefined4 *)(unaff_x19 + 0xb4) = uVar2;
  uVar3 = *(uint *)(unaff_x20 + 0x50);
  if (uVar3 != 2) {
    uVar3 = (uint)(uVar3 == 1);
  }
  *(uint *)(unaff_x19 + 0xc0) = uVar3;
  if (*(char *)(unaff_x20 + 0x60) == '\x01') {
    *(undefined8 *)(unaff_x19 + 0xb8) = *(undefined8 *)(unaff_x20 + 0x58);
  }
  *(long *)(unaff_x19 + 200) = (long)*(short *)(unaff_x20 + 0xb2);
  *(undefined8 *)(unaff_x19 + 0xa8) = *(undefined8 *)(unaff_x20 + 0xb8);
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0046cdd4();
  }
  func_0x00532e08(unaff_x19 + 0x40,unaff_x20 + 0xc0);
  if (*(char *)(unaff_x20 + 0x128) == '\x01') {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0046cdd4();
    }
    func_0x00532e08(unaff_x19 + 0x48,unaff_x20 + 0x110);
  }
  if (*(char *)(unaff_x20 + 0x148) == '\x01') {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0046cdd4();
    }
    func_0x00532e08(unaff_x19 + 0x50,unaff_x20 + 0x130);
  }
  if (*(char *)(unaff_x20 + 0x168) == '\x01') {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0046cdd4();
    }
    func_0x00532e08(unaff_x19 + 0x58,unaff_x20 + 0x150);
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0046cdd4();
  }
  func_0x00532e08(unaff_x19 + 0x38,unaff_x20 + 0xf8);
  *(undefined4 *)(unaff_x19 + 0xc4) = 2;
  return;
}



/* Entry: 0046579c; end: 0046580f;  */

undefined8 * FUN_0046579c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e9770;
  param_1[1] = 0;
  FUN_0048de08();
  return param_1;
}



/* Entry: 00465810; end: 00465943;  */

void FUN_00465810(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uStack_13d;
  undefined4 uStack_13c;
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [169];
  undefined1 auStack_7f [23];
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  FUN_00465944(auStack_50);
  func_0x00465960(auStack_60,param_4);
  FUN_00465980(&uStack_68);
  FUN_005b8a00(uStack_68,param_2);
  (**(code **)(*(long *)*param_2 + 0x10))(auStack_128);
  uStack_13c = 0xf;
  uStack_13d = 0;
  FUN_004659c8(auStack_138,param_3,auStack_60,auStack_50,&uStack_68,&uStack_13c,auStack_7f,
               &uStack_13d);
  func_0x004659f4(param_1,auStack_138);
  func_0x00465de0(auStack_138);
  func_0x00465c30(auStack_128);
  func_0x00465c64(&uStack_68);
  FUN_00466dc4(auStack_60);
  FUN_00466354(auStack_50);
  return;
}



/* Entry: 00465944; end: 0046597f;  */

void FUN_00465944(void)

{
  undefined1 uStack_11;
  
  FUN_00466270(&uStack_11);
  return;
}



/* Entry: 00465980; end: 004659c7;  */

void FUN_00465980(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x140;
  __Znwm();
  _bzero();
  FUN_00466de8(uVar1);
  *param_1 = uVar1;
  return;
}



/* Entry: 004659c8; end: 00465a4b;  */

void FUN_004659c8(void)

{
  func_0x0046d264();
  FUN_00466fbc();
  return;
}



/* Entry: 00465a4c; end: 00465a8b;  */

int FUN_00465a4c(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar5 = *param_1;
  uVar4 = param_1[1];
  uVar3 = param_3;
  if (uVar4 <= param_3) {
    uVar3 = uVar4;
  }
  _memcmp(uVar5,param_2,uVar3);
  iVar1 = 1;
  if (uVar4 < param_3) {
    iVar1 = -1;
  }
  iVar2 = 0;
  if (uVar4 != param_3) {
    iVar2 = iVar1;
  }
  iVar1 = (int)uVar5;
  if ((int)uVar5 == 0) {
    iVar1 = iVar2;
  }
  return iVar1;
}



/* Entry: 00465a8c; end: 00465ac7;  */

long FUN_00465a8c(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_00425cb4(param_1,*param_2);
  func_0x0046d048(lVar1 + 0x18);
  return param_1;
}



/* Entry: 00465ac8; end: 00465ae3;  */

void FUN_00465ac8(long param_1)

{
  FUN_00463bb0();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 00465ae4; end: 00465bcb;  */

undefined8 *
FUN_00465ae4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined2 unaff_w23;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *in_stack_00000000;
  
  func_0x0046d244();
  *param_1 = param_2;
  param_1[1] = param_3;
  FUN_00463b54(param_1 + 2,param_4);
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined2 *)(param_1 + 8) = unaff_w23;
  *(undefined1 *)(param_1 + 0xc) = 0;
  if (*(char *)(unaff_x22 + 3) == '\x01') {
    uVar2 = unaff_x22[1];
    uVar1 = *unaff_x22;
    param_1[0xb] = unaff_x22[2];
    param_1[10] = uVar2;
    param_1[9] = uVar1;
    unaff_x22[1] = 0;
    unaff_x22[2] = 0;
    *unaff_x22 = 0;
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  if (*(char *)(unaff_x21 + 3) == '\x01') {
    uVar2 = unaff_x21[1];
    uVar1 = *unaff_x21;
    param_1[0xf] = unaff_x21[2];
    param_1[0xe] = uVar2;
    param_1[0xd] = uVar1;
    unaff_x21[1] = 0;
    unaff_x21[2] = 0;
    *unaff_x21 = 0;
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x11] = unaff_x20;
  *(undefined1 *)(param_1 + 0x15) = 0;
  if (*(char *)(in_stack_00000000 + 3) == '\x01') {
    uVar2 = in_stack_00000000[1];
    uVar1 = *in_stack_00000000;
    param_1[0x14] = in_stack_00000000[2];
    param_1[0x13] = uVar2;
    param_1[0x12] = uVar1;
    in_stack_00000000[1] = 0;
    in_stack_00000000[2] = 0;
    *in_stack_00000000 = 0;
    *(undefined1 *)(param_1 + 0x15) = 1;
  }
  return param_1;
}



/* Entry: 00465bcc; end: 00465be7;  */

void FUN_00465bcc(long param_1)

{
  FUN_00463a70();
  *(undefined1 *)(param_1 + 0xb0) = 1;
  return;
}



/* Entry: 00465be8; end: 00465c83;  */

void FUN_00465be8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x0046d104();
  }
  else {
    func_0x005510c4(param_1,0x18);
  }
  *puVar1 = &PTR_FUN_00a0d798;
  puVar1[1] = param_1;
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  return;
}



/* Entry: 00465c84; end: 00465c9b;  */

void FUN_00465c84(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_00465cb8(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 00465c9c; end: 00465cb7;  */

void FUN_00465c9c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_00465cb8(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00465cb8; end: 00465d4f;  */

void FUN_00465cb8(void)

{
  long unaff_x19;
  
  func_0x0046d2cc();
  func_0x00465c30();
  FUN_0040ad84(unaff_x19 + 0x40);
  func_0x00465cf0(unaff_x19 + 0x28);
  func_0x00465dbc(unaff_x19 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00779c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_00998a30)();
  return;
}



/* Entry: 00465d50; end: 00465d57;  */

void FUN_00465d50(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0046cd28(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    func_0x00465d8c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 00465d58; end: 00465e03;  */

void FUN_00465d58(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0046cd28();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    func_0x00465d8c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 00465e04; end: 00465e63;  */

void FUN_00465e04(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 uStack_30;
  
  func_0x0046cb34();
  func_0x0046d01c();
  FUN_00465e64();
  FUN_00465eb4(uStack_30);
  func_0x0046cc18();
  func_0x00465f0c();
  func_0x0046ca74(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0046ce90();
  func_0x00465f0c();
  func_0x0046cc64();
  func_0x0046d004();
  FUN_00465e84();
  func_0x0046d010();
  return;
}



/* Entry: 00465e64; end: 00465e83;  */

void FUN_00465e64(void)

{
  func_0x0046d004();
  FUN_00465e84();
  func_0x0046d010();
  return;
}



/* Entry: 00465e84; end: 00465eb3;  */

void FUN_00465e84(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0x124924924924925) {
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)(param_2 * 0xe0);
    return;
  }
  FUN_0040cee8();
  func_0x0046cfdc();
  func_0x0046d204(&UNK_009e61c8);
  FUN_005bcbe8();
  return;
}



/* Entry: 00465eb4; end: 00465edf;  */

void FUN_00465eb4(void)

{
  func_0x0046cfdc();
  func_0x0046d204(&UNK_009e61c8);
  FUN_005bcbe8();
  return;
}



/* Entry: 00465ee0; end: 00465ee3;  */

void FUN_00465ee0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e61d8;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 00465ee4; end: 00465ef7;  */

void FUN_00465ee4(void)

{
  func_0x00465f00();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00465ef8; end: 00465f1b;  */

void FUN_00465ef8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0046cd04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 00465f1c; end: 00465f3f;  */

void FUN_00465f1c(long param_1)

{
  func_0x0046cd3c();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 00465f40; end: 00465ff3;  */

void FUN_00465f40(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x21;
  long lVar2;
  
  func_0x0046d258();
  if (*(long *)(param_1 + 8) != 0) {
    plVar1 = (long *)param_1;
    FUN_00465ff4();
    for (; (plVar1 != (long *)0x0 && (unaff_x21 != unaff_x20)); unaff_x21 = unaff_x21 + 0x30) {
      FUN_00466020(param_1,plVar1 + 2,unaff_x21);
      lVar2 = *plVar1;
      func_0x00466054(param_1,plVar1);
      plVar1 = (long *)lVar2;
    }
    func_0x0046d1d0();
  }
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x30) {
    func_0x00459518(param_1,unaff_x21);
  }
  return;
}



/* Entry: 00465ff4; end: 0046601f;  */

long FUN_00465ff4(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1[1];
  for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
    *(undefined8 *)(*param_1 + lVar1 * 8) = 0;
  }
  lVar1 = param_1[2];
  param_1[2] = 0;
  param_1[3] = 0;
  return lVar1;
}



/* Entry: 00466020; end: 004660af;  */

void FUN_00466020(undefined8 param_1,long param_2,long param_3)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00779c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__00998a38)
            (param_2 + 0x18,param_3 + 0x18);
  return;
}



/* Entry: 004660b0; end: 004661d3;  */

long FUN_004660b0(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong unaff_x21;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar4 = param_1[1];
  if (uVar4 != 0) {
    func_0x0046d258();
    uVar5 = uVar4 - 1;
    if ((uVar4 & uVar5) == 0) {
      uVar6 = uVar5 & unaff_x21;
    }
    else {
      uVar2 = 0;
      if (uVar4 != 0) {
        uVar2 = unaff_x21 / uVar4;
      }
      uVar6 = unaff_x21;
      if (uVar4 <= unaff_x21) {
        uVar6 = unaff_x21 - uVar2 * uVar4;
      }
    }
    plVar3 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar3 != (long *)0x0) {
      do {
        while( true ) {
          plVar3 = (long *)*plVar3;
          if (plVar3 == (long *)0x0) goto LAB_00466158;
          uVar2 = plVar3[1];
          if (uVar2 != unaff_x21) break;
          uVar2 = (ulong)(plVar3 + 2);
          FUN_00459c38();
          if ((uVar2 & 1) != 0) {
            return (long)plVar3;
          }
        }
        if ((uVar4 & uVar5) == 0) {
          uVar2 = uVar2 & uVar5;
        }
        else if (uVar4 <= uVar2) {
          uVar1 = 0;
          if (uVar4 != 0) {
            uVar1 = uVar2 / uVar4;
          }
          uVar2 = uVar2 - uVar1 * uVar4;
        }
      } while (uVar2 == uVar6);
    }
  }
LAB_00466158:
  if ((uVar4 == 0) || (*(float *)(param_1 + 4) * (float)uVar4 < (float)(param_1[3] + 1))) {
    uVar5 = 1;
    if (2 < uVar4) {
      uVar5 = (ulong)((uVar4 & uVar4 - 1) != 0);
    }
    uVar5 = uVar5 | uVar4 << 1;
    uVar4 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar5 <= uVar4) {
      uVar5 = uVar4;
    }
    FUN_00459320(param_1,uVar5);
  }
  return 0;
}



/* Entry: 004661d4; end: 0046626f;  */

void FUN_004661d4(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  
  uVar2 = param_1[1];
  uVar5 = param_2[1];
  uVar3 = uVar2 - 1;
  if ((uVar2 & uVar3) == 0) {
    uVar5 = uVar3 & uVar5;
  }
  else if (uVar2 <= uVar5) {
    uVar1 = 0;
    if (uVar2 != 0) {
      uVar1 = uVar5 / uVar2;
    }
    uVar5 = uVar5 - uVar1 * uVar2;
  }
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + uVar5 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *param_2 = *plVar6;
    *plVar6 = (long)param_2;
    *(long **)(lVar4 + uVar5 * 8) = plVar6;
    if (*param_2 != 0) {
      uVar5 = *(ulong *)(*param_2 + 8);
      if ((uVar2 & uVar3) == 0) {
        uVar5 = uVar5 & uVar3;
      }
      else if (uVar2 <= uVar5) {
        uVar3 = 0;
        if (uVar2 != 0) {
          uVar3 = uVar5 / uVar2;
        }
        uVar5 = uVar5 - uVar3 * uVar2;
      }
      *(long **)(lVar4 + uVar5 * 8) = param_2;
    }
  }
  else {
    *param_2 = *plVar6;
    *plVar6 = (long)param_2;
  }
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 00466270; end: 004662db;  */

void FUN_00466270(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 *puStack_30;
  
  func_0x0046cb34();
  func_0x0046d01c();
  FUN_004662dc();
  *puStack_30 = &PTR_FUN_009e6228;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  puStack_30[3] = &PTR_FUN_00a03b80;
  func_0x0046cc18();
  func_0x00466344();
  func_0x0046ca74(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x0046d004();
  FUN_004662fc();
  func_0x0046d010();
  return;
}



/* Entry: 004662dc; end: 004662fb;  */

void FUN_004662dc(void)

{
  func_0x0046d004();
  FUN_004662fc();
  func_0x0046d010();
  return;
}



/* Entry: 004662fc; end: 00466317;  */

void FUN_004662fc(undefined8 *param_1,ulong param_2)

{
  if (param_2 >> 0x3b == 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)(param_2 << 5);
    return;
  }
  FUN_0040cee8();
  *param_1 = &PTR_FUN_009e6228;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}


