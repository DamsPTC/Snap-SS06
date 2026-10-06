/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1083a9850; end: 1083a997b;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_1083a9850(long *param_1,int *param_2)

{
  char *pcVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  char *pcVar5;
  char cStack_21;
  
  *param_1 = 0;
  cStack_21 = '\x01';
  plVar3 = param_1;
  func_0x0001083a99e4(param_1,(long)param_2[1]);
  lVar4 = 0;
  param_1[2] = (long)plVar3;
  if ((char)param_2[3] == '\x01') {
    func_0x0001083a99e4(0,(long)param_2[1]);
  }
  param_1[3] = lVar4;
  if (*(char *)((long)param_2 + 0xd) == '\x01') {
    pcVar5 = &cStack_21;
    func_0x000108154764(pcVar5,(long)param_2[1],4);
  }
  else {
    pcVar5 = (char *)0x0;
  }
  param_1[4] = (long)pcVar5;
  param_1[6] = 0;
  pcVar5 = &cStack_21;
  func_0x000108154764(pcVar5,(long)param_2[2],2);
  param_1[5] = (long)pcVar5;
  if (*param_2 == 2) {
    iVar2 = param_2[2];
    if (iVar2 == 0) {
      iVar2 = param_2[1];
      if (0x10000 < iVar2) goto LAB_1083a9960;
    }
    else {
      param_1[6] = (long)pcVar5;
    }
    if (iVar2 + -2 == 0 || iVar2 < 2) goto LAB_1083a9960;
    pcVar5 = &cStack_21;
    func_0x000108154764(pcVar5,iVar2 + -2,6);
    param_1[5] = (long)pcVar5;
  }
  pcVar5 = (char *)param_1[4] + (long)pcVar5;
  pcVar1 = pcVar5 + param_1[3] + param_1[2];
  *param_1 = (long)(pcVar1 + 0x48);
  if ((((pcVar1 < (char *)0xffffffffffffffb8 && (char *)param_1[2] <= pcVar1) &&
       (char *)param_1[3] <= pcVar5 + param_1[3]) && (char *)param_1[4] <= pcVar5) &&
      cStack_21 != '\0') {
    param_1[1] = (long)pcVar1;
    return param_1;
  }
LAB_1083a9960:
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return param_1;
}



/* Entry: 1083a997c; end: 1083a99ef;  */

void FUN_1083a997c(void)

{
  long *unaff_x19;
  
                    /* WARNING: Could not recover jumptable at 0x0001083a9988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x19 + 0x18))();
  return;
}



/* Entry: 1083a99f0; end: 1083a9a3b;  */

undefined8 * FUN_1083a99f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a408d8;
  FUN_1083aa1b8(param_1 + 0xf);
  func_0x00010815277c(param_1 + 0xd);
  FUN_108380d08(param_1 + 8);
  FUN_108380cbc(param_1 + 7);
  return param_1;
}



/* Entry: 1083a9a3c; end: 1083a9a3f;  */

undefined8 * FUN_1083a9a3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a408d8;
  FUN_1083aa1b8(param_1 + 0xf);
  func_0x00010815277c(param_1 + 0xd);
  FUN_108380d08(param_1 + 8);
  FUN_108380cbc(param_1 + 7);
  return param_1;
}



/* Entry: 1083a9a40; end: 1083a9a53;  */

void FUN_1083a9a40(void)

{
  FUN_1083a99f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083a9a54; end: 1083a9a93;  */

void FUN_1083a9a54(long param_1,undefined8 param_2,long param_3)

{
  FUN_10834261c(param_1 + 0x48,param_3);
  func_0x0001083aa558();
  FUN_1082a2c38();
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)();
    return;
  }
  return;
}



/* Entry: 1083a9a94; end: 1083a9aa3;  */

undefined8 FUN_1083a9a94(long param_1,undefined8 param_2)

{
  FUN_10834261c(param_1 + 0x48);
  return param_2;
}



/* Entry: 1083a9aa4; end: 1083a9ac7;  */

void FUN_1083a9aa4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong unaff_x19;
  
  FUN_1083aa4fc();
  lVar1 = (unaff_x19 & 0xffffffff) << 2;
  func_0x0001083aa558();
  FUN_1082a2c70(param_1,lVar1);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)(param_1,param_2,lVar1);
    return;
  }
  return;
}



/* Entry: 1083a9ac8; end: 1083a9acb;  */

void FUN_1083a9ac8(long param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 0x48);
  FUN_1082a2c70(puVar1,4);
  *puVar1 = param_2;
  return;
}



/* Entry: 1083a9acc; end: 1083a9aef;  */

void FUN_1083a9acc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong unaff_x19;
  
  FUN_1083aa4fc();
  lVar1 = (unaff_x19 & 0xffffffff) << 2;
  func_0x0001083aa558();
  FUN_1082a2c70(param_1,lVar1);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)(param_1,param_2,lVar1);
    return;
  }
  return;
}



/* Entry: 1083a9af0; end: 1083a9aff;  */

void FUN_1083a9af0(long param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 0x48);
  FUN_1082a2c70(puVar1,4);
  *puVar1 = param_2;
  return;
}



/* Entry: 1083a9b00; end: 1083a9b23;  */

void FUN_1083a9b00(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong unaff_x19;
  
  FUN_1083aa4fc();
  lVar1 = (unaff_x19 & 0xffffffff) << 2;
  func_0x0001083aa558();
  FUN_1082a2c70(param_1,lVar1);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)(param_1,param_2,lVar1);
    return;
  }
  return;
}



/* Entry: 1083a9b24; end: 1083a9b43;  */

void FUN_1083a9b24(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  undefined8 uVar1;
  
  func_0x0001083aa548();
  uVar1 = *unaff_x19;
  param_1[1] = unaff_x19[1];
  *param_1 = uVar1;
  return;
}



/* Entry: 1083a9b44; end: 1083a9b67;  */

void FUN_1083a9b44(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong unaff_x19;
  
  FUN_1083aa4fc();
  lVar1 = (unaff_x19 & 0xffffffff) << 4;
  func_0x0001083aa558();
  FUN_1082a2c70(param_1,lVar1);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)(param_1,param_2,lVar1);
    return;
  }
  return;
}



/* Entry: 1083a9b68; end: 1083a9b97;  */

void FUN_1083a9b68(long param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  long unaff_x19;
  long unaff_x20;
  undefined4 uVar2;
  
  func_0x0001083aa594();
  FUN_108382c0c(*param_2,param_1 + 0x48);
  uVar2 = *(undefined4 *)(unaff_x19 + 4);
  puVar1 = (undefined4 *)(unaff_x20 + 0x48);
  FUN_1082a2c70(puVar1,4);
  *puVar1 = uVar2;
  return;
}



/* Entry: 1083a9b98; end: 1083a9ba7;  */

void FUN_1083a9b98(long *param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001083a9ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,param_2,0xc);
  return;
}



/* Entry: 1083a9ba8; end: 1083a9bcb;  */

void FUN_1083a9ba8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong unaff_x19;
  
  FUN_1083aa4fc();
  lVar1 = (unaff_x19 & 0xffffffff) << 3;
  func_0x0001083aa558();
  FUN_1082a2c70(param_1,lVar1);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)(param_1,param_2,lVar1);
    return;
  }
  return;
}



/* Entry: 1083a9bcc; end: 1083a9bff;  */

void FUN_1083a9bcc(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = (undefined8 *)(param_1 + 0x48);
  FUN_1082a2c70(puVar1,0x40);
  uVar2 = param_2[4];
  uVar4 = param_2[7];
  uVar3 = param_2[6];
  uVar8 = param_2[1];
  uVar7 = *param_2;
  uVar6 = param_2[3];
  uVar5 = param_2[2];
  puVar1[5] = param_2[5];
  puVar1[4] = uVar2;
  puVar1[7] = uVar4;
  puVar1[6] = uVar3;
  puVar1[1] = uVar8;
  *puVar1 = uVar7;
  puVar1[3] = uVar6;
  puVar1[2] = uVar5;
  return;
}



/* Entry: 1083a9c00; end: 1083a9c07;  */

void FUN_1083a9c00(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)(param_1 + 0x48);
  FUN_1082a2c70(puVar1,0x24);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    uVar5 = param_2[3];
    uVar4 = param_2[2];
    *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_2 + 4);
    puVar1[1] = uVar3;
    *puVar1 = uVar2;
    puVar1[3] = uVar5;
    puVar1[2] = uVar4;
  }
  return;
}



/* Entry: 1083a9c08; end: 1083a9c27;  */

void FUN_1083a9c08(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  undefined8 uVar1;
  
  func_0x0001083aa548();
  uVar1 = *unaff_x19;
  param_1[1] = unaff_x19[1];
  *param_1 = uVar1;
  return;
}



/* Entry: 1083a9c28; end: 1083a9c3f;  */

void FUN_1083a9c28(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)(param_1 + 0x48);
  FUN_1082a2c70(puVar1,0x10);
  uVar2 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar2;
  return;
}



/* Entry: 1083a9c40; end: 1083a9c7b;  */

long * FUN_1083a9c40(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  char *pcVar6;
  char *pcVar7;
  uint *puVar8;
  long lVar9;
  long *unaff_x19;
  long unaff_x20;
  long *plVar10;
  uint *puStack_80;
  uint *puStack_78;
  undefined8 uStack_70;
  char cStack_61;
  
  func_0x0001083aa594();
  FUN_10837f254(param_2,0);
  puVar8 = (uint *)(unaff_x20 + 0x48);
  FUN_1082a2c70(puVar8,param_2);
  plVar10 = unaff_x19;
  FUN_10837f160();
  if (plVar10 == (long *)0x0) {
    bVar4 = *(byte *)((long)unaff_x19 + 0xe);
    lVar9 = *unaff_x19;
    uVar1 = *(uint *)(lVar9 + 0x30);
    uVar2 = *(uint *)(lVar9 + 0x60);
    uVar3 = *(uint *)(lVar9 + 0x48);
    cStack_61 = '\x01';
    pcVar6 = &cStack_61;
    func_0x000108154764(pcVar6,(long)(int)uVar1,8);
    cVar5 = '\0';
    if (pcVar6 < (char *)0xfffffffffffffff0) {
      cVar5 = cStack_61;
    }
    cStack_61 = cVar5;
    pcVar7 = &cStack_61;
    func_0x000108154764(pcVar7,(long)(int)uVar2,4);
    pcVar7 = pcVar7 + (long)(pcVar6 + 0x10);
    cVar5 = '\0';
    if (pcVar6 + 0x10 <= pcVar7) {
      cVar5 = cStack_61;
    }
    cStack_61 = cVar5;
    pcVar6 = &cStack_61;
    func_0x000108154764(pcVar6,(long)(int)uVar3,1);
    pcVar6 = pcVar6 + (long)pcVar7;
    cVar5 = '\0';
    if (pcVar7 <= pcVar6) {
      cVar5 = cStack_61;
    }
    cStack_61 = '\0';
    if (pcVar6 < (char *)0xfffffffffffffffd) {
      cStack_61 = cVar5;
    }
    if (cStack_61 == '\x01') {
      plVar10 = (long *)((ulong)(pcVar6 + 3) & 0xfffffffffffffffc);
      if (puVar8 != (uint *)0x0) {
        *puVar8 = (bVar4 & 3) << 8 | 5;
        puVar8[1] = uVar1;
        puVar8[2] = uVar2;
        puVar8[3] = uVar3;
        puStack_78 = puVar8 + 4;
        uStack_70 = 0;
        puStack_80 = puVar8;
        FUN_10837f3cc(&puStack_80,*(undefined8 *)(*unaff_x19 + 0x28),(long)(int)uVar1 << 3);
        FUN_10837f3cc(&puStack_80,*(undefined8 *)(*unaff_x19 + 0x58),(long)(int)uVar2 << 2);
        FUN_10837f3cc(&puStack_80,*(undefined8 *)(*unaff_x19 + 0x40),(long)(int)uVar3);
        FUN_10840e2f4(&puStack_80);
      }
    }
    else {
      plVar10 = (long *)0x0;
    }
  }
  return plVar10;
}



/* Entry: 1083a9c7c; end: 1083a9ceb;  */

long * FUN_1083a9c7c(long param_1,undefined8 param_2,long *param_3)

{
  long unaff_x19;
  long *unaff_x20;
  
  func_0x0001083aa5a0();
  FUN_10834261c(param_1 + 0x48,param_3);
  FUN_1082a2c38(unaff_x19 + 0x48,param_3);
  (**(code **)(*unaff_x20 + 0x10))();
  if (unaff_x20 <= param_3 && (long)param_3 - (long)unaff_x20 != 0) {
    FUN_1082a2c38(unaff_x19 + 0x48,(long)param_3 - (long)unaff_x20);
  }
  return unaff_x20;
}



/* Entry: 1083a9cec; end: 1083a9f23;  */

void FUN_1083a9cec(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *unaff_x20;
  uint uVar6;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
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
  
  func_0x0001083aa594();
  (**(code **)(*param_2 + 0xa0))();
  (**(code **)(*unaff_x20 + 0x38))();
  FUN_1083a9f24(&uStack_138);
  FUN_108392d0c();
  if (param_2 != (long *)0x0) {
    lVar1 = unaff_x20[3];
    lVar2 = unaff_x20[4];
    uVar3 = *(uint *)(param_2 + 10);
    uStack_c0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_e8 = 0;
    ppuStack_f0 = &PTR_FUN_110a408d8;
    uStack_b0 = 0;
    uStack_b8 = 0;
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    uStack_78 = 0;
    FUN_10834261c(&uStack_a8,uVar3);
    uVar6 = 0;
    do {
      if ((uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU)) == uVar6) {
        uStack_140 = 0;
        FUN_1083aa8a4(&uStack_140,&uStack_a8);
        goto LAB_1083a9e6c;
      }
      uStack_100 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      plVar5 = param_2;
      FUN_108368b58(param_2,uVar6,&uStack_120);
      if ((int)plVar5 != 0) {
        FUN_1083b83b8(&uStack_128,&uStack_120,0,0);
        FUN_1083a9f24(&uStack_130,uStack_128,lVar1,lVar2);
        uVar4 = uStack_130;
        FUN_108392d0c(&ppuStack_f0,uStack_130);
        func_0x0001083aa228(uVar4);
        func_0x000106f47184(&uStack_128);
      }
      FUN_10810a400(&uStack_110);
      uVar6 = uVar6 + 1;
    } while (((ulong)plVar5 & 1) != 0);
    uStack_140 = 0;
LAB_1083a9e6c:
    FUN_1083a99f0(&ppuStack_f0);
    FUN_108392d0c();
    func_0x0001083aa228(uStack_140);
  }
  func_0x0001083aa228(uStack_138);
  return;
}



