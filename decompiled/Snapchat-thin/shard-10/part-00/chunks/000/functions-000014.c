/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10734315c; end: 107343193;  */

void FUN_10734315c(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x0001073460ac();
  if (!(bool)in_ZR) {
    func_0x000107344d8c((&PTR_FUN_1109a30e8)[extraout_x8]);
  }
  func_0x000107347650();
  return;
}



/* Entry: 107343194; end: 10734319f;  */

void FUN_107343194(undefined8 param_1,long param_2)

{
  if (*(uint *)(param_2 + 0x30) != 0xffffffff) {
    func_0x000107285594((&PTR_DAT_110996f48)[*(uint *)(param_2 + 0x30)]);
  }
  *(undefined4 *)(param_2 + 0x30) = 0xffffffff;
  return;
}



/* Entry: 1073431a0; end: 1073431f3;  */

void FUN_1073431a0(void)

{
  func_0x000100a2b988();
  func_0x000107310c44();
  func_0x000107346c90();
  FUN_107341ad4();
  return;
}



/* Entry: 1073431f4; end: 107343217;  */

undefined8 FUN_1073431f4(undefined8 param_1)

{
  FUN_107343218();
  return param_1;
}



/* Entry: 107343218; end: 107343267;  */

void FUN_107343218(long param_1,long param_2)

{
  if (*(int *)(param_1 + 0x40) != -1 || *(int *)(param_2 + 0x40) != -1) {
    if (*(int *)(param_2 + 0x40) == -1) {
      if (*(uint *)(param_1 + 0x40) != 0xffffffff) {
        func_0x000107285594((&PTR_DAT_110996f60)[*(uint *)(param_1 + 0x40)],param_1,param_1,param_2)
        ;
      }
      *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
      return;
    }
    func_0x000107345474();
  }
  return;
}



/* Entry: 107343268; end: 10734327b;  */

void FUN_107343268(long *param_1)

{
  if (*(int *)(*param_1 + 0x40) != 0) {
    func_0x0001073460d4();
    FUN_1073432a4();
  }
  return;
}



/* Entry: 10734327c; end: 1073432a3;  */

void FUN_10734327c(long param_1)

{
  if (*(int *)(param_1 + 0x40) != 0) {
    func_0x0001073460d4();
    FUN_1073432a4();
  }
  return;
}



/* Entry: 1073432a4; end: 1073432c3;  */

void FUN_1073432a4(void)

{
  long unaff_x19;
  
  func_0x000107346d54();
  func_0x00010727fc70();
  *(undefined4 *)(unaff_x19 + 0x40) = 0;
  return;
}



/* Entry: 1073432c4; end: 1073432cb;  */

void FUN_1073432c4(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (*(int *)(*param_1 + 0x40) == 1) {
    uVar1 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = uVar1;
    return;
  }
  func_0x0001073460d4();
  FUN_1073432f8();
  return;
}



/* Entry: 1073432cc; end: 1073432f7;  */

void FUN_1073432cc(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x40) == 1) {
    uVar1 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = uVar1;
    return;
  }
  func_0x0001073460d4();
  FUN_1073432f8();
  return;
}



/* Entry: 1073432f8; end: 107343303;  */

void FUN_1073432f8(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x000100a2b988(*param_1,param_1[1]);
  func_0x00010727fc70();
  func_0x000107346d90();
  *(undefined4 *)(unaff_x20 + 0x40) = 1;
  return;
}



/* Entry: 107343304; end: 10734332f;  */

void FUN_107343304(void)

{
  long unaff_x20;
  
  func_0x000100a2b988();
  func_0x00010727fc70();
  func_0x000107346d90();
  *(undefined4 *)(unaff_x20 + 0x40) = 1;
  return;
}



/* Entry: 107343330; end: 107343337;  */

void FUN_107343330(long *param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(int *)(*param_1 + 0x40) == 2) {
    func_0x000100a2b988(param_2,param_3);
    func_0x00010727e15c();
    func_0x000107347614();
    return;
  }
  func_0x0001073460d4();
  FUN_10734338c();
  return;
}



/* Entry: 107343338; end: 10734336b;  */

void FUN_107343338(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(int *)(param_1 + 0x40) == 2) {
    func_0x000100a2b988(param_2,param_3);
    func_0x00010727e15c();
    func_0x000107347614();
    return;
  }
  func_0x0001073460d4();
  FUN_10734338c();
  return;
}



/* Entry: 10734336c; end: 10734338b;  */

void FUN_10734336c(void)

{
  func_0x000100a2b988();
  func_0x00010727e15c();
  func_0x000107347614();
  return;
}



/* Entry: 10734338c; end: 107343397;  */

void FUN_10734338c(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x000100a2b988(*param_1,param_1[1]);
  func_0x00010727fc70();
  func_0x000107345dfc();
  func_0x0001073433c4();
  *(undefined4 *)(unaff_x20 + 0x40) = 2;
  return;
}



/* Entry: 107343398; end: 1073433e7;  */

void FUN_107343398(void)

{
  long unaff_x20;
  
  func_0x000100a2b988();
  func_0x00010727fc70();
  func_0x000107345dfc();
  func_0x0001073433c4();
  *(undefined4 *)(unaff_x20 + 0x40) = 2;
  return;
}



/* Entry: 1073433e8; end: 10734340b;  */

void FUN_1073433e8(long param_1)

{
  if (*(char *)(param_1 + 0x78) == '\x01') {
    func_0x00010727fbf0();
    *(undefined1 *)(param_1 + 0x78) = 0;
  }
  return;
}



/* Entry: 10734340c; end: 107343483;  */

void FUN_10734340c(void)

{
  long unaff_x20;
  
  func_0x000100a2b988();
  func_0x00010727fb44();
  func_0x000107345dfc();
  func_0x000107343438();
  *(undefined4 *)(unaff_x20 + 0x100) = 1;
  return;
}



/* Entry: 107343484; end: 1073434a7;  */

void FUN_107343484(void)

{
  func_0x000107344d34();
  FUN_1073434a8();
  return;
}



/* Entry: 1073434a8; end: 1073434e7;  */

void FUN_1073434a8(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  undefined4 unaff_w21;
  
  func_0x000107345658();
  func_0x00010727fc70();
  func_0x0001073463a8();
  if (!(bool)in_ZR) {
    func_0x0001073448fc(&PTR_FUN_1109a3110);
    *(undefined4 *)(unaff_x19 + 0x40) = unaff_w21;
  }
  return;
}



/* Entry: 1073434e8; end: 107343507;  */

void FUN_1073434e8(void)

{
  return;
}



/* Entry: 107343508; end: 107343587;  */

void FUN_107343508(void)

{
  undefined1 in_ZR;
  
  func_0x0001073455c4();
  if ((bool)in_ZR) {
    func_0x00010727fc70();
  }
  return;
}



/* Entry: 107343588; end: 107343627;  */

void FUN_107343588(long param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  long extraout_x8;
  long extraout_x9;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x00010734479c();
  func_0x000100061de0();
  func_0x0001073464fc();
  if ((extraout_x9 == 0) && (func_0x000107346ad8(), !(bool)in_ZR)) {
    func_0x000107347d00();
    if (((bool)in_CY) && (func_0x000107345a18(), (bool)in_CY)) {
      func_0x000107346644();
    }
    else {
      func_0x0001073464c0();
      FUN_107343628();
    }
    func_0x000107345130();
  }
  func_0x000107345560();
  uVar1 = *(char *)(extraout_x8 + param_1) == -0x80;
  func_0x00010734475c();
  func_0x0001073446ac();
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107348074();
  func_0x000107344ef0();
  FUN_107343698();
  func_0x000107346acc();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x00010727e7fc(param_2);
      func_0x000107344cd8();
      func_0x000107344734();
      func_0x000107347f90();
      FUN_1073436c8();
    }
    param_2 = param_2 + 0x148;
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 107343628; end: 107343697;  */

void FUN_107343628(void)

{
  long unaff_x20;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x000107348074();
  func_0x000107344ef0();
  FUN_107343698();
  func_0x000107346acc();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x00010727e7fc(unaff_x20);
      func_0x000107344cd8();
      func_0x000107344734();
      func_0x000107347f90();
      FUN_1073436c8();
    }
    unaff_x20 = unaff_x20 + 0x148;
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 107343698; end: 1073436c7;  */

void FUN_107343698(undefined8 param_1)

{
  func_0x000107345a40();
  func_0x000107345c6c();
  func_0x000107345994();
  func_0x0001000631d0(param_1,0x148);
  return;
}



/* Entry: 1073436c8; end: 10734373b;  */

void FUN_1073436c8(long param_1)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000100a2b988();
  func_0x000104c2fe00();
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0xffffffff;
  func_0x00010727fb44((undefined1 *)(param_1 + 0x40));
  uVar1 = *(uint *)(unaff_x19 + 0x140);
  if (uVar1 != 0xffffffff) {
    func_0x000107347860((&PTR_FUN_1109a3128)[uVar1]);
    *(uint *)(unaff_x20 + 0x140) = uVar1;
  }
  func_0x00010727fb44(unaff_x19 + 0x40);
  func_0x000104c2f714();
  return;
}



/* Entry: 10734373c; end: 10734376b;  */

void FUN_10734373c(void)

{
  return;
}



/* Entry: 10734376c; end: 107343797;  */

void FUN_10734376c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x100) != 0) {
    func_0x00010727fb44(lVar1);
    *(undefined4 *)(lVar1 + 0x100) = 0;
  }
  return;
}



/* Entry: 107343798; end: 107343897;  */

/* WARNING: Possible PIC construction at 0x000107341b18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107341b1c) */

void FUN_107343798(long *param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long lVar5;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auStack_250 [224];
  undefined1 auStack_140 [8];
  long alStack_138 [33];
  
  lVar4 = param_3;
  func_0x000107344818();
  lVar5 = *param_1;
  uVar3 = *(int *)(lVar5 + 0x100) == 1;
  if ((bool)uVar3) {
    func_0x000107345bc8();
    func_0x000107346c90();
    FUN_107343984();
    cVar1 = *(char *)(unaff_x20 + 0xf8);
    uVar3 = cVar1 == *(char *)(param_3 + 0xf8);
    if (!(bool)uVar3) {
      if (cVar1 == '\0') {
        func_0x0001073446ac();
        if ((bool)uVar3) {
          lVar4 = unaff_x20 + 0x80;
          func_0x00010727fe48(lVar4,param_3 + 0x80);
          *(undefined1 *)(lVar4 + 0x78) = 1;
          return;
        }
      }
      else {
        func_0x0001073446ac();
        if ((bool)uVar3) {
          lVar4 = unaff_x20 + 0x80;
          if (*(char *)(unaff_x20 + 0xf8) == '\x01') {
            func_0x00010727fbf0();
            *(undefined1 *)(lVar4 + 0x78) = 0;
          }
          return;
        }
      }
      goto LAB_107343890;
    }
    if (cVar1 == '\0') goto LAB_107343830;
    param_1 = (long *)(unaff_x20 + 0x80);
    FUN_107343b30(param_1,param_3 + 0x80);
    func_0x0001073446ac();
    if (!(bool)uVar3) goto LAB_107343890;
    lVar5 = unaff_x20 + 0xb8;
    lVar4 = param_3 + 0xb8;
    cVar1 = *(char *)(unaff_x20 + 0xf0);
    if (cVar1 != *(char *)(param_3 + 0xf0)) {
      if (cVar1 == '\0') {
        func_0x00010727d614();
        *(undefined1 *)(lVar5 + 0x38) = 1;
        return;
      }
      if (*(char *)(unaff_x20 + 0xf0) != '\x01') {
        return;
      }
      puVar2 = &stack0xffffffffffffffe0;
      unaff_x29 = &stack0xfffffffffffffff0;
      unaff_x30 = (code *)0x107341b1c;
      unaff_x19 = lVar5;
      goto code_r0x000107266a30;
    }
    puVar2 = (undefined1 *)register0x00000008;
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    func_0x000107347584();
    func_0x00010727fcdc();
    FUN_10734340c(lVar5,alStack_138);
    param_1 = alStack_138;
    func_0x00010727fba0();
LAB_107343830:
    func_0x0001073446ac();
    if ((bool)uVar3) {
      return;
    }
LAB_107343890:
    ___stack_chk_fail();
    __Unwind_Resume();
    lVar5 = *param_1;
    if (*(int *)(lVar5 + 0x100) != 2) {
      func_0x00010727d5ac(auStack_250,lVar4);
      func_0x000107343530(lVar5,auStack_250);
      func_0x00010727d560(auStack_250);
      return;
    }
    func_0x000107345bc8();
    func_0x000107346c90();
    FUN_107342188();
    FUN_107342188(unaff_x20 + 0x70,lVar4 + 0x70);
    lVar5 = unaff_x20 + 0xa8;
    lVar4 = lVar4 + 0xa8;
    unaff_x30 = FUN_107343898;
    unaff_x19 = param_3;
    unaff_x29 = &stack0xfffffffffffffff0;
    puVar2 = auStack_140;
  }
  if (*(int *)(lVar5 + 0x30) != -1 || *(int *)(lVar4 + 0x30) != -1) {
    if (*(int *)(lVar4 + 0x30) == -1) {
code_r0x000107266a30:
      *(long *)(puVar2 + -0x20) = unaff_x20;
      *(long *)(puVar2 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
      *(code **)(puVar2 + -8) = unaff_x30;
      if (*(uint *)(lVar5 + 0x30) != 0xffffffff) {
        func_0x0001072745a8((&PTR_DAT_110995e60)[*(uint *)(lVar5 + 0x30)]);
      }
      *(undefined4 *)(lVar5 + 0x30) = 0xffffffff;
      return;
    }
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(code **)(puVar2 + -8) = unaff_x30;
    *(long *)(puVar2 + -0x18) = lVar5;
    func_0x000107345474(lVar5,lVar5,lVar4);
  }
  return;
}



/* Entry: 107343898; end: 107343923;  */

void FUN_107343898(long *param_1,undefined8 param_2,long param_3)

{
  long unaff_x20;
  long lVar1;
  undefined1 auStack_110 [224];
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x100) != 2) {
    func_0x00010727d5ac(auStack_110,param_3);
    func_0x000107343530(lVar1,auStack_110);
    func_0x00010727d560(auStack_110);
    return;
  }
  func_0x000107345bc8();
  func_0x000107346c90();
  FUN_107342188();
  FUN_107342188(unaff_x20 + 0x70,param_3 + 0x70);
  if (*(int *)(unaff_x20 + 0xd8) != -1 || *(int *)(param_3 + 0xd8) != -1) {
    if (*(int *)(param_3 + 0xd8) == -1) {
      if (*(uint *)(unaff_x20 + 0xd8) != 0xffffffff) {
        func_0x0001072745a8((&PTR_DAT_110995e60)[*(uint *)(unaff_x20 + 0xd8)],unaff_x20 + 0xa8,
                            unaff_x20 + 0xa8,param_3 + 0xa8);
      }
      *(undefined4 *)(unaff_x20 + 0xd8) = 0xffffffff;
      return;
    }
    func_0x000107345474();
  }
  return;
}



