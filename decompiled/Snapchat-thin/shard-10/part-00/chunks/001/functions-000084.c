/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1074486dc; end: 1074486ff;  */

void FUN_1074486dc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 107448700; end: 10744872f;  */

void FUN_107448700(void)

{
  undefined1 in_CY;
  
  func_0x00010744c0d4();
  if ((bool)in_CY) {
    FUN_107448730();
  }
  else {
    func_0x00010744cb58();
  }
  func_0x00010744cba4();
  return;
}



/* Entry: 107448730; end: 10744878f;  */

void FUN_107448730(undefined8 param_1,long param_2)

{
  func_0x00010744c010();
  func_0x00010744cd74();
  FUN_107448790();
  func_0x00010744c0bc();
  if (param_2 != 0) {
    FUN_107448678();
  }
  func_0x00010744c1ac();
  func_0x00010744c4f4();
  FUN_107448658();
  func_0x00010744c6f4();
  FUN_1074486b0();
  return;
}



/* Entry: 107448790; end: 1074487e3;  */

/* WARNING: Possible PIC construction at 0x0001074487d4: Changing call to branch */

long FUN_107448790(long *param_1,ulong param_2)

{
  long lVar1;
  undefined1 in_CY;
  long extraout_x8;
  long extraout_x9;
  long unaff_x19;
  
  if (param_2 >> 0x3d == 0) {
    func_0x00010744c4a0();
    lVar1 = extraout_x9;
    if ((bool)in_CY) {
      lVar1 = extraout_x8;
    }
    return lVar1;
  }
  FUN_10744864c();
  if (param_2 < (ulong)(param_1[1] - *param_1 >> 3)) {
    return *param_1 + param_2 * 8;
  }
  func_0x00010744c340();
  func_0x00010744c9ec();
  FUN_107448804();
  return unaff_x19;
}



/* Entry: 1074487e4; end: 107448803;  */

void FUN_1074487e4(void)

{
  func_0x00010744c9ec();
  FUN_107448804();
  return;
}



/* Entry: 107448804; end: 10744881b;  */

void FUN_107448804(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_1074485b4(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10744881c; end: 10744887f;  */

void FUN_10744881c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_1074485b4(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107448880; end: 1074488a3;  */

void FUN_107448880(long param_1,undefined8 *param_2)

{
  undefined1 auStack_28 [8];
  
  if (*(int *)(param_1 + 200) == 0) {
    FUN_1074488d4(auStack_28,param_1 + 8);
    func_0x00010744cff8();
    FUN_107448b8c();
  }
  else {
    func_0x00010744caf8(param_2,*param_2,param_2[1]);
    FUN_107448c20();
    func_0x00010744cff8();
    FUN_107449450();
  }
  return;
}



/* Entry: 1074488a4; end: 1074488d3;  */

void FUN_1074488a4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_28 [8];
  
  FUN_1074488d4(auStack_28,param_2);
  func_0x00010744cff8();
  FUN_107448b8c();
  return;
}



/* Entry: 1074488d4; end: 107448957;  */

undefined8 * FUN_1074488d4(undefined8 *param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined8 auStack_f8 [24];
  undefined8 uStack_38;
  
  func_0x00010744c078();
  uVar1 = 0xe0;
  uStack_38 = extraout_x8;
  __Znwm();
  FUN_1073bdfe8(auStack_f8,param_2);
  FUN_107448958(uVar1,auStack_f8);
  *param_1 = uVar1;
  puVar2 = auStack_f8;
  func_0x0001073bc804();
  func_0x00010744bf64(uStack_38);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010744cf0c();
  func_0x00010744c3c8();
  *puVar2 = &PTR_DAT_1109b1978;
  FUN_1073be024(puVar2 + 2);
  puVar2[0x1a] = 0;
  puVar2[0x1b] = 0;
  return puVar2;
}



/* Entry: 107448958; end: 1074489c3;  */

undefined8 * FUN_107448958(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109b1978;
  FUN_1073be024(param_1 + 2);
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  return param_1;
}



/* Entry: 1074489c4; end: 1074489e7;  */

void FUN_1074489c4(void)

{
  return;
}



/* Entry: 1074489e8; end: 107448a37;  */

void FUN_1074489e8(undefined8 param_1,long param_2,long param_3)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  if ((*(char *)(param_2 + 0x68) == '\x01') && ((*(byte *)(param_3 + 0x68) & 1) != 0)) {
    func_0x00010744c4e8();
    FUN_1073b805c();
    FUN_1073b805c();
    *(long *)(unaff_x19 + 0xd0) = param_3;
    *(undefined8 *)(unaff_x19 + 0xd8) = unaff_x20;
  }
  return;
}



/* Entry: 107448a38; end: 107448a3b;  */

void FUN_107448a38(undefined8 *param_1)

{
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  func_0x000104c2f64c();
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  return;
}



/* Entry: 107448a3c; end: 107448adf;  */

void FUN_107448a3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_5;
  FUN_1074daacc();
  if (((int)uVar1 == 0) || (FUN_1074daacc(param_5,param_3), (int)param_5 == 0)) {
    func_0x00010744ce88();
    func_0x00010744c36c();
    func_0x00010744ce88();
  }
  else {
    func_0x00010744c36c();
  }
  func_0x00010744c36c();
  return;
}



/* Entry: 107448ae0; end: 107448b87;  */

void FUN_107448ae0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *unaff_x20;
  
  func_0x00010744cac0();
  func_0x00010744cd90(*param_3);
  func_0x00010744c094();
  func_0x00010744cd90(*unaff_x20);
  func_0x00010744c094();
  return;
}



/* Entry: 107448b88; end: 107448b8b;  */

void FUN_107448b88(void)

{
  return;
}



/* Entry: 107448b8c; end: 107448bab;  */

void FUN_107448b8c(void)

{
  func_0x00010744c9ec();
  FUN_107448bac();
  return;
}



/* Entry: 107448bac; end: 107448bc3;  */

void FUN_107448bac(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x0001073bc804(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 107448bc4; end: 107448c1f;  */

void FUN_107448bc4(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x0001073bc804(param_2 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 107448c20; end: 107448ce7;  */

undefined8 * FUN_107448c20(void)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  undefined8 *unaff_x20;
  float *unaff_x22;
  float fVar4;
  undefined1 auStack_148 [96];
  undefined8 auStack_e8 [18];
  undefined8 uStack_58;
  
  func_0x00010744c500();
  func_0x00010744c078();
  uVar1 = 0x208;
  uStack_58 = extraout_x8;
  __Znwm();
  FUN_1073dee98(auStack_e8);
  fVar4 = *unaff_x22;
  func_0x000107278acc(auStack_148);
  puVar3 = auStack_148;
  FUN_107448ce8(uVar1,auStack_e8,puVar3);
  *unaff_x20 = uVar1;
  func_0x00010744cd20();
  puVar2 = auStack_e8;
  func_0x0001072ca3d4();
  func_0x00010744bf64(uStack_58);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010744cd20();
  puVar2 = auStack_e8;
  func_0x0001072ca3d4();
  func_0x00010744c788();
  func_0x00010744c710();
  *puVar2 = &PTR_FUN_1109b1a28;
  func_0x0001072ca350(puVar2 + 2);
  func_0x00010726ccd4(puVar2 + 0x14,puVar3);
  *(float *)(puVar2 + 0x20) = fVar4;
  *(float *)((long)puVar2 + 0x104) = fVar4 + 1.0;
  *(undefined1 *)(puVar2 + 0x30) = 0;
  *(undefined1 *)(puVar2 + 0x31) = 0;
  *(undefined1 *)(puVar2 + 0x37) = 0;
  *(undefined1 *)(puVar2 + 0x38) = 0;
  *(undefined1 *)(puVar2 + 0x3e) = 0;
  puVar2[0x22] = 0;
  puVar2[0x21] = 0;
  puVar2[0x24] = 0;
  puVar2[0x23] = 0;
  puVar2[0x26] = 0;
  puVar2[0x25] = 0;
  puVar2[0x28] = 0;
  puVar2[0x27] = 0;
  *(undefined8 *)((long)puVar2 + 0x149) = 0;
  *(undefined8 *)((long)puVar2 + 0x141) = 0;
  puVar2[0x3f] = 0;
  *(undefined8 *)((long)puVar2 + 0x1fd) = 0;
  return puVar2;
}



/* Entry: 107448ce8; end: 107448d73;  */

undefined8 * FUN_107448ce8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  float fVar1;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  
  fVar1 = (float)CONCAT13(in_register_00005003,
                          CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0)));
  *param_1 = &PTR_FUN_1109b1a28;
  func_0x0001072ca350(param_1 + 2);
  func_0x00010726ccd4(param_1 + 0x14,param_3);
  *(float *)(param_1 + 0x20) = fVar1;
  *(float *)((long)param_1 + 0x104) = fVar1 + 1.0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  *(undefined1 *)(param_1 + 0x37) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  *(undefined8 *)((long)param_1 + 0x149) = 0;
  *(undefined8 *)((long)param_1 + 0x141) = 0;
  param_1[0x3f] = 0;
  *(undefined8 *)((long)param_1 + 0x1fd) = 0;
  return param_1;
}



/* Entry: 107448d74; end: 107448d77;  */

long FUN_107448d74(long param_1)

{
  func_0x00010730b13c(param_1 + 0x1c0);
  func_0x00010730b13c(param_1 + 0x188);
  func_0x00010730b13c(param_1 + 0x150);
  func_0x0001074491fc(param_1 + 0x138);
  func_0x0001074491fc(param_1 + 0x120);
  func_0x0001074491fc(param_1 + 0x108);
  func_0x00010726b164(param_1 + 0xa0);
  func_0x0001072ca3d4(param_1 + 0x10);
  return param_1;
}



/* Entry: 107448d78; end: 107448d8b;  */

void FUN_107448d78(void)