/* Entry: 1083a9f24; end: 1083a9f7b;  */

void FUN_1083a9f24(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined1 auStack_38 [8];
  
  func_0x0001083aa5a0();
  if (param_3 != (code *)0x0) {
    (*param_3)(auStack_38);
    func_0x0001083aa538();
    if (unaff_x21 != 0) goto LAB_1083a9f70;
  }
  (**(code **)(*unaff_x20 + 0xe0))(auStack_38);
  func_0x0001083aa538();
LAB_1083a9f70:
  *unaff_x19 = unaff_x21;
  return;
}



/* Entry: 1083a9f7c; end: 1083aa03f;  */

void FUN_1083a9f7c(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long *unaff_x19;
  long lStack_28;
  
  func_0x0001083aa5a0();
  if (param_2 == 0) {
    func_0x0001083aa58c();
  }
  else if (((code *)unaff_x19[5] != (code *)0x0) &&
          ((*(code *)unaff_x19[5])(&lStack_28), lStack_28 != 0)) {
    uVar1 = *(ulong *)(lStack_28 + 0x20);
    if (uVar1 >> 0x1f != 0) {
      uVar1 = 0;
    }
    func_0x0001083aa58c();
    if (uVar1 != 0) {
      (**(code **)(*unaff_x19 + 0x10))();
    }
    func_0x0001083aa228(lStack_28);
    return;
  }
  if (unaff_x19[8] != 0) {
    FUN_108384b68();
  }
  func_0x0001083aa58c();
  return;
}



/* Entry: 1083aa040; end: 1083aa04f;  */

void FUN_1083aa040(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  long *param_5,long *param_6)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  bool bVar8;
  uint uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined4 uVar14;
  long lVar15;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  lVar4 = -(ulong)(param_6[2] == 0);
  lVar5 = -(ulong)(param_6[3] == 0);
  lVar6 = -(ulong)(*param_6 == 0);
  uVar14 = (undefined4)lVar6;
  lVar15 = -(ulong)(param_6[1] == 0);
  auVar2[1] = ~(byte)((ulong)lVar6 >> 8);
  auVar2[0] = ~(byte)lVar6;
  auVar2[2] = ~(byte)((ulong)lVar6 >> 0x10);
  auVar2[3] = ~(byte)((ulong)lVar6 >> 0x18);
  auVar2[4] = ~(byte)lVar15;
  auVar2[5] = ~(byte)((ulong)lVar15 >> 8);
  auVar2[6] = ~(byte)((ulong)lVar15 >> 0x10);
  auVar2[7] = ~(byte)((ulong)lVar15 >> 0x18);
  auVar2[8] = ~(byte)lVar4;
  auVar2[9] = ~(byte)((ulong)lVar4 >> 8);
  auVar2[10] = ~(byte)((ulong)lVar4 >> 0x10);
  auVar2[0xb] = ~(byte)((ulong)lVar4 >> 0x18);
  auVar2[0xc] = ~(byte)lVar5;
  auVar2[0xd] = ~(byte)((ulong)lVar5 >> 8);
  auVar2[0xe] = ~(byte)((ulong)lVar5 >> 0x10);
  auVar2[0xf] = ~(byte)((ulong)lVar5 >> 0x18);
  uVar9 = NEON_umaxv(auVar2,4);
  if ((((uVar9 & 1) == 0) && (param_6[4] == 0)) &&
     (plVar7 = param_6, FUN_10837626c(), ((ulong)plVar7 >> 0x20 & 1) != 0)) {
    uVar9 = 0;
    bVar8 = true;
  }
  else {
    bVar8 = false;
    uVar9 = 0x2000000;
  }
  func_0x000108376abc();
  uVar3 = *(undefined4 *)((long)param_6 + 0x44);
  uVar10 = (undefined1)uVar3;
  uVar11 = (undefined1)((uint)uVar3 >> 8);
  uVar12 = (undefined1)((uint)uVar3 >> 0x10);
  uVar13 = (undefined1)((uint)uVar3 >> 0x18);
  func_0x000108376abc();
  FUN_10819a67c(param_6);
  uStack_40 = CONCAT13(uVar13,CONCAT12(uVar12,CONCAT11(uVar11,uVar10)));
  uStack_3c = uVar14;
  uStack_38 = param_3;
  uStack_34 = param_4;
  (**(code **)(*param_5 + 0x70))(param_5,&uStack_40);
  plVar7 = param_6;
  FUN_10837626c();
  uVar1 = 0xff00;
  if (((ulong)plVar7 & 0x100000000) != 0) {
    uVar1 = (int)plVar7 << 8;
  }
  (**(code **)(*param_5 + 0x38))
            (param_5,*(uint *)(param_6 + 9) & 3 | uVar9 | uVar1 |
                     (*(uint *)(param_6 + 9) & 0xfc) << 0xe);
  if (!bVar8) {
    func_0x000108376aac();
    func_0x000108376aac();
    func_0x000108376aac();
    func_0x000108376aac();
    func_0x000108376aac();
    func_0x000108376aac();
  }
  return;
}



/* Entry: 1083aa050; end: 1083aa173;  */

void FUN_1083aa050(long *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long *plStack_38;
  
  if (param_2 == (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001083aa0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x38))(param_1);
    return;
  }
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x18))();
  if ((plVar1 == (long *)0x0) || (uVar2 = param_1[7], uVar2 == 0)) {
    plVar3 = param_2;
    (**(code **)(*param_2 + 0x20))();
    plVar1 = param_1 + 0xe;
    plStack_38 = plVar3;
    FUN_1083aa174(plVar1,&plStack_38);
    plVar3 = plStack_38;
    if (plVar1 == (long *)0x0) {
      plVar1 = plStack_38;
      _strlen(plStack_38);
      (**(code **)(*param_1 + 0x50))(param_1,plVar3,plVar1);
      func_0x0001083aa194(param_1 + 0xe,plStack_38,(int)param_1[0xe] + 1);
      goto LAB_1083aa134;
    }
    uVar2 = (ulong)(uint)((int)*plVar1 << 8);
  }
  else {
    FUN_108384b68(uVar2,plVar1);
  }
  (**(code **)(*param_1 + 0x38))(param_1,uVar2);
LAB_1083aa134:
  FUN_1082a2c70(param_1 + 9,4);
  lVar4 = param_1[0xb];
  (**(code **)(*param_2 + 0x28))(param_2,param_1);
  *(int *)(param_1[9] + lVar4 + -4) = (int)param_1[0xb] - (int)lVar4;
  return;
}



/* Entry: 1083aa174; end: 1083aa1af;  */

long FUN_1083aa174(long param_1)

{
  long lVar1;
  
  FUN_1083aa234();
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}



/* Entry: 1083aa1b0; end: 1083aa1b7;  */

void FUN_1083aa1b0(long param_1,undefined8 param_2,long param_3)

{
  FUN_1082a2c38(param_1 + 0x48,param_3);
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)();
    return;
  }
  return;
}



/* Entry: 1083aa1b8; end: 1083aa1db;  */

undefined8 FUN_1083aa1b8(undefined8 param_1)

{
  FUN_1083aa1dc(param_1,0);
  return param_1;
}



/* Entry: 1083aa1dc; end: 1083aa233;  */

void FUN_1083aa1dc(long *param_1)

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
      lVar2 = *(long *)(lVar1 + -8) * 0x18;
      do {
        if (*(int *)(lVar1 + -0x18 + lVar2) != 0) {
          *(undefined4 *)(lVar1 + -0x18 + lVar2) = 0;
        }
        lVar2 = lVar2 + -0x18;
      } while (lVar2 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(lVar1 + -0x10);
    return;
  }
  return;
}



/* Entry: 1083aa234; end: 1083aa2a7;  */

int * FUN_1083aa234(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong extraout_x9;
  long lVar3;
  long extraout_x10;
  uint extraout_w11;
  undefined8 uVar4;
  undefined8 extraout_x12;
  int *piVar5;
  long unaff_x19;
  long *unaff_x20;
  
  func_0x0001083aa5a0();
  FUN_1083aa2a8();
  uVar1 = *(uint *)(unaff_x19 + 4);
  uVar2 = (ulong)(uVar1 - 1 & (uint)param_2);
  lVar3 = *unaff_x20;
  uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  uVar4 = 0x18;
  while( true ) {
    if (uVar1 == 0) {
      return (int *)0x0;
    }
    piVar5 = (int *)(*(long *)(unaff_x19 + 8) + (long)(int)uVar2 * (long)(int)uVar4);
    if (*piVar5 == 0) break;
    if (((int)param_2 == *piVar5) && (lVar3 == *(long *)(piVar5 + 2))) {
      return piVar5 + 2;
    }
    func_0x0001083aa564();
    uVar2 = extraout_x9;
    lVar3 = extraout_x10;
    uVar4 = extraout_x12;
    uVar1 = extraout_w11;
  }
  return (int *)0x0;
}



/* Entry: 1083aa2a8; end: 1083aa307;  */

uint FUN_1083aa2a8(uint param_1)

{
  func_0x0001083aa2c4();
  if (param_1 < 2) {
    param_1 = 1;
  }
  return param_1;
}



/* Entry: 1083aa308; end: 1083aa363;  */

void FUN_1083aa308(int *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  iVar1 = param_1[1];
  uStack_30 = param_2;
  uStack_28 = param_3;
  if (iVar1 * 3 <= *param_1 * 4) {
    iVar2 = iVar1 << 1;
    if (iVar1 < 1) {
      iVar2 = 4;
    }
    FUN_1083aa364(param_1,iVar2);
  }
  FUN_1083aa454(param_1,&uStack_30);
  return;
}



/* Entry: 1083aa364; end: 1083aa453;  */

void FUN_1083aa364(undefined4 *param_1,ulong param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lStack_38;
  
  uVar1 = param_1[1];
  iVar4 = (int)param_2;
  *param_1 = 0;
  param_1[1] = iVar4;
  lStack_38 = *(long *)(param_1 + 2);
  *(undefined8 *)(param_1 + 2) = 0;
  uVar8 = (ulong)iVar4;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar8;
  uVar5 = ((-(param_2 >> 0x1f & 1) & 0xfffffffe00000000 | (param_2 & 0xffffffff) << 1) + (long)iVar4
          ) * 8;
  puVar3 = (undefined8 *)(uVar5 + 0x10);
  if (0xffffffffffffffef < uVar5 || SUB168(auVar2 * ZEXT816(0x18),8) != 0) {
    puVar3 = (undefined8 *)0xffffffffffffffff;
  }
  __Znam();
  *puVar3 = 0x18;
  puVar3[1] = uVar8;
  if (iVar4 != 0) {
    lVar6 = uVar8 * 0x18;
    puVar7 = puVar3 + 2;
    do {
      *(undefined4 *)puVar7 = 0;
      lVar6 = lVar6 + -0x18;
      puVar7 = puVar7 + 3;
    } while (lVar6 != 0);
  }
  *(undefined8 **)(param_1 + 2) = puVar3 + 2;
  for (lVar6 = 0; (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) * 0x18 - lVar6 != 0;
      lVar6 = lVar6 + 0x18) {
    if (*(int *)(lStack_38 + lVar6) != 0) {
      FUN_1083aa454(param_1,lStack_38 + lVar6 + 8);
    }
  }
  FUN_1083aa1b8(&lStack_38);
  return;
}



/* Entry: 1083aa454; end: 1083aa4fb;  */

int * FUN_1083aa454(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong extraout_x9;
  long lVar4;
  long extraout_x10;
  uint extraout_w11;
  undefined8 uVar5;
  undefined8 extraout_x12;
  int *piVar6;
  long *unaff_x19;
  int *unaff_x20;
  
  func_0x0001083aa594();
  FUN_1083aa2a8();
  uVar1 = unaff_x20[1];
  uVar3 = (ulong)(uVar1 - 1 & (uint)param_2);
  lVar4 = *unaff_x19;
  uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  uVar5 = 0x18;
  while( true ) {
    if (uVar1 == 0) {
      return (int *)0x0;
    }
    piVar6 = (int *)(*(long *)(unaff_x20 + 2) + (long)(int)uVar3 * (long)(int)uVar5);
    iVar2 = (int)param_2;
    if (*piVar6 == 0) break;
    if ((iVar2 == *piVar6) && (lVar4 == *(long *)(piVar6 + 2))) {
      *piVar6 = 0;
      lVar4 = *unaff_x19;
      *(long *)(piVar6 + 4) = unaff_x19[1];
      *(long *)(piVar6 + 2) = lVar4;
      *piVar6 = iVar2;
      return piVar6 + 2;
    }
    func_0x0001083aa564();
    uVar3 = extraout_x9;
    lVar4 = extraout_x10;
    uVar5 = extraout_x12;
    uVar1 = extraout_w11;
  }
  lVar4 = *unaff_x19;
  *(long *)(piVar6 + 4) = unaff_x19[1];
  *(long *)(piVar6 + 2) = lVar4;
  *piVar6 = iVar2;
  *unaff_x20 = *unaff_x20 + 1;
  return piVar6 + 2;
}



/* Entry: 1083aa4fc; end: 1083aa5ab;  */

void FUN_1083aa4fc(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 0x48);
  FUN_1082a2c70(puVar1,4);
  *puVar1 = param_3;
  return;
}



/* Entry: 1083aa5ac; end: 1083aa6e7;  */

