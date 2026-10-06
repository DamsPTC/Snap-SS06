/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1083dd3a8; end: 1083dd42b;  */

void FUN_1083dd3a8(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lStack_38;
  undefined1 auStack_30 [12];
  undefined4 uStack_24;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  plVar2 = *(long **)(param_1 + 0x18);
  uStack_24 = param_2;
  (**(code **)(*plVar2 + 0x30))(&lStack_38,plVar2,(int)plVar2[1]);
  FUN_1083dd2c4(auStack_30,&uStack_24,uVar1,&lStack_38);
  func_0x0001083dd494();
  lVar3 = lStack_38;
  lStack_38 = 0;
  if (lVar3 != 0) {
    func_0x0001083dd488();
  }
  return;
}



/* Entry: 1083dd42c; end: 1083dd453;  */

undefined8 FUN_1083dd42c(undefined8 param_1)

{
  FUN_1083dd454(param_1,0);
  return param_1;
}



/* Entry: 1083dd454; end: 1083dd46b;  */

void FUN_1083dd454(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 extraout_x8;
  
  plVar1 = (long *)*param_1;
  *param_1 = param_2;
  if (plVar1 == (long *)0x0) {
    return;
  }
  if (plVar1 != (long *)0x0) {
    FUN_1083dc5b0();
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



/* Entry: 1083dd46c; end: 1083dd487;  */

void FUN_1083dd46c(undefined8 param_1,long *param_2)

{
  undefined8 extraout_x8;
  
  if (param_2 != (long *)0x0) {
    FUN_1083dc5b0();
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



/* Entry: 1083dd488; end: 1083dd4a7;  */

void FUN_1083dd488(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001083dd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1083dd4a8; end: 1083dd563;  */

void FUN_1083dd4a8(long *param_1,undefined8 param_2,undefined4 param_3,long *param_4,long *param_5)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lStack_40;
  undefined4 uStack_34;
  
  plVar2 = param_4;
  uStack_34 = param_3;
  (**(code **)(*param_4 + 0x68))();
  iVar1 = (int)*(undefined8 *)(*param_5 + 0x10);
  FUN_1083dd770();
  if ((int)plVar2 == iVar1) {
    plVar2 = param_4;
    (**(code **)(*param_4 + 0x60))();
    iVar1 = (int)plVar2;
    func_0x0001083dd77c(*param_5);
    if ((int)plVar2 == iVar1) {
      lVar3 = *param_5;
      *param_5 = 0;
      *param_1 = lVar3;
      return;
    }
  }
  FUN_1083dd564(&lStack_40,&uStack_34,param_4,param_5);
  lVar3 = lStack_40;
  lStack_40 = 0;
  *param_1 = lVar3;
  FUN_1083dd714(&lStack_40);
  return;
}



/* Entry: 1083dd564; end: 1083dd5cb;  */

void FUN_1083dd564(undefined8 *param_1,undefined4 *param_2,undefined8 param_3,undefined8 *param_4)

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
  *(undefined4 *)((long)puVar2 + 0xc) = 0x20;
  puVar2[2] = param_3;
  puVar2[3] = uVar3;
  *puVar2 = &PTR_FUN_110a45140;
  *param_1 = puVar2;
  return;
}



/* Entry: 1083dd5cc; end: 1083dd65f;  */

void FUN_1083dd5cc(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = (int)*(undefined8 *)(param_1 + 0x10);
  FUN_1083dd770();
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = param_2 / iVar2;
  }
  param_2 = param_2 - iVar1 * iVar2;
  func_0x0001083dd77c(*(undefined8 *)(param_1 + 0x18));
  if (iVar1 < iVar2) {
    iVar2 = (int)*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
    FUN_1083dd770();
    if (param_2 < iVar2) {
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
      FUN_1083dd770(uVar3);
      (**(code **)(**(long **)(param_1 + 0x18) + 0x28))
                (*(long **)(param_1 + 0x18),param_2 + (int)uVar3 * iVar1);
    }
  }
  return;
}



/* Entry: 1083dd660; end: 1083dd663;  */

undefined8 * FUN_1083dd660(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a44f78;
  FUN_1083c8734(param_1 + 3);
  return param_1;
}



/* Entry: 1083dd664; end: 1083dd677;  */

void FUN_1083dd664(long *param_1)

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



/* Entry: 1083dd678; end: 1083dd67f;  */

undefined8 FUN_1083dd678(void)

{
  return 1;
}



/* Entry: 1083dd680; end: 1083dd713;  */

void FUN_1083dd680(undefined8 *param_1,long param_2,undefined4 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lStack_38;
  undefined8 uStack_30;
  undefined4 uStack_24;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  plVar2 = *(long **)(param_2 + 0x18);
  uStack_24 = param_3;
  (**(code **)(*plVar2 + 0x30))(&lStack_38,plVar2,(int)plVar2[1]);
  FUN_1083dd564(&uStack_30,&uStack_24,uVar1,&lStack_38);
  uVar1 = uStack_30;
  uStack_30 = 0;
  *param_1 = uVar1;
  FUN_1083dd714(&uStack_30);
  lVar3 = lStack_38;
  lStack_38 = 0;
  if (lVar3 != 0) {
    func_0x0001083dd78c();
  }
  return;
}



/* Entry: 1083dd714; end: 1083dd73b;  */

undefined8 FUN_1083dd714(undefined8 param_1)

{
  FUN_1083dd73c(param_1,0);
  return param_1;
}



/* Entry: 1083dd73c; end: 1083dd753;  */

void FUN_1083dd73c(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 extraout_x8;
  
  plVar1 = (long *)*param_1;
  *param_1 = param_2;
  if (plVar1 == (long *)0x0) {
    return;
  }
  if (plVar1 != (long *)0x0) {
    FUN_1083dc5b0();
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



/* Entry: 1083dd754; end: 1083dd76f;  */

void FUN_1083dd754(undefined8 param_1,long *param_2)

{
  undefined8 extraout_x8;
  
  if (param_2 != (long *)0x0) {
    FUN_1083dc5b0();
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



/* Entry: 1083dd770; end: 1083dd797;  */

void FUN_1083dd770(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001083dd778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x68))();
  return;
}



/* Entry: 1083dd798; end: 1083ddb17;  */

void FUN_1083dd798(undefined8 *param_1,long param_2,undefined4 param_3,long *param_4,long param_5)

{
  code *pcVar1;
  int iVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  char *pcVar6;
  long *plVar7;
  long *plStack_f0;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  (**(code **)(*param_4 + 200))();
  if (*(int *)(param_5 + 0x18) == 1) {
    plVar7 = *(long **)(**(long **)(param_5 + 0x10) + 0x10);
    plVar3 = param_4;
    func_0x0001083dde60(*(undefined8 *)(*plVar7 + 0xb8));
    if (((ulong)plVar3 & 1) != 0) {
      if (*(int *)(param_5 + 0x18) < 1) {
LAB_1083dda54:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1083dda58);
        (*pcVar1)();
      }
      plVar3 = param_4;
      FUN_1083f165c(param_4,param_2,**(undefined8 **)(param_5 + 0x10));
      if ((int)plVar3 == 0) {
        if (0 < *(int *)(param_5 + 0x18)) {
          plStack_f0 = (long *)**(undefined8 **)(param_5 + 0x10);
          **(undefined8 **)(param_5 + 0x10) = 0;
          FUN_1083ddb18(param_1,param_2,param_3,param_4,&plStack_f0);
          if (plStack_f0 == (long *)0x0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x0001083dd878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plStack_f0 + 8))();
          return;
        }
        goto LAB_1083dda54;
      }
      goto LAB_1083dda38;
    }
    plVar3 = plVar7;
    (**(code **)(*plVar7 + 0x50))();
    (**(code **)(*plVar3 + 0x38))();
    pcVar6 = "";
    if ((int)plVar3 != 0) {
      func_0x0001083dde60(*(undefined8 *)(*plVar7 + 0xd0));
      iVar2 = (int)plVar3;
      if (((ulong)plVar3 & 1) == 0) {
        func_0x0001083dde60(*(undefined8 *)(*plVar7 + 0xd8));
        pcVar6 = "; use \'[0][0]\' instead";
        if (iVar2 == 0) {
          pcVar6 = "";
        }
      }
      else {
        pcVar6 = "; use \'.x\' instead";
      }
    }
    uVar5 = *(undefined8 *)(param_2 + 0x10);
    FUN_10831d8f8(auStack_d0,plVar7);
    func_0x0001004c3cd0(auStack_b8,&DAT_10f638984,auStack_d0);
    func_0x00010048a6c8(auStack_a0,auStack_b8,&UNK_10f49271a);
    FUN_10831d8f8(auStack_e8,param_4);
    func_0x00010533a9c0(auStack_88,auStack_a0,auStack_e8);
    func_0x00010048a6c8(auStack_70,auStack_88,&UNK_10f49273a);
    func_0x00010048a6c8(auStack_58,auStack_70,pcVar6);
    func_0x0001083dde40();
    FUN_1083c8a60(uVar5,param_3);
    func_0x0001083dde30();
    func_0x0001083dde28();
    func_0x0001083dde38();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e8);
    func_0x0001083dde20();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b8);
    puVar4 = auStack_d0;
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x10);
    FUN_10831d8f8(auStack_b8,param_4);
    func_0x0001004c3cd0(auStack_a0,&UNK_10f492748,auStack_b8);
    func_0x00010048a6c8(auStack_88,auStack_a0,&UNK_10f492837);
    __ZNSt3__19to_stringEi(auStack_d0,*(undefined4 *)(param_5 + 0x18));
    func_0x00010533a9c0(auStack_70,auStack_88,auStack_d0);
    func_0x00010048a6c8(auStack_58,auStack_70,&DAT_10f684600);
    func_0x0001083dde40();
    FUN_1083c8a60(uVar5,param_3);
    func_0x0001083dde30();
    func_0x0001083dde28();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d0);
    func_0x0001083dde38();
    func_0x0001083dde20();
    puVar4 = auStack_b8;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar4);
LAB_1083dda38:
  *param_1 = 0;
  return;
}



/* Entry: 1083ddb18; end: 1083ddcd3;  */

void FUN_1083ddb18(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long *param_5)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  plVar1 = *(long **)(*param_5 + 0x10);
  (**(code **)(*plVar1 + 0x38))(plVar1,param_4);
  if ((int)plVar1 == 0) {
    lStack_60 = *param_5;
    *param_5 = 0;
    uVar5 = param_3 & 0xffffffff;
    FUN_1083c67e4(&lStack_58,uVar5,&lStack_60);
    lVar4 = lStack_58;
    lStack_58 = 0;
    lVar2 = *param_5;
    *param_5 = lVar4;
    if (lVar2 != 0) {
      FUN_1083dde14();
      lVar4 = lStack_58;
      lStack_58 = 0;
      if (lVar4 != 0) {
        FUN_1083dde14();
      }
    }
    if (lStack_60 != 0) {
      FUN_1083dde14();
    }
    lVar4 = *param_5;
    if (*(int *)(lVar4 + 0xc) == 0x21) {
      plVar1 = *(long **)(lVar4 + 0x10);
      (**(code **)(*plVar1 + 0xc0))();
      if ((int)plVar1 != 0) {
        lStack_68 = *(long *)(*param_5 + 0x18);
        *(undefined8 *)(*param_5 + 0x18) = 0;
        FUN_1083ddb18(param_1,param_2,uVar5,param_4,&lStack_68);
        if (lStack_68 == 0) {
          return;
        }
        FUN_1083dde14();
        return;
      }
    }
    else if (*(int *)(lVar4 + 0xc) == 0x29) {
      uVar7 = *(undefined8 *)(lVar4 + 0x18);
      uVar3 = param_4;
      FUN_1083f1734(uVar7,param_4,param_2,*(undefined4 *)(lVar4 + 8));
      uVar6 = 0;
      if ((int)uVar3 == 0) {
        uVar6 = uVar7;
      }
      FUN_1083c7aa0(param_1,uVar6,uVar5,param_4);
      return;
    }
    FUN_1083ddcd4(&lStack_58,param_3,param_4,param_5);
    lVar4 = lStack_58;
    lStack_58 = 0;
    *param_1 = lVar4;
    FUN_1083ddde0(&lStack_58);
  }
  else {
    *(int *)(*param_5 + 8) = (int)param_3;
    lVar4 = *param_5;
    *param_5 = 0;
    *param_1 = lVar4;
  }
  return;
}



/* Entry: 1083ddcd4; end: 1083ddd2f;  */

void FUN_1083ddcd4(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x20;
  FUN_1083d3a60();
  uVar2 = *param_4;
  *param_4 = 0;
  *(undefined4 *)(puVar1 + 1) = param_2;
  *(undefined4 *)((long)puVar1 + 0xc) = 0x21;
  puVar1[2] = param_3;
  puVar1[3] = uVar2;
  *puVar1 = &PTR_FUN_110a451b8;
  *param_1 = puVar1;
  return;
}



/* Entry: 1083ddd30; end: 1083ddd33;  */

undefined8 * FUN_1083ddd30(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a44f78;
  FUN_1083c8734(param_1 + 3);
  return param_1;
}



/* Entry: 1083ddd34; end: 1083ddd47;  */

void FUN_1083ddd34(long *param_1)

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



/* Entry: 1083ddd48; end: 1083ddddf;  */

void FUN_1083ddd48(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  plVar2 = *(long **)(param_2 + 0x18);
  (**(code **)(*plVar2 + 0x30))(&lStack_40,plVar2,(int)plVar2[1]);
  FUN_1083ddcd4(&uStack_38,param_3,uVar1,&lStack_40);
  uVar1 = uStack_38;
  uStack_38 = 0;
  *param_1 = uVar1;
  FUN_1083ddde0(&uStack_38);
  lVar3 = lStack_40;
  lStack_40 = 0;
  if (lVar3 != 0) {
    FUN_1083dde14();
  }
  return;
}



/* Entry: 1083ddde0; end: 1083dde13;  */

long * FUN_1083ddde0(long *param_1)

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



/* Entry: 1083dde14; end: 1083dde67;  */

void FUN_1083dde14(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001083dde1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1083dde68; end: 1083ddf4f;  */

void FUN_1083dde68(long *param_1,undefined8 param_2,undefined4 param_3,long *param_4,long *param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_48;
  long lStack_40;
  undefined4 uStack_34;
  
  plVar1 = param_4;
  uStack_34 = param_3;
  (**(code **)(*param_4 + 0xb8))();
  if ((int)plVar1 == 0) {
    lStack_48 = *param_5;
    *param_5 = 0;
    FUN_1083c67e4(&lStack_40,param_3,&lStack_48);
    lVar3 = lStack_40;
    lStack_40 = 0;
    lVar2 = *param_5;
    *param_5 = lVar3;
    if (lVar2 != 0) {
      FUN_1083de0d8();
      lVar3 = lStack_40;
      lStack_40 = 0;
      if (lVar3 != 0) {
        FUN_1083de0d8();
      }
    }
    if (lStack_48 != 0) {
      FUN_1083de0d8();
    }
    FUN_1083ddf50(&lStack_40,&uStack_34,param_4,param_5);
    func_0x0001083de0e4();
  }
  else {
    *(undefined4 *)(*param_5 + 8) = param_3;
    lVar3 = *param_5;
    *param_5 = 0;
    *param_1 = lVar3;
  }
  return;
}



/* Entry: 1083ddf50; end: 1083ddfaf;  */

void FUN_1083ddf50(undefined8 *param_1,undefined4 *param_2,undefined8 param_3,undefined8 *param_4)

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
  *(undefined4 *)((long)puVar2 + 0xc) = 0x22;
  puVar2[2] = param_3;
  puVar2[3] = uVar3;
  *puVar2 = &PTR_FUN_110a45230;
  *param_1 = puVar2;
  return;
}



/* Entry: 1083ddfb0; end: 1083ddfb3;  */

undefined8 * FUN_1083ddfb0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a44f78;
  FUN_1083c8734(param_1 + 3);
  return param_1;
}



/* Entry: 1083ddfb4; end: 1083ddfc7;  */

void FUN_1083ddfb4(long *param_1)

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



/* Entry: 1083ddfc8; end: 1083ddfcf;  */

undefined8 FUN_1083ddfc8(void)

{
  return 1;
}



/* Entry: 1083ddfd0; end: 1083ddff7;  */

void FUN_1083ddfd0(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x28))(*(long **)(param_1 + 0x18),0);
  return;
}



/* Entry: 1083ddff8; end: 1083de07b;  */

void FUN_1083ddff8(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lStack_38;
  undefined1 auStack_30 [12];
  undefined4 uStack_24;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  plVar2 = *(long **)(param_1 + 0x18);
  uStack_24 = param_2;
  (**(code **)(*plVar2 + 0x30))(&lStack_38,plVar2,(int)plVar2[1]);
  FUN_1083ddf50(auStack_30,&uStack_24,uVar1,&lStack_38);
  func_0x0001083de0e4();
  lVar3 = lStack_38;
  lStack_38 = 0;
  if (lVar3 != 0) {
    func_0x0001083de0d8();
  }
  return;
}



/* Entry: 1083de07c; end: 1083de0a3;  */

undefined8 FUN_1083de07c(undefined8 param_1)

{
  FUN_1083de0a4(param_1,0);
  return param_1;
}



/* Entry: 1083de0a4; end: 1083de0bb;  */

