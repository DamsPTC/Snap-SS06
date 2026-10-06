/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 006e05d0; end: 006e063b;  */

undefined8 FUN_006e05d0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  if (*(long *)(lVar2 + 8) == 0) {
    func_0x006e06f8();
    func_0x006e06ec();
  }
  else {
    FUN_006ec99c();
    if ((param_1 != 0) &&
       (lVar1 = param_1, func_0x006ecaf8(param_1,*(undefined8 *)(lVar2 + 8)), (int)lVar1 != 0)) {
      func_0x006e070c();
      return 1;
    }
    func_0x006eca8c(param_1);
  }
  return 0;
}



/* Entry: 006e063c; end: 006e06eb;  */

void FUN_006e063c(long param_1,int param_2,long param_3,int *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  if (param_2 == 0x100d) {
    FUN_006eb954();
    if (param_3 != 0) {
      FUN_006eb8ec(puVar2[1]);
      puVar2[1] = param_3;
    }
  }
  else if (param_2 == 2) {
    *(undefined8 *)param_4 = *puVar2;
  }
  else if (param_2 != 3) {
    if (param_2 == 1) {
      iVar1 = *param_4;
      if (((iVar1 - 0x2a0U < 4) || (iVar1 == 0x40)) || (iVar1 == 0x1a0)) {
        *puVar2 = param_4;
        return;
      }
      func_0x006e06f8();
    }
    else {
      func_0x006e06f8();
    }
    func_0x006e06ec();
  }
  return;
}



/* Entry: 006e06ec; end: 006e0723;  */

void FUN_006e06ec(uint *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  
  puVar3 = param_1;
  FUN_006de604();
  if (puVar3 != (uint *)0x0) {
    if (((int)param_1 == 2) && (param_3 == 0)) {
      puVar4 = puVar3;
      ___error();
      param_3 = *puVar4;
    }
    uVar2 = puVar3[0x60];
    uVar1 = uVar2 + 1 & 0xf;
    puVar3[0x60] = uVar1;
    if (uVar1 == puVar3[0x61]) {
      puVar3[0x61] = uVar2 + 2 & 0xf;
    }
    puVar3 = puVar3 + (ulong)uVar1 * 6;
    func_0x006de65c(puVar3);
    puVar3[0] = 0;
    puVar3[1] = 0;
    *(undefined2 *)(puVar3 + 5) = 0;
    puVar3[4] = param_3 & 0xfff | (int)param_1 << 0x18;
  }
  return;
}



/* Entry: 006e0724; end: 006e0817;  */

undefined8 FUN_006e0724(undefined8 param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_2;
  FUN_006ddce8();
  if ((lVar1 == 0) || (*(long *)(param_2 + 8) != 0)) {
    func_0x006e0b3c();
    lVar4 = 0;
    lVar3 = 0;
  }
  else {
    lVar3 = lVar1;
    FUN_006ec99c();
    if ((lVar3 == 0) || (lVar4 = lVar3, func_0x006ecaf8(lVar3,lVar1), (int)lVar4 == 0)) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar1;
      FUN_006ebef0();
      if (((lVar4 != 0) &&
          (lVar2 = lVar1, FUN_006edb34(lVar1,lVar4,*param_3,param_3[1],0), (int)lVar2 != 0)) &&
         (lVar2 = lVar3, func_0x006ecb54(lVar3,lVar4), (int)lVar2 != 0)) {
        FUN_006eb8ec(lVar1);
        FUN_006ebf84(lVar4);
        func_0x006df488(param_1,lVar3);
        return 1;
      }
    }
  }
  FUN_006eb8ec(lVar1);
  FUN_006ebf84(lVar4);
  func_0x006eca8c(lVar3);
  return 0;
}



/* Entry: 006e0818; end: 006e08e3;  */

undefined8 FUN_006e0818(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 auStack_b0 [64];
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [32];
  int iVar4;
  
  iVar3 = (int)auStack_b0;
  iVar4 = (int)auStack_b0;
  uVar1 = **(undefined8 **)(param_2 + 8);
  uVar2 = (*(undefined8 **)(param_2 + 8))[1];
  uVar6 = param_1;
  func_0x006e0b60(param_1,auStack_50);
  if ((int)uVar6 != 0) {
    puVar7 = auStack_50;
    func_0x006e0b60(puVar7,auStack_70);
    iVar5 = (int)puVar7;
    if (((iVar5 != 0) && (func_0x006e0b80(), iVar5 != 0)) && (func_0x006e0b6c(), iVar5 != 0)) {
      puVar7 = auStack_70;
      func_0x006ddba0(puVar7,uVar1);
      if ((int)puVar7 != 0) {
        puVar7 = auStack_50;
        FUN_006d39c0(puVar7,auStack_b0,3);
        if ((((int)puVar7 != 0) && (FUN_006d3a70(auStack_b0,0), iVar3 != 0)) &&
           ((FUN_006ddc48(auStack_b0,uVar1,uVar2,4,0), iVar4 != 0 &&
            (FUN_006d3748(), (int)param_1 != 0)))) {
          return 1;
        }
      }
    }
  }
  func_0x006e0b54(6,0,0x69);
  return 0;
}



/* Entry: 006e08e4; end: 006e091f;  */

undefined4 FUN_006e08e4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = **(undefined8 **)(param_2 + 8);
  FUN_006ec1f4(uVar1,*(undefined8 *)(*(long *)(param_1 + 8) + 8),(*(undefined8 **)(param_2 + 8))[1],
               0);
  uVar2 = 0;
  if ((int)uVar1 != 1) {
    uVar2 = 0xfffffffe;
  }
  if ((int)uVar1 == 0) {
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 006e0920; end: 006e0a7f;  */

undefined8 FUN_006e0920(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_2;
  FUN_006dd764();
  if ((lVar1 == 0) || (*(long *)(param_2 + 8) != 0)) {
    func_0x006e0b3c();
    FUN_006eb8ec(lVar1);
  }
  else {
    lVar2 = param_3;
    FUN_006dd4f0(param_3,lVar1);
    FUN_006eb8ec(lVar1);
    if ((lVar2 != 0) && (*(long *)(param_3 + 8) == 0)) {
      func_0x006df488(param_1,lVar2);
      return 1;
    }
    func_0x006e0b3c();
    func_0x006eca8c(lVar2);
  }
  return 0;
}



/* Entry: 006e0a80; end: 006e0a9f;  */

uint FUN_006e0a80(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x28);
  if (lVar1 != 0) {
    return *(uint *)(lVar1 + 0x30) & 1;
  }
  return 0;
}



/* Entry: 006e0aa0; end: 006e0ae3;  */

void FUN_006e0aa0(long param_1)

{
  FUN_006de0c4(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 006e0ae4; end: 006e0b07;  */

bool FUN_006e0ae4(long param_1)

{
  return **(long **)(param_1 + 8) == 0;
}



/* Entry: 006e0b08; end: 006e0b33;  */

uint FUN_006e0b08(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = **(undefined8 **)(param_1 + 8);
  FUN_006eadf0(uVar1,**(undefined8 **)(param_2 + 8),0);
  return (uint)uVar1 ^ 1;
}



/* Entry: 006e0b34; end: 006e0ba7;  */

void FUN_006e0b34(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  if (puVar2 != (undefined8 *)0x0) {
    iVar1 = (int)puVar2 + 0x20;
    func_0x00705a98();
    if (iVar1 != 0) {
      if ((puVar2[5] != 0) && (*(long *)(puVar2[5] + 0x18) != 0)) {
        func_0x006fe2d4();
      }
      FUN_006eb8ec(*puVar2);
      func_0x006fe6ec();
      func_0x006fe6e4();
      FUN_006e29e4(0xb29c00,puVar2,puVar2 + 6);
      if (puVar2 != (undefined8 *)0x0) {
        plVar3 = puVar2 + -1;
        FUN_00701f08(plVar3,*plVar3 + 8);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_0099a260)(plVar3);
        return;
      }
      return;
    }
  }
  return;
}



/* Entry: 006e0ba8; end: 006e0c63;  */

long FUN_006e0ba8(undefined8 param_1,long param_2,ulong *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_58 [32];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar1 = 0x41;
  lVar3 = param_2;
  FUN_00701e90();
  if (lVar1 == 0) {
    func_0x006e0d48();
    param_3 = (ulong *)((long)&segment_command_00000020.vmsize + 1);
    func_0x006e0d3c();
LAB_006e0c2c:
    lVar4 = 0;
  }
  else {
    lVar3 = 0x3b5;
    lVar4 = param_2;
    FUN_006df4c4();
    if ((int)lVar4 == 0) {
      func_0x00701ed0();
      goto LAB_006e0c2c;
    }
    lVar3 = lVar1;
    FUN_006d8530(auStack_58);
    lVar4 = 1;
    *(undefined1 *)(lVar1 + 0x40) = 1;
    lVar2 = *(long *)(param_2 + 8);
    func_0x00701ed0();
    *(long *)(param_2 + 8) = lVar1;
    lVar1 = lVar2;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return lVar4;
  }
  ___stack_chk_fail();
  lVar1 = *(long *)(*(long *)(lVar1 + 0x10) + 8);
  if (*(char *)(lVar1 + 0x40) == '\0') {
    func_0x006e0d48();
LAB_006e0ca8:
    func_0x006e0d3c();
    lVar1 = 0;
  }
  else {
    if (lVar3 != 0) {
      if (*param_3 < 0x40) {
        func_0x006e0d48();
        goto LAB_006e0ca8;
      }
      FUN_006d8624(lVar3,param_4,param_5,lVar1);
      if ((int)lVar3 == 0) {
        return lVar3;
      }
    }
    *param_3 = 0x40;
    lVar1 = 1;
  }
  return lVar1;
}



/* Entry: 006e0c64; end: 006e0ce3;  */

void FUN_006e0c64(long param_1,long param_2,ulong *param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 8);
  if (*(char *)(lVar1 + 0x40) == '\0') {
    func_0x006e0d48();
LAB_006e0ca8:
    func_0x006e0d3c();
  }
  else {
    if (param_2 != 0) {
      if (*param_3 < 0x40) {
        func_0x006e0d48();
        goto LAB_006e0ca8;
      }
      FUN_006d8624(param_2,param_4,param_5,lVar1);
      if ((int)param_2 == 0) {
        return;
      }
    }
    *param_3 = 0x40;
  }
  return;
}



/* Entry: 006e0ce4; end: 006e0d3b;  */

undefined8
FUN_006e0ce4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  
  if ((param_3 == 0x40) &&
     (FUN_006d9340(param_4,param_5,param_2,*(long *)(*(long *)(param_1 + 0x10) + 8) + 0x20),
     (int)param_4 != 0)) {
    uVar1 = 1;
  }
  else {
    func_0x006e0d48();
    func_0x006e0d3c();
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 006e0d3c; end: 006e0d53;  */

void FUN_006e0d3c(uint *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  
  puVar3 = param_1;
  FUN_006de604();
  if (puVar3 != (uint *)0x0) {
    if (((int)param_1 == 2) && (param_3 == 0)) {
      puVar4 = puVar3;
      ___error();
      param_3 = *puVar4;
    }
    uVar2 = puVar3[0x60];
    uVar1 = uVar2 + 1 & 0xf;
    puVar3[0x60] = uVar1;
    if (uVar1 == puVar3[0x61]) {
      puVar3[0x61] = uVar2 + 2 & 0xf;
    }
    puVar3 = puVar3 + (ulong)uVar1 * 6;
    func_0x006de65c(puVar3);
    puVar3[0] = 0;
    puVar3[1] = 0;
    *(undefined2 *)(puVar3 + 5) = 0;
    puVar3[4] = param_3 & 0xfff | (int)param_1 << 0x18;
  }
  return;
}



/* Entry: 006e0d54; end: 006e0d83;  */

undefined8 FUN_006e0d54(long param_1,long param_2,undefined8 *param_3)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_2 + 8) != 0) {
    func_0x006e11fc();
    func_0x006e11e4();
    return 0;
  }
  if (param_3[1] == 0x20) {
    func_0x006e1208();
    if (param_1 != 0) {
      uVar1 = *unaff_x20;
      uVar3 = unaff_x20[3];
      uVar2 = unaff_x20[2];
      *(undefined8 *)(param_1 + 0x28) = unaff_x20[1];
      *(undefined8 *)(param_1 + 0x20) = uVar1;
      *(undefined8 *)(param_1 + 0x38) = uVar3;
      *(undefined8 *)(param_1 + 0x30) = uVar2;
      *(undefined1 *)(param_1 + 0x40) = 0;
      FUN_006e11bc();
      *(long *)(unaff_x19 + 8) = param_1;
      return 1;
    }
    func_0x006e11fc();
  }
  else {
    func_0x006e11fc(param_1,*param_3);
  }
  func_0x006e11e4();
  return 0;
}



/* Entry: 006e0d84; end: 006e0e4f;  */

undefined8 FUN_006e0d84(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [32];
  int iVar2;
  
  iVar1 = (int)auStack_a0;
  iVar2 = (int)auStack_a0;
  lVar5 = *(long *)(param_2 + 8);
  uVar3 = param_1;
  func_0x006e11f0(param_1,auStack_40);
  if ((int)uVar3 != 0) {
    puVar4 = auStack_40;
    func_0x006e11f0(puVar4,auStack_60);
    if ((int)puVar4 != 0) {
      puVar4 = auStack_60;
      FUN_006d39c0(puVar4,auStack_80,6);
      if ((int)puVar4 != 0) {
        puVar4 = auStack_80;
        FUN_006d3b2c(puVar4,&UNK_00a11fec,3);
        if ((int)puVar4 != 0) {
          puVar4 = auStack_40;
          FUN_006d39c0(puVar4,auStack_a0,3);
          if (((((int)puVar4 != 0) && (FUN_006d3a70(auStack_a0,0), iVar1 != 0)) &&
              (FUN_006d3b2c(auStack_a0,lVar5 + 0x20,0x20), iVar2 != 0)) &&
             (FUN_006d3748(), (int)param_1 != 0)) {
            return 1;
          }
        }
      }
    }
  }
  func_0x006e11fc();
  func_0x006e11e4();
  return 0;
}



/* Entry: 006e0e50; end: 006e0e7f;  */

bool FUN_006e0e50(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8) + 0x20;
  _memcmp(lVar1,*(long *)(param_2 + 8) + 0x20,0x20);
  return (int)lVar1 == 0;
}



/* Entry: 006e0e80; end: 006e0fdf;  */

void FUN_006e0e80(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (((*(long *)(param_2 + 8) == 0) &&
      (lVar1 = param_3, FUN_006d4564(param_3,&uStack_30,4), (int)lVar1 != 0)) &&
     (*(long *)(param_3 + 8) == 0)) {
    FUN_006e0fe0(param_1,uStack_30,uStack_28);
  }
  else {
    func_0x006e11fc();
    func_0x006e11e4();
  }
  return;
}



