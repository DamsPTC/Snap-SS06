/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1048a3e84; end: 1048a3f6f;  */

uint FUN_1048a3e84(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 1048a3f70; end: 1048a40f3;  */

void FUN_1048a3f70(long param_1,byte param_2)

{
  long lVar1;
  
  if (param_2 < 2) {
    if (param_2 == 0) {
      return;
    }
    func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
  }
  else {
    if (param_2 == 2) {
      lVar1 = 0x112e04798;
      func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
      _swift_initStackObject();
      *(undefined8 *)(lVar1 + 0x18) = 2;
      *(undefined8 *)(lVar1 + 0x10) = 1;
      *(long *)(lVar1 + 0x20) = param_1;
      func_0x000100c8a830();
      _swift_setDeallocating(lVar1);
      return;
    }
    if (param_2 != 3) {
                    /* WARNING: Could not recover jumptable at 0x0001048a4030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10dd3fb70)[param_1] * 4 + 0x1048a4034))(0);
      return;
    }
    func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
  }
  _swift_initStaticObject();
  func_0x000100c8a830();
  return;
}



/* Entry: 1048a40f4; end: 1048a418b;  */

void FUN_1048a40f4(undefined8 *param_1)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  
  bVar2 = *unaff_x20;
  uVar1 = 0xe900000000000073;
  uVar3 = 0x65736e654c746567;
  if (bVar2 != 2) {
    uVar1 = 0xef74736575716552;
    uVar3 = 0x70747448736e656c;
  }
  uVar5 = 0x800000010f216ed0;
  uVar4 = 0xd000000000000010;
  if (bVar2 != 0) {
    uVar5 = 0xea0000000000736e;
    uVar4 = 0x654c657461657263;
  }
  if (bVar2 < 2) {
    uVar1 = uVar5;
    uVar3 = uVar4;
  }
  *param_1 = uVar3;
  param_1[1] = uVar1;
  return;
}



/* Entry: 1048a418c; end: 1048a4417;  */

void FUN_1048a418c(void)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar2 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar1 = 0xe900000000000073;
  uVar3 = 0x65736e654c746567;
  if (bVar2 != 2) {
    uVar1 = 0xef74736575716552;
    uVar3 = 0x70747448736e656c;
  }
  uVar5 = 0x800000010f216ed0;
  uVar4 = 0xd000000000000010;
  if (bVar2 != 0) {
    uVar5 = 0xea0000000000736e;
    uVar4 = 0x654c657461657263;
  }
  if (bVar2 < 2) {
    uVar1 = uVar5;
    uVar3 = uVar4;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar3,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048a4418; end: 1048a4473;  */

void FUN_1048a4418(undefined8 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *unaff_x20;
  
  pcVar1 = "miniCameraLensIconWorkflow";
  uVar3 = 0xd000000000000017;
  if (*unaff_x20 != '\x01') {
    pcVar1 = "LensCarouselPreview";
    uVar3 = 0xd00000000000001a;
  }
  pcVar2 = "replyActivationWorkflow";
  uVar4 = 0xd000000000000012;
  if (*unaff_x20 != '\0') {
    pcVar2 = pcVar1;
    uVar4 = uVar3;
  }
  *param_1 = uVar4;
  param_1[1] = (ulong)pcVar2 | 0x8000000000000000;
  return;
}



/* Entry: 1048a4474; end: 1048a4613;  */

void FUN_1048a4474(void)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  pcVar1 = "miniCameraLensIconWorkflow";
  uVar4 = 0xd000000000000017;
  if (cVar3 != '\x01') {
    pcVar1 = "LensCarouselPreview";
    uVar4 = 0xd00000000000001a;
  }
  pcVar2 = "replyActivationWorkflow";
  uVar5 = 0xd000000000000012;
  if (cVar3 != '\0') {
    pcVar2 = pcVar1;
    uVar5 = uVar4;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar5,(ulong)pcVar2 | 0x8000000000000000);
  _swift_bridgeObjectRelease((ulong)pcVar2 | 0x8000000000000000);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048a4614; end: 1048a468b;  */

void FUN_1048a4614(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(uVar2);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 1048a468c; end: 1048a46db;  */

void FUN_1048a468c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  
  uVar1 = 0x74754265736f6c63;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x766f72506e6f6369;
  }
  uVar2 = 0xeb000000006e6f74;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xec00000072656469;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 1048a46dc; end: 1048a4863;  */

void FUN_1048a46dc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar1 = 0x74754265736f6c63;
  if (cVar3 != '\x01') {
    uVar1 = 0x766f72506e6f6369;
  }
  uVar2 = 0xeb000000006e6f74;
  if (cVar3 != '\x01') {
    uVar2 = 0xec00000072656469;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048a4864; end: 1048a4ad3;  */

void FUN_1048a4864(undefined8 param_1,ulong param_2,byte param_3)

{
  uint uVar1;
  undefined8 uVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  char *pcVar7;
  
  if (param_3 < 2) {
    if (param_3 != 0) {
      __ss6HasherV8_combineyySuF(9);
      if ((param_2 & 0xff) == 0) {
        uVar5 = 0xd000000000000012;
        pcVar7 = "replyActivationWorkflow";
      }
      else {
        uVar5 = 0xd000000000000017;
        pcVar7 = "miniCameraLensIconWorkflow";
        if (((uint)param_2 & 0xff) != 1) {
          uVar5 = 0xd00000000000001a;
          pcVar7 = "LensCarouselPreview";
        }
      }
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,(ulong)pcVar7 | 0x8000000000000000);
      uVar4 = (ulong)pcVar7 | 0x8000000000000000;
      goto LAB_1048a4a44;
    }
    __ss6HasherV8_combineyySuF(3);
    uVar1 = (uint)param_2 & 0xff;
    uVar4 = 0xe900000000000073;
    uVar5 = 0x65736e654c746567;
    if (uVar1 != 2) {
      uVar4 = 0xef74736575716552;
      uVar5 = 0x70747448736e656c;
    }
    uVar6 = 0x800000010f216ed0;
    uVar2 = 0xd000000000000010;
    if ((param_2 & 0xff) != 0) {
      uVar6 = 0xea0000000000736e;
      uVar2 = 0x654c657461657263;
    }
    if (uVar1 == 1 || (param_2 & 0xff) == 0) {
      uVar5 = uVar2;
    }
    if (uVar1 == 1 || (param_2 & 0xff) == 0) {
      uVar4 = uVar6;
    }
  }
  else {
    if (param_3 == 2) {
      __ss6HasherV8_combineyySuF(10);
      __ss6HasherV8_combineyySuF(param_2);
      return;
    }
    if (param_3 != 3) {
                    /* WARNING: Could not recover jumptable at 0x0001048a49d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10dd3fb92)[param_2] * 4 + 0x1048a49d4))();
      return;
    }
    __ss6HasherV8_combineyySuF(0xb);
    bVar3 = (param_2 & 0xff) != 1;
    uVar5 = 0x74754265736f6c63;
    if (bVar3) {
      uVar5 = 0x766f72506e6f6369;
    }
    uVar4 = 0xeb000000006e6f74;
    if (bVar3) {
      uVar4 = 0xec00000072656469;
    }
  }
  __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,uVar4);
LAB_1048a4a44:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar4);
  return;
}



/* Entry: 1048a4ad4; end: 1048a4aeb;  */

void FUN_1048a4ad4(void)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  
  lVar3 = *unaff_x20;
  bVar1 = *(byte *)(unaff_x20 + 1);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      return;
    }
    func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
  }
  else {
    if (bVar1 == 2) {
      lVar2 = 0x112e04798;
      func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
      _swift_initStackObject();
      *(undefined8 *)(lVar2 + 0x18) = 2;
      *(undefined8 *)(lVar2 + 0x10) = 1;
      *(long *)(lVar2 + 0x20) = lVar3;
      func_0x000100c8a830();
      _swift_setDeallocating(lVar2);
      return;
    }
    if (bVar1 != 3) {
                    /* WARNING: Could not recover jumptable at 0x0001048a4030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10dd3fb70)[lVar3] * 4 + 0x1048a4034))(0);
      return;
    }
    func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
  }
  _swift_initStaticObject();
  func_0x000100c8a830();
  return;
}



/* Entry: 1048a4aec; end: 1048a4b37;  */

void FUN_1048a4aec(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar2 = *unaff_x20;
  uVar1 = *(undefined1 *)(unaff_x20 + 1);
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_1048a4864(auStack_68,uVar2,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048a4b38; end: 1048a4b43;  */

void FUN_1048a4b38(undefined8 param_1)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  char *pcVar9;
  ulong *unaff_x20;
  
  uVar7 = *unaff_x20;
  bVar2 = (byte)unaff_x20[1];
  if (bVar2 < 2) {
    if (bVar2 != 0) {
      __ss6HasherV8_combineyySuF(9);
      if ((uVar7 & 0xff) == 0) {
        uVar6 = 0xd000000000000012;
        pcVar9 = "replyActivationWorkflow";
      }
      else {
        uVar6 = 0xd000000000000017;
        pcVar9 = "miniCameraLensIconWorkflow";
        if (((uint)uVar7 & 0xff) != 1) {
          uVar6 = 0xd00000000000001a;
          pcVar9 = "LensCarouselPreview";
        }
      }
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar6,(ulong)pcVar9 | 0x8000000000000000);
      uVar5 = (ulong)pcVar9 | 0x8000000000000000;
      goto LAB_1048a4a44;
    }
    __ss6HasherV8_combineyySuF(3);
    uVar1 = (uint)uVar7 & 0xff;
    uVar5 = 0xe900000000000073;
    uVar6 = 0x65736e654c746567;
    if (uVar1 != 2) {
      uVar5 = 0xef74736575716552;
      uVar6 = 0x70747448736e656c;
    }
    uVar8 = 0x800000010f216ed0;
    uVar3 = 0xd000000000000010;
    if ((uVar7 & 0xff) != 0) {
      uVar8 = 0xea0000000000736e;
      uVar3 = 0x654c657461657263;
    }
    if (uVar1 == 1 || (uVar7 & 0xff) == 0) {
      uVar6 = uVar3;
    }
    if (uVar1 == 1 || (uVar7 & 0xff) == 0) {
      uVar5 = uVar8;
    }
  }
  else {
    if (bVar2 == 2) {
      __ss6HasherV8_combineyySuF(10);
      __ss6HasherV8_combineyySuF(uVar7);
      return;
    }
    if (bVar2 != 3) {
                    /* WARNING: Could not recover jumptable at 0x0001048a49d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10dd3fb92)[uVar7] * 4 + 0x1048a49d4))();
      return;
    }
    __ss6HasherV8_combineyySuF(0xb);
    bVar4 = (uVar7 & 0xff) != 1;
    uVar6 = 0x74754265736f6c63;
    if (bVar4) {
      uVar6 = 0x766f72506e6f6369;
    }
    uVar5 = 0xeb000000006e6f74;
    if (bVar4) {
      uVar5 = 0xec00000072656469;
    }
  }
  __sSS4hash4intoys6HasherVz_tF(param_1,uVar6,uVar5);
LAB_1048a4a44:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar5);
  return;
}



/* Entry: 1048a4b44; end: 1048a4b8b;  */

void FUN_1048a4b44(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar2 = *unaff_x20;
  uVar1 = *(undefined1 *)(unaff_x20 + 1);
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_1048a4864(auStack_68,uVar2,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048a4b8c; end: 1048a4e0b;  */

ulong FUN_1048a4b8c(ulong *param_1,undefined8 *param_2)

{
  char cVar1;
  byte bVar2;
  ulong uVar3;
  
  uVar3 = *param_1;
  cVar1 = *(char *)(param_2 + 1);
  bVar2 = (byte)param_1[1];
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      if (cVar1 == '\0') {
LAB_1048a4c34:
        return (ulong)((((uint)*param_2 ^ (uint)uVar3) & 0xff) == 0);
      }
    }
    else if (cVar1 == '\x01') goto LAB_1048a4c34;
  }
  else if (bVar2 == 2) {
    if (cVar1 == '\x02') {
      return (ulong)((uint)uVar3 == (uint)*param_2);
    }
  }
  else {
    if (bVar2 != 3) {
                    /* WARNING: Could not recover jumptable at 0x0001048a4c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10dd3fba3)[uVar3] * 4 + 0x1048a4c10))();
      return uVar3;
    }
    if (cVar1 == '\x03') goto LAB_1048a4c34;
  }
  return 0;
}



/* Entry: 1048a4e0c; end: 1048a4ed3;  */

ulong FUN_1048a4e0c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(param_2);
  if (3 < uVar1) {
    uVar1 = 4;
  }
  return uVar1;
}



/* Entry: 1048a4ed4; end: 1048a4ed7;  */

void FUN_1048a4ed4(void)

{
  undefined *puVar1;
  
  if (puRam00000001130995a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3fbb8;
  _swift_getWitnessTable(&UNK_10dd3fbb8,&UNK_1107afa88);
  puRam00000001130995a8 = puVar1;
  return;
}



/* Entry: 1048a4ed8; end: 1048a4f17;  */

void FUN_1048a4ed8(void)

{
  undefined *puVar1;
  
  if (puRam00000001130995a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3fbb8;
  _swift_getWitnessTable(&UNK_10dd3fbb8,&UNK_1107afa88);
  puRam00000001130995a8 = puVar1;
  return;
}



/* Entry: 1048a4f18; end: 1048a4f1b;  */

void FUN_1048a4f18(void)

{
  undefined *puVar1;
  
  if (puRam00000001130995b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3fc58;
  _swift_getWitnessTable(&UNK_10dd3fc58,&UNK_1107afb18);
  puRam00000001130995b0 = puVar1;
  return;
}



/* Entry: 1048a4f1c; end: 1048a4f5b;  */

void FUN_1048a4f1c(void)

{
  undefined *puVar1;
  
  if (puRam00000001130995b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3fc58;
  _swift_getWitnessTable(&UNK_10dd3fc58,&UNK_1107afb18);
  puRam00000001130995b0 = puVar1;
  return;
}



/* Entry: 1048a4f5c; end: 1048a4f5f;  */

void FUN_1048a4f5c(void)

{
  undefined *puVar1;
  
  if (puRam00000001130995b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3fcf8;
  _swift_getWitnessTable(&UNK_10dd3fcf8,&UNK_1107afba8);
  puRam00000001130995b8 = puVar1;
  return;
}



/* Entry: 1048a4f60; end: 1048a4f9f;  */

void FUN_1048a4f60(void)

{
  undefined *puVar1;
  
  if (puRam00000001130995b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3fcf8;
  _swift_getWitnessTable(&UNK_10dd3fcf8,&UNK_1107afba8);
  puRam00000001130995b8 = puVar1;
  return;
}



/* Entry: 1048a4fa0; end: 1048a4fc3;  */

void FUN_1048a4fa0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1048a4fc4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1048a4fc4; end: 1048a5003;  */

void FUN_1048a4fc4(void)

{
  undefined *puVar1;
  
  if (puRam00000001130995c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3fdb4;
  _swift_getWitnessTable(&UNK_10dd3fdb4,&UNK_1107afc38);
  puRam00000001130995c0 = puVar1;
  return;
}



/* Entry: 1048a5004; end: 1048a5007;  */

void FUN_1048a5004(void)

{
  undefined *puVar1;
  
  if (puRam00000001130995c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3fdf4;
  _swift_getWitnessTable(&UNK_10dd3fdf4,&UNK_1107afc38);
  puRam00000001130995c8 = puVar1;
  return;
}



/* Entry: 1048a5008; end: 1048a5047;  */

void FUN_1048a5008(void)

{
  undefined *puVar1;
  
  if (puRam00000001130995c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3fdf4;
  _swift_getWitnessTable(&UNK_10dd3fdf4,&UNK_1107afc38);
  puRam00000001130995c8 = puVar1;
  return;
}



/* Entry: 1048a5048; end: 1048a5537;  */

int FUN_1048a5048(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1048a50c4;
        goto LAB_1048a50a8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1048a50a8:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_1048a50c4:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1048a5538; end: 1048a56bb;  */

void FUN_1048a5538(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 >> 4 & 0xf;
  if (uVar1 < 4) {
    if (1 < uVar1) {
      if (uVar1 == 2) {
        if (((param_1 & 0xff) < 0x22) && ((param_1 & 0xff) != 0x20)) {
          return;
        }
      }
      else if ((param_1 & 0xff) == 0x30) {
        return;
      }
    }
  }
  else if (uVar1 < 6) {
    if (uVar1 == 4) {
      if ((1 < (param_1 & 0xff) - 0x41) && ((param_1 & 0xff) == 0x40)) {
        return;
      }
    }
    else if ((0x51 < (param_1 & 0xff)) && ((param_1 & 0xff) != 0x52)) {
      return;
    }
  }
  else if (uVar1 == 6) {
    if (((param_1 & 0xff) < 0x62) && ((param_1 & 0xff) == 0x60)) {
      return;
    }
  }
  else if (((uVar1 == 7) && (1 < (param_1 & 0xff) - 0x72)) && ((param_1 & 0xff) == 0x70)) {
    return;
  }
  func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
  _swift_initStaticObject();
  func_0x000100c8a830();
  return;
}



/* Entry: 1048a56bc; end: 1048a56c3;  */

undefined8 FUN_1048a56bc(void)

{
  return 1;
}



/* Entry: 1048a56c4; end: 1048a572f;  */

void FUN_1048a56c4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  lVar2 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(uVar1);
  *(bool *)param_1 = lVar2 != 0;
  return;
}



/* Entry: 1048a5730; end: 1048a5757;  */

void FUN_1048a5730(undefined8 *param_1)

{
  *param_1 = 0x6e6f697461636f6c;
  param_1[1] = 0xef676e6972616853;
  return;
}



/* Entry: 1048a5758; end: 1048a57b3;  */

void FUN_1048a5758(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __sSS4hash4intoys6HasherVz_tF(auStack_68,0x6e6f697461636f6c,0xef676e6972616853);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048a57b4; end: 1048a57d7;  */

void FUN_1048a57b4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)
            (param_1,0x6e6f697461636f6c,0xef676e6972616853);
  return;
}



/* Entry: 1048a57d8; end: 1048a585b;  */

void FUN_1048a57d8(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __sSS4hash4intoys6HasherVz_tF(auStack_68,0x6e6f697461636f6c,0xef676e6972616853);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048a585c; end: 1048a58c7;  */

void FUN_1048a585c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  char *unaff_x20;
  
  cVar3 = *unaff_x20;
  uVar4 = 0x6d6f72684370616d;
  uVar1 = 0xeb00000000325665;
  if (cVar3 != '\x01') {
    uVar4 = 0xd000000000000010;
    uVar1 = 0x800000010f217000;
  }
  uVar2 = 0x6c6172656e6567;
  if (cVar3 != '\0') {
    uVar2 = uVar4;
  }
  uVar4 = 0xe700000000000000;
  if (cVar3 != '\0') {
    uVar4 = uVar1;
  }
  *param_1 = uVar2;
  param_1[1] = uVar4;
  return;
}



/* Entry: 1048a58c8; end: 1048a5aa3;  */

void FUN_1048a58c8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar4 = 0x6d6f72684370616d;
  uVar1 = 0xeb00000000325665;
  if (cVar3 != '\x01') {
    uVar4 = 0xd000000000000010;
    uVar1 = 0x800000010f217000;
  }
  uVar2 = 0x6c6172656e6567;
  if (cVar3 != '\0') {
    uVar2 = uVar4;
  }
  uVar4 = 0xe700000000000000;
  if (cVar3 != '\0') {
    uVar4 = uVar1;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar2,uVar4);
  _swift_bridgeObjectRelease(uVar4);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048a5aa4; end: 1048a5b1b;  */

void FUN_1048a5aa4(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(uVar2);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 1048a5b1c; end: 1048a5b63;  */

void FUN_1048a5b1c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  
  uVar2 = 0x4264657469736976;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xd000000000000010;
  }
  uVar1 = 0xe900000000000079;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x800000010f217060;
  }
  *param_1 = uVar2;
  param_1[1] = uVar1;
  return;
}



/* Entry: 1048a5b64; end: 1048a5cd3;  */

void FUN_1048a5b64(void)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar3 = 0x4264657469736976;
  if (cVar2 != '\x01') {
    uVar3 = 0xd000000000000010;
  }
  uVar1 = 0xe900000000000079;
  if (cVar2 != '\x01') {
    uVar1 = 0x800000010f217060;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar3,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048a5cd4; end: 1048a5ce3;  */

void FUN_1048a5cd4(void)

{
  byte bVar1;
  byte bVar2;
  byte *unaff_x20;
  
  bVar1 = *unaff_x20;
  bVar2 = bVar1 >> 4;
  if (bVar2 < 4) {
    if (1 < bVar2) {
      if (bVar2 == 2) {
        if ((bVar1 < 0x22) && (bVar1 != 0x20)) {
          return;
        }
      }
      else if (bVar1 == 0x30) {
        return;
      }
    }
  }
  else if (bVar2 < 6) {
    if (bVar2 == 4) {
      if ((1 < bVar1 - 0x41) && (bVar1 == 0x40)) {
        return;
      }
    }
    else if ((0x51 < bVar1) && (bVar1 != 0x52)) {
      return;
    }
  }
  else if (bVar2 == 6) {
    if ((bVar1 < 0x62) && (bVar1 == 0x60)) {
      return;
    }
  }
  else if (((bVar2 == 7) && (1 < bVar1 - 0x72)) && (bVar1 == 0x70)) {
    return;
  }
  func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
  _swift_initStaticObject();
  func_0x000100c8a830();
  return;
}



/* Entry: 1048a5ce4; end: 1048a5d27;  */

void FUN_1048a5ce4(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  func_0x00010059b580(auStack_68,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048a5d28; end: 1048a5d2f;  */

/* WARNING: Possible PIC construction at 0x00010059b7b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010059b7b8) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */

void FUN_1048a5d28(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte *unaff_x20;
  
  bVar1 = *unaff_x20;
  bVar2 = bVar1 >> 4;
  if (bVar2 < 4) {
    if (bVar2 < 2) {
      if (bVar2 == 0) {
        func_0x000107c60690(0x12);
        uVar3 = 0x4264657469736976;
        if (bVar1 != 1) {
          uVar3 = 0xd000000000000010;
        }
        uVar4 = 0xe900000000000079;
        if (bVar1 != 1) {
          uVar4 = 0x800000010f217060;
        }
      }
      else {
        func_0x000107c60690(0x19);
        if ((bVar1 & 0xf) == 0) {
          uVar3 = 0x6c6172656e6567;
          uVar4 = 0xe700000000000000;
        }
        else {
          uVar3 = 0x6d6f72684370616d;
          uVar4 = 0xeb00000000325665;
          if ((bVar1 & 0xf) != 1) {
            uVar3 = 0xd000000000000010;
            uVar4 = 0x800000010f217000;
          }
        }
      }
code_r0x000107c5fb58:
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,uVar3,uVar4);
      return;
    }
    if (bVar2 == 2) {
      if (bVar1 < 0x22) {
        if (bVar1 == 0x20) {
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
        }
      }
      else if (bVar1 == 0x22) {
        uVar3 = 2;
      }
      else {
        uVar3 = 3;
      }
    }
    else if (bVar1 < 0x32) {
      if (bVar1 == 0x30) {
        uVar3 = 4;
      }
      else {
        uVar3 = 5;
      }
    }
    else if (bVar1 == 0x32) {
      uVar3 = 6;
    }
    else {
      uVar3 = 7;
    }
  }
  else if (bVar2 < 6) {
    if (bVar2 == 4) {
      if (bVar1 < 0x42) {
        if (bVar1 == 0x40) {
          uVar3 = 8;
        }
        else {
          uVar3 = 9;
        }
      }
      else if (bVar1 == 0x42) {
        uVar3 = 10;
      }
      else {
        uVar3 = 0xb;
      }
    }
    else if (bVar1 < 0x52) {
      if (bVar1 != 0x50) {
        func_0x000107c60690(0xd);
        uVar3 = 0x6e6f697461636f6c;
        uVar4 = 0xef676e6972616853;
        goto code_r0x000107c5fb58;
      }
      uVar3 = 0xc;
    }
    else if (bVar1 == 0x52) {
      uVar3 = 0xe;
    }
    else {
      uVar3 = 0xf;
    }
  }
  else if (bVar2 == 6) {
    if (bVar1 < 0x62) {
      if (bVar1 == 0x60) {
        uVar3 = 0x10;
      }
      else {
        uVar3 = 0x11;
      }
    }
    else if (bVar1 == 0x62) {
      uVar3 = 0x13;
    }
    else {
      uVar3 = 0x14;
    }
  }
  else if (bVar2 == 7) {
    if (bVar1 < 0x72) {
      if (bVar1 == 0x70) {
        uVar3 = 0x15;
      }
      else {
        uVar3 = 0x16;
      }
    }
    else if (bVar1 == 0x72) {
      uVar3 = 0x17;
    }
    else {
      uVar3 = 0x18;
    }
  }
  else if (bVar1 == 0x80) {
    uVar3 = 0x1a;
  }
  else if (bVar1 == 0x81) {
    uVar3 = 0x1b;
  }
  else {
    uVar3 = 0x1c;
  }
  func_0x000107c60690(uVar3);
  return;
}



/* Entry: 1048a5d30; end: 1048a5d6f;  */

void FUN_1048a5d30(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  func_0x00010059b580(auStack_68,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048a5d70; end: 1048a604b;  */

bool FUN_1048a5d70(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  
  bVar1 = *param_2;
  bVar2 = *param_1;
  bVar3 = bVar2 >> 4;
  if (bVar3 < 4) {
    if (bVar3 < 2) {
      if (bVar3 == 0) {
        if (bVar1 < 0x10) {
          return bVar2 == bVar1;
        }
      }
      else if ((bVar1 & 0xf0) == 0x10) {
        return ((bVar1 ^ bVar2) & 0xf) == 0;
      }
    }
    else if (bVar3 == 2) {
      if (bVar2 < 0x22) {
        if (bVar2 == 0x20) {
          if (bVar1 == 0x20) {
            return true;
          }
        }
        else if (bVar1 == 0x21) {
          return true;
        }
      }
      else if (bVar2 == 0x22) {
        if (bVar1 == 0x22) {
          return true;
        }
      }
      else if (bVar1 == 0x23) {
        return true;
      }
    }
    else if (bVar2 < 0x32) {
      if (bVar2 == 0x30) {
        if (bVar1 == 0x30) {
          return true;
        }
      }
      else if (bVar1 == 0x31) {
        return true;
      }
    }
    else if (bVar2 == 0x32) {
      if (bVar1 == 0x32) {
        return true;
      }
    }
    else if (bVar1 == 0x33) {
      return true;
    }
  }
  else if (bVar3 < 6) {
    if (bVar3 == 4) {
      if (bVar2 < 0x42) {
        if (bVar2 == 0x40) {
          if (bVar1 == 0x40) {
            return true;
          }
        }
        else if (bVar1 == 0x41) {
          return true;
        }
      }
      else if (bVar2 == 0x42) {
        if (bVar1 == 0x42) {
          return true;
        }
      }
      else if (bVar1 == 0x43) {
        return true;
      }
    }
    else if (bVar2 < 0x52) {
      if (bVar2 == 0x50) {
        if (bVar1 == 0x50) {
          return true;
        }
      }
      else if (bVar1 == 0x51) {
        return true;
      }
    }
    else if (bVar2 == 0x52) {
      if (bVar1 == 0x52) {
        return true;
      }
    }
    else if (bVar1 == 0x53) {
      return true;
    }
  }
  else if (bVar3 == 6) {
    if (bVar2 < 0x62) {
      if (bVar2 == 0x60) {
        if (bVar1 == 0x60) {
          return true;
        }
      }
      else if (bVar1 == 0x61) {
        return true;
      }
    }
    else if (bVar2 == 0x62) {
      if (bVar1 == 0x62) {
        return true;
      }
    }
    else if (bVar1 == 99) {
      return true;
    }
  }
  else if (bVar3 == 7) {
    if (bVar2 < 0x72) {
      if (bVar2 == 0x70) {
        if (bVar1 == 0x70) {
          return true;
        }
      }
      else if (bVar1 == 0x71) {
        return true;
      }
    }
    else if (bVar2 == 0x72) {
      if (bVar1 == 0x72) {
        return true;
      }
    }
    else if (bVar1 == 0x73) {
      return true;
    }
  }
  else if (bVar2 == 0x80) {
    if (bVar1 == 0x80) {
      return true;
    }
  }
  else if (bVar2 == 0x81) {
    if (bVar1 == 0x81) {
      return true;
    }
  }
  else if (bVar1 == 0x82) {
    return true;
  }
  return false;
}



/* Entry: 1048a604c; end: 1048a60af;  */

ulong FUN_1048a604c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 1048a60b0; end: 1048a60b3;  */

void FUN_1048a60b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113099768 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3feb0;
  _swift_getWitnessTable(&UNK_10dd3feb0,&UNK_1107afd48);
  puRam0000000113099768 = puVar1;
  return;
}



/* Entry: 1048a60b4; end: 1048a60f3;  */

void FUN_1048a60b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113099768 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3feb0;
  _swift_getWitnessTable(&UNK_10dd3feb0,&UNK_1107afd48);
  puRam0000000113099768 = puVar1;
  return;
}



/* Entry: 1048a60f4; end: 1048a60f7;  */

void FUN_1048a60f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113099770 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3ff50;
  _swift_getWitnessTable(&UNK_10dd3ff50,&UNK_1107afdd8);
  puRam0000000113099770 = puVar1;
  return;
}



/* Entry: 1048a60f8; end: 1048a6137;  */

void FUN_1048a60f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113099770 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3ff50;
  _swift_getWitnessTable(&UNK_10dd3ff50,&UNK_1107afdd8);
  puRam0000000113099770 = puVar1;
  return;
}



/* Entry: 1048a6138; end: 1048a613b;  */

void FUN_1048a6138(void)

{
  undefined *puVar1;
  
  if (puRam0000000113099778 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3fff0;
  _swift_getWitnessTable(&UNK_10dd3fff0,&UNK_1107afe68);
  puRam0000000113099778 = puVar1;
  return;
}



/* Entry: 1048a613c; end: 1048a617b;  */

void FUN_1048a613c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113099778 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3fff0;
  _swift_getWitnessTable(&UNK_10dd3fff0,&UNK_1107afe68);
  puRam0000000113099778 = puVar1;
  return;
}



/* Entry: 1048a617c; end: 1048a619f;  */

void FUN_1048a617c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1048a61a0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1048a61a0; end: 1048a61df;  */

void FUN_1048a61a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113099780 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd400ac;
  _swift_getWitnessTable(&UNK_10dd400ac,&UNK_1107afef8);
  puRam0000000113099780 = puVar1;
  return;
}



/* Entry: 1048a61e0; end: 1048a61e3;  */

void FUN_1048a61e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113099788 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd400ec;
  _swift_getWitnessTable(&UNK_10dd400ec,&UNK_1107afef8);
  puRam0000000113099788 = puVar1;
  return;
}



/* Entry: 1048a61e4; end: 1048a6223;  */

void FUN_1048a61e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113099788 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd400ec;
  _swift_getWitnessTable(&UNK_10dd400ec,&UNK_1107afef8);
  puRam0000000113099788 = puVar1;
  return;
}



/* Entry: 1048a6224; end: 1048a679f;  */

uint FUN_1048a6224(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 1048a67a0; end: 1048a69b3;  */

undefined1  [16] FUN_1048a67a0(byte param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  if (param_1 < 5) {
    if (param_1 == 2) {
      auVar8._8_8_ = 0x800000010f215f40;
      auVar8._0_8_ = 0xd00000000000001c;
      return auVar8;
    }
    if (param_1 == 3) {
      auVar11._8_8_ = 0x800000010f215f20;
      auVar11._0_8_ = 0xd000000000000011;
      return auVar11;
    }
    if (param_1 == 4) {
      auVar6._8_8_ = 0x800000010f215ee0;
      auVar6._0_8_ = 0xd000000000000010;
      return auVar6;
    }
  }
  else {
    if (param_1 == 5) {
      auVar9._8_8_ = 0xee00676e69707061;
      auVar9._0_8_ = 0x4d6b726f7774656e;
      return auVar9;
    }
    if (param_1 == 6) {
      auVar12._8_8_ = 0x800000010f215ec0;
      auVar12._0_8_ = 0xd000000000000017;
      return auVar12;
    }
    if (param_1 == 7) {
      auVar7._8_8_ = 0x800000010f215ea0;
      auVar7._0_8_ = 0xd000000000000018;
      return auVar7;
    }
  }
  lVar1 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x18) = 4;
  *(undefined8 *)(lVar1 + 0x10) = 2;
  *(undefined8 *)(lVar1 + 0x20) = 0xd000000000000013;
  *(undefined8 *)(lVar1 + 0x28) = 0x800000010f215f00;
  uVar2 = 0x6d6f7250776f6873;
  if (param_1 != 1) {
    uVar2 = 0x635365736f707865;
  }
  uVar3 = 0xea00000000007470;
  if (param_1 != 1) {
    uVar3 = 0xeb0000000065706f;
  }
  *(undefined8 *)(lVar1 + 0x30) = uVar2;
  *(undefined8 *)(lVar1 + 0x38) = uVar3;
  uVar2 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar3 = uVar2;
  func_0x00010011d734();
  uVar4 = 0x23;
  uVar5 = 0xe100000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x23,0xe100000000000000,uVar2,uVar3);
  _swift_release(lVar1);
  auVar10._8_8_ = uVar5;
  auVar10._0_8_ = uVar4;
  return auVar10;
}



/* Entry: 1048a69b4; end: 1048a69c7;  */

bool FUN_1048a69b4(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1048a69c8; end: 1048a6a3f;  */

void FUN_1048a69c8(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(uVar2);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 1048a6a40; end: 1048a6a8b;  */

void FUN_1048a6a40(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  
  uVar1 = 0x6d6f7250776f6873;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x635365736f707865;
  }
  uVar2 = 0xea00000000007470;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xeb0000000065706f;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 1048a6a8c; end: 1048a6cfb;  */

void FUN_1048a6a8c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar1 = 0x6d6f7250776f6873;
  if (cVar3 != '\x01') {
    uVar1 = 0x635365736f707865;
  }
  uVar2 = 0xea00000000007470;
  if (cVar3 != '\x01') {
    uVar2 = 0xeb0000000065706f;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048a6cfc; end: 1048a6d0b;  */

undefined8 FUN_1048a6cfc(void)

{
  return 0;
}



/* Entry: 1048a6d0c; end: 1048a6d4f;  */

void FUN_1048a6d0c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  func_0x0001048a6c08(auStack_68,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048a6d50; end: 1048a6d57;  */

void FUN_1048a6d50(undefined8 param_1)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  byte *unaff_x20;
  
  bVar2 = *unaff_x20;
  if (bVar2 < 5) {
    if (bVar2 == 2) {
      uVar3 = 0;
    }
    else if (bVar2 == 3) {
      uVar3 = 1;
    }
    else {
      if (bVar2 != 4) {
LAB_1048a6c74:
        __ss6HasherV8_combineyySuF(2);
        uVar3 = 0x6d6f7250776f6873;
        if (bVar2 != 1) {
          uVar3 = 0x635365736f707865;
        }
        uVar1 = 0xea00000000007470;
        if (bVar2 != 1) {
          uVar1 = 0xeb0000000065706f;
        }
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
        return;
      }
      uVar3 = 3;
    }
  }
  else if (bVar2 == 5) {
    uVar3 = 4;
  }
  else if (bVar2 == 6) {
    uVar3 = 5;
  }
  else {
    if (bVar2 != 7) goto LAB_1048a6c74;
    uVar3 = 6;
  }
  __ss6HasherV8_combineyySuF(uVar3);
  return;
}



/* Entry: 1048a6d58; end: 1048a6d97;  */

void FUN_1048a6d58(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  func_0x0001048a6c08(auStack_68,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048a6d98; end: 1048a6e67;  */

bool FUN_1048a6d98(byte *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  bVar1 = *param_1;
  uVar3 = (uint)bVar1;
  uVar2 = (uint)*param_2;
  if (bVar1 < 5) {
    if (uVar3 == 2) {
      if (uVar2 != 2) {
        return false;
      }
      return true;
    }
    if (bVar1 == 3) {
      if (uVar2 != 3) {
        return false;
      }
      return true;
    }
    if (bVar1 == 4) {
      if (uVar2 != 4) {
        return false;
      }
      return true;
    }
  }
  else {
    if (bVar1 == 5) {
      if (uVar2 != 5) {
        return false;
      }
      return true;
    }
    if (bVar1 == 6) {
      if (uVar2 != 6) {
        return false;
      }
      return true;
    }
    if (uVar3 == 7) {
      if (uVar2 != 7) {
        return false;
      }
      return true;
    }
  }
  if (uVar2 - 2 < 6) {
    return false;
  }
  return uVar3 == uVar2;
}



/* Entry: 1048a6e68; end: 1048a6ea7;  */

void FUN_1048a6e68(void)

{
  undefined *puVar1;
  
  if (puRam0000000113099898 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd40198;
  _swift_getWitnessTable(&UNK_10dd40198,&UNK_1107b0008);
  puRam0000000113099898 = puVar1;
  return;
}



/* Entry: 1048a6ea8; end: 1048a6ecb;  */

void FUN_1048a6ea8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1048a6ecc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1048a6ecc; end: 1048a6f0b;  */

void FUN_1048a6ecc(void)

{
  undefined *puVar1;
  
  if (puRam00000001130998a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd40254;
  _swift_getWitnessTable(&UNK_10dd40254,&UNK_1107b0098);
  puRam00000001130998a0 = puVar1;
  return;
}



/* Entry: 1048a6f0c; end: 1048a6f0f;  */

void FUN_1048a6f0c(void)

{
  undefined *puVar1;
  
  if (puRam00000001130998a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd40294;
  _swift_getWitnessTable(&UNK_10dd40294,&UNK_1107b0098);
  puRam00000001130998a8 = puVar1;
  return;
}



/* Entry: 1048a6f10; end: 1048a6f4f;  */

void FUN_1048a6f10(void)

{
  undefined *puVar1;
  
  if (puRam00000001130998a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd40294;
  _swift_getWitnessTable(&UNK_10dd40294,&UNK_1107b0098);
  puRam00000001130998a8 = puVar1;
  return;
}



/* Entry: 1048a6f50; end: 1048a723f;  */

int FUN_1048a6f50(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1048a6fcc;
        goto LAB_1048a6fb0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1048a6fb0:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_1048a6fcc:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1048a7240; end: 1048a74f3;  */

void FUN_1048a7240(long param_1,byte param_2)

{
  long lVar1;
  
  if (param_2 < 3) {
    if (((int)param_1 != 0xce) && ((int)param_1 != 0x7f)) {
      lVar1 = 0x112e04798;
      func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
      _swift_initStackObject();
      *(undefined8 *)(lVar1 + 0x18) = 2;
      *(undefined8 *)(lVar1 + 0x10) = 1;
      *(long *)(lVar1 + 0x20) = param_1;
      func_0x000100c8a830();
      _swift_setDeallocating(lVar1);
      return;
    }
    func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
  }
  else if (param_2 == 3) {
    func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
  }
  else if (param_1 == 0) {
    func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
  }
  else if (param_1 == 1) {
    func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
  }
  else {
    func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
  }
  _swift_initStaticObject();
  func_0x000100c8a830();
  return;
}



/* Entry: 1048a74f4; end: 1048a7507;  */

bool FUN_1048a74f4(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1048a7508; end: 1048a77db;  */

void FUN_1048a7508(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar3 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar1 = 0x800000010f216160;
  uVar4 = 0xd000000000000015;
  if (bVar3 != 3) {
    uVar1 = 0xe900000000000077;
    uVar4 = 0x6569566775626564;
  }
  uVar2 = 0x800000010f216180;
  uVar5 = 0xd000000000000013;
  if (bVar3 != 2) {
    uVar2 = uVar1;
    uVar5 = uVar4;
  }
  uVar1 = 0xe90000000000006c;
  uVar4 = 0x65646f4d64616f6c;
  if (bVar3 != 0) {
    uVar1 = 0xeb000000006c6564;
    uVar4 = 0x6f4d64616f6c6e75;
  }
  if (bVar3 < 2) {
    uVar2 = uVar1;
    uVar5 = uVar4;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar5,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048a77dc; end: 1048a788b;  */

void FUN_1048a77dc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  
  bVar3 = *unaff_x20;
  uVar1 = 0x800000010f216160;
  uVar4 = 0xd000000000000015;
  if (bVar3 != 3) {
    uVar1 = 0xe900000000000077;
    uVar4 = 0x6569566775626564;
  }
  uVar2 = 0x800000010f216180;
  uVar5 = 0xd000000000000013;
  if (bVar3 != 2) {
    uVar2 = uVar1;
    uVar5 = uVar4;
  }
  uVar1 = 0xe90000000000006c;
  uVar4 = 0x65646f4d64616f6c;
  if (bVar3 != 0) {
    uVar1 = 0xeb000000006c6564;
    uVar4 = 0x6f4d64616f6c6e75;
  }
  if (bVar3 < 2) {
    uVar2 = uVar1;
    uVar5 = uVar4;
  }
  *param_1 = uVar5;
  param_1[1] = uVar2;
  return;
}



/* Entry: 1048a788c; end: 1048a79e7;  */

void FUN_1048a788c(undefined8 param_1,ulong param_2,byte param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_3 < 2) {
    if (param_3 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
  }
  else {
    if (param_3 != 2) {
      if (param_3 == 3) {
        __ss6HasherV8_combineyySuF(4);
        uVar1 = (uint)param_2 & 0xff;
        uVar5 = 0x800000010f216160;
        uVar4 = 0xd000000000000015;
        if (uVar1 != 3) {
          uVar5 = 0xe900000000000077;
          uVar4 = 0x6569566775626564;
        }
        uVar3 = 0x800000010f216180;
        uVar2 = 0xd000000000000013;
        if (uVar1 != 2) {
          uVar3 = uVar5;
          uVar2 = uVar4;
        }
        uVar5 = 0xe90000000000006c;
        uVar4 = 0x65646f4d64616f6c;
        if ((param_2 & 0xff) != 0) {
          uVar5 = 0xeb000000006c6564;
          uVar4 = 0x6f4d64616f6c6e75;
        }
        if (uVar1 == 1 || (param_2 & 0xff) == 0) {
          uVar2 = uVar4;
        }
        if (uVar1 == 1 || (param_2 & 0xff) == 0) {
          uVar3 = uVar5;
        }
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
        return;
      }
      if (param_2 == 0) {
        param_2 = 3;
      }
      else if (param_2 == 1) {
        param_2 = 5;
      }
      else {
        param_2 = 6;
      }
      goto LAB_1048a79c4;
    }
    uVar5 = 2;
  }
  __ss6HasherV8_combineyySuF(uVar5);
LAB_1048a79c4:
  __ss6HasherV8_combineyySuF(param_2);
  return;
}



/* Entry: 1048a79e8; end: 1048a79ff;  */

void FUN_1048a79e8(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  
  lVar2 = *unaff_x20;
  if (*(byte *)(unaff_x20 + 1) < 3) {
    if (((int)lVar2 != 0xce) && ((int)lVar2 != 0x7f)) {
      lVar1 = 0x112e04798;
      func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
      _swift_initStackObject();
      *(undefined8 *)(lVar1 + 0x18) = 2;
      *(undefined8 *)(lVar1 + 0x10) = 1;
      *(long *)(lVar1 + 0x20) = lVar2;
      func_0x000100c8a830();
      _swift_setDeallocating(lVar1);
      return;
    }
    func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
  }
  else if (*(byte *)(unaff_x20 + 1) == 3) {
    func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
  }
  else if (lVar2 == 0) {
    func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
  }
  else if (lVar2 == 1) {
    func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
  }
  else {
    func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
  }
  _swift_initStaticObject();
  func_0x000100c8a830();
  return;
}



/* Entry: 1048a7a00; end: 1048a7a4b;  */

void FUN_1048a7a00(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar2 = *unaff_x20;
  uVar1 = *(undefined1 *)(unaff_x20 + 1);
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_1048a788c(auStack_68,uVar2,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048a7a4c; end: 1048a7a57;  */

void FUN_1048a7a4c(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong *unaff_x20;
  
  uVar7 = *unaff_x20;
  bVar4 = (byte)unaff_x20[1];
  if (bVar4 < 2) {
    if (bVar4 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = 1;
    }
  }
  else {
    if (bVar4 != 2) {
      if (bVar4 == 3) {
        __ss6HasherV8_combineyySuF(4);
        uVar1 = (uint)uVar7 & 0xff;
        uVar6 = 0x800000010f216160;
        uVar5 = 0xd000000000000015;
        if (uVar1 != 3) {
          uVar6 = 0xe900000000000077;
          uVar5 = 0x6569566775626564;
        }
        uVar3 = 0x800000010f216180;
        uVar2 = 0xd000000000000013;
        if (uVar1 != 2) {
          uVar3 = uVar6;
          uVar2 = uVar5;
        }
        uVar6 = 0xe90000000000006c;
        uVar5 = 0x65646f4d64616f6c;
        if ((uVar7 & 0xff) != 0) {
          uVar6 = 0xeb000000006c6564;
          uVar5 = 0x6f4d64616f6c6e75;
        }
        if (uVar1 == 1 || (uVar7 & 0xff) == 0) {
          uVar2 = uVar5;
        }
        if (uVar1 == 1 || (uVar7 & 0xff) == 0) {
          uVar3 = uVar6;
        }
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
        return;
      }
      if (uVar7 == 0) {
        uVar7 = 3;
      }
      else if (uVar7 == 1) {
        uVar7 = 5;
      }
      else {
        uVar7 = 6;
      }
      goto LAB_1048a79c4;
    }
    uVar6 = 2;
  }
  __ss6HasherV8_combineyySuF(uVar6);
LAB_1048a79c4:
  __ss6HasherV8_combineyySuF(uVar7);
  return;
}



/* Entry: 1048a7a58; end: 1048a7a9f;  */

void FUN_1048a7a58(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar2 = *unaff_x20;
  uVar1 = *(undefined1 *)(unaff_x20 + 1);
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_1048a788c(auStack_68,uVar2,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048a7aa0; end: 1048a7ab7;  */

bool FUN_1048a7aa0(long *param_1,long *param_2)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *param_1;
  lVar3 = *param_2;
  cVar1 = (char)param_2[1];
  bVar2 = *(byte *)(param_1 + 1);
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      if (cVar1 == '\0') {
code_r0x0001000b9d20:
        return (uint)lVar4 == (uint)lVar3;
      }
    }
    else if (cVar1 == '\x01') goto code_r0x0001000b9d20;
  }
  else if (bVar2 == 2) {
    if (cVar1 == '\x02') goto code_r0x0001000b9d20;
  }
  else if (bVar2 == 3) {
    if (cVar1 == '\x03') {
      return (((uint)lVar3 ^ (uint)lVar4) & 0xff) == 0;
    }
  }
  else if (lVar4 == 0) {
    if ((cVar1 == '\x04') && (lVar3 == 0)) {
      return true;
    }
  }
  else if (lVar4 == 1) {
    if ((cVar1 == '\x04') && (lVar3 == 1)) {
      return true;
    }
  }
  else if ((cVar1 == '\x04') && (lVar3 == 2)) {
    return true;
  }
  return false;
}



/* Entry: 1048a7ab8; end: 1048a7b1b;  */

ulong FUN_1048a7ab8(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(param_2);
  if (4 < uVar1) {
    uVar1 = 5;
  }
  return uVar1;
}



/* Entry: 1048a7b1c; end: 1048a7b1f;  */

void FUN_1048a7b1c(void)

{
  undefined *puVar1;
  
  if (puRam00000001130999e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd40308;
  _swift_getWitnessTable(&UNK_10dd40308,&UNK_1107b01a8);
  puRam00000001130999e0 = puVar1;
  return;
}



/* Entry: 1048a7b20; end: 1048a7b5f;  */

void FUN_1048a7b20(void)

{
  undefined *puVar1;
  
  if (puRam00000001130999e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd40308;
  _swift_getWitnessTable(&UNK_10dd40308,&UNK_1107b01a8);
  puRam00000001130999e0 = puVar1;
  return;
}



/* Entry: 1048a7b60; end: 1048a7b83;  */

void FUN_1048a7b60(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1048a7b84();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1048a7b84; end: 1048a7bc3;  */

void FUN_1048a7b84(void)

{
  undefined *puVar1;
  
  if (puRam00000001130999e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd403c4;
  _swift_getWitnessTable(&UNK_10dd403c4,&UNK_1107b0238);
  puRam00000001130999e8 = puVar1;
  return;
}



/* Entry: 1048a7bc4; end: 1048a7bc7;  */

void FUN_1048a7bc4(void)

{
  undefined *puVar1;
  
  if (puRam00000001130999f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd40404;
  _swift_getWitnessTable(&UNK_10dd40404,&UNK_1107b0238);
  puRam00000001130999f0 = puVar1;
  return;
}



/* Entry: 1048a7bc8; end: 1048a7c07;  */

void FUN_1048a7bc8(void)

{
  undefined *puVar1;
  
  if (puRam00000001130999f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd40404;
  _swift_getWitnessTable(&UNK_10dd40404,&UNK_1107b0238);
  puRam00000001130999f0 = puVar1;
  return;
}



/* Entry: 1048a7c08; end: 1048a7e3b;  */

int FUN_1048a7c08(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfb < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 4) {
      iVar2 = 4;
    }
    if (param_2 + 4 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1048a7c84;
        goto LAB_1048a7c68;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1048a7c68:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_1048a7c84:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1048a7e3c; end: 1048a7e6f;  */

void FUN_1048a7e3c(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1048a874c(uVar1,param_2[1],0x113099d98);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 1048a7e70; end: 1048a7ec7;  */

void FUN_1048a7e70(undefined8 *param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *unaff_x20;
  
  uVar3 = 0xd000000000000016;
  pcVar4 = "MemoriesEncryption";
  if (*unaff_x20 == '\x01') {
    uVar3 = 0xd000000000000017;
    pcVar4 = "encryptionInfoProvider";
  }
  pcVar1 = "doubleEncryptionInvoker";
  uVar2 = 0xd000000000000018;
  if (*unaff_x20 != '\0') {
    pcVar1 = pcVar4;
    uVar2 = uVar3;
  }
  *param_1 = uVar2;
  param_1[1] = (ulong)pcVar1 | 0x8000000000000000;
  return;
}



/* Entry: 1048a7ec8; end: 1048a808f;  */

void FUN_1048a7ec8(void)

{
  char *pcVar1;
  char cVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar5 = 0xd000000000000016;
  cVar2 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  pcVar4 = "MemoriesEncryption";
  if (cVar2 == '\x01') {
    uVar5 = 0xd000000000000017;
    pcVar4 = "encryptionInfoProvider";
  }
  pcVar1 = "doubleEncryptionInvoker";
  uVar3 = 0xd000000000000018;
  if (cVar2 != '\0') {
    pcVar1 = pcVar4;
    uVar3 = uVar5;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar3,(ulong)pcVar1 | 0x8000000000000000);
  _swift_bridgeObjectRelease((ulong)pcVar1 | 0x8000000000000000);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048a8090; end: 1048a80eb;  */

void FUN_1048a8090(undefined8 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *unaff_x20;
  
  pcVar1 = "snapDocTranscodeForExport";
  uVar3 = 0xd000000000000010;
  if (*unaff_x20 != '\x01') {
    pcVar1 = "MemoriesTranscoding";
    uVar3 = 0xd000000000000019;
  }
  pcVar2 = "snapDocTranscode";
  uVar4 = 0xd000000000000018;
  if (*unaff_x20 != '\0') {
    pcVar2 = pcVar1;
    uVar4 = uVar3;
  }
  *param_1 = uVar4;
  param_1[1] = (ulong)pcVar2 | 0x8000000000000000;
  return;
}



/* Entry: 1048a80ec; end: 1048a828b;  */

void FUN_1048a80ec(void)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  pcVar1 = "snapDocTranscodeForExport";
  uVar4 = 0xd000000000000010;
  if (cVar3 != '\x01') {
    pcVar1 = "MemoriesTranscoding";
    uVar4 = 0xd000000000000019;
  }
  pcVar2 = "snapDocTranscode";
  uVar5 = 0xd000000000000018;
  if (cVar3 != '\0') {
    pcVar2 = pcVar1;
    uVar5 = uVar4;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar5,(ulong)pcVar2 | 0x8000000000000000);
  _swift_bridgeObjectRelease((ulong)pcVar2 | 0x8000000000000000);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048a828c; end: 1048a8303;  */

void FUN_1048a828c(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(uVar2);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 1048a8304; end: 1048a8343;  */

void FUN_1048a8304(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  
  uVar1 = 0x7475436b63697571;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x6c6172656e6567;
  }
  uVar2 = 0xe800000000000000;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xe700000000000000;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 1048a8344; end: 1048a849b;  */

void FUN_1048a8344(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar1 = 0x7475436b63697571;
  if (cVar3 != '\x01') {
    uVar1 = 0x6c6172656e6567;
  }
  uVar2 = 0xe800000000000000;
  if (cVar3 != '\x01') {
    uVar2 = 0xe700000000000000;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048a849c; end: 1048a84ab;  */

void FUN_1048a849c(void)

{
  byte bVar1;
  undefined8 uVar2;
  uint uVar3;
  byte *unaff_x20;
  
  bVar1 = *unaff_x20 >> 5;
  uVar3 = (uint)*unaff_x20;
  if (bVar1 < 3) {
    if (bVar1 != 0) {
      if (bVar1 != 1) {
        uVar2 = 0x112e04798;
        func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
        func_0x000107c61538();
        func_0x000100c8a830();
        if ((uVar3 & 0x1f) != 1) {
          return;
        }
        func_0x000107c61538(uVar2,0x113099ae8);
        FUN_1048a8544();
        return;
      }
      if ((uVar3 & 0x1f) == 2) {
        func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
        goto code_r0x000100c8d7fc;
      }
    }
code_r0x000100c8d6f8:
    func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
  }
  else {
    if (bVar1 < 5) {
      if (bVar1 == 3) {
        if (uVar3 - 0x61 < 2) {
          return;
        }
        if (uVar3 == 0x60) goto code_r0x000100c8d6f8;
      }
      else if (1 < uVar3 - 0x82) {
        if (uVar3 == 0x80) {
          func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
        }
        else {
          func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
        }
        goto code_r0x000100c8d7fc;
      }
    }
    else {
      if (bVar1 != 5) {
        if (uVar3 == 0xc0) {
          return;
        }
        func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
        goto code_r0x000100c8d7fc;
      }
      if (1 < uVar3 - 0xa0) {
        if (uVar3 == 0xa2) {
          return;
        }
        goto code_r0x000100c8d6f8;
      }
    }
    func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
  }
code_r0x000100c8d7fc:
  func_0x000107c61538();
  func_0x000100c8a830();
  return;
}



/* Entry: 1048a84ac; end: 1048a84ef;  */

void FUN_1048a84ac(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  func_0x00010085ad2c(auStack_68,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}