void FUN_1083de0a4(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 extraout_x8;
  
  plVar1 = (long *)*param_1;
  *param_1 = param_2;
  if (plVar1 == (long *)0x0) {
    return;
  }
  if (plVar1 != (long *)0x0) {
    FUN_1083dc5b0();
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



/* Entry: 1083de0bc; end: 1083de0d7;  */

void FUN_1083de0bc(undefined8 param_1,long *param_2)

{
  undefined8 extraout_x8;
  
  if (param_2 != (long *)0x0) {
    FUN_1083dc5b0();
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



/* Entry: 1083de0d8; end: 1083de0f7;  */

void FUN_1083de0d8(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001083de0e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1083de0f8; end: 1083de36b;  */

long **** FUN_1083de0f8(undefined8 *param_1,long ****param_2,long ****param_3,long ****param_4,
                       long ****param_5)

{
  long **pplVar1;
  code *pcVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  long ****pppplVar6;
  undefined8 uVar7;
  long **pplVar8;
  long ****pppplVar9;
  long ****pppplVar10;
  long ****pppplVar11;
  undefined8 extraout_x8;
  long ****extraout_x8_00;
  long ****extraout_x8_01;
  undefined8 extraout_x8_02;
  long ****extraout_x11;
  long ****extraout_x11_00;
  long ****pppplVar12;
  long ****unaff_x24;
  long lVar13;
  long ***ppplVar14;
  undefined1 auStack_158 [32];
  undefined1 auStack_138 [32];
  undefined8 uStack_118;
  long ***ppplStack_110;
  long ***ppplStack_108;
  long ***ppplStack_100;
  long ***ppplStack_f8;
  long ***ppplStack_f0;
  long ***ppplStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  long ***ppplStack_d0;
  long ***ppplStack_c8;
  ulong uStack_c0;
  long ***ppplStack_b0;
  long ***appplStack_a8 [2];
  char cStack_91;
  long **applStack_90 [3];
  long **applStack_78 [4];
  undefined8 uStack_58;
  
  pppplVar11 = param_3;
  pppplVar6 = param_4;
  pppplVar10 = param_5;
  func_0x0001083de554();
  uStack_58 = extraout_x8;
  (*(code *)(*pppplVar6)[0x12])(pppplVar6);
  if (pppplVar11 == (long ****)(long)*(int *)(param_5 + 3)) {
    pppplVar9 = param_4;
    (*(code *)(*param_4)[0x25])();
    if (((ulong)pppplVar9 & 1) == 0) {
      unaff_x24 = (long ****)0x0;
      lVar13 = 0x50;
      do {
        uVar5 = unaff_x24 == (long ****)(long)*(int *)(param_5 + 3);
        if ((long)*(int *)(param_5 + 3) <= (long)unaff_x24) {
          FUN_1083c8078(applStack_78,param_5);
          pppplVar12 = (long ****)applStack_78;
          pppplVar10 = (long ****)applStack_78;
          func_0x0001083de5a0(applStack_90);
          pplVar1 = applStack_90[0];
          applStack_90[0] = (long **)0x0;
          *param_1 = pplVar1;
          pppplVar9 = (long ****)applStack_90;
          FUN_1083de4f8();
          func_0x0001083de538();
          goto LAB_1083de210;
        }
        ppplVar14 = param_5[2];
        pppplVar6 = param_4;
        (*(code *)(*param_4)[0x12])();
        uVar5 = pppplVar11 == unaff_x24;
        if (pppplVar11 <= unaff_x24) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1083de310);
          (*pcVar2)();
        }
        uVar7 = *(undefined8 *)((long)pppplVar6 + lVar13);
        ppplStack_b0 = (long ***)ppplVar14[(long)unaff_x24];
        ppplVar14[(long)unaff_x24] = (long **)0x0;
        pppplVar11 = &ppplStack_b0;
        pppplVar6 = param_2;
        FUN_1083f1310(applStack_90,uVar7,pppplVar11,param_2);
        pplVar1 = applStack_90[0];
        applStack_90[0] = (long **)0x0;
        pplVar8 = ppplVar14[(long)unaff_x24];
        ppplVar14[(long)unaff_x24] = pplVar1;
        if (pplVar8 != (long **)0x0) {
          func_0x0001083de52c();
        }
        pplVar1 = applStack_90[0];
        applStack_90[0] = (long **)0x0;
        if ((long ***)pplVar1 != (long ***)0x0) {
          func_0x0001083de52c();
        }
        pppplVar9 = (long ****)ppplStack_b0;
        ppplStack_b0 = (long ***)0x0;
        if (pppplVar9 != (long ****)0x0) {
          func_0x0001083de52c();
        }
        ppplVar14 = ppplVar14 + (long)unaff_x24;
        unaff_x24 = (long ****)((long)unaff_x24 + 1);
        lVar13 = lVar13 + 0x58;
        pppplVar12 = param_5;
      } while (*ppplVar14 != (long **)0x0);
      goto LAB_1083de20c;
    }
    param_5 = (long ****)param_2[2];
    param_2 = appplStack_a8;
    func_0x0001083de57c();
    cVar4 = cStack_91 < '\0';
    uVar5 = cStack_91 == '\0';
    cVar3 = '\0';
    ppplStack_d0 = appplStack_a8[0];
    if (!(bool)cVar4) {
      ppplStack_d0 = (long ***)param_2;
    }
    func_0x0001083de594(&UNK_10f4928e5);
    func_0x0001083de564();
    pppplVar10 = extraout_x11;
    if (cVar4 == cVar3) {
      pppplVar10 = extraout_x8_00;
    }
    pppplVar11 = (long ****)((ulong)param_3 & 0xffffffff);
    FUN_1083c8a60(param_5,pppplVar11);
  }
  else {
    param_2 = (long ****)param_2[2];
    func_0x0001083de57c();
    (*(code *)(*param_4)[0x12])(param_4);
    cVar4 = cStack_91 < '\0';
    uVar5 = cStack_91 == '\0';
    cVar3 = '\0';
    ppplStack_d0 = appplStack_a8[0];
    if (!(bool)cVar4) {
      ppplStack_d0 = (long ***)appplStack_a8;
    }
    uStack_c0 = (ulong)*(uint *)(param_5 + 3);
    ppplStack_c8 = (long ***)pppplVar11;
    func_0x0001083de594(&UNK_10f492899);
    func_0x0001083de564();
    pppplVar10 = extraout_x11_00;
    if (cVar4 == cVar3) {
      pppplVar10 = extraout_x8_01;
    }
    pppplVar11 = (long ****)((ulong)param_3 & 0xffffffff);
    FUN_1083c8a60(param_2,pppplVar11);
    unaff_x24 = (long ****)appplStack_a8[0];
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(applStack_90);
  pppplVar9 = appplStack_a8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  pppplVar12 = param_5;
LAB_1083de20c:
  *param_1 = 0;
  param_5 = pppplVar11;
LAB_1083de210:
  func_0x0001083de540(uStack_58);
  if ((bool)uVar5) {
    return pppplVar9;
  }
  ___stack_chk_fail();
  func_0x0001083de538();
  pppplVar11 = pppplVar9;
  __Unwind_Resume();
  pcStack_d8 = FUN_1083de36c;
  ppplStack_110 = (long ***)unaff_x24;
  ppplStack_108 = (long ***)param_2;
  ppplStack_100 = (long ***)pppplVar12;
  ppplStack_f8 = (long ***)param_4;
  ppplStack_f0 = (long ***)param_3;
  ppplStack_e8 = (long ***)pppplVar9;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x0001083de554();
  pppplVar9 = (long ****)0x38;
  uStack_118 = extraout_x8_02;
  FUN_1083d3a60();
  FUN_1083c8078(auStack_158,pppplVar10);
  FUN_1083c8078(auStack_138,auStack_158);
  pppplVar10 = pppplVar9;
  FUN_1083dbf14(pppplVar9,(ulong)param_5 & 0xffffffff,0x23,pppplVar6,auStack_138);
  func_0x0001083de538();
  *pppplVar9 = (long ***)&PTR_FUN_110a452a8;
  *pppplVar11 = (long ***)pppplVar9;
  func_0x0001083de588();
  func_0x0001083de540(uStack_118);
  if (!(bool)uVar5) {
    ___stack_chk_fail();
    func_0x0001083de538();
    func_0x0001083de588();
    FUN_1083d3a98(pppplVar9);
    __Unwind_Resume();
    *pppplVar10 = (long ***)&PTR_DAT_110a44e88;
    FUN_1083c81d4(pppplVar10 + 5);
    return pppplVar10;
  }
  return pppplVar10;
}



/* Entry: 1083de36c; end: 1083de447;  */

undefined8 *
FUN_1083de36c(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [32];
  undefined8 uStack_48;
  
  func_0x0001083de554();
  puVar1 = (undefined8 *)0x38;
  uStack_48 = extraout_x8;
  FUN_1083d3a60();
  FUN_1083c8078(auStack_88,param_4);
  FUN_1083c8078(auStack_68,auStack_88);
  puVar2 = puVar1;
  FUN_1083dbf14(puVar1,param_2,0x23,param_3,auStack_68);
  func_0x0001083de538();
  *puVar1 = &PTR_FUN_110a452a8;
  *param_1 = puVar1;
  func_0x0001083de588();
  func_0x0001083de540(uStack_48);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x0001083de538();
  func_0x0001083de588();
  FUN_1083d3a98(puVar1);
  __Unwind_Resume();
  *puVar2 = &PTR_DAT_110a44e88;
  FUN_1083c81d4(puVar2 + 5);
  return puVar2;
}



/* Entry: 1083de448; end: 1083de44b;  */

undefined8 * FUN_1083de448(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a44e88;
  FUN_1083c81d4(param_1 + 5);
  return param_1;
}



/* Entry: 1083de44c; end: 1083de45f;  */

void FUN_1083de44c(long *param_1)

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



/* Entry: 1083de460; end: 1083de4f7;  */

long * FUN_1083de460(long *param_1,long param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  long lVar2;
  undefined8 extraout_x8;
  long lStack_60;
  undefined1 auStack_58 [32];
  undefined8 uStack_38;
  
  plVar1 = &lStack_60;
  func_0x0001083de554();
  uStack_38 = extraout_x8;
  FUN_1083deaac(auStack_58,param_2 + 0x18);
  func_0x0001083de5a0(&lStack_60);
  lVar2 = lStack_60;
  lStack_60 = 0;
  *param_1 = lVar2;
  FUN_1083de4f8();
  func_0x0001083de538();
  func_0x0001083de540(uStack_38);
  if ((bool)in_ZR) {
    return plVar1;
  }
  ___stack_chk_fail();
  func_0x0001083de538();
  __Unwind_Resume();
  lVar2 = *plVar1;
  *plVar1 = 0;
  if (lVar2 != 0) {
    FUN_1083dc034();
    FUN_1083d3a98();
  }
  return plVar1;
}



/* Entry: 1083de4f8; end: 1083de52b;  */

long * FUN_1083de4f8(long *param_1)

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



/* Entry: 1083de52c; end: 1083de5ab;  */

void FUN_1083de52c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001083de534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1083de5ac; end: 1083de6a7;  */

void FUN_1083de5ac(undefined8 *param_1,long param_2,undefined4 param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined4 uStack_24;
  
  bVar1 = *(byte *)(*(long *)(param_2 + 8) + 1);
  if (bVar1 < 6 && (1 << (ulong)(bVar1 & 0x1f) & 0x29U) != 0) {
    uStack_24 = param_3;
    func_0x0001083de664(&uStack_30,&uStack_24);
    uVar2 = uStack_30;
    uStack_30 = 0;
    *param_1 = uVar2;
    FUN_1083de6c0(&uStack_30);
    return;
  }
  FUN_1083c8a60(*(undefined8 *)(param_2 + 0x10),param_3,&UNK_10f492928,0x37);
  *param_1 = 0;
  return;
}



/* Entry: 1083de6a8; end: 1083de6bf;  */

void FUN_1083de6a8(void)

{
  return;
}



/* Entry: 1083de6c0; end: 1083de6e7;  */

undefined8 FUN_1083de6c0(undefined8 param_1)

{
  FUN_1083de6e8(param_1,0);
  return param_1;
}



/* Entry: 1083de6e8; end: 1083de6ff;  */

void FUN_1083de6e8(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 extraout_x8;
  
  plVar1 = (long *)*param_1;
  *param_1 = param_2;
  if (plVar1 == (long *)0x0) {
    return;
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



/* Entry: 1083de700; end: 1083de86b;  */

void FUN_1083de700(undefined8 *param_1,long *param_2,undefined4 param_3,ulong *param_4,long *param_5
                  )

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lStack_50;
  long lStack_48;
  
  iVar1 = (int)param_2[1];
  FUN_1083c5ae8();
  if (iVar1 == 0) {
    uVar2 = *(undefined8 *)(*param_2 + 0xc0);
    lStack_50 = *param_5;
    *param_5 = 0;
    FUN_1083f1310(&lStack_48,uVar2,&lStack_50,param_2);
    lVar6 = lStack_48;
    lStack_48 = 0;
    lVar3 = *param_5;
    *param_5 = lVar6;
    if (lVar3 != 0) {
      FUN_1083de9d0();
      lVar6 = lStack_48;
      lStack_48 = 0;
      if (lVar6 != 0) {
        FUN_1083de9d0();
      }
    }
    lVar6 = lStack_50;
    lStack_50 = 0;
    if (lVar6 != 0) {
      FUN_1083de9d0();
    }
    if (*param_5 != 0) {
      uVar4 = *param_4;
      FUN_1083c3050(uVar4,param_2[2]);
      if ((uVar4 & 1) == 0) {
        uVar4 = *param_4;
        *param_4 = 0;
        lVar6 = *param_5;
        *param_5 = 0;
        puVar5 = (undefined8 *)0x20;
        FUN_1083d3a60();
        *(undefined4 *)(puVar5 + 1) = param_3;
        *(undefined4 *)((long)puVar5 + 0xc) = 0x10;
        *puVar5 = &PTR_FUN_110a45368;
        puVar5[2] = uVar4;
        puVar5[3] = lVar6;
        goto LAB_1083de7cc;
      }
    }
  }
  else {
    FUN_1083c8a60(param_2[2],param_3,&UNK_10f492969,0x20);
  }
  puVar5 = (undefined8 *)0x0;
LAB_1083de7cc:
  *param_1 = puVar5;
  return;
}



/* Entry: 1083de86c; end: 1083de987;  */

void FUN_1083de86c(undefined8 param_1,long param_2)

{
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  (**(code **)(**(long **)(param_2 + 0x10) + 0x10))(auStack_80);
  func_0x0001004c3cd0(auStack_68,&UNK_10f48d23f,auStack_80);
  func_0x00010048a6c8(auStack_50,auStack_68,&UNK_10f48d243);
  (**(code **)(**(long **)(param_2 + 0x18) + 0x38))(auStack_98,*(long **)(param_2 + 0x18),0x11);
  func_0x00010533a9c0(auStack_38,auStack_50,auStack_98);
  func_0x00010048a6c8(param_1,auStack_38,&UNK_10f48a028);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
  return;
}



/* Entry: 1083de988; end: 1083de98b;  */

long FUN_1083de988(long param_1)

{
  FUN_1083c8734(param_1 + 0x18);
  func_0x0001082da4ec(param_1 + 0x10);
  return param_1;
}



/* Entry: 1083de98c; end: 1083de99f;  */

void FUN_1083de98c(long *param_1)

{
  undefined8 extraout_x8;
  
  FUN_1083de9a0();
  FUN_1083d3bc4(param_1);
  if (*param_1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(extraout_x8);
  return;
}



/* Entry: 1083de9a0; end: 1083de9cf;  */

long FUN_1083de9a0(long param_1)

{
  FUN_1083c8734(param_1 + 0x18);
  func_0x0001082da4ec(param_1 + 0x10);
  return param_1;
}



/* Entry: 1083de9d0; end: 1083de9eb;  */

void FUN_1083de9d0(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001083de9d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1083de9ec; end: 1083deaab;  */

void FUN_1083de9ec(long param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0x32) {
    plVar2 = *(long **)(param_1 + 0x10);
    (**(code **)(*plVar2 + 0x38))(plVar2,*(undefined8 *)(*param_2 + 0x368));
    if ((int)plVar2 == 0) {
      return;
    }
  }
  else if (iVar1 == 0x2a) {
    FUN_1083deb84();
  }
  else if (iVar1 == 0x31) {
    FUN_1083deb84();
  }
  else {
    if (iVar1 != 0x26) {
      return;
    }
    FUN_1083deb84();
  }
  FUN_1083c8a60();
  return;
}



/* Entry: 1083deaac; end: 1083deb83;  */

void FUN_1083deaac(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lStack_38;
  
  *(long *)(param_1 + 0x10) = param_1;
  *(undefined8 *)(param_1 + 0x18) = 0x400000000;
  func_0x0001083c7ec0(param_1 + 0x10,*(undefined4 *)(param_2 + 0x18));
  plVar4 = *(long **)(param_2 + 0x10);
  for (lVar3 = (long)*(int *)(param_2 + 0x18) << 3; lVar3 != 0; lVar3 = lVar3 + -8) {
    plVar2 = (long *)*plVar4;
    if (plVar2 == (long *)0x0) {
      lStack_38 = 0;
    }
    else {
      (**(code **)(*plVar2 + 0x30))(&lStack_38,plVar2,(int)plVar2[1]);
    }
    FUN_1083c7ed8(param_1 + 0x10,&lStack_38);
    lVar1 = lStack_38;
    lStack_38 = 0;
    if (lVar1 != 0) {
      func_0x0001083deb9c();
    }
    plVar4 = plVar4 + 1;
  }
  return;
}



/* Entry: 1083deb84; end: 1083deba7;  */

undefined1  [16] FUN_1083deb84(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(undefined8 *)(unaff_x20 + 0x10);
  auVar1._8_4_ = *(uint *)(unaff_x19 + 8) + (*(uint *)(unaff_x19 + 8) >> 0x18) & 0xffffff |
                 0x1000000;
  auVar1._12_4_ = 0;
  return auVar1;
}



/* Entry: 1083deba8; end: 1083dec3b;  */

void FUN_1083deba8(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lStack_38;
  
  lVar1 = *param_3;
  FUN_1083de9ec(lVar1,param_2);
  if ((int)lVar1 == 0) {
    lStack_38 = *param_3;
    *param_3 = 0;
    FUN_1083dec3c(param_1,param_2,&lStack_38);
    lVar1 = lStack_38;
    lStack_38 = 0;
    if (lVar1 != 0) {
      func_0x0001083dee54();
    }
  }
  else {
    *param_1 = 0;
  }
  return;
}



/* Entry: 1083dec3c; end: 1083ded2f;  */

void FUN_1083dec3c(undefined8 *param_1,long param_2,ulong *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uStack_28;
  
  if (*(char *)(*(long *)(param_2 + 8) + 0x1c) == '\x01') {
    uVar2 = *param_3;
    FUN_1083d64e8();
    if ((uVar2 & 1) == 0) {
      FUN_1083d25b8(&uStack_28);
      uVar1 = uStack_28;
      uStack_28 = 0;
      *param_1 = uVar1;
      FUN_1083d2618(&uStack_28);
      return;
    }
    uVar2 = *param_3;
    if (((*(int *)(uVar2 + 0xc) == 0x19) && (FUN_1083d9f9c(), uVar2 != 0)) &&
       (*(char *)(uVar2 + 0x20) == '\x02')) {
      *(undefined1 *)(uVar2 + 0x20) = 1;
    }
  }
  func_0x0001083dece0(&uStack_28,param_3);
  uVar1 = uStack_28;
  uStack_28 = 0;
  *param_1 = uVar1;
  func_0x0001083deddc(&uStack_28);
  return;
}



/* Entry: 1083ded30; end: 1083ded9b;  */

void FUN_1083ded30(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  (**(code **)(**(long **)(param_2 + 0x10) + 0x38))(auStack_38,*(long **)(param_2 + 0x10),0x12);
  func_0x00010048a6c8(param_1,auStack_38,";");
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  return;
}



/* Entry: 1083ded9c; end: 1083dee03;  */

void FUN_1083ded9c(void)

{
  FUN_1083dee48();
  return;
}



/* Entry: 1083dee04; end: 1083dee1b;  */

void FUN_1083dee04(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 extraout_x8;
  
  plVar1 = (long *)*param_1;
  *param_1 = param_2;
  if (plVar1 == (long *)0x0) {
    return;
  }
  if (plVar1 != (long *)0x0) {
    FUN_1083c8734(plVar1 + 2);
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



/* Entry: 1083dee1c; end: 1083dee47;  */

void FUN_1083dee1c(undefined8 param_1,long *param_2)

{
  undefined8 extraout_x8;
  
  if (param_2 != (long *)0x0) {
    FUN_1083c8734(param_2 + 2);
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



/* Entry: 1083dee48; end: 1083dee5f;  */

long * FUN_1083dee48(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_1 + 0x10);
  lVar2 = *plVar1;
  *plVar1 = 0;
  if (lVar2 != 0) {
    func_0x0001083c878c();
  }
  return plVar1;
}



/* Entry: 1083dee60; end: 1083def8f;  */

void FUN_1083dee60(undefined8 *param_1,long param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (*(byte *)(*(long *)(param_2 + 8) + 1) - 7 < 8) {
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    puVar2 = &UNK_10f492a10;
    uVar3 = 0x22;
  }
  else {
    uVar1 = param_6;
    func_0x000107c27944(param_6,param_7,&UNK_10f492a33,7);
    if ((int)uVar1 != 0) goto LAB_1083deee0;
    uVar1 = param_6;
    FUN_108329a74(param_6,param_7,&UNK_10f492a3b,7);
    if ((((int)uVar1 == 0) ||
        (uVar1 = param_6, FUN_108329a74(param_6,param_7,&UNK_10f492a43,6), (int)uVar1 == 0)) ||
       (FUN_108329a74(param_6,param_7,&UNK_10f492a4a,4), (int)param_6 == 0)) {
      FUN_1083defbc(param_1,&stack0xffffffffffffffec,&stack0xffffffffffffffd8);
      return;
    }
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    puVar2 = &UNK_10f492a4f;
    uVar3 = 0x32;
  }
  FUN_1083c8a60(uVar1,param_3,puVar2,uVar3);
LAB_1083deee0:
  *param_1 = 0;
  return;
}



/* Entry: 1083def90; end: 1083defbb;  */

void FUN_1083def90(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_14;
  
  uStack_28 = param_3;
  uStack_20 = param_4;
  uStack_14 = param_2;
  FUN_1083defbc(&uStack_14,&uStack_28);
  return;
}



/* Entry: 1083defbc; end: 1083df013;  */

void FUN_1083defbc(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)0x20;
  FUN_1083d3a60();
  uVar1 = *param_2;
  *(undefined4 *)((long)puVar2 + 0xc) = 0;
  *puVar2 = &PTR_FUN_110a45410;
  uVar4 = param_3[1];
  uVar3 = *param_3;
  *(undefined4 *)(puVar2 + 1) = uVar1;
  puVar2[3] = uVar4;
  puVar2[2] = uVar3;
  *param_1 = puVar2;
  return;
}



/* Entry: 1083df014; end: 1083df01b;  */

void FUN_1083df014(void)

{
  return;
}



/* Entry: 1083df01c; end: 1083df0af;  */

void FUN_1083df01c(undefined8 param_1,long param_2)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  uStack_58 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c27958(auStack_50,&uStack_60);
  func_0x0001004c3cd0(auStack_38,&UNK_10f432dcc,auStack_50);
  func_0x00010048a6c8(param_1,auStack_38,&UNK_10f492a82);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
  return;
}



/* Entry: 1083df0b0; end: 1083df483;  */

void FUN_1083df0b0(undefined8 *param_1,long *param_2,ulong param_3,long *param_4,undefined8 param_5,
                  undefined8 param_6)

{
  uint uVar1;
  undefined1 *puVar2;
  char cVar3;
  char cVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 extraout_x8;
  undefined8 uVar10;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  long *plVar11;
  ulong uVar12;
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined8 ******ppppppuStack_a8;
  ulong uStack_a0;
  byte bStack_91;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  plVar11 = *(long **)(*param_4 + 0x10);
  uVar1 = *(byte *)((long)plVar11 + 0x2c) - 0xd;
  cVar3 = SBORROW4(uVar1,2);
  cVar4 = (int)(*(byte *)((long)plVar11 + 0x2c) - 0xf) < 0;
  uStack_78 = param_5;
  uStack_70 = param_6;
  if (uVar1 < 3) {
    func_0x0001083dfb10(&ppppppuStack_a8);
    func_0x0001004c3cd0(auStack_90,&DAT_10f47f5f2,&ppppppuStack_a8);
    func_0x0001083dfa8c();
    puVar5 = (undefined8 *)param_2[4];
    func_0x0001083dfb18();
    FUN_1083c9bd0();
    if ((puVar5 == (undefined8 *)0x0) || (*(int *)((long)puVar5 + 0xc) != 9)) {
      lVar9 = param_2[2];
      FUN_10831d8f8(auStack_108,plVar11);
      func_0x0001004c3cd0(auStack_f0,&UNK_10f48e874,auStack_108);
      func_0x00010048a6c8(auStack_d8,auStack_f0,&UNK_10f492a8c);
      func_0x0001083dfb10(auStack_120);
      func_0x00010533a9c0(auStack_c0,auStack_d8,auStack_120);
      func_0x00010048a6c8(&ppppppuStack_a8,auStack_c0,&DAT_10f638984);
      if (-1 < (char)bStack_91) {
        uStack_a0 = (ulong)bStack_91;
        ppppppuStack_a8 = &ppppppuStack_a8;
      }
      FUN_1083c8a60(lVar9,param_3 & 0xffffffff,ppppppuStack_a8,uStack_a0);
      func_0x0001083dfa8c();
      func_0x0001083dfad0();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_120);
      func_0x0001083dfaac();
      func_0x0001083dfad8();
      func_0x0001083dfac0();
      puVar7 = (undefined8 *)0x0;
    }
    else {
      puVar7 = puVar5;
      func_0x0001083dfaa4();
      lVar9 = *param_4;
      *param_4 = 0;
      uVar10 = *(undefined8 *)(*param_2 + 0xe0);
      *(int *)(puVar7 + 1) = (int)param_3;
      *(undefined4 *)((long)puVar7 + 0xc) = 0x2a;
      *puVar7 = &PTR_DAT_110a454b8;
      puVar7[2] = uVar10;
      puVar7[3] = lVar9;
      puVar7[4] = puVar5;
    }
    *param_1 = puVar7;
    func_0x0001083dfaf0();
  }
  else {
    plVar6 = plVar11;
    uVar8 = param_3;
    (**(code **)(*plVar11 + 0xf0))();
    if ((int)plVar6 != 0) {
      plVar6 = plVar11;
      (**(code **)(*plVar11 + 0x90))();
      uVar12 = 0;
      plVar6 = plVar6 + 9;
      while( true ) {
        cVar3 = SBORROW8(uVar8,uVar12);
        cVar4 = (long)(uVar8 - uVar12) < 0;
        if (uVar8 == uVar12) break;
        lVar9 = plVar6[-1];
        FUN_10821b208(lVar9,*plVar6,param_5,param_6);
        if ((int)lVar9 != 0) {
          *param_4 = 0;
          FUN_1083df484(param_1);
          func_0x0001083dfab4();
          if (lVar9 == 0) {
            return;
          }
          func_0x0001083dfa80();
          return;
        }
        uVar12 = uVar12 + 1;
        plVar6 = plVar6 + 0xb;
      }
    }
    plVar6 = plVar11;
    (**(code **)(*plVar11 + 0x38))(plVar11,*(undefined8 *)(*param_2 + 0x368));
    if ((int)plVar6 == 0) {
      lVar9 = param_2[2];
      FUN_10831d8f8(auStack_f0,plVar11);
      func_0x0001004c3cd0(auStack_d8,&UNK_10f48e874,auStack_f0);
      func_0x00010048a6c8(auStack_c0,auStack_d8,&UNK_10f492aa4);
      func_0x0001083dfb10(auStack_108);
      func_0x00010533a9c0(&ppppppuStack_a8,auStack_c0,auStack_108);
      func_0x00010048a6c8(auStack_90,&ppppppuStack_a8,&DAT_10f638984);
      func_0x0001083dfb18();
      uVar10 = extraout_x11;
      puVar2 = extraout_x10;
      if (cVar4 == cVar3) {
        uVar10 = extraout_x8;
        puVar2 = auStack_90;
      }
      FUN_1083c8a60(lVar9,param_3 & 0xffffffff,puVar2,uVar10);
      func_0x0001083dfaf0();
      func_0x0001083dfa8c();
      func_0x0001083dfac0();
      func_0x0001083dfad0();
      func_0x0001083dfaac();
      func_0x0001083dfad8();
      *param_1 = 0;
    }
    else {
      FUN_1083ea8cc(param_1,param_2,param_3 & 0xffffffff,&uStack_78);
    }
  }
  return;
}



/* Entry: 1083df484; end: 1083df5a7;  */

void FUN_1083df484(long *param_1,undefined8 param_2,undefined4 param_3,long *param_4,uint param_5,
                  undefined1 param_6)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lStack_68;
  undefined1 uStack_59;
  uint uStack_58;
  undefined4 uStack_54;
  
  lVar4 = *param_4;
  uStack_59 = param_6;
  uStack_58 = param_5;
  uStack_54 = param_3;
  func_0x0001083c6674();
  if (*(int *)(lVar4 + 0xc) == 0x23) {
    uVar1 = *(uint *)(lVar4 + 0x30);
    for (uVar6 = 0; (uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) != uVar6; uVar6 = uVar6 + 1) {
      if (param_5 != uVar6) {
        if ((long)*(int *)(lVar4 + 0x30) <= (long)uVar6) goto LAB_1083df5a4;
        iVar3 = (int)*(undefined8 *)(*(long *)(lVar4 + 0x28) + uVar6 * 8);
        FUN_1083d64e8();
        if (iVar3 != 0) {
          *param_1 = 0;
          goto LAB_1083df554;
        }
      }
    }
    if (((int)param_5 < 0) || (*(int *)(lVar4 + 0x30) <= (int)param_5)) {
LAB_1083df5a4:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1083df5a8);
      (*pcVar2)();
    }
    plVar5 = *(long **)(*(long *)(lVar4 + 0x28) + (ulong)param_5 * 8);
    (**(code **)(*plVar5 + 0x30))(param_1,plVar5,param_3);
    if (*param_1 != 0) {
      return;
    }
LAB_1083df554:
    FUN_1083c8734(param_1);
  }
  FUN_1083df5a8(&lStack_68,&uStack_54,param_4,&uStack_58,&uStack_59);
  lVar4 = lStack_68;
  lStack_68 = 0;
  *param_1 = lVar4;
  FUN_1083df944(&lStack_68);
  return;
}



/* Entry: 1083df5a8; end: 1083df643;  */

void FUN_1083df5a8(long *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  
  func_0x0001083dfaa4();
  *param_3 = 0;
  lVar1 = param_2;
  FUN_1083df8b0();
  *param_1 = param_2;
  func_0x0001083dfab4();
  if (lVar1 != 0) {
    func_0x0001083dfa80();
  }
  return;
}



/* Entry: 1083df644; end: 1083df6b3;  */

long FUN_1083df644(long param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  
  lVar3 = param_1;
  func_0x0001083dfa94(*(undefined8 *)(param_1 + 0x20));
  lVar5 = 0;
  uVar6 = (ulong)(*(uint *)(param_1 + 0x18) & ((int)*(uint *)(param_1 + 0x18) >> 0x1f ^ 0xffffffffU)
                 );
  plVar1 = (long *)(lVar3 + 0x50);
  while( true ) {
    if (uVar6 == 0) {
      return lVar5;
    }
    if (param_2 == 0) break;
    plVar4 = (long *)*plVar1;
    (**(code **)(*plVar4 + 0x80))();
    lVar5 = (long)plVar4 + lVar5;
    param_2 = param_2 + -1;
    uVar6 = uVar6 - 1;
    plVar1 = plVar1 + 0xb;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1083df6b4);
  (*pcVar2)();
}



/* Entry: 1083df6b4; end: 1083df793;  */

void FUN_1083df6b4(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long *plVar2;
  ulong uVar3;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [8];
  ulong uStack_30;
  byte bStack_21;
  
  uVar3 = 2;
  (**(code **)(**(long **)(param_2 + 0x20) + 0x38))(auStack_38);
  if (-1 < (char)bStack_21) {
    uStack_30 = (ulong)bStack_21;
  }
  if (uStack_30 != 0) {
    uVar3 = 0x2e;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(auStack_38);
  }
  plVar2 = *(long **)(*(long *)(param_2 + 0x20) + 0x10);
  (**(code **)(*plVar2 + 0x90))();
  if ((ulong)(long)*(int *)(param_2 + 0x18) < uVar3) {
    func_0x000107c27958(auStack_50,plVar2 + (long)*(int *)(param_2 + 0x18) * 0xb + 8);
    func_0x0001056cad38(param_1,auStack_38,auStack_50);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1083df770);
  (*pcVar1)();
}



/* Entry: 1083df794; end: 1083df7cb;  */

void FUN_1083df794(void)

{
  func_0x0001083dfaf8();
  return;
}



/* Entry: 1083df7cc; end: 1083df8af;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1083df7cc(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long alStack_58 [3];
  
  plVar2 = *(long **)(param_2 + 0x20);
  (**(code **)(*plVar2 + 0x30))(alStack_58,plVar2,(int)plVar2[1]);
  func_0x0001083dfaa4();
  alStack_58[2] = alStack_58[0];
  alStack_58[0] = 0;
  FUN_1083df8b0();
  lVar1 = alStack_58[2];
  alStack_58[2] = 0;
  if (lVar1 != 0) {
    func_0x0001083dfa80();
  }
  alStack_58[1] = 0;
  *param_1 = (long)plVar2;
  plVar2 = alStack_58 + 1;
  FUN_1083df944();
  func_0x0001083dfab4();
  if (plVar2 != (long *)0x0) {
    func_0x0001083dfa80();
  }
  return;
}



/* Entry: 1083df8b0; end: 1083df8b7;  */

undefined8 *
FUN_1083df8b0(undefined8 *param_1,uint param_2,undefined8 *param_3,int param_4,undefined1 param_5)

{
  code *pcVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = (ulong)param_2;
  puVar2 = param_1;
  func_0x0001083dfa94(*param_3);
  if ((ulong)(long)param_4 < uVar3) {
    uVar4 = puVar2[(long)param_4 * 0xb + 10];
    *(uint *)(param_1 + 1) = param_2;
    *(undefined4 *)((long)param_1 + 0xc) = 0x25;
    param_1[2] = uVar4;
    *param_1 = &PTR_FUN_110a45450;
    *(int *)(param_1 + 3) = param_4;
    *(undefined1 *)((long)param_1 + 0x1c) = param_5;
    uVar4 = *param_3;
    *param_3 = 0;
    param_1[4] = uVar4;
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1083df944);
  (*pcVar1)();
}



/* Entry: 1083df8b8; end: 1083df943;  */

undefined8 *
FUN_1083df8b8(undefined8 *param_1,ulong param_2,undefined8 *param_3,int param_4,undefined1 param_5)

{
  code *pcVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  puVar2 = param_1;
  uVar3 = param_2;
  func_0x0001083dfa94(*param_3);
  if ((ulong)(long)param_4 < uVar3) {
    uVar4 = puVar2[(long)param_4 * 0xb + 10];
    *(int *)(param_1 + 1) = (int)param_2;
    *(undefined4 *)((long)param_1 + 0xc) = 0x25;
    param_1[2] = uVar4;
    *param_1 = &PTR_FUN_110a45450;
    *(int *)(param_1 + 3) = param_4;
    *(undefined1 *)((long)param_1 + 0x1c) = param_5;
    uVar4 = *param_3;
    *param_3 = 0;
    param_1[4] = uVar4;
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1083df944);
  (*pcVar1)();
}



/* Entry: 1083df944; end: 1083df967;  */

undefined8 FUN_1083df944(undefined8 param_1)

{
  FUN_1083df968(param_1,0);
  return param_1;
}



/* Entry: 1083df968; end: 1083df97f;  */

void FUN_1083df968(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 extraout_x8;
  
  plVar1 = (long *)*param_1;
  *param_1 = param_2;
  if (plVar1 == (long *)0x0) {
    return;
  }
  if (plVar1 != (long *)0x0) {
    FUN_1083c8734(plVar1 + 4);
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



/* Entry: 1083df980; end: 1083df9df;  */

void FUN_1083df980(undefined8 param_1,long *param_2)

{
  undefined8 extraout_x8;
  
  if (param_2 != (long *)0x0) {
    FUN_1083c8734(param_2 + 4);
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



/* Entry: 1083df9e0; end: 1083dfa6f;  */

void FUN_1083df9e0(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_38;
  
  puVar1 = param_2;
  func_0x0001083dfaa4();
  plVar2 = (long *)param_2[3];
  (**(code **)(*plVar2 + 0x30))(&uStack_38,plVar2,(int)plVar2[1]);
  uVar3 = param_2[4];
  uVar4 = param_2[2];
  *(undefined4 *)(puVar1 + 1) = param_3;
  *(undefined4 *)((long)puVar1 + 0xc) = 0x2a;
  *puVar1 = &PTR_DAT_110a454b8;
  puVar1[2] = uVar4;
  puVar1[3] = uStack_38;
  puVar1[4] = uVar3;
  *param_1 = puVar1;
  return;
}



/* Entry: 1083dfa70; end: 1083dfb2b;  */

void FUN_1083dfa70(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10f492ac4;
  func_0x00010002b82c(param_1,&UNK_10f492ac4);
  func_0x000107c613d0(puVar1);
  func_0x000107c60c50();
  return;
}



/* Entry: 1083dfb2c; end: 1083dfc6f;  */

void FUN_1083dfb2c(undefined8 param_1,long param_2)

{
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c278b8(param_1,&UNK_10f48d254);
  if (*(long **)(param_2 + 0x28) == (long *)0x0) {
    func_0x0001083e0500(0,";");
  }
  else {
    (**(code **)(**(long **)(param_2 + 0x28) + 0x10))(auStack_38);
    func_0x0001083e04dc();
    func_0x0001083e04e8();
  }
  func_0x0001083e0500();
  if (*(long *)(param_2 + 0x30) != 0) {
    func_0x0001083e0508();
    func_0x0001083e04dc();
    func_0x0001083e04e8();
  }
  func_0x0001083e0500();
  if (*(long *)(param_2 + 0x38) != 0) {
    func_0x0001083e0508();
    func_0x0001083e04dc();
    func_0x0001083e04e8();
  }
  (**(code **)(**(long **)(param_2 + 0x40) + 0x10))(auStack_50);
  func_0x0001004c3cd0(auStack_38,&UNK_10f48d1ae,auStack_50);
  func_0x0001083e04dc();
  func_0x0001083e04e8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
  return;
}



/* Entry: 1083dfc70; end: 1083e01b3;  */

void FUN_1083dfc70(undefined8 *param_1,undefined ***param_2,ulong param_3,undefined ***param_4,
                  undefined4 param_5,ulong *param_6,long *param_7,long *param_8,undefined **param_9,
                  undefined8 *param_10)

{
  bool bVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined ***pppuVar10;
  ulong *puVar11;
  long *plVar12;
  long *plVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined *extraout_x8;
  undefined *extraout_x8_00;
  ulong uVar16;
  long extraout_x9;
  long extraout_x9_00;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long *plVar20;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined **ppuStack_178;
  ulong uStack_170;
  undefined **ppuStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  long *plStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined *puStack_130;
  long lStack_128;
  long lStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined **ppuStack_c0;
  undefined ***pppuStack_b8;
  undefined4 uStack_b0;
  undefined *apuStack_a8 [2];
  undefined1 auStack_98 [16];
  undefined **ppuStack_88;
  undefined ***pppuStack_80;
  undefined ***pppuStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar20 = (long *)*param_6;
  bVar1 = false;
  puVar11 = param_6;
  plVar12 = param_7;
  plVar13 = param_8;
  ppuVar14 = param_9;
  pppuStack_b8 = param_4;
  uStack_b0 = param_5;
  if (plVar20 == (long *)0x0) {
LAB_1083dfcf4:
    ppuVar15 = (undefined **)*param_7;
    if (ppuVar15 != (undefined **)0x0) {
      puVar4 = (*param_2)[0x18];
      *param_7 = 0;
      uVar9 = SUB84(&ppuStack_c0,0);
      param_4 = param_2;
      ppuStack_c0 = ppuVar15;
      FUN_1083f1310(&ppuStack_88,puVar4);
      ppuVar15 = ppuStack_88;
      ppuStack_88 = (undefined **)0x0;
      lVar5 = *param_7;
      *param_7 = (long)ppuVar15;
      if (lVar5 != 0) {
        FUN_1083e04d0();
        ppuVar15 = ppuStack_88;
        ppuStack_88 = (undefined **)0x0;
        if (ppuVar15 != (undefined **)0x0) {
          FUN_1083e04d0();
        }
      }
      ppuVar15 = ppuStack_c0;
      ppuStack_c0 = (undefined **)0x0;
      if (ppuVar15 != (undefined **)0x0) {
        FUN_1083e04d0();
      }
      if (*param_7 == 0) goto LAB_1083dffac;
    }
    ppuVar15 = (undefined **)*param_8;
    if (ppuVar15 != (undefined **)0x0) {
      pppuVar10 = param_2;
      FUN_1083de9ec();
      uVar9 = SUB84(pppuVar10,0);
      if ((int)ppuVar15 != 0) goto LAB_1083dffac;
    }
    puStack_c8 = (undefined *)0x0;
    iVar3 = (int)param_2[1];
    FUN_1083c5ae8();
    if (iVar3 == 0) {
      param_5 = (undefined4)*param_6;
      plVar12 = (long *)*param_8;
      plVar13 = (long *)*param_9;
      func_0x0001083e053c();
      ppuVar14 = (undefined **)0x0;
      FUN_1083d5b40();
      func_0x0001083e04f0();
      FUN_1083d6220(&ppuStack_88);
LAB_1083dfddc:
      iVar3 = (int)*param_9;
      uVar9 = SUB84(param_2[2],0);
      FUN_1083c3050();
      if (iVar3 != 0) goto LAB_1083dfdec;
      if (bVar1) {
        FUN_1083edc84(&uStack_d0,*param_10);
        pppuStack_78 = (undefined ***)*param_10;
        ppuStack_88 = &PTR_FUN_110a45568;
        uStack_70 = uStack_d0;
        pppuStack_80 = param_2;
        func_0x0001083e0440(&ppuStack_88,*param_6);
        uStack_70 = 0x400000000;
        pppuStack_78 = &ppuStack_88;
        FUN_1083d09d4(&pppuStack_78,param_6);
        lStack_e8 = *param_7;
        *param_7 = 0;
        uStack_e0 = 0;
        func_0x0001083e0528();
        puStack_f8 = extraout_x8;
        lStack_f0 = extraout_x9;
        func_0x0001083e0514();
        param_3 = param_3 & 0xffffffff;
        puStack_148 = &uStack_108;
        plStack_150 = &lStack_100;
        puVar11 = &uStack_e0;
        plVar12 = &lStack_e8;
        plVar13 = &lStack_f0;
        ppuVar14 = &puStack_f8;
        FUN_1083e01b4(&lStack_d8,param_3);
        FUN_1083d09d4(&pppuStack_78,&lStack_d8);
        lVar5 = lStack_d8;
        lStack_d8 = 0;
        if (lVar5 != 0) {
          FUN_1083e04d0();
        }
        func_0x0001083c5f0c(&uStack_108);
        FUN_1083d6220(&lStack_100);
        if (puStack_f8 != (undefined *)0x0) {
          FUN_1083e04d0();
        }
        if (lStack_f0 != 0) {
          FUN_1083e04d0();
        }
        if (lStack_e8 != 0) {
          FUN_1083e04d0();
        }
        if (uStack_e0 != 0) {
          FUN_1083e04d0();
        }
        FUN_1083d0a60(apuStack_a8,&ppuStack_88);
        uStack_110 = uStack_d0;
        uStack_d0 = 0;
        param_9 = apuStack_a8;
        uVar9 = SUB84(apuStack_a8,0);
        param_5 = SUB84(&uStack_110,0);
        param_4 = (undefined ***)0x1;
        FUN_1083da13c(param_1,param_3);
        func_0x0001083c5f0c(&uStack_110);
        FUN_1082da480(auStack_98);
        FUN_1082da480(&pppuStack_78);
        func_0x0001083c5f0c(&uStack_d0);
        param_2 = &ppuStack_88;
      }
      else {
        uStack_118 = *param_6;
        *param_6 = 0;
        lStack_120 = *param_7;
        *param_7 = 0;
        param_4 = pppuStack_b8;
        param_5 = uStack_b0;
        func_0x0001083e0528();
        puStack_130 = extraout_x8_00;
        lStack_128 = extraout_x9_00;
        func_0x0001083e0514();
        puStack_148 = &uStack_140;
        plStack_150 = &lStack_138;
        puVar11 = &uStack_118;
        plVar12 = &lStack_120;
        plVar13 = &lStack_128;
        ppuVar14 = &puStack_130;
        uVar9 = (int)param_3;
        FUN_1083e01b4(param_1);
        func_0x0001083c5f0c(&uStack_140);
        FUN_1083d6220(&lStack_138);
        if (puStack_130 != (undefined *)0x0) {
          FUN_1083e04d0();
        }
        if (lStack_128 != 0) {
          FUN_1083e04d0();
        }
        if (lStack_120 != 0) {
          FUN_1083e04d0();
        }
        if (uStack_118 != 0) {
          FUN_1083e04d0();
        }
      }
    }
    else {
      param_5 = (undefined4)*param_6;
      plVar12 = (long *)*param_8;
      plVar13 = (long *)*param_9;
      ppuVar14 = param_2[2];
      uVar9 = (int)param_3;
      func_0x0001083e053c();
      FUN_1083d5b40();
      func_0x0001083e04f0();
      FUN_1083d6220(&ppuStack_88);
      if (puStack_c8 != (undefined *)0x0) goto LAB_1083dfddc;
LAB_1083dfdec:
      *param_1 = 0;
    }
    ppuVar15 = &puStack_c8;
    FUN_1083d6220();
  }
  else {
    plVar7 = plVar20;
    (**(code **)(*plVar20 + 0x18))();
    if ((((ulong)plVar7 & 1) != 0) ||
       (*(int *)((long)plVar20 + 0xc) == 0x11 || *(int *)((long)plVar20 + 0xc) == 0x18)) {
      bVar1 = false;
      goto LAB_1083dfcf4;
    }
    uVar16 = *param_6;
    if (((uVar16 != 0) && (*(int *)(uVar16 + 0xc) == 0xc)) && (*(int *)(uVar16 + 0x38) != 1)) {
      lVar5 = (long)*(int *)(uVar16 + 0x30) << 3;
      plVar20 = *(long **)(uVar16 + 0x28);
      do {
        if (lVar5 == 0) {
          bVar1 = true;
          goto LAB_1083dfcf4;
        }
        lVar17 = *plVar20;
        lVar5 = lVar5 + -8;
        plVar20 = plVar20 + 1;
      } while (*(int *)(lVar17 + 0xc) == 0x18);
    }
    ppuVar15 = param_2[2];
    uVar9 = *(undefined4 *)(uVar16 + 8);
    param_4 = (undefined ***)&UNK_10f492acd;
    param_5 = 0x1c;
    FUN_1083c8a60();
LAB_1083dffac:
    *param_1 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001083c5f0c(&uStack_110);
  FUN_1082da480(param_9 + 2);
  FUN_1082da480(param_2 + 2);
  func_0x0001083c5f0c(&uStack_d0);
  FUN_1083d6220(&puStack_c8);
  ppuVar6 = ppuVar15;
  __Unwind_Resume();
  puVar2 = puStack_148;
  plVar20 = plStack_150;
  pcStack_158 = FUN_1083e01b4;
  ppuStack_178 = param_9;
  uStack_170 = param_3;
  ppuStack_168 = ppuVar15;
  puStack_160 = &stack0xfffffffffffffff0;
  if (*plStack_150 != 0) {
    if (0 < *(int *)(*plStack_150 + 0x18)) {
      plVar7 = (long *)*ppuVar14;
      (**(code **)(*plVar7 + 0x18))();
      if ((int)plVar7 == 0) goto LAB_1083e0244;
    }
    FUN_1083d25b8(&ppuStack_178);
    ppuVar14 = ppuStack_178;
    ppuStack_178 = (undefined **)0x0;
    *ppuVar6 = (undefined *)ppuVar14;
    FUN_1083d2618(&ppuStack_178);
    return;
  }
LAB_1083e0244:
  puVar8 = (undefined8 *)0x50;
  FUN_1083d3a60();
  uVar16 = *puVar11;
  *puVar11 = 0;
  lVar5 = *plVar12;
  *plVar12 = 0;
  lVar17 = *plVar13;
  *plVar13 = 0;
  puVar4 = *ppuVar14;
  *ppuVar14 = (undefined *)0x0;
  lVar18 = *plVar20;
  *plVar20 = 0;
  uVar19 = *puVar2;
  *puVar2 = 0;
  *(undefined4 *)(puVar8 + 1) = uVar9;
  *(undefined4 *)((long)puVar8 + 0xc) = 0x12;
  *puVar8 = &PTR_FUN_110a45520;
  puVar8[2] = param_4;
  *(undefined4 *)(puVar8 + 3) = param_5;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  puVar8[4] = uVar19;
  puVar8[5] = uVar16;
  puVar8[6] = lVar5;
  puVar8[7] = lVar17;
  puVar8[8] = puVar4;
  puVar8[9] = lVar18;
  func_0x0001083c5f0c(&uStack_1c0);
  FUN_1083d6220(&uStack_1b8);
  *ppuVar6 = (undefined *)puVar8;
  return;
}



/* Entry: 1083e01b4; end: 1083e02e3;  */

void FUN_1083e01b4(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                  long *param_9,undefined8 *param_10)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 unaff_x21;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (*param_9 != 0) {
    if (0 < *(int *)(*param_9 + 0x18)) {
      plVar1 = (long *)*param_8;
      (**(code **)(*plVar1 + 0x18))();
      if ((int)plVar1 == 0) goto LAB_1083e0244;
    }
    FUN_1083d25b8(&stack0xffffffffffffffd8);
    *param_1 = unaff_x21;
    FUN_1083d2618(&stack0xffffffffffffffd8);
    return;
  }
LAB_1083e0244:
  puVar2 = (undefined8 *)0x50;
  FUN_1083d3a60();
  uVar3 = *param_5;
  *param_5 = 0;
  uVar4 = *param_6;
  *param_6 = 0;
  uVar5 = *param_7;
  *param_7 = 0;
  uVar6 = *param_8;
  *param_8 = 0;
  lVar7 = *param_9;
  *param_9 = 0;
  uVar8 = *param_10;
  *param_10 = 0;
  *(undefined4 *)(puVar2 + 1) = param_2;
  *(undefined4 *)((long)puVar2 + 0xc) = 0x12;
  *puVar2 = &PTR_FUN_110a45520;
  puVar2[2] = param_3;
  *(undefined4 *)(puVar2 + 3) = param_4;
  uStack_70 = 0;
  uStack_68 = 0;
  puVar2[4] = uVar8;
  puVar2[5] = uVar3;
  puVar2[6] = uVar4;
  puVar2[7] = uVar5;
  puVar2[8] = uVar6;
  puVar2[9] = lVar7;
  func_0x0001083c5f0c(&uStack_70);
  FUN_1083d6220(&uStack_68);
  *param_1 = puVar2;
  return;
}



/* Entry: 1083e02e4; end: 1083e0427;  */

void FUN_1083e02e4(undefined8 *param_1,long param_2,undefined4 param_3,long *param_4,long *param_5)

{
  long lVar1;
  int iVar2;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  iVar2 = (int)*(undefined8 *)(param_2 + 8);
  FUN_1083c5ae8();
  if (iVar2 == 0) {
    lStack_50 = *param_4;
    *param_4 = 0;
    lStack_48 = 0;
    lStack_60 = *param_5;
    *param_5 = 0;
    lStack_58 = 0;
    uStack_68 = 0;
    FUN_1083dfc70(param_1,param_2,param_3,0xffffff00ffffff,0xffffff,&lStack_48,&lStack_50,&lStack_58
                  ,&lStack_60,&uStack_68);
    func_0x0001083c5f0c(&uStack_68);
    if (lStack_60 != 0) {
      FUN_1083e04d0();
    }
    if (lStack_58 != 0) {
      FUN_1083e04d0();
    }
    lVar1 = lStack_50;
    lStack_50 = 0;
    if (lVar1 != 0) {
      FUN_1083e04d0();
    }
    lVar1 = lStack_48;
    lStack_48 = 0;
    if (lVar1 != 0) {
      FUN_1083e04d0();
    }
  }
  else {
    FUN_1083c8a60(*(undefined8 *)(param_2 + 0x10),param_3,&UNK_10f492aea,0x1d);
    *param_1 = 0;
  }
  return;
}



/* Entry: 1083e0428; end: 1083e042b;  */

long FUN_1083e0428(long param_1)

{
  FUN_1083d6220(param_1 + 0x48);
  func_0x0001082da4ec(param_1 + 0x40);
  FUN_1083c8734(param_1 + 0x38);
  FUN_1083c8734(param_1 + 0x30);
  func_0x0001082da4ec(param_1 + 0x28);
  func_0x0001083c5f0c(param_1 + 0x20);
  return param_1;
}



/* Entry: 1083e042c; end: 1083e0477;  */

void FUN_1083e042c(long *param_1)

{
  undefined8 extraout_x8;
  
  FUN_1083e0480();
  FUN_1083d3bc4(param_1);
  if (*param_1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(extraout_x8);
  return;
}



/* Entry: 1083e0478; end: 1083e047f;  */

void FUN_1083e0478(void)

{
  return;
}



/* Entry: 1083e0480; end: 1083e04cf;  */

long FUN_1083e0480(long param_1)

{
  FUN_1083d6220(param_1 + 0x48);
  func_0x0001082da4ec(param_1 + 0x40);
  FUN_1083c8734(param_1 + 0x38);
  FUN_1083c8734(param_1 + 0x30);
  func_0x0001082da4ec(param_1 + 0x28);
  func_0x0001083c5f0c(param_1 + 0x20);
  return param_1;
}



/* Entry: 1083e04d0; end: 1083e054f;  */

void FUN_1083e04d0(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001083e04d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1083e0550; end: 1083e063f;  */

void FUN_1083e0550(long *param_1,long param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 in_ZR;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar7;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [24];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  
  puVar4 = &uStack_90;
  lVar3 = param_2;
  func_0x0001083e2fb8();
  uVar1 = *(undefined8 *)(lVar3 + 0x10);
  uVar2 = *(undefined8 *)(lVar3 + 0x18);
  uStack_48 = extraout_x8;
  FUN_1083deaac(auStack_88,lVar3 + 0x20);
  uVar7 = *(undefined8 *)(param_2 + 0x40);
  lVar3 = 0x48;
  FUN_1083d3a60();
  FUN_1083c8078(auStack_68,auStack_88);
  FUN_1083e2ed4(lVar3,param_3,uVar1,uVar2,auStack_68,uVar7);
  FUN_1083c81d4(auStack_58);
  uStack_90 = 0;
  *param_1 = lVar3;
  func_0x0001083e2f24();
  func_0x0001083e32b0();
  func_0x0001083e2f88(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_1083c81d4(auStack_58);
    lVar5 = lVar3;
    FUN_1083d3a98();
    func_0x0001083e32b0();
    func_0x0001083e30e8();
    pcStack_98 = FUN_1083e0640;
    uStack_e8 = *(undefined8 *)(*(long *)(lVar5 + 0x18) + 0x18);
    uStack_f0 = *(undefined8 *)(*(long *)(lVar5 + 0x18) + 0x10);
    uStack_c0 = uVar2;
    uStack_b8 = uVar1;
    lStack_b0 = lVar3;
    puStack_a8 = (undefined1 *)puVar4;
    puStack_a0 = &stack0xfffffffffffffff0;
    func_0x000107c27958(auStack_d8,&uStack_f0);
    puVar6 = auStack_d8;
    func_0x00010048a6c8(extraout_x8_00,puVar6,&DAT_10f68e8ec);
    func_0x0001083e30cc();
    FUN_10831cc90();
    puVar4 = *(undefined8 **)(lVar5 + 0x30);
    for (lVar3 = (long)*(int *)(lVar5 + 0x38) << 3; lVar3 != 0; lVar3 = lVar3 + -8) {
      uVar1 = 0x113254db0;
      if (((ulong)puVar6 & 1) == 0) {
        uVar1 = 0x113254dc8;
      }
      func_0x0001004c3ca0(extraout_x8_00,uVar1);
      (**(code **)(*(long *)*puVar4 + 0x38))(auStack_d8,(long *)*puVar4,0x11);
      func_0x0001004c3ca0(extraout_x8_00,auStack_d8);
      func_0x0001083e30cc();
      puVar6 = (undefined1 *)0x0;
      puVar4 = puVar4 + 1;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
              (extraout_x8_00,&DAT_10f684600);
    return;
  }
  return;
}



/* Entry: 1083e0640; end: 1083e073b;  */

void FUN_1083e0640(undefined8 param_1,long param_2)

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
  func_0x00010048a6c8(param_1,puVar3,&DAT_10f68e8ec);
  func_0x0001083e30cc();
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
    func_0x0001083e30cc();
    puVar3 = (undefined1 *)0x0;
    puVar2 = puVar2 + 1;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
            (param_1,&DAT_10f684600);
  return;
}



/* Entry: 1083e073c; end: 1083e095f;  */

long * FUN_1083e073c(long **param_1,long *param_2,long *param_3,undefined1 *param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  undefined1 in_ZR;
  undefined1 uVar5;
  long **pplVar6;
  long *plVar7;
  undefined1 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  int iVar13;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  undefined8 extraout_x8_01;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  long *unaff_x20;
  long **unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 uVar17;
  ulong unaff_x24;
  long lVar18;
  uint uVar19;
  ulong uVar20;
  uint uVar21;
  undefined8 unaff_x27;
  long unaff_x28;
  undefined1 auStack_258 [24];
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 *puStack_228;
  undefined8 uStack_220;
  undefined1 auStack_218 [24];
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1e8 [24];
  undefined1 auStack_1d0 [24];
  undefined1 auStack_1b8 [24];
  long alStack_1a0 [3];
  undefined1 auStack_188 [32];
  undefined1 auStack_168 [32];
  undefined1 auStack_148 [32];
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  long *plStack_108;
  long *plStack_100;
  long **pplStack_f8;
  long *plStack_f0;
  long **pplStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined1 auStack_d0 [8];
  long alStack_c8 [8];
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  plVar11 = param_2;
  func_0x0001083e2fb8();
  pplVar6 = param_1;
  plVar12 = param_3;
  uStack_78 = extraout_x8;
  if (plVar11[6] != 0) {
    unaff_x23 = (long *)0x0;
    unaff_x24 = 0;
    unaff_x22 = alStack_c8;
    uVar19 = 1;
    for (; param_2 != (long *)0x0; param_2 = (long *)param_2[6]) {
      pplVar6 = (long **)param_1[1];
      FUN_1083c5ae8();
      if ((((int)pplVar6 == 0) || (-1 < *(char *)((long)param_2 + 0x51))) &&
         ((int)param_2[8] == (int)param_3[3])) {
        uStack_80 = 0x1000000000;
        plVar12 = alStack_c8;
        plVar7 = param_2;
        plVar11 = param_3;
        param_4 = auStack_d0;
        plStack_88 = unaff_x22;
        FUN_1083e45bc();
        if ((int)plVar7 == 0) {
LAB_1083e0814:
          uVar20 = 0;
          unaff_x27 = 1;
        }
        else {
          uVar20 = 0;
          while (uVar16 = (ulong)(int)param_3[3], (long)uVar20 < (long)uVar16) {
            if (*(uint *)(param_2 + 8) <= uVar20) goto LAB_1083e0938;
            uVar16 = *(ulong *)(param_3[2] + uVar20 * 8);
            plVar11 = *(long **)(param_2[7] + uVar20 * 8);
            FUN_1083e237c();
            uVar20 = uVar20 + 1;
            if ((uVar16 & 1) == 0) goto LAB_1083e0814;
          }
          uVar20 = 0;
          unaff_x27 = 0;
          for (unaff_x28 = 0; unaff_x28 < (int)uVar16; unaff_x28 = unaff_x28 + 1) {
            if ((int)uStack_80 <= unaff_x28) {
LAB_1083e0938:
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1083e093c);
              (*pcVar4)();
            }
            lVar18 = *(long *)(param_3[2] + unaff_x28 * 8);
            plVar11 = (long *)plStack_88[unaff_x28];
            FUN_1083e2440();
            uVar15 = 0;
            uVar17 = 1;
            if (((int)unaff_x27 == 0) && (((ulong)plVar11 & 1) == 0)) {
              uVar17 = 0;
              uVar15 = lVar18 + (uVar20 & 0xffffffff00000000) & 0xffffffff00000000 |
                       (ulong)(uint)((int)lVar18 + (int)uVar20);
            }
            uVar16 = (ulong)*(uint *)(param_3 + 3);
            uVar20 = uVar15;
            unaff_x27 = uVar17;
          }
        }
        pplVar6 = &plStack_88;
        FUN_1083e2494();
      }
      else {
        uVar20 = 0;
        unaff_x27 = 1;
      }
      uVar21 = (uint)unaff_x27;
      uVar2 = uVar21;
      plVar7 = param_2;
      uVar16 = uVar20;
      if ((int)unaff_x24 < (int)uVar20) {
        uVar2 = uVar19;
        plVar7 = unaff_x23;
        uVar16 = unaff_x24;
      }
      iVar13 = (int)(unaff_x24 >> 0x20);
      iVar14 = (int)(uVar20 >> 0x20);
      uVar3 = uVar21;
      plVar9 = param_2;
      uVar15 = uVar20;
      if (iVar13 <= iVar14) {
        uVar3 = uVar2;
        plVar9 = plVar7;
        uVar15 = uVar16;
      }
      uVar2 = uVar19;
      plVar7 = unaff_x23;
      uVar16 = unaff_x24;
      if (iVar14 <= iVar13) {
        uVar2 = uVar3;
        plVar7 = plVar9;
        uVar16 = uVar15;
      }
      uVar3 = uVar21;
      plVar9 = param_2;
      if (uVar19 <= uVar21) {
        uVar3 = uVar2;
        plVar9 = plVar7;
        uVar20 = uVar16;
      }
      if (uVar21 <= uVar19) {
        unaff_x23 = plVar9;
        unaff_x24 = uVar20;
      }
      bVar1 = uVar21 <= uVar19;
      uVar19 = 0;
      if (bVar1) {
        uVar19 = uVar3;
      }
    }
    in_ZR = uVar19 == 0;
    param_2 = (long *)0x0;
    unaff_x20 = param_3;
    unaff_x21 = param_1;
    if ((bool)in_ZR) {
      param_2 = unaff_x23;
    }
  }
  func_0x0001083e2f88(uStack_78);
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  plVar7 = unaff_x22 + 8;
  FUN_1083e2494();
  func_0x0001083e30e8();
  pcStack_d8 = FUN_1083e0960;
  plVar9 = plVar7;
  lStack_120 = unaff_x28;
  uStack_118 = unaff_x27;
  uStack_110 = unaff_x24;
  plStack_108 = unaff_x23;
  plStack_100 = unaff_x22;
  pplStack_f8 = unaff_x21;
  plStack_f0 = unaff_x20;
  pplStack_e8 = pplVar6;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x0001083e2fb8();
  lVar18 = *plVar12;
  iVar13 = *(int *)(lVar18 + 0xc);
  uVar5 = iVar13 == 0x26;
  uStack_128 = extraout_x8_01;
  if ((bool)uVar5) {
    func_0x0001083e328c();
    if (plVar9 != (long *)0x0) {
      func_0x0001083e3248(auStack_168);
      puVar8 = auStack_168;
      func_0x0001083e3120();
      goto LAB_1083e0a5c;
    }
    uStack_1f8 = *(undefined8 *)(*(long *)(lVar18 + 0x18) + 0x18);
    uStack_200 = *(undefined8 *)(*(long *)(lVar18 + 0x18) + 0x10);
    func_0x000107c27958(auStack_1d0,&uStack_200);
    func_0x0001004c3cd0(auStack_1b8,&UNK_10f492b08,auStack_1d0);
    FUN_1083e22b0(auStack_1e8,*(undefined8 *)(param_4 + 0x10),(long)*(int *)(param_4 + 0x18));
    func_0x00010533a9c0(alStack_1a0,auStack_1b8,auStack_1e8);
    func_0x0001083e3148();
    func_0x0001083e3138();
    func_0x0001083e3284();
    func_0x0001083e3150();
    FUN_1083c8a60();
LAB_1083e0bdc:
    *extraout_x8_00 = 0;
    plVar9 = alStack_1a0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(plVar9);
  }
  else {
    uVar5 = iVar13 == 0x2a;
    if ((bool)uVar5) {
      puVar8 = param_4 + 0x10;
      FUN_1083c7ed8(puVar8,lVar18 + 0x18);
      func_0x0001083e328c();
      if (puVar8 == (undefined1 *)0x0) {
        if (*(int *)(param_4 + 0x18) == 0) goto LAB_1083e0c14;
        FUN_10831d8f8(&uStack_200,
                      *(undefined8 *)
                       (*(long *)(*(long *)(param_4 + 0x10) + (long)*(int *)(param_4 + 0x18) * 8 +
                                 -8) + 0x10));
        func_0x0001004c3cd0(auStack_1e8,&UNK_10f492b08,&uStack_200);
        func_0x00010048a6c8(auStack_1d0,auStack_1e8,&DAT_10f39abd5);
        uStack_238 = *(undefined8 *)(*(long *)(lVar18 + 0x20) + 0x18);
        uStack_240 = *(undefined8 *)(*(long *)(lVar18 + 0x20) + 0x10);
        puVar10 = &uStack_240;
        uVar17 = 1;
        func_0x000107c2810c(puVar10,1,0xffffffffffffffff);
        puStack_228 = puVar10;
        uStack_220 = uVar17;
        func_0x000107c27958(auStack_218,&puStack_228);
        func_0x00010533a9c0(auStack_1b8,auStack_1d0,auStack_218);
        if (*(int *)(param_4 + 0x18) == 0) goto LAB_1083e0c14;
        FUN_1083e22b0(auStack_258,*(undefined8 *)(param_4 + 0x10),
                      (long)*(int *)(param_4 + 0x18) + -1);
        func_0x00010533a9c0(alStack_1a0,auStack_1b8,auStack_258);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_258);
        func_0x0001083e3138();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_218);
        func_0x0001083e3284();
        func_0x0001083e3148();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_200);
        func_0x0001083e3150();
        FUN_1083c8a60();
        goto LAB_1083e0bdc;
      }
      func_0x0001083e3248(auStack_188);
      puVar8 = auStack_188;
      func_0x0001083e3120();
LAB_1083e0a5c:
      plVar9 = (long *)(puVar8 + 0x10);
      FUN_1083c81d4(plVar9);
    }
    else if (iVar13 == 0x2b) {
      *(int *)(lVar18 + 8) = (int)plVar11;
      lVar18 = *plVar12;
      *plVar12 = 0;
      *extraout_x8_00 = lVar18;
      uVar5 = 1;
    }
    else {
      uVar5 = iVar13 == 0x31;
      if ((bool)uVar5) {
        uVar17 = *(undefined8 *)(lVar18 + 0x18);
        func_0x0001083e3248(auStack_148);
        puVar8 = auStack_148;
        FUN_1083daba8(extraout_x8_00,plVar7,(ulong)plVar11 & 0xffffffff,uVar17,auStack_148);
        goto LAB_1083e0a5c;
      }
      plVar9 = (long *)plVar7[2];
      FUN_1083c8a60(plVar9,(ulong)plVar11 & 0xffffffff,&UNK_10f492b16,0xe);
      *extraout_x8_00 = 0;
    }
  }
  func_0x0001083e2f88(uStack_128);
  if ((bool)uVar5) {
    return plVar9;
  }
  ___stack_chk_fail();
LAB_1083e0c14:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1083e0c18);
  (*pcVar4)();
}



/* Entry: 1083e0960; end: 1083e0cbf;  */

void FUN_1083e0960(long *param_1,long param_2,undefined4 param_3,long *param_4,long param_5)

{
  int iVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_188 [24];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [24];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [32];
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [32];
  undefined8 uStack_58;
  
  lVar5 = param_2;
  func_0x0001083e2fb8();
  lVar8 = *param_4;
  iVar1 = *(int *)(lVar8 + 0xc);
  uVar3 = iVar1 == 0x26;
  uStack_58 = extraout_x8;
  if ((bool)uVar3) {
    func_0x0001083e328c();
    if (lVar5 != 0) {
      func_0x0001083e3248(auStack_98);
      puVar6 = auStack_98;
      func_0x0001083e3120();
      goto LAB_1083e0a5c;
    }
    uStack_128 = *(undefined8 *)(*(long *)(lVar8 + 0x18) + 0x18);
    uStack_130 = *(undefined8 *)(*(long *)(lVar8 + 0x18) + 0x10);
    func_0x000107c27958(auStack_100,&uStack_130);
    func_0x0001004c3cd0(auStack_e8,&UNK_10f492b08,auStack_100);
    FUN_1083e22b0(auStack_118,*(undefined8 *)(param_5 + 0x10),(long)*(int *)(param_5 + 0x18));
    func_0x00010533a9c0(auStack_d0,auStack_e8,auStack_118);
    func_0x0001083e3148();
    func_0x0001083e3138();
    func_0x0001083e3284();
    func_0x0001083e3150();
    FUN_1083c8a60();
LAB_1083e0bdc:
    *param_1 = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d0);
  }
  else {
    uVar3 = iVar1 == 0x2a;
    if ((bool)uVar3) {
      lVar5 = param_5 + 0x10;
      FUN_1083c7ed8(lVar5,lVar8 + 0x18);
      func_0x0001083e328c();
      if (lVar5 == 0) {
        if (*(int *)(param_5 + 0x18) == 0) goto LAB_1083e0c14;
        FUN_10831d8f8(&uStack_130,
                      *(undefined8 *)
                       (*(long *)(*(long *)(param_5 + 0x10) + (long)*(int *)(param_5 + 0x18) * 8 +
                                 -8) + 0x10));
        func_0x0001004c3cd0(auStack_118,&UNK_10f492b08,&uStack_130);
        func_0x00010048a6c8(auStack_100,auStack_118,&DAT_10f39abd5);
        uStack_168 = *(undefined8 *)(*(long *)(lVar8 + 0x20) + 0x18);
        uStack_170 = *(undefined8 *)(*(long *)(lVar8 + 0x20) + 0x10);
        puVar4 = &uStack_170;
        uVar7 = 1;
        func_0x000107c2810c(puVar4,1,0xffffffffffffffff);
        puStack_158 = puVar4;
        uStack_150 = uVar7;
        func_0x000107c27958(auStack_148,&puStack_158);
        func_0x00010533a9c0(auStack_e8,auStack_100,auStack_148);
        if (*(int *)(param_5 + 0x18) == 0) goto LAB_1083e0c14;
        FUN_1083e22b0(auStack_188,*(undefined8 *)(param_5 + 0x10),
                      (long)*(int *)(param_5 + 0x18) + -1);
        func_0x00010533a9c0(auStack_d0,auStack_e8,auStack_188);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_188);
        func_0x0001083e3138();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_148);
        func_0x0001083e3284();
        func_0x0001083e3148();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_130);
        func_0x0001083e3150();
        FUN_1083c8a60();
        goto LAB_1083e0bdc;
      }
      func_0x0001083e3248(auStack_b8);
      puVar6 = auStack_b8;
      func_0x0001083e3120();
LAB_1083e0a5c:
      FUN_1083c81d4(puVar6 + 0x10);
    }
    else if (iVar1 == 0x2b) {
      *(undefined4 *)(lVar8 + 8) = param_3;
      lVar5 = *param_4;
      *param_4 = 0;
      *param_1 = lVar5;
      uVar3 = 1;
    }
    else {
      uVar3 = iVar1 == 0x31;
      if ((bool)uVar3) {
        uVar7 = *(undefined8 *)(lVar8 + 0x18);
        func_0x0001083e3248(auStack_78);
        puVar6 = auStack_78;
        FUN_1083daba8(param_1,param_2,param_3,uVar7,auStack_78);
        goto LAB_1083e0a5c;
      }
      FUN_1083c8a60(*(undefined8 *)(param_2 + 0x10),param_3,&UNK_10f492b16,0xe);
      *param_1 = 0;
    }
  }
  func_0x0001083e2f88(uStack_58);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
LAB_1083e0c14:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1083e0c18);
  (*pcVar2)();
}



