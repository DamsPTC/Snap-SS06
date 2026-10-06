/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10831801c; end: 10831809b;  */

/* WARNING: Removing unreachable block (ram,0x000108318050) */

undefined4 FUN_10831801c(void)

{
  int in_w3;
  long in_x4;
  undefined4 uVar1;
  
  if (in_w3 == 2) {
    FUN_1082b9108();
    uVar1 = *(undefined4 *)(in_x4 + 0x28);
  }
  else {
    FUN_1082b8a50();
    uVar1 = *(undefined4 *)(in_x4 + 0x1c);
  }
  return uVar1;
}



/* Entry: 10831809c; end: 108318137;  */

void FUN_10831809c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 *in_x4;
  
  uVar1 = 0x78;
  FUN_1082edb50();
  FUN_1082edbe4(*in_x4,in_x4[1],in_x4[2],in_x4[3]);
  *param_1 = uVar1;
  return;
}



/* Entry: 108318138; end: 108318187;  */

void FUN_108318138(long *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  
  uStack_28 = param_6;
  uStack_24 = param_5;
  uStack_20 = param_4;
  uStack_1c = param_3;
  uStack_18 = param_2;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x30))(param_1,&uStack_18,&uStack_1c,&uStack_20,&uStack_24,&uStack_28);
    return;
  }
  func_0x000104bfeb48();
  func_0x000108319844();
  if (param_1 != (long *)0x0) {
    FUN_108318218();
  }
  return;
}



/* Entry: 108318188; end: 1083181ab;  */

void FUN_108318188(long param_1)

{
  func_0x000108319844();
  if (param_1 != 0) {
    FUN_108318218();
  }
  return;
}



/* Entry: 1083181ac; end: 1083181b3;  */

long FUN_1083181ac(long *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 1) & 0xfffffff8;
  *(uint *)(param_1 + 1) = uVar1;
  if ((int)uVar1 < 0xe0) {
    FUN_1083163bc(param_1,0xe0);
    uVar1 = *(uint *)(param_1 + 1);
  }
  *(uint *)(param_1 + 1) = uVar1 - 0xe0;
  return *param_1 - (long)(int)uVar1;
}



/* Entry: 1083181b4; end: 108318217;  */

undefined8 *
FUN_1083181b4(undefined8 *param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = &PTR_FUN_110a3bc98;
  param_1[1] = 0;
  param_1[2] = &PTR_DAT_110a3bd40;
  *(undefined1 *)(param_1 + 3) = param_2;
  _memcpy(param_1 + 4,param_3,0x50);
  FUN_10831467c(param_1 + 0xe,param_4);
  return param_1;
}



/* Entry: 108318218; end: 10831823b;  */

undefined8 * FUN_108318218(undefined8 *param_1)

{
  func_0x000108314830(param_1 + 0xe);
  *param_1 = &PTR_DAT_110a3bad0;
  FUN_108314eb8(param_1 + 1);
  return param_1;
}



/* Entry: 10831823c; end: 10831824f;  */

void FUN_10831823c(void)

{
  FUN_108318218();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108318250; end: 10831829f;  */

void FUN_108318250(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  
  *param_4 = 0;
  uVar1 = 0x100;
  if (*(uint *)(param_1 + 0x20) != 1) {
    uVar1 = 0;
  }
  func_0x000108319748(uVar1 | (ulong)*(uint *)(param_1 + 0x20) << 0x20);
  func_0x000108319690();
  return;
}



/* Entry: 1083182a0; end: 1083182cb;  */

int FUN_1083182a0(long param_1)

{
  return (*(int *)(param_1 + 0x68) + *(int *)(param_1 + 0x88)) * 8 + 0xe0;
}



/* Entry: 1083182cc; end: 10831830b;  */

void FUN_1083182cc(long param_1)

{
  long *unaff_x19;
  long unaff_x20;
  
  func_0x00010831975c();
  FUN_10831b8e0(param_1 + 0x20);
  func_0x000108314444(unaff_x20 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x000108318308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x19 + 0x20))();
  return;
}



/* Entry: 10831830c; end: 10831833f;  */

void FUN_10831830c(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uStack_48;
  
  plVar5 = (long *)(param_1 + 0x90);
  if (*plVar5 == 0) {
    lVar3 = param_1 + 0x70;
    FUN_108404a94();
    FUN_108315754(&uStack_48,param_2,lVar3 + 0x68);
    uVar2 = uStack_48;
    uStack_48 = 0;
    FUN_108314a44(plVar5,uVar2);
    FUN_108314884(uStack_48);
    plVar1 = *(long **)(param_1 + 0x80);
    for (lVar6 = *(long *)(param_1 + 0x88) << 3; lVar6 != 0; lVar6 = lVar6 + -8) {
      lVar4 = *plVar5;
      FUN_108315ac8(lVar4,(int)*plVar1);
      *plVar1 = lVar4;
      plVar1 = plVar1 + 1;
    }
    if (*(long **)(lVar3 + 0x188) != (long *)0x0) {
      (**(code **)(**(long **)(lVar3 + 0x188) + 0x18))();
    }
    FUN_108404b40(param_1 + 0x70);
  }
  return;
}



/* Entry: 108318340; end: 108318487;  */

void FUN_108318340(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10)

{
  long lVar1;
  undefined8 *extraout_x8;
  undefined8 extraout_x9;
  undefined8 uStack_e8;
  undefined1 auStack_dc [4];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [40];
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined8 uStack_74;
  undefined8 uStack_6c;
  
  lVar1 = param_10;
  func_0x000108319854();
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 1;
  uStack_a0 = 0x3f800000;
  uStack_6c = 0x3f8000003f800000;
  uStack_74 = 0x3f8000003f800000;
  FUN_10831801c(lVar1,extraout_x9);
  uStack_9c = param_2;
  uStack_98 = param_3;
  uStack_94 = param_4;
  FUN_1082c225c(param_10);
  lVar1 = param_5 + 0x10;
  func_0x0001083197ac(lVar1,param_7);
  FUN_1082eddd4();
  func_0x0001083197ac(auStack_c8,param_7);
  FUN_108317fd0();
  FUN_10831baa4(auStack_dc,param_5 + 0x20,auStack_c8);
  FUN_10831809c(&uStack_e8,*(undefined4 *)(param_5 + 0x20),1,*(undefined4 *)(param_5 + 0x88),
                auStack_d8,lVar1,param_10 + 0x20,&uStack_90);
  *extraout_x8 = param_6;
  extraout_x8[1] = uStack_e8;
  func_0x00010827ee54(&uStack_90);
  return;
}



/* Entry: 108318488; end: 1083184bf;  */

void FUN_108318488(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x25;
  
  func_0x0001083195c8();
  func_0x00010831963c(unaff_x25 + 0x20,param_2,param_3,*(undefined8 *)(unaff_x25 + 0x80),
                      *(undefined8 *)(unaff_x25 + 0x88));
  return;
}



/* Entry: 1083184c0; end: 10831854b;  */

void FUN_1083184c0(long param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  long *plVar1;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  long lStack_18;
  
  uStack_24 = *(undefined4 *)(param_1 + 0x20);
  plVar1 = *(long **)(param_4 + 0x18);
  lStack_18 = param_1 + 0x70;
  uStack_28 = 1;
  uStack_20 = param_3;
  uStack_1c = param_2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,&lStack_18,&uStack_1c,&uStack_20,&uStack_24,&uStack_28);
    return;
  }
  func_0x000104bfeb48();
  func_0x000108319844();
  if (plVar1 != (long *)0x0) {
    FUN_108318218();
  }
  return;
}



/* Entry: 10831854c; end: 10831858b;  */

void FUN_10831854c(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  
  func_0x000108319698();
  *param_1 = &PTR_SUB_110a3bdf0;
  param_1[1] = 0;
  FUN_10831866c(param_1 + 2);
  *unaff_x19 = param_1;
  return;
}



/* Entry: 10831858c; end: 108318637;  */

void FUN_10831858c(long param_1)

{
  func_0x000108319844();
  if (param_1 != 0) {
    func_0x0001083186b4();
  }
  return;
}



/* Entry: 108318638; end: 10831866b;  */

long FUN_108318638(long *param_1,uint param_2)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  
  if (param_2 < 0x7fffeff) {
    iVar1 = param_2 << 4;
    if (param_2 == 0) {
      iVar1 = 1;
    }
    uVar3 = *(uint *)(param_1 + 1) & 0xfffffff8;
    *(uint *)(param_1 + 1) = uVar3;
    if ((int)uVar3 < iVar1) {
      FUN_1083163bc(param_1,iVar1);
      uVar3 = *(uint *)(param_1 + 1);
    }
    *(uint *)(param_1 + 1) = uVar3 - iVar1;
    return *param_1 - (long)(int)uVar3;
  }
  FUN_108319538();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10831866c);
  (*pcVar2)();
}



/* Entry: 10831866c; end: 1083186d7;  */

undefined8 * FUN_10831866c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  *param_1 = uVar2;
  param_1[1] = uVar1;
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined1 *)((long)param_1 + 0x24) = *(undefined1 *)((long)param_2 + 0x24);
  func_0x0001083198c8();
  *(undefined2 *)(param_1 + 7) = 0;
  return param_1;
}



/* Entry: 1083186d8; end: 1083186eb;  */

void FUN_1083186d8(void)