/* Entry: 006e0fe0; end: 006e10ff;  */

undefined8 * FUN_006e0fe0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [32];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  if (param_3 == 0x20) {
    func_0x006e1208();
    if (param_1 != 0) {
      FUN_006d8588(auStack_58,param_1);
      puVar2 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
      *(undefined1 *)(param_1 + 0x40) = 1;
      lVar1 = unaff_x19;
      FUN_006e11bc();
      *(long *)(unaff_x19 + 8) = param_1;
      param_1 = lVar1;
      goto LAB_006e105c;
    }
    func_0x006e11fc();
    unaff_x20 = 0x41;
  }
  else {
    func_0x006e11fc();
    unaff_x20 = 0x66;
  }
  func_0x006e11e4();
  puVar2 = (undefined8 *)0x0;
LAB_006e105c:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return puVar2;
  }
  ___stack_chk_fail();
  if (unaff_x20 == 0x20) {
    func_0x006e1208();
    if (param_1 != 0) {
      uVar3 = *puVar2;
      uVar5 = puVar2[3];
      uVar4 = puVar2[2];
      *(undefined8 *)(param_1 + 0x28) = puVar2[1];
      *(undefined8 *)(param_1 + 0x20) = uVar3;
      *(undefined8 *)(param_1 + 0x38) = uVar5;
      *(undefined8 *)(param_1 + 0x30) = uVar4;
      *(undefined1 *)(param_1 + 0x40) = 0;
      FUN_006e11bc();
      *(long *)(unaff_x19 + 8) = param_1;
      return (undefined8 *)((long)&MACH_HEADER.magic + 1);
    }
    func_0x006e11fc();
  }
  else {
    func_0x006e11fc();
  }
  func_0x006e11e4();
  return (undefined8 *)0x0;
}



/* Entry: 006e1100; end: 006e11ab;  */

undefined8 FUN_006e1100(long param_1,undefined8 *param_2,ulong *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(puVar2 + 8) == '\0') {
    func_0x006e11fc();
LAB_006e1138:
    func_0x006e11e4();
    uVar1 = 0;
  }
  else {
    if (param_2 != (undefined8 *)0x0) {
      if (*param_3 < 0x20) {
        func_0x006e11fc();
        goto LAB_006e1138;
      }
      uVar1 = *puVar2;
      uVar4 = puVar2[3];
      uVar3 = puVar2[2];
      param_2[1] = puVar2[1];
      *param_2 = uVar1;
      param_2[3] = uVar4;
      param_2[2] = uVar3;
    }
    *param_3 = 0x20;
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 006e11ac; end: 006e11bb;  */

undefined8 FUN_006e11ac(void)

{
  return 0x40;
}



/* Entry: 006e11bc; end: 006e11e3;  */

void FUN_006e11bc(long param_1)

{
  func_0x00701ed0(*(undefined8 *)(param_1 + 8));
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 006e11e4; end: 006e1217;  */

void FUN_006e11e4(uint *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  
  puVar3 = param_1;
  FUN_006de604();
  if (puVar3 != (uint *)0x0) {
    if (((int)param_1 == 2) && (param_3 == 0)) {
      puVar4 = puVar3;
      ___error();
      param_3 = *puVar4;
    }
    uVar2 = puVar3[0x60];
    uVar1 = uVar2 + 1 & 0xf;
    puVar3[0x60] = uVar1;
    if (uVar1 == puVar3[0x61]) {
      puVar3[0x61] = uVar2 + 2 & 0xf;
    }
    puVar3 = puVar3 + (ulong)uVar1 * 6;
    func_0x006de65c(puVar3);
    puVar3[0] = 0;
    puVar3[1] = 0;
    *(undefined2 *)(puVar3 + 5) = 0;
    puVar3[4] = param_3 & 0xfff | (int)param_1 << 0x18;
  }
  return;
}



/* Entry: 006e1218; end: 006e1347;  */

bool FUN_006e1218(long param_1)

{
  qword *pqVar1;
  
  pqVar1 = &segment_command_00000020.fileoff;
  FUN_00701e90();
  if (pqVar1 != (qword *)0x0) {
    pqVar1[1] = 0;
    *pqVar1 = 0;
    pqVar1[3] = 0;
    pqVar1[2] = 0;
    pqVar1[8] = 0;
    pqVar1[5] = 0;
    pqVar1[4] = 0;
    pqVar1[7] = 0;
    pqVar1[6] = 0;
    *(undefined4 *)pqVar1 = 0x800;
    *(dword *)(pqVar1 + 2) = 1;
    *(undefined4 *)(pqVar1 + 5) = 0xfffffffe;
    *(qword **)(param_1 + 0x28) = pqVar1;
  }
  return pqVar1 != (qword *)0x0;
}



/* Entry: 006e1348; end: 006e13cb;  */

void FUN_006e1348(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (*(long *)(lVar1 + 8) == 0) {
    FUN_006e3c80();
    *(long *)(lVar1 + 8) = param_1;
    if (param_1 == 0) {
      return;
    }
    FUN_006e3860();
    if ((int)param_1 == 0) {
      return;
    }
  }
  FUN_006f2524();
  if (param_1 != 0) {
    lVar1 = param_1;
    FUN_006f3ec8();
    if ((int)lVar1 == 0) {
      FUN_006f2614(param_1);
    }
    else {
      func_0x006df410(param_2,param_1);
    }
  }
  return;
}



/* Entry: 006e13cc; end: 006e14bb;  */

long * FUN_006e13cc(long param_1,long param_2,ulong *param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  ulong unaff_x19;
  ulong *unaff_x20;
  long lVar4;
  long lVar5;
  uint uStack_44;
  
  lVar5 = *(long *)(param_1 + 0x28);
  plVar2 = *(long **)(param_1 + 0x10);
  lVar4 = plVar2[1];
  FUN_006df3a0();
  uVar3 = (ulong)(int)plVar2;
  if (param_2 == 0) {
LAB_006e1464:
    *param_3 = uVar3;
    return (long *)((long)&MACH_HEADER.magic + 1);
  }
  if (*param_3 < uVar3) {
    FUN_006e1c40();
    return (long *)0x0;
  }
  if (*(uint **)(lVar5 + 0x18) != (uint *)0x0) {
    if (*(int *)(lVar5 + 0x10) == 6) {
      func_0x006e1ca0();
      FUN_006f2c44();
      return plVar2;
    }
    if (*(int *)(lVar5 + 0x10) != 1) {
      return (long *)0x0;
    }
    plVar2 = (long *)(ulong)**(uint **)(lVar5 + 0x18);
    FUN_006f2b4c(plVar2,param_4,param_5,param_2,&uStack_44,lVar4);
    if ((int)plVar2 == 0) {
      return plVar2;
    }
    uVar3 = (ulong)uStack_44;
    goto LAB_006e1464;
  }
  iVar1 = *(int *)(lVar5 + 0x10);
  func_0x006e1ca0();
  if (*(code **)(*plVar2 + 0x30) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006f28dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x30))();
    return plVar2;
  }
  func_0x006fe858();
  func_0x006fe490();
  FUN_006f22d4();
  if (unaff_x19 < ((ulong)plVar2 & 0xffffffff)) {
    func_0x006fd834();
    func_0x006fd5dc();
    return (long *)0x0;
  }
  uVar3 = (ulong)plVar2 & 0xffffffff;
  FUN_00701e90();
  if (uVar3 == 0) {
    func_0x006fd63c();
LAB_006f3ce4:
    func_0x006fd5dc();
  }
  else {
    if (iVar1 == 3) {
      func_0x006fe2c8();
      iVar1 = (int)uVar3;
      FUN_006f1b30();
    }
    else {
      if (iVar1 != 1) {
        func_0x006fd834();
        goto LAB_006f3ce4;
      }
      func_0x006fe2c8();
      iVar1 = (int)uVar3;
      FUN_006f1908();
    }
    if (iVar1 != 0) {
      func_0x006fdc14();
      FUN_006f35d0();
      if (iVar1 != 0) {
        *unaff_x20 = (ulong)plVar2 & 0xffffffff;
        plVar2 = (long *)((long)&MACH_HEADER.magic + 1);
        goto LAB_006f3cec;
      }
    }
  }
  plVar2 = (long *)0x0;
LAB_006f3cec:
  func_0x006fdb84();
  return plVar2;
}



/* Entry: 006e14bc; end: 006e15ef;  */

/* WARNING: Removing unreachable block (ram,0x006f2e30) */

ulong FUN_006e14bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 unaff_x23;
  ulong uVar6;
  undefined8 unaff_x24;
  ulong uVar7;
  undefined8 unaff_x30;
  ulong in_stack_00000008;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long lStack_68;
  long lStack_60;
  ulong uStack_58;
  
  uVar6 = *(ulong *)(param_1 + 0x28);
  lVar2 = *(long *)(param_1 + 0x10);
  uVar7 = *(ulong *)(lVar2 + 8);
  piVar5 = *(int **)(uVar6 + 0x18);
  if (piVar5 == (int *)0x0) {
    FUN_006df3a0();
    uVar3 = uVar6;
    FUN_006e1bc8(uVar6,param_1);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    FUN_006f2e4c(uVar7,&uStack_58,*(undefined8 *)(uVar6 + 0x30),(long)(int)lVar2,param_2,param_3,
                 *(undefined4 *)(uVar6 + 0x10));
    if ((int)uVar7 == 0 || uStack_58 != param_5) {
      return 0;
    }
    FUN_00701f80(param_4,*(undefined8 *)(uVar6 + 0x30),param_5);
    return (ulong)((int)param_4 == 0);
  }
  if (*(int *)(uVar6 + 0x10) != 6) {
    if (*(int *)(uVar6 + 0x10) != 1) {
      return 0;
    }
    iVar1 = *piVar5;
    if ((*(long *)(uVar7 + 8) == 0) || (*(long *)(uVar7 + 0x10) == 0)) {
      func_0x006fd834(iVar1,param_4,param_5,param_2,param_3);
LAB_006f2d80:
      func_0x006fd5dc();
      return 0;
    }
    func_0x006fea3c();
    uVar6 = uVar7;
    FUN_006f22d4();
    lStack_60 = 0;
    uStack_58 = 0;
    if ((iVar1 == 0x72) && (param_5 != 0x24)) {
      func_0x006fd834();
      goto LAB_006f2d80;
    }
    uVar3 = uVar6 & 0xffffffff;
    FUN_00701e90();
    if (uVar3 == 0) {
      func_0x006fd63c();
      goto LAB_006f2d80;
    }
    FUN_006f2e4c(uVar7,&lStack_68,uVar3,uVar6 & 0xffffffff,unaff_x24,unaff_x23,1);
    iVar1 = (int)uVar7;
    if (iVar1 != 0) {
      func_0x006feaec();
      FUN_006f2a64();
      if (iVar1 != 0) {
        if ((lStack_68 == lStack_60) && (func_0x006ee728(uVar3,uStack_58), (int)uVar3 == 0)) {
          uVar7 = 1;
          goto LAB_006f2e24;
        }
        func_0x006fd834();
        func_0x006fd5dc();
      }
    }
    uVar7 = 0;
LAB_006f2e24:
    func_0x006fdb84();
    return uVar7;
  }
  func_0x006fdc38(unaff_x30,uVar7,param_4,param_5,piVar5,*(undefined8 *)(uVar6 + 0x20),
                  *(undefined4 *)(uVar6 + 0x28),param_2,param_3);
  if (param_5 != (uint)piVar5[1]) {
    func_0x006fd834();
LAB_006f3148:
    func_0x006fd5dc();
    return 0;
  }
  uVar6 = uVar7;
  FUN_006f22d4();
  uVar6 = uVar6 & 0xffffffff;
  uVar3 = uVar6;
  in_stack_00000008 = uVar6;
  FUN_00701e90();
  if (uVar3 == 0) {
    func_0x006fd63c();
    goto LAB_006f3148;
  }
  uVar4 = uVar7;
  FUN_006f2e4c(uVar7,&stack0x00000008,uVar3,uVar6,param_2,param_3,3);
  uVar6 = in_stack_00000008;
  if ((int)uVar4 != 0) {
    func_0x006fe748();
    if (uVar6 == (uVar4 & 0xffffffff)) {
      func_0x006fe1e4(uVar7);
      func_0x006f205c();
      goto LAB_006f3160;
    }
    func_0x006fd7ac();
    func_0x006fd5dc();
  }
  uVar7 = 0;
LAB_006f3160:
  func_0x006fdb84();
  return uVar7;
}



/* Entry: 006e15f0; end: 006e1777;  */