/* Entry: 1083e0cc0; end: 1083e22af;  */

void FUN_1083e0cc0(long *param_1,undefined ******param_2,undefined *****param_3,
                  undefined ******param_4,undefined ******param_5)

{
  byte bVar1;
  undefined ***pppuVar2;
  code *pcVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  char cVar5;
  char cVar6;
  undefined ****ppppuVar7;
  undefined ******ppppppuVar8;
  undefined *****pppppuVar9;
  undefined *****pppppuVar10;
  undefined8 **ppuVar11;
  undefined8 uVar12;
  undefined8 extraout_x8;
  undefined ******ppppppuVar13;
  undefined8 extraout_x8_00;
  undefined8 uVar14;
  code *extraout_x8_01;
  code *extraout_x8_02;
  long lVar15;
  undefined ******extraout_x10;
  undefined8 extraout_x11;
  int iVar16;
  undefined ******unaff_x22;
  undefined8 *puVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined ******unaff_x25;
  undefined ******ppppppuVar20;
  int iVar21;
  undefined ******unaff_x27;
  undefined ******unaff_x28;
  float fVar22;
  undefined ******ppppppuVar23;
  undefined ******ppppppuVar24;
  undefined ******unaff_d8;
  double unaff_d9;
  undefined *****pppppuStack_370;
  undefined ***pppuStack_368;
  undefined *****pppppuStack_360;
  undefined *****apppppuStack_358 [3];
  long lStack_340;
  long lStack_338;
  undefined8 uStack_330;
  long lStack_328;
  undefined *****pppppuStack_320;
  undefined *****pppppuStack_318;
  undefined8 uStack_310;
  long lStack_308;
  undefined *****pppppuStack_300;
  long lStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  undefined *****pppppuStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  undefined *****pppppuStack_2c0;
  undefined *****pppppuStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  undefined *****pppppuStack_2a0;
  long lStack_298;
  undefined8 uStack_290;
  long lStack_288;
  undefined *****pppppuStack_280;
  long lStack_278;
  undefined8 uStack_270;
  undefined *****pppppuStack_268;
  undefined *****pppppuStack_260;
  undefined *****pppppuStack_258;
  undefined8 uStack_250;
  long lStack_248;
  undefined *****pppppuStack_240;
  undefined *****pppppuStack_238;
  undefined8 uStack_230;
  undefined *****pppppuStack_220;
  undefined *****pppppuStack_218;
  undefined *****pppppuStack_210;
  undefined8 uStack_208;
  undefined *****pppppuStack_200;
  undefined *****pppppuStack_1f8;
  undefined *****pppppuStack_1f0;
  undefined8 uStack_1e8;
  undefined ****appppuStack_1e0 [2];
  undefined8 *puStack_1d0;
  int iStack_1c8;
  undefined ****appppuStack_1c0 [2];
  undefined8 *apuStack_1b0 [2];
  undefined ****appppuStack_1a0 [8];
  undefined ****ppppuStack_160;
  undefined8 uStack_158;
  undefined *****pppppuStack_150;
  undefined *****pppppuStack_148;
  undefined ****ppppuStack_140;
  double dStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *****apppppuStack_110 [2];
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_88;
  
  ppppppuVar13 = param_2;
  func_0x0001083e2fb8();
  iVar16 = (int)ppppppuVar13[1];
  uStack_88 = extraout_x8;
  FUN_1083c5ae8();
  if ((iVar16 == 0) || (-1 < *(char *)((long)param_4 + 0x51))) {
    if (*(int *)(param_4 + 8) != *(int *)(param_5 + 3)) {
      pppppuStack_258 = param_4[3];
      pppppuStack_260 = param_4[2];
      func_0x000107c27958(&pppppuStack_218,&pppppuStack_260);
      func_0x0001083e321c(&UNK_10f492b25);
      func_0x00010048a6c8(&pppppuStack_150,&pppppuStack_1f8,&UNK_10f492b2f);
      __ZNSt3__19to_stringEm(&pppppuStack_240,(long)*(int *)(param_4 + 8));
      func_0x00010533a9c0(appppuStack_1a0,&pppppuStack_150,&pppppuStack_240);
      func_0x0001083e30b4();
      func_0x0001083e3054();
      func_0x0001083e32a0();
      func_0x0001083e305c();
      func_0x0001083e3188();
      func_0x0001083e3298();
      in_ZR = *(int *)(param_4 + 8) == 1;
      if (!(bool)in_ZR) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                  (apppppuStack_110,"s");
      }
      __ZNSt3__19to_stringEi(&pppppuStack_150,*(undefined4 *)(param_5 + 3));
      func_0x0001083e32bc(&UNK_10f417b86);
      param_4 = apppppuStack_110;
      func_0x0001004c3ca0(apppppuStack_110,appppuStack_1a0);
      func_0x0001083e3054();
      func_0x0001083e305c();
      func_0x0001083e2fe4(param_2[2]);
      func_0x0001083e32a8();
      *param_1 = 0;
      func_0x0001083e30ac();
      ppppppuVar13 = unaff_x25;
      goto LAB_1083e1bf0;
    }
    unaff_x27 = (undefined ******)0x0;
    do {
      in_ZR = unaff_x27 == (undefined ******)(long)*(int *)(param_5 + 3);
      if ((long)*(int *)(param_5 + 3) <= (long)unaff_x27) {
        ppppuStack_160 = (undefined ****)appppuStack_1a0;
        uStack_158 = 0x1000000000;
        ppppppuVar13 = param_4;
        FUN_1083e45bc(param_4,param_5,appppuStack_1a0,&pppppuStack_360);
        if ((int)ppppppuVar13 == 0) {
          pppppuStack_238 = param_4[3];
          pppppuStack_240 = param_4[2];
          func_0x000107c27958(&pppppuStack_1f8,&pppppuStack_240);
          func_0x0001004c3cd0(&pppppuStack_150,&UNK_10f492b08,&pppppuStack_1f8);
          FUN_1083e22b0(&pppppuStack_218,param_5[2],(long)*(int *)(param_5 + 3));
          param_4 = apppppuStack_110;
          func_0x00010533a9c0(apppppuStack_110,&pppppuStack_150,&pppppuStack_218);
          func_0x0001083e3298();
          func_0x0001083e305c();
          func_0x0001083e3188();
          func_0x0001083e2fe4(param_2[2]);
          func_0x0001083e32a8();
          *param_1 = 0;
          func_0x0001083e30ac();
          goto LAB_1083e1be8;
        }
        unaff_x22 = (undefined ******)0x0;
        unaff_x25 = (undefined ******)0x2;
        goto LAB_1083e0f90;
      }
      ppppppuVar13 = (undefined ******)(ulong)*(uint *)(param_4 + 8);
      cVar5 = SBORROW8((long)unaff_x27,(long)ppppppuVar13);
      cVar6 = (long)unaff_x27 - (long)ppppppuVar13 < 0;
      in_ZR = unaff_x27 == ppppppuVar13;
      if (ppppppuVar13 <= unaff_x27) goto LAB_1083e1e40;
      unaff_x25 = (undefined ******)param_5[2][(long)unaff_x27];
      unaff_x22 = (undefined ******)param_4[7][(long)unaff_x27];
      ppppppuVar13 = unaff_x25;
      FUN_1083e237c(unaff_x25,unaff_x22);
      unaff_x27 = (undefined ******)((long)unaff_x27 + 1);
    } while (((ulong)ppppppuVar13 & 1) != 0);
    param_3 = param_2[2];
    param_4 = (undefined ******)(ulong)*(uint *)(unaff_x25 + 1);
    (*(code *)(*unaff_x22)[3])(unaff_x22);
    FUN_1083e7ea0(&pppppuStack_218);
    func_0x0001083e321c(&UNK_10f492b45);
    pppppuStack_280 =
         (undefined *****)CONCAT44(pppppuStack_280._4_4_,*(undefined4 *)(unaff_x22 + 6));
    FUN_1083e8988(&pppppuStack_240,&pppppuStack_280);
    func_0x00010533a9c0(&pppppuStack_150,&pppppuStack_1f8,&pppppuStack_240);
    (*(code *)(*unaff_x22[4])[2])(&pppppuStack_260);
    func_0x00010533a9c0(appppuStack_1a0,&pppppuStack_150,&pppppuStack_260);
    unaff_x22 = apppppuStack_110;
    func_0x0001083e30b4();
    func_0x0001083e2fe4();
    uVar12 = extraout_x11;
    ppppppuVar13 = extraout_x10;
    if (cVar6 == cVar5) {
      uVar12 = extraout_x8_00;
      ppppppuVar13 = unaff_x22;
    }
    FUN_1083c8a60(param_3,param_4,ppppppuVar13,uVar12);
    func_0x0001083e30ac();
    func_0x0001083e3054();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppppuStack_260);
    func_0x0001083e305c();
    func_0x0001083e32a0();
    func_0x0001083e3188();
    ppppppuVar13 = &pppppuStack_218;
  }
  else {
    unaff_x22 = (undefined ******)param_2[2];
    FUN_1083e43a8(&pppppuStack_150,param_4);
    func_0x0001083e32bc(&UNK_10f492b25);
    param_4 = apppppuStack_110;
    func_0x0001083e30b4();
    func_0x0001083e2fe4();
    func_0x0001083e32a8(unaff_x22);
    func_0x0001083e30ac();
    func_0x0001083e3054();
    ppppppuVar13 = &pppppuStack_150;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppppppuVar13);
  *param_1 = 0;
  ppppppuVar13 = unaff_x25;
