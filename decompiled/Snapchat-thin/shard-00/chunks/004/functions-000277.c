/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100612e00; end: 100612f47;  */

void FUN_100612e00(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  code *UNRECOVERED_JUMPTABLE)

{
  undefined8 *extraout_x8;
  long unaff_x19;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  undefined8 in_register_00005048;
  
  FUN_10048971c();
  *(undefined1 *)(param_4 + 0x138) = 0;
  FUN_1004b94ac();
  func_0x0001004b94f4(unaff_x19 + 0x108);
  extraout_x8[3] = in_register_00005028;
  extraout_x8[2] = param_2;
  extraout_x8[5] = in_register_00005048;
  extraout_x8[4] = param_3;
  extraout_x8[1] = in_register_00005008;
  *extraout_x8 = param_1;
  func_0x000100612e48();
  if ((int)unaff_x19 != 0) {
    func_0x000104c01aa0();
                    /* WARNING: Could not recover jumptable at 0x0001004bad18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 100612f48; end: 100612f53;  */

void FUN_100612f48(void)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 *extraout_x8_01;
  undefined8 uVar5;
  undefined1 *unaff_x19;
  long unaff_x20;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  
  FUN_100561bf0(unaff_x19 + 0x70,&stack0x00000008);
  uStack_28 = extraout_x8;
  func_0x000100612ef4(auStack_48);
  puVar2 = auStack_48;
  puVar4 = unaff_x19;
  FUN_100612fa0();
  FUN_100613078();
  func_0x0001004b9658(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x0001004b9648();
  uVar1 = puVar4 == puVar2;
  uStack_78 = extraout_x8_00;
  if (!(bool)uVar1) {
    FUN_1001246dc();
    FUN_10061246c();
    if ((bool)uVar1) {
      uVar1 = extraout_x8_01 == unaff_x19;
      if ((bool)uVar1) {
        FUN_10055f820();
        func_0x000104c01b50();
        func_0x000100612494();
        *(undefined8 *)(unaff_x20 + 0x18) = 0;
        FUN_10055f820(*(undefined8 *)(unaff_x19 + 0x18));
        func_0x000104c01bc4();
        func_0x000104c01a5c(*(undefined8 *)(unaff_x19 + 0x18));
        func_0x000104c01b30();
        func_0x00010061247c(auStack_90);
        func_0x000104c01ac4();
      }
      else {
        FUN_10055f820();
        func_0x00010061247c();
        func_0x000100612494();
        *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(unaff_x19 + 0x18);
      }
      *(undefined1 **)(unaff_x19 + 0x18) = unaff_x19;
    }
    else {
      uVar1 = extraout_x8_01 == unaff_x19;
      if ((bool)uVar1) {
        func_0x000104c01b18();
        func_0x000104c01a5c(*(undefined8 *)(unaff_x19 + 0x18));
        func_0x000104c01b8c();
      }
      else {
        *(undefined1 **)(unaff_x20 + 0x18) = extraout_x8_01;
        *(undefined1 **)(unaff_x19 + 0x18) = puVar2;
      }
    }
  }
  iVar3 = (int)puVar4;
  func_0x0001004b9658(uStack_78);
  if (!(bool)uVar1) {
    func_0x000107c60e78();
    if (iVar3 == 0) {
      func_0x000107c60bd8();
    }
    func_0x000104bd46a0();
    puVar2 = auStack_88;
    func_0x0001006124a8();
    if ((bool)uVar1) {
      uVar5 = 0x20;
    }
    else {
      if (puVar2 == (undefined1 *)0x0) {
        return;
      }
      uVar5 = 0x28;
    }
    func_0x000104c01a8c(uVar5);
    return;
  }
  return;
}



/* Entry: 100612f54; end: 100612f9f;  */

void FUN_100612f54(void)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 *extraout_x8_01;
  undefined8 uVar5;
  undefined1 *unaff_x19;
  long unaff_x20;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  
  FUN_100561bf0();
  uStack_28 = extraout_x8;
  func_0x000100612ef4(auStack_48);
  puVar2 = auStack_48;
  puVar4 = unaff_x19;
  FUN_100612fa0();
  FUN_100613078();
  func_0x0001004b9658(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x0001004b9648();
  uVar1 = puVar4 == puVar2;
  uStack_78 = extraout_x8_00;
  if (!(bool)uVar1) {
    FUN_1001246dc();
    FUN_10061246c();
    if ((bool)uVar1) {
      uVar1 = extraout_x8_01 == unaff_x19;
      if ((bool)uVar1) {
        FUN_10055f820();
        func_0x000104c01b50();
        func_0x000100612494();
        *(undefined8 *)(unaff_x20 + 0x18) = 0;
        FUN_10055f820(*(undefined8 *)(unaff_x19 + 0x18));
        func_0x000104c01bc4();
        func_0x000104c01a5c(*(undefined8 *)(unaff_x19 + 0x18));
        func_0x000104c01b30();
        func_0x00010061247c(auStack_90);
        func_0x000104c01ac4();
      }
      else {
        FUN_10055f820();
        func_0x00010061247c();
        func_0x000100612494();
        *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(unaff_x19 + 0x18);
      }
      *(undefined1 **)(unaff_x19 + 0x18) = unaff_x19;
    }
    else {
      uVar1 = extraout_x8_01 == unaff_x19;
      if ((bool)uVar1) {
        func_0x000104c01b18();
        func_0x000104c01a5c(*(undefined8 *)(unaff_x19 + 0x18));
        func_0x000104c01b8c();
      }
      else {
        *(undefined1 **)(unaff_x20 + 0x18) = extraout_x8_01;
        *(undefined1 **)(unaff_x19 + 0x18) = puVar2;
      }
    }
  }
  iVar3 = (int)puVar4;
  func_0x0001004b9658(uStack_78);
  if (!(bool)uVar1) {
    func_0x000107c60e78();
    if (iVar3 == 0) {
      func_0x000107c60bd8();
    }
    func_0x000104bd46a0();
    puVar2 = auStack_88;
    func_0x0001006124a8();
    if ((bool)uVar1) {
      uVar5 = 0x20;
    }
    else {
      if (puVar2 == (undefined1 *)0x0) {
        return;
      }
      uVar5 = 0x28;
    }
    func_0x000104c01a8c(uVar5);
    return;
  }
  return;
}



/* Entry: 100612fa0; end: 100613077;  */

void FUN_100612fa0(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  uVar4 = (undefined4)((ulong)param_2 >> 0x20);
  iVar3 = (int)param_2;
  FUN_1004b9648();
  uVar1 = CONCAT44(uVar4,iVar3) == param_1;
  uStack_28 = extraout_x8;
  if (!(bool)uVar1) {
    FUN_1001246dc();
    FUN_10061246c();
    if ((bool)uVar1) {
      uVar1 = extraout_x8_00 == unaff_x19;
      if ((bool)uVar1) {
        FUN_10055f820();
        func_0x000104c01b50();
        func_0x000100612494();
        *(undefined8 *)(unaff_x20 + 0x18) = 0;
        FUN_10055f820(*(undefined8 *)(unaff_x19 + 0x18));
        func_0x000104c01bc4();
        func_0x000104c01a5c(*(undefined8 *)(unaff_x19 + 0x18));
        func_0x000104c01b30();
        func_0x00010061247c(auStack_40);
        func_0x000104c01ac4();
      }
      else {
        FUN_10055f820();
        func_0x00010061247c();
        func_0x000100612494();
        *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(unaff_x19 + 0x18);
      }
      *(long *)(unaff_x19 + 0x18) = unaff_x19;
    }
    else {
      uVar1 = extraout_x8_00 == unaff_x19;
      if ((bool)uVar1) {
        func_0x000104c01b18();
        func_0x000104c01a5c(*(undefined8 *)(unaff_x19 + 0x18));
        func_0x000104c01b8c();
      }
      else {
        *(long *)(unaff_x20 + 0x18) = extraout_x8_00;
        *(long *)(unaff_x19 + 0x18) = param_1;
      }
    }
  }
  func_0x0001004b9658(uStack_28);
  if (!(bool)uVar1) {
    func_0x000107c60e78();
    if (iVar3 == 0) {
      func_0x000107c60bd8();
    }
    func_0x000104bd46a0();
    puVar2 = auStack_38;
    func_0x0001006124a8();
    if ((bool)uVar1) {
      uVar5 = 0x20;
    }
    else {
      if (puVar2 == (undefined1 *)0x0) {
        return;
      }
      uVar5 = 0x28;
    }
    func_0x000104c01a8c(uVar5);
    return;
  }
  return;
}



/* Entry: 100613078; end: 10061307f;  */

void FUN_100613078(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 uVar2;
  
  puVar1 = &stack0x00000008;
  func_0x0001006124a8();
  if ((bool)in_ZR) {
    uVar2 = 0x20;
  }
  else {
    if (puVar1 == (undefined1 *)0x0) {
      return;
    }
    uVar2 = 0x28;
  }
  func_0x000104c01a8c(uVar2);
  return;
}



/* Entry: 100613080; end: 1006130b3;  */

void FUN_100613080(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x0001006124a8();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x000104c01a8c(uVar1);
  return;
}



/* Entry: 1006130b4; end: 10061314b;  */

long * FUN_1006130b4(long *param_1)

{
  long *plVar1;
  
  do {
    plVar1 = param_1;
    param_1 = (long *)*plVar1;
  } while (param_1 != (long *)0x0);
  return plVar1;
}



/* Entry: 10061314c; end: 10061315b;  */

void FUN_10061314c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x110) = param_2;
  return;
}



/* Entry: 10061315c; end: 1006131eb;  */

void FUN_10061315c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = param_1;
  func_0x0001004ba6f8();
  *(long *)(param_1 + 0xe0) = lVar1;
  *(undefined8 *)(param_1 + 0xe8) = param_2;
  FUN_1004ba790();
  func_0x0001004ba79c();
  func_0x0001004ba7a8();
  FUN_10048a5b8(auStack_48,*(undefined8 *)(param_1 + 200));
  func_0x0001004ba7b4(param_1 + 0x28);
  func_0x0001004ba7bc();
  FUN_1004ba7c4(auStack_48,*(long *)(param_1 + 200) + 0x58,param_1 + 0xb0);
  FUN_1004ba87c(param_1,param_1 + 0x10,auStack_48,0);
  func_0x0001004ba7bc();
  return;
}



/* Entry: 1006131ec; end: 10061328f;  */

undefined8 FUN_1006131ec(long param_1)

{
  long *plVar1;
  code *extraout_x8;
  code *extraout_x8_00;
  int aiStack_68 [14];
  
  plVar1 = *(long **)(param_1 + 0x68);
  if (plVar1 == (long *)0x0) {
    func_0x000104c01a80(uRam0000000113815c70);
    func_0x000104c01ae0();
    (*extraout_x8)();
    plVar1 = *(long **)(param_1 + 0x68);
  }
  if (*plVar1 != 0) {
    func_0x000104c00400(aiStack_68,param_1 + 0x70);
    func_0x000100612328();
    if (aiStack_68[0] != 0) {
      func_0x000104c01a80(uRam0000000113815c70);
      func_0x000104c01ae0();
      (*extraout_x8_00)();
    }
    **(undefined8 **)(param_1 + 0x68) = 0;
  }
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 100613290; end: 1006132bf;  */

long * FUN_100613290(long *param_1)

{
  if (*param_1 != 0) {
    FUN_100601b50();
                    /* WARNING: Could not recover jumptable at 0x0001006132ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 200))();
    return param_1;
  }
  return (long *)0x0;
}



/* Entry: 1006132c0; end: 1006132f3;  */

char * FUN_1006132c0(long param_1)

{
  char *pcVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    return *(char **)(param_1 + 0x38);
  }
  pcVar1 = "return 0";
  func_0x000104a6e964("return 0",
                      "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/byte_buffer.cc"
                      ,0x61);
  return pcVar1;
}



/* Entry: 1006132f4; end: 100613303;  */

void FUN_1006132f4(void)

{
  return;
}



/* Entry: 100613304; end: 100613357;  */

void FUN_100613304(long param_1,undefined8 param_2)

{
  code *extraout_x8;
  long unaff_x20;
  
  *(undefined8 *)(param_1 + 0xd0) = param_2;
  FUN_1006132f4();
  if (unaff_x20 != 0) {
    FUN_100613358();
    func_0x000100613370();
    func_0x000100613384();
    (*extraout_x8)();
    func_0x0001006134b4();
    func_0x0001006134bc();
  }
  return;
}



/* Entry: 100613358; end: 1006133e7;  */

void FUN_100613358(long param_1)

{
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  uStack0000000000000028 = 0;
  uStack0000000000000030 = 0;
  uStack0000000000000038 = 0;
  if (*(char *)(*(long *)(param_1 + 200) + 0x70) == '\x01') {
    func_0x000107c60dec(auStack_50,&UNK_10f73f719,*(long *)(param_1 + 200) + 0x58);
    FUN_100610910(auStack_38,auStack_50,param_1 + 0xb0);
    FUN_100066230(&stack0x00000028,auStack_38);
    func_0x000107c60ca0(auStack_38);
    func_0x000107c60ca0(auStack_50);
  }
  else {
    func_0x000107c60ca4(&stack0x00000028,param_1 + 0xb0);
  }
  return;
}



/* Entry: 1006133e8; end: 10061345f;  */

undefined8 * FUN_1006133e8(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [48];
  undefined1 auStack_40 [16];
  
  func_0x0001006133a0();
  FUN_100613460();
  func_0x000100613470();
  func_0x00010061347c();
  func_0x00010061348c();
  func_0x000100613494();
  do {
    func_0x0001006134a0();
    func_0x0001006134a8();
  } while (!(bool)in_ZR);
  FUN_1004a4ba4();
  if ((bool)in_ZR) {
    return param_1;
  }
  func_0x000107c60e78();
  func_0x000107c35468();
  func_0x000107c354b0();
  do {
    func_0x000107c3549c();
    func_0x000107c354a4();
  } while (!(bool)in_ZR);
  func_0x000107c35498();
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  FUN_10007e1e8(&uStack_88,auStack_70,auStack_40,2);
  return &uStack_88;
}



/* Entry: 100613460; end: 1006134cf;  */

undefined1 * FUN_100613460(void)

{
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  
  uStack0000000000000008 = 0;
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 0;
  FUN_10007e1e8(&stack0x00000008,&stack0x00000020,&stack0x00000050,2);
  return (undefined1 *)&stack0x00000008;
}



/* Entry: 1006134d0; end: 100613543;  */

void FUN_1006134d0(long param_1,undefined8 param_2)

{
  long lVar1;
  code *extraout_x8;
  long unaff_x20;
  
  lVar1 = param_1;
  func_0x0001004ba6f8();
  *(long *)(param_1 + 0xf0) = lVar1;
  *(undefined8 *)(param_1 + 0xf8) = param_2;
  FUN_10046778c();
  FUN_100467768();
  FUN_1006132f4();
  if (unaff_x20 != 0) {
    FUN_100613544();
    func_0x000100613370();
    func_0x000100613384();
    (*extraout_x8)();
    func_0x0001006134b4();
    func_0x0001006134bc();
  }
  return;
}



/* Entry: 100613544; end: 100613557;  */

void FUN_100613544(void)

{
  long unaff_x19;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  uStack0000000000000028 = 0;
  uStack0000000000000030 = 0;
  uStack0000000000000038 = 0;
  if (*(char *)(*(long *)(unaff_x19 + 200) + 0x70) == '\x01') {
    func_0x000107c60dec(auStack_50,&UNK_10f73f719,*(long *)(unaff_x19 + 200) + 0x58);
    FUN_100610910(auStack_38,auStack_50,unaff_x19 + 0xb0);
    FUN_100066230(&stack0x00000028,auStack_38);
    func_0x000107c60ca0(auStack_38);
    func_0x000107c60ca0(auStack_50);
  }
  else {
    func_0x000107c60ca4(&stack0x00000028,unaff_x19 + 0xb0);
  }
  return;
}



/* Entry: 100613558; end: 1006135df;  */

void FUN_100613558(int param_1)

{
  undefined1 in_ZR;
  code *extraout_x8;
  
  func_0x0001004a4aec();
  (*extraout_x8)();
  if (param_1 != 0) {
    func_0x000107c35424();
    FUN_100613460();
    func_0x000107c3545c();
    func_0x000107c3548c();
    func_0x00010061348c();
    func_0x000100613494();
    do {
      func_0x0001006134a0();
      func_0x0001006134a8();
    } while (!(bool)in_ZR);
  }
  FUN_1004a4ba4();
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c35468();
  func_0x000107c354b0();
  do {
    func_0x000107c3549c();
    func_0x000107c354a4();
  } while (!(bool)in_ZR);
  func_0x000107c35498();
  return;
}



/* Entry: 1006135e0; end: 1006135e7;  */

void FUN_1006135e0(void)

{
  return;
}



/* Entry: 1006135e8; end: 1006136a7;  */

long FUN_1006135e8(void)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  long lStack_230;
  undefined8 auStack_228 [60];
  undefined8 uStack_48;
  
  func_0x0001004bad1c();
  FUN_1004bae20();
  func_0x0001004bb090(unaff_x19 + 0x30);
  FUN_1004bb0ac();
  uVar1 = *(char *)(unaff_x19 + 0x71) == '\x01';
  if (((bool)uVar1) && ((*(byte *)(unaff_x19 + 0x70) & 1) == 0)) {
    auStack_228[lStack_230 * 10] = 2;
    auStack_228[lStack_230 * 10 + 1] = 0;
  }
  func_0x0001004bb090(unaff_x19 + 0x78);
  FUN_1006136e8();
  func_0x0001004bb090(unaff_x19 + 0x88);
  func_0x000100613724();
  lVar2 = unaff_x19 + 0xa8;
  func_0x0001004bb090();
  func_0x000100613760();
  func_0x0001006137b4();
  func_0x0001006137c4();
  func_0x0001006137e0();
  if ((int)lVar2 != 0) {
    func_0x000104c019e4();
  }
  func_0x0001004b9658(uStack_48);
  if (!(bool)uVar1) {
    func_0x000107c60e78();
    lVar3 = *(long *)(lVar2 + 0x18);
    *(undefined8 *)(lVar2 + 0x18) = 0;
    if (lVar3 == lVar2) {
      uVar4 = 0x20;
    }
    else {
      if (lVar3 == 0) {
        return lVar2;
      }
      uVar4 = 0x28;
    }
    func_0x000104c01a8c(uVar4);
    return lVar2;
  }
  return lVar2;
}



/* Entry: 1006136a8; end: 1006136e7;  */

long FUN_1006136a8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (lVar1 == param_1) {
    uVar2 = 0x20;
  }
  else {
    if (lVar1 == 0) {
      return param_1;
    }
    uVar2 = 0x28;
  }
  func_0x000104c01a8c(uVar2);
  return param_1;
}



/* Entry: 1006136e8; end: 100613803;  */

void FUN_1006136e8(byte *param_1,long param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  if ((lVar1 != 0) && ((*param_1 & 1) == 0)) {
    lVar2 = *param_3;
    *param_3 = lVar2 + 1;
    puVar3 = (undefined8 *)(param_2 + lVar2 * 0x50);
    *puVar3 = 4;
    puVar3[1] = 0;
    puVar3[2] = lVar1 + 8;
  }
  return;
}



/* Entry: 100613804; end: 100613883; -[SCFideliusSnapService .cxx_destruct] */

void FUN_100613804(long param_1)

{
  func_0x000107c6119c(param_1 + 0x48,0);
  func_0x000107c6119c(param_1 + 0x40,0);
  func_0x000107c6119c(param_1 + 0x38,0);
  func_0x000107c6119c(param_1 + 0x30,0);
  func_0x000107c6119c(param_1 + 0x28,0);
  func_0x000107c6119c(param_1 + 0x20,0);
  func_0x000107c6119c(param_1 + 0x18,0);
  func_0x000107c6119c(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 100613884; end: 10061388f; -[SCFideliusServiceCoordinator ackRetryService] */

void FUN_100613884(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x68,1);
  return;
}



/* Entry: 100613890; end: 100613b1f; -[SCFideliusAckRetryService initWithDataSource:httpMetadataService:httpRequestModifier:betaSyncDelegate:userIdentity:dbManager:logger:backgroundTaskWrapper:circumstanceEngine:grpcFideliusRecryptService:] */

undefined8 *
FUN_100613890(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  puStack_68 = PTR_PTR_1126eaf10;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0(puVar1 + 1,param_3);
    puVar2 = PTR_PTR_1126bd038;
    func_0x000107c3cf68();
    func_0x000107c61180();
    uVar5 = puVar1[6];
    puVar1[6] = puVar2;
    func_0x000107c61170(uVar5);
    func_0x000107c61174(param_7);
    uVar5 = puVar1[2];
    puVar1[2] = param_7;
    func_0x000107c61170(uVar5);
    func_0x000107c61174(param_8);
    uVar5 = puVar1[3];
    puVar1[3] = param_8;
    func_0x000107c61170(uVar5);
    uVar5 = param_3;
    func_0x000107c5da60();
    func_0x000107c61180();
    uVar3 = uVar5;
    func_0x000107c5d984();
    func_0x000107c61180();
    uVar6 = puVar1[4];
    puVar1[4] = uVar3;
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar5);
    func_0x000107c61174(param_9);
    uVar5 = puVar1[5];
    puVar1[5] = param_9;
    func_0x000107c61170(uVar5);
    puVar2 = PTR_PTR_1126c03d0;
    func_0x000107c610f4();
    puVar4 = PTR_PTR_1126bd038;
    func_0x000107c4fae8(PTR_PTR_1126bd038);
    func_0x000107c61180();
    func_0x000107c47df8();
    uVar5 = puVar1[7];
    puVar1[7] = puVar2;
    func_0x000107c61170(uVar5);
    func_0x000107c61170(puVar4);
    puVar2 = PTR_PTR_1126c03d8;
    func_0x000107c610f4();
    puVar4 = PTR_PTR_1126bd038;
    func_0x000107c4fae4(PTR_PTR_1126bd038);
    func_0x000107c61180();
    func_0x000107c47dfc();
    uVar5 = puVar1[8];
    puVar1[8] = puVar2;
    func_0x000107c61170(uVar5);
    func_0x000107c61170(puVar4);
    func_0x000107c61174(param_11);
    uVar5 = puVar1[9];
    puVar1[9] = param_11;
    func_0x000107c61170(uVar5);
  }
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100613b20; end: 100613b8f; +[SCFideliusPerformerInitializer ackRetryServicePerformer] */

void FUN_100613b20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae790;
  func_0x000107c610f4(PTR_PTR_1126ae790);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f310b9b);
  func_0x000107c61180();
  func_0x000107c470d0(puVar1,param_2,puVar2,0x15,0,0x18);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100613b90; end: 100613b9f;  */

void FUN_100613b90(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_11034f380)(param_1,param_2,&DAT_10e70d53c);
  return;
}



/* Entry: 100613ba0; end: 100613cdf; +[SCFideliusPerformerInitializer recryptAssistantExecutorPerformer] */

void FUN_100613ba0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae790;
  func_0x000107c610f4(PTR_PTR_1126ae790);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f310bc3);
  func_0x000107c61180();
  func_0x000107c470d0(puVar1,param_2,puVar2,0x15,0,0x18);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100613ce0; end: 100613ecb; -[SCFideliusBatchRecryptAssistantExecutor initWithPerformer:backgroundTaskWrapper:betaSyncDelegate:grpcFideliusRecryptService:circumstanceEngine:dataSource:] */

undefined8 *
FUN_100613ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  puStack_68 = PTR_PTR_1126eaef0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_6);
    uVar2 = puVar1[2];
    puVar1[2] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 4,param_5);
    func_0x000107c611a0(puVar1 + 6,param_8);
    func_0x000107c61144(auStack_78,puVar1);
    puVar3 = PTR_PTR_1126c0398;
    func_0x000107c610f4();
    func_0x000107c6111c(auStack_80,auStack_78);
    func_0x000107c47e00();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61120(auStack_80);
    func_0x000107c61120(auStack_78);
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100613ecc; end: 100613f3b; +[SCFideliusPerformerInitializer recryptAcknowledgeRetryPerformer] */

void FUN_100613ecc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae790;
  func_0x000107c610f4(PTR_PTR_1126ae790);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f310bf4);
  func_0x000107c61180();
  func_0x000107c470d0(puVar1,param_2,puVar2,0x15,0,0x18);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100613f3c; end: 10061410f; -[SCFideliusBatchAcknowledgeRecryptExecutor initWithPerformer:backgroundTaskWrapper:grpcFideliusRecryptService:circumstanceEngine:currentUserIdentity:] */

undefined8 *
FUN_100613f3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_68 = PTR_PTR_1126eaee0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61144(auStack_78,puVar1);
    puVar3 = PTR_PTR_1126c0398;
    func_0x000107c610f4();
    func_0x000107c6111c(auStack_80,auStack_78);
    func_0x000107c47e00();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61120(auStack_80);
    func_0x000107c61120(auStack_78);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100614110; end: 100614117; -[SCFideliusServiceCoordinator setAckRetryService:] */

void FUN_100614110(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 100614118; end: 1006141a7; -[SCFideliusIdentityService setBeta:] */

void FUN_100614118(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1006288b0;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c4e524(uVar1,param_2,&puStack_60);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1006141a8; end: 1006141ff; -[SCFideliusIdentityService processQueuedData] */

void FUN_1006141a8(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  uStack_28 = 0x1006288dc;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x000107c4e524(*(undefined8 *)(param_1 + 0x60),param_2,&puStack_38);
  return;
}



/* Entry: 100614200; end: 10061428b; -[SCFideliusManager _fetchUpdates:] */

void FUN_100614200(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  puVar1 = &UNK_10f3107d4;
  FUN_1000ba800(&UNK_10f3107d4);
  uVar2 = param_1;
  func_0x000107c3bb78(param_1,param_2,param_3);
  if ((int)uVar2 != 0) {
    func_0x000107c3bf18(param_1,param_2,param_3);
  }
  func_0x0001000e2a84(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10061428c; end: 100614333; -[SCFideliusManager _isReady:] */

undefined8 FUN_10061428c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  puVar1 = &UNK_10f310635;
  FUN_1000ba800(&UNK_10f310635);
  if (((*(long *)(param_1 + 0x10) == 0) || (*(long *)(param_1 + 0x18) == 0)) ||
     (*(long *)(param_1 + 0x98) == 0)) {
    func_0x000107c3be6c(param_1,param_2,&PTR____CFConstantStringClassReference_110e102f8,param_3);
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  func_0x0001000e2a84(puVar1);
  func_0x000107c61170(param_3);
  return uVar2;
}



/* Entry: 100614334; end: 1006144bf; -[SCFideliusManager _meshPollRecrypt:] */

void FUN_100614334(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x000107c61174(param_3);
  puVar1 = &UNK_10f3107f4;
  FUN_1000ba800(&UNK_10f3107f4);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c3e890(uVar2);
  func_0x000107c61180();
  uVar4 = uVar2;
  func_0x000107c4f5e4();
  func_0x000107c61180();
  uVar3 = uVar4;
  FUN_1006144c8();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  FUN_100614684();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  func_0x000107c5c734(uVar4);
  func_0x000107c61180();
  uVar5 = 0;
  FUN_100623bf8(0,uVar2,30000);
  func_0x000107c61180();
  func_0x000107c61174(param_3);
  func_0x000107c4eb20(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x0001000e2a84(puVar1);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1006144c0; end: 1006144c7; -[SCEllipticCurveCrypto publicKey] */

undefined8 FUN_1006144c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1006144c8; end: 100614517;  */

void FUN_1006144c8(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c0718;
  func_0x000107c61174();
  func_0x000107c4cd90(puVar1);
  func_0x000107c61180();
  func_0x000107c579fc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100614518; end: 10061457f; +[SCFideliusPollRecryptRequest descriptor] */

void FUN_100614518(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c17e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7e440,
                        &PTR____CFConstantStringClassReference_110e121b8,&PTR_DAT_11310ea18,
                        &PTR_DAT_11310ea50,1,0x10,0x1c);
    puRam00000001136c17e0 = puVar1;
  }
  return;
}



/* Entry: 100614580; end: 100614683;  */

void FUN_100614580(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long *unaff_x20;
  long lVar2;
  long lVar3;
  
  lVar2 = *unaff_x20;
  lVar3 = *(long *)(lVar2 + 0xa8);
  uVar1 = 0;
  FUN_10006a340();
  func_0x000107c613fc();
  FUN_10006a360();
  *(undefined8 *)((long)unaff_x20 + lVar3) = uVar1;
  *(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xb0)) = 0;
  (**(code **)(*(long *)(*(long *)(lVar2 + 0x50) + -8) + 0x20))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x78),param_2);
  (**(code **)(*(long *)(*(long *)(lVar2 + 0x58) + -8) + 0x20))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x80),param_3);
  *(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x88)) = param_4;
  *(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x90)) = param_5;
  *(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x98)) = param_1;
  *(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xa0)) = param_6;
  return;
}



/* Entry: 100614684; end: 10061468f;  */

undefined ** FUN_100614684(void)

{
  return &PTR____CFConstantStringClassReference_110e10d38;
}



/* Entry: 100614690; end: 10061479b;  */

void FUN_100614690(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126ae728;
  func_0x000107c3edf4(PTR_PTR_1126ae728);
  func_0x000107c61180();
  func_0x000107c545b8();
  func_0x000107c611b0();
  func_0x000107c59d5c(puVar1,param_2,10000);
  func_0x000107c611b0();
  func_0x000107c57f3c(puVar1,param_2,10000);
  func_0x000107c611b0();
  func_0x000107c5343c(puVar1,param_2,0);
  func_0x000107c611b0();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c44580(uVar2);
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c40a28();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  puVar5 = PTR_PTR_1126c0710;
  func_0x000107c610f4(PTR_PTR_1126c0710);
  func_0x000107c49088();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10061479c; end: 1006147df; -[SCNGrpcParamsBuilder setRpcTimeoutInMs:] */

long FUN_10061479c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d964();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar1;
  func_0x000107c61170(uVar2);
  return param_1;
}



/* Entry: 1006147e0; end: 10061482f;  */

void FUN_1006147e0(undefined8 param_1)

{
  undefined1 auStack_68 [72];
  
  FUN_100460de4(auStack_68);
  FUN_1005a7050(param_1);
  FUN_100467a48(auStack_68);
  return;
}



/* Entry: 100614830; end: 1006148f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100614830(long *param_1,long *param_2)

{
  undefined1 *puVar1;
  long *plVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 *extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 uVar8;
  long unaff_x21;
  long lVar9;
  long *unaff_x22;
  long *plVar10;
  long unaff_x23;
  undefined8 unaff_x24;
  long lVar11;
  undefined8 unaff_x25;
  long lVar12;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_38;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = param_1[2];
  plVar4 = param_1;
  plVar5 = param_2;
  if (lVar9 == 0) {
LAB_100614894:
    param_1 = plVar4;
    param_2 = plVar5;
    plVar4 = unaff_x19;
    plVar5 = unaff_x20;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
LAB_1006148f4:
    unaff_x21 = lVar9;
    unaff_x20 = plVar5;
    unaff_x19 = plVar4;
    unaff_x30 = FUN_1006148f8;
    func_0x000107c60e78();
    register0x00000008 = (BADSPACEBASE *)&lStack_60;
    unaff_x29 = puVar1;
  }
  else {
    if (param_2[2] != 0) {
      plVar10 = (long *)param_1[1];
      do {
        unaff_x22 = plVar10 + 4;
        lStack_58 = plVar10[1];
        lStack_60 = *plVar10;
        lStack_48 = plVar10[3];
        lStack_50 = plVar10[2];
        plVar4 = param_2;
        plVar5 = &lStack_60;
        FUN_1005a70c4();
        lVar9 = lVar9 + -1;
        plVar10 = unaff_x22;
      } while (lVar9 != 0);
      param_1[2] = 0;
      param_1[4] = 0;
      lVar9 = 0;
      unaff_x19 = param_1;
      unaff_x20 = param_2;
      goto LAB_100614894;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)PTR____stack_chk_guard_11034bdc0)
    goto LAB_1006148f4;
  }
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x68) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = (long *)*param_1;
  lVar11 = param_1[1] - (long)plVar10 >> 5;
  plVar2 = (long *)*param_2;
  lVar12 = param_2[1] - (long)plVar2 >> 5;
  lVar9 = param_2[2] + lVar12;
  plVar4 = param_1 + 5;
  plVar5 = param_2 + 5;
  if (plVar10 == plVar4) {
    lVar7 = param_1[2];
    if (plVar2 == plVar5) {
      lVar7 = (lVar7 + lVar11) * 0x20;
      func_0x000107c610b4((undefined1 *)((long)register0x00000008 + -0x168),plVar10,lVar7);
      func_0x000107c610b4(plVar10,plVar2,lVar9 * 0x20);
      plVar5 = (long *)*param_2;
      plVar4 = (long *)((long)register0x00000008 + -0x168);
      unaff_x23 = lVar7;
    }
    else {
      *param_1 = (long)plVar2;
      *param_2 = (long)plVar5;
      lVar7 = (lVar7 + lVar11) * 0x20;
      plVar4 = plVar10;
    }
  }
  else {
    if (plVar2 != plVar5) {
      *param_1 = (long)plVar2;
      *param_2 = (long)plVar10;
      goto LAB_1006149e4;
    }
    *param_2 = (long)plVar10;
    *param_1 = (long)plVar4;
    lVar7 = lVar9 * 0x20;
    plVar5 = plVar4;
    plVar4 = plVar2;
  }
  func_0x000107c610b4(plVar5,plVar4,lVar7);
LAB_1006149e4:
  param_1[1] = *param_1 + lVar12 * 0x20;
  param_2[1] = *param_2 + lVar11 * 0x20;
  lVar9 = param_1[2];
  param_1[2] = param_2[2];
  param_2[2] = lVar9;
  lVar9 = param_1[3];
  param_1[3] = param_2[3];
  param_2[3] = lVar9;
  lVar9 = param_1[4];
  param_1[4] = param_2[4];
  param_2[4] = lVar9;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x68)) {
    return;
  }
  func_0x000107c60e78();
  lVar9 = param_1[2];
  lVar12 = param_1[3];
  lVar7 = param_1[4];
  *(long *)((long)register0x00000008 + -0x1b0) = lVar11;
  *(long *)((long)register0x00000008 + -0x1a8) = unaff_x23;
  *(long **)((long)register0x00000008 + -0x1a0) = plVar2;
  *(long **)((long)register0x00000008 + -0x198) = plVar10;
  *(long **)((long)register0x00000008 + -400) = param_1;
  *(long **)((long)register0x00000008 + -0x188) = param_2;
  *(undefined1 **)((long)register0x00000008 + -0x180) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x178) = FUN_100614a68;
  FUN_100083b20((undefined1 *)((long)register0x00000008 + -0x1b8),lVar9,lVar12,lVar7);
  uVar8 = *(undefined8 *)((long)register0x00000008 + -0x1b8);
  FUN_100615644();
  func_0x000107c61574(uVar8);
  FUN_100083b20((undefined1 *)((long)register0x00000008 + -0x1c0));
  lVar11 = *(long *)((long)register0x00000008 + -0x1c0);
  uVar8 = *(undefined8 *)(lVar11 + _DAT_11307e0b8);
  func_0x000107c61174(uVar8);
  func_0x000107c61170(lVar11);
  func_0x0001000ad7c4();
  puVar6 = PTR_PTR_1126b8280;
  func_0x000107c610f8();
  func_0x000107c46284();
  func_0x000107c61170(lVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(lVar11);
  if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100614b50);
    (*pcVar3)();
  }
  *extraout_x8 = puVar6;
  return;
}



/* Entry: 1006148f8; end: 100614a67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006148f8(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 *extraout_x8;
  long unaff_x23;
  long lVar10;
  long lVar11;
  long lStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  long *plStack_190;
  long *plStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  long alStack_168 [32];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = (long *)*param_1;
  lVar10 = param_1[1] - (long)plVar1 >> 5;
  plVar2 = (long *)*param_2;
  lVar11 = param_2[1] - (long)plVar2 >> 5;
  lVar9 = param_2[2] + lVar11;
  plVar7 = param_1 + 5;
  plVar4 = param_2 + 5;
  if (plVar1 == plVar7) {
    lVar8 = param_1[2];
    if (plVar2 == plVar4) {
      lVar8 = (lVar8 + lVar10) * 0x20;
      func_0x000107c610b4(alStack_168,plVar1,lVar8);
      func_0x000107c610b4(plVar1,plVar2,lVar9 * 0x20);
      plVar4 = (long *)*param_2;
      plVar7 = alStack_168;
      unaff_x23 = lVar8;
    }
    else {
      *param_1 = (long)plVar2;
      *param_2 = (long)plVar4;
      lVar8 = (lVar8 + lVar10) * 0x20;
      plVar7 = plVar1;
    }
  }
  else {
    if (plVar2 != plVar4) {
      *param_1 = (long)plVar2;
      *param_2 = (long)plVar1;
      goto LAB_1006149e4;
    }
    *param_2 = (long)plVar1;
    *param_1 = (long)plVar7;
    lVar8 = lVar9 * 0x20;
    plVar4 = plVar7;
    plVar7 = plVar2;
  }
  func_0x000107c610b4(plVar4,plVar7,lVar8);
LAB_1006149e4:
  param_1[1] = *param_1 + lVar11 * 0x20;
  param_2[1] = *param_2 + lVar10 * 0x20;
  lVar9 = param_1[2];
  param_1[2] = param_2[2];
  param_2[2] = lVar9;
  lVar9 = param_1[3];
  param_1[3] = param_2[3];
  param_2[3] = lVar9;
  lVar9 = param_1[4];
  param_1[4] = param_2[4];
  param_2[4] = lVar9;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
  lVar9 = param_1[2];
  pcStack_178 = FUN_100614a68;
  lStack_1b0 = lVar10;
  lStack_1a8 = unaff_x23;
  plStack_1a0 = plVar2;
  plStack_198 = plVar1;
  plStack_190 = param_1;
  plStack_188 = param_2;
  puStack_180 = &stack0xfffffffffffffff0;
  FUN_100083b20(&uStack_1b8,lVar9,param_1[3],param_1[4]);
  FUN_100615644();
  func_0x000107c61574(uStack_1b8);
  FUN_100083b20(&lStack_1c0);
  uVar5 = *(undefined8 *)(lStack_1c0 + _DAT_11307e0b8);
  func_0x000107c61174(uVar5);
  func_0x000107c61170(lStack_1c0);
  lVar10 = lStack_1c0;
  func_0x0001000ad7c4();
  puVar6 = PTR_PTR_1126b8280;
  func_0x000107c610f8();
  func_0x000107c46284();
  func_0x000107c61170(lVar9);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(lVar10);
  if (puVar6 != (undefined *)0x0) {
    *extraout_x8 = puVar6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100614b50);
  (*pcVar3)();
}



/* Entry: 100614a68; end: 100614a73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100614a68(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long unaff_x20;
  long lStack_50;
  undefined8 uStack_48;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,uVar2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
               );
  FUN_100615644();
  func_0x000107c61574(uStack_48);
  FUN_100083b20(&lStack_50);
  uVar3 = *(undefined8 *)(lStack_50 + _DAT_11307e0b8);
  func_0x000107c61174(uVar3);
  func_0x000107c61170(lStack_50);
  lVar4 = lStack_50;
  func_0x0001000ad7c4();
  puVar5 = PTR_PTR_1126b8280;
  func_0x000107c610f8();
  func_0x000107c46284();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar4);
  if (puVar5 != (undefined *)0x0) {
    *param_1 = puVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100614b50);
  (*pcVar1)();
}



/* Entry: 100614a74; end: 100614b4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100614a74(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100615644();
  func_0x000107c61574(uStack_48);
  FUN_100083b20(&lStack_50);
  uVar2 = *(undefined8 *)(lStack_50 + _DAT_11307e0b8);
  func_0x000107c61174(uVar2);
  func_0x000107c61170(lStack_50);
  lVar3 = lStack_50;
  func_0x0001000ad7c4();
  puVar4 = PTR_PTR_1126b8280;
  func_0x000107c610f8();
  func_0x000107c46284();
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(lVar3);
  if (puVar4 != (undefined *)0x0) {
    *param_1 = puVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100614b50);
  (*pcVar1)();
}



/* Entry: 100614b50; end: 100614b7f;  */