undefined8 *
FUN_006e15f0(long param_1,undefined8 *param_2,char *param_3,undefined8 param_4,long param_5,
            char *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  char *pcVar11;
  ulong *unaff_x19;
  long unaff_x20;
  undefined8 *puVar12;
  char *pcVar13;
  bool bVar14;
  ulong unaff_x25;
  long lStack_80;
  int iStack_74;
  long lStack_70;
  undefined8 uStack_68;
  
  func_0x006e1c90();
  puVar12 = *(undefined8 **)(param_1 + 0x28);
  lVar4 = param_1;
  func_0x006e1ccc();
  if (unaff_x20 == 0) {
    *unaff_x19 = (long)(int)lVar4;
LAB_006e1644:
    puVar12 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    uVar10 = *unaff_x19;
    if (uVar10 < (ulong)(long)(int)lVar4) {
      func_0x006e1c40();
    }
    else {
      iVar2 = *(int *)(puVar12 + 2);
      if (puVar12[3] == 0) {
        func_0x006e1ce4();
        func_0x006e1cd8();
        func_0x006fdcd0();
        uVar7 = unaff_x25;
        FUN_006f348c();
        if ((int)uVar7 == 0) {
          return (undefined8 *)0x0;
        }
        uVar7 = unaff_x25;
        FUN_006f22d4();
        if (uVar10 < (uVar7 & 0xffffffff)) {
          func_0x006fd834();
LAB_006f2f28:
          func_0x006fd5dc();
          return (undefined8 *)0x0;
        }
        if (param_6 != (char *)(uVar7 & 0xffffffff)) {
          func_0x006fd834();
          goto LAB_006f2f28;
        }
        FUN_006e4450();
        if (uVar7 == 0) {
          return (undefined8 *)0x0;
        }
        func_0x006fe8b8();
        func_0x006fd910();
        uVar8 = uVar7;
        func_0x006fd910();
        if ((uVar7 == 0) || (uVar8 == 0)) {
          func_0x006fd520(4);
          puVar12 = (undefined8 *)0x0;
          pcVar13 = (char *)0x0;
          goto LAB_006f2fc4;
        }
        pcVar13 = param_3;
        if ((iVar2 == 3) || (pcVar13 = param_6, func_0x00701e90(), pcVar13 != (char *)0x0)) {
          FUN_006e405c(param_5,param_6,uVar7);
          if (param_5 != 0) {
            uVar6 = *(undefined8 *)(unaff_x25 + 8);
            uVar9 = uVar7;
            FUN_006e34dc(uVar7,uVar6);
            if (-1 < (int)uVar9) {
              func_0x006fd834();
              goto LAB_006f2fbc;
            }
            lVar4 = unaff_x25 + 0x120;
            FUN_006e80e4(lVar4,unaff_x25 + 0x58,uVar6,uVar10);
            if ((int)lVar4 != 0) {
              FUN_006e5360(uVar8,uVar7,*(undefined8 *)(unaff_x25 + 0x10),
                           *(long *)(unaff_x25 + 0x120) + 0x18,uVar10);
              iVar3 = (int)uVar8;
              if (iVar3 != 0) {
                func_0x006fdf80();
                FUN_006e4138();
                if (iVar3 == 0) {
                  func_0x006fd7ac();
                }
                else {
                  if (iVar2 == 3) {
LAB_006f3080:
                    *param_2 = param_6;
                    puVar12 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
                    goto LAB_006f2fc4;
                  }
                  if (iVar2 == 1) {
                    if ((((char *)((long)&MACH_HEADER.magic + 1) < param_6) && (*pcVar13 == '\0'))
                       && (pcVar13[1] == '\x01')) {
                      for (pcVar11 = (char *)0x0; param_6 + -2 != pcVar11; pcVar11 = pcVar11 + 1) {
                        if ((pcVar13 + (long)pcVar11)[2] != -1) {
                          if (((pcVar13 + (long)pcVar11)[2] == '\0') &&
                             ((char *)((long)&MACH_HEADER.cpusubtype + 2) <= pcVar11 + 2)) {
                            param_6 = param_6 + (-3 - (long)pcVar11);
                            func_0x006fde2c(param_3,pcVar13 + (long)pcVar11 + 3);
                            goto LAB_006f3080;
                          }
                          break;
                        }
                      }
                    }
                    func_0x006fd834();
                    func_0x006fd5dc();
                    func_0x006fd834();
                  }
                  else {
                    func_0x006fd834();
                  }
                }
                goto LAB_006f2fbc;
              }
            }
          }
        }
        else {
          func_0x006fd63c();
LAB_006f2fbc:
          func_0x006fd5dc();
        }
        puVar12 = (undefined8 *)0x0;
LAB_006f2fc4:
        func_0x006fdbd0();
        func_0x006fdda8();
        if (pcVar13 != param_3) {
          func_0x006fe6f4();
          return puVar12;
        }
        return puVar12;
      }
      if (iVar2 != 1) goto LAB_006e16f8;
      uVar1 = *(uint *)(puVar12[3] + 4);
      uVar10 = (ulong)uVar1;
      puVar5 = puVar12;
      FUN_006e1bc8(puVar12,param_1);
      if ((int)puVar5 == 0) {
        return puVar5;
      }
      puVar5 = &uStack_68;
      FUN_006f2a64(puVar5,&lStack_70,&iStack_74,*(undefined4 *)puVar12[3],&UNK_0083626c,uVar10);
      if ((int)puVar5 == 0) {
        return puVar5;
      }
      func_0x006e1cd8();
      iVar2 = (int)unaff_x25;
      FUN_006f2e4c();
      if ((iVar2 == 0) || (lStack_80 != lStack_70)) {
LAB_006e16e0:
        bVar14 = true;
      }
      else {
        uVar6 = puVar12[6];
        FUN_00701f80(uVar6,uStack_68,lStack_80 - uVar10);
        if ((int)uVar6 != 0) goto LAB_006e16e0;
        bVar14 = false;
      }
      if (iStack_74 != 0) {
        func_0x00701ed0(uStack_68);
      }
      if (!bVar14) {
        if (uVar1 != 0) {
          _memcpy();
        }
        *unaff_x19 = uVar10;
        goto LAB_006e1644;
      }
    }
LAB_006e16f8:
    puVar12 = (undefined8 *)0x0;
  }
  return puVar12;
}



/* Entry: 006e1778; end: 006e1963;  */

long FUN_006e1778(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  ulong uVar8;
  int unaff_w22;
  long lVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  
  func_0x006e1c90();
  lVar9 = *(long *)(param_1 + 0x28);
  lVar1 = *(long *)(param_1 + 0x10);
  uVar8 = *(ulong *)(lVar1 + 8);
  FUN_006df3a0();
  uVar11 = (ulong)(int)lVar1;
  if (unaff_x20 == 0) {
    *unaff_x19 = uVar11;
    return 1;
  }
  if (*unaff_x19 < uVar11) {
    func_0x006e1c40();
    return 0;
  }
  uVar7 = (ulong)*(uint *)(lVar9 + 0x10);
  if (*(uint *)(lVar9 + 0x10) == 4) {
    lVar1 = lVar9;
    FUN_006e1bc8(lVar9,param_1);
    if ((int)lVar1 == 0) {
      return lVar1;
    }
    lVar1 = *(long *)(lVar9 + 0x30);
    FUN_006f1b7c(lVar1,uVar11);
    if ((int)lVar1 == 0) {
      return lVar1;
    }
    func_0x006e1ce4();
    uVar7 = 3;
  }
  else {
    func_0x006e1ce4();
  }
  func_0x006fdc38();
  func_0x006fe480();
  uVar11 = uVar8;
  FUN_006f348c();
  if ((int)uVar11 == 0) {
    return 0;
  }
  func_0x006fe748();
  if (unaff_x19 < (ulong *)(uVar11 & 0xffffffff)) {
    func_0x006fd834();
    func_0x006fd5dc();
    return 0;
  }
  uVar2 = uVar11;
  FUN_006e4450();
  if (uVar2 == 0) {
    lVar1 = 0;
    goto LAB_006f27f8;
  }
  uVar3 = uVar2;
  FUN_006e44d0();
  func_0x006fd82c();
  uVar4 = uVar3;
  func_0x006fd82c();
  uVar5 = uVar11 & 0xffffffff;
  FUN_00701e90();
  if (((uVar3 == 0) || (uVar4 == 0)) || (uVar5 == 0)) {
    func_0x006fd63c();
LAB_006f27e8:
    func_0x006fd5dc();
LAB_006f27ec:
    lVar1 = 0;
  }
  else {
    iVar10 = (int)uVar7;
    if (iVar10 == 4) {
      uVar6 = uVar5;
      func_0x006fdbd8();
      iVar10 = (int)uVar6;
      FUN_006f1b7c();
    }
    else if (iVar10 == 3) {
      uVar6 = uVar5;
      func_0x006fdbd8();
      iVar10 = (int)uVar6;
      FUN_006f1b30();
    }
    else {
      if (iVar10 != 1) {
        func_0x006fd834();
        goto LAB_006f27e8;
      }
      uVar6 = uVar5;
      func_0x006fdbd8();
      iVar10 = (int)uVar6;
      FUN_006f1994();
    }
    if ((iVar10 == 0) || (FUN_006e405c(uVar5,uVar7,uVar3), uVar5 == 0)) goto LAB_006f27ec;
    uVar12 = *(undefined8 *)(uVar8 + 8);
    uVar7 = uVar3;
    FUN_006e34dc(uVar3,uVar12);
    if (-1 < (int)uVar7) {
      func_0x006fd834();
      goto LAB_006f27e8;
    }
    lVar1 = uVar8 + 0x120;
    FUN_006e80e4(lVar1,uVar8 + 0x58,uVar12,uVar2);
    if (((int)lVar1 == 0) ||
       (FUN_006e5360(uVar4,uVar3,*(undefined8 *)(uVar8 + 0x10),*(long *)(uVar8 + 0x120) + 0x18,uVar2
                    ), (int)uVar4 == 0)) goto LAB_006f27ec;
    func_0x006fe184();
    FUN_006e4138();
    if (unaff_w22 == 0) {
      func_0x006fd7ac();
      goto LAB_006f27e8;
    }
    *unaff_x21 = uVar11 & 0xffffffff;
    lVar1 = 1;
  }
  func_0x006fd8f4();
  func_0x006fe7b0();
LAB_006f27f8:
  func_0x006fe910();
  return lVar1;
}



/* Entry: 006e1964; end: 006e1b83;  */

void FUN_006e1964(long param_1,int param_2,undefined8 param_3,uint *param_4)

{
  byte bVar1;
  undefined8 uVar2;
  uint *puVar3;
  uint uVar4;
  long lVar5;
  uint *puVar6;
  
  puVar6 = *(uint **)(param_1 + 0x28);
  uVar4 = (uint)param_3;
  switch(param_2) {
  case 0x1001:
    if ((uVar4 < 7) && ((1 << (ulong)(uVar4 & 0x1f) & 0x5aU) != 0)) {
      uVar2 = *(undefined8 *)(puVar6 + 6);
      FUN_006e1c0c(uVar2,param_3);
      if ((int)uVar2 != 0) {
        if (uVar4 == 4) {
          bVar1 = *(byte *)(param_1 + 0x20) & 0xc0;
        }
        else {
          if (uVar4 != 6) goto code_r0x006e1acc;
          bVar1 = *(byte *)(param_1 + 0x20) & 0x18;
        }
        if (bVar1 != 0) {
          if (*(long *)(puVar6 + 6) == 0) {
            FUN_006eaae0();
            *(undefined8 *)(puVar6 + 6) = uVar2;
          }
code_r0x006e1acc:
          puVar6[4] = uVar4;
          return;
        }
      }
    }
    func_0x006e1c64();
    goto LAB_006e1b74;
  case 0x1002:
    uVar4 = puVar6[4];
code_r0x006e1ad8:
    *param_4 = uVar4;
    return;
  case 0x1003:
  case 0x1004:
    if (puVar6[4] == 6) {
      if (param_2 != 0x1004) {
        if ((int)uVar4 < -2) {
          return;
        }
        puVar6[10] = uVar4;
        return;
      }
      uVar4 = puVar6[10];
      goto code_r0x006e1ad8;
    }
    func_0x006e1c64();
    goto LAB_006e1b74;
  case 0x1005:
    if (0xff < (int)uVar4) {
      *puVar6 = uVar4;
      return;
    }
    func_0x006e1c64();
    goto LAB_006e1b74;
  case 0x1006:
    if (param_4 == (uint *)0x0) {
      return;
    }
    FUN_006e3cd0(*(undefined8 *)(puVar6 + 2));
    *(uint **)(puVar6 + 2) = param_4;
    return;
  case 0x1007:
  case 0x1008:
    if (puVar6[4] == 4) {
      if (param_2 != 0x1008) goto code_r0x006e1af0;
      goto LAB_006e1a24;
    }
    break;
  case 0x1009:
  case 0x100a:
    if ((puVar6[4] | 2) != 6) {
      func_0x006e1c64();
      goto LAB_006e1b74;
    }
    if (param_2 != 0x100a) {
      *(uint **)(puVar6 + 8) = param_4;
      return;
    }
    lVar5 = *(long *)(puVar6 + 8);
    if (lVar5 != 0) goto code_r0x006e1a28;
    goto LAB_006e1a24;
  case 0x100b:
    if (puVar6[4] == 4) {
      func_0x00701ed0(*(undefined8 *)(puVar6 + 0xe));
      lVar5 = *(long *)(param_4 + 2);
      *(long *)(puVar6 + 0xe) = *(long *)param_4;
      *(long *)(puVar6 + 0x10) = lVar5;
      return;
    }
    break;
  case 0x100c:
    if (puVar6[4] == 4) {
      lVar5 = *(long *)(puVar6 + 0x10);
      *(long *)param_4 = *(long *)(puVar6 + 0xe);
      *(long *)(param_4 + 2) = lVar5;
      return;
    }
    break;
  default:
    if (param_2 == 1) {
      puVar3 = param_4;
      FUN_006e1c0c(param_4,puVar6[4]);
      if ((int)puVar3 == 0) {
        return;
      }
code_r0x006e1af0:
      *(uint **)(puVar6 + 6) = param_4;
      return;
    }
    if (param_2 != 2) {
      func_0x006e1c64();
      goto LAB_006e1b74;
    }
LAB_006e1a24:
    lVar5 = *(long *)(puVar6 + 6);
code_r0x006e1a28:
    *(long *)param_4 = lVar5;
    return;
  }
  func_0x006e1c64();
LAB_006e1b74:
  func_0x006e1c58();
  return;
}



/* Entry: 006e1b84; end: 006e1bc7;  */

