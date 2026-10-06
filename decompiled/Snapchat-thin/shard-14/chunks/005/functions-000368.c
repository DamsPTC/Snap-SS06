/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b4a8a30; end: 10b4a8e7b;  */

undefined8 * FUN_10b4a8a30(undefined8 param_1,long param_2,long param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 auStack_d0 [17];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = auStack_d0;
  FUN_10b4a77f0();
  if (*(char *)(param_3 + 0x28) == '\x01') {
    bVar1 = *(long *)(param_3 + 0x18) == 0;
    if ((*(byte *)(param_2 + 0x90) & 1) == 0) goto LAB_10b4a8ae4;
    if (*(long *)(param_3 + 0x18) == 0) goto LAB_10b4a8ab8;
    func_0x00010b4a9180();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4a8abc;
    }
    if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4a8b08;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4a8b40:
    if ((*(byte *)(param_2 + 0x78) & 1) == 0) goto LAB_10b4a8b98;
    if (bVar1) {
      bVar1 = true;
LAB_10b4a8b78:
      *(byte *)(param_2 + 0x80) = *(byte *)(param_2 + 0x80) | 0x20;
      func_0x00010b4a922c();
      uVar4 = *puVar2;
      puVar2 = auStack_d0;
      func_0x00010b4a79c0(puVar2,4,uVar4);
      goto LAB_10b4a8b98;
    }
LAB_10b4a8b64:
    func_0x00010b4a9180();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4a8b78;
    }
    if ((*(byte *)(param_2 + 0x48) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4a8bbc;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4a8bf4:
    if ((*(byte *)(param_2 + 0x68) & 1) == 0) goto LAB_10b4a8c4c;
    if (bVar1) {
      bVar1 = true;
LAB_10b4a8c2c:
      *(byte *)(param_2 + 0x80) = *(byte *)(param_2 + 0x80) | 8;
      func_0x00010b4a922c();
      uVar4 = *puVar2;
      puVar2 = auStack_d0;
      func_0x00010b4a79c0(puVar2,6,uVar4);
      goto LAB_10b4a8c4c;
    }
LAB_10b4a8c18:
    func_0x00010b4a9180();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4a8c2c;
    }
    if ((*(byte *)(param_2 + 0x58) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4a8c70;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4a8ca4:
    if ((*(byte *)(param_2 + 0xa0) & 1) == 0) goto LAB_10b4a8cfc;
    if (bVar1) {
      bVar1 = true;
LAB_10b4a8cdc:
      *(byte *)(param_2 + 0x80) = *(byte *)(param_2 + 0x80) | 2;
      func_0x00010b4a922c();
      uVar4 = *puVar2;
      puVar2 = auStack_d0;
      func_0x00010b4a79c0(puVar2,8,uVar4);
      goto LAB_10b4a8cfc;
    }
LAB_10b4a8cc8:
    func_0x00010b4a9180();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4a8cdc;
    }
    if ((*(byte *)(param_2 + 0xa9) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4a8d20;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4a8d58:
    if ((*(byte *)(param_2 + 0xab) & 1) == 0) goto LAB_10b4a8d9c;
    if (!bVar1) goto LAB_10b4a8d68;
  }
  else {
    if ((*(byte *)(param_2 + 0x90) & 1) == 0) {
      bVar1 = true;
    }
    else {
LAB_10b4a8ab8:
      bVar1 = true;
LAB_10b4a8abc:
      *(byte *)(param_2 + 0x80) = *(byte *)(param_2 + 0x80) | 0x80;
      func_0x00010b4a922c();
      uVar4 = *puVar2;
      puVar2 = auStack_d0;
      func_0x00010b4a79c0(puVar2,2,uVar4);
    }
LAB_10b4a8ae4:
    if ((*(byte *)(param_2 + 0x28) & 1) == 0) goto LAB_10b4a8b40;
    if (bVar1) {
      bVar1 = true;
LAB_10b4a8b1c:
      lVar3 = param_2 + 0x10;
      *(byte *)(param_2 + 0x80) = *(byte *)(param_2 + 0x80) | 0x40;
      func_0x00010549026c(lVar3);
      puVar2 = auStack_d0;
      func_0x00010b4a7a18(puVar2,3,lVar3);
      goto LAB_10b4a8b40;
    }
LAB_10b4a8b08:
    func_0x00010b4a9180();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4a8b1c;
    }
    if ((*(byte *)(param_2 + 0x78) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4a8b64;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4a8b98:
    if ((*(byte *)(param_2 + 0x48) & 1) == 0) goto LAB_10b4a8bf4;
    if (bVar1) {
      bVar1 = true;
LAB_10b4a8bd0:
      lVar3 = param_2 + 0x30;
      *(byte *)(param_2 + 0x80) = *(byte *)(param_2 + 0x80) | 0x10;
      func_0x00010549026c(lVar3);
      puVar2 = auStack_d0;
      func_0x00010b4a7a18(puVar2,5,lVar3);
      goto LAB_10b4a8bf4;
    }
LAB_10b4a8bbc:
    func_0x00010b4a9180();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4a8bd0;
    }
    if ((*(byte *)(param_2 + 0x68) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4a8c18;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4a8c4c:
    if ((*(byte *)(param_2 + 0x58) & 1) == 0) goto LAB_10b4a8ca4;
    if (bVar1) {
      bVar1 = true;
LAB_10b4a8c84:
      *(byte *)(param_2 + 0x80) = *(byte *)(param_2 + 0x80) | 4;
      func_0x00010b4a922c();
      uVar4 = *puVar2;
      puVar2 = auStack_d0;
      func_0x00010b4a79c0(puVar2,7,uVar4);
      goto LAB_10b4a8ca4;
    }
LAB_10b4a8c70:
    func_0x00010b4a9180();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4a8c84;
    }
    if ((*(byte *)(param_2 + 0xa0) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4a8cc8;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4a8cfc:
    if ((*(byte *)(param_2 + 0xa9) & 1) == 0) goto LAB_10b4a8d58;
    if (bVar1) {
      bVar1 = true;
LAB_10b4a8d34:
      puVar5 = (undefined1 *)(param_2 + 0xa8);
      *(byte *)(param_2 + 0x80) = *(byte *)(param_2 + 0x80) | 1;
      func_0x000107c29334();
      puVar2 = auStack_d0;
      func_0x00010b4a790c(puVar2,9,*puVar5);
      goto LAB_10b4a8d58;
    }
LAB_10b4a8d20:
    func_0x00010b4a9180();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4a8d34;
    }
    if ((*(byte *)(param_2 + 0xab) & 1) == 0) goto LAB_10b4a8d9c;
    puVar2 = (undefined8 *)0x0;
LAB_10b4a8d68:
    func_0x00010b4a9180();
    if (puVar2 == (undefined8 *)0x0) goto LAB_10b4a8d9c;
  }
  puVar5 = (undefined1 *)(param_2 + 0xaa);
  *(byte *)(param_2 + 0x81) = *(byte *)(param_2 + 0x81) | 0x80;
  func_0x000107c29334();
  func_0x00010b4a790c(auStack_d0,10,*puVar5);
LAB_10b4a8d9c:
  FUN_10b4a7ad8(auStack_d0,1,param_2 + 0x80,2);
  FUN_10b4a7854(param_1,auStack_d0);
  puVar2 = auStack_d0;
  FUN_10b4a8238();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar2 = auStack_d0;
    FUN_10b4a8238();
    func_0x00010b4a9214();
    *puVar2 = &PTR____cxa_pure_virtual_110cc65b0;
    puVar2[1] = &PTR____cxa_pure_virtual_110cc6610;
    func_0x000107c279a4(puVar2 + 6);
    func_0x000107c279a4(puVar2 + 2);
    return puVar2;
  }
  return puVar2;
}



/* Entry: 10b4a8e7c; end: 10b4a8e7f;  */

undefined8 * FUN_10b4a8e7c(undefined8 *param_1)

{
  *param_1 = &PTR____cxa_pure_virtual_110cc65b0;
  param_1[1] = &PTR____cxa_pure_virtual_110cc6610;
  func_0x000107c279a4(param_1 + 6);
  func_0x000107c279a4(param_1 + 2);
  return param_1;
}



/* Entry: 10b4a8e80; end: 10b4a8eab;  */

void FUN_10b4a8e80(void)

{
  func_0x00010b4a8260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4a8eac; end: 10b4a8eef;  */

void FUN_10b4a8eac(undefined8 param_1)

{
  undefined8 uStack_38;
  
  func_0x00010b4a9270();
  FUN_10b4a8ef0();
  func_0x00010b4a9248(param_1,uStack_38);
  func_0x00010b4a927c();
  func_0x00010b4a920c();
  func_0x00010b4a9264();
  return;
}



/* Entry: 10b4a8ef0; end: 10b4a8f2b;  */

void FUN_10b4a8ef0(undefined8 param_1)

{
  long unaff_x21;
  
  FUN_10b4a9164();
  func_0x00010b4a91cc();
  func_0x00010b4a9258();
  FUN_10b4a8f2c();
  func_0x00010b4a918c();
  *(undefined8 *)(unaff_x21 + 8) = param_1;
  return;
}



/* Entry: 10b4a8f2c; end: 10b4a8f47;  */

void FUN_10b4a8f2c(void)

{
  func_0x00010b4a9250();
  func_0x00010b4a91a0();
  return;
}



/* Entry: 10b4a8f48; end: 10b4a8f5f;  */

void FUN_10b4a8f48(void)

{
  FUN_10b4a8f60();
  return;
}



/* Entry: 10b4a8f60; end: 10b4a8fa3;  */

void FUN_10b4a8f60(undefined8 param_1)

{
  undefined8 uStack_38;
  
  func_0x00010b4a9270();
  FUN_10b4a8fa4();
  func_0x00010b4a9248(param_1,uStack_38);
  func_0x00010b4a927c();
  func_0x00010b4a920c();
  func_0x00010b4a9264();
  return;
}



/* Entry: 10b4a8fa4; end: 10b4a8fdf;  */

void FUN_10b4a8fa4(undefined8 param_1)

{
  long unaff_x21;
  
  FUN_10b4a9164();
  func_0x00010b4a91cc();
  func_0x00010b4a9258();
  FUN_10b4a8fe0();
  func_0x00010b4a918c();
  *(undefined8 *)(unaff_x21 + 8) = param_1;
  return;
}



/* Entry: 10b4a8fe0; end: 10b4a8ffb;  */

void FUN_10b4a8fe0(void)

{
  func_0x00010b4a9250();
  func_0x00010b4a91a0();
  return;
}



/* Entry: 10b4a8ffc; end: 10b4a9013;  */

void FUN_10b4a8ffc(void)

{
  FUN_10b4a9014();
  return;
}



/* Entry: 10b4a9014; end: 10b4a9057;  */

void FUN_10b4a9014(undefined8 param_1)

{
  undefined8 uStack_38;
  
  func_0x00010b4a9270();
  FUN_10b4a9058();
  func_0x00010b4a9248(param_1,uStack_38);
  func_0x00010b4a927c();
  func_0x00010b4a920c();
  func_0x00010b4a9264();
  return;
}



/* Entry: 10b4a9058; end: 10b4a9093;  */

void FUN_10b4a9058(undefined8 param_1)

{
  long unaff_x21;
  
  FUN_10b4a9164();
  func_0x00010b4a91cc();
  func_0x00010b4a9258();
  FUN_10b4a9094();
  func_0x00010b4a918c();
  *(undefined8 *)(unaff_x21 + 8) = param_1;
  return;
}



/* Entry: 10b4a9094; end: 10b4a90af;  */

void FUN_10b4a9094(void)

{
  func_0x00010b4a9250();
  func_0x00010b4a91a0();
  return;
}



/* Entry: 10b4a90b0; end: 10b4a90c7;  */

void FUN_10b4a90b0(void)

{
  FUN_10b4a90c8();
  return;
}



/* Entry: 10b4a90c8; end: 10b4a910b;  */

void FUN_10b4a90c8(undefined8 param_1)

{
  undefined8 uStack_38;
  
  func_0x00010b4a9270();
  FUN_10b4a910c();
  func_0x00010b4a9248(param_1,uStack_38);
  func_0x00010b4a927c();
  func_0x00010b4a920c();
  func_0x00010b4a9264();
  return;
}



/* Entry: 10b4a910c; end: 10b4a9147;  */

void FUN_10b4a910c(undefined8 param_1)

{
  long unaff_x21;
  
  FUN_10b4a9164();
  func_0x00010b4a91cc();
  func_0x00010b4a9258();
  FUN_10b4a9148();
  func_0x00010b4a918c();
  *(undefined8 *)(unaff_x21 + 8) = param_1;
  return;
}



/* Entry: 10b4a9148; end: 10b4a9163;  */

void FUN_10b4a9148(void)

{
  func_0x00010b4a9250();
  func_0x00010b4a91a0();
  return;
}



/* Entry: 10b4a9164; end: 10b4a92c7;  */

void FUN_10b4a9164(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x40);
  return;
}



/* Entry: 10b4a92c8; end: 10b4a95bb;  */

void FUN_10b4a92c8(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long unaff_x21;
  undefined *puVar3;
  undefined *apuStack_48 [3];
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if (*(char *)(param_2 + 0x30) == '\x01') {
    lVar1 = param_2 + 0x18;
    func_0x00010549026c(lVar1);
    FUN_10b4a95bc(param_1,&DAT_10f770d2e,lVar1);
  }
  if (*(char *)(param_2 + 0x50) == '\x01') {
    lVar1 = param_2 + 0x38;
    func_0x00010549026c();
    func_0x00010b4aa080();
    func_0x00010b4aa058();
    func_0x000107c278b8();
    func_0x00010b4aa118();
    func_0x00010b4aa024();
    *(long *)(unaff_x21 + 8) = lVar1;
    puVar3 = apuStack_48[0];
    func_0x00010b4aa070();
    if (((ulong)puVar3 & 1) != 0) {
      apuStack_48[0] = (undefined *)0x0;
    }
    func_0x00010b4aa050();
  }
  if (*(char *)(param_2 + 0x5c) == '\x01') {
    func_0x00010b4a95ec(param_2 + 0x58);
    apuStack_48[0] = (&PTR_s_FETCH_110cee498)[*(int *)(param_2 + 0x58)];
    func_0x00010b4aa124();
    func_0x00010b4a95d4();
  }
  if (*(char *)(param_2 + 100) == '\x01') {
    func_0x00010b4a961c(param_2 + 0x60);
    apuStack_48[0] = (&PTR_s_UNKNOWN_110cee4e0)[*(int *)(param_2 + 0x60)];
    func_0x00010b4aa124();
    func_0x00010b4a9604();
  }
  if (*(char *)(param_2 + 0x6c) == '\x01') {
    func_0x00010b4a9634(param_2 + 0x68);
    puVar3 = (&PTR_DAT_110cee548)[*(int *)(param_2 + 0x68)];
    func_0x00010b4aa080();
    func_0x00010b4aa058();
    func_0x000107c278b8();
    lVar1 = unaff_x21 + 0x28;
    func_0x000107c278b8(lVar1,puVar3);
    func_0x00010b4aa024();
    *(long *)(unaff_x21 + 8) = lVar1;
    puVar3 = apuStack_48[0];
    func_0x00010b4aa070();
    if (((ulong)puVar3 & 1) != 0) {
      apuStack_48[0] = (undefined *)0x0;
    }
    func_0x00010b4aa050();
  }
  if (*(char *)(param_2 + 0x78) == '\x01') {
    puVar2 = (undefined8 *)(param_2 + 0x70);
    func_0x0001072833b8();
    __ZNSt3__19to_stringEx(apuStack_48,*puVar2);
    func_0x00010b4aa124();
    func_0x00010b4a964c();
    func_0x00010b4aa110();
  }
  if (*(char *)(param_2 + 0x98) == '\x01') {
    lVar1 = param_2 + 0x80;
    func_0x00010549026c(lVar1);
    FUN_10b4a9664(param_1,&DAT_10f770d4f,lVar1);
  }
  if (*(char *)(param_2 + 0xa8) == '\x01') {
    puVar2 = (undefined8 *)(param_2 + 0xa0);
    func_0x0001072833b8();
    __ZNSt3__19to_stringEx(apuStack_48,*puVar2);
    func_0x00010b4aa124();
    FUN_10b4a9718();
    func_0x00010b4aa110();
  }
  if (*(char *)(param_2 + 200) == '\x01') {
    lVar1 = param_2 + 0xb0;
    func_0x00010549026c();
    func_0x00010b4aa080();
    func_0x00010b4aa058();
    func_0x000107c278b8();
    func_0x00010b4aa118();
    func_0x00010b4aa024();
    *(long *)(unaff_x21 + 8) = lVar1;
    puVar3 = apuStack_48[0];
    func_0x00010b4aa070();
    if (((ulong)puVar3 & 1) != 0) {
      apuStack_48[0] = (undefined *)0x0;
    }
    func_0x00010b4aa050();
  }
  if (*(char *)(param_2 + 0xe8) == '\x01') {
    param_2 = param_2 + 0xd0;
    func_0x00010549026c(param_2);
    FUN_10b4a9664(param_1,&DAT_10f770d9b,param_2);
  }
  return;
}



/* Entry: 10b4a95bc; end: 10b4a9663;  */

void FUN_10b4a95bc(void)

{
  func_0x00010b4a9bf0();
  return;
}



/* Entry: 10b4a9664; end: 10b4a9717;  */

void FUN_10b4a9664(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x00010b4aa080();
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c278b8(puVar1 + 2,param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar1 + 5,param_3);
  param_1 = param_1 + 3;
  func_0x000107c278c4(param_1,puVar1 + 2);
  puVar1[1] = param_1;
  func_0x00010b4aa070();
  func_0x00010b4aa050();
  return;
}



/* Entry: 10b4a9718; end: 10b4a972f;  */

void FUN_10b4a9718(void)

{
  FUN_10b4a9f00();
  return;
}



/* Entry: 10b4a9730; end: 10b4a9737;  */

void FUN_10b4a9730(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long unaff_x21;
  undefined *puVar3;
  undefined *apuStack_48 [3];
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if (*(char *)(param_2 + 0x28) == '\x01') {
    lVar1 = param_2 + 0x10;
    func_0x00010549026c(lVar1);
    FUN_10b4a95bc(param_1,&DAT_10f770d2e,lVar1);
  }
  if (*(char *)(param_2 + 0x48) == '\x01') {
    lVar1 = param_2 + 0x30;
    func_0x00010549026c();
    func_0x00010b4aa080();
    func_0x00010b4aa058();
    func_0x000107c278b8();
    func_0x00010b4aa118();
    func_0x00010b4aa024();
    *(long *)(unaff_x21 + 8) = lVar1;
    puVar3 = apuStack_48[0];
    func_0x00010b4aa070();
    if (((ulong)puVar3 & 1) != 0) {
      apuStack_48[0] = (undefined *)0x0;
    }
    func_0x00010b4aa050();
  }
  if (*(char *)(param_2 + 0x54) == '\x01') {
    func_0x00010b4a95ec(param_2 + 0x50);
    apuStack_48[0] = (&PTR_s_FETCH_110cee498)[*(int *)(param_2 + 0x50)];
    func_0x00010b4aa124();
    func_0x00010b4a95d4();
  }
  if (*(char *)(param_2 + 0x5c) == '\x01') {
    func_0x00010b4a961c(param_2 + 0x58);
    apuStack_48[0] = (&PTR_s_UNKNOWN_110cee4e0)[*(int *)(param_2 + 0x58)];
    func_0x00010b4aa124();
    func_0x00010b4a9604();
  }
  if (*(char *)(param_2 + 100) == '\x01') {
    func_0x00010b4a9634(param_2 + 0x60);
    puVar3 = (&PTR_DAT_110cee548)[*(int *)(param_2 + 0x60)];
    func_0x00010b4aa080();
    func_0x00010b4aa058();
    func_0x000107c278b8();
    lVar1 = unaff_x21 + 0x28;
    func_0x000107c278b8(lVar1,puVar3);
    func_0x00010b4aa024();
    *(long *)(unaff_x21 + 8) = lVar1;
    puVar3 = apuStack_48[0];
    func_0x00010b4aa070();
    if (((ulong)puVar3 & 1) != 0) {
      apuStack_48[0] = (undefined *)0x0;
    }
    func_0x00010b4aa050();
  }
  if (*(char *)(param_2 + 0x70) == '\x01') {
    puVar2 = (undefined8 *)(param_2 + 0x68);
    func_0x0001072833b8();
    __ZNSt3__19to_stringEx(apuStack_48,*puVar2);
    func_0x00010b4aa124();
    func_0x00010b4a964c();
    func_0x00010b4aa110();
  }
  if (*(char *)(param_2 + 0x90) == '\x01') {
    lVar1 = param_2 + 0x78;
    func_0x00010549026c(lVar1);
    FUN_10b4a9664(param_1,&DAT_10f770d4f,lVar1);
  }
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    puVar2 = (undefined8 *)(param_2 + 0x98);
    func_0x0001072833b8();
    __ZNSt3__19to_stringEx(apuStack_48,*puVar2);
    func_0x00010b4aa124();
    FUN_10b4a9718();
    func_0x00010b4aa110();
  }
  if (*(char *)(param_2 + 0xc0) == '\x01') {
    lVar1 = param_2 + 0xa8;
    func_0x00010549026c();
    func_0x00010b4aa080();
    func_0x00010b4aa058();
    func_0x000107c278b8();
    func_0x00010b4aa118();
    func_0x00010b4aa024();
    *(long *)(unaff_x21 + 8) = lVar1;
    puVar3 = apuStack_48[0];
    func_0x00010b4aa070();
    if (((ulong)puVar3 & 1) != 0) {
      apuStack_48[0] = (undefined *)0x0;
    }
    func_0x00010b4aa050();
  }
  if (*(char *)(param_2 + 0xe0) == '\x01') {
    param_2 = param_2 + 200;
    func_0x00010549026c(param_2);
    FUN_10b4a9664(param_1,&DAT_10f770d9b,param_2);
  }
  return;
}



/* Entry: 10b4a9738; end: 10b4a9bd7;  */

undefined8 * FUN_10b4a9738(undefined8 param_1,long param_2,long param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 auStack_d0 [17];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = auStack_d0;
  FUN_10b4a77f0();
  if (*(char *)(param_3 + 0x28) == '\x01') {
    bVar1 = *(long *)(param_3 + 0x18) == 0;
    if ((*(byte *)(param_2 + 0x30) & 1) == 0) goto LAB_10b4a97e8;
    if (*(long *)(param_3 + 0x18) == 0) goto LAB_10b4a97c0;
    func_0x00010b4a9fe8();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4a97c4;
    }
    if ((*(byte *)(param_2 + 0x50) & 1) != 0) goto LAB_10b4a980c;
    bVar1 = false;
LAB_10b4a983c:
    if ((*(byte *)(param_2 + 0x5c) & 1) == 0) goto LAB_10b4a9898;
    if (bVar1) {
      bVar1 = true;
LAB_10b4a9874:
      *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 8;
      func_0x00010b4a95ec((undefined4 *)(param_2 + 0x58));
      puVar2 = auStack_d0;
      FUN_10b4a7ab0(puVar2,6,*(undefined4 *)(param_2 + 0x58));
      goto LAB_10b4a9898;
    }
LAB_10b4a9860:
    func_0x00010b4a9fe8();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4a9874;
    }
    if ((*(byte *)(param_2 + 100) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4a98bc;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4a98f4:
    if ((*(byte *)(param_2 + 0x6c) & 1) == 0) goto LAB_10b4a9950;
    if (bVar1) {
      bVar1 = true;
LAB_10b4a992c:
      *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 2;
      func_0x00010b4a9634((undefined4 *)(param_2 + 0x68));
      puVar2 = auStack_d0;
      FUN_10b4a7ab0(puVar2,8,*(undefined4 *)(param_2 + 0x68));
      goto LAB_10b4a9950;
    }
LAB_10b4a9918:
    func_0x00010b4a9fe8();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4a992c;
    }
    if ((*(byte *)(param_2 + 0x78) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4a9974;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4a99ac:
    if ((*(byte *)(param_2 + 0x98) & 1) == 0) goto LAB_10b4a9a00;
    if (bVar1) {
      bVar1 = true;
LAB_10b4a99e4:
      *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) | 0x80;
      func_0x00010b4aa0b0();
      func_0x00010b4aa0f8();
      func_0x00010b4a7a18();
      goto LAB_10b4a9a00;
    }
LAB_10b4a99d0:
    func_0x00010b4a9fe8();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4a99e4;
    }
    if ((*(byte *)(param_2 + 0xa8) & 1) != 0) goto LAB_10b4a9a24;
    bVar1 = false;
LAB_10b4a9a5c:
    if ((*(byte *)(param_2 + 200) & 1) == 0) goto LAB_10b4a9ab0;
    if (bVar1) {
      bVar1 = true;
LAB_10b4a9a94:
      *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) | 0x20;
      func_0x00010b4aa0b0();
      func_0x00010b4aa0f8();
      func_0x00010b4a7a18();
      goto LAB_10b4a9ab0;
    }
LAB_10b4a9a80:
    func_0x00010b4a9fe8();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4a9a94;
    }
    if ((*(byte *)(param_2 + 0xe8) & 1) == 0) goto LAB_10b4a9aec;
LAB_10b4a9ac0:
    func_0x00010b4a9fe8();
    if (puVar2 == (undefined8 *)0x0) goto LAB_10b4a9aec;
  }
  else {
    if ((*(byte *)(param_2 + 0x30) & 1) == 0) {
      bVar1 = true;
    }
    else {
LAB_10b4a97c0:
      bVar1 = true;
LAB_10b4a97c4:
      *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 0x40;
      func_0x00010b4aa0b0();
      func_0x00010b4aa0f8();
      func_0x00010b4a7a18();
    }
LAB_10b4a97e8:
    if ((*(byte *)(param_2 + 0x50) & 1) == 0) goto LAB_10b4a983c;
    if (bVar1) {
      bVar1 = true;
LAB_10b4a9820:
      *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 0x10;
      func_0x00010b4aa0b0();
      func_0x00010b4aa0f8();
      func_0x00010b4a7a18();
      goto LAB_10b4a983c;
    }
LAB_10b4a980c:
    func_0x00010b4a9fe8();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4a9820;
    }
    if ((*(byte *)(param_2 + 0x5c) & 1) != 0) goto LAB_10b4a9860;
    bVar1 = false;
