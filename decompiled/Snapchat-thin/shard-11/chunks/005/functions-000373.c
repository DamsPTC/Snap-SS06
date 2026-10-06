/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1086d0498; end: 1086d04b7;  */

void FUN_1086d0498(long param_1)

{
  if (*(char *)(param_1 + 0x58) == '\x01') {
    func_0x000107c27914();
  }
  return;
}



/* Entry: 1086d04b8; end: 1086d057b;  */

void FUN_1086d04b8(long param_1)

{
  func_0x0001086cf230(param_1 + 0x128);
  FUN_108636b54(param_1 + 0x90);
  func_0x000107c279c4(param_1 + 0x58);
  func_0x000107c27914(param_1 + 0x38);
  func_0x000107c27914(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 1086d057c; end: 1086d05e3;  */

void FUN_1086d057c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  func_0x0001086daa90();
  if (param_4 != 0) {
    func_0x000107c32678();
    FUN_1086d05e4(param_1,param_4);
    lVar1 = *(long *)(unaff_x19 + 8);
    if (param_3 - unaff_x20 != 0) {
      func_0x0001086daecc();
      _memmove();
    }
    *(long *)(unaff_x19 + 8) = lVar1 + (param_3 - unaff_x20);
  }
  func_0x0001086d9ee4();
  FUN_1086d0660();
  return;
}



/* Entry: 1086d05e4; end: 1086d0617;  */

void FUN_1086d05e4(long param_1,ulong param_2)

{
  long *unaff_x19;
  
  if (param_2 >> 0x3c == 0) {
    func_0x000107c326a4();
    FUN_1086d0624();
    *unaff_x19 = param_1;
    unaff_x19[1] = param_1;
    unaff_x19[2] = param_1 + param_2 * 0x10;
    return;
  }
  FUN_1086d0618();
  func_0x0001086d9d1c();
  FUN_1086d0644();
  return;
}



/* Entry: 1086d0618; end: 1086d0623;  */

void FUN_1086d0618(void)

{
  func_0x0001086d9d1c();
  FUN_1086d0644();
  return;
}



/* Entry: 1086d0624; end: 1086d0643;  */

void FUN_1086d0624(void)

{
  FUN_1086d0644();
  return;
}



/* Entry: 1086d0644; end: 1086d065f;  */

void FUN_1086d0644(undefined8 param_1,ulong param_2)

{
  ulong extraout_x8;
  
  if (param_2 >> 0x3c == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 4);
    return;
  }
  func_0x000104bd35f4();
  func_0x000107c32764();
  if ((extraout_x8 & 1) == 0) {
    FUN_1086cf254();
  }
  return;
}



/* Entry: 1086d0660; end: 1086d071f;  */

void FUN_1086d0660(void)

{
  uint extraout_w8;
  
  func_0x000107c32764();
  if ((extraout_w8 & 1) == 0) {
    FUN_1086cf254();
  }
  return;
}



/* Entry: 1086d0720; end: 1086d073f;  */

void FUN_1086d0720(long param_1)

{
  if (*(char *)(param_1 + 0x160) == '\x01') {
    FUN_1086d04b8();
  }
  return;
}



/* Entry: 1086d0740; end: 1086d07a3;  */

void FUN_1086d0740(long param_1)

{
  if (param_1 == 0) {
    func_0x0001086da3c4();
  }
  else {
    func_0x0001086d9e74();
  }
  func_0x0001086d9c80(&UNK_110a8e2d8);
  return;
}



/* Entry: 1086d07a4; end: 1086d07f3;  */

void FUN_1086d07a4(void)

{
  long in_x3;
  
  func_0x0001086daa90();
  if (in_x3 != 0) {
    func_0x0001086d9f2c();
    func_0x000107c27dd8();
    func_0x0001086da360();
    FUN_1086d07f4();
  }
  func_0x0001086d9ee4();
  func_0x00010867b9d0();
  return;
}



/* Entry: 1086d07f4; end: 1086d0813;  */