{
  FUN_107449234();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107448d8c; end: 107448f83;  */

void FUN_107448d8c(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long in_x6;
  long in_x7;
  ulong uVar5;
  undefined1 auStack_188 [104];
  undefined1 auStack_120 [104];
  undefined8 auStack_b8 [13];
  
  if (*(char *)(in_x7 + 0xa8) == '\x01') {
    iVar1 = (int)in_x7 + 0x38;
    func_0x000104c2d614();
    if (iVar1 == 0) {
      if (*(long *)(in_x6 + 0x10) != 0) {
        lVar2 = in_x6;
        FUN_1073f9894(in_x6,in_x7);
        lVar3 = in_x6;
        FUN_1073f9894(in_x6,in_x7 + 0x38);
        lVar4 = in_x6;
        FUN_1073f9894(in_x6,in_x7 + 0x70);
        in_x6 = in_x6 + 8;
        if ((in_x6 == lVar2 || in_x6 == lVar3) || in_x6 == lVar4) {
          return;
        }
        FUN_1073f6580(auStack_b8,lVar2 + 0x58);
        FUN_1073f6580(auStack_120,lVar3 + 0x58);
        FUN_1073f6580(auStack_188,lVar4 + 0x58);
        func_0x00010744c9c4(param_1 + 0x108);
        func_0x00010744c9c4(param_1 + 0x120);
        func_0x00010744c9c4(param_1 + 0x138);
        for (uVar5 = *(long *)(param_1 + 0x128) - *(long *)(param_1 + 0x120) >> 3; uVar5 < param_3;
            uVar5 = uVar5 + 1) {
          FUN_1073b805c();
          func_0x00010744cee0(param_1 + 0x108);
          FUN_1073b805c();
          func_0x00010744cee0(param_1 + 0x120);
          FUN_1073b805c();
          func_0x00010744cee0(param_1 + 0x138);
        }
        FUN_1073bc874(auStack_188);
        FUN_1073bc874(auStack_120);
        FUN_1073bc874(auStack_b8);
      }
      goto LAB_107448f28;
    }
  }
  func_0x00010744c9c4(param_1 + 0x108);
  func_0x00010744c9c4(param_1 + 0x120);
  func_0x00010744c9c4(param_1 + 0x138);
  for (uVar5 = *(long *)(param_1 + 0x128) - *(long *)(param_1 + 0x120) >> 3; uVar5 < param_3;
      uVar5 = uVar5 + 1) {
    auStack_b8[0] = 0;
    func_0x00010744cfac(param_1 + 0x108);
    auStack_b8[0] = 0;
    func_0x00010744cfac(param_1 + 0x120);
    auStack_b8[0] = 0;
    func_0x00010744cfac(param_1 + 0x138);
  }
LAB_107448f28:
  *(undefined1 *)(param_1 + 0x204) = 1;
  return;
}



/* Entry: 107448f84; end: 107448fbb;  */

long FUN_107448f84(long param_1)

{
  return (((*(long *)(param_1 + 0x138) - *(long *)(param_1 + 0x140) ^ 0xffffffffffffffffU) &
          0xfffffffffffffff0) -
         ((*(long *)(param_1 + 0x108) - *(long *)(param_1 + 0x110) | 0xfU) +
         (*(long *)(param_1 + 0x120) - *(long *)(param_1 + 0x128) | 0xfU))) + 0x2e;
}



/* Entry: 107448fbc; end: 1074490ab;  */

char FUN_107448fbc(long param_1)

{
  long lVar1;
  long lVar2;
  char cVar3;
  long unaff_x20;
  long unaff_x21;
  
  cVar3 = *(char *)(param_1 + 0x204);
  if (cVar3 == '\x01') {
    func_0x00010744d084();
    func_0x00010744c540();
    lVar1 = *(long *)(unaff_x20 + 0x108);
    lVar2 = *(long *)(unaff_x20 + 0x110);
    func_0x00010744c540();
    func_0x00010744cf44(unaff_x21 + ((lVar1 - lVar2 ^ 0xffffffffffffffffU) & 0xfffffffffffffff0) +
                        0x10 + ((*(long *)(unaff_x20 + 0x120) - *(long *)(unaff_x20 + 0x128) ^
                                0xffffffffffffffffU) & 0xfffffffffffffff0));
    *(undefined1 *)(unaff_x20 + 0x204) = 0;
  }
  return cVar3;
}



/* Entry: 1074490ac; end: 1074490c7;  */

void FUN_1074490ac(void)

{
  return;
}



/* Entry: 1074490c8; end: 107449177;  */

void FUN_1074490c8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5)

{
  FUN_1074daacc();
  if (param_5 != 0) {
    func_0x00010744d078();
    FUN_1074daacc();
    if (param_5 != 0) {
      if ((*(int *)(param_4 + 200) == 0) || (*(char *)(param_1 + 0x180) != '\x01')) {
        func_0x00010744c1cc();
      }
      else {
        func_0x00010744c1cc();
      }
      goto LAB_107449160;
    }
  }
  func_0x00010744ca28();
  func_0x00010744c1cc();
  func_0x00010744ca28();
LAB_107449160:
  func_0x00010744c1cc();
  return;
}



/* Entry: 107449178; end: 1074491ab;  */

void FUN_107449178(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  func_0x00010744c854();
  func_0x00010744c130(*param_3);
  func_0x00010744c094();
  func_0x00010744c130();
  func_0x00010744c094();
  return;
}



/* Entry: 1074491ac; end: 1074491bb;  */

void FUN_1074491ac(void)

{
  int *in_x3;
  
  *in_x3 = *in_x3 + 2;
  return;
}



/* Entry: 1074491bc; end: 10744921f;  */

void FUN_1074491bc(long param_1,ulong param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 auStack_48 [40];
  
  param_2 = param_2 & 0xffffffff;
  FUN_107449290(param_1 + 0x108,param_2);
  FUN_107449290(param_1 + 0x120,param_2);
  func_0x00010744c38c(param_1 + 0x138);
  if ((bool)in_CY && !(bool)in_ZR) {
    if (param_2 >> 0x3d != 0) {
      FUN_1074492e4();
      func_0x00010744c408();
      FUN_107449348();
      func_0x00010744c3c8();
      func_0x00010744c184();
      func_0x00010744bee4();
      func_0x00010744bea0();
      return;
    }
    func_0x00010744c94c();
    FUN_107449310();
    func_0x00010744c514();
    func_0x00010744c4f4();
    FUN_1074492f0();
    FUN_107449348(auStack_48);
  }
  return;
}



/* Entry: 107449220; end: 107449233;  */