LAB_10b4a9898:
    if ((*(byte *)(param_2 + 100) & 1) == 0) goto LAB_10b4a98f4;
    if (bVar1) {
      bVar1 = true;
LAB_10b4a98d0:
      *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 4;
      func_0x00010b4a961c((undefined4 *)(param_2 + 0x60));
      puVar2 = auStack_d0;
      FUN_10b4a7ab0(puVar2,7,*(undefined4 *)(param_2 + 0x60));
      goto LAB_10b4a98f4;
    }
LAB_10b4a98bc:
    func_0x00010b4a9fe8();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4a98d0;
    }
    if ((*(byte *)(param_2 + 0x6c) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4a9918;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4a9950:
    if ((*(byte *)(param_2 + 0x78) & 1) == 0) goto LAB_10b4a99ac;
    if (bVar1) {
      bVar1 = true;
LAB_10b4a9988:
      puVar3 = (undefined8 *)(param_2 + 0x70);
      *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 1;
      func_0x0001072833b8();
      puVar2 = auStack_d0;
      func_0x00010b4a79c0(puVar2,9,*puVar3);
      goto LAB_10b4a99ac;
    }
LAB_10b4a9974:
    func_0x00010b4a9fe8();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4a9988;
    }
    puVar2 = (undefined8 *)0x0;
    if ((*(byte *)(param_2 + 0x98) & 1) != 0) goto LAB_10b4a99d0;
    bVar1 = false;
LAB_10b4a9a00:
    if ((*(byte *)(param_2 + 0xa8) & 1) == 0) goto LAB_10b4a9a5c;
    if (bVar1) {
      bVar1 = true;
LAB_10b4a9a38:
      puVar3 = (undefined8 *)(param_2 + 0xa0);
      *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) | 0x40;
      func_0x0001072833b8();
      puVar2 = auStack_d0;
      func_0x00010b4a79c0(puVar2,0xb,*puVar3);
      goto LAB_10b4a9a5c;
    }