void FUN_100614b50(long param_1)

{
  if (*(char *)(param_1 + 0x128) != '\0') {
    FUN_1008301a4();
    *(undefined1 *)(param_1 + 0x128) = 0;
  }
  return;
}



/* Entry: 100614b80; end: 100614bbb;  */

void FUN_100614b80(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_100095380();
  func_0x000107c613fc();
  FUN_100614bbc();
  *param_1 = uVar1;
  return;
}



/* Entry: 100614bbc; end: 100614c5f;  */

void FUN_100614bbc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  uStack_40 = 0x100619b0c;
  uStack_38 = 0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_100619acc;
  puStack_48 = &UNK_1103db5e8;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c3e4fc(puVar1,param_2,ppuVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  return;
}



/* Entry: 100614c60; end: 100614c77;  */

void FUN_100614c60(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100614c78; end: 100614e93;  */

void FUN_100614c78(undefined8 ***param_1,ulong *param_2)

{
  uint uVar1;
  byte bVar2;
  undefined8 ***pppuVar3;
  int iVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined8 **ppuVar7;
  undefined8 **ppuVar8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_81;
  undefined8 **ppuStack_80;
  ulong uStack_78;
  byte bStack_69;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 *puStack_58;
  undefined *puStack_50;
  undefined8 *puStack_48;
  code *pcStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar8 = param_1[2];
  bVar2 = (byte)param_2[2];
  if ((((bVar2 >> 2 & 1) == 0) || (uVar1 = *(uint *)(ppuVar8 + 1), (int)uVar1 < 0)) ||
     (ppuVar7 = *(undefined8 ***)(*(long *)(param_2[1] + 0x28) + 0x20),
     ppuVar7 <= (undefined8 **)(ulong)uVar1)) {
    if ((bVar2 >> 4 & 1) != 0) {
      uVar6 = param_2[1];
      ppuVar8[0xc] = *(undefined8 **)(uVar6 + 0x78);
      ppuVar8[0xb] = *(undefined8 **)(uVar6 + 0x60);
      *(undefined8 ***)(uVar6 + 0x78) = ppuVar8 + 2;
      bVar2 = (byte)param_2[2];
    }
    if ((bVar2 >> 5 & 1) != 0) {
      uVar6 = param_2[1];
      ppuVar8[0xd] = *(undefined8 **)(uVar6 + 0x90);
      *(undefined8 ***)(uVar6 + 0x90) = ppuVar8 + 6;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) goto FUN_100614e94;
  }
  else {
    puStack_50 = &UNK_10ae73f48;
    pcStack_40 = FUN_1004d50a8;
    puStack_58 = ppuVar7;
    puStack_48 = (undefined8 **)(ulong)uVar1;
    FUN_1004d4da0(&ppuStack_80,"Sent message larger than max (%u vs. %d)",0x28,&puStack_58,2);
    pppuVar3 = (undefined8 ***)ppuStack_80;
    if (-1 < (char)bStack_69) {
      uStack_78 = (ulong)bStack_69;
      pppuVar3 = &ppuStack_80;
    }
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a0 = 0;
    func_0x000104ab5920(&uStack_68,2,pppuVar3,uStack_78,&uStack_81,&uStack_a0);
    func_0x000104abaa50(&uStack_60,&uStack_68,3,8);
    puVar5 = &uStack_60;
    func_0x000104adfc18(param_2,puVar5,*ppuVar8);
    param_2 = puVar5;
    if ((uStack_60 & 1) != 0) {
      FUN_10084dad0();
      param_2 = puVar5;
    }
    if ((uStack_68 & 1) != 0) {
      FUN_10084dad0();
    }
    param_1 = (undefined8 ***)&puStack_58;
    puStack_58 = &uStack_a0;
    func_0x000100482b64();
    if ((char)bStack_69 < '\0') {
      param_1 = (undefined8 ***)ppuStack_80;
      func_0x000107c60e14();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
  }
  iVar4 = (int)param_2;
  func_0x000107c60e78();
  if (iVar4 != 0) {
    func_0x000104bd46a0();
    FUN_1004bdf74(&uStack_60);
    FUN_1004bdf74(&uStack_68);
    puStack_58 = &uStack_a0;
    func_0x000100482b64(&puStack_58);
    if ((char)bStack_69 < '\0') {
      func_0x000107c60e14(ppuStack_80);
    }
  }
  func_0x000107c60bd8();
FUN_100614e94:
                    /* WARNING: Could not recover jumptable at 0x000100614e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_1[3])();
  return;
}



/* Entry: 100614e94; end: 100614e9f;  */

void FUN_100614e94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100614e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 100614ea0; end: 100614ecb;  */

void FUN_100614ea0(long param_1,undefined8 param_2)

{
  func_0x0001004bd958();
                    /* WARNING: Could not recover jumptable at 0x000100614e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))((undefined8 *)(param_1 + 0x18),param_2);
  return;
}



/* Entry: 100614ecc; end: 100614ed3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_100614ecc(long param_1,long param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined *extraout_x8;
  undefined *extraout_x8_00;
  undefined *extraout_x8_01;
  undefined *extraout_x8_02;
  long *plVar12;
  long lVar13;
  int *piVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  ulong uVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 uStack_160;
  ulong uStack_158;
  long lStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  long alStack_130 [4];
  undefined8 uStack_110;
  long lStack_78;
  long lStack_70;
  
  lVar5 = *(long *)(param_1 + 0x10);
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = &PTR___tlv_bootstrap_11340d8b8;
  (*(code *)PTR___tlv_bootstrap_11340d8b8)(*(undefined8 *)(lVar5 + 0x20));
  puVar18 = *ppuVar6;
  *ppuVar6 = extraout_x8;
  ppuVar7 = &PTR___tlv_bootstrap_11340d8d0;
  (*(code *)PTR___tlv_bootstrap_11340d8d0)(*(undefined8 *)(lVar5 + 0x40));
  puVar19 = *ppuVar7;
  *ppuVar7 = extraout_x8_00;
  ppuVar8 = &PTR___tlv_bootstrap_11340d8e8;
  (*(code *)PTR___tlv_bootstrap_11340d8e8)(*(undefined8 *)(lVar5 + 0x48));
  puVar20 = *ppuVar8;
  *ppuVar8 = extraout_x8_01;
  ppuVar9 = &PTR___tlv_bootstrap_11340d900;
  (*(code *)PTR___tlv_bootstrap_11340d900)(lVar5 + 0x38);
  puVar21 = *ppuVar9;
  *ppuVar9 = extraout_x8_02;
  *(undefined8 *)(param_2 + 0x38) = 1;
  alStack_130[1] = 0;
  uStack_110 = 0;
  plVar12 = *(long **)(lVar5 + 0x10);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar3) {
      *plVar12 = *plVar12 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  bVar1 = *(byte *)(param_2 + 0x10);
  uVar11 = (uint)bVar1;
  alStack_130[0] = param_2;
  lStack_78 = lVar5;
  if ((bVar1 >> 6 & 1) == 0) {
    if (((bVar1 >> 3 & 1) == 0) ||
       (puVar15 = *(undefined4 **)(lVar5 + 0x70), puVar15 == (undefined4 *)0x0)) goto LAB_100615030;
    uVar16 = 3;
    switch(*puVar15) {
    case 1:
      uVar16 = 4;
    case 0:
      *puVar15 = uVar16;
      break;
    case 2:
      goto LAB_100615030;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      goto code_r0x000100615318;
    }
    lVar13 = *(long *)(param_2 + 8);
    *(undefined8 *)(puVar15 + 0xc) = *(undefined8 *)(lVar13 + 0x38);
    *(undefined8 *)(puVar15 + 2) = *(undefined8 *)(lVar13 + 0x48);
    *(code **)(puVar15 + 6) = FUN_10082b948;
    *(long *)(puVar15 + 8) = lVar5;
    *(undefined8 *)(puVar15 + 10) = 0;
    *(long *)(*(long *)(param_2 + 8) + 0x48) = *(long *)(lVar5 + 0x70) + 0x10;
    uVar11 = (uint)*(byte *)(param_2 + 0x10);
LAB_100615030:
    if ((uVar11 & 1) == 0) {
      if ((uVar11 >> 5 & 1) == 0) {
        uVar17 = *(ulong *)(lVar5 + 0xa0);
        if (uVar17 != 0) {
          if ((uVar17 & 1) != 0) {
            piVar14 = (int *)(uVar17 - 1);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
              if (bVar3) {
                *piVar14 = *piVar14 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          uStack_158 = uVar17;
          func_0x000104aaf3e8(alStack_130,&uStack_158,alStack_130 + 1);
          if ((uVar17 & 1) != 0) {
            FUN_10084dad0(uVar17);
          }
        }
      }
      else if (*(int *)(lVar5 + 0xac) == 5) {
        uVar17 = *(ulong *)(lVar5 + 0xa0);
        if ((uVar17 & 1) != 0) {
          piVar14 = (int *)(uVar17 - 1);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
            if (bVar3) {
              *piVar14 = *piVar14 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        uStack_148 = uVar17;
        func_0x000104aaf3e8(alStack_130,&uStack_148,alStack_130 + 1);
        if ((uVar17 & 1) != 0) {
          FUN_10084dad0(uVar17);
        }
      }
      else {
        if (*(int *)(lVar5 + 0xac) != 0) {
          uVar10 = 0x24a;
          goto LAB_1006152c0;
        }
        *(undefined4 *)(lVar5 + 0xac) = 2;
        if (*(long *)(param_2 + 0x38) != 0) {
          *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + 1;
        }
        lVar13 = *(long *)(param_2 + 8);
        *(undefined8 *)(lVar5 + 0x68) = *(undefined8 *)(lVar13 + 0x80);
        *(undefined8 *)(lVar5 + 0x78) = *(undefined8 *)(lVar13 + 0x90);
        *(long *)(lVar13 + 0x90) = lVar5 + 0x80;
        lStack_150 = param_2;
        FUN_1006153ac(&lStack_150);
      }
    }
    else if ((*(int *)(lVar5 + 0xa8) == 3) || (*(int *)(lVar5 + 0xac) == 5)) {
      uVar17 = *(ulong *)(lVar5 + 0xa0);
      if ((uVar17 & 1) != 0) {
        piVar14 = (int *)(uVar17 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar3) {
            *piVar14 = *piVar14 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_140 = uVar17;
      func_0x000104aaf3e8(alStack_130,&uStack_140,alStack_130 + 1);
      if ((uVar17 & 1) != 0) {
        FUN_10084dad0(uVar17);
      }
    }
    else {
      if (*(int *)(lVar5 + 0xa8) != 0) {
        uVar10 = 0x237;
LAB_1006152c0:
        FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
                      ,uVar10,2,"assertion failed: %s");
        func_0x000107c60ebc();
        goto LAB_10061531c;
      }
      *(undefined4 *)(lVar5 + 0xa8) = 1;
      if ((*(byte *)(param_2 + 0x10) >> 5 & 1) != 0) {
        if (*(int *)(lVar5 + 0xac) != 0) {
          uVar10 = 0x23c;
          goto LAB_1006152c0;
        }
        *(undefined4 *)(lVar5 + 0xac) = 1;
      }
      FUN_100615414(lVar5 + 0x60,alStack_130);
      FUN_1006154b8(lVar5,alStack_130 + 1);
    }
    if (alStack_130[0] != 0) {
      lVar13 = *(long *)(lVar5 + 0x10);
      FUN_1004bd910(lVar13,*(long *)(lVar13 + 0x28) + -1);
      if (lVar13 == *(long *)(lVar5 + 0x18)) {
        uStack_160 = 4;
        func_0x000104aaf3e8(alStack_130,&uStack_160,alStack_130 + 1);
      }
      else {
LAB_100615234:
        func_0x00010061664c(alStack_130,alStack_130 + 1);
      }
    }
  }
  else {
    if ((bVar1 & 0x3f) != 0) {
      uVar10 = 0x1ff;
      goto LAB_1006152c0;
    }
    uVar17 = *(ulong *)(*(long *)(param_2 + 8) + 0x98);
    if ((uVar17 & 1) != 0) {
      piVar14 = (int *)(uVar17 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar3) {
          *piVar14 = *piVar14 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_138 = uVar17;
    func_0x000104aaf50c(lVar5,&uStack_138);
    if ((uVar17 & 1) != 0) {
      FUN_10084dad0(uVar17);
    }
    lVar13 = *(long *)(lVar5 + 0x10);
    FUN_1004bd910(lVar13,*(long *)(lVar13 + 0x28) + -1);
    if (lVar13 != *(long *)(lVar5 + 0x18)) goto LAB_100615234;
    func_0x000104aaf338(alStack_130,alStack_130 + 1);
  }
  FUN_10061694c(alStack_130 + 1);
  FUN_1006153ac(alStack_130);
  *ppuVar9 = puVar21;
  *ppuVar8 = puVar20;
  *ppuVar7 = puVar19;
  *ppuVar6 = puVar18;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  func_0x000107c60e78();
code_r0x000100615318:
  func_0x000107c60ebc();
LAB_10061531c:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x100615320);
  (*pcVar4)();
}



/* Entry: 100614ed4; end: 1006153ab;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_100614ed4(long param_1,long param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined *extraout_x8;
  undefined *extraout_x8_00;
  undefined *extraout_x8_01;
  undefined *extraout_x8_02;
  long *plVar11;
  long lVar12;
  int *piVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined8 uStack_160;
  ulong uStack_158;
  long lStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  long alStack_130 [4];
  undefined8 uStack_110;
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = &PTR___tlv_bootstrap_11340d8b8;
  (*(code *)PTR___tlv_bootstrap_11340d8b8)(*(undefined8 *)(param_1 + 0x20));
  puVar17 = *ppuVar5;
  *ppuVar5 = extraout_x8;
  ppuVar6 = &PTR___tlv_bootstrap_11340d8d0;
  (*(code *)PTR___tlv_bootstrap_11340d8d0)(*(undefined8 *)(param_1 + 0x40));
  puVar18 = *ppuVar6;
  *ppuVar6 = extraout_x8_00;
  ppuVar7 = &PTR___tlv_bootstrap_11340d8e8;
  (*(code *)PTR___tlv_bootstrap_11340d8e8)(*(undefined8 *)(param_1 + 0x48));
  puVar19 = *ppuVar7;
  *ppuVar7 = extraout_x8_01;
  ppuVar8 = &PTR___tlv_bootstrap_11340d900;
  (*(code *)PTR___tlv_bootstrap_11340d900)(param_1 + 0x38);
  puVar20 = *ppuVar8;
  *ppuVar8 = extraout_x8_02;
  *(undefined8 *)(param_2 + 0x38) = 1;
  alStack_130[1] = 0;
  uStack_110 = 0;
  plVar11 = *(long **)(param_1 + 0x10);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar3) {
      *plVar11 = *plVar11 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  bVar1 = *(byte *)(param_2 + 0x10);
  uVar10 = (uint)bVar1;
  alStack_130[0] = param_2;
  lStack_78 = param_1;
  if ((bVar1 >> 6 & 1) == 0) {
    if (((bVar1 >> 3 & 1) == 0) ||
       (puVar14 = *(undefined4 **)(param_1 + 0x70), puVar14 == (undefined4 *)0x0))
    goto LAB_100615030;
    uVar15 = 3;
    switch(*puVar14) {
    case 1:
      uVar15 = 4;
    case 0:
      *puVar14 = uVar15;
      break;
    case 2:
      goto LAB_100615030;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      goto code_r0x000100615318;
    }
    lVar12 = *(long *)(param_2 + 8);
    *(undefined8 *)(puVar14 + 0xc) = *(undefined8 *)(lVar12 + 0x38);
    *(undefined8 *)(puVar14 + 2) = *(undefined8 *)(lVar12 + 0x48);
    *(code **)(puVar14 + 6) = FUN_10082b948;
    *(long *)(puVar14 + 8) = param_1;
    *(undefined8 *)(puVar14 + 10) = 0;
    *(long *)(*(long *)(param_2 + 8) + 0x48) = *(long *)(param_1 + 0x70) + 0x10;
    uVar10 = (uint)*(byte *)(param_2 + 0x10);
LAB_100615030:
    if ((uVar10 & 1) == 0) {
      if ((uVar10 >> 5 & 1) == 0) {
        uVar16 = *(ulong *)(param_1 + 0xa0);
        if (uVar16 != 0) {
          if ((uVar16 & 1) != 0) {
            piVar13 = (int *)(uVar16 - 1);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
              if (bVar3) {
                *piVar13 = *piVar13 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          uStack_158 = uVar16;
          func_0x000104aaf3e8(alStack_130,&uStack_158,alStack_130 + 1);
          if ((uVar16 & 1) != 0) {
            FUN_10084dad0(uVar16);
          }
        }
      }
      else if (*(int *)(param_1 + 0xac) == 5) {
        uVar16 = *(ulong *)(param_1 + 0xa0);
        if ((uVar16 & 1) != 0) {
          piVar13 = (int *)(uVar16 - 1);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
            if (bVar3) {
              *piVar13 = *piVar13 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        uStack_148 = uVar16;
        func_0x000104aaf3e8(alStack_130,&uStack_148,alStack_130 + 1);
        if ((uVar16 & 1) != 0) {
          FUN_10084dad0(uVar16);
        }
      }
      else {
        if (*(int *)(param_1 + 0xac) != 0) {
          uVar9 = 0x24a;
          goto LAB_1006152c0;
        }
        *(undefined4 *)(param_1 + 0xac) = 2;
        if (*(long *)(param_2 + 0x38) != 0) {
          *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + 1;
        }
        lVar12 = *(long *)(param_2 + 8);
        *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(lVar12 + 0x80);
        *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(lVar12 + 0x90);
        *(long *)(lVar12 + 0x90) = param_1 + 0x80;
        lStack_150 = param_2;
        FUN_1006153ac(&lStack_150);
      }
    }
    else if ((*(int *)(param_1 + 0xa8) == 3) || (*(int *)(param_1 + 0xac) == 5)) {
      uVar16 = *(ulong *)(param_1 + 0xa0);
      if ((uVar16 & 1) != 0) {
        piVar13 = (int *)(uVar16 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar3) {
            *piVar13 = *piVar13 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_140 = uVar16;
      func_0x000104aaf3e8(alStack_130,&uStack_140,alStack_130 + 1);
      if ((uVar16 & 1) != 0) {
        FUN_10084dad0(uVar16);
      }
    }
    else {
      if (*(int *)(param_1 + 0xa8) != 0) {
        uVar9 = 0x237;
LAB_1006152c0:
        FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
                      ,uVar9,2,"assertion failed: %s");
        func_0x000107c60ebc();
        goto LAB_10061531c;
      }
      *(undefined4 *)(param_1 + 0xa8) = 1;
      if ((*(byte *)(param_2 + 0x10) >> 5 & 1) != 0) {
        if (*(int *)(param_1 + 0xac) != 0) {
          uVar9 = 0x23c;
          goto LAB_1006152c0;
        }
        *(undefined4 *)(param_1 + 0xac) = 1;
      }
      FUN_100615414(param_1 + 0x60,alStack_130);
      FUN_1006154b8(param_1,alStack_130 + 1);
    }
    if (alStack_130[0] != 0) {
      lVar12 = *(long *)(param_1 + 0x10);
      FUN_1004bd910(lVar12,*(long *)(lVar12 + 0x28) + -1);
      if (lVar12 == *(long *)(param_1 + 0x18)) {
        uStack_160 = 4;
        func_0x000104aaf3e8(alStack_130,&uStack_160,alStack_130 + 1);
      }
      else {
LAB_100615234:
        func_0x00010061664c(alStack_130,alStack_130 + 1);
      }
    }
  }
  else {
    if ((bVar1 & 0x3f) != 0) {
      uVar9 = 0x1ff;
      goto LAB_1006152c0;
    }
    uVar16 = *(ulong *)(*(long *)(param_2 + 8) + 0x98);
    if ((uVar16 & 1) != 0) {
      piVar13 = (int *)(uVar16 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar3) {
          *piVar13 = *piVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_138 = uVar16;
    func_0x000104aaf50c(param_1,&uStack_138);
    if ((uVar16 & 1) != 0) {
      FUN_10084dad0(uVar16);
    }
    lVar12 = *(long *)(param_1 + 0x10);
    FUN_1004bd910(lVar12,*(long *)(lVar12 + 0x28) + -1);
    if (lVar12 != *(long *)(param_1 + 0x18)) goto LAB_100615234;
    func_0x000104aaf338(alStack_130,alStack_130 + 1);
  }
  FUN_10061694c(alStack_130 + 1);
  FUN_1006153ac(alStack_130);
  *ppuVar8 = puVar20;
  *ppuVar7 = puVar19;
  *ppuVar6 = puVar18;
  *ppuVar5 = puVar17;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  func_0x000107c60e78();
code_r0x000100615318:
  func_0x000107c60ebc();
LAB_10061531c:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x100615320);
  (*pcVar4)();
}



/* Entry: 1006153ac; end: 100615413;  */

void FUN_1006153ac(long *param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (((lVar3 != 0) && (*(long *)(lVar3 + 0x38) != 0)) &&
     (lVar1 = *(long *)(lVar3 + 0x38) + -1, *(long *)(lVar3 + 0x38) = lVar1, lVar1 == 0)) {
    FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
                  ,0x6b,2,"assertion failed: %s");
    func_0x000107c60ebc();
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100615410);
    (*pcVar2)();
  }
  return;
}



/* Entry: 100615414; end: 100615467;  */

long * FUN_100615414(long *param_1,long *param_2)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = *param_2;
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x38) != 0)) {
    *(long *)(lVar1 + 0x38) = *(long *)(lVar1 + 0x38) + 1;
  }
  lStack_28 = *param_1;
  *param_1 = lVar1;
  FUN_1006153ac(&lStack_28);
  return param_1;
}



/* Entry: 100615468; end: 1006154b7;  */

undefined1 * FUN_100615468(undefined8 *param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined ***pppuVar2;
  undefined1 *puVar3;
  undefined8 *extraout_x8;
  undefined1 *extraout_x8_00;
  long lVar4;
  undefined8 extraout_x10;
  long *plVar5;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined8 *puStack_80;
  undefined ***pppuStack_70;
  undefined1 auStack_68 [32];
  long lStack_48;
  
  param_1[1] = param_2;
  param_1[2] = param_3;
  *(undefined1 *)(param_1 + 3) = 0;
  if (*(long *)(param_2 + 0xb0) == 0) {
    *(undefined8 **)(param_2 + 0xb0) = param_1;
    func_0x00010047a478(param_1);
    *extraout_x8 = *param_1;
    func_0x00010047a478();
    *param_1 = extraout_x10;
    extraout_x8_00[0x19] = 1;
    return extraout_x8_00;
  }
  func_0x000107c2c328();
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(int *)(param_1 + 0x15) != 1) {
    func_0x000107c2c304();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006155e4);
    (*pcVar1)();
  }
  plVar5 = *(long **)(param_1[3] + 8);
  FUN_100615468(auStack_68,param_1,param_2);
  ppuStack_88 = &PTR_DAT_1107c4e48;
  pppuStack_70 = &ppuStack_88;
  puStack_80 = param_1;
  (**(code **)(*plVar5 + 8))
            (&ppuStack_90,plVar5,**(undefined8 **)(param_1[0xc] + 8),param_1[10],&ppuStack_88);
  (**(code **)(*(long *)param_1[0xb] + 8))();
  param_1[0xb] = ppuStack_90;
  ppuStack_90 = &PTR_PTR_1130a5848;
  (**(code **)(PTR_PTR_1130a5848 + 8))();
  if (pppuStack_70 == &ppuStack_88) {
    lVar4 = 4;
    pppuVar2 = &ppuStack_88;
  }
  else {
    if (pppuStack_70 == (undefined ***)0x0) goto LAB_1006155a0;
    lVar4 = 5;
    pppuVar2 = pppuStack_70;
  }
  (*(code *)(*pppuVar2)[lVar4])();
LAB_1006155a0:
  FUN_100615bc4(auStack_68);
  puVar3 = auStack_68;
  FUN_1006167fc(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar3;
  }
  func_0x000107c60e78();
  FUN_1006167fc(auStack_68);
  func_0x000107c60bd8(puVar3);
  func_0x000107c60bd8();
  puVar3 = (undefined1 *)plVar5[2];
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(puVar3);
  return puVar3;
}



/* Entry: 1006154b8; end: 100615643;  */

void FUN_1006154b8(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined ***pppuVar2;
  undefined1 *puVar3;
  long lVar4;
  long *plVar5;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  undefined ***pppuStack_60;
  undefined1 auStack_58 [32];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(int *)(param_1 + 0xa8) != 1) {
    func_0x000107c2c304();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006155e4);
    (*pcVar1)();
  }
  plVar5 = *(long **)(*(long *)(param_1 + 0x18) + 8);
  FUN_100615468(auStack_58,param_1,param_2);
  ppuStack_78 = &PTR_DAT_1107c4e48;
  pppuStack_60 = &ppuStack_78;
  lStack_70 = param_1;
  (**(code **)(*plVar5 + 8))
            (&ppuStack_80,plVar5,**(undefined8 **)(*(long *)(param_1 + 0x60) + 8),
             *(undefined8 *)(param_1 + 0x50),&ppuStack_78);
  (**(code **)(**(long **)(param_1 + 0x58) + 8))();
  *(undefined ***)(param_1 + 0x58) = ppuStack_80;
  ppuStack_80 = &PTR_PTR_1130a5848;
  (**(code **)(PTR_PTR_1130a5848 + 8))();
  if (pppuStack_60 == &ppuStack_78) {
    lVar4 = 4;
    pppuVar2 = &ppuStack_78;
  }
  else {
    if (pppuStack_60 == (undefined ***)0x0) goto LAB_1006155a0;
    lVar4 = 5;
    pppuVar2 = pppuStack_60;
  }
  (*(code *)(*pppuVar2)[lVar4])();
LAB_1006155a0:
  FUN_100615bc4(auStack_58);
  puVar3 = auStack_58;
  FUN_1006167fc(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  func_0x000107c60e78();
  FUN_1006167fc(auStack_58);
  func_0x000107c60bd8(puVar3);
  func_0x000107c60bd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(plVar5[2]);
  return;
}



/* Entry: 100615644; end: 10061564b;  */