void FUN_107449220(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107449234; end: 10744928f;  */

long FUN_107449234(long param_1)

{
  func_0x00010730b13c(param_1 + 0x1c0);
  func_0x00010730b13c(param_1 + 0x188);
  func_0x00010730b13c(param_1 + 0x150);
  func_0x0001074491fc(param_1 + 0x138);
  func_0x0001074491fc(param_1 + 0x120);
  func_0x0001074491fc(param_1 + 0x108);
  func_0x00010726b164(param_1 + 0xa0);
  func_0x0001072ca3d4(param_1 + 0x10);
  return param_1;
}



/* Entry: 107449290; end: 1074492e3;  */

void FUN_107449290(undefined8 param_1,ulong param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 auStack_48 [40];
  
  func_0x00010744c38c();
  if ((bool)in_CY && !(bool)in_ZR) {
    if (param_2 >> 0x3d != 0) {
      FUN_1074492e4();
      func_0x00010744c408();
      FUN_107449348();
      func_0x00010744c3c8();
      func_0x00010744c184();
      func_0x00010744bee4();
      func_0x00010744bea0();
      return;
    }
    func_0x00010744c94c();
    FUN_107449310();
    func_0x00010744c514();
    func_0x00010744c4f4();
    FUN_1074492f0();
    FUN_107449348(auStack_48);
  }
  return;
}



/* Entry: 1074492e4; end: 1074492ef;  */

void FUN_1074492e4(void)

{
  func_0x00010744c184();
  func_0x00010744bee4();
  func_0x00010744bea0();
  return;
}



/* Entry: 1074492f0; end: 10744930f;  */

void FUN_1074492f0(void)

{
  func_0x00010744bee4();
  func_0x00010744bea0();
  return;
}



/* Entry: 107449310; end: 10744932f;  */

void FUN_107449310(void)

{
  FUN_107449330();
  return;
}



/* Entry: 107449330; end: 107449347;  */

long * FUN_107449330(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = (long *)(param_2 << 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_107449374();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107449348; end: 107449373;  */

long * FUN_107449348(long *param_1)

{
  FUN_107449374();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107449374; end: 107449397;  */

void FUN_107449374(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 107449398; end: 1074493c7;  */

void FUN_107449398(void)

{
  undefined1 in_CY;
  
  func_0x00010744c0d4();
  if ((bool)in_CY) {
    FUN_1074493c8();
  }
  else {
    func_0x00010744cb58();
  }
  func_0x00010744cba4();
  return;
}



/* Entry: 1074493c8; end: 107449427;  */

void FUN_1074493c8(undefined8 param_1,long param_2)

{
  func_0x00010744c010();
  func_0x00010744cd74();
  FUN_107449428();
  func_0x00010744c0bc();
  if (param_2 != 0) {
    FUN_107449310();
  }
  func_0x00010744c1ac();
  func_0x00010744c4f4();
  FUN_1074492f0();
  func_0x00010744c6f4();
  FUN_107449348();
  return;
}



/* Entry: 107449428; end: 10744944f;  */

undefined8 FUN_107449428(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined1 in_CY;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  undefined8 unaff_x19;
  
  if (param_2 >> 0x3d == 0) {
    func_0x00010744c4a0();
    uVar1 = extraout_x9;
    if ((bool)in_CY) {
      uVar1 = extraout_x8;
    }
    return uVar1;
  }
  FUN_1074492e4();
  func_0x00010744c9ec();
  FUN_107449470();
  return unaff_x19;
}



/* Entry: 107449450; end: 10744946f;  */

void FUN_107449450(void)

{
  func_0x00010744c9ec();
  FUN_107449470();
  return;
}



/* Entry: 107449470; end: 107449487;  */

void FUN_107449470(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_107449234(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107449488; end: 1074494a3;  */

void FUN_107449488(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_107449234(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074494a4; end: 1074494e3;  */

long * FUN_1074494a4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x000107443604(lVar1 + 0x20);
    }
    func_0x00010744cf0c();
  }
  return param_1;
}



/* Entry: 1074494e4; end: 10744955b;  */

long * FUN_1074494e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar3;
  long *plVar4;
  
  func_0x00010744c454();
  plVar2 = *(long **)(unaff_x20 + 8);
  plVar3 = (long *)(unaff_x20 + 8);
  while (plVar4 = plVar3, plVar2 != (long *)0x0) {
    while (plVar4 = plVar2, uVar1 = param_3, func_0x000104c2fc44(param_3,plVar4 + 4),
          (int)uVar1 == 0) {
      plVar2 = plVar4 + 4;
      func_0x000104c2fc44(plVar2,param_3);
      if ((int)plVar2 == 0) goto LAB_10744954c;
      plVar3 = plVar4 + 1;
      plVar2 = (long *)*plVar3;
      if ((long *)*plVar3 == (long *)0x0) goto LAB_10744954c;
    }
    plVar3 = plVar4;
    plVar2 = (long *)*plVar4;
  }
LAB_10744954c:
  *unaff_x19 = plVar4;
  return plVar3;
}



/* Entry: 10744955c; end: 1074495c3;  */

void FUN_10744955c(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000107449588();
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  return;
}



/* Entry: 1074495c4; end: 10744963b;  */

void FUN_1074495c4(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    func_0x00010744c4e8();
    FUN_10744963c();
    lVar1 = *(long *)(unaff_x19 + 8);
    if (param_3 - unaff_x20 != 0) {
      _memmove(lVar1);
    }
    *(long *)(unaff_x19 + 8) = lVar1 + (param_3 - unaff_x20);
  }
  uStack_38 = 1;
  func_0x000107449684(&uStack_40);
  return;
}



/* Entry: 10744963c; end: 1074496ef;  */

long * FUN_10744963c(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 < 0x1555555555555556) {
    plVar1 = param_1 + 2;
    func_0x000107443c14();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)plVar1 + param_2 * 0xc;
    return plVar1;
  }
  FUN_107443bd4();
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    FUN_1073bc794(param_1);
  }
  return param_1;
}



/* Entry: 1074496f0; end: 1074496fb;  */

undefined4 * FUN_1074496f0(long *param_1,undefined4 *param_2,undefined4 *param_3,long param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_78 [16];
  undefined4 *puStack_68;
  
  lVar4 = param_4 - (long)param_3 >> 2;
  if (0 < lVar4) {
    lVar5 = param_1[1];
    if (param_1[2] - lVar5 >> 2 < lVar4) {
      plVar3 = param_1;
      func_0x00010014b1ac(param_1,lVar4 + (lVar5 - *param_1 >> 2));
      func_0x00010014b1fc(auStack_78,plVar3,(long)param_2 - *param_1 >> 2,param_1 + 2);
      puVar2 = puStack_68;
      for (lVar5 = lVar4 << 2; lVar5 != 0; lVar5 = lVar5 + -4) {
        *puVar2 = *param_3;
        param_3 = param_3 + 1;
        puVar2 = puVar2 + 1;
      }
      puStack_68 = puStack_68 + lVar4;
      FUN_107428b08(param_1,auStack_78,param_2);
      func_0x00010744c408();
      func_0x00010014b328();
    }
    else {
      lVar5 = lVar5 - (long)param_2;
      lVar1 = lVar5 >> 2;
      if (lVar1 < lVar4) {
        func_0x0001009bf9a0(param_1,(long)param_3 + lVar5,param_4,lVar4 - lVar1);
        if (0 < lVar1) {
          func_0x00010744ca68();
          puVar2 = param_2;
          for (; lVar5 != 0; lVar5 = lVar5 + -4) {
            *puVar2 = *param_3;
            param_3 = param_3 + 1;
            puVar2 = puVar2 + 1;
          }
        }
      }
      else {
        func_0x00010744ca68();
        puVar2 = param_2;
        for (lVar4 = lVar4 << 2; lVar4 != 0; lVar4 = lVar4 + -4) {
          *puVar2 = *param_3;
          param_3 = param_3 + 1;
          puVar2 = puVar2 + 1;
        }
      }
    }
  }
  return param_2;
}



/* Entry: 1074496fc; end: 107449847;  */

undefined4 *
FUN_1074496fc(long *param_1,undefined4 *param_2,undefined4 *param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_78 [16];
  undefined4 *puStack_68;
  
  if (0 < param_5) {
    lVar4 = param_1[1];
    if (param_1[2] - lVar4 >> 2 < param_5) {
      plVar3 = param_1;
      func_0x00010014b1ac(param_1,param_5 + (lVar4 - *param_1 >> 2));
      func_0x00010014b1fc(auStack_78,plVar3,(long)param_2 - *param_1 >> 2,param_1 + 2);
      puVar2 = puStack_68;
      for (lVar4 = param_5 << 2; lVar4 != 0; lVar4 = lVar4 + -4) {
        *puVar2 = *param_3;
        param_3 = param_3 + 1;
        puVar2 = puVar2 + 1;
      }
      puStack_68 = puStack_68 + param_5;
      FUN_107428b08(param_1,auStack_78,param_2);
      func_0x00010744c408();
      func_0x00010014b328();
    }
    else {
      lVar4 = lVar4 - (long)param_2;
      lVar1 = lVar4 >> 2;
      if (lVar1 < param_5) {
        func_0x0001009bf9a0(param_1,(long)param_3 + lVar4,param_4,param_5 - lVar1);
        if (0 < lVar1) {
          func_0x00010744ca68();
          puVar2 = param_2;
          for (; lVar4 != 0; lVar4 = lVar4 + -4) {
            *puVar2 = *param_3;
            puVar2 = puVar2 + 1;
            param_3 = param_3 + 1;
          }
        }
      }
      else {
        func_0x00010744ca68();
        puVar2 = param_2;
        for (param_5 = param_5 << 2; param_5 != 0; param_5 = param_5 + -4) {
          *puVar2 = *param_3;
          puVar2 = puVar2 + 1;
          param_3 = param_3 + 1;
        }
      }
    }
  }
  return param_2;
}



/* Entry: 107449848; end: 10744984f;  */

void FUN_107449848(void)

{
  return;
}



/* Entry: 107449850; end: 107449877;  */

void FUN_107449850(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x00010744cfb4();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_FUN_1109b1ac8;
  param_1[1] = uVar1;
  return;
}



/* Entry: 107449878; end: 1074498a3;  */

void FUN_107449878(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1109b1ac8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1074498a4; end: 1074498cb;  */

void FUN_1074498a4(undefined8 param_1)

{
  func_0x00010744c8ac();
  func_0x00010744cf98(param_1,&PTR_DAT_1109b1b38);
  func_0x00010744cde0();
  return;
}



/* Entry: 1074498cc; end: 1074498d7;  */

undefined ** FUN_1074498cc(void)

{
  return &PTR_DAT_1109b1b38;
}



/* Entry: 1074498d8; end: 107449967;  */

/* WARNING: Possible PIC construction at 0x0001074499e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001074499ec) */
/* WARNING: Removing unreachable block (ram,0x000107449a18) */
/* WARNING: Removing unreachable block (ram,0x000107449a28) */
/* WARNING: Removing unreachable block (ram,0x000107449a34) */
/* WARNING: Removing unreachable block (ram,0x000107449a40) */
/* WARNING: Removing unreachable block (ram,0x000107449a4c) */
/* WARNING: Removing unreachable block (ram,0x000107449a58) */
/* WARNING: Removing unreachable block (ram,0x000107449a64) */
/* WARNING: Removing unreachable block (ram,0x000107449a84) */
/* WARNING: Removing unreachable block (ram,0x000107449a98) */
/* WARNING: Removing unreachable block (ram,0x000107449a9c) */
/* WARNING: Removing unreachable block (ram,0x000107449aa0) */
/* WARNING: Removing unreachable block (ram,0x000107449aa8) */
/* WARNING: Removing unreachable block (ram,0x000107449aac) */
/* WARNING: Removing unreachable block (ram,0x000107449ab0) */
/* WARNING: Removing unreachable block (ram,0x000107449ab4) */
/* WARNING: Removing unreachable block (ram,0x000107449ab8) */
/* WARNING: Removing unreachable block (ram,0x000107449ec4) */

void FUN_1074498d8(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  ulong uVar3;
  long extraout_x9;
  long *plVar4;
  long extraout_x10;
  long lVar5;
  ulong unaff_x20;
  int iVar6;
  long lVar7;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  puVar2 = &uStack_b0;
  func_0x00010744c078();
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_50 = 1;
  uStack_58 = 1;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_48 = 0;
  uStack_28 = extraout_x8;
  FUN_107449968(&uStack_b0);
  param_1[1] = uStack_a8;
  *param_1 = uStack_b0;
  param_1[2] = uStack_a0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_b0 = 0;
  FUN_10744bc20();
  func_0x00010744bf64(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010744c9e0();
  FUN_10744bc20();
  func_0x00010744c3c8();
  puVar2[1] = *puVar2;
  puVar2[3] = 0;
  if (*param_2 != param_2[1]) {
    func_0x00010744c4e8();
    lVar7 = 0;
    uVar3 = 0;
    plVar4 = (long *)(extraout_x9 + 8);
    iVar6 = 0x50;
    do {
      if ((ulong)((extraout_x10 - extraout_x9) / 0x18) <= uVar3) break;
      lVar5 = *plVar4 - plVar4[-1] >> 2;
      iVar6 = iVar6 - (int)lVar5;
      lVar7 = lVar7 + lVar5;
      uVar3 = uVar3 + 1;
      plVar4 = plVar4 + 3;
    } while (-1 < iVar6);
    puVar2 = param_1 + 10;
    func_0x00010744c4e8(puVar2,(ulong)(lVar7 * 3) >> 1);
    puVar1 = (undefined8 *)puVar2[4];
    for (puVar2 = (undefined8 *)puVar2[3]; puVar2 != puVar1; puVar2 = puVar2 + 1) {
      __ZdlPv(*puVar2);
    }
    param_1[4] = param_1[3];
    if (unaff_x20 < 2) {
      unaff_x20 = 1;
    }
    param_1[1] = unaff_x20;
    param_1[2] = unaff_x20;
    *param_1 = 0;
  }
  return;
}



/* Entry: 107449968; end: 107449b2f;  */

/* WARNING: Possible PIC construction at 0x0001074499e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001074499ec) */
/* WARNING: Removing unreachable block (ram,0x000107449a18) */
/* WARNING: Removing unreachable block (ram,0x000107449a28) */
/* WARNING: Removing unreachable block (ram,0x000107449a34) */
/* WARNING: Removing unreachable block (ram,0x000107449a40) */
/* WARNING: Removing unreachable block (ram,0x000107449a4c) */
/* WARNING: Removing unreachable block (ram,0x000107449a58) */
/* WARNING: Removing unreachable block (ram,0x000107449a64) */
/* WARNING: Removing unreachable block (ram,0x000107449a84) */
/* WARNING: Removing unreachable block (ram,0x000107449a98) */
/* WARNING: Removing unreachable block (ram,0x000107449a9c) */
/* WARNING: Removing unreachable block (ram,0x000107449aa0) */
/* WARNING: Removing unreachable block (ram,0x000107449aa8) */
/* WARNING: Removing unreachable block (ram,0x000107449aac) */
/* WARNING: Removing unreachable block (ram,0x000107449ab0) */
/* WARNING: Removing unreachable block (ram,0x000107449ab4) */
/* WARNING: Removing unreachable block (ram,0x000107449ab8) */
/* WARNING: Removing unreachable block (ram,0x000107449ec4) */

void FUN_107449968(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long extraout_x9;
  long *plVar4;
  long extraout_x10;
  long lVar5;
  undefined8 *unaff_x19;
  ulong unaff_x20;
  int iVar6;
  long lVar7;
  
  param_1[1] = *param_1;
  param_1[3] = 0;
  if (*param_2 != param_2[1]) {
    func_0x00010744c4e8();
    lVar7 = 0;
    uVar3 = 0;
    plVar4 = (long *)(extraout_x9 + 8);
    iVar6 = 0x50;
    do {
      if ((ulong)((extraout_x10 - extraout_x9) / 0x18) <= uVar3) break;
      lVar5 = *plVar4 - plVar4[-1] >> 2;
      iVar6 = iVar6 - (int)lVar5;
      lVar7 = lVar7 + lVar5;
      uVar3 = uVar3 + 1;
      plVar4 = plVar4 + 3;
    } while (-1 < iVar6);
    puVar2 = unaff_x19 + 10;
    func_0x00010744c4e8(puVar2,(ulong)(lVar7 * 3) >> 1);
    puVar1 = (undefined8 *)puVar2[4];
    for (puVar2 = (undefined8 *)puVar2[3]; puVar2 != puVar1; puVar2 = puVar2 + 1) {
      __ZdlPv(*puVar2);
    }
    unaff_x19[4] = unaff_x19[3];
    if (unaff_x20 < 2) {
      unaff_x20 = 1;
    }
    unaff_x19[1] = unaff_x20;
    unaff_x19[2] = unaff_x20;
    *unaff_x19 = 0;
  }
  return;
}



/* Entry: 107449b30; end: 107449c7f;  */

long FUN_107449b30(long param_1,long *param_2,uint param_3)

{
  short *psVar1;
  short *psVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  
  func_0x00010744c4e8();
  lVar9 = *param_2;
  lVar7 = param_2[1] - lVar9 >> 2;
  lVar8 = lVar7 + -1;
  lVar6 = 0;
  if (lVar7 != 0) {
    lVar6 = lVar8;
  }
  psVar1 = (short *)(lVar9 + 2);
  dVar10 = 0.0;
  lVar4 = 0;
  for (lVar5 = lVar7; lVar3 = lVar4, lVar5 != 0; lVar5 = lVar5 + -1) {
    psVar2 = (short *)(lVar9 + lVar6 * 4);
    dVar10 = dVar10 + ((double)(int)*psVar1 + (double)(int)psVar2[1]) *
                      ((double)(int)*psVar2 - (double)(int)psVar1[-1]);
    psVar1 = psVar1 + 2;
    lVar4 = lVar3 + 1;
    lVar6 = lVar3;
  }
  if (((param_3 ^ dVar10 <= 0.0) & 1) == 0) {
    lVar6 = 0;
    for (; lVar8 != -1; lVar8 = lVar8 + -1) {
      func_0x00010744cee8();
      lVar6 = param_1;
    }
  }
  else {
    lVar6 = 0;
    for (lVar9 = 0; lVar7 != lVar9; lVar9 = lVar9 + 1) {
      func_0x00010744cee8();
      lVar6 = param_1;
    }
  }
  if (((lVar6 != 0) && (*(double *)(lVar6 + 8) == *(double *)(*(long *)(lVar6 + 0x20) + 8))) &&
     (*(double *)(lVar6 + 0x10) == *(double *)(*(long *)(lVar6 + 0x20) + 0x10))) {
    func_0x00010744c7d0();
    FUN_107449f28();
    lVar6 = *(long *)(lVar6 + 0x20);
  }
  *(long *)(unaff_x19 + 0x18) = *(long *)(unaff_x19 + 0x18) + lVar7;
  return lVar6;
}



/* Entry: 107449c80; end: 107449d9f;  */

long FUN_107449c80(undefined8 param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  ulong uVar4;
  undefined1 auStack_70 [8];
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  func_0x00010744d084();
  lVar1 = *param_2;
  lVar2 = param_2[1];
  lStack_68 = 0;
  lStack_60 = 0;
  uStack_58 = 0;
  for (uVar4 = 1; uVar4 < (ulong)((lVar2 - lVar1) / 0x18); uVar4 = uVar4 + 1) {
    lVar3 = unaff_x20;
    FUN_107449b30();
    if (lVar3 != 0) {
      if (lVar3 == *(long *)(lVar3 + 0x20)) {
        *(undefined1 *)(lVar3 + 0x40) = 1;
      }
      func_0x00010744a148();
      FUN_10744a2a4(&lStack_68,auStack_70);
    }
  }
  FUN_10744a188(lStack_68,lStack_60);
  for (uVar4 = 0; uVar4 < (ulong)(lStack_60 - lStack_68 >> 3); uVar4 = uVar4 + 1) {
    func_0x00010744d00c();
    FUN_10744a1a4();
    param_3 = unaff_x20;
    func_0x00010744a200();
  }
  FUN_10744b2b8(&lStack_68);
  return param_3;
}



/* Entry: 107449da0; end: 107449ec3;  */

void FUN_107449da0(undefined8 param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *unaff_x19;
  int *piVar4;
  int *unaff_x21;
  int *piVar5;
  int *piVar6;
  
code_r0x000107449da0:
  func_0x00010744d090();
  piVar3 = unaff_x21;
LAB_107449dbc:
  do {
    if (piVar3 == (int *)0x0) {
      return;
    }
    piVar6 = piVar3;
    piVar5 = piVar3;
    if ((param_3 == 0) && ((char)unaff_x19[8] == '\x01')) {
      func_0x00010744c7d0();
      FUN_10744b2f0();
    }
LAB_107449ddc:
    do {
      piVar1 = *(int **)(piVar6 + 6);
      piVar2 = *(int **)(piVar6 + 8);
      if (piVar1 == piVar2) {
        return;
      }
      piVar3 = unaff_x19;
      piVar4 = piVar6;
      if ((char)unaff_x19[8] == '\x01') {
        FUN_10744b358();
        if (((ulong)piVar3 & 1) != 0) {
LAB_107449e20:
          func_0x0001009eba34(unaff_x19,piVar1);
          func_0x0001009eba34(unaff_x19,piVar6);
          func_0x00010744caec();
          func_0x0001009eba34();
          FUN_107449f28(unaff_x19,piVar6);
          piVar6 = *(int **)(piVar2 + 8);
          piVar5 = piVar6;
          goto LAB_107449ddc;
        }
      }
      else {
        func_0x00010744b4cc();
        if ((int)piVar3 != 0) goto LAB_107449e20;
      }
      piVar6 = piVar2;
    } while (piVar2 != piVar5);
    if (param_3 == 0) {
      func_0x00010744caec();
      func_0x00010744a200();
      param_3 = 1;
      goto LAB_107449dbc;
    }
    if (param_3 != 1) {
      if (param_3 != 2) {
        return;
      }
      func_0x00010744caec();
      func_0x00010744d090();
      do {
        piVar6 = *(int **)(piVar4 + 8);
        while (piVar6 = *(int **)(piVar6 + 8), piVar6 != *(int **)(piVar4 + 6)) {
          if (*piVar4 != *piVar6) {
            func_0x00010744c81c();
            FUN_10744ba00();
            if ((int)piVar3 != 0) {
              func_0x00010744c81c();
              FUN_10744b088();
              func_0x00010744c81c();
              func_0x00010744a200();
              func_0x00010744c7d0();
              func_0x00010744a200();
              func_0x00010744c81c();
              FUN_107449da0();
              func_0x00010744c7d0();
              param_3 = 0;
              goto code_r0x000107449da0;
            }
          }
        }
        piVar4 = *(int **)(piVar4 + 8);
        if (piVar4 == unaff_x21) {
          return;
        }
      } while( true );
    }
    func_0x00010744caec();
    func_0x00010744a200();
    piVar6 = unaff_x19;
    func_0x00010744b554(unaff_x19,piVar3);
    param_3 = 2;
    piVar3 = piVar6;
  } while( true );
}



/* Entry: 107449ec4; end: 107449ecb;  */

void FUN_107449ec4(long param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  ulong unaff_x20;
  undefined8 *puVar2;
  
  func_0x00010744c4e8(param_1,*(undefined8 *)(param_1 + 0x10));
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  for (puVar2 = *(undefined8 **)(param_1 + 0x18); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    __ZdlPv(*puVar2);
  }
  unaff_x19[4] = unaff_x19[3];
  if (unaff_x20 < 2) {
    unaff_x20 = 1;
  }
  unaff_x19[1] = unaff_x20;
  unaff_x19[2] = unaff_x20;
  *unaff_x19 = 0;
  return;
}



/* Entry: 107449ecc; end: 107449f27;  */

void FUN_107449ecc(long param_1,undefined4 param_2,short *param_3,long param_4)

{
  long lVar1;
  long lStack_38;
  long lStack_30;
  undefined4 uStack_24;
  
  lStack_30 = (long)*param_3;
  lStack_38 = (long)param_3[1];
  param_1 = param_1 + 0x50;
  uStack_24 = param_2;
  FUN_107449f4c(param_1,&uStack_24,&lStack_30,&lStack_38);
  if (param_4 == 0) {
    *(long *)(param_1 + 0x18) = param_1;
    *(long *)(param_1 + 0x20) = param_1;
  }
  else {
    lVar1 = *(long *)(param_4 + 0x20);
    *(long *)(param_1 + 0x18) = param_4;
    *(long *)(param_1 + 0x20) = lVar1;
    *(long *)(lVar1 + 0x18) = param_1;
    *(long *)(param_4 + 0x20) = param_1;
  }
  return;
}



/* Entry: 107449f28; end: 107449f4b;  */

void FUN_107449f28(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_2 + 0x18);
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(lVar2 + 0x18) = lVar1;
  *(long *)(lVar1 + 0x20) = lVar2;
  lVar1 = *(long *)(param_2 + 0x30);
  lVar2 = *(long *)(param_2 + 0x38);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x38) = lVar2;
  }
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x30) = lVar1;
  }
  return;
}



