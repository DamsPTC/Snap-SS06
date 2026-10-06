/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ae103d4; end: 10ae1043b;  */

undefined8 * FUN_10ae103d4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010ae10804();
  }
  else {
    func_0x00010ae1080c();
  }
  *puVar1 = &PTR_FUN_110c78c40;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  func_0x00010ae0dd2c();
  return puVar1;
}



/* Entry: 10ae1043c; end: 10ae108cb;  */

void FUN_10ae1043c(void)

{
  return;
}



/* Entry: 10ae108cc; end: 10ae1093b;  */

undefined8 * FUN_10ae108cc(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110c79398;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  lVar1 = param_3 + 0x10;
  func_0x000107c2809c(lVar1,param_2);
  param_1[2] = lVar1;
  param_3 = param_3 + 0x18;
  func_0x000107c2809c(param_3,param_2);
  param_1[3] = param_3;
  *(undefined4 *)(param_1 + 4) = 0;
  return param_1;
}



/* Entry: 10ae1093c; end: 10ae1096b;  */

long FUN_10ae1093c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10ae1096c(param_1);
  return param_1;
}



/* Entry: 10ae1096c; end: 10ae10993;  */

/* WARNING: Possible PIC construction at 0x00010ae10980: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ae10984) */

void FUN_10ae1096c(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x10) ^ 2;
  if ((uVar1 & 3) != 0) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    func_0x000107c60ca0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(uVar1);
  return;
}



/* Entry: 10ae10994; end: 10ae10997;  */

long FUN_10ae10994(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10ae1096c(param_1);
  return param_1;
}



/* Entry: 10ae10998; end: 10ae109ab;  */

void FUN_10ae10998(void)

{
  FUN_10ae1093c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae109ac; end: 10ae109b7;  */

undefined ** FUN_10ae109ac(void)

{
  return &PTR_DAT_110c793d8;
}



/* Entry: 10ae109b8; end: 10ae109fb;  */

void FUN_10ae109b8(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
  func_0x000107c3025c(param_1 + 0x18);
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



/* Entry: 10ae109fc; end: 10ae10aeb;  */

long * FUN_10ae109fc(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  
  puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar1 = (long)*(char *)((long)puVar5 + 0x17);
  if (lVar1 < 0) {
    lVar1 = puVar5[1];
    if (lVar1 != 0) {
      puVar5 = (undefined8 *)*puVar5;
      goto LAB_10ae10a40;
    }
  }
  else if (*(char *)((long)puVar5 + 0x17) != '\0') {
LAB_10ae10a40:
    func_0x000107c303d4(puVar5,lVar1,1,&UNK_10f6c3ce5);
    param_2 = param_3;
    FUN_10ae10c78(param_3,1);
  }
  puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  lVar1 = (long)*(char *)((long)puVar5 + 0x17);
  if (lVar1 < 0) {
    lVar1 = puVar5[1];
    if (lVar1 == 0) goto LAB_10ae10aa8;
    puVar5 = (undefined8 *)*puVar5;
  }
  else if (*(char *)((long)puVar5 + 0x17) == '\0') goto LAB_10ae10aa8;
  func_0x000107c303d4(puVar5,lVar1,1,&UNK_10f6c3cf7);
  param_2 = param_3;
  FUN_10ae10c78(param_3,2);
LAB_10ae10aa8:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar2 = (ulong)*(char *)(uVar3 + 0x1f);
  if ((long)uVar2 < 0) {
    lVar1 = *(long *)(uVar3 + 8);
    uVar2 = *(ulong *)(uVar3 + 0x10);
  }
  else {
    lVar1 = uVar3 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)uVar2) {
    while( true ) {
      iVar6 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar4 = (int)uVar2;
      uVar2 = (ulong)(uint)(iVar4 - iVar6);
      if (iVar4 - iVar6 == 0 || iVar4 < iVar6) break;
      func_0x00010b4d5738();
      lVar1 = (long)param_2 + (long)iVar6;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar4);
  }
  _memcpy(param_2,lVar1,uVar2 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)uVar2);
}



/* Entry: 10ae10aec; end: 10ae10b7b;  */

long FUN_10ae10aec(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_10ae10b24;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_10ae10b24:
    lVar3 = 0;
    goto LAB_10ae10b28;
  }
  func_0x000107c282a0();
  lVar3 = uVar1 + 1;
LAB_10ae10b28:
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    lVar3 = lVar3 + uVar1 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar1 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x20) = (int)lVar3;
  return lVar3;
}



/* Entry: 10ae10b7c; end: 10ae10b7f;  */

void FUN_10ae10b7c(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar1,uVar2);
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



/* Entry: 10ae10b80; end: 10ae10c1f;  */

void FUN_10ae10b80(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar1,uVar2);
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



/* Entry: 10ae10c20; end: 10ae10c27;  */

void FUN_10ae10c20(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4d80e0(param_2,0x28);
  }
  *puVar1 = &PTR_FUN_110c79398;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 10ae10c28; end: 10ae10c77;  */

void FUN_10ae10c28(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x28);
  }
  *puVar1 = &PTR_FUN_110c79398;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 10ae10c78; end: 10ae10c97;  */

long * FUN_10ae10c78(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 extraout_x8;
  undefined8 uVar5;
  undefined8 extraout_x8_00;
  uint extraout_w10;
  uint uVar6;
  uint extraout_w10_00;
  long lVar7;
  long *unaff_x20;
  int iVar8;
  undefined8 *unaff_x22;
  int iVar9;
  long lVar10;
  
  lVar7 = (long)*(char *)((long)unaff_x22 + 0x17);
  if ((-1 < lVar7) || (lVar7 = unaff_x22[1], lVar7 < 0x80)) {
    lVar10 = *param_1;
    uVar6 = (int)param_2 << 3;
    uVar2 = uVar6;
    func_0x0001001a5b20();
    if (lVar7 <= lVar10 + ~((long)unaff_x20 + (long)(int)uVar2) + 0x10) {
      lVar10 = (long)unaff_x20 + 2;
      for (uVar6 = uVar6 | 2; 0x7f < uVar6; uVar6 = uVar6 >> 7) {
        *(byte *)(lVar10 + -2) = (byte)uVar6 | 0x80;
        lVar10 = lVar10 + 1;
      }
      *(byte *)(lVar10 + -2) = (byte)uVar6;
      *(char *)(lVar10 + -1) = (char)lVar7;
      puVar1 = (undefined8 *)*unaff_x22;
      if (-1 < *(char *)((long)unaff_x22 + 0x17)) {
        puVar1 = unaff_x22;
      }
      func_0x000107c610b4(lVar10,puVar1,lVar7);
      return (long *)(lVar10 + lVar7);
    }
  }
  func_0x00010b4d564c(param_1,param_2);
  func_0x00010b4d56cc();
  uVar6 = extraout_w10;
  while (0x7f < uVar6) {
    func_0x00010b4d576c();
    uVar6 = extraout_w10_00;
  }
  func_0x00010b4d56b4();
  uVar5 = extraout_x8;
  while (0x7f < (uint)uVar5) {
    func_0x00010b4d5758();
    uVar5 = extraout_x8_00;
  }
  func_0x00010b4d5660();
  iVar8 = (int)unaff_x22;
  if ((*(char *)((long)param_1 + 0x39) == '\x01') &&
     ((*param_1 - (long)unaff_x20) + 0x10 <= (long)iVar8)) {
    plVar3 = param_1;
    func_0x000107c303e0(param_1,unaff_x20);
    plVar4 = (long *)param_1[6];
    (**(code **)(*plVar4 + 0x28))(plVar4,param_2,unaff_x22);
    if (((ulong)plVar4 & 1) == 0) {
      func_0x00010b4d56e4();
    }
    return plVar3;
  }
  if (*param_1 - (long)unaff_x20 < (long)iVar8) {
    while( true ) {
      iVar9 = ((int)*param_1 - (int)unaff_x20) + 0x10;
      iVar8 = (int)unaff_x22;
      unaff_x22 = (undefined8 *)(ulong)(uint)(iVar8 - iVar9);
      if (iVar8 - iVar9 == 0 || iVar8 < iVar9) break;
      func_0x00010b4d5738();
      lVar7 = (long)unaff_x20 + (long)iVar9;
      unaff_x20 = param_1;
      func_0x000107c303e4(param_1,lVar7);
    }
    func_0x00010b4d5738();
    return (long *)((long)unaff_x20 + (long)iVar8);
  }
  _memcpy(unaff_x20);
  return (long *)((long)unaff_x20 + (long)iVar8);
}



/* Entry: 10ae10c98; end: 10ae10e1b;  */

void FUN_10ae10c98(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  
  switch(*(undefined4 *)(param_1 + 0x24)) {
  case 0xb:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae138e4();
      uVar1 = extraout_x8_04;
    }
    if (uVar1 != 0) goto LAB_10ae10db0;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae118c4();
    }
    break;
  case 0xc:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae138e4();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_10ae10db0;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae11b68();
    }
    break;
  default:
    goto LAB_10ae10db0;
  case 0xe:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae138e4();
      uVar1 = extraout_x8_03;
    }
    if (uVar1 != 0) goto LAB_10ae10db0;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae12018();
    }
    break;
  case 0xf:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae138e4();
      uVar1 = extraout_x8_05;
    }
    if (uVar1 != 0) goto LAB_10ae10db0;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae1227c();
    }
    break;
  case 0x10:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae138e4();
      uVar1 = extraout_x8_06;
    }
    if (uVar1 != 0) goto LAB_10ae10db0;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae124d4();
    }
    break;
  case 0x11:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae138e4();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_10ae10db0;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae127cc();
    }
    break;
  case 0x12:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae138e4();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_10ae10db0;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae12944();
    }
    break;
  case 0x18:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae138e4();
      uVar1 = extraout_x8_02;
    }
    if (uVar1 != 0) goto LAB_10ae10db0;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae1093c();
    }
  }
  __ZdlPv();