undefined8 * FUN_006e1b84(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  
  if (((param_1 == (undefined8 *)0x0) || (piVar1 = (int *)*param_1, piVar1 == (int *)0x0)) ||
     (*(code **)(piVar1 + 0x1c) == (code *)0x0)) {
    func_0x006dfe0c();
  }
  else if (*piVar1 == 6) {
    if (*(int *)(param_1 + 4) == 0) {
      func_0x006dfe0c();
    }
    else {
      if (*(int *)(param_1 + 4) != 0) {
                    /* WARNING: Could not recover jumptable at 0x006dfc94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(piVar1 + 0x1c))(param_1,0x1001,param_2,0);
        return param_1;
      }
      func_0x006dfe0c();
    }
  }
  else {
    func_0x006dfdfc();
  }
  func_0x006dfdf0();
  return (undefined8 *)0x0;
}



/* Entry: 006e1bc8; end: 006e1c0b;  */

bool FUN_006e1bc8(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    return true;
  }
  iVar1 = (int)*(undefined8 *)(param_2 + 0x10);
  FUN_006df3a0();
  lVar2 = (long)iVar1;
  FUN_00701e90();
  *(long *)(param_1 + 0x30) = lVar2;
  return lVar2 != 0;
}



/* Entry: 006e1c0c; end: 006e1c3f;  */

undefined8 FUN_006e1c0c(long param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if ((param_1 != 0) && (param_2 == 3)) {
    func_0x006e1c64(1);
    func_0x006e1c58();
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 006e1c40; end: 006e1cef;  */

/* WARNING: Removing unreachable block (ram,0x006de91c) */
/* WARNING: Removing unreachable block (ram,0x006de920) */

void FUN_006e1c40(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar3 = 6;
  FUN_006de604(6,0);
  if (lVar3 != 0) {
    iVar2 = *(int *)(lVar3 + 0x180);
    uVar1 = iVar2 + 1U & 0xf;
    *(uint *)(lVar3 + 0x180) = uVar1;
    if (uVar1 == *(uint *)(lVar3 + 0x184)) {
      *(uint *)(lVar3 + 0x184) = iVar2 + 2U & 0xf;
    }
    puVar4 = (undefined8 *)(lVar3 + (ulong)uVar1 * 0x18);
    func_0x006de65c(puVar4);
    *puVar4 = 0;
    *(undefined2 *)((long)puVar4 + 0x14) = 0;
    *(undefined4 *)(puVar4 + 2) = 0x6000064;
  }
  return;
}



/* Entry: 006e1cf0; end: 006e1d5f;  */

undefined8 FUN_006e1cf0(int param_1)

{
  long lVar1;
  long unaff_x20;
  long unaff_x21;
  long lStack_38;
  
  func_0x006e1fe8();
  if (((param_1 == 0) || (lStack_38 != 0)) || (*(long *)(unaff_x21 + 8) != 0)) {
    func_0x006e1fb8();
  }
  else {
    lVar1 = unaff_x20;
    FUN_00705afc();
    if ((lVar1 != 0) && (*(long *)(unaff_x20 + 8) == 0)) {
      func_0x006e2054();
      return 1;
    }
    func_0x006e1fb8();
    FUN_006f2614(lVar1);
  }
  return 0;
}



/* Entry: 006e1d60; end: 006e1e5f;  */

undefined8 FUN_006e1d60(undefined8 param_1,long param_2)

{
  int iVar1;
  int iVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 auStack_c0 [96];
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [32];
  int iVar2;
  
  iVar1 = (int)auStack_c0;
  iVar2 = (int)auStack_c0;
  uVar4 = param_1;
  func_0x006e1fdc(param_1,auStack_40);
  if ((int)uVar4 != 0) {
    puVar5 = auStack_40;
    func_0x006e1fdc(puVar5,auStack_60);
    iVar3 = (int)puVar5;
    if ((((iVar3 != 0) && (func_0x006e2038(), iVar3 != 0)) && (func_0x006e2004(), iVar3 != 0)) &&
       (func_0x006e2028(), iVar3 != 0)) {
      puVar5 = auStack_40;
      FUN_006d39c0(puVar5,auStack_c0,3);
      if ((((int)puVar5 != 0) && (FUN_006d3a70(auStack_c0,0), iVar1 != 0)) &&
         ((func_0x00705bc8(auStack_c0,*(undefined8 *)(param_2 + 8)), iVar2 != 0 &&
          (FUN_006d3748(), (int)param_1 != 0)))) {
        return 1;
      }
    }
  }
  func_0x006e1fd0(6,0,0x69);
  return 0;
}



/* Entry: 006e1e60; end: 006e1ecf;  */

undefined8 FUN_006e1e60(int param_1)

{
  long lVar1;
  long unaff_x20;
  long unaff_x21;
  long lStack_38;
  
  func_0x006e1fe8();
  if (((param_1 == 0) || (lStack_38 != 0)) || (*(long *)(unaff_x21 + 8) != 0)) {
    func_0x006e1fb8();
  }
  else {
    lVar1 = unaff_x20;
    FUN_00705c4c();
    if ((lVar1 != 0) && (*(long *)(unaff_x20 + 8) == 0)) {
      func_0x006e2054();
      return 1;
    }
    func_0x006e1fb8();
    FUN_006f2614(lVar1);
  }
  return 0;
}



/* Entry: 006e1ed0; end: 006e1f7f;  */

undefined8 FUN_006e1ed0(undefined8 param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 auStack_c0 [96];
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [32];
  
  iVar1 = (int)auStack_c0;
  uVar3 = param_1;
  func_0x006e1fdc(param_1,auStack_40);
  if ((int)uVar3 != 0) {
    puVar4 = auStack_40;
    FUN_006d3e0c(puVar4,0);
    if ((int)puVar4 != 0) {
      puVar4 = auStack_40;
      func_0x006e1fdc(puVar4,auStack_60);
      iVar2 = (int)puVar4;
      if ((((iVar2 != 0) && (func_0x006e2038(), iVar2 != 0)) && (func_0x006e2004(), iVar2 != 0)) &&
         (func_0x006e2028(), iVar2 != 0)) {
        puVar4 = auStack_40;
        FUN_006d39c0(puVar4,auStack_c0,4);
        if ((((int)puVar4 != 0) &&
            (func_0x00705d5c(auStack_c0,*(undefined8 *)(param_2 + 8)), iVar1 != 0)) &&
           (FUN_006d3748(), (int)param_1 != 0)) {
          return 1;
        }
      }
    }
  }
  func_0x006e1fd0(6,0,0x69);
  return 0;
}



/* Entry: 006e1f80; end: 006e2067;  */

uint FUN_006e1f80(long param_1)

{
  if (**(long **)(param_1 + 8) != 0) {
    return *(uint *)(**(long **)(param_1 + 8) + 0x48) & 1;
  }
  return 0;
}



/* Entry: 006e2068; end: 006e20ef;  */

undefined8 FUN_006e2068(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x41;
  FUN_00701e90();
  if (lVar1 == 0) {
    func_0x006e21d8();
    func_0x006e21cc();
  }
  else {
    lVar2 = param_2;
    FUN_006df4c4(param_2,0x3b4);
    if ((int)lVar2 != 0) {
      FUN_006d9b04(lVar1,lVar1 + 0x20);
      *(undefined1 *)(lVar1 + 0x40) = 1;
      func_0x00701ed0(*(undefined8 *)(param_2 + 8));
      *(long *)(param_2 + 8) = lVar1;
      return 1;
    }
    func_0x00701ed0(lVar1);
  }
  return 0;
}



/* Entry: 006e20f0; end: 006e219b;  */

undefined8 FUN_006e20f0(long param_1,long param_2,ulong *param_3)

{
  long lVar1;
  
  if ((((*(long *)(param_1 + 0x10) == 0) || (*(long *)(param_1 + 0x18) == 0)) ||
      (lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 8), lVar1 == 0)) ||
     (*(long *)(*(long *)(param_1 + 0x18) + 8) == 0)) {
    func_0x006e21d8();
  }
  else if (*(char *)(lVar1 + 0x40) == '\0') {
    func_0x006e21d8();
  }
  else {
    if (param_2 == 0) {
LAB_006e2180:
      *param_3 = 0x20;
      return 1;
    }
    if (*param_3 < 0x20) {
      func_0x006e21d8();
    }
    else {
      FUN_006d9c24(param_2,lVar1 + 0x20);
      if ((int)param_2 != 0) goto LAB_006e2180;
      func_0x006e21d8();
    }
  }
  func_0x006e21cc();
  return 0;
}



/* Entry: 006e219c; end: 006e21cb;  */

undefined8 FUN_006e219c(undefined8 param_1,int param_2)

{
  if (param_2 == 3) {
    return 1;
  }
  func_0x006e21d8();
  func_0x006e21cc();
  return 0;
}



/* Entry: 006e21cc; end: 006e21e3;  */

void FUN_006e21cc(uint *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  
  puVar3 = param_1;
  FUN_006de604();
  if (puVar3 != (uint *)0x0) {
    if (((int)param_1 == 2) && (param_3 == 0)) {
      puVar4 = puVar3;
      ___error();
      param_3 = *puVar4;
    }
    uVar2 = puVar3[0x60];
    uVar1 = uVar2 + 1 & 0xf;
    puVar3[0x60] = uVar1;
    if (uVar1 == puVar3[0x61]) {
      puVar3[0x61] = uVar2 + 2 & 0xf;
    }
    puVar3 = puVar3 + (ulong)uVar1 * 6;
    func_0x006de65c(puVar3);
    puVar3[0] = 0;
    puVar3[1] = 0;
    *(undefined2 *)(puVar3 + 5) = 0;
    puVar3[4] = param_3 & 0xfff | (int)param_1 << 0x18;
  }
  return;
}



/* Entry: 006e21e4; end: 006e2213;  */

undefined8 FUN_006e21e4(undefined8 *param_1,long param_2,long *param_3)

{
  undefined8 *puVar1;
  long unaff_x19;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_2 + 8) != 0) {
    func_0x006e2648();
    func_0x006e2630();
    return 0;
  }
  puVar1 = (undefined8 *)*param_3;
  if (param_3[1] == 0x20) {
    func_0x006e2654();
    if (param_1 != (undefined8 *)0x0) {
      uVar2 = *puVar1;
      uVar4 = puVar1[3];
      uVar3 = puVar1[2];
      param_1[1] = puVar1[1];
      *param_1 = uVar2;
      param_1[3] = uVar4;
      param_1[2] = uVar3;
      *(undefined1 *)(param_1 + 8) = 0;
      FUN_006e2608();
      *(undefined8 **)(unaff_x19 + 8) = param_1;
      return 1;
    }
    func_0x006e2648();
  }
  else {
    func_0x006e2648();
  }
  func_0x006e2630();
  return 0;
}



/* Entry: 006e2214; end: 006e22df;  */

undefined8 FUN_006e2214(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [32];
  int iVar2;
  
  iVar1 = (int)auStack_a0;
  iVar2 = (int)auStack_a0;
  uVar5 = *(undefined8 *)(param_2 + 8);
  uVar3 = param_1;
  func_0x006e263c(param_1,auStack_40);
  if ((int)uVar3 != 0) {
    puVar4 = auStack_40;
    func_0x006e263c(puVar4,auStack_60);
    if ((int)puVar4 != 0) {
      puVar4 = auStack_60;
      FUN_006d39c0(puVar4,auStack_80,6);
      if ((int)puVar4 != 0) {
        puVar4 = auStack_80;
        FUN_006d3b2c(puVar4,&UNK_00a121fc,3);
        if ((int)puVar4 != 0) {
          puVar4 = auStack_40;
          FUN_006d39c0(puVar4,auStack_a0,3);
          if (((((int)puVar4 != 0) && (FUN_006d3a70(auStack_a0,0), iVar1 != 0)) &&
              (FUN_006d3b2c(auStack_a0,uVar5,0x20), iVar2 != 0)) &&
             (FUN_006d3748(), (int)param_1 != 0)) {
            return 1;
          }
        }
      }
    }
  }
  func_0x006e2648();
  func_0x006e2630();
  return 0;
}



/* Entry: 006e22e0; end: 006e2307;  */

bool FUN_006e22e0(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _memcmp(uVar1,*(undefined8 *)(param_2 + 8),0x20);
  return (int)uVar1 == 0;
}



/* Entry: 006e2308; end: 006e2467;  */

void FUN_006e2308(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (((*(long *)(param_2 + 8) == 0) &&
      (lVar1 = param_3, FUN_006d4564(param_3,&uStack_30,4), (int)lVar1 != 0)) &&
     (*(long *)(param_3 + 8) == 0)) {
    FUN_006e2468(param_1,uStack_30,uStack_28);
  }
  else {
    func_0x006e2648();
    func_0x006e2630();
  }
  return;
}



/* Entry: 006e2468; end: 006e254b;  */

undefined8 FUN_006e2468(long param_1,undefined8 *param_2,long param_3)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_3 == 0x20) {
    func_0x006e2654();
    if (param_1 != 0) {
      uVar1 = *param_2;
      uVar3 = param_2[3];
      uVar2 = param_2[2];
      *(undefined8 *)(param_1 + 0x28) = param_2[1];
      *(undefined8 *)(param_1 + 0x20) = uVar1;
      *(undefined8 *)(param_1 + 0x38) = uVar3;
      *(undefined8 *)(param_1 + 0x30) = uVar2;
      FUN_006d9b50();
      *(undefined1 *)(param_1 + 0x40) = 1;
      FUN_006e2608();
      *(long *)(unaff_x19 + 8) = param_1;
      return 1;
    }
    func_0x006e2648();
  }
  else {
    func_0x006e2648();
  }
  func_0x006e2630();
  return 0;
}



/* Entry: 006e254c; end: 006e25f7;  */

