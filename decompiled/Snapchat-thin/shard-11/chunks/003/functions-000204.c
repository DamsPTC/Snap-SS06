/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1083d8e18; end: 1083d8e3b;  */

undefined8 FUN_1083d8e18(undefined8 param_1)

{
  FUN_1083d8e3c(param_1,0);
  return param_1;
}



/* Entry: 1083d8e3c; end: 1083d8e4f;  */

void FUN_1083d8e3c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + -8) != 0) {
      lVar2 = *(long *)(lVar1 + -8) << 4;
      do {
        if (*(int *)(lVar1 + -0x10 + lVar2) != 0) {
          *(undefined4 *)(lVar1 + -0x10 + lVar2) = 0;
        }
        lVar2 = lVar2 + -0x10;
      } while (lVar2 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)();
    return;
  }
  return;
}



/* Entry: 1083d8e50; end: 1083d8e87;  */

long * FUN_1083d8e50(long *param_1,long param_2)

{
  ulong uVar1;
  
  *param_1 = param_2;
  uVar1 = param_2 + 0x1fU >> 3 & 0x1ffffffffffffffc;
  FUN_108410808(uVar1,3);
  param_1[1] = uVar1;
  return param_1;
}



/* Entry: 1083d8e88; end: 1083d8ea7;  */

long * FUN_1083d8e88(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001083d8e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return plVar1;
  }
  func_0x000104bfeb48();
  uStack_48 = param_2;
  FUN_1083d9110(auStack_40,param_3);
  FUN_1083d8efc(plVar1,&uStack_48);
  func_0x0001083d9318();
  return plVar1 + 1;
}



/* Entry: 1083d8ea8; end: 1083d8efb;  */

long FUN_1083d8ea8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_38;
  undefined1 auStack_30 [16];
  
  uStack_38 = param_2;
  FUN_1083d9110(auStack_30,param_3);
  FUN_1083d8efc(param_1,&uStack_38);
  func_0x0001083d9318();
  return param_1 + 8;
}



/* Entry: 1083d8efc; end: 1083d8f47;  */

int * FUN_1083d8efc(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  undefined8 uVar4;
  int iVar5;
  uint extraout_w8;
  int iVar6;
  ulong extraout_x9;
  ulong uVar7;
  long extraout_x10;
  undefined8 unaff_x19;
  int *unaff_x20;
  
  func_0x0001083d92bc();
  if (param_1[1] * 3 <= *param_1 * 4) {
    FUN_1083d8f48();
  }
  uVar4 = unaff_x19;
  func_0x0001083d92bc();
  iVar5 = (int)uVar4;
  FUN_10831ec68();
  func_0x0001083d9330();
  uVar1 = extraout_w8 & ((int)extraout_w8 >> 0x1f ^ 0xffffffffU);
  uVar7 = extraout_x9;
  while( true ) {
    if (uVar1 == 0) {
      return (int *)0x0;
    }
    iVar6 = (int)uVar7;
    piVar3 = (int *)(*(long *)(unaff_x20 + 2) + (long)iVar6 * 0x20);
    if (*piVar3 == 0) break;
    if ((iVar5 == *piVar3) && (extraout_x10 == *(long *)(piVar3 + 2))) {
      FUN_1083d90c4(piVar3,unaff_x19);
      return piVar3 + 2;
    }
    uVar2 = 0;
    if (iVar6 < 1) {
      uVar2 = extraout_w8;
    }
    uVar7 = (ulong)((iVar6 + uVar2) - 1);
    uVar1 = uVar1 - 1;
  }
  FUN_1083d90c4(piVar3,unaff_x19);
  *unaff_x20 = *unaff_x20 + 1;
  return piVar3 + 2;
}



/* Entry: 1083d8f48; end: 1083d901f;  */

void FUN_1083d8f48(undefined4 *param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lStack_38;
  
  uVar1 = param_1[1];
  *param_1 = 0;
  param_1[1] = param_2;
  lStack_38 = *(long *)(param_1 + 2);
  *(undefined8 *)(param_1 + 2) = 0;
  lVar4 = (long)param_2;
  puVar2 = (undefined8 *)(lVar4 << 5 | 0x10);
  if (param_2 < 0) {
    puVar2 = (undefined8 *)0xffffffffffffffff;
  }
  __Znam();
  *puVar2 = 0x20;
  puVar2[1] = lVar4;
  if (param_2 != 0) {
    lVar4 = lVar4 << 5;
    puVar3 = puVar2 + 2;
    do {
      *(undefined4 *)puVar3 = 0;
      lVar4 = lVar4 + -0x20;
      puVar3 = puVar3 + 4;
    } while (lVar4 != 0);
  }
  *(undefined8 **)(param_1 + 2) = puVar2 + 2;
  for (lVar4 = 0; (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) << 5 != lVar4;
      lVar4 = lVar4 + 0x20) {
    if (*(int *)(lStack_38 + lVar4) != 0) {
      FUN_1083d9020(param_1,lStack_38 + lVar4 + 8);
    }
  }
  FUN_10831e424(&lStack_38);
  return;
}



/* Entry: 1083d9020; end: 1083d90c3;  */

int * FUN_1083d9020(undefined8 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  uint extraout_w8;
  int iVar4;
  ulong extraout_x9;
  ulong uVar5;
  long extraout_x10;
  int *unaff_x20;
  
  func_0x0001083d92bc();
  FUN_10831ec68();
  func_0x0001083d9330();
  uVar1 = extraout_w8 & ((int)extraout_w8 >> 0x1f ^ 0xffffffffU);
  uVar5 = extraout_x9;
  while( true ) {
    if (uVar1 == 0) {
      return (int *)0x0;
    }
    iVar4 = (int)uVar5;
    piVar3 = (int *)(*(long *)(unaff_x20 + 2) + (long)iVar4 * 0x20);
    if (*piVar3 == 0) break;
    if ((param_2 == *piVar3) && (extraout_x10 == *(long *)(piVar3 + 2))) {
      FUN_1083d90c4();
      return piVar3 + 2;
    }
    uVar2 = 0;
    if (iVar4 < 1) {
      uVar2 = extraout_w8;
    }
    uVar5 = (ulong)((iVar4 + uVar2) - 1);
    uVar1 = uVar1 - 1;
  }
  FUN_1083d90c4();
  *unaff_x20 = *unaff_x20 + 1;
  return piVar3 + 2;
}



/* Entry: 1083d90c4; end: 1083d910f;  */

undefined4 * FUN_1083d90c4(undefined4 *param_1,undefined8 *param_2,undefined4 param_3)

{
  FUN_10831e4a4();
  *(undefined8 *)(param_1 + 2) = *param_2;
  FUN_1083d9110(param_1 + 4,param_2 + 1);
  *param_1 = param_3;
  return param_1;
}



/* Entry: 1083d9110; end: 1083d9253;  */

void FUN_1083d9110(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x0001083d92e0();
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if ((*(byte *)(param_2 + 0xc) & 1) == 0) {
    func_0x0001083d9184();
    FUN_1083d8c58();
  }
  else {
    iVar1 = *(int *)(unaff_x20 + 1);
    *unaff_x19 = *unaff_x20;
    *(uint *)((long)unaff_x19 + 0xc) = iVar1 << 1 | 1;
    *unaff_x20 = 0;
    *(undefined4 *)((long)unaff_x20 + 0xc) = 1;
  }
  *(undefined4 *)(unaff_x19 + 1) = *(undefined4 *)(unaff_x20 + 1);
  *(undefined4 *)(unaff_x20 + 1) = 0;
  return;
}



/* Entry: 1083d9254; end: 1083d9273;  */

void FUN_1083d9254(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001083d9264. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  return;
}



/* Entry: 1083d9274; end: 1083d9343;  */

void FUN_1083d9274(void)

{
  return;
}



/* Entry: 1083d9344; end: 1083d9367;  */

void FUN_1083d9344(void)

{
  func_0x0001083d94b4();
  func_0x0001083d949c();
  return;
}



/* Entry: 1083d9368; end: 1083d9463;  */

void FUN_1083d9368(long param_1,long param_2)

{
  int iVar1;
  code *pcVar2;
  long extraout_x8;
  
  switch(*(undefined4 *)(param_2 + 0xc)) {
  case 0xc:
  case 0x17:
    if (*(int *)(param_2 + 0xc) - 0xcU < 0xd) {
      func_0x0001083c3950(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001083c28a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10df20988)[extraout_x8] * 4 + 0x1083c28a4))();
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1083c29d4);
    (*pcVar2)();
  case 0xd:
    if (*(int *)(param_1 + 0x10) != 0) {
      return;
    }
    iVar1 = *(int *)(param_1 + 0x14);
    goto joined_r0x0001083d9430;
  case 0xe:
    iVar1 = *(int *)(param_1 + 0x10);
joined_r0x0001083d9430:
    if (iVar1 == 0) {
code_r0x0001083d940c:
    }
    break;
  case 0x10:
  case 0x12:
    *(ulong *)(param_1 + 0xc) =
         CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0xc) >> 0x20) + 1,
                  (int)*(undefined8 *)(param_1 + 0xc) + 1);
    func_0x0001083d94ac(0);
    *(ulong *)(param_1 + 0xc) =
         CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0xc) >> 0x20) + -1,
                  (int)*(undefined8 *)(param_1 + 0xc) + -1);
    break;
  case 0x13:
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    func_0x0001083d94ac(0);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
    break;
  case 0x15:
    goto code_r0x0001083d940c;
  case 0x16:
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    func_0x0001083d94ac(0);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
  }
  return;
}



/* Entry: 1083d9464; end: 1083d9467;  */

void FUN_1083d9464(void)

{
  return;
}



/* Entry: 1083d9468; end: 1083d948f;  */

void FUN_1083d9468(void)

{
  func_0x0001083d94b4();
  func_0x0001083d949c();
  return;
}



/* Entry: 1083d9490; end: 1083d94c7;  */