LAB_10ae10db0:
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 10ae10e1c; end: 10ae10ef7;  */

void FUN_10ae10e1c(long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *unaff_x19;
  
  lVar2 = param_3;
  func_0x00010ae13920();
  *(undefined8 *)(param_1 + 8) = param_2;
  *unaff_x19 = &PTR_FUN_110c796b0;
  if ((*(ulong *)(lVar2 + 8) & 1) != 0) {
    func_0x00010ae136d0();
  }
  lVar2 = param_3 + 0x10;
  func_0x00010ae1387c();
  unaff_x19[2] = lVar2;
  *(undefined4 *)(unaff_x19 + 4) = 0;
  uVar1 = *(undefined4 *)(param_3 + 0x24);
  *(undefined4 *)((long)unaff_x19 + 0x24) = uVar1;
  switch(uVar1) {
  case 0xb:
    func_0x00010ae138d8();
    FUN_10ae13140();
    break;
  case 0xc:
    func_0x00010ae138d8();
    FUN_10ae131d0();
    break;
  default:
    goto LAB_10ae1368c;
  case 0xe:
    func_0x00010ae138d8();
    FUN_10ae1329c();
    break;
  case 0xf:
    func_0x00010ae138d8();
    FUN_10ae13340();
    break;
  case 0x10:
    func_0x00010ae138d8();
    func_0x00010ae133e8();
    break;
  case 0x11:
    func_0x00010ae138d8();
    func_0x00010ae13470();
    break;
  case 0x12:
    func_0x00010ae138d8();
    FUN_10ae134d8();
    break;
  case 0x18:
    func_0x00010ae138d8();
    FUN_10ae13580();
  }
  unaff_x19[3] = lVar2;
LAB_10ae1368c:
  return;
}



/* Entry: 10ae10ef8; end: 10ae10f23;  */

undefined8 FUN_10ae10ef8(undefined8 param_1)

{
  func_0x00010ae137e4();
  FUN_10ae10f24(param_1);
  return param_1;
}



/* Entry: 10ae10f24; end: 10ae10f57;  */

void FUN_10ae10f24(void)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  long unaff_x19;
  
  func_0x00010ae13858();
  func_0x000107c30258();
  if (*(int *)(unaff_x19 + 0x24) == 0) {
    return;
  }
  switch(*(undefined4 *)(unaff_x19 + 0x24)) {
  case 0xb:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae138e4();
      uVar1 = extraout_x8_04;
    }
    if (uVar1 != 0) goto LAB_10ae10db0;
    if (*(long *)(unaff_x19 + 0x18) != 0) {
      FUN_10ae118c4();
    }
    break;
  case 0xc:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae138e4();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_10ae10db0;
    if (*(long *)(unaff_x19 + 0x18) != 0) {
      FUN_10ae11b68();
    }
    break;
  default:
    goto LAB_10ae10db0;
  case 0xe:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae138e4();
      uVar1 = extraout_x8_03;
    }
    if (uVar1 != 0) goto LAB_10ae10db0;
    if (*(long *)(unaff_x19 + 0x18) != 0) {
      FUN_10ae12018();
    }
    break;
  case 0xf:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae138e4();
      uVar1 = extraout_x8_05;
    }
    if (uVar1 != 0) goto LAB_10ae10db0;
    if (*(long *)(unaff_x19 + 0x18) != 0) {
      FUN_10ae1227c();
    }
    break;
  case 0x10:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae138e4();
      uVar1 = extraout_x8_06;
    }
    if (uVar1 != 0) goto LAB_10ae10db0;
    if (*(long *)(unaff_x19 + 0x18) != 0) {
      FUN_10ae124d4();
    }
    break;
  case 0x11:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae138e4();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_10ae10db0;
    if (*(long *)(unaff_x19 + 0x18) != 0) {
      FUN_10ae127cc();
    }
    break;
  case 0x12:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae138e4();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_10ae10db0;
    if (*(long *)(unaff_x19 + 0x18) != 0) {
      FUN_10ae12944();
    }
    break;
  case 0x18:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae138e4();
      uVar1 = extraout_x8_02;
    }
    if (uVar1 != 0) goto LAB_10ae10db0;
    if (*(long *)(unaff_x19 + 0x18) != 0) {
      FUN_10ae1093c();
    }
  }
  __ZdlPv();
LAB_10ae10db0:
  *(undefined4 *)(unaff_x19 + 0x24) = 0;
  return;
}



/* Entry: 10ae10f58; end: 10ae10f5b;  */

undefined8 FUN_10ae10f58(undefined8 param_1)

{
  func_0x00010ae137e4();
  FUN_10ae10f24(param_1);
  return param_1;
}



/* Entry: 10ae10f5c; end: 10ae10f6f;  */

void FUN_10ae10f5c(void)

{
  FUN_10ae10ef8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae10f70; end: 10ae10f97;  */

long FUN_10ae10f70(long param_1)

{
  func_0x00010ae137e4();
  func_0x00010ae1397c();
  func_0x000105991a90(param_1 + 0x10);
  return param_1;
}



/* Entry: 10ae10f98; end: 10ae10fcf;  */

void FUN_10ae10f98(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae13858();
  func_0x000107c3025c();
  FUN_10ae10c98();
  puVar1 = (ulong *)(unaff_x19 + 8);
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



/* Entry: 10ae10fd0; end: 10ae11087;  */

long * FUN_10ae10fd0(long param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar4;
  long *unaff_x22;
  int iVar5;
  
  func_0x00010ae13724();
  func_0x00010ae137fc(*(undefined8 *)(param_1 + 0x10));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10ae1101c;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10ae1101c;
  param_4 = (long *)&UNK_10f6c3d0e;
  func_0x00010ae1378c();
  func_0x00010ae13698();
  unaff_x20 = unaff_x22;
LAB_10ae1101c:
  plVar3 = (long *)(ulong)*(uint *)(unaff_x21 + 0x24);
  uVar2 = *(uint *)(unaff_x21 + 0x24) - 0xb;
  if ((uVar2 < 0xe) && ((0x20fbU >> (ulong)(uVar2 & 0x1f) & 1) != 0)) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x21 + 0x18) +
                              *(long *)(&UNK_10e5173d8 + (ulong)uVar2 * 8));
    func_0x00010ae13708();
    unaff_x20 = plVar3;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010ae138c0();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010ae13914();
  if (*plVar3 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar5 = ((int)*plVar3 - (int)param_4) + 0x10;
      iVar4 = (int)param_3;
      param_3 = (ulong)(uint)(iVar4 - iVar5);
      if (iVar4 - iVar5 == 0 || iVar4 < iVar5) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar5);
      param_4 = plVar3;
      func_0x000107c303e4(plVar3,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar4);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10ae11088; end: 10ae1117b;  */

long FUN_10ae11088(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x9;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010ae13830(*(undefined8 *)(param_1 + 0x10));
  if (extraout_x8 < 0) {
    if (*(long *)(lVar2 + 8) != 0) goto LAB_10ae110a8;
LAB_10ae110bc:
    lVar2 = 0;
  }
  else {
    if (extraout_x8 == 0) goto LAB_10ae110bc;
LAB_10ae110a8:
    func_0x000107c282a0();
    lVar2 = lVar2 + 1;
  }
  switch(*(undefined4 *)(param_1 + 0x24)) {
  case 0xb:
    func_0x00010ae1117c(*(undefined8 *)(param_1 + 0x18));
    break;
  case 0xc:
    func_0x00010ae11194(*(undefined8 *)(param_1 + 0x18));
    break;
  default:
    goto LAB_10ae11150;
  case 0xe:
    func_0x00010ae111ac(*(undefined8 *)(param_1 + 0x18));
    break;
  case 0xf:
    func_0x00010ae111c4(*(undefined8 *)(param_1 + 0x18));
    break;
  case 0x10:
    lVar1 = *(long *)(param_1 + 0x18);
    func_0x00010ae111dc();
    goto code_r0x00010ae11148;
  case 0x11:
    lVar1 = *(long *)(param_1 + 0x18);
    func_0x00010ae111f4();
    goto code_r0x00010ae11148;
  case 0x12:
    lVar1 = *(long *)(param_1 + 0x18);
    func_0x00010ae1120c();
    goto code_r0x00010ae11148;
  case 0x18:
    lVar1 = *(long *)(param_1 + 0x18);
    func_0x00010ae11224();
code_r0x00010ae11148:
    lVar2 = lVar2 + lVar1 + 2;
    goto LAB_10ae11150;
  }
  func_0x00010ae137d8();
LAB_10ae11150:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010ae13898();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(param_1 + 0x20) = (int)lVar2;
  return lVar2;
}



/* Entry: 10ae1117c; end: 10ae1123b;  */

void FUN_10ae1117c(void)

{
  FUN_10ae11ae4();
  FUN_10ae13670();
  return;
}



/* Entry: 10ae1123c; end: 10ae1123f;  */

void FUN_10ae1123c(ulong *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long extraout_x8;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  
  func_0x00010ae137b8();
  uVar3 = *(ulong *)(unaff_x19 + 8);
  func_0x00010ae13814(*(undefined8 *)(unaff_x20 + 0x10));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((uVar3 & 1) != 0) {
      func_0x00010ae13808();
    }
    param_1 = unaff_x21 + 2;
    func_0x000107c30248();
  }
  iVar1 = *(int *)(unaff_x20 + 0x24);
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)unaff_x21 + 0x24);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_10ae10c98();
      }
      *(int *)((long)unaff_x21 + 0x24) = iVar1;
    }
    switch(iVar1) {
    case 0xb:
      if (iVar2 == iVar1) {
        func_0x00010ae13714();
        FUN_10ae11478();
        goto LAB_10ae11450;
      }
      func_0x00010ae138cc();
      FUN_10ae13140();
      break;
    case 0xc:
      if (iVar2 == iVar1) {
        func_0x00010ae13714();
        func_0x00010ae114e4();
        goto LAB_10ae11450;
      }
      func_0x00010ae138cc();
      FUN_10ae131d0();
      break;
    default:
      goto LAB_10ae11450;
    case 0xe:
      if (iVar2 == iVar1) {
        func_0x00010ae13714();
        func_0x00010ae115d0();
        goto LAB_10ae11450;
      }
      func_0x00010ae138cc();
      FUN_10ae1329c();
      break;
    case 0xf:
      if (iVar2 == iVar1) {
        func_0x00010ae13714();
        FUN_10ae116ac();
        goto LAB_10ae11450;
      }
      func_0x00010ae138cc();
      FUN_10ae13340();
      break;
    case 0x10:
      if (iVar2 == iVar1) {
        func_0x00010ae13714();
        FUN_10ae11750();
        goto LAB_10ae11450;
      }
      func_0x00010ae138cc();
      func_0x00010ae133e8();
      break;
    case 0x11:
      if (iVar2 == iVar1) {
        func_0x00010ae13714();
        func_0x00010ae11804();
        goto LAB_10ae11450;
      }
      func_0x00010ae138cc();
      func_0x00010ae13470();
      break;
    case 0x12:
      if (iVar2 == iVar1) {
        func_0x00010ae13714();
        func_0x00010ae11858();
        goto LAB_10ae11450;
      }
      func_0x00010ae138cc();
      FUN_10ae134d8();
      break;
    case 0x18:
      if (iVar2 == iVar1) {
        func_0x00010ae13714();
        FUN_10ae10b80();
        goto LAB_10ae11450;
      }
      func_0x00010ae138cc();
      FUN_10ae13580();
    }
    unaff_x21[3] = (ulong)param_1;
  }