LAB_10b4a9a24:
    func_0x00010b4a9fe8();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4a9a38;
    }
    puVar2 = (undefined8 *)0x0;
    if ((*(byte *)(param_2 + 200) & 1) != 0) goto LAB_10b4a9a80;
    bVar1 = false;
LAB_10b4a9ab0:
    if ((*(byte *)(param_2 + 0xe8) & 1) == 0) goto LAB_10b4a9aec;
    if (!bVar1) goto LAB_10b4a9ac0;
  }
  *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) | 0x10;
  func_0x00010b4aa0b0();
  func_0x00010b4aa0f8();
  func_0x00010b4a7a18();
LAB_10b4a9aec:
  FUN_10b4a7ad8(auStack_d0,1,param_2 + 0x10,2);
  FUN_10b4a7854(param_1,auStack_d0);
  puVar2 = auStack_d0;
  FUN_10b4a8238();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar2 = auStack_d0;
    FUN_10b4a8238();
    func_0x00010b4aa088();
    *puVar2 = &PTR_FUN_110cee410;
    puVar2[1] = &PTR_FUN_110cee478;
    func_0x0001001148fc(puVar2 + 0x1a);
    func_0x0001001148fc(puVar2 + 0x16);
    func_0x0001001148fc(puVar2 + 0x10);
    func_0x0001001148fc(puVar2 + 7);
    func_0x0001001148fc(puVar2 + 3);
    return puVar2;
  }
  return puVar2;
}



/* Entry: 10b4a9bd8; end: 10b4a9bdb;  */

undefined8 * FUN_10b4a9bd8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cee410;
  param_1[1] = &PTR_FUN_110cee478;
  func_0x0001001148fc(param_1 + 0x1a);
  func_0x0001001148fc(param_1 + 0x16);
  func_0x0001001148fc(param_1 + 0x10);
  func_0x0001001148fc(param_1 + 7);
  func_0x0001001148fc(param_1 + 3);
  return param_1;
}



/* Entry: 10b4a9bdc; end: 10b4a9c07;  */

void FUN_10b4a9bdc(void)

{
  func_0x000105c3f180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4a9c08; end: 10b4a9c4b;  */

void FUN_10b4a9c08(undefined8 param_1)

{
  undefined8 uStack_38;
  
  func_0x00010b4aa0ec();
  FUN_10b4a9c4c();
  func_0x00010b4aa070(param_1,uStack_38);
  func_0x00010b4aa0e0();
  func_0x00010b4aa050();
  func_0x00010b4aa0d4();
  return;
}



/* Entry: 10b4a9c4c; end: 10b4a9c87;  */

void FUN_10b4a9c4c(undefined8 param_1)

{
  long unaff_x21;
  
  FUN_10b4a9fb8();
  func_0x00010b4aa004();
  func_0x00010b4aa104();
  FUN_10b4a9c88();
  func_0x00010b4a9fd4();
  *(undefined8 *)(unaff_x21 + 8) = param_1;
  return;
}



/* Entry: 10b4a9c88; end: 10b4a9cb7;  */

void FUN_10b4a9c88(long param_1)

{
  func_0x00010b4aa090();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 0x18);
  return;
}



/* Entry: 10b4a9cb8; end: 10b4a9ccf;  */

void FUN_10b4a9cb8(void)

{
  FUN_10b4a9cd0();
  return;
}



/* Entry: 10b4a9cd0; end: 10b4a9d13;  */

void FUN_10b4a9cd0(undefined8 param_1)

{
  undefined8 uStack_38;
  
  func_0x00010b4aa0ec();
  FUN_10b4a9d14();
  func_0x00010b4aa070(param_1,uStack_38);
  func_0x00010b4aa0e0();
  func_0x00010b4aa050();
  func_0x00010b4aa0d4();
  return;
}



/* Entry: 10b4a9d14; end: 10b4a9d4f;  */

void FUN_10b4a9d14(undefined8 param_1)

{
  long unaff_x21;
  
  FUN_10b4a9fb8();
  func_0x00010b4aa004();
  func_0x00010b4aa104();
  FUN_10b4a9d50();
  func_0x00010b4a9fd4();
  *(undefined8 *)(unaff_x21 + 8) = param_1;
  return;
}



/* Entry: 10b4a9d50; end: 10b4a9d7f;  */

void FUN_10b4a9d50(long param_1)

{
  undefined8 *unaff_x20;
  
  func_0x00010b4aa090();
  func_0x000107c278b8(param_1 + 0x18,*unaff_x20);
  return;
}



/* Entry: 10b4a9d80; end: 10b4a9d97;  */

void FUN_10b4a9d80(void)

{
  FUN_10b4a9d98();
  return;
}



/* Entry: 10b4a9d98; end: 10b4a9ddb;  */

void FUN_10b4a9d98(undefined8 param_1)

{
  undefined8 uStack_38;
  
  func_0x00010b4aa0ec();
  FUN_10b4a9ddc();
  func_0x00010b4aa070(param_1,uStack_38);
  func_0x00010b4aa0e0();
  func_0x00010b4aa050();
  func_0x00010b4aa0d4();
  return;
}



/* Entry: 10b4a9ddc; end: 10b4a9e17;  */

void FUN_10b4a9ddc(undefined8 param_1)

{
  long unaff_x21;
  
  FUN_10b4a9fb8();
  func_0x00010b4aa004();
  func_0x00010b4aa104();
  FUN_10b4a9e18();
  func_0x00010b4a9fd4();
  *(undefined8 *)(unaff_x21 + 8) = param_1;
  return;
}



/* Entry: 10b4a9e18; end: 10b4a9e47;  */

void FUN_10b4a9e18(long param_1)

{
  undefined8 *unaff_x20;
  
  func_0x00010b4aa090();
  func_0x000107c278b8(param_1 + 0x18,*unaff_x20);
  return;
}



/* Entry: 10b4a9e48; end: 10b4a9e5f;  */

void FUN_10b4a9e48(void)

{
  FUN_10b4a9e60();
  return;
}



/* Entry: 10b4a9e60; end: 10b4a9ea3;  */

void FUN_10b4a9e60(undefined8 param_1)

{
  undefined8 uStack_38;
  
  func_0x00010b4aa0ec();
  FUN_10b4a9ea4();
  func_0x00010b4aa070(param_1,uStack_38);
  func_0x00010b4aa0e0();
  func_0x00010b4aa050();
  func_0x00010b4aa0d4();
  return;
}



/* Entry: 10b4a9ea4; end: 10b4a9edf;  */

void FUN_10b4a9ea4(undefined8 param_1)

{
  long unaff_x21;
  
  FUN_10b4a9fb8();
  func_0x00010b4aa004();
  func_0x00010b4aa104();
  FUN_10b4a9ee0();
  func_0x00010b4a9fd4();
  *(undefined8 *)(unaff_x21 + 8) = param_1;
  return;
}



/* Entry: 10b4a9ee0; end: 10b4a9eff;  */

void FUN_10b4a9ee0(void)

{
  func_0x000107c278b8();
  func_0x00010b4aa0b8();
  return;
}



/* Entry: 10b4a9f00; end: 10b4a9f17;  */

void FUN_10b4a9f00(void)

{
  FUN_10b4a9f18();
  return;
}



/* Entry: 10b4a9f18; end: 10b4a9f5b;  */

void FUN_10b4a9f18(undefined8 param_1)

{
  undefined8 uStack_38;
  
  func_0x00010b4aa0ec();
  FUN_10b4a9f5c();
  func_0x00010b4aa070(param_1,uStack_38);
  func_0x00010b4aa0e0();
  func_0x00010b4aa050();
  func_0x00010b4aa0d4();
  return;
}



/* Entry: 10b4a9f5c; end: 10b4a9f97;  */

void FUN_10b4a9f5c(undefined8 param_1)

{
  long unaff_x21;
  
  FUN_10b4a9fb8();
  func_0x00010b4aa004();
  func_0x00010b4aa104();
  FUN_10b4a9f98();
  func_0x00010b4a9fd4();
  *(undefined8 *)(unaff_x21 + 8) = param_1;
  return;
}



/* Entry: 10b4a9f98; end: 10b4a9fb7;  */

void FUN_10b4a9f98(void)

{
  func_0x000107c278b8();
  func_0x00010b4aa0b8();
  return;
}



/* Entry: 10b4a9fb8; end: 10b4aa15b;  */

void FUN_10b4a9fb8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x40);
  return;
}



/* Entry: 10b4aa15c; end: 10b4aa6a3;  */

void FUN_10b4aa15c(undefined8 *param_1,long param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong auStack_48 [2];
  undefined1 uStack_38;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if (*(char *)(param_2 + 0x18) == '\x01') {
    piVar1 = (int *)(param_2 + 0x14);
    FUN_10b4aa6a4();
    func_0x00010b4ab93c((long)*piVar1);
    func_0x00010b4ab8bc();
    func_0x00010b4a9604();
  }
  if (*(char *)(param_2 + 0x28) == '\x01') {
    puVar2 = (undefined8 *)(param_2 + 0x20);
    func_0x0001072833b8();
    func_0x00010b4ab8f4(*puVar2);
    func_0x00010b4ab8bc();
    func_0x00010b4aa6bc();
    func_0x00010b4ab8d0();
  }
  if (*(char *)(param_2 + 0x48) == '\x01') {
    lVar3 = param_2 + 0x30;
    func_0x00010549026c(lVar3);
    FUN_10b4a7e88(param_1,&DAT_10f30fae7,lVar3);
  }
  if (*(char *)(param_2 + 0x51) == '\x01') {
    puVar4 = (undefined1 *)(param_2 + 0x50);
    func_0x000107c29334();
    __ZNSt3__19to_stringEi(auStack_48,*puVar4);
    func_0x00010b4ab8bc();
    func_0x00010b4aa6d4();
    func_0x00010b4ab8d0();
  }
  if (*(char *)(param_2 + 0x58) == '\x01') {
    func_0x00010b4aa704(param_2 + 0x54);
    func_0x00010b4ab93c((long)*(int *)(param_2 + 0x54));
    func_0x00010b4ab8bc();
    func_0x00010b4aa6ec();
  }
  if (*(char *)(param_2 + 0x78) == '\x01') {
    lVar3 = param_2 + 0x60;
    func_0x00010549026c(lVar3);
    func_0x00010b4aa71c(param_1,&DAT_10f770f46,lVar3);
  }
  if (*(char *)(param_2 + 0x88) == '\x01') {
    plVar5 = (long *)(param_2 + 0x80);
    func_0x0001072833b8();
    lVar6 = *plVar5;
    __ZNSt3__19to_stringEx(&uStack_60);
    func_0x00010b4ab86c();
    lVar3 = lVar6;
    func_0x00010b4ab858();
    puVar12 = &DAT_10f770f57;
    func_0x000107c278b8();
    *(undefined8 *)(lVar6 + 0x30) = uStack_58;
    *(undefined8 *)(lVar6 + 0x28) = uStack_60;
    *(undefined8 *)(lVar6 + 0x38) = uStack_50;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    func_0x00010b4ab834();
    *(long *)(lVar6 + 8) = lVar3;
    func_0x00010b4ab928();
    if (((ulong)puVar12 & 1) != 0) {
      auStack_48[0] = 0;
    }
    func_0x00010b4ab8d8();
    func_0x00010b4ab918();
  }
  if (*(char *)(param_2 + 0x98) == '\x01') {
    puVar2 = (undefined8 *)(param_2 + 0x90);
    func_0x0001072833b8();
    func_0x00010b4ab8f4(*puVar2);
    func_0x00010b4ab8bc();
    func_0x00010b4a7ee8();
    func_0x00010b4ab8d0();
  }
  if (*(char *)(param_2 + 0xb8) == '\x01') {
    lVar3 = param_2 + 0xa0;
    func_0x00010549026c();
    lVar7 = lVar3;
    func_0x00010b4ab86c();
    func_0x00010b4ab858();
    func_0x000107c278b8();
    lVar6 = lVar7 + 0x28;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(lVar6,lVar3);
    func_0x00010b4ab834();
    *(long *)(lVar7 + 8) = lVar6;
    uVar11 = auStack_48[0];
    func_0x00010b4ab87c();
    if ((uVar11 & 1) != 0) {
      auStack_48[0] = 0;
    }
    func_0x00010b4ab8d8();
  }
  if (*(char *)(param_2 + 0xc4) == '\x01') {
    func_0x00010b4aa74c(param_2 + 0xc0);
    func_0x00010b4ab93c((long)*(int *)(param_2 + 0xc0));
    func_0x00010b4ab8bc();
    func_0x00010b4aa734();
  }
  if (*(char *)(param_2 + 0xe0) == '\x01') {
    lVar3 = param_2 + 200;
    func_0x00010549026c(lVar3);
    func_0x00010b4aa764(param_1,&DAT_10f770f91,lVar3);
  }
  if (*(char *)(param_2 + 0x100) == '\x01') {
    lVar3 = param_2 + 0xe8;
    func_0x00010549026c(lVar3);
    func_0x00010b4aa77c(param_1,&DAT_10f770f9f,lVar3);
  }
  if (*(char *)(param_2 + 0x109) == '\x01') {
    puVar4 = (undefined1 *)(param_2 + 0x108);
    func_0x000107c29334();
    __ZNSt3__19to_stringEi(auStack_48,*puVar4);
    func_0x00010b4ab8bc();
    func_0x00010b4a8a10();
    func_0x00010b4ab8d0();
  }
  if (*(char *)(param_2 + 0x110) == '\x01') {
    piVar1 = (int *)(param_2 + 0x10c);
    func_0x00010b4aa7ac();
    func_0x00010b4ab93c((long)*piVar1);
    func_0x00010b4ab8bc();
    func_0x00010b4aa794();
  }
  if (*(char *)(param_2 + 0x120) == '\x01') {
    puVar2 = (undefined8 *)(param_2 + 0x118);
    func_0x0001072833b8();
    func_0x00010b4ab8f4(*puVar2);
    func_0x00010b4ab8bc();
    func_0x00010b4aa7c4();
    func_0x00010b4ab8d0();
  }
  if (*(char *)(param_2 + 0x129) == '\x01') {
    pbVar8 = (byte *)(param_2 + 0x128);
    func_0x000107c29334();
    uVar9 = (ulong)*pbVar8;
    __ZNSt3__19to_stringEi(&uStack_60);
    func_0x00010b4ab86c();
    uVar11 = uVar9;
    func_0x00010b4ab858();
    puVar12 = &DAT_10f770fd9;
    func_0x000107c278b8();
    *(undefined8 *)(uVar9 + 0x30) = uStack_58;
    *(undefined8 *)(uVar9 + 0x28) = uStack_60;
    *(undefined8 *)(uVar9 + 0x38) = uStack_50;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    func_0x00010b4ab834();
    *(ulong *)(uVar9 + 8) = uVar11;
    func_0x00010b4ab928();
    if (((ulong)puVar12 & 1) != 0) {
      auStack_48[0] = 0;
    }
    func_0x00010b4ab8d8();
    func_0x00010b4ab918();
  }
  if (*(char *)(param_2 + 0x138) == '\x01') {
    puVar2 = (undefined8 *)(param_2 + 0x130);
    func_0x0001072833b8();
    func_0x00010b4ab8f4(*puVar2);
    func_0x00010b4ab8bc();
    func_0x00010b4aa7dc();
    func_0x00010b4ab8d0();
  }
  if (*(char *)(param_2 + 0x148) == '\x01') {
    puVar10 = (ulong *)(param_2 + 0x140);
    func_0x0001072833b8();
    uVar11 = *puVar10;
    __ZNSt3__19to_stringEx(&uStack_60);
    func_0x00010b4ab86c();
    func_0x00010b4ab858();
    func_0x000107c278b8();
    *(undefined8 *)(uVar11 + 0x30) = uStack_58;
    *(undefined8 *)(uVar11 + 0x28) = uStack_60;
    *(undefined8 *)(uVar11 + 0x38) = uStack_50;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    uStack_38 = 1;
    puVar2 = param_1 + 3;
    func_0x000107c278c4(puVar2,uVar11 + 0x10);
    *(undefined8 **)(uVar11 + 8) = puVar2;
    func_0x000105971280(param_1);
    if ((uVar11 & 1) != 0) {
      auStack_48[0] = 0;
    }
    func_0x00010b4ab8d8();
    func_0x00010b4ab918();
  }
  return;
}