/* Entry: 107343924; end: 107343983;  */

/* WARNING: Possible PIC construction at 0x000107343974: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107343978) */
/* WARNING: Removing unreachable block (ram,0x0001073458b0) */

void FUN_107343924(long *param_1,undefined1 *param_2,long param_3)

{
  undefined1 *puVar1;
  long unaff_x19;
  long lVar2;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [56];
  
  puVar1 = &stack0xfffffffffffffff0;
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x100) != 3) {
    func_0x00010727d614(auStack_58,param_3);
    func_0x000107346270();
    func_0x00010734355c();
    param_2 = auStack_58;
    unaff_x30 = 0x107343978;
    register0x00000008 = (BADSPACEBASE *)auStack_60;
    unaff_x19 = lVar2;
    unaff_x29 = puVar1;
code_r0x000107266a30:
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    if (*(uint *)(param_2 + 0x30) != 0xffffffff) {
      func_0x0001072745a8((&PTR_DAT_110995e60)[*(uint *)(param_2 + 0x30)]);
    }
    *(undefined4 *)(param_2 + 0x30) = 0xffffffff;
    return;
  }
  if (*(int *)(param_2 + 0x30) != -1 || *(int *)(param_3 + 0x30) != -1) {
    if (*(int *)(param_3 + 0x30) == -1) goto code_r0x000107266a30;
    func_0x000107345474(param_2,param_2,param_3);
  }
  return;
}



/* Entry: 107343984; end: 1073439d3;  */

void FUN_107343984(long param_1,long param_2)

{
  if (*(int *)(param_1 + 0x40) != -1 || *(int *)(param_2 + 0x40) != -1) {
    if (*(int *)(param_2 + 0x40) == -1) {
      if (*(uint *)(param_1 + 0x40) != 0xffffffff) {
        func_0x000107285594((&PTR_DAT_110996f60)[*(uint *)(param_1 + 0x40)],param_1,param_1,param_2)
        ;
      }
      *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
      return;
    }
    func_0x000107345474();
  }
  return;
}



/* Entry: 1073439d4; end: 1073439e7;  */

void FUN_1073439d4(long *param_1)

{
  if (*(int *)(*param_1 + 0x40) != 0) {
    func_0x0001073460d4();
    FUN_107343a10();
  }
  return;
}



/* Entry: 1073439e8; end: 107343a0f;  */

void FUN_1073439e8(long param_1)

{
  if (*(int *)(param_1 + 0x40) != 0) {
    func_0x0001073460d4();
    FUN_107343a10();
  }
  return;
}



/* Entry: 107343a10; end: 107343a2f;  */

void FUN_107343a10(void)

{
  long unaff_x19;
  
  func_0x000107346d54();
  func_0x00010727fc70();
  *(undefined4 *)(unaff_x19 + 0x40) = 0;
  return;
}



/* Entry: 107343a30; end: 107343a37;  */

void FUN_107343a30(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (*(int *)(*param_1 + 0x40) == 1) {
    uVar1 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = uVar1;
    return;
  }
  func_0x0001073460d4();
  FUN_107343a64();
  return;
}



/* Entry: 107343a38; end: 107343a63;  */

void FUN_107343a38(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x40) == 1) {
    uVar1 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = uVar1;
    return;
  }
  func_0x0001073460d4();
  FUN_107343a64();
  return;
}



/* Entry: 107343a64; end: 107343a6f;  */

void FUN_107343a64(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x000100a2b988(*param_1,param_1[1]);
  func_0x00010727fc70();
  func_0x000107346d90();
  *(undefined4 *)(unaff_x20 + 0x40) = 1;
  return;
}



/* Entry: 107343a70; end: 107343a9b;  */

void FUN_107343a70(void)

{
  long unaff_x20;
  
  func_0x000100a2b988();
  func_0x00010727fc70();
  func_0x000107346d90();
  *(undefined4 *)(unaff_x20 + 0x40) = 1;
  return;
}



/* Entry: 107343a9c; end: 107343aa3;  */

void FUN_107343a9c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(int *)(*param_1 + 0x40) == 2) {
    func_0x000100a2b988(param_2,param_3);
    func_0x0001072f6188();
    func_0x000107347614();
    return;
  }
  func_0x0001073460d4();
  FUN_107343af8();
  return;
}



/* Entry: 107343aa4; end: 107343ad7;  */

void FUN_107343aa4(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(int *)(param_1 + 0x40) == 2) {
    func_0x000100a2b988(param_2,param_3);
    func_0x0001072f6188();
    func_0x000107347614();
    return;
  }
  func_0x0001073460d4();
  FUN_107343af8();
  return;
}



/* Entry: 107343ad8; end: 107343af7;  */

void FUN_107343ad8(void)

{
  func_0x000100a2b988();
  func_0x0001072f6188();
  func_0x000107347614();
  return;
}



/* Entry: 107343af8; end: 107343b03;  */

void FUN_107343af8(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x000100a2b988(*param_1,param_1[1]);
  func_0x00010727fc70();
  func_0x000107345dfc();
  func_0x00010727fdc0();
  *(undefined4 *)(unaff_x20 + 0x40) = 2;
  return;
}



/* Entry: 107343b04; end: 107343b2f;  */

void FUN_107343b04(void)

{
  long unaff_x20;
  
  func_0x000100a2b988();
  func_0x00010727fc70();
  func_0x000107345dfc();
  func_0x00010727fdc0();
  *(undefined4 *)(unaff_x20 + 0x40) = 2;
  return;
}



/* Entry: 107343b30; end: 107343b83;  */

void FUN_107343b30(long param_1,long param_2)

{
  if (*(int *)(param_1 + 0x30) != -1 || *(int *)(param_2 + 0x30) != -1) {
    if (*(int *)(param_2 + 0x30) == -1) {
      if (*(uint *)(param_1 + 0x30) != 0xffffffff) {
        func_0x000107285594((&PTR_DAT_110996f48)[*(uint *)(param_1 + 0x30)],param_1,param_1,param_2)
        ;
      }
      *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
      return;
    }
    func_0x000107345474();
  }
  return;
}



/* Entry: 107343b84; end: 107343b97;  */

void FUN_107343b84(long *param_1)

{
  if (*(int *)(*param_1 + 0x30) != 0) {
    func_0x0001073460d4();
    FUN_107343bc0();
  }
  return;
}



/* Entry: 107343b98; end: 107343bbf;  */

void FUN_107343b98(long param_1)

{
  if (*(int *)(param_1 + 0x30) != 0) {
    func_0x0001073460d4();
    FUN_107343bc0();
  }
  return;
}



/* Entry: 107343bc0; end: 107343bdf;  */

void FUN_107343bc0(void)

{
  long unaff_x19;
  
  func_0x000107346d54();
  func_0x00010727fc1c();
  *(undefined4 *)(unaff_x19 + 0x30) = 0;
  return;
}



/* Entry: 107343be0; end: 107343be7;  */

void FUN_107343be0(long *param_1,undefined1 *param_2,undefined1 *param_3)

{
  if (*(int *)(*param_1 + 0x30) == 1) {
    *param_2 = *param_3;
    return;
  }
  func_0x0001073460d4();
  FUN_107343c1c();
  return;
}



/* Entry: 107343be8; end: 107343c1b;  */

void FUN_107343be8(long param_1,undefined1 *param_2,undefined1 *param_3)

{
  if (*(int *)(param_1 + 0x30) == 1) {
    *param_2 = *param_3;
    return;
  }
  func_0x0001073460d4();
  FUN_107343c1c();
  return;
}



/* Entry: 107343c1c; end: 107343c27;  */

void FUN_107343c1c(undefined8 *param_1)

{
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  
  func_0x000100a2b988(*param_1,param_1[1]);
  func_0x00010727fc1c();
  *unaff_x20 = *unaff_x19;
  *(undefined4 *)(unaff_x20 + 0x30) = 1;
  return;
}



/* Entry: 107343c28; end: 107343c57;  */

void FUN_107343c28(void)

{
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  
  func_0x000100a2b988();
  func_0x00010727fc1c();
  *unaff_x20 = *unaff_x19;
  *(undefined4 *)(unaff_x20 + 0x30) = 1;
  return;
}



/* Entry: 107343c58; end: 107343c5f;  */

void FUN_107343c58(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(*param_1 + 0x30) == 2) {
    func_0x000100a2b988(param_2,param_3);
    func_0x0001072f6188();
    *(undefined2 *)(unaff_x20 + 0x28) = *(undefined2 *)(unaff_x19 + 0x28);
    return;
  }
  func_0x0001073460d4();
  FUN_107343cbc();
  return;
}



/* Entry: 107343c60; end: 107343c93;  */

void FUN_107343c60(long param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(param_1 + 0x30) == 2) {
    func_0x000100a2b988(param_2,param_3);
    func_0x0001072f6188();
    *(undefined2 *)(unaff_x20 + 0x28) = *(undefined2 *)(unaff_x19 + 0x28);
    return;
  }
  func_0x0001073460d4();
  FUN_107343cbc();
  return;
}



/* Entry: 107343c94; end: 107343cbb;  */

void FUN_107343c94(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000100a2b988();
  func_0x0001072f6188();
  *(undefined2 *)(unaff_x20 + 0x28) = *(undefined2 *)(unaff_x19 + 0x28);
  return;
}



/* Entry: 107343cbc; end: 107343cc7;  */

void FUN_107343cbc(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x000100a2b988(*param_1,param_1[1]);
  func_0x00010727fc1c();
  func_0x000107345dfc();
  func_0x00010727ff10();
  *(undefined4 *)(unaff_x20 + 0x30) = 2;
  return;
}



/* Entry: 107343cc8; end: 107343cf3;  */

void FUN_107343cc8(void)

{
  long unaff_x20;
  
  func_0x000100a2b988();
  func_0x00010727fc1c();
  func_0x000107345dfc();
  func_0x00010727ff10();
  *(undefined4 *)(unaff_x20 + 0x30) = 2;
  return;
}



/* Entry: 107343cf4; end: 107343d57;  */

void FUN_107343cf4(void)

{
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x20;
  
  func_0x000107346a00();
  if (unaff_x20 != 0) {
    do {
      func_0x000107345624();
    } while (extraout_w10 != 0);
  }
  func_0x00010734678c();
  func_0x000107345c64();
  func_0x000107347e84(&PTR_FUN_1109a31f8);
  if (unaff_x20 != 0) {
    do {
      func_0x000107345624();
    } while (extraout_w10_00 != 0);
  }
  func_0x00010734558c();
  return;
}



/* Entry: 107343d58; end: 107343d7f;  */

undefined8 FUN_107343d58(undefined8 param_1)

{
  func_0x000107347198(&PTR_FUN_1109a31f8);
  return param_1;
}



/* Entry: 107343d80; end: 107343d93;  */

void FUN_107343d80(void)

{
  FUN_107343d58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107343d94; end: 107343db3;  */

void FUN_107343d94(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  long unaff_x19;
  undefined8 uVar3;
  
  func_0x000107345814();
  puVar1 = (undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_FUN_1109a31f8;
  lVar2 = *(long *)(unaff_x19 + 0x10);
  uVar3 = *puVar1;
  param_1[2] = *(undefined8 *)(unaff_x19 + 0x10);
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107345624();
    } while (extraout_w10 != 0);
  }
  param_1[3] = puVar1[2];
  return;
}