void FUN_1086d07f4(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    *puVar1 = *param_2;
    puVar1 = puVar1 + 1;
  }
  *(undefined8 **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 1086d0814; end: 1086d0897;  */

void FUN_1086d0814(void)

{
  undefined8 *puVar1;
  undefined8 *unaff_x20;
  
  func_0x0001086da8f4();
  puVar1 = (undefined8 *)0x160;
  __Znwm();
  *puVar1 = FUN_1086d964c;
  puVar1[1] = FUN_1086d9758;
  FUN_1086d0898(puVar1 + 4);
  func_0x0001086db1f8();
  func_0x0001086d9e8c();
  puVar1[0x29] = unaff_x20;
  *(undefined1 *)(puVar1 + 0x2b) = 0;
  func_0x000107c3265c(*unaff_x20);
  func_0x0001086da4f0();
  return;
}



/* Entry: 1086d0898; end: 1086d08cf;  */

undefined8 * FUN_1086d0898(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  func_0x000107c28dc8(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 1086d08d0; end: 1086d0a03;  */

void FUN_1086d08d0(undefined8 *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *plVar3;
  long *extraout_x8_00;
  long *extraout_x8_01;
  code *extraout_x9;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  undefined8 *unaff_x20;
  long lVar5;
  
  func_0x0001086dbe38();
  func_0x0001086da7b4();
  *param_1 = FUN_1086d95d4;
  param_1[1] = FUN_1086d9628;
  func_0x000107c27f94(param_1 + 2);
  func_0x0001086d9e8c();
  plVar2 = (long *)*unaff_x20;
  func_0x000100864938();
  (*extraout_x9)(param_1 + 5);
  param_1[4] = param_1[5];
  do {
    func_0x0001086d9cec();
  } while (extraout_w10 != 0);
  func_0x0001086da6f0(param_1[4]);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 6) = 0;
    lVar5 = param_1[4];
    func_0x0001086d9a44();
    if (*plVar2 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x0001086daed8();
    plVar3 = extraout_x8;
    do {
      if (*plVar3 == 0) {
        func_0x0001086d9db4();
        plVar3 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar4 = extraout_w11_00;
      }
      else {
        func_0x0001086da704();
        plVar3 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar4 = extraout_w11;
      }
      if ((uVar4 & 1) != 0) {
        func_0x0001086d9e98();
        if ((bool)in_ZR) {
          func_0x0001086d9da4();
          func_0x0001086d9a64();
          func_0x0001086d99e4();
          *(long **)(lVar5 + 0x90) = plVar2;
        }
        func_0x0001086d98a4();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x000107c28834(param_1 + 4);
  func_0x0001086da414();
  func_0x0001086da5f8();
  func_0x0001086da27c();
  func_0x0001086da114();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1086d0a04; end: 1086d0a2b;  */

void FUN_1086d0a04(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c32670();
  func_0x000107c3194c();
  *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 1086d0a2c; end: 1086d0a2f;  */

void FUN_1086d0a2c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_1[3] = uVar1;
  return;
}



/* Entry: 1086d0a30; end: 1086d0a3b;  */

void FUN_1086d0a30(long param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  long *unaff_x20;
  undefined1 auStack_a0 [40];
  long lStack_78;
  
  func_0x0001086d9d1c();
  func_0x000107c32678();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(long *)(param_1 + 0x20) = param_4;
  if (param_2 == (long *)0x0) {
    lVar2 = 0;
  }
  else {
    if ((ulong)unaff_x20 >> 0x3b != 0) {
      func_0x000104bd35f4();
      func_0x0001086da3e4();
      func_0x000107c325e0();
      for (; param_2 != unaff_x19; param_2 = param_2 + 4) {
        FUN_1086d0a2c(param_4,param_2);
        param_4 = lStack_78 + 0x20;
        lStack_78 = param_4;
      }
      func_0x000107c3273c();
      for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 4) {
        func_0x0001086dad74();
      }
      FUN_1086d0b08(auStack_a0);
      return;
    }
    lVar2 = (long)unaff_x20 << 5;
    __Znwm();
  }
  lVar1 = lVar2 + param_3 * 0x20;
  *unaff_x19 = lVar2;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = lVar2 + (long)unaff_x20 * 0x20;
  return;
}



/* Entry: 1086d0a3c; end: 1086d0b07;  */

void FUN_1086d0a3c(long param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  long *unaff_x20;
  undefined1 auStack_90 [40];
  long lStack_68;
  
  func_0x000107c32678();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(long *)(param_1 + 0x20) = param_4;
  if (param_2 == (long *)0x0) {
    lVar2 = 0;
  }
  else {
    if ((ulong)unaff_x20 >> 0x3b != 0) {
      func_0x000104bd35f4();
      func_0x0001086da3e4();
      func_0x000107c325e0();
      for (; param_2 != unaff_x19; param_2 = param_2 + 4) {
        FUN_1086d0a2c(param_4,param_2);
        param_4 = lStack_68 + 0x20;
        lStack_68 = param_4;
      }
      func_0x000107c3273c();
      for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 4) {
        func_0x0001086dad74();
      }
      FUN_1086d0b08(auStack_90);
      return;
    }
    lVar2 = (long)unaff_x20 << 5;
    __Znwm();
  }
  lVar1 = lVar2 + param_3 * 0x20;
  *unaff_x19 = lVar2;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = lVar2 + (long)unaff_x20 * 0x20;
  return;
}



/* Entry: 1086d0b08; end: 1086d0b87;  */

void FUN_1086d0b08(void)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x19;
  long lVar2;
  
  func_0x000107c32760();
  if ((extraout_x8 & 1) == 0) {
    lVar2 = **(long **)(unaff_x19 + 8);
    lVar1 = **(long **)(unaff_x19 + 0x10);
    while (lVar1 != lVar2) {
      func_0x0001086db1e8();
    }
  }
  return;
}



/* Entry: 1086d0b88; end: 1086d0be7;  */

void FUN_1086d0b88(long param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  undefined1 auStack_40 [32];
  
  func_0x000107c32714();
  if ((param_1 != 0) && (func_0x000107c3141c(), (int)param_1 != 0)) {
    FUN_1086d0c40(auStack_40,*unaff_x19);
    func_0x000107c32738();
    FUN_1086d0be8();
    func_0x0001086da03c();
    return;
  }
  puVar1 = unaff_x19 + 1;
  if (*(char *)(unaff_x19 + 5) == '\x01') {
    func_0x000107c27914();
    *(undefined1 *)(puVar1 + 4) = 0;
  }
  return;
}



/* Entry: 1086d0be8; end: 1086d0c1b;  */

long FUN_1086d0be8(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_1086d0c78();
  }
  else {
    FUN_1086d0ca0();
  }
  return param_1;
}



/* Entry: 1086d0c1c; end: 1086d0c3f;  */

void FUN_1086d0c1c(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x000107c27914();
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



/* Entry: 1086d0c40; end: 1086d0c77;  */

void FUN_1086d0c40(void)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x000107c32800();
  func_0x000107c327b0();
  func_0x000107c313d8();
  *(undefined8 *)(unaff_x19 + 0x18) = unaff_x20;
  return;
}



/* Entry: 1086d0c78; end: 1086d0c9f;  */

void FUN_1086d0c78(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c32670();
  func_0x000107c3194c();
  *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 1086d0ca0; end: 1086d0cb7;  */

void FUN_1086d0ca0(void)

{
  FUN_1086d0cb8();
  func_0x000107c32818();
  return;
}



/* Entry: 1086d0cb8; end: 1086d0cbb;  */

void FUN_1086d0cb8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_1[3] = uVar1;
  return;
}



/* Entry: 1086d0cbc; end: 1086d0cf7;  */

void FUN_1086d0cbc(long param_1,long param_2)

{
  long unaff_x19;
  
  func_0x000107c32768();
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(unaff_x19 + 0x28) = 0;
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_1086d0ca0((undefined1 *)(param_1 + 8),param_2 + 8);
  }
  return;
}



/* Entry: 1086d0cf8; end: 1086d0d17;  */

void FUN_1086d0cf8(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x000107c27914();
  }
  return;
}



/* Entry: 1086d0d18; end: 1086d10f7;  */

long * FUN_1086d0d18(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    while (lVar1 != lVar2) {
      func_0x0001086db1e8();
    }
    func_0x0001006d42f0();
  }
  return param_1;
}



/* Entry: 1086d10f8; end: 1086d183f;  */

/* WARNING: Possible PIC construction at 0x0001086d1950: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001086d1978: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001086d1954) */
/* WARNING: Removing unreachable block (ram,0x0001086d1960) */
/* WARNING: Removing unreachable block (ram,0x0001086d1964) */
/* WARNING: Removing unreachable block (ram,0x0001086d197c) */