undefined8 * FUN_1083aa5ac(long *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  int *piStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (*param_1 != 0) {
    plVar12 = (long *)param_1[1];
    plVar8 = param_1 + 2;
    func_0x0001078bdb50();
    if (((plVar8 <= plVar12) && (0 < (int)param_1[4])) && (0 < *(int *)((long)param_1 + 0x24))) {
      uVar1 = *(uint *)(param_1 + 5);
      uVar9 = (ulong)uVar1;
      uVar2 = *(uint *)((long)param_1 + 0x2c);
      uVar11 = (ulong)uVar2;
      FUN_108219ff8();
      piStack_68 = (int *)0x0;
      uStack_60 = CONCAT44(param_3,param_2);
      puVar10 = &uStack_50;
      uStack_50 = uVar9;
      uStack_48 = uVar11;
      func_0x00010821b838(puVar10,&piStack_68);
      if ((int)puVar10 == 0) {
        return puVar10;
      }
      lVar3 = *param_1;
      lVar4 = param_1[1];
      iVar7 = (int)param_1 + 0x10;
      func_0x00010835c63c();
      *param_1 = lVar3 + lVar4 * (ulong)-(uVar2 & (int)uVar2 >> 0x1f) +
                 (long)(int)-((uVar1 & (int)uVar1 >> 0x1f) * iVar7);
      uStack_58 = CONCAT44(uStack_48._4_4_ - uStack_50._4_4_,(int)uStack_48 - (int)uStack_50);
      piStack_68 = (int *)param_1[2];
      if (piStack_68 != (int *)0x0) {
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piStack_68,0x10);
          if (bVar6) {
            *piStack_68 = *piStack_68 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      uStack_60 = param_1[3];
      func_0x0001078bddd4(param_1 + 2,&piStack_68);
      FUN_10810a400(&piStack_68);
      param_1[5] = uStack_50;
      return puVar10;
    }
  }
  return (undefined8 *)0x0;
}



/* Entry: 1083aa6e8; end: 1083aa79f;  */

void FUN_1083aa6e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_1082a2c70(param_1,0x24);
  if (param_1 != (undefined8 *)0x0) {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    uVar4 = param_2[3];
    uVar3 = param_2[2];
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    param_1[3] = uVar4;
    param_1[2] = uVar3;
  }
  return;
}



/* Entry: 1083aa7a0; end: 1083aa80f;  */

void FUN_1083aa7a0(undefined4 *param_1,undefined *param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = (undefined *)0x0;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_3;
  }
  puVar1 = &UNK_10f490760;
  if (param_2 != (undefined *)0x0) {
    puVar1 = param_2;
  }
  if ((long)puVar2 < 0) {
    puVar2 = puVar1;
    _strlen();
  }
  FUN_1082a2c38(param_1,puVar2 + 5);
  *param_1 = (int)puVar2;
  _memcpy(param_1 + 1,puVar1,puVar2);
  *(undefined1 *)((long)(param_1 + 1) + (long)puVar2) = 0;
  return;
}



/* Entry: 1083aa810; end: 1083aa833;  */

long FUN_1083aa810(ulong param_1,ulong param_2)

{
  if ((long)param_2 < 0) {
    _strlen();
    param_2 = param_1;
  }
  return (param_2 & 0xfffffffffffffffc) + 8;
}



/* Entry: 1083aa834; end: 1083aa8a3;  */

void FUN_1083aa834(long *param_1,ulong param_2)

{
  ulong uVar1;
  bool bVar2;
  
  if (param_1[3] == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = *param_1 == param_1[3];
  }
  uVar1 = param_1[1] + ((ulong)param_1[1] >> 1);
  if (param_2 <= uVar1) {
    param_2 = uVar1;
  }
  param_1[1] = param_2 + 0x1000;
  FUN_1083a7f58(param_1 + 4);
  *param_1 = param_1[4];
  if (bVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)(param_1[4],param_1[3],param_1[2]);
    return;
  }
  return;
}



/* Entry: 1083aa8a4; end: 1083aa8e7;  */

void FUN_1083aa8a4(undefined8 *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined4 *puVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  char cStack_31;
  
  lVar7 = *param_2;
  uVar6 = param_2[2];
  if (uVar6 != 0) {
    if (0xffffffffffffffd7 < uVar6) {
      FUN_10841076c(&UNK_10f48f31d);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1083463dc);
      (*pcVar3)();
    }
    puVar4 = (undefined4 *)(uVar6 + 0x28);
    __Znwm();
    *puVar4 = 1;
    *(undefined8 *)(puVar4 + 2) = 0;
    *(undefined8 *)(puVar4 + 4) = 0;
    *(undefined4 **)(puVar4 + 6) = puVar4 + 10;
    *(ulong *)(puVar4 + 8) = uVar6;
    *param_1 = puVar4;
    if (lVar7 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)(puVar4 + 10,lVar7,uVar6);
    return;
  }
  cStack_31 = cRam0000000113826ca0;
  if (cRam0000000113826ca0 == '\0') {
    piVar5 = (int *)0x113826ca0;
    FUN_10825bc50(0x113826ca0,&cStack_31,1,0,0);
    if ((int)piVar5 == 0) goto LAB_10834645c;
    func_0x000108346750();
    *piVar5 = 1;
    piVar5[4] = 0;
    piVar5[5] = 0;
    piVar5[2] = 0;
    piVar5[3] = 0;
    piVar5[8] = 0;
    piVar5[9] = 0;
    piVar5[6] = 0;
    piVar5[7] = 0;
    cRam0000000113826ca0 = '\x02';
    piRam0000000113826ca8 = piVar5;
  }
  else {
LAB_10834645c:
    do {
    } while (cRam0000000113826ca0 != '\x02');
    piVar5 = piRam0000000113826ca8;
    if (piRam0000000113826ca8 == (int *)0x0) goto LAB_108346480;
  }
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
    if (bVar2) {
      *piVar5 = *piVar5 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_108346480:
  *param_1 = piVar5;
  return;
}



/* Entry: 1083aa8e8; end: 1083aa9a3;  */

ulong FUN_1083aa8e8(uint param_1,ulong param_2,int param_3)

{
  code *pcVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = param_1;
  FUN_1083aa9a4();
  uVar3 = 0;
  uVar4 = 0;
  if ((param_3 < 0) || (uVar2 == 0)) goto LAB_1083aa988;
  uVar2 = param_1;
  FUN_1081a6298();
  if ((int)uVar2 < param_3) {
    uVar3 = 0;
    uVar4 = 0;
    goto LAB_1083aa988;
  }
  uVar3 = 0x100000001;
  if (param_1 < 0xb) {
    uVar2 = 1 << (ulong)(param_1 & 0x1f);
    if ((uVar2 & 0x186) == 0) {
      if ((uVar2 & 0x618) == 0) {
        if (param_1 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1083aa9a4);
          (*pcVar1)();
        }
      }
      else if (param_3 == 1) goto LAB_1083aa978;
    }
    else if (param_3 - 1U < 2) {
LAB_1083aa978:
      func_0x0001083aa8bc(param_2);
      uVar3 = param_2;
    }
  }
  uVar4 = uVar3 & 0x300000000;
  uVar3 = uVar3 & 0xffffffff;
LAB_1083aa988:
  return uVar4 | uVar3;
}



/* Entry: 1083aa9a4; end: 1083aa9d3;  */

uint FUN_1083aa9a4(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 1;
  if (param_2 != 1 && param_1 < 0xd) {
    uVar2 = 0x79f >> (ulong)(param_1 & 0x1f);
  }
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = uVar2;
  }
  uVar2 = 0;
  if (param_1 != 0) {
    uVar2 = uVar1;
  }
  return uVar2 & 1;
}



/* Entry: 1083aa9d4; end: 1083aab63;  */

void FUN_1083aa9d4(undefined8 param_1,ulong param_2,ulong param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auVar10 [16];
  
  for (lVar5 = 0; (int)lVar5 != 0x20; lVar5 = lVar5 + 8) {
    *(undefined8 *)((long)param_5 + lVar5) = 0;
  }
  uVar4 = param_2;
  FUN_1083aa9a4(param_2,param_3);
  if ((int)uVar4 == 0) {
    return;
  }
  iVar6 = (int)((ulong)param_1 >> 0x20);
  iVar1 = iVar6;
  iVar2 = (int)param_1;
  if (param_4 < 5) {
    iVar1 = (int)param_1;
    iVar2 = iVar6;
  }
  iVar8 = iVar2;
  iVar6 = iVar1;
  switch(param_3 & 0xffffffff) {
  case 0:
    goto LAB_1083aab60;
  case 2:
    iVar7 = iVar1 + 1;
    iVar9 = 2;
    goto code_r0x0001083aaa7c;
  case 3:
    iVar6 = (iVar1 + 1) / 2;
    iVar8 = (iVar2 + 1) / 2;
    break;
  case 4:
    goto code_r0x0001083aaaac;
  case 5:
    iVar7 = iVar1 + 3;
    iVar9 = 4;
code_r0x0001083aaa7c:
    iVar6 = 0;
    if (iVar9 != 0) {
      iVar6 = iVar7 / iVar9;
    }
    break;
  case 6:
    iVar6 = (iVar1 + 3) / 4;
code_r0x0001083aaaac:
    iVar8 = (iVar2 + 1) / 2;
  }
  switch(param_2 & 0xffffffff) {
  default:
LAB_1083aab60:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1083aab64);
    (*pcVar3)();
  case 1:
  case 2:
    *param_5 = iVar1;
    param_5[1] = iVar2;
    param_5[4] = iVar6;
    param_5[5] = iVar8;
    *(undefined8 *)(param_5 + 2) = *(undefined8 *)(param_5 + 4);
    break;
  case 3:
  case 4:
    *param_5 = iVar1;
    param_5[1] = iVar2;
    param_5[2] = iVar6;
    param_5[3] = iVar8;
    break;
  case 5:
  case 6:
  case 0xb:
  case 0xc:
    *param_5 = iVar1;
    param_5[1] = iVar2;
    break;
  case 7:
  case 8:
    param_5[6] = iVar1;
    param_5[7] = iVar2;
    param_5[4] = iVar6;
    param_5[5] = iVar8;
    auVar10 = NEON_ext(*(undefined1 (*) [16])(param_5 + 4),*(undefined1 (*) [16])(param_5 + 4),8,1);
    *(long *)(param_5 + 2) = auVar10._8_8_;
    *(long *)param_5 = auVar10._0_8_;
    break;
  case 9:
  case 10:
    param_5[4] = iVar1;
    param_5[5] = iVar2;
    *(undefined8 *)param_5 = *(undefined8 *)(param_5 + 4);
    param_5[2] = iVar6;
    param_5[3] = iVar8;
  }
  return;
}



/* Entry: 1083aab64; end: 1083aad13;  */

void FUN_1083aab64(undefined8 *param_1,undefined4 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  switch(param_2) {
  case 0:
    param_1[1] = 0x3ffffffff;
    *param_1 = 0x3ffffffff;
    param_1[3] = 0x3ffffffff;
    param_1[2] = 0x3ffffffff;
    return;
  case 1:
    puVar3 = &UNK_10df1ea84;
    break;
  case 2:
    puVar3 = &UNK_10df1eaa4;
    break;
  case 3:
    puVar3 = &UNK_10df1eac4;
    break;
  case 4:
    puVar3 = &UNK_10df1eae4;
    break;
  case 5:
    puVar3 = &UNK_10df1eb04;
    break;
  case 6:
    puVar3 = &UNK_10df1eb24;
    break;
  case 7:
    puVar3 = &UNK_10df1eb44;
    break;
  case 8:
    puVar3 = &UNK_10df1eb64;
    break;
  case 9:
    puVar3 = &UNK_10df1eb84;
    break;
  case 10:
    puVar3 = &UNK_10df1eba4;
    break;
  case 0xb:
    puVar3 = &UNK_10df1ebc4;
    break;
  case 0xc:
    puVar3 = &UNK_10df1ebe4;
    break;
  default:
    puVar3 = (undefined *)0x0;
  }
  lVar2 = 0;
  uStack_18 = 0x3ffffffff;
  uStack_20 = 0x3ffffffff;
  uStack_8 = 0x3ffffffff;
  uStack_10 = 0x3ffffffff;
  puVar4 = (uint *)(puVar3 + 4);
  do {
    if (lVar2 == 0x20) {
      param_1[1] = uStack_18;
      *param_1 = uStack_20;
      param_1[3] = uStack_8;
      param_1[2] = uStack_10;
      return;
    }
    uVar5 = puVar4[-1];
    if ((int)uVar5 < 0) {
      uVar6 = 0;
      uVar5 = 0xffffffff;
    }
    else {
      uVar6 = *puVar4;
      iVar1 = *(int *)(param_3 + (ulong)uVar5 * 4);
      switch(iVar1) {
      case 1:
code_r0x0001083aacb0:
        if (uVar6 != 0) {
LAB_1083aad08:
          param_1[1] = 0x3ffffffff;
          *param_1 = 0x3ffffffff;
          param_1[3] = 0x3ffffffff;
          param_1[2] = 0x3ffffffff;
          return;
        }
        break;
      case 2:
      case 4:
      case 5:
      case 6:
        goto LAB_1083aad08;
      case 3:
        if (1 < uVar6) goto LAB_1083aad08;
        break;
      case 7:
        if (2 < uVar6) goto LAB_1083aad08;
        break;
      case 8:
        if (uVar6 != 0) goto LAB_1083aad08;
code_r0x0001083aace4:
        uVar6 = 3;
        break;
      default:
        if (iVar1 == 0xf) {
          if (3 < uVar6) goto LAB_1083aad08;
        }
        else {
          if (iVar1 != 0x18) {
            if (iVar1 != 0x10) goto LAB_1083aad08;
            goto code_r0x0001083aacb0;
          }
          if (uVar6 != 0) {
            if (uVar6 != 1) goto LAB_1083aad08;
            goto code_r0x0001083aace4;
          }
        }
      }
    }
    *(uint *)((long)&uStack_20 + lVar2) = uVar5;
    *(uint *)((long)&uStack_20 + lVar2 + 4) = uVar6;
    puVar4 = puVar4 + 2;
    lVar2 = lVar2 + 8;
  } while( true );
}



/* Entry: 1083aad14; end: 1083aad73;  */