/* Entry: 107343db4; end: 107343dd3;  */

void FUN_107343db4(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1109a31f8;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *puVar1;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107345624();
    } while (extraout_w10 != 0);
  }
  param_2[3] = puVar1[2];
  return;
}



/* Entry: 107343dd4; end: 107343e83;  */

void FUN_107343dd4(uint param_1)

{
  code *pcVar1;
  undefined1 in_ZR;
  long alStack_50 [2];
  byte bStack_40;
  
  func_0x000107346eb4();
  func_0x000107344818();
  func_0x000107347154();
  func_0x0001073466f8(alStack_50);
  func_0x000107347d44();
  if (((bool)in_ZR) &&
     (func_0x000107346e98(*(undefined8 *)(alStack_50[0] + 0x30)), (param_1 & 1) != 0)) {
    if ((bStack_40 & 1) == 0) goto LAB_107343e5c;
    func_0x0001073475e4(&PTR_DAT_1109a3268);
    func_0x000107346ddc();
    func_0x000107346e50();
    func_0x0001073468f8();
  }
  func_0x0001073465cc();
  func_0x0001073446ac();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_107343e5c:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x107343e64);
  (*pcVar1)();
}



/* Entry: 107343e84; end: 107343eab;  */

void FUN_107343e84(undefined8 param_1)

{
  func_0x000107345760();
  func_0x000107345650(param_1,&PTR_DAT_1109a32d8);
  func_0x000107344bc4();
  return;
}



/* Entry: 107343eac; end: 107343ef3;  */

undefined ** FUN_107343eac(void)

{
  return &PTR_DAT_1109a32d8;
}



/* Entry: 107343ef4; end: 107343f17;  */

void FUN_107343ef4(void)

{
  func_0x00010734506c();
  func_0x00010734521c(&PTR_DAT_1109a3268);
  return;
}



/* Entry: 107343f18; end: 107343f33;  */

void FUN_107343f18(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_DAT_1109a3268;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 107343f34; end: 10734429b;  */

void FUN_107343f34(long param_1,undefined8 *param_2,double param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 in_ZR;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  long *plVar7;
  undefined1 uVar8;
  ulong uVar9;
  undefined1 uVar10;
  ulong uVar11;
  undefined4 uVar12;
  undefined1 auStack_250 [144];
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [56];
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_140;
  undefined1 uStack_13c;
  ulong uStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  long lStack_120;
  byte bStack_118;
  undefined1 auStack_110 [16];
  char cStack_100;
  undefined1 auStack_f8 [16];
  char cStack_e8;
  undefined1 auStack_e0 [64];
  int iStack_a0;
  undefined1 auStack_98 [16];
  byte bStack_88;
  undefined8 uStack_80;
  
  func_0x0001073447e0();
  uStack_1b8 = param_2[1];
  uStack_1c0 = *param_2;
  lVar1 = *(long *)(param_1 + 0x10);
  uStack_80 = extraout_x8;
  FUN_107323974(&uStack_178,&UNK_10f40aa5e,0x11,&uStack_1c0);
  func_0x000107264c5c(&uStack_178);
  func_0x000107347764(auStack_250);
  func_0x000104c2f714(&uStack_178);
  uVar3 = uStack_1b8;
  uVar2 = uStack_1c0;
  func_0x000107347950(auStack_98,param_3,&DAT_10f3507c8);
  if ((bStack_88 & 1) == 0) {
    func_0x00010734615c();
  }
  else {
    uStack_178 = CONCAT71(uStack_178._1_7_,1);
    auStack_1b0[0] = 1;
    FUN_107343088(auStack_e0,auStack_98,auStack_250,&uStack_178,auStack_1b0);
    if (iStack_a0 == 0) {
      func_0x000107347950(auStack_f8,param_3,&UNK_10f40aa70);
      if (cStack_e8 == '\x01') {
        uStack_178 = 0;
        uStack_170 = 0;
        uStack_168 = 0;
        puVar5 = auStack_f8;
        FUN_107324e4c(puVar5,&uStack_178,auStack_250);
        uVar8 = (undefined1)(((ulong)puVar5 & 0x100000000) >> 0x20);
        uVar12 = 0;
        if (((ulong)puVar5 & 0x100000000) != 0) {
          uVar12 = (int)puVar5;
        }
        func_0x000107346bd8();
      }
      else {
        uVar8 = 0;
        uVar12 = 0;
      }
      FUN_1073232dc(auStack_110,param_3,&DAT_10f3538dc,0xb);
      if (cStack_100 == '\x01') {
        func_0x00010002b838(&uStack_178,&UNK_10f40aa7a);
        puVar5 = auStack_110;
        puVar6 = &uStack_178;
        FUN_10732a4e8(puVar5,puVar6,auStack_250);
        func_0x000107346bd8();
        if (((ulong)puVar6 & 1) == 0) goto LAB_1073440dc;
        uVar9 = (long)(double)puVar5 & 0xffffffffffffff00;
        uVar11 = (long)(double)puVar5 & 0xff;
        uVar10 = 1;
      }
      else {
LAB_1073440dc:
        uVar11 = 0;
        uVar9 = 0;
        uVar10 = 0;
      }
      func_0x00010002b838(&uStack_178,&UNK_10f40aa8a);
      puVar6 = &uStack_178;
      FUN_10732a4e8(param_3,puVar6,auStack_250);
      func_0x000107346bd8();
      puVar5 = auStack_e0;
      func_0x000107343144(puVar5);
      func_0x00010727fe7c(auStack_1b0,puVar5);
      plVar7 = *(long **)(lVar1 + 0xb8);
      func_0x00010727fe7c(&uStack_178,auStack_1b0);
      lStack_120 = (long)param_3;
      bStack_118 = (byte)puVar6 & 1;
      uStack_138 = uVar9 | uVar11;
      uStack_130 = 1;
      in_ZR = ((ulong)puVar6 & 1) == 0;
      if ((bool)in_ZR) {
        lStack_120 = 0;
      }
      uStack_140 = uVar12;
      uStack_13c = uVar8;
      uStack_128 = uVar10;
      (**(code **)(*plVar7 + 0x10))(plVar7,uVar2,uVar3,&uStack_178);
      func_0x00010727fc1c(&uStack_178);
      func_0x00010734615c();
      func_0x00010727fc1c(auStack_1b0);
      func_0x0001072f5f4c(auStack_110);
      func_0x0001072f5f4c(auStack_f8);
    }
    else {
      in_ZR = iStack_a0 == 1;
      if (!(bool)in_ZR) goto LAB_1073441e4;
      FUN_1073442d0();
    }
    func_0x0001073478e8(auStack_e0);
  }
  func_0x0001072f5f4c(auStack_98);
  func_0x000107324968(auStack_250);
  func_0x0001073447cc(uStack_80);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_1073441e4:
  func_0x00010563ab98();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1073441ec);
  (*pcVar4)();
}



/* Entry: 10734429c; end: 1073442c3;  */

void FUN_10734429c(undefined8 param_1)

{
  func_0x000107345760();
  func_0x000107345650(param_1,&PTR_DAT_1109a32c8);
  func_0x000107344bc4();
  return;
}



/* Entry: 1073442c4; end: 1073442cf;  */

undefined ** FUN_1073442c4(void)

{
  return &PTR_DAT_1109a32c8;
}



/* Entry: 1073442d0; end: 1073442e7;  */

void FUN_1073442d0(void)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  func_0x000107347d90();
  return;
}



/* Entry: 1073442e8; end: 1073442ef;  */

void FUN_1073442e8(void)

{
  return;
}



/* Entry: 1073442f0; end: 107344317;  */

void FUN_1073442f0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001073450c0();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_FUN_1109a32f8;
  param_1[1] = uVar1;
  return;
}



/* Entry: 107344318; end: 10734433f;  */

void FUN_107344318(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_1109a32f8;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  return;
}



/* Entry: 107344340; end: 107344547;  */

void FUN_107344340(undefined8 param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  code *extraout_x9;
  long unaff_x19;
  undefined1 auStack_1e0 [24];
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [24];
  uint uStack_198;
  undefined1 uStack_194;
  undefined1 auStack_190 [56];
  undefined1 auStack_158 [56];
  undefined1 auStack_120 [56];
  undefined1 auStack_e8 [56];
  undefined1 uStack_b0;
  undefined1 auStack_a8 [16];
  char cStack_98;
  undefined1 auStack_90 [56];
  byte bStack_58;
  undefined1 auStack_50 [16];
  char cStack_40;
  
  func_0x00010734479c();
  (**(code **)(*param_2 + 0x38))(auStack_50,param_2 + 1,&UNK_10f40aa9c);
  uVar1 = cStack_40 == '\x01';
  if ((bool)uVar1) {
    func_0x00010734784c(auStack_90);
    if ((bStack_58 & 1) != 0) {
      puVar2 = auStack_90;
      func_0x000107264c5c();
      func_0x000107859b70();
      uStack_198 = (uint)puVar2;
      uStack_194 = (undefined1)((ulong)puVar2 >> 0x20);
      if ((ulong)puVar2 >> 0x20 != 0) {
        uVar1 = *(uint *)(unaff_x19 + 8) == uStack_198;
        if (*(uint *)(unaff_x19 + 8) < uStack_198) {
          func_0x0001073456a4();
          (*extraout_x9)(auStack_a8,param_2 + 1,&DAT_10f68f148);
          uVar1 = cStack_98 == '\x01';
          if ((bool)uVar1) {
            func_0x00010734784c(auStack_e8);
          }
          else {
            auStack_e8[0] = 0;
            uStack_b0 = 0;
          }
          func_0x000100060964(auStack_158,&UNK_10f40aaf0);
          func_0x0001072d78b4(auStack_120,auStack_e8,auStack_158);
          func_0x000107859d40(auStack_1c8,&uStack_198);
          func_0x000107859d40(auStack_1e0,unaff_x19 + 8);
          FUN_10731d804(auStack_190,auStack_120,auStack_1c8,auStack_1e0);
          func_0x0001003a91d4(&UNK_10f40aaac);
          func_0x0001003a9204(auStack_1b0);
          func_0x00010786df04(0xf,auStack_1b0,0,0);
          func_0x000107345f54();
          func_0x000107345944();
          func_0x000107346154();
          func_0x000107346bc0();
          func_0x0001073462e0();
          func_0x00010724b3d8();
          func_0x0001073468c8();
        }
      }
    }
    func_0x000107345e40();
  }
  func_0x000107345cd8();
  func_0x0001073446ac();
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001073468c8();
  func_0x000107345e40();
  func_0x000107345cd8();
  func_0x000107345604();
  func_0x000107345760();
  func_0x000107345650();
  func_0x000107344bc4();
  return;
}



/* Entry: 107344548; end: 10734456f;  */

void FUN_107344548(undefined8 param_1)

{
  func_0x000107345760();
  func_0x000107345650(param_1,&PTR_DAT_1109a3358);
  func_0x000107344bc4();
  return;
}



/* Entry: 107344570; end: 10734457b;  */

undefined ** FUN_107344570(void)

{
  return &PTR_DAT_1109a3358;
}



/* Entry: 10734457c; end: 1073445cb;  */

undefined8 * FUN_10734457c(undefined8 *param_1)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    pcVar1 = (char *)*param_1;
    lVar2 = param_1[1];
    for (; lVar3 != 0; lVar3 = lVar3 + -1) {
      if (-1 < *pcVar1) {
        FUN_107326904(lVar2);
      }
      lVar2 = lVar2 + 0x48;
      pcVar1 = pcVar1 + 1;
    }
    func_0x0001073457b0();
  }
  return param_1;
}



/* Entry: 1073445cc; end: 1073445cf;  */

void FUN_1073445cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a3378;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1073445d0; end: 1073445e3;  */

void FUN_1073445d0(void)

{
  func_0x0001073445f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073445e4; end: 1073445fb;  */

undefined8 * FUN_1073445e4(long param_1)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    pcVar1 = *(char **)(param_1 + 0x18);
    lVar2 = *(long *)(param_1 + 0x20);
    for (; lVar3 != 0; lVar3 = lVar3 + -1) {
      if (-1 < *pcVar1) {
        func_0x00010733f4d0(lVar2);
      }
      lVar2 = lVar2 + 0x48;
      pcVar1 = pcVar1 + 1;
    }
    func_0x0001073457b0();
  }
  return (undefined8 *)(param_1 + 0x18);
}



/* Entry: 1073445fc; end: 1073446ab;  */

void FUN_1073445fc(long param_1)