{
  func_0x0001083186b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083186ec; end: 1083189bb;  */

void FUN_1083186ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  char cVar6;
  long *unaff_x19;
  long unaff_x20;
  long lVar7;
  long lVar8;
  undefined8 in_stack_fffffffffffffee0;
  undefined1 auStack_110 [40];
  long *plStack_e8;
  float fStack_e0;
  undefined4 uStack_dc;
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [40];
  char cStack_a0;
  undefined7 uStack_9f;
  long lStack_98;
  long *plStack_90;
  uint uStack_58;
  
  func_0x000108319854();
  func_0x00010831975c();
  pcVar1 = (char *)(param_1 + 0x48);
  cStack_a0 = *pcVar1;
  cVar6 = cStack_a0;
  if (cStack_a0 != '\0') goto LAB_108318764;
  func_0x000108319718();
  if ((int)param_1 == 0) {
    do {
      cVar6 = *pcVar1;
LAB_108318764:
    } while (cVar6 != '\x02');
  }
  else {
    lVar7 = unaff_x20 + 0x38;
    FUN_108404a94();
    if (lVar7 != 0) {
      FUN_1083a1340();
      FUN_108404b40(unaff_x20 + 0x38);
      *(undefined1 *)(unaff_x20 + 0x49) = 1;
    }
    *pcVar1 = '\x02';
  }
  FUN_108375f34(&cStack_a0,param_3);
  plVar5 = plStack_90;
  uStack_58 = uStack_58 & 0xfffffffe | (uint)*(byte *)(unaff_x20 + 0x34);
  func_0x0001083198f4(auStack_c8,*(undefined4 *)(unaff_x20 + 0x30));
  func_0x0001083197ac(auStack_c8);
  FUN_108363ef4();
  FUN_1083a6264(0x3f800000,auStack_d8,&cStack_a0);
  if (lStack_98 == 0 && CONCAT71(uStack_9f,cStack_a0) == 0) {
    uVar3 = 0;
    FUN_10827cbe0();
    if ((uVar3 & 1) == 0) {
      iVar2 = (int)auStack_d8;
      FUN_10828782c();
      if (iVar2 == 0) goto LAB_1083188d0;
    }
    if (plVar5 != (long *)0x0) {
      plVar4 = plVar5;
      (**(code **)(*plVar5 + 0x58))(plVar5,0);
      if ((int)plVar4 == 0) goto LAB_1083188d0;
      (**(code **)(*plVar5 + 0x58))(plVar5,&fStack_e0);
      if ((int)plVar5 != 0) {
        FUN_10833b158(&plStack_e8,fStack_e0 / *(float *)(unaff_x20 + 0x30),uStack_dc,1);
        plVar5 = plStack_90;
        plStack_90 = plStack_e8;
        plStack_e8 = (long *)0x0;
        FUN_108376540(plVar5);
        FUN_10810c718(&plStack_e8);
      }
    }
    for (lVar7 = *(long *)(unaff_x20 + 0x18); lVar7 != 0; lVar7 = lVar7 + -1) {
      func_0x000108319768();
      FUN_108363ef4(auStack_110);
      if (unaff_x19 != (long *)0x0) {
        *(int *)(unaff_x19 + 0x18c) = (int)unaff_x19[0x18c] + 1;
        *(int *)(unaff_x19[0x188] + 0x58) = *(int *)(unaff_x19[0x188] + 0x58) + 1;
      }
      FUN_10833e2b0();
      (**(code **)(*unaff_x19 + 0xe0))();
      FUN_10815b978(&stack0xfffffffffffffee0);
    }
  }
  else {
LAB_1083188d0:
    lVar7 = *(long *)(unaff_x20 + 0x10);
    for (lVar8 = *(long *)(unaff_x20 + 0x18); lVar8 != 0; lVar8 = lVar8 + -1) {
      func_0x000108319768();
      FUN_108363ef4(auStack_110);
      FUN_108376ad8(&stack0xfffffffffffffee0);
      FUN_1083796e4(lVar7,auStack_110,&stack0xfffffffffffffee0,1);
      (**(code **)(*unaff_x19 + 0xe0))();
      FUN_10837ca5c(in_stack_fffffffffffffee0);
      lVar7 = lVar7 + 0x10;
    }
  }
  FUN_108375e94(&cStack_a0);
  return;
}



/* Entry: 1083189bc; end: 1083189e7;  */

int FUN_1083189bc(long param_1)

{
  return *(int *)(param_1 + 0x18) * 0x10 + *(int *)(param_1 + 0x28) * 8 + 0x50;
}



/* Entry: 1083189e8; end: 108318a43;  */

void FUN_1083189e8(long param_1)

{
  long unaff_x20;
  long lVar1;
  
  func_0x00010831975c();
  FUN_108404bbc(param_1 + 0x38);
  func_0x000108319560();
  func_0x00010831980c(*(undefined4 *)(unaff_x20 + 0x30));
  func_0x0001083197fc();
  for (lVar1 = *(long *)(unaff_x20 + 0x18) << 4; lVar1 != 0; lVar1 = lVar1 + -0x10) {
    func_0x000108319560();
  }
  return;
}



/* Entry: 108318a44; end: 108318a83;  */

void FUN_108318a44(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  
  func_0x000108319698();
  *param_1 = &PTR_SUB_110a3be58;
  param_1[1] = 0;
  FUN_108318af0(param_1 + 2);
  *unaff_x19 = param_1;
  return;
}



/* Entry: 108318a84; end: 108318abb;  */

undefined4 *
FUN_108318a84(undefined4 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  *param_2 = param_1;
  *(undefined8 *)(param_2 + 2) = param_3;
  *(undefined8 *)(param_2 + 4) = param_4;
  *(undefined8 *)(param_2 + 6) = param_5;
  *(undefined8 *)(param_2 + 8) = param_6;
  FUN_108404c20(param_2 + 10,param_7);
  *(undefined1 *)(param_2 + 0xe) = 0;
  return param_2;
}



/* Entry: 108318abc; end: 108318aef;  */

long FUN_108318abc(long *param_1,uint param_2)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  
  if (param_2 < 0xffffdff) {
    iVar1 = param_2 << 3;
    if (param_2 == 0) {
      iVar1 = 1;
    }
    uVar3 = *(uint *)(param_1 + 1) & 0xfffffff8;
    *(uint *)(param_1 + 1) = uVar3;
    if ((int)uVar3 < iVar1) {
      FUN_1083163bc(param_1,iVar1);
      uVar3 = *(uint *)(param_1 + 1);
    }
    *(uint *)(param_1 + 1) = uVar3 - iVar1;
    return *param_1 - (long)(int)uVar3;
  }
  FUN_108319538();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x108318af0);
  (*pcVar2)();
}



/* Entry: 108318af0; end: 108318b57;  */

undefined4 * FUN_108318af0(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 6) = uVar1;
  func_0x0001083198c8();
  *(undefined1 *)(param_1 + 0xe) = 0;
  return param_1;
}



/* Entry: 108318b58; end: 108318b6b;  */

void FUN_108318b58(void)

{
  func_0x000108318b2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108318b6c; end: 108318d03;  */

void FUN_108318b6c(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,long param_6,undefined8 param_7)

{
  undefined4 *puVar1;
  code *pcVar2;
  char cVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  long lStack_c0;
  undefined4 uStack_b8;
  undefined8 auStack_b0 [5];
  char cStack_88;
  undefined7 uStack_87;
  
  func_0x000108319854();
  cStack_88 = *(char *)(param_5 + 0x48);
  cVar3 = cStack_88;
  if (cStack_88 != '\0') goto LAB_108318bdc;
  lVar6 = param_5;
  func_0x000108319718();
  if ((int)lVar6 == 0) {
    do {
      cVar3 = *(char *)(param_5 + 0x48);
LAB_108318bdc:
    } while (cVar3 != '\x02');
  }
  else {
    FUN_108404a94(param_5 + 0x38);
    FUN_1083a1400();
    *(undefined1 *)(param_5 + 0x48) = 2;
  }
  func_0x0001083198f4(&cStack_88,*(undefined4 *)(param_5 + 0x10));
  func_0x0001083197ac(&cStack_88);
  FUN_108363ef4();
  uVar5 = 0;
  puVar1 = *(undefined4 **)(param_5 + 0x18);
  lVar6 = *(long *)(param_5 + 0x20) << 3;
  while( true ) {
    if (lVar6 == 0) {
      return;
    }
    if (*(ulong *)(param_5 + 0x30) <= uVar5) break;
    lVar4 = *(long *)(*(long *)(param_5 + 0x28) + uVar5 * 8);
    if (lVar4 == 0) {
      lVar4 = param_5 + 0x38;
      FUN_108404a94();
      if (*(long **)(lVar4 + 0x188) != (long *)0x0) {
        (**(code **)(**(long **)(lVar4 + 0x188) + 0x18))();
      }
    }
    else {
      auStack_b0[0] = CONCAT71(uStack_87,cStack_88);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      FUN_108363ef4(auStack_b0);
      uStack_b8 = 0;
      if (param_6 != 0) {
        uStack_b8 = *(undefined4 *)(param_6 + 0xc60);
      }
      lStack_c0 = param_6;
      func_0x00010834cbc8(lVar4);
      uStack_d0 = uVar7;
      uStack_cc = uVar8;
      uStack_c8 = param_3;
      uStack_c4 = param_4;
      FUN_108189c38(auStack_b0,&uStack_d0,1);
      FUN_10833c3b4(param_6,&uStack_d0,param_7);
      FUN_10834cb04(lVar4,param_6,auStack_b0);
      FUN_10815b978(&lStack_c0);
    }
    uVar5 = uVar5 + 1;
    puVar1 = puVar1 + 2;
    lVar6 = lVar6 + -8;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x108318cf4);
  (*pcVar2)();
}



/* Entry: 108318d04; end: 108318d2f;  */

int FUN_108318d04(long param_1)

{
  return (*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x20)) * 8 + 0x50;
}



/* Entry: 108318d30; end: 108318d83;  */

void FUN_108318d30(long param_1)

{
  long unaff_x20;
  long lVar1;
  
  func_0x00010831975c();
  FUN_108404bbc(param_1 + 0x38);
  func_0x00010831980c(*(undefined4 *)(unaff_x20 + 0x10));
  func_0x0001083197fc();
  for (lVar1 = *(long *)(unaff_x20 + 0x30) << 3; lVar1 != 0; lVar1 = lVar1 + -8) {
    func_0x000108319560();
  }
  return;
}



/* Entry: 108318d84; end: 108318dbf;  */

uint FUN_108318d84(float param_1,float param_2,int param_3,undefined8 param_4)

{
  return (int)(((param_1 - (float)(int)param_1) + 1.0) * 4.0) & (uint)param_4 | param_3 << 2 |
         (int)(((param_2 - (float)(int)param_2) + 1.0) * 1048576.0) & (uint)((ulong)param_4 >> 0x20)
  ;
}



/* Entry: 108318dc0; end: 108318e0b;  */

undefined1  [16] FUN_108318dc0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  
  if (param_3 == 0) {
    param_1 = 0;
  }
  else {
    FUN_1083194cc(param_1,param_3);
    _memcpy();
  }
  auVar1._8_8_ = param_3;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 108318e0c; end: 108318e83;  */

long FUN_108318e0c(long param_1)

{
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    func_0x0001083196b0();
  }
  return param_1;
}



/* Entry: 108318e84; end: 108318e8b;  */

long FUN_108318e84(long *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 1) & 0xfffffff8;
  *(uint *)(param_1 + 1) = uVar1;
  if ((int)uVar1 < 0x38) {
    FUN_1083163bc(param_1,0x38);
    uVar1 = *(uint *)(param_1 + 1);
  }
  *(uint *)(param_1 + 1) = uVar1 - 0x38;
  return *param_1 - (long)(int)uVar1;
}



/* Entry: 108318e8c; end: 108318ebb;  */

void FUN_108318e8c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0x7fffffff;
  uStack_20 = 2;
  FUN_10840fe24(&uStack_20,param_1);
  return;
}



/* Entry: 108318ebc; end: 108318f37;  */