long * FUN_1086d10f8(long *param_1,long *param_2,long param_3,uint param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long extraout_x8;
  long lVar8;
  long extraout_x9;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  uint uStack_7c;
  ulong uStack_70;
  ulong uStack_68;
  
  plVar2 = param_1;
  uStack_7c = param_4;
LAB_1086d1130:
  plVar5 = param_2 + -1;
LAB_1086d1148:
  uVar19 = (long)param_2 - (long)plVar2 >> 3;
  switch(uVar19) {
  case 0:
  case 1:
    goto LAB_1086da200;
  case 2:
    lVar7 = *plVar2;
    if (param_2[-1] <= lVar7) {
      return param_1;
    }
    *plVar2 = param_2[-1];
    param_2[-1] = lVar7;
    return param_1;
  case 3:
    plVar3 = plVar2 + 1;
    func_0x0001086db428();
    lVar13 = *plVar3;
    lVar16 = *plVar5;
    lVar7 = lVar13;
    if (lVar13 <= lVar16) {
      lVar7 = lVar16;
    }
    if (lVar16 <= lVar13) {
      lVar13 = lVar16;
    }
    *plVar5 = lVar13;
    *plVar3 = lVar7;
    break;
  case 4:
    plVar3 = plVar2 + 1;
    plVar4 = plVar2 + 2;
    func_0x0001086db428();
    lVar13 = *plVar2;
    lVar16 = *plVar4;
    lVar7 = lVar13;
    if (lVar13 <= lVar16) {
      lVar7 = lVar16;
    }
    if (lVar16 <= lVar13) {
      lVar13 = lVar16;
    }
    *plVar4 = lVar13;
    *plVar2 = lVar7;
    lVar13 = *plVar3;
    lVar16 = *plVar5;
    lVar7 = lVar13;
    if (lVar13 <= lVar16) {
      lVar7 = lVar16;
    }
    if (lVar16 <= lVar13) {
      lVar13 = lVar16;
    }
    *plVar5 = lVar13;
    *plVar3 = lVar7;
    lVar16 = *plVar2;
    lVar13 = lVar16;
    if (lVar16 <= lVar7) {
      lVar13 = lVar7;
    }
    if (lVar7 <= lVar16) {
      lVar16 = lVar7;
    }
    *plVar3 = lVar16;
    *plVar2 = lVar13;
    lVar13 = *plVar4;
    lVar16 = *plVar5;
    lVar7 = lVar13;
    if (lVar13 <= lVar16) {
      lVar7 = lVar16;
    }
    if (lVar16 <= lVar13) {
      lVar13 = lVar16;
    }
    *plVar5 = lVar13;
    *plVar4 = lVar7;
    lVar16 = *plVar3;
    lVar13 = lVar16;
    if (lVar16 <= lVar7) {
      lVar13 = lVar7;
    }
    if (lVar7 <= lVar16) {
      lVar16 = lVar7;
    }
    *plVar4 = lVar16;
    *plVar3 = lVar13;
    return plVar2;
  case 5:
    plVar4 = plVar2 + 1;
    plVar6 = plVar2 + 2;
    plVar3 = plVar2 + 3;
    func_0x0001086db428();
    func_0x0001086dae44();
    lVar13 = *plVar2;
    lVar16 = *plVar4;
    lVar7 = lVar13;
    if (lVar13 <= lVar16) {
      lVar7 = lVar16;
    }
    if (lVar16 <= lVar13) {
      lVar13 = lVar16;
    }
    *plVar4 = lVar13;
    *plVar2 = lVar7;
    lVar13 = *plVar3;
    lVar16 = *plVar5;
    lVar7 = lVar13;
    if (lVar13 <= lVar16) {
      lVar7 = lVar16;
    }
    if (lVar16 <= lVar13) {
      lVar13 = lVar16;
    }
    *plVar5 = lVar13;
    *plVar3 = lVar7;
    plVar2 = plVar6;
    break;
  default:
    if ((long)uVar19 < 0x18) {
      if ((uStack_7c & 1) == 0) {
        plVar5 = plVar2;
        if (plVar2 == param_2) {
          return param_1;
        }
        while( true ) {
          plVar2 = plVar2 + 1;
          plVar3 = plVar5 + 1;
          if (plVar3 == param_2) break;
          lVar7 = *plVar5;
          lVar13 = plVar5[1];
          plVar4 = plVar2;
          plVar5 = plVar3;
          if (lVar7 < lVar13) {
            do {
              *plVar4 = lVar7;
              lVar7 = plVar4[-2];
              plVar4 = plVar4 + -1;
            } while (lVar7 < lVar13);
            *plVar4 = lVar13;
          }
        }
        return param_1;
      }
      if (plVar2 == param_2) {
        return param_1;
      }
      lVar7 = 0;
      plVar5 = plVar2;
      goto LAB_1086d1660;
    }
    if (param_3 != 0) {
      param_1 = plVar2 + (uVar19 >> 1);
      if (uVar19 < 0x81) {
        FUN_1086d1840(param_1,plVar2,plVar5);
      }
      else {
        func_0x0001086db564();
        FUN_1086d1840();
        plVar3 = param_1 + -1;
        FUN_1086d1840(plVar2 + 1,plVar3,param_2 + -2);
        FUN_1086d1840(plVar2 + 2,param_1 + 1,param_2 + -3);
        FUN_1086d1840(plVar3,param_1,param_1 + 1);
        lVar7 = *plVar2;
        *plVar2 = *param_1;
        *param_1 = lVar7;
        param_1 = plVar3;
      }
      param_3 = param_3 + -1;
      lVar7 = *plVar2;
      if (((uStack_7c & 1) == 0) && (plVar2[-1] <= lVar7)) goto LAB_1086d14ec;
      plVar3 = plVar2;
      if (*plVar5 < lVar7) {
        do {
          plVar3 = plVar3 + 1;
        } while (lVar7 <= *plVar3);
      }
      else {
        do {
          plVar3 = plVar3 + 1;
          if (param_2 <= plVar3) break;
        } while (lVar7 <= *plVar3);
      }
      plVar4 = param_2;
      if (plVar3 < param_2) {
        do {
          plVar4 = plVar4 + -1;
        } while (*plVar4 < lVar7);
      }
      plVar1 = param_1;
      plVar6 = plVar3;
      if (plVar3 < plVar4) {
        func_0x000107c327d0();
        plVar6 = plVar3 + 1;
        *plVar3 = extraout_x9;
        *plVar4 = extraout_x8;
        plVar1 = param_1;
      }
      uStack_70 = 0;
      uStack_68 = 0;
      for (plVar20 = plVar4 + -1; 0x3f0 < (long)plVar20 - (long)plVar6;
          plVar20 = (long *)((long)plVar20 + lVar13)) {
        if (uStack_68 == 0) {
          for (uVar19 = 0; uVar19 != 0x40; uVar19 = uVar19 + 1) {
            uStack_68 = (ulong)(plVar6[uVar19] <= lVar7) << (uVar19 & 0x3f) | uStack_68;
          }
        }
        if (uStack_70 == 0) {
          plVar12 = plVar20;
          for (uVar19 = 0; uVar19 != 0x40; uVar19 = uVar19 + 1) {
            uStack_70 = (ulong)(lVar7 < *plVar12) << (uVar19 & 0x3f) | uStack_70;
            plVar12 = plVar12 + -1;
          }
        }
        func_0x0001086dadf0();
        lVar13 = 0x200;
        if (uStack_68 != 0) {
          lVar13 = 0;
        }
        plVar6 = (long *)((long)plVar6 + lVar13);
        lVar13 = -0x200;
        if (uStack_70 != 0) {
          lVar13 = 0;
        }
      }
      lVar13 = (long)plVar20 - (long)plVar6 >> 3;
      if (uStack_68 == 0 && uStack_70 == 0) {
        lVar13 = lVar13 + 1;
        uVar10 = lVar13 / 2;
        uVar14 = lVar13 - uVar10;
LAB_1086d1354:
        uVar9 = 0;
        for (uVar15 = 0; uVar18 = uVar14, uVar19 = uVar10,
            (uVar10 & ((long)uVar10 >> 0x3f ^ 0xffffffffffffffffU)) != uVar15; uVar15 = uVar15 + 1)
        {
          uVar9 = (ulong)(plVar6[uVar15] <= lVar7) << (uVar15 & 0x3f) | uVar9;
          uStack_68 = uVar9;
        }
      }
      else {
        uVar10 = lVar13 - 0x3f;
        uVar14 = 0x40;
        uVar18 = uVar10;
        uVar19 = 0x40;
        if (uStack_68 == 0) goto LAB_1086d1354;
      }
      if (uStack_70 == 0) {
        plVar12 = plVar20;
        for (uVar10 = 0; (uVar18 & ((long)uVar18 >> 0x3f ^ 0xffffffffffffffffU)) != uVar10;
            uVar10 = uVar10 + 1) {
          uStack_70 = (ulong)(lVar7 < *plVar12) << (uVar10 & 0x3f) | uStack_70;
          plVar12 = plVar12 + -1;
        }
      }
      func_0x0001086dadf0();
      if (uStack_68 != 0) {
        uVar19 = 0;
      }
      plVar6 = plVar6 + uVar19;
      if (uStack_70 != 0) {
        uVar18 = 0;
      }
      plVar20 = plVar20 + -uVar18;
      if (uStack_68 == 0) {
        if (uStack_70 != 0) {
          while (uStack_70 != 0) {
            uVar19 = LZCOUNT(uStack_70);
            uStack_70 = uStack_70 & (-1L << ((uVar19 ^ 0x3f) & 0x3f) ^ 0xffffffffffffffffU);
            plVar12 = plVar20 + -(uVar19 ^ 0x3f);
            if (plVar6 != plVar12) {
              lVar13 = *plVar12;
              *plVar12 = *plVar6;
              *plVar6 = lVar13;
            }
            plVar6 = plVar6 + 1;
          }
        }
      }
      else {
        while (uStack_68 != 0) {
          uVar19 = LZCOUNT(uStack_68);
          uStack_68 = uStack_68 & (-1L << ((uVar19 ^ 0x3f) & 0x3f) ^ 0xffffffffffffffffU);
          plVar12 = plVar6 + (uVar19 ^ 0x3f);
          if (plVar20 != plVar12) {
            lVar13 = *plVar12;
            *plVar12 = *plVar20;
            *plVar20 = lVar13;
          }
          plVar20 = plVar20 + -1;
        }
        plVar6 = plVar20 + 1;
      }
      plVar20 = plVar6 + -1;
      if (plVar2 != plVar20) {
        *plVar2 = *plVar20;
      }
      *plVar20 = lVar7;
      param_1 = plVar1;
      if (plVar4 <= plVar3) {
        func_0x0001086db564();
        FUN_1086d1998();
        param_1 = plVar1;
        func_0x0001086dbeb0();
        FUN_1086d1998();
        if ((int)param_1 != 0) goto LAB_1086d159c;
        plVar2 = plVar6;
        if (((ulong)plVar1 & 1) != 0) goto LAB_1086d1148;
      }
      func_0x0001086db564();
      FUN_1086d10f8();
      uStack_7c = 0;
      plVar2 = plVar6;
      goto LAB_1086d1148;
    }
    if (plVar2 == param_2) {
      return param_1;
    }
    uVar18 = uVar19 - 2 >> 1;
    plVar5 = plVar2 + uVar18;
    do {
      plVar3 = plVar2;
      func_0x0001086d1b24(plVar2,uVar19,plVar5);
      uVar18 = uVar18 - 1;
      plVar5 = plVar5 + -1;
    } while (-1 < (long)uVar18);
    do {
      if ((long)uVar19 < 2) {
        return plVar3;
      }
      uVar18 = 0;
      lVar7 = *plVar2;
      plVar5 = plVar2;
      do {
        plVar4 = plVar5 + uVar18 + 1;
        uVar14 = uVar18 << 1 | 1;
        uVar10 = uVar18 * 2 + 2;
        if ((long)uVar10 < (long)uVar19) {
          lVar16 = plVar5[uVar18 + 2];
          lVar17 = plVar5[uVar18 + 1];
          lVar13 = lVar17;
          if (lVar16 <= lVar17) {
            lVar13 = lVar16;
          }
          plVar6 = plVar5 + uVar18 + 2;
          uVar18 = uVar10;
          if (lVar17 <= lVar16) {
            plVar6 = plVar4;
            uVar18 = uVar14;
          }
        }
        else {
          lVar13 = *plVar4;
          plVar6 = plVar4;
          uVar18 = uVar14;
        }
        *plVar5 = lVar13;
        plVar5 = plVar6;
      } while ((long)uVar18 <= (long)(uVar19 - 2 >> 1));
      param_2 = param_2 + -1;
      if (plVar6 == param_2) {
        *plVar6 = lVar7;
      }
      else {
        *plVar6 = *param_2;
        *param_2 = lVar7;
        lVar7 = (long)plVar6 + (8 - (long)plVar2) >> 3;
        if (1 < lVar7) {
          uVar18 = lVar7 - 2U >> 1;
          lVar13 = plVar2[uVar18];
          lVar7 = *plVar6;
          plVar5 = plVar2 + uVar18;
          if (lVar7 < lVar13) {
            do {
              plVar4 = plVar5;
              *plVar6 = lVar13;
              if (uVar18 == 0) break;
              uVar18 = uVar18 - 1 >> 1;
              lVar13 = plVar2[uVar18];
              plVar6 = plVar4;
              plVar5 = plVar2 + uVar18;
            } while (lVar7 < lVar13);
            *plVar4 = lVar7;
          }
        }
      }
      uVar19 = uVar19 - 1;
    } while( true );
  }
  lVar13 = *plVar5;
  lVar16 = *plVar2;
  lVar7 = lVar13;
  if (lVar13 <= lVar16) {
    lVar7 = lVar16;
  }
  lVar17 = lVar13;
  if (lVar16 <= lVar13) {
    lVar17 = lVar16;
  }
  *plVar5 = lVar17;
  lVar8 = *plVar3;
  lVar17 = lVar8;
  if (lVar8 < lVar7) {
    lVar17 = *plVar2;
  }
  *plVar2 = lVar17;
  lVar17 = lVar7;
  if (lVar8 < lVar7) {
    lVar17 = *plVar3;
  }
  *plVar3 = lVar17;
  uVar11 = (uint)(lVar13 <= lVar16);
  if (lVar7 <= lVar8) {
    uVar11 = 1;
  }
  return (long *)(ulong)uVar11;
LAB_1086d1660:
  if (plVar5 + 1 == param_2) {
LAB_1086da200:
    return param_1;
  }
  lVar13 = *plVar5;
  lVar16 = plVar5[1];
  lVar17 = lVar7;
  if (lVar13 < lVar16) {
    do {
      lVar8 = lVar17;
      *(long *)((long)plVar2 + lVar8 + 8) = lVar13;
      plVar3 = plVar2;
      if (lVar8 == 0) goto LAB_1086d16a8;
      lVar13 = *(long *)((long)plVar2 + lVar8 + -8);
      lVar17 = lVar8 + -8;
    } while (lVar13 < lVar16);
    plVar3 = (long *)((long)plVar2 + lVar8);
LAB_1086d16a8:
    *plVar3 = lVar16;
  }
  lVar7 = lVar7 + 8;
  plVar5 = plVar5 + 1;
  goto LAB_1086d1660;
LAB_1086d14ec:
  plVar3 = plVar2;
  if (*plVar5 < lVar7) {
    do {
      plVar3 = plVar3 + 1;
    } while (lVar7 <= *plVar3);
  }
  else {
    do {
      plVar3 = plVar3 + 1;
      if (param_2 <= plVar3) break;
    } while (lVar7 <= *plVar3);
  }
  plVar4 = param_2;
  if (plVar3 < param_2) {
    do {
      plVar4 = plVar4 + -1;
    } while (*plVar4 < lVar7);
  }
  while (plVar3 < plVar4) {
    lVar13 = *plVar3;
    *plVar3 = *plVar4;
    *plVar4 = lVar13;
    do {
      plVar3 = plVar3 + 1;
    } while (lVar7 <= *plVar3);
    do {
      plVar4 = plVar4 + -1;
    } while (*plVar4 < lVar7);
  }
  plVar4 = plVar3 + -1;
  if (plVar2 != plVar4) {
    *plVar2 = *plVar4;
  }
  uStack_7c = 0;
  *plVar4 = lVar7;
  plVar2 = plVar3;
  goto LAB_1086d1148;
LAB_1086d159c:
  param_2 = plVar20;
  if (((ulong)plVar1 & 1) != 0) {
    return param_1;
  }
  goto LAB_1086d1130;
}