{
  func_0x000107345acc();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1073446ac; end: 107345b37;  */

void FUN_1073446ac(void)

{
  return;
}



/* Entry: 107345b38; end: 107345b4b;  */

void FUN_107345b38(void)

{
  long unaff_x29;
  
  FUN_107339b18();
  func_0x000107346294(unaff_x29 + -0xe0);
  FUN_107339b18();
  return;
}



/* Entry: 107345b4c; end: 1073480ab;  */

undefined8 FUN_107345b4c(undefined8 param_1)

{
  FUN_107338d94(param_1,&stack0x00000140);
  return param_1;
}



/* Entry: 1073480ac; end: 10734821f;  */

/* WARNING: Type propagation algorithm not settling */

ulong ***** FUN_1073480ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  ushort uVar5;
  undefined1 uVar6;
  ulong *****pppppuVar7;
  ulong *****pppppuVar8;
  ulong *****pppppuVar9;
  undefined8 *puVar10;
  ulong *****pppppuVar11;
  ulong *****pppppuVar12;
  ulong ****ppppuVar13;
  undefined1 *puVar14;
  undefined8 ****ppppuVar15;
  ulong *****pppppuVar16;
  undefined1 *puVar17;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined2 uVar18;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 *extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 uVar19;
  ulong extraout_x8_03;
  ulong uVar20;
  undefined1 *extraout_x9;
  undefined1 *extraout_x9_00;
  undefined1 *extraout_x9_01;
  long extraout_x9_02;
  undefined1 *extraout_x9_03;
  long extraout_x9_04;
  undefined1 *extraout_x9_05;
  long extraout_x9_06;
  undefined1 *extraout_x9_07;
  undefined1 uVar21;
  undefined1 *extraout_x10;
  undefined1 *extraout_x10_00;
  undefined1 *extraout_x10_01;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  undefined8 extraout_x11_01;
  ulong ***pppuVar22;
  undefined1 *unaff_x20;
  undefined8 *****pppppuVar23;
  ulong *****pppppuVar24;
  undefined8 ****ppppuVar25;
  undefined1 auStack_750 [32];
  ulong ****appppuStack_730 [3];
  undefined8 auStack_718 [2];
  byte bStack_708;
  undefined1 auStack_700 [400];
  undefined1 auStack_570 [64];
  undefined1 auStack_530 [8];
  ulong ****appppuStack_528 [13];
  undefined8 *****pppppuStack_4c0;
  undefined1 *puStack_4b8;
  undefined8 *****pppppuStack_480;
  ulong *****pppppuStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  ulong ****ppppuStack_430;
  ulong *****pppppuStack_428;
  undefined8 uStack_420;
  undefined8 *puStack_418;
  undefined1 uStack_410;
  int iStack_3b8;
  ulong ****appppuStack_3b0 [11];
  undefined8 uStack_358;
  undefined8 *****pppppuStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined4 uStack_2b8;
  undefined1 uStack_2b4;
  ulong ****ppppuStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined1 auStack_280 [400];
  ulong ****appppuStack_f0 [7];
  char cStack_b8;
  ulong ****ppppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_48;
  
  pppppuVar23 = &pppppuStack_2f0;
  func_0x00010734ac28();
  func_0x00010734aaf4();
  uStack_48 = extraout_x8_00;
  func_0x0001073028ec(&ppppuStack_b0,0,0x400,0);
  uStack_a8 = 0;
  ppppuStack_b0 = (ulong ****)0x0;
  uStack_a0 = 0x3000000000000;
  func_0x000107751334(auStack_280,param_3);
  puVar14 = auStack_280;
  puVar17 = unaff_x20;
  FUN_107348220(appppuStack_f0,&ppppuStack_b0);
  func_0x000107267da8(auStack_280);
  uVar6 = cStack_b8 == '\x01';
  if ((bool)uVar6) {
    pppppuVar12 = appppuStack_f0;
    FUN_107349274(extraout_x8);
    uVar19 = uStack_98;
    pppppuVar23 = (undefined8 *****)unaff_x20;
  }
  else {
    uStack_2a8 = 0;
    ppppuStack_2b0 = (ulong ****)0x0;
    uStack_298 = 0;
    uStack_2a0 = 0;
    uStack_290 = 0;
    uStack_288 = 0x100;
    pppppuStack_2f0 = &ppppuStack_2b0;
    uStack_2e0 = 0;
    uStack_2e8 = 0;
    uStack_2d0 = 0;
    uStack_2d8 = 0;
    uStack_2c8 = 0;
    uStack_2c0 = 0x200;
    uStack_2b8 = 0x144;
    uStack_2b4 = 0;
    FUN_107348798(&ppppuStack_b0,&pppppuStack_2f0);
    pppppuVar12 = &ppppuStack_2b0;
    func_0x0001073492a4(extraout_x8);
    func_0x000107302960(&uStack_2e8);
    func_0x000107302960(&ppppuStack_2b0);
    uVar19 = uStack_98;
  }
  FUN_1073492e0(appppuStack_f0);
  pppppuVar7 = &ppppuStack_b0;
  func_0x0001073029ac();
  func_0x00010734aa8c(uStack_48);
  if ((bool)uVar6) {
    return pppppuVar7;
  }
  ___stack_chk_fail();
  func_0x000107302960((undefined1 *)((long)pppppuVar23 + 8));
  func_0x000107302960(&ppppuStack_2b0);
  FUN_1073492e0(appppuStack_f0);
  pppppuVar8 = &ppppuStack_b0;
  func_0x0001073029ac();
  func_0x00010734ab14();
  pppppuVar16 = pppppuVar12;
  func_0x00010734aaf4();
  pppppuVar7 = pppppuVar16;
  uStack_358 = extraout_x8_02;
  func_0x000107766098();
  if ((int)pppppuVar16 != 0) {
    func_0x0001072c95f0(appppuStack_3b0,1);
    uVar20 = (ulong)pppppuStack_480 >> 0x28;
    uVar1 = (uint)pppppuStack_480;
    pppppuStack_480._0_5_ = (uint5)(uVar1 & 0xffffff00);
    pppppuStack_480 = (undefined8 *****)CONCAT35((int3)uVar20,(uint5)pppppuStack_480);
    ppppuStack_430 = (ulong ****)((ulong)ppppuStack_430 & 0xffffffffffffff00);
    uStack_410 = 0;
    func_0x000107771274(auStack_718);
    func_0x0001072c94e0(&ppppuStack_430);
    if ((bStack_708 & 1) == 0) {
      func_0x000107771558(&ppppuStack_430,appppuStack_3b0);
      pppppuVar23 = &ppppuStack_430;
      func_0x0001005d466c();
      pppppuStack_480 = pppppuVar23;
      pppppuStack_478 = pppppuVar12;
      func_0x00010734ab80();
      func_0x0001003a9204(&pppppuStack_4c0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppuStack_430);
      func_0x000104c2f64c(&ppppuStack_430);
      func_0x0001072625b4(&pppppuStack_480,&pppppuStack_4c0);
      func_0x000104c2f1f0(&ppppuStack_430,&pppppuStack_480);
      func_0x00010734abc8();
      pppppuVar7 = &ppppuStack_430;
      func_0x00010734aba0();
      func_0x000104c2f714(&ppppuStack_430);
      pppppuVar16 = (ulong *****)&pppppuStack_4c0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      func_0x00010734ab60();
      func_0x00010734ab50();
      goto LAB_107348638;
    }
    uStack_440 = 0;
    uStack_458 = 0;
    uStack_460 = 0;
    uStack_448 = 0;
    uStack_450 = 0;
    pppppuStack_478 = (ulong *****)0x0;
    pppppuStack_480 = (undefined8 *****)0x0;
    uStack_468 = 0;
    uStack_470 = 0;
    func_0x000107753050(&ppppuStack_430,auStack_718[0],puVar14,&pppppuStack_480);
    func_0x00010724b3d8(&pppppuStack_480);
    if (iStack_3b8 == 1) {
      pppppuVar23 = &ppppuStack_430;
      FUN_1073405dc(pppppuVar23);
      func_0x0001072786d8(appppuStack_528,pppppuVar23 + 1);
      pppppuVar7 = pppppuVar8;
      FUN_1073489dc(auStack_530,pppppuVar8,uVar19);
      pppppuVar16 = appppuStack_528;
      func_0x00010726af18();
    }
    else {
      func_0x000107771558(&pppppuStack_480,appppuStack_3b0);
      pppppuVar23 = &pppppuStack_480;
      func_0x0001005d466c();
      pppppuStack_4c0 = pppppuVar23;
      puStack_4b8 = puVar14;
      func_0x00010734ab80();
      func_0x0001003a9204(appppuStack_730);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppppuStack_480);
      func_0x000104c2f64c(&pppppuStack_480);
      func_0x0001072625b4(&pppppuStack_4c0,appppuStack_730);
      func_0x000104c2f1f0(&pppppuStack_480,&pppppuStack_4c0);
      func_0x000104c2f714(&pppppuStack_4c0);
      pppppuVar7 = (ulong *****)&pppppuStack_480;
      func_0x00010734aba0();
      func_0x00010734abc8();
      pppppuVar16 = appppuStack_730;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    }
    func_0x00010734abd0();
    func_0x00010734ab60();
    func_0x00010734ab50();
    uVar6 = iStack_3b8 == 1;
    if (!(bool)uVar6) goto LAB_107348638;
    goto LAB_107348630;
  }
  pppppuVar11 = pppppuVar12 + 1;
  func_0x00010734abb4((*pppppuVar12)[3]);
  if ((int)pppppuVar16 != 0) {
    pppppuVar8[1] = (ulong ****)0x0;
    pppppuVar8[2] = (ulong ****)0x0;
    *pppppuVar8 = (ulong ****)0x0;
    *(undefined2 *)((long)pppppuVar8 + 0x16) = 4;
    pppppuVar9 = pppppuVar11;
    (*(code *)(*pppppuVar12)[4])();
    pppppuVar16 = pppppuVar9;
    for (pppppuVar24 = (ulong *****)0x0; uVar6 = pppppuVar9 == pppppuVar24, !(bool)uVar6;
        pppppuVar24 = (ulong *****)((long)pppppuVar24 + 1)) {
      (*(code *)(*pppppuVar12)[5])(appppuStack_3b0,pppppuVar11,pppppuVar24);
      pppppuStack_428 = (ulong *****)0x0;
      ppppuStack_430 = (ulong ****)0x0;
      uStack_420 = 0;
      func_0x000107751334(auStack_700,puVar14);
      FUN_107348220(auStack_570,&ppppuStack_430,appppuStack_3b0,uVar19,puVar17,auStack_700);
      FUN_1073492e0(auStack_570);
      func_0x000107267da8(auStack_700);
      pppppuVar7 = &ppppuStack_430;
      FUN_107348da4(pppppuVar8,pppppuVar7,uVar19);
      pppppuVar16 = appppuStack_3b0;
      func_0x0001072f5f6c();
    }
    goto LAB_107348630;
  }
  func_0x00010734abb4((*pppppuVar12)[6]);
  if ((int)pppppuVar16 != 0) {
    pppppuVar8[1] = (ulong ****)0x0;
    pppppuVar8[2] = (ulong ****)0x0;
    *pppppuVar8 = (ulong ****)0x0;
    *(undefined2 *)((long)pppppuVar8 + 0x16) = 3;
    puVar10 = (undefined8 *)0x28;
    __Znwm();
    *puVar10 = &PTR_FUN_1109a41b8;
    puVar10[1] = uVar19;
    puVar10[2] = puVar17;
    puVar10[3] = puVar14;
    puVar10[4] = pppppuVar8;
    pppppuVar7 = &ppppuStack_430;
    puStack_418 = puVar10;
    (*(code *)(*pppppuVar12)[8])(auStack_750,pppppuVar11);
    FUN_1073249ac(auStack_750);
    pppppuVar16 = &ppppuStack_430;
    FUN_1073249cc();
    goto LAB_107348630;
  }
  func_0x00010734abb4((*pppppuVar12)[2]);
  if ((int)pppppuVar16 != 0) {
    *pppppuVar8 = (ulong ****)0x0;
    pppppuVar8[1] = (ulong ****)0x0;
    pppppuVar8[2] = (ulong ****)0x0;
    goto LAB_107348630;
  }
  (*(code *)(*pppppuVar12)[0xe])(&ppppuStack_430);
  pppppuVar12 = pppppuStack_428;
  uVar6 = (int)ppppuStack_430 + -2 == 4;
  pppppuVar16 = pppppuVar8;
  switch((int)ppppuStack_430 + -2) {
  case 0:
    func_0x00010724ef84(appppuStack_3b0,&pppppuStack_428);
    pppppuVar7 = appppuStack_3b0;
    FUN_107348e58(pppppuVar8,pppppuVar7,uVar19);
    pppppuVar16 = appppuStack_3b0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    break;
  case 1:
    pppppuVar8[1] = (ulong ****)0x0;
    pppppuVar8[2] = (ulong ****)0x0;
    *pppppuVar8 = (ulong ****)pppppuVar12;
    uVar18 = 0x216;
    goto code_r0x000107348628;
  case 2:
    pppppuVar7 = pppppuStack_428;
    func_0x000107304174();
    break;
  case 3:
    pppppuVar7 = pppppuStack_428;
    func_0x0001073041c8();
    break;
  case 4:
    cVar4 = (char)pppppuStack_428;
    pppppuVar8[1] = (ulong ****)0x0;
    pppppuVar8[2] = (ulong ****)0x0;
    *pppppuVar8 = (ulong ****)0x0;
    uVar6 = cVar4 == '\0';
    uVar18 = 9;
    if (!(bool)uVar6) {
      uVar18 = 10;
    }
code_r0x000107348628:
    *(undefined2 *)((long)pppppuVar8 + 0x16) = uVar18;
    pppppuVar16 = pppppuVar11;
    break;
  default:
    func_0x000104c2f64c(appppuStack_3b0);
    func_0x000100060964(&pppppuStack_480,&UNK_10f40ab2b);
    func_0x000104c2f1f0(appppuStack_3b0,&pppppuStack_480);
    func_0x00010734abc8();
    pppppuVar7 = appppuStack_3b0;
    func_0x00010734aba0();
    pppppuVar16 = appppuStack_3b0;
    func_0x000104c2f714();
    func_0x00010734abdc();
    goto LAB_107348638;
  }
  func_0x00010734abdc();