long * FUN_108318ebc(long *param_1,ulong param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  code *pcVar5;
  char in_NG;
  char in_OV;
  char cVar6;
  char cVar7;
  undefined1 uVar8;
  long *plVar9;
  uint uVar10;
  int iVar11;
  uint extraout_w8;
  int extraout_w8_00;
  long *unaff_x19;
  int unaff_w20;
  
  func_0x000108319974();
  if (in_NG != in_OV) {
    uVar2 = extraout_w8 ^ 0x7fffffff;
    uVar10 = (uint)param_2;
    cVar6 = SBORROW4(uVar10,uVar2);
    cVar7 = (int)(uVar10 - uVar2) < 0;
    uVar8 = uVar10 == uVar2;
    if (!(bool)uVar8 && (int)uVar2 <= (int)uVar10) {
      func_0x00010bdb1a68();
      iVar11 = (int)param_2;
      func_0x000108319910();
      if (cVar7 != cVar6) {
        iVar11 = extraout_w8_00;
        if (extraout_w8_00 == 0) {
          func_0x000108318f94(0x3ff0000000000000);
          iVar11 = (int)unaff_x19[1];
        }
        func_0x000108318f94(0x3ff8000000000000);
        lVar4 = unaff_x19[1];
        *(int *)(unaff_x19 + 1) = (int)lVar4 + (unaff_w20 - iVar11);
        return (long *)(*unaff_x19 + (long)(int)lVar4 * 2);
      }
      if (!(bool)uVar8 && cVar7 == cVar6) {
        uVar10 = *(uint *)(unaff_x19 + 1);
        uVar3 = uVar10 - iVar11;
        uVar2 = uVar10;
        if ((int)uVar3 <= (int)uVar10) {
          uVar2 = uVar3;
        }
        if (uVar10 - uVar2 <= (uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU))) {
          *(uint *)(unaff_x19 + 1) = uVar3;
          return unaff_x19;
        }
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10831900c);
        (*pcVar5)();
      }
      return param_1;
    }
    plVar9 = param_1;
    func_0x0001083197c8();
    if ((int)param_1[1] != 0) {
      func_0x00010831965c();
    }
    pbVar1 = (byte *)((long)param_1 + 0xc);
    param_1 = plVar9;
    if ((*pbVar1 & 1) != 0) {
      func_0x0001083196b0();
      param_1 = plVar9;
    }
    param_2 = param_2 >> 2;
    if (0x7ffffffe < param_2) {
      param_2 = 0x7fffffff;
    }
    func_0x0001083195f0(param_2);
  }
  return param_1;
}



/* Entry: 108318f38; end: 108318fdf;  */

long * FUN_108318f38(long *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  code *pcVar5;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  int extraout_w8;
  int iVar6;
  long *unaff_x19;
  int unaff_w20;
  
  func_0x000108319910();
  if (in_NG != in_OV) {
    iVar6 = extraout_w8;
    if (extraout_w8 == 0) {
      func_0x000108318f94(0x3ff0000000000000);
      iVar6 = (int)unaff_x19[1];
    }
    func_0x000108318f94(0x3ff8000000000000);
    lVar4 = unaff_x19[1];
    *(int *)(unaff_x19 + 1) = (int)lVar4 + (unaff_w20 - iVar6);
    return (long *)(*unaff_x19 + (long)(int)lVar4 * 2);
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    uVar2 = *(uint *)(unaff_x19 + 1);
    uVar3 = uVar2 - param_2;
    uVar1 = uVar2;
    if ((int)uVar3 <= (int)uVar2) {
      uVar1 = uVar3;
    }
    if (uVar2 - uVar1 <= (uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU))) {
      *(uint *)(unaff_x19 + 1) = uVar3;
      return unaff_x19;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10831900c);
    (*pcVar5)();
  }
  return param_1;
}



/* Entry: 108318fe0; end: 10831900b;  */

void FUN_108318fe0(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  uVar3 = uVar2 - param_2;
  uVar1 = uVar2;
  if ((int)uVar3 <= (int)uVar2) {
    uVar1 = uVar3;
  }
  if (uVar2 - uVar1 <= (uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU))) {
    *(uint *)(param_1 + 8) = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10831900c);
  (*pcVar4)();
}



/* Entry: 10831900c; end: 10831905f;  */

void FUN_10831900c(long param_1,undefined8 param_2,ulong param_3)

{
  if (*(int *)(param_1 + 8) != 0) {
    func_0x00010831965c(param_1,param_2,(long)*(int *)(param_1 + 8) << 1);
  }
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    func_0x0001083196b0();
  }
  param_3 = param_3 >> 1;
  if (0x7ffffffe < param_3) {
    param_3 = 0x7fffffff;
  }
  func_0x0001083195f0(param_3);
  return;
}



/* Entry: 108319060; end: 108319083;  */

undefined1 ** FUN_108319060(long *param_1,int param_2)

{
  long lVar1;
  undefined1 **ppuVar2;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  if (param_2 <= (int)(*(uint *)(param_1 + 1) ^ 0x7fffffff)) {
    ppuVar2 = &puStack_20;
    pcStack_18 = (code *)0x7fffffff;
    puStack_20 = (undefined1 *)0x2;
    FUN_10840fe24(&puStack_20,*(uint *)(param_1 + 1) + param_2);
    return ppuVar2;
  }
  func_0x00010bdb1a68();
  pcStack_18 = FUN_108319084;
  puStack_20 = &stack0xfffffffffffffff0;
  func_0x000108318f94(0x3ff8000000000000);
  lVar1 = param_1[1];
  *(int *)(param_1 + 1) = (int)lVar1 + param_2;
  return (undefined1 **)(undefined1 *)(*param_1 + (long)(int)lVar1 * 2);
}



/* Entry: 108319084; end: 108319117;  */

long FUN_108319084(long *param_1,int param_2)

{
  long lVar1;
  
  func_0x000108318f94(0x3ff8000000000000);
  lVar1 = param_1[1];
  *(int *)(param_1 + 1) = (int)lVar1 + param_2;
  return *param_1 + (long)(int)lVar1 * 2;
}



/* Entry: 108319118; end: 108319143;  */

void FUN_108319118(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  uVar3 = uVar2 - param_2;
  uVar1 = uVar2;
  if ((int)uVar3 <= (int)uVar2) {
    uVar1 = uVar3;
  }
  if (uVar2 - uVar1 <= (uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU))) {
    *(uint *)(param_1 + 8) = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x108319144);
  (*pcVar4)();
}



/* Entry: 108319144; end: 1083191b7;  */

long * FUN_108319144(undefined8 param_1,long *param_2,undefined8 param_3)