LAB_1083e1bf0:
  while (func_0x0001083e2f88(uStack_88), !(bool)in_ZR) {
    ___stack_chk_fail();
code_r0x0001083e1e7c:
    uStack_2b0 = 0;
    pppppuStack_2c0 = (undefined *****)unaff_x27;
    pppppuStack_2b8 = (undefined *****)param_5;
    func_0x0001083e304c(&lStack_2c8);
    pppppuStack_200 = (undefined *****)param_5;
    if (lStack_2c8 == 0) {
LAB_1083e1f3c:
      *param_1 = 0;
      param_5 = (undefined ******)pppppuStack_200;
    }
    else {
      ppppuStack_140 = (undefined ****)unaff_x27[2];
      pppppuStack_150 = (undefined *****)(unaff_x22 + 2);
      dStack_138 = SQRT(unaff_d9);
      pppppuStack_2d8 = (undefined *****)&pppppuStack_150;
      lStack_2e0 = lStack_2c8;
      uStack_2d0 = 0;
      pppppuStack_148 = (undefined *****)unaff_d8;
      func_0x0001083e2ea4(&lStack_2e8,param_2,&lStack_2e0);
      if (lStack_2e8 == 0) {
        *param_1 = 0;
      }
      else {
        lStack_2f8 = lStack_2e8;
        uStack_2f0 = 0;
        pppppuStack_300 = (undefined *****)unaff_x28;
        func_0x0001083e304c(&lStack_308);
        if (lStack_308 == 0) {
          *param_1 = 0;
        }
        else {
          uStack_310 = 0;
          pppppuStack_320 = (undefined *****)ppppppuVar13;
          pppppuStack_318 = (undefined *****)unaff_x27;
          func_0x0001083e304c(&lStack_328);
          if (lStack_328 == 0) {
            *param_1 = 0;
          }
          else {
            lStack_340 = lStack_328;
            lStack_338 = lStack_308;
            uStack_330 = 0;
            func_0x0001083e3040();
            func_0x0001083e2eb4();
            lVar15 = lStack_328;
            lStack_328 = 0;
            if (lVar15 != 0) {
              func_0x0001083e2f5c();
            }
          }
          lVar15 = lStack_308;
          lStack_308 = 0;
          if (lVar15 != 0) {
            func_0x0001083e2f5c();
          }
        }
        lVar15 = lStack_2e8;
        lStack_2e8 = 0;
        if (lVar15 != 0) {
          func_0x0001083e2f5c();
        }
      }
      lVar15 = lStack_2c8;
      lStack_2c8 = 0;
      if (lVar15 != 0) {
        func_0x0001083e2f5c();
      }
    }
LAB_1083e1f40:
    lVar15 = lStack_2a8;
    lStack_2a8 = 0;
    if (lVar15 != 0) {
      func_0x0001083e2f5c();
    }
    lVar15 = lStack_288;
    lStack_288 = 0;
    pppppuStack_200 = (undefined *****)param_5;
    if (lVar15 != 0) {
      func_0x0001083e2f5c();
    }
LAB_1083e1f60:
    pppppuVar9 = pppppuStack_268;
    pppppuStack_268 = (undefined *****)0x0;
    if ((undefined ******)pppppuVar9 != (undefined ******)0x0) {
      func_0x0001083e2f5c();
    }
LAB_1083e1f70:
    lVar15 = lStack_248;
    lStack_248 = 0;
    if (lVar15 != 0) {
      func_0x0001083e2f5c();
    }
LAB_1083e1f80:
    ppppppuVar23 = (undefined ******)pppppuStack_220;
    pppppuStack_220 = (undefined *****)0x0;
    ppppppuVar20 = ppppppuVar13;
    pppppuStack_360 = (undefined *****)unaff_x28;
    ppppppuVar13 = unaff_x22;
    param_5 = (undefined ******)pppppuStack_200;
joined_r0x0001083e1618:
    unaff_x28 = ppppppuVar20;
    unaff_x22 = ppppppuVar13;
    ppppppuVar20 = unaff_x28;
    ppppppuVar8 = (undefined ******)pppppuStack_360;
    if (ppppppuVar23 != (undefined ******)0x0) {
LAB_1083e1e5c:
      func_0x0001083e2f5c();
      unaff_x22 = ppppppuVar13;
      ppppppuVar20 = unaff_x28;
      pppppuStack_360 = (undefined *****)ppppppuVar8;
    }
LAB_1083e1e60:
    func_0x0001083e31a0();
LAB_1083e1b6c:
    unaff_x25 = ppppppuVar20;
    ppppppuVar13 = (undefined ******)pppppuStack_360;
    if (*param_1 == 0) {
LAB_1083e1b80:
      FUN_1083c8734(param_1);
      pppppuStack_360 = (undefined *****)ppppppuVar13;
LAB_1083e1b88:
      param_2 = (undefined ******)0x48;
      FUN_1083d3a60();
      FUN_1083c8078(apppppuStack_110,appppuStack_1e0);
      unaff_x22 = apppppuStack_110;
      FUN_1083e2ed4(param_2,param_3,pppppuStack_370,param_4,apppppuStack_110,0);
      FUN_1083c81d4(&plStack_100);
      apppppuStack_110[0] = (undefined *****)0x0;
      *param_1 = (long)param_2;
      func_0x0001083e2f24(apppppuStack_110);
    }
    else {
      *(int *)(*param_1 + 8) = (int)param_3;
    }
    ppuVar11 = &puStack_1d0;
    unaff_x28 = (undefined ******)pppppuStack_360;
LAB_1083e1be4:
    FUN_1083c81d4(ppuVar11);
LAB_1083e1be8:
    unaff_x27 = (undefined ******)appppuStack_1a0;
    FUN_1083e2494(&ppppuStack_160);
    ppppppuVar13 = unaff_x25;
  }
  return;