void FUN_1083d9490(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083d94c8; end: 1083d9ab3;  */

void FUN_1083d94c8(undefined8 *param_1,long param_2,undefined4 param_3,ulong *param_4,uint param_5,
                  ulong *param_6)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  byte *pbVar7;
  long *plVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong *puVar14;
  undefined8 extraout_x8_02;
  ulong *extraout_x10;
  ulong *extraout_x10_00;
  ulong *extraout_x10_01;
  ulong *extraout_x10_02;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  undefined8 extraout_x11_01;
  undefined8 extraout_x11_02;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [24];
  byte *pbStack_138;
  long lStack_130;
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  ulong auStack_98 [3];
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  byte bStack_61;
  
  bStack_61 = (byte)param_5;
  uVar6 = *param_4;
  if ((uVar6 == 0) || (*param_6 == 0)) goto LAB_1083d9874;
  FUN_1083c6698();
  iVar5 = (int)uVar6;
  if ((iVar5 == 0) || (func_0x0001083da0fc(*param_6), puVar14 = param_6, 1 < (iVar5 - 1U & 0xff))) {
    puVar14 = param_4;
  }
  uVar13 = param_5 & 0xff;
  uVar15 = *(undefined8 *)(*puVar14 + 0x10);
  iVar5 = (int)*param_6;
  FUN_1083c6698();
  if ((iVar5 == 0) || (func_0x0001083da0fc(*param_4), puVar14 = param_4, 1 < (iVar5 - 1U & 0xff))) {
    puVar14 = param_6;
  }
  bVar2 = false;
  uVar16 = *(undefined8 *)(*puVar14 + 0x10);
  cVar3 = SBORROW4(uVar13,0x1f);
  cVar4 = (int)(uVar13 - 0x1f) < 0;
  if (uVar13 < 0x20) {
    uVar12 = 1;
    uVar1 = 1 << (ulong)(param_5 & 0x1f) & 0xffc08000;
    cVar4 = (int)uVar1 < 0;
    cVar3 = '\0';
    if (uVar1 != 0) {
      uVar6 = *param_4;
      cVar3 = SBORROW4(uVar13,0xf);
      cVar4 = (int)(uVar13 - 0xf) < 0;
      if (uVar13 != 0xf) {
        uVar12 = 2;
      }
      FUN_1083c3394(uVar6,uVar12,*(undefined8 *)(param_2 + 0x10));
      bVar2 = true;
      if ((uVar6 & 1) == 0) goto LAB_1083d9874;
    }
  }
  pbVar7 = &bStack_61;
  lVar11 = param_2;
  FUN_1083cb320(pbVar7,param_2,uVar15,uVar16,&plStack_70,&uStack_78,&uStack_80);
  if (((ulong)pbVar7 & 1) == 0) {
    uVar16 = *(undefined8 *)(param_2 + 0x10);
    func_0x0001083da128();
    pbStack_138 = pbVar7;
    lStack_130 = lVar11;
    func_0x000107c27958(auStack_128,&pbStack_138);
    func_0x0001004c3cd0(auStack_110,&UNK_10f49261f,auStack_128);
    func_0x00010048a6c8(auStack_f8,auStack_110,&UNK_10f492630);
    FUN_10831d8f8(auStack_150,*(undefined8 *)(*param_4 + 0x10));
    func_0x00010533a9c0(auStack_e0,auStack_f8,auStack_150);
    func_0x00010048a6c8(auStack_c8,auStack_e0,&UNK_10f492646);
    FUN_10831d8f8(auStack_168,*(undefined8 *)(*param_6 + 0x10));
    func_0x00010533a9c0(auStack_b0,auStack_c8,auStack_168);
    func_0x00010048a6c8(auStack_98,auStack_b0,&DAT_10f638984);
    func_0x0001083da0a8();
    uVar15 = extraout_x11_00;
    puVar14 = extraout_x10_00;
    if (cVar4 == cVar3) {
      uVar15 = extraout_x8_00;
      puVar14 = auStack_98;
    }
    FUN_1083c8a60(uVar16,param_3,puVar14,uVar15);
    func_0x0001083da0f4();
    func_0x0001083da10c();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_168);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_150);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_f8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_110);
    puVar9 = auStack_128;
  }
  else {
    if (!bVar2) {
LAB_1083d9774:
      iVar5 = (int)*(undefined8 *)(param_2 + 8);
      FUN_1083c5ae8();
      if (iVar5 != 0) {
        cVar3 = SBORROW4((uint)bStack_61,0x1f);
        cVar4 = (int)(bStack_61 - 0x1f) < 0;
        if (bStack_61 < 0x20) {
          uVar13 = 1 << (ulong)(bStack_61 & 0x1f) & 0xfc007070;
          cVar4 = (int)uVar13 < 0;
          cVar3 = '\0';
          if (uVar13 != 0) {
            uVar16 = *(undefined8 *)(param_2 + 0x10);
            func_0x0001083da128();
            func_0x0001083da0d8();
            func_0x0001083da0cc(&UNK_10f49267c);
            func_0x0001083da0bc();
            func_0x0001083da0a8();
            uVar15 = extraout_x11_01;
            puVar14 = extraout_x10_01;
            if (cVar4 == cVar3) {
              uVar15 = extraout_x8_01;
              puVar14 = param_4;
            }
            FUN_1083c8a60(uVar16,param_3,puVar14,uVar15);
            goto LAB_1083d9864;
          }
        }
      }
      uVar6 = *(ulong *)(param_2 + 8);
      FUN_1083c5ae8();
      if ((uVar6 & 1) == 0) {
        uVar13 = (uint)bStack_61;
        cVar3 = SBORROW4(uVar13,0x22);
        cVar4 = (int)(uVar13 - 0x22) < 0;
        if (uVar13 == 0x22) goto LAB_1083d97fc;
      }
      else {
LAB_1083d97fc:
        plVar8 = plStack_70;
        func_0x0001083da11c();
        puVar14 = param_4;
        if (((((ulong)plVar8 & 1) != 0) ||
            (uVar15 = uStack_78, func_0x0001083da11c(), puVar14 = param_6, (int)uVar15 != 0)) &&
           (*puVar14 != 0)) {
          uVar16 = *(undefined8 *)(param_2 + 0x10);
          uVar12 = *(undefined4 *)(*puVar14 + 8);
          func_0x0001083da128();
          func_0x0001083da0d8();
          func_0x0001083da0cc(&UNK_10f49267c);
          func_0x0001083da0bc();
          func_0x0001083da0a8();
          uVar15 = extraout_x11_02;
          puVar14 = extraout_x10_02;
          if (cVar4 == cVar3) {
            uVar15 = extraout_x8_02;
            puVar14 = param_4;
          }
          FUN_1083c8a60(uVar16,uVar12,puVar14,uVar15);
          goto LAB_1083d9864;
        }
      }
      uStack_170 = *param_4;
      *param_4 = 0;
      FUN_1083f1310(auStack_98,plStack_70,&uStack_170,param_2);
      uVar6 = auStack_98[0];
      auStack_98[0] = 0;
      uVar10 = *param_4;
      *param_4 = uVar6;
      if (uVar10 != 0) {
        func_0x0001083da09c();
        uVar6 = auStack_98[0];
        auStack_98[0] = 0;
        if (uVar6 != 0) {
          func_0x0001083da09c();
        }
      }
      uVar6 = uStack_170;
      uStack_170 = 0;
      if (uVar6 != 0) {
        func_0x0001083da09c();
      }
      uStack_178 = *param_6;
      *param_6 = 0;
      FUN_1083f1310(auStack_98,uStack_78,&uStack_178,param_2);
      uVar6 = auStack_98[0];
      auStack_98[0] = 0;
      uVar10 = *param_6;
      *param_6 = uVar6;
      if (uVar10 != 0) {
        func_0x0001083da09c();
        uVar6 = auStack_98[0];
        auStack_98[0] = 0;
        if (uVar6 != 0) {
          func_0x0001083da09c();
        }
      }
      uVar6 = uStack_178;
      uStack_178 = 0;
      if (uVar6 != 0) {
        func_0x0001083da09c();
      }
      uStack_180 = *param_4;
      if ((uStack_180 != 0) && (*param_6 != 0)) {
        *param_4 = 0;
        uStack_188 = *param_6;
        *param_6 = 0;
        FUN_1083d9ab4(param_1,param_2,param_3,&uStack_180,bStack_61,&uStack_188,uStack_80);
        func_0x0001083da0e8();
        if (param_2 != 0) {
          func_0x0001083da09c();
        }
        func_0x0001083da130();
        if (param_2 == 0) {
          return;
        }
        func_0x0001083da09c();
        return;
      }
      goto LAB_1083d9874;
    }
    plVar8 = plStack_70;
    (**(code **)(*plStack_70 + 0x50))();
    cVar4 = '\0';
    cVar3 = '\0';
    if ((0xf < *(byte *)((long)plVar8 + 0x2c) ||
         (1 << (ulong)(*(byte *)((long)plVar8 + 0x2c) & 0x1f) & 0xe4c2U) == 0) &&
       (plVar8 = plStack_70, (**(code **)(*plStack_70 + 0x128))(), (int)plVar8 == 0))
    goto LAB_1083d9774;
    uVar16 = *(undefined8 *)(param_2 + 0x10);
    FUN_10831d8f8(auStack_c8,*(undefined8 *)(*param_4 + 0x10));
    func_0x0001083da0cc(&UNK_10f49264b);
    func_0x0001083da0bc();
    func_0x0001083da0a8();
    uVar15 = extraout_x11;
    puVar14 = extraout_x10;
    if (cVar4 == cVar3) {
      uVar15 = extraout_x8;
      puVar14 = param_4;
    }
    FUN_1083c8a60(uVar16,param_3,puVar14,uVar15);
LAB_1083d9864:
    func_0x0001083da0f4();
    func_0x0001083da10c();
    puVar9 = auStack_c8;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar9);
LAB_1083d9874:
  *param_1 = 0;
  return;
}



/* Entry: 1083d9ab4; end: 1083d9b93;  */

void FUN_1083d9ab4(long *param_1,undefined8 param_2,undefined4 param_3,long *param_4,char param_5,
                  undefined8 *param_6,undefined8 param_7)

{
  long lVar1;
  long lStack_68;
  undefined8 uStack_60;
  char cStack_55;
  undefined4 uStack_54;
  
  uStack_60 = param_7;
  cStack_55 = param_5;
  uStack_54 = param_3;
  if (param_5 == '\x0f') {
    FUN_1083f165c(*(undefined8 *)(*param_4 + 0x10),param_2,*param_6);
  }
  FUN_1083c6840(param_1,param_2,param_3,*param_4,param_5,*param_6,param_7);
  if (*param_1 == 0) {
    FUN_1083c8734(param_1);
    FUN_1083d9c78(&lStack_68,&uStack_54,param_4,&cStack_55,param_6,&uStack_60);
    lVar1 = lStack_68;
    lStack_68 = 0;
    *param_1 = lVar1;
    func_0x0001083da040(&lStack_68);
  }
  return;
}



/* Entry: 1083d9b94; end: 1083d9c77;  */

void FUN_1083d9b94(undefined8 param_1,undefined8 param_2,undefined4 param_3,long *param_4,
                  undefined1 param_5,long *param_6)

{
  long lVar1;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [15];
  undefined1 uStack_41;
  
  uStack_41 = param_5;
  FUN_1083cb320(&uStack_41,param_2,*(undefined8 *)(*param_4 + 0x10),*(undefined8 *)(*param_6 + 0x10)
                ,auStack_50,auStack_58,&uStack_60);
  lStack_68 = *param_4;
  *param_4 = 0;
  lStack_70 = *param_6;
  *param_6 = 0;
  FUN_1083d9ab4(param_1,param_2,param_3,&lStack_68,uStack_41,&lStack_70,uStack_60);
  lVar1 = lStack_70;
  lStack_70 = 0;
  if (lVar1 != 0) {
    FUN_1083da09c();
  }
  func_0x0001083da0e8();
  if (lVar1 != 0) {
    FUN_1083da09c();
  }
  return;
}



/* Entry: 1083d9c78; end: 1083d9cff;  */

void FUN_1083d9c78(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3,undefined1 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar3 = (undefined8 *)0x30;
  FUN_1083d3a60();
  uVar1 = *param_2;
  uVar4 = *param_3;
  *param_3 = 0;
  uVar2 = *param_4;
  uVar5 = *param_5;
  *param_5 = 0;
  uVar6 = *param_6;
  *(undefined4 *)(puVar3 + 1) = uVar1;
  *(undefined4 *)((long)puVar3 + 0xc) = 0x19;
  *puVar3 = &PTR_FUN_110a44cc8;
  puVar3[2] = uVar6;
  puVar3[3] = uVar4;
  *(undefined1 *)(puVar3 + 4) = uVar2;
  puVar3[5] = uVar5;
  *param_1 = puVar3;
  return;
}



/* Entry: 1083d9d00; end: 1083d9deb;  */

void FUN_1083d9d00(undefined8 *param_1,long param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  plVar4 = *(long **)(param_2 + 0x18);
  (**(code **)(*plVar4 + 0x30))(&uStack_40,plVar4,(int)plVar4[1]);
  uVar1 = *(undefined1 *)(param_2 + 0x20);
  plVar4 = *(long **)(param_2 + 0x28);
  (**(code **)(*plVar4 + 0x30))(&uStack_48,plVar4,(int)plVar4[1]);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  puVar5 = (undefined8 *)0x30;
  FUN_1083d3a60();
  uVar3 = uStack_40;
  uVar2 = uStack_48;
  uStack_48 = 0;
  uStack_40 = 0;
  *(undefined4 *)(puVar5 + 1) = param_3;
  *(undefined4 *)((long)puVar5 + 0xc) = 0x19;
  *puVar5 = &PTR_FUN_110a44cc8;
  puVar5[2] = uVar6;
  puVar5[3] = uVar3;
  *(undefined1 *)(puVar5 + 4) = uVar1;
  puVar5[5] = uVar2;
  uStack_38 = 0;
  *param_1 = puVar5;
  puVar5 = &uStack_38;
  func_0x0001083da040();
  func_0x0001083da0e8();
  if (puVar5 != (undefined8 *)0x0) {
    func_0x0001083da09c();
  }
  func_0x0001083da130();
  if (puVar5 != (undefined8 *)0x0) {
    func_0x0001083da09c();
  }
  return;
}



/* Entry: 1083d9dec; end: 1083d9f9b;  */

void FUN_1083d9dec(undefined8 param_1,long param_2,uint param_3)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [31];
  undefined1 uStack_b9;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  auStack_58[0] = *(undefined1 *)(param_2 + 0x20);
  puVar2 = auStack_58;
  FUN_1083cb220();
  pcVar1 = "";
  if (param_3 <= (uint)puVar2) {
    pcVar1 = "(";
  }
  func_0x000107c278b8(auStack_a0,pcVar1);
  (**(code **)(**(long **)(param_2 + 0x18) + 0x38))(auStack_b8,*(long **)(param_2 + 0x18),puVar2);
  func_0x00010533a9c0(auStack_88,auStack_a0,auStack_b8);
  uStack_b9 = *(undefined1 *)(param_2 + 0x20);
  puVar3 = &uStack_b9;
  FUN_1083cb27c(puVar3);
  func_0x00010048a6c8(auStack_70,auStack_88,puVar3);
  (**(code **)(**(long **)(param_2 + 0x28) + 0x38))(auStack_d8,*(long **)(param_2 + 0x28),puVar2);
  func_0x00010533a9c0(auStack_58,auStack_70,auStack_d8);
  pcVar1 = "";
  if (param_3 <= (uint)puVar2) {
    pcVar1 = ")";
  }
  func_0x000107c278b8(auStack_f0,pcVar1);
  func_0x00010533a9c0(param_1,auStack_58,auStack_f0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_f0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_88);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a0);
  return;
}



/* Entry: 1083d9f9c; end: 1083d9ff7;  */

undefined8 FUN_1083d9f9c(long param_1)

{
  ulong uVar1;
  undefined8 uStack_18;
  
  if (*(byte *)(param_1 + 0x20) < 0x20 &&
      (1 << (ulong)(*(byte *)(param_1 + 0x20) & 0x1f) & 0xffc08000U) != 0) {
    uStack_18 = 0;
    uVar1 = *(ulong *)(param_1 + 0x18);
    FUN_1083c319c(uVar1,&uStack_18,0);
    if ((uVar1 & 1) != 0) {
      return uStack_18;
    }
  }
  return 0;
}



/* Entry: 1083d9ff8; end: 1083d9ffb;  */

long FUN_1083d9ff8(long param_1)

{
  FUN_1083c8734(param_1 + 0x28);
  FUN_1083c8734(param_1 + 0x18);
  return param_1;
}



/* Entry: 1083d9ffc; end: 1083da00f;  */

void FUN_1083d9ffc(long *param_1)