{
  byte *pbVar1;
  long *plVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  char in_NG;
  char in_OV;
  long *plVar6;
  int iVar7;
  undefined4 uVar8;
  uint extraout_w8;
  
  uVar8 = (undefined4)((ulong)param_3 >> 0x20);
  iVar7 = (int)param_3;
  func_0x000108319974();
  if (in_NG != in_OV) {
    if ((int)(extraout_w8 ^ 0x7fffffff) < iVar7) {
      func_0x00010bdb1a68();
      plVar6 = (long *)*param_2;
      if (plVar6 != (long *)0x0) {
        plVar2 = plVar6 + 1;
        do {
          iVar7 = (int)*plVar2 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = iVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
      }
      return param_2;
    }
    plVar6 = param_2;
    func_0x0001083197c8(param_1,1);
    uVar3 = CONCAT44(uVar8,iVar7);
    if ((int)param_2[1] != 0) {
      func_0x00010831965c();
    }
    pbVar1 = (byte *)((long)param_2 + 0xc);
    param_2 = plVar6;
    if ((*pbVar1 & 1) != 0) {
      func_0x0001083196b0();
      param_2 = plVar6;
    }
    if (0x7ffffffe < uVar3) {
      uVar3 = 0x7fffffff;
    }
    func_0x0001083195f0(uVar3);
  }
  return param_2;
}



/* Entry: 1083191b8; end: 108319203;  */

long * FUN_1083191b8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 108319204; end: 108319353;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_108319204(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  long lVar1;
  int iVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  float fVar21;
  undefined1 uStack_2f1;
  long lStack_2f0;
  undefined1 *puStack_2e8;
  undefined1 **ppuStack_2e0;
  code *pcStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined1 auStack_298 [16];
  long alStack_288 [2];
  undefined4 uStack_278;
  undefined1 uStack_274;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long lStack_238;
  long lStack_230;
  undefined1 auStack_228 [112];
  undefined8 uStack_1b8;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 auStack_138 [2];
  long lStack_128;
  long lStack_120;
  undefined4 uStack_118;
  undefined1 uStack_114;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [112];
  undefined8 uStack_58;
  undefined8 uVar22;
  
  puVar4 = param_1;
  func_0x0001083195b0();
  puVar20 = *(undefined8 **)puVar4[2];
  uStack_148 = puVar4[1];
  uStack_150 = *puVar4;
  uVar22 = *param_2;
  uVar10 = param_2[1];
  uVar16 = param_2[2];
  uStack_58 = extraout_x8;
  (**(code **)(**(long **)puVar4[3] + 0x58))(auStack_138);
  uVar17 = *(undefined8 *)param_1[4];
  uVar5 = uVar17;
  FUN_108318dc0(uVar17,uVar10,uVar16);
  uStack_114 = 1;
  uStack_108 = puVar20[1];
  uStack_110 = *puVar20;
  uStack_f8 = puVar20[3];
  uStack_100 = puVar20[2];
  uStack_f0 = puVar20[4];
  uStack_e0 = uStack_148;
  uStack_e8 = uStack_150;
  uStack_118 = param_3;
  uStack_d8 = uVar5;
  uStack_d0 = uVar10;
  FUN_1083143cc(auStack_c8,auStack_138,uVar22,uVar16,uVar17);
  puVar14 = &uStack_118;
  FUN_108317a04(&lStack_120,uVar17,puVar14,auStack_c8);
  uVar13 = SUB84(puVar14,0);
  lStack_128 = lStack_120;
  lStack_120 = 0;
  FUN_108317a78(&lStack_120);
  func_0x000108314830(auStack_c8);
  plVar11 = &lStack_128;
  func_0x000108316720(puVar20 + 5);
  if (lStack_128 != 0) {
    func_0x00010831959c();
  }
  FUN_108314574();
  func_0x000108319570(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000108314830(auStack_c8);
  puVar4 = auStack_138;
  FUN_108314574();
  func_0x0001083195a8();
  pcStack_158 = FUN_108319354;
  puVar20 = puVar4;
  puStack_160 = &stack0xfffffffffffffff0;
  func_0x0001083195b0();
  lVar15 = *(long *)puVar20[2];
  lVar1 = *plVar11;
  lVar12 = plVar11[1];
  lVar18 = plVar11[2];
  uStack_1b8 = extraout_x8_00;
  (**(code **)(**(long **)puVar20[3] + 0x58))(auStack_298);
  puVar20 = (undefined8 *)puVar4[4];
  uStack_2b8 = puVar20[1];
  uStack_2c0 = *puVar20;
  uStack_2a8 = puVar20[3];
  uStack_2b0 = puVar20[2];
  uStack_2a0 = puVar20[4];
  uStack_2c8 = puVar4[1];
  uStack_2d0 = *puVar4;
  lVar19 = *(long *)puVar4[5];
  lVar6 = lVar19;
  FUN_108318dc0(lVar19,lVar12,lVar18);
  uStack_274 = 0;
  uStack_268 = uStack_2b8;
  uStack_270 = uStack_2c0;
  uStack_258 = uStack_2a8;
  uStack_260 = uStack_2b0;
  uStack_250 = uStack_2a0;
  uStack_240 = uStack_2c8;
  uStack_248 = uStack_2d0;
  uVar22 = uStack_2d0;
  uStack_278 = uVar13;
  lStack_238 = lVar6;
  lStack_230 = lVar12;
  FUN_1083143cc(auStack_228,auStack_298,lVar1,lVar18,lVar19);
  fVar21 = (float)uVar22;
  FUN_108365614(lVar15);
  FUN_1083181ac();
  uVar3 = fVar21 == 1.0;
  FUN_1083181b4();
  alStack_288[1] = 0;
  alStack_288[0] = lVar19;
  FUN_108318188(alStack_288 + 1);
  func_0x000108314830(auStack_228);
  uVar9 = (uint)alStack_288;
  func_0x000108316720(lVar15 + 0x28);
  if (alStack_288[0] != 0) {
    func_0x00010831959c();
  }
  puVar7 = auStack_298;
  FUN_108314574();
  func_0x000108319570(uStack_1b8);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  puVar8 = puVar7;
  func_0x0001083195a8();
  pcStack_2d8 = FUN_1083194cc;
  lStack_2f0 = lVar1;
  puStack_2e8 = puVar7;
  ppuStack_2e0 = &puStack_160;
  if (0xffffdfe < uVar9) {
    FUN_108319524(&uStack_2f1);
  }
  iVar2 = uVar9 << 3;
  if (uVar9 == 0) {
    iVar2 = 1;
  }
  FUN_1083149f0(puVar8,iVar2,4);
  return;
}



/* Entry: 108319354; end: 1083194cb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_108319354(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 extraout_x8;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  float fVar13;
  undefined1 uStack_1a1;
  undefined8 uStack_1a0;
  undefined1 *puStack_198;
  undefined1 *puStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [16];
  long alStack_138 [2];
  undefined4 uStack_128;
  undefined1 uStack_124;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [112];
  undefined8 uStack_68;
  undefined8 uVar14;
  
  puVar4 = param_1;
  func_0x0001083195b0();
  lVar10 = *(long *)puVar4[2];
  uVar1 = *param_2;
  uVar9 = param_2[1];
  uVar11 = param_2[2];
  uStack_68 = extraout_x8;
  (**(code **)(**(long **)puVar4[3] + 0x58))(auStack_148);
  puVar4 = (undefined8 *)param_1[4];
  uStack_168 = puVar4[1];
  uStack_170 = *puVar4;
  uStack_158 = puVar4[3];
  uStack_160 = puVar4[2];
  uStack_150 = puVar4[4];
  uStack_178 = param_1[1];
  uStack_180 = *param_1;
  lVar12 = *(long *)param_1[5];
  lVar5 = lVar12;
  FUN_108318dc0(lVar12,uVar9,uVar11);
  uStack_124 = 0;
  uStack_118 = uStack_168;
  uStack_120 = uStack_170;
  uStack_108 = uStack_158;
  uStack_110 = uStack_160;
  uStack_100 = uStack_150;
  uStack_f0 = uStack_178;
  uStack_f8 = uStack_180;
  uVar14 = uStack_180;
  uStack_128 = param_3;
  lStack_e8 = lVar5;
  uStack_e0 = uVar9;
  FUN_1083143cc(auStack_d8,auStack_148,uVar1,uVar11,lVar12);
  fVar13 = (float)uVar14;
  FUN_108365614(lVar10);
  FUN_1083181ac();
  uVar3 = fVar13 == 1.0;
  FUN_1083181b4();
  alStack_138[1] = 0;
  alStack_138[0] = lVar12;
  FUN_108318188(alStack_138 + 1);
  func_0x000108314830(auStack_d8);
  uVar8 = (uint)alStack_138;
  func_0x000108316720(lVar10 + 0x28);
  if (alStack_138[0] != 0) {
    func_0x00010831959c();
  }
  puVar6 = auStack_148;
  FUN_108314574();
  func_0x000108319570(uStack_68);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  puVar7 = puVar6;
  func_0x0001083195a8();
  pcStack_188 = FUN_1083194cc;
  uStack_1a0 = uVar1;
  puStack_198 = puVar6;
  puStack_190 = &stack0xfffffffffffffff0;
  if (0xffffdfe < uVar8) {
    FUN_108319524(&uStack_1a1);
  }
  iVar2 = uVar8 << 3;
  if (uVar8 == 0) {
    iVar2 = 1;
  }
  FUN_1083149f0(puVar7,iVar2,4);
  return;
}



/* Entry: 1083194cc; end: 108319523;  */

void FUN_1083194cc(undefined8 param_1,uint param_2)

{
  int iVar1;
  undefined1 uStack_21;
  
  if (0xffffdfe < param_2) {
    FUN_108319524(&uStack_21);
  }
  iVar1 = param_2 << 3;
  if (param_2 == 0) {
    iVar1 = 1;
  }
  FUN_1083149f0(param_1,iVar1,4);
  return;
}



/* Entry: 108319524; end: 108319537;  */

void FUN_108319524(void)

{
  code *pcVar1;
  
  FUN_108319538();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108319538);
  (*pcVar1)();
}



/* Entry: 108319538; end: 108319987;  */

void FUN_108319538(void)

{
  undefined *puStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined *puStack0000000000000010;
  
  uStack0000000000000008 = 0x6f;
  puStack0000000000000010 = &UNK_10f48d0d8;
  puStack0000000000000000 = &UNK_10f48d082;
  _vfprintf(*(undefined8 *)PTR____stderrp_11034bdc8,&UNK_10f48135e,&stack0x00000000);
  return;
}



/* Entry: 108319988; end: 1083199c7;  */

uint FUN_108319988(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  
  FUN_10828e338(param_4);
  uVar1 = 0;
  if (0.0 < param_1) {
    uVar1 = (uint)param_4 ^ 1;
  }
  uVar2 = 0;
  if (param_1 < 256.0) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 1083199c8; end: 108319c43;  */

void FUN_1083199c8(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  long *param_5,long *param_6,undefined4 *param_7,long param_8)

{
  undefined1 uVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  undefined4 extraout_w10;
  undefined4 uVar8;
  long lVar9;
  undefined4 in_w11;
  undefined4 extraout_w11;
  undefined8 in_x12;
  undefined8 extraout_x12;
  undefined4 in_w13;
  undefined4 extraout_w13;
  int unaff_w21;
  long unaff_x22;
  byte bVar10;
  long *plVar11;
  byte bVar12;
  long lVar13;
  undefined1 unaff_w26;
  uint uVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long unaff_d8;
  undefined4 uVar22;
  undefined4 uStack_b4;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  float fStack_80;
  float fStack_7c;
  undefined8 uStack_78;
  
  uVar22 = 0x3f800000;
  lVar9 = 0;
  if ((param_5[2] == 0) || (lVar9 = *param_6, lVar9 != 0)) {
    uVar8 = (undefined4)lVar9;
    uVar5 = in_x12;
    param_8 = unaff_x22;
    uStack_b4 = in_w13;
  }
  else {
    plVar11 = (long *)param_6[2];
    if ((plVar11 == (long *)0x0) ||
       (plVar3 = plVar11, (**(code **)(*plVar11 + 0x58))(plVar11,&uStack_78), uVar5 = extraout_x12,
       uStack_b4 = extraout_w13, uVar8 = extraout_w10, in_w11 = extraout_w11, (int)plVar3 != 0)) {
      uVar22 = 0;
      plVar3 = param_5;
      func_0x000108403f54();
      uVar8 = *(undefined4 *)(param_8 + 4);
      if ((int)plVar3 == 0) {
        uVar8 = 0;
      }
      plVar4 = param_6;
      FUN_10837675c();
      unaff_w21 = 0;
      if (((ulong)plVar3 & 1) == 0) {
        uVar2 = (uint)plVar4;
        uVar2 = (uVar2 & 0xff) * 0x13 + (uVar2 >> 0x10 & 0xff) * 0x36 + (uVar2 >> 8 & 0xff) * 0xb7;
        unaff_w21 = (uVar2 & 0x1ff00) + (uVar2 >> 8) + (uVar2 >> 8) * 0x10000 + -0x1000000;
        FUN_10831a1bc();
      }
      if (param_5[2] == 0) {
        uStack_b4 = 0;
      }
      else {
        uStack_b4 = *(undefined4 *)(param_5[2] + 0x14);
      }
      uVar2 = *(uint *)(param_6 + 9);
      unaff_d8 = param_6[8];
      in_w11 = *(undefined4 *)(param_8 + 0x10);
      FUN_108319c44(param_5);
      uStack_90 = (undefined4)param_2;
      uStack_8c = (undefined4)param_3;
      uStack_88 = param_4;
      uStack_84 = uVar22;
      func_0x000108317790(&uStack_90);
      uVar14 = 0;
      fVar15 = (float)param_2;
      fVar18 = (float)param_3;
      lVar9 = *param_5;
      fStack_80 = fVar15;
      fStack_7c = fVar18;
      fVar19 = fRam0000000113254e28;
      fVar16 = fRam0000000113254e34;
      uVar6 = uRam0000000113254e44;
      for (lVar13 = param_5[1] * 0x60; fRam0000000113254e28 = fVar19, fRam0000000113254e34 = fVar16,
          uRam0000000113254e44 = uVar6, lVar13 != 0; lVar13 = lVar13 + -0x60) {
        FUN_108350ae8(lVar9 + 0x48,param_7,&fStack_80);
        uVar5 = *(undefined8 *)(param_8 + 0x18);
        FUN_108319988(uVar5,param_6,param_7);
        fVar18 = (float)param_3;
        fVar15 = (float)param_2;
        uVar14 = uVar14 | (uint)uVar5;
        lVar9 = lVar9 + 0x60;
        fVar19 = fRam0000000113254e28;
        fVar16 = fRam0000000113254e34;
        uVar6 = uRam0000000113254e44;
      }
      unaff_w26 = (undefined1)uVar14;
      bVar10 = (byte)(uVar2 >> 6) & 3;
      bVar12 = (byte)(uVar2 >> 4) & 3;
      uVar1 = plVar11 != (long *)0x0;
      if ((uVar14 & 1) == 0) {
        param_7 = (undefined4 *)0x113254e20;
      }
      else {
        FUN_108319c50(param_7);
        fVar19 = fVar15 - (float)(int)fVar15;
        fVar16 = fVar18 - (float)(int)fVar18;
        uVar6 = 0x80;
      }
      uVar22 = *param_7;
      uVar17 = CONCAT44(param_7[6],fVar16);
      uVar20 = *(undefined8 *)(param_7 + 7);
      uVar7 = 1;
      uVar5 = CONCAT44(fVar19,param_7[1]);
      uVar21 = *(undefined8 *)(param_7 + 3);
      goto LAB_108319be8;
    }
  }
  uStack_78 = uVar5;
  uVar20 = 0x3f80000000000000;
  uVar17 = 0;
  uVar1 = (undefined1)param_8;
  bVar12 = 0;
  bVar10 = 0;
  uVar7 = 0;
  uVar6 = 0x10;
  uVar5 = uVar17;
  uVar21 = uVar20;
LAB_108319be8:
  *param_1 = uVar7;
  *(undefined4 *)(param_1 + 4) = uStack_b4;
  *(int *)(param_1 + 8) = unaff_w21;
  *(long *)(param_1 + 0xc) = unaff_d8;
  *(undefined4 *)(param_1 + 0x14) = uVar8;
  *(undefined8 *)(param_1 + 0x18) = uStack_78;
  *(undefined4 *)(param_1 + 0x20) = in_w11;
  *(undefined4 *)(param_1 + 0x24) = uVar22;
  *(undefined8 *)(param_1 + 0x30) = uVar21;
  *(undefined8 *)(param_1 + 0x28) = uVar5;
  *(undefined8 *)(param_1 + 0x40) = uVar20;
  *(undefined8 *)(param_1 + 0x38) = uVar17;
  *(undefined4 *)(param_1 + 0x48) = uVar6;
  param_1[0x4c] = unaff_w26;
  param_1[0x4d] = uVar1;
  param_1[0x4e] = bVar10;
  param_1[0x4f] = bVar12;
  return;
}



/* Entry: 108319c44; end: 108319c4f;  */

float FUN_108319c44(long param_1)

{
  return *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x18);
}



/* Entry: 108319c50; end: 108319ca7;  */

float FUN_108319c50(long param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = (int)param_1;
  fVar4 = *(float *)(param_1 + 8);
  FUN_10828e338();
  if (iVar1 != 0) {
    fVar2 = *(float *)(param_1 + 0x20);
    fVar3 = 1.0 / fVar2;
    if (fVar2 == 0.0) {
      fVar3 = fVar2;
    }
    fVar4 = fVar4 * fVar3;
  }
  return fVar4;
}



/* Entry: 108319ca8; end: 108319e4f;  */

bool FUN_108319ca8(float param_1,float param_2,int *param_3,int *param_4)

{
  float *pfVar1;
  byte bVar2;
  bool bVar3;
  float *pfVar4;
  byte bVar5;
  float fVar6;
  float fVar7;
  
  if (*param_3 != *param_4) {
    return false;
  }
  if (param_3[1] != param_4[1]) {
    return false;
  }
  if (*(char *)((long)param_3 + 0x4a) != *(char *)((long)param_4 + 0x4a)) {
    return false;
  }
  if (*(char *)((long)param_3 + 0x4a) != '\0') {
    if ((float)param_3[2] != (float)param_4[2]) {
      return false;
    }
    param_1 = (float)param_3[3];
    param_2 = (float)param_4[3];
    if (param_1 != param_2) {
      return false;
    }
    if (*(char *)((long)param_3 + 0x4b) != *(char *)((long)param_4 + 0x4b)) {
      return false;
    }
  }
  if (param_3[4] != param_4[4]) {
    return false;
  }
  if (*(char *)((long)param_3 + 0x49) == *(char *)((long)param_4 + 0x49)) {
    if (*(char *)((long)param_3 + 0x49) != '\0') {
      if (param_3[6] != param_4[6]) {
        return false;
      }
      param_1 = (float)param_3[5];
      param_2 = (float)param_4[5];
      if (param_1 != param_2) {
        return false;
      }
    }
    if (param_3[7] == param_4[7]) {
      pfVar1 = (float *)(param_3 + 8);
      pfVar4 = pfVar1;
      FUN_10828e338();
      bVar5 = *(byte *)(param_3 + 0x12);
      if ((((int)pfVar4 == 0) || (bVar2 = bVar5 & 1, bVar5 = 0, bVar2 == 0)) &&
         (bVar5 == *(byte *)(param_4 + 0x12))) {
        if (bVar5 == 0) {
          return true;
        }
        FUN_108319c50(param_4 + 8);
        fVar6 = param_1;
        fVar7 = param_2;
        FUN_108319c50(pfVar1);
        if (((*pfVar1 == (float)param_4[8]) && ((float)param_3[0xc] == (float)param_4[0xc])) &&
           ((float)param_3[9] == (float)param_4[9])) {
          param_1 = param_1 - fVar6;
          bVar3 = false;
          if (((float)param_3[0xb] == (float)param_4[0xb]) &&
             (bVar3 = false, !NAN(param_1) && !NAN((float)(int)param_1))) {
            bVar3 = param_1 == (float)(int)param_1;
          }
          if (bVar3) {
            return param_2 - fVar7 == (float)(int)(param_2 - fVar7);
          }
        }
      }
    }
    return false;
  }
  return false;
}



/* Entry: 108319e50; end: 108319e7f;  */

long FUN_108319e50(long param_1)

{
  func_0x000108314e7c(param_1 + 0x30);
  FUN_108316384(param_1 + 0x20);
  return param_1;
}



/* Entry: 108319e80; end: 108319e83;  */

long FUN_108319e80(long param_1)

{
  func_0x000108314e7c(param_1 + 0x30);
  FUN_108316384(param_1 + 0x20);
  return param_1;
}



/* Entry: 108319e84; end: 108319e97;  */

void FUN_108319e84(void)

{
  FUN_108319e50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108319e98; end: 108319f83;  */

void FUN_108319e98(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [16];
  
  func_0x00010831675c();
  FUN_108319f84(auStack_70);
  uStack_98 = param_5[1];
  uStack_a0 = *param_5;
  uStack_88 = param_5[3];
  uStack_90 = param_5[2];
  FUN_1083168b4(auStack_78,param_2,param_4,param_3,&uStack_a0,param_6,auStack_60,0,&UNK_10f48d0eb);
  FUN_10837675c();
  uStack_a0 = CONCAT44(uStack_a0._4_4_,(int)param_3);
  puVar1 = auStack_70;
  FUN_10831a034(puVar1,auStack_60,auStack_78,auStack_68,&uStack_a0);
  *param_1 = (long)puVar1;
  func_0x000108314e7c(auStack_78);
  FUN_10831a218(auStack_70);
  return;
}



/* Entry: 108319f84; end: 10831a033;  */

void FUN_108319f84(long *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  if ((int)param_2 < 0) {
    FUN_10831a268(&lStack_40);
  }
  FUN_108314f10(param_2,8);
  iVar2 = (int)param_2;
  if (0x7fffff6e < iVar2) {
    func_0x00010831a290(&lStack_40);
  }
  lVar3 = (long)(iVar2 + 0x90);
  __Znwm();
  FUN_10831648c(&lStack_40,lVar3 + 0x90,param_2,iVar2 / 2);
  lVar1 = lStack_40;
  *param_1 = lVar3;
  *(int *)(param_1 + 1) = iVar2 + 0x90;
  lStack_40 = 0;
  param_1[2] = lVar1;
  param_1[3] = lStack_38;
  FUN_108316384(&lStack_40);
  return;
}



/* Entry: 10831a034; end: 10831a097;  */

undefined8
FUN_10831a034(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
             undefined4 *param_5)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  uVar1 = *param_1;
  *param_1 = 0;
  uStack_28 = *param_3;
  *param_3 = 0;
  FUN_10831a128(uVar1,param_2,&uStack_28,*param_4,*param_5);
  func_0x000108314e7c(&uStack_28);
  return uVar1;
}



/* Entry: 10831a098; end: 10831a117;  */

bool FUN_10831a098(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong *puVar6;
  
  uVar3 = *(ulong *)(param_1 + 0x30);
  if (((*(long *)(uVar3 + 0x28) == 0) && (func_0x0001081421c8(uVar3,param_3), (uVar3 & 1) != 0)) ||
     ((*(int *)(param_1 + 0x44) == 0 &&
      (iVar1 = *(int *)(param_1 + 0x3c), uVar4 = param_2, FUN_10837675c(), iVar1 != (int)uVar4)))) {
    return false;
  }
  puVar6 = (ulong *)(*(long *)(param_1 + 0x30) + 0x28);
  do {
    plVar5 = (long *)*puVar6;
    if (plVar5 == (long *)0x0) break;
    puVar6 = (ulong *)(plVar5 + 1);
    plVar2 = plVar5;
    (**(code **)(*plVar5 + 0x20))(plVar5,param_2,param_3);
  } while (((ulong)plVar2 & 1) != 0);
  return plVar5 == (long *)0x0;
}



/* Entry: 10831a118; end: 10831a127;  */

void FUN_10831a118(long param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  code *extraout_x8;
  long *plVar6;
  
  lVar4 = *(long *)(param_1 + 0x30);
  lVar5 = param_1;
  func_0x000108319854();
  piVar1 = (int *)(lVar5 + 8);
  for (plVar6 = (long *)(lVar4 + 0x28); plVar6 = (long *)*plVar6, plVar6 != (long *)0x0;
      plVar6 = plVar6 + 1) {
    if (param_1 != 0) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x0001083197ac(*(undefined8 *)(*plVar6 + 0x10),plVar6,param_2);
    (*extraout_x8)();
    func_0x000108319690();
  }
  return;
}



/* Entry: 10831a128; end: 10831a1bb;  */

undefined8 *
FUN_10831a128(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,
             undefined4 param_5)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = *param_2;
  *param_2 = 0;
  param_1[4] = uVar1;
  *param_1 = &PTR_FUN_110a3bec0;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)((long)param_2 + 0xc);
  uVar1 = *param_3;
  *param_3 = 0;
  param_1[6] = uVar1;
  *(undefined4 *)(param_1 + 7) = param_4;
  *(undefined4 *)((long)param_1 + 0x3c) = param_5;
  FUN_10810c9b4(param_1 + 0xc);
  return param_1;
}