LAB_107348630:
  *extraout_x8_01 = 0;
  extraout_x8_01[0x38] = 0;
LAB_107348638:
  func_0x00010734aa8c(uStack_358);
  if ((bool)uVar6) {
    return pppppuVar16;
  }
  ___stack_chk_fail();
  pppppuVar23 = appppuStack_3b0;
  func_0x000104c2f714();
  func_0x00010734abdc();
  func_0x00010734ab14();
  uVar5 = *(ushort *)((long)pppppuVar23 + 0x16);
  switch(uVar5 & 7) {
  case 0:
    func_0x000107349544(pppppuVar7,0);
    func_0x00010734ac10(pppppuVar7);
    FUN_107349658();
    func_0x00010734aa78();
    *extraout_x9 = 0x6e;
    func_0x00010734aa78();
    *extraout_x9_00 = 0x75;
    func_0x00010734aa78();
    *extraout_x9_01 = 0x6c;
    func_0x00010734ab28();
    *(undefined8 *)(extraout_x9_02 + 0x18) = extraout_x11;
    *extraout_x10 = extraout_w8;
    return (ulong *****)0x1;
  case 1:
    break;
  case 2:
    break;
  case 3:
    pppppuVar12 = pppppuVar7;
    func_0x00010734936c();
    if ((int)pppppuVar12 == 0) {
      return (ulong *****)0x0;
    }
    ppppuVar25 = pppppuVar23[1] + 3;
    while( true ) {
      ppppuVar15 = ppppuVar25 + -3;
      if (ppppuVar15 == pppppuVar23[1] + (ulong)*(uint *)pppppuVar23 * 6) {
        pppppuVar7[4] = pppppuVar7[4] + -2;
        func_0x000107349610(*pppppuVar7,0x7d);
        return (ulong *****)0x1;
      }
      if ((*(ushort *)((long)ppppuVar25 + -2) >> 0xc & 1) == 0) {
        ppppuVar15 = (undefined8 ****)ppppuVar25[-2];
        iVar2 = *(int *)(ppppuVar25 + -3);
      }
      else {
        iVar2 = 0x15 - (uint)*(byte *)((long)ppppuVar25 + -3);
      }
      pppppuVar12 = pppppuVar7;
      FUN_107349430(pppppuVar7,ppppuVar15,iVar2,*(ushort *)((long)ppppuVar25 + -2) >> 0xb & 1);
      if ((int)pppppuVar12 == 0) break;
      func_0x00010734aba8();
      ppppuVar25 = ppppuVar25 + 6;
      if (((ulong)pppppuVar12 & 1) == 0) {
        return (ulong *****)0x0;
      }
    }
    return (ulong *****)0x0;
  case 4:
    pppppuVar12 = pppppuVar7;
    FUN_1073493cc();
    if ((int)pppppuVar12 != 0) {
      ppppuVar25 = pppppuVar23[1];
      do {
        if (ppppuVar25 == pppppuVar23[1] + (ulong)*(uint *)pppppuVar23 * 3) {
          pppppuVar7[4] = pppppuVar7[4] + -2;
          func_0x000107349610(*pppppuVar7,0x5d);
          return (ulong *****)0x1;
        }
        func_0x00010734aba8();
        ppppuVar25 = ppppuVar25 + 3;
      } while (((ulong)pppppuVar12 & 1) != 0);
    }
    return (ulong *****)0x0;
  case 5:
    if ((uVar5 >> 0xc & 1) == 0) {
      uVar1 = *(uint *)pppppuVar23;
      pppppuVar23 = (undefined8 *****)pppppuVar23[1];
    }
    else {
      uVar1 = 0x15 - (int)*(char *)((long)pppppuVar23 + 0x15);
    }
    func_0x00010734ac28(pppppuVar7,pppppuVar23,(ulong)uVar1,uVar5 >> 0xb & 1);
    func_0x000107349544();
    func_0x00010734ac10(uVar19);
    FUN_107349658();
    func_0x00010734ab28(0);
    *(undefined8 *)(extraout_x9_06 + 0x18) = extraout_x11_01;
    *extraout_x10_01 = 0x22;
    for (uVar20 = extraout_x8_03; uVar20 < uVar1; uVar20 = uVar20 + 1) {
      bVar3 = *(byte *)((long)pppppuVar8 + uVar20);
      cVar4 = (&UNK_10de4e441)[bVar3];
      pppuVar22 = (*pppppuVar16)[3];
      (*pppppuVar16)[3] = (ulong ***)((long)pppuVar22 + 1);
      if (cVar4 == '\0') {
        *(byte *)pppuVar22 = bVar3;
      }
      else {
        *(byte *)pppuVar22 = 0x5c;
        pppuVar22 = (*pppppuVar16)[3];
        (*pppppuVar16)[3] = (ulong ***)((long)pppuVar22 + 1);
        *(char *)pppuVar22 = cVar4;
        if (cVar4 == 'u') {
          pppuVar22 = (*pppppuVar16)[3];
          (*pppppuVar16)[3] = (ulong ***)((long)pppuVar22 + 1);
          *(undefined1 *)pppuVar22 = 0x30;
          pppuVar22 = (*pppppuVar16)[3];
          (*pppppuVar16)[3] = (ulong ***)((long)pppuVar22 + 1);
          *(undefined1 *)pppuVar22 = 0x30;
          uVar6 = (&UNK_10de4e431)[bVar3 >> 4];
          pppuVar22 = (*pppppuVar16)[3];
          (*pppppuVar16)[3] = (ulong ***)((long)pppuVar22 + 1);
          *(undefined1 *)pppuVar22 = uVar6;
          uVar6 = (&UNK_10de4e431)[(ulong)bVar3 & 0xf];
          pppuVar22 = (*pppppuVar16)[3];
          (*pppppuVar16)[3] = (ulong ***)((long)pppuVar22 + 1);
          *(undefined1 *)pppuVar22 = uVar6;
        }
      }
    }
    func_0x00010734aa78();
    *extraout_x9_07 = 0x22;
    return (ulong *****)0x1;
  default:
    if ((uVar5 >> 9 & 1) == 0) {
      if ((uVar5 >> 5 & 1) == 0) {
        if ((uVar5 >> 6 & 1) == 0) {
          pppppuVar16 = (ulong *****)*pppppuVar23;
          if ((uVar5 >> 7 & 1) == 0) {
            func_0x00010734aad8(pppppuVar7);
            ppppuVar13 = *pppppuVar8;
            FUN_1073499a4(ppppuVar13,0x14);
            func_0x00010734a574(pppppuVar16,ppppuVar13);
            func_0x00010734aac4();
            func_0x00010734ac1c();
          }
          else {
            func_0x00010734aad8(pppppuVar7);
            ppppuVar13 = *pppppuVar8;
            FUN_1073499a4(ppppuVar13,0x15);
            func_0x00010734a55c(pppppuVar16,ppppuVar13);
            func_0x00010734aac4();
            func_0x00010734ac1c();
          }
        }
        else {
          uVar1 = *(uint *)pppppuVar23;
          func_0x00010734aad8(pppppuVar7);
          func_0x00010734ab1c(pppppuVar8,uVar1);
          ppppuVar13 = *pppppuVar8;
          FUN_1073499a4(ppppuVar13,10);
          func_0x00010734a2dc(pppppuVar16,ppppuVar13);
          func_0x00010734aac4();
          func_0x00010734ac1c();
        }
      }
      else {
        uVar1 = *(uint *)pppppuVar23;
        func_0x00010734aad8(pppppuVar7);
        func_0x00010734ab1c(pppppuVar8,uVar1);
        ppppuVar13 = *pppppuVar8;
        FUN_1073499a4(ppppuVar13,0xb);
        func_0x00010734a2c4(pppppuVar16,ppppuVar13);
        func_0x00010734aac4();
        func_0x00010734ac1c();
      }
      return pppppuVar16;
    }
    ppppuVar25 = *pppppuVar23;
    func_0x000107349544(pppppuVar7,6);
    if (((ulong)ppppuVar25 & 0x7fffffffffffffff) < 0x7ff0000000000000) {
      func_0x00010734ac10();
      FUN_1073499a4();
      pppppuVar12 = pppppuVar7;
      func_0x0001073499e8(ppppuVar25);
      (*pppppuVar16)[3] =
           (ulong ***)((long)pppppuVar12 + (long)(*pppppuVar16)[3] + (-0x19 - (long)pppppuVar7));
    }
    return (ulong *****)(ulong)(((ulong)ppppuVar25 & 0x7fffffffffffffff) < 0x7ff0000000000000);
  }
  func_0x00010734ab1c(pppppuVar7);
  func_0x000107349544();
  pppppuVar12 = pppppuVar16;
  func_0x00010734ac10(pppppuVar8);
  if ((int)pppppuVar12 == 0) {
    FUN_107349658();
    func_0x00010734aa78();
    *extraout_x9_03 = 0x66;
    uVar19 = 0x73;
    uVar6 = 0x6c;
    uVar21 = 0x61;
  }
  else {
    FUN_107349658();
    uVar19 = 0x75;
    uVar6 = 0x72;
    uVar21 = 0x74;
  }
  pppuVar22 = (*pppppuVar16)[3];
  (*pppppuVar16)[3] = (ulong ***)((long)pppuVar22 + 1);
  *(undefined1 *)pppuVar22 = uVar21;
  pppuVar22 = (*pppppuVar16)[3];
  (*pppppuVar16)[3] = (ulong ***)((long)pppuVar22 + 1);
  *(undefined1 *)pppuVar22 = uVar6;
  func_0x00010734ab28(uVar19);
  *(undefined8 *)(extraout_x9_04 + 0x18) = extraout_x11_00;
  *extraout_x10_00 = extraout_w8_00;
  func_0x00010734aa78();
  *extraout_x9_05 = 0x65;
  return (ulong *****)0x1;
}



/* Entry: 107348220; end: 107348797;  */

/* WARNING: Type propagation algorithm not settling */