/* Entry: 1086d1840; end: 1086d18e7;  */

bool FUN_1086d1840(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *param_2;
  lVar5 = *param_3;
  lVar1 = lVar3;
  if (lVar3 <= lVar5) {
    lVar1 = lVar5;
  }
  if (lVar5 <= lVar3) {
    lVar3 = lVar5;
  }
  *param_3 = lVar3;
  *param_2 = lVar1;
  lVar3 = *param_3;
  lVar5 = *param_1;
  lVar1 = lVar3;
  if (lVar3 <= lVar5) {
    lVar1 = lVar5;
  }
  lVar2 = lVar3;
  if (lVar5 <= lVar3) {
    lVar2 = lVar5;
  }
  *param_3 = lVar2;
  lVar4 = *param_2;
  lVar2 = lVar4;
  if (lVar4 < lVar1) {
    lVar2 = *param_1;
  }
  *param_1 = lVar2;
  lVar2 = lVar1;
  if (lVar4 < lVar1) {
    lVar2 = *param_2;
  }
  *param_2 = lVar2;
  return lVar1 <= lVar4 || lVar3 <= lVar5;
}



/* Entry: 1086d18e8; end: 1086d1997;  */

bool FUN_1086d18e8(long *param_1,long *param_2,undefined8 param_3,long *param_4,long *param_5)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *unaff_x22;
  
  plVar3 = param_5;
  func_0x0001086dae44();
  lVar4 = *param_1;
  lVar6 = *param_2;
  lVar1 = lVar4;
  if (lVar4 <= lVar6) {
    lVar1 = lVar6;
  }
  if (lVar6 <= lVar4) {
    lVar4 = lVar6;
  }
  *param_2 = lVar4;
  *param_1 = lVar1;
  lVar4 = *param_4;
  lVar6 = *plVar3;
  lVar1 = lVar4;
  if (lVar4 <= lVar6) {
    lVar1 = lVar6;
  }
  if (lVar6 <= lVar4) {
    lVar4 = lVar6;
  }
  *plVar3 = lVar4;
  *param_4 = lVar1;
  FUN_1086d1ae0(param_3);
  lVar4 = *unaff_x22;
  lVar6 = *param_5;
  lVar1 = lVar4;
  if (lVar4 <= lVar6) {
    lVar1 = lVar6;
  }
  if (lVar6 <= lVar4) {
    lVar4 = lVar6;
  }
  *param_5 = lVar4;
  *unaff_x22 = lVar1;
  func_0x0001086da610(param_1);
  FUN_1086d1ae0();
  func_0x0001086da610();
  lVar4 = *plVar3;
  lVar6 = *unaff_x22;
  lVar1 = lVar4;
  if (lVar4 <= lVar6) {
    lVar1 = lVar6;
  }
  lVar2 = lVar4;
  if (lVar6 <= lVar4) {
    lVar2 = lVar6;
  }
  *plVar3 = lVar2;
  lVar5 = *param_4;
  lVar2 = lVar5;
  if (lVar5 < lVar1) {
    lVar2 = *unaff_x22;
  }
  *unaff_x22 = lVar2;
  lVar2 = lVar1;
  if (lVar5 < lVar1) {
    lVar2 = *param_4;
  }
  *param_4 = lVar2;
  return lVar1 <= lVar5 || lVar4 <= lVar6;
}