/* Entry: 10b4aa6a4; end: 10b4aa7f3;  */

void FUN_10b4aa6a4(long param_1)

{
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  FUN_10b4ab020();
  return;
}



/* Entry: 10b4aa7f4; end: 10b4aa7fb;  */

void FUN_10b4aa7f4(undefined8 *param_1,long param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong auStack_48 [2];
  undefined1 uStack_38;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if (*(char *)(param_2 + 0x10) == '\x01') {
    piVar1 = (int *)(param_2 + 0xc);
    FUN_10b4aa6a4();
    func_0x00010b4ab93c((long)*piVar1);
    func_0x00010b4ab8bc();
    func_0x00010b4a9604();
  }
  if (*(char *)(param_2 + 0x20) == '\x01') {
    puVar2 = (undefined8 *)(param_2 + 0x18);
    func_0x0001072833b8();
    func_0x00010b4ab8f4(*puVar2);
    func_0x00010b4ab8bc();
    func_0x00010b4aa6bc();
    func_0x00010b4ab8d0();
  }
  if (*(char *)(param_2 + 0x40) == '\x01') {
    lVar3 = param_2 + 0x28;
    func_0x00010549026c(lVar3);
    FUN_10b4a7e88(param_1,&DAT_10f30fae7,lVar3);
  }
  if (*(char *)(param_2 + 0x49) == '\x01') {
    puVar4 = (undefined1 *)(param_2 + 0x48);
    func_0x000107c29334();
    __ZNSt3__19to_stringEi(auStack_48,*puVar4);
    func_0x00010b4ab8bc();
    func_0x00010b4aa6d4();
    func_0x00010b4ab8d0();
  }
  if (*(char *)(param_2 + 0x50) == '\x01') {
    func_0x00010b4aa704(param_2 + 0x4c);
    func_0x00010b4ab93c((long)*(int *)(param_2 + 0x4c));
    func_0x00010b4ab8bc();
    func_0x00010b4aa6ec();
  }
  if (*(char *)(param_2 + 0x70) == '\x01') {
    lVar3 = param_2 + 0x58;
    func_0x00010549026c(lVar3);
    func_0x00010b4aa71c(param_1,&DAT_10f770f46,lVar3);
  }
  if (*(char *)(param_2 + 0x80) == '\x01') {
    plVar5 = (long *)(param_2 + 0x78);
    func_0x0001072833b8();
    lVar6 = *plVar5;
    __ZNSt3__19to_stringEx(&uStack_60);
    func_0x00010b4ab86c();
    lVar3 = lVar6;
    func_0x00010b4ab858();
    puVar12 = &DAT_10f770f57;
    func_0x000107c278b8();
    *(undefined8 *)(lVar6 + 0x30) = uStack_58;
    *(undefined8 *)(lVar6 + 0x28) = uStack_60;
    *(undefined8 *)(lVar6 + 0x38) = uStack_50;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    func_0x00010b4ab834();
    *(long *)(lVar6 + 8) = lVar3;
    func_0x00010b4ab928();
    if (((ulong)puVar12 & 1) != 0) {
      auStack_48[0] = 0;
    }
    func_0x00010b4ab8d8();
    func_0x00010b4ab918();
  }
  if (*(char *)(param_2 + 0x90) == '\x01') {
    puVar2 = (undefined8 *)(param_2 + 0x88);
    func_0x0001072833b8();
    func_0x00010b4ab8f4(*puVar2);
    func_0x00010b4ab8bc();
    func_0x00010b4a7ee8();
    func_0x00010b4ab8d0();
  }
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    lVar3 = param_2 + 0x98;
    func_0x00010549026c();
    lVar7 = lVar3;
    func_0x00010b4ab86c();
    func_0x00010b4ab858();
    func_0x000107c278b8();
    lVar6 = lVar7 + 0x28;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(lVar6,lVar3);
    func_0x00010b4ab834();
    *(long *)(lVar7 + 8) = lVar6;
    uVar11 = auStack_48[0];
    func_0x00010b4ab87c();
    if ((uVar11 & 1) != 0) {
      auStack_48[0] = 0;
    }
    func_0x00010b4ab8d8();
  }
  if (*(char *)(param_2 + 0xbc) == '\x01') {
    func_0x00010b4aa74c(param_2 + 0xb8);
    func_0x00010b4ab93c((long)*(int *)(param_2 + 0xb8));
    func_0x00010b4ab8bc();
    func_0x00010b4aa734();
  }
  if (*(char *)(param_2 + 0xd8) == '\x01') {
    lVar3 = param_2 + 0xc0;
    func_0x00010549026c(lVar3);
    func_0x00010b4aa764(param_1,&DAT_10f770f91,lVar3);
  }
  if (*(char *)(param_2 + 0xf8) == '\x01') {
    lVar3 = param_2 + 0xe0;
    func_0x00010549026c(lVar3);
    func_0x00010b4aa77c(param_1,&DAT_10f770f9f,lVar3);
  }
  if (*(char *)(param_2 + 0x101) == '\x01') {
    puVar4 = (undefined1 *)(param_2 + 0x100);
    func_0x000107c29334();
    __ZNSt3__19to_stringEi(auStack_48,*puVar4);
    func_0x00010b4ab8bc();
    func_0x00010b4a8a10();
    func_0x00010b4ab8d0();
  }
  if (*(char *)(param_2 + 0x108) == '\x01') {
    piVar1 = (int *)(param_2 + 0x104);
    func_0x00010b4aa7ac();
    func_0x00010b4ab93c((long)*piVar1);
    func_0x00010b4ab8bc();
    func_0x00010b4aa794();
  }
  if (*(char *)(param_2 + 0x118) == '\x01') {
    puVar2 = (undefined8 *)(param_2 + 0x110);
    func_0x0001072833b8();
    func_0x00010b4ab8f4(*puVar2);
    func_0x00010b4ab8bc();
    func_0x00010b4aa7c4();
    func_0x00010b4ab8d0();
  }
  if (*(char *)(param_2 + 0x121) == '\x01') {
    pbVar8 = (byte *)(param_2 + 0x120);
    func_0x000107c29334();
    uVar9 = (ulong)*pbVar8;
    __ZNSt3__19to_stringEi(&uStack_60);
    func_0x00010b4ab86c();
    uVar11 = uVar9;
    func_0x00010b4ab858();
    puVar12 = &DAT_10f770fd9;
    func_0x000107c278b8();
    *(undefined8 *)(uVar9 + 0x30) = uStack_58;
    *(undefined8 *)(uVar9 + 0x28) = uStack_60;
    *(undefined8 *)(uVar9 + 0x38) = uStack_50;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    func_0x00010b4ab834();
    *(ulong *)(uVar9 + 8) = uVar11;
    func_0x00010b4ab928();
    if (((ulong)puVar12 & 1) != 0) {
      auStack_48[0] = 0;
    }
    func_0x00010b4ab8d8();
    func_0x00010b4ab918();
  }
  if (*(char *)(param_2 + 0x130) == '\x01') {
    puVar2 = (undefined8 *)(param_2 + 0x128);
    func_0x0001072833b8();
    func_0x00010b4ab8f4(*puVar2);
    func_0x00010b4ab8bc();
    func_0x00010b4aa7dc();
    func_0x00010b4ab8d0();
  }
  if (*(char *)(param_2 + 0x140) == '\x01') {
    puVar10 = (ulong *)(param_2 + 0x138);
    func_0x0001072833b8();
    uVar11 = *puVar10;
    __ZNSt3__19to_stringEx(&uStack_60);
    func_0x00010b4ab86c();
    func_0x00010b4ab858();
    func_0x000107c278b8();
    *(undefined8 *)(uVar11 + 0x30) = uStack_58;
    *(undefined8 *)(uVar11 + 0x28) = uStack_60;
    *(undefined8 *)(uVar11 + 0x38) = uStack_50;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    uStack_38 = 1;
    puVar2 = param_1 + 3;
    func_0x000107c278c4(puVar2,uVar11 + 0x10);
    *(undefined8 **)(uVar11 + 8) = puVar2;
    func_0x000105971280(param_1);
    if ((uVar11 & 1) != 0) {
      auStack_48[0] = 0;
    }
    func_0x00010b4ab8d8();
    func_0x00010b4ab918();
  }
  return;
}



/* Entry: 10b4aa7fc; end: 10b4aafb7;  */

undefined8 * FUN_10b4aa7fc(undefined8 param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 auStack_d0 [17];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = auStack_d0;
  FUN_10b4a77f0();
  if (*(char *)(param_3 + 0x28) == '\x01') {
    bVar2 = *(long *)(param_3 + 0x18) == 0;
    if ((*(byte *)(param_2 + 0x18) & 1) == 0) goto LAB_10b4aa8b4;
    if (*(long *)(param_3 + 0x18) == 0) goto LAB_10b4aa884;
    func_0x00010b4ab7d0();
    if (puVar3 != (undefined8 *)0x0) {
      bVar2 = false;
      goto LAB_10b4aa888;
    }
    if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
      puVar3 = (undefined8 *)0x0;
      goto LAB_10b4aa8d8;
    }
    bVar2 = false;
    puVar3 = (undefined8 *)0x0;
LAB_10b4aa90c:
    if ((*(byte *)(param_2 + 0x48) & 1) == 0) goto LAB_10b4aa960;
    if (bVar2) {
      bVar2 = true;
LAB_10b4aa944:
      *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 0x10;
      func_0x00010b4ab8ec();
      func_0x00010b4ab904();
      func_0x00010b4a7a18();
      goto LAB_10b4aa960;
    }
LAB_10b4aa930:
    func_0x00010b4ab7d0();
    if (puVar3 != (undefined8 *)0x0) {
      bVar2 = false;
      goto LAB_10b4aa944;
    }
    if ((*(byte *)(param_2 + 0x51) & 1) != 0) goto LAB_10b4aa984;
    bVar2 = false;
LAB_10b4aa9b8:
    if ((*(byte *)(param_2 + 0x58) & 1) == 0) goto LAB_10b4aaa14;
    if (bVar2) {
      bVar2 = true;
LAB_10b4aa9f0:
      *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 4;
      func_0x00010b4aa704((undefined4 *)(param_2 + 0x54));
      puVar3 = auStack_d0;
      FUN_10b4a7ab0(puVar3,7,*(undefined4 *)(param_2 + 0x54));
      goto LAB_10b4aaa14;
    }
LAB_10b4aa9dc:
    func_0x00010b4ab7d0();
    if (puVar3 != (undefined8 *)0x0) {
      bVar2 = false;
      goto LAB_10b4aa9f0;
    }
    puVar3 = (undefined8 *)0x0;
    if ((*(byte *)(param_2 + 0x78) & 1) != 0) goto LAB_10b4aaa38;
    bVar2 = false;
LAB_10b4aaa68:
    if ((*(byte *)(param_2 + 0x88) & 1) == 0) goto LAB_10b4aaac0;
    if (bVar2) {
      bVar2 = true;
LAB_10b4aaaa0:
      *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 1;
      func_0x00010b4ab8c8();
      uVar5 = *puVar3;
      puVar3 = auStack_d0;
      func_0x00010b4a79c0(puVar3,9,uVar5);
      goto LAB_10b4aaac0;
    }
LAB_10b4aaa8c:
    func_0x00010b4ab7d0();
    if (puVar3 != (undefined8 *)0x0) {
      bVar2 = false;
      goto LAB_10b4aaaa0;
    }
    if ((*(byte *)(param_2 + 0x98) & 1) != 0) {
      puVar3 = (undefined8 *)0x0;
      goto LAB_10b4aaae4;
    }
    bVar2 = false;
    puVar3 = (undefined8 *)0x0;
LAB_10b4aab18:
    if ((*(byte *)(param_2 + 0xb8) & 1) == 0) goto LAB_10b4aab6c;
    if (bVar2) {
      bVar2 = true;
LAB_10b4aab50:
      *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) | 0x40;
      func_0x00010b4ab8ec();
      func_0x00010b4ab904();
      func_0x00010b4a7a18();
      goto LAB_10b4aab6c;
    }