ulong *****
FUN_107348220(undefined1 *param_1,ulong *****param_2,ulong *****param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  ushort uVar5;
  undefined1 in_ZR;
  ulong *****pppppuVar6;
  undefined8 *puVar7;
  ulong *****pppppuVar8;
  ulong *****pppppuVar9;
  ulong ****ppppuVar10;
  undefined8 ****ppppuVar11;
  ulong *****pppppuVar12;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined2 uVar13;
  undefined8 extraout_x8;
  undefined8 uVar14;
  ulong extraout_x8_00;
  ulong uVar15;
  undefined1 uVar16;
  undefined1 *extraout_x9;
  undefined1 *extraout_x9_00;
  undefined1 *extraout_x9_01;
  long extraout_x9_02;
  undefined1 *extraout_x9_03;
  long extraout_x9_04;
  undefined1 *extraout_x9_05;
  long extraout_x9_06;
  undefined1 *extraout_x9_07;
  undefined1 uVar17;
  undefined1 *extraout_x10;
  undefined1 *extraout_x10_00;
  undefined1 *extraout_x10_01;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  undefined8 extraout_x11_01;
  ulong ***pppuVar18;
  undefined8 *****pppppuVar19;
  ulong *****pppppuVar20;
  undefined8 ****ppppuVar21;
  undefined1 auStack_460 [32];
  ulong ****appppuStack_440 [3];
  undefined8 auStack_428 [2];
  byte bStack_418;
  undefined1 auStack_410 [400];
  undefined1 auStack_280 [64];
  undefined1 auStack_240 [8];
  ulong ****appppuStack_238 [13];
  undefined8 *****pppppuStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *****pppppuStack_190;
  ulong *****pppppuStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  ulong ****ppppuStack_140;
  ulong *****pppppuStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined1 uStack_120;
  int iStack_c8;
  ulong ****appppuStack_c0 [11];
  undefined8 uStack_68;
  
  pppppuVar12 = param_3;
  func_0x00010734aaf4();
  pppppuVar9 = pppppuVar12;
  uStack_68 = extraout_x8;
  func_0x000107766098();
  if ((int)pppppuVar12 != 0) {
    func_0x0001072c95f0(appppuStack_c0,1);
    uVar15 = (ulong)pppppuStack_190 >> 0x28;
    uVar1 = (uint)pppppuStack_190;
    pppppuStack_190._0_5_ = (uint5)(uVar1 & 0xffffff00);
    pppppuStack_190 = (undefined8 *****)CONCAT35((int3)uVar15,(uint5)pppppuStack_190);
    ppppuStack_140 = (ulong ****)((ulong)ppppuStack_140 & 0xffffffffffffff00);
    uStack_120 = 0;
    func_0x000107771274(auStack_428);
    func_0x0001072c94e0(&ppppuStack_140);
    if ((bStack_418 & 1) == 0) {
      func_0x000107771558(&ppppuStack_140,appppuStack_c0);
      pppppuVar19 = &ppppuStack_140;
      func_0x0001005d466c();
      pppppuStack_190 = pppppuVar19;
      pppppuStack_188 = param_3;
      func_0x00010734ab80();
      func_0x0001003a9204(&pppppuStack_1d0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppuStack_140);
      func_0x000104c2f64c(&ppppuStack_140);
      func_0x0001072625b4(&pppppuStack_190,&pppppuStack_1d0);
      func_0x000104c2f1f0(&ppppuStack_140,&pppppuStack_190);
      func_0x00010734abc8();
      pppppuVar9 = &ppppuStack_140;
      func_0x00010734aba0();
      func_0x000104c2f714(&ppppuStack_140);
      pppppuVar12 = (ulong *****)&pppppuStack_1d0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      func_0x00010734ab60();
      func_0x00010734ab50();
      goto LAB_107348638;
    }
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    pppppuStack_188 = (ulong *****)0x0;
    pppppuStack_190 = (undefined8 *****)0x0;
    uStack_178 = 0;
    uStack_180 = 0;
    func_0x000107753050(&ppppuStack_140,auStack_428[0],param_6,&pppppuStack_190);
    func_0x00010724b3d8(&pppppuStack_190);
    if (iStack_c8 == 1) {
      pppppuVar19 = &ppppuStack_140;
      FUN_1073405dc(pppppuVar19);
      func_0x0001072786d8(appppuStack_238,pppppuVar19 + 1);
      pppppuVar9 = param_2;
      FUN_1073489dc(auStack_240,param_2,param_4);
      pppppuVar12 = appppuStack_238;
      func_0x00010726af18();
    }
    else {
      func_0x000107771558(&pppppuStack_190,appppuStack_c0);
      pppppuVar19 = &pppppuStack_190;
      func_0x0001005d466c();
      pppppuStack_1d0 = pppppuVar19;
      uStack_1c8 = param_6;
      func_0x00010734ab80();
      func_0x0001003a9204(appppuStack_440);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppppuStack_190);
      func_0x000104c2f64c(&pppppuStack_190);
      func_0x0001072625b4(&pppppuStack_1d0,appppuStack_440);
      func_0x000104c2f1f0(&pppppuStack_190,&pppppuStack_1d0);
      func_0x000104c2f714(&pppppuStack_1d0);
      pppppuVar9 = (ulong *****)&pppppuStack_190;
      func_0x00010734aba0();
      func_0x00010734abc8();
      pppppuVar12 = appppuStack_440;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    }
    func_0x00010734abd0();
    func_0x00010734ab60();
    func_0x00010734ab50();
    in_ZR = iStack_c8 == 1;
    if (!(bool)in_ZR) goto LAB_107348638;
    goto LAB_107348630;
  }
  pppppuVar8 = param_3 + 1;
  func_0x00010734abb4((*param_3)[3]);
  if ((int)pppppuVar12 != 0) {
    param_2[1] = (ulong ****)0x0;
    param_2[2] = (ulong ****)0x0;
    *param_2 = (ulong ****)0x0;
    *(undefined2 *)((long)param_2 + 0x16) = 4;
    pppppuVar6 = pppppuVar8;
    (*(code *)(*param_3)[4])();
    pppppuVar12 = pppppuVar6;
    for (pppppuVar20 = (ulong *****)0x0; in_ZR = pppppuVar6 == pppppuVar20, !(bool)in_ZR;
        pppppuVar20 = (ulong *****)((long)pppppuVar20 + 1)) {
      (*(code *)(*param_3)[5])(appppuStack_c0,pppppuVar8,pppppuVar20);
      pppppuStack_138 = (ulong *****)0x0;
      ppppuStack_140 = (ulong ****)0x0;
      uStack_130 = 0;
      func_0x000107751334(auStack_410,param_6);
      FUN_107348220(auStack_280,&ppppuStack_140,appppuStack_c0,param_4,param_5,auStack_410);
      FUN_1073492e0(auStack_280);
      func_0x000107267da8(auStack_410);
      pppppuVar9 = &ppppuStack_140;
      FUN_107348da4(param_2,pppppuVar9,param_4);
      pppppuVar12 = appppuStack_c0;
      func_0x0001072f5f6c();
    }
    goto LAB_107348630;
  }
  func_0x00010734abb4((*param_3)[6]);
  if ((int)pppppuVar12 != 0) {
    param_2[1] = (ulong ****)0x0;
    param_2[2] = (ulong ****)0x0;
    *param_2 = (ulong ****)0x0;
    *(undefined2 *)((long)param_2 + 0x16) = 3;
    puVar7 = (undefined8 *)0x28;
    __Znwm();
    *puVar7 = &PTR_FUN_1109a41b8;
    puVar7[1] = param_4;
    puVar7[2] = param_5;
    puVar7[3] = param_6;
    puVar7[4] = param_2;
    pppppuVar9 = &ppppuStack_140;
    puStack_128 = puVar7;
    (*(code *)(*param_3)[8])(auStack_460,pppppuVar8);
    FUN_1073249ac(auStack_460);
    pppppuVar12 = &ppppuStack_140;
    FUN_1073249cc();
    goto LAB_107348630;
  }
  func_0x00010734abb4((*param_3)[2]);
  if ((int)pppppuVar12 != 0) {
    *param_2 = (ulong ****)0x0;
    param_2[1] = (ulong ****)0x0;
    param_2[2] = (ulong ****)0x0;
    goto LAB_107348630;
  }
  (*(code *)(*param_3)[0xe])(&ppppuStack_140);
  in_ZR = (int)ppppuStack_140 + -2 == 4;
  pppppuVar12 = param_2;
  switch((int)ppppuStack_140 + -2) {
  case 0:
    func_0x00010724ef84(appppuStack_c0,&pppppuStack_138);
    pppppuVar9 = appppuStack_c0;
    FUN_107348e58(param_2,pppppuVar9,param_4);
    pppppuVar12 = appppuStack_c0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    break;
  case 1:
    param_2[1] = (ulong ****)0x0;
    param_2[2] = (ulong ****)0x0;
    *param_2 = (ulong ****)pppppuStack_138;
    uVar13 = 0x216;
    goto code_r0x000107348628;
  case 2:
    pppppuVar9 = pppppuStack_138;
    func_0x000107304174();
    break;
  case 3:
    pppppuVar9 = pppppuStack_138;
    func_0x0001073041c8();
    break;
  case 4:
    param_2[1] = (ulong ****)0x0;
    param_2[2] = (ulong ****)0x0;
    *param_2 = (ulong ****)0x0;
    in_ZR = (char)pppppuStack_138 == '\0';
    uVar13 = 9;
    if (!(bool)in_ZR) {
      uVar13 = 10;
    }
code_r0x000107348628:
    *(undefined2 *)((long)param_2 + 0x16) = uVar13;
    pppppuVar12 = pppppuVar8;
    break;
  default:
    func_0x000104c2f64c(appppuStack_c0);
    func_0x000100060964(&pppppuStack_190,&UNK_10f40ab2b);
    func_0x000104c2f1f0(appppuStack_c0,&pppppuStack_190);
    func_0x00010734abc8();
    pppppuVar9 = appppuStack_c0;
    func_0x00010734aba0();
    pppppuVar12 = appppuStack_c0;
    func_0x000104c2f714();
    func_0x00010734abdc();
    goto LAB_107348638;
  }
  func_0x00010734abdc();
LAB_107348630:
  *param_1 = 0;
  param_1[0x38] = 0;
LAB_107348638:
  func_0x00010734aa8c(uStack_68);
  if ((bool)in_ZR) {
    return pppppuVar12;
  }
  ___stack_chk_fail();
  pppppuVar19 = appppuStack_c0;
  func_0x000104c2f714();
  func_0x00010734abdc();
  func_0x00010734ab14();
  uVar5 = *(ushort *)((long)pppppuVar19 + 0x16);
  switch(uVar5 & 7) {
  case 0:
    func_0x000107349544(pppppuVar9,0);
    func_0x00010734ac10(pppppuVar9);
    FUN_107349658();
    func_0x00010734aa78();
    *extraout_x9 = 0x6e;
    func_0x00010734aa78();
    *extraout_x9_00 = 0x75;
    func_0x00010734aa78();
    *extraout_x9_01 = 0x6c;
    func_0x00010734ab28();
    *(undefined8 *)(extraout_x9_02 + 0x18) = extraout_x11;
    *extraout_x10 = extraout_w8;
    return (ulong *****)0x1;
  case 1:
    break;
  case 2:
    break;
  case 3:
    pppppuVar12 = pppppuVar9;
    func_0x00010734936c();
    if ((int)pppppuVar12 == 0) {
      return (ulong *****)0x0;
    }
    ppppuVar21 = pppppuVar19[1] + 3;
    while( true ) {
      ppppuVar11 = ppppuVar21 + -3;
      if (ppppuVar11 == pppppuVar19[1] + (ulong)*(uint *)pppppuVar19 * 6) {
        pppppuVar9[4] = pppppuVar9[4] + -2;
        func_0x000107349610(*pppppuVar9,0x7d);
        return (ulong *****)0x1;
      }
      if ((*(ushort *)((long)ppppuVar21 + -2) >> 0xc & 1) == 0) {
        ppppuVar11 = (undefined8 ****)ppppuVar21[-2];
        iVar2 = *(int *)(ppppuVar21 + -3);
      }
      else {
        iVar2 = 0x15 - (uint)*(byte *)((long)ppppuVar21 + -3);
      }
      pppppuVar12 = pppppuVar9;
      FUN_107349430(pppppuVar9,ppppuVar11,iVar2,*(ushort *)((long)ppppuVar21 + -2) >> 0xb & 1);
      if ((int)pppppuVar12 == 0) break;
      func_0x00010734aba8();
      ppppuVar21 = ppppuVar21 + 6;
      if (((ulong)pppppuVar12 & 1) == 0) {
        return (ulong *****)0x0;
      }
    }
    return (ulong *****)0x0;
  case 4:
    pppppuVar12 = pppppuVar9;
    FUN_1073493cc();
    if ((int)pppppuVar12 != 0) {
      ppppuVar21 = pppppuVar19[1];
      do {
        if (ppppuVar21 == pppppuVar19[1] + (ulong)*(uint *)pppppuVar19 * 3) {
          pppppuVar9[4] = pppppuVar9[4] + -2;
          func_0x000107349610(*pppppuVar9,0x5d);
          return (ulong *****)0x1;
        }
        func_0x00010734aba8();
        ppppuVar21 = ppppuVar21 + 3;
      } while (((ulong)pppppuVar12 & 1) != 0);
    }
    return (ulong *****)0x0;
  case 5:
    if ((uVar5 >> 0xc & 1) == 0) {
      uVar1 = *(uint *)pppppuVar19;
      pppppuVar19 = (undefined8 *****)pppppuVar19[1];
    }
    else {
      uVar1 = 0x15 - (int)*(char *)((long)pppppuVar19 + 0x15);
    }
    func_0x00010734ac28(pppppuVar9,pppppuVar19,(ulong)uVar1,uVar5 >> 0xb & 1);
    func_0x000107349544();
    func_0x00010734ac10(param_4);
    FUN_107349658();
    func_0x00010734ab28(0);
    *(undefined8 *)(extraout_x9_06 + 0x18) = extraout_x11_01;
    *extraout_x10_01 = 0x22;
    for (uVar15 = extraout_x8_00; uVar15 < uVar1; uVar15 = uVar15 + 1) {
      bVar3 = *(byte *)((long)param_2 + uVar15);
      cVar4 = (&UNK_10de4e441)[bVar3];
      pppuVar18 = (*pppppuVar12)[3];
      (*pppppuVar12)[3] = (ulong ***)((long)pppuVar18 + 1);
      if (cVar4 == '\0') {
        *(byte *)pppuVar18 = bVar3;
      }
      else {
        *(byte *)pppuVar18 = 0x5c;
        pppuVar18 = (*pppppuVar12)[3];
        (*pppppuVar12)[3] = (ulong ***)((long)pppuVar18 + 1);
        *(char *)pppuVar18 = cVar4;
        if (cVar4 == 'u') {
          pppuVar18 = (*pppppuVar12)[3];
          (*pppppuVar12)[3] = (ulong ***)((long)pppuVar18 + 1);
          *(undefined1 *)pppuVar18 = 0x30;
          pppuVar18 = (*pppppuVar12)[3];
          (*pppppuVar12)[3] = (ulong ***)((long)pppuVar18 + 1);
          *(undefined1 *)pppuVar18 = 0x30;
          uVar16 = (&UNK_10de4e431)[bVar3 >> 4];
          pppuVar18 = (*pppppuVar12)[3];
          (*pppppuVar12)[3] = (ulong ***)((long)pppuVar18 + 1);
          *(undefined1 *)pppuVar18 = uVar16;
          uVar16 = (&UNK_10de4e431)[(ulong)bVar3 & 0xf];
          pppuVar18 = (*pppppuVar12)[3];
          (*pppppuVar12)[3] = (ulong ***)((long)pppuVar18 + 1);
          *(undefined1 *)pppuVar18 = uVar16;
        }
      }
    }
    func_0x00010734aa78();
    *extraout_x9_07 = 0x22;
    return (ulong *****)0x1;
  default:
    if ((uVar5 >> 9 & 1) == 0) {
      if ((uVar5 >> 5 & 1) == 0) {
        if ((uVar5 >> 6 & 1) == 0) {
          pppppuVar12 = (ulong *****)*pppppuVar19;
          if ((uVar5 >> 7 & 1) == 0) {
            func_0x00010734aad8(pppppuVar9);
            ppppuVar10 = *param_2;
            FUN_1073499a4(ppppuVar10,0x14);
            func_0x00010734a574(pppppuVar12,ppppuVar10);
            func_0x00010734aac4();
            func_0x00010734ac1c();
          }
          else {
            func_0x00010734aad8(pppppuVar9);
            ppppuVar10 = *param_2;
            FUN_1073499a4(ppppuVar10,0x15);
            func_0x00010734a55c(pppppuVar12,ppppuVar10);
            func_0x00010734aac4();
            func_0x00010734ac1c();
          }
        }
        else {
          uVar1 = *(uint *)pppppuVar19;
          func_0x00010734aad8(pppppuVar9);
          func_0x00010734ab1c(param_2,uVar1);
          ppppuVar10 = *param_2;
          FUN_1073499a4(ppppuVar10,10);
          func_0x00010734a2dc(pppppuVar12,ppppuVar10);
          func_0x00010734aac4();
          func_0x00010734ac1c();
        }
      }
      else {
        uVar1 = *(uint *)pppppuVar19;
        func_0x00010734aad8(pppppuVar9);
        func_0x00010734ab1c(param_2,uVar1);
        ppppuVar10 = *param_2;
        FUN_1073499a4(ppppuVar10,0xb);
        func_0x00010734a2c4(pppppuVar12,ppppuVar10);
        func_0x00010734aac4();
        func_0x00010734ac1c();
      }
      return pppppuVar12;
    }
    ppppuVar21 = *pppppuVar19;
    func_0x000107349544(pppppuVar9,6);
    if (((ulong)ppppuVar21 & 0x7fffffffffffffff) < 0x7ff0000000000000) {
      func_0x00010734ac10();
      FUN_1073499a4();
      pppppuVar8 = pppppuVar9;
      func_0x0001073499e8(ppppuVar21);
      (*pppppuVar12)[3] =
           (ulong ***)((long)pppppuVar8 + (long)(*pppppuVar12)[3] + (-0x19 - (long)pppppuVar9));
    }
    return (ulong *****)(ulong)(((ulong)ppppuVar21 & 0x7fffffffffffffff) < 0x7ff0000000000000);
  }
  func_0x00010734ab1c(pppppuVar9);
  func_0x000107349544();
  pppppuVar9 = pppppuVar12;
  func_0x00010734ac10(param_2);
  if ((int)pppppuVar9 == 0) {
    FUN_107349658();
    func_0x00010734aa78();
    *extraout_x9_03 = 0x66;
    uVar14 = 0x73;
    uVar16 = 0x6c;
    uVar17 = 0x61;
  }
  else {
    FUN_107349658();
    uVar14 = 0x75;
    uVar16 = 0x72;
    uVar17 = 0x74;
  }
  pppuVar18 = (*pppppuVar12)[3];
  (*pppppuVar12)[3] = (ulong ***)((long)pppuVar18 + 1);
  *(undefined1 *)pppuVar18 = uVar17;
  pppuVar18 = (*pppppuVar12)[3];
  (*pppppuVar12)[3] = (ulong ***)((long)pppuVar18 + 1);
  *(undefined1 *)pppuVar18 = uVar16;
  func_0x00010734ab28(uVar14);
  *(undefined8 *)(extraout_x9_04 + 0x18) = extraout_x11_00;
  *extraout_x10_00 = extraout_w8_00;
  func_0x00010734aa78();
  *extraout_x9_05 = 0x65;
  return (ulong *****)0x1;
}