/* Entry: 10831a1bc; end: 10831a217;  */

uint FUN_10831a1bc(uint param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar4;
  undefined8 uVar3;
  
  uVar2 = NEON_ushl(CONCAT44(param_1,param_1),0xffffffebfffffff3,4);
  uVar1 = (uint)(uVar2 & 0x700000007);
  uVar4 = (uint)((uVar2 & 0x700000007) >> 0x20);
  uVar3 = NEON_ushl(CONCAT44(uVar4 * 0x24 + (uVar4 >> 1),uVar1 * 0x24 + (uVar1 >> 1)),0x1000000008,4
                   );
  return CONCAT13((byte)((ulong)uVar3 >> 0x18) | (byte)((ulong)uVar3 >> 0x38),
                  CONCAT12((byte)((ulong)uVar3 >> 0x10) | (byte)((ulong)uVar3 >> 0x30),
                           CONCAT11((byte)((ulong)uVar3 >> 8) | (byte)((ulong)uVar3 >> 0x28),
                                    (byte)uVar3 | (byte)((ulong)uVar3 >> 0x20)))) |
         (param_1 >> 5 & 7) << 2 | (param_1 >> 5 & 7) << 5 | param_1 >> 6 & 3 | 0xff000000;
}



/* Entry: 10831a218; end: 10831a267;  */

undefined8 * FUN_10831a218(undefined8 *param_1)

{
  FUN_108316384(param_1 + 2);
  __ZdlPv(*param_1);
  return param_1;
}



/* Entry: 10831a268; end: 10831a2b7;  */

void FUN_10831a268(void)

{
  code *pcVar1;
  
  FUN_10831a2b8(&UNK_10f48d115);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10831a290);
  (*pcVar1)();
}



/* Entry: 10831a2b8; end: 10831a2d3;  */

void FUN_10831a2b8(undefined8 param_1)

{
  undefined8 uStack0000000000000000;
  
  uStack0000000000000000 = param_1;
  _vfprintf(*(undefined8 *)PTR____stderrp_11034bdc8,&UNK_10f48d0f4,&stack0x00000000);
  return;
}



/* Entry: 10831a2d4; end: 10831a36f;  */

undefined4 * FUN_10831a2d4(void)