/* Entry: 107449f4c; end: 107449faf;  */

void FUN_107449f4c(long param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  undefined4 extraout_w8;
  ulong uVar1;
  long unaff_x22;
  long lVar2;
  
  func_0x00010744c19c();
  uVar1 = *(ulong *)(param_2 + 2);
  if (*(ulong *)(param_2 + 4) <= uVar1) {
    param_2 = (undefined4 *)(unaff_x22 + 0x30);
    FUN_107449fe0();
    func_0x00010744ca4c();
    uVar1 = 0;
  }
  func_0x00010744caa0(uVar1);
  lVar2 = *param_5;
  *param_2 = extraout_w8;
  *(double *)(param_2 + 2) = (double)param_1;
  *(double *)(param_2 + 4) = (double)lVar2;
  param_2[10] = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_2 + 0xe) = 0;
  *(undefined1 *)(param_2 + 0x10) = 0;
  return;
}



/* Entry: 107449fb0; end: 107449fdf;  */

void FUN_107449fb0(void)

{
  undefined1 in_CY;
  
  func_0x00010744c0d4();
  if ((bool)in_CY) {
    FUN_10744a00c();
  }
  else {
    func_0x00010744cb58();
  }
  func_0x00010744cba4();
  return;
}



/* Entry: 107449fe0; end: 10744a00b;  */