{
  undefined8 extraout_x8;
  
  FUN_1083da010();
  FUN_1083d3bc4(param_1);
  if (*param_1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(extraout_x8);
  return;
}



/* Entry: 1083da010; end: 1083da067;  */

long FUN_1083da010(long param_1)

{
  FUN_1083c8734(param_1 + 0x28);
  FUN_1083c8734(param_1 + 0x18);
  return param_1;
}



/* Entry: 1083da068; end: 1083da07f;  */

void FUN_1083da068(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 extraout_x8;
  
  plVar1 = (long *)*param_1;
  *param_1 = param_2;
  if (plVar1 == (long *)0x0) {
    return;
  }
  if (plVar1 != (long *)0x0) {
    FUN_1083da010();
  }
  FUN_1083d3bc4(plVar1);
  if (*plVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(extraout_x8);
  return;
}



/* Entry: 1083da080; end: 1083da09b;  */

void FUN_1083da080(undefined8 param_1,long *param_2)

{
  undefined8 extraout_x8;
  
  if (param_2 != (long *)0x0) {
    FUN_1083da010();
  }
  FUN_1083d3bc4(param_2);
  if (*param_2 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(extraout_x8);
  return;
}



/* Entry: 1083da09c; end: 1083da13b;  */

void FUN_1083da09c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001083da0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1083da13c; end: 1083da25f;  */

void FUN_1083da13c(ulong *param_1,undefined4 param_2,long param_3,int param_4,long *param_5)

{
  bool bVar1;
  uint uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong unaff_x21;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  undefined8 uStack_58;
  ulong uStack_50;
  int iStack_48;
  undefined4 uStack_44;
  
  iStack_48 = param_4;
  uStack_44 = param_2;
  if ((param_4 == 1) || ((*param_5 != 0 && (*(int *)(*param_5 + 0x30) != 0)))) {
    FUN_1083da260(&uStack_50,&uStack_44,param_3,&iStack_48);
LAB_1083da18c:
    uVar6 = uStack_50;
    uStack_50 = 0;
    *param_1 = uVar6;
    func_0x0001083d3070(&uStack_50);
    return;
  }
  uVar2 = *(uint *)(param_3 + 0x18);
  if (uVar2 == 0) {
    FUN_1083d25b8(&stack0xffffffffffffffd8);
    *param_1 = unaff_x21;
    FUN_1083d2618(&stack0xffffffffffffffd8);
    return;
  }
  puVar5 = *(ulong **)(param_3 + 0x10);
  if (1 < (int)uVar2) {
    puVar7 = (ulong *)0x0;
    uVar6 = (ulong)uVar2 << 3;
    uVar4 = (ulong)uVar2;
    while (uVar4 != 0) {
      uVar4 = *puVar5;
      func_0x0001083da6e0();
      if (((uVar4 & 1) == 0) && (bVar1 = puVar7 != (ulong *)0x0, puVar7 = puVar5, bVar1)) {
        uStack_58 = 0;
        FUN_1083da2f4(&uStack_50,&uStack_44,param_3,&iStack_48,&uStack_58);
        goto LAB_1083da18c;
      }
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 - 8;
      uVar4 = uVar6;
    }
    if (puVar7 != (ulong *)0x0) {
      uVar6 = *puVar7;
      *puVar7 = 0;
      goto LAB_1083da254;
    }
    if (*(int *)(param_3 + 0x18) == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1083da260);
      (*pcVar3)();
    }
    puVar5 = *(ulong **)(param_3 + 0x10);
  }
  uVar6 = *puVar5;
  *puVar5 = 0;
LAB_1083da254:
  *param_1 = uVar6;
  return;
}



/* Entry: 1083da260; end: 1083da2f3;  */

void FUN_1083da260(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  uint *unaff_x22;
  undefined4 uStack_f4;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [32];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 auStack_68 [4];
  undefined8 uStack_48;
  
  FUN_1083da6c0();
  uVar1 = *unaff_x22;
  puVar3 = auStack_68;
  uVar5 = param_2;
  FUN_1083d0a60(puVar3,param_2);
  uStack_70 = *param_4;
  *param_4 = 0;
  func_0x0001083da6ec();
  *unaff_x20 = param_1;
  func_0x0001083da718();
  func_0x0001083da748();
  func_0x0001083da704(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001083da718();
    func_0x0001083da748();
    uVar4 = param_1;
    FUN_1083d3a98();
    func_0x0001083da750();
    pcStack_78 = FUN_1083da2f4;
    uStack_b0 = param_2;
    uStack_a8 = param_3;
    uStack_a0 = (ulong)uVar1;
    puStack_98 = param_4;
    puStack_90 = puVar3;
    uStack_88 = param_1;
    puStack_80 = &stack0xfffffffffffffff0;
    FUN_1083da6c0();
    FUN_1083d0a60(auStack_d8,uVar5);
    uStack_e0 = 0;
    func_0x0001083da6ec();
    *puVar3 = uVar4;
    func_0x0001083da718();
    func_0x0001083da748();
    func_0x0001083da704(uStack_b8);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001083da718();
      func_0x0001083da748();
      FUN_1083d3a98();
      uVar2 = (undefined4)uVar4;
      func_0x0001083da750();
      pcStack_e8 = FUN_1083da37c;
      uStack_f4 = uVar2;
      ppuStack_f0 = &puStack_80;
      FUN_1083da260(&uStack_f4);
      return;
    }
  }
  return;
}



/* Entry: 1083da2f4; end: 1083da37b;  */

void FUN_1083da2f4(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined4 uVar1;
  undefined8 *unaff_x20;
  undefined4 uStack_84;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [32];
  undefined8 uStack_48;
  
  FUN_1083da6c0();
  FUN_1083d0a60(auStack_68,param_2);
  uStack_70 = 0;
  func_0x0001083da6ec();
  *unaff_x20 = param_1;
  func_0x0001083da718();
  func_0x0001083da748();
  func_0x0001083da704(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001083da718();
  func_0x0001083da748();
  FUN_1083d3a98();
  uVar1 = (undefined4)param_1;
  func_0x0001083da750();
  pcStack_78 = FUN_1083da37c;
  uStack_84 = uVar1;
  puStack_80 = &stack0xfffffffffffffff0;
  FUN_1083da260(&uStack_84);
  return;
}



/* Entry: 1083da37c; end: 1083da3a7;  */

void FUN_1083da37c(undefined4 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = param_3;
  uStack_14 = param_1;
  FUN_1083da260(&uStack_14,param_2,&uStack_18);
  return;
}



/* Entry: 1083da3a8; end: 1083da51f;  */

void FUN_1083da3a8(long *param_1,long *param_2,long *param_3,undefined8 param_4,undefined1 *param_5)

{
  undefined1 in_ZR;
  undefined1 **ppuVar1;
  ulong uVar2;
  undefined1 **ppuVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined4 extraout_w8;
  long lVar7;
  undefined1 *unaff_x23;
  undefined8 uStack_90;
  long alStack_88 [2];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar6 = &uStack_90;
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = (undefined1 **)*param_2;
  plVar5 = param_3;
  if (ppuVar1 == (undefined1 **)0x0) {
LAB_1083da3ec:
    iVar4 = (int)plVar5;
    lVar7 = *param_3;
    *param_3 = 0;
    puVar6 = (undefined8 *)param_5;
  }
  else {
    func_0x0001083da6e0();
    iVar4 = (int)plVar5;
    if ((int)ppuVar1 != 0) goto LAB_1083da3ec;
    ppuVar1 = (undefined1 **)*param_3;
    if ((ppuVar1 != (undefined1 **)0x0) && (func_0x0001083da6e0(), (int)ppuVar1 == 0)) {
      lVar7 = *param_2;
      in_ZR = *(int *)(lVar7 + 0xc) == 0xc;
      if ((!(bool)in_ZR) || (in_ZR = *(int *)(lVar7 + 0x38) == 2, !(bool)in_ZR)) {
        uVar2 = lVar7 + 8;
        FUN_1083d0cc4(uVar2,*(undefined4 *)(*param_3 + 8));
        unaff_x23 = auStack_68;
        uStack_50 = 0x400000000;
        puStack_58 = unaff_x23;
        FUN_1083da520(&puStack_58,2);
        FUN_1083d09d4(&puStack_58,param_2);
        FUN_1083d09d4(&puStack_58,param_3);
        FUN_1083d0a60(alStack_88,auStack_68);
        uStack_90 = 0;
        param_3 = alStack_88;
        plVar5 = alStack_88;
        param_4 = 2;
        FUN_1083da13c(param_1,uVar2 & 0xffffffff,plVar5,2,&uStack_90);
        iVar4 = (int)plVar5;
        func_0x0001083da718();
        FUN_1082da480(auStack_78);
        ppuVar1 = &puStack_58;
        FUN_1082da480();
        goto LAB_1083da414;
      }
      ppuVar1 = (undefined1 **)(lVar7 + 0x28);
      plVar5 = param_3;
      FUN_1083d09d4();
      iVar4 = (int)plVar5;
    }
    lVar7 = *param_2;
    *param_2 = 0;
    puVar6 = (undefined8 *)param_5;
  }
  *param_1 = lVar7;
LAB_1083da414:
  func_0x0001083da704(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001083da718();
  FUN_1082da480(param_3 + 2);
  FUN_1082da480(unaff_x23 + 0x10);
  ppuVar3 = ppuVar1;
  __Unwind_Resume();
  if (*(int *)(ppuVar3 + 1) < iVar4) {
    if ((int)((*(uint *)((long)ppuVar3 + 0xc) >> 1) - *(int *)(ppuVar3 + 1)) <
        iVar4 - *(int *)(ppuVar3 + 1)) {
      FUN_1083d2938(0x3ff0000000000000);
      func_0x0001083d36fc();
      func_0x0001083d34ac(ppuVar3,param_4);
      if (*(int *)(ppuVar3 + 1) != 0) {
        func_0x0001083d3838();
      }
      if ((*(byte *)((long)ppuVar1 + 0xc) & 1) != 0) {
        func_0x0001083d3590();
      }
      func_0x0001083d3438((ulong)puVar6 >> 3);
      *ppuVar1 = (undefined1 *)param_3;
      func_0x0001083d36a4();
      *(undefined4 *)((long)ppuVar1 + 0xc) = extraout_w8;
      return;
    }
    return;
  }
  return;
}



/* Entry: 1083da520; end: 1083da537;  */

void FUN_1083da520(long param_1,int param_2,undefined8 param_3,ulong param_4)

{
  undefined4 extraout_w8;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  
  if (param_2 <= *(int *)(param_1 + 8)) {
    return;
  }
  if ((int)((*(uint *)(param_1 + 0xc) >> 1) - *(int *)(param_1 + 8)) <
      param_2 - *(int *)(param_1 + 8)) {
    FUN_1083d2938(0x3ff0000000000000);
    func_0x0001083d36fc();
    func_0x0001083d34ac(param_1,param_3);
    if (*(int *)(param_1 + 8) != 0) {
      func_0x0001083d3838();
    }
    if ((*(byte *)((long)unaff_x19 + 0xc) & 1) != 0) {
      func_0x0001083d3590();
    }
    func_0x0001083d3438(param_4 >> 3);
    *unaff_x19 = unaff_x20;
    func_0x0001083d36a4();
    *(undefined4 *)((long)unaff_x19 + 0xc) = extraout_w8;
    return;
  }
  return;
}



/* Entry: 1083da538; end: 1083da62b;  */

void FUN_1083da538(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_58 [24];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if ((*(int *)(param_2 + 0x38) == 1) || (lVar3 = param_2, FUN_10831d998(), (int)lVar3 != 0)) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
              (param_1,&DAT_10f2da0fd);
    puVar2 = &UNK_10f4926d3;
  }
  else {
    puVar2 = &DAT_10f68f57e;
  }
  puVar1 = *(undefined8 **)(param_2 + 0x28);
  for (lVar3 = (long)*(int *)(param_2 + 0x30) << 3; lVar3 != 0; lVar3 = lVar3 + -8) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
              (param_1,&DAT_10f68f57e);
    (**(code **)(*(long *)*puVar1 + 0x10))(auStack_58);
    func_0x0001004c3ca0(param_1,auStack_58);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
    puVar1 = puVar1 + 1;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc(param_1,puVar2);
  return;
}



/* Entry: 1083da62c; end: 1083da62f;  */

long FUN_1083da62c(long param_1)

{
  FUN_1082da480(param_1 + 0x28);
  func_0x0001083c5f0c(param_1 + 0x10);
  return param_1;
}



/* Entry: 1083da630; end: 1083da643;  */

void FUN_1083da630(long *param_1)

{
  undefined8 extraout_x8;
  
  FUN_1083d30c8();
  FUN_1083d3bc4(param_1);
  if (*param_1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(extraout_x8);
  return;
}



/* Entry: 1083da644; end: 1083da64b;  */

undefined8 *
FUN_1083da644(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined4 *)((long)param_1 + 0xc) = 0xc;
  *param_1 = &PTR_FUN_110a44d30;
  uVar1 = *param_5;
  *param_5 = 0;
  param_1[2] = uVar1;
  FUN_1083d0a60(param_1 + 3,param_3);
  *(undefined4 *)(param_1 + 7) = param_4;
  return param_1;
}



/* Entry: 1083da64c; end: 1083da6bf;  */

undefined8 *
FUN_1083da64c(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined4 *)((long)param_1 + 0xc) = 0xc;
  *param_1 = &PTR_FUN_110a44d30;
  uVar1 = *param_5;
  *param_5 = 0;
  param_1[2] = uVar1;
  FUN_1083d0a60(param_1 + 3,param_3);
  *(undefined4 *)(param_1 + 7) = param_4;
  return param_1;
}



/* Entry: 1083da6c0; end: 1083da757;  */

/* WARNING: Possible PIC construction at 0x0001081865c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001081865cc) */

ulong FUN_1083da6c0(void)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uStack0000000000000028;
  
  uStack0000000000000028 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = (long *)0x40;
  uVar3 = 0x40;
  func_0x0001083d3bd4();
  if (*plVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(uVar3);
    return uVar3;
  }
  lVar1 = *plVar2 + 0x10000;
  iVar4 = 8;
  if (uVar3 >> 0x20 != 0) {
    iVar4 = 8;
    _abort();
  }
  lVar5 = *(long *)(lVar1 + 8);
  uVar6 = (ulong)(-(int)lVar5 & iVar4 - 1U);
  if ((ulong)(*(long *)(lVar1 + 0x10) - lVar5) < uVar6 + (uVar3 & 0xffffffff)) {
    func_0x00010840f7d0();
    lVar5 = *(long *)(lVar1 + 8);
    uVar6 = (ulong)(-(int)lVar5 & iVar4 - 1U);
  }
  return lVar5 + uVar6;
}



/* Entry: 1083da758; end: 1083da847;  */