undefined8 FUN_006e254c(long param_1,undefined8 *param_2,ulong *param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar2 = *(long *)(param_1 + 8);
  if (*(char *)(lVar2 + 0x40) == '\0') {
    func_0x006e2648();
LAB_006e2584:
    func_0x006e2630();
    uVar1 = 0;
  }
  else {
    if (param_2 != (undefined8 *)0x0) {
      if (*param_3 < 0x20) {
        func_0x006e2648();
        goto LAB_006e2584;
      }
      uVar1 = *(undefined8 *)(lVar2 + 0x20);
      uVar4 = *(undefined8 *)(lVar2 + 0x38);
      uVar3 = *(undefined8 *)(lVar2 + 0x30);
      param_2[1] = *(undefined8 *)(lVar2 + 0x28);
      *param_2 = uVar1;
      param_2[3] = uVar4;
      param_2[2] = uVar3;
    }
    *param_3 = 0x20;
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 006e25f8; end: 006e2607;  */

undefined8 FUN_006e25f8(void)

{
  return 0x20;
}



/* Entry: 006e2608; end: 006e262f;  */

void FUN_006e2608(long param_1)

{
  func_0x00701ed0(*(undefined8 *)(param_1 + 8));
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 006e2630; end: 006e266b;  */

void FUN_006e2630(uint *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  
  puVar3 = param_1;
  FUN_006de604();
  if (puVar3 != (uint *)0x0) {
    if (((int)param_1 == 2) && (param_3 == 0)) {
      puVar4 = puVar3;
      ___error();
      param_3 = *puVar4;
    }
    uVar2 = puVar3[0x60];
    uVar1 = uVar2 + 1 & 0xf;
    puVar3[0x60] = uVar1;
    if (uVar1 == puVar3[0x61]) {
      puVar3[0x61] = uVar2 + 2 & 0xf;
    }
    puVar3 = puVar3 + (ulong)uVar1 * 6;
    func_0x006de65c(puVar3);
    puVar3[0] = 0;
    puVar3[1] = 0;
    *(undefined2 *)(puVar3 + 5) = 0;
    puVar3[4] = param_3 & 0xfff | (int)param_1 << 0x18;
  }
  return;
}



/* Entry: 006e266c; end: 006e2807;  */

byte * FUN_006e266c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   byte *param_5,long param_6,ulong param_7,byte *param_8)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  byte *pbVar11;
  long lVar12;
  long lVar13;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  undefined8 extraout_x8_02;
  code *extraout_x8_03;
  undefined8 extraout_x8_04;
  ulong uVar14;
  byte *pbVar15;
  uint uVar16;
  ulong unaff_x27;
  ulong unaff_x28;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined4 uStack_2fc;
  undefined1 auStack_2f8 [64];
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  byte *pbStack_2a8;
  long lStack_2a0;
  long *plStack_298;
  undefined1 **ppuStack_290;
  code *pcStack_288;
  uint uStack_27c;
  byte abStack_278 [256];
  undefined8 uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  byte *pbStack_158;
  ulong uStack_150;
  byte *pbStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  uint uStack_124;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  byte abStack_b0 [64];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar3 = *(uint *)(param_6 + 4);
  uStack_c0 = 0;
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  uVar20 = 0;
  uVar21 = 0;
  uVar22 = 0;
  uVar23 = 0;
  uVar24 = 0;
  uVar25 = 0;
  uVar26 = 0;
  uVar27 = 0;
  uVar28 = 0;
  uVar29 = 0;
  uVar30 = 0;
  uVar31 = 0;
  uVar32 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_118 = 0;
  lStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  pbVar15 = (byte *)&lStack_120;
  FUN_006ef7cc(pbVar15,param_1,param_2,param_6,0);
  if ((int)pbVar15 == 0) {
LAB_006e27bc:
    pbVar15 = (byte *)0x0;
  }
  else {
    unaff_x27 = 1;
    for (; param_7 != 0; param_7 = param_7 - uVar1) {
      uVar1 = (ulong)uVar3;
      if (param_7 <= uVar3) {
        uVar1 = param_7;
      }
      uVar16 = (uint)unaff_x27;
      uVar4 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
      uStack_124 = uVar4 >> 0x10 | uVar4 << 0x10;
      FUN_006e2808();
      if ((int)pbVar15 == 0) goto LAB_006e27bc;
      func_0x006e2830();
      (*extraout_x8)();
      func_0x006e2830();
      (*extraout_x8_00)();
      func_0x006e2820();
      if ((int)pbVar15 == 0) goto LAB_006e27bc;
      if (uVar3 != 0) {
        pbVar15 = param_8;
        _memcpy(param_8,abStack_b0,uVar1);
      }
      for (unaff_x28 = 1; (uint)unaff_x28 < (uint)param_5; unaff_x28 = (ulong)((uint)unaff_x28 + 1))
      {
        FUN_006e2808();
        if ((int)pbVar15 == 0) goto LAB_006e27bc;
        func_0x006e2830();
        (*extraout_x8_01)();
        func_0x006e2820();
        if ((int)pbVar15 == 0) goto LAB_006e27bc;
        pbVar11 = abStack_b0;
        pbVar5 = param_8;
        for (uVar14 = uVar1; uVar14 != 0; uVar14 = uVar14 - 1) {
          *pbVar5 = *pbVar5 ^ *pbVar11;
          pbVar11 = pbVar11 + 1;
          pbVar5 = pbVar5 + 1;
        }
      }
      param_8 = param_8 + uVar1;
      unaff_x27 = (ulong)(uVar16 + 1);
    }
    pbVar15 = (byte *)(ulong)((uint)param_5 != 0);
  }
  FUN_006ef9d0(&lStack_120);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_70) {
    return pbVar15;
  }
  ___stack_chk_fail();
  plVar9 = &lStack_120;
  lVar12 = 0;
  lVar13 = 0;
  pcStack_138 = FUN_006e2808;
  uStack_170 = unaff_x28;
  uStack_168 = unaff_x27;
  uStack_160 = param_4;
  pbStack_158 = param_5;
  uStack_150 = param_7;
  pbStack_148 = pbVar15;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x006fdb48(plVar9,0,0,0,0);
  plVar10 = plVar9;
  func_0x006fd5fc();
  lVar2 = *plVar10;
  if (lVar13 != 0) {
    lVar2 = lVar13;
  }
  uStack_178 = extraout_x8_02;
  if ((lVar12 == 0) && (uVar6 = lVar2 == *plVar10, (bool)uVar6)) {
LAB_006ef914:
    pbVar15 = (byte *)(plVar9 + 1);
    FUN_006ea838(pbVar15,plVar9 + 5);
  }
  else {
    uVar6 = param_5 == (byte *)(ulong)*(uint *)(lVar2 + 0x28);
    iVar8 = (int)plVar9;
    if ((byte *)(ulong)*(uint *)(lVar2 + 0x28) < param_5) {
      iVar7 = iVar8 + 8;
      func_0x006fe8b0();
      if (iVar7 != 0) {
        func_0x006fdc08(*(undefined8 *)(plVar9[1] + 0x18),plVar9 + 1);
        (*extraout_x8_03)();
        func_0x006fe878(plVar9 + 1);
        param_5 = (byte *)(ulong)uStack_27c;
        goto LAB_006ef854;
      }
    }
    else {
      func_0x006fdc08(abStack_278);
      func_0x006e3440();
LAB_006ef854:
      if ((int)param_5 != 0x80) {
        func_0x006fd9c0(abStack_278 + ((ulong)param_5 & 0xffffffff));
      }
      for (lVar12 = 0; uVar6 = lVar12 == 0x80, !(bool)uVar6; lVar12 = lVar12 + 1) {
        abStack_278[lVar12 + 0x80] = abStack_278[lVar12] ^ 0x36;
      }
      iVar7 = iVar8 + 0x28;
      func_0x006fe8b0();
      if (iVar7 != 0) {
        param_5 = abStack_278 + 0x80;
        (**(code **)(plVar9[5] + 0x18))(plVar9 + 5,abStack_278 + 0x80,*(undefined4 *)(lVar2 + 0x28))
        ;
        for (lVar12 = 0; uVar6 = lVar12 == 0x80, !(bool)uVar6; lVar12 = lVar12 + 1) {
          param_5[lVar12] = abStack_278[lVar12] ^ 0x5c;
        }
        iVar8 = iVar8 + 0x48;
        func_0x006fe8b0();
        if (iVar8 != 0) {
          (**(code **)(plVar9[9] + 0x18))
                    (plVar9 + 9,abStack_278 + 0x80,*(undefined4 *)(lVar2 + 0x28));
          *plVar9 = lVar2;
          goto LAB_006ef914;
        }
      }
    }
    pbVar15 = (byte *)0x0;
  }
  func_0x006fd534(uStack_178);
  if ((bool)uVar6) {
    return pbVar15;
  }
  ___stack_chk_fail();
  pcStack_288 = FUN_006ef950;
  uStack_2b0 = param_4;
  pbStack_2a8 = param_5;
  lStack_2a0 = lVar2;
  plStack_298 = plVar9;
  ppuStack_290 = &puStack_140;
  func_0x006fd720();
  func_0x006fd5fc();
  uStack_2b8 = extraout_x8_04;
  func_0x006fe878(pbVar15 + 8);
  pbVar15 = param_5 + 8;
  FUN_006ea838(pbVar15,param_5 + 0x48);
  if ((int)pbVar15 == 0) {
    *(undefined4 *)plVar9 = 0;
  }
  else {
    (**(code **)(*(long *)(param_5 + 8) + 0x18))(param_5 + 8,auStack_2f8,uStack_2fc);
    func_0x006fdbc4(param_5 + 8);
    FUN_006ea9b8();
    pbVar15 = (byte *)((long)&MACH_HEADER.magic + 1);
  }
  func_0x006fd534(uStack_2b8);
  if (!(bool)uVar6) {
    ___stack_chk_fail();
    FUN_006ea7fc(pbVar15 + 0x28);
    FUN_006ea7fc(pbVar15 + 0x48);
    pbVar11 = pbVar15 + 8;
    FUN_006ea7fc(pbVar11);
    func_0x006fe580();
    *(ulong *)(pbVar15 + 0x28) =
         CONCAT17(uVar32,CONCAT16(uVar31,CONCAT15(uVar30,CONCAT14(uVar29,CONCAT13(uVar28,CONCAT12(
                                                  uVar27,CONCAT11(uVar26,uVar25)))))));
    *(ulong *)(pbVar15 + 0x20) =
         CONCAT17(uVar24,CONCAT16(uVar23,CONCAT15(uVar22,CONCAT14(uVar21,CONCAT13(uVar20,CONCAT12(
                                                  uVar19,CONCAT11(uVar18,uVar17)))))));
    *(ulong *)(pbVar15 + 0x38) =
         CONCAT17(uVar32,CONCAT16(uVar31,CONCAT15(uVar30,CONCAT14(uVar29,CONCAT13(uVar28,CONCAT12(
                                                  uVar27,CONCAT11(uVar26,uVar25)))))));
    *(ulong *)(pbVar15 + 0x30) =
         CONCAT17(uVar24,CONCAT16(uVar23,CONCAT15(uVar22,CONCAT14(uVar21,CONCAT13(uVar20,CONCAT12(
                                                  uVar19,CONCAT11(uVar18,uVar17)))))));
    *(ulong *)(pbVar15 + 0x48) =
         CONCAT17(uVar32,CONCAT16(uVar31,CONCAT15(uVar30,CONCAT14(uVar29,CONCAT13(uVar28,CONCAT12(
                                                  uVar27,CONCAT11(uVar26,uVar25)))))));
    *(ulong *)(pbVar15 + 0x40) =
         CONCAT17(uVar24,CONCAT16(uVar23,CONCAT15(uVar22,CONCAT14(uVar21,CONCAT13(uVar20,CONCAT12(
                                                  uVar19,CONCAT11(uVar18,uVar17)))))));
    *(ulong *)(pbVar15 + 0x58) =
         CONCAT17(uVar32,CONCAT16(uVar31,CONCAT15(uVar30,CONCAT14(uVar29,CONCAT13(uVar28,CONCAT12(
                                                  uVar27,CONCAT11(uVar26,uVar25)))))));
    *(ulong *)(pbVar15 + 0x50) =
         CONCAT17(uVar24,CONCAT16(uVar23,CONCAT15(uVar22,CONCAT14(uVar21,CONCAT13(uVar20,CONCAT12(
                                                  uVar19,CONCAT11(uVar18,uVar17)))))));
    pbVar15[0x60] = 0;
    pbVar15[0x61] = 0;
    pbVar15[0x62] = 0;
    pbVar15[99] = 0;
    pbVar15[100] = 0;
    pbVar15[0x65] = 0;
    pbVar15[0x66] = 0;
    pbVar15[0x67] = 0;
    return pbVar11;
  }
  return pbVar15;
}



/* Entry: 006e2808; end: 006e283f;  */

void FUN_006e2808(undefined8 param_1)

{
  long lVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  byte *pbVar7;
  long lVar8;
  long lVar9;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  undefined8 extraout_x8_01;
  byte *unaff_x21;
  undefined8 in_register_00005008;
  undefined4 uStack_1cc;
  undefined1 auStack_1c8 [64];
  undefined8 uStack_188;
  uint uStack_14c;
  byte abStack_148 [256];
  undefined8 uStack_48;
  
  plVar5 = (long *)&stack0x00000010;
  lVar8 = 0;
  lVar9 = 0;
  func_0x006fdb48(plVar5,0,0,0,0);
  plVar6 = plVar5;
  func_0x006fd5fc();
  lVar1 = *plVar6;
  if (lVar9 != 0) {
    lVar1 = lVar9;
  }
  uStack_48 = extraout_x8;
  if ((lVar8 == 0) && (uVar2 = lVar1 == *plVar6, (bool)uVar2)) {
LAB_006ef914:
    plVar6 = plVar5 + 1;
    FUN_006ea838(plVar6,plVar5 + 5);
  }
  else {
    uVar2 = unaff_x21 == (byte *)(ulong)*(uint *)(lVar1 + 0x28);
    iVar4 = (int)plVar5;
    if ((byte *)(ulong)*(uint *)(lVar1 + 0x28) < unaff_x21) {
      iVar3 = iVar4 + 8;
      func_0x006fe8b0();
      if (iVar3 != 0) {
        func_0x006fdc08(*(undefined8 *)(plVar5[1] + 0x18),plVar5 + 1);
        (*extraout_x8_00)();
        func_0x006fe878(plVar5 + 1);
        unaff_x21 = (byte *)(ulong)uStack_14c;
        goto LAB_006ef854;
      }
    }
    else {
      func_0x006fdc08(abStack_148);
      func_0x006e3440();
LAB_006ef854:
      if ((int)unaff_x21 != 0x80) {
        func_0x006fd9c0(abStack_148 + ((ulong)unaff_x21 & 0xffffffff));
      }
      for (lVar8 = 0; uVar2 = lVar8 == 0x80, !(bool)uVar2; lVar8 = lVar8 + 1) {
        abStack_148[lVar8 + 0x80] = abStack_148[lVar8] ^ 0x36;
      }
      iVar3 = iVar4 + 0x28;
      func_0x006fe8b0();
      if (iVar3 != 0) {
        unaff_x21 = abStack_148 + 0x80;
        (**(code **)(plVar5[5] + 0x18))(plVar5 + 5,abStack_148 + 0x80,*(undefined4 *)(lVar1 + 0x28))
        ;
        for (lVar8 = 0; uVar2 = lVar8 == 0x80, !(bool)uVar2; lVar8 = lVar8 + 1) {
          unaff_x21[lVar8] = abStack_148[lVar8] ^ 0x5c;
        }
        iVar4 = iVar4 + 0x48;
        func_0x006fe8b0();
        if (iVar4 != 0) {
          (**(code **)(plVar5[9] + 0x18))
                    (plVar5 + 9,abStack_148 + 0x80,*(undefined4 *)(lVar1 + 0x28));
          *plVar5 = lVar1;
          goto LAB_006ef914;
        }
      }
    }
    plVar6 = (long *)0x0;
  }
  func_0x006fd534(uStack_48);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x006fd720();
  func_0x006fd5fc();
  uStack_188 = extraout_x8_01;
  func_0x006fe878(plVar6 + 1);
  pbVar7 = unaff_x21 + 8;
  FUN_006ea838(pbVar7,unaff_x21 + 0x48);
  if ((int)pbVar7 == 0) {
    *(undefined4 *)plVar5 = 0;
  }
  else {
    (**(code **)(*(long *)(unaff_x21 + 8) + 0x18))(unaff_x21 + 8,auStack_1c8,uStack_1cc);
    func_0x006fdbc4(unaff_x21 + 8);
    FUN_006ea9b8();
    pbVar7 = (byte *)((long)&MACH_HEADER.magic + 1);
  }
  func_0x006fd534(uStack_188);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  FUN_006ea7fc(pbVar7 + 0x28);
  FUN_006ea7fc(pbVar7 + 0x48);
  FUN_006ea7fc(pbVar7 + 8);
  func_0x006fe580();
  *(undefined8 *)(pbVar7 + 0x28) = in_register_00005008;
  *(undefined8 *)(pbVar7 + 0x20) = param_1;
  *(undefined8 *)(pbVar7 + 0x38) = in_register_00005008;
  *(undefined8 *)(pbVar7 + 0x30) = param_1;
  *(undefined8 *)(pbVar7 + 0x48) = in_register_00005008;
  *(undefined8 *)(pbVar7 + 0x40) = param_1;
  *(undefined8 *)(pbVar7 + 0x58) = in_register_00005008;
  *(undefined8 *)(pbVar7 + 0x50) = param_1;
  pbVar7[0x60] = 0;
  pbVar7[0x61] = 0;
  pbVar7[0x62] = 0;
  pbVar7[99] = 0;
  pbVar7[100] = 0;
  pbVar7[0x65] = 0;
  pbVar7[0x66] = 0;
  pbVar7[0x67] = 0;
  return;
}



/* Entry: 006e2840; end: 006e291b;  */