LAB_1083e0f90:
  iVar16 = *(int *)(param_5 + 3);
  if ((long)iVar16 <= (long)unaff_x22) goto LAB_1083e10e0;
  if ((long)(int)uStack_158 <= (long)unaff_x22) goto LAB_1083e1e40;
  ppppuVar7 = (undefined ****)ppppuStack_160[(long)unaff_x22];
  pppuStack_368 = (undefined ***)param_5[2][(long)unaff_x22];
  param_5[2][(long)unaff_x22] = (undefined ****)0x0;
  FUN_1083f1310(apppppuStack_110,ppppuVar7,&pppuStack_368,param_2);
  pppppuVar9 = apppppuStack_110[0];
  if ((long)*(int *)(param_5 + 3) <= (long)unaff_x22) goto LAB_1083e1e40;
  apppppuStack_110[0] = (undefined *****)0x0;
  ppppuVar7 = param_5[2][(long)unaff_x22];
  param_5[2][(long)unaff_x22] = (undefined ****)pppppuVar9;
  if (ppppuVar7 != (undefined ****)0x0) {
    func_0x0001083e2f5c();
  }
  pppppuVar9 = apppppuStack_110[0];
  apppppuStack_110[0] = (undefined *****)0x0;
  if (pppppuVar9 != (undefined *****)0x0) {
    func_0x0001083e2f5c();
  }
  pppuVar2 = pppuStack_368;
  pppuStack_368 = (undefined ***)0x0;
  if ((undefined ****)pppuVar2 != (undefined ****)0x0) {
    func_0x0001083e2f5c();
  }
  in_ZR = unaff_x22 == (undefined ******)(long)*(int *)(param_5 + 3);
  if ((long)*(int *)(param_5 + 3) <= (long)unaff_x22) goto LAB_1083e1e40;
  ppppuVar7 = param_5[2][(long)unaff_x22];
  if (ppppuVar7 == (undefined ****)0x0) goto LAB_1083e1104;
  if ((undefined ******)(ulong)*(uint *)(param_4 + 8) <= unaff_x22) goto LAB_1083e1e40;
  if ((*(uint *)(param_4[7][(long)unaff_x22] + 6) >> 5 & 1) != 0) {
    in_ZR = (*(uint *)(param_4[7][(long)unaff_x22] + 6) & 0x10) == 0;
    uVar18 = 2;
    if ((bool)in_ZR) {
      uVar18 = 3;
    }
    FUN_1083c3394(ppppuVar7,uVar18,param_2[2]);
    if (((ulong)ppppuVar7 & 1) == 0) goto LAB_1083e1104;
  }
  unaff_x22 = (undefined ******)((long)unaff_x22 + 1);
  goto LAB_1083e0f90;