void FUN_1083da758(undefined8 *param_1,long param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 in_ZR;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 extraout_x8;
  long lVar7;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [24];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  
  puVar4 = &uStack_90;
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  FUN_1083deaac(auStack_88,param_2 + 0x20);
  uVar3 = 0x40;
  FUN_1083d3a60();
  FUN_1083c8078(auStack_68,auStack_88);
  FUN_1083daabc(uVar3,param_3,uVar1,uVar2,auStack_68);
  FUN_1083c81d4(auStack_58);
  uStack_90 = 0;
  *param_1 = uVar3;
  func_0x0001083dab04();
  func_0x0001083dab88();
  func_0x0001083dab94(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_1083c81d4(auStack_58);
    FUN_1083d3a98(uVar3);
    func_0x0001083dab88();
    puVar5 = (undefined1 *)puVar4;
    __Unwind_Resume();
    pcStack_98 = FUN_1083da848;
    uStack_e8 = *(undefined8 *)(*(long *)(puVar5 + 0x18) + 0x18);
    uStack_f0 = *(undefined8 *)(*(long *)(puVar5 + 0x18) + 0x10);
    uStack_c0 = uVar2;
    uStack_b8 = uVar1;
    uStack_b0 = uVar3;
    puStack_a8 = (undefined1 *)puVar4;
    puStack_a0 = &stack0xfffffffffffffff0;
    func_0x000107c27958(auStack_d8,&uStack_f0);
    puVar6 = auStack_d8;
    func_0x00010048a6c8(extraout_x8,puVar6,&UNK_10f4926d7);
    func_0x0001083dab78();
    FUN_10831cc90();
    puVar4 = *(undefined8 **)(puVar5 + 0x30);
    for (lVar7 = (long)*(int *)(puVar5 + 0x38) << 3; lVar7 != 0; lVar7 = lVar7 + -8) {
      uVar1 = 0x113254db0;
      if (((ulong)puVar6 & 1) == 0) {
        uVar1 = 0x113254dc8;
      }
      func_0x0001004c3ca0(extraout_x8,uVar1);
      (**(code **)(*(long *)*puVar4 + 0x38))(auStack_d8,(long *)*puVar4,0x11);
      func_0x0001004c3ca0(extraout_x8,auStack_d8);
      func_0x0001083dab78();
      puVar6 = (undefined1 *)0x0;
      puVar4 = puVar4 + 1;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
              (extraout_x8,&DAT_10f684600);
    return;
  }
  return;
}



/* Entry: 1083da848; end: 1083da94f;  */

void FUN_1083da848(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_48 [24];
  
  uStack_58 = *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x18);
  uStack_60 = *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x10);
  func_0x000107c27958(auStack_48,&uStack_60);
  puVar3 = auStack_48;
  func_0x00010048a6c8(param_1,puVar3,&UNK_10f4926d7);
  func_0x0001083dab78();
  FUN_10831cc90();
  puVar2 = *(undefined8 **)(param_2 + 0x30);
  for (lVar4 = (long)*(int *)(param_2 + 0x38) << 3; lVar4 != 0; lVar4 = lVar4 + -8) {
    uVar1 = 0x113254db0;
    if (((ulong)puVar3 & 1) == 0) {
      uVar1 = 0x113254dc8;
    }
    func_0x0001004c3ca0(param_1,uVar1);
    (**(code **)(*(long *)*puVar2 + 0x38))(auStack_48,(long *)*puVar2,0x11);
    func_0x0001004c3ca0(param_1,auStack_48);
    func_0x0001083dab78();
    puVar3 = (undefined1 *)0x0;
    puVar2 = puVar2 + 1;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
            (param_1,&DAT_10f684600);
  return;
}



/* Entry: 1083da950; end: 1083da9ab;  */

void FUN_1083da950(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_24;
  
  uStack_40 = param_5;
  uStack_30 = param_4;
  uStack_24 = param_3;
  FUN_1083da9ac(&uStack_38,&uStack_24,&uStack_30,&uStack_40,param_6);
  uVar1 = uStack_38;
  uStack_38 = 0;
  *param_1 = uVar1;
  func_0x0001083dab04(&uStack_38);
  return;
}



/* Entry: 1083da9ac; end: 1083daa7f;  */

undefined1 *
FUN_1083da9ac(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = (undefined1 *)0x40;
  FUN_1083d3a60();
  uVar1 = *param_2;
  uVar4 = *param_3;
  uVar5 = *param_4;
  FUN_1083c8078(auStack_68,param_5);
  FUN_1083daabc(puVar2,uVar1,uVar4,uVar5,auStack_68);
  *param_1 = puVar2;
  puVar3 = auStack_58;
  FUN_1083c81d4();
  func_0x0001083dab94(uStack_48);
  if ((bool)in_ZR) {
    return puVar3;
  }
  ___stack_chk_fail();
  FUN_1083c81d4(auStack_58);
  FUN_1083d3a98(puVar2);
  __Unwind_Resume(puVar3);
  func_0x0001083dab6c();
  return puVar2;
}



/* Entry: 1083daa80; end: 1083daabb;  */

void FUN_1083daa80(void)

{
  FUN_1083dab6c();
  return;
}



/* Entry: 1083daabc; end: 1083daac3;  */

undefined8 *
FUN_1083daabc(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined4 *)((long)param_1 + 0xc) = 0x1a;
  *param_1 = &PTR_FUN_110a44d78;
  param_1[2] = param_3;
  param_1[3] = param_4;
  FUN_1083c8078(param_1 + 4,param_5);
  return param_1;
}



/* Entry: 1083daac4; end: 1083dab27;  */

undefined8 *
FUN_1083daac4(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined4 *)((long)param_1 + 0xc) = 0x1a;
  *param_1 = &PTR_FUN_110a44d78;
  param_1[2] = param_3;
  param_1[3] = param_4;
  FUN_1083c8078(param_1 + 4,param_5);
  return param_1;
}



/* Entry: 1083dab28; end: 1083dab3f;  */

void FUN_1083dab28(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 extraout_x8;
  
  plVar1 = (long *)*param_1;
  *param_1 = param_2;
  if (plVar1 == (long *)0x0) {
    return;
  }
  if (plVar1 != (long *)0x0) {
    FUN_1083c81d4(plVar1 + 6);
  }
  FUN_1083d3bc4(plVar1);
  if (*plVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(extraout_x8);
  return;
}



/* Entry: 1083dab40; end: 1083dab6b;  */

void FUN_1083dab40(undefined8 param_1,long *param_2)

{
  undefined8 extraout_x8;
  
  if (param_2 != (long *)0x0) {
    FUN_1083c81d4(param_2 + 6);
  }
  FUN_1083d3bc4(param_2);
  if (*param_2 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(extraout_x8);
  return;
}



/* Entry: 1083dab6c; end: 1083daba7;  */

long FUN_1083dab6c(long param_1)

{
  func_0x0001083c819c();
  if ((*(byte *)(param_1 + 0x3c) & 1) != 0) {
    func_0x0001083c89fc();
  }
  return param_1 + 0x30;
}



/* Entry: 1083daba8; end: 1083db657;  */

void FUN_1083daba8(undefined8 *param_1,long *param_2,long *param_3,long *param_4,long param_5)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  code *pcVar4;
  long *plVar5;
  long **pplVar6;
  long **pplVar7;
  long **pplVar8;
  long lVar9;
  long *plVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  undefined8 uVar11;
  long lVar12;
  undefined1 *puVar13;
  int iVar14;
  long lVar15;
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [24];
  undefined1 auStack_1d0 [24];
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  long alStack_158 [3];
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [32];
  long *aplStack_100 [2];
  long *plStack_f0;
  int iStack_e8;
  undefined1 auStack_e0 [32];
  long alStack_c0 [2];
  undefined1 auStack_b0 [16];
  long alStack_a0 [2];
  long *plStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = param_2;
  plVar10 = param_3;
  if (*(int *)(param_5 + 0x18) == 1) {
    plVar5 = *(long **)(**(long **)(param_5 + 0x10) + 0x10);
    plVar10 = param_4;
    (**(code **)(*plVar5 + 0x38))();
    if ((int)plVar5 == 0) goto LAB_1083dac44;
    func_0x0001083db9e0();
    func_0x0001083db924();
    if (*(byte *)((long)plVar5 + 0x2c) < 0x10 &&
        (1 << (ulong)(*(byte *)((long)plVar5 + 0x2c) & 0x1f) & 0xe4c2U) != 0) goto LAB_1083dac44;
    if ((*(int *)(param_5 + 0x18) < 1) ||
       (*(int *)(**(long **)(param_5 + 0x10) + 8) = (int)param_3, *(int *)(param_5 + 0x18) < 1))
    goto LAB_1083db474;
    uVar11 = **(undefined8 **)(param_5 + 0x10);
    **(undefined8 **)(param_5 + 0x10) = 0;
    *param_1 = uVar11;
  }
  else {
LAB_1083dac44:
    func_0x0001083db900(*(undefined8 *)(*param_4 + 0xb8));
    if ((int)plVar5 == 0) {
      func_0x0001083db900(*(undefined8 *)(*param_4 + 0xd0));
      iVar14 = (int)plVar5;
      if ((((ulong)plVar5 & 1) == 0) &&
         (func_0x0001083db900(*(undefined8 *)(*param_4 + 0xd8)), iVar14 == 0)) {
        func_0x0001083db900(*(undefined8 *)(*param_4 + 0xe0));
        if (iVar14 != 0) {
          func_0x0001083db9d4();
          func_0x0001083db900();
          if (0 < iVar14) {
            func_0x0001083db970(auStack_120);
            puVar13 = auStack_120;
            func_0x0001083db9a8();
            FUN_1083db9ec();
            goto LAB_1083dac70;
          }
        }
        func_0x0001083db900(*(undefined8 *)(*param_4 + 0xf0));
        if ((iVar14 == 0) || ((**(code **)(*param_4 + 0x90))(param_4), plVar10 == (long *)0x0)) {
          lVar15 = param_2[2];
          func_0x0001083db988(alStack_158);
          func_0x0001004c3cd0(alStack_c0,&UNK_10f4926de,alStack_158);
          func_0x00010048a6c8(alStack_a0,alStack_c0,&DAT_10f638984);
          func_0x0001083db8e8();
          FUN_1083c8a60(lVar15,(ulong)param_3 & 0xffffffff);
          func_0x0001083db914();
          func_0x0001083db9b8();
          func_0x0001083db91c();
          *param_1 = 0;
          goto LAB_1083db434;
        }
        func_0x0001083db970(auStack_140);
        puVar13 = auStack_140;
        func_0x0001083db9a8();
        FUN_1083de0f8();
        goto LAB_1083dac70;
      }
      pplVar6 = aplStack_100;
      func_0x0001083db970();
      plVar5 = plStack_f0;
      pplVar7 = pplVar6;
      if (iStack_e8 == 1) {
        func_0x0001083db900(*(undefined8 *)(*param_4 + 0xd0));
        pplVar7 = pplVar6;
        if ((int)pplVar6 == 0) {
LAB_1083dade4:
          func_0x0001083db8b8();
          (**(code **)(extraout_x8_02 + 0xb8))();
          if ((int)pplVar7 == 0) {
            func_0x0001083db8b8();
            (**(code **)(extraout_x8_03 + 0xd0))();
            if ((int)pplVar7 == 0) {
              func_0x0001083db8b8();
              (**(code **)(extraout_x8_05 + 0xd8))();
              if ((int)pplVar7 != 0) {
                func_0x0001083db900(*(undefined8 *)(*param_4 + 0xd8));
                if ((int)pplVar7 != 0) {
                  func_0x0001083db924(*(undefined8 *)(*param_4 + 0x50));
                  pplVar6 = pplVar7;
                  func_0x0001083db8b8();
                  (**(code **)(extraout_x8_06 + 0x60))();
                  pplVar8 = pplVar6;
                  func_0x0001083db8b8();
                  (**(code **)(extraout_x8_07 + 0x68))();
                  FUN_1083f0d08(pplVar7,param_2,pplVar6,pplVar8);
                  alStack_c0[0] = *plVar5;
                  *plVar5 = 0;
                  func_0x0001083db908(alStack_a0);
                  FUN_1083dcda4();
                  lVar15 = alStack_a0[0];
                  alStack_a0[0] = 0;
                  lVar12 = *plVar5;
                  *plVar5 = lVar15;
                  if (lVar12 != 0) {
                    func_0x0001083db8c8();
                    lVar15 = alStack_a0[0];
                    alStack_a0[0] = 0;
                    if (lVar15 != 0) {
                      func_0x0001083db8c8();
                    }
                  }
                  lVar15 = alStack_c0[0];
                  alStack_c0[0] = 0;
                  if (lVar15 != 0) {
                    func_0x0001083db8c8();
                  }
                  alStack_a0[0] = *plVar5;
                  *plVar5 = 0;
                  func_0x0001083db8d4();
                  FUN_1083dd4a8();
                  goto LAB_1083db070;
                }
                func_0x0001083db900(*(undefined8 *)(*param_4 + 0xd0));
                if ((int)pplVar7 != 0) {
                  func_0x0001083db9d4();
                  func_0x0001083db900();
                  if ((int)pplVar7 == 4) {
                    func_0x0001083db8b8();
                    (**(code **)(extraout_x8_08 + 0x80))();
                    if (pplVar7 == (long **)0x4) {
                      func_0x0001083db8b8();
                      (**(code **)(extraout_x8_09 + 0x50))();
                      FUN_1083f0d08();
                      func_0x0001083db92c();
                      func_0x0001083db908(alStack_c0);
                      FUN_1083dc648();
                      FUN_1083c81d4(&plStack_90);
                      alStack_158[0] = alStack_c0[0];
                      alStack_c0[0] = 0;
                      func_0x0001083db8d4();
                      FUN_1083dcda4();
                      goto LAB_1083db0c8;
                    }
                  }
                }
              }
            }
            else {
              func_0x0001083db900(*(undefined8 *)(*param_4 + 0xd0));
              if ((int)pplVar7 != 0) {
                func_0x0001083db8b8();
                (**(code **)(extraout_x8_04 + 0x60))();
                pplVar6 = pplVar7;
                func_0x0001083db9d4();
                func_0x0001083db900();
                iVar14 = (int)pplVar7;
                pplVar7 = pplVar6;
                if (iVar14 == (int)pplVar6) {
                  alStack_a0[0] = *plVar5;
                  *plVar5 = 0;
                  func_0x0001083db8d4();
                  FUN_1083dcda4();
LAB_1083db070:
                  lVar15 = alStack_a0[0];
                  alStack_a0[0] = 0;
                  goto joined_r0x0001083db078;
                }
              }
            }
            goto LAB_1083db17c;
          }
          func_0x0001083db9e0();
          func_0x0001083db924();
          func_0x0001083db92c();
          func_0x0001083db908(alStack_c0);
          FUN_1083dd798();
          iVar14 = (int)&plStack_90;
          FUN_1083c81d4();
          if (alStack_c0[0] == 0) goto LAB_1083daf98;
          func_0x0001083db900(*(undefined8 *)(*param_4 + 0xd8));
          alStack_158[0] = alStack_c0[0];
          alStack_c0[0] = 0;
          if (iVar14 == 0) {
            func_0x0001083db8d4();
            FUN_1083dde68();
          }
          else {
            func_0x0001083db8d4();
            FUN_1083dd20c();
          }
LAB_1083db0c8:
          lVar15 = alStack_158[0];
          alStack_158[0] = 0;
          if (lVar15 != 0) {
            func_0x0001083db8c8();
          }
          lVar15 = alStack_c0[0];
          alStack_c0[0] = 0;
joined_r0x0001083db078:
          if (lVar15 != 0) {
            func_0x0001083db8c8();
          }
        }
        else {
          func_0x0001083db8b8();
          (**(code **)(extraout_x8 + 0xd0))();
          pplVar7 = pplVar6;
          if ((int)pplVar6 == 0) goto LAB_1083dade4;
          func_0x0001083db8b8();
          (**(code **)(extraout_x8_00 + 0x50))();
          pplVar7 = pplVar6;
          func_0x0001083db9e0();
          func_0x0001083db924();
          (*(code *)(*pplVar6)[7])(pplVar6,pplVar7);
          pplVar7 = pplVar6;
          if ((int)pplVar6 == 0) goto LAB_1083dade4;
          func_0x0001083db8b8();
          (**(code **)(extraout_x8_01 + 0x80))();
          pplVar7 = pplVar6;
          func_0x0001083db924(*(undefined8 *)(*param_4 + 0x80));
          if (pplVar6 <= pplVar7) goto LAB_1083dade4;
          func_0x0001083db924(*(undefined8 *)(*param_4 + 0x80));
          pcVar1 = "; use \'.xyz\' instead";
          if (pplVar7 != (long **)0x3) {
            pcVar1 = "";
          }
          pcVar2 = "; use \'.xy\' instead";
          if (pplVar7 != (long **)0x2) {
            pcVar2 = pcVar1;
          }
          FUN_10831d8f8(auStack_1a0,*(undefined8 *)(*plVar5 + 0x10));
          func_0x0001083db944();
          func_0x0001083db938();
          func_0x0001083db988(auStack_1b8);
          func_0x0001083db990();
          func_0x00010048a6c8(alStack_c0,alStack_158,&UNK_10f49273a);
          func_0x00010048a6c8(alStack_a0,alStack_c0,pcVar2);
          func_0x0001083db8e8();
          func_0x0001083db908();
          FUN_1083c8a60();
          func_0x0001083db914();
          func_0x0001083db9b8();
          func_0x0001083db91c();
          func_0x0001083db968();
          func_0x0001083db958();
          func_0x0001083db960();
          func_0x0001083db9a0();
LAB_1083daf98:
          *param_1 = 0;
        }
      }
      else {
LAB_1083db17c:
        func_0x0001083db900(*(undefined8 *)(*param_4 + 0x68));
        pplVar6 = pplVar7;
        func_0x0001083db9d4();
        func_0x0001083db900();
        iVar14 = 0;
        iVar3 = (int)pplVar6 * (int)pplVar7;
        plVar5 = plStack_f0;
        for (lVar15 = (long)iStack_e8 << 3; lVar15 != 0; lVar15 = lVar15 + -8) {
          func_0x0001083db8b8();
          (**(code **)(extraout_x8_10 + 0xb8))();
          if (((ulong)pplVar6 & 1) == 0) {
            func_0x0001083db8b8();
            (**(code **)(extraout_x8_11 + 0xd0))();
            if (((ulong)pplVar6 & 1) == 0) {
              FUN_10831d8f8(auStack_1a0,*(undefined8 *)(*plVar5 + 0x10));
              func_0x0001083db944();
              func_0x0001083db938();
              func_0x0001083db988(auStack_1b8);
              func_0x0001083db990();
              func_0x0001083db978();
              func_0x0001083db8e8();
              func_0x0001083db908();
              FUN_1083c8a60();
              func_0x0001083db914();
              func_0x0001083db91c();
              func_0x0001083db968();
              func_0x0001083db958();
              func_0x0001083db960();
              func_0x0001083db9a0();
              *param_1 = 0;
              goto LAB_1083db428;
            }
          }
          func_0x0001083db9e0();
          func_0x0001083db924();
          pplVar7 = pplVar6;
          func_0x0001083db8b8();
          (**(code **)(extraout_x8_12 + 0x60))();
          FUN_1083f0d08(pplVar6,param_2,pplVar7,1);
          uStack_88 = 0x400000000;
          plStack_90 = alStack_a0;
          FUN_1083c7ed8(&plStack_90,plVar5);
          FUN_1083c8078(alStack_c0,alStack_a0);
          func_0x0001083db908(alStack_158);
          FUN_1083daba8();
          lVar12 = alStack_158[0];
          alStack_158[0] = 0;
          lVar9 = *plVar5;
          *plVar5 = lVar12;
          if (lVar9 != 0) {
            func_0x0001083db8c8();
          }
          lVar12 = alStack_158[0];
          alStack_158[0] = 0;
          if (lVar12 != 0) {
            func_0x0001083db8c8();
          }
          FUN_1083c81d4(auStack_b0);
          lVar12 = *plVar5;
          if (lVar12 == 0) {
            *param_1 = 0;
          }
          else {
            (*(code *)(*pplVar6)[0xc])();
            iVar14 = (int)pplVar6 + iVar14;
          }
          pplVar6 = &plStack_90;
          FUN_1083c81d4();
          if (lVar12 == 0) goto LAB_1083db428;
          plVar5 = plVar5 + 1;
        }
        if (iVar14 == iVar3) {
          func_0x0001083db92c();
          func_0x0001083db908(param_1);
          FUN_1083dc648();
          FUN_1083c81d4(&plStack_90);
        }
        else {
          func_0x0001083db988(auStack_1d0);
          func_0x0001004c3cd0(auStack_1b8,&UNK_10f492748,auStack_1d0);
          func_0x00010048a6c8(auStack_1a0,auStack_1b8,&UNK_10f49275f);
          __ZNSt3__19to_stringEi(auStack_1e8,iVar3);
          func_0x00010533a9c0(auStack_188,auStack_1a0,auStack_1e8);
          func_0x0001083db938();
          __ZNSt3__19to_stringEi(auStack_200,iVar14);
          func_0x00010533a9c0(alStack_158,auStack_170,auStack_200);
          func_0x0001083db978();
          func_0x0001083db8e8();
          func_0x0001083db908();
          FUN_1083c8a60();
          func_0x0001083db914();
          func_0x0001083db91c();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_200);
          func_0x0001083db958();
          func_0x0001083db960();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1e8);
          func_0x0001083db9a0();
          func_0x0001083db968();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1d0);
          *param_1 = 0;
        }
      }
LAB_1083db428:
      pplVar7 = &plStack_f0;
    }
    else {
      func_0x0001083db970(auStack_e0);
      puVar13 = auStack_e0;
      func_0x0001083db9a8();
      FUN_1083dd798();
LAB_1083dac70:
      pplVar7 = (long **)(puVar13 + 0x10);
    }
    FUN_1083c81d4(pplVar7);
  }
