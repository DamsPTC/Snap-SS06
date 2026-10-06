/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1093651bc; end: 1093651bf;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1093651bc(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar2 = uVar3;
        func_0x0001093503d0(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        func_0x000109348e48();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        uVar2 = uVar3;
        func_0x000109350414(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar2;
      }
      else {
        FUN_109348af4();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        uVar2 = uVar3;
        func_0x00010936179c(uVar3,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar2;
      }
      else {
        FUN_10934a194();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        uVar2 = uVar3;
        FUN_109365894(uVar3,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar2;
      }
      else {
        FUN_109364bf4();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        func_0x000109350458(uVar3,*(undefined8 *)(param_2 + 0x38));
        *(ulong *)(param_1 + 0x38) = uVar3;
      }
      else {
        FUN_109360dbc();
      }
    }
  }
  if (*(long *)(param_2 + 0x40) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_2 + 0x40);
  }
  if (*(int *)(param_2 + 0x48) != 0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_2 + 0x48);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1093651c0; end: 109365337;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1093651c0(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar2 = uVar3;
        func_0x0001093503d0(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        func_0x000109348e48();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        uVar2 = uVar3;
        func_0x000109350414(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar2;
      }
      else {
        FUN_109348af4();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        uVar2 = uVar3;
        func_0x00010936179c(uVar3,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar2;
      }
      else {
        FUN_10934a194();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        uVar2 = uVar3;
        FUN_109365894(uVar3,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar2;
      }
      else {
        FUN_109364bf4();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        func_0x000109350458(uVar3,*(undefined8 *)(param_2 + 0x38));
        *(ulong *)(param_1 + 0x38) = uVar3;
      }
      else {
        FUN_109360dbc();
      }
    }
  }
  if (*(long *)(param_2 + 0x40) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_2 + 0x40);
  }
  if (*(int *)(param_2 + 0x48) != 0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_2 + 0x48);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 109365338; end: 1093653ab;  */

undefined8 * FUN_109365338(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110af3f88;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_2;
  if (*(int *)(param_3 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 2,param_3 + 0x10);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  return param_1;
}



/* Entry: 1093653ac; end: 1093653df;  */

long FUN_1093653ac(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_109365714(param_1 + 0x10);
  return param_1;
}



/* Entry: 1093653e0; end: 1093653e3;  */

long FUN_1093653e0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_109365714(param_1 + 0x10);
  return param_1;
}



/* Entry: 1093653e4; end: 1093653f7;  */

void FUN_1093653e4(void)

{
  FUN_1093653ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1093653f8; end: 109365403;  */

undefined ** FUN_1093653f8(void)

{
  return &PTR_DAT_110af4070;
}



/* Entry: 109365404; end: 10936544b;  */

void FUN_109365404(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10936544c; end: 109365667;  */

long * FUN_10936544c(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  long lStack_50;
  ulong uStack_48;
  long lVar9;
  
  iVar8 = *(int *)(param_1 + 0x18);
  if (iVar8 != 0) {
    iVar7 = 0;
    plVar6 = param_2;
    do {
      uVar4 = *(ulong *)(param_1 + 0x10);
      puVar1 = (ulong *)(param_1 + 0x10);
      if ((uVar4 & 1) != 0) {
        puVar1 = (ulong *)(uVar4 + (long)iVar7 * 8 + 7);
      }
      param_2 = (long *)0x1;
      func_0x000107c303cc(1,*puVar1,*(undefined4 *)(*puVar1 + 0x14),plVar6,param_3);
      iVar7 = iVar7 + 1;
      plVar6 = param_2;
    } while (iVar8 != iVar7);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uStack_48 < 0) {
      lStack_50 = *(long *)(uVar4 + 8);
      uStack_48 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lStack_50 = uVar4 + 8;
    }
    uVar3 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar3) {
      lVar9 = (*param_3 - (long)param_2) + 0x10;
      if ((int)lVar9 < (int)uVar3) {
        do {
          iVar8 = (int)lVar9;
          _memcpy(param_2,lStack_50,(long)iVar8);
          uVar3 = (int)uStack_48 - iVar8;
          uStack_48 = (ulong)uVar3;
          lStack_50 = lStack_50 + iVar8;
          plVar5 = (long *)*param_3;
          plVar6 = (long *)((long)param_2 + (long)iVar8);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            plVar6 = (long *)((long)plVar2 + (long)((int)plVar6 - (int)plVar5));
            plVar5 = (long *)*param_3;
            param_2 = plVar6;
          } while (plVar5 <= plVar6);
          lVar9 = (long)plVar5 + (0x10 - (long)param_2);
        } while ((int)lVar9 < (int)uVar3);
      }
      uStack_48._0_4_ = uVar3;
      _memcpy(param_2,lStack_50,(long)(int)(uint)uStack_48);
      param_2 = (long *)((long)param_2 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(param_2,lStack_50,uStack_48 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar3);
    }
  }
  return param_2;
}



/* Entry: 109365668; end: 10936566b;  */

void FUN_109365668(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10936566c; end: 1093656bf;  */

void FUN_10936566c(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1093656c0; end: 1093656df;  */

void FUN_1093656c0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4d80e0(param_2,0x30);
  }
  *puVar1 = &PTR_FUN_110af3e98;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 1093656e0; end: 109365713;  */

long * FUN_1093656e0(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 109365714; end: 109365747;  */

long * FUN_109365714(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 109365748; end: 109365893;  */

void FUN_109365748(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x30);
  }
  *puVar1 = &PTR_FUN_110af3e98;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 109365894; end: 109365923;  */

undefined8 * FUN_109365894(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x30);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110af3ee8;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(puVar1 + 2,param_2 + 0x10);
  }
  *(undefined4 *)(puVar1 + 5) = 0;
  return puVar1;
}



/* Entry: 109365924; end: 10936594f;  */

long * FUN_109365924(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  int iVar9;
  char acStack_78 [16];
  long lStack_68;
  
  if (((ulong)param_1 & 1) != 0) {
    return param_1;
  }
  puVar7 = &UNK_10f566c1f;
  plVar5 = (long *)PTR___ZNSt3__14cerrE_110346738;
  FUN_109365950(PTR___ZNSt3__14cerrE_110346738,&UNK_10f566c1f);
  FUN_109365984();
  _abort();
  puVar6 = puVar7;
  _strlen(puVar7);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryC1ERS3_(acStack_78,plVar5);
  if (acStack_78[0] == '\x01') {
    puVar1 = (undefined *)((long)plVar5 + *(long *)(*plVar5 + -0x18));
    lVar8 = *(long *)(puVar1 + 0x28);
    uVar3 = *(uint *)(puVar1 + 8);
    iVar9 = *(int *)(puVar1 + 0x90);
    if (iVar9 == -1) {
      __ZNKSt3__18ios_base6getlocEv(&lStack_68,puVar1);
      plVar4 = &lStack_68;
      __ZNKSt3__16locale9use_facetERNS0_2idE(plVar4,PTR___ZNSt3__15ctypeIcE2idE_110346770);
      (**(code **)(*plVar4 + 0x38))();
      __ZNSt3__16localeD1Ev(&lStack_68);
      iVar9 = (int)plVar4;
      *(int *)(puVar1 + 0x90) = iVar9;
    }
    puVar2 = puVar7 + (long)puVar6;
    if ((uVar3 & 0xb0) != 0x20) {
      puVar2 = puVar7;
    }
    FUN_1092b4f20(lVar8,puVar7,puVar2,puVar7 + (long)puVar6,puVar1,(int)(char)iVar9);
    if (lVar8 == 0) {
      puVar7 = (undefined *)((long)plVar5 + *(long *)(*plVar5 + -0x18));
      __ZNSt3__18ios_base5clearEj(puVar7,*(uint *)(puVar7 + 0x20) | 5);
    }
  }
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryD1Ev(acStack_78);
  return plVar5;
}



/* Entry: 109365950; end: 109365983;  */

long * FUN_109365950(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  char acStack_68 [16];
  long lStack_58;
  
  lVar5 = param_2;
  _strlen(param_2);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryC1ERS3_(acStack_68,param_1);
  if (acStack_68[0] == '\x01') {
    lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
    lVar6 = *(long *)(lVar1 + 0x28);
    uVar3 = *(uint *)(lVar1 + 8);
    iVar7 = *(int *)(lVar1 + 0x90);
    if (iVar7 == -1) {
      __ZNKSt3__18ios_base6getlocEv(&lStack_58,lVar1);
      plVar4 = &lStack_58;
      __ZNKSt3__16locale9use_facetERNS0_2idE(plVar4,PTR___ZNSt3__15ctypeIcE2idE_110346770);
      (**(code **)(*plVar4 + 0x38))();
      __ZNSt3__16localeD1Ev(&lStack_58);
      iVar7 = (int)plVar4;
      *(int *)(lVar1 + 0x90) = iVar7;
    }
    lVar2 = param_2 + lVar5;
    if ((uVar3 & 0xb0) != 0x20) {
      lVar2 = param_2;
    }
    FUN_1092b4f20(lVar6,param_2,lVar2,param_2 + lVar5,lVar1,(int)(char)iVar7);
    if (lVar6 == 0) {
      lVar5 = (long)param_1 + *(long *)(*param_1 + -0x18);
      __ZNSt3__18ios_base5clearEj(lVar5,*(uint *)(lVar5 + 0x20) | 5);
    }
  }
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryD1Ev(acStack_68);
  return param_1;
}



/* Entry: 109365984; end: 109365a13;  */

long * FUN_109365984(long *param_1)

{
  long *plVar1;
  long lStack_28;
  
  __ZNKSt3__18ios_base6getlocEv(&lStack_28,(long)param_1 + *(long *)(*param_1 + -0x18));
  plVar1 = &lStack_28;
  __ZNKSt3__16locale9use_facetERNS0_2idE(plVar1,PTR___ZNSt3__15ctypeIcE2idE_110346770);
  (**(code **)(*plVar1 + 0x38))();
  __ZNSt3__16localeD1Ev(&lStack_28);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE3putEc(param_1,plVar1);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5flushEv(param_1);
  return param_1;
}



/* Entry: 109365a14; end: 109365aff;  */

long FUN_109365a14(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  undefined8 param_7,byte param_8)

{
  ulong uVar1;
  ushort *puVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uVar13;
  short sVar14;
  short sVar15;
  undefined1 auVar16 [16];
  short sVar17;
  undefined8 uVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  undefined1 auVar22 [16];
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  undefined8 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined8 uVar30;
  short sVar31;
  short sVar32;
  short sVar33;
  undefined8 uVar34;
  undefined1 auVar35 [16];
  undefined8 uVar36;
  undefined8 uVar37;
  short sVar38;
  short sVar39;
  undefined8 uVar40;
  undefined1 auVar41 [16];
  short sVar42;
  short sVar43;
  short sVar44;
  short sVar45;
  byte *pbVar46;
  bool bVar47;
  short *psVar48;
  short *psVar76;
  short *psVar104;
  short *psVar134;
  short *psVar165;
  ulong *puVar196;
  long lVar197;
  long lVar198;
  long lVar199;
  long lVar200;
  long lVar201;
  long lVar202;
  int iVar203;
  undefined *puVar204;
  ulong uVar205;
  int iVar206;
  short *psVar207;
  byte *pbVar208;
  byte *pbVar209;
  int iVar210;
  byte *pbVar211;
  byte *pbVar212;
  ushort uVar213;
  long lVar214;
  short *psVar215;
  ushort *puVar216;
  long lVar217;
  byte *pbVar218;
  ulong uVar219;
  ulong uVar220;
  short *psVar221;
  short *psVar222;
  int iVar223;
  short *psVar224;
  short *psVar225;
  ushort *puVar226;
  short *psVar227;
  ulong uVar228;
  ushort *puVar229;
  ulong uVar230;
  ulong uVar231;
  long lVar232;
  short *psVar233;
  undefined8 *unaff_x29;
  undefined1 uVar234;
  undefined1 uVar235;
  undefined1 uVar236;
  undefined1 uVar237;
  undefined1 uVar238;
  undefined1 uVar239;
  undefined8 uVar240;
  undefined8 uVar241;
  short sVar242;
  short sVar243;
  byte *pbStack_138;
  ulong uStack_f8;
  long lStack_f0;
  byte *pbStack_d0;
  long lStack_c8;
  long alStack_c0 [3];
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  byte abStack_89 [17];
  short *psVar49;
  short *psVar50;
  short *psVar51;
  short *psVar52;
  short *psVar53;
  short *psVar54;
  short *psVar55;
  short *psVar56;
  short *psVar57;
  short *psVar58;
  short *psVar59;
  short *psVar60;
  short *psVar61;
  short *psVar62;
  short *psVar63;
  short *psVar64;
  short *psVar65;
  short *psVar66;
  short *psVar67;
  short *psVar68;
  short *psVar69;
  short *psVar70;
  short *psVar71;
  short *psVar72;
  short *psVar73;
  short *psVar74;
  short *psVar75;
  short *psVar77;
  short *psVar78;
  short *psVar79;
  short *psVar80;
  short *psVar81;
  short *psVar82;
  short *psVar83;
  short *psVar84;
  short *psVar85;
  short *psVar86;
  short *psVar87;
  short *psVar88;
  short *psVar89;
  short *psVar90;
  short *psVar91;
  short *psVar92;
  short *psVar93;
  short *psVar94;
  short *psVar95;
  short *psVar96;
  short *psVar97;
  short *psVar98;
  short *psVar99;
  short *psVar100;
  short *psVar101;
  short *psVar102;
  short *psVar103;
  short *psVar105;
  short *psVar106;
  short *psVar107;
  short *psVar108;
  short *psVar109;
  short *psVar110;
  short *psVar111;
  short *psVar112;
  short *psVar113;
  short *psVar114;
  short *psVar115;
  short *psVar116;
  short *psVar117;
  short *psVar118;
  short *psVar119;
  short *psVar120;
  short *psVar121;
  short *psVar122;
  short *psVar123;
  short *psVar124;
  short *psVar125;
  short *psVar126;
  short *psVar127;
  short *psVar128;
  short *psVar129;
  short *psVar130;
  short *psVar131;
  short *psVar132;
  short *psVar133;
  short *psVar135;
  short *psVar136;
  short *psVar137;
  short *psVar138;
  short *psVar139;
  short *psVar140;
  short *psVar141;
  short *psVar142;
  short *psVar143;
  short *psVar144;
  short *psVar145;
  short *psVar146;
  short *psVar147;
  short *psVar148;
  short *psVar149;
  short *psVar150;
  short *psVar151;
  short *psVar152;
  short *psVar153;
  short *psVar154;
  short *psVar155;
  short *psVar156;
  short *psVar157;
  short *psVar158;
  short *psVar159;
  short *psVar160;
  short *psVar161;
  short *psVar162;
  short *psVar163;
  short *psVar164;
  short *psVar166;
  short *psVar167;
  short *psVar168;
  short *psVar169;
  short *psVar170;
  short *psVar171;
  short *psVar172;
  short *psVar173;
  short *psVar174;
  short *psVar175;
  short *psVar176;
  short *psVar177;
  short *psVar178;
  short *psVar179;
  short *psVar180;
  short *psVar181;
  short *psVar182;
  short *psVar183;
  short *psVar184;
  short *psVar185;
  short *psVar186;
  short *psVar187;
  short *psVar188;
  short *psVar189;
  short *psVar190;
  short *psVar191;
  short *psVar192;
  short *psVar193;
  short *psVar194;
  short *psVar195;
  
  uVar205 = param_4 + param_1;
  uVar231 = param_4 + param_2 + param_5;
  if (uVar231 <= uVar205) {
    iVar206 = (int)param_3;
    if (iVar206 == 2) {
      uVar228 = 0;
      if (-1 < (long)uVar205) {
        uVar228 = uVar231 - 1;
      }
    }
    else if (iVar206 - 3U < 2) {
      if (uVar231 == 1) {
        return 0;
      }
      lVar232 = -2;
      if (iVar206 != 4) {
        lVar232 = -1;
      }
      do {
        uVar228 = (lVar232 + uVar231 * 2) - uVar205;
        bVar47 = -1 < (long)uVar205;
        uVar205 = ~uVar205 + (ulong)(iVar206 == 4);
        if (bVar47) {
          uVar205 = uVar228;
        }
        uVar228 = uVar205;
      } while (uVar231 <= uVar205);
    }
    else if (iVar206 == 1) {
      uVar228 = 0xffffffffffffffff;
    }
    else {
      if (iVar206 != 5) {
        puVar204 = &UNK_10f566c1f;
        puVar196 = (ulong *)PTR___ZNSt3__14cerrE_110346738;
        abStack_89[0] = param_8;
        FUN_109365950();
        FUN_109365984();
        _abort();
        iVar203 = (int)puVar204;
        iVar210 = (int)param_7;
        FUN_109365924(((iVar203 - 1U < 4 && 7 < *puVar196) && 1 < puVar196[1]) && iVar210 - 1U < 5);
        uVar205 = *puVar196;
        lVar232 = (long)iVar203;
        uVar231 = uVar205 * lVar232;
        lStack_a8 = 0;
        lStack_a0 = 0;
        uStack_98 = 0;
        iVar206 = iVar203 << 1;
        if (iVar210 == 1) {
          func_0x000108a39c34(&lStack_a8,uVar231 + (long)(iVar203 << 2),abStack_89);
          pbStack_138 = (byte *)(lStack_a8 + iVar206);
          uVar205 = *puVar196;
        }
        else {
          pbStack_138 = (byte *)0x0;
        }
        lVar197 = -1;
        FUN_109365a14(0xffffffffffffffff,uVar205,param_7,*unaff_x29,unaff_x29[1]);
        lVar198 = -2;
        FUN_109365a14(0xfffffffffffffffe,*puVar196,param_7,*unaff_x29,unaff_x29[1]);
        uVar205 = *puVar196;
        FUN_109365a14(uVar205,uVar205,param_7,*unaff_x29,unaff_x29[1]);
        lVar199 = *puVar196 + 1;
        FUN_109365a14(lVar199,*puVar196,param_7,*unaff_x29,unaff_x29[1]);
        FUN_109366414(alStack_c0,(*puVar196 + 4) * lVar232 + 0x10);
        psVar233 = (short *)(alStack_c0[0] + (long)iVar206 * 2 + 0x1fU & 0xffffffffffffffe0);
        puVar2 = (ushort *)(psVar233 + uVar231);
        if ((0 < iVar203) && (iVar210 == 1)) {
          uVar213 = (ushort)abStack_89[0];
          uVar228 = (ulong)puVar204 & 0xffffffff;
          iVar223 = iVar203 * -2;
          puVar216 = puVar2 + lVar232;
          puVar226 = puVar2;
          puVar229 = (ushort *)(psVar233 + -lVar232);
          do {
            *puVar229 = uVar213;
            psVar233[iVar223] = uVar213;
            iVar223 = iVar223 + 1;
            *puVar226 = uVar213;
            *puVar216 = uVar213;
            uVar228 = uVar228 - 1;
            puVar216 = puVar216 + 1;
            puVar226 = puVar226 + 1;
            puVar229 = puVar229 + 1;
          } while (uVar228 != 0);
        }
        uVar228 = puVar196[1];
        if (uVar228 != 0) {
          uStack_f8 = 0;
          uVar220 = uVar231 - 8;
          lStack_c8 = param_3 + 0x140;
          pbStack_d0 = (byte *)(param_3 + 8);
          lVar217 = param_3;
          lStack_f0 = param_5;
          do {
            lVar200 = uStack_f8 - 2;
            FUN_109365a14(lVar200,uVar228,iVar210,unaff_x29[2],unaff_x29[3]);
            lVar201 = uStack_f8 - 1;
            FUN_109365a14(lVar201,puVar196[1],iVar210,unaff_x29[2],unaff_x29[3]);
            uVar1 = uStack_f8 + 1;
            uVar228 = uVar1;
            FUN_109365a14(uVar1,puVar196[1],iVar210,unaff_x29[2],unaff_x29[3]);
            lVar202 = uStack_f8 + 2;
            FUN_109365a14(lVar202,puVar196[1],iVar210,unaff_x29[2],unaff_x29[3]);
            lVar214 = unaff_x29[2];
            pbVar4 = pbStack_138;
            if (lVar200 + lVar214 < 0 == SCARRY8(lVar200,lVar214)) {
              pbVar4 = (byte *)(param_3 + lVar200 * param_4);
            }
            pbVar5 = pbStack_138;
            if (lVar201 + lVar214 < 0 == SCARRY8(lVar201,lVar214)) {
              pbVar5 = (byte *)(param_3 + lVar201 * param_4);
            }
            pbVar6 = pbStack_138;
            if ((long)(uVar228 + lVar214) < 0 == SCARRY8(uVar228,lVar214)) {
              pbVar6 = (byte *)(param_3 + uVar228 * param_4);
            }
            pbVar7 = pbStack_138;
            if (lVar202 + lVar214 < 0 == SCARRY8(lVar202,lVar214)) {
              pbVar7 = (byte *)(param_3 + lVar202 * param_4);
            }
            lVar202 = -2;
            uVar228 = 0;
            psVar207 = psVar233;
            pbVar46 = pbStack_d0;
            pbVar208 = pbVar6;
            pbVar209 = pbVar5;
            pbVar211 = pbVar7;
            pbVar212 = pbVar4;
            psVar215 = psVar233;
            do {
              pbVar218 = pbVar46;
              uVar219 = uVar228;
              psVar215 = psVar215 + 8;
              pbVar212 = pbVar212 + 8;
              pbVar211 = pbVar211 + 8;
              pbVar209 = pbVar209 + 8;
              pbVar208 = pbVar208 + 8;
              auVar8._8_8_ = 0;
              auVar8._0_8_ = uVar219;
              Hint_Prefetch(lStack_c8 +
                            param_4 * (lVar202 -
                                      ((SUB168(auVar8 * ZEXT816(0xcccccccccccccccd),8) &
                                       0xfffffffffffffffc) + uVar219 / 5)) + uVar219,0,0,0);
              uVar13 = *(undefined8 *)(pbVar4 + uVar219);
              uVar18 = *(undefined8 *)(pbVar5 + uVar219);
              uVar240 = *(undefined8 *)(lVar217 + uVar219);
              uVar241 = *(undefined8 *)(pbVar6 + uVar219);
              uVar36 = *(undefined8 *)(pbVar7 + uVar219);
              sVar14 = (ushort)(byte)((ulong)uVar36 >> 8) + (ushort)(byte)((ulong)uVar13 >> 8) +
                       (ushort)(byte)((ulong)uVar240 >> 8) * 6 +
                       ((ushort)(byte)((ulong)uVar241 >> 8) + (ushort)(byte)((ulong)uVar18 >> 8)) *
                       4;
              sVar242 = (ushort)(byte)((ulong)uVar36 >> 0x10) +
                        (ushort)(byte)((ulong)uVar13 >> 0x10) +
                        (ushort)(byte)((ulong)uVar240 >> 0x10) * 6 +
                        ((ushort)(byte)((ulong)uVar241 >> 0x10) +
                        (ushort)(byte)((ulong)uVar18 >> 0x10)) * 4;
              sVar15 = (ushort)(byte)((ulong)uVar36 >> 0x18) + (ushort)(byte)((ulong)uVar13 >> 0x18)
                       + (ushort)(byte)((ulong)uVar240 >> 0x18) * 6 +
                       ((ushort)(byte)((ulong)uVar241 >> 0x18) +
                       (ushort)(byte)((ulong)uVar18 >> 0x18)) * 4;
              *(ulong *)(psVar207 + 4) =
                   CONCAT26((ushort)(byte)((ulong)uVar36 >> 0x38) +
                            (ushort)(byte)((ulong)uVar13 >> 0x38) +
                            (ushort)(byte)((ulong)uVar240 >> 0x38) * 6 +
                            ((ushort)(byte)((ulong)uVar241 >> 0x38) +
                            (ushort)(byte)((ulong)uVar18 >> 0x38)) * 4,
                            CONCAT24((ushort)(byte)((ulong)uVar36 >> 0x30) +
                                     (ushort)(byte)((ulong)uVar13 >> 0x30) +
                                     (ushort)(byte)((ulong)uVar240 >> 0x30) * 6 +
                                     ((ushort)(byte)((ulong)uVar241 >> 0x30) +
                                     (ushort)(byte)((ulong)uVar18 >> 0x30)) * 4,
                                     CONCAT22((ushort)(byte)((ulong)uVar36 >> 0x28) +
                                              (ushort)(byte)((ulong)uVar13 >> 0x28) +
                                              (ushort)(byte)((ulong)uVar240 >> 0x28) * 6 +
                                              ((ushort)(byte)((ulong)uVar241 >> 0x28) +
                                              (ushort)(byte)((ulong)uVar18 >> 0x28)) * 4,
                                              (ushort)(byte)((ulong)uVar36 >> 0x20) +
                                              (ushort)(byte)((ulong)uVar13 >> 0x20) +
                                              (ushort)(byte)((ulong)uVar240 >> 0x20) * 6 +
                                              ((ushort)(byte)((ulong)uVar241 >> 0x20) +
                                              (ushort)(byte)((ulong)uVar18 >> 0x20)) * 4)));
              *(ulong *)psVar207 =
                   CONCAT17((char)((ushort)sVar15 >> 8),
                            CONCAT16((char)sVar15,
                                     CONCAT15((char)((ushort)sVar242 >> 8),
                                              CONCAT14((char)sVar242,
                                                       CONCAT13((char)((ushort)sVar14 >> 8),
                                                                CONCAT12((char)sVar14,
                                                                         (ushort)(byte)uVar36 +
                                                                         (ushort)(byte)uVar13 +
                                                                         (ushort)(byte)uVar240 * 6 +
                                                                         ((ushort)(byte)uVar241 +
                                                                         (ushort)(byte)uVar18) * 4))
                                                      ))));
              uVar228 = uVar219 + 8;
              lVar202 = lVar202 + 8;
              psVar207 = psVar207 + 8;
              pbVar46 = pbVar218 + 8;
            } while (uVar228 <= uVar220);
            if (uVar228 < uVar231) {
              lVar202 = uVar220 - uVar219;
              do {
                *psVar215 = (ushort)*pbVar211 + (ushort)*pbVar212 +
                            ((ushort)*pbVar208 + (ushort)*pbVar209) * 4 + (ushort)*pbVar218 * 6;
                lVar202 = lVar202 + -1;
                psVar215 = psVar215 + 1;
                pbVar218 = pbVar218 + 1;
                pbVar208 = pbVar208 + 1;
                pbVar209 = pbVar209 + 1;
                pbVar211 = pbVar211 + 1;
                pbVar212 = pbVar212 + 1;
              } while (lVar202 != 0);
            }
            if (0 < iVar203 && iVar210 != 1) {
              uVar228 = 0;
              do {
                (psVar233 + -lVar232)[uVar228] = psVar233[lVar197 * lVar232 + uVar228];
                psVar233[iVar203 * -2 + (int)uVar228] = psVar233[lVar198 * lVar232 + uVar228];
                puVar2[uVar228] = psVar233[uVar205 * lVar232 + uVar228];
                puVar2[lVar232 + uVar228] = psVar233[lVar199 * lVar232 + uVar228];
                uVar228 = uVar228 + 1;
              } while (((ulong)puVar204 & 0xffffffff) != uVar228);
            }
            if (iVar203 < 3) {
              if (iVar203 == 1) {
                uVar228 = 0;
                psVar215 = psVar233;
                do {
                  Hint_Prefetch(psVar215 + 0xa0,0,0,0);
                  uVar18 = *(undefined8 *)(psVar215 + 2);
                  uVar13 = *(undefined8 *)(psVar215 + -2);
                  uVar241 = *(undefined8 *)(psVar215 + 6);
                  uVar240 = *(undefined8 *)(psVar215 + 2);
                  uVar27 = *(undefined8 *)(psVar215 + 3);
                  uVar36 = *(undefined8 *)(psVar215 + -1);
                  uVar34 = *(undefined8 *)(psVar215 + 5);
                  uVar30 = *(undefined8 *)(psVar215 + 1);
                  uVar40 = *(undefined8 *)(psVar215 + 4);
                  uVar37 = *(undefined8 *)psVar215;
                  sVar14 = (short)uVar240 + (short)uVar13 + (short)uVar37 * 6 +
                           ((short)uVar30 + (short)uVar36) * 4;
                  sVar242 = (short)((ulong)uVar240 >> 0x10) + (short)((ulong)uVar13 >> 0x10) +
                            (short)((ulong)uVar37 >> 0x10) * 6 +
                            ((short)((ulong)uVar30 >> 0x10) + (short)((ulong)uVar36 >> 0x10)) * 4;
                  uVar234 = (undefined1)sVar242;
                  uVar235 = (undefined1)((ushort)sVar242 >> 8);
                  sVar242 = (short)((ulong)uVar240 >> 0x20) + (short)((ulong)uVar13 >> 0x20) +
                            (short)((ulong)uVar37 >> 0x20) * 6 +
                            ((short)((ulong)uVar30 >> 0x20) + (short)((ulong)uVar36 >> 0x20)) * 4;
                  uVar236 = (undefined1)sVar242;
                  uVar237 = (undefined1)((ushort)sVar242 >> 8);
                  sVar242 = (short)((ulong)uVar240 >> 0x30) + (short)((ulong)uVar13 >> 0x30) +
                            (short)((ulong)uVar37 >> 0x30) * 6 +
                            ((short)((ulong)uVar30 >> 0x30) + (short)((ulong)uVar36 >> 0x30)) * 4;
                  uVar238 = (undefined1)sVar242;
                  uVar239 = (undefined1)((ushort)sVar242 >> 8);
                  auVar10[2] = uVar234;
                  auVar10._0_2_ = sVar14;
                  auVar10[3] = uVar235;
                  auVar10[4] = uVar236;
                  auVar10[5] = uVar237;
                  auVar10[6] = uVar238;
                  auVar10[7] = uVar239;
                  auVar10._8_2_ =
                       (short)uVar241 + (short)uVar18 + (short)uVar40 * 6 +
                       ((short)uVar34 + (short)uVar27) * 4;
                  auVar10._10_2_ =
                       (short)((ulong)uVar241 >> 0x10) + (short)((ulong)uVar18 >> 0x10) +
                       (short)((ulong)uVar40 >> 0x10) * 6 +
                       ((short)((ulong)uVar34 >> 0x10) + (short)((ulong)uVar27 >> 0x10)) * 4;
                  auVar10._12_2_ =
                       (short)((ulong)uVar241 >> 0x20) + (short)((ulong)uVar18 >> 0x20) +
                       (short)((ulong)uVar40 >> 0x20) * 6 +
                       ((short)((ulong)uVar34 >> 0x20) + (short)((ulong)uVar27 >> 0x20)) * 4;
                  auVar10._14_2_ =
                       (short)((ulong)uVar241 >> 0x30) + (short)((ulong)uVar18 >> 0x30) +
                       (short)((ulong)uVar40 >> 0x30) * 6 +
                       ((short)((ulong)uVar34 >> 0x30) + (short)((ulong)uVar27 >> 0x30)) * 4;
                  uVar13 = NEON_raddhn(CONCAT17(uVar239,CONCAT16(uVar238,CONCAT15(uVar237,CONCAT14(
                                                  uVar236,CONCAT13(uVar235,CONCAT12(uVar234,sVar14))
                                                  )))),auVar10,ZEXT216(0),2);
                  *(undefined8 *)(lStack_f0 + uVar228) = uVar13;
                  uVar228 = uVar228 + 8;
                  psVar215 = psVar215 + 8;
                } while (uVar228 <= uVar220);
                goto LAB_1093661b8;
              }
              if (iVar203 == 2) {
                uVar228 = 0;
                psVar215 = psVar233;
                do {
                  Hint_Prefetch(psVar215 + 0xa0,0,0,0);
                  sVar23 = (psVar215[3] + psVar215[-1]) * 4;
                  sVar24 = (psVar215[5] + psVar215[1]) * 4;
                  sVar25 = (psVar215[7] + psVar215[3]) * 4;
                  sVar26 = (psVar215[9] + psVar215[5]) * 4;
                  sVar31 = psVar215[-2] + psVar215[2] * 6 + psVar215[6] +
                           (psVar215[4] + *psVar215) * 4;
                  sVar32 = *psVar215 + psVar215[4] * 6 + psVar215[8] +
                           (psVar215[6] + psVar215[2]) * 4;
                  sVar33 = psVar215[2] + psVar215[6] * 6 + psVar215[10] +
                           (psVar215[8] + psVar215[4]) * 4;
                  sVar17 = psVar215[-3] + psVar215[1] * 6;
                  sVar19 = psVar215[-1] + psVar215[3] * 6;
                  sVar20 = psVar215[1] + psVar215[5] * 6;
                  sVar21 = psVar215[3] + psVar215[7] * 6;
                  sVar14 = sVar19 + psVar215[7] + sVar24;
                  sVar242 = sVar20 + psVar215[9] + sVar25;
                  sVar15 = sVar21 + psVar215[0xb] + sVar26;
                  auVar28[2] = (char)sVar31;
                  auVar28._0_2_ =
                       psVar215[-4] + *psVar215 * 6 + psVar215[4] + (psVar215[2] + psVar215[-2]) * 4
                  ;
                  auVar28[3] = (char)((ushort)sVar31 >> 8);
                  auVar28[4] = (char)sVar32;
                  auVar28[5] = (char)((ushort)sVar32 >> 8);
                  auVar28[6] = (char)sVar33;
                  auVar28[7] = (char)((ushort)sVar33 >> 8);
                  auVar28._8_2_ =
                       psVar215[4] + psVar215[8] * 6 + psVar215[0xc] +
                       (psVar215[10] + psVar215[6]) * 4;
                  auVar28._10_2_ =
                       psVar215[6] + psVar215[10] * 6 + psVar215[0xe] +
                       (psVar215[0xc] + psVar215[8]) * 4;
                  auVar28._12_2_ =
                       psVar215[8] + psVar215[0xc] * 6 + psVar215[0x10] +
                       (psVar215[0xe] + psVar215[10]) * 4;
                  auVar28._14_2_ =
                       psVar215[10] + psVar215[0xe] * 6 + psVar215[0x12] +
                       (psVar215[0x10] + psVar215[0xc]) * 4;
                  uVar13 = NEON_raddhn(CONCAT17((char)((ushort)sVar21 >> 8),
                                                CONCAT16((char)sVar21,
                                                         CONCAT15((char)((ushort)sVar20 >> 8),
                                                                  CONCAT14((char)sVar20,
                                                                           CONCAT13((char)((ushort)
                                                  sVar19 >> 8),CONCAT12((char)sVar19,sVar17)))))),
                                       auVar28,ZEXT216(0),2);
                  auVar9[2] = (char)sVar14;
                  auVar9._0_2_ = sVar17 + psVar215[5] + sVar23;
                  auVar9[3] = (char)((ushort)sVar14 >> 8);
                  auVar9[4] = (char)sVar242;
                  auVar9[5] = (char)((ushort)sVar242 >> 8);
                  auVar9[6] = (char)sVar15;
                  auVar9[7] = (char)((ushort)sVar15 >> 8);
                  auVar9._8_2_ = psVar215[5] + psVar215[9] * 6 + psVar215[0xd] +
                                 (psVar215[0xb] + psVar215[7]) * 4;
                  auVar9._10_2_ =
                       psVar215[7] + psVar215[0xb] * 6 + psVar215[0xf] +
                       (psVar215[0xd] + psVar215[9]) * 4;
                  auVar9._12_2_ =
                       psVar215[9] + psVar215[0xd] * 6 + psVar215[0x11] +
                       (psVar215[0xf] + psVar215[0xb]) * 4;
                  auVar9._14_2_ =
                       psVar215[0xb] + psVar215[0xf] * 6 + psVar215[0x13] +
                       (psVar215[0x11] + psVar215[0xd]) * 4;
                  uVar18 = NEON_raddhn(CONCAT17((char)((ushort)sVar26 >> 8),
                                                CONCAT16((char)sVar26,
                                                         CONCAT15((char)((ushort)sVar25 >> 8),
                                                                  CONCAT14((char)sVar25,
                                                                           CONCAT13((char)((ushort)
                                                  sVar24 >> 8),CONCAT12((char)sVar24,sVar23)))))),
                                       auVar9,ZEXT216(0),2);
                  puVar3 = (undefined1 *)(lStack_f0 + uVar228);
                  *puVar3 = (char)uVar13;
                  puVar3[1] = (char)uVar18;
                  puVar3[2] = (char)((ulong)uVar13 >> 8);
                  puVar3[3] = (char)((ulong)uVar18 >> 8);
                  puVar3[4] = (char)((ulong)uVar13 >> 0x10);
                  puVar3[5] = (char)((ulong)uVar18 >> 0x10);
                  puVar3[6] = (char)((ulong)uVar13 >> 0x18);
                  puVar3[7] = (char)((ulong)uVar18 >> 0x18);
                  puVar3[8] = (char)((ulong)uVar13 >> 0x20);
                  puVar3[9] = (char)((ulong)uVar18 >> 0x20);
                  puVar3[10] = (char)((ulong)uVar13 >> 0x28);
                  puVar3[0xb] = (char)((ulong)uVar18 >> 0x28);
                  puVar3[0xc] = (char)((ulong)uVar13 >> 0x30);
                  puVar3[0xd] = (char)((ulong)uVar18 >> 0x30);
                  puVar3[0xe] = (char)((ulong)uVar13 >> 0x38);
                  puVar3[0xf] = (char)((ulong)uVar18 >> 0x38);
                  uVar228 = uVar228 + 0x10;
                  psVar215 = psVar215 + 0x10;
                } while (uVar228 <= uVar231 - 0x10);
                goto LAB_1093661b8;
              }
LAB_1093660cc:
              if (0 < iVar203) {
                uVar228 = 0;
                goto LAB_1093661b8;
              }
            }
            else {
              if (iVar203 == 3) {
                uVar228 = 0;
                psVar215 = psVar233;
                do {
                  Hint_Prefetch(psVar215 + 0xa0,0,0,0);
                  sVar31 = (psVar215[5] + psVar215[-1]) * 4;
                  sVar32 = (psVar215[8] + psVar215[2]) * 4;
                  sVar33 = (psVar215[0xb] + psVar215[5]) * 4;
                  sVar38 = (psVar215[0xe] + psVar215[8]) * 4;
                  sVar39 = psVar215[-3] + psVar215[3] * 6 + psVar215[9] +
                           (psVar215[6] + *psVar215) * 4;
                  sVar42 = *psVar215 + psVar215[6] * 6 + psVar215[0xc] +
                           (psVar215[9] + psVar215[3]) * 4;
                  sVar43 = psVar215[3] + psVar215[9] * 6 + psVar215[0xf] +
                           (psVar215[0xc] + psVar215[6]) * 4;
                  sVar17 = psVar215[-5] + psVar215[1] * 6;
                  sVar19 = psVar215[-2] + psVar215[4] * 6;
                  sVar20 = psVar215[1] + psVar215[7] * 6;
                  sVar21 = psVar215[4] + psVar215[10] * 6;
                  sVar44 = sVar19 + psVar215[10] + (psVar215[7] + psVar215[1]) * 4;
                  sVar243 = sVar20 + psVar215[0xd] + (psVar215[10] + psVar215[4]) * 4;
                  sVar45 = sVar21 + psVar215[0x10] + (psVar215[0xd] + psVar215[7]) * 4;
                  sVar23 = psVar215[-4] + psVar215[2] * 6;
                  sVar24 = psVar215[-1] + psVar215[5] * 6;
                  sVar25 = psVar215[2] + psVar215[8] * 6;
                  sVar26 = psVar215[5] + psVar215[0xb] * 6;
                  sVar14 = sVar24 + psVar215[0xb] + sVar32;
                  sVar242 = sVar25 + psVar215[0xe] + sVar33;
                  sVar15 = sVar26 + psVar215[0x11] + sVar38;
                  auVar35[2] = (char)sVar39;
                  auVar35._0_2_ =
                       psVar215[-6] + *psVar215 * 6 + psVar215[6] + (psVar215[3] + psVar215[-3]) * 4
                  ;
                  auVar35[3] = (char)((ushort)sVar39 >> 8);
                  auVar35[4] = (char)sVar42;
                  auVar35[5] = (char)((ushort)sVar42 >> 8);
                  auVar35[6] = (char)sVar43;
                  auVar35[7] = (char)((ushort)sVar43 >> 8);
                  auVar35._8_2_ =
                       psVar215[6] + psVar215[0xc] * 6 + psVar215[0x12] +
                       (psVar215[0xf] + psVar215[9]) * 4;
                  auVar35._10_2_ =
                       psVar215[9] + psVar215[0xf] * 6 + psVar215[0x15] +
                       (psVar215[0x12] + psVar215[0xc]) * 4;
                  auVar35._12_2_ =
                       psVar215[0xc] + psVar215[0x12] * 6 + psVar215[0x18] +
                       (psVar215[0x15] + psVar215[0xf]) * 4;
                  auVar35._14_2_ =
                       psVar215[0xf] + psVar215[0x15] * 6 + psVar215[0x1b] +
                       (psVar215[0x18] + psVar215[0x12]) * 4;
                  uVar13 = NEON_raddhn(CONCAT17((char)((ushort)sVar21 >> 8),
                                                CONCAT16((char)sVar21,
                                                         CONCAT15((char)((ushort)sVar20 >> 8),
                                                                  CONCAT14((char)sVar20,
                                                                           CONCAT13((char)((ushort)
                                                  sVar19 >> 8),CONCAT12((char)sVar19,sVar17)))))),
                                       auVar35,ZEXT216(0),2);
                  auVar41[2] = (char)sVar44;
                  auVar41._0_2_ = sVar17 + psVar215[7] + (psVar215[4] + psVar215[-2]) * 4;
                  auVar41[3] = (char)((ushort)sVar44 >> 8);
                  auVar41[4] = (char)sVar243;
                  auVar41[5] = (char)((ushort)sVar243 >> 8);
                  auVar41[6] = (char)sVar45;
                  auVar41[7] = (char)((ushort)sVar45 >> 8);
                  auVar41._8_2_ =
                       psVar215[7] + psVar215[0xd] * 6 + psVar215[0x13] +
                       (psVar215[0x10] + psVar215[10]) * 4;
                  auVar41._10_2_ =
                       psVar215[10] + psVar215[0x10] * 6 + psVar215[0x16] +
                       (psVar215[0x13] + psVar215[0xd]) * 4;
                  auVar41._12_2_ =
                       psVar215[0xd] + psVar215[0x13] * 6 + psVar215[0x19] +
                       (psVar215[0x16] + psVar215[0x10]) * 4;
                  auVar41._14_2_ =
                       psVar215[0x10] + psVar215[0x16] * 6 + psVar215[0x1c] +
                       (psVar215[0x19] + psVar215[0x13]) * 4;
                  uVar18 = NEON_raddhn(CONCAT17((char)((ushort)sVar26 >> 8),
                                                CONCAT16((char)sVar26,
                                                         CONCAT15((char)((ushort)sVar25 >> 8),
                                                                  CONCAT14((char)sVar25,
                                                                           CONCAT13((char)((ushort)
                                                  sVar24 >> 8),CONCAT12((char)sVar24,sVar23)))))),
                                       auVar41,ZEXT216(0),2);
                  auVar12[2] = (char)sVar14;
                  auVar12._0_2_ = sVar23 + psVar215[8] + sVar31;
                  auVar12[3] = (char)((ushort)sVar14 >> 8);
                  auVar12[4] = (char)sVar242;
                  auVar12[5] = (char)((ushort)sVar242 >> 8);
                  auVar12[6] = (char)sVar15;
                  auVar12[7] = (char)((ushort)sVar15 >> 8);
                  auVar12._8_2_ =
                       psVar215[8] + psVar215[0xe] * 6 + psVar215[0x14] +
                       (psVar215[0x11] + psVar215[0xb]) * 4;
                  auVar12._10_2_ =
                       psVar215[0xb] + psVar215[0x11] * 6 + psVar215[0x17] +
                       (psVar215[0x14] + psVar215[0xe]) * 4;
                  auVar12._12_2_ =
                       psVar215[0xe] + psVar215[0x14] * 6 + psVar215[0x1a] +
                       (psVar215[0x17] + psVar215[0x11]) * 4;
                  auVar12._14_2_ =
                       psVar215[0x11] + psVar215[0x17] * 6 + psVar215[0x1d] +
                       (psVar215[0x1a] + psVar215[0x14]) * 4;
                  uVar240 = NEON_raddhn(CONCAT17((char)((ushort)sVar38 >> 8),
                                                 CONCAT16((char)sVar38,
                                                          CONCAT15((char)((ushort)sVar33 >> 8),
                                                                   CONCAT14((char)sVar33,
                                                                            CONCAT13((char)((ushort)
                                                  sVar32 >> 8),CONCAT12((char)sVar32,sVar31)))))),
                                        auVar12,ZEXT216(0),2);
                  puVar3 = (undefined1 *)(lStack_f0 + uVar228);
                  *puVar3 = (char)uVar13;
                  puVar3[1] = (char)uVar18;
                  puVar3[2] = (char)uVar240;
                  puVar3[3] = (char)((ulong)uVar13 >> 8);
                  puVar3[4] = (char)((ulong)uVar18 >> 8);
                  puVar3[5] = (char)((ulong)uVar240 >> 8);
                  puVar3[6] = (char)((ulong)uVar13 >> 0x10);
                  puVar3[7] = (char)((ulong)uVar18 >> 0x10);
                  puVar3[8] = (char)((ulong)uVar240 >> 0x10);
                  puVar3[9] = (char)((ulong)uVar13 >> 0x18);
                  puVar3[10] = (char)((ulong)uVar18 >> 0x18);
                  puVar3[0xb] = (char)((ulong)uVar240 >> 0x18);
                  puVar3[0xc] = (char)((ulong)uVar13 >> 0x20);
                  puVar3[0xd] = (char)((ulong)uVar18 >> 0x20);
                  puVar3[0xe] = (char)((ulong)uVar240 >> 0x20);
                  puVar3[0xf] = (char)((ulong)uVar13 >> 0x28);
                  puVar3[0x10] = (char)((ulong)uVar18 >> 0x28);
                  puVar3[0x11] = (char)((ulong)uVar240 >> 0x28);
                  puVar3[0x12] = (char)((ulong)uVar13 >> 0x30);
                  puVar3[0x13] = (char)((ulong)uVar18 >> 0x30);
                  puVar3[0x14] = (char)((ulong)uVar240 >> 0x30);
                  puVar3[0x15] = (char)((ulong)uVar13 >> 0x38);
                  puVar3[0x16] = (char)((ulong)uVar18 >> 0x38);
                  puVar3[0x17] = (char)((ulong)uVar240 >> 0x38);
                  uVar228 = uVar228 + 0x18;
                  psVar215 = psVar215 + 0x18;
                } while (uVar228 <= uVar231 - 0x18);
              }
              else {
                if (iVar203 != 4) goto LAB_1093660cc;
                uVar228 = 0;
                psVar215 = psVar233;
                do {
                  Hint_Prefetch(psVar215 + 0xa0,0,0,0);
                  Hint_Prefetch(psVar215 + 0xb0,0,0,0);
                  psVar221 = psVar215 + -8;
                  psVar224 = psVar215 + -4;
                  psVar207 = psVar215 + 4;
                  psVar227 = psVar215 + 8;
                  psVar48 = psVar215 + -7;
                  psVar49 = psVar215 + -6;
                  psVar50 = psVar215 + -5;
                  psVar51 = psVar215 + -4;
                  psVar52 = psVar215 + -3;
                  psVar53 = psVar215 + -2;
                  psVar54 = psVar215 + -1;
                  sVar14 = *psVar215;
                  psVar55 = psVar215 + 1;
                  psVar56 = psVar215 + 2;
                  psVar57 = psVar215 + 3;
                  psVar58 = psVar215 + 4;
                  psVar59 = psVar215 + 5;
                  psVar225 = psVar215 + 6;
                  psVar60 = psVar215 + 7;
                  psVar61 = psVar215 + 8;
                  psVar62 = psVar215 + 9;
                  psVar222 = psVar215 + 10;
                  psVar63 = psVar215 + 0xb;
                  psVar64 = psVar215 + 0xc;
                  psVar65 = psVar215 + 0xd;
                  psVar66 = psVar215 + 0xe;
                  psVar67 = psVar215 + 0xf;
                  psVar68 = psVar215 + 0x10;
                  psVar69 = psVar215 + 0x11;
                  psVar70 = psVar215 + 0x12;
                  psVar71 = psVar215 + 0x13;
                  psVar72 = psVar215 + 0x14;
                  psVar73 = psVar215 + 0x15;
                  psVar74 = psVar215 + 0x16;
                  psVar75 = psVar215 + 0x17;
                  psVar76 = psVar215 + 9;
                  psVar77 = psVar215 + 10;
                  psVar78 = psVar215 + 0xb;
                  psVar79 = psVar215 + 0xc;
                  sVar42 = psVar215[0xd];
                  psVar80 = psVar215 + 0xe;
                  psVar81 = psVar215 + 0xf;
                  psVar82 = psVar215 + 0x10;
                  sVar43 = psVar215[0x11];
                  psVar83 = psVar215 + 0x12;
                  psVar84 = psVar215 + 0x13;
                  psVar85 = psVar215 + 0x14;
                  sVar44 = psVar215[0x15];
                  psVar86 = psVar215 + 0x16;
                  psVar87 = psVar215 + 0x17;
                  psVar88 = psVar215 + 0x18;
                  psVar89 = psVar215 + 0x19;
                  psVar90 = psVar215 + 0x1a;
                  psVar91 = psVar215 + 0x1b;
                  psVar92 = psVar215 + 0x1c;
                  psVar93 = psVar215 + 0x1d;
                  psVar94 = psVar215 + 0x1e;
                  psVar95 = psVar215 + 0x1f;
                  psVar96 = psVar215 + 0x20;
                  psVar97 = psVar215 + 0x21;
                  psVar98 = psVar215 + 0x22;
                  psVar99 = psVar215 + 0x23;
                  psVar100 = psVar215 + 0x24;
                  psVar101 = psVar215 + 0x25;
                  psVar102 = psVar215 + 0x26;
                  psVar103 = psVar215 + 0x27;
                  psVar104 = psVar215 + -3;
                  psVar105 = psVar215 + -2;
                  psVar106 = psVar215 + -1;
                  sVar242 = *psVar215;
                  psVar107 = psVar215 + 1;
                  psVar108 = psVar215 + 2;
                  psVar109 = psVar215 + 3;
                  psVar110 = psVar215 + 4;
                  psVar111 = psVar215 + 5;
                  psVar112 = psVar215 + 6;
                  psVar113 = psVar215 + 7;
                  psVar114 = psVar215 + 8;
                  psVar115 = psVar215 + 9;
                  psVar116 = psVar215 + 10;
                  psVar117 = psVar215 + 0xb;
                  psVar118 = psVar215 + 0xc;
                  psVar119 = psVar215 + 0xd;
                  psVar120 = psVar215 + 0xe;
                  psVar121 = psVar215 + 0xf;
                  psVar122 = psVar215 + 0x10;
                  psVar123 = psVar215 + 0x11;
                  psVar124 = psVar215 + 0x12;
                  psVar125 = psVar215 + 0x13;
                  psVar126 = psVar215 + 0x14;
                  psVar127 = psVar215 + 0x15;
                  psVar128 = psVar215 + 0x16;
                  psVar129 = psVar215 + 0x17;
                  psVar130 = psVar215 + 0x18;
                  psVar131 = psVar215 + 0x19;
                  psVar132 = psVar215 + 0x1a;
                  psVar133 = psVar215 + 0x1b;
                  psVar134 = psVar215 + 5;
                  psVar135 = psVar215 + 6;
                  psVar136 = psVar215 + 7;
                  psVar137 = psVar215 + 8;
                  psVar138 = psVar215 + 9;
                  psVar139 = psVar215 + 10;
                  psVar140 = psVar215 + 0xb;
                  psVar141 = psVar215 + 0xc;
                  psVar142 = psVar215 + 0xd;
                  psVar143 = psVar215 + 0xe;
                  psVar144 = psVar215 + 0xf;
                  psVar145 = psVar215 + 0x10;
                  psVar146 = psVar215 + 0x11;
                  psVar147 = psVar215 + 0x12;
                  psVar148 = psVar215 + 0x13;
                  psVar149 = psVar215 + 0x14;
                  psVar150 = psVar215 + 0x15;
                  psVar151 = psVar215 + 0x16;
                  psVar152 = psVar215 + 0x17;
                  psVar153 = psVar215 + 0x18;
                  psVar154 = psVar215 + 0x19;
                  psVar155 = psVar215 + 0x1a;
                  psVar156 = psVar215 + 0x1b;
                  psVar157 = psVar215 + 0x1c;
                  psVar158 = psVar215 + 0x1d;
                  psVar159 = psVar215 + 0x1e;
                  psVar160 = psVar215 + 0x1f;
                  psVar161 = psVar215 + 0x20;
                  psVar162 = psVar215 + 0x21;
                  psVar163 = psVar215 + 0x22;
                  psVar164 = psVar215 + 0x23;
                  sVar243 = *psVar215;
                  psVar165 = psVar215 + 1;
                  psVar166 = psVar215 + 2;
                  psVar167 = psVar215 + 3;
                  psVar168 = psVar215 + 4;
                  psVar169 = psVar215 + 5;
                  psVar170 = psVar215 + 6;
                  psVar171 = psVar215 + 7;
                  psVar172 = psVar215 + 8;
                  psVar173 = psVar215 + 9;
                  psVar174 = psVar215 + 10;
                  psVar175 = psVar215 + 0xb;
                  psVar176 = psVar215 + 0xc;
                  psVar177 = psVar215 + 0xd;
                  psVar178 = psVar215 + 0xe;
                  psVar179 = psVar215 + 0xf;
                  psVar180 = psVar215 + 0x10;
                  psVar181 = psVar215 + 0x11;
                  psVar182 = psVar215 + 0x12;
                  psVar183 = psVar215 + 0x13;
                  psVar184 = psVar215 + 0x14;
                  psVar185 = psVar215 + 0x15;
                  psVar186 = psVar215 + 0x16;
                  psVar187 = psVar215 + 0x17;
                  psVar188 = psVar215 + 0x18;
                  psVar189 = psVar215 + 0x19;
                  psVar190 = psVar215 + 0x1a;
                  psVar191 = psVar215 + 0x1b;
                  psVar192 = psVar215 + 0x1c;
                  psVar193 = psVar215 + 0x1d;
                  psVar194 = psVar215 + 0x1e;
                  psVar195 = psVar215 + 0x1f;
                  psVar215 = psVar215 + 0x20;
                  sVar32 = (*psVar136 + *psVar106) * 4;
                  sVar33 = (*psVar140 + *psVar109) * 4;
                  sVar38 = (*psVar144 + *psVar113) * 4;
                  sVar39 = (*psVar148 + *psVar117) * 4;
                  sVar17 = *psVar79 + *psVar51 + (*psVar137 + sVar242) * 4 + *psVar168 * 6;
                  sVar19 = *psVar82 + sVar14 + (*psVar141 + *psVar110) * 4 + *psVar172 * 6;
                  sVar20 = *psVar85 + *psVar58 + (*psVar145 + *psVar114) * 4 + *psVar176 * 6;
                  sVar21 = sVar42 + *psVar52 + (*psVar138 + *psVar107) * 4 + *psVar169 * 6;
                  sVar23 = sVar43 + *psVar55 + (*psVar142 + *psVar111) * 4 + *psVar173 * 6;
                  sVar24 = sVar44 + *psVar59 + (*psVar146 + *psVar115) * 4 + *psVar177 * 6;
                  sVar25 = *psVar80 + *psVar53 + (*psVar139 + *psVar108) * 4 + *psVar170 * 6;
                  sVar26 = *psVar83 + *psVar56 + (*psVar143 + *psVar112) * 4 + *psVar174 * 6;
                  sVar31 = *psVar86 + *psVar225 + (*psVar147 + *psVar116) * 4 + *psVar178 * 6;
                  sVar14 = *psVar81 + *psVar54 + sVar33 + *psVar171 * 6;
                  sVar242 = *psVar84 + *psVar57 + sVar38 + *psVar175 * 6;
                  sVar15 = *psVar87 + *psVar60 + sVar39 + *psVar179 * 6;
                  auVar16[2] = (char)sVar17;
                  auVar16._0_2_ = *psVar227 + *psVar221 + (*psVar207 + *psVar224) * 4 + sVar243 * 6;
                  auVar16[3] = (char)((ushort)sVar17 >> 8);
                  auVar16[4] = (char)sVar19;
                  auVar16[5] = (char)((ushort)sVar19 >> 8);
                  auVar16[6] = (char)sVar20;
                  auVar16[7] = (char)((ushort)sVar20 >> 8);
                  auVar16._8_2_ = *psVar88 + *psVar61 + (*psVar149 + *psVar118) * 4 + *psVar180 * 6;
                  auVar16._10_2_ = *psVar92 + *psVar64 + (*psVar153 + *psVar122) * 4 + *psVar184 * 6
                  ;
                  auVar16._12_2_ = *psVar96 + *psVar68 + (*psVar157 + *psVar126) * 4 + *psVar188 * 6
                  ;
                  auVar16._14_2_ =
                       *psVar100 + *psVar72 + (*psVar161 + *psVar130) * 4 + *psVar192 * 6;
                  uVar13 = NEON_raddhn(CONCAT17((char)((ushort)sVar39 >> 8),
                                                CONCAT16((char)sVar39,
                                                         CONCAT15((char)((ushort)sVar38 >> 8),
                                                                  CONCAT14((char)sVar38,
                                                                           CONCAT13((char)((ushort)
                                                  sVar33 >> 8),CONCAT12((char)sVar33,sVar32)))))),
                                       auVar16,ZEXT216(0),2);
                  auVar22[2] = (char)sVar21;
                  auVar22._0_2_ = *psVar76 + *psVar48 + (*psVar134 + *psVar104) * 4 + *psVar165 * 6;
                  auVar22[3] = (char)((ushort)sVar21 >> 8);
                  auVar22[4] = (char)sVar23;
                  auVar22[5] = (char)((ushort)sVar23 >> 8);
                  auVar22[6] = (char)sVar24;
                  auVar22[7] = (char)((ushort)sVar24 >> 8);
                  auVar22._8_2_ = *psVar89 + *psVar62 + (*psVar150 + *psVar119) * 4 + *psVar181 * 6;
                  auVar22._10_2_ = *psVar93 + *psVar65 + (*psVar154 + *psVar123) * 4 + *psVar185 * 6
                  ;
                  auVar22._12_2_ = *psVar97 + *psVar69 + (*psVar158 + *psVar127) * 4 + *psVar189 * 6
                  ;
                  auVar22._14_2_ =
                       *psVar101 + *psVar73 + (*psVar162 + *psVar131) * 4 + *psVar193 * 6;
                  uVar18 = NEON_raddhn(CONCAT17((char)((ushort)sVar44 >> 8),
                                                CONCAT16((char)sVar44,
                                                         CONCAT15((char)((ushort)sVar43 >> 8),
                                                                  CONCAT14((char)sVar43,
                                                                           CONCAT13((char)((ushort)
                                                  sVar42 >> 8),CONCAT12((char)sVar42,*psVar76)))))),
                                       auVar22,ZEXT216(0),2);
                  auVar29[2] = (char)sVar25;
                  auVar29._0_2_ = *psVar77 + *psVar49 + (*psVar135 + *psVar105) * 4 + *psVar166 * 6;
                  auVar29[3] = (char)((ushort)sVar25 >> 8);
                  auVar29[4] = (char)sVar26;
                  auVar29[5] = (char)((ushort)sVar26 >> 8);
                  auVar29[6] = (char)sVar31;
                  auVar29[7] = (char)((ushort)sVar31 >> 8);
                  auVar29._8_2_ = *psVar90 + *psVar222 + (*psVar151 + *psVar120) * 4 + *psVar182 * 6
                  ;
                  auVar29._10_2_ = *psVar94 + *psVar66 + (*psVar155 + *psVar124) * 4 + *psVar186 * 6
                  ;
                  auVar29._12_2_ = *psVar98 + *psVar70 + (*psVar159 + *psVar128) * 4 + *psVar190 * 6
                  ;
                  auVar29._14_2_ =
                       *psVar102 + *psVar74 + (*psVar163 + *psVar132) * 4 + *psVar194 * 6;
                  uVar240 = NEON_raddhn(CONCAT26(*psVar86,CONCAT24(*psVar83,CONCAT22(*psVar80,*
                                                  psVar77))),auVar29,ZEXT216(0),2);
                  auVar11[2] = (char)sVar14;
                  auVar11._0_2_ = *psVar78 + *psVar50 + sVar32 + *psVar167 * 6;
                  auVar11[3] = (char)((ushort)sVar14 >> 8);
                  auVar11[4] = (char)sVar242;
                  auVar11[5] = (char)((ushort)sVar242 >> 8);
                  auVar11[6] = (char)sVar15;
                  auVar11[7] = (char)((ushort)sVar15 >> 8);
                  auVar11._8_2_ = *psVar91 + *psVar63 + (*psVar152 + *psVar121) * 4 + *psVar183 * 6;
                  auVar11._10_2_ = *psVar95 + *psVar67 + (*psVar156 + *psVar125) * 4 + *psVar187 * 6
                  ;
                  auVar11._12_2_ = *psVar99 + *psVar71 + (*psVar160 + *psVar129) * 4 + *psVar191 * 6
                  ;
                  auVar11._14_2_ =
                       *psVar103 + *psVar75 + (*psVar164 + *psVar133) * 4 + *psVar195 * 6;
                  uVar241 = NEON_raddhn(CONCAT26(*psVar87,CONCAT24(*psVar84,CONCAT22(*psVar81,*
                                                  psVar78))),auVar11,ZEXT216(0),2);
                  puVar3 = (undefined1 *)(lStack_f0 + uVar228);
                  *puVar3 = (char)uVar13;
                  puVar3[1] = (char)uVar18;
                  puVar3[2] = (char)uVar240;
                  puVar3[3] = (char)uVar241;
                  puVar3[4] = (char)((ulong)uVar13 >> 8);
                  puVar3[5] = (char)((ulong)uVar18 >> 8);
                  puVar3[6] = (char)((ulong)uVar240 >> 8);
                  puVar3[7] = (char)((ulong)uVar241 >> 8);
                  puVar3[8] = (char)((ulong)uVar13 >> 0x10);
                  puVar3[9] = (char)((ulong)uVar18 >> 0x10);
                  puVar3[10] = (char)((ulong)uVar240 >> 0x10);
                  puVar3[0xb] = (char)((ulong)uVar241 >> 0x10);
                  puVar3[0xc] = (char)((ulong)uVar13 >> 0x18);
                  puVar3[0xd] = (char)((ulong)uVar18 >> 0x18);
                  puVar3[0xe] = (char)((ulong)uVar240 >> 0x18);
                  puVar3[0xf] = (char)((ulong)uVar241 >> 0x18);
                  puVar3[0x10] = (char)((ulong)uVar13 >> 0x20);
                  puVar3[0x11] = (char)((ulong)uVar18 >> 0x20);
                  puVar3[0x12] = (char)((ulong)uVar240 >> 0x20);
                  puVar3[0x13] = (char)((ulong)uVar241 >> 0x20);
                  puVar3[0x14] = (char)((ulong)uVar13 >> 0x28);
                  puVar3[0x15] = (char)((ulong)uVar18 >> 0x28);
                  puVar3[0x16] = (char)((ulong)uVar240 >> 0x28);
                  puVar3[0x17] = (char)((ulong)uVar241 >> 0x28);
                  puVar3[0x18] = (char)((ulong)uVar13 >> 0x30);
                  puVar3[0x19] = (char)((ulong)uVar18 >> 0x30);
                  puVar3[0x1a] = (char)((ulong)uVar240 >> 0x30);
                  puVar3[0x1b] = (char)((ulong)uVar241 >> 0x30);
                  puVar3[0x1c] = (char)((ulong)uVar13 >> 0x38);
                  puVar3[0x1d] = (char)((ulong)uVar18 >> 0x38);
                  puVar3[0x1e] = (char)((ulong)uVar240 >> 0x38);
                  puVar3[0x1f] = (char)((ulong)uVar241 >> 0x38);
                  uVar228 = uVar228 + 0x20;
                } while (uVar228 <= uVar231 - 0x20);
              }
LAB_1093661b8:
              uVar219 = 0;
              psVar222 = psVar233 + -(long)iVar206;
              psVar225 = psVar233 + iVar206;
              psVar227 = psVar233;
              psVar207 = psVar233 + -lVar232;
              psVar215 = psVar233 + lVar232;
              do {
                if (uVar228 < uVar231) {
                  uVar230 = uVar228;
                  do {
                    *(char *)(lStack_f0 + uVar219 + uVar230) =
                         (char)((uint)(ushort)psVar222[uVar230] + (uint)(ushort)psVar225[uVar230] +
                                ((uint)(ushort)psVar215[uVar230] + (uint)(ushort)psVar207[uVar230])
                                * 4 + (uint)(ushort)psVar227[uVar230] * 6 + 0x80 >> 8);
                    uVar230 = uVar230 + lVar232;
                  } while (uVar230 < uVar231);
                }
                uVar219 = uVar219 + 1;
                psVar215 = psVar215 + 1;
                psVar207 = psVar207 + 1;
                psVar227 = psVar227 + 1;
                psVar225 = psVar225 + 1;
                psVar222 = psVar222 + 1;
              } while (uVar219 != ((ulong)puVar204 & 0xffffffff));
            }
            lVar217 = lVar217 + param_4;
            uVar228 = puVar196[1];
            lStack_c8 = lStack_c8 + param_4;
            pbStack_d0 = pbStack_d0 + param_4;
            lStack_f0 = lStack_f0 + param_6;
            uStack_f8 = uVar1;
          } while (uVar1 < uVar228);
        }
        if (alStack_c0[0] != 0) {
          __ZdlPv();
        }
        if (lStack_a8 != 0) {
          lStack_a0 = lStack_a8;
          __ZdlPv();
        }
        return lStack_a8;
      }
      if ((long)uVar205 < 0) {
        lVar232 = (uVar205 - uVar231) + 1;
        lVar199 = 0;
        if (uVar231 != 0) {
          lVar199 = lVar232 / (long)uVar231;
        }
        uVar205 = uVar205 + ~(uVar205 - uVar231) + (lVar232 - lVar199 * uVar231);
      }
      uVar228 = uVar205;
      if ((long)uVar231 <= (long)uVar205) {
        lVar232 = 0;
        if (uVar231 != 0) {
          lVar232 = (long)uVar205 / (long)uVar231;
        }
        uVar228 = uVar205 - lVar232 * uVar231;
      }
    }
    param_1 = uVar228 - param_4;
  }
  return param_1;
}



/* Entry: 109365b00; end: 10936630f;  */

void FUN_109365b00(ulong *param_1,uint param_2,long param_3,long param_4,long param_5,long param_6,
                  undefined8 param_7,byte param_8,undefined8 *param_9)

{
  ulong uVar1;
  ushort *puVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 uVar14;
  short sVar15;
  short sVar16;
  undefined1 auVar17 [16];
  short sVar18;
  undefined8 uVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  undefined1 auVar23 [16];
  short sVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  undefined8 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined8 uVar31;
  short sVar32;
  short sVar33;
  short sVar34;
  undefined8 uVar35;
  undefined1 auVar36 [16];
  undefined8 uVar37;
  undefined8 uVar38;
  short sVar39;
  short sVar40;
  undefined8 uVar41;
  undefined1 auVar42 [16];
  short sVar43;
  short sVar44;
  short sVar45;
  short sVar46;
  byte *pbVar47;
  short *psVar48;
  short *psVar76;
  short *psVar104;
  short *psVar134;
  short *psVar165;
  long lVar196;
  long lVar197;
  long lVar198;
  long lVar199;
  long lVar200;
  long lVar201;
  ulong uVar202;
  short *psVar203;
  byte *pbVar204;
  byte *pbVar205;
  int iVar206;
  byte *pbVar207;
  byte *pbVar208;
  ushort uVar209;
  long lVar210;
  short *psVar211;
  ushort *puVar212;
  long lVar213;
  byte *pbVar214;
  ulong uVar215;
  ulong uVar216;
  ulong uVar217;
  short *psVar218;
  short *psVar219;
  int iVar220;
  short *psVar221;
  short *psVar222;
  ushort *puVar223;
  short *psVar224;
  ushort *puVar225;
  ulong uVar226;
  ulong uVar227;
  long lVar228;
  short *psVar229;
  undefined1 uVar230;
  undefined1 uVar231;
  undefined1 uVar232;
  undefined1 uVar233;
  undefined1 uVar234;
  undefined1 uVar235;
  undefined8 uVar236;
  undefined8 uVar237;
  short sVar238;
  short sVar239;
  byte *pbStack_128;
  ulong uStack_e8;
  long lStack_e0;
  byte *pbStack_c0;
  long lStack_b8;
  long alStack_b0 [3];
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  byte abStack_79 [17];
  short *psVar49;
  short *psVar50;
  short *psVar51;
  short *psVar52;
  short *psVar53;
  short *psVar54;
  short *psVar55;
  short *psVar56;
  short *psVar57;
  short *psVar58;
  short *psVar59;
  short *psVar60;
  short *psVar61;
  short *psVar62;
  short *psVar63;
  short *psVar64;
  short *psVar65;
  short *psVar66;
  short *psVar67;
  short *psVar68;
  short *psVar69;
  short *psVar70;
  short *psVar71;
  short *psVar72;
  short *psVar73;
  short *psVar74;
  short *psVar75;
  short *psVar77;
  short *psVar78;
  short *psVar79;
  short *psVar80;
  short *psVar81;
  short *psVar82;
  short *psVar83;
  short *psVar84;
  short *psVar85;
  short *psVar86;
  short *psVar87;
  short *psVar88;
  short *psVar89;
  short *psVar90;
  short *psVar91;
  short *psVar92;
  short *psVar93;
  short *psVar94;
  short *psVar95;
  short *psVar96;
  short *psVar97;
  short *psVar98;
  short *psVar99;
  short *psVar100;
  short *psVar101;
  short *psVar102;
  short *psVar103;
  short *psVar105;
  short *psVar106;
  short *psVar107;
  short *psVar108;
  short *psVar109;
  short *psVar110;
  short *psVar111;
  short *psVar112;
  short *psVar113;
  short *psVar114;
  short *psVar115;
  short *psVar116;
  short *psVar117;
  short *psVar118;
  short *psVar119;
  short *psVar120;
  short *psVar121;
  short *psVar122;
  short *psVar123;
  short *psVar124;
  short *psVar125;
  short *psVar126;
  short *psVar127;
  short *psVar128;
  short *psVar129;
  short *psVar130;
  short *psVar131;
  short *psVar132;
  short *psVar133;
  short *psVar135;
  short *psVar136;
  short *psVar137;
  short *psVar138;
  short *psVar139;
  short *psVar140;
  short *psVar141;
  short *psVar142;
  short *psVar143;
  short *psVar144;
  short *psVar145;
  short *psVar146;
  short *psVar147;
  short *psVar148;
  short *psVar149;
  short *psVar150;
  short *psVar151;
  short *psVar152;
  short *psVar153;
  short *psVar154;
  short *psVar155;
  short *psVar156;
  short *psVar157;
  short *psVar158;
  short *psVar159;
  short *psVar160;
  short *psVar161;
  short *psVar162;
  short *psVar163;
  short *psVar164;
  short *psVar166;
  short *psVar167;
  short *psVar168;
  short *psVar169;
  short *psVar170;
  short *psVar171;
  short *psVar172;
  short *psVar173;
  short *psVar174;
  short *psVar175;
  short *psVar176;
  short *psVar177;
  short *psVar178;
  short *psVar179;
  short *psVar180;
  short *psVar181;
  short *psVar182;
  short *psVar183;
  short *psVar184;
  short *psVar185;
  short *psVar186;
  short *psVar187;
  short *psVar188;
  short *psVar189;
  short *psVar190;
  short *psVar191;
  short *psVar192;
  short *psVar193;
  short *psVar194;
  short *psVar195;
  
  iVar206 = (int)param_7;
  abStack_79[0] = param_8;
  FUN_109365924(((param_2 - 1 < 4 && 7 < *param_1) && 1 < param_1[1]) && iVar206 - 1U < 5);
  uVar202 = *param_1;
  lVar228 = (long)(int)param_2;
  uVar227 = uVar202 * lVar228;
  lStack_98 = 0;
  lStack_90 = 0;
  uStack_88 = 0;
  iVar8 = param_2 << 1;
  if (iVar206 == 1) {
    func_0x000108a39c34(&lStack_98,uVar227 + (long)(int)(param_2 << 2),abStack_79);
    pbStack_128 = (byte *)(lStack_98 + iVar8);
    uVar202 = *param_1;
  }
  else {
    pbStack_128 = (byte *)0x0;
  }
  lVar196 = -1;
  FUN_109365a14(0xffffffffffffffff,uVar202,param_7,*param_9,param_9[1]);
  lVar197 = -2;
  FUN_109365a14(0xfffffffffffffffe,*param_1,param_7,*param_9,param_9[1]);
  uVar202 = *param_1;
  FUN_109365a14(uVar202,uVar202,param_7,*param_9,param_9[1]);
  lVar198 = *param_1 + 1;
  FUN_109365a14(lVar198,*param_1,param_7,*param_9,param_9[1]);
  FUN_109366414(alStack_b0,(*param_1 + 4) * lVar228 + 0x10);
  psVar229 = (short *)(alStack_b0[0] + (long)iVar8 * 2 + 0x1fU & 0xffffffffffffffe0);
  puVar2 = (ushort *)(psVar229 + uVar227);
  if ((0 < (int)param_2) && (iVar206 == 1)) {
    uVar209 = (ushort)abStack_79[0];
    uVar216 = (ulong)param_2;
    iVar220 = param_2 * -2;
    puVar212 = puVar2 + lVar228;
    puVar223 = puVar2;
    puVar225 = (ushort *)(psVar229 + -lVar228);
    do {
      *puVar225 = uVar209;
      psVar229[iVar220] = uVar209;
      iVar220 = iVar220 + 1;
      *puVar223 = uVar209;
      *puVar212 = uVar209;
      uVar216 = uVar216 - 1;
      puVar212 = puVar212 + 1;
      puVar223 = puVar223 + 1;
      puVar225 = puVar225 + 1;
    } while (uVar216 != 0);
  }
  uVar216 = param_1[1];
  if (uVar216 != 0) {
    uStack_e8 = 0;
    uVar217 = uVar227 - 8;
    lStack_b8 = param_3 + 0x140;
    pbStack_c0 = (byte *)(param_3 + 8);
    lVar213 = param_3;
    lStack_e0 = param_5;
    do {
      lVar199 = uStack_e8 - 2;
      FUN_109365a14(lVar199,uVar216,iVar206,param_9[2],param_9[3]);
      lVar200 = uStack_e8 - 1;
      FUN_109365a14(lVar200,param_1[1],iVar206,param_9[2],param_9[3]);
      uVar1 = uStack_e8 + 1;
      uVar216 = uVar1;
      FUN_109365a14(uVar1,param_1[1],iVar206,param_9[2],param_9[3]);
      lVar201 = uStack_e8 + 2;
      FUN_109365a14(lVar201,param_1[1],iVar206,param_9[2],param_9[3]);
      lVar210 = param_9[2];
      pbVar4 = pbStack_128;
      if (lVar199 + lVar210 < 0 == SCARRY8(lVar199,lVar210)) {
        pbVar4 = (byte *)(param_3 + lVar199 * param_4);
      }
      pbVar5 = pbStack_128;
      if (lVar200 + lVar210 < 0 == SCARRY8(lVar200,lVar210)) {
        pbVar5 = (byte *)(param_3 + lVar200 * param_4);
      }
      pbVar6 = pbStack_128;
      if ((long)(uVar216 + lVar210) < 0 == SCARRY8(uVar216,lVar210)) {
        pbVar6 = (byte *)(param_3 + uVar216 * param_4);
      }
      pbVar7 = pbStack_128;
      if (lVar201 + lVar210 < 0 == SCARRY8(lVar201,lVar210)) {
        pbVar7 = (byte *)(param_3 + lVar201 * param_4);
      }
      lVar201 = -2;
      uVar216 = 0;
      psVar203 = psVar229;
      pbVar47 = pbStack_c0;
      pbVar204 = pbVar6;
      pbVar205 = pbVar5;
      pbVar207 = pbVar7;
      pbVar208 = pbVar4;
      psVar211 = psVar229;
      do {
        pbVar214 = pbVar47;
        uVar215 = uVar216;
        psVar211 = psVar211 + 8;
        pbVar208 = pbVar208 + 8;
        pbVar207 = pbVar207 + 8;
        pbVar205 = pbVar205 + 8;
        pbVar204 = pbVar204 + 8;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar215;
        Hint_Prefetch(lStack_b8 +
                      param_4 * (lVar201 -
                                ((SUB168(auVar9 * ZEXT816(0xcccccccccccccccd),8) &
                                 0xfffffffffffffffc) + uVar215 / 5)) + uVar215,0,0,0);
        uVar14 = *(undefined8 *)(pbVar4 + uVar215);
        uVar19 = *(undefined8 *)(pbVar5 + uVar215);
        uVar236 = *(undefined8 *)(lVar213 + uVar215);
        uVar237 = *(undefined8 *)(pbVar6 + uVar215);
        uVar37 = *(undefined8 *)(pbVar7 + uVar215);
        sVar15 = (ushort)(byte)((ulong)uVar37 >> 8) + (ushort)(byte)((ulong)uVar14 >> 8) +
                 (ushort)(byte)((ulong)uVar236 >> 8) * 6 +
                 ((ushort)(byte)((ulong)uVar237 >> 8) + (ushort)(byte)((ulong)uVar19 >> 8)) * 4;
        sVar238 = (ushort)(byte)((ulong)uVar37 >> 0x10) + (ushort)(byte)((ulong)uVar14 >> 0x10) +
                  (ushort)(byte)((ulong)uVar236 >> 0x10) * 6 +
                  ((ushort)(byte)((ulong)uVar237 >> 0x10) + (ushort)(byte)((ulong)uVar19 >> 0x10)) *
                  4;
        sVar16 = (ushort)(byte)((ulong)uVar37 >> 0x18) + (ushort)(byte)((ulong)uVar14 >> 0x18) +
                 (ushort)(byte)((ulong)uVar236 >> 0x18) * 6 +
                 ((ushort)(byte)((ulong)uVar237 >> 0x18) + (ushort)(byte)((ulong)uVar19 >> 0x18)) *
                 4;
        *(ulong *)(psVar203 + 4) =
             CONCAT26((ushort)(byte)((ulong)uVar37 >> 0x38) + (ushort)(byte)((ulong)uVar14 >> 0x38)
                      + (ushort)(byte)((ulong)uVar236 >> 0x38) * 6 +
                      ((ushort)(byte)((ulong)uVar237 >> 0x38) +
                      (ushort)(byte)((ulong)uVar19 >> 0x38)) * 4,
                      CONCAT24((ushort)(byte)((ulong)uVar37 >> 0x30) +
                               (ushort)(byte)((ulong)uVar14 >> 0x30) +
                               (ushort)(byte)((ulong)uVar236 >> 0x30) * 6 +
                               ((ushort)(byte)((ulong)uVar237 >> 0x30) +
                               (ushort)(byte)((ulong)uVar19 >> 0x30)) * 4,
                               CONCAT22((ushort)(byte)((ulong)uVar37 >> 0x28) +
                                        (ushort)(byte)((ulong)uVar14 >> 0x28) +
                                        (ushort)(byte)((ulong)uVar236 >> 0x28) * 6 +
                                        ((ushort)(byte)((ulong)uVar237 >> 0x28) +
                                        (ushort)(byte)((ulong)uVar19 >> 0x28)) * 4,
                                        (ushort)(byte)((ulong)uVar37 >> 0x20) +
                                        (ushort)(byte)((ulong)uVar14 >> 0x20) +
                                        (ushort)(byte)((ulong)uVar236 >> 0x20) * 6 +
                                        ((ushort)(byte)((ulong)uVar237 >> 0x20) +
                                        (ushort)(byte)((ulong)uVar19 >> 0x20)) * 4)));
        *(ulong *)psVar203 =
             CONCAT17((char)((ushort)sVar16 >> 8),
                      CONCAT16((char)sVar16,
                               CONCAT15((char)((ushort)sVar238 >> 8),
                                        CONCAT14((char)sVar238,
                                                 CONCAT13((char)((ushort)sVar15 >> 8),
                                                          CONCAT12((char)sVar15,
                                                                   (ushort)(byte)uVar37 +
                                                                   (ushort)(byte)uVar14 +
                                                                   (ushort)(byte)uVar236 * 6 +
                                                                   ((ushort)(byte)uVar237 +
                                                                   (ushort)(byte)uVar19) * 4))))));
        uVar216 = uVar215 + 8;
        lVar201 = lVar201 + 8;
        psVar203 = psVar203 + 8;
        pbVar47 = pbVar214 + 8;
      } while (uVar216 <= uVar217);
      if (uVar216 < uVar227) {
        lVar201 = uVar217 - uVar215;
        do {
          *psVar211 = (ushort)*pbVar207 + (ushort)*pbVar208 +
                      ((ushort)*pbVar204 + (ushort)*pbVar205) * 4 + (ushort)*pbVar214 * 6;
          lVar201 = lVar201 + -1;
          psVar211 = psVar211 + 1;
          pbVar214 = pbVar214 + 1;
          pbVar204 = pbVar204 + 1;
          pbVar205 = pbVar205 + 1;
          pbVar207 = pbVar207 + 1;
          pbVar208 = pbVar208 + 1;
        } while (lVar201 != 0);
      }
      if (0 < (int)param_2 && iVar206 != 1) {
        uVar216 = 0;
        do {
          (psVar229 + -lVar228)[uVar216] = psVar229[lVar196 * lVar228 + uVar216];
          psVar229[(int)(param_2 * -2 + (int)uVar216)] = psVar229[lVar197 * lVar228 + uVar216];
          puVar2[uVar216] = psVar229[uVar202 * lVar228 + uVar216];
          puVar2[lVar228 + uVar216] = psVar229[lVar198 * lVar228 + uVar216];
          uVar216 = uVar216 + 1;
        } while (param_2 != uVar216);
      }
      if ((int)param_2 < 3) {
        if (param_2 == 1) {
          uVar216 = 0;
          psVar211 = psVar229;
          do {
            Hint_Prefetch(psVar211 + 0xa0,0,0,0);
            uVar19 = *(undefined8 *)(psVar211 + 2);
            uVar14 = *(undefined8 *)(psVar211 + -2);
            uVar237 = *(undefined8 *)(psVar211 + 6);
            uVar236 = *(undefined8 *)(psVar211 + 2);
            uVar28 = *(undefined8 *)(psVar211 + 3);
            uVar37 = *(undefined8 *)(psVar211 + -1);
            uVar35 = *(undefined8 *)(psVar211 + 5);
            uVar31 = *(undefined8 *)(psVar211 + 1);
            uVar41 = *(undefined8 *)(psVar211 + 4);
            uVar38 = *(undefined8 *)psVar211;
            sVar15 = (short)uVar236 + (short)uVar14 + (short)uVar38 * 6 +
                     ((short)uVar31 + (short)uVar37) * 4;
            sVar238 = (short)((ulong)uVar236 >> 0x10) + (short)((ulong)uVar14 >> 0x10) +
                      (short)((ulong)uVar38 >> 0x10) * 6 +
                      ((short)((ulong)uVar31 >> 0x10) + (short)((ulong)uVar37 >> 0x10)) * 4;
            uVar230 = (undefined1)sVar238;
            uVar231 = (undefined1)((ushort)sVar238 >> 8);
            sVar238 = (short)((ulong)uVar236 >> 0x20) + (short)((ulong)uVar14 >> 0x20) +
                      (short)((ulong)uVar38 >> 0x20) * 6 +
                      ((short)((ulong)uVar31 >> 0x20) + (short)((ulong)uVar37 >> 0x20)) * 4;
            uVar232 = (undefined1)sVar238;
            uVar233 = (undefined1)((ushort)sVar238 >> 8);
            sVar238 = (short)((ulong)uVar236 >> 0x30) + (short)((ulong)uVar14 >> 0x30) +
                      (short)((ulong)uVar38 >> 0x30) * 6 +
                      ((short)((ulong)uVar31 >> 0x30) + (short)((ulong)uVar37 >> 0x30)) * 4;
            uVar234 = (undefined1)sVar238;
            uVar235 = (undefined1)((ushort)sVar238 >> 8);
            auVar11[2] = uVar230;
            auVar11._0_2_ = sVar15;
            auVar11[3] = uVar231;
            auVar11[4] = uVar232;
            auVar11[5] = uVar233;
            auVar11[6] = uVar234;
            auVar11[7] = uVar235;
            auVar11._8_2_ =
                 (short)uVar237 + (short)uVar19 + (short)uVar41 * 6 +
                 ((short)uVar35 + (short)uVar28) * 4;
            auVar11._10_2_ =
                 (short)((ulong)uVar237 >> 0x10) + (short)((ulong)uVar19 >> 0x10) +
                 (short)((ulong)uVar41 >> 0x10) * 6 +
                 ((short)((ulong)uVar35 >> 0x10) + (short)((ulong)uVar28 >> 0x10)) * 4;
            auVar11._12_2_ =
                 (short)((ulong)uVar237 >> 0x20) + (short)((ulong)uVar19 >> 0x20) +
                 (short)((ulong)uVar41 >> 0x20) * 6 +
                 ((short)((ulong)uVar35 >> 0x20) + (short)((ulong)uVar28 >> 0x20)) * 4;
            auVar11._14_2_ =
                 (short)((ulong)uVar237 >> 0x30) + (short)((ulong)uVar19 >> 0x30) +
                 (short)((ulong)uVar41 >> 0x30) * 6 +
                 ((short)((ulong)uVar35 >> 0x30) + (short)((ulong)uVar28 >> 0x30)) * 4;
            uVar14 = NEON_raddhn(CONCAT17(uVar235,CONCAT16(uVar234,CONCAT15(uVar233,CONCAT14(uVar232
                                                  ,CONCAT13(uVar231,CONCAT12(uVar230,sVar15)))))),
                                 auVar11,ZEXT216(0),2);
            *(undefined8 *)(lStack_e0 + uVar216) = uVar14;
            uVar216 = uVar216 + 8;
            psVar211 = psVar211 + 8;
          } while (uVar216 <= uVar217);
          goto LAB_1093661b8;
        }
        if (param_2 == 2) {
          uVar216 = 0;
          psVar211 = psVar229;
          do {
            Hint_Prefetch(psVar211 + 0xa0,0,0,0);
            sVar24 = (psVar211[3] + psVar211[-1]) * 4;
            sVar25 = (psVar211[5] + psVar211[1]) * 4;
            sVar26 = (psVar211[7] + psVar211[3]) * 4;
            sVar27 = (psVar211[9] + psVar211[5]) * 4;
            sVar32 = psVar211[-2] + psVar211[2] * 6 + psVar211[6] + (psVar211[4] + *psVar211) * 4;
            sVar33 = *psVar211 + psVar211[4] * 6 + psVar211[8] + (psVar211[6] + psVar211[2]) * 4;
            sVar34 = psVar211[2] + psVar211[6] * 6 + psVar211[10] + (psVar211[8] + psVar211[4]) * 4;
            sVar18 = psVar211[-3] + psVar211[1] * 6;
            sVar20 = psVar211[-1] + psVar211[3] * 6;
            sVar21 = psVar211[1] + psVar211[5] * 6;
            sVar22 = psVar211[3] + psVar211[7] * 6;
            sVar15 = sVar20 + psVar211[7] + sVar25;
            sVar238 = sVar21 + psVar211[9] + sVar26;
            sVar16 = sVar22 + psVar211[0xb] + sVar27;
            auVar29[2] = (char)sVar32;
            auVar29._0_2_ =
                 psVar211[-4] + *psVar211 * 6 + psVar211[4] + (psVar211[2] + psVar211[-2]) * 4;
            auVar29[3] = (char)((ushort)sVar32 >> 8);
            auVar29[4] = (char)sVar33;
            auVar29[5] = (char)((ushort)sVar33 >> 8);
            auVar29[6] = (char)sVar34;
            auVar29[7] = (char)((ushort)sVar34 >> 8);
            auVar29._8_2_ =
                 psVar211[4] + psVar211[8] * 6 + psVar211[0xc] + (psVar211[10] + psVar211[6]) * 4;
            auVar29._10_2_ =
                 psVar211[6] + psVar211[10] * 6 + psVar211[0xe] + (psVar211[0xc] + psVar211[8]) * 4;
            auVar29._12_2_ =
                 psVar211[8] + psVar211[0xc] * 6 + psVar211[0x10] +
                 (psVar211[0xe] + psVar211[10]) * 4;
            auVar29._14_2_ =
                 psVar211[10] + psVar211[0xe] * 6 + psVar211[0x12] +
                 (psVar211[0x10] + psVar211[0xc]) * 4;
            uVar14 = NEON_raddhn(CONCAT17((char)((ushort)sVar22 >> 8),
                                          CONCAT16((char)sVar22,
                                                   CONCAT15((char)((ushort)sVar21 >> 8),
                                                            CONCAT14((char)sVar21,
                                                                     CONCAT13((char)((ushort)sVar20
                                                                                    >> 8),
                                                                              CONCAT12((char)sVar20,
                                                                                       sVar18)))))),
                                 auVar29,ZEXT216(0),2);
            auVar10[2] = (char)sVar15;
            auVar10._0_2_ = sVar18 + psVar211[5] + sVar24;
            auVar10[3] = (char)((ushort)sVar15 >> 8);
            auVar10[4] = (char)sVar238;
            auVar10[5] = (char)((ushort)sVar238 >> 8);
            auVar10[6] = (char)sVar16;
            auVar10[7] = (char)((ushort)sVar16 >> 8);
            auVar10._8_2_ =
                 psVar211[5] + psVar211[9] * 6 + psVar211[0xd] + (psVar211[0xb] + psVar211[7]) * 4;
            auVar10._10_2_ =
                 psVar211[7] + psVar211[0xb] * 6 + psVar211[0xf] + (psVar211[0xd] + psVar211[9]) * 4
            ;
            auVar10._12_2_ =
                 psVar211[9] + psVar211[0xd] * 6 + psVar211[0x11] +
                 (psVar211[0xf] + psVar211[0xb]) * 4;
            auVar10._14_2_ =
                 psVar211[0xb] + psVar211[0xf] * 6 + psVar211[0x13] +
                 (psVar211[0x11] + psVar211[0xd]) * 4;
            uVar19 = NEON_raddhn(CONCAT17((char)((ushort)sVar27 >> 8),
                                          CONCAT16((char)sVar27,
                                                   CONCAT15((char)((ushort)sVar26 >> 8),
                                                            CONCAT14((char)sVar26,
                                                                     CONCAT13((char)((ushort)sVar25
                                                                                    >> 8),
                                                                              CONCAT12((char)sVar25,
                                                                                       sVar24)))))),
                                 auVar10,ZEXT216(0),2);
            puVar3 = (undefined1 *)(lStack_e0 + uVar216);
            *puVar3 = (char)uVar14;
            puVar3[1] = (char)uVar19;
            puVar3[2] = (char)((ulong)uVar14 >> 8);
            puVar3[3] = (char)((ulong)uVar19 >> 8);
            puVar3[4] = (char)((ulong)uVar14 >> 0x10);
            puVar3[5] = (char)((ulong)uVar19 >> 0x10);
            puVar3[6] = (char)((ulong)uVar14 >> 0x18);
            puVar3[7] = (char)((ulong)uVar19 >> 0x18);
            puVar3[8] = (char)((ulong)uVar14 >> 0x20);
            puVar3[9] = (char)((ulong)uVar19 >> 0x20);
            puVar3[10] = (char)((ulong)uVar14 >> 0x28);
            puVar3[0xb] = (char)((ulong)uVar19 >> 0x28);
            puVar3[0xc] = (char)((ulong)uVar14 >> 0x30);
            puVar3[0xd] = (char)((ulong)uVar19 >> 0x30);
            puVar3[0xe] = (char)((ulong)uVar14 >> 0x38);
            puVar3[0xf] = (char)((ulong)uVar19 >> 0x38);
            uVar216 = uVar216 + 0x10;
            psVar211 = psVar211 + 0x10;
          } while (uVar216 <= uVar227 - 0x10);
          goto LAB_1093661b8;
        }
LAB_1093660cc:
        if (0 < (int)param_2) {
          uVar216 = 0;
          goto LAB_1093661b8;
        }
      }
      else {
        if (param_2 == 3) {
          uVar216 = 0;
          psVar211 = psVar229;
          do {
            Hint_Prefetch(psVar211 + 0xa0,0,0,0);
            sVar32 = (psVar211[5] + psVar211[-1]) * 4;
            sVar33 = (psVar211[8] + psVar211[2]) * 4;
            sVar34 = (psVar211[0xb] + psVar211[5]) * 4;
            sVar39 = (psVar211[0xe] + psVar211[8]) * 4;
            sVar40 = psVar211[-3] + psVar211[3] * 6 + psVar211[9] + (psVar211[6] + *psVar211) * 4;
            sVar43 = *psVar211 + psVar211[6] * 6 + psVar211[0xc] + (psVar211[9] + psVar211[3]) * 4;
            sVar44 = psVar211[3] + psVar211[9] * 6 + psVar211[0xf] +
                     (psVar211[0xc] + psVar211[6]) * 4;
            sVar18 = psVar211[-5] + psVar211[1] * 6;
            sVar20 = psVar211[-2] + psVar211[4] * 6;
            sVar21 = psVar211[1] + psVar211[7] * 6;
            sVar22 = psVar211[4] + psVar211[10] * 6;
            sVar45 = sVar20 + psVar211[10] + (psVar211[7] + psVar211[1]) * 4;
            sVar239 = sVar21 + psVar211[0xd] + (psVar211[10] + psVar211[4]) * 4;
            sVar46 = sVar22 + psVar211[0x10] + (psVar211[0xd] + psVar211[7]) * 4;
            sVar24 = psVar211[-4] + psVar211[2] * 6;
            sVar25 = psVar211[-1] + psVar211[5] * 6;
            sVar26 = psVar211[2] + psVar211[8] * 6;
            sVar27 = psVar211[5] + psVar211[0xb] * 6;
            sVar15 = sVar25 + psVar211[0xb] + sVar33;
            sVar238 = sVar26 + psVar211[0xe] + sVar34;
            sVar16 = sVar27 + psVar211[0x11] + sVar39;
            auVar36[2] = (char)sVar40;
            auVar36._0_2_ =
                 psVar211[-6] + *psVar211 * 6 + psVar211[6] + (psVar211[3] + psVar211[-3]) * 4;
            auVar36[3] = (char)((ushort)sVar40 >> 8);
            auVar36[4] = (char)sVar43;
            auVar36[5] = (char)((ushort)sVar43 >> 8);
            auVar36[6] = (char)sVar44;
            auVar36[7] = (char)((ushort)sVar44 >> 8);
            auVar36._8_2_ =
                 psVar211[6] + psVar211[0xc] * 6 + psVar211[0x12] +
                 (psVar211[0xf] + psVar211[9]) * 4;
            auVar36._10_2_ =
                 psVar211[9] + psVar211[0xf] * 6 + psVar211[0x15] +
                 (psVar211[0x12] + psVar211[0xc]) * 4;
            auVar36._12_2_ =
                 psVar211[0xc] + psVar211[0x12] * 6 + psVar211[0x18] +
                 (psVar211[0x15] + psVar211[0xf]) * 4;
            auVar36._14_2_ =
                 psVar211[0xf] + psVar211[0x15] * 6 + psVar211[0x1b] +
                 (psVar211[0x18] + psVar211[0x12]) * 4;
            uVar14 = NEON_raddhn(CONCAT17((char)((ushort)sVar22 >> 8),
                                          CONCAT16((char)sVar22,
                                                   CONCAT15((char)((ushort)sVar21 >> 8),
                                                            CONCAT14((char)sVar21,
                                                                     CONCAT13((char)((ushort)sVar20
                                                                                    >> 8),
                                                                              CONCAT12((char)sVar20,
                                                                                       sVar18)))))),
                                 auVar36,ZEXT216(0),2);
            auVar42[2] = (char)sVar45;
            auVar42._0_2_ = sVar18 + psVar211[7] + (psVar211[4] + psVar211[-2]) * 4;
            auVar42[3] = (char)((ushort)sVar45 >> 8);
            auVar42[4] = (char)sVar239;
            auVar42[5] = (char)((ushort)sVar239 >> 8);
            auVar42[6] = (char)sVar46;
            auVar42[7] = (char)((ushort)sVar46 >> 8);
            auVar42._8_2_ =
                 psVar211[7] + psVar211[0xd] * 6 + psVar211[0x13] +
                 (psVar211[0x10] + psVar211[10]) * 4;
            auVar42._10_2_ =
                 psVar211[10] + psVar211[0x10] * 6 + psVar211[0x16] +
                 (psVar211[0x13] + psVar211[0xd]) * 4;
            auVar42._12_2_ =
                 psVar211[0xd] + psVar211[0x13] * 6 + psVar211[0x19] +
                 (psVar211[0x16] + psVar211[0x10]) * 4;
            auVar42._14_2_ =
                 psVar211[0x10] + psVar211[0x16] * 6 + psVar211[0x1c] +
                 (psVar211[0x19] + psVar211[0x13]) * 4;
            uVar19 = NEON_raddhn(CONCAT17((char)((ushort)sVar27 >> 8),
                                          CONCAT16((char)sVar27,
                                                   CONCAT15((char)((ushort)sVar26 >> 8),
                                                            CONCAT14((char)sVar26,
                                                                     CONCAT13((char)((ushort)sVar25
                                                                                    >> 8),
                                                                              CONCAT12((char)sVar25,
                                                                                       sVar24)))))),
                                 auVar42,ZEXT216(0),2);
            auVar13[2] = (char)sVar15;
            auVar13._0_2_ = sVar24 + psVar211[8] + sVar32;
            auVar13[3] = (char)((ushort)sVar15 >> 8);
            auVar13[4] = (char)sVar238;
            auVar13[5] = (char)((ushort)sVar238 >> 8);
            auVar13[6] = (char)sVar16;
            auVar13[7] = (char)((ushort)sVar16 >> 8);
            auVar13._8_2_ =
                 psVar211[8] + psVar211[0xe] * 6 + psVar211[0x14] +
                 (psVar211[0x11] + psVar211[0xb]) * 4;
            auVar13._10_2_ =
                 psVar211[0xb] + psVar211[0x11] * 6 + psVar211[0x17] +
                 (psVar211[0x14] + psVar211[0xe]) * 4;
            auVar13._12_2_ =
                 psVar211[0xe] + psVar211[0x14] * 6 + psVar211[0x1a] +
                 (psVar211[0x17] + psVar211[0x11]) * 4;
            auVar13._14_2_ =
                 psVar211[0x11] + psVar211[0x17] * 6 + psVar211[0x1d] +
                 (psVar211[0x1a] + psVar211[0x14]) * 4;
            uVar236 = NEON_raddhn(CONCAT17((char)((ushort)sVar39 >> 8),
                                           CONCAT16((char)sVar39,
                                                    CONCAT15((char)((ushort)sVar34 >> 8),
                                                             CONCAT14((char)sVar34,
                                                                      CONCAT13((char)((ushort)sVar33
                                                                                     >> 8),
                                                                               CONCAT12((char)sVar33
                                                                                        ,sVar32)))))
                                          ),auVar13,ZEXT216(0),2);
            puVar3 = (undefined1 *)(lStack_e0 + uVar216);
            *puVar3 = (char)uVar14;
            puVar3[1] = (char)uVar19;
            puVar3[2] = (char)uVar236;
            puVar3[3] = (char)((ulong)uVar14 >> 8);
            puVar3[4] = (char)((ulong)uVar19 >> 8);
            puVar3[5] = (char)((ulong)uVar236 >> 8);
            puVar3[6] = (char)((ulong)uVar14 >> 0x10);
            puVar3[7] = (char)((ulong)uVar19 >> 0x10);
            puVar3[8] = (char)((ulong)uVar236 >> 0x10);
            puVar3[9] = (char)((ulong)uVar14 >> 0x18);
            puVar3[10] = (char)((ulong)uVar19 >> 0x18);
            puVar3[0xb] = (char)((ulong)uVar236 >> 0x18);
            puVar3[0xc] = (char)((ulong)uVar14 >> 0x20);
            puVar3[0xd] = (char)((ulong)uVar19 >> 0x20);
            puVar3[0xe] = (char)((ulong)uVar236 >> 0x20);
            puVar3[0xf] = (char)((ulong)uVar14 >> 0x28);
            puVar3[0x10] = (char)((ulong)uVar19 >> 0x28);
            puVar3[0x11] = (char)((ulong)uVar236 >> 0x28);
            puVar3[0x12] = (char)((ulong)uVar14 >> 0x30);
            puVar3[0x13] = (char)((ulong)uVar19 >> 0x30);
            puVar3[0x14] = (char)((ulong)uVar236 >> 0x30);
            puVar3[0x15] = (char)((ulong)uVar14 >> 0x38);
            puVar3[0x16] = (char)((ulong)uVar19 >> 0x38);
            puVar3[0x17] = (char)((ulong)uVar236 >> 0x38);
            uVar216 = uVar216 + 0x18;
            psVar211 = psVar211 + 0x18;
          } while (uVar216 <= uVar227 - 0x18);
        }
        else {
          if (param_2 != 4) goto LAB_1093660cc;
          uVar216 = 0;
          psVar211 = psVar229;
          do {
            Hint_Prefetch(psVar211 + 0xa0,0,0,0);
            Hint_Prefetch(psVar211 + 0xb0,0,0,0);
            psVar218 = psVar211 + -8;
            psVar221 = psVar211 + -4;
            psVar203 = psVar211 + 4;
            psVar224 = psVar211 + 8;
            psVar48 = psVar211 + -7;
            psVar49 = psVar211 + -6;
            psVar50 = psVar211 + -5;
            psVar51 = psVar211 + -4;
            psVar52 = psVar211 + -3;
            psVar53 = psVar211 + -2;
            psVar54 = psVar211 + -1;
            sVar15 = *psVar211;
            psVar55 = psVar211 + 1;
            psVar56 = psVar211 + 2;
            psVar57 = psVar211 + 3;
            psVar58 = psVar211 + 4;
            psVar59 = psVar211 + 5;
            psVar222 = psVar211 + 6;
            psVar60 = psVar211 + 7;
            psVar61 = psVar211 + 8;
            psVar62 = psVar211 + 9;
            psVar219 = psVar211 + 10;
            psVar63 = psVar211 + 0xb;
            psVar64 = psVar211 + 0xc;
            psVar65 = psVar211 + 0xd;
            psVar66 = psVar211 + 0xe;
            psVar67 = psVar211 + 0xf;
            psVar68 = psVar211 + 0x10;
            psVar69 = psVar211 + 0x11;
            psVar70 = psVar211 + 0x12;
            psVar71 = psVar211 + 0x13;
            psVar72 = psVar211 + 0x14;
            psVar73 = psVar211 + 0x15;
            psVar74 = psVar211 + 0x16;
            psVar75 = psVar211 + 0x17;
            psVar76 = psVar211 + 9;
            psVar77 = psVar211 + 10;
            psVar78 = psVar211 + 0xb;
            psVar79 = psVar211 + 0xc;
            sVar43 = psVar211[0xd];
            psVar80 = psVar211 + 0xe;
            psVar81 = psVar211 + 0xf;
            psVar82 = psVar211 + 0x10;
            sVar44 = psVar211[0x11];
            psVar83 = psVar211 + 0x12;
            psVar84 = psVar211 + 0x13;
            psVar85 = psVar211 + 0x14;
            sVar45 = psVar211[0x15];
            psVar86 = psVar211 + 0x16;
            psVar87 = psVar211 + 0x17;
            psVar88 = psVar211 + 0x18;
            psVar89 = psVar211 + 0x19;
            psVar90 = psVar211 + 0x1a;
            psVar91 = psVar211 + 0x1b;
            psVar92 = psVar211 + 0x1c;
            psVar93 = psVar211 + 0x1d;
            psVar94 = psVar211 + 0x1e;
            psVar95 = psVar211 + 0x1f;
            psVar96 = psVar211 + 0x20;
            psVar97 = psVar211 + 0x21;
            psVar98 = psVar211 + 0x22;
            psVar99 = psVar211 + 0x23;
            psVar100 = psVar211 + 0x24;
            psVar101 = psVar211 + 0x25;
            psVar102 = psVar211 + 0x26;
            psVar103 = psVar211 + 0x27;
            psVar104 = psVar211 + -3;
            psVar105 = psVar211 + -2;
            psVar106 = psVar211 + -1;
            sVar238 = *psVar211;
            psVar107 = psVar211 + 1;
            psVar108 = psVar211 + 2;
            psVar109 = psVar211 + 3;
            psVar110 = psVar211 + 4;
            psVar111 = psVar211 + 5;
            psVar112 = psVar211 + 6;
            psVar113 = psVar211 + 7;
            psVar114 = psVar211 + 8;
            psVar115 = psVar211 + 9;
            psVar116 = psVar211 + 10;
            psVar117 = psVar211 + 0xb;
            psVar118 = psVar211 + 0xc;
            psVar119 = psVar211 + 0xd;
            psVar120 = psVar211 + 0xe;
            psVar121 = psVar211 + 0xf;
            psVar122 = psVar211 + 0x10;
            psVar123 = psVar211 + 0x11;
            psVar124 = psVar211 + 0x12;
            psVar125 = psVar211 + 0x13;
            psVar126 = psVar211 + 0x14;
            psVar127 = psVar211 + 0x15;
            psVar128 = psVar211 + 0x16;
            psVar129 = psVar211 + 0x17;
            psVar130 = psVar211 + 0x18;
            psVar131 = psVar211 + 0x19;
            psVar132 = psVar211 + 0x1a;
            psVar133 = psVar211 + 0x1b;
            psVar134 = psVar211 + 5;
            psVar135 = psVar211 + 6;
            psVar136 = psVar211 + 7;
            psVar137 = psVar211 + 8;
            psVar138 = psVar211 + 9;
            psVar139 = psVar211 + 10;
            psVar140 = psVar211 + 0xb;
            psVar141 = psVar211 + 0xc;
            psVar142 = psVar211 + 0xd;
            psVar143 = psVar211 + 0xe;
            psVar144 = psVar211 + 0xf;
            psVar145 = psVar211 + 0x10;
            psVar146 = psVar211 + 0x11;
            psVar147 = psVar211 + 0x12;
            psVar148 = psVar211 + 0x13;
            psVar149 = psVar211 + 0x14;
            psVar150 = psVar211 + 0x15;
            psVar151 = psVar211 + 0x16;
            psVar152 = psVar211 + 0x17;
            psVar153 = psVar211 + 0x18;
            psVar154 = psVar211 + 0x19;
            psVar155 = psVar211 + 0x1a;
            psVar156 = psVar211 + 0x1b;
            psVar157 = psVar211 + 0x1c;
            psVar158 = psVar211 + 0x1d;
            psVar159 = psVar211 + 0x1e;
            psVar160 = psVar211 + 0x1f;
            psVar161 = psVar211 + 0x20;
            psVar162 = psVar211 + 0x21;
            psVar163 = psVar211 + 0x22;
            psVar164 = psVar211 + 0x23;
            sVar239 = *psVar211;
            psVar165 = psVar211 + 1;
            psVar166 = psVar211 + 2;
            psVar167 = psVar211 + 3;
            psVar168 = psVar211 + 4;
            psVar169 = psVar211 + 5;
            psVar170 = psVar211 + 6;
            psVar171 = psVar211 + 7;
            psVar172 = psVar211 + 8;
            psVar173 = psVar211 + 9;
            psVar174 = psVar211 + 10;
            psVar175 = psVar211 + 0xb;
            psVar176 = psVar211 + 0xc;
            psVar177 = psVar211 + 0xd;
            psVar178 = psVar211 + 0xe;
            psVar179 = psVar211 + 0xf;
            psVar180 = psVar211 + 0x10;
            psVar181 = psVar211 + 0x11;
            psVar182 = psVar211 + 0x12;
            psVar183 = psVar211 + 0x13;
            psVar184 = psVar211 + 0x14;
            psVar185 = psVar211 + 0x15;
            psVar186 = psVar211 + 0x16;
            psVar187 = psVar211 + 0x17;
            psVar188 = psVar211 + 0x18;
            psVar189 = psVar211 + 0x19;
            psVar190 = psVar211 + 0x1a;
            psVar191 = psVar211 + 0x1b;
            psVar192 = psVar211 + 0x1c;
            psVar193 = psVar211 + 0x1d;
            psVar194 = psVar211 + 0x1e;
            psVar195 = psVar211 + 0x1f;
            psVar211 = psVar211 + 0x20;
            sVar33 = (*psVar136 + *psVar106) * 4;
            sVar34 = (*psVar140 + *psVar109) * 4;
            sVar39 = (*psVar144 + *psVar113) * 4;
            sVar40 = (*psVar148 + *psVar117) * 4;
            sVar18 = *psVar79 + *psVar51 + (*psVar137 + sVar238) * 4 + *psVar168 * 6;
            sVar20 = *psVar82 + sVar15 + (*psVar141 + *psVar110) * 4 + *psVar172 * 6;
            sVar21 = *psVar85 + *psVar58 + (*psVar145 + *psVar114) * 4 + *psVar176 * 6;
            sVar22 = sVar43 + *psVar52 + (*psVar138 + *psVar107) * 4 + *psVar169 * 6;
            sVar24 = sVar44 + *psVar55 + (*psVar142 + *psVar111) * 4 + *psVar173 * 6;
            sVar25 = sVar45 + *psVar59 + (*psVar146 + *psVar115) * 4 + *psVar177 * 6;
            sVar26 = *psVar80 + *psVar53 + (*psVar139 + *psVar108) * 4 + *psVar170 * 6;
            sVar27 = *psVar83 + *psVar56 + (*psVar143 + *psVar112) * 4 + *psVar174 * 6;
            sVar32 = *psVar86 + *psVar222 + (*psVar147 + *psVar116) * 4 + *psVar178 * 6;
            sVar15 = *psVar81 + *psVar54 + sVar34 + *psVar171 * 6;
            sVar238 = *psVar84 + *psVar57 + sVar39 + *psVar175 * 6;
            sVar16 = *psVar87 + *psVar60 + sVar40 + *psVar179 * 6;
            auVar17[2] = (char)sVar18;
            auVar17._0_2_ = *psVar224 + *psVar218 + (*psVar203 + *psVar221) * 4 + sVar239 * 6;
            auVar17[3] = (char)((ushort)sVar18 >> 8);
            auVar17[4] = (char)sVar20;
            auVar17[5] = (char)((ushort)sVar20 >> 8);
            auVar17[6] = (char)sVar21;
            auVar17[7] = (char)((ushort)sVar21 >> 8);
            auVar17._8_2_ = *psVar88 + *psVar61 + (*psVar149 + *psVar118) * 4 + *psVar180 * 6;
            auVar17._10_2_ = *psVar92 + *psVar64 + (*psVar153 + *psVar122) * 4 + *psVar184 * 6;
            auVar17._12_2_ = *psVar96 + *psVar68 + (*psVar157 + *psVar126) * 4 + *psVar188 * 6;
            auVar17._14_2_ = *psVar100 + *psVar72 + (*psVar161 + *psVar130) * 4 + *psVar192 * 6;
            uVar14 = NEON_raddhn(CONCAT17((char)((ushort)sVar40 >> 8),
                                          CONCAT16((char)sVar40,
                                                   CONCAT15((char)((ushort)sVar39 >> 8),
                                                            CONCAT14((char)sVar39,
                                                                     CONCAT13((char)((ushort)sVar34
                                                                                    >> 8),
                                                                              CONCAT12((char)sVar34,
                                                                                       sVar33)))))),
                                 auVar17,ZEXT216(0),2);
            auVar23[2] = (char)sVar22;
            auVar23._0_2_ = *psVar76 + *psVar48 + (*psVar134 + *psVar104) * 4 + *psVar165 * 6;
            auVar23[3] = (char)((ushort)sVar22 >> 8);
            auVar23[4] = (char)sVar24;
            auVar23[5] = (char)((ushort)sVar24 >> 8);
            auVar23[6] = (char)sVar25;
            auVar23[7] = (char)((ushort)sVar25 >> 8);
            auVar23._8_2_ = *psVar89 + *psVar62 + (*psVar150 + *psVar119) * 4 + *psVar181 * 6;
            auVar23._10_2_ = *psVar93 + *psVar65 + (*psVar154 + *psVar123) * 4 + *psVar185 * 6;
            auVar23._12_2_ = *psVar97 + *psVar69 + (*psVar158 + *psVar127) * 4 + *psVar189 * 6;
            auVar23._14_2_ = *psVar101 + *psVar73 + (*psVar162 + *psVar131) * 4 + *psVar193 * 6;
            uVar19 = NEON_raddhn(CONCAT17((char)((ushort)sVar45 >> 8),
                                          CONCAT16((char)sVar45,
                                                   CONCAT15((char)((ushort)sVar44 >> 8),
                                                            CONCAT14((char)sVar44,
                                                                     CONCAT13((char)((ushort)sVar43
                                                                                    >> 8),
                                                                              CONCAT12((char)sVar43,
                                                                                       *psVar76)))))
                                         ),auVar23,ZEXT216(0),2);
            auVar30[2] = (char)sVar26;
            auVar30._0_2_ = *psVar77 + *psVar49 + (*psVar135 + *psVar105) * 4 + *psVar166 * 6;
            auVar30[3] = (char)((ushort)sVar26 >> 8);
            auVar30[4] = (char)sVar27;
            auVar30[5] = (char)((ushort)sVar27 >> 8);
            auVar30[6] = (char)sVar32;
            auVar30[7] = (char)((ushort)sVar32 >> 8);
            auVar30._8_2_ = *psVar90 + *psVar219 + (*psVar151 + *psVar120) * 4 + *psVar182 * 6;
            auVar30._10_2_ = *psVar94 + *psVar66 + (*psVar155 + *psVar124) * 4 + *psVar186 * 6;
            auVar30._12_2_ = *psVar98 + *psVar70 + (*psVar159 + *psVar128) * 4 + *psVar190 * 6;
            auVar30._14_2_ = *psVar102 + *psVar74 + (*psVar163 + *psVar132) * 4 + *psVar194 * 6;
            uVar236 = NEON_raddhn(CONCAT26(*psVar86,CONCAT24(*psVar83,CONCAT22(*psVar80,*psVar77))),
                                  auVar30,ZEXT216(0),2);
            auVar12[2] = (char)sVar15;
            auVar12._0_2_ = *psVar78 + *psVar50 + sVar33 + *psVar167 * 6;
            auVar12[3] = (char)((ushort)sVar15 >> 8);
            auVar12[4] = (char)sVar238;
            auVar12[5] = (char)((ushort)sVar238 >> 8);
            auVar12[6] = (char)sVar16;
            auVar12[7] = (char)((ushort)sVar16 >> 8);
            auVar12._8_2_ = *psVar91 + *psVar63 + (*psVar152 + *psVar121) * 4 + *psVar183 * 6;
            auVar12._10_2_ = *psVar95 + *psVar67 + (*psVar156 + *psVar125) * 4 + *psVar187 * 6;
            auVar12._12_2_ = *psVar99 + *psVar71 + (*psVar160 + *psVar129) * 4 + *psVar191 * 6;
            auVar12._14_2_ = *psVar103 + *psVar75 + (*psVar164 + *psVar133) * 4 + *psVar195 * 6;
            uVar237 = NEON_raddhn(CONCAT26(*psVar87,CONCAT24(*psVar84,CONCAT22(*psVar81,*psVar78))),
                                  auVar12,ZEXT216(0),2);
            puVar3 = (undefined1 *)(lStack_e0 + uVar216);
            *puVar3 = (char)uVar14;
            puVar3[1] = (char)uVar19;
            puVar3[2] = (char)uVar236;
            puVar3[3] = (char)uVar237;
            puVar3[4] = (char)((ulong)uVar14 >> 8);
            puVar3[5] = (char)((ulong)uVar19 >> 8);
            puVar3[6] = (char)((ulong)uVar236 >> 8);
            puVar3[7] = (char)((ulong)uVar237 >> 8);
            puVar3[8] = (char)((ulong)uVar14 >> 0x10);
            puVar3[9] = (char)((ulong)uVar19 >> 0x10);
            puVar3[10] = (char)((ulong)uVar236 >> 0x10);
            puVar3[0xb] = (char)((ulong)uVar237 >> 0x10);
            puVar3[0xc] = (char)((ulong)uVar14 >> 0x18);
            puVar3[0xd] = (char)((ulong)uVar19 >> 0x18);
            puVar3[0xe] = (char)((ulong)uVar236 >> 0x18);
            puVar3[0xf] = (char)((ulong)uVar237 >> 0x18);
            puVar3[0x10] = (char)((ulong)uVar14 >> 0x20);
            puVar3[0x11] = (char)((ulong)uVar19 >> 0x20);
            puVar3[0x12] = (char)((ulong)uVar236 >> 0x20);
            puVar3[0x13] = (char)((ulong)uVar237 >> 0x20);
            puVar3[0x14] = (char)((ulong)uVar14 >> 0x28);
            puVar3[0x15] = (char)((ulong)uVar19 >> 0x28);
            puVar3[0x16] = (char)((ulong)uVar236 >> 0x28);
            puVar3[0x17] = (char)((ulong)uVar237 >> 0x28);
            puVar3[0x18] = (char)((ulong)uVar14 >> 0x30);
            puVar3[0x19] = (char)((ulong)uVar19 >> 0x30);
            puVar3[0x1a] = (char)((ulong)uVar236 >> 0x30);
            puVar3[0x1b] = (char)((ulong)uVar237 >> 0x30);
            puVar3[0x1c] = (char)((ulong)uVar14 >> 0x38);
            puVar3[0x1d] = (char)((ulong)uVar19 >> 0x38);
            puVar3[0x1e] = (char)((ulong)uVar236 >> 0x38);
            puVar3[0x1f] = (char)((ulong)uVar237 >> 0x38);
            uVar216 = uVar216 + 0x20;
          } while (uVar216 <= uVar227 - 0x20);
        }
LAB_1093661b8:
        uVar215 = 0;
        psVar219 = psVar229 + -(long)iVar8;
        psVar222 = psVar229 + iVar8;
        psVar224 = psVar229;
        psVar203 = psVar229 + -lVar228;
        psVar211 = psVar229 + lVar228;
        do {
          if (uVar216 < uVar227) {
            uVar226 = uVar216;
            do {
              *(char *)(lStack_e0 + uVar215 + uVar226) =
                   (char)((uint)(ushort)psVar219[uVar226] + (uint)(ushort)psVar222[uVar226] +
                          ((uint)(ushort)psVar211[uVar226] + (uint)(ushort)psVar203[uVar226]) * 4 +
                          (uint)(ushort)psVar224[uVar226] * 6 + 0x80 >> 8);
              uVar226 = uVar226 + lVar228;
            } while (uVar226 < uVar227);
          }
          uVar215 = uVar215 + 1;
          psVar211 = psVar211 + 1;
          psVar203 = psVar203 + 1;
          psVar224 = psVar224 + 1;
          psVar222 = psVar222 + 1;
          psVar219 = psVar219 + 1;
        } while (uVar215 != param_2);
      }
      lVar213 = lVar213 + param_4;
      uVar216 = param_1[1];
      lStack_b8 = lStack_b8 + param_4;
      pbStack_c0 = pbStack_c0 + param_4;
      lStack_e0 = lStack_e0 + param_6;
      uStack_e8 = uVar1;
    } while (uVar1 < uVar216);
  }
  if (alStack_b0[0] != 0) {
    __ZdlPv();
  }
  if (lStack_98 != 0) {
    lStack_90 = lStack_98;
    __ZdlPv();
  }
  return;
}



/* Entry: 109366310; end: 109366413;  */

undefined8 * FUN_109366310(undefined8 *param_1,ulong param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  
  uVar3 = param_1[2];
  puVar2 = (undefined8 *)*param_1;
  if ((ulong)((long)(uVar3 - (long)puVar2) >> 1) < param_2) {
    uVar6 = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      param_1[1] = puVar2;
      __ZdlPv();
      uVar3 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if ((long)param_2 < 0) {
      FUN_1093664bc();
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      if (uVar6 != 0) {
        FUN_109366488(puVar2);
        lVar7 = puVar2[1];
        _bzero(lVar7,uVar6 << 1);
        puVar2[1] = lVar7 + uVar6 * 2;
      }
      return puVar2;
    }
    uVar6 = uVar3;
    if (uVar3 <= param_2) {
      uVar6 = param_2;
    }
    if (0x7ffffffffffffffd < uVar3) {
      uVar6 = 0x7fffffffffffffff;
    }
    puVar2 = param_1;
    FUN_109366488(param_1,uVar6);
    puVar4 = (undefined2 *)param_1[1];
    lVar7 = param_2 << 1;
    uVar1 = *param_3;
    puVar5 = puVar4;
    do {
      *puVar5 = uVar1;
      lVar7 = lVar7 + -2;
      puVar5 = puVar5 + 1;
    } while (lVar7 != 0);
    param_1[1] = puVar4 + param_2;
  }
  else {
    puVar5 = (undefined2 *)param_1[1];
    uVar6 = (long)puVar5 - (long)puVar2 >> 1;
    uVar3 = uVar6;
    if (param_2 <= uVar6) {
      uVar3 = param_2;
    }
    if (uVar3 != 0) {
      uVar1 = *param_3;
      puVar8 = puVar2;
      do {
        *(undefined2 *)puVar8 = uVar1;
        uVar3 = uVar3 - 1;
        puVar8 = (undefined8 *)((long)puVar8 + 2);
      } while (uVar3 != 0);
    }
    if (param_2 < uVar6 || param_2 - uVar6 == 0) {
      param_1[1] = (long)puVar2 + param_2 * 2;
    }
    else {
      uVar1 = *param_3;
      lVar7 = param_2 * 2 + uVar6 * -2;
      puVar4 = puVar5;
      do {
        *puVar4 = uVar1;
        lVar7 = lVar7 + -2;
        puVar4 = puVar4 + 1;
      } while (lVar7 != 0);
      param_1[1] = puVar5 + (param_2 - uVar6);
    }
  }
  return puVar2;
}



/* Entry: 109366414; end: 109366487;  */

undefined8 * FUN_109366414(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_109366488(param_1);
    lVar1 = param_1[1];
    _bzero(lVar1,param_2 << 1);
    param_1[1] = lVar1 + param_2 * 2;
  }
  return param_1;
}



/* Entry: 109366488; end: 1093664bb;  */

/* WARNING: Possible PIC construction at 0x0001093665a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001093665a4) */

undefined1  [16] FUN_109366488(long *param_1,long param_2)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 **ppuVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  if (-1 < param_2) {
    plVar2 = param_1;
    FUN_1093664d0();
    *param_1 = (long)plVar2;
    param_1[1] = (long)plVar2;
    param_1[2] = (long)plVar2 + param_2 * 2;
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = plVar2;
    return auVar8;
  }
  FUN_1093664bc();
  pcStack_28 = FUN_1093664bc;
  puVar3 = (undefined8 *)&DAT_10f62a4d8;
  puStack_30 = &stack0xfffffffffffffff0;
  func_0x000104c4f6cc();
  pcStack_38 = FUN_1093664d0;
  ppuVar6 = &puStack_40;
  if (-1 < param_2) {
    lVar4 = param_2 << 1;
    puStack_40 = (undefined1 *)&puStack_30;
    __Znwm(lVar4);
    auVar9._8_8_ = param_2;
    auVar9._0_8_ = lVar4;
    return auVar9;
  }
  uVar7 = 0x109366500;
  puStack_40 = (undefined1 *)&puStack_30;
  func_0x000104c4f740();
  puVar1 = &stack0xffffffffffffffb0;
  while( true ) {
    *(long *)(puVar1 + -0x20) = unaff_x20;
    *(undefined8 **)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 ***)(puVar1 + -0x10) = ppuVar6;
    *(undefined8 *)(puVar1 + -8) = uVar7;
    if (-1 < param_2) {
      puVar5 = puVar3;
      FUN_109366548();
      *puVar3 = puVar5;
      puVar3[1] = puVar5;
      puVar3[2] = (long)puVar5 + param_2 * 2;
      auVar10._8_8_ = param_2;
      auVar10._0_8_ = puVar5;
      return auVar10;
    }
    FUN_109366534();
    *(undefined1 **)(puVar1 + -0x30) = puVar1 + -0x10;
    *(code **)(puVar1 + -0x28) = FUN_109366534;
    puVar3 = (undefined8 *)&DAT_10f62a4d8;
    func_0x000104c4f6cc();
    *(long *)(puVar1 + -0x50) = unaff_x20;
    *(undefined8 **)(puVar1 + -0x48) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x40) = puVar1 + -0x30;
    *(code **)(puVar1 + -0x38) = FUN_109366548;
    if (-1 < param_2) break;
    func_0x000104c4f740();
    *(undefined8 *)(puVar1 + -0x80) = unaff_x22;
    *(undefined8 *)(puVar1 + -0x78) = unaff_x21;
    *(long *)(puVar1 + -0x70) = unaff_x20;
    *(undefined8 **)(puVar1 + -0x68) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x60) = puVar1 + -0x40;
    *(code **)(puVar1 + -0x58) = FUN_109366578;
    ppuVar6 = (undefined1 **)(puVar1 + -0x60);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    if (param_2 == 0) {
      auVar12._8_8_ = 0;
      auVar12._0_8_ = puVar3;
      return auVar12;
    }
    uVar7 = 0x1093665a4;
    puVar1 = puVar1 + -0x80;
    unaff_x19 = puVar3;
    unaff_x20 = param_2;
  }
  lVar4 = param_2 << 1;
  __Znwm(lVar4);
  auVar11._8_8_ = param_2;
  auVar11._0_8_ = lVar4;
  return auVar11;
}



/* Entry: 1093664bc; end: 1093664cf;  */

/* WARNING: Possible PIC construction at 0x0001093665a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001093665a4) */

undefined1  [16] FUN_1093664bc(undefined8 param_1,long param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 **ppuVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  puVar2 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  uStack_18 = 0x1093664d0;
  ppuVar5 = &puStack_20;
  if (-1 < param_2) {
    lVar3 = param_2 << 1;
    puStack_20 = &stack0xfffffffffffffff0;
    __Znwm(lVar3);
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = lVar3;
    return auVar7;
  }
  uVar6 = 0x109366500;
  puStack_20 = &stack0xfffffffffffffff0;
  func_0x000104c4f740();
  puVar1 = &stack0xffffffffffffffd0;
  while( true ) {
    *(long *)(puVar1 + -0x20) = unaff_x20;
    *(undefined8 **)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 ***)(puVar1 + -0x10) = ppuVar5;
    *(undefined8 *)(puVar1 + -8) = uVar6;
    if (-1 < param_2) {
      puVar4 = puVar2;
      FUN_109366548();
      *puVar2 = puVar4;
      puVar2[1] = puVar4;
      puVar2[2] = (long)puVar4 + param_2 * 2;
      auVar8._8_8_ = param_2;
      auVar8._0_8_ = puVar4;
      return auVar8;
    }
    FUN_109366534();
    *(undefined1 **)(puVar1 + -0x30) = puVar1 + -0x10;
    *(code **)(puVar1 + -0x28) = FUN_109366534;
    puVar2 = (undefined8 *)&DAT_10f62a4d8;
    func_0x000104c4f6cc();
    *(long *)(puVar1 + -0x50) = unaff_x20;
    *(undefined8 **)(puVar1 + -0x48) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x40) = puVar1 + -0x30;
    *(code **)(puVar1 + -0x38) = FUN_109366548;
    if (-1 < param_2) break;
    func_0x000104c4f740();
    *(undefined8 *)(puVar1 + -0x80) = unaff_x22;
    *(undefined8 *)(puVar1 + -0x78) = unaff_x21;
    *(long *)(puVar1 + -0x70) = unaff_x20;
    *(undefined8 **)(puVar1 + -0x68) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x60) = puVar1 + -0x40;
    *(code **)(puVar1 + -0x58) = FUN_109366578;
    ppuVar5 = (undefined1 **)(puVar1 + -0x60);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    if (param_2 == 0) {
      auVar10._8_8_ = 0;
      auVar10._0_8_ = puVar2;
      return auVar10;
    }
    uVar6 = 0x1093665a4;
    puVar1 = puVar1 + -0x80;
    unaff_x19 = puVar2;
    unaff_x20 = param_2;
  }
  lVar3 = param_2 << 1;
  __Znwm(lVar3);
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = lVar3;
  return auVar9;
}



/* Entry: 1093664d0; end: 109366533;  */

/* WARNING: Possible PIC construction at 0x0001093665a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001093665a4) */

undefined1  [16] FUN_1093664d0(undefined8 *param_1,long param_2)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  puVar4 = &stack0xfffffffffffffff0;
  if (-1 < param_2) {
    lVar2 = param_2 << 1;
    __Znwm(lVar2);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar2;
    return auVar6;
  }
  uVar5 = 0x109366500;
  func_0x000104c4f740();
  puVar1 = &stack0xffffffffffffffe0;
  while( true ) {
    *(long *)(puVar1 + -0x20) = unaff_x20;
    *(undefined8 **)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = puVar4;
    *(undefined8 *)(puVar1 + -8) = uVar5;
    if (-1 < param_2) {
      puVar3 = param_1;
      FUN_109366548();
      *param_1 = puVar3;
      param_1[1] = puVar3;
      param_1[2] = (long)puVar3 + param_2 * 2;
      auVar7._8_8_ = param_2;
      auVar7._0_8_ = puVar3;
      return auVar7;
    }
    FUN_109366534();
    *(undefined1 **)(puVar1 + -0x30) = puVar1 + -0x10;
    *(code **)(puVar1 + -0x28) = FUN_109366534;
    param_1 = (undefined8 *)&DAT_10f62a4d8;
    func_0x000104c4f6cc();
    *(long *)(puVar1 + -0x50) = unaff_x20;
    *(undefined8 **)(puVar1 + -0x48) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x40) = puVar1 + -0x30;
    *(code **)(puVar1 + -0x38) = FUN_109366548;
    if (-1 < param_2) break;
    func_0x000104c4f740();
    *(undefined8 *)(puVar1 + -0x80) = unaff_x22;
    *(undefined8 *)(puVar1 + -0x78) = unaff_x21;
    *(long *)(puVar1 + -0x70) = unaff_x20;
    *(undefined8 **)(puVar1 + -0x68) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x60) = puVar1 + -0x40;
    *(code **)(puVar1 + -0x58) = FUN_109366578;
    puVar4 = puVar1 + -0x60;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    if (param_2 == 0) {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = param_1;
      return auVar9;
    }
    uVar5 = 0x1093665a4;
    puVar1 = puVar1 + -0x80;
    unaff_x19 = param_1;
    unaff_x20 = param_2;
  }
  lVar2 = param_2 << 1;
  __Znwm(lVar2);
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = lVar2;
  return auVar8;
}



/* Entry: 109366534; end: 109366547;  */

undefined1  [16] FUN_109366534(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (-1 < param_2) {
    lVar2 = param_2 << 1;
    __Znwm(lVar2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000104c4f740();
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  lVar2 = 0;
  if (param_2 != 0) {
    func_0x000109366500(puVar1);
    lVar3 = puVar1[1];
    lVar2 = param_2 << 1;
    _bzero(lVar3,lVar2);
    puVar1[1] = lVar3 + param_2 * 2;
  }
  auVar5._8_8_ = lVar2;
  auVar5._0_8_ = puVar1;
  return auVar5;
}



/* Entry: 109366548; end: 109366577;  */

undefined1  [16] FUN_109366548(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (-1 < param_2) {
    lVar1 = param_2 << 1;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104c4f740();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar1 = 0;
  if (param_2 != 0) {
    func_0x000109366500(param_1);
    lVar2 = param_1[1];
    lVar1 = param_2 << 1;
    _bzero(lVar2,lVar1);
    param_1[1] = lVar2 + param_2 * 2;
  }
  auVar4._8_8_ = lVar1;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 109366578; end: 1093665eb;  */

undefined8 * FUN_109366578(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    func_0x000109366500(param_1);
    lVar1 = param_1[1];
    _bzero(lVar1,param_2 << 1);
    param_1[1] = lVar1 + param_2 * 2;
  }
  return param_1;
}



/* Entry: 1093665ec; end: 1093671af;  */

void FUN_1093665ec(long *param_1,uint param_2,long param_3,long param_4,long param_5,long param_6,
                  ulong *param_7,ulong param_8,ulong param_9,int param_10,int param_11,
                  undefined1 *param_12,ulong *param_13)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  undefined8 *puVar6;
  byte bVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  long *plVar13;
  long *plVar14;
  undefined1 *puVar15;
  bool bVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  undefined1 *puVar28;
  long *plVar29;
  ulong uVar30;
  ulong uVar31;
  long lVar32;
  ulong uVar33;
  long *plVar34;
  long lVar35;
  byte bVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uVar41;
  undefined1 *puVar42;
  long lVar43;
  ulong uVar44;
  long lVar45;
  ulong uVar46;
  ulong uVar47;
  long lVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  ulong uStack_160;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined1 *puStack_e0;
  undefined1 *puStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long lStack_b0;
  long lStack_a8;
  long *plStack_98;
  long *plStack_90;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  
  if (((*param_1 != 0 && param_1[1] != 0) && param_8 <= *param_7) &&
      ((*param_1 == 0 || param_1[1] == 0) || *param_7 != param_8)) {
    bVar16 = param_9 < param_7[1];
  }
  else {
    bVar16 = false;
  }
  FUN_109365924(bVar16);
  uVar44 = *param_13;
  uVar23 = param_13[1];
  uVar9 = param_13[2];
  uVar24 = param_13[3];
  uVar41 = (ulong)param_2;
  FUN_109246310(&puStack_80,(*param_1 + *param_7 + -1) * uVar41);
  puVar15 = puStack_80;
  uVar2 = param_7[1] + 3;
  uVar19 = param_7[1] + ~param_9;
  if (uVar19 <= param_9) {
    uVar19 = param_9;
  }
  if (uVar2 <= (uVar19 << 1 | 1)) {
    uVar2 = uVar19 * 2 + 1;
  }
  FUN_109367420(&plStack_98,uVar2);
  plVar14 = plStack_98;
  lVar27 = (*param_1 + 0xfU & 0xfffffffffffffff0) * uVar41;
  FUN_109246310(&lStack_b0,lVar27 * uVar2 + 0x10);
  lVar3 = lStack_b0;
  uVar19 = *param_7 - 1;
  if (uVar19 < 2) {
    uVar19 = 1;
  }
  uVar46 = uVar19 * uVar41;
  FUN_109367514(&plStack_c8,uVar46);
  plVar13 = plStack_c8;
  puStack_e0 = (undefined1 *)0x0;
  puStack_d8 = (undefined1 *)0x0;
  uStack_d0 = 0;
  lStack_f8 = 0;
  lStack_f0 = 0;
  uStack_e8 = 0;
  if ((param_10 == 1) || (param_11 == 1)) {
    if (uVar46 != 0) {
      func_0x000107c27d58(&puStack_e0,uVar46);
    }
    puVar42 = puStack_e0;
    puVar28 = puStack_e0;
    uVar21 = uVar41;
    if (param_2 != 0) {
      do {
        *puVar28 = *param_12;
        uVar21 = uVar21 - 1;
        param_12 = param_12 + 1;
        puVar28 = puVar28 + 1;
      } while (uVar21 != 0);
    }
    if (uVar41 <= uVar46 && uVar46 - uVar41 != 0) {
      lVar20 = (uVar19 - 1) * uVar41;
      puVar28 = puStack_e0;
      do {
        puVar28[uVar41] = *puVar28;
        puVar28 = puVar28 + 1;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
    }
    if (param_11 == 1) {
      lVar20 = *param_1;
      uVar19 = *param_7;
      uVar21 = (lVar20 + uVar19 + 0xf) * uVar41;
      uVar47 = lStack_f0 - lStack_f8;
      if (uVar21 < uVar47 || uVar21 - uVar47 == 0) {
        if (uVar21 < uVar47) {
          lStack_f0 = lStack_f8 + uVar21;
        }
      }
      else {
        func_0x000107c27d58(&lStack_f8,uVar21 - uVar47);
        lVar20 = *param_1;
        uVar19 = *param_7;
      }
      uStack_160 = lStack_f8 + 0xfU & 0xfffffffffffffff0;
      uVar21 = (uVar19 + lVar20 + -1) * uVar41;
      if (uVar21 != 0) {
        uVar19 = 0;
        puVar28 = puVar15;
        uVar47 = uVar21;
        do {
          uVar30 = uVar47;
          if (uVar46 <= uVar47) {
            uVar30 = uVar46;
          }
          puVar11 = puVar28;
          puVar12 = puVar42;
          uVar25 = uVar21 - uVar19;
          if (uVar46 <= uVar21 - uVar19) {
            uVar25 = uVar46;
          }
          while (uVar25 != 0) {
            *puVar11 = *puVar12;
            uVar30 = uVar30 - 1;
            puVar11 = puVar11 + 1;
            puVar12 = puVar12 + 1;
            uVar25 = uVar30;
          }
          uVar19 = uVar19 + uVar46;
          puVar28 = puVar28 + uVar46;
          uVar47 = uVar47 - uVar46;
        } while (uVar19 < uVar21);
        lVar20 = *param_1;
        uVar19 = *param_7;
      }
      FUN_1093671b0(puVar15,uStack_160,lVar20,param_2,uVar19);
    }
    else {
      uStack_160 = 0;
    }
  }
  else {
    uStack_160 = 0;
    puVar42 = (undefined1 *)0x0;
  }
  lVar20 = param_1[1];
  uVar47 = param_8 - uVar44;
  uVar46 = uVar47 & ((long)uVar47 >> 0x3f ^ 0xffffffffffffffffU);
  uVar19 = *param_7 + (~param_8 - uVar23);
  uVar21 = uVar19 & ((long)uVar19 >> 0x3f ^ 0xffffffffffffffffU);
  bVar16 = 0 < (long)uVar47 || 0 < (long)uVar19;
  if (bVar16) {
    if (param_10 == 1) {
      _memcpy(puVar15,puVar42,uVar46 * uVar41);
      _memcpy(puVar15 + (*param_1 + *param_7 + ~uVar21) * uVar41,puVar42,uVar21 * uVar41);
    }
    else {
      lVar43 = uVar23 + uVar44 + *param_1;
      uVar23 = uVar44;
      if ((long)param_8 <= (long)uVar44) {
        uVar23 = param_8;
      }
      if (0 < (long)uVar47) {
        uVar30 = 0;
        plVar34 = plVar13;
        do {
          lVar17 = uVar30 - uVar46;
          FUN_109365a14(lVar17,lVar43,param_10,0,0);
          if (param_2 != 0) {
            lVar17 = (lVar17 + (uVar23 - uVar44)) * uVar41;
            plVar29 = plVar34;
            uVar25 = uVar41;
            do {
              *plVar29 = lVar17;
              lVar17 = lVar17 + 1;
              uVar25 = uVar25 - 1;
              plVar29 = plVar29 + 1;
            } while (uVar25 != 0);
          }
          uVar30 = uVar30 + 1;
          plVar34 = plVar34 + uVar41;
        } while (uVar30 != uVar47);
      }
      if (0 < (long)uVar19) {
        lVar17 = 0;
        plVar34 = plVar13 + uVar46 * uVar41;
        do {
          lVar22 = lVar17 + lVar43;
          FUN_109365a14(lVar22,lVar43,param_10,0,0);
          if (param_2 != 0) {
            lVar22 = (lVar22 + (uVar23 - uVar44)) * uVar41;
            plVar29 = plVar34;
            uVar47 = uVar41;
            do {
              *plVar29 = lVar22;
              lVar22 = lVar22 + 1;
              uVar47 = uVar47 - 1;
              plVar29 = plVar29 + 1;
            } while (uVar47 != 0);
          }
          lVar17 = lVar17 + 1;
          plVar34 = plVar34 + uVar41;
        } while (lVar17 < (long)uVar19);
      }
    }
  }
  lVar43 = 0;
  uVar23 = lVar3 + 0xfU & 0xfffffffffffffff0;
  lVar20 = uVar24 + uVar9 + lVar20;
  uVar24 = uVar9 - param_9;
  uVar47 = uVar24 & ((long)uVar24 >> 0x3f ^ 0xffffffffffffffffU);
  lVar22 = *param_1;
  uVar19 = param_7[1];
  lVar3 = uVar9 + ~param_9 + param_1[1] + uVar19;
  lVar17 = lVar20;
  if (lVar3 <= lVar20) {
    lVar17 = lVar3;
  }
  if ((long)param_8 <= (long)uVar44) {
    uVar44 = param_8;
  }
  lVar48 = (param_3 + (uVar47 - uVar9) * param_4) - uVar44 * uVar41;
  uVar30 = lVar17 - uVar47;
  lVar32 = uVar46 * uVar41;
  lVar3 = lVar22 + ~uVar21 + *param_7;
  lVar18 = param_6 * 2;
  uVar44 = uVar47;
  lVar17 = 0;
  do {
    uVar25 = ((uVar9 + uVar2) - uVar44) - (param_9 + lVar17);
    if ((long)uVar25 < 1) {
      uVar25 = (uVar2 - uVar19) + 1;
    }
    uVar8 = uVar30;
    if ((long)uVar25 <= (long)uVar30) {
      uVar8 = uVar25;
    }
    lVar45 = lVar17;
    uVar25 = uVar44;
    uVar26 = uVar8;
    if (0 < (long)uVar8) {
      do {
        if (uVar2 < lVar17 + 1U) {
          uVar44 = uVar25 + 1;
          lVar45 = lVar17;
        }
        else {
          uVar44 = uVar25;
          lVar45 = lVar17 + 1;
        }
        _memcpy(puVar15 + lVar32,lVar48,(lVar3 - uVar46) * uVar41);
        lVar35 = lVar32;
        plVar34 = plVar13;
        puVar42 = puVar15;
        if (param_10 != 1 && bVar16) {
          for (; lVar10 = uVar21 * uVar41, plVar29 = plVar13 + lVar32,
              puVar28 = puVar15 + lVar3 * uVar41, lVar35 != 0; lVar35 = lVar35 + -1) {
            *puVar42 = *(undefined1 *)(lVar48 + *plVar34);
            plVar34 = plVar34 + 1;
            puVar42 = puVar42 + 1;
          }
          for (; lVar10 != 0; lVar10 = lVar10 + -1) {
            *puVar28 = *(undefined1 *)(lVar48 + *plVar29);
            plVar29 = plVar29 + 1;
            puVar28 = puVar28 + 1;
          }
        }
        uVar25 = (uVar25 - uVar47) + lVar17;
        uVar40 = 0;
        if (uVar2 != 0) {
          uVar40 = uVar25 / uVar2;
        }
        FUN_1093671b0(puVar15,uVar23 + (uVar25 - uVar40 * uVar2) * lVar27,lVar22,param_2,*param_7);
        lVar48 = lVar48 + param_4;
        bVar1 = 1 < uVar26;
        lVar17 = lVar45;
        uVar25 = uVar44;
        uVar26 = uVar26 - 1;
      } while (bVar1);
    }
    uVar25 = ((uVar19 - 1) - lVar43) + param_1[1];
    if ((long)uVar2 <= (long)uVar25) {
      uVar25 = uVar2;
    }
    if ((long)uVar25 < 1) {
      uVar26 = 0;
    }
    else {
      uVar40 = 0;
      do {
        lVar17 = uVar24 + lVar43 + uVar40;
        FUN_109365a14(lVar17,lVar20,param_11,0,0);
        uVar26 = uStack_160;
        if (-1 < lVar17) {
          uVar26 = uVar40;
          if ((long)(uVar44 + lVar45) <= lVar17) break;
          uVar26 = 0;
          if (uVar2 != 0) {
            uVar26 = (lVar17 - uVar47) / uVar2;
          }
          uVar26 = uVar23 + ((lVar17 - uVar47) - uVar26 * uVar2) * lVar27;
        }
        plVar14[uVar40] = uVar26;
        uVar40 = uVar40 + 1;
        uVar26 = uVar25;
      } while (uVar25 != uVar40);
    }
    if ((long)uVar26 < (long)uVar19) {
      if (lStack_f8 != 0) {
        lStack_f0 = lStack_f8;
        __ZdlPv();
      }
      if (puStack_e0 != (undefined1 *)0x0) {
        puStack_d8 = puStack_e0;
        __ZdlPv();
      }
      if (plStack_c8 != (long *)0x0) {
        plStack_c0 = plStack_c8;
        __ZdlPv();
      }
      if (lStack_b0 != 0) {
        lStack_a8 = lStack_b0;
        __ZdlPv();
      }
      if (plStack_98 != (long *)0x0) {
        plStack_90 = plStack_98;
        __ZdlPv();
      }
      if (puStack_80 != (undefined1 *)0x0) {
        puStack_78 = puStack_80;
        __ZdlPv();
      }
      return;
    }
    uVar26 = uVar26 - (uVar19 - 1);
    uVar40 = *param_1 * uVar41;
    uVar31 = param_7[1];
    uVar33 = uVar40 & 0xffffffffffffffe0;
    uVar25 = uVar26;
    lVar17 = param_5;
    plVar34 = plVar14;
    if (uVar31 == 3) {
      if (1 < uVar26) {
        lVar35 = param_5 + param_6;
        do {
          uVar37 = 0;
          if (uVar33 != 0) {
            do {
              pauVar4 = (undefined1 (*) [16])(plVar34[1] + uVar37);
              Hint_Prefetch(pauVar4 + 0x14,0,0,0);
              pauVar5 = (undefined1 (*) [16])(plVar34[2] + uVar37);
              Hint_Prefetch(pauVar5 + 0x14,0,0,0);
              auVar49 = NEON_umin(*pauVar4,*pauVar5,1);
              auVar50 = NEON_umin(pauVar4[1],pauVar5[1],1);
              pauVar4 = (undefined1 (*) [16])(*plVar34 + uVar37);
              Hint_Prefetch(pauVar4 + 0x14,0,0,0);
              auVar51 = NEON_umin(auVar49,*pauVar4,1);
              puVar6 = (undefined8 *)(lVar17 + uVar37);
              auVar52 = NEON_umin(auVar50,pauVar4[1],1);
              puVar6[1] = auVar51._8_8_;
              *puVar6 = auVar51._0_8_;
              puVar6[3] = auVar52._8_8_;
              puVar6[2] = auVar52._0_8_;
              pauVar4 = (undefined1 (*) [16])(plVar34[3] + uVar37);
              Hint_Prefetch(pauVar4 + 0x14,0,0,0);
              auVar49 = NEON_umin(auVar49,*pauVar4,1);
              puVar6 = (undefined8 *)(lVar35 + uVar37);
              auVar50 = NEON_umin(auVar50,pauVar4[1],1);
              puVar6[1] = auVar49._8_8_;
              *puVar6 = auVar49._0_8_;
              puVar6[3] = auVar50._8_8_;
              puVar6[2] = auVar50._0_8_;
              uVar37 = uVar37 + 0x20;
            } while (uVar37 < uVar33);
          }
          if (uVar37 < uVar40) {
            do {
              bVar36 = *(byte *)(plVar34[2] + uVar37);
              if (*(byte *)(plVar34[1] + uVar37) <= *(byte *)(plVar34[2] + uVar37)) {
                bVar36 = *(byte *)(plVar34[1] + uVar37);
              }
              bVar7 = *(byte *)(*plVar34 + uVar37);
              if (bVar36 <= *(byte *)(*plVar34 + uVar37)) {
                bVar7 = bVar36;
              }
              *(byte *)(lVar17 + uVar37) = bVar7;
              bVar7 = *(byte *)(plVar34[3] + uVar37);
              if (bVar36 <= *(byte *)(plVar34[3] + uVar37)) {
                bVar7 = bVar36;
              }
              *(byte *)(lVar35 + uVar37) = bVar7;
              uVar37 = uVar37 + 1;
            } while (uVar40 - uVar37 != 0);
          }
          uVar25 = uVar25 - 2;
          lVar17 = lVar17 + lVar18;
          plVar34 = plVar34 + 2;
          lVar35 = lVar35 + lVar18;
        } while (1 < uVar25);
      }
    }
    else {
      uVar37 = uVar31;
      if (1 < uVar26) {
        while (1 < uVar37) {
          uVar37 = 0;
          if (uVar33 != 0) {
            do {
              pauVar4 = (undefined1 (*) [16])(plVar34[1] + uVar37);
              auVar50 = *pauVar4;
              auVar49 = pauVar4[1];
              Hint_Prefetch(pauVar4 + 0x14,0,0,0);
              uVar38 = 2;
              uVar39 = uVar38;
              if (2 < uVar31) {
                do {
                  pauVar4 = (undefined1 (*) [16])(plVar34[uVar38] + uVar37);
                  Hint_Prefetch(pauVar4 + 0x14,0,0,0);
                  auVar50 = NEON_umin(auVar50,*pauVar4,1);
                  auVar49 = NEON_umin(auVar49,pauVar4[1],1);
                  uVar38 = uVar38 + 1;
                  uVar39 = uVar31;
                } while (uVar31 != uVar38);
              }
              pauVar4 = (undefined1 (*) [16])(*plVar34 + uVar37);
              Hint_Prefetch(pauVar4 + 0x14,0,0,0);
              auVar51 = NEON_umin(auVar50,*pauVar4,1);
              puVar6 = (undefined8 *)(lVar17 + uVar37);
              auVar52 = NEON_umin(auVar49,pauVar4[1],1);
              puVar6[1] = auVar51._8_8_;
              *puVar6 = auVar51._0_8_;
              puVar6[3] = auVar52._8_8_;
              puVar6[2] = auVar52._0_8_;
              pauVar4 = (undefined1 (*) [16])(plVar34[uVar39] + uVar37);
              Hint_Prefetch(pauVar4 + 0x14,0,0,0);
              auVar50 = NEON_umin(auVar50,*pauVar4,1);
              puVar6 = (undefined8 *)(lVar17 + param_6 + uVar37);
              auVar49 = NEON_umin(auVar49,pauVar4[1],1);
              puVar6[1] = auVar50._8_8_;
              *puVar6 = auVar50._0_8_;
              puVar6[3] = auVar49._8_8_;
              puVar6[2] = auVar49._0_8_;
              uVar37 = uVar37 + 0x20;
            } while (uVar37 < uVar33);
          }
          if (uVar37 < uVar40) {
            do {
              bVar36 = *(byte *)(plVar34[1] + uVar37);
              uVar38 = 2;
              uVar39 = uVar38;
              if (2 < uVar31) {
                do {
                  bVar7 = *(byte *)(plVar34[uVar38] + uVar37);
                  if (bVar36 <= *(byte *)(plVar34[uVar38] + uVar37)) {
                    bVar7 = bVar36;
                  }
                  bVar36 = bVar7;
                  uVar38 = uVar38 + 1;
                  uVar39 = uVar31;
                } while (uVar31 != uVar38);
              }
              bVar7 = *(byte *)(*plVar34 + uVar37);
              if (bVar36 <= *(byte *)(*plVar34 + uVar37)) {
                bVar7 = bVar36;
              }
              *(byte *)(lVar17 + uVar37) = bVar7;
              bVar7 = *(byte *)(plVar34[uVar39] + uVar37);
              if (bVar36 <= *(byte *)(plVar34[uVar39] + uVar37)) {
                bVar7 = bVar36;
              }
              ((byte *)(lVar17 + uVar37))[param_6] = bVar7;
              uVar37 = uVar37 + 1;
            } while (uVar37 != uVar40);
          }
          uVar25 = uVar25 - 2;
          lVar17 = lVar17 + lVar18;
          plVar34 = plVar34 + 2;
          uVar37 = uVar25;
        }
      }
    }
    for (; uVar25 != 0; uVar25 = uVar25 - 1) {
      uVar37 = 0;
      if (uVar33 != 0) {
        do {
          pauVar4 = (undefined1 (*) [16])(*plVar34 + uVar37);
          auVar50 = *pauVar4;
          auVar49 = pauVar4[1];
          Hint_Prefetch(pauVar4 + 0x14,0,0,0);
          if (1 < uVar31) {
            uVar38 = 1;
            do {
              pauVar4 = (undefined1 (*) [16])(plVar34[uVar38] + uVar37);
              Hint_Prefetch(pauVar4 + 0x14,0,0,0);
              auVar50 = NEON_umin(auVar50,*pauVar4,1);
              auVar49 = NEON_umin(auVar49,pauVar4[1],1);
              uVar38 = uVar38 + 1;
            } while (uVar31 != uVar38);
          }
          puVar6 = (undefined8 *)(lVar17 + uVar37);
          puVar6[1] = auVar50._8_8_;
          *puVar6 = auVar50._0_8_;
          puVar6[3] = auVar49._8_8_;
          puVar6[2] = auVar49._0_8_;
          uVar37 = uVar37 + 0x20;
        } while (uVar37 < uVar33);
      }
      if (uVar37 < uVar40) {
        do {
          bVar36 = *(byte *)(*plVar34 + uVar37);
          if (1 < uVar31) {
            uVar38 = 1;
            do {
              bVar7 = *(byte *)(plVar34[uVar38] + uVar37);
              if (bVar36 <= *(byte *)(plVar34[uVar38] + uVar37)) {
                bVar7 = bVar36;
              }
              bVar36 = bVar7;
              uVar38 = uVar38 + 1;
            } while (uVar31 != uVar38);
          }
          *(byte *)(lVar17 + uVar37) = bVar36;
          uVar37 = uVar37 + 1;
        } while (uVar37 != uVar40);
      }
      lVar17 = lVar17 + param_6;
      plVar34 = plVar34 + 1;
    }
    uVar30 = uVar30 - uVar8;
    param_5 = param_5 + uVar26 * param_6;
    lVar43 = uVar26 + lVar43;
    lVar17 = lVar45;
  } while( true );
}



/* Entry: 1093671b0; end: 10936741f;  */

void FUN_1093671b0(undefined1 *param_1,undefined1 *param_2,ulong param_3,int param_4,long param_5)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 *puVar11;
  ulong uVar12;
  undefined1 *puVar13;
  undefined1 (*pauVar14) [16];
  undefined1 (*pauVar15) [16];
  long lVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  
  uVar6 = (ulong)param_4;
  uVar5 = param_3 * uVar6;
  if (param_5 == 1) {
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      *param_2 = *param_1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
  }
  else {
    uVar10 = (param_3 & 0xfffffffffffffff0) * uVar6;
    uVar9 = (param_3 & 0xfffffffffffffff8) * uVar6;
    uVar7 = param_5 * uVar6;
    if (param_4 == 1) {
      uVar8 = 0;
      if ((param_3 & 0xfffffffffffffff0) != 0) {
        uVar8 = 0;
        pauVar14 = (undefined1 (*) [16])(param_1 + 1);
        do {
          auVar18 = *(undefined1 (*) [16])(param_1 + uVar8);
          Hint_Prefetch((undefined1 (*) [16])(param_1 + uVar8) + 0x14,0,0,0);
          pauVar15 = pauVar14;
          lVar16 = uVar7 - 1;
          if (1 < uVar7) {
            do {
              auVar18 = NEON_umin(auVar18,*pauVar15,1);
              lVar16 = lVar16 + -1;
              pauVar15 = (undefined1 (*) [16])(*pauVar15 + 1);
            } while (lVar16 != 0);
          }
          *(long *)((long)(param_2 + uVar8) + 8) = auVar18._8_8_;
          *(long *)(param_2 + uVar8) = auVar18._0_8_;
          uVar8 = uVar8 + 0x10;
          pauVar14 = pauVar14 + 1;
        } while (uVar8 < uVar10);
      }
      if (uVar8 < uVar9) {
        do {
          uVar17 = *(undefined8 *)(param_1 + uVar8);
          Hint_Prefetch((undefined8 *)((long)(param_1 + uVar8) + 0x140),0,0,0);
          lVar16 = uVar7 - 1;
          puVar11 = param_1;
          if (1 < uVar7) {
            do {
              uVar17 = NEON_umin(uVar17,*(undefined8 *)(puVar11 + 1 + uVar8),1);
              lVar16 = lVar16 + -1;
              puVar11 = puVar11 + 1;
            } while (lVar16 != 0);
          }
          *(undefined8 *)(param_2 + uVar8) = uVar17;
          uVar8 = uVar8 + 8;
        } while (uVar8 < uVar9);
      }
    }
    else {
      uVar8 = 0;
      puVar11 = param_1;
      if (uVar10 != 0) {
        do {
          auVar18 = *(undefined1 (*) [16])(param_1 + uVar8);
          Hint_Prefetch((undefined1 (*) [16])(param_1 + uVar8) + 0x14,0,0,0);
          uVar12 = uVar6;
          if (uVar6 <= uVar7 && uVar7 - uVar6 != 0) {
            do {
              auVar18 = NEON_umin(auVar18,*(undefined1 (*) [16])(puVar11 + uVar12),1);
              uVar12 = uVar12 + uVar6;
            } while (uVar12 < uVar7);
          }
          *(long *)((long)(param_2 + uVar8) + 8) = auVar18._8_8_;
          *(long *)(param_2 + uVar8) = auVar18._0_8_;
          uVar8 = uVar8 + 0x10;
          puVar11 = puVar11 + 0x10;
        } while (uVar8 < uVar10);
      }
      if (uVar8 < uVar9) {
        puVar11 = param_1 + uVar8;
        do {
          uVar17 = *(undefined8 *)(param_1 + uVar8);
          Hint_Prefetch((undefined8 *)((long)(param_1 + uVar8) + 0x140),0,0,0);
          uVar10 = uVar6;
          if (uVar6 <= uVar7 && uVar7 - uVar6 != 0) {
            do {
              uVar17 = NEON_umin(uVar17,*(undefined8 *)(puVar11 + uVar10),1);
              uVar10 = uVar10 + uVar6;
            } while (uVar10 < uVar7);
          }
          *(undefined8 *)(param_2 + uVar8) = uVar17;
          uVar8 = uVar8 + 8;
          puVar11 = puVar11 + 8;
        } while (uVar8 < uVar9);
      }
    }
    if (param_4 != 0) {
      uVar9 = 0;
      uVar12 = uVar6 * 2;
      puVar11 = param_1 + uVar8;
      uVar10 = uVar8;
      puVar13 = puVar11;
      do {
        for (; uVar10 <= uVar5 + uVar6 * -2; uVar10 = uVar10 + uVar12) {
          pbVar1 = param_1 + uVar10;
          bVar3 = pbVar1[uVar6];
          uVar4 = uVar12;
          if (uVar12 <= uVar7 && uVar7 + uVar6 * -2 != 0) {
            do {
              bVar2 = puVar11[uVar4];
              if (bVar3 <= (byte)puVar11[uVar4]) {
                bVar2 = bVar3;
              }
              bVar3 = bVar2;
              uVar4 = uVar4 + uVar6;
            } while (uVar4 < uVar7);
          }
          bVar2 = *pbVar1;
          if (bVar3 <= *pbVar1) {
            bVar2 = bVar3;
          }
          param_2[uVar10] = bVar2;
          bVar2 = pbVar1[uVar4];
          if (bVar3 <= pbVar1[uVar4]) {
            bVar2 = bVar3;
          }
          (param_2 + uVar10)[uVar6] = bVar2;
          puVar11 = puVar11 + uVar12;
        }
        if (uVar10 < uVar5) {
          puVar11 = param_1 + uVar10;
          do {
            bVar3 = param_1[uVar10];
            uVar4 = uVar6;
            if (uVar6 <= uVar7 && uVar7 - uVar6 != 0) {
              do {
                bVar2 = puVar11[uVar4];
                if (bVar3 <= (byte)puVar11[uVar4]) {
                  bVar2 = bVar3;
                }
                bVar3 = bVar2;
                uVar4 = uVar4 + uVar6;
              } while (uVar4 < uVar7);
            }
            param_2[uVar10] = bVar3;
            uVar10 = uVar10 + uVar6;
            puVar11 = puVar11 + uVar6;
          } while (uVar10 < uVar5);
        }
        uVar9 = uVar9 + 1;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        puVar11 = puVar13 + 1;
        uVar10 = uVar8;
        puVar13 = puVar11;
      } while (uVar9 != uVar6);
    }
  }
  return;
}



/* Entry: 109367420; end: 109367493;  */

undefined8 * FUN_109367420(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_109367494(param_1);
    lVar1 = param_1[1];
    _bzero(lVar1,param_2 << 3);
    param_1[1] = lVar1 + param_2 * 8;
  }
  return param_1;
}



/* Entry: 109367494; end: 1093674cb;  */

undefined1  [16] FUN_109367494(long *param_1,ulong param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = param_1;
    FUN_1093674e0();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = plVar1;
    return auVar5;
  }
  FUN_1093674cc();
  puVar2 = (undefined8 *)&UNK_10f566c67;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3d == 0) {
    lVar3 = param_2 << 3;
    __Znwm(lVar3);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar3;
    return auVar6;
  }
  func_0x000104c4f740();
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  lVar3 = 0;
  if (param_2 != 0) {
    FUN_109367588(puVar2);
    lVar4 = puVar2[1];
    lVar3 = param_2 << 3;
    _bzero(lVar4,lVar3);
    puVar2[1] = lVar4 + param_2 * 8;
  }
  auVar7._8_8_ = lVar3;
  auVar7._0_8_ = puVar2;
  return auVar7;
}



/* Entry: 1093674cc; end: 1093674df;  */

undefined1  [16] FUN_1093674cc(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  puVar1 = (undefined8 *)&UNK_10f566c67;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3d == 0) {
    lVar2 = param_2 << 3;
    __Znwm(lVar2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000104c4f740();
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  lVar2 = 0;
  if (param_2 != 0) {
    FUN_109367588(puVar1);
    lVar3 = puVar1[1];
    lVar2 = param_2 << 3;
    _bzero(lVar3,lVar2);
    puVar1[1] = lVar3 + param_2 * 8;
  }
  auVar5._8_8_ = lVar2;
  auVar5._0_8_ = puVar1;
  return auVar5;
}



/* Entry: 1093674e0; end: 109367513;  */

undefined1  [16] FUN_1093674e0(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104c4f740();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar1 = 0;
  if (param_2 != 0) {
    FUN_109367588(param_1);
    lVar2 = param_1[1];
    lVar1 = param_2 << 3;
    _bzero(lVar2,lVar1);
    param_1[1] = lVar2 + param_2 * 8;
  }
  auVar4._8_8_ = lVar1;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 109367514; end: 109367587;  */

undefined8 * FUN_109367514(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_109367588(param_1);
    lVar1 = param_1[1];
    _bzero(lVar1,param_2 << 3);
    param_1[1] = lVar1 + param_2 * 8;
  }
  return param_1;
}



/* Entry: 109367588; end: 1093675bf;  */

undefined1  [16] FUN_109367588(long *param_1,long *param_2,uint param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if ((ulong)param_2 >> 0x3d == 0) {
    plVar2 = param_1;
    FUN_1093675d4();
    *param_1 = (long)plVar2;
    param_1[1] = (long)plVar2;
    param_1[2] = (long)(plVar2 + (long)param_2);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = plVar2;
    return auVar5;
  }
  FUN_1093675c0();
  plVar2 = (long *)&UNK_10f566c67;
  func_0x000104c4f6cc();
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar3 = (long)param_2 << 3;
    __Znwm(lVar3);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar3;
    return auVar6;
  }
  func_0x000104c4f740();
  if (7 < *param_2 * (ulong)param_3) {
    uVar4 = 0;
    if ((4 < param_3) || ((1 << (ulong)(param_3 & 0x1f) & 0x1aU) == 0)) goto LAB_109367678;
    uVar1 = *param_2 * 2 - *plVar2;
    uVar4 = -uVar1;
    if (-1 < (long)uVar1) {
      uVar4 = uVar1;
    }
    if (uVar4 < 3) {
      uVar1 = param_2[1] * 2 - plVar2[1];
      uVar4 = -uVar1;
      if (-1 < (long)uVar1) {
        uVar4 = uVar1;
      }
      uVar4 = (ulong)(uVar4 < 3);
      goto LAB_109367678;
    }
  }
  uVar4 = 0;
LAB_109367678:
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = uVar4;
  return auVar7;
}



/* Entry: 1093675c0; end: 1093675d3;  */

undefined1  [16] FUN_1093675c0(undefined8 param_1,long *param_2,uint param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  plVar2 = (long *)&UNK_10f566c67;
  func_0x000104c4f6cc();
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar3 = (long)param_2 << 3;
    __Znwm(lVar3);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar3;
    return auVar5;
  }
  func_0x000104c4f740();
  if (7 < *param_2 * (ulong)param_3) {
    uVar4 = 0;
    if ((4 < param_3) || ((1 << (ulong)(param_3 & 0x1f) & 0x1aU) == 0)) goto LAB_109367678;
    uVar1 = *param_2 * 2 - *plVar2;
    uVar4 = -uVar1;
    if (-1 < (long)uVar1) {
      uVar4 = uVar1;
    }
    if (uVar4 < 3) {
      uVar1 = param_2[1] * 2 - plVar2[1];
      uVar4 = -uVar1;
      if (-1 < (long)uVar1) {
        uVar4 = uVar1;
      }
      uVar4 = (ulong)(uVar4 < 3);
      goto LAB_109367678;
    }
  }
  uVar4 = 0;
LAB_109367678:
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = uVar4;
  return auVar6;
}



/* Entry: 1093675d4; end: 109367607;  */

undefined1  [16] FUN_1093675d4(long *param_1,long *param_2,uint param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm(lVar2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000104c4f740();
  if (7 < *param_2 * (ulong)param_3) {
    uVar3 = 0;
    if ((4 < param_3) || ((1 << (ulong)(param_3 & 0x1f) & 0x1aU) == 0)) goto LAB_109367678;
    uVar1 = *param_2 * 2 - *param_1;
    uVar3 = -uVar1;
    if (-1 < (long)uVar1) {
      uVar3 = uVar1;
    }
    if (uVar3 < 3) {
      uVar1 = param_2[1] * 2 - param_1[1];
      uVar3 = -uVar1;
      if (-1 < (long)uVar1) {
        uVar3 = uVar1;
      }
      uVar3 = (ulong)(uVar3 < 3);
      goto LAB_109367678;
    }
  }
  uVar3 = 0;
LAB_109367678:
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = uVar3;
  return auVar5;
}



/* Entry: 109367608; end: 10936767f;  */

bool FUN_109367608(long *param_1,long *param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  if (7 < *param_2 * (ulong)param_3) {
    if (4 < param_3) {
      return false;
    }
    if ((1 << (ulong)(param_3 & 0x1f) & 0x1aU) == 0) {
      return false;
    }
    uVar2 = *param_2 * 2 - *param_1;
    uVar1 = -uVar2;
    if (-1 < (long)uVar2) {
      uVar1 = uVar2;
    }
    if (uVar1 < 3) {
      uVar2 = param_2[1] * 2 - param_1[1];
      uVar1 = -uVar2;
      if (-1 < (long)uVar2) {
        uVar1 = uVar2;
      }
      return uVar1 < 3;
    }
  }
  return false;
}



/* Entry: 109367680; end: 109367d0f;  */

void FUN_109367680(long *param_1,byte *param_2,long param_3,long *param_4,long param_5,long param_6,
                  ulong param_7)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  byte *pbVar9;
  bool bVar10;
  long lVar11;
  short *psVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  short *psVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  byte *pbVar21;
  long lVar22;
  ushort *puVar23;
  short *psVar24;
  long lVar25;
  ulong uVar26;
  byte *pbVar27;
  long lVar28;
  ushort *puVar29;
  long lVar30;
  byte *pbVar31;
  long lVar32;
  byte *pbVar33;
  byte *pbVar34;
  long lVar35;
  long lVar36;
  byte *pbVar37;
  long lVar38;
  int iVar39;
  byte *pbVar40;
  byte *pbVar41;
  long lVar42;
  byte *pbVar43;
  ulong uVar44;
  long lVar45;
  ulong uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  short sVar55;
  short sVar56;
  short sVar57;
  short sVar58;
  short sVar59;
  short sVar60;
  short sVar61;
  short sVar62;
  short sVar63;
  short sVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  short sVar67;
  short sVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  short sVar72;
  short sVar73;
  undefined8 uVar71;
  short sVar74;
  undefined8 uVar75;
  undefined8 uVar76;
  long lStack_90;
  long lStack_80;
  long lStack_78;
  
  FUN_109367608(param_1,param_4,param_7);
  FUN_109365924();
  uVar44 = param_7 & 0xffffffff;
  lVar36 = *param_1;
  iVar39 = (int)param_7;
  if (lVar36 == 1) {
    lVar38 = 0;
    lVar42 = 0;
    lStack_90 = 0;
    lVar45 = 0;
  }
  else {
    lVar35 = lVar36 * 2 + -2;
    lVar42 = -1;
    do {
      lVar38 = 0;
      if (-1 < lVar42) {
        lVar38 = lVar35;
      }
      lVar42 = lVar38 - lVar42;
      uVar13 = (uint)lVar36;
    } while (uVar13 <= (uint)lVar42);
    lVar42 = lVar42 * uVar44;
    lVar38 = lVar36;
    if (uVar13 == 0xffffffff) {
      lStack_90 = uVar44 * -2;
    }
    else {
      lStack_90 = -2;
      do {
        lVar45 = 0;
        if (-1 < lStack_90) {
          lVar45 = lVar35;
        }
        lStack_90 = lVar45 - lStack_90;
      } while (uVar13 <= (uint)lStack_90);
      lStack_90 = lStack_90 * uVar44;
    }
    do {
      lVar45 = 0;
      if (-1 < lVar38) {
        lVar45 = lVar35;
      }
      lVar38 = lVar45 - lVar38;
    } while (uVar13 <= (uint)lVar38);
    lVar38 = lVar38 * uVar44;
    for (lVar45 = lVar36 + 1; uVar13 <= (uint)lVar45; lVar45 = lVar20 - lVar45) {
      lVar20 = 0;
      if (-1 < lVar45) {
        lVar20 = lVar35;
      }
    }
  }
  lVar35 = *param_4;
  FUN_109366414(&lStack_80,(lVar36 + 4) * uVar44 + 0x10);
  if (param_4[1] != 0) {
    uVar19 = 0;
    uVar17 = lVar35 * uVar44;
    uVar14 = uVar17 - 7;
    uVar18 = lVar36 * uVar44;
    psVar12 = (short *)(lStack_80 + uVar44 * 4 + 0x1f & 0xffffffffffffffe0);
    do {
      lVar35 = param_1[1];
      if (lVar35 == 1) {
        lVar20 = 0;
        pbVar37 = param_2;
        pbVar40 = param_2;
        pbVar41 = param_2;
        pbVar43 = param_2;
      }
      else {
        uVar46 = uVar19 * 2;
        lVar20 = uVar46 - 2;
        uVar13 = (uint)lVar35;
        if (uVar13 <= (uint)lVar20) {
          do {
            lVar30 = 0;
            if (-1 < lVar20) {
              lVar30 = lVar35 * 2 + -2;
            }
            lVar20 = lVar30 - lVar20;
          } while (uVar13 <= (uint)lVar20);
        }
        lVar30 = uVar46 - 1;
        if (uVar13 <= (uint)lVar30) {
          do {
            lVar32 = 0;
            if (-1 < lVar30) {
              lVar32 = lVar35 * 2 + -2;
            }
            lVar30 = lVar32 - lVar30;
          } while (uVar13 <= (uint)lVar30);
        }
        uVar26 = uVar46;
        if (uVar13 <= (uint)uVar46) {
          do {
            lVar32 = 0;
            if (-1 < (long)uVar26) {
              lVar32 = lVar35 * 2 + -2;
            }
            uVar26 = lVar32 - uVar26;
          } while (uVar13 <= (uint)uVar26);
        }
        uVar15 = uVar46 | 1;
        if (uVar13 <= (uint)uVar15) {
          do {
            lVar32 = 0;
            if (-1 < (long)uVar15) {
              lVar32 = lVar35 * 2 + -2;
            }
            uVar15 = lVar32 - uVar15;
          } while (uVar13 <= (uint)uVar15);
        }
        pbVar41 = param_2 + lVar20 * param_3;
        pbVar37 = param_2 + lVar30 * param_3;
        pbVar43 = param_2 + uVar26 * param_3;
        lVar20 = uVar46 + 2;
        pbVar40 = param_2 + uVar15 * param_3;
        if (uVar13 <= (uint)lVar20) {
          do {
            lVar30 = 0;
            if (-1 < lVar20) {
              lVar30 = lVar35 * 2 + -2;
            }
            lVar20 = lVar30 - lVar20;
          } while (uVar13 <= (uint)lVar20);
        }
      }
      uVar46 = 0;
      psVar24 = psVar12;
      pbVar9 = param_2 + lVar20 * param_3 + 8;
      pbVar21 = pbVar41;
      pbVar27 = pbVar40;
      pbVar31 = pbVar43;
      pbVar33 = pbVar37;
      psVar16 = psVar12;
      do {
        pbVar34 = pbVar9;
        uVar26 = uVar46;
        psVar16 = psVar16 + 8;
        pbVar33 = pbVar33 + 8;
        pbVar31 = pbVar31 + 8;
        pbVar27 = pbVar27 + 8;
        pbVar21 = pbVar21 + 8;
        Hint_Prefetch(pbVar43 + uVar26 + ((long)uVar26 % 5 + -2) * param_3 + 0x140,0,0,0);
        uVar66 = *(undefined8 *)(pbVar41 + uVar26);
        uVar65 = *(undefined8 *)(pbVar37 + uVar26);
        uVar69 = *(undefined8 *)(pbVar43 + uVar26);
        uVar70 = *(undefined8 *)(pbVar40 + uVar26);
        uVar71 = *(undefined8 *)(param_2 + uVar26 + lVar20 * param_3);
        sVar55 = (ushort)(byte)((ulong)uVar71 >> 8) + (ushort)(byte)((ulong)uVar66 >> 8) +
                 (ushort)(byte)((ulong)uVar69 >> 8) * 6 +
                 ((ushort)(byte)((ulong)uVar70 >> 8) + (ushort)(byte)((ulong)uVar65 >> 8)) * 4;
        sVar58 = (ushort)(byte)((ulong)uVar71 >> 0x10) + (ushort)(byte)((ulong)uVar66 >> 0x10) +
                 (ushort)(byte)((ulong)uVar69 >> 0x10) * 6 +
                 ((ushort)(byte)((ulong)uVar70 >> 0x10) + (ushort)(byte)((ulong)uVar65 >> 0x10)) * 4
        ;
        sVar60 = (ushort)(byte)((ulong)uVar71 >> 0x18) + (ushort)(byte)((ulong)uVar66 >> 0x18) +
                 (ushort)(byte)((ulong)uVar69 >> 0x18) * 6 +
                 ((ushort)(byte)((ulong)uVar70 >> 0x18) + (ushort)(byte)((ulong)uVar65 >> 0x18)) * 4
        ;
        *(ulong *)(psVar24 + 4) =
             CONCAT26((ushort)(byte)((ulong)uVar71 >> 0x38) + (ushort)(byte)((ulong)uVar66 >> 0x38)
                      + (ushort)(byte)((ulong)uVar69 >> 0x38) * 6 +
                      ((ushort)(byte)((ulong)uVar70 >> 0x38) + (ushort)(byte)((ulong)uVar65 >> 0x38)
                      ) * 4,CONCAT24((ushort)(byte)((ulong)uVar71 >> 0x30) +
                                     (ushort)(byte)((ulong)uVar66 >> 0x30) +
                                     (ushort)(byte)((ulong)uVar69 >> 0x30) * 6 +
                                     ((ushort)(byte)((ulong)uVar70 >> 0x30) +
                                     (ushort)(byte)((ulong)uVar65 >> 0x30)) * 4,
                                     CONCAT22((ushort)(byte)((ulong)uVar71 >> 0x28) +
                                              (ushort)(byte)((ulong)uVar66 >> 0x28) +
                                              (ushort)(byte)((ulong)uVar69 >> 0x28) * 6 +
                                              ((ushort)(byte)((ulong)uVar70 >> 0x28) +
                                              (ushort)(byte)((ulong)uVar65 >> 0x28)) * 4,
                                              (ushort)(byte)((ulong)uVar71 >> 0x20) +
                                              (ushort)(byte)((ulong)uVar66 >> 0x20) +
                                              (ushort)(byte)((ulong)uVar69 >> 0x20) * 6 +
                                              ((ushort)(byte)((ulong)uVar70 >> 0x20) +
                                              (ushort)(byte)((ulong)uVar65 >> 0x20)) * 4)));
        *(ulong *)psVar24 =
             CONCAT17((char)((ushort)sVar60 >> 8),
                      CONCAT16((char)sVar60,
                               CONCAT15((char)((ushort)sVar58 >> 8),
                                        CONCAT14((char)sVar58,
                                                 CONCAT13((char)((ushort)sVar55 >> 8),
                                                          CONCAT12((char)sVar55,
                                                                   (ushort)(byte)uVar71 +
                                                                   (ushort)(byte)uVar66 +
                                                                   (ushort)(byte)uVar69 * 6 +
                                                                   ((ushort)(byte)uVar70 +
                                                                   (ushort)(byte)uVar65) * 4))))));
        uVar46 = uVar26 + 8;
        psVar24 = psVar24 + 8;
        pbVar9 = pbVar34 + 8;
      } while (uVar46 <= uVar18 - 8);
      if (uVar46 < uVar18) {
        lVar35 = (uVar18 - 8) - uVar26;
        do {
          *psVar16 = (ushort)*pbVar34 + (ushort)*pbVar21 + ((ushort)*pbVar27 + (ushort)*pbVar33) * 4
                     + (ushort)*pbVar31 * 6;
          lVar35 = lVar35 + -1;
          pbVar21 = pbVar21 + 1;
          pbVar33 = pbVar33 + 1;
          pbVar31 = pbVar31 + 1;
          pbVar27 = pbVar27 + 1;
          pbVar34 = pbVar34 + 1;
          psVar16 = psVar16 + 1;
        } while (lVar35 != 0);
      }
      lVar35 = (lVar36 * 2 + 2) * uVar44;
      lVar11 = -uVar44;
      lVar22 = lVar42 << 1;
      lVar25 = lStack_90 << 1;
      lVar28 = uVar44 * -4;
      lVar32 = lVar38 << 1;
      lVar30 = uVar18 * 2;
      lVar20 = lVar45 * uVar44 * 2;
      if (iVar39 != 0) {
        do {
          psVar12[lVar11] = *(short *)((long)psVar12 + lVar22);
          *(undefined2 *)((long)psVar12 + lVar28) = *(undefined2 *)((long)psVar12 + lVar25);
          *(undefined2 *)((long)psVar12 + lVar30) = *(undefined2 *)((long)psVar12 + lVar32);
          *(undefined2 *)((long)psVar12 + lVar35) = *(undefined2 *)((long)psVar12 + lVar20);
          lVar35 = lVar35 + 2;
          lVar20 = lVar20 + 2;
          lVar30 = lVar30 + 2;
          lVar32 = lVar32 + 2;
          lVar28 = lVar28 + 2;
          lVar25 = lVar25 + 2;
          lVar22 = lVar22 + 2;
          bVar10 = lVar11 != -1;
          lVar11 = lVar11 + 1;
        } while (bVar10);
        if (iVar39 == 4) {
          if (uVar17 == 7) goto LAB_109367c50;
          uVar46 = 0;
          uVar66 = *(undefined8 *)psVar12;
          uVar47 = (undefined1)uVar66;
          uVar48 = (undefined1)((ulong)uVar66 >> 8);
          uVar49 = (undefined1)((ulong)uVar66 >> 0x10);
          uVar50 = (undefined1)((ulong)uVar66 >> 0x18);
          uVar51 = (undefined1)((ulong)uVar66 >> 0x20);
          uVar52 = (undefined1)((ulong)uVar66 >> 0x28);
          uVar53 = (undefined1)((ulong)uVar66 >> 0x30);
          uVar54 = (undefined1)((ulong)uVar66 >> 0x38);
          psVar16 = psVar12;
          uVar65 = *(undefined8 *)(psVar12 + -8);
          uVar69 = *(undefined8 *)(psVar12 + -4);
          do {
            Hint_Prefetch(psVar16 + 0xb0,0,0,0);
            uVar70 = *(undefined8 *)(psVar16 + 0x10);
            uVar71 = *(undefined8 *)(psVar16 + 4);
            uVar75 = *(undefined8 *)(psVar16 + 8);
            uVar76 = *(undefined8 *)(psVar16 + 0xc);
            sVar60 = (short)((ulong)uVar75 >> 0x10);
            sVar62 = (short)((ulong)uVar75 >> 0x20);
            sVar64 = (short)((ulong)uVar75 >> 0x30);
            sVar57 = (short)((ulong)uVar71 >> 0x10);
            sVar56 = (short)((ulong)uVar71 >> 0x20);
            sVar59 = (short)((ulong)uVar71 >> 0x30);
            sVar55 = (short)uVar65 + CONCAT11(uVar48,uVar47) * 6 + (short)uVar75 +
                     ((short)uVar71 + (short)uVar69) * 4;
            sVar58 = (short)((ulong)uVar65 >> 0x10) + CONCAT11(uVar50,uVar49) * 6 + sVar60 +
                     (sVar57 + (short)((ulong)uVar69 >> 0x10)) * 4;
            uVar47 = (undefined1)sVar58;
            uVar48 = (undefined1)((ushort)sVar58 >> 8);
            sVar58 = (short)((ulong)uVar65 >> 0x20) + CONCAT11(uVar52,uVar51) * 6 + sVar62 +
                     (sVar56 + (short)((ulong)uVar69 >> 0x20)) * 4;
            uVar49 = (undefined1)sVar58;
            uVar50 = (undefined1)((ushort)sVar58 >> 8);
            sVar58 = (short)((ulong)uVar65 >> 0x30) + CONCAT11(uVar54,uVar53) * 6 + sVar64 +
                     (sVar59 + (short)((ulong)uVar69 >> 0x30)) * 4;
            uVar51 = (undefined1)sVar58;
            uVar52 = (undefined1)((ushort)sVar58 >> 8);
            auVar8[2] = uVar47;
            auVar8._0_2_ = sVar55;
            auVar8[3] = uVar48;
            auVar8[4] = uVar49;
            auVar8[5] = uVar50;
            auVar8[6] = uVar51;
            auVar8[7] = uVar52;
            auVar8._8_2_ = (short)uVar66 + (short)uVar75 * 6 + (short)uVar70 +
                           ((short)uVar76 + (short)uVar71) * 4;
            auVar8._10_2_ =
                 (short)((ulong)uVar66 >> 0x10) + sVar60 * 6 + (short)((ulong)uVar70 >> 0x10) +
                 ((short)((ulong)uVar76 >> 0x10) + sVar57) * 4;
            auVar8._12_2_ =
                 (short)((ulong)uVar66 >> 0x20) + sVar62 * 6 + (short)((ulong)uVar70 >> 0x20) +
                 ((short)((ulong)uVar76 >> 0x20) + sVar56) * 4;
            auVar8._14_2_ =
                 (short)((ulong)uVar66 >> 0x30) + sVar64 * 6 + (short)((ulong)uVar70 >> 0x30) +
                 ((short)((ulong)uVar76 >> 0x30) + sVar59) * 4;
            uVar66 = NEON_raddhn(CONCAT17(uVar52,CONCAT16(uVar51,CONCAT15(uVar50,CONCAT14(uVar49,
                                                  CONCAT13(uVar48,CONCAT12(uVar47,sVar55)))))),
                                 auVar8,ZEXT216(0),2);
            *(undefined8 *)(param_5 + uVar46) = uVar66;
            uVar46 = uVar46 + 8;
            uVar47 = (undefined1)uVar70;
            uVar48 = (undefined1)((ulong)uVar70 >> 8);
            uVar49 = (undefined1)((ulong)uVar70 >> 0x10);
            uVar50 = (undefined1)((ulong)uVar70 >> 0x18);
            uVar51 = (undefined1)((ulong)uVar70 >> 0x20);
            uVar52 = (undefined1)((ulong)uVar70 >> 0x28);
            uVar53 = (undefined1)((ulong)uVar70 >> 0x30);
            uVar54 = (undefined1)((ulong)uVar70 >> 0x38);
            psVar16 = psVar16 + 0x10;
            uVar65 = uVar75;
            uVar66 = uVar70;
            uVar69 = uVar76;
          } while (uVar46 < uVar14);
        }
        else if (iVar39 == 3) {
          if (uVar17 == 7) goto LAB_109367c50;
          uVar46 = 0;
          uVar66 = *(undefined8 *)(psVar12 + -6);
          uVar47 = (undefined1)uVar66;
          uVar48 = (undefined1)((ulong)uVar66 >> 8);
          uVar49 = (undefined1)((ulong)uVar66 >> 0x10);
          uVar50 = (undefined1)((ulong)uVar66 >> 0x18);
          uVar51 = (undefined1)((ulong)uVar66 >> 0x20);
          uVar52 = (undefined1)((ulong)uVar66 >> 0x28);
          uVar53 = (undefined1)((ulong)uVar66 >> 0x30);
          uVar54 = (undefined1)((ulong)uVar66 >> 0x38);
          uVar66 = *(undefined8 *)psVar12;
          sVar55 = (short)uVar66;
          sVar58 = (short)((ulong)uVar66 >> 0x10);
          sVar60 = (short)((ulong)uVar66 >> 0x20);
          sVar62 = (short)((ulong)uVar66 >> 0x30);
          psVar16 = psVar12;
          uVar65 = *(undefined8 *)(psVar12 + -3);
          do {
            Hint_Prefetch(psVar16 + 0xac,0,0,0);
            uVar69 = *(undefined8 *)(psVar16 + 0xc);
            uVar70 = *(undefined8 *)(psVar16 + 3);
            uVar71 = *(undefined8 *)(psVar16 + 6);
            uVar75 = *(undefined8 *)(psVar16 + 9);
            sVar72 = (short)((ulong)uVar70 >> 0x10);
            sVar73 = (short)((ulong)uVar70 >> 0x20);
            sVar74 = (short)((ulong)uVar70 >> 0x30);
            sVar57 = (short)((ulong)uVar71 >> 0x10);
            sVar67 = (short)((ulong)uVar71 >> 0x20);
            sVar68 = (short)((ulong)uVar71 >> 0x30);
            sVar56 = sVar55 + (short)uVar71 * 6;
            sVar59 = sVar58 + sVar57 * 6;
            sVar61 = sVar60 + sVar67 * 6;
            sVar63 = sVar62 + sVar68 * 6;
            sVar55 = (short)uVar69;
            sVar58 = (short)((ulong)uVar69 >> 0x10);
            sVar60 = (short)((ulong)uVar69 >> 0x20);
            sVar62 = (short)((ulong)uVar69 >> 0x30);
            sVar64 = CONCAT11(uVar48,uVar47) + (short)uVar66 * 6 + (short)uVar71 +
                     ((short)uVar70 + (short)uVar65) * 4;
            sVar57 = CONCAT11(uVar50,uVar49) + (short)((ulong)uVar66 >> 0x10) * 6 + sVar57 +
                     (sVar72 + (short)((ulong)uVar65 >> 0x10)) * 4;
            uVar47 = (undefined1)sVar57;
            uVar48 = (undefined1)((ushort)sVar57 >> 8);
            sVar57 = CONCAT11(uVar52,uVar51) + (short)((ulong)uVar66 >> 0x20) * 6 + sVar67 +
                     (sVar73 + (short)((ulong)uVar65 >> 0x20)) * 4;
            uVar49 = (undefined1)sVar57;
            uVar50 = (undefined1)((ushort)sVar57 >> 8);
            sVar57 = CONCAT11(uVar54,uVar53) + (short)((ulong)uVar66 >> 0x30) * 6 + sVar68 +
                     (sVar74 + (short)((ulong)uVar65 >> 0x30)) * 4;
            uVar51 = (undefined1)sVar57;
            uVar52 = (undefined1)((ushort)sVar57 >> 8);
            sVar57 = sVar56 + sVar55 + ((short)uVar75 + (short)uVar70) * 4;
            sVar56 = sVar59 + sVar58 + ((short)((ulong)uVar75 >> 0x10) + sVar72) * 4;
            sVar59 = sVar61 + sVar60 + ((short)((ulong)uVar75 >> 0x20) + sVar73) * 4;
            sVar61 = sVar63 + sVar62 + ((short)((ulong)uVar75 >> 0x30) + sVar74) * 4;
            auVar6[2] = uVar47;
            auVar6._0_2_ = sVar64;
            auVar6[3] = uVar48;
            auVar6[4] = uVar49;
            auVar6[5] = uVar50;
            auVar6[6] = uVar51;
            auVar6[7] = uVar52;
            auVar6._8_2_ = sVar57;
            auVar6._10_2_ = sVar56;
            auVar6._12_2_ = sVar59;
            auVar6._14_2_ = sVar61;
            uVar66 = NEON_raddhn(CONCAT17(uVar52,CONCAT16(uVar51,CONCAT15(uVar50,CONCAT14(uVar49,
                                                  CONCAT13(uVar48,CONCAT12(uVar47,sVar64)))))),
                                 auVar6,ZEXT216(0),2);
            auVar7._8_2_ = sVar57;
            auVar7._0_8_ = uVar66;
            auVar7._10_2_ = sVar56;
            auVar7._12_2_ = sVar59;
            auVar7._14_2_ = sVar61;
            uVar66 = a64_TBL(ZEXT816(0),auVar7,0xffff060504020100);
            *(undefined8 *)(param_5 + uVar46) = uVar66;
            uVar46 = uVar46 + 6;
            uVar47 = (undefined1)uVar71;
            uVar48 = (undefined1)((ulong)uVar71 >> 8);
            uVar49 = (undefined1)((ulong)uVar71 >> 0x10);
            uVar50 = (undefined1)((ulong)uVar71 >> 0x18);
            uVar51 = (undefined1)((ulong)uVar71 >> 0x20);
            uVar52 = (undefined1)((ulong)uVar71 >> 0x28);
            uVar53 = (undefined1)((ulong)uVar71 >> 0x30);
            uVar54 = (undefined1)((ulong)uVar71 >> 0x38);
            psVar16 = psVar16 + 0xc;
            uVar66 = uVar69;
            uVar65 = uVar75;
          } while (uVar46 < uVar14);
        }
        else if ((iVar39 == 1) && (uVar17 != 7)) {
          uVar46 = 0;
          psVar16 = psVar12;
          do {
            Hint_Prefetch(psVar16 + 0xa0,0,0,0);
            sVar55 = psVar16[-2] + *psVar16 * 6 + psVar16[2] + (psVar16[1] + psVar16[-1]) * 4;
            sVar58 = *psVar16 + psVar16[2] * 6 + psVar16[4] + (psVar16[3] + psVar16[1]) * 4;
            uVar47 = (undefined1)sVar58;
            uVar48 = (undefined1)((ushort)sVar58 >> 8);
            sVar58 = psVar16[2] + psVar16[4] * 6 + psVar16[6] + (psVar16[5] + psVar16[3]) * 4;
            uVar49 = (undefined1)sVar58;
            uVar50 = (undefined1)((ushort)sVar58 >> 8);
            sVar58 = psVar16[4] + psVar16[6] * 6 + psVar16[8] + (psVar16[7] + psVar16[5]) * 4;
            uVar51 = (undefined1)sVar58;
            uVar52 = (undefined1)((ushort)sVar58 >> 8);
            auVar5[2] = uVar47;
            auVar5._0_2_ = sVar55;
            auVar5[3] = uVar48;
            auVar5[4] = uVar49;
            auVar5[5] = uVar50;
            auVar5[6] = uVar51;
            auVar5[7] = uVar52;
            auVar5._8_2_ = psVar16[6] + psVar16[8] * 6 + psVar16[10] + (psVar16[9] + psVar16[7]) * 4
            ;
            auVar5._10_2_ =
                 psVar16[8] + psVar16[10] * 6 + psVar16[0xc] + (psVar16[0xb] + psVar16[9]) * 4;
            auVar5._12_2_ =
                 psVar16[10] + psVar16[0xc] * 6 + psVar16[0xe] + (psVar16[0xd] + psVar16[0xb]) * 4;
            auVar5._14_2_ =
                 psVar16[0xc] + psVar16[0xe] * 6 + psVar16[0x10] + (psVar16[0xf] + psVar16[0xd]) * 4
            ;
            uVar66 = NEON_raddhn(CONCAT17(uVar52,CONCAT16(uVar51,CONCAT15(uVar50,CONCAT14(uVar49,
                                                  CONCAT13(uVar48,CONCAT12(uVar47,sVar55)))))),
                                 auVar5,ZEXT216(0),2);
            *(undefined8 *)(param_5 + uVar46) = uVar66;
            uVar46 = uVar46 + 8;
            psVar16 = psVar16 + 0x10;
          } while (uVar46 < uVar14);
        }
        else {
LAB_109367c50:
          uVar46 = 0;
        }
        uVar26 = 0;
        puVar29 = (ushort *)(psVar12 + uVar46 * 2);
        do {
          if (uVar46 < uVar17) {
            uVar15 = uVar46;
            puVar23 = puVar29;
            do {
              puVar1 = puVar23 + uVar44 * -2;
              puVar2 = puVar23 + -uVar44;
              puVar3 = puVar23 + uVar44;
              uVar4 = *puVar23;
              puVar23 = puVar23 + uVar44 * 2;
              *(char *)(param_5 + uVar26 + uVar15) =
                   (char)((uint)*puVar1 + (uint)*puVar23 + ((uint)*puVar3 + (uint)*puVar2) * 4 +
                          (uint)uVar4 * 6 + 0x80 >> 8);
              uVar15 = uVar15 + uVar44;
            } while (uVar15 < uVar17);
          }
          uVar26 = uVar26 + 1;
          puVar29 = puVar29 + 1;
        } while (uVar26 != uVar44);
      }
      uVar19 = uVar19 + 1;
      param_5 = param_5 + param_6;
    } while (uVar19 < (ulong)param_4[1]);
  }
  if (lStack_80 != 0) {
    lStack_78 = lStack_80;
    __ZdlPv();
  }
  return;
}



/* Entry: 109367d10; end: 109367d83;  */

undefined8 * FUN_109367d10(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_1092cc154(param_1);
    lVar1 = param_1[1];
    _bzero(lVar1,param_2 << 2);
    param_1[1] = lVar1 + param_2 * 4;
  }
  return param_1;
}



/* Entry: 109367d84; end: 109367e43;  */

bool FUN_109367d84(float param_1,float param_2,int param_3)

{
  if ((((param_3 == 4) || (param_3 == 3)) || (param_3 == 1)) && (param_2 == param_1)) {
    return param_1 == 0.5 || (param_1 == 4.0 || param_1 == 2.0);
  }
  return false;
}



/* Entry: 109367e44; end: 109368137;  */

void FUN_109367e44(undefined8 param_1,float param_2,ulong *param_3,ulong *param_4,long param_5,
                  long param_6,undefined4 *param_7,long param_8,uint param_9)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  bool bVar3;
  ulong uVar4;
  uint *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined4 *puVar11;
  uint *puVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  bVar3 = false;
  if ((0.0 < (float)param_1) && (0.0 < param_2)) {
    dVar13 = (double)NEON_ucvtf(*param_4);
    dVar14 = (double)(float)param_1;
    dVar15 = (double)*param_3;
    if ((dVar13 + -0.5) * dVar14 < dVar15) {
      dVar16 = (double)NEON_ucvtf(param_4[1]);
      dVar17 = (double)param_3[1];
      if ((((dVar16 + -0.5) * (double)param_2 < dVar17) && (dVar15 <= (dVar13 + 0.5) * dVar14)) &&
         (dVar17 <= (dVar16 + 0.5) * (double)param_2)) {
        bVar3 = (param_9 == 4 || (param_9 & 0xfffffffd) == 1) &&
                (param_3[1] | *param_3) >> 0x20 == 0;
        goto LAB_109367f08;
      }
    }
    bVar3 = false;
  }
LAB_109367f08:
  FUN_109365924(bVar3);
  if (param_9 == 4) {
    lStack_68 = 0;
    lStack_60 = 0;
    uStack_58 = 0;
    puVar5 = (uint *)*param_4;
    FUN_10936ab7c(param_1,puVar5,&lStack_68);
    uVar4 = param_4[1];
    if (uVar4 != 0) {
      uVar7 = 0;
      uVar6 = *param_4;
      do {
        if (uVar6 != 0) {
          lVar10 = param_5 + param_6 * (long)(param_2 * ((float)uVar7 + 0.5));
          lVar9 = lVar10 + 0x140;
          puVar12 = puVar5;
          puVar11 = param_7;
          uVar8 = uVar6;
          do {
            Hint_Prefetch(lVar9,0,0,0);
            *puVar11 = *(undefined4 *)(lVar10 + (ulong)*puVar12 * 4);
            lVar9 = lVar9 + 4;
            uVar8 = uVar8 - 1;
            puVar12 = puVar12 + 1;
            puVar11 = puVar11 + 1;
          } while (uVar8 != 0);
        }
        uVar7 = uVar7 + 1;
        param_7 = (undefined4 *)((long)param_7 + param_8);
      } while (uVar7 != uVar4);
    }
  }
  else if (param_9 == 3) {
    lStack_68 = 0;
    lStack_60 = 0;
    uStack_58 = 0;
    uVar4 = *param_4;
    FUN_10936ab7c(param_1,uVar4,&lStack_68);
    uVar7 = param_4[1];
    if (uVar7 != 0) {
      uVar6 = 0;
      uVar8 = *param_4;
      do {
        if (uVar8 != 0) {
          uVar7 = 0;
          lVar10 = param_5 + param_6 * (long)(param_2 * ((float)uVar6 + 0.5));
          lVar9 = lVar10 + 0x140;
          puVar11 = param_7;
          do {
            Hint_Prefetch(lVar9,0,0,0);
            puVar1 = (undefined2 *)(lVar10 + (ulong)*(uint *)(uVar4 + uVar7 * 4) * 3);
            uVar2 = *puVar1;
            *(undefined1 *)((long)puVar11 + 2) = *(undefined1 *)(puVar1 + 1);
            *(undefined2 *)puVar11 = uVar2;
            uVar7 = uVar7 + 1;
            uVar8 = *param_4;
            lVar9 = lVar9 + 3;
            puVar11 = (undefined4 *)((long)puVar11 + 3);
          } while (uVar7 < uVar8);
          uVar7 = param_4[1];
        }
        uVar6 = uVar6 + 1;
        param_7 = (undefined4 *)((long)param_7 + param_8);
      } while (uVar6 < uVar7);
    }
  }
  else {
    if (param_9 != 1) {
      return;
    }
    lStack_68 = 0;
    lStack_60 = 0;
    uStack_58 = 0;
    uVar4 = *param_4;
    FUN_10936ab7c(param_1,uVar4,&lStack_68);
    uVar7 = param_4[1];
    if (uVar7 != 0) {
      uVar6 = 0;
      uVar8 = *param_4;
      do {
        if (uVar8 != 0) {
          uVar7 = 0;
          lVar9 = param_5 + param_6 * (long)(param_2 * ((float)uVar6 + 0.5));
          do {
            Hint_Prefetch(lVar9 + 0x140 + uVar7,0,0,0);
            *(undefined1 *)((long)param_7 + uVar7) =
                 *(undefined1 *)(lVar9 + (ulong)*(uint *)(uVar4 + uVar7 * 4));
            uVar7 = uVar7 + 1;
            uVar8 = *param_4;
          } while (uVar7 < uVar8);
          uVar7 = param_4[1];
        }
        uVar6 = uVar6 + 1;
        param_7 = (undefined4 *)((long)param_7 + param_8);
      } while (uVar6 < uVar7);
    }
  }
  if (lStack_68 != 0) {
    lStack_60 = lStack_68;
    __ZdlPv();
  }
  return;
}



/* Entry: 109368138; end: 1093695d7;  */

void FUN_109368138(undefined8 param_1,ulong *param_2,long param_3,long param_4,long param_5,
                  long param_6,int param_7)

{
  undefined8 *puVar1;
  unkbyte9 *pVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong uVar10;
  uint3 uVar11;
  float fVar12;
  undefined1 auVar13 [16];
  ushort uVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined4 uVar19;
  uint3 uVar20;
  undefined4 uVar21;
  float fVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  uint3 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined1 auVar36 [16];
  undefined6 uVar37;
  unkbyte10 Var38;
  undefined1 auVar39 [12];
  undefined1 auVar40 [14];
  short sVar41;
  short sVar42;
  short sVar43;
  short sVar44;
  short sVar45;
  short sVar46;
  short sVar47;
  short sVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined1 auVar57 [16];
  undefined6 uVar58;
  unkbyte10 Var59;
  undefined1 auVar60 [12];
  undefined1 auVar61 [14];
  short sVar62;
  short sVar63;
  short sVar64;
  short sVar65;
  short sVar66;
  short sVar67;
  short sVar68;
  short sVar69;
  unkbyte9 Var70;
  bool bVar71;
  long lVar72;
  undefined1 *puVar73;
  byte *pbVar74;
  long lVar75;
  long lVar76;
  byte *pbVar77;
  long lVar78;
  long lVar79;
  ulong uVar80;
  ulong uVar81;
  ulong uVar82;
  long lVar83;
  long lVar84;
  long lVar85;
  ulong uVar86;
  ulong uVar87;
  ulong uVar88;
  undefined1 in_b0;
  undefined1 uVar89;
  byte bVar90;
  undefined1 in_register_00005001;
  undefined1 uVar91;
  byte bVar92;
  undefined1 in_register_00005002;
  undefined1 uVar93;
  byte bVar94;
  undefined1 in_register_00005003;
  undefined1 uVar95;
  byte bVar96;
  undefined1 uVar97;
  byte bVar98;
  undefined1 uVar99;
  byte bVar100;
  undefined1 uVar101;
  byte bVar102;
  undefined1 uVar103;
  byte bVar104;
  undefined1 uVar105;
  undefined1 uVar106;
  undefined1 uVar107;
  undefined1 uVar108;
  undefined1 uVar109;
  undefined1 uVar110;
  undefined1 uVar111;
  undefined1 uVar112;
  undefined1 in_b1;
  undefined1 uVar113;
  byte bVar114;
  undefined1 in_register_00005021;
  undefined1 uVar115;
  byte bVar116;
  undefined1 in_register_00005022;
  undefined1 uVar117;
  byte bVar118;
  undefined1 in_register_00005023;
  undefined1 uVar119;
  byte bVar120;
  undefined1 uVar121;
  byte bVar122;
  undefined1 uVar123;
  byte bVar124;
  undefined1 uVar125;
  byte bVar126;
  undefined1 uVar127;
  byte bVar128;
  undefined1 uVar129;
  undefined1 uVar130;
  undefined1 uVar131;
  undefined1 uVar132;
  undefined1 uVar133;
  undefined1 uVar134;
  undefined1 uVar135;
  undefined1 uVar136;
  undefined1 uVar137;
  byte bVar138;
  undefined1 uVar139;
  byte bVar140;
  undefined1 uVar141;
  byte bVar142;
  undefined1 uVar143;
  byte bVar144;
  undefined1 uVar145;
  byte bVar146;
  undefined1 uVar147;
  byte bVar148;
  undefined1 uVar149;
  byte bVar150;
  undefined1 uVar151;
  byte bVar152;
  undefined1 uVar153;
  undefined1 uVar154;
  undefined1 uVar155;
  undefined1 uVar156;
  undefined1 uVar157;
  undefined1 uVar158;
  undefined1 uVar159;
  undefined1 uVar160;
  byte bVar161;
  undefined1 uVar162;
  byte bVar163;
  undefined1 uVar164;
  byte bVar165;
  undefined1 uVar166;
  byte bVar167;
  undefined1 uVar168;
  byte bVar169;
  undefined1 uVar170;
  byte bVar171;
  undefined1 uVar172;
  byte bVar173;
  undefined1 uVar174;
  byte bVar175;
  undefined1 uVar176;
  undefined1 uVar177;
  undefined1 uVar178;
  undefined1 uVar179;
  undefined1 uVar180;
  undefined1 uVar181;
  undefined1 uVar182;
  undefined1 uVar183;
  undefined1 uVar184;
  byte bVar185;
  byte bVar186;
  byte bVar187;
  byte bVar188;
  byte bVar189;
  byte bVar190;
  byte bVar191;
  byte bVar192;
  byte bVar193;
  byte bVar194;
  byte bVar195;
  byte bVar196;
  byte bVar197;
  byte bVar198;
  byte bVar199;
  byte bVar200;
  byte bVar201;
  byte bVar205;
  byte bVar206;
  byte bVar207;
  byte bVar208;
  byte bVar209;
  byte bVar210;
  undefined8 uVar202;
  undefined8 uVar203;
  undefined8 uVar204;
  byte bVar211;
  undefined8 uVar212;
  undefined8 uVar213;
  undefined8 uVar214;
  byte bVar215;
  byte bVar219;
  byte bVar220;
  byte bVar221;
  byte bVar222;
  byte bVar223;
  byte bVar224;
  undefined8 uVar216;
  undefined8 uVar217;
  undefined8 uVar218;
  byte bVar225;
  undefined8 uVar226;
  undefined8 uVar227;
  undefined8 uVar228;
  byte bVar229;
  byte bVar230;
  byte bVar231;
  byte bVar232;
  byte bVar233;
  byte bVar234;
  byte bVar235;
  byte bVar236;
  byte bVar237;
  byte bVar238;
  byte bVar239;
  byte bVar240;
  byte bVar241;
  byte bVar242;
  byte bVar243;
  byte bVar244;
  byte bVar245;
  byte bVar246;
  byte bVar247;
  byte bVar248;
  byte bVar249;
  byte bVar250;
  byte bVar251;
  byte bVar252;
  byte bVar253;
  byte bVar254;
  byte bVar255;
  byte bVar256;
  byte bVar257;
  byte bVar258;
  byte bVar259;
  byte bVar260;
  byte bVar261;
  byte bVar262;
  byte bVar263;
  byte bVar264;
  byte bVar265;
  byte bVar266;
  byte bVar267;
  byte bVar268;
  byte bVar269;
  byte bVar270;
  byte bVar271;
  byte bVar272;
  byte bVar273;
  byte bVar274;
  byte bVar275;
  byte bVar276;
  byte bVar277;
  byte bVar278;
  byte bVar279;
  byte bVar280;
  byte bVar281;
  byte bVar282;
  byte bVar283;
  byte bVar284;
  byte bVar285;
  byte bVar286;
  byte bVar287;
  byte bVar288;
  byte bVar289;
  byte bVar290;
  byte bVar291;
  byte bVar292;
  byte bVar293;
  byte bVar294;
  byte bVar295;
  byte bVar296;
  byte bVar297;
  byte bVar298;
  byte bVar299;
  byte bVar300;
  byte bVar301;
  byte bVar302;
  byte bVar303;
  byte bVar304;
  byte bVar305;
  byte bVar306;
  byte bVar307;
  byte bVar308;
  byte bVar309;
  byte bVar310;
  byte bVar311;
  byte bVar312;
  byte bVar313;
  byte bVar314;
  byte bVar315;
  byte bVar316;
  byte bVar317;
  byte bVar318;
  byte bVar319;
  byte bVar320;
  byte bVar321;
  byte bVar322;
  byte bVar323;
  byte bVar324;
  byte bVar325;
  byte bVar326;
  byte bVar327;
  byte bVar328;
  byte bVar329;
  byte bVar330;
  byte bVar331;
  byte bVar332;
  byte bVar333;
  byte bVar334;
  byte bVar335;
  byte bVar336;
  byte bVar337;
  byte bVar338;
  byte bVar339;
  byte bVar340;
  byte bVar341;
  byte bVar342;
  byte bVar343;
  byte bVar344;
  byte bVar345;
  byte bVar346;
  byte bVar347;
  byte bVar348;
  byte bVar349;
  byte bVar350;
  byte bVar351;
  byte bVar352;
  byte bVar353;
  byte bVar354;
  byte bVar355;
  byte bVar356;
  byte bVar357;
  byte bVar358;
  byte bVar359;
  byte bVar360;
  byte bVar361;
  byte bVar362;
  byte bVar363;
  byte bVar364;
  byte bVar365;
  byte bVar366;
  byte bVar367;
  byte bVar368;
  byte bVar369;
  byte bVar370;
  byte bVar371;
  byte bVar372;
  
  fVar22 = (float)CONCAT13(in_register_00005023,
                           CONCAT12(in_register_00005022,CONCAT11(in_register_00005021,in_b1)));
  fVar12 = (float)CONCAT13(in_register_00005003,
                           CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0)));
  FUN_109367d84();
  FUN_109365924();
  if (param_7 == 4) {
    uVar81 = param_2[1];
    bVar71 = false;
    if ((fVar12 == 2.0) && (bVar71 = false, !NAN(fVar22))) {
      bVar71 = fVar22 == 2.0;
    }
    if (bVar71) {
      if (uVar81 != 0) {
        uVar81 = 0;
        uVar87 = *param_2;
        lVar72 = uVar87 * 4;
        lVar84 = param_3 + param_4;
        lVar76 = param_4 * 2;
        lVar83 = param_3 + 3;
        param_4 = lVar83 + param_4;
        do {
          if (uVar87 < 3 || lVar72 == 0xc) {
            uVar82 = 0;
            lVar75 = 0;
          }
          else {
            lVar75 = 0;
            uVar82 = 0;
            do {
              puVar1 = (undefined8 *)(param_3 + lVar75);
              Hint_Prefetch(puVar1 + 0x28,0,0,0);
              puVar3 = (undefined8 *)(lVar84 + lVar75);
              Hint_Prefetch(puVar3 + 0x28,0,0,0);
              uVar18 = puVar1[1];
              uVar15 = *puVar1;
              uVar24 = puVar1[3];
              uVar23 = puVar1[2];
              uVar28 = puVar3[1];
              uVar27 = *puVar3;
              uVar30 = puVar3[3];
              uVar29 = puVar3[2];
              sVar65 = (ushort)(byte)uVar27 + (ushort)(byte)uVar15;
              sVar44 = (ushort)(byte)((ulong)uVar27 >> 8) + (ushort)(byte)((ulong)uVar15 >> 8);
              sVar66 = (ushort)(byte)((ulong)uVar27 >> 0x10) + (ushort)(byte)((ulong)uVar15 >> 0x10)
              ;
              sVar67 = (ushort)(byte)((ulong)uVar27 >> 0x20) + (ushort)(byte)((ulong)uVar15 >> 0x20)
              ;
              sVar45 = (ushort)(byte)((ulong)uVar27 >> 0x28) + (ushort)(byte)((ulong)uVar15 >> 0x28)
              ;
              sVar68 = (ushort)(byte)((ulong)uVar27 >> 0x30) + (ushort)(byte)((ulong)uVar15 >> 0x30)
              ;
              sVar41 = (ushort)(byte)uVar28 + (ushort)(byte)uVar18;
              sVar42 = (ushort)(byte)((ulong)uVar28 >> 8) + (ushort)(byte)((ulong)uVar18 >> 8);
              sVar43 = (ushort)(byte)((ulong)uVar28 >> 0x10) + (ushort)(byte)((ulong)uVar18 >> 0x10)
              ;
              uVar25 = CONCAT13((char)((ushort)sVar44 >> 8),CONCAT12((char)sVar44,sVar65));
              uVar16 = CONCAT13((char)((ushort)sVar42 >> 8),CONCAT12((char)sVar42,sVar41));
              uVar26 = CONCAT13((char)((ushort)sVar45 >> 8),CONCAT12((char)sVar45,sVar67));
              sVar46 = (ushort)(byte)uVar29 + (ushort)(byte)uVar23;
              sVar47 = (ushort)(byte)((ulong)uVar29 >> 8) + (ushort)(byte)((ulong)uVar23 >> 8);
              sVar48 = (ushort)(byte)((ulong)uVar29 >> 0x10) + (ushort)(byte)((ulong)uVar23 >> 0x10)
              ;
              sVar62 = (ushort)(byte)((ulong)uVar29 >> 0x20) + (ushort)(byte)((ulong)uVar23 >> 0x20)
              ;
              sVar63 = (ushort)(byte)((ulong)uVar29 >> 0x28) + (ushort)(byte)((ulong)uVar23 >> 0x28)
              ;
              sVar64 = (ushort)(byte)((ulong)uVar29 >> 0x30) + (ushort)(byte)((ulong)uVar23 >> 0x30)
              ;
              sVar42 = (ushort)(byte)uVar30 + (ushort)(byte)uVar24;
              sVar44 = (ushort)(byte)((ulong)uVar30 >> 8) + (ushort)(byte)((ulong)uVar24 >> 8);
              sVar45 = (ushort)(byte)((ulong)uVar30 >> 0x10) + (ushort)(byte)((ulong)uVar24 >> 0x10)
              ;
              uVar19 = CONCAT13((char)((ushort)sVar47 >> 8),CONCAT12((char)sVar47,sVar46));
              uVar17 = CONCAT13((char)((ushort)sVar44 >> 8),CONCAT12((char)sVar44,sVar42));
              uVar21 = CONCAT13((char)((ushort)sVar63 >> 8),CONCAT12((char)sVar63,sVar62));
              ((undefined8 *)(param_5 + uVar82))[1] =
                   CONCAT17((char)((ushort)((ushort)(byte)((ulong)uVar30 >> 0x18) +
                                            (ushort)(byte)((ulong)uVar24 >> 0x18) +
                                           (ushort)(byte)((ulong)uVar30 >> 0x38) +
                                           (ushort)(byte)((ulong)uVar24 >> 0x38)) >> 2),
                            CONCAT16((char)((ushort)((short)(CONCAT15((char)((ushort)sVar45 >> 8),
                                                                      CONCAT14((char)sVar45,uVar17))
                                                            >> 0x20) +
                                                    (ushort)(byte)((ulong)uVar30 >> 0x30) +
                                                    (ushort)(byte)((ulong)uVar24 >> 0x30)) >> 2),
                                     CONCAT15((char)((ushort)((short)((uint)uVar17 >> 0x10) +
                                                             (ushort)(byte)((ulong)uVar30 >> 0x28) +
                                                             (ushort)(byte)((ulong)uVar24 >> 0x28))
                                                    >> 2),
                                              CONCAT14((char)((ushort)(sVar42 + (ushort)(byte)((
                                                  ulong)uVar30 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar24 >> 0x20)) >> 2),
                                                  CONCAT13((char)((ushort)((ushort)(byte)((ulong)
                                                  uVar29 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar23 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar29 >> 0x38) +
                                                  (ushort)(byte)((ulong)uVar23 >> 0x38)) >> 2),
                                                  CONCAT12((char)((ushort)((short)(CONCAT15((char)((
                                                  ushort)sVar48 >> 8),CONCAT14((char)sVar48,uVar19))
                                                  >> 0x20) +
                                                  (short)(CONCAT15((char)((ushort)sVar64 >> 8),
                                                                   CONCAT14((char)sVar64,uVar21)) >>
                                                         0x20)) >> 2),
                                                  CONCAT11((char)((ushort)((short)((uint)uVar19 >>
                                                                                  0x10) +
                                                                          (short)((uint)uVar21 >>
                                                                                 0x10)) >> 2),
                                                           (char)((ushort)(sVar46 + sVar62) >> 2))))
                                                  ))));
              *(undefined8 *)(param_5 + uVar82) =
                   CONCAT17((char)((ushort)((ushort)(byte)((ulong)uVar28 >> 0x18) +
                                            (ushort)(byte)((ulong)uVar18 >> 0x18) +
                                           (ushort)(byte)((ulong)uVar28 >> 0x38) +
                                           (ushort)(byte)((ulong)uVar18 >> 0x38)) >> 2),
                            CONCAT16((char)((ushort)((short)(CONCAT15((char)((ushort)sVar43 >> 8),
                                                                      CONCAT14((char)sVar43,uVar16))
                                                            >> 0x20) +
                                                    (ushort)(byte)((ulong)uVar28 >> 0x30) +
                                                    (ushort)(byte)((ulong)uVar18 >> 0x30)) >> 2),
                                     CONCAT15((char)((ushort)((short)((uint)uVar16 >> 0x10) +
                                                             (ushort)(byte)((ulong)uVar28 >> 0x28) +
                                                             (ushort)(byte)((ulong)uVar18 >> 0x28))
                                                    >> 2),
                                              CONCAT14((char)((ushort)(sVar41 + (ushort)(byte)((
                                                  ulong)uVar28 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar18 >> 0x20)) >> 2),
                                                  CONCAT13((char)((ushort)((ushort)(byte)((ulong)
                                                  uVar27 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar15 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar27 >> 0x38) +
                                                  (ushort)(byte)((ulong)uVar15 >> 0x38)) >> 2),
                                                  CONCAT12((char)((ushort)((short)(CONCAT15((char)((
                                                  ushort)sVar66 >> 8),CONCAT14((char)sVar66,uVar25))
                                                  >> 0x20) +
                                                  (short)(CONCAT15((char)((ushort)sVar68 >> 8),
                                                                   CONCAT14((char)sVar68,uVar26)) >>
                                                         0x20)) >> 2),
                                                  CONCAT11((char)((ushort)((short)((uint)uVar25 >>
                                                                                  0x10) +
                                                                          (short)((uint)uVar26 >>
                                                                                 0x10)) >> 2),
                                                           (char)((ushort)(sVar65 + sVar67) >> 2))))
                                                  ))));
              uVar82 = uVar82 + 0x10;
              lVar75 = lVar75 + 0x20;
            } while (uVar82 < lVar72 - 0xcU);
          }
          if (uVar87 != 0) {
            for (; uVar82 < lVar72 - 4U; uVar82 = uVar82 + 8) {
              puVar1 = (undefined8 *)(param_3 + lVar75);
              Hint_Prefetch(puVar1 + 0x28,0,0,0);
              puVar3 = (undefined8 *)(lVar84 + lVar75);
              Hint_Prefetch(puVar3 + 0x28,0,0,0);
              uVar18 = puVar1[1];
              uVar15 = *puVar1;
              uVar24 = puVar3[1];
              uVar23 = *puVar3;
              sVar44 = (ushort)(byte)uVar23 + (ushort)(byte)uVar15;
              sVar45 = (ushort)(byte)((ulong)uVar23 >> 8) + (ushort)(byte)((ulong)uVar15 >> 8);
              sVar46 = (ushort)(byte)((ulong)uVar23 >> 0x10) + (ushort)(byte)((ulong)uVar15 >> 0x10)
              ;
              sVar47 = (ushort)(byte)((ulong)uVar23 >> 0x20) + (ushort)(byte)((ulong)uVar15 >> 0x20)
              ;
              sVar48 = (ushort)(byte)((ulong)uVar23 >> 0x28) + (ushort)(byte)((ulong)uVar15 >> 0x28)
              ;
              sVar62 = (ushort)(byte)((ulong)uVar23 >> 0x30) + (ushort)(byte)((ulong)uVar15 >> 0x30)
              ;
              sVar41 = (ushort)(byte)uVar24 + (ushort)(byte)uVar18;
              sVar42 = (ushort)(byte)((ulong)uVar24 >> 8) + (ushort)(byte)((ulong)uVar18 >> 8);
              sVar43 = (ushort)(byte)((ulong)uVar24 >> 0x10) + (ushort)(byte)((ulong)uVar18 >> 0x10)
              ;
              uVar17 = CONCAT13((char)((ushort)sVar45 >> 8),CONCAT12((char)sVar45,sVar44));
              uVar16 = CONCAT13((char)((ushort)sVar42 >> 8),CONCAT12((char)sVar42,sVar41));
              uVar19 = CONCAT13((char)((ushort)sVar48 >> 8),CONCAT12((char)sVar48,sVar47));
              *(ulong *)(param_5 + uVar82) =
                   CONCAT17((char)((ushort)((ushort)(byte)((ulong)uVar24 >> 0x18) +
                                            (ushort)(byte)((ulong)uVar18 >> 0x18) +
                                           (ushort)(byte)((ulong)uVar24 >> 0x38) +
                                           (ushort)(byte)((ulong)uVar18 >> 0x38)) >> 2),
                            CONCAT16((char)((ushort)((short)(CONCAT15((char)((ushort)sVar43 >> 8),
                                                                      CONCAT14((char)sVar43,uVar16))
                                                            >> 0x20) +
                                                    (ushort)(byte)((ulong)uVar24 >> 0x30) +
                                                    (ushort)(byte)((ulong)uVar18 >> 0x30)) >> 2),
                                     CONCAT15((char)((ushort)((short)((uint)uVar16 >> 0x10) +
                                                             (ushort)(byte)((ulong)uVar24 >> 0x28) +
                                                             (ushort)(byte)((ulong)uVar18 >> 0x28))
                                                    >> 2),
                                              CONCAT14((char)((ushort)(sVar41 + (ushort)(byte)((
                                                  ulong)uVar24 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar18 >> 0x20)) >> 2),
                                                  CONCAT13((char)((ushort)((ushort)(byte)((ulong)
                                                  uVar23 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar15 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar23 >> 0x38) +
                                                  (ushort)(byte)((ulong)uVar15 >> 0x38)) >> 2),
                                                  CONCAT12((char)((ushort)((short)(CONCAT15((char)((
                                                  ushort)sVar46 >> 8),CONCAT14((char)sVar46,uVar17))
                                                  >> 0x20) +
                                                  (short)(CONCAT15((char)((ushort)sVar62 >> 8),
                                                                   CONCAT14((char)sVar62,uVar19)) >>
                                                         0x20)) >> 2),
                                                  CONCAT11((char)((ushort)((short)((uint)uVar17 >>
                                                                                  0x10) +
                                                                          (short)((uint)uVar19 >>
                                                                                 0x10)) >> 2),
                                                           (char)((ushort)(sVar44 + sVar47) >> 2))))
                                                  ))));
              lVar75 = lVar75 + 0x10;
            }
          }
          uVar86 = *param_2;
          if (uVar82 < uVar86 << 2) {
            pbVar77 = (byte *)(lVar83 + lVar75);
            pbVar74 = (byte *)(param_4 + lVar75);
            do {
              puVar73 = (undefined1 *)(param_5 + uVar82);
              *puVar73 = (char)((uint)pbVar77[1] + (uint)pbVar77[-3] +
                                (uint)pbVar74[-3] + (uint)pbVar74[1] >> 2);
              puVar73[1] = (char)((uint)pbVar77[2] + (uint)pbVar77[-2] +
                                  (uint)pbVar74[-2] + (uint)pbVar74[2] >> 2);
              puVar73[2] = (char)((uint)pbVar77[3] + (uint)pbVar77[-1] +
                                  (uint)pbVar74[-1] + (uint)pbVar74[3] >> 2);
              puVar73[3] = (char)((uint)pbVar77[4] + (uint)*pbVar77 +
                                  (uint)*pbVar74 + (uint)pbVar74[4] >> 2);
              uVar82 = uVar82 + 4;
              pbVar77 = pbVar77 + 8;
              pbVar74 = pbVar74 + 8;
            } while (uVar82 < uVar86 << 2);
          }
          uVar81 = uVar81 + 1;
          param_5 = param_5 + param_6;
          lVar84 = lVar84 + lVar76;
          param_3 = param_3 + lVar76;
          lVar83 = lVar83 + lVar76;
          param_4 = param_4 + lVar76;
        } while (uVar81 < param_2[1]);
      }
    }
    else {
      uVar87 = *param_2;
      lVar83 = uVar87 * 4;
      bVar71 = false;
      if ((fVar12 == 0.5) && (bVar71 = false, !NAN(fVar22))) {
        bVar71 = fVar22 == 0.5;
      }
      if (bVar71) {
        if (uVar81 != 0) {
          uVar82 = 0;
          lVar84 = param_5 + 0x40;
          uVar86 = 1;
          lVar72 = param_5;
          do {
            lVar75 = param_4 * (uVar82 >> 1);
            lVar76 = param_3 + lVar75;
            uVar81 = uVar81 - 1;
            if (uVar87 < 0x1f || lVar83 == 0x7c) {
              uVar88 = 0;
              lVar78 = 0;
            }
            else {
              lVar78 = 0;
              uVar88 = 0;
              uVar80 = uVar86;
              if (uVar81 <= uVar86) {
                uVar80 = uVar81;
              }
              do {
                puVar73 = (undefined1 *)(lVar76 + lVar78);
                Hint_Prefetch(puVar73 + 0x140,0,0,0);
                uVar89 = *puVar73;
                uVar113 = puVar73[1];
                uVar137 = puVar73[2];
                uVar162 = puVar73[3];
                uVar91 = puVar73[4];
                uVar115 = puVar73[5];
                uVar139 = puVar73[6];
                uVar164 = puVar73[7];
                uVar93 = puVar73[8];
                uVar117 = puVar73[9];
                uVar141 = puVar73[10];
                uVar166 = puVar73[0xb];
                uVar95 = puVar73[0xc];
                uVar119 = puVar73[0xd];
                uVar143 = puVar73[0xe];
                uVar168 = puVar73[0xf];
                uVar97 = puVar73[0x10];
                uVar121 = puVar73[0x11];
                uVar145 = puVar73[0x12];
                uVar170 = puVar73[0x13];
                uVar99 = puVar73[0x14];
                uVar123 = puVar73[0x15];
                uVar147 = puVar73[0x16];
                uVar172 = puVar73[0x17];
                uVar101 = puVar73[0x18];
                uVar125 = puVar73[0x19];
                uVar149 = puVar73[0x1a];
                uVar174 = puVar73[0x1b];
                uVar103 = puVar73[0x1c];
                uVar127 = puVar73[0x1d];
                uVar151 = puVar73[0x1e];
                uVar176 = puVar73[0x1f];
                uVar105 = puVar73[0x20];
                uVar129 = puVar73[0x21];
                uVar153 = puVar73[0x22];
                uVar177 = puVar73[0x23];
                uVar106 = puVar73[0x24];
                uVar130 = puVar73[0x25];
                uVar154 = puVar73[0x26];
                uVar178 = puVar73[0x27];
                uVar107 = puVar73[0x28];
                uVar131 = puVar73[0x29];
                uVar155 = puVar73[0x2a];
                uVar179 = puVar73[0x2b];
                uVar108 = puVar73[0x2c];
                uVar132 = puVar73[0x2d];
                uVar156 = puVar73[0x2e];
                uVar180 = puVar73[0x2f];
                uVar109 = puVar73[0x30];
                uVar133 = puVar73[0x31];
                uVar157 = puVar73[0x32];
                uVar181 = puVar73[0x33];
                uVar110 = puVar73[0x34];
                uVar134 = puVar73[0x35];
                uVar158 = puVar73[0x36];
                uVar182 = puVar73[0x37];
                uVar111 = puVar73[0x38];
                uVar135 = puVar73[0x39];
                uVar159 = puVar73[0x3a];
                uVar183 = puVar73[0x3b];
                uVar112 = puVar73[0x3c];
                uVar136 = puVar73[0x3d];
                uVar160 = puVar73[0x3e];
                uVar184 = puVar73[0x3f];
                puVar73 = (undefined1 *)(lVar84 + uVar88);
                puVar73[-0x40] = uVar89;
                puVar73[-0x3f] = uVar113;
                puVar73[-0x3e] = uVar137;
                puVar73[-0x3d] = uVar162;
                puVar73[-0x3c] = uVar89;
                puVar73[-0x3b] = uVar113;
                puVar73[-0x3a] = uVar137;
                puVar73[-0x39] = uVar162;
                puVar73[-0x38] = uVar91;
                puVar73[-0x37] = uVar115;
                puVar73[-0x36] = uVar139;
                puVar73[-0x35] = uVar164;
                puVar73[-0x34] = uVar91;
                puVar73[-0x33] = uVar115;
                puVar73[-0x32] = uVar139;
                puVar73[-0x31] = uVar164;
                puVar73[-0x30] = uVar93;
                puVar73[-0x2f] = uVar117;
                puVar73[-0x2e] = uVar141;
                puVar73[-0x2d] = uVar166;
                puVar73[-0x2c] = uVar93;
                puVar73[-0x2b] = uVar117;
                puVar73[-0x2a] = uVar141;
                puVar73[-0x29] = uVar166;
                puVar73[-0x28] = uVar95;
                puVar73[-0x27] = uVar119;
                puVar73[-0x26] = uVar143;
                puVar73[-0x25] = uVar168;
                puVar73[-0x24] = uVar95;
                puVar73[-0x23] = uVar119;
                puVar73[-0x22] = uVar143;
                puVar73[-0x21] = uVar168;
                puVar73[-0x20] = uVar97;
                puVar73[-0x1f] = uVar121;
                puVar73[-0x1e] = uVar145;
                puVar73[-0x1d] = uVar170;
                puVar73[-0x1c] = uVar97;
                puVar73[-0x1b] = uVar121;
                puVar73[-0x1a] = uVar145;
                puVar73[-0x19] = uVar170;
                puVar73[-0x18] = uVar99;
                puVar73[-0x17] = uVar123;
                puVar73[-0x16] = uVar147;
                puVar73[-0x15] = uVar172;
                puVar73[-0x14] = uVar99;
                puVar73[-0x13] = uVar123;
                puVar73[-0x12] = uVar147;
                puVar73[-0x11] = uVar172;
                puVar73[-0x10] = uVar101;
                puVar73[-0xf] = uVar125;
                puVar73[-0xe] = uVar149;
                puVar73[-0xd] = uVar174;
                puVar73[-0xc] = uVar101;
                puVar73[-0xb] = uVar125;
                puVar73[-10] = uVar149;
                puVar73[-9] = uVar174;
                puVar73[-8] = uVar103;
                puVar73[-7] = uVar127;
                puVar73[-6] = uVar151;
                puVar73[-5] = uVar176;
                puVar73[-4] = uVar103;
                puVar73[-3] = uVar127;
                puVar73[-2] = uVar151;
                puVar73[-1] = uVar176;
                puVar6 = (undefined1 *)(param_5 + param_6 * uVar80 + uVar88);
                *puVar6 = uVar89;
                puVar6[1] = uVar113;
                puVar6[2] = uVar137;
                puVar6[3] = uVar162;
                puVar6[4] = uVar89;
                puVar6[5] = uVar113;
                puVar6[6] = uVar137;
                puVar6[7] = uVar162;
                puVar6[8] = uVar91;
                puVar6[9] = uVar115;
                puVar6[10] = uVar139;
                puVar6[0xb] = uVar164;
                puVar6[0xc] = uVar91;
                puVar6[0xd] = uVar115;
                puVar6[0xe] = uVar139;
                puVar6[0xf] = uVar164;
                puVar6[0x10] = uVar93;
                puVar6[0x11] = uVar117;
                puVar6[0x12] = uVar141;
                puVar6[0x13] = uVar166;
                puVar6[0x14] = uVar93;
                puVar6[0x15] = uVar117;
                puVar6[0x16] = uVar141;
                puVar6[0x17] = uVar166;
                puVar6[0x18] = uVar95;
                puVar6[0x19] = uVar119;
                puVar6[0x1a] = uVar143;
                puVar6[0x1b] = uVar168;
                puVar6[0x1c] = uVar95;
                puVar6[0x1d] = uVar119;
                puVar6[0x1e] = uVar143;
                puVar6[0x1f] = uVar168;
                puVar6[0x20] = uVar97;
                puVar6[0x21] = uVar121;
                puVar6[0x22] = uVar145;
                puVar6[0x23] = uVar170;
                puVar6[0x24] = uVar97;
                puVar6[0x25] = uVar121;
                puVar6[0x26] = uVar145;
                puVar6[0x27] = uVar170;
                puVar6[0x28] = uVar99;
                puVar6[0x29] = uVar123;
                puVar6[0x2a] = uVar147;
                puVar6[0x2b] = uVar172;
                puVar6[0x2c] = uVar99;
                puVar6[0x2d] = uVar123;
                puVar6[0x2e] = uVar147;
                puVar6[0x2f] = uVar172;
                puVar6[0x30] = uVar101;
                puVar6[0x31] = uVar125;
                puVar6[0x32] = uVar149;
                puVar6[0x33] = uVar174;
                puVar6[0x34] = uVar101;
                puVar6[0x35] = uVar125;
                puVar6[0x36] = uVar149;
                puVar6[0x37] = uVar174;
                puVar6[0x38] = uVar103;
                puVar6[0x39] = uVar127;
                puVar6[0x3a] = uVar151;
                puVar6[0x3b] = uVar176;
                puVar6[0x3c] = uVar103;
                puVar6[0x3d] = uVar127;
                puVar6[0x3e] = uVar151;
                puVar6[0x3f] = uVar176;
                *puVar73 = uVar105;
                puVar73[1] = uVar129;
                puVar73[2] = uVar153;
                puVar73[3] = uVar177;
                puVar73[4] = uVar105;
                puVar73[5] = uVar129;
                puVar73[6] = uVar153;
                puVar73[7] = uVar177;
                puVar73[8] = uVar106;
                puVar73[9] = uVar130;
                puVar73[10] = uVar154;
                puVar73[0xb] = uVar178;
                puVar73[0xc] = uVar106;
                puVar73[0xd] = uVar130;
                puVar73[0xe] = uVar154;
                puVar73[0xf] = uVar178;
                puVar73[0x10] = uVar107;
                puVar73[0x11] = uVar131;
                puVar73[0x12] = uVar155;
                puVar73[0x13] = uVar179;
                puVar73[0x14] = uVar107;
                puVar73[0x15] = uVar131;
                puVar73[0x16] = uVar155;
                puVar73[0x17] = uVar179;
                puVar73[0x18] = uVar108;
                puVar73[0x19] = uVar132;
                puVar73[0x1a] = uVar156;
                puVar73[0x1b] = uVar180;
                puVar73[0x1c] = uVar108;
                puVar73[0x1d] = uVar132;
                puVar73[0x1e] = uVar156;
                puVar73[0x1f] = uVar180;
                puVar73[0x20] = uVar109;
                puVar73[0x21] = uVar133;
                puVar73[0x22] = uVar157;
                puVar73[0x23] = uVar181;
                puVar73[0x24] = uVar109;
                puVar73[0x25] = uVar133;
                puVar73[0x26] = uVar157;
                puVar73[0x27] = uVar181;
                puVar73[0x28] = uVar110;
                puVar73[0x29] = uVar134;
                puVar73[0x2a] = uVar158;
                puVar73[0x2b] = uVar182;
                puVar73[0x2c] = uVar110;
                puVar73[0x2d] = uVar134;
                puVar73[0x2e] = uVar158;
                puVar73[0x2f] = uVar182;
                puVar73[0x30] = uVar111;
                puVar73[0x31] = uVar135;
                puVar73[0x32] = uVar159;
                puVar73[0x33] = uVar183;
                puVar73[0x34] = uVar111;
                puVar73[0x35] = uVar135;
                puVar73[0x36] = uVar159;
                puVar73[0x37] = uVar183;
                puVar73[0x38] = uVar112;
                puVar73[0x39] = uVar136;
                puVar73[0x3a] = uVar160;
                puVar73[0x3b] = uVar184;
                puVar73[0x3c] = uVar112;
                puVar73[0x3d] = uVar136;
                puVar73[0x3e] = uVar160;
                puVar73[0x3f] = uVar184;
                puVar6[0x40] = uVar105;
                puVar6[0x41] = uVar129;
                puVar6[0x42] = uVar153;
                puVar6[0x43] = uVar177;
                puVar6[0x44] = uVar105;
                puVar6[0x45] = uVar129;
                puVar6[0x46] = uVar153;
                puVar6[0x47] = uVar177;
                puVar6[0x48] = uVar106;
                puVar6[0x49] = uVar130;
                puVar6[0x4a] = uVar154;
                puVar6[0x4b] = uVar178;
                puVar6[0x4c] = uVar106;
                puVar6[0x4d] = uVar130;
                puVar6[0x4e] = uVar154;
                puVar6[0x4f] = uVar178;
                puVar6[0x50] = uVar107;
                puVar6[0x51] = uVar131;
                puVar6[0x52] = uVar155;
                puVar6[0x53] = uVar179;
                puVar6[0x54] = uVar107;
                puVar6[0x55] = uVar131;
                puVar6[0x56] = uVar155;
                puVar6[0x57] = uVar179;
                puVar6[0x58] = uVar108;
                puVar6[0x59] = uVar132;
                puVar6[0x5a] = uVar156;
                puVar6[0x5b] = uVar180;
                puVar6[0x5c] = uVar108;
                puVar6[0x5d] = uVar132;
                puVar6[0x5e] = uVar156;
                puVar6[0x5f] = uVar180;
                puVar6[0x60] = uVar109;
                puVar6[0x61] = uVar133;
                puVar6[0x62] = uVar157;
                puVar6[99] = uVar181;
                puVar6[100] = uVar109;
                puVar6[0x65] = uVar133;
                puVar6[0x66] = uVar157;
                puVar6[0x67] = uVar181;
                puVar6[0x68] = uVar110;
                puVar6[0x69] = uVar134;
                puVar6[0x6a] = uVar158;
                puVar6[0x6b] = uVar182;
                puVar6[0x6c] = uVar110;
                puVar6[0x6d] = uVar134;
                puVar6[0x6e] = uVar158;
                puVar6[0x6f] = uVar182;
                puVar6[0x70] = uVar111;
                puVar6[0x71] = uVar135;
                puVar6[0x72] = uVar159;
                puVar6[0x73] = uVar183;
                puVar6[0x74] = uVar111;
                puVar6[0x75] = uVar135;
                puVar6[0x76] = uVar159;
                puVar6[0x77] = uVar183;
                puVar6[0x78] = uVar112;
                puVar6[0x79] = uVar136;
                puVar6[0x7a] = uVar160;
                puVar6[0x7b] = uVar184;
                puVar6[0x7c] = uVar112;
                puVar6[0x7d] = uVar136;
                puVar6[0x7e] = uVar160;
                puVar6[0x7f] = uVar184;
                uVar88 = uVar88 + 0x80;
                lVar78 = lVar78 + 0x40;
              } while (uVar88 < lVar83 - 0x7cU);
            }
            if ((0xe < uVar87) && (uVar88 < lVar83 - 0x3cU)) {
              uVar80 = uVar86;
              if (uVar81 <= uVar86) {
                uVar80 = uVar81;
              }
              do {
                puVar73 = (undefined1 *)(lVar76 + lVar78);
                Hint_Prefetch(puVar73 + 0x140,0,0,0);
                uVar89 = *puVar73;
                uVar105 = puVar73[1];
                uVar113 = puVar73[2];
                uVar129 = puVar73[3];
                uVar91 = puVar73[4];
                uVar106 = puVar73[5];
                uVar115 = puVar73[6];
                uVar130 = puVar73[7];
                uVar93 = puVar73[8];
                uVar107 = puVar73[9];
                uVar117 = puVar73[10];
                uVar131 = puVar73[0xb];
                uVar95 = puVar73[0xc];
                uVar108 = puVar73[0xd];
                uVar119 = puVar73[0xe];
                uVar132 = puVar73[0xf];
                uVar97 = puVar73[0x10];
                uVar109 = puVar73[0x11];
                uVar121 = puVar73[0x12];
                uVar133 = puVar73[0x13];
                uVar99 = puVar73[0x14];
                uVar110 = puVar73[0x15];
                uVar123 = puVar73[0x16];
                uVar134 = puVar73[0x17];
                uVar101 = puVar73[0x18];
                uVar111 = puVar73[0x19];
                uVar125 = puVar73[0x1a];
                uVar135 = puVar73[0x1b];
                uVar103 = puVar73[0x1c];
                uVar112 = puVar73[0x1d];
                uVar127 = puVar73[0x1e];
                uVar136 = puVar73[0x1f];
                puVar73 = (undefined1 *)(lVar72 + uVar88);
                *puVar73 = uVar89;
                puVar73[1] = uVar105;
                puVar73[2] = uVar113;
                puVar73[3] = uVar129;
                puVar73[4] = uVar89;
                puVar73[5] = uVar105;
                puVar73[6] = uVar113;
                puVar73[7] = uVar129;
                puVar73[8] = uVar91;
                puVar73[9] = uVar106;
                puVar73[10] = uVar115;
                puVar73[0xb] = uVar130;
                puVar73[0xc] = uVar91;
                puVar73[0xd] = uVar106;
                puVar73[0xe] = uVar115;
                puVar73[0xf] = uVar130;
                puVar73[0x10] = uVar93;
                puVar73[0x11] = uVar107;
                puVar73[0x12] = uVar117;
                puVar73[0x13] = uVar131;
                puVar73[0x14] = uVar93;
                puVar73[0x15] = uVar107;
                puVar73[0x16] = uVar117;
                puVar73[0x17] = uVar131;
                puVar73[0x18] = uVar95;
                puVar73[0x19] = uVar108;
                puVar73[0x1a] = uVar119;
                puVar73[0x1b] = uVar132;
                puVar73[0x1c] = uVar95;
                puVar73[0x1d] = uVar108;
                puVar73[0x1e] = uVar119;
                puVar73[0x1f] = uVar132;
                puVar73[0x20] = uVar97;
                puVar73[0x21] = uVar109;
                puVar73[0x22] = uVar121;
                puVar73[0x23] = uVar133;
                puVar73[0x24] = uVar97;
                puVar73[0x25] = uVar109;
                puVar73[0x26] = uVar121;
                puVar73[0x27] = uVar133;
                puVar73[0x28] = uVar99;
                puVar73[0x29] = uVar110;
                puVar73[0x2a] = uVar123;
                puVar73[0x2b] = uVar134;
                puVar73[0x2c] = uVar99;
                puVar73[0x2d] = uVar110;
                puVar73[0x2e] = uVar123;
                puVar73[0x2f] = uVar134;
                puVar73[0x30] = uVar101;
                puVar73[0x31] = uVar111;
                puVar73[0x32] = uVar125;
                puVar73[0x33] = uVar135;
                puVar73[0x34] = uVar101;
                puVar73[0x35] = uVar111;
                puVar73[0x36] = uVar125;
                puVar73[0x37] = uVar135;
                puVar73[0x38] = uVar103;
                puVar73[0x39] = uVar112;
                puVar73[0x3a] = uVar127;
                puVar73[0x3b] = uVar136;
                puVar73[0x3c] = uVar103;
                puVar73[0x3d] = uVar112;
                puVar73[0x3e] = uVar127;
                puVar73[0x3f] = uVar136;
                puVar73 = (undefined1 *)(param_5 + param_6 * uVar80 + uVar88);
                *puVar73 = uVar89;
                puVar73[1] = uVar105;
                puVar73[2] = uVar113;
                puVar73[3] = uVar129;
                puVar73[4] = uVar89;
                puVar73[5] = uVar105;
                puVar73[6] = uVar113;
                puVar73[7] = uVar129;
                puVar73[8] = uVar91;
                puVar73[9] = uVar106;
                puVar73[10] = uVar115;
                puVar73[0xb] = uVar130;
                puVar73[0xc] = uVar91;
                puVar73[0xd] = uVar106;
                puVar73[0xe] = uVar115;
                puVar73[0xf] = uVar130;
                puVar73[0x10] = uVar93;
                puVar73[0x11] = uVar107;
                puVar73[0x12] = uVar117;
                puVar73[0x13] = uVar131;
                puVar73[0x14] = uVar93;
                puVar73[0x15] = uVar107;
                puVar73[0x16] = uVar117;
                puVar73[0x17] = uVar131;
                puVar73[0x18] = uVar95;
                puVar73[0x19] = uVar108;
                puVar73[0x1a] = uVar119;
                puVar73[0x1b] = uVar132;
                puVar73[0x1c] = uVar95;
                puVar73[0x1d] = uVar108;
                puVar73[0x1e] = uVar119;
                puVar73[0x1f] = uVar132;
                puVar73[0x20] = uVar97;
                puVar73[0x21] = uVar109;
                puVar73[0x22] = uVar121;
                puVar73[0x23] = uVar133;
                puVar73[0x24] = uVar97;
                puVar73[0x25] = uVar109;
                puVar73[0x26] = uVar121;
                puVar73[0x27] = uVar133;
                puVar73[0x28] = uVar99;
                puVar73[0x29] = uVar110;
                puVar73[0x2a] = uVar123;
                puVar73[0x2b] = uVar134;
                puVar73[0x2c] = uVar99;
                puVar73[0x2d] = uVar110;
                puVar73[0x2e] = uVar123;
                puVar73[0x2f] = uVar134;
                puVar73[0x30] = uVar101;
                puVar73[0x31] = uVar111;
                puVar73[0x32] = uVar125;
                puVar73[0x33] = uVar135;
                puVar73[0x34] = uVar101;
                puVar73[0x35] = uVar111;
                puVar73[0x36] = uVar125;
                puVar73[0x37] = uVar135;
                puVar73[0x38] = uVar103;
                puVar73[0x39] = uVar112;
                puVar73[0x3a] = uVar127;
                puVar73[0x3b] = uVar136;
                puVar73[0x3c] = uVar103;
                puVar73[0x3d] = uVar112;
                puVar73[0x3e] = uVar127;
                puVar73[0x3f] = uVar136;
                uVar88 = uVar88 + 0x40;
                lVar78 = lVar78 + 0x20;
              } while (uVar88 < lVar83 - 0x3cU);
            }
            uVar80 = *param_2;
            if (uVar88 < uVar80 << 2) {
              uVar10 = uVar86;
              if (uVar81 <= uVar86) {
                uVar10 = uVar81;
              }
              puVar73 = (undefined1 *)(param_3 + 1 + lVar78 + lVar75);
              do {
                uVar89 = puVar73[-1];
                puVar6 = (undefined1 *)(lVar72 + uVar88);
                puVar6[4] = uVar89;
                *puVar6 = uVar89;
                puVar7 = (undefined1 *)(param_5 + param_6 * uVar10 + uVar88);
                puVar7[4] = uVar89;
                *puVar7 = uVar89;
                uVar89 = *puVar73;
                puVar6[5] = uVar89;
                puVar6[1] = uVar89;
                puVar7[5] = uVar89;
                puVar7[1] = uVar89;
                uVar89 = puVar73[1];
                puVar6[6] = uVar89;
                puVar6[2] = uVar89;
                puVar7[6] = uVar89;
                puVar7[2] = uVar89;
                uVar89 = puVar73[2];
                puVar6[7] = uVar89;
                puVar6[3] = uVar89;
                puVar7[7] = uVar89;
                puVar7[3] = uVar89;
                uVar88 = uVar88 + 8;
                puVar73 = puVar73 + 4;
              } while (uVar88 < uVar80 << 2);
            }
            uVar82 = uVar82 + 2;
            uVar81 = param_2[1];
            lVar84 = lVar84 + param_6 * 2;
            uVar86 = uVar86 + 2;
            lVar72 = lVar72 + param_6 * 2;
          } while (uVar82 < uVar81);
        }
      }
      else if (uVar81 != 0) {
        lVar78 = 0;
        uVar81 = 0;
        lVar85 = param_4 * 4;
        lVar72 = param_3 + param_4 * 3;
        lVar76 = param_3 + param_4;
        lVar84 = param_3 + 7;
        lVar75 = param_3 + param_4 * 2;
        do {
          if (uVar87 < 3 || lVar83 == 0xc) {
            uVar82 = 0;
            lVar79 = 0;
          }
          else {
            lVar79 = 0;
            uVar82 = 0;
            do {
              puVar1 = (undefined8 *)(param_3 + lVar79);
              puVar3 = (undefined8 *)(lVar76 + lVar79);
              Hint_Prefetch(puVar1 + 0x28,0,0,0);
              Hint_Prefetch(puVar3 + 0x28,0,0,0);
              puVar4 = (undefined8 *)(lVar75 + lVar79);
              Hint_Prefetch(puVar4 + 0x28,0,0,0);
              puVar5 = (undefined8 *)(lVar72 + lVar79);
              Hint_Prefetch(puVar5 + 0x28,0,0,0);
              uVar18 = puVar1[1];
              uVar15 = *puVar1;
              uVar24 = puVar1[3];
              uVar23 = puVar1[2];
              uVar29 = puVar3[1];
              uVar27 = *puVar3;
              uVar34 = puVar3[3];
              uVar32 = puVar3[2];
              uVar218 = puVar4[1];
              uVar204 = *puVar4;
              uVar51 = puVar4[3];
              uVar49 = puVar4[2];
              uVar212 = puVar5[1];
              uVar202 = *puVar5;
              uVar226 = puVar5[3];
              uVar216 = puVar5[2];
              uVar30 = puVar1[5];
              uVar28 = puVar1[4];
              uVar35 = puVar1[7];
              uVar33 = puVar1[6];
              sVar41 = (ushort)(byte)uVar15 + (ushort)(byte)uVar18 + (ushort)(byte)uVar29 +
                       (ushort)(byte)uVar27 + (ushort)(byte)uVar218 + (ushort)(byte)uVar204 +
                       (ushort)(byte)uVar212 + (ushort)(byte)uVar202;
              sVar42 = (ushort)(byte)((ulong)uVar15 >> 8) + (ushort)(byte)((ulong)uVar18 >> 8) +
                       (ushort)(byte)((ulong)uVar29 >> 8) + (ushort)(byte)((ulong)uVar27 >> 8) +
                       (ushort)(byte)((ulong)uVar218 >> 8) + (ushort)(byte)((ulong)uVar204 >> 8) +
                       (ushort)(byte)((ulong)uVar212 >> 8) + (ushort)(byte)((ulong)uVar202 >> 8);
              sVar44 = (ushort)(byte)((ulong)uVar15 >> 0x10) + (ushort)(byte)((ulong)uVar18 >> 0x10)
                       + (ushort)(byte)((ulong)uVar29 >> 0x10) +
                       (ushort)(byte)((ulong)uVar27 >> 0x10) +
                       (ushort)(byte)((ulong)uVar218 >> 0x10) +
                       (ushort)(byte)((ulong)uVar204 >> 0x10) +
                       (ushort)(byte)((ulong)uVar212 >> 0x10) +
                       (ushort)(byte)((ulong)uVar202 >> 0x10);
              sVar46 = (ushort)(byte)((ulong)uVar15 >> 0x20) + (ushort)(byte)((ulong)uVar18 >> 0x20)
                       + (ushort)(byte)((ulong)uVar29 >> 0x20) +
                       (ushort)(byte)((ulong)uVar27 >> 0x20) +
                       (ushort)(byte)((ulong)uVar218 >> 0x20) +
                       (ushort)(byte)((ulong)uVar204 >> 0x20) +
                       (ushort)(byte)((ulong)uVar212 >> 0x20) +
                       (ushort)(byte)((ulong)uVar202 >> 0x20);
              sVar43 = (ushort)(byte)((ulong)uVar15 >> 0x28) + (ushort)(byte)((ulong)uVar18 >> 0x28)
                       + (ushort)(byte)((ulong)uVar29 >> 0x28) +
                       (ushort)(byte)((ulong)uVar27 >> 0x28) +
                       (ushort)(byte)((ulong)uVar218 >> 0x28) +
                       (ushort)(byte)((ulong)uVar204 >> 0x28) +
                       (ushort)(byte)((ulong)uVar212 >> 0x28) +
                       (ushort)(byte)((ulong)uVar202 >> 0x28);
              sVar47 = (ushort)(byte)((ulong)uVar15 >> 0x30) + (ushort)(byte)((ulong)uVar18 >> 0x30)
                       + (ushort)(byte)((ulong)uVar29 >> 0x30) +
                       (ushort)(byte)((ulong)uVar27 >> 0x30) +
                       (ushort)(byte)((ulong)uVar218 >> 0x30) +
                       (ushort)(byte)((ulong)uVar204 >> 0x30) +
                       (ushort)(byte)((ulong)uVar212 >> 0x30) +
                       (ushort)(byte)((ulong)uVar202 >> 0x30);
              uVar228 = puVar3[5];
              uVar214 = puVar3[4];
              uVar52 = puVar3[7];
              uVar50 = puVar3[6];
              uVar213 = puVar4[5];
              uVar203 = puVar4[4];
              uVar54 = puVar4[7];
              uVar53 = puVar4[6];
              sVar48 = (ushort)(byte)uVar23 + (ushort)(byte)uVar24 + (ushort)(byte)uVar34 +
                       (ushort)(byte)uVar32 + (ushort)(byte)uVar51 + (ushort)(byte)uVar49 +
                       (ushort)(byte)uVar226 + (ushort)(byte)uVar216;
              sVar45 = (ushort)(byte)((ulong)uVar23 >> 8) + (ushort)(byte)((ulong)uVar24 >> 8) +
                       (ushort)(byte)((ulong)uVar34 >> 8) + (ushort)(byte)((ulong)uVar32 >> 8) +
                       (ushort)(byte)((ulong)uVar51 >> 8) + (ushort)(byte)((ulong)uVar49 >> 8) +
                       (ushort)(byte)((ulong)uVar226 >> 8) + (ushort)(byte)((ulong)uVar216 >> 8);
              sVar62 = (ushort)(byte)((ulong)uVar23 >> 0x10) + (ushort)(byte)((ulong)uVar24 >> 0x10)
                       + (ushort)(byte)((ulong)uVar34 >> 0x10) +
                       (ushort)(byte)((ulong)uVar32 >> 0x10) + (ushort)(byte)((ulong)uVar51 >> 0x10)
                       + (ushort)(byte)((ulong)uVar49 >> 0x10) +
                       (ushort)(byte)((ulong)uVar226 >> 0x10) +
                       (ushort)(byte)((ulong)uVar216 >> 0x10);
              uVar227 = puVar5[5];
              uVar217 = puVar5[4];
              uVar56 = puVar5[7];
              uVar55 = puVar5[6];
              uVar17 = CONCAT13((char)((ushort)sVar42 >> 8),CONCAT12((char)sVar42,sVar41));
              sVar63 = (ushort)(byte)uVar28 + (ushort)(byte)uVar30 + (ushort)(byte)uVar228 +
                       (ushort)(byte)uVar214 + (ushort)(byte)uVar213 + (ushort)(byte)uVar203 +
                       (ushort)(byte)uVar227 + (ushort)(byte)uVar217;
              sVar64 = (ushort)(byte)((ulong)uVar28 >> 8) + (ushort)(byte)((ulong)uVar30 >> 8) +
                       (ushort)(byte)((ulong)uVar228 >> 8) + (ushort)(byte)((ulong)uVar214 >> 8) +
                       (ushort)(byte)((ulong)uVar213 >> 8) + (ushort)(byte)((ulong)uVar203 >> 8) +
                       (ushort)(byte)((ulong)uVar227 >> 8) + (ushort)(byte)((ulong)uVar217 >> 8);
              sVar65 = (ushort)(byte)((ulong)uVar28 >> 0x10) + (ushort)(byte)((ulong)uVar30 >> 0x10)
                       + (ushort)(byte)((ulong)uVar228 >> 0x10) +
                       (ushort)(byte)((ulong)uVar214 >> 0x10) +
                       (ushort)(byte)((ulong)uVar213 >> 0x10) +
                       (ushort)(byte)((ulong)uVar203 >> 0x10) +
                       (ushort)(byte)((ulong)uVar227 >> 0x10) +
                       (ushort)(byte)((ulong)uVar217 >> 0x10);
              sVar66 = (ushort)(byte)((ulong)uVar28 >> 0x20) + (ushort)(byte)((ulong)uVar30 >> 0x20)
                       + (ushort)(byte)((ulong)uVar228 >> 0x20) +
                       (ushort)(byte)((ulong)uVar214 >> 0x20) +
                       (ushort)(byte)((ulong)uVar213 >> 0x20) +
                       (ushort)(byte)((ulong)uVar203 >> 0x20) +
                       (ushort)(byte)((ulong)uVar227 >> 0x20) +
                       (ushort)(byte)((ulong)uVar217 >> 0x20);
              sVar67 = (ushort)(byte)((ulong)uVar28 >> 0x28) + (ushort)(byte)((ulong)uVar30 >> 0x28)
                       + (ushort)(byte)((ulong)uVar228 >> 0x28) +
                       (ushort)(byte)((ulong)uVar214 >> 0x28) +
                       (ushort)(byte)((ulong)uVar213 >> 0x28) +
                       (ushort)(byte)((ulong)uVar203 >> 0x28) +
                       (ushort)(byte)((ulong)uVar227 >> 0x28) +
                       (ushort)(byte)((ulong)uVar217 >> 0x28);
              sVar68 = (ushort)(byte)((ulong)uVar28 >> 0x30) + (ushort)(byte)((ulong)uVar30 >> 0x30)
                       + (ushort)(byte)((ulong)uVar228 >> 0x30) +
                       (ushort)(byte)((ulong)uVar214 >> 0x30) +
                       (ushort)(byte)((ulong)uVar213 >> 0x30) +
                       (ushort)(byte)((ulong)uVar203 >> 0x30) +
                       (ushort)(byte)((ulong)uVar227 >> 0x30) +
                       (ushort)(byte)((ulong)uVar217 >> 0x30);
              uVar21 = CONCAT13((char)((ushort)sVar45 >> 8),CONCAT12((char)sVar45,sVar48));
              uVar11 = CONCAT12((char)((ulong)uVar33 >> 8),(short)uVar33) & 0xff00ff;
              uVar19 = CONCAT13((char)((ushort)sVar43 >> 8),CONCAT12((char)sVar43,sVar46));
              sVar42 = (short)uVar11 + (ushort)(byte)uVar35 + (ushort)(byte)uVar52 +
                       (ushort)(byte)uVar50 + (ushort)(byte)uVar54 + (ushort)(byte)uVar53 +
                       (ushort)(byte)uVar56 + (ushort)(byte)uVar55;
              sVar43 = (ushort)(byte)(uVar11 >> 0x10) + (ushort)(byte)((ulong)uVar35 >> 8) +
                       (ushort)(byte)((ulong)uVar52 >> 8) + (ushort)(byte)((ulong)uVar50 >> 8) +
                       (ushort)(byte)((ulong)uVar54 >> 8) + (ushort)(byte)((ulong)uVar53 >> 8) +
                       (ushort)(byte)((ulong)uVar56 >> 8) + (ushort)(byte)((ulong)uVar55 >> 8);
              sVar45 = (ushort)(byte)((ulong)uVar33 >> 0x10) + (ushort)(byte)((ulong)uVar35 >> 0x10)
                       + (ushort)(byte)((ulong)uVar52 >> 0x10) +
                       (ushort)(byte)((ulong)uVar50 >> 0x10) + (ushort)(byte)((ulong)uVar54 >> 0x10)
                       + (ushort)(byte)((ulong)uVar53 >> 0x10) +
                       (ushort)(byte)((ulong)uVar56 >> 0x10) + (ushort)(byte)((ulong)uVar55 >> 0x10)
              ;
              uVar25 = CONCAT13((char)((ushort)sVar64 >> 8),CONCAT12((char)sVar64,sVar63));
              uVar16 = CONCAT13((char)((ushort)sVar43 >> 8),CONCAT12((char)sVar43,sVar42));
              uVar26 = CONCAT13((char)((ushort)sVar67 >> 8),CONCAT12((char)sVar67,sVar66));
              ((undefined8 *)(param_5 + uVar82))[1] =
                   CONCAT17((char)((ushort)((ushort)(byte)((ulong)uVar33 >> 0x18) +
                                            (ushort)(byte)((ulong)uVar35 >> 0x18) +
                                            (ushort)(byte)((ulong)uVar52 >> 0x18) +
                                            (ushort)(byte)((ulong)uVar50 >> 0x18) +
                                            (ushort)(byte)((ulong)uVar54 >> 0x18) +
                                            (ushort)(byte)((ulong)uVar53 >> 0x18) +
                                            (ushort)(byte)((ulong)uVar56 >> 0x18) +
                                            (ushort)(byte)((ulong)uVar55 >> 0x18) +
                                           (ushort)(byte)((ulong)uVar33 >> 0x38) +
                                           (ushort)(byte)((ulong)uVar35 >> 0x38) +
                                           (ushort)(byte)((ulong)uVar52 >> 0x38) +
                                           (ushort)(byte)((ulong)uVar50 >> 0x38) +
                                           (ushort)(byte)((ulong)uVar54 >> 0x38) +
                                           (ushort)(byte)((ulong)uVar53 >> 0x38) +
                                           (ushort)(byte)((ulong)uVar56 >> 0x38) +
                                           (ushort)(byte)((ulong)uVar55 >> 0x38)) >> 4),
                            CONCAT16((char)((ushort)((short)(CONCAT15((char)((ushort)sVar45 >> 8),
                                                                      CONCAT14((char)sVar45,uVar16))
                                                            >> 0x20) +
                                                    (ushort)(byte)((ulong)uVar33 >> 0x30) +
                                                    (ushort)(byte)((ulong)uVar35 >> 0x30) +
                                                    (ushort)(byte)((ulong)uVar52 >> 0x30) +
                                                    (ushort)(byte)((ulong)uVar50 >> 0x30) +
                                                    (ushort)(byte)((ulong)uVar54 >> 0x30) +
                                                    (ushort)(byte)((ulong)uVar53 >> 0x30) +
                                                    (ushort)(byte)((ulong)uVar56 >> 0x30) +
                                                    (ushort)(byte)((ulong)uVar55 >> 0x30)) >> 4),
                                     CONCAT15((char)((ushort)((short)((uint)uVar16 >> 0x10) +
                                                             (ushort)(byte)((ulong)uVar33 >> 0x28) +
                                                             (ushort)(byte)((ulong)uVar35 >> 0x28) +
                                                             (ushort)(byte)((ulong)uVar52 >> 0x28) +
                                                             (ushort)(byte)((ulong)uVar50 >> 0x28) +
                                                             (ushort)(byte)((ulong)uVar54 >> 0x28) +
                                                             (ushort)(byte)((ulong)uVar53 >> 0x28) +
                                                             (ushort)(byte)((ulong)uVar56 >> 0x28) +
                                                             (ushort)(byte)((ulong)uVar55 >> 0x28))
                                                    >> 4),
                                              CONCAT14((char)((ushort)(sVar42 + (ushort)(byte)((
                                                  ulong)uVar33 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar35 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar52 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar50 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar54 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar53 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar56 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar55 >> 0x20)) >> 4),
                                                  CONCAT13((char)((ushort)((ushort)(byte)((ulong)
                                                  uVar28 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar30 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar228 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar214 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar213 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar203 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar227 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar217 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar28 >> 0x38) +
                                                  (ushort)(byte)((ulong)uVar30 >> 0x38) +
                                                  (ushort)(byte)((ulong)uVar228 >> 0x38) +
                                                  (ushort)(byte)((ulong)uVar214 >> 0x38) +
                                                  (ushort)(byte)((ulong)uVar213 >> 0x38) +
                                                  (ushort)(byte)((ulong)uVar203 >> 0x38) +
                                                  (ushort)(byte)((ulong)uVar227 >> 0x38) +
                                                  (ushort)(byte)((ulong)uVar217 >> 0x38)) >> 4),
                                                  CONCAT12((char)((ushort)((short)(CONCAT15((char)((
                                                  ushort)sVar65 >> 8),CONCAT14((char)sVar65,uVar25))
                                                  >> 0x20) +
                                                  (short)(CONCAT15((char)((ushort)sVar68 >> 8),
                                                                   CONCAT14((char)sVar68,uVar26)) >>
                                                         0x20)) >> 4),
                                                  CONCAT11((char)((ushort)((short)((uint)uVar25 >>
                                                                                  0x10) +
                                                                          (short)((uint)uVar26 >>
                                                                                 0x10)) >> 4),
                                                           (char)((ushort)(sVar63 + sVar66) >> 4))))
                                                  ))));
              *(undefined8 *)(param_5 + uVar82) =
                   CONCAT17((char)((ushort)((ushort)(byte)((ulong)uVar23 >> 0x18) +
                                            (ushort)(byte)((ulong)uVar24 >> 0x18) +
                                            (ushort)(byte)((ulong)uVar34 >> 0x18) +
                                            (ushort)(byte)((ulong)uVar32 >> 0x18) +
                                            (ushort)(byte)((ulong)uVar51 >> 0x18) +
                                            (ushort)(byte)((ulong)uVar49 >> 0x18) +
                                            (ushort)(byte)((ulong)uVar226 >> 0x18) +
                                            (ushort)(byte)((ulong)uVar216 >> 0x18) +
                                           (ushort)(byte)((ulong)uVar23 >> 0x38) +
                                           (ushort)(byte)((ulong)uVar24 >> 0x38) +
                                           (ushort)(byte)((ulong)uVar34 >> 0x38) +
                                           (ushort)(byte)((ulong)uVar32 >> 0x38) +
                                           (ushort)(byte)((ulong)uVar51 >> 0x38) +
                                           (ushort)(byte)((ulong)uVar49 >> 0x38) +
                                           (ushort)(byte)((ulong)uVar226 >> 0x38) +
                                           (ushort)(byte)((ulong)uVar216 >> 0x38)) >> 4),
                            CONCAT16((char)((ushort)((short)(CONCAT15((char)((ushort)sVar62 >> 8),
                                                                      CONCAT14((char)sVar62,uVar21))
                                                            >> 0x20) +
                                                    (ushort)(byte)((ulong)uVar23 >> 0x30) +
                                                    (ushort)(byte)((ulong)uVar24 >> 0x30) +
                                                    (ushort)(byte)((ulong)uVar34 >> 0x30) +
                                                    (ushort)(byte)((ulong)uVar32 >> 0x30) +
                                                    (ushort)(byte)((ulong)uVar51 >> 0x30) +
                                                    (ushort)(byte)((ulong)uVar49 >> 0x30) +
                                                    (ushort)(byte)((ulong)uVar226 >> 0x30) +
                                                    (ushort)(byte)((ulong)uVar216 >> 0x30)) >> 4),
                                     CONCAT15((char)((ushort)((short)((uint)uVar21 >> 0x10) +
                                                             (ushort)(byte)((ulong)uVar23 >> 0x28) +
                                                             (ushort)(byte)((ulong)uVar24 >> 0x28) +
                                                             (ushort)(byte)((ulong)uVar34 >> 0x28) +
                                                             (ushort)(byte)((ulong)uVar32 >> 0x28) +
                                                             (ushort)(byte)((ulong)uVar51 >> 0x28) +
                                                             (ushort)(byte)((ulong)uVar49 >> 0x28) +
                                                             (ushort)(byte)((ulong)uVar226 >> 0x28)
                                                             + (ushort)(byte)((ulong)uVar216 >> 0x28
                                                                             )) >> 4),
                                              CONCAT14((char)((ushort)(sVar48 + (ushort)(byte)((
                                                  ulong)uVar23 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar24 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar34 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar32 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar51 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar49 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar226 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar216 >> 0x20)) >> 4),
                                                  CONCAT13((char)((ushort)((ushort)(byte)((ulong)
                                                  uVar15 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar18 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar29 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar27 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar218 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar204 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar212 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar202 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar15 >> 0x38) +
                                                  (ushort)(byte)((ulong)uVar18 >> 0x38) +
                                                  (ushort)(byte)((ulong)uVar29 >> 0x38) +
                                                  (ushort)(byte)((ulong)uVar27 >> 0x38) +
                                                  (ushort)(byte)((ulong)uVar218 >> 0x38) +
                                                  (ushort)(byte)((ulong)uVar204 >> 0x38) +
                                                  (ushort)(byte)((ulong)uVar212 >> 0x38) +
                                                  (ushort)(byte)((ulong)uVar202 >> 0x38)) >> 4),
                                                  CONCAT12((char)((ushort)((short)(CONCAT15((char)((
                                                  ushort)sVar44 >> 8),CONCAT14((char)sVar44,uVar17))
                                                  >> 0x20) +
                                                  (short)(CONCAT15((char)((ushort)sVar47 >> 8),
                                                                   CONCAT14((char)sVar47,uVar19)) >>
                                                         0x20)) >> 4),
                                                  CONCAT11((char)((ushort)((short)((uint)uVar17 >>
                                                                                  0x10) +
                                                                          (short)((uint)uVar19 >>
                                                                                 0x10)) >> 4),
                                                           (char)((ushort)(sVar41 + sVar46) >> 4))))
                                                  ))));
              uVar82 = uVar82 + 0x10;
              lVar79 = lVar79 + 0x40;
            } while (uVar82 < lVar83 - 0xcU);
          }
          if (uVar87 != 0) {
            for (; uVar82 < lVar83 - 4U; uVar82 = uVar82 + 8) {
              puVar1 = (undefined8 *)(param_3 + lVar79);
              uVar18 = puVar1[1];
              uVar15 = *puVar1;
              uVar24 = puVar1[3];
              uVar23 = puVar1[2];
              puVar1 = (undefined8 *)((long)puVar1 + param_4);
              uVar28 = puVar1[1];
              uVar27 = *puVar1;
              uVar30 = puVar1[3];
              uVar29 = puVar1[2];
              puVar1 = (undefined8 *)((long)puVar1 + param_4);
              uVar33 = puVar1[1];
              uVar32 = *puVar1;
              uVar35 = puVar1[3];
              uVar34 = puVar1[2];
              puVar1 = (undefined8 *)((long)puVar1 + param_4);
              uVar214 = puVar1[1];
              uVar204 = *puVar1;
              uVar228 = puVar1[3];
              uVar218 = puVar1[2];
              sVar41 = (ushort)(byte)uVar15 + (ushort)(byte)uVar18 + (ushort)(byte)uVar28 +
                       (ushort)(byte)uVar27 + (ushort)(byte)uVar33 + (ushort)(byte)uVar32 +
                       (ushort)(byte)uVar214 + (ushort)(byte)uVar204;
              sVar42 = (ushort)(byte)((ulong)uVar15 >> 8) + (ushort)(byte)((ulong)uVar18 >> 8) +
                       (ushort)(byte)((ulong)uVar28 >> 8) + (ushort)(byte)((ulong)uVar27 >> 8) +
                       (ushort)(byte)((ulong)uVar33 >> 8) + (ushort)(byte)((ulong)uVar32 >> 8) +
                       (ushort)(byte)((ulong)uVar214 >> 8) + (ushort)(byte)((ulong)uVar204 >> 8);
              sVar43 = (ushort)(byte)((ulong)uVar15 >> 0x10) + (ushort)(byte)((ulong)uVar18 >> 0x10)
                       + (ushort)(byte)((ulong)uVar28 >> 0x10) +
                       (ushort)(byte)((ulong)uVar27 >> 0x10) + (ushort)(byte)((ulong)uVar33 >> 0x10)
                       + (ushort)(byte)((ulong)uVar32 >> 0x10) +
                       (ushort)(byte)((ulong)uVar214 >> 0x10) +
                       (ushort)(byte)((ulong)uVar204 >> 0x10);
              sVar44 = (ushort)(byte)((ulong)uVar15 >> 0x20) + (ushort)(byte)((ulong)uVar18 >> 0x20)
                       + (ushort)(byte)((ulong)uVar28 >> 0x20) +
                       (ushort)(byte)((ulong)uVar27 >> 0x20) + (ushort)(byte)((ulong)uVar33 >> 0x20)
                       + (ushort)(byte)((ulong)uVar32 >> 0x20) +
                       (ushort)(byte)((ulong)uVar214 >> 0x20) +
                       (ushort)(byte)((ulong)uVar204 >> 0x20);
              sVar45 = (ushort)(byte)((ulong)uVar15 >> 0x28) + (ushort)(byte)((ulong)uVar18 >> 0x28)
                       + (ushort)(byte)((ulong)uVar28 >> 0x28) +
                       (ushort)(byte)((ulong)uVar27 >> 0x28) + (ushort)(byte)((ulong)uVar33 >> 0x28)
                       + (ushort)(byte)((ulong)uVar32 >> 0x28) +
                       (ushort)(byte)((ulong)uVar214 >> 0x28) +
                       (ushort)(byte)((ulong)uVar204 >> 0x28);
              sVar46 = (ushort)(byte)((ulong)uVar15 >> 0x30) + (ushort)(byte)((ulong)uVar18 >> 0x30)
                       + (ushort)(byte)((ulong)uVar28 >> 0x30) +
                       (ushort)(byte)((ulong)uVar27 >> 0x30) + (ushort)(byte)((ulong)uVar33 >> 0x30)
                       + (ushort)(byte)((ulong)uVar32 >> 0x30) +
                       (ushort)(byte)((ulong)uVar214 >> 0x30) +
                       (ushort)(byte)((ulong)uVar204 >> 0x30);
              sVar47 = (ushort)(byte)uVar23 + (ushort)(byte)uVar24 + (ushort)(byte)uVar30 +
                       (ushort)(byte)uVar29 + (ushort)(byte)uVar35 + (ushort)(byte)uVar34 +
                       (ushort)(byte)uVar228 + (ushort)(byte)uVar218;
              sVar48 = (ushort)(byte)((ulong)uVar23 >> 8) + (ushort)(byte)((ulong)uVar24 >> 8) +
                       (ushort)(byte)((ulong)uVar30 >> 8) + (ushort)(byte)((ulong)uVar29 >> 8) +
                       (ushort)(byte)((ulong)uVar35 >> 8) + (ushort)(byte)((ulong)uVar34 >> 8) +
                       (ushort)(byte)((ulong)uVar228 >> 8) + (ushort)(byte)((ulong)uVar218 >> 8);
              sVar62 = (ushort)(byte)((ulong)uVar23 >> 0x10) + (ushort)(byte)((ulong)uVar24 >> 0x10)
                       + (ushort)(byte)((ulong)uVar30 >> 0x10) +
                       (ushort)(byte)((ulong)uVar29 >> 0x10) + (ushort)(byte)((ulong)uVar35 >> 0x10)
                       + (ushort)(byte)((ulong)uVar34 >> 0x10) +
                       (ushort)(byte)((ulong)uVar228 >> 0x10) +
                       (ushort)(byte)((ulong)uVar218 >> 0x10);
              uVar16 = CONCAT13((char)((ushort)sVar42 >> 8),CONCAT12((char)sVar42,sVar41));
              uVar19 = CONCAT13((char)((ushort)sVar48 >> 8),CONCAT12((char)sVar48,sVar47));
              uVar17 = CONCAT13((char)((ushort)sVar45 >> 8),CONCAT12((char)sVar45,sVar44));
              *(ulong *)(param_5 + uVar82) =
                   CONCAT17((char)((ushort)((ushort)(byte)((ulong)uVar23 >> 0x18) +
                                            (ushort)(byte)((ulong)uVar24 >> 0x18) +
                                            (ushort)(byte)((ulong)uVar30 >> 0x18) +
                                            (ushort)(byte)((ulong)uVar29 >> 0x18) +
                                            (ushort)(byte)((ulong)uVar35 >> 0x18) +
                                            (ushort)(byte)((ulong)uVar34 >> 0x18) +
                                            (ushort)(byte)((ulong)uVar228 >> 0x18) +
                                            (ushort)(byte)((ulong)uVar218 >> 0x18) +
                                           (ushort)(byte)((ulong)uVar23 >> 0x38) +
                                           (ushort)(byte)((ulong)uVar24 >> 0x38) +
                                           (ushort)(byte)((ulong)uVar30 >> 0x38) +
                                           (ushort)(byte)((ulong)uVar29 >> 0x38) +
                                           (ushort)(byte)((ulong)uVar35 >> 0x38) +
                                           (ushort)(byte)((ulong)uVar34 >> 0x38) +
                                           (ushort)(byte)((ulong)uVar228 >> 0x38) +
                                           (ushort)(byte)((ulong)uVar218 >> 0x38)) >> 4),
                            CONCAT16((char)((ushort)((short)(CONCAT15((char)((ushort)sVar62 >> 8),
                                                                      CONCAT14((char)sVar62,uVar19))
                                                            >> 0x20) +
                                                    (ushort)(byte)((ulong)uVar23 >> 0x30) +
                                                    (ushort)(byte)((ulong)uVar24 >> 0x30) +
                                                    (ushort)(byte)((ulong)uVar30 >> 0x30) +
                                                    (ushort)(byte)((ulong)uVar29 >> 0x30) +
                                                    (ushort)(byte)((ulong)uVar35 >> 0x30) +
                                                    (ushort)(byte)((ulong)uVar34 >> 0x30) +
                                                    (ushort)(byte)((ulong)uVar228 >> 0x30) +
                                                    (ushort)(byte)((ulong)uVar218 >> 0x30)) >> 4),
                                     CONCAT15((char)((ushort)((short)((uint)uVar19 >> 0x10) +
                                                             (ushort)(byte)((ulong)uVar23 >> 0x28) +
                                                             (ushort)(byte)((ulong)uVar24 >> 0x28) +
                                                             (ushort)(byte)((ulong)uVar30 >> 0x28) +
                                                             (ushort)(byte)((ulong)uVar29 >> 0x28) +
                                                             (ushort)(byte)((ulong)uVar35 >> 0x28) +
                                                             (ushort)(byte)((ulong)uVar34 >> 0x28) +
                                                             (ushort)(byte)((ulong)uVar228 >> 0x28)
                                                             + (ushort)(byte)((ulong)uVar218 >> 0x28
                                                                             )) >> 4),
                                              CONCAT14((char)((ushort)(sVar47 + (ushort)(byte)((
                                                  ulong)uVar23 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar24 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar30 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar29 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar35 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar34 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar228 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar218 >> 0x20)) >> 4),
                                                  CONCAT13((char)((ushort)((ushort)(byte)((ulong)
                                                  uVar15 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar18 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar28 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar27 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar33 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar32 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar214 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar204 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar15 >> 0x38) +
                                                  (ushort)(byte)((ulong)uVar18 >> 0x38) +
                                                  (ushort)(byte)((ulong)uVar28 >> 0x38) +
                                                  (ushort)(byte)((ulong)uVar27 >> 0x38) +
                                                  (ushort)(byte)((ulong)uVar33 >> 0x38) +
                                                  (ushort)(byte)((ulong)uVar32 >> 0x38) +
                                                  (ushort)(byte)((ulong)uVar214 >> 0x38) +
                                                  (ushort)(byte)((ulong)uVar204 >> 0x38)) >> 4),
                                                  CONCAT12((char)((ushort)((short)(CONCAT15((char)((
                                                  ushort)sVar43 >> 8),CONCAT14((char)sVar43,uVar16))
                                                  >> 0x20) +
                                                  (short)(CONCAT15((char)((ushort)sVar46 >> 8),
                                                                   CONCAT14((char)sVar46,uVar17)) >>
                                                         0x20)) >> 4),
                                                  CONCAT11((char)((ushort)((short)((uint)uVar16 >>
                                                                                  0x10) +
                                                                          (short)((uint)uVar17 >>
                                                                                 0x10)) >> 4),
                                                           (char)((ushort)(sVar41 + sVar44) >> 4))))
                                                  ))));
              lVar79 = lVar79 + 0x20;
            }
          }
          uVar86 = *param_2;
          if (uVar82 < uVar86 << 2) {
            lVar79 = lVar79 + lVar78;
            do {
              pbVar77 = (byte *)(lVar84 + lVar79);
              pbVar74 = (byte *)(lVar84 + param_4 + lVar79);
              pbVar8 = (byte *)(lVar84 + param_4 * 2 + lVar79);
              pbVar9 = (byte *)(lVar84 + param_4 * 3 + lVar79);
              puVar73 = (undefined1 *)(param_5 + uVar82);
              *puVar73 = (char)((uint)pbVar77[-3] + (uint)pbVar77[-7] +
                                (uint)pbVar77[1] + (uint)pbVar77[5] +
                                (uint)pbVar74[-7] + (uint)pbVar74[-3] + (uint)pbVar74[1] +
                                (uint)pbVar74[5] + (uint)pbVar8[-7] + (uint)pbVar8[-3] +
                                (uint)pbVar8[1] +
                                (uint)pbVar8[5] + (uint)pbVar9[-7] + (uint)pbVar9[-3] +
                                (uint)pbVar9[1] + (uint)pbVar9[5] >> 4);
              puVar73[1] = (char)((uint)pbVar77[-2] + (uint)pbVar77[-6] +
                                  (uint)pbVar77[2] + (uint)pbVar77[6] +
                                  (uint)pbVar74[-6] + (uint)pbVar74[-2] + (uint)pbVar74[2] +
                                  (uint)pbVar74[6] + (uint)pbVar8[-6] + (uint)pbVar8[-2] +
                                  (uint)pbVar8[2] +
                                  (uint)pbVar8[6] + (uint)pbVar9[-6] + (uint)pbVar9[-2] +
                                  (uint)pbVar9[2] + (uint)pbVar9[6] >> 4);
              puVar73[2] = (char)((uint)pbVar77[-1] + (uint)pbVar77[-5] +
                                  (uint)pbVar77[3] + (uint)pbVar77[7] +
                                  (uint)pbVar74[-5] + (uint)pbVar74[-1] + (uint)pbVar74[3] +
                                  (uint)pbVar74[7] + (uint)pbVar8[-5] + (uint)pbVar8[-1] +
                                  (uint)pbVar8[3] +
                                  (uint)pbVar8[7] + (uint)pbVar9[-5] + (uint)pbVar9[-1] +
                                  (uint)pbVar9[3] + (uint)pbVar9[7] >> 4);
              puVar73[3] = (char)((uint)*pbVar77 + (uint)pbVar77[-4] +
                                  (uint)pbVar77[4] + (uint)pbVar77[8] +
                                  (uint)pbVar74[-4] + (uint)*pbVar74 + (uint)pbVar74[4] +
                                  (uint)pbVar74[8] + (uint)pbVar8[-4] + (uint)*pbVar8 +
                                  (uint)pbVar8[4] +
                                  (uint)pbVar8[8] + (uint)pbVar9[-4] + (uint)*pbVar9 +
                                  (uint)pbVar9[4] + (uint)pbVar9[8] >> 4);
              uVar82 = uVar82 + 4;
              lVar79 = lVar79 + 0x10;
            } while (uVar82 < uVar86 << 2);
          }
          uVar81 = uVar81 + 1;
          param_5 = param_5 + param_6;
          param_3 = param_3 + lVar85;
          lVar72 = lVar72 + lVar85;
          lVar76 = lVar76 + lVar85;
          lVar75 = lVar75 + lVar85;
          lVar78 = lVar78 + lVar85;
        } while (uVar81 < param_2[1]);
      }
    }
  }
  else if (param_7 == 3) {
    if (fVar12 == 2.0) {
      if (param_2[1] != 0) {
        uVar81 = 0;
        uVar87 = *param_2;
        lVar72 = uVar87 * 3;
        lVar84 = param_3 + param_4;
        lVar76 = param_4 * 2;
        lVar83 = param_3 + 2;
        param_4 = lVar83 + param_4;
        do {
          if (uVar87 < 0xf || lVar72 == 0x2d) {
            uVar82 = 0;
            lVar75 = 0;
          }
          else {
            lVar75 = 0;
            uVar82 = 0;
            do {
              pbVar77 = (byte *)(param_3 + lVar75);
              Hint_Prefetch(pbVar77 + 0x140,0,0,0);
              pbVar74 = (byte *)(lVar84 + lVar75);
              Hint_Prefetch(pbVar74 + 0x140,0,0,0);
              bVar126 = pbVar77[1];
              bVar173 = pbVar77[2];
              bVar128 = pbVar77[4];
              bVar175 = pbVar77[5];
              bVar90 = pbVar77[6];
              bVar138 = pbVar77[7];
              bVar185 = pbVar77[8];
              bVar92 = pbVar77[9];
              bVar140 = pbVar77[10];
              bVar186 = pbVar77[0xb];
              bVar94 = pbVar77[0xc];
              bVar142 = pbVar77[0xd];
              bVar187 = pbVar77[0xe];
              bVar96 = pbVar77[0xf];
              bVar144 = pbVar77[0x10];
              bVar188 = pbVar77[0x11];
              bVar98 = pbVar77[0x12];
              bVar146 = pbVar77[0x13];
              bVar189 = pbVar77[0x14];
              bVar100 = pbVar77[0x15];
              bVar148 = pbVar77[0x16];
              bVar190 = pbVar77[0x17];
              bVar102 = pbVar77[0x18];
              bVar150 = pbVar77[0x19];
              bVar191 = pbVar77[0x1a];
              bVar104 = pbVar77[0x1b];
              bVar152 = pbVar77[0x1c];
              bVar192 = pbVar77[0x1d];
              bVar114 = pbVar77[0x1e];
              bVar161 = pbVar77[0x1f];
              bVar193 = pbVar77[0x20];
              bVar116 = pbVar77[0x21];
              bVar163 = pbVar77[0x22];
              bVar194 = pbVar77[0x23];
              bVar118 = pbVar77[0x24];
              bVar165 = pbVar77[0x25];
              bVar195 = pbVar77[0x26];
              bVar120 = pbVar77[0x27];
              bVar167 = pbVar77[0x28];
              bVar196 = pbVar77[0x29];
              bVar122 = pbVar77[0x2a];
              bVar169 = pbVar77[0x2b];
              bVar197 = pbVar77[0x2c];
              bVar124 = pbVar77[0x2d];
              bVar171 = pbVar77[0x2e];
              bVar198 = pbVar77[0x2f];
              bVar222 = pbVar74[1];
              bVar242 = pbVar74[2];
              bVar223 = pbVar74[4];
              bVar244 = pbVar74[5];
              bVar199 = pbVar74[6];
              bVar224 = pbVar74[7];
              bVar246 = pbVar74[8];
              bVar200 = pbVar74[9];
              bVar225 = pbVar74[10];
              bVar248 = pbVar74[0xb];
              bVar201 = pbVar74[0xc];
              bVar229 = pbVar74[0xd];
              bVar258 = pbVar74[0xe];
              bVar205 = pbVar74[0xf];
              bVar230 = pbVar74[0x10];
              bVar260 = pbVar74[0x11];
              bVar206 = pbVar74[0x12];
              bVar231 = pbVar74[0x13];
              bVar262 = pbVar74[0x14];
              bVar207 = pbVar74[0x15];
              bVar232 = pbVar74[0x16];
              bVar264 = pbVar74[0x17];
              bVar208 = pbVar74[0x18];
              bVar233 = pbVar74[0x19];
              bVar266 = pbVar74[0x1a];
              bVar209 = pbVar74[0x1b];
              bVar234 = pbVar74[0x1c];
              bVar268 = pbVar74[0x1d];
              bVar210 = pbVar74[0x1e];
              bVar235 = pbVar74[0x1f];
              bVar270 = pbVar74[0x20];
              bVar211 = pbVar74[0x21];
              bVar236 = pbVar74[0x22];
              bVar272 = pbVar74[0x23];
              bVar215 = pbVar74[0x24];
              bVar237 = pbVar74[0x25];
              bVar282 = pbVar74[0x26];
              bVar219 = pbVar74[0x27];
              bVar238 = pbVar74[0x28];
              bVar284 = pbVar74[0x29];
              bVar220 = pbVar74[0x2a];
              bVar239 = pbVar74[0x2b];
              bVar286 = pbVar74[0x2c];
              bVar221 = pbVar74[0x2d];
              bVar240 = pbVar74[0x2e];
              bVar288 = pbVar74[0x2f];
              bVar290 = pbVar77[0x30];
              bVar333 = pbVar77[0x31];
              bVar349 = pbVar77[0x32];
              bVar292 = pbVar77[0x33];
              bVar334 = pbVar77[0x34];
              bVar350 = pbVar77[0x35];
              bVar294 = pbVar77[0x36];
              bVar335 = pbVar77[0x37];
              bVar351 = pbVar77[0x38];
              bVar296 = pbVar77[0x39];
              bVar336 = pbVar77[0x3a];
              bVar352 = pbVar77[0x3b];
              bVar306 = pbVar77[0x3c];
              bVar337 = pbVar77[0x3d];
              bVar241 = pbVar77[0x3e];
              bVar308 = pbVar77[0x3f];
              bVar338 = pbVar77[0x40];
              bVar243 = pbVar77[0x41];
              bVar310 = pbVar77[0x42];
              bVar339 = pbVar77[0x43];
              bVar245 = pbVar77[0x44];
              bVar312 = pbVar77[0x45];
              bVar340 = pbVar77[0x46];
              bVar247 = pbVar77[0x47];
              bVar314 = pbVar77[0x48];
              bVar341 = pbVar77[0x49];
              bVar249 = pbVar77[0x4a];
              bVar316 = pbVar77[0x4b];
              bVar342 = pbVar77[0x4c];
              bVar250 = pbVar77[0x4d];
              bVar318 = pbVar77[0x4e];
              bVar343 = pbVar77[0x4f];
              bVar251 = pbVar77[0x50];
              bVar320 = pbVar77[0x51];
              bVar344 = pbVar77[0x52];
              bVar252 = pbVar77[0x53];
              bVar329 = pbVar77[0x54];
              bVar345 = pbVar77[0x55];
              bVar253 = pbVar77[0x56];
              bVar330 = pbVar77[0x57];
              bVar346 = pbVar77[0x58];
              bVar254 = pbVar77[0x59];
              bVar331 = pbVar77[0x5a];
              bVar347 = pbVar77[0x5b];
              bVar255 = pbVar77[0x5c];
              bVar332 = pbVar77[0x5d];
              bVar348 = pbVar77[0x5e];
              bVar256 = pbVar77[0x5f];
              bVar257 = pbVar74[0x30];
              bVar281 = pbVar74[0x31];
              bVar305 = pbVar74[0x32];
              bVar259 = pbVar74[0x33];
              bVar283 = pbVar74[0x34];
              bVar307 = pbVar74[0x35];
              bVar261 = pbVar74[0x36];
              bVar285 = pbVar74[0x37];
              bVar309 = pbVar74[0x38];
              bVar263 = pbVar74[0x39];
              bVar287 = pbVar74[0x3a];
              bVar311 = pbVar74[0x3b];
              bVar265 = pbVar74[0x3c];
              bVar289 = pbVar74[0x3d];
              bVar313 = pbVar74[0x3e];
              bVar267 = pbVar74[0x3f];
              bVar291 = pbVar74[0x40];
              bVar315 = pbVar74[0x41];
              bVar269 = pbVar74[0x42];
              bVar293 = pbVar74[0x43];
              bVar317 = pbVar74[0x44];
              bVar271 = pbVar74[0x45];
              bVar295 = pbVar74[0x46];
              bVar319 = pbVar74[0x47];
              bVar273 = pbVar74[0x48];
              bVar297 = pbVar74[0x49];
              bVar321 = pbVar74[0x4a];
              bVar274 = pbVar74[0x4b];
              bVar298 = pbVar74[0x4c];
              bVar322 = pbVar74[0x4d];
              bVar275 = pbVar74[0x4e];
              bVar299 = pbVar74[0x4f];
              bVar323 = pbVar74[0x50];
              bVar276 = pbVar74[0x51];
              bVar300 = pbVar74[0x52];
              bVar324 = pbVar74[0x53];
              bVar277 = pbVar74[0x54];
              bVar301 = pbVar74[0x55];
              bVar325 = pbVar74[0x56];
              bVar278 = pbVar74[0x57];
              bVar302 = pbVar74[0x58];
              bVar326 = pbVar74[0x59];
              bVar279 = pbVar74[0x5a];
              bVar303 = pbVar74[0x5b];
              bVar327 = pbVar74[0x5c];
              bVar280 = pbVar74[0x5d];
              bVar304 = pbVar74[0x5e];
              bVar328 = pbVar74[0x5f];
              puVar73 = (undefined1 *)(param_5 + uVar82);
              *puVar73 = (char)((ushort)((ushort)*pbVar74 + (ushort)pbVar74[3] +
                                        (ushort)*pbVar77 + (ushort)pbVar77[3]) >> 2);
              puVar73[1] = (char)((ushort)((ushort)bVar222 + (ushort)bVar223 +
                                          (ushort)bVar126 + (ushort)bVar128) >> 2);
              puVar73[2] = (char)((ushort)((ushort)bVar242 + (ushort)bVar244 +
                                          (ushort)bVar173 + (ushort)bVar175) >> 2);
              puVar73[3] = (char)((ushort)((ushort)bVar199 + (ushort)bVar200 +
                                          (ushort)bVar90 + (ushort)bVar92) >> 2);
              puVar73[4] = (char)((ushort)((ushort)bVar224 + (ushort)bVar225 +
                                          (ushort)bVar138 + (ushort)bVar140) >> 2);
              puVar73[5] = (char)((ushort)((ushort)bVar246 + (ushort)bVar248 +
                                          (ushort)bVar185 + (ushort)bVar186) >> 2);
              puVar73[6] = (char)((ushort)((ushort)bVar201 + (ushort)bVar205 +
                                          (ushort)bVar94 + (ushort)bVar96) >> 2);
              puVar73[7] = (char)((ushort)((ushort)bVar229 + (ushort)bVar230 +
                                          (ushort)bVar142 + (ushort)bVar144) >> 2);
              puVar73[8] = (char)((ushort)((ushort)bVar258 + (ushort)bVar260 +
                                          (ushort)bVar187 + (ushort)bVar188) >> 2);
              puVar73[9] = (char)((ushort)((ushort)bVar206 + (ushort)bVar207 +
                                          (ushort)bVar98 + (ushort)bVar100) >> 2);
              puVar73[10] = (char)((ushort)((ushort)bVar231 + (ushort)bVar232 +
                                           (ushort)bVar146 + (ushort)bVar148) >> 2);
              puVar73[0xb] = (char)((ushort)((ushort)bVar262 + (ushort)bVar264 +
                                            (ushort)bVar189 + (ushort)bVar190) >> 2);
              puVar73[0xc] = (char)((ushort)((ushort)bVar208 + (ushort)bVar209 +
                                            (ushort)bVar102 + (ushort)bVar104) >> 2);
              puVar73[0xd] = (char)((ushort)((ushort)bVar233 + (ushort)bVar234 +
                                            (ushort)bVar150 + (ushort)bVar152) >> 2);
              puVar73[0xe] = (char)((ushort)((ushort)bVar266 + (ushort)bVar268 +
                                            (ushort)bVar191 + (ushort)bVar192) >> 2);
              puVar73[0xf] = (char)((ushort)((ushort)bVar210 + (ushort)bVar211 +
                                            (ushort)bVar114 + (ushort)bVar116) >> 2);
              puVar73[0x10] =
                   (char)((ushort)((ushort)bVar235 + (ushort)bVar236 +
                                  (ushort)bVar161 + (ushort)bVar163) >> 2);
              puVar73[0x11] =
                   (char)((ushort)((ushort)bVar270 + (ushort)bVar272 +
                                  (ushort)bVar193 + (ushort)bVar194) >> 2);
              puVar73[0x12] =
                   (char)((ushort)((ushort)bVar215 + (ushort)bVar219 +
                                  (ushort)bVar118 + (ushort)bVar120) >> 2);
              puVar73[0x13] =
                   (char)((ushort)((ushort)bVar237 + (ushort)bVar238 +
                                  (ushort)bVar165 + (ushort)bVar167) >> 2);
              puVar73[0x14] =
                   (char)((ushort)((ushort)bVar282 + (ushort)bVar284 +
                                  (ushort)bVar195 + (ushort)bVar196) >> 2);
              puVar73[0x15] =
                   (char)((ushort)((ushort)bVar220 + (ushort)bVar221 +
                                  (ushort)bVar122 + (ushort)bVar124) >> 2);
              puVar73[0x16] =
                   (char)((ushort)((ushort)bVar239 + (ushort)bVar240 +
                                  (ushort)bVar169 + (ushort)bVar171) >> 2);
              puVar73[0x17] =
                   (char)((ushort)((ushort)bVar286 + (ushort)bVar288 +
                                  (ushort)bVar197 + (ushort)bVar198) >> 2);
              puVar73[0x18] =
                   (char)((ushort)((ushort)bVar257 + (ushort)bVar259 +
                                  (ushort)bVar290 + (ushort)bVar292) >> 2);
              puVar73[0x19] =
                   (char)((ushort)((ushort)bVar281 + (ushort)bVar283 +
                                  (ushort)bVar333 + (ushort)bVar334) >> 2);
              puVar73[0x1a] =
                   (char)((ushort)((ushort)bVar305 + (ushort)bVar307 +
                                  (ushort)bVar349 + (ushort)bVar350) >> 2);
              puVar73[0x1b] =
                   (char)((ushort)((ushort)bVar261 + (ushort)bVar263 +
                                  (ushort)bVar294 + (ushort)bVar296) >> 2);
              puVar73[0x1c] =
                   (char)((ushort)((ushort)bVar285 + (ushort)bVar287 +
                                  (ushort)bVar335 + (ushort)bVar336) >> 2);
              puVar73[0x1d] =
                   (char)((ushort)((ushort)bVar309 + (ushort)bVar311 +
                                  (ushort)bVar351 + (ushort)bVar352) >> 2);
              puVar73[0x1e] =
                   (char)((ushort)((ushort)bVar265 + (ushort)bVar267 +
                                  (ushort)bVar306 + (ushort)bVar308) >> 2);
              puVar73[0x1f] =
                   (char)((ushort)((ushort)bVar289 + (ushort)bVar291 +
                                  (ushort)bVar337 + (ushort)bVar338) >> 2);
              puVar73[0x20] =
                   (char)((ushort)((ushort)bVar313 + (ushort)bVar315 +
                                  (ushort)bVar241 + (ushort)bVar243) >> 2);
              puVar73[0x21] =
                   (char)((ushort)((ushort)bVar269 + (ushort)bVar271 +
                                  (ushort)bVar310 + (ushort)bVar312) >> 2);
              puVar73[0x22] =
                   (char)((ushort)((ushort)bVar293 + (ushort)bVar295 +
                                  (ushort)bVar339 + (ushort)bVar340) >> 2);
              puVar73[0x23] =
                   (char)((ushort)((ushort)bVar317 + (ushort)bVar319 +
                                  (ushort)bVar245 + (ushort)bVar247) >> 2);
              puVar73[0x24] =
                   (char)((ushort)((ushort)bVar273 + (ushort)bVar274 +
                                  (ushort)bVar314 + (ushort)bVar316) >> 2);
              puVar73[0x25] =
                   (char)((ushort)((ushort)bVar297 + (ushort)bVar298 +
                                  (ushort)bVar341 + (ushort)bVar342) >> 2);
              puVar73[0x26] =
                   (char)((ushort)((ushort)bVar321 + (ushort)bVar322 +
                                  (ushort)bVar249 + (ushort)bVar250) >> 2);
              puVar73[0x27] =
                   (char)((ushort)((ushort)bVar275 + (ushort)bVar276 +
                                  (ushort)bVar318 + (ushort)bVar320) >> 2);
              puVar73[0x28] =
                   (char)((ushort)((ushort)bVar299 + (ushort)bVar300 +
                                  (ushort)bVar343 + (ushort)bVar344) >> 2);
              puVar73[0x29] =
                   (char)((ushort)((ushort)bVar323 + (ushort)bVar324 +
                                  (ushort)bVar251 + (ushort)bVar252) >> 2);
              puVar73[0x2a] =
                   (char)((ushort)((ushort)bVar277 + (ushort)bVar278 +
                                  (ushort)bVar329 + (ushort)bVar330) >> 2);
              puVar73[0x2b] =
                   (char)((ushort)((ushort)bVar301 + (ushort)bVar302 +
                                  (ushort)bVar345 + (ushort)bVar346) >> 2);
              puVar73[0x2c] =
                   (char)((ushort)((ushort)bVar325 + (ushort)bVar326 +
                                  (ushort)bVar253 + (ushort)bVar254) >> 2);
              puVar73[0x2d] =
                   (char)((ushort)((ushort)bVar279 + (ushort)bVar280 +
                                  (ushort)bVar331 + (ushort)bVar332) >> 2);
              puVar73[0x2e] =
                   (char)((ushort)((ushort)bVar303 + (ushort)bVar304 +
                                  (ushort)bVar347 + (ushort)bVar348) >> 2);
              puVar73[0x2f] =
                   (char)((ushort)((ushort)bVar327 + (ushort)bVar328 +
                                  (ushort)bVar255 + (ushort)bVar256) >> 2);
              uVar82 = uVar82 + 0x30;
              lVar75 = lVar75 + 0x60;
            } while (uVar82 < lVar72 - 0x2dU);
          }
          if (6 < uVar87) {
            for (; uVar82 < lVar72 - 0x15U; uVar82 = uVar82 + 0x18) {
              pbVar77 = (byte *)(param_3 + lVar75);
              Hint_Prefetch(pbVar77 + 0x140,0,0,0);
              pbVar74 = (byte *)(lVar84 + lVar75);
              Hint_Prefetch(pbVar74 + 0x140,0,0,0);
              bVar126 = pbVar77[1];
              bVar173 = pbVar77[2];
              bVar128 = pbVar77[4];
              bVar175 = pbVar77[5];
              bVar90 = pbVar77[6];
              bVar138 = pbVar77[7];
              bVar185 = pbVar77[8];
              bVar92 = pbVar77[9];
              bVar140 = pbVar77[10];
              bVar186 = pbVar77[0xb];
              bVar94 = pbVar77[0xc];
              bVar142 = pbVar77[0xd];
              bVar187 = pbVar77[0xe];
              bVar96 = pbVar77[0xf];
              bVar144 = pbVar77[0x10];
              bVar188 = pbVar77[0x11];
              bVar98 = pbVar77[0x12];
              bVar146 = pbVar77[0x13];
              bVar189 = pbVar77[0x14];
              bVar100 = pbVar77[0x15];
              bVar148 = pbVar77[0x16];
              bVar190 = pbVar77[0x17];
              bVar102 = pbVar77[0x18];
              bVar150 = pbVar77[0x19];
              bVar191 = pbVar77[0x1a];
              bVar104 = pbVar77[0x1b];
              bVar152 = pbVar77[0x1c];
              bVar192 = pbVar77[0x1d];
              bVar114 = pbVar77[0x1e];
              bVar161 = pbVar77[0x1f];
              bVar193 = pbVar77[0x20];
              bVar116 = pbVar77[0x21];
              bVar163 = pbVar77[0x22];
              bVar194 = pbVar77[0x23];
              bVar118 = pbVar77[0x24];
              bVar165 = pbVar77[0x25];
              bVar195 = pbVar77[0x26];
              bVar120 = pbVar77[0x27];
              bVar167 = pbVar77[0x28];
              bVar196 = pbVar77[0x29];
              bVar122 = pbVar77[0x2a];
              bVar169 = pbVar77[0x2b];
              bVar197 = pbVar77[0x2c];
              bVar124 = pbVar77[0x2d];
              bVar171 = pbVar77[0x2e];
              bVar198 = pbVar77[0x2f];
              bVar222 = pbVar74[1];
              bVar242 = pbVar74[2];
              bVar223 = pbVar74[4];
              bVar244 = pbVar74[5];
              bVar199 = pbVar74[6];
              bVar224 = pbVar74[7];
              bVar246 = pbVar74[8];
              bVar200 = pbVar74[9];
              bVar225 = pbVar74[10];
              bVar248 = pbVar74[0xb];
              bVar201 = pbVar74[0xc];
              bVar229 = pbVar74[0xd];
              bVar258 = pbVar74[0xe];
              bVar205 = pbVar74[0xf];
              bVar230 = pbVar74[0x10];
              bVar260 = pbVar74[0x11];
              bVar206 = pbVar74[0x12];
              bVar231 = pbVar74[0x13];
              bVar262 = pbVar74[0x14];
              bVar207 = pbVar74[0x15];
              bVar232 = pbVar74[0x16];
              bVar264 = pbVar74[0x17];
              bVar208 = pbVar74[0x18];
              bVar233 = pbVar74[0x19];
              bVar266 = pbVar74[0x1a];
              bVar209 = pbVar74[0x1b];
              bVar234 = pbVar74[0x1c];
              bVar268 = pbVar74[0x1d];
              bVar210 = pbVar74[0x1e];
              bVar235 = pbVar74[0x1f];
              bVar270 = pbVar74[0x20];
              bVar211 = pbVar74[0x21];
              bVar236 = pbVar74[0x22];
              bVar272 = pbVar74[0x23];
              bVar215 = pbVar74[0x24];
              bVar237 = pbVar74[0x25];
              bVar282 = pbVar74[0x26];
              bVar219 = pbVar74[0x27];
              bVar238 = pbVar74[0x28];
              bVar284 = pbVar74[0x29];
              bVar220 = pbVar74[0x2a];
              bVar239 = pbVar74[0x2b];
              bVar286 = pbVar74[0x2c];
              bVar221 = pbVar74[0x2d];
              bVar240 = pbVar74[0x2e];
              bVar288 = pbVar74[0x2f];
              puVar73 = (undefined1 *)(param_5 + uVar82);
              *puVar73 = (char)((ushort)((ushort)*pbVar74 + (ushort)pbVar74[3] +
                                        (ushort)*pbVar77 + (ushort)pbVar77[3]) >> 2);
              puVar73[1] = (char)((ushort)((ushort)bVar222 + (ushort)bVar223 +
                                          (ushort)bVar126 + (ushort)bVar128) >> 2);
              puVar73[2] = (char)((ushort)((ushort)bVar242 + (ushort)bVar244 +
                                          (ushort)bVar173 + (ushort)bVar175) >> 2);
              puVar73[3] = (char)((ushort)((ushort)bVar199 + (ushort)bVar200 +
                                          (ushort)bVar90 + (ushort)bVar92) >> 2);
              puVar73[4] = (char)((ushort)((ushort)bVar224 + (ushort)bVar225 +
                                          (ushort)bVar138 + (ushort)bVar140) >> 2);
              puVar73[5] = (char)((ushort)((ushort)bVar246 + (ushort)bVar248 +
                                          (ushort)bVar185 + (ushort)bVar186) >> 2);
              puVar73[6] = (char)((ushort)((ushort)bVar201 + (ushort)bVar205 +
                                          (ushort)bVar94 + (ushort)bVar96) >> 2);
              puVar73[7] = (char)((ushort)((ushort)bVar229 + (ushort)bVar230 +
                                          (ushort)bVar142 + (ushort)bVar144) >> 2);
              puVar73[8] = (char)((ushort)((ushort)bVar258 + (ushort)bVar260 +
                                          (ushort)bVar187 + (ushort)bVar188) >> 2);
              puVar73[9] = (char)((ushort)((ushort)bVar206 + (ushort)bVar207 +
                                          (ushort)bVar98 + (ushort)bVar100) >> 2);
              puVar73[10] = (char)((ushort)((ushort)bVar231 + (ushort)bVar232 +
                                           (ushort)bVar146 + (ushort)bVar148) >> 2);
              puVar73[0xb] = (char)((ushort)((ushort)bVar262 + (ushort)bVar264 +
                                            (ushort)bVar189 + (ushort)bVar190) >> 2);
              puVar73[0xc] = (char)((ushort)((ushort)bVar208 + (ushort)bVar209 +
                                            (ushort)bVar102 + (ushort)bVar104) >> 2);
              puVar73[0xd] = (char)((ushort)((ushort)bVar233 + (ushort)bVar234 +
                                            (ushort)bVar150 + (ushort)bVar152) >> 2);
              puVar73[0xe] = (char)((ushort)((ushort)bVar266 + (ushort)bVar268 +
                                            (ushort)bVar191 + (ushort)bVar192) >> 2);
              puVar73[0xf] = (char)((ushort)((ushort)bVar210 + (ushort)bVar211 +
                                            (ushort)bVar114 + (ushort)bVar116) >> 2);
              puVar73[0x10] =
                   (char)((ushort)((ushort)bVar235 + (ushort)bVar236 +
                                  (ushort)bVar161 + (ushort)bVar163) >> 2);
              puVar73[0x11] =
                   (char)((ushort)((ushort)bVar270 + (ushort)bVar272 +
                                  (ushort)bVar193 + (ushort)bVar194) >> 2);
              puVar73[0x12] =
                   (char)((ushort)((ushort)bVar215 + (ushort)bVar219 +
                                  (ushort)bVar118 + (ushort)bVar120) >> 2);
              puVar73[0x13] =
                   (char)((ushort)((ushort)bVar237 + (ushort)bVar238 +
                                  (ushort)bVar165 + (ushort)bVar167) >> 2);
              puVar73[0x14] =
                   (char)((ushort)((ushort)bVar282 + (ushort)bVar284 +
                                  (ushort)bVar195 + (ushort)bVar196) >> 2);
              puVar73[0x15] =
                   (char)((ushort)((ushort)bVar220 + (ushort)bVar221 +
                                  (ushort)bVar122 + (ushort)bVar124) >> 2);
              puVar73[0x16] =
                   (char)((ushort)((ushort)bVar239 + (ushort)bVar240 +
                                  (ushort)bVar169 + (ushort)bVar171) >> 2);
              puVar73[0x17] =
                   (char)((ushort)((ushort)bVar286 + (ushort)bVar288 +
                                  (ushort)bVar197 + (ushort)bVar198) >> 2);
              lVar75 = lVar75 + 0x30;
            }
          }
          uVar86 = *param_2;
          if (uVar82 < uVar86 * 3) {
            pbVar77 = (byte *)(lVar83 + lVar75);
            pbVar74 = (byte *)(param_4 + lVar75);
            do {
              puVar73 = (undefined1 *)(param_5 + uVar82);
              *puVar73 = (char)((uint)pbVar77[1] + (uint)pbVar77[-2] +
                                (uint)pbVar74[-2] + (uint)pbVar74[1] >> 2);
              puVar73[1] = (char)((uint)pbVar77[2] + (uint)pbVar77[-1] +
                                  (uint)pbVar74[-1] + (uint)pbVar74[2] >> 2);
              puVar73[2] = (char)((uint)pbVar77[3] + (uint)*pbVar77 +
                                  (uint)*pbVar74 + (uint)pbVar74[3] >> 2);
              uVar82 = uVar82 + 3;
              pbVar77 = pbVar77 + 6;
              pbVar74 = pbVar74 + 6;
            } while (uVar82 < uVar86 * 3);
          }
          uVar81 = uVar81 + 1;
          param_5 = param_5 + param_6;
          lVar84 = lVar84 + lVar76;
          param_3 = param_3 + lVar76;
          lVar83 = lVar83 + lVar76;
          param_4 = param_4 + lVar76;
        } while (uVar81 < param_2[1]);
      }
    }
    else {
      uVar81 = *param_2;
      lVar83 = uVar81 * 3;
      if ((fVar12 == 0.5) && (fVar22 == 0.5)) {
        uVar87 = param_2[1];
        if (uVar87 != 0) {
          uVar82 = 0;
          lVar84 = param_5 + 0x30;
          uVar86 = 1;
          lVar72 = param_5;
          do {
            lVar75 = param_4 * (uVar82 >> 1);
            lVar76 = param_3 + lVar75;
            uVar87 = uVar87 - 1;
            if (uVar81 < 0x1f || lVar83 == 0x5d) {
              uVar88 = 0;
              lVar78 = 0;
            }
            else {
              lVar78 = 0;
              uVar88 = 0;
              uVar80 = uVar86;
              if (uVar87 <= uVar86) {
                uVar80 = uVar87;
              }
              do {
                puVar73 = (undefined1 *)(lVar76 + lVar78);
                Hint_Prefetch(puVar73 + 0x140,0,0,0);
                uVar89 = *puVar73;
                uVar113 = puVar73[1];
                uVar137 = puVar73[2];
                uVar91 = puVar73[3];
                uVar115 = puVar73[4];
                uVar139 = puVar73[5];
                uVar93 = puVar73[6];
                uVar117 = puVar73[7];
                uVar141 = puVar73[8];
                uVar95 = puVar73[9];
                uVar119 = puVar73[10];
                uVar143 = puVar73[0xb];
                uVar97 = puVar73[0xc];
                uVar121 = puVar73[0xd];
                uVar145 = puVar73[0xe];
                uVar99 = puVar73[0xf];
                uVar123 = puVar73[0x10];
                uVar147 = puVar73[0x11];
                uVar101 = puVar73[0x12];
                uVar125 = puVar73[0x13];
                uVar149 = puVar73[0x14];
                uVar103 = puVar73[0x15];
                uVar127 = puVar73[0x16];
                uVar151 = puVar73[0x17];
                uVar105 = puVar73[0x18];
                uVar129 = puVar73[0x19];
                uVar153 = puVar73[0x1a];
                uVar106 = puVar73[0x1b];
                uVar130 = puVar73[0x1c];
                uVar154 = puVar73[0x1d];
                uVar107 = puVar73[0x1e];
                uVar131 = puVar73[0x1f];
                uVar155 = puVar73[0x20];
                uVar108 = puVar73[0x21];
                uVar132 = puVar73[0x22];
                uVar156 = puVar73[0x23];
                uVar109 = puVar73[0x24];
                uVar133 = puVar73[0x25];
                uVar157 = puVar73[0x26];
                uVar110 = puVar73[0x27];
                uVar134 = puVar73[0x28];
                uVar158 = puVar73[0x29];
                uVar111 = puVar73[0x2a];
                uVar135 = puVar73[0x2b];
                uVar159 = puVar73[0x2c];
                uVar112 = puVar73[0x2d];
                uVar136 = puVar73[0x2e];
                uVar160 = puVar73[0x2f];
                puVar73 = (undefined1 *)(lVar84 + uVar88);
                puVar73[-0x30] = uVar89;
                puVar73[-0x2f] = uVar113;
                puVar73[-0x2e] = uVar137;
                puVar73[-0x2d] = uVar89;
                puVar73[-0x2c] = uVar113;
                puVar73[-0x2b] = uVar137;
                puVar73[-0x2a] = uVar91;
                puVar73[-0x29] = uVar115;
                puVar73[-0x28] = uVar139;
                puVar73[-0x27] = uVar91;
                puVar73[-0x26] = uVar115;
                puVar73[-0x25] = uVar139;
                puVar73[-0x24] = uVar93;
                puVar73[-0x23] = uVar117;
                puVar73[-0x22] = uVar141;
                puVar73[-0x21] = uVar93;
                puVar73[-0x20] = uVar117;
                puVar73[-0x1f] = uVar141;
                puVar73[-0x1e] = uVar95;
                puVar73[-0x1d] = uVar119;
                puVar73[-0x1c] = uVar143;
                puVar73[-0x1b] = uVar95;
                puVar73[-0x1a] = uVar119;
                puVar73[-0x19] = uVar143;
                puVar73[-0x18] = uVar97;
                puVar73[-0x17] = uVar121;
                puVar73[-0x16] = uVar145;
                puVar73[-0x15] = uVar97;
                puVar73[-0x14] = uVar121;
                puVar73[-0x13] = uVar145;
                puVar73[-0x12] = uVar99;
                puVar73[-0x11] = uVar123;
                puVar73[-0x10] = uVar147;
                puVar73[-0xf] = uVar99;
                puVar73[-0xe] = uVar123;
                puVar73[-0xd] = uVar147;
                puVar73[-0xc] = uVar101;
                puVar73[-0xb] = uVar125;
                puVar73[-10] = uVar149;
                puVar73[-9] = uVar101;
                puVar73[-8] = uVar125;
                puVar73[-7] = uVar149;
                puVar73[-6] = uVar103;
                puVar73[-5] = uVar127;
                puVar73[-4] = uVar151;
                puVar73[-3] = uVar103;
                puVar73[-2] = uVar127;
                puVar73[-1] = uVar151;
                puVar6 = (undefined1 *)(param_5 + param_6 * uVar80 + uVar88);
                *puVar6 = uVar89;
                puVar6[1] = uVar113;
                puVar6[2] = uVar137;
                puVar6[3] = uVar89;
                puVar6[4] = uVar113;
                puVar6[5] = uVar137;
                puVar6[6] = uVar91;
                puVar6[7] = uVar115;
                puVar6[8] = uVar139;
                puVar6[9] = uVar91;
                puVar6[10] = uVar115;
                puVar6[0xb] = uVar139;
                puVar6[0xc] = uVar93;
                puVar6[0xd] = uVar117;
                puVar6[0xe] = uVar141;
                puVar6[0xf] = uVar93;
                puVar6[0x10] = uVar117;
                puVar6[0x11] = uVar141;
                puVar6[0x12] = uVar95;
                puVar6[0x13] = uVar119;
                puVar6[0x14] = uVar143;
                puVar6[0x15] = uVar95;
                puVar6[0x16] = uVar119;
                puVar6[0x17] = uVar143;
                puVar6[0x18] = uVar97;
                puVar6[0x19] = uVar121;
                puVar6[0x1a] = uVar145;
                puVar6[0x1b] = uVar97;
                puVar6[0x1c] = uVar121;
                puVar6[0x1d] = uVar145;
                puVar6[0x1e] = uVar99;
                puVar6[0x1f] = uVar123;
                puVar6[0x20] = uVar147;
                puVar6[0x21] = uVar99;
                puVar6[0x22] = uVar123;
                puVar6[0x23] = uVar147;
                puVar6[0x24] = uVar101;
                puVar6[0x25] = uVar125;
                puVar6[0x26] = uVar149;
                puVar6[0x27] = uVar101;
                puVar6[0x28] = uVar125;
                puVar6[0x29] = uVar149;
                puVar6[0x2a] = uVar103;
                puVar6[0x2b] = uVar127;
                puVar6[0x2c] = uVar151;
                puVar6[0x2d] = uVar103;
                puVar6[0x2e] = uVar127;
                puVar6[0x2f] = uVar151;
                *puVar73 = uVar105;
                puVar73[1] = uVar129;
                puVar73[2] = uVar153;
                puVar73[3] = uVar105;
                puVar73[4] = uVar129;
                puVar73[5] = uVar153;
                puVar73[6] = uVar106;
                puVar73[7] = uVar130;
                puVar73[8] = uVar154;
                puVar73[9] = uVar106;
                puVar73[10] = uVar130;
                puVar73[0xb] = uVar154;
                puVar73[0xc] = uVar107;
                puVar73[0xd] = uVar131;
                puVar73[0xe] = uVar155;
                puVar73[0xf] = uVar107;
                puVar73[0x10] = uVar131;
                puVar73[0x11] = uVar155;
                puVar73[0x12] = uVar108;
                puVar73[0x13] = uVar132;
                puVar73[0x14] = uVar156;
                puVar73[0x15] = uVar108;
                puVar73[0x16] = uVar132;
                puVar73[0x17] = uVar156;
                puVar73[0x18] = uVar109;
                puVar73[0x19] = uVar133;
                puVar73[0x1a] = uVar157;
                puVar73[0x1b] = uVar109;
                puVar73[0x1c] = uVar133;
                puVar73[0x1d] = uVar157;
                puVar73[0x1e] = uVar110;
                puVar73[0x1f] = uVar134;
                puVar73[0x20] = uVar158;
                puVar73[0x21] = uVar110;
                puVar73[0x22] = uVar134;
                puVar73[0x23] = uVar158;
                puVar73[0x24] = uVar111;
                puVar73[0x25] = uVar135;
                puVar73[0x26] = uVar159;
                puVar73[0x27] = uVar111;
                puVar73[0x28] = uVar135;
                puVar73[0x29] = uVar159;
                puVar73[0x2a] = uVar112;
                puVar73[0x2b] = uVar136;
                puVar73[0x2c] = uVar160;
                puVar73[0x2d] = uVar112;
                puVar73[0x2e] = uVar136;
                puVar73[0x2f] = uVar160;
                puVar6[0x30] = uVar105;
                puVar6[0x31] = uVar129;
                puVar6[0x32] = uVar153;
                puVar6[0x33] = uVar105;
                puVar6[0x34] = uVar129;
                puVar6[0x35] = uVar153;
                puVar6[0x36] = uVar106;
                puVar6[0x37] = uVar130;
                puVar6[0x38] = uVar154;
                puVar6[0x39] = uVar106;
                puVar6[0x3a] = uVar130;
                puVar6[0x3b] = uVar154;
                puVar6[0x3c] = uVar107;
                puVar6[0x3d] = uVar131;
                puVar6[0x3e] = uVar155;
                puVar6[0x3f] = uVar107;
                puVar6[0x40] = uVar131;
                puVar6[0x41] = uVar155;
                puVar6[0x42] = uVar108;
                puVar6[0x43] = uVar132;
                puVar6[0x44] = uVar156;
                puVar6[0x45] = uVar108;
                puVar6[0x46] = uVar132;
                puVar6[0x47] = uVar156;
                puVar6[0x48] = uVar109;
                puVar6[0x49] = uVar133;
                puVar6[0x4a] = uVar157;
                puVar6[0x4b] = uVar109;
                puVar6[0x4c] = uVar133;
                puVar6[0x4d] = uVar157;
                puVar6[0x4e] = uVar110;
                puVar6[0x4f] = uVar134;
                puVar6[0x50] = uVar158;
                puVar6[0x51] = uVar110;
                puVar6[0x52] = uVar134;
                puVar6[0x53] = uVar158;
                puVar6[0x54] = uVar111;
                puVar6[0x55] = uVar135;
                puVar6[0x56] = uVar159;
                puVar6[0x57] = uVar111;
                puVar6[0x58] = uVar135;
                puVar6[0x59] = uVar159;
                puVar6[0x5a] = uVar112;
                puVar6[0x5b] = uVar136;
                puVar6[0x5c] = uVar160;
                puVar6[0x5d] = uVar112;
                puVar6[0x5e] = uVar136;
                puVar6[0x5f] = uVar160;
                uVar88 = uVar88 + 0x60;
                lVar78 = lVar78 + 0x30;
              } while (uVar88 < lVar83 - 0x5dU);
            }
            if ((0xe < uVar81) && (uVar88 < lVar83 - 0x2dU)) {
              uVar80 = uVar86;
              if (uVar87 <= uVar86) {
                uVar80 = uVar87;
              }
              do {
                puVar73 = (undefined1 *)(lVar76 + lVar78);
                Hint_Prefetch(puVar73 + 0x140,0,0,0);
                uVar89 = *puVar73;
                uVar105 = puVar73[1];
                uVar113 = puVar73[2];
                uVar91 = puVar73[3];
                uVar106 = puVar73[4];
                uVar115 = puVar73[5];
                uVar93 = puVar73[6];
                uVar107 = puVar73[7];
                uVar117 = puVar73[8];
                uVar95 = puVar73[9];
                uVar108 = puVar73[10];
                uVar119 = puVar73[0xb];
                uVar97 = puVar73[0xc];
                uVar109 = puVar73[0xd];
                uVar121 = puVar73[0xe];
                uVar99 = puVar73[0xf];
                uVar110 = puVar73[0x10];
                uVar123 = puVar73[0x11];
                uVar101 = puVar73[0x12];
                uVar111 = puVar73[0x13];
                uVar125 = puVar73[0x14];
                uVar103 = puVar73[0x15];
                uVar112 = puVar73[0x16];
                uVar127 = puVar73[0x17];
                puVar73 = (undefined1 *)(lVar72 + uVar88);
                *puVar73 = uVar89;
                puVar73[1] = uVar105;
                puVar73[2] = uVar113;
                puVar73[3] = uVar89;
                puVar73[4] = uVar105;
                puVar73[5] = uVar113;
                puVar73[6] = uVar91;
                puVar73[7] = uVar106;
                puVar73[8] = uVar115;
                puVar73[9] = uVar91;
                puVar73[10] = uVar106;
                puVar73[0xb] = uVar115;
                puVar73[0xc] = uVar93;
                puVar73[0xd] = uVar107;
                puVar73[0xe] = uVar117;
                puVar73[0xf] = uVar93;
                puVar73[0x10] = uVar107;
                puVar73[0x11] = uVar117;
                puVar73[0x12] = uVar95;
                puVar73[0x13] = uVar108;
                puVar73[0x14] = uVar119;
                puVar73[0x15] = uVar95;
                puVar73[0x16] = uVar108;
                puVar73[0x17] = uVar119;
                puVar73[0x18] = uVar97;
                puVar73[0x19] = uVar109;
                puVar73[0x1a] = uVar121;
                puVar73[0x1b] = uVar97;
                puVar73[0x1c] = uVar109;
                puVar73[0x1d] = uVar121;
                puVar73[0x1e] = uVar99;
                puVar73[0x1f] = uVar110;
                puVar73[0x20] = uVar123;
                puVar73[0x21] = uVar99;
                puVar73[0x22] = uVar110;
                puVar73[0x23] = uVar123;
                puVar73[0x24] = uVar101;
                puVar73[0x25] = uVar111;
                puVar73[0x26] = uVar125;
                puVar73[0x27] = uVar101;
                puVar73[0x28] = uVar111;
                puVar73[0x29] = uVar125;
                puVar73[0x2a] = uVar103;
                puVar73[0x2b] = uVar112;
                puVar73[0x2c] = uVar127;
                puVar73[0x2d] = uVar103;
                puVar73[0x2e] = uVar112;
                puVar73[0x2f] = uVar127;
                puVar73 = (undefined1 *)(param_5 + param_6 * uVar80 + uVar88);
                *puVar73 = uVar89;
                puVar73[1] = uVar105;
                puVar73[2] = uVar113;
                puVar73[3] = uVar89;
                puVar73[4] = uVar105;
                puVar73[5] = uVar113;
                puVar73[6] = uVar91;
                puVar73[7] = uVar106;
                puVar73[8] = uVar115;
                puVar73[9] = uVar91;
                puVar73[10] = uVar106;
                puVar73[0xb] = uVar115;
                puVar73[0xc] = uVar93;
                puVar73[0xd] = uVar107;
                puVar73[0xe] = uVar117;
                puVar73[0xf] = uVar93;
                puVar73[0x10] = uVar107;
                puVar73[0x11] = uVar117;
                puVar73[0x12] = uVar95;
                puVar73[0x13] = uVar108;
                puVar73[0x14] = uVar119;
                puVar73[0x15] = uVar95;
                puVar73[0x16] = uVar108;
                puVar73[0x17] = uVar119;
                puVar73[0x18] = uVar97;
                puVar73[0x19] = uVar109;
                puVar73[0x1a] = uVar121;
                puVar73[0x1b] = uVar97;
                puVar73[0x1c] = uVar109;
                puVar73[0x1d] = uVar121;
                puVar73[0x1e] = uVar99;
                puVar73[0x1f] = uVar110;
                puVar73[0x20] = uVar123;
                puVar73[0x21] = uVar99;
                puVar73[0x22] = uVar110;
                puVar73[0x23] = uVar123;
                puVar73[0x24] = uVar101;
                puVar73[0x25] = uVar111;
                puVar73[0x26] = uVar125;
                puVar73[0x27] = uVar101;
                puVar73[0x28] = uVar111;
                puVar73[0x29] = uVar125;
                puVar73[0x2a] = uVar103;
                puVar73[0x2b] = uVar112;
                puVar73[0x2c] = uVar127;
                puVar73[0x2d] = uVar103;
                puVar73[0x2e] = uVar112;
                puVar73[0x2f] = uVar127;
                uVar88 = uVar88 + 0x30;
                lVar78 = lVar78 + 0x18;
              } while (uVar88 < lVar83 - 0x2dU);
            }
            uVar80 = *param_2;
            if (uVar88 < uVar80 * 3) {
              uVar10 = uVar86;
              if (uVar87 <= uVar86) {
                uVar10 = uVar87;
              }
              puVar73 = (undefined1 *)(param_3 + 1 + lVar78 + lVar75);
              do {
                uVar89 = puVar73[-1];
                puVar6 = (undefined1 *)(lVar72 + uVar88);
                puVar6[3] = uVar89;
                *puVar6 = uVar89;
                puVar7 = (undefined1 *)(param_5 + param_6 * uVar10 + uVar88);
                puVar7[3] = uVar89;
                *puVar7 = uVar89;
                uVar89 = *puVar73;
                puVar6[4] = uVar89;
                puVar6[1] = uVar89;
                puVar7[4] = uVar89;
                puVar7[1] = uVar89;
                uVar89 = puVar73[1];
                puVar6[5] = uVar89;
                puVar6[2] = uVar89;
                puVar7[5] = uVar89;
                puVar7[2] = uVar89;
                uVar88 = uVar88 + 6;
                puVar73 = puVar73 + 3;
              } while (uVar88 < uVar80 * 3);
            }
            uVar82 = uVar82 + 2;
            uVar87 = param_2[1];
            lVar84 = lVar84 + param_6 * 2;
            uVar86 = uVar86 + 2;
            lVar72 = lVar72 + param_6 * 2;
          } while (uVar82 < uVar87);
        }
      }
      else if (param_2[1] != 0) {
        lVar78 = 0;
        uVar87 = 0;
        lVar72 = param_3 + param_4 * 3;
        lVar85 = param_4 * 4;
        lVar76 = param_3 + param_4;
        lVar84 = param_3 + 5;
        lVar75 = param_3 + param_4 * 2;
        do {
          if (uVar81 < 7 || lVar83 == 0x15) {
            uVar82 = 0;
            lVar79 = 0;
          }
          else {
            lVar79 = 0;
            uVar82 = 0;
            do {
              pbVar77 = (byte *)(param_3 + lVar79);
              pbVar74 = (byte *)(lVar76 + lVar79);
              Hint_Prefetch(pbVar77 + 0x140,0,0,0);
              Hint_Prefetch(pbVar74 + 0x140,0,0,0);
              pbVar8 = (byte *)(lVar75 + lVar79);
              Hint_Prefetch(pbVar8 + 0x140,0,0,0);
              pbVar9 = (byte *)(lVar72 + lVar79);
              Hint_Prefetch(pbVar9 + 0x140,0,0,0);
              bVar189 = pbVar77[1];
              bVar190 = pbVar77[4];
              bVar191 = pbVar77[7];
              bVar192 = pbVar77[10];
              bVar161 = pbVar77[0xc];
              bVar193 = pbVar77[0xd];
              bVar163 = pbVar77[0xf];
              bVar194 = pbVar77[0x10];
              bVar165 = pbVar77[0x12];
              bVar195 = pbVar77[0x13];
              bVar167 = pbVar77[0x15];
              bVar196 = pbVar77[0x16];
              bVar169 = pbVar77[0x18];
              bVar197 = pbVar77[0x19];
              bVar171 = pbVar77[0x1b];
              bVar198 = pbVar77[0x1c];
              bVar173 = pbVar77[0x1e];
              bVar199 = pbVar77[0x1f];
              bVar175 = pbVar77[0x21];
              bVar200 = pbVar77[0x22];
              bVar185 = pbVar77[0x24];
              bVar201 = pbVar77[0x25];
              bVar186 = pbVar77[0x27];
              bVar205 = pbVar77[0x28];
              bVar187 = pbVar77[0x2a];
              bVar206 = pbVar77[0x2b];
              bVar188 = pbVar77[0x2d];
              bVar207 = pbVar77[0x2e];
              bVar90 = pbVar77[0x30];
              bVar92 = pbVar77[0x33];
              bVar94 = pbVar77[0x36];
              bVar96 = pbVar77[0x39];
              bVar98 = pbVar77[0x3c];
              bVar100 = pbVar77[0x3f];
              bVar102 = pbVar77[0x42];
              bVar104 = pbVar77[0x45];
              bVar114 = pbVar77[0x48];
              bVar138 = pbVar77[0x49];
              bVar116 = pbVar77[0x4b];
              bVar140 = pbVar77[0x4c];
              bVar118 = pbVar77[0x4e];
              bVar142 = pbVar77[0x4f];
              bVar120 = pbVar77[0x51];
              bVar144 = pbVar77[0x52];
              bVar122 = pbVar77[0x54];
              bVar146 = pbVar77[0x55];
              bVar124 = pbVar77[0x57];
              bVar148 = pbVar77[0x58];
              bVar126 = pbVar77[0x5a];
              bVar150 = pbVar77[0x5b];
              bVar128 = pbVar77[0x5d];
              bVar152 = pbVar77[0x5e];
              bVar337 = pbVar74[1];
              bVar338 = pbVar74[4];
              bVar339 = pbVar74[7];
              bVar340 = pbVar74[10];
              bVar314 = pbVar74[0xc];
              bVar341 = pbVar74[0xd];
              bVar316 = pbVar74[0xf];
              bVar342 = pbVar74[0x10];
              bVar318 = pbVar74[0x12];
              bVar343 = pbVar74[0x13];
              bVar320 = pbVar74[0x15];
              bVar344 = pbVar74[0x16];
              bVar329 = pbVar74[0x18];
              bVar345 = pbVar74[0x19];
              bVar330 = pbVar74[0x1b];
              bVar346 = pbVar74[0x1c];
              bVar331 = pbVar74[0x1e];
              bVar347 = pbVar74[0x1f];
              bVar332 = pbVar74[0x21];
              bVar348 = pbVar74[0x22];
              bVar333 = pbVar74[0x24];
              bVar349 = pbVar74[0x25];
              bVar334 = pbVar74[0x27];
              bVar350 = pbVar74[0x28];
              bVar335 = pbVar74[0x2a];
              bVar351 = pbVar74[0x2b];
              bVar336 = pbVar74[0x2d];
              bVar352 = pbVar74[0x2e];
              bVar242 = pbVar74[0x30];
              bVar244 = pbVar74[0x33];
              bVar246 = pbVar74[0x36];
              bVar248 = pbVar74[0x39];
              bVar258 = pbVar74[0x3c];
              bVar260 = pbVar74[0x3f];
              bVar262 = pbVar74[0x42];
              bVar264 = pbVar74[0x45];
              bVar266 = pbVar74[0x48];
              bVar290 = pbVar74[0x49];
              bVar268 = pbVar74[0x4b];
              bVar292 = pbVar74[0x4c];
              bVar270 = pbVar74[0x4e];
              bVar294 = pbVar74[0x4f];
              bVar272 = pbVar74[0x51];
              bVar296 = pbVar74[0x52];
              bVar282 = pbVar74[0x54];
              bVar306 = pbVar74[0x55];
              bVar284 = pbVar74[0x57];
              bVar308 = pbVar74[0x58];
              bVar286 = pbVar74[0x5a];
              bVar310 = pbVar74[0x5b];
              bVar288 = pbVar74[0x5d];
              bVar312 = pbVar74[0x5e];
              bVar297 = pbVar8[1];
              bVar298 = pbVar8[4];
              bVar299 = pbVar8[7];
              bVar300 = pbVar8[10];
              bVar277 = pbVar8[0xc];
              bVar301 = pbVar8[0xd];
              bVar278 = pbVar8[0xf];
              bVar302 = pbVar8[0x10];
              bVar279 = pbVar8[0x12];
              bVar303 = pbVar8[0x13];
              bVar280 = pbVar8[0x15];
              bVar304 = pbVar8[0x16];
              bVar281 = pbVar8[0x18];
              bVar305 = pbVar8[0x19];
              bVar283 = pbVar8[0x1b];
              bVar307 = pbVar8[0x1c];
              bVar285 = pbVar8[0x1e];
              bVar309 = pbVar8[0x1f];
              bVar287 = pbVar8[0x21];
              bVar311 = pbVar8[0x22];
              bVar289 = pbVar8[0x24];
              bVar313 = pbVar8[0x25];
              bVar291 = pbVar8[0x27];
              bVar315 = pbVar8[0x28];
              bVar293 = pbVar8[0x2a];
              bVar317 = pbVar8[0x2b];
              bVar295 = pbVar8[0x2d];
              bVar319 = pbVar8[0x2e];
              bVar241 = pbVar8[0x30];
              bVar243 = pbVar8[0x33];
              bVar245 = pbVar8[0x36];
              bVar247 = pbVar8[0x39];
              bVar249 = pbVar8[0x3c];
              bVar250 = pbVar8[0x3f];
              bVar251 = pbVar8[0x42];
              bVar252 = pbVar8[0x45];
              bVar253 = pbVar8[0x48];
              bVar265 = pbVar8[0x49];
              bVar254 = pbVar8[0x4b];
              bVar267 = pbVar8[0x4c];
              bVar255 = pbVar8[0x4e];
              bVar269 = pbVar8[0x4f];
              bVar256 = pbVar8[0x51];
              bVar271 = pbVar8[0x52];
              bVar257 = pbVar8[0x54];
              bVar273 = pbVar8[0x55];
              bVar259 = pbVar8[0x57];
              bVar274 = pbVar8[0x58];
              bVar261 = pbVar8[0x5a];
              bVar275 = pbVar8[0x5b];
              bVar263 = pbVar8[0x5d];
              bVar276 = pbVar8[0x5e];
              bVar357 = pbVar9[1];
              bVar358 = pbVar9[4];
              bVar359 = pbVar9[7];
              bVar360 = pbVar9[10];
              bVar321 = pbVar9[0xc];
              bVar361 = pbVar9[0xd];
              bVar322 = pbVar9[0xf];
              bVar362 = pbVar9[0x10];
              bVar323 = pbVar9[0x12];
              bVar363 = pbVar9[0x13];
              bVar324 = pbVar9[0x15];
              bVar364 = pbVar9[0x16];
              bVar325 = pbVar9[0x18];
              bVar365 = pbVar9[0x19];
              bVar326 = pbVar9[0x1b];
              bVar366 = pbVar9[0x1c];
              bVar327 = pbVar9[0x1e];
              bVar367 = pbVar9[0x1f];
              bVar328 = pbVar9[0x21];
              bVar368 = pbVar9[0x22];
              bVar353 = pbVar9[0x24];
              bVar369 = pbVar9[0x25];
              bVar354 = pbVar9[0x27];
              bVar370 = pbVar9[0x28];
              bVar355 = pbVar9[0x2a];
              bVar371 = pbVar9[0x2b];
              bVar356 = pbVar9[0x2d];
              bVar372 = pbVar9[0x2e];
              bVar208 = pbVar9[0x30];
              bVar209 = pbVar9[0x33];
              bVar210 = pbVar9[0x36];
              bVar211 = pbVar9[0x39];
              bVar215 = pbVar9[0x3c];
              bVar219 = pbVar9[0x3f];
              bVar220 = pbVar9[0x42];
              bVar221 = pbVar9[0x45];
              bVar222 = pbVar9[0x48];
              bVar233 = pbVar9[0x49];
              bVar223 = pbVar9[0x4b];
              bVar234 = pbVar9[0x4c];
              bVar224 = pbVar9[0x4e];
              bVar235 = pbVar9[0x4f];
              bVar225 = pbVar9[0x51];
              bVar236 = pbVar9[0x52];
              bVar229 = pbVar9[0x54];
              bVar237 = pbVar9[0x55];
              bVar230 = pbVar9[0x57];
              bVar238 = pbVar9[0x58];
              bVar231 = pbVar9[0x5a];
              bVar239 = pbVar9[0x5b];
              bVar232 = pbVar9[0x5d];
              bVar240 = pbVar9[0x5e];
              sVar62 = (ushort)pbVar74[2] + (ushort)pbVar74[5] +
                       (ushort)pbVar77[2] + (ushort)pbVar77[5] +
                       (ushort)pbVar8[2] + (ushort)pbVar8[5] + (ushort)pbVar9[2] + (ushort)pbVar9[5]
              ;
              sVar63 = (ushort)pbVar74[8] + (ushort)pbVar74[0xb] +
                       (ushort)pbVar77[8] + (ushort)pbVar77[0xb] +
                       (ushort)pbVar8[8] + (ushort)pbVar8[0xb] +
                       (ushort)pbVar9[8] + (ushort)pbVar9[0xb];
              sVar64 = (ushort)pbVar74[0xe] + (ushort)pbVar74[0x11] +
                       (ushort)pbVar77[0xe] + (ushort)pbVar77[0x11] +
                       (ushort)pbVar8[0xe] + (ushort)pbVar8[0x11] +
                       (ushort)pbVar9[0xe] + (ushort)pbVar9[0x11];
              sVar65 = (ushort)pbVar74[0x14] + (ushort)pbVar74[0x17] +
                       (ushort)pbVar77[0x14] + (ushort)pbVar77[0x17] +
                       (ushort)pbVar8[0x14] + (ushort)pbVar8[0x17] +
                       (ushort)pbVar9[0x14] + (ushort)pbVar9[0x17];
              sVar66 = (ushort)pbVar74[0x1a] + (ushort)pbVar74[0x1d] +
                       (ushort)pbVar77[0x1a] + (ushort)pbVar77[0x1d] +
                       (ushort)pbVar8[0x1a] + (ushort)pbVar8[0x1d] +
                       (ushort)pbVar9[0x1a] + (ushort)pbVar9[0x1d];
              sVar67 = (ushort)pbVar74[0x20] + (ushort)pbVar74[0x23] +
                       (ushort)pbVar77[0x20] + (ushort)pbVar77[0x23] +
                       (ushort)pbVar8[0x20] + (ushort)pbVar8[0x23] +
                       (ushort)pbVar9[0x20] + (ushort)pbVar9[0x23];
              sVar68 = (ushort)pbVar74[0x26] + (ushort)pbVar74[0x29] +
                       (ushort)pbVar77[0x26] + (ushort)pbVar77[0x29] +
                       (ushort)pbVar8[0x26] + (ushort)pbVar8[0x29] +
                       (ushort)pbVar9[0x26] + (ushort)pbVar9[0x29];
              sVar69 = (ushort)pbVar74[0x2c] + (ushort)pbVar74[0x2f] +
                       (ushort)pbVar77[0x2c] + (ushort)pbVar77[0x2f] +
                       (ushort)pbVar8[0x2c] + (ushort)pbVar8[0x2f] +
                       (ushort)pbVar9[0x2c] + (ushort)pbVar9[0x2f];
              sVar41 = (ushort)pbVar74[0x32] + (ushort)pbVar74[0x35] +
                       (ushort)pbVar77[0x32] + (ushort)pbVar77[0x35] +
                       (ushort)pbVar8[0x32] + (ushort)pbVar8[0x35] +
                       (ushort)pbVar9[0x32] + (ushort)pbVar9[0x35];
              sVar42 = (ushort)pbVar74[0x38] + (ushort)pbVar74[0x3b] +
                       (ushort)pbVar77[0x38] + (ushort)pbVar77[0x3b] +
                       (ushort)pbVar8[0x38] + (ushort)pbVar8[0x3b] +
                       (ushort)pbVar9[0x38] + (ushort)pbVar9[0x3b];
              sVar43 = (ushort)pbVar74[0x3e] + (ushort)pbVar74[0x41] +
                       (ushort)pbVar77[0x3e] + (ushort)pbVar77[0x41] +
                       (ushort)pbVar8[0x3e] + (ushort)pbVar8[0x41] +
                       (ushort)pbVar9[0x3e] + (ushort)pbVar9[0x41];
              sVar44 = (ushort)pbVar74[0x44] + (ushort)pbVar74[0x47] +
                       (ushort)pbVar77[0x44] + (ushort)pbVar77[0x47] +
                       (ushort)pbVar8[0x44] + (ushort)pbVar8[0x47] +
                       (ushort)pbVar9[0x44] + (ushort)pbVar9[0x47];
              sVar45 = (ushort)pbVar74[0x4a] + (ushort)pbVar74[0x4d] +
                       (ushort)pbVar77[0x4a] + (ushort)pbVar77[0x4d] +
                       (ushort)pbVar8[0x4a] + (ushort)pbVar8[0x4d] +
                       (ushort)pbVar9[0x4a] + (ushort)pbVar9[0x4d];
              sVar46 = (ushort)pbVar74[0x50] + (ushort)pbVar74[0x53] +
                       (ushort)pbVar77[0x50] + (ushort)pbVar77[0x53] +
                       (ushort)pbVar8[0x50] + (ushort)pbVar8[0x53] +
                       (ushort)pbVar9[0x50] + (ushort)pbVar9[0x53];
              sVar47 = (ushort)pbVar74[0x56] + (ushort)pbVar74[0x59] +
                       (ushort)pbVar77[0x56] + (ushort)pbVar77[0x59] +
                       (ushort)pbVar8[0x56] + (ushort)pbVar8[0x59] +
                       (ushort)pbVar9[0x56] + (ushort)pbVar9[0x59];
              sVar48 = (ushort)pbVar74[0x5c] + (ushort)pbVar74[0x5f] +
                       (ushort)pbVar77[0x5c] + (ushort)pbVar77[0x5f] +
                       (ushort)pbVar8[0x5c] + (ushort)pbVar8[0x5f] +
                       (ushort)pbVar9[0x5c] + (ushort)pbVar9[0x5f];
              uVar17 = CONCAT13((char)((ushort)sVar63 >> 8),CONCAT12((char)sVar63,sVar62));
              uVar58 = CONCAT15((char)((ushort)sVar64 >> 8),CONCAT14((char)sVar64,uVar17));
              uVar18 = CONCAT17((char)((ushort)sVar65 >> 8),CONCAT16((char)sVar65,uVar58));
              Var59 = CONCAT19((char)((ushort)sVar66 >> 8),CONCAT18((char)sVar66,uVar18));
              auVar60[10] = (char)sVar67;
              auVar60._0_10_ = Var59;
              auVar60[0xb] = (char)((ushort)sVar67 >> 8);
              auVar61[0xc] = (char)sVar68;
              auVar61._0_12_ = auVar60;
              auVar61[0xd] = (char)((ushort)sVar68 >> 8);
              auVar57[0xe] = (char)sVar69;
              auVar57._0_14_ = auVar61;
              auVar57[0xf] = (char)((ushort)sVar69 >> 8);
              uVar16 = CONCAT13((char)((ushort)sVar42 >> 8),CONCAT12((char)sVar42,sVar41));
              uVar37 = CONCAT15((char)((ushort)sVar43 >> 8),CONCAT14((char)sVar43,uVar16));
              uVar15 = CONCAT17((char)((ushort)sVar44 >> 8),CONCAT16((char)sVar44,uVar37));
              Var38 = CONCAT19((char)((ushort)sVar45 >> 8),CONCAT18((char)sVar45,uVar15));
              auVar39[10] = (char)sVar46;
              auVar39._0_10_ = Var38;
              auVar39[0xb] = (char)((ushort)sVar46 >> 8);
              auVar40[0xc] = (char)sVar47;
              auVar40._0_12_ = auVar39;
              auVar40[0xd] = (char)((ushort)sVar47 >> 8);
              auVar36[0xe] = (char)sVar48;
              auVar36._0_14_ = auVar40;
              auVar36[0xf] = (char)((ushort)sVar48 >> 8);
              uVar31 = CONCAT12((char)((ushort)((ushort)pbVar74[0x3d] + (ushort)pbVar74[0x40] +
                                                (ushort)pbVar77[0x3d] + (ushort)pbVar77[0x40] +
                                                (ushort)pbVar8[0x3d] + (ushort)pbVar8[0x40] +
                                                (ushort)pbVar9[0x3d] + (ushort)pbVar9[0x40] +
                                               (ushort)pbVar74[0x43] + (ushort)pbVar74[0x46] +
                                               (ushort)pbVar77[0x43] + (ushort)pbVar77[0x46] +
                                               (ushort)pbVar8[0x43] + (ushort)pbVar8[0x46] +
                                               (ushort)pbVar9[0x43] + (ushort)pbVar9[0x46]) >> 4),
                                (ushort)((ushort)pbVar74[0x31] + (ushort)pbVar74[0x34] +
                                         (ushort)pbVar77[0x31] + (ushort)pbVar77[0x34] +
                                         (ushort)pbVar8[0x31] + (ushort)pbVar8[0x34] +
                                         (ushort)pbVar9[0x31] + (ushort)pbVar9[0x34] +
                                        (ushort)pbVar74[0x37] + (ushort)pbVar74[0x3a] +
                                        (ushort)pbVar77[0x37] + (ushort)pbVar77[0x3a] +
                                        (ushort)pbVar8[0x37] + (ushort)pbVar8[0x3a] +
                                        (ushort)pbVar9[0x37] + (ushort)pbVar9[0x3a]) >> 4) &
                       0xff00ff;
              uVar20 = CONCAT12((char)((ushort)((short)((uint6)uVar37 >> 0x20) +
                                               (short)((ulong)uVar15 >> 0x30)) >> 4),
                                (ushort)(sVar41 + (short)((uint)uVar16 >> 0x10)) >> 4) & 0xff00ff;
              uVar11 = CONCAT12((char)((ushort)((short)((uint6)uVar58 >> 0x20) +
                                               (short)((ulong)uVar18 >> 0x30)) >> 4),
                                (ushort)(sVar62 + (short)((uint)uVar17 >> 0x10)) >> 4) & 0xff00ff;
              puVar73 = (undefined1 *)(param_5 + uVar82);
              *puVar73 = (char)((ushort)((ushort)*pbVar74 + (ushort)pbVar74[3] +
                                         (ushort)*pbVar77 + (ushort)pbVar77[3] +
                                         (ushort)*pbVar8 + (ushort)pbVar8[3] +
                                         (ushort)*pbVar9 + (ushort)pbVar9[3] +
                                        (ushort)pbVar74[6] + (ushort)pbVar74[9] +
                                        (ushort)pbVar77[6] + (ushort)pbVar77[9] +
                                        (ushort)pbVar8[6] + (ushort)pbVar8[9] +
                                        (ushort)pbVar9[6] + (ushort)pbVar9[9]) >> 4);
              puVar73[1] = (char)((ushort)((ushort)bVar337 + (ushort)bVar338 +
                                           (ushort)bVar189 + (ushort)bVar190 +
                                           (ushort)bVar297 + (ushort)bVar298 +
                                           (ushort)bVar357 + (ushort)bVar358 +
                                          (ushort)bVar339 + (ushort)bVar340 +
                                          (ushort)bVar191 + (ushort)bVar192 +
                                          (ushort)bVar299 + (ushort)bVar300 +
                                          (ushort)bVar359 + (ushort)bVar360) >> 4);
              puVar73[2] = (char)uVar11;
              puVar73[3] = (char)((ushort)((ushort)bVar314 + (ushort)bVar316 +
                                           (ushort)bVar161 + (ushort)bVar163 +
                                           (ushort)bVar277 + (ushort)bVar278 +
                                           (ushort)bVar321 + (ushort)bVar322 +
                                          (ushort)bVar318 + (ushort)bVar320 +
                                          (ushort)bVar165 + (ushort)bVar167 +
                                          (ushort)bVar279 + (ushort)bVar280 +
                                          (ushort)bVar323 + (ushort)bVar324) >> 4);
              puVar73[4] = (char)((ushort)((ushort)bVar341 + (ushort)bVar342 +
                                           (ushort)bVar193 + (ushort)bVar194 +
                                           (ushort)bVar301 + (ushort)bVar302 +
                                           (ushort)bVar361 + (ushort)bVar362 +
                                          (ushort)bVar343 + (ushort)bVar344 +
                                          (ushort)bVar195 + (ushort)bVar196 +
                                          (ushort)bVar303 + (ushort)bVar304 +
                                          (ushort)bVar363 + (ushort)bVar364) >> 4);
              puVar73[5] = (char)(uVar11 >> 0x10);
              puVar73[6] = (char)((ushort)((ushort)bVar329 + (ushort)bVar330 +
                                           (ushort)bVar169 + (ushort)bVar171 +
                                           (ushort)bVar281 + (ushort)bVar283 +
                                           (ushort)bVar325 + (ushort)bVar326 +
                                          (ushort)bVar331 + (ushort)bVar332 +
                                          (ushort)bVar173 + (ushort)bVar175 +
                                          (ushort)bVar285 + (ushort)bVar287 +
                                          (ushort)bVar327 + (ushort)bVar328) >> 4);
              puVar73[7] = (char)((ushort)((ushort)bVar345 + (ushort)bVar346 +
                                           (ushort)bVar197 + (ushort)bVar198 +
                                           (ushort)bVar305 + (ushort)bVar307 +
                                           (ushort)bVar365 + (ushort)bVar366 +
                                          (ushort)bVar347 + (ushort)bVar348 +
                                          (ushort)bVar199 + (ushort)bVar200 +
                                          (ushort)bVar309 + (ushort)bVar311 +
                                          (ushort)bVar367 + (ushort)bVar368) >> 4);
              puVar73[8] = (char)((ushort)((short)((unkuint10)Var59 >> 0x40) + auVar60._10_2_) >> 4)
              ;
              puVar73[9] = (char)((ushort)((ushort)bVar333 + (ushort)bVar334 +
                                           (ushort)bVar185 + (ushort)bVar186 +
                                           (ushort)bVar289 + (ushort)bVar291 +
                                           (ushort)bVar353 + (ushort)bVar354 +
                                          (ushort)bVar335 + (ushort)bVar336 +
                                          (ushort)bVar187 + (ushort)bVar188 +
                                          (ushort)bVar293 + (ushort)bVar295 +
                                          (ushort)bVar355 + (ushort)bVar356) >> 4);
              puVar73[10] = (char)((ushort)((ushort)bVar349 + (ushort)bVar350 +
                                            (ushort)bVar201 + (ushort)bVar205 +
                                            (ushort)bVar313 + (ushort)bVar315 +
                                            (ushort)bVar369 + (ushort)bVar370 +
                                           (ushort)bVar351 + (ushort)bVar352 +
                                           (ushort)bVar206 + (ushort)bVar207 +
                                           (ushort)bVar317 + (ushort)bVar319 +
                                           (ushort)bVar371 + (ushort)bVar372) >> 4);
              puVar73[0xb] = (char)((ushort)(auVar61._12_2_ + auVar57._14_2_) >> 4);
              puVar73[0xc] = (char)((ushort)((ushort)bVar242 + (ushort)bVar244 +
                                             (ushort)bVar90 + (ushort)bVar92 +
                                             (ushort)bVar241 + (ushort)bVar243 +
                                             (ushort)bVar208 + (ushort)bVar209 +
                                            (ushort)bVar246 + (ushort)bVar248 +
                                            (ushort)bVar94 + (ushort)bVar96 +
                                            (ushort)bVar245 + (ushort)bVar247 +
                                            (ushort)bVar210 + (ushort)bVar211) >> 4);
              puVar73[0xd] = (char)uVar31;
              puVar73[0xe] = (char)uVar20;
              puVar73[0xf] = (char)((ushort)((ushort)bVar258 + (ushort)bVar260 +
                                             (ushort)bVar98 + (ushort)bVar100 +
                                             (ushort)bVar249 + (ushort)bVar250 +
                                             (ushort)bVar215 + (ushort)bVar219 +
                                            (ushort)bVar262 + (ushort)bVar264 +
                                            (ushort)bVar102 + (ushort)bVar104 +
                                            (ushort)bVar251 + (ushort)bVar252 +
                                            (ushort)bVar220 + (ushort)bVar221) >> 4);
              puVar73[0x10] = (char)(uVar31 >> 0x10);
              puVar73[0x11] = (char)(uVar20 >> 0x10);
              puVar73[0x12] =
                   (char)((ushort)((ushort)bVar266 + (ushort)bVar268 +
                                   (ushort)bVar114 + (ushort)bVar116 +
                                   (ushort)bVar253 + (ushort)bVar254 +
                                   (ushort)bVar222 + (ushort)bVar223 +
                                  (ushort)bVar270 + (ushort)bVar272 +
                                  (ushort)bVar118 + (ushort)bVar120 +
                                  (ushort)bVar255 + (ushort)bVar256 +
                                  (ushort)bVar224 + (ushort)bVar225) >> 4);
              puVar73[0x13] =
                   (char)((ushort)((ushort)bVar290 + (ushort)bVar292 +
                                   (ushort)bVar138 + (ushort)bVar140 +
                                   (ushort)bVar265 + (ushort)bVar267 +
                                   (ushort)bVar233 + (ushort)bVar234 +
                                  (ushort)bVar294 + (ushort)bVar296 +
                                  (ushort)bVar142 + (ushort)bVar144 +
                                  (ushort)bVar269 + (ushort)bVar271 +
                                  (ushort)bVar235 + (ushort)bVar236) >> 4);
              puVar73[0x14] =
                   (char)((ushort)((short)((unkuint10)Var38 >> 0x40) + auVar39._10_2_) >> 4);
              puVar73[0x15] =
                   (char)((ushort)((ushort)bVar282 + (ushort)bVar284 +
                                   (ushort)bVar122 + (ushort)bVar124 +
                                   (ushort)bVar257 + (ushort)bVar259 +
                                   (ushort)bVar229 + (ushort)bVar230 +
                                  (ushort)bVar286 + (ushort)bVar288 +
                                  (ushort)bVar126 + (ushort)bVar128 +
                                  (ushort)bVar261 + (ushort)bVar263 +
                                  (ushort)bVar231 + (ushort)bVar232) >> 4);
              puVar73[0x16] =
                   (char)((ushort)((ushort)bVar306 + (ushort)bVar308 +
                                   (ushort)bVar146 + (ushort)bVar148 +
                                   (ushort)bVar273 + (ushort)bVar274 +
                                   (ushort)bVar237 + (ushort)bVar238 +
                                  (ushort)bVar310 + (ushort)bVar312 +
                                  (ushort)bVar150 + (ushort)bVar152 +
                                  (ushort)bVar275 + (ushort)bVar276 +
                                  (ushort)bVar239 + (ushort)bVar240) >> 4);
              puVar73[0x17] = (char)((ushort)(auVar40._12_2_ + auVar36._14_2_) >> 4);
              uVar82 = uVar82 + 0x18;
              lVar79 = lVar79 + 0x60;
            } while (uVar82 < lVar83 - 0x15U);
          }
          uVar86 = *param_2;
          if (uVar82 < uVar86 * 3) {
            lVar79 = lVar79 + lVar78;
            do {
              pbVar77 = (byte *)(lVar84 + lVar79);
              pbVar74 = (byte *)(lVar84 + param_4 + lVar79);
              pbVar8 = (byte *)(lVar84 + param_4 * 2 + lVar79);
              pbVar9 = (byte *)(lVar84 + param_4 * 3 + lVar79);
              puVar73 = (undefined1 *)(param_5 + uVar82);
              *puVar73 = (char)((uint)pbVar77[-2] + (uint)pbVar77[-5] +
                                (uint)pbVar77[1] + (uint)pbVar77[4] +
                                (uint)pbVar74[-5] + (uint)pbVar74[-2] + (uint)pbVar74[1] +
                                (uint)pbVar74[4] + (uint)pbVar8[-5] + (uint)pbVar8[-2] +
                                (uint)pbVar8[1] +
                                (uint)pbVar8[4] + (uint)pbVar9[-5] + (uint)pbVar9[-2] +
                                (uint)pbVar9[1] + (uint)pbVar9[4] >> 4);
              puVar73[1] = (char)((uint)pbVar77[-1] + (uint)pbVar77[-4] +
                                  (uint)pbVar77[2] + (uint)pbVar77[5] +
                                  (uint)pbVar74[-4] + (uint)pbVar74[-1] + (uint)pbVar74[2] +
                                  (uint)pbVar74[5] + (uint)pbVar8[-4] + (uint)pbVar8[-1] +
                                  (uint)pbVar8[2] +
                                  (uint)pbVar8[5] + (uint)pbVar9[-4] + (uint)pbVar9[-1] +
                                  (uint)pbVar9[2] + (uint)pbVar9[5] >> 4);
              puVar73[2] = (char)((uint)*pbVar77 + (uint)pbVar77[-3] +
                                  (uint)pbVar77[3] + (uint)pbVar77[6] +
                                  (uint)pbVar74[-3] + (uint)*pbVar74 + (uint)pbVar74[3] +
                                  (uint)pbVar74[6] + (uint)pbVar8[-3] + (uint)*pbVar8 +
                                  (uint)pbVar8[3] +
                                  (uint)pbVar8[6] + (uint)pbVar9[-3] + (uint)*pbVar9 +
                                  (uint)pbVar9[3] + (uint)pbVar9[6] >> 4);
              uVar82 = uVar82 + 3;
              lVar79 = lVar79 + 0xc;
            } while (uVar82 < uVar86 * 3);
          }
          uVar87 = uVar87 + 1;
          param_5 = param_5 + param_6;
          lVar72 = lVar72 + lVar85;
          lVar75 = lVar75 + lVar85;
          param_3 = param_3 + lVar85;
          lVar76 = lVar76 + lVar85;
          lVar78 = lVar78 + lVar85;
        } while (uVar87 < param_2[1]);
      }
    }
  }
  else if (param_7 == 1) {
    if ((fVar12 == 2.0) && (fVar22 == 2.0)) {
      if (param_2[1] != 0) {
        uVar81 = 0;
        uVar82 = *param_2;
        lVar83 = param_3 + param_4;
        uVar87 = uVar82;
        do {
          if (7 < uVar82) {
            lVar84 = 0;
            uVar86 = 0;
            do {
              puVar1 = (undefined8 *)(param_3 + lVar84);
              Hint_Prefetch(puVar1 + 0x28,0,0,0);
              pVar2 = (unkbyte9 *)(lVar83 + lVar84);
              Hint_Prefetch(pVar2 + 0x14,0,0,0);
              uVar18 = puVar1[1];
              uVar15 = *puVar1;
              uVar23 = *(undefined8 *)((long)pVar2 + 8);
              Var70 = *pVar2;
              *(ulong *)(param_5 + uVar86) =
                   CONCAT17((char)((ushort)((ushort)(byte)((ulong)uVar23 >> 0x30) +
                                            (ushort)(byte)((ulong)uVar23 >> 0x38) +
                                           (ushort)(byte)((ulong)uVar18 >> 0x30) +
                                           (ushort)(byte)((ulong)uVar18 >> 0x38)) >> 2),
                            CONCAT16((char)((ushort)((ushort)(byte)((ulong)uVar23 >> 0x20) +
                                                     (ushort)(byte)((ulong)uVar23 >> 0x28) +
                                                    (ushort)(byte)((ulong)uVar18 >> 0x20) +
                                                    (ushort)(byte)((ulong)uVar18 >> 0x28)) >> 2),
                                     CONCAT15((char)((ushort)((ushort)(byte)((ulong)uVar23 >> 0x10)
                                                              + (ushort)(byte)((ulong)uVar23 >> 0x18
                                                                              ) +
                                                             (ushort)(byte)((ulong)uVar18 >> 0x10) +
                                                             (ushort)(byte)((ulong)uVar18 >> 0x18))
                                                    >> 2),
                                              CONCAT14((char)((ushort)((ushort)(byte)((unkuint9)
                                                                                      Var70 >> 0x40)
                                                                       + (ushort)(byte)((ulong)
                                                  uVar23 >> 8) +
                                                  (ushort)(byte)uVar18 +
                                                  (ushort)(byte)((ulong)uVar18 >> 8)) >> 2),
                                                  CONCAT13((char)((ushort)((ushort)(byte)((unkuint9)
                                                                                          Var70 >> 
                                                  0x30) + (ushort)(byte)((unkuint9)Var70 >> 0x38) +
                                                  (ushort)(byte)((ulong)uVar15 >> 0x30) +
                                                  (ushort)(byte)((ulong)uVar15 >> 0x38)) >> 2),
                                                  CONCAT12((char)((ushort)((ushort)(byte)((unkuint9)
                                                                                          Var70 >> 
                                                  0x20) + (ushort)(byte)((unkuint9)Var70 >> 0x28) +
                                                  (ushort)(byte)((ulong)uVar15 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar15 >> 0x28)) >> 2),
                                                  CONCAT11((char)((ushort)((ushort)(byte)((unkuint9)
                                                                                          Var70 >> 
                                                  0x10) + (ushort)(byte)((unkuint9)Var70 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar15 >> 0x10) +
                                                  (ushort)(byte)((ulong)uVar15 >> 0x18)) >> 2),
                                                  (char)((ushort)((ushort)(byte)Var70 +
                                                                  (ushort)(byte)((unkuint9)Var70 >>
                                                                                8) +
                                                                 (ushort)(byte)uVar15 +
                                                                 (ushort)(byte)((ulong)uVar15 >> 8))
                                                        >> 2))))))));
              uVar86 = uVar86 + 8;
              lVar84 = lVar84 + 0x10;
              if (uVar82 - 7 <= uVar86) goto LAB_1093682c4;
            } while( true );
          }
          uVar86 = 0;
          lVar84 = 0;
          while (uVar86 < uVar87) {
            *(char *)(param_5 + uVar86) =
                 (char)((uint)((byte *)(param_3 + lVar84))[1] + (uint)*(byte *)(param_3 + lVar84) +
                        (uint)*(byte *)(lVar83 + lVar84) + (uint)((byte *)(lVar83 + lVar84))[1] >> 2
                       );
            uVar86 = uVar86 + 1;
            lVar84 = lVar84 + 2;
LAB_1093682c4:
            uVar87 = *param_2;
          }
          uVar81 = uVar81 + 1;
          lVar83 = lVar83 + param_4 * 2;
          param_3 = param_3 + param_4 * 2;
          param_5 = param_5 + param_6;
        } while (uVar81 < param_2[1]);
      }
    }
    else {
      uVar81 = *param_2;
      uVar87 = param_2[1];
      if ((fVar12 == 0.5) && (fVar22 == 0.5)) {
        if (uVar87 != 0) {
          uVar82 = 0;
          uVar86 = 1;
          lVar83 = param_5;
          do {
            lVar72 = param_4 * (uVar82 >> 1);
            lVar84 = param_3 + lVar72;
            uVar87 = uVar87 - 1;
            if (uVar81 < 0x20) {
              uVar88 = 0;
              lVar76 = 0;
            }
            else {
              lVar76 = 0;
              uVar88 = 0;
              uVar80 = uVar86;
              if (uVar87 <= uVar86) {
                uVar80 = uVar87;
              }
              do {
                puVar1 = (undefined8 *)(lVar84 + lVar76);
                Hint_Prefetch(puVar1 + 0x28,0,0,0);
                uVar15 = puVar1[1];
                uVar105 = (undefined1)uVar15;
                uVar106 = (undefined1)((ulong)uVar15 >> 8);
                uVar107 = (undefined1)((ulong)uVar15 >> 0x10);
                uVar108 = (undefined1)((ulong)uVar15 >> 0x18);
                uVar109 = (undefined1)((ulong)uVar15 >> 0x20);
                uVar110 = (undefined1)((ulong)uVar15 >> 0x28);
                uVar111 = (undefined1)((ulong)uVar15 >> 0x30);
                uVar112 = (undefined1)((ulong)uVar15 >> 0x38);
                uVar15 = *puVar1;
                uVar89 = (undefined1)uVar15;
                uVar91 = (undefined1)((ulong)uVar15 >> 8);
                uVar93 = (undefined1)((ulong)uVar15 >> 0x10);
                uVar95 = (undefined1)((ulong)uVar15 >> 0x18);
                uVar97 = (undefined1)((ulong)uVar15 >> 0x20);
                uVar99 = (undefined1)((ulong)uVar15 >> 0x28);
                uVar101 = (undefined1)((ulong)uVar15 >> 0x30);
                uVar103 = (undefined1)((ulong)uVar15 >> 0x38);
                puVar73 = (undefined1 *)(lVar83 + uVar88);
                *puVar73 = uVar89;
                puVar73[1] = uVar89;
                puVar73[2] = uVar91;
                puVar73[3] = uVar91;
                puVar73[4] = uVar93;
                puVar73[5] = uVar93;
                puVar73[6] = uVar95;
                puVar73[7] = uVar95;
                puVar73[8] = uVar97;
                puVar73[9] = uVar97;
                puVar73[10] = uVar99;
                puVar73[0xb] = uVar99;
                puVar73[0xc] = uVar101;
                puVar73[0xd] = uVar101;
                puVar73[0xe] = uVar103;
                puVar73[0xf] = uVar103;
                puVar73[0x10] = uVar105;
                puVar73[0x11] = uVar105;
                puVar73[0x12] = uVar106;
                puVar73[0x13] = uVar106;
                puVar73[0x14] = uVar107;
                puVar73[0x15] = uVar107;
                puVar73[0x16] = uVar108;
                puVar73[0x17] = uVar108;
                puVar73[0x18] = uVar109;
                puVar73[0x19] = uVar109;
                puVar73[0x1a] = uVar110;
                puVar73[0x1b] = uVar110;
                puVar73[0x1c] = uVar111;
                puVar73[0x1d] = uVar111;
                puVar73[0x1e] = uVar112;
                puVar73[0x1f] = uVar112;
                puVar73 = (undefined1 *)(param_5 + param_6 * uVar80 + uVar88);
                *puVar73 = uVar89;
                puVar73[1] = uVar89;
                puVar73[2] = uVar91;
                puVar73[3] = uVar91;
                puVar73[4] = uVar93;
                puVar73[5] = uVar93;
                puVar73[6] = uVar95;
                puVar73[7] = uVar95;
                puVar73[8] = uVar97;
                puVar73[9] = uVar97;
                puVar73[10] = uVar99;
                puVar73[0xb] = uVar99;
                puVar73[0xc] = uVar101;
                puVar73[0xd] = uVar101;
                puVar73[0xe] = uVar103;
                puVar73[0xf] = uVar103;
                puVar73[0x10] = uVar105;
                puVar73[0x11] = uVar105;
                puVar73[0x12] = uVar106;
                puVar73[0x13] = uVar106;
                puVar73[0x14] = uVar107;
                puVar73[0x15] = uVar107;
                puVar73[0x16] = uVar108;
                puVar73[0x17] = uVar108;
                puVar73[0x18] = uVar109;
                puVar73[0x19] = uVar109;
                puVar73[0x1a] = uVar110;
                puVar73[0x1b] = uVar110;
                puVar73[0x1c] = uVar111;
                puVar73[0x1d] = uVar111;
                puVar73[0x1e] = uVar112;
                puVar73[0x1f] = uVar112;
                uVar88 = uVar88 + 0x20;
                lVar76 = lVar76 + 0x10;
              } while (uVar88 < uVar81 - 0x1f);
            }
            if ((0xe < uVar81) && (uVar88 < uVar81 - 0xf)) {
              uVar80 = uVar86;
              if (uVar87 <= uVar86) {
                uVar80 = uVar87;
              }
              do {
                uVar15 = *(undefined8 *)(lVar84 + lVar76);
                uVar89 = (undefined1)uVar15;
                uVar91 = (undefined1)((ulong)uVar15 >> 8);
                uVar93 = (undefined1)((ulong)uVar15 >> 0x10);
                uVar95 = (undefined1)((ulong)uVar15 >> 0x18);
                uVar97 = (undefined1)((ulong)uVar15 >> 0x20);
                uVar99 = (undefined1)((ulong)uVar15 >> 0x28);
                uVar101 = (undefined1)((ulong)uVar15 >> 0x30);
                uVar103 = (undefined1)((ulong)uVar15 >> 0x38);
                puVar73 = (undefined1 *)(lVar83 + uVar88);
                *puVar73 = uVar89;
                puVar73[1] = uVar89;
                puVar73[2] = uVar91;
                puVar73[3] = uVar91;
                puVar73[4] = uVar93;
                puVar73[5] = uVar93;
                puVar73[6] = uVar95;
                puVar73[7] = uVar95;
                puVar73[8] = uVar97;
                puVar73[9] = uVar97;
                puVar73[10] = uVar99;
                puVar73[0xb] = uVar99;
                puVar73[0xc] = uVar101;
                puVar73[0xd] = uVar101;
                puVar73[0xe] = uVar103;
                puVar73[0xf] = uVar103;
                puVar73 = (undefined1 *)(param_5 + param_6 * uVar80 + uVar88);
                *puVar73 = uVar89;
                puVar73[1] = uVar89;
                puVar73[2] = uVar91;
                puVar73[3] = uVar91;
                puVar73[4] = uVar93;
                puVar73[5] = uVar93;
                puVar73[6] = uVar95;
                puVar73[7] = uVar95;
                puVar73[8] = uVar97;
                puVar73[9] = uVar97;
                puVar73[10] = uVar99;
                puVar73[0xb] = uVar99;
                puVar73[0xc] = uVar101;
                puVar73[0xd] = uVar101;
                puVar73[0xe] = uVar103;
                puVar73[0xf] = uVar103;
                uVar88 = uVar88 + 0x10;
                lVar76 = lVar76 + 8;
              } while (uVar88 < uVar81 - 0xf);
            }
            if (uVar88 < *param_2) {
              uVar80 = uVar86;
              if (uVar87 <= uVar86) {
                uVar80 = uVar87;
              }
              puVar73 = (undefined1 *)(param_3 + lVar76 + lVar72);
              do {
                uVar89 = *puVar73;
                ((undefined1 *)(lVar83 + uVar88))[1] = uVar89;
                *(undefined1 *)(lVar83 + uVar88) = uVar89;
                puVar6 = (undefined1 *)(param_5 + 1 + param_6 * uVar80 + uVar88);
                *puVar6 = uVar89;
                puVar6[-1] = uVar89;
                uVar88 = uVar88 + 2;
                puVar73 = puVar73 + 1;
              } while (uVar88 < *param_2);
            }
            uVar82 = uVar82 + 2;
            uVar87 = param_2[1];
            uVar86 = uVar86 + 2;
            lVar83 = lVar83 + param_6 * 2;
          } while (uVar82 < uVar87);
        }
      }
      else if (uVar87 != 0) {
        uVar87 = 0;
        lVar83 = param_3 + param_4 * 3;
        lVar72 = param_4 * 4;
        lVar84 = param_3 + param_4 * 2;
        param_4 = param_3 + param_4;
        do {
          if (uVar81 < 0x10) {
            uVar82 = 0;
            lVar76 = 0;
          }
          else {
            lVar76 = 0;
            uVar82 = 0;
            do {
              pbVar77 = (byte *)(param_3 + lVar76);
              Hint_Prefetch(pbVar77 + 0x140,0,0,0);
              pbVar74 = (byte *)(param_4 + lVar76);
              Hint_Prefetch(pbVar74 + 0x140,0,0,0);
              pbVar8 = (byte *)(lVar84 + lVar76);
              Hint_Prefetch(pbVar8 + 0x140,0,0,0);
              pbVar9 = (byte *)(lVar83 + lVar76);
              Hint_Prefetch(pbVar9 + 0x140,0,0,0);
              bVar90 = *pbVar77;
              bVar114 = pbVar77[1];
              bVar138 = pbVar77[2];
              bVar161 = pbVar77[3];
              bVar92 = pbVar77[4];
              bVar116 = pbVar77[5];
              bVar140 = pbVar77[6];
              bVar163 = pbVar77[7];
              bVar94 = pbVar77[8];
              bVar118 = pbVar77[9];
              bVar142 = pbVar77[10];
              bVar165 = pbVar77[0xb];
              bVar96 = pbVar77[0xc];
              bVar120 = pbVar77[0xd];
              bVar144 = pbVar77[0xe];
              bVar167 = pbVar77[0xf];
              bVar98 = pbVar77[0x10];
              bVar122 = pbVar77[0x11];
              bVar146 = pbVar77[0x12];
              bVar169 = pbVar77[0x13];
              bVar100 = pbVar77[0x14];
              bVar124 = pbVar77[0x15];
              bVar148 = pbVar77[0x16];
              bVar171 = pbVar77[0x17];
              bVar102 = pbVar77[0x18];
              bVar126 = pbVar77[0x19];
              bVar150 = pbVar77[0x1a];
              bVar173 = pbVar77[0x1b];
              bVar104 = pbVar77[0x1c];
              bVar128 = pbVar77[0x1d];
              bVar152 = pbVar77[0x1e];
              bVar175 = pbVar77[0x1f];
              bVar185 = *pbVar74;
              bVar193 = pbVar74[1];
              bVar201 = pbVar74[2];
              bVar215 = pbVar74[3];
              bVar186 = pbVar74[4];
              bVar194 = pbVar74[5];
              bVar205 = pbVar74[6];
              bVar219 = pbVar74[7];
              bVar187 = pbVar74[8];
              bVar195 = pbVar74[9];
              bVar206 = pbVar74[10];
              bVar220 = pbVar74[0xb];
              bVar188 = pbVar74[0xc];
              bVar196 = pbVar74[0xd];
              bVar207 = pbVar74[0xe];
              bVar221 = pbVar74[0xf];
              bVar189 = pbVar74[0x10];
              bVar197 = pbVar74[0x11];
              bVar208 = pbVar74[0x12];
              bVar222 = pbVar74[0x13];
              bVar190 = pbVar74[0x14];
              bVar198 = pbVar74[0x15];
              bVar209 = pbVar74[0x16];
              bVar223 = pbVar74[0x17];
              bVar191 = pbVar74[0x18];
              bVar199 = pbVar74[0x19];
              bVar210 = pbVar74[0x1a];
              bVar224 = pbVar74[0x1b];
              bVar192 = pbVar74[0x1c];
              bVar200 = pbVar74[0x1d];
              bVar211 = pbVar74[0x1e];
              bVar225 = pbVar74[0x1f];
              bVar229 = *pbVar8;
              bVar237 = pbVar8[1];
              bVar258 = pbVar8[2];
              bVar282 = pbVar8[3];
              bVar230 = pbVar8[4];
              bVar238 = pbVar8[5];
              bVar260 = pbVar8[6];
              bVar284 = pbVar8[7];
              bVar231 = pbVar8[8];
              bVar239 = pbVar8[9];
              bVar262 = pbVar8[10];
              bVar286 = pbVar8[0xb];
              bVar232 = pbVar8[0xc];
              bVar240 = pbVar8[0xd];
              bVar264 = pbVar8[0xe];
              bVar288 = pbVar8[0xf];
              bVar233 = pbVar8[0x10];
              bVar242 = pbVar8[0x11];
              bVar266 = pbVar8[0x12];
              bVar290 = pbVar8[0x13];
              bVar234 = pbVar8[0x14];
              bVar244 = pbVar8[0x15];
              bVar268 = pbVar8[0x16];
              bVar292 = pbVar8[0x17];
              bVar235 = pbVar8[0x18];
              bVar246 = pbVar8[0x19];
              bVar270 = pbVar8[0x1a];
              bVar294 = pbVar8[0x1b];
              bVar236 = pbVar8[0x1c];
              bVar248 = pbVar8[0x1d];
              bVar272 = pbVar8[0x1e];
              bVar296 = pbVar8[0x1f];
              bVar306 = *pbVar9;
              bVar329 = pbVar9[1];
              bVar337 = pbVar9[2];
              bVar345 = pbVar9[3];
              bVar308 = pbVar9[4];
              bVar330 = pbVar9[5];
              bVar338 = pbVar9[6];
              bVar346 = pbVar9[7];
              bVar310 = pbVar9[8];
              bVar331 = pbVar9[9];
              bVar339 = pbVar9[10];
              bVar347 = pbVar9[0xb];
              bVar312 = pbVar9[0xc];
              bVar332 = pbVar9[0xd];
              bVar340 = pbVar9[0xe];
              bVar348 = pbVar9[0xf];
              bVar314 = pbVar9[0x10];
              bVar333 = pbVar9[0x11];
              bVar341 = pbVar9[0x12];
              bVar349 = pbVar9[0x13];
              bVar316 = pbVar9[0x14];
              bVar334 = pbVar9[0x15];
              bVar342 = pbVar9[0x16];
              bVar350 = pbVar9[0x17];
              bVar318 = pbVar9[0x18];
              bVar335 = pbVar9[0x19];
              bVar343 = pbVar9[0x1a];
              bVar351 = pbVar9[0x1b];
              bVar320 = pbVar9[0x1c];
              bVar336 = pbVar9[0x1d];
              bVar344 = pbVar9[0x1e];
              bVar352 = pbVar9[0x1f];
              ((undefined8 *)(param_5 + uVar82))[1] =
                   CONCAT17((char)((ushort)((ushort)pbVar77[0x3c] + (ushort)pbVar77[0x3d] +
                                            (ushort)pbVar77[0x3f] + (ushort)pbVar77[0x3e] +
                                            (ushort)pbVar74[0x3f] + (ushort)pbVar74[0x3e] +
                                            (ushort)pbVar74[0x3d] + (ushort)pbVar74[0x3c] +
                                            (ushort)pbVar8[0x3f] + (ushort)pbVar8[0x3e] +
                                            (ushort)pbVar8[0x3d] + (ushort)pbVar8[0x3c] +
                                            (ushort)pbVar9[0x3f] + (ushort)pbVar9[0x3e] +
                                            (ushort)pbVar9[0x3d] + (ushort)pbVar9[0x3c]) >> 4),
                            CONCAT16((char)((ushort)((ushort)pbVar77[0x38] + (ushort)pbVar77[0x39] +
                                                     (ushort)pbVar77[0x3b] + (ushort)pbVar77[0x3a] +
                                                     (ushort)pbVar74[0x3b] + (ushort)pbVar74[0x3a] +
                                                     (ushort)pbVar74[0x39] + (ushort)pbVar74[0x38] +
                                                     (ushort)pbVar8[0x3b] + (ushort)pbVar8[0x3a] +
                                                     (ushort)pbVar8[0x39] + (ushort)pbVar8[0x38] +
                                                     (ushort)pbVar9[0x3b] + (ushort)pbVar9[0x3a] +
                                                     (ushort)pbVar9[0x39] + (ushort)pbVar9[0x38]) >>
                                           4),CONCAT15((char)((ushort)((ushort)pbVar77[0x34] +
                                                                       (ushort)pbVar77[0x35] +
                                                                       (ushort)pbVar77[0x37] +
                                                                       (ushort)pbVar77[0x36] +
                                                                       (ushort)pbVar74[0x37] +
                                                                       (ushort)pbVar74[0x36] +
                                                                       (ushort)pbVar74[0x35] +
                                                                       (ushort)pbVar74[0x34] +
                                                                       (ushort)pbVar8[0x37] +
                                                                       (ushort)pbVar8[0x36] +
                                                                       (ushort)pbVar8[0x35] +
                                                                       (ushort)pbVar8[0x34] +
                                                                       (ushort)pbVar9[0x37] +
                                                                       (ushort)pbVar9[0x36] +
                                                                       (ushort)pbVar9[0x35] +
                                                                      (ushort)pbVar9[0x34]) >> 4),
                                                       CONCAT14((char)((ushort)((ushort)pbVar77[0x30
                                                  ] + (ushort)pbVar77[0x31] + (ushort)pbVar77[0x33]
                                                  + (ushort)pbVar77[0x32] + (ushort)pbVar74[0x33] +
                                                  (ushort)pbVar74[0x32] + (ushort)pbVar74[0x31] +
                                                  (ushort)pbVar74[0x30] + (ushort)pbVar8[0x33] +
                                                  (ushort)pbVar8[0x32] + (ushort)pbVar8[0x31] +
                                                  (ushort)pbVar8[0x30] + (ushort)pbVar9[0x33] +
                                                  (ushort)pbVar9[0x32] + (ushort)pbVar9[0x31] +
                                                  (ushort)pbVar9[0x30]) >> 4),
                                                  CONCAT13((char)((ushort)((ushort)pbVar77[0x2c] +
                                                                           (ushort)pbVar77[0x2d] +
                                                                           (ushort)pbVar77[0x2f] +
                                                                           (ushort)pbVar77[0x2e] +
                                                                           (ushort)pbVar74[0x2f] +
                                                                           (ushort)pbVar74[0x2e] +
                                                                           (ushort)pbVar74[0x2d] +
                                                                           (ushort)pbVar74[0x2c] +
                                                                           (ushort)pbVar8[0x2f] +
                                                                           (ushort)pbVar8[0x2e] +
                                                                           (ushort)pbVar8[0x2d] +
                                                                           (ushort)pbVar8[0x2c] +
                                                                           (ushort)pbVar9[0x2f] +
                                                                           (ushort)pbVar9[0x2e] +
                                                                           (ushort)pbVar9[0x2d] +
                                                                          (ushort)pbVar9[0x2c]) >> 4
                                                                 ),CONCAT12((char)((ushort)((ushort)
                                                  pbVar77[0x28] + (ushort)pbVar77[0x29] +
                                                  (ushort)pbVar77[0x2b] + (ushort)pbVar77[0x2a] +
                                                  (ushort)pbVar74[0x2b] + (ushort)pbVar74[0x2a] +
                                                  (ushort)pbVar74[0x29] + (ushort)pbVar74[0x28] +
                                                  (ushort)pbVar8[0x2b] + (ushort)pbVar8[0x2a] +
                                                  (ushort)pbVar8[0x29] + (ushort)pbVar8[0x28] +
                                                  (ushort)pbVar9[0x2b] + (ushort)pbVar9[0x2a] +
                                                  (ushort)pbVar9[0x29] + (ushort)pbVar9[0x28]) >> 4)
                                                  ,CONCAT11((char)((ushort)((ushort)pbVar77[0x24] +
                                                                            (ushort)pbVar77[0x25] +
                                                                            (ushort)pbVar77[0x27] +
                                                                            (ushort)pbVar77[0x26] +
                                                                            (ushort)pbVar74[0x27] +
                                                                            (ushort)pbVar74[0x26] +
                                                                            (ushort)pbVar74[0x25] +
                                                                            (ushort)pbVar74[0x24] +
                                                                            (ushort)pbVar8[0x27] +
                                                                            (ushort)pbVar8[0x26] +
                                                                            (ushort)pbVar8[0x25] +
                                                                            (ushort)pbVar8[0x24] +
                                                                            (ushort)pbVar9[0x27] +
                                                                            (ushort)pbVar9[0x26] +
                                                                            (ushort)pbVar9[0x25] +
                                                                           (ushort)pbVar9[0x24]) >>
                                                                  4),(char)((ushort)((ushort)pbVar77
                                                  [0x20] + (ushort)pbVar77[0x21] +
                                                  (ushort)pbVar77[0x23] + (ushort)pbVar77[0x22] +
                                                  (ushort)pbVar74[0x23] + (ushort)pbVar74[0x22] +
                                                  (ushort)pbVar74[0x21] + (ushort)pbVar74[0x20] +
                                                  (ushort)pbVar8[0x23] + (ushort)pbVar8[0x22] +
                                                  (ushort)pbVar8[0x21] + (ushort)pbVar8[0x20] +
                                                  (ushort)pbVar9[0x23] + (ushort)pbVar9[0x22] +
                                                  (ushort)pbVar9[0x21] + (ushort)pbVar9[0x20]) >> 4)
                                                  )))))));
              *(undefined8 *)(param_5 + uVar82) =
                   CONCAT17((char)((ushort)((ushort)bVar104 + (ushort)bVar128 + (ushort)bVar175 +
                                            (ushort)bVar152 + (ushort)bVar225 + (ushort)bVar211 +
                                            (ushort)bVar200 + (ushort)bVar192 + (ushort)bVar296 +
                                            (ushort)bVar272 + (ushort)bVar248 + (ushort)bVar236 +
                                            (ushort)bVar352 + (ushort)bVar344 + (ushort)bVar336 +
                                           (ushort)bVar320) >> 4),
                            CONCAT16((char)((ushort)((ushort)bVar102 + (ushort)bVar126 +
                                                     (ushort)bVar173 + (ushort)bVar150 +
                                                     (ushort)bVar224 + (ushort)bVar210 +
                                                     (ushort)bVar199 + (ushort)bVar191 +
                                                     (ushort)bVar294 + (ushort)bVar270 +
                                                     (ushort)bVar246 + (ushort)bVar235 +
                                                     (ushort)bVar351 + (ushort)bVar343 +
                                                     (ushort)bVar335 + (ushort)bVar318) >> 4),
                                     CONCAT15((char)((ushort)((ushort)bVar100 + (ushort)bVar124 +
                                                              (ushort)bVar171 + (ushort)bVar148 +
                                                              (ushort)bVar223 + (ushort)bVar209 +
                                                              (ushort)bVar198 + (ushort)bVar190 +
                                                              (ushort)bVar292 + (ushort)bVar268 +
                                                              (ushort)bVar244 + (ushort)bVar234 +
                                                              (ushort)bVar350 + (ushort)bVar342 +
                                                              (ushort)bVar334 + (ushort)bVar316) >>
                                                    4),CONCAT14((char)((ushort)((ushort)bVar98 +
                                                                                (ushort)bVar122 +
                                                                                (ushort)bVar169 +
                                                                                (ushort)bVar146 +
                                                                                (ushort)bVar222 +
                                                                                (ushort)bVar208 +
                                                                                (ushort)bVar197 +
                                                                                (ushort)bVar189 +
                                                                                (ushort)bVar290 +
                                                                                (ushort)bVar266 +
                                                                                (ushort)bVar242 +
                                                                                (ushort)bVar233 +
                                                                                (ushort)bVar349 +
                                                                                (ushort)bVar341 +
                                                                                (ushort)bVar333 +
                                                                               (ushort)bVar314) >> 4
                                                                      ),CONCAT13((char)((ushort)((
                                                  ushort)bVar96 + (ushort)bVar120 + (ushort)bVar167
                                                  + (ushort)bVar144 + (ushort)bVar221 +
                                                  (ushort)bVar207 + (ushort)bVar196 +
                                                  (ushort)bVar188 + (ushort)bVar288 +
                                                  (ushort)bVar264 + (ushort)bVar240 +
                                                  (ushort)bVar232 + (ushort)bVar348 +
                                                  (ushort)bVar340 + (ushort)bVar332 +
                                                  (ushort)bVar312) >> 4),
                                                  CONCAT12((char)((ushort)((ushort)bVar94 +
                                                                           (ushort)bVar118 +
                                                                           (ushort)bVar165 +
                                                                           (ushort)bVar142 +
                                                                           (ushort)bVar220 +
                                                                           (ushort)bVar206 +
                                                                           (ushort)bVar195 +
                                                                           (ushort)bVar187 +
                                                                           (ushort)bVar286 +
                                                                           (ushort)bVar262 +
                                                                           (ushort)bVar239 +
                                                                           (ushort)bVar231 +
                                                                           (ushort)bVar347 +
                                                                           (ushort)bVar339 +
                                                                           (ushort)bVar331 +
                                                                          (ushort)bVar310) >> 4),
                                                           CONCAT11((char)((ushort)((ushort)bVar92 +
                                                                                    (ushort)bVar116
                                                                                    + (ushort)
                                                  bVar163 + (ushort)bVar140 + (ushort)bVar219 +
                                                  (ushort)bVar205 + (ushort)bVar194 +
                                                  (ushort)bVar186 + (ushort)bVar284 +
                                                  (ushort)bVar260 + (ushort)bVar238 +
                                                  (ushort)bVar230 + (ushort)bVar346 +
                                                  (ushort)bVar338 + (ushort)bVar330 +
                                                  (ushort)bVar308) >> 4),
                                                  (char)((ushort)((ushort)bVar90 + (ushort)bVar114 +
                                                                  (ushort)bVar161 + (ushort)bVar138
                                                                  + (ushort)bVar215 +
                                                                  (ushort)bVar201 + (ushort)bVar193
                                                                  + (ushort)bVar185 +
                                                                  (ushort)bVar282 + (ushort)bVar258
                                                                  + (ushort)bVar237 +
                                                                  (ushort)bVar229 + (ushort)bVar345
                                                                  + (ushort)bVar337 +
                                                                  (ushort)bVar329 + (ushort)bVar306)
                                                        >> 4))))))));
              uVar82 = uVar82 + 0x10;
              lVar76 = lVar76 + 0x40;
            } while (uVar82 < uVar81 - 0xf);
          }
          if (6 < uVar81) {
            for (; uVar82 < uVar81 - 7; uVar82 = uVar82 + 8) {
              pbVar77 = (byte *)(param_3 + lVar76);
              Hint_Prefetch(pbVar77 + 0x140,0,0,0);
              pbVar74 = (byte *)(param_4 + lVar76);
              Hint_Prefetch(pbVar74 + 0x140,0,0,0);
              pbVar8 = (byte *)(lVar84 + lVar76);
              Hint_Prefetch(pbVar8 + 0x140,0,0,0);
              pbVar9 = (byte *)(lVar83 + lVar76);
              Hint_Prefetch(pbVar9 + 0x140,0,0,0);
              *(ulong *)(param_5 + uVar82) =
                   CONCAT17((char)((ushort)((ushort)pbVar77[0x1c] + (ushort)pbVar77[0x1d] +
                                            (ushort)pbVar77[0x1f] + (ushort)pbVar77[0x1e] +
                                            (ushort)pbVar74[0x1f] + (ushort)pbVar74[0x1e] +
                                            (ushort)pbVar74[0x1d] + (ushort)pbVar74[0x1c] +
                                            (ushort)pbVar8[0x1f] + (ushort)pbVar8[0x1e] +
                                            (ushort)pbVar8[0x1d] + (ushort)pbVar8[0x1c] +
                                            (ushort)pbVar9[0x1f] + (ushort)pbVar9[0x1e] +
                                            (ushort)pbVar9[0x1d] + (ushort)pbVar9[0x1c]) >> 4),
                            CONCAT16((char)((ushort)((ushort)pbVar77[0x18] + (ushort)pbVar77[0x19] +
                                                     (ushort)pbVar77[0x1b] + (ushort)pbVar77[0x1a] +
                                                     (ushort)pbVar74[0x1b] + (ushort)pbVar74[0x1a] +
                                                     (ushort)pbVar74[0x19] + (ushort)pbVar74[0x18] +
                                                     (ushort)pbVar8[0x1b] + (ushort)pbVar8[0x1a] +
                                                     (ushort)pbVar8[0x19] + (ushort)pbVar8[0x18] +
                                                     (ushort)pbVar9[0x1b] + (ushort)pbVar9[0x1a] +
                                                     (ushort)pbVar9[0x19] + (ushort)pbVar9[0x18]) >>
                                           4),CONCAT15((char)((ushort)((ushort)pbVar77[0x14] +
                                                                       (ushort)pbVar77[0x15] +
                                                                       (ushort)pbVar77[0x17] +
                                                                       (ushort)pbVar77[0x16] +
                                                                       (ushort)pbVar74[0x17] +
                                                                       (ushort)pbVar74[0x16] +
                                                                       (ushort)pbVar74[0x15] +
                                                                       (ushort)pbVar74[0x14] +
                                                                       (ushort)pbVar8[0x17] +
                                                                       (ushort)pbVar8[0x16] +
                                                                       (ushort)pbVar8[0x15] +
                                                                       (ushort)pbVar8[0x14] +
                                                                       (ushort)pbVar9[0x17] +
                                                                       (ushort)pbVar9[0x16] +
                                                                       (ushort)pbVar9[0x15] +
                                                                      (ushort)pbVar9[0x14]) >> 4),
                                                       CONCAT14((char)((ushort)((ushort)pbVar77[0x10
                                                  ] + (ushort)pbVar77[0x11] + (ushort)pbVar77[0x13]
                                                  + (ushort)pbVar77[0x12] + (ushort)pbVar74[0x13] +
                                                  (ushort)pbVar74[0x12] + (ushort)pbVar74[0x11] +
                                                  (ushort)pbVar74[0x10] + (ushort)pbVar8[0x13] +
                                                  (ushort)pbVar8[0x12] + (ushort)pbVar8[0x11] +
                                                  (ushort)pbVar8[0x10] + (ushort)pbVar9[0x13] +
                                                  (ushort)pbVar9[0x12] + (ushort)pbVar9[0x11] +
                                                  (ushort)pbVar9[0x10]) >> 4),
                                                  CONCAT13((char)((ushort)((ushort)pbVar77[0xc] +
                                                                           (ushort)pbVar77[0xd] +
                                                                           (ushort)pbVar77[0xf] +
                                                                           (ushort)pbVar77[0xe] +
                                                                           (ushort)pbVar74[0xf] +
                                                                           (ushort)pbVar74[0xe] +
                                                                           (ushort)pbVar74[0xd] +
                                                                           (ushort)pbVar74[0xc] +
                                                                           (ushort)pbVar8[0xf] +
                                                                           (ushort)pbVar8[0xe] +
                                                                           (ushort)pbVar8[0xd] +
                                                                           (ushort)pbVar8[0xc] +
                                                                           (ushort)pbVar9[0xf] +
                                                                           (ushort)pbVar9[0xe] +
                                                                           (ushort)pbVar9[0xd] +
                                                                          (ushort)pbVar9[0xc]) >> 4)
                                                           ,CONCAT12((char)((ushort)((ushort)pbVar77
                                                  [8] + (ushort)pbVar77[9] + (ushort)pbVar77[0xb] +
                                                  (ushort)pbVar77[10] + (ushort)pbVar74[0xb] +
                                                  (ushort)pbVar74[10] + (ushort)pbVar74[9] +
                                                  (ushort)pbVar74[8] + (ushort)pbVar8[0xb] +
                                                  (ushort)pbVar8[10] + (ushort)pbVar8[9] +
                                                  (ushort)pbVar8[8] + (ushort)pbVar9[0xb] +
                                                  (ushort)pbVar9[10] + (ushort)pbVar9[9] +
                                                  (ushort)pbVar9[8]) >> 4),
                                                  CONCAT11((char)((ushort)((ushort)pbVar77[4] +
                                                                           (ushort)pbVar77[5] +
                                                                           (ushort)pbVar77[7] +
                                                                           (ushort)pbVar77[6] +
                                                                           (ushort)pbVar74[7] +
                                                                           (ushort)pbVar74[6] +
                                                                           (ushort)pbVar74[5] +
                                                                           (ushort)pbVar74[4] +
                                                                           (ushort)pbVar8[7] +
                                                                           (ushort)pbVar8[6] +
                                                                           (ushort)pbVar8[5] +
                                                                           (ushort)pbVar8[4] +
                                                                           (ushort)pbVar9[7] +
                                                                           (ushort)pbVar9[6] +
                                                                           (ushort)pbVar9[5] +
                                                                          (ushort)pbVar9[4]) >> 4),
                                                           (char)((ushort)((ushort)*pbVar77 +
                                                                           (ushort)pbVar77[1] +
                                                                           (ushort)pbVar77[3] +
                                                                           (ushort)pbVar77[2] +
                                                                           (ushort)pbVar74[3] +
                                                                           (ushort)pbVar74[2] +
                                                                           (ushort)pbVar74[1] +
                                                                           (ushort)*pbVar74 +
                                                                           (ushort)pbVar8[3] +
                                                                           (ushort)pbVar8[2] +
                                                                           (ushort)pbVar8[1] +
                                                                           (ushort)*pbVar8 +
                                                                           (ushort)pbVar9[3] +
                                                                           (ushort)pbVar9[2] +
                                                                           (ushort)pbVar9[1] +
                                                                          (ushort)*pbVar9) >> 4)))))
                                                  )));
              lVar76 = lVar76 + 0x20;
            }
          }
          if (uVar82 < *param_2) {
            lVar75 = 0;
            do {
              uVar16 = *(undefined4 *)(param_4 + lVar76 + lVar75 * 4);
              uVar17 = *(undefined4 *)(lVar84 + lVar76 + lVar75 * 4);
              uVar19 = *(undefined4 *)(lVar83 + lVar76 + lVar75 * 4);
              auVar13[4] = (char)uVar16;
              auVar13._0_4_ = *(undefined4 *)(param_3 + lVar76 + lVar75 * 4);
              auVar13[5] = (char)((uint)uVar16 >> 8);
              auVar13[6] = (char)((uint)uVar16 >> 0x10);
              auVar13[7] = (char)((uint)uVar16 >> 0x18);
              auVar13[8] = (char)uVar17;
              auVar13[9] = (char)((uint)uVar17 >> 8);
              auVar13[10] = (char)((uint)uVar17 >> 0x10);
              auVar13[0xb] = (char)((uint)uVar17 >> 0x18);
              auVar13[0xc] = (char)uVar19;
              auVar13[0xd] = (char)((uint)uVar19 >> 8);
              auVar13[0xe] = (char)((uint)uVar19 >> 0x10);
              auVar13[0xf] = (char)((uint)uVar19 >> 0x18);
              uVar14 = NEON_uaddlv(auVar13,1);
              *(char *)(param_5 + uVar82 + lVar75) = (char)(uVar14 >> 4);
              lVar75 = lVar75 + 1;
            } while (uVar82 + lVar75 < *param_2);
          }
          uVar87 = uVar87 + 1;
          lVar83 = lVar83 + lVar72;
          lVar84 = lVar84 + lVar72;
          param_4 = param_4 + lVar72;
          param_3 = param_3 + lVar72;
          param_5 = param_5 + param_6;
        } while (uVar87 < param_2[1]);
      }
    }
  }
  return;
}



/* Entry: 1093695d8; end: 10936ab7b;  */

void FUN_1093695d8(float param_1,ulong *param_2,ulong *param_3,long param_4,long param_5,
                  undefined1 *param_6,long param_7,uint param_8)

{
  ulong *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long *plVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  uint5 uVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  uint3 uVar13;
  bool bVar14;
  long *plVar15;
  undefined1 *puVar16;
  undefined1 (*pauVar17) [16];
  long lVar18;
  undefined1 (*pauVar19) [16];
  ulong uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined1 *puVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  ulong uVar29;
  int *piVar30;
  long lVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  float fVar50;
  undefined1 in_q1 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined8 uVar53;
  undefined1 auVar55 [16];
  undefined8 uVar54;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar60;
  undefined8 uVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined8 uVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  float fVar70;
  undefined8 uVar71;
  float fVar91;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  float fVar90;
  float fVar92;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  float fVar93;
  undefined8 uVar94;
  float fVar99;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  float fVar98;
  float fVar100;
  undefined1 auVar97 [16];
  undefined8 uVar101;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined8 uVar107;
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  byte bVar117;
  byte bVar118;
  byte bVar119;
  byte bVar120;
  byte bVar121;
  byte bVar122;
  byte bVar123;
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  float fVar138;
  undefined8 uVar139;
  undefined8 uVar140;
  undefined8 uVar141;
  undefined8 uVar142;
  undefined8 uVar143;
  undefined8 uVar144;
  undefined8 uVar145;
  float fVar165;
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  float fVar164;
  float fVar166;
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined8 uVar167;
  undefined8 uVar168;
  undefined8 uVar169;
  undefined8 uVar170;
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined8 uVar187;
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  undefined1 auVar190 [16];
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  undefined1 auVar193 [16];
  undefined1 auVar194 [16];
  undefined1 auVar195 [16];
  undefined1 auVar196 [16];
  undefined1 auVar197 [16];
  float fVar198;
  float fVar213;
  float fVar214;
  undefined1 auVar199 [16];
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  undefined1 auVar202 [16];
  float fVar217;
  undefined1 auVar203 [16];
  undefined1 auVar204 [16];
  undefined1 auVar205 [16];
  undefined1 auVar206 [16];
  float fVar215;
  float fVar218;
  undefined1 auVar207 [16];
  undefined1 auVar208 [16];
  undefined1 auVar209 [16];
  undefined1 auVar210 [16];
  undefined1 auVar211 [16];
  float fVar216;
  float fVar219;
  undefined1 auVar212 [16];
  float fVar220;
  float fVar234;
  float fVar236;
  undefined1 auVar222 [16];
  undefined1 auVar223 [16];
  undefined1 auVar224 [16];
  float fVar238;
  undefined1 auVar225 [16];
  float fVar221;
  float fVar235;
  float fVar237;
  float fVar239;
  undefined1 auVar226 [16];
  undefined1 auVar227 [16];
  undefined1 auVar228 [16];
  undefined1 auVar229 [16];
  undefined1 auVar230 [16];
  undefined1 auVar231 [16];
  undefined1 auVar232 [16];
  undefined1 auVar233 [16];
  float fVar240;
  float fVar258;
  float fVar260;
  undefined1 auVar242 [16];
  undefined1 auVar243 [16];
  undefined1 auVar244 [16];
  undefined1 auVar245 [16];
  undefined1 auVar246 [16];
  undefined1 auVar247 [16];
  float fVar262;
  undefined1 auVar248 [16];
  undefined1 auVar249 [16];
  float fVar241;
  undefined1 auVar250 [16];
  float fVar259;
  float fVar261;
  float fVar263;
  undefined1 auVar251 [16];
  undefined1 auVar252 [16];
  undefined1 auVar253 [16];
  undefined1 auVar254 [16];
  undefined1 auVar255 [16];
  undefined1 auVar256 [16];
  undefined1 auVar257 [16];
  float fVar264;
  float fVar265;
  undefined8 uVar266;
  float fVar287;
  undefined1 auVar268 [16];
  undefined1 auVar269 [16];
  undefined1 auVar270 [16];
  undefined1 auVar271 [16];
  undefined1 auVar272 [16];
  undefined1 auVar273 [16];
  float fVar285;
  float fVar289;
  undefined1 auVar274 [16];
  undefined1 auVar275 [16];
  undefined1 auVar276 [16];
  undefined1 auVar277 [16];
  undefined1 auVar278 [16];
  undefined8 uVar267;
  undefined1 auVar279 [16];
  undefined1 auVar280 [16];
  undefined1 auVar281 [16];
  undefined1 auVar282 [16];
  undefined1 auVar283 [16];
  float fVar286;
  float fVar288;
  float fVar290;
  undefined1 auVar284 [16];
  float fVar291;
  undefined8 uVar293;
  float fVar309;
  undefined1 auVar295 [16];
  undefined1 auVar296 [16];
  undefined1 auVar297 [16];
  undefined1 auVar298 [16];
  float fVar307;
  float fVar311;
  undefined1 auVar299 [16];
  undefined8 uVar294;
  undefined1 auVar300 [16];
  undefined1 auVar301 [16];
  undefined1 auVar302 [16];
  undefined1 auVar303 [16];
  float fVar292;
  undefined1 auVar304 [16];
  float fVar308;
  float fVar310;
  float fVar312;
  undefined1 auVar305 [16];
  undefined1 auVar306 [16];
  undefined8 uVar313;
  undefined1 auVar314 [16];
  undefined1 auVar315 [16];
  undefined1 auVar316 [16];
  undefined1 auVar317 [16];
  undefined1 auVar318 [16];
  undefined1 auVar319 [16];
  undefined1 auVar320 [16];
  undefined8 uVar321;
  undefined1 auVar322 [16];
  undefined1 auVar323 [16];
  undefined1 auVar324 [16];
  undefined1 auVar325 [16];
  undefined1 auVar326 [16];
  undefined1 auVar327 [16];
  undefined1 auVar328 [16];
  undefined1 auVar329 [16];
  undefined1 auVar330 [16];
  undefined1 auVar331 [16];
  undefined1 auVar332 [16];
  float fVar333;
  undefined8 uVar334;
  float fVar348;
  undefined1 auVar335 [16];
  undefined1 auVar336 [16];
  float fVar347;
  float fVar349;
  undefined1 auVar337 [16];
  undefined1 auVar338 [16];
  undefined1 auVar339 [16];
  undefined1 auVar340 [16];
  undefined1 auVar341 [16];
  undefined1 auVar342 [16];
  undefined1 auVar343 [16];
  undefined1 auVar344 [16];
  undefined1 auVar345 [16];
  undefined1 auVar346 [16];
  undefined8 uVar350;
  undefined1 auVar351 [16];
  undefined1 auVar352 [16];
  undefined1 auVar353 [16];
  undefined1 auVar354 [16];
  undefined1 auVar355 [16];
  float fVar356;
  float fVar357;
  undefined8 uVar358;
  float fVar376;
  float fVar377;
  float fVar378;
  undefined1 auVar359 [16];
  undefined1 auVar360 [16];
  undefined1 auVar361 [16];
  undefined1 auVar362 [16];
  undefined1 auVar363 [16];
  undefined1 auVar364 [16];
  float fVar375;
  float fVar379;
  undefined1 auVar365 [16];
  undefined1 auVar366 [16];
  undefined1 auVar367 [16];
  undefined1 auVar368 [16];
  undefined1 auVar369 [16];
  undefined1 auVar370 [16];
  undefined1 auVar371 [16];
  undefined1 auVar372 [16];
  undefined1 auVar373 [16];
  undefined1 auVar374 [16];
  float fVar380;
  float fVar381;
  undefined8 uVar382;
  undefined8 uVar383;
  undefined8 uVar384;
  float fVar389;
  float fVar390;
  undefined1 auVar385 [16];
  undefined1 auVar386 [16];
  undefined1 auVar387 [16];
  undefined1 auVar388 [16];
  float fVar391;
  undefined1 *puStack_2f8;
  undefined1 *puStack_2f0;
  long lStack_240;
  long lStack_238;
  ulong uStack_228;
  ulong uStack_220;
  long lStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  float afStack_1f0 [16];
  long alStack_1b0 [8];
  undefined4 auStack_170 [16];
  long alStack_130 [8];
  long alStack_f0 [8];
  long lStack_b0;
  
  bVar14 = false;
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((0.0 < param_1) && (fVar60 = in_q1._0_4_, 0.0 < fVar60)) {
    uVar25 = *param_3;
    uVar26 = *param_2;
    if ((double)param_1 * ((double)uVar25 + -0.5) + -0.5 < (double)uVar26) {
      uVar28 = param_3[1];
      dVar10 = (double)NEON_ucvtf(param_2[1]);
      if ((((double)fVar60 * ((double)uVar28 + -0.5) + -0.5 < dVar10) &&
          ((double)uVar26 <= (double)param_1 * ((double)uVar25 + 0.5) + 0.5)) &&
         (dVar10 <= (double)fVar60 * ((double)uVar28 + 0.5) + 0.5)) {
        bVar14 = param_1 <= 2.0 &&
                 (fVar60 <= 2.0 &&
                 ((((uVar26 >= 0x10 && 7 < uVar28) && 6 < uVar25) &&
                  ((uVar26 < 0x10 || uVar28 < 8) || uVar25 != 7)) &&
                 (param_8 == 4 || (param_8 & 0xfffffffd) == 1)));
        goto LAB_1093696c4;
      }
    }
    bVar14 = false;
  }
LAB_1093696c4:
  FUN_109365924(bVar14);
  FUN_109367514(&uStack_228,param_3[1] * 3 + 1);
  plVar15 = (long *)param_3[1];
  FUN_109367d10(&lStack_240);
  if (param_3[1] == 0) {
    uVar25 = 0;
  }
  else {
    uVar26 = 0;
    do {
      fVar60 = in_q1._0_4_ * 0.5 + -0.5 + in_q1._0_4_ * (float)uVar26;
      uVar28 = (ulong)fVar60;
      puVar1 = (ulong *)(uStack_228 + uVar26 * 8);
      *puVar1 = uVar28 & ((long)uVar28 >> 0x3f ^ 0xffffffffffffffffU);
      uVar25 = param_2[1] - 1;
      if ((long)(uVar28 + 1) < (long)uVar25) {
        uVar25 = uVar28 + 1;
      }
      puVar1[param_3[1]] = uVar25;
      *(float *)(lStack_240 + uVar26 * 4) = (float)(long)(uVar28 + 1) - fVar60;
      uVar26 = uVar26 + 1;
      uVar25 = param_3[1];
    } while (uVar26 < uVar25);
  }
  fVar60 = param_1 * 0.5 + -0.5;
  uVar26 = *param_3;
  lVar27 = param_5 * 2;
  if (uVar26 < 0x10) {
    uVar29 = 0;
    uVar20 = uVar25;
    uVar35 = uVar25;
  }
  else {
    lVar31 = 0;
    puVar16 = param_6;
    uVar28 = 0x10;
    uVar34 = uVar25;
    uVar33 = uVar25;
    uVar32 = uVar25;
    puStack_2f8 = param_6;
    puStack_2f0 = param_6;
    do {
      uVar29 = uVar28;
      lVar18 = 0;
      uVar26 = *param_2;
      do {
        fVar50 = fVar60 + param_1 * (float)(ulong)(lVar31 + lVar18);
        lVar23 = (long)fVar50;
        alStack_130[lVar18] = lVar23;
        lVar21 = lVar23 + 1;
        alStack_1b0[lVar18] = lVar21;
        afStack_1f0[lVar18] = (float)lVar21 - fVar50;
        if (lVar23 < 0) {
          alStack_130[lVar18] = 0;
        }
        if ((long)uVar26 <= lVar21) {
          alStack_1b0[lVar18] = uVar26 - 1;
        }
        lVar18 = lVar18 + 1;
      } while (lVar18 != 0x10);
      lVar21 = 0;
      lVar18 = 0;
      lVar22 = uVar26 - 0x10;
      lVar23 = lVar22;
      if (alStack_130[0] <= lVar22) {
        lVar23 = alStack_130[0];
      }
      if (alStack_f0[0] <= lVar22) {
        lVar22 = alStack_f0[0];
      }
      do {
        *(char *)((long)&uStack_200 + lVar18) =
             (char)*(undefined4 *)((long)alStack_130 + lVar21) - (char)lVar23;
        plVar15 = (long *)((long)&lStack_210 + lVar18);
        *(char *)plVar15 = (char)*(undefined4 *)((long)alStack_1b0 + lVar21) - (char)lVar23;
        *(char *)((long)afStack_1f0 + lVar18 + -8) =
             (char)*(undefined4 *)((long)alStack_f0 + lVar21) - (char)lVar22;
        *(char *)((long)&uStack_208 + lVar18) =
             (char)*(undefined4 *)((long)auStack_170 + lVar21) - (char)lVar22;
        lVar18 = lVar18 + 1;
        lVar21 = lVar21 + 8;
      } while (lVar18 != 8);
      fVar50 = afStack_1f0[0xc];
      fVar70 = afStack_1f0[0xd];
      fVar90 = afStack_1f0[0xe];
      fVar91 = afStack_1f0[0xf];
      if (param_8 == 1) {
        if (uVar34 == 0) {
          uVar33 = 0;
LAB_10936a3bc:
          uVar32 = 0;
        }
        else {
          uVar26 = 0;
          puVar24 = puStack_2f0;
          do {
            fVar92 = *(float *)(lStack_240 + uVar26 * 4);
            plVar5 = (long *)(uStack_228 + uVar26 * 8);
            plVar15 = (long *)(param_4 + *plVar5 * param_5);
            lVar18 = param_4 + plVar5[uVar34] * param_5;
            Hint_Prefetch(((undefined1 (*) [16])((long)plVar15 + lVar23))[0x14] + lVar27,0,0,0);
            pauVar17 = (undefined1 (*) [16])(lVar18 + lVar23);
            Hint_Prefetch(pauVar17[0x14] + lVar27,0,0,0);
            auVar75 = *(undefined1 (*) [16])((long)plVar15 + lVar23);
            auVar96 = *pauVar17;
            uVar267 = a64_TBL(ZEXT816(0),auVar75,uStack_200);
            uVar71 = a64_TBL(ZEXT816(0),auVar75,lStack_210);
            uVar294 = a64_TBL(ZEXT816(0),auVar96,uStack_200);
            uVar94 = a64_TBL(ZEXT816(0),auVar96,lStack_210);
            bVar36 = (byte)((ulong)uVar71 >> 8);
            bVar38 = (byte)((ulong)uVar71 >> 0x10);
            bVar40 = (byte)((ulong)uVar71 >> 0x18);
            bVar42 = (byte)((ulong)uVar71 >> 0x20);
            bVar44 = (byte)((ulong)uVar71 >> 0x28);
            bVar46 = (byte)((ulong)uVar71 >> 0x30);
            bVar48 = (byte)((ulong)uVar71 >> 0x38);
            bVar37 = (byte)((ulong)uVar94 >> 8);
            bVar39 = (byte)((ulong)uVar94 >> 0x10);
            bVar41 = (byte)((ulong)uVar94 >> 0x18);
            bVar43 = (byte)((ulong)uVar94 >> 0x20);
            bVar45 = (byte)((ulong)uVar94 >> 0x28);
            bVar47 = (byte)((ulong)uVar94 >> 0x30);
            bVar49 = (byte)((ulong)uVar94 >> 0x38);
            auVar96._6_2_ = 0;
            auVar96._0_6_ =
                 (uint6)CONCAT14(bVar36,(uint)CONCAT12(bVar36,(ushort)(byte)uVar71)) &
                 0xffff0000ffff;
            auVar96[8] = bVar38;
            auVar96._9_3_ = 0;
            auVar96[0xc] = bVar40;
            auVar96._13_3_ = 0;
            auVar211 = NEON_ucvtf(auVar96,4);
            auVar256._1_3_ = 0;
            auVar256[0] = bVar42;
            auVar256[4] = bVar44;
            auVar256._5_3_ = 0;
            auVar256[8] = bVar46;
            auVar256._9_3_ = 0;
            auVar256[0xc] = bVar48;
            auVar256._13_3_ = 0;
            auVar256 = NEON_ucvtf(auVar256,4);
            auVar301._6_2_ = 0;
            auVar301._0_6_ =
                 (uint6)CONCAT14(bVar37,(uint)CONCAT12(bVar37,(ushort)(byte)uVar94)) &
                 0xffff0000ffff;
            auVar301[8] = bVar39;
            auVar301._9_3_ = 0;
            auVar301[0xc] = bVar41;
            auVar301._13_3_ = 0;
            auVar326 = NEON_ucvtf(auVar301,4);
            auVar317._1_3_ = 0;
            auVar317[0] = bVar43;
            auVar317[4] = bVar45;
            auVar317._5_3_ = 0;
            auVar317[8] = bVar47;
            auVar317._9_3_ = 0;
            auVar317[0xc] = bVar49;
            auVar317._13_3_ = 0;
            auVar388 = NEON_ucvtf(auVar317,4);
            auVar327._0_4_ = (int)(short)((ushort)(byte)uVar267 - (ushort)(byte)uVar71);
            auVar327._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 8) - (ushort)bVar36);
            auVar327._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x10) - (ushort)bVar38);
            auVar327._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x18) - (ushort)bVar40);
            auVar317 = NEON_scvtf(auVar327,4);
            auVar75._0_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x20) - (ushort)bVar42);
            auVar75._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x28) - (ushort)bVar44);
            auVar75._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x30) - (ushort)bVar46);
            auVar75._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x38) - (ushort)bVar48);
            auVar96 = NEON_scvtf(auVar75,4);
            auVar280._0_4_ = (int)(short)((ushort)(byte)uVar294 - (ushort)(byte)uVar94);
            auVar280._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar294 >> 8) - (ushort)bVar37);
            auVar280._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar294 >> 0x10) - (ushort)bVar39);
            auVar280._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar294 >> 0x18) - (ushort)bVar41);
            auVar75 = NEON_scvtf(auVar280,4);
            fVar93 = auVar326._0_4_ + afStack_1f0[0] * auVar75._0_4_;
            fVar98 = auVar326._4_4_ + afStack_1f0[1] * auVar75._4_4_;
            fVar99 = auVar326._8_4_ + afStack_1f0[2] * auVar75._8_4_;
            fVar100 = auVar326._12_4_ + afStack_1f0[3] * auVar75._12_4_;
            auVar326._0_4_ = (int)(short)((ushort)(byte)((ulong)uVar294 >> 0x20) - (ushort)bVar43);
            auVar326._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar294 >> 0x28) - (ushort)bVar45);
            auVar326._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar294 >> 0x30) - (ushort)bVar47);
            auVar326._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar294 >> 0x38) - (ushort)bVar49);
            auVar75 = NEON_scvtf(auVar326,4);
            fVar138 = auVar388._0_4_ + afStack_1f0[4] * auVar75._0_4_;
            fVar164 = auVar388._4_4_ + afStack_1f0[5] * auVar75._4_4_;
            fVar165 = auVar388._8_4_ + afStack_1f0[6] * auVar75._8_4_;
            fVar166 = auVar388._12_4_ + afStack_1f0[7] * auVar75._12_4_;
            auVar75 = *(undefined1 (*) [16])(lVar18 + lVar22);
            uVar267 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])((long)plVar15 + lVar22),uStack_1f8);
            uVar71 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])((long)plVar15 + lVar22),uStack_208);
            uVar294 = a64_TBL(ZEXT816(0),auVar75,uStack_1f8);
            uVar94 = a64_TBL(ZEXT816(0),auVar75,uStack_208);
            bVar36 = (byte)((ulong)uVar71 >> 8);
            bVar38 = (byte)((ulong)uVar71 >> 0x10);
            bVar40 = (byte)((ulong)uVar71 >> 0x18);
            bVar42 = (byte)((ulong)uVar71 >> 0x20);
            bVar44 = (byte)((ulong)uVar71 >> 0x28);
            bVar46 = (byte)((ulong)uVar71 >> 0x30);
            bVar48 = (byte)((ulong)uVar71 >> 0x38);
            bVar37 = (byte)((ulong)uVar94 >> 8);
            bVar39 = (byte)((ulong)uVar94 >> 0x10);
            bVar41 = (byte)((ulong)uVar94 >> 0x18);
            bVar43 = (byte)((ulong)uVar94 >> 0x20);
            bVar45 = (byte)((ulong)uVar94 >> 0x28);
            bVar47 = (byte)((ulong)uVar94 >> 0x30);
            bVar49 = (byte)((ulong)uVar94 >> 0x38);
            auVar303._6_2_ = 0;
            auVar303._0_6_ =
                 (uint6)CONCAT14(bVar36,(uint)CONCAT12(bVar36,(ushort)(byte)uVar71)) &
                 0xffff0000ffff;
            auVar303[8] = bVar38;
            auVar303._9_3_ = 0;
            auVar303[0xc] = bVar40;
            auVar303._13_3_ = 0;
            auVar326 = NEON_ucvtf(auVar303,4);
            auVar318._1_3_ = 0;
            auVar318[0] = bVar42;
            auVar318[4] = bVar44;
            auVar318._5_3_ = 0;
            auVar318[8] = bVar46;
            auVar318._9_3_ = 0;
            auVar318[0xc] = bVar48;
            auVar318._13_3_ = 0;
            auVar301 = NEON_ucvtf(auVar318,4);
            auVar329._6_2_ = 0;
            auVar329._0_6_ =
                 (uint6)CONCAT14(bVar37,(uint)CONCAT12(bVar37,(ushort)(byte)uVar94)) &
                 0xffff0000ffff;
            auVar329[8] = bVar39;
            auVar329._9_3_ = 0;
            auVar329[0xc] = bVar41;
            auVar329._13_3_ = 0;
            auVar183 = NEON_ucvtf(auVar329,4);
            auVar341._1_3_ = 0;
            auVar341[0] = bVar43;
            auVar341[4] = bVar45;
            auVar341._5_3_ = 0;
            auVar341[8] = bVar47;
            auVar341._9_3_ = 0;
            auVar341[0xc] = bVar49;
            auVar341._13_3_ = 0;
            auVar303 = NEON_ucvtf(auVar341,4);
            auVar345._0_4_ = (int)(short)((ushort)(byte)uVar267 - (ushort)(byte)uVar71);
            auVar345._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 8) - (ushort)bVar36);
            auVar345._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x10) - (ushort)bVar38);
            auVar345._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x18) - (ushort)bVar40);
            auVar318 = NEON_scvtf(auVar345,4);
            auVar388._0_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x20) - (ushort)bVar42);
            auVar388._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x28) - (ushort)bVar44);
            auVar388._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x30) - (ushort)bVar46);
            auVar388._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x38) - (ushort)bVar48);
            auVar75 = NEON_scvtf(auVar388,4);
            auVar160._0_4_ = (int)(short)((ushort)(byte)uVar294 - (ushort)(byte)uVar94);
            auVar160._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar294 >> 8) - (ushort)bVar37);
            auVar160._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar294 >> 0x10) - (ushort)bVar39);
            auVar160._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar294 >> 0x18) - (ushort)bVar41);
            auVar280 = NEON_scvtf(auVar160,4);
            fVar198 = auVar183._0_4_ + afStack_1f0[8] * auVar280._0_4_;
            fVar213 = auVar183._4_4_ + afStack_1f0[9] * auVar280._4_4_;
            fVar216 = auVar183._8_4_ + afStack_1f0[10] * auVar280._8_4_;
            fVar219 = auVar183._12_4_ + afStack_1f0[0xb] * auVar280._12_4_;
            auVar183._0_4_ = (int)(short)((ushort)(byte)((ulong)uVar294 >> 0x20) - (ushort)bVar43);
            auVar183._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar294 >> 0x28) - (ushort)bVar45);
            auVar183._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar294 >> 0x30) - (ushort)bVar47);
            auVar183._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar294 >> 0x38) - (ushort)bVar49);
            auVar280 = NEON_scvtf(auVar183,4);
            fVar265 = auVar303._0_4_ + fVar50 * auVar280._0_4_;
            fVar286 = auVar303._4_4_ + fVar70 * auVar280._4_4_;
            fVar288 = auVar303._8_4_ + fVar90 * auVar280._8_4_;
            fVar290 = auVar303._12_4_ + fVar91 * auVar280._12_4_;
            puVar24[8] = (char)(int)(fVar198 +
                                    ((auVar326._0_4_ + afStack_1f0[8] * auVar318._0_4_) - fVar198) *
                                    fVar92);
            puVar24[9] = (char)(int)(fVar213 +
                                    ((auVar326._4_4_ + afStack_1f0[9] * auVar318._4_4_) - fVar213) *
                                    fVar92);
            puVar24[10] = (char)(int)(fVar216 +
                                     ((auVar326._8_4_ + afStack_1f0[10] * auVar318._8_4_) - fVar216)
                                     * fVar92);
            puVar24[0xb] = (char)(int)(fVar219 +
                                      ((auVar326._12_4_ + afStack_1f0[0xb] * auVar318._12_4_) -
                                      fVar219) * fVar92);
            puVar24[0xc] = (char)(int)(fVar265 +
                                      ((auVar301._0_4_ + fVar50 * auVar75._0_4_) - fVar265) * fVar92
                                      );
            puVar24[0xd] = (char)(int)(fVar286 +
                                      ((auVar301._4_4_ + fVar70 * auVar75._4_4_) - fVar286) * fVar92
                                      );
            puVar24[0xe] = (char)(int)(fVar288 +
                                      ((auVar301._8_4_ + fVar90 * auVar75._8_4_) - fVar288) * fVar92
                                      );
            puVar24[0xf] = (char)(int)(fVar290 +
                                      ((auVar301._12_4_ + fVar91 * auVar75._12_4_) - fVar290) *
                                      fVar92);
            *puVar24 = (char)(int)(fVar93 + ((auVar211._0_4_ + afStack_1f0[0] * auVar317._0_4_) -
                                            fVar93) * fVar92);
            puVar24[1] = (char)(int)(fVar98 + ((auVar211._4_4_ + afStack_1f0[1] * auVar317._4_4_) -
                                              fVar98) * fVar92);
            puVar24[2] = (char)(int)(fVar99 + ((auVar211._8_4_ + afStack_1f0[2] * auVar317._8_4_) -
                                              fVar99) * fVar92);
            puVar24[3] = (char)(int)(fVar100 +
                                    ((auVar211._12_4_ + afStack_1f0[3] * auVar317._12_4_) - fVar100)
                                    * fVar92);
            puVar24[4] = (char)(int)(fVar138 +
                                    ((auVar256._0_4_ + afStack_1f0[4] * auVar96._0_4_) - fVar138) *
                                    fVar92);
            puVar24[5] = (char)(int)(fVar164 +
                                    ((auVar256._4_4_ + afStack_1f0[5] * auVar96._4_4_) - fVar164) *
                                    fVar92);
            puVar24[6] = (char)(int)(fVar165 +
                                    ((auVar256._8_4_ + afStack_1f0[6] * auVar96._8_4_) - fVar165) *
                                    fVar92);
            puVar24[7] = (char)(int)(fVar166 +
                                    ((auVar256._12_4_ + afStack_1f0[7] * auVar96._12_4_) - fVar166)
                                    * fVar92);
            uVar26 = uVar26 + 1;
            puVar24 = puVar24 + param_7;
            uVar34 = param_3[1];
            uVar25 = uVar34;
            uVar33 = uVar34;
            uVar32 = uVar34;
          } while (uVar26 < uVar34);
        }
      }
      else if (param_8 == 3) {
        if (uVar33 == 0) goto LAB_10936a3bc;
        uVar26 = 0;
        puVar24 = puStack_2f8;
        do {
          fVar219 = *(float *)(lStack_240 + uVar26 * 4);
          plVar15 = (long *)(uStack_228 + uVar26 * 8);
          lVar18 = param_4 + *plVar15 * param_5;
          lVar21 = param_4 + plVar15[uVar33] * param_5;
          Hint_Prefetch(lVar18 + lVar23 + lVar27 + 0x140,0,0,0);
          puVar2 = (undefined1 *)(lVar18 + lVar23 * 3);
          puVar3 = (undefined1 *)(lVar21 + lVar23 * 3);
          plVar15 = (long *)(lVar18 + lVar22 * 3);
          puVar4 = (undefined1 *)(lVar21 + lVar22 * 3);
          Hint_Prefetch(lVar21 + lVar23 + lVar27 + 0x140,0,0,0);
          auVar366[0] = *puVar2;
          auVar109[0] = puVar2[1];
          auVar116[0] = puVar2[2];
          auVar366[1] = puVar2[3];
          auVar109[1] = puVar2[4];
          auVar116[1] = puVar2[5];
          auVar366[2] = puVar2[6];
          auVar109[2] = puVar2[7];
          auVar116[2] = puVar2[8];
          auVar366[3] = puVar2[9];
          auVar109[3] = puVar2[10];
          auVar116[3] = puVar2[0xb];
          auVar366[4] = puVar2[0xc];
          auVar109[4] = puVar2[0xd];
          auVar116[4] = puVar2[0xe];
          auVar366[5] = puVar2[0xf];
          auVar109[5] = puVar2[0x10];
          auVar116[5] = puVar2[0x11];
          auVar366[6] = puVar2[0x12];
          auVar109[6] = puVar2[0x13];
          auVar116[6] = puVar2[0x14];
          auVar366[7] = puVar2[0x15];
          auVar109[7] = puVar2[0x16];
          auVar116[7] = puVar2[0x17];
          auVar366[8] = puVar2[0x18];
          auVar109[8] = puVar2[0x19];
          auVar116[8] = puVar2[0x1a];
          auVar366[9] = puVar2[0x1b];
          auVar109[9] = puVar2[0x1c];
          auVar116[9] = puVar2[0x1d];
          auVar366[10] = puVar2[0x1e];
          auVar109[10] = puVar2[0x1f];
          auVar116[10] = puVar2[0x20];
          auVar366[0xb] = puVar2[0x21];
          auVar109[0xb] = puVar2[0x22];
          auVar116[0xb] = puVar2[0x23];
          auVar366[0xc] = puVar2[0x24];
          auVar109[0xc] = puVar2[0x25];
          auVar116[0xc] = puVar2[0x26];
          auVar366[0xd] = puVar2[0x27];
          auVar109[0xd] = puVar2[0x28];
          auVar116[0xd] = puVar2[0x29];
          auVar366[0xe] = puVar2[0x2a];
          auVar109[0xe] = puVar2[0x2b];
          auVar116[0xe] = puVar2[0x2c];
          auVar366[0xf] = puVar2[0x2d];
          auVar109[0xf] = puVar2[0x2e];
          auVar116[0xf] = puVar2[0x2f];
          auVar299[0] = *puVar3;
          auVar316[0] = puVar3[1];
          auVar323[0] = puVar3[2];
          auVar299[1] = puVar3[3];
          auVar316[1] = puVar3[4];
          auVar323[1] = puVar3[5];
          auVar299[2] = puVar3[6];
          auVar316[2] = puVar3[7];
          auVar323[2] = puVar3[8];
          auVar299[3] = puVar3[9];
          auVar316[3] = puVar3[10];
          auVar323[3] = puVar3[0xb];
          auVar299[4] = puVar3[0xc];
          auVar316[4] = puVar3[0xd];
          auVar323[4] = puVar3[0xe];
          auVar299[5] = puVar3[0xf];
          auVar316[5] = puVar3[0x10];
          auVar323[5] = puVar3[0x11];
          auVar299[6] = puVar3[0x12];
          auVar316[6] = puVar3[0x13];
          auVar323[6] = puVar3[0x14];
          auVar299[7] = puVar3[0x15];
          auVar316[7] = puVar3[0x16];
          auVar323[7] = puVar3[0x17];
          auVar299[8] = puVar3[0x18];
          auVar316[8] = puVar3[0x19];
          auVar323[8] = puVar3[0x1a];
          auVar299[9] = puVar3[0x1b];
          auVar316[9] = puVar3[0x1c];
          auVar323[9] = puVar3[0x1d];
          auVar299[10] = puVar3[0x1e];
          auVar316[10] = puVar3[0x1f];
          auVar323[10] = puVar3[0x20];
          auVar299[0xb] = puVar3[0x21];
          auVar316[0xb] = puVar3[0x22];
          auVar323[0xb] = puVar3[0x23];
          auVar299[0xc] = puVar3[0x24];
          auVar316[0xc] = puVar3[0x25];
          auVar323[0xc] = puVar3[0x26];
          auVar299[0xd] = puVar3[0x27];
          auVar316[0xd] = puVar3[0x28];
          auVar323[0xd] = puVar3[0x29];
          auVar299[0xe] = puVar3[0x2a];
          auVar316[0xe] = puVar3[0x2b];
          auVar323[0xe] = puVar3[0x2c];
          auVar299[0xf] = puVar3[0x2d];
          auVar316[0xf] = puVar3[0x2e];
          auVar323[0xf] = puVar3[0x2f];
          auVar190[0] = (char)*plVar15;
          auVar207[0] = *(char *)((long)plVar15 + 1);
          auVar230[0] = *(char *)((long)plVar15 + 2);
          auVar190[1] = *(char *)((long)plVar15 + 3);
          auVar207[1] = *(char *)((long)plVar15 + 4);
          auVar230[1] = *(char *)((long)plVar15 + 5);
          auVar190[2] = *(char *)((long)plVar15 + 6);
          auVar207[2] = *(char *)((long)plVar15 + 7);
          auVar230[2] = (char)plVar15[1];
          auVar190[3] = *(char *)((long)plVar15 + 9);
          auVar207[3] = *(char *)((long)plVar15 + 10);
          auVar230[3] = *(char *)((long)plVar15 + 0xb);
          auVar190[4] = *(char *)((long)plVar15 + 0xc);
          auVar207[4] = *(char *)((long)plVar15 + 0xd);
          auVar230[4] = *(char *)((long)plVar15 + 0xe);
          auVar190[5] = *(char *)((long)plVar15 + 0xf);
          auVar207[5] = (char)plVar15[2];
          auVar230[5] = *(char *)((long)plVar15 + 0x11);
          auVar190[6] = *(char *)((long)plVar15 + 0x12);
          auVar207[6] = *(char *)((long)plVar15 + 0x13);
          auVar230[6] = *(char *)((long)plVar15 + 0x14);
          auVar190[7] = *(char *)((long)plVar15 + 0x15);
          auVar207[7] = *(char *)((long)plVar15 + 0x16);
          auVar230[7] = *(char *)((long)plVar15 + 0x17);
          auVar190[8] = (char)plVar15[3];
          auVar207[8] = *(char *)((long)plVar15 + 0x19);
          auVar230[8] = *(char *)((long)plVar15 + 0x1a);
          auVar190[9] = *(char *)((long)plVar15 + 0x1b);
          auVar207[9] = *(char *)((long)plVar15 + 0x1c);
          auVar230[9] = *(char *)((long)plVar15 + 0x1d);
          auVar190[10] = *(char *)((long)plVar15 + 0x1e);
          auVar207[10] = *(char *)((long)plVar15 + 0x1f);
          auVar230[10] = (char)plVar15[4];
          auVar190[0xb] = *(char *)((long)plVar15 + 0x21);
          auVar207[0xb] = *(char *)((long)plVar15 + 0x22);
          auVar230[0xb] = *(char *)((long)plVar15 + 0x23);
          auVar190[0xc] = *(char *)((long)plVar15 + 0x24);
          auVar207[0xc] = *(char *)((long)plVar15 + 0x25);
          auVar230[0xc] = *(char *)((long)plVar15 + 0x26);
          auVar190[0xd] = *(char *)((long)plVar15 + 0x27);
          auVar207[0xd] = (char)plVar15[5];
          auVar230[0xd] = *(char *)((long)plVar15 + 0x29);
          auVar190[0xe] = *(char *)((long)plVar15 + 0x2a);
          auVar207[0xe] = *(char *)((long)plVar15 + 0x2b);
          auVar230[0xe] = *(char *)((long)plVar15 + 0x2c);
          auVar190[0xf] = *(char *)((long)plVar15 + 0x2d);
          auVar207[0xf] = *(char *)((long)plVar15 + 0x2e);
          auVar230[0xf] = *(char *)((long)plVar15 + 0x2f);
          auVar211[0] = *puVar4;
          auVar386[0] = puVar4[1];
          auVar204[0] = puVar4[2];
          auVar211[1] = puVar4[3];
          auVar386[1] = puVar4[4];
          auVar204[1] = puVar4[5];
          auVar211[2] = puVar4[6];
          auVar386[2] = puVar4[7];
          auVar204[2] = puVar4[8];
          auVar211[3] = puVar4[9];
          auVar386[3] = puVar4[10];
          auVar204[3] = puVar4[0xb];
          auVar211[4] = puVar4[0xc];
          auVar386[4] = puVar4[0xd];
          auVar204[4] = puVar4[0xe];
          auVar211[5] = puVar4[0xf];
          auVar386[5] = puVar4[0x10];
          auVar204[5] = puVar4[0x11];
          auVar211[6] = puVar4[0x12];
          auVar386[6] = puVar4[0x13];
          auVar204[6] = puVar4[0x14];
          auVar211[7] = puVar4[0x15];
          auVar386[7] = puVar4[0x16];
          auVar204[7] = puVar4[0x17];
          auVar211[8] = puVar4[0x18];
          auVar386[8] = puVar4[0x19];
          auVar204[8] = puVar4[0x1a];
          auVar211[9] = puVar4[0x1b];
          auVar386[9] = puVar4[0x1c];
          auVar204[9] = puVar4[0x1d];
          auVar211[10] = puVar4[0x1e];
          auVar386[10] = puVar4[0x1f];
          auVar204[10] = puVar4[0x20];
          auVar211[0xb] = puVar4[0x21];
          auVar386[0xb] = puVar4[0x22];
          auVar204[0xb] = puVar4[0x23];
          auVar211[0xc] = puVar4[0x24];
          auVar386[0xc] = puVar4[0x25];
          auVar204[0xc] = puVar4[0x26];
          auVar211[0xd] = puVar4[0x27];
          auVar386[0xd] = puVar4[0x28];
          auVar204[0xd] = puVar4[0x29];
          auVar211[0xe] = puVar4[0x2a];
          auVar386[0xe] = puVar4[0x2b];
          auVar204[0xe] = puVar4[0x2c];
          auVar211[0xf] = puVar4[0x2d];
          auVar386[0xf] = puVar4[0x2e];
          auVar204[0xf] = puVar4[0x2f];
          uVar71 = a64_TBL(ZEXT816(0),auVar366,uStack_200);
          uVar94 = a64_TBL(ZEXT816(0),auVar366,lStack_210);
          uVar267 = a64_TBL(ZEXT816(0),auVar299,uStack_200);
          uVar294 = a64_TBL(ZEXT816(0),auVar299,lStack_210);
          bVar36 = (byte)((ulong)uVar94 >> 8);
          bVar38 = (byte)((ulong)uVar94 >> 0x10);
          bVar40 = (byte)((ulong)uVar94 >> 0x18);
          bVar42 = (byte)((ulong)uVar94 >> 0x20);
          bVar44 = (byte)((ulong)uVar94 >> 0x28);
          bVar46 = (byte)((ulong)uVar94 >> 0x30);
          bVar48 = (byte)((ulong)uVar94 >> 0x38);
          bVar37 = (byte)((ulong)uVar294 >> 8);
          bVar39 = (byte)((ulong)uVar294 >> 0x10);
          bVar41 = (byte)((ulong)uVar294 >> 0x18);
          bVar43 = (byte)((ulong)uVar294 >> 0x20);
          bVar45 = (byte)((ulong)uVar294 >> 0x28);
          bVar47 = (byte)((ulong)uVar294 >> 0x30);
          bVar49 = (byte)((ulong)uVar294 >> 0x38);
          auVar385._6_2_ = 0;
          auVar385._0_6_ =
               (uint6)CONCAT14(bVar36,(uint)CONCAT12(bVar36,(ushort)(byte)uVar94)) & 0xffff0000ffff;
          auVar385[8] = bVar38;
          auVar385._9_3_ = 0;
          auVar385[0xc] = bVar40;
          auVar385._13_3_ = 0;
          auVar385 = NEON_ucvtf(auVar385,4);
          auVar153._1_3_ = 0;
          auVar153[0] = bVar42;
          auVar153[4] = bVar44;
          auVar153._5_3_ = 0;
          auVar153[8] = bVar46;
          auVar153._9_3_ = 0;
          auVar153[0xc] = bVar48;
          auVar153._13_3_ = 0;
          auVar341 = NEON_ucvtf(auVar153,4);
          auVar154._6_2_ = 0;
          auVar154._0_6_ =
               (uint6)CONCAT14(bVar37,(uint)CONCAT12(bVar37,(ushort)(byte)uVar294)) & 0xffff0000ffff
          ;
          auVar154[8] = bVar39;
          auVar154._9_3_ = 0;
          auVar154[0xc] = bVar41;
          auVar154._13_3_ = 0;
          auVar96 = NEON_ucvtf(auVar154,4);
          auVar179._1_3_ = 0;
          auVar179[0] = bVar43;
          auVar179[4] = bVar45;
          auVar179._5_3_ = 0;
          auVar179[8] = bVar47;
          auVar179._9_3_ = 0;
          auVar179[0xc] = bVar49;
          auVar179._13_3_ = 0;
          auVar280 = NEON_ucvtf(auVar179,4);
          auVar338._0_4_ = (int)(short)((ushort)(byte)uVar71 - (ushort)(byte)uVar94);
          auVar338._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 8) - (ushort)bVar36);
          auVar338._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 0x10) - (ushort)bVar38);
          auVar338._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 0x18) - (ushort)bVar40);
          auVar366 = NEON_scvtf(auVar338,4);
          auVar229._0_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 0x20) - (ushort)bVar42);
          auVar229._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 0x28) - (ushort)bVar44);
          auVar229._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 0x30) - (ushort)bVar46);
          auVar229._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 0x38) - (ushort)bVar48);
          auVar388 = NEON_scvtf(auVar229,4);
          auVar244._0_4_ = (int)(short)((ushort)(byte)uVar267 - (ushort)(byte)uVar294);
          auVar244._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 8) - (ushort)bVar37);
          auVar244._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x10) - (ushort)bVar39);
          auVar244._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x18) - (ushort)bVar41);
          auVar75 = NEON_scvtf(auVar244,4);
          fVar265 = auVar96._0_4_ + afStack_1f0[0] * auVar75._0_4_;
          fVar288 = auVar96._4_4_ + afStack_1f0[1] * auVar75._4_4_;
          fVar292 = auVar96._8_4_ + afStack_1f0[2] * auVar75._8_4_;
          fVar310 = auVar96._12_4_ + afStack_1f0[3] * auVar75._12_4_;
          auVar246._0_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x20) - (ushort)bVar43);
          auVar246._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x28) - (ushort)bVar45);
          auVar246._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x30) - (ushort)bVar47);
          auVar246._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x38) - (ushort)bVar49);
          auVar75 = NEON_scvtf(auVar246,4);
          fVar357 = auVar280._0_4_ + afStack_1f0[4] * auVar75._0_4_;
          fVar376 = auVar280._4_4_ + afStack_1f0[5] * auVar75._4_4_;
          fVar378 = auVar280._8_4_ + afStack_1f0[6] * auVar75._8_4_;
          fVar380 = auVar280._12_4_ + afStack_1f0[7] * auVar75._12_4_;
          uVar71 = a64_TBL(ZEXT816(0),auVar190,uStack_1f8);
          uVar94 = a64_TBL(ZEXT816(0),auVar190,uStack_208);
          uVar267 = a64_TBL(ZEXT816(0),auVar211,uStack_1f8);
          uVar294 = a64_TBL(ZEXT816(0),auVar211,uStack_208);
          bVar36 = (byte)((ulong)uVar94 >> 8);
          bVar38 = (byte)((ulong)uVar94 >> 0x10);
          bVar40 = (byte)((ulong)uVar94 >> 0x18);
          bVar42 = (byte)((ulong)uVar94 >> 0x20);
          bVar44 = (byte)((ulong)uVar94 >> 0x28);
          bVar46 = (byte)((ulong)uVar94 >> 0x30);
          bVar48 = (byte)((ulong)uVar94 >> 0x38);
          bVar37 = (byte)((ulong)uVar294 >> 8);
          uVar13 = CONCAT12(bVar37,(short)uVar294) & 0xff00ff;
          bVar39 = (byte)((ulong)uVar294 >> 0x10);
          bVar41 = (byte)((ulong)uVar294 >> 0x18);
          bVar43 = (byte)((ulong)uVar294 >> 0x20);
          bVar45 = (byte)((ulong)uVar294 >> 0x28);
          bVar47 = (byte)((ulong)uVar294 >> 0x30);
          bVar49 = (byte)((ulong)uVar294 >> 0x38);
          auVar249._6_2_ = 0;
          auVar249._0_6_ =
               (uint6)CONCAT14(bVar36,(uint)CONCAT12(bVar36,(ushort)(byte)uVar94)) & 0xffff0000ffff;
          auVar249[8] = bVar38;
          auVar249._9_3_ = 0;
          auVar249[0xc] = bVar40;
          auVar249._13_3_ = 0;
          auVar244 = NEON_ucvtf(auVar249,4);
          auVar270._6_2_ = 0;
          auVar270._0_6_ =
               (uint6)CONCAT14(bVar44,(uint)CONCAT12(bVar44,(ushort)bVar42)) & 0xffff0000ffff;
          auVar270[8] = bVar46;
          auVar270._9_3_ = 0;
          auVar270[0xc] = bVar48;
          auVar270._13_3_ = 0;
          auVar229 = NEON_ucvtf(auVar270,4);
          auVar272._0_4_ = (int)(short)((ushort)(byte)uVar71 - (ushort)(byte)uVar94);
          auVar272._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 8) - (ushort)bVar36);
          auVar272._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 0x10) - (ushort)bVar38);
          auVar272._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 0x18) - (ushort)bVar40);
          auVar160 = NEON_scvtf(auVar272,4);
          auVar296._6_2_ = 0;
          auVar296._0_6_ = (uint6)CONCAT14((char)(uVar13 >> 0x10),(uint)uVar13) & 0xffff0000ffff;
          auVar296[8] = bVar39;
          auVar296._9_3_ = 0;
          auVar296[0xc] = bVar41;
          auVar296._13_3_ = 0;
          auVar75 = NEON_ucvtf(auVar296,4);
          auVar251._6_2_ = 0;
          auVar251._0_6_ =
               (uint6)CONCAT14(bVar45,(uint)CONCAT12(bVar45,(ushort)bVar43)) & 0xffff0000ffff;
          auVar251[8] = bVar47;
          auVar251._9_3_ = 0;
          auVar251[0xc] = bVar49;
          auVar251._13_3_ = 0;
          auVar96 = NEON_ucvtf(auVar251,4);
          auVar367._0_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 0x20) - (ushort)bVar42);
          auVar367._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 0x28) - (ushort)bVar44);
          auVar367._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 0x30) - (ushort)bVar46);
          auVar367._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 0x38) - (ushort)bVar48);
          auVar249 = NEON_scvtf(auVar367,4);
          auVar368._0_4_ = (int)(short)((ushort)(byte)uVar267 - (ushort)(byte)uVar294);
          auVar368._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 8) - (ushort)bVar37);
          auVar368._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x10) - (ushort)bVar39);
          auVar368._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x18) - (ushort)bVar41);
          auVar280 = NEON_scvtf(auVar368,4);
          fVar100 = auVar75._0_4_ + afStack_1f0[8] * auVar280._0_4_;
          fVar164 = auVar75._4_4_ + afStack_1f0[9] * auVar280._4_4_;
          fVar166 = auVar75._8_4_ + afStack_1f0[10] * auVar280._8_4_;
          fVar213 = auVar75._12_4_ + afStack_1f0[0xb] * auVar280._12_4_;
          auVar369._0_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x20) - (ushort)bVar43);
          auVar369._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x28) - (ushort)bVar45);
          auVar369._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x30) - (ushort)bVar47);
          auVar369._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x38) - (ushort)bVar49);
          auVar75 = NEON_scvtf(auVar369,4);
          fVar214 = auVar96._0_4_ + fVar50 * auVar75._0_4_;
          fVar217 = auVar96._4_4_ + fVar70 * auVar75._4_4_;
          fVar220 = auVar96._8_4_ + fVar90 * auVar75._8_4_;
          fVar234 = auVar96._12_4_ + fVar91 * auVar75._12_4_;
          uVar267 = a64_TBL(ZEXT816(0),auVar109,uStack_200);
          uVar294 = a64_TBL(ZEXT816(0),auVar109,lStack_210);
          uVar71 = a64_TBL(ZEXT816(0),auVar316,uStack_200);
          uVar140 = a64_TBL(ZEXT816(0),auVar116,uStack_200);
          uVar94 = a64_TBL(ZEXT816(0),auVar116,lStack_210);
          uVar53 = a64_TBL(ZEXT816(0),auVar316,lStack_210);
          bVar36 = (byte)((ulong)uVar294 >> 8);
          bVar38 = (byte)((ulong)uVar294 >> 0x10);
          bVar40 = (byte)((ulong)uVar294 >> 0x18);
          bVar42 = (byte)((ulong)uVar294 >> 0x20);
          bVar44 = (byte)((ulong)uVar294 >> 0x28);
          bVar46 = (byte)((ulong)uVar294 >> 0x30);
          bVar48 = (byte)((ulong)uVar294 >> 0x38);
          bVar37 = (byte)((ulong)uVar53 >> 8);
          uVar13 = CONCAT12(bVar37,(short)uVar53) & 0xff00ff;
          bVar39 = (byte)((ulong)uVar53 >> 0x10);
          bVar41 = (byte)((ulong)uVar53 >> 0x18);
          bVar43 = (byte)((ulong)uVar53 >> 0x20);
          bVar45 = (byte)((ulong)uVar53 >> 0x28);
          bVar47 = (byte)((ulong)uVar53 >> 0x30);
          bVar49 = (byte)((ulong)uVar53 >> 0x38);
          auVar274._6_2_ = 0;
          auVar274._0_6_ =
               (uint6)CONCAT14(bVar36,(uint)CONCAT12(bVar36,(ushort)(byte)uVar294)) & 0xffff0000ffff
          ;
          auVar274[8] = bVar38;
          auVar274._9_3_ = 0;
          auVar274[0xc] = bVar40;
          auVar274._13_3_ = 0;
          auVar211 = NEON_ucvtf(auVar274,4);
          auVar275._1_3_ = 0;
          auVar275[0] = bVar42;
          auVar275[4] = bVar44;
          auVar275._5_3_ = 0;
          auVar275[8] = bVar46;
          auVar275._9_3_ = 0;
          auVar275[0xc] = bVar48;
          auVar275._13_3_ = 0;
          auVar345 = NEON_ucvtf(auVar275,4);
          auVar352._0_4_ = (int)(short)((ushort)(byte)uVar267 - (ushort)(byte)uVar294);
          auVar352._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 8) - (ushort)bVar36);
          auVar352._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x10) - (ushort)bVar38);
          auVar352._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x18) - (ushort)bVar40);
          auVar246 = NEON_scvtf(auVar352,4);
          auVar353._6_2_ = 0;
          auVar353._0_6_ = (uint6)CONCAT14((char)(uVar13 >> 0x10),(uint)uVar13) & 0xffff0000ffff;
          auVar353[8] = bVar39;
          auVar353._9_3_ = 0;
          auVar353[0xc] = bVar41;
          auVar353._13_3_ = 0;
          auVar110._0_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x20) - (ushort)bVar42);
          auVar110._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x28) - (ushort)bVar44);
          auVar110._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x30) - (ushort)bVar46);
          auVar110._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x38) - (ushort)bVar48);
          auVar96 = NEON_ucvtf(auVar353,4);
          auVar183 = NEON_scvtf(auVar110,4);
          auVar111._0_4_ = (int)(short)((ushort)(byte)uVar71 - (ushort)(byte)uVar53);
          auVar111._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 8) - (ushort)bVar37);
          auVar111._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 0x10) - (ushort)bVar39);
          auVar111._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 0x18) - (ushort)bVar41);
          auVar75 = NEON_scvtf(auVar111,4);
          fVar240 = auVar96._0_4_ + afStack_1f0[0] * auVar75._0_4_;
          fVar241 = auVar96._4_4_ + afStack_1f0[1] * auVar75._4_4_;
          fVar258 = auVar96._8_4_ + afStack_1f0[2] * auVar75._8_4_;
          fVar259 = auVar96._12_4_ + afStack_1f0[3] * auVar75._12_4_;
          auVar339._6_2_ = 0;
          auVar339._0_6_ =
               (uint6)CONCAT14(bVar45,(uint)CONCAT12(bVar45,(ushort)bVar43)) & 0xffff0000ffff;
          auVar339[8] = bVar47;
          auVar339._9_3_ = 0;
          auVar339[0xc] = bVar49;
          auVar339._13_3_ = 0;
          auVar75 = NEON_ucvtf(auVar339,4);
          auVar370._0_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 0x20) - (ushort)bVar43);
          auVar370._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 0x28) - (ushort)bVar45);
          auVar370._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 0x30) - (ushort)bVar47);
          auVar370._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 0x38) - (ushort)bVar49);
          auVar96 = NEON_scvtf(auVar370,4);
          fVar236 = auVar75._0_4_ + afStack_1f0[4] * auVar96._0_4_;
          fVar237 = auVar75._4_4_ + afStack_1f0[5] * auVar96._4_4_;
          fVar238 = auVar75._8_4_ + afStack_1f0[6] * auVar96._8_4_;
          fVar239 = auVar75._12_4_ + afStack_1f0[7] * auVar96._12_4_;
          uVar139 = a64_TBL(ZEXT816(0),auVar207,uStack_1f8);
          uVar267 = a64_TBL(ZEXT816(0),auVar323,uStack_200);
          uVar64 = a64_TBL(ZEXT816(0),auVar323,lStack_210);
          uVar107 = a64_TBL(ZEXT816(0),auVar207,uStack_208);
          uVar101 = a64_TBL(ZEXT816(0),auVar230,uStack_1f8);
          uVar53 = a64_TBL(ZEXT816(0),auVar230,uStack_208);
          uVar71 = a64_TBL(ZEXT816(0),auVar386,uStack_1f8);
          uVar294 = a64_TBL(ZEXT816(0),auVar386,uStack_208);
          bVar36 = (byte)((ulong)uVar107 >> 8);
          bVar37 = (byte)((ulong)uVar107 >> 0x10);
          bVar38 = (byte)((ulong)uVar107 >> 0x18);
          bVar43 = (byte)((ulong)uVar107 >> 0x20);
          bVar44 = (byte)((ulong)uVar107 >> 0x28);
          bVar45 = (byte)((ulong)uVar107 >> 0x30);
          bVar46 = (byte)((ulong)uVar107 >> 0x38);
          uVar54 = a64_TBL(ZEXT816(0),auVar204,uStack_1f8);
          uVar61 = a64_TBL(ZEXT816(0),auVar204,uStack_208);
          auVar354._6_2_ = 0;
          auVar354._0_6_ =
               (uint6)CONCAT14(bVar36,(uint)CONCAT12(bVar36,(ushort)(byte)uVar107)) & 0xffff0000ffff
          ;
          auVar354[8] = bVar37;
          auVar354._9_3_ = 0;
          auVar354[0xc] = bVar38;
          auVar354._13_3_ = 0;
          auVar75 = NEON_ucvtf(auVar354,4);
          auVar177._0_4_ = (int)(short)((ushort)(byte)uVar139 - (ushort)(byte)uVar107);
          auVar177._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar139 >> 8) - (ushort)bVar36);
          auVar177._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar139 >> 0x10) - (ushort)bVar37);
          auVar177._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar139 >> 0x18) - (ushort)bVar38);
          auVar96 = NEON_scvtf(auVar177,4);
          bVar36 = (byte)((ulong)uVar294 >> 8);
          bVar37 = (byte)((ulong)uVar294 >> 0x10);
          bVar38 = (byte)((ulong)uVar294 >> 0x18);
          bVar39 = (byte)((ulong)uVar294 >> 0x20);
          bVar40 = (byte)((ulong)uVar294 >> 0x28);
          bVar41 = (byte)((ulong)uVar294 >> 0x30);
          bVar42 = (byte)((ulong)uVar294 >> 0x38);
          auVar324._1_3_ = 0;
          auVar324[0] = bVar43;
          auVar324[4] = bVar44;
          auVar324._5_3_ = 0;
          auVar324[8] = bVar45;
          auVar324._9_3_ = 0;
          auVar324[0xc] = bVar46;
          auVar324._13_3_ = 0;
          auVar386 = NEON_ucvtf(auVar324,4);
          auVar371._0_4_ = (int)(short)((ushort)(byte)((ulong)uVar139 >> 0x20) - (ushort)bVar43);
          auVar371._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar139 >> 0x28) - (ushort)bVar44);
          auVar371._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar139 >> 0x30) - (ushort)bVar45);
          auVar371._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar139 >> 0x38) - (ushort)bVar46);
          auVar177 = NEON_scvtf(auVar371,4);
          auVar372._6_2_ = 0;
          auVar372._0_6_ =
               (uint6)CONCAT14(bVar36,(uint)CONCAT12(bVar36,(ushort)(byte)uVar294)) & 0xffff0000ffff
          ;
          auVar372[8] = bVar37;
          auVar372._9_3_ = 0;
          auVar372[0xc] = bVar38;
          auVar372._13_3_ = 0;
          auVar326 = NEON_ucvtf(auVar372,4);
          auVar276._0_4_ = (int)(short)((ushort)(byte)uVar71 - (ushort)(byte)uVar294);
          auVar276._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 8) - (ushort)bVar36);
          auVar276._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 0x10) - (ushort)bVar37);
          auVar276._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 0x18) - (ushort)bVar38);
          auVar280 = NEON_scvtf(auVar276,4);
          fVar260 = auVar326._0_4_ + afStack_1f0[8] * auVar280._0_4_;
          fVar261 = auVar326._4_4_ + afStack_1f0[9] * auVar280._4_4_;
          fVar262 = auVar326._8_4_ + afStack_1f0[10] * auVar280._8_4_;
          fVar263 = auVar326._12_4_ + afStack_1f0[0xb] * auVar280._12_4_;
          auVar227._1_3_ = 0;
          auVar227[0] = bVar39;
          auVar227[4] = bVar40;
          auVar227._5_3_ = 0;
          auVar227[8] = bVar41;
          auVar227._9_3_ = 0;
          auVar227[0xc] = bVar42;
          auVar227._13_3_ = 0;
          auVar326 = NEON_ucvtf(auVar227,4);
          auVar201._0_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 0x20) - (ushort)bVar39);
          auVar201._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 0x28) - (ushort)bVar40);
          auVar201._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 0x30) - (ushort)bVar41);
          auVar201._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 0x38) - (ushort)bVar42);
          auVar280 = NEON_scvtf(auVar201,4);
          fVar92 = auVar326._0_4_ + fVar50 * auVar280._0_4_;
          fVar93 = auVar326._4_4_ + fVar70 * auVar280._4_4_;
          fVar98 = auVar326._8_4_ + fVar90 * auVar280._8_4_;
          fVar99 = auVar326._12_4_ + fVar91 * auVar280._12_4_;
          bVar36 = (byte)((ulong)uVar94 >> 8);
          bVar37 = (byte)((ulong)uVar94 >> 0x10);
          bVar38 = (byte)((ulong)uVar94 >> 0x18);
          bVar39 = (byte)((ulong)uVar94 >> 0x20);
          bVar40 = (byte)((ulong)uVar94 >> 0x28);
          bVar41 = (byte)((ulong)uVar94 >> 0x30);
          bVar42 = (byte)((ulong)uVar94 >> 0x38);
          bVar43 = (byte)((ulong)uVar64 >> 8);
          bVar44 = (byte)((ulong)uVar64 >> 0x10);
          bVar45 = (byte)((ulong)uVar64 >> 0x18);
          bVar46 = (byte)((ulong)uVar64 >> 0x20);
          bVar47 = (byte)((ulong)uVar64 >> 0x28);
          bVar48 = (byte)((ulong)uVar64 >> 0x30);
          bVar49 = (byte)((ulong)uVar64 >> 0x38);
          auVar155._6_2_ = 0;
          auVar155._0_6_ =
               (uint6)CONCAT14(bVar36,(uint)CONCAT12(bVar36,(ushort)(byte)uVar94)) & 0xffff0000ffff;
          auVar155[8] = bVar37;
          auVar155._9_3_ = 0;
          auVar155[0xc] = bVar38;
          auVar155._13_3_ = 0;
          auVar256 = NEON_ucvtf(auVar155,4);
          auVar180._1_3_ = 0;
          auVar180[0] = bVar39;
          auVar180[4] = bVar40;
          auVar180._5_3_ = 0;
          auVar180[8] = bVar41;
          auVar180._9_3_ = 0;
          auVar180[0xc] = bVar42;
          auVar180._13_3_ = 0;
          auVar303 = NEON_ucvtf(auVar180,4);
          auVar252._0_4_ = (int)(short)((ushort)(byte)uVar140 - (ushort)(byte)uVar94);
          auVar252._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar140 >> 8) - (ushort)bVar36);
          auVar252._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar140 >> 0x10) - (ushort)bVar37);
          auVar252._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar140 >> 0x18) - (ushort)bVar38);
          auVar329 = NEON_scvtf(auVar252,4);
          auVar253._6_2_ = 0;
          auVar253._0_6_ =
               (uint6)CONCAT14(bVar43,(uint)CONCAT12(bVar43,(ushort)(byte)uVar64)) & 0xffff0000ffff;
          auVar253[8] = bVar44;
          auVar253._9_3_ = 0;
          auVar253[0xc] = bVar45;
          auVar253._13_3_ = 0;
          auVar301 = NEON_ucvtf(auVar253,4);
          auVar360._0_4_ = (int)(short)((ushort)(byte)((ulong)uVar140 >> 0x20) - (ushort)bVar39);
          auVar360._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar140 >> 0x28) - (ushort)bVar40);
          auVar360._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar140 >> 0x30) - (ushort)bVar41);
          auVar360._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar140 >> 0x38) - (ushort)bVar42);
          auVar280 = NEON_scvtf(auVar360,4);
          auVar361._0_4_ = (int)(short)((ushort)(byte)uVar267 - (ushort)(byte)uVar64);
          auVar361._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 8) - (ushort)bVar43);
          auVar361._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x10) - (ushort)bVar44);
          auVar361._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x18) - (ushort)bVar45);
          auVar326 = NEON_scvtf(auVar361,4);
          fVar215 = auVar301._0_4_ + afStack_1f0[0] * auVar326._0_4_;
          fVar218 = auVar301._4_4_ + afStack_1f0[1] * auVar326._4_4_;
          fVar221 = auVar301._8_4_ + afStack_1f0[2] * auVar326._8_4_;
          fVar235 = auVar301._12_4_ + afStack_1f0[3] * auVar326._12_4_;
          auVar363._1_3_ = 0;
          auVar363[0] = bVar46;
          auVar363[4] = bVar47;
          auVar363._5_3_ = 0;
          auVar363[8] = bVar48;
          auVar363._9_3_ = 0;
          auVar363[0xc] = bVar49;
          auVar363._13_3_ = 0;
          auVar277._0_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x20) - (ushort)bVar46);
          auVar277._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x28) - (ushort)bVar47);
          auVar277._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x30) - (ushort)bVar48);
          auVar277._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x38) - (ushort)bVar49);
          auVar326 = NEON_ucvtf(auVar363,4);
          auVar301 = NEON_scvtf(auVar277,4);
          fVar138 = auVar326._0_4_ + afStack_1f0[4] * auVar301._0_4_;
          fVar165 = auVar326._4_4_ + afStack_1f0[5] * auVar301._4_4_;
          fVar198 = auVar326._8_4_ + afStack_1f0[6] * auVar301._8_4_;
          fVar216 = auVar326._12_4_ + afStack_1f0[7] * auVar301._12_4_;
          bVar36 = (byte)((ulong)uVar53 >> 8);
          bVar38 = (byte)((ulong)uVar53 >> 0x10);
          bVar40 = (byte)((ulong)uVar53 >> 0x18);
          bVar42 = (byte)((ulong)uVar53 >> 0x20);
          bVar44 = (byte)((ulong)uVar53 >> 0x28);
          bVar46 = (byte)((ulong)uVar53 >> 0x30);
          bVar48 = (byte)((ulong)uVar53 >> 0x38);
          bVar37 = (byte)((ulong)uVar61 >> 8);
          bVar39 = (byte)((ulong)uVar61 >> 0x10);
          bVar41 = (byte)((ulong)uVar61 >> 0x18);
          bVar43 = (byte)((ulong)uVar61 >> 0x20);
          bVar45 = (byte)((ulong)uVar61 >> 0x28);
          bVar47 = (byte)((ulong)uVar61 >> 0x30);
          bVar49 = (byte)((ulong)uVar61 >> 0x38);
          auVar231._6_2_ = 0;
          auVar231._0_6_ =
               (uint6)CONCAT14(bVar36,(uint)CONCAT12(bVar36,(ushort)(byte)uVar53)) & 0xffff0000ffff;
          auVar231[8] = bVar38;
          auVar231._9_3_ = 0;
          auVar231[0xc] = bVar40;
          auVar231._13_3_ = 0;
          auVar327 = NEON_ucvtf(auVar231,4);
          auVar278._1_3_ = 0;
          auVar278[0] = bVar42;
          auVar278[4] = bVar44;
          auVar278._5_3_ = 0;
          auVar278[8] = bVar46;
          auVar278._9_3_ = 0;
          auVar278[0xc] = bVar48;
          auVar278._13_3_ = 0;
          auVar354 = NEON_ucvtf(auVar278,4);
          auVar156._0_4_ = (int)(short)((ushort)(byte)uVar101 - (ushort)(byte)uVar53);
          auVar156._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar101 >> 8) - (ushort)bVar36);
          auVar156._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar101 >> 0x10) - (ushort)bVar38);
          auVar156._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar101 >> 0x18) - (ushort)bVar40);
          auVar326 = NEON_scvtf(auVar156,4);
          auVar157._6_2_ = 0;
          auVar157._0_6_ =
               (uint6)CONCAT14(bVar37,(uint)CONCAT12(bVar37,(ushort)(byte)uVar61)) & 0xffff0000ffff;
          auVar157[8] = bVar39;
          auVar157._9_3_ = 0;
          auVar157[0xc] = bVar41;
          auVar157._13_3_ = 0;
          auVar191._0_4_ = (int)(short)((ushort)(byte)((ulong)uVar101 >> 0x20) - (ushort)bVar42);
          auVar191._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar101 >> 0x28) - (ushort)bVar44);
          auVar191._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar101 >> 0x30) - (ushort)bVar46);
          auVar191._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar101 >> 0x38) - (ushort)bVar48);
          auVar301 = NEON_ucvtf(auVar157,4);
          auVar317 = NEON_scvtf(auVar191,4);
          auVar192._0_4_ = (int)(short)((ushort)(byte)uVar54 - (ushort)(byte)uVar61);
          auVar192._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar54 >> 8) - (ushort)bVar37);
          auVar192._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar54 >> 0x10) - (ushort)bVar39);
          auVar192._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar54 >> 0x18) - (ushort)bVar41);
          auVar318 = NEON_scvtf(auVar192,4);
          fVar286 = auVar301._0_4_ + afStack_1f0[8] * auVar318._0_4_;
          fVar290 = auVar301._4_4_ + afStack_1f0[9] * auVar318._4_4_;
          fVar308 = auVar301._8_4_ + afStack_1f0[10] * auVar318._8_4_;
          fVar312 = auVar301._12_4_ + afStack_1f0[0xb] * auVar318._12_4_;
          auVar193._1_3_ = 0;
          auVar193[0] = bVar43;
          auVar193[4] = bVar45;
          auVar193._5_3_ = 0;
          auVar193[8] = bVar47;
          auVar193._9_3_ = 0;
          auVar193[0xc] = bVar49;
          auVar193._13_3_ = 0;
          auVar301 = NEON_ucvtf(auVar193,4);
          auVar208._0_4_ = (int)(short)((ushort)(byte)((ulong)uVar54 >> 0x20) - (ushort)bVar43);
          auVar208._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar54 >> 0x28) - (ushort)bVar45);
          auVar208._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar54 >> 0x30) - (ushort)bVar47);
          auVar208._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar54 >> 0x38) - (ushort)bVar49);
          auVar318 = NEON_scvtf(auVar208,4);
          fVar381 = auVar301._0_4_ + fVar50 * auVar318._0_4_;
          fVar389 = auVar301._4_4_ + fVar70 * auVar318._4_4_;
          fVar390 = auVar301._8_4_ + fVar90 * auVar318._8_4_;
          fVar391 = auVar301._12_4_ + fVar91 * auVar318._12_4_;
          *puVar24 = (char)(int)(fVar265 +
                                ((auVar385._0_4_ + afStack_1f0[0] * auVar366._0_4_) - fVar265) *
                                fVar219);
          puVar24[1] = (char)(int)(fVar240 +
                                  ((auVar211._0_4_ + afStack_1f0[0] * auVar246._0_4_) - fVar240) *
                                  fVar219);
          puVar24[2] = (char)(int)(fVar215 +
                                  ((auVar256._0_4_ + afStack_1f0[0] * auVar329._0_4_) - fVar215) *
                                  fVar219);
          puVar24[3] = (char)(int)(fVar288 +
                                  ((auVar385._4_4_ + afStack_1f0[1] * auVar366._4_4_) - fVar288) *
                                  fVar219);
          puVar24[4] = (char)(int)(fVar241 +
                                  ((auVar211._4_4_ + afStack_1f0[1] * auVar246._4_4_) - fVar241) *
                                  fVar219);
          puVar24[5] = (char)(int)(fVar218 +
                                  ((auVar256._4_4_ + afStack_1f0[1] * auVar329._4_4_) - fVar218) *
                                  fVar219);
          puVar24[6] = (char)(int)(fVar292 +
                                  ((auVar385._8_4_ + afStack_1f0[2] * auVar366._8_4_) - fVar292) *
                                  fVar219);
          puVar24[7] = (char)(int)(fVar258 +
                                  ((auVar211._8_4_ + afStack_1f0[2] * auVar246._8_4_) - fVar258) *
                                  fVar219);
          puVar24[8] = (char)(int)(fVar221 +
                                  ((auVar256._8_4_ + afStack_1f0[2] * auVar329._8_4_) - fVar221) *
                                  fVar219);
          puVar24[9] = (char)(int)(fVar310 +
                                  ((auVar385._12_4_ + afStack_1f0[3] * auVar366._12_4_) - fVar310) *
                                  fVar219);
          puVar24[10] = (char)(int)(fVar259 +
                                   ((auVar211._12_4_ + afStack_1f0[3] * auVar246._12_4_) - fVar259)
                                   * fVar219);
          puVar24[0xb] = (char)(int)(fVar235 +
                                    ((auVar256._12_4_ + afStack_1f0[3] * auVar329._12_4_) - fVar235)
                                    * fVar219);
          puVar24[0xc] = (char)(int)(fVar357 +
                                    ((auVar341._0_4_ + afStack_1f0[4] * auVar388._0_4_) - fVar357) *
                                    fVar219);
          puVar24[0xd] = (char)(int)(fVar236 +
                                    ((auVar345._0_4_ + afStack_1f0[4] * auVar183._0_4_) - fVar236) *
                                    fVar219);
          puVar24[0xe] = (char)(int)(fVar138 +
                                    ((auVar303._0_4_ + afStack_1f0[4] * auVar280._0_4_) - fVar138) *
                                    fVar219);
          puVar24[0xf] = (char)(int)(fVar376 +
                                    ((auVar341._4_4_ + afStack_1f0[5] * auVar388._4_4_) - fVar376) *
                                    fVar219);
          puVar24[0x10] =
               (char)(int)(fVar237 +
                          ((auVar345._4_4_ + afStack_1f0[5] * auVar183._4_4_) - fVar237) * fVar219);
          puVar24[0x11] =
               (char)(int)(fVar165 +
                          ((auVar303._4_4_ + afStack_1f0[5] * auVar280._4_4_) - fVar165) * fVar219);
          puVar24[0x12] =
               (char)(int)(fVar378 +
                          ((auVar341._8_4_ + afStack_1f0[6] * auVar388._8_4_) - fVar378) * fVar219);
          puVar24[0x13] =
               (char)(int)(fVar238 +
                          ((auVar345._8_4_ + afStack_1f0[6] * auVar183._8_4_) - fVar238) * fVar219);
          puVar24[0x14] =
               (char)(int)(fVar198 +
                          ((auVar303._8_4_ + afStack_1f0[6] * auVar280._8_4_) - fVar198) * fVar219);
          puVar24[0x15] =
               (char)(int)(fVar380 +
                          ((auVar341._12_4_ + afStack_1f0[7] * auVar388._12_4_) - fVar380) * fVar219
                          );
          puVar24[0x16] =
               (char)(int)(fVar239 +
                          ((auVar345._12_4_ + afStack_1f0[7] * auVar183._12_4_) - fVar239) * fVar219
                          );
          puVar24[0x17] =
               (char)(int)(fVar216 +
                          ((auVar303._12_4_ + afStack_1f0[7] * auVar280._12_4_) - fVar216) * fVar219
                          );
          puVar24[0x18] =
               (char)(int)(fVar100 +
                          ((auVar244._0_4_ + afStack_1f0[8] * auVar160._0_4_) - fVar100) * fVar219);
          puVar24[0x19] =
               (char)(int)(fVar260 +
                          ((auVar75._0_4_ + afStack_1f0[8] * auVar96._0_4_) - fVar260) * fVar219);
          puVar24[0x1a] =
               (char)(int)(fVar286 +
                          ((auVar327._0_4_ + afStack_1f0[8] * auVar326._0_4_) - fVar286) * fVar219);
          puVar24[0x1b] =
               (char)(int)(fVar164 +
                          ((auVar244._4_4_ + afStack_1f0[9] * auVar160._4_4_) - fVar164) * fVar219);
          puVar24[0x1c] =
               (char)(int)(fVar261 +
                          ((auVar75._4_4_ + afStack_1f0[9] * auVar96._4_4_) - fVar261) * fVar219);
          puVar24[0x1d] =
               (char)(int)(fVar290 +
                          ((auVar327._4_4_ + afStack_1f0[9] * auVar326._4_4_) - fVar290) * fVar219);
          puVar24[0x1e] =
               (char)(int)(fVar166 +
                          ((auVar244._8_4_ + afStack_1f0[10] * auVar160._8_4_) - fVar166) * fVar219)
          ;
          puVar24[0x1f] =
               (char)(int)(fVar262 +
                          ((auVar75._8_4_ + afStack_1f0[10] * auVar96._8_4_) - fVar262) * fVar219);
          puVar24[0x20] =
               (char)(int)(fVar308 +
                          ((auVar327._8_4_ + afStack_1f0[10] * auVar326._8_4_) - fVar308) * fVar219)
          ;
          puVar24[0x21] =
               (char)(int)(fVar213 +
                          ((auVar244._12_4_ + afStack_1f0[0xb] * auVar160._12_4_) - fVar213) *
                          fVar219);
          puVar24[0x22] =
               (char)(int)(fVar263 +
                          ((auVar75._12_4_ + afStack_1f0[0xb] * auVar96._12_4_) - fVar263) * fVar219
                          );
          puVar24[0x23] =
               (char)(int)(fVar312 +
                          ((auVar327._12_4_ + afStack_1f0[0xb] * auVar326._12_4_) - fVar312) *
                          fVar219);
          puVar24[0x24] =
               (char)(int)(fVar214 +
                          ((auVar229._0_4_ + fVar50 * auVar249._0_4_) - fVar214) * fVar219);
          puVar24[0x25] =
               (char)(int)(fVar92 + ((auVar386._0_4_ + fVar50 * auVar177._0_4_) - fVar92) * fVar219)
          ;
          puVar24[0x26] =
               (char)(int)(fVar381 +
                          ((auVar354._0_4_ + fVar50 * auVar317._0_4_) - fVar381) * fVar219);
          puVar24[0x27] =
               (char)(int)(fVar217 +
                          ((auVar229._4_4_ + fVar70 * auVar249._4_4_) - fVar217) * fVar219);
          puVar24[0x28] =
               (char)(int)(fVar93 + ((auVar386._4_4_ + fVar70 * auVar177._4_4_) - fVar93) * fVar219)
          ;
          puVar24[0x29] =
               (char)(int)(fVar389 +
                          ((auVar354._4_4_ + fVar70 * auVar317._4_4_) - fVar389) * fVar219);
          puVar24[0x2a] =
               (char)(int)(fVar220 +
                          ((auVar229._8_4_ + fVar90 * auVar249._8_4_) - fVar220) * fVar219);
          puVar24[0x2b] =
               (char)(int)(fVar98 + ((auVar386._8_4_ + fVar90 * auVar177._8_4_) - fVar98) * fVar219)
          ;
          puVar24[0x2c] =
               (char)(int)(fVar390 +
                          ((auVar354._8_4_ + fVar90 * auVar317._8_4_) - fVar390) * fVar219);
          puVar24[0x2d] =
               (char)(int)(fVar234 +
                          ((auVar229._12_4_ + fVar91 * auVar249._12_4_) - fVar234) * fVar219);
          puVar24[0x2e] =
               (char)(int)(fVar99 + ((auVar386._12_4_ + fVar91 * auVar177._12_4_) - fVar99) *
                                    fVar219);
          puVar24[0x2f] =
               (char)(int)(fVar391 +
                          ((auVar354._12_4_ + fVar91 * auVar317._12_4_) - fVar391) * fVar219);
          puVar24 = puVar24 + param_7;
          uVar26 = uVar26 + 1;
          uVar33 = param_3[1];
          uVar25 = uVar33;
          uVar34 = uVar33;
          uVar32 = uVar33;
        } while (uVar26 < uVar33);
      }
      else if ((param_8 == 4) && (uVar32 != 0)) {
        uVar26 = 0;
        puVar24 = puVar16;
        do {
          fVar219 = *(float *)(lStack_240 + uVar26 * 4);
          plVar15 = (long *)(uStack_228 + uVar26 * 8);
          lVar18 = param_4 + *plVar15 * param_5;
          lVar21 = param_4 + plVar15[uVar32] * param_5;
          Hint_Prefetch(lVar18 + lVar23 + lVar27 + 0x140,0,0,0);
          puVar2 = (undefined1 *)(lVar18 + lVar23 * 4);
          puVar3 = (undefined1 *)(lVar21 + lVar23 * 4);
          plVar15 = (long *)(lVar18 + lVar22 * 4);
          puVar4 = (undefined1 *)(lVar21 + lVar22 * 4);
          Hint_Prefetch(lVar21 + lVar23 + lVar27 + 0x140,0,0,0);
          auVar51[0] = *puVar2;
          auVar55[0] = puVar2[1];
          auVar62[0] = puVar2[2];
          auVar65[0] = puVar2[3];
          auVar51[1] = puVar2[4];
          auVar55[1] = puVar2[5];
          auVar62[1] = puVar2[6];
          auVar65[1] = puVar2[7];
          auVar51[2] = puVar2[8];
          auVar55[2] = puVar2[9];
          auVar62[2] = puVar2[10];
          auVar65[2] = puVar2[0xb];
          auVar51[3] = puVar2[0xc];
          auVar55[3] = puVar2[0xd];
          auVar62[3] = puVar2[0xe];
          auVar65[3] = puVar2[0xf];
          auVar51[4] = puVar2[0x10];
          auVar55[4] = puVar2[0x11];
          auVar62[4] = puVar2[0x12];
          auVar65[4] = puVar2[0x13];
          auVar51[5] = puVar2[0x14];
          auVar55[5] = puVar2[0x15];
          auVar62[5] = puVar2[0x16];
          auVar65[5] = puVar2[0x17];
          auVar51[6] = puVar2[0x18];
          auVar55[6] = puVar2[0x19];
          auVar62[6] = puVar2[0x1a];
          auVar65[6] = puVar2[0x1b];
          auVar51[7] = puVar2[0x1c];
          auVar55[7] = puVar2[0x1d];
          auVar62[7] = puVar2[0x1e];
          auVar65[7] = puVar2[0x1f];
          auVar51[8] = puVar2[0x20];
          auVar55[8] = puVar2[0x21];
          auVar62[8] = puVar2[0x22];
          auVar65[8] = puVar2[0x23];
          auVar51[9] = puVar2[0x24];
          auVar55[9] = puVar2[0x25];
          auVar62[9] = puVar2[0x26];
          auVar65[9] = puVar2[0x27];
          auVar51[10] = puVar2[0x28];
          auVar55[10] = puVar2[0x29];
          auVar62[10] = puVar2[0x2a];
          auVar65[10] = puVar2[0x2b];
          auVar51[0xb] = puVar2[0x2c];
          auVar55[0xb] = puVar2[0x2d];
          auVar62[0xb] = puVar2[0x2e];
          auVar65[0xb] = puVar2[0x2f];
          auVar51[0xc] = puVar2[0x30];
          auVar55[0xc] = puVar2[0x31];
          auVar62[0xc] = puVar2[0x32];
          auVar65[0xc] = puVar2[0x33];
          auVar51[0xd] = puVar2[0x34];
          auVar55[0xd] = puVar2[0x35];
          auVar62[0xd] = puVar2[0x36];
          auVar65[0xd] = puVar2[0x37];
          auVar51[0xe] = puVar2[0x38];
          auVar55[0xe] = puVar2[0x39];
          auVar62[0xe] = puVar2[0x3a];
          auVar65[0xe] = puVar2[0x3b];
          auVar51[0xf] = puVar2[0x3c];
          auVar55[0xf] = puVar2[0x3d];
          auVar62[0xf] = puVar2[0x3e];
          auVar65[0xf] = puVar2[0x3f];
          auVar102[0] = *puVar3;
          auVar108[0] = puVar3[1];
          auVar112[0] = puVar3[2];
          auVar102[1] = puVar3[4];
          auVar108[1] = puVar3[5];
          auVar112[1] = puVar3[6];
          auVar102[2] = puVar3[8];
          auVar108[2] = puVar3[9];
          auVar112[2] = puVar3[10];
          auVar102[3] = puVar3[0xc];
          auVar108[3] = puVar3[0xd];
          auVar112[3] = puVar3[0xe];
          auVar102[4] = puVar3[0x10];
          auVar108[4] = puVar3[0x11];
          auVar112[4] = puVar3[0x12];
          auVar102[5] = puVar3[0x14];
          auVar108[5] = puVar3[0x15];
          auVar112[5] = puVar3[0x16];
          auVar102[6] = puVar3[0x18];
          auVar108[6] = puVar3[0x19];
          auVar112[6] = puVar3[0x1a];
          auVar102[7] = puVar3[0x1c];
          auVar108[7] = puVar3[0x1d];
          auVar112[7] = puVar3[0x1e];
          auVar102[8] = puVar3[0x20];
          auVar108[8] = puVar3[0x21];
          auVar112[8] = puVar3[0x22];
          auVar102[9] = puVar3[0x24];
          auVar108[9] = puVar3[0x25];
          auVar112[9] = puVar3[0x26];
          auVar102[10] = puVar3[0x28];
          auVar108[10] = puVar3[0x29];
          auVar112[10] = puVar3[0x2a];
          auVar102[0xb] = puVar3[0x2c];
          auVar108[0xb] = puVar3[0x2d];
          auVar112[0xb] = puVar3[0x2e];
          auVar102[0xc] = puVar3[0x30];
          auVar108[0xc] = puVar3[0x31];
          auVar112[0xc] = puVar3[0x32];
          auVar102[0xd] = puVar3[0x34];
          auVar108[0xd] = puVar3[0x35];
          auVar112[0xd] = puVar3[0x36];
          auVar102[0xe] = puVar3[0x38];
          auVar108[0xe] = puVar3[0x39];
          auVar112[0xe] = puVar3[0x3a];
          auVar102[0xf] = puVar3[0x3c];
          auVar108[0xf] = puVar3[0x3d];
          auVar112[0xf] = puVar3[0x3e];
          auVar314[0] = (char)*plVar15;
          auVar322[0] = *(char *)((long)plVar15 + 1);
          auVar335[0] = *(char *)((long)plVar15 + 2);
          auVar351[0] = *(char *)((long)plVar15 + 3);
          auVar314[1] = *(char *)((long)plVar15 + 4);
          auVar322[1] = *(char *)((long)plVar15 + 5);
          auVar335[1] = *(char *)((long)plVar15 + 6);
          auVar351[1] = *(char *)((long)plVar15 + 7);
          auVar314[2] = (char)plVar15[1];
          auVar322[2] = *(char *)((long)plVar15 + 9);
          auVar335[2] = *(char *)((long)plVar15 + 10);
          auVar351[2] = *(char *)((long)plVar15 + 0xb);
          auVar314[3] = *(char *)((long)plVar15 + 0xc);
          auVar322[3] = *(char *)((long)plVar15 + 0xd);
          auVar335[3] = *(char *)((long)plVar15 + 0xe);
          auVar351[3] = *(char *)((long)plVar15 + 0xf);
          auVar314[4] = (char)plVar15[2];
          auVar322[4] = *(char *)((long)plVar15 + 0x11);
          auVar335[4] = *(char *)((long)plVar15 + 0x12);
          auVar351[4] = *(char *)((long)plVar15 + 0x13);
          auVar314[5] = *(char *)((long)plVar15 + 0x14);
          auVar322[5] = *(char *)((long)plVar15 + 0x15);
          auVar335[5] = *(char *)((long)plVar15 + 0x16);
          auVar351[5] = *(char *)((long)plVar15 + 0x17);
          auVar314[6] = (char)plVar15[3];
          auVar322[6] = *(char *)((long)plVar15 + 0x19);
          auVar335[6] = *(char *)((long)plVar15 + 0x1a);
          auVar351[6] = *(char *)((long)plVar15 + 0x1b);
          auVar314[7] = *(char *)((long)plVar15 + 0x1c);
          auVar322[7] = *(char *)((long)plVar15 + 0x1d);
          auVar335[7] = *(char *)((long)plVar15 + 0x1e);
          auVar351[7] = *(char *)((long)plVar15 + 0x1f);
          auVar314[8] = (char)plVar15[4];
          auVar322[8] = *(char *)((long)plVar15 + 0x21);
          auVar335[8] = *(char *)((long)plVar15 + 0x22);
          auVar351[8] = *(char *)((long)plVar15 + 0x23);
          auVar314[9] = *(char *)((long)plVar15 + 0x24);
          auVar322[9] = *(char *)((long)plVar15 + 0x25);
          auVar335[9] = *(char *)((long)plVar15 + 0x26);
          auVar351[9] = *(char *)((long)plVar15 + 0x27);
          auVar314[10] = (char)plVar15[5];
          auVar322[10] = *(char *)((long)plVar15 + 0x29);
          auVar335[10] = *(char *)((long)plVar15 + 0x2a);
          auVar351[10] = *(char *)((long)plVar15 + 0x2b);
          auVar314[0xb] = *(char *)((long)plVar15 + 0x2c);
          auVar322[0xb] = *(char *)((long)plVar15 + 0x2d);
          auVar335[0xb] = *(char *)((long)plVar15 + 0x2e);
          auVar351[0xb] = *(char *)((long)plVar15 + 0x2f);
          auVar314[0xc] = (char)plVar15[6];
          auVar322[0xc] = *(char *)((long)plVar15 + 0x31);
          auVar335[0xc] = *(char *)((long)plVar15 + 0x32);
          auVar351[0xc] = *(char *)((long)plVar15 + 0x33);
          auVar314[0xd] = *(char *)((long)plVar15 + 0x34);
          auVar322[0xd] = *(char *)((long)plVar15 + 0x35);
          auVar335[0xd] = *(char *)((long)plVar15 + 0x36);
          auVar351[0xd] = *(char *)((long)plVar15 + 0x37);
          auVar314[0xe] = (char)plVar15[7];
          auVar322[0xe] = *(char *)((long)plVar15 + 0x39);
          auVar335[0xe] = *(char *)((long)plVar15 + 0x3a);
          auVar351[0xe] = *(char *)((long)plVar15 + 0x3b);
          auVar314[0xf] = *(char *)((long)plVar15 + 0x3c);
          auVar322[0xf] = *(char *)((long)plVar15 + 0x3d);
          auVar335[0xf] = *(char *)((long)plVar15 + 0x3e);
          auVar351[0xf] = *(char *)((long)plVar15 + 0x3f);
          auVar188[0] = *puVar4;
          auVar199[0] = puVar4[1];
          auVar222[0] = puVar4[2];
          auVar242[0] = puVar4[3];
          auVar188[1] = puVar4[4];
          auVar199[1] = puVar4[5];
          auVar222[1] = puVar4[6];
          auVar242[1] = puVar4[7];
          auVar188[2] = puVar4[8];
          auVar199[2] = puVar4[9];
          auVar222[2] = puVar4[10];
          auVar242[2] = puVar4[0xb];
          auVar188[3] = puVar4[0xc];
          auVar199[3] = puVar4[0xd];
          auVar222[3] = puVar4[0xe];
          auVar242[3] = puVar4[0xf];
          auVar188[4] = puVar4[0x10];
          auVar199[4] = puVar4[0x11];
          auVar222[4] = puVar4[0x12];
          auVar242[4] = puVar4[0x13];
          auVar188[5] = puVar4[0x14];
          auVar199[5] = puVar4[0x15];
          auVar222[5] = puVar4[0x16];
          auVar242[5] = puVar4[0x17];
          auVar188[6] = puVar4[0x18];
          auVar199[6] = puVar4[0x19];
          auVar222[6] = puVar4[0x1a];
          auVar242[6] = puVar4[0x1b];
          auVar188[7] = puVar4[0x1c];
          auVar199[7] = puVar4[0x1d];
          auVar222[7] = puVar4[0x1e];
          auVar242[7] = puVar4[0x1f];
          auVar188[8] = puVar4[0x20];
          auVar199[8] = puVar4[0x21];
          auVar222[8] = puVar4[0x22];
          auVar242[8] = puVar4[0x23];
          auVar188[9] = puVar4[0x24];
          auVar199[9] = puVar4[0x25];
          auVar222[9] = puVar4[0x26];
          auVar242[9] = puVar4[0x27];
          auVar188[10] = puVar4[0x28];
          auVar199[10] = puVar4[0x29];
          auVar222[10] = puVar4[0x2a];
          auVar242[10] = puVar4[0x2b];
          auVar188[0xb] = puVar4[0x2c];
          auVar199[0xb] = puVar4[0x2d];
          auVar222[0xb] = puVar4[0x2e];
          auVar242[0xb] = puVar4[0x2f];
          auVar188[0xc] = puVar4[0x30];
          auVar199[0xc] = puVar4[0x31];
          auVar222[0xc] = puVar4[0x32];
          auVar242[0xc] = puVar4[0x33];
          auVar188[0xd] = puVar4[0x34];
          auVar199[0xd] = puVar4[0x35];
          auVar222[0xd] = puVar4[0x36];
          auVar242[0xd] = puVar4[0x37];
          auVar188[0xe] = puVar4[0x38];
          auVar199[0xe] = puVar4[0x39];
          auVar222[0xe] = puVar4[0x3a];
          auVar242[0xe] = puVar4[0x3b];
          auVar188[0xf] = puVar4[0x3c];
          auVar199[0xf] = puVar4[0x3d];
          auVar222[0xf] = puVar4[0x3e];
          auVar242[0xf] = puVar4[0x3f];
          uVar167 = a64_TBL(ZEXT816(0),auVar51,uStack_200);
          uVar358 = a64_TBL(ZEXT816(0),auVar51,lStack_210);
          uVar139 = a64_TBL(ZEXT816(0),auVar102,uStack_200);
          uVar140 = a64_TBL(ZEXT816(0),auVar102,lStack_210);
          uVar168 = a64_TBL(ZEXT816(0),auVar314,uStack_1f8);
          uVar141 = a64_TBL(ZEXT816(0),auVar314,uStack_208);
          uVar169 = a64_TBL(ZEXT816(0),auVar55,uStack_200);
          uVar293 = a64_TBL(ZEXT816(0),auVar55,lStack_210);
          uVar142 = a64_TBL(ZEXT816(0),auVar108,uStack_200);
          uVar143 = a64_TBL(ZEXT816(0),auVar108,lStack_210);
          uVar382 = a64_TBL(ZEXT816(0),auVar322,uStack_1f8);
          uVar170 = a64_TBL(ZEXT816(0),auVar322,uStack_208);
          uVar144 = a64_TBL(ZEXT816(0),auVar62,uStack_200);
          uVar145 = a64_TBL(ZEXT816(0),auVar62,lStack_210);
          uVar383 = a64_TBL(ZEXT816(0),auVar65,uStack_200);
          uVar94 = a64_TBL(ZEXT816(0),auVar65,lStack_210);
          uVar384 = a64_TBL(ZEXT816(0),auVar112,uStack_200);
          uVar64 = a64_TBL(ZEXT816(0),auVar112,lStack_210);
          auVar11[1] = puVar3[7];
          auVar11[0] = puVar3[3];
          auVar11[2] = puVar3[0xb];
          auVar11[3] = puVar3[0xf];
          auVar11[4] = puVar3[0x13];
          auVar11[5] = puVar3[0x17];
          auVar11[6] = puVar3[0x1b];
          auVar11[7] = puVar3[0x1f];
          auVar11[8] = puVar3[0x23];
          auVar11[9] = puVar3[0x27];
          auVar11[10] = puVar3[0x2b];
          auVar11[0xb] = puVar3[0x2f];
          auVar11[0xc] = puVar3[0x33];
          auVar11[0xd] = puVar3[0x37];
          auVar11[0xe] = puVar3[0x3b];
          auVar11[0xf] = puVar3[0x3f];
          uVar267 = a64_TBL(ZEXT816(0),auVar11,uStack_200);
          auVar12[1] = puVar3[7];
          auVar12[0] = puVar3[3];
          auVar12[2] = puVar3[0xb];
          auVar12[3] = puVar3[0xf];
          auVar12[4] = puVar3[0x13];
          auVar12[5] = puVar3[0x17];
          auVar12[6] = puVar3[0x1b];
          auVar12[7] = puVar3[0x1f];
          auVar12[8] = puVar3[0x23];
          auVar12[9] = puVar3[0x27];
          auVar12[10] = puVar3[0x2b];
          auVar12[0xb] = puVar3[0x2f];
          auVar12[0xc] = puVar3[0x33];
          auVar12[0xd] = puVar3[0x37];
          auVar12[0xe] = puVar3[0x3b];
          auVar12[0xf] = puVar3[0x3f];
          uVar61 = a64_TBL(ZEXT816(0),auVar12,lStack_210);
          uVar294 = a64_TBL(ZEXT816(0),auVar335,uStack_1f8);
          uVar107 = a64_TBL(ZEXT816(0),auVar335,uStack_208);
          uVar53 = a64_TBL(ZEXT816(0),auVar351,uStack_1f8);
          uVar71 = a64_TBL(ZEXT816(0),auVar351,uStack_208);
          bVar117 = (byte)((ulong)uVar71 >> 8);
          bVar118 = (byte)((ulong)uVar71 >> 0x10);
          bVar119 = (byte)((ulong)uVar71 >> 0x18);
          bVar120 = (byte)((ulong)uVar71 >> 0x20);
          bVar121 = (byte)((ulong)uVar71 >> 0x28);
          bVar122 = (byte)((ulong)uVar71 >> 0x30);
          bVar123 = (byte)((ulong)uVar71 >> 0x38);
          uVar266 = a64_TBL(ZEXT816(0),auVar188,uStack_1f8);
          uVar334 = a64_TBL(ZEXT816(0),auVar188,uStack_208);
          uVar313 = a64_TBL(ZEXT816(0),auVar199,uStack_1f8);
          uVar321 = a64_TBL(ZEXT816(0),auVar199,uStack_208);
          uVar54 = a64_TBL(ZEXT816(0),auVar222,uStack_1f8);
          uVar350 = a64_TBL(ZEXT816(0),auVar222,uStack_208);
          uVar101 = a64_TBL(ZEXT816(0),auVar242,uStack_1f8);
          uVar187 = a64_TBL(ZEXT816(0),auVar242,uStack_208);
          bVar36 = (byte)((ulong)uVar358 >> 8);
          bVar37 = (byte)((ulong)uVar358 >> 0x10);
          bVar38 = (byte)((ulong)uVar358 >> 0x18);
          bVar39 = (byte)((ulong)uVar358 >> 0x20);
          bVar40 = (byte)((ulong)uVar358 >> 0x28);
          bVar41 = (byte)((ulong)uVar358 >> 0x30);
          bVar42 = (byte)((ulong)uVar358 >> 0x38);
          auVar243._6_2_ = 0;
          auVar243._0_6_ =
               (uint6)CONCAT14(bVar36,(uint)CONCAT12(bVar36,(ushort)(byte)uVar358)) & 0xffff0000ffff
          ;
          auVar243[8] = bVar37;
          auVar243._9_3_ = 0;
          auVar243[0xc] = bVar38;
          auVar243._13_3_ = 0;
          auVar244 = NEON_ucvtf(auVar243,4);
          auVar359._0_4_ = (int)(short)((ushort)(byte)uVar167 - (ushort)(byte)uVar358);
          auVar359._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar167 >> 8) - (ushort)bVar36);
          auVar359._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar167 >> 0x10) - (ushort)bVar37);
          auVar359._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar167 >> 0x18) - (ushort)bVar38);
          auVar360 = NEON_scvtf(auVar359,4);
          auVar223._1_3_ = 0;
          auVar223[0] = bVar39;
          auVar223[4] = bVar40;
          auVar223._5_3_ = 0;
          auVar223[8] = bVar41;
          auVar223._9_3_ = 0;
          auVar223[0xc] = bVar42;
          auVar223._13_3_ = 0;
          auVar361 = NEON_ucvtf(auVar223,4);
          auVar200._0_4_ = (int)(short)((ushort)(byte)((ulong)uVar167 >> 0x20) - (ushort)bVar39);
          auVar200._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar167 >> 0x28) - (ushort)bVar40);
          auVar200._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar167 >> 0x30) - (ushort)bVar41);
          auVar200._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar167 >> 0x38) - (ushort)bVar42);
          auVar201 = NEON_scvtf(auVar200,4);
          bVar36 = (byte)((ulong)uVar140 >> 8);
          bVar37 = (byte)((ulong)uVar140 >> 0x10);
          bVar38 = (byte)((ulong)uVar140 >> 0x18);
          bVar39 = (byte)((ulong)uVar140 >> 0x20);
          bVar40 = (byte)((ulong)uVar140 >> 0x28);
          bVar41 = (byte)((ulong)uVar140 >> 0x30);
          bVar42 = (byte)((ulong)uVar140 >> 0x38);
          auVar202._6_2_ = 0;
          auVar202._0_6_ =
               (uint6)CONCAT14(bVar36,(uint)CONCAT12(bVar36,(ushort)(byte)uVar140)) & 0xffff0000ffff
          ;
          auVar202[8] = bVar37;
          auVar202._9_3_ = 0;
          auVar202[0xc] = bVar38;
          auVar202._13_3_ = 0;
          auVar96 = NEON_ucvtf(auVar202,4);
          auVar113._0_4_ = (int)(short)((ushort)(byte)uVar139 - (ushort)(byte)uVar140);
          auVar113._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar139 >> 8) - (ushort)bVar36);
          auVar113._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar139 >> 0x10) - (ushort)bVar37);
          auVar113._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar139 >> 0x18) - (ushort)bVar38);
          auVar75 = NEON_scvtf(auVar113,4);
          fVar381 = auVar96._0_4_ + afStack_1f0[0] * auVar75._0_4_;
          fVar390 = auVar96._4_4_ + afStack_1f0[1] * auVar75._4_4_;
          fVar214 = auVar96._8_4_ + afStack_1f0[2] * auVar75._8_4_;
          fVar217 = auVar96._12_4_ + afStack_1f0[3] * auVar75._12_4_;
          auVar224._1_3_ = 0;
          auVar224[0] = bVar39;
          auVar224[4] = bVar40;
          auVar224._5_3_ = 0;
          auVar224[8] = bVar41;
          auVar224._9_3_ = 0;
          auVar224[0xc] = bVar42;
          auVar224._13_3_ = 0;
          auVar96 = NEON_ucvtf(auVar224,4);
          auVar114._0_4_ = (int)(short)((ushort)(byte)((ulong)uVar139 >> 0x20) - (ushort)bVar39);
          auVar114._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar139 >> 0x28) - (ushort)bVar40);
          auVar114._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar139 >> 0x30) - (ushort)bVar41);
          auVar114._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar139 >> 0x38) - (ushort)bVar42);
          auVar75 = NEON_scvtf(auVar114,4);
          fVar220 = auVar96._0_4_ + afStack_1f0[4] * auVar75._0_4_;
          fVar234 = auVar96._4_4_ + afStack_1f0[5] * auVar75._4_4_;
          fVar236 = auVar96._8_4_ + afStack_1f0[6] * auVar75._8_4_;
          fVar238 = auVar96._12_4_ + afStack_1f0[7] * auVar75._12_4_;
          bVar36 = (byte)((ulong)uVar141 >> 8);
          bVar37 = (byte)((ulong)uVar141 >> 0x10);
          bVar38 = (byte)((ulong)uVar141 >> 0x18);
          bVar39 = (byte)((ulong)uVar141 >> 0x20);
          bVar40 = (byte)((ulong)uVar141 >> 0x28);
          bVar41 = (byte)((ulong)uVar141 >> 0x30);
          bVar42 = (byte)((ulong)uVar141 >> 0x38);
          auVar115._6_2_ = 0;
          auVar115._0_6_ =
               (uint6)CONCAT14(bVar36,(uint)CONCAT12(bVar36,(ushort)(byte)uVar141)) & 0xffff0000ffff
          ;
          auVar115[8] = bVar37;
          auVar115._9_3_ = 0;
          auVar115[0xc] = bVar38;
          auVar115._13_3_ = 0;
          auVar256 = NEON_ucvtf(auVar115,4);
          auVar124._0_4_ = (int)(short)((ushort)(byte)uVar168 - (ushort)(byte)uVar141);
          auVar124._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar168 >> 8) - (ushort)bVar36);
          auVar124._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar168 >> 0x10) - (ushort)bVar37);
          auVar124._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar168 >> 0x18) - (ushort)bVar38);
          auVar301 = NEON_scvtf(auVar124,4);
          bVar36 = (byte)((ulong)uVar334 >> 8);
          bVar37 = (byte)((ulong)uVar334 >> 0x10);
          bVar38 = (byte)((ulong)uVar334 >> 0x18);
          bVar43 = (byte)((ulong)uVar334 >> 0x20);
          bVar44 = (byte)((ulong)uVar334 >> 0x28);
          bVar45 = (byte)((ulong)uVar334 >> 0x30);
          bVar46 = (byte)((ulong)uVar334 >> 0x38);
          auVar245._1_3_ = 0;
          auVar245[0] = bVar39;
          auVar245[4] = bVar40;
          auVar245._5_3_ = 0;
          auVar245[8] = bVar41;
          auVar245._9_3_ = 0;
          auVar245[0xc] = bVar42;
          auVar245._13_3_ = 0;
          auVar246 = NEON_ucvtf(auVar245,4);
          auVar362._0_4_ = (int)(short)((ushort)(byte)((ulong)uVar168 >> 0x20) - (ushort)bVar39);
          auVar362._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar168 >> 0x28) - (ushort)bVar40);
          auVar362._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar168 >> 0x30) - (ushort)bVar41);
          auVar362._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar168 >> 0x38) - (ushort)bVar42);
          auVar363 = NEON_scvtf(auVar362,4);
          auVar364._6_2_ = 0;
          auVar364._0_6_ =
               (uint6)CONCAT14(bVar36,(uint)CONCAT12(bVar36,(ushort)(byte)uVar334)) & 0xffff0000ffff
          ;
          auVar364[8] = bVar37;
          auVar364._9_3_ = 0;
          auVar364[0xc] = bVar38;
          auVar364._13_3_ = 0;
          auVar96 = NEON_ucvtf(auVar364,4);
          auVar125._0_4_ = (int)(short)((ushort)(byte)uVar266 - (ushort)(byte)uVar334);
          auVar125._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar266 >> 8) - (ushort)bVar36);
          auVar125._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar266 >> 0x10) - (ushort)bVar37);
          auVar125._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar266 >> 0x18) - (ushort)bVar38);
          auVar75 = NEON_scvtf(auVar125,4);
          fVar356 = auVar96._0_4_ + afStack_1f0[8] * auVar75._0_4_;
          fVar375 = auVar96._4_4_ + afStack_1f0[9] * auVar75._4_4_;
          fVar377 = auVar96._8_4_ + afStack_1f0[10] * auVar75._8_4_;
          fVar379 = auVar96._12_4_ + afStack_1f0[0xb] * auVar75._12_4_;
          auVar336._1_3_ = 0;
          auVar336[0] = bVar43;
          auVar336[4] = bVar44;
          auVar336._5_3_ = 0;
          auVar336[8] = bVar45;
          auVar336._9_3_ = 0;
          auVar336[0xc] = bVar46;
          auVar336._13_3_ = 0;
          auVar96 = NEON_ucvtf(auVar336,4);
          auVar268._0_4_ = (int)(short)((ushort)(byte)((ulong)uVar266 >> 0x20) - (ushort)bVar43);
          auVar268._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar266 >> 0x28) - (ushort)bVar44);
          auVar268._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar266 >> 0x30) - (ushort)bVar45);
          auVar268._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar266 >> 0x38) - (ushort)bVar46);
          auVar75 = NEON_scvtf(auVar268,4);
          fVar333 = auVar96._0_4_ + fVar50 * auVar75._0_4_;
          fVar347 = auVar96._4_4_ + fVar70 * auVar75._4_4_;
          fVar348 = auVar96._8_4_ + fVar90 * auVar75._8_4_;
          fVar349 = auVar96._12_4_ + fVar91 * auVar75._12_4_;
          bVar36 = (byte)((ulong)uVar293 >> 8);
          bVar37 = (byte)((ulong)uVar293 >> 0x10);
          bVar38 = (byte)((ulong)uVar293 >> 0x18);
          bVar39 = (byte)((ulong)uVar293 >> 0x20);
          bVar40 = (byte)((ulong)uVar293 >> 0x28);
          bVar41 = (byte)((ulong)uVar293 >> 0x30);
          bVar42 = (byte)((ulong)uVar293 >> 0x38);
          auVar126._6_2_ = 0;
          auVar126._0_6_ =
               (uint6)CONCAT14(bVar36,(uint)CONCAT12(bVar36,(ushort)(byte)uVar293)) & 0xffff0000ffff
          ;
          auVar126[8] = bVar37;
          auVar126._9_3_ = 0;
          auVar126[0xc] = bVar38;
          auVar126._13_3_ = 0;
          auVar303 = NEON_ucvtf(auVar126,4);
          auVar103._0_4_ = (int)(short)((ushort)(byte)uVar169 - (ushort)(byte)uVar293);
          auVar103._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar169 >> 8) - (ushort)bVar36);
          auVar103._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar169 >> 0x10) - (ushort)bVar37);
          auVar103._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar169 >> 0x18) - (ushort)bVar38);
          auVar183 = NEON_scvtf(auVar103,4);
          bVar36 = (byte)((ulong)uVar143 >> 8);
          bVar37 = (byte)((ulong)uVar143 >> 0x10);
          bVar38 = (byte)((ulong)uVar143 >> 0x18);
          bVar43 = (byte)((ulong)uVar143 >> 0x20);
          bVar44 = (byte)((ulong)uVar143 >> 0x28);
          bVar45 = (byte)((ulong)uVar143 >> 0x30);
          bVar46 = (byte)((ulong)uVar143 >> 0x38);
          auVar269._1_3_ = 0;
          auVar269[0] = bVar39;
          auVar269[4] = bVar40;
          auVar269._5_3_ = 0;
          auVar269[8] = bVar41;
          auVar269._9_3_ = 0;
          auVar269[0xc] = bVar42;
          auVar269._13_3_ = 0;
          auVar270 = NEON_ucvtf(auVar269,4);
          auVar247._6_2_ = 0;
          auVar247._0_6_ =
               (uint6)CONCAT14(bVar36,(uint)CONCAT12(bVar36,(ushort)(byte)uVar143)) & 0xffff0000ffff
          ;
          auVar247[8] = bVar37;
          auVar247._9_3_ = 0;
          auVar247[0xc] = bVar38;
          auVar247._13_3_ = 0;
          auVar295._0_4_ = (int)(short)((ushort)(byte)((ulong)uVar169 >> 0x20) - (ushort)bVar39);
          auVar295._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar169 >> 0x28) - (ushort)bVar40);
          auVar295._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar169 >> 0x30) - (ushort)bVar41);
          auVar295._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar169 >> 0x38) - (ushort)bVar42);
          auVar296 = NEON_scvtf(auVar295,4);
          auVar297._0_4_ = (int)(short)((ushort)(byte)uVar142 - (ushort)(byte)uVar143);
          auVar297._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar142 >> 8) - (ushort)bVar36);
          auVar297._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar142 >> 0x10) - (ushort)bVar37);
          auVar297._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar142 >> 0x18) - (ushort)bVar38);
          auVar75 = NEON_ucvtf(auVar247,4);
          auVar96 = NEON_scvtf(auVar297,4);
          fVar240 = auVar75._0_4_ + afStack_1f0[0] * auVar96._0_4_;
          fVar258 = auVar75._4_4_ + afStack_1f0[1] * auVar96._4_4_;
          fVar260 = auVar75._8_4_ + afStack_1f0[2] * auVar96._8_4_;
          fVar262 = auVar75._12_4_ + afStack_1f0[3] * auVar96._12_4_;
          auVar298._1_3_ = 0;
          auVar298[0] = bVar43;
          auVar298[4] = bVar44;
          auVar298._5_3_ = 0;
          auVar298[8] = bVar45;
          auVar298._9_3_ = 0;
          auVar298[0xc] = bVar46;
          auVar298._13_3_ = 0;
          auVar96 = NEON_ucvtf(auVar298,4);
          auVar104._0_4_ = (int)(short)((ushort)(byte)((ulong)uVar142 >> 0x20) - (ushort)bVar43);
          auVar104._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar142 >> 0x28) - (ushort)bVar44);
          auVar104._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar142 >> 0x30) - (ushort)bVar45);
          auVar104._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar142 >> 0x38) - (ushort)bVar46);
          auVar75 = NEON_scvtf(auVar104,4);
          fVar291 = auVar96._0_4_ + afStack_1f0[4] * auVar75._0_4_;
          fVar307 = auVar96._4_4_ + afStack_1f0[5] * auVar75._4_4_;
          fVar309 = auVar96._8_4_ + afStack_1f0[6] * auVar75._8_4_;
          fVar311 = auVar96._12_4_ + afStack_1f0[7] * auVar75._12_4_;
          bVar36 = (byte)((ulong)uVar170 >> 8);
          bVar37 = (byte)((ulong)uVar170 >> 0x10);
          bVar38 = (byte)((ulong)uVar170 >> 0x18);
          bVar39 = (byte)((ulong)uVar170 >> 0x20);
          bVar40 = (byte)((ulong)uVar170 >> 0x28);
          bVar41 = (byte)((ulong)uVar170 >> 0x30);
          bVar42 = (byte)((ulong)uVar170 >> 0x38);
          auVar127._6_2_ = 0;
          auVar127._0_6_ =
               (uint6)CONCAT14(bVar36,(uint)CONCAT12(bVar36,(ushort)(byte)uVar170)) & 0xffff0000ffff
          ;
          auVar127[8] = bVar37;
          auVar127._9_3_ = 0;
          auVar127[0xc] = bVar38;
          auVar127._13_3_ = 0;
          auVar211 = NEON_ucvtf(auVar127,4);
          auVar128._0_4_ = (int)(short)((ushort)(byte)uVar382 - (ushort)(byte)uVar170);
          auVar128._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar382 >> 8) - (ushort)bVar36);
          auVar128._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar382 >> 0x10) - (ushort)bVar37);
          auVar128._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar382 >> 0x18) - (ushort)bVar38);
          auVar317 = NEON_scvtf(auVar128,4);
          bVar36 = (byte)((ulong)uVar321 >> 8);
          bVar37 = (byte)((ulong)uVar321 >> 0x10);
          bVar38 = (byte)((ulong)uVar321 >> 0x18);
          bVar43 = (byte)((ulong)uVar321 >> 0x20);
          bVar44 = (byte)((ulong)uVar321 >> 0x28);
          bVar45 = (byte)((ulong)uVar321 >> 0x30);
          bVar46 = (byte)((ulong)uVar321 >> 0x38);
          auVar365._1_3_ = 0;
          auVar365[0] = bVar39;
          auVar365[4] = bVar40;
          auVar365._5_3_ = 0;
          auVar365[8] = bVar41;
          auVar365._9_3_ = 0;
          auVar365[0xc] = bVar42;
          auVar365._13_3_ = 0;
          auVar366 = NEON_ucvtf(auVar365,4);
          auVar171._0_4_ = (int)(short)((ushort)(byte)((ulong)uVar382 >> 0x20) - (ushort)bVar39);
          auVar171._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar382 >> 0x28) - (ushort)bVar40);
          auVar171._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar382 >> 0x30) - (ushort)bVar41);
          auVar171._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar382 >> 0x38) - (ushort)bVar42);
          auVar341 = NEON_scvtf(auVar171,4);
          auVar172._6_2_ = 0;
          auVar172._0_6_ =
               (uint6)CONCAT14(bVar36,(uint)CONCAT12(bVar36,(ushort)(byte)uVar321)) & 0xffff0000ffff
          ;
          auVar172[8] = bVar37;
          auVar172._9_3_ = 0;
          auVar172[0xc] = bVar38;
          auVar172._13_3_ = 0;
          auVar75 = NEON_ucvtf(auVar172,4);
          auVar337._0_4_ = (int)(short)((ushort)(byte)uVar313 - (ushort)(byte)uVar321);
          auVar337._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar313 >> 8) - (ushort)bVar36);
          auVar337._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar313 >> 0x10) - (ushort)bVar37);
          auVar337._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar313 >> 0x18) - (ushort)bVar38);
          auVar96 = NEON_scvtf(auVar337,4);
          fVar292 = auVar75._0_4_ + afStack_1f0[8] * auVar96._0_4_;
          fVar310 = auVar75._4_4_ + afStack_1f0[9] * auVar96._4_4_;
          fVar357 = auVar75._8_4_ + afStack_1f0[10] * auVar96._8_4_;
          fVar378 = auVar75._12_4_ + afStack_1f0[0xb] * auVar96._12_4_;
          auVar225._1_3_ = 0;
          auVar225[0] = bVar43;
          auVar225[4] = bVar44;
          auVar225._5_3_ = 0;
          auVar225[8] = bVar45;
          auVar225._9_3_ = 0;
          auVar225[0xc] = bVar46;
          auVar225._13_3_ = 0;
          auVar75 = NEON_ucvtf(auVar225,4);
          auVar315._0_4_ = (int)(short)((ushort)(byte)((ulong)uVar313 >> 0x20) - (ushort)bVar43);
          auVar315._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar313 >> 0x28) - (ushort)bVar44);
          auVar315._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar313 >> 0x30) - (ushort)bVar45);
          auVar315._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar313 >> 0x38) - (ushort)bVar46);
          auVar96 = NEON_scvtf(auVar315,4);
          fVar221 = auVar75._0_4_ + fVar50 * auVar96._0_4_;
          fVar235 = auVar75._4_4_ + fVar70 * auVar96._4_4_;
          fVar237 = auVar75._8_4_ + fVar90 * auVar96._8_4_;
          fVar239 = auVar75._12_4_ + fVar91 * auVar96._12_4_;
          bVar36 = (byte)((ulong)uVar145 >> 8);
          bVar38 = (byte)((ulong)uVar145 >> 0x10);
          bVar40 = (byte)((ulong)uVar145 >> 0x18);
          bVar42 = (byte)((ulong)uVar145 >> 0x20);
          bVar44 = (byte)((ulong)uVar145 >> 0x28);
          bVar46 = (byte)((ulong)uVar145 >> 0x30);
          bVar48 = (byte)((ulong)uVar145 >> 0x38);
          bVar37 = (byte)((ulong)uVar64 >> 8);
          bVar39 = (byte)((ulong)uVar64 >> 0x10);
          bVar41 = (byte)((ulong)uVar64 >> 0x18);
          bVar43 = (byte)((ulong)uVar64 >> 0x20);
          bVar45 = (byte)((ulong)uVar64 >> 0x28);
          bVar47 = (byte)((ulong)uVar64 >> 0x30);
          bVar49 = (byte)((ulong)uVar64 >> 0x38);
          auVar226._6_2_ = 0;
          auVar226._0_6_ =
               (uint6)CONCAT14(bVar36,(uint)CONCAT12(bVar36,(ushort)(byte)uVar145)) & 0xffff0000ffff
          ;
          auVar226[8] = bVar38;
          auVar226._9_3_ = 0;
          auVar226[0xc] = bVar40;
          auVar226._13_3_ = 0;
          auVar173._1_3_ = 0;
          auVar173[0] = bVar42;
          auVar173[4] = bVar44;
          auVar173._5_3_ = 0;
          auVar173[8] = bVar46;
          auVar173._9_3_ = 0;
          auVar173[0xc] = bVar48;
          auVar173._13_3_ = 0;
          auVar227 = NEON_ucvtf(auVar226,4);
          auVar345 = NEON_ucvtf(auVar173,4);
          auVar248._0_4_ = (int)(short)((ushort)(byte)uVar144 - (ushort)(byte)uVar145);
          auVar248._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar144 >> 8) - (ushort)bVar36);
          auVar248._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar144 >> 0x10) - (ushort)bVar38);
          auVar248._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar144 >> 0x18) - (ushort)bVar40);
          auVar249 = NEON_scvtf(auVar248,4);
          auVar250._6_2_ = 0;
          auVar250._0_6_ =
               (uint6)CONCAT14(bVar37,(uint)CONCAT12(bVar37,(ushort)(byte)uVar64)) & 0xffff0000ffff;
          auVar250[8] = bVar39;
          auVar250._9_3_ = 0;
          auVar250[0xc] = bVar41;
          auVar250._13_3_ = 0;
          auVar96 = NEON_ucvtf(auVar250,4);
          auVar146._0_4_ = (int)(short)((ushort)(byte)((ulong)uVar144 >> 0x20) - (ushort)bVar42);
          auVar146._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar144 >> 0x28) - (ushort)bVar44);
          auVar146._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar144 >> 0x30) - (ushort)bVar46);
          auVar146._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar144 >> 0x38) - (ushort)bVar48);
          auVar318 = NEON_scvtf(auVar146,4);
          auVar147._0_4_ = (int)(short)((ushort)(byte)uVar384 - (ushort)(byte)uVar64);
          auVar147._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar384 >> 8) - (ushort)bVar37);
          auVar147._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar384 >> 0x10) - (ushort)bVar39);
          auVar147._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar384 >> 0x18) - (ushort)bVar41);
          auVar75 = NEON_scvtf(auVar147,4);
          fVar241 = auVar96._0_4_ + afStack_1f0[0] * auVar75._0_4_;
          fVar259 = auVar96._4_4_ + afStack_1f0[1] * auVar75._4_4_;
          fVar261 = auVar96._8_4_ + afStack_1f0[2] * auVar75._8_4_;
          fVar263 = auVar96._12_4_ + afStack_1f0[3] * auVar75._12_4_;
          auVar148._1_3_ = 0;
          auVar148[0] = bVar43;
          auVar148[4] = bVar45;
          auVar148._5_3_ = 0;
          auVar148[8] = bVar47;
          auVar148._9_3_ = 0;
          auVar148[0xc] = bVar49;
          auVar148._13_3_ = 0;
          auVar96 = NEON_ucvtf(auVar148,4);
          auVar66._0_4_ = (int)(short)((ushort)(byte)((ulong)uVar384 >> 0x20) - (ushort)bVar43);
          auVar66._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar384 >> 0x28) - (ushort)bVar45);
          auVar66._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar384 >> 0x30) - (ushort)bVar47);
          auVar66._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar384 >> 0x38) - (ushort)bVar49);
          auVar75 = NEON_scvtf(auVar66,4);
          fVar265 = auVar96._0_4_ + afStack_1f0[4] * auVar75._0_4_;
          fVar286 = auVar96._4_4_ + afStack_1f0[5] * auVar75._4_4_;
          fVar288 = auVar96._8_4_ + afStack_1f0[6] * auVar75._8_4_;
          fVar290 = auVar96._12_4_ + afStack_1f0[7] * auVar75._12_4_;
          bVar36 = (byte)((ulong)uVar107 >> 8);
          bVar38 = (byte)((ulong)uVar107 >> 0x10);
          bVar40 = (byte)((ulong)uVar107 >> 0x18);
          bVar42 = (byte)((ulong)uVar107 >> 0x20);
          bVar44 = (byte)((ulong)uVar107 >> 0x28);
          bVar46 = (byte)((ulong)uVar107 >> 0x30);
          bVar48 = (byte)((ulong)uVar107 >> 0x38);
          bVar37 = (byte)((ulong)uVar350 >> 8);
          bVar39 = (byte)((ulong)uVar350 >> 0x10);
          bVar41 = (byte)((ulong)uVar350 >> 0x18);
          bVar43 = (byte)((ulong)uVar350 >> 0x20);
          bVar45 = (byte)((ulong)uVar350 >> 0x28);
          bVar47 = (byte)((ulong)uVar350 >> 0x30);
          bVar49 = (byte)((ulong)uVar350 >> 0x38);
          auVar174._6_2_ = 0;
          auVar174._0_6_ =
               (uint6)CONCAT14(bVar36,(uint)CONCAT12(bVar36,(ushort)(byte)uVar107)) & 0xffff0000ffff
          ;
          auVar174[8] = bVar38;
          auVar174._9_3_ = 0;
          auVar174[0xc] = bVar40;
          auVar174._13_3_ = 0;
          auVar354 = NEON_ucvtf(auVar174,4);
          auVar67._1_3_ = 0;
          auVar67[0] = bVar42;
          auVar67[4] = bVar44;
          auVar67._5_3_ = 0;
          auVar67[8] = bVar46;
          auVar67._9_3_ = 0;
          auVar67[0xc] = bVar48;
          auVar67._13_3_ = 0;
          auVar271._0_4_ = (int)(short)((ushort)(byte)uVar294 - (ushort)(byte)uVar107);
          auVar271._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar294 >> 8) - (ushort)bVar36);
          auVar271._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar294 >> 0x10) - (ushort)bVar38);
          auVar271._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar294 >> 0x18) - (ushort)bVar40);
          auVar388 = NEON_ucvtf(auVar67,4);
          auVar272 = NEON_scvtf(auVar271,4);
          auVar273._6_2_ = 0;
          auVar273._0_6_ =
               (uint6)CONCAT14(bVar37,(uint)CONCAT12(bVar37,(ushort)(byte)uVar350)) & 0xffff0000ffff
          ;
          auVar273[8] = bVar39;
          auVar273._9_3_ = 0;
          auVar273[0xc] = bVar41;
          auVar273._13_3_ = 0;
          auVar96 = NEON_ucvtf(auVar273,4);
          auVar203._0_4_ = (int)(short)((ushort)(byte)((ulong)uVar294 >> 0x20) - (ushort)bVar42);
          auVar203._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar294 >> 0x28) - (ushort)bVar44);
          auVar203._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar294 >> 0x30) - (ushort)bVar46);
          auVar203._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar294 >> 0x38) - (ushort)bVar48);
          auVar204 = NEON_scvtf(auVar203,4);
          auVar205._0_4_ = (int)(short)((ushort)(byte)uVar54 - (ushort)(byte)uVar350);
          auVar205._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar54 >> 8) - (ushort)bVar37);
          auVar205._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar54 >> 0x10) - (ushort)bVar39);
          auVar205._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar54 >> 0x18) - (ushort)bVar41);
          auVar75 = NEON_scvtf(auVar205,4);
          fVar264 = auVar96._0_4_ + afStack_1f0[8] * auVar75._0_4_;
          fVar285 = auVar96._4_4_ + afStack_1f0[9] * auVar75._4_4_;
          fVar287 = auVar96._8_4_ + afStack_1f0[10] * auVar75._8_4_;
          fVar289 = auVar96._12_4_ + afStack_1f0[0xb] * auVar75._12_4_;
          auVar206._1_3_ = 0;
          auVar206[0] = bVar43;
          auVar206[4] = bVar45;
          auVar206._5_3_ = 0;
          auVar206[8] = bVar47;
          auVar206._9_3_ = 0;
          auVar206[0xc] = bVar49;
          auVar206._13_3_ = 0;
          auVar96 = NEON_ucvtf(auVar206,4);
          auVar56._0_4_ = (int)(short)((ushort)(byte)((ulong)uVar54 >> 0x20) - (ushort)bVar43);
          auVar56._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar54 >> 0x28) - (ushort)bVar45);
          auVar56._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar54 >> 0x30) - (ushort)bVar47);
          auVar56._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar54 >> 0x38) - (ushort)bVar49);
          auVar75 = NEON_scvtf(auVar56,4);
          fVar389 = auVar96._0_4_ + fVar50 * auVar75._0_4_;
          fVar391 = auVar96._4_4_ + fVar70 * auVar75._4_4_;
          fVar215 = auVar96._8_4_ + fVar90 * auVar75._8_4_;
          fVar218 = auVar96._12_4_ + fVar91 * auVar75._12_4_;
          bVar36 = (byte)((ulong)uVar94 >> 8);
          bVar37 = (byte)((ulong)uVar94 >> 0x10);
          bVar38 = (byte)((ulong)uVar94 >> 0x18);
          bVar39 = (byte)((ulong)uVar94 >> 0x20);
          bVar40 = (byte)((ulong)uVar94 >> 0x28);
          bVar41 = (byte)((ulong)uVar94 >> 0x30);
          bVar42 = (byte)((ulong)uVar94 >> 0x38);
          bVar43 = (byte)((ulong)uVar61 >> 8);
          bVar44 = (byte)((ulong)uVar61 >> 0x10);
          bVar45 = (byte)((ulong)uVar61 >> 0x18);
          bVar46 = (byte)((ulong)uVar61 >> 0x20);
          bVar47 = (byte)((ulong)uVar61 >> 0x28);
          bVar48 = (byte)((ulong)uVar61 >> 0x30);
          bVar49 = (byte)((ulong)uVar61 >> 0x38);
          auVar57._6_2_ = 0;
          auVar57._0_6_ =
               (uint6)CONCAT14(bVar36,(uint)CONCAT12(bVar36,(ushort)(byte)uVar94)) & 0xffff0000ffff;
          auVar57[8] = bVar37;
          auVar57._9_3_ = 0;
          auVar57[0xc] = bVar38;
          auVar57._13_3_ = 0;
          auVar96 = NEON_ucvtf(auVar57,4);
          auVar52._1_3_ = 0;
          auVar52[0] = bVar39;
          auVar52[4] = bVar40;
          auVar52._5_3_ = 0;
          auVar52[8] = bVar41;
          auVar52._9_3_ = 0;
          auVar52[0xc] = bVar42;
          auVar52._13_3_ = 0;
          auVar75 = NEON_ucvtf(auVar52,4);
          auVar68._0_4_ = (int)(short)((ushort)(byte)uVar383 - (ushort)(byte)uVar94);
          auVar68._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar383 >> 8) - (ushort)bVar36);
          auVar68._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar383 >> 0x10) - (ushort)bVar37);
          auVar68._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar383 >> 0x18) - (ushort)bVar38);
          auVar160 = NEON_scvtf(auVar68,4);
          auVar69._6_2_ = 0;
          auVar69._0_6_ =
               (uint6)CONCAT14(bVar43,(uint)CONCAT12(bVar43,(ushort)(byte)uVar61)) & 0xffff0000ffff;
          auVar69[8] = bVar44;
          auVar69._9_3_ = 0;
          auVar69[0xc] = bVar45;
          auVar69._13_3_ = 0;
          auVar280 = NEON_ucvtf(auVar69,4);
          auVar149._0_4_ = (int)(short)((ushort)(byte)((ulong)uVar383 >> 0x20) - (ushort)bVar39);
          auVar149._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar383 >> 0x28) - (ushort)bVar40);
          auVar149._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar383 >> 0x30) - (ushort)bVar41);
          auVar149._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar383 >> 0x38) - (ushort)bVar42);
          auVar327 = NEON_scvtf(auVar149,4);
          auVar150._0_4_ = (int)(short)((ushort)(byte)uVar267 - (ushort)(byte)uVar61);
          auVar150._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 8) - (ushort)bVar43);
          auVar150._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x10) - (ushort)bVar44);
          auVar150._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x18) - (ushort)bVar45);
          auVar326 = NEON_scvtf(auVar150,4);
          fVar166 = auVar280._0_4_ + afStack_1f0[0] * auVar326._0_4_;
          fVar198 = auVar280._4_4_ + afStack_1f0[1] * auVar326._4_4_;
          fVar213 = auVar280._8_4_ + afStack_1f0[2] * auVar326._8_4_;
          fVar216 = auVar280._12_4_ + afStack_1f0[3] * auVar326._12_4_;
          auVar63._1_3_ = 0;
          auVar63[0] = bVar46;
          auVar63[4] = bVar47;
          auVar63._5_3_ = 0;
          auVar63[8] = bVar48;
          auVar63._9_3_ = 0;
          auVar63[0xc] = bVar49;
          auVar63._13_3_ = 0;
          auVar151._0_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x20) - (ushort)bVar46);
          auVar151._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x28) - (ushort)bVar47);
          auVar151._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x30) - (ushort)bVar48);
          auVar151._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x38) - (ushort)bVar49);
          auVar280 = NEON_ucvtf(auVar63,4);
          auVar326 = NEON_scvtf(auVar151,4);
          fVar100 = auVar280._0_4_ + afStack_1f0[4] * auVar326._0_4_;
          fVar138 = auVar280._4_4_ + afStack_1f0[5] * auVar326._4_4_;
          fVar164 = auVar280._8_4_ + afStack_1f0[6] * auVar326._8_4_;
          fVar165 = auVar280._12_4_ + afStack_1f0[7] * auVar326._12_4_;
          bVar36 = (byte)((ulong)uVar187 >> 8);
          bVar37 = (byte)((ulong)uVar187 >> 0x10);
          bVar38 = (byte)((ulong)uVar187 >> 0x18);
          bVar39 = (byte)((ulong)uVar187 >> 0x20);
          bVar40 = (byte)((ulong)uVar187 >> 0x28);
          bVar41 = (byte)((ulong)uVar187 >> 0x30);
          bVar42 = (byte)((ulong)uVar187 >> 0x38);
          auVar228._6_2_ = 0;
          auVar228._0_6_ =
               (uint6)CONCAT14(bVar117,(uint)CONCAT12(bVar117,(ushort)(byte)uVar71)) &
               0xffff0000ffff;
          auVar228[8] = bVar118;
          auVar228._9_3_ = 0;
          auVar228[0xc] = bVar119;
          auVar228._13_3_ = 0;
          auVar229 = NEON_ucvtf(auVar228,4);
          auVar152._1_3_ = 0;
          auVar152[0] = bVar120;
          auVar152[4] = bVar121;
          auVar152._5_3_ = 0;
          auVar152[8] = bVar122;
          auVar152._9_3_ = 0;
          auVar152[0xc] = bVar123;
          auVar152._13_3_ = 0;
          auVar329 = NEON_ucvtf(auVar152,4);
          auVar58._0_4_ = (int)(short)((ushort)(byte)uVar53 - (ushort)(byte)uVar71);
          auVar58._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar53 >> 8) - (ushort)bVar117);
          auVar58._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar53 >> 0x10) - (ushort)bVar118);
          auVar58._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar53 >> 0x18) - (ushort)bVar119);
          auVar280 = NEON_scvtf(auVar58,4);
          auVar59._6_2_ = 0;
          auVar59._0_6_ =
               (uint6)CONCAT14(bVar36,(uint)CONCAT12(bVar36,(ushort)(byte)uVar187)) & 0xffff0000ffff
          ;
          auVar59[8] = bVar37;
          auVar59._9_3_ = 0;
          auVar59[0xc] = bVar38;
          auVar59._13_3_ = 0;
          auVar175._0_4_ = (int)(short)((ushort)(byte)((ulong)uVar53 >> 0x20) - (ushort)bVar120);
          auVar175._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar53 >> 0x28) - (ushort)bVar121);
          auVar175._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar53 >> 0x30) - (ushort)bVar122);
          auVar175._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar53 >> 0x38) - (ushort)bVar123);
          auVar326 = NEON_ucvtf(auVar59,4);
          auVar386 = NEON_scvtf(auVar175,4);
          auVar176._0_4_ = (int)(short)((ushort)(byte)uVar101 - (ushort)(byte)uVar187);
          auVar176._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar101 >> 8) - (ushort)bVar36);
          auVar176._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar101 >> 0x10) - (ushort)bVar37);
          auVar176._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar101 >> 0x18) - (ushort)bVar38);
          auVar177 = NEON_scvtf(auVar176,4);
          fVar92 = auVar326._0_4_ + afStack_1f0[8] * auVar177._0_4_;
          fVar93 = auVar326._4_4_ + afStack_1f0[9] * auVar177._4_4_;
          fVar98 = auVar326._8_4_ + afStack_1f0[10] * auVar177._8_4_;
          fVar99 = auVar326._12_4_ + afStack_1f0[0xb] * auVar177._12_4_;
          auVar178._1_3_ = 0;
          auVar178[0] = bVar39;
          auVar178[4] = bVar40;
          auVar178._5_3_ = 0;
          auVar178[8] = bVar41;
          auVar178._9_3_ = 0;
          auVar178[0xc] = bVar42;
          auVar178._13_3_ = 0;
          auVar326 = NEON_ucvtf(auVar178,4);
          auVar189._0_4_ = (int)(short)((ushort)(byte)((ulong)uVar101 >> 0x20) - (ushort)bVar39);
          auVar189._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar101 >> 0x28) - (ushort)bVar40);
          auVar189._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar101 >> 0x30) - (ushort)bVar41);
          auVar189._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar101 >> 0x38) - (ushort)bVar42);
          auVar177 = NEON_scvtf(auVar189,4);
          fVar308 = auVar326._0_4_ + fVar50 * auVar177._0_4_;
          fVar312 = auVar326._4_4_ + fVar70 * auVar177._4_4_;
          fVar376 = auVar326._8_4_ + fVar90 * auVar177._8_4_;
          fVar380 = auVar326._12_4_ + fVar91 * auVar177._12_4_;
          *puVar24 = (char)(int)(fVar381 +
                                ((auVar244._0_4_ + afStack_1f0[0] * auVar360._0_4_) - fVar381) *
                                fVar219);
          puVar24[1] = (char)(int)(fVar240 +
                                  ((auVar303._0_4_ + afStack_1f0[0] * auVar183._0_4_) - fVar240) *
                                  fVar219);
          puVar24[2] = (char)(int)(fVar241 +
                                  ((auVar227._0_4_ + afStack_1f0[0] * auVar249._0_4_) - fVar241) *
                                  fVar219);
          puVar24[3] = (char)(int)(fVar166 +
                                  ((auVar96._0_4_ + afStack_1f0[0] * auVar160._0_4_) - fVar166) *
                                  fVar219);
          puVar24[4] = (char)(int)(fVar390 +
                                  ((auVar244._4_4_ + afStack_1f0[1] * auVar360._4_4_) - fVar390) *
                                  fVar219);
          puVar24[5] = (char)(int)(fVar258 +
                                  ((auVar303._4_4_ + afStack_1f0[1] * auVar183._4_4_) - fVar258) *
                                  fVar219);
          puVar24[6] = (char)(int)(fVar259 +
                                  ((auVar227._4_4_ + afStack_1f0[1] * auVar249._4_4_) - fVar259) *
                                  fVar219);
          puVar24[7] = (char)(int)(fVar198 +
                                  ((auVar96._4_4_ + afStack_1f0[1] * auVar160._4_4_) - fVar198) *
                                  fVar219);
          puVar24[8] = (char)(int)(fVar214 +
                                  ((auVar244._8_4_ + afStack_1f0[2] * auVar360._8_4_) - fVar214) *
                                  fVar219);
          puVar24[9] = (char)(int)(fVar260 +
                                  ((auVar303._8_4_ + afStack_1f0[2] * auVar183._8_4_) - fVar260) *
                                  fVar219);
          puVar24[10] = (char)(int)(fVar261 +
                                   ((auVar227._8_4_ + afStack_1f0[2] * auVar249._8_4_) - fVar261) *
                                   fVar219);
          puVar24[0xb] = (char)(int)(fVar213 +
                                    ((auVar96._8_4_ + afStack_1f0[2] * auVar160._8_4_) - fVar213) *
                                    fVar219);
          puVar24[0xc] = (char)(int)(fVar217 +
                                    ((auVar244._12_4_ + afStack_1f0[3] * auVar360._12_4_) - fVar217)
                                    * fVar219);
          puVar24[0xd] = (char)(int)(fVar262 +
                                    ((auVar303._12_4_ + afStack_1f0[3] * auVar183._12_4_) - fVar262)
                                    * fVar219);
          puVar24[0xe] = (char)(int)(fVar263 +
                                    ((auVar227._12_4_ + afStack_1f0[3] * auVar249._12_4_) - fVar263)
                                    * fVar219);
          puVar24[0xf] = (char)(int)(fVar216 +
                                    ((auVar96._12_4_ + afStack_1f0[3] * auVar160._12_4_) - fVar216)
                                    * fVar219);
          puVar24[0x10] =
               (char)(int)(fVar220 +
                          ((auVar361._0_4_ + afStack_1f0[4] * auVar201._0_4_) - fVar220) * fVar219);
          puVar24[0x11] =
               (char)(int)(fVar291 +
                          ((auVar270._0_4_ + afStack_1f0[4] * auVar296._0_4_) - fVar291) * fVar219);
          puVar24[0x12] =
               (char)(int)(fVar265 +
                          ((auVar345._0_4_ + afStack_1f0[4] * auVar318._0_4_) - fVar265) * fVar219);
          puVar24[0x13] =
               (char)(int)(fVar100 +
                          ((auVar75._0_4_ + afStack_1f0[4] * auVar327._0_4_) - fVar100) * fVar219);
          puVar24[0x14] =
               (char)(int)(fVar234 +
                          ((auVar361._4_4_ + afStack_1f0[5] * auVar201._4_4_) - fVar234) * fVar219);
          puVar24[0x15] =
               (char)(int)(fVar307 +
                          ((auVar270._4_4_ + afStack_1f0[5] * auVar296._4_4_) - fVar307) * fVar219);
          puVar24[0x16] =
               (char)(int)(fVar286 +
                          ((auVar345._4_4_ + afStack_1f0[5] * auVar318._4_4_) - fVar286) * fVar219);
          puVar24[0x17] =
               (char)(int)(fVar138 +
                          ((auVar75._4_4_ + afStack_1f0[5] * auVar327._4_4_) - fVar138) * fVar219);
          puVar24[0x18] =
               (char)(int)(fVar236 +
                          ((auVar361._8_4_ + afStack_1f0[6] * auVar201._8_4_) - fVar236) * fVar219);
          puVar24[0x19] =
               (char)(int)(fVar309 +
                          ((auVar270._8_4_ + afStack_1f0[6] * auVar296._8_4_) - fVar309) * fVar219);
          puVar24[0x1a] =
               (char)(int)(fVar288 +
                          ((auVar345._8_4_ + afStack_1f0[6] * auVar318._8_4_) - fVar288) * fVar219);
          puVar24[0x1b] =
               (char)(int)(fVar164 +
                          ((auVar75._8_4_ + afStack_1f0[6] * auVar327._8_4_) - fVar164) * fVar219);
          puVar24[0x1c] =
               (char)(int)(fVar238 +
                          ((auVar361._12_4_ + afStack_1f0[7] * auVar201._12_4_) - fVar238) * fVar219
                          );
          puVar24[0x1d] =
               (char)(int)(fVar311 +
                          ((auVar270._12_4_ + afStack_1f0[7] * auVar296._12_4_) - fVar311) * fVar219
                          );
          puVar24[0x1e] =
               (char)(int)(fVar290 +
                          ((auVar345._12_4_ + afStack_1f0[7] * auVar318._12_4_) - fVar290) * fVar219
                          );
          puVar24[0x1f] =
               (char)(int)(fVar165 +
                          ((auVar75._12_4_ + afStack_1f0[7] * auVar327._12_4_) - fVar165) * fVar219)
          ;
          puVar24[0x20] =
               (char)(int)(fVar356 +
                          ((auVar256._0_4_ + afStack_1f0[8] * auVar301._0_4_) - fVar356) * fVar219);
          puVar24[0x21] =
               (char)(int)(fVar292 +
                          ((auVar211._0_4_ + afStack_1f0[8] * auVar317._0_4_) - fVar292) * fVar219);
          puVar24[0x22] =
               (char)(int)(fVar264 +
                          ((auVar354._0_4_ + afStack_1f0[8] * auVar272._0_4_) - fVar264) * fVar219);
          puVar24[0x23] =
               (char)(int)(fVar92 + ((auVar229._0_4_ + afStack_1f0[8] * auVar280._0_4_) - fVar92) *
                                    fVar219);
          puVar24[0x24] =
               (char)(int)(fVar375 +
                          ((auVar256._4_4_ + afStack_1f0[9] * auVar301._4_4_) - fVar375) * fVar219);
          puVar24[0x25] =
               (char)(int)(fVar310 +
                          ((auVar211._4_4_ + afStack_1f0[9] * auVar317._4_4_) - fVar310) * fVar219);
          puVar24[0x26] =
               (char)(int)(fVar285 +
                          ((auVar354._4_4_ + afStack_1f0[9] * auVar272._4_4_) - fVar285) * fVar219);
          puVar24[0x27] =
               (char)(int)(fVar93 + ((auVar229._4_4_ + afStack_1f0[9] * auVar280._4_4_) - fVar93) *
                                    fVar219);
          puVar24[0x28] =
               (char)(int)(fVar377 +
                          ((auVar256._8_4_ + afStack_1f0[10] * auVar301._8_4_) - fVar377) * fVar219)
          ;
          puVar24[0x29] =
               (char)(int)(fVar357 +
                          ((auVar211._8_4_ + afStack_1f0[10] * auVar317._8_4_) - fVar357) * fVar219)
          ;
          puVar24[0x2a] =
               (char)(int)(fVar287 +
                          ((auVar354._8_4_ + afStack_1f0[10] * auVar272._8_4_) - fVar287) * fVar219)
          ;
          puVar24[0x2b] =
               (char)(int)(fVar98 + ((auVar229._8_4_ + afStack_1f0[10] * auVar280._8_4_) - fVar98) *
                                    fVar219);
          puVar24[0x2c] =
               (char)(int)(fVar379 +
                          ((auVar256._12_4_ + afStack_1f0[0xb] * auVar301._12_4_) - fVar379) *
                          fVar219);
          puVar24[0x2d] =
               (char)(int)(fVar378 +
                          ((auVar211._12_4_ + afStack_1f0[0xb] * auVar317._12_4_) - fVar378) *
                          fVar219);
          puVar24[0x2e] =
               (char)(int)(fVar289 +
                          ((auVar354._12_4_ + afStack_1f0[0xb] * auVar272._12_4_) - fVar289) *
                          fVar219);
          puVar24[0x2f] =
               (char)(int)(fVar99 + ((auVar229._12_4_ + afStack_1f0[0xb] * auVar280._12_4_) - fVar99
                                    ) * fVar219);
          puVar24[0x30] =
               (char)(int)(fVar333 +
                          ((auVar246._0_4_ + fVar50 * auVar363._0_4_) - fVar333) * fVar219);
          puVar24[0x31] =
               (char)(int)(fVar221 +
                          ((auVar366._0_4_ + fVar50 * auVar341._0_4_) - fVar221) * fVar219);
          puVar24[0x32] =
               (char)(int)(fVar389 +
                          ((auVar388._0_4_ + fVar50 * auVar204._0_4_) - fVar389) * fVar219);
          puVar24[0x33] =
               (char)(int)(fVar308 +
                          ((auVar329._0_4_ + fVar50 * auVar386._0_4_) - fVar308) * fVar219);
          puVar24[0x34] =
               (char)(int)(fVar347 +
                          ((auVar246._4_4_ + fVar70 * auVar363._4_4_) - fVar347) * fVar219);
          puVar24[0x35] =
               (char)(int)(fVar235 +
                          ((auVar366._4_4_ + fVar70 * auVar341._4_4_) - fVar235) * fVar219);
          puVar24[0x36] =
               (char)(int)(fVar391 +
                          ((auVar388._4_4_ + fVar70 * auVar204._4_4_) - fVar391) * fVar219);
          puVar24[0x37] =
               (char)(int)(fVar312 +
                          ((auVar329._4_4_ + fVar70 * auVar386._4_4_) - fVar312) * fVar219);
          puVar24[0x38] =
               (char)(int)(fVar348 +
                          ((auVar246._8_4_ + fVar90 * auVar363._8_4_) - fVar348) * fVar219);
          puVar24[0x39] =
               (char)(int)(fVar237 +
                          ((auVar366._8_4_ + fVar90 * auVar341._8_4_) - fVar237) * fVar219);
          puVar24[0x3a] =
               (char)(int)(fVar215 +
                          ((auVar388._8_4_ + fVar90 * auVar204._8_4_) - fVar215) * fVar219);
          puVar24[0x3b] =
               (char)(int)(fVar376 +
                          ((auVar329._8_4_ + fVar90 * auVar386._8_4_) - fVar376) * fVar219);
          puVar24[0x3c] =
               (char)(int)(fVar349 +
                          ((auVar246._12_4_ + fVar91 * auVar363._12_4_) - fVar349) * fVar219);
          puVar24[0x3d] =
               (char)(int)(fVar239 +
                          ((auVar366._12_4_ + fVar91 * auVar341._12_4_) - fVar239) * fVar219);
          puVar24[0x3e] =
               (char)(int)(fVar218 +
                          ((auVar388._12_4_ + fVar91 * auVar204._12_4_) - fVar218) * fVar219);
          puVar24[0x3f] =
               (char)(int)(fVar380 +
                          ((auVar329._12_4_ + fVar91 * auVar386._12_4_) - fVar380) * fVar219);
          puVar24 = puVar24 + param_7;
          uVar26 = uVar26 + 1;
          uVar32 = param_3[1];
          uVar25 = uVar32;
          uVar34 = uVar32;
          uVar33 = uVar32;
        } while (uVar26 < uVar32);
      }
      lVar31 = lVar31 + 0x10;
      uVar26 = *param_3;
      puVar16 = puVar16 + 0x40;
      puStack_2f8 = puStack_2f8 + 0x30;
      puStack_2f0 = puStack_2f0 + 0x10;
      uVar20 = uVar25;
      uVar28 = uVar29 + 0x10;
      uVar35 = uVar25;
    } while (uVar29 + 0x10 <= uVar26);
  }
  do {
    if (uVar26 < uVar29 + 8) {
      if (uVar26 <= uVar29) {
        if (lStack_240 != 0) {
          lStack_238 = lStack_240;
          __ZdlPv();
        }
        uVar25 = uStack_228;
        if (uStack_228 != 0) {
          uStack_220 = uStack_228;
          __ZdlPv();
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b0) {
          ___stack_chk_fail();
          if (uStack_228 != 0) {
            uStack_220 = uStack_228;
            __ZdlPv();
          }
          __Unwind_Resume();
          func_0x0001074287b0(plVar15,uVar25);
          lVar27 = *plVar15;
          if (uVar25 < 8) {
            uVar26 = 0;
            fVar90 = 2.0;
            fVar91 = 3.0;
            fVar50 = 0.0;
            fVar70 = 1.0;
          }
          else {
            uVar26 = 0;
            fVar90 = 2.0;
            fVar91 = 3.0;
            fVar50 = 0.0;
            fVar70 = 1.0;
            piVar30 = (int *)(lVar27 + 0x10);
            auVar75 = NEON_fmov(0x40800000,4);
            do {
              fVar92 = fVar50 + auVar75._0_4_;
              fVar93 = fVar70 + auVar75._4_4_;
              fVar98 = fVar90 + auVar75._8_4_;
              fVar99 = fVar91 + auVar75._12_4_;
              piVar30[-2] = (int)((fVar90 + 0.5) * fVar60);
              piVar30[-1] = (int)((fVar91 + 0.5) * fVar60);
              piVar30[-4] = (int)((fVar50 + 0.5) * fVar60);
              piVar30[-3] = (int)((fVar70 + 0.5) * fVar60);
              piVar30[2] = (int)((fVar98 + 0.5) * fVar60);
              piVar30[3] = (int)((fVar99 + 0.5) * fVar60);
              *piVar30 = (int)((fVar92 + 0.5) * fVar60);
              piVar30[1] = (int)((fVar93 + 0.5) * fVar60);
              fVar50 = fVar92 + auVar75._0_4_;
              fVar70 = fVar93 + auVar75._4_4_;
              fVar90 = fVar98 + auVar75._8_4_;
              fVar91 = fVar99 + auVar75._12_4_;
              uVar26 = uVar26 + 8;
              piVar30 = piVar30 + 8;
            } while (uVar26 < uVar25 - 7);
          }
          if ((2 < uVar25) && (uVar26 < uVar25 - 3)) {
            auVar75 = NEON_fmov(0x40800000,4);
            piVar30 = (int *)(lVar27 + uVar26 * 4);
            do {
              piVar30[2] = (int)((fVar90 + 0.5) * fVar60);
              piVar30[3] = (int)((fVar91 + 0.5) * fVar60);
              *piVar30 = (int)((fVar50 + 0.5) * fVar60);
              piVar30[1] = (int)((fVar70 + 0.5) * fVar60);
              fVar50 = fVar50 + auVar75._0_4_;
              fVar70 = fVar70 + auVar75._4_4_;
              fVar90 = fVar90 + auVar75._8_4_;
              fVar91 = fVar91 + auVar75._12_4_;
              uVar26 = uVar26 + 4;
              piVar30 = piVar30 + 4;
            } while (uVar26 < uVar25 - 3);
          }
          if (uVar26 < uVar25) {
            do {
              *(int *)(lVar27 + uVar26 * 4) = (int)(fVar60 * ((float)uVar26 + 0.5));
              uVar26 = uVar26 + 1;
            } while (uVar25 != uVar26);
          }
          return;
        }
        return;
      }
      uVar29 = uVar26 - 8;
    }
    lVar31 = 0;
    uVar26 = *param_2;
    do {
      fVar50 = fVar60 + param_1 * (float)(uVar29 + lVar31);
      lVar21 = (long)fVar50;
      alStack_130[lVar31] = lVar21;
      lVar18 = lVar21 + 1;
      alStack_1b0[lVar31] = lVar18;
      afStack_1f0[lVar31] = (float)lVar18 - fVar50;
      if (lVar21 < 0) {
        alStack_130[lVar31] = 0;
      }
      if ((long)uVar26 <= lVar18) {
        alStack_1b0[lVar31] = uVar26 - 1;
      }
      lVar31 = lVar31 + 1;
    } while (lVar31 != 8);
    lVar31 = 0;
    lVar18 = uVar26 - 0x10;
    if (alStack_130[0] <= (long)(uVar26 - 0x10)) {
      lVar18 = alStack_130[0];
    }
    do {
      *(char *)((long)&uStack_200 + lVar31) = (char)(int)alStack_130[lVar31] - (char)lVar18;
      uVar8 = (int)alStack_1b0[lVar31] - (int)lVar18;
      plVar15 = (long *)(ulong)uVar8;
      *(char *)((long)&lStack_210 + lVar31) = (char)uVar8;
      lVar31 = lVar31 + 1;
    } while (lVar31 != 8);
    if (param_8 == 1) {
      if (uVar35 == 0) {
        uVar25 = 0;
LAB_10936aaa8:
        uVar20 = 0;
      }
      else {
        uVar26 = 0;
        plVar15 = (long *)(param_6 + uVar29);
        uVar25 = uVar35;
        do {
          fVar50 = *(float *)(lStack_240 + uVar26 * 4);
          plVar5 = (long *)(uStack_228 + uVar26 * 8);
          pauVar19 = (undefined1 (*) [16])(param_4 + lVar18 + *plVar5 * param_5);
          Hint_Prefetch(pauVar19[0x14] + lVar27,0,0,0);
          pauVar17 = (undefined1 (*) [16])(param_4 + lVar18 + plVar5[uVar25] * param_5);
          Hint_Prefetch(pauVar17[0x14] + lVar27,0,0,0);
          auVar75 = *pauVar19;
          auVar96 = *pauVar17;
          uVar267 = a64_TBL(ZEXT816(0),auVar75,uStack_200);
          uVar71 = a64_TBL(ZEXT816(0),auVar75,lStack_210);
          uVar294 = a64_TBL(ZEXT816(0),auVar96,uStack_200);
          uVar94 = a64_TBL(ZEXT816(0),auVar96,lStack_210);
          bVar36 = (byte)((ulong)uVar71 >> 8);
          bVar38 = (byte)((ulong)uVar71 >> 0x10);
          bVar40 = (byte)((ulong)uVar71 >> 0x18);
          bVar42 = (byte)((ulong)uVar71 >> 0x20);
          bVar44 = (byte)((ulong)uVar71 >> 0x28);
          bVar46 = (byte)((ulong)uVar71 >> 0x30);
          bVar48 = (byte)((ulong)uVar71 >> 0x38);
          bVar37 = (byte)((ulong)uVar94 >> 8);
          bVar39 = (byte)((ulong)uVar94 >> 0x10);
          bVar41 = (byte)((ulong)uVar94 >> 0x18);
          bVar43 = (byte)((ulong)uVar94 >> 0x20);
          bVar45 = (byte)((ulong)uVar94 >> 0x28);
          bVar47 = (byte)((ulong)uVar94 >> 0x30);
          bVar49 = (byte)((ulong)uVar94 >> 0x38);
          auVar132._6_2_ = 0;
          auVar132._0_6_ =
               (uint6)CONCAT14(bVar36,(uint)CONCAT12(bVar36,(ushort)(byte)uVar71)) & 0xffff0000ffff;
          auVar132[8] = bVar38;
          auVar132._9_3_ = 0;
          auVar132[0xc] = bVar40;
          auVar132._13_3_ = 0;
          auVar280 = NEON_ucvtf(auVar132,4);
          auVar137._1_3_ = 0;
          auVar137[0] = bVar42;
          auVar137[4] = bVar44;
          auVar137._5_3_ = 0;
          auVar137[8] = bVar46;
          auVar137._9_3_ = 0;
          auVar137[0xc] = bVar48;
          auVar137._13_3_ = 0;
          auVar326 = NEON_ucvtf(auVar137,4);
          auVar163._6_2_ = 0;
          auVar163._0_6_ =
               (uint6)CONCAT14(bVar37,(uint)CONCAT12(bVar37,(ushort)(byte)uVar94)) & 0xffff0000ffff;
          auVar163[8] = bVar39;
          auVar163._9_3_ = 0;
          auVar163[0xc] = bVar41;
          auVar163._13_3_ = 0;
          auVar388 = NEON_ucvtf(auVar163,4);
          auVar186._1_3_ = 0;
          auVar186[0] = bVar43;
          auVar186[4] = bVar45;
          auVar186._5_3_ = 0;
          auVar186[8] = bVar47;
          auVar186._9_3_ = 0;
          auVar186[0xc] = bVar49;
          auVar186._13_3_ = 0;
          auVar160 = NEON_ucvtf(auVar186,4);
          auVar197._0_4_ = (int)(short)((ushort)(byte)uVar267 - (ushort)(byte)uVar71);
          auVar197._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 8) - (ushort)bVar36);
          auVar197._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x10) - (ushort)bVar38);
          auVar197._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x18) - (ushort)bVar40);
          auVar183 = NEON_scvtf(auVar197,4);
          auVar87._0_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x20) - (ushort)bVar42);
          auVar87._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x28) - (ushort)bVar44);
          auVar87._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x30) - (ushort)bVar46);
          auVar87._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x38) - (ushort)bVar48);
          auVar75 = NEON_scvtf(auVar87,4);
          auVar88._0_4_ = (int)(short)((ushort)(byte)uVar294 - (ushort)(byte)uVar94);
          auVar88._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar294 >> 8) - (ushort)bVar37);
          auVar88._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar294 >> 0x10) - (ushort)bVar39);
          auVar88._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar294 >> 0x18) - (ushort)bVar41);
          auVar96 = NEON_scvtf(auVar88,4);
          fVar70 = auVar388._0_4_ + afStack_1f0[0] * auVar96._0_4_;
          fVar90 = auVar388._4_4_ + afStack_1f0[1] * auVar96._4_4_;
          fVar91 = auVar388._8_4_ + afStack_1f0[2] * auVar96._8_4_;
          fVar92 = auVar388._12_4_ + afStack_1f0[3] * auVar96._12_4_;
          auVar89._0_4_ = (int)(short)((ushort)(byte)((ulong)uVar294 >> 0x20) - (ushort)bVar43);
          auVar89._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar294 >> 0x28) - (ushort)bVar45);
          auVar89._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar294 >> 0x30) - (ushort)bVar47);
          auVar89._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar294 >> 0x38) - (ushort)bVar49);
          auVar96 = NEON_scvtf(auVar89,4);
          fVar93 = auVar160._0_4_ + afStack_1f0[4] * auVar96._0_4_;
          fVar98 = auVar160._4_4_ + afStack_1f0[5] * auVar96._4_4_;
          fVar99 = auVar160._8_4_ + afStack_1f0[6] * auVar96._8_4_;
          fVar100 = auVar160._12_4_ + afStack_1f0[7] * auVar96._12_4_;
          uVar9 = CONCAT14((char)(int)(fVar90 + ((auVar280._4_4_ + afStack_1f0[1] * auVar183._4_4_)
                                                - fVar90) * fVar50),
                           (int)(fVar70 + ((auVar280._0_4_ + afStack_1f0[0] * auVar183._0_4_) -
                                          fVar70) * fVar50)) & 0xff000000ff;
          *plVar15 = CONCAT17((char)(int)(fVar100 +
                                         ((auVar326._12_4_ + afStack_1f0[7] * auVar75._12_4_) -
                                         fVar100) * fVar50),
                              CONCAT16((char)(int)(fVar99 + ((auVar326._8_4_ +
                                                             afStack_1f0[6] * auVar75._8_4_) -
                                                            fVar99) * fVar50),
                                       CONCAT15((char)(int)(fVar98 + ((auVar326._4_4_ +
                                                                      afStack_1f0[5] * auVar75._4_4_
                                                                      ) - fVar98) * fVar50),
                                                CONCAT14((char)(int)(fVar93 + ((auVar326._0_4_ +
                                                                               afStack_1f0[4] *
                                                                               auVar75._0_4_) -
                                                                              fVar93) * fVar50),
                                                         CONCAT13((char)(int)(fVar92 + ((auVar280.
                                                  _12_4_ + afStack_1f0[3] * auVar183._12_4_) -
                                                  fVar92) * fVar50),
                                                  CONCAT12((char)(int)(fVar91 + ((auVar280._8_4_ +
                                                                                 afStack_1f0[2] *
                                                                                 auVar183._8_4_) -
                                                                                fVar91) * fVar50),
                                                           CONCAT11((char)(uVar9 >> 0x20),
                                                                    (char)uVar9)))))));
          uVar26 = uVar26 + 1;
          uVar25 = param_3[1];
          plVar15 = (long *)((long)plVar15 + param_7);
          uVar20 = uVar25;
          uVar35 = uVar25;
        } while (uVar26 < uVar25);
      }
    }
    else if (param_8 == 3) {
      if (uVar25 == 0) goto LAB_10936aaa8;
      uVar26 = 0;
      plVar15 = (long *)(lVar18 * 3);
      puVar16 = param_6 + uVar29 * 3;
      do {
        fVar50 = *(float *)(lStack_240 + uVar26 * 4);
        plVar5 = (long *)(uStack_228 + uVar26 * 8);
        lVar21 = param_4 + *plVar5 * param_5;
        lVar31 = param_4 + plVar5[uVar25] * param_5;
        Hint_Prefetch(lVar21 + lVar18 + lVar27 + 0x140,0,0,0);
        Hint_Prefetch(lVar31 + lVar18 + lVar27 + 0x140,0,0,0);
        pcVar6 = (char *)(lVar21 + (long)plVar15);
        auVar130[0] = *pcVar6;
        auVar135[0] = pcVar6[1];
        auVar161[0] = pcVar6[2];
        auVar130[1] = pcVar6[3];
        auVar135[1] = pcVar6[4];
        auVar161[1] = pcVar6[5];
        auVar130[2] = pcVar6[6];
        auVar135[2] = pcVar6[7];
        auVar161[2] = pcVar6[8];
        auVar130[3] = pcVar6[9];
        auVar135[3] = pcVar6[10];
        auVar161[3] = pcVar6[0xb];
        auVar130[4] = pcVar6[0xc];
        auVar135[4] = pcVar6[0xd];
        auVar161[4] = pcVar6[0xe];
        auVar130[5] = pcVar6[0xf];
        auVar135[5] = pcVar6[0x10];
        auVar161[5] = pcVar6[0x11];
        auVar130[6] = pcVar6[0x12];
        auVar135[6] = pcVar6[0x13];
        auVar161[6] = pcVar6[0x14];
        auVar130[7] = pcVar6[0x15];
        auVar135[7] = pcVar6[0x16];
        auVar161[7] = pcVar6[0x17];
        auVar130[8] = pcVar6[0x18];
        auVar135[8] = pcVar6[0x19];
        auVar161[8] = pcVar6[0x1a];
        auVar130[9] = pcVar6[0x1b];
        auVar135[9] = pcVar6[0x1c];
        auVar161[9] = pcVar6[0x1d];
        auVar130[10] = pcVar6[0x1e];
        auVar135[10] = pcVar6[0x1f];
        auVar161[10] = pcVar6[0x20];
        auVar130[0xb] = pcVar6[0x21];
        auVar135[0xb] = pcVar6[0x22];
        auVar161[0xb] = pcVar6[0x23];
        auVar130[0xc] = pcVar6[0x24];
        auVar135[0xc] = pcVar6[0x25];
        auVar161[0xc] = pcVar6[0x26];
        auVar130[0xd] = pcVar6[0x27];
        auVar135[0xd] = pcVar6[0x28];
        auVar161[0xd] = pcVar6[0x29];
        auVar130[0xe] = pcVar6[0x2a];
        auVar135[0xe] = pcVar6[0x2b];
        auVar161[0xe] = pcVar6[0x2c];
        auVar130[0xf] = pcVar6[0x2d];
        auVar135[0xf] = pcVar6[0x2e];
        auVar161[0xf] = pcVar6[0x2f];
        pcVar6 = (char *)(lVar31 + (long)plVar15);
        auVar184[0] = *pcVar6;
        auVar195[0] = pcVar6[1];
        auVar212[0] = pcVar6[2];
        auVar184[1] = pcVar6[3];
        auVar195[1] = pcVar6[4];
        auVar212[1] = pcVar6[5];
        auVar184[2] = pcVar6[6];
        auVar195[2] = pcVar6[7];
        auVar212[2] = pcVar6[8];
        auVar184[3] = pcVar6[9];
        auVar195[3] = pcVar6[10];
        auVar212[3] = pcVar6[0xb];
        auVar184[4] = pcVar6[0xc];
        auVar195[4] = pcVar6[0xd];
        auVar212[4] = pcVar6[0xe];
        auVar184[5] = pcVar6[0xf];
        auVar195[5] = pcVar6[0x10];
        auVar212[5] = pcVar6[0x11];
        auVar184[6] = pcVar6[0x12];
        auVar195[6] = pcVar6[0x13];
        auVar212[6] = pcVar6[0x14];
        auVar184[7] = pcVar6[0x15];
        auVar195[7] = pcVar6[0x16];
        auVar212[7] = pcVar6[0x17];
        auVar184[8] = pcVar6[0x18];
        auVar195[8] = pcVar6[0x19];
        auVar212[8] = pcVar6[0x1a];
        auVar184[9] = pcVar6[0x1b];
        auVar195[9] = pcVar6[0x1c];
        auVar212[9] = pcVar6[0x1d];
        auVar184[10] = pcVar6[0x1e];
        auVar195[10] = pcVar6[0x1f];
        auVar212[10] = pcVar6[0x20];
        auVar184[0xb] = pcVar6[0x21];
        auVar195[0xb] = pcVar6[0x22];
        auVar212[0xb] = pcVar6[0x23];
        auVar184[0xc] = pcVar6[0x24];
        auVar195[0xc] = pcVar6[0x25];
        auVar212[0xc] = pcVar6[0x26];
        auVar184[0xd] = pcVar6[0x27];
        auVar195[0xd] = pcVar6[0x28];
        auVar212[0xd] = pcVar6[0x29];
        auVar184[0xe] = pcVar6[0x2a];
        auVar195[0xe] = pcVar6[0x2b];
        auVar212[0xe] = pcVar6[0x2c];
        auVar184[0xf] = pcVar6[0x2d];
        auVar195[0xf] = pcVar6[0x2e];
        auVar212[0xf] = pcVar6[0x2f];
        uVar71 = a64_TBL(ZEXT816(0),auVar130,uStack_200);
        uVar94 = a64_TBL(ZEXT816(0),auVar130,lStack_210);
        uVar267 = a64_TBL(ZEXT816(0),auVar184,uStack_200);
        uVar294 = a64_TBL(ZEXT816(0),auVar184,lStack_210);
        bVar36 = (byte)((ulong)uVar94 >> 8);
        bVar38 = (byte)((ulong)uVar94 >> 0x10);
        bVar40 = (byte)((ulong)uVar94 >> 0x18);
        bVar42 = (byte)((ulong)uVar94 >> 0x20);
        bVar44 = (byte)((ulong)uVar94 >> 0x28);
        bVar46 = (byte)((ulong)uVar94 >> 0x30);
        bVar48 = (byte)((ulong)uVar94 >> 0x38);
        bVar37 = (byte)((ulong)uVar294 >> 8);
        bVar39 = (byte)((ulong)uVar294 >> 0x10);
        bVar41 = (byte)((ulong)uVar294 >> 0x18);
        bVar43 = (byte)((ulong)uVar294 >> 0x20);
        bVar45 = (byte)((ulong)uVar294 >> 0x28);
        bVar47 = (byte)((ulong)uVar294 >> 0x30);
        bVar49 = (byte)((ulong)uVar294 >> 0x38);
        auVar233._6_2_ = 0;
        auVar233._0_6_ =
             (uint6)CONCAT14(bVar36,(uint)CONCAT12(bVar36,(ushort)(byte)uVar94)) & 0xffff0000ffff;
        auVar233[8] = bVar38;
        auVar233._9_3_ = 0;
        auVar233[0xc] = bVar40;
        auVar233._13_3_ = 0;
        auVar301 = NEON_ucvtf(auVar233,4);
        auVar257._1_3_ = 0;
        auVar257[0] = bVar42;
        auVar257[4] = bVar44;
        auVar257._5_3_ = 0;
        auVar257[8] = bVar46;
        auVar257._9_3_ = 0;
        auVar257[0xc] = bVar48;
        auVar257._13_3_ = 0;
        auVar303 = NEON_ucvtf(auVar257,4);
        auVar284._6_2_ = 0;
        auVar284._0_6_ =
             (uint6)CONCAT14(bVar37,(uint)CONCAT12(bVar37,(ushort)(byte)uVar294)) & 0xffff0000ffff;
        auVar284[8] = bVar39;
        auVar284._9_3_ = 0;
        auVar284[0xc] = bVar41;
        auVar284._13_3_ = 0;
        auVar280 = NEON_ucvtf(auVar284,4);
        auVar305._1_3_ = 0;
        auVar305[0] = bVar43;
        auVar305[4] = bVar45;
        auVar305._5_3_ = 0;
        auVar305[8] = bVar47;
        auVar305._9_3_ = 0;
        auVar305[0xc] = bVar49;
        auVar305._13_3_ = 0;
        auVar326 = NEON_ucvtf(auVar305,4);
        auVar319._0_4_ = (int)(short)((ushort)(byte)uVar71 - (ushort)(byte)uVar94);
        auVar319._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 8) - (ushort)bVar36);
        auVar319._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 0x10) - (ushort)bVar38);
        auVar319._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 0x18) - (ushort)bVar40);
        auVar318 = NEON_scvtf(auVar319,4);
        auVar78._0_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 0x20) - (ushort)bVar42);
        auVar78._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 0x28) - (ushort)bVar44);
        auVar78._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 0x30) - (ushort)bVar46);
        auVar78._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 0x38) - (ushort)bVar48);
        auVar75 = NEON_scvtf(auVar78,4);
        auVar79._0_4_ = (int)(short)((ushort)(byte)uVar267 - (ushort)(byte)uVar294);
        auVar79._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 8) - (ushort)bVar37);
        auVar79._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x10) - (ushort)bVar39);
        auVar79._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x18) - (ushort)bVar41);
        auVar96 = NEON_scvtf(auVar79,4);
        fVar138 = auVar280._0_4_ + afStack_1f0[0] * auVar96._0_4_;
        fVar164 = auVar280._4_4_ + afStack_1f0[1] * auVar96._4_4_;
        fVar165 = auVar280._8_4_ + afStack_1f0[2] * auVar96._8_4_;
        fVar166 = auVar280._12_4_ + afStack_1f0[3] * auVar96._12_4_;
        auVar80._0_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x20) - (ushort)bVar43);
        auVar80._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x28) - (ushort)bVar45);
        auVar80._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x30) - (ushort)bVar47);
        auVar80._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x38) - (ushort)bVar49);
        auVar96 = NEON_scvtf(auVar80,4);
        fVar198 = auVar326._0_4_ + afStack_1f0[4] * auVar96._0_4_;
        fVar213 = auVar326._4_4_ + afStack_1f0[5] * auVar96._4_4_;
        fVar216 = auVar326._8_4_ + afStack_1f0[6] * auVar96._8_4_;
        fVar219 = auVar326._12_4_ + afStack_1f0[7] * auVar96._12_4_;
        uVar71 = a64_TBL(ZEXT816(0),auVar135,uStack_200);
        uVar94 = a64_TBL(ZEXT816(0),auVar135,lStack_210);
        uVar267 = a64_TBL(ZEXT816(0),auVar195,uStack_200);
        uVar294 = a64_TBL(ZEXT816(0),auVar195,lStack_210);
        bVar36 = (byte)((ulong)uVar94 >> 8);
        bVar38 = (byte)((ulong)uVar94 >> 0x10);
        bVar40 = (byte)((ulong)uVar94 >> 0x18);
        bVar42 = (byte)((ulong)uVar94 >> 0x20);
        bVar44 = (byte)((ulong)uVar94 >> 0x28);
        bVar46 = (byte)((ulong)uVar94 >> 0x30);
        bVar48 = (byte)((ulong)uVar94 >> 0x38);
        bVar37 = (byte)((ulong)uVar294 >> 8);
        bVar39 = (byte)((ulong)uVar294 >> 0x10);
        bVar41 = (byte)((ulong)uVar294 >> 0x18);
        bVar43 = (byte)((ulong)uVar294 >> 0x20);
        bVar45 = (byte)((ulong)uVar294 >> 0x28);
        bVar47 = (byte)((ulong)uVar294 >> 0x30);
        bVar49 = (byte)((ulong)uVar294 >> 0x38);
        auVar306._6_2_ = 0;
        auVar306._0_6_ =
             (uint6)CONCAT14(bVar36,(uint)CONCAT12(bVar36,(ushort)(byte)uVar94)) & 0xffff0000ffff;
        auVar306[8] = bVar38;
        auVar306._9_3_ = 0;
        auVar306[0xc] = bVar40;
        auVar306._13_3_ = 0;
        auVar317 = NEON_ucvtf(auVar306,4);
        auVar320._1_3_ = 0;
        auVar320[0] = bVar42;
        auVar320[4] = bVar44;
        auVar320._5_3_ = 0;
        auVar320[8] = bVar46;
        auVar320._9_3_ = 0;
        auVar320[0xc] = bVar48;
        auVar320._13_3_ = 0;
        auVar327 = NEON_ucvtf(auVar320,4);
        auVar332._6_2_ = 0;
        auVar332._0_6_ =
             (uint6)CONCAT14(bVar37,(uint)CONCAT12(bVar37,(ushort)(byte)uVar294)) & 0xffff0000ffff;
        auVar332[8] = bVar39;
        auVar332._9_3_ = 0;
        auVar332[0xc] = bVar41;
        auVar332._13_3_ = 0;
        auVar326 = NEON_ucvtf(auVar332,4);
        auVar346._1_3_ = 0;
        auVar346[0] = bVar43;
        auVar346[4] = bVar45;
        auVar346._5_3_ = 0;
        auVar346[8] = bVar47;
        auVar346._9_3_ = 0;
        auVar346[0xc] = bVar49;
        auVar346._13_3_ = 0;
        auVar388 = NEON_ucvtf(auVar346,4);
        auVar355._0_4_ = (int)(short)((ushort)(byte)uVar71 - (ushort)(byte)uVar94);
        auVar355._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 8) - (ushort)bVar36);
        auVar355._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 0x10) - (ushort)bVar38);
        auVar355._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 0x18) - (ushort)bVar40);
        auVar329 = NEON_scvtf(auVar355,4);
        auVar81._0_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 0x20) - (ushort)bVar42);
        auVar81._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 0x28) - (ushort)bVar44);
        auVar81._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 0x30) - (ushort)bVar46);
        auVar81._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 0x38) - (ushort)bVar48);
        auVar96 = NEON_scvtf(auVar81,4);
        auVar82._0_4_ = (int)(short)((ushort)(byte)uVar267 - (ushort)(byte)uVar294);
        auVar82._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 8) - (ushort)bVar37);
        auVar82._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x10) - (ushort)bVar39);
        auVar82._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x18) - (ushort)bVar41);
        auVar280 = NEON_scvtf(auVar82,4);
        fVar265 = auVar326._0_4_ + afStack_1f0[0] * auVar280._0_4_;
        fVar286 = auVar326._4_4_ + afStack_1f0[1] * auVar280._4_4_;
        fVar288 = auVar326._8_4_ + afStack_1f0[2] * auVar280._8_4_;
        fVar290 = auVar326._12_4_ + afStack_1f0[3] * auVar280._12_4_;
        auVar83._0_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x20) - (ushort)bVar43);
        auVar83._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x28) - (ushort)bVar45);
        auVar83._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x30) - (ushort)bVar47);
        auVar83._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x38) - (ushort)bVar49);
        auVar280 = NEON_scvtf(auVar83,4);
        fVar292 = auVar388._0_4_ + afStack_1f0[4] * auVar280._0_4_;
        fVar308 = auVar388._4_4_ + afStack_1f0[5] * auVar280._4_4_;
        fVar310 = auVar388._8_4_ + afStack_1f0[6] * auVar280._8_4_;
        fVar312 = auVar388._12_4_ + afStack_1f0[7] * auVar280._12_4_;
        uVar71 = a64_TBL(ZEXT816(0),auVar161,uStack_200);
        uVar94 = a64_TBL(ZEXT816(0),auVar161,lStack_210);
        uVar267 = a64_TBL(ZEXT816(0),auVar212,uStack_200);
        uVar294 = a64_TBL(ZEXT816(0),auVar212,lStack_210);
        bVar36 = (byte)((ulong)uVar94 >> 8);
        bVar38 = (byte)((ulong)uVar94 >> 0x10);
        bVar40 = (byte)((ulong)uVar94 >> 0x18);
        bVar42 = (byte)((ulong)uVar94 >> 0x20);
        bVar44 = (byte)((ulong)uVar94 >> 0x28);
        bVar46 = (byte)((ulong)uVar94 >> 0x30);
        bVar48 = (byte)((ulong)uVar94 >> 0x38);
        bVar37 = (byte)((ulong)uVar294 >> 8);
        bVar39 = (byte)((ulong)uVar294 >> 0x10);
        bVar41 = (byte)((ulong)uVar294 >> 0x18);
        bVar43 = (byte)((ulong)uVar294 >> 0x20);
        bVar45 = (byte)((ulong)uVar294 >> 0x28);
        bVar47 = (byte)((ulong)uVar294 >> 0x30);
        bVar49 = (byte)((ulong)uVar294 >> 0x38);
        auVar131._6_2_ = 0;
        auVar131._0_6_ =
             (uint6)CONCAT14(bVar36,(uint)CONCAT12(bVar36,(ushort)(byte)uVar94)) & 0xffff0000ffff;
        auVar131[8] = bVar38;
        auVar131._9_3_ = 0;
        auVar131[0xc] = bVar40;
        auVar131._13_3_ = 0;
        auVar388 = NEON_ucvtf(auVar131,4);
        auVar136._1_3_ = 0;
        auVar136[0] = bVar42;
        auVar136[4] = bVar44;
        auVar136._5_3_ = 0;
        auVar136[8] = bVar46;
        auVar136._9_3_ = 0;
        auVar136[0xc] = bVar48;
        auVar136._13_3_ = 0;
        auVar160 = NEON_ucvtf(auVar136,4);
        auVar162._6_2_ = 0;
        auVar162._0_6_ =
             (uint6)CONCAT14(bVar37,(uint)CONCAT12(bVar37,(ushort)(byte)uVar294)) & 0xffff0000ffff;
        auVar162[8] = bVar39;
        auVar162._9_3_ = 0;
        auVar162[0xc] = bVar41;
        auVar162._13_3_ = 0;
        auVar183 = NEON_ucvtf(auVar162,4);
        auVar185._1_3_ = 0;
        auVar185[0] = bVar43;
        auVar185[4] = bVar45;
        auVar185._5_3_ = 0;
        auVar185[8] = bVar47;
        auVar185._9_3_ = 0;
        auVar185[0xc] = bVar49;
        auVar185._13_3_ = 0;
        auVar211 = NEON_ucvtf(auVar185,4);
        auVar196._0_4_ = (int)(short)((ushort)(byte)uVar71 - (ushort)(byte)uVar94);
        auVar196._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 8) - (ushort)bVar36);
        auVar196._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 0x10) - (ushort)bVar38);
        auVar196._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 0x18) - (ushort)bVar40);
        auVar256 = NEON_scvtf(auVar196,4);
        auVar84._0_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 0x20) - (ushort)bVar42);
        auVar84._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 0x28) - (ushort)bVar44);
        auVar84._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 0x30) - (ushort)bVar46);
        auVar84._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 0x38) - (ushort)bVar48);
        auVar280 = NEON_scvtf(auVar84,4);
        auVar85._0_4_ = (int)(short)((ushort)(byte)uVar267 - (ushort)(byte)uVar294);
        auVar85._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 8) - (ushort)bVar37);
        auVar85._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x10) - (ushort)bVar39);
        auVar85._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x18) - (ushort)bVar41);
        auVar326 = NEON_scvtf(auVar85,4);
        fVar70 = auVar183._0_4_ + afStack_1f0[0] * auVar326._0_4_;
        fVar90 = auVar183._4_4_ + afStack_1f0[1] * auVar326._4_4_;
        fVar91 = auVar183._8_4_ + afStack_1f0[2] * auVar326._8_4_;
        fVar92 = auVar183._12_4_ + afStack_1f0[3] * auVar326._12_4_;
        auVar86._0_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x20) - (ushort)bVar43);
        auVar86._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x28) - (ushort)bVar45);
        auVar86._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x30) - (ushort)bVar47);
        auVar86._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x38) - (ushort)bVar49);
        auVar326 = NEON_scvtf(auVar86,4);
        fVar93 = auVar211._0_4_ + afStack_1f0[4] * auVar326._0_4_;
        fVar98 = auVar211._4_4_ + afStack_1f0[5] * auVar326._4_4_;
        fVar99 = auVar211._8_4_ + afStack_1f0[6] * auVar326._8_4_;
        fVar100 = auVar211._12_4_ + afStack_1f0[7] * auVar326._12_4_;
        uVar9 = CONCAT14((char)(int)(fVar90 + ((auVar388._4_4_ + afStack_1f0[1] * auVar256._4_4_) -
                                              fVar90) * fVar50),
                         (int)(fVar70 + ((auVar388._0_4_ + afStack_1f0[0] * auVar256._0_4_) - fVar70
                                        ) * fVar50)) & 0xff000000ff;
        *puVar16 = (char)(int)(fVar138 +
                              ((auVar301._0_4_ + afStack_1f0[0] * auVar318._0_4_) - fVar138) *
                              fVar50);
        puVar16[1] = (char)(int)(fVar265 +
                                ((auVar317._0_4_ + afStack_1f0[0] * auVar329._0_4_) - fVar265) *
                                fVar50);
        puVar16[2] = (char)uVar9;
        puVar16[3] = (char)(int)(fVar164 +
                                ((auVar301._4_4_ + afStack_1f0[1] * auVar318._4_4_) - fVar164) *
                                fVar50);
        puVar16[4] = (char)(int)(fVar286 +
                                ((auVar317._4_4_ + afStack_1f0[1] * auVar329._4_4_) - fVar286) *
                                fVar50);
        puVar16[5] = (char)(uVar9 >> 0x20);
        puVar16[6] = (char)(int)(fVar165 +
                                ((auVar301._8_4_ + afStack_1f0[2] * auVar318._8_4_) - fVar165) *
                                fVar50);
        puVar16[7] = (char)(int)(fVar288 +
                                ((auVar317._8_4_ + afStack_1f0[2] * auVar329._8_4_) - fVar288) *
                                fVar50);
        puVar16[8] = (char)(int)(fVar91 + ((auVar388._8_4_ + afStack_1f0[2] * auVar256._8_4_) -
                                          fVar91) * fVar50);
        puVar16[9] = (char)(int)(fVar166 +
                                ((auVar301._12_4_ + afStack_1f0[3] * auVar318._12_4_) - fVar166) *
                                fVar50);
        puVar16[10] = (char)(int)(fVar290 +
                                 ((auVar317._12_4_ + afStack_1f0[3] * auVar329._12_4_) - fVar290) *
                                 fVar50);
        puVar16[0xb] = (char)(int)(fVar92 + ((auVar388._12_4_ + afStack_1f0[3] * auVar256._12_4_) -
                                            fVar92) * fVar50);
        puVar16[0xc] = (char)(int)(fVar198 +
                                  ((auVar303._0_4_ + afStack_1f0[4] * auVar75._0_4_) - fVar198) *
                                  fVar50);
        puVar16[0xd] = (char)(int)(fVar292 +
                                  ((auVar327._0_4_ + afStack_1f0[4] * auVar96._0_4_) - fVar292) *
                                  fVar50);
        puVar16[0xe] = (char)(int)(fVar93 + ((auVar160._0_4_ + afStack_1f0[4] * auVar280._0_4_) -
                                            fVar93) * fVar50);
        puVar16[0xf] = (char)(int)(fVar213 +
                                  ((auVar303._4_4_ + afStack_1f0[5] * auVar75._4_4_) - fVar213) *
                                  fVar50);
        puVar16[0x10] =
             (char)(int)(fVar308 +
                        ((auVar327._4_4_ + afStack_1f0[5] * auVar96._4_4_) - fVar308) * fVar50);
        puVar16[0x11] =
             (char)(int)(fVar98 + ((auVar160._4_4_ + afStack_1f0[5] * auVar280._4_4_) - fVar98) *
                                  fVar50);
        puVar16[0x12] =
             (char)(int)(fVar216 +
                        ((auVar303._8_4_ + afStack_1f0[6] * auVar75._8_4_) - fVar216) * fVar50);
        puVar16[0x13] =
             (char)(int)(fVar310 +
                        ((auVar327._8_4_ + afStack_1f0[6] * auVar96._8_4_) - fVar310) * fVar50);
        puVar16[0x14] =
             (char)(int)(fVar99 + ((auVar160._8_4_ + afStack_1f0[6] * auVar280._8_4_) - fVar99) *
                                  fVar50);
        puVar16[0x15] =
             (char)(int)(fVar219 +
                        ((auVar303._12_4_ + afStack_1f0[7] * auVar75._12_4_) - fVar219) * fVar50);
        puVar16[0x16] =
             (char)(int)(fVar312 +
                        ((auVar327._12_4_ + afStack_1f0[7] * auVar96._12_4_) - fVar312) * fVar50);
        puVar16[0x17] =
             (char)(int)(fVar100 +
                        ((auVar160._12_4_ + afStack_1f0[7] * auVar280._12_4_) - fVar100) * fVar50);
        puVar16 = puVar16 + param_7;
        uVar26 = uVar26 + 1;
        uVar25 = param_3[1];
        uVar20 = uVar25;
        uVar35 = uVar25;
      } while (uVar26 < uVar25);
    }
    else if ((param_8 == 4) && (uVar20 != 0)) {
      uVar26 = 0;
      plVar15 = (long *)(lVar18 * 4);
      puVar16 = param_6 + uVar29 * 4;
      uVar25 = uVar20;
      do {
        plVar5 = (long *)(uStack_228 + uVar26 * 8);
        lVar21 = param_4 + *plVar5 * param_5;
        lVar31 = param_4 + plVar5[uVar25] * param_5;
        fVar50 = *(float *)(lStack_240 + uVar26 * 4);
        Hint_Prefetch(lVar21 + lVar18 + lVar27 + 0x140,0,0,0);
        pcVar6 = (char *)(lVar21 + (long)plVar15);
        pcVar7 = (char *)(lVar31 + (long)plVar15);
        Hint_Prefetch(lVar31 + lVar18 + lVar27 + 0x140,0,0,0);
        auVar194[0] = *pcVar6;
        auVar209[0] = pcVar6[1];
        auVar232[0] = pcVar6[2];
        auVar254[0] = pcVar6[3];
        auVar194[1] = pcVar6[4];
        auVar209[1] = pcVar6[5];
        auVar232[1] = pcVar6[6];
        auVar254[1] = pcVar6[7];
        auVar194[2] = pcVar6[8];
        auVar209[2] = pcVar6[9];
        auVar232[2] = pcVar6[10];
        auVar254[2] = pcVar6[0xb];
        auVar194[3] = pcVar6[0xc];
        auVar209[3] = pcVar6[0xd];
        auVar232[3] = pcVar6[0xe];
        auVar254[3] = pcVar6[0xf];
        auVar194[4] = pcVar6[0x10];
        auVar209[4] = pcVar6[0x11];
        auVar232[4] = pcVar6[0x12];
        auVar254[4] = pcVar6[0x13];
        auVar194[5] = pcVar6[0x14];
        auVar209[5] = pcVar6[0x15];
        auVar232[5] = pcVar6[0x16];
        auVar254[5] = pcVar6[0x17];
        auVar194[6] = pcVar6[0x18];
        auVar209[6] = pcVar6[0x19];
        auVar232[6] = pcVar6[0x1a];
        auVar254[6] = pcVar6[0x1b];
        auVar194[7] = pcVar6[0x1c];
        auVar209[7] = pcVar6[0x1d];
        auVar232[7] = pcVar6[0x1e];
        auVar254[7] = pcVar6[0x1f];
        auVar194[8] = pcVar6[0x20];
        auVar209[8] = pcVar6[0x21];
        auVar232[8] = pcVar6[0x22];
        auVar254[8] = pcVar6[0x23];
        auVar194[9] = pcVar6[0x24];
        auVar209[9] = pcVar6[0x25];
        auVar232[9] = pcVar6[0x26];
        auVar254[9] = pcVar6[0x27];
        auVar194[10] = pcVar6[0x28];
        auVar209[10] = pcVar6[0x29];
        auVar232[10] = pcVar6[0x2a];
        auVar254[10] = pcVar6[0x2b];
        auVar194[0xb] = pcVar6[0x2c];
        auVar209[0xb] = pcVar6[0x2d];
        auVar232[0xb] = pcVar6[0x2e];
        auVar254[0xb] = pcVar6[0x2f];
        auVar194[0xc] = pcVar6[0x30];
        auVar209[0xc] = pcVar6[0x31];
        auVar232[0xc] = pcVar6[0x32];
        auVar254[0xc] = pcVar6[0x33];
        auVar194[0xd] = pcVar6[0x34];
        auVar209[0xd] = pcVar6[0x35];
        auVar232[0xd] = pcVar6[0x36];
        auVar254[0xd] = pcVar6[0x37];
        auVar194[0xe] = pcVar6[0x38];
        auVar209[0xe] = pcVar6[0x39];
        auVar232[0xe] = pcVar6[0x3a];
        auVar254[0xe] = pcVar6[0x3b];
        auVar194[0xf] = pcVar6[0x3c];
        auVar209[0xf] = pcVar6[0x3d];
        auVar232[0xf] = pcVar6[0x3e];
        auVar254[0xf] = pcVar6[0x3f];
        auVar129[0] = *pcVar7;
        auVar133[0] = pcVar7[1];
        auVar158[0] = pcVar7[2];
        auVar181[0] = pcVar7[3];
        auVar129[1] = pcVar7[4];
        auVar133[1] = pcVar7[5];
        auVar158[1] = pcVar7[6];
        auVar181[1] = pcVar7[7];
        auVar129[2] = pcVar7[8];
        auVar133[2] = pcVar7[9];
        auVar158[2] = pcVar7[10];
        auVar181[2] = pcVar7[0xb];
        auVar129[3] = pcVar7[0xc];
        auVar133[3] = pcVar7[0xd];
        auVar158[3] = pcVar7[0xe];
        auVar181[3] = pcVar7[0xf];
        auVar129[4] = pcVar7[0x10];
        auVar133[4] = pcVar7[0x11];
        auVar158[4] = pcVar7[0x12];
        auVar181[4] = pcVar7[0x13];
        auVar129[5] = pcVar7[0x14];
        auVar133[5] = pcVar7[0x15];
        auVar158[5] = pcVar7[0x16];
        auVar181[5] = pcVar7[0x17];
        auVar129[6] = pcVar7[0x18];
        auVar133[6] = pcVar7[0x19];
        auVar158[6] = pcVar7[0x1a];
        auVar181[6] = pcVar7[0x1b];
        auVar129[7] = pcVar7[0x1c];
        auVar133[7] = pcVar7[0x1d];
        auVar158[7] = pcVar7[0x1e];
        auVar181[7] = pcVar7[0x1f];
        auVar129[8] = pcVar7[0x20];
        auVar133[8] = pcVar7[0x21];
        auVar158[8] = pcVar7[0x22];
        auVar181[8] = pcVar7[0x23];
        auVar129[9] = pcVar7[0x24];
        auVar133[9] = pcVar7[0x25];
        auVar158[9] = pcVar7[0x26];
        auVar181[9] = pcVar7[0x27];
        auVar129[10] = pcVar7[0x28];
        auVar133[10] = pcVar7[0x29];
        auVar158[10] = pcVar7[0x2a];
        auVar181[10] = pcVar7[0x2b];
        auVar129[0xb] = pcVar7[0x2c];
        auVar133[0xb] = pcVar7[0x2d];
        auVar158[0xb] = pcVar7[0x2e];
        auVar181[0xb] = pcVar7[0x2f];
        auVar129[0xc] = pcVar7[0x30];
        auVar133[0xc] = pcVar7[0x31];
        auVar158[0xc] = pcVar7[0x32];
        auVar181[0xc] = pcVar7[0x33];
        auVar129[0xd] = pcVar7[0x34];
        auVar133[0xd] = pcVar7[0x35];
        auVar158[0xd] = pcVar7[0x36];
        auVar181[0xd] = pcVar7[0x37];
        auVar129[0xe] = pcVar7[0x38];
        auVar133[0xe] = pcVar7[0x39];
        auVar158[0xe] = pcVar7[0x3a];
        auVar181[0xe] = pcVar7[0x3b];
        auVar129[0xf] = pcVar7[0x3c];
        auVar133[0xf] = pcVar7[0x3d];
        auVar158[0xf] = pcVar7[0x3e];
        auVar181[0xf] = pcVar7[0x3f];
        uVar71 = a64_TBL(ZEXT816(0),auVar194,uStack_200);
        uVar94 = a64_TBL(ZEXT816(0),auVar194,lStack_210);
        uVar267 = a64_TBL(ZEXT816(0),auVar129,uStack_200);
        uVar294 = a64_TBL(ZEXT816(0),auVar129,lStack_210);
        bVar36 = (byte)((ulong)uVar94 >> 8);
        bVar38 = (byte)((ulong)uVar94 >> 0x10);
        bVar40 = (byte)((ulong)uVar94 >> 0x18);
        bVar42 = (byte)((ulong)uVar94 >> 0x20);
        bVar44 = (byte)((ulong)uVar94 >> 0x28);
        bVar46 = (byte)((ulong)uVar94 >> 0x30);
        bVar48 = (byte)((ulong)uVar94 >> 0x38);
        bVar37 = (byte)((ulong)uVar294 >> 8);
        bVar39 = (byte)((ulong)uVar294 >> 0x10);
        bVar41 = (byte)((ulong)uVar294 >> 0x18);
        bVar43 = (byte)((ulong)uVar294 >> 0x20);
        bVar45 = (byte)((ulong)uVar294 >> 0x28);
        bVar47 = (byte)((ulong)uVar294 >> 0x30);
        bVar49 = (byte)((ulong)uVar294 >> 0x38);
        auVar72._6_2_ = 0;
        auVar72._0_6_ =
             (uint6)CONCAT14(bVar36,(uint)CONCAT12(bVar36,(ushort)(byte)uVar94)) & 0xffff0000ffff;
        auVar72[8] = bVar38;
        auVar72._9_3_ = 0;
        auVar72[0xc] = bVar40;
        auVar72._13_3_ = 0;
        auVar354 = NEON_ucvtf(auVar72,4);
        auVar73._1_3_ = 0;
        auVar73[0] = bVar42;
        auVar73[4] = bVar44;
        auVar73._5_3_ = 0;
        auVar73[8] = bVar46;
        auVar73._9_3_ = 0;
        auVar73[0xc] = bVar48;
        auVar73._13_3_ = 0;
        auVar95._6_2_ = 0;
        auVar95._0_6_ =
             (uint6)CONCAT14(bVar37,(uint)CONCAT12(bVar37,(ushort)(byte)uVar294)) & 0xffff0000ffff;
        auVar95[8] = bVar39;
        auVar95._9_3_ = 0;
        auVar95[0xc] = bVar41;
        auVar95._13_3_ = 0;
        auVar317 = NEON_ucvtf(auVar73,4);
        auVar96 = NEON_ucvtf(auVar95,4);
        auVar74._1_3_ = 0;
        auVar74[0] = bVar43;
        auVar74[4] = bVar45;
        auVar74._5_3_ = 0;
        auVar74[8] = bVar47;
        auVar74._9_3_ = 0;
        auVar74[0xc] = bVar49;
        auVar74._13_3_ = 0;
        auVar75 = NEON_ucvtf(auVar74,4);
        auVar300._0_4_ = (int)(short)((ushort)(byte)uVar71 - (ushort)(byte)uVar94);
        auVar300._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 8) - (ushort)bVar36);
        auVar300._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 0x10) - (ushort)bVar38);
        auVar300._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 0x18) - (ushort)bVar40);
        auVar301 = NEON_scvtf(auVar300,4);
        auVar302._0_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 0x20) - (ushort)bVar42);
        auVar302._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 0x28) - (ushort)bVar44);
        auVar302._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 0x30) - (ushort)bVar46);
        auVar302._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 0x38) - (ushort)bVar48);
        auVar303 = NEON_scvtf(auVar302,4);
        auVar325._0_4_ = (int)(short)((ushort)(byte)uVar267 - (ushort)(byte)uVar294);
        auVar325._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 8) - (ushort)bVar37);
        auVar325._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x10) - (ushort)bVar39);
        auVar325._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x18) - (ushort)bVar41);
        auVar326 = NEON_scvtf(auVar325,4);
        auVar279._0_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x20) - (ushort)bVar43);
        auVar279._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x28) - (ushort)bVar45);
        auVar279._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x30) - (ushort)bVar47);
        auVar279._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x38) - (ushort)bVar49);
        auVar280 = NEON_scvtf(auVar279,4);
        uVar71 = a64_TBL(ZEXT816(0),auVar209,uStack_200);
        uVar94 = a64_TBL(ZEXT816(0),auVar209,lStack_210);
        uVar267 = a64_TBL(ZEXT816(0),auVar133,uStack_200);
        uVar294 = a64_TBL(ZEXT816(0),auVar133,lStack_210);
        fVar93 = auVar96._0_4_ + afStack_1f0[0] * auVar326._0_4_;
        fVar98 = auVar96._4_4_ + afStack_1f0[1] * auVar326._4_4_;
        fVar99 = auVar96._8_4_ + afStack_1f0[2] * auVar326._8_4_;
        fVar100 = auVar96._12_4_ + afStack_1f0[3] * auVar326._12_4_;
        bVar36 = (byte)((ulong)uVar94 >> 8);
        bVar38 = (byte)((ulong)uVar94 >> 0x10);
        bVar40 = (byte)((ulong)uVar94 >> 0x18);
        bVar42 = (byte)((ulong)uVar94 >> 0x20);
        bVar44 = (byte)((ulong)uVar94 >> 0x28);
        bVar46 = (byte)((ulong)uVar94 >> 0x30);
        bVar48 = (byte)((ulong)uVar94 >> 0x38);
        bVar37 = (byte)((ulong)uVar294 >> 8);
        bVar39 = (byte)((ulong)uVar294 >> 0x10);
        bVar41 = (byte)((ulong)uVar294 >> 0x18);
        bVar43 = (byte)((ulong)uVar294 >> 0x20);
        bVar45 = (byte)((ulong)uVar294 >> 0x28);
        bVar47 = (byte)((ulong)uVar294 >> 0x30);
        bVar49 = (byte)((ulong)uVar294 >> 0x38);
        auVar304._6_2_ = 0;
        auVar304._0_6_ =
             (uint6)CONCAT14(bVar36,(uint)CONCAT12(bVar36,(ushort)(byte)uVar94)) & 0xffff0000ffff;
        auVar304[8] = bVar38;
        auVar304._9_3_ = 0;
        auVar304[0xc] = bVar40;
        auVar304._13_3_ = 0;
        fVar70 = auVar75._0_4_ + afStack_1f0[4] * auVar280._0_4_;
        fVar90 = auVar75._4_4_ + afStack_1f0[5] * auVar280._4_4_;
        fVar91 = auVar75._8_4_ + afStack_1f0[6] * auVar280._8_4_;
        fVar92 = auVar75._12_4_ + afStack_1f0[7] * auVar280._12_4_;
        auVar386 = NEON_ucvtf(auVar304,4);
        auVar281._1_3_ = 0;
        auVar281[0] = bVar42;
        auVar281[4] = bVar44;
        auVar281._5_3_ = 0;
        auVar281[8] = bVar46;
        auVar281._9_3_ = 0;
        auVar281[0xc] = bVar48;
        auVar281._13_3_ = 0;
        auVar327 = NEON_ucvtf(auVar281,4);
        auVar282._6_2_ = 0;
        auVar282._0_6_ =
             (uint6)CONCAT14(bVar37,(uint)CONCAT12(bVar37,(ushort)(byte)uVar294)) & 0xffff0000ffff;
        auVar282[8] = bVar39;
        auVar282._9_3_ = 0;
        auVar282[0xc] = bVar41;
        auVar282._13_3_ = 0;
        auVar96 = NEON_ucvtf(auVar282,4);
        auVar283._1_3_ = 0;
        auVar283[0] = bVar43;
        auVar283[4] = bVar45;
        auVar283._5_3_ = 0;
        auVar283[8] = bVar47;
        auVar283._9_3_ = 0;
        auVar283[0xc] = bVar49;
        auVar283._13_3_ = 0;
        auVar75 = NEON_ucvtf(auVar283,4);
        auVar105._0_4_ = (int)(short)((ushort)(byte)uVar71 - (ushort)(byte)uVar94);
        auVar105._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 8) - (ushort)bVar36);
        auVar105._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 0x10) - (ushort)bVar38);
        auVar105._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 0x18) - (ushort)bVar40);
        auVar280 = NEON_scvtf(auVar105,4);
        auVar340._0_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 0x20) - (ushort)bVar42);
        auVar340._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 0x28) - (ushort)bVar44);
        auVar340._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 0x30) - (ushort)bVar46);
        auVar340._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 0x38) - (ushort)bVar48);
        auVar341 = NEON_scvtf(auVar340,4);
        auVar342._0_4_ = (int)(short)((ushort)(byte)uVar267 - (ushort)(byte)uVar294);
        auVar342._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 8) - (ushort)bVar37);
        auVar342._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x10) - (ushort)bVar39);
        auVar342._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x18) - (ushort)bVar41);
        auVar326 = NEON_scvtf(auVar342,4);
        fVar292 = auVar96._0_4_ + afStack_1f0[0] * auVar326._0_4_;
        fVar308 = auVar96._4_4_ + afStack_1f0[1] * auVar326._4_4_;
        fVar310 = auVar96._8_4_ + afStack_1f0[2] * auVar326._8_4_;
        fVar312 = auVar96._12_4_ + afStack_1f0[3] * auVar326._12_4_;
        auVar343._0_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x20) - (ushort)bVar43);
        auVar343._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x28) - (ushort)bVar45);
        auVar343._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x30) - (ushort)bVar47);
        auVar343._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x38) - (ushort)bVar49);
        auVar96 = NEON_scvtf(auVar343,4);
        fVar265 = auVar75._0_4_ + afStack_1f0[4] * auVar96._0_4_;
        fVar286 = auVar75._4_4_ + afStack_1f0[5] * auVar96._4_4_;
        fVar288 = auVar75._8_4_ + afStack_1f0[6] * auVar96._8_4_;
        fVar290 = auVar75._12_4_ + afStack_1f0[7] * auVar96._12_4_;
        uVar71 = a64_TBL(ZEXT816(0),auVar232,uStack_200);
        uVar94 = a64_TBL(ZEXT816(0),auVar232,lStack_210);
        uVar267 = a64_TBL(ZEXT816(0),auVar158,uStack_200);
        uVar294 = a64_TBL(ZEXT816(0),auVar158,lStack_210);
        bVar36 = (byte)((ulong)uVar94 >> 8);
        bVar38 = (byte)((ulong)uVar94 >> 0x10);
        bVar40 = (byte)((ulong)uVar94 >> 0x18);
        bVar42 = (byte)((ulong)uVar94 >> 0x20);
        bVar44 = (byte)((ulong)uVar94 >> 0x28);
        bVar46 = (byte)((ulong)uVar94 >> 0x30);
        bVar48 = (byte)((ulong)uVar94 >> 0x38);
        bVar37 = (byte)((ulong)uVar294 >> 8);
        bVar39 = (byte)((ulong)uVar294 >> 0x10);
        bVar41 = (byte)((ulong)uVar294 >> 0x18);
        bVar43 = (byte)((ulong)uVar294 >> 0x20);
        bVar45 = (byte)((ulong)uVar294 >> 0x28);
        bVar47 = (byte)((ulong)uVar294 >> 0x30);
        bVar49 = (byte)((ulong)uVar294 >> 0x38);
        auVar373._6_2_ = 0;
        auVar373._0_6_ =
             (uint6)CONCAT14(bVar36,(uint)CONCAT12(bVar36,(ushort)(byte)uVar94)) & 0xffff0000ffff;
        auVar373[8] = bVar38;
        auVar373._9_3_ = 0;
        auVar373[0xc] = bVar40;
        auVar373._13_3_ = 0;
        auVar318 = NEON_ucvtf(auVar373,4);
        auVar344._1_3_ = 0;
        auVar344[0] = bVar42;
        auVar344[4] = bVar44;
        auVar344._5_3_ = 0;
        auVar344[8] = bVar46;
        auVar344._9_3_ = 0;
        auVar344[0xc] = bVar48;
        auVar344._13_3_ = 0;
        auVar345 = NEON_ucvtf(auVar344,4);
        auVar374._6_2_ = 0;
        auVar374._0_6_ =
             (uint6)CONCAT14(bVar37,(uint)CONCAT12(bVar37,(ushort)(byte)uVar294)) & 0xffff0000ffff;
        auVar374[8] = bVar39;
        auVar374._9_3_ = 0;
        auVar374[0xc] = bVar41;
        auVar374._13_3_ = 0;
        auVar96 = NEON_ucvtf(auVar374,4);
        auVar387._1_3_ = 0;
        auVar387[0] = bVar43;
        auVar387[4] = bVar45;
        auVar387._5_3_ = 0;
        auVar387[8] = bVar47;
        auVar387._9_3_ = 0;
        auVar387[0xc] = bVar49;
        auVar387._13_3_ = 0;
        auVar388 = NEON_ucvtf(auVar387,4);
        auVar106._0_4_ = (int)(short)((ushort)(byte)uVar71 - (ushort)(byte)uVar94);
        auVar106._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 8) - (ushort)bVar36);
        auVar106._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 0x10) - (ushort)bVar38);
        auVar106._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 0x18) - (ushort)bVar40);
        auVar326 = NEON_scvtf(auVar106,4);
        auVar328._0_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 0x20) - (ushort)bVar42);
        auVar328._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 0x28) - (ushort)bVar44);
        auVar328._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 0x30) - (ushort)bVar46);
        auVar328._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar71 >> 0x38) - (ushort)bVar48);
        auVar329 = NEON_scvtf(auVar328,4);
        auVar330._0_4_ = (int)(short)((ushort)(byte)uVar267 - (ushort)(byte)uVar294);
        auVar330._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 8) - (ushort)bVar37);
        auVar330._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x10) - (ushort)bVar39);
        auVar330._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x18) - (ushort)bVar41);
        auVar75 = NEON_scvtf(auVar330,4);
        fVar357 = auVar96._0_4_ + afStack_1f0[0] * auVar75._0_4_;
        fVar376 = auVar96._4_4_ + afStack_1f0[1] * auVar75._4_4_;
        fVar378 = auVar96._8_4_ + afStack_1f0[2] * auVar75._8_4_;
        fVar380 = auVar96._12_4_ + afStack_1f0[3] * auVar75._12_4_;
        auVar331._0_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x20) - (ushort)bVar43);
        auVar331._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x28) - (ushort)bVar45);
        auVar331._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x30) - (ushort)bVar47);
        auVar331._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x38) - (ushort)bVar49);
        auVar75 = NEON_scvtf(auVar331,4);
        fVar381 = auVar388._0_4_ + afStack_1f0[4] * auVar75._0_4_;
        fVar389 = auVar388._4_4_ + afStack_1f0[5] * auVar75._4_4_;
        fVar390 = auVar388._8_4_ + afStack_1f0[6] * auVar75._8_4_;
        fVar391 = auVar388._12_4_ + afStack_1f0[7] * auVar75._12_4_;
        uVar294 = a64_TBL(ZEXT816(0),auVar254,uStack_200);
        uVar94 = a64_TBL(ZEXT816(0),auVar254,lStack_210);
        uVar267 = a64_TBL(ZEXT816(0),auVar181,uStack_200);
        uVar71 = a64_TBL(ZEXT816(0),auVar181,lStack_210);
        bVar36 = (byte)((ulong)uVar94 >> 8);
        bVar38 = (byte)((ulong)uVar94 >> 0x10);
        bVar40 = (byte)((ulong)uVar94 >> 0x18);
        bVar42 = (byte)((ulong)uVar94 >> 0x20);
        bVar44 = (byte)((ulong)uVar94 >> 0x28);
        bVar46 = (byte)((ulong)uVar94 >> 0x30);
        bVar48 = (byte)((ulong)uVar94 >> 0x38);
        bVar37 = (byte)((ulong)uVar71 >> 8);
        bVar39 = (byte)((ulong)uVar71 >> 0x10);
        bVar41 = (byte)((ulong)uVar71 >> 0x18);
        bVar43 = (byte)((ulong)uVar71 >> 0x20);
        bVar45 = (byte)((ulong)uVar71 >> 0x28);
        bVar47 = (byte)((ulong)uVar71 >> 0x30);
        bVar49 = (byte)((ulong)uVar71 >> 0x38);
        auVar182._6_2_ = 0;
        auVar182._0_6_ =
             (uint6)CONCAT14(bVar36,(uint)CONCAT12(bVar36,(ushort)(byte)uVar94)) & 0xffff0000ffff;
        auVar182[8] = bVar38;
        auVar182._9_3_ = 0;
        auVar182[0xc] = bVar40;
        auVar182._13_3_ = 0;
        auVar183 = NEON_ucvtf(auVar182,4);
        auVar134._1_3_ = 0;
        auVar134[0] = bVar42;
        auVar134[4] = bVar44;
        auVar134._5_3_ = 0;
        auVar134[8] = bVar46;
        auVar134._9_3_ = 0;
        auVar134[0xc] = bVar48;
        auVar134._13_3_ = 0;
        auVar388 = NEON_ucvtf(auVar134,4);
        auVar210._6_2_ = 0;
        auVar210._0_6_ =
             (uint6)CONCAT14(bVar37,(uint)CONCAT12(bVar37,(ushort)(byte)uVar71)) & 0xffff0000ffff;
        auVar210[8] = bVar39;
        auVar210._9_3_ = 0;
        auVar210[0xc] = bVar41;
        auVar210._13_3_ = 0;
        auVar211 = NEON_ucvtf(auVar210,4);
        auVar159._1_3_ = 0;
        auVar159[0] = bVar43;
        auVar159[4] = bVar45;
        auVar159._5_3_ = 0;
        auVar159[8] = bVar47;
        auVar159._9_3_ = 0;
        auVar159[0xc] = bVar49;
        auVar159._13_3_ = 0;
        auVar160 = NEON_ucvtf(auVar159,4);
        auVar255._0_4_ = (int)(short)((ushort)(byte)uVar294 - (ushort)(byte)uVar94);
        auVar255._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar294 >> 8) - (ushort)bVar36);
        auVar255._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar294 >> 0x10) - (ushort)bVar38);
        auVar255._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar294 >> 0x18) - (ushort)bVar40);
        auVar256 = NEON_scvtf(auVar255,4);
        auVar97._0_4_ = (int)(short)((ushort)(byte)((ulong)uVar294 >> 0x20) - (ushort)bVar42);
        auVar97._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar294 >> 0x28) - (ushort)bVar44);
        auVar97._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar294 >> 0x30) - (ushort)bVar46);
        auVar97._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar294 >> 0x38) - (ushort)bVar48);
        auVar96 = NEON_scvtf(auVar97,4);
        auVar76._0_4_ = (int)(short)((ushort)(byte)uVar267 - (ushort)(byte)uVar71);
        auVar76._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 8) - (ushort)bVar37);
        auVar76._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x10) - (ushort)bVar39);
        auVar76._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x18) - (ushort)bVar41);
        auVar75 = NEON_scvtf(auVar76,4);
        fVar198 = auVar211._0_4_ + afStack_1f0[0] * auVar75._0_4_;
        fVar213 = auVar211._4_4_ + afStack_1f0[1] * auVar75._4_4_;
        fVar216 = auVar211._8_4_ + afStack_1f0[2] * auVar75._8_4_;
        fVar219 = auVar211._12_4_ + afStack_1f0[3] * auVar75._12_4_;
        auVar77._0_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x20) - (ushort)bVar43);
        auVar77._4_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x28) - (ushort)bVar45);
        auVar77._8_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x30) - (ushort)bVar47);
        auVar77._12_4_ = (int)(short)((ushort)(byte)((ulong)uVar267 >> 0x38) - (ushort)bVar49);
        auVar75 = NEON_scvtf(auVar77,4);
        fVar138 = auVar160._0_4_ + afStack_1f0[4] * auVar75._0_4_;
        fVar164 = auVar160._4_4_ + afStack_1f0[5] * auVar75._4_4_;
        fVar165 = auVar160._8_4_ + afStack_1f0[6] * auVar75._8_4_;
        fVar166 = auVar160._12_4_ + afStack_1f0[7] * auVar75._12_4_;
        uVar9 = CONCAT14((char)(int)(fVar213 +
                                    ((auVar183._4_4_ + afStack_1f0[1] * auVar256._4_4_) - fVar213) *
                                    fVar50),
                         (int)(fVar198 +
                              ((auVar183._0_4_ + afStack_1f0[0] * auVar256._0_4_) - fVar198) *
                              fVar50)) & 0xff000000ff;
        *puVar16 = (char)(int)(fVar93 + ((auVar354._0_4_ + afStack_1f0[0] * auVar301._0_4_) - fVar93
                                        ) * fVar50);
        puVar16[1] = (char)(int)(fVar292 +
                                ((auVar386._0_4_ + afStack_1f0[0] * auVar280._0_4_) - fVar292) *
                                fVar50);
        puVar16[2] = (char)(int)(fVar357 +
                                ((auVar318._0_4_ + afStack_1f0[0] * auVar326._0_4_) - fVar357) *
                                fVar50);
        puVar16[3] = (char)uVar9;
        puVar16[4] = (char)(int)(fVar98 + ((auVar354._4_4_ + afStack_1f0[1] * auVar301._4_4_) -
                                          fVar98) * fVar50);
        puVar16[5] = (char)(int)(fVar308 +
                                ((auVar386._4_4_ + afStack_1f0[1] * auVar280._4_4_) - fVar308) *
                                fVar50);
        puVar16[6] = (char)(int)(fVar376 +
                                ((auVar318._4_4_ + afStack_1f0[1] * auVar326._4_4_) - fVar376) *
                                fVar50);
        puVar16[7] = (char)(uVar9 >> 0x20);
        puVar16[8] = (char)(int)(fVar99 + ((auVar354._8_4_ + afStack_1f0[2] * auVar301._8_4_) -
                                          fVar99) * fVar50);
        puVar16[9] = (char)(int)(fVar310 +
                                ((auVar386._8_4_ + afStack_1f0[2] * auVar280._8_4_) - fVar310) *
                                fVar50);
        puVar16[10] = (char)(int)(fVar378 +
                                 ((auVar318._8_4_ + afStack_1f0[2] * auVar326._8_4_) - fVar378) *
                                 fVar50);
        puVar16[0xb] = (char)(int)(fVar216 +
                                  ((auVar183._8_4_ + afStack_1f0[2] * auVar256._8_4_) - fVar216) *
                                  fVar50);
        puVar16[0xc] = (char)(int)(fVar100 +
                                  ((auVar354._12_4_ + afStack_1f0[3] * auVar301._12_4_) - fVar100) *
                                  fVar50);
        puVar16[0xd] = (char)(int)(fVar312 +
                                  ((auVar386._12_4_ + afStack_1f0[3] * auVar280._12_4_) - fVar312) *
                                  fVar50);
        puVar16[0xe] = (char)(int)(fVar380 +
                                  ((auVar318._12_4_ + afStack_1f0[3] * auVar326._12_4_) - fVar380) *
                                  fVar50);
        puVar16[0xf] = (char)(int)(fVar219 +
                                  ((auVar183._12_4_ + afStack_1f0[3] * auVar256._12_4_) - fVar219) *
                                  fVar50);
        puVar16[0x10] =
             (char)(int)(fVar70 + ((auVar317._0_4_ + afStack_1f0[4] * auVar303._0_4_) - fVar70) *
                                  fVar50);
        puVar16[0x11] =
             (char)(int)(fVar265 +
                        ((auVar327._0_4_ + afStack_1f0[4] * auVar341._0_4_) - fVar265) * fVar50);
        puVar16[0x12] =
             (char)(int)(fVar381 +
                        ((auVar345._0_4_ + afStack_1f0[4] * auVar329._0_4_) - fVar381) * fVar50);
        puVar16[0x13] =
             (char)(int)(fVar138 +
                        ((auVar388._0_4_ + afStack_1f0[4] * auVar96._0_4_) - fVar138) * fVar50);
        puVar16[0x14] =
             (char)(int)(fVar90 + ((auVar317._4_4_ + afStack_1f0[5] * auVar303._4_4_) - fVar90) *
                                  fVar50);
        puVar16[0x15] =
             (char)(int)(fVar286 +
                        ((auVar327._4_4_ + afStack_1f0[5] * auVar341._4_4_) - fVar286) * fVar50);
        puVar16[0x16] =
             (char)(int)(fVar389 +
                        ((auVar345._4_4_ + afStack_1f0[5] * auVar329._4_4_) - fVar389) * fVar50);
        puVar16[0x17] =
             (char)(int)(fVar164 +
                        ((auVar388._4_4_ + afStack_1f0[5] * auVar96._4_4_) - fVar164) * fVar50);
        puVar16[0x18] =
             (char)(int)(fVar91 + ((auVar317._8_4_ + afStack_1f0[6] * auVar303._8_4_) - fVar91) *
                                  fVar50);
        puVar16[0x19] =
             (char)(int)(fVar288 +
                        ((auVar327._8_4_ + afStack_1f0[6] * auVar341._8_4_) - fVar288) * fVar50);
        puVar16[0x1a] =
             (char)(int)(fVar390 +
                        ((auVar345._8_4_ + afStack_1f0[6] * auVar329._8_4_) - fVar390) * fVar50);
        puVar16[0x1b] =
             (char)(int)(fVar165 +
                        ((auVar388._8_4_ + afStack_1f0[6] * auVar96._8_4_) - fVar165) * fVar50);
        puVar16[0x1c] =
             (char)(int)(fVar92 + ((auVar317._12_4_ + afStack_1f0[7] * auVar303._12_4_) - fVar92) *
                                  fVar50);
        puVar16[0x1d] =
             (char)(int)(fVar290 +
                        ((auVar327._12_4_ + afStack_1f0[7] * auVar341._12_4_) - fVar290) * fVar50);
        puVar16[0x1e] =
             (char)(int)(fVar391 +
                        ((auVar345._12_4_ + afStack_1f0[7] * auVar329._12_4_) - fVar391) * fVar50);
        puVar16[0x1f] =
             (char)(int)(fVar166 +
                        ((auVar388._12_4_ + afStack_1f0[7] * auVar96._12_4_) - fVar166) * fVar50);
        puVar16 = puVar16 + param_7;
        uVar26 = uVar26 + 1;
        uVar25 = param_3[1];
        uVar20 = uVar25;
        uVar35 = uVar25;
      } while (uVar26 < uVar25);
    }
    uVar29 = uVar29 + 8;
    uVar26 = *param_3;
  } while( true );
}



/* Entry: 10936ab7c; end: 10936ac8f;  */

void FUN_10936ab7c(float param_1,ulong param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  
  func_0x0001074287b0(param_3,param_2);
  lVar1 = *param_3;
  if (param_2 < 8) {
    uVar2 = 0;
    fVar9 = 2.0;
    fVar11 = 3.0;
    fVar5 = 0.0;
    fVar7 = 1.0;
  }
  else {
    uVar2 = 0;
    fVar9 = 2.0;
    fVar11 = 3.0;
    fVar5 = 0.0;
    fVar7 = 1.0;
    puVar3 = (undefined8 *)(lVar1 + 0x10);
    auVar12 = NEON_fmov(0x40800000,4);
    do {
      fVar4 = fVar5 + auVar12._0_4_;
      fVar6 = fVar7 + auVar12._4_4_;
      fVar8 = fVar9 + auVar12._8_4_;
      fVar10 = fVar11 + auVar12._12_4_;
      puVar3[-1] = CONCAT44((int)((fVar11 + 0.5) * param_1),(int)((fVar9 + 0.5) * param_1));
      puVar3[-2] = CONCAT44((int)((fVar7 + 0.5) * param_1),(int)((fVar5 + 0.5) * param_1));
      puVar3[1] = CONCAT44((int)((fVar10 + 0.5) * param_1),(int)((fVar8 + 0.5) * param_1));
      *puVar3 = CONCAT44((int)((fVar6 + 0.5) * param_1),(int)((fVar4 + 0.5) * param_1));
      fVar5 = fVar4 + auVar12._0_4_;
      fVar7 = fVar6 + auVar12._4_4_;
      fVar9 = fVar8 + auVar12._8_4_;
      fVar11 = fVar10 + auVar12._12_4_;
      uVar2 = uVar2 + 8;
      puVar3 = puVar3 + 4;
    } while (uVar2 < param_2 - 7);
  }
  if ((2 < param_2) && (uVar2 < param_2 - 3)) {
    auVar12 = NEON_fmov(0x40800000,4);
    puVar3 = (undefined8 *)(lVar1 + uVar2 * 4);
    do {
      puVar3[1] = CONCAT44((int)((fVar11 + 0.5) * param_1),(int)((fVar9 + 0.5) * param_1));
      *puVar3 = CONCAT44((int)((fVar7 + 0.5) * param_1),(int)((fVar5 + 0.5) * param_1));
      fVar5 = fVar5 + auVar12._0_4_;
      fVar7 = fVar7 + auVar12._4_4_;
      fVar9 = fVar9 + auVar12._8_4_;
      fVar11 = fVar11 + auVar12._12_4_;
      uVar2 = uVar2 + 4;
      puVar3 = puVar3 + 2;
    } while (uVar2 < param_2 - 3);
  }
  if (uVar2 < param_2) {
    do {
      *(int *)(lVar1 + uVar2 * 4) = (int)(param_1 * ((float)uVar2 + 0.5));
      uVar2 = uVar2 + 1;
    } while (param_2 != uVar2);
  }
  return;
}



/* Entry: 10936ac90; end: 10936b15f;  */

long * FUN_10936ac90(long *param_1,int param_2,int param_3,int param_4,uint param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  
  *(undefined4 *)(param_1 + 0x12) = 0x42ff0000;
  *param_1 = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  *(undefined8 *)((long)param_1 + 0xac) = 0;
  *(undefined8 *)((long)param_1 + 0xa4) = 0;
  *(undefined8 *)((long)param_1 + 0xbc) = 0;
  *(undefined8 *)((long)param_1 + 0xb4) = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1a] = (long)(param_1 + 0x13);
  param_1[0x1b] = (long)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x1e) = 0x42ff0000;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0x10c) = 0;
  *(undefined8 *)((long)param_1 + 0x104) = 0;
  *(undefined8 *)((long)param_1 + 0x11c) = 0;
  *(undefined8 *)((long)param_1 + 0x114) = 0;
  param_1[0x26] = (long)(param_1 + 0x1f);
  param_1[0x27] = (long)(param_1 + 0x28);
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0x42ff0000;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  *(undefined8 *)((long)param_1 + 0x16c) = 0;
  *(undefined8 *)((long)param_1 + 0x164) = 0;
  *(undefined8 *)((long)param_1 + 0x17c) = 0;
  *(undefined8 *)((long)param_1 + 0x174) = 0;
  *(undefined8 *)((long)param_1 + 0x15c) = 0;
  *(undefined8 *)((long)param_1 + 0x154) = 0;
  param_1[0x32] = (long)(param_1 + 0x2b);
  param_1[0x33] = (long)(param_1 + 0x34);
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0x42ff0000;
  param_1[0x3d] = 0;
  param_1[0x3c] = 0;
  *(undefined8 *)((long)param_1 + 0x1cc) = 0;
  *(undefined8 *)((long)param_1 + 0x1c4) = 0;
  *(undefined8 *)((long)param_1 + 0x1dc) = 0;
  *(undefined8 *)((long)param_1 + 0x1d4) = 0;
  *(undefined8 *)((long)param_1 + 0x1bc) = 0;
  *(undefined8 *)((long)param_1 + 0x1b4) = 0;
  param_1[0x3e] = (long)(param_1 + 0x37);
  param_1[0x3f] = (long)(param_1 + 0x40);
  param_1[0x41] = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x21c) = 0;
  *(undefined8 *)((long)param_1 + 0x214) = 0;
  *(undefined8 *)((long)param_1 + 0x22c) = 0;
  *(undefined8 *)((long)param_1 + 0x224) = 0;
  *(undefined8 *)((long)param_1 + 0x23c) = 0;
  *(undefined8 *)((long)param_1 + 0x234) = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x4a] = (long)(param_1 + 0x43);
  param_1[0x4b] = (long)(param_1 + 0x4c);
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0x42ff0000;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  *(undefined8 *)((long)param_1 + 0x28c) = 0;
  *(undefined8 *)((long)param_1 + 0x284) = 0;
  *(undefined8 *)((long)param_1 + 0x29c) = 0;
  *(undefined8 *)((long)param_1 + 0x294) = 0;
  *(undefined8 *)((long)param_1 + 0x27c) = 0;
  *(undefined8 *)((long)param_1 + 0x274) = 0;
  param_1[0x56] = (long)(param_1 + 0x4f);
  param_1[0x57] = (long)(param_1 + 0x58);
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0x42ff0000;
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  *(undefined8 *)((long)param_1 + 0x2ec) = 0;
  *(undefined8 *)((long)param_1 + 0x2e4) = 0;
  *(undefined8 *)((long)param_1 + 0x2fc) = 0;
  *(undefined8 *)((long)param_1 + 0x2f4) = 0;
  *(undefined8 *)((long)param_1 + 0x2dc) = 0;
  *(undefined8 *)((long)param_1 + 0x2d4) = 0;
  param_1[0x62] = (long)(param_1 + 0x5b);
  param_1[99] = (long)(param_1 + 100);
  param_1[0x65] = 0;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0x42ff0000;
  param_1[0x6d] = 0;
  param_1[0x6c] = 0;
  *(undefined8 *)((long)param_1 + 0x34c) = 0;
  *(undefined8 *)((long)param_1 + 0x344) = 0;
  *(undefined8 *)((long)param_1 + 0x35c) = 0;
  *(undefined8 *)((long)param_1 + 0x354) = 0;
  *(undefined8 *)((long)param_1 + 0x33c) = 0;
  *(undefined8 *)((long)param_1 + 0x334) = 0;
  param_1[0x6e] = (long)(param_1 + 0x67);
  param_1[0x6f] = (long)(param_1 + 0x70);
  param_1[0x71] = 0;
  param_1[0x70] = 0;
  *(undefined4 *)(param_1 + 0x72) = 0x42ff0000;
  param_1[0x79] = 0;
  param_1[0x78] = 0;
  *(undefined8 *)((long)param_1 + 0x3ac) = 0;
  *(undefined8 *)((long)param_1 + 0x3a4) = 0;
  *(undefined8 *)((long)param_1 + 0x3bc) = 0;
  *(undefined8 *)((long)param_1 + 0x3b4) = 0;
  *(undefined8 *)((long)param_1 + 0x39c) = 0;
  *(undefined8 *)((long)param_1 + 0x394) = 0;
  param_1[0x7a] = (long)(param_1 + 0x73);
  param_1[0x7b] = (long)(param_1 + 0x7c);
  param_1[0x7d] = 0;
  param_1[0x7c] = 0;
  *(undefined4 *)(param_1 + 0x7e) = 0x42ff0000;
  param_1[0x85] = 0;
  param_1[0x84] = 0;
  *(undefined8 *)((long)param_1 + 0x40c) = 0;
  *(undefined8 *)((long)param_1 + 0x404) = 0;
  *(undefined8 *)((long)param_1 + 0x41c) = 0;
  *(undefined8 *)((long)param_1 + 0x414) = 0;
  *(undefined8 *)((long)param_1 + 0x3fc) = 0;
  *(undefined8 *)((long)param_1 + 0x3f4) = 0;
  param_1[0x86] = (long)(param_1 + 0x7f);
  param_1[0x87] = (long)(param_1 + 0x88);
  param_1[0x89] = 0;
  param_1[0x88] = 0;
  *(undefined4 *)(param_1 + 0x8a) = 0x42ff0000;
  param_1[0x91] = 0;
  param_1[0x90] = 0;
  *(undefined8 *)((long)param_1 + 0x46c) = 0;
  *(undefined8 *)((long)param_1 + 0x464) = 0;
  *(undefined8 *)((long)param_1 + 0x47c) = 0;
  *(undefined8 *)((long)param_1 + 0x474) = 0;
  *(undefined8 *)((long)param_1 + 0x45c) = 0;
  *(undefined8 *)((long)param_1 + 0x454) = 0;
  param_1[0x92] = (long)(param_1 + 0x8b);
  param_1[0x93] = (long)(param_1 + 0x94);
  *(undefined4 *)(param_1 + 0x96) = 0x42ff0000;
  param_1[0x9d] = 0;
  param_1[0x9c] = 0;
  *(undefined8 *)((long)param_1 + 0x4cc) = 0;
  *(undefined8 *)((long)param_1 + 0x4c4) = 0;
  *(undefined8 *)((long)param_1 + 0x4dc) = 0;
  *(undefined8 *)((long)param_1 + 0x4d4) = 0;
  *(undefined8 *)((long)param_1 + 0x4bc) = 0;
  *(undefined8 *)((long)param_1 + 0x4b4) = 0;
  param_1[0x9e] = (long)(param_1 + 0x97);
  param_1[0x9f] = (long)(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0xa2) = 0x42ff0000;
  param_1[0xa9] = 0;
  param_1[0xa8] = 0;
  *(undefined8 *)((long)param_1 + 0x52c) = 0;
  *(undefined8 *)((long)param_1 + 0x524) = 0;
  *(undefined8 *)((long)param_1 + 0x53c) = 0;
  *(undefined8 *)((long)param_1 + 0x534) = 0;
  *(undefined8 *)((long)param_1 + 0x51c) = 0;
  *(undefined8 *)((long)param_1 + 0x514) = 0;
  param_1[0xaa] = (long)(param_1 + 0xa3);
  param_1[0xab] = (long)(param_1 + 0xac);
  *(undefined4 *)(param_1 + 0xae) = 0x42ff0000;
  param_1[0xb5] = 0;
  param_1[0xb4] = 0;
  *(undefined8 *)((long)param_1 + 0x58c) = 0;
  *(undefined8 *)((long)param_1 + 0x584) = 0;
  *(undefined8 *)((long)param_1 + 0x59c) = 0;
  *(undefined8 *)((long)param_1 + 0x594) = 0;
  *(undefined8 *)((long)param_1 + 0x57c) = 0;
  *(undefined8 *)((long)param_1 + 0x574) = 0;
  param_1[0xb6] = (long)(param_1 + 0xaf);
  param_1[0xb7] = (long)(param_1 + 0xb8);
  *(undefined4 *)(param_1 + 0xba) = 0x42ff0000;
  param_1[0xc1] = 0;
  param_1[0xc0] = 0;
  *(undefined8 *)((long)param_1 + 0x5ec) = 0;
  *(undefined8 *)((long)param_1 + 0x5e4) = 0;
  *(undefined8 *)((long)param_1 + 0x5fc) = 0;
  *(undefined8 *)((long)param_1 + 0x5f4) = 0;
  *(undefined8 *)((long)param_1 + 0x5dc) = 0;
  *(undefined8 *)((long)param_1 + 0x5d4) = 0;
  param_1[0xc2] = (long)(param_1 + 0xbb);
  param_1[0xc3] = (long)(param_1 + 0xc4);
  *(undefined4 *)(param_1 + 0xc6) = 0x42ff0000;
  param_1[0xcd] = 0;
  param_1[0xcc] = 0;
  *(undefined8 *)((long)param_1 + 0x64c) = 0;
  *(undefined8 *)((long)param_1 + 0x644) = 0;
  *(undefined8 *)((long)param_1 + 0x65c) = 0;
  *(undefined8 *)((long)param_1 + 0x654) = 0;
  *(undefined8 *)((long)param_1 + 0x63c) = 0;
  *(undefined8 *)((long)param_1 + 0x634) = 0;
  param_1[0xce] = (long)(param_1 + 199);
  param_1[0xcf] = (long)(param_1 + 0xd0);
  *(undefined4 *)(param_1 + 0xd2) = 0x42ff0000;
  param_1[0xd9] = 0;
  param_1[0xd8] = 0;
  *(undefined8 *)((long)param_1 + 0x6ac) = 0;
  *(undefined8 *)((long)param_1 + 0x6a4) = 0;
  *(undefined8 *)((long)param_1 + 0x6bc) = 0;
  *(undefined8 *)((long)param_1 + 0x6b4) = 0;
  *(undefined8 *)((long)param_1 + 0x69c) = 0;
  *(undefined8 *)((long)param_1 + 0x694) = 0;
  iVar4 = (int)((double)param_3 / (double)param_4) * (int)((double)param_2 / (double)param_4);
  param_1[0x95] = 0;
  param_1[0x94] = 0;
  param_1[0xa1] = 0;
  param_1[0xa0] = 0;
  param_1[0xad] = 0;
  param_1[0xac] = 0;
  param_1[0xb9] = 0;
  param_1[0xb8] = 0;
  iVar5 = param_4 * param_4 * iVar4;
  param_1[0xc5] = 0;
  param_1[0xc4] = 0;
  param_1[0xd1] = 0;
  param_1[0xd0] = 0;
  param_3 = param_3 * param_2;
  param_1[0xda] = (long)(param_1 + 0xd3);
  param_1[0xdb] = (long)(param_1 + 0xdc);
  param_1[0xdd] = 0;
  param_1[0xdc] = 0;
  if (param_5 < 7) {
    iVar7 = *(int *)(&UNK_10dfc7a94 + (ulong)param_5 * 4);
  }
  else {
    iVar7 = 0;
  }
  lVar6 = (long)(iVar7 * (param_3 + iVar4 * 0xc + iVar5 * 4));
  __Znam();
  *param_1 = lVar6;
  if (param_5 == 5) {
    lVar1 = lVar6 + (long)param_3 * 4;
    lVar2 = lVar1 + (long)iVar4 * 4;
    param_1[1] = lVar1;
    param_1[2] = lVar2;
    lVar2 = lVar2 + (long)iVar4 * 4;
    lVar1 = lVar2 + (long)iVar4 * 4;
    lVar3 = lVar1 + (long)iVar4 * 4;
    param_1[3] = lVar2;
    param_1[4] = lVar3;
    lVar3 = lVar3 + (long)iVar4 * 4;
    param_1[5] = lVar3;
    lVar3 = lVar3 + (long)iVar4 * 4;
    lVar2 = lVar3 + (long)iVar4 * 4;
    param_1[7] = lVar1;
    param_1[8] = lVar2;
    lVar2 = lVar2 + (long)iVar4 * 4;
    param_1[9] = lVar3;
    param_1[10] = lVar2;
    lVar2 = lVar2 + (long)iVar4 * 4;
    lVar1 = lVar2 + (long)iVar4 * 4;
    param_1[0xb] = lVar2;
    param_1[0xc] = lVar1;
    lVar1 = lVar1 + (long)iVar4 * 4;
    param_1[0xd] = lVar1;
    param_1[0xe] = lVar6;
    lVar1 = lVar1 + (long)iVar4 * 4;
    lVar6 = lVar1 + (long)iVar5 * 4;
    param_1[0xf] = lVar1;
    param_1[0x10] = lVar6;
    lVar6 = lVar6 + (long)iVar5 * 4;
    param_1[0x11] = lVar6;
    lVar6 = lVar6 + (long)iVar5 * 4;
  }
  else {
    if (param_5 != 6) {
      return param_1;
    }
    lVar1 = lVar6 + (long)param_3 * 8;
    lVar2 = lVar1 + (long)iVar4 * 8;
    param_1[1] = lVar1;
    param_1[2] = lVar2;
    lVar2 = lVar2 + (long)iVar4 * 8;
    lVar1 = lVar2 + (long)iVar4 * 8;
    lVar3 = lVar1 + (long)iVar4 * 8;
    param_1[3] = lVar2;
    param_1[4] = lVar3;
    lVar3 = lVar3 + (long)iVar4 * 8;
    param_1[5] = lVar3;
    lVar3 = lVar3 + (long)iVar4 * 8;
    lVar2 = lVar3 + (long)iVar4 * 8;
    param_1[7] = lVar1;
    param_1[8] = lVar2;
    lVar2 = lVar2 + (long)iVar4 * 8;
    param_1[9] = lVar3;
    param_1[10] = lVar2;
    lVar2 = lVar2 + (long)iVar4 * 8;
    lVar1 = lVar2 + (long)iVar4 * 8;
    param_1[0xb] = lVar2;
    param_1[0xc] = lVar1;
    lVar1 = lVar1 + (long)iVar4 * 8;
    param_1[0xd] = lVar1;
    param_1[0xe] = lVar6;
    lVar1 = lVar1 + (long)iVar4 * 8;
    lVar6 = lVar1 + (long)iVar5 * 8;
    param_1[0xf] = lVar1;
    param_1[0x10] = lVar6;
    lVar6 = lVar6 + (long)iVar5 * 8;
    param_1[0x11] = lVar6;
    lVar6 = lVar6 + (long)iVar5 * 8;
  }
  param_1[6] = lVar6;
  return param_1;
}



/* Entry: 10936b160; end: 10936b3a7;  */

void FUN_10936b160(long param_1,int param_2,int param_3,undefined8 *param_4,uint param_5)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  uint uStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  long *plStack_68;
  long lStack_60;
  ulong uStack_58;
  undefined4 *puStack_50;
  undefined8 uStack_48;
  
  uStack_b0 = param_5 & 0xfff | 0x42ff0000;
  iStack_ac = 2;
  uStack_70 = (ulong)&uStack_b0 | 8;
  lStack_88 = 0;
  lStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  lStack_60 = 0;
  uStack_58 = 0;
  iStack_a8 = param_3;
  iStack_a4 = param_2;
  lStack_a0 = param_1;
  lStack_98 = param_1;
  plStack_68 = &lStack_60;
  if ((param_1 == 0) && ((long)param_3 * (long)param_2 != 0)) {
    puVar8 = (undefined4 *)0x24;
    func_0x000107c2ae8c();
    *puVar8 = 1;
    puStack_50 = puVar8 + 1;
    uStack_48 = 0x1c;
    *(undefined1 *)(puVar8 + 8) = 0;
    *(undefined8 *)(puVar8 + 3) = 0x207c7c2030203d3d;
    *(undefined8 *)(puVar8 + 1) = 0x2029286c61746f74;
    *(undefined8 *)(puVar8 + 6) = 0x4c4c554e203d2120;
    *(undefined8 *)(puVar8 + 4) = 0x61746164207c7c20;
    FUN_109ac3188(0xffffff29,&puStack_50,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10936b36c);
    (*pcVar7)();
  }
  uVar4 = (param_5 >> 3 & 0x1ff) + 1 << (ulong)(0xfa50U >> (ulong)((param_5 & 7) << 1) & 3);
  uStack_58 = (ulong)uVar4;
  lStack_60 = (long)(int)uVar4 * (long)param_2;
  uStack_b0 = param_5 & 0xfff | 0x42ff4000;
  lStack_90 = param_1 + lStack_60 * param_3;
  lStack_88 = lStack_90;
  if (param_4[7] != 0) {
    piVar1 = (int *)(param_4[7] + 0x14);
    do {
      iVar3 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(param_4);
    }
  }
  param_4[7] = 0;
  param_4[3] = 0;
  param_4[2] = 0;
  param_4[5] = 0;
  param_4[4] = 0;
  if (0 < *(int *)((long)param_4 + 4)) {
    lVar9 = 0;
    lVar11 = param_4[8];
    do {
      *(undefined4 *)(lVar11 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)((long)param_4 + 4));
  }
  param_4[1] = CONCAT44(iStack_a4,iStack_a8);
  *param_4 = CONCAT44(iStack_ac,uStack_b0);
  param_4[3] = lStack_98;
  param_4[2] = lStack_a0;
  param_4[5] = lStack_88;
  param_4[4] = lStack_90;
  param_4[7] = uStack_78;
  param_4[6] = uStack_80;
  plVar12 = (long *)param_4[9];
  plVar2 = param_4 + 10;
  if (plVar12 != plVar2) {
    if (plVar12 != (long *)0x0) {
      _free(plVar12[-1]);
    }
    param_4[8] = param_4 + 1;
    param_4[9] = plVar2;
    plVar12 = plVar2;
  }
  if (iStack_ac < 3) {
    puVar10 = (undefined8 *)((ulong)&uStack_b0 | 4);
    *plVar12 = *plStack_68;
    plVar12[1] = plStack_68[1];
    uStack_b0 = 0x42ff0000;
    puVar10[1] = 0;
    *puVar10 = 0;
    puVar10[3] = 0;
    puVar10[2] = 0;
    puVar10[5] = 0;
    puVar10[4] = 0;
    *(undefined8 *)((long)puVar10 + 0x34) = 0;
    *(undefined8 *)((long)puVar10 + 0x2c) = 0;
    if (plStack_68 != &lStack_60) {
      _free(plStack_68[-1]);
    }
  }
  else {
    param_4[8] = uStack_70;
    param_4[9] = plStack_68;
  }
  return;
}



/* Entry: 10936b3a8; end: 10936b6b3;  */

void FUN_10936b3a8(long param_1,uint *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined8 uStack_88;
  undefined4 auStack_80 [2];
  long lStack_78;
  undefined8 uStack_70;
  undefined4 auStack_68 [2];
  long lStack_60;
  undefined8 uStack_58;
  
  iVar3 = *(int *)(param_1 + 0x20);
  uVar4 = *(undefined4 *)(param_1 + 0x24);
  lVar1 = param_1 + 0x538;
  FUN_10936b160(*(undefined8 *)(param_1 + 0x98),param_2[3],param_2[2],lVar1,uVar4);
  iVar5 = (int)((double)*(int *)(param_1 + 0x540) / (double)iVar3);
  iVar6 = (int)((double)*(int *)(param_1 + 0x544) / (double)iVar3);
  FUN_10936b160(*(undefined8 *)(param_1 + 0x30),iVar6,iVar5,param_1 + 0xb8,uVar4);
  FUN_10936b160(*(undefined8 *)(param_1 + 0x38),iVar6,iVar5,param_1 + 0x118,uVar4);
  FUN_10936b160(*(undefined8 *)(param_1 + 0x40),iVar6,iVar5,param_1 + 0x178,uVar4);
  lVar2 = param_1 + 0x298;
  FUN_10936b160(*(undefined8 *)(param_1 + 0x60),iVar6,iVar5,lVar2,uVar4);
  FUN_10936b160(*(undefined8 *)(param_1 + 0x48),iVar6,iVar5,param_1 + 0x1d8,uVar4);
  FUN_10936b160(*(undefined8 *)(param_1 + 0x50),iVar6,iVar5,param_1 + 0x238,uVar4);
  FUN_10936b160(*(undefined8 *)(param_1 + 0x70),iVar6,iVar5,param_1 + 0x358,uVar4);
  FUN_10936b160(*(undefined8 *)(param_1 + 0x68),iVar6,iVar5,param_1 + 0x2f8,uVar4);
  FUN_10936b160(*(undefined8 *)(param_1 + 0x78),iVar6,iVar5,param_1 + 0x3b8,uVar4);
  FUN_10936b160(*(undefined8 *)(param_1 + 0x80),iVar6,iVar5,param_1 + 0x418,uVar4);
  FUN_10936b160(*(undefined8 *)(param_1 + 0x88),iVar6,iVar5,param_1 + 0x478,uVar4);
  FUN_10936b160(*(undefined8 *)(param_1 + 0x90),iVar6,iVar5,param_1 + 0x4d8,uVar4);
  iVar5 = iVar3 * iVar5;
  iVar3 = iVar3 * iVar6;
  FUN_10936b160(*(undefined8 *)(param_1 + 0xa0),iVar3,iVar5,param_1 + 0x598,uVar4);
  FUN_10936b160(*(undefined8 *)(param_1 + 0xa8),iVar3,iVar5,param_1 + 0x5f8,uVar4);
  FUN_10936b160(*(undefined8 *)(param_1 + 0xb0),iVar3,iVar5,param_1 + 0x658,uVar4);
  FUN_10936b160(*(undefined8 *)(param_1 + 0x58),iVar3,iVar5,param_1 + 0x6b8,uVar4);
  if ((*param_2 & 7) - 5 < 2) {
    auStack_68[0] = 0x2010000;
    uStack_58 = 0;
    lStack_60 = lVar1;
    FUN_109a479a0(param_2,auStack_68);
  }
  else {
    func_0x00010936b6b4(param_2,5,lVar1);
  }
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 0x538) & 7;
  uStack_58 = 0;
  auStack_68[0] = 0x1010000;
  auStack_80[0] = 0x2010000;
  uStack_70 = 0;
  auVar7._0_8_ = (long)(int)*(undefined8 *)(param_1 + 0x540);
  auVar7._8_8_ = (long)(int)((ulong)*(undefined8 *)(param_1 + 0x540) >> 0x20);
  auVar7 = NEON_scvtf(auVar7,8);
  uStack_88 = NEON_rev64(CONCAT44((int)(long)(auVar7._8_8_ / (double)*(int *)(param_1 + 0x20)),
                                  (int)(long)(auVar7._0_8_ / (double)*(int *)(param_1 + 0x20))),4);
  lStack_78 = lVar2;
  lStack_60 = lVar1;
  FUN_109b0f718(0,0,auStack_68,auStack_80,&uStack_88,0);
  func_0x00010936b700(lVar2,*(undefined4 *)(param_1 + 0x10),param_1 + 0xb8);
  func_0x00010936b75c(lVar2,lVar2,param_1 + 0x178);
  func_0x00010936b700(param_1 + 0x178,*(undefined4 *)(param_1 + 0x10),param_1 + 0x178);
  func_0x00010936b75c(param_1 + 0xb8,param_1 + 0xb8,param_1 + 0x118);
  func_0x00010936b7d4(param_1 + 0x178,param_1 + 0x118,param_1 + 0x118);
  return;
}



/* Entry: 10936b6b4; end: 10936b843;  */

void FUN_10936b6b4(uint *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 auStack_28 [2];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if ((*param_1 & 7) != (uint)param_2) {
    auStack_28[0] = 0x2010000;
    uStack_18 = 0;
    uStack_20 = param_3;
    FUN_109a41858(0x3ff0000000000000,0,param_1,auStack_28,param_2);
  }
  return;
}



/* Entry: 10936b844; end: 10936bd0b;  */

void FUN_10936b844(long *param_1,uint *param_2,uint *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  uint *puVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong unaff_x22;
  uint *unaff_x23;
  undefined8 *unaff_x24;
  undefined4 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  long lStack_3d0;
  uint *puStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  uint *puStack_3a8;
  undefined8 uStack_3a0;
  undefined4 uStack_250;
  int iStack_24c;
  undefined8 uStack_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  long lStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined4 auStack_1f0 [2];
  long *plStack_1e8;
  undefined8 uStack_1e0;
  undefined4 auStack_1d8 [2];
  undefined4 *puStack_1d0;
  undefined8 uStack_1c8;
  undefined4 auStack_1c0 [2];
  long *plStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 *puStack_190;
  undefined4 *puStack_188;
  undefined8 *puStack_180;
  uint *puStack_178;
  ulong uStack_170;
  uint *puStack_168;
  long *plStack_160;
  long *plStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  uint *puStack_138;
  undefined4 auStack_130 [2];
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  long lStack_e0;
  undefined4 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  long *plStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined4 *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*param_2 & 0xff8) == 0) {
    FUN_10936b6b4(param_2,(int)param_1[1],param_1 + 0xd7);
    plVar9 = param_1 + 0xd7;
    puVar10 = (uint *)(param_1 + 0xcb);
    plVar6 = param_1;
    (**(code **)(*param_1 + 0x20))();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      if ((*(uint *)(param_1 + 0xcb) & 7) != (*param_3 & 7)) {
        FUN_109a41858(0x3ff0000000000000,0,param_1 + 0xcb,&stack0xffffffffffffffd8,*param_3 & 7);
      }
      return;
    }
  }
  else {
    lStack_a0 = 0;
    lStack_98 = 0;
    uStack_90 = 0;
    uStack_110 = SUB84(param_2,0);
    uStack_10c = (undefined4)((ulong)param_2 >> 0x20);
    uStack_108 = 0;
    uStack_104 = 0;
    uStack_118._0_4_ = 0x1010000;
    uStack_b8 = 0x2050000;
    plStack_b0 = &lStack_a0;
    uStack_a8 = 0;
    FUN_109a3dcec(&uStack_118,&uStack_b8);
    puStack_138 = param_3;
    FUN_10937017c(&uStack_b8,(*param_2 >> 3 & 0x1ff) + 1);
    if (lStack_98 != lStack_a0) {
      unaff_x22 = 0;
      unaff_x23 = (uint *)&uStack_118;
      unaff_x24 = (undefined8 *)((ulong)unaff_x23 | 4);
      unaff_x25 = &uStack_110;
      unaff_x26 = &uStack_c8;
      unaff_x27 = 0x60;
      unaff_x28 = 0x42ff0000;
      do {
        FUN_10936b6b4(lStack_a0 + unaff_x22 * 0x60,(int)param_1[1],param_1 + 0xd7);
        uVar3 = *(uint *)(param_1 + 0xcb);
        uStack_118._0_4_ = 0x42ff0000;
        unaff_x24[1] = 0;
        *unaff_x24 = 0;
        unaff_x24[3] = 0;
        unaff_x24[2] = 0;
        unaff_x24[5] = 0;
        unaff_x24[4] = 0;
        *(undefined8 *)((long)unaff_x24 + 0x34) = 0;
        *(undefined8 *)((long)unaff_x24 + 0x2c) = 0;
        uStack_c8 = 0;
        uStack_c0 = 0;
        lStack_88 = param_1[0xcc];
        puStack_d8 = unaff_x25;
        puStack_d0 = unaff_x26;
        FUN_109a83fd0(&uStack_118,2,&lStack_88,uVar3 & 7);
        (**(code **)(*param_1 + 0x20))(param_1,param_1 + 0xd7,&uStack_118);
        param_2 = (uint *)(CONCAT44(uStack_b4,uStack_b8) + unaff_x22 * 0x60);
        if (param_2 != unaff_x23) {
          if (lStack_e0 != 0) {
            piVar1 = (int *)(lStack_e0 + 0x14);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = *piVar1 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          if (*(long *)(param_2 + 0xe) != 0) {
            piVar1 = (int *)(*(long *)(param_2 + 0xe) + 0x14);
            do {
              iVar2 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar2 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar2 + -1 == 0) {
              func_0x000109a848d4(param_2);
            }
          }
          param_2[0xe] = 0;
          param_2[0xf] = 0;
          param_2[6] = 0;
          param_2[7] = 0;
          param_2[4] = 0;
          param_2[5] = 0;
          param_2[10] = 0;
          param_2[0xb] = 0;
          param_2[8] = 0;
          param_2[9] = 0;
          if ((int)param_2[1] < 1) {
            *param_2 = (uint)uStack_118;
LAB_10936ba0c:
            if (2 < (int)uStack_118._4_4_) goto LAB_10936ba40;
            param_2[1] = uStack_118._4_4_;
            *(ulong *)(param_2 + 2) = CONCAT44(uStack_10c,uStack_110);
            puVar13 = *(undefined8 **)(param_2 + 0x12);
            *puVar13 = *puStack_d0;
            puVar13[1] = puStack_d0[1];
          }
          else {
            lVar11 = 0;
            lVar12 = *(long *)(param_2 + 0x10);
            do {
              *(undefined4 *)(lVar12 + lVar11 * 4) = 0;
              lVar11 = lVar11 + 1;
            } while (lVar11 < (int)param_2[1]);
            *param_2 = (uint)uStack_118;
            if ((int)param_2[1] < 3) goto LAB_10936ba0c;
LAB_10936ba40:
            func_0x000109a84868(param_2,&uStack_118);
          }
          *(ulong *)(param_2 + 6) = CONCAT44(uStack_fc,uStack_100);
          *(ulong *)(param_2 + 4) = CONCAT44(uStack_104,uStack_108);
          *(ulong *)(param_2 + 10) = CONCAT44(uStack_ec,uStack_f0);
          *(ulong *)(param_2 + 8) = CONCAT44(uStack_f4,uStack_f8);
          *(long *)(param_2 + 0xe) = lStack_e0;
          *(ulong *)(param_2 + 0xc) = CONCAT44(uStack_e4,uStack_e8);
        }
        if (lStack_e0 != 0) {
          piVar1 = (int *)(lStack_e0 + 0x14);
          do {
            iVar2 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar2 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar2 + -1 == 0) {
            func_0x000109a848d4(&uStack_118);
          }
        }
        lStack_e0 = 0;
        uStack_100 = 0;
        uStack_fc = 0;
        uStack_108 = 0;
        uStack_104 = 0;
        uStack_f0 = 0;
        uStack_ec = 0;
        uStack_f8 = 0;
        uStack_f4 = 0;
        if (0 < (int)uStack_118._4_4_) {
          lVar11 = 0;
          do {
            puStack_d8[lVar11] = 0;
            lVar11 = lVar11 + 1;
          } while (lVar11 < (int)uStack_118._4_4_);
        }
        if (puStack_d0 != unaff_x26 && puStack_d0 != (undefined8 *)0x0) {
          _free(puStack_d0[-1]);
        }
        unaff_x22 = unaff_x22 + 1;
      } while (unaff_x22 < (ulong)((lStack_98 - lStack_a0 >> 5) * -0x5555555555555555));
    }
    uStack_118._0_4_ = 0x42ff0000;
    puStack_128 = &uStack_118;
    uStack_10c = 0;
    uStack_108 = 0;
    uStack_118._4_4_ = 0;
    uStack_110 = 0;
    puStack_d8 = &uStack_110;
    uStack_fc = 0;
    uStack_f8 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_ec = 0;
    uStack_f4 = 0;
    uStack_f0 = 0;
    lStack_e0 = 0;
    uStack_e8 = 0;
    uStack_e4 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    lStack_88 = CONCAT44(lStack_88._4_4_,0x1050000);
    puStack_80 = &uStack_b8;
    uStack_78 = 0;
    auStack_130[0] = 0x2010000;
    uStack_120 = 0;
    puStack_d0 = &uStack_c8;
    FUN_109a3ecac(&lStack_88,auStack_130);
    plVar9 = (long *)(ulong)(*puStack_138 & 7);
    puVar10 = puStack_138;
    FUN_10936b6b4(&uStack_118);
    if (lStack_e0 != 0) {
      piVar1 = (int *)(lStack_e0 + 0x14);
      do {
        iVar2 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(&uStack_118);
      }
    }
    lStack_e0 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    uStack_108 = 0;
    uStack_104 = 0;
    uStack_f0 = 0;
    uStack_ec = 0;
    uStack_f8 = 0;
    uStack_f4 = 0;
    if (0 < (int)uStack_118._4_4_) {
      lVar11 = 0;
      do {
        puStack_d8[lVar11] = 0;
        lVar11 = lVar11 + 1;
      } while (lVar11 < (int)uStack_118._4_4_);
    }
    if (puStack_d0 != &uStack_c8 && puStack_d0 != (undefined8 *)0x0) {
      _free(puStack_d0[-1]);
    }
    uStack_118 = (long *)&uStack_b8;
    FUN_1093702c4(&uStack_118);
    uStack_118 = &lStack_a0;
    plVar6 = &uStack_118;
    FUN_1093702c4();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
  }
  ___stack_chk_fail();
  if ((int)plVar9 != 0) {
    func_0x000104bd46a0();
    uStack_118 = (long *)&uStack_b8;
    FUN_1093702c4(&uStack_118);
    uStack_118 = &lStack_a0;
    FUN_1093702c4(&uStack_118);
  }
  plVar7 = plVar6;
  __Unwind_Resume();
  uStack_1a0 = unaff_x28;
  uStack_198 = unaff_x27;
  puStack_190 = unaff_x26;
  puStack_188 = unaff_x25;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  uStack_170 = unaff_x22;
  puStack_168 = param_2;
  plStack_160 = param_1;
  plStack_158 = plVar6;
  puStack_150 = &stack0xfffffffffffffff0;
  pcStack_148 = FUN_10936bd0c;
  uStack_3a0 = 0;
  uStack_3b0 = 0x1010000;
  plVar6 = plVar7 + 0x5f;
  uStack_250 = 0x2010000;
  uStack_240 = 0;
  uStack_23c = 0;
  lStack_3d0 = NEON_rev64(*(undefined8 *)plVar7[0x67],4);
  puStack_3a8 = (uint *)plVar9;
  uStack_248 = plVar6;
  FUN_109b0f718(0,0,&uStack_3b0,&uStack_250,&lStack_3d0,0);
  func_0x00010936b700(plVar6,(int)plVar7[2],plVar7 + 0x6b);
  func_0x00010936b75c(plVar7 + 0x53,plVar6,plVar7 + 0x77);
  func_0x00010936b700(plVar7 + 0x77,(int)plVar7[2],plVar7 + 0x77);
  plVar6 = plVar7 + 0x83;
  func_0x00010936b75c(plVar7 + 0x17,plVar7 + 0x6b,plVar6);
  func_0x00010936b7d4(plVar7 + 0x77,plVar6,plVar6);
  lStack_3d0 = plVar7[3];
  uStack_3c0 = 0;
  uStack_3b8 = 0;
  puStack_3c8 = (uint *)0x0;
  FUN_109a7c7d4(&uStack_3b0,plVar7 + 0x23,&lStack_3d0);
  uStack_250 = 0x42ff0000;
  puStack_210 = &uStack_248;
  uStack_248._4_4_ = 0;
  uStack_240 = 0;
  iStack_24c = 0;
  uStack_248._0_4_ = 0;
  lStack_218 = 0;
  uStack_21c = 0;
  uStack_224 = 0;
  uStack_220 = 0;
  uStack_22c = 0;
  uStack_228 = 0;
  uStack_234 = 0;
  uStack_230 = 0;
  uStack_23c = 0;
  uStack_238 = 0;
  uStack_200 = 0;
  uStack_1f8 = 0;
  plVar8 = (long *)CONCAT44(uStack_3ac,uStack_3b0);
  puStack_208 = &uStack_200;
  (**(code **)(*plVar8 + 0x18))(plVar8,&uStack_3b0,&uStack_250,0xffffffff);
  uStack_1b0 = 0;
  plVar9 = plVar7 + 0x8f;
  auStack_1c0[0] = 0x1010000;
  uStack_1c8 = 0;
  auStack_1d8[0] = 0x1010000;
  auStack_1f0[0] = 0x2010000;
  uStack_1e0 = 0;
  uStack_1a8 = 0x3ff0000000000000;
  plStack_1e8 = plVar9;
  puStack_1d0 = &uStack_250;
  plStack_1b8 = plVar6;
  FUN_109a91d90();
  FUN_109a293c4(auStack_1c0,auStack_1d8,auStack_1f0,plVar8,0xffffffff,&PTR_FUN_1132e8cd0,1,
                &uStack_1a8);
  plVar6 = uStack_118;
  if (lStack_218 != 0) {
    piVar1 = (int *)(lStack_218 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_250);
      plVar6 = uStack_118;
    }
  }
  lStack_218 = 0;
  uStack_238 = 0;
  uStack_234 = 0;
  uStack_240 = 0;
  uStack_23c = 0;
  uStack_228 = 0;
  uStack_224 = 0;
  uStack_230 = 0;
  uStack_22c = 0;
  if (0 < iStack_24c) {
    lVar11 = 0;
    do {
      *(undefined4 *)((long)puStack_210 + lVar11 * 4) = 0;
      lVar11 = lVar11 + 1;
    } while (lVar11 < iStack_24c);
  }
  uStack_118 = plVar6;
  if (puStack_208 != &uStack_200 && puStack_208 != (undefined8 *)0x0) {
    _free(puStack_208[-1]);
  }
  FUN_10918eb6c(&uStack_3b0);
  func_0x00010936b75c(plVar9,plVar7 + 0x17,plVar7 + 0x9b);
  func_0x00010936b7d4(plVar7 + 0x6b,plVar7 + 0x9b,plVar7 + 0x9b);
  func_0x00010936b700(plVar9,(int)plVar7[2],plVar7 + 0x3b);
  func_0x00010936b700(plVar7 + 0x9b,(int)plVar7[2],plVar7 + 0x47);
  uStack_3a0 = 0;
  uStack_3b0 = 0x1010000;
  plVar6 = plVar7 + 0xb3;
  uStack_250 = 0x2010000;
  uStack_240 = 0;
  uStack_23c = 0;
  lStack_3d0 = NEON_rev64(*(undefined8 *)plVar7[0xbb],4);
  puStack_3a8 = (uint *)(plVar7 + 0x3b);
  uStack_248 = plVar6;
  FUN_109b0f718(0,0,&uStack_3b0,&uStack_250,&lStack_3d0,1);
  uStack_3a0 = 0;
  uStack_3b0 = 0x1010000;
  uStack_250 = 0x2010000;
  uStack_240 = 0;
  uStack_23c = 0;
  lStack_3d0 = NEON_rev64(*(undefined8 *)plVar7[199],4);
  puStack_3a8 = (uint *)(plVar7 + 0x47);
  uStack_248 = plVar7 + 0xbf;
  FUN_109b0f718(0,0,&uStack_3b0,&uStack_250,&lStack_3d0,1);
  func_0x00010936b75c(plVar6,plVar7 + 0xa7,puVar10);
  uStack_3a0 = 0;
  uStack_3b0 = 0x1010000;
  uStack_240 = 0;
  uStack_23c = 0;
  uStack_250 = 0x1010000;
  lStack_3d0 = CONCAT44(lStack_3d0._4_4_,0x2010000);
  uStack_3c0 = 0;
  puStack_3c8 = puVar10;
  puStack_3a8 = puVar10;
  uStack_248 = plVar7 + 0xbf;
  FUN_109a91d90();
  FUN_109a293c4(&uStack_3b0,&uStack_250,&lStack_3d0,plVar6,0xffffffff,&PTR_FUN_1132e8bd0,0,0);
  return;
}



/* Entry: 10936bd0c; end: 10936c09b;  */

void FUN_10936bd0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  long lStack_268;
  undefined8 uStack_260;
  undefined4 uStack_110;
  int iStack_10c;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  long lStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 auStack_b0 [2];
  long lStack_a8;
  undefined8 uStack_a0;
  undefined4 auStack_98 [2];
  undefined4 *puStack_90;
  undefined8 uStack_88;
  undefined4 auStack_80 [2];
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_260 = 0;
  uStack_270 = 0x1010000;
  lVar7 = param_1 + 0x2f8;
  uStack_110 = 0x2010000;
  uStack_100 = 0;
  uStack_fc = 0;
  uStack_290 = NEON_rev64(**(undefined8 **)(param_1 + 0x338),4);
  lStack_268 = param_2;
  uStack_108 = lVar7;
  FUN_109b0f718(0,0,&uStack_270,&uStack_110,&uStack_290,0);
  func_0x00010936b700(lVar7,*(undefined4 *)(param_1 + 0x10),param_1 + 0x358);
  func_0x00010936b75c(param_1 + 0x298,lVar7,param_1 + 0x3b8);
  func_0x00010936b700(param_1 + 0x3b8,*(undefined4 *)(param_1 + 0x10),param_1 + 0x3b8);
  lVar7 = param_1 + 0x418;
  func_0x00010936b75c(param_1 + 0xb8,param_1 + 0x358,lVar7);
  func_0x00010936b7d4(param_1 + 0x3b8,lVar7,lVar7);
  uStack_290 = *(undefined8 *)(param_1 + 0x18);
  uStack_280 = 0;
  uStack_278 = 0;
  uStack_288 = 0;
  FUN_109a7c7d4(&uStack_270,param_1 + 0x118,&uStack_290);
  uStack_110 = 0x42ff0000;
  puStack_d0 = &uStack_108;
  uStack_108._4_4_ = 0;
  uStack_100 = 0;
  iStack_10c = 0;
  uStack_108._0_4_ = 0;
  lStack_d8 = 0;
  uStack_dc = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_ec = 0;
  uStack_e8 = 0;
  uStack_f4 = 0;
  uStack_f0 = 0;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  plVar6 = (long *)CONCAT44(uStack_26c,uStack_270);
  puStack_c8 = &uStack_c0;
  (**(code **)(*plVar6 + 0x18))(plVar6,&uStack_270,&uStack_110,0xffffffff);
  uStack_70 = 0;
  lVar1 = param_1 + 0x478;
  auStack_80[0] = 0x1010000;
  uStack_88 = 0;
  auStack_98[0] = 0x1010000;
  auStack_b0[0] = 0x2010000;
  uStack_a0 = 0;
  uStack_68 = 0x3ff0000000000000;
  lStack_a8 = lVar1;
  puStack_90 = &uStack_110;
  lStack_78 = lVar7;
  FUN_109a91d90();
  FUN_109a293c4(auStack_80,auStack_98,auStack_b0,plVar6,0xffffffff,&PTR_FUN_1132e8cd0,1,&uStack_68);
  if (lStack_d8 != 0) {
    piVar2 = (int *)(lStack_d8 + 0x14);
    do {
      iVar3 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(&uStack_110);
    }
  }
  lStack_d8 = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  uStack_100 = 0;
  uStack_fc = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  uStack_f0 = 0;
  uStack_ec = 0;
  if (0 < iStack_10c) {
    lVar7 = 0;
    do {
      *(undefined4 *)((long)puStack_d0 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < iStack_10c);
  }
  if (puStack_c8 != &uStack_c0 && puStack_c8 != (undefined8 *)0x0) {
    _free(puStack_c8[-1]);
  }
  FUN_10918eb6c(&uStack_270);
  func_0x00010936b75c(lVar1,param_1 + 0xb8,param_1 + 0x4d8);
  func_0x00010936b7d4(param_1 + 0x358,param_1 + 0x4d8,param_1 + 0x4d8);
  func_0x00010936b700(lVar1,*(undefined4 *)(param_1 + 0x10),param_1 + 0x1d8);
  func_0x00010936b700(param_1 + 0x4d8,*(undefined4 *)(param_1 + 0x10),param_1 + 0x238);
  uStack_260 = 0;
  uStack_270 = 0x1010000;
  lVar7 = param_1 + 0x598;
  uStack_110 = 0x2010000;
  uStack_100 = 0;
  uStack_fc = 0;
  uStack_290 = NEON_rev64(**(undefined8 **)(param_1 + 0x5d8),4);
  lStack_268 = param_1 + 0x1d8;
  uStack_108 = lVar7;
  FUN_109b0f718(0,0,&uStack_270,&uStack_110,&uStack_290,1);
  uStack_260 = 0;
  uStack_270 = 0x1010000;
  uStack_110 = 0x2010000;
  uStack_100 = 0;
  uStack_fc = 0;
  uStack_290 = NEON_rev64(**(undefined8 **)(param_1 + 0x638),4);
  lStack_268 = param_1 + 0x238;
  uStack_108 = param_1 + 0x5f8;
  FUN_109b0f718(0,0,&uStack_270,&uStack_110,&uStack_290,1);
  func_0x00010936b75c(lVar7,param_1 + 0x538,param_3);
  uStack_260 = 0;
  uStack_270 = 0x1010000;
  uStack_100 = 0;
  uStack_fc = 0;
  uStack_110 = 0x1010000;
  uStack_290 = CONCAT44(uStack_290._4_4_,0x2010000);
  uStack_280 = 0;
  uStack_288 = param_3;
  lStack_268 = param_3;
  uStack_108 = param_1 + 0x5f8;
  FUN_109a91d90();
  FUN_109a293c4(&uStack_270,&uStack_110,&uStack_290,lVar7,0xffffffff,&PTR_FUN_1132e8bd0,0,0);
  return;
}



/* Entry: 10936c09c; end: 10936c273;  */

void FUN_10936c09c(undefined8 param_1,undefined8 *param_2,int param_3,int param_4)

{
  int iVar1;
  
  *param_2 = &PTR_FUN_110af4150;
  param_2[2] = 0;
  param_2[4] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 5) = 0x42ff0000;
  *(undefined8 *)((long)param_2 + 0x34) = 0;
  *(undefined8 *)((long)param_2 + 0x2c) = 0;
  *(undefined8 *)((long)param_2 + 0x44) = 0;
  *(undefined8 *)((long)param_2 + 0x3c) = 0;
  *(undefined8 *)((long)param_2 + 0x54) = 0;
  *(undefined8 *)((long)param_2 + 0x4c) = 0;
  param_2[0x10] = 0;
  param_2[0xf] = 0;
  param_2[0xc] = 0;
  param_2[0xb] = 0;
  param_2[0xd] = param_2 + 6;
  param_2[0xe] = param_2 + 0xf;
  iVar1 = 0;
  if (param_4 != 0) {
    iVar1 = param_3 / param_4;
  }
  param_2[0x11] = (double)iVar1;
  param_2[0x12] = param_1;
  *(int *)(param_2 + 0x13) = param_4;
  *(undefined4 *)(param_2 + 0x14) = 0x42ff0000;
  param_2[0x1b] = 0;
  param_2[0x1a] = 0;
  *(undefined8 *)((long)param_2 + 0xcc) = 0;
  *(undefined8 *)((long)param_2 + 0xc4) = 0;
  *(undefined8 *)((long)param_2 + 0xbc) = 0;
  *(undefined8 *)((long)param_2 + 0xb4) = 0;
  *(undefined8 *)((long)param_2 + 0xac) = 0;
  *(undefined8 *)((long)param_2 + 0xa4) = 0;
  param_2[0x1f] = 0;
  param_2[0x1e] = 0;
  param_2[0x1c] = param_2 + 0x15;
  param_2[0x1d] = param_2 + 0x1e;
  *(undefined4 *)(param_2 + 0x20) = 0x42ff0000;
  param_2[0x27] = 0;
  param_2[0x26] = 0;
  *(undefined8 *)((long)param_2 + 0x11c) = 0;
  *(undefined8 *)((long)param_2 + 0x114) = 0;
  *(undefined8 *)((long)param_2 + 300) = 0;
  *(undefined8 *)((long)param_2 + 0x124) = 0;
  *(undefined8 *)((long)param_2 + 0x10c) = 0;
  *(undefined8 *)((long)param_2 + 0x104) = 0;
  param_2[0x28] = param_2 + 0x21;
  param_2[0x29] = param_2 + 0x2a;
  param_2[0x2b] = 0;
  param_2[0x2a] = 0;
  *(undefined4 *)(param_2 + 0x2c) = 0x42ff0000;
  param_2[0x33] = 0;
  param_2[0x32] = 0;
  *(undefined8 *)((long)param_2 + 0x17c) = 0;
  *(undefined8 *)((long)param_2 + 0x174) = 0;
  *(undefined8 *)((long)param_2 + 0x18c) = 0;
  *(undefined8 *)((long)param_2 + 0x184) = 0;
  *(undefined8 *)((long)param_2 + 0x16c) = 0;
  *(undefined8 *)((long)param_2 + 0x164) = 0;
  param_2[0x34] = param_2 + 0x2d;
  param_2[0x35] = param_2 + 0x36;
  param_2[0x37] = 0;
  param_2[0x36] = 0;
  *(undefined4 *)(param_2 + 0x38) = 0x42ff0000;
  param_2[0x3f] = 0;
  param_2[0x3e] = 0;
  *(undefined8 *)((long)param_2 + 0x1dc) = 0;
  *(undefined8 *)((long)param_2 + 0x1d4) = 0;
  *(undefined8 *)((long)param_2 + 0x1ec) = 0;
  *(undefined8 *)((long)param_2 + 0x1e4) = 0;
  *(undefined8 *)((long)param_2 + 0x1cc) = 0;
  *(undefined8 *)((long)param_2 + 0x1c4) = 0;
  param_2[0x40] = param_2 + 0x39;
  param_2[0x41] = param_2 + 0x42;
  param_2[0x43] = 0;
  param_2[0x42] = 0;
  *(undefined4 *)(param_2 + 0x44) = 0x42ff0000;
  param_2[0x4b] = 0;
  param_2[0x4a] = 0;
  *(undefined8 *)((long)param_2 + 0x23c) = 0;
  *(undefined8 *)((long)param_2 + 0x234) = 0;
  *(undefined8 *)((long)param_2 + 0x24c) = 0;
  *(undefined8 *)((long)param_2 + 0x244) = 0;
  *(undefined8 *)((long)param_2 + 0x22c) = 0;
  *(undefined8 *)((long)param_2 + 0x224) = 0;
  param_2[0x4c] = param_2 + 0x45;
  param_2[0x4d] = param_2 + 0x4e;
  param_2[0x4f] = 0;
  param_2[0x4e] = 0;
  *(undefined4 *)(param_2 + 0x50) = 0x42ff0000;
  param_2[0x57] = 0;
  param_2[0x56] = 0;
  *(undefined8 *)((long)param_2 + 0x29c) = 0;
  *(undefined8 *)((long)param_2 + 0x294) = 0;
  *(undefined8 *)((long)param_2 + 0x2ac) = 0;
  *(undefined8 *)((long)param_2 + 0x2a4) = 0;
  *(undefined8 *)((long)param_2 + 0x28c) = 0;
  *(undefined8 *)((long)param_2 + 0x284) = 0;
  param_2[0x58] = param_2 + 0x51;
  param_2[0x59] = param_2 + 0x5a;
  param_2[0x5b] = 0;
  param_2[0x5a] = 0;
  *(undefined4 *)(param_2 + 0x5c) = 0x42ff0000;
  param_2[99] = 0;
  param_2[0x62] = 0;
  *(undefined8 *)((long)param_2 + 0x2fc) = 0;
  *(undefined8 *)((long)param_2 + 0x2f4) = 0;
  *(undefined8 *)((long)param_2 + 0x30c) = 0;
  *(undefined8 *)((long)param_2 + 0x304) = 0;
  *(undefined8 *)((long)param_2 + 0x2ec) = 0;
  *(undefined8 *)((long)param_2 + 0x2e4) = 0;
  param_2[100] = param_2 + 0x5d;
  param_2[0x65] = param_2 + 0x66;
  param_2[0x67] = 0;
  param_2[0x66] = 0;
  *(undefined4 *)(param_2 + 0x68) = 0x42ff0000;
  param_2[0x6f] = 0;
  param_2[0x6e] = 0;
  *(undefined8 *)((long)param_2 + 0x35c) = 0;
  *(undefined8 *)((long)param_2 + 0x354) = 0;
  *(undefined8 *)((long)param_2 + 0x36c) = 0;
  *(undefined8 *)((long)param_2 + 0x364) = 0;
  *(undefined8 *)((long)param_2 + 0x34c) = 0;
  *(undefined8 *)((long)param_2 + 0x344) = 0;
  param_2[0x70] = param_2 + 0x69;
  param_2[0x71] = param_2 + 0x72;
  param_2[0x73] = 0;
  param_2[0x72] = 0;
  *(undefined4 *)(param_2 + 0x74) = 0x42ff0000;
  param_2[0x7b] = 0;
  param_2[0x7a] = 0;
  *(undefined8 *)((long)param_2 + 0x3bc) = 0;
  *(undefined8 *)((long)param_2 + 0x3b4) = 0;
  *(undefined8 *)((long)param_2 + 0x3cc) = 0;
  *(undefined8 *)((long)param_2 + 0x3c4) = 0;
  *(undefined8 *)((long)param_2 + 0x3ac) = 0;
  *(undefined8 *)((long)param_2 + 0x3a4) = 0;
  param_2[0x7c] = param_2 + 0x75;
  param_2[0x7d] = param_2 + 0x7e;
  param_2[0x7f] = 0;
  param_2[0x7e] = 0;
  *(undefined4 *)(param_2 + 0x80) = 0x42ff0000;
  param_2[0x87] = 0;
  param_2[0x86] = 0;
  *(undefined8 *)((long)param_2 + 0x41c) = 0;
  *(undefined8 *)((long)param_2 + 0x414) = 0;
  *(undefined8 *)((long)param_2 + 0x42c) = 0;
  *(undefined8 *)((long)param_2 + 0x424) = 0;
  *(undefined8 *)((long)param_2 + 0x40c) = 0;
  *(undefined8 *)((long)param_2 + 0x404) = 0;
  param_2[0x88] = param_2 + 0x81;
  param_2[0x89] = param_2 + 0x8a;
  param_2[0x8b] = 0;
  param_2[0x8a] = 0;
  return;
}



/* Entry: 10936dec4; end: 10936fa57;  */

void FUN_10936dec4(long param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long **pplVar6;
  int iVar7;
  long lVar8;
  double dVar9;
  undefined4 auStack_f70 [2];
  long lStack_f68;
  undefined8 uStack_f60;
  undefined4 auStack_f58 [2];
  long lStack_f50;
  undefined8 uStack_f48;
  undefined4 auStack_f40 [2];
  long lStack_f38;
  undefined8 uStack_f30;
  undefined4 uStack_f28;
  undefined8 uStack_f24;
  undefined4 uStack_f1c;
  undefined4 uStack_f18;
  undefined4 uStack_f14;
  undefined4 uStack_f10;
  undefined4 uStack_f0c;
  undefined4 uStack_f08;
  undefined4 uStack_f04;
  undefined4 uStack_f00;
  undefined4 uStack_efc;
  undefined4 uStack_ef8;
  undefined4 uStack_ef4;
  long lStack_ef0;
  long lStack_ee8;
  undefined8 *puStack_ee0;
  undefined8 uStack_ed8;
  undefined8 uStack_ed0;
  long alStack_ec8 [3];
  undefined1 auStack_eb0 [8];
  undefined1 auStack_ea8 [4];
  undefined4 uStack_ea4;
  undefined4 uStack_ea0;
  undefined4 uStack_e9c;
  undefined4 uStack_e98;
  undefined4 uStack_e94;
  undefined4 uStack_e90;
  undefined4 uStack_e8c;
  undefined4 uStack_e88;
  undefined4 uStack_e84;
  undefined4 uStack_e80;
  undefined4 uStack_e7c;
  long lStack_e78;
  undefined1 *puStack_e70;
  undefined8 *puStack_e68;
  undefined8 uStack_e60;
  undefined8 uStack_e58;
  undefined4 uStack_e50;
  int iStack_e4c;
  undefined8 uStack_e48;
  undefined4 uStack_e40;
  undefined4 uStack_e3c;
  undefined4 uStack_e38;
  undefined4 uStack_e34;
  undefined4 uStack_e30;
  undefined4 uStack_e2c;
  undefined4 uStack_e28;
  undefined4 uStack_e24;
  undefined4 uStack_e20;
  undefined4 uStack_e1c;
  long lStack_e18;
  undefined8 *puStack_e10;
  undefined8 *puStack_e08;
  undefined8 uStack_e00;
  undefined8 uStack_df8;
  undefined4 uStack_df0;
  int iStack_dec;
  undefined8 uStack_de8;
  undefined4 uStack_de0;
  undefined4 uStack_ddc;
  undefined4 uStack_dd8;
  undefined4 uStack_dd4;
  undefined4 uStack_dd0;
  undefined4 uStack_dcc;
  undefined4 uStack_dc8;
  undefined4 uStack_dc4;
  undefined4 uStack_dc0;
  undefined4 uStack_dbc;
  long lStack_db8;
  undefined8 *puStack_db0;
  undefined8 *puStack_da8;
  undefined8 uStack_da0;
  undefined8 uStack_d98;
  undefined4 uStack_d90;
  int iStack_d8c;
  undefined8 uStack_d88;
  undefined4 uStack_d80;
  undefined4 uStack_d7c;
  undefined4 uStack_d78;
  undefined4 uStack_d74;
  undefined4 uStack_d70;
  undefined4 uStack_d6c;
  undefined4 uStack_d68;
  undefined4 uStack_d64;
  undefined4 uStack_d60;
  undefined4 uStack_d5c;
  long lStack_d58;
  undefined8 *puStack_d50;
  undefined8 *puStack_d48;
  undefined8 uStack_d40;
  undefined8 uStack_d38;
  undefined4 auStack_d30 [2];
  undefined1 *puStack_d28;
  undefined8 uStack_d20;
  undefined4 uStack_bd0;
  int iStack_bcc;
  undefined8 uStack_bc8;
  undefined4 uStack_bc0;
  undefined4 uStack_bbc;
  undefined4 uStack_bb8;
  undefined4 uStack_bb4;
  undefined4 uStack_bb0;
  undefined4 uStack_bac;
  undefined4 uStack_ba8;
  undefined4 uStack_ba4;
  undefined4 uStack_ba0;
  undefined4 uStack_b9c;
  long lStack_b98;
  undefined8 *puStack_b90;
  undefined8 *puStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined4 uStack_b70;
  int iStack_b6c;
  undefined8 uStack_b68;
  undefined4 uStack_b60;
  undefined4 uStack_b5c;
  undefined4 uStack_b58;
  undefined4 uStack_b54;
  undefined4 uStack_b50;
  undefined4 uStack_b4c;
  undefined4 uStack_b48;
  undefined4 uStack_b44;
  undefined4 uStack_b40;
  undefined4 uStack_b3c;
  long lStack_b38;
  undefined8 *puStack_b30;
  undefined8 *puStack_b28;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  undefined4 uStack_b10;
  int iStack_b0c;
  undefined8 uStack_b08;
  undefined4 uStack_b00;
  undefined4 uStack_afc;
  undefined4 uStack_af8;
  undefined4 uStack_af4;
  undefined4 uStack_af0;
  undefined4 uStack_aec;
  undefined4 uStack_ae8;
  undefined4 uStack_ae4;
  undefined4 uStack_ae0;
  undefined4 uStack_adc;
  long lStack_ad8;
  undefined8 *puStack_ad0;
  undefined8 *puStack_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  undefined1 auStack_ab0 [352];
  undefined1 auStack_950 [352];
  undefined8 uStack_7f0;
  undefined1 *puStack_7e8;
  undefined8 uStack_7e0;
  undefined1 auStack_690 [8];
  undefined1 auStack_688 [4];
  undefined4 uStack_684;
  undefined4 uStack_680;
  undefined4 uStack_67c;
  undefined4 uStack_678;
  undefined4 uStack_674;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  undefined4 uStack_668;
  undefined4 uStack_664;
  undefined4 uStack_660;
  undefined4 uStack_65c;
  long lStack_658;
  undefined1 *puStack_650;
  undefined8 *puStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined1 auStack_630 [8];
  undefined1 auStack_628 [4];
  undefined4 uStack_624;
  undefined4 uStack_620;
  undefined4 uStack_61c;
  undefined4 uStack_618;
  undefined4 uStack_614;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  undefined4 uStack_608;
  undefined4 uStack_604;
  undefined4 uStack_600;
  undefined4 uStack_5fc;
  long lStack_5f8;
  undefined1 *puStack_5f0;
  undefined8 *puStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined1 auStack_5d0 [8];
  undefined1 auStack_5c8 [4];
  undefined4 uStack_5c4;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  undefined4 uStack_5b8;
  undefined4 uStack_5b4;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined4 uStack_5a8;
  undefined4 uStack_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  long lStack_598;
  undefined1 *puStack_590;
  undefined8 *puStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined1 auStack_570 [8];
  undefined1 auStack_568 [4];
  undefined4 uStack_564;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  undefined4 uStack_558;
  undefined4 uStack_554;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  undefined4 uStack_548;
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  long lStack_538;
  undefined1 *puStack_530;
  undefined8 *puStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined1 auStack_510 [8];
  undefined1 auStack_508 [4];
  undefined4 uStack_504;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  undefined4 uStack_4e8;
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  long lStack_4d8;
  undefined1 *puStack_4d0;
  undefined8 *puStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined1 auStack_4b0 [8];
  undefined1 auStack_4a8 [4];
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  undefined4 uStack_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined4 uStack_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  long lStack_478;
  undefined1 *puStack_470;
  undefined8 *puStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  long *plStack_450;
  undefined8 *puStack_448;
  undefined8 uStack_440;
  undefined1 auStack_2f0 [8];
  undefined1 auStack_2e8 [4];
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  long lStack_2b8;
  undefined1 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined1 auStack_290 [8];
  undefined1 auStack_288 [4];
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  long lStack_258;
  undefined1 *puStack_250;
  undefined8 *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 auStack_230 [8];
  undefined1 auStack_228 [4];
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  long lStack_1f8;
  undefined1 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  int iStack_1cc;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  long lStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_230._0_4_ = 0x42ff0000;
  uStack_1c8 = (long *)auStack_230;
  puStack_1f0 = auStack_228;
  uStack_224 = 0;
  uStack_220 = 0;
  stack0xfffffffffffffdd4 = 0;
  uStack_214 = 0;
  uStack_210 = 0;
  uStack_21c = 0;
  uStack_218 = 0;
  uStack_204 = 0;
  uStack_20c = 0;
  uStack_208 = 0;
  lStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1fc = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_440 = 0;
  plStack_450 = (long *)CONCAT44(plStack_450._4_4_,0x1010000);
  uStack_1d0 = 0x2010000;
  uStack_1c0 = 0;
  uStack_1bc = 0;
  uStack_7f0 = 0;
  dVar9 = 1.0 / (double)*(int *)(param_1 + 0x98);
  puStack_448 = (undefined8 *)param_2;
  puStack_1e8 = &uStack_1e0;
  FUN_109b0f718(dVar9,dVar9,&plStack_450,&uStack_1d0,&uStack_7f0,1);
  auStack_290._0_4_ = 0x42ff0000;
  puStack_250 = auStack_288;
  uStack_284 = 0;
  uStack_280 = 0;
  stack0xfffffffffffffd74 = 0;
  uStack_274 = 0;
  uStack_270 = 0;
  uStack_27c = 0;
  uStack_278 = 0;
  uStack_264 = 0;
  uStack_26c = 0;
  uStack_268 = 0;
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_25c = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  puStack_248 = &uStack_240;
  func_0x00010936b700(auStack_230,(int)*(double *)(param_1 + 0x88),auStack_290);
  auStack_2f0._0_4_ = 0x42ff0000;
  uStack_2e4 = 0;
  uStack_2e0 = 0;
  stack0xfffffffffffffd14 = 0;
  puStack_2b0 = auStack_2e8;
  uStack_2d4 = 0;
  uStack_2d0 = 0;
  uStack_2dc = 0;
  uStack_2d8 = 0;
  uStack_2c4 = 0;
  uStack_2cc = 0;
  uStack_2c8 = 0;
  lStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_2bc = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_7e0 = 0;
  uStack_7f0 = CONCAT44(uStack_7f0._4_4_,0x1010000);
  puStack_7e8 = auStack_230;
  puStack_2a8 = &uStack_2a0;
  FUN_109a8239c(&plStack_450,0x3ff0000000000000,*(undefined8 *)(param_1 + 0x10),&uStack_7f0);
  uStack_1d0 = 0x42ff0000;
  puStack_190 = &uStack_1c8;
  uStack_1c8._4_4_ = 0;
  uStack_1c0 = 0;
  iStack_1cc = 0;
  uStack_1c8._0_4_ = 0;
  lStack_198 = 0;
  uStack_19c = 0;
  uStack_1a4 = 0;
  uStack_1a0 = 0;
  uStack_1ac = 0;
  uStack_1a8 = 0;
  uStack_1b4 = 0;
  uStack_1b0 = 0;
  uStack_1bc = 0;
  uStack_1b8 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  puStack_188 = &uStack_180;
  (**(code **)(*plStack_450 + 0x18))(plStack_450,&plStack_450,&uStack_1d0,0xffffffff);
  func_0x00010936b700(&uStack_1d0,(int)*(double *)(param_1 + 0x88),auStack_2f0);
  if (lStack_198 != 0) {
    piVar1 = (int *)(lStack_198 + 0x14);
    do {
      iVar7 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 == 0) {
      func_0x000109a848d4(&uStack_1d0);
    }
  }
  lStack_198 = 0;
  uStack_1b8 = 0;
  uStack_1b4 = 0;
  uStack_1c0 = 0;
  uStack_1bc = 0;
  uStack_1a8 = 0;
  uStack_1a4 = 0;
  uStack_1b0 = 0;
  uStack_1ac = 0;
  if (0 < iStack_1cc) {
    lVar8 = 0;
    do {
      *(undefined4 *)((long)puStack_190 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < iStack_1cc);
  }
  if (puStack_188 != &uStack_180 && puStack_188 != (undefined8 *)0x0) {
    _free(puStack_188[-1]);
  }
  FUN_10918eb6c(&plStack_450);
  auStack_4b0._0_4_ = 0x42ff0000;
  uStack_4a4 = 0;
  uStack_4a0 = 0;
  stack0xfffffffffffffb54 = 0;
  puStack_470 = auStack_4a8;
  uStack_494 = 0;
  uStack_490 = 0;
  uStack_49c = 0;
  uStack_498 = 0;
  uStack_484 = 0;
  uStack_48c = 0;
  uStack_488 = 0;
  lStack_478 = 0;
  uStack_480 = 0;
  uStack_47c = 0;
  uStack_458 = 0;
  uStack_460 = 0;
  uStack_7e0 = 0;
  uStack_7f0 = CONCAT44(uStack_7f0._4_4_,0x1010000);
  puStack_7e8 = auStack_230;
  puStack_468 = &uStack_460;
  FUN_109a8239c(&plStack_450,0x3ff0000000000000,*(long *)(param_1 + 0x10) + 0x60,&uStack_7f0);
  uStack_1d0 = 0x42ff0000;
  puStack_190 = &uStack_1c8;
  uStack_1c8._4_4_ = 0;
  uStack_1c0 = 0;
  iStack_1cc = 0;
  uStack_1c8._0_4_ = 0;
  lStack_198 = 0;
  uStack_19c = 0;
  uStack_1a4 = 0;
  uStack_1a0 = 0;
  uStack_1ac = 0;
  uStack_1a8 = 0;
  uStack_1b4 = 0;
  uStack_1b0 = 0;
  uStack_1bc = 0;
  uStack_1b8 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  puStack_188 = &uStack_180;
  (**(code **)(*plStack_450 + 0x18))(plStack_450,&plStack_450,&uStack_1d0,0xffffffff);
  func_0x00010936b700(&uStack_1d0,(int)*(double *)(param_1 + 0x88),auStack_4b0);
  if (lStack_198 != 0) {
    piVar1 = (int *)(lStack_198 + 0x14);
    do {
      iVar7 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 == 0) {
      func_0x000109a848d4(&uStack_1d0);
    }
  }
  lStack_198 = 0;
  uStack_1b8 = 0;
  uStack_1b4 = 0;
  uStack_1c0 = 0;
  uStack_1bc = 0;
  uStack_1a8 = 0;
  uStack_1a4 = 0;
  uStack_1b0 = 0;
  uStack_1ac = 0;
  if (0 < iStack_1cc) {
    lVar8 = 0;
    do {
      *(undefined4 *)((long)puStack_190 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < iStack_1cc);
  }
  if (puStack_188 != &uStack_180 && puStack_188 != (undefined8 *)0x0) {
    _free(puStack_188[-1]);
  }
  FUN_10918eb6c(&plStack_450);
  auStack_510._0_4_ = 0x42ff0000;
  uStack_504 = 0;
  uStack_500 = 0;
  stack0xfffffffffffffaf4 = 0;
  puStack_4d0 = auStack_508;
  uStack_4f4 = 0;
  uStack_4f0 = 0;
  uStack_4fc = 0;
  uStack_4f8 = 0;
  uStack_4e4 = 0;
  uStack_4ec = 0;
  uStack_4e8 = 0;
  lStack_4d8 = 0;
  uStack_4e0 = 0;
  uStack_4dc = 0;
  uStack_4b8 = 0;
  uStack_4c0 = 0;
  uStack_7e0 = 0;
  uStack_7f0 = CONCAT44(uStack_7f0._4_4_,0x1010000);
  puStack_7e8 = auStack_230;
  puStack_4c8 = &uStack_4c0;
  FUN_109a8239c(&plStack_450,0x3ff0000000000000,*(long *)(param_1 + 0x10) + 0xc0,&uStack_7f0);
  uStack_1d0 = 0x42ff0000;
  puStack_190 = &uStack_1c8;
  uStack_1c8._4_4_ = 0;
  uStack_1c0 = 0;
  iStack_1cc = 0;
  uStack_1c8._0_4_ = 0;
  lStack_198 = 0;
  uStack_19c = 0;
  uStack_1a4 = 0;
  uStack_1a0 = 0;
  uStack_1ac = 0;
  uStack_1a8 = 0;
  uStack_1b4 = 0;
  uStack_1b0 = 0;
  uStack_1bc = 0;
  uStack_1b8 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  puStack_188 = &uStack_180;
  (**(code **)(*plStack_450 + 0x18))(plStack_450,&plStack_450,&uStack_1d0,0xffffffff);
  func_0x00010936b700(&uStack_1d0,(int)*(double *)(param_1 + 0x88),auStack_510);
  if (lStack_198 != 0) {
    piVar1 = (int *)(lStack_198 + 0x14);
    do {
      iVar7 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 == 0) {
      func_0x000109a848d4(&uStack_1d0);
    }
  }
  lStack_198 = 0;
  uStack_1b8 = 0;
  uStack_1b4 = 0;
  uStack_1c0 = 0;
  uStack_1bc = 0;
  uStack_1a8 = 0;
  uStack_1a4 = 0;
  uStack_1b0 = 0;
  uStack_1ac = 0;
  if (0 < iStack_1cc) {
    lVar8 = 0;
    do {
      *(undefined4 *)((long)puStack_190 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < iStack_1cc);
  }
  if (puStack_188 != &uStack_180 && puStack_188 != (undefined8 *)0x0) {
    _free(puStack_188[-1]);
  }
  FUN_10918eb6c(&plStack_450);
  uStack_7e0 = 0;
  uStack_7f0._0_4_ = 0x1010000;
  puStack_7e8 = auStack_290;
  FUN_109a8239c(&uStack_1d0,0x3ff0000000000000,param_1 + 0xa0,&uStack_7f0);
  FUN_109a7d220(&plStack_450,auStack_2f0,&uStack_1d0);
  auStack_570._0_4_ = 0x42ff0000;
  puStack_530 = auStack_568;
  uStack_564 = 0;
  uStack_560 = 0;
  stack0xfffffffffffffa94 = 0;
  lStack_538 = 0;
  uStack_53c = 0;
  uStack_544 = 0;
  uStack_540 = 0;
  uStack_54c = 0;
  uStack_548 = 0;
  uStack_554 = 0;
  uStack_550 = 0;
  uStack_55c = 0;
  uStack_558 = 0;
  uStack_518 = 0;
  uStack_520 = 0;
  puStack_528 = &uStack_520;
  (**(code **)(*plStack_450 + 0x18))(plStack_450,&plStack_450,auStack_570,0xffffffff);
  FUN_10918eb6c(&plStack_450);
  FUN_10918eb6c(&uStack_1d0);
  uStack_7e0 = 0;
  uStack_7f0._0_4_ = 0x1010000;
  puStack_7e8 = auStack_290;
  FUN_109a8239c(&uStack_1d0,0x3ff0000000000000,param_1 + 0x100,&uStack_7f0);
  FUN_109a7d220(&plStack_450,auStack_4b0,&uStack_1d0);
  auStack_5d0._0_4_ = 0x42ff0000;
  puStack_590 = auStack_5c8;
  uStack_5c4 = 0;
  uStack_5c0 = 0;
  stack0xfffffffffffffa34 = 0;
  lStack_598 = 0;
  uStack_59c = 0;
  uStack_5a4 = 0;
  uStack_5a0 = 0;
  uStack_5ac = 0;
  uStack_5a8 = 0;
  uStack_5b4 = 0;
  uStack_5b0 = 0;
  uStack_5bc = 0;
  uStack_5b8 = 0;
  uStack_578 = 0;
  uStack_580 = 0;
  puStack_588 = &uStack_580;
  (**(code **)(*plStack_450 + 0x18))(plStack_450,&plStack_450,auStack_5d0,0xffffffff);
  FUN_10918eb6c(&plStack_450);
  FUN_10918eb6c(&uStack_1d0);
  uStack_7e0 = 0;
  uStack_7f0 = CONCAT44(uStack_7f0._4_4_,0x1010000);
  puStack_7e8 = auStack_290;
  FUN_109a8239c(&uStack_1d0,0x3ff0000000000000,param_1 + 0x160,&uStack_7f0);
  FUN_109a7d220(&plStack_450,auStack_510,&uStack_1d0);
  auStack_630._0_4_ = 0x42ff0000;
  puStack_5f0 = auStack_628;
  uStack_624 = 0;
  uStack_620 = 0;
  stack0xfffffffffffff9d4 = 0;
  lStack_5f8 = 0;
  uStack_5fc = 0;
  uStack_604 = 0;
  uStack_600 = 0;
  uStack_60c = 0;
  uStack_608 = 0;
  uStack_614 = 0;
  uStack_610 = 0;
  uStack_61c = 0;
  uStack_618 = 0;
  uStack_5d8 = 0;
  uStack_5e0 = 0;
  puStack_5e8 = &uStack_5e0;
  (**(code **)(*plStack_450 + 0x18))(plStack_450,&plStack_450,auStack_630,0xffffffff);
  FUN_10918eb6c(&plStack_450);
  FUN_10918eb6c(&uStack_1d0);
  uStack_d20 = 0;
  auStack_d30[0] = 0x1010000;
  puStack_d28 = auStack_570;
  FUN_109a8239c(&uStack_7f0,0x3ff0000000000000,param_1 + 0x1c0,auStack_d30);
  uStack_b00 = 0;
  uStack_afc = 0;
  uStack_b10 = 0x1010000;
  uStack_b08 = auStack_5d0;
  FUN_109a8239c(auStack_950,0x3ff0000000000000,param_1 + 0x220,&uStack_b10);
  FUN_109a7cc48(&uStack_1d0,&uStack_7f0,auStack_950);
  uStack_b60 = 0;
  uStack_b5c = 0;
  uStack_b70 = 0x1010000;
  uStack_b68 = auStack_630;
  FUN_109a8239c(auStack_ab0,0x3ff0000000000000,param_1 + 0x280,&uStack_b70);
  FUN_109a7cc48(&plStack_450,&uStack_1d0,auStack_ab0);
  auStack_690._0_4_ = 0x42ff0000;
  puStack_650 = auStack_688;
  uStack_684 = 0;
  uStack_680 = 0;
  stack0xfffffffffffff974 = 0;
  lStack_658 = 0;
  uStack_65c = 0;
  uStack_664 = 0;
  uStack_660 = 0;
  uStack_66c = 0;
  uStack_668 = 0;
  uStack_674 = 0;
  uStack_670 = 0;
  uStack_67c = 0;
  uStack_678 = 0;
  uStack_638 = 0;
  uStack_640 = 0;
  puStack_648 = &uStack_640;
  (**(code **)(*plStack_450 + 0x18))(plStack_450,&plStack_450,auStack_690,0xffffffff);
  FUN_10918eb6c(&plStack_450);
  FUN_10918eb6c(auStack_ab0);
  FUN_10918eb6c(&uStack_1d0);
  FUN_10918eb6c(auStack_950);
  FUN_10918eb6c(&uStack_7f0);
  uStack_d20 = 0;
  auStack_d30[0] = 0x1010000;
  puStack_d28 = auStack_570;
  FUN_109a8239c(&uStack_7f0,0x3ff0000000000000,param_1 + 0x220,auStack_d30);
  uStack_b60 = 0;
  uStack_b5c = 0;
  uStack_b70 = 0x1010000;
  uStack_b68 = auStack_5d0;
  FUN_109a8239c(auStack_950,0x3ff0000000000000,param_1 + 0x2e0,&uStack_b70);
  FUN_109a7cc48(&uStack_1d0,&uStack_7f0,auStack_950);
  uStack_bc0 = 0;
  uStack_bbc = 0;
  uStack_bd0 = 0x1010000;
  uStack_bc8 = auStack_630;
  FUN_109a8239c(auStack_ab0,0x3ff0000000000000,param_1 + 0x340,&uStack_bd0);
  FUN_109a7cc48(&plStack_450,&uStack_1d0,auStack_ab0);
  uStack_b10 = 0x42ff0000;
  puStack_ad0 = &uStack_b08;
  uStack_b08._4_4_ = 0;
  uStack_b00 = 0;
  iStack_b0c = 0;
  uStack_b08._0_4_ = 0;
  lStack_ad8 = 0;
  uStack_adc = 0;
  uStack_ae4 = 0;
  uStack_ae0 = 0;
  uStack_aec = 0;
  uStack_ae8 = 0;
  uStack_af4 = 0;
  uStack_af0 = 0;
  uStack_afc = 0;
  uStack_af8 = 0;
  uStack_ab8 = 0;
  uStack_ac0 = 0;
  puStack_ac8 = &uStack_ac0;
  (**(code **)(*plStack_450 + 0x18))(plStack_450,&plStack_450,&uStack_b10,0xffffffff);
  FUN_10918eb6c(&plStack_450);
  FUN_10918eb6c(auStack_ab0);
  FUN_10918eb6c(&uStack_1d0);
  FUN_10918eb6c(auStack_950);
  FUN_10918eb6c(&uStack_7f0);
  uStack_d20 = 0;
  auStack_d30[0] = 0x1010000;
  puStack_d28 = auStack_570;
  FUN_109a8239c(&uStack_7f0,0x3ff0000000000000,param_1 + 0x280,auStack_d30);
  uStack_bc0 = 0;
  uStack_bbc = 0;
  uStack_bd0 = 0x1010000;
  uStack_bc8 = auStack_5d0;
  FUN_109a8239c(auStack_950,0x3ff0000000000000,param_1 + 0x340,&uStack_bd0);
  FUN_109a7cc48(&uStack_1d0,&uStack_7f0,auStack_950);
  uStack_d80 = 0;
  uStack_d7c = 0;
  uStack_d90 = 0x1010000;
  uStack_d88 = auStack_630;
  FUN_109a8239c(auStack_ab0,0x3ff0000000000000,param_1 + 0x3a0,&uStack_d90);
  FUN_109a7cc48(&plStack_450,&uStack_1d0,auStack_ab0);
  uStack_b70 = 0x42ff0000;
  puStack_b30 = &uStack_b68;
  uStack_b68._4_4_ = 0;
  uStack_b60 = 0;
  iStack_b6c = 0;
  uStack_b68._0_4_ = 0;
  lStack_b38 = 0;
  uStack_b3c = 0;
  uStack_b44 = 0;
  uStack_b40 = 0;
  uStack_b4c = 0;
  uStack_b48 = 0;
  uStack_b54 = 0;
  uStack_b50 = 0;
  uStack_b5c = 0;
  uStack_b58 = 0;
  uStack_b18 = 0;
  uStack_b20 = 0;
  puStack_b28 = &uStack_b20;
  (**(code **)(*plStack_450 + 0x18))(plStack_450,&plStack_450,&uStack_b70,0xffffffff);
  FUN_10918eb6c(&plStack_450);
  FUN_10918eb6c(auStack_ab0);
  FUN_10918eb6c(&uStack_1d0);
  FUN_10918eb6c(auStack_950);
  FUN_10918eb6c(&uStack_7f0);
  uStack_d80 = 0;
  uStack_d7c = 0;
  uStack_d90 = 0x1010000;
  uStack_d88 = (undefined1 *)(param_1 + 0xa0);
  FUN_109a8239c(auStack_950,0x3ff0000000000000,auStack_690,&uStack_d90);
  FUN_109a7d220(&uStack_7f0,auStack_290,auStack_950);
  uStack_de0 = 0;
  uStack_ddc = 0;
  uStack_df0 = 0x1010000;
  uStack_de8 = param_1 + 0x100;
  FUN_109a8239c(auStack_ab0,0x3ff0000000000000,&uStack_b10,&uStack_df0);
  FUN_109a7d404(&uStack_1d0,&uStack_7f0,auStack_ab0);
  uStack_e40 = 0;
  uStack_e3c = 0;
  uStack_e50 = 0x1010000;
  uStack_e48 = param_1 + 0x160;
  FUN_109a8239c(auStack_d30,0x3ff0000000000000,&uStack_b70,&uStack_e50);
  FUN_109a7d404(&plStack_450,&uStack_1d0,auStack_d30);
  uStack_bd0 = 0x42ff0000;
  puStack_b90 = &uStack_bc8;
  uStack_bc8._4_4_ = 0;
  uStack_bc0 = 0;
  iStack_bcc = 0;
  uStack_bc8._0_4_ = 0;
  lStack_b98 = 0;
  uStack_b9c = 0;
  uStack_ba4 = 0;
  uStack_ba0 = 0;
  uStack_bac = 0;
  uStack_ba8 = 0;
  uStack_bb4 = 0;
  uStack_bb0 = 0;
  uStack_bbc = 0;
  uStack_bb8 = 0;
  uStack_b78 = 0;
  uStack_b80 = 0;
  puStack_b88 = &uStack_b80;
  (**(code **)(*plStack_450 + 0x18))(plStack_450,&plStack_450,&uStack_bd0,0xffffffff);
  FUN_10918eb6c(&plStack_450);
  FUN_10918eb6c(auStack_d30);
  FUN_10918eb6c(&uStack_1d0);
  FUN_10918eb6c(auStack_ab0);
  FUN_10918eb6c(&uStack_7f0);
  FUN_10918eb6c(auStack_950);
  uStack_d90 = 0x42ff0000;
  puStack_d50 = &uStack_d88;
  uStack_d88._4_4_ = 0;
  uStack_d80 = 0;
  iStack_d8c = 0;
  uStack_d88._0_4_ = 0;
  uStack_d74 = 0;
  uStack_d70 = 0;
  uStack_d7c = 0;
  uStack_d78 = 0;
  uStack_d64 = 0;
  uStack_d6c = 0;
  uStack_d68 = 0;
  lStack_d58 = 0;
  uStack_d60 = 0;
  uStack_d5c = 0;
  uStack_d38 = 0;
  uStack_d40 = 0;
  puStack_d48 = &uStack_d40;
  func_0x00010936b700(auStack_690,(int)*(double *)(param_1 + 0x88),&uStack_d90);
  uStack_df0 = 0x42ff0000;
  puStack_db0 = &uStack_de8;
  uStack_de8._4_4_ = 0;
  uStack_de0 = 0;
  iStack_dec = 0;
  uStack_de8._0_4_ = 0;
  uStack_dd4 = 0;
  uStack_dd0 = 0;
  uStack_ddc = 0;
  uStack_dd8 = 0;
  uStack_dc4 = 0;
  uStack_dcc = 0;
  uStack_dc8 = 0;
  lStack_db8 = 0;
  uStack_dc0 = 0;
  uStack_dbc = 0;
  uStack_d98 = 0;
  uStack_da0 = 0;
  puStack_da8 = &uStack_da0;
  func_0x00010936b700(&uStack_b10,(int)*(double *)(param_1 + 0x88),&uStack_df0);
  uStack_e50 = 0x42ff0000;
  puStack_e10 = &uStack_e48;
  uStack_e48._4_4_ = 0;
  uStack_e40 = 0;
  iStack_e4c = 0;
  uStack_e48._0_4_ = 0;
  uStack_e34 = 0;
  uStack_e30 = 0;
  uStack_e3c = 0;
  uStack_e38 = 0;
  uStack_e24 = 0;
  uStack_e2c = 0;
  uStack_e28 = 0;
  lStack_e18 = 0;
  uStack_e20 = 0;
  uStack_e1c = 0;
  uStack_e00 = 0;
  uStack_df8 = 0;
  puStack_e08 = &uStack_e00;
  func_0x00010936b700(&uStack_b70,(int)*(double *)(param_1 + 0x88),&uStack_e50);
  auStack_eb0._0_4_ = 0x42ff0000;
  puStack_e70 = auStack_ea8;
  uStack_ea4 = 0;
  uStack_ea0 = 0;
  stack0xfffffffffffff154 = 0;
  uStack_e94 = 0;
  uStack_e90 = 0;
  uStack_e9c = 0;
  uStack_e98 = 0;
  uStack_e84 = 0;
  uStack_e8c = 0;
  uStack_e88 = 0;
  lStack_e78 = 0;
  uStack_e80 = 0;
  uStack_e7c = 0;
  uStack_e60 = 0;
  uStack_e58 = 0;
  puStack_e68 = &uStack_e60;
  func_0x00010936b700(&uStack_bd0,(int)*(double *)(param_1 + 0x88),auStack_eb0);
  uStack_440 = 0;
  plStack_450._0_4_ = 0x1010000;
  puStack_448 = (undefined8 *)&uStack_d90;
  uStack_1d0 = 0x2010000;
  uStack_1c0 = 0;
  uStack_1bc = 0;
  uStack_7f0 = 0;
  uStack_1c8 = puStack_448;
  FUN_109b0f718((double)*(int *)(param_1 + 0x98),(double)*(int *)(param_1 + 0x98),&plStack_450,
                &uStack_1d0,&uStack_7f0,1);
  uStack_440 = 0;
  plStack_450._0_4_ = 0x1010000;
  puStack_448 = (undefined8 *)&uStack_df0;
  uStack_1d0 = 0x2010000;
  uStack_1c0 = 0;
  uStack_1bc = 0;
  uStack_7f0 = 0;
  uStack_1c8 = puStack_448;
  FUN_109b0f718((double)*(int *)(param_1 + 0x98),(double)*(int *)(param_1 + 0x98),&plStack_450,
                &uStack_1d0,&uStack_7f0,1);
  uStack_440 = 0;
  plStack_450._0_4_ = 0x1010000;
  puStack_448 = (undefined8 *)&uStack_e50;
  uStack_1d0 = 0x2010000;
  uStack_1c0 = 0;
  uStack_1bc = 0;
  uStack_7f0 = 0;
  uStack_1c8 = puStack_448;
  FUN_109b0f718((double)*(int *)(param_1 + 0x98),(double)*(int *)(param_1 + 0x98),&plStack_450,
                &uStack_1d0,&uStack_7f0,1);
  uStack_440 = 0;
  plStack_450._0_4_ = 0x1010000;
  puStack_448 = (undefined8 *)auStack_eb0;
  uStack_1d0 = 0x2010000;
  uStack_1c0 = 0;
  uStack_1bc = 0;
  uStack_7f0 = 0;
  uStack_1c8 = puStack_448;
  FUN_109b0f718((double)*(int *)(param_1 + 0x98),(double)*(int *)(param_1 + 0x98),&plStack_450,
                &uStack_1d0,&uStack_7f0,1);
  alStack_ec8[0] = 0;
  alStack_ec8[1] = 0;
  alStack_ec8[2] = 0;
  uStack_f28 = 0x42ff0000;
  lStack_ee8 = (long)&uStack_f24 + 4;
  uStack_f1c = 0;
  uStack_f18 = 0;
  uStack_f24 = 0;
  uStack_f0c = 0;
  uStack_f08 = 0;
  uStack_f14 = 0;
  uStack_f10 = 0;
  uStack_efc = 0;
  uStack_f04 = 0;
  uStack_f00 = 0;
  lStack_ef0 = 0;
  uStack_ef8 = 0;
  uStack_ef4 = 0;
  uStack_ed8 = 0;
  uStack_ed0 = 0;
  uStack_1d0 = (undefined4)*(undefined8 *)(param_1 + 0x30);
  iStack_1cc = (int)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
  puStack_ee0 = &uStack_ed8;
  FUN_109a83fd0(&uStack_f28,2,&uStack_1d0,0x15);
  func_0x00010936b6b4(param_1 + 0x28,5,&uStack_f28);
  uStack_440 = 0;
  plStack_450 = (long *)CONCAT44(plStack_450._4_4_,0x1010000);
  uStack_1d0 = 0x2050000;
  uStack_1c8 = alStack_ec8;
  uStack_1c0 = 0;
  uStack_1bc = 0;
  puStack_448 = (undefined8 *)&uStack_f28;
  FUN_109a3dcec(&plStack_450,&uStack_1d0);
  lStack_f38 = alStack_ec8[0];
  uStack_f30 = 0;
  auStack_f40[0] = 0x1010000;
  FUN_109a8239c(auStack_950,0x3ff0000000000000,&uStack_d90,auStack_f40);
  lStack_f50 = alStack_ec8[0] + 0x60;
  uStack_f48 = 0;
  auStack_f58[0] = 0x1010000;
  FUN_109a8239c(auStack_ab0,0x3ff0000000000000,&uStack_df0,auStack_f58);
  FUN_109a7cc48(&uStack_7f0,auStack_950,auStack_ab0);
  lStack_f68 = alStack_ec8[0] + 0xc0;
  uStack_f60 = 0;
  auStack_f70[0] = 0x1010000;
  FUN_109a8239c(auStack_d30,0x3ff0000000000000,&uStack_e50,auStack_f70);
  FUN_109a7cc48(&uStack_1d0,&uStack_7f0,auStack_d30);
  FUN_109a7c958(&plStack_450,&uStack_1d0,auStack_eb0);
  pplVar6 = &plStack_450;
  (**(code **)(*plStack_450 + 0x18))(plStack_450,pplVar6,param_3,0xffffffff);
  iVar7 = (int)pplVar6;
  FUN_10918eb6c(&plStack_450);
  FUN_10918eb6c(&uStack_1d0);
  FUN_10918eb6c(auStack_d30);
  FUN_10918eb6c(&uStack_7f0);
  FUN_10918eb6c(auStack_ab0);
  FUN_10918eb6c(auStack_950);
  plVar5 = uStack_1c8;
  if (lStack_ef0 != 0) {
    piVar1 = (int *)(lStack_ef0 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_f28);
      plVar5 = uStack_1c8;
    }
  }
  lStack_ef0 = 0;
  uStack_f10 = 0;
  uStack_f0c = 0;
  uStack_f18 = 0;
  uStack_f14 = 0;
  uStack_f00 = 0;
  uStack_efc = 0;
  uStack_f08 = 0;
  uStack_f04 = 0;
  if (0 < (int)uStack_f24) {
    lVar8 = 0;
    do {
      *(undefined4 *)(lStack_ee8 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)uStack_f24);
  }
  uStack_1c8 = plVar5;
  if (puStack_ee0 != &uStack_ed8 && puStack_ee0 != (undefined8 *)0x0) {
    _free(puStack_ee0[-1]);
  }
  plStack_450 = alStack_ec8;
  pplVar6 = &plStack_450;
  FUN_1093702c4(pplVar6);
  plVar5 = uStack_1c8;
  if (lStack_e78 != 0) {
    piVar1 = (int *)(lStack_e78 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      pplVar6 = (long **)auStack_eb0;
      func_0x000109a848d4(pplVar6);
      plVar5 = uStack_1c8;
    }
  }
  lStack_e78 = 0;
  uStack_e98 = 0;
  uStack_e94 = 0;
  uStack_ea0 = 0;
  uStack_e9c = 0;
  uStack_e88 = 0;
  uStack_e84 = 0;
  uStack_e90 = 0;
  uStack_e8c = 0;
  if (0 < (int)auStack_eb0._4_4_) {
    lVar8 = 0;
    do {
      *(undefined4 *)(puStack_e70 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)auStack_eb0._4_4_);
  }
  uStack_1c8 = plVar5;
  if (puStack_e68 != &uStack_e60 && puStack_e68 != (undefined8 *)0x0) {
    pplVar6 = (long **)puStack_e68[-1];
    _free(pplVar6);
  }
  if (lStack_e18 != 0) {
    piVar1 = (int *)(lStack_e18 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      pplVar6 = (long **)&uStack_e50;
      func_0x000109a848d4(pplVar6);
    }
  }
  lStack_e18 = 0;
  uStack_e38 = 0;
  uStack_e34 = 0;
  uStack_e40 = 0;
  uStack_e3c = 0;
  uStack_e28 = 0;
  uStack_e24 = 0;
  uStack_e30 = 0;
  uStack_e2c = 0;
  if (0 < iStack_e4c) {
    lVar8 = 0;
    do {
      *(undefined4 *)((long)puStack_e10 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < iStack_e4c);
  }
  if (puStack_e08 != &uStack_e00 && puStack_e08 != (undefined8 *)0x0) {
    pplVar6 = (long **)puStack_e08[-1];
    _free(pplVar6);
  }
  if (lStack_db8 != 0) {
    piVar1 = (int *)(lStack_db8 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      pplVar6 = (long **)&uStack_df0;
      func_0x000109a848d4(pplVar6);
    }
  }
  lStack_db8 = 0;
  uStack_dd8 = 0;
  uStack_dd4 = 0;
  uStack_de0 = 0;
  uStack_ddc = 0;
  uStack_dc8 = 0;
  uStack_dc4 = 0;
  uStack_dd0 = 0;
  uStack_dcc = 0;
  if (0 < iStack_dec) {
    lVar8 = 0;
    do {
      *(undefined4 *)((long)puStack_db0 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < iStack_dec);
  }
  if (puStack_da8 != &uStack_da0 && puStack_da8 != (undefined8 *)0x0) {
    pplVar6 = (long **)puStack_da8[-1];
    _free(pplVar6);
  }
  if (lStack_d58 != 0) {
    piVar1 = (int *)(lStack_d58 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      pplVar6 = (long **)&uStack_d90;
      func_0x000109a848d4(pplVar6);
    }
  }
  lStack_d58 = 0;
  uStack_d78 = 0;
  uStack_d74 = 0;
  uStack_d80 = 0;
  uStack_d7c = 0;
  uStack_d68 = 0;
  uStack_d64 = 0;
  uStack_d70 = 0;
  uStack_d6c = 0;
  if (0 < iStack_d8c) {
    lVar8 = 0;
    do {
      *(undefined4 *)((long)puStack_d50 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < iStack_d8c);
  }
  if (puStack_d48 != &uStack_d40 && puStack_d48 != (undefined8 *)0x0) {
    pplVar6 = (long **)puStack_d48[-1];
    _free(pplVar6);
  }
  if (lStack_b98 != 0) {
    piVar1 = (int *)(lStack_b98 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      pplVar6 = (long **)&uStack_bd0;
      func_0x000109a848d4(pplVar6);
    }
  }
  lStack_b98 = 0;
  uStack_bb8 = 0;
  uStack_bb4 = 0;
  uStack_bc0 = 0;
  uStack_bbc = 0;
  uStack_ba8 = 0;
  uStack_ba4 = 0;
  uStack_bb0 = 0;
  uStack_bac = 0;
  if (0 < iStack_bcc) {
    lVar8 = 0;
    do {
      *(undefined4 *)((long)puStack_b90 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < iStack_bcc);
  }
  if (puStack_b88 != &uStack_b80 && puStack_b88 != (undefined8 *)0x0) {
    pplVar6 = (long **)puStack_b88[-1];
    _free(pplVar6);
  }
  if (lStack_b38 != 0) {
    piVar1 = (int *)(lStack_b38 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      pplVar6 = (long **)&uStack_b70;
      func_0x000109a848d4(pplVar6);
    }
  }
  lStack_b38 = 0;
  uStack_b58 = 0;
  uStack_b54 = 0;
  uStack_b60 = 0;
  uStack_b5c = 0;
  uStack_b48 = 0;
  uStack_b44 = 0;
  uStack_b50 = 0;
  uStack_b4c = 0;
  if (0 < iStack_b6c) {
    lVar8 = 0;
    do {
      *(undefined4 *)((long)puStack_b30 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < iStack_b6c);
  }
  if (puStack_b28 != &uStack_b20 && puStack_b28 != (undefined8 *)0x0) {
    pplVar6 = (long **)puStack_b28[-1];
    _free(pplVar6);
  }
  if (lStack_ad8 != 0) {
    piVar1 = (int *)(lStack_ad8 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      pplVar6 = (long **)&uStack_b10;
      func_0x000109a848d4(pplVar6);
    }
  }
  lStack_ad8 = 0;
  uStack_af8 = 0;
  uStack_af4 = 0;
  uStack_b00 = 0;
  uStack_afc = 0;
  uStack_ae8 = 0;
  uStack_ae4 = 0;
  uStack_af0 = 0;
  uStack_aec = 0;
  if (0 < iStack_b0c) {
    lVar8 = 0;
    do {
      *(undefined4 *)((long)puStack_ad0 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < iStack_b0c);
  }
  if (puStack_ac8 != &uStack_ac0 && puStack_ac8 != (undefined8 *)0x0) {
    pplVar6 = (long **)puStack_ac8[-1];
    _free(pplVar6);
  }
  if (lStack_658 != 0) {
    piVar1 = (int *)(lStack_658 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      pplVar6 = (long **)auStack_690;
      func_0x000109a848d4(pplVar6);
    }
  }
  lStack_658 = 0;
  uStack_678 = 0;
  uStack_674 = 0;
  uStack_680 = 0;
  uStack_67c = 0;
  uStack_668 = 0;
  uStack_664 = 0;
  uStack_670 = 0;
  uStack_66c = 0;
  if (0 < (int)auStack_690._4_4_) {
    lVar8 = 0;
    do {
      *(undefined4 *)(puStack_650 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)auStack_690._4_4_);
  }
  if (puStack_648 != &uStack_640 && puStack_648 != (undefined8 *)0x0) {
    pplVar6 = (long **)puStack_648[-1];
    _free(pplVar6);
  }
  if (lStack_5f8 != 0) {
    piVar1 = (int *)(lStack_5f8 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      pplVar6 = (long **)auStack_630;
      func_0x000109a848d4(pplVar6);
    }
  }
  lStack_5f8 = 0;
  uStack_618 = 0;
  uStack_614 = 0;
  uStack_620 = 0;
  uStack_61c = 0;
  uStack_608 = 0;
  uStack_604 = 0;
  uStack_610 = 0;
  uStack_60c = 0;
  if (0 < (int)auStack_630._4_4_) {
    lVar8 = 0;
    do {
      *(undefined4 *)(puStack_5f0 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)auStack_630._4_4_);
  }
  if (puStack_5e8 != &uStack_5e0 && puStack_5e8 != (undefined8 *)0x0) {
    pplVar6 = (long **)puStack_5e8[-1];
    _free(pplVar6);
  }
  if (lStack_598 != 0) {
    piVar1 = (int *)(lStack_598 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      pplVar6 = (long **)auStack_5d0;
      func_0x000109a848d4(pplVar6);
    }
  }
  lStack_598 = 0;
  uStack_5b8 = 0;
  uStack_5b4 = 0;
  uStack_5c0 = 0;
  uStack_5bc = 0;
  uStack_5a8 = 0;
  uStack_5a4 = 0;
  uStack_5b0 = 0;
  uStack_5ac = 0;
  if (0 < (int)auStack_5d0._4_4_) {
    lVar8 = 0;
    do {
      *(undefined4 *)(puStack_590 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)auStack_5d0._4_4_);
  }
  if (puStack_588 != &uStack_580 && puStack_588 != (undefined8 *)0x0) {
    pplVar6 = (long **)puStack_588[-1];
    _free(pplVar6);
  }
  if (lStack_538 != 0) {
    piVar1 = (int *)(lStack_538 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      pplVar6 = (long **)auStack_570;
      func_0x000109a848d4(pplVar6);
    }
  }
  lStack_538 = 0;
  uStack_558 = 0;
  uStack_554 = 0;
  uStack_560 = 0;
  uStack_55c = 0;
  uStack_548 = 0;
  uStack_544 = 0;
  uStack_550 = 0;
  uStack_54c = 0;
  if (0 < (int)auStack_570._4_4_) {
    lVar8 = 0;
    do {
      *(undefined4 *)(puStack_530 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)auStack_570._4_4_);
  }
  if (puStack_528 != &uStack_520 && puStack_528 != (undefined8 *)0x0) {
    pplVar6 = (long **)puStack_528[-1];
    _free(pplVar6);
  }
  if (lStack_4d8 != 0) {
    piVar1 = (int *)(lStack_4d8 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      pplVar6 = (long **)auStack_510;
      func_0x000109a848d4(pplVar6);
    }
  }
  lStack_4d8 = 0;
  uStack_4f8 = 0;
  uStack_4f4 = 0;
  uStack_500 = 0;
  uStack_4fc = 0;
  uStack_4e8 = 0;
  uStack_4e4 = 0;
  uStack_4f0 = 0;
  uStack_4ec = 0;
  if (0 < (int)auStack_510._4_4_) {
    lVar8 = 0;
    do {
      *(undefined4 *)(puStack_4d0 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)auStack_510._4_4_);
  }
  if (puStack_4c8 != &uStack_4c0 && puStack_4c8 != (undefined8 *)0x0) {
    pplVar6 = (long **)puStack_4c8[-1];
    _free(pplVar6);
  }
  if (lStack_478 != 0) {
    piVar1 = (int *)(lStack_478 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      pplVar6 = (long **)auStack_4b0;
      func_0x000109a848d4(pplVar6);
    }
  }
  lStack_478 = 0;
  uStack_498 = 0;
  uStack_494 = 0;
  uStack_4a0 = 0;
  uStack_49c = 0;
  uStack_488 = 0;
  uStack_484 = 0;
  uStack_490 = 0;
  uStack_48c = 0;
  if (0 < (int)auStack_4b0._4_4_) {
    lVar8 = 0;
    do {
      *(undefined4 *)(puStack_470 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)auStack_4b0._4_4_);
  }
  if (puStack_468 != &uStack_460 && puStack_468 != (undefined8 *)0x0) {
    pplVar6 = (long **)puStack_468[-1];
    _free(pplVar6);
  }
  if (lStack_2b8 != 0) {
    piVar1 = (int *)(lStack_2b8 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      pplVar6 = (long **)auStack_2f0;
      func_0x000109a848d4(pplVar6);
    }
  }
  lStack_2b8 = 0;
  uStack_2d8 = 0;
  uStack_2d4 = 0;
  uStack_2e0 = 0;
  uStack_2dc = 0;
  uStack_2c8 = 0;
  uStack_2c4 = 0;
  uStack_2d0 = 0;
  uStack_2cc = 0;
  if (0 < (int)auStack_2f0._4_4_) {
    lVar8 = 0;
    do {
      *(undefined4 *)(puStack_2b0 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)auStack_2f0._4_4_);
  }
  if (puStack_2a8 != &uStack_2a0 && puStack_2a8 != (undefined8 *)0x0) {
    pplVar6 = (long **)puStack_2a8[-1];
    _free(pplVar6);
  }
  if (lStack_258 != 0) {
    piVar1 = (int *)(lStack_258 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      pplVar6 = (long **)auStack_290;
      func_0x000109a848d4(pplVar6);
    }
  }
  lStack_258 = 0;
  uStack_278 = 0;
  uStack_274 = 0;
  uStack_280 = 0;
  uStack_27c = 0;
  uStack_268 = 0;
  uStack_264 = 0;
  uStack_270 = 0;
  uStack_26c = 0;
  if (0 < (int)auStack_290._4_4_) {
    lVar8 = 0;
    do {
      *(undefined4 *)(puStack_250 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)auStack_290._4_4_);
  }
  if (puStack_248 != &uStack_240 && puStack_248 != (undefined8 *)0x0) {
    pplVar6 = (long **)puStack_248[-1];
    _free(pplVar6);
  }
  if (lStack_1f8 != 0) {
    piVar1 = (int *)(lStack_1f8 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      pplVar6 = (long **)auStack_230;
      func_0x000109a848d4(pplVar6);
    }
  }
  lStack_1f8 = 0;
  uStack_218 = 0;
  uStack_214 = 0;
  uStack_220 = 0;
  uStack_21c = 0;
  uStack_208 = 0;
  uStack_204 = 0;
  uStack_210 = 0;
  uStack_20c = 0;
  if (0 < (int)auStack_230._4_4_) {
    lVar8 = 0;
    do {
      *(undefined4 *)(puStack_1f0 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)auStack_230._4_4_);
  }
  if (puStack_1e8 != &uStack_1e0 && puStack_1e8 != (undefined8 *)0x0) {
    pplVar6 = (long **)puStack_1e8[-1];
    _free(pplVar6);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  if (iVar7 == 0) goto LAB_10936f7bc;
  func_0x000104bd46a0(pplVar6);
  FUN_10918eb6c(&plStack_450);
  FUN_10918eb6c(&uStack_1d0);
  FUN_10918eb6c(auStack_d30);
  FUN_10918eb6c(&uStack_7f0);
  FUN_10918eb6c(auStack_ab0);
  FUN_10918eb6c(auStack_950);
  func_0x00010567aa40(&uStack_f28);
  plStack_450 = alStack_ec8;
  FUN_1093702c4(&plStack_450);
  func_0x00010567aa40(auStack_eb0);
  func_0x00010567aa40(&uStack_e50);
  func_0x00010567aa40(&uStack_df0);
  func_0x00010567aa40(&uStack_d90);
  func_0x00010567aa40(&uStack_bd0);
  do {
    func_0x00010567aa40(&uStack_b70);
    func_0x00010567aa40(&uStack_b10);
    func_0x00010567aa40(auStack_690);
    func_0x00010567aa40(auStack_630);
    func_0x00010567aa40(auStack_5d0);
    func_0x00010567aa40(auStack_570);
    func_0x00010567aa40(auStack_510);
    func_0x00010567aa40(auStack_4b0);
    func_0x00010567aa40(auStack_2f0);
    func_0x00010567aa40(auStack_290);
    func_0x00010567aa40(auStack_230);
LAB_10936f7bc:
    __Unwind_Resume(pplVar6);
    FUN_10918eb6c(auStack_950);
  } while( true );
}



/* Entry: 10936fa58; end: 10936fd87;  */

long ** FUN_10936fa58(long *param_1,long param_2,uint *param_3,undefined8 param_4,undefined8 param_5
                     ,int param_6,undefined8 param_7)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long **pplVar6;
  long *plVar7;
  undefined4 *puVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  undefined4 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined4 auStack_170 [2];
  long *plStack_168;
  undefined8 uStack_160;
  long *plStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [4];
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  long lStack_f0;
  undefined1 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  int iStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  long lStack_90;
  undefined4 *puStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_128._0_4_ = 0x42ff0000;
  puStack_e8 = auStack_120;
  uStack_11c = 0;
  uStack_118 = 0;
  stack0xfffffffffffffedc = 0;
  uStack_10c = 0;
  uStack_108 = 0;
  uStack_114 = 0;
  uStack_110 = 0;
  uStack_fc = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  lStack_f0 = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = (undefined4)*(undefined8 *)(param_2 + 8);
  iStack_c4 = (int)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
  uVar10 = (ulong)(*(uint *)(param_1 + 1) & 0xfff);
  puStack_e0 = &uStack_d8;
  FUN_109a83fd0(auStack_128,2,&uStack_c8);
  FUN_10936b6b4(param_2,*(uint *)(param_1 + 1),auStack_128);
  uStack_c8 = 0x42ff0000;
  uStack_bc = 0;
  uStack_b8 = 0;
  iStack_c4 = 0;
  uStack_c0 = 0;
  puStack_88 = &uStack_c0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_9c = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  lStack_90 = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  lStack_140 = 0;
  lStack_138 = 0;
  uStack_130 = 0;
  uStack_148 = 0;
  plStack_158 = (long *)CONCAT44(plStack_158._4_4_,0x1010000);
  auStack_170[0] = 0x2050000;
  plStack_168 = &lStack_140;
  uStack_160 = 0;
  plStack_150 = (long *)auStack_128;
  puStack_80 = &uStack_78;
  FUN_109a3dcec(&plStack_158,auStack_170);
  iVar9 = (int)uVar10;
  if (lStack_138 != lStack_140) {
    lVar13 = 0;
    uVar14 = 0;
    do {
      (**(code **)(*param_1 + 0x20))(param_1,lStack_140 + lVar13,lStack_140 + lVar13);
      iVar9 = (int)uVar10;
      uVar14 = uVar14 + 1;
      lVar13 = lVar13 + 0x60;
    } while (uVar14 < (ulong)((lStack_138 - lStack_140 >> 5) * -0x5555555555555555));
  }
  plStack_158 = (long *)CONCAT44(plStack_158._4_4_,0x1050000);
  plStack_150 = &lStack_140;
  uStack_148 = 0;
  auStack_170[0] = 0x2010000;
  plStack_168 = (long *)&uStack_c8;
  uStack_160 = 0;
  FUN_109a3ecac(&plStack_158,auStack_170);
  uVar10 = (ulong)(*param_3 & 7);
  FUN_10936b6b4(&uStack_c8,uVar10,param_3);
  plStack_158 = &lStack_140;
  pplVar6 = &plStack_158;
  FUN_1093702c4();
  if (lStack_90 != 0) {
    piVar1 = (int *)(lStack_90 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      pplVar6 = (long **)&uStack_c8;
      func_0x000109a848d4();
    }
  }
  lStack_90 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  if (0 < iStack_c4) {
    lVar13 = 0;
    do {
      puStack_88[lVar13] = 0;
      lVar13 = lVar13 + 1;
    } while (lVar13 < iStack_c4);
  }
  if (puStack_80 != &uStack_78 && puStack_80 != (undefined8 *)0x0) {
    pplVar6 = (long **)puStack_80[-1];
    _free();
  }
  if (lStack_f0 != 0) {
    piVar1 = (int *)(lStack_f0 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      pplVar6 = (long **)auStack_128;
      func_0x000109a848d4();
    }
  }
  lStack_f0 = 0;
  lVar13 = 0;
  uStack_110 = 0;
  uStack_10c = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  uStack_100 = 0;
  uStack_fc = 0;
  uStack_108 = 0;
  uStack_104 = 0;
  if (0 < (int)auStack_128._4_4_) {
    lVar11 = 0;
    do {
      *(undefined4 *)(puStack_e8 + lVar11 * 4) = 0;
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)auStack_128._4_4_);
  }
  if (puStack_e0 != &uStack_d8 && puStack_e0 != (undefined8 *)0x0) {
    pplVar6 = (long **)puStack_e0[-1];
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return pplVar6;
  }
  ___stack_chk_fail();
  if ((int)uVar10 != 0) {
    func_0x000104bd46a0();
    plStack_158 = &lStack_140;
    FUN_1093702c4(&plStack_158);
    func_0x00010567aa40(&uStack_c8);
    func_0x00010567aa40(auStack_128);
  }
  __Unwind_Resume();
  if (param_6 == 1) {
    plVar7 = (long *)0x718;
    __Znwm();
    *plVar7 = (long)&PTR_FUN_110af4118;
    iVar2 = 0;
    iVar12 = (int)param_5;
    if (iVar12 != 0) {
      iVar2 = (int)(iVar9 << 1 | 1U) / iVar12;
    }
    *(int *)(plVar7 + 2) = iVar2;
    plVar7[3] = lVar13;
    *(int *)(plVar7 + 4) = iVar12;
    *(int *)((long)plVar7 + 0x24) = (int)param_7;
    FUN_10936ac90(plVar7 + 5,uVar10,param_3,param_5,param_7);
  }
  else {
    if (param_6 != 3) {
      puVar8 = (undefined4 *)0x24;
      func_0x000107c2ae8c();
      *puVar8 = 1;
      puStack_1e0 = puVar8 + 1;
      uStack_1d8 = 0x1e;
      *(undefined1 *)((long)puVar8 + 0x22) = 0;
      *(undefined8 *)(puVar8 + 3) = 0x7c7c2031203d3d20;
      *(undefined8 *)(puVar8 + 1) = 0x736c656e6e616863;
      *(undefined8 *)((long)puVar8 + 0x1a) = 0x33203d3d20736c65;
      *(undefined8 *)((long)puVar8 + 0x12) = 0x6e6e616863207c7c;
      FUN_109ac3188(0xffffff29,&puStack_1e0,&UNK_10f566c8d,&UNK_10f566c9e,0x201);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10936fec8);
      (*pcVar5)();
    }
    plVar7 = (long *)0x460;
    __Znwm();
    FUN_10936c09c(lVar13);
  }
  *pplVar6 = plVar7;
  return pplVar6;
}



/* Entry: 10936fd88; end: 10936ff03;  */

undefined8 *
FUN_10936fd88(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             int param_5,undefined8 param_6,int param_7,undefined8 param_8)

{
  int iVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puStack_70;
  undefined8 uStack_68;
  
  if (param_7 == 1) {
    puVar3 = (undefined8 *)0x718;
    __Znwm();
    *puVar3 = &PTR_FUN_110af4118;
    iVar1 = 0;
    iVar5 = (int)param_6;
    if (iVar5 != 0) {
      iVar1 = (int)(param_5 << 1 | 1U) / iVar5;
    }
    *(int *)(puVar3 + 2) = iVar1;
    puVar3[3] = param_1;
    *(int *)(puVar3 + 4) = iVar5;
    *(int *)((long)puVar3 + 0x24) = (int)param_8;
    FUN_10936ac90(puVar3 + 5,param_3,param_4,param_6,param_8);
  }
  else {
    if (param_7 != 3) {
      puVar4 = (undefined4 *)0x24;
      func_0x000107c2ae8c();
      *puVar4 = 1;
      puStack_70 = puVar4 + 1;
      uStack_68 = 0x1e;
      *(undefined1 *)((long)puVar4 + 0x22) = 0;
      *(undefined8 *)(puVar4 + 3) = 0x7c7c2031203d3d20;
      *(undefined8 *)(puVar4 + 1) = 0x736c656e6e616863;
      *(undefined8 *)((long)puVar4 + 0x1a) = 0x33203d3d20736c65;
      *(undefined8 *)((long)puVar4 + 0x12) = 0x6e6e616863207c7c;
      FUN_109ac3188(0xffffff29,&puStack_70,&UNK_10f566c8d,&UNK_10f566c9e,0x201);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10936fec8);
      (*pcVar2)();
    }
    puVar3 = (undefined8 *)0x460;
    __Znwm();
    FUN_10936c09c(param_1);
  }
  *param_2 = puVar3;
  return param_2;
}



/* Entry: 10936ff04; end: 10936ff63;  */

undefined8 * FUN_10936ff04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af4118;
  FUN_1093703d4(param_1 + 5);
  return param_1;
}



/* Entry: 10936ff64; end: 10936ff67;  */

undefined8 * FUN_10936ff64(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110af4150;
  if (param_1[0x87] != 0) {
    piVar1 = (int *)(param_1[0x87] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x80);
    }
  }
  param_1[0x87] = 0;
  param_1[0x83] = 0;
  param_1[0x82] = 0;
  param_1[0x85] = 0;
  param_1[0x84] = 0;
  if (0 < *(int *)((long)param_1 + 0x404)) {
    lVar5 = 0;
    lVar7 = param_1[0x88];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x404));
  }
  puVar6 = (undefined8 *)param_1[0x89];
  if (puVar6 != param_1 + 0x8a && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x7b] != 0) {
    piVar1 = (int *)(param_1[0x7b] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x74);
    }
  }
  param_1[0x7b] = 0;
  param_1[0x77] = 0;
  param_1[0x76] = 0;
  param_1[0x79] = 0;
  param_1[0x78] = 0;
  if (0 < *(int *)((long)param_1 + 0x3a4)) {
    lVar5 = 0;
    lVar7 = param_1[0x7c];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x3a4));
  }
  puVar6 = (undefined8 *)param_1[0x7d];
  if (puVar6 != param_1 + 0x7e && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x6f] != 0) {
    piVar1 = (int *)(param_1[0x6f] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x68);
    }
  }
  param_1[0x6f] = 0;
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  param_1[0x6d] = 0;
  param_1[0x6c] = 0;
  if (0 < *(int *)((long)param_1 + 0x344)) {
    lVar5 = 0;
    lVar7 = param_1[0x70];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x344));
  }
  puVar6 = (undefined8 *)param_1[0x71];
  if (puVar6 != param_1 + 0x72 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[99] != 0) {
    piVar1 = (int *)(param_1[99] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x5c);
    }
  }
  param_1[99] = 0;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  if (0 < *(int *)((long)param_1 + 0x2e4)) {
    lVar5 = 0;
    lVar7 = param_1[100];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x2e4));
  }
  puVar6 = (undefined8 *)param_1[0x65];
  if (puVar6 != param_1 + 0x66 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x57] != 0) {
    piVar1 = (int *)(param_1[0x57] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x50);
    }
  }
  param_1[0x57] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  if (0 < *(int *)((long)param_1 + 0x284)) {
    lVar5 = 0;
    lVar7 = param_1[0x58];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x284));
  }
  puVar6 = (undefined8 *)param_1[0x59];
  if (puVar6 != param_1 + 0x5a && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x4b] != 0) {
    piVar1 = (int *)(param_1[0x4b] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x44);
    }
  }
  param_1[0x4b] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  if (0 < *(int *)((long)param_1 + 0x224)) {
    lVar5 = 0;
    lVar7 = param_1[0x4c];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x224));
  }
  puVar6 = (undefined8 *)param_1[0x4d];
  if (puVar6 != param_1 + 0x4e && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x3f] != 0) {
    piVar1 = (int *)(param_1[0x3f] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x38);
    }
  }
  param_1[0x3f] = 0;
  param_1[0x3b] = 0;
  param_1[0x3a] = 0;
  param_1[0x3d] = 0;
  param_1[0x3c] = 0;
  if (0 < *(int *)((long)param_1 + 0x1c4)) {
    lVar5 = 0;
    lVar7 = param_1[0x40];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x1c4));
  }
  puVar6 = (undefined8 *)param_1[0x41];
  if (puVar6 != param_1 + 0x42 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x33] != 0) {
    piVar1 = (int *)(param_1[0x33] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x2c);
    }
  }
  param_1[0x33] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  if (0 < *(int *)((long)param_1 + 0x164)) {
    lVar5 = 0;
    lVar7 = param_1[0x34];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x164));
  }
  puVar6 = (undefined8 *)param_1[0x35];
  if (puVar6 != param_1 + 0x36 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x27] != 0) {
    piVar1 = (int *)(param_1[0x27] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x20);
    }
  }
  param_1[0x27] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  if (0 < *(int *)((long)param_1 + 0x104)) {
    lVar5 = 0;
    lVar7 = param_1[0x28];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x104));
  }
  puVar6 = (undefined8 *)param_1[0x29];
  if (puVar6 != param_1 + 0x2a && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x1b] != 0) {
    piVar1 = (int *)(param_1[0x1b] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x14);
    }
  }
  param_1[0x1b] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  if (0 < *(int *)((long)param_1 + 0xa4)) {
    lVar5 = 0;
    lVar7 = param_1[0x1c];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0xa4));
  }
  puVar6 = (undefined8 *)param_1[0x1d];
  if (puVar6 != param_1 + 0x1e && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0xc] != 0) {
    piVar1 = (int *)(param_1[0xc] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 5);
    }
  }
  param_1[0xc] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  if (0 < *(int *)((long)param_1 + 0x2c)) {
    lVar5 = 0;
    lVar7 = param_1[0xd];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x2c));
  }
  puVar6 = (undefined8 *)param_1[0xe];
  if (puVar6 != param_1 + 0xf && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  puStack_28 = param_1 + 2;
  FUN_1093702c4(&puStack_28);
  return param_1;
}



/* Entry: 10936ff68; end: 10936ff7b;  */

void FUN_10936ff68(void)

{
  FUN_109370c60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10936ff7c; end: 10937017b;  */

void FUN_10936ff7c(uint *param_1,uint param_2,uint param_3,uint param_4,long param_5,ulong param_6)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined4 *puVar5;
  uint *puVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_4 & 0xfff | 0x42ff0000;
  *param_1 = uVar1;
  param_1[1] = 2;
  param_1[2] = param_2;
  param_1[3] = param_3;
  *(long *)(param_1 + 4) = param_5;
  *(long *)(param_1 + 6) = param_5;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  puVar6 = param_1 + 0x14;
  puVar6[0] = 0;
  puVar6[1] = 0;
  *(uint **)(param_1 + 0x10) = param_1 + 2;
  *(uint **)(param_1 + 0x12) = puVar6;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  if (((long)(int)param_3 * (long)(int)param_2 != 0) && (param_5 == 0)) {
    puVar5 = (undefined4 *)0x24;
    func_0x000107c2ae8c();
    *puVar5 = 1;
    puStack_30 = puVar5 + 1;
    uStack_28 = 0x1c;
    *(undefined1 *)(puVar5 + 8) = 0;
    *(undefined8 *)(puVar5 + 3) = 0x207c7c2030203d3d;
    *(undefined8 *)(puVar5 + 1) = 0x2029286c61746f74;
    *(undefined8 *)(puVar5 + 6) = 0x4c4c554e203d2120;
    *(undefined8 *)(puVar5 + 4) = 0x61746164207c7c20;
    FUN_109ac3188(0xffffff29,&puStack_30,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
LAB_109370124:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x109370128);
    (*pcVar4)();
  }
  uVar2 = (param_4 >> 3 & 0x1ff) + 1 << (ulong)(0xfa50U >> (ulong)((param_4 & 7) << 1) & 3);
  uVar7 = (long)(int)uVar2 * (long)(int)param_3;
  uVar8 = uVar7;
  if (param_6 == 0) {
    uVar9 = 0x4000;
  }
  else {
    uVar9 = 0x88442211 >> ((param_4 & 7) << 2);
    uVar10 = (ulong)uVar9 & 0xf;
    if (param_2 != 1) {
      uVar8 = param_6;
    }
    uVar3 = 0;
    if ((uVar9 & 0xf) != 0) {
      uVar3 = uVar8 / uVar10;
    }
    if (uVar8 != uVar3 * uVar10) {
      puVar5 = (undefined4 *)0x24;
      func_0x000107c2ae8c();
      *puVar5 = 1;
      puStack_30 = puVar5 + 1;
      uStack_28 = 0x1f;
      *(undefined1 *)((long)puVar5 + 0x23) = 0;
      *(undefined8 *)(puVar5 + 3) = 0x6d20612065622074;
      *(undefined8 *)(puVar5 + 1) = 0x73756d2070657453;
      *(undefined8 *)((long)puVar5 + 0x1b) = 0x317a736520666f20;
      *(undefined8 *)((long)puVar5 + 0x13) = 0x656c7069746c756d;
      FUN_109ac3188(0xfffffff3,&puStack_30,&UNK_10f2e8162,&UNK_10f566d1b,0x1aa);
      goto LAB_109370124;
    }
    uVar9 = 0x4000;
    if (uVar8 != uVar7) {
      uVar9 = 0;
    }
  }
  *param_1 = uVar9 | uVar1;
  *(ulong *)(param_1 + 0x14) = uVar8;
  *(ulong *)(param_1 + 0x16) = (ulong)uVar2;
  param_5 = param_5 + uVar8 * (long)(int)param_2;
  *(ulong *)(param_1 + 8) = (param_5 - uVar8) + uVar7;
  *(long *)(param_1 + 10) = param_5;
  return;
}



/* Entry: 10937017c; end: 109370223;  */

undefined8 * FUN_10937017c(undefined8 *param_1,long param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_109370224(param_1);
    puVar1 = (undefined4 *)param_1[1];
    puVar2 = puVar1 + param_2 * 0x18;
    do {
      *puVar1 = 0x42ff0000;
      *(undefined8 *)(puVar1 + 3) = 0;
      *(undefined8 *)(puVar1 + 1) = 0;
      *(undefined8 *)(puVar1 + 7) = 0;
      *(undefined8 *)(puVar1 + 5) = 0;
      *(undefined8 *)(puVar1 + 0xb) = 0;
      *(undefined8 *)(puVar1 + 9) = 0;
      *(undefined8 *)(puVar1 + 0x14) = 0;
      *(undefined8 *)(puVar1 + 0xe) = 0;
      *(undefined8 *)(puVar1 + 0xc) = 0;
      *(undefined4 **)(puVar1 + 0x10) = puVar1 + 2;
      *(undefined4 **)(puVar1 + 0x12) = puVar1 + 0x14;
      *(undefined8 *)(puVar1 + 0x16) = 0;
      puVar1 = puVar1 + 0x18;
    } while (puVar1 != puVar2);
    param_1[1] = puVar2;
  }
  return param_1;
}



/* Entry: 109370224; end: 10937026b;  */

void FUN_109370224(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  if (param_2 < 0x2aaaaaaaaaaaaab) {
    plVar1 = param_1;
    FUN_109370280();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 0xc);
    return;
  }
  FUN_10937026c();
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 < 0x2aaaaaaaaaaaaab) {
    __Znwm(param_2 * 0x60);
    return;
  }
  func_0x000104c4f740();
  plVar4 = (long *)*plVar1;
  lVar5 = *plVar4;
  if (lVar5 != 0) {
    lVar3 = plVar4[1];
    lVar2 = lVar5;
    if (lVar3 != lVar5) {
      do {
        lVar3 = lVar3 + -0x60;
        FUN_109370334(lVar3);
      } while (lVar3 != lVar5);
      lVar2 = *(long *)*plVar1;
    }
    plVar4[1] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10937026c; end: 10937027f;  */

void FUN_10937026c(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 < 0x2aaaaaaaaaaaaab) {
    __Znwm(param_2 * 0x60);
    return;
  }
  func_0x000104c4f740();
  plVar4 = (long *)*plVar1;
  lVar5 = *plVar4;
  if (lVar5 != 0) {
    lVar3 = plVar4[1];
    lVar2 = lVar5;
    if (lVar3 != lVar5) {
      do {
        lVar3 = lVar3 + -0x60;
        FUN_109370334(lVar3);
      } while (lVar3 != lVar5);
      lVar2 = *(long *)*plVar1;
    }
    plVar4[1] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 109370280; end: 1093702c3;  */

void FUN_109370280(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  if (param_2 < 0x2aaaaaaaaaaaaab) {
    __Znwm(param_2 * 0x60);
    return;
  }
  func_0x000104c4f740();
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar2 = plVar3[1];
    lVar1 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x60;
        FUN_109370334(lVar2);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1093702c4; end: 109370333;  */

void FUN_1093702c4(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar2 = plVar3[1];
    lVar1 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x60;
        FUN_109370334(lVar2);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 109370334; end: 1093703d3;  */

void FUN_109370334(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x38) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1);
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (0 < *(int *)(param_1 + 4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x40);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 4));
  }
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 == param_1 + 0x50 || lVar5 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(*(undefined8 *)(lVar5 + -8));
  return;
}



/* Entry: 1093703d4; end: 109370c5f;  */

long * FUN_1093703d4(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  if (param_1[0xd9] != 0) {
    piVar1 = (int *)(param_1[0xd9] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0xd2);
    }
  }
  param_1[0xd9] = 0;
  param_1[0xd5] = 0;
  param_1[0xd4] = 0;
  param_1[0xd7] = 0;
  param_1[0xd6] = 0;
  if (0 < *(int *)((long)param_1 + 0x694)) {
    lVar5 = 0;
    lVar7 = param_1[0xda];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x694));
  }
  plVar6 = (long *)param_1[0xdb];
  if (plVar6 != param_1 + 0xdc && plVar6 != (long *)0x0) {
    _free(plVar6[-1]);
  }
  if (param_1[0xcd] != 0) {
    piVar1 = (int *)(param_1[0xcd] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0xc6);
    }
  }
  param_1[0xcd] = 0;
  param_1[0xc9] = 0;
  param_1[200] = 0;
  param_1[0xcb] = 0;
  param_1[0xca] = 0;
  if (0 < *(int *)((long)param_1 + 0x634)) {
    lVar5 = 0;
    lVar7 = param_1[0xce];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x634));
  }
  plVar6 = (long *)param_1[0xcf];
  if (plVar6 != param_1 + 0xd0 && plVar6 != (long *)0x0) {
    _free(plVar6[-1]);
  }
  if (param_1[0xc1] != 0) {
    piVar1 = (int *)(param_1[0xc1] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0xba);
    }
  }
  param_1[0xc1] = 0;
  param_1[0xbd] = 0;
  param_1[0xbc] = 0;
  param_1[0xbf] = 0;
  param_1[0xbe] = 0;
  if (0 < *(int *)((long)param_1 + 0x5d4)) {
    lVar5 = 0;
    lVar7 = param_1[0xc2];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x5d4));
  }
  plVar6 = (long *)param_1[0xc3];
  if (plVar6 != param_1 + 0xc4 && plVar6 != (long *)0x0) {
    _free(plVar6[-1]);
  }
  if (param_1[0xb5] != 0) {
    piVar1 = (int *)(param_1[0xb5] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0xae);
    }
  }
  param_1[0xb5] = 0;
  param_1[0xb1] = 0;
  param_1[0xb0] = 0;
  param_1[0xb3] = 0;
  param_1[0xb2] = 0;
  if (0 < *(int *)((long)param_1 + 0x574)) {
    lVar5 = 0;
    lVar7 = param_1[0xb6];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x574));
  }
  plVar6 = (long *)param_1[0xb7];
  if (plVar6 != param_1 + 0xb8 && plVar6 != (long *)0x0) {
    _free(plVar6[-1]);
  }
  if (param_1[0xa9] != 0) {
    piVar1 = (int *)(param_1[0xa9] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0xa2);
    }
  }
  param_1[0xa9] = 0;
  param_1[0xa5] = 0;
  param_1[0xa4] = 0;
  param_1[0xa7] = 0;
  param_1[0xa6] = 0;
  if (0 < *(int *)((long)param_1 + 0x514)) {
    lVar5 = 0;
    lVar7 = param_1[0xaa];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x514));
  }
  plVar6 = (long *)param_1[0xab];
  if (plVar6 != param_1 + 0xac && plVar6 != (long *)0x0) {
    _free(plVar6[-1]);
  }
  if (param_1[0x9d] != 0) {
    piVar1 = (int *)(param_1[0x9d] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x96);
    }
  }
  param_1[0x9d] = 0;
  param_1[0x99] = 0;
  param_1[0x98] = 0;
  param_1[0x9b] = 0;
  param_1[0x9a] = 0;
  if (0 < *(int *)((long)param_1 + 0x4b4)) {
    lVar5 = 0;
    lVar7 = param_1[0x9e];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x4b4));
  }
  plVar6 = (long *)param_1[0x9f];
  if (plVar6 != param_1 + 0xa0 && plVar6 != (long *)0x0) {
    _free(plVar6[-1]);
  }
  if (param_1[0x91] != 0) {
    piVar1 = (int *)(param_1[0x91] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x8a);
    }
  }
  param_1[0x91] = 0;
  param_1[0x8d] = 0;
  param_1[0x8c] = 0;
  param_1[0x8f] = 0;
  param_1[0x8e] = 0;
  if (0 < *(int *)((long)param_1 + 0x454)) {
    lVar5 = 0;
    lVar7 = param_1[0x92];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x454));
  }
  plVar6 = (long *)param_1[0x93];
  if (plVar6 != param_1 + 0x94 && plVar6 != (long *)0x0) {
    _free(plVar6[-1]);
  }
  if (param_1[0x85] != 0) {
    piVar1 = (int *)(param_1[0x85] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x7e);
    }
  }
  param_1[0x85] = 0;
  param_1[0x81] = 0;
  param_1[0x80] = 0;
  param_1[0x83] = 0;
  param_1[0x82] = 0;
  if (0 < *(int *)((long)param_1 + 0x3f4)) {
    lVar5 = 0;
    lVar7 = param_1[0x86];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x3f4));
  }
  plVar6 = (long *)param_1[0x87];
  if (plVar6 != param_1 + 0x88 && plVar6 != (long *)0x0) {
    _free(plVar6[-1]);
  }
  if (param_1[0x79] != 0) {
    piVar1 = (int *)(param_1[0x79] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x72);
    }
  }
  param_1[0x79] = 0;
  param_1[0x75] = 0;
  param_1[0x74] = 0;
  param_1[0x77] = 0;
  param_1[0x76] = 0;
  if (0 < *(int *)((long)param_1 + 0x394)) {
    lVar5 = 0;
    lVar7 = param_1[0x7a];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x394));
  }
  plVar6 = (long *)param_1[0x7b];
  if (plVar6 != param_1 + 0x7c && plVar6 != (long *)0x0) {
    _free(plVar6[-1]);
  }
  if (param_1[0x6d] != 0) {
    piVar1 = (int *)(param_1[0x6d] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x66);
    }
  }
  param_1[0x6d] = 0;
  param_1[0x69] = 0;
  param_1[0x68] = 0;
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  if (0 < *(int *)((long)param_1 + 0x334)) {
    lVar5 = 0;
    lVar7 = param_1[0x6e];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x334));
  }
  plVar6 = (long *)param_1[0x6f];
  if (plVar6 != param_1 + 0x70 && plVar6 != (long *)0x0) {
    _free(plVar6[-1]);
  }
  if (param_1[0x61] != 0) {
    piVar1 = (int *)(param_1[0x61] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x5a);
    }
  }
  param_1[0x61] = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  if (0 < *(int *)((long)param_1 + 0x2d4)) {
    lVar5 = 0;
    lVar7 = param_1[0x62];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x2d4));
  }
  plVar6 = (long *)param_1[99];
  if (plVar6 != param_1 + 100 && plVar6 != (long *)0x0) {
    _free(plVar6[-1]);
  }
  if (param_1[0x55] != 0) {
    piVar1 = (int *)(param_1[0x55] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x4e);
    }
  }
  param_1[0x55] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  if (0 < *(int *)((long)param_1 + 0x274)) {
    lVar5 = 0;
    lVar7 = param_1[0x56];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x274));
  }
  plVar6 = (long *)param_1[0x57];
  if (plVar6 != param_1 + 0x58 && plVar6 != (long *)0x0) {
    _free(plVar6[-1]);
  }
  if (param_1[0x49] != 0) {
    piVar1 = (int *)(param_1[0x49] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x42);
    }
  }
  param_1[0x49] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  if (0 < *(int *)((long)param_1 + 0x214)) {
    lVar5 = 0;
    lVar7 = param_1[0x4a];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x214));
  }
  plVar6 = (long *)param_1[0x4b];
  if (plVar6 != param_1 + 0x4c && plVar6 != (long *)0x0) {
    _free(plVar6[-1]);
  }
  if (param_1[0x3d] != 0) {
    piVar1 = (int *)(param_1[0x3d] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x36);
    }
  }
  param_1[0x3d] = 0;
  param_1[0x39] = 0;
  param_1[0x38] = 0;
  param_1[0x3b] = 0;
  param_1[0x3a] = 0;
  if (0 < *(int *)((long)param_1 + 0x1b4)) {
    lVar5 = 0;
    lVar7 = param_1[0x3e];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x1b4));
  }
  plVar6 = (long *)param_1[0x3f];
  if (plVar6 != param_1 + 0x40 && plVar6 != (long *)0x0) {
    _free(plVar6[-1]);
  }
  if (param_1[0x31] != 0) {
    piVar1 = (int *)(param_1[0x31] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x2a);
    }
  }
  param_1[0x31] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  if (0 < *(int *)((long)param_1 + 0x154)) {
    lVar5 = 0;
    lVar7 = param_1[0x32];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x154));
  }
  plVar6 = (long *)param_1[0x33];
  if (plVar6 != param_1 + 0x34 && plVar6 != (long *)0x0) {
    _free(plVar6[-1]);
  }
  if (param_1[0x25] != 0) {
    piVar1 = (int *)(param_1[0x25] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x1e);
    }
  }
  param_1[0x25] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  if (0 < *(int *)((long)param_1 + 0xf4)) {
    lVar5 = 0;
    lVar7 = param_1[0x26];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0xf4));
  }
  plVar6 = (long *)param_1[0x27];
  if (plVar6 != param_1 + 0x28 && plVar6 != (long *)0x0) {
    _free(plVar6[-1]);
  }
  if (param_1[0x19] != 0) {
    piVar1 = (int *)(param_1[0x19] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x12);
    }
  }
  param_1[0x19] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  if (0 < *(int *)((long)param_1 + 0x94)) {
    lVar5 = 0;
    lVar7 = param_1[0x1a];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x94));
  }
  plVar6 = (long *)param_1[0x1b];
  if (plVar6 != param_1 + 0x1c && plVar6 != (long *)0x0) {
    _free(plVar6[-1]);
  }
  lVar5 = *param_1;
  *param_1 = 0;
  if (lVar5 != 0) {
    __ZdaPv();
  }
  return param_1;
}



/* Entry: 109370c60; end: 1093711ff;  */

undefined8 * FUN_109370c60(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110af4150;
  if (param_1[0x87] != 0) {
    piVar1 = (int *)(param_1[0x87] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x80);
    }
  }
  param_1[0x87] = 0;
  param_1[0x83] = 0;
  param_1[0x82] = 0;
  param_1[0x85] = 0;
  param_1[0x84] = 0;
  if (0 < *(int *)((long)param_1 + 0x404)) {
    lVar5 = 0;
    lVar7 = param_1[0x88];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x404));
  }
  puVar6 = (undefined8 *)param_1[0x89];
  if (puVar6 != param_1 + 0x8a && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x7b] != 0) {
    piVar1 = (int *)(param_1[0x7b] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x74);
    }
  }
  param_1[0x7b] = 0;
  param_1[0x77] = 0;
  param_1[0x76] = 0;
  param_1[0x79] = 0;
  param_1[0x78] = 0;
  if (0 < *(int *)((long)param_1 + 0x3a4)) {
    lVar5 = 0;
    lVar7 = param_1[0x7c];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x3a4));
  }
  puVar6 = (undefined8 *)param_1[0x7d];
  if (puVar6 != param_1 + 0x7e && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x6f] != 0) {
    piVar1 = (int *)(param_1[0x6f] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x68);
    }
  }
  param_1[0x6f] = 0;
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  param_1[0x6d] = 0;
  param_1[0x6c] = 0;
  if (0 < *(int *)((long)param_1 + 0x344)) {
    lVar5 = 0;
    lVar7 = param_1[0x70];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x344));
  }
  puVar6 = (undefined8 *)param_1[0x71];
  if (puVar6 != param_1 + 0x72 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[99] != 0) {
    piVar1 = (int *)(param_1[99] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x5c);
    }
  }
  param_1[99] = 0;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  if (0 < *(int *)((long)param_1 + 0x2e4)) {
    lVar5 = 0;
    lVar7 = param_1[100];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x2e4));
  }
  puVar6 = (undefined8 *)param_1[0x65];
  if (puVar6 != param_1 + 0x66 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x57] != 0) {
    piVar1 = (int *)(param_1[0x57] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x50);
    }
  }
  param_1[0x57] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  if (0 < *(int *)((long)param_1 + 0x284)) {
    lVar5 = 0;
    lVar7 = param_1[0x58];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x284));
  }
  puVar6 = (undefined8 *)param_1[0x59];
  if (puVar6 != param_1 + 0x5a && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x4b] != 0) {
    piVar1 = (int *)(param_1[0x4b] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x44);
    }
  }
  param_1[0x4b] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  if (0 < *(int *)((long)param_1 + 0x224)) {
    lVar5 = 0;
    lVar7 = param_1[0x4c];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x224));
  }
  puVar6 = (undefined8 *)param_1[0x4d];
  if (puVar6 != param_1 + 0x4e && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x3f] != 0) {
    piVar1 = (int *)(param_1[0x3f] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x38);
    }
  }
  param_1[0x3f] = 0;
  param_1[0x3b] = 0;
  param_1[0x3a] = 0;
  param_1[0x3d] = 0;
  param_1[0x3c] = 0;
  if (0 < *(int *)((long)param_1 + 0x1c4)) {
    lVar5 = 0;
    lVar7 = param_1[0x40];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x1c4));
  }
  puVar6 = (undefined8 *)param_1[0x41];
  if (puVar6 != param_1 + 0x42 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x33] != 0) {
    piVar1 = (int *)(param_1[0x33] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x2c);
    }
  }
  param_1[0x33] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  if (0 < *(int *)((long)param_1 + 0x164)) {
    lVar5 = 0;
    lVar7 = param_1[0x34];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x164));
  }
  puVar6 = (undefined8 *)param_1[0x35];
  if (puVar6 != param_1 + 0x36 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x27] != 0) {
    piVar1 = (int *)(param_1[0x27] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x20);
    }
  }
  param_1[0x27] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  if (0 < *(int *)((long)param_1 + 0x104)) {
    lVar5 = 0;
    lVar7 = param_1[0x28];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x104));
  }
  puVar6 = (undefined8 *)param_1[0x29];
  if (puVar6 != param_1 + 0x2a && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x1b] != 0) {
    piVar1 = (int *)(param_1[0x1b] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x14);
    }
  }
  param_1[0x1b] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  if (0 < *(int *)((long)param_1 + 0xa4)) {
    lVar5 = 0;
    lVar7 = param_1[0x1c];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0xa4));
  }
  puVar6 = (undefined8 *)param_1[0x1d];
  if (puVar6 != param_1 + 0x1e && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0xc] != 0) {
    piVar1 = (int *)(param_1[0xc] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 5);
    }
  }
  param_1[0xc] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  if (0 < *(int *)((long)param_1 + 0x2c)) {
    lVar5 = 0;
    lVar7 = param_1[0xd];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x2c));
  }
  puVar6 = (undefined8 *)param_1[0xe];
  if (puVar6 != param_1 + 0xf && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  puStack_28 = param_1 + 2;
  FUN_1093702c4(&puStack_28);
  return param_1;
}



/* Entry: 109371200; end: 109371203;  */

void FUN_109371200(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 109371204; end: 109371217;  */

void FUN_109371204(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109371218; end: 1093712f3;  */

undefined8 * FUN_109371218(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 auStack_58 [2];
  char cStack_41;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_58,&UNK_10f566df9);
  puVar1 = auStack_58;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar1,&UNK_10f566e07,0x1c);
  uStack_38 = puVar1[1];
  uStack_40 = *puVar1;
  lStack_30 = puVar1[2];
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  __ZNSt13runtime_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
            (param_1,&uStack_40);
  *param_1 = &PTR_FUN_110af4438;
  if (lStack_30 < 0) {
    __ZdlPv(uStack_40);
  }
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  *param_1 = &PTR_FUN_110af4220;
  return param_1;
}



/* Entry: 1093712f4; end: 10937137b;  */

undefined8 * FUN_1093712f4(undefined8 *param_1)

{
  undefined8 auStack_38 [2];
  char cStack_21;
  
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_38,&UNK_10f566df9);
  __ZNSt13runtime_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
            (param_1,auStack_38);
  *param_1 = &PTR_FUN_110af4438;
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  *param_1 = &PTR_FUN_110af4248;
  return param_1;
}



/* Entry: 10937137c; end: 10937137f;  */

undefined8 * FUN_10937137c(undefined8 *param_1)

{
  undefined8 auStack_38 [2];
  char cStack_21;
  
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_38,&UNK_10f566df9);
  __ZNSt13runtime_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
            (param_1,auStack_38);
  *param_1 = &PTR_FUN_110af4438;
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  *param_1 = &PTR_FUN_110af4248;
  return param_1;
}



/* Entry: 109371380; end: 1093713f7;  */

void FUN_109371380(undefined8 *param_1)

{
  __ZNSt13runtime_errorC2EPKc(param_1,&UNK_10f566e24);
  *param_1 = &PTR_FUN_110af4270;
  return;
}



/* Entry: 1093713f8; end: 10937153b;  */

/* WARNING: Removing unreachable block (ram,0x0001093714a8) */

undefined8 * FUN_1093713f8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_78,&UNK_10f566eb3,param_3);
  puVar2 = auStack_78;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar2,&UNK_10f566ee9,0x1d);
  uStack_58 = puVar2[1];
  uStack_60 = *puVar2;
  lStack_50 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  puVar3 = &uStack_60;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar3,puVar2,uVar1);
  uStack_38 = puVar3[1];
  uStack_40 = *puVar3;
  uStack_30 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  __ZNSt13runtime_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
            (param_1,&uStack_40);
  *param_1 = &PTR_FUN_110af4438;
  if (lStack_50 < 0) {
    __ZdlPv(uStack_60);
  }
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  *param_1 = &PTR_FUN_110af42e8;
  return param_1;
}



/* Entry: 10937153c; end: 10937167b;  */

/* WARNING: Removing unreachable block (ram,0x0001093715e8) */

undefined8 * FUN_10937153c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_78,&UNK_10f566f07);
  puVar2 = auStack_78;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar2,&UNK_10f566f2c,8);
  uStack_58 = puVar2[1];
  uStack_60 = *puVar2;
  lStack_50 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  uVar1 = param_3[1];
  puVar2 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar2 = param_3;
  }
  puVar3 = &uStack_60;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar3,puVar2,uVar1);
  uStack_38 = puVar3[1];
  uStack_40 = *puVar3;
  uStack_30 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  __ZNSt13runtime_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
            (param_1,&uStack_40);
  *param_1 = &PTR_FUN_110af4438;
  if (lStack_50 < 0) {
    __ZdlPv(uStack_60);
  }
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  *param_1 = &PTR_FUN_110af4310;
  return param_1;
}



/* Entry: 10937167c; end: 1093717bb;  */

/* WARNING: Removing unreachable block (ram,0x000109371728) */

undefined8 * FUN_10937167c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_78,&UNK_10f566f35);
  puVar2 = auStack_78;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar2,&UNK_10f566f48,10);
  uStack_58 = puVar2[1];
  uStack_60 = *puVar2;
  lStack_50 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  uVar1 = param_3[1];
  puVar2 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar2 = param_3;
  }
  puVar3 = &uStack_60;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar3,puVar2,uVar1);
  uStack_38 = puVar3[1];
  uStack_40 = *puVar3;
  uStack_30 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  __ZNSt13runtime_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
            (param_1,&uStack_40);
  *param_1 = &PTR_FUN_110af4438;
  if (lStack_50 < 0) {
    __ZdlPv(uStack_60);
  }
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  *param_1 = &PTR_FUN_110af4338;
  return param_1;
}



/* Entry: 1093717bc; end: 1093717bf;  */

void FUN_1093717bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 1093717c0; end: 1093717d3;  */

void FUN_1093717c0(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1093717d4; end: 1093717d7;  */

void FUN_1093717d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 1093717d8; end: 1093717eb;  */

void FUN_1093717d8(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1093717ec; end: 1093717ef;  */

void FUN_1093717ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 1093717f0; end: 109371803;  */

void FUN_1093717f0(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109371804; end: 109371807;  */

void FUN_109371804(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 109371808; end: 10937181b;  */

void FUN_109371808(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10937181c; end: 10937181f;  */

void FUN_10937181c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 109371820; end: 109371833;  */

void FUN_109371820(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109371834; end: 109371837;  */

void FUN_109371834(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 109371838; end: 10937184b;  */

void FUN_109371838(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10937184c; end: 10937184f;  */

void FUN_10937184c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 109371850; end: 109371863;  */

void FUN_109371850(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109371864; end: 109371867;  */

void FUN_109371864(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 109371868; end: 10937187b;  */

void FUN_109371868(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10937187c; end: 10937187f;  */

void FUN_10937187c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 109371880; end: 109371893;  */

void FUN_109371880(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109371894; end: 109371a97;  */

void FUN_109371894(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 *****pppppuVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *****pppppuVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 ****ppppuStack_78;
  ulong uStack_70;
  byte bStack_61;
  undefined8 ****ppppuStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  
  if (*(char *)(param_1 + 0x34f) < '\0') {
    func_0x000107c3192c(&ppppuStack_60,*(undefined8 *)(param_1 + 0x338),
                        *(undefined8 *)(param_1 + 0x340));
  }
  else {
    uStack_58 = *(ulong *)(param_1 + 0x340);
    ppppuStack_60 = *(undefined8 *****)(param_1 + 0x338);
    uStack_50 = *(undefined8 *)(param_1 + 0x348);
  }
  func_0x000107c31940(&ppppuStack_78,&DAT_10f566f6e);
  uVar7 = (uint)(char)uStack_50._7_1_;
  uVar1 = uStack_58;
  if (-1 < (int)uVar7) {
    uVar1 = (ulong)uStack_50._7_1_;
  }
  if (-1 < (char)bStack_61) {
    uStack_70 = (ulong)bStack_61;
  }
  if (uVar1 == uStack_70) {
    pppppuVar5 = (undefined8 *****)ppppuStack_60;
    if (-1 < (int)uVar7) {
      pppppuVar5 = &ppppuStack_60;
    }
    pppppuVar2 = (undefined8 *****)ppppuStack_78;
    if (-1 < (char)bStack_61) {
      pppppuVar2 = &ppppuStack_78;
    }
    _memcmp(pppppuVar5,pppppuVar2);
    bVar4 = (int)pppppuVar5 == 0;
  }
  else {
    bVar4 = false;
  }
  if ((char)bStack_61 < '\0') {
    __ZdlPv(ppppuStack_78);
    uVar7 = (uint)uStack_50._7_1_;
  }
  if ((uVar7 >> 7 & 1) != 0) {
    __ZdlPv(ppppuStack_60);
  }
  if (bVar4) {
    FUN_109371fe4(param_1,param_2);
    return;
  }
  uVar6 = 0x10;
  ___cxa_allocate_exception(0x10);
  if (*(char *)(param_1 + 0x34f) < '\0') {
    func_0x000107c3192c(&ppppuStack_60,*(undefined8 *)(param_1 + 0x338),
                        *(undefined8 *)(param_1 + 0x340));
  }
  else {
    uStack_58 = *(ulong *)(param_1 + 0x340);
    ppppuStack_60 = *(undefined8 *****)(param_1 + 0x338);
    uStack_50 = *(undefined8 *)(param_1 + 0x348);
  }
  func_0x000107c31940(&ppppuStack_78,&DAT_10f566f6e);
  FUN_1093713f8(uVar6,&ppppuStack_60,&ppppuStack_78);
  ___cxa_throw(uVar6,&PTR_DAT_110af43e0,FUN_109371834);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109371a28);
  (*pcVar3)();
}



/* Entry: 109371a98; end: 109371c8b;  */

void FUN_109371a98(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 *****pppppuVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *****pppppuVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 ****ppppuStack_78;
  ulong uStack_70;
  byte bStack_61;
  undefined8 ****ppppuStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  
  if (*(char *)(param_1 + 0x34f) < '\0') {
    func_0x000107c3192c(&ppppuStack_60,*(undefined8 *)(param_1 + 0x338),
                        *(undefined8 *)(param_1 + 0x340));
  }
  else {
    uStack_58 = *(ulong *)(param_1 + 0x340);
    ppppuStack_60 = *(undefined8 *****)(param_1 + 0x338);
    uStack_50 = *(undefined8 *)(param_1 + 0x348);
  }
  FUN_1093722b0(&ppppuStack_78);
  uVar7 = (uint)(char)uStack_50._7_1_;
  uVar1 = uStack_58;
  if (-1 < (int)uVar7) {
    uVar1 = (ulong)uStack_50._7_1_;
  }
  if (-1 < (char)bStack_61) {
    uStack_70 = (ulong)bStack_61;
  }
  if (uVar1 == uStack_70) {
    pppppuVar5 = (undefined8 *****)ppppuStack_60;
    if (-1 < (int)uVar7) {
      pppppuVar5 = &ppppuStack_60;
    }
    pppppuVar2 = (undefined8 *****)ppppuStack_78;
    if (-1 < (char)bStack_61) {
      pppppuVar2 = &ppppuStack_78;
    }
    _memcmp(pppppuVar5,pppppuVar2);
    bVar4 = (int)pppppuVar5 == 0;
  }
  else {
    bVar4 = false;
  }
  if ((char)bStack_61 < '\0') {
    __ZdlPv(ppppuStack_78);
    uVar7 = (uint)uStack_50._7_1_;
  }
  if ((uVar7 >> 7 & 1) != 0) {
    __ZdlPv(ppppuStack_60);
  }
  if (bVar4) {
    FUN_109371fe4(param_1,param_2);
    return;
  }
  uVar6 = 0x10;
  ___cxa_allocate_exception(0x10);
  if (*(char *)(param_1 + 0x34f) < '\0') {
    func_0x000107c3192c(&ppppuStack_60,*(undefined8 *)(param_1 + 0x338),
                        *(undefined8 *)(param_1 + 0x340));
  }
  else {
    uStack_58 = *(ulong *)(param_1 + 0x340);
    ppppuStack_60 = *(undefined8 *****)(param_1 + 0x338);
    uStack_50 = *(undefined8 *)(param_1 + 0x348);
  }
  FUN_1093722b0(&ppppuStack_78);
  FUN_1093713f8(uVar6,&ppppuStack_60,&ppppuStack_78);
  ___cxa_throw(uVar6,&PTR_DAT_110af43e0,FUN_109371834);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109371c1c);
  (*pcVar3)();
}



/* Entry: 109371c8c; end: 109371ce3;  */

undefined8 * FUN_109371c8c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x350;
  __Znwm();
  FUN_109371cf8();
  *param_1 = uVar1;
  return param_1;
}



/* Entry: 109371ce4; end: 109371cf7;  */

long * FUN_109371ce4(long param_1)

{
  code *pcVar1;
  long *plVar2;
  undefined1 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  long *plVar9;
  ulong unaff_x23;
  undefined8 auStack_408 [2];
  char cStack_3f1;
  undefined8 auStack_3f0 [2];
  char cStack_3d9;
  undefined *puStack_3d8;
  undefined1 auStack_3d0 [200];
  undefined1 auStack_308 [192];
  long lStack_248;
  long *plStack_240;
  long *plStack_238;
  long *plStack_230;
  long *plStack_228;
  undefined1 **ppuStack_220;
  code *pcStack_218;
  undefined8 auStack_210 [2];
  char cStack_1f9;
  undefined8 auStack_1f8 [2];
  char cStack_1e1;
  undefined1 auStack_1e0 [200];
  undefined1 auStack_118 [192];
  long lStack_58;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  plVar2 = *(long **)(param_1 + 0x18);
  lVar7 = 1;
  _longjmp();
  pcStack_18 = FUN_109371cf8;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = plVar2 + 2;
  *plVar5 = (long)(plVar2 + 0x51);
  plVar2[0x66] = lVar7;
  plVar2[0x67] = 0;
  plVar2[0x69] = 0;
  plVar2[0x68] = 0;
  plVar2[0x52] = (long)&UNK_1081d50e4;
  plVar2[0x53] = (long)&UNK_1081d5148;
  plVar2[0x54] = (long)&UNK_1081d51c4;
  plVar2[0x55] = (long)&UNK_1081d5294;
  plVar9 = plVar2 + 0x67;
  *(undefined4 *)((long)plVar2 + 0x304) = 0;
  plVar2[0x61] = 0;
  *(undefined4 *)(plVar2 + 0x56) = 0;
  plVar2[0x62] = (long)&PTR_DAT_110a2f080;
  *(undefined4 *)(plVar2 + 99) = 0x80;
  plVar2[0x65] = 0;
  plVar2[100] = 0;
  plVar2[0x51] = (long)FUN_109371ce4;
  puVar3 = auStack_118;
  plVar2[5] = (long)puVar3;
  puStack_20 = &stack0xfffffffffffffff0;
  _setjmp();
  if ((int)puVar3 != 0) {
    (**(code **)(*plVar5 + 0x18))(plVar5,auStack_1e0);
    uVar6 = 0x10;
    ___cxa_allocate_exception(0x10);
    func_0x000107c31940(auStack_210,&UNK_10f566f58);
    FUN_109259240(auStack_1f8,auStack_210,auStack_1e0);
    FUN_1093712f4(uVar6,auStack_1f8);
    ___cxa_throw(uVar6,&PTR_DAT_110af4380,FUN_1093717d4);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x109371f58);
    (*pcVar1)();
  }
  func_0x0001081c63a4(plVar5,0x3e,0x278);
  lVar7 = plVar2[0x66];
  plVar4 = plVar5;
  (**(code **)plVar2[3])(plVar5,0,0x48);
  plVar4[2] = (long)FUN_109372190;
  plVar4[3] = (long)FUN_10937219c;
  plVar4[4] = (long)FUN_10937225c;
  plVar4[5] = (long)&UNK_1081ceb8c;
  plVar4[6] = (long)FUN_1093722ac;
  plVar4[7] = lVar7;
  plVar2[7] = (long)plVar4;
  *plVar4 = (long)plVar4 + 0x41;
  plVar4[1] = 0;
  *(undefined1 *)(plVar4 + 8) = 0;
  puVar8 = (undefined *)0x1;
  func_0x0001081c654c(plVar5);
  plVar4 = plVar5;
  func_0x0001081c69c0();
  *plVar2 = plVar2[0x13];
  *(int *)(plVar2 + 1) = (int)plVar2[0x14];
  if ((int)plVar2[0x14] == 1) {
    if (*(char *)((long)plVar2 + 0x34f) < '\0') {
      plVar2[0x68] = 0xd;
      plVar9 = (long *)plVar2[0x67];
    }
    else {
      *(undefined1 *)((long)plVar2 + 0x34f) = 0xd;
    }
    *plVar9 = 0x64656e6769736e75;
    *(undefined8 *)((long)plVar9 + 5) = 0x726168632064656e;
    *(undefined1 *)((long)plVar9 + 0xd) = 0;
  }
  else {
    puVar8 = &UNK_10f566f7c;
    plVar4 = plVar9;
    func_0x000107c2c4d8(plVar9,&UNK_10f566f7c,0x17);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    if (cStack_1e1 < '\0') {
      __ZdlPv(auStack_1f8[0]);
    }
    if (cStack_1f9 < '\0') {
      __ZdlPv(auStack_210[0]);
    }
    if ((unaff_x23 & 1) != 0) {
      ___cxa_free_exception(plVar5);
    }
    if (*(char *)((long)plVar2 + 0x34f) < '\0') {
      __ZdlPv(*plVar9);
    }
    plVar5 = plVar4;
    __Unwind_Resume();
    pcStack_218 = FUN_109371fe4;
    lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar3 = auStack_308;
    plVar5[5] = (long)puVar3;
    puStack_3d8 = puVar8;
    plStack_240 = plVar4;
    plStack_238 = plVar4;
    plStack_230 = plVar9;
    plStack_228 = plVar2;
    ppuStack_220 = &puStack_20;
    _setjmp();
    if ((int)puVar3 != 0) {
      (**(code **)(plVar5[2] + 0x18))(plVar5 + 2,auStack_3d0);
      uVar6 = 0x10;
      ___cxa_allocate_exception(0x10);
      func_0x000107c31940(auStack_408,&UNK_10f566f58);
      FUN_109259240(auStack_3f0,auStack_408,auStack_3d0);
      FUN_1093712f4(uVar6,auStack_3f0);
      ___cxa_throw(uVar6,&PTR_DAT_110af4380,FUN_1093717d4);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1093720d0);
      (*pcVar1)();
    }
    plVar9 = plVar5 + 2;
    func_0x0001081c6dd0(plVar9,&puStack_3d8,1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_248) {
      ___stack_chk_fail();
      if (cStack_3d9 < '\0') {
        __ZdlPv(auStack_3f0[0]);
      }
      if (cStack_3f1 < '\0') {
        __ZdlPv(auStack_408[0]);
      }
      if (((ulong)plVar4 & 1) != 0) {
        ___cxa_free_exception(plVar5);
      }
      __Unwind_Resume();
      __Unwind_Resume();
      func_0x0001081c68b0(plVar9 + 2);
      if (plVar9[3] != 0) {
        (**(code **)(plVar9[3] + 0x50))(plVar9 + 2);
      }
      plVar9[3] = 0;
      *(undefined4 *)((long)plVar9 + 0x34) = 0;
      if (*(char *)((long)plVar9 + 0x34f) < '\0') {
        __ZdlPv(plVar9[0x67]);
      }
      return plVar9;
    }
    return plVar9;
  }
  return plVar2;
}