LAB_10ae11450:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae137c8();
    if ((*param_1 & 1) == 0) {
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



/* Entry: 10ae11240; end: 10ae11477;  */

void FUN_10ae11240(ulong *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long extraout_x8;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  
  func_0x00010ae137b8();
  uVar3 = *(ulong *)(unaff_x19 + 8);
  func_0x00010ae13814(*(undefined8 *)(unaff_x20 + 0x10));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((uVar3 & 1) != 0) {
      func_0x00010ae13808();
    }
    param_1 = unaff_x21 + 2;
    func_0x000107c30248();
  }
  iVar1 = *(int *)(unaff_x20 + 0x24);
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)unaff_x21 + 0x24);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_10ae10c98();
      }
      *(int *)((long)unaff_x21 + 0x24) = iVar1;
    }
    switch(iVar1) {
    case 0xb:
      if (iVar2 == iVar1) {
        func_0x00010ae13714();
        FUN_10ae11478();
        goto LAB_10ae11450;
      }
      func_0x00010ae138cc();
      FUN_10ae13140();
      break;
    case 0xc:
      if (iVar2 == iVar1) {
        func_0x00010ae13714();
        func_0x00010ae114e4();
        goto LAB_10ae11450;
      }
      func_0x00010ae138cc();
      FUN_10ae131d0();
      break;
    default:
      goto LAB_10ae11450;
    case 0xe:
      if (iVar2 == iVar1) {
        func_0x00010ae13714();
        func_0x00010ae115d0();
        goto LAB_10ae11450;
      }
      func_0x00010ae138cc();
      FUN_10ae1329c();
      break;
    case 0xf:
      if (iVar2 == iVar1) {
        func_0x00010ae13714();
        FUN_10ae116ac();
        goto LAB_10ae11450;
      }
      func_0x00010ae138cc();
      FUN_10ae13340();
      break;
    case 0x10:
      if (iVar2 == iVar1) {
        func_0x00010ae13714();
        FUN_10ae11750();
        goto LAB_10ae11450;
      }
      func_0x00010ae138cc();
      func_0x00010ae133e8();
      break;
    case 0x11:
      if (iVar2 == iVar1) {
        func_0x00010ae13714();
        func_0x00010ae11804();
        goto LAB_10ae11450;
      }
      func_0x00010ae138cc();
      func_0x00010ae13470();
      break;
    case 0x12:
      if (iVar2 == iVar1) {
        func_0x00010ae13714();
        func_0x00010ae11858();
        goto LAB_10ae11450;
      }
      func_0x00010ae138cc();
      FUN_10ae134d8();
      break;
    case 0x18:
      if (iVar2 == iVar1) {
        func_0x00010ae13714();
        FUN_10ae10b80();
        goto LAB_10ae11450;
      }
      func_0x00010ae138cc();
      FUN_10ae13580();
    }
    unaff_x21[3] = (ulong)param_1;
  }
LAB_10ae11450:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae137c8();
    if ((*param_1 & 1) == 0) {
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



/* Entry: 10ae11478; end: 10ae114e3;  */

void FUN_10ae11478(ulong *param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long unaff_x19;
  
  lVar1 = param_2;
  func_0x00010ae13858();
  lVar1 = lVar1 + 0x10;
  func_0x0001059929d4();
  func_0x00010ae13814(*(undefined8 *)(param_2 + 0x30));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae13808();
    }
    param_1 = (ulong *)(unaff_x19 + 0x30);
    func_0x000107c30248();
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    *(int *)(unaff_x19 + 0x38) = *(int *)(param_2 + 0x38);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010ae138b0();
    if ((*param_1 & 1) == 0) {
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



/* Entry: 10ae114e4; end: 10ae116ab;  */

void FUN_10ae114e4(void)

{
  uint uVar1;
  ulong *puVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar5;
  
  func_0x00010ae137b8();
  puVar5 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar5 & 1) != 0) {
    puVar5 = *(ulong **)((ulong)puVar5 & 0xfffffffffffffffe);
  }
  puVar2 = (ulong *)(unaff_x21 + 0x18);
  lVar3 = unaff_x20 + 0x18;
  FUN_10ae11f0c();
  func_0x00010ae13814(*(undefined8 *)(unaff_x20 + 0x30));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010ae13808();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x30);
    func_0x000107c30248();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x38);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar5;
        func_0x000106af66f4();
        *(ulong **)(unaff_x21 + 0x38) = puVar2;
      }
      else {
        func_0x00010bcebc88();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x40);
      if (puVar2 == (ulong *)0x0) {
        FUN_10ae135c4();
        *(ulong **)(unaff_x21 + 0x40) = puVar5;
        puVar2 = puVar5;
      }
      else {
        FUN_10ae11f20();
      }
    }
  }
  if (*(char *)(unaff_x20 + 0x48) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x48) = 1;
  }
  if (*(int *)(unaff_x20 + 0x4c) != 0) {
    *(int *)(unaff_x21 + 0x4c) = *(int *)(unaff_x20 + 0x4c);
  }
  func_0x00010ae13884();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  func_0x00010ae137c8();
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10ae116ac; end: 10ae1174f;  */