LAB_1083db434:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
LAB_1083db474:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1083db478);
  (*pcVar4)();
}



/* Entry: 1083db658; end: 1083db6db;  */

void FUN_1083db658(long *param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = param_2;
  (**(code **)(*param_1 + 0x48))();
  lVar3 = uVar2 << 3;
  while( true ) {
    if (lVar3 == 0) {
      return;
    }
    iVar1 = (int)*(undefined8 *)(*param_1 + 0x10);
    func_0x0001083db9c8();
    if ((int)param_2 < iVar1) break;
    param_1 = param_1 + 1;
    lVar3 = lVar3 + -8;
    param_2 = (ulong)(uint)((int)param_2 - iVar1);
  }
  (**(code **)(*(long *)*param_1 + 0x28))((long *)*param_1,param_2);
  return;
}



/* Entry: 1083db6dc; end: 1083db793;  */

undefined8 FUN_1083db6dc(long *param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x20))();
  if ((int)plVar2 == 0) {
LAB_1083db774:
    uVar4 = 0xffffffff;
  }
  else {
    uVar1 = (uint)param_1[2];
    func_0x0001083db9c8();
    uVar7 = 0;
    do {
      uVar6 = (uint)uVar7;
      if ((uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) == uVar6) {
        return 1;
      }
      plVar2 = param_1;
      uVar5 = uVar7;
      (**(code **)(*param_1 + 0x28))();
      if (((uVar5 & 1) == 0) ||
         (plVar3 = param_2, (**(code **)(*param_2 + 0x28))(), (uVar7 & 1) == 0)) goto LAB_1083db774;
      uVar7 = (ulong)(uVar6 + 1);
    } while ((double)plVar2 == (double)plVar3);
    uVar4 = 0;
  }
  return uVar4;
}



/* Entry: 1083db794; end: 1083db8af;  */

void FUN_1083db794(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_58 [24];
  
  (**(code **)(*(long *)param_2[2] + 0x10))(auStack_58);
  puVar2 = &DAT_10f68e8ec;
  uVar3 = 0;
  func_0x00010048a6c8(param_1);
  func_0x0001083db9c0();
  FUN_10831cc90();
  (**(code **)(*param_2 + 0x48))();
  for (lVar4 = (long)puVar2 << 3; lVar4 != 0; lVar4 = lVar4 + -8) {
    uVar1 = 0x113254db0;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0x113254dc8;
    }
    func_0x0001004c3ca0(param_1,uVar1);
    (**(code **)(*(long *)*param_2 + 0x38))(auStack_58,(long *)*param_2,0x11);
    func_0x0001004c3ca0(param_1,auStack_58);
    func_0x0001083db9c0();
    uVar3 = 0;
    param_2 = param_2 + 1;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(param_1,0x29);
  return;
}



/* Entry: 1083db8b0; end: 1083db9eb;  */

undefined8 FUN_1083db8b0(void)

{
  return 1;
}



/* Entry: 1083db9ec; end: 1083dbd63;  */

void FUN_1083db9ec(undefined8 *param_1,long param_2,undefined4 param_3,long *param_4,long param_5)

{
  code *pcVar1;
  undefined1 in_ZR;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lStack_d0;
  long lStack_c8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [23];
  char cStack_91;
  long alStack_90 [3];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  
  lVar9 = param_2;
  func_0x0001083dc0f4();
  iVar2 = (int)*(undefined8 *)(lVar9 + 8);
  uStack_58 = extraout_x8;
  FUN_1083c5ae8();
  if (iVar2 == 0) {
    func_0x0001083dc13c(*(undefined8 *)(*param_4 + 0x128));
    if (iVar2 != 0) {
      uVar7 = *(undefined8 *)(param_2 + 0x10);
      func_0x0001083dc128();
      in_ZR = cStack_91 == '\0';
      func_0x0001083dc114(&UNK_10f4927aa);
      func_0x0001083dc0dc();
      FUN_1083c8a60(uVar7,param_3);
LAB_1083dbc64:
      func_0x0001083dc104();
      puVar5 = auStack_a8;
      goto LAB_1083dbc6c;
    }
    in_ZR = *(int *)(param_5 + 0x18) == 1;
    if (!(bool)in_ZR) {
LAB_1083dbb6c:
      iVar2 = 0;
      func_0x0001083dc13c(*(undefined8 *)(*param_4 + 0x60));
      in_ZR = iVar2 == *(int *)(param_5 + 0x18);
      if (!(bool)in_ZR) {
        uVar7 = *(undefined8 *)(param_2 + 0x10);
        func_0x0001083dc128();
        func_0x0001083dc13c(*(undefined8 *)(*param_4 + 0x60));
        in_ZR = cStack_91 == '\0';
        func_0x0001083dc114(&UNK_10f4927ec);
        func_0x0001083dc0dc();
        FUN_1083c8a60(uVar7,param_3);
        goto LAB_1083dbc64;
      }
      (**(code **)(*param_4 + 0x50))(param_4);
      lVar9 = (long)*(int *)(param_5 + 0x18) << 3;
      plVar3 = *(long **)(param_5 + 0x10);
      do {
        if (lVar9 == 0) {
          FUN_1083c8078(auStack_78,param_5);
          FUN_1083dbd64(param_1);
          FUN_1083c81d4(auStack_68);
          goto LAB_1083dbc74;
        }
        lStack_d0 = *plVar3;
        *plVar3 = 0;
        FUN_1083f1310(alStack_90,param_4,&lStack_d0,param_2);
        lVar6 = alStack_90[0];
        alStack_90[0] = 0;
        lVar4 = *plVar3;
        *plVar3 = lVar6;
        if (lVar4 != 0) {
          func_0x0001083dc0bc();
          lVar6 = alStack_90[0];
          alStack_90[0] = 0;
          if (lVar6 != 0) {
            func_0x0001083dc0bc();
          }
        }
        lVar6 = lStack_d0;
        lStack_d0 = 0;
        if (lVar6 != 0) {
          func_0x0001083dc0bc();
        }
        lVar6 = *plVar3;
        lVar9 = lVar9 + -8;
        plVar3 = plVar3 + 1;
      } while (lVar6 != 0);
      goto LAB_1083dbc70;
    }
    plVar8 = *(long **)(**(long **)(param_5 + 0x10) + 0x10);
    plVar3 = plVar8;
    (**(code **)(*plVar8 + 0xe0))();
    if (((int)plVar3 == 0) || (FUN_1083cb9c8(plVar8,param_4,1), (int)plVar8 == 0))
    goto LAB_1083dbb6c;
    if (*(int *)(param_5 + 0x18) == 0) goto LAB_1083dbcd0;
    lStack_c8 = **(long **)(param_5 + 0x10);
    **(long **)(param_5 + 0x10) = 0;
    FUN_1083dc144(param_1,param_2,param_3,param_4,&lStack_c8);
    lVar9 = lStack_c8;
    lStack_c8 = 0;
    if (lVar9 != 0) {
      func_0x0001083dc0bc();
    }
  }
  else {
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    FUN_10831d8f8(auStack_c0,param_4);
    func_0x0001004c3cd0(auStack_a8,&UNK_10f49278d,auStack_c0);
    func_0x00010048a6c8(alStack_90,auStack_a8,"\' is not supported");
    func_0x0001083dc0dc();
    FUN_1083c8a60(uVar7,param_3);
    func_0x0001083dc104();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a8);
    puVar5 = auStack_c0;
LAB_1083dbc6c:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar5);
LAB_1083dbc70:
    *param_1 = 0;
  }