undefined8 *
FUN_1083aad14(undefined8 *param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  
  *param_1 = param_2;
  *(int *)(param_1 + 1) = (int)param_3;
  *(int *)((long)param_1 + 0xc) = (int)param_4;
  *(undefined4 *)(param_1 + 2) = param_5;
  *(undefined4 *)((long)param_1 + 0x14) = param_6;
  bVar1 = true;
  bVar2 = false;
  if (0 < (int)param_2) {
    iVar3 = (int)((ulong)param_2 >> 0x20);
    bVar2 = SBORROW4(iVar3,1);
    bVar1 = iVar3 + -1 < 0;
  }
  *(undefined4 *)(param_1 + 3) = param_7;
  *(undefined4 *)((long)param_1 + 0x1c) = param_8;
  if ((bVar1 == bVar2) && (FUN_1083aa9a4(param_3,param_4), (param_3 & 1) != 0)) {
    return param_1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0x10000001c;
  return param_1;
}



/* Entry: 1083aad74; end: 1083aae9f;  */

byte * FUN_1083aad74(byte *param_1,undefined1 *param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  undefined8 *extraout_x8;
  undefined *puVar5;
  uint *puVar6;
  uint uVar7;
  long lVar8;
  byte bVar9;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  byte bStack_79;
  undefined1 auStack_78 [4];
  int aiStack_74 [7];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(int *)(param_1 + 8) == 0) {
    pbVar3 = (byte *)0x0;
    puVar4 = param_2;
  }
  else {
    bStack_79 = 1;
    puVar4 = auStack_78;
    func_0x0001082e438c();
    uVar2 = (uint)param_1;
    pbVar3 = (byte *)0x0;
    bVar9 = 1;
    for (lVar8 = 0; (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) << 3 != lVar8;
        lVar8 = lVar8 + 8) {
      puVar4 = *(undefined1 **)(param_2 + lVar8);
      param_1 = &bStack_79;
      func_0x000108154764(param_1,puVar4,(long)*(int *)((long)aiStack_74 + lVar8));
      if (param_3 != (undefined8 *)0x0) {
        *(byte **)((long)param_3 + lVar8) = param_1;
      }
      bVar9 = 0;
      if (pbVar3 <= param_1 + (long)pbVar3) {
        bVar9 = bStack_79;
      }
      bStack_79 = bVar9;
      pbVar3 = param_1 + (long)pbVar3;
      bVar9 = bStack_79;
    }
    if (param_3 == (undefined8 *)0x0) {
      if ((bVar9 & 1) == 0) {
        pbVar3 = (byte *)0xffffffffffffffff;
      }
    }
    else if ((bVar9 & 1) == 0) {
      pbVar3 = (byte *)0xffffffffffffffff;
      if ((int)uVar2 < 4) {
        do {
          *param_3 = 0xffffffffffffffff;
          param_3 = param_3 + 1;
        } while( true );
      }
    }
    else {
      for (lVar8 = (long)(int)uVar2; lVar8 < 4; lVar8 = lVar8 + 1) {
        param_3[lVar8] = 0;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pbVar3;
  }
  ___stack_chk_fail();
  pbVar3 = (byte *)(ulong)*(uint *)(param_1 + 8);
  switch(pbVar3) {
  case (byte *)0x0:
    extraout_x8[1] = 0x3ffffffff;
    *extraout_x8 = 0x3ffffffff;
    extraout_x8[3] = 0x3ffffffff;
    extraout_x8[2] = 0x3ffffffff;
    return pbVar3;
  case (byte *)0x1:
    puVar5 = &UNK_10df1ea84;
    break;
  case (byte *)0x2:
    puVar5 = &UNK_10df1eaa4;
    break;
  case (byte *)0x3:
    puVar5 = &UNK_10df1eac4;
    break;
  case (byte *)0x4:
    puVar5 = &UNK_10df1eae4;
    break;
  case (byte *)0x5:
    puVar5 = &UNK_10df1eb04;
    break;
  case (byte *)0x6:
    puVar5 = &UNK_10df1eb24;
    break;
  case (byte *)0x7:
    puVar5 = &UNK_10df1eb44;
    break;
  case (byte *)0x8:
    puVar5 = &UNK_10df1eb64;
    break;
  case (byte *)0x9:
    puVar5 = &UNK_10df1eb84;
    break;
  case (byte *)0xa:
    puVar5 = &UNK_10df1eba4;
    break;
  case (byte *)0xb:
    puVar5 = &UNK_10df1ebc4;
    break;
  case (byte *)0xc:
    puVar5 = &UNK_10df1ebe4;
    break;
  default:
    puVar5 = (undefined *)0x0;
  }
  lVar8 = 0;
  uStack_98 = 0x3ffffffff;
  uStack_a0 = 0x3ffffffff;
  uStack_88 = 0x3ffffffff;
  uStack_90 = 0x3ffffffff;
  puVar6 = (uint *)(puVar5 + 4);
  do {
    if (lVar8 == 0x20) {
      extraout_x8[1] = uStack_98;
      *extraout_x8 = uStack_a0;
      extraout_x8[3] = uStack_88;
      extraout_x8[2] = uStack_90;
      return pbVar3;
    }
    uVar2 = puVar6[-1];
    if ((int)uVar2 < 0) {
      uVar7 = 0;
      uVar2 = 0xffffffff;
    }
    else {
      uVar7 = *puVar6;
      iVar1 = *(int *)(puVar4 + (ulong)uVar2 * 4);
      switch(iVar1) {
      case 1:
code_r0x0001083aacb0:
        if (uVar7 != 0) {
LAB_1083aad08:
          extraout_x8[1] = 0x3ffffffff;
          *extraout_x8 = 0x3ffffffff;
          extraout_x8[3] = 0x3ffffffff;
          extraout_x8[2] = 0x3ffffffff;
          return pbVar3;
        }
        break;
      case 2:
      case 4:
      case 5:
      case 6:
        goto LAB_1083aad08;
      case 3:
        if (1 < uVar7) goto LAB_1083aad08;
        break;
      case 7:
        if (2 < uVar7) goto LAB_1083aad08;
        break;
      case 8:
        if (uVar7 != 0) goto LAB_1083aad08;
code_r0x0001083aace4:
        uVar7 = 3;
        break;
      default:
        if (iVar1 == 0xf) {
          if (3 < uVar7) goto LAB_1083aad08;
        }
        else {
          if (iVar1 != 0x18) {
            if (iVar1 != 0x10) goto LAB_1083aad08;
            goto code_r0x0001083aacb0;
          }
          if (uVar7 != 0) {
            if (uVar7 != 1) goto LAB_1083aad08;
            goto code_r0x0001083aace4;
          }
        }
      }
    }
    *(uint *)((long)&uStack_a0 + lVar8) = uVar2;
    *(uint *)((long)&uStack_a0 + lVar8 + 4) = uVar7;
    puVar6 = puVar6 + 2;
    lVar8 = lVar8 + 8;
  } while( true );
}



/* Entry: 1083aaea0; end: 1083aaea7;  */

void FUN_1083aaea0(undefined8 *param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  switch(*(undefined4 *)(param_2 + 8)) {
  case 0:
    param_1[1] = 0x3ffffffff;
    *param_1 = 0x3ffffffff;
    param_1[3] = 0x3ffffffff;
    param_1[2] = 0x3ffffffff;
    return;
  case 1:
    puVar3 = &UNK_10df1ea84;
    break;
  case 2:
    puVar3 = &UNK_10df1eaa4;
    break;
  case 3:
    puVar3 = &UNK_10df1eac4;
    break;
  case 4:
    puVar3 = &UNK_10df1eae4;
    break;
  case 5:
    puVar3 = &UNK_10df1eb04;
    break;
  case 6:
    puVar3 = &UNK_10df1eb24;
    break;
  case 7:
    puVar3 = &UNK_10df1eb44;
    break;
  case 8:
    puVar3 = &UNK_10df1eb64;
    break;
  case 9:
    puVar3 = &UNK_10df1eb84;
    break;
  case 10:
    puVar3 = &UNK_10df1eba4;
    break;
  case 0xb:
    puVar3 = &UNK_10df1ebc4;
    break;
  case 0xc:
    puVar3 = &UNK_10df1ebe4;
    break;
  default:
    puVar3 = (undefined *)0x0;
  }
  lVar2 = 0;
  uStack_18 = 0x3ffffffff;
  uStack_20 = 0x3ffffffff;
  uStack_8 = 0x3ffffffff;
  uStack_10 = 0x3ffffffff;
  puVar4 = (uint *)(puVar3 + 4);
  do {
    if (lVar2 == 0x20) {
      param_1[1] = uStack_18;
      *param_1 = uStack_20;
      param_1[3] = uStack_8;
      param_1[2] = uStack_10;
      return;
    }
    uVar5 = puVar4[-1];
    if ((int)uVar5 < 0) {
      uVar6 = 0;
      uVar5 = 0xffffffff;
    }
    else {
      uVar6 = *puVar4;
      iVar1 = *(int *)(param_3 + (ulong)uVar5 * 4);
      switch(iVar1) {
      case 1:
code_r0x0001083aacb0:
        if (uVar6 != 0) {
LAB_1083aad08:
          param_1[1] = 0x3ffffffff;
          *param_1 = 0x3ffffffff;
          param_1[3] = 0x3ffffffff;
          param_1[2] = 0x3ffffffff;
          return;
        }
        break;
      case 2:
      case 4:
      case 5:
      case 6:
        goto LAB_1083aad08;
      case 3:
        if (1 < uVar6) goto LAB_1083aad08;
        break;
      case 7:
        if (2 < uVar6) goto LAB_1083aad08;
        break;
      case 8:
        if (uVar6 != 0) goto LAB_1083aad08;
code_r0x0001083aace4:
        uVar6 = 3;
        break;
      default:
        if (iVar1 == 0xf) {
          if (3 < uVar6) goto LAB_1083aad08;
        }
        else {
          if (iVar1 != 0x18) {
            if (iVar1 != 0x10) goto LAB_1083aad08;
            goto code_r0x0001083aacb0;
          }
          if (uVar6 != 0) {
            if (uVar6 != 1) goto LAB_1083aad08;
            goto code_r0x0001083aace4;
          }
        }
      }
    }
    *(uint *)((long)&uStack_20 + lVar2) = uVar5;
    *(uint *)((long)&uStack_20 + lVar2 + 4) = uVar6;
    puVar4 = puVar4 + 2;
    lVar2 = lVar2 + 8;
  } while( true );
}



/* Entry: 1083aaea8; end: 1083ab127;  */

byte * FUN_1083aaea8(byte *param_1,byte *param_2,uint *param_3,byte *param_4)

{
  byte *pbVar1;
  undefined1 in_ZR;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined8 *extraout_x8;
  undefined8 extraout_x8_00;
  undefined *puVar6;
  uint *puVar7;
  uint uVar8;
  byte *unaff_x19;
  byte *unaff_x21;
  byte *pbVar9;
  int iVar10;
  byte *unaff_x23;
  long unaff_x24;
  byte *unaff_x25;
  byte bVar11;
  uint *unaff_x26;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  byte bStack_1f9;
  byte abStack_1f8 [4];
  byte abStack_1f4 [28];
  long lStack_1d8;
  uint *puStack_1d0;
  byte *pbStack_1c8;
  long lStack_1c0;
  byte *pbStack_1b8;
  byte *pbStack_1b0;
  byte *pbStack_1a8;
  byte *pbStack_1a0;
  byte *pbStack_198;
  undefined1 *puStack_190;
  code *pcStack_188;
  byte *pbStack_178;
  uint *puStack_170;
  long lStack_168;
  byte *pbStack_160;
  byte abStack_158 [8];
  ulong uStack_150;
  undefined8 uStack_148;
  byte abStack_b0 [32];
  byte abStack_90 [32];
  undefined8 uStack_70;
  
  pbVar3 = param_1;
  pbStack_160 = param_4;
  func_0x0001083ab4c4();
  uVar13 = *(undefined8 *)param_2;
  uVar15 = *(undefined8 *)(param_2 + 0x18);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(pbVar3 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)pbVar3 = uVar13;
  *(undefined8 *)(pbVar3 + 0x18) = uVar15;
  *(undefined8 *)(pbVar3 + 0x10) = uVar14;
  pbVar3[0x28] = 0;
  pbVar3[0x29] = 0;
  pbVar3[0x2a] = 0;
  pbVar3[0x2b] = 0;
  pbVar3[0x2c] = 0;
  pbVar3[0x2d] = 0;
  pbVar3[0x2e] = 0;
  pbVar3[0x2f] = 0;
  pbVar3[0x30] = 0;
  pbVar3[0x31] = 0;
  pbVar3[0x32] = 0;
  pbVar3[0x33] = 0;
  pbVar3[0x34] = 0;
  pbVar3[0x35] = 0;
  pbVar3[0x36] = 0;
  pbVar3[0x37] = 0;
  pbVar9 = pbVar3 + 0x20;
  pbVar9[0] = 0;
  pbVar9[1] = 0;
  pbVar9[2] = 0;
  pbVar9[3] = 0;
  pbVar9[4] = 0;
  pbVar9[5] = 0;
  pbVar9[6] = 0;
  pbVar9[7] = 0;
  pbVar3[0x38] = 0;
  pbVar3[0x39] = 0;
  pbVar3[0x3a] = 0;
  pbVar3[0x3b] = 0;
  pbVar3[0x3c] = 0;
  pbVar3[0x3d] = 0;
  pbVar3[0x3e] = 0;
  pbVar3[0x3f] = 0;
  pbVar3[0x40] = 0;
  pbVar3[0x41] = 0;
  pbVar3[0x42] = 0;
  pbVar3[0x43] = 0;
  pbVar3[0x44] = 0;
  pbVar3[0x45] = 0;
  pbVar3[0x46] = 0;
  pbVar3[0x47] = 0;
  pbVar3[0x48] = 0;
  pbVar3[0x49] = 0;
  pbVar3[0x4a] = 0;
  pbVar3[0x4b] = 0;
  pbVar3[0x4c] = 0;
  pbVar3[0x4d] = 0;
  pbVar3[0x4e] = 0;
  pbVar3[0x4f] = 0;
  pbVar3[0x50] = 0;
  pbVar3[0x51] = 0;
  pbVar3[0x52] = 0;
  pbVar3[0x53] = 0;
  pbVar3[0x54] = 0;
  pbVar3[0x55] = 0;
  pbVar3[0x56] = 0;
  pbVar3[0x57] = 0;
  pbVar3[0x58] = 0;
  pbVar3[0x59] = 0;
  pbVar3[0x5a] = 0;
  pbVar3[0x5b] = 0;
  pbVar3[0x5c] = 0;
  pbVar3[0x5d] = 0;
  pbVar3[0x5e] = 0;
  pbVar3[0x5f] = 0;
  pbVar3[0x60] = 0;
  pbVar3[0x61] = 0;
  pbVar3[0x62] = 0;
  pbVar3[99] = 0;
  pbVar3[100] = 0;
  pbVar3[0x65] = 0;
  pbVar3[0x66] = 0;
  pbVar3[0x67] = 0;
  pbVar3[0x70] = 0;
  pbVar3[0x71] = 0;
  pbVar3[0x72] = 0;
  pbVar3[0x73] = 0;
  pbVar3[0x74] = 0;
  pbVar3[0x75] = 0;
  pbVar3[0x76] = 0;
  pbVar3[0x77] = 0;
  pbVar3[0x78] = 0;
  pbVar3[0x79] = 0;
  pbVar3[0x7a] = 0;
  pbVar3[0x7b] = 0;
  pbVar3[0x7c] = 0;
  pbVar3[0x7d] = 0;
  pbVar3[0x7e] = 0;
  pbVar3[0x7f] = 0;
  pbVar3[0x68] = 0;
  pbVar3[0x69] = 0;
  pbVar3[0x6a] = 0;
  pbVar3[0x6b] = 0;
  pbVar3[0x6c] = 0;
  pbVar3[0x6d] = 0;
  pbVar3[0x6e] = 0;
  pbVar3[0x6f] = 0;
  pbVar3[0x88] = 0;
  pbVar3[0x89] = 0;
  pbVar3[0x8a] = 0;
  pbVar3[0x8b] = 0;
  pbVar3[0x8c] = 0;
  pbVar3[0x8d] = 0;
  pbVar3[0x8e] = 0;
  pbVar3[0x8f] = 0;
  pbVar3[0x80] = 0;
  pbVar3[0x81] = 0;
  pbVar3[0x82] = 0;
  pbVar3[0x83] = 0;
  pbVar3[0x84] = 0;
  pbVar3[0x85] = 0;
  pbVar3[0x86] = 0;
  pbVar3[0x87] = 0;
  pbVar3[0x98] = 0;
  pbVar3[0x99] = 0;
  pbVar3[0x9a] = 0;
  pbVar3[0x9b] = 0;
  pbVar3[0x9c] = 0;
  pbVar3[0x9d] = 0;
  pbVar3[0x9e] = 0;
  pbVar3[0x9f] = 0;
  pbVar3[0x90] = 0;
  pbVar3[0x91] = 0;
  pbVar3[0x92] = 0;
  pbVar3[0x93] = 0;
  pbVar3[0x94] = 0;
  pbVar3[0x95] = 0;
  pbVar3[0x96] = 0;
  pbVar3[0x97] = 0;
  pbVar3[0xa0] = 0;
  pbVar3[0xa1] = 0;
  pbVar3[0xa2] = 0;
  pbVar3[0xa3] = 0;
  uStack_70 = extraout_x8_00;
  if (*(int *)(param_2 + 8) == 0) {
    func_0x0001083ab4dc(abStack_158);
    pbVar3 = abStack_158;
    FUN_1083ab3f0();
    func_0x0001083ab4e4();
    pbVar5 = param_2;
    param_2 = unaff_x23;
  }
  else {
    pbVar5 = abStack_90;
    unaff_x25 = param_2;
    pbStack_178 = pbVar9;
    func_0x0001082e438c();
    puStack_170 = param_3;
    uVar2 = (uint)unaff_x25;
    pbVar3 = unaff_x25;
    if (pbStack_160 == (byte *)0x0) {
      pbVar9 = (byte *)((ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) << 3);
      for (unaff_x19 = (byte *)0x0; pbVar9 != unaff_x19; unaff_x19 = unaff_x19 + 8) {
        pbVar3 = (byte *)(ulong)*param_3;
        FUN_10835c58c();
        *(long *)(abStack_b0 + (long)unaff_x19) =
             (long)*(int *)(abStack_90 + (long)unaff_x19) * (long)(int)pbVar3;
        param_3 = param_3 + 1;
      }
      pbStack_160 = abStack_b0;
      unaff_x21 = param_2;
    }
    lStack_168 = (long)(int)uVar2;
    uVar2 = 1;
    lVar12 = 0x20;
    for (unaff_x24 = 0; unaff_x26 = puStack_170, in_ZR = lStack_168 == unaff_x24, !(bool)in_ZR;
        unaff_x24 = unaff_x24 + 1) {
      unaff_x19 = param_1 + unaff_x24 * 8;
      *(undefined8 *)(unaff_x19 + 0x80) = *(undefined8 *)(pbStack_160 + unaff_x24 * 8);
      uStack_148 = *(undefined8 *)(abStack_90 + unaff_x24 * 8);
      uStack_150 = (ulong)puStack_170[unaff_x24] | 0x300000000;
      abStack_158[0] = 0;
      abStack_158[1] = 0;
      abStack_158[2] = 0;
      abStack_158[3] = 0;
      abStack_158[4] = 0;
      abStack_158[5] = 0;
      abStack_158[6] = 0;
      abStack_158[7] = 0;
      func_0x0001078bddd4(param_1 + lVar12,abStack_158);
      FUN_10810a400(abStack_158);
      unaff_x25 = (byte *)(ulong)*(uint *)(param_2 + 8);
      func_0x0001081a62b4(unaff_x25,unaff_x24);
      uVar8 = unaff_x26[unaff_x24] - 1;
      if (uVar8 < 0x18) {
        iVar10 = *(int *)(&UNK_10df1ec78 + (ulong)uVar8 * 4);
        pbVar9 = (byte *)(ulong)*(uint *)(&UNK_10df1ecd8 + (ulong)uVar8 * 4);
        if (unaff_x24 != 0) goto LAB_1083ab044;
LAB_1083ab060:
        uVar8 = 1;
      }
      else {
        iVar10 = 0;
        pbVar9 = (byte *)0x0;
        if (unaff_x24 == 0) goto LAB_1083ab060;
LAB_1083ab044:
        uVar8 = (uint)(*(int *)(param_1 + 0xa0) == (int)pbVar9);
      }
      pbVar5 = *(byte **)(unaff_x19 + 0x80);
      pbVar3 = param_1 + lVar12;
      FUN_1083307d8();
      uVar2 = (uint)((int)unaff_x25 <= iVar10) & uVar2 & uVar8 & (uint)pbVar3;
      *(int *)(param_1 + 0xa0) = (int)pbVar9;
      lVar12 = lVar12 + 0x18;
      unaff_x21 = param_2;
    }
    if (uVar2 != 0) goto LAB_1083ab0bc;
    func_0x0001083ab4dc(abStack_158);
    pbVar3 = abStack_158;
    FUN_1083ab3f0();
    func_0x0001083ab4e4();
  }
  unaff_x19 = abStack_158;
  func_0x0001083ab4fc();
LAB_1083ab0bc:
  func_0x0001083ab4b0(uStack_70);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001083ab4fc();
  pbVar4 = pbStack_178;
  FUN_1081526d4();
  func_0x0001083ab4d4();
  if (*(int *)(pbVar4 + 8) == 0) {
    if (pbVar5 != (byte *)0x0) {
      for (lVar12 = 0; (int)lVar12 != 0x20; lVar12 = lVar12 + 8) {
        pbVar9 = pbVar5 + lVar12;
        pbVar9[0] = 0;
        pbVar9[1] = 0;
        pbVar9[2] = 0;
        pbVar9[3] = 0;
        pbVar9[4] = 0;
        pbVar9[5] = 0;
        pbVar9[6] = 0;
        pbVar9[7] = 0;
      }
    }
    return (byte *)0x0;
  }
  pbVar1 = pbVar4 + 0x80;
  pcStack_188 = FUN_1083ab128;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1d0 = unaff_x26;
  pbStack_1c8 = unaff_x25;
  lStack_1c0 = unaff_x24;
  pbStack_1b8 = param_2;
  pbStack_1b0 = pbVar9;
  pbStack_1a8 = unaff_x21;
  pbStack_1a0 = pbVar3;
  pbStack_198 = unaff_x19;
  puStack_190 = &stack0xfffffffffffffff0;
  if (*(int *)(pbVar4 + 8) == 0) {
    pbVar3 = (byte *)0x0;
    pbVar9 = pbVar1;
  }
  else {
    bStack_1f9 = 1;
    pbVar9 = abStack_1f8;
    func_0x0001082e438c();
    uVar2 = (uint)pbVar4;
    pbVar3 = (byte *)0x0;
    bVar11 = 1;
    for (lVar12 = 0; (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) << 3 != lVar12;
        lVar12 = lVar12 + 8) {
      pbVar9 = *(byte **)(pbVar1 + lVar12);
      pbVar4 = &bStack_1f9;
      func_0x000108154764(pbVar4,pbVar9,(long)*(int *)(abStack_1f8 + lVar12 + 4));
      if (pbVar5 != (byte *)0x0) {
        *(byte **)(pbVar5 + lVar12) = pbVar4;
      }
      bVar11 = 0;
      if (pbVar3 <= pbVar4 + (long)pbVar3) {
        bVar11 = bStack_1f9;
      }
      bStack_1f9 = bVar11;
      pbVar3 = pbVar4 + (long)pbVar3;
      bVar11 = bStack_1f9;
    }
    if (pbVar5 == (byte *)0x0) {
      if ((bVar11 & 1) == 0) {
        pbVar3 = (byte *)0xffffffffffffffff;
      }
    }
    else if ((bVar11 & 1) == 0) {
      pbVar3 = (byte *)0xffffffffffffffff;
      if ((int)uVar2 < 4) {
        do {
          pbVar5[0] = 0xff;
          pbVar5[1] = 0xff;
          pbVar5[2] = 0xff;
          pbVar5[3] = 0xff;
          pbVar5[4] = 0xff;
          pbVar5[5] = 0xff;
          pbVar5[6] = 0xff;
          pbVar5[7] = 0xff;
          pbVar5 = pbVar5 + 8;
        } while( true );
      }
    }
    else {
      for (lVar12 = (long)(int)uVar2; lVar12 < 4; lVar12 = lVar12 + 1) {
        pbVar1 = pbVar5 + lVar12 * 8;
        pbVar1[0] = 0;
        pbVar1[1] = 0;
        pbVar1[2] = 0;
        pbVar1[3] = 0;
        pbVar1[4] = 0;
        pbVar1[5] = 0;
        pbVar1[6] = 0;
        pbVar1[7] = 0;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return pbVar3;
  }
  ___stack_chk_fail();
  pbVar3 = (byte *)(ulong)*(uint *)(pbVar4 + 8);
  switch(pbVar3) {
  case (byte *)0x0:
    extraout_x8[1] = 0x3ffffffff;
    *extraout_x8 = 0x3ffffffff;
    extraout_x8[3] = 0x3ffffffff;
    extraout_x8[2] = 0x3ffffffff;
    return pbVar3;
  case (byte *)0x1:
    puVar6 = &UNK_10df1ea84;
    break;
  case (byte *)0x2:
    puVar6 = &UNK_10df1eaa4;
    break;
  case (byte *)0x3:
    puVar6 = &UNK_10df1eac4;
    break;
  case (byte *)0x4:
    puVar6 = &UNK_10df1eae4;
    break;
  case (byte *)0x5:
    puVar6 = &UNK_10df1eb04;
    break;
  case (byte *)0x6:
    puVar6 = &UNK_10df1eb24;
    break;
  case (byte *)0x7:
    puVar6 = &UNK_10df1eb44;
    break;
  case (byte *)0x8:
    puVar6 = &UNK_10df1eb64;
    break;
  case (byte *)0x9:
    puVar6 = &UNK_10df1eb84;
    break;
  case (byte *)0xa:
    puVar6 = &UNK_10df1eba4;
    break;
  case (byte *)0xb:
    puVar6 = &UNK_10df1ebc4;
    break;
  case (byte *)0xc:
    puVar6 = &UNK_10df1ebe4;
    break;
  default:
    puVar6 = (undefined *)0x0;
  }
  lVar12 = 0;
  uStack_218 = 0x3ffffffff;
  uStack_220 = 0x3ffffffff;
  uStack_208 = 0x3ffffffff;
  uStack_210 = 0x3ffffffff;
  puVar7 = (uint *)(puVar6 + 4);
  do {
    if (lVar12 == 0x20) {
      extraout_x8[1] = uStack_218;
      *extraout_x8 = uStack_220;
      extraout_x8[3] = uStack_208;
      extraout_x8[2] = uStack_210;
      return pbVar3;
    }
    uVar2 = puVar7[-1];
    if ((int)uVar2 < 0) {
      uVar8 = 0;
      uVar2 = 0xffffffff;
    }
    else {
      uVar8 = *puVar7;
      iVar10 = *(int *)(pbVar9 + (ulong)uVar2 * 4);
      switch(iVar10) {
      case 1:
code_r0x0001083aacb0:
        if (uVar8 != 0) {
LAB_1083aad08:
          extraout_x8[1] = 0x3ffffffff;
          *extraout_x8 = 0x3ffffffff;
          extraout_x8[3] = 0x3ffffffff;
          extraout_x8[2] = 0x3ffffffff;
          return pbVar3;
        }
        break;
      case 2:
      case 4:
      case 5:
      case 6:
        goto LAB_1083aad08;
      case 3:
        if (1 < uVar8) goto LAB_1083aad08;
        break;
      case 7:
        if (2 < uVar8) goto LAB_1083aad08;
        break;
      case 8:
        if (uVar8 != 0) goto LAB_1083aad08;
code_r0x0001083aace4:
        uVar8 = 3;
        break;
      default:
        if (iVar10 == 0xf) {
          if (3 < uVar8) goto LAB_1083aad08;
        }
        else {
          if (iVar10 != 0x18) {
            if (iVar10 != 0x10) goto LAB_1083aad08;
            goto code_r0x0001083aacb0;
          }
          if (uVar8 != 0) {
            if (uVar8 != 1) goto LAB_1083aad08;
            goto code_r0x0001083aace4;
          }
        }
      }
    }
    *(uint *)((long)&uStack_220 + lVar12) = uVar2;
    *(uint *)((long)&uStack_220 + lVar12 + 4) = uVar8;
    puVar7 = puVar7 + 2;
    lVar12 = lVar12 + 8;
  } while( true );
}



/* Entry: 1083ab128; end: 1083ab15f;  */

byte * FUN_1083ab128(byte *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined8 *extraout_x8;
  undefined *puVar5;
  uint *puVar6;
  uint uVar7;
  byte *pbVar8;
  long lVar9;
  byte bVar10;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  byte bStack_79;
  byte abStack_78 [4];
  int aiStack_74 [7];
  long lStack_58;
  
  if (*(int *)(param_1 + 8) == 0) {
    if (param_2 != (undefined8 *)0x0) {
      for (lVar9 = 0; (int)lVar9 != 0x20; lVar9 = lVar9 + 8) {
        *(undefined8 *)((long)param_2 + lVar9) = 0;
      }
    }
    return (byte *)0x0;
  }
  pbVar3 = param_1 + 0x80;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(int *)(param_1 + 8) == 0) {
    pbVar8 = (byte *)0x0;
    pbVar4 = pbVar3;
  }
  else {
    bStack_79 = 1;
    pbVar4 = abStack_78;
    func_0x0001082e438c();
    uVar2 = (uint)param_1;
    pbVar8 = (byte *)0x0;
    bVar10 = 1;
    for (lVar9 = 0; (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) << 3 != lVar9;
        lVar9 = lVar9 + 8) {
      pbVar4 = *(byte **)(pbVar3 + lVar9);
      param_1 = &bStack_79;
      func_0x000108154764(param_1,pbVar4,(long)*(int *)((long)aiStack_74 + lVar9));
      if (param_2 != (undefined8 *)0x0) {
        *(byte **)((long)param_2 + lVar9) = param_1;
      }
      bVar10 = 0;
      if (pbVar8 <= param_1 + (long)pbVar8) {
        bVar10 = bStack_79;
      }
      bStack_79 = bVar10;
      pbVar8 = param_1 + (long)pbVar8;
      bVar10 = bStack_79;
    }
    if (param_2 == (undefined8 *)0x0) {
      if ((bVar10 & 1) == 0) {
        pbVar8 = (byte *)0xffffffffffffffff;
      }
    }
    else if ((bVar10 & 1) == 0) {
      pbVar8 = (byte *)0xffffffffffffffff;
      if ((int)uVar2 < 4) {
        do {
          *param_2 = 0xffffffffffffffff;
          param_2 = param_2 + 1;
        } while( true );
      }
    }
    else {
      for (lVar9 = (long)(int)uVar2; lVar9 < 4; lVar9 = lVar9 + 1) {
        param_2[lVar9] = 0;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pbVar8;
  }
  ___stack_chk_fail();
  pbVar3 = (byte *)(ulong)*(uint *)(param_1 + 8);
  switch(pbVar3) {
  case (byte *)0x0:
    extraout_x8[1] = 0x3ffffffff;
    *extraout_x8 = 0x3ffffffff;
    extraout_x8[3] = 0x3ffffffff;
    extraout_x8[2] = 0x3ffffffff;
    return pbVar3;
  case (byte *)0x1:
    puVar5 = &UNK_10df1ea84;
    break;
  case (byte *)0x2:
    puVar5 = &UNK_10df1eaa4;
    break;
  case (byte *)0x3:
    puVar5 = &UNK_10df1eac4;
    break;
  case (byte *)0x4:
    puVar5 = &UNK_10df1eae4;
    break;
  case (byte *)0x5:
    puVar5 = &UNK_10df1eb04;
    break;
  case (byte *)0x6:
    puVar5 = &UNK_10df1eb24;
    break;
  case (byte *)0x7:
    puVar5 = &UNK_10df1eb44;
    break;
  case (byte *)0x8:
    puVar5 = &UNK_10df1eb64;
    break;
  case (byte *)0x9:
    puVar5 = &UNK_10df1eb84;
    break;
  case (byte *)0xa:
    puVar5 = &UNK_10df1eba4;
    break;
  case (byte *)0xb:
    puVar5 = &UNK_10df1ebc4;
    break;
  case (byte *)0xc:
    puVar5 = &UNK_10df1ebe4;
    break;
  default:
    puVar5 = (undefined *)0x0;
  }
  lVar9 = 0;
  uStack_98 = 0x3ffffffff;
  uStack_a0 = 0x3ffffffff;
  uStack_88 = 0x3ffffffff;
  uStack_90 = 0x3ffffffff;
  puVar6 = (uint *)(puVar5 + 4);
  do {
    if (lVar9 == 0x20) {
      extraout_x8[1] = uStack_98;
      *extraout_x8 = uStack_a0;
      extraout_x8[3] = uStack_88;
      extraout_x8[2] = uStack_90;
      return pbVar3;
    }
    uVar2 = puVar6[-1];
    if ((int)uVar2 < 0) {
      uVar7 = 0;
      uVar2 = 0xffffffff;
    }
    else {
      uVar7 = *puVar6;
      iVar1 = *(int *)(pbVar4 + (ulong)uVar2 * 4);
      switch(iVar1) {
      case 1:
code_r0x0001083aacb0:
        if (uVar7 != 0) {
LAB_1083aad08:
          extraout_x8[1] = 0x3ffffffff;
          *extraout_x8 = 0x3ffffffff;
          extraout_x8[3] = 0x3ffffffff;
          extraout_x8[2] = 0x3ffffffff;
          return pbVar3;
        }
        break;
      case 2:
      case 4:
      case 5:
      case 6:
        goto LAB_1083aad08;
      case 3:
        if (1 < uVar7) goto LAB_1083aad08;
        break;
      case 7:
        if (2 < uVar7) goto LAB_1083aad08;
        break;
      case 8:
        if (uVar7 != 0) goto LAB_1083aad08;
code_r0x0001083aace4:
        uVar7 = 3;
        break;
      default:
        if (iVar1 == 0xf) {
          if (3 < uVar7) goto LAB_1083aad08;
        }
        else {
          if (iVar1 != 0x18) {
            if (iVar1 != 0x10) goto LAB_1083aad08;
            goto code_r0x0001083aacb0;
          }
          if (uVar7 != 0) {
            if (uVar7 != 1) goto LAB_1083aad08;
            goto code_r0x0001083aace4;
          }
        }
      }
    }
    *(uint *)((long)&uStack_a0 + lVar9) = uVar2;
    *(uint *)((long)&uStack_a0 + lVar9 + 4) = uVar7;
    puVar6 = puVar6 + 2;
    lVar9 = lVar9 + 8;
  } while( true );
}



/* Entry: 1083ab160; end: 1083ab257;  */

bool FUN_1083ab160(long param_1,long param_2,long *param_3)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != 0) {
    lVar5 = param_1;
    func_0x0001082b7404();
    lVar6 = param_1 + 0x20;
    uVar4 = (uint)lVar5;
    plVar2 = (long *)(param_1 + 0x80);
    plVar3 = param_3;
    for (uVar7 = (ulong)(uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)); uVar7 != 0; uVar7 = uVar7 - 1)
    {
      lVar5 = *plVar2;
      *plVar3 = param_2;
      plVar3[1] = lVar5;
      func_0x000108152830(plVar3 + 2,lVar6);
      param_2 = param_2 + plVar3[1] * (long)*(int *)((long)plVar3 + 0x24);
      plVar3 = plVar3 + 5;
      lVar6 = lVar6 + 0x18;
      plVar2 = plVar2 + 1;
    }
    param_3 = param_3 + (long)(int)uVar4 * 5;
    for (lVar6 = (long)(int)uVar4; lVar6 < 4; lVar6 = lVar6 + 1) {
      uStack_60 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      FUN_10827c3e4(param_3,&uStack_80);
      FUN_10810a400(&uStack_70);
      param_3 = param_3 + 5;
    }
  }
  return iVar1 != 0;
}



/* Entry: 1083ab258; end: 1083ab277;  */

bool FUN_1083ab258(long param_1,ulong *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar2 = *(uint *)(param_1 + 8);
  if (uVar2 == 0) {
    return false;
  }
  iVar3 = *(int *)(param_1 + 0xa0);
  uVar4 = uVar2;
  FUN_1081a6298();
  uVar1 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
  uVar6 = 0;
  do {
    uVar7 = uVar1;
    if (uVar1 == uVar6) break;
    uVar5 = uVar2;
    func_0x0001081a62b4(uVar2,uVar6);
    uVar7 = uVar6;
    uVar6 = uVar6 + 1;
  } while ((*param_2 >> ((long)iVar3 + -4 + (long)(int)uVar5 * 4 & 0x3fU) & 1) != 0);
  return (int)uVar4 <= (int)uVar7;
}



/* Entry: 1083ab278; end: 1083ab357;  */

undefined8 *
FUN_1083ab278(long param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4,undefined8 *param_5
             )

{
  undefined1 in_ZR;
  undefined4 uVar1;
  undefined8 extraout_x8;
  long lVar2;
  undefined8 *unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 auStack_d8 [20];
  undefined8 uStack_38;
  
  func_0x0001083ab4c4();
  uStack_38 = extraout_x8;
  if (*(int *)(param_2 + 1) == 0) {
    func_0x0001083ab4f0();
    *(undefined8 *)(param_1 + 0xb8) = 0x10000001c;
    *(undefined4 *)(param_1 + 0xc4) = 0;
  }
  else {
    unaff_x22 = auStack_d8;
    _bzero(auStack_d8,0xa0);
    FUN_1083ab160(param_2,param_3,auStack_d8);
    param_4 = (ulong)*(uint *)(param_2 + 0x14);
    param_5 = auStack_d8;
    FUN_1083ab358(param_1,param_2,param_4,param_5);
    lVar2 = 0x88;
    param_3 = param_2;
    do {
      param_2 = (undefined8 *)((long)auStack_d8 + lVar2);
      FUN_10810a400();
      lVar2 = lVar2 + -0x28;
    } while (lVar2 != -0x18);
    in_ZR = 1;
  }
  func_0x0001083ab4b0(uStack_38);
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  lVar2 = 0x88;
  do {
    FUN_10810a400((long)unaff_x22 + lVar2);
    uVar1 = (undefined4)param_4;
    lVar2 = lVar2 + -0x28;
  } while (lVar2 != -0x18);
  __Unwind_Resume();
  func_0x0001083ab4dc();
  uVar4 = param_3[1];
  uVar3 = *param_3;
  uVar5 = param_3[2];
  param_2[0x18] = param_3[3];
  param_2[0x17] = uVar5;
  param_2[0x16] = uVar4;
  param_2[0x15] = uVar3;
  *(undefined4 *)(param_2 + 0x19) = uVar1;
  func_0x0001082b7404(param_3);
  FUN_1083ab3d0(param_5,param_3,param_2);
  return param_2;
}



/* Entry: 1083ab358; end: 1083ab3cf;  */

long FUN_1083ab358(long param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x0001083ab4dc();
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = param_2[2];
  *(undefined8 *)(param_1 + 0xc0) = param_2[3];
  *(undefined8 *)(param_1 + 0xb8) = uVar3;
  *(undefined8 *)(param_1 + 0xb0) = uVar2;
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
  *(undefined4 *)(param_1 + 200) = param_3;
  func_0x0001082b7404(param_2);
  FUN_1083ab3d0(param_4,param_2,param_1);
  return param_1;
}



/* Entry: 1083ab3d0; end: 1083ab3ef;  */

long FUN_1083ab3d0(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = param_1 + (long)param_2 * 0x28;
  FUN_1083ab428(param_1,lVar1);
  return lVar1;
}



/* Entry: 1083ab3f0; end: 1083ab427;  */

void FUN_1083ab3f0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0x10000001c;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}



/* Entry: 1083ab428; end: 1083ab453;  */

void FUN_1083ab428(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  FUN_1083ab454(&uStack_11,param_1,param_2,param_3);
  return;
}



/* Entry: 1083ab454; end: 1083ab4af;  */

undefined1  [16] FUN_1083ab454(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 0x28) {
    FUN_1082b0634(lVar1,param_2);
    lVar1 = lVar1 + 0x28;
    param_4 = param_4 + 0x28;
  }
  auVar2._8_8_ = param_4;
  auVar2._0_8_ = param_3;
  return auVar2;
}