void FUN_10ae116ac(ulong *param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long unaff_x19;
  
  lVar1 = param_2;
  func_0x00010ae13858();
  lVar1 = lVar1 + 0x10;
  FUN_10ae11f0c();
  func_0x00010ae13814(*(undefined8 *)(param_2 + 0x28));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae13808();
    }
    param_1 = (ulong *)(unaff_x19 + 0x28);
    func_0x000107c30248();
  }
  func_0x00010ae13814(*(undefined8 *)(param_2 + 0x30));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae13808();
    }
    param_1 = (ulong *)(unaff_x19 + 0x30);
    func_0x000107c30248();
  }
  if (*(long *)(param_2 + 0x38) != 0) {
    *(long *)(unaff_x19 + 0x38) = *(long *)(param_2 + 0x38);
  }
  if (*(char *)(param_2 + 0x40) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x40) = 1;
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010ae138b0();
    if ((*param_1 & 1) == 0) {
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



/* Entry: 10ae11750; end: 10ae11803;  */

void FUN_10ae11750(void)

{
  int iVar1;
  int iVar2;
  ulong *puVar3;
  ulong extraout_x8;
  ulong uVar4;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  ulong uVar5;
  
  func_0x00010ae137b8();
  uVar5 = *(ulong *)(unaff_x19 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  puVar3 = unaff_x21 + 2;
  func_0x0001059929d4();
  iVar1 = *(int *)(unaff_x20 + 0x3c);
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)unaff_x21 + 0x3c);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        puVar3 = unaff_x21;
        FUN_10ae12524();
      }
      *(int *)((long)unaff_x21 + 0x3c) = iVar1;
    }
    func_0x00010ae13870();
    if ((iVar1 == 2) || (iVar1 == 1)) {
      if (iVar2 != iVar1) {
        unaff_x21[6] = extraout_x8;
      }
      uVar4 = *(ulong *)(unaff_x20 + 0x30) & 0xfffffffffffffffc;
      if (*(int *)(unaff_x20 + 0x3c) != iVar1) {
        uVar4 = extraout_x8;
      }
      puVar3 = unaff_x21 + 6;
      func_0x000107c30248(puVar3,uVar4,uVar5);
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae137c8();
    if ((*puVar3 & 1) == 0) {
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



/* Entry: 10ae11804; end: 10ae118c3;  */

void FUN_10ae11804(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010ae13920();
  func_0x00010ae13814(*(undefined8 *)(param_2 + 0x10));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae13808();
    }
    param_1 = (ulong *)(unaff_x19 + 0x10);
    func_0x000107c30248();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae138b0();
    if ((*param_1 & 1) == 0) {
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



/* Entry: 10ae118c4; end: 10ae118f3;  */

long FUN_10ae118c4(long param_1)

{
  func_0x00010ae137e4();
  func_0x00010ae1397c();
  func_0x000105991a90(param_1 + 0x10);
  return param_1;
}



/* Entry: 10ae118f4; end: 10ae11907;  */

void FUN_10ae118f4(void)

{
  FUN_10ae118c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae11908; end: 10ae11913;  */

undefined ** FUN_10ae11908(void)

{
  return &PTR_DAT_110c79730;
}



/* Entry: 10ae11914; end: 10ae1194b;  */

void FUN_10ae11914(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae13858();
  func_0x000105991b74();
  func_0x00010ae139c8();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x38) = 0;
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



/* Entry: 10ae1194c; end: 10ae11ae3;  */

long * FUN_10ae1194c(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 *puVar7;
  long lVar8;
  long lStack_78;
  undefined8 *puStack_70;
  
  func_0x00010ae13724();
  uVar4 = (ulong)*(uint *)(param_1 + 7);
  if (*(uint *)(param_1 + 7) != 0) {
    param_1 = unaff_x19;
    func_0x000107c282e4();
    unaff_x20 = param_1;
  }
  func_0x00010ae137fc(*(undefined8 *)(unaff_x21 + 0x30));
  if ((long)uVar4 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10ae119c8;
  }
  else if ((int)uVar4 == 0) goto LAB_10ae119c8;
  func_0x00010ae1378c();
  param_1 = unaff_x19;
  func_0x00010ae136c4();
  unaff_x20 = param_1;
LAB_10ae119c8:
  if (*(int *)(unaff_x21 + 0x10) != 0) {
    if ((*(int *)(unaff_x21 + 0x10) == 1) || ((*(byte *)((long)unaff_x19 + 0x3a) & 1) == 0)) {
      plVar3 = &lStack_78;
      func_0x00010564c19c(plVar3);
      while (param_1 = plVar3, lVar8 = lStack_78, lStack_78 != 0) {
        lVar5 = lStack_78 + 8;
        plVar3 = (long *)(lStack_78 + 0x20);
        func_0x00010ae136ac();
        lVar6 = (long)*(char *)(lVar8 + 0x1f);
        if (lVar6 < 0) {
          lVar5 = *(long *)(lVar8 + 8);
          lVar6 = *(long *)(lVar8 + 0x10);
        }
        func_0x00010ae136fc(lVar5,lVar6);
        lVar5 = (long)*(char *)(lVar8 + 0x37);
        if (lVar5 < 0) {
          plVar3 = *(long **)(lVar8 + 0x20);
          lVar5 = *(long *)(lVar8 + 0x28);
        }
        func_0x00010ae136fc(plVar3,lVar5);
        func_0x00010ae13954();
        unaff_x20 = param_1;
      }
    }
    else {
      func_0x00010ae13990();
      plVar3 = param_1;
      puVar1 = puStack_70;
      for (lVar8 = lStack_78 << 3; param_1 = plVar3, lVar8 != 0; lVar8 = lVar8 + -8) {
        puVar7 = (undefined8 *)*puVar1;
        plVar3 = puVar7 + 3;
        func_0x00010ae136ac();
        lVar5 = (long)*(char *)((long)puVar7 + 0x17);
        puVar2 = puVar7;
        if (lVar5 < 0) {
          lVar5 = puVar7[1];
          puVar2 = (undefined8 *)*puVar7;
        }
        func_0x00010ae136fc(puVar2,lVar5);
        lVar5 = (long)*(char *)((long)puVar7 + 0x2f);
        if (lVar5 < 0) {
          plVar3 = (long *)puVar7[3];
          lVar5 = puVar7[4];
        }
        func_0x00010ae136fc(plVar3,lVar5);
        puVar1 = puVar1 + 1;
        unaff_x20 = param_1;
      }
      func_0x00010ae13974();
    }
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x00010ae138c0();
    func_0x00010ae13914();
    func_0x0001053930c4();
    unaff_x20 = param_1;
  }
  return unaff_x20;
}



/* Entry: 10ae11ae4; end: 10ae11b63;  */

long FUN_10ae11ae4(long param_1)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x00010ae13900();
  while (uStack_38 != 0) {
    func_0x00010ae139b0();
    unaff_x20 = param_1 + unaff_x20;
    func_0x00010ae13954();
  }
  func_0x00010ae13830(*(undefined8 *)(unaff_x19 + 0x30));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010ae137d8();
  }
  if (*(int *)(unaff_x19 + 0x38) != 0) {
    func_0x00010ae13768();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010ae13898();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x3c) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 10ae11b64; end: 10ae11b67;  */

void FUN_10ae11b64(ulong *param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long unaff_x19;
  
  lVar1 = param_2;
  func_0x00010ae13858();
  lVar1 = lVar1 + 0x10;
  func_0x0001059929d4();
  func_0x00010ae13814(*(undefined8 *)(param_2 + 0x30));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae13808();
    }
    param_1 = (ulong *)(unaff_x19 + 0x30);
    func_0x000107c30248();
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    *(int *)(unaff_x19 + 0x38) = *(int *)(param_2 + 0x38);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010ae138b0();
    if ((*param_1 & 1) == 0) {
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



/* Entry: 10ae11b68; end: 10ae11bb7;  */

long FUN_10ae11b68(long param_1)

{
  func_0x00010ae137e4();
  func_0x00010ae1397c();
  if (*(long *)(param_1 + 0x38) != 0) {
    func_0x00010bcebc38();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_10ae12b64();
  }
  __ZdlPv();
  FUN_10ae12e44(param_1 + 0x18);
  return param_1;
}



/* Entry: 10ae11bb8; end: 10ae11bcb;  */

void FUN_10ae11bb8(void)

{
  FUN_10ae11b68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae11bcc; end: 10ae11bd7;  */

undefined ** FUN_10ae11bcc(void)

{
  return &PTR_DAT_110c79768;
}



/* Entry: 10ae11bd8; end: 10ae11c8f;  */

void FUN_10ae11bd8(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  FUN_10ae1312c(param_1 + 0x18);
  func_0x00010ae139c8();
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010bcebce4(*(undefined8 *)(param_1 + 0x38));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010ae11c3c(*(undefined8 *)(param_1 + 0x40));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 10ae11c90; end: 10ae11e27;  */

long * FUN_10ae11c90(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long extraout_x8;
  int iVar8;
  long *unaff_x22;
  int iVar9;
  
  plVar4 = param_2;
  plVar6 = param_3;
  func_0x00010ae137fc(*(undefined8 *)(param_1 + 0x30));
  if ((long)plVar4 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10ae11cfc;
  }
  else if ((int)plVar4 == 0) goto LAB_10ae11cfc;
  func_0x00010ae1378c();
  param_2 = param_3;
  func_0x000107c280a0(param_3,1);
  plVar6 = unaff_x22;
LAB_10ae11cfc:
  if (*(char *)(param_1 + 0x48) == '\x01') {
    plVar4 = param_3;
    func_0x000107c28094(param_3,param_2);
    param_2 = (long *)(ulong)*(byte *)(param_1 + 0x48);
    uVar3 = 0x10;
    func_0x000107c280a8(0x10,plVar4);
    func_0x000107c280a8(param_2,uVar3);
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 1) != 0) {
    plVar6 = (long *)(ulong)*(uint *)(*(long *)(param_1 + 0x38) + 0x18);
    param_2 = (long *)0x3;
    func_0x00010ae137f4();
  }
  plVar4 = param_2;
  if (*(int *)(param_1 + 0x4c) != 0) {
    plVar4 = param_3;
    func_0x0001088bdd44();
    plVar6 = param_2;
  }
  iVar9 = *(int *)(param_1 + 0x20);
  for (iVar8 = 0; iVar9 != iVar8; iVar8 = iVar8 + 1) {
    uVar7 = *(ulong *)(param_1 + 0x18);
    puVar1 = (ulong *)(param_1 + 0x18);
    if ((uVar7 & 1) != 0) {
      puVar1 = (ulong *)(uVar7 + (long)iVar8 * 8 + 7);
    }
    plVar6 = (long *)(ulong)*(uint *)(*puVar1 + 0x14);
    plVar4 = (long *)0x5;
    func_0x00010ae137f4();
  }
  if ((uVar2 >> 1 & 1) != 0) {
    plVar6 = (long *)(ulong)*(uint *)(*(long *)(param_1 + 0x40) + 0x14);
    plVar4 = (long *)0x6;
    func_0x00010ae137f4();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010ae138c0();
    if ((long)plVar6 < 0) {
      lVar5 = *(long *)(extraout_x8 + 8);
      plVar6 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar5 = extraout_x8 + 8;
    }
    if (*param_3 - (long)plVar4 < (long)(int)plVar6) {
      while( true ) {
        iVar9 = ((int)*param_3 - (int)plVar4) + 0x10;
        iVar8 = (int)plVar6;
        plVar6 = (long *)(ulong)(uint)(iVar8 - iVar9);
        if (iVar8 - iVar9 == 0 || iVar8 < iVar9) break;
        func_0x00010b4d5738();
        lVar5 = (long)plVar4 + (long)iVar9;
        plVar4 = param_3;
        func_0x000107c303e4(param_3,lVar5);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar4 + (long)iVar8);
    }
    _memcpy(plVar4,lVar5,(ulong)plVar6 & 0xffffffff);
    return (long *)((long)plVar4 + (long)(int)plVar6);
  }
  return plVar4;
}



/* Entry: 10ae11e28; end: 10ae11ef3;  */

void FUN_10ae11e28(long param_1)

{
  uint uVar1;
  int iVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long lVar4;
  long extraout_x9;
  int unaff_w20;
  long unaff_x22;
  
  lVar4 = param_1;
  func_0x00010ae137a0();
  while (unaff_x22 != 0) {
    func_0x00010ae1394c();
    func_0x00010ae139dc();
  }
  func_0x00010ae13830(*(undefined8 *)(param_1 + 0x30));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar4 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
    func_0x00010ae137d8();
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000106af66c4(*(undefined8 *)(param_1 + 0x38));
      func_0x00010ae137d8();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10ae11ef4(*(undefined8 *)(param_1 + 0x40));
      func_0x00010ae137d8();
    }
  }
  iVar2 = unaff_w20 + (uint)*(byte *)(param_1 + 0x48) * 2;
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar2 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x4c)) * -9 + 0x2c0U >> 6) + iVar2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010ae13898();
    lVar4 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar4 = *(long *)(extraout_x9 + 0x10);
    }
    iVar2 = (int)lVar4 + iVar2;
  }
  *(int *)(param_1 + 0x14) = iVar2;
  return;
}