LAB_10b4aab3c:
    func_0x00010b4ab7d0();
    if (puVar3 != (undefined8 *)0x0) {
      bVar2 = false;
      goto LAB_10b4aab50;
    }
    if ((*(byte *)(param_2 + 0xc4) & 1) != 0) goto LAB_10b4aab90;
    bVar2 = false;
LAB_10b4aabc8:
    if ((*(byte *)(param_2 + 0xe0) & 1) == 0) goto LAB_10b4aac1c;
    if (bVar2) {
      bVar2 = true;
LAB_10b4aac00:
      *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) | 0x10;
      func_0x00010b4ab8ec();
      func_0x00010b4ab904();
      func_0x00010b4a7a18();
      goto LAB_10b4aac1c;
    }
LAB_10b4aabec:
    func_0x00010b4ab7d0();
    if (puVar3 != (undefined8 *)0x0) {
      bVar2 = false;
      goto LAB_10b4aac00;
    }
    if ((*(byte *)(param_2 + 0x100) & 1) != 0) goto LAB_10b4aac40;
    bVar2 = false;
LAB_10b4aac70:
    if ((*(byte *)(param_2 + 0x109) & 1) == 0) goto LAB_10b4aacc8;
    if (bVar2) {
      bVar2 = true;
LAB_10b4aaca8:
      *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) | 4;
      func_0x00010b4ab910();
      uVar1 = *(undefined1 *)puVar3;
      puVar3 = auStack_d0;
      func_0x00010b4a790c(puVar3,0xf,uVar1);
      goto LAB_10b4aacc8;
    }
LAB_10b4aac94:
    func_0x00010b4ab7d0();
    if (puVar3 != (undefined8 *)0x0) {
      bVar2 = false;
      goto LAB_10b4aaca8;
    }
    if ((*(byte *)(param_2 + 0x110) & 1) != 0) {
      puVar3 = (undefined8 *)0x0;
      goto LAB_10b4aacec;
    }
    bVar2 = false;
    puVar3 = (undefined8 *)0x0;
LAB_10b4aad24:
    if ((*(byte *)(param_2 + 0x120) & 1) == 0) goto LAB_10b4aad7c;
    if (bVar2) {
      bVar2 = true;
LAB_10b4aad5c:
      *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) | 1;
      func_0x00010b4ab8c8();
      uVar5 = *puVar3;
      puVar3 = auStack_d0;
      func_0x00010b4a79c0(puVar3,0x11,uVar5);
      goto LAB_10b4aad7c;
    }
LAB_10b4aad48:
    func_0x00010b4ab7d0();
    if (puVar3 != (undefined8 *)0x0) {
      bVar2 = false;
      goto LAB_10b4aad5c;
    }
    if ((*(byte *)(param_2 + 0x129) & 1) != 0) {
      puVar3 = (undefined8 *)0x0;
      goto LAB_10b4aada0;
    }
    bVar2 = false;
    puVar3 = (undefined8 *)0x0;
LAB_10b4aadd4:
    if ((*(byte *)(param_2 + 0x138) & 1) == 0) goto LAB_10b4aae2c;
    if (bVar2) {
      bVar2 = true;
LAB_10b4aae0c:
      *(byte *)(param_2 + 0x12) = *(byte *)(param_2 + 0x12) | 0x40;
      func_0x00010b4ab8c8();
      uVar5 = *puVar3;
      puVar3 = auStack_d0;
      func_0x00010b4a79c0(puVar3,0x13,uVar5);
      goto LAB_10b4aae2c;
    }
LAB_10b4aadf8:
    func_0x00010b4ab7d0();
    if (puVar3 != (undefined8 *)0x0) {
      bVar2 = false;
      goto LAB_10b4aae0c;
    }
    if ((*(byte *)(param_2 + 0x148) & 1) == 0) goto LAB_10b4aae6c;
    puVar3 = (undefined8 *)0x0;
LAB_10b4aae3c:
    func_0x00010b4ab7d0();
    if (puVar3 == (undefined8 *)0x0) goto LAB_10b4aae6c;
  }
  else {
    if ((*(byte *)(param_2 + 0x18) & 1) == 0) {
      bVar2 = true;
    }
    else {
LAB_10b4aa884:
      bVar2 = true;
LAB_10b4aa888:
      puVar4 = (undefined4 *)(param_2 + 0x14);
      *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 0x40;
      FUN_10b4aa6a4();
      puVar3 = auStack_d0;
      FUN_10b4a7ab0(puVar3,3,*puVar4);
    }
LAB_10b4aa8b4:
    if ((*(byte *)(param_2 + 0x28) & 1) == 0) goto LAB_10b4aa90c;
    if (bVar2) {
      bVar2 = true;
LAB_10b4aa8ec:
      *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 0x20;
      func_0x00010b4ab8c8();
      uVar5 = *puVar3;
      puVar3 = auStack_d0;
      func_0x00010b4a79c0(puVar3,4,uVar5);
      goto LAB_10b4aa90c;
    }
LAB_10b4aa8d8:
    func_0x00010b4ab7d0();
    if (puVar3 != (undefined8 *)0x0) {
      bVar2 = false;
      goto LAB_10b4aa8ec;
    }
    puVar3 = (undefined8 *)0x0;
    if ((*(byte *)(param_2 + 0x48) & 1) != 0) goto LAB_10b4aa930;
    bVar2 = false;
LAB_10b4aa960:
    if ((*(byte *)(param_2 + 0x51) & 1) == 0) goto LAB_10b4aa9b8;
    if (bVar2) {
      bVar2 = true;
LAB_10b4aa998:
      *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 8;
      func_0x00010b4ab910();
      uVar1 = *(undefined1 *)puVar3;
      puVar3 = auStack_d0;
      func_0x00010b4a790c(puVar3,6,uVar1);
      goto LAB_10b4aa9b8;
    }
LAB_10b4aa984:
    func_0x00010b4ab7d0();
    if (puVar3 != (undefined8 *)0x0) {
      bVar2 = false;
      goto LAB_10b4aa998;
    }
    if ((*(byte *)(param_2 + 0x58) & 1) != 0) {
      puVar3 = (undefined8 *)0x0;
      goto LAB_10b4aa9dc;
    }
    bVar2 = false;
    puVar3 = (undefined8 *)0x0;
LAB_10b4aaa14:
    if ((*(byte *)(param_2 + 0x78) & 1) == 0) goto LAB_10b4aaa68;
    if (bVar2) {
      bVar2 = true;
LAB_10b4aaa4c:
      *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 2;
      func_0x00010b4ab8ec();
      func_0x00010b4ab904();
      func_0x00010b4a7a18();
      goto LAB_10b4aaa68;
    }
LAB_10b4aaa38:
    func_0x00010b4ab7d0();
    if (puVar3 != (undefined8 *)0x0) {
      bVar2 = false;
      goto LAB_10b4aaa4c;
    }
    if ((*(byte *)(param_2 + 0x88) & 1) != 0) goto LAB_10b4aaa8c;
    bVar2 = false;
LAB_10b4aaac0:
    if ((*(byte *)(param_2 + 0x98) & 1) == 0) goto LAB_10b4aab18;
    if (bVar2) {
      bVar2 = true;
LAB_10b4aaaf8:
      *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) | 0x80;
      func_0x00010b4ab8c8();
      uVar5 = *puVar3;
      puVar3 = auStack_d0;
      func_0x00010b4a79c0(puVar3,10,uVar5);
      goto LAB_10b4aab18;
    }
LAB_10b4aaae4:
    func_0x00010b4ab7d0();
    if (puVar3 != (undefined8 *)0x0) {
      bVar2 = false;
      goto LAB_10b4aaaf8;
    }
    puVar3 = (undefined8 *)0x0;
    if ((*(byte *)(param_2 + 0xb8) & 1) != 0) goto LAB_10b4aab3c;
    bVar2 = false;
LAB_10b4aab6c:
    if ((*(byte *)(param_2 + 0xc4) & 1) == 0) goto LAB_10b4aabc8;
    if (bVar2) {
      bVar2 = true;
LAB_10b4aaba4:
      *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) | 0x20;
      func_0x00010b4aa74c((undefined4 *)(param_2 + 0xc0));
      puVar3 = auStack_d0;
      FUN_10b4a7ab0(puVar3,0xc,*(undefined4 *)(param_2 + 0xc0));
      goto LAB_10b4aabc8;
    }
LAB_10b4aab90:
    func_0x00010b4ab7d0();
    if (puVar3 != (undefined8 *)0x0) {
      bVar2 = false;
      goto LAB_10b4aaba4;
    }
    puVar3 = (undefined8 *)0x0;
    if ((*(byte *)(param_2 + 0xe0) & 1) != 0) goto LAB_10b4aabec;
    bVar2 = false;
LAB_10b4aac1c:
    if ((*(byte *)(param_2 + 0x100) & 1) == 0) goto LAB_10b4aac70;
    if (bVar2) {
      bVar2 = true;
LAB_10b4aac54:
      *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) | 8;
      func_0x00010b4ab8ec();
      func_0x00010b4ab904();
      func_0x00010b4a7a18();
      goto LAB_10b4aac70;
    }
LAB_10b4aac40:
    func_0x00010b4ab7d0();
    if (puVar3 != (undefined8 *)0x0) {
      bVar2 = false;
      goto LAB_10b4aac54;
    }
    if ((*(byte *)(param_2 + 0x109) & 1) != 0) goto LAB_10b4aac94;
    bVar2 = false;
LAB_10b4aacc8:
    if ((*(byte *)(param_2 + 0x110) & 1) == 0) goto LAB_10b4aad24;
    if (bVar2) {
      bVar2 = true;
LAB_10b4aad00:
      *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) | 2;
      func_0x00010b4aa7ac((undefined4 *)(param_2 + 0x10c));
      puVar3 = auStack_d0;
      FUN_10b4a7ab0(puVar3,0x10,*(undefined4 *)(param_2 + 0x10c));
      goto LAB_10b4aad24;
    }
LAB_10b4aacec:
    func_0x00010b4ab7d0();
    if (puVar3 != (undefined8 *)0x0) {
      bVar2 = false;
      goto LAB_10b4aad00;
    }
    if ((*(byte *)(param_2 + 0x120) & 1) != 0) {
      puVar3 = (undefined8 *)0x0;
      goto LAB_10b4aad48;
    }
    bVar2 = false;
    puVar3 = (undefined8 *)0x0;
LAB_10b4aad7c:
    if ((*(byte *)(param_2 + 0x129) & 1) == 0) goto LAB_10b4aadd4;
    if (bVar2) {
      bVar2 = true;
LAB_10b4aadb4:
      *(byte *)(param_2 + 0x12) = *(byte *)(param_2 + 0x12) | 0x80;
      func_0x00010b4ab910();
      uVar1 = *(undefined1 *)puVar3;
      puVar3 = auStack_d0;
      func_0x00010b4a790c(puVar3,0x12,uVar1);
      goto LAB_10b4aadd4;
    }
LAB_10b4aada0:
    func_0x00010b4ab7d0();
    if (puVar3 != (undefined8 *)0x0) {
      bVar2 = false;
      goto LAB_10b4aadb4;
    }
    if ((*(byte *)(param_2 + 0x138) & 1) != 0) {
      puVar3 = (undefined8 *)0x0;
      goto LAB_10b4aadf8;
    }
    bVar2 = false;
    puVar3 = (undefined8 *)0x0;
LAB_10b4aae2c:
    if ((*(byte *)(param_2 + 0x148) & 1) == 0) goto LAB_10b4aae6c;
    if (!bVar2) goto LAB_10b4aae3c;
  }
  *(byte *)(param_2 + 0x12) = *(byte *)(param_2 + 0x12) | 0x20;
  func_0x00010b4ab8c8();
  func_0x00010b4a79c0(auStack_d0,0x14,*puVar3);