LAB_1083e10e0:
  in_ZR = *(char *)((long)param_4 + 0x56) == '\x01';
  if ((bool)in_ZR) {
    FUN_1083c8a60(param_2[2],param_3,&UNK_10f492b61,0x1d);
LAB_1083e1104:
    *param_1 = 0;
    goto LAB_1083e1be8;
  }
  in_ZR = *(char *)((long)param_4 + 0x54) == '\x19';
  if ((bool)in_ZR) {
    if (iVar16 != 0) {
      param_4 = (undefined ******)param_5[2][(long)iVar16 + -1][3];
      FUN_1083c8734();
      *(int *)(param_5 + 3) = *(int *)(param_5 + 3) + -1;
      FUN_1083c8078(appppuStack_1c0,param_5);
      param_5 = (undefined ******)appppuStack_1c0;
      FUN_1083da950(param_1,param_2,param_3,pppppuStack_360,param_4,appppuStack_1c0);
      ppuVar11 = apuStack_1b0;
      unaff_x22 = (undefined ******)pppppuStack_360;
      goto LAB_1083e1be4;
    }
LAB_1083e1e40:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1083e1e44);
    (*pcVar3)();
  }
  ppppppuVar8 = (undefined ******)appppuStack_1e0;
  FUN_1083c8078(ppppppuVar8,param_5);
  in_ZR = *(char *)((long)param_4 + 0x54) == -1;
  pppppuStack_370 = pppppuStack_360;
  if ((bool)in_ZR) goto LAB_1083e1b88;
  param_5 = (undefined ******)((long)iStack_1c8 << 3);
  puVar17 = puStack_1d0;
  while (param_5 != (undefined ******)0x0) {
    ppppppuVar8 = (undefined ******)*puVar17;
    func_0x0001083c6674();
    FUN_1083c2fd8();
    param_5 = param_5 + -1;
    puVar17 = puVar17 + 1;
    if (((ulong)ppppppuVar8 & 1) == 0) goto LAB_1083e1b88;
  }
  bVar1 = *(byte *)((long)param_4 + 0x54);
  unaff_x22 = (undefined ******)(ulong)bVar1;
  apppppuStack_358[0] = (undefined *****)0x0;
  apppppuStack_358[1] = (undefined *****)0x0;
  ppppppuVar20 = apppppuStack_358;
  apppppuStack_358[2] = (undefined *****)0x0;
  for (param_5 = (undefined ******)0x0; unaff_x27 = (undefined ******)apppppuStack_358[2],
      unaff_x28 = (undefined ******)apppppuStack_358[1],
      ppppppuVar13 = (undefined ******)apppppuStack_358[0], (long)param_5 < (long)iStack_1c8;
      param_5 = (undefined ******)((long)param_5 + 1)) {
    ppppppuVar8 = (undefined ******)puStack_1d0[(long)param_5];
    func_0x0001083c6674();
    ppppppuVar20[(long)param_5] = (undefined *****)ppppppuVar8;
  }
  in_ZR = bVar1 == 99;
  uVar12 = 0x1083e2c68;
  ppppppuVar23 = (undefined ******)0x0;
  uVar14 = 0x1083e2c0c;
  uVar19 = (uint)ppppppuVar20;
  unaff_x25 = ppppppuVar20;
  switch(unaff_x22) {
  case (undefined ******)0x0:
    goto code_r0x0001083e12fc;
  case (undefined ******)0x1:
    break;
  case (undefined ******)0x2:
    break;
  case (undefined ******)0x3:
    uVar12 = 0x1083e2c7c;
    ppppppuVar23 = (undefined ******)0x3ff0000000000000;
  case (undefined ******)0x4:
    func_0x0001083e2c54(ppppppuVar23,param_1,apppppuStack_358[0],pppppuStack_360,uVar12);
    goto LAB_1083e1b6c;
  case (undefined ******)0x5:
    break;
  case (undefined ******)0x6:
    break;
  case (undefined ******)0x7:
    break;
  case (undefined ******)0x8:
    in_ZR = iStack_1c8 == 1;
    if (!(bool)in_ZR) goto code_r0x0001083e1d5c;
    break;
  default:
LAB_1083e18e8:
    *param_1 = 0;
    ppppppuVar13 = (undefined ******)pppppuStack_360;
    goto LAB_1083e1b80;
  case (undefined ******)0xd:
    break;
  case (undefined ******)0xe:
    goto code_r0x0001083e1d80;
  case (undefined ******)0xf:
    break;
  case (undefined ******)0x10:
    break;
  case (undefined ******)0x11:
    func_0x0001083e3034();
    func_0x0001083e3130(ppppppuVar13);
    ppppppuVar20 = (undefined ******)apppppuStack_358[1];
    func_0x0001083e30c0();
    func_0x0001083e30f0(ppppppuVar20);
    func_0x0001083e30c0();
    func_0x0001083e3130(ppppppuVar20);
    func_0x0001083e3034();
    func_0x0001083e30f0(ppppppuVar13);
    func_0x0001083e3064();
    func_0x0001083e2fc8();
    apppppuStack_110[0] = (undefined *****)ppppppuVar23;
    func_0x0001083e3034();
    func_0x0001083e30f0(ppppppuVar13);
    func_0x0001083e30c0();
    func_0x0001083e3230();
    func_0x0001083e30c0();
    ppppppuVar8 = ppppppuVar20;
    func_0x0001083e30f0();
    func_0x0001083e3034();
    func_0x0001083e2fac();
    func_0x0001083e3064();
    func_0x0001083e2fc8();
    apppppuStack_110[1] = (undefined *****)ppppppuVar23;
    func_0x0001083e3034();
    func_0x0001083e2fac();
    func_0x0001083e30c0();
    func_0x0001083e3130();
    func_0x0001083e30c0();
    func_0x0001083e3230();
    func_0x0001083e3034();
    func_0x0001083e3130(ppppppuVar13);
    func_0x0001083e3064();
    func_0x0001083e2fc8();
    plStack_100 = (long *)ppppppuVar23;
    func_0x0001083e2f9c();
    FUN_1083dcad4();
    param_5 = ppppppuVar13;
    pppppuStack_360 = (undefined *****)ppppppuVar8;
    goto LAB_1083e1b6c;
  case (undefined ******)0x12:
    break;
  case (undefined ******)0x13:
    FUN_1083e2a94(apppppuStack_358[0],apppppuStack_110);
    unaff_x22 = (undefined ******)apppppuStack_358[0];
    pppppuVar9 = (undefined *****)apppppuStack_358[0][2];
    (*(code *)(*pppppuVar9)[0x10])();
    in_ZR = pppppuVar9 == (undefined *****)0x10;
    if ((bool)in_ZR) {
      FUN_1083660e4(apppppuStack_110,0);
      unaff_x22 = (undefined ******)apppppuStack_358[0];
    }
    else {
      in_ZR = pppppuVar9 == (undefined *****)0x9;
      if ((bool)in_ZR) {
        FUN_108365fcc(apppppuStack_110,0);
      }
      else {
        in_ZR = pppppuVar9 == (undefined *****)0x4;
        if (!(bool)in_ZR) goto code_r0x0001083e1dcc;
      }
    }
    FUN_1083c7b60(&pppppuStack_150,*(undefined4 *)(unaff_x22 + 1),pppppuStack_360);
    *param_1 = (long)pppppuStack_150;
    goto LAB_1083e1b6c;
  case (undefined ******)0x16:
    (*(code *)(*apppppuStack_358[0][2])[10])();
    func_0x0001083e3040();
    func_0x0001083e2e54();
    param_2 = ppppppuVar13;
    goto LAB_1083e1b6c;
  case (undefined ******)0x17:
    func_0x0001083e2a54(param_1,apppppuStack_358);
    goto LAB_1083e1b6c;
  case (undefined ******)0x18:
    uVar14 = 0x1083e2c3c;
    goto code_r0x0001083e164c;
  case (undefined ******)0x1a:
    break;
  case (undefined ******)0x1b:
    break;
  case (undefined ******)0x1c:
    apppppuStack_110[1] = apppppuStack_358[2];
    apppppuStack_110[0] = apppppuStack_358[1];
    plStack_100 = (long *)0x0;
    func_0x0001083e2a54(&pppppuStack_218,apppppuStack_110);
    param_5 = (undefined ******)pppppuStack_218;
    unaff_x22 = ppppppuVar13;
    if ((undefined ******)pppppuStack_218 != (undefined ******)0x0) {
      ppppuStack_140 = (undefined ****)0x0;
      pppppuStack_150 = pppppuStack_218;
      pppppuStack_148 = (undefined *****)0x0;
      FUN_1083e25a0(&pppppuStack_240,param_2,&pppppuStack_150,pppppuStack_218[2],0x1083e2e8c);
      if ((undefined ******)pppppuStack_240 != (undefined ******)0x0) {
        pppppuStack_1f8 = (undefined *****)ppppppuVar13;
        pppppuStack_1f0 = pppppuStack_240;
        uStack_1e8 = 0;
        func_0x0001083e3040();
        func_0x0001083e2e7c();
        ppppppuVar23 = (undefined ******)pppppuStack_240;
        pppppuStack_240 = (undefined *****)0x0;
        goto joined_r0x0001083e1618;
      }
code_r0x0001083e1d48:
      *param_1 = 0;
      goto LAB_1083e1e60;
    }
    goto code_r0x0001083e1dcc;
  case (undefined ******)0x1f:
    break;
  case (undefined ******)0x20:
    break;
  case (undefined ******)0x21:
    break;
  case (undefined ******)0x22:
    goto code_r0x0001083e1d80;
  case (undefined ******)0x23:
    break;
  case (undefined ******)0x27:
    uVar14 = 0x1083e2c30;
    goto code_r0x0001083e164c;
  case (undefined ******)0x28:
    uVar14 = 0x1083e2c24;
    goto code_r0x0001083e164c;
  case (undefined ******)0x29:
    goto code_r0x0001083e1270;
  case (undefined ******)0x2a:
    break;
  case (undefined ******)0x2b:
    fVar22 = 0.0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    pppppuStack_148 = (undefined *****)0x0;
    pppppuStack_150 = (undefined *****)0x0;
    dStack_138 = 0.0;
    ppppuStack_140 = (undefined ****)0x0;
    FUN_1083e2a94(apppppuStack_358[0],&pppppuStack_150);
    pppppuVar9 = (undefined *****)apppppuStack_358[0][2];
    (*(code *)(*pppppuVar9)[0x10])();
    if (pppppuVar9 == (undefined *****)0x10) {
      FUN_1083660e4(&pppppuStack_150,&pppppuStack_150);
    }
    else if (pppppuVar9 == (undefined *****)0x9) {
      FUN_108365fcc(&pppppuStack_150,&pppppuStack_150);
    }
    else {
      in_ZR = pppppuVar9 == (undefined *****)0x4;
      if (!(bool)in_ZR) goto code_r0x0001083e1dcc;
      FUN_108365f1c(&pppppuStack_150,&pppppuStack_150);
    }
    in_ZR = fVar22 == 0.0;
    if (!(bool)in_ZR) {
      ppppppuVar13 = &pppppuStack_150;
      for (lVar15 = 0; in_ZR = lVar15 == 0x80, !(bool)in_ZR; lVar15 = lVar15 + 8) {
        *(double *)((long)apppppuStack_110 + lVar15) = (double)*(float *)ppppppuVar13;
        ppppppuVar13 = (undefined ******)((long)ppppppuVar13 + 4);
      }
      func_0x0001083e2f9c();
      FUN_1083dcad4();
      goto LAB_1083e1b6c;
    }
    goto code_r0x0001083e1dcc;
  case (undefined ******)0x2f:
    func_0x0001083e2a0c(param_1,apppppuStack_358);
    goto LAB_1083e1b6c;
  case (undefined ******)0x30:
    uVar14 = 0x1083e2c18;
  case (undefined ******)0x31:
    goto code_r0x0001083e164c;
  case (undefined ******)0x32:
    break;
  case (undefined ******)0x33:
    break;
  case (undefined ******)0x34:
  case (undefined ******)0x44:
code_r0x0001083e1d5c:
    func_0x0001083e3040();
    FUN_1083e2500();
    goto LAB_1083e1b6c;
  case (undefined ******)0x36:
    goto code_r0x0001083e1d5c;
  case (undefined ******)0x37:
    goto code_r0x0001083e1d5c;
  case (undefined ******)0x38:
    pppppuVar9 = (undefined *****)apppppuStack_358[2][2];
    (*(code *)(*pppppuVar9)[10])();
    (*(code *)(*pppppuVar9)[8])();
    unaff_x25 = (undefined ******)apppppuStack_358[0];
    uVar4 = 2 < (uint)pppppuVar9;
    in_ZR = (uint)pppppuVar9 == 3;
    param_5 = unaff_x27;
    if ((bool)in_ZR) {
      pppppuVar10 = (undefined *****)apppppuStack_358[0][2];
      (*(code *)(*pppppuVar10)[10])();
      pppppuVar9 = pppppuVar10;
      (*(code *)(*pppppuVar10)[8])();
      ppppppuVar20 = unaff_x25;
      if ((int)pppppuVar9 != 0) {
        (*(code *)(*pppppuVar10)[8])(pppppuVar10);
        func_0x0001083e31e0();
        if ((bool)uVar4) {
          (*(code *)(*pppppuVar10)[8])();
          in_ZR = (int)pppppuVar10 == 3;
          if (!(bool)in_ZR) goto LAB_1083e18e8;
        }
      }
      goto code_r0x0001083e18d0;
    }
    goto code_r0x0001083e1d80;
  case (undefined ******)0x3a:
    goto code_r0x0001083e1d5c;
  case (undefined ******)0x3b:
    func_0x0001083e2a0c(&pppppuStack_150,apppppuStack_358);
    param_5 = (undefined ******)pppppuStack_150;
    if ((undefined ******)pppppuStack_150 != (undefined ******)0x0) {
      apppppuStack_110[0] = apppppuStack_358[0];
      apppppuStack_110[1] = pppppuStack_150;
      plStack_100 = (long *)0x0;
      func_0x0001083e3040();
      FUN_1083e2500();
      goto LAB_1083e1e60;
    }
    goto code_r0x0001083e1dcc;
  case (undefined ******)0x3c:
    uVar14 = 0x1083e2c48;
code_r0x0001083e164c:
    func_0x0001083e3040(uVar14);
    FUN_1083e2b00();
    goto LAB_1083e1b6c;
  case (undefined ******)0x3d:
    unaff_x27 = (undefined ******)0x0;
    ppppppuVar20 = (undefined ******)apppppuStack_358[0];
code_r0x0001083e18d0:
    func_0x0001083e3040();
    FUN_1083e270c();
    param_5 = unaff_x27;
    goto LAB_1083e1b6c;
  case (undefined ******)0x3e:
    unaff_x22 = (undefined ******)0x0;
    ppppppuVar20 = (undefined ******)0x0;
    while( true ) {
      func_0x0001083e32d0();
      func_0x0001083e3078();
      iVar16 = (int)ppppppuVar20;
      in_ZR = iVar16 == (int)ppppppuVar8;
      if ((int)ppppppuVar8 <= iVar16) break;
      unaff_x22 = (undefined ******)(long)(int)unaff_x22;
      for (iVar21 = 0; func_0x0001083e3078((*pppppuStack_360)[0xd]), iVar21 < (int)ppppppuVar8;
          iVar21 = iVar21 + 1) {
        func_0x0001083e3034();
        ppppppuVar20 = ppppppuVar13;
        (*extraout_x8_02)(ppppppuVar13,iVar21);
        ppppppuVar8 = unaff_x28;
        func_0x0001083e32c8((*unaff_x28)[5]);
        apppppuStack_110[(long)unaff_x22] =
             (undefined *****)(double)((float)(double)ppppppuVar20 * (float)(double)ppppppuVar8);
        unaff_x22 = (undefined ******)((long)unaff_x22 + 1);
      }
      ppppppuVar20 = (undefined ******)(ulong)(iVar16 + 1);
    }
    func_0x0001083e2f9c();
    FUN_1083dcad4();
    param_5 = ppppppuVar13;
    goto LAB_1083e1b6c;
  case (undefined ******)0x3f:
    ppppppuVar8 = (undefined ******)apppppuStack_358[0];
    func_0x0001083e29ec(apppppuStack_358[0],0);
    iVar16 = (int)ppppppuVar8;
    func_0x0001083e31d0();
    func_0x0001083e29ec();
    func_0x0001083e3098((double)(uVar19 | iVar16 << 0x10));
    func_0x0001083e2f68();
    param_5 = ppppppuVar13;
    goto LAB_1083e1b6c;
  case (undefined ******)0x40:
    ppppppuVar8 = (undefined ******)apppppuStack_358[0];
    func_0x0001083e29b4(apppppuStack_358[0],0);
    iVar16 = (int)ppppppuVar8;
    func_0x0001083e31d0();
    func_0x0001083e29b4();
    ppppppuVar20 = (undefined ******)(ulong)(uVar19 & 0xffff | iVar16 << 0x10);
    func_0x0001083e3098((double)(long)ppppppuVar20);
    func_0x0001083e2f68();
    param_5 = ppppppuVar13;
    goto LAB_1083e1b6c;
  case (undefined ******)0x42:
    ppppppuVar8 = (undefined ******)apppppuStack_358[0];
    FUN_1083e2984(apppppuStack_358[0],0);
    iVar16 = (int)ppppppuVar8;
    func_0x0001083e31d0();
    FUN_1083e2984();
    ppppppuVar20 = (undefined ******)(ulong)(uVar19 & 0xffff | iVar16 << 0x10);
    func_0x0001083e3098((double)(long)ppppppuVar20);
    func_0x0001083e2f68();
    param_5 = ppppppuVar13;
    goto LAB_1083e1b6c;
  case (undefined ******)0x45:
    break;
  case (undefined ******)0x46:
    apppppuStack_110[0] = apppppuStack_358[1];
    apppppuStack_110[1] = apppppuStack_358[0];
    plStack_100 = (long *)0x0;
    func_0x0001083e2a54(&pppppuStack_240,apppppuStack_110);
    param_5 = (undefined ******)pppppuStack_240;
    unaff_x22 = ppppppuVar13;
    ppppppuVar20 = unaff_x28;
    if ((undefined ******)pppppuStack_240 != (undefined ******)0x0) {
      pppppuStack_150 = (undefined *****)unaff_x28;
      pppppuStack_148 = pppppuStack_240;
      ppppuStack_140 = (undefined ****)0x0;
      func_0x0001083e304c(&pppppuStack_260);
      if ((undefined ******)pppppuStack_260 != (undefined ******)0x0) {
        pppppuStack_1f8 = pppppuStack_260;
        pppppuStack_1f0 = pppppuStack_260;
        uStack_1e8 = 0;
        func_0x0001083e2ea4(&pppppuStack_280,param_2,&pppppuStack_1f8);
        if ((undefined ******)pppppuStack_280 == (undefined ******)0x0) {
          *param_1 = 0;
        }
        else {
          pppppuStack_218 = (undefined *****)ppppppuVar13;
          pppppuStack_210 = pppppuStack_280;
          uStack_208 = 0;
          func_0x0001083e3040();
          func_0x0001083e2eb4();
          pppppuVar9 = pppppuStack_280;
          pppppuStack_280 = (undefined *****)0x0;
          if ((undefined ******)pppppuVar9 != (undefined ******)0x0) {
            func_0x0001083e2f5c();
          }
        }
        pppppuVar9 = pppppuStack_260;
        pppppuStack_260 = (undefined *****)0x0;
        ppppppuVar8 = (undefined ******)pppppuStack_360;
        if ((undefined ******)pppppuVar9 == (undefined ******)0x0) goto LAB_1083e1e60;
        goto LAB_1083e1e5c;
      }
      goto code_r0x0001083e1d48;
    }
    goto code_r0x0001083e1dcc;
  case (undefined ******)0x47:
    pppppuStack_1f8 = apppppuStack_358[1];
    pppppuStack_1f0 = apppppuStack_358[0];
    uStack_1e8 = 0;
    func_0x0001083e2a54(&pppppuStack_200,&pppppuStack_1f8);
    param_5 = (undefined ******)pppppuStack_200;
    ppppppuVar20 = ppppppuVar13;
    pppppuStack_360 = (undefined *****)unaff_x28;
    if ((undefined ******)pppppuStack_200 != (undefined ******)0x0) {
      pppppuStack_218 = pppppuStack_200;
      pppppuStack_210 = pppppuStack_200;
      uStack_208 = 0;
      func_0x0001083e304c(&pppppuStack_220);
      if ((undefined ******)pppppuStack_220 != (undefined ******)0x0) {
        plStack_100 = (long *)pppppuStack_220[2];
        unaff_d8 = (undefined ******)0x2900ffffff;
        apppppuStack_110[1] = (undefined *****)0x2900ffffff;
        unaff_x22 = (undefined ******)&UNK_110a459d0;
        apppppuStack_110[0] = (undefined *****)&PTR_FUN_110a459e0;
        uStack_f8 = 0x3ff0000000000000;
        pppppuStack_240 = (undefined *****)apppppuStack_110;
        pppppuStack_238 = pppppuStack_220;
        uStack_230 = 0;
        func_0x0001083e2eb4(&lStack_248,param_2,&pppppuStack_240);
        if (lStack_248 == 0) {
          *param_1 = 0;
          goto LAB_1083e1f80;
        }
        pppppuStack_260 = (undefined *****)unaff_x27;
        pppppuStack_258 = (undefined *****)unaff_x27;
        uStack_250 = 0;
        func_0x0001083e304c(&pppppuStack_268);
        if ((undefined ******)pppppuStack_268 == (undefined ******)0x0) {
          *param_1 = 0;
          goto LAB_1083e1f70;
        }
        pppppuStack_280 = pppppuStack_268;
        lStack_278 = lStack_248;
        uStack_270 = 0;
        func_0x0001083e304c(&lStack_288);
        if (lStack_288 == 0) {
          *param_1 = 0;
          goto LAB_1083e1f60;
        }
        pppppuStack_2a0 = (undefined *****)apppppuStack_110;
        lStack_298 = lStack_288;
        uStack_290 = 0;
        func_0x0001083e2eb4(&lStack_2a8,param_2,&pppppuStack_2a0);
        if (lStack_2a8 == 0) goto LAB_1083e1f3c;
        in_ZR = *(int *)(lStack_2a8 + 0xc) == 0x29;
        if (!(bool)in_ZR) goto LAB_1083e1f3c;
        unaff_d9 = *(double *)(lStack_2a8 + 0x18);
        in_ZR = unaff_d9 == 0.0;
        if (0.0 <= unaff_d9) goto code_r0x0001083e1e7c;
        pppppuStack_148 = (undefined *****)0x0;
        pppppuStack_150 = (undefined *****)0x0;
        dStack_138 = 0.0;
        ppppuStack_140 = (undefined ****)0x0;
        FUN_1083dcad4(param_1,param_2,*(undefined4 *)(ppppppuVar13 + 1),ppppppuVar13[2],
                      &pppppuStack_150);
        goto LAB_1083e1f40;
      }
      goto code_r0x0001083e1d48;
    }
code_r0x0001083e1dcc:
    *param_1 = 0;
    goto LAB_1083e1b6c;
  case (undefined ******)0x48:
  case (undefined ******)0x49:
    break;
  case (undefined ******)0x4d:
    break;
  case (undefined ******)0x4e:
code_r0x0001083e12fc:
    func_0x0001083e3040();
    FUN_1083e25a0();
    goto LAB_1083e1b6c;
  case (undefined ******)0x4f:
    break;
  case (undefined ******)0x50:
    break;
  case (undefined ******)0x51:
code_r0x0001083e1d80:
    func_0x0001083e3040();
    FUN_1083e266c();
    goto LAB_1083e1b6c;
  case (undefined ******)0x52:
    break;
  case (undefined ******)0x53:
    goto code_r0x0001083e1d5c;
  case (undefined ******)0x56:
    break;
  case (undefined ******)0x57:
    break;
  case (undefined ******)0x5d:
    unaff_x22 = (undefined ******)0x0;
    ppppppuVar20 = (undefined ******)0x0;
    while( true ) {
      func_0x0001083e32d0();
      func_0x0001083e3078();
      iVar16 = (int)unaff_x22;
      in_ZR = iVar16 == (int)ppppppuVar8;
      if ((int)ppppppuVar8 <= iVar16) break;
      ppppppuVar20 = (undefined ******)(long)(int)ppppppuVar20;
      for (iVar21 = 0; func_0x0001083e3078((*pppppuStack_360)[0xd]), iVar21 < (int)ppppppuVar8;
          iVar21 = iVar21 + 1) {
        func_0x0001083e32d0();
        func_0x0001083e3078();
        func_0x0001083e3034();
        ppppppuVar8 = ppppppuVar13;
        (*extraout_x8_01)();
        apppppuStack_110[(long)ppppppuVar20] = (undefined *****)(double)(float)(double)ppppppuVar8;
        ppppppuVar20 = (undefined ******)((long)ppppppuVar20 + 1);
      }
      unaff_x22 = (undefined ******)(ulong)(iVar16 + 1);
    }
    func_0x0001083e2f9c();
    FUN_1083dcad4();
    param_5 = ppppppuVar13;
    goto LAB_1083e1b6c;
  case (undefined ******)0x5e:
    break;
  case (undefined ******)0x5f:
code_r0x0001083e1270:
    func_0x0001083e3040();
    func_0x0001083e2970();
    goto LAB_1083e1b6c;
  case (undefined ******)0x60:
    func_0x0001083e3034(0x1083e2c0c);
    func_0x0001083e2fac();
    unaff_x22 = (undefined ******)(long)(double)ppppppuVar8;
    func_0x00010840ff9c((uint)unaff_x22 & 0xffff);
    ppppppuVar8 = (undefined ******)(double)SUB84(ppppppuVar8,0);
    apppppuStack_110[0] = (undefined *****)ppppppuVar8;
    func_0x00010840ff9c((uint)unaff_x22 >> 0x10);
    apppppuStack_110[1] = (undefined *****)(double)SUB84(ppppppuVar8,0);
    func_0x0001083e31c0();
    func_0x0001083e2f68();
    param_5 = ppppppuVar13;
    goto LAB_1083e1b6c;
  case (undefined ******)0x61:
    func_0x0001083e3034(0x1083e2c0c);
    func_0x0001083e2fac();
    ppppppuVar24 = (undefined ******)((double)(int)(short)(long)(double)ppppppuVar8 / 32767.0);
    ppppppuVar23 = (undefined ******)0x3ff0000000000000;
    if ((double)ppppppuVar24 <= 1.0) {
      ppppppuVar23 = ppppppuVar24;
    }
    apppppuStack_110[0] = (undefined *****)(undefined ******)0xbff0000000000000;
    if (-1.0 <= (double)ppppppuVar24) {
      apppppuStack_110[0] = (undefined *****)ppppppuVar23;
    }
    ppppppuVar23 = (undefined ******)((double)((int)(long)(double)ppppppuVar8 >> 0x10) / 32767.0);
    ppppppuVar8 = (undefined ******)0x3ff0000000000000;
    if ((double)ppppppuVar23 <= 1.0) {
      ppppppuVar8 = ppppppuVar23;
    }
    in_ZR = (double)ppppppuVar23 == -1.0;
    apppppuStack_110[1] = (undefined *****)(undefined ******)0xbff0000000000000;
    if (-1.0 <= (double)ppppppuVar23) {
      apppppuStack_110[1] = (undefined *****)ppppppuVar8;
    }
    func_0x0001083e31c0();
    func_0x0001083e2f68();
    param_5 = ppppppuVar13;
    goto LAB_1083e1b6c;
  case (undefined ******)0x63:
    func_0x0001083e3034(0x1083e2c0c);
    func_0x0001083e2fac();
    apppppuStack_110[0] =
         (undefined *****)((double)((uint)(long)(double)ppppppuVar8 & 0xffff) / 65535.0);
    apppppuStack_110[1] =
         (undefined *****)((double)((uint)(long)(double)ppppppuVar8 >> 0x10) / 65535.0);
    func_0x0001083e31c0();
    func_0x0001083e2f68();
    param_5 = ppppppuVar13;
    goto LAB_1083e1b6c;
  }
  func_0x0001083e3040();
  FUN_1083e24c0();
  goto LAB_1083e1b6c;
}