/* Entry: 10ae11ef4; end: 10ae11f0b;  */

void FUN_10ae11ef4(void)

{
  FUN_10ae12d18();
  FUN_10ae13670();
  return;
}



/* Entry: 10ae11f0c; end: 10ae11f1f;  */

void FUN_10ae11f0c(void)

{
  uint uVar1;
  ulong *puVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar5;
  
  func_0x00010ae137b8();
  puVar5 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar5 & 1) != 0) {
    puVar5 = *(ulong **)((ulong)puVar5 & 0xfffffffffffffffe);
  }
  puVar2 = (ulong *)(unaff_x21 + 0x18);
  lVar3 = unaff_x20 + 0x18;
  FUN_10ae11f0c();
  func_0x00010ae13814(*(undefined8 *)(unaff_x20 + 0x30));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010ae13808();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x30);
    func_0x000107c30248();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x38);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar5;
        func_0x000106af66f4();
        *(ulong **)(unaff_x21 + 0x38) = puVar2;
      }
      else {
        func_0x00010bcebc88();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x40);
      if (puVar2 == (ulong *)0x0) {
        FUN_10ae135c4();
        *(ulong **)(unaff_x21 + 0x40) = puVar5;
        puVar2 = puVar5;
      }
      else {
        FUN_10ae11f20();
      }
    }
  }
  if (*(char *)(unaff_x20 + 0x48) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x48) = 1;
  }
  if (*(int *)(unaff_x20 + 0x4c) != 0) {
    *(int *)(unaff_x21 + 0x4c) = *(int *)(unaff_x20 + 0x4c);
  }
  func_0x00010ae13884();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  func_0x00010ae137c8();
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10ae11f20; end: 10ae12017;  */

void FUN_10ae11f20(ulong *param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x8_02;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010ae137b8();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  puVar1 = puVar2;
  if (((ulong)puVar2 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  func_0x00010ae13814(*(undefined8 *)(unaff_x20 + 0x18));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if (((ulong)puVar2 & 1) != 0) {
      func_0x00010ae13808();
    }
    param_1 = (ulong *)(unaff_x21 + 0x18);
    func_0x000107c30248();
  }
  func_0x00010ae13814(*(undefined8 *)(unaff_x20 + 0x20));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010ae13808();
    }
    param_1 = (ulong *)(unaff_x21 + 0x20);
    func_0x000107c30248();
  }
  func_0x00010ae13814(*(undefined8 *)(unaff_x20 + 0x28));
  lVar3 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010ae13808();
    }
    param_1 = (ulong *)(unaff_x21 + 0x28);
    func_0x000107c30248();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x30);
    if (param_1 == (ulong *)0x0) {
      func_0x000106af66f4();
      *(ulong **)(unaff_x21 + 0x30) = puVar1;
      param_1 = puVar1;
    }
    else {
      func_0x00010bcebc88();
    }
  }
  if (*(char *)(unaff_x20 + 0x38) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x38) = 1;
  }
  func_0x00010ae13884();
  if ((extraout_x8_02 & 1) != 0) {
    func_0x00010ae137c8();
    if ((*param_1 & 1) == 0) {
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



/* Entry: 10ae12018; end: 10ae1205b;  */

long FUN_10ae12018(long param_1)

{
  func_0x00010ae137e4();
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10ae12b64();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10ae1205c; end: 10ae1206f;  */

void FUN_10ae1205c(void)

{
  FUN_10ae12018();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae12070; end: 10ae1207b;  */

undefined ** FUN_10ae12070(void)

{
  return &PTR_DAT_110c797a0;
}



/* Entry: 10ae1207c; end: 10ae120cb;  */

void FUN_10ae1207c(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae139bc();
  func_0x000107c3025c(unaff_x19 + 0x20);
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    func_0x00010ae11c3c(*(undefined8 *)(unaff_x19 + 0x28));
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined1 *)(unaff_x19 + 0x38) = 0;
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
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



/* Entry: 10ae120cc; end: 10ae121d3;  */

long * FUN_10ae120cc(long *param_1,long param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar5;
  long *unaff_x22;
  int iVar6;
  
  func_0x00010ae13724();
  func_0x00010ae137fc(param_1[3]);
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10ae12118;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10ae12118;
  param_4 = (long *)&UNK_10f6c3d86;
  func_0x00010ae1378c();
  func_0x00010ae13698();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10ae12118:
  if ((*(byte *)(unaff_x21 + 0x10) & 1) != 0) {
    param_1 = (long *)0x2;
    func_0x00010ae13708(2,*(long *)(unaff_x21 + 0x28),
                        *(undefined4 *)(*(long *)(unaff_x21 + 0x28) + 0x14));
    unaff_x20 = param_1;
  }
  if (*(long *)(unaff_x21 + 0x30) != 0) {
    param_1 = unaff_x19;
    func_0x00010599ccb0();
    unaff_x20 = param_1;
  }
  uVar3 = *(ulong *)(unaff_x21 + 0x20) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar3 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar3 + 8);
  }
  if (lVar4 != 0) {
    func_0x000107c280a0();
    param_1 = unaff_x19;
    param_4 = unaff_x20;
    unaff_x20 = unaff_x19;
  }
  plVar2 = param_1;
  if (*(char *)(unaff_x21 + 0x38) == '\x01') {
    func_0x00010ae13864();
    plVar2 = (long *)0x28;
    func_0x000107c280a8(0x28,param_1);
    func_0x00010ae138a4();
    unaff_x20 = plVar2;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x00010ae138c0();
    if ((long)uVar3 < 0) {
      uVar3 = *(ulong *)(extraout_x8 + 0x10);
    }
    func_0x00010ae13914();
    if (*plVar2 - (long)param_4 < (long)(int)uVar3) {
      while( true ) {
        iVar6 = ((int)*plVar2 - (int)param_4) + 0x10;
        iVar5 = (int)uVar3;
        uVar3 = (ulong)(uint)(iVar5 - iVar6);
        if (iVar5 - iVar6 == 0 || iVar5 < iVar6) break;
        func_0x00010b4d5738();
        puVar1 = (undefined *)((long)param_4 + (long)iVar6);
        param_4 = plVar2;
        func_0x000107c303e4(plVar2,puVar1);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar5);
    }
    _memcpy(param_4);
    return (long *)((long)param_4 + (long)(int)uVar3);
  }
  return unaff_x20;
}



/* Entry: 10ae121d4; end: 10ae12277;  */

void FUN_10ae121d4(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x8_01;
  long lVar3;
  long extraout_x9;
  
  lVar3 = param_1;
  func_0x00010ae13830(*(undefined8 *)(param_1 + 0x18));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x000107c282a0();
    iVar1 = (int)lVar3 + 1;
  }
  func_0x00010ae13830(*(undefined8 *)(param_1 + 0x20));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c28098();
    func_0x00010ae137d8();
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10ae11ef4(*(undefined8 *)(param_1 + 0x28));
    func_0x00010ae137d8();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x00010ae13768();
  }
  iVar1 = iVar1 + (uint)*(byte *)(param_1 + 0x38) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010ae13898();
    lVar3 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x14) = iVar1;
  return;
}



/* Entry: 10ae12278; end: 10ae1227b;  */