LAB_1083dbc74:
  func_0x0001083dc0c8(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_1083dbcd0:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1083dbcd4);
  (*pcVar1)();
}



/* Entry: 1083dbd64; end: 1083dbdb3;  */

void FUN_1083dbd64(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined4 uStack_24;
  
  uStack_24 = param_3;
  FUN_1083dbdb4(&uStack_30,&uStack_24,param_4,param_5);
  uVar1 = uStack_30;
  uStack_30 = 0;
  *param_1 = uVar1;
  func_0x0001083dc064(&uStack_30);
  return;
}



/* Entry: 1083dbdb4; end: 1083dbe6f;  */

undefined8 * FUN_1083dbdb4(undefined8 *param_1,uint *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong uVar9;
  undefined1 auStack_c8 [32];
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_68 [16];
  undefined8 auStack_58 [2];
  undefined8 uStack_48;
  
  func_0x0001083dc0f4();
  uVar1 = 0x38;
  uStack_48 = extraout_x8;
  FUN_1083d3a60();
  uVar9 = (ulong)*param_2;
  FUN_1083c8078(auStack_68,param_4);
  puVar8 = auStack_68;
  uVar5 = uVar9;
  uVar7 = param_3;
  FUN_1083dbe70(uVar1,uVar9,param_3,puVar8);
  uVar4 = (undefined4)uVar5;
  *param_1 = uVar1;
  puVar2 = auStack_58;
  FUN_1083c81d4();
  func_0x0001083dc0c8(uStack_48);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  FUN_1083c81d4(auStack_58);
  FUN_1083d3a98(uVar1);
  puVar3 = puVar2;
  __Unwind_Resume();
  pcStack_78 = FUN_1083dbe70;
  uStack_a0 = uVar9;
  uStack_98 = param_3;
  puStack_90 = puVar2;
  uStack_88 = uVar1;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x0001083dc0f4();
  uStack_a8 = extraout_x8_00;
  FUN_1083c8078(auStack_c8,puVar8);
  puVar8 = auStack_c8;
  uVar6 = 0x1b;
  puVar2 = puVar3;
  FUN_1083dbf14();
  func_0x0001083dc10c();
  *puVar3 = &PTR_FUN_110a44df8;
  func_0x0001083dc0c8(uStack_a8);
  if ((bool)in_ZR) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x0001083dc10c();
  func_0x0001083dc134();
  *(undefined4 *)(puVar2 + 1) = uVar4;
  *(undefined4 *)((long)puVar2 + 0xc) = uVar6;
  puVar2[2] = uVar7;
  *puVar2 = &PTR_DAT_110a44e88;
  FUN_1083c8078(puVar2 + 3,puVar8);
  return puVar2;
}



/* Entry: 1083dbe70; end: 1083dbe77;  */

undefined8 *
FUN_1083dbe70(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  undefined1 auStack_58 [32];
  undefined8 uStack_38;
  
  func_0x0001083dc0f4();
  uStack_38 = extraout_x8;
  FUN_1083c8078(auStack_58,param_4);
  puVar3 = auStack_58;
  uVar2 = 0x1b;
  puVar1 = param_1;
  FUN_1083dbf14();
  func_0x0001083dc10c();
  *param_1 = &PTR_FUN_110a44df8;
  func_0x0001083dc0c8(uStack_38);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001083dc10c();
  func_0x0001083dc134();
  *(undefined4 *)(puVar1 + 1) = param_2;
  *(undefined4 *)((long)puVar1 + 0xc) = uVar2;
  puVar1[2] = param_3;
  *puVar1 = &PTR_DAT_110a44e88;
  FUN_1083c8078(puVar1 + 3,puVar3);
  return puVar1;
}



/* Entry: 1083dbe78; end: 1083dbf13;  */

undefined8 *
FUN_1083dbe78(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  undefined1 auStack_58 [32];
  undefined8 uStack_38;
  
  func_0x0001083dc0f4();
  uStack_38 = extraout_x8;
  FUN_1083c8078(auStack_58,param_4);
  puVar3 = auStack_58;
  uVar2 = 0x1b;
  puVar1 = param_1;
  FUN_1083dbf14();
  func_0x0001083dc10c();
  *param_1 = &PTR_FUN_110a44df8;
  func_0x0001083dc0c8(uStack_38);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001083dc10c();
  func_0x0001083dc134();
  *(undefined4 *)(puVar1 + 1) = param_2;
  *(undefined4 *)((long)puVar1 + 0xc) = uVar2;
  puVar1[2] = param_3;
  *puVar1 = &PTR_DAT_110a44e88;
  FUN_1083c8078(puVar1 + 3,puVar3);
  return puVar1;
}



/* Entry: 1083dbf14; end: 1083dbf4f;  */

undefined8 *
FUN_1083dbf14(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined4 *)((long)param_1 + 0xc) = param_3;
  param_1[2] = param_4;
  *param_1 = &PTR_DAT_110a44e88;
  FUN_1083c8078(param_1 + 3,param_5);
  return param_1;
}



/* Entry: 1083dbf50; end: 1083dbf53;  */

undefined8 * FUN_1083dbf50(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a44e88;
  FUN_1083c81d4(param_1 + 5);
  return param_1;
}



/* Entry: 1083dbf54; end: 1083dbf67;  */

void FUN_1083dbf54(long *param_1)

{
  undefined8 extraout_x8;
  
  FUN_1083dc034();
  FUN_1083d3bc4(param_1);
  if (*param_1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(extraout_x8);
  return;
}



/* Entry: 1083dbf68; end: 1083dc003;  */

undefined8 * FUN_1083dbf68(undefined8 *param_1,long param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined8 uVar3;
  undefined8 uStack_68;
  undefined4 uStack_5c;
  undefined1 auStack_58 [32];
  undefined8 uStack_38;
  
  uStack_5c = param_3;
  func_0x0001083dc0f4();
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  uStack_38 = extraout_x8;
  FUN_1083deaac(auStack_58,param_2 + 0x18);
  FUN_1083dbdb4(&uStack_68,&uStack_5c,uVar3,auStack_58);
  uVar3 = uStack_68;
  uStack_68 = 0;
  *param_1 = uVar3;
  puVar2 = &uStack_68;
  func_0x0001083dc064();
  func_0x0001083dc10c();
  func_0x0001083dc0c8(uStack_38);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x0001083dc10c();
  func_0x0001083dc134();
  if (*(int *)(puVar2 + 6) != 0) {
    return (undefined8 *)puVar2[5];
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1083dc018);
  (*pcVar1)();
}



/* Entry: 1083dc004; end: 1083dc033;  */

undefined8 FUN_1083dc004(long param_1)

{
  code *pcVar1;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    return *(undefined8 *)(param_1 + 0x28);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1083dc018);
  (*pcVar1)();
}



/* Entry: 1083dc034; end: 1083dc087;  */

undefined8 * FUN_1083dc034(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a44e88;
  FUN_1083c81d4(param_1 + 5);
  return param_1;
}



/* Entry: 1083dc088; end: 1083dc09f;  */