undefined8
FUN_006e2840(long param_1,int *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  dword *pdVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  
  pdVar1 = &MACH_HEADER.flags;
  FUN_00701e90();
  if (pdVar1 == (dword *)0x0) {
    FUN_006e2adc();
    FUN_006de8e4();
    return 0;
  }
  *(undefined8 *)pdVar1 = param_3;
  *(undefined8 *)(pdVar1 + 2) = param_4;
  *(undefined8 *)(pdVar1 + 4) = param_5;
  func_0x007064f0(param_1);
  lVar2 = *(long *)(param_1 + 200);
  if (lVar2 == 0) {
    FUN_00705ed8();
    *(long *)(param_1 + 200) = lVar2;
    if (lVar2 != 0) goto LAB_006e289c;
  }
  else {
LAB_006e289c:
    func_0x00706268();
    if (lVar2 != 0) {
      if (*(undefined8 **)(param_1 + 200) == (undefined8 *)0x0) {
        iVar3 = -1;
      }
      else {
        iVar3 = (int)**(undefined8 **)(param_1 + 200) + -1;
      }
      *param_2 = iVar3 + (uint)*(byte *)(param_1 + 0xd0);
      uVar4 = 1;
      goto LAB_006e28fc;
    }
  }
  FUN_006e2adc();
  FUN_006de8e4();
  func_0x00701ed0(pdVar1);
  uVar4 = 0;
LAB_006e28fc:
  func_0x00706528(param_1);
  return uVar4;
}



/* Entry: 006e291c; end: 006e29af;  */

undefined8 FUN_006e291c(long *param_1,int param_2,undefined8 param_3)

{
  int *piVar1;
  ulong *puVar2;
  int iVar3;
  
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
    FUN_00705ed8();
    *param_1 = (long)piVar1;
    if (piVar1 == (int *)0x0) goto LAB_006e2970;
  }
  iVar3 = *piVar1 + -1;
  do {
    puVar2 = (ulong *)*param_1;
    iVar3 = iVar3 + 1;
    if (param_2 < iVar3) {
      if ((puVar2 != (ulong *)0x0) && ((ulong)(long)param_2 < *puVar2)) {
        *(undefined8 *)(puVar2[1] + (long)param_2 * 8) = param_3;
      }
      return 1;
    }
    func_0x00706268(puVar2,0);
  } while (puVar2 != (ulong *)0x0);
LAB_006e2970:
  FUN_006e2adc();
  FUN_006de8e4();
  return 0;
}



/* Entry: 006e29b0; end: 006e29e3;  */

undefined8 FUN_006e29b0(long *param_1,uint param_2)

{
  undefined8 uVar1;
  ulong *puVar2;
  
  uVar1 = 0;
  if ((-1 < (int)param_2) && (puVar2 = (ulong *)*param_1, puVar2 != (ulong *)0x0)) {
    if (*puVar2 <= (ulong)param_2) {
      return 0;
    }
    uVar1 = *(undefined8 *)(puVar2[1] + (ulong)param_2 * 8);
  }
  return uVar1;
}



/* Entry: 006e29e4; end: 006e2adb;  */

void FUN_006e29e4(uint *param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                 undefined2 param_5)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  ulong *puVar5;
  uint *puVar6;
  long *plVar7;
  uint uVar8;
  ulong uVar9;
  code *pcVar10;
  undefined8 *puVar11;
  
  if (*param_3 != 0) {
    plVar7 = param_3;
    func_0x007064d4();
    uVar8 = (uint)plVar7;
    puVar5 = *(ulong **)(param_1 + 0x32);
    if ((puVar5 == (ulong *)0x0) || (*puVar5 == 0)) {
      func_0x0070650c(param_1);
      puVar5 = (ulong *)0x0;
    }
    else {
      FUN_00706288();
      puVar6 = param_1;
      func_0x0070650c();
      if (puVar5 == (ulong *)0x0) {
        FUN_006e2adc();
        puVar3 = puVar6;
        FUN_006de604();
        if (puVar3 != (uint *)0x0) {
          if (((int)puVar6 == 2) && (uVar8 == 0)) {
            puVar4 = puVar3;
            ___error();
            uVar8 = *puVar4;
          }
          uVar2 = puVar3[0x60];
          uVar1 = uVar2 + 1 & 0xf;
          puVar3[0x60] = uVar1;
          if (uVar1 == puVar3[0x61]) {
            puVar3[0x61] = uVar2 + 2 & 0xf;
          }
          puVar3 = puVar3 + (ulong)uVar1 * 6;
          func_0x006de65c(puVar3);
          *(undefined8 *)puVar3 = param_4;
          *(undefined2 *)(puVar3 + 5) = param_5;
          puVar3[4] = uVar8 & 0xfff | (int)puVar6 << 0x18;
        }
        return;
      }
      for (uVar9 = 0; uVar9 < *puVar5; uVar9 = uVar9 + 1) {
        puVar11 = *(undefined8 **)(puVar5[1] + uVar9 * 8);
        pcVar10 = (code *)puVar11[2];
        if (pcVar10 != (code *)0x0) {
          uVar8 = param_1[0x34];
          plVar7 = param_3;
          FUN_006e29b0(param_3,(int)uVar9 + (uint)(byte)uVar8);
          (*pcVar10)(param_2,plVar7,param_3,(int)uVar9 + (uint)(byte)uVar8,*puVar11,puVar11[1]);
        }
      }
    }
    FUN_00705f10(puVar5);
    FUN_00705f10(*param_3);
    *param_3 = 0;
  }
  return;
}



/* Entry: 006e2adc; end: 006e2af3;  */

undefined8 FUN_006e2adc(void)

{
  return 0xe;
}



/* Entry: 006e2af4; end: 006e2b7b;  */

void FUN_006e2af4(void)

{
  long unaff_x19;
  undefined1 auStack_430 [64];
  undefined1 auStack_3f0 [960];
  
  func_0x006fd720();
  func_0x006fe974();
  func_0x006fe430();
  func_0x006e2f80(auStack_3f0,*(undefined4 *)(unaff_x19 + 0xf0),auStack_430);
  func_0x006fdf98();
  func_0x006fe8e4();
  return;
}



/* Entry: 006e2b7c; end: 006e2e9b;  */

void FUN_006e2b7c(dword *param_1,int param_2,undefined8 *param_3)

{
  byte bVar1;
  bool bVar2;
  dword *pdVar3;
  undefined8 extraout_x8;
  long lVar4;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long extraout_x8_02;
  ulong uVar5;
  ulong extraout_x9;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *unaff_x21;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  func_0x006fdfa4();
  pdVar3 = param_1;
  func_0x006fd5fc();
  in_stack_00000048 = extraout_x8;
  if (param_2 == 0x100) {
    func_0x006fd8c0(0xe);
    param_3[1] = in_stack_00000040;
    *param_3 = in_stack_00000038;
    func_0x006f7a38(&stack0x00000028,param_1 + 4);
    param_3[3] = in_stack_00000030;
    param_3[2] = in_stack_00000028;
    param_1 = &MACH_HEADER.magic;
    while( true ) {
      param_1 = (dword *)((long)param_1 + 2);
      pdVar3 = (dword *)&stack0x00000018;
      func_0x006f7a7c(pdVar3,in_stack_00000028,in_stack_00000030);
      lVar4 = 0;
      while (lVar4 != 2) {
        func_0x006feb44();
        func_0x006fd978();
        lVar4 = extraout_x8_02;
      }
      puVar9 = param_3 + (long)param_1 * 2;
      puVar9[1] = in_stack_00000040;
      *puVar9 = in_stack_00000038;
      bVar2 = true;
      if (param_1 == (dword *)((long)&MACH_HEADER.filetype + 2)) break;
      func_0x006f7a7c(&stack0x00000018,in_stack_00000038,in_stack_00000040);
      for (lVar4 = 0; lVar4 != 0x10; lVar4 = lVar4 + 8) {
        uVar8 = (ulong)*(ushort *)((long)&stack0x00000018 + lVar4 + 6) ^
                *(ulong *)((long)&stack0x00000028 + lVar4);
        *(ulong *)((long)&stack0x00000028 + lVar4) =
             uVar8 << 0x20 ^ uVar8 << 0x10 ^ uVar8 << 0x30 ^ uVar8;
      }
      puVar9[3] = in_stack_00000030;
      puVar9[2] = in_stack_00000028;
    }
  }
  else if (param_2 == 0xc0) {
    func_0x006fd8c0(0xc);
    param_3[1] = in_stack_00000040;
    *param_3 = in_stack_00000038;
    in_stack_00000018 = *(undefined8 *)(param_1 + 4);
    in_stack_00000020 = 0;
    pdVar3 = (dword *)&stack0x00000028;
    func_0x006f7a38(pdVar3,&stack0x00000018);
    puVar9 = &stack0x00000028;
    for (param_1 = (dword *)0x0; puVar6 = unaff_x21, bVar2 = param_1 == &MACH_HEADER.cputype, !bVar2
        ; param_1 = (dword *)((long)param_1 + 1)) {
      func_0x006f7a7c(&stack0x00000008,*puVar9,puVar9[1]);
      uVar8 = 0;
      uVar5 = (ulong)(byte)(&UNK_00836660)[(long)param_1 * 2];
      while (uVar8 != 2) {
        uVar5 = puVar9[uVar8] |
                (ulong)((uint)puVar6[uVar8] ^ (uint)(uVar5 >> ((uVar8 & 0xf) << 2)) & 0xf) << 0x20;
        puVar9[uVar8] = uVar5;
        uVar5 = uVar5 ^ (*(ulong *)(&stack0x00000008 + uVar8 * 8) >> 4 & 0xfff0000 |
                        (*(ulong *)(&stack0x00000008 + uVar8 * 8) >> 0x10 & 0xf) << 0x1c) << 0x10;
        puVar9[uVar8] = uVar5 ^ (uVar5 >> 0x20) << 0x30;
        func_0x006fd978();
        uVar8 = extraout_x8_01;
        uVar5 = extraout_x9;
      }
      uVar10 = *puVar9;
      param_3[(long)param_1 * 6 + 3] = puVar9[1];
      param_3[(long)param_1 * 6 + 2] = uVar10;
      uVar10 = *puVar6;
      param_3[(long)param_1 * 6 + 5] = puVar6[1];
      param_3[(long)param_1 * 6 + 4] = uVar10;
      pdVar3 = (dword *)&stack0x00000008;
      func_0x006f7a7c(pdVar3,*puVar6,puVar6[1]);
      bVar1 = (&UNK_00836661)[(long)param_1 * 2];
      for (uVar8 = 0; uVar8 != 2; uVar8 = uVar8 + 1) {
        uVar7 = puVar6[uVar8];
        uVar5 = ((ulong)puVar9[uVar8] >> 0x20 | uVar7 << 0x20) ^
                (ulong)(bVar1 >> ((uVar8 & 0xf) << 2)) & 0xf;
        puVar9[uVar8] = uVar5;
        uVar5 = (*(ulong *)(&stack0x00000008 + uVar8 * 8) >> 0x24 & 0xf000 |
                *(ulong *)(&stack0x00000008 + uVar8 * 8) >> 0x34) ^ uVar5;
        uVar5 = uVar5 << 0x20 ^ uVar5 << 0x10 ^ uVar5 << 0x30 ^ uVar5;
        puVar9[uVar8] = uVar5;
        uVar5 = uVar5 >> 0x30 ^ uVar7 >> 0x20;
        puVar6[uVar8] = (uint)((int)uVar5 << 0x10) ^ uVar5;
      }
      uVar10 = *puVar9;
      param_3[(long)param_1 * 6 + 7] = puVar9[1];
      param_3[(long)param_1 * 6 + 6] = uVar10;
      unaff_x21 = puVar9;
      puVar9 = puVar6;
    }
  }
  else {
    bVar2 = false;
    if (param_2 == 0x80) {
      func_0x006fd8c0(10);
      param_3[1] = in_stack_00000040;
      *param_3 = in_stack_00000038;
      param_1 = &MACH_HEADER.magic;
      while (param_1 = (dword *)((long)param_1 + 1),
            bVar2 = param_1 == (dword *)((long)&MACH_HEADER.cpusubtype + 3), !bVar2) {
        pdVar3 = (dword *)&stack0x00000028;
        func_0x006f7a7c(pdVar3,in_stack_00000038,in_stack_00000040);
        lVar4 = 0;
        while (lVar4 != 2) {
          func_0x006feb44();
          func_0x006fd978();
          lVar4 = extraout_x8_00;
        }
        (param_3 + (long)param_1 * 2)[1] = in_stack_00000040;
        param_3[(long)param_1 * 2] = in_stack_00000038;
      }
    }
  }
  func_0x006fd534(in_stack_00000048);
  if (!bVar2) {
    ___stack_chk_fail();
    func_0x006fd8fc();
    puVar9 = (undefined8 *)(pdVar3 + 8);
    for (uVar8 = 0; uVar8 <= *(uint *)(param_3 + 0x1e); uVar8 = uVar8 + 1) {
      lVar4 = 4;
      puVar6 = puVar9;
      do {
        uVar10 = (param_3 + uVar8 * 2)[1];
        puVar6[-4] = param_3[uVar8 * 2];
        *puVar6 = uVar10;
        lVar4 = lVar4 + -1;
        puVar6 = puVar6 + 1;
      } while (lVar4 != 0);
      FUN_006f7b0c(param_1 + uVar8 * 0x10);
      puVar9 = puVar9 + 8;
    }
    return;
  }
  return;
}



/* Entry: 006e2e9c; end: 006e300f;  */

void FUN_006e2e9c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long unaff_x19;
  long unaff_x20;
  ulong uVar5;
  undefined8 *puVar6;
  
  func_0x006fd8fc();
  puVar6 = (undefined8 *)(param_1 + 0x20);
  for (uVar5 = 0; uVar5 <= *(uint *)(unaff_x19 + 0xf0); uVar5 = uVar5 + 1) {
    puVar1 = (undefined8 *)(unaff_x19 + uVar5 * 0x10);
    lVar3 = 4;
    puVar4 = puVar6;
    do {
      uVar2 = puVar1[1];
      puVar4[-4] = *puVar1;
      *puVar4 = uVar2;
      lVar3 = lVar3 + -1;
      puVar4 = puVar4 + 1;
    } while (lVar3 != 0);
    FUN_006f7b0c(unaff_x20 + uVar5 * 0x40);
    puVar6 = puVar6 + 8;
  }
  return;
}



/* Entry: 006e3010; end: 006e308b;  */