/* Entry: 1083ab4b0; end: 1083ab503;  */

void FUN_1083ab4b0(void)

{
  return;
}



/* Entry: 1083ab504; end: 1083ab5cb;  */

undefined8 FUN_1083ab504(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 auStack_128 [32];
  undefined1 auStack_108 [184];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  _bzero(auStack_108,0xb8);
  uStack_48 = 0;
  uStack_50 = 0x10000001c;
  FUN_1083ab5cc(auStack_128,param_1);
  if (param_3 == (undefined1 *)0x0) {
    param_3 = auStack_128;
    FUN_108392374(param_3,FUN_1083ab60c,auStack_108);
  }
  else {
    FUN_108391b50(param_3,auStack_128,FUN_1083ab60c,auStack_108);
  }
  if (((ulong)param_3 & 1) == 0) {
    uStack_38 = 0;
  }
  else {
    FUN_1083ab66c(param_2,auStack_108);
  }
  FUN_1081527b0(auStack_108);
  return uStack_38;
}



/* Entry: 1083ab5cc; end: 1083ab60b;  */

long FUN_1083ab5cc(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x18) = param_2;
  FUN_108391a80(param_1,0x113827100,(ulong)param_2 | 0x626d617000000000,4);
  return param_1;
}



/* Entry: 1083ab60c; end: 1083ab66b;  */