void FUN_1083dc088(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 extraout_x8;
  
  plVar1 = (long *)*param_1;
  *param_1 = param_2;
  if (plVar1 == (long *)0x0) {
    return;
  }
  if (plVar1 != (long *)0x0) {
    FUN_1083dc034();
  }
  FUN_1083d3bc4(plVar1);
  if (*plVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(extraout_x8);
  return;
}



/* Entry: 1083dc0a0; end: 1083dc0bb;  */

void FUN_1083dc0a0(undefined8 param_1,long *param_2)

{
  undefined8 extraout_x8;
  
  if (param_2 != (long *)0x0) {
    FUN_1083dc034();
  }
  FUN_1083d3bc4(param_2);
  if (*param_2 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(extraout_x8);
  return;
}



/* Entry: 1083dc0bc; end: 1083dc143;  */

void FUN_1083dc0bc(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001083dc0c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1083dc144; end: 1083dc48f;  */

void FUN_1083dc144(long *param_1,long param_2,ulong param_3,long *param_4,long *param_5)

{
  undefined4 uVar1;
  code *pcVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  long alStack_88 [2];
  long *plStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = param_4;
  (**(code **)(*param_4 + 0x38))(param_4,*(undefined8 *)(*param_5 + 0x10));
  if ((int)plVar4 == 0) {
    lStack_c0 = *param_5;
    *param_5 = 0;
    FUN_1083c67e4(alStack_88,param_3 & 0xffffffff,&lStack_c0);
    lVar7 = alStack_88[0];
    alStack_88[0] = 0;
    lVar5 = *param_5;
    *param_5 = lVar7;
    if (lVar5 != 0) {
      FUN_1083dc618();
      lVar7 = alStack_88[0];
      alStack_88[0] = 0;
      if (lVar7 != 0) {
        FUN_1083dc618();
      }
    }
    if (lStack_c0 != 0) {
      FUN_1083dc618();
    }
    iVar3 = (int)*param_5;
    FUN_1083c2fd8();
    if (iVar3 == 0) {
      FUN_1083dc490(alStack_88,param_3,param_4,param_5);
      lVar7 = alStack_88[0];
      alStack_88[0] = 0;
      *param_1 = lVar7;
      func_0x0001083dc5e4(alStack_88);
    }
    else {
      plVar8 = (long *)*param_5;
      *param_5 = 0;
      plVar4 = param_4;
      (**(code **)(*param_4 + 0x50))(param_4);
      iVar3 = (int)plVar8[6];
      if (iVar3 == 0) goto LAB_1083dc3d4;
      plVar9 = (long *)plVar8[5];
      plStack_78 = alStack_88;
      uStack_70 = 0x400000000;
      func_0x0001083c7ec0(&plStack_78,(long)iVar3);
      for (lVar7 = (long)iVar3 << 3; lVar7 != 0; lVar7 = lVar7 + -8) {
        uVar1 = *(undefined4 *)(*plVar9 + 8);
        plVar6 = *(long **)(*plVar9 + 0x10);
        (**(code **)(*plVar6 + 0xb8))();
        if ((int)plVar6 == 0) {
          lStack_b8 = *plVar9;
          *plVar9 = 0;
          lVar5 = param_2;
          FUN_1083dcda4(auStack_a8,param_2,uVar1,plVar4,&lStack_b8);
          func_0x0001083dc624();
          func_0x0001083dc63c();
          if (lVar5 != 0) {
            FUN_1083dc618();
          }
          lVar5 = lStack_b8;
          lStack_b8 = 0;
        }
        else {
          lStack_b0 = *plVar9;
          *plVar9 = 0;
          lVar5 = param_2;
          FUN_1083ddb18(auStack_a8,param_2,uVar1,plVar4,&lStack_b0);
          func_0x0001083dc624();
          func_0x0001083dc63c();
          if (lVar5 != 0) {
            FUN_1083dc618();
          }
          lVar5 = lStack_b0;
          lStack_b0 = 0;
        }
        if (lVar5 != 0) {
          FUN_1083dc618();
        }
        plVar9 = plVar9 + 1;
      }
      FUN_1083c8078(auStack_a8,alStack_88);
      FUN_1083dbd64(param_1,param_2,param_3 & 0xffffffff,param_4,auStack_a8);
      FUN_1083c81d4(auStack_98);
      FUN_1083c81d4(&plStack_78);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
    }
  }
  else {
    *(int *)(*param_5 + 8) = (int)param_3;
    lVar7 = *param_5;
    *param_5 = 0;
    *param_1 = lVar7;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
LAB_1083dc3d4:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1083dc3d8);
  (*pcVar2)();
}



/* Entry: 1083dc490; end: 1083dc4eb;  */

void FUN_1083dc490(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x20;
  FUN_1083d3a60();
  uVar2 = *param_4;
  *param_4 = 0;
  *(undefined4 *)(puVar1 + 1) = param_2;
  *(undefined4 *)((long)puVar1 + 0xc) = 0x1c;
  puVar1[2] = param_3;
  puVar1[3] = uVar2;
  *puVar1 = &PTR_FUN_110a44ee8;
  *param_1 = puVar1;
  return;
}



/* Entry: 1083dc4ec; end: 1083dc4ef;  */

undefined8 * FUN_1083dc4ec(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a44f78;
  FUN_1083c8734(param_1 + 3);
  return param_1;
}



/* Entry: 1083dc4f0; end: 1083dc503;  */

void FUN_1083dc4f0(long *param_1)

{
  undefined8 extraout_x8;
  
  FUN_1083dc5b0();
  FUN_1083d3bc4(param_1);
  if (*param_1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(extraout_x8);
  return;
}



/* Entry: 1083dc504; end: 1083dc59f;  */

void FUN_1083dc504(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  plVar2 = *(long **)(param_2 + 0x18);
  (**(code **)(*plVar2 + 0x30))(&lStack_40,plVar2,(int)plVar2[1]);
  FUN_1083dc490(&uStack_38,param_3,uVar1,&lStack_40);
  uVar1 = uStack_38;
  uStack_38 = 0;
  *param_1 = uVar1;
  func_0x0001083dc5e4(&uStack_38);
  lVar3 = lStack_40;
  lStack_40 = 0;
  if (lVar3 != 0) {
    FUN_1083dc618();
  }
  return;
}



/* Entry: 1083dc5a0; end: 1083dc5af;  */

undefined1  [16] FUN_1083dc5a0(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 1;
  auVar1._0_8_ = param_1 + 0x18;
  return auVar1;
}



/* Entry: 1083dc5b0; end: 1083dc617;  */

undefined8 * FUN_1083dc5b0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a44f78;
  FUN_1083c8734(param_1 + 3);
  return param_1;
}



/* Entry: 1083dc618; end: 1083dc647;  */

void FUN_1083dc618(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001083dc620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1083dc648; end: 1083dc9f7;  */

undefined1 **
FUN_1083dc648(long *param_1,undefined1 **param_2,long *param_3,long *param_4,undefined1 *param_5)

{
  uint uVar1;
  undefined1 *puVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined1 **ppuVar5;
  long *plVar6;
  undefined1 **ppuVar7;
  undefined1 **ppuVar8;
  uint uVar9;
  ulong uVar10;
  long *plVar11;
  undefined1 *puVar12;
  undefined8 extraout_x8;
  long lVar13;
  undefined8 *puVar14;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  long lVar15;
  int iVar16;
  long *plVar17;
  ulong uVar18;
  long *plVar19;
  long lVar20;
  long lStack_1e8;
  long lStack_1e0;
  undefined1 auStack_1d8 [32];
  undefined1 auStack_1b8 [16];
  undefined1 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_128 [32];
  undefined1 auStack_108 [32];
  undefined8 uStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  undefined1 *puStack_d0;
  undefined1 **ppuStack_c8;
  long *plStack_c0;
  undefined1 **ppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined1 auStack_98 [8];
  undefined1 **ppuStack_90;
  undefined1 *apuStack_88 [2];
  undefined1 **ppuStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  ppuVar5 = param_2;
  plVar11 = param_3;
  plVar19 = param_4;
  puVar12 = param_5;
  func_0x0001083dcd64();
  uVar4 = *(int *)(puVar12 + 0x18) == 1;
  uStack_68 = extraout_x8;
  if ((bool)uVar4) {
    plVar17 = (long *)**(undefined8 **)(param_5 + 0x10);
    func_0x0001083dcd90(*(undefined8 *)(*param_4 + 0xb8));
    if (((ulong)ppuVar5 & 1) != 0) {
LAB_1083dc6a8:
      if ((*(int *)(param_5 + 0x18) == 0) ||
         (*(int *)(**(long **)(param_5 + 0x10) + 8) = (int)param_3, *(int *)(param_5 + 0x18) == 0))
      {
LAB_1083dc9ac:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1083dc9b0);
        (*pcVar3)();
      }
      lVar15 = **(long **)(param_5 + 0x10);
      **(long **)(param_5 + 0x10) = 0;
      *param_1 = lVar15;
      goto LAB_1083dc8ac;
    }
    func_0x0001083dcd90(*(undefined8 *)(*param_4 + 0xd0));
    if ((int)ppuVar5 != 0) {
      ppuVar5 = (undefined1 **)plVar17[2];
      plVar11 = param_4;
      (**(code **)(*ppuVar5 + 0x38))(ppuVar5,param_4);
      if ((int)ppuVar5 != 0) goto LAB_1083dc6a8;
    }
  }
  plVar19 = *(long **)(param_5 + 0x10);
  uVar1 = *(uint *)(param_5 + 0x18);
  uVar10 = (ulong)uVar1;
  uVar4 = 0;
  if (param_2[1][0x1c] == '\x01') {
    uVar9 = 0;
    for (lVar15 = 0; (long)(int)uVar1 * 8 - lVar15 != 0; lVar15 = lVar15 + 8) {
      if (*(int *)(*(long *)((long)plVar19 + lVar15) + 0xc) == 0x1d) {
        iVar16 = *(int *)(*(long *)((long)plVar19 + lVar15) + 0x30);
      }
      else {
        iVar16 = 1;
      }
      uVar9 = iVar16 + uVar9;
    }
    uVar4 = uVar9 == uVar1;
    if ((int)uVar1 < (int)uVar9) {
      ppuStack_78 = apuStack_88;
      uStack_70 = 0x400000000;
      func_0x0001083c7ec0(&ppuStack_78);
      plVar19 = *(long **)(param_5 + 0x10);
      plVar11 = plVar19 + *(int *)(param_5 + 0x18);
      for (; uVar4 = plVar19 == plVar11, !(bool)uVar4; plVar19 = plVar19 + 1) {
        lVar15 = *plVar19;
        if (*(int *)(lVar15 + 0xc) == 0x1d) {
          lVar20 = *(long *)(lVar15 + 0x28);
          for (lVar15 = (long)*(int *)(lVar15 + 0x30) << 3; lVar15 != 0; lVar15 = lVar15 + -8) {
            FUN_1083c7ed8(&ppuStack_78,lVar20);
            lVar20 = lVar20 + 8;
          }
        }
        else {
          FUN_1083c7ed8(&ppuStack_78,plVar19);
        }
      }
      FUN_1083c80c4(param_5 + 0x10,&ppuStack_78);
      ppuVar5 = (undefined1 **)0x0;
      FUN_1083c81d4();
      plVar19 = *(long **)(param_5 + 0x10);
      uVar10 = (ulong)*(uint *)(param_5 + 0x18);
    }
  }
  plVar17 = (long *)((ulong)param_3 & 0xffffffff);
  for (uVar10 = -(uVar10 >> 0x1f) & 0xfffffff800000000 | uVar10 << 3; uVar10 != 0;
      uVar10 = uVar10 - 8) {
    ppuStack_90 = (undefined1 **)*plVar19;
    *plVar19 = 0;
    FUN_1083c67e4(apuStack_88,plVar17,&ppuStack_90);
    puVar12 = apuStack_88[0];
    apuStack_88[0] = (undefined1 *)0x0;
    lVar15 = *plVar19;
    *plVar19 = (long)puVar12;
    if (lVar15 != 0) {
      func_0x0001083dcd44();
    }
    puVar12 = apuStack_88[0];
    apuStack_88[0] = (undefined1 *)0x0;
    if (puVar12 != (undefined1 *)0x0) {
      func_0x0001083dcd44();
    }
    ppuVar5 = ppuStack_90;
    ppuStack_90 = (undefined1 **)0x0;
    if (ppuVar5 != (undefined1 **)0x0) {
      func_0x0001083dcd44();
    }
    plVar19 = plVar19 + 1;
  }
  if (((param_2[1][0x1c] & 1) != 0) &&
     (func_0x0001083dcd90(*(undefined8 *)(*param_4 + 0xd8)), ((ulong)ppuVar5 & 1) == 0)) {
    lVar20 = 0;
    plVar19 = (long *)0x0;
    for (lVar15 = 0; uVar4 = lVar15 == *(int *)(param_5 + 0x18), lVar15 < *(int *)(param_5 + 0x18);
        lVar15 = lVar15 + 1) {
      plVar11 = *(long **)(*(long *)(*(long *)(param_5 + 0x10) + lVar20) + 0x10);
      (**(code **)(*plVar11 + 0xb8))();
      lVar13 = (long)*(int *)(param_5 + 0x18);
      uVar4 = lVar15 == lVar13;
      if ((int)plVar11 == 0) {
        if (lVar13 <= lVar15) goto LAB_1083dc9ac;
        uVar4 = *(int *)(*(long *)(*(long *)(param_5 + 0x10) + lVar20) + 0xc) == 0x22;
        if (!(bool)uVar4) goto LAB_1083dc884;
        puVar14 = (undefined8 *)(*(long *)(*(long *)(param_5 + 0x10) + lVar20) + 0x18);
      }
      else {
        if (lVar13 <= lVar15) goto LAB_1083dc9ac;
        puVar14 = (undefined8 *)(*(long *)(param_5 + 0x10) + lVar20);
      }
      plVar6 = (long *)*puVar14;
      plVar11 = plVar6;
      if ((lVar15 != 0) && (FUN_1083d6d1c(plVar6,plVar19), plVar11 = plVar19, (int)plVar6 == 0))
      goto LAB_1083dc884;
      lVar20 = lVar20 + 8;
      plVar19 = plVar11;
    }
    if (plVar19 != (long *)0x0) {
      (**(code **)(*plVar19 + 0x30))(auStack_98,plVar19,(int)plVar19[1]);
      puVar12 = auStack_98;
      ppuVar5 = param_2;
      plVar11 = plVar17;
      plVar19 = param_4;
      FUN_1083dde68(param_1,param_2,plVar17);
      func_0x0001083dcd98();
      if (ppuVar5 != (undefined1 **)0x0) {
        func_0x0001083dcd44();
      }
      goto LAB_1083dc8ac;
    }
  }
LAB_1083dc884:
  plVar11 = param_3;
  plVar19 = param_4;
  puVar12 = param_5;
  FUN_1083dc9f8(apuStack_88,param_3);
  puVar2 = apuStack_88[0];
  apuStack_88[0] = (undefined1 *)0x0;
  *param_1 = (long)puVar2;
  ppuVar5 = apuStack_88;
  FUN_1083dcd10();
LAB_1083dc8ac:
  func_0x0001083dcd50(uStack_68);
  if ((bool)uVar4) {
    return ppuVar5;
  }
  ___stack_chk_fail();
  ppuVar7 = ppuVar5;
  func_0x0001083dcd98();
  if (ppuVar7 != (undefined1 **)0x0) {
    func_0x0001083dcd44();
  }
  func_0x0001083dcd7c();
  pcStack_a8 = FUN_1083dc9f8;
  plStack_e0 = plVar17;
  plStack_d8 = param_3;
  puStack_d0 = param_5;
  ppuStack_c8 = param_2;
  plStack_c0 = param_4;
  ppuStack_b8 = ppuVar5;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x0001083dcd64();
  ppuVar8 = (undefined1 **)0x38;
  uStack_e8 = extraout_x8_00;
  FUN_1083d3a60();
  FUN_1083c8078(auStack_128,puVar12);
  FUN_1083c8078(auStack_108,auStack_128);
  uVar10 = (ulong)plVar11 & 0xffffffff;
  plVar11 = (long *)0x1d;
  ppuVar5 = ppuVar8;
  FUN_1083dbf14(ppuVar8,uVar10,0x1d,plVar19,auStack_108);
  func_0x0001083dcd74();
  *ppuVar8 = (undefined1 *)&PTR_FUN_110a44fd8;
  *ppuVar7 = (undefined1 *)ppuVar8;
  func_0x0001083dcd84();
  func_0x0001083dcd50(uStack_e8);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    func_0x0001083dcd74();
    func_0x0001083dcd84();
    FUN_1083d3a98(ppuVar8);
    __Unwind_Resume();
    plVar17 = plVar11;
    func_0x0001083dcd64();
    uStack_198 = extraout_x8_02;
    (**(code **)(*plVar17 + 0x80))();
    puStack_1a8 = auStack_1b8;
    uStack_1a0 = 0x400000000;
    func_0x0001083c7ec0(&puStack_1a8,plVar17);
    for (uVar18 = (ulong)((uint)plVar17 & ((int)(uint)plVar17 >> 0x1f ^ 0xffffffffU)); uVar18 != 0;
        uVar18 = uVar18 - 1) {
      lVar15 = *plVar19;
      plVar17 = plVar11;
      (**(code **)(*plVar11 + 0x50))(plVar11);
      FUN_1083c7aa0(&lStack_1e8,lVar15,uVar10 & 0xffffffff,plVar17);
      lStack_1e0 = lStack_1e8;
      lStack_1e8 = 0;
      FUN_1083c7ed8(&puStack_1a8,&lStack_1e0);
      lVar15 = lStack_1e0;
      lStack_1e0 = 0;
      if (lVar15 != 0) {
        func_0x0001083dcd44();
      }
      func_0x0001083dcd98();
      if (lVar15 != 0) {
        func_0x0001083dcd44();
      }
      plVar19 = plVar19 + 1;
    }
    FUN_1083c8078(auStack_1d8,auStack_1b8);
    FUN_1083dc648(extraout_x8_01,ppuVar5,uVar10 & 0xffffffff,plVar11,auStack_1d8);
    func_0x0001083dcd74();
    ppuVar5 = &puStack_1a8;
    FUN_1083c81d4();
    func_0x0001083dcd50(uStack_198);
    if (!(bool)uVar4) {
      ___stack_chk_fail();
      func_0x0001083dcd74();
      ppuVar5 = &puStack_1a8;
      FUN_1083c81d4();
      func_0x0001083dcd7c();
      *ppuVar5 = (undefined1 *)&PTR_DAT_110a44e88;
      FUN_1083c81d4(ppuVar5 + 5);
      return ppuVar5;
    }
    return ppuVar5;
  }
  return ppuVar5;
}



/* Entry: 1083dc9f8; end: 1083dcad3;  */

undefined1 **
FUN_1083dc9f8(undefined8 *param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined1 **ppuVar1;
  undefined1 **ppuVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong uVar6;
  undefined8 uVar7;
  long lStack_148;
  long lStack_140;
  undefined1 auStack_138 [32];
  undefined1 auStack_118 [16];
  undefined1 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [32];
  undefined8 uStack_48;
  
  func_0x0001083dcd64();
  ppuVar1 = (undefined1 **)0x38;
  uStack_48 = extraout_x8;
  FUN_1083d3a60();
  FUN_1083c8078(auStack_88,param_4);
  FUN_1083c8078(auStack_68,auStack_88);
  param_2 = param_2 & 0xffffffff;
  plVar5 = (long *)0x1d;
  ppuVar2 = ppuVar1;
  FUN_1083dbf14(ppuVar1,param_2,0x1d,param_3,auStack_68);
  func_0x0001083dcd74();
  *ppuVar1 = (undefined1 *)&PTR_FUN_110a44fd8;
  *param_1 = ppuVar1;
  func_0x0001083dcd84();
  func_0x0001083dcd50(uStack_48);
  if ((bool)in_ZR) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  func_0x0001083dcd74();
  func_0x0001083dcd84();
  FUN_1083d3a98(ppuVar1);
  __Unwind_Resume();
  plVar3 = plVar5;
  func_0x0001083dcd64();
  uStack_f8 = extraout_x8_01;
  (**(code **)(*plVar3 + 0x80))();
  puStack_108 = auStack_118;
  uStack_100 = 0x400000000;
  func_0x0001083c7ec0(&puStack_108,plVar3);
  for (uVar6 = (ulong)((uint)plVar3 & ((int)(uint)plVar3 >> 0x1f ^ 0xffffffffU)); uVar6 != 0;
      uVar6 = uVar6 - 1) {
    uVar7 = *param_3;
    plVar3 = plVar5;
    (**(code **)(*plVar5 + 0x50))(plVar5);
    FUN_1083c7aa0(&lStack_148,uVar7,param_2 & 0xffffffff,plVar3);
    lStack_140 = lStack_148;
    lStack_148 = 0;
    FUN_1083c7ed8(&puStack_108,&lStack_140);
    lVar4 = lStack_140;
    lStack_140 = 0;
    if (lVar4 != 0) {
      func_0x0001083dcd44();
    }
    func_0x0001083dcd98();
    if (lVar4 != 0) {
      func_0x0001083dcd44();
    }
    param_3 = param_3 + 1;
  }
  FUN_1083c8078(auStack_138,auStack_118);
  FUN_1083dc648(extraout_x8_00,ppuVar2,param_2 & 0xffffffff,plVar5,auStack_138);
  func_0x0001083dcd74();
  ppuVar2 = &puStack_108;
  FUN_1083c81d4();
  func_0x0001083dcd50(uStack_f8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001083dcd74();
    ppuVar2 = &puStack_108;
    FUN_1083c81d4();
    func_0x0001083dcd7c();
    *ppuVar2 = (undefined1 *)&PTR_DAT_110a44e88;
    FUN_1083c81d4(ppuVar2 + 5);
    return ppuVar2;
  }
  return ppuVar2;
}



/* Entry: 1083dcad4; end: 1083dcc5b;  */

undefined1 **
FUN_1083dcad4(undefined8 param_1,undefined8 param_2,undefined4 param_3,long *param_4,
             undefined8 *param_5)

{
  undefined1 in_ZR;
  long *plVar1;
  long lVar2;
  undefined1 **ppuVar3;
  undefined8 extraout_x8;
  ulong uVar4;
  undefined8 uVar5;
  long lStack_b8;
  long lStack_b0;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [16];
  undefined1 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  plVar1 = param_4;
  func_0x0001083dcd64();
  uStack_68 = extraout_x8;
  (**(code **)(*plVar1 + 0x80))();
  puStack_78 = auStack_88;
  uStack_70 = 0x400000000;
  func_0x0001083c7ec0(&puStack_78,plVar1);
  for (uVar4 = (ulong)((uint)plVar1 & ((int)(uint)plVar1 >> 0x1f ^ 0xffffffffU)); uVar4 != 0;
      uVar4 = uVar4 - 1) {
    uVar5 = *param_5;
    plVar1 = param_4;
    (**(code **)(*param_4 + 0x50))(param_4);
    FUN_1083c7aa0(&lStack_b8,uVar5,param_3,plVar1);
    lStack_b0 = lStack_b8;
    lStack_b8 = 0;
    FUN_1083c7ed8(&puStack_78,&lStack_b0);
    lVar2 = lStack_b0;
    lStack_b0 = 0;
    if (lVar2 != 0) {
      func_0x0001083dcd44();
    }
    func_0x0001083dcd98();
    if (lVar2 != 0) {
      func_0x0001083dcd44();
    }
    param_5 = param_5 + 1;
  }
  FUN_1083c8078(auStack_a8,auStack_88);
  FUN_1083dc648(param_1,param_2,param_3,param_4,auStack_a8);
  func_0x0001083dcd74();
  ppuVar3 = &puStack_78;
  FUN_1083c81d4();
  func_0x0001083dcd50(uStack_68);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001083dcd74();
    ppuVar3 = &puStack_78;
    FUN_1083c81d4();
    func_0x0001083dcd7c();
    *ppuVar3 = (undefined1 *)&PTR_DAT_110a44e88;
    FUN_1083c81d4(ppuVar3 + 5);
    return ppuVar3;
  }
  return ppuVar3;
}



/* Entry: 1083dcc5c; end: 1083dcc5f;  */

undefined8 * FUN_1083dcc5c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a44e88;
  FUN_1083c81d4(param_1 + 5);
  return param_1;
}