void FUN_006e3010(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  ulong uVar4;
  ulong uVar5;
  ulong auStack_80 [4];
  ulong auStack_60 [4];
  
  func_0x006fd8fc();
  auStack_60[1] = *(undefined8 *)(param_3 + 0x28);
  auStack_60[0] = *(ulong *)(param_3 + 0x20);
  auStack_60[3] = *(undefined8 *)(param_3 + 0x38);
  auStack_60[2] = *(undefined8 *)(param_3 + 0x30);
  func_0x006fe96c();
  puVar1 = (ulong *)(unaff_x20 + 8);
  puVar2 = auStack_60;
  for (; unaff_x19 != 0; unaff_x19 = unaff_x19 + -1) {
    uVar5 = puVar2[-4];
    uVar4 = *puVar2;
    uVar3 = uVar5 & 0xffffffff | uVar4 << 0x20;
    func_0x006f7f10();
    uVar4 = uVar4 & 0xffffffff00000000 | uVar5 >> 0x20;
    func_0x006f7f10();
    puVar1[-1] = uVar3;
    *puVar1 = uVar4;
    puVar1 = puVar1 + 2;
    puVar2 = puVar2 + 1;
  }
  return;
}



/* Entry: 006e308c; end: 006e317f;  */

/* WARNING: Possible PIC construction at 0x006e30d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x006e30d4) */

void FUN_006e308c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_2;
  func_0x006fe794();
  func_0x006f7f48(param_3);
  FUN_006f7f84();
  if (param_2 == 1) {
    func_0x006fd9d0();
  }
  else {
    func_0x006fdab0();
  }
  for (lVar2 = 0; lVar2 != 0x40; lVar2 = lVar2 + 8) {
    *(ulong *)(param_3 + lVar2) = *(ulong *)(lVar1 + lVar2) ^ *(ulong *)(param_3 + lVar2);
  }
  return;
}



/* Entry: 006e3180; end: 006e329b;  */

void FUN_006e3180(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                 undefined8 *param_5)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  ulong unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x30;
  undefined8 uVar6;
  undefined1 auStack_488 [64];
  undefined1 auStack_448 [64];
  uint auStack_408 [2];
  undefined8 uStack_400;
  undefined1 auStack_3c8 [968];
  
  if (param_3 != 0) {
    func_0x006fdcd0();
    lVar4 = param_4;
    func_0x006fdbac();
    FUN_006e2e9c(auStack_3c8,lVar4);
    for (lVar4 = 0; lVar4 != 0x40; lVar4 = lVar4 + 0x10) {
      uVar6 = *param_5;
      *(undefined8 *)((long)&uStack_400 + lVar4) = param_5[1];
      *(undefined8 *)((long)auStack_408 + lVar4) = uVar6;
    }
    uVar2 = (uStack_400._4_4_ & 0xff00ff00) >> 8 | (uStack_400._4_4_ & 0xff00ff) << 8;
    uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
    while( true ) {
      uVar5 = uVar2;
      for (lVar4 = 0xc; lVar4 != 0x4c; lVar4 = lVar4 + 0x10) {
        uVar3 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
        *(uint *)((long)auStack_408 + lVar4) = uVar3 >> 0x10 | uVar3 << 0x10;
        uVar5 = uVar5 + 1;
      }
      uVar1 = unaff_x20;
      if (3 < unaff_x20) {
        uVar1 = 4;
      }
      func_0x006e2f04(auStack_488,auStack_408,uVar1);
      func_0x006e2f80(auStack_3c8,*(undefined4 *)(param_4 + 0xf0),auStack_488);
      FUN_006e3010(auStack_448,uVar1,auStack_488);
      for (lVar4 = 0; uVar1 * 0x10 - lVar4 != 0; lVar4 = lVar4 + 0x10) {
        FUN_006e329c(unaff_x21 + lVar4,unaff_x22 + lVar4,auStack_448 + lVar4);
      }
      unaff_x20 = unaff_x20 - uVar1;
      if (unaff_x20 == 0) break;
      unaff_x22 = unaff_x22 + 0x40;
      unaff_x21 = unaff_x21 + 0x40;
      uVar2 = uVar2 + 4;
    }
    func_0x006fdca0(unaff_x30);
  }
  return;
}



/* Entry: 006e329c; end: 006e32c3;  */

void FUN_006e329c(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  
  for (uVar1 = 0; uVar1 < 0x10; uVar1 = uVar1 + 8) {
    *(ulong *)(param_1 + uVar1) = *(ulong *)(param_3 + uVar1) ^ *(ulong *)(param_2 + uVar1);
  }
  return;
}



/* Entry: 006e32c4; end: 006e3433;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_006e32c4(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5,int param_6)

{
  long lVar1;
  ulong uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 *unaff_x19;
  ulong uVar5;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  ulong uVar6;
  undefined1 auStack_460 [64];
  undefined1 auStack_420 [944];
  undefined8 auStack_70 [11];
  undefined8 uStack_18;
  
  func_0x006fdcd0();
  func_0x006fd588();
  uVar3 = (dword *)param_3 == &MACH_HEADER.ncmds;
  if ((undefined8 *)((long)&MACH_HEADER.filetype + 3) < param_3) {
    func_0x006fde00();
    uVar6 = (ulong)param_3 >> 4;
    FUN_006e2e9c(auStack_420,param_4);
    uStack_18 = unaff_x19[1];
    auStack_70[10] = *unaff_x19;
    if (param_6 == 0) {
      do {
        uVar2 = uVar6;
        if (3 < uVar6) {
          uVar2 = 4;
        }
        ___memcpy_chk(auStack_70 + 2,unaff_x22,uVar2 * 0x10,0x40);
        func_0x006fe184(auStack_460);
        func_0x006e2f04();
        FUN_006e308c(auStack_420,*(undefined4 *)(unaff_x20 + 0xf0),auStack_460);
        func_0x006fdf80();
        FUN_006e3010();
        param_3 = auStack_70 + 10;
        func_0x006fe0cc();
        FUN_006e329c();
        lVar4 = 0;
        for (uVar5 = 1; uVar5 < uVar2; uVar5 = uVar5 + 1) {
          lVar1 = lVar4 + 0x10;
          param_3 = (undefined8 *)((long)auStack_70 + lVar4 + 0x10);
          FUN_006e329c(lVar1 + (long)unaff_x21,lVar1 + (long)unaff_x21);
          lVar4 = lVar1;
        }
        uStack_18 = auStack_70[uVar2 * 2 + 1];
        auStack_70[10] = auStack_70[uVar2 * 2];
        unaff_x22 = unaff_x22 + 0x40;
        unaff_x21 = unaff_x21 + 8;
        uVar6 = uVar6 - uVar2;
        uVar3 = uVar6 == 0;
      } while (!(bool)uVar3);
    }
    else {
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        FUN_006e329c(auStack_70 + 10,auStack_70 + 10,unaff_x22);
        func_0x006e2f04(auStack_70 + 2,auStack_70 + 10,1);
        func_0x006e2f80(auStack_420,*(undefined4 *)(unaff_x20 + 0xf0),auStack_70 + 2);
        param_3 = auStack_70 + 2;
        func_0x006fe8e4(unaff_x21);
        uStack_18 = unaff_x21[1];
        auStack_70[10] = *unaff_x21;
        unaff_x22 = unaff_x22 + 0x10;
        unaff_x21 = unaff_x21 + 2;
      }
    }
    unaff_x19[1] = uStack_18;
    *unaff_x19 = auStack_70[10];
  }
  func_0x006fd508();
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    if (param_3 == (undefined8 *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0077a864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memmove_0099a400)();
    return;
  }
  return;
}



/* Entry: 006e3434; end: 006e344b;  */

void FUN_006e3434(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memmove_0099a400)();
    return;
  }
  return;
}



/* Entry: 006e344c; end: 006e34db;  */

long FUN_006e344c(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_2 + 0x10);
  if (iVar3 == *(int *)(param_3 + 0x10)) {
    lVar2 = param_1;
    func_0x006e3520(param_1);
  }
  else {
    lVar2 = param_1;
    func_0x006fdc54();
    iVar1 = (int)lVar2;
    FUN_006e34dc();
    if (iVar1 < 0) {
      func_0x006fd9d0();
      func_0x006e34f8();
      if (iVar1 == 0) {
        return 0;
      }
      iVar3 = 1;
    }
    else {
      func_0x006fd7d4();
      func_0x006e34f8();
      iVar3 = 0;
      if (iVar1 == 0) {
        return 0;
      }
    }
    lVar2 = 1;
  }
  *(int *)(param_1 + 0x10) = iVar3;
  return lVar2;
}



/* Entry: 006e34dc; end: 006e34f7;  */

uint FUN_006e34dc(long *param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  ulong *puVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  
  plVar8 = (long *)*param_1;
  uVar10 = (ulong)(int)param_1[1];
  plVar6 = (long *)*param_2;
  uVar7 = (ulong)(int)param_2[1];
  uVar5 = 0;
  plVar2 = plVar8;
  plVar3 = plVar6;
  uVar9 = uVar10;
  if (uVar7 <= uVar10) {
    uVar9 = uVar7;
  }
  for (; uVar9 != 0; uVar9 = uVar9 - 1) {
    uVar1 = (uint)((ulong)*plVar2 >> 0x20);
    lVar11 = *plVar2 - *plVar3;
    uVar1 = ((uint)((ulong)lVar11 >> 0x20) ^ uVar1 | (uint)((ulong)*plVar3 >> 0x20) ^ uVar1) ^ uVar1
    ;
    if (lVar11 != 0) {
      uVar5 = (int)uVar1 >> 0x1f | uVar1 >> 0x1f ^ 1;
    }
    plVar2 = plVar2 + 1;
    plVar3 = plVar3 + 1;
  }
  lVar11 = uVar10 - uVar7;
  if (uVar10 < uVar7) {
    uVar9 = 0;
    for (; uVar10 < uVar7; uVar10 = uVar10 + 1) {
      uVar9 = plVar6[uVar10] | uVar9;
    }
    if (uVar9 != 0) {
      uVar5 = 0xffffffff;
    }
    return uVar5;
  }
  if (lVar11 != 0) {
    uVar10 = 0;
    puVar4 = (ulong *)(plVar8 + uVar7);
    for (; lVar11 != 0; lVar11 = lVar11 + -1) {
      uVar10 = *puVar4 | uVar10;
      puVar4 = puVar4 + 1;
    }
    uVar1 = 0;
    if (uVar10 == 0) {
      uVar1 = uVar5;
    }
    uVar5 = uVar1 | uVar10 != 0;
  }
  return uVar5;
}



/* Entry: 006e34f8; end: 006e3547;  */

void FUN_006e34f8(int param_1)

{
  FUN_006e3a38();
  if (param_1 != 0) {
    func_0x006fdd4c();
  }
  return;
}



/* Entry: 006e3548; end: 006e35db;  */

void FUN_006e3548(ulong *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  plVar2 = param_3;
  if ((int)param_3[1] <= (int)param_2[1]) {
    plVar2 = param_2;
    param_2 = param_3;
  }
  lVar7 = (long)(int)plVar2[1];
  lVar6 = (long)(int)param_2[1];
  puVar3 = param_1;
  FUN_006e35dc(param_1,lVar7 + 1);
  if ((int)puVar3 != 0) {
    *(int *)(param_1 + 1) = (int)(lVar7 + 1);
    uVar4 = *param_1;
    func_0x006fe668(uVar4,*plVar2,*param_2);
    for (; lVar6 < lVar7; lVar6 = lVar6 + 1) {
      uVar5 = *(ulong *)(*plVar2 + lVar6 * 8);
      lVar1 = uVar5 + uVar4;
      uVar4 = (ulong)CARRY8(uVar5,uVar4);
      *(long *)(*param_1 + lVar6 * 8) = lVar1;
    }
    *(ulong *)(*param_1 + lVar7 * 8) = uVar4;
  }
  return;
}



/* Entry: 006e35dc; end: 006e3677;  */

undefined8 FUN_006e35dc(long *param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 <= (ulong)(long)*(int *)((long)param_1 + 0xc)) {
    return 1;
  }
  if (param_2 < 0x800000) {
    if ((*(byte *)((long)param_1 + 0x14) >> 1 & 1) == 0) {
      lVar1 = param_2 << 3;
      FUN_00701e90();
      if (lVar1 != 0) {
        func_0x006e3440();
        func_0x006fe928();
        *param_1 = lVar1;
        *(int *)((long)param_1 + 0xc) = (int)param_2;
        return 1;
      }
      func_0x006fd894();
    }
    else {
      func_0x006fd894();
    }
  }
  else {
    func_0x006fd868();
  }
  func_0x006fd5dc();
  return 0;
}



/* Entry: 006e3678; end: 006e374b;  */

ulong FUN_006e3678(long *param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  undefined8 uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = 0;
  if (param_4 != 0) {
    for (; 3 < param_4; param_4 = param_4 - 4) {
      uVar6 = uVar3 + *param_2;
      uVar3 = (ulong)CARRY8(uVar3,*param_2);
      if (CARRY8(uVar6,*param_3)) {
        uVar3 = uVar3 + 1;
      }
      *param_1 = uVar6 + *param_3;
      uVar4 = param_2[1];
      uVar5 = param_3[1];
      uVar6 = uVar3 + uVar4;
      param_1[1] = uVar6 + uVar5;
      uVar7 = (ulong)CARRY8(param_3[2],param_2[2]);
      uVar1 = nzcv;
      param_1[2] = param_3[2] + param_2[2] + (ulong)CARRY8(uVar3,uVar4) + (ulong)CARRY8(uVar6,uVar5)
      ;
      bVar2 = CARRY8(param_3[3],param_2[3]);
      uVar6 = param_3[3] + param_2[3];
      uVar3 = (ulong)bVar2;
      nzcv = uVar1;
      if (CARRY8(uVar6,uVar7) || CARRY8(uVar6 + uVar7,(ulong)bVar2)) {
        uVar3 = uVar3 + 1;
      }
      param_2 = param_2 + 4;
      param_1[3] = uVar6 + uVar7 + (ulong)bVar2;
      param_3 = param_3 + 4;
      param_1 = param_1 + 4;
    }
    for (uVar6 = 0; param_4 != uVar6; uVar6 = uVar6 + 1) {
      uVar4 = uVar3 + param_2[uVar6];
      uVar3 = (ulong)CARRY8(uVar3,param_2[uVar6]);
      if (CARRY8(uVar4,param_3[uVar6])) {
        uVar3 = uVar3 + 1;
      }
      param_1[uVar6] = uVar4 + param_3[uVar6];
    }
  }
  return uVar3;
}



/* Entry: 006e374c; end: 006e3773;  */

void FUN_006e374c(long param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  FUN_006e3c4c();
  *(int *)(param_1 + 8) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}



/* Entry: 006e3774; end: 006e3857;  */