void FUN_10ae12278(ulong *param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010ae137b8();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  puVar1 = puVar2;
  if (((ulong)puVar2 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  func_0x00010ae13814(*(undefined8 *)(unaff_x20 + 0x18));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if (((ulong)puVar2 & 1) != 0) {
      func_0x00010ae13808();
    }
    param_1 = (ulong *)(unaff_x21 + 0x18);
    func_0x000107c30248();
  }
  func_0x00010ae13814(*(undefined8 *)(unaff_x20 + 0x20));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010ae13808();
    }
    param_1 = (ulong *)(unaff_x21 + 0x20);
    func_0x000107c30248();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x28);
    if (param_1 == (ulong *)0x0) {
      FUN_10ae135c4();
      *(ulong **)(unaff_x21 + 0x28) = puVar1;
      param_1 = puVar1;
    }
    else {
      FUN_10ae11f20();
    }
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(long *)(unaff_x21 + 0x30) = *(long *)(unaff_x20 + 0x30);
  }
  if (*(char *)(unaff_x20 + 0x38) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x38) = 1;
  }
  func_0x00010ae13884();
  if ((extraout_x8_01 & 1) != 0) {
    func_0x00010ae137c8();
    if ((*param_1 & 1) == 0) {
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



/* Entry: 10ae1227c; end: 10ae122af;  */

long FUN_10ae1227c(long param_1)

{
  func_0x00010ae137e4();
  func_0x000107c30258(param_1 + 0x28);
  func_0x00010ae1397c();
  func_0x00010ae1399c();
  return param_1;
}



/* Entry: 10ae122b0; end: 10ae122c3;  */

void FUN_10ae122b0(void)

{
  FUN_10ae1227c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae122c4; end: 10ae122cf;  */

undefined ** FUN_10ae122c4(void)

{
  return &PTR_DAT_110c797e0;
}



/* Entry: 10ae122d0; end: 10ae12313;  */

void FUN_10ae122d0(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae13858();
  FUN_10ae1312c();
  func_0x000107c3025c(unaff_x19 + 0x28);
  func_0x00010ae139c8();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined1 *)(unaff_x19 + 0x40) = 0;
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
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



/* Entry: 10ae12314; end: 10ae1242b;  */

long * FUN_10ae12314(long *param_1,long param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar5;
  long *unaff_x22;
  int iVar6;
  
  func_0x00010ae13724();
  func_0x00010ae137fc(param_1[5]);
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10ae12364;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10ae12364;
  param_4 = (long *)&UNK_10f6c3da9;
  func_0x00010ae1378c();
  func_0x00010ae13698();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10ae12364:
  if (*(long *)(unaff_x21 + 0x38) != 0) {
    param_1 = unaff_x19;
    func_0x000107c282cc();
    unaff_x20 = param_1;
  }
  uVar3 = *(ulong *)(unaff_x21 + 0x30) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar3 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar3 + 8);
  }
  if (lVar4 != 0) {
    func_0x000107c280a0();
    param_1 = unaff_x19;
    param_4 = unaff_x20;
    unaff_x20 = unaff_x19;
  }
  iVar6 = *(int *)(unaff_x21 + 0x18);
  for (iVar5 = 0; iVar6 != iVar5; iVar5 = iVar5 + 1) {
    func_0x00010ae13734();
    param_1 = (long *)0x4;
    func_0x00010ae13708();
    unaff_x20 = param_1;
  }
  plVar2 = param_1;
  if ((*(byte *)(unaff_x21 + 0x40) & 1) != 0) {
    func_0x00010ae13864();
    plVar2 = (long *)0x28;
    func_0x000107c280a8(0x28,param_1);
    func_0x00010ae138a4();
    unaff_x20 = plVar2;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x00010ae138c0();
    if ((long)uVar3 < 0) {
      uVar3 = *(ulong *)(extraout_x8 + 0x10);
    }
    func_0x00010ae13914();
    if (*plVar2 - (long)param_4 < (long)(int)uVar3) {
      while( true ) {
        iVar6 = ((int)*plVar2 - (int)param_4) + 0x10;
        iVar5 = (int)uVar3;
        uVar3 = (ulong)(uint)(iVar5 - iVar6);
        if (iVar5 - iVar6 == 0 || iVar5 < iVar6) break;
        func_0x00010b4d5738();
        puVar1 = (undefined *)((long)param_4 + (long)iVar6);
        param_4 = plVar2;
        func_0x000107c303e4(plVar2,puVar1);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar5);
    }
    _memcpy(param_4);
    return (long *)((long)param_4 + (long)(int)uVar3);
  }
  return unaff_x20;
}



/* Entry: 10ae1242c; end: 10ae124cf;  */

void FUN_10ae1242c(long param_1)

{
  int iVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar3;
  long extraout_x9;
  int unaff_w20;
  long unaff_x22;
  
  lVar3 = param_1;
  func_0x00010ae137a0();
  while (unaff_x22 != 0) {
    func_0x00010ae1394c();
    func_0x00010ae139dc();
  }
  func_0x00010ae13830(*(undefined8 *)(param_1 + 0x28));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010ae137d8();
  }
  func_0x00010ae13830(*(undefined8 *)(param_1 + 0x30));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c28098();
    func_0x00010ae137d8();
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    func_0x00010ae13768();
  }
  iVar1 = unaff_w20 + (uint)*(byte *)(param_1 + 0x40) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010ae13898();
    lVar3 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x44) = iVar1;
  return;
}



/* Entry: 10ae124d0; end: 10ae124d3;  */

void FUN_10ae124d0(ulong *param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long unaff_x19;
  
  lVar1 = param_2;
  func_0x00010ae13858();
  lVar1 = lVar1 + 0x10;
  FUN_10ae11f0c();
  func_0x00010ae13814(*(undefined8 *)(param_2 + 0x28));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae13808();
    }
    param_1 = (ulong *)(unaff_x19 + 0x28);
    func_0x000107c30248();
  }
  func_0x00010ae13814(*(undefined8 *)(param_2 + 0x30));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae13808();
    }
    param_1 = (ulong *)(unaff_x19 + 0x30);
    func_0x000107c30248();
  }
  if (*(long *)(param_2 + 0x38) != 0) {
    *(long *)(unaff_x19 + 0x38) = *(long *)(param_2 + 0x38);
  }
  if (*(char *)(param_2 + 0x40) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x40) = 1;
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010ae138b0();
    if ((*param_1 & 1) == 0) {
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



/* Entry: 10ae124d4; end: 10ae1250f;  */

long FUN_10ae124d4(long param_1)

{
  func_0x00010ae137e4();
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_10ae12524(param_1);
  }
  func_0x000105991a90(param_1 + 0x10);
  return param_1;
}



/* Entry: 10ae12510; end: 10ae12523;  */

void FUN_10ae12510(void)