LAB_10b4aae6c:
  FUN_10b4a7ad8(auStack_d0,1,param_2 + 0x10,3);
  FUN_10b4a7854(param_1,auStack_d0);
  puVar3 = auStack_d0;
  FUN_10b4a8238();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar3 = auStack_d0;
    FUN_10b4a8238();
    func_0x00010b4ab884();
    *puVar3 = &PTR_FUN_110cee570;
    puVar3[1] = &PTR_FUN_110cee5d8;
    func_0x000107c279a4(puVar3 + 0x1d);
    func_0x000107c279a4(puVar3 + 0x19);
    func_0x000107c279a4(puVar3 + 0x14);
    func_0x000107c279a4(puVar3 + 0xc);
    func_0x000107c279a4(puVar3 + 6);
    return puVar3;
  }
  return puVar3;
}



/* Entry: 10b4aafb8; end: 10b4aafbb;  */

undefined8 * FUN_10b4aafb8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cee570;
  param_1[1] = &PTR_FUN_110cee5d8;
  func_0x000107c279a4(param_1 + 0x1d);
  func_0x000107c279a4(param_1 + 0x19);
  func_0x000107c279a4(param_1 + 0x14);
  func_0x000107c279a4(param_1 + 0xc);
  func_0x000107c279a4(param_1 + 6);
  return param_1;
}



/* Entry: 10b4aafbc; end: 10b4aafcf;  */

void FUN_10b4aafbc(void)

{
  FUN_10b4aafd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4aafd0; end: 10b4ab01f;  */

undefined8 * FUN_10b4aafd0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cee570;
  param_1[1] = &PTR_FUN_110cee5d8;
  func_0x000107c279a4(param_1 + 0x1d);
  func_0x000107c279a4(param_1 + 0x19);
  func_0x000107c279a4(param_1 + 0x14);
  func_0x000107c279a4(param_1 + 0xc);
  func_0x000107c279a4(param_1 + 6);
  return param_1;
}



/* Entry: 10b4ab020; end: 10b4ab037;  */

void FUN_10b4ab020(void)

{
  FUN_10b4ab038();
  return;
}



/* Entry: 10b4ab038; end: 10b4ab07b;  */

void FUN_10b4ab038(undefined8 param_1)

{
  undefined8 uStack_38;
  
  func_0x00010b4ab8a4();
  FUN_10b4ab07c();
  func_0x00010b4ab87c(param_1,uStack_38);
  func_0x00010b4ab8b0();
  func_0x00010b4ab848();
  func_0x00010b4ab898();
  return;
}



/* Entry: 10b4ab07c; end: 10b4ab0b7;  */

void FUN_10b4ab07c(undefined8 param_1)

{
  long unaff_x21;
  
  FUN_10b4ab77c();
  func_0x00010b4ab7bc();
  func_0x00010b4ab88c();
  FUN_10b4ab0b8();
  func_0x00010b4ab798();
  *(undefined8 *)(unaff_x21 + 8) = param_1;
  return;
}



/* Entry: 10b4ab0b8; end: 10b4ab0d3;  */

void FUN_10b4ab0b8(void)

{
  func_0x00010b4ab8fc();
  func_0x00010b4ab800();
  return;
}



/* Entry: 10b4ab0d4; end: 10b4ab0eb;  */

void FUN_10b4ab0d4(void)

{
  FUN_10b4ab0ec();
  return;
}



/* Entry: 10b4ab0ec; end: 10b4ab12f;  */

void FUN_10b4ab0ec(undefined8 param_1)

{
  undefined8 uStack_38;
  
  func_0x00010b4ab8a4();
  FUN_10b4ab130();
  func_0x00010b4ab87c(param_1,uStack_38);
  func_0x00010b4ab8b0();
  func_0x00010b4ab848();
  func_0x00010b4ab898();
  return;
}



/* Entry: 10b4ab130; end: 10b4ab16b;  */

void FUN_10b4ab130(undefined8 param_1)

{
  long unaff_x21;
  
  FUN_10b4ab77c();
  func_0x00010b4ab7bc();
  func_0x00010b4ab88c();
  FUN_10b4ab16c();
  func_0x00010b4ab798();
  *(undefined8 *)(unaff_x21 + 8) = param_1;
  return;
}



/* Entry: 10b4ab16c; end: 10b4ab187;  */

void FUN_10b4ab16c(void)

{
  func_0x00010b4ab8fc();
  func_0x00010b4ab800();
  return;
}



/* Entry: 10b4ab188; end: 10b4ab19f;  */

void FUN_10b4ab188(void)

{
  FUN_10b4ab1a0();
  return;
}



/* Entry: 10b4ab1a0; end: 10b4ab1e3;  */

void FUN_10b4ab1a0(undefined8 param_1)

{
  undefined8 uStack_38;
  
  func_0x00010b4ab8a4();
  FUN_10b4ab1e4();
  func_0x00010b4ab87c(param_1,uStack_38);
  func_0x00010b4ab8b0();
  func_0x00010b4ab848();
  func_0x00010b4ab898();
  return;
}



/* Entry: 10b4ab1e4; end: 10b4ab21f;  */

void FUN_10b4ab1e4(undefined8 param_1)

{
  long unaff_x21;
  
  FUN_10b4ab77c();
  func_0x00010b4ab7bc();
  func_0x00010b4ab88c();
  FUN_10b4ab220();
  func_0x00010b4ab798();
  *(undefined8 *)(unaff_x21 + 8) = param_1;
  return;
}



/* Entry: 10b4ab220; end: 10b4ab24b;  */

void FUN_10b4ab220(void)

{
  func_0x00010b4ab828();
  func_0x00010b4ab920();
  return;
}



/* Entry: 10b4ab24c; end: 10b4ab263;  */

void FUN_10b4ab24c(void)

{
  FUN_10b4ab264();
  return;
}



/* Entry: 10b4ab264; end: 10b4ab2a7;  */

void FUN_10b4ab264(undefined8 param_1)

{
  undefined8 uStack_38;
  
  func_0x00010b4ab8a4();
  FUN_10b4ab2a8();
  func_0x00010b4ab87c(param_1,uStack_38);
  func_0x00010b4ab8b0();
  func_0x00010b4ab848();
  func_0x00010b4ab898();
  return;
}



/* Entry: 10b4ab2a8; end: 10b4ab2e3;  */

void FUN_10b4ab2a8(undefined8 param_1)

{
  long unaff_x21;
  
  FUN_10b4ab77c();
  func_0x00010b4ab7bc();
  func_0x00010b4ab88c();
  FUN_10b4ab2e4();
  func_0x00010b4ab798();
  *(undefined8 *)(unaff_x21 + 8) = param_1;
  return;
}



/* Entry: 10b4ab2e4; end: 10b4ab30b;  */

void FUN_10b4ab2e4(void)

{
  func_0x00010b4ab828();
  func_0x00010b4ab8e0();
  return;
}



/* Entry: 10b4ab30c; end: 10b4ab323;  */

void FUN_10b4ab30c(void)

{
  FUN_10b4ab324();
  return;
}



/* Entry: 10b4ab324; end: 10b4ab367;  */

void FUN_10b4ab324(undefined8 param_1)

{
  undefined8 uStack_38;
  
  func_0x00010b4ab8a4();
  FUN_10b4ab368();
  func_0x00010b4ab87c(param_1,uStack_38);
  func_0x00010b4ab8b0();
  func_0x00010b4ab848();
  func_0x00010b4ab898();
  return;
}



/* Entry: 10b4ab368; end: 10b4ab3a3;  */

void FUN_10b4ab368(undefined8 param_1)

{
  long unaff_x21;
  
  FUN_10b4ab77c();
  func_0x00010b4ab7bc();
  func_0x00010b4ab88c();
  FUN_10b4ab3a4();
  func_0x00010b4ab798();
  *(undefined8 *)(unaff_x21 + 8) = param_1;
  return;
}



/* Entry: 10b4ab3a4; end: 10b4ab3cf;  */

void FUN_10b4ab3a4(void)

{
  func_0x00010b4ab828();
  func_0x00010b4ab920();
  return;
}



/* Entry: 10b4ab3d0; end: 10b4ab3e7;  */

void FUN_10b4ab3d0(void)

{
  FUN_10b4ab3e8();
  return;
}



/* Entry: 10b4ab3e8; end: 10b4ab42b;  */

void FUN_10b4ab3e8(undefined8 param_1)

{
  undefined8 uStack_38;
  
  func_0x00010b4ab8a4();
  FUN_10b4ab42c();
  func_0x00010b4ab87c(param_1,uStack_38);
  func_0x00010b4ab8b0();
  func_0x00010b4ab848();
  func_0x00010b4ab898();
  return;
}



/* Entry: 10b4ab42c; end: 10b4ab467;  */

void FUN_10b4ab42c(undefined8 param_1)

{
  long unaff_x21;
  
  FUN_10b4ab77c();
  func_0x00010b4ab7bc();
  func_0x00010b4ab88c();
  FUN_10b4ab468();
  func_0x00010b4ab798();
  *(undefined8 *)(unaff_x21 + 8) = param_1;
  return;
}



/* Entry: 10b4ab468; end: 10b4ab48f;  */

void FUN_10b4ab468(void)

{
  func_0x00010b4ab828();
  func_0x00010b4ab8e0();
  return;
}



/* Entry: 10b4ab490; end: 10b4ab4a7;  */

void FUN_10b4ab490(void)

{
  FUN_10b4ab4a8();
  return;
}



/* Entry: 10b4ab4a8; end: 10b4ab4eb;  */

void FUN_10b4ab4a8(undefined8 param_1)

{
  undefined8 uStack_38;
  
  func_0x00010b4ab8a4();
  FUN_10b4ab4ec();
  func_0x00010b4ab87c(param_1,uStack_38);
  func_0x00010b4ab8b0();
  func_0x00010b4ab848();
  func_0x00010b4ab898();
  return;
}



/* Entry: 10b4ab4ec; end: 10b4ab527;  */

void FUN_10b4ab4ec(undefined8 param_1)

{
  long unaff_x21;
  
  FUN_10b4ab77c();
  func_0x00010b4ab7bc();
  func_0x00010b4ab88c();
  FUN_10b4ab528();
  func_0x00010b4ab798();
  *(undefined8 *)(unaff_x21 + 8) = param_1;
  return;
}



/* Entry: 10b4ab528; end: 10b4ab54f;  */

void FUN_10b4ab528(void)

{
  func_0x00010b4ab828();
  func_0x00010b4ab8e0();
  return;
}



/* Entry: 10b4ab550; end: 10b4ab567;  */

void FUN_10b4ab550(void)

{
  FUN_10b4ab568();
  return;
}



/* Entry: 10b4ab568; end: 10b4ab5ab;  */

void FUN_10b4ab568(undefined8 param_1)

{
  undefined8 uStack_38;
  
  func_0x00010b4ab8a4();
  FUN_10b4ab5ac();
  func_0x00010b4ab87c(param_1,uStack_38);
  func_0x00010b4ab8b0();
  func_0x00010b4ab848();
  func_0x00010b4ab898();
  return;
}



/* Entry: 10b4ab5ac; end: 10b4ab5e7;  */

void FUN_10b4ab5ac(undefined8 param_1)

{
  long unaff_x21;
  
  FUN_10b4ab77c();
  func_0x00010b4ab7bc();
  func_0x00010b4ab88c();
  FUN_10b4ab5e8();
  func_0x00010b4ab798();
  *(undefined8 *)(unaff_x21 + 8) = param_1;
  return;
}



/* Entry: 10b4ab5e8; end: 10b4ab613;  */

void FUN_10b4ab5e8(void)

{
  func_0x00010b4ab828();
  func_0x00010b4ab920();
  return;
}



/* Entry: 10b4ab614; end: 10b4ab62b;  */

void FUN_10b4ab614(void)

{
  FUN_10b4ab62c();
  return;
}



/* Entry: 10b4ab62c; end: 10b4ab66f;  */

void FUN_10b4ab62c(undefined8 param_1)

{
  undefined8 uStack_38;
  
  func_0x00010b4ab8a4();
  FUN_10b4ab670();
  func_0x00010b4ab87c(param_1,uStack_38);
  func_0x00010b4ab8b0();
  func_0x00010b4ab848();
  func_0x00010b4ab898();
  return;
}



/* Entry: 10b4ab670; end: 10b4ab6ab;  */

void FUN_10b4ab670(undefined8 param_1)

{
  long unaff_x21;
  
  FUN_10b4ab77c();
  func_0x00010b4ab7bc();
  func_0x00010b4ab88c();
  FUN_10b4ab6ac();
  func_0x00010b4ab798();
  *(undefined8 *)(unaff_x21 + 8) = param_1;
  return;
}



/* Entry: 10b4ab6ac; end: 10b4ab6c7;  */

void FUN_10b4ab6ac(void)

{
  func_0x00010b4ab8fc();
  func_0x00010b4ab800();
  return;
}



/* Entry: 10b4ab6c8; end: 10b4ab6df;  */

void FUN_10b4ab6c8(void)

{
  FUN_10b4ab6e0();
  return;
}



/* Entry: 10b4ab6e0; end: 10b4ab723;  */

void FUN_10b4ab6e0(undefined8 param_1)

{
  undefined8 uStack_38;
  
  func_0x00010b4ab8a4();
  FUN_10b4ab724();
  func_0x00010b4ab87c(param_1,uStack_38);
  func_0x00010b4ab8b0();
  func_0x00010b4ab848();
  func_0x00010b4ab898();
  return;
}



/* Entry: 10b4ab724; end: 10b4ab75f;  */

void FUN_10b4ab724(undefined8 param_1)

{
  long unaff_x21;
  
  FUN_10b4ab77c();
  func_0x00010b4ab7bc();
  func_0x00010b4ab88c();
  FUN_10b4ab760();
  func_0x00010b4ab798();
  *(undefined8 *)(unaff_x21 + 8) = param_1;
  return;
}



/* Entry: 10b4ab760; end: 10b4ab77b;  */

void FUN_10b4ab760(void)

{
  func_0x00010b4ab8fc();
  func_0x00010b4ab800();
  return;
}



/* Entry: 10b4ab77c; end: 10b4ab973;  */