/* Entry: 1086d1998; end: 1086d1adf;  */

bool FUN_1086d1998(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *unaff_x19;
  long *unaff_x20;
  long *plVar9;
  
  func_0x000107c32678();
  switch(param_2 - param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    lVar3 = *unaff_x19;
    if (lVar3 < unaff_x20[-1]) {
      *unaff_x19 = unaff_x20[-1];
      unaff_x20[-1] = lVar3;
      return true;
    }
    return true;
  case 3:
    FUN_1086d1840();
    break;
  case 4:
    func_0x0001086d1860();
    break;
  case 5:
    FUN_1086d18e8();
    break;
  default:
    FUN_1086d1840();
    iVar2 = 0;
    lVar3 = 0x18;
    plVar7 = unaff_x19 + 3;
    plVar9 = unaff_x19 + 2;
    while (plVar4 = plVar7, plVar4 != unaff_x20) {
      lVar5 = *plVar4;
      lVar6 = *plVar9;
      lVar8 = lVar3;
      if (lVar6 < lVar5) {
        do {
          *(long *)((long)unaff_x19 + lVar8) = lVar6;
          lVar1 = lVar8 + -8;
          plVar7 = unaff_x19;
          if (lVar1 == 0) goto LAB_1086d1a90;
          lVar6 = *(long *)((long)unaff_x19 + lVar8 + -0x10);
          lVar8 = lVar1;
        } while (lVar6 < lVar5);
        plVar7 = (long *)((long)unaff_x19 + lVar1);
LAB_1086d1a90:
        *plVar7 = lVar5;
        iVar2 = iVar2 + 1;
        if (iVar2 == 8) {
          return plVar4 + 1 == unaff_x20;
        }
      }
      lVar3 = lVar3 + 8;
      plVar9 = plVar4;
      plVar7 = plVar4 + 1;
    }
  }
  return true;
}



/* Entry: 1086d1ae0; end: 1086d1c43;  */