bool FUN_1083ab60c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x108);
  FUN_1082a63ac(lVar1);
  lVar2 = *(long *)(lVar1 + 0x20);
  if (lVar2 == 0) {
    func_0x0001082a61d0(lVar1);
  }
  else {
    *(long *)(param_2 + 0xd0) = lVar1;
    FUN_1083ab66c(param_2,param_1 + 0x38);
  }
  return lVar2 != 0;
}



/* Entry: 1083ab66c; end: 1083ab6b3;  */

long FUN_1083ab66c(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_1083ab7cc();
  func_0x0001082b6edc(param_1 + 0xa0,param_2 + 0xa0);
  uVar1 = *(undefined4 *)(param_2 + 200);
  uVar3 = *(undefined8 *)(param_2 + 0xc0);
  uVar2 = *(undefined8 *)(param_2 + 0xb8);
  uVar4 = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xa8) = uVar4;
  *(undefined8 *)(param_1 + 0xc0) = uVar3;
  *(undefined8 *)(param_1 + 0xb8) = uVar2;
  *(undefined4 *)(param_1 + 200) = uVar1;
  return param_1;
}



/* Entry: 1083ab6b4; end: 1083ab753;  */

void FUN_1083ab6b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  FUN_1083ab5cc(auStack_50,param_1);
  uVar1 = 0x110;
  __Znwm(0x110);
  if (param_4 == 0) {
    func_0x0001083ab894();
    FUN_1083923d8(uVar1,0);
  }
  else {
    func_0x0001083ab894();
    FUN_108391edc(param_4,uVar1,0);
  }
  return;
}



/* Entry: 1083ab754; end: 1083ab7cb;  */

void FUN_1083ab754(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x0001083ab8bc();
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = param_2[2];
  *(undefined8 *)(param_1 + 0x30) = param_2[3];
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  _bzero(param_1 + 0x38,0xb8);
  *(undefined8 *)(unaff_x19 + 0xf8) = 0;
  *(undefined8 *)(unaff_x19 + 0xf0) = 0x10000001c;
  *(undefined8 *)(unaff_x19 + 0x108) = param_3;
  FUN_1083ab66c(unaff_x19 + 0x38,param_4);
  FUN_108331b54(*(undefined8 *)(unaff_x19 + 0x108));
  return;
}