void FUN_10b4ab77c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x40);
  return;
}



/* Entry: 10b4ab974; end: 10b4abe43;  */

void FUN_10b4ab974(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  int *piVar3;
  byte *pbVar4;
  ulong uVar5;
  undefined1 *puVar6;
  ulong unaff_x21;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong auStack_48 [3];
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if (*(char *)(param_2 + 0x30) == '\x01') {
    lVar1 = param_2 + 0x18;
    func_0x00010549026c();
    func_0x00010b4acbb8();
    func_0x00010b4acb60();
    func_0x000107c278b8();
    func_0x00010b4acc00();
    func_0x00010b4acb38();
    *(long *)(unaff_x21 + 8) = lVar1;
    uVar5 = auStack_48[0];
    func_0x00010b4acbc0();
    if ((uVar5 & 1) != 0) {
      auStack_48[0] = 0;
    }
    func_0x00010b4acbe8();
  }
  if (*(char *)(param_2 + 0x50) == '\x01') {
    lVar1 = param_2 + 0x38;
    func_0x00010549026c();
    func_0x00010b4acbb8();
    func_0x00010b4acb60();
    func_0x000107c278b8();
    func_0x00010b4acc00();
    func_0x00010b4acb38();
    *(long *)(unaff_x21 + 8) = lVar1;
    uVar5 = auStack_48[0];
    func_0x00010b4acbc0();
    if ((uVar5 & 1) != 0) {
      auStack_48[0] = 0;
    }
    func_0x00010b4acbe8();
  }
  if (*(char *)(param_2 + 0x70) == '\x01') {
    lVar1 = param_2 + 0x58;
    func_0x00010549026c(lVar1);
    FUN_10b4abe44(param_1,&DAT_10f30fad7,lVar1);
  }
  if (*(char *)(param_2 + 0x80) == '\x01') {
    puVar2 = (undefined8 *)(param_2 + 0x78);
    func_0x0001072833b8();
    func_0x00010b4acc18(*puVar2);
    func_0x00010b4acbd0();
    func_0x00010b4abe5c();
    func_0x00010b4acbf0();
  }
  if (*(char *)(param_2 + 0x90) == '\x01') {
    puVar2 = (undefined8 *)(param_2 + 0x88);
    func_0x0001072833b8();
    func_0x00010b4acc18(*puVar2);
    func_0x00010b4acbd0();
    func_0x00010b4abe5c();
    func_0x00010b4acbf0();
  }
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    puVar2 = (undefined8 *)(param_2 + 0x98);
    func_0x0001072833b8();
    func_0x00010b4acc18(*puVar2);
    func_0x00010b4acb9c();
    func_0x00010b4acbf0();
  }
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    puVar2 = (undefined8 *)(param_2 + 0xa8);
    func_0x0001072833b8();
    func_0x00010b4acc18(*puVar2);
    func_0x00010b4acb9c();
    func_0x00010b4acbf0();
  }
  if (*(char *)(param_2 + 0xbc) == '\x01') {
    piVar3 = (int *)(param_2 + 0xb8);
    FUN_10b4aa6a4();
    func_0x00010b4acc8c((long)*piVar3);
    func_0x00010b4acbd0();
    func_0x00010b4abe74();
  }
  if (*(char *)(param_2 + 0xd8) == '\x01') {
    lVar1 = param_2 + 0xc0;
    func_0x00010549026c(lVar1);
    func_0x00010b4abe8c(param_1,&DAT_10f77155e,lVar1);
  }
  if (*(char *)(param_2 + 0xf8) == '\x01') {
    lVar1 = param_2 + 0xe0;
    func_0x00010549026c(lVar1);
    func_0x00010b4aa71c(param_1,&DAT_10f771570,lVar1);
  }
  if (*(char *)(param_2 + 0x101) == '\x01') {
    pbVar4 = (byte *)(param_2 + 0x100);
    func_0x000107c29334();
    uVar5 = (ulong)*pbVar4;
    __ZNSt3__19to_stringEi(&uStack_60);
    func_0x00010b4acbb8();
    func_0x00010b4acb60();
    func_0x000107c278b8();
    *(undefined8 *)(unaff_x21 + 0x30) = uStack_58;
    *(undefined8 *)(unaff_x21 + 0x28) = uStack_60;
    *(undefined8 *)(unaff_x21 + 0x38) = uStack_50;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    func_0x00010b4acb38();
    *(ulong *)(unaff_x21 + 8) = uVar5;
    uVar5 = unaff_x21;
    func_0x000105971280(param_1);
    if ((uVar5 & 1) != 0) {
      auStack_48[0] = 0;
    }
    func_0x00010b4acbe8();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_60);
  }
  if (*(char *)(param_2 + 0x108) == '\x01') {
    piVar3 = (int *)(param_2 + 0x104);
    func_0x00010b4abebc();
    func_0x00010b4acc8c((long)*piVar3);
    func_0x00010b4acbd0();
    func_0x00010b4abea4();
  }
  if (*(char *)(param_2 + 0x118) == '\x01') {
    puVar2 = (undefined8 *)(param_2 + 0x110);
    func_0x0001072833b8();
    func_0x00010b4acc18(*puVar2);
    func_0x00010b4acb9c();
    func_0x00010b4acbf0();
  }
  if (*(char *)(param_2 + 0x124) == '\x01') {
    piVar3 = (int *)(param_2 + 0x120);
    func_0x00010b4abed4();
    func_0x00010b4acc8c((long)*piVar3);
    func_0x00010b4acbd0();
    func_0x00010b4aa734();
  }
  if (*(char *)(param_2 + 300) == '\x01') {
    piVar3 = (int *)(param_2 + 0x128);
    func_0x00010b4abeec();
    func_0x00010b4acc8c((long)*piVar3);
    func_0x00010b4acbd0();
    func_0x00010b4aa734();
  }
  if (*(char *)(param_2 + 0x148) == '\x01') {
    lVar1 = param_2 + 0x130;
    func_0x00010549026c();
    func_0x00010b4acbb8();
    func_0x00010b4acb60();
    func_0x000107c278b8();
    func_0x00010b4acc00();
    func_0x00010b4acb38();
    *(long *)(unaff_x21 + 8) = lVar1;
    uVar5 = auStack_48[0];
    func_0x00010b4acbc0();
    if ((uVar5 & 1) != 0) {
      auStack_48[0] = 0;
    }
    func_0x00010b4acbe8();
  }
  if (*(char *)(param_2 + 0x168) == '\x01') {
    lVar1 = param_2 + 0x150;
    func_0x00010549026c(lVar1);
    func_0x00010b4a7eb8(param_1,&DAT_10f7715b1,lVar1);
  }
  if (*(char *)(param_2 + 0x171) == '\x01') {
    puVar6 = (undefined1 *)(param_2 + 0x170);
    func_0x000107c29334();
    __ZNSt3__19to_stringEi(auStack_48,*puVar6);
    func_0x00010b4acb9c();
    func_0x00010b4acbf0();
  }
  return;
}



/* Entry: 10b4abe44; end: 10b4abf03;  */

void FUN_10b4abe44(void)

{
  FUN_10b4ac730();
  return;
}



/* Entry: 10b4abf04; end: 10b4abf0b;  */

void FUN_10b4abf04(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  int *piVar3;
  byte *pbVar4;
  ulong uVar5;
  undefined1 *puVar6;
  ulong unaff_x21;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong auStack_48 [3];
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if (*(char *)(param_2 + 0x28) == '\x01') {
    lVar1 = param_2 + 0x10;
    func_0x00010549026c();
    func_0x00010b4acbb8();
    func_0x00010b4acb60();
    func_0x000107c278b8();
    func_0x00010b4acc00();
    func_0x00010b4acb38();
    *(long *)(unaff_x21 + 8) = lVar1;
    uVar5 = auStack_48[0];
    func_0x00010b4acbc0();
    if ((uVar5 & 1) != 0) {
      auStack_48[0] = 0;
    }
    func_0x00010b4acbe8();
  }
  if (*(char *)(param_2 + 0x48) == '\x01') {
    lVar1 = param_2 + 0x30;
    func_0x00010549026c();
    func_0x00010b4acbb8();
    func_0x00010b4acb60();
    func_0x000107c278b8();
    func_0x00010b4acc00();
    func_0x00010b4acb38();
    *(long *)(unaff_x21 + 8) = lVar1;
    uVar5 = auStack_48[0];
    func_0x00010b4acbc0();
    if ((uVar5 & 1) != 0) {
      auStack_48[0] = 0;
    }
    func_0x00010b4acbe8();
  }
  if (*(char *)(param_2 + 0x68) == '\x01') {
    lVar1 = param_2 + 0x50;
    func_0x00010549026c(lVar1);
    FUN_10b4abe44(param_1,&DAT_10f30fad7,lVar1);
  }
  if (*(char *)(param_2 + 0x78) == '\x01') {
    puVar2 = (undefined8 *)(param_2 + 0x70);
    func_0x0001072833b8();
    func_0x00010b4acc18(*puVar2);
    func_0x00010b4acbd0();
    func_0x00010b4abe5c();
    func_0x00010b4acbf0();
  }
  if (*(char *)(param_2 + 0x88) == '\x01') {
    puVar2 = (undefined8 *)(param_2 + 0x80);
    func_0x0001072833b8();
    func_0x00010b4acc18(*puVar2);
    func_0x00010b4acbd0();
    func_0x00010b4abe5c();
    func_0x00010b4acbf0();
  }
  if (*(char *)(param_2 + 0x98) == '\x01') {
    puVar2 = (undefined8 *)(param_2 + 0x90);
    func_0x0001072833b8();
    func_0x00010b4acc18(*puVar2);
    func_0x00010b4acb9c();
    func_0x00010b4acbf0();
  }
  if (*(char *)(param_2 + 0xa8) == '\x01') {
    puVar2 = (undefined8 *)(param_2 + 0xa0);
    func_0x0001072833b8();
    func_0x00010b4acc18(*puVar2);
    func_0x00010b4acb9c();
    func_0x00010b4acbf0();
  }
  if (*(char *)(param_2 + 0xb4) == '\x01') {
    piVar3 = (int *)(param_2 + 0xb0);
    FUN_10b4aa6a4();
    func_0x00010b4acc8c((long)*piVar3);
    func_0x00010b4acbd0();
    func_0x00010b4abe74();
  }
  if (*(char *)(param_2 + 0xd0) == '\x01') {
    lVar1 = param_2 + 0xb8;
    func_0x00010549026c(lVar1);
    func_0x00010b4abe8c(param_1,&DAT_10f77155e,lVar1);
  }
  if (*(char *)(param_2 + 0xf0) == '\x01') {
    lVar1 = param_2 + 0xd8;
    func_0x00010549026c(lVar1);
    func_0x00010b4aa71c(param_1,&DAT_10f771570,lVar1);
  }
  if (*(char *)(param_2 + 0xf9) == '\x01') {
    pbVar4 = (byte *)(param_2 + 0xf8);
    func_0x000107c29334();
    uVar5 = (ulong)*pbVar4;
    __ZNSt3__19to_stringEi(&uStack_60);
    func_0x00010b4acbb8();
    func_0x00010b4acb60();
    func_0x000107c278b8();
    *(undefined8 *)(unaff_x21 + 0x30) = uStack_58;
    *(undefined8 *)(unaff_x21 + 0x28) = uStack_60;
    *(undefined8 *)(unaff_x21 + 0x38) = uStack_50;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    func_0x00010b4acb38();
    *(ulong *)(unaff_x21 + 8) = uVar5;
    uVar5 = unaff_x21;
    func_0x000105971280(param_1);
    if ((uVar5 & 1) != 0) {
      auStack_48[0] = 0;
    }
    func_0x00010b4acbe8();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_60);
  }
  if (*(char *)(param_2 + 0x100) == '\x01') {
    piVar3 = (int *)(param_2 + 0xfc);
    func_0x00010b4abebc();
    func_0x00010b4acc8c((long)*piVar3);
    func_0x00010b4acbd0();
    func_0x00010b4abea4();
  }
  if (*(char *)(param_2 + 0x110) == '\x01') {
    puVar2 = (undefined8 *)(param_2 + 0x108);
    func_0x0001072833b8();
    func_0x00010b4acc18(*puVar2);
    func_0x00010b4acb9c();
    func_0x00010b4acbf0();
  }
  if (*(char *)(param_2 + 0x11c) == '\x01') {
    piVar3 = (int *)(param_2 + 0x118);
    func_0x00010b4abed4();
    func_0x00010b4acc8c((long)*piVar3);
    func_0x00010b4acbd0();
    func_0x00010b4aa734();
  }
  if (*(char *)(param_2 + 0x124) == '\x01') {
    piVar3 = (int *)(param_2 + 0x120);
    func_0x00010b4abeec();
    func_0x00010b4acc8c((long)*piVar3);
    func_0x00010b4acbd0();
    func_0x00010b4aa734();
  }
  if (*(char *)(param_2 + 0x140) == '\x01') {
    lVar1 = param_2 + 0x128;
    func_0x00010549026c();
    func_0x00010b4acbb8();
    func_0x00010b4acb60();
    func_0x000107c278b8();
    func_0x00010b4acc00();
    func_0x00010b4acb38();
    *(long *)(unaff_x21 + 8) = lVar1;
    uVar5 = auStack_48[0];
    func_0x00010b4acbc0();
    if ((uVar5 & 1) != 0) {
      auStack_48[0] = 0;
    }
    func_0x00010b4acbe8();
  }
  if (*(char *)(param_2 + 0x160) == '\x01') {
    lVar1 = param_2 + 0x148;
    func_0x00010549026c(lVar1);
    func_0x00010b4a7eb8(param_1,&DAT_10f7715b1,lVar1);
  }
  if (*(char *)(param_2 + 0x169) == '\x01') {
    puVar6 = (undefined1 *)(param_2 + 0x168);
    func_0x000107c29334();
    __ZNSt3__19to_stringEi(auStack_48,*puVar6);
    func_0x00010b4acb9c();
    func_0x00010b4acbf0();
  }
  return;
}