bool FUN_1086d1ae0(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *param_3;
  lVar5 = *param_1;
  lVar1 = lVar3;
  if (lVar3 <= lVar5) {
    lVar1 = lVar5;
  }
  lVar2 = lVar3;
  if (lVar5 <= lVar3) {
    lVar2 = lVar5;
  }
  *param_3 = lVar2;
  lVar4 = *param_2;
  lVar2 = lVar4;
  if (lVar4 < lVar1) {
    lVar2 = *param_1;
  }
  *param_1 = lVar2;
  lVar2 = lVar1;
  if (lVar4 < lVar1) {
    lVar2 = *param_2;
  }
  *param_2 = lVar2;
  return lVar1 <= lVar4 || lVar3 <= lVar5;
}



/* Entry: 1086d1c44; end: 1086d1c57;  */

void FUN_1086d1c44(void)

{
  func_0x0001086d1c60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086d1c58; end: 1086d1cab;  */

void FUN_1086d1c58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001086d9c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1086d1cac; end: 1086d1cdf;  */

void FUN_1086d1cac(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x00010086ab64();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x00010086abd4(uVar1);
  return;
}



/* Entry: 1086d1ce0; end: 1086d1d1b;  */

void FUN_1086d1ce0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001086d9c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  return;
}



/* Entry: 1086d1d1c; end: 1086d1d3b;  */

void FUN_1086d1d1c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1086b1f7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1086d1d3c; end: 1086d1d3f;  */

void FUN_1086d1d3c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1086d1d40; end: 1086d1d7b;  */

long * FUN_1086d1d40(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  
  *param_1 = param_2;
  if (param_3 == 0) {
    param_1[1] = 0;
    plVar1 = param_1;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = param_3;
    plVar1 = (long *)0x0;
    if (param_3 != 0) {
      return param_1;
    }
  }
  func_0x00010527822c();
  plVar2 = (long *)plVar1[2];
                    /* WARNING: Could not recover jumptable at 0x0001086d97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2,(int)plVar1[4]);
  return plVar2;
}



/* Entry: 1086d1d7c; end: 1086d1e07;  */

void FUN_1086d1d7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001086d97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x18))
            (*(long **)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x20));
  return;
}



/* Entry: 1086d1e08; end: 1086d1e27;  */