{
  int iVar1;
  undefined4 *puVar2;
  char cStack_31;
  
  cStack_31 = cRam0000000113826c30;
  if (cRam0000000113826c30 == '\0') {
    iVar1 = 0x13826c30;
    FUN_10825bc50(0x113826c30,&cStack_31,1,0,0);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)0x28;
      __Znwm();
      *puVar2 = 8;
      *(undefined8 *)(puVar2 + 2) = 0;
      *(undefined8 *)(puVar2 + 4) = 0;
      puVar2[6] = 1;
      *(undefined1 *)(puVar2 + 7) = 0;
      *(undefined8 *)(puVar2 + 8) = 0;
      cRam0000000113826c30 = 2;
      puRam0000000113826c38 = puVar2;
      return puVar2;
    }
  }
  do {
  } while (cRam0000000113826c30 != '\x02');
  return puRam0000000113826c38;
}



/* Entry: 10831a370; end: 10831a3c7;  */

undefined1 * FUN_10831a370(undefined1 *param_1,undefined4 param_2)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0x400000;
  *(undefined4 *)(param_1 + 0x38) = param_2;
  FUN_10831ae28(param_1 + 0x40);
  return param_1;
}



/* Entry: 10831a3c8; end: 10831a44f;  */

void FUN_10831a3c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 param_7)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  uStack_58 = param_6[1];
  uStack_60 = *param_6;
  uStack_48 = param_6[3];
  uStack_50 = param_6[2];
  FUN_10831a450(&uStack_38,param_1,param_3,param_4,param_5,&uStack_60);
  FUN_10831a118(*(undefined4 *)(param_4 + 0x28),*(undefined4 *)(param_4 + 0x2c),uStack_38,param_2,
                param_5,param_7);
  FUN_10828c4ac(&uStack_38);
  return;
}



/* Entry: 10831a450; end: 10831a943;  */

void FUN_10831a450(undefined8 *param_1,undefined8 ******param_2,undefined8 *param_3,
                  undefined8 ******param_4,undefined8 ******param_5,undefined8 ******param_6)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 ******ppppppuVar7;
  long lVar8;
  undefined8 ******ppppppuVar9;
  undefined8 uVar10;
  undefined8 *****pppppuVar11;
  undefined8 *****pppppuVar12;
  undefined8 ****ppppuVar13;
  undefined8 ******ppppppuVar14;
  undefined8 **ppuVar15;
  long lVar16;
  undefined8 ******unaff_x24;
  undefined8 *****pppppuStack_1b0;
  undefined8 ***pppuStack_1a8;
  undefined8 *****pppppuStack_1a0;
  undefined8 *****pppppuStack_198;
  undefined8 *****pppppuStack_190;
  undefined8 *****pppppuStack_188;
  undefined8 *****pppppuStack_180;
  undefined8 *puStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined8 *****pppppuStack_160;
  undefined8 ****ppppuStack_158;
  char acStack_150 [4];
  undefined1 auStack_14c [76];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *****pppppuStack_d0;
  undefined8 uStack_c8;
  undefined8 *****pppppuStack_c0;
  undefined4 uStack_b4;
  undefined8 *****pppppuStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  undefined8 *****pppppuStack_90;
  undefined8 ****ppppuStack_88;
  undefined8 ****ppppuStack_80;
  undefined8 ****appppuStack_78 [2];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_f8 = param_3[1];
  uStack_100 = *param_3;
  uStack_e8 = param_3[3];
  uStack_f0 = param_3[2];
  uStack_e0 = param_3[4];
  FUN_108363df0(*(undefined4 *)(param_4 + 5),*(undefined4 *)((long)param_4 + 0x2c),&uStack_100);
  ppppppuVar9 = param_4;
  FUN_1083199c8(acStack_150,param_4,param_5,&uStack_100,param_6);
  *param_1 = 0;
  if (acStack_150[0] == '\x01') {
    func_0x00010831b8c4();
    ppppppuVar9 = param_2 + 3;
    FUN_10831aa34(ppppppuVar9,auStack_14c);
    if (ppppppuVar9 == (undefined8 ******)0x0) {
      pppppuVar12 = (undefined8 *****)0x0;
    }
    else {
      FUN_10831aa54(&pppppuStack_90,ppppppuVar9,auStack_14c);
      pppppuVar12 = pppppuStack_90;
      if (pppppuStack_90 != (undefined8 *****)0x0) {
        ppppppuVar9 = param_2 + 1;
        if (pppppuStack_90 != *ppppppuVar9) {
          FUN_10831aab8(ppppppuVar9,pppppuStack_90);
          func_0x00010831aae4(ppppppuVar9,pppppuVar12);
          pppppuVar12 = pppppuStack_90;
        }
      }
    }
    *(undefined1 *)param_2 = 0;
    pppppuStack_90 = (undefined8 ******)0x0;
    func_0x00010831af58(param_1,pppppuVar12);
    ppppppuVar9 = &pppppuStack_90;
    FUN_10828c4ac(ppppppuVar9);
    unaff_x24 = (undefined8 ******)*param_1;
    if (unaff_x24 != (undefined8 ******)0x0) {
      ppppppuVar9 = unaff_x24;
      ppppppuVar14 = param_5;
      FUN_10831a098(unaff_x24,param_5,&uStack_100);
      if (((ulong)ppppppuVar9 & 1) != 0) goto LAB_10831a834;
      func_0x00010831b8c4();
      ppppppuVar9 = param_2;
      FUN_10831ab0c(param_2,unaff_x24);
      *(undefined1 *)param_2 = 0;
    }
  }
  ppppuStack_88 = param_6[1];
  pppppuStack_90 = *param_6;
  appppuStack_78[0] = param_6[3];
  ppppuStack_80 = param_6[2];
  FUN_1083a1940();
  FUN_108319e98(&pppppuStack_b0,param_4,param_5,&uStack_100,&pppppuStack_90,ppppppuVar9);
  ppppppuVar14 = (undefined8 ******)pppppuStack_b0;
  pppppuStack_b0 = (undefined8 ******)0x0;
  func_0x00010831af58(param_1);
  ppppppuVar9 = &pppppuStack_b0;
  FUN_10828c4ac();
  if (acStack_150[0] == '\x01') {
    ppppppuVar14 = (undefined8 ******)*param_1;
    _memcpy(ppppppuVar14 + 8,auStack_14c,0x4c);
    ppppppuVar9 = ppppppuVar14 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar9,0x10);
      if (bVar4) {
        *(int *)ppppppuVar9 = *(int *)ppppppuVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    pppppuStack_160 = ppppppuVar14;
    func_0x00010831b8c4();
    pppppuStack_d0 = pppppuStack_160;
    pppppuStack_160 = (undefined8 *****)0x0;
    uStack_b4 = *(undefined4 *)(pppppuStack_d0 + 8);
    ppppppuVar9 = param_2 + 3;
    FUN_10831aa34(ppppppuVar9,&uStack_b4);
    if (ppppppuVar9 == (undefined8 ******)0x0) {
      pppppuStack_b0 = (undefined8 *****)CONCAT44(pppppuStack_b0._4_4_,uStack_b4);
      param_6 = &pppppuStack_b0;
      puStack_a0 = auStack_a8;
      uStack_98 = 0x200000000;
      pppppuStack_90 = (undefined8 *****)CONCAT44(pppppuStack_90._4_4_,uStack_b4);
      FUN_10831b3fc(&ppppuStack_88,&pppppuStack_b0);
      iVar1 = *(int *)((long)param_2 + 0x1c);
      if (iVar1 * 3 <= *(int *)(param_2 + 3) * 4) {
        iVar2 = iVar1 << 1;
        if (iVar1 < 1) {
          iVar2 = 4;
        }
        FUN_10831b1d4(param_2 + 3,iVar2);
      }
      unaff_x24 = &pppppuStack_90;
      ppppppuVar9 = param_2 + 3;
      FUN_10831b468(ppppppuVar9,&pppppuStack_90);
      FUN_10828c440(appppuStack_78);
      ppppppuVar9 = ppppppuVar9 + 1;
      FUN_10828c440(&puStack_a0);
    }
    FUN_10831aa54(&pppppuStack_90,ppppppuVar9,pppppuStack_d0 + 8);
    pppppuVar11 = pppppuStack_90;
    pppppuVar12 = pppppuStack_d0;
    if ((undefined8 ******)pppppuStack_90 == (undefined8 ******)0x0) {
      func_0x00010831aae4(param_2 + 1,pppppuStack_d0);
      param_2[6] = (undefined8 *****)((long)param_2[6] + (long)*(int *)(pppppuStack_d0 + 7));
      ppppppuVar14 = (undefined8 ******)(pppppuStack_d0 + 1);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar14,0x10);
        if (bVar4) {
          *(int *)ppppppuVar14 = *(int *)ppppppuVar14 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      pppppuStack_c0 = pppppuStack_d0;
      uVar5 = *(uint *)(ppppppuVar9 + 3);
      uVar6 = (ulong)uVar5;
      if ((int)uVar5 < (int)(*(uint *)((long)ppppppuVar9 + 0x1c) >> 1)) {
        pppppuStack_c0 = (undefined8 *****)0x0;
        ppppppuVar9[2][(int)uVar5] = pppppuStack_d0;
      }
      else {
        uVar10 = 1;
        FUN_10831b390(0x3ff8000000000000,uVar6,1);
        pppppuVar12 = pppppuStack_c0;
        pppppuStack_c0 = (undefined8 *****)0x0;
        *(undefined8 ******)(uVar6 + (long)*(int *)(ppppppuVar9 + 3) * 8) = pppppuVar12;
        FUN_10831b354(ppppppuVar9 + 2,uVar6,uVar10);
        uVar5 = *(uint *)(ppppppuVar9 + 3);
      }
      *(uint *)(ppppppuVar9 + 3) = uVar5 + 1;
      FUN_10828c4ac(&pppppuStack_c0);
    }
    else {
      pppppuStack_90 = (undefined8 ******)0x0;
      pppppuStack_d0 = pppppuVar11;
      func_0x00010831af2c(pppppuVar12);
    }
    FUN_10828c4ac(&pppppuStack_90);
    param_5 = (undefined8 ******)pppppuStack_d0;
    FUN_10831ac44(param_2);
    pppppuVar12 = param_2[5];
    pppppuVar11 = param_2[6];
    if (pppppuVar12 < pppppuVar11) {
      ppppppuVar9 = (undefined8 ******)param_2[2];
      while (((pppppuVar12 < pppppuVar11 && (ppppppuVar9 != (undefined8 ******)0x0)) &&
             (ppppppuVar9 != param_5))) {
        ppppppuVar9 = (undefined8 ******)ppppppuVar9[2];
        FUN_10831ab0c(param_2);
        pppppuVar12 = param_2[5];
        pppppuVar11 = param_2[6];
        param_6 = ppppppuVar9;
      }
    }
    pppppuVar11 = pppppuStack_d0;
    pppppuVar12 = pppppuStack_160;
    pppppuStack_d0 = (undefined8 *****)0x0;
    uStack_c8 = 0;
    pppppuStack_160 = pppppuVar11;
    func_0x00010831af2c(pppppuVar12);
    FUN_10828c4ac(&uStack_c8);
    FUN_10828c4ac(&pppppuStack_d0);
    ppppppuVar14 = (undefined8 ******)pppppuStack_160;
    pppppuVar12 = param_4[2];
    *(undefined4 *)(pppppuVar12 + 3) = *(undefined4 *)(param_2 + 7);
    pppppuVar12[4] = (undefined8 ****)FUN_10831a944;
    pppppuStack_160 = (undefined8 *****)0x0;
    *(undefined1 *)param_2 = 0;
    ppppuStack_158 = (undefined8 *****)0x0;
    func_0x00010831af58(param_1);
    ppppppuVar9 = (undefined8 ******)&ppppuStack_158;
    FUN_10828c4ac();
    func_0x00010831b8a4();
  }