/* Entry: 1083ab7cc; end: 1083ab80f;  */

long FUN_1083ab7cc(long param_1,long param_2)

{
  long lVar1;
  
  for (lVar1 = 0; lVar1 != 0xa0; lVar1 = lVar1 + 0x28) {
    FUN_1082b0634(param_1 + lVar1,param_2 + lVar1);
  }
  return param_1;
}



/* Entry: 1083ab810; end: 1083ab83f;  */

void FUN_1083ab810(long param_1)

{
  long unaff_x19;
  
  func_0x0001083ab8bc();
  func_0x000108331be4(*(undefined8 *)(param_1 + 0x108));
  FUN_1081527b0(unaff_x19 + 0x38);
  return;
}



/* Entry: 1083ab840; end: 1083ab853;  */

void FUN_1083ab840(void)

{
  FUN_1083ab810();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083ab854; end: 1083ab8cf;  */

long FUN_1083ab854(long param_1)

{
  return param_1 + 0x18;
}



/* Entry: 1083ab8d0; end: 1083abb13;  */

void FUN_1083ab8d0(undefined8 param_1,ulong param_2,long *param_3,long *param_4,long *param_5)

{
  int iVar1;
  ulong *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *extraout_x8;
  float fVar6;
  ulong uVar7;
  ulong uStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined4 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined2 uStack_a0;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  ulong uStack_70;
  ulong uStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar1 = (int)param_3[5];
  if (iVar1 != 2) {
    if (iVar1 == 1) {
      lStack_c8 = 0;
      uStack_d0 = 0x3f800000;
      puStack_b8 = (undefined4 *)0x0;
      lStack_c0 = 0x3f800000;
      uStack_b0 = 0x103f800000;
      func_0x00010837de4c(param_1,param_5,&uStack_d0,3);
      puVar2 = (ulong *)param_5;
      if ((int)param_5 != 0) {
        FUN_10837915c(param_4,param_3 + 2,&uStack_d0,0);
        puVar2 = (ulong *)param_4;
      }
    }
    else {
      puVar2 = (ulong *)param_3;
      if ((iVar1 == 0) &&
         (FUN_10837de3c(param_1,param_5,&uStack_d0,0), puVar2 = (ulong *)param_5, (int)param_5 != 0)
         ) {
        param_2 = uStack_d0 >> 0x20;
        func_0x0001083790f8(uStack_d0 & 0xffffffff,param_4,param_3 + 2,0);
        puVar2 = (ulong *)param_4;
      }
    }
LAB_1083ab998:
    uVar7 = (ulong)*(uint *)(param_3 + 4);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
      ___stack_chk_fail();
      fVar6 = (float)uVar7;
      if (((fVar6 <= 0.0) || (NAN((fVar6 - fVar6) * (float)param_2))) ||
         (*(int *)(*puVar2 + 0x48) == 0)) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0x30;
        __Znwm();
        FUN_1083abe6c(uVar7,param_2);
      }
      *extraout_x8 = uVar4;
      return;
    }
    return;
  }
  lVar5 = param_3[2];
  uStack_d0 = *(ulong *)(lVar5 + 0x28);
  lStack_c8 = *(long *)(lVar5 + 0x40);
  lStack_c0 = lStack_c8 + *(int *)(lVar5 + 0x48);
  puStack_b8 = (undefined4 *)0x0;
  if (*(long *)(lVar5 + 0x58) != 0) {
    puStack_b8 = (undefined4 *)(*(long *)(lVar5 + 0x58) + -4);
  }
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
LAB_1083aba18:
  puVar2 = &uStack_d0;
  FUN_108379cc8(&uStack_d0,auStack_78);
  switch((ulong)puVar2 & 0xffffffff) {
  case 0:
    puVar3 = auStack_90;
    FUN_1083ac034(puVar3,auStack_78,1);
    if ((int)puVar3 != 0) {
      func_0x00010817abbc(param_4,auStack_90);
    }
    goto LAB_1083aba18;
  case 1:
    uStack_68 = uStack_70;
    param_2 = uStack_70;
    uStack_70 = CONCAT44((auStack_78._4_4_ + (float)(uStack_70 >> 0x20)) * 0.5,
                         (auStack_78._0_4_ + (float)uStack_70) * 0.5);
    break;
  case 3:
    puVar3 = auStack_90;
    FUN_1083ac034(puVar3,&uStack_70,2);
    if ((int)puVar3 != 0) {
      FUN_1081f770c(*puStack_b8,param_4,auStack_90,auStack_88);
    }
    goto LAB_1083aba18;
  case 4:
    puVar3 = auStack_90;
    FUN_1083ac034(puVar3,&uStack_70,3);
    if ((int)puVar3 != 0) {
      func_0x00010817abc4(param_4,auStack_90,auStack_88,auStack_80);
    }
    goto LAB_1083aba18;
  case 5:
    goto code_r0x0001083abb04;
  case 6:
    goto LAB_1083ab998;
  default:
    goto LAB_1083aba18;
  }
  puVar3 = auStack_90;
  FUN_1083ac034(puVar3,&uStack_70,2);
  if ((int)puVar3 != 0) {
    FUN_1081f7aa0(param_4,auStack_90,auStack_88);
  }
  goto LAB_1083aba18;
code_r0x0001083abb04:
  FUN_108377ec8(param_4);
  goto LAB_1083aba18;
}



/* Entry: 1083abb14; end: 1083abbaf;  */

void FUN_1083abb14(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  float fVar2;
  
  fVar2 = (float)param_2;
  if (((fVar2 <= 0.0) || (NAN((fVar2 - fVar2) * (float)param_3))) ||
     (*(int *)(*param_4 + 0x48) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x30;
    __Znwm();
    FUN_1083abe6c(param_2,param_3);
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 1083abbb0; end: 1083abbb3;  */

undefined8 * FUN_1083abbb0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a40a68;
  FUN_10837ca38(param_1 + 2);
  return param_1;
}



/* Entry: 1083abbb4; end: 1083abbc7;  */

void FUN_1083abbb4(void)

{
  FUN_1083abf28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083abbc8; end: 1083abbdf;  */

code * FUN_1083abbc8(void)

{
  return FUN_1083abf58;
}



/* Entry: 1083abbe0; end: 1083abc4b;  */

void FUN_1083abbe0(long param_1,long *param_2)

{
  (**(code **)(*param_2 + 0x28))(*(undefined4 *)(param_1 + 0x20),param_2);
  (**(code **)(*param_2 + 200))(param_2,param_1 + 0x10);
  (**(code **)(*param_2 + 0x28))(*(undefined4 *)(param_1 + 0x24),param_2);
                    /* WARNING: Could not recover jumptable at 0x0001083abc48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x48))(param_2,*(undefined4 *)(param_1 + 0x28));
  return;
}



/* Entry: 1083abc4c; end: 1083abd53;  */

undefined8 FUN_1083abc4c(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_50 [8];
  long lStack_48;
  
  *(undefined4 *)(param_4 + 4) = 0xbf800000;
  *(uint *)(param_4 + 0xc) = *(uint *)(param_4 + 0xc) & 0x7fffffff;
  FUN_10837dd94(0x3f800000,auStack_50,param_3,0);
  do {
    if (lStack_48 == 0) {
      fVar6 = 0.0;
    }
    else {
      fVar6 = *(float *)(lStack_48 + 0x40);
    }
    uVar2 = (ulong)(uint)fVar6;
    (**(code **)(*param_1 + 0x60))(param_1);
    uVar4 = 0xfffe795f;
    do {
      fVar7 = (float)uVar2;
      if (fVar6 <= fVar7) break;
      bVar1 = 0xfffffffe < uVar4;
      uVar4 = uVar4 + 1;
      if (bVar1) {
        uVar3 = 0;
        goto LAB_1083abd18;
      }
      fVar5 = fVar7;
      (**(code **)(*param_1 + 0x68))(param_1,param_2,auStack_50);
      uVar2 = (ulong)(uint)(fVar7 + fVar5);
    } while (0.0 < fVar5);
    uVar2 = 0;
    FUN_10837de6c();
    if ((uVar2 & 1) == 0) {
      uVar3 = 1;
LAB_1083abd18:
      FUN_10837de14(auStack_50);
      return uVar3;
    }
  } while( true );
}



/* Entry: 1083abd54; end: 1083abd63;  */

undefined8 FUN_1083abd54(void)

{
  return 0;
}



/* Entry: 1083abd64; end: 1083abe6b;  */

bool FUN_1083abd64(float param_1,long param_2,long param_3,ulong param_4,undefined8 param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uStack_a0;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  float fStack_70;
  float fStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  param_4 = param_4 & 0xffffffff;
  for (uVar2 = 0; uVar3 = param_4, param_4 != uVar2; uVar2 = uVar2 + 1) {
    uVar5 = *(undefined8 *)(param_3 + uVar2 * 8);
    fVar4 = (float)uVar5;
    uVar1 = param_5;
    FUN_10837de3c(param_1 + fVar4,param_5,&uStack_68,&fStack_70);
    uVar3 = uVar2;
    if ((int)uVar1 == 0) break;
    fStack_94 = -fStack_6c;
    fStack_98 = fStack_70;
    fStack_84 = (1.0 - fStack_70) * 0.0;
    fStack_90 = fStack_84 + fStack_6c * 0.0;
    fStack_8c = fStack_6c;
    fStack_84 = fStack_84 - fStack_6c * 0.0;
    fStack_88 = fStack_70;
    uStack_80 = 0;
    uStack_78 = 0xc03f800000;
    uStack_a0 = uVar5;
    FUN_108363df0(-fVar4,0,&fStack_98);
    FUN_108363ef4(uStack_68,uStack_64,&fStack_98);
    FUN_1083645e0(&fStack_98,param_2,&uStack_a0,1);
    param_2 = param_2 + 8;
  }
  return param_4 <= uVar3;
}



/* Entry: 1083abe6c; end: 1083abf27;  */

undefined8 *
FUN_1083abe6c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined4 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  *(undefined4 *)(param_3 + 1) = 1;
  *param_3 = &PTR_FUN_110a40a68;
  func_0x000108376b14(param_3 + 2);
  func_0x0001083773e0(param_3 + 2);
  func_0x0001083772e0(param_3 + 2);
  fVar2 = (float)param_2;
  fVar3 = (float)param_1;
  if (0.0 <= fVar2) {
    _fmodf(param_2,param_1);
    fVar1 = (float)param_2;
    if (fVar2 <= fVar3) {
      fVar1 = fVar2;
    }
    fVar2 = fVar3 - fVar1;
  }
  else {
    fVar2 = -fVar2;
    if (fVar3 < fVar2) {
      _fmodf(fVar2,param_1);
    }
  }
  if (fVar3 <= fVar2) {
    fVar2 = 0.0;
  }
  *(float *)(param_3 + 4) = fVar3;
  *(float *)((long)param_3 + 0x24) = fVar2;
  *(undefined4 *)(param_3 + 5) = param_5;
  return param_3;
}



/* Entry: 1083abf28; end: 1083abf57;  */

undefined8 * FUN_1083abf28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a40a68;
  FUN_10837ca38(param_1 + 2);
  return param_1;
}



/* Entry: 1083abf58; end: 1083ac033;  */

void FUN_1083abf58(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  undefined8 auStack_40 [2];
  
  func_0x00010838a5c4();
  uVar2 = param_2;
  FUN_108376ad8(auStack_40);
  func_0x00010838a66c(param_3,auStack_40);
  func_0x00010838a5c4(param_3);
  puVar1 = param_3;
  func_0x00010838a560();
  if ((uint)puVar1 < 3) {
    if ((*(byte *)((long)param_3 + 0xa1) & 1) == 0) {
      FUN_1083abb14(&uStack_48,param_2,uVar2,auStack_40,puVar1);
      uVar2 = uStack_48;
      goto LAB_1083abff4;
    }
  }
  else if ((*(byte *)((long)param_3 + 0xa1) & 1) == 0) {
    uVar2 = 0;
    *param_3 = param_3[1];
    *(undefined1 *)((long)param_3 + 0xa1) = 1;
    goto LAB_1083abff4;
  }
  uVar2 = 0;
LAB_1083abff4:
  uStack_48 = 0;
  *param_1 = uVar2;
  func_0x000108115b70(&uStack_48);
  FUN_10837ca5c(auStack_40[0]);
  return;
}



/* Entry: 1083ac034; end: 1083ac047;  */

bool FUN_1083ac034(long param_1,long param_2,ulong param_3)

{
  int iVar1;
  int unaff_w21;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  undefined8 uVar5;
  float unaff_s8;
  undefined8 uStack_a0;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  float fStack_70;
  float fStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  param_3 = param_3 & 0xffffffff;
  for (uVar2 = 0; uVar3 = param_3, param_3 != uVar2; uVar2 = uVar2 + 1) {
    uVar5 = *(undefined8 *)(param_2 + uVar2 * 8);
    fVar4 = (float)uVar5;
    iVar1 = unaff_w21;
    FUN_10837de3c(unaff_s8 + fVar4);
    uVar3 = uVar2;
    if (iVar1 == 0) break;
    fStack_94 = -fStack_6c;
    fStack_98 = fStack_70;
    fStack_84 = (1.0 - fStack_70) * 0.0;
    fStack_90 = fStack_84 + fStack_6c * 0.0;
    fStack_8c = fStack_6c;
    fStack_84 = fStack_84 - fStack_6c * 0.0;
    fStack_88 = fStack_70;
    uStack_80 = 0;
    uStack_78 = 0xc03f800000;
    uStack_a0 = uVar5;
    FUN_108363df0(-fVar4,0,&fStack_98);
    FUN_108363ef4(uStack_68,uStack_64,&fStack_98);
    FUN_1083645e0(&fStack_98,param_1,&uStack_a0,1);
    param_1 = param_1 + 8;
  }
  return param_3 <= uVar3;
}



/* Entry: 1083ac048; end: 1083ac217;  */

void FUN_1083ac048(undefined8 *param_1,float param_2,float param_3,float param_4,undefined8 *param_5
                  )

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar5;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 uVar6;
  undefined1 in_register_00005003;
  undefined1 uVar7;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b4 [4];
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  int iStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  uint auStack_90 [14];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (NAN(((float)CONCAT13(in_register_00005003,
                           CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0))) -
          (float)CONCAT13(in_register_00005003,
                          CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0)))) *
          param_2 * param_3 * param_4)) {
    *param_1 = 0;
  }
  else {
    uVar4 = 0;
    uStack_98 = 0;
    auStack_90[6] = 0;
    uStack_a0 = 0x3f80000000000000;
    auStack_90[0] = 1;
    auStack_90[1] = 0;
    auStack_90[2] = 0;
    auStack_90[3] = 0x3f800000;
    auStack_90[4] = 0;
    auStack_90[5] = 2;
    auStack_90[9] = 0;
    auStack_90[10] = 0;
    auStack_90[7] = 0;
    auStack_90[8] = 0;
    while( true ) {
      bVar1 = 0x3b < uVar4;
      bVar2 = uVar4 == 0x3c;
      if (bVar2) break;
      FUN_1083ac218();
      lVar5 = extraout_x8;
      if ((((!bVar1 || bVar2) && (FUN_1083ac218(), lVar5 = extraout_x8_00, !bVar1 || bVar2)) &&
          (FUN_1083ac218(), lVar5 = extraout_x8_01, !bVar1 || bVar2)) &&
         (FUN_1083ac218(), lVar5 = extraout_x8_02, !bVar1 || bVar2)) {
        param_5 = (undefined8 *)(ulong)*(uint *)((long)auStack_90 + extraout_x8_02);
        FUN_108333b64(param_1,param_5);
        goto LAB_1083ac19c;
      }
      uVar4 = lVar5 + 0x14;
    }
    uVar3 = 0x20c;
    FUN_10835c894(0x20c);
    uVar6 = 0;
    uVar7 = 0;
    if ((int)param_5 == 0) {
      uVar6 = 0x80;
      uVar7 = 0x3f;
    }
    iStack_a4 = (uint)CONCAT11(uVar7,uVar6) << 0x10;
    fStack_b0 = param_2;
    fStack_ac = param_3;
    fStack_a8 = param_4;
    FUN_108346318(&uStack_c8,auStack_b4,0x14);
    uStack_c0 = uStack_c8;
    uStack_c8 = 0;
    FUN_108394928(param_1,uVar3,&uStack_c0,0,0);
    FUN_108154c48(&uStack_c0);
    param_5 = &uStack_c8;
    func_0x0001078bddf8(param_5);
  }