undefined8 * FUN_006e3774(undefined8 *param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x19;
  ulong unaff_x20;
  
  if (param_2 != 0) {
    func_0x006fda04();
    FUN_006e3858();
    if ((int)param_1 != 0) {
      func_0x006fd9d0();
      if (param_2 == 0) {
        uVar4 = 0;
        *(undefined4 *)(param_1 + 2) = 0;
      }
      else {
        puVar3 = param_1;
        FUN_006e35dc(param_1,1);
        if ((int)puVar3 == 0) {
          return puVar3;
        }
        *(undefined4 *)(param_1 + 2) = 0;
        *(long *)*param_1 = param_2;
        uVar4 = 1;
      }
      *(undefined4 *)(param_1 + 1) = uVar4;
      return (undefined8 *)((long)&MACH_HEADER.magic + 1);
    }
    if ((int)unaff_x19[2] != 0) {
      *(undefined4 *)(unaff_x19 + 2) = 0;
      func_0x006fd9d0();
      func_0x006e38b4();
      plVar2 = unaff_x19;
      FUN_006e3858();
      if ((int)plVar2 != 0) {
        return param_1;
      }
      *(uint *)(unaff_x19 + 2) = (uint)((int)unaff_x19[2] == 0);
      return param_1;
    }
    lVar5 = 0;
    uVar1 = *(uint *)(unaff_x19 + 1);
    for (; unaff_x20 != 0; unaff_x20 = (ulong)CARRY8(uVar6,unaff_x20)) {
      if ((ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) << 3 == lVar5) {
        if (-1 < (int)uVar1) {
          func_0x006fde6c();
          if ((int)param_1 == 0) {
            return (undefined8 *)0x0;
          }
          *(int *)(unaff_x19 + 1) = (int)unaff_x19[1] + 1;
          *(ulong *)(*unaff_x19 + (ulong)uVar1 * 8) = unaff_x20;
        }
        break;
      }
      uVar6 = *(ulong *)(*unaff_x19 + lVar5);
      *(ulong *)(*unaff_x19 + lVar5) = uVar6 + unaff_x20;
      lVar5 = lVar5 + 8;
    }
  }
  return (undefined8 *)((long)&MACH_HEADER.magic + 1);
}



/* Entry: 006e3858; end: 006e385f;  */

bool FUN_006e3858(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = 0;
  for (uVar1 = 0; uVar1 < (ulong)(long)(int)param_1[1]; uVar1 = uVar1 + 1) {
    uVar2 = *(ulong *)(*param_1 + uVar1 * 8) | uVar2;
  }
  return uVar2 == 0;
}



/* Entry: 006e3860; end: 006e3993;  */

void FUN_006e3860(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  else {
    puVar1 = param_1;
    FUN_006e35dc(param_1,1);
    if ((int)puVar1 == 0) {
      return;
    }
    *(undefined4 *)(param_1 + 2) = 0;
    *(long *)*param_1 = param_2;
    uVar2 = 1;
  }
  *(undefined4 *)(param_1 + 1) = uVar2;
  return;
}



/* Entry: 006e3994; end: 006e3a37;  */

void FUN_006e3994(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_2 + 0x10) == 0) {
    if (*(int *)(param_3 + 0x10) == 0) goto LAB_006e39ec;
    uVar3 = 0;
LAB_006e39d4:
    lVar2 = param_1;
    func_0x006fe6c0();
    iVar1 = (int)lVar2;
  }
  else {
    if (*(int *)(param_3 + 0x10) == 0) {
      uVar3 = 1;
      goto LAB_006e39d4;
    }
LAB_006e39ec:
    lVar2 = param_1;
    func_0x006fdf28();
    iVar1 = (int)lVar2;
    FUN_006e34dc();
    if (iVar1 < 0) {
      func_0x006fd7d4();
      FUN_006e34f8();
      if (iVar1 == 0) {
        return;
      }
      uVar3 = 1;
      goto LAB_006e3a28;
    }
    func_0x006fd9d0();
    FUN_006e34f8();
    uVar3 = 0;
  }
  if (iVar1 == 0) {
    return;
  }
LAB_006e3a28:
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  return;
}



/* Entry: 006e3a38; end: 006e3afb;  */

void FUN_006e3a38(ulong param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *unaff_x19;
  long *unaff_x20;
  
  func_0x006fe858();
  func_0x006fda04();
  iVar1 = *(int *)(param_3 + 8);
  iVar2 = *(int *)(param_2 + 8);
  if (iVar2 < iVar1) {
    func_0x006fe0d8();
    FUN_006e3afc();
    if ((int)param_1 == 0) goto LAB_006e3ad4;
  }
  func_0x006fe7dc();
  if ((int)param_1 == 0) {
    return;
  }
  func_0x006fe9a0();
  func_0x006e3b2c();
  lVar3 = unaff_x20[1];
  if (iVar1 <= iVar2) {
    iVar2 = iVar1;
  }
  for (lVar4 = (long)iVar2; lVar4 < (int)lVar3; lVar4 = lVar4 + 1) {
    uVar5 = *(ulong *)(*unaff_x20 + lVar4 * 8);
    *(ulong *)(*unaff_x19 + lVar4 * 8) = uVar5 - param_1;
    param_1 = (ulong)(uVar5 < param_1);
  }
  if (param_1 == 0) {
    *(int *)(unaff_x19 + 1) = (int)lVar3;
    *(undefined4 *)(unaff_x19 + 2) = 0;
    return;
  }
LAB_006e3ad4:
  func_0x006fd894();
  func_0x006fd5dc();
  return;
}



/* Entry: 006e3afc; end: 006e3c13;  */

bool FUN_006e3afc(long *param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = 0;
  for (; param_2 < (ulong)(long)(int)param_1[1]; param_2 = param_2 + 1) {
    uVar1 = *(ulong *)(*param_1 + param_2 * 8) | uVar1;
  }
  return uVar1 == 0;
}



/* Entry: 006e3c14; end: 006e3c4b;  */

void FUN_006e3c14(long param_1,int param_2)

{
  long lVar1;
  undefined4 uVar2;
  
  if ((param_2 == 0) || (lVar1 = param_1, FUN_006e3858(), (int)lVar1 != 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  return;
}



/* Entry: 006e3c4c; end: 006e3c7f;  */

ulong FUN_006e3c4c(long *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar2 = uVar1;
  do {
    uVar3 = (ulong)uVar2;
    if ((int)uVar2 < 1) {
      return (ulong)(uVar1 & (int)uVar1 >> 0x1f);
    }
    uVar2 = uVar2 - 1;
  } while (*(long *)(*param_1 + uVar3 * 8 + -8) == 0);
  return uVar3;
}



/* Entry: 006e3c80; end: 006e3cc3;  */

dword * FUN_006e3c80(void)

{
  dword *pdVar1;
  
  pdVar1 = &MACH_HEADER.flags;
  FUN_00701e90();
  if (pdVar1 == (dword *)0x0) {
    func_0x006fd520(3);
  }
  else {
    *(undefined8 *)(pdVar1 + 2) = 0;
    *(undefined8 *)(pdVar1 + 4) = 0;
    *(undefined8 *)pdVar1 = 0;
    pdVar1[5] = 1;
  }
  return pdVar1;
}



/* Entry: 006e3cc4; end: 006e3ccf;  */

void FUN_006e3cc4(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memset_0099a408)();
    return;
  }
  return;
}



/* Entry: 006e3cd0; end: 006e3dab;  */

/* WARNING: Possible PIC construction at 0x006e3cf0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x006e3cf4) */

void FUN_006e3cd0(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x19;
  long *plVar3;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  if ((*(uint *)((long)param_1 + 0x14) >> 1 & 1) == 0) {
    unaff_x30 = 0x6e3cf4;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    puVar2 = (undefined8 *)*param_1;
    unaff_x19 = param_1;
    unaff_x29 = puVar1;
  }
  else {
    puVar2 = param_1;
    if ((*(uint *)((long)param_1 + 0x14) & 1) == 0) {
      *param_1 = 0;
      return;
    }
  }
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    plVar3 = puVar2 + -1;
    FUN_00701f08(plVar3,*plVar3 + 8);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_0099a260)(plVar3);
    return;
  }
  return;
}



/* Entry: 006e3dac; end: 006e3dd7;  */

undefined8 FUN_006e3dac(void)

{
  func_0x00706544(0xb299d8,FUN_006e3dd8);
  return 0xb63e90;
}



/* Entry: 006e3dd8; end: 006e3e83;  */

void FUN_006e3dd8(void)

{
  puRam0000000000b63e90 = &UNK_00836670;
  uRam0000000000b63ea0 = 0x200000000;
  uRam0000000000b63e98 = 0x100000001;
  return;
}



/* Entry: 006e3e84; end: 006e3eb7;  */

void FUN_006e3e84(long *param_1)

{
  long *plVar1;
  
  plVar1 = param_1;
  FUN_006e3c4c();
  if ((int)plVar1 != 0) {
    func_0x006e3dfc(*(undefined8 *)(*param_1 + (long)((int)plVar1 + -1) * 8));
  }
  return;
}



/* Entry: 006e3eb8; end: 006e3ed3;  */

uint FUN_006e3eb8(int param_1)

{
  FUN_006e3e84();
  return param_1 + 7U >> 3;
}



/* Entry: 006e3ed4; end: 006e3edb;  */

/* WARNING: Removing unreachable block (ram,0x006e389c) */

void FUN_006e3ed4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  FUN_006e35dc(param_1,1);
  if ((int)puVar1 != 0) {
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined8 *)*param_1 = 1;
    *(undefined4 *)(param_1 + 1) = 1;
  }
  return;
}



/* Entry: 006e3edc; end: 006e3f97;  */

void FUN_006e3edc(int param_1)

{
  undefined8 *unaff_x19;
  undefined4 unaff_w20;
  
  func_0x006fd94c();
  FUN_006e35dc();
  if (param_1 != 0) {
    FUN_006e3434(*unaff_x19);
    *(undefined4 *)(unaff_x19 + 1) = unaff_w20;
    *(undefined4 *)(unaff_x19 + 2) = 0;
  }
  return;
}



/* Entry: 006e3f98; end: 006e3fc7;  */

undefined8 FUN_006e3f98(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (0xffffffffffffffc0 < param_2) {
    func_0x006fd868();
    func_0x006fd5dc();
    return 0;
  }
  uVar2 = param_2 + 0x3f >> 6;
  if ((ulong)(long)*(int *)((long)param_1 + 0xc) < uVar2) {
    if (uVar2 < 0x800000) {
      if ((*(byte *)((long)param_1 + 0x14) >> 1 & 1) == 0) {
        lVar1 = uVar2 << 3;
        FUN_00701e90();
        if (lVar1 != 0) {
          func_0x006e3440();
          func_0x006fe928();
          *param_1 = lVar1;
          *(int *)((long)param_1 + 0xc) = (int)uVar2;
          return 1;
        }
        func_0x006fd894();
      }
      else {
        func_0x006fd894();
      }
    }
    else {
      func_0x006fd868();
    }
    func_0x006fd5dc();
    return 0;
  }
  return 1;
}



/* Entry: 006e3fc8; end: 006e402f;  */

void FUN_006e3fc8(long param_1,ulong param_2)

{
  undefined4 unaff_w19;
  long *unaff_x20;
  
  func_0x006fd8fc();
  if (param_2 < (ulong)(long)*(int *)(param_1 + 8)) {
    FUN_006e3afc();
    if ((int)param_1 == 0) {
      func_0x006fd868();
      func_0x006fd5dc();
      return;
    }
  }
  else {
    func_0x006fe774();
    if ((int)param_1 == 0) {
      return;
    }
    func_0x006fd9c0(*unaff_x20 + (long)(int)unaff_x20[1] * 8);
  }
  *(undefined4 *)(unaff_x20 + 1) = unaff_w19;
  return;
}



/* Entry: 006e4030; end: 006e405b;  */

void FUN_006e4030(ulong *param_1,ulong param_2,ulong *param_3,ulong *param_4,long param_5)

{
  for (; param_5 != 0; param_5 = param_5 + -1) {
    *param_1 = *param_4 & ~param_2 | *param_3 & param_2;
    param_4 = param_4 + 1;
    param_3 = param_3 + 1;
    param_1 = param_1 + 1;
  }
  return;
}



/* Entry: 006e405c; end: 006e410f;  */

long * FUN_006e405c(long *param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  long unaff_x20;
  byte *unaff_x21;
  byte *pbVar4;
  long lVar5;
  long *plVar6;
  
  func_0x006fdb2c();
  if (param_3 == (long *)0x0) {
    FUN_006e3c80();
    param_3 = param_1;
    plVar6 = param_1;
    if (param_1 == (long *)0x0) {
      return (long *)0x0;
    }
  }
  else {
    plVar6 = (long *)0x0;
  }
  iVar1 = (int)param_1;
  if (unaff_x20 == 0) {
    *(undefined4 *)(param_3 + 1) = 0;
  }
  else {
    lVar5 = (unaff_x20 - 1U >> 3) + 1;
    func_0x006fe7dc();
    if (iVar1 != 0) {
      uVar3 = (uint)(unaff_x20 - 1U) & 7;
      *(int *)(param_3 + 1) = (int)lVar5;
      *(undefined4 *)(param_3 + 2) = 0;
      do {
        uVar2 = 0;
        iVar1 = uVar3 + 1;
        pbVar4 = unaff_x21;
        do {
          if (unaff_x20 == 0) {
            return param_3;
          }
          unaff_x20 = unaff_x20 + -1;
          unaff_x21 = pbVar4 + 1;
          uVar2 = (ulong)*pbVar4 | uVar2 << 8;
          iVar1 = iVar1 + -1;
          pbVar4 = unaff_x21;
        } while (iVar1 != 0);
        lVar5 = lVar5 + -1;
        *(ulong *)(*param_3 + lVar5 * 8) = uVar2;
        uVar3 = 7;
      } while( true );
    }
    if (plVar6 != (long *)0x0) {
      FUN_006e3cd0(plVar6);
    }
    param_3 = (long *)0x0;
  }
  return param_3;
}



/* Entry: 006e4110; end: 006e4137;  */

bool FUN_006e4110(long param_1,ulong param_2,ulong param_3)

{
  byte bVar1;
  
  bVar1 = 0;
  for (; param_3 < param_2; param_3 = param_3 + 1) {
    bVar1 = *(byte *)(param_1 + param_3) | bVar1;
  }
  return bVar1 == 0;
}



/* Entry: 006e4138; end: 006e41ab;  */

void FUN_006e4138(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined1 *puVar2;
  long unaff_x19;
  ulong unaff_x20;
  undefined1 *puVar3;
  
  func_0x006fda04();
  puVar3 = (undefined1 *)*param_3;
  uVar1 = (long)*(int *)(param_3 + 1) << 3;
  if (((ulong)((long)*(int *)(param_3 + 1) << 3) <= unaff_x20) ||
     (puVar2 = puVar3, FUN_006e4110(), uVar1 = unaff_x20, (int)puVar2 != 0)) {
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      unaff_x20 = unaff_x20 - 1;
      *(undefined1 *)(unaff_x19 + unaff_x20) = *puVar3;
      puVar3 = puVar3 + 1;
    }
    func_0x006fd9c0();
  }
  return;
}