/* Entry: 107348798; end: 1073489db;  */

long * FUN_107348798(ulong *param_1,undefined8 *param_2)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  ulong extraout_x8;
  undefined1 uVar10;
  undefined1 *extraout_x9;
  undefined1 *extraout_x9_00;
  undefined1 *extraout_x9_01;
  long extraout_x9_02;
  undefined1 *extraout_x9_03;
  long extraout_x9_04;
  undefined1 *extraout_x9_05;
  long extraout_x9_06;
  undefined1 *extraout_x9_07;
  undefined1 uVar11;
  undefined1 *extraout_x10;
  undefined1 *extraout_x10_00;
  undefined1 *extraout_x10_01;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  undefined8 extraout_x11_01;
  byte *pbVar12;
  undefined1 *puVar13;
  char *pcVar14;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  long lVar15;
  ulong uVar16;
  
  uVar4 = *(ushort *)((long)param_1 + 0x16);
  switch(uVar4 & 7) {
  case 0:
    func_0x000107349544(param_2,0);
    func_0x00010734ac10(param_2);
    FUN_107349658();
    func_0x00010734aa78();
    *extraout_x9 = 0x6e;
    func_0x00010734aa78();
    *extraout_x9_00 = 0x75;
    func_0x00010734aa78();
    *extraout_x9_01 = 0x6c;
    func_0x00010734ab28();
    *(undefined8 *)(extraout_x9_02 + 0x18) = extraout_x11;
    *extraout_x10 = extraout_w8;
    return (long *)0x1;
  case 1:
    break;
  case 2:
    break;
  case 3:
    puVar6 = param_2;
    func_0x00010734936c();
    if ((int)puVar6 == 0) {
      return (long *)0x0;
    }
    lVar15 = param_1[1] + 0x18;
    while( true ) {
      lVar8 = lVar15 + -0x18;
      if (lVar8 == param_1[1] + (ulong)(uint)*param_1 * 0x30) {
        param_2[4] = param_2[4] + -0x10;
        func_0x000107349610(*param_2,0x7d);
        return (long *)0x1;
      }
      if ((*(ushort *)(lVar15 + -2) >> 0xc & 1) == 0) {
        lVar8 = *(long *)(lVar15 + -0x10);
        iVar1 = *(int *)(lVar15 + -0x18);
      }
      else {
        iVar1 = 0x15 - (uint)*(byte *)(lVar15 + -3);
      }
      puVar6 = param_2;
      FUN_107349430(param_2,lVar8,iVar1,*(ushort *)(lVar15 + -2) >> 0xb & 1);
      if ((int)puVar6 == 0) break;
      func_0x00010734aba8();
      lVar15 = lVar15 + 0x30;
      if (((ulong)puVar6 & 1) == 0) {
        return (long *)0x0;
      }
    }
    return (long *)0x0;
  case 4:
    puVar6 = param_2;
    FUN_1073493cc();
    if ((int)puVar6 != 0) {
      uVar16 = param_1[1];
      do {
        if (uVar16 == param_1[1] + (ulong)(uint)*param_1 * 0x18) {
          param_2[4] = param_2[4] + -0x10;
          func_0x000107349610(*param_2,0x5d);
          return (long *)0x1;
        }
        func_0x00010734aba8();
        uVar16 = uVar16 + 0x18;
      } while (((ulong)puVar6 & 1) != 0);
    }
    return (long *)0x0;
  case 5:
    if ((uVar4 >> 0xc & 1) == 0) {
      uVar5 = (uint)*param_1;
      param_1 = (ulong *)param_1[1];
    }
    else {
      uVar5 = 0x15 - (int)*(char *)((long)param_1 + 0x15);
    }
    func_0x00010734ac28(param_2,param_1,(ulong)uVar5,uVar4 >> 0xb & 1);
    func_0x000107349544();
    func_0x00010734ac10(unaff_x21);
    FUN_107349658();
    func_0x00010734ab28(0);
    *(undefined8 *)(extraout_x9_06 + 0x18) = extraout_x11_01;
    *extraout_x10_01 = 0x22;
    for (uVar16 = extraout_x8; uVar16 < uVar5; uVar16 = uVar16 + 1) {
      bVar2 = *(byte *)((long)unaff_x20 + uVar16);
      cVar3 = (&UNK_10de4e441)[bVar2];
      pbVar12 = *(byte **)(*unaff_x19 + 0x18);
      *(byte **)(*unaff_x19 + 0x18) = pbVar12 + 1;
      if (cVar3 == '\0') {
        *pbVar12 = bVar2;
      }
      else {
        *pbVar12 = 0x5c;
        pcVar14 = *(char **)(*unaff_x19 + 0x18);
        *(char **)(*unaff_x19 + 0x18) = pcVar14 + 1;
        *pcVar14 = cVar3;
        if (cVar3 == 'u') {
          puVar13 = *(undefined1 **)(*unaff_x19 + 0x18);
          *(undefined1 **)(*unaff_x19 + 0x18) = puVar13 + 1;
          *puVar13 = 0x30;
          puVar13 = *(undefined1 **)(*unaff_x19 + 0x18);
          *(undefined1 **)(*unaff_x19 + 0x18) = puVar13 + 1;
          *puVar13 = 0x30;
          uVar10 = (&UNK_10de4e431)[bVar2 >> 4];
          puVar13 = *(undefined1 **)(*unaff_x19 + 0x18);
          *(undefined1 **)(*unaff_x19 + 0x18) = puVar13 + 1;
          *puVar13 = uVar10;
          uVar10 = (&UNK_10de4e431)[(ulong)bVar2 & 0xf];
          puVar13 = *(undefined1 **)(*unaff_x19 + 0x18);
          *(undefined1 **)(*unaff_x19 + 0x18) = puVar13 + 1;
          *puVar13 = uVar10;
        }
      }
    }
    func_0x00010734aa78();
    *extraout_x9_07 = 0x22;
    return (long *)0x1;
  default:
    if ((uVar4 >> 9 & 1) == 0) {
      if ((uVar4 >> 5 & 1) == 0) {
        if ((uVar4 >> 6 & 1) == 0) {
          unaff_x19 = (long *)*param_1;
          if ((uVar4 >> 7 & 1) == 0) {
            func_0x00010734aad8(param_2);
            uVar7 = *unaff_x20;
            FUN_1073499a4(uVar7,0x14);
            func_0x00010734a574(unaff_x19,uVar7);
            func_0x00010734aac4();
            func_0x00010734ac1c();
          }
          else {
            func_0x00010734aad8(param_2);
            uVar7 = *unaff_x20;
            FUN_1073499a4(uVar7,0x15);
            func_0x00010734a55c(unaff_x19,uVar7);
            func_0x00010734aac4();
            func_0x00010734ac1c();
          }
        }
        else {
          uVar16 = *param_1;
          func_0x00010734aad8(param_2);
          func_0x00010734ab1c(unaff_x20,(uint)uVar16);
          uVar7 = *unaff_x20;
          FUN_1073499a4(uVar7,10);
          func_0x00010734a2dc(unaff_x19,uVar7);
          func_0x00010734aac4();
          func_0x00010734ac1c();
        }
      }
      else {
        uVar16 = *param_1;
        func_0x00010734aad8(param_2);
        func_0x00010734ab1c(unaff_x20,(uint)uVar16);
        uVar7 = *unaff_x20;
        FUN_1073499a4(uVar7,0xb);
        func_0x00010734a2c4(unaff_x19,uVar7);
        func_0x00010734aac4();
        func_0x00010734ac1c();
      }
      return unaff_x19;
    }
    uVar16 = *param_1;
    func_0x000107349544(param_2,6);
    if ((uVar16 & 0x7fffffffffffffff) < 0x7ff0000000000000) {
      func_0x00010734ac10();
      FUN_1073499a4();
      puVar6 = param_2;
      func_0x0001073499e8(uVar16);
      *(long *)(*unaff_x19 + 0x18) =
           (long)puVar6 + (*(long *)(*unaff_x19 + 0x18) - (long)param_2) + -0x19;
    }
    return (long *)(ulong)((uVar16 & 0x7fffffffffffffff) < 0x7ff0000000000000);
  }
  func_0x00010734ab1c(param_2);
  func_0x000107349544();
  plVar9 = unaff_x19;
  func_0x00010734ac10(unaff_x20);
  if ((int)plVar9 == 0) {
    FUN_107349658();
    func_0x00010734aa78();
    *extraout_x9_03 = 0x66;
    uVar7 = 0x73;
    uVar10 = 0x6c;
    uVar11 = 0x61;
  }
  else {
    FUN_107349658();
    uVar7 = 0x75;
    uVar10 = 0x72;
    uVar11 = 0x74;
  }
  puVar13 = *(undefined1 **)(*unaff_x19 + 0x18);
  *(undefined1 **)(*unaff_x19 + 0x18) = puVar13 + 1;
  *puVar13 = uVar11;
  puVar13 = *(undefined1 **)(*unaff_x19 + 0x18);
  *(undefined1 **)(*unaff_x19 + 0x18) = puVar13 + 1;
  *puVar13 = uVar10;
  func_0x00010734ab28(uVar7);
  *(undefined8 *)(extraout_x9_04 + 0x18) = extraout_x11_00;
  *extraout_x10_00 = extraout_w8_00;
  func_0x00010734aa78();
  *extraout_x9_05 = 0x65;
  return (long *)0x1;
}



/* Entry: 1073489dc; end: 107348da3;  */