LAB_10831a834:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  FUN_10828c4ac(&pppppuStack_c0);
  FUN_10828c4ac(&pppppuStack_90);
  FUN_10828c4ac(&pppppuStack_d0);
  *(undefined1 *)param_2 = 0;
  FUN_10828c4ac(&pppppuStack_160);
  FUN_10828c4ac(param_1);
  ppppppuVar7 = ppppppuVar9;
  __Unwind_Resume();
  pcStack_168 = FUN_10831a944;
  ppuVar15 = (undefined8 **)((ulong)ppppppuVar7 & 0xffffffff | (long)ppppppuVar14 << 0x20);
  pppppuStack_1a0 = unaff_x24;
  pppppuStack_198 = param_6;
  pppppuStack_190 = param_5;
  pppppuStack_188 = ppppppuVar9;
  pppppuStack_180 = param_2;
  puStack_178 = param_1;
  puStack_170 = &stack0xfffffffffffffff0;
  FUN_10831a2d4();
  pppppuStack_1b0 = ppppppuVar7 + 3;
  func_0x0001081efc58();
  for (lVar16 = 0; lVar16 < *(int *)((long)ppppppuVar7 + 0x14); lVar16 = lVar16 + 1) {
    ppppuVar13 = ppppppuVar7[1][lVar16];
    if (*(int *)(ppppuVar13 + 4) == (int)ppppppuVar14) {
      pppuStack_1a8 = ppppuVar13 + 2;
      func_0x0001081efc58();
      lVar8 = (long)*(int *)(ppppuVar13 + 1);
      if (*(int *)(ppppuVar13 + 1) < (int)(*(uint *)((long)ppppuVar13 + 0xc) >> 1)) {
        (*ppppuVar13)[lVar8] = ppuVar15;
      }
      else {
        uVar10 = 1;
        FUN_10831ad9c(0x3ff8000000000000,lVar8,1);
        *(undefined8 ***)(lVar8 + (long)*(int *)(ppppuVar13 + 1) * 8) = ppuVar15;
        FUN_10831adbc(ppppuVar13,lVar8,uVar10);
      }
      *(int *)(ppppuVar13 + 1) = *(int *)(ppppuVar13 + 1) + 1;
      func_0x00010831b7d8();
    }
  }
  FUN_1081efc78(&pppppuStack_1b0);
  return;
}



/* Entry: 10831a944; end: 10831aa33;  */

void FUN_10831a944(ulong param_1,uint param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lStack_50;
  long *plStack_48;
  
  uVar4 = param_1 & 0xffffffff | (ulong)param_2 << 0x20;
  FUN_10831a2d4();
  lStack_50 = param_1 + 0x18;
  func_0x0001081efc58();
  for (lVar5 = 0; lVar5 < *(int *)(param_1 + 0x14); lVar5 = lVar5 + 1) {
    plVar3 = *(long **)(*(long *)(param_1 + 8) + lVar5 * 8);
    if (*(uint *)(plVar3 + 4) == param_2) {
      plStack_48 = plVar3 + 2;
      func_0x0001081efc58();
      lVar1 = (long)(int)plVar3[1];
      if ((int)plVar3[1] < (int)(*(uint *)((long)plVar3 + 0xc) >> 1)) {
        *(ulong *)(*plVar3 + lVar1 * 8) = uVar4;
      }
      else {
        uVar2 = 1;
        FUN_10831ad9c(0x3ff8000000000000,lVar1,1);
        *(ulong *)(lVar1 + (long)(int)plVar3[1] * 8) = uVar4;
        FUN_10831adbc(plVar3,lVar1,uVar2);
      }
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      func_0x00010831b7d8();
    }
  }
  FUN_1081efc78(&lStack_50);
  return;
}



/* Entry: 10831aa34; end: 10831aa53;  */

long FUN_10831aa34(long param_1)

{
  long lVar1;
  
  FUN_10831af68();
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}



/* Entry: 10831aa54; end: 10831aab7;  */

void FUN_10831aa54(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x00010831b810();
  FUN_10831ad44(param_2,param_3);
  if ((int)param_2 < 0) {
    lVar5 = 0;
  }
  else {
    if (*(int *)(unaff_x20 + 0x18) <= (int)param_2) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10831aab8);
      (*pcVar4)();
    }
    lVar5 = *(long *)(*(long *)(unaff_x20 + 0x10) + (param_2 & 0xffffffff) * 8);
    if (lVar5 != 0) {
      piVar1 = (int *)(lVar5 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  *unaff_x19 = lVar5;
  return;
}



/* Entry: 10831aab8; end: 10831ab0b;  */

void FUN_10831aab8(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_2 + 0x10);
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *param_1 = lVar2;
  }
  else {
    *(long *)(lVar1 + 0x18) = lVar2;
  }
  if (lVar2 == 0) {
    param_1[1] = lVar1;
  }
  else {
    *(long *)(lVar2 + 0x10) = lVar1;
  }
  *(long *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  return;
}



/* Entry: 10831ab0c; end: 10831abe3;  */

void FUN_10831ab0c(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  int iVar5;
  long lVar6;
  long lStack_40;
  undefined4 uStack_34;
  
  puVar4 = (undefined4 *)(param_2 + 0x40);
  uStack_34 = *puVar4;
  lVar2 = param_1 + 0x18;
  FUN_10831aa34(lVar2,&uStack_34);
  if (lVar2 != 0) {
    FUN_10831aa54(&lStack_40,lVar2,puVar4);
    if (param_2 == lStack_40) {
      func_0x00010831b8cc((long)*(int *)(param_2 + 0x38));
      FUN_10831aab8();
      lVar3 = lVar2;
      FUN_10831ad44(lVar2,puVar4);
      lVar6 = (long)*(int *)(lVar2 + 0x18) + -1;
      iVar1 = (int)lVar3;
      FUN_10828c4ac(*(long *)(lVar2 + 0x10) + (long)iVar1 * 8);
      iVar5 = (int)lVar6;
      if (iVar1 != iVar5) {
        *(undefined8 *)(*(long *)(lVar2 + 0x10) + (long)iVar1 * 8) =
             *(undefined8 *)(*(long *)(lVar2 + 0x10) + lVar6 * 8);
      }
      *(int *)(lVar2 + 0x18) = iVar5;
      if (iVar5 == 0) {
        FUN_10831b018(param_1 + 0x18,&uStack_34);
      }
    }
    func_0x00010831b8a4();
  }
  return;
}



/* Entry: 10831abe4; end: 10831ac17;  */

void FUN_10831abe4(void)

{
  undefined1 *unaff_x19;
  
  func_0x00010831b89c();
  FUN_10831b54c(unaff_x19 + 0x18);
  *(undefined8 *)(unaff_x19 + 8) = 0;
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  *unaff_x19 = 0;
  return;
}



/* Entry: 10831ac18; end: 10831ac43;  */

void FUN_10831ac18(void)

{
  undefined1 *unaff_x19;
  
  func_0x00010831b89c();
  FUN_10831ac44();
  *unaff_x19 = 0;
  return;
}



/* Entry: 10831ac44; end: 10831acf7;  */

void FUN_10831ac44(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lStack_50;
  undefined8 uStack_48;
  
  lStack_50 = 0;
  uStack_48 = 0x100000000;
  FUN_10831acf8(param_1 + 0x40,&lStack_50);
  lVar1 = lStack_50 + (long)(int)uStack_48 * 8;
  for (lVar4 = lStack_50; lVar4 != lVar1; lVar4 = lVar4 + 8) {
    lVar3 = param_1 + 0x18;
    FUN_10831aa34(lVar3,lVar4);
    if (lVar3 != 0) {
      plVar2 = *(long **)(lVar3 + 0x10);
      for (lVar5 = (long)*(int *)(lVar3 + 0x18) << 3; lVar5 != 0; lVar5 = lVar5 + -8) {
        func_0x00010831b8cc((long)*(int *)(*plVar2 + 0x38));
        FUN_10831aab8();
        plVar2 = plVar2 + 1;
      }
      FUN_10831b018(param_1 + 0x18,lVar4);
    }
  }
  func_0x00010831b824();
  return;
}



/* Entry: 10831acf8; end: 10831ad43;  */

void FUN_10831acf8(undefined8 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 8) = 0;
  func_0x0001081efc58();
  FUN_10831b5e4(param_1,param_2);
  func_0x00010831b7d8();
  return;
}



/* Entry: 10831ad44; end: 10831ad9b;  */

long FUN_10831ad44(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x18) <= lVar2) {
      return 0xffffffff;
    }
    uVar1 = *(long *)(*(long *)(param_1 + 0x10) + lVar2 * 8) + 0x40;
    FUN_108319ca8(uVar1,param_2);
    if ((uVar1 & 1) != 0) break;
    lVar2 = lVar2 + 1;
  }
  return lVar2;
}



/* Entry: 10831ad9c; end: 10831adbb;  */

void FUN_10831ad9c(long param_1,int param_2)

{
  long unaff_x19;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  if (param_2 <= (int)((uint)param_1 ^ 0x7fffffff)) {
    pcStack_18 = (code *)0x7fffffff;
    puStack_20 = (undefined1 *)0x8;
    FUN_10840fe24(&puStack_20,param_2 + (uint)param_1);
    return;
  }
  func_0x00010bdb1a68();
  pcStack_18 = FUN_10831adbc;
  puStack_20 = &stack0xfffffffffffffff0;
  func_0x00010831b810();
  if (*(int *)(param_1 + 8) != 0) {
    func_0x00010831b854();
  }
  if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
    func_0x00010831b84c();
  }
  func_0x00010831b7ec();
  return;
}



/* Entry: 10831adbc; end: 10831adf7;  */

void FUN_10831adbc(long param_1)

{
  long unaff_x19;
  
  func_0x00010831b810();
  if (*(int *)(param_1 + 8) != 0) {
    func_0x00010831b854();
  }
  if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
    func_0x00010831b84c();
  }
  func_0x00010831b7ec();
  return;
}



/* Entry: 10831adf8; end: 10831ae27;  */

void FUN_10831adf8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0x7fffffff;
  uStack_20 = 8;
  FUN_10840fe24(&uStack_20,param_1);
  return;
}



/* Entry: 10831ae28; end: 10831aec7;  */

undefined8 * FUN_10831ae28(undefined8 *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  *param_1 = 0;
  param_1[1] = 0x100000000;
  *(undefined4 *)(param_1 + 2) = 1;
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = param_2;
  puVar1 = param_1;
  FUN_10831a2d4();
  puStack_38 = puVar1 + 3;
  func_0x0001081efc58();
  puStack_40 = param_1;
  FUN_10831aec8(puVar1,&puStack_40);
  func_0x00010831b7d8();
  return param_1;
}