/* Entry: 10b4abf0c; end: 10b4ac6b7;  */

undefined8 * FUN_10b4abf0c(undefined8 param_1,long param_2,long param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 auStack_d0 [17];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = auStack_d0;
  FUN_10b4a77f0();
  if (*(char *)(param_3 + 0x28) == '\x01') {
    bVar1 = *(long *)(param_3 + 0x18) == 0;
    if ((*(byte *)(param_2 + 0x30) & 1) == 0) goto LAB_10b4abfb4;
    if (*(long *)(param_3 + 0x18) == 0) goto LAB_10b4abf94;
    func_0x00010b4acb08();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4abf98;
    }
    if ((*(byte *)(param_2 + 0x50) & 1) != 0) goto LAB_10b4abfd8;
    bVar1 = false;
LAB_10b4ac000:
    if ((*(byte *)(param_2 + 0x70) & 1) == 0) goto LAB_10b4ac054;
    if (bVar1) {
      bVar1 = true;
LAB_10b4ac038:
      *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 0x80;
      func_0x00010b4acbc8();
      func_0x00010b4acc30();
      func_0x00010b4a7a18();
      goto LAB_10b4ac054;
    }
LAB_10b4ac024:
    func_0x00010b4acb08();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4ac038;
    }
    if ((*(byte *)(param_2 + 0x80) & 1) != 0) goto LAB_10b4ac078;
    bVar1 = false;
LAB_10b4ac0ac:
    if ((*(byte *)(param_2 + 0x90) & 1) == 0) goto LAB_10b4ac104;
    if (bVar1) {
      bVar1 = true;
LAB_10b4ac0e4:
      *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 8;
      func_0x00010b4acc20();
      uVar4 = *puVar2;
      puVar2 = auStack_d0;
      func_0x00010b4a79c0(puVar2,6,uVar4);
      goto LAB_10b4ac104;
    }
LAB_10b4ac0d0:
    func_0x00010b4acb08();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4ac0e4;
    }
    if ((*(byte *)(param_2 + 0xa0) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4ac128;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4ac15c:
    if ((*(byte *)(param_2 + 0xb0) & 1) == 0) goto LAB_10b4ac1b4;
    if (bVar1) {
      bVar1 = true;
LAB_10b4ac194:
      *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 2;
      func_0x00010b4acc20();
      uVar4 = *puVar2;
      puVar2 = auStack_d0;
      func_0x00010b4a79c0(puVar2,8,uVar4);
      goto LAB_10b4ac1b4;
    }
LAB_10b4ac180:
    func_0x00010b4acb08();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4ac194;
    }
    if ((*(byte *)(param_2 + 0xbc) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4ac1d8;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4ac210:
    if ((*(byte *)(param_2 + 0xd8) & 1) == 0) goto LAB_10b4ac264;
    if (bVar1) {
      bVar1 = true;
LAB_10b4ac248:
      *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) | 0x80;
      func_0x00010b4acbc8();
      func_0x00010b4acc30();
      func_0x00010b4a7a18();
      goto LAB_10b4ac264;
    }
LAB_10b4ac234:
    func_0x00010b4acb08();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4ac248;
    }
    if ((*(byte *)(param_2 + 0xf8) & 1) != 0) goto LAB_10b4ac288;
    bVar1 = false;
LAB_10b4ac2b8:
    if ((*(byte *)(param_2 + 0x101) & 1) == 0) goto LAB_10b4ac314;
    if (bVar1) {
      bVar1 = true;
LAB_10b4ac2f0:
      puVar5 = (undefined1 *)(param_2 + 0x100);
      *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) | 0x20;
      func_0x000107c29334();
      puVar2 = auStack_d0;
      func_0x00010b4a790c(puVar2,0xc,*puVar5);
      goto LAB_10b4ac314;
    }
LAB_10b4ac2dc:
    func_0x00010b4acb08();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4ac2f0;
    }
    if ((*(byte *)(param_2 + 0x108) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4ac338;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4ac370:
    if ((*(byte *)(param_2 + 0x118) & 1) == 0) goto LAB_10b4ac3c8;
    if (bVar1) {
      bVar1 = true;
LAB_10b4ac3a8:
      *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) | 8;
      func_0x00010b4acc20();
      uVar4 = *puVar2;
      puVar2 = auStack_d0;
      func_0x00010b4a79c0(puVar2,0xe,uVar4);
      goto LAB_10b4ac3c8;
    }
LAB_10b4ac394:
    func_0x00010b4acb08();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4ac3a8;
    }
    if ((*(byte *)(param_2 + 0x124) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4ac3ec;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4ac424:
    if ((*(byte *)(param_2 + 300) & 1) == 0) goto LAB_10b4ac480;
    if (bVar1) {
      bVar1 = true;
LAB_10b4ac45c:
      *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) | 2;
      func_0x00010b4abeec((undefined4 *)(param_2 + 0x128));
      puVar2 = auStack_d0;
      FUN_10b4a7ab0(puVar2,0x10,*(undefined4 *)(param_2 + 0x128));
      goto LAB_10b4ac480;
    }
LAB_10b4ac448:
    func_0x00010b4acb08();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4ac45c;
    }
    puVar2 = (undefined8 *)0x0;
    if ((*(byte *)(param_2 + 0x148) & 1) != 0) goto LAB_10b4ac4a4;
    bVar1 = false;
LAB_10b4ac4d4:
    if ((*(byte *)(param_2 + 0x168) & 1) == 0) goto LAB_10b4ac528;
    if (bVar1) {
      bVar1 = true;
LAB_10b4ac50c:
      *(byte *)(param_2 + 0x12) = *(byte *)(param_2 + 0x12) | 0x80;
      func_0x00010b4acbc8();
      func_0x00010b4acc30();
      func_0x00010b4a7a18();
      goto LAB_10b4ac528;
    }
LAB_10b4ac4f8:
    func_0x00010b4acb08();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4ac50c;
    }
    if ((*(byte *)(param_2 + 0x171) & 1) == 0) goto LAB_10b4ac56c;
LAB_10b4ac538:
    func_0x00010b4acb08();
    if (puVar2 == (undefined8 *)0x0) goto LAB_10b4ac56c;
  }
  else {
    if ((*(byte *)(param_2 + 0x30) & 1) == 0) {
      bVar1 = true;
    }
    else {
LAB_10b4abf94:
      bVar1 = true;
LAB_10b4abf98:
      func_0x00010b4acc54();
      func_0x00010b4acbc8();
      func_0x00010b4acc30();
      func_0x00010b4a7a18();
    }
LAB_10b4abfb4:
    if ((*(byte *)(param_2 + 0x50) & 1) == 0) goto LAB_10b4ac000;
    if (bVar1) {
      bVar1 = true;
LAB_10b4abfec:
      func_0x00010b4acc54();
      func_0x00010b4acbc8();
      func_0x00010b4acc30();
      func_0x00010b4a7a18();
      goto LAB_10b4ac000;
    }
LAB_10b4abfd8:
    func_0x00010b4acb08();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4abfec;
    }
    if ((*(byte *)(param_2 + 0x70) & 1) != 0) goto LAB_10b4ac024;
    bVar1 = false;
LAB_10b4ac054:
    if ((*(byte *)(param_2 + 0x80) & 1) == 0) goto LAB_10b4ac0ac;
    if (bVar1) {
      bVar1 = true;
LAB_10b4ac08c:
      *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 0x10;
      func_0x00010b4acc20();
      uVar4 = *puVar2;
      puVar2 = auStack_d0;
      func_0x00010b4a79c0(puVar2,5,uVar4);
      goto LAB_10b4ac0ac;
    }
LAB_10b4ac078:
    func_0x00010b4acb08();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4ac08c;
    }
    if ((*(byte *)(param_2 + 0x90) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4ac0d0;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4ac104:
    if ((*(byte *)(param_2 + 0xa0) & 1) == 0) goto LAB_10b4ac15c;
    if (bVar1) {
      bVar1 = true;
LAB_10b4ac13c:
      *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 4;
      func_0x00010b4acc20();
      uVar4 = *puVar2;
      puVar2 = auStack_d0;
      func_0x00010b4a79c0(puVar2,7,uVar4);
      goto LAB_10b4ac15c;
    }
LAB_10b4ac128:
    func_0x00010b4acb08();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4ac13c;
    }
    if ((*(byte *)(param_2 + 0xb0) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4ac180;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4ac1b4:
    if ((*(byte *)(param_2 + 0xbc) & 1) == 0) goto LAB_10b4ac210;
    if (bVar1) {
      bVar1 = true;
LAB_10b4ac1ec:
      puVar3 = (undefined4 *)(param_2 + 0xb8);
      *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 1;
      FUN_10b4aa6a4();
      puVar2 = auStack_d0;
      FUN_10b4a7ab0(puVar2,9,*puVar3);
      goto LAB_10b4ac210;
    }
LAB_10b4ac1d8:
    func_0x00010b4acb08();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4ac1ec;
    }
    puVar2 = (undefined8 *)0x0;
    if ((*(byte *)(param_2 + 0xd8) & 1) != 0) goto LAB_10b4ac234;
    bVar1 = false;
LAB_10b4ac264:
    if ((*(byte *)(param_2 + 0xf8) & 1) == 0) goto LAB_10b4ac2b8;
    if (bVar1) {
      bVar1 = true;
LAB_10b4ac29c:
      *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) | 0x40;
      func_0x00010b4acbc8();
      func_0x00010b4acc30();
      func_0x00010b4a7a18();
      goto LAB_10b4ac2b8;
    }
LAB_10b4ac288:
    func_0x00010b4acb08();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4ac29c;
    }
    if ((*(byte *)(param_2 + 0x101) & 1) != 0) goto LAB_10b4ac2dc;
    bVar1 = false;
LAB_10b4ac314:
    if ((*(byte *)(param_2 + 0x108) & 1) == 0) goto LAB_10b4ac370;
    if (bVar1) {
      bVar1 = true;
LAB_10b4ac34c:
      *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) | 0x10;
      func_0x00010b4abebc((undefined4 *)(param_2 + 0x104));
      puVar2 = auStack_d0;
      FUN_10b4a7ab0(puVar2,0xd,*(undefined4 *)(param_2 + 0x104));
      goto LAB_10b4ac370;
    }
LAB_10b4ac338:
    func_0x00010b4acb08();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4ac34c;
    }
    if ((*(byte *)(param_2 + 0x118) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4ac394;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4ac3c8:
    if ((*(byte *)(param_2 + 0x124) & 1) == 0) goto LAB_10b4ac424;
    if (bVar1) {
      bVar1 = true;
LAB_10b4ac400:
      *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) | 4;
      func_0x00010b4abed4((undefined4 *)(param_2 + 0x120));
      puVar2 = auStack_d0;
      FUN_10b4a7ab0(puVar2,0xf,*(undefined4 *)(param_2 + 0x120));
      goto LAB_10b4ac424;
    }
LAB_10b4ac3ec:
    func_0x00010b4acb08();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4ac400;
    }
    if ((*(byte *)(param_2 + 300) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4ac448;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4ac480:
    if ((*(byte *)(param_2 + 0x148) & 1) == 0) goto LAB_10b4ac4d4;
    if (bVar1) {
      bVar1 = true;
LAB_10b4ac4b8:
      *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) | 1;
      func_0x00010b4acbc8();
      func_0x00010b4acc30();
      func_0x00010b4a7a18();
      goto LAB_10b4ac4d4;
    }
LAB_10b4ac4a4:
    func_0x00010b4acb08();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4ac4b8;
    }
    if ((*(byte *)(param_2 + 0x168) & 1) != 0) goto LAB_10b4ac4f8;
    bVar1 = false;
LAB_10b4ac528:
    if ((*(byte *)(param_2 + 0x171) & 1) == 0) goto LAB_10b4ac56c;
    if (!bVar1) goto LAB_10b4ac538;
  }
  puVar5 = (undefined1 *)(param_2 + 0x170);
  *(byte *)(param_2 + 0x12) = *(byte *)(param_2 + 0x12) | 0x40;
  func_0x000107c29334();
  func_0x00010b4a790c(auStack_d0,0x13,*puVar5);
LAB_10b4ac56c:
  FUN_10b4a7ad8(auStack_d0,1,param_2 + 0x10,3);
  FUN_10b4a7854(param_1,auStack_d0);
  puVar2 = auStack_d0;
  FUN_10b4a8238();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar2 = auStack_d0;
    FUN_10b4a8238();
    func_0x00010b4acbf8();
    *puVar2 = &PTR_FUN_110cee788;
    puVar2[1] = &PTR_FUN_110cee7f0;
    func_0x000107c279a4(puVar2 + 0x2a);
    func_0x000107c279a4(puVar2 + 0x26);
    func_0x000107c279a4(puVar2 + 0x1c);
    func_0x000107c279a4(puVar2 + 0x18);
    func_0x000107c279a4(puVar2 + 0xb);
    func_0x000107c279a4(puVar2 + 7);
    func_0x000107c279a4(puVar2 + 3);
    return puVar2;
  }
  return puVar2;
}



/* Entry: 10b4ac6b8; end: 10b4ac6bb;  */

undefined8 * FUN_10b4ac6b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cee788;
  param_1[1] = &PTR_FUN_110cee7f0;
  func_0x000107c279a4(param_1 + 0x2a);
  func_0x000107c279a4(param_1 + 0x26);
  func_0x000107c279a4(param_1 + 0x1c);
  func_0x000107c279a4(param_1 + 0x18);
  func_0x000107c279a4(param_1 + 0xb);
  func_0x000107c279a4(param_1 + 7);
  func_0x000107c279a4(param_1 + 3);
  return param_1;
}