void FUN_1086d1e08(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1086b2434();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1086d1e28; end: 1086d1e73;  */

void FUN_1086d1e28(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1086d1e74; end: 1086d1e93;  */

void FUN_1086d1e74(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1086b2d44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1086d1e94; end: 1086d1edf;  */

void FUN_1086d1e94(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1086d1ee0; end: 1086d1eff;  */

void FUN_1086d1ee0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1086b312c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1086d1f00; end: 1086d1f07;  */

void FUN_1086d1f00(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1086d1f08; end: 1086d1f27;  */

void FUN_1086d1f08(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1086b3938();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1086d1f28; end: 1086d1f2b;  */

void FUN_1086d1f28(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1086d1f2c; end: 1086d1f53;  */

long FUN_1086d1f2c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1086d1f54();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1086d1f54; end: 1086d1f6f;  */

void FUN_1086d1f54(undefined8 *param_1,ulong param_2)

{
  if (param_2 >> 0x39 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 7);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110a64258;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1086d1f70; end: 1086d1f73;  */

void FUN_1086d1f70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a64258;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1086d1f74; end: 1086d1f87;  */

void FUN_1086d1f74(void)

{
  FUN_1086d25c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086d1f88; end: 1086d1f8f;  */

void FUN_1086d1f88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001086d9c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1086d1f90; end: 1086d20d3;  */

long * FUN_1086d1f90(long *param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long *plVar2;
  undefined8 extraout_x8;
  long *plVar3;
  long *extraout_x8_00;
  int extraout_w10;
  int extraout_w11;
  int extraout_w11_00;
  long *plVar4;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined1 auStack_c0 [40];
  code *pcStack_98;
  undefined **ppuStack_90;
  long *plStack_88;
  undefined8 uStack_38;
  
  plVar2 = &lStack_e0;
  func_0x0001086d9a34();
  plVar3 = *(long **)(param_2 + 0x10);
  lStack_e0 = *plVar3;
  lStack_d8 = plVar3[1];
  plVar4 = *(long **)(*(long *)(lStack_e0 + 0xd0) + 0x110);
  uStack_38 = extraout_x8;
  if (lStack_d8 != 0) {
    do {
      func_0x000107c325ec();
      plVar3 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  lStack_c8 = plVar3[3];
  lStack_d0 = plVar3[2];
  if (plVar3[3] != 0) {
    do {
      func_0x000107c325ec();
    } while (extraout_w11_00 != 0);
  }
  func_0x0001086db708();
  pcStack_98 = FUN_1086d20f8;
  ppuStack_90 = &PTR_FUN_110a642b0;
  func_0x000107c326e0();
  param_1[1] = lStack_d8;
  *param_1 = lStack_e0;
  lStack_e0 = 0;
  lStack_d8 = 0;
  param_1[3] = lStack_c8;
  param_1[2] = lStack_d0;
  if (lStack_c8 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10 != 0);
  }
  FUN_1086cacd0(param_1 + 4,auStack_c0);
  plStack_88 = param_1;
  func_0x0001086da7cc(*(undefined8 *)(*plVar4 + 0x10));
  func_0x0001086d9d10(ppuStack_90);
  FUN_1086d20d4();
  func_0x000107c325c0(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001086d9d10(ppuStack_90);
    FUN_1086d20d4(&lStack_e0);
    func_0x0001086d9ff8();
    func_0x0001086dabe8();
    func_0x000108621230((undefined1 *)((long)plVar2 + 0x10));
    puVar1 = (undefined1 *)plVar2;
    func_0x00010055315c();
    if (puVar1 != (undefined1 *)0x0) {
      func_0x0001000df548();
    }
    return (long *)(undefined1 *)plVar2;
  }
  return plVar2;
}



/* Entry: 1086d20d4; end: 1086d20f7;  */

long FUN_1086d20d4(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x0001086dabe8();
  func_0x000108621230(unaff_x19 + 0x10);
  lVar1 = unaff_x19;
  func_0x00010055315c();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1086d20f8; end: 1086d2353;  */

long * FUN_1086d20f8(long param_1)

{
  undefined1 uVar1;
  long *plVar2;
  long *plVar3;
  long extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *plVar4;
  long *unaff_x20;
  long *plVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  undefined **ppuVar9;
  long lStack_648;
  long lStack_640;
  code *pcStack_630;
  undefined **ppuStack_628;
  long alStack_620 [188];
  code *pcStack_40;
  undefined **ppuStack_38;
  long *plStack_30;
  long *plStack_10;
  undefined8 uStack_8;
  
  func_0x000107c32728();
  func_0x0001086d99bc();
  plVar5 = *(long **)(param_1 + 0x10);
  plVar4 = (long *)*plVar5;
  FUN_1086cacd0(&pcStack_630,plVar5 + 4);
  FUN_1086cacf4(&pcStack_40,&pcStack_630,1);
  func_0x0001086db7c0(&lStack_648);
  FUN_108620fd8(&pcStack_40);
  func_0x0001086da498();
  uVar1 = lStack_648 == lStack_640;
  if ((bool)uVar1) {
    FUN_1086b2fb8(*plVar5,plVar5[2],plVar5[3],7);
  }
  else {
    lVar6 = *(long *)(*(long *)(*plVar5 + 0xd0) + 0x100);
    ppuStack_628 = (undefined **)plVar5[3];
    pcStack_630 = (code *)plVar5[2];
    if (plVar5[3] != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10 != 0);
    }
    plVar4 = alStack_620;
    func_0x000107c27a88();
    func_0x000107c28150();
    lVar6 = *(long *)(lVar6 + 0x10);
    unaff_x20 = plVar4;
    func_0x000107c3270c();
    lVar7 = *(long *)(lVar6 + 0x70);
    pcStack_40 = FUN_1086d2374;
    ppuStack_38 = &PTR_FUN_110a64298;
    func_0x0001086db748();
    ppuVar9 = ppuStack_628;
    pcVar8 = pcStack_630;
    unaff_x20[1] = (long)ppuStack_628;
    *unaff_x20 = (long)pcVar8;
    if (ppuVar9 != (undefined **)0x0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_00 != 0);
    }
    func_0x000107c27a88(unaff_x20 + 2,alStack_620);
    plStack_30 = unaff_x20;
    plStack_10 = plVar4;
    func_0x000107c28154(lVar6 + 0x48,&pcStack_40);
    func_0x000107c325e8(ppuStack_38);
    func_0x000107c326b0();
    if (lVar7 == 0) {
      func_0x000107c3261c();
      pcStack_40 = pcVar8;
      ppuStack_38 = ppuVar9;
      if (extraout_x8 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_01 != 0);
      }
      func_0x000107c3265c();
      func_0x0001086da95c();
      func_0x0001086da590();
    }
    FUN_1086d2354(&pcStack_630);
  }
  plVar3 = &lStack_648;
  func_0x0001086cae20(plVar3);
  while( true ) {
    while( true ) {
      func_0x000107c325c0(uStack_8);
      if ((bool)uVar1) {
        return plVar3;
      }
      ___stack_chk_fail();
      func_0x000107c32678();
      func_0x0001086da590();
      FUN_1086d2354(&pcStack_630);
      plVar2 = &lStack_648;
      func_0x0001086cae20(plVar2);
      uVar1 = (int)unaff_x20 == 2;
      if (!(bool)uVar1) break;
      func_0x0001086daabc();
      func_0x000108848514();
      plVar3 = (long *)*plVar5;
      FUN_1086b2fb8(plVar3,plVar5[2],plVar5[3],plVar2);
      ___cxa_end_catch();
    }
    uVar1 = (int)unaff_x20 == 1;
    if (!(bool)uVar1) break;
    func_0x0001086daabc();
    plVar3 = (long *)*plVar5;
    FUN_1086b2fb8(plVar3,plVar5[2],plVar5[3],0);
    ___cxa_end_catch();
  }
  func_0x0001086d9ff8();
  func_0x0001086db9d4();
  func_0x000107c326a4();
  func_0x000107c27a10();
  plVar5 = plVar4;
  func_0x0001006248cc();
  if (plVar5 != (long *)0x0) {
    func_0x000107c278a0();
  }
  return plVar4;
}



/* Entry: 1086d2354; end: 1086d2373;  */

long FUN_1086d2354(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107c326a4();
  func_0x000107c27a10();
  lVar1 = unaff_x19;
  func_0x0001006248cc();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 1086d2374; end: 1086d2377;  */

void FUN_1086d2374(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)**(undefined8 **)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001006cee64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 **)(param_1 + 0x10) + 2);
  return;
}



/* Entry: 1086d2378; end: 1086d2397;  */

void FUN_1086d2378(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1086d2354();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1086d2398; end: 1086d239b;  */

void FUN_1086d2398(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1086d239c; end: 1086d23bb;  */

void FUN_1086d239c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1086d20d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1086d23bc; end: 1086d23bf;  */

void FUN_1086d23bc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1086d23c0; end: 1086d23df;  */

void FUN_1086d23c0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001086b39e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1086d23e0; end: 1086d23e3;  */

void FUN_1086d23e0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1086d23e4; end: 1086d242f;  */

void FUN_1086d23e4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110a642c8;
  puVar1 = param_1;
  func_0x000107c326e0();
  FUN_1086b3958();
  param_1[1] = puVar1;
  return;
}



/* Entry: 1086d2430; end: 1086d24df;  */

void FUN_1086d2430(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined1 *unaff_x19;
  long unaff_x21;
  long unaff_x22;
  undefined1 auStack_7e0 [1496];
  undefined1 auStack_208 [464];
  byte bStack_38;
  
  lVar1 = *(long *)(param_2 + 0x20);
  lVar2 = *(long *)(param_2 + 0x28);
  func_0x0001086db620(*(undefined8 *)(param_2 + 0x10));
  func_0x0001086d9810();
  if (((extraout_x8 & 1) == 0) && (lVar1 != 0)) {
    func_0x0001086d9c18();
    if (lVar2 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10 != 0);
    }
    func_0x000107c28150();
    func_0x0001086da310();
    func_0x0001086da1e0();
    func_0x0001086d97f8(0x1086d1e98);
    if (extraout_x8_00 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_00 != 0);
    }
    func_0x0001086d995c();
    func_0x0001086d9ad8();
    func_0x0001086d9850();
    func_0x0001086da01c();
    if (unaff_x22 == 0) {
      func_0x0001086d990c();
      if (extraout_x8_01 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_01 != 0);
      }
      func_0x000107c3265c();
      func_0x0001086da218();
      func_0x0001086da044();
    }
    func_0x000108621230();
  }
  func_0x000100864c10();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001086d9af0();
    func_0x000108621230();
    func_0x0001086d9ff8();
    func_0x0001086da550();
    FUN_1086b1f68(auStack_208,*(undefined8 *)(*(long *)(lVar1 + 0xd0) + 0x20));
    if ((bStack_38 & 1) == 0) {
      *unaff_x19 = 0;
      unaff_x19[0x5d8] = 0;
    }
    else {
      FUN_1086a1380(auStack_7e0,*(undefined8 *)(*(long *)(unaff_x21 + 0xd0) + 0x20),
                    *(long *)(unaff_x21 + 0xd0) + 0x170,auStack_208,param_1);
      func_0x000107c32738();
      func_0x000107c27a88();
      unaff_x19[0x5d8] = 1;
      func_0x000107c27a10(auStack_7e0);
    }
    func_0x000107c288c8(auStack_208);
    return;
  }
  return;
}



/* Entry: 1086d24e0; end: 1086d2537;  */

undefined8 * FUN_1086d24e0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_1 = &PTR_FUN_110a64318;
  param_1[1] = uVar1;
  (**(code **)(param_2[1] + 0x10))(param_1 + 2);
  param_1[7] = *param_3;
  func_0x0001086db7d0(*(undefined8 *)(param_3[1] + 0x10),param_1 + 8);
  return param_1;
}



/* Entry: 1086d2538; end: 1086d253b;  */

undefined8 * FUN_1086d2538(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a64318;
  (**(code **)param_1[8])();
  (**(code **)param_1[2])();
  return param_1;
}



/* Entry: 1086d253c; end: 1086d254f;  */

void FUN_1086d253c(void)

{
  FUN_1086d2578();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086d2550; end: 1086d2577;  */

void FUN_1086d2550(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001086d2560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 8))(param_2,(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1086d2578; end: 1086d25bf;  */

undefined8 * FUN_1086d2578(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a64318;
  (**(code **)param_1[8])();
  (**(code **)param_1[2])();
  return param_1;
}



/* Entry: 1086d25c0; end: 1086d25df;  */

void FUN_1086d25c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a64258;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1086d25e0; end: 1086d2603;  */

void FUN_1086d25e0(long param_1)

{
  func_0x000107c32694();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 1086d2604; end: 1086d2607;  */

void FUN_1086d2604(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)**(undefined8 **)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001006cee64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 **)(param_1 + 0x10) + 2);
  return;
}



/* Entry: 1086d2608; end: 1086d2627;  */

void FUN_1086d2608(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1086b3c70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1086d2628; end: 1086d26b3;  */

void FUN_1086d2628(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1086d26b4; end: 1086d271f;  */

void FUN_1086d26b4(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_60 [64];
  
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  plVar1 = (long *)*puVar2;
  func_0x000107c27994(auStack_60,puVar2 + 3);
  func_0x0001086db12c(puVar2[2]);
  func_0x0001086da834();
  func_0x0001086da7cc(*(undefined8 *)(*plVar1 + 0x10));
  func_0x0001086da498();
  func_0x0001086da03c();
  return;
}



/* Entry: 1086d2720; end: 1086d273f;  */

void FUN_1086d2720(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1086b4268();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1086d2740; end: 1086d2747;  */

void FUN_1086d2740(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1086d2748; end: 1086d2767;  */

void FUN_1086d2748(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1086b4ef8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1086d2768; end: 1086d27b3;  */

void FUN_1086d2768(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1086d27b4; end: 1086d27d3;  */

void FUN_1086d27b4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1086b514c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1086d27d4; end: 1086d27d7;  */

void FUN_1086d27d4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1086d27d8; end: 1086d2813;  */

undefined8 * FUN_1086d27d8(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  FUN_1086d2814();
  return param_1;
}



/* Entry: 1086d2814; end: 1086d284f;  */

void FUN_1086d2814(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c325fc();
  for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 8) {
    FUN_1086d2850();
  }
  return;
}



/* Entry: 1086d2850; end: 1086d2857;  */

undefined1  [16] FUN_1086d2850(long *param_1,undefined8 param_2,long *param_3)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  plVar2 = param_1;
  func_0x0001086d28f8(param_1,param_2,&uStack_48,auStack_50,param_3);
  plVar3 = (long *)*plVar2;
  bVar1 = plVar3 == (long *)0x0;
  if (bVar1) {
    plVar3 = plVar2;
    func_0x000107c3268c();
    uStack_58 = 1;
    plVar3[4] = *param_3;
    plStack_60 = param_1 + 1;
    FUN_10867c1ec(param_1,uStack_48,plVar2,plVar3);
    uStack_68 = 0;
    func_0x00010867c238(&uStack_68);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = plVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 1086d2858; end: 1086d29ff;  */

undefined1  [16] FUN_1086d2858(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  plVar2 = param_1;
  func_0x0001086d28f8(param_1,param_2,&uStack_48,auStack_50,param_3);
  plVar3 = (long *)*plVar2;
  bVar1 = plVar3 == (long *)0x0;
  if (bVar1) {
    plVar3 = plVar2;
    func_0x000107c3268c();
    uStack_58 = 1;
    plVar3[4] = *param_4;
    plStack_60 = param_1 + 1;
    FUN_10867c1ec(param_1,uStack_48,plVar2,plVar3);
    uStack_68 = 0;
    func_0x00010867c238(&uStack_68);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = plVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 1086d2a00; end: 1086d2a23;  */

void FUN_1086d2a00(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  func_0x000107c32714();
  func_0x000107c27bdc();
  *unaff_x19 = param_1;
  return;
}



/* Entry: 1086d2a24; end: 1086d2a47;  */

undefined8 FUN_1086d2a24(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_1086d2a48(&uStack_18);
  return uStack_18;
}



/* Entry: 1086d2a48; end: 1086d2aaf;  */

void FUN_1086d2a48(undefined8 param_1,long param_2)

{
  long unaff_x19;
  
  func_0x000107c32670();
  if (param_2 < 0) {
    for (; unaff_x19 != 0; unaff_x19 = unaff_x19 + 1) {
      FUN_1086d2a00();
    }
  }
  else {
    while (0 < unaff_x19) {
      func_0x0001086d2a8c();
      unaff_x19 = unaff_x19 + -1;
    }
  }
  return;
}



/* Entry: 1086d2ab0; end: 1086d2b4f;  */

void FUN_1086d2ab0(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auStack_7b0 [32];
  undefined8 uStack_790;
  undefined1 auStack_608 [1496];
  
  uVar4 = 0;
  func_0x000107c28970(auStack_7b0,param_1);
  lVar1 = *(long *)(param_2 + 0x10);
  uVar3 = *(ulong *)(*(long *)(lVar1 + 0xd0) + 0xd0);
  func_0x000107c29d10(uVar3,*(undefined8 *)(param_2 + 0x18),uStack_790);
  if (((uVar3 & 1) == 0) && (func_0x000107c28e64(), (uVar4 & 1) == 0)) {
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    func_0x000107c29260(auStack_608,*(undefined8 *)(*(long *)(lVar1 + 0xd0) + 0x170),auStack_7b0,
                        *(undefined8 *)(param_2 + 0x28));
    func_0x000107c27aa8(uVar2,auStack_608);
    func_0x000107c27a10(auStack_608);
  }
  func_0x0001086dad64();
  return;
}



/* Entry: 1086d2b50; end: 1086d2bbb;  */

void FUN_1086d2b50(void)

{
  return;
}



/* Entry: 1086d2bbc; end: 1086d2bdb;  */

void FUN_1086d2bbc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1086b5648();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1086d2bdc; end: 1086d2bdf;  */

void FUN_1086d2bdc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1086d2be0; end: 1086d2bfb;  */

bool FUN_1086d2be0(long param_1)

{
  FUN_108699c84();
  return param_1 != 0;
}



/* Entry: 1086d2bfc; end: 1086d2c8b;  */

void FUN_1086d2bfc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001086da240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x20))
            (*(long **)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x20));
  return;
}



/* Entry: 1086d2c8c; end: 1086d2d2b;  */

undefined8 FUN_1086d2c8c(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x0001086d2cb4(param_1,*(undefined8 *)(param_1 + 0x10));
  func_0x000107c327e0(param_1);
  FUN_1086d2d2c();
  return unaff_x19;
}