/* Entry: 10831aec8; end: 10831af2b;  */

void FUN_10831aec8(void)

{
  code *pcVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010831b810();
  func_0x00010831af00();
  if (*(int *)(unaff_x19 + 0x14) != 0) {
    *(undefined8 *)(*(long *)(unaff_x19 + 8) + (long)*(int *)(unaff_x19 + 0x14) * 8 + -8) =
         *unaff_x20;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10831af00);
  (*pcVar1)();
}



/* Entry: 10831af2c; end: 10831af67;  */

void FUN_10831af2c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010831af50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 10831af68; end: 10831afd7;  */

int * FUN_10831af68(undefined8 param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong extraout_x9;
  ulong uVar3;
  ulong extraout_x10;
  uint extraout_w11;
  undefined8 uVar4;
  undefined8 extraout_x12;
  int *piVar5;
  long unaff_x19;
  uint *unaff_x20;
  
  func_0x00010831b810();
  func_0x00010831b894();
  uVar1 = *(uint *)(unaff_x19 + 4);
  uVar2 = (ulong)(uVar1 - 1 & (uint)param_1);
  uVar3 = (ulong)*unaff_x20;
  uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  uVar4 = 0x30;
  while( true ) {
    if (uVar1 == 0) {
      return (int *)0x0;
    }
    piVar5 = (int *)(*(long *)(unaff_x19 + 8) + (long)(int)uVar2 * (long)(int)uVar4);
    if (*piVar5 == 0) break;
    if (((int)param_1 == *piVar5) && ((int)uVar3 == piVar5[2])) {
      return piVar5 + 2;
    }
    func_0x00010831b87c();
    uVar2 = extraout_x9;
    uVar3 = extraout_x10;
    uVar4 = extraout_x12;
    uVar1 = extraout_w11;
  }
  return (int *)0x0;
}



/* Entry: 10831afd8; end: 10831b017;  */

uint FUN_10831afd8(uint param_1)

{
  func_0x00010831aff4();
  if (param_1 < 2) {
    param_1 = 1;
  }
  return param_1;
}



/* Entry: 10831b018; end: 10831b0e3;  */

undefined4 FUN_10831b018(uint param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint *puVar8;
  int *unaff_x19;
  uint *unaff_x20;
  
  func_0x00010831b810();
  func_0x00010831b894();
  uVar6 = 0;
  uVar4 = unaff_x19[1];
  uVar1 = uVar4 - 1 & param_1;
  uVar2 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
  do {
    if (uVar2 == uVar6) {
      uVar7 = 0;
      uVar6 = uVar2;
LAB_10831b0d4:
      uVar3 = 0;
      if ((int)uVar6 < (int)uVar4) {
        uVar3 = uVar7;
      }
      return uVar3;
    }
    puVar8 = (uint *)(*(long *)(unaff_x19 + 2) + (long)(int)uVar1 * 0x30);
    uVar5 = *puVar8;
    if (uVar5 == 0) {
      uVar7 = 0;
      goto LAB_10831b0d4;
    }
    if ((param_1 == uVar5) && (*unaff_x20 == puVar8[2])) {
      FUN_10831b0e4();
      if ((4 < unaff_x19[1]) && (*unaff_x19 * 4 <= unaff_x19[1])) {
        FUN_10831b1d4();
      }
      uVar7 = 1;
      goto LAB_10831b0d4;
    }
    uVar5 = 0;
    if ((int)uVar1 < 1) {
      uVar5 = uVar4;
    }
    uVar1 = (uVar1 + uVar5) - 1;
    uVar6 = uVar6 + 1;
  } while( true );
}



/* Entry: 10831b0e4; end: 10831b1d3;  */

void FUN_10831b0e4(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  
  *param_1 = *param_1 + -1;
  do {
    puVar4 = (uint *)(*(long *)(param_1 + 2) + (long)param_2 * 0x30);
    iVar5 = param_2;
    do {
      iVar2 = iVar5 + -1;
      if (iVar5 < 1) {
        iVar2 = param_1[1] + iVar2;
      }
      puVar6 = (uint *)(*(long *)(param_1 + 2) + (long)iVar2 * 0x30);
      if (*puVar6 == 0) {
        if (*puVar4 != 0) {
          FUN_10828c440(puVar4 + 8);
          *puVar4 = 0;
        }
        return;
      }
      uVar1 = param_1[1] - 1U & *puVar6;
      iVar5 = iVar2;
    } while ((iVar2 <= (int)uVar1 && (int)uVar1 < param_2) ||
            ((param_2 < iVar2 && ((int)uVar1 < param_2 || iVar2 <= (int)uVar1))));
    bVar3 = param_2 != iVar2;
    param_2 = iVar2;
    if (bVar3) {
      if (*puVar4 == 0) {
        FUN_10831b3d4(puVar4 + 2,puVar6 + 2);
      }
      else {
        puVar4[2] = puVar6[2];
        puVar4[4] = puVar6[4];
        FUN_10831b2cc(puVar4 + 8,puVar6 + 8);
      }
      *puVar4 = *puVar6;
    }
  } while( true );
}



/* Entry: 10831b1d4; end: 10831b2cb;  */

void FUN_10831b1d4(undefined4 *param_1,ulong param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lStack_48;
  
  uVar1 = param_1[1];
  iVar4 = (int)param_2;
  *param_1 = 0;
  param_1[1] = iVar4;
  plVar7 = (long *)(param_1 + 2);
  lStack_48 = *plVar7;
  *plVar7 = 0;
  uVar8 = (ulong)iVar4;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar8;
  uVar6 = ((-(param_2 >> 0x1f & 1) & 0xfffffffe00000000 | (param_2 & 0xffffffff) << 1) + (long)iVar4
          ) * 0x10;
  puVar3 = (undefined8 *)(uVar6 + 0x10);
  if (0xffffffffffffffef < uVar6 || SUB168(auVar2 * ZEXT816(0x30),8) != 0) {
    puVar3 = (undefined8 *)0xffffffffffffffff;
  }
  __Znam();
  *puVar3 = 0x30;
  puVar3[1] = uVar8;
  if (iVar4 != 0) {
    lVar5 = uVar8 * 0x30;
    puVar3 = puVar3 + 2;
    do {
      *(undefined4 *)puVar3 = 0;
      lVar5 = lVar5 + -0x30;
      puVar3 = puVar3 + 6;
    } while (lVar5 != 0);
  }
  FUN_10831b450(plVar7);
  for (lVar5 = 0; (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) * 0x30 - lVar5 != 0;
      lVar5 = lVar5 + 0x30) {
    if (*(int *)(lStack_48 + lVar5) != 0) {
      FUN_10831b468(param_1,lStack_48 + lVar5 + 8);
    }
  }
  func_0x00010828c378(&lStack_48);
  return;
}



/* Entry: 10831b2cc; end: 10831b353;  */

long FUN_10831b2cc(long param_1,long param_2)

{
  int iVar1;
  
  if (param_1 != param_2) {
    FUN_10828c474(param_1);
    *(undefined4 *)(param_1 + 8) = 0;
    if ((*(byte *)(param_2 + 0xc) & 1) == 0) {
      iVar1 = *(int *)(param_2 + 8);
      if ((int)(*(uint *)(param_1 + 0xc) >> 1) < iVar1) {
        FUN_10831b390(0x3ff0000000000000,0);
        func_0x00010831b864();
        FUN_10831b354();
        iVar1 = *(int *)(param_2 + 8);
      }
      *(int *)(param_1 + 8) = iVar1;
      if (iVar1 != 0) {
        func_0x00010831b83c();
      }
    }
    else {
      if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
        func_0x00010831b84c();
      }
      func_0x00010831b790();
    }
    *(undefined4 *)(param_2 + 8) = 0;
  }
  return param_1;
}



/* Entry: 10831b354; end: 10831b38f;  */

void FUN_10831b354(long param_1)

{
  long unaff_x19;
  
  func_0x00010831b810();
  if (*(int *)(param_1 + 8) != 0) {
    func_0x00010831b854();
  }
  if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
    func_0x00010831b84c();
  }
  func_0x00010831b7ec();
  return;
}



/* Entry: 10831b390; end: 10831b3d3;  */

undefined8 * FUN_10831b390(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puVar1 = &uStack_20;
  if ((int)param_2 <= (int)((uint)param_1 ^ 0x7fffffff)) {
    uStack_18 = 0x7fffffff;
    uStack_20 = 8;
    FUN_10840fe24(&uStack_20,(int)param_2 + (uint)param_1);
    return puVar1;
  }
  func_0x00010bdb1a68();
  *param_1 = *param_2;
  FUN_10831b3fc(param_1 + 2,param_2 + 2);
  return (undefined8 *)param_1;
}



/* Entry: 10831b3d4; end: 10831b3fb;  */

undefined4 * FUN_10831b3d4(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_10831b3fc(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 10831b3fc; end: 10831b44f;  */

undefined4 * FUN_10831b3fc(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  *(undefined4 **)(param_1 + 4) = param_1 + 2;
  *(undefined8 *)(param_1 + 6) = 0x200000000;
  FUN_10831b2cc(param_1 + 4,param_2 + 4);
  return param_1;
}



/* Entry: 10831b450; end: 10831b467;  */

void FUN_10831b450(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + -8);
    if (lVar2 != 0) {
      lVar3 = lVar2 * -0x30;
      lVar2 = lVar1 + lVar2 * 0x30;
      do {
        lVar2 = lVar2 + -0x30;
        FUN_10828c410(lVar2);
        lVar3 = lVar3 + 0x30;
      } while (lVar3 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(lVar1 + -0x10);
    return;
  }
  return;
}



/* Entry: 10831b468; end: 10831b507;  */

int * FUN_10831b468(int *param_1,uint *param_2)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  ulong uVar4;
  ulong extraout_x9;
  ulong uVar5;
  ulong extraout_x10;
  uint extraout_w11;
  undefined8 uVar6;
  undefined8 extraout_x12;
  
  piVar2 = param_1;
  func_0x00010831b894();
  uVar1 = param_1[1];
  uVar4 = (ulong)(uVar1 - 1 & (uint)piVar2);
  uVar5 = (ulong)*param_2;
  uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  uVar6 = 0x30;
  while( true ) {
    if (uVar1 == 0) {
      return (int *)0x0;
    }
    piVar3 = (int *)(*(long *)(param_1 + 2) + (long)(int)uVar4 * (long)(int)uVar6);
    if (*piVar3 == 0) break;
    if (((int)piVar2 == *piVar3) && ((int)uVar5 == piVar3[2])) {
      FUN_10831b508(piVar3,param_2);
      return piVar3 + 2;
    }
    func_0x00010831b87c();
    uVar4 = extraout_x9;
    uVar5 = extraout_x10;
    uVar6 = extraout_x12;
    uVar1 = extraout_w11;
  }
  FUN_10831b508(piVar3,param_2);
  *param_1 = *param_1 + 1;
  return piVar3 + 2;
}