/* Entry: 1083e22b0; end: 1083e237b;  */

void FUN_1083e22b0(undefined8 param_1,long *param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  puVar2 = auStack_48;
  func_0x000107c278b8(puVar2,&DAT_10f68e8ec);
  FUN_10831cc90();
  for (param_3 = param_3 << 3; param_3 != 0; param_3 = param_3 + -8) {
    uVar1 = 0x113254db0;
    if (((ulong)puVar2 & 1) == 0) {
      uVar1 = 0x113254dc8;
    }
    func_0x0001004c3ca0(auStack_48,uVar1);
    FUN_10831d8f8(auStack_60,*(undefined8 *)(*param_2 + 0x10));
    func_0x0001004c3ca0(auStack_48,auStack_60);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_60);
    puVar2 = (undefined1 *)0x0;
    param_2 = param_2 + 1;
  }
  func_0x000100456794(param_1,auStack_48,&DAT_10f684600);
  func_0x0001083e30cc();
  return;
}



/* Entry: 1083e237c; end: 1083e2403;  */

undefined8 FUN_1083e237c(long param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  
  puVar3 = param_2;
  (**(code **)(*(long *)param_2 + 0x18))();
  uVar1 = *puVar3;
  if ((uVar1 & 0xe0000) != 0) {
    iVar2 = (int)*(undefined8 *)(param_2 + 8);
    func_0x0001083e245c();
    if (iVar2 != 0) {
      if (*(int *)(param_1 + 0xc) == 0x32) {
        puVar3 = *(uint **)(param_1 + 0x18);
        (**(code **)(*(long *)puVar3 + 0x18))();
        if ((*puVar3 & 0xe0000) == (uVar1 & 0xe0000)) {
          return 1;
        }
      }
      return 0;
    }
  }
  return 1;
}



/* Entry: 1083e2404; end: 1083e243f;  */

void FUN_1083e2404(void)

{
  func_0x0001083e3278();
  return;
}



/* Entry: 1083e2440; end: 1083e2493;  */

void FUN_1083e2440(long param_1)

{
  FUN_1083f06ac(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 1083e2494; end: 1083e24bf;  */

undefined8 * FUN_1083e2494(undefined8 *param_1)

{
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  return param_1;
}


