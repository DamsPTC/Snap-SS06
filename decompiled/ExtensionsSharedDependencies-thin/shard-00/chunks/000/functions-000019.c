/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0006d378; end: 0006d423;  */

void FUN_0006d378(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0006d424; end: 0006d45b;  */

void FUN_0006d424(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 0006d45c; end: 0006d4a3;  */

uint FUN_0006d45c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_20;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_50 = *(undefined1 *)(param_1 + 4);
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_20 = *(undefined1 *)(param_2 + 4);
  FUN_0006d4a4(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 0006d4a4; end: 0006d577;  */

byte FUN_0006d4a4(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    lVar2 = param_1[3];
    lVar1 = param_2[3];
    if (lVar2 == 0) {
      if (lVar1 == 0) goto LAB_0006d528;
    }
    else if (lVar1 != 0) {
      uVar3 = param_1[2];
      if (((uVar3 != param_2[2]) || (lVar2 != lVar1)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar3,lVar2,param_2[2],lVar1,0), (uVar3 & 1) == 0)) {
        return 0;
      }
LAB_0006d528:
      return (*(byte *)(param_1 + 4) ^ *(byte *)(param_2 + 4) ^ 1) & 1;
    }
  }
  return 0;
}



/* Entry: 0006d578; end: 0006d57f;  */

void FUN_0006d578(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 0006d580; end: 0006d5bb;  */

undefined8 * FUN_0006d580(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 0006d5bc; end: 0006d61f;  */

undefined8 * FUN_0006d5bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



/* Entry: 0006d620; end: 0006d663;  */

undefined8 * FUN_0006d620(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



/* Entry: 0006d664; end: 0006d727;  */

int FUN_0006d664(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x21) != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 0006d728; end: 0006d7fb;  */

void FUN_0006d728(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0006d7fc; end: 0006d81f;  */

void FUN_0006d7fc(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 0006d820; end: 0006d83b; -[SCRegistrationState description] */

void FUN_0006d820(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0006d83c; end: 0006d867;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_0006d83c(long param_1)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + _DAT_00ae8900);
  _objc_release();
  return uVar1;
}



/* Entry: 0006d868; end: 0006d8af; -[SCRegistrationState init] */

void FUN_0006d868(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCRegistrationStateTransition/SCRegistrationStateWrapper.swift",0x3e,2,0x5d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x6d8b0);
  (*pcVar1)();
}



/* Entry: 0006d8b0; end: 0006d93b; -[SCRegistrationState hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006d8b0(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + _DAT_00ae8900));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 0006d93c; end: 0006d9db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0006d93c(undefined8 param_1)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  func_0x00059828(param_1,auStack_50);
  if (lStack_38 == 0) {
    FUN_00027748(auStack_50);
  }
  else {
    plVar4 = &lStack_58;
    _swift_dynamicCast(plVar4,auStack_50,PTR___sypN_0099b8d8 + 8,lVar3,6);
    if (((ulong)plVar4 & 1) != 0) {
      cVar1 = *(char *)(unaff_x20 + _DAT_00ae8900);
      cVar2 = *(char *)(lStack_58 + _DAT_00ae8900);
      _objc_release();
      return cVar1 == cVar2;
    }
  }
  return false;
}



/* Entry: 0006d9dc; end: 0006da5b; -[SCRegistrationState isEqual:] */

uint FUN_0006d9dc(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_0006d93c(&uStack_40);
  _objc_release(param_1);
  FUN_00027748(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 0006da5c; end: 0006da5f; -[SCRegistrationState copyWithZone:] */

void FUN_0006da5c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 0006da60; end: 0006dc1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_0006da60(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
            undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  char *pcVar9;
  undefined *puVar10;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  ulong uVar11;
  undefined8 *unaff_x25;
  undefined8 unaff_x30;
  undefined8 *in_stack_00000000;
  undefined8 *in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 *in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 *in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined8 *in_stack_00000050;
  undefined8 *in_stack_00000058;
  undefined8 *in_stack_00000060;
  undefined8 *in_stack_00000068;
  undefined8 *in_stack_00000070;
  undefined8 *in_stack_00000078;
  undefined8 *in_stack_00000120;
  
  puVar1 = &stack0xffffffffffffffd0;
  puVar4 = (undefined8 *)&stack0xffffffffffffffd0;
  puVar8 = (undefined8 *)&stack0xfffffffffffffff0;
  pcVar9 = (char *)(ulong)*(byte *)((long)unaff_x20 + (long)_DAT_00ae8900);
  puVar10 = &UNK_007d1220;
  puVar2 = &stack0xffffffffffffffd0;
  puVar6 = param_1;
  puVar3 = param_1;
  puVar5 = puVar8;
  switch(*(byte *)((long)unaff_x20 + (long)_DAT_00ae8900)) {
  default:
    pcVar9 = "SUBTYPE_DISPLAY_NAME";
  case 0x7c:
  case 0x8a:
  case 0xc2:
code_r0x0006daa0:
    pcVar9 = pcVar9 + -0x20;
code_r0x0006daa4:
    puVar10 = (undefined *)0x1e;
code_r0x0006daa8:
    puVar10 = (undefined *)((ulong)puVar10 | 0xd000000000000000);
code_r0x0006daac:
    puVar6 = (undefined8 *)(puVar10 + -10);
code_r0x0006dab0:
    break;
  case 1:
    pcVar9 = "NAME_AND_BIRTHDAY";
    puVar6 = (undefined8 *)0xd000000000000010;
    break;
  case 2:
    pcVar9 = "[NSENativeAckDelegate] onAckComplete n_id=";
  case 0x12:
    pcVar9 = pcVar9 + 0xf90;
code_r0x0006db08:
    puVar10 = (undefined *)0x1e;
code_r0x0006db0c:
    puVar6 = (undefined8 *)(((ulong)puVar10 | 0xd000000000000000) + 3);
    break;
  case 3:
  case 0x14:
  case 0xbc:
    pcVar9 = "SUBTYPE_USERNAME_FROM_BIRTHDAY";
    puVar6 = (undefined8 *)0xd00000000000001a;
    break;
  case 4:
    pcVar9 = "[NSENativeAckDelegate] onAckComplete n_id=";
  case 0x1e:
    pcVar9 = pcVar9 + 0xf70;
code_r0x0006dadc:
  case 0x92:
  case 0xca:
code_r0x0006db70:
    pcVar9 = pcVar9 + -0x20;
code_r0x0006db74:
    param_2 = (undefined8 *)((ulong)pcVar9 | 0x8000000000000000);
    puVar6 = (undefined8 *)0xd00000000000001e;
    goto code_r0x0006dbc0;
  case 5:
    pcVar9 = "SUBTYPE_USERNAME_FROM_SUGGESTED_USERNAME";
    goto code_r0x0006dbac;
  case 6:
    pcVar9 = "SUBTYPE_PASSWORD_FROM_BIRTHDAY";
    goto code_r0x0006db70;
  case 7:
    pcVar9 = "SUBTYPE_PASSWORD_FROM_USERNAME";
    goto code_r0x0006db70;
  case 8:
    pcVar9 = "SUBTYPE_PASSWORD_FROM_SUGGESTED_USERNAME";
code_r0x0006dbac:
    pcVar9 = pcVar9 + -0x20;
    puVar6 = (undefined8 *)0xd000000000000028;
    break;
  case 9:
  case 0x22:
    pcVar9 = "SUBTYPE_CHALLENGED_FROM_PASSWORD";
  case 0xd:
  case 0x20:
  case 0x98:
    pcVar9 = pcVar9 + -0x20;
code_r0x0006daec:
    puVar10 = (undefined *)0xd00000000000001e;
code_r0x0006daf4:
    puVar6 = (undefined8 *)(puVar10 + 2);
    break;
  case 10:
    puVar6 = (undefined8 *)&UNK_00005553;
  case 0x70:
    puVar6 = (undefined8 *)((ulong)puVar6 & 0xffff | 0x5f45505954420000);
    param_2 = (undefined8 *)0xec00000054495845;
    goto code_r0x0006dbc0;
  case 0xb:
    puVar6 = (undefined8 *)&UNK_00005553;
  case 0x15:
  case 0x1a:
    puVar6 = (undefined8 *)((ulong)puVar6 & 0xffffffff0000ffff | 0x54420000);
code_r0x0006dabc:
    puVar6 = (undefined8 *)((ulong)puVar6 & 0xffff0000ffffffff | 0x505900000000);
code_r0x0006dac0:
    puVar6 = (undefined8 *)((ulong)puVar6 & 0xffffffffffff | 0x5f45000000000000);
code_r0x0006dac4:
    param_2 = (undefined8 *)&UNK_00004f44;
code_r0x0006dac8:
    param_2 = (undefined8 *)((ulong)param_2 & 0xffff0000ffff | 0xec000000454e0000);
code_r0x0006dad0:
    goto code_r0x0006dbc0;
  case 0xe:
    goto code_r0x0006dac4;
  case 0xf:
  case 0x1d:
    goto code_r0x0006dad0;
  case 0x10:
    goto code_r0x0006daac;
  case 0x11:
    goto code_r0x0006daf4;
  case 0x13:
  case 0x91:
  case 0xc9:
    goto code_r0x0006dadc;
  case 0x16:
  case 0x6e:
  case 0x82:
  case 0x96:
  case 0xaa:
  case 0xb2:
  case 0xba:
  case 0xce:
  case 0xe2:
  case 0xea:
  case 0xf2:
  case 0xfa:
    goto code_r0x0006db0c;
  case 0x17:
  case 0x7a:
  case 0xa2:
  case 0xa4:
  case 0xda:
    goto code_r0x0006daa4;
  case 0x18:
    goto code_r0x0006daec;
  case 0x1b:
    goto code_r0x0006dac0;
  case 0x1c:
  case 0xdc:
    goto code_r0x0006daa8;
  case 0x1f:
    goto code_r0x0006dac8;
  case 0x21:
  case 0x72:
  case 0x9a:
  case 0xd2:
    goto code_r0x0006dab0;
  case 0x23:
    goto code_r0x0006daa0;
  case 0x30:
  case 0x50:
    goto code_r0x0006dbe0;
  case 0x31:
  case 0x40:
  case 0x51:
  case 0x60:
  case 0x67:
    goto code_r0x0006dc2c;
  case 0x32:
  case 0x52:
    goto code_r0x0006dc34;
  case 0x33:
  case 0x39:
  case 0x53:
  case 0x59:
    goto code_r0x0006dc3c;
  case 0x34:
  case 0x54:
    goto code_r0x0006dc64;
  case 0x35:
  case 0x38:
  case 0x3d:
  case 0x3f:
  case 0x55:
  case 0x58:
  case 0x5d:
  case 0x5f:
  case 100:
    goto code_r0x0006dc68;
  case 0x36:
  case 0x56:
    goto code_r0x0006dc60;
  case 0x37:
  case 0x3e:
  case 0x57:
  case 0x5e:
  case 0xe0:
  case 0xe8:
  case 0xf0:
  case 0xf8:
    puVar1 = &stack0xffffffffffffffa0;
  case 0x42:
  case 99:
    *(undefined8 **)(puVar1 + 0x10) = unaff_x20;
    *(undefined8 **)(puVar1 + 0x18) = param_1;
    puVar2 = puVar1;
code_r0x0006dc24:
    *(undefined8 **)(puVar2 + 0x20) = puVar8;
    *(undefined8 *)(puVar2 + 0x28) = unaff_x30;
code_r0x0006dc28:
code_r0x0006dc2c:
    puVar6 = param_3;
code_r0x0006dc34:
    _objc_retain(puVar6);
    unaff_x21 = puVar6;
code_r0x0006dc3c:
code_r0x0006dc40:
    puVar6 = unaff_x21;
    _objc_retain(param_1);
    unaff_x20 = param_1;
    unaff_x21 = puVar6;
code_r0x0006dc4c:
    FUN_0006da60(puVar6);
code_r0x0006dc50:
    param_1 = unaff_x21;
code_r0x0006dc54:
    _objc_release(param_1);
code_r0x0006dc58:
    param_1 = unaff_x20;
code_r0x0006dc60:
code_r0x0006dc64:
code_r0x0006dc68:
    goto code_r0x0077aa60;
  case 0x3a:
  case 0x5a:
    goto code_r0x0006dc54;
  case 0x3b:
  case 0x5b:
    goto code_r0x0006dc50;
  case 0x3c:
  case 0x5c:
  case 0x61:
    goto code_r0x0006dbe4;
  case 0x41:
    goto code_r0x0006dbd4;
  case 0x43:
    goto code_r0x0006dc40;
  case 0x44:
    goto code_r0x0006dc24;
  case 0x62:
  case 0xfc:
code_r0x0006dc7c:
    _objc_allocWithZone();
    FUN_0006dc9c(param_1);
    return param_1;
  case 0x65:
  case 0xa8:
  case 0xb0:
  case 0xb8:
    goto code_r0x0006dc7c;
  case 0x66:
  case 0x90:
    goto code_r0x0006dc58;
  case 0x6c:
    goto code_r0x0006dd0c;
  case 0x6d:
  case 0x81:
  case 0x95:
  case 0xa9:
  case 0xb1:
  case 0xb9:
  case 0xcd:
  case 0xe1:
  case 0xe9:
  case 0xf1:
  case 0xf9:
    goto code_r0x0006dabc;
  case 0x71:
  case 0x99:
    goto code_r0x0006de34;
  case 0x80:
    goto code_r0x0006dcdc;
  case 0x84:
    goto code_r0x0006dc28;
  case 0x85:
  case 0xb5:
  case 0xbd:
    goto code_r0x0006ddac;
  case 0x86:
  case 0xb6:
  case 0xbe:
  case 0xee:
  case 0xf6:
  case 0xfe:
    goto code_r0x0006dcbc;
  case 0x87:
  case 0xaf:
  case 0xb7:
  case 0xbf:
  case 0xe7:
  case 0xef:
  case 0xf7:
  case 0xff:
    goto code_r0x0006de94;
  case 0x94:
  case 0xe5:
    puVar5 = &stack0x00000120;
    in_stack_00000120 = puVar8;
code_r0x0006dcbc:
    _swift_getObjectType();
    puVar6 = (undefined8 *)0x55535f4445444f43;
    param_2 = (undefined8 *)&UNK_00005442;
    unaff_x21 = unaff_x20;
    puVar8 = puVar5;
code_r0x0006dcdc:
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
              (puVar6,(ulong)param_2 & 0xffff | 0xed00004550590000);
    unaff_x22 = param_1;
    func_0x00781b00();
    _objc_retainAutoreleasedReturnValue();
code_r0x0006dd0c:
    _objc_release(puVar6);
    if (unaff_x22 == (undefined8 *)0x0) {
      puVar8[-0xf] = 0;
      puVar8[-0x10] = 0;
      puVar8[-0xd] = 0;
      puVar8[-0xe] = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(puVar8 + -0x10,unaff_x22);
      _swift_unknownObjectRelease(unaff_x22);
    }
    puVar8[-0xb] = puVar8[-0xf];
    puVar8[-0xc] = puVar8[-0x10];
    puVar8[-9] = puVar8[-0xd];
    puVar8[-10] = puVar8[-0xe];
    if (puVar8[-9] == 0) {
      _objc_release(param_1);
      FUN_00027748(puVar8 + -0xc);
      goto LAB_0006e2f8;
    }
    puVar6 = puVar8 + -0x12;
    _swift_dynamicCast(puVar6,puVar8 + -0xc,PTR___sypN_0099b8d8 + 8,PTR___sSSN_0099b040,6);
    if (((ulong)puVar6 & 1) == 0) {
LAB_0006e2f0:
      _objc_release(param_1);
LAB_0006e2f8:
      _swift_getObjectType();
      _swift_deallocPartialClassInstance();
      return (undefined8 *)0x0;
    }
    unaff_x25 = (undefined8 *)0xd00000000000001e;
    unaff_x22 = (undefined8 *)puVar8[-0x11];
    unaff_x23 = (undefined8 *)puVar8[-0x12];
code_r0x0006dd78:
    param_3 = unaff_x23;
    param_4 = unaff_x22;
    param_2 = (undefined8 *)0x80000000008b6fe0;
    puVar6 = (undefined8 *)((long)unaff_x25 + -10);
    if ((param_3 == puVar6) && (param_4 == (undefined8 *)0x80000000008b6fe0)) {
LAB_0006ddb0:
      _swift_bridgeObjectRelease(param_4);
      _objc_allocWithZone();
      *(char *)((long)unaff_x21 + (long)_DAT_00ae8900) = '\0';
    }
    else {
      param_5 = 0;
      unaff_x22 = param_4;
      unaff_x23 = param_3;
code_r0x0006dda8:
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (puVar6,param_2,param_3,param_4,param_5);
code_r0x0006ddac:
      param_4 = unaff_x22;
      if (((ulong)puVar6 & 1) != 0) goto LAB_0006ddb0;
      pcVar9 = "NAME_AND_BIRTHDAY";
      unaff_x22 = param_4;
code_r0x0006de30:
      param_2 = (undefined8 *)((ulong)pcVar9 | 0x8000000000000000);
code_r0x0006de34:
      puVar6 = unaff_x21;
      puVar5 = (undefined8 *)((long)unaff_x25 + -0xe);
      if (((unaff_x23 == puVar5) && (param_2 == unaff_x22)) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (puVar5,param_2,unaff_x23,unaff_x22,0), unaff_x21 = puVar6,
         ((ulong)puVar5 & 1) != 0)) {
        _swift_bridgeObjectRelease(unaff_x22);
        _objc_allocWithZone();
        pcVar9 = _DAT_00ae8900;
code_r0x0006de74:
        *(char *)((long)puVar6 + (long)pcVar9) = '\x01';
        puVar4 = (undefined8 *)&stack0xffffffffffffffe0;
      }
      else {
LAB_0006de90:
        pcVar9 = "[NSENativeAckDelegate] onAckComplete n_id=";
code_r0x0006de94:
        puVar6 = (undefined8 *)((long)unaff_x25 + 3);
        if (((unaff_x23 == puVar6) &&
            ((undefined8 *)((ulong)(pcVar9 + 0xf90) | 0x8000000000000000) == unaff_x22)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (puVar6,(undefined8 *)((ulong)(pcVar9 + 0xf90) | 0x8000000000000000),unaff_x23
                       ,unaff_x22,0), ((ulong)puVar6 & 1) != 0)) {
          _swift_bridgeObjectRelease(unaff_x22);
          _objc_allocWithZone();
          *(char *)((long)unaff_x21 + (long)_DAT_00ae8900) = '\x02';
          puVar4 = (undefined8 *)&stack0xfffffffffffffff0;
        }
        else {
          puVar6 = (undefined8 *)((long)unaff_x25 + -4);
          if (((unaff_x23 == puVar6) && (unaff_x22 == (undefined8 *)0x80000000008b6f70)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (puVar6,0x80000000008b6f70,unaff_x23,unaff_x22,0), ((ulong)puVar6 & 1) != 0)
             ) {
            _swift_bridgeObjectRelease(unaff_x22);
            puVar8 = unaff_x21;
            _objc_allocWithZone();
            *(char *)((long)puVar8 + (long)_DAT_00ae8900) = '\x03';
            puVar4 = (undefined8 *)register0x00000008;
            in_stack_00000000 = puVar8;
            in_stack_00000008 = unaff_x21;
          }
          else {
            if ((unaff_x23 != unaff_x25) || (unaff_x22 != (undefined8 *)0x80000000008b6f50)) {
              uVar11 = 0;
              __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0xd00000000000001e,0x80000000008b6f50,unaff_x23,unaff_x22,0);
              if ((uVar11 & 1) == 0) {
                puVar6 = (undefined8 *)((long)unaff_x25 + 10);
                if (((unaff_x23 == puVar6) && (unaff_x22 == (undefined8 *)0x80000000008b6f20)) ||
                   (puVar5 = puVar6,
                   __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                             (puVar6,0x80000000008b6f20,unaff_x23,unaff_x22,0),
                   ((ulong)puVar5 & 1) != 0)) {
                  _swift_bridgeObjectRelease(unaff_x22);
                  puVar8 = unaff_x21;
                  _objc_allocWithZone();
                  *(char *)((long)puVar8 + (long)_DAT_00ae8900) = '\x05';
                  puVar4 = &stack0x00000020;
                  in_stack_00000020 = puVar8;
                  in_stack_00000028 = unaff_x21;
                }
                else {
                  if ((unaff_x23 != unaff_x25) || (unaff_x22 != (undefined8 *)0x80000000008b6f00)) {
                    uVar11 = 0;
                    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (0xd00000000000001e,0x80000000008b6f00,unaff_x23,unaff_x22,0);
                    if ((uVar11 & 1) == 0) {
                      if ((unaff_x23 != unaff_x25) ||
                         (unaff_x22 != (undefined8 *)0x80000000008b6ee0)) {
                        uVar11 = 0;
                        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                  (0xd00000000000001e,0x80000000008b6ee0,unaff_x23,unaff_x22,0);
                        if ((uVar11 & 1) == 0) {
                          if ((unaff_x23 != puVar6) ||
                             (unaff_x22 != (undefined8 *)0x80000000008b6eb0)) {
                            puVar10 = (undefined *)((long)unaff_x25 + 10);
                            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                      (puVar10,0x80000000008b6eb0,unaff_x23,unaff_x22,0);
                            if (((ulong)puVar10 & 1) == 0) {
                              puVar6 = (undefined8 *)((long)unaff_x25 + 2);
                              if (((unaff_x23 == puVar6) &&
                                  (unaff_x22 == (undefined8 *)0x80000000008b6e80)) ||
                                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                            (puVar6,0x80000000008b6e80,unaff_x23,unaff_x22,0),
                                 ((ulong)puVar6 & 1) != 0)) {
                                _swift_bridgeObjectRelease(unaff_x22);
                                puVar8 = unaff_x21;
                                _objc_allocWithZone();
                                *(char *)((long)puVar8 + (long)_DAT_00ae8900) = '\t';
                                puVar4 = &stack0x00000060;
                                in_stack_00000060 = puVar8;
                                in_stack_00000068 = unaff_x21;
                              }
                              else {
                                uVar11 = 0x5f45505954425553;
                                if (((unaff_x23 == (undefined8 *)0x5f45505954425553) &&
                                    (unaff_x22 == (undefined8 *)0xec00000054495845)) ||
                                   (uVar7 = uVar11,
                                   __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                             (0x5f45505954425553,0xec00000054495845,unaff_x23,
                                              unaff_x22,0), (uVar7 & 1) != 0)) {
                                  _swift_bridgeObjectRelease(unaff_x22);
                                  puVar8 = unaff_x21;
                                  _objc_allocWithZone();
                                  *(char *)((long)puVar8 + (long)_DAT_00ae8900) = '\n';
                                  puVar4 = &stack0x00000070;
                                  in_stack_00000070 = puVar8;
                                  in_stack_00000078 = unaff_x21;
                                }
                                else {
                                  if ((unaff_x23 == (undefined8 *)0x5f45505954425553) &&
                                     (unaff_x22 == (undefined8 *)0xec000000454e4f44)) {
                                    _swift_bridgeObjectRelease(0xec000000454e4f44);
                                  }
                                  else {
                                    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                              (0x5f45505954425553,0xec000000454e4f44,unaff_x23,
                                               unaff_x22,0);
                                    _swift_bridgeObjectRelease(unaff_x22);
                                    if ((uVar11 & 1) == 0) goto LAB_0006e2f0;
                                  }
                                  puVar6 = unaff_x21;
                                  _objc_allocWithZone();
                                  *(char *)((long)puVar6 + (long)_DAT_00ae8900) = '\v';
                                  puVar8[-0x14] = puVar6;
                                  puVar8[-0x13] = unaff_x21;
                                  puVar4 = puVar8 + -0x14;
                                }
                              }
                              goto LAB_0006dddc;
                            }
                          }
                          _swift_bridgeObjectRelease(unaff_x22);
                          puVar8 = unaff_x21;
                          _objc_allocWithZone();
                          *(char *)((long)puVar8 + (long)_DAT_00ae8900) = '\b';
                          puVar4 = &stack0x00000050;
                          in_stack_00000050 = puVar8;
                          in_stack_00000058 = unaff_x21;
                          goto LAB_0006dddc;
                        }
                      }
                      _swift_bridgeObjectRelease(unaff_x22);
                      puVar8 = unaff_x21;
                      _objc_allocWithZone();
                      *(char *)((long)puVar8 + (long)_DAT_00ae8900) = '\a';
                      puVar4 = &stack0x00000040;
                      in_stack_00000040 = puVar8;
                      in_stack_00000048 = unaff_x21;
                      goto LAB_0006dddc;
                    }
                  }
                  _swift_bridgeObjectRelease(unaff_x22);
                  puVar8 = unaff_x21;
                  _objc_allocWithZone();
                  *(char *)((long)puVar8 + (long)_DAT_00ae8900) = '\x06';
                  puVar4 = &stack0x00000030;
                  in_stack_00000030 = puVar8;
                  in_stack_00000038 = unaff_x21;
                }
                goto LAB_0006dddc;
              }
            }
            _swift_bridgeObjectRelease(unaff_x22);
            puVar8 = unaff_x21;
            _objc_allocWithZone();
            *(char *)((long)puVar8 + (long)_DAT_00ae8900) = '\x04';
            puVar4 = &stack0x00000010;
            in_stack_00000010 = puVar8;
            in_stack_00000018 = unaff_x21;
          }
        }
      }
    }
LAB_0006dddc:
    _objc_msgSendSuper2(puVar4,PTR_s_init_00abbf70);
    _objc_release(param_1);
    _swift_getObjectType();
    _swift_deallocPartialClassInstance();
    unaff_x21 = puVar4;
code_r0x0006de08:
    return unaff_x21;
  case 0xac:
    goto code_r0x0006db74;
  case 0xad:
    goto code_r0x0006dbc4;
  case 0xae:
  case 0xe6:
    goto LAB_0006de90;
  case 200:
    goto code_r0x0006dd78;
  case 0xcc:
    goto code_r0x0006dc4c;
  case 0xd0:
    goto code_r0x0006de08;
  case 0xd1:
    goto code_r0x0006de30;
  case 0xe4:
    goto code_r0x0006de74;
  case 0xec:
    goto code_r0x0006db08;
  case 0xed:
  case 0xf5:
  case 0xfd:
    goto code_r0x0006dda8;
  case 0xf4:
    goto code_r0x0006dbf8;
  }
  param_2 = (undefined8 *)((ulong)pcVar9 | 0x8000000000000000);
code_r0x0006dbc0:
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puVar6,param_2);
code_r0x0006dbc4:
  puVar3 = (undefined8 *)0x5f4445444f43;
  unaff_x20 = puVar6;
code_r0x0006dbd4:
  puVar6 = (undefined8 *)((ulong)puVar3 & 0xffffffffffff | 0x5553000000000000);
  param_2 = (undefined8 *)0x50595442;
code_r0x0006dbe0:
  param_2 = (undefined8 *)((ulong)param_2 & 0xffff0000ffffffff | 0x4500000000);
code_r0x0006dbe4:
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (puVar6,(ulong)param_2 & 0xffffffffffff | 0xed00000000000000);
  unaff_x21 = puVar6;
code_r0x0006dbf8:
  func_0x00782780(param_1);
  _objc_release(unaff_x20);
  param_1 = unaff_x21;
code_r0x0077aa60:
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return param_1;
}



/* Entry: 0006dc1c; end: 0006dc6b; -[SCRegistrationState encodeWithCoder:] */

void FUN_0006dc1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_0006da60(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 0006dc6c; end: 0006dc9b;  */

void FUN_0006dc6c(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_0006dc9c(param_1);
  return;
}



/* Entry: 0006dc9c; end: 0006e333;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_0006dc9c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long unaff_x20;
  ulong uVar6;
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar4 = auStack_160;
  _swift_getObjectType();
  uVar1 = 0x55535f4445444f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55535f4445444f43,0xed00004550595442);
  lVar2 = param_1;
  func_0x00781b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (lVar2 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar2);
    _swift_unknownObjectRelease(lVar2);
  }
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    _objc_release(param_1);
    FUN_00027748(&uStack_70);
    goto LAB_0006e2f8;
  }
  plVar3 = &lStack_a0;
  _swift_dynamicCast(plVar3,&uStack_70,PTR___sypN_0099b8d8 + 8,PTR___sSSN_0099b040,6);
  if (((ulong)plVar3 & 1) == 0) {
LAB_0006e2f0:
    _objc_release(param_1);
LAB_0006e2f8:
    _swift_getObjectType();
    _swift_deallocPartialClassInstance();
    return (undefined1 *)0x0;
  }
  uVar6 = 0;
  if (((lStack_a0 == -0x2fffffffffffffec) && (lStack_98 == -0x7fffffffff749020)) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000014,0x80000000008b6fe0,lStack_a0,lStack_98,0), (uVar6 & 1) != 0)) {
    _swift_bridgeObjectRelease(lStack_98);
    _objc_allocWithZone();
    *(undefined1 *)(unaff_x20 + _DAT_00ae8900) = 0;
    goto LAB_0006dddc;
  }
  uVar6 = 0;
  if (((lStack_a0 == -0x2ffffffffffffff0) && (lStack_98 == -0x7fffffffff749040)) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000010,0x80000000008b6fc0,lStack_a0,lStack_98,0), (uVar6 & 1) != 0)) {
    _swift_bridgeObjectRelease(lStack_98);
    _objc_allocWithZone();
    *(undefined1 *)(unaff_x20 + _DAT_00ae8900) = 1;
    puVar4 = auStack_150;
    goto LAB_0006dddc;
  }
  uVar6 = 0xd000000000000021;
  if (((lStack_a0 == -0x2fffffffffffffdf) && (lStack_98 == -0x7fffffffff749070)) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000021,0x80000000008b6f90,lStack_a0,lStack_98,0), (uVar6 & 1) != 0)) {
    _swift_bridgeObjectRelease(lStack_98);
    _objc_allocWithZone();
    *(undefined1 *)(unaff_x20 + _DAT_00ae8900) = 2;
    puVar4 = auStack_140;
    goto LAB_0006dddc;
  }
  uVar6 = 0;
  if (((lStack_a0 == -0x2fffffffffffffe6) && (lStack_98 == -0x7fffffffff749090)) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd00000000000001a,0x80000000008b6f70,lStack_a0,lStack_98,0), (uVar6 & 1) != 0)) {
    _swift_bridgeObjectRelease(lStack_98);
    _objc_allocWithZone();
    *(undefined1 *)(unaff_x20 + _DAT_00ae8900) = 3;
    puVar4 = auStack_130;
    goto LAB_0006dddc;
  }
  if ((lStack_a0 != -0x2fffffffffffffe2) || (lStack_98 != -0x7fffffffff7490b0)) {
    uVar6 = 0;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0xd00000000000001e,0x80000000008b6f50,lStack_a0,lStack_98,0);
    if ((uVar6 & 1) == 0) {
      uVar6 = 0;
      if (((lStack_a0 == -0x2fffffffffffffd8) && (lStack_98 == -0x7fffffffff7490e0)) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0xd000000000000028,0x80000000008b6f20,lStack_a0,lStack_98,0), (uVar6 & 1) != 0)
         ) {
        _swift_bridgeObjectRelease(lStack_98);
        _objc_allocWithZone();
        *(undefined1 *)(unaff_x20 + _DAT_00ae8900) = 5;
        puVar4 = auStack_110;
        goto LAB_0006dddc;
      }
      if ((lStack_a0 != -0x2fffffffffffffe2) || (lStack_98 != -0x7fffffffff749100)) {
        uVar6 = 0;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0xd00000000000001e,0x80000000008b6f00,lStack_a0,lStack_98,0);
        if ((uVar6 & 1) == 0) {
          if ((lStack_a0 != -0x2fffffffffffffe2) || (lStack_98 != -0x7fffffffff749120)) {
            uVar6 = 0;
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0xd00000000000001e,0x80000000008b6ee0,lStack_a0,lStack_98,0);
            if ((uVar6 & 1) == 0) {
              if ((lStack_a0 != -0x2fffffffffffffd8) || (lStack_98 != -0x7fffffffff749150)) {
                uVar6 = 0;
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (0xd000000000000028,0x80000000008b6eb0,lStack_a0,lStack_98,0);
                if ((uVar6 & 1) == 0) {
                  uVar6 = 0;
                  if (((lStack_a0 == -0x2fffffffffffffe0) && (lStack_98 == -0x7fffffffff749180)) ||
                     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (0xd000000000000020,0x80000000008b6e80,lStack_a0,lStack_98,0),
                     (uVar6 & 1) != 0)) {
                    _swift_bridgeObjectRelease(lStack_98);
                    _objc_allocWithZone();
                    *(undefined1 *)(unaff_x20 + _DAT_00ae8900) = 9;
                    puVar4 = auStack_d0;
                    goto LAB_0006dddc;
                  }
                  uVar6 = 0x5f45505954425553;
                  if (((lStack_a0 == 0x5f45505954425553) && (lStack_98 == -0x13ffffffabb6a7bb)) ||
                     (uVar5 = uVar6,
                     __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                               (0x5f45505954425553,0xec00000054495845,lStack_a0,lStack_98,0),
                     (uVar5 & 1) != 0)) {
                    _swift_bridgeObjectRelease(lStack_98);
                    _objc_allocWithZone();
                    *(undefined1 *)(unaff_x20 + _DAT_00ae8900) = 10;
                    puVar4 = auStack_c0;
                    goto LAB_0006dddc;
                  }
                  if ((lStack_a0 == 0x5f45505954425553) && (lStack_98 == -0x13ffffffbab1b0bc)) {
                    _swift_bridgeObjectRelease(0xec000000454e4f44);
                  }
                  else {
                    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (0x5f45505954425553,0xec000000454e4f44,lStack_a0,lStack_98,0);
                    _swift_bridgeObjectRelease(lStack_98);
                    if ((uVar6 & 1) == 0) goto LAB_0006e2f0;
                  }
                  _objc_allocWithZone();
                  *(undefined1 *)(unaff_x20 + _DAT_00ae8900) = 0xb;
                  puVar4 = auStack_b0;
                  goto LAB_0006dddc;
                }
              }
              _swift_bridgeObjectRelease(lStack_98);
              _objc_allocWithZone();
              *(undefined1 *)(unaff_x20 + _DAT_00ae8900) = 8;
              puVar4 = auStack_e0;
              goto LAB_0006dddc;
            }
          }
          _swift_bridgeObjectRelease(lStack_98);
          _objc_allocWithZone();
          *(undefined1 *)(unaff_x20 + _DAT_00ae8900) = 7;
          puVar4 = auStack_f0;
          goto LAB_0006dddc;
        }
      }
      _swift_bridgeObjectRelease(lStack_98);
      _objc_allocWithZone();
      *(undefined1 *)(unaff_x20 + _DAT_00ae8900) = 6;
      puVar4 = auStack_100;
      goto LAB_0006dddc;
    }
  }
  _swift_bridgeObjectRelease(lStack_98);
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_00ae8900) = 4;
  puVar4 = auStack_120;
LAB_0006dddc:
  _objc_msgSendSuper2(puVar4,PTR_s_init_00abbf70);
  _objc_release(param_1);
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return puVar4;
}



/* Entry: 0006e334; end: 0006e35b; -[SCRegistrationState initWithCoder:] */

void FUN_0006e334(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_0006dc9c();
  return;
}



/* Entry: 0006e35c; end: 0006e363; +[SCRegistrationState displayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006e35c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00ae8900) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0006e364; end: 0006e36b; +[SCRegistrationState birthday] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006e364(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00ae8900) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0006e36c; end: 0006e373; +[SCRegistrationState displayNameAndBirthday] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006e36c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00ae8900) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0006e374; end: 0006e37b; +[SCRegistrationState suggestedUsername] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006e374(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00ae8900) = 3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0006e37c; end: 0006e383; +[SCRegistrationState usernameFromBirthday] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006e37c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00ae8900) = 4;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0006e384; end: 0006e38b; +[SCRegistrationState usernameFromSuggestedUsername] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006e384(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00ae8900) = 5;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0006e38c; end: 0006e393; +[SCRegistrationState passwordFromBirthday] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006e38c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00ae8900) = 6;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0006e394; end: 0006e39b; +[SCRegistrationState passwordFromUsername] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006e394(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00ae8900) = 7;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0006e39c; end: 0006e3a3; +[SCRegistrationState passwordFromSuggestedUsername] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006e39c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00ae8900) = 8;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0006e3a4; end: 0006e3ab; +[SCRegistrationState challengedFromPassword] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006e3a4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00ae8900) = 9;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0006e3ac; end: 0006e3b3; +[SCRegistrationState exit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006e3ac(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00ae8900) = 10;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0006e3b4; end: 0006e3bb; +[SCRegistrationState done] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006e3b4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00ae8900) = 0xb;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0006e3bc; end: 0006e40b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006e3bc(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00ae8900) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0006e40c; end: 0006e513;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_0006e40c(code *param_1,undefined1 *param_2,code *param_3,undefined8 param_4,code *param_5,
            undefined8 param_6,code *param_7,undefined8 param_8,code *param_9,undefined4 param_10,
            undefined4 param_11,code *param_12,undefined4 param_13,undefined4 param_14,
            code *param_15,undefined4 param_16,undefined4 param_17,code *param_18,
            undefined *param_19,code *param_20,ulong param_21,code *param_22,ulong param_23,
            code *param_24,undefined **param_25,code *param_26,code *param_27)

{
  uint uVar1;
  code *pcVar2;
  char in_NG;
  undefined1 in_ZR;
  bool in_CY;
  char in_OV;
  code *pcVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  long unaff_x20;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  puVar4 = &stack0xffffffffffffffa0;
  uVar7 = (uint)param_23;
  uVar5 = (uint)param_2;
  pcVar3 = param_1;
  pcVar2 = param_27;
  switch(*(undefined1 *)(unaff_x20 + _DAT_00ae8900)) {
  default:
  case 0x70:
  case 0x7e:
  case 0xb6:
  case 0xf6:
    (*param_1)();
code_r0x0006e478:
    break;
  case 1:
  case 0x14:
  case 0x8c:
  case 0xc:
    (*param_3)();
    break;
  case 2:
  case 0x13:
    (*param_5)();
    break;
  case 3:
  case 0x11:
    (*param_7)();
  case 0x12:
    break;
  case 4:
  case 0x15:
  case 0x66:
  case 0x8e:
  case 0xc6:
    (*param_9)();
    break;
  case 5:
    (*param_12)();
    break;
  case 6:
    (*param_15)();
  case 0xe0:
    break;
  case 7:
  case 0x85:
  case 0xbd:
  case 0xfd:
  case 0x16:
    (*param_18)();
    break;
  case 8:
  case 0xb0:
    (*param_20)();
    break;
  case 9:
  case 0xe:
  case 0x61:
  case 0x75:
  case 0x89:
  case 0x9d:
  case 0xa5:
  case 0xad:
  case 0xc1:
  case 0xd5:
  case 0xdd:
  case 0xe5:
  case 0xed:
    (*param_22)();
code_r0x0006e498:
    break;
  case 10:
  case 0x62:
  case 0x76:
  case 0x8a:
  case 0x9e:
  case 0xa6:
  case 0xae:
  case 0xc2:
  case 0xd6:
  case 0xde:
  case 0xe6:
  case 0xee:
    (*param_24)();
    break;
  case 0xb:
  case 0x6e:
  case 0x96:
  case 0x98:
  case 0xce:
    (*param_26)();
  case 0x10:
  case 0xd0:
    break;
  case 0xf:
    goto code_r0x0006e498;
  case 0x17:
    goto code_r0x0006e478;
  case 0x24:
  case 0x44:
    goto code_r0x0006e5b8;
  case 0x25:
  case 0x34:
  case 0x45:
  case 0x54:
  case 0x5b:
    goto code_r0x0006e604;
  case 0x26:
  case 0x46:
    goto code_r0x0006e60c;
  case 0x27:
  case 0x2d:
  case 0x47:
  case 0x4d:
    goto code_r0x0006e614;
  case 0x29:
  case 0x2c:
  case 0x31:
  case 0x33:
  case 0x49:
  case 0x4c:
  case 0x51:
  case 0x53:
  case 0x58:
    goto code_r0x0006e640;
  case 0x2a:
  case 0x4a:
  case 0x28:
  case 0x48:
code_r0x0006e640:
code_r0x0006e644:
    _swift_getObjectType();
    param_25 = &PTR_s_hash_00ab6000;
code_r0x0006e650:
    param_2 = param_25[0xa7];
code_r0x0006e654:
    _objc_msgSendSuper2(&stack0xffffffffffffffa0,param_2);
    auVar11._8_8_ = param_2;
    auVar11._0_8_ = puVar4;
    return auVar11;
  case 0x2b:
  case 0x32:
  case 0x4b:
  case 0x52:
  case 0xd4:
  case 0xdc:
  case 0xe4:
  case 0xec:
    goto code_r0x0006e5f4;
  case 0x2e:
  case 0x4e:
    goto code_r0x0006e62c;
  case 0x2f:
  case 0x4f:
    goto code_r0x0006e628;
  case 0x30:
  case 0x50:
  case 0x55:
    goto code_r0x0006e5bc;
  case 0x35:
    goto code_r0x0006e5ac;
  case 0x36:
  case 0x57:
    goto code_r0x0006e5f8;
  case 0x37:
    goto code_r0x0006e618;
  case 0x38:
    goto code_r0x0006e5fc;
  case 0x56:
    goto code_r0x0006e644;
  case 0x59:
  case 0x9c:
  case 0xa4:
  case 0xac:
    goto code_r0x0006e654;
  case 0x5a:
  case 0x84:
    goto code_r0x0006e630;
  case 0x60:
    puVar4 = &stack0xffffffffffffffc0;
    param_1[param_23] = SUB81(param_22,0);
    puVar6 = PTR_s_init_00abbf70;
    _objc_msgSendSuper2(puVar4,PTR_s_init_00abbf70);
    auVar13._8_8_ = puVar6;
    auVar13._0_8_ = puVar4;
    return auVar13;
  case 100:
    goto code_r0x0006e560;
  case 0x65:
  case 0x8d:
    goto code_r0x0006e80c;
  case 0x74:
    goto code_r0x0006e6b4;
  case 0x78:
    goto code_r0x0006e600;
  case 0x79:
  case 0xa9:
  case 0xb1:
    goto code_r0x0006e784;
  case 0x7a:
  case 0xaa:
  case 0xb2:
  case 0xe2:
  case 0xea:
  case 0xf2:
    goto code_r0x0006e694;
  case 0x7b:
  case 0xa3:
  case 0xab:
  case 0xb3:
  case 0xdb:
  case 0xe3:
  case 0xeb:
  case 0xf3:
    goto code_r0x0006e86c;
  case 0x86:
  case 0xbe:
  case 0xfe:
  case 0xa0:
code_r0x0006e560:
    _objc_retain();
    param_27 = param_1;
code_r0x0006e59c:
code_r0x0006e5ac:
code_r0x0006e5b8:
    param_2 = &stack0xffffffffffffffc0;
code_r0x0006e5bc:
code_r0x0006e5d0:
code_r0x0006e5f4:
code_r0x0006e5f8:
code_r0x0006e5fc:
code_r0x0006e600:
code_r0x0006e604:
code_r0x0006e60c:
code_r0x0006e614:
    pcVar2 = param_27;
code_r0x0006e618:
    param_1 = pcVar2;
    FUN_0006e40c();
    _objc_release(param_1);
code_r0x0006e624:
code_r0x0006e628:
code_r0x0006e62c:
code_r0x0006e630:
    auVar10._8_8_ = param_2;
    auVar10._0_8_ = param_1;
    return auVar10;
  case 0x88:
  case 0xd9:
    FUN_0006e740();
    param_22 = param_1;
code_r0x0006e694:
    param_1 = pcVar3;
    _objc_allocWithZone();
    param_21 = (ulong)param_22 & 0xff;
    param_19 = &UNK_007d1238;
    param_25 = (undefined **)&stack0xffffffffffffffa0;
code_r0x0006e6b4:
                    /* WARNING: Could not recover jumptable at 0x0006e6c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)param_19[param_21] * 4 + 0x6e6c4))(param_25);
    auVar12._8_8_ = param_2;
    auVar12._0_8_ = param_1;
    return auVar12;
  case 0xa1:
    goto code_r0x0006e59c;
  case 0xa2:
  case 0xda:
    goto code_r0x0006e868;
  case 0xbc:
    _objc_opt_self();
    auVar14._8_8_ = 0;
    auVar14._0_8_ = param_1;
    return auVar14;
  case 0xc0:
    goto code_r0x0006e624;
  case 0xc4:
    goto code_r0x0006e7e0;
  case 0xc5:
    param_25 = (undefined **)((ulong)param_25 >> 8 & 0xffffff);
code_r0x0006e80c:
    if ((uint)param_25 < 0xff) {
      uVar7 = 1;
    }
    uVar1 = 0;
    if (0xf4 < (uint)param_3) {
      uVar1 = uVar7;
    }
    param_25 = (undefined **)(ulong)uVar1;
    if (0xf4 < uVar5) {
      param_23 = (ulong)((uVar5 - 0xf5 >> 8) + 1);
      *param_1 = SUB41(uVar5 - 0xf5,0);
code_r0x0006e84c:
      iVar8 = (int)param_25;
      in_OV = SBORROW4(iVar8,1);
      in_NG = iVar8 + -1 < 0;
      in_ZR = iVar8 == 1;
code_r0x0006e850:
      if (!(bool)in_ZR && in_NG == in_OV) {
        if ((int)param_25 == 2) {
          *(short *)(param_1 + 1) = (short)param_23;
          auVar19._8_8_ = param_2;
          auVar19._0_8_ = param_1;
          return auVar19;
        }
        *(int *)(param_1 + 1) = (int)param_23;
        auVar21._8_8_ = param_2;
        auVar21._0_8_ = param_1;
        return auVar21;
      }
      if ((int)param_25 != 0) {
        param_1[1] = SUB81(param_23,0);
        auVar17._8_8_ = param_2;
        auVar17._0_8_ = param_1;
        return auVar17;
      }
      goto code_r0x0006e894;
    }
    if ((int)uVar1 < 2) {
      if (uVar1 != 0) {
        param_1[1] = (code)0x0;
        if (uVar5 == 0) goto code_r0x0006e894;
        goto code_r0x0006e870;
      }
code_r0x0006e86c:
    }
    else {
      if (uVar1 == 2) {
code_r0x0006e868:
        *(undefined2 *)(param_1 + 1) = 0;
        goto code_r0x0006e86c;
      }
      *(undefined4 *)(param_1 + 1) = 0;
    }
    if (uVar5 != 0) {
code_r0x0006e870:
      *param_1 = (code)((char)param_2 + '\v');
      auVar18._8_8_ = param_2;
      auVar18._0_8_ = param_1;
      return auVar18;
    }
code_r0x0006e894:
    auVar20._8_8_ = param_2;
    auVar20._0_8_ = param_1;
    return auVar20;
  case 0xd8:
    goto code_r0x0006e84c;
  case 0xe1:
  case 0xe9:
  case 0xf1:
    uVar5 = (uint)param_21;
    if (in_CY) {
      uVar5 = uVar7;
    }
    param_23 = (ulong)uVar5;
code_r0x0006e784:
    iVar8 = (int)param_23;
    if (((uint)((ulong)param_25 >> 8) & 0xffffff) < 0xff) {
      iVar8 = 1;
    }
    if (iVar8 == 4) {
      uVar7 = *(uint *)(param_1 + 1);
joined_r0x0006e7bc:
      if (uVar7 != 0) {
LAB_0006e7c0:
        auVar15._4_4_ = 0;
        auVar15._0_4_ = ((uint)(byte)*param_1 | uVar7 << 8) - 0xb;
        auVar15._8_8_ = param_2;
        return auVar15;
      }
    }
    else {
      if (iVar8 != 2) {
        uVar7 = (uint)(byte)param_1[1];
        goto joined_r0x0006e7bc;
      }
      uVar7 = (uint)*(ushort *)(param_1 + 1);
      if (*(ushort *)(param_1 + 1) != 0) goto LAB_0006e7c0;
    }
    param_25 = (undefined **)(ulong)(byte)*param_1;
code_r0x0006e7e0:
    iVar8 = (uint)param_25 - 0xc;
    if ((uint)param_25 < 0xc) {
      iVar8 = -1;
    }
    auVar16._4_4_ = 0;
    auVar16._0_4_ = iVar8 + 1;
    auVar16._8_8_ = param_2;
    return auVar16;
  case 0xe8:
    goto code_r0x0006e5d0;
  case 0xf0:
    goto code_r0x0006e650;
  case 0xfc:
    goto code_r0x0006e850;
  }
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = param_1;
  return auVar9;
}



/* Entry: 0006e514; end: 0006e633; -[SCRegistrationState matchDisplayName:birthday:displayNameAndBirthday:suggestedUsername:usernameFromBirthday:usernameFromSuggestedUsername:passwordFromBirthday:passwordFromUsername:passwordFromSuggestedUsername:challengedFromPassword:exit:done:] */

void FUN_0006e514(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14)

{
  undefined1 auStack_1a0 [16];
  undefined8 uStack_190;
  undefined1 auStack_180 [16];
  undefined8 uStack_170;
  undefined1 auStack_160 [16];
  undefined8 uStack_150;
  undefined1 auStack_140 [16];
  undefined8 uStack_130;
  undefined1 auStack_120 [16];
  undefined8 uStack_110;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_f0 = param_9;
  uStack_110 = param_10;
  uStack_130 = param_11;
  uStack_150 = param_12;
  uStack_170 = param_13;
  uStack_190 = param_14;
  uStack_d0 = param_8;
  uStack_b0 = param_7;
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  FUN_0006e40c(FUN_0006e908,auStack_40,0x6e914,auStack_60,0x6e918,auStack_80,0x6e91c,auStack_a0,
               0x6e920,auStack_c0,0x6e924,auStack_e0,0x6e928,auStack_100,0x6e92c,auStack_120,0x6e930
               ,auStack_140,0x6e934,auStack_160,0x6e938,auStack_180,0x6e93c,auStack_1a0);
  _objc_release(param_1);
  return;
}



/* Entry: 0006e634; end: 0006e667;  */

void FUN_0006e634(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0006e668; end: 0006e67b; -[SCRegistrationState .cxx_destruct] */

void FUN_0006e668(void)

{
  return;
}



/* Entry: 0006e67c; end: 0006e73f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_0006e67c(byte *****param_1,undefined *param_2,undefined8 param_3,undefined8 param_4)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  byte *****pppppbVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  byte *****pppppbVar12;
  byte *****pppppbVar13;
  undefined **ppuVar14;
  byte ****ppppbVar15;
  byte *****pppppbVar16;
  byte *****pppppbVar17;
  byte *****pppppbVar18;
  byte *****pppppbVar19;
  byte ****ppppbVar20;
  byte *****pppppbVar21;
  uint uVar22;
  byte ***UNRECOVERED_JUMPTABLE;
  undefined *puVar23;
  uint uVar24;
  undefined4 uVar25;
  uint uVar26;
  uint uVar27;
  byte *****pppppbVar28;
  byte *****pppppbVar29;
  byte *****pppppbVar30;
  byte *****pppppbVar31;
  int iVar32;
  ulong uVar33;
  byte bVar34;
  long unaff_x21;
  long lVar35;
  undefined8 uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined8 in_stack_00000e90;
  byte ****ppppbStack_e0;
  byte ****ppppbStack_d8;
  byte ****ppppbStack_d0;
  byte ****ppppbStack_c8;
  byte ***apppbStack_c0 [2];
  byte ***apppbStack_b0 [2];
  byte ***apppbStack_a0 [2];
  byte ***apppbStack_90 [2];
  byte ***apppbStack_80 [2];
  byte ***apppbStack_70 [2];
  byte ***apppbStack_60 [2];
  byte ***apppbStack_50 [2];
  byte ***apppbStack_40 [2];
  byte ***apppbStack_30 [2];
  int iVar10;
  int iVar11;
  
  uVar25 = (undefined4)((ulong)param_3 >> 0x20);
  uVar24 = (uint)param_3;
  pppppbVar21 = &ppppbStack_e0;
  pppppbVar28 = &ppppbStack_e0;
  pppppbVar29 = &ppppbStack_e0;
  pppppbVar30 = &ppppbStack_e0;
  uVar26 = (uint)((ulong)&ppppbStack_e0 >> 8);
  uVar27 = (uint)&ppppbStack_e0;
  iVar11 = (int)&ppppbStack_e0;
  iVar9 = (int)&ppppbStack_e0;
  iVar10 = (int)&ppppbStack_e0;
  pppppbVar16 = &ppppbStack_e0;
  pppppbVar17 = &ppppbStack_e0;
  pppppbVar19 = &ppppbStack_e0;
  pppppbVar12 = param_1;
  FUN_0006e740();
  pppppbVar18 = pppppbVar12;
  _objc_allocWithZone();
  bVar34 = (byte)param_1;
  uVar22 = (uint)param_2;
  pppppbVar13 = pppppbVar18;
  pppppbVar31 = &ppppbStack_e0;
  pppppbVar6 = &ppppbStack_e0;
  uVar33 = _DAT_00ae8900;
  iVar32 = (int)&ppppbStack_e0;
  iVar5 = (int)&ppppbStack_e0;
  iVar7 = (int)&ppppbStack_e0;
  iVar8 = (int)&ppppbStack_e0;
  switch((ulong)param_1 & 0xff) {
  case 0:
    break;
  default:
    pppppbVar21 = &ppppbStack_d0;
  case 100:
  case 0x72:
  case 0xaa:
  case 0xea:
    pppppbVar6 = pppppbVar21;
    break;
  case 2:
    pppppbVar29 = (byte *****)apppbStack_c0;
  case 0x55:
  case 0x69:
  case 0x7d:
  case 0x91:
  case 0x99:
  case 0xa1:
  case 0xb5:
  case 0xc9:
  case 0xd1:
  case 0xd9:
  case 0xe1:
    pppppbVar6 = pppppbVar29;
    break;
  case 3:
    pppppbVar6 = (byte *****)apppbStack_b0;
    break;
  case 4:
  case 0xc4:
    pppppbVar6 = (byte *****)apppbStack_a0;
    break;
  case 5:
    pppppbVar6 = (byte *****)apppbStack_90;
    break;
  case 6:
    pppppbVar30 = (byte *****)apppbStack_80;
  case 0x79:
  case 0xb1:
  case 0xf1:
    pppppbVar6 = pppppbVar30;
    break;
  case 7:
    pppppbVar6 = (byte *****)apppbStack_70;
    break;
  case 8:
  case 0x80:
    pppppbVar6 = (byte *****)apppbStack_60;
    break;
  case 9:
  case 0x5a:
  case 0x82:
  case 0xba:
    pppppbVar6 = (byte *****)apppbStack_50;
    break;
  case 10:
    pppppbVar6 = (byte *****)apppbStack_40;
    break;
  case 0xb:
    pppppbVar28 = (byte *****)apppbStack_30;
  case 0x62:
  case 0x8a:
  case 0x8c:
  case 0xc2:
    pppppbVar6 = pppppbVar28;
    break;
  case 0x18:
  case 0x38:
  case 0xf8:
    goto code_r0x0006e80c;
  case 0x19:
  case 0x28:
  case 0x39:
  case 0x48:
  case 0x4f:
  case 0xf9:
    goto code_r0x0006e858;
  case 0x1a:
  case 0x3a:
  case 0xfa:
    goto code_r0x0006e860;
  case 0x1b:
  case 0x21:
  case 0x3b:
  case 0x41:
  case 0xfb:
    goto code_r0x0006e868;
  case 0x1c:
  case 0x3c:
  case 0xfc:
    goto code_r0x0006e890;
  case 0x1d:
  case 0x20:
  case 0x25:
  case 0x27:
  case 0x3d:
  case 0x40:
  case 0x45:
  case 0x47:
  case 0x4c:
  case 0xfd:
    goto code_r0x0006e894;
  case 0x1e:
  case 0x3e:
  case 0xfe:
    goto code_r0x0006e88c;
  case 0x1f:
  case 0x26:
  case 0x3f:
  case 0x46:
  case 200:
  case 0xd0:
  case 0xd8:
  case 0xe0:
  case 0xff:
    goto code_r0x0006e848;
  case 0x22:
  case 0x42:
    goto code_r0x0006e880;
  case 0x23:
  case 0x43:
    goto code_r0x0006e87c;
  case 0x24:
  case 0x44:
  case 0x49:
    goto code_r0x0006e810;
  case 0x29:
    goto code_r0x0006e800;
  case 0x2a:
  case 0x4b:
    goto code_r0x0006e84c;
  case 0x2b:
    goto code_r0x0006e86c;
  case 0x2c:
    goto code_r0x0006e850;
  case 0x4a:
    goto code_r0x0006e898;
  case 0x4d:
  case 0x90:
  case 0x98:
  case 0xa0:
    auVar48._8_8_ = param_2;
    auVar48._0_8_ = pppppbVar18;
    return auVar48;
  case 0x4e:
  case 0x78:
    goto code_r0x0006e884;
  case 0x54:
  case 0x68:
    ppppbVar15 = pppppbVar12[2];
    UNRECOVERED_JUMPTABLE = ppppbVar15[2];
                    /* WARNING: Could not recover jumptable at 0x0006e910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE)();
    auVar50._8_8_ = UNRECOVERED_JUMPTABLE;
    auVar50._0_8_ = ppppbVar15;
    return auVar50;
  case 0x56:
  case 0x6a:
  case 0x7e:
  case 0x92:
  case 0x9a:
  case 0xa2:
  case 0xb6:
  case 0xca:
  case 0xd2:
  case 0xda:
  case 0xe2:
    goto code_r0x0006e738;
  case 0x58:
    auVar39._8_8_ = param_2;
    auVar39._0_8_ = pppppbVar18;
    return auVar39;
  case 0x59:
  case 0x81:
    goto code_r0x0006ea60;
  case 0x6c:
    goto code_r0x0006e854;
  case 0x6d:
  case 0x9d:
  case 0xa5:
    goto code_r0x0006e9d8;
  case 0x6e:
  case 0x9e:
  case 0xa6:
  case 0xd6:
  case 0xde:
  case 0xe6:
    goto code_r0x0006e8e8;
  case 0x6f:
  case 0x97:
  case 0x9f:
  case 0xa7:
  case 0xcf:
  case 0xd7:
  case 0xdf:
  case 0xe7:
    goto code_r0x0006eac0;
  case 0x7a:
  case 0xb2:
  case 0xf2:
    if (!(bool)in_ZR) {
      uVar26 = (uint)*(byte *)((long)pppppbVar18 + 1);
      if (uVar26 != 0) goto LAB_0006e7c0;
      goto LAB_0006e7dc;
    }
  case 0x94:
    uVar26 = (uint)*(ushort *)((long)pppppbVar18 + 1);
    if (*(ushort *)((long)pppppbVar18 + 1) != 0) {
LAB_0006e7c0:
      auVar40._4_4_ = 0;
      auVar40._0_4_ = ((uint)*(byte *)pppppbVar18 | uVar26 << 8) - 0xb;
      auVar40._8_8_ = param_2;
      return auVar40;
    }
LAB_0006e7dc:
    iVar5 = *(byte *)pppppbVar18 - 0xc;
    if (*(byte *)pppppbVar18 < 0xc) {
      iVar5 = -1;
    }
    auVar41._4_4_ = 0;
    auVar41._0_4_ = iVar5 + 1;
    auVar41._8_8_ = param_2;
    return auVar41;
  case 0x7c:
  case 0xcd:
    pppppbVar18 = (byte *****)&UNK_007d128c;
code_r0x0006e8e8:
    puVar23 = &UNK_009a1c18;
    _swift_getWitnessTable();
    pppppbRam0000000000ae8930 = pppppbVar18;
    auVar49._8_8_ = puVar23;
    auVar49._0_8_ = pppppbVar18;
    return auVar49;
  case 0x95:
    uVar26 = uVar24 + 0xb >> 8;
    in_CY = 0xfffeff < uVar24 + 0xb;
    uVar33 = 4;
code_r0x0006e800:
    uVar27 = 2;
    if ((bool)in_CY) {
      uVar27 = (uint)uVar33;
    }
    uVar33 = (ulong)uVar27;
    uVar27 = uVar26 & 0xffffff;
code_r0x0006e80c:
    in_CY = 0xfe < uVar27;
code_r0x0006e810:
    iVar32 = (int)uVar33;
    if (!(bool)in_CY) {
      iVar32 = 1;
    }
    iVar5 = 0;
    if (0xf4 < uVar24) {
      iVar5 = iVar32;
    }
    if (0xf4 < uVar22) {
      bVar34 = (byte)(uVar22 - 0xf5);
      uVar33 = (ulong)((uVar22 - 0xf5 >> 8) + 1);
      iVar8 = iVar5;
code_r0x0006e848:
      iVar11 = iVar8;
      *(byte *)pppppbVar18 = bVar34;
code_r0x0006e84c:
      in_OV = SBORROW4(iVar11,1);
      in_NG = iVar11 + -1 < 0;
      in_ZR = iVar11 == 1;
      iVar7 = iVar11;
code_r0x0006e850:
      iVar9 = iVar7;
      iVar32 = iVar9;
      if (!(bool)in_ZR && in_NG == in_OV) {
code_r0x0006e87c:
        in_ZR = iVar32 == 2;
code_r0x0006e880:
        if (!(bool)in_ZR) {
code_r0x0006e898:
          *(int *)((long)pppppbVar18 + 1) = (int)uVar33;
          auVar46._8_8_ = param_2;
          auVar46._0_8_ = pppppbVar18;
          return auVar46;
        }
code_r0x0006e884:
        *(short *)((long)pppppbVar18 + 1) = (short)uVar33;
        auVar44._8_8_ = param_2;
        auVar44._0_8_ = pppppbVar18;
        return auVar44;
      }
code_r0x0006e854:
      if (iVar9 != 0) {
code_r0x0006e858:
        *(byte *)((long)pppppbVar18 + 1) = (byte)uVar33;
        auVar42._8_8_ = param_2;
        auVar42._0_8_ = pppppbVar18;
        return auVar42;
      }
      goto code_r0x0006e894;
    }
code_r0x0006e824:
    iVar10 = iVar5;
    if (iVar10 < 2) {
      if (iVar10 == 0) {
code_r0x0006e86c:
      }
      else {
        *(byte *)((long)pppppbVar18 + 1) = 0;
      }
    }
    else {
code_r0x0006e860:
      if (iVar10 == 2) {
code_r0x0006e868:
        ((byte *)((long)pppppbVar18 + 1))[0] = 0;
        ((byte *)((long)pppppbVar18 + 1))[1] = 0;
        goto code_r0x0006e86c;
      }
code_r0x0006e88c:
      pbVar1 = (byte *)((long)pppppbVar18 + 1);
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
code_r0x0006e890:
    }
    if (uVar22 != 0) {
      *(byte *)pppppbVar18 = (char)param_2 + 0xb;
code_r0x0006e878:
      auVar43._8_8_ = param_2;
      auVar43._0_8_ = pppppbVar18;
      return auVar43;
    }
code_r0x0006e894:
    auVar45._8_8_ = param_2;
    auVar45._0_8_ = pppppbVar18;
    return auVar45;
  case 0x96:
  case 0xce:
    goto code_r0x0006eabc;
  case 0xa4:
    ppuVar14 = &PTR_PTR_00ac8d30;
    _objc_opt_self(&PTR_PTR_00ac8d30);
    auVar38._8_8_ = 0;
    auVar38._0_8_ = ppuVar14;
    return auVar38;
  case 0xb0:
    _objc_msgSendSuper2(&ppppbStack_e0,in_stack_00000e90);
    auVar51._8_8_ = in_stack_00000e90;
    auVar51._0_8_ = pppppbVar16;
    return auVar51;
  case 0xb4:
    goto code_r0x0006e878;
  case 0xb8:
    goto code_r0x0006ea34;
  case 0xb9:
    FUN_0006ea6c();
code_r0x0006ea60:
    auVar53._8_8_ = param_2;
    auVar53._0_8_ = pppppbVar18;
    return auVar53;
  case 0xcc:
    in_ZR = (int)pppppbVar18 == 0xc;
  case 0xf0:
    if ((bool)in_ZR) {
      pppppbVar18 = (byte *****)0x0;
      pppppbVar31 = (byte *****)_DAT_00ae8938;
    }
    else {
      FUN_0006e67c();
      pppppbVar31 = (byte *****)_DAT_00ae8938;
    }
code_r0x0006eabc:
    *(byte ******)((long)pppppbVar12 + (long)pppppbVar31) = pppppbVar18;
code_r0x0006eac0:
    lVar35 = *(long *)(unaff_x21 + 0x20);
    if (lVar35 == 1) {
      pppppbVar19 = (byte *****)0x0;
    }
    else {
      bVar34 = *(byte *)(unaff_x21 + 0x28);
      uVar3 = *(undefined8 *)(unaff_x21 + 0x10);
      uVar4 = *(undefined8 *)(unaff_x21 + 0x18);
      uVar36 = *(undefined8 *)(unaff_x21 + 8);
      ppppbVar20 = (byte ****)0x0;
      FUN_0006f658();
      ppppbVar15 = ppppbVar20;
      _objc_allocWithZone();
      *(undefined8 *)((long)ppppbVar15 + _DAT_00ae8970) = uVar36;
      *(undefined8 *)((long)ppppbVar15 + _DAT_00ae8978) = uVar3;
      puVar2 = (undefined8 *)((long)ppppbVar15 + _DAT_00ae8980);
      *puVar2 = uVar4;
      puVar2[1] = lVar35;
      *(byte *)((long)ppppbVar15 + _DAT_00ae8988) = bVar34 & 1;
      ppppbStack_e0 = ppppbVar15;
      ppppbStack_d8 = ppppbVar20;
      _objc_msgSendSuper2(&ppppbStack_e0,PTR_s_init_00abbf70);
    }
    *(byte ******)((long)pppppbVar12 + _DAT_00ae8940) = pppppbVar19;
    pppppbVar21 = &ppppbStack_d0;
    puVar23 = PTR_s_init_00abbf70;
    ppppbStack_d0 = (byte ****)pppppbVar12;
    ppppbStack_c8 = (byte ****)param_1;
    _objc_msgSendSuper2(pppppbVar21,PTR_s_init_00abbf70);
    auVar54._8_8_ = puVar23;
    auVar54._0_8_ = pppppbVar21;
    return auVar54;
  case 0xd4:
    goto code_r0x0006e734;
  case 0xd5:
  case 0xdd:
  case 0xe5:
code_r0x0006e9d8:
    pppppbVar21 = pppppbVar18;
    _swift_getObjectType();
    *(ulong *)((long)pppppbVar18 + (long)_DAT_00ae8938) = CONCAT44(uVar25,uVar24);
    *(undefined8 *)((long)pppppbVar18 + _DAT_00ae8940) = param_4;
    param_2 = PTR_s_init_00abbf70;
    ppppbStack_e0 = (byte ****)pppppbVar18;
    ppppbStack_d8 = (byte ****)pppppbVar21;
    _objc_retain(CONCAT44(uVar25,uVar24));
    _objc_retain(param_4);
    _objc_msgSendSuper2(&ppppbStack_e0,param_2);
    pppppbVar18 = pppppbVar17;
code_r0x0006ea34:
    auVar52._8_8_ = param_2;
    auVar52._0_8_ = pppppbVar18;
    return auVar52;
  case 0xdc:
    goto code_r0x0006e824;
  case 0xe4:
    auVar47._8_8_ = param_2;
    auVar47._0_8_ = pppppbVar18;
    return auVar47;
  }
  pppppbVar13 = pppppbVar6;
  *(byte *)((long)pppppbVar18 + _DAT_00ae8900) = bVar34;
  *pppppbVar13 = (byte ****)pppppbVar18;
  pppppbVar13[1] = (byte ****)pppppbVar12;
  param_2 = PTR_s_init_00abbf70;
  _objc_msgSendSuper2(pppppbVar13,PTR_s_init_00abbf70);
code_r0x0006e734:
code_r0x0006e738:
  auVar37._8_8_ = param_2;
  auVar37._0_8_ = pppppbVar13;
  return auVar37;
}



/* Entry: 0006e740; end: 0006e75f;  */

void FUN_0006e740(void)

{
  _objc_opt_self(&PTR_PTR_00ac8d30);
  return;
}



/* Entry: 0006e760; end: 0006e8c7;  */

int FUN_0006e760(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf4 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0xb) {
      iVar2 = 4;
    }
    if (param_2 + 0xb >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_0006e7dc;
        goto LAB_0006e7c0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_0006e7c0:
      return ((uint)*param_1 | uVar1 << 8) - 0xb;
    }
  }
LAB_0006e7dc:
  iVar2 = *param_1 - 0xc;
  if (*param_1 < 0xc) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 0006e8c8; end: 0006e907;  */

void FUN_0006e8c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae8930 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d128c;
  _swift_getWitnessTable(&UNK_007d128c,&UNK_009a1c18);
  puRam0000000000ae8930 = puVar1;
  return;
}



/* Entry: 0006e908; end: 0006e93f;  */

void FUN_0006e908(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0006e910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 0006e940; end: 0006e94f; -[SCRegistrationStateConfig state] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006e940(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_0099adb8)
            (*(undefined8 *)(param_1 + _DAT_00ae8938));
  return;
}



/* Entry: 0006e950; end: 0006e95f; -[SCRegistrationStateConfig viewConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006e950(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_0099adb8)
            (*(undefined8 *)(param_1 + _DAT_00ae8940));
  return;
}



/* Entry: 0006e960; end: 0006e9c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006e960(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_00ae8938) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_00ae8940) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_00abbf70);
  return;
}



/* Entry: 0006e9c4; end: 0006ea3b; -[SCRegistrationStateConfig initWithState:viewConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006e9c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_00ae8938) = param_3;
  *(undefined8 *)(param_1 + _DAT_00ae8940) = param_4;
  puVar1 = PTR_s_init_00abbf70;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 0006ea3c; end: 0006ea6b;  */

void FUN_0006ea3c(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_0006ea6c(param_1);
  return;
}



/* Entry: 0006ea6c; end: 0006eb87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006ea6c(byte *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  long lStack_80;
  long lStack_78;
  
  plVar6 = &lStack_80;
  _swift_getObjectType();
  uVar5 = (ulong)*param_1;
  if (*param_1 == 0xc) {
    uVar5 = 0;
  }
  else {
    FUN_0006e67c();
  }
  *(ulong *)(unaff_x20 + _DAT_00ae8938) = uVar5;
  lVar9 = *(long *)(param_1 + 0x20);
  if (lVar9 == 1) {
    plVar6 = (long *)0x0;
  }
  else {
    bVar4 = param_1[0x28];
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    uVar10 = *(undefined8 *)(param_1 + 8);
    lVar7 = 0;
    FUN_0006f658();
    lVar8 = lVar7;
    _objc_allocWithZone();
    *(undefined8 *)(lVar8 + _DAT_00ae8970) = uVar10;
    *(undefined8 *)(lVar8 + _DAT_00ae8978) = uVar2;
    puVar1 = (undefined8 *)(lVar8 + _DAT_00ae8980);
    *puVar1 = uVar3;
    puVar1[1] = lVar9;
    *(byte *)(lVar8 + _DAT_00ae8988) = bVar4 & 1;
    lStack_80 = lVar8;
    lStack_78 = lVar7;
    _objc_msgSendSuper2(&lStack_80,PTR_s_init_00abbf70);
  }
  *(long **)(unaff_x20 + _DAT_00ae8940) = plVar6;
  _objc_msgSendSuper2(&stack0xffffffffffffff90,PTR_s_init_00abbf70);
  return;
}



/* Entry: 0006eb88; end: 0006ebbb; -[SCRegistrationStateConfig hash] */

undefined8 FUN_0006eb88(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_0006ebbc();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 0006ebbc; end: 0006ee13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006ebbc(void)

{
  ulong uVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_c0 [72];
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  lVar2 = *(long *)(unaff_x20 + _DAT_00ae8938);
  if (lVar2 == 0) {
    uVar1 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(auStack_c0);
    uVar1 = (ulong)*(byte *)(lVar2 + _DAT_00ae8900);
    __ss6HasherV8_combineyySuF(uVar1);
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  if (*(long *)(unaff_x20 + _DAT_00ae8940) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_0006f120();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 0006ee14; end: 0006ee93; -[SCRegistrationStateConfig isEqual:] */

uint FUN_0006ee14(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  func_0x0006ec98(&uStack_40);
  _objc_release(param_1);
  FUN_00027748(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 0006ee94; end: 0006ee97; -[SCRegistrationStateConfig copyWithZone:] */

void FUN_0006ee94(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 0006ee98; end: 0006eecb; -[SCRegistrationStateConfig description] */

void FUN_0006ee98(void)

{
  undefined1 auStack_40 [48];
  
  FUN_0006ef80(auStack_40);
  FUN_0006f050(auStack_40);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0006eecc; end: 0006ef47; -[SCRegistrationStateConfig init] */

void FUN_0006eecc(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCRegistrationStateTransition/SCRegistrationStateConfigWrapper.swift",0x44,2,0x36,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x6ef14);
  (*pcVar1)();
}



/* Entry: 0006ef48; end: 0006ef7f; -[SCRegistrationStateConfig .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006ef48(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_00ae8938));
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(*(undefined8 *)(param_1 + _DAT_00ae8940));
  return;
}



/* Entry: 0006ef80; end: 0006f04f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006ef80(undefined1 *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  
  if (*(long *)(param_2 + _DAT_00ae8938) == 0) {
    uVar3 = 0xc;
  }
  else {
    uVar3 = *(undefined1 *)(*(long *)(param_2 + _DAT_00ae8938) + _DAT_00ae8900);
  }
  lVar2 = *(long *)(param_2 + _DAT_00ae8940);
  if (lVar2 == 0) {
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
    uVar1 = 1;
  }
  else {
    uVar4 = *(undefined8 *)(lVar2 + _DAT_00ae8970);
    uVar5 = *(undefined8 *)(lVar2 + _DAT_00ae8978);
    uVar6 = *(undefined8 *)(lVar2 + _DAT_00ae8980);
    uVar1 = ((undefined8 *)(lVar2 + _DAT_00ae8980))[1];
    uVar7 = *(undefined1 *)(lVar2 + _DAT_00ae8988);
    _swift_bridgeObjectRetain();
  }
  *param_1 = uVar3;
  *(undefined8 *)(param_1 + 8) = uVar4;
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  param_1[0x28] = uVar7;
  return;
}



/* Entry: 0006f050; end: 0006f083;  */

undefined8 FUN_0006f050(undefined8 param_1)

{
  FUN_0006cf98();
  return param_1;
}



/* Entry: 0006f084; end: 0006f0a3;  */

void FUN_0006f084(void)

{
  _objc_opt_self(&PTR_PTR_00ac8df8);
  return;
}



/* Entry: 0006f0a4; end: 0006f11f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006f0a4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  uVar2 = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_00ae8970) = *param_1;
  *(undefined8 *)(unaff_x20 + _DAT_00ae8978) = uVar2;
  uVar2 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00ae8980);
  puVar1[1] = param_1[3];
  *puVar1 = uVar2;
  *(undefined1 *)(unaff_x20 + _DAT_00ae8988) = *(undefined1 *)(param_1 + 4);
  _objc_msgSendSuper2(auStack_30,PTR_s_init_00abbf70);
  return;
}



/* Entry: 0006f120; end: 0006f1db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006f120(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_00ae8970));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_00ae8978));
  if (((undefined8 *)(unaff_x20 + _DAT_00ae8980))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_00ae8980);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x007843a0();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_00ae8988));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 0006f1dc; end: 0006f327;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0006f1dc(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lStack_78;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar4 = unaff_x20;
  _swift_getObjectType();
  func_0x00059828(param_1,auStack_70);
  if (lStack_58 == 0) {
    FUN_00027748(auStack_70);
  }
  else {
    plVar3 = &lStack_78;
    _swift_dynamicCast(plVar3,auStack_70,PTR___sypN_0099b8d8 + 8,lVar4,6);
    if (((ulong)plVar3 & 1) != 0) {
      lVar8 = *(long *)(unaff_x20 + _DAT_00ae8970);
      lVar9 = *(long *)(lStack_78 + _DAT_00ae8970);
      lVar10 = *(long *)(unaff_x20 + _DAT_00ae8978);
      lVar11 = *(long *)(lStack_78 + _DAT_00ae8978);
      lVar4 = ((long *)(unaff_x20 + _DAT_00ae8980))[1];
      lVar5 = ((long *)(lStack_78 + _DAT_00ae8980))[1];
      uVar6 = (uint)(lVar4 == 0 && lVar5 == 0);
      if (lVar4 != 0 && lVar5 != 0) {
        lVar7 = *(long *)(unaff_x20 + _DAT_00ae8980);
        if (lVar7 == *(long *)(lStack_78 + _DAT_00ae8980) && lVar4 == lVar5) {
          uVar6 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (lVar7);
          uVar6 = (uint)lVar7;
        }
      }
      bVar1 = *(byte *)(unaff_x20 + _DAT_00ae8988);
      bVar2 = *(byte *)(lStack_78 + _DAT_00ae8988);
      _objc_release();
      if (lVar8 == lVar9 && lVar10 == lVar11) {
        uVar6 = uVar6 & ((bVar1 ^ bVar2) ^ 1);
        goto LAB_0006f2f8;
      }
    }
  }
  uVar6 = 0;
LAB_0006f2f8:
  return uVar6 & 1;
}



/* Entry: 0006f328; end: 0006f337; -[SCRegistrationStateViewConfig currentStep] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0006f328(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_00ae8970);
}



/* Entry: 0006f338; end: 0006f347; -[SCRegistrationStateViewConfig totalSteps] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0006f338(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_00ae8978);
}



/* Entry: 0006f348; end: 0006f3a3; -[SCRegistrationStateViewConfig continueButtonText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006f348(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_00ae8980))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_00ae8980);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 0006f3a4; end: 0006f3b3; -[SCRegistrationStateViewConfig show1TLCheckbox] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_0006f3a4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_00ae8988);
}



/* Entry: 0006f3b4; end: 0006f447;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006f3b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_00ae8970) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_00ae8978) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00ae8980);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_00ae8988) = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_00abbf70);
  return;
}



/* Entry: 0006f448; end: 0006f4f3; -[SCRegistrationStateViewConfig initWithCurrentStep:totalSteps:continueButtonText:show1TLCheckbox:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006f448(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                 undefined1 param_6)

{
  long *plVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  *(undefined8 *)(param_1 + _DAT_00ae8970) = param_3;
  *(undefined8 *)(param_1 + _DAT_00ae8978) = param_4;
  plVar1 = (long *)(param_1 + _DAT_00ae8980);
  *plVar1 = param_5;
  plVar1[1] = param_2;
  *(undefined1 *)(param_1 + _DAT_00ae8988) = param_6;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_00abbf70);
  return;
}



/* Entry: 0006f4f4; end: 0006f527; -[SCRegistrationStateViewConfig hash] */

undefined8 FUN_0006f4f4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_0006f120();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 0006f528; end: 0006f5a7; -[SCRegistrationStateViewConfig isEqual:] */

uint FUN_0006f528(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_0006f1dc(&uStack_40);
  _objc_release(param_1);
  FUN_00027748(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 0006f5a8; end: 0006f5ab; -[SCRegistrationStateViewConfig copyWithZone:] */

void FUN_0006f5a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 0006f5ac; end: 0006f5c7; -[SCRegistrationStateViewConfig description] */

void FUN_0006f5ac(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0006f5c8; end: 0006f643; -[SCRegistrationStateViewConfig init] */

void FUN_0006f5c8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCRegistrationStateTransition/SCRegistrationStateViewConfigWrapper.swift",0x48,2,0x42,
             0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x6f610);
  (*pcVar1)();
}



/* Entry: 0006f644; end: 0006f657; -[SCRegistrationStateViewConfig .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006f644(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(*(undefined8 *)(param_1 + _DAT_00ae8980 + 8));
  return;
}



/* Entry: 0006f658; end: 0006f677;  */

void FUN_0006f658(void)

{
  _objc_opt_self(&PTR_PTR_00ac8ec8);
  return;
}



/* Entry: 0006f678; end: 0006f84b;  */

long FUN_0006f678(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 0006f84c; end: 0006f86b;  */

undefined8
FUN_0006f84c(ulong param_1,long param_2,ulong param_3,long param_4,ulong param_5,long param_6,
            ulong param_7,long param_8)

{
  if (param_2 == 0) {
    if (param_6 != 0) {
      return 0;
    }
  }
  else {
    if (param_6 == 0) {
      return 0;
    }
    if (((param_1 != param_5) || (param_2 != param_6)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (param_1,param_2,param_5,param_6,0), (param_1 & 1) == 0)) {
      return 0;
    }
  }
  if (param_4 == 0) {
    if (param_8 == 0) {
      return 1;
    }
  }
  else if ((param_8 != 0) &&
          (((param_3 == param_7 && (param_4 == param_8)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (param_3,param_4,param_7,param_8,0), (param_3 & 1) != 0)))) {
    return 1;
  }
  return 0;
}



/* Entry: 0006f86c; end: 0006f923;  */

undefined8
FUN_0006f86c(ulong param_1,long param_2,ulong param_3,long param_4,ulong param_5,long param_6,
            ulong param_7,long param_8)

{
  if (param_2 == 0) {
    if (param_6 != 0) {
      return 0;
    }
  }
  else {
    if (param_6 == 0) {
      return 0;
    }
    if (((param_1 != param_5) || (param_2 != param_6)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (param_1,param_2,param_5,param_6,0), (param_1 & 1) == 0)) {
      return 0;
    }
  }
  if (param_4 == 0) {
    if (param_8 == 0) {
      return 1;
    }
  }
  else if ((param_8 != 0) &&
          (((param_3 == param_7 && (param_4 == param_8)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (param_3,param_4,param_7,param_8,0), (param_3 & 1) != 0)))) {
    return 1;
  }
  return 0;
}



/* Entry: 0006f924; end: 0006f9b3;  */

long FUN_0006f924(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 0006f9b4; end: 0006fa1f;  */

undefined8 * FUN_0006f9b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 0006fa20; end: 0006fa63;  */

undefined8 * FUN_0006fa20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Entry: 0006fa64; end: 0006fb23;  */

int FUN_0006fa64(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 0006fb24; end: 0006fb33; -[SCAuthenticationVerifyPhoneNumberResponse isTwoFaEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_0006fb24(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_00ae89b8);
}



/* Entry: 0006fb34; end: 0006fb8f; -[SCAuthenticationVerifyPhoneNumberResponse twoFaRecoveryCode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006fb34(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_00ae89c0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_00ae89c0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 0006fb90; end: 0006fba3; -[SCAuthenticationVerifyPhoneNumberResponse reauthRequired] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_0006fb90(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_00ae89c8);
}



/* Entry: 0006fba4; end: 0006fcc3; -[SCAuthenticationVerifyPhoneNumberResponse initWithIsTwoFaEnabled:twoFaRecoveryCode:reauthRequired:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006fba4(long param_1,long param_2,undefined1 param_3,long param_4,undefined1 param_5)

{
  long *plVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  *(undefined1 *)(param_1 + _DAT_00ae89b8) = param_3;
  plVar1 = (long *)(param_1 + _DAT_00ae89c0);
  *plVar1 = param_4;
  plVar1[1] = param_2;
  *(undefined1 *)(param_1 + _DAT_00ae89c8) = param_5;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_00abbf70);
  return;
}



/* Entry: 0006fcc4; end: 0006fcc7; -[SCAuthenticationVerifyPhoneNumberResponse copyWithZone:] */

void FUN_0006fcc4(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 0006fcc8; end: 0006fce3; -[SCAuthenticationVerifyPhoneNumberResponse description] */

void FUN_0006fcc8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0006fce4; end: 0006fd5f; -[SCAuthenticationVerifyPhoneNumberResponse init] */

void FUN_0006fce4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCAuthenticationModels/AuthenticationVerifyPhoneNumberResponseWrapper.swift",0x4b,2,
             0x2a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x6fd2c);
  (*pcVar1)();
}



/* Entry: 0006fd60; end: 0006fd73; -[SCAuthenticationVerifyPhoneNumberResponse .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006fd60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(*(undefined8 *)(param_1 + _DAT_00ae89c0 + 8));
  return;
}



/* Entry: 0006fd74; end: 0006fd93;  */

void FUN_0006fd74(void)

{
  _objc_opt_self(&PTR_PTR_00ac8fa8);
  return;
}



/* Entry: 0006fd94; end: 0006fd97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006fd94(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_00ae89b8) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00ae89c0);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_00ae89c8) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_00abbf70);
  return;
}



/* Entry: 0006fd98; end: 0006fda3; -[SCUserPhoneNumber mobile] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006fd98(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_00ae89f8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_00ae89f8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 0006fda4; end: 0006fdaf; -[SCUserPhoneNumber phoneNumberCountryCode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006fda4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_00ae8a00))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_00ae8a00);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 0006fdb0; end: 0006fe07;  */

void FUN_0006fdb0(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 0006fe08; end: 0006fe0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006fe08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00ae89f8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00ae8a00);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_00abbf70);
  return;
}



/* Entry: 0006fe10; end: 0006ffb3; -[SCUserPhoneNumber initWithMobile:phoneNumberCountryCode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006fe10(long param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    lVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar2 = param_2;
  }
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_00ae89f8);
  *plVar1 = param_3;
  plVar1[1] = lVar2;
  plVar1 = (long *)(param_1 + _DAT_00ae8a00);
  *plVar1 = param_4;
  plVar1[1] = param_2;
  lStack_50 = param_1;
  lStack_48 = lVar3;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_00abbf70);
  return;
}



/* Entry: 0006ffb4; end: 0006ffe7; -[SCUserPhoneNumber hash] */

undefined8 FUN_0006ffb4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_0006ffe8();
  _objc_release(param_1);
  return uVar1;
}