{
  FUN_10ae124d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae12524; end: 10ae12553;  */

void FUN_10ae12524(long param_1)

{
  if (*(int *)(param_1 + 0x3c) - 1U < 2) {
    func_0x00010ae1397c();
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return;
}



/* Entry: 10ae12554; end: 10ae1255f;  */

undefined ** FUN_10ae12554(void)

{
  return &PTR_DAT_110c79820;
}



/* Entry: 10ae12560; end: 10ae12597;  */

void FUN_10ae12560(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae13858();
  func_0x000105991b74();
  FUN_10ae12524();
  puVar1 = (ulong *)(unaff_x19 + 8);
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



/* Entry: 10ae12598; end: 10ae1274f;  */

long * FUN_10ae12598(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 *puVar6;
  long lVar7;
  long lStack_78;
  undefined8 *puStack_70;
  
  func_0x00010ae13724();
  if (*(int *)((long)param_1 + 0x3c) == 2) {
    func_0x00010ae137fc(*(undefined8 *)(unaff_x21 + 0x30));
    func_0x00010ae1378c();
  }
  else {
    if (*(int *)((long)param_1 + 0x3c) != 1) goto LAB_10ae12634;
    func_0x00010ae137fc(*(undefined8 *)(unaff_x21 + 0x30));
    func_0x00010ae1378c();
  }
  param_1 = unaff_x19;
  func_0x00010ae136c4();
  unaff_x20 = param_1;
LAB_10ae12634:
  if (*(int *)(unaff_x21 + 0x10) != 0) {
    if ((*(int *)(unaff_x21 + 0x10) == 1) || ((*(byte *)((long)unaff_x19 + 0x3a) & 1) == 0)) {
      plVar3 = &lStack_78;
      func_0x00010564c19c(plVar3);
      while (param_1 = plVar3, lVar7 = lStack_78, lStack_78 != 0) {
        lVar4 = lStack_78 + 8;
        plVar3 = (long *)(lStack_78 + 0x20);
        func_0x00010ae136ac();
        lVar5 = (long)*(char *)(lVar7 + 0x1f);
        if (lVar5 < 0) {
          lVar4 = *(long *)(lVar7 + 8);
          lVar5 = *(long *)(lVar7 + 0x10);
        }
        func_0x00010ae136fc(lVar4,lVar5);
        lVar4 = (long)*(char *)(lVar7 + 0x37);
        if (lVar4 < 0) {
          plVar3 = *(long **)(lVar7 + 0x20);
          lVar4 = *(long *)(lVar7 + 0x28);
        }
        func_0x00010ae136fc(plVar3,lVar4);
        func_0x00010ae13954();
        unaff_x20 = param_1;
      }
    }
    else {
      func_0x00010ae13990();
      plVar3 = param_1;
      puVar1 = puStack_70;
      for (lVar7 = lStack_78 << 3; param_1 = plVar3, lVar7 != 0; lVar7 = lVar7 + -8) {
        puVar6 = (undefined8 *)*puVar1;
        plVar3 = puVar6 + 3;
        func_0x00010ae136ac();
        lVar4 = (long)*(char *)((long)puVar6 + 0x17);
        puVar2 = puVar6;
        if (lVar4 < 0) {
          lVar4 = puVar6[1];
          puVar2 = (undefined8 *)*puVar6;
        }
        func_0x00010ae136fc(puVar2,lVar4);
        lVar4 = (long)*(char *)((long)puVar6 + 0x2f);
        if (lVar4 < 0) {
          plVar3 = (long *)puVar6[3];
          lVar4 = puVar6[4];
        }
        func_0x00010ae136fc(plVar3,lVar4);
        puVar1 = puVar1 + 1;
        unaff_x20 = param_1;
      }
      func_0x00010ae13974();
    }
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x00010ae138c0();
    func_0x00010ae13914();
    func_0x0001053930c4();
    unaff_x20 = param_1;
  }
  return unaff_x20;
}



/* Entry: 10ae12750; end: 10ae127c7;  */

long FUN_10ae12750(long param_1)

{
  long extraout_x8;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x00010ae13900();
  while (uStack_38 != 0) {
    func_0x00010ae139b0();
    unaff_x20 = param_1 + unaff_x20;
    func_0x00010ae13954();
  }
  if (*(int *)(unaff_x19 + 0x3c) - 1U < 2) {
    func_0x000107c282a0(*(ulong *)(unaff_x19 + 0x30) & 0xfffffffffffffffc);
    func_0x00010ae137d8();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010ae13898();
    lVar1 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x38) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 10ae127c8; end: 10ae127cb;  */

void FUN_10ae127c8(void)

{
  int iVar1;
  int iVar2;
  ulong *puVar3;
  ulong extraout_x8;
  ulong uVar4;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  ulong uVar5;
  
  func_0x00010ae137b8();
  uVar5 = *(ulong *)(unaff_x19 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  puVar3 = unaff_x21 + 2;
  func_0x0001059929d4();
  iVar1 = *(int *)(unaff_x20 + 0x3c);
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)unaff_x21 + 0x3c);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        puVar3 = unaff_x21;
        FUN_10ae12524();
      }
      *(int *)((long)unaff_x21 + 0x3c) = iVar1;
    }
    func_0x00010ae13870();
    if ((iVar1 == 2) || (iVar1 == 1)) {
      if (iVar2 != iVar1) {
        unaff_x21[6] = extraout_x8;
      }
      uVar4 = *(ulong *)(unaff_x20 + 0x30) & 0xfffffffffffffffc;
      if (*(int *)(unaff_x20 + 0x3c) != iVar1) {
        uVar4 = extraout_x8;
      }
      puVar3 = unaff_x21 + 6;
      func_0x000107c30248(puVar3,uVar4,uVar5);
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae137c8();
    if ((*puVar3 & 1) == 0) {
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



/* Entry: 10ae127cc; end: 10ae127f7;  */

long FUN_10ae127cc(long param_1)

{
  func_0x00010ae137e4();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10ae127f8; end: 10ae1280b;  */

void FUN_10ae127f8(void)

{
  FUN_10ae127cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae1280c; end: 10ae12817;  */

undefined ** FUN_10ae1280c(void)

{
  return &PTR_DAT_110c79860;
}



/* Entry: 10ae12818; end: 10ae12847;  */

void FUN_10ae12818(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae13858();
  func_0x000107c3025c();
  puVar1 = (ulong *)(unaff_x19 + 8);
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



/* Entry: 10ae12848; end: 10ae128df;  */

long * FUN_10ae12848(long param_1,long param_2,long *param_3)

{
  long lVar1;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  long *plVar3;
  int iVar4;
  
  plVar3 = param_3;
  func_0x00010ae139d0();
  func_0x00010ae137fc(*(undefined8 *)(param_1 + 0x10));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10ae128a8;
  }
  else if ((int)param_2 == 0) goto LAB_10ae128a8;
  func_0x00010ae1378c();
  unaff_x19 = param_3;
  func_0x000107c280a0(param_3,1);
  plVar3 = unaff_x22;
LAB_10ae128a8:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x19;
  }
  func_0x00010ae138c0();
  if ((long)plVar3 < 0) {
    lVar1 = *(long *)(extraout_x8 + 8);
    plVar3 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar1 = extraout_x8 + 8;
  }
  if (*param_3 - (long)unaff_x19 < (long)(int)plVar3) {
    while( true ) {
      iVar4 = ((int)*param_3 - (int)unaff_x19) + 0x10;
      iVar2 = (int)plVar3;
      plVar3 = (long *)(ulong)(uint)(iVar2 - iVar4);
      if (iVar2 - iVar4 == 0 || iVar2 < iVar4) break;
      func_0x00010b4d5738();
      lVar1 = (long)unaff_x19 + (long)iVar4;
      unaff_x19 = param_3;
      func_0x000107c303e4(param_3,lVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)unaff_x19 + (long)iVar2);
  }
  _memcpy(unaff_x19,lVar1,(ulong)plVar3 & 0xffffffff);
  return (long *)((long)unaff_x19 + (long)(int)plVar3);
}



/* Entry: 10ae128e0; end: 10ae1293f;  */

void FUN_10ae128e0(long param_1)

{
  int iVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long lVar3;
  long extraout_x9;
  
  lVar3 = param_1;
  func_0x00010ae13830(*(undefined8 *)(param_1 + 0x10));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x000107c282a0();
    iVar1 = (int)lVar3 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010ae13898();
    lVar3 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x18) = iVar1;
  return;
}



/* Entry: 10ae12940; end: 10ae12943;  */

void FUN_10ae12940(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010ae13920();
  func_0x00010ae13814(*(undefined8 *)(param_2 + 0x10));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae13808();
    }
    param_1 = (ulong *)(unaff_x19 + 0x10);
    func_0x000107c30248();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae138b0();
    if ((*param_1 & 1) == 0) {
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



/* Entry: 10ae12944; end: 10ae1297b;  */

long FUN_10ae12944(long param_1)

{
  func_0x00010ae137e4();
  func_0x000107c30258(param_1 + 0x40);
  FUN_10ae12e44(param_1 + 0x28);
  func_0x00010ae1399c();
  return param_1;
}



/* Entry: 10ae1297c; end: 10ae1298f;  */

void FUN_10ae1297c(void)

{
  FUN_10ae12944();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae12990; end: 10ae1299b;  */

undefined ** FUN_10ae12990(void)

{
  return &PTR_DAT_110c798a0;
}



/* Entry: 10ae1299c; end: 10ae129db;  */

void FUN_10ae1299c(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae13858();
  FUN_10ae1312c();
  FUN_10ae1312c(unaff_x19 + 0x28);
  func_0x000107c3025c(unaff_x19 + 0x40);
  puVar1 = (ulong *)(unaff_x19 + 8);
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



/* Entry: 10ae129dc; end: 10ae12ab7;  */

long * FUN_10ae129dc(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  int iVar3;
  
  func_0x00010ae13724();
  func_0x00010ae137fc(param_1[8]);
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10ae12a2c;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10ae12a2c;
  param_4 = (long *)&UNK_10f6c3e5a;
  func_0x00010ae1378c();
  func_0x00010ae13698();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10ae12a2c:
  iVar3 = *(int *)(unaff_x21 + 0x18);
  for (iVar2 = 0; iVar3 != iVar2; iVar2 = iVar2 + 1) {
    func_0x00010ae13734();
    param_1 = (long *)0x2;
    func_0x00010ae13708();
    unaff_x20 = param_1;
  }
  iVar3 = *(int *)(unaff_x21 + 0x30);
  for (iVar2 = 0; iVar3 != iVar2; iVar2 = iVar2 + 1) {
    func_0x00010ae13734();
    param_1 = (long *)0x3;
    func_0x00010ae13708();
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x00010ae138c0();
    if ((long)param_3 < 0) {
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    func_0x00010ae13914();
    if (*param_1 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar3 = ((int)*param_1 - (int)param_4) + 0x10;
        iVar2 = (int)param_3;
        param_3 = (ulong)(uint)(iVar2 - iVar3);
        if (iVar2 - iVar3 == 0 || iVar2 < iVar3) break;
        func_0x00010b4d5738();
        puVar1 = (undefined *)((long)param_4 + (long)iVar3);
        param_4 = param_1;
        func_0x000107c303e4(param_1,puVar1);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar2);
    }
    _memcpy(param_4);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return unaff_x20;
}



/* Entry: 10ae12ab8; end: 10ae12b5f;  */

long FUN_10ae12ab8(long param_1)

{
  int iVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long lVar3;
  long extraout_x9;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar3 = param_1;
  func_0x00010ae137a0();
  while (unaff_x22 != 0) {
    func_0x00010ae1394c();
    func_0x00010ae139dc();
  }
  iVar1 = *(int *)(param_1 + 0x30);
  lVar4 = unaff_x20 + iVar1;
  while (((long)iVar1 & 0x1fffffffffffffffU) != 0) {
    func_0x00010ae1394c();
    func_0x00010ae139dc();
  }
  func_0x00010ae13830(*(undefined8 *)(param_1 + 0x40));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010ae137d8();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010ae13898();
    lVar3 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    lVar4 = lVar3 + lVar4;
  }
  *(int *)(param_1 + 0x48) = (int)lVar4;
  return lVar4;
}



/* Entry: 10ae12b60; end: 10ae12b63;  */

void FUN_10ae12b60(undefined8 param_1,long param_2)

{
  ulong *puVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long unaff_x19;
  
  func_0x00010ae13858();
  FUN_10ae11f0c();
  puVar1 = (ulong *)(unaff_x19 + 0x28);
  lVar2 = param_2 + 0x28;
  func_0x00010ae11f10();
  func_0x00010ae13814(*(undefined8 *)(param_2 + 0x40));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae13808();
    }
    puVar1 = (ulong *)(unaff_x19 + 0x40);
    func_0x000107c30248();
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010ae138b0();
    if ((*puVar1 & 1) == 0) {
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



/* Entry: 10ae12b64; end: 10ae12baf;  */

long FUN_10ae12b64(long param_1)

{
  func_0x00010ae137e4();
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  func_0x000107c30258(param_1 + 0x28);
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x00010bcebc38();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10ae12bb0; end: 10ae12bb3;  */

long FUN_10ae12bb0(long param_1)

{
  func_0x00010ae137e4();
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  func_0x000107c30258(param_1 + 0x28);
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x00010bcebc38();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10ae12bb4; end: 10ae12bc7;  */

void FUN_10ae12bb4(void)

{
  FUN_10ae12b64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae12bc8; end: 10ae12bd3;  */

undefined ** FUN_10ae12bc8(void)

{
  return &PTR_DAT_110c798e8;
}



/* Entry: 10ae12bd4; end: 10ae12d17;  */

long * FUN_10ae12bd4(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x00010ae13724();
  func_0x00010ae137fc(param_1[3]);
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_10ae12c0c;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_10ae12c0c:
      param_4 = (long *)&UNK_10f6c3e86;
      func_0x00010ae1378c();
      func_0x00010ae13698();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x00010ae137fc(*(undefined8 *)(unaff_x21 + 0x20));
  if (param_2 < 0) {
    param_2 = 0;
    if (unaff_x22[1] != 0) goto LAB_10ae12c44;
  }
  else if ((int)param_2 != 0) {
LAB_10ae12c44:
    param_4 = (long *)&UNK_10f6c3eab;
    func_0x00010ae1378c();
    param_2 = 2;
    param_1 = unaff_x19;
    func_0x00010ae136c4();
    unaff_x20 = param_1;
  }
  func_0x00010ae137fc(*(undefined8 *)(unaff_x21 + 0x28));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10ae12ca0;
  }
  else if ((int)param_2 == 0) goto LAB_10ae12ca0;
  param_4 = (long *)&UNK_10f6c3ed3;
  func_0x00010ae1378c();
  func_0x00010ae136c4();
  param_1 = unaff_x19;
  unaff_x20 = unaff_x19;
LAB_10ae12ca0:
  plVar2 = param_1;
  if (*(char *)(unaff_x21 + 0x38) == '\x01') {
    func_0x00010ae13864();
    plVar2 = (long *)0x20;
    func_0x000107c280a8(0x20,param_1);
    func_0x00010ae138a4();
    unaff_x20 = plVar2;
  }
  if ((*(byte *)(unaff_x21 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x21 + 0x30) + 0x18);
    plVar2 = (long *)0x5;
    func_0x00010ae13708();
    unaff_x20 = plVar2;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x00010ae138c0();
    if ((long)param_3 < 0) {
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    func_0x00010ae13914();
    if (*plVar2 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*plVar2 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        param_3 = (ulong)(uint)(iVar3 - iVar4);
        if (iVar3 - iVar4 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        puVar1 = (undefined *)((long)param_4 + (long)iVar4);
        param_4 = plVar2;
        func_0x000107c303e4(plVar2,puVar1);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return unaff_x20;
}



/* Entry: 10ae12d18; end: 10ae12dcb;  */

void FUN_10ae12d18(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar3;
  long extraout_x9;
  
  lVar3 = param_1;
  func_0x00010ae13830(*(undefined8 *)(param_1 + 0x18));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x000107c282a0();
    iVar1 = (int)lVar3 + 1;
  }
  func_0x00010ae13830(*(undefined8 *)(param_1 + 0x20));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010ae137d8();
  }
  func_0x00010ae13830(*(undefined8 *)(param_1 + 0x28));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010ae137d8();
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x000106af66c4(*(undefined8 *)(param_1 + 0x30));
    func_0x00010ae137d8();
  }
  iVar1 = iVar1 + (uint)*(byte *)(param_1 + 0x38) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010ae13898();
    lVar3 = extraout_x8_02;
    if (extraout_x8_02 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x14) = iVar1;
  return;
}



/* Entry: 10ae12dcc; end: 10ae12e17;  */

void FUN_10ae12dcc(ulong *param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x8_02;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010ae137b8();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  puVar1 = puVar2;
  if (((ulong)puVar2 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  func_0x00010ae13814(*(undefined8 *)(unaff_x20 + 0x18));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if (((ulong)puVar2 & 1) != 0) {
      func_0x00010ae13808();
    }
    param_1 = (ulong *)(unaff_x21 + 0x18);
    func_0x000107c30248();
  }
  func_0x00010ae13814(*(undefined8 *)(unaff_x20 + 0x20));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010ae13808();
    }
    param_1 = (ulong *)(unaff_x21 + 0x20);
    func_0x000107c30248();
  }
  func_0x00010ae13814(*(undefined8 *)(unaff_x20 + 0x28));
  lVar3 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010ae13808();
    }
    param_1 = (ulong *)(unaff_x21 + 0x28);
    func_0x000107c30248();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x30);
    if (param_1 == (ulong *)0x0) {
      func_0x000106af66f4();
      *(ulong **)(unaff_x21 + 0x30) = puVar1;
      param_1 = puVar1;
    }
    else {
      func_0x00010bcebc88();
    }
  }
  if (*(char *)(unaff_x20 + 0x38) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x38) = 1;
  }
  func_0x00010ae13884();
  if ((extraout_x8_02 & 1) != 0) {
    func_0x00010ae137c8();
    if ((*param_1 & 1) == 0) {
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



/* Entry: 10ae12e18; end: 10ae12e43;  */

undefined8 * FUN_10ae12e18(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  FUN_10ae11f0c(param_1,param_3);
  return param_1;
}



/* Entry: 10ae12e44; end: 10ae12e73;  */

long * FUN_10ae12e44(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10ae12e74; end: 10ae1312b;  */

void FUN_10ae12e74(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010ae139a4();
  }
  *puVar1 = &PTR_DAT_110c79430;
  puVar1[1] = param_1;
  func_0x00010ae13870();
  puVar1[2] = extraout_x8;
  *(undefined4 *)(puVar1 + 3) = 0;
  return;
}



/* Entry: 10ae1312c; end: 10ae1313f;  */

void FUN_10ae1312c(ulong *param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  
  if ((int)param_1[1] < 1) {
    return;
  }
  lVar4 = 0;
  uVar3 = param_1[1];
  puVar2 = param_1;
  if ((*param_1 & 1) != 0) {
    puVar2 = (ulong *)(*param_1 + 7);
  }
  do {
    lVar1 = lVar4 + 1;
    (**(code **)(*(long *)puVar2[lVar4] + 0x18))();
    lVar4 = lVar1;
  } while (lVar1 < (int)uVar3);
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 10ae13140; end: 10ae131cf;  */

undefined8 * FUN_10ae13140(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010ae13820();
  }
  else {
    func_0x00010ae13828();
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110c79520;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010ae136d0();
  }
  func_0x000105991a48(puVar1 + 2,param_1,param_2 + 0x10);
  lVar2 = param_2 + 0x30;
  func_0x00010ae1387c();
  puVar1[6] = lVar2;
  *(undefined4 *)((long)puVar1 + 0x3c) = 0;
  *(undefined4 *)(puVar1 + 7) = *(undefined4 *)(param_2 + 0x38);
  return puVar1;
}



/* Entry: 10ae131d0; end: 10ae1329b;  */

undefined8 * FUN_10ae131d0(undefined8 *param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long unaff_x19;
  undefined8 *unaff_x21;
  
  func_0x00010ae139d0();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010ae1395c();
  }
  else {
    param_1 = unaff_x21;
    func_0x00010ae13964();
  }
  param_1[1] = unaff_x21;
  *param_1 = &PTR_DAT_110c79660;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010ae136d0();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(unaff_x19 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  FUN_10ae12e18(param_1 + 3);
  lVar2 = unaff_x19 + 0x30;
  func_0x00010ae138f0();
  param_1[6] = lVar2;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = unaff_x21;
    func_0x000106af66f4();
  }
  param_1[7] = puVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    unaff_x21 = (undefined8 *)0x0;
  }
  else {
    FUN_10ae135c4();
  }
  param_1[8] = unaff_x21;
  param_1[9] = *(undefined8 *)(unaff_x19 + 0x48);
  return param_1;
}



/* Entry: 10ae1329c; end: 10ae1333f;  */

undefined8 * FUN_10ae1329c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 *unaff_x21;
  
  func_0x00010ae139d0();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010ae13820();
  }
  else {
    param_1 = unaff_x21;
    func_0x00010ae13828();
  }
  param_1[1] = unaff_x21;
  *param_1 = &PTR_DAT_110c79610;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010ae136d0();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(unaff_x19 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lVar1 = unaff_x19 + 0x18;
  func_0x00010ae138f0();
  param_1[3] = lVar1;
  lVar1 = unaff_x19 + 0x20;
  func_0x00010ae138f0();
  param_1[4] = lVar1;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    unaff_x21 = (undefined8 *)0x0;
  }
  else {
    FUN_10ae135c4();
  }
  param_1[5] = unaff_x21;
  uVar2 = *(undefined8 *)(unaff_x19 + 0x30);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(unaff_x19 + 0x38);
  param_1[6] = uVar2;
  return param_1;
}