LAB_1083ac19c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    FUN_108154c48(&uStack_c0);
    func_0x0001078bddf8(&uStack_c8);
    __Unwind_Resume(param_5);
    return;
  }
  return;
}



/* Entry: 1083ac218; end: 1083ac22f;  */

void FUN_1083ac218(void)

{
  return;
}



/* Entry: 1083ac230; end: 1083ac283;  */

void FUN_1083ac230(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *unaff_x19;
  
  func_0x0001083ac444();
  *unaff_x19 = param_1;
  unaff_x19[6] = param_2;
  unaff_x19[0xc] = param_3;
  unaff_x19[0x12] = param_4;
  return;
}



/* Entry: 1083ac284; end: 1083ac3a3;  */

void FUN_1083ac284(float param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  float *pfVar1;
  undefined1 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  float *pfVar6;
  uint uVar7;
  float *pfVar8;
  float *unaff_x19;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_68 [80];
  long lStack_18;
  
  uVar3 = 0;
  uVar7 = 0;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = auStack_68;
  if (param_4 != param_2 && param_3 != param_2) {
    puVar2 = param_2;
  }
  for (; uVar3 < 0x14; uVar3 = uVar3 + 5) {
    pfVar1 = (float *)(param_3 + uVar3 * 4);
    lVar4 = (ulong)uVar7 << 0x20;
    pfVar6 = (float *)(param_4 + 0x28);
    pfVar8 = (float *)(puVar2 + (long)(int)uVar7 * 4);
    for (lVar5 = -1; lVar5 != -5; lVar5 = lVar5 + -1) {
      *pfVar8 = pfVar1[1] * pfVar6[-5] + pfVar6[-10] * *pfVar1 + *pfVar6 * pfVar1[2] +
                pfVar6[5] * pfVar1[3];
      lVar4 = lVar4 + 0x100000000;
      pfVar6 = pfVar6 + 1;
      pfVar8 = pfVar8 + 1;
    }
    param_1 = pfVar1[1] * *(float *)(param_4 + 0x24) + *(float *)(param_4 + 0x10) * *pfVar1 +
              *(float *)(param_4 + 0x38) * pfVar1[2] + *(float *)(param_4 + 0x4c) * pfVar1[3] +
              pfVar1[4];
    uVar7 = uVar7 + 5;
    *(float *)(puVar2 + (lVar4 >> 0x1e)) = param_1;
  }
  if (puVar2 != param_2) {
    _memmove(param_2,puVar2,0x50);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001083ac444();
  fVar9 = 1.0 - param_1;
  fVar10 = fVar9 * 0.213;
  fVar11 = fVar9 * 0.715;
  fVar9 = fVar9 * 0.072;
  *unaff_x19 = param_1 + fVar10;
  unaff_x19[1] = fVar11;
  unaff_x19[2] = fVar9;
  unaff_x19[5] = fVar10;
  unaff_x19[6] = param_1 + fVar11;
  unaff_x19[7] = fVar9;
  unaff_x19[10] = fVar10;
  unaff_x19[0xb] = fVar11;
  unaff_x19[0xc] = param_1 + fVar9;
  unaff_x19[0x12] = 1.0;
  return;
}



/* Entry: 1083ac3a4; end: 1083ac42b;  */

void FUN_1083ac3a4(float param_1)

{
  float *unaff_x19;
  float fVar1;
  float fVar2;
  float fVar3;
  
  func_0x0001083ac444();
  fVar1 = 1.0 - param_1;
  fVar2 = fVar1 * 0.213;
  fVar3 = fVar1 * 0.715;
  fVar1 = fVar1 * 0.072;
  *unaff_x19 = param_1 + fVar2;
  unaff_x19[1] = fVar3;
  unaff_x19[2] = fVar1;
  unaff_x19[5] = fVar2;
  unaff_x19[6] = param_1 + fVar3;
  unaff_x19[7] = fVar1;
  unaff_x19[10] = fVar2;
  unaff_x19[0xb] = fVar3;
  unaff_x19[0xc] = param_1 + fVar1;
  unaff_x19[0x12] = 1.0;
  return;
}



/* Entry: 1083ac42c; end: 1083ac453;  */

void FUN_1083ac42c(undefined4 *param_1,long param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = *param_3;
    param_1 = param_1 + 1;
  }
  return;
}



/* Entry: 1083ac454; end: 1083ac4b7;  */

void FUN_1083ac454(undefined8 *param_1,float param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  
  bVar1 = true;
  if ((0.0 < param_2) && (bVar1 = true, !NAN(param_2 - param_2))) {
    bVar1 = false;
  }
  if (bVar1) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = (undefined8 *)0x10;
    __Znwm();
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &PTR_FUN_110a40b18;
    *(float *)((long)puVar2 + 0xc) = param_2;
  }
  *param_1 = puVar2;
  return;
}



/* Entry: 1083ac4b8; end: 1083ac4fb;  */

void FUN_1083ac4b8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  func_0x00010838a5c4();
  FUN_1083ac454(&uStack_28);
  uVar1 = uStack_28;
  uStack_28 = 0;
  *param_1 = uVar1;
  func_0x000108115b70(&uStack_28);
  return;
}



/* Entry: 1083ac4fc; end: 1083ac52f;  */

void FUN_1083ac4fc(void)

{
  return;
}



/* Entry: 1083ac530; end: 1083ac80b;  */

undefined8 FUN_1083ac530(long param_1,undefined8 param_2,long *param_3)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined4 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined2 uStack_c0;
  undefined8 uStack_b8;
  float fStack_b0;
  float fStack_ac;
  ulong uStack_a8;
  ulong uStack_a0;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (0.0 < *(float *)(param_1 + 0xc)) {
    lVar4 = *param_3;
    uStack_f0 = *(undefined8 *)(lVar4 + 0x28);
    lStack_e8 = *(long *)(lVar4 + 0x40);
    lStack_e0 = lStack_e8 + *(int *)(lVar4 + 0x48);
    puStack_d8 = (undefined4 *)0x0;
    if (*(long *)(lVar4 + 0x58) != 0) {
      puStack_d8 = (undefined4 *)(*(long *)(lVar4 + 0x58) + -4);
    }
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uVar10 = 0;
    uStack_f8 = 0;
    bVar1 = true;
    fVar9 = 0.0;
    fStack_110 = 0.0;
    puVar6 = (undefined8 *)0x6;
    fVar8 = 0.0;
    fVar13 = 0.0;
code_r0x0001083ac5e8:
    puVar3 = &uStack_f0;
    fVar7 = fStack_110;
    FUN_108379cc8(puVar3,&uStack_b8);
    iVar5 = (int)puVar6;
    fVar11 = fVar8;
    fVar12 = fVar13;
    switch((ulong)puVar3 & 0xffffffff) {
    case 0:
      if (iVar5 == 1) {
        func_0x0001083ac820();
      }
      iVar2 = (int)&uStack_f0;
      FUN_108379efc();
      if (iVar2 == 0) {
        func_0x0001083ac814();
        goto code_r0x0001083ac794;
      }
      bVar1 = false;
      uVar10 = uStack_b8;
      break;
    case 1:
      fVar13 = *(float *)(param_1 + 0xc);
      func_0x00010816bfdc(&uStack_b8,&fStack_b0);
      fStack_110 = fStack_b0 - (float)uStack_b8;
      fVar8 = (float)((ulong)uStack_b8 >> 0x20);
      if (fVar7 <= fVar13 + fVar13) {
        fStack_110 = fStack_110 * 0.5;
        fVar9 = (fStack_ac - fVar8) * 0.5;
      }
      else {
        fStack_110 = fStack_110 * (fVar13 / fVar7);
        fVar9 = (fStack_ac - fVar8) * (fVar13 / fVar7);
      }
      if (bVar1) {
        FUN_108377d1c(uStack_b8,fVar8,CONCAT44(fVar8 + fVar9,(float)uStack_b8 + fStack_110),
                      fVar8 + fVar9,param_2);
      }
      else {
        uStack_100 = CONCAT44((float)((ulong)uVar10 >> 0x20) + fVar9,(float)uVar10 + fStack_110);
        func_0x00010817abbc(param_2,&uStack_100);
      }
      if (fVar13 + fVar13 < fVar7) {
        FUN_108377c8c(fStack_b0 - fStack_110,fStack_ac - fVar9,param_2);
      }
      uStack_f8 = CONCAT44(fStack_ac,fStack_b0);
code_r0x0001083ac794:
      bVar1 = true;
      break;
    case 2:
      if (!bVar1) {
        func_0x0001083ac814();
      }
      FUN_1081f7aa0(param_2,&fStack_b0,&uStack_a8);
      uStack_f8 = uStack_a8;
      goto code_r0x0001083ac69c;
    case 3:
      if (!bVar1) {
        func_0x0001083ac814();
      }
      FUN_1081f770c(*puStack_d8,param_2,&fStack_b0,&uStack_a8);
      uStack_f8 = uStack_a8;
      goto code_r0x0001083ac69c;
    case 4:
      if (!bVar1) {
        func_0x0001083ac814();
      }
      func_0x00010817abc4(param_2,&fStack_b0,&uStack_a8,&uStack_a0);
      uStack_f8 = uStack_a0;
code_r0x0001083ac69c:
      bVar1 = true;
      fVar11 = 0.0;
      fVar12 = 0.0;
      break;
    case 5:
      if ((fVar13 != 0.0) || (fVar8 != 0.0)) {
        FUN_108377d1c(uStack_f8 & 0xffffffff,uStack_f8._4_4_,fVar13 + (float)uStack_f8,
                      fVar8 + uStack_f8._4_4_,param_2);
      }
      FUN_108377ec8(param_2);
      bVar1 = false;
      break;
    case 6:
      goto code_r0x0001083ac7b8;
    default:
      goto LAB_1083ac7b0;
    }
    puVar6 = puVar3;
    fVar8 = fVar9;
    fVar13 = fStack_110;
    if (iVar5 != 0) {
      fVar8 = fVar11;
      fVar13 = fVar12;
    }
    goto code_r0x0001083ac5e8;
  }
LAB_1083ac7b0:
  uVar10 = 0;
LAB_1083ac7c4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_98) {
    ___stack_chk_fail(uVar10);
    return 1;
  }
  return uVar10;
code_r0x0001083ac7b8:
  if (bVar1) {
    func_0x0001083ac820();
  }
  uVar10 = 1;
  goto LAB_1083ac7c4;
}



/* Entry: 1083ac80c; end: 1083ac82b;  */

undefined8 FUN_1083ac80c(void)

{
  return 1;
}



/* Entry: 1083ac82c; end: 1083ac8ef;  */

undefined8 * FUN_1083ac82c(undefined8 param_1,undefined8 *param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  
  *(undefined4 *)(param_2 + 1) = 1;
  *param_2 = &PTR_FUN_110a40ba0;
  *(undefined8 *)((long)param_2 + 0x1c) = 0xbf80000000000000;
  *(undefined8 *)((long)param_2 + 0x24) = 0;
  uVar1 = -(param_4 >> 0x1f & 1) & 0xfffffffc00000000 | (param_4 & 0xffffffff) << 2;
  FUN_108410808(uVar1,2);
  param_2[2] = uVar1;
  uVar3 = (uint)param_4;
  *(uint *)(param_2 + 3) = uVar3;
  for (lVar2 = 0; (ulong)(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU)) << 2 != lVar2;
      lVar2 = lVar2 + 4) {
    *(undefined4 *)(uVar1 + lVar2) = *(undefined4 *)(param_3 + lVar2);
  }
  FUN_108405bd0(param_1);
  return param_2;
}



/* Entry: 1083ac8f0; end: 1083ac923;  */

undefined8 * FUN_1083ac8f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a40ba0;
  _free(param_1[2]);
  return param_1;
}



/* Entry: 1083ac924; end: 1083ac927;  */

undefined8 * FUN_1083ac924(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a40ba0;
  _free(param_1[2]);
  return param_1;
}



/* Entry: 1083ac928; end: 1083ac93b;  */

void FUN_1083ac928(void)

{
  FUN_1083ac8f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