void FUN_100615644(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10061564c; end: 100615737;  */

undefined ** FUN_10061564c(uint *param_1,ulong *param_2,ulong param_3,long param_4)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  uint *puVar6;
  ulong *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  ulong **ppuVar10;
  undefined1 uVar11;
  long lVar12;
  undefined8 *extraout_x8;
  long *plVar13;
  ulong uVar14;
  undefined8 *extraout_x8_00;
  undefined *puVar15;
  undefined *extraout_x8_01;
  undefined *puVar16;
  long lVar17;
  ulong uVar18;
  undefined4 *puVar19;
  undefined4 *extraout_x9;
  undefined4 uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined **ppuStack_138;
  undefined1 auStack_130 [8];
  undefined **ppuStack_128;
  ulong *puStack_120;
  undefined **ppuStack_118;
  long *plStack_110;
  ulong uStack_108;
  undefined **ppuStack_100;
  ulong uStack_f8;
  ulong *puStack_f0;
  ulong uStack_e8;
  long lStack_d8;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *param_1;
  *param_1 = uVar2 | 0x4000;
  if ((uVar2 >> 0xe & 1) == 0) {
    uVar21 = param_2[1];
    puVar15 = (undefined *)*param_2;
    uVar14 = param_2[3];
    uVar18 = param_2[2];
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    *(ulong *)(param_1 + 0x56) = uVar21;
    *(undefined **)(param_1 + 0x54) = puVar15;
    *(ulong *)(param_1 + 0x5a) = uVar14;
    *(ulong *)(param_1 + 0x58) = uVar18;
    puVar6 = param_1;
  }
  else {
    uVar18 = *param_2;
    uVar14 = param_2[3];
    uVar22 = param_2[2];
    uVar21 = param_2[1];
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    puVar6 = *(uint **)(param_1 + 0x54);
    *(ulong *)(param_1 + 0x54) = uVar18;
    *(ulong *)(param_1 + 0x58) = uVar22;
    *(ulong *)(param_1 + 0x56) = uVar21;
    *(ulong *)(param_1 + 0x5a) = uVar14;
    if ((uint *)0x1 < puVar6) {
      do {
        lVar12 = *(long *)puVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar6,0x10);
        if (bVar4) {
          *(long *)puVar6 = lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar12 + -1 == 0) {
        (**(code **)(puVar6 + 2))();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return (undefined **)(param_1 + 0x54);
  }
  func_0x000107c60e78();
  if ((int)param_2 == 0) {
    func_0x000107c60bd8();
  }
  func_0x000104bd46a0();
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(uint *)(param_2 + 0x35) = (uint)(byte)puVar6[0xc] << 1;
  *(uint *)(param_2 + 0x34) = puVar6[2];
  *(undefined1 *)(param_2 + 0x33) = 0;
  *(uint *)param_2 = (uint)*param_2 | 0x74;
  *(uint *)((long)param_2 + 0x19c) = 0;
  plVar13 = *(long **)(puVar6 + 4);
  if ((long *)0x1 < plVar13) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *plVar13 = *plVar13 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_108 = *(ulong *)(puVar6 + 6);
  plStack_110 = *(long **)(puVar6 + 4);
  uStack_f8 = *(ulong *)(puVar6 + 10);
  ppuStack_100 = *(undefined ***)(puVar6 + 8);
  FUN_10061564c(param_2,&plStack_110);
  if ((long *)0x1 < plStack_110) {
    do {
      lVar17 = *plStack_110;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_110,0x10);
      if (bVar4) {
        *plStack_110 = lVar17 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar17 + -1 == 0) {
      (*(code *)plStack_110[1])();
    }
  }
  ppuVar8 = &PTR___tlv_bootstrap_11340d8b8;
  (*(code *)PTR___tlv_bootstrap_11340d8b8)();
  puStack_f0 = (ulong *)*ppuVar8;
  do {
    uVar14 = *puStack_f0;
    uVar18 = uVar14 + 0x10;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puStack_f0,0x10);
    if (bVar4) {
      *puStack_f0 = uVar18;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (puStack_f0[2] < uVar18) {
    FUN_1004bbee0(puStack_f0,0x10);
  }
  else {
    puStack_f0 = (ulong *)((long)puStack_f0 + uVar14 + 0x30);
  }
  *puStack_f0 = 0;
  puStack_f0[1] = 0;
  puStack_120 = param_2;
  ppuStack_118 = (undefined **)puStack_f0;
  if (*(long **)(param_4 + 0x18) == (long *)0x0) {
    func_0x000104a71f98();
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100615988);
    (*pcVar5)();
  }
  ppuVar10 = &puStack_120;
  (**(code **)(**(long **)(param_4 + 0x18) + 0x30))(&ppuStack_138);
  ppuVar9 = ppuStack_138;
  ppuStack_138 = &PTR_PTR_1130a5848;
  auStack_130[0] = 0;
  ppuStack_128 = ppuVar9;
  (**(code **)(PTR_PTR_1130a5848 + 8))(&PTR_PTR_1130a5848);
  puStack_120 = (ulong *)((ulong)puStack_120 & 0xffffffffffffff00);
  ppuStack_128 = &PTR_PTR_1130a5848;
  plStack_110 = (long *)((ulong)plStack_110 & 0xffffffffffffff00);
  uStack_f8 = uStack_f8 & 0xffffffffffffff00;
  uStack_108 = uStack_108 & 0xffffffffffffff00;
  ppuStack_100 = ppuVar9;
  ppuStack_118 = &PTR_PTR_1130a5848;
  uStack_e8 = param_3;
  FUN_100615b10(&puStack_120);
  puVar7 = (ulong *)*ppuVar8;
  do {
    uVar14 = *puVar7;
    uVar18 = uVar14 + 0x40;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar7,0x10);
    if (bVar4) {
      *puVar7 = uVar18;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (puVar7[2] < uVar18) {
    ppuVar10 = (ulong **)0x40;
    FUN_1004bbee0();
    uVar11 = plStack_110._0_1_;
  }
  else {
    uVar11 = 0;
    puVar7 = (ulong *)((long)puVar7 + uVar14 + 0x30);
  }
  *puVar7 = (ulong)&PTR_FUN_1107c38e8;
  *(undefined1 *)(puVar7 + 1) = uVar11;
  *(undefined1 *)(puVar7 + 4) = 0;
  puVar7[5] = (ulong)puStack_f0;
  puVar7[6] = uStack_e8;
  *(undefined1 *)(puVar7 + 2) = 0;
  puVar7[3] = (ulong)ppuStack_100;
  ppuStack_100 = &PTR_PTR_1130a5848;
  *extraout_x8 = puVar7;
  FUN_100615b60(&plStack_110);
  FUN_100615b10(auStack_130);
  ppuVar8 = ppuStack_138;
  (**(code **)(*ppuStack_138 + 8))();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return ppuVar8;
  }
  func_0x000107c60e78();
  if ((int)ppuVar10 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(&plStack_110);
  }
  func_0x000107c60bd8();
  puVar7 = *ppuVar10;
  puVar1 = ppuVar10[1];
  *ppuVar10 = (ulong *)0x0;
  ppuVar8 = (undefined **)ppuVar8[1];
  puVar15 = ppuVar8[0x16];
  if (puVar15 == (undefined *)0x0) {
    func_0x000107c2c310();
LAB_100615b00:
    func_0x000107c2c31c();
  }
  else {
    if (*(int *)(ppuVar8 + 0x15) != 1) goto LAB_100615b00;
    **(undefined8 **)(ppuVar8[0xc] + 8) = puVar7;
    puVar19 = (undefined4 *)ppuVar8[0xe];
    if (puVar19 == (undefined4 *)0x0) {
      if (puVar1 == (ulong *)0x0) goto LAB_100615a9c;
      func_0x000107c2c314();
      puVar15 = extraout_x8_01;
      puVar19 = extraout_x9;
code_r0x000100615a84:
      uVar20 = 4;
LAB_100615a90:
      *puVar19 = uVar20;
      puVar15[0x18] = 1;
LAB_100615a9c:
      ppuVar9 = &PTR___tlv_bootstrap_11340d8b8;
      (*(code *)PTR___tlv_bootstrap_11340d8b8)();
      ppuVar9 = (undefined **)*ppuVar9;
      do {
        puVar16 = *ppuVar9;
        puVar15 = puVar16 + 0x10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
        if (bVar4) {
          *ppuVar9 = puVar15;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (ppuVar9[2] < puVar15) {
        FUN_1004bbee0(ppuVar9,0x10);
      }
      else {
        ppuVar9 = (undefined **)((long)ppuVar9 + (long)(puVar16 + 0x30));
      }
      *ppuVar9 = (undefined *)&PTR_FUN_1107c4ec8;
      ppuVar9[1] = (undefined *)ppuVar8;
      *extraout_x8_00 = ppuVar9;
      return ppuVar9;
    }
    if (puVar1 != (ulong *)0x0) {
      *(ulong **)(puVar19 + 0xe) = puVar1;
      switch(*puVar19) {
      case 0:
        *puVar19 = 1;
        break;
      case 1:
      case 2:
      case 4:
      case 6:
      case 7:
      case 8:
        goto code_r0x000100615b08;
      case 3:
        goto code_r0x000100615a84;
      case 5:
        uVar20 = 6;
        goto LAB_100615a90;
      }
      goto LAB_100615a9c;
    }
  }
  func_0x000107c2c318();
code_r0x000100615b08:
  func_0x000107c60ebc();
  return ppuVar8;
}



/* Entry: 100615738; end: 1006159f3;  */

void FUN_100615738(undefined8 *param_1,long param_2,uint *param_3,ulong param_4,long param_5)

{
  ulong uVar1;
  uint *puVar2;
  uint *puVar3;
  char cVar4;
  bool bVar5;
  undefined **ppuVar6;
  code *pcVar7;
  undefined **ppuVar8;
  ulong *puVar9;
  undefined *puVar10;
  uint **ppuVar11;
  undefined1 uVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *extraout_x8;
  long extraout_x8_00;
  undefined4 *puVar16;
  undefined4 *extraout_x9;
  undefined4 uVar17;
  undefined **ppuStack_a8;
  undefined1 auStack_a0 [8];
  undefined **ppuStack_98;
  uint *puStack_90;
  undefined **ppuStack_88;
  long *plStack_80;
  ulong uStack_78;
  undefined **ppuStack_70;
  ulong uStack_68;
  ulong *puStack_60;
  ulong uStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_3[0x6a] = (uint)*(byte *)(param_2 + 0x30) << 1;
  param_3[0x68] = *(uint *)(param_2 + 8);
  *(undefined1 *)(param_3 + 0x66) = 0;
  *param_3 = *param_3 | 0x74;
  param_3[0x67] = 0;
  plVar13 = *(long **)(param_2 + 0x10);
  if ((long *)0x1 < plVar13) {
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *plVar13 = *plVar13 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uStack_78 = *(ulong *)(param_2 + 0x18);
  plStack_80 = *(long **)(param_2 + 0x10);
  uStack_68 = *(ulong *)(param_2 + 0x28);
  ppuStack_70 = *(undefined ***)(param_2 + 0x20);
  FUN_10061564c(param_3,&plStack_80);
  if ((long *)0x1 < plStack_80) {
    do {
      lVar14 = *plStack_80;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plStack_80,0x10);
      if (bVar5) {
        *plStack_80 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 + -1 == 0) {
      (*(code *)plStack_80[1])();
    }
  }
  ppuVar8 = &PTR___tlv_bootstrap_11340d8b8;
  (*(code *)PTR___tlv_bootstrap_11340d8b8)();
  puStack_60 = (ulong *)*ppuVar8;
  do {
    uVar15 = *puStack_60;
    uVar1 = uVar15 + 0x10;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puStack_60,0x10);
    if (bVar5) {
      *puStack_60 = uVar1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (puStack_60[2] < uVar1) {
    FUN_1004bbee0(puStack_60,0x10);
  }
  else {
    puStack_60 = (ulong *)((long)puStack_60 + uVar15 + 0x30);
  }
  *puStack_60 = 0;
  puStack_60[1] = 0;
  puStack_90 = param_3;
  ppuStack_88 = (undefined **)puStack_60;
  if (*(long **)(param_5 + 0x18) == (long *)0x0) {
    func_0x000104a71f98();
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x100615988);
    (*pcVar7)();
  }
  ppuVar11 = &puStack_90;
  (**(code **)(**(long **)(param_5 + 0x18) + 0x30))(&ppuStack_a8);
  ppuVar6 = ppuStack_a8;
  ppuStack_a8 = &PTR_PTR_1130a5848;
  auStack_a0[0] = 0;
  ppuStack_98 = ppuVar6;
  (**(code **)(PTR_PTR_1130a5848 + 8))(&PTR_PTR_1130a5848);
  puStack_90 = (uint *)((ulong)puStack_90 & 0xffffffffffffff00);
  ppuStack_98 = &PTR_PTR_1130a5848;
  plStack_80 = (long *)((ulong)plStack_80 & 0xffffffffffffff00);
  uStack_68 = uStack_68 & 0xffffffffffffff00;
  uStack_78 = uStack_78 & 0xffffffffffffff00;
  ppuStack_70 = ppuVar6;
  ppuStack_88 = &PTR_PTR_1130a5848;
  uStack_58 = param_4;
  FUN_100615b10(&puStack_90);
  puVar9 = (ulong *)*ppuVar8;
  do {
    uVar15 = *puVar9;
    uVar1 = uVar15 + 0x40;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar9,0x10);
    if (bVar5) {
      *puVar9 = uVar1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (puVar9[2] < uVar1) {
    ppuVar11 = (uint **)0x40;
    FUN_1004bbee0();
    uVar12 = plStack_80._0_1_;
  }
  else {
    uVar12 = 0;
    puVar9 = (ulong *)((long)puVar9 + uVar15 + 0x30);
  }
  *puVar9 = (ulong)&PTR_FUN_1107c38e8;
  *(undefined1 *)(puVar9 + 1) = uVar12;
  *(undefined1 *)(puVar9 + 4) = 0;
  puVar9[5] = (ulong)puStack_60;
  puVar9[6] = uStack_58;
  *(undefined1 *)(puVar9 + 2) = 0;
  puVar9[3] = (ulong)ppuStack_70;
  ppuStack_70 = &PTR_PTR_1130a5848;
  *param_1 = puVar9;
  FUN_100615b60(&plStack_80);
  FUN_100615b10(auStack_a0);
  ppuVar8 = ppuStack_a8;
  (**(code **)(*ppuStack_a8 + 8))();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  if ((int)ppuVar11 != 0) {
    func_0x000104bd46a0();
    FUN_1004b6d90(&plStack_80);
  }
  func_0x000107c60bd8();
  puVar2 = *ppuVar11;
  puVar3 = ppuVar11[1];
  *ppuVar11 = (uint *)0x0;
  puVar10 = ppuVar8[1];
  lVar14 = *(long *)(puVar10 + 0xb0);
  if (lVar14 == 0) {
    func_0x000107c2c310();
LAB_100615b00:
    func_0x000107c2c31c();
  }
  else {
    if (*(int *)(puVar10 + 0xa8) != 1) goto LAB_100615b00;
    **(undefined8 **)(*(long *)(puVar10 + 0x60) + 8) = puVar2;
    puVar16 = *(undefined4 **)(puVar10 + 0x70);
    if (puVar16 == (undefined4 *)0x0) {
      if (puVar3 == (uint *)0x0) goto LAB_100615a9c;
      func_0x000107c2c314();
      lVar14 = extraout_x8_00;
      puVar16 = extraout_x9;
code_r0x000100615a84:
      uVar17 = 4;
LAB_100615a90:
      *puVar16 = uVar17;
      *(undefined1 *)(lVar14 + 0x18) = 1;
LAB_100615a9c:
      ppuVar8 = &PTR___tlv_bootstrap_11340d8b8;
      (*(code *)PTR___tlv_bootstrap_11340d8b8)();
      puVar9 = (ulong *)*ppuVar8;
      do {
        uVar15 = *puVar9;
        uVar1 = uVar15 + 0x10;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar9,0x10);
        if (bVar5) {
          *puVar9 = uVar1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (puVar9[2] < uVar1) {
        FUN_1004bbee0(puVar9,0x10);
      }
      else {
        puVar9 = (ulong *)((long)puVar9 + uVar15 + 0x30);
      }
      *puVar9 = (ulong)&PTR_FUN_1107c4ec8;
      puVar9[1] = (ulong)puVar10;
      *extraout_x8 = puVar9;
      return;
    }
    if (puVar3 != (uint *)0x0) {
      *(uint **)(puVar16 + 0xe) = puVar3;
      switch(*puVar16) {
      case 0:
        *puVar16 = 1;
        break;
      case 1:
      case 2:
      case 4:
      case 6:
      case 7:
      case 8:
        goto code_r0x000100615b08;
      case 3:
        goto code_r0x000100615a84;
      case 5:
        uVar17 = 6;
        goto LAB_100615a90;
      }
      goto LAB_100615a9c;
    }
  }
  func_0x000107c2c318();
code_r0x000100615b08:
  func_0x000107c60ebc();
  return;
}



/* Entry: 1006159f4; end: 100615a07;  */

void FUN_1006159f4(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined **ppuVar7;
  ulong *puVar8;
  long lVar9;
  long extraout_x8;
  ulong uVar10;
  undefined4 *puVar11;
  undefined4 *extraout_x9;
  undefined4 uVar12;
  
  uVar2 = *param_3;
  lVar3 = param_3[1];
  *param_3 = 0;
  uVar6 = *(ulong *)(param_2 + 8);
  lVar9 = *(long *)(uVar6 + 0xb0);
  if (lVar9 == 0) {
    func_0x000107c2c310();
LAB_100615b00:
    func_0x000107c2c31c();
  }
  else {
    if (*(int *)(uVar6 + 0xa8) != 1) goto LAB_100615b00;
    **(undefined8 **)(*(long *)(uVar6 + 0x60) + 8) = uVar2;
    puVar11 = *(undefined4 **)(uVar6 + 0x70);
    if (puVar11 == (undefined4 *)0x0) {
      if (lVar3 == 0) goto LAB_100615a9c;
      func_0x000107c2c314();
      lVar9 = extraout_x8;
      puVar11 = extraout_x9;
code_r0x000100615a84:
      uVar12 = 4;
LAB_100615a90:
      *puVar11 = uVar12;
      *(undefined1 *)(lVar9 + 0x18) = 1;
LAB_100615a9c:
      ppuVar7 = &PTR___tlv_bootstrap_11340d8b8;
      (*(code *)PTR___tlv_bootstrap_11340d8b8)();
      puVar8 = (ulong *)*ppuVar7;
      do {
        uVar10 = *puVar8;
        uVar1 = uVar10 + 0x10;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar8,0x10);
        if (bVar5) {
          *puVar8 = uVar1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (puVar8[2] < uVar1) {
        FUN_1004bbee0(puVar8,0x10);
      }
      else {
        puVar8 = (ulong *)((long)puVar8 + uVar10 + 0x30);
      }
      *puVar8 = (ulong)&PTR_FUN_1107c4ec8;
      puVar8[1] = uVar6;
      *param_1 = puVar8;
      return;
    }
    if (lVar3 != 0) {
      *(long *)(puVar11 + 0xe) = lVar3;
      switch(*puVar11) {
      case 0:
        *puVar11 = 1;
        break;
      case 1:
      case 2:
      case 4:
      case 6:
      case 7:
      case 8:
        goto code_r0x000100615b08;
      case 3:
        goto code_r0x000100615a84;
      case 5:
        uVar12 = 6;
        goto LAB_100615a90;
      }
      goto LAB_100615a9c;
    }
  }
  func_0x000107c2c318();
code_r0x000100615b08:
  func_0x000107c60ebc();
  return;
}



/* Entry: 100615a08; end: 100615b0b;  */

void FUN_100615a08(undefined8 *param_1,ulong param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  ulong *puVar5;
  long lVar6;
  long extraout_x8;
  ulong uVar7;
  undefined4 *puVar8;
  undefined4 *extraout_x9;
  undefined4 uVar9;
  
  lVar6 = *(long *)(param_2 + 0xb0);
  if (lVar6 == 0) {
    func_0x000107c2c310();
LAB_100615b00:
    func_0x000107c2c31c();
  }
  else {
    if (*(int *)(param_2 + 0xa8) != 1) goto LAB_100615b00;
    **(undefined8 **)(*(long *)(param_2 + 0x60) + 8) = param_3;
    puVar8 = *(undefined4 **)(param_2 + 0x70);
    if (puVar8 == (undefined4 *)0x0) {
      if (param_4 == 0) goto LAB_100615a9c;
      func_0x000107c2c314();
      lVar6 = extraout_x8;
      puVar8 = extraout_x9;
code_r0x000100615a84:
      uVar9 = 4;
LAB_100615a90:
      *puVar8 = uVar9;
      *(undefined1 *)(lVar6 + 0x18) = 1;
LAB_100615a9c:
      ppuVar4 = &PTR___tlv_bootstrap_11340d8b8;
      (*(code *)PTR___tlv_bootstrap_11340d8b8)();
      puVar5 = (ulong *)*ppuVar4;
      do {
        uVar7 = *puVar5;
        uVar1 = uVar7 + 0x10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar3) {
          *puVar5 = uVar1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (puVar5[2] < uVar1) {
        FUN_1004bbee0(puVar5,0x10);
      }
      else {
        puVar5 = (ulong *)((long)puVar5 + uVar7 + 0x30);
      }
      *puVar5 = (ulong)&PTR_FUN_1107c4ec8;
      puVar5[1] = param_2;
      *param_1 = puVar5;
      return;
    }
    if (param_4 != 0) {
      *(long *)(puVar8 + 0xe) = param_4;
      switch(*puVar8) {
      case 0:
        *puVar8 = 1;
        break;
      case 1:
      case 2:
      case 4:
      case 6:
      case 7:
      case 8:
        goto code_r0x000100615b08;
      case 3:
        goto code_r0x000100615a84;
      case 5:
        uVar9 = 6;
        goto LAB_100615a90;
      }
      goto LAB_100615a9c;
    }
  }
  func_0x000107c2c318();
code_r0x000100615b08:
  func_0x000107c60ebc();
  return;
}



/* Entry: 100615b0c; end: 100615b0f;  */

void FUN_100615b0c(void)

{
  return;
}



/* Entry: 100615b10; end: 100615b5f;  */

char * FUN_100615b10(char *param_1)

{
  code *pcVar1;
  
  if (*param_1 != '\x01') {
    if (*param_1 != '\0') {
      func_0x000107c60ebc();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100615b58);
      (*pcVar1)();
    }
    (**(code **)(**(long **)(param_1 + 8) + 8))();
  }
  return param_1;
}



/* Entry: 100615b60; end: 100615b97;  */

byte * FUN_100615b60(byte *param_1)

{
  if ((*param_1 >> 1 & 1) == 0) {
    FUN_100615b10(param_1 + 8);
  }
  FUN_100615b98(param_1 + 0x18);
  return param_1;
}



/* Entry: 100615b98; end: 100615bbf;  */

void FUN_100615b98(byte *param_1)

{
  code *pcVar1;
  
  if (*param_1 < 2) {
    return;
  }
  func_0x000107c60ebc();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100615bbc);
  (*pcVar1)();
}



/* Entry: 100615bc0; end: 100615bc3;  */

void FUN_100615bc0(void)

{
  return;
}



/* Entry: 100615bc4; end: 100616293;  */

void FUN_100615bc4(undefined8 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined8 extraout_x8;
  long *plVar14;
  int *piVar15;
  undefined8 *puVar16;
  ulong uStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_61;
  ulong uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  ulong uStack_40;
  undefined8 *puStack_38;
  
  if (*(char *)((long)param_1 + 0x19) != '\0') {
    *(undefined1 *)(param_1 + 3) = 0;
    lVar11 = param_1[1];
    plVar14 = *(long **)(lVar11 + 0x50);
    if (plVar14 != (long *)0x0) {
      piVar15 = *(int **)(lVar11 + 0x70);
      if (*piVar15 != 7) {
        if (*piVar15 != 6) goto LAB_100615cb8;
        *piVar15 = 7;
        puVar7 = *(undefined8 **)(piVar15 + 0xe);
        *puVar7 = *(undefined8 *)(piVar15 + 0xc);
        *(undefined1 *)(puVar7 + 1) = 1;
        if (*(char *)((long)puVar7 + 9) != '\0') {
          *(undefined1 *)((long)puVar7 + 9) = 0;
          puVar7 = param_1;
          func_0x00010047a478();
          (**(code **)(*(long *)*puVar7 + 0x18))();
          lVar11 = param_1[1];
          plVar14 = *(long **)(lVar11 + 0x50);
        }
      }
      if ((char)plVar14[1] == '\0') {
        *(undefined1 *)((long)plVar14 + 9) = 1;
      }
      else {
        puVar12 = *(undefined4 **)(lVar11 + 0x70);
        if (*(long *)(puVar12 + 0xc) != *plVar14) {
          FUN_1004e23e0();
          puVar12 = *(undefined4 **)(param_1[1] + 0x70);
        }
        *puVar12 = 8;
        uVar6 = param_1[2];
        uVar9 = *(undefined8 *)(puVar12 + 2);
        *(undefined8 *)(puVar12 + 2) = 0;
        uStack_40 = 0;
        FUN_10082bfa8(uVar6,uVar9,&uStack_40,"wake_inside_combiner:recv_initial_metadata_ready");
        param_2 = (int)uVar9;
        if ((uStack_40 & 1) != 0) {
          FUN_10084dad0();
        }
      }
      lVar11 = param_1[1];
    }
LAB_100615cb8:
    if ((*(uint *)(lVar11 + 0xac) & 0xfffffffe) == 4) {
      return;
    }
    iVar1 = *(int *)(lVar11 + 0xa8);
    if (1 < iVar1 - 1U) {
      if (iVar1 != 0 && iVar1 != 3 || *(uint *)(lVar11 + 0xac) != 3) {
        return;
      }
      *(undefined4 *)(lVar11 + 0xac) = 4;
      uVar6 = param_1[2];
      uVar9 = *(undefined8 *)(lVar11 + 0x78);
      *(undefined8 *)(lVar11 + 0x78) = 0;
      uStack_a8 = 0;
      FUN_10082bfa8(uVar6,uVar9,&uStack_a8,"wake_inside_combiner:recv_trailing_ready:2");
      if ((uStack_a8 & 1) == 0) {
        return;
      }
      FUN_10084dad0();
      return;
    }
    puVar7 = *(undefined8 **)(lVar11 + 0x58);
    (**(code **)*puVar7)();
    if (param_2 != 1) {
      return;
    }
    lVar11 = param_1[1];
    if (*(int *)(lVar11 + 0xac) == 3) {
      puVar16 = *(undefined8 **)(lVar11 + 0x68);
      if (puVar16 != puVar7) {
        FUN_1004e23e0(puVar16,puVar7);
        lVar11 = param_1[1];
      }
      *(undefined4 *)(lVar11 + 0xac) = 4;
      uVar6 = param_1[2];
      uVar9 = *(undefined8 *)(lVar11 + 0x78);
      *(undefined8 *)(lVar11 + 0x78) = 0;
      puStack_48 = (undefined8 *)0x0;
      FUN_10082bfa8(uVar6,uVar9,&puStack_48,"wake_inside_combiner:recv_trailing_ready:1");
      puVar8 = puStack_48;
      if (((ulong)puStack_48 & 1) != 0) {
        FUN_10084dad0();
      }
      puVar13 = *(uint **)(param_1[1] + 0x70);
      if (puVar13 != (uint *)0x0) {
        uVar2 = *puVar13;
        if (uVar2 < 2) {
          *puVar13 = 2;
        }
        else if (uVar2 == 5) {
          *puVar13 = 8;
          uVar6 = param_1[2];
          uVar9 = *(undefined8 *)(puVar13 + 2);
          puVar13[2] = 0;
          puVar13[3] = 0;
          uStack_50 = 4;
          FUN_10082bfa8(uVar6,uVar9,&uStack_50,"wake_inside_combiner:recv_initial_metadata_ready");
          puVar8 = &uStack_50;
          FUN_1004bdf74();
        }
        else if (uVar2 == 2) {
          func_0x000107c60ebc();
          goto LAB_100615dc8;
        }
      }
      if (puVar16 == puVar7) goto LAB_10061611c;
    }
    else {
LAB_100615dc8:
      if (*(int *)(puVar7 + 0x31) == 0) goto LAB_100616170;
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_80 = 0;
      func_0x000104ab5920(&uStack_60,2,"early return from promise based filter",0x26,&uStack_61,
                          &uStack_80);
      func_0x000104abaa50(&puStack_58,&uStack_60,3,(long)*(int *)(puVar7 + 0x31));
      if ((uStack_60 & 1) != 0) {
        FUN_10084dad0();
      }
      puStack_38 = &uStack_80;
      func_0x000100482b64(&puStack_38);
      if (*(char *)((long)puVar7 + 1) < '\0') {
        puStack_88 = puStack_58;
        if (((ulong)puStack_58 & 1) != 0) {
          piVar15 = (int *)((long)puStack_58 + -1);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
            if (bVar4) {
              *piVar15 = *piVar15 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (puVar7[0x26] == 0) {
          lVar11 = (long)puVar7 + 0x139;
          uVar10 = (ulong)*(byte *)(puVar7 + 0x27);
        }
        else {
          uVar10 = puVar7[0x27];
          lVar11 = puVar7[0x28];
        }
        FUN_10084caf8(&puStack_38,&puStack_88,5,lVar11,uVar10);
        puVar16 = puStack_58;
        if (puStack_38 == puStack_58) {
LAB_100615eac:
          if (((ulong)puVar16 & 1) != 0) {
            FUN_10084dad0();
          }
        }
        else {
          puStack_58 = puStack_38;
          puStack_38 = (undefined8 *)0x36;
          if (((ulong)puVar16 & 1) != 0) {
            FUN_10084dad0();
            puVar16 = puStack_38;
            goto LAB_100615eac;
          }
        }
        if (((ulong)puStack_88 & 1) != 0) {
          FUN_10084dad0();
        }
      }
      lVar11 = param_1[1];
      puVar16 = *(undefined8 **)(lVar11 + 0xa0);
      if (puStack_58 != puVar16) {
        if (((ulong)puStack_58 & 1) != 0) {
          piVar15 = (int *)((long)puStack_58 + -1);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
            if (bVar4) {
              *piVar15 = *piVar15 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        *(undefined8 **)(lVar11 + 0xa0) = puStack_58;
        if (((ulong)puVar16 & 1) != 0) {
          FUN_10084dad0();
        }
      }
      lVar11 = param_1[1];
      puVar13 = *(uint **)(lVar11 + 0x70);
      if (puVar13 != (uint *)0x0) {
        uVar2 = *puVar13;
        if (uVar2 - 5 < 3) {
          *puVar13 = 8;
          uVar6 = param_1[2];
          uVar9 = *(undefined8 *)(puVar13 + 2);
          puVar13[2] = 0;
          puVar13[3] = 0;
          puStack_90 = puStack_58;
          if (((ulong)puStack_58 & 1) != 0) {
            piVar15 = (int *)((long)puStack_58 + -1);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
              if (bVar4) {
                *piVar15 = *piVar15 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          FUN_10082bfa8(uVar6,uVar9,&puStack_90,"wake_inside_combiner:recv_initial_metadata_ready");
          FUN_1004bdf74(&puStack_90);
          lVar11 = param_1[1];
        }
        else if (uVar2 < 2) {
          *puVar13 = 2;
        }
        else if (uVar2 == 2) goto LAB_10061619c;
      }
      if (*(int *)(lVar11 + 0xa8) == 1) {
        *(undefined4 *)(lVar11 + 0xa8) = 3;
        puStack_98 = puStack_58;
        if (((ulong)puStack_58 & 1) != 0) {
          piVar15 = (int *)((long)puStack_58 + -1);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
            if (bVar4) {
              *piVar15 = *piVar15 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        func_0x000104aaf3e8(lVar11 + 0x60,&puStack_98,param_1[2]);
        if (((ulong)puStack_98 & 1) != 0) {
          FUN_10084dad0();
        }
      }
      else {
        if ((*(uint *)(lVar11 + 0xac) & 0xfffffffd) != 0) goto LAB_100616174;
        uVar6 = *(undefined8 *)(lVar11 + 0x28);
        puStack_a0 = puStack_58;
        if (((ulong)puStack_58 & 1) != 0) {
          piVar15 = (int *)((long)puStack_58 + -1);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
            if (bVar4) {
              *piVar15 = *piVar15 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        func_0x000104aba128(uVar6,&puStack_a0);
        if (((ulong)puStack_a0 & 1) != 0) {
          FUN_10084dad0();
        }
        uVar6 = *(undefined8 *)(param_1[1] + 0x28);
        puVar8 = (undefined8 *)0x30;
        FUN_100460200();
        *puVar8 = &UNK_104ab0e30;
        puVar8[1] = uVar6;
        puVar16 = puVar8 + 2;
        puVar8[3] = FUN_1004be1e0;
        puVar8[4] = puVar8;
        puVar8[5] = 0;
        func_0x000104adfedc();
        puVar16[7] = 1;
        *(byte *)(puVar16 + 2) = *(byte *)(puVar16 + 2) | 0x40;
        lVar11 = puVar16[1];
        puVar8 = *(undefined8 **)(lVar11 + 0x98);
        puStack_38 = puVar16;
        if (puStack_58 != puVar8) {
          if (((ulong)puStack_58 & 1) != 0) {
            piVar15 = (int *)((long)puStack_58 + -1);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
              if (bVar4) {
                *piVar15 = *piVar15 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          *(undefined8 **)(lVar11 + 0x98) = puStack_58;
          if (((ulong)puVar8 & 1) != 0) {
            FUN_10084dad0();
          }
        }
        func_0x00010061664c(&puStack_38,param_1[2]);
        FUN_1006153ac(&puStack_38);
      }
      *(undefined4 *)(param_1[1] + 0xac) = 5;
      if (((ulong)puStack_58 & 1) != 0) {
        FUN_10084dad0();
      }
    }
    FUN_1004e2bc8();
    puVar8 = puVar7;
LAB_10061611c:
    func_0x00010047a478(*param_1);
    *puVar8 = extraout_x8;
    *(undefined1 *)((long)param_1 + 0x19) = 0;
    lVar11 = param_1[1];
    (**(code **)(**(long **)(lVar11 + 0x58) + 8))();
    *(undefined ***)(lVar11 + 0x58) = &PTR_PTR_1130a5848;
    (**(code **)(PTR_PTR_1130a5848 + 8))();
    return;
  }
  func_0x000107c2c308();
LAB_100616170:
  func_0x000107c2c30c();
LAB_100616174:
  FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
                ,0x188,2,"assertion failed: %s");
LAB_10061619c:
  func_0x000107c60ebc();
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1006161a4);
  (*pcVar5)();
}



/* Entry: 100616294; end: 1006162b3;  */

void FUN_100616294(undefined8 param_1,ulong *param_2)

{
  if ((*param_2 & 1) != 0) {
    FUN_10084dad0();
  }
  return;
}



/* Entry: 1006162b4; end: 1006164af;  */

/* WARNING: Possible PIC construction at 0x000100616544: Changing call to branch */

undefined1  [16] FUN_1006162b4(long *param_1,ulong param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined1 ***pppuVar4;
  long *plVar5;
  char *pcVar6;
  ulong *puVar7;
  char *pcVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  ulong *puVar11;
  long lVar12;
  int *piVar13;
  ulong *puVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long *unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 ***pppuVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 **ppuStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  long lStack_88;
  undefined1 *puStack_60;
  code *pcStack_58;
  long *plStack_50;
  ulong uStack_48;
  long lStack_40;
  uint uStack_38;
  
  bVar1 = *(byte *)(param_1 + 1);
  pcVar6 = (char *)param_1;
  if ((bVar1 >> 2 & 1) == 0) {
    lStack_40 = 0;
    uStack_38 = 1;
    *(byte *)(param_1 + 1) = bVar1 | 4;
    pcVar6 = (char *)&lStack_40;
    FUN_10047a9b8();
    bVar1 = *(byte *)(param_1 + 1);
  }
  if ((bVar1 >> 1 & 1) == 0) {
    unaff_x20 = param_1 + 2;
    lVar12 = unaff_x21;
    if ((char)*unaff_x20 != '\x01') {
      if ((char)*unaff_x20 == '\0') {
        plVar5 = (long *)param_1[3];
        (**(code **)*plVar5)();
        pcVar6 = (char *)&lStack_40;
        plStack_50 = plVar5;
        uStack_48 = param_2;
        FUN_100616694(pcVar6,&plStack_50);
        lVar12 = lStack_40;
        param_2 = (ulong)uStack_38;
        if (uStack_38 == 0) goto LAB_100616368;
        if (uStack_38 == 1) {
          (**(code **)(*(long *)param_1[3] + 8))();
          param_1[3] = lVar12;
          *(char *)(param_1 + 2) = '\x01';
          goto LAB_10061635c;
        }
      }
      else {
LAB_100616490:
        func_0x000107c60ebc();
      }
      func_0x000104a71e10();
      FUN_10047a9b8(&plStack_50);
      func_0x000107c60bd8();
      func_0x000104bd46a0();
      pppuVar4 = (undefined1 ***)&uStack_90;
      pcStack_58 = FUN_1006164b0;
      lVar12 = *(long *)((long)pcVar6 + 0xb0);
      puStack_60 = &stack0xfffffffffffffff0;
      if (lVar12 == 0) {
        func_0x000107c2c320();
      }
      else {
        if ((int)*(long *)((long)pcVar6 + 0xa8) != 1) {
          uVar10 = 0;
          switch(*(undefined4 *)((long)pcVar6 + 0xac)) {
          case 0:
          case 1:
          case 2:
            goto code_r0x0001006165d4;
          case 3:
            break;
          case 4:
            goto code_r0x0001006165f0;
          case 5:
            lVar12 = *(long *)((long)pcVar6 + 0x68);
            FUN_10083228c(lVar12,0);
            FUN_1004e2b40(lVar12 + 0x1f0);
            lVar12 = *(long *)((long)pcVar6 + 0x68);
            uVar17 = *(ulong *)((long)pcVar6 + 0xa0);
            if ((uVar17 & 1) != 0) {
              piVar13 = (int *)(uVar17 - 1);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
                if (bVar3) {
                  *piVar13 = *piVar13 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            uStack_90 = uVar17;
            func_0x000104aaf6d0(pcVar6,lVar12,&uStack_90);
            if ((uVar17 & 1) != 0) {
              FUN_10084dad0(uVar17);
            }
            break;
          default:
LAB_1006165f4:
            pcVar6 = "return Pending{}";
            pcVar8 = 
            "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
            ;
            func_0x000104a6e964("return Pending{}",
                                "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
                                ,0x330);
            func_0x000104bd46a0();
            FUN_1004bdf74(&uStack_90);
            plVar5 = (long *)pcVar6;
            func_0x000107c60bd8();
            pppuVar4 = &ppuStack_a0;
            pppuVar19 = &ppuStack_a0;
            uStack_98 = 0x100616624;
            plVar5 = (long *)plVar5[1];
            ppuStack_a0 = &puStack_60;
            FUN_1006164b0();
            if (((ulong)pcVar8 & 0xfffffffe) == 0) {
              auVar22._8_8_ = (ulong)pcVar8 & 0xffffffff;
              auVar22._0_8_ = plVar5;
              return auVar22;
            }
            uVar10 = 0x10061664c;
            func_0x000104a71e10();
SUB_10061664c:
            *(undefined1 ****)((long)pppuVar4 + -0x10) = pppuVar19;
            *(undefined8 *)((long)pppuVar4 + -8) = uVar10;
            lVar12 = *plVar5;
            *plVar5 = 0;
            if (lVar12 == 0) {
              func_0x000107c2c2f8();
              auVar24._8_8_ = pcVar8;
              auVar24._0_8_ = plVar5;
              return auVar24;
            }
            if ((*(long *)(lVar12 + 0x38) == 0) ||
               (lVar16 = *(long *)(lVar12 + 0x38) + -1, *(long *)(lVar12 + 0x38) = lVar16,
               lVar16 != 0)) {
              auVar23._8_8_ = pcVar8;
              auVar23._0_8_ = plVar5;
              return auVar23;
            }
            *(long **)((long)pppuVar4 + -0x20) = unaff_x20;
            *(char **)((long)pppuVar4 + -0x18) = pcVar6;
            *(undefined8 *)((long)pppuVar4 + -0x10) = *(undefined8 *)((long)pppuVar4 + -0x10);
            *(undefined8 *)((long)pppuVar4 + -8) = *(undefined8 *)((long)pppuVar4 + -8);
            *(long *)((long)pppuVar4 + -0x28) = lVar12;
            lVar12 = *(long *)(pcVar8 + 0xb0);
            puVar7 = *(ulong **)(lVar12 + 0x10);
            puVar11 = (ulong *)(puVar7[5] - 1);
            FUN_1004bd910();
            if (puVar7 != *(ulong **)(lVar12 + 0x18)) {
              puVar9 = (undefined1 *)((long)pppuVar4 + -0x28);
              FUN_100616908(pcVar8,puVar9);
              auVar25._8_8_ = puVar9;
              auVar25._0_8_ = pcVar8;
              return auVar25;
            }
            func_0x000107c2c2fc();
            puVar14 = puVar7 + 1;
            uVar17 = *puVar7;
            if ((uVar17 & 1) == 0) {
              uVar18 = 2;
            }
            else {
              puVar14 = (ulong *)puVar7[1];
              uVar18 = puVar7[2];
            }
            if (uVar17 >> 1 == uVar18) {
              puVar9 = (undefined1 *)((long)pppuVar4 + -0x80);
              *(undefined8 *)((long)pppuVar4 + -0x70) = unaff_x24;
              *(undefined8 *)((long)pppuVar4 + -0x68) = unaff_x23;
              *(undefined8 *)((long)pppuVar4 + -0x60) = unaff_x22;
              *(long *)((long)pppuVar4 + -0x58) = unaff_x21;
              *(long *)((long)pppuVar4 + -0x50) = lVar12;
              *(char **)((long)pppuVar4 + -0x48) = pcVar8;
              *(undefined1 **)((long)pppuVar4 + -0x40) = (undefined1 *)((long)pppuVar4 + -0x10);
              *(code **)((long)pppuVar4 + -0x38) = FUN_100616908;
              puVar14 = puVar7 + 1;
              uVar17 = *puVar7;
              if ((uVar17 & 1) == 0) {
                uVar18 = 4;
              }
              else {
                puVar14 = (ulong *)puVar7[1];
                uVar18 = puVar7[2] << 1;
              }
              *(undefined8 *)((long)pppuVar4 + -0x80) = 0;
              *(undefined8 *)((long)pppuVar4 + -0x78) = 0;
              func_0x000104ab0c78();
              uVar15 = uVar17 >> 1;
              *(undefined1 **)((long)pppuVar4 + -0x80) = puVar9;
              *(ulong *)((long)pppuVar4 + -0x78) = uVar18;
              lVar12 = uVar15 * 8;
              *(ulong *)(puVar9 + lVar12) = *puVar11;
              if (1 < uVar17) {
                puVar11 = *(ulong **)((long)pppuVar4 + -0x80);
                do {
                  *puVar11 = *puVar14;
                  uVar15 = uVar15 - 1;
                  puVar11 = puVar11 + 1;
                  puVar14 = puVar14 + 1;
                } while (uVar15 != 0);
              }
              uVar17 = *puVar7;
              if ((uVar17 & 1) != 0) {
                __ZdlPv(puVar7[1]);
                uVar18 = *(ulong *)((long)pppuVar4 + -0x78);
                uVar17 = *puVar7;
              }
              puVar7[1] = *(ulong *)((long)pppuVar4 + -0x80);
              puVar7[2] = uVar18;
              *puVar7 = (uVar17 | 1) + 2;
              auVar27._8_8_ = uVar18;
              auVar27._0_8_ = puVar9 + lVar12;
              return auVar27;
            }
            puVar14[uVar17 >> 1] = *puVar11;
            *puVar7 = uVar17 + 2;
            auVar26._8_8_ = puVar11;
            auVar26._0_8_ = puVar14 + (uVar17 >> 1);
            return auVar26;
          }
          pcVar6 = *(char **)((long)pcVar6 + 0x68);
          uVar10 = 1;
code_r0x0001006165d4:
          auVar21._8_8_ = uVar10;
          auVar21._0_8_ = pcVar6;
          return auVar21;
        }
        lVar16 = *(long *)((long)pcVar6 + 0x60);
        if (lVar16 != 0) {
          *(undefined4 *)((long)pcVar6 + 0xa8) = 2;
          if (*(int *)((long)pcVar6 + 0xac) == 1) {
            if (*(long *)(lVar16 + 0x38) != 0) {
              *(long *)(lVar16 + 0x38) = *(long *)(lVar16 + 0x38) + 1;
            }
            lVar12 = *(long *)(lVar16 + 8);
            *(long *)((long)pcVar6 + 0x68) = *(long *)(lVar12 + 0x80);
            *(long *)((long)pcVar6 + 0x78) = *(long *)(lVar12 + 0x90);
            *(long **)(lVar12 + 0x90) = (long *)((long)pcVar6 + 0x80);
            lStack_88 = lVar16;
            FUN_1006153ac(&lStack_88);
            pcVar8 = (char *)((long)pcVar6 + 0xac);
            pcVar8[0] = '\x02';
            pcVar8[1] = '\0';
            pcVar8[2] = '\0';
            pcVar8[3] = '\0';
            lVar12 = *(long *)((long)pcVar6 + 0xb0);
          }
          pcVar8 = *(char **)(lVar12 + 0x10);
          plVar5 = (long *)(*(long *)(lVar12 + 8) + 0x60);
          uVar10 = 0x100616548;
          pppuVar19 = (undefined1 ***)&puStack_60;
          goto SUB_10061664c;
        }
      }
      func_0x000107c2c324();
code_r0x0001006165f0:
      func_0x000107c60ebc();
      goto LAB_1006165f4;
    }
LAB_10061635c:
    pcVar6 = (char *)unaff_x20;
    FUN_100830a58();
    unaff_x21 = lVar12;
LAB_100616368:
    plStack_50 = (long *)pcVar6;
    uStack_48 = param_2;
    FUN_100616694(&lStack_40,&plStack_50);
    lVar12 = lStack_40;
    if (uStack_38 != 1) {
LAB_1006163b0:
      bVar1 = *(byte *)(param_1 + 1);
      goto LAB_1006163b4;
    }
    unaff_x21 = lStack_40;
    if (((*(byte *)(lStack_40 + 1) >> 2 & 1) != 0) && (*(int *)(lStack_40 + 0x188) == 0)) {
      *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 2;
      FUN_100615b10(unaff_x20);
      param_1[2] = lVar12;
      unaff_x21 = lVar12;
      goto LAB_1006163b0;
    }
  }
  else {
LAB_1006163b4:
    if ((bVar1 & 1) == 0) {
      pcVar6 = (char *)(param_1 + 4);
      if ((char)*(long *)pcVar6 == '\x01') {
LAB_1006163e8:
        FUN_10082bed4(&lStack_40);
      }
      else {
        if ((char)*(long *)pcVar6 != '\0') goto LAB_100616490;
        lVar12 = param_1[5];
        if (*(char *)(lVar12 + 8) != '\0') {
          param_1[5] = param_1[6];
          param_1[6] = lVar12;
          *(char *)(param_1 + 4) = '\x01';
          goto LAB_1006163e8;
        }
        *(undefined1 *)(lVar12 + 9) = 1;
        uStack_38 = 0;
      }
      FUN_10047a8f0(&plStack_50,&lStack_40);
      FUN_10047a9b8(&lStack_40);
      if ((int)uStack_48 == 1) {
        if (plStack_50 != (long *)0x0) {
          func_0x000104a91cc8(&lStack_40,&plStack_50);
          unaff_x21 = lStack_40;
          FUN_10047a9b8(&plStack_50);
          goto LAB_10061646c;
        }
        *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 1;
      }
      FUN_10047a9b8(&plStack_50);
      bVar1 = *(byte *)(param_1 + 1);
    }
    if (bVar1 != 7) {
      uVar10 = 0;
      goto LAB_100616478;
    }
    unaff_x21 = param_1[2];
    param_1[2] = 0;
  }
LAB_10061646c:
  uVar10 = 1;
LAB_100616478:
  auVar20._8_8_ = uVar10;
  auVar20._0_8_ = unaff_x21;
  return auVar20;
}



/* Entry: 1006164b0; end: 100616623;  */

/* WARNING: Possible PIC construction at 0x000100616544: Changing call to branch */

undefined1  [16] FUN_1006164b0(char *param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 **ppuVar3;
  char *pcVar4;
  long *plVar5;
  ulong *puVar6;
  char *pcVar7;
  undefined1 *puVar8;
  ulong *puVar9;
  long lVar10;
  int *piVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 **ppuVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 *puStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  long lStack_38;
  
  ppuVar3 = (undefined1 **)&uStack_40;
  lVar10 = *(long *)(param_1 + 0xb0);
  if (lVar10 == 0) {
    func_0x000107c2c320();
  }
  else {
    if (*(int *)(param_1 + 0xa8) != 1) {
      uVar18 = 0;
      switch(*(undefined4 *)(param_1 + 0xac)) {
      case 0:
      case 1:
      case 2:
        goto code_r0x0001006165d4;
      case 3:
        break;
      case 4:
        goto code_r0x0001006165f0;
      case 5:
        lVar10 = *(long *)(param_1 + 0x68);
        FUN_10083228c(lVar10,0);
        FUN_1004e2b40(lVar10 + 0x1f0);
        lVar10 = *(long *)(param_1 + 0x68);
        uVar15 = *(ulong *)(param_1 + 0xa0);
        if ((uVar15 & 1) != 0) {
          piVar11 = (int *)(uVar15 - 1);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar2) {
              *piVar11 = *piVar11 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        uStack_40 = uVar15;
        func_0x000104aaf6d0(param_1,lVar10,&uStack_40);
        if ((uVar15 & 1) != 0) {
          FUN_10084dad0(uVar15);
        }
        break;
      default:
LAB_1006165f4:
        param_1 = "return Pending{}";
        pcVar7 = 
        "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
        ;
        func_0x000104a6e964("return Pending{}",
                            "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
                            ,0x330);
        func_0x000104bd46a0();
        FUN_1004bdf74(&uStack_40);
        pcVar4 = param_1;
        func_0x000107c60bd8();
        ppuVar3 = &puStack_50;
        ppuVar17 = &puStack_50;
        uStack_48 = 0x100616624;
        plVar5 = *(long **)(pcVar4 + 8);
        puStack_50 = &stack0xfffffffffffffff0;
        FUN_1006164b0();
        if (((ulong)pcVar7 & 0xfffffffe) == 0) {
          auVar20._8_8_ = (ulong)pcVar7 & 0xffffffff;
          auVar20._0_8_ = plVar5;
          return auVar20;
        }
        uVar18 = 0x10061664c;
        func_0x000104a71e10();
SUB_10061664c:
        *(undefined1 ***)((long)ppuVar3 + -0x10) = ppuVar17;
        *(undefined8 *)((long)ppuVar3 + -8) = uVar18;
        lVar10 = *plVar5;
        *plVar5 = 0;
        if (lVar10 == 0) {
          func_0x000107c2c2f8();
          auVar22._8_8_ = pcVar7;
          auVar22._0_8_ = plVar5;
          return auVar22;
        }
        if ((*(long *)(lVar10 + 0x38) == 0) ||
           (lVar14 = *(long *)(lVar10 + 0x38) + -1, *(long *)(lVar10 + 0x38) = lVar14, lVar14 != 0))
        {
          auVar21._8_8_ = pcVar7;
          auVar21._0_8_ = plVar5;
          return auVar21;
        }
        *(undefined8 *)((long)ppuVar3 + -0x20) = unaff_x20;
        *(char **)((long)ppuVar3 + -0x18) = param_1;
        *(undefined8 *)((long)ppuVar3 + -0x10) = *(undefined8 *)((long)ppuVar3 + -0x10);
        *(undefined8 *)((long)ppuVar3 + -8) = *(undefined8 *)((long)ppuVar3 + -8);
        *(long *)((long)ppuVar3 + -0x28) = lVar10;
        lVar10 = *(long *)(pcVar7 + 0xb0);
        puVar6 = *(ulong **)(lVar10 + 0x10);
        puVar9 = (ulong *)(puVar6[5] - 1);
        FUN_1004bd910();
        if (puVar6 != *(ulong **)(lVar10 + 0x18)) {
          puVar8 = (undefined1 *)((long)ppuVar3 + -0x28);
          FUN_100616908(pcVar7,puVar8);
          auVar23._8_8_ = puVar8;
          auVar23._0_8_ = pcVar7;
          return auVar23;
        }
        func_0x000107c2c2fc();
        puVar12 = puVar6 + 1;
        uVar15 = *puVar6;
        if ((uVar15 & 1) == 0) {
          uVar16 = 2;
        }
        else {
          puVar12 = (ulong *)puVar6[1];
          uVar16 = puVar6[2];
        }
        if (uVar15 >> 1 == uVar16) {
          puVar8 = (undefined1 *)((long)ppuVar3 + -0x80);
          *(undefined8 *)((long)ppuVar3 + -0x70) = unaff_x24;
          *(undefined8 *)((long)ppuVar3 + -0x68) = unaff_x23;
          *(undefined8 *)((long)ppuVar3 + -0x60) = unaff_x22;
          *(undefined8 *)((long)ppuVar3 + -0x58) = unaff_x21;
          *(long *)((long)ppuVar3 + -0x50) = lVar10;
          *(char **)((long)ppuVar3 + -0x48) = pcVar7;
          *(undefined1 **)((long)ppuVar3 + -0x40) = (undefined1 *)((long)ppuVar3 + -0x10);
          *(code **)((long)ppuVar3 + -0x38) = FUN_100616908;
          puVar12 = puVar6 + 1;
          uVar15 = *puVar6;
          if ((uVar15 & 1) == 0) {
            uVar16 = 4;
          }
          else {
            puVar12 = (ulong *)puVar6[1];
            uVar16 = puVar6[2] << 1;
          }
          *(undefined8 *)((long)ppuVar3 + -0x80) = 0;
          *(undefined8 *)((long)ppuVar3 + -0x78) = 0;
          func_0x000104ab0c78();
          uVar13 = uVar15 >> 1;
          *(undefined1 **)((long)ppuVar3 + -0x80) = puVar8;
          *(ulong *)((long)ppuVar3 + -0x78) = uVar16;
          lVar10 = uVar13 * 8;
          *(ulong *)(puVar8 + lVar10) = *puVar9;
          if (1 < uVar15) {
            puVar9 = *(ulong **)((long)ppuVar3 + -0x80);
            do {
              *puVar9 = *puVar12;
              uVar13 = uVar13 - 1;
              puVar9 = puVar9 + 1;
              puVar12 = puVar12 + 1;
            } while (uVar13 != 0);
          }
          uVar15 = *puVar6;
          if ((uVar15 & 1) != 0) {
            __ZdlPv(puVar6[1]);
            uVar16 = *(ulong *)((long)ppuVar3 + -0x78);
            uVar15 = *puVar6;
          }
          puVar6[1] = *(ulong *)((long)ppuVar3 + -0x80);
          puVar6[2] = uVar16;
          *puVar6 = (uVar15 | 1) + 2;
          auVar25._8_8_ = uVar16;
          auVar25._0_8_ = puVar8 + lVar10;
          return auVar25;
        }
        puVar12[uVar15 >> 1] = *puVar9;
        *puVar6 = uVar15 + 2;
        auVar24._8_8_ = puVar9;
        auVar24._0_8_ = puVar12 + (uVar15 >> 1);
        return auVar24;
      }
      param_1 = *(char **)(param_1 + 0x68);
      uVar18 = 1;
code_r0x0001006165d4:
      auVar19._8_8_ = uVar18;
      auVar19._0_8_ = param_1;
      return auVar19;
    }
    lVar14 = *(long *)(param_1 + 0x60);
    if (lVar14 != 0) {
      param_1[0xa8] = '\x02';
      param_1[0xa9] = '\0';
      param_1[0xaa] = '\0';
      param_1[0xab] = '\0';
      if (*(int *)(param_1 + 0xac) == 1) {
        if (*(long *)(lVar14 + 0x38) != 0) {
          *(long *)(lVar14 + 0x38) = *(long *)(lVar14 + 0x38) + 1;
        }
        lVar10 = *(long *)(lVar14 + 8);
        *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(lVar10 + 0x80);
        *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(lVar10 + 0x90);
        *(char **)(lVar10 + 0x90) = param_1 + 0x80;
        lStack_38 = lVar14;
        FUN_1006153ac(&lStack_38);
        param_1[0xac] = '\x02';
        param_1[0xad] = '\0';
        param_1[0xae] = '\0';
        param_1[0xaf] = '\0';
        lVar10 = *(long *)(param_1 + 0xb0);
      }
      pcVar7 = *(char **)(lVar10 + 0x10);
      plVar5 = (long *)(*(long *)(lVar10 + 8) + 0x60);
      uVar18 = 0x100616548;
      ppuVar17 = (undefined1 **)&stack0xfffffffffffffff0;
      goto SUB_10061664c;
    }
  }
  func_0x000107c2c324();
code_r0x0001006165f0:
  func_0x000107c60ebc();
  goto LAB_1006165f4;
}



/* Entry: 100616624; end: 10061668f;  */

undefined1  [16] FUN_100616624(long param_1,ulong param_2)

{
  ulong *puVar1;
  long *plVar2;
  ulong *puVar3;
  ulong **ppuVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  ulong *puStack_90;
  ulong uStack_88;
  long lStack_38;
  
  plVar2 = *(long **)(param_1 + 8);
  FUN_1006164b0();
  if ((param_2 & 0xfffffffe) == 0) {
    auVar11._8_8_ = param_2 & 0xffffffff;
    auVar11._0_8_ = plVar2;
    return auVar11;
  }
  func_0x000104a71e10();
  lStack_38 = *plVar2;
  *plVar2 = 0;
  if (lStack_38 == 0) {
    func_0x000107c2c2f8();
    auVar13._8_8_ = param_2;
    auVar13._0_8_ = plVar2;
    return auVar13;
  }
  if ((*(long *)(lStack_38 + 0x38) == 0) ||
     (lVar10 = *(long *)(lStack_38 + 0x38) + -1, *(long *)(lStack_38 + 0x38) = lVar10, lVar10 != 0))
  {
    auVar12._8_8_ = param_2;
    auVar12._0_8_ = plVar2;
    return auVar12;
  }
  lVar10 = *(long *)(param_2 + 0xb0);
  puVar3 = *(ulong **)(lVar10 + 0x10);
  puVar5 = (ulong *)(puVar3[5] - 1);
  FUN_1004bd910();
  if (puVar3 != *(ulong **)(lVar10 + 0x18)) {
    plVar2 = &lStack_38;
    FUN_100616908(param_2,plVar2);
    auVar14._8_8_ = plVar2;
    auVar14._0_8_ = param_2;
    return auVar14;
  }
  func_0x000107c2c2fc();
  puVar6 = puVar3 + 1;
  uVar8 = *puVar3;
  if ((uVar8 & 1) == 0) {
    uVar9 = 2;
  }
  else {
    puVar6 = (ulong *)puVar3[1];
    uVar9 = puVar3[2];
  }
  if (uVar8 >> 1 == uVar9) {
    ppuVar4 = &puStack_90;
    puVar6 = puVar3 + 1;
    uVar8 = *puVar3;
    if ((uVar8 & 1) == 0) {
      uVar9 = 4;
    }
    else {
      puVar6 = (ulong *)puVar3[1];
      uVar9 = puVar3[2] << 1;
    }
    puStack_90 = (ulong *)0x0;
    uStack_88 = 0;
    func_0x000104ab0c78();
    uVar7 = uVar8 >> 1;
    puVar1 = (ulong *)(ppuVar4 + uVar7);
    puStack_90 = (ulong *)ppuVar4;
    uStack_88 = uVar9;
    *puVar1 = *puVar5;
    puVar5 = puStack_90;
    if (1 < uVar8) {
      do {
        *puVar5 = *puVar6;
        uVar7 = uVar7 - 1;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (uVar7 != 0);
    }
    uVar8 = *puVar3;
    if ((uVar8 & 1) != 0) {
      __ZdlPv(puVar3[1]);
      uVar8 = *puVar3;
      uVar9 = uStack_88;
    }
    puVar3[1] = (ulong)puStack_90;
    puVar3[2] = uVar9;
    *puVar3 = (uVar8 | 1) + 2;
    auVar16._8_8_ = uVar9;
    auVar16._0_8_ = puVar1;
    return auVar16;
  }
  puVar6[uVar8 >> 1] = *puVar5;
  *puVar3 = uVar8 + 2;
  auVar15._8_8_ = puVar5;
  auVar15._0_8_ = puVar6 + (uVar8 >> 1);
  return auVar15;
}



/* Entry: 100616690; end: 100616693;  */

void FUN_100616690(void)

{
  return;
}



/* Entry: 100616694; end: 1006166f7;  */

undefined1 * FUN_100616694(undefined1 *param_1,long param_2)

{
  uint uVar1;
  undefined1 uStack_21;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  uVar1 = *(uint *)(param_2 + 8);
  if (uVar1 != 0xffffffff) {
    (*(code *)(&PTR_FUN_1107c36f0)[uVar1])(&uStack_21,param_1,param_2);
    *(uint *)(param_1 + 8) = uVar1;
  }
  return param_1;
}



/* Entry: 1006166f8; end: 1006167fb; -[SCUnifiedGRPCClientFactoryImpl initWithCronetStreamEnginePtr:snapTokenProvider:attestationProvider:] */

undefined1 *
FUN_1006166f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_1126e7e88;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + 0x10) = 0;
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    func_0x000107c470d0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1006167fc; end: 1006168af;  */

undefined8 * FUN_1006167fc(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  long *plVar4;
  long lVar5;
  ulong uStack_28;
  
  *(undefined8 *)(param_1[1] + 0xb0) = 0;
  if (*(char *)((long)param_1 + 0x19) != '\0') {
    puVar3 = param_1;
    func_0x00010047a478(*param_1);
    *puVar3 = extraout_x8;
  }
  if (*(char *)(param_1 + 3) != '\0') {
    puVar3 = (undefined8 *)0x30;
    func_0x000107c60e20();
    *puVar3 = 0;
    puVar3[1] = 0;
    lVar5 = param_1[1];
    plVar4 = *(long **)(lVar5 + 0x10);
    puVar3[4] = plVar4;
    puVar3[5] = lVar5;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    puVar3[1] = FUN_10082c024;
    puVar3[2] = puVar3;
    puVar3[3] = 0;
    uStack_28 = 0;
    FUN_10082bfa8(param_1[2],puVar3,&uStack_28,"re-poll");
    if ((uStack_28 & 1) != 0) {
      FUN_10084dad0();
    }
  }
  return param_1;
}



/* Entry: 1006168b0; end: 100616907;  */

ulong * FUN_1006168b0(ulong *param_1,undefined8 param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong **ppuVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puStack_80;
  ulong uStack_78;
  undefined8 uStack_28;
  
  uVar8 = param_1[0x16];
  puVar2 = *(ulong **)(uVar8 + 0x10);
  puVar4 = (ulong *)(puVar2[5] - 1);
  uStack_28 = param_2;
  FUN_1004bd910();
  if (puVar2 != *(ulong **)(uVar8 + 0x18)) {
    FUN_100616908(param_1,&uStack_28);
    return param_1;
  }
  func_0x000107c2c2fc();
  puVar5 = puVar2 + 1;
  uVar8 = *puVar2;
  if ((uVar8 & 1) == 0) {
    uVar7 = 2;
  }
  else {
    puVar5 = (ulong *)puVar2[1];
    uVar7 = puVar2[2];
  }
  if (uVar8 >> 1 == uVar7) {
    ppuVar3 = &puStack_80;
    puVar5 = puVar2 + 1;
    uVar8 = *puVar2;
    if ((uVar8 & 1) == 0) {
      uVar7 = 4;
    }
    else {
      puVar5 = (ulong *)puVar2[1];
      uVar7 = puVar2[2] << 1;
    }
    puStack_80 = (ulong *)0x0;
    uStack_78 = 0;
    func_0x000104ab0c78();
    uVar6 = uVar8 >> 1;
    puVar1 = (ulong *)(ppuVar3 + uVar6);
    puStack_80 = (ulong *)ppuVar3;
    uStack_78 = uVar7;
    *puVar1 = *puVar4;
    puVar4 = puStack_80;
    if (1 < uVar8) {
      do {
        *puVar4 = *puVar5;
        uVar6 = uVar6 - 1;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (uVar6 != 0);
    }
    uVar8 = *puVar2;
    if ((uVar8 & 1) != 0) {
      __ZdlPv(puVar2[1]);
      uVar8 = *puVar2;
      uVar7 = uStack_78;
    }
    puVar2[1] = (ulong)puStack_80;
    puVar2[2] = uVar7;
    *puVar2 = (uVar8 | 1) + 2;
    return puVar1;
  }
  puVar5[uVar8 >> 1] = *puVar4;
  *puVar2 = uVar8 + 2;
  return puVar5 + (uVar8 >> 1);
}



/* Entry: 100616908; end: 10061694b;  */

ulong * FUN_100616908(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong **ppuVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puStack_50;
  ulong uStack_48;
  
  puVar3 = param_1 + 1;
  uVar5 = *param_1;
  if ((uVar5 & 1) == 0) {
    uVar7 = 2;
  }
  else {
    puVar3 = (ulong *)param_1[1];
    uVar7 = param_1[2];
  }
  if (uVar5 >> 1 == uVar7) {
    ppuVar2 = &puStack_50;
    puVar3 = param_1 + 1;
    uVar5 = *param_1;
    if ((uVar5 & 1) == 0) {
      uVar7 = 4;
    }
    else {
      puVar3 = (ulong *)param_1[1];
      uVar7 = param_1[2] << 1;
    }
    puStack_50 = (ulong *)0x0;
    uStack_48 = 0;
    func_0x000104ab0c78();
    uVar4 = uVar5 >> 1;
    puVar1 = (ulong *)(ppuVar2 + uVar4);
    puStack_50 = (ulong *)ppuVar2;
    uStack_48 = uVar7;
    *puVar1 = *param_2;
    puVar6 = puStack_50;
    if (1 < uVar5) {
      do {
        *puVar6 = *puVar3;
        uVar4 = uVar4 - 1;
        puVar6 = puVar6 + 1;
        puVar3 = puVar3 + 1;
      } while (uVar4 != 0);
    }
    uVar5 = *param_1;
    if ((uVar5 & 1) != 0) {
      __ZdlPv(param_1[1]);
      uVar5 = *param_1;
      uVar7 = uStack_48;
    }
    param_1[1] = (ulong)puStack_50;
    param_1[2] = uVar7;
    *param_1 = (uVar5 | 1) + 2;
    return puVar1;
  }
  puVar3[uVar5 >> 1] = *param_2;
  *param_1 = uVar5 + 2;
  return puVar3 + (uVar5 >> 1);
}



/* Entry: 10061694c; end: 100616b07;  */

ulong * FUN_10061694c(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uStack_58;
  char *pcStack_50;
  long lStack_48;
  
  uVar5 = *param_1;
  if (uVar5 < 2) {
    if (param_1[3] < 2) {
      FUN_100612044(*(undefined8 *)(param_1[0x16] + 0x28),"nothing to flush");
      plVar4 = *(long **)(param_1[0x16] + 0x10);
      do {
        bVar3 = *plVar4 + -1 == 0;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    else {
      FUN_1004dffa0(param_1 + 3,*(undefined8 *)(param_1[0x16] + 0x28));
      plVar4 = *(long **)(param_1[0x16] + 0x10);
      do {
        bVar3 = *plVar4 + -1 == 0;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  else {
    if (3 < uVar5) {
      uVar7 = 1;
      do {
        puVar6 = param_1 + 1;
        if ((uVar5 & 1) != 0) {
          puVar6 = (ulong *)param_1[1];
        }
        uVar5 = puVar6[uVar7];
        *(ulong *)(uVar5 + 0x18) = param_1[0x16];
        lStack_48 = uVar5 + 0x20;
        *(undefined **)(uVar5 + 0x28) = &UNK_104ab0cac;
        *(ulong *)(uVar5 + 0x30) = uVar5;
        *(undefined8 *)(uVar5 + 0x38) = 0;
        plVar4 = *(long **)(param_1[0x16] + 0x10);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = *plVar4 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        uStack_58 = 0;
        pcStack_50 = "flusher_batch";
        FUN_1004dfd88(param_1 + 3,&lStack_48,&uStack_58,&pcStack_50);
        if ((uStack_58 & 1) != 0) {
          FUN_10084dad0();
        }
        uVar7 = uVar7 + 1;
        uVar5 = *param_1;
      } while (uVar7 < uVar5 >> 1);
    }
    FUN_100616b08(param_1 + 3,*(undefined8 *)(param_1[0x16] + 0x28));
    puVar6 = param_1 + 1;
    if ((*param_1 & 1) != 0) {
      puVar6 = (ulong *)*puVar6;
    }
    FUN_100614e94(*(undefined8 *)(param_1[0x16] + 0x18),*puVar6);
    plVar4 = *(long **)(param_1[0x16] + 0x10);
    do {
      bVar3 = *plVar4 + -1 == 0;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if (bVar3) {
    FUN_100836ca4();
  }
  FUN_1004e0194(param_1 + 3);
  if ((*param_1 & 1) != 0) {
    func_0x000107c60e14(param_1[1]);
  }
  return param_1;
}



/* Entry: 100616b08; end: 100616bd7;  */

void FUN_100616b08(ulong *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  ulong uVar4;
  int *piVar5;
  ulong uVar6;
  ulong uStack_48;
  
  uVar4 = *param_1;
  if (1 < uVar4) {
    uVar6 = 0;
    do {
      puVar3 = param_1 + 1;
      if ((uVar4 & 1) != 0) {
        puVar3 = (ulong *)param_1[1];
      }
      uVar4 = puVar3[uVar6 * 3];
      uStack_48 = (puVar3 + uVar6 * 3)[1];
      if ((uStack_48 & 1) != 0) {
        piVar5 = (int *)(uStack_48 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar2) {
            *piVar5 = *piVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_1004bd618(param_2,uVar4,&uStack_48,puVar3[uVar6 * 3 + 2]);
      if ((uStack_48 & 1) != 0) {
        FUN_10084dad0();
      }
      uVar6 = uVar6 + 1;
      uVar4 = *param_1;
    } while (uVar6 < uVar4 >> 1);
  }
  FUN_1004e00f0(param_1);
  return;
}



/* Entry: 100616bd8; end: 100616c4b;  */

void FUN_100616bd8(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = *(long *)(param_1 + 0x10);
  bVar1 = *(byte *)(param_2 + 0x10);
  if ((bVar1 >> 3 & 1) != 0) {
    lVar3 = *(long *)(param_2 + 8);
    uVar4 = *(undefined8 *)(lVar3 + 0x38);
    *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(lVar3 + 0x48);
    *(undefined8 *)(lVar2 + 0x38) = uVar4;
    *(long *)(lVar3 + 0x48) = lVar2 + 0x10;
    bVar1 = *(byte *)(param_2 + 0x10);
  }
  if ((bVar1 >> 4 & 1) != 0) {
    lVar3 = *(long *)(param_2 + 8);
    uVar4 = *(undefined8 *)(lVar3 + 0x60);
    *(undefined8 *)(lVar2 + 0x58) = *(undefined8 *)(lVar3 + 0x68);
    *(undefined8 *)(lVar2 + 0x50) = uVar4;
    *(undefined8 *)(lVar2 + 0x80) = *(undefined8 *)(lVar3 + 0x78);
    *(long *)(lVar3 + 0x78) = lVar2 + 0x60;
    bVar1 = *(byte *)(param_2 + 0x10);
  }
  if ((bVar1 >> 5 & 1) != 0) {
    lVar3 = *(long *)(param_2 + 8);
    *(undefined8 *)(lVar2 + 0xb0) = *(undefined8 *)(lVar3 + 0x90);
    *(long *)(lVar3 + 0x90) = lVar2 + 0x90;
  }
                    /* WARNING: Could not recover jumptable at 0x000100614e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 100616c4c; end: 100616ecf;  */

void FUN_100616c4c(ulong param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined1 auStack_1a8 [296];
  ulong uStack_40;
  ulong uStack_38;
  
  puVar14 = *(undefined8 **)(param_1 + 0x10);
  puVar6 = param_2;
  if ((*(byte *)(param_2 + 2) >> 6 & 1) == 0) {
    uVar8 = puVar14[2];
    uVar4 = param_1;
    if (uVar8 != 0) {
      if ((uVar8 & 1) != 0) {
        piVar9 = (int *)(uVar8 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar2) {
            *piVar9 = *piVar9 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      uStack_38 = uVar8;
      func_0x000104adfc18(param_2,&uStack_38,*puVar14);
      if ((uStack_38 & 1) == 0) {
        return;
      }
      FUN_10084dad0();
      return;
    }
  }
  else {
    lVar7 = param_2[1];
    uVar4 = puVar14[2];
    uVar8 = *(ulong *)(lVar7 + 0x98);
    if (uVar8 != uVar4) {
      if ((uVar8 & 1) != 0) {
        piVar9 = (int *)(uVar8 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar2) {
            *piVar9 = *piVar9 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        uVar8 = *(ulong *)(lVar7 + 0x98);
      }
      puVar14[2] = uVar8;
      if ((uVar4 & 1) != 0) {
        FUN_10084dad0();
      }
    }
    if ((puVar14[3] != 0) && (*(char *)(puVar14 + 4) == '\0')) {
      uVar15 = *puVar14;
      puVar5 = (undefined8 *)0x30;
      FUN_100460200();
      *puVar5 = &UNK_104a949b8;
      puVar5[1] = puVar14;
      puVar6 = puVar5 + 2;
      puVar5[3] = FUN_1004be1e0;
      puVar5[4] = puVar5;
      puVar5[5] = 0;
      uStack_38 = puVar14[2];
      if ((uStack_38 & 1) != 0) {
        piVar9 = (int *)(uStack_38 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar2) {
            *piVar9 = *piVar9 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_1004bd618(uVar15,puVar6,&uStack_38,"failing send_message op");
      uVar4 = uStack_38;
      if ((uStack_38 & 1) != 0) {
        FUN_10084dad0();
      }
    }
  }
  if ((*(byte *)(param_2 + 2) & 1) == 0) {
LAB_100616e28:
    if ((*(byte *)(param_2 + 2) >> 2 & 1) == 0) {
      FUN_100614e94(param_1,param_2);
      return;
    }
    if (puVar14[3] == 0) {
      puVar14[3] = param_2;
      if (*(char *)(puVar14 + 4) != '\0') {
        FUN_100616ed0(puVar14,param_1);
        return;
      }
      FUN_100612044(*puVar14,"send_message batch pending send_initial_metadata");
      return;
    }
  }
  else {
    if (*(char *)(puVar14 + 4) == '\0') {
      puVar10 = *(uint **)param_2[1];
      puVar11 = *(uint **)(param_1 + 8);
      uVar12 = *puVar10;
      if ((uVar12 >> 8 & 1) == 0) {
        uVar8 = 0;
      }
      else {
        uVar12 = uVar12 & 0xfffffeff;
        *puVar10 = uVar12;
        uVar8 = (ulong)puVar10[100] | 0x100000000;
      }
      uVar13 = *puVar11;
      if ((uVar8 & 0x100000000) != 0) {
        uVar13 = (uint)uVar8;
      }
      *(uint *)(puVar14 + 1) = uVar13;
      if (uVar13 - 1 < 2) {
        uVar12 = uVar12 | 0x80;
        *puVar10 = uVar12;
        puVar10[0x65] = uVar13;
      }
      else if (uVar13 == 3) goto LAB_100616e90;
      uVar13 = puVar11[1];
      *puVar10 = uVar12 | 0x200;
      *(char *)(puVar10 + 99) = (char)uVar13;
      *(undefined1 *)(puVar14 + 4) = 1;
      if (puVar14[3] != 0) {
        puVar6 = puVar14 + 5;
        uStack_40 = 0;
        FUN_1004bd618(*puVar14,puVar6,&uStack_40,"starting send_message after send_initial_metadata"
                     );
        uVar4 = uStack_40;
        if ((uStack_40 & 1) != 0) {
          FUN_10084dad0();
        }
      }
      goto LAB_100616e28;
    }
    func_0x000107c2c248();
  }
  func_0x000107c2c244();
LAB_100616e90:
  func_0x000107c60ebc();
  func_0x000104bd46a0();
  func_0x000104bd46a0();
  if ((uStack_38 & 1) != 0) {
    FUN_10084dad0();
  }
  func_0x000107c60bd8();
  func_0x000104bd46a0();
  lVar7 = *(long *)(uVar4 + 0x18);
  if (((*(uint *)(*(long *)(lVar7 + 8) + 0x30) & 0x80000002) == 0) && (*(int *)(uVar4 + 8) != 0)) {
    func_0x0001004b800c(auStack_1a8);
    lVar7 = *(long *)(*(long *)(uVar4 + 0x18) + 8);
    uVar15 = *(undefined8 *)(lVar7 + 0x28);
    iVar3 = *(int *)(uVar4 + 8);
    func_0x000104ab17a0(iVar3,uVar15,auStack_1a8);
    if (iVar3 != 0) {
      FUN_1006148f8(auStack_1a8,uVar15);
      *(uint *)(lVar7 + 0x30) = *(uint *)(lVar7 + 0x30) | 0x80000000;
    }
    FUN_1008301a4(auStack_1a8);
    lVar7 = *(long *)(uVar4 + 0x18);
  }
  *(undefined8 *)(uVar4 + 0x18) = 0;
  FUN_100614e94(puVar6,lVar7);
  return;
}



/* Entry: 100616ed0; end: 100616f9f;  */

void FUN_100616ed0(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [296];
  
  lVar2 = *(long *)(param_1 + 0x18);
  if (((*(uint *)(*(long *)(lVar2 + 8) + 0x30) & 0x80000002) == 0) && (*(int *)(param_1 + 8) != 0))
  {
    func_0x0001004b800c(auStack_168);
    lVar2 = *(long *)(*(long *)(param_1 + 0x18) + 8);
    uVar3 = *(undefined8 *)(lVar2 + 0x28);
    iVar1 = *(int *)(param_1 + 8);
    func_0x000104ab17a0(iVar1,uVar3,auStack_168);
    if (iVar1 != 0) {
      FUN_1006148f8(auStack_168,uVar3);
      *(uint *)(lVar2 + 0x30) = *(uint *)(lVar2 + 0x30) | 0x80000000;
    }
    FUN_1008301a4(auStack_168);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_100614e94(param_2,lVar2);
  return;
}



/* Entry: 100616fa0; end: 100617147;  */

long * FUN_100616fa0(long param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  char *pcVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  code *pcVar13;
  undefined8 uVar14;
  long *unaff_x22;
  undefined1 auStack_38 [8];
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  bVar3 = *(byte *)(param_2 + 2);
  if ((bVar3 >> 3 & 1) == 0) {
    if ((bVar3 >> 4 & 1) == 0) goto LAB_100616fc4;
LAB_10061702c:
    lVar12 = param_2[1];
    uVar14 = *(undefined8 *)(lVar12 + 0x78);
    puVar2[0x37] = *puVar2;
    puVar2[0x38] = "recv_message_ready";
    puVar2[0x33] = FUN_10082b66c;
    puVar2[0x34] = puVar2 + 0x32;
    puVar2[0x35] = 0;
    puVar2[0x36] = uVar14;
    *(undefined8 **)(lVar12 + 0x78) = puVar2 + 0x32;
    bVar3 = *(byte *)(param_2 + 2);
    if ((bVar3 >> 5 & 1) != 0) goto LAB_100617064;
LAB_100616fc8:
    if ((bVar3 >> 6 & 1) == 0) goto LAB_100616fcc;
LAB_10061709c:
    puVar7 = (undefined8 *)0x38;
    FUN_100460200();
    lVar12 = *param_2;
    pcVar13 = (code *)&UNK_104aaf19c;
    pcVar9 = "on_complete (cancel_stream)";
  }
  else {
    lVar12 = param_2[1];
    uVar14 = *(undefined8 *)(lVar12 + 0x48);
    puVar2[0x30] = *puVar2;
    puVar2[0x31] = "recv_initial_metadata_ready";
    puVar2[0x2c] = FUN_10082b66c;
    puVar2[0x2d] = puVar2 + 0x2b;
    puVar2[0x2e] = 0;
    puVar2[0x2f] = uVar14;
    *(undefined8 **)(lVar12 + 0x48) = puVar2 + 0x2b;
    bVar3 = *(byte *)(param_2 + 2);
    if ((bVar3 >> 4 & 1) != 0) goto LAB_10061702c;
LAB_100616fc4:
    if ((bVar3 >> 5 & 1) == 0) goto LAB_100616fc8;
LAB_100617064:
    lVar12 = param_2[1];
    uVar14 = *(undefined8 *)(lVar12 + 0x90);
    puVar2[0x3e] = *puVar2;
    puVar2[0x3f] = "recv_trailing_metadata_ready";
    puVar2[0x3a] = FUN_10082b66c;
    puVar2[0x3b] = puVar2 + 0x39;
    puVar2[0x3c] = 0;
    puVar2[0x3d] = uVar14;
    *(undefined8 **)(lVar12 + 0x90) = puVar2 + 0x39;
    bVar3 = *(byte *)(param_2 + 2);
    if ((bVar3 >> 6 & 1) != 0) goto LAB_10061709c;
LAB_100616fcc:
    lVar12 = *param_2;
    if (lVar12 == 0) goto FUN_100612044;
    if ((bVar3 & 1) == 0) {
      if ((bVar3 >> 2 & 1) == 0) {
        if ((bVar3 >> 1 & 1) == 0) {
          if ((bVar3 >> 3 & 1) == 0) {
            if ((bVar3 >> 4 & 1) == 0) {
              if ((bVar3 >> 5 & 1) == 0) {
                pcVar9 = "return nullptr";
                func_0x000104a6e964("return nullptr",
                                    "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/connected_channel.cc"
                                    ,0x59);
                    /* WARNING: Could not recover jumptable at 0x000100617150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(*(long *)pcVar9 + 0x30))();
                return (long *)pcVar9;
              }
              puVar7 = puVar2 + 0x24;
            }
            else {
              puVar7 = puVar2 + 0x1d;
            }
          }
          else {
            puVar7 = puVar2 + 0x16;
          }
        }
        else {
          puVar7 = puVar2 + 0xf;
        }
      }
      else {
        puVar7 = puVar2 + 8;
      }
    }
    else {
      puVar7 = puVar2 + 1;
    }
    pcVar13 = FUN_10082b66c;
    pcVar9 = "on_complete";
  }
  puVar7[5] = *puVar2;
  puVar7[6] = pcVar9;
  puVar7[1] = pcVar13;
  puVar7[2] = puVar7;
  puVar7[3] = 0;
  puVar7[4] = lVar12;
  *param_2 = (long)puVar7;
FUN_100612044:
  FUN_100617148(*puVar1,puVar2 + 0x40,param_2);
  plVar8 = (long *)*puVar2;
  do {
    lVar10 = *plVar8;
    lVar12 = lVar10 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar5) {
      *plVar8 = lVar12;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar12 != 0) {
    if (lVar10 == 0) {
      func_0x000107c2c340(plVar8,"passed batch to transport");
      func_0x000104bd46a0();
      func_0x000104bd46a0();
      FUN_1004bdf74(auStack_38);
      FUN_1004bdf74(&stack0xffffffffffffffd0);
      func_0x000107c60bd8(plVar8);
      return plRam0000000113815c70;
    }
    plVar8 = plVar8 + 1;
    plVar6 = plVar8;
    FUN_1004920d0(plVar8,&stack0xffffffffffffffdf);
    while (plVar6 == (long *)0x0) {
      plVar6 = plVar8;
      FUN_1004920d0(plVar8,&stack0xffffffffffffffdf);
    }
    func_0x0001004bd8dc(&stack0xffffffffffffffd0,plVar6[3]);
    plVar6[3] = 0;
    if (((ulong)unaff_x22 & 1) != 0) {
      piVar11 = (int *)((long)unaff_x22 + -1);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar5) {
          *piVar11 = *piVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_1004bd778();
    if (((ulong)unaff_x22 & 1) != 0) {
      FUN_10084dad0(unaff_x22);
    }
    plVar8 = unaff_x22;
    if (((ulong)unaff_x22 & 1) != 0) {
      FUN_10084dad0();
      plVar8 = unaff_x22;
    }
  }
  return plVar8;
}



/* Entry: 100617148; end: 100617153;  */

void FUN_100617148(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100617150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))();
  return;
}



/* Entry: 100617154; end: 100617337;  */

/* WARNING: Possible PIC construction at 0x000100617204: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100617208) */
/* WARNING: Removing unreachable block (ram,0x000100617338) */
/* WARNING: Removing unreachable block (ram,0x000100617360) */
/* WARNING: Removing unreachable block (ram,0x000100617454) */
/* WARNING: Removing unreachable block (ram,0x0001006174b0) */
/* WARNING: Removing unreachable block (ram,0x0001006174b8) */
/* WARNING: Removing unreachable block (ram,0x0001006174c0) */
/* WARNING: Removing unreachable block (ram,0x0001006177a8) */
/* WARNING: Removing unreachable block (ram,0x000100618abc) */
/* WARNING: Removing unreachable block (ram,0x0001006177b0) */
/* WARNING: Removing unreachable block (ram,0x0001006177d0) */
/* WARNING: Removing unreachable block (ram,0x0001006177e4) */
/* WARNING: Removing unreachable block (ram,0x000100617844) */
/* WARNING: Removing unreachable block (ram,0x000100617aac) */
/* WARNING: Removing unreachable block (ram,0x000100617858) */
/* WARNING: Removing unreachable block (ram,0x000100617ab0) */
/* WARNING: Removing unreachable block (ram,0x000100617ac8) */
/* WARNING: Removing unreachable block (ram,0x000100617acc) */
/* WARNING: Removing unreachable block (ram,0x000100617af0) */
/* WARNING: Removing unreachable block (ram,0x000100617af8) */
/* WARNING: Removing unreachable block (ram,0x000100617b0c) */
/* WARNING: Removing unreachable block (ram,0x000100617b10) */
/* WARNING: Removing unreachable block (ram,0x000100617b28) */
/* WARNING: Removing unreachable block (ram,0x000100617b18) */
/* WARNING: Removing unreachable block (ram,0x000100617b2c) */
/* WARNING: Removing unreachable block (ram,0x000100617b30) */
/* WARNING: Removing unreachable block (ram,0x000100617b70) */
/* WARNING: Removing unreachable block (ram,0x000100617b78) */
/* WARNING: Removing unreachable block (ram,0x000100617b80) */
/* WARNING: Removing unreachable block (ram,0x000100617b84) */
/* WARNING: Removing unreachable block (ram,0x000100617b8c) */
/* WARNING: Removing unreachable block (ram,0x000100617b98) */
/* WARNING: Removing unreachable block (ram,0x000100617ba0) */
/* WARNING: Removing unreachable block (ram,0x000100617ba8) */
/* WARNING: Removing unreachable block (ram,0x000100617bac) */
/* WARNING: Removing unreachable block (ram,0x000100617bb4) */
/* WARNING: Removing unreachable block (ram,0x000100617bb8) */
/* WARNING: Removing unreachable block (ram,0x000100617bbc) */
/* WARNING: Removing unreachable block (ram,0x000100617c0c) */
/* WARNING: Removing unreachable block (ram,0x000100617c14) */
/* WARNING: Removing unreachable block (ram,0x000100617c1c) */
/* WARNING: Removing unreachable block (ram,0x000100617c20) */
/* WARNING: Removing unreachable block (ram,0x000100617c28) */
/* WARNING: Removing unreachable block (ram,0x000100617c34) */
/* WARNING: Removing unreachable block (ram,0x000100617c3c) */
/* WARNING: Removing unreachable block (ram,0x000100617c44) */
/* WARNING: Removing unreachable block (ram,0x000100617c48) */
/* WARNING: Removing unreachable block (ram,0x000100617c50) */
/* WARNING: Removing unreachable block (ram,0x000100617c54) */
/* WARNING: Removing unreachable block (ram,0x000100617c58) */
/* WARNING: Removing unreachable block (ram,0x000100617ca8) */
/* WARNING: Removing unreachable block (ram,0x000100617cb0) */
/* WARNING: Removing unreachable block (ram,0x000100617cb8) */
/* WARNING: Removing unreachable block (ram,0x000100617cbc) */
/* WARNING: Removing unreachable block (ram,0x000100617cc4) */
/* WARNING: Removing unreachable block (ram,0x000100617cd0) */
/* WARNING: Removing unreachable block (ram,0x000100617cd8) */
/* WARNING: Removing unreachable block (ram,0x000100617ce0) */
/* WARNING: Removing unreachable block (ram,0x000100617ce4) */
/* WARNING: Removing unreachable block (ram,0x000100617cec) */
/* WARNING: Removing unreachable block (ram,0x000100617cf0) */
/* WARNING: Removing unreachable block (ram,0x000100617cf4) */
/* WARNING: Removing unreachable block (ram,0x000100617d34) */
/* WARNING: Removing unreachable block (ram,0x000100617d3c) */
/* WARNING: Removing unreachable block (ram,0x000100617d44) */
/* WARNING: Removing unreachable block (ram,0x000100617d48) */
/* WARNING: Removing unreachable block (ram,0x000100617d50) */
/* WARNING: Removing unreachable block (ram,0x000100617d5c) */
/* WARNING: Removing unreachable block (ram,0x000100617d64) */
/* WARNING: Removing unreachable block (ram,0x000100617d6c) */
/* WARNING: Removing unreachable block (ram,0x000100617d70) */
/* WARNING: Removing unreachable block (ram,0x000100617d78) */
/* WARNING: Removing unreachable block (ram,0x000100617d7c) */
/* WARNING: Removing unreachable block (ram,0x000100617d80) */
/* WARNING: Removing unreachable block (ram,0x000100617dc0) */
/* WARNING: Removing unreachable block (ram,0x000100617dc8) */
/* WARNING: Removing unreachable block (ram,0x000100617dd0) */
/* WARNING: Removing unreachable block (ram,0x000100617dd4) */
/* WARNING: Removing unreachable block (ram,0x000100617ddc) */
/* WARNING: Removing unreachable block (ram,0x000100617de8) */
/* WARNING: Removing unreachable block (ram,0x000100617df0) */
/* WARNING: Removing unreachable block (ram,0x000100617df8) */
/* WARNING: Removing unreachable block (ram,0x000100617dfc) */
/* WARNING: Removing unreachable block (ram,0x000100617e04) */
/* WARNING: Removing unreachable block (ram,0x000100617e08) */
/* WARNING: Removing unreachable block (ram,0x000100617e0c) */
/* WARNING: Removing unreachable block (ram,0x000100617e54) */
/* WARNING: Removing unreachable block (ram,0x000100617e5c) */
/* WARNING: Removing unreachable block (ram,0x000100617e64) */
/* WARNING: Removing unreachable block (ram,0x000100617e68) */
/* WARNING: Removing unreachable block (ram,0x000100617e70) */
/* WARNING: Removing unreachable block (ram,0x000100617e7c) */
/* WARNING: Removing unreachable block (ram,0x000100617e84) */
/* WARNING: Removing unreachable block (ram,0x000100617e8c) */
/* WARNING: Removing unreachable block (ram,0x000100617e90) */
/* WARNING: Removing unreachable block (ram,0x000100617e98) */
/* WARNING: Removing unreachable block (ram,0x000100617e9c) */
/* WARNING: Removing unreachable block (ram,0x000100617ea0) */
/* WARNING: Removing unreachable block (ram,0x000100617ee0) */
/* WARNING: Removing unreachable block (ram,0x000100617ee8) */
/* WARNING: Removing unreachable block (ram,0x000100617ef0) */
/* WARNING: Removing unreachable block (ram,0x000100617ef4) */
/* WARNING: Removing unreachable block (ram,0x000100617efc) */
/* WARNING: Removing unreachable block (ram,0x000100617f08) */
/* WARNING: Removing unreachable block (ram,0x000100617f10) */
/* WARNING: Removing unreachable block (ram,0x000100617f18) */
/* WARNING: Removing unreachable block (ram,0x000100617f1c) */
/* WARNING: Removing unreachable block (ram,0x000100617f24) */
/* WARNING: Removing unreachable block (ram,0x000100617f28) */
/* WARNING: Removing unreachable block (ram,0x000100617f2c) */
/* WARNING: Removing unreachable block (ram,0x000100617f6c) */
/* WARNING: Removing unreachable block (ram,0x000100617f74) */
/* WARNING: Removing unreachable block (ram,0x000100617f7c) */
/* WARNING: Removing unreachable block (ram,0x000100617f80) */
/* WARNING: Removing unreachable block (ram,0x000100617f88) */
/* WARNING: Removing unreachable block (ram,0x000100617f94) */
/* WARNING: Removing unreachable block (ram,0x000100617f9c) */
/* WARNING: Removing unreachable block (ram,0x000100617fa4) */
/* WARNING: Removing unreachable block (ram,0x000100617fa8) */
/* WARNING: Removing unreachable block (ram,0x000100617fb0) */
/* WARNING: Removing unreachable block (ram,0x000100617fb4) */
/* WARNING: Removing unreachable block (ram,0x000100617fb8) */
/* WARNING: Removing unreachable block (ram,0x000100617ff8) */
/* WARNING: Removing unreachable block (ram,0x000100618000) */
/* WARNING: Removing unreachable block (ram,0x000100618008) */
/* WARNING: Removing unreachable block (ram,0x00010061800c) */
/* WARNING: Removing unreachable block (ram,0x000100618014) */
/* WARNING: Removing unreachable block (ram,0x000100618020) */
/* WARNING: Removing unreachable block (ram,0x000100618028) */
/* WARNING: Removing unreachable block (ram,0x000100618030) */
/* WARNING: Removing unreachable block (ram,0x000100618034) */
/* WARNING: Removing unreachable block (ram,0x00010061803c) */
/* WARNING: Removing unreachable block (ram,0x000100618040) */
/* WARNING: Removing unreachable block (ram,0x000100618044) */
/* WARNING: Removing unreachable block (ram,0x000100618084) */
/* WARNING: Removing unreachable block (ram,0x00010061808c) */
/* WARNING: Removing unreachable block (ram,0x000100618094) */
/* WARNING: Removing unreachable block (ram,0x000100618098) */
/* WARNING: Removing unreachable block (ram,0x0001006180a0) */
/* WARNING: Removing unreachable block (ram,0x0001006180ac) */
/* WARNING: Removing unreachable block (ram,0x0001006180b4) */
/* WARNING: Removing unreachable block (ram,0x0001006180bc) */
/* WARNING: Removing unreachable block (ram,0x0001006180c0) */
/* WARNING: Removing unreachable block (ram,0x0001006180c8) */
/* WARNING: Removing unreachable block (ram,0x0001006180cc) */
/* WARNING: Removing unreachable block (ram,0x0001006180d0) */
/* WARNING: Removing unreachable block (ram,0x0001006180f8) */
/* WARNING: Removing unreachable block (ram,0x000100618100) */
/* WARNING: Removing unreachable block (ram,0x000100618108) */
/* WARNING: Removing unreachable block (ram,0x00010061812c) */
/* WARNING: Removing unreachable block (ram,0x000100618134) */
/* WARNING: Removing unreachable block (ram,0x00010061813c) */
/* WARNING: Removing unreachable block (ram,0x000100618140) */
/* WARNING: Removing unreachable block (ram,0x000100618148) */
/* WARNING: Removing unreachable block (ram,0x000100618154) */
/* WARNING: Removing unreachable block (ram,0x00010061815c) */
/* WARNING: Removing unreachable block (ram,0x000100618164) */
/* WARNING: Removing unreachable block (ram,0x000100618168) */
/* WARNING: Removing unreachable block (ram,0x000100618170) */
/* WARNING: Removing unreachable block (ram,0x000100618174) */
/* WARNING: Removing unreachable block (ram,0x000100618178) */
/* WARNING: Removing unreachable block (ram,0x0001006181a0) */
/* WARNING: Removing unreachable block (ram,0x0001006181a8) */
/* WARNING: Removing unreachable block (ram,0x0001006181b0) */
/* WARNING: Removing unreachable block (ram,0x0001006181d4) */
/* WARNING: Removing unreachable block (ram,0x0001006181dc) */
/* WARNING: Removing unreachable block (ram,0x0001006181e4) */
/* WARNING: Removing unreachable block (ram,0x0001006181e8) */
/* WARNING: Removing unreachable block (ram,0x0001006181f0) */
/* WARNING: Removing unreachable block (ram,0x0001006181fc) */
/* WARNING: Removing unreachable block (ram,0x000100618204) */
/* WARNING: Removing unreachable block (ram,0x00010061820c) */
/* WARNING: Removing unreachable block (ram,0x000100618210) */
/* WARNING: Removing unreachable block (ram,0x000100618218) */
/* WARNING: Removing unreachable block (ram,0x00010061821c) */
/* WARNING: Removing unreachable block (ram,0x000100618220) */
/* WARNING: Removing unreachable block (ram,0x000100618248) */
/* WARNING: Removing unreachable block (ram,0x000100618250) */
/* WARNING: Removing unreachable block (ram,0x000100618258) */
/* WARNING: Removing unreachable block (ram,0x00010061827c) */
/* WARNING: Removing unreachable block (ram,0x000100618284) */
/* WARNING: Removing unreachable block (ram,0x00010061828c) */
/* WARNING: Removing unreachable block (ram,0x000100618290) */
/* WARNING: Removing unreachable block (ram,0x000100618298) */
/* WARNING: Removing unreachable block (ram,0x0001006182a4) */
/* WARNING: Removing unreachable block (ram,0x0001006182ac) */
/* WARNING: Removing unreachable block (ram,0x0001006182b4) */
/* WARNING: Removing unreachable block (ram,0x0001006182b8) */
/* WARNING: Removing unreachable block (ram,0x0001006182c0) */
/* WARNING: Removing unreachable block (ram,0x0001006182c4) */
/* WARNING: Removing unreachable block (ram,0x0001006182c8) */
/* WARNING: Removing unreachable block (ram,0x0001006182f0) */
/* WARNING: Removing unreachable block (ram,0x0001006182f8) */
/* WARNING: Removing unreachable block (ram,0x000100618300) */
/* WARNING: Removing unreachable block (ram,0x000100618324) */
/* WARNING: Removing unreachable block (ram,0x00010061832c) */
/* WARNING: Removing unreachable block (ram,0x000100618334) */
/* WARNING: Removing unreachable block (ram,0x000100618338) */
/* WARNING: Removing unreachable block (ram,0x000100618340) */
/* WARNING: Removing unreachable block (ram,0x00010061834c) */
/* WARNING: Removing unreachable block (ram,0x000100618354) */
/* WARNING: Removing unreachable block (ram,0x00010061835c) */
/* WARNING: Removing unreachable block (ram,0x000100618360) */
/* WARNING: Removing unreachable block (ram,0x000100618368) */
/* WARNING: Removing unreachable block (ram,0x00010061836c) */
/* WARNING: Removing unreachable block (ram,0x000100618370) */
/* WARNING: Removing unreachable block (ram,0x000100618398) */
/* WARNING: Removing unreachable block (ram,0x0001006183a0) */
/* WARNING: Removing unreachable block (ram,0x0001006183a8) */
/* WARNING: Removing unreachable block (ram,0x0001006183cc) */
/* WARNING: Removing unreachable block (ram,0x0001006183d4) */
/* WARNING: Removing unreachable block (ram,0x0001006183dc) */
/* WARNING: Removing unreachable block (ram,0x0001006183e0) */
/* WARNING: Removing unreachable block (ram,0x0001006183e8) */
/* WARNING: Removing unreachable block (ram,0x0001006183f4) */
/* WARNING: Removing unreachable block (ram,0x0001006183fc) */
/* WARNING: Removing unreachable block (ram,0x000100618404) */
/* WARNING: Removing unreachable block (ram,0x000100618408) */
/* WARNING: Removing unreachable block (ram,0x000100618410) */
/* WARNING: Removing unreachable block (ram,0x000100618414) */
/* WARNING: Removing unreachable block (ram,0x000100618418) */
/* WARNING: Removing unreachable block (ram,0x000100618440) */
/* WARNING: Removing unreachable block (ram,0x000100618448) */
/* WARNING: Removing unreachable block (ram,0x000100618450) */
/* WARNING: Removing unreachable block (ram,0x000100618474) */
/* WARNING: Removing unreachable block (ram,0x00010061847c) */
/* WARNING: Removing unreachable block (ram,0x000100618484) */
/* WARNING: Removing unreachable block (ram,0x000100618488) */
/* WARNING: Removing unreachable block (ram,0x000100618490) */
/* WARNING: Removing unreachable block (ram,0x00010061849c) */
/* WARNING: Removing unreachable block (ram,0x0001006184a4) */
/* WARNING: Removing unreachable block (ram,0x0001006184ac) */
/* WARNING: Removing unreachable block (ram,0x0001006184b0) */
/* WARNING: Removing unreachable block (ram,0x0001006184b8) */
/* WARNING: Removing unreachable block (ram,0x0001006184bc) */
/* WARNING: Removing unreachable block (ram,0x0001006184c0) */
/* WARNING: Removing unreachable block (ram,0x0001006184e8) */
/* WARNING: Removing unreachable block (ram,0x0001006184f0) */
/* WARNING: Removing unreachable block (ram,0x0001006184f8) */
/* WARNING: Removing unreachable block (ram,0x00010061851c) */
/* WARNING: Removing unreachable block (ram,0x000100618524) */
/* WARNING: Removing unreachable block (ram,0x00010061852c) */
/* WARNING: Removing unreachable block (ram,0x000100618530) */
/* WARNING: Removing unreachable block (ram,0x000100618538) */
/* WARNING: Removing unreachable block (ram,0x000100618544) */
/* WARNING: Removing unreachable block (ram,0x00010061854c) */
/* WARNING: Removing unreachable block (ram,0x000100618554) */
/* WARNING: Removing unreachable block (ram,0x000100618558) */
/* WARNING: Removing unreachable block (ram,0x000100618560) */
/* WARNING: Removing unreachable block (ram,0x000100618564) */
/* WARNING: Removing unreachable block (ram,0x000100618568) */
/* WARNING: Removing unreachable block (ram,0x00010061856c) */
/* WARNING: Removing unreachable block (ram,0x00010061857c) */
/* WARNING: Removing unreachable block (ram,0x000100618588) */
/* WARNING: Removing unreachable block (ram,0x0001006185a4) */
/* WARNING: Removing unreachable block (ram,0x0001006185d4) */
/* WARNING: Removing unreachable block (ram,0x0001006185dc) */
/* WARNING: Removing unreachable block (ram,0x0001006185e4) */
/* WARNING: Removing unreachable block (ram,0x0001006185e8) */
/* WARNING: Removing unreachable block (ram,0x0001006185f0) */
/* WARNING: Removing unreachable block (ram,0x0001006185fc) */
/* WARNING: Removing unreachable block (ram,0x000100618604) */
/* WARNING: Removing unreachable block (ram,0x00010061860c) */
/* WARNING: Removing unreachable block (ram,0x000100618610) */
/* WARNING: Removing unreachable block (ram,0x000100618618) */
/* WARNING: Removing unreachable block (ram,0x000100618624) */
/* WARNING: Removing unreachable block (ram,0x000100618630) */
/* WARNING: Removing unreachable block (ram,0x000100618634) */
/* WARNING: Removing unreachable block (ram,0x00010061865c) */
/* WARNING: Removing unreachable block (ram,0x000100618664) */
/* WARNING: Removing unreachable block (ram,0x00010061866c) */
/* WARNING: Removing unreachable block (ram,0x000100618690) */
/* WARNING: Removing unreachable block (ram,0x000100618698) */
/* WARNING: Removing unreachable block (ram,0x0001006186a0) */
/* WARNING: Removing unreachable block (ram,0x0001006186a4) */
/* WARNING: Removing unreachable block (ram,0x0001006186ac) */
/* WARNING: Removing unreachable block (ram,0x0001006186b8) */
/* WARNING: Removing unreachable block (ram,0x0001006186c0) */
/* WARNING: Removing unreachable block (ram,0x0001006186c8) */
/* WARNING: Removing unreachable block (ram,0x0001006186cc) */
/* WARNING: Removing unreachable block (ram,0x0001006186d4) */
/* WARNING: Removing unreachable block (ram,0x0001006186dc) */
/* WARNING: Removing unreachable block (ram,0x0001006186e4) */
/* WARNING: Removing unreachable block (ram,0x0001006186e8) */
/* WARNING: Removing unreachable block (ram,0x0001006186f0) */
/* WARNING: Removing unreachable block (ram,0x00010061872c) */
/* WARNING: Removing unreachable block (ram,0x000100618750) */
/* WARNING: Removing unreachable block (ram,0x000100618768) */
/* WARNING: Removing unreachable block (ram,0x000100618784) */
/* WARNING: Removing unreachable block (ram,0x00010061878c) */
/* WARNING: Removing unreachable block (ram,0x0001006187c0) */
/* WARNING: Removing unreachable block (ram,0x0001006187d0) */
/* WARNING: Removing unreachable block (ram,0x0001006187dc) */
/* WARNING: Removing unreachable block (ram,0x0001006187e4) */
/* WARNING: Removing unreachable block (ram,0x0001006187ec) */
/* WARNING: Removing unreachable block (ram,0x000100618730) */
/* WARNING: Removing unreachable block (ram,0x0001006186f4) */
/* WARNING: Removing unreachable block (ram,0x00010061870c) */
/* WARNING: Removing unreachable block (ram,0x000100618718) */
/* WARNING: Removing unreachable block (ram,0x000100618724) */
/* WARNING: Removing unreachable block (ram,0x000100617b24) */
/* WARNING: Removing unreachable block (ram,0x0001006174c8) */
/* WARNING: Removing unreachable block (ram,0x0001006174cc) */
/* WARNING: Removing unreachable block (ram,0x0001006174d4) */
/* WARNING: Removing unreachable block (ram,0x0001006174dc) */
/* WARNING: Removing unreachable block (ram,0x000100617864) */
/* WARNING: Removing unreachable block (ram,0x00010061786c) */
/* WARNING: Removing unreachable block (ram,0x000100617a58) */
/* WARNING: Removing unreachable block (ram,0x000100618ad8) */
/* WARNING: Removing unreachable block (ram,0x000100617a78) */
/* WARNING: Removing unreachable block (ram,0x000100617a94) */
/* WARNING: Removing unreachable block (ram,0x000100618834) */
/* WARNING: Removing unreachable block (ram,0x000100617a9c) */
/* WARNING: Removing unreachable block (ram,0x000100617aa4) */
/* WARNING: Removing unreachable block (ram,0x000100617878) */
/* WARNING: Removing unreachable block (ram,0x00010061883c) */
/* WARNING: Removing unreachable block (ram,0x0001006174e4) */
/* WARNING: Removing unreachable block (ram,0x0001006174e8) */
/* WARNING: Removing unreachable block (ram,0x000100617528) */
/* WARNING: Removing unreachable block (ram,0x00010061752c) */
/* WARNING: Removing unreachable block (ram,0x000100617574) */
/* WARNING: Removing unreachable block (ram,0x000100617578) */
/* WARNING: Removing unreachable block (ram,0x0001006175b0) */
/* WARNING: Removing unreachable block (ram,0x000100617610) */
/* WARNING: Removing unreachable block (ram,0x000100617970) */
/* WARNING: Removing unreachable block (ram,0x000100617978) */
/* WARNING: Removing unreachable block (ram,0x000100617980) */
/* WARNING: Removing unreachable block (ram,0x0001006187fc) */
/* WARNING: Removing unreachable block (ram,0x00010061884c) */
/* WARNING: Removing unreachable block (ram,0x00010061895c) */
/* WARNING: Removing unreachable block (ram,0x0001006189b8) */
/* WARNING: Removing unreachable block (ram,0x0001006189f8) */
/* WARNING: Removing unreachable block (ram,0x000100618968) */
/* WARNING: Removing unreachable block (ram,0x00010061896c) */
/* WARNING: Removing unreachable block (ram,0x000100618a28) */
/* WARNING: Removing unreachable block (ram,0x000100618990) */
/* WARNING: Removing unreachable block (ram,0x000100618ad0) */
/* WARNING: Removing unreachable block (ram,0x00010061899c) */
/* WARNING: Removing unreachable block (ram,0x000100618a20) */
/* WARNING: Removing unreachable block (ram,0x0001006187f4) */
/* WARNING: Removing unreachable block (ram,0x000100618854) */
/* WARNING: Removing unreachable block (ram,0x00010061885c) */
/* WARNING: Removing unreachable block (ram,0x000100618880) */
/* WARNING: Removing unreachable block (ram,0x00010061889c) */
/* WARNING: Removing unreachable block (ram,0x0001006188a4) */
/* WARNING: Removing unreachable block (ram,0x0001006188a8) */
/* WARNING: Removing unreachable block (ram,0x000100618804) */
/* WARNING: Removing unreachable block (ram,0x000100617988) */
/* WARNING: Removing unreachable block (ram,0x0001006175bc) */
/* WARNING: Removing unreachable block (ram,0x0001006175c0) */
/* WARNING: Removing unreachable block (ram,0x000100618820) */
/* WARNING: Removing unreachable block (ram,0x000100617580) */
/* WARNING: Removing unreachable block (ram,0x000100617614) */
/* WARNING: Removing unreachable block (ram,0x000100617618) */
/* WARNING: Removing unreachable block (ram,0x000100617668) */
/* WARNING: Removing unreachable block (ram,0x00010061766c) */
/* WARNING: Removing unreachable block (ram,0x000100617674) */
/* WARNING: Removing unreachable block (ram,0x0001006178a8) */
/* WARNING: Removing unreachable block (ram,0x000100617a18) */
/* WARNING: Removing unreachable block (ram,0x0001006178b4) */
/* WARNING: Removing unreachable block (ram,0x000100617a1c) */
/* WARNING: Removing unreachable block (ram,0x000100617a28) */
/* WARNING: Removing unreachable block (ram,0x000100617a34) */
/* WARNING: Removing unreachable block (ram,0x000100617a38) */
/* WARNING: Removing unreachable block (ram,0x000100617a3c) */
/* WARNING: Removing unreachable block (ram,0x000100617a44) */
/* WARNING: Removing unreachable block (ram,0x000100617a4c) */
/* WARNING: Removing unreachable block (ram,0x000100617a50) */
/* WARNING: Removing unreachable block (ram,0x00010061767c) */
/* WARNING: Removing unreachable block (ram,0x0001006189bc) */
/* WARNING: Removing unreachable block (ram,0x000100617694) */
/* WARNING: Removing unreachable block (ram,0x0001006176e0) */
/* WARNING: Removing unreachable block (ram,0x0001006178c0) */
/* WARNING: Removing unreachable block (ram,0x0001006178c4) */
/* WARNING: Removing unreachable block (ram,0x0001006176ec) */
/* WARNING: Removing unreachable block (ram,0x0001006176f0) */
/* WARNING: Removing unreachable block (ram,0x0001006178d8) */
/* WARNING: Removing unreachable block (ram,0x00010061769c) */
/* WARNING: Removing unreachable block (ram,0x0001006176a4) */
/* WARNING: Removing unreachable block (ram,0x0001006176b0) */
/* WARNING: Removing unreachable block (ram,0x0001006176b4) */
/* WARNING: Removing unreachable block (ram,0x0001006176bc) */
/* WARNING: Removing unreachable block (ram,0x0001006176c4) */
/* WARNING: Removing unreachable block (ram,0x0001006176d8) */
/* WARNING: Removing unreachable block (ram,0x0001006178dc) */
/* WARNING: Removing unreachable block (ram,0x0001006178f0) */
/* WARNING: Removing unreachable block (ram,0x0001006178fc) */
/* WARNING: Removing unreachable block (ram,0x000100617904) */
/* WARNING: Removing unreachable block (ram,0x000100617630) */
/* WARNING: Removing unreachable block (ram,0x000100617730) */
/* WARNING: Removing unreachable block (ram,0x00010061790c) */
/* WARNING: Removing unreachable block (ram,0x000100617914) */
/* WARNING: Removing unreachable block (ram,0x000100617738) */
/* WARNING: Removing unreachable block (ram,0x000100617768) */
/* WARNING: Removing unreachable block (ram,0x000100617774) */
/* WARNING: Removing unreachable block (ram,0x00010061763c) */
/* WARNING: Removing unreachable block (ram,0x000100617928) */
/* WARNING: Removing unreachable block (ram,0x000100617644) */
/* WARNING: Removing unreachable block (ram,0x000100617648) */
/* WARNING: Removing unreachable block (ram,0x00010061764c) */
/* WARNING: Removing unreachable block (ram,0x000100617654) */
/* WARNING: Removing unreachable block (ram,0x00010061765c) */
/* WARNING: Removing unreachable block (ram,0x000100617660) */
/* WARNING: Removing unreachable block (ram,0x00010061777c) */
/* WARNING: Removing unreachable block (ram,0x000100617938) */
/* WARNING: Removing unreachable block (ram,0x00010061778c) */
/* WARNING: Removing unreachable block (ram,0x000100617790) */
/* WARNING: Removing unreachable block (ram,0x000100617798) */
/* WARNING: Removing unreachable block (ram,0x0001006177a0) */
/* WARNING: Removing unreachable block (ram,0x00010061793c) */
/* WARNING: Removing unreachable block (ram,0x000100617950) */
/* WARNING: Removing unreachable block (ram,0x000100617954) */
/* WARNING: Removing unreachable block (ram,0x000100617960) */
/* WARNING: Removing unreachable block (ram,0x000100617968) */
/* WARNING: Removing unreachable block (ram,0x000100617588) */
/* WARNING: Removing unreachable block (ram,0x0001006175a8) */
/* WARNING: Removing unreachable block (ram,0x000100618824) */
/* WARNING: Removing unreachable block (ram,0x000100617544) */
/* WARNING: Removing unreachable block (ram,0x0001006175e0) */
/* WARNING: Removing unreachable block (ram,0x000100617880) */
/* WARNING: Removing unreachable block (ram,0x0001006179dc) */
/* WARNING: Removing unreachable block (ram,0x000100617888) */
/* WARNING: Removing unreachable block (ram,0x000100617a08) */
/* WARNING: Removing unreachable block (ram,0x0001006175e8) */
/* WARNING: Removing unreachable block (ram,0x000100617608) */
/* WARNING: Removing unreachable block (ram,0x00010061754c) */
/* WARNING: Removing unreachable block (ram,0x00010061756c) */
/* WARNING: Removing unreachable block (ram,0x000100617a0c) */
/* WARNING: Removing unreachable block (ram,0x000100617500) */
/* WARNING: Removing unreachable block (ram,0x000100617508) */
/* WARNING: Removing unreachable block (ram,0x000100617510) */
/* WARNING: Removing unreachable block (ram,0x0001006179a8) */
/* WARNING: Removing unreachable block (ram,0x0001006179cc) */
/* WARNING: Removing unreachable block (ram,0x0001006179d4) */
/* WARNING: Removing unreachable block (ram,0x000100617518) */
/* WARNING: Removing unreachable block (ram,0x00010061751c) */
/* WARNING: Removing unreachable block (ram,0x0001006189c0) */
/* WARNING: Removing unreachable block (ram,0x000100618ac4) */
/* WARNING: Removing unreachable block (ram,0x000100618ac8) */
/* WARNING: Removing unreachable block (ram,0x000100618adc) */
/* WARNING: Removing unreachable block (ram,0x0001006189d8) */
/* WARNING: Removing unreachable block (ram,0x000100617368) */
/* WARNING: Removing unreachable block (ram,0x0001006173e0) */
/* WARNING: Removing unreachable block (ram,0x0001006173f4) */
/* WARNING: Removing unreachable block (ram,0x0001006173e8) */
/* WARNING: Removing unreachable block (ram,0x0001006173f0) */
/* WARNING: Removing unreachable block (ram,0x000100617378) */
/* WARNING: Removing unreachable block (ram,0x000100617384) */
/* WARNING: Removing unreachable block (ram,0x0001006173fc) */
/* WARNING: Removing unreachable block (ram,0x000100617420) */
/* WARNING: Removing unreachable block (ram,0x000100617424) */
/* WARNING: Removing unreachable block (ram,0x00010061738c) */
/* WARNING: Removing unreachable block (ram,0x000100617390) */
/* WARNING: Removing unreachable block (ram,0x0001006173a0) */
/* WARNING: Removing unreachable block (ram,0x0001006173d0) */
/* WARNING: Removing unreachable block (ram,0x0001006173d4) */
/* WARNING: Removing unreachable block (ram,0x000100617438) */
/* WARNING: Removing unreachable block (ram,0x000100617440) */

void FUN_100617154(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined1 uStack_31;
  
  bVar1 = *(byte *)(param_3 + 2);
  if (((bVar1 & 1) != 0) && ((**(byte **)param_3[1] >> 1 & 1) != 0)) {
    if ((bVar1 >> 3 & 1) != 0) {
      uStack_40 = 4;
      FUN_1004bd7e8(&uStack_31,((undefined8 *)param_3[1])[9],&uStack_40);
      if ((uStack_40 & 1) != 0) {
        FUN_10084dad0();
      }
      bVar1 = *(byte *)(param_3 + 2);
    }
    if ((bVar1 >> 4 & 1) != 0) {
      uStack_48 = 4;
      FUN_1004bd7e8(&uStack_31,*(undefined8 *)(param_3[1] + 0x78),&uStack_48);
      if ((uStack_48 & 1) != 0) {
        FUN_10084dad0();
      }
      bVar1 = *(byte *)(param_3 + 2);
    }
    if ((bVar1 >> 5 & 1) != 0) {
      uStack_50 = 4;
      FUN_1004bd7e8(&uStack_31,*(undefined8 *)(param_3[1] + 0x90),&uStack_50);
      if ((uStack_50 & 1) != 0) {
        FUN_10084dad0();
      }
    }
    uStack_58 = 4;
    FUN_1004bd7e8(&uStack_31,*param_3,&uStack_58);
    if ((uStack_58 & 1) != 0) {
      FUN_10084dad0();
    }
    return;
  }
  puVar3 = (undefined8 *)0x600;
  func_0x000107c60e20();
  uVar4 = *param_3;
  uVar6 = param_3[3];
  uVar5 = param_3[2];
  puVar3[1] = param_3[1];
  *puVar3 = uVar4;
  puVar3[3] = uVar6;
  puVar3[2] = uVar5;
  uVar4 = param_3[4];
  uVar6 = param_3[7];
  uVar5 = param_3[6];
  puVar3[5] = param_3[5];
  puVar3[4] = uVar4;
  puVar3[7] = uVar6;
  puVar3[6] = uVar5;
  FUN_100611c38(puVar3 + 8,*param_2);
  *(undefined1 *)(puVar3 + 0xbd) = 0;
  puVar3[0xbe] = param_2;
  puVar2 = param_2 + 0xc0;
  puVar3[0xbf] = 0;
  FUN_100460448(puVar2);
  puVar3[0xbf] = param_2[0xbf];
  param_2[0xbf] = puVar3;
  *(int *)(param_2 + 0xbe) = *(int *)(param_2 + 0xbe) + 1;
  bVar1 = *(byte *)(param_3 + 2);
  if ((bVar1 >> 2 & 1) != 0) {
    *(undefined1 *)((long)param_2 + 0x66) = 1;
    bVar1 = *(byte *)(param_3 + 2);
  }
  if ((bVar1 >> 5 & 1) != 0) {
    *(undefined1 *)((long)param_2 + 0x67) = 1;
  }
  func_0x000107c61268();
  if ((int)puVar2 == 0) {
    return;
  }
  func_0x000107c2c138();
                    /* WARNING: Could not recover jumptable at 0x000100466ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puRam00000001136a2078)();
  return;
}



/* Entry: 100617338; end: 100617467;  */

void FUN_100617338(long param_1)

{
  uint *puVar1;
  undefined8 ****ppppuVar2;
  char *pcVar3;
  byte bVar4;
  char cVar5;
  code *pcVar6;
  undefined1 uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  uint *puVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  uint uVar17;
  long *plVar18;
  long *plVar19;
  int *piVar20;
  long lVar21;
  long lVar22;
  bool bVar23;
  ulong uVar24;
  long *plVar25;
  uint *puVar26;
  long *plVar27;
  long lVar28;
  ulong *puVar29;
  undefined8 uStack_238;
  undefined8 uStack_230;
  ulong uStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  ulong uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  char *pcStack_1c8;
  undefined8 ***pppuStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  long *plStack_1a8;
  uint *puStack_1a0;
  ulong *puStack_198;
  long *plStack_190;
  char **ppcStack_188;
  undefined8 ***pppuStack_180;
  undefined8 ***pppuStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  char *pcStack_150;
  undefined8 uStack_148;
  long *plStack_140;
  long *plStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_110;
  long *plStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long *plStack_d8;
  undefined8 uStack_d0;
  char *pcStack_c8;
  undefined8 uStack_c0;
  long lStack_a8;
  
  plVar27 = (long *)(param_1 + 0x600);
  plVar8 = plVar27;
  FUN_100460448();
  plVar25 = *(long **)(param_1 + 0x5f8);
joined_r0x00010061735c:
  plVar13 = plVar25;
  if (plVar13 == (long *)0x0) goto SUB_100466b80;
  if ((char)plVar13[0xbd] == '\0') {
    plVar8 = plVar13;
    FUN_100617468();
    if ((char)plVar13[0xbd] == '\0') {
      if ((int)plVar8 != 2) goto code_r0x0001006173e8;
      plVar25 = (long *)plVar13[0xbf];
    }
    else {
      plVar25 = (long *)plVar13[0xbf];
      plVar18 = *(long **)(param_1 + 0x5f8);
      if (plVar18 != (long *)0x0) {
        if (plVar18 == plVar13) {
          *(long **)(param_1 + 0x5f8) = plVar25;
          FUN_1004e2bc8(plVar13 + 0x7b);
          FUN_1004e2bc8(plVar13 + 0x39);
          FUN_1008301a4(plVar13 + 0x14);
          if ((plVar13[0xd] & 1U) != 0) {
            FUN_10084dad0();
          }
          func_0x000107c60e14();
          *(int *)(param_1 + 0x5f0) = *(int *)(param_1 + 0x5f0) + -1;
          plVar8 = plVar13;
        }
        else {
          do {
            plVar19 = plVar18;
            if (plVar19 == (long *)0x0) goto joined_r0x00010061735c;
            plVar18 = (long *)plVar19[0xbf];
          } while ((long *)plVar19[0xbf] != plVar13);
          plVar19[0xbf] = (long)plVar25;
          *(int *)(param_1 + 0x5f0) = *(int *)(param_1 + 0x5f0) + -1;
          FUN_1004e2bc8(plVar13 + 0x7b);
          FUN_1004e2bc8(plVar13 + 0x39);
          FUN_1008301a4(plVar13 + 0x14);
          if ((plVar13[0xd] & 1U) != 0) {
            FUN_10084dad0();
          }
          func_0x000107c60e14();
          plVar8 = plVar13;
        }
      }
    }
    goto joined_r0x00010061735c;
  }
  func_0x000107c2c478();
  func_0x000104bd46a0();
  func_0x000104bd46a0();
  func_0x000104bd46a0();
  func_0x000104bd46a0();
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar22 = plVar8[0xbe];
  lVar28 = *(long *)(lVar22 + 0x18);
  bVar4 = *(byte *)(plVar8 + 2);
  if (((((bVar4 & 1) != 0) && (*(char *)(lVar22 + 0x4e) == '\0')) &&
      (*(char *)(lVar22 + 0x5d) == '\0')) && (*(char *)(lVar22 + 0x48) == '\0')) {
    if (*(long *)(lVar22 + 0x28) != 0) {
      func_0x000107c2c484();
      goto LAB_100618adc;
    }
    uVar15 = *(undefined8 *)(lVar28 + 8);
    FUN_100619414(uVar15,*(undefined8 *)(lVar22 + 0x20),&PTR_FUN_1130a64e0);
    *(undefined8 *)(lVar22 + 0x28) = uVar15;
    if (*(char *)(lVar28 + 0x18) != '\0') {
      func_0x0001006195b4();
      func_0x0001006195c4(*(undefined8 *)(lVar22 + 0x28),1);
    }
    pppuStack_1c0 = (undefined8 ****)0x0;
    uStack_1b8 = 0;
    lStack_1b0 = 0;
    pcStack_1c8 = "POST";
    plVar25 = (long *)(lVar22 + 0x40);
    *plVar25 = 0;
    puVar26 = *(uint **)plVar8[1];
    plVar27 = *(long **)(lVar28 + 0x10);
    puVar11 = puVar26;
    FUN_1006195d4();
    puVar29 = (ulong *)(lVar22 + 0x30);
    ppcStack_188 = &pcStack_1c8;
    pppuStack_180 = &pppuStack_1c0;
    lVar12 = (long)puVar11 << 4;
    *puVar29 = 0;
    plStack_1a8 = plVar27;
    puStack_1a0 = puVar11;
    puStack_198 = puVar29;
    plStack_190 = plVar25;
    FUN_100460200();
    *plVar25 = lVar12;
    uVar17 = *puVar26;
    if ((uVar17 & 1) != 0) {
      plStack_d8 = (long *)0x10f2a3094;
      uStack_d0 = 8;
      if (plVar27 == (long *)0x0) {
        plVar13 = (long *)0x0;
      }
      else {
        plVar13 = plVar27;
        func_0x000107c613d0();
      }
      plStack_138 = (long *)((ulong)*(long **)(puVar26 + 0x76) & 0xff);
      plStack_140 = (long *)((long)puVar26 + 0x1d9);
      if (*(long *)(puVar26 + 0x74) != 0) {
        plStack_138 = *(long **)(puVar26 + 0x76);
        plStack_140 = *(long **)(puVar26 + 0x78);
      }
      plStack_110 = plVar27;
      plStack_108 = plVar13;
      FUN_100066c24(&pppuStack_178,&plStack_d8,&plStack_110,&plStack_140);
      if (lStack_1b0 < 0) {
        func_0x000107c60e14(pppuStack_1c0);
      }
      uStack_1b8 = uStack_170;
      pppuStack_1c0 = pppuStack_178;
      lStack_1b0 = lStack_168;
      uVar17 = *puVar26;
    }
    if ((uVar17 >> 2 & 1) != 0) {
      if (puVar26[0x6a] == 0) {
        pcStack_1c8 = "POST";
      }
      else if (puVar26[0x6a] - 1 < 3) goto LAB_100618ac8;
    }
    if ((uVar17 >> 3 & 1) != 0) {
      plStack_d8 = (long *)0x1;
      uStack_d0 = 7;
      pcStack_c8 = ":status";
      func_0x000104a7a584(&plStack_110,puVar26[0x69]);
      FUN_100619710(&plStack_1a8,&plStack_d8,&plStack_110);
      if ((long *)0x1 < plStack_110) {
        do {
          lVar12 = *plStack_110;
          cVar5 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(plStack_110,0x10);
          if (bVar23) {
            *plStack_110 = lVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar12 + -1 == 0) {
          (*(code *)plStack_110[1])();
        }
      }
      if ((long *)0x1 < plStack_d8) {
        do {
          lVar12 = *plStack_d8;
          cVar5 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(plStack_d8,0x10);
          if (bVar23) {
            *plStack_d8 = lVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar12 + -1 == 0) {
          (*(code *)plStack_d8[1])();
        }
      }
      uVar17 = *puVar26;
    }
    if ((uVar17 >> 5 & 1) != 0) {
      plStack_d8 = (long *)0x1;
      uStack_d0 = 0xc;
      pcStack_c8 = "content-type";
      FUN_100619644(&plStack_140,puVar26[0x67]);
      plStack_108 = plStack_138;
      plStack_110 = plStack_140;
      uStack_f8 = uStack_128;
      uStack_100 = uStack_130;
      plStack_138 = (long *)0x0;
      plStack_140 = (long *)0x0;
      uStack_128 = 0;
      uStack_130 = 0;
      FUN_100619710(&plStack_1a8,&plStack_d8,&plStack_110);
      if ((long *)0x1 < plStack_110) {
        do {
          lVar12 = *plStack_110;
          cVar5 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(plStack_110,0x10);
          if (bVar23) {
            *plStack_110 = lVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar12 + -1 == 0) {
          (*(code *)plStack_110[1])();
        }
      }
      if ((long *)0x1 < plStack_d8) {
        do {
          lVar12 = *plStack_d8;
          cVar5 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(plStack_d8,0x10);
          if (bVar23) {
            *plStack_d8 = lVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar12 + -1 == 0) {
          (*(code *)plStack_d8[1])();
        }
      }
      uVar17 = *puVar26;
    }
    if ((uVar17 >> 6 & 1) != 0) {
      plStack_d8 = (long *)0x1;
      uStack_d0 = 2;
      pcStack_c8 = "te";
      FUN_100619828(&plStack_140,(char)puVar26[0x66]);
      plStack_108 = plStack_138;
      plStack_110 = plStack_140;
      uStack_f8 = uStack_128;
      uStack_100 = uStack_130;
      plStack_138 = (long *)0x0;
      plStack_140 = (long *)0x0;
      uStack_128 = 0;
      uStack_130 = 0;
      FUN_100619710(&plStack_1a8,&plStack_d8,&plStack_110);
      if ((long *)0x1 < plStack_110) {
        do {
          lVar12 = *plStack_110;
          cVar5 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(plStack_110,0x10);
          if (bVar23) {
            *plStack_110 = lVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar12 + -1 == 0) {
          (*(code *)plStack_110[1])();
        }
      }
      if ((long *)0x1 < plStack_d8) {
        do {
          lVar12 = *plStack_d8;
          cVar5 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(plStack_d8,0x10);
          if (bVar23) {
            *plStack_d8 = lVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar12 + -1 == 0) {
          (*(code *)plStack_d8[1])();
        }
      }
      uVar17 = *puVar26;
    }
    if ((uVar17 >> 7 & 1) != 0) {
      plStack_d8 = (long *)0x1;
      uStack_d0 = 0xd;
      pcStack_c8 = "grpc-encoding";
      func_0x000104a7ac74(&plStack_110,puVar26[0x65]);
      FUN_100619710(&plStack_1a8,&plStack_d8,&plStack_110);
      if ((long *)0x1 < plStack_110) {
        do {
          lVar12 = *plStack_110;
          cVar5 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(plStack_110,0x10);
          if (bVar23) {
            *plStack_110 = lVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar12 + -1 == 0) {
          (*(code *)plStack_110[1])();
        }
      }
      if ((long *)0x1 < plStack_d8) {
        do {
          lVar12 = *plStack_d8;
          cVar5 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(plStack_d8,0x10);
          if (bVar23) {
            *plStack_d8 = lVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar12 + -1 == 0) {
          (*(code *)plStack_d8[1])();
        }
      }
      uVar17 = *puVar26;
    }
    if ((uVar17 >> 8 & 1) != 0) {
      plStack_d8 = (long *)0x1;
      uStack_d0 = 0x1e;
      pcStack_c8 = "grpc-internal-encoding-request";
      func_0x000104a7ac74(&plStack_110,puVar26[100]);
      FUN_100619710(&plStack_1a8,&plStack_d8,&plStack_110);
      if ((long *)0x1 < plStack_110) {
        do {
          lVar12 = *plStack_110;
          cVar5 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(plStack_110,0x10);
          if (bVar23) {
            *plStack_110 = lVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar12 + -1 == 0) {
          (*(code *)plStack_110[1])();
        }
      }
      if ((long *)0x1 < plStack_d8) {
        do {
          lVar12 = *plStack_d8;
          cVar5 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(plStack_d8,0x10);
          if (bVar23) {
            *plStack_d8 = lVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar12 + -1 == 0) {
          (*(code *)plStack_d8[1])();
        }
      }
      uVar17 = *puVar26;
    }
    if ((uVar17 >> 9 & 1) != 0) {
      plStack_d8 = (long *)0x1;
      uStack_d0 = 0x14;
      pcStack_c8 = "grpc-accept-encoding";
      plStack_140 = (long *)CONCAT71(plStack_140._1_7_,(char)puVar26[99]);
      FUN_10061b500(&plStack_110,&plStack_140);
      FUN_100619710(&plStack_1a8,&plStack_d8,&plStack_110);
      if ((long *)0x1 < plStack_110) {
        do {
          lVar12 = *plStack_110;
          cVar5 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(plStack_110,0x10);
          if (bVar23) {
            *plStack_110 = lVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar12 + -1 == 0) {
          (*(code *)plStack_110[1])();
        }
      }
      if ((long *)0x1 < plStack_d8) {
        do {
          lVar12 = *plStack_d8;
          cVar5 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(plStack_d8,0x10);
          if (bVar23) {
            *plStack_d8 = lVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar12 + -1 == 0) {
          (*(code *)plStack_d8[1])();
        }
      }
      uVar17 = *puVar26;
    }
    if ((uVar17 >> 10 & 1) != 0) {
      plStack_d8 = (long *)0x1;
      uStack_d0 = 0xb;
      pcStack_c8 = "grpc-status";
      func_0x000104a7a584(&plStack_110,(long)(int)puVar26[0x62]);
      FUN_100619710(&plStack_1a8,&plStack_d8,&plStack_110);
      if ((long *)0x1 < plStack_110) {
        do {
          lVar12 = *plStack_110;
          cVar5 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(plStack_110,0x10);
          if (bVar23) {
            *plStack_110 = lVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar12 + -1 == 0) {
          (*(code *)plStack_110[1])();
        }
      }
      if ((long *)0x1 < plStack_d8) {
        do {
          lVar12 = *plStack_d8;
          cVar5 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(plStack_d8,0x10);
          if (bVar23) {
            *plStack_d8 = lVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar12 + -1 == 0) {
          (*(code *)plStack_d8[1])();
        }
      }
      uVar17 = *puVar26;
    }
    if ((uVar17 >> 0xb & 1) != 0) {
      plStack_d8 = (long *)0x1;
      uStack_d0 = 0xc;
      pcStack_c8 = "grpc-timeout";
      FUN_10061b528(&plStack_110,*(undefined8 *)(puVar26 + 0x60));
      FUN_100619710(&plStack_1a8,&plStack_d8,&plStack_110);
      if ((long *)0x1 < plStack_110) {
        do {
          lVar12 = *plStack_110;
          cVar5 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(plStack_110,0x10);
          if (bVar23) {
            *plStack_110 = lVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar12 + -1 == 0) {
          (*(code *)plStack_110[1])();
        }
      }
      if ((long *)0x1 < plStack_d8) {
        do {
          lVar12 = *plStack_d8;
          cVar5 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(plStack_d8,0x10);
          if (bVar23) {
            *plStack_d8 = lVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar12 + -1 == 0) {
          (*(code *)plStack_d8[1])();
        }
      }
      uVar17 = *puVar26;
    }
    if ((uVar17 >> 0xc & 1) != 0) {
      plStack_d8 = (long *)0x1;
      uStack_d0 = 0x1a;
      pcStack_c8 = "grpc-previous-rpc-attempts";
      func_0x000104a7a584(&plStack_110,puVar26[0x5e]);
      FUN_100619710(&plStack_1a8,&plStack_d8,&plStack_110);
      if ((long *)0x1 < plStack_110) {
        do {
          lVar12 = *plStack_110;
          cVar5 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(plStack_110,0x10);
          if (bVar23) {
            *plStack_110 = lVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar12 + -1 == 0) {
          (*(code *)plStack_110[1])();
        }
      }
      if ((long *)0x1 < plStack_d8) {
        do {
          lVar12 = *plStack_d8;
          cVar5 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(plStack_d8,0x10);
          if (bVar23) {
            *plStack_d8 = lVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar12 + -1 == 0) {
          (*(code *)plStack_d8[1])();
        }
      }
      uVar17 = *puVar26;
    }
    if ((uVar17 >> 0xd & 1) != 0) {
      plStack_d8 = (long *)0x1;
      uStack_d0 = 0x16;
      pcStack_c8 = "grpc-retry-pushback-ms";
      func_0x000104a7a584(&plStack_110,*(undefined8 *)(puVar26 + 0x5c));
      FUN_100619710(&plStack_1a8,&plStack_d8,&plStack_110);
      if ((long *)0x1 < plStack_110) {
        do {
          lVar12 = *plStack_110;
          cVar5 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(plStack_110,0x10);
          if (bVar23) {
            *plStack_110 = lVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar12 + -1 == 0) {
          (*(code *)plStack_110[1])();
        }
      }
      if ((long *)0x1 < plStack_d8) {
        do {
          lVar12 = *plStack_d8;
          cVar5 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(plStack_d8,0x10);
          if (bVar23) {
            *plStack_d8 = lVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar12 + -1 == 0) {
          (*(code *)plStack_d8[1])();
        }
      }
      uVar17 = *puVar26;
    }
    if ((uVar17 >> 0xe & 1) != 0) {
      plStack_d8 = (long *)0x1;
      uStack_d0 = 10;
      pcStack_c8 = "user-agent";
      plVar27 = *(long **)(puVar26 + 0x54);
      if ((long *)0x1 < plVar27) {
        do {
          cVar5 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(plVar27,0x10);
          if (bVar23) {
            *plVar27 = *plVar27 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      plStack_108 = *(long **)(puVar26 + 0x56);
      plStack_110 = *(long **)(puVar26 + 0x54);
      uStack_f8 = *(undefined8 *)(puVar26 + 0x5a);
      uStack_100 = *(undefined8 *)(puVar26 + 0x58);
      FUN_100619710(&plStack_1a8,&plStack_d8,&plStack_110);
      if ((long *)0x1 < plStack_110) {
        do {
          lVar12 = *plStack_110;
          cVar5 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(plStack_110,0x10);
          if (bVar23) {
            *plStack_110 = lVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar12 + -1 == 0) {
          (*(code *)plStack_110[1])();
        }
      }
      if ((long *)0x1 < plStack_d8) {
        do {
          lVar12 = *plStack_d8;
          cVar5 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(plStack_d8,0x10);
          if (bVar23) {
            *plStack_d8 = lVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar12 + -1 == 0) {
          (*(code *)plStack_d8[1])();
        }
      }
      uVar17 = *puVar26;
    }
    if ((uVar17 >> 0xf & 1) != 0) {
      plStack_d8 = (long *)0x1;
      uStack_d0 = 0xc;
      pcStack_c8 = "grpc-message";
      plVar27 = *(long **)(puVar26 + 0x4c);
      if ((long *)0x1 < plVar27) {
        do {
          cVar5 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(plVar27,0x10);
          if (bVar23) {
            *plVar27 = *plVar27 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      plStack_108 = *(long **)(puVar26 + 0x4e);
      plStack_110 = *(long **)(puVar26 + 0x4c);
      uStack_f8 = *(undefined8 *)(puVar26 + 0x52);
      uStack_100 = *(undefined8 *)(puVar26 + 0x50);
      FUN_100619710(&plStack_1a8,&plStack_d8,&plStack_110);
      if ((long *)0x1 < plStack_110) {
        do {
          lVar12 = *plStack_110;
          cVar5 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(plStack_110,0x10);
          if (bVar23) {
            *plStack_110 = lVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar12 + -1 == 0) {
          (*(code *)plStack_110[1])();
        }
      }
      if ((long *)0x1 < plStack_d8) {
        do {
          lVar12 = *plStack_d8;
          cVar5 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(plStack_d8,0x10);
          if (bVar23) {
            *plStack_d8 = lVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar12 + -1 == 0) {
          (*(code *)plStack_d8[1])();
        }
      }
      uVar17 = *puVar26;
    }
    if ((uVar17 >> 0x10 & 1) != 0) {
      plStack_d8 = (long *)0x1;
      uStack_d0 = 4;
      pcStack_c8 = "host";
      plVar27 = *(long **)(puVar26 + 0x44);
      if ((long *)0x1 < plVar27) {
        do {
          cVar5 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(plVar27,0x10);
          if (bVar23) {
            *plVar27 = *plVar27 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      plStack_108 = *(long **)(puVar26 + 0x46);
      plStack_110 = *(long **)(puVar26 + 0x44);
      uStack_f8 = *(undefined8 *)(puVar26 + 0x4a);
      uStack_100 = *(undefined8 *)(puVar26 + 0x48);
      FUN_100619710(&plStack_1a8,&plStack_d8,&plStack_110);
      if ((long *)0x1 < plStack_110) {
        do {
          lVar12 = *plStack_110;
          cVar5 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(plStack_110,0x10);
          if (bVar23) {
            *plStack_110 = lVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar12 + -1 == 0) {
          (*(code *)plStack_110[1])();
        }
      }
      if ((long *)0x1 < plStack_d8) {
        do {
          lVar12 = *plStack_d8;
          cVar5 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(plStack_d8,0x10);
          if (bVar23) {
            *plStack_d8 = lVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar12 + -1 == 0) {
          (*(code *)plStack_d8[1])();
        }
      }
      uVar17 = *puVar26;
    }
    if ((uVar17 >> 0x11 & 1) != 0) {
      plStack_d8 = (long *)0x1;
      uStack_d0 = 0x19;
      pcStack_c8 = "endpoint-load-metrics-bin";
      plVar27 = *(long **)(puVar26 + 0x3c);
      if ((long *)0x1 < plVar27) {
        do {
          cVar5 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(plVar27,0x10);
          if (bVar23) {
            *plVar27 = *plVar27 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      plStack_108 = *(long **)(puVar26 + 0x3e);
      plStack_110 = *(long **)(puVar26 + 0x3c);
      uStack_f8 = *(undefined8 *)(puVar26 + 0x42);
      uStack_100 = *(undefined8 *)(puVar26 + 0x40);
      FUN_100619710(&plStack_1a8,&plStack_d8,&plStack_110);
      if ((long *)0x1 < plStack_110) {
        do {
          lVar12 = *plStack_110;
          cVar5 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(plStack_110,0x10);
          if (bVar23) {
            *plStack_110 = lVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar12 + -1 == 0) {
          (*(code *)plStack_110[1])();
        }
      }
      if ((long *)0x1 < plStack_d8) {
        do {
          lVar12 = *plStack_d8;
          cVar5 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(plStack_d8,0x10);
          if (bVar23) {
            *plStack_d8 = lVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar12 + -1 == 0) {
          (*(code *)plStack_d8[1])();
        }
      }
      uVar17 = *puVar26;
    }
    if ((uVar17 >> 0x12 & 1) != 0) {
      plStack_d8 = (long *)0x1;
      uStack_d0 = 0x15;
      pcStack_c8 = "grpc-server-stats-bin";
      plVar27 = *(long **)(puVar26 + 0x34);
      if ((long *)0x1 < plVar27) {
        do {
          cVar5 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(plVar27,0x10);
          if (bVar23) {
            *plVar27 = *plVar27 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      plStack_108 = *(long **)(puVar26 + 0x36);
      plStack_110 = *(long **)(puVar26 + 0x34);
      uStack_f8 = *(undefined8 *)(puVar26 + 0x3a);
      uStack_100 = *(undefined8 *)(puVar26 + 0x38);
      FUN_100619710(&plStack_1a8,&plStack_d8,&plStack_110);
      if ((long *)0x1 < plStack_110) {
        do {
          lVar12 = *plStack_110;
          cVar5 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(plStack_110,0x10);
          if (bVar23) {
            *plStack_110 = lVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar12 + -1 == 0) {
          (*(code *)plStack_110[1])();
        }
      }
      if ((long *)0x1 < plStack_d8) {
        do {
          lVar12 = *plStack_d8;
          cVar5 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(plStack_d8,0x10);
          if (bVar23) {
            *plStack_d8 = lVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar12 + -1 == 0) {
          (*(code *)plStack_d8[1])();
        }
      }
      uVar17 = *puVar26;
    }
    if ((uVar17 >> 0x13 & 1) != 0) {
      plStack_d8 = (long *)0x1;
      uStack_d0 = 0xe;
      pcStack_c8 = "grpc-trace-bin";
      plVar27 = *(long **)(puVar26 + 0x2c);
      if ((long *)0x1 < plVar27) {
        do {
          cVar5 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(plVar27,0x10);
          if (bVar23) {
            *plVar27 = *plVar27 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      plStack_108 = *(long **)(puVar26 + 0x2e);
      plStack_110 = *(long **)(puVar26 + 0x2c);
      uStack_f8 = *(undefined8 *)(puVar26 + 0x32);
      uStack_100 = *(undefined8 *)(puVar26 + 0x30);
      FUN_100619710(&plStack_1a8,&plStack_d8,&plStack_110);
      if ((long *)0x1 < plStack_110) {
        do {
          lVar12 = *plStack_110;
          cVar5 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(plStack_110,0x10);
          if (bVar23) {
            *plStack_110 = lVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar12 + -1 == 0) {
          (*(code *)plStack_110[1])();
        }
      }
      if ((long *)0x1 < plStack_d8) {
        do {
          lVar12 = *plStack_d8;
          cVar5 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(plStack_d8,0x10);
          if (bVar23) {
            *plStack_d8 = lVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar12 + -1 == 0) {
          (*(code *)plStack_d8[1])();
        }
      }
      uVar17 = *puVar26;
    }
    if ((uVar17 >> 0x14 & 1) != 0) {
      plStack_d8 = (long *)0x1;
      uStack_d0 = 0xd;
      pcStack_c8 = "grpc-tags-bin";
      plVar27 = *(long **)(puVar26 + 0x24);
      if ((long *)0x1 < plVar27) {
        do {
          cVar5 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(plVar27,0x10);
          if (bVar23) {
            *plVar27 = *plVar27 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      plStack_108 = *(long **)(puVar26 + 0x26);
      plStack_110 = *(long **)(puVar26 + 0x24);
      uStack_f8 = *(undefined8 *)(puVar26 + 0x2a);
      uStack_100 = *(undefined8 *)(puVar26 + 0x28);
      FUN_100619710(&plStack_1a8,&plStack_d8,&plStack_110);
      if ((long *)0x1 < plStack_110) {
        do {
          lVar12 = *plStack_110;
          cVar5 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(plStack_110,0x10);
          if (bVar23) {
            *plStack_110 = lVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar12 + -1 == 0) {
          (*(code *)plStack_110[1])();
        }
      }
      if ((long *)0x1 < plStack_d8) {
        do {
          lVar12 = *plStack_d8;
          cVar5 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(plStack_d8,0x10);
          if (bVar23) {
            *plStack_d8 = lVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar12 + -1 == 0) {
          (*(code *)plStack_d8[1])();
        }
      }
      uVar17 = *puVar26;
    }
    if ((uVar17 >> 0x15 & 1) != 0) goto LAB_100618ac8;
    if ((uVar17 >> 0x16 & 1) != 0) {
      uVar9 = *(ulong *)(puVar26 + 0x18);
      puVar11 = puVar26 + 0x1a;
      if ((uVar9 & 1) != 0) {
        puVar11 = *(uint **)(puVar26 + 0x1a);
      }
      if (1 < uVar9) {
        puVar1 = puVar11 + (uVar9 >> 1) * 8;
        do {
          plStack_d8 = (long *)0x1;
          uStack_d0 = 0xb;
          pcStack_c8 = "lb-cost-bin";
          func_0x000104adf18c(&plStack_110,puVar11);
          FUN_100619710(&plStack_1a8,&plStack_d8,&plStack_110);
          if ((long *)0x1 < plStack_110) {
            do {
              lVar12 = *plStack_110;
              cVar5 = '\x01';
              bVar23 = (bool)ExclusiveMonitorPass(plStack_110,0x10);
              if (bVar23) {
                *plStack_110 = lVar12 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar12 + -1 == 0) {
              (*(code *)plStack_110[1])();
            }
          }
          if ((long *)0x1 < plStack_d8) {
            do {
              lVar12 = *plStack_d8;
              cVar5 = '\x01';
              bVar23 = (bool)ExclusiveMonitorPass(plStack_d8,0x10);
              if (bVar23) {
                *plStack_d8 = lVar12 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar12 + -1 == 0) {
              (*(code *)plStack_d8[1])();
            }
          }
          puVar11 = puVar11 + 8;
        } while (puVar11 != puVar1);
        uVar17 = *puVar26;
      }
    }
    if ((uVar17 >> 0x17 & 1) != 0) {
      plStack_d8 = (long *)0x1;
      uStack_d0 = 8;
      pcStack_c8 = "lb-token";
      plVar27 = *(long **)(puVar26 + 0x10);
      if ((long *)0x1 < plVar27) {
        do {
          cVar5 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(plVar27,0x10);
          if (bVar23) {
            *plVar27 = *plVar27 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      plStack_108 = *(long **)(puVar26 + 0x12);
      plStack_110 = *(long **)(puVar26 + 0x10);
      uStack_f8 = *(undefined8 *)(puVar26 + 0x16);
      uStack_100 = *(undefined8 *)(puVar26 + 0x14);
      FUN_100619710(&plStack_1a8,&plStack_d8,&plStack_110);
      if ((long *)0x1 < plStack_110) {
        do {
          lVar12 = *plStack_110;
          cVar5 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(plStack_110,0x10);
          if (bVar23) {
            *plStack_110 = lVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar12 + -1 == 0) {
          (*(code *)plStack_110[1])();
        }
      }
      if ((long *)0x1 < plStack_d8) {
        do {
          lVar12 = *plStack_d8;
          cVar5 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(plStack_d8,0x10);
          if (bVar23) {
            *plStack_d8 = lVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar12 + -1 == 0) {
          (*(code *)plStack_d8[1])();
        }
      }
    }
    plVar27 = *(long **)(puVar26 + 0x7e);
    if ((plVar27 != (long *)0x0) && (plVar27[1] == 0)) {
      plVar27 = (long *)0x0;
    }
    lVar12 = 0;
LAB_1006186f0:
    do {
      if (plVar27 == (long *)0x0) {
        if (lVar12 == 0) {
          *(undefined8 *)(lVar22 + 0x38) = *(undefined8 *)(lVar22 + 0x30);
          ppppuVar2 = (undefined8 ****)pppuStack_1c0;
          if (-1 < lStack_1b0) {
            ppppuVar2 = &pppuStack_1c0;
          }
          FUN_10061baa8(*(undefined8 *)(lVar22 + 0x28),ppppuVar2,0,pcStack_1c8,puVar29,0);
          if (*puVar29 != 0) {
            uVar9 = 1;
            uVar10 = 0;
            do {
              uVar24 = uVar9;
              FUN_100460314(*(undefined8 *)(*plVar25 + uVar10 * 0x10));
              FUN_100460314(*(undefined8 *)(*plVar25 + uVar10 * 0x10 + 8));
              uVar9 = (ulong)((int)uVar24 + 1);
              uVar10 = uVar24;
            } while (uVar24 < *puVar29);
          }
          *(undefined1 *)(lVar22 + 0x48) = 1;
          if ((*(char *)(lVar28 + 0x18) != '\0') && ((*(byte *)(plVar8 + 2) & 6) == 0)) {
            *(undefined1 *)(lVar22 + 100) = 1;
          }
          if (lStack_1b0 < 0) {
            func_0x000107c60e14(pppuStack_1c0);
          }
LAB_1006187f4:
          uVar7 = 0;
          goto LAB_1006189c0;
        }
        FUN_100619710(&plStack_1a8,lVar12 << 6 | 0x10,lVar12 << 6 | 0x30);
        plVar27 = (long *)0x0;
        lVar12 = lVar12 + 1;
        goto LAB_1006186f0;
      }
      FUN_100619710(&plStack_1a8,plVar27 + lVar12 * 8 + 2,plVar27 + lVar12 * 8 + 6);
      lVar12 = lVar12 + 1;
      do {
        if (lVar12 != plVar27[1]) goto LAB_1006186f0;
        lVar12 = 0;
        plVar27 = (long *)*plVar27;
      } while (plVar27 != (long *)0x0);
      lVar12 = 0;
    } while( true );
  }
  if ((((bVar4 >> 2 & 1) != 0) && (*(char *)(lVar22 + 0x4e) == '\0')) &&
     ((*(char *)(lVar22 + 0x5d) == '\0' &&
      ((*(char *)((long)plVar8 + 0x41) == '\0' && (*(char *)(lVar22 + 0x55) != '\0')))))) {
    *(undefined1 *)(lVar22 + 0x66) = 0;
    if (*(char *)(lVar22 + 0x5e) == '\0') {
      FUN_10065f668(*(undefined8 *)(plVar8[1] + 0x28),lVar22 + 0x5e8,&plStack_d8,
                    *(undefined4 *)(plVar8[1] + 0x30));
      if (plStack_d8 == (long *)0x0) {
        func_0x000107c2c480();
        goto LAB_100618adc;
      }
      *(undefined1 *)(lVar22 + 0x56) = 0;
      func_0x00010065f810(*(undefined8 *)(lVar22 + 0x28),*(undefined8 *)(lVar22 + 0x5e8),plStack_d8,
                          0);
      if (*(char *)(lVar28 + 0x18) != '\0') {
        if ((*(byte *)(plVar8 + 2) >> 1 & 1) != 0) {
          uVar7 = 1;
          *(undefined1 *)(lVar22 + 0x65) = 1;
          goto LAB_10061883c;
        }
        FUN_10065fba4(*(undefined8 *)(lVar22 + 0x28));
      }
      uVar7 = 0;
    }
    else {
      uVar7 = 2;
    }
LAB_10061883c:
    *(undefined1 *)(lVar22 + 0x49) = 1;
    *(undefined1 *)((long)plVar8 + 0x41) = 1;
    goto LAB_1006189c0;
  }
  if (((bVar4 >> 1 & 1) != 0) &&
     (plVar27 = plVar8, FUN_10065f99c(plVar8,lVar22,plVar8 + 8,2), (int)plVar27 != 0)) {
    if ((*(char *)(lVar22 + 0x4e) == '\0') &&
       ((*(char *)(lVar22 + 0x5d) == '\0' && (*(char *)(lVar22 + 0x5e) == '\0')))) {
      *(undefined1 *)(lVar22 + 0x56) = 0;
      func_0x00010065f810(*(undefined8 *)(lVar22 + 0x28),"",0,1);
      if (*(char *)(lVar28 + 0x18) != '\0') {
        FUN_10065fba4(*(undefined8 *)(lVar22 + 0x28));
      }
      uVar7 = 0;
    }
    else {
      uVar7 = 2;
    }
    *(undefined1 *)(lVar22 + 0x4a) = 1;
    goto LAB_1006189c0;
  }
  if (((bVar4 >> 3 & 1) != 0) &&
     (plVar27 = plVar8, FUN_10065f99c(plVar8,lVar22,plVar8 + 8,4), (int)plVar27 != 0)) {
    if (*(char *)(lVar22 + 0x4e) == '\0') {
      if (*(char *)(lVar22 + 0x5d) == '\0') {
        if (*(char *)(lVar22 + 0x4d) == '\0') {
          FUN_1004e23e0(*(undefined8 *)(plVar8[1] + 0x38),lVar22 + 0x3e0);
          uStack_1e8 = 0;
          FUN_1004bd7e8(&plStack_d8,*(undefined8 *)(plVar8[1] + 0x48),&uStack_1e8);
          puVar14 = &uStack_1e8;
        }
        else {
          uStack_1e0 = 0;
          FUN_1004bd7e8(&plStack_d8,*(undefined8 *)(plVar8[1] + 0x48),&uStack_1e0);
          puVar14 = &uStack_1e0;
        }
        FUN_1004bdf74(puVar14);
      }
      else {
        uStack_1d8 = 0;
        FUN_1004bd7e8(&plStack_d8,*(undefined8 *)(plVar8[1] + 0x48),&uStack_1d8);
        if ((uStack_1d8 & 1) != 0) {
          FUN_10084dad0();
        }
      }
    }
    else {
      uStack_1d0 = 0;
      FUN_1004bd7e8(&plStack_d8,*(undefined8 *)(plVar8[1] + 0x48),&uStack_1d0);
      if ((uStack_1d0 & 1) != 0) {
        FUN_10084dad0();
      }
    }
    uVar7 = 1;
    *(undefined1 *)(lVar22 + 0x4c) = 1;
    goto LAB_1006189c0;
  }
  if ((bVar4 >> 4 & 1) == 0) goto LAB_100617614;
  if (*(char *)(lVar22 + 0x4e) != '\0') {
    if (*(char *)((long)plVar8 + 0x43) != '\0') goto LAB_100617614;
    uStack_1f0 = 0;
    FUN_1004bd7e8(&plStack_d8,*(undefined8 *)(plVar8[1] + 0x78),&uStack_1f0);
    if ((uStack_1f0 & 1) != 0) {
      FUN_10084dad0();
    }
LAB_100618824:
    uVar7 = 1;
    *(undefined1 *)(lVar22 + 0x4b) = 1;
    *(undefined1 *)((long)plVar8 + 0x43) = 1;
    goto LAB_1006189c0;
  }
  if (*(char *)(lVar22 + 0x5d) == '\0') {
    if ((*(char *)((long)plVar8 + 0x43) != '\0') ||
       ((*(char *)(lVar22 + 0x59) == '\0' && (*(char *)(lVar22 + 0x4d) == '\0'))))
    goto LAB_100617614;
    if (*(char *)(lVar22 + 0xa0) != '\0') {
      uStack_200 = 0;
      FUN_1004bd7e8(&plStack_d8,*(undefined8 *)(plVar8[1] + 0x78),&uStack_200);
      puVar14 = &uStack_200;
LAB_100618820:
      FUN_1004bdf74(puVar14);
      goto LAB_100618824;
    }
    if (*(char *)(lVar22 + 99) != '\0') {
      uStack_208 = 0;
      FUN_1004bd7e8(&plStack_d8,*(undefined8 *)(plVar8[1] + 0x78),&uStack_208);
      puVar14 = &uStack_208;
      goto LAB_100618820;
    }
    if (*(char *)(lVar22 + 0x80) == '\0') {
      if (*(int *)(lVar22 + 0x84) == 5) {
        if (*(int *)(lVar22 + 0x88) == 0) {
          *(undefined1 *)(lVar22 + 0x80) = 1;
          FUN_10082f5f8(*(undefined8 *)(lVar22 + 0x78),lVar22 + 0x8c,lVar22 + 0x90);
          uVar9 = (ulong)*(uint *)(lVar22 + 0x8c);
          if ((int)*(uint *)(lVar22 + 0x8c) < 1) {
            *(undefined4 *)(lVar22 + 0x88) = 0;
            FUN_1006147e0(lVar22 + 0xa8);
            lVar28 = plVar8[1];
            **(int **)(lVar28 + 0x68) = (uint)(*(char *)(lVar22 + 0x90) != '\0') << 0x1f;
            FUN_10082f63c(*(undefined8 *)(lVar28 + 0x60),lVar22 + 0xa8);
            uStack_210 = 0;
            FUN_1004bd7e8(&plStack_d8,*(undefined8 *)(plVar8[1] + 0x78),&uStack_210);
            FUN_1004bdf74(&uStack_210);
            *(undefined1 *)(lVar22 + 0x4b) = 1;
            *(undefined1 *)((long)plVar8 + 0x43) = 1;
            *(undefined1 *)(lVar22 + 0x80) = 0;
            *(undefined1 *)(lVar22 + 0x54) = 1;
            *(long *)(lVar22 + 0x78) = lVar22 + 0x91;
            *(undefined8 *)(lVar22 + 0x84) = 0x500000000;
            *(undefined1 *)(lVar22 + 0x90) = 0;
            func_0x00010082b580(*(undefined8 *)(lVar22 + 0x28),lVar22 + 0x91,5);
            goto LAB_100617968;
          }
          FUN_100460200();
          *(ulong *)(lVar22 + 0x78) = uVar9;
          if (uVar9 == 0) {
            func_0x000107c2c47c();
            goto LAB_100618adc;
          }
          uVar16 = *(undefined4 *)(lVar22 + 0x8c);
          *(undefined4 *)(lVar22 + 0x84) = 0;
          *(undefined4 *)(lVar22 + 0x88) = uVar16;
          *(undefined1 *)(lVar22 + 0x54) = 1;
          uVar15 = *(undefined8 *)(lVar22 + 0x28);
LAB_100618a20:
          func_0x00010082b580(uVar15,uVar9,uVar16);
          goto LAB_1006187f4;
        }
      }
      else if (*(int *)(lVar22 + 0x88) == 0) {
        uVar9 = lVar22 + 0x91;
        *(ulong *)(lVar22 + 0x78) = uVar9;
        *(undefined8 *)(lVar22 + 0x84) = 0x500000000;
        *(undefined1 *)(lVar22 + 0x90) = 0;
        *(undefined1 *)(lVar22 + 0x54) = 1;
        uVar15 = *(undefined8 *)(lVar22 + 0x28);
        uVar16 = 5;
        goto LAB_100618a20;
      }
    }
    else if (*(int *)(lVar22 + 0x88) == 0) {
      func_0x0001005a7e6c(&plStack_d8,*(int *)(lVar22 + 0x8c));
      pcVar3 = (char *)((long)&uStack_d0 + 1);
      if (plStack_d8 != (long *)0x0) {
        pcVar3 = pcStack_c8;
      }
      func_0x000107c610b4(pcVar3,*(undefined8 *)(lVar22 + 0x78),(long)*(int *)(lVar22 + 0x8c));
      lVar28 = lVar22 + 0x91;
      if ((*(long *)(lVar22 + 0x78) != 0) && (*(long *)(lVar22 + 0x78) != lVar28)) {
        FUN_100460314();
      }
      *(undefined8 *)(lVar22 + 0x78) = 0;
      lVar12 = lVar22 + 0xa8;
      FUN_1006147e0(lVar12);
      uStack_158 = uStack_d0;
      plStack_160 = plStack_d8;
      uStack_148 = uStack_c0;
      pcStack_150 = pcStack_c8;
      FUN_1008603ac(lVar12,&plStack_160);
      FUN_1004b6d90(&plStack_160);
      lVar21 = plVar8[1];
      **(int **)(lVar21 + 0x68) = (uint)(*(char *)(lVar22 + 0x90) != '\0') << 0x1f;
      FUN_10082f63c(*(undefined8 *)(lVar21 + 0x60),lVar12);
      uStack_218 = 0;
      FUN_1004bd7e8(&plStack_110,*(undefined8 *)(plVar8[1] + 0x78),&uStack_218);
      FUN_1004bdf74(&uStack_218);
      *(undefined1 *)(lVar22 + 0x4b) = 1;
      *(undefined1 *)((long)plVar8 + 0x43) = 1;
      *(undefined1 *)(lVar22 + 0x80) = 0;
      *(long *)(lVar22 + 0x78) = lVar28;
      *(undefined8 *)(lVar22 + 0x84) = 0x500000000;
      *(undefined1 *)(lVar22 + 0x90) = 0;
      func_0x00010082b580(*(undefined8 *)(lVar22 + 0x28),lVar28,5);
      goto LAB_100617968;
    }
  }
  else {
    if (*(char *)((long)plVar8 + 0x43) == '\0') {
      uStack_1f8 = 0;
      FUN_1004bd7e8(&plStack_d8,*(undefined8 *)(plVar8[1] + 0x78),&uStack_1f8);
      puVar14 = &uStack_1f8;
      goto LAB_100618820;
    }
LAB_100617614:
    if (((bVar4 >> 5 & 1) != 0) &&
       (plVar27 = plVar8, FUN_10065f99c(plVar8,lVar22,plVar8 + 8,5), (int)plVar27 != 0)) {
      plStack_d8 = (long *)0x0;
      if (*(char *)(lVar22 + 0x4e) == '\0') {
        if (*(char *)(lVar22 + 0x5d) != '\0') {
          uVar9 = (ulong)*(uint *)(lVar22 + 0x68);
          func_0x000104ae283c(uVar9);
          uVar10 = (ulong)*(uint *)(lVar22 + 0x68);
          func_0x000104ae1ca4(uVar10);
          func_0x000104ae2908(&plStack_110,uVar9,*(undefined4 *)(lVar22 + 0x68),uVar10);
          plStack_220 = plStack_110;
          if (plStack_110 != (long *)0x0) {
            plStack_d8 = plStack_110;
            plStack_110 = (long *)0x36;
          }
          FUN_1004bdf74(&plStack_110);
LAB_10061777c:
          uVar15 = *(undefined8 *)(plVar8[1] + 0x90);
          if (((ulong)plStack_220 & 1) == 0) {
LAB_100617938:
            bVar23 = true;
          }
          else {
            piVar20 = (int *)((long)plStack_220 + -1);
            do {
              cVar5 = '\x01';
              bVar23 = (bool)ExclusiveMonitorPass(piVar20,0x10);
              if (bVar23) {
                *piVar20 = *piVar20 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            bVar23 = false;
          }
          plVar27 = plStack_220;
          FUN_1004bd7e8(&plStack_110,uVar15,&plStack_220);
          if (((ulong)plStack_220 & 1) != 0) {
            FUN_10084dad0();
          }
          *(undefined1 *)(lVar22 + 0x4d) = 1;
          if (!bVar23) {
            FUN_10084dad0(plVar27);
          }
LAB_100617968:
          uVar7 = 1;
          goto LAB_1006189c0;
        }
        if (*(char *)(lVar22 + 0x3d8) != '\0') {
          FUN_1004e23e0(*(undefined8 *)(plVar8[1] + 0x80),lVar22 + 0x1d0);
          *(undefined1 *)(lVar22 + 0x3d8) = 0;
        }
      }
      else {
        plStack_220 = *(long **)(lVar22 + 0x70);
        if (plStack_220 != (long *)0x0) {
          plStack_d8 = plStack_220;
          if (((ulong)plStack_220 & 1) != 0) {
            piVar20 = (int *)((long)plStack_220 + -1);
            do {
              cVar5 = '\x01';
              bVar23 = (bool)ExclusiveMonitorPass(piVar20,0x10);
              if (bVar23) {
                *piVar20 = *piVar20 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            plStack_220 = *(long **)(lVar22 + 0x70);
            plStack_d8 = plStack_220;
          }
          goto LAB_10061777c;
        }
      }
      uVar15 = *(undefined8 *)(plVar8[1] + 0x90);
      plStack_220 = (long *)0x0;
      goto LAB_100617938;
    }
    if ((((bVar4 >> 6 & 1) != 0) && (*(char *)(lVar22 + 0x4e) == '\0')) &&
       (*(char *)(lVar22 + 0x5d) == '\0')) {
      uVar7 = *(long *)(lVar22 + 0x28) == 0;
      if (!(bool)uVar7) {
        func_0x000107c2ca0c();
      }
      *(undefined1 *)(lVar22 + 0x4e) = 1;
      if (*(long *)(lVar22 + 0x70) == 0) {
        lVar28 = plVar8[1];
        uVar9 = *(ulong *)(lVar28 + 0x98);
        if (uVar9 != 0) {
          if ((uVar9 & 1) != 0) {
            piVar20 = (int *)(uVar9 - 1);
            do {
              cVar5 = '\x01';
              bVar23 = (bool)ExclusiveMonitorPass(piVar20,0x10);
              if (bVar23) {
                *piVar20 = *piVar20 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            uVar9 = *(ulong *)(lVar28 + 0x98);
          }
          *(ulong *)(lVar22 + 0x70) = uVar9;
        }
      }
      goto LAB_1006189c0;
    }
    plVar27 = plVar8;
    FUN_10065f99c(plVar8,lVar22,plVar8 + 8,7);
    if ((int)plVar27 != 0) {
      if (*(char *)(lVar22 + 0x4e) != '\0') {
        lVar28 = *plVar8;
        if (lVar28 != 0) {
          uStack_228 = *(ulong *)(lVar22 + 0x70);
          if ((uStack_228 & 1) != 0) {
            piVar20 = (int *)(uStack_228 - 1);
            do {
              cVar5 = '\x01';
              bVar23 = (bool)ExclusiveMonitorPass(piVar20,0x10);
              if (bVar23) {
                *piVar20 = *piVar20 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          FUN_1004bd7e8(&plStack_d8,lVar28,&uStack_228);
          if ((uStack_228 & 1) != 0) {
            FUN_10084dad0();
          }
        }
        goto LAB_1006178dc;
      }
      lVar28 = *plVar8;
      if (*(char *)(lVar22 + 0x5d) == '\0') {
        if (lVar28 == 0) goto LAB_1006178dc;
        uStack_238 = 0;
        FUN_1004bd7e8(&plStack_d8,lVar28,&uStack_238);
        puVar14 = &uStack_238;
      }
      else {
        if (lVar28 == 0) goto LAB_1006178dc;
        func_0x000104ae1ca4(*(undefined4 *)(lVar22 + 0x68));
        func_0x000104ae283c(*(undefined4 *)(lVar22 + 0x68));
        lVar28 = *plVar8;
        func_0x000104ae2908(&uStack_230);
        FUN_1004bd7e8(&plStack_d8,lVar28,&uStack_230);
        puVar14 = &uStack_230;
      }
      FUN_1004bdf74(puVar14);
LAB_1006178dc:
      *(undefined1 *)((long)plVar8 + 0x47) = 1;
      *(undefined1 *)(plVar8 + 0xbd) = 1;
      bVar4 = *(byte *)(plVar8 + 2);
      if ((bVar4 >> 2 & 1) != 0) {
        *(undefined1 *)(lVar22 + 0x56) = 0;
        *(undefined1 *)(lVar22 + 0x49) = 0;
        bVar4 = *(byte *)(plVar8 + 2);
      }
      uVar7 = 1;
      if ((bVar4 >> 4 & 1) != 0) {
        *(undefined1 *)(lVar22 + 0x53) = 1;
      }
LAB_1006189c0:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
        return;
      }
      func_0x000107c60e78(uVar7);
LAB_100618ac8:
      func_0x000107c60ebc();
LAB_100618adc:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100618ae0);
      (*pcVar6)();
    }
  }
  uVar7 = 2;
  goto LAB_1006189c0;
code_r0x0001006173e8:
  plVar25 = plVar13;
  if ((int)plVar8 == 0) {
SUB_100466b80:
    func_0x000107c61268();
    if ((int)plVar27 != 0) {
      func_0x000107c2c138();
                    /* WARNING: Could not recover jumptable at 0x000100466ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puRam00000001136a2078)();
      return;
    }
    return;
  }
  goto joined_r0x00010061735c;
}



/* Entry: 100617468; end: 100619413;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_100617468(long *param_1)

{
  uint *puVar1;
  undefined8 *******pppppppuVar2;
  char *pcVar3;
  byte bVar4;
  char cVar5;
  code *pcVar6;
  undefined1 uVar7;
  ulong uVar8;
  ulong uVar9;
  uint *puVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  uint uVar16;
  int *piVar17;
  long lVar18;
  long lVar19;
  bool bVar20;
  ulong uVar21;
  uint *puVar22;
  long *plVar23;
  long lVar24;
  long *plVar25;
  ulong *puVar26;
  undefined8 uStack_208;
  undefined8 uStack_200;
  ulong uStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  ulong auStack_1c0 [5];
  char *pcStack_198;
  undefined8 *******pppppppuStack_190;
  undefined8 uStack_188;
  long lStack_180;
  long *plStack_178;
  uint *puStack_170;
  ulong *puStack_168;
  long *plStack_160;
  char **ppcStack_158;
  undefined8 *******pppppppuStack_150;
  undefined8 *******pppppppuStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  char *pcStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  long *plStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long *plStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_a8;
  undefined8 uStack_a0;
  char *pcStack_98;
  undefined8 uStack_90;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar19 = param_1[0xbe];
  lVar24 = *(long *)(lVar19 + 0x18);
  bVar4 = *(byte *)(param_1 + 2);
  if (((((bVar4 & 1) == 0) || (*(char *)(lVar19 + 0x4e) != '\0')) ||
      (*(char *)(lVar19 + 0x5d) != '\0')) || (*(char *)(lVar19 + 0x48) != '\0')) {
    if ((((bVar4 >> 2 & 1) == 0) || (*(char *)(lVar19 + 0x4e) != '\0')) ||
       ((*(char *)(lVar19 + 0x5d) != '\0' ||
        ((*(char *)((long)param_1 + 0x41) != '\0' || (*(char *)(lVar19 + 0x55) == '\0')))))) {
      if (((bVar4 >> 1 & 1) == 0) ||
         (plVar23 = param_1, FUN_10065f99c(param_1,lVar19,param_1 + 8,2), (int)plVar23 == 0)) {
        if (((bVar4 >> 3 & 1) == 0) ||
           (plVar23 = param_1, FUN_10065f99c(param_1,lVar19,param_1 + 8,4), (int)plVar23 == 0)) {
          if ((bVar4 >> 4 & 1) == 0) goto LAB_100617614;
          if (*(char *)(lVar19 + 0x4e) != '\0') {
            if (*(char *)((long)param_1 + 0x43) != '\0') goto LAB_100617614;
            auStack_1c0[0] = 0;
            FUN_1004bd7e8(&plStack_a8,*(undefined8 *)(param_1[1] + 0x78),auStack_1c0);
            if ((auStack_1c0[0] & 1) != 0) {
              FUN_10084dad0();
            }
LAB_100618824:
            uVar7 = 1;
            *(undefined1 *)(lVar19 + 0x4b) = 1;
            *(undefined1 *)((long)param_1 + 0x43) = 1;
            goto LAB_1006189c0;
          }
          if (*(char *)(lVar19 + 0x5d) != '\0') {
            if (*(char *)((long)param_1 + 0x43) == '\0') {
              uStack_1c8 = 0;
              FUN_1004bd7e8(&plStack_a8,*(undefined8 *)(param_1[1] + 0x78),&uStack_1c8);
              puVar13 = &uStack_1c8;
              goto LAB_100618820;
            }
LAB_100617614:
            if (((bVar4 >> 5 & 1) == 0) ||
               (plVar23 = param_1, FUN_10065f99c(param_1,lVar19,param_1 + 8,5), (int)plVar23 == 0))
            {
              if ((((bVar4 >> 6 & 1) == 0) || (*(char *)(lVar19 + 0x4e) != '\0')) ||
                 (*(char *)(lVar19 + 0x5d) != '\0')) {
                plVar23 = param_1;
                FUN_10065f99c(param_1,lVar19,param_1 + 8,7);
                if ((int)plVar23 == 0) {
LAB_1006189bc:
                  uVar7 = 2;
                }
                else {
                  if (*(char *)(lVar19 + 0x4e) == '\0') {
                    lVar24 = *param_1;
                    if (*(char *)(lVar19 + 0x5d) == '\0') {
                      if (lVar24 != 0) {
                        uStack_208 = 0;
                        FUN_1004bd7e8(&plStack_a8,lVar24,&uStack_208);
                        puVar13 = &uStack_208;
                        goto LAB_1006178d8;
                      }
                    }
                    else if (lVar24 != 0) {
                      func_0x000104ae1ca4(*(undefined4 *)(lVar19 + 0x68));
                      func_0x000104ae283c(*(undefined4 *)(lVar19 + 0x68));
                      lVar24 = *param_1;
                      func_0x000104ae2908(&uStack_200);
                      FUN_1004bd7e8(&plStack_a8,lVar24,&uStack_200);
                      puVar13 = &uStack_200;
LAB_1006178d8:
                      FUN_1004bdf74(puVar13);
                    }
                  }
                  else {
                    lVar24 = *param_1;
                    if (lVar24 != 0) {
                      uStack_1f8 = *(ulong *)(lVar19 + 0x70);
                      if ((uStack_1f8 & 1) != 0) {
                        piVar17 = (int *)(uStack_1f8 - 1);
                        do {
                          cVar5 = '\x01';
                          bVar20 = (bool)ExclusiveMonitorPass(piVar17,0x10);
                          if (bVar20) {
                            *piVar17 = *piVar17 + 1;
                            cVar5 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar5 != '\0');
                      }
                      FUN_1004bd7e8(&plStack_a8,lVar24,&uStack_1f8);
                      if ((uStack_1f8 & 1) != 0) {
                        FUN_10084dad0();
                      }
                    }
                  }
                  *(undefined1 *)((long)param_1 + 0x47) = 1;
                  *(undefined1 *)(param_1 + 0xbd) = 1;
                  bVar4 = *(byte *)(param_1 + 2);
                  if ((bVar4 >> 2 & 1) != 0) {
                    *(undefined1 *)(lVar19 + 0x56) = 0;
                    *(undefined1 *)(lVar19 + 0x49) = 0;
                    bVar4 = *(byte *)(param_1 + 2);
                  }
                  uVar7 = 1;
                  if ((bVar4 >> 4 & 1) != 0) {
                    *(undefined1 *)(lVar19 + 0x53) = 1;
                  }
                }
              }
              else {
                uVar7 = *(long *)(lVar19 + 0x28) == 0;
                if (!(bool)uVar7) {
                  func_0x000107c2ca0c();
                }
                *(undefined1 *)(lVar19 + 0x4e) = 1;
                if (*(long *)(lVar19 + 0x70) == 0) {
                  lVar24 = param_1[1];
                  uVar8 = *(ulong *)(lVar24 + 0x98);
                  if (uVar8 != 0) {
                    if ((uVar8 & 1) != 0) {
                      piVar17 = (int *)(uVar8 - 1);
                      do {
                        cVar5 = '\x01';
                        bVar20 = (bool)ExclusiveMonitorPass(piVar17,0x10);
                        if (bVar20) {
                          *piVar17 = *piVar17 + 1;
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar5 != '\0');
                      uVar8 = *(ulong *)(lVar24 + 0x98);
                    }
                    *(ulong *)(lVar19 + 0x70) = uVar8;
                  }
                }
              }
              goto LAB_1006189c0;
            }
            plStack_a8 = (long *)0x0;
            if (*(char *)(lVar19 + 0x4e) == '\0') {
              if (*(char *)(lVar19 + 0x5d) == '\0') {
                if (*(char *)(lVar19 + 0x3d8) != '\0') {
                  FUN_1004e23e0(*(undefined8 *)(param_1[1] + 0x80),lVar19 + 0x1d0);
                  *(undefined1 *)(lVar19 + 0x3d8) = 0;
                }
                goto LAB_100617928;
              }
              uVar8 = (ulong)*(uint *)(lVar19 + 0x68);
              func_0x000104ae283c(uVar8);
              uVar9 = (ulong)*(uint *)(lVar19 + 0x68);
              func_0x000104ae1ca4(uVar9);
              func_0x000104ae2908(&plStack_e0,uVar8,*(undefined4 *)(lVar19 + 0x68),uVar9);
              plStack_1f0 = plStack_e0;
              if (plStack_e0 != (long *)0x0) {
                plStack_a8 = plStack_e0;
                plStack_e0 = (long *)0x36;
              }
              FUN_1004bdf74(&plStack_e0);
LAB_10061777c:
              uVar14 = *(undefined8 *)(param_1[1] + 0x90);
              if (((ulong)plStack_1f0 & 1) == 0) goto LAB_100617938;
              piVar17 = (int *)((long)plStack_1f0 + -1);
              do {
                cVar5 = '\x01';
                bVar20 = (bool)ExclusiveMonitorPass(piVar17,0x10);
                if (bVar20) {
                  *piVar17 = *piVar17 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              bVar20 = false;
            }
            else {
              plStack_1f0 = *(long **)(lVar19 + 0x70);
              if (plStack_1f0 != (long *)0x0) {
                plStack_a8 = plStack_1f0;
                if (((ulong)plStack_1f0 & 1) != 0) {
                  piVar17 = (int *)((long)plStack_1f0 + -1);
                  do {
                    cVar5 = '\x01';
                    bVar20 = (bool)ExclusiveMonitorPass(piVar17,0x10);
                    if (bVar20) {
                      *piVar17 = *piVar17 + 1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  plStack_1f0 = *(long **)(lVar19 + 0x70);
                  plStack_a8 = plStack_1f0;
                }
                goto LAB_10061777c;
              }
LAB_100617928:
              uVar14 = *(undefined8 *)(param_1[1] + 0x90);
              plStack_1f0 = (long *)0x0;
LAB_100617938:
              bVar20 = true;
            }
            plVar23 = plStack_1f0;
            FUN_1004bd7e8(&plStack_e0,uVar14,&plStack_1f0);
            if (((ulong)plStack_1f0 & 1) != 0) {
              FUN_10084dad0();
            }
            *(undefined1 *)(lVar19 + 0x4d) = 1;
            if (!bVar20) {
              FUN_10084dad0(plVar23);
            }
LAB_100617968:
            uVar7 = 1;
            goto LAB_1006189c0;
          }
          if ((*(char *)((long)param_1 + 0x43) != '\0') ||
             ((*(char *)(lVar19 + 0x59) == '\0' && (*(char *)(lVar19 + 0x4d) == '\0'))))
          goto LAB_100617614;
          if (*(char *)(lVar19 + 0xa0) != '\0') {
            uStack_1d0 = 0;
            FUN_1004bd7e8(&plStack_a8,*(undefined8 *)(param_1[1] + 0x78),&uStack_1d0);
            puVar13 = &uStack_1d0;
LAB_100618820:
            FUN_1004bdf74(puVar13);
            goto LAB_100618824;
          }
          if (*(char *)(lVar19 + 99) != '\0') {
            uStack_1d8 = 0;
            FUN_1004bd7e8(&plStack_a8,*(undefined8 *)(param_1[1] + 0x78),&uStack_1d8);
            puVar13 = &uStack_1d8;
            goto LAB_100618820;
          }
          if (*(char *)(lVar19 + 0x80) != '\0') {
            if (*(int *)(lVar19 + 0x88) != 0) goto LAB_1006189bc;
            func_0x0001005a7e6c(&plStack_a8,*(int *)(lVar19 + 0x8c));
            pcVar3 = (char *)((long)&uStack_a0 + 1);
            if (plStack_a8 != (long *)0x0) {
              pcVar3 = pcStack_98;
            }
            func_0x000107c610b4(pcVar3,*(undefined8 *)(lVar19 + 0x78),(long)*(int *)(lVar19 + 0x8c))
            ;
            lVar24 = lVar19 + 0x91;
            if ((*(long *)(lVar19 + 0x78) != 0) && (*(long *)(lVar19 + 0x78) != lVar24)) {
              FUN_100460314();
            }
            *(undefined8 *)(lVar19 + 0x78) = 0;
            lVar11 = lVar19 + 0xa8;
            FUN_1006147e0(lVar11);
            uStack_128 = uStack_a0;
            plStack_130 = plStack_a8;
            uStack_118 = uStack_90;
            pcStack_120 = pcStack_98;
            FUN_1008603ac(lVar11,&plStack_130);
            FUN_1004b6d90(&plStack_130);
            lVar18 = param_1[1];
            **(int **)(lVar18 + 0x68) = (uint)(*(char *)(lVar19 + 0x90) != '\0') << 0x1f;
            FUN_10082f63c(*(undefined8 *)(lVar18 + 0x60),lVar11);
            uStack_1e8 = 0;
            FUN_1004bd7e8(&plStack_e0,*(undefined8 *)(param_1[1] + 0x78),&uStack_1e8);
            FUN_1004bdf74(&uStack_1e8);
            *(undefined1 *)(lVar19 + 0x4b) = 1;
            *(undefined1 *)((long)param_1 + 0x43) = 1;
            *(undefined1 *)(lVar19 + 0x80) = 0;
            *(long *)(lVar19 + 0x78) = lVar24;
            *(undefined8 *)(lVar19 + 0x84) = 0x500000000;
            *(undefined1 *)(lVar19 + 0x90) = 0;
            func_0x00010082b580(*(undefined8 *)(lVar19 + 0x28),lVar24,5);
            goto LAB_100617968;
          }
          if (*(int *)(lVar19 + 0x84) == 5) {
            if (*(int *)(lVar19 + 0x88) == 0) {
              *(undefined1 *)(lVar19 + 0x80) = 1;
              FUN_10082f5f8(*(undefined8 *)(lVar19 + 0x78),lVar19 + 0x8c,lVar19 + 0x90);
              uVar8 = (ulong)*(uint *)(lVar19 + 0x8c);
              if ((int)*(uint *)(lVar19 + 0x8c) < 1) {
                *(undefined4 *)(lVar19 + 0x88) = 0;
                FUN_1006147e0(lVar19 + 0xa8);
                lVar24 = param_1[1];
                **(int **)(lVar24 + 0x68) = (uint)(*(char *)(lVar19 + 0x90) != '\0') << 0x1f;
                FUN_10082f63c(*(undefined8 *)(lVar24 + 0x60),lVar19 + 0xa8);
                uStack_1e0 = 0;
                FUN_1004bd7e8(&plStack_a8,*(undefined8 *)(param_1[1] + 0x78),&uStack_1e0);
                FUN_1004bdf74(&uStack_1e0);
                *(undefined1 *)(lVar19 + 0x4b) = 1;
                *(undefined1 *)((long)param_1 + 0x43) = 1;
                *(undefined1 *)(lVar19 + 0x80) = 0;
                *(undefined1 *)(lVar19 + 0x54) = 1;
                *(long *)(lVar19 + 0x78) = lVar19 + 0x91;
                *(undefined8 *)(lVar19 + 0x84) = 0x500000000;
                *(undefined1 *)(lVar19 + 0x90) = 0;
                func_0x00010082b580(*(undefined8 *)(lVar19 + 0x28),lVar19 + 0x91,5);
                goto LAB_100617968;
              }
              FUN_100460200();
              *(ulong *)(lVar19 + 0x78) = uVar8;
              if (uVar8 == 0) {
                func_0x000107c2c47c();
                goto LAB_100618adc;
              }
              uVar15 = *(undefined4 *)(lVar19 + 0x8c);
              *(undefined4 *)(lVar19 + 0x84) = 0;
              *(undefined4 *)(lVar19 + 0x88) = uVar15;
              *(undefined1 *)(lVar19 + 0x54) = 1;
              uVar14 = *(undefined8 *)(lVar19 + 0x28);
              goto LAB_100618a20;
            }
            goto LAB_1006189bc;
          }
          if (*(int *)(lVar19 + 0x88) != 0) goto LAB_1006189bc;
          uVar8 = lVar19 + 0x91;
          *(ulong *)(lVar19 + 0x78) = uVar8;
          *(undefined8 *)(lVar19 + 0x84) = 0x500000000;
          *(undefined1 *)(lVar19 + 0x90) = 0;
          *(undefined1 *)(lVar19 + 0x54) = 1;
          uVar14 = *(undefined8 *)(lVar19 + 0x28);
          uVar15 = 5;
LAB_100618a20:
          func_0x00010082b580(uVar14,uVar8,uVar15);
          goto LAB_1006187f4;
        }
        if (*(char *)(lVar19 + 0x4e) == '\0') {
          if (*(char *)(lVar19 + 0x5d) == '\0') {
            if (*(char *)(lVar19 + 0x4d) == '\0') {
              FUN_1004e23e0(*(undefined8 *)(param_1[1] + 0x38),lVar19 + 0x3e0);
              auStack_1c0[1] = 0;
              FUN_1004bd7e8(&plStack_a8,*(undefined8 *)(param_1[1] + 0x48),auStack_1c0 + 1);
              puVar26 = auStack_1c0 + 1;
            }
            else {
              auStack_1c0[2] = 0;
              FUN_1004bd7e8(&plStack_a8,*(undefined8 *)(param_1[1] + 0x48),auStack_1c0 + 2);
              puVar26 = auStack_1c0 + 2;
            }
            FUN_1004bdf74(puVar26);
          }
          else {
            auStack_1c0[3] = 0;
            FUN_1004bd7e8(&plStack_a8,*(undefined8 *)(param_1[1] + 0x48),auStack_1c0 + 3);
            if ((auStack_1c0[3] & 1) != 0) {
              FUN_10084dad0();
            }
          }
        }
        else {
          auStack_1c0[4] = 0;
          FUN_1004bd7e8(&plStack_a8,*(undefined8 *)(param_1[1] + 0x48),auStack_1c0 + 4);
          if ((auStack_1c0[4] & 1) != 0) {
            FUN_10084dad0();
          }
        }
        uVar7 = 1;
        *(undefined1 *)(lVar19 + 0x4c) = 1;
      }
      else {
        if (((*(char *)(lVar19 + 0x4e) == '\0') && (*(char *)(lVar19 + 0x5d) == '\0')) &&
           (*(char *)(lVar19 + 0x5e) == '\0')) {
          *(undefined1 *)(lVar19 + 0x56) = 0;
          func_0x00010065f810(*(undefined8 *)(lVar19 + 0x28),"",0,1);
          if (*(char *)(lVar24 + 0x18) != '\0') {
            FUN_10065fba4(*(undefined8 *)(lVar19 + 0x28));
          }
          uVar7 = 0;
        }
        else {
          uVar7 = 2;
        }
        *(undefined1 *)(lVar19 + 0x4a) = 1;
      }
    }
    else {
      *(undefined1 *)(lVar19 + 0x66) = 0;
      if (*(char *)(lVar19 + 0x5e) == '\0') {
        FUN_10065f668(*(undefined8 *)(param_1[1] + 0x28),lVar19 + 0x5e8,&plStack_a8,
                      *(undefined4 *)(param_1[1] + 0x30));
        if (plStack_a8 == (long *)0x0) {
          func_0x000107c2c480();
          goto LAB_100618adc;
        }
        *(undefined1 *)(lVar19 + 0x56) = 0;
        func_0x00010065f810(*(undefined8 *)(lVar19 + 0x28),*(undefined8 *)(lVar19 + 0x5e8),
                            plStack_a8,0);
        if (*(char *)(lVar24 + 0x18) != '\0') {
          if ((*(byte *)(param_1 + 2) >> 1 & 1) != 0) {
            uVar7 = 1;
            *(undefined1 *)(lVar19 + 0x65) = 1;
            goto LAB_10061883c;
          }
          FUN_10065fba4(*(undefined8 *)(lVar19 + 0x28));
        }
        uVar7 = 0;
      }
      else {
        uVar7 = 2;
      }
LAB_10061883c:
      *(undefined1 *)(lVar19 + 0x49) = 1;
      *(undefined1 *)((long)param_1 + 0x41) = 1;
    }
LAB_1006189c0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
    func_0x000107c60e78(uVar7);
  }
  else {
    if (*(long *)(lVar19 + 0x28) != 0) {
      func_0x000107c2c484();
      goto LAB_100618adc;
    }
    uVar14 = *(undefined8 *)(lVar24 + 8);
    FUN_100619414(uVar14,*(undefined8 *)(lVar19 + 0x20),&PTR_FUN_1130a64e0);
    *(undefined8 *)(lVar19 + 0x28) = uVar14;
    if (*(char *)(lVar24 + 0x18) != '\0') {
      func_0x0001006195b4();
      func_0x0001006195c4(*(undefined8 *)(lVar19 + 0x28),1);
    }
    pppppppuStack_190 = (undefined8 *******)0x0;
    uStack_188 = 0;
    lStack_180 = 0;
    pcStack_198 = "POST";
    plVar25 = (long *)(lVar19 + 0x40);
    *plVar25 = 0;
    puVar22 = *(uint **)param_1[1];
    plVar23 = *(long **)(lVar24 + 0x10);
    puVar10 = puVar22;
    FUN_1006195d4();
    puVar26 = (ulong *)(lVar19 + 0x30);
    ppcStack_158 = &pcStack_198;
    pppppppuStack_150 = &pppppppuStack_190;
    lVar11 = (long)puVar10 << 4;
    *puVar26 = 0;
    plStack_178 = plVar23;
    puStack_170 = puVar10;
    puStack_168 = puVar26;
    plStack_160 = plVar25;
    FUN_100460200();
    *plVar25 = lVar11;
    uVar16 = *puVar22;
    if ((uVar16 & 1) != 0) {
      plStack_a8 = (long *)0x10f2a3094;
      uStack_a0 = 8;
      if (plVar23 == (long *)0x0) {
        plVar12 = (long *)0x0;
      }
      else {
        plVar12 = plVar23;
        func_0x000107c613d0();
      }
      plStack_108 = (long *)((ulong)*(long **)(puVar22 + 0x76) & 0xff);
      plStack_110 = (long *)((long)puVar22 + 0x1d9);
      if (*(long *)(puVar22 + 0x74) != 0) {
        plStack_108 = *(long **)(puVar22 + 0x76);
        plStack_110 = *(long **)(puVar22 + 0x78);
      }
      plStack_e0 = plVar23;
      plStack_d8 = plVar12;
      FUN_100066c24(&pppppppuStack_148,&plStack_a8,&plStack_e0,&plStack_110);
      if (lStack_180 < 0) {
        func_0x000107c60e14(pppppppuStack_190);
      }
      uStack_188 = uStack_140;
      pppppppuStack_190 = pppppppuStack_148;
      lStack_180 = lStack_138;
      uVar16 = *puVar22;
    }
    if ((uVar16 >> 2 & 1) == 0) {
LAB_100617b2c:
      if ((uVar16 >> 3 & 1) != 0) {
        plStack_a8 = (long *)0x1;
        uStack_a0 = 7;
        pcStack_98 = ":status";
        func_0x000104a7a584(&plStack_e0,puVar22[0x69]);
        FUN_100619710(&plStack_178,&plStack_a8,&plStack_e0);
        if ((long *)0x1 < plStack_e0) {
          do {
            lVar11 = *plStack_e0;
            cVar5 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plStack_e0,0x10);
            if (bVar20) {
              *plStack_e0 = lVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar11 + -1 == 0) {
            (*(code *)plStack_e0[1])();
          }
        }
        if ((long *)0x1 < plStack_a8) {
          do {
            lVar11 = *plStack_a8;
            cVar5 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plStack_a8,0x10);
            if (bVar20) {
              *plStack_a8 = lVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar11 + -1 == 0) {
            (*(code *)plStack_a8[1])();
          }
        }
        uVar16 = *puVar22;
      }
      if ((uVar16 >> 5 & 1) != 0) {
        plStack_a8 = (long *)0x1;
        uStack_a0 = 0xc;
        pcStack_98 = "content-type";
        FUN_100619644(&plStack_110,puVar22[0x67]);
        plStack_d8 = plStack_108;
        plStack_e0 = plStack_110;
        uStack_c8 = uStack_f8;
        uStack_d0 = uStack_100;
        plStack_108 = (long *)0x0;
        plStack_110 = (long *)0x0;
        uStack_f8 = 0;
        uStack_100 = 0;
        FUN_100619710(&plStack_178,&plStack_a8,&plStack_e0);
        if ((long *)0x1 < plStack_e0) {
          do {
            lVar11 = *plStack_e0;
            cVar5 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plStack_e0,0x10);
            if (bVar20) {
              *plStack_e0 = lVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar11 + -1 == 0) {
            (*(code *)plStack_e0[1])();
          }
        }
        if ((long *)0x1 < plStack_a8) {
          do {
            lVar11 = *plStack_a8;
            cVar5 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plStack_a8,0x10);
            if (bVar20) {
              *plStack_a8 = lVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar11 + -1 == 0) {
            (*(code *)plStack_a8[1])();
          }
        }
        uVar16 = *puVar22;
      }
      if ((uVar16 >> 6 & 1) != 0) {
        plStack_a8 = (long *)0x1;
        uStack_a0 = 2;
        pcStack_98 = "te";
        FUN_100619828(&plStack_110,(char)puVar22[0x66]);
        plStack_d8 = plStack_108;
        plStack_e0 = plStack_110;
        uStack_c8 = uStack_f8;
        uStack_d0 = uStack_100;
        plStack_108 = (long *)0x0;
        plStack_110 = (long *)0x0;
        uStack_f8 = 0;
        uStack_100 = 0;
        FUN_100619710(&plStack_178,&plStack_a8,&plStack_e0);
        if ((long *)0x1 < plStack_e0) {
          do {
            lVar11 = *plStack_e0;
            cVar5 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plStack_e0,0x10);
            if (bVar20) {
              *plStack_e0 = lVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar11 + -1 == 0) {
            (*(code *)plStack_e0[1])();
          }
        }
        if ((long *)0x1 < plStack_a8) {
          do {
            lVar11 = *plStack_a8;
            cVar5 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plStack_a8,0x10);
            if (bVar20) {
              *plStack_a8 = lVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar11 + -1 == 0) {
            (*(code *)plStack_a8[1])();
          }
        }
        uVar16 = *puVar22;
      }
      if ((uVar16 >> 7 & 1) != 0) {
        plStack_a8 = (long *)0x1;
        uStack_a0 = 0xd;
        pcStack_98 = "grpc-encoding";
        func_0x000104a7ac74(&plStack_e0,puVar22[0x65]);
        FUN_100619710(&plStack_178,&plStack_a8,&plStack_e0);
        if ((long *)0x1 < plStack_e0) {
          do {
            lVar11 = *plStack_e0;
            cVar5 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plStack_e0,0x10);
            if (bVar20) {
              *plStack_e0 = lVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar11 + -1 == 0) {
            (*(code *)plStack_e0[1])();
          }
        }
        if ((long *)0x1 < plStack_a8) {
          do {
            lVar11 = *plStack_a8;
            cVar5 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plStack_a8,0x10);
            if (bVar20) {
              *plStack_a8 = lVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar11 + -1 == 0) {
            (*(code *)plStack_a8[1])();
          }
        }
        uVar16 = *puVar22;
      }
      if ((uVar16 >> 8 & 1) != 0) {
        plStack_a8 = (long *)0x1;
        uStack_a0 = 0x1e;
        pcStack_98 = "grpc-internal-encoding-request";
        func_0x000104a7ac74(&plStack_e0,puVar22[100]);
        FUN_100619710(&plStack_178,&plStack_a8,&plStack_e0);
        if ((long *)0x1 < plStack_e0) {
          do {
            lVar11 = *plStack_e0;
            cVar5 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plStack_e0,0x10);
            if (bVar20) {
              *plStack_e0 = lVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar11 + -1 == 0) {
            (*(code *)plStack_e0[1])();
          }
        }
        if ((long *)0x1 < plStack_a8) {
          do {
            lVar11 = *plStack_a8;
            cVar5 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plStack_a8,0x10);
            if (bVar20) {
              *plStack_a8 = lVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar11 + -1 == 0) {
            (*(code *)plStack_a8[1])();
          }
        }
        uVar16 = *puVar22;
      }
      if ((uVar16 >> 9 & 1) != 0) {
        plStack_a8 = (long *)0x1;
        uStack_a0 = 0x14;
        pcStack_98 = "grpc-accept-encoding";
        plStack_110 = (long *)CONCAT71(plStack_110._1_7_,(char)puVar22[99]);
        FUN_10061b500(&plStack_e0,&plStack_110);
        FUN_100619710(&plStack_178,&plStack_a8,&plStack_e0);
        if ((long *)0x1 < plStack_e0) {
          do {
            lVar11 = *plStack_e0;
            cVar5 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plStack_e0,0x10);
            if (bVar20) {
              *plStack_e0 = lVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar11 + -1 == 0) {
            (*(code *)plStack_e0[1])();
          }
        }
        if ((long *)0x1 < plStack_a8) {
          do {
            lVar11 = *plStack_a8;
            cVar5 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plStack_a8,0x10);
            if (bVar20) {
              *plStack_a8 = lVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar11 + -1 == 0) {
            (*(code *)plStack_a8[1])();
          }
        }
        uVar16 = *puVar22;
      }
      if ((uVar16 >> 10 & 1) != 0) {
        plStack_a8 = (long *)0x1;
        uStack_a0 = 0xb;
        pcStack_98 = "grpc-status";
        func_0x000104a7a584(&plStack_e0,(long)(int)puVar22[0x62]);
        FUN_100619710(&plStack_178,&plStack_a8,&plStack_e0);
        if ((long *)0x1 < plStack_e0) {
          do {
            lVar11 = *plStack_e0;
            cVar5 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plStack_e0,0x10);
            if (bVar20) {
              *plStack_e0 = lVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar11 + -1 == 0) {
            (*(code *)plStack_e0[1])();
          }
        }
        if ((long *)0x1 < plStack_a8) {
          do {
            lVar11 = *plStack_a8;
            cVar5 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plStack_a8,0x10);
            if (bVar20) {
              *plStack_a8 = lVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar11 + -1 == 0) {
            (*(code *)plStack_a8[1])();
          }
        }
        uVar16 = *puVar22;
      }
      if ((uVar16 >> 0xb & 1) != 0) {
        plStack_a8 = (long *)0x1;
        uStack_a0 = 0xc;
        pcStack_98 = "grpc-timeout";
        FUN_10061b528(&plStack_e0,*(undefined8 *)(puVar22 + 0x60));
        FUN_100619710(&plStack_178,&plStack_a8,&plStack_e0);
        if ((long *)0x1 < plStack_e0) {
          do {
            lVar11 = *plStack_e0;
            cVar5 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plStack_e0,0x10);
            if (bVar20) {
              *plStack_e0 = lVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar11 + -1 == 0) {
            (*(code *)plStack_e0[1])();
          }
        }
        if ((long *)0x1 < plStack_a8) {
          do {
            lVar11 = *plStack_a8;
            cVar5 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plStack_a8,0x10);
            if (bVar20) {
              *plStack_a8 = lVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar11 + -1 == 0) {
            (*(code *)plStack_a8[1])();
          }
        }
        uVar16 = *puVar22;
      }
      if ((uVar16 >> 0xc & 1) != 0) {
        plStack_a8 = (long *)0x1;
        uStack_a0 = 0x1a;
        pcStack_98 = "grpc-previous-rpc-attempts";
        func_0x000104a7a584(&plStack_e0,puVar22[0x5e]);
        FUN_100619710(&plStack_178,&plStack_a8,&plStack_e0);
        if ((long *)0x1 < plStack_e0) {
          do {
            lVar11 = *plStack_e0;
            cVar5 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plStack_e0,0x10);
            if (bVar20) {
              *plStack_e0 = lVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar11 + -1 == 0) {
            (*(code *)plStack_e0[1])();
          }
        }
        if ((long *)0x1 < plStack_a8) {
          do {
            lVar11 = *plStack_a8;
            cVar5 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plStack_a8,0x10);
            if (bVar20) {
              *plStack_a8 = lVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar11 + -1 == 0) {
            (*(code *)plStack_a8[1])();
          }
        }
        uVar16 = *puVar22;
      }
      if ((uVar16 >> 0xd & 1) != 0) {
        plStack_a8 = (long *)0x1;
        uStack_a0 = 0x16;
        pcStack_98 = "grpc-retry-pushback-ms";
        func_0x000104a7a584(&plStack_e0,*(undefined8 *)(puVar22 + 0x5c));
        FUN_100619710(&plStack_178,&plStack_a8,&plStack_e0);
        if ((long *)0x1 < plStack_e0) {
          do {
            lVar11 = *plStack_e0;
            cVar5 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plStack_e0,0x10);
            if (bVar20) {
              *plStack_e0 = lVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar11 + -1 == 0) {
            (*(code *)plStack_e0[1])();
          }
        }
        if ((long *)0x1 < plStack_a8) {
          do {
            lVar11 = *plStack_a8;
            cVar5 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plStack_a8,0x10);
            if (bVar20) {
              *plStack_a8 = lVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar11 + -1 == 0) {
            (*(code *)plStack_a8[1])();
          }
        }
        uVar16 = *puVar22;
      }
      if ((uVar16 >> 0xe & 1) != 0) {
        plStack_a8 = (long *)0x1;
        uStack_a0 = 10;
        pcStack_98 = "user-agent";
        plVar23 = *(long **)(puVar22 + 0x54);
        if ((long *)0x1 < plVar23) {
          do {
            cVar5 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar20) {
              *plVar23 = *plVar23 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        plStack_d8 = *(long **)(puVar22 + 0x56);
        plStack_e0 = *(long **)(puVar22 + 0x54);
        uStack_c8 = *(undefined8 *)(puVar22 + 0x5a);
        uStack_d0 = *(undefined8 *)(puVar22 + 0x58);
        FUN_100619710(&plStack_178,&plStack_a8,&plStack_e0);
        if ((long *)0x1 < plStack_e0) {
          do {
            lVar11 = *plStack_e0;
            cVar5 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plStack_e0,0x10);
            if (bVar20) {
              *plStack_e0 = lVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar11 + -1 == 0) {
            (*(code *)plStack_e0[1])();
          }
        }
        if ((long *)0x1 < plStack_a8) {
          do {
            lVar11 = *plStack_a8;
            cVar5 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plStack_a8,0x10);
            if (bVar20) {
              *plStack_a8 = lVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar11 + -1 == 0) {
            (*(code *)plStack_a8[1])();
          }
        }
        uVar16 = *puVar22;
      }
      if ((uVar16 >> 0xf & 1) != 0) {
        plStack_a8 = (long *)0x1;
        uStack_a0 = 0xc;
        pcStack_98 = "grpc-message";
        plVar23 = *(long **)(puVar22 + 0x4c);
        if ((long *)0x1 < plVar23) {
          do {
            cVar5 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar20) {
              *plVar23 = *plVar23 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        plStack_d8 = *(long **)(puVar22 + 0x4e);
        plStack_e0 = *(long **)(puVar22 + 0x4c);
        uStack_c8 = *(undefined8 *)(puVar22 + 0x52);
        uStack_d0 = *(undefined8 *)(puVar22 + 0x50);
        FUN_100619710(&plStack_178,&plStack_a8,&plStack_e0);
        if ((long *)0x1 < plStack_e0) {
          do {
            lVar11 = *plStack_e0;
            cVar5 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plStack_e0,0x10);
            if (bVar20) {
              *plStack_e0 = lVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar11 + -1 == 0) {
            (*(code *)plStack_e0[1])();
          }
        }
        if ((long *)0x1 < plStack_a8) {
          do {
            lVar11 = *plStack_a8;
            cVar5 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plStack_a8,0x10);
            if (bVar20) {
              *plStack_a8 = lVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar11 + -1 == 0) {
            (*(code *)plStack_a8[1])();
          }
        }
        uVar16 = *puVar22;
      }
      if ((uVar16 >> 0x10 & 1) != 0) {
        plStack_a8 = (long *)0x1;
        uStack_a0 = 4;
        pcStack_98 = "host";
        plVar23 = *(long **)(puVar22 + 0x44);
        if ((long *)0x1 < plVar23) {
          do {
            cVar5 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar20) {
              *plVar23 = *plVar23 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        plStack_d8 = *(long **)(puVar22 + 0x46);
        plStack_e0 = *(long **)(puVar22 + 0x44);
        uStack_c8 = *(undefined8 *)(puVar22 + 0x4a);
        uStack_d0 = *(undefined8 *)(puVar22 + 0x48);
        FUN_100619710(&plStack_178,&plStack_a8,&plStack_e0);
        if ((long *)0x1 < plStack_e0) {
          do {
            lVar11 = *plStack_e0;
            cVar5 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plStack_e0,0x10);
            if (bVar20) {
              *plStack_e0 = lVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar11 + -1 == 0) {
            (*(code *)plStack_e0[1])();
          }
        }
        if ((long *)0x1 < plStack_a8) {
          do {
            lVar11 = *plStack_a8;
            cVar5 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plStack_a8,0x10);
            if (bVar20) {
              *plStack_a8 = lVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar11 + -1 == 0) {
            (*(code *)plStack_a8[1])();
          }
        }
        uVar16 = *puVar22;
      }
      if ((uVar16 >> 0x11 & 1) != 0) {
        plStack_a8 = (long *)0x1;
        uStack_a0 = 0x19;
        pcStack_98 = "endpoint-load-metrics-bin";
        plVar23 = *(long **)(puVar22 + 0x3c);
        if ((long *)0x1 < plVar23) {
          do {
            cVar5 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar20) {
              *plVar23 = *plVar23 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        plStack_d8 = *(long **)(puVar22 + 0x3e);
        plStack_e0 = *(long **)(puVar22 + 0x3c);
        uStack_c8 = *(undefined8 *)(puVar22 + 0x42);
        uStack_d0 = *(undefined8 *)(puVar22 + 0x40);
        FUN_100619710(&plStack_178,&plStack_a8,&plStack_e0);
        if ((long *)0x1 < plStack_e0) {
          do {
            lVar11 = *plStack_e0;
            cVar5 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plStack_e0,0x10);
            if (bVar20) {
              *plStack_e0 = lVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar11 + -1 == 0) {
            (*(code *)plStack_e0[1])();
          }
        }
        if ((long *)0x1 < plStack_a8) {
          do {
            lVar11 = *plStack_a8;
            cVar5 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plStack_a8,0x10);
            if (bVar20) {
              *plStack_a8 = lVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar11 + -1 == 0) {
            (*(code *)plStack_a8[1])();
          }
        }
        uVar16 = *puVar22;
      }
      if ((uVar16 >> 0x12 & 1) != 0) {
        plStack_a8 = (long *)0x1;
        uStack_a0 = 0x15;
        pcStack_98 = "grpc-server-stats-bin";
        plVar23 = *(long **)(puVar22 + 0x34);
        if ((long *)0x1 < plVar23) {
          do {
            cVar5 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar20) {
              *plVar23 = *plVar23 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        plStack_d8 = *(long **)(puVar22 + 0x36);
        plStack_e0 = *(long **)(puVar22 + 0x34);
        uStack_c8 = *(undefined8 *)(puVar22 + 0x3a);
        uStack_d0 = *(undefined8 *)(puVar22 + 0x38);
        FUN_100619710(&plStack_178,&plStack_a8,&plStack_e0);
        if ((long *)0x1 < plStack_e0) {
          do {
            lVar11 = *plStack_e0;
            cVar5 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plStack_e0,0x10);
            if (bVar20) {
              *plStack_e0 = lVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar11 + -1 == 0) {
            (*(code *)plStack_e0[1])();
          }
        }
        if ((long *)0x1 < plStack_a8) {
          do {
            lVar11 = *plStack_a8;
            cVar5 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plStack_a8,0x10);
            if (bVar20) {
              *plStack_a8 = lVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar11 + -1 == 0) {
            (*(code *)plStack_a8[1])();
          }
        }
        uVar16 = *puVar22;
      }
      if ((uVar16 >> 0x13 & 1) != 0) {
        plStack_a8 = (long *)0x1;
        uStack_a0 = 0xe;
        pcStack_98 = "grpc-trace-bin";
        plVar23 = *(long **)(puVar22 + 0x2c);
        if ((long *)0x1 < plVar23) {
          do {
            cVar5 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar20) {
              *plVar23 = *plVar23 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        plStack_d8 = *(long **)(puVar22 + 0x2e);
        plStack_e0 = *(long **)(puVar22 + 0x2c);
        uStack_c8 = *(undefined8 *)(puVar22 + 0x32);
        uStack_d0 = *(undefined8 *)(puVar22 + 0x30);
        FUN_100619710(&plStack_178,&plStack_a8,&plStack_e0);
        if ((long *)0x1 < plStack_e0) {
          do {
            lVar11 = *plStack_e0;
            cVar5 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plStack_e0,0x10);
            if (bVar20) {
              *plStack_e0 = lVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar11 + -1 == 0) {
            (*(code *)plStack_e0[1])();
          }
        }
        if ((long *)0x1 < plStack_a8) {
          do {
            lVar11 = *plStack_a8;
            cVar5 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plStack_a8,0x10);
            if (bVar20) {
              *plStack_a8 = lVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar11 + -1 == 0) {
            (*(code *)plStack_a8[1])();
          }
        }
        uVar16 = *puVar22;
      }
      if ((uVar16 >> 0x14 & 1) != 0) {
        plStack_a8 = (long *)0x1;
        uStack_a0 = 0xd;
        pcStack_98 = "grpc-tags-bin";
        plVar23 = *(long **)(puVar22 + 0x24);
        if ((long *)0x1 < plVar23) {
          do {
            cVar5 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar20) {
              *plVar23 = *plVar23 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        plStack_d8 = *(long **)(puVar22 + 0x26);
        plStack_e0 = *(long **)(puVar22 + 0x24);
        uStack_c8 = *(undefined8 *)(puVar22 + 0x2a);
        uStack_d0 = *(undefined8 *)(puVar22 + 0x28);
        FUN_100619710(&plStack_178,&plStack_a8,&plStack_e0);
        if ((long *)0x1 < plStack_e0) {
          do {
            lVar11 = *plStack_e0;
            cVar5 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plStack_e0,0x10);
            if (bVar20) {
              *plStack_e0 = lVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar11 + -1 == 0) {
            (*(code *)plStack_e0[1])();
          }
        }
        if ((long *)0x1 < plStack_a8) {
          do {
            lVar11 = *plStack_a8;
            cVar5 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plStack_a8,0x10);
            if (bVar20) {
              *plStack_a8 = lVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar11 + -1 == 0) {
            (*(code *)plStack_a8[1])();
          }
        }
        uVar16 = *puVar22;
      }
      if ((uVar16 >> 0x15 & 1) == 0) {
        if ((uVar16 >> 0x16 & 1) != 0) {
          uVar8 = *(ulong *)(puVar22 + 0x18);
          puVar10 = puVar22 + 0x1a;
          if ((uVar8 & 1) != 0) {
            puVar10 = *(uint **)(puVar22 + 0x1a);
          }
          if (1 < uVar8) {
            puVar1 = puVar10 + (uVar8 >> 1) * 8;
            do {
              plStack_a8 = (long *)0x1;
              uStack_a0 = 0xb;
              pcStack_98 = "lb-cost-bin";
              func_0x000104adf18c(&plStack_e0,puVar10);
              FUN_100619710(&plStack_178,&plStack_a8,&plStack_e0);
              if ((long *)0x1 < plStack_e0) {
                do {
                  lVar11 = *plStack_e0;
                  cVar5 = '\x01';
                  bVar20 = (bool)ExclusiveMonitorPass(plStack_e0,0x10);
                  if (bVar20) {
                    *plStack_e0 = lVar11 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (lVar11 + -1 == 0) {
                  (*(code *)plStack_e0[1])();
                }
              }
              if ((long *)0x1 < plStack_a8) {
                do {
                  lVar11 = *plStack_a8;
                  cVar5 = '\x01';
                  bVar20 = (bool)ExclusiveMonitorPass(plStack_a8,0x10);
                  if (bVar20) {
                    *plStack_a8 = lVar11 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (lVar11 + -1 == 0) {
                  (*(code *)plStack_a8[1])();
                }
              }
              puVar10 = puVar10 + 8;
            } while (puVar10 != puVar1);
            uVar16 = *puVar22;
          }
        }
        if ((uVar16 >> 0x17 & 1) != 0) {
          plStack_a8 = (long *)0x1;
          uStack_a0 = 8;
          pcStack_98 = "lb-token";
          plVar23 = *(long **)(puVar22 + 0x10);
          if ((long *)0x1 < plVar23) {
            do {
              cVar5 = '\x01';
              bVar20 = (bool)ExclusiveMonitorPass(plVar23,0x10);
              if (bVar20) {
                *plVar23 = *plVar23 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          plStack_d8 = *(long **)(puVar22 + 0x12);
          plStack_e0 = *(long **)(puVar22 + 0x10);
          uStack_c8 = *(undefined8 *)(puVar22 + 0x16);
          uStack_d0 = *(undefined8 *)(puVar22 + 0x14);
          FUN_100619710(&plStack_178,&plStack_a8,&plStack_e0);
          if ((long *)0x1 < plStack_e0) {
            do {
              lVar11 = *plStack_e0;
              cVar5 = '\x01';
              bVar20 = (bool)ExclusiveMonitorPass(plStack_e0,0x10);
              if (bVar20) {
                *plStack_e0 = lVar11 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar11 + -1 == 0) {
              (*(code *)plStack_e0[1])();
            }
          }
          if ((long *)0x1 < plStack_a8) {
            do {
              lVar11 = *plStack_a8;
              cVar5 = '\x01';
              bVar20 = (bool)ExclusiveMonitorPass(plStack_a8,0x10);
              if (bVar20) {
                *plStack_a8 = lVar11 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar11 + -1 == 0) {
              (*(code *)plStack_a8[1])();
            }
          }
        }
        plVar23 = *(long **)(puVar22 + 0x7e);
        if ((plVar23 != (long *)0x0) && (plVar23[1] == 0)) {
          plVar23 = (long *)0x0;
        }
        lVar11 = 0;
LAB_1006186f0:
        if (plVar23 != (long *)0x0) {
          FUN_100619710(&plStack_178,plVar23 + lVar11 * 8 + 2,plVar23 + lVar11 * 8 + 6);
          lVar11 = lVar11 + 1;
          do {
            if (lVar11 != plVar23[1]) goto LAB_1006186f0;
            lVar11 = 0;
            plVar23 = (long *)*plVar23;
          } while (plVar23 != (long *)0x0);
          lVar11 = 0;
          goto LAB_1006186f0;
        }
        if (lVar11 != 0) {
          FUN_100619710(&plStack_178,lVar11 << 6 | 0x10,lVar11 << 6 | 0x30);
          plVar23 = (long *)0x0;
          lVar11 = lVar11 + 1;
          goto LAB_1006186f0;
        }
        *(undefined8 *)(lVar19 + 0x38) = *(undefined8 *)(lVar19 + 0x30);
        pppppppuVar2 = pppppppuStack_190;
        if (-1 < lStack_180) {
          pppppppuVar2 = &pppppppuStack_190;
        }
        FUN_10061baa8(*(undefined8 *)(lVar19 + 0x28),pppppppuVar2,0,pcStack_198,puVar26,0);
        if (*puVar26 != 0) {
          uVar8 = 1;
          uVar9 = 0;
          do {
            uVar21 = uVar8;
            FUN_100460314(*(undefined8 *)(*plVar25 + uVar9 * 0x10));
            FUN_100460314(*(undefined8 *)(*plVar25 + uVar9 * 0x10 + 8));
            uVar8 = (ulong)((int)uVar21 + 1);
            uVar9 = uVar21;
          } while (uVar21 < *puVar26);
        }
        *(undefined1 *)(lVar19 + 0x48) = 1;
        if ((*(char *)(lVar24 + 0x18) != '\0') && ((*(byte *)(param_1 + 2) & 6) == 0)) {
          *(undefined1 *)(lVar19 + 100) = 1;
        }
        if (lStack_180 < 0) {
          func_0x000107c60e14(pppppppuStack_190);
        }
LAB_1006187f4:
        uVar7 = 0;
        goto LAB_1006189c0;
      }
    }
    else {
      if (puVar22[0x6a] == 0) {
        pcStack_198 = "POST";
        goto LAB_100617b2c;
      }
      if (2 < puVar22[0x6a] - 1) goto LAB_100617b2c;
    }
  }
  func_0x000107c60ebc();
LAB_100618adc:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x100618ae0);
  (*pcVar6)();
}



/* Entry: 100619414; end: 1006195d3;  */

undefined8 FUN_100619414(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)0x28;
  func_0x000107c60e20();
  uVar3 = *param_1;
  *puVar1 = &PTR_DAT_110cd48b0;
  puVar1[1] = uVar3;
  puVar2 = (undefined8 *)0x10;
  func_0x000107c60e20();
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar1[3] = puVar2;
  puVar1[4] = param_3;
  uVar3 = 0x70;
  func_0x000107c60e20();
  func_0x0001006194a0();
  puVar1[2] = uVar3;
  *(undefined8 **)puVar1[3] = puVar1;
  *(undefined8 *)(puVar1[3] + 8) = param_2;
  return puVar1[3];
}



/* Entry: 1006195d4; end: 100619643;  */

long FUN_1006195d4(uint *param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  
  uVar2 = *param_1;
  if (*(long **)(param_1 + 0x7e) == (long *)0x0) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    plVar4 = *(long **)(param_1 + 0x7e);
    do {
      plVar1 = (long *)*plVar4;
      lVar3 = plVar4[1] + lVar3;
      plVar4 = plVar1;
    } while (plVar1 != (long *)0x0);
  }
  uVar2 = (uVar2 - (uVar2 >> 3 & 0x11111111)) -
          ((uVar2 >> 2 & 0x33333333) + (uVar2 >> 1 & 0x77777777));
  return lVar3 + (ulong)((uVar2 + (uVar2 >> 4) & 0xf0f0f0f) % 0xff);
}



/* Entry: 100619644; end: 100619697;  */

long FUN_100619644(undefined8 *param_1,long param_2)

{
  uint uVar1;
  char *pcVar2;
  long lVar3;
  char *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  uVar1 = (uint)param_2;
  if (uVar1 < 3) {
    uVar6 = *(undefined8 *)(&UNK_10dd58088 + (long)(int)uVar1 * 8);
    puVar7 = (&PTR_s_application_grpc_1107c75e0)[(int)uVar1];
    *param_1 = 1;
    param_1[1] = uVar6;
    param_1[2] = puVar7;
    return param_2;
  }
  pcVar2 = "return StaticSlice::FromStaticString(\"unrepresentable value\")";
  func_0x000104a6e964("return StaticSlice::FromStaticString(\"unrepresentable value\")",
                      "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/transport/metadata_batch.cc"
                      ,0x5e);
  if (*(long *)pcVar2 == 0) {
    uVar5 = (ulong)*(byte *)((long)pcVar2 + 8);
  }
  else {
    uVar5 = *(ulong *)((long)pcVar2 + 8);
  }
  lVar3 = uVar5 + 1;
  FUN_100460200();
  if (*(long *)pcVar2 == 0) {
    pcVar4 = (char *)((long)pcVar2 + 9);
    uVar5 = (ulong)*(byte *)((long)pcVar2 + 8);
  }
  else {
    uVar5 = *(ulong *)((long)pcVar2 + 8);
    pcVar4 = *(char **)((long)pcVar2 + 0x10);
  }
  func_0x000107c610b4(lVar3,pcVar4,uVar5);
  if (*(long *)pcVar2 == 0) {
    uVar5 = (ulong)*(byte *)((long)pcVar2 + 8);
  }
  else {
    uVar5 = *(ulong *)((long)pcVar2 + 8);
  }
  *(undefined1 *)(lVar3 + uVar5) = 0;
  return lVar3;
}



/* Entry: 100619698; end: 10061970f;  */

long FUN_100619698(long *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if (*param_1 == 0) {
    uVar3 = (ulong)*(byte *)(param_1 + 1);
  }
  else {
    uVar3 = param_1[1];
  }
  lVar1 = uVar3 + 1;
  FUN_100460200();
  if (*param_1 == 0) {
    lVar2 = (long)param_1 + 9;
    uVar3 = (ulong)*(byte *)(param_1 + 1);
  }
  else {
    uVar3 = param_1[1];
    lVar2 = param_1[2];
  }
  func_0x000107c610b4(lVar1,lVar2,uVar3);
  if (*param_1 == 0) {
    uVar3 = (ulong)*(byte *)(param_1 + 1);
  }
  else {
    uVar3 = param_1[1];
  }
  *(undefined1 *)(lVar1 + uVar3) = 0;
  return lVar1;
}



/* Entry: 100619710; end: 100619827;  */

void FUN_100619710(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  long ***ppplVar6;
  long ***ppplVar7;
  long **pplVar8;
  undefined8 *extraout_x8;
  ulong uVar9;
  long *plVar10;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long **pplStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long **pplStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  ppplVar7 = (long ***)&plStack_c0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  puVar5 = &uStack_60;
  FUN_100619698();
  FUN_1004bc98c();
  if ((int)param_2 == 0) {
    uStack_b8 = param_3[1];
    plStack_c0 = (long *)*param_3;
    uStack_a8 = param_3[3];
    uStack_b0 = param_3[2];
    FUN_100619698();
    ppplVar6 = ppplVar7;
  }
  else {
    FUN_10061b8bc(&pplStack_80,param_3);
    uStack_98 = uStack_78;
    pplStack_a0 = pplStack_80;
    uStack_88 = uStack_68;
    uStack_90 = uStack_70;
    ppplVar6 = &pplStack_a0;
    FUN_100619698();
    ppplVar7 = (long ***)pplStack_80;
    if ((long ***)0x1 < pplStack_80) {
      do {
        pplVar8 = (long **)*pplStack_80;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pplStack_80,0x10);
        if (bVar3) {
          *pplStack_80 = (long *)((long)pplVar8 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((long **)((long)pplVar8 + -1) == (long **)0x0) {
        (*(code *)pplStack_80[1])();
        ppplVar7 = (long ***)pplStack_80;
      }
    }
  }
  iVar4 = (int)ppplVar7;
  puVar1 = *(ulong **)(param_1 + 0x10);
  uVar9 = *puVar1;
  if (uVar9 < *(ulong *)(param_1 + 8)) {
    plVar10 = *(long **)(param_1 + 0x18);
    *(undefined8 **)(*plVar10 + uVar9 * 0x10) = puVar5;
    *(long ****)(*plVar10 + uVar9 * 0x10 + 8) = ppplVar6;
    *puVar1 = uVar9 + 1;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
  }
  else {
    func_0x000107c2c488();
  }
  func_0x000107c60e78();
  if (iVar4 == 0) {
    *extraout_x8 = 1;
    extraout_x8[1] = 8;
    extraout_x8[2] = "trailers";
    return;
  }
  func_0x000107c2c1a8();
  func_0x000107c61574(puVar5[2]);
  func_0x000107c61574(puVar5[3]);
  func_0x000107c61574(puVar5[4]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)(puVar5,0x28,7);
  return;
}