double * FUN_1073489dc(double *param_1,double *param_2,undefined8 param_3)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  char cVar6;
  undefined8 *******pppppppuVar7;
  bool bVar8;
  undefined1 uVar9;
  long lVar10;
  double *pdVar11;
  double *pdVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  uint uVar15;
  undefined8 extraout_x8;
  double *pdVar16;
  long extraout_x9;
  double dVar17;
  double dVar18;
  long lStack_138;
  double *pdStack_130;
  undefined8 ******ppppppuStack_128;
  undefined4 uStack_120;
  undefined8 ******ppppppuStack_118;
  ulong uStack_110;
  ulong uStack_108;
  undefined1 auStack_100 [8];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_98;
  double dStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_58;
  
  pdVar12 = param_2;
  func_0x00010734aaf4();
  uVar9 = *(int *)(param_1 + 0xd) == 8;
  uStack_58 = extraout_x8;
  switch(*(int *)(param_1 + 0xd)) {
  case 0:
    uStack_98 = 0;
    func_0x00010734aaa0();
    func_0x00010734aae4();
    func_0x00010734aab8();
    func_0x00010734aa68();
    break;
  case 1:
    cVar6 = *(char *)(extraout_x9 + 8);
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    *param_2 = 0.0;
    uVar9 = cVar6 == '\0';
    uVar14 = 9;
    if (!(bool)uVar9) {
      uVar14 = 10;
    }
    goto code_r0x000107348af8;
  case 2:
    dVar17 = *(double *)(extraout_x9 + 8);
    dVar18 = ABS(dVar17);
    uVar9 = false;
    bVar8 = true;
    if (dVar17 == (double)(long)dVar17) {
      uVar9 = false;
      bVar8 = true;
      if (!NAN(dVar18)) {
        uVar9 = dVar18 == 9007199254740991.0;
        bVar8 = 9007199254740991.0 <= dVar18;
      }
    }
    if (!bVar8 || (bool)uVar9) {
      func_0x00010734aa8c(extraout_x8);
      if ((bool)uVar9) {
        dVar17 = (double)(long)dVar17;
        param_2[1] = 0.0;
        param_2[2] = 0.0;
        *param_2 = dVar17;
        *(undefined2 *)((long)param_2 + 0x16) = 0x96;
        if ((long)dVar17 < 0) {
          if ((ulong)dVar17 < 0xffffffff80000000) {
            return param_2;
          }
          uVar14 = 0xb6;
        }
        else {
          uVar13 = 0x1d6;
          if ((ulong)dVar17 >> 0x20 != 0) {
            uVar13 = 0x196;
          }
          uVar14 = 0x1f6;
          if ((ulong)dVar17 >> 0x1f != 0) {
            uVar14 = uVar13;
          }
        }
        *(undefined2 *)((long)param_2 + 0x16) = uVar14;
        return param_2;
      }
      goto LAB_107348d08;
    }
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    *param_2 = dVar17;
    uVar14 = 0x216;
code_r0x000107348af8:
    *(undefined2 *)((long)param_2 + 0x16) = uVar14;
    goto LAB_107348b70;
  case 3:
    param_1 = (double *)(extraout_x9 + 8);
    func_0x00010724ef84(auStack_100);
    func_0x00010734aa68();
    func_0x00010734ab98();
    goto LAB_107348b70;
  case 4:
    uStack_f0 = *(undefined8 *)(extraout_x9 + 0x10);
    uStack_f8 = *(undefined8 *)(extraout_x9 + 8);
    uStack_98 = 4;
    func_0x00010734aaa0();
    func_0x00010734aae4();
    func_0x00010734aab8();
    func_0x00010734aa68();
    break;
  case 5:
    uStack_f0 = *(undefined8 *)(extraout_x9 + 0x10);
    uStack_f8 = *(undefined8 *)(extraout_x9 + 8);
    if (*(long *)(extraout_x9 + 0x10) != 0) {
      plVar1 = (long *)(*(long *)(extraout_x9 + 0x10) + 8);
      do {
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = *plVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    uStack_98 = 5;
    func_0x00010734aaa0();
    func_0x00010734aae4();
    func_0x00010734aab8();
    func_0x00010734aa68();
    break;
  case 6:
    pdVar12 = (double *)(extraout_x9 + 8);
    func_0x000107348eb0(&uStack_f8);
    func_0x00010734aaa0();
    func_0x00010734aae4();
    func_0x00010734aab8();
    func_0x00010734aa68();
    break;
  case 7:
    pdVar12 = (double *)(extraout_x9 + 8);
    func_0x000107348ecc(&uStack_f8);
    func_0x00010734aaa0();
    func_0x00010734aae4();
    func_0x00010734aab8();
    func_0x00010734aa68();
    break;
  case 8:
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    *param_2 = 0.0;
    *(undefined2 *)((long)param_2 + 0x16) = 4;
    lVar5 = (*(long **)(extraout_x9 + 8))[1];
    for (lVar10 = **(long **)(extraout_x9 + 8); uVar9 = lVar10 == lVar5, !(bool)uVar9;
        lVar10 = lVar10 + 0x70) {
      dStack_90 = 0.0;
      uStack_88 = 0;
      uStack_80 = 0;
      func_0x0001072786d8(&uStack_f8,lVar10 + 8);
      FUN_1073489dc(auStack_100,&dStack_90,param_3);
      func_0x00010734aae4();
      pdVar12 = &dStack_90;
      param_1 = param_2;
      FUN_107348da4(param_2,pdVar12,param_3);
    }
    goto LAB_107348b70;
  default:
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    *param_2 = 0.0;
    *(undefined2 *)((long)param_2 + 0x16) = 3;
    lVar10 = extraout_x9 + 8;
    FUN_107348ee8();
    lStack_138 = lVar10;
    pdVar11 = pdVar12;
    while (param_1 = (double *)0x0, pdStack_130 = pdVar11, lStack_138 != 0) {
      func_0x00010724ef84(&ppppppuStack_118,pdVar11);
      dStack_90 = 0.0;
      uStack_88 = 0;
      uStack_80 = 0;
      uVar3 = uStack_110;
      pppppppuVar7 = (undefined8 *******)ppppppuStack_118;
      if (-1 < (long)uStack_108) {
        uVar3 = uStack_108 >> 0x38;
        pppppppuVar7 = &ppppppuStack_118;
      }
      uVar9 = pppppppuVar7 == (undefined8 *******)0x0;
      ppppppuStack_128 = (undefined8 ******)&UNK_10de374a7;
      if (!(bool)uVar9) {
        ppppppuStack_128 = pppppppuVar7;
      }
      uStack_120 = (undefined4)uVar3;
      func_0x000107303ce4(&dStack_90,&ppppppuStack_128,param_3);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppppuStack_118);
      ppppppuStack_118 = (undefined8 *******)0x0;
      uStack_110 = 0;
      uStack_108 = 0;
      func_0x0001072786d8(&uStack_f8,pdVar11 + 8);
      FUN_1073489dc(auStack_100,&ppppppuStack_118,param_3);
      func_0x00010726af18(&uStack_f8);
      pdVar12 = &dStack_90;
      FUN_107348ef0(param_2,pdVar12,&ppppppuStack_118,param_3);
      func_0x0001072963cc(&lStack_138);
      pdVar11 = pdStack_130;
    }
    goto LAB_107348b70;
  }
  func_0x00010734ab98();
  param_1 = &dStack_90;
  func_0x000104c2f714();
LAB_107348b70:
  func_0x00010734aa8c(uStack_58);
  if ((bool)uVar9) {
    return param_1;
  }
LAB_107348d08:
  ___stack_chk_fail();
  func_0x00010734ab98();
  pdVar11 = &dStack_90;
  func_0x000104c2f714();
  func_0x00010734ab14();
  uVar15 = *(uint *)pdVar11;
  uVar4 = *(uint *)((long)pdVar11 + 4);
  if (uVar4 <= uVar15) {
    uVar2 = 0x10;
    if (uVar4 != 0) {
      uVar2 = uVar4 + (uVar4 + 1 >> 1);
    }
    if (uVar4 < uVar2) {
      pdVar16 = pdVar11;
      func_0x00010734ab8c((ulong)uVar4 * 0x18);
      pdVar11[1] = (double)pdVar16;
      *(uint *)((long)pdVar11 + 4) = uVar2;
      uVar15 = *(uint *)pdVar11;
    }
  }
  *(uint *)pdVar11 = uVar15 + 1;
  pdVar16 = (double *)((long)pdVar11[1] + (ulong)uVar15 * 0x18);
  dVar18 = pdVar12[1];
  dVar17 = *pdVar12;
  pdVar16[2] = pdVar12[2];
  pdVar16[1] = dVar18;
  *pdVar16 = dVar17;
  *(undefined2 *)((long)pdVar12 + 0x16) = 0;
  return pdVar11;
}



/* Entry: 107348da4; end: 107348e3b;  */

uint * FUN_107348da4(uint *param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar4 = *param_1;
  uVar2 = param_1[1];
  if (uVar2 <= uVar4) {
    uVar1 = 0x10;
    if (uVar2 != 0) {
      uVar1 = uVar2 + (uVar2 + 1 >> 1);
    }
    if (uVar2 < uVar1) {
      puVar3 = param_1;
      func_0x00010734ab8c((ulong)uVar2 * 0x18,param_1,*(undefined8 *)(param_1 + 2),param_3,
                          (ulong)uVar1 * 0x18);
      *(uint **)(param_1 + 2) = puVar3;
      param_1[1] = uVar1;
      uVar4 = *param_1;
    }
  }
  *param_1 = uVar4 + 1;
  puVar5 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar4 * 0x18);
  uVar7 = param_2[1];
  uVar6 = *param_2;
  puVar5[2] = param_2[2];
  puVar5[1] = uVar7;
  *puVar5 = uVar6;
  *(undefined2 *)((long)param_2 + 0x16) = 0;
  return param_1;
}



/* Entry: 107348e3c; end: 107348e57;  */

void FUN_107348e3c(long param_1)

{
  func_0x000104c318bc();
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}



/* Entry: 107348e58; end: 107348eaf;  */

undefined8 FUN_107348e58(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puStack_30;
  uint uStack_28;
  
  puVar1 = (undefined8 *)*param_2;
  uStack_28 = (uint)param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    puVar1 = param_2;
    uStack_28 = (uint)*(byte *)((long)param_2 + 0x17);
  }
  puStack_30 = (undefined8 *)&UNK_10de374a7;
  if (puVar1 != (undefined8 *)0x0) {
    puStack_30 = puVar1;
  }
  func_0x000107303ce4(param_1,&puStack_30);
  return param_1;
}



/* Entry: 107348eb0; end: 107348ee7;  */

void FUN_107348eb0(long param_1)

{
  func_0x0001072787e4();
  *(undefined4 *)(param_1 + 0x60) = 6;
  return;
}



/* Entry: 107348ee8; end: 107348eef;  */

undefined1  [16] FUN_107348ee8(long *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = ((undefined8 *)*param_1)[1];
  uStack_20 = *(undefined8 *)*param_1;
  func_0x00010729633c(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 107348ef0; end: 107348f8f;  */

uint * FUN_107348ef0(uint *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = *param_1;
  uVar2 = param_1[1];
  if (uVar2 <= uVar3) {
    iVar1 = 0x10;
    if (uVar2 != 0) {
      iVar1 = uVar2 + (uVar2 + 1 >> 1);
    }
    FUN_107348f90(param_1,iVar1,param_4);
    uVar3 = *param_1;
  }
  lVar5 = *(long *)(param_1 + 2);
  puVar4 = (undefined8 *)(lVar5 + (ulong)uVar3 * 0x30);
  uVar7 = param_2[1];
  uVar6 = *param_2;
  puVar4[2] = param_2[2];
  puVar4[1] = uVar7;
  *puVar4 = uVar6;
  *(undefined2 *)((long)param_2 + 0x16) = 0;
  lVar5 = lVar5 + (ulong)*param_1 * 0x30;
  uVar7 = param_3[1];
  uVar6 = *param_3;
  *(undefined8 *)(lVar5 + 0x28) = param_3[2];
  *(undefined8 *)(lVar5 + 0x20) = uVar7;
  *(undefined8 *)(lVar5 + 0x18) = uVar6;
  *(undefined2 *)((long)param_3 + 0x16) = 0;
  *param_1 = *param_1 + 1;
  return param_1;
}



/* Entry: 107348f90; end: 107349087;  */

long FUN_107348f90(long param_1,uint param_2,undefined8 param_3)

{
  long lVar1;
  
  if (*(uint *)(param_1 + 4) < param_2) {
    lVar1 = param_1;
    func_0x00010734ab8c((ulong)*(uint *)(param_1 + 4) * 0x30,param_1,*(undefined8 *)(param_1 + 8),
                        param_3,(ulong)param_2 * 0x30);
    *(long *)(param_1 + 8) = lVar1;
    *(uint *)(param_1 + 4) = param_2;
  }
  return param_1;
}



/* Entry: 107349088; end: 10734908f;  */

void FUN_107349088(void)

{
  return;
}



/* Entry: 107349090; end: 1073490cb;  */

void FUN_107349090(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  *puVar1 = &PTR_FUN_1109a41b8;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = uVar2;
  return;
}



/* Entry: 1073490cc; end: 107349103;  */

void FUN_1073490cc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_2 = &PTR_FUN_1109a41b8;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = uVar3;
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}