void FUN_107449fe0(undefined8 param_1,ulong param_2)

{
  if (0x38e38e38e38e38e < param_2) {
    func_0x000104bd35f4();
    func_0x00010744c010();
    func_0x00010744cd74();
    FUN_10744a06c();
    func_0x00010744c0bc();
    if (param_2 != 0) {
      FUN_10744a0c0();
    }
    func_0x00010744cd58();
    func_0x00010744c4f4();
    FUN_10744a094();
    func_0x00010744c6f4();
    FUN_10744a0f8();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(param_2 * 0x48);
  return;
}



/* Entry: 10744a00c; end: 10744a06b;  */

void FUN_10744a00c(undefined8 param_1,long param_2)

{
  func_0x00010744c010();
  func_0x00010744cd74();
  FUN_10744a06c();
  func_0x00010744c0bc();
  if (param_2 != 0) {
    FUN_10744a0c0();
  }
  func_0x00010744cd58();
  func_0x00010744c4f4();
  FUN_10744a094();
  func_0x00010744c6f4();
  FUN_10744a0f8();
  return;
}



/* Entry: 10744a06c; end: 10744a093;  */

undefined8 FUN_10744a06c(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined1 in_CY;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  
  if (param_2 >> 0x3d == 0) {
    func_0x00010744c4a0();
    uVar1 = extraout_x9;
    if ((bool)in_CY) {
      uVar1 = extraout_x8;
    }
    return uVar1;
  }
  FUN_10744a0b4();
  func_0x00010744bee4();
  func_0x00010744bea0();
  return param_1;
}



/* Entry: 10744a094; end: 10744a0b3;  */

void FUN_10744a094(void)

{
  func_0x00010744bee4();
  func_0x00010744bea0();
  return;
}



/* Entry: 10744a0b4; end: 10744a0bf;  */

void FUN_10744a0b4(void)

{
  func_0x00010744c184();
  FUN_10744a0e0();
  return;
}



/* Entry: 10744a0c0; end: 10744a0df;  */

void FUN_10744a0c0(void)

{
  FUN_10744a0e0();
  return;
}



/* Entry: 10744a0e0; end: 10744a0f7;  */

long * FUN_10744a0e0(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = (long *)(param_2 << 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_10744a124();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10744a0f8; end: 10744a123;  */

long * FUN_10744a0f8(long *param_1)

{
  FUN_10744a124();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10744a124; end: 10744a187;  */

void FUN_10744a124(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10744a188; end: 10744a1a3;  */

void FUN_10744a188(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_10744a334(param_1,param_2,&uStack_11);
  return;
}



/* Entry: 10744a1a4; end: 10744a2a3;  */

/* WARNING: Possible PIC construction at 0x00010744a1dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010744a1e0) */

long FUN_10744a1a4(long param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  
  func_0x00010744c4e8();
  FUN_10744aeb8();
  if (param_1 == 0) {
    return 0;
  }
  func_0x00010744c7d0();
  FUN_10744b088();
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010744c7d0();
  func_0x00010744d090();
  if (lVar3 != 0) {
    param_2 = lVar3;
  }
  do {
    while ((*(byte *)(param_1 + 0x40) & 1) != 0) {
LAB_10744a224:
      plVar1 = (long *)(param_1 + 0x20);
      param_1 = *plVar1;
      if (*plVar1 == param_2) {
        return param_2;
      }
    }
    if ((*(double *)(param_1 + 8) != *(double *)(*(long *)(param_1 + 0x20) + 8)) ||
       (*(double *)(param_1 + 0x10) != *(double *)(*(long *)(param_1 + 0x20) + 0x10))) {
      bVar2 = false;
      FUN_10744c73c();
      if (!bVar2) goto LAB_10744a224;
    }
    func_0x00010744c7d0();
    FUN_107449f28();
    param_2 = *(long *)(param_1 + 0x18);
    param_1 = param_2;
    if (param_2 == *(long *)(param_2 + 0x20)) {
      return param_2;
    }
  } while( true );
}



/* Entry: 10744a2a4; end: 10744a2d3;  */

void FUN_10744a2a4(void)

{
  undefined1 in_CY;
  
  func_0x00010744c0d4();
  if ((bool)in_CY) {
    FUN_10744a2d4();
  }
  else {
    func_0x00010744cb58();
  }
  func_0x00010744cba4();
  return;
}



/* Entry: 10744a2d4; end: 10744a333;  */

void FUN_10744a2d4(undefined8 param_1,long param_2)

{
  func_0x00010744c010();
  func_0x00010744cd74();
  FUN_10744a06c();
  func_0x00010744c0bc();
  if (param_2 != 0) {
    FUN_10744a0c0();
  }
  func_0x00010744cd58();
  func_0x00010744c4f4();
  FUN_10744a094();
  func_0x00010744c6f4();
  FUN_10744a0f8();
  return;
}



/* Entry: 10744a334; end: 10744a35b;  */

long * FUN_10744a334(long *param_1,long *param_2)

{
  long lVar1;
  undefined1 uVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  undefined8 extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  undefined8 extraout_x9_03;
  long extraout_x9_04;
  long extraout_x9_05;
  long extraout_x9_06;
  undefined8 extraout_x9_07;
  long extraout_x9_08;
  long lVar12;
  long lVar13;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long *unaff_x30;
  double dVar14;
  double dVar15;
  
  if (param_1 == param_2) {
    return param_1;
  }
  uVar9 = LZCOUNT((long)param_2 - (long)param_1 >> 3) << 1 ^ 0x7e;
  bVar3 = true;
  func_0x00010744c854();
  plVar7 = param_1;
LAB_10744a388:
  plVar8 = unaff_x20 + -1;
LAB_10744a39c:
  lVar10 = -uVar9;
  plVar4 = plVar7;
LAB_10744a3a4:
  plVar7 = plVar4;
  lVar10 = lVar10 + 1;
  uVar9 = (long)unaff_x20 - (long)plVar7 >> 3;
  uVar2 = (long)(uVar9 - 5) < 0;
  switch(uVar9) {
  case 2:
    func_0x00010744c2bc(unaff_x20[-1]);
    if ((bool)uVar2) {
      *plVar7 = extraout_x8;
      unaff_x20[-1] = extraout_x9;
    }
  case 0:
  case 1:
LAB_10744a4f8:
    func_0x00010744c888(unaff_x30);
    return unaff_x30;
  case 3:
    plVar4 = plVar7 + 1;
    func_0x00010744c888();
    lVar11 = *plVar4;
    lVar10 = *plVar7;
    dVar15 = *(double *)(lVar11 + 8);
    dVar14 = *(double *)(lVar10 + 8);
    lVar12 = *plVar8;
    if (dVar14 <= dVar15) {
      bVar3 = *(double *)(lVar12 + 8) < dVar15;
      if (!bVar3) {
        return (long *)0x0;
      }
      *plVar4 = lVar12;
      *plVar8 = lVar11;
      func_0x00010744c2bc(*plVar4);
      if (bVar3) {
        *plVar7 = extraout_x8_00;
        *plVar4 = extraout_x9_00;
      }
    }
    else {
      if (dVar15 <= *(double *)(lVar12 + 8)) {
        *plVar7 = lVar11;
        *plVar4 = lVar10;
        if (dVar14 <= *(double *)(*plVar8 + 8)) {
          return (long *)0x1;
        }
        *plVar4 = *plVar8;
      }
      else {
        *plVar7 = lVar12;
      }
      *plVar8 = lVar10;
    }
    return (long *)0x1;
  case 4:
    plVar4 = plVar7 + 2;
    func_0x00010744c888(plVar7,plVar7 + 1);
    func_0x00010744c454();
    FUN_10744a5f4();
    func_0x00010744c2bc(*plVar8);
    if ((bool)uVar2) {
      *plVar4 = extraout_x8_01;
      *plVar8 = extraout_x9_01;
      func_0x00010744c2bc(*plVar4);
      if ((bool)uVar2) {
        *unaff_x19 = extraout_x8_02;
        *plVar4 = extraout_x9_02;
        func_0x00010744c2bc(*unaff_x19);
        if ((bool)uVar2) {
          *unaff_x20 = extraout_x8_03;
          *unaff_x19 = extraout_x9_03;
        }
      }
    }
    return plVar7;
  case 5:
    plVar4 = plVar7 + 2;
    plVar5 = plVar7 + 3;
    func_0x00010744c888(plVar7,plVar7 + 1);
    func_0x00010744c454();
    FUN_10744a680();
    func_0x00010744c2bc(*plVar8);
    if ((bool)uVar2) {
      *plVar5 = extraout_x8_04;
      *plVar8 = extraout_x9_04;
      func_0x00010744c2bc(*plVar5);
      if ((bool)uVar2) {
        *plVar4 = extraout_x8_05;
        *plVar5 = extraout_x9_05;
        func_0x00010744c2bc(*plVar4);
        if ((bool)uVar2) {
          *unaff_x19 = extraout_x8_06;
          *plVar4 = extraout_x9_06;
          func_0x00010744c2bc(*unaff_x19);
          if ((bool)uVar2) {
            *unaff_x20 = extraout_x8_07;
            *unaff_x19 = extraout_x9_07;
          }
        }
      }
    }
    return plVar7;
  }
  if ((long)uVar9 < 0x18) {
    func_0x00010744ca18();
    if (!bVar3) {
      func_0x00010744c888();
      plVar7 = param_1;
      if (param_1 != param_2) {
        while( true ) {
          plVar7 = plVar7 + 1;
          plVar8 = param_1 + 1;
          if (plVar8 == param_2) break;
          lVar10 = *param_1;
          lVar11 = param_1[1];
          dVar14 = *(double *)(lVar11 + 8);
          param_1 = plVar8;
          plVar8 = plVar7;
          if (dVar14 < *(double *)(lVar10 + 8)) {
            do {
              *plVar8 = lVar10;
              lVar10 = plVar8[-2];
              plVar8 = plVar8 + -1;
            } while (dVar14 < *(double *)(lVar10 + 8));
            *plVar8 = lVar11;
          }
        }
      }
      return param_1;
    }
    func_0x00010744c888();
    if (param_1 == param_2) {
      return param_1;
    }
    lVar10 = 8;
    plVar7 = param_1;
    goto LAB_10744a798;
  }
  if (lVar10 == 1) {
    plVar8 = unaff_x20;
    func_0x00010744c888();
    if (plVar7 == unaff_x20) {
      return plVar8;
    }
    if (plVar7 != unaff_x20) {
      func_0x00010744abf8();
      lVar10 = (long)unaff_x20 - (long)plVar7;
      for (; bVar3 = (long)unaff_x20 - (long)plVar8 < 0, unaff_x20 != plVar8;
          unaff_x20 = unaff_x20 + 1) {
        func_0x00010744c2bc(*unaff_x20);
        if (bVar3) {
          *unaff_x20 = extraout_x9_08;
          *plVar7 = extraout_x8_08;
          FUN_10744ac58(plVar7,unaff_x19,lVar10 >> 3,plVar7);
        }
      }
      func_0x00010744ca18();
      FUN_10744ad34();
      plVar8 = unaff_x20;
    }
    return plVar8;
  }
  plVar4 = plVar7 + (uVar9 >> 1);
  uVar2 = (long)(uVar9 - 0x81) < 0;
  if (uVar9 < 0x81) {
    param_2 = plVar7;
    func_0x00010744ca98(plVar4,plVar7,plVar8);
    param_1 = plVar4;
  }
  else {
    func_0x00010744ca98(plVar7,plVar4,plVar8);
    param_1 = plVar4 + -1;
    func_0x00010744ca98(plVar7 + 1,param_1,unaff_x20 + -2);
    func_0x00010744ca98(plVar7 + 2,plVar4 + 1,unaff_x20 + -3);
    param_2 = plVar4;
    func_0x00010744ca98(param_1,plVar4,plVar4 + 1);
    lVar11 = *plVar7;
    *plVar7 = *plVar4;
    *plVar4 = lVar11;
  }
  plVar5 = param_1;
  if ((!bVar3) && (func_0x00010744c2bc(plVar7[-1]), plVar5 = param_1, !(bool)uVar2)) {
    func_0x00010744ca18();
    func_0x00010744a870();
    plVar7 = param_1;
    goto LAB_10744a4c4;
  }
  func_0x00010744ca18();
  func_0x00010744a938();
  if (((ulong)param_2 & 1) != 0) {
    plVar6 = plVar7;
    param_2 = plVar5;
    FUN_10744a9fc();
    param_1 = plVar5 + 1;
    func_0x00010744ca34();
    FUN_10744a9fc();
    if ((int)param_1 == 0) goto code_r0x00010744a490;
    uVar9 = -lVar10;
    unaff_x20 = plVar5;
    if (((ulong)plVar6 & 1) != 0) goto LAB_10744a4f8;
    goto LAB_10744a388;
  }
  goto LAB_10744a498;
LAB_10744a798:
  if (plVar7 + 1 == param_2) {
    return param_1;
  }
  lVar11 = *plVar7;
  lVar12 = plVar7[1];
  dVar14 = *(double *)(lVar12 + 8);
  lVar13 = lVar10;
  if (dVar14 < *(double *)(lVar11 + 8)) {
    do {
      *(long *)((long)param_1 + lVar13) = lVar11;
      lVar1 = lVar13 + -8;
      plVar8 = param_1;
      if (lVar1 == 0) goto LAB_10744a7ec;
      lVar11 = *(long *)((long)param_1 + lVar13 + -0x10);
      lVar13 = lVar1;
    } while (dVar14 < *(double *)(lVar11 + 8));
    plVar8 = (long *)((long)param_1 + lVar1);
LAB_10744a7ec:
    *plVar8 = lVar12;
  }
  lVar10 = lVar10 + 8;
  plVar7 = plVar7 + 1;
  goto LAB_10744a798;
code_r0x00010744a490:
  plVar4 = plVar5 + 1;
  if (((ulong)plVar6 & 1) == 0) goto LAB_10744a498;
  goto LAB_10744a3a4;
LAB_10744a498:
  param_2 = plVar5;
  FUN_10744a35c();
  param_1 = plVar7;
  plVar7 = plVar5 + 1;
LAB_10744a4c4:
  bVar3 = false;
  uVar9 = -lVar10;
  goto LAB_10744a39c;
}



/* Entry: 10744a35c; end: 10744a5f3;  */

long * FUN_10744a35c(long *param_1,long *param_2,undefined8 param_3,long param_4,ulong param_5)

{
  long lVar1;
  undefined1 uVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  undefined8 extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  undefined8 extraout_x9_03;
  long extraout_x9_04;
  long extraout_x9_05;
  long extraout_x9_06;
  undefined8 extraout_x9_07;
  long extraout_x9_08;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long *unaff_x30;
  double dVar14;
  double dVar15;
  
  func_0x00010744c854();
  plVar7 = param_1;
LAB_10744a388:
  plVar8 = unaff_x20 + -1;
LAB_10744a39c:
  param_4 = -param_4;
  plVar4 = plVar7;
LAB_10744a3a4:
  plVar7 = plVar4;
  param_4 = param_4 + 1;
  uVar9 = (long)unaff_x20 - (long)plVar7 >> 3;
  uVar2 = (long)(uVar9 - 5) < 0;
  switch(uVar9) {
  case 2:
    func_0x00010744c2bc(unaff_x20[-1]);
    if ((bool)uVar2) {
      *plVar7 = extraout_x8;
      unaff_x20[-1] = extraout_x9;
    }
  case 0:
  case 1:
LAB_10744a4f8:
    func_0x00010744c888(unaff_x30);
    return unaff_x30;
  case 3:
    plVar4 = plVar7 + 1;
    func_0x00010744c888();
    lVar12 = *plVar4;
    lVar10 = *plVar7;
    dVar15 = *(double *)(lVar12 + 8);
    dVar14 = *(double *)(lVar10 + 8);
    lVar11 = *plVar8;
    if (dVar14 <= dVar15) {
      bVar3 = *(double *)(lVar11 + 8) < dVar15;
      if (!bVar3) {
        return (long *)0x0;
      }
      *plVar4 = lVar11;
      *plVar8 = lVar12;
      func_0x00010744c2bc(*plVar4);
      if (bVar3) {
        *plVar7 = extraout_x8_00;
        *plVar4 = extraout_x9_00;
      }
    }
    else {
      if (dVar15 <= *(double *)(lVar11 + 8)) {
        *plVar7 = lVar12;
        *plVar4 = lVar10;
        if (dVar14 <= *(double *)(*plVar8 + 8)) {
          return (long *)0x1;
        }
        *plVar4 = *plVar8;
      }
      else {
        *plVar7 = lVar11;
      }
      *plVar8 = lVar10;
    }
    return (long *)0x1;
  case 4:
    plVar4 = plVar7 + 2;
    func_0x00010744c888(plVar7,plVar7 + 1);
    func_0x00010744c454();
    FUN_10744a5f4();
    func_0x00010744c2bc(*plVar8);
    if ((bool)uVar2) {
      *plVar4 = extraout_x8_01;
      *plVar8 = extraout_x9_01;
      func_0x00010744c2bc(*plVar4);
      if ((bool)uVar2) {
        *unaff_x19 = extraout_x8_02;
        *plVar4 = extraout_x9_02;
        func_0x00010744c2bc(*unaff_x19);
        if ((bool)uVar2) {
          *unaff_x20 = extraout_x8_03;
          *unaff_x19 = extraout_x9_03;
        }
      }
    }
    return plVar7;
  case 5:
    plVar4 = plVar7 + 2;
    plVar5 = plVar7 + 3;
    func_0x00010744c888(plVar7,plVar7 + 1);
    func_0x00010744c454();
    FUN_10744a680();
    func_0x00010744c2bc(*plVar8);
    if ((bool)uVar2) {
      *plVar5 = extraout_x8_04;
      *plVar8 = extraout_x9_04;
      func_0x00010744c2bc(*plVar5);
      if ((bool)uVar2) {
        *plVar4 = extraout_x8_05;
        *plVar5 = extraout_x9_05;
        func_0x00010744c2bc(*plVar4);
        if ((bool)uVar2) {
          *unaff_x19 = extraout_x8_06;
          *plVar4 = extraout_x9_06;
          func_0x00010744c2bc(*unaff_x19);
          if ((bool)uVar2) {
            *unaff_x20 = extraout_x8_07;
            *unaff_x19 = extraout_x9_07;
          }
        }
      }
    }
    return plVar7;
  }
  if ((long)uVar9 < 0x18) {
    func_0x00010744ca18();
    if ((param_5 & 1) == 0) {
      func_0x00010744c888();
      plVar7 = param_1;
      if (param_1 != param_2) {
        while( true ) {
          plVar7 = plVar7 + 1;
          plVar8 = param_1 + 1;
          if (plVar8 == param_2) break;
          lVar10 = *param_1;
          lVar12 = param_1[1];
          dVar14 = *(double *)(lVar12 + 8);
          param_1 = plVar8;
          plVar8 = plVar7;
          if (dVar14 < *(double *)(lVar10 + 8)) {
            do {
              *plVar8 = lVar10;
              lVar10 = plVar8[-2];
              plVar8 = plVar8 + -1;
            } while (dVar14 < *(double *)(lVar10 + 8));
            *plVar8 = lVar12;
          }
        }
      }
      return param_1;
    }
    func_0x00010744c888();
    if (param_1 == param_2) {
      return param_1;
    }
    lVar10 = 8;
    plVar7 = param_1;
    goto LAB_10744a798;
  }
  if (param_4 == 1) {
    plVar8 = unaff_x20;
    func_0x00010744c888();
    if (plVar7 == unaff_x20) {
      return plVar8;
    }
    if (plVar7 != unaff_x20) {
      func_0x00010744abf8();
      lVar10 = (long)unaff_x20 - (long)plVar7;
      for (; bVar3 = (long)unaff_x20 - (long)plVar8 < 0, unaff_x20 != plVar8;
          unaff_x20 = unaff_x20 + 1) {
        func_0x00010744c2bc(*unaff_x20);
        if (bVar3) {
          *unaff_x20 = extraout_x9_08;
          *plVar7 = extraout_x8_08;
          FUN_10744ac58(plVar7,unaff_x19,lVar10 >> 3,plVar7);
        }
      }
      func_0x00010744ca18();
      FUN_10744ad34();
      plVar8 = unaff_x20;
    }
    return plVar8;
  }
  plVar4 = plVar7 + (uVar9 >> 1);
  uVar2 = (long)(uVar9 - 0x81) < 0;
  if (uVar9 < 0x81) {
    param_2 = plVar7;
    func_0x00010744ca98(plVar4,plVar7,plVar8);
    param_1 = plVar4;
  }
  else {
    func_0x00010744ca98(plVar7,plVar4,plVar8);
    param_1 = plVar4 + -1;
    func_0x00010744ca98(plVar7 + 1,param_1,unaff_x20 + -2);
    func_0x00010744ca98(plVar7 + 2,plVar4 + 1,unaff_x20 + -3);
    param_2 = plVar4;
    func_0x00010744ca98(param_1,plVar4,plVar4 + 1);
    lVar10 = *plVar7;
    *plVar7 = *plVar4;
    *plVar4 = lVar10;
  }
  plVar5 = param_1;
  if (((param_5 & 1) == 0) && (func_0x00010744c2bc(plVar7[-1]), plVar5 = param_1, !(bool)uVar2)) {
    func_0x00010744ca18();
    func_0x00010744a870();
    plVar7 = param_1;
    goto LAB_10744a4c4;
  }
  func_0x00010744ca18();
  func_0x00010744a938();
  if (((ulong)param_2 & 1) != 0) {
    plVar6 = plVar7;
    param_2 = plVar5;
    FUN_10744a9fc();
    param_1 = plVar5 + 1;
    func_0x00010744ca34();
    FUN_10744a9fc();
    if ((int)param_1 == 0) goto code_r0x00010744a490;
    param_4 = -param_4;
    unaff_x20 = plVar5;
    if (((ulong)plVar6 & 1) != 0) goto LAB_10744a4f8;
    goto LAB_10744a388;
  }
  goto LAB_10744a498;
LAB_10744a798:
  if (plVar7 + 1 == param_2) {
    return param_1;
  }
  lVar12 = *plVar7;
  lVar11 = plVar7[1];
  dVar14 = *(double *)(lVar11 + 8);
  lVar13 = lVar10;
  if (dVar14 < *(double *)(lVar12 + 8)) {
    do {
      *(long *)((long)param_1 + lVar13) = lVar12;
      lVar1 = lVar13 + -8;
      plVar8 = param_1;
      if (lVar1 == 0) goto LAB_10744a7ec;
      lVar12 = *(long *)((long)param_1 + lVar13 + -0x10);
      lVar13 = lVar1;
    } while (dVar14 < *(double *)(lVar12 + 8));
    plVar8 = (long *)((long)param_1 + lVar1);
LAB_10744a7ec:
    *plVar8 = lVar11;
  }
  lVar10 = lVar10 + 8;
  plVar7 = plVar7 + 1;
  goto LAB_10744a798;
code_r0x00010744a490:
  plVar4 = plVar5 + 1;
  if (((ulong)plVar6 & 1) == 0) goto LAB_10744a498;
  goto LAB_10744a3a4;
LAB_10744a498:
  param_2 = plVar5;
  FUN_10744a35c();
  param_1 = plVar7;
  plVar7 = plVar5 + 1;
LAB_10744a4c4:
  param_5 = 0;
  param_4 = -param_4;
  goto LAB_10744a39c;
}



/* Entry: 10744a5f4; end: 10744a67f;  */

undefined8 FUN_10744a5f4(long *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x9;
  long lVar4;
  double dVar5;
  double dVar6;
  
  lVar3 = *param_2;
  lVar2 = *param_1;
  dVar6 = *(double *)(lVar3 + 8);
  dVar5 = *(double *)(lVar2 + 8);
  lVar4 = *param_3;
  if (dVar5 <= dVar6) {
    bVar1 = *(double *)(lVar4 + 8) < dVar6;
    if (!bVar1) {
      return 0;
    }
    *param_2 = lVar4;
    *param_3 = lVar3;
    func_0x00010744c2bc(*param_2);
    if (bVar1) {
      *param_1 = extraout_x8;
      *param_2 = extraout_x9;
    }
  }
  else {
    if (dVar6 <= *(double *)(lVar4 + 8)) {
      *param_1 = lVar3;
      *param_2 = lVar2;
      if (dVar5 <= *(double *)(*param_3 + 8)) {
        return 1;
      }
      *param_2 = *param_3;
    }
    else {
      *param_1 = lVar4;
    }
    *param_3 = lVar2;
  }
  return 1;
}



/* Entry: 10744a680; end: 10744a6f3;  */

void FUN_10744a680(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 in_NG;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 extraout_x9_01;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010744c454();
  FUN_10744a5f4();
  func_0x00010744c2bc(*param_4);
  if ((bool)in_NG) {
    *param_3 = extraout_x8;
    *param_4 = extraout_x9;
    func_0x00010744c2bc(*param_3);
    if ((bool)in_NG) {
      *unaff_x19 = extraout_x8_00;
      *param_3 = extraout_x9_00;
      func_0x00010744c2bc(*unaff_x19);
      if ((bool)in_NG) {
        *unaff_x20 = extraout_x8_01;
        *unaff_x19 = extraout_x9_01;
      }
    }
  }
  return;
}



/* Entry: 10744a6f4; end: 10744a787;  */

void FUN_10744a6f4(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined1 in_NG;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 extraout_x9_01;
  undefined8 extraout_x9_02;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010744c454();
  FUN_10744a680();
  func_0x00010744c2bc(*param_5);
  if ((bool)in_NG) {
    *param_4 = extraout_x8;
    *param_5 = extraout_x9;
    func_0x00010744c2bc(*param_4);
    if ((bool)in_NG) {
      *param_3 = extraout_x8_00;
      *param_4 = extraout_x9_00;
      func_0x00010744c2bc(*param_3);
      if ((bool)in_NG) {
        *unaff_x19 = extraout_x8_01;
        *param_3 = extraout_x9_01;
        func_0x00010744c2bc(*unaff_x19);
        if ((bool)in_NG) {
          *unaff_x20 = extraout_x8_02;
          *unaff_x19 = extraout_x9_02;
        }
      }
    }
  }
  return;
}



/* Entry: 10744a788; end: 10744a9fb;  */

void FUN_10744a788(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  double dVar8;
  
  if (param_1 != param_2) {
    lVar3 = 8;
    plVar4 = param_1;
    while (plVar4 + 1 != param_2) {
      lVar5 = *plVar4;
      lVar1 = plVar4[1];
      dVar8 = *(double *)(lVar1 + 8);
      lVar7 = lVar3;
      if (dVar8 < *(double *)(lVar5 + 8)) {
        do {
          *(long *)((long)param_1 + lVar7) = lVar5;
          lVar2 = lVar7 + -8;
          plVar6 = param_1;
          if (lVar2 == 0) goto LAB_10744a7ec;
          lVar5 = *(long *)((long)param_1 + lVar7 + -0x10);
          lVar7 = lVar2;
        } while (dVar8 < *(double *)(lVar5 + 8));
        plVar6 = (long *)((long)param_1 + lVar2);
LAB_10744a7ec:
        *plVar6 = lVar1;
      }
      lVar3 = lVar3 + 8;
      plVar4 = plVar4 + 1;
    }
  }
  return;
}



/* Entry: 10744a9fc; end: 10744ab5f;  */

void FUN_10744a9fc(long param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x9;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *unaff_x19;
  long *unaff_x20;
  long *plVar10;
  double dVar11;
  
  func_0x00010744c4e8();
  lVar4 = param_2 - param_1 >> 3;
  bVar2 = lVar4 + -5 < 0;
  switch(lVar4) {
  case 0:
  case 1:
    break;
  case 2:
    func_0x00010744c2bc(unaff_x20[-1],1);
    if (bVar2) {
      *unaff_x19 = extraout_x8;
      unaff_x20[-1] = extraout_x9;
    }
    break;
  case 3:
    FUN_10744a5f4();
    break;
  case 4:
    FUN_10744a680();
    break;
  case 5:
    FUN_10744a6f4();
    break;
  default:
    FUN_10744a5f4();
    iVar3 = 0;
    lVar4 = 0x18;
    plVar8 = unaff_x19 + 3;
    plVar10 = unaff_x19 + 2;
    while (plVar5 = plVar8, plVar5 != unaff_x20) {
      lVar6 = *plVar5;
      lVar7 = *plVar10;
      dVar11 = *(double *)(lVar6 + 8);
      lVar9 = lVar4;
      if (dVar11 < *(double *)(lVar7 + 8)) {
        do {
          *(long *)((long)unaff_x19 + lVar9) = lVar7;
          lVar1 = lVar9 + -8;
          plVar8 = unaff_x19;
          if (lVar1 == 0) goto LAB_10744ab0c;
          lVar7 = *(long *)((long)unaff_x19 + lVar9 + -0x10);
          lVar9 = lVar1;
        } while (dVar11 < *(double *)(lVar7 + 8));
        plVar8 = (long *)((long)unaff_x19 + lVar1);
LAB_10744ab0c:
        *plVar8 = lVar6;
        iVar3 = iVar3 + 1;
        if (iVar3 == 8) {
          return;
        }
      }
      lVar4 = lVar4 + 8;
      plVar10 = plVar5;
      plVar8 = plVar5 + 1;
    }
  }
  return;
}



/* Entry: 10744ab60; end: 10744ac57;  */

undefined8 *
FUN_10744ab60(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  bool bVar1;
  long lVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  
  if (param_1 != param_2) {
    func_0x00010744abf8(param_1,param_2,param_4);
    lVar2 = (long)param_2 - (long)param_1;
    for (; bVar1 = (long)param_2 - (long)param_3 < 0, param_2 != param_3; param_2 = param_2 + 1) {
      func_0x00010744c2bc(*param_2);
      if (bVar1) {
        *param_2 = extraout_x9;
        *param_1 = extraout_x8;
        FUN_10744ac58(param_1,param_4,lVar2 >> 3,param_1);
      }
    }
    func_0x00010744ca18();
    FUN_10744ad34();
    param_3 = param_2;
  }
  return param_3;
}



/* Entry: 10744ac58; end: 10744ad33;  */

void FUN_10744ac58(long param_1,undefined8 param_2,long param_3,long *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  
  if (1 < param_3) {
    uVar3 = param_3 - 2U >> 1;
    if ((long)param_4 - param_1 >> 3 <= (long)uVar3) {
      lVar7 = (long)param_4 - param_1 >> 2;
      uVar4 = lVar7 + 1;
      plVar6 = (long *)(param_1 + uVar4 * 8);
      uVar1 = lVar7 + 2;
      if (((long)uVar1 < param_3) && (*(double *)(*plVar6 + 8) < *(double *)(plVar6[1] + 8))) {
        uVar4 = uVar1;
        plVar6 = plVar6 + 1;
      }
      lVar8 = *plVar6;
      lVar7 = *param_4;
      dVar9 = *(double *)(lVar7 + 8);
      if (dVar9 <= *(double *)(lVar8 + 8)) {
        do {
          plVar5 = plVar6;
          *param_4 = lVar8;
          if ((long)uVar3 < (long)uVar4) break;
          uVar2 = uVar4 << 1 | 1;
          plVar6 = (long *)(param_1 + uVar2 * 8);
          uVar1 = uVar4 * 2 + 2;
          uVar4 = uVar2;
          if (((long)uVar1 < param_3) && (*(double *)(*plVar6 + 8) < *(double *)(plVar6[1] + 8))) {
            uVar4 = uVar1;
            plVar6 = plVar6 + 1;
          }
          lVar8 = *plVar6;
          param_4 = plVar5;
        } while (dVar9 <= *(double *)(lVar8 + 8));
        *plVar5 = lVar7;
      }
    }
  }
  return;
}



/* Entry: 10744ad34; end: 10744adef;  */

void FUN_10744ad34(long param_1,long param_2)

{
  long lVar1;
  
  func_0x00010744c854();
  lVar1 = param_2 - param_1 >> 3;
  while (lVar1 + -1 != 0 && 0 < lVar1) {
    func_0x00010744ca34(param_1);
    func_0x00010744ad7c();
    lVar1 = lVar1 + -1;
  }
  return;
}



/* Entry: 10744adf0; end: 10744aeb7;  */

void FUN_10744adf0(long *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = 0;
  do {
    uVar4 = uVar3 << 1 | 1;
    uVar1 = uVar3 * 2 + 2;
    plVar2 = param_1 + uVar3 + 1;
    if (((long)uVar1 < param_3) &&
       (*(double *)(param_1[uVar3 + 1] + 8) < *(double *)(param_1[uVar3 + 2] + 8))) {
      plVar2 = param_1 + uVar3 + 2;
      uVar4 = uVar1;
    }
    *param_1 = *plVar2;
    param_1 = plVar2;
    uVar3 = uVar4;
  } while ((long)uVar4 <= (param_3 + -2) / 2);
  return;
}



/* Entry: 10744aeb8; end: 10744b087;  */

long FUN_10744aeb8(undefined8 param_1,long param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int unaff_w20;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dStack_88;
  
  func_0x00010744c454();
  lVar7 = 0;
  dVar14 = *(double *)(param_2 + 8);
  dVar13 = *(double *)(param_2 + 0x10);
  dVar8 = -INFINITY;
  lVar5 = param_3;
  do {
    dVar9 = *(double *)(lVar5 + 0x10);
    lVar6 = *(long *)(lVar5 + 0x20);
    if (dVar13 <= dVar9) {
      dVar10 = *(double *)(lVar6 + 0x10);
      bVar1 = true;
      if ((dVar10 <= dVar13) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 == dVar9;
      }
      if (!bVar1) {
        dVar11 = *(double *)(lVar5 + 8);
        dVar12 = dVar11 + ((dVar13 - dVar9) * (*(double *)(lVar6 + 8) - dVar11)) / (dVar10 - dVar9);
        bVar1 = false;
        bVar2 = true;
        bVar3 = false;
        if (dVar12 <= dVar14) {
          bVar1 = false;
          bVar2 = false;
          bVar3 = true;
          if (!NAN(dVar12) && !NAN(dVar8)) {
            bVar1 = dVar12 < dVar8;
            bVar2 = dVar12 == dVar8;
            bVar3 = false;
          }
        }
        if (!bVar2 && bVar1 == bVar3) {
          if (dVar12 == dVar14) {
            if (dVar13 == dVar9) {
              return lVar5;
            }
            if (dVar13 == dVar10) {
              return lVar6;
            }
          }
          lVar7 = lVar5;
          dVar8 = dVar12;
          if (*(double *)(lVar6 + 8) <= dVar11) {
            lVar7 = lVar6;
          }
        }
      }
    }
    lVar5 = lVar6;
    if (lVar6 == param_3) {
      if (lVar7 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = lVar7;
        if (dVar14 != dVar8) {
          dVar11 = *(double *)(lVar7 + 8);
          dVar12 = *(double *)(lVar7 + 0x10);
          dVar10 = dVar8;
          dVar9 = dVar14;
          if (dVar12 <= dVar13) {
            dVar10 = dVar14;
            dVar9 = dVar8;
          }
          dStack_88 = INFINITY;
          lVar6 = lVar7;
          do {
            dVar8 = *(double *)(lVar6 + 8);
            bVar1 = true;
            bVar2 = false;
            if (dVar8 < dVar14) {
              bVar1 = false;
              bVar2 = true;
              if (!NAN(dVar8) && !NAN(dVar11)) {
                bVar1 = dVar8 < dVar11;
                bVar2 = false;
              }
            }
            if ((bVar1 == bVar2) &&
               (iVar4 = unaff_w20,
               FUN_10744b0f4(dVar9,dVar13,dVar11,dVar12,dVar10,dVar13,dVar8,
                             *(undefined8 *)(lVar6 + 0x10)), iVar4 != 0)) {
              dVar8 = *(double *)(lVar6 + 8);
              dVar15 = *(double *)(lVar6 + 0x10);
              iVar4 = unaff_w20;
              FUN_10744b144();
              if (iVar4 != 0) {
                dVar8 = ABS(dVar13 - dVar15) / (dVar14 - dVar8);
                if ((dVar8 < dStack_88) ||
                   ((dVar8 == dStack_88 &&
                    ((*(double *)(lVar5 + 8) < *(double *)(lVar6 + 8) ||
                     (iVar4 = unaff_w20, func_0x00010744b1e4(), iVar4 != 0)))))) {
                  lVar5 = lVar6;
                  dStack_88 = dVar8;
                }
              }
            }
            lVar6 = *(long *)(lVar6 + 0x20);
          } while (lVar6 != lVar7);
        }
      }
      return lVar5;
    }
  } while( true );
}



/* Entry: 10744b088; end: 10744b0f3;  */

void FUN_10744b088(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010744c854();
  lVar1 = param_1 + 0x50;
  FUN_10744b25c();
  param_1 = param_1 + 0x50;
  FUN_10744b25c();
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x19 + 0x18);
  *(long *)(unaff_x20 + 0x20) = unaff_x19;
  *(long *)(unaff_x19 + 0x18) = unaff_x20;
  *(long *)(lVar2 + 0x18) = lVar1;
  *(long *)(lVar1 + 0x18) = param_1;
  *(long *)(lVar1 + 0x20) = lVar2;
  *(long *)(param_1 + 0x20) = lVar1;
  *(long *)(lVar3 + 0x20) = param_1;
  *(long *)(param_1 + 0x18) = lVar3;
  return;
}



/* Entry: 10744b0f4; end: 10744b143;  */

bool FUN_10744b0f4(double param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6,double param_7,double param_8)

{
  if (0.0 <= -((param_6 - param_8) * (param_1 - param_7)) +
             (param_2 - param_8) * (param_5 - param_7)) {
    if (0.0 <= -((param_2 - param_8) * (param_3 - param_7)) +
               (param_4 - param_8) * (param_1 - param_7)) {
      return 0.0 <= -((param_4 - param_8) * (param_5 - param_7)) +
                    (param_6 - param_8) * (param_3 - param_7);
    }
  }
  return false;
}



/* Entry: 10744b144; end: 10744b233;  */

char FUN_10744b144(undefined8 param_1)

{
  char in_NG;
  char in_OV;
  
  func_0x00010744c854();
  FUN_10744c73c();
  if ((bool)in_NG) {
    func_0x00010744ca34(param_1);
    FUN_10744c73c();
    if (in_NG == in_OV) {
      FUN_10744c73c(param_1);
      in_NG = in_NG == in_OV;
    }
    else {
      in_NG = 0;
    }
  }
  else {
    func_0x00010744ca34(param_1);
    FUN_10744c73c();
    if ((bool)in_NG) {
      in_NG = 1;
    }
    else {
      FUN_10744c73c(param_1);
    }
  }
  return in_NG;
}



/* Entry: 10744b234; end: 10744b25b;  */

double FUN_10744b234(undefined8 param_1,long param_2,long param_3,long param_4)

{
  return -((*(double *)(param_4 + 0x10) - *(double *)(param_3 + 0x10)) *
          (*(double *)(param_3 + 8) - *(double *)(param_2 + 8))) +
         (*(double *)(param_4 + 8) - *(double *)(param_3 + 8)) *
         (*(double *)(param_3 + 0x10) - *(double *)(param_2 + 0x10));
}



/* Entry: 10744b25c; end: 10744b2b7;  */

void FUN_10744b25c(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined4 extraout_w8;
  ulong uVar1;
  long unaff_x22;
  undefined8 uVar2;
  
  func_0x00010744c19c();
  uVar1 = *(ulong *)(param_2 + 2);
  if (*(ulong *)(param_2 + 4) <= uVar1) {
    param_2 = (undefined4 *)(unaff_x22 + 0x30);
    FUN_107449fe0();
    func_0x00010744ca4c();
    uVar1 = 0;
  }
  func_0x00010744caa0(uVar1);
  uVar2 = *param_5;
  *param_2 = extraout_w8;
  *(undefined8 *)(param_2 + 2) = param_1;
  *(undefined8 *)(param_2 + 4) = uVar2;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  param_2[10] = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_2 + 0xe) = 0;
  *(undefined1 *)(param_2 + 0x10) = 0;
  return;
}



/* Entry: 10744b2b8; end: 10744b2db;  */

void FUN_10744b2b8(void)

{
  func_0x00010744c220();
  FUN_10744b2dc();
  return;
}