/* Entry: 1083dcc60; end: 1083dcc73;  */

void FUN_1083dcc60(long *param_1)

{
  undefined8 extraout_x8;
  
  FUN_1083dc034();
  FUN_1083d3bc4(param_1);
  if (*param_1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(extraout_x8);
  return;
}



/* Entry: 1083dcc74; end: 1083dcd0f;  */

long * FUN_1083dcc74(long *param_1,long param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  long *plVar1;
  long lVar2;
  undefined8 extraout_x8;
  undefined8 uVar3;
  long lStack_60;
  undefined1 auStack_58 [32];
  undefined8 uStack_38;
  
  plVar1 = &lStack_60;
  func_0x0001083dcd64();
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  uStack_38 = extraout_x8;
  FUN_1083deaac(auStack_58,param_2 + 0x18);
  FUN_1083dc9f8(&lStack_60,param_3,uVar3,auStack_58);
  lVar2 = lStack_60;
  lStack_60 = 0;
  *param_1 = lVar2;
  FUN_1083dcd10();
  func_0x0001083dcd74();
  func_0x0001083dcd50(uStack_38);
  if ((bool)in_ZR) {
    return plVar1;
  }
  ___stack_chk_fail();
  func_0x0001083dcd74();
  func_0x0001083dcd7c();
  lVar2 = *plVar1;
  *plVar1 = 0;
  if (lVar2 != 0) {
    FUN_1083dc034();
    FUN_1083d3a98();
  }
  return plVar1;
}



/* Entry: 1083dcd10; end: 1083dcd43;  */

long * FUN_1083dcd10(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_1083dc034();
    FUN_1083d3a98();
  }
  return param_1;
}



/* Entry: 1083dcd44; end: 1083dcda3;  */

void FUN_1083dcd44(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001083dcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1083dcda4; end: 1083dd08b;  */

void FUN_1083dcda4(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lStack_108;
  long lStack_100;
  long alStack_f8 [16];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = (undefined4)*(undefined8 *)(*param_5 + 0x10);
  plVar2 = param_4;
  plVar8 = param_4;
  plVar9 = param_5;
  (**(code **)(*param_4 + 0x38))();
  if ((int)plVar2 != 0) {
    *(int *)(*param_5 + 8) = (int)param_3;
    lVar10 = *param_5;
    *param_5 = 0;
    *param_1 = lVar10;
    param_4 = plVar8;
    param_5 = plVar9;
    goto LAB_1083dcfc8;
  }
  lStack_108 = *param_5;
  *param_5 = 0;
  plVar2 = &lStack_108;
  FUN_1083c67e4(alStack_f8,(ulong)param_3 & 0xffffffff);
  lVar10 = alStack_f8[0];
  alStack_f8[0] = 0;
  lVar3 = *param_5;
  *param_5 = lVar10;
  if (lVar3 != 0) {
    FUN_1083dd1d0();
    lVar10 = alStack_f8[0];
    alStack_f8[0] = 0;
    if (lVar10 != 0) {
      FUN_1083dd1d0();
    }
  }
  if (lStack_108 != 0) {
    FUN_1083dd1d0();
  }
  iVar1 = (int)*param_5;
  FUN_1083c2fd8();
  if (iVar1 == 0) {
    plVar2 = param_3;
    FUN_1083dd08c(alStack_f8);
    lVar10 = alStack_f8[0];
    uVar7 = SUB84(plVar2,0);
    alStack_f8[0] = 0;
    *param_1 = lVar10;
    plVar2 = alStack_f8;
    FUN_1083dd19c();
    goto LAB_1083dcfc8;
  }
  param_3 = (long *)*param_5;
  *param_5 = 0;
  plVar4 = param_4;
  (**(code **)(*param_4 + 0x50))();
  uVar7 = SUB84(plVar2,0);
  if (*(int *)((long)param_3 + 0xc) == 0x1f) {
    plVar11 = param_4;
    (**(code **)(*param_4 + 0xd8))();
    uVar7 = SUB84(plVar2,0);
    if ((int)plVar11 == 0) goto LAB_1083dcf48;
    lStack_100 = param_3[3];
    param_3[3] = 0;
    func_0x0001083dd1f4();
    func_0x0001083dd1dc();
    FUN_1083dd20c();
LAB_1083dcf24:
    lVar10 = alStack_f8[0];
    alStack_f8[0] = 0;
    if (lVar10 != 0) {
      FUN_1083dd1d0();
    }
    lVar10 = lStack_100;
    lStack_100 = 0;
    if (lVar10 != 0) {
      FUN_1083dd1d0();
    }
  }
  else {
    if (*(int *)((long)param_3 + 0xc) == 0x22) {
      lStack_100 = param_3[3];
      param_3[3] = 0;
      func_0x0001083dd1f4();
      func_0x0001083dd1dc();
      FUN_1083dde68();
      goto LAB_1083dcf24;
    }
LAB_1083dcf48:
    (**(code **)(*param_4 + 0x80))();
    for (plVar11 = (long *)0x0; uVar7 = SUB84(plVar2,0), param_4 != plVar11;
        plVar11 = (long *)((long)plVar11 + 1)) {
      plVar5 = param_3;
      (**(code **)(*param_3 + 0x28))(param_3,plVar11);
      plVar8 = (long *)(ulong)*(uint *)(param_3 + 1);
      plVar2 = param_2;
      iVar1 = (int)plVar4;
      FUN_1083f1734(plVar5);
      plVar12 = (long *)0x0;
      if (iVar1 == 0) {
        plVar12 = plVar5;
      }
      alStack_f8[(long)plVar11] = (long)plVar12;
    }
    func_0x0001083dd1dc();
    FUN_1083dcad4();
  }
  plVar2 = param_3;
  (**(code **)(*param_3 + 8))();
  param_4 = plVar8;
  param_5 = plVar9;
LAB_1083dcfc8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  lVar10 = alStack_f8[0];
  alStack_f8[0] = 0;
  if (lVar10 != 0) {
    FUN_1083dd1d0();
  }
  lVar10 = lStack_100;
  lStack_100 = 0;
  if (lVar10 != 0) {
    FUN_1083dd1d0();
  }
  (**(code **)(*param_3 + 8))(param_3);
  __Unwind_Resume();
  puVar6 = (undefined8 *)0x20;
  FUN_1083d3a60();
  lVar10 = *param_5;
  *param_5 = 0;
  *(undefined4 *)(puVar6 + 1) = uVar7;
  *(undefined4 *)((long)puVar6 + 0xc) = 0x1e;
  puVar6[2] = param_4;
  puVar6[3] = lVar10;
  *puVar6 = &PTR_FUN_110a45050;
  *plVar2 = (long)puVar6;
  return;
}



/* Entry: 1083dd08c; end: 1083dd0e7;  */

void FUN_1083dd08c(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x20;
  FUN_1083d3a60();
  uVar2 = *param_4;
  *param_4 = 0;
  *(undefined4 *)(puVar1 + 1) = param_2;
  *(undefined4 *)((long)puVar1 + 0xc) = 0x1e;
  puVar1[2] = param_3;
  puVar1[3] = uVar2;
  *puVar1 = &PTR_FUN_110a45050;
  *param_1 = puVar1;
  return;
}



/* Entry: 1083dd0e8; end: 1083dd0eb;  */

undefined8 * FUN_1083dd0e8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a44f78;
  FUN_1083c8734(param_1 + 3);
  return param_1;
}



/* Entry: 1083dd0ec; end: 1083dd0ff;  */

void FUN_1083dd0ec(long *param_1)

{
  undefined8 extraout_x8;
  
  FUN_1083dc5b0();
  FUN_1083d3bc4(param_1);
  if (*param_1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(extraout_x8);
  return;
}



/* Entry: 1083dd100; end: 1083dd19b;  */

void FUN_1083dd100(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  plVar2 = *(long **)(param_2 + 0x18);
  (**(code **)(*plVar2 + 0x30))(&lStack_40,plVar2,(int)plVar2[1]);
  FUN_1083dd08c(&uStack_38,param_3,uVar1,&lStack_40);
  uVar1 = uStack_38;
  uStack_38 = 0;
  *param_1 = uVar1;
  FUN_1083dd19c(&uStack_38);
  lVar3 = lStack_40;
  lStack_40 = 0;
  if (lVar3 != 0) {
    FUN_1083dd1d0();
  }
  return;
}



/* Entry: 1083dd19c; end: 1083dd1cf;  */

long * FUN_1083dd19c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_1083dc5b0();
    FUN_1083d3a98();
  }
  return param_1;
}



/* Entry: 1083dd1d0; end: 1083dd20b;  */

void FUN_1083dd1d0(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001083dd1d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1083dd20c; end: 1083dd2c3;  */

void FUN_1083dd20c(undefined8 param_1,undefined4 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  long lStack_48;
  long lStack_40;
  undefined4 uStack_34;
  
  lStack_48 = *param_4;
  *param_4 = 0;
  uStack_34 = param_2;
  FUN_1083c67e4(&lStack_40,param_2,&lStack_48);
  lVar1 = lStack_40;
  lStack_40 = 0;
  lVar2 = *param_4;
  *param_4 = lVar1;
  if (lVar2 != 0) {
    FUN_1083dd488();
    lVar1 = lStack_40;
    lStack_40 = 0;
    if (lVar1 != 0) {
      FUN_1083dd488();
    }
  }
  if (lStack_48 != 0) {
    FUN_1083dd488();
  }
  FUN_1083dd2c4(&lStack_40,&uStack_34,param_3,param_4);
  func_0x0001083dd494();
  return;
}



/* Entry: 1083dd2c4; end: 1083dd323;  */

void FUN_1083dd2c4(undefined8 *param_1,undefined4 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)0x20;
  FUN_1083d3a60();
  uVar1 = *param_2;
  uVar3 = *param_4;
  *param_4 = 0;
  *(undefined4 *)(puVar2 + 1) = uVar1;
  *(undefined4 *)((long)puVar2 + 0xc) = 0x1f;
  puVar2[2] = param_3;
  puVar2[3] = uVar3;
  *puVar2 = &PTR_FUN_110a450c8;
  *param_1 = puVar2;
  return;
}



/* Entry: 1083dd324; end: 1083dd387;  */

void FUN_1083dd324(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar3 + 0x68))();
  iVar1 = 0;
  iVar2 = (int)plVar3;
  if (iVar2 != 0) {
    iVar1 = param_2 / iVar2;
  }
  if (iVar1 == param_2 - iVar1 * iVar2) {
    (**(code **)(**(long **)(param_1 + 0x18) + 0x28))(*(long **)(param_1 + 0x18),0);
  }
  return;
}



/* Entry: 1083dd388; end: 1083dd38b;  */

undefined8 * FUN_1083dd388(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a44f78;
  FUN_1083c8734(param_1 + 3);
  return param_1;
}



/* Entry: 1083dd38c; end: 1083dd39f;  */

void FUN_1083dd38c(long *param_1)

{
  undefined8 extraout_x8;
  
  FUN_1083dc5b0();
  FUN_1083d3bc4(param_1);
  if (*param_1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(extraout_x8);
  return;
}



/* Entry: 1083dd3a0; end: 1083dd3a7;  */

undefined8 FUN_1083dd3a0(void)

{
  return 1;
}


