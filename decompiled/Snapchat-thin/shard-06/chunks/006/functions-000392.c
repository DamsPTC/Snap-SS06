/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104a96544; end: 104a9659b;  */

long * FUN_104a96544(long *param_1,long *param_2)

{
  *param_1 = *param_2;
  *param_2 = 0x36;
  if (*param_1 == 0) {
    func_0x00010ae77b40(param_1);
  }
  return param_1;
}



/* Entry: 104a9659c; end: 104a9659f;  */

long * FUN_104a9659c(long *param_1,long *param_2)

{
  long *plVar1;
  uint uVar2;
  ulong auStack_40 [2];
  ulong auStack_30 [2];
  
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_1 + 0x28))(auStack_30);
    (**(code **)(*param_2 + 0x28))(auStack_40,param_2);
    uVar2 = (uint)(auStack_40[0] < auStack_30[0]);
    if (auStack_30[0] < auStack_40[0]) {
      uVar2 = 0xffffffff;
    }
    plVar1 = (long *)(ulong)uVar2;
    if (uVar2 == 0) {
      (**(code **)(*param_1 + 0x30))(param_1,param_2);
      plVar1 = param_1;
    }
    return plVar1;
  }
  func_0x00010bdaa910();
  uVar2 = (uint)(param_2 < param_1);
  if (param_1 < param_2) {
    uVar2 = 0xffffffff;
  }
  return (long *)(ulong)uVar2;
}



/* Entry: 104a965a0; end: 104a96623;  */

long * FUN_104a965a0(long *param_1,long *param_2)

{
  long *plVar1;
  uint uVar2;
  ulong auStack_40 [2];
  ulong auStack_30 [2];
  
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_1 + 0x28))(auStack_30);
    (**(code **)(*param_2 + 0x28))(auStack_40,param_2);
    uVar2 = (uint)(auStack_40[0] < auStack_30[0]);
    if (auStack_30[0] < auStack_40[0]) {
      uVar2 = 0xffffffff;
    }
    plVar1 = (long *)(ulong)uVar2;
    if (uVar2 == 0) {
      (**(code **)(*param_1 + 0x30))(param_1,param_2);
      plVar1 = param_1;
    }
    return plVar1;
  }
  func_0x00010bdaa910();
  uVar2 = (uint)(param_2 < param_1);
  if (param_1 < param_2) {
    uVar2 = 0xffffffff;
  }
  return (long *)(ulong)uVar2;
}



/* Entry: 104a96624; end: 104a96637;  */

uint FUN_104a96624(ulong param_1,ulong param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(param_2 < param_1);
  if (param_1 < param_2) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* Entry: 104a96638; end: 104a9670b;  */

long FUN_104a96638(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  
  uVar1 = param_1[1] & 0xff;
  if (*param_1 != 0) {
    uVar1 = param_1[1];
  }
  lVar2 = (long)param_1 + 9;
  if (*param_1 != 0) {
    lVar2 = param_1[2];
  }
  lVar3 = 0;
  do {
    lVar6 = lVar3;
    if (uVar1 + lVar6 == 0) break;
    lVar3 = lVar6 + -1;
  } while (*(char *)(lVar2 + uVar1 + -1 + lVar6) == '=');
  if ((ulong)-lVar6 < 3) {
    uVar1 = uVar1 + lVar6;
    if ((uVar1 & 3) != 1) {
      return (uVar1 >> 2) * 2 + (uVar1 >> 2) + (ulong)(byte)(&UNK_10dd52728)[uVar1 & 3];
    }
    pcVar5 = 
    "Base64 decoding failed. Input has a length of %zu (without padding), which is invalid.\n";
    uVar4 = 99;
  }
  else {
    pcVar5 = "Base64 decoding failed. Input has more than 2 paddings.";
    uVar4 = 0x5c;
  }
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/bin_decoder.cc"
                      ,uVar4,2,pcVar5);
  return 0;
}



/* Entry: 104a9670c; end: 104a969bf;  */

void FUN_104a9670c(ulong *param_1)

{
  ulong uVar1;
  char cVar2;
  ulong uVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  
  uVar3 = *param_1;
  uVar6 = param_1[1];
  if (uVar6 < uVar3) {
    return;
  }
  uVar5 = param_1[2];
  if (param_1[3] < uVar5) {
    return;
  }
  if ((uVar3 + 4 <= uVar6) && (uVar5 + 3 <= param_1[3])) {
    do {
      FUN_104a969c0(uVar3,4);
      if ((int)uVar3 == 0) {
        return;
      }
      *(byte *)param_1[2] =
           (byte)(&UNK_10dd5272c)[((byte *)*param_1)[1]] >> 4 |
           (&UNK_10dd5272c)[*(byte *)*param_1] << 2;
      *(byte *)(param_1[2] + 1) =
           (byte)(&UNK_10dd5272c)[*(byte *)(*param_1 + 2)] >> 2 |
           (&UNK_10dd5272c)[*(byte *)(*param_1 + 1)] << 4;
      *(undefined *)(param_1[2] + 2) =
           (&UNK_10dd5272c)[*(byte *)(*param_1 + 3)] |
           (&UNK_10dd5272c)[*(byte *)(*param_1 + 2)] << 6;
      uVar6 = param_1[1];
      uVar1 = param_1[2];
      uVar5 = uVar1 + 3;
      param_1[2] = uVar5;
      uVar8 = *param_1;
      uVar3 = uVar8 + 4;
      *param_1 = uVar3;
    } while ((uVar8 + 8 <= uVar6) && (uVar1 + 6 <= param_1[3]));
  }
  uVar6 = uVar6 - uVar3;
  if (uVar6 == 4) {
    if (*(char *)(uVar3 + 3) != '=') {
      return;
    }
    if (*(char *)(uVar3 + 2) == '=' && uVar5 + 1 <= param_1[3]) {
      FUN_104a969c0(uVar3,2);
      if ((int)uVar3 == 0) {
        return;
      }
      bVar4 = (byte)(&UNK_10dd5272c)[((byte *)*param_1)[1]] >> 4 |
              (&UNK_10dd5272c)[*(byte *)*param_1] << 2;
    }
    else {
      if (param_1[3] < uVar5 + 2) {
        return;
      }
      FUN_104a969c0(uVar3,3);
      if ((int)uVar3 == 0) {
        return;
      }
      cVar2 = (&UNK_10dd5272c)[*(byte *)*param_1];
      bVar4 = (&UNK_10dd5272c)[((byte *)*param_1)[1]];
      pbVar7 = (byte *)param_1[2];
      param_1[2] = (ulong)(pbVar7 + 1);
      *pbVar7 = bVar4 >> 4 | cVar2 << 2;
      bVar4 = (byte)(&UNK_10dd5272c)[*(byte *)(*param_1 + 2)] >> 2 |
              (&UNK_10dd5272c)[*(byte *)(*param_1 + 1)] << 4;
    }
    pbVar7 = (byte *)param_1[2];
    param_1[2] = (ulong)(pbVar7 + 1);
    *pbVar7 = bVar4;
    uVar6 = 4;
    goto LAB_104a969a0;
  }
  if (uVar6 < 2 || (char)param_1[4] == '\0') {
    return;
  }
  bVar4 = (&UNK_10dd52728)[uVar6];
  if (param_1[3] < uVar5 + bVar4) {
    return;
  }
  FUN_104a969c0(uVar3,uVar6);
  if ((int)uVar3 == 0) {
    return;
  }
  if (uVar6 == 2) {
LAB_104a96920:
    *(byte *)param_1[2] =
         (byte)(&UNK_10dd5272c)[((byte *)*param_1)[1]] >> 4 |
         (&UNK_10dd5272c)[*(byte *)*param_1] << 2;
  }
  else if (uVar6 == 3) {
    *(byte *)(param_1[2] + 1) =
         (byte)(&UNK_10dd5272c)[*(byte *)(*param_1 + 2)] >> 2 |
         (&UNK_10dd5272c)[*(byte *)(*param_1 + 1)] << 4;
    goto LAB_104a96920;
  }
  param_1[2] = param_1[2] + (ulong)bVar4;
LAB_104a969a0:
  *param_1 = *param_1 + uVar6;
  return;
}



/* Entry: 104a969c0; end: 104a96a63;  */

bool FUN_104a969c0(byte *param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  
  if (param_2 == 0) {
LAB_104a96a44:
    bVar2 = true;
  }
  else {
    if ((byte)(&UNK_10dd5272c)[*param_1] < 0x40) {
      uVar3 = 0;
      do {
        if (param_2 - 1 == uVar3) goto LAB_104a96a44;
        lVar1 = uVar3 + 1;
        uVar3 = uVar3 + 1;
      } while ((byte)(&UNK_10dd5272c)[param_1[lVar1]] < 0x40);
      bVar2 = param_2 <= uVar3;
    }
    else {
      bVar2 = false;
    }
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/bin_decoder.cc"
                        ,0x3d,2,
                        "Base64 decoding failed, invalid character \'%c\' in base64 input.\n");
  }
  return bVar2;
}



/* Entry: 104a96a64; end: 104a96cc3;  */

/* WARNING: Possible PIC construction at 0x000104a96c78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104a96c24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104a96c7c) */
/* WARNING: Removing unreachable block (ram,0x000104a96c90) */
/* WARNING: Removing unreachable block (ram,0x000104a96c98) */
/* WARNING: Removing unreachable block (ram,0x000104a96c28) */
/* WARNING: Removing unreachable block (ram,0x000104a96c34) */
/* WARNING: Removing unreachable block (ram,0x000104a96c3c) */
/* WARNING: Removing unreachable block (ram,0x000104a96c44) */

undefined1  [16]
FUN_104a96a64(undefined8 *param_1,long *param_2,long *param_3,undefined8 param_4,char *param_5)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  char *pcVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  long alStack_148 [8];
  long lStack_108;
  long *plStack_c0;
  long *plStack_b8;
  ulong uStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 uStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  ulong *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = (long *)((ulong)param_2[1] & 0xff);
  if (*param_2 != 0) {
    plVar4 = (long *)param_2[1];
  }
  plVar6 = param_3;
  func_0x0001005a7e6c(&puStack_58,param_3);
  if (((ulong)plVar4 & 3) == 1) {
    param_5 = 
    "Base64 decoding failed, input of grpc_chttp2_base64_decode_with_length has a length of %d, which has a tail of 1 byte.\n"
    ;
    plVar6 = (long *)0xd7;
    plStack_c0 = plVar4;
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/bin_decoder.cc"
                        ,0xd7,2,
                        "Base64 decoding failed, input of grpc_chttp2_base64_decode_with_length has a length of %d, which has a tail of 1 byte.\n"
                       );
    pcVar7 = (char *)puStack_58;
    if ((ulong *)0x1 < puStack_58) {
      do {
        uVar9 = *puStack_58;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puStack_58,0x10);
        if (bVar3) {
          *puStack_58 = uVar9 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar9 - 1 == 0) {
        (*(code *)puStack_58[1])();
        pcVar7 = (char *)puStack_58;
      }
    }
    func_0x0001004b8028(param_1);
LAB_104a96b9c:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      auVar14._8_8_ = plVar6;
      auVar14._0_8_ = pcVar7;
      return auVar14;
    }
  }
  else {
    plVar4 = (long *)(((ulong)plVar4 >> 2) * 2 + ((ulong)plVar4 >> 2) +
                     (ulong)(byte)(&UNK_10dd52728)[(ulong)plVar4 & 3]);
    if (plVar4 < param_3) {
      pcVar7 = 
      "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/bin_decoder.cc"
      ;
      param_5 = 
      "Base64 decoding failed, output_length %d is longer than the max possible output length %d.\n"
      ;
      plVar6 = (long *)0xe3;
      plStack_c0 = param_3;
      plStack_b8 = plVar4;
      goto code_r0x0001004686cc;
    }
    uStack_a8 = (long)param_2 + 9U;
    if (*param_2 != 0) {
      uStack_a8 = param_2[2];
    }
    uVar9 = param_2[1] & 0xff;
    if (*param_2 != 0) {
      uVar9 = param_2[1];
    }
    lStack_a0 = uStack_a8 + uVar9;
    lStack_98 = (long)&uStack_50 + 1;
    if (puStack_58 != (ulong *)0x0) {
      lStack_98 = lStack_48;
    }
    uVar9 = uStack_50 & 0xff;
    if (puStack_58 != (ulong *)0x0) {
      uVar9 = uStack_50;
    }
    lStack_90 = lStack_98 + uVar9;
    uStack_88 = 1;
    pcVar7 = (char *)&uStack_a8;
    FUN_104a9670c();
    if (((ulong)pcVar7 & 1) == 0) {
      lStack_78 = param_2[1];
      lStack_80 = *param_2;
      lStack_68 = param_2[3];
      lStack_70 = param_2[2];
      plVar4 = &lStack_80;
      func_0x000100619698();
      pcVar7 = 
      "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/bin_decoder.cc"
      ;
      param_5 = "Base64 decoding failed, input string:\n%s\n";
      plVar6 = (long *)0xf4;
      plStack_c0 = plVar4;
      goto code_r0x0001004686cc;
    }
    lVar5 = (long)&uStack_50 + 1;
    if (puStack_58 != (ulong *)0x0) {
      lVar5 = lStack_48;
    }
    uVar9 = uStack_50 & 0xff;
    if (puStack_58 != (ulong *)0x0) {
      uVar9 = uStack_50;
    }
    if (lStack_98 == lVar5 + uVar9) {
      uVar9 = (long)param_2 + 9U;
      if (*param_2 != 0) {
        uVar9 = param_2[2];
      }
      uVar1 = param_2[1] & 0xff;
      if (*param_2 != 0) {
        uVar1 = param_2[1];
      }
      if (uStack_a8 <= uVar9 + uVar1) {
        param_1[1] = uStack_50;
        *param_1 = puStack_58;
        param_1[3] = uStack_40;
        param_1[2] = lStack_48;
        goto LAB_104a96b9c;
      }
    }
    else {
      func_0x00010bdaa97c();
    }
    func_0x00010bdaa948();
  }
  ___stack_chk_fail();
code_r0x0001004686cc:
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = (long *)0x2;
  plVar10 = plVar6;
  func_0x0001004686b8();
  if ((int)plVar4 != 0) {
    plVar4 = alStack_148;
    func_0x000107c616d0(plVar4,0x40,param_5,&plStack_c0);
    if ((int)(uint)plVar4 < 0) {
      plVar10 = (long *)0x0;
      plVar4 = (long *)0x0;
    }
    else if ((uint)plVar4 < 0x40) {
      plVar4 = (long *)0x0;
      plVar10 = alStack_148;
    }
    else {
      plVar4 = (long *)(((ulong)plVar4 & 0xffffffff) + 1);
      func_0x000100460200();
      func_0x000107c616d0();
      plVar10 = plVar4;
    }
    FUN_104a6e9e0(pcVar7,plVar6,2,plVar10);
    func_0x000100460314();
    plVar10 = plVar6;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    auVar11._8_8_ = plVar10;
    auVar11._0_8_ = plVar4;
    return auVar11;
  }
  func_0x000107c60e78();
  if ((ulong)plVar10 >> 0x3d == 0) {
    lVar5 = (long)plVar10 << 3;
    func_0x000107c60e20(lVar5);
    auVar12._8_8_ = plVar10;
    auVar12._0_8_ = lVar5;
    return auVar12;
  }
  FUN_104a7757c();
  lVar5 = plVar4[1];
  lVar8 = plVar4[2];
  while (lVar8 != lVar5) {
    plVar4[2] = lVar8 + -8;
    plVar6 = *(long **)(lVar8 + -8);
    *(undefined8 *)(lVar8 + -8) = 0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    lVar8 = plVar4[2];
  }
  if (*plVar4 != 0) {
    func_0x000107c60e14();
  }
  auVar13._8_8_ = plVar10;
  auVar13._0_8_ = plVar4;
  return auVar13;
}



/* Entry: 104a96cc4; end: 104a96ccb;  */

undefined1  [16]
FUN_104a96cc4(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long alStack_88 [8];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = (long *)0x2;
  uVar4 = param_2;
  func_0x0001004686b8();
  if ((int)plVar1 != 0) {
    plVar1 = alStack_88;
    func_0x000107c616d0(plVar1,0x40,param_4,&stack0x00000000);
    if ((int)(uint)plVar1 < 0) {
      plVar3 = (long *)0x0;
      plVar1 = (long *)0x0;
    }
    else if ((uint)plVar1 < 0x40) {
      plVar1 = (long *)0x0;
      plVar3 = alStack_88;
    }
    else {
      plVar1 = (long *)(((ulong)plVar1 & 0xffffffff) + 1);
      func_0x000100460200();
      func_0x000107c616d0();
      plVar3 = plVar1;
    }
    FUN_104a6e9e0(param_1,param_2,2,plVar3);
    func_0x000100460314();
    uVar4 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar6._8_8_ = uVar4;
    auVar6._0_8_ = plVar1;
    return auVar6;
  }
  func_0x000107c60e78();
  if (uVar4 >> 0x3d == 0) {
    lVar2 = uVar4 << 3;
    func_0x000107c60e20(lVar2);
    auVar7._8_8_ = uVar4;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
  FUN_104a7757c();
  lVar2 = plVar1[1];
  lVar5 = plVar1[2];
  while (lVar5 != lVar2) {
    plVar1[2] = lVar5 + -8;
    plVar3 = *(long **)(lVar5 + -8);
    *(undefined8 *)(lVar5 + -8) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    lVar5 = plVar1[2];
  }
  if (*plVar1 != 0) {
    func_0x000107c60e14();
  }
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = plVar1;
  return auVar8;
}



/* Entry: 104a96ccc; end: 104a96f1b;  */

void FUN_104a96ccc(long *param_1,long *param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  uint *puVar7;
  uint *puVar8;
  ulong uVar9;
  byte *pbVar10;
  uint *puVar11;
  undefined1 *puVar12;
  byte *pbVar13;
  long lVar14;
  ulong uVar15;
  uint uStack_70;
  uint uStack_6c;
  byte *pbStack_68;
  
  puVar7 = &uStack_70;
  puVar8 = &uStack_70;
  uVar6 = param_2[1] & 0xff;
  if (*param_2 != 0) {
    uVar6 = param_2[1];
  }
  uVar15 = uVar6 / 3;
  lVar14 = uVar6 - (uVar15 * 2 + uVar6 / 3);
  uVar9 = ((ulong)(byte)(&UNK_10dd5282c)[lVar14] + uVar15 * 4) * 0xb;
  puVar11 = (uint *)(uVar9 >> 3);
  if ((uVar9 & 7) != 0) {
    puVar11 = (uint *)((long)puVar11 + 1);
  }
  func_0x0001005a7e6c(param_1);
  pbVar10 = (byte *)((long)param_2 + 9);
  if (*param_2 != 0) {
    pbVar10 = (byte *)param_2[2];
  }
  pbVar4 = (byte *)((long)param_1 + 9);
  if (*param_1 != 0) {
    pbVar4 = (byte *)param_1[2];
  }
  uStack_70 = 0;
  uStack_6c = 0;
  pbStack_68 = pbVar4;
  if (2 < uVar6) {
    if (uVar15 < 2) {
      uVar15 = 1;
    }
    do {
      FUN_104a96f1c(&uStack_70,*pbVar10 >> 2,pbVar10[1] >> 4 | (*pbVar10 & 3) << 4);
      param_3 = (ulong)((uint)(pbVar10[2] >> 6) | (pbVar10[1] & 0xf) << 2);
      param_4 = (ulong)(pbVar10[2] & 0x3f);
      puVar11 = &uStack_70;
      FUN_104a96f1c();
      pbVar10 = pbVar10 + 3;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  if (lVar14 == 2) {
    param_3 = (ulong)(*pbVar10 >> 2);
    param_4 = (ulong)((uint)(pbVar10[1] >> 4) | (*pbVar10 & 3) << 4);
    FUN_104a96f1c();
    lVar14 = ((ulong)pbVar10[1] & 0xf) * 0x10;
    uStack_70 = uStack_70 << (ulong)((byte)(&UNK_10dd52832)[lVar14] & 0x1f) |
                (uint)*(ushort *)(&UNK_10dd52830 + lVar14);
    uStack_6c = uStack_6c + (byte)(&UNK_10dd52832)[lVar14];
    while (8 < uStack_6c) {
      uStack_6c = uStack_6c - 8;
      *pbStack_68 = (byte)(uStack_70 >> (ulong)(uStack_6c & 0x1f));
      pbStack_68 = pbStack_68 + 1;
    }
    pbVar13 = pbVar10 + 2;
  }
  else {
    puVar8 = puVar11;
    pbVar13 = pbVar10;
    if (lVar14 == 1) {
      pbVar13 = pbVar10 + 1;
      param_3 = (ulong)(*pbVar10 >> 2);
      param_4 = (ulong)((*pbVar10 & 3) << 4);
      FUN_104a96f1c();
      puVar8 = puVar7;
    }
  }
  pbVar10 = pbStack_68;
  if (uStack_6c != 0) {
    pbVar10 = pbStack_68 + 1;
    *pbStack_68 = (byte)(uStack_70 << (ulong)(8 - uStack_6c & 0x1f)) |
                  (byte)(0xff >> (ulong)(uStack_6c & 0x1f));
  }
  lVar14 = *param_1;
  pbVar5 = (byte *)((long)param_1 + 9);
  if (lVar14 != 0) {
    pbVar5 = (byte *)param_1[2];
  }
  uVar6 = param_1[1] & 0xff;
  if (lVar14 != 0) {
    uVar6 = param_1[1];
  }
  if (pbVar5 + uVar6 < pbVar10) {
    func_0x00010bdaaa18();
  }
  else {
    if (lVar14 == 0) {
      *(char *)(param_1 + 1) = (char)((long)pbVar10 - (long)pbVar4);
    }
    else {
      param_1[1] = (long)pbVar10 - (long)pbVar4;
    }
    pbVar10 = (byte *)((long)param_2 + 9);
    if (*param_2 != 0) {
      pbVar10 = (byte *)param_2[2];
    }
    uVar6 = param_2[1] & 0xff;
    if (*param_2 != 0) {
      uVar6 = param_2[1];
    }
    if (pbVar13 == pbVar10 + uVar6) {
      return;
    }
  }
  func_0x00010bdaaa4c();
  lVar14 = (param_3 & 0xffffffff) * 4;
  lVar1 = (param_4 & 0xffffffff) * 4;
  uVar2 = (uint)(byte)(&UNK_10dd52832)[lVar1] + (uint)(byte)(&UNK_10dd52832)[lVar14];
  uVar3 = puVar8[1] + uVar2;
  *puVar8 = (uint)*(ushort *)(&UNK_10dd52830 + lVar14) <<
            (ulong)((byte)(&UNK_10dd52832)[lVar1] & 0x1f) |
            (uint)*(ushort *)(&UNK_10dd52830 + lVar1) | *puVar8 << (ulong)(uVar2 & 0x1f);
  puVar8[1] = uVar3;
  while (8 < uVar3) {
    puVar8[1] = uVar3 - 8;
    puVar12 = *(undefined1 **)(puVar8 + 2);
    *(undefined1 **)(puVar8 + 2) = puVar12 + 1;
    *puVar12 = (char)(*puVar8 >> (ulong)(uVar3 - 8 & 0x1f));
    uVar3 = puVar8[1];
  }
  return;
}



/* Entry: 104a96f1c; end: 104a96f9b;  */

void FUN_104a96f1c(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  
  uVar1 = (uint)(byte)(&UNK_10dd52832)[(ulong)param_3 * 4] +
          (uint)(byte)(&UNK_10dd52832)[(ulong)param_2 * 4];
  uVar2 = param_1[1] + uVar1;
  *param_1 = (uint)*(ushort *)(&UNK_10dd52830 + (ulong)param_2 * 4) <<
             (ulong)((byte)(&UNK_10dd52832)[(ulong)param_3 * 4] & 0x1f) |
             (uint)*(ushort *)(&UNK_10dd52830 + (ulong)param_3 * 4) |
             *param_1 << (ulong)(uVar1 & 0x1f);
  param_1[1] = uVar2;
  while (8 < uVar2) {
    param_1[1] = uVar2 - 8;
    puVar3 = *(undefined1 **)(param_1 + 2);
    *(undefined1 **)(param_1 + 2) = puVar3 + 1;
    *puVar3 = (char)(*param_1 >> (ulong)(uVar2 - 8 & 0x1f));
    uVar2 = param_1[1];
  }
  return;
}



/* Entry: 104a96f9c; end: 104a97273;  */

long FUN_104a96f9c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 uVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_31;
  ulong uStack_30;
  undefined8 *puStack_28;
  
  plVar5 = *(long **)(param_1 + 0xce8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar5 + 8))();
    }
    *(undefined8 *)(param_1 + 0xce8) = 0;
  }
  FUN_104aba638(*(undefined8 *)(param_1 + 0x10));
  func_0x00010061ce28(param_1 + 0x630);
  func_0x00010061ce28(param_1 + 0x310);
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  FUN_104ab5920(&uStack_30,2,"Transport destroyed",0x13,&uStack_31,&uStack_50);
  puStack_28 = &uStack_50;
  func_0x000100482b64(&puStack_28);
  uVar6 = *(undefined8 *)(param_1 + 0xce0);
  uStack_58 = uStack_30;
  if ((uStack_30 & 1) != 0) {
    piVar7 = (int *)(uStack_30 - 1);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar3) {
        *piVar7 = *piVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_104a9bf88(uVar6,0,&uStack_58);
  if ((uStack_58 & 1) != 0) {
    func_0x00010084dad0();
  }
  *(undefined8 *)(param_1 + 0xce0) = 0;
  func_0x00010061ce28(param_1 + 0x1a0);
  FUN_104a9c9c4(param_1 + 0x988);
  lVar8 = 0;
  while( true ) {
    if (*(long *)(param_1 + lVar8 + 0xa8) != 0) {
      uVar6 = 0x102;
      goto LAB_104a97200;
    }
    if (*(long *)(param_1 + lVar8 + 0xb0) != 0) break;
    lVar8 = lVar8 + 0x10;
    if (lVar8 == 0x50) {
      lVar8 = param_1 + 0xf8;
      func_0x0001008ded94();
      if (lVar8 == 0) {
        FUN_104aa7a9c(param_1 + 0xf8);
        FUN_104aba46c(*(undefined8 *)(param_1 + 0x78));
        uStack_70 = 0;
        uStack_68 = 0;
        uStack_78 = 0;
        FUN_104ab5920(&uStack_60,2,"Transport destroyed",0x13,&uStack_31,&uStack_78);
        FUN_104a97274(param_1,&uStack_60);
        if ((uStack_60 & 1) != 0) {
          func_0x00010084dad0();
        }
        puStack_28 = &uStack_78;
        func_0x000100482b64(&puStack_28);
        lVar8 = *(long *)(param_1 + 0xac8);
        while (lVar8 != 0) {
          lVar9 = *(long *)(lVar8 + 0x10);
          func_0x000100460314(lVar8);
          *(long *)(param_1 + 0xac8) = lVar9;
          lVar8 = lVar9;
        }
        func_0x000100460314(*(undefined8 *)(param_1 + 0x8c0));
        if (pcRam00000001136a1e00 != (code *)0x0) {
          (*pcRam00000001136a1e00)();
        }
        if ((uStack_30 & 1) != 0) {
          func_0x00010084dad0();
        }
        plVar5 = *(long **)(param_1 + 0xce8);
        if (plVar5 != (long *)0x0) {
          plVar1 = plVar5 + 1;
          do {
            lVar8 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar8 + -1 == 0) {
            (**(code **)(*plVar5 + 8))();
          }
        }
        if ((*(ulong *)(param_1 + 0xb38) & 1) != 0) {
          func_0x00010084dad0();
        }
        FUN_104a9f850(param_1 + 0x8d8);
        if ((*(ulong *)(param_1 + 0x760) & 1) != 0) {
          func_0x00010084dad0();
        }
        FUN_104a9a658(param_1 + 0x438);
        FUN_104add5e8(param_1 + 0x2e0);
        if ((*(ulong *)(param_1 + 0x98) & 1) != 0) {
          func_0x00010084dad0();
        }
        FUN_104acb218(param_1 + 0x58);
        func_0x000100741660(param_1 + 0x40);
        func_0x000100487bf4(param_1 + 0x30);
        if (*(char *)(param_1 + 0x2f) < '\0') {
          __ZdlPv(*(undefined8 *)(param_1 + 0x18));
        }
        return param_1;
      }
      uVar6 = 0x108;
LAB_104a97200:
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                          ,uVar6,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x104a97224);
      (*pcVar4)();
    }
  }
  uVar6 = 0x103;
  goto LAB_104a97200;
}



/* Entry: 104a97274; end: 104a9737b;  */

void FUN_104a97274(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  int *piVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong uStack_60;
  ulong uStack_58;
  
  if (*param_2 != 0) {
    lVar7 = 0;
    do {
      uVar6 = *param_2;
      if ((uVar6 & 1) != 0) {
        piVar4 = (int *)(uVar6 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar2) {
            *piVar4 = *piVar4 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      plVar5 = (long *)(param_1 + 0x7f0 + lVar7 * 0x10);
      plVar8 = (long *)*plVar5;
      uStack_60 = uVar6;
      if (plVar8 != (long *)0x0) {
        piVar4 = (int *)(uVar6 - 1);
        do {
          if (plVar8[3] == 0) {
            if ((uVar6 & 1) != 0) {
              do {
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
                if (bVar2) {
                  *piVar4 = *piVar4 + 1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
            }
            puVar3 = &uStack_58;
            uStack_58 = uVar6;
            func_0x0001004bd890();
            plVar8[3] = (long)puVar3;
            if ((uStack_58 & 1) != 0) {
              func_0x00010084dad0();
            }
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      if ((uVar6 & 1) != 0) {
        func_0x00010084dad0(uVar6);
      }
      func_0x00010076f2bc(&uStack_58,plVar5);
      lVar7 = lVar7 + 1;
    } while (lVar7 != 3);
    return;
  }
  func_0x00010bdaaa80();
  FUN_104bd46a0();
  FUN_104bd46a0();
  func_0x0001004bdf74(&uStack_58);
  func_0x0001004bdf74(&uStack_60);
  __Unwind_Resume();
  plVar5 = *(long **)(param_1 + 0x10);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = *plVar5 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return;
}



/* Entry: 104a9737c; end: 104a97393;  */

void FUN_104a9737c(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x10);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = *plVar3 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return;
}



/* Entry: 104a97394; end: 104a9762f;  */

long FUN_104a97394(long param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uStack_30;
  undefined1 uStack_21;
  
  func_0x000104aa7a8c(*(undefined8 *)(param_1 + 8),param_1);
  func_0x000104aa7a4c(*(undefined8 *)(param_1 + 8),param_1);
  lVar6 = *(long *)(*(long *)(param_1 + 8) + 0xce8);
  if (lVar6 != 0) {
    if (*(char *)(*(long *)(param_1 + 8) + 0x628) == '\0') {
      if (*(char *)(param_1 + 0x16e) == '\0') goto LAB_104a973ec;
LAB_104a973dc:
      plVar7 = (long *)(lVar6 + 0x40);
    }
    else {
      if (*(char *)(param_1 + 0x16d) != '\0') goto LAB_104a973dc;
LAB_104a973ec:
      plVar7 = (long *)(lVar6 + 0x48);
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if ((*(char *)(param_1 + 0x168) == '\0') || (*(char *)(param_1 + 0x169) == '\0')) {
    if (*(int *)(param_1 + 0x9c) != 0) {
      uVar5 = 0x2c8;
      goto LAB_104a975fc;
    }
  }
  else if (*(int *)(param_1 + 0x9c) != 0) {
    lVar6 = *(long *)(param_1 + 8) + 0xf8;
    func_0x000104aa7b24();
    if (lVar6 != 0) {
      uVar5 = 0x2ca;
      goto LAB_104a975fc;
    }
  }
  func_0x00010061ce28(param_1 + 0x5a0);
  uVar8 = 0;
  do {
    if ((*(byte *)(param_1 + 0x98 + (uVar8 >> 3)) >> (ulong)((uint)uVar8 & 0x1f) & 1) != 0) {
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                          ,0x2d1,2,"%s stream %d still included in list %d");
      goto LAB_104a97598;
    }
    uVar1 = (uint)uVar8 + 1;
    uVar8 = (ulong)uVar1;
  } while (uVar1 != 5);
  if (*(long *)(param_1 + 0xa8) == 0) {
    if (*(long *)(param_1 + 0xc0) == 0) {
      if (*(long *)(param_1 + 0xf0) == 0) {
        if (*(long *)(param_1 + 0x118) == 0) {
          if (*(long *)(param_1 + 0x128) == 0) {
            func_0x00010061ce28(param_1 + 0x728);
            lVar6 = *(long *)(param_1 + 8);
            plVar7 = (long *)(lVar6 + 8);
            do {
              lVar9 = *plVar7;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar3) {
                *plVar7 = lVar9 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((lVar6 != 0) && (lVar9 == 1)) {
              FUN_104a96f9c();
              __ZdlPv();
            }
            uStack_30 = 0;
            func_0x0001004bd7e8(&uStack_21,*(undefined8 *)(param_1 + 0x40),&uStack_30);
            if ((uStack_30 & 1) != 0) {
              func_0x00010084dad0();
            }
            if (0 < *(long *)(param_1 + 0x710)) {
              *(long *)(*(long *)(param_1 + 0x6f8) + 8) =
                   *(long *)(*(long *)(param_1 + 0x6f8) + 8) - *(long *)(param_1 + 0x710);
            }
            if ((*(ulong *)(param_1 + 0x6d8) & 1) != 0) {
              func_0x00010084dad0();
            }
            func_0x0001004e2bc8(param_1 + 0x398);
            func_0x0001004e2bc8(param_1 + 400);
            if ((*(ulong *)(param_1 + 0x178) & 1) != 0) {
              func_0x00010084dad0();
            }
            if ((*(ulong *)(param_1 + 0x170) & 1) != 0) {
              func_0x00010084dad0();
            }
            return param_1;
          }
          uVar5 = 0x2db;
        }
        else {
          uVar5 = 0x2da;
        }
      }
      else {
        uVar5 = 0x2d9;
      }
    }
    else {
      uVar5 = 0x2d8;
    }
  }
  else {
    uVar5 = 0x2d7;
  }
LAB_104a975fc:
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                      ,uVar5,2,"assertion failed: %s");
LAB_104a97598:
  _abort();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x104a975a0);
  (*pcVar4)();
}



/* Entry: 104a97630; end: 104a976d3;  */

long FUN_104a97630(long param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lStack_28;
  
  if (*(code **)(param_1 + 0x2d0) == (code *)0x0) {
    lStack_28 = 0;
  }
  else {
    lStack_28 = 0;
    if (*(long *)(param_1 + 0x2c8) != 0) {
      func_0x00010bdaab9c();
      if ((*(long *)(param_1 + 0x98) == 0) && (func_0x0001008df064(), (int)param_1 != 0)) {
        plVar3 = *(long **)(param_2 + 0x10);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar2) {
            *plVar3 = *plVar3 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      return param_1;
    }
    *(long **)(param_1 + 0x2c8) = &lStack_28;
    (**(code **)(param_1 + 0x2d0))(*(undefined8 *)(param_1 + 0x2d8),param_1,param_2 & 0xffffffff);
    *(undefined8 *)(param_1 + 0x2c8) = 0;
  }
  return lStack_28;
}



/* Entry: 104a976d4; end: 104a97b3f;  */

void FUN_104a976d4(long param_1,int param_2,undefined4 param_3,long *param_4,long param_5)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  double dVar7;
  undefined1 auStack_c8 [16];
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  undefined8 *apuStack_a0 [2];
  char cStack_89;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_69;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined4 uStack_44;
  
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  uStack_44 = param_3;
  FUN_104ab5920(&uStack_68,2,"GOAWAY received",0xf,&uStack_69,&uStack_88);
  FUN_104abaa50(&uStack_60,&uStack_68,7,param_2);
  FUN_104abaa50(&uStack_58,&uStack_60,3,0xe);
  func_0x00010084caf8(&uStack_50,&uStack_58,6,param_4,param_5);
  uVar3 = *(ulong *)(param_1 + 0x760);
  if (uStack_50 == uVar3) {
LAB_104a97790:
    if ((uVar3 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  else {
    *(ulong *)(param_1 + 0x760) = uStack_50;
    uStack_50 = 0x36;
    if ((uVar3 & 1) != 0) {
      func_0x00010084dad0();
      uVar3 = uStack_50;
      goto LAB_104a97790;
    }
  }
  if ((uStack_58 & 1) != 0) {
    func_0x00010084dad0();
  }
  if ((uStack_60 & 1) != 0) {
    func_0x00010084dad0();
  }
  if ((uStack_68 & 1) != 0) {
    func_0x00010084dad0();
  }
  apuStack_a0[0] = &uStack_88;
  func_0x000100482b64(apuStack_a0);
  if (param_2 != 0) {
    uStack_a8 = *(ulong *)(param_1 + 0x760);
    if ((uStack_a8 & 1) != 0) {
      piVar5 = (int *)(uStack_a8 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = *piVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_104aba950(apuStack_a0,&uStack_a8);
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                        ,0x461,1,"%s: Got goaway [%d] err=%s");
    if (cStack_89 < '\0') {
      __ZdlPv(apuStack_a0[0]);
    }
    if ((uStack_a8 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  if (*(char *)(param_1 + 0x628) != '\0') {
    uVar3 = *(ulong *)(param_1 + 0x760);
    if ((uVar3 & 1) != 0) {
      piVar5 = (int *)(uVar3 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = *piVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uStack_b0 = uVar3;
    FUN_104a97b40(param_1,&uStack_b0);
    if ((uVar3 & 1) != 0) {
      func_0x00010084dad0(uVar3);
    }
    FUN_104aa7c14(param_1 + 0xf8,FUN_104a9adb4,&uStack_44);
  }
  uStack_b8 = *(ulong *)(param_1 + 0x760);
  if ((uStack_b8 & 1) != 0) {
    piVar5 = (int *)(uStack_b8 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = *piVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_104addac4(&uStack_50,&uStack_b8);
  if ((uStack_b8 & 1) != 0) {
    func_0x00010084dad0();
  }
  if ((((param_2 != 0xb) || (*(char *)(param_1 + 0x628) == '\0')) || (param_5 != 0xe)) ||
     (*param_4 != 0x796e616d5f6f6f74 || *(long *)((long)param_4 + 6) != 0x73676e69705f796e))
  goto LAB_104a97938;
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                      ,0x47e,2,
                      "Received a GOAWAY with error code ENHANCE_YOUR_CALM and debug data equal to \"too_many_pings\""
                     );
  lVar6 = *(long *)(param_1 + 0xcc8);
  if (lVar6 < 0x40000000) {
    lVar4 = -0x8000000000000000;
    if (lVar6 != -0x8000000000000000) {
      dVar7 = (((double)lVar6 + (double)lVar6) / 1000.0) * 1000.0;
      if (9.223372036854776e+18 <= dVar7) goto LAB_104a979ac;
      if (-9.223372036854776e+18 < dVar7) {
        lVar4 = (long)dVar7;
      }
    }
  }
  else {
LAB_104a979ac:
    lVar4 = 0x7fffffffffffffff;
  }
  *(long *)(param_1 + 0xcc8) = lVar4;
  __ZNSt3__19to_stringEx(apuStack_a0);
  func_0x00010084cd08(auStack_c8,apuStack_a0);
  func_0x00010084ced4(&uStack_50,"grpc.internal.keepalive_throttling",0x22,auStack_c8);
  func_0x00010084d204(auStack_c8);
  if (cStack_89 < '\0') {
    __ZdlPv(apuStack_a0[0]);
  }
LAB_104a97938:
  if (cRam00000001136a1e08 == '\0') {
    func_0x0001004c0918(param_1 + 0x2e0,3,&uStack_50,"got_goaway");
  }
  if ((uStack_50 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104a97b40; end: 104a97bef;  */

void FUN_104a97b40(ulong param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  ulong uVar4;
  ulong uStack_40;
  long lStack_38;
  
  uVar4 = param_1;
  func_0x0001008deda0(param_1,&lStack_38);
  if ((int)uVar4 != 0) {
    do {
      *(uint *)(lStack_38 + 0x398) = *(uint *)(lStack_38 + 0x398) | 0x1000000;
      *(undefined1 *)(lStack_38 + 0x3d0) = 0;
      uVar4 = *param_2;
      if ((uVar4 & 1) != 0) {
        piVar3 = (int *)(uVar4 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar2) {
            *piVar3 = *piVar3 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      uStack_40 = uVar4;
      FUN_104a989e8(param_1,lStack_38,&uStack_40);
      if ((uVar4 & 1) != 0) {
        func_0x00010084dad0(uVar4);
      }
      uVar4 = param_1;
      func_0x0001008deda0(param_1,&lStack_38);
    } while ((uVar4 & 1) != 0);
  }
  return;
}



/* Entry: 104a97bf0; end: 104a97c7f;  */

void FUN_104a97bf0(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uStack_28;
  
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  *(code **)(param_1 + 0x898) = FUN_104a97c80;
  *(long *)(param_1 + 0x8a0) = param_1;
  *(undefined8 *)(param_1 + 0x8a8) = 0;
  uStack_28 = *param_2;
  if ((uStack_28 & 1) != 0) {
    piVar4 = (int *)(uStack_28 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  func_0x00010074775c(uVar3,param_1 + 0x890,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104a97c80; end: 104a97d63;  */

void FUN_104a97c80(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  *(undefined1 *)(param_1 + 0x880) = 0;
  if (*param_2 == 0) {
    func_0x0001007474b0(param_1,5);
  }
  plVar1 = (long *)(param_1 + 8);
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 == 0) {
    FUN_104a96f9c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 104a97d64; end: 104a97eff;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_104a97d64(long param_1)

{
  int iVar1;
  ulong auStack_80 [4];
  ulong auStack_60 [4];
  undefined1 uStack_39;
  ulong uStack_38;
  ulong uStack_30;
  ulong *puStack_28;
  
  iVar1 = *(int *)(param_1 + 0x8d0);
  *(int *)(param_1 + 0x8d0) = iVar1 + 1;
  if (*(int *)(param_1 + 0x82c) <= iVar1 && *(int *)(param_1 + 0x82c) != 0) {
    auStack_60[2] = 0;
    auStack_60[3] = 0;
    auStack_60[1] = 0;
    FUN_104ab5920(&uStack_38,2,"too_many_pings",0xe,&uStack_39,auStack_60 + 1);
    FUN_104abaa50(&uStack_30,&uStack_38,7,0xb);
    FUN_104a97f00(param_1,&uStack_30,1);
    if ((uStack_30 & 1) != 0) {
      func_0x00010084dad0();
    }
    if ((uStack_38 & 1) != 0) {
      func_0x00010084dad0();
    }
    puStack_28 = auStack_60 + 1;
    func_0x000100482b64(&puStack_28);
    auStack_80[1] = 0;
    auStack_80[2] = 0;
    auStack_80[0] = 0;
    FUN_104ab5920(auStack_80 + 3,2,"Too many pings",0xe,&uStack_39,auStack_80);
    FUN_104abaa50(auStack_60,auStack_80 + 3,3,0xe);
    FUN_104a98258(param_1,auStack_60);
    if ((auStack_60[0] & 1) != 0) {
      func_0x00010084dad0();
    }
    if ((auStack_80[3] & 1) != 0) {
      func_0x00010084dad0();
    }
    puStack_28 = auStack_80;
    func_0x000100482b64(&puStack_28);
  }
  return;
}



/* Entry: 104a97f00; end: 104a98257;  */

/* WARNING: Removing unreachable block (ram,0x000104a980f4) */

void FUN_104a97f00(long *param_1,ulong *param_2,ulong param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 **ppuVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  ulong *puVar12;
  int *piVar13;
  uint uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uStack_1c0;
  undefined1 uStack_1b1;
  ulong *puStack_1b0;
  long *plStack_1a8;
  undefined1 **ppuStack_1a0;
  code *pcStack_198;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long *plStack_148;
  long *plStack_140;
  ulong uStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  long *plStack_120;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  ulong uStack_f8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  long *plStack_b0;
  undefined1 *puStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  ulong uStack_88;
  ulong uStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long lStack_68;
  int iStack_5c;
  undefined1 auStack_58 [32];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_78 = (long *)0x0;
  uStack_70 = 0;
  lStack_68 = 0;
  uStack_80 = *param_2;
  if ((uStack_80 & 1) != 0) {
    piVar13 = (int *)(uStack_80 - 1);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar3) {
        *piVar13 = *piVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000100831658(&uStack_80,0x7fffffffffffffff,0,&plStack_78,&iStack_5c,0);
  if ((uStack_80 & 1) != 0) {
    func_0x00010084dad0();
  }
  if ((((char)param_1[0xc5] == '\0') && (iStack_5c == 0)) && ((param_3 & 1) == 0)) {
    if (*(uint *)(param_1 + 0xed) == 0) {
      puVar6 = (undefined8 *)0x90;
      __Znwm();
      plVar11 = puVar6 + 1;
      *plVar11 = 1;
      *puVar6 = &PTR_FUN_1107c4178;
      puVar6[2] = param_1;
      *(undefined4 *)(param_1 + 0xed) = 1;
      plVar10 = param_1 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = *plVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      func_0x0001004b8028(auStack_58);
      func_0x000104a9cd04(0x7fffffff,0,auStack_58,param_1 + 0xc6);
      puVar6[4] = FUN_104a9ae54;
      puVar6[5] = puVar6;
      puVar6[6] = 0;
      FUN_104a9a3ac(param_1,0,puVar6 + 3);
      plVar10 = param_1;
      func_0x0001007474b0(param_1,7);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = *plVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      func_0x000100460dc4();
      lVar7 = *plVar10;
      func_0x0001004671a4();
      if (lVar7 == -0x8000000000000000) {
        lVar7 = -0x8000000000000000;
      }
      else {
        lVar1 = 0x7fffffffffffffff;
        if (lVar7 < 0x7fffffffffffb1e0) {
          lVar1 = lVar7 + 20000;
        }
        if (lVar7 != 0x7fffffffffffffff) {
          lVar7 = lVar1;
        }
      }
      puVar6[0xf] = FUN_104a9aec4;
      puVar6[0x10] = puVar6;
      puVar6[0x11] = 0;
      func_0x000100480ee4(puVar6 + 7,lVar7,puVar6 + 0xe);
    }
  }
  else if (*(uint *)(param_1 + 0xed) < 2) {
    plVar10 = param_1 + 3;
    if (*(char *)((long)param_1 + 0x2f) < '\0') {
      plVar10 = (long *)*plVar10;
    }
    uStack_88 = *param_2;
    if ((uStack_88 & 1) != 0) {
      piVar13 = (int *)(uStack_88 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar3) {
          *piVar13 = *piVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_104aba950(auStack_58,&uStack_88);
    plStack_b0 = plVar10;
    puStack_a8 = auStack_58;
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                        ,0x728,0,"%s: Sending goaway err=%s");
    if ((uStack_88 & 1) != 0) {
      func_0x00010084dad0();
    }
    *(undefined4 *)(param_1 + 0xed) = 2;
    lVar7 = param_1[0xfd];
    uStack_98 = uStack_70;
    plStack_a0 = plStack_78;
    lStack_90 = lStack_68;
    plStack_78 = (long *)0x0;
    uStack_70 = 0;
    lStack_68 = 0;
    func_0x0001004da2c8(auStack_58,&plStack_a0);
    func_0x000104a9cd04((int)lVar7,iStack_5c,auStack_58,param_1 + 0xc6);
    if (lStack_90 < 0) {
      __ZdlPv(plStack_a0);
    }
  }
  puVar12 = (ulong *)0x7;
  func_0x0001007474b0();
  if (lStack_68 < 0) {
    param_1 = plStack_78;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if ((int)puVar12 != 0) {
    FUN_104bd46a0();
    func_0x0001004bdf74(&uStack_80);
    if (lStack_68 < 0) {
      __ZdlPv(plStack_78);
    }
  }
  __Unwind_Resume();
  pcStack_b8 = FUN_104a98258;
  puVar6 = (undefined8 *)*puVar12;
  uVar16 = (ulong)puVar6 & 1;
  puStack_130 = puVar6;
  puStack_c0 = &stack0xfffffffffffffff0;
  if (((ulong)puVar6 & 1) == 0) {
    if ((char)param_1[0xc5] == '\0') {
LAB_104a982d0:
      uVar9 = 0;
      puStack_100 = puVar6;
      FUN_104addc9c();
      if ((uVar9 & 1) == 0) {
        if (uVar16 != 0) {
          piVar13 = (int *)((long)puVar6 + -1);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
            if (bVar3) {
              *piVar13 = *piVar13 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        ppuVar8 = &puStack_108;
        puStack_108 = puVar6;
        func_0x00010084d7f0(ppuVar8,7,&uStack_f8);
        uVar14 = (uint)ppuVar8 ^ 1;
        if (((ulong)puStack_108 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      else {
        uVar14 = 0;
      }
      if (((ulong)puStack_100 & 1) != 0) {
        func_0x00010084dad0();
      }
      if (uVar14 != 0) {
        if (uVar16 != 0) {
          piVar13 = (int *)((long)puVar6 + -1);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
            if (bVar3) {
              *piVar13 = *piVar13 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        puStack_110 = puVar6;
        FUN_104abaa50(&puStack_128,&puStack_110,3,0xe);
        puVar15 = puStack_128;
        puVar5 = puVar6;
        if (puStack_128 == puVar6) {
joined_r0x000104a98398:
          puVar15 = puVar5;
          if (((ulong)puVar6 & 1) != 0) {
            func_0x00010084dad0(puVar6);
          }
        }
        else {
          puStack_130 = puStack_128;
          puStack_128 = (undefined8 *)0x36;
          if (uVar16 != 0) {
            func_0x00010084dad0(puVar6);
            puVar5 = puVar15;
            puVar6 = puStack_128;
            goto joined_r0x000104a98398;
          }
        }
        if (((ulong)puStack_110 & 1) != 0) {
          func_0x00010084dad0();
        }
        uVar16 = (ulong)puVar15 & 1;
        puVar6 = puVar15;
      }
    }
    if (uVar16 != 0) goto LAB_104a983c0;
    bVar3 = true;
    puStack_118 = puVar6;
  }
  else {
    piVar13 = (int *)((long)puVar6 + -1);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar3) {
        *piVar13 = *piVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((char)param_1[0xc5] == '\0') {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar3) {
          *piVar13 = *piVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_104a982d0;
    }
LAB_104a983c0:
    piVar13 = (int *)((long)puVar6 + -1);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar3) {
        *piVar13 = *piVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    bVar3 = false;
    puStack_118 = puVar6;
  }
  puVar6 = puStack_118;
  FUN_104a97b40(param_1,&puStack_118);
  if (!bVar3) {
    func_0x00010084dad0(puVar6);
    piVar13 = (int *)((long)puVar6 + -1);
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar4) {
        *piVar13 = *piVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puStack_128 = puVar6;
  plStack_120 = param_1;
  FUN_104aa7c14(param_1 + 0x1f,FUN_104a9b138,&puStack_128);
  if (((ulong)puStack_128 & 1) != 0) {
    func_0x00010084dad0();
  }
  if (!bVar3) {
    func_0x00010084dad0(puVar6);
  }
  uVar16 = *puVar12;
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
  FUN_104a97274(param_1,&uStack_138);
  if ((uVar16 & 1) != 0) {
    func_0x00010084dad0(uVar16);
  }
  if (param_1[0x13] != 0) goto LAB_104a9848c;
  plStack_140 = (long *)*puVar12;
  if (((ulong)plStack_140 & 1) != 0) {
    piVar13 = (int *)((long)plStack_140 + -1);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar3) {
        *piVar13 = *piVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar16 = 0;
  FUN_104addc9c();
  plVar10 = plStack_140;
  if (((ulong)plStack_140 & 1) != 0) {
    func_0x00010084dad0();
  }
  if ((uVar16 & 1) == 0) {
    plStack_148 = (long *)*puVar12;
    if (((ulong)plStack_148 & 1) != 0) {
      piVar13 = (int *)((long)plStack_148 + -1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar3) {
          *piVar13 = *piVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_104abaa50(&puStack_128,&plStack_148,3,0xe);
    puVar6 = (undefined8 *)*puVar12;
    if (puStack_128 == puVar6) {
LAB_104a985c4:
      if (((ulong)puVar6 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    else {
      *puVar12 = (ulong)puStack_128;
      puStack_128 = (undefined8 *)0x36;
      if (((ulong)puVar6 & 1) != 0) {
        func_0x00010084dad0();
        puVar6 = puStack_128;
        goto LAB_104a985c4;
      }
    }
    plVar10 = plStack_148;
    if (((ulong)plStack_148 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  if ((int)param_1[0x12] != 0) {
    uStack_168 = param_1[0x167];
    if (uStack_168 == 0) {
      uStack_158 = 0;
      uStack_150 = 0;
      uStack_160 = 0;
      FUN_104ab5920(&uStack_f8,2,"Delayed close due to in-progress write",0x26,&puStack_100,
                    &uStack_160);
      uVar16 = param_1[0x167];
      if (uStack_f8 == uVar16) {
LAB_104a98638:
        if ((uVar16 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      else {
        param_1[0x167] = uStack_f8;
        uStack_f8 = 0x36;
        if ((uVar16 & 1) != 0) {
          func_0x00010084dad0();
          uVar16 = uStack_f8;
          goto LAB_104a98638;
        }
      }
      puStack_128 = &uStack_160;
      func_0x000100482b64(&puStack_128);
      uStack_168 = param_1[0x167];
    }
    if ((uStack_168 & 1) != 0) {
      piVar13 = (int *)(uStack_168 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar3) {
          *piVar13 = *piVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_170 = *puVar12;
    if ((uStack_170 & 1) != 0) {
      piVar13 = (int *)(uStack_170 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar3) {
          *piVar13 = *piVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x0001008306c4(&puStack_128,&uStack_168,&uStack_170);
    puVar6 = (undefined8 *)param_1[0x167];
    if (puStack_128 != puVar6) {
      param_1[0x167] = (long)puStack_128;
      puStack_128 = (undefined8 *)0x36;
      if (((ulong)puVar6 & 1) == 0) goto LAB_104a986d0;
      func_0x00010084dad0();
      puVar6 = puStack_128;
    }
    if (((ulong)puVar6 & 1) != 0) {
      func_0x00010084dad0();
    }
LAB_104a986d0:
    if ((uStack_170 & 1) != 0) {
      func_0x00010084dad0();
    }
    if ((uStack_168 & 1) == 0) {
      return;
    }
    func_0x00010084dad0();
    return;
  }
  uVar16 = *puVar12;
  if (uVar16 == 0) {
    func_0x00010bdaac38();
    goto LAB_104a98828;
  }
  uVar9 = param_1[0x13];
  if (uVar16 != uVar9) {
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
      uVar16 = *puVar12;
    }
    param_1[0x13] = uVar16;
    if ((uVar9 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  puStack_128 = (undefined8 *)0x0;
  func_0x0001004c0918(param_1 + 0x5c,4,&puStack_128,"close_transport");
  if (((ulong)puStack_128 & 1) != 0) {
    func_0x00010084dad0();
  }
  if ((char)param_1[0x110] != '\0') {
    func_0x0001005a5960(param_1 + 0x109);
  }
  if ((char)param_1[0x173] != '\0') {
    func_0x0001005a5960(param_1 + 0x174);
  }
  if (*(int *)((long)param_1 + 0xcdc) == 1) {
    func_0x0001005a5960(param_1 + 0x18b);
    plVar10 = param_1 + 0x192;
LAB_104a98794:
    func_0x0001005a5960(plVar10);
  }
  else if (*(int *)((long)param_1 + 0xcdc) == 0) {
    plVar10 = param_1 + 0x18b;
    goto LAB_104a98794;
  }
  plVar10 = param_1;
  func_0x00010074a2e0(param_1,&puStack_128);
  if ((int)plVar10 != 0) {
    do {
      plVar10 = (long *)puStack_128[2];
      do {
        lVar7 = *plVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 + -1 == 0) {
        func_0x000100836ca4();
      }
      plVar10 = param_1;
      func_0x00010074a2e0(param_1,&puStack_128);
    } while (((ulong)plVar10 & 1) != 0);
  }
  if ((int)param_1[0x12] == 0) {
    lVar7 = param_1[2];
    uStack_178 = *puVar12;
    if ((uStack_178 & 1) != 0) {
      piVar13 = (int *)(uStack_178 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar3) {
          *piVar13 = *piVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_104aba5c4(lVar7,&uStack_178);
    if ((uStack_178 & 1) != 0) {
      func_0x00010084dad0();
    }
LAB_104a9848c:
    lVar7 = param_1[0x10];
    if (lVar7 != 0) {
      uStack_180 = *puVar12;
      if ((uStack_180 & 1) != 0) {
        piVar13 = (int *)(uStack_180 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar3) {
            *piVar13 = *piVar13 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      func_0x0001004bd7e8(&puStack_128,lVar7,&uStack_180);
      if ((uStack_180 & 1) != 0) {
        func_0x00010084dad0();
      }
      param_1[0x10] = 0;
    }
    lVar7 = param_1[0x11];
    if (lVar7 != 0) {
      uStack_188 = *puVar12;
      if ((uStack_188 & 1) != 0) {
        piVar13 = (int *)(uStack_188 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar3) {
            *piVar13 = *piVar13 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      func_0x0001004bd7e8(&puStack_128,lVar7,&uStack_188);
      if ((uStack_188 & 1) != 0) {
        func_0x00010084dad0();
      }
      param_1[0x11] = 0;
    }
    return;
  }
LAB_104a98828:
  func_0x00010bdaac6c();
  func_0x0001004bdf74(&uStack_f8);
  puStack_128 = &uStack_160;
  func_0x000100482b64(&puStack_128);
  plVar11 = plVar10;
  __Unwind_Resume();
  pcStack_198 = FUN_104a9898c;
  lVar7 = *plVar11;
  *plVar11 = 0;
  uStack_1c0 = 0;
  puStack_1b0 = puVar12;
  plStack_1a8 = plVar10;
  ppuStack_1a0 = &puStack_c0;
  func_0x0001004bd7e8(&uStack_1b1,lVar7,&uStack_1c0);
  if ((uStack_1c0 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104a98258; end: 104a9898b;  */

void FUN_104a98258(undefined8 *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 **ppuVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  int *piVar11;
  undefined8 *puVar12;
  uint uVar13;
  ulong uVar14;
  ulong uStack_110;
  undefined1 uStack_101;
  ulong *puStack_100;
  undefined8 *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  ulong uStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  ulong uStack_48;
  
  puVar12 = (undefined8 *)*param_2;
  uVar14 = (ulong)puVar12 & 1;
  puStack_80 = puVar12;
  if (((ulong)puVar12 & 1) == 0) {
    if (*(char *)(param_1 + 0xc5) == '\0') {
LAB_104a982d0:
      uVar6 = 0;
      puStack_50 = puVar12;
      FUN_104addc9c();
      if ((uVar6 & 1) == 0) {
        if (uVar14 != 0) {
          piVar11 = (int *)((long)puVar12 + -1);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar2) {
              *piVar11 = *piVar11 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        ppuVar5 = &puStack_58;
        puStack_58 = puVar12;
        func_0x00010084d7f0(ppuVar5,7,&uStack_48);
        uVar13 = (uint)ppuVar5 ^ 1;
        if (((ulong)puStack_58 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      else {
        uVar13 = 0;
      }
      if (((ulong)puStack_50 & 1) != 0) {
        func_0x00010084dad0();
      }
      if (uVar13 != 0) {
        if (uVar14 != 0) {
          piVar11 = (int *)((long)puVar12 + -1);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar2) {
              *piVar11 = *piVar11 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        puStack_60 = puVar12;
        FUN_104abaa50(&puStack_78,&puStack_60,3,0xe);
        puVar9 = puStack_78;
        puVar4 = puVar12;
        if (puStack_78 == puVar12) {
joined_r0x000104a98398:
          puVar9 = puVar4;
          if (((ulong)puVar12 & 1) != 0) {
            func_0x00010084dad0(puVar12);
          }
        }
        else {
          puStack_80 = puStack_78;
          puStack_78 = (undefined8 *)0x36;
          if (uVar14 != 0) {
            func_0x00010084dad0(puVar12);
            puVar4 = puVar9;
            puVar12 = puStack_78;
            goto joined_r0x000104a98398;
          }
        }
        if (((ulong)puStack_60 & 1) != 0) {
          func_0x00010084dad0();
        }
        uVar14 = (ulong)puVar9 & 1;
        puVar12 = puVar9;
      }
    }
    if (uVar14 != 0) goto LAB_104a983c0;
    bVar2 = true;
    puStack_68 = puVar12;
  }
  else {
    piVar11 = (int *)((long)puVar12 + -1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar2) {
        *piVar11 = *piVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (*(char *)(param_1 + 0xc5) == '\0') {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar2) {
          *piVar11 = *piVar11 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      goto LAB_104a982d0;
    }
LAB_104a983c0:
    piVar11 = (int *)((long)puVar12 + -1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar2) {
        *piVar11 = *piVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    bVar2 = false;
    puStack_68 = puVar12;
  }
  puVar12 = puStack_68;
  FUN_104a97b40(param_1,&puStack_68);
  if (!bVar2) {
    func_0x00010084dad0(puVar12);
    piVar11 = (int *)((long)puVar12 + -1);
    do {
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar3) {
        *piVar11 = *piVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  puStack_78 = puVar12;
  puStack_70 = param_1;
  FUN_104aa7c14(param_1 + 0x1f,FUN_104a9b138,&puStack_78);
  if (((ulong)puStack_78 & 1) != 0) {
    func_0x00010084dad0();
  }
  if (!bVar2) {
    func_0x00010084dad0(puVar12);
  }
  uVar14 = *param_2;
  if ((uVar14 & 1) != 0) {
    piVar11 = (int *)(uVar14 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar2) {
        *piVar11 = *piVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_88 = uVar14;
  FUN_104a97274(param_1,&uStack_88);
  if ((uVar14 & 1) != 0) {
    func_0x00010084dad0(uVar14);
  }
  if (param_1[0x13] != 0) goto LAB_104a9848c;
  puStack_90 = (undefined8 *)*param_2;
  if (((ulong)puStack_90 & 1) != 0) {
    piVar11 = (int *)((long)puStack_90 + -1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar2) {
        *piVar11 = *piVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uVar14 = 0;
  FUN_104addc9c();
  puVar12 = puStack_90;
  if (((ulong)puStack_90 & 1) != 0) {
    func_0x00010084dad0();
  }
  if ((uVar14 & 1) == 0) {
    puStack_98 = (undefined8 *)*param_2;
    if (((ulong)puStack_98 & 1) != 0) {
      piVar11 = (int *)((long)puStack_98 + -1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar2) {
          *piVar11 = *piVar11 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_104abaa50(&puStack_78,&puStack_98,3,0xe);
    puVar12 = (undefined8 *)*param_2;
    if (puStack_78 == puVar12) {
LAB_104a985c4:
      if (((ulong)puVar12 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    else {
      *param_2 = (ulong)puStack_78;
      puStack_78 = (undefined8 *)0x36;
      if (((ulong)puVar12 & 1) != 0) {
        func_0x00010084dad0();
        puVar12 = puStack_78;
        goto LAB_104a985c4;
      }
    }
    puVar12 = puStack_98;
    if (((ulong)puStack_98 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  if (*(int *)(param_1 + 0x12) != 0) {
    uStack_b8 = param_1[0x167];
    if (uStack_b8 == 0) {
      uStack_a8 = 0;
      uStack_a0 = 0;
      uStack_b0 = 0;
      FUN_104ab5920(&uStack_48,2,"Delayed close due to in-progress write",0x26,&puStack_50,
                    &uStack_b0);
      uVar14 = param_1[0x167];
      if (uStack_48 == uVar14) {
LAB_104a98638:
        if ((uVar14 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      else {
        param_1[0x167] = uStack_48;
        uStack_48 = 0x36;
        if ((uVar14 & 1) != 0) {
          func_0x00010084dad0();
          uVar14 = uStack_48;
          goto LAB_104a98638;
        }
      }
      puStack_78 = &uStack_b0;
      func_0x000100482b64(&puStack_78);
      uStack_b8 = param_1[0x167];
    }
    if ((uStack_b8 & 1) != 0) {
      piVar11 = (int *)(uStack_b8 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar2) {
          *piVar11 = *piVar11 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uStack_c0 = *param_2;
    if ((uStack_c0 & 1) != 0) {
      piVar11 = (int *)(uStack_c0 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar2) {
          *piVar11 = *piVar11 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    func_0x0001008306c4(&puStack_78,&uStack_b8,&uStack_c0);
    puVar12 = (undefined8 *)param_1[0x167];
    if (puStack_78 != puVar12) {
      param_1[0x167] = puStack_78;
      puStack_78 = (undefined8 *)0x36;
      if (((ulong)puVar12 & 1) == 0) goto LAB_104a986d0;
      func_0x00010084dad0();
      puVar12 = puStack_78;
    }
    if (((ulong)puVar12 & 1) != 0) {
      func_0x00010084dad0();
    }
LAB_104a986d0:
    if ((uStack_c0 & 1) != 0) {
      func_0x00010084dad0();
    }
    if ((uStack_b8 & 1) == 0) {
      return;
    }
    func_0x00010084dad0();
    return;
  }
  uVar14 = *param_2;
  if (uVar14 == 0) {
    func_0x00010bdaac38();
    goto LAB_104a98828;
  }
  uVar6 = param_1[0x13];
  if (uVar14 != uVar6) {
    if ((uVar14 & 1) != 0) {
      piVar11 = (int *)(uVar14 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar2) {
          *piVar11 = *piVar11 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      uVar14 = *param_2;
    }
    param_1[0x13] = uVar14;
    if ((uVar6 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  puStack_78 = (undefined8 *)0x0;
  func_0x0001004c0918(param_1 + 0x5c,4,&puStack_78,"close_transport");
  if (((ulong)puStack_78 & 1) != 0) {
    func_0x00010084dad0();
  }
  if (*(char *)(param_1 + 0x110) != '\0') {
    func_0x0001005a5960(param_1 + 0x109);
  }
  if (*(char *)(param_1 + 0x173) != '\0') {
    func_0x0001005a5960(param_1 + 0x174);
  }
  if (*(int *)((long)param_1 + 0xcdc) == 1) {
    func_0x0001005a5960(param_1 + 0x18b);
    puVar12 = param_1 + 0x192;
LAB_104a98794:
    func_0x0001005a5960(puVar12);
  }
  else if (*(int *)((long)param_1 + 0xcdc) == 0) {
    puVar12 = param_1 + 0x18b;
    goto LAB_104a98794;
  }
  puVar12 = param_1;
  func_0x00010074a2e0(param_1,&puStack_78);
  if ((int)puVar12 != 0) {
    do {
      plVar7 = (long *)puStack_78[2];
      do {
        lVar10 = *plVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = lVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar10 + -1 == 0) {
        func_0x000100836ca4();
      }
      puVar12 = param_1;
      func_0x00010074a2e0(param_1,&puStack_78);
    } while (((ulong)puVar12 & 1) != 0);
  }
  if (*(int *)(param_1 + 0x12) == 0) {
    uVar8 = param_1[2];
    uStack_c8 = *param_2;
    if ((uStack_c8 & 1) != 0) {
      piVar11 = (int *)(uStack_c8 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar2) {
          *piVar11 = *piVar11 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_104aba5c4(uVar8,&uStack_c8);
    if ((uStack_c8 & 1) != 0) {
      func_0x00010084dad0();
    }
LAB_104a9848c:
    lVar10 = param_1[0x10];
    if (lVar10 != 0) {
      uStack_d0 = *param_2;
      if ((uStack_d0 & 1) != 0) {
        piVar11 = (int *)(uStack_d0 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar2) {
            *piVar11 = *piVar11 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      func_0x0001004bd7e8(&puStack_78,lVar10,&uStack_d0);
      if ((uStack_d0 & 1) != 0) {
        func_0x00010084dad0();
      }
      param_1[0x10] = 0;
    }
    lVar10 = param_1[0x11];
    if (lVar10 != 0) {
      uStack_d8 = *param_2;
      if ((uStack_d8 & 1) != 0) {
        piVar11 = (int *)(uStack_d8 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar2) {
            *piVar11 = *piVar11 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      func_0x0001004bd7e8(&puStack_78,lVar10,&uStack_d8);
      if ((uStack_d8 & 1) != 0) {
        func_0x00010084dad0();
      }
      param_1[0x11] = 0;
    }
    return;
  }
LAB_104a98828:
  func_0x00010bdaac6c();
  func_0x0001004bdf74(&uStack_48);
  puStack_78 = &uStack_b0;
  func_0x000100482b64(&puStack_78);
  puVar9 = puVar12;
  __Unwind_Resume();
  pcStack_e8 = FUN_104a9898c;
  uVar8 = *puVar9;
  *puVar9 = 0;
  uStack_110 = 0;
  puStack_100 = param_2;
  puStack_f8 = puVar12;
  puStack_f0 = &stack0xfffffffffffffff0;
  func_0x0001004bd7e8(&uStack_101,uVar8,&uStack_110);
  if ((uStack_110 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104a9898c; end: 104a989e7;  */

void FUN_104a9898c(undefined8 *param_1)

{
  undefined8 uVar1;
  ulong uStack_30;
  undefined1 uStack_21;
  
  uVar1 = *param_1;
  *param_1 = 0;
  uStack_30 = 0;
  func_0x0001004bd7e8(&uStack_21,uVar1,&uStack_30);
  if ((uStack_30 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104a989e8; end: 104a997af;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_104a989e8(ulong param_1,long param_2,ulong *param_3)

{
  char *pcVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  char cVar4;
  undefined1 uVar5;
  code *pcVar6;
  bool bVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  undefined1 *puVar17;
  ulong uVar18;
  long lVar19;
  undefined8 *puVar20;
  bool bVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  uint uVar24;
  ulong uVar25;
  ulong *unaff_x22;
  ulong *unaff_x23;
  ulong unaff_x24;
  uint uVar26;
  ulong uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  undefined1 uStack_2b9;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong *puStack_2a8;
  ulong *puStack_2a0;
  ulong uStack_298;
  long lStack_290;
  ulong uStack_288;
  undefined1 *puStack_280;
  code *pcStack_278;
  char *pcStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  uint uStack_204;
  undefined1 auStack_200 [32];
  ulong uStack_1e0;
  ulong uStack_1d8;
  undefined1 *puStack_1d0;
  undefined8 uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  undefined1 *puStack_1b0;
  undefined8 uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  undefined1 *puStack_190;
  undefined8 uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  undefined1 *puStack_170;
  undefined8 uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  undefined1 *puStack_150;
  undefined8 uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  undefined1 *puStack_130;
  undefined8 uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(char *)(param_1 + 0x628) == '\0') && (*(char *)(param_2 + 0x6f1) == '\0')) {
    uStack_250 = *param_3;
    if ((uStack_250 & 1) != 0) {
      piVar16 = (int *)(uStack_250 - 1);
      do {
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar7) {
          *piVar16 = *piVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    unaff_x22 = &uStack_250;
    FUN_104addc9c();
    if ((uStack_250 & 1) != 0) {
      func_0x00010084dad0();
    }
    if ((int)unaff_x22 == 0) goto LAB_104a98a8c;
    uStack_258 = *param_3;
    if ((uStack_258 & 1) != 0) {
      piVar16 = (int *)(uStack_258 - 1);
      do {
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar7) {
          *piVar16 = *piVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      do {
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar7) {
          *piVar16 = *piVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uStack_210 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_228 = uStack_258;
    func_0x000100831658(&uStack_228,*(undefined8 *)(param_2 + 0x6d0),&uStack_204,&uStack_220,0,0);
    if ((uStack_228 & 1) != 0) {
      func_0x00010084dad0();
    }
    if (99 < uStack_204) {
      pcStack_270 = "grpc_status >= 0 && (int)grpc_status < 100";
      uVar13 = 0x8d5;
LAB_104a996c4:
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                          ,uVar13,2,"assertion failed: %s");
      _abort();
LAB_104a996e4:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x104a996e8);
      (*pcVar6)();
    }
    unaff_x23 = &uStack_1e0;
    if (*(char *)(param_2 + 0x6f0) == '\0') {
      func_0x0001005a7e6c(&uStack_140,0xd);
      uStack_d8 = uStack_138;
      uStack_e0 = uStack_140;
      uStack_c8 = uStack_128;
      uStack_d0 = puStack_130;
      puVar17 = (undefined1 *)((ulong)&uStack_e0 | 9);
      bVar7 = uStack_140 != 0;
      puVar23 = puVar17;
      if (bVar7) {
        puVar23 = puStack_130;
      }
      puVar22 = (undefined1 *)((ulong)&uStack_e0 | 10);
      if (bVar7) {
        puVar22 = puStack_130 + 1;
      }
      puVar3 = (undefined1 *)((ulong)&uStack_e0 | 0xb);
      if (bVar7) {
        puVar3 = puStack_130 + 2;
      }
      *puVar23 = 0;
      *puVar22 = 7;
      puVar23 = (undefined1 *)((ulong)&uStack_e0 | 0xc);
      if (bVar7) {
        puVar23 = puStack_130 + 3;
      }
      *puVar3 = 0x3a;
      puVar22 = (undefined1 *)((ulong)&uStack_e0 | 0xd);
      if (bVar7) {
        puVar22 = puStack_130 + 4;
      }
      *puVar23 = 0x73;
      puVar23 = (undefined1 *)((ulong)&uStack_e0 | 0xe);
      if (bVar7) {
        puVar23 = puStack_130 + 5;
      }
      *puVar22 = 0x74;
      puVar22 = (undefined1 *)((ulong)&uStack_e0 | 0xf);
      if (bVar7) {
        puVar22 = puStack_130 + 6;
      }
      *puVar23 = 0x61;
      puVar20 = &uStack_d0;
      if (bVar7) {
        puVar20 = (undefined8 *)(puStack_130 + 7);
      }
      *puVar22 = 0x74;
      puVar23 = (undefined1 *)((long)&uStack_d0 + 1);
      if (bVar7) {
        puVar23 = puStack_130 + 8;
      }
      *(undefined1 *)puVar20 = 0x75;
      puVar22 = (undefined1 *)((long)&uStack_d0 + 2);
      if (bVar7) {
        puVar22 = puStack_130 + 9;
      }
      *puVar23 = 0x73;
      puVar23 = (undefined1 *)((long)&uStack_d0 + 3);
      if (bVar7) {
        puVar23 = puStack_130 + 10;
      }
      *puVar22 = 3;
      puVar22 = (undefined1 *)((long)&uStack_d0 + 4);
      if (bVar7) {
        puVar22 = puStack_130 + 0xb;
      }
      *puVar23 = 0x32;
      puVar23 = (undefined1 *)((long)&uStack_d0 + 5);
      if (bVar7) {
        puVar23 = puStack_130 + 0xc;
      }
      *puVar22 = 0x30;
      puVar22 = (undefined1 *)((long)&uStack_d0 + 6);
      if (bVar7) {
        puVar22 = puStack_130 + 0xd;
      }
      *puVar23 = 0x30;
      if (uStack_140 != 0) {
        puVar17 = uStack_d0;
      }
      uVar25 = uStack_138 & 0xff;
      if (uStack_140 != 0) {
        uVar25 = uStack_138;
      }
      if (puVar22 == puVar17 + uVar25) {
        func_0x0001005a7e6c(&uStack_140,0x1f);
        puVar17 = (undefined1 *)((ulong)&uStack_100 | 9);
        uStack_f8 = uStack_138;
        uStack_100 = uStack_140;
        uStack_e8 = uStack_128;
        uStack_f0 = puStack_130;
        bVar7 = uStack_140 != 0;
        puVar23 = puVar17;
        if (bVar7) {
          puVar23 = puStack_130;
        }
        puVar22 = (undefined1 *)((ulong)&uStack_100 | 10);
        if (bVar7) {
          puVar22 = puStack_130 + 1;
        }
        puVar3 = (undefined1 *)((ulong)&uStack_100 | 0xb);
        if (bVar7) {
          puVar3 = puStack_130 + 2;
        }
        *puVar23 = 0;
        *puVar22 = 0xc;
        puVar23 = (undefined1 *)((ulong)&uStack_100 | 0xc);
        if (bVar7) {
          puVar23 = puStack_130 + 3;
        }
        *puVar3 = 99;
        puVar22 = (undefined1 *)((ulong)&uStack_100 | 0xd);
        if (bVar7) {
          puVar22 = puStack_130 + 4;
        }
        *puVar23 = 0x6f;
        puVar23 = (undefined1 *)((ulong)&uStack_100 | 0xe);
        if (bVar7) {
          puVar23 = puStack_130 + 5;
        }
        *puVar22 = 0x6e;
        puVar22 = (undefined1 *)((ulong)&uStack_100 | 0xf);
        if (bVar7) {
          puVar22 = puStack_130 + 6;
        }
        *puVar23 = 0x74;
        puVar20 = &uStack_f0;
        if (bVar7) {
          puVar20 = (undefined8 *)(puStack_130 + 7);
        }
        *puVar22 = 0x65;
        puVar23 = (undefined1 *)((long)&uStack_f0 + 1);
        if (bVar7) {
          puVar23 = puStack_130 + 8;
        }
        *(undefined1 *)puVar20 = 0x6e;
        puVar22 = (undefined1 *)((long)&uStack_f0 + 2);
        if (bVar7) {
          puVar22 = puStack_130 + 9;
        }
        *puVar23 = 0x74;
        puVar23 = (undefined1 *)((long)&uStack_f0 + 3);
        if (bVar7) {
          puVar23 = puStack_130 + 10;
        }
        *puVar22 = 0x2d;
        puVar22 = (undefined1 *)((long)&uStack_f0 + 4);
        if (bVar7) {
          puVar22 = puStack_130 + 0xb;
        }
        *puVar23 = 0x74;
        puVar23 = (undefined1 *)((long)&uStack_f0 + 5);
        if (bVar7) {
          puVar23 = puStack_130 + 0xc;
        }
        *puVar22 = 0x79;
        puVar22 = (undefined1 *)((long)&uStack_f0 + 6);
        if (bVar7) {
          puVar22 = puStack_130 + 0xd;
        }
        *puVar23 = 0x70;
        puVar23 = (undefined1 *)((long)&uStack_f0 + 7);
        if (bVar7) {
          puVar23 = puStack_130 + 0xe;
        }
        *puVar22 = 0x65;
        puVar20 = &uStack_e8;
        if (bVar7) {
          puVar20 = (undefined8 *)(puStack_130 + 0xf);
        }
        *puVar23 = 0x10;
        puVar23 = (undefined1 *)((long)&uStack_e8 + 1);
        if (bVar7) {
          puVar23 = puStack_130 + 0x10;
        }
        *(undefined1 *)puVar20 = 0x61;
        puVar22 = (undefined1 *)((long)&uStack_e8 + 2);
        if (bVar7) {
          puVar22 = puStack_130 + 0x11;
        }
        *puVar23 = 0x70;
        puVar23 = (undefined1 *)((long)&uStack_e8 + 3);
        if (bVar7) {
          puVar23 = puStack_130 + 0x12;
        }
        *puVar22 = 0x70;
        puVar22 = (undefined1 *)((long)&uStack_e8 + 4);
        if (bVar7) {
          puVar22 = puStack_130 + 0x13;
        }
        *puVar23 = 0x6c;
        puVar23 = (undefined1 *)((long)&uStack_e8 + 5);
        if (bVar7) {
          puVar23 = puStack_130 + 0x14;
        }
        *puVar22 = 0x69;
        puVar22 = (undefined1 *)((long)&uStack_e8 + 6);
        if (bVar7) {
          puVar22 = puStack_130 + 0x15;
        }
        *puVar23 = 99;
        puVar23 = (undefined1 *)((long)&uStack_e8 + 7);
        if (bVar7) {
          puVar23 = puStack_130 + 0x16;
        }
        *puVar22 = 0x61;
        puVar20 = &uStack_e0;
        if (bVar7) {
          puVar20 = (undefined8 *)(puStack_130 + 0x17);
        }
        *puVar23 = 0x74;
        puVar23 = (undefined1 *)((long)&uStack_e0 + 1);
        if (bVar7) {
          puVar23 = puStack_130 + 0x18;
        }
        *(undefined1 *)puVar20 = 0x69;
        puVar22 = (undefined1 *)((long)&uStack_e0 + 2);
        if (bVar7) {
          puVar22 = puStack_130 + 0x19;
        }
        *puVar23 = 0x6f;
        puVar23 = (undefined1 *)((long)&uStack_e0 + 3);
        if (bVar7) {
          puVar23 = puStack_130 + 0x1a;
        }
        *puVar22 = 0x6e;
        puVar22 = (undefined1 *)((long)&uStack_e0 + 4);
        if (bVar7) {
          puVar22 = puStack_130 + 0x1b;
        }
        *puVar23 = 0x2f;
        puVar23 = (undefined1 *)((long)&uStack_e0 + 5);
        if (bVar7) {
          puVar23 = puStack_130 + 0x1c;
        }
        *puVar22 = 0x67;
        puVar22 = (undefined1 *)((long)&uStack_e0 + 6);
        if (bVar7) {
          puVar22 = puStack_130 + 0x1d;
        }
        *puVar23 = 0x72;
        puVar23 = (undefined1 *)((long)&uStack_e0 + 7);
        if (bVar7) {
          puVar23 = puStack_130 + 0x1e;
        }
        *puVar22 = 0x70;
        puVar8 = &uStack_d8;
        if (bVar7) {
          puVar8 = (ulong *)(puStack_130 + 0x1f);
        }
        *puVar23 = 99;
        if (uStack_140 != 0) {
          puVar17 = uStack_f0;
        }
        uVar9 = uStack_138 & 0xff;
        if (uStack_140 != 0) {
          uVar9 = uStack_138;
        }
        if (puVar8 == (ulong *)(puVar17 + uVar9)) {
          unaff_x24 = (ulong)(uint)((int)uVar9 + (int)uVar25);
          goto LAB_104a99000;
        }
        pcStack_270 = "p == GRPC_SLICE_END_PTR(content_type_hdr)";
        uVar13 = 0x911;
      }
      else {
        pcStack_270 = "p == GRPC_SLICE_END_PTR(http_status_hdr)";
        uVar13 = 0x8ed;
      }
      goto LAB_104a996c4;
    }
    unaff_x24 = 0;
LAB_104a99000:
    uVar13 = 0xf;
    if (9 < (int)uStack_204) {
      uVar13 = 0x10;
    }
    func_0x0001005a7e6c(&uStack_140,uVar13);
    puVar17 = (undefined1 *)((ulong)&uStack_c0 | 9);
    uStack_b8 = uStack_138;
    uStack_c0 = uStack_140;
    auStack_a8 = (undefined1  [8])uStack_128;
    uStack_b0 = puStack_130;
    bVar7 = uStack_140 != 0;
    puVar23 = puVar17;
    if (bVar7) {
      puVar23 = puStack_130;
    }
    puVar22 = (undefined1 *)((ulong)&uStack_c0 | 0xb);
    if (bVar7) {
      puVar22 = puStack_130 + 2;
    }
    puVar3 = (undefined1 *)((ulong)&uStack_c0 | 0xc);
    if (bVar7) {
      puVar3 = puStack_130 + 3;
    }
    *puVar23 = 0;
    puVar23 = (undefined1 *)((ulong)&uStack_c0 | 10);
    if (bVar7) {
      puVar23 = puStack_130 + 1;
    }
    *puVar23 = 0xb;
    *puVar22 = 0x67;
    puVar23 = (undefined1 *)((ulong)&uStack_c0 | 0xd);
    if (bVar7) {
      puVar23 = puStack_130 + 4;
    }
    *puVar3 = 0x72;
    puVar22 = (undefined1 *)((ulong)&uStack_c0 | 0xe);
    if (bVar7) {
      puVar22 = puStack_130 + 5;
    }
    *puVar23 = 0x70;
    puVar23 = (undefined1 *)((ulong)&uStack_c0 | 0xf);
    if (bVar7) {
      puVar23 = puStack_130 + 6;
    }
    *puVar22 = 99;
    puVar20 = &uStack_b0;
    if (bVar7) {
      puVar20 = (undefined8 *)(puStack_130 + 7);
    }
    *puVar23 = 0x2d;
    puVar23 = (undefined1 *)((long)&uStack_b0 + 1);
    if (bVar7) {
      puVar23 = puStack_130 + 8;
    }
    *(undefined1 *)puVar20 = 0x73;
    puVar22 = (undefined1 *)((long)&uStack_b0 + 2);
    if (bVar7) {
      puVar22 = puStack_130 + 9;
    }
    *puVar23 = 0x74;
    puVar23 = (undefined1 *)((long)&uStack_b0 + 3);
    if (bVar7) {
      puVar23 = puStack_130 + 10;
    }
    *puVar22 = 0x61;
    puVar22 = (undefined1 *)((long)&uStack_b0 + 4);
    if (bVar7) {
      puVar22 = puStack_130 + 0xb;
    }
    *puVar23 = 0x74;
    puVar23 = (undefined1 *)((long)&uStack_b0 + 5);
    if (bVar7) {
      puVar23 = puStack_130 + 0xc;
    }
    *puVar22 = 0x75;
    puVar22 = (undefined1 *)((long)&uStack_b0 + 6);
    if (bVar7) {
      puVar22 = puStack_130 + 0xd;
    }
    *puVar23 = 0x73;
    pcVar1 = (char *)((long)&uStack_b0 + 7);
    if (bVar7) {
      pcVar1 = puStack_130 + 0xe;
    }
    if ((int)uStack_204 < 10) {
      *puVar22 = 1;
      puVar20 = (undefined8 *)auStack_a8;
      if (uStack_140 != 0) {
        puVar20 = (undefined8 *)(puStack_130 + 0xf);
      }
      *pcVar1 = (char)uStack_204 + '0';
    }
    else {
      *puVar22 = 2;
      cVar4 = (char)(uStack_204 / 10);
      pbVar2 = auStack_a8;
      if (uStack_140 != 0) {
        pbVar2 = puStack_130 + 0xf;
      }
      *pcVar1 = cVar4 + '0';
      puVar20 = (undefined8 *)((long)auStack_a8 + 1);
      if (uStack_140 != 0) {
        puVar20 = (undefined8 *)(puStack_130 + 0x10);
      }
      *pbVar2 = (char)uStack_204 + cVar4 * -10 | 0x30;
    }
    if (uStack_140 != 0) {
      puVar17 = uStack_b0;
    }
    uVar25 = uStack_138 & 0xff;
    if (uStack_140 != 0) {
      uVar25 = uStack_138;
    }
    if (puVar20 != (undefined8 *)(puVar17 + uVar25)) {
      pcStack_270 = "p == GRPC_SLICE_END_PTR(status_hdr)";
      uVar13 = 0x92c;
      goto LAB_104a996c4;
    }
    uVar9 = uStack_210 >> 0x38;
    if (((long)uStack_210 < 0) && (uVar9 = uStack_218, uStack_218 >> 0x20 != 0)) {
      pcStack_270 = "msg_len <= UINT32_MAX";
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                          ,0x930,2,"assertion failed: %s");
      _abort();
      goto LAB_104a996e4;
    }
    uVar26 = (uint)uVar9;
    unaff_x22 = (ulong *)(ulong)(uVar26 - 0x7f);
    if (uVar26 < 0x7f) {
      uVar24 = 1;
    }
    else {
      puVar8 = unaff_x22;
      func_0x0001008e186c();
      uVar24 = (uint)puVar8;
    }
    func_0x0001005a7e6c(&uStack_140,uVar24 + 0xe);
    puVar17 = (undefined1 *)((ulong)&uStack_120 | 9);
    uStack_118 = uStack_138;
    uStack_120 = uStack_140;
    uStack_108 = uStack_128;
    uStack_110 = puStack_130;
    bVar7 = uStack_140 != 0;
    puVar23 = puVar17;
    if (bVar7) {
      puVar23 = puStack_130;
    }
    puVar22 = (undefined1 *)((ulong)&uStack_120 | 10);
    if (bVar7) {
      puVar22 = puStack_130 + 1;
    }
    puVar3 = (undefined1 *)((ulong)&uStack_120 | 0xb);
    if (bVar7) {
      puVar3 = puStack_130 + 2;
    }
    *puVar23 = 0;
    *puVar22 = 0xc;
    puVar23 = (undefined1 *)((ulong)&uStack_120 | 0xc);
    if (bVar7) {
      puVar23 = puStack_130 + 3;
    }
    *puVar3 = 0x67;
    puVar22 = (undefined1 *)((ulong)&uStack_120 | 0xd);
    if (bVar7) {
      puVar22 = puStack_130 + 4;
    }
    *puVar23 = 0x72;
    puVar23 = (undefined1 *)((ulong)&uStack_120 | 0xe);
    if (bVar7) {
      puVar23 = puStack_130 + 5;
    }
    *puVar22 = 0x70;
    puVar22 = (undefined1 *)((ulong)&uStack_120 | 0xf);
    if (bVar7) {
      puVar22 = puStack_130 + 6;
    }
    *puVar23 = 99;
    puVar20 = &uStack_110;
    if (bVar7) {
      puVar20 = (undefined8 *)(puStack_130 + 7);
    }
    *puVar22 = 0x2d;
    puVar23 = (undefined1 *)((long)&uStack_110 + 1);
    if (bVar7) {
      puVar23 = puStack_130 + 8;
    }
    *(undefined1 *)puVar20 = 0x6d;
    puVar22 = (undefined1 *)((long)&uStack_110 + 2);
    if (bVar7) {
      puVar22 = puStack_130 + 9;
    }
    *puVar23 = 0x65;
    puVar23 = (undefined1 *)((long)&uStack_110 + 3);
    if (bVar7) {
      puVar23 = puStack_130 + 10;
    }
    *puVar22 = 0x73;
    puVar22 = (undefined1 *)((long)&uStack_110 + 4);
    if (bVar7) {
      puVar22 = puStack_130 + 0xb;
    }
    *puVar23 = 0x73;
    puVar23 = (undefined1 *)((long)&uStack_110 + 5);
    if (bVar7) {
      puVar23 = puStack_130 + 0xc;
    }
    *puVar22 = 0x61;
    puVar22 = (undefined1 *)((long)&uStack_110 + 6);
    if (bVar7) {
      puVar22 = puStack_130 + 0xd;
    }
    *puVar23 = 0x67;
    puVar23 = (undefined1 *)((long)&uStack_110 + 7);
    if (bVar7) {
      puVar23 = puStack_130 + 0xe;
    }
    *puVar22 = 0x65;
    if (uVar24 - 1 == 0) {
      *puVar23 = (char)uVar9;
    }
    else {
      *puVar23 = 0x7f;
      puVar20 = &uStack_108;
      if (uStack_140 != 0) {
        puVar20 = (undefined8 *)(puStack_130 + 0xf);
      }
      func_0x0001008e18a4(unaff_x22,puVar20,uVar24 - 1);
    }
    if (uStack_120 != 0) {
      puVar17 = uStack_110;
    }
    uVar9 = uStack_118 & 0xff;
    if (uStack_120 != 0) {
      uVar9 = uStack_118;
    }
    if (puVar23 + uVar24 != puVar17 + uVar9) {
      pcStack_270 = "p == GRPC_SLICE_END_PTR(message_pfx)";
      uVar13 = 0x944;
LAB_104a99684:
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                          ,uVar13,2,"assertion failed: %s");
      _abort();
      goto LAB_104a996e4;
    }
    func_0x0001005a7e6c(&uStack_140,9);
    iVar14 = (int)unaff_x24 + (int)uVar25 + uVar26 + (int)uVar9;
    uStack_98 = uStack_138;
    uStack_a0 = uStack_140;
    uStack_88 = uStack_128;
    uStack_90 = puStack_130;
    puVar17 = (undefined1 *)((ulong)&uStack_a0 | 9);
    bVar7 = uStack_140 != 0;
    puVar23 = puVar17;
    if (bVar7) {
      puVar23 = puStack_130;
    }
    puVar22 = (undefined1 *)((ulong)&uStack_a0 | 10);
    if (bVar7) {
      puVar22 = puStack_130 + 1;
    }
    *puVar23 = (char)((uint)iVar14 >> 0x10);
    puVar23 = (undefined1 *)((ulong)&uStack_a0 | 0xb);
    if (bVar7) {
      puVar23 = puStack_130 + 2;
    }
    *puVar22 = (char)((uint)iVar14 >> 8);
    puVar22 = (undefined1 *)((ulong)&uStack_a0 | 0xc);
    if (bVar7) {
      puVar22 = puStack_130 + 3;
    }
    *puVar23 = (char)iVar14;
    puVar23 = (undefined1 *)((ulong)&uStack_a0 | 0xd);
    if (bVar7) {
      puVar23 = puStack_130 + 4;
    }
    *puVar22 = 1;
    puVar22 = (undefined1 *)((ulong)&uStack_a0 | 0xe);
    if (bVar7) {
      puVar22 = puStack_130 + 5;
    }
    *puVar23 = 5;
    puVar23 = (undefined1 *)((ulong)&uStack_a0 | 0xf);
    if (bVar7) {
      puVar23 = puStack_130 + 6;
    }
    *puVar22 = *(undefined1 *)(param_2 + 0x9f);
    puVar20 = &uStack_90;
    if (bVar7) {
      puVar20 = (undefined8 *)(puStack_130 + 7);
    }
    *puVar23 = (char)*(undefined2 *)(param_2 + 0x9e);
    puVar23 = (undefined1 *)((long)&uStack_90 + 1);
    if (bVar7) {
      puVar23 = puStack_130 + 8;
    }
    *(char *)puVar20 = (char)((uint)*(undefined4 *)(param_2 + 0x9c) >> 8);
    puVar22 = (undefined1 *)((long)&uStack_90 + 2);
    if (bVar7) {
      puVar22 = puStack_130 + 9;
    }
    *puVar23 = (char)*(undefined4 *)(param_2 + 0x9c);
    if (uStack_140 != 0) {
      puVar17 = uStack_90;
    }
    uVar25 = uStack_138 & 0xff;
    if (uStack_140 != 0) {
      uVar25 = uStack_138;
    }
    if (puVar22 != puVar17 + uVar25) {
      pcStack_270 = "p == GRPC_SLICE_END_PTR(hdr)";
      uVar13 = 0x953;
      goto LAB_104a99684;
    }
    lVar12 = param_1 + 0x630;
    uStack_158 = uStack_138;
    uStack_160 = uStack_140;
    uStack_148 = uStack_88;
    puStack_150 = uStack_90;
    func_0x0001005a70c4(lVar12,&uStack_160);
    if (*(char *)(param_2 + 0x6f0) == '\0') {
      uStack_178 = uStack_d8;
      uStack_180 = uStack_e0;
      uStack_168 = uStack_c8;
      puStack_170 = uStack_d0;
      func_0x0001005a70c4(lVar12,&uStack_180);
      uStack_198 = uStack_f8;
      uStack_1a0 = uStack_100;
      uStack_188 = uStack_e8;
      puStack_190 = uStack_f0;
      func_0x0001005a70c4(lVar12,&uStack_1a0);
    }
    uStack_1b8 = uStack_b8;
    uStack_1c0 = uStack_c0;
    uStack_1a8 = auStack_a8;
    puStack_1b0 = uStack_b0;
    func_0x0001005a70c4(lVar12,&uStack_1c0);
    uStack_1d8 = uStack_118;
    uStack_1e0 = uStack_120;
    uStack_1c8 = uStack_108;
    puStack_1d0 = uStack_110;
    func_0x0001005a70c4(lVar12,&uStack_1e0);
    uStack_238 = uStack_218;
    uStack_240 = uStack_220;
    uStack_230 = uStack_210;
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_220 = 0;
    func_0x0001004da2c8(auStack_200,&uStack_240);
    func_0x0001005a70c4(lVar12,auStack_200);
    if ((long)uStack_230 < 0) {
      __ZdlPv(uStack_240);
    }
    if (*(char *)(param_1 + 0x628) == '\0') {
      *(undefined8 *)(param_1 + 0x8c8) = 0x8000000000000000;
      *(undefined4 *)(param_1 + 0x8d0) = 0;
    }
    *(undefined4 *)(param_1 + 0x840) = *(undefined4 *)(param_1 + 0x828);
    FUN_104a9d3e0(param_1,*(undefined4 *)(param_2 + 0x9c),0,param_2 + 0x150);
    uVar25 = uStack_258;
    uStack_248 = uStack_258;
    if ((uStack_258 & 1) != 0) {
      piVar16 = (int *)(uStack_258 - 1);
      do {
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar7) {
          *piVar16 = *piVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puVar8 = &uStack_248;
    iVar14 = 1;
    iVar15 = 1;
    FUN_104a997b0(param_1,param_2);
    if ((uVar25 & 1) != 0) {
      func_0x00010084dad0(uVar25);
    }
    lVar12 = 9;
    func_0x0001007474b0();
    if ((long)uStack_210 < 0) {
      param_1 = uStack_220;
      __ZdlPv();
    }
    if ((uVar25 & 1) != 0) {
      param_1 = uVar25;
      func_0x00010084dad0();
    }
  }
  else {
LAB_104a98a8c:
    if (((*(char *)(param_2 + 0x169) == '\0') || (*(char *)(param_2 + 0x168) == '\0')) &&
       (*(int *)(param_2 + 0x9c) != 0)) {
      uStack_260 = *param_3;
      if ((uStack_260 & 1) != 0) {
        piVar16 = (int *)(uStack_260 - 1);
        do {
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar7) {
            *piVar16 = *piVar16 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      func_0x000100831658(&uStack_260,*(undefined8 *)(param_2 + 0x6d0),0,0,&uStack_a0,0);
      if ((uStack_260 & 1) != 0) {
        func_0x00010084dad0();
      }
      FUN_104a9d3e0(param_1,*(undefined4 *)(param_2 + 0x9c),uStack_a0 & 0xffffffff,param_2 + 0x150);
      func_0x0001007474b0(param_1,8);
    }
    uVar25 = *param_3;
    if (uVar25 == 0) {
      uStack_268 = 0;
    }
    else {
      if (*(char *)(param_2 + 0x16b) == '\0') {
        *(undefined1 *)(param_2 + 0x16b) = 1;
      }
      uStack_268 = uVar25;
      if ((uVar25 & 1) != 0) {
        piVar16 = (int *)(uVar25 - 1);
        do {
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar7) {
            *piVar16 = *piVar16 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
    }
    puVar8 = &uStack_268;
    iVar14 = 1;
    iVar15 = 1;
    lVar12 = param_2;
    FUN_104a997b0();
    if ((uVar25 & 1) != 0) {
      param_1 = uVar25;
      func_0x00010084dad0();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  if ((long)uStack_210 < 0) {
    __ZdlPv(uStack_220);
  }
  func_0x0001004bdf74(&uStack_258);
  uVar9 = param_1;
  __Unwind_Resume();
  pcStack_278 = FUN_104a997b0;
  uStack_2b0 = unaff_x24;
  puStack_2a8 = unaff_x23;
  puStack_2a0 = unaff_x22;
  uStack_298 = uVar25;
  lStack_290 = param_2;
  uStack_288 = param_1;
  puStack_280 = &stack0xfffffffffffffff0;
  if (*(char *)(lVar12 + 0x169) == '\0') {
    if (iVar14 != 0) {
      uVar25 = *(ulong *)(lVar12 + 0x170);
      uVar18 = *puVar8;
      if (uVar18 != uVar25) {
        if ((uVar18 & 1) != 0) {
          piVar16 = (int *)(uVar18 - 1);
          do {
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar16,0x10);
            if (bVar7) {
              *piVar16 = *piVar16 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          uVar18 = *puVar8;
        }
        *(ulong *)(lVar12 + 0x170) = uVar18;
        if ((uVar25 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      bVar7 = true;
      *(undefined1 *)(lVar12 + 0x169) = 1;
      goto joined_r0x000104a998cc;
    }
  }
  else if (*(char *)(lVar12 + 0x168) != '\0') {
    uVar25 = *puVar8;
    if ((uVar25 & 1) != 0) {
      piVar16 = (int *)(uVar25 - 1);
      do {
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar7) {
          *piVar16 = *piVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uStack_2c8 = uVar25;
    FUN_104a9a080(&uStack_2b8,&uStack_2c8,lVar12,"Stream removed");
    if ((uVar25 & 1) != 0) {
      func_0x00010084dad0(uVar25);
    }
    uVar25 = uStack_2b8;
    if (uStack_2b8 != 0) {
      uStack_2d0 = uStack_2b8;
      if ((uStack_2b8 & 1) != 0) {
        piVar16 = (int *)(uStack_2b8 - 1);
        do {
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar7) {
            *piVar16 = *piVar16 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      FUN_104a99c64(uVar9,lVar12,&uStack_2d0);
      if ((uVar25 & 1) != 0) {
        func_0x00010084dad0(uVar25);
      }
    }
    func_0x0001008e2dcc(uVar9,lVar12);
    if ((uStack_2b8 & 1) == 0) {
      return;
    }
    func_0x00010084dad0();
    return;
  }
  bVar7 = false;
joined_r0x000104a998cc:
  if ((iVar15 != 0) && (*(char *)(lVar12 + 0x168) == '\0')) {
    uVar25 = *(ulong *)(lVar12 + 0x178);
    uVar18 = *puVar8;
    if (uVar18 != uVar25) {
      if ((uVar18 & 1) != 0) {
        piVar16 = (int *)(uVar18 - 1);
        do {
          cVar4 = '\x01';
          bVar21 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar21) {
            *piVar16 = *piVar16 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        uVar18 = *puVar8;
      }
      *(ulong *)(lVar12 + 0x178) = uVar18;
      if ((uVar25 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    *(undefined1 *)(lVar12 + 0x168) = 1;
    uStack_2d8 = *puVar8;
    if ((uStack_2d8 & 1) != 0) {
      piVar16 = (int *)(uStack_2d8 - 1);
      do {
        cVar4 = '\x01';
        bVar21 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar21) {
          *piVar16 = *piVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_104a99e20(uVar9,lVar12,&uStack_2d8);
    if ((uStack_2d8 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  if ((*(char *)(lVar12 + 0x169) == '\0') || (*(char *)(lVar12 + 0x168) == '\0')) {
    uVar5 = false;
  }
  else {
    uVar25 = *puVar8;
    if ((uVar25 & 1) != 0) {
      piVar16 = (int *)(uVar25 - 1);
      do {
        cVar4 = '\x01';
        bVar21 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar21) {
          *piVar16 = *piVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uStack_2e8 = uVar25;
    FUN_104a9a080(&uStack_2e0,&uStack_2e8,lVar12,"Stream removed");
    if ((uVar25 & 1) != 0) {
      func_0x00010084dad0(uVar25);
    }
    if (*(int *)(lVar12 + 0x9c) == 0) {
      func_0x000104aa7a0c(uVar9,lVar12);
    }
    else {
      uStack_2f0 = uStack_2e0;
      if ((uStack_2e0 & 1) != 0) {
        piVar16 = (int *)(uStack_2e0 - 1);
        do {
          cVar4 = '\x01';
          bVar21 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar21) {
            *piVar16 = *piVar16 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      lVar19 = uVar9 + 0xf8;
      lVar10 = lVar19;
      FUN_104aa7ac4();
      if (*(long *)(uVar9 + 0xab8) == lVar10) {
        *(undefined8 *)(uVar9 + 0xab8) = 0;
        FUN_104aa75d0(uVar9);
      }
      func_0x0001008ded94();
      if ((lVar19 == 0) && (func_0x000100747908(uVar9), *(int *)(uVar9 + 0x768) == 3)) {
        FUN_104aba878(&uStack_2b8,2,"Last stream closed after sending GOAWAY",0x27,&uStack_2b9,1,
                      &uStack_2f0);
        FUN_104a98258(uVar9,&uStack_2b8);
        if ((uStack_2b8 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      uVar25 = uVar9;
      func_0x000104aa7920(uVar9,lVar10);
      if ((int)uVar25 != 0) {
        plVar11 = *(long **)(lVar10 + 0x10);
        do {
          lVar19 = *plVar11;
          cVar4 = '\x01';
          bVar21 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar21) {
            *plVar11 = lVar19 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar19 + -1 == 0) {
          func_0x000100836ca4();
        }
      }
      func_0x000104aa7a8c(uVar9,lVar10);
      func_0x000104aa7a4c(uVar9,lVar10);
      func_0x0001008deaf0(uVar9);
      if ((uStack_2f0 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    uVar25 = uStack_2e0;
    if (uStack_2e0 != 0) {
      uStack_2f8 = uStack_2e0;
      if ((uStack_2e0 & 1) != 0) {
        piVar16 = (int *)(uStack_2e0 - 1);
        do {
          cVar4 = '\x01';
          bVar21 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar21) {
            *piVar16 = *piVar16 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      FUN_104a99c64(uVar9,lVar12,&uStack_2f8);
      if ((uVar25 & 1) != 0) {
        func_0x00010084dad0(uVar25);
      }
    }
    if ((uStack_2e0 & 1) != 0) {
      func_0x00010084dad0();
    }
    uVar5 = true;
  }
  if (bVar7) {
    lVar19 = 0;
    bVar7 = true;
    do {
      bVar21 = bVar7;
      lVar19 = lVar12 + lVar19 * 4;
      if (*(int *)(lVar19 + 0x180) == 0) {
        *(undefined4 *)(lVar19 + 0x180) = 3;
      }
      lVar19 = 1;
      bVar7 = false;
    } while (bVar21);
    func_0x0001008e2ad4(uVar9,lVar12);
    func_0x0001008e2b98(uVar9,lVar12);
  }
  if ((bool)uVar5) {
    func_0x0001008e2dcc(uVar9,lVar12);
    plVar11 = *(long **)(lVar12 + 0x10);
    do {
      lVar12 = *plVar11;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar7) {
        *plVar11 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 + -1 == 0) {
      func_0x000100836ca4();
    }
  }
  return;
}



/* Entry: 104a997b0; end: 104a99c63;  */

void FUN_104a997b0(long param_1,long param_2,int param_3,int param_4,ulong *param_5)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  ulong uVar7;
  long lVar8;
  bool bVar9;
  ulong uVar10;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  undefined1 uStack_49;
  ulong uStack_48;
  
  if (*(char *)(param_2 + 0x169) == '\0') {
    if (param_3 != 0) {
      uVar10 = *(ulong *)(param_2 + 0x170);
      uVar7 = *param_5;
      if (uVar7 != uVar10) {
        if ((uVar7 & 1) != 0) {
          piVar6 = (int *)(uVar7 - 1);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar2) {
              *piVar6 = *piVar6 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          uVar7 = *param_5;
        }
        *(ulong *)(param_2 + 0x170) = uVar7;
        if ((uVar10 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      bVar2 = true;
      *(undefined1 *)(param_2 + 0x169) = 1;
      goto joined_r0x000104a998cc;
    }
  }
  else if (*(char *)(param_2 + 0x168) != '\0') {
    uVar10 = *param_5;
    if ((uVar10 & 1) != 0) {
      piVar6 = (int *)(uVar10 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = *piVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uStack_58 = uVar10;
    FUN_104a9a080(&uStack_48,&uStack_58,param_2,"Stream removed");
    if ((uVar10 & 1) != 0) {
      func_0x00010084dad0(uVar10);
    }
    uVar10 = uStack_48;
    if (uStack_48 != 0) {
      uStack_60 = uStack_48;
      if ((uStack_48 & 1) != 0) {
        piVar6 = (int *)(uStack_48 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar2) {
            *piVar6 = *piVar6 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_104a99c64(param_1,param_2,&uStack_60);
      if ((uVar10 & 1) != 0) {
        func_0x00010084dad0(uVar10);
      }
    }
    func_0x0001008e2dcc(param_1,param_2);
    if ((uStack_48 & 1) == 0) {
      return;
    }
    func_0x00010084dad0();
    return;
  }
  bVar2 = false;
joined_r0x000104a998cc:
  if ((param_4 != 0) && (*(char *)(param_2 + 0x168) == '\0')) {
    uVar10 = *(ulong *)(param_2 + 0x178);
    uVar7 = *param_5;
    if (uVar7 != uVar10) {
      if ((uVar7 & 1) != 0) {
        piVar6 = (int *)(uVar7 - 1);
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar3) {
            *piVar6 = *piVar6 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        uVar7 = *param_5;
      }
      *(ulong *)(param_2 + 0x178) = uVar7;
      if ((uVar10 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    *(undefined1 *)(param_2 + 0x168) = 1;
    uStack_68 = *param_5;
    if ((uStack_68 & 1) != 0) {
      piVar6 = (int *)(uStack_68 - 1);
      do {
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = *piVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_104a99e20(param_1,param_2,&uStack_68);
    if ((uStack_68 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  if ((*(char *)(param_2 + 0x169) == '\0') || (*(char *)(param_2 + 0x168) == '\0')) {
    bVar3 = false;
  }
  else {
    uVar10 = *param_5;
    if ((uVar10 & 1) != 0) {
      piVar6 = (int *)(uVar10 - 1);
      do {
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = *piVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uStack_78 = uVar10;
    FUN_104a9a080(&uStack_70,&uStack_78,param_2,"Stream removed");
    if ((uVar10 & 1) != 0) {
      func_0x00010084dad0(uVar10);
    }
    if (*(int *)(param_2 + 0x9c) == 0) {
      func_0x000104aa7a0c(param_1,param_2);
    }
    else {
      uStack_80 = uStack_70;
      if ((uStack_70 & 1) != 0) {
        piVar6 = (int *)(uStack_70 - 1);
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar3) {
            *piVar6 = *piVar6 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      lVar8 = param_1 + 0xf8;
      lVar4 = lVar8;
      FUN_104aa7ac4();
      if (*(long *)(param_1 + 0xab8) == lVar4) {
        *(undefined8 *)(param_1 + 0xab8) = 0;
        FUN_104aa75d0(param_1);
      }
      func_0x0001008ded94();
      if ((lVar8 == 0) && (func_0x000100747908(param_1), *(int *)(param_1 + 0x768) == 3)) {
        FUN_104aba878(&uStack_48,2,"Last stream closed after sending GOAWAY",0x27,&uStack_49,1,
                      &uStack_80);
        FUN_104a98258(param_1,&uStack_48);
        if ((uStack_48 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      lVar8 = param_1;
      func_0x000104aa7920(param_1,lVar4);
      if ((int)lVar8 != 0) {
        plVar5 = *(long **)(lVar4 + 0x10);
        do {
          lVar8 = *plVar5;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar8 + -1 == 0) {
          func_0x000100836ca4();
        }
      }
      func_0x000104aa7a8c(param_1,lVar4);
      func_0x000104aa7a4c(param_1,lVar4);
      func_0x0001008deaf0(param_1);
      if ((uStack_80 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    uVar10 = uStack_70;
    if (uStack_70 != 0) {
      uStack_88 = uStack_70;
      if ((uStack_70 & 1) != 0) {
        piVar6 = (int *)(uStack_70 - 1);
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar3) {
            *piVar6 = *piVar6 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_104a99c64(param_1,param_2,&uStack_88);
      if ((uVar10 & 1) != 0) {
        func_0x00010084dad0(uVar10);
      }
    }
    if ((uStack_70 & 1) != 0) {
      func_0x00010084dad0();
    }
    bVar3 = true;
  }
  if (bVar2) {
    lVar8 = 0;
    bVar2 = true;
    do {
      bVar9 = bVar2;
      lVar8 = param_2 + lVar8 * 4;
      if (*(int *)(lVar8 + 0x180) == 0) {
        *(undefined4 *)(lVar8 + 0x180) = 3;
      }
      lVar8 = 1;
      bVar2 = false;
    } while (bVar9);
    func_0x0001008e2ad4(param_1,param_2);
    func_0x0001008e2b98(param_1,param_2);
  }
  if (bVar3) {
    func_0x0001008e2dcc(param_1,param_2);
    plVar5 = *(long **)(param_2 + 0x10);
    do {
      lVar8 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 + -1 == 0) {
      func_0x000100836ca4();
    }
  }
  return;
}



/* Entry: 104a99c64; end: 104a99e1f;  */

void FUN_104a99c64(undefined8 ***param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 ***pppuVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  int *piVar7;
  ulong uVar8;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined8 **ppuStack_98;
  undefined8 **ppuStack_90;
  ulong uStack_88;
  ulong uStack_80;
  int iStack_74;
  long *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long *plStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_90 = (undefined8 ***)0x0;
  uStack_88 = 0;
  uStack_80 = 0;
  ppuStack_98 = (undefined8 **)*param_3;
  if (((ulong)ppuStack_98 & 1) != 0) {
    piVar7 = (int *)((long)ppuStack_98 + -1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = *piVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lVar5 = *(long *)(param_2 + 0x6d0);
  puVar6 = (ulong *)&iStack_74;
  func_0x000100831658(&ppuStack_98,lVar5,puVar6,&ppuStack_90,0,0);
  pppuVar3 = (undefined8 ***)ppuStack_98;
  if (((ulong)ppuStack_98 & 1) != 0) {
    func_0x00010084dad0();
  }
  if (iStack_74 != 0) {
    *(undefined1 *)(param_2 + 0x16b) = 1;
  }
  if ((*(int *)(param_2 + 0x184) == 0) || (*(long *)(param_2 + 0x128) != 0)) {
    *(uint *)(param_2 + 0x398) = *(uint *)(param_2 + 0x398) | 0x400;
    *(int *)(param_2 + 0x520) = iStack_74;
    uVar8 = uStack_88;
    if (-1 < (long)uStack_80) {
      uVar8 = uStack_80 >> 0x38;
    }
    if (uVar8 != 0) {
      pppuVar3 = (undefined8 ***)ppuStack_90;
      if (-1 < (long)uStack_80) {
        pppuVar3 = &ppuStack_90;
      }
      func_0x0001004b6808(&plStack_48,pppuVar3);
      uStack_68 = uStack_40;
      plStack_70 = plStack_48;
      uStack_58 = uStack_30;
      uStack_60 = uStack_38;
      func_0x00010084bde4(param_2 + 0x398,&plStack_70);
      if ((long *)0x1 < plStack_70) {
        do {
          lVar5 = *plStack_70;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plStack_70,0x10);
          if (bVar2) {
            *plStack_70 = lVar5 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar5 + -1 == 0) {
          (*(code *)plStack_70[1])();
        }
      }
    }
    *(undefined4 *)(param_2 + 0x184) = 1;
    func_0x0001008e2dcc();
    pppuVar3 = param_1;
    lVar5 = param_2;
  }
  if ((long)uStack_80 < 0) {
    pppuVar3 = (undefined8 ***)ppuStack_90;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((int)lVar5 != 0) {
    FUN_104bd46a0();
    if ((long)uStack_80 < 0) {
      __ZdlPv(ppuStack_90);
    }
  }
  __Unwind_Resume(pppuVar3);
  uVar8 = *puVar6;
  if ((uVar8 & 1) != 0) {
    piVar7 = (int *)(uVar8 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = *piVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_e0 = uVar8;
  FUN_104a9a080(&uStack_d8,&uStack_e0,lVar5,"Pending writes failed due to stream closure");
  uVar4 = *puVar6;
  if (uStack_d8 != uVar4) {
    *puVar6 = uStack_d8;
    uStack_d8 = 0x36;
    if ((uVar4 & 1) == 0) goto LAB_104a99ea8;
    func_0x00010084dad0();
    uVar4 = uStack_d8;
  }
  if ((uVar4 & 1) != 0) {
    func_0x00010084dad0();
  }
LAB_104a99ea8:
  if ((uVar8 & 1) != 0) {
    func_0x00010084dad0(uVar8);
  }
  *(undefined8 *)(lVar5 + 0xa0) = 0;
  uVar8 = *puVar6;
  if ((uVar8 & 1) != 0) {
    piVar7 = (int *)(uVar8 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = *piVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_e8 = uVar8;
  func_0x0001008df0bc(pppuVar3);
  if ((uVar8 & 1) != 0) {
    func_0x00010084dad0(uVar8);
  }
  *(undefined8 *)(lVar5 + 0xb0) = 0;
  *(undefined8 *)(lVar5 + 0xb8) = 0;
  uVar8 = *puVar6;
  if ((uVar8 & 1) != 0) {
    piVar7 = (int *)(uVar8 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = *piVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_f0 = uVar8;
  func_0x0001008df0bc(pppuVar3);
  if ((uVar8 & 1) != 0) {
    func_0x00010084dad0(uVar8);
  }
  uVar8 = *puVar6;
  if ((uVar8 & 1) != 0) {
    piVar7 = (int *)(uVar8 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = *piVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_f8 = uVar8;
  func_0x0001008df0bc(pppuVar3);
  if ((uVar8 & 1) != 0) {
    func_0x00010084dad0(uVar8);
  }
  uVar8 = *puVar6;
  if ((uVar8 & 1) != 0) {
    piVar7 = (int *)(uVar8 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = *piVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_100 = uVar8;
  FUN_104a9a274(pppuVar3,lVar5,lVar5 + 0x858,&uStack_100);
  if ((uVar8 & 1) != 0) {
    func_0x00010084dad0(uVar8);
  }
  uVar8 = *puVar6;
  if ((uVar8 & 1) != 0) {
    piVar7 = (int *)(uVar8 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = *piVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_108 = uVar8;
  FUN_104a9a274(pppuVar3,lVar5,lVar5 + 0x850,&uStack_108);
  if ((uVar8 & 1) != 0) {
    func_0x00010084dad0(uVar8);
  }
  return;
}



/* Entry: 104a99e20; end: 104a9a07f;  */

void FUN_104a99e20(undefined8 param_1,long param_2,ulong *param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  int *piVar4;
  ulong uVar5;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  uVar5 = *param_3;
  if ((uVar5 & 1) != 0) {
    piVar4 = (int *)(uVar5 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_40 = uVar5;
  FUN_104a9a080(&uStack_38,&uStack_40,param_2,"Pending writes failed due to stream closure");
  uVar3 = *param_3;
  if (uStack_38 != uVar3) {
    *param_3 = uStack_38;
    uStack_38 = 0x36;
    if ((uVar3 & 1) == 0) goto LAB_104a99ea8;
    func_0x00010084dad0();
    uVar3 = uStack_38;
  }
  if ((uVar3 & 1) != 0) {
    func_0x00010084dad0();
  }
LAB_104a99ea8:
  if ((uVar5 & 1) != 0) {
    func_0x00010084dad0(uVar5);
  }
  *(undefined8 *)(param_2 + 0xa0) = 0;
  uVar5 = *param_3;
  if ((uVar5 & 1) != 0) {
    piVar4 = (int *)(uVar5 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_48 = uVar5;
  func_0x0001008df0bc(param_1);
  if ((uVar5 & 1) != 0) {
    func_0x00010084dad0(uVar5);
  }
  *(undefined8 *)(param_2 + 0xb0) = 0;
  *(undefined8 *)(param_2 + 0xb8) = 0;
  uVar5 = *param_3;
  if ((uVar5 & 1) != 0) {
    piVar4 = (int *)(uVar5 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_50 = uVar5;
  func_0x0001008df0bc(param_1);
  if ((uVar5 & 1) != 0) {
    func_0x00010084dad0(uVar5);
  }
  uVar5 = *param_3;
  if ((uVar5 & 1) != 0) {
    piVar4 = (int *)(uVar5 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_58 = uVar5;
  func_0x0001008df0bc(param_1);
  if ((uVar5 & 1) != 0) {
    func_0x00010084dad0(uVar5);
  }
  uVar5 = *param_3;
  if ((uVar5 & 1) != 0) {
    piVar4 = (int *)(uVar5 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_60 = uVar5;
  FUN_104a9a274(param_1,param_2,param_2 + 0x858,&uStack_60);
  if ((uVar5 & 1) != 0) {
    func_0x00010084dad0(uVar5);
  }
  uVar5 = *param_3;
  if ((uVar5 & 1) != 0) {
    piVar4 = (int *)(uVar5 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_68 = uVar5;
  FUN_104a9a274(param_1,param_2,param_2 + 0x850,&uStack_68);
  if ((uVar5 & 1) != 0) {
    func_0x00010084dad0(uVar5);
  }
  return;
}



/* Entry: 104a9a080; end: 104a9a273;  */

void FUN_104a9a080(long *param_1,ulong *param_2,long param_3,ulong *param_4,ulong *param_5)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  ulong uVar4;
  int iVar5;
  ulong *puVar6;
  int *piVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined1 uStack_79;
  long lStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong auStack_50 [4];
  
  auStack_50[3] = *(ulong *)PTR____stack_chk_guard_11034bdc0;
  auStack_50[0] = 0;
  auStack_50[1] = 0;
  auStack_50[2] = 0;
  uStack_60 = *(ulong *)(param_3 + 0x170);
  uStack_58 = 0;
  if ((uStack_60 & 1) != 0) {
    piVar7 = (int *)(uStack_60 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = *piVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_104a9b1e0(&uStack_60,auStack_50,&uStack_58);
  if ((uStack_60 & 1) != 0) {
    func_0x00010084dad0();
  }
  uStack_68 = *(ulong *)(param_3 + 0x178);
  if ((uStack_68 & 1) != 0) {
    piVar7 = (int *)(uStack_68 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = *piVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_104a9b1e0(&uStack_68,auStack_50,&uStack_58);
  if ((uStack_68 & 1) != 0) {
    func_0x00010084dad0();
  }
  uStack_70 = *param_2;
  if ((uStack_70 & 1) != 0) {
    piVar7 = (int *)(uStack_70 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = *piVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  puVar6 = auStack_50;
  puVar3 = &uStack_58;
  FUN_104a9b1e0(&uStack_70);
  if ((uStack_70 & 1) != 0) {
    func_0x00010084dad0();
  }
  *param_1 = 0;
  if (uStack_58 != 0) {
    puVar3 = param_4;
    _strlen();
    param_5 = (ulong *)&uStack_79;
    FUN_104aba878(&lStack_78,2);
    puVar6 = param_4;
    if (lStack_78 != 0) {
      *param_1 = lStack_78;
    }
  }
  lVar9 = 0x10;
  do {
    uVar4 = *(ulong *)((long)auStack_50 + lVar9);
    if ((uVar4 & 1) != 0) {
      func_0x00010084dad0();
    }
    iVar5 = (int)puVar6;
    lVar9 = lVar9 + -8;
  } while (lVar9 != -8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == auStack_50[3]) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 == 0) {
    __Unwind_Resume(uVar4);
  }
  FUN_104bd46a0();
  uVar10 = *puVar3;
  while (uVar10 != 0) {
    *puVar3 = *(ulong *)(uVar10 + 0x10);
    uVar8 = *param_5;
    if ((uVar8 & 1) != 0) {
      piVar7 = (int *)(uVar8 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = *piVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    func_0x0001008df0bc(uVar4);
    if ((uVar8 & 1) != 0) {
      func_0x00010084dad0();
    }
    *(undefined8 *)(uVar10 + 0x10) = *(undefined8 *)(uVar4 + 0xac8);
    *(ulong *)(uVar4 + 0xac8) = uVar10;
    uVar10 = *puVar3;
  }
  return;
}



/* Entry: 104a9a274; end: 104a9a31f;  */

void FUN_104a9a274(long param_1,undefined8 param_2,long *param_3,ulong *param_4)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  long lVar4;
  ulong uStack_38;
  
  lVar4 = *param_3;
  while (lVar4 != 0) {
    *param_3 = *(long *)(lVar4 + 0x10);
    uStack_38 = *param_4;
    if ((uStack_38 & 1) != 0) {
      piVar3 = (int *)(uStack_38 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar2) {
          *piVar3 = *piVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    func_0x0001008df0bc(param_1,param_2,lVar4 + 8,&uStack_38);
    if ((uStack_38 & 1) != 0) {
      func_0x00010084dad0();
    }
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(param_1 + 0xac8);
    *(long *)(param_1 + 0xac8) = lVar4;
    lVar4 = *param_3;
  }
  return;
}



/* Entry: 104a9a320; end: 104a9a383;  */

void FUN_104a9a320(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uStack_28;
  
  FUN_104a9a384(param_1 + 0x9c0);
  *(code **)(param_1 + 0xb00) = FUN_104a9a538;
  *(long *)(param_1 + 0xb08) = param_1;
  *(undefined8 *)(param_1 + 0xb10) = 0;
  *(code **)(param_1 + 0xb20) = FUN_104a9a5c8;
  *(long *)(param_1 + 0xb28) = param_1;
  *(undefined8 *)(param_1 + 0xb30) = 0;
  FUN_104a9a3ac(param_1,param_1 + 0xaf8,param_1 + 0xb18);
  if (*(int *)(param_1 + 0x90) == 1) {
    func_0x000100747474(0x11);
    *(undefined4 *)(param_1 + 0x90) = 2;
  }
  else if (*(int *)(param_1 + 0x90) == 0) {
    func_0x000100747474(0x11);
    *(undefined4 *)(param_1 + 0x90) = 1;
    plVar1 = (long *)(param_1 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(undefined **)(param_1 + 0x128) = &UNK_100749ff0;
    *(long *)(param_1 + 0x130) = param_1;
    *(undefined8 *)(param_1 + 0x138) = 0;
    uStack_28 = 0;
    func_0x000100747564(*(undefined8 *)(param_1 + 0x78),param_1 + 0x120,&uStack_28);
    if ((uStack_28 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  return;
}



/* Entry: 104a9a384; end: 104a9a3ab;  */

void FUN_104a9a384(int *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  int *piVar4;
  long *plVar5;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  if (*param_1 == 0) {
    *param_1 = 1;
    param_1[2] = 0;
    param_1[3] = 0;
    return;
  }
  func_0x00010bdaaca0();
  uStack_50 = *(ulong *)(param_1 + 0x26);
  if (uStack_50 == 0) {
    if (param_2 != (undefined8 *)0x0) {
      uStack_48 = 0;
      puVar3 = &uStack_48;
      func_0x0001004bd890();
      param_2[3] = puVar3;
      if ((uStack_48 & 1) != 0) {
        func_0x00010084dad0();
      }
      plVar5 = (long *)(param_1 + 0x1fc);
      *param_2 = 0;
      if (*plVar5 != 0) {
        plVar5 = *(long **)(param_1 + 0x1fe);
      }
      *plVar5 = (long)param_2;
      *(undefined8 **)(param_1 + 0x1fe) = param_2;
    }
    if (param_3 != (undefined8 *)0x0) {
      uStack_48 = 0;
      puVar3 = &uStack_48;
      func_0x0001004bd890();
      param_3[3] = puVar3;
      if ((uStack_48 & 1) != 0) {
        func_0x00010084dad0();
      }
      plVar5 = (long *)(param_1 + 0x200);
      *param_3 = 0;
      if (*plVar5 != 0) {
        plVar5 = *(long **)(param_1 + 0x202);
      }
      *plVar5 = (long)param_3;
      *(undefined8 **)(param_1 + 0x202) = param_3;
    }
  }
  else {
    if ((uStack_50 & 1) != 0) {
      piVar4 = (int *)(uStack_50 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    func_0x0001004bd7e8(&uStack_48,param_2,&uStack_50);
    if ((uStack_50 & 1) != 0) {
      func_0x00010084dad0();
    }
    uStack_58 = *(ulong *)(param_1 + 0x26);
    if ((uStack_58 & 1) != 0) {
      piVar4 = (int *)(uStack_58 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    func_0x0001004bd7e8(&uStack_48,param_3,&uStack_58);
    if ((uStack_58 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  return;
}



/* Entry: 104a9a3ac; end: 104a9a537;  */

void FUN_104a9a3ac(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  int *piVar4;
  long *plVar5;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  uStack_40 = *(ulong *)(param_1 + 0x98);
  if (uStack_40 == 0) {
    if (param_2 != (undefined8 *)0x0) {
      uStack_38 = 0;
      puVar3 = &uStack_38;
      func_0x0001004bd890();
      param_2[3] = puVar3;
      if ((uStack_38 & 1) != 0) {
        func_0x00010084dad0();
      }
      plVar5 = (long *)(param_1 + 0x7f0);
      *param_2 = 0;
      if (*plVar5 != 0) {
        plVar5 = *(long **)(param_1 + 0x7f8);
      }
      *plVar5 = (long)param_2;
      *(undefined8 **)(param_1 + 0x7f8) = param_2;
    }
    if (param_3 != (undefined8 *)0x0) {
      uStack_38 = 0;
      puVar3 = &uStack_38;
      func_0x0001004bd890();
      param_3[3] = puVar3;
      if ((uStack_38 & 1) != 0) {
        func_0x00010084dad0();
      }
      plVar5 = (long *)(param_1 + 0x800);
      *param_3 = 0;
      if (*plVar5 != 0) {
        plVar5 = *(long **)(param_1 + 0x808);
      }
      *plVar5 = (long)param_3;
      *(undefined8 **)(param_1 + 0x808) = param_3;
    }
  }
  else {
    if ((uStack_40 & 1) != 0) {
      piVar4 = (int *)(uStack_40 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    func_0x0001004bd7e8(&uStack_38,param_2,&uStack_40);
    if ((uStack_40 & 1) != 0) {
      func_0x00010084dad0();
    }
    uStack_48 = *(ulong *)(param_1 + 0x98);
    if ((uStack_48 & 1) != 0) {
      piVar4 = (int *)(uStack_48 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    func_0x0001004bd7e8(&uStack_38,param_3,&uStack_48);
    if ((uStack_48 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  return;
}



/* Entry: 104a9a538; end: 104a9a5c7;  */

void FUN_104a9a538(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uStack_28;
  
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  *(code **)(param_1 + 0xb00) = FUN_104a9b2a4;
  *(long *)(param_1 + 0xb08) = param_1;
  *(undefined8 *)(param_1 + 0xb10) = 0;
  uStack_28 = *param_2;
  if ((uStack_28 & 1) != 0) {
    piVar4 = (int *)(uStack_28 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  func_0x00010074775c(uVar3,param_1 + 0xaf8,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104a9a5c8; end: 104a9a657;  */

void FUN_104a9a5c8(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uStack_28;
  
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  *(code **)(param_1 + 0xb20) = FUN_104a9b330;
  *(long *)(param_1 + 0xb28) = param_1;
  *(undefined8 *)(param_1 + 0xb30) = 0;
  uStack_28 = *param_2;
  if ((uStack_28 & 1) != 0) {
    piVar4 = (int *)(uStack_28 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  func_0x00010074775c(uVar3,param_1 + 0xb18,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104a9a658; end: 104a9a6c7;  */

long FUN_104a9a658(long param_1)

{
  long lStack_28;
  
  if (*(long *)(param_1 + 0x1d8) != 0) {
    *(long *)(param_1 + 0x1e0) = *(long *)(param_1 + 0x1d8);
    __ZdlPv();
  }
  lStack_28 = param_1 + 0x1c0;
  FUN_104a9a6c8(&lStack_28);
  lStack_28 = param_1 + 0x1a8;
  FUN_104a9a6c8(&lStack_28);
  func_0x0001004b6d90(param_1 + 0x188);
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    __ZdlPv(*(undefined8 *)(param_1 + 0x20));
  }
  return param_1;
}



/* Entry: 104a9a6c8; end: 104a9a737;  */

void FUN_104a9a6c8(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x28;
        func_0x0001004b6d90();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 104a9a738; end: 104a9a767;  */

undefined1  [16] FUN_104a9a738(ulong param_1,long param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (-1 < param_2) {
    lVar1 = param_2 << 1;
    __Znwm(lVar1);
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  FUN_104a7757c();
  lVar1 = 0x7fffffffffffffff;
  if (((param_1 != 0x7fffffffffffffff && param_2 != 0x7fffffffffffffff) &&
      (lVar1 = -0x8000000000000000, param_1 != 0x8000000000000000)) &&
     (param_2 != -0x8000000000000000)) {
    if ((long)param_1 < 1) {
      if (param_2 < (long)(-0x8000000000000000 - param_1)) goto LAB_104a9a778;
    }
    else if ((long)(param_1 ^ 0x7fffffffffffffff) < param_2) {
      lVar1 = 0x7fffffffffffffff;
      goto LAB_104a9a778;
    }
    lVar1 = param_2 + param_1;
  }
LAB_104a9a778:
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = lVar1;
  return auVar3;
}



/* Entry: 104a9a768; end: 104a9a7c3;  */

long FUN_104a9a768(ulong param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0x7fffffffffffffff;
  if (((param_1 != 0x7fffffffffffffff && param_2 != 0x7fffffffffffffff) &&
      (lVar1 = -0x8000000000000000, param_1 != 0x8000000000000000)) &&
     (param_2 != -0x8000000000000000)) {
    if ((long)param_1 < 1) {
      if (param_2 < (long)(-0x8000000000000000 - param_1)) {
        return -0x8000000000000000;
      }
    }
    else if ((long)(param_1 ^ 0x7fffffffffffffff) < param_2) {
      return 0x7fffffffffffffff;
    }
    lVar1 = param_2 + param_1;
  }
  return lVar1;
}



/* Entry: 104a9a7c4; end: 104a9a8ab;  */

void FUN_104a9a7c4(ulong *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  if (*param_2 != 0) {
    return;
  }
  if (param_1[0x19d] != 0) {
    plVar1 = (long *)(param_1[0x19d] + 0x60);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar4 = param_1 + 1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
    if (bVar3) {
      *puVar4 = *puVar4 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  param_1[0x188] = (ulong)FUN_104a9ab60;
  param_1[0x189] = (ulong)param_1;
  param_1[0x18a] = 0;
  puVar4 = param_1;
  func_0x000100460dc4();
  uVar5 = *puVar4;
  func_0x0001004671a4();
  uVar7 = param_1[0x19a];
  lVar6 = 0x7fffffffffffffff;
  if ((uVar5 != 0x7fffffffffffffff && uVar7 != 0x7fffffffffffffff) &&
     (lVar6 = -0x8000000000000000, uVar5 != 0x8000000000000000 && uVar7 != 0x8000000000000000)) {
    if ((long)uVar5 < 1) {
      if ((long)uVar7 < (long)(-0x8000000000000000 - uVar5)) goto LAB_104a9a888;
    }
    else if ((long)(uVar5 ^ 0x7fffffffffffffff) < (long)uVar7) {
      lVar6 = 0x7fffffffffffffff;
      goto LAB_104a9a888;
    }
    lVar6 = uVar7 + uVar5;
  }
LAB_104a9a888:
  func_0x000100480ee4(param_1 + 0x192,lVar6,param_1 + 0x187);
  *(undefined1 *)((long)param_1 + 0xcd9) = 1;
  return;
}



/* Entry: 104a9a8ac; end: 104a9aa3f;  */

void FUN_104a9a8ac(long param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  ulong uStack_38;
  
  if ((*(int *)(param_1 + 0xcdc) != 1) || (*param_2 != 0)) goto LAB_104a9a9e0;
  if (*(char *)(param_1 + 0xcd9) == '\0') {
    uVar6 = *(undefined8 *)(param_1 + 0x78);
    *(code **)(param_1 + 0xc20) = FUN_104a9a8ac;
    *(long *)(param_1 + 0xc28) = param_1;
    *(undefined8 *)(param_1 + 0xc30) = 0;
    uStack_38 = *param_2;
    if ((uStack_38 & 1) != 0) {
      piVar9 = (int *)(uStack_38 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = *piVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x00010074775c(uVar6,param_1 + 0xc18,&uStack_38);
    if ((uStack_38 & 1) == 0) {
      return;
    }
    func_0x00010084dad0();
    return;
  }
  *(undefined1 *)(param_1 + 0xcd9) = 0;
  *(undefined4 *)(param_1 + 0xcdc) = 0;
  puVar4 = (ulong *)(param_1 + 0xc90);
  func_0x0001005a5960();
  plVar1 = (long *)(param_1 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *(undefined **)(param_1 + 0xbe0) = &UNK_100748e30;
  *(long *)(param_1 + 0xbe8) = param_1;
  *(undefined8 *)(param_1 + 0xbf0) = 0;
  func_0x000100460dc4();
  uVar5 = *puVar4;
  func_0x0001004671a4();
  lVar8 = *(long *)(param_1 + 0xcc8);
  lVar7 = 0x7fffffffffffffff;
  if ((uVar5 != 0x7fffffffffffffff && lVar8 != 0x7fffffffffffffff) &&
     (lVar7 = -0x8000000000000000, uVar5 != 0x8000000000000000 && lVar8 != -0x8000000000000000)) {
    if ((long)uVar5 < 1) {
      if ((long)(-0x8000000000000000 - uVar5) <= lVar8) goto LAB_104a9a9d0;
    }
    else if ((long)(uVar5 ^ 0x7fffffffffffffff) < lVar8) {
      lVar7 = 0x7fffffffffffffff;
    }
    else {
LAB_104a9a9d0:
      lVar7 = lVar8 + uVar5;
    }
  }
  func_0x000100480ee4(param_1 + 0xc58,lVar7,param_1 + 0xbd8);
LAB_104a9a9e0:
  plVar1 = (long *)(param_1 + 8);
  do {
    lVar7 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar7 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar7 + -1 != 0) {
    return;
  }
  FUN_104a96f9c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104a9aa40; end: 104a9aacf;  */

void FUN_104a9aa40(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uStack_28;
  
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  *(code **)(param_1 + 0xc20) = FUN_104a9a8ac;
  *(long *)(param_1 + 0xc28) = param_1;
  *(undefined8 *)(param_1 + 0xc30) = 0;
  uStack_28 = *param_2;
  if ((uStack_28 & 1) != 0) {
    piVar4 = (int *)(uStack_28 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  func_0x00010074775c(uVar3,param_1 + 0xc18,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104a9aad0; end: 104a9ab5f;  */

void FUN_104a9aad0(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uStack_28;
  
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  *(code **)(param_1 + 0xc00) = FUN_104a9a7c4;
  *(long *)(param_1 + 0xc08) = param_1;
  *(undefined8 *)(param_1 + 0xc10) = 0;
  uStack_28 = *param_2;
  if ((uStack_28 & 1) != 0) {
    piVar4 = (int *)(uStack_28 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  func_0x00010074775c(uVar3,param_1 + 0xbf8,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104a9ab60; end: 104a9abef;  */

void FUN_104a9ab60(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uStack_28;
  
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  *(code **)(param_1 + 0xc40) = FUN_104a9abf0;
  *(long *)(param_1 + 0xc48) = param_1;
  *(undefined8 *)(param_1 + 0xc50) = 0;
  uStack_28 = *param_2;
  if ((uStack_28 & 1) != 0) {
    piVar4 = (int *)(uStack_28 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  func_0x00010074775c(uVar3,param_1 + 0xc38,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104a9abf0; end: 104a9adb3;  */

void FUN_104a9abf0(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_39;
  ulong uStack_38;
  ulong uStack_30;
  undefined8 *puStack_28;
  
  if (*(int *)(param_1 + 0xcdc) == 1) {
    if (*param_2 == 0) {
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                          ,0xb49,1,"%s: Keepalive watchdog fired. Closing transport.");
      *(undefined4 *)(param_1 + 0xcdc) = 2;
      uStack_50 = 0;
      uStack_48 = 0;
      uStack_58 = 0;
      FUN_104ab5920(&uStack_38,2,"keepalive watchdog timeout",0x1a,&uStack_39,&uStack_58);
      FUN_104abaa50(&uStack_30,&uStack_38,3,0xe);
      FUN_104a98258(param_1,&uStack_30);
      if ((uStack_30 & 1) != 0) {
        func_0x00010084dad0();
      }
      if ((uStack_38 & 1) != 0) {
        func_0x00010084dad0();
      }
      puStack_28 = &uStack_58;
      func_0x000100482b64(&puStack_28);
    }
  }
  else {
    puStack_28 = (undefined8 *)0x4;
    if (*param_2 != 4) {
      func_0x00010ae7711c(param_2,&puStack_28);
      if (((ulong)puStack_28 & 1) != 0) {
        func_0x00010084dad0();
      }
      if (((ulong)param_2 & 1) == 0) {
        func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                            ,0xb56,2,"keepalive_ping_end state error: %d (expect: %d)");
      }
    }
  }
  plVar1 = (long *)(param_1 + 8);
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 == 0) {
    FUN_104a96f9c(param_1);
    __ZdlPv();
  }
  return;
}



/* Entry: 104a9adb4; end: 104a9ae53;  */

void FUN_104a9adb4(uint *param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  ulong uVar5;
  ulong uStack_28;
  
  if (*param_1 < *(uint *)(param_3 + 0x9c)) {
    *(uint *)(param_3 + 0x398) = *(uint *)(param_3 + 0x398) | 0x1000000;
    *(undefined1 *)(param_3 + 0x3d0) = 1;
    lVar3 = *(long *)(param_3 + 8);
    uVar5 = *(ulong *)(lVar3 + 0x760);
    if ((uVar5 & 1) != 0) {
      piVar4 = (int *)(uVar5 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uStack_28 = uVar5;
    FUN_104a989e8(lVar3,param_3,&uStack_28);
    if ((uVar5 & 1) != 0) {
      func_0x00010084dad0(uVar5);
    }
  }
  return;
}



/* Entry: 104a9ae54; end: 104a9aec3;  */

void FUN_104a9ae54(long param_1)

{
  undefined8 uVar1;
  ulong uStack_28;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x78);
  *(code **)(param_1 + 0x20) = FUN_104a9afdc;
  *(long *)(param_1 + 0x28) = param_1;
  *(undefined8 *)(param_1 + 0x30) = 0;
  uStack_28 = 0;
  func_0x00010074775c(uVar1,param_1 + 0x18,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104a9aec4; end: 104a9af6f;  */

void FUN_104a9aec4(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uStack_28;
  
  if (*param_2 == 0) {
    uVar4 = *(undefined8 *)(param_1[2] + 0x78);
    param_1[0xf] = 0x104a9b0e4;
    param_1[0x10] = (long)param_1;
    param_1[0x11] = 0;
    uStack_28 = 0;
    func_0x00010074775c(uVar4,param_1 + 0xe,&uStack_28);
    if ((uStack_28 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  else {
    plVar1 = param_1 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0 && param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000104a9af0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 104a9af70; end: 104a9afc7;  */

undefined8 * FUN_104a9af70(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_1107c4178;
  lVar4 = param_1[2];
  plVar1 = (long *)(lVar4 + 8);
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((lVar4 != 0) && (lVar5 == 1)) {
    FUN_104a96f9c();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 104a9afc8; end: 104a9afdb;  */

void FUN_104a9afc8(void)

{
  FUN_104a9af70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104a9afdc; end: 104a9b137;  */

void FUN_104a9afdc(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  func_0x0001005a5960(param_1 + 7);
  func_0x000104a9b03c(param_1);
  plVar1 = param_1 + 1;
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 != 0 || param_1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000104a9b038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 104a9b138; end: 104a9b1af;  */

void FUN_104a9b138(ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  int *piVar4;
  ulong uVar5;
  ulong uStack_28;
  
  uVar3 = param_1[1];
  uVar5 = *param_1;
  if ((uVar5 & 1) != 0) {
    piVar4 = (int *)(uVar5 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_28 = uVar5;
  FUN_104a989e8(uVar3,param_3,&uStack_28);
  if ((uVar5 & 1) != 0) {
    func_0x00010084dad0(uVar5);
  }
  return;
}



/* Entry: 104a9b1b0; end: 104a9b1df;  */

ulong * FUN_104a9b1b0(ulong *param_1)

{
  if ((*param_1 & 1) != 0) {
    func_0x00010084dad0();
  }
  return param_1;
}



/* Entry: 104a9b1e0; end: 104a9b2a3;  */

void FUN_104a9b1e0(ulong *param_1,ulong *param_2,ulong *param_3)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  int *piVar7;
  ulong *puVar8;
  
  uVar6 = *param_1;
  if (uVar6 != 0) {
    uVar5 = 0;
    if (*param_3 != 0) {
      uVar6 = 0;
      puVar8 = param_2;
      do {
        if (*param_1 == *puVar8) {
          return;
        }
        puVar3 = param_1;
        func_0x00010ae7711c(param_1,puVar8);
        if (((ulong)puVar3 & 1) != 0) {
          return;
        }
        uVar6 = uVar6 + 1;
        uVar5 = *param_3;
        puVar8 = puVar8 + 1;
      } while (uVar6 < uVar5);
      uVar6 = *param_1;
    }
    uVar4 = param_2[uVar5];
    if (uVar6 != uVar4) {
      if ((uVar6 & 1) != 0) {
        piVar7 = (int *)(uVar6 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar2) {
            *piVar7 = *piVar7 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        uVar6 = *param_1;
      }
      param_2[uVar5] = uVar6;
      if ((uVar4 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    *param_3 = *param_3 + 1;
  }
  return;
}



/* Entry: 104a9b2a4; end: 104a9b32f;  */

void FUN_104a9b2a4(long param_1,long *param_2)

{
  if ((*param_2 == 0) && (*(long *)(param_1 + 0x98) == 0)) {
    if (*(int *)(param_1 + 0xcdc) == 0) {
      func_0x0001005a5960(param_1 + 0xc58);
    }
    func_0x000104a9b2f0(param_1 + 0x9c0);
    *(undefined1 *)(param_1 + 0xb99) = 1;
  }
  return;
}



/* Entry: 104a9b330; end: 104a9b497;  */

void FUN_104a9b330(ulong *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  ulong **ppuVar4;
  ulong **ppuVar5;
  ulong *puVar6;
  undefined4 uVar7;
  ulong *puVar8;
  ulong uVar9;
  int *piVar10;
  ulong uStack_78;
  ulong *puStack_70;
  ulong **ppuStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  ulong *puStack_48;
  undefined4 uStack_40;
  ulong uStack_38;
  
  if ((*param_2 == 0) && (param_1[0x13] == 0)) {
    if (*(char *)((long)param_1 + 0xb99) != '\0') {
      *(undefined1 *)((long)param_1 + 0xb99) = 0;
      puVar6 = param_1 + 0x135;
      puVar3 = param_1 + 0x138;
      FUN_104add274();
      uVar7 = SUB84(param_2,0);
      func_0x000100747038();
      ppuVar4 = &puStack_48;
      puVar8 = param_1;
      puStack_48 = puVar6;
      uStack_40 = uVar7;
      func_0x000100747370(ppuVar4,param_1,0);
      if ((char)param_1[0x173] == '\0') {
        *(undefined1 *)(param_1 + 0x173) = 1;
        param_1[0x15c] = (ulong)FUN_104a9b498;
        param_1[0x15d] = (ulong)param_1;
        param_1[0x15e] = 0;
                    /* WARNING: Could not recover jumptable at 0x000100480ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puRam0000000113815c30)(param_1 + 0x174,puVar3,param_1 + 0x15b);
        return;
      }
      func_0x00010bdaada8();
      FUN_104bd46a0();
      func_0x0001004bdf74(&uStack_38);
      ppuVar5 = ppuVar4;
      __Unwind_Resume();
      pcStack_58 = FUN_104a9b498;
      puVar6 = ppuVar5[0xf];
      puStack_70 = puVar3;
      ppuStack_68 = ppuVar4;
      puStack_60 = &stack0xfffffffffffffff0;
      ppuVar5[0x15c] = (ulong *)FUN_104a9b528;
      ppuVar5[0x15d] = (ulong *)ppuVar5;
      ppuVar5[0x15e] = (ulong *)0x0;
      uStack_78 = *puVar8;
      if ((uStack_78 & 1) != 0) {
        piVar10 = (int *)(uStack_78 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = *piVar10 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      func_0x00010074775c(puVar6,ppuVar5 + 0x15b,&uStack_78);
      if ((uStack_78 & 1) != 0) {
        func_0x00010084dad0();
      }
      return;
    }
    uVar9 = param_1[0xf];
    param_1[0x164] = (ulong)FUN_104a9b330;
    param_1[0x165] = (ulong)param_1;
    param_1[0x166] = 0;
    uStack_38 = *param_2;
    if ((uStack_38 & 1) != 0) {
      piVar10 = (int *)(uStack_38 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar2) {
          *piVar10 = *piVar10 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    func_0x00010074775c(uVar9,param_1 + 0x163,&uStack_38);
    if ((uStack_38 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  else {
    puVar6 = param_1 + 1;
    do {
      uVar9 = *puVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puVar6,0x10);
      if (bVar2) {
        *puVar6 = uVar9 - 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((param_1 != (ulong *)0x0) && (uVar9 == 1)) {
      FUN_104a96f9c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 104a9b498; end: 104a9b527;  */

void FUN_104a9b498(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uStack_28;
  
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  *(code **)(param_1 + 0xae0) = FUN_104a9b528;
  *(long *)(param_1 + 0xae8) = param_1;
  *(undefined8 *)(param_1 + 0xaf0) = 0;
  uStack_28 = *param_2;
  if ((uStack_28 & 1) != 0) {
    piVar4 = (int *)(uStack_28 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  func_0x00010074775c(uVar3,param_1 + 0xad8,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104a9b528; end: 104a9b5a3;  */

/* WARNING: Removing unreachable block (ram,0x000100747524) */

void FUN_104a9b528(undefined8 *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  char cStack_50;
  ulong uStack_48;
  
  if (*(char *)(param_1 + 0x173) != '\0') {
    *(undefined1 *)(param_1 + 0x173) = 0;
    if (*param_2 == 0) {
      if (param_1[0x139] != 0) {
        FUN_104a9a384(param_1 + 0x138);
        param_1[0x160] = FUN_104a9a538;
        param_1[0x161] = param_1;
        param_1[0x162] = 0;
        param_1[0x164] = FUN_104a9a5c8;
        param_1[0x165] = param_1;
        param_1[0x166] = 0;
        FUN_104a9a3ac(param_1,param_1 + 0x15f,param_1 + 0x163);
        if (*(int *)(param_1 + 0x12) == 1) {
          func_0x000100747474(0x11);
          *(undefined4 *)(param_1 + 0x12) = 2;
        }
        else if (*(int *)(param_1 + 0x12) == 0) {
          func_0x000100747474(0x11);
          *(undefined4 *)(param_1 + 0x12) = 1;
          plVar6 = param_1 + 1;
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar2) {
              *plVar6 = *plVar6 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          param_1[0x25] = &UNK_100749ff0;
          param_1[0x26] = param_1;
          param_1[0x27] = 0;
          func_0x000100747564(param_1[0xf],param_1 + 0x24,&stack0xffffffffffffffd8);
        }
        return;
      }
      *(undefined1 *)(param_1 + 0x15a) = 1;
      plVar6 = param_1 + 1;
      do {
        lVar5 = *plVar6 + -1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar5;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    else {
      plVar6 = param_1 + 1;
      do {
        lVar5 = *plVar6 + -1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar5;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (lVar5 != 0) {
      return;
    }
    FUN_104a96f9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  func_0x00010bdaaddc();
  if ((char)param_2[4] == '\0') {
    FUN_104acb358(param_1);
    uStack_70 = uStack_70 & 0xffffffffffffff00;
    cStack_50 = '\0';
    if ((char)param_2[4] == '\0') {
      lVar5 = param_1[3];
      plVar6 = (long *)(lVar5 + 8);
      do {
        lVar4 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((lVar5 != 0) && (lVar4 == 1)) {
        FUN_104a96f9c();
        __ZdlPv();
      }
      goto LAB_104a9b66c;
    }
  }
  plVar6 = param_1 + 3;
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_60 = param_2[2];
  uStack_58 = param_2[3];
  param_2[3] = 0;
  cStack_50 = '\x01';
  lVar5 = *plVar6;
  *(code **)(lVar5 + 0xb60) = FUN_104a9b708;
  *(long *)(lVar5 + 0xb68) = lVar5;
  *(undefined8 *)(lVar5 + 0xb70) = 0;
  lVar5 = *plVar6;
  FUN_104a9b88c(lVar5 + 0x58,&uStack_70);
  uVar3 = *(undefined8 *)(lVar5 + 0x70);
  *(ulong *)(lVar5 + 0x68) = uStack_60;
  *(ulong *)(lVar5 + 0x70) = uStack_58;
  uStack_48 = 0;
  uStack_58 = uVar3;
  func_0x00010074775c(*(undefined8 *)(*plVar6 + 0x78),*plVar6 + 0xb58,&uStack_48);
  if ((uStack_48 & 1) != 0) {
    func_0x00010084dad0();
  }
LAB_104a9b66c:
  if (cStack_50 != '\0') {
    FUN_104acb218(&uStack_70);
  }
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = &PTR____cxa_pure_virtual_1107c4208;
    func_0x000104a9b8f0(param_1 + 1);
    __ZdlPv(param_1);
  }
  return;
}



/* Entry: 104a9b5a4; end: 104a9b707;  */

void FUN_104a9b5a4(undefined8 *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  char cStack_40;
  ulong uStack_38;
  
  if ((char)param_2[4] == '\0') {
    FUN_104acb358(param_1);
    uStack_60 = uStack_60 & 0xffffffffffffff00;
    cStack_40 = '\0';
    if ((char)param_2[4] == '\0') {
      lVar5 = param_1[3];
      plVar6 = (long *)(lVar5 + 8);
      do {
        lVar4 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((lVar5 != 0) && (lVar4 == 1)) {
        FUN_104a96f9c();
        __ZdlPv();
      }
      goto LAB_104a9b66c;
    }
  }
  plVar6 = param_1 + 3;
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_50 = param_2[2];
  uStack_48 = param_2[3];
  param_2[3] = 0;
  cStack_40 = '\x01';
  lVar5 = *plVar6;
  *(code **)(lVar5 + 0xb60) = FUN_104a9b708;
  *(long *)(lVar5 + 0xb68) = lVar5;
  *(undefined8 *)(lVar5 + 0xb70) = 0;
  lVar5 = *plVar6;
  FUN_104a9b88c(lVar5 + 0x58,&uStack_60);
  uVar3 = *(undefined8 *)(lVar5 + 0x70);
  *(ulong *)(lVar5 + 0x68) = uStack_50;
  *(ulong *)(lVar5 + 0x70) = uStack_48;
  uStack_38 = 0;
  uStack_48 = uVar3;
  func_0x00010074775c(*(undefined8 *)(*plVar6 + 0x78),*plVar6 + 0xb58,&uStack_38);
  if ((uStack_38 & 1) != 0) {
    func_0x00010084dad0();
  }
LAB_104a9b66c:
  if (cStack_40 != '\0') {
    FUN_104acb218(&uStack_60);
  }
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = &PTR____cxa_pure_virtual_1107c4208;
    func_0x000104a9b8f0(param_1 + 1);
    __ZdlPv(param_1);
  }
  return;
}



/* Entry: 104a9b708; end: 104a9b88b;  */

void FUN_104a9b708(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_51;
  ulong uStack_50;
  ulong uStack_48;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar4 = *param_2;
  if (lVar4 == 0) {
    lVar4 = param_1 + 0xf8;
    func_0x0001008ded94();
    if (lVar4 == 0) {
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_70 = 0;
      FUN_104ab5920(&uStack_50,2,"Buffers full",0xc,&uStack_51,&uStack_70);
      FUN_104abaa50(&uStack_48,&uStack_50,7,0xb);
      FUN_104a97f00(param_1,&uStack_48,1);
      if ((uStack_48 & 1) != 0) {
        func_0x00010084dad0();
      }
      if ((uStack_50 & 1) != 0) {
        func_0x00010084dad0();
      }
      puStack_40 = (undefined1 *)&uStack_70;
      func_0x000100482b64(&puStack_40);
    }
    lVar4 = *param_2;
  }
  *(undefined1 *)(param_1 + 0xb50) = 0;
  puStack_40 = (undefined1 *)0x4;
  if (lVar4 != 4) {
    func_0x00010ae7711c(param_2,&puStack_40);
    if (((ulong)puStack_40 & 1) != 0) {
      func_0x00010084dad0();
    }
    if (((ulong)param_2 & 1) == 0) {
      uStack_38 = *(undefined8 *)(param_1 + 0x60);
      puStack_40 = *(undefined1 **)(param_1 + 0x58);
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(undefined8 *)(param_1 + 0x60) = 0;
      uStack_30 = *(undefined8 *)(param_1 + 0x68);
      uStack_28 = *(undefined8 *)(param_1 + 0x70);
      *(undefined8 *)(param_1 + 0x70) = 0;
      FUN_104acb218(&puStack_40);
    }
  }
  plVar1 = (long *)(param_1 + 8);
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 == 0) {
    FUN_104a96f9c(param_1);
    __ZdlPv();
  }
  return;
}



/* Entry: 104a9b88c; end: 104a9b947;  */

undefined8 * FUN_104a9b88c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 104a9b948; end: 104a9baab;  */

void FUN_104a9b948(undefined8 *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  char cStack_40;
  ulong uStack_38;
  
  if ((char)param_2[4] == '\0') {
    FUN_104acb358(param_1);
    uStack_60 = uStack_60 & 0xffffffffffffff00;
    cStack_40 = '\0';
    if ((char)param_2[4] == '\0') {
      lVar5 = param_1[3];
      plVar6 = (long *)(lVar5 + 8);
      do {
        lVar4 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((lVar5 != 0) && (lVar4 == 1)) {
        FUN_104a96f9c();
        __ZdlPv();
      }
      goto LAB_104a9ba10;
    }
  }
  plVar6 = param_1 + 3;
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_50 = param_2[2];
  uStack_48 = param_2[3];
  param_2[3] = 0;
  cStack_40 = '\x01';
  lVar5 = *plVar6;
  *(code **)(lVar5 + 0xb80) = FUN_104a9baac;
  *(long *)(lVar5 + 0xb88) = lVar5;
  *(undefined8 *)(lVar5 + 0xb90) = 0;
  lVar5 = *plVar6;
  FUN_104a9b88c(lVar5 + 0x58,&uStack_60);
  uVar3 = *(undefined8 *)(lVar5 + 0x70);
  *(ulong *)(lVar5 + 0x68) = uStack_50;
  *(ulong *)(lVar5 + 0x70) = uStack_48;
  uStack_38 = 0;
  uStack_48 = uVar3;
  func_0x00010074775c(*(undefined8 *)(*plVar6 + 0x78),*plVar6 + 0xb78,&uStack_38);
  if ((uStack_38 & 1) != 0) {
    func_0x00010084dad0();
  }
LAB_104a9ba10:
  if (cStack_40 != '\0') {
    FUN_104acb218(&uStack_60);
  }
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = &PTR____cxa_pure_virtual_1107c4208;
    func_0x000104a9b8f0(param_1 + 1);
    __ZdlPv(param_1);
  }
  return;
}



/* Entry: 104a9baac; end: 104a9bc5f;  */

void FUN_104a9baac(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_61;
  ulong uStack_60;
  ulong uStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar5 = param_1 + 0xf8;
  uVar4 = uVar5;
  func_0x0001008ded94();
  *(undefined1 *)(param_1 + 0xb51) = 0;
  lVar6 = *param_2;
  if (lVar6 == 0 && uVar4 != 0) {
    FUN_104aa7b74(uVar5);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_80 = 0;
    FUN_104ab5920(&uStack_60,2,"Buffers full",0xc,&uStack_61,&uStack_80);
    FUN_104abaa50(&uStack_58,&uStack_60,7,0xb);
    FUN_104a989e8(param_1,uVar5,&uStack_58);
    if ((uStack_58 & 1) != 0) {
      func_0x00010084dad0();
    }
    if ((uStack_60 & 1) != 0) {
      func_0x00010084dad0();
    }
    puStack_50 = (undefined1 *)&uStack_80;
    func_0x000100482b64(&puStack_50);
    if (1 < uVar4) {
      func_0x0001008dee98(param_1);
    }
    lVar6 = *param_2;
  }
  puStack_50 = (undefined1 *)0x4;
  if (lVar6 != 4) {
    func_0x00010ae7711c(param_2,&puStack_50);
    if (((ulong)puStack_50 & 1) != 0) {
      func_0x00010084dad0();
    }
    if (((ulong)param_2 & 1) == 0) {
      uStack_48 = *(undefined8 *)(param_1 + 0x60);
      puStack_50 = *(undefined1 **)(param_1 + 0x58);
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(undefined8 *)(param_1 + 0x60) = 0;
      uStack_40 = *(undefined8 *)(param_1 + 0x68);
      uStack_38 = *(undefined8 *)(param_1 + 0x70);
      *(undefined8 *)(param_1 + 0x70) = 0;
      FUN_104acb218(&puStack_50);
    }
  }
  plVar1 = (long *)(param_1 + 8);
  do {
    lVar6 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 + -1 == 0) {
    FUN_104a96f9c(param_1);
    __ZdlPv();
  }
  return;
}



/* Entry: 104a9bc60; end: 104a9bc6b;  */

void FUN_104a9bc60(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001005a6210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x18))(*(long **)(param_1 + 0x10),param_3);
  return;
}



/* Entry: 104a9bc6c; end: 104a9bcd7;  */

void FUN_104a9bc6c(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_2 + 0x28) = 0x104a9bd64;
  *(long *)(param_2 + 0x30) = param_2;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = param_3;
  uStack_28 = 0;
  func_0x00010074775c(uVar1,param_2 + 0x20,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104a9bcd8; end: 104a9bd5b;  */

void FUN_104a9bcd8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uStack_28;
  
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  puVar1 = (undefined8 *)0x30;
  func_0x000100460200();
  *puVar1 = FUN_104a9bd68;
  puVar1[1] = param_1;
  puVar1[3] = &UNK_1004be1e0;
  puVar1[4] = puVar1;
  puVar1[5] = 0;
  uStack_28 = 0;
  func_0x00010074775c(uVar2,puVar1 + 2,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104a9bd5c; end: 104a9bd67;  */

undefined8 FUN_104a9bd5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104a9bd68; end: 104a9be8b;  */

void FUN_104a9bd68(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_39;
  ulong uStack_38;
  ulong uStack_30;
  undefined8 *puStack_28;
  
  *(undefined1 *)(param_1 + 0x94) = 1;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_58 = 0;
  FUN_104ab5920(&uStack_38,2,"Transport destroyed",0x13,&uStack_39,&uStack_58);
  FUN_104abaa50(&uStack_30,&uStack_38,0xc,*(undefined4 *)(param_1 + 0x90));
  FUN_104a98258(param_1,&uStack_30);
  if ((uStack_30 & 1) != 0) {
    func_0x00010084dad0();
  }
  if ((uStack_38 & 1) != 0) {
    func_0x00010084dad0();
  }
  puStack_28 = &uStack_58;
  func_0x000100482b64(&puStack_28);
  plVar3 = *(long **)(param_1 + 0x30);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  FUN_104a9be8c((long *)(param_1 + 0x30));
  plVar3 = (long *)(param_1 + 8);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    FUN_104a96f9c(param_1);
    __ZdlPv();
  }
  return;
}



/* Entry: 104a9be8c; end: 104a9bee7;  */

void FUN_104a9be8c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
      return;
    }
  }
  return;
}



/* Entry: 104a9bee8; end: 104a9bf13;  */

undefined1  [16]
FUN_104a9bee8(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long alStack_88 [8];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = (long *)0x2;
  uVar4 = param_2;
  func_0x0001004686b8();
  if ((int)plVar1 != 0) {
    plVar1 = alStack_88;
    func_0x000107c616d0(plVar1,0x40,param_4,&stack0x00000000);
    if ((int)(uint)plVar1 < 0) {
      plVar3 = (long *)0x0;
      plVar1 = (long *)0x0;
    }
    else if ((uint)plVar1 < 0x40) {
      plVar1 = (long *)0x0;
      plVar3 = alStack_88;
    }
    else {
      plVar1 = (long *)(((ulong)plVar1 & 0xffffffff) + 1);
      func_0x000100460200();
      func_0x000107c616d0();
      plVar3 = plVar1;
    }
    FUN_104a6e9e0(param_1,param_2,2,plVar3);
    func_0x000100460314();
    uVar4 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar6._8_8_ = uVar4;
    auVar6._0_8_ = plVar1;
    return auVar6;
  }
  func_0x000107c60e78();
  if (uVar4 >> 0x3d == 0) {
    lVar2 = uVar4 << 3;
    func_0x000107c60e20(lVar2);
    auVar7._8_8_ = uVar4;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
  FUN_104a7757c();
  lVar2 = plVar1[1];
  lVar5 = plVar1[2];
  while (lVar5 != lVar2) {
    plVar1[2] = lVar5 + -8;
    plVar3 = *(long **)(lVar5 + -8);
    *(undefined8 *)(lVar5 + -8) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    lVar5 = plVar1[2];
  }
  if (*plVar1 != 0) {
    func_0x000107c60e14();
  }
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = plVar1;
  return auVar8;
}



/* Entry: 104a9bf14; end: 104a9bf87;  */

void FUN_104a9bf14(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  pcVar1 = pcRam00000001136a1e18;
  if (pcRam00000001136a1e18 != (code *)0x0 && lRam00000001136a1e20 != 0) {
    puVar2 = (undefined8 *)0x18;
    __Znwm();
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
    uVar3 = *param_2;
    (*pcVar1)();
    uVar5 = param_2[0x10f];
    uVar4 = *param_1;
    *puVar2 = uVar3;
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
    *param_1 = puVar2;
  }
  return;
}



/* Entry: 104a9bf88; end: 104a9c047;  */

void FUN_104a9bf88(undefined8 *param_1,long param_2,ulong *param_3)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined8 *puVar6;
  ulong uStack_48;
  
  pcVar3 = pcRam00000001136a1e20;
  while (param_1 != (undefined8 *)0x0) {
    pcRam00000001136a1e20 = pcVar3;
    if (pcVar3 != (code *)0x0) {
      if (param_2 != 0) {
        *(int *)(param_2 + 0x3c0) = (int)param_1[2];
      }
      uVar4 = *param_1;
      uStack_48 = *param_3;
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
      (*pcVar3)(uVar4,param_2,&uStack_48);
      if ((uStack_48 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    puVar6 = (undefined8 *)param_1[1];
    __ZdlPv(param_1);
    param_1 = puVar6;
    pcVar3 = pcRam00000001136a1e20;
  }
  pcRam00000001136a1e20 = pcVar3;
  return;
}



/* Entry: 104a9c048; end: 104a9c073;  */

void FUN_104a9c048(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_1;
  uStack_18 = param_2;
  FUN_104a9c074(param_1,param_2,&uStack_20,FUN_104a9c194);
  return;
}



/* Entry: 104a9c074; end: 104a9c193;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_104a9c074(undefined8 *param_1,long *param_2,long *******param_3,long *******param_4,
                  code *param_5,long *param_6,long *******param_7)

{
  long ******pppppplVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  long *******ppppppplVar5;
  long *******ppppppplVar6;
  long *******ppppppplVar7;
  int iVar8;
  long *******ppppppplVar9;
  long *******ppppppplVar10;
  long *******ppppppplVar11;
  long *******ppppppplVar12;
  code *pcVar13;
  code *pcVar14;
  int iVar15;
  undefined4 uVar16;
  undefined8 *extraout_x8;
  long *****ppppplVar17;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  int *piVar18;
  undefined8 *extraout_x8_02;
  long *plVar19;
  long ******pppppplVar20;
  long ****pppplVar21;
  long *******ppppppplVar22;
  long *****ppppplStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 uStack_2e1;
  long *******ppppppplStack_2e0;
  long ******pppppplStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long lStack_2a8;
  long *******ppppppplStack_2a0;
  long *******ppppppplStack_298;
  long *******ppppppplStack_290;
  long *******ppppppplStack_288;
  undefined1 *****pppppuStack_280;
  code *pcStack_278;
  long *******ppppppplStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined1 uStack_249;
  long *******ppppppplStack_248;
  ulong uStack_240;
  byte bStack_231;
  long *******ppppppplStack_230;
  undefined1 auStack_225 [5];
  long *******ppppppplStack_220;
  undefined8 *puStack_218;
  undefined *puStack_210;
  long lStack_208;
  code *pcStack_200;
  long *******ppppppplStack_1f8;
  long *******ppppppplStack_1f0;
  long *******ppppppplStack_1e8;
  long *******ppppppplStack_1e0;
  long *plStack_1d8;
  undefined1 ****ppppuStack_1d0;
  code *pcStack_1c8;
  long lStack_1b8;
  undefined1 uStack_1b0;
  undefined1 uStack_1af;
  undefined1 uStack_1ae;
  undefined1 uStack_1ad;
  undefined1 uStack_1ac;
  undefined1 uStack_1ab;
  undefined1 uStack_1aa;
  undefined1 uStack_1a9;
  undefined1 *puStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined1 uStack_190;
  undefined1 uStack_18f;
  undefined1 uStack_18e;
  byte bStack_18d;
  undefined1 uStack_18c;
  undefined1 uStack_18b;
  undefined1 uStack_18a;
  undefined1 uStack_189;
  undefined1 *puStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined1 ***pppuStack_140;
  code *pcStack_138;
  long *******ppppppplStack_130;
  long *******ppppppplStack_128;
  byte bStack_119;
  long ******pppppplStack_118;
  undefined *puStack_110;
  ulong uStack_108;
  undefined *puStack_100;
  long lStack_f8;
  long *******ppppppplStack_f0;
  long *******ppppppplStack_e8;
  undefined1 **ppuStack_e0;
  code *pcStack_d8;
  long *******ppppppplStack_d0;
  long *******ppppppplStack_c8;
  byte bStack_b9;
  long ******pppppplStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  long *******ppppppplStack_90;
  long *******ppppppplStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  long *******ppppppplStack_70;
  long *******ppppppplStack_68;
  byte bStack_59;
  long *******ppppppplStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(*param_2 + 0xd8) < (long)param_3) {
    puStack_50 = &UNK_10ae73f94;
    puStack_40 = &UNK_10ae73f94;
    ppppppplVar7 = (long *******)&ppppppplStack_58;
    param_5 = (code *)0x2;
    ppppppplStack_58 = param_3;
    lStack_48 = *(long *)(*param_2 + 0xd8);
    func_0x0001004d4da0(&ppppppplStack_70,"frame of size %lld overflows local window of %lld",0x31);
    ppppppplVar12 = ppppppplStack_68;
    param_4 = ppppppplStack_70;
    if (-1 < (char)bStack_59) {
      ppppppplVar12 = (long *******)(ulong)bStack_59;
      param_4 = (long *******)&ppppppplStack_70;
    }
    func_0x00010ae775e0(param_1);
    param_3 = (long *******)&ppppppplStack_70;
    if ((char)bStack_59 < '\0') {
      param_4 = ppppppplStack_70;
      __ZdlPv();
      param_3 = (long *******)&ppppppplStack_70;
    }
  }
  else {
    ppppppplVar12 = param_3;
    ppppppplVar7 = param_4;
    (*param_5)(&ppppppplStack_58);
    if (ppppppplStack_58 == (long *******)0x0) {
      *(long *)(*param_2 + 0xd8) = *(long *)(*param_2 + 0xd8) - (long)param_3;
    }
    *param_1 = ppppppplStack_58;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if ((char)bStack_59 < '\0') {
    __ZdlPv(ppppppplStack_70);
  }
  ppppppplVar5 = param_4;
  __Unwind_Resume();
  ppppppplStack_90 = param_3;
  ppppppplStack_88 = param_4;
  puStack_80 = &stack0xfffffffffffffff0;
  pcStack_78 = FUN_104a9c194;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppplVar1 = *ppppppplVar5;
  pppppplVar20 = ppppppplVar5[1];
  ppppplVar17 = pppppplVar1[1];
  pppplVar21 = ppppplVar17[3];
  if ((long)((long)pppplVar21 + (ulong)*(uint *)(*ppppplVar17 + 0x1c)) < (long)pppppplVar20) {
    puStack_b0 = &UNK_10ae73f94;
    puStack_a0 = &UNK_10ae73f94;
    ppppppplVar7 = &pppppplStack_b8;
    param_5 = (code *)0x2;
    pppppplStack_b8 = pppppplVar20;
    lStack_a8 = (long)pppplVar21 + (ulong)*(uint *)(*ppppplVar17 + 0x1c);
    func_0x0001004d4da0(&ppppppplStack_d0,"frame of size %lld overflows local window of %lld",0x31);
    ppppppplVar12 = ppppppplStack_c8;
    ppppppplVar5 = ppppppplStack_d0;
    if (-1 < (char)bStack_b9) {
      ppppppplVar12 = (long *******)(ulong)bStack_b9;
      ppppppplVar5 = (long *******)&ppppppplStack_d0;
    }
    func_0x00010ae775e0(extraout_x8);
    param_3 = (long *******)&ppppppplStack_d0;
    if ((char)bStack_b9 < '\0') {
      ppppppplVar5 = ppppppplStack_d0;
      __ZdlPv();
      param_3 = (long *******)&ppppppplStack_d0;
    }
  }
  else {
    if (pppppplVar20 != (long ******)0x0) {
      if (0 < (long)pppplVar21) {
        (*pppppplVar1)[1] = (long ****)((long)(*pppppplVar1)[1] - (long)pppplVar21);
        pppplVar21 = ppppplVar17[3];
      }
      pppplVar21 = (long ****)((long)pppplVar21 - (long)pppppplVar20);
      ppppplVar17[3] = pppplVar21;
      if (0 < (long)pppplVar21) {
        (*pppppplVar1)[1] = (long ****)((long)(*pppppplVar1)[1] + (long)pppplVar21);
      }
    }
    pppppplVar20 = (long ******)ppppplVar17[1];
    pppppplVar1 = ppppppplVar5[1];
    if ((long)pppppplVar20 <= (long)ppppppplVar5[1]) {
      pppppplVar1 = pppppplVar20;
    }
    ppppplVar17[1] = (long ****)((long)pppppplVar20 - (long)pppppplVar1);
    *extraout_x8 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  if ((char)bStack_b9 < '\0') {
    __ZdlPv(ppppppplStack_d0);
  }
  ppppppplVar10 = ppppppplVar5;
  __Unwind_Resume();
  pcStack_d8 = FUN_104a9c2e8;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = (uint)ppppppplVar10;
  ppppppplStack_f0 = param_3;
  ppppppplStack_e8 = ppppppplVar5;
  ppuStack_e0 = &puStack_80;
  if (uVar4 < 2) {
    if (uVar4 != 0) {
      *(undefined1 *)((long)ppppppplVar7 + 0x16d) = 1;
    }
    *(bool *)(ppppppplVar7 + 0xd9) = uVar4 != 0;
    *extraout_x8_00 = 0;
  }
  else {
    pppppplStack_118 = (long ******)((ulong)ppppppplVar10 & 0xffffffff);
    puStack_110 = &UNK_10ae73c30;
    uStack_108 = (ulong)ppppppplVar12 & 0xffffffff;
    puStack_100 = &UNK_10ae73cc0;
    ppppppplVar7 = &pppppplStack_118;
    param_5 = (code *)0x2;
    func_0x0001004d4da0(&ppppppplStack_130,"unsupported data flags: 0x%02x stream: %d",0x29);
    ppppppplVar12 = ppppppplStack_128;
    ppppppplVar10 = ppppppplStack_130;
    if (-1 < (char)bStack_119) {
      ppppppplVar12 = (long *******)(ulong)bStack_119;
      ppppppplVar10 = (long *******)&ppppppplStack_130;
    }
    func_0x00010ae775e0(extraout_x8_00);
    if ((char)bStack_119 < '\0') {
      ppppppplVar10 = ppppppplStack_130;
      __ZdlPv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return;
  }
  ___stack_chk_fail();
  if ((char)bStack_119 < '\0') {
    __ZdlPv(ppppppplStack_130);
  }
  __Unwind_Resume();
  pcStack_138 = FUN_104a9c3f4;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppplVar5 = (long *******)0x9;
  ppppppplVar9 = ppppppplVar12;
  ppppppplVar11 = ppppppplVar7;
  pcVar13 = param_5;
  plVar19 = param_6;
  pppuStack_140 = &ppuStack_e0;
  func_0x0001005a7e6c(&lStack_198);
  iVar15 = (int)plVar19;
  if (((ulong)ppppppplVar7 & 0xff000000) == 0) {
    uStack_1a9 = (undefined1)((ulong)ppppppplVar10 >> 0x10);
    uStack_1aa = (undefined1)((ulong)ppppppplVar10 >> 0x18);
    uStack_1ae = (undefined1)((ulong)ppppppplVar7 >> 8);
    uStack_1af = (undefined1)((ulong)ppppppplVar7 >> 0x10);
    if (lStack_198 == 0) {
      uStack_18c = 0;
      uStack_18b = (int)param_5 != 0;
      puStack_188 = (undefined1 *)
                    ((ulong)puStack_188 & 0xffffffffffff0000 |
                    (ulong)((((uint)ppppppplVar10 & 0xff00ff00) >> 8 |
                            ((uint)ppppppplVar10 & 0xff00ff) << 8) & 0xffff));
      ppppppplVar5 = ppppppplVar7;
    }
    else {
      *puStack_188 = uStack_1af;
      puStack_188[1] = uStack_1ae;
      puStack_188[2] = (char)ppppppplVar7;
      puStack_188[3] = 0;
      puStack_188[4] = (int)param_5 != 0;
      puStack_188[5] = uStack_1aa;
      puStack_188[6] = uStack_1a9;
      puStack_188[7] = (char)((ulong)ppppppplVar10 >> 8);
      puStack_188[8] = (char)ppppppplVar10;
      ppppppplVar5 = (long *******)(ulong)bStack_18d;
      uStack_1af = uStack_18f;
      uStack_1ae = uStack_18e;
      uStack_1aa = uStack_18a;
      uStack_1a9 = uStack_189;
    }
    lStack_1b8 = lStack_198;
    uStack_1b0 = uStack_190;
    uStack_1ad = SUB81(ppppppplVar5,0);
    uStack_1a0 = uStack_180;
    uStack_1ac = uStack_18c;
    uStack_1ab = uStack_18b;
    puStack_1a8 = puStack_188;
    func_0x0001005a70c4(param_7,&lStack_1b8);
    ppppppplVar9 = (long *******)((ulong)ppppppplVar7 & 0xffffffff);
    ppppppplVar5 = ppppppplVar12;
    ppppppplVar11 = param_7;
    func_0x000104ad7e78();
    *param_6 = *param_6 + 9;
    param_6[1] = param_6[1] + ((ulong)ppppppplVar7 & 0xffffffff);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
      return;
    }
  }
  else {
    func_0x00010bdab050();
  }
  ___stack_chk_fail();
  pcStack_1c8 = FUN_104a9c574;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppplStack_220 = (long *******)0x0;
  pcVar14 = pcVar13;
  pcStack_200 = param_5;
  ppppppplStack_1f8 = ppppppplVar10;
  ppppppplStack_1f0 = ppppppplVar12;
  ppppppplStack_1e8 = param_7;
  ppppppplStack_1e0 = ppppppplVar7;
  plStack_1d8 = param_6;
  ppppuStack_1d0 = &pppuStack_140;
  if (ppppppplVar5[0xb8] < (long ******)0x5) {
    if (ppppppplVar9 != (long *******)0x0) {
      *(int *)ppppppplVar9 = 5 - (int)ppppppplVar5[0xb8];
    }
    *(undefined4 *)(extraout_x8_01 + 1) = 0;
    ppppppplVar6 = ppppppplVar5;
    ppppppplVar10 = ppppppplVar9;
    ppppppplVar12 = ppppppplVar11;
    ppppppplVar5 = ppppppplVar7;
    ppppppplVar11 = param_7;
    goto LAB_104a9c7a4;
  }
  ppppppplVar7 = ppppppplVar5 + 0xb4;
  ppppppplVar12 = (long *******)auStack_225;
  ppppppplVar10 = (long *******)0x5;
  ppppppplVar6 = ppppppplVar7;
  FUN_104ad8248();
  if (auStack_225[0] == 0) {
    if (pcVar13 != (code *)0x0) {
      uVar16 = 0;
LAB_104a9c610:
      *(undefined4 *)pcVar13 = uVar16;
    }
LAB_104a9c614:
    uVar4 = (auStack_225._1_4_ & 0xff00ff00) >> 8 | (auStack_225._1_4_ & 0xff00ff) << 8;
    ppppppplVar22 = (long *******)(ulong)(uVar4 >> 0x10 | uVar4 << 0x10);
    if ((long ******)((long)ppppppplVar22 + 5U) <= ppppppplVar5[0xb8]) {
      if (ppppppplVar9 != (long *******)0x0) {
        *(undefined4 *)ppppppplVar9 = 0;
      }
      if (ppppppplVar11 != (long *******)0x0) {
        ppppppplVar5[0x27] = (long ******)((long)ppppppplVar5[0x27] + 5);
        ppppppplVar5[0x28] = (long ******)((long)ppppppplVar5[0x28] + (long)ppppppplVar22);
        FUN_104ad8098(ppppppplVar7,5,auStack_225);
        ppppppplVar12 = ppppppplVar11;
        func_0x000104ad7c94();
        ppppppplVar6 = ppppppplVar7;
        ppppppplVar10 = ppppppplVar22;
      }
      *extraout_x8_01 = 0;
      goto LAB_104a9c79c;
    }
    uVar16 = 0;
    if (ppppppplVar9 != (long *******)0x0) {
      *(int *)ppppppplVar9 = (int)(long ******)((long)ppppppplVar22 + 5U) - (int)ppppppplVar5[0xb8];
    }
  }
  else {
    if (auStack_225[0] == 1) {
      if (pcVar13 != (code *)0x0) {
        uVar16 = 0x80000000;
        goto LAB_104a9c610;
      }
      goto LAB_104a9c614;
    }
    puStack_210 = &UNK_10ae73c30;
    puStack_218 = (undefined8 *)(ulong)auStack_225[0];
    func_0x0001004d4da0(&ppppppplStack_248,"Bad GRPC frame type 0x%02x",0x1a,&puStack_218,1);
    ppppppplVar7 = ppppppplStack_248;
    if (-1 < (char)bStack_231) {
      uStack_240 = (ulong)bStack_231;
      ppppppplVar7 = (long *******)&ppppppplStack_248;
    }
    uStack_260 = 0;
    uStack_258 = 0;
    uStack_268 = 0;
    pcVar14 = (code *)&uStack_249;
    iVar15 = (int)&uStack_268;
    FUN_104ab5920(&ppppppplStack_230,2,ppppppplVar7,uStack_240);
    ppppppplVar11 = ppppppplStack_230;
    if (ppppppplStack_230 != (long *******)0x0) {
      ppppppplStack_220 = ppppppplStack_230;
      ppppppplStack_230 = (long *******)0x36;
    }
    puStack_218 = &uStack_268;
    func_0x000100482b64(&puStack_218);
    if ((char)bStack_231 < '\0') {
      __ZdlPv(ppppppplStack_248);
    }
    ppppppplStack_270 = ppppppplVar11;
    if (((ulong)ppppppplVar11 & 1) != 0) {
      piVar18 = (int *)((long)ppppppplVar11 + -1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar3) {
          *piVar18 = *piVar18 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppppplVar12 = (long *******)(ulong)*(uint *)((long)ppppppplVar5 + 0x9c);
    ppppppplVar10 = (long *******)0x2;
    FUN_104abaa50(&ppppppplStack_248,&ppppppplStack_270);
    ppppppplVar5 = ppppppplStack_248;
    ppppppplVar7 = ppppppplVar11;
    if (ppppppplStack_248 == ppppppplVar11) {
joined_r0x000104a9c780:
      ppppppplVar5 = ppppppplVar7;
      if (((ulong)ppppppplVar11 & 1) != 0) {
        func_0x00010084dad0(ppppppplVar11);
      }
    }
    else {
      ppppppplStack_220 = ppppppplStack_248;
      ppppppplStack_248 = (long *******)0x36;
      if (((ulong)ppppppplVar11 & 1) != 0) {
        func_0x00010084dad0(ppppppplVar11);
        ppppppplVar7 = ppppppplVar5;
        ppppppplVar11 = ppppppplStack_248;
        goto joined_r0x000104a9c780;
      }
    }
    ppppppplVar6 = ppppppplStack_270;
    if (((ulong)ppppppplStack_270 & 1) != 0) {
      func_0x00010084dad0();
    }
    *extraout_x8_01 = ppppppplVar5;
LAB_104a9c79c:
    uVar16 = 1;
  }
  *(undefined4 *)(extraout_x8_01 + 1) = uVar16;
LAB_104a9c7a4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001004bdf74(&ppppppplStack_248);
  func_0x0001004bdf74(&ppppppplStack_270);
  func_0x0001004bdf74(&ppppppplStack_220);
  __Unwind_Resume(ppppppplVar6);
  ppppppplStack_2a0 = ppppppplVar9;
  ppppppplStack_298 = ppppppplVar11;
  ppppppplStack_290 = ppppppplVar5;
  ppppppplStack_288 = ppppppplVar6;
  pppppuStack_280 = &ppppuStack_1d0;
  pcStack_278 = FUN_104a9c84c;
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar19 = *(long **)pcVar14;
  if ((long *)0x1 < plVar19) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar3) {
        *plVar19 = *plVar19 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_2c8 = *(undefined8 *)(pcVar14 + 8);
  uStack_2d0 = *(undefined8 *)pcVar14;
  uStack_2b8 = *(undefined8 *)(pcVar14 + 0x18);
  uStack_2c0 = *(undefined8 *)(pcVar14 + 0x10);
  func_0x0001005a70c4(ppppppplVar12 + 0xb4,&uStack_2d0);
  ppppppplVar7 = ppppppplVar10;
  ppppppplVar5 = ppppppplVar12;
  func_0x0001008e2b98();
  iVar8 = (int)ppppppplVar5;
  if ((iVar15 != 0) && (*(char *)(ppppppplVar12 + 0xd9) != '\0')) {
    cVar2 = *(char *)(ppppppplVar10 + 0xc5);
    if (cVar2 == '\0') {
      ppppppplStack_2e0 = (long *******)0x0;
    }
    else {
      ppppplStack_300 = (long *****)0x0;
      uStack_2f8 = 0;
      uStack_2f0 = 0;
      FUN_104ab5920(&ppppppplStack_2e0,2,"Data frame with END_STREAM flag received",0x28,&uStack_2e1
                    ,&ppppplStack_300);
    }
    FUN_104a997b0(ppppppplVar10,ppppppplVar12,1,0,&ppppppplStack_2e0);
    iVar8 = (int)ppppppplVar12;
    if (cVar2 == '\0') {
      ppppppplVar7 = ppppppplStack_2e0;
      if (((ulong)ppppppplStack_2e0 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    else {
      if (((ulong)ppppppplStack_2e0 & 1) != 0) {
        func_0x00010084dad0();
      }
      ppppppplVar7 = &pppppplStack_2d8;
      pppppplStack_2d8 = &ppppplStack_300;
      func_0x000100482b64();
    }
  }
  *extraout_x8_02 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
    return;
  }
  ___stack_chk_fail();
  if (iVar8 != 0) {
    FUN_104bd46a0();
    pppppplStack_2d8 = &ppppplStack_300;
    func_0x000100482b64(&pppppplStack_2d8);
  }
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(ppppppplVar7[2]);
  return;
}



/* Entry: 104a9c194; end: 104a9c2e7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_104a9c194(undefined8 *param_1,long **param_2,int *******param_3,int *******param_4,
                  undefined8 *param_5,long *param_6,int *******param_7)

{
  long lVar1;
  int ******ppppppiVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long **pplVar6;
  int *******pppppppiVar7;
  int *******pppppppiVar8;
  int *******pppppppiVar9;
  int iVar10;
  int *******pppppppiVar11;
  int *******pppppppiVar12;
  int *******pppppppiVar13;
  int *******pppppppiVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  int iVar17;
  undefined4 uVar18;
  long *plVar19;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  int *piVar20;
  undefined8 *extraout_x8_01;
  long *plVar21;
  long lVar22;
  long **unaff_x20;
  int *******pppppppiVar23;
  int *****pppppiStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined1 uStack_271;
  int *******pppppppiStack_270;
  int ******ppppppiStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_238;
  int *******pppppppiStack_230;
  int *******pppppppiStack_228;
  int *******pppppppiStack_220;
  int *******pppppppiStack_218;
  undefined1 ****ppppuStack_210;
  code *pcStack_208;
  int *******pppppppiStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 uStack_1d9;
  int *******pppppppiStack_1d8;
  ulong uStack_1d0;
  byte bStack_1c1;
  int *******pppppppiStack_1c0;
  undefined1 auStack_1b5 [5];
  int *******pppppppiStack_1b0;
  undefined8 *puStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  undefined8 *puStack_190;
  long *plStack_188;
  int *******pppppppiStack_180;
  int *******pppppppiStack_178;
  int *******pppppppiStack_170;
  long *plStack_168;
  undefined1 ***pppuStack_160;
  code *pcStack_158;
  long lStack_148;
  undefined1 uStack_140;
  undefined1 uStack_13f;
  undefined1 uStack_13e;
  undefined1 uStack_13d;
  undefined1 uStack_13c;
  undefined1 uStack_13b;
  undefined1 uStack_13a;
  undefined1 uStack_139;
  undefined1 *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined1 uStack_120;
  undefined1 uStack_11f;
  undefined1 uStack_11e;
  byte bStack_11d;
  undefined1 uStack_11c;
  undefined1 uStack_11b;
  undefined1 uStack_11a;
  undefined1 uStack_119;
  undefined1 *puStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined1 **ppuStack_d0;
  code *pcStack_c8;
  long *plStack_c0;
  int *******pppppppiStack_b8;
  byte bStack_a9;
  int ******ppppppiStack_a8;
  undefined *puStack_a0;
  ulong uStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  long *plStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  long *plStack_60;
  int *******pppppppiStack_58;
  byte bStack_49;
  int ******ppppppiStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar21 = *param_2;
  ppppppiVar2 = (int ******)param_2[1];
  plVar19 = (long *)plVar21[1];
  lVar22 = plVar19[3];
  lVar1 = lVar22 + (ulong)*(uint *)(*plVar19 + 0xe0);
  if (lVar1 < (long)ppppppiVar2) {
    puStack_40 = &UNK_10ae73f94;
    puStack_30 = &UNK_10ae73f94;
    param_4 = &ppppppiStack_48;
    param_5 = (undefined8 *)0x2;
    ppppppiStack_48 = ppppppiVar2;
    lStack_38 = lVar1;
    func_0x0001004d4da0(&plStack_60,"frame of size %lld overflows local window of %lld",0x31);
    param_3 = pppppppiStack_58;
    param_2 = (long **)plStack_60;
    if (-1 < (char)bStack_49) {
      param_3 = (int *******)(ulong)bStack_49;
      param_2 = &plStack_60;
    }
    func_0x00010ae775e0(param_1);
    unaff_x20 = &plStack_60;
    if ((char)bStack_49 < '\0') {
      param_2 = (long **)plStack_60;
      __ZdlPv();
      unaff_x20 = &plStack_60;
    }
  }
  else {
    if (ppppppiVar2 != (int ******)0x0) {
      if (0 < lVar22) {
        *(long *)(*plVar21 + 8) = *(long *)(*plVar21 + 8) - lVar22;
        lVar22 = plVar19[3];
      }
      lVar22 = lVar22 - (long)ppppppiVar2;
      plVar19[3] = lVar22;
      if (0 < lVar22) {
        *(long *)(*plVar21 + 8) = *(long *)(*plVar21 + 8) + lVar22;
      }
    }
    lVar22 = plVar19[1];
    lVar1 = (long)param_2[1];
    if (lVar22 <= (long)param_2[1]) {
      lVar1 = lVar22;
    }
    plVar19[1] = lVar22 - lVar1;
    *param_1 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((char)bStack_49 < '\0') {
    __ZdlPv(plStack_60);
  }
  pplVar6 = param_2;
  __Unwind_Resume();
  pcStack_68 = FUN_104a9c2e8;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = (uint)pplVar6;
  puStack_80 = (undefined1 *)unaff_x20;
  plStack_78 = (long *)param_2;
  puStack_70 = &stack0xfffffffffffffff0;
  if (uVar5 < 2) {
    if (uVar5 != 0) {
      *(undefined1 *)((long)param_4 + 0x16d) = 1;
    }
    *(bool *)(param_4 + 0xd9) = uVar5 != 0;
    *extraout_x8 = 0;
  }
  else {
    ppppppiStack_a8 = (int ******)((ulong)pplVar6 & 0xffffffff);
    puStack_a0 = &UNK_10ae73c30;
    uStack_98 = (ulong)param_3 & 0xffffffff;
    puStack_90 = &UNK_10ae73cc0;
    param_4 = &ppppppiStack_a8;
    param_5 = (undefined8 *)0x2;
    func_0x0001004d4da0(&plStack_c0,"unsupported data flags: 0x%02x stream: %d",0x29);
    param_3 = pppppppiStack_b8;
    pplVar6 = (long **)plStack_c0;
    if (-1 < (char)bStack_a9) {
      param_3 = (int *******)(ulong)bStack_a9;
      pplVar6 = &plStack_c0;
    }
    func_0x00010ae775e0(extraout_x8);
    if ((char)bStack_a9 < '\0') {
      pplVar6 = (long **)plStack_c0;
      __ZdlPv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  if ((char)bStack_a9 < '\0') {
    __ZdlPv(plStack_c0);
  }
  __Unwind_Resume();
  pcStack_c8 = FUN_104a9c3f4;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppiVar7 = (int *******)0x9;
  pppppppiVar11 = param_3;
  pppppppiVar13 = param_4;
  puVar15 = param_5;
  plVar21 = param_6;
  ppuStack_d0 = &puStack_70;
  func_0x0001005a7e6c(&lStack_128);
  iVar17 = (int)plVar21;
  if (((ulong)param_4 & 0xff000000) == 0) {
    uStack_139 = (undefined1)((ulong)pplVar6 >> 0x10);
    uStack_13a = (undefined1)((ulong)pplVar6 >> 0x18);
    uStack_13e = (undefined1)((ulong)param_4 >> 8);
    uStack_13f = (undefined1)((ulong)param_4 >> 0x10);
    if (lStack_128 == 0) {
      uStack_11c = 0;
      uStack_11b = (int)param_5 != 0;
      puStack_118 = (undefined1 *)
                    ((ulong)puStack_118 & 0xffffffffffff0000 |
                    (ulong)((((uint)pplVar6 & 0xff00ff00) >> 8 | ((uint)pplVar6 & 0xff00ff) << 8) &
                           0xffff));
      pppppppiVar7 = param_4;
    }
    else {
      *puStack_118 = uStack_13f;
      puStack_118[1] = uStack_13e;
      puStack_118[2] = (char)param_4;
      puStack_118[3] = 0;
      puStack_118[4] = (int)param_5 != 0;
      puStack_118[5] = uStack_13a;
      puStack_118[6] = uStack_139;
      puStack_118[7] = (char)((ulong)pplVar6 >> 8);
      puStack_118[8] = (char)pplVar6;
      pppppppiVar7 = (int *******)(ulong)bStack_11d;
      uStack_13f = uStack_11f;
      uStack_13e = uStack_11e;
      uStack_13a = uStack_11a;
      uStack_139 = uStack_119;
    }
    lStack_148 = lStack_128;
    uStack_140 = uStack_120;
    uStack_13d = SUB81(pppppppiVar7,0);
    uStack_130 = uStack_110;
    uStack_13c = uStack_11c;
    uStack_13b = uStack_11b;
    puStack_138 = puStack_118;
    func_0x0001005a70c4(param_7,&lStack_148);
    pppppppiVar11 = (int *******)((ulong)param_4 & 0xffffffff);
    pppppppiVar7 = param_3;
    pppppppiVar13 = param_7;
    func_0x000104ad7e78();
    *param_6 = *param_6 + 9;
    param_6[1] = param_6[1] + ((ulong)param_4 & 0xffffffff);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
      return;
    }
  }
  else {
    func_0x00010bdab050();
  }
  ___stack_chk_fail();
  pcStack_158 = FUN_104a9c574;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppiStack_1b0 = (int *******)0x0;
  puVar16 = puVar15;
  puStack_190 = param_5;
  plStack_188 = (long *)pplVar6;
  pppppppiStack_180 = param_3;
  pppppppiStack_178 = param_7;
  pppppppiStack_170 = param_4;
  plStack_168 = param_6;
  pppuStack_160 = &ppuStack_d0;
  if (pppppppiVar7[0xb8] < (int ******)0x5) {
    if (pppppppiVar11 != (int *******)0x0) {
      *(int *)pppppppiVar11 = 5 - (int)pppppppiVar7[0xb8];
    }
    *(undefined4 *)(extraout_x8_00 + 1) = 0;
    pppppppiVar8 = pppppppiVar7;
    pppppppiVar12 = pppppppiVar11;
    pppppppiVar14 = pppppppiVar13;
    pppppppiVar7 = param_4;
    pppppppiVar13 = param_7;
    goto LAB_104a9c7a4;
  }
  pppppppiVar9 = pppppppiVar7 + 0xb4;
  pppppppiVar14 = (int *******)auStack_1b5;
  pppppppiVar12 = (int *******)0x5;
  pppppppiVar8 = pppppppiVar9;
  FUN_104ad8248();
  if (auStack_1b5[0] == 0) {
    if (puVar15 != (undefined8 *)0x0) {
      uVar18 = 0;
LAB_104a9c610:
      *(undefined4 *)puVar15 = uVar18;
    }
LAB_104a9c614:
    uVar5 = (auStack_1b5._1_4_ & 0xff00ff00) >> 8 | (auStack_1b5._1_4_ & 0xff00ff) << 8;
    pppppppiVar23 = (int *******)(ulong)(uVar5 >> 0x10 | uVar5 << 0x10);
    if ((int ******)((long)pppppppiVar23 + 5U) <= pppppppiVar7[0xb8]) {
      if (pppppppiVar11 != (int *******)0x0) {
        *(int *)pppppppiVar11 = 0;
      }
      if (pppppppiVar13 != (int *******)0x0) {
        pppppppiVar7[0x27] = (int ******)((long)pppppppiVar7[0x27] + 5);
        pppppppiVar7[0x28] = (int ******)((long)pppppppiVar7[0x28] + (long)pppppppiVar23);
        FUN_104ad8098(pppppppiVar9,5,auStack_1b5);
        pppppppiVar14 = pppppppiVar13;
        func_0x000104ad7c94();
        pppppppiVar8 = pppppppiVar9;
        pppppppiVar12 = pppppppiVar23;
      }
      *extraout_x8_00 = 0;
      goto LAB_104a9c79c;
    }
    uVar18 = 0;
    if (pppppppiVar11 != (int *******)0x0) {
      *(int *)pppppppiVar11 = (int)(int ******)((long)pppppppiVar23 + 5U) - (int)pppppppiVar7[0xb8];
    }
  }
  else {
    if (auStack_1b5[0] == 1) {
      if (puVar15 != (undefined8 *)0x0) {
        uVar18 = 0x80000000;
        goto LAB_104a9c610;
      }
      goto LAB_104a9c614;
    }
    puStack_1a0 = &UNK_10ae73c30;
    puStack_1a8 = (undefined8 *)(ulong)auStack_1b5[0];
    func_0x0001004d4da0(&pppppppiStack_1d8,"Bad GRPC frame type 0x%02x",0x1a,&puStack_1a8,1);
    pppppppiVar13 = pppppppiStack_1d8;
    if (-1 < (char)bStack_1c1) {
      uStack_1d0 = (ulong)bStack_1c1;
      pppppppiVar13 = (int *******)&pppppppiStack_1d8;
    }
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    uStack_1f8 = 0;
    puVar16 = (undefined8 *)&uStack_1d9;
    iVar17 = (int)&uStack_1f8;
    FUN_104ab5920(&pppppppiStack_1c0,2,pppppppiVar13,uStack_1d0);
    pppppppiVar13 = pppppppiStack_1c0;
    if (pppppppiStack_1c0 != (int *******)0x0) {
      pppppppiStack_1b0 = pppppppiStack_1c0;
      pppppppiStack_1c0 = (int *******)0x36;
    }
    puStack_1a8 = &uStack_1f8;
    func_0x000100482b64(&puStack_1a8);
    if ((char)bStack_1c1 < '\0') {
      __ZdlPv(pppppppiStack_1d8);
    }
    pppppppiStack_200 = pppppppiVar13;
    if (((ulong)pppppppiVar13 & 1) != 0) {
      piVar20 = (int *)((long)pppppppiVar13 + -1);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar4) {
          *piVar20 = *piVar20 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    pppppppiVar14 = (int *******)(ulong)*(uint *)((long)pppppppiVar7 + 0x9c);
    pppppppiVar12 = (int *******)0x2;
    FUN_104abaa50(&pppppppiStack_1d8,&pppppppiStack_200);
    pppppppiVar7 = pppppppiStack_1d8;
    pppppppiVar8 = pppppppiVar13;
    if (pppppppiStack_1d8 == pppppppiVar13) {
joined_r0x000104a9c780:
      pppppppiVar7 = pppppppiVar8;
      if (((ulong)pppppppiVar13 & 1) != 0) {
        func_0x00010084dad0(pppppppiVar13);
      }
    }
    else {
      pppppppiStack_1b0 = pppppppiStack_1d8;
      pppppppiStack_1d8 = (int *******)0x36;
      if (((ulong)pppppppiVar13 & 1) != 0) {
        func_0x00010084dad0(pppppppiVar13);
        pppppppiVar8 = pppppppiVar7;
        pppppppiVar13 = pppppppiStack_1d8;
        goto joined_r0x000104a9c780;
      }
    }
    pppppppiVar8 = pppppppiStack_200;
    if (((ulong)pppppppiStack_200 & 1) != 0) {
      func_0x00010084dad0();
    }
    *extraout_x8_00 = pppppppiVar7;
LAB_104a9c79c:
    uVar18 = 1;
  }
  *(undefined4 *)(extraout_x8_00 + 1) = uVar18;
LAB_104a9c7a4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001004bdf74(&pppppppiStack_1d8);
  func_0x0001004bdf74(&pppppppiStack_200);
  func_0x0001004bdf74(&pppppppiStack_1b0);
  __Unwind_Resume(pppppppiVar8);
  pppppppiStack_230 = pppppppiVar11;
  pppppppiStack_228 = pppppppiVar13;
  pppppppiStack_220 = pppppppiVar7;
  pppppppiStack_218 = pppppppiVar8;
  ppppuStack_210 = &pppuStack_160;
  pcStack_208 = FUN_104a9c84c;
  lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar21 = (long *)*puVar16;
  if ((long *)0x1 < plVar21) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar4) {
        *plVar21 = *plVar21 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_258 = puVar16[1];
  uStack_260 = *puVar16;
  uStack_248 = puVar16[3];
  uStack_250 = puVar16[2];
  func_0x0001005a70c4(pppppppiVar14 + 0xb4,&uStack_260);
  pppppppiVar7 = pppppppiVar12;
  pppppppiVar13 = pppppppiVar14;
  func_0x0001008e2b98();
  iVar10 = (int)pppppppiVar13;
  if ((iVar17 != 0) && (*(char *)(pppppppiVar14 + 0xd9) != '\0')) {
    cVar3 = *(char *)(pppppppiVar12 + 0xc5);
    if (cVar3 == '\0') {
      pppppppiStack_270 = (int *******)0x0;
    }
    else {
      pppppiStack_290 = (int *****)0x0;
      uStack_288 = 0;
      uStack_280 = 0;
      FUN_104ab5920(&pppppppiStack_270,2,"Data frame with END_STREAM flag received",0x28,&uStack_271
                    ,&pppppiStack_290);
    }
    FUN_104a997b0(pppppppiVar12,pppppppiVar14,1,0,&pppppppiStack_270);
    iVar10 = (int)pppppppiVar14;
    if (cVar3 == '\0') {
      pppppppiVar7 = pppppppiStack_270;
      if (((ulong)pppppppiStack_270 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    else {
      if (((ulong)pppppppiStack_270 & 1) != 0) {
        func_0x00010084dad0();
      }
      pppppppiVar7 = &ppppppiStack_268;
      ppppppiStack_268 = &pppppiStack_290;
      func_0x000100482b64();
    }
  }
  *extraout_x8_01 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_238) {
    return;
  }
  ___stack_chk_fail();
  if (iVar10 != 0) {
    FUN_104bd46a0();
    ppppppiStack_268 = &pppppiStack_290;
    func_0x000100482b64(&ppppppiStack_268);
  }
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(pppppppiVar7[2]);
  return;
}



/* Entry: 104a9c2e8; end: 104a9c3f3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_104a9c2e8(undefined8 *param_1,undefined1 **param_2,int *******param_3,int *******param_4,
                  undefined8 *param_5,long *param_6,int *******param_7)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int *******pppppppiVar4;
  int *******pppppppiVar5;
  int *******pppppppiVar6;
  int iVar7;
  int *******pppppppiVar8;
  int *******pppppppiVar9;
  int *******pppppppiVar10;
  int *******pppppppiVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined4 uVar15;
  undefined8 *extraout_x8;
  int *piVar16;
  undefined8 *extraout_x8_00;
  long *plVar17;
  int *******pppppppiVar18;
  int *****pppppiStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 uStack_211;
  int *******pppppppiStack_210;
  int ******ppppppiStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1d8;
  int *******pppppppiStack_1d0;
  int *******pppppppiStack_1c8;
  int *******pppppppiStack_1c0;
  int *******pppppppiStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  int *******pppppppiStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 uStack_179;
  int *******pppppppiStack_178;
  ulong uStack_170;
  byte bStack_161;
  int *******pppppppiStack_160;
  undefined1 auStack_155 [5];
  int *******pppppppiStack_150;
  undefined8 *puStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined8 *puStack_130;
  undefined1 *puStack_128;
  int *******pppppppiStack_120;
  int *******pppppppiStack_118;
  int *******pppppppiStack_110;
  long *plStack_108;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  long lStack_e8;
  undefined1 uStack_e0;
  undefined1 uStack_df;
  undefined1 uStack_de;
  undefined1 uStack_dd;
  undefined1 uStack_dc;
  undefined1 uStack_db;
  undefined1 uStack_da;
  undefined1 uStack_d9;
  undefined1 *puStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 uStack_c0;
  undefined1 uStack_bf;
  undefined1 uStack_be;
  byte bStack_bd;
  undefined1 uStack_bc;
  undefined1 uStack_bb;
  undefined1 uStack_ba;
  undefined1 uStack_b9;
  undefined1 *puStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined1 *puStack_60;
  int *******pppppppiStack_58;
  byte bStack_49;
  int ******ppppppiStack_48;
  undefined *puStack_40;
  ulong uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = (uint)param_2;
  if (uVar3 < 2) {
    if (uVar3 != 0) {
      *(undefined1 *)((long)param_4 + 0x16d) = 1;
    }
    *(bool *)(param_4 + 0xd9) = uVar3 != 0;
    *param_1 = 0;
  }
  else {
    ppppppiStack_48 = (int ******)((ulong)param_2 & 0xffffffff);
    puStack_40 = &UNK_10ae73c30;
    uStack_38 = (ulong)param_3 & 0xffffffff;
    puStack_30 = &UNK_10ae73cc0;
    param_4 = &ppppppiStack_48;
    param_5 = (undefined8 *)0x2;
    func_0x0001004d4da0(&puStack_60,"unsupported data flags: 0x%02x stream: %d",0x29);
    param_3 = pppppppiStack_58;
    param_2 = (undefined1 **)puStack_60;
    if (-1 < (char)bStack_49) {
      param_3 = (int *******)(ulong)bStack_49;
      param_2 = &puStack_60;
    }
    func_0x00010ae775e0(param_1);
    if ((char)bStack_49 < '\0') {
      param_2 = (undefined1 **)puStack_60;
      __ZdlPv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((char)bStack_49 < '\0') {
    __ZdlPv(puStack_60);
  }
  __Unwind_Resume();
  pcStack_68 = FUN_104a9c3f4;
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppiVar4 = (int *******)0x9;
  pppppppiVar8 = param_3;
  pppppppiVar10 = param_4;
  puVar12 = param_5;
  plVar17 = param_6;
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x0001005a7e6c(&lStack_c8);
  iVar14 = (int)plVar17;
  if (((ulong)param_4 & 0xff000000) == 0) {
    uStack_d9 = (undefined1)((ulong)param_2 >> 0x10);
    uStack_da = (undefined1)((ulong)param_2 >> 0x18);
    uStack_de = (undefined1)((ulong)param_4 >> 8);
    uStack_df = (undefined1)((ulong)param_4 >> 0x10);
    if (lStack_c8 == 0) {
      uStack_bc = 0;
      uStack_bb = (int)param_5 != 0;
      puStack_b8 = (undefined1 *)
                   ((ulong)puStack_b8 & 0xffffffffffff0000 |
                   (ulong)((((uint)param_2 & 0xff00ff00) >> 8 | ((uint)param_2 & 0xff00ff) << 8) &
                          0xffff));
      pppppppiVar4 = param_4;
    }
    else {
      *puStack_b8 = uStack_df;
      puStack_b8[1] = uStack_de;
      puStack_b8[2] = (char)param_4;
      puStack_b8[3] = 0;
      puStack_b8[4] = (int)param_5 != 0;
      puStack_b8[5] = uStack_da;
      puStack_b8[6] = uStack_d9;
      puStack_b8[7] = (char)((ulong)param_2 >> 8);
      puStack_b8[8] = (char)param_2;
      pppppppiVar4 = (int *******)(ulong)bStack_bd;
      uStack_df = uStack_bf;
      uStack_de = uStack_be;
      uStack_da = uStack_ba;
      uStack_d9 = uStack_b9;
    }
    lStack_e8 = lStack_c8;
    uStack_e0 = uStack_c0;
    uStack_dd = SUB81(pppppppiVar4,0);
    uStack_d0 = uStack_b0;
    uStack_dc = uStack_bc;
    uStack_db = uStack_bb;
    puStack_d8 = puStack_b8;
    func_0x0001005a70c4(param_7,&lStack_e8);
    pppppppiVar8 = (int *******)((ulong)param_4 & 0xffffffff);
    pppppppiVar4 = param_3;
    pppppppiVar10 = param_7;
    func_0x000104ad7e78();
    *param_6 = *param_6 + 9;
    param_6[1] = param_6[1] + ((ulong)param_4 & 0xffffffff);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
      return;
    }
  }
  else {
    func_0x00010bdab050();
  }
  ___stack_chk_fail();
  pcStack_f8 = FUN_104a9c574;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppiStack_150 = (int *******)0x0;
  puVar13 = puVar12;
  puStack_130 = param_5;
  puStack_128 = (undefined1 *)param_2;
  pppppppiStack_120 = param_3;
  pppppppiStack_118 = param_7;
  pppppppiStack_110 = param_4;
  plStack_108 = param_6;
  ppuStack_100 = &puStack_70;
  if (pppppppiVar4[0xb8] < (int ******)0x5) {
    if (pppppppiVar8 != (int *******)0x0) {
      *(int *)pppppppiVar8 = 5 - (int)pppppppiVar4[0xb8];
    }
    *(undefined4 *)(extraout_x8 + 1) = 0;
    pppppppiVar5 = pppppppiVar4;
    pppppppiVar9 = pppppppiVar8;
    pppppppiVar11 = pppppppiVar10;
    pppppppiVar4 = param_4;
    pppppppiVar10 = param_7;
    goto LAB_104a9c7a4;
  }
  pppppppiVar6 = pppppppiVar4 + 0xb4;
  pppppppiVar11 = (int *******)auStack_155;
  pppppppiVar9 = (int *******)0x5;
  pppppppiVar5 = pppppppiVar6;
  FUN_104ad8248();
  if (auStack_155[0] == 0) {
    if (puVar12 != (undefined8 *)0x0) {
      uVar15 = 0;
LAB_104a9c610:
      *(undefined4 *)puVar12 = uVar15;
    }
LAB_104a9c614:
    uVar3 = (auStack_155._1_4_ & 0xff00ff00) >> 8 | (auStack_155._1_4_ & 0xff00ff) << 8;
    pppppppiVar18 = (int *******)(ulong)(uVar3 >> 0x10 | uVar3 << 0x10);
    if ((int ******)((long)pppppppiVar18 + 5U) <= pppppppiVar4[0xb8]) {
      if (pppppppiVar8 != (int *******)0x0) {
        *(int *)pppppppiVar8 = 0;
      }
      if (pppppppiVar10 != (int *******)0x0) {
        pppppppiVar4[0x27] = (int ******)((long)pppppppiVar4[0x27] + 5);
        pppppppiVar4[0x28] = (int ******)((long)pppppppiVar4[0x28] + (long)pppppppiVar18);
        FUN_104ad8098(pppppppiVar6,5,auStack_155);
        pppppppiVar11 = pppppppiVar10;
        func_0x000104ad7c94();
        pppppppiVar5 = pppppppiVar6;
        pppppppiVar9 = pppppppiVar18;
      }
      *extraout_x8 = 0;
      goto LAB_104a9c79c;
    }
    uVar15 = 0;
    if (pppppppiVar8 != (int *******)0x0) {
      *(int *)pppppppiVar8 = (int)(int ******)((long)pppppppiVar18 + 5U) - (int)pppppppiVar4[0xb8];
    }
  }
  else {
    if (auStack_155[0] == 1) {
      if (puVar12 != (undefined8 *)0x0) {
        uVar15 = 0x80000000;
        goto LAB_104a9c610;
      }
      goto LAB_104a9c614;
    }
    puStack_140 = &UNK_10ae73c30;
    puStack_148 = (undefined8 *)(ulong)auStack_155[0];
    func_0x0001004d4da0(&pppppppiStack_178,"Bad GRPC frame type 0x%02x",0x1a,&puStack_148,1);
    pppppppiVar10 = pppppppiStack_178;
    if (-1 < (char)bStack_161) {
      uStack_170 = (ulong)bStack_161;
      pppppppiVar10 = (int *******)&pppppppiStack_178;
    }
    uStack_190 = 0;
    uStack_188 = 0;
    uStack_198 = 0;
    puVar13 = (undefined8 *)&uStack_179;
    iVar14 = (int)&uStack_198;
    FUN_104ab5920(&pppppppiStack_160,2,pppppppiVar10,uStack_170);
    pppppppiVar10 = pppppppiStack_160;
    if (pppppppiStack_160 != (int *******)0x0) {
      pppppppiStack_150 = pppppppiStack_160;
      pppppppiStack_160 = (int *******)0x36;
    }
    puStack_148 = &uStack_198;
    func_0x000100482b64(&puStack_148);
    if ((char)bStack_161 < '\0') {
      __ZdlPv(pppppppiStack_178);
    }
    pppppppiStack_1a0 = pppppppiVar10;
    if (((ulong)pppppppiVar10 & 1) != 0) {
      piVar16 = (int *)((long)pppppppiVar10 + -1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar2) {
          *piVar16 = *piVar16 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    pppppppiVar11 = (int *******)(ulong)*(uint *)((long)pppppppiVar4 + 0x9c);
    pppppppiVar9 = (int *******)0x2;
    FUN_104abaa50(&pppppppiStack_178,&pppppppiStack_1a0);
    pppppppiVar4 = pppppppiStack_178;
    pppppppiVar5 = pppppppiVar10;
    if (pppppppiStack_178 == pppppppiVar10) {
joined_r0x000104a9c780:
      pppppppiVar4 = pppppppiVar5;
      if (((ulong)pppppppiVar10 & 1) != 0) {
        func_0x00010084dad0(pppppppiVar10);
      }
    }
    else {
      pppppppiStack_150 = pppppppiStack_178;
      pppppppiStack_178 = (int *******)0x36;
      if (((ulong)pppppppiVar10 & 1) != 0) {
        func_0x00010084dad0(pppppppiVar10);
        pppppppiVar5 = pppppppiVar4;
        pppppppiVar10 = pppppppiStack_178;
        goto joined_r0x000104a9c780;
      }
    }
    pppppppiVar5 = pppppppiStack_1a0;
    if (((ulong)pppppppiStack_1a0 & 1) != 0) {
      func_0x00010084dad0();
    }
    *extraout_x8 = pppppppiVar4;
LAB_104a9c79c:
    uVar15 = 1;
  }
  *(undefined4 *)(extraout_x8 + 1) = uVar15;
LAB_104a9c7a4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001004bdf74(&pppppppiStack_178);
  func_0x0001004bdf74(&pppppppiStack_1a0);
  func_0x0001004bdf74(&pppppppiStack_150);
  __Unwind_Resume(pppppppiVar5);
  pppppppiStack_1d0 = pppppppiVar8;
  pppppppiStack_1c8 = pppppppiVar10;
  pppppppiStack_1c0 = pppppppiVar4;
  pppppppiStack_1b8 = pppppppiVar5;
  pppuStack_1b0 = &ppuStack_100;
  pcStack_1a8 = FUN_104a9c84c;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar17 = (long *)*puVar13;
  if ((long *)0x1 < plVar17) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar2) {
        *plVar17 = *plVar17 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_1f8 = puVar13[1];
  uStack_200 = *puVar13;
  uStack_1e8 = puVar13[3];
  uStack_1f0 = puVar13[2];
  func_0x0001005a70c4(pppppppiVar11 + 0xb4,&uStack_200);
  pppppppiVar4 = pppppppiVar9;
  pppppppiVar10 = pppppppiVar11;
  func_0x0001008e2b98();
  iVar7 = (int)pppppppiVar10;
  if ((iVar14 != 0) && (*(char *)(pppppppiVar11 + 0xd9) != '\0')) {
    cVar1 = *(char *)(pppppppiVar9 + 0xc5);
    if (cVar1 == '\0') {
      pppppppiStack_210 = (int *******)0x0;
    }
    else {
      pppppiStack_230 = (int *****)0x0;
      uStack_228 = 0;
      uStack_220 = 0;
      FUN_104ab5920(&pppppppiStack_210,2,"Data frame with END_STREAM flag received",0x28,&uStack_211
                    ,&pppppiStack_230);
    }
    FUN_104a997b0(pppppppiVar9,pppppppiVar11,1,0,&pppppppiStack_210);
    iVar7 = (int)pppppppiVar11;
    if (cVar1 == '\0') {
      pppppppiVar4 = pppppppiStack_210;
      if (((ulong)pppppppiStack_210 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    else {
      if (((ulong)pppppppiStack_210 & 1) != 0) {
        func_0x00010084dad0();
      }
      pppppppiVar4 = &ppppppiStack_208;
      ppppppiStack_208 = &pppppiStack_230;
      func_0x000100482b64();
    }
  }
  *extraout_x8_00 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return;
  }
  ___stack_chk_fail();
  if (iVar7 != 0) {
    FUN_104bd46a0();
    ppppppiStack_208 = &pppppiStack_230;
    func_0x000100482b64(&ppppppiStack_208);
  }
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(pppppppiVar4[2]);
  return;
}



/* Entry: 104a9c3f4; end: 104a9c573;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_104a9c3f4(undefined8 param_1,int *******param_2,int *******param_3,undefined8 *param_4,
                  long *param_5,int *******param_6)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  int *******pppppppiVar4;
  int *******pppppppiVar5;
  int *******pppppppiVar6;
  int iVar7;
  int *******pppppppiVar8;
  int *******pppppppiVar9;
  int *******pppppppiVar10;
  int *******pppppppiVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined4 uVar15;
  undefined8 *extraout_x8;
  int *piVar16;
  undefined8 *extraout_x8_00;
  long *plVar17;
  int *******pppppppiVar18;
  int *****pppppiStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 uStack_1b1;
  int *******pppppppiStack_1b0;
  int ******ppppppiStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_178;
  int *******pppppppiStack_170;
  int *******pppppppiStack_168;
  int *******pppppppiStack_160;
  int *******pppppppiStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  int *******pppppppiStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 uStack_119;
  int *******pppppppiStack_118;
  ulong uStack_110;
  byte bStack_101;
  int *******pppppppiStack_100;
  undefined1 auStack_f5 [5];
  int *******pppppppiStack_f0;
  undefined8 *puStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  int *******pppppppiStack_c0;
  int *******pppppppiStack_b8;
  int *******pppppppiStack_b0;
  long *plStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  long lStack_88;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  undefined1 uStack_7e;
  undefined1 uStack_7d;
  undefined1 uStack_7c;
  undefined1 uStack_7b;
  undefined1 uStack_7a;
  undefined1 uStack_79;
  undefined1 *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined1 uStack_5e;
  byte bStack_5d;
  undefined1 uStack_5c;
  undefined1 uStack_5b;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  undefined1 *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppiVar4 = (int *******)0x9;
  pppppppiVar8 = param_2;
  pppppppiVar10 = param_3;
  puVar12 = param_4;
  plVar17 = param_5;
  func_0x0001005a7e6c(&lStack_68);
  iVar14 = (int)plVar17;
  if (((ulong)param_3 & 0xff000000) == 0) {
    uStack_79 = (undefined1)((ulong)param_1 >> 0x10);
    uStack_7a = (undefined1)((ulong)param_1 >> 0x18);
    uStack_7e = (undefined1)((ulong)param_3 >> 8);
    uStack_7f = (undefined1)((ulong)param_3 >> 0x10);
    if (lStack_68 == 0) {
      uStack_5c = 0;
      uStack_5b = (int)param_4 != 0;
      puStack_58 = (undefined1 *)
                   ((ulong)puStack_58 & 0xffffffffffff0000 |
                   (ulong)((((uint)param_1 & 0xff00ff00) >> 8 | ((uint)param_1 & 0xff00ff) << 8) &
                          0xffff));
      pppppppiVar4 = param_3;
    }
    else {
      *puStack_58 = uStack_7f;
      puStack_58[1] = uStack_7e;
      puStack_58[2] = (char)param_3;
      puStack_58[3] = 0;
      puStack_58[4] = (int)param_4 != 0;
      puStack_58[5] = uStack_7a;
      puStack_58[6] = uStack_79;
      puStack_58[7] = (char)((ulong)param_1 >> 8);
      puStack_58[8] = (char)param_1;
      pppppppiVar4 = (int *******)(ulong)bStack_5d;
      uStack_7f = uStack_5f;
      uStack_7e = uStack_5e;
      uStack_7a = uStack_5a;
      uStack_79 = uStack_59;
    }
    lStack_88 = lStack_68;
    uStack_80 = uStack_60;
    uStack_7d = SUB81(pppppppiVar4,0);
    uStack_70 = uStack_50;
    uStack_7c = uStack_5c;
    uStack_7b = uStack_5b;
    puStack_78 = puStack_58;
    func_0x0001005a70c4(param_6,&lStack_88);
    pppppppiVar8 = (int *******)((ulong)param_3 & 0xffffffff);
    pppppppiVar4 = param_2;
    pppppppiVar10 = param_6;
    func_0x000104ad7e78();
    *param_5 = *param_5 + 9;
    param_5[1] = param_5[1] + ((ulong)param_3 & 0xffffffff);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return;
    }
  }
  else {
    func_0x00010bdab050();
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_104a9c574;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppiStack_f0 = (int *******)0x0;
  puVar13 = puVar12;
  puStack_d0 = param_4;
  uStack_c8 = param_1;
  pppppppiStack_c0 = param_2;
  pppppppiStack_b8 = param_6;
  pppppppiStack_b0 = param_3;
  plStack_a8 = param_5;
  puStack_a0 = &stack0xfffffffffffffff0;
  if (pppppppiVar4[0xb8] < (int ******)0x5) {
    if (pppppppiVar8 != (int *******)0x0) {
      *(int *)pppppppiVar8 = 5 - (int)pppppppiVar4[0xb8];
    }
    *(undefined4 *)(extraout_x8 + 1) = 0;
    pppppppiVar5 = pppppppiVar4;
    pppppppiVar9 = pppppppiVar8;
    pppppppiVar11 = pppppppiVar10;
    pppppppiVar4 = param_3;
    pppppppiVar10 = param_6;
    goto LAB_104a9c7a4;
  }
  pppppppiVar6 = pppppppiVar4 + 0xb4;
  pppppppiVar11 = (int *******)auStack_f5;
  pppppppiVar9 = (int *******)0x5;
  pppppppiVar5 = pppppppiVar6;
  FUN_104ad8248();
  if (auStack_f5[0] == 0) {
    if (puVar12 != (undefined8 *)0x0) {
      uVar15 = 0;
LAB_104a9c610:
      *(undefined4 *)puVar12 = uVar15;
    }
LAB_104a9c614:
    uVar1 = (auStack_f5._1_4_ & 0xff00ff00) >> 8 | (auStack_f5._1_4_ & 0xff00ff) << 8;
    pppppppiVar18 = (int *******)(ulong)(uVar1 >> 0x10 | uVar1 << 0x10);
    if ((int ******)((long)pppppppiVar18 + 5U) <= pppppppiVar4[0xb8]) {
      if (pppppppiVar8 != (int *******)0x0) {
        *(int *)pppppppiVar8 = 0;
      }
      if (pppppppiVar10 != (int *******)0x0) {
        pppppppiVar4[0x27] = (int ******)((long)pppppppiVar4[0x27] + 5);
        pppppppiVar4[0x28] = (int ******)((long)pppppppiVar4[0x28] + (long)pppppppiVar18);
        FUN_104ad8098(pppppppiVar6,5,auStack_f5);
        pppppppiVar11 = pppppppiVar10;
        func_0x000104ad7c94();
        pppppppiVar5 = pppppppiVar6;
        pppppppiVar9 = pppppppiVar18;
      }
      *extraout_x8 = 0;
      goto LAB_104a9c79c;
    }
    uVar15 = 0;
    if (pppppppiVar8 != (int *******)0x0) {
      *(int *)pppppppiVar8 = (int)(int ******)((long)pppppppiVar18 + 5U) - (int)pppppppiVar4[0xb8];
    }
  }
  else {
    if (auStack_f5[0] == 1) {
      if (puVar12 != (undefined8 *)0x0) {
        uVar15 = 0x80000000;
        goto LAB_104a9c610;
      }
      goto LAB_104a9c614;
    }
    puStack_e0 = &UNK_10ae73c30;
    puStack_e8 = (undefined8 *)(ulong)auStack_f5[0];
    func_0x0001004d4da0(&pppppppiStack_118,"Bad GRPC frame type 0x%02x",0x1a,&puStack_e8,1);
    pppppppiVar10 = pppppppiStack_118;
    if (-1 < (char)bStack_101) {
      uStack_110 = (ulong)bStack_101;
      pppppppiVar10 = (int *******)&pppppppiStack_118;
    }
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_138 = 0;
    puVar13 = (undefined8 *)&uStack_119;
    iVar14 = (int)&uStack_138;
    FUN_104ab5920(&pppppppiStack_100,2,pppppppiVar10,uStack_110);
    pppppppiVar10 = pppppppiStack_100;
    if (pppppppiStack_100 != (int *******)0x0) {
      pppppppiStack_f0 = pppppppiStack_100;
      pppppppiStack_100 = (int *******)0x36;
    }
    puStack_e8 = &uStack_138;
    func_0x000100482b64(&puStack_e8);
    if ((char)bStack_101 < '\0') {
      __ZdlPv(pppppppiStack_118);
    }
    pppppppiStack_140 = pppppppiVar10;
    if (((ulong)pppppppiVar10 & 1) != 0) {
      piVar16 = (int *)((long)pppppppiVar10 + -1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar3) {
          *piVar16 = *piVar16 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    pppppppiVar11 = (int *******)(ulong)*(uint *)((long)pppppppiVar4 + 0x9c);
    pppppppiVar9 = (int *******)0x2;
    FUN_104abaa50(&pppppppiStack_118,&pppppppiStack_140);
    pppppppiVar4 = pppppppiStack_118;
    pppppppiVar5 = pppppppiVar10;
    if (pppppppiStack_118 == pppppppiVar10) {
joined_r0x000104a9c780:
      pppppppiVar4 = pppppppiVar5;
      if (((ulong)pppppppiVar10 & 1) != 0) {
        func_0x00010084dad0(pppppppiVar10);
      }
    }
    else {
      pppppppiStack_f0 = pppppppiStack_118;
      pppppppiStack_118 = (int *******)0x36;
      if (((ulong)pppppppiVar10 & 1) != 0) {
        func_0x00010084dad0(pppppppiVar10);
        pppppppiVar5 = pppppppiVar4;
        pppppppiVar10 = pppppppiStack_118;
        goto joined_r0x000104a9c780;
      }
    }
    pppppppiVar5 = pppppppiStack_140;
    if (((ulong)pppppppiStack_140 & 1) != 0) {
      func_0x00010084dad0();
    }
    *extraout_x8 = pppppppiVar4;
LAB_104a9c79c:
    uVar15 = 1;
  }
  *(undefined4 *)(extraout_x8 + 1) = uVar15;
LAB_104a9c7a4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001004bdf74(&pppppppiStack_118);
  func_0x0001004bdf74(&pppppppiStack_140);
  func_0x0001004bdf74(&pppppppiStack_f0);
  __Unwind_Resume(pppppppiVar5);
  pppppppiStack_170 = pppppppiVar8;
  pppppppiStack_168 = pppppppiVar10;
  pppppppiStack_160 = pppppppiVar4;
  pppppppiStack_158 = pppppppiVar5;
  ppuStack_150 = &puStack_a0;
  pcStack_148 = FUN_104a9c84c;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar17 = (long *)*puVar13;
  if ((long *)0x1 < plVar17) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar3) {
        *plVar17 = *plVar17 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_198 = puVar13[1];
  uStack_1a0 = *puVar13;
  uStack_188 = puVar13[3];
  uStack_190 = puVar13[2];
  func_0x0001005a70c4(pppppppiVar11 + 0xb4,&uStack_1a0);
  pppppppiVar4 = pppppppiVar9;
  pppppppiVar10 = pppppppiVar11;
  func_0x0001008e2b98();
  iVar7 = (int)pppppppiVar10;
  if ((iVar14 != 0) && (*(char *)(pppppppiVar11 + 0xd9) != '\0')) {
    cVar2 = *(char *)(pppppppiVar9 + 0xc5);
    if (cVar2 == '\0') {
      pppppppiStack_1b0 = (int *******)0x0;
    }
    else {
      pppppiStack_1d0 = (int *****)0x0;
      uStack_1c8 = 0;
      uStack_1c0 = 0;
      FUN_104ab5920(&pppppppiStack_1b0,2,"Data frame with END_STREAM flag received",0x28,&uStack_1b1
                    ,&pppppiStack_1d0);
    }
    FUN_104a997b0(pppppppiVar9,pppppppiVar11,1,0,&pppppppiStack_1b0);
    iVar7 = (int)pppppppiVar11;
    if (cVar2 == '\0') {
      pppppppiVar4 = pppppppiStack_1b0;
      if (((ulong)pppppppiStack_1b0 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    else {
      if (((ulong)pppppppiStack_1b0 & 1) != 0) {
        func_0x00010084dad0();
      }
      pppppppiVar4 = &ppppppiStack_1a8;
      ppppppiStack_1a8 = &pppppiStack_1d0;
      func_0x000100482b64();
    }
  }
  *extraout_x8_00 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return;
  }
  ___stack_chk_fail();
  if (iVar7 != 0) {
    FUN_104bd46a0();
    ppppppiStack_1a8 = &pppppiStack_1d0;
    func_0x000100482b64(&ppppppiStack_1a8);
  }
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(pppppppiVar4[2]);
  return;
}



/* Entry: 104a9c574; end: 104a9c84b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_104a9c574(ulong *param_1,undefined8 *******param_2,undefined1 **param_3,
                  undefined8 *******param_4,undefined8 *param_5,int param_6)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined8 *******pppppppuVar4;
  undefined8 *******pppppppuVar5;
  int iVar6;
  undefined1 **ppuVar7;
  undefined8 *******pppppppuVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined8 *extraout_x8;
  long *plVar12;
  undefined8 *******unaff_x20;
  undefined8 *******unaff_x21;
  undefined1 **ppuVar13;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 uStack_121;
  undefined1 **ppuStack_120;
  undefined1 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_e8;
  undefined1 **ppuStack_e0;
  undefined8 *******pppppppuStack_d8;
  undefined8 *******pppppppuStack_d0;
  undefined8 *******pppppppuStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 *******pppppppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_89;
  undefined8 *******pppppppuStack_88;
  ulong uStack_80;
  byte bStack_71;
  undefined8 *******pppppppuStack_70;
  undefined1 auStack_65 [5];
  undefined8 *******pppppppuStack_60;
  undefined8 *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppuStack_60 = (undefined8 *******)0x0;
  puVar9 = param_5;
  if (param_2[0xb8] < (undefined8 ******)0x5) {
    if (param_3 != (undefined1 **)0x0) {
      *(int *)param_3 = 5 - (int)param_2[0xb8];
    }
    *(undefined4 *)(param_1 + 1) = 0;
    pppppppuVar4 = param_2;
    ppuVar7 = param_3;
    pppppppuVar8 = param_4;
    param_2 = unaff_x20;
    param_4 = unaff_x21;
    goto LAB_104a9c7a4;
  }
  pppppppuVar5 = param_2 + 0xb4;
  pppppppuVar8 = (undefined8 *******)auStack_65;
  ppuVar7 = (undefined1 **)0x5;
  pppppppuVar4 = pppppppuVar5;
  FUN_104ad8248();
  if (auStack_65[0] == 0) {
    if (param_5 != (undefined8 *)0x0) {
      uVar10 = 0;
LAB_104a9c610:
      *(undefined4 *)param_5 = uVar10;
    }
LAB_104a9c614:
    uVar1 = (auStack_65._1_4_ & 0xff00ff00) >> 8 | (auStack_65._1_4_ & 0xff00ff) << 8;
    ppuVar13 = (undefined1 **)(ulong)(uVar1 >> 0x10 | uVar1 << 0x10);
    if ((undefined8 ******)((long)ppuVar13 + 5U) <= param_2[0xb8]) {
      if (param_3 != (undefined1 **)0x0) {
        *(int *)param_3 = 0;
      }
      if (param_4 != (undefined8 *******)0x0) {
        param_2[0x27] = (undefined8 ******)((long)param_2[0x27] + 5);
        param_2[0x28] = (undefined8 ******)((long)param_2[0x28] + (long)ppuVar13);
        FUN_104ad8098(pppppppuVar5,5,auStack_65);
        pppppppuVar8 = param_4;
        FUN_104ad7c94();
        pppppppuVar4 = pppppppuVar5;
        ppuVar7 = ppuVar13;
      }
      *param_1 = 0;
      goto LAB_104a9c79c;
    }
    uVar10 = 0;
    if (param_3 != (undefined1 **)0x0) {
      *(int *)param_3 = (int)(undefined8 ******)((long)ppuVar13 + 5U) - (int)param_2[0xb8];
    }
  }
  else {
    if (auStack_65[0] == 1) {
      if (param_5 != (undefined8 *)0x0) {
        uVar10 = 0x80000000;
        goto LAB_104a9c610;
      }
      goto LAB_104a9c614;
    }
    puStack_50 = &UNK_10ae73c30;
    puStack_58 = (undefined8 *)(ulong)auStack_65[0];
    func_0x0001004d4da0(&pppppppuStack_88,"Bad GRPC frame type 0x%02x",0x1a,&puStack_58,1);
    pppppppuVar8 = pppppppuStack_88;
    if (-1 < (char)bStack_71) {
      uStack_80 = (ulong)bStack_71;
      pppppppuVar8 = &pppppppuStack_88;
    }
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_a8 = 0;
    puVar9 = (undefined8 *)&uStack_89;
    param_6 = (int)&uStack_a8;
    FUN_104ab5920(&pppppppuStack_70,2,pppppppuVar8,uStack_80);
    param_4 = pppppppuStack_70;
    if (pppppppuStack_70 != (undefined8 *******)0x0) {
      pppppppuStack_60 = pppppppuStack_70;
      pppppppuStack_70 = (undefined8 *******)0x36;
    }
    puStack_58 = &uStack_a8;
    func_0x000100482b64(&puStack_58);
    if ((char)bStack_71 < '\0') {
      __ZdlPv(pppppppuStack_88);
    }
    pppppppuStack_b0 = param_4;
    if (((ulong)param_4 & 1) != 0) {
      piVar11 = (int *)((long)param_4 + -1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar3) {
          *piVar11 = *piVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    pppppppuVar8 = (undefined8 *******)(ulong)*(uint *)((long)param_2 + 0x9c);
    ppuVar7 = (undefined1 **)0x2;
    FUN_104abaa50(&pppppppuStack_88,&pppppppuStack_b0);
    param_2 = pppppppuStack_88;
    pppppppuVar4 = param_4;
    if (pppppppuStack_88 == param_4) {
joined_r0x000104a9c780:
      param_2 = pppppppuVar4;
      if (((ulong)param_4 & 1) != 0) {
        func_0x00010084dad0(param_4);
      }
    }
    else {
      pppppppuStack_60 = pppppppuStack_88;
      pppppppuStack_88 = (undefined8 *******)0x36;
      if (((ulong)param_4 & 1) != 0) {
        func_0x00010084dad0(param_4);
        pppppppuVar4 = param_2;
        param_4 = pppppppuStack_88;
        goto joined_r0x000104a9c780;
      }
    }
    pppppppuVar4 = pppppppuStack_b0;
    if (((ulong)pppppppuStack_b0 & 1) != 0) {
      func_0x00010084dad0();
    }
    *param_1 = (ulong)param_2;
LAB_104a9c79c:
    uVar10 = 1;
  }
  *(undefined4 *)(param_1 + 1) = uVar10;
LAB_104a9c7a4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001004bdf74(&pppppppuStack_88);
  func_0x0001004bdf74(&pppppppuStack_b0);
  func_0x0001004bdf74(&pppppppuStack_60);
  __Unwind_Resume(pppppppuVar4);
  ppuStack_e0 = param_3;
  pppppppuStack_d8 = param_4;
  pppppppuStack_d0 = param_2;
  pppppppuStack_c8 = pppppppuVar4;
  puStack_c0 = &stack0xfffffffffffffff0;
  pcStack_b8 = FUN_104a9c84c;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = (long *)*puVar9;
  if ((long *)0x1 < plVar12) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = *plVar12 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_108 = puVar9[1];
  uStack_110 = *puVar9;
  uStack_f8 = puVar9[3];
  uStack_100 = puVar9[2];
  func_0x0001005a70c4(pppppppuVar8 + 0xb4,&uStack_110);
  ppuVar13 = ppuVar7;
  pppppppuVar4 = pppppppuVar8;
  func_0x0001008e2b98();
  iVar6 = (int)pppppppuVar4;
  if ((param_6 != 0) && (*(char *)(pppppppuVar8 + 0xd9) != '\0')) {
    cVar2 = *(char *)(ppuVar7 + 0xc5);
    if (cVar2 == '\0') {
      ppuStack_120 = (undefined1 **)0x0;
    }
    else {
      uStack_140 = 0;
      uStack_138 = 0;
      uStack_130 = 0;
      FUN_104ab5920(&ppuStack_120,2,"Data frame with END_STREAM flag received",0x28,&uStack_121,
                    &uStack_140);
    }
    FUN_104a997b0(ppuVar7,pppppppuVar8,1,0,&ppuStack_120);
    iVar6 = (int)pppppppuVar8;
    if (cVar2 == '\0') {
      ppuVar13 = ppuStack_120;
      if (((ulong)ppuStack_120 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    else {
      if (((ulong)ppuStack_120 & 1) != 0) {
        func_0x00010084dad0();
      }
      ppuVar13 = &puStack_118;
      puStack_118 = (undefined1 *)&uStack_140;
      func_0x000100482b64();
    }
  }
  *extraout_x8 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  if (iVar6 != 0) {
    FUN_104bd46a0();
    puStack_118 = (undefined1 *)&uStack_140;
    func_0x000100482b64(&puStack_118);
  }
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(ppuVar13[2]);
  return;
}



/* Entry: 104a9c84c; end: 104a9c9c3;  */

void FUN_104a9c84c(undefined8 *param_1,undefined8 param_2,undefined1 **param_3,long param_4,
                  undefined8 *param_5,int param_6)

{
  char cVar1;
  bool bVar2;
  undefined1 **ppuVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_71;
  undefined1 **ppuStack_70;
  undefined1 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = (long *)*param_5;
  if ((long *)0x1 < plVar6) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_58 = param_5[1];
  uStack_60 = *param_5;
  uStack_48 = param_5[3];
  uStack_50 = param_5[2];
  func_0x0001005a70c4(param_4 + 0x5a0,&uStack_60);
  ppuVar3 = param_3;
  lVar5 = param_4;
  func_0x0001008e2b98();
  iVar4 = (int)lVar5;
  if ((param_6 != 0) && (*(char *)(param_4 + 0x6c8) != '\0')) {
    cVar1 = *(char *)(param_3 + 0xc5);
    if (cVar1 == '\0') {
      ppuStack_70 = (undefined1 **)0x0;
    }
    else {
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      FUN_104ab5920(&ppuStack_70,2,"Data frame with END_STREAM flag received",0x28,&uStack_71,
                    &uStack_90);
    }
    FUN_104a997b0(param_3,param_4,1,0,&ppuStack_70);
    iVar4 = (int)param_4;
    if (cVar1 == '\0') {
      ppuVar3 = ppuStack_70;
      if (((ulong)ppuStack_70 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    else {
      if (((ulong)ppuStack_70 & 1) != 0) {
        func_0x00010084dad0();
      }
      ppuVar3 = &puStack_68;
      puStack_68 = (undefined1 *)&uStack_90;
      func_0x000100482b64();
    }
  }
  *param_1 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if (iVar4 != 0) {
    FUN_104bd46a0();
    puStack_68 = (undefined1 *)&uStack_90;
    func_0x000100482b64(&puStack_68);
  }
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(ppuVar3[2]);
  return;
}



/* Entry: 104a9c9c4; end: 104a9c9cb;  */

void FUN_104a9c9c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 104a9c9cc; end: 104a9cb0f;  */

undefined1  [16]
FUN_104a9c9cc(undefined8 *param_1,uint ****param_2,uint *****param_3,undefined8 param_4,
             long *param_5,int param_6)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  int iVar7;
  bool bVar8;
  undefined4 uVar9;
  long lVar10;
  long *plVar11;
  uint *****pppppuVar12;
  uint *****pppppuVar13;
  long *plVar14;
  uint uVar15;
  byte *pbVar16;
  byte *pbVar17;
  char *pcVar18;
  char *pcVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  undefined8 *extraout_x8;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  long alStack_1f8 [8];
  long lStack_1b8;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  ulong uStack_148;
  undefined1 *puStack_140;
  undefined8 uStack_138;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  uint **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_61;
  uint ****ppppuStack_60;
  ulong uStack_58;
  byte bStack_49;
  uint ***pppuStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar15 = (uint)param_3;
  if (uVar15 < 8) {
    pppuStack_48 = (uint ***)((ulong)param_3 & 0xffffffff);
    puStack_40 = &UNK_10ae73cc0;
    func_0x0001004d4da0(&ppppuStack_60,"goaway frame too short (%d bytes)",0x21,&pppuStack_48,1);
    param_3 = (uint *****)ppppuStack_60;
    if (-1 < (char)bStack_49) {
      uStack_58 = (ulong)bStack_49;
      param_3 = &ppppuStack_60;
    }
    uStack_78 = 0;
    uStack_70 = 0;
    ppuStack_80 = (uint **)0x0;
    param_5 = (long *)&uStack_61;
    param_6 = (int)&ppuStack_80;
    FUN_104ab5920(param_1,2,param_3,uStack_58);
    pppppuVar12 = (uint *****)&pppuStack_48;
    pppuStack_48 = &ppuStack_80;
    func_0x000100482b64();
    param_2 = (uint ****)&ppuStack_80;
    if ((char)bStack_49 < '\0') {
      pppppuVar12 = (uint *****)ppppuStack_60;
      __ZdlPv();
      param_2 = (uint ****)&ppuStack_80;
    }
  }
  else {
    func_0x000100460314(param_2[2]);
    uVar15 = uVar15 - 8;
    pppppuVar12 = (uint *****)(ulong)uVar15;
    *(uint *)(param_2 + 3) = uVar15;
    func_0x000100460200();
    param_2[2] = (uint ***)pppppuVar12;
    *(undefined4 *)((long)param_2 + 0x1c) = 0;
    *(undefined4 *)param_2 = 0;
    *param_1 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    auVar26._8_8_ = param_3;
    auVar26._0_8_ = pppppuVar12;
    return auVar26;
  }
  ___stack_chk_fail();
  pppuStack_48 = (uint ***)param_2;
  func_0x000100482b64(&pppuStack_48);
  if ((char)bStack_49 < '\0') {
    __ZdlPv(ppppuStack_60);
  }
  __Unwind_Resume();
  pbVar17 = (byte *)((long)param_5 + 9);
  if (*param_5 != 0) {
    pbVar17 = (byte *)param_5[2];
  }
  uVar6 = param_5[1] & 0xff;
  if (*param_5 != 0) {
    uVar6 = param_5[1];
  }
  if (*(uint *)pppppuVar12 < 9) {
    pbVar1 = pbVar17 + uVar6;
    pbVar16 = pbVar17;
    pppppuVar13 = pppppuVar12;
    switch(*(uint *)pppppuVar12) {
    case 0:
      if (uVar6 == 0) {
        *(uint *)pppppuVar12 = 0;
        goto code_r0x000104a9ccc8;
      }
      pbVar16 = pbVar17 + 1;
      *(uint *)((long)pppppuVar12 + 4) = (uint)*pbVar17 << 0x18;
      break;
    case 2:
      goto code_r0x000104a9cba0;
    case 3:
      goto code_r0x000104a9cbb8;
    case 4:
      goto code_r0x000104a9cbd0;
    case 5:
      goto code_r0x000104a9cbe4;
    case 6:
      goto code_r0x000104a9cbfc;
    case 7:
      goto code_r0x000104a9cc14;
    case 8:
      goto code_r0x000104a9cc2c;
    }
    if (pbVar16 == pbVar1) {
      uVar15 = 1;
      pbVar17 = pbVar16;
    }
    else {
      pbVar17 = pbVar16 + 1;
      *(uint *)((long)pppppuVar12 + 4) = *(uint *)((long)pppppuVar12 + 4) | (uint)*pbVar16 << 0x10;
code_r0x000104a9cba0:
      if (pbVar17 == pbVar1) {
        uVar15 = 2;
      }
      else {
        pbVar16 = pbVar17 + 1;
        *(uint *)((long)pppppuVar12 + 4) = *(uint *)((long)pppppuVar12 + 4) | (uint)*pbVar17 << 8;
code_r0x000104a9cbb8:
        if (pbVar16 == pbVar1) {
          uVar15 = 3;
          pbVar17 = pbVar16;
        }
        else {
          pbVar17 = pbVar16 + 1;
          *(uint *)((long)pppppuVar12 + 4) = *(uint *)((long)pppppuVar12 + 4) | (uint)*pbVar16;
code_r0x000104a9cbd0:
          if (pbVar17 == pbVar1) {
            uVar15 = 4;
          }
          else {
            pbVar16 = pbVar17 + 1;
            *(uint *)(pppppuVar12 + 1) = (uint)*pbVar17 << 0x18;
code_r0x000104a9cbe4:
            if (pbVar16 == pbVar1) {
              uVar15 = 5;
              pbVar17 = pbVar16;
            }
            else {
              pbVar17 = pbVar16 + 1;
              *(uint *)(pppppuVar12 + 1) = *(uint *)(pppppuVar12 + 1) | (uint)*pbVar16 << 0x10;
code_r0x000104a9cbfc:
              if (pbVar17 == pbVar1) {
                uVar15 = 6;
              }
              else {
                pbVar16 = pbVar17 + 1;
                *(uint *)(pppppuVar12 + 1) = *(uint *)(pppppuVar12 + 1) | (uint)*pbVar17 << 8;
code_r0x000104a9cc14:
                if (pbVar16 != pbVar1) {
                  pbVar17 = pbVar16 + 1;
                  *(uint *)(pppppuVar12 + 1) = *(uint *)(pppppuVar12 + 1) | (uint)*pbVar16;
code_r0x000104a9cc2c:
                  uVar6 = (long)pbVar1 - (long)pbVar17;
                  if (uVar6 != 0) {
                    pppppuVar13 = (uint *****)
                                  ((long)pppppuVar12[2] + (ulong)*(uint *)((long)pppppuVar12 + 0x1c)
                                  );
                    _memcpy(pppppuVar13,pbVar17,uVar6);
                  }
                  if (uVar6 < ~*(uint *)((long)pppppuVar12 + 0x1c)) {
                    *(uint *)((long)pppppuVar12 + 0x1c) =
                         *(uint *)((long)pppppuVar12 + 0x1c) + (int)uVar6;
                    *(uint *)pppppuVar12 = 8;
                    if (param_6 != 0) {
                      pbVar17 = (byte *)(ulong)*(uint *)(pppppuVar12 + 1);
                      FUN_104a976d4(param_3,pbVar17,*(uint *)((long)pppppuVar12 + 4),pppppuVar12[2],
                                    *(uint *)(pppppuVar12 + 3));
                      pppppuVar13 = (uint *****)pppppuVar12[2];
                      func_0x000100460314(pppppuVar13);
                      pppppuVar12[2] = (uint ****)0x0;
                    }
                    goto code_r0x000104a9ccc8;
                  }
                  func_0x00010bdab088();
                  goto LAB_104a9ccec;
                }
                uVar15 = 7;
                pbVar17 = pbVar16;
              }
            }
          }
        }
      }
    }
    *(uint *)pppppuVar12 = uVar15;
code_r0x000104a9ccc8:
    *extraout_x8 = 0;
    auVar27._8_8_ = pbVar17;
    auVar27._0_8_ = pppppuVar13;
    return auVar27;
  }
LAB_104a9ccec:
  uVar9 = 0x10f;
  pcVar18 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/frame_goaway.cc"
  ;
  plVar21 = (long *)0x98;
  FUN_104a6e964();
  plVar20 = &lStack_170;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar14 = (long *)0x11;
  pcVar19 = pcVar18;
  plVar11 = param_5;
  func_0x0001005a7e6c(&lStack_128,0x11);
  puVar4 = uStack_118;
  if (*plVar21 == 0 || (ulong)plVar21[1] < 0xfffffff7) {
    uVar15 = (uint)plVar21[1];
    if (*plVar21 == 0) {
      uVar15 = uVar15 & 0xff;
    }
    bVar8 = lStack_128 != 0;
    puVar5 = (undefined1 *)((long)&uStack_120 + 2);
    puVar3 = (undefined1 *)((long)&uStack_120 + 1);
    if (bVar8) {
      puVar5 = uStack_118 + 1;
      puVar3 = uStack_118;
    }
    iVar7 = uVar15 + 8;
    *puVar3 = (char)((uint)iVar7 >> 0x10);
    puVar3 = (undefined1 *)((long)&uStack_120 + 3);
    if (bVar8) {
      puVar3 = puVar4 + 2;
    }
    *puVar5 = (char)((uint)iVar7 >> 8);
    puVar5 = (undefined1 *)((long)&uStack_120 + 4);
    if (bVar8) {
      puVar5 = puVar4 + 3;
    }
    *puVar3 = (char)iVar7;
    puVar3 = (undefined1 *)((long)&uStack_120 + 5);
    if (bVar8) {
      puVar3 = puVar4 + 4;
    }
    *puVar5 = 7;
    puVar5 = (undefined1 *)((long)&uStack_120 + 6);
    if (bVar8) {
      puVar5 = puVar4 + 5;
    }
    *puVar3 = 0;
    puVar3 = (undefined1 *)((long)&uStack_120 + 7);
    if (bVar8) {
      puVar3 = puVar4 + 6;
    }
    *puVar5 = 0;
    puVar2 = &uStack_118;
    if (bVar8) {
      puVar2 = (undefined8 *)(puVar4 + 7);
    }
    *puVar3 = 0;
    puVar5 = (undefined1 *)((long)&uStack_118 + 1);
    if (bVar8) {
      puVar5 = puVar4 + 8;
    }
    *(undefined1 *)puVar2 = 0;
    puVar3 = (undefined1 *)((long)&uStack_118 + 2);
    if (bVar8) {
      puVar3 = puVar4 + 9;
    }
    *puVar5 = 0;
    puVar5 = (undefined1 *)((long)&uStack_118 + 3);
    if (bVar8) {
      puVar5 = puVar4 + 10;
    }
    *puVar3 = (char)((uint)uVar9 >> 0x18);
    puVar3 = (undefined1 *)((long)&uStack_118 + 4);
    if (bVar8) {
      puVar3 = puVar4 + 0xb;
    }
    *puVar5 = (char)((uint)uVar9 >> 0x10);
    puVar5 = (undefined1 *)((long)&uStack_118 + 5);
    if (bVar8) {
      puVar5 = puVar4 + 0xc;
    }
    *puVar3 = (char)((uint)uVar9 >> 8);
    puVar3 = (undefined1 *)((long)&uStack_118 + 6);
    if (bVar8) {
      puVar3 = puVar4 + 0xd;
    }
    *puVar5 = (char)uVar9;
    puVar5 = (undefined1 *)((long)&uStack_118 + 7);
    if (bVar8) {
      puVar5 = puVar4 + 0xe;
    }
    *puVar3 = (char)((ulong)pcVar18 >> 0x18);
    puVar2 = &uStack_110;
    if (bVar8) {
      puVar2 = (undefined8 *)(puVar4 + 0xf);
    }
    *puVar5 = (char)((ulong)pcVar18 >> 0x10);
    puVar5 = (undefined1 *)((long)&uStack_110 + 1);
    if (bVar8) {
      puVar5 = puVar4 + 0x10;
    }
    *(char *)puVar2 = (char)((ulong)pcVar18 >> 8);
    puVar3 = (undefined1 *)((long)&uStack_110 + 2);
    if (bVar8) {
      puVar3 = puVar4 + 0x11;
    }
    *puVar5 = (char)pcVar18;
    puVar4 = (undefined1 *)((long)&uStack_120 + 1);
    if (lStack_128 != 0) {
      puVar4 = uStack_118;
    }
    uVar6 = uStack_120 & 0xff;
    if (lStack_128 != 0) {
      uVar6 = uStack_120;
    }
    if (puVar3 == puVar4 + uVar6) {
      uStack_148 = uStack_120;
      lStack_150 = lStack_128;
      uStack_138 = uStack_110;
      puStack_140 = uStack_118;
      func_0x0001005a70c4(param_5,&lStack_150);
      lStack_168 = plVar21[1];
      lStack_170 = *plVar21;
      lStack_158 = plVar21[3];
      lStack_160 = plVar21[2];
      func_0x0001005a70c4(param_5);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
        auVar28._8_8_ = plVar20;
        auVar28._0_8_ = param_5;
        return auVar28;
      }
      goto SUB_1004686cc;
    }
  }
  else {
    func_0x00010bdab0bc();
  }
  plVar20 = (long *)pcVar19;
  param_5 = plVar14;
  func_0x00010bdab0f0();
SUB_1004686cc:
  ___stack_chk_fail();
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar14 = (long *)0x2;
  pcVar18 = (char *)plVar20;
  func_0x0001004686b8();
  if ((int)plVar14 != 0) {
    plVar14 = alStack_1f8;
    func_0x000107c616d0(plVar14,0x40,plVar11,&lStack_170);
    if ((int)(uint)plVar14 < 0) {
      plVar11 = (long *)0x0;
      plVar14 = (long *)0x0;
    }
    else if ((uint)plVar14 < 0x40) {
      plVar14 = (long *)0x0;
      plVar11 = alStack_1f8;
    }
    else {
      plVar14 = (long *)(((ulong)plVar14 & 0xffffffff) + 1);
      func_0x000100460200();
      func_0x000107c616d0();
      plVar11 = plVar14;
    }
    FUN_104a6e9e0(param_5,plVar20,2,plVar11);
    func_0x000100460314();
    pcVar18 = (char *)plVar20;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b8) {
    func_0x000107c60e78();
    if ((ulong)pcVar18 >> 0x3d != 0) {
      FUN_104a7757c();
      lVar10 = plVar14[1];
      lVar22 = plVar14[2];
      while (lVar22 != lVar10) {
        plVar14[2] = lVar22 + -8;
        plVar11 = *(long **)(lVar22 + -8);
        *(undefined8 *)(lVar22 + -8) = 0;
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 8))();
        }
        lVar22 = plVar14[2];
      }
      if (*plVar14 != 0) {
        func_0x000107c60e14();
      }
      auVar25._8_8_ = pcVar18;
      auVar25._0_8_ = plVar14;
      return auVar25;
    }
    lVar10 = (long)pcVar18 << 3;
    func_0x000107c60e20(lVar10);
    auVar24._8_8_ = pcVar18;
    auVar24._0_8_ = lVar10;
    return auVar24;
  }
  auVar23._8_8_ = pcVar18;
  auVar23._0_8_ = plVar14;
  return auVar23;
}



/* Entry: 104a9cb10; end: 104a9cf3f;  */

undefined1  [16]
FUN_104a9cb10(undefined8 *param_1,uint *param_2,undefined8 param_3,undefined8 param_4,long *param_5,
             int param_6)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  int iVar7;
  bool bVar8;
  undefined4 uVar9;
  long lVar10;
  long *plVar11;
  uint *puVar12;
  long *plVar13;
  byte *pbVar14;
  byte *pbVar15;
  char *pcVar16;
  char *pcVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  uint uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  long alStack_178 [8];
  long lStack_138;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  undefined1 *puStack_c0;
  undefined8 uStack_b8;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  pbVar15 = (byte *)((long)param_5 + 9);
  if (*param_5 != 0) {
    pbVar15 = (byte *)param_5[2];
  }
  uVar6 = param_5[1] & 0xff;
  if (*param_5 != 0) {
    uVar6 = param_5[1];
  }
  if (*param_2 < 9) {
    pbVar1 = pbVar15 + uVar6;
    pbVar14 = pbVar15;
    puVar12 = param_2;
    switch(*param_2) {
    case 0:
      if (uVar6 == 0) {
        *param_2 = 0;
        goto code_r0x000104a9ccc8;
      }
      pbVar14 = pbVar15 + 1;
      param_2[1] = (uint)*pbVar15 << 0x18;
      break;
    case 2:
      goto code_r0x000104a9cba0;
    case 3:
      goto code_r0x000104a9cbb8;
    case 4:
      goto code_r0x000104a9cbd0;
    case 5:
      goto code_r0x000104a9cbe4;
    case 6:
      goto code_r0x000104a9cbfc;
    case 7:
      goto code_r0x000104a9cc14;
    case 8:
      goto code_r0x000104a9cc2c;
    }
    if (pbVar14 == pbVar1) {
      uVar21 = 1;
      pbVar15 = pbVar14;
    }
    else {
      pbVar15 = pbVar14 + 1;
      param_2[1] = param_2[1] | (uint)*pbVar14 << 0x10;
code_r0x000104a9cba0:
      if (pbVar15 == pbVar1) {
        uVar21 = 2;
      }
      else {
        pbVar14 = pbVar15 + 1;
        param_2[1] = param_2[1] | (uint)*pbVar15 << 8;
code_r0x000104a9cbb8:
        if (pbVar14 == pbVar1) {
          uVar21 = 3;
          pbVar15 = pbVar14;
        }
        else {
          pbVar15 = pbVar14 + 1;
          param_2[1] = param_2[1] | (uint)*pbVar14;
code_r0x000104a9cbd0:
          if (pbVar15 == pbVar1) {
            uVar21 = 4;
          }
          else {
            pbVar14 = pbVar15 + 1;
            param_2[2] = (uint)*pbVar15 << 0x18;
code_r0x000104a9cbe4:
            if (pbVar14 == pbVar1) {
              uVar21 = 5;
              pbVar15 = pbVar14;
            }
            else {
              pbVar15 = pbVar14 + 1;
              param_2[2] = param_2[2] | (uint)*pbVar14 << 0x10;
code_r0x000104a9cbfc:
              if (pbVar15 == pbVar1) {
                uVar21 = 6;
              }
              else {
                pbVar14 = pbVar15 + 1;
                param_2[2] = param_2[2] | (uint)*pbVar15 << 8;
code_r0x000104a9cc14:
                if (pbVar14 != pbVar1) {
                  pbVar15 = pbVar14 + 1;
                  param_2[2] = param_2[2] | (uint)*pbVar14;
code_r0x000104a9cc2c:
                  uVar6 = (long)pbVar1 - (long)pbVar15;
                  if (uVar6 != 0) {
                    puVar12 = (uint *)(*(long *)(param_2 + 4) + (ulong)param_2[7]);
                    _memcpy(puVar12,pbVar15,uVar6);
                  }
                  if (uVar6 < ~param_2[7]) {
                    param_2[7] = param_2[7] + (int)uVar6;
                    *param_2 = 8;
                    if (param_6 != 0) {
                      pbVar15 = (byte *)(ulong)param_2[2];
                      FUN_104a976d4(param_3,pbVar15,param_2[1],*(undefined8 *)(param_2 + 4),
                                    param_2[6]);
                      puVar12 = *(uint **)(param_2 + 4);
                      func_0x000100460314(puVar12);
                      param_2[4] = 0;
                      param_2[5] = 0;
                    }
                    goto code_r0x000104a9ccc8;
                  }
                  func_0x00010bdab088();
                  goto LAB_104a9ccec;
                }
                uVar21 = 7;
                pbVar15 = pbVar14;
              }
            }
          }
        }
      }
    }
    *param_2 = uVar21;
code_r0x000104a9ccc8:
    *param_1 = 0;
    auVar25._8_8_ = pbVar15;
    auVar25._0_8_ = puVar12;
    return auVar25;
  }
LAB_104a9ccec:
  uVar9 = 0x10f;
  pcVar16 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/frame_goaway.cc"
  ;
  plVar19 = (long *)0x98;
  FUN_104a6e964();
  plVar18 = &lStack_f0;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = (long *)0x11;
  pcVar17 = pcVar16;
  plVar11 = param_5;
  func_0x0001005a7e6c(&lStack_a8,0x11);
  puVar4 = uStack_98;
  if (*plVar19 == 0 || (ulong)plVar19[1] < 0xfffffff7) {
    uVar21 = (uint)plVar19[1];
    if (*plVar19 == 0) {
      uVar21 = uVar21 & 0xff;
    }
    bVar8 = lStack_a8 != 0;
    puVar5 = (undefined1 *)((long)&uStack_a0 + 2);
    puVar3 = (undefined1 *)((long)&uStack_a0 + 1);
    if (bVar8) {
      puVar5 = uStack_98 + 1;
      puVar3 = uStack_98;
    }
    iVar7 = uVar21 + 8;
    *puVar3 = (char)((uint)iVar7 >> 0x10);
    puVar3 = (undefined1 *)((long)&uStack_a0 + 3);
    if (bVar8) {
      puVar3 = puVar4 + 2;
    }
    *puVar5 = (char)((uint)iVar7 >> 8);
    puVar5 = (undefined1 *)((long)&uStack_a0 + 4);
    if (bVar8) {
      puVar5 = puVar4 + 3;
    }
    *puVar3 = (char)iVar7;
    puVar3 = (undefined1 *)((long)&uStack_a0 + 5);
    if (bVar8) {
      puVar3 = puVar4 + 4;
    }
    *puVar5 = 7;
    puVar5 = (undefined1 *)((long)&uStack_a0 + 6);
    if (bVar8) {
      puVar5 = puVar4 + 5;
    }
    *puVar3 = 0;
    puVar3 = (undefined1 *)((long)&uStack_a0 + 7);
    if (bVar8) {
      puVar3 = puVar4 + 6;
    }
    *puVar5 = 0;
    puVar2 = &uStack_98;
    if (bVar8) {
      puVar2 = (undefined8 *)(puVar4 + 7);
    }
    *puVar3 = 0;
    puVar5 = (undefined1 *)((long)&uStack_98 + 1);
    if (bVar8) {
      puVar5 = puVar4 + 8;
    }
    *(undefined1 *)puVar2 = 0;
    puVar3 = (undefined1 *)((long)&uStack_98 + 2);
    if (bVar8) {
      puVar3 = puVar4 + 9;
    }
    *puVar5 = 0;
    puVar5 = (undefined1 *)((long)&uStack_98 + 3);
    if (bVar8) {
      puVar5 = puVar4 + 10;
    }
    *puVar3 = (char)((uint)uVar9 >> 0x18);
    puVar3 = (undefined1 *)((long)&uStack_98 + 4);
    if (bVar8) {
      puVar3 = puVar4 + 0xb;
    }
    *puVar5 = (char)((uint)uVar9 >> 0x10);
    puVar5 = (undefined1 *)((long)&uStack_98 + 5);
    if (bVar8) {
      puVar5 = puVar4 + 0xc;
    }
    *puVar3 = (char)((uint)uVar9 >> 8);
    puVar3 = (undefined1 *)((long)&uStack_98 + 6);
    if (bVar8) {
      puVar3 = puVar4 + 0xd;
    }
    *puVar5 = (char)uVar9;
    puVar5 = (undefined1 *)((long)&uStack_98 + 7);
    if (bVar8) {
      puVar5 = puVar4 + 0xe;
    }
    *puVar3 = (char)((ulong)pcVar16 >> 0x18);
    puVar2 = &uStack_90;
    if (bVar8) {
      puVar2 = (undefined8 *)(puVar4 + 0xf);
    }
    *puVar5 = (char)((ulong)pcVar16 >> 0x10);
    puVar5 = (undefined1 *)((long)&uStack_90 + 1);
    if (bVar8) {
      puVar5 = puVar4 + 0x10;
    }
    *(char *)puVar2 = (char)((ulong)pcVar16 >> 8);
    puVar3 = (undefined1 *)((long)&uStack_90 + 2);
    if (bVar8) {
      puVar3 = puVar4 + 0x11;
    }
    *puVar5 = (char)pcVar16;
    puVar4 = (undefined1 *)((long)&uStack_a0 + 1);
    if (lStack_a8 != 0) {
      puVar4 = uStack_98;
    }
    uVar6 = uStack_a0 & 0xff;
    if (lStack_a8 != 0) {
      uVar6 = uStack_a0;
    }
    if (puVar3 == puVar4 + uVar6) {
      uStack_c8 = uStack_a0;
      lStack_d0 = lStack_a8;
      uStack_b8 = uStack_90;
      puStack_c0 = uStack_98;
      func_0x0001005a70c4(param_5,&lStack_d0);
      lStack_e8 = plVar19[1];
      lStack_f0 = *plVar19;
      lStack_d8 = plVar19[3];
      lStack_e0 = plVar19[2];
      func_0x0001005a70c4(param_5);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
        auVar26._8_8_ = plVar18;
        auVar26._0_8_ = param_5;
        return auVar26;
      }
      goto SUB_1004686cc;
    }
  }
  else {
    func_0x00010bdab0bc();
  }
  plVar18 = (long *)pcVar17;
  param_5 = plVar13;
  func_0x00010bdab0f0();
SUB_1004686cc:
  ___stack_chk_fail();
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = (long *)0x2;
  pcVar16 = (char *)plVar18;
  func_0x0001004686b8();
  if ((int)plVar13 != 0) {
    plVar13 = alStack_178;
    func_0x000107c616d0(plVar13,0x40,plVar11,&lStack_f0);
    if ((int)(uint)plVar13 < 0) {
      plVar11 = (long *)0x0;
      plVar13 = (long *)0x0;
    }
    else if ((uint)plVar13 < 0x40) {
      plVar13 = (long *)0x0;
      plVar11 = alStack_178;
    }
    else {
      plVar13 = (long *)(((ulong)plVar13 & 0xffffffff) + 1);
      func_0x000100460200();
      func_0x000107c616d0();
      plVar11 = plVar13;
    }
    FUN_104a6e9e0(param_5,plVar18,2,plVar11);
    func_0x000100460314();
    pcVar16 = (char *)plVar18;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_138) {
    func_0x000107c60e78();
    if ((ulong)pcVar16 >> 0x3d != 0) {
      FUN_104a7757c();
      lVar10 = plVar13[1];
      lVar20 = plVar13[2];
      while (lVar20 != lVar10) {
        plVar13[2] = lVar20 + -8;
        plVar11 = *(long **)(lVar20 + -8);
        *(undefined8 *)(lVar20 + -8) = 0;
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 8))();
        }
        lVar20 = plVar13[2];
      }
      if (*plVar13 != 0) {
        func_0x000107c60e14();
      }
      auVar24._8_8_ = pcVar16;
      auVar24._0_8_ = plVar13;
      return auVar24;
    }
    lVar10 = (long)pcVar16 << 3;
    func_0x000107c60e20(lVar10);
    auVar23._8_8_ = pcVar16;
    auVar23._0_8_ = lVar10;
    return auVar23;
  }
  auVar22._8_8_ = pcVar16;
  auVar22._0_8_ = plVar13;
  return auVar22;
}



/* Entry: 104a9cf40; end: 104a9cf47;  */

undefined1  [16]
FUN_104a9cf40(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long alStack_88 [8];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = (long *)0x2;
  uVar4 = param_2;
  func_0x0001004686b8();
  if ((int)plVar1 != 0) {
    plVar1 = alStack_88;
    func_0x000107c616d0(plVar1,0x40,param_4,&stack0x00000000);
    if ((int)(uint)plVar1 < 0) {
      plVar3 = (long *)0x0;
      plVar1 = (long *)0x0;
    }
    else if ((uint)plVar1 < 0x40) {
      plVar1 = (long *)0x0;
      plVar3 = alStack_88;
    }
    else {
      plVar1 = (long *)(((ulong)plVar1 & 0xffffffff) + 1);
      func_0x000100460200();
      func_0x000107c616d0();
      plVar3 = plVar1;
    }
    FUN_104a6e9e0(param_1,param_2,2,plVar3);
    func_0x000100460314();
    uVar4 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar6._8_8_ = uVar4;
    auVar6._0_8_ = plVar1;
    return auVar6;
  }
  func_0x000107c60e78();
  if (uVar4 >> 0x3d == 0) {
    lVar2 = uVar4 << 3;
    func_0x000107c60e20(lVar2);
    auVar7._8_8_ = uVar4;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
  FUN_104a7757c();
  lVar2 = plVar1[1];
  lVar5 = plVar1[2];
  while (lVar5 != lVar2) {
    plVar1[2] = lVar5 + -8;
    plVar3 = *(long **)(lVar5 + -8);
    *(undefined8 *)(lVar5 + -8) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    lVar5 = plVar1[2];
  }
  if (*plVar1 != 0) {
    func_0x000107c60e14();
  }
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = plVar1;
  return auVar8;
}



/* Entry: 104a9cf48; end: 104a9cfe7;  */

void FUN_104a9cf48(long *param_1,int param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  
  func_0x0001005a7e6c(0x11);
  puVar1 = (undefined4 *)((long)param_1 + 9);
  if (*param_1 != 0) {
    puVar1 = (undefined4 *)param_1[2];
  }
  *puVar1 = 0x6080000;
  *(bool *)(puVar1 + 1) = param_2 != 0;
  *(undefined4 *)((long)puVar1 + 5) = 0;
  *(char *)((long)puVar1 + 9) = (char)((ulong)param_3 >> 0x38);
  *(char *)((long)puVar1 + 10) = (char)((ulong)param_3 >> 0x30);
  *(char *)((long)puVar1 + 0xb) = (char)((ulong)param_3 >> 0x28);
  *(char *)(puVar1 + 3) = (char)((ulong)param_3 >> 0x20);
  *(char *)((long)puVar1 + 0xd) = (char)((ulong)param_3 >> 0x18);
  *(char *)((long)puVar1 + 0xe) = (char)((ulong)param_3 >> 0x10);
  *(char *)((long)puVar1 + 0xf) = (char)((ulong)param_3 >> 8);
  *(char *)(puVar1 + 4) = (char)param_3;
  return;
}



/* Entry: 104a9cfe8; end: 104a9d11f;  */

void FUN_104a9cfe8(undefined8 *param_1,byte *****param_2,byte *****param_3,long *param_4,
                  long *param_5,int param_6)

{
  undefined4 *puVar1;
  byte *****pppppbVar2;
  byte ****ppppbVar3;
  uint uVar4;
  undefined8 *extraout_x8;
  byte ****ppppbVar5;
  long *extraout_x8_00;
  byte *pbVar6;
  byte ****ppppbVar7;
  byte ****ppppbVar8;
  ulong uVar9;
  byte ****unaff_x20;
  byte **ppbStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_61;
  byte ****ppppbStack_60;
  long *plStack_58;
  byte bStack_49;
  byte ***pppbStack_48;
  undefined *puStack_40;
  ulong uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (((int)param_3 == 8) && ((uint)param_4 < 2)) {
    *(byte *)param_2 = 0;
    *(byte *)((long)param_2 + 1) = (byte)param_4;
    param_2[1] = (byte ****)0x0;
    *param_1 = 0;
  }
  else {
    pppbStack_48 = (byte ***)((ulong)param_3 & 0xffffffff);
    puStack_40 = &UNK_10ae73cc0;
    uStack_38 = (ulong)param_4 & 0xffffffff;
    puStack_30 = &UNK_10ae73c30;
    func_0x0001004d4da0(&ppppbStack_60,"invalid ping: length=%d, flags=%02x",0x23,&pppbStack_48,2);
    param_4 = plStack_58;
    param_3 = (byte *****)ppppbStack_60;
    if (-1 < (char)bStack_49) {
      param_4 = (long *)(ulong)bStack_49;
      param_3 = &ppppbStack_60;
    }
    uStack_78 = 0;
    uStack_70 = 0;
    ppbStack_80 = (byte **)0x0;
    param_5 = (long *)&uStack_61;
    param_6 = (int)&ppbStack_80;
    FUN_104ab5920(param_1,2);
    param_2 = (byte *****)&pppbStack_48;
    pppbStack_48 = &ppbStack_80;
    func_0x000100482b64();
    unaff_x20 = (byte ****)&ppbStack_80;
    if ((char)bStack_49 < '\0') {
      param_2 = (byte *****)ppppbStack_60;
      __ZdlPv();
      unaff_x20 = (byte ****)&ppbStack_80;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  pppbStack_48 = (byte ***)unaff_x20;
  func_0x000100482b64(&pppbStack_48);
  if ((char)bStack_49 < '\0') {
    __ZdlPv(ppppbStack_60);
  }
  __Unwind_Resume();
  pbVar6 = (byte *)((long)param_5 + 9);
  if (*param_5 != 0) {
    pbVar6 = (byte *)param_5[2];
  }
  uVar9 = param_5[1] & 0xff;
  if (*param_5 != 0) {
    uVar9 = param_5[1];
  }
  uVar4 = (uint)*(byte *)param_2;
  if (*(byte *)param_2 != 8 && uVar9 != 0) {
    ppppbVar8 = param_2[1];
    do {
      uVar9 = uVar9 - 1;
      ppppbVar8 = (byte ****)
                  ((ulong)*pbVar6 << ((ulong)((uVar4 & 0xff) * -8 + 0x38) & 0x3f) | (ulong)ppppbVar8
                  );
      param_2[1] = ppppbVar8;
      uVar4 = uVar4 + 1;
      *(byte *)param_2 = (byte)uVar4;
      if ((uVar4 & 0xff) == 8) break;
      pbVar6 = pbVar6 + 1;
    } while (uVar9 != 0);
  }
  if ((uVar4 & 0xff) != 8) goto LAB_104a9d320;
  if (param_6 == 0) {
    func_0x00010bdab124();
    func_0x0001005a7e6c(0xd);
    if (param_4 != (long *)0x0) {
      *param_4 = *param_4 + 0xd;
    }
    puVar1 = (undefined4 *)((long)extraout_x8_00 + 9);
    if (*extraout_x8_00 != 0) {
      puVar1 = (undefined4 *)extraout_x8_00[2];
    }
    *puVar1 = 0x3040000;
    *(undefined1 *)(puVar1 + 1) = 0;
    *(char *)((long)puVar1 + 5) = (char)((ulong)param_2 >> 0x18);
    *(char *)((long)puVar1 + 6) = (char)((ulong)param_2 >> 0x10);
    *(char *)((long)puVar1 + 7) = (char)((ulong)param_2 >> 8);
    *(char *)(puVar1 + 2) = (char)param_2;
    *(char *)((long)puVar1 + 9) = (char)((ulong)param_3 >> 0x18);
    *(char *)((long)puVar1 + 10) = (char)((ulong)param_3 >> 0x10);
    *(char *)((long)puVar1 + 0xb) = (char)((ulong)param_3 >> 8);
    *(char *)(puVar1 + 3) = (char)param_3;
    return;
  }
  if (*(byte *)((long)param_2 + 1) != 0) {
    func_0x000104a97ce0(param_3,param_2[1]);
    goto LAB_104a9d320;
  }
  if (*(byte *)(param_3 + 0xc5) == 0) {
    pppppbVar2 = param_2;
    func_0x000100460dc4();
    ppppbVar3 = *pppppbVar2;
    func_0x0001004671a4();
    ppppbVar5 = param_3[0x119];
    ppppbVar8 = (byte ****)0x7fffffffffffffff;
    if ((((ppppbVar5 != (byte ****)0x7fffffffffffffff) &&
         (ppppbVar7 = param_3[0x106], ppppbVar7 != (byte ****)0x7fffffffffffffff)) &&
        (ppppbVar8 = (byte ****)0x8000000000000000, ppppbVar5 != (byte ****)0x8000000000000000)) &&
       (ppppbVar7 != (byte ****)0x8000000000000000)) {
      if ((long)ppppbVar5 < 1) {
        if (-0x8000000000000000 - (long)ppppbVar5 <= (long)ppppbVar7) goto LAB_104a9d244;
      }
      else if ((long)((ulong)ppppbVar5 ^ 0x7fffffffffffffff) < (long)ppppbVar7) {
        ppppbVar8 = (byte ****)0x7fffffffffffffff;
      }
      else {
LAB_104a9d244:
        ppppbVar8 = (byte ****)((long)ppppbVar7 + (long)ppppbVar5);
      }
    }
    if (*(byte *)(param_3 + 0x19b) == 0) {
      pppppbVar2 = param_3 + 0x1f;
      func_0x0001008ded94();
      if (pppppbVar2 != (byte *****)0x0) goto LAB_104a9d294;
      ppppbVar8 = param_3[0x119];
      if (ppppbVar8 != (byte ****)0x8000000000000000) {
        ppppbVar5 = (byte ****)0x7fffffffffffffff;
        if ((long)ppppbVar8 < 0x7fffffffff922300) {
          ppppbVar5 = ppppbVar8 + 900000;
        }
        if (ppppbVar8 != (byte ****)0x7fffffffffffffff) {
          ppppbVar8 = ppppbVar5;
        }
        goto LAB_104a9d294;
      }
    }
    else {
LAB_104a9d294:
      if ((long)ppppbVar3 < (long)ppppbVar8) {
        FUN_104a97d64(param_3);
      }
    }
    param_3[0x119] = ppppbVar3;
  }
  if (cRam00000001136a1e28 == '\0') {
    ppppbVar8 = param_3[0x116];
    if (ppppbVar8 == param_3[0x117]) {
      ppppbVar8 = (byte ****)((ulong)((long)ppppbVar8 * 3) >> 1);
      if (ppppbVar8 < (byte ****)0x4) {
        ppppbVar8 = (byte ****)0x3;
      }
      param_3[0x117] = ppppbVar8;
      ppppbVar3 = param_3[0x118];
      func_0x0001004689e4(ppppbVar3,(long)ppppbVar8 << 3);
      param_3[0x118] = ppppbVar3;
      ppppbVar8 = param_3[0x116];
    }
    else {
      ppppbVar3 = param_3[0x118];
    }
    *(int *)((long)param_3 + 0xcf4) = *(int *)((long)param_3 + 0xcf4) + 1;
    ppppbVar5 = param_2[1];
    param_3[0x116] = (byte ****)((long)ppppbVar8 + 1);
    ppppbVar3[(long)ppppbVar8] = (byte ***)ppppbVar5;
    func_0x0001007474b0(param_3,0x14);
  }
LAB_104a9d320:
  *extraout_x8 = 0;
  return;
}



/* Entry: 104a9d120; end: 104a9d33b;  */

void FUN_104a9d120(undefined8 *param_1,byte *param_2,long param_3,long *param_4,long *param_5,
                  int param_6)

{
  undefined4 *puVar1;
  byte *pbVar2;
  long lVar3;
  uint uVar4;
  long *extraout_x8;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  pbVar2 = (byte *)((long)param_5 + 9);
  if (*param_5 != 0) {
    pbVar2 = (byte *)param_5[2];
  }
  uVar8 = param_5[1] & 0xff;
  if (*param_5 != 0) {
    uVar8 = param_5[1];
  }
  uVar4 = (uint)*param_2;
  if (*param_2 != 8 && uVar8 != 0) {
    uVar7 = *(ulong *)(param_2 + 8);
    do {
      uVar8 = uVar8 - 1;
      uVar7 = (ulong)*pbVar2 << ((ulong)((uVar4 & 0xff) * -8 + 0x38) & 0x3f) | uVar7;
      *(ulong *)(param_2 + 8) = uVar7;
      uVar4 = uVar4 + 1;
      *param_2 = (byte)uVar4;
      if ((uVar4 & 0xff) == 8) break;
      pbVar2 = pbVar2 + 1;
    } while (uVar8 != 0);
  }
  if ((uVar4 & 0xff) != 8) goto LAB_104a9d320;
  if (param_6 == 0) {
    func_0x00010bdab124();
    func_0x0001005a7e6c(0xd);
    if (param_4 != (long *)0x0) {
      *param_4 = *param_4 + 0xd;
    }
    puVar1 = (undefined4 *)((long)extraout_x8 + 9);
    if (*extraout_x8 != 0) {
      puVar1 = (undefined4 *)extraout_x8[2];
    }
    *puVar1 = 0x3040000;
    *(undefined1 *)(puVar1 + 1) = 0;
    *(char *)((long)puVar1 + 5) = (char)((ulong)param_2 >> 0x18);
    *(char *)((long)puVar1 + 6) = (char)((ulong)param_2 >> 0x10);
    *(char *)((long)puVar1 + 7) = (char)((ulong)param_2 >> 8);
    *(char *)(puVar1 + 2) = (char)param_2;
    *(char *)((long)puVar1 + 9) = (char)((ulong)param_3 >> 0x18);
    *(char *)((long)puVar1 + 10) = (char)((ulong)param_3 >> 0x10);
    *(char *)((long)puVar1 + 0xb) = (char)((ulong)param_3 >> 8);
    *(char *)(puVar1 + 3) = (char)param_3;
    return;
  }
  if (param_2[1] != 0) {
    func_0x000104a97ce0(param_3,*(undefined8 *)(param_2 + 8));
    goto LAB_104a9d320;
  }
  if (*(char *)(param_3 + 0x628) == '\0') {
    pbVar2 = param_2;
    func_0x000100460dc4();
    lVar3 = *(long *)pbVar2;
    func_0x0001004671a4();
    uVar8 = *(ulong *)(param_3 + 0x8c8);
    lVar9 = 0x7fffffffffffffff;
    if ((((uVar8 != 0x7fffffffffffffff) &&
         (lVar5 = *(long *)(param_3 + 0x830), lVar5 != 0x7fffffffffffffff)) &&
        (lVar9 = -0x8000000000000000, uVar8 != 0x8000000000000000)) &&
       (lVar5 != -0x8000000000000000)) {
      if ((long)uVar8 < 1) {
        if ((long)(-0x8000000000000000 - uVar8) <= lVar5) goto LAB_104a9d244;
      }
      else if ((long)(uVar8 ^ 0x7fffffffffffffff) < lVar5) {
        lVar9 = 0x7fffffffffffffff;
      }
      else {
LAB_104a9d244:
        lVar9 = lVar5 + uVar8;
      }
    }
    if (*(char *)(param_3 + 0xcd8) == '\0') {
      lVar5 = param_3 + 0xf8;
      func_0x0001008ded94();
      if (lVar5 != 0) goto LAB_104a9d294;
      lVar9 = *(long *)(param_3 + 0x8c8);
      if (lVar9 != -0x8000000000000000) {
        lVar5 = 0x7fffffffffffffff;
        if (lVar9 < 0x7fffffffff922300) {
          lVar5 = lVar9 + 7200000;
        }
        if (lVar9 != 0x7fffffffffffffff) {
          lVar9 = lVar5;
        }
        goto LAB_104a9d294;
      }
    }
    else {
LAB_104a9d294:
      if (lVar3 < lVar9) {
        FUN_104a97d64(param_3);
      }
    }
    *(long *)(param_3 + 0x8c8) = lVar3;
  }
  if (cRam00000001136a1e28 == '\0') {
    lVar9 = *(long *)(param_3 + 0x8b0);
    if (lVar9 == *(long *)(param_3 + 0x8b8)) {
      uVar8 = (ulong)(lVar9 * 3) >> 1;
      if (uVar8 < 4) {
        uVar8 = 3;
      }
      *(ulong *)(param_3 + 0x8b8) = uVar8;
      lVar3 = *(long *)(param_3 + 0x8c0);
      func_0x0001004689e4(lVar3,uVar8 << 3);
      *(long *)(param_3 + 0x8c0) = lVar3;
      lVar9 = *(long *)(param_3 + 0x8b0);
    }
    else {
      lVar3 = *(long *)(param_3 + 0x8c0);
    }
    *(int *)(param_3 + 0xcf4) = *(int *)(param_3 + 0xcf4) + 1;
    uVar6 = *(undefined8 *)(param_2 + 8);
    *(long *)(param_3 + 0x8b0) = lVar9 + 1;
    *(undefined8 *)(lVar3 + lVar9 * 8) = uVar6;
    func_0x0001007474b0(param_3,0x14);
  }
LAB_104a9d320:
  *param_1 = 0;
  return;
}



/* Entry: 104a9d33c; end: 104a9d3df;  */

void FUN_104a9d33c(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined4 *puVar1;
  
  func_0x0001005a7e6c(0xd);
  if (param_4 != (long *)0x0) {
    *param_4 = *param_4 + 0xd;
  }
  puVar1 = (undefined4 *)((long)param_1 + 9);
  if (*param_1 != 0) {
    puVar1 = (undefined4 *)param_1[2];
  }
  *puVar1 = 0x3040000;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(char *)((long)puVar1 + 5) = (char)((ulong)param_2 >> 0x18);
  *(char *)((long)puVar1 + 6) = (char)((ulong)param_2 >> 0x10);
  *(char *)((long)puVar1 + 7) = (char)((ulong)param_2 >> 8);
  *(char *)(puVar1 + 2) = (char)param_2;
  *(char *)((long)puVar1 + 9) = (char)((ulong)param_3 >> 0x18);
  *(char *)((long)puVar1 + 10) = (char)((ulong)param_3 >> 0x10);
  *(char *)((long)puVar1 + 0xb) = (char)((ulong)param_3 >> 8);
  *(char *)(puVar1 + 3) = (char)param_3;
  return;
}



/* Entry: 104a9d3e0; end: 104a9d45b;  */

void FUN_104a9d3e0(long param_1,undefined8 param_2,undefined8 param_3,uint *******param_4,
                  int param_5)

{
  uint ******ppppppuVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined8 *******pppppppuVar5;
  code *pcVar6;
  uint *******pppppppuVar7;
  ulong uVar8;
  uint *******pppppppuVar9;
  uint ******ppppppuVar10;
  uint *****pppppuVar11;
  uint ****ppppuVar12;
  uint uVar13;
  uint *******pppppppuVar14;
  uint *******pppppppuVar15;
  byte *pbVar16;
  uint *******pppppppuVar17;
  byte bVar18;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  int *piVar19;
  uint ******ppppppuVar20;
  uint ******ppppppuVar22;
  uint ******unaff_x20;
  ulong uVar23;
  undefined8 uStack_268;
  undefined1 uStack_260;
  long lStack_248;
  uint ******ppppppuStack_240;
  uint ******ppppppuStack_238;
  undefined1 ****ppppuStack_230;
  code *pcStack_228;
  ulong uStack_218;
  undefined *puStack_210;
  uint *****pppppuStack_208;
  undefined *puStack_200;
  long lStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  uint ******ppppppuStack_1d8;
  undefined8 ******ppppppuStack_1d0;
  ulong uStack_1c8;
  byte bStack_1b9;
  char acStack_1b8 [31];
  undefined1 uStack_199;
  ulong uStack_198;
  ulong uStack_190;
  uint ******ppppppuStack_188;
  uint ******ppppppuStack_180;
  undefined1 *puStack_178;
  long lStack_170;
  undefined1 auStack_168 [32];
  char *pcStack_148;
  undefined8 uStack_140;
  long lStack_118;
  undefined1 **ppuStack_e0;
  code *pcStack_d8;
  uint ****ppppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b1;
  uint ******ppppppuStack_b0;
  uint ******ppppppuStack_a8;
  byte bStack_99;
  uint *****pppppuStack_98;
  undefined *puStack_90;
  ulong uStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined1 *puStack_60;
  code *pcStack_58;
  uint *****apppppuStack_48 [4];
  long lStack_28;
  uint ******ppppppuVar21;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(int *)(param_1 + 0xcf4) = *(int *)(param_1 + 0xcf4) + 1;
  pppppppuVar7 = (uint *******)(param_1 + 0x630);
  pppppppuVar17 = param_4;
  FUN_104a9d33c(apppppuStack_48,param_2,param_3);
  pppppppuVar14 = (uint *******)apppppuStack_48;
  func_0x0001005a70c4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  pcStack_58 = FUN_104a9d45c;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((int)pppppppuVar14 == 4) {
    *(char *)pppppppuVar7 = '\0';
    *extraout_x8 = 0;
  }
  else {
    pppppuStack_98 = (uint *****)((ulong)pppppppuVar14 & 0xffffffff);
    puStack_90 = &UNK_10ae73cc0;
    uStack_88 = (ulong)param_4 & 0xffffffff;
    puStack_80 = &UNK_10ae73c30;
    func_0x0001004d4da0(&ppppppuStack_b0,"invalid rst_stream: length=%d, flags=%02x",0x29,
                        &pppppuStack_98,2);
    param_4 = (uint *******)ppppppuStack_a8;
    pppppppuVar14 = (uint *******)ppppppuStack_b0;
    if (-1 < (char)bStack_99) {
      param_4 = (uint *******)(ulong)bStack_99;
      pppppppuVar14 = &ppppppuStack_b0;
    }
    uStack_c8 = 0;
    uStack_c0 = 0;
    ppppuStack_d0 = (uint ****)0x0;
    pppppppuVar17 = (uint *******)&uStack_b1;
    param_5 = (int)&ppppuStack_d0;
    FUN_104ab5920(extraout_x8,2);
    pppppppuVar7 = (uint *******)&pppppuStack_98;
    pppppuStack_98 = &ppppuStack_d0;
    func_0x000100482b64();
    unaff_x20 = (uint ******)&ppppuStack_d0;
    if ((char)bStack_99 < '\0') {
      pppppppuVar7 = (uint *******)ppppppuStack_b0;
      __ZdlPv();
      unaff_x20 = (uint ******)&ppppuStack_d0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  pppppuStack_98 = (uint *****)unaff_x20;
  func_0x000100482b64(&pppppuStack_98);
  if ((char)bStack_99 < '\0') {
    __ZdlPv(ppppppuStack_b0);
  }
  __Unwind_Resume();
  pcStack_d8 = FUN_104a9d584;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppuVar10 = (uint ******)((long)pppppppuVar17 + 9);
  if (*pppppppuVar17 != (uint ******)0x0) {
    ppppppuVar10 = pppppppuVar17[2];
  }
  ppppppuVar1 = (uint ******)((ulong)pppppppuVar17[1] & 0xff);
  if (*pppppppuVar17 != (uint ******)0x0) {
    ppppppuVar1 = pppppppuVar17[1];
  }
  bVar18 = *(byte *)pppppppuVar7;
  ppppppuVar20 = ppppppuVar10;
  ppppppuVar21 = ppppppuVar10;
  ppppppuVar22 = ppppppuVar1;
  if (bVar18 != 4 && ppppppuVar1 != (uint ******)0x0) {
    do {
      ppppppuVar22 = (uint ******)((long)ppppppuVar22 - 1);
      ppppppuVar20 = (uint ******)((long)ppppppuVar21 + 1);
      *(char *)((long)pppppppuVar7 + (ulong)bVar18 + 1) = *(char *)ppppppuVar21;
      bVar18 = bVar18 + 1;
      *(byte *)pppppppuVar7 = bVar18;
      ppppppuVar21 = ppppppuVar20;
    } while (bVar18 != 4 && ppppppuVar22 != (uint ******)0x0);
  }
  param_4[0x27] =
       (uint ******)
       ((long)ppppppuVar10 + (long)param_4[0x27] + ((long)ppppppuVar1 - (long)ppppppuVar20));
  pppppppuVar17 = param_4;
  ppuStack_e0 = &puStack_60;
  if (bVar18 != 4) goto LAB_104a9d798;
  if (param_5 == 0) {
    func_0x00010bdab15c();
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x104a9d7e8);
    (*pcVar6)();
  }
  uVar13 = (*(uint *)((long)pppppppuVar7 + 1) & 0xff00ff00) >> 8 |
           (*(uint *)((long)pppppppuVar7 + 1) & 0xff00ff) << 8;
  uVar13 = uVar13 >> 0x10 | uVar13 << 0x10;
  uVar23 = (ulong)uVar13;
  ppppppuStack_180 = (uint ******)0x0;
  if ((uVar13 == 0) &&
     ((*(uint *)(param_4 + 0x73) != 0 ||
      ((param_4[0xb2] != (uint ******)0x0 && (param_4[0xb2][1] != (uint *****)0x0)))))) {
    ppppppuStack_1d8 = (uint ******)0x0;
LAB_104a9d764:
    bVar3 = true;
  }
  else {
    acStack_1b8[8] = '\0';
    acStack_1b8[9] = '\0';
    acStack_1b8[10] = '\0';
    acStack_1b8[0xb] = '\0';
    acStack_1b8[0xc] = '\0';
    acStack_1b8[0xd] = '\0';
    acStack_1b8[0xe] = '\0';
    acStack_1b8[0xf] = '\0';
    acStack_1b8[0x10] = '\0';
    acStack_1b8[0x11] = '\0';
    acStack_1b8[0x12] = '\0';
    acStack_1b8[0x13] = '\0';
    acStack_1b8[0x14] = '\0';
    acStack_1b8[0x15] = '\0';
    acStack_1b8[0x16] = '\0';
    acStack_1b8[0x17] = '\0';
    acStack_1b8[0] = '\0';
    acStack_1b8[1] = '\0';
    acStack_1b8[2] = '\0';
    acStack_1b8[3] = '\0';
    acStack_1b8[4] = '\0';
    acStack_1b8[5] = '\0';
    acStack_1b8[6] = '\0';
    acStack_1b8[7] = '\0';
    FUN_104ab5920(&uStack_198,2,"RST_STREAM",10,&uStack_199,acStack_1b8);
    pcStack_148 = "Received RST_STREAM with error code ";
    uStack_140 = 0x24;
    uVar8 = uVar23;
    func_0x0001004d52e8(uVar23,auStack_168);
    lStack_170 = uVar8 - (long)auStack_168;
    puStack_178 = auStack_168;
    func_0x00010047c83c(&ppppppuStack_1d0,&pcStack_148,&puStack_178);
    pppppppuVar5 = (undefined8 *******)ppppppuStack_1d0;
    if (-1 < (char)bStack_1b9) {
      uStack_1c8 = (ulong)bStack_1b9;
      pppppppuVar5 = &ppppppuStack_1d0;
    }
    func_0x00010084caf8(&uStack_190,&uStack_198,5,pppppppuVar5,uStack_1c8);
    FUN_104abaa50(&ppppppuStack_188,&uStack_190,7,uVar23);
    ppppppuVar10 = ppppppuStack_188;
    if ((uint *******)ppppppuStack_188 != (uint *******)0x0) {
      ppppppuStack_188 = (uint ******)0x36;
      ppppppuStack_180 = ppppppuVar10;
    }
    if ((uStack_190 & 1) != 0) {
      func_0x00010084dad0();
    }
    if ((char)bStack_1b9 < '\0') {
      __ZdlPv(ppppppuStack_1d0);
    }
    if ((uStack_198 & 1) != 0) {
      func_0x00010084dad0();
    }
    pcStack_148 = acStack_1b8;
    func_0x000100482b64(&pcStack_148);
    ppppppuStack_1d8 = ppppppuVar10;
    if (((ulong)ppppppuVar10 & 1) == 0) goto LAB_104a9d764;
    piVar19 = (int *)((long)ppppppuVar10 + -1);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar19,0x10);
      if (bVar3) {
        *piVar19 = *piVar19 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    bVar3 = false;
  }
  pppppppuVar9 = (uint *******)ppppppuStack_1d8;
  pppppppuVar17 = (uint *******)0x1;
  pppppppuVar15 = param_4;
  FUN_104a997b0(pppppppuVar14,param_4,1,1,&ppppppuStack_1d8);
  pppppppuVar7 = (uint *******)ppppppuStack_1d8;
  pppppppuVar14 = pppppppuVar15;
  if (((ulong)ppppppuStack_1d8 & 1) != 0) {
    func_0x00010084dad0();
    pppppppuVar14 = pppppppuVar15;
  }
  if (!bVar3) {
    func_0x00010084dad0();
    pppppppuVar7 = pppppppuVar9;
  }
LAB_104a9d798:
  *extraout_x8_00 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pppppppuVar14 != 0) {
    FUN_104bd46a0();
    func_0x0001004bdf74(&uStack_190);
    if ((char)bStack_1b9 < '\0') {
      __ZdlPv(ppppppuStack_1d0);
    }
    func_0x0001004bdf74(&uStack_198);
    pcStack_148 = acStack_1b8;
    func_0x000100482b64(&pcStack_148);
    func_0x0001004bdf74(&ppppppuStack_180);
  }
  pppppppuVar9 = pppppppuVar7;
  __Unwind_Resume();
  pcStack_1e8 = FUN_104a9d87c;
  lStack_1f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppuVar10 = *pppppppuVar9;
  uStack_218 = (ulong)*(uint *)pppppppuVar14;
  puStack_210 = &UNK_10ae73cc0;
  pppppuStack_208 = (uint *****)*pppppppuVar17;
  puStack_200 = &UNK_1005616c4;
  pppuStack_1f0 = &ppuStack_e0;
  func_0x0001004d4da0(ppppppuVar10,pppppppuVar9[1],&uStack_218,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_228 = FUN_104a9d8f8;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar11 = ppppppuVar10[2];
  uStack_268 = 0;
  uStack_260 = 9;
  ppppppuStack_240 = (uint ******)param_4;
  ppppppuStack_238 = (uint ******)pppppppuVar7;
  ppppuStack_230 = &pppuStack_1f0;
  func_0x0001005a7ec4(pppppuVar11,&uStack_268);
  uVar13 = (uint)ppppppuVar10[2][4];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  uVar4 = uVar13 - 0x7f;
  uVar23 = (ulong)uVar4;
  if (uVar13 < 0x7f) {
    uVar23 = 1;
  }
  else {
    func_0x0001008e186c();
  }
  func_0x0001008e016c(pppppuVar11,uVar23 & 0xffffffff);
  ppppuVar12 = pppppuVar11[2];
  pppppuVar11[3][2] = (uint ***)((long)pppppuVar11[3][2] + (uVar23 & 0xffffffff));
  func_0x0001008e01c0(ppppuVar12,uVar23 & 0xffffffff);
  if ((int)uVar23 == 1) {
    *(byte *)ppppuVar12 = (byte)uVar13 | 0x80;
    return;
  }
  pbVar16 = (byte *)((long)ppppuVar12 + 1);
  *(byte *)ppppuVar12 = 0xff;
  uVar13 = (int)uVar23 - 2;
  switch((ulong)uVar13) {
  case 4:
    *(byte *)((long)ppppuVar12 + 5) = (byte)(uVar4 >> 0x1c) | 0x80;
  case 3:
    *(byte *)((long)ppppuVar12 + 4) = (byte)(uVar4 >> 0x15) | 0x80;
  case 2:
    *(byte *)((long)ppppuVar12 + 3) = (byte)(uVar4 >> 0xe) | 0x80;
  case 1:
    *(byte *)((long)ppppuVar12 + 2) = (byte)(uVar4 >> 7) | 0x80;
  case 0:
    *pbVar16 = (byte)uVar4 | 0x80;
  default:
    pbVar16[uVar13] = pbVar16[uVar13] & 0x7f;
    return;
  }
}



/* Entry: 104a9d45c; end: 104a9d583;  */

void FUN_104a9d45c(undefined8 *param_1,uint *******param_2,uint *******param_3,uint *******param_4,
                  long *param_5,int param_6)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined8 *******pppppppuVar5;
  code *pcVar6;
  uint *******pppppppuVar7;
  uint ******ppppppuVar8;
  uint *****pppppuVar9;
  uint ****ppppuVar10;
  uint uVar11;
  uint *******pppppppuVar12;
  byte *pbVar13;
  uint *******pppppppuVar14;
  byte bVar15;
  undefined8 *extraout_x8;
  int *piVar16;
  char *pcVar17;
  ulong uVar19;
  uint ******unaff_x20;
  ulong uVar20;
  undefined8 uStack_218;
  undefined1 uStack_210;
  long lStack_1f8;
  uint ******ppppppuStack_1f0;
  uint ******ppppppuStack_1e8;
  undefined1 ***pppuStack_1e0;
  code *pcStack_1d8;
  ulong uStack_1c8;
  undefined *puStack_1c0;
  uint *****pppppuStack_1b8;
  undefined *puStack_1b0;
  long lStack_1a8;
  undefined1 **ppuStack_1a0;
  code *pcStack_198;
  uint ******ppppppuStack_188;
  undefined8 ******ppppppuStack_180;
  ulong uStack_178;
  byte bStack_169;
  char acStack_168 [31];
  undefined1 uStack_149;
  ulong uStack_148;
  ulong uStack_140;
  uint ******ppppppuStack_138;
  uint ******ppppppuStack_130;
  undefined1 *puStack_128;
  long lStack_120;
  undefined1 auStack_118 [32];
  char *pcStack_f8;
  undefined8 uStack_f0;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  uint ****ppppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_61;
  uint ******ppppppuStack_60;
  uint ******ppppppuStack_58;
  byte bStack_49;
  uint *****pppppuStack_48;
  undefined *puStack_40;
  ulong uStack_38;
  undefined *puStack_30;
  long lStack_28;
  char *pcVar18;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((int)param_3 == 4) {
    *(char *)param_2 = '\0';
    *param_1 = 0;
  }
  else {
    pppppuStack_48 = (uint *****)((ulong)param_3 & 0xffffffff);
    puStack_40 = &UNK_10ae73cc0;
    uStack_38 = (ulong)param_4 & 0xffffffff;
    puStack_30 = &UNK_10ae73c30;
    func_0x0001004d4da0(&ppppppuStack_60,"invalid rst_stream: length=%d, flags=%02x",0x29,
                        &pppppuStack_48,2);
    param_4 = (uint *******)ppppppuStack_58;
    param_3 = (uint *******)ppppppuStack_60;
    if (-1 < (char)bStack_49) {
      param_4 = (uint *******)(ulong)bStack_49;
      param_3 = &ppppppuStack_60;
    }
    uStack_78 = 0;
    uStack_70 = 0;
    ppppuStack_80 = (uint ****)0x0;
    param_5 = (long *)&uStack_61;
    param_6 = (int)&ppppuStack_80;
    FUN_104ab5920(param_1,2);
    param_2 = (uint *******)&pppppuStack_48;
    pppppuStack_48 = &ppppuStack_80;
    func_0x000100482b64();
    unaff_x20 = (uint ******)&ppppuStack_80;
    if ((char)bStack_49 < '\0') {
      param_2 = (uint *******)ppppppuStack_60;
      __ZdlPv();
      unaff_x20 = (uint ******)&ppppuStack_80;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  pppppuStack_48 = (uint *****)unaff_x20;
  func_0x000100482b64(&pppppuStack_48);
  if ((char)bStack_49 < '\0') {
    __ZdlPv(ppppppuStack_60);
  }
  __Unwind_Resume();
  pcStack_88 = FUN_104a9d584;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = (char *)((long)param_5 + 9);
  if (*param_5 != 0) {
    pcVar1 = (char *)param_5[2];
  }
  uVar20 = param_5[1] & 0xff;
  if (*param_5 != 0) {
    uVar20 = param_5[1];
  }
  bVar15 = *(byte *)param_2;
  pcVar17 = pcVar1;
  pcVar18 = pcVar1;
  uVar19 = uVar20;
  if (bVar15 != 4 && uVar20 != 0) {
    do {
      uVar19 = uVar19 - 1;
      pcVar17 = pcVar18 + 1;
      *(char *)((long)param_2 + (ulong)bVar15 + 1) = *pcVar18;
      bVar15 = bVar15 + 1;
      *(byte *)param_2 = bVar15;
      pcVar18 = pcVar17;
    } while (bVar15 != 4 && uVar19 != 0);
  }
  param_4[0x27] = (uint ******)(pcVar1 + (long)param_4[0x27] + (uVar20 - (long)pcVar17));
  pppppppuVar14 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  if (bVar15 != 4) goto LAB_104a9d798;
  if (param_6 == 0) {
    func_0x00010bdab15c();
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x104a9d7e8);
    (*pcVar6)();
  }
  uVar11 = (*(uint *)((long)param_2 + 1) & 0xff00ff00) >> 8 |
           (*(uint *)((long)param_2 + 1) & 0xff00ff) << 8;
  uVar11 = uVar11 >> 0x10 | uVar11 << 0x10;
  uVar20 = (ulong)uVar11;
  ppppppuStack_130 = (uint ******)0x0;
  if ((uVar11 == 0) &&
     ((*(uint *)(param_4 + 0x73) != 0 ||
      ((param_4[0xb2] != (uint ******)0x0 && (param_4[0xb2][1] != (uint *****)0x0)))))) {
    ppppppuStack_188 = (uint ******)0x0;
LAB_104a9d764:
    bVar3 = true;
  }
  else {
    acStack_168[8] = '\0';
    acStack_168[9] = '\0';
    acStack_168[10] = '\0';
    acStack_168[0xb] = '\0';
    acStack_168[0xc] = '\0';
    acStack_168[0xd] = '\0';
    acStack_168[0xe] = '\0';
    acStack_168[0xf] = '\0';
    acStack_168[0x10] = '\0';
    acStack_168[0x11] = '\0';
    acStack_168[0x12] = '\0';
    acStack_168[0x13] = '\0';
    acStack_168[0x14] = '\0';
    acStack_168[0x15] = '\0';
    acStack_168[0x16] = '\0';
    acStack_168[0x17] = '\0';
    acStack_168[0] = '\0';
    acStack_168[1] = '\0';
    acStack_168[2] = '\0';
    acStack_168[3] = '\0';
    acStack_168[4] = '\0';
    acStack_168[5] = '\0';
    acStack_168[6] = '\0';
    acStack_168[7] = '\0';
    FUN_104ab5920(&uStack_148,2,"RST_STREAM",10,&uStack_149,acStack_168);
    pcStack_f8 = "Received RST_STREAM with error code ";
    uStack_f0 = 0x24;
    uVar19 = uVar20;
    func_0x0001004d52e8(uVar20,auStack_118);
    lStack_120 = uVar19 - (long)auStack_118;
    puStack_128 = auStack_118;
    func_0x00010047c83c(&ppppppuStack_180,&pcStack_f8,&puStack_128);
    pppppppuVar5 = (undefined8 *******)ppppppuStack_180;
    if (-1 < (char)bStack_169) {
      uStack_178 = (ulong)bStack_169;
      pppppppuVar5 = &ppppppuStack_180;
    }
    func_0x00010084caf8(&uStack_140,&uStack_148,5,pppppppuVar5,uStack_178);
    FUN_104abaa50(&ppppppuStack_138,&uStack_140,7,uVar20);
    ppppppuVar8 = ppppppuStack_138;
    if ((uint *******)ppppppuStack_138 != (uint *******)0x0) {
      ppppppuStack_138 = (uint ******)0x36;
      ppppppuStack_130 = ppppppuVar8;
    }
    if ((uStack_140 & 1) != 0) {
      func_0x00010084dad0();
    }
    if ((char)bStack_169 < '\0') {
      __ZdlPv(ppppppuStack_180);
    }
    if ((uStack_148 & 1) != 0) {
      func_0x00010084dad0();
    }
    pcStack_f8 = acStack_168;
    func_0x000100482b64(&pcStack_f8);
    ppppppuStack_188 = ppppppuVar8;
    if (((ulong)ppppppuVar8 & 1) == 0) goto LAB_104a9d764;
    piVar16 = (int *)((long)ppppppuVar8 + -1);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar3) {
        *piVar16 = *piVar16 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    bVar3 = false;
  }
  pppppppuVar7 = (uint *******)ppppppuStack_188;
  pppppppuVar14 = (uint *******)0x1;
  pppppppuVar12 = param_4;
  FUN_104a997b0(param_3,param_4,1,1,&ppppppuStack_188);
  param_2 = (uint *******)ppppppuStack_188;
  param_3 = pppppppuVar12;
  if (((ulong)ppppppuStack_188 & 1) != 0) {
    func_0x00010084dad0();
    param_3 = pppppppuVar12;
  }
  if (!bVar3) {
    func_0x00010084dad0();
    param_2 = pppppppuVar7;
  }
LAB_104a9d798:
  *extraout_x8 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  if ((int)param_3 != 0) {
    FUN_104bd46a0();
    func_0x0001004bdf74(&uStack_140);
    if ((char)bStack_169 < '\0') {
      __ZdlPv(ppppppuStack_180);
    }
    func_0x0001004bdf74(&uStack_148);
    pcStack_f8 = acStack_168;
    func_0x000100482b64(&pcStack_f8);
    func_0x0001004bdf74(&ppppppuStack_130);
  }
  pppppppuVar7 = param_2;
  __Unwind_Resume();
  pcStack_198 = FUN_104a9d87c;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppuVar8 = *pppppppuVar7;
  uStack_1c8 = (ulong)*(uint *)param_3;
  puStack_1c0 = &UNK_10ae73cc0;
  pppppuStack_1b8 = (uint *****)*pppppppuVar14;
  puStack_1b0 = &UNK_1005616c4;
  ppuStack_1a0 = &puStack_90;
  func_0x0001004d4da0(ppppppuVar8,pppppppuVar7[1],&uStack_1c8,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1d8 = FUN_104a9d8f8;
  lStack_1f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar9 = ppppppuVar8[2];
  uStack_218 = 0;
  uStack_210 = 9;
  ppppppuStack_1f0 = (uint ******)param_4;
  ppppppuStack_1e8 = (uint ******)param_2;
  pppuStack_1e0 = &ppuStack_1a0;
  func_0x0001005a7ec4(pppppuVar9,&uStack_218);
  uVar11 = (uint)ppppppuVar8[2][4];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f8) {
    return;
  }
  ___stack_chk_fail();
  uVar4 = uVar11 - 0x7f;
  uVar20 = (ulong)uVar4;
  if (uVar11 < 0x7f) {
    uVar20 = 1;
  }
  else {
    func_0x0001008e186c();
  }
  func_0x0001008e016c(pppppuVar9,uVar20 & 0xffffffff);
  ppppuVar10 = pppppuVar9[2];
  pppppuVar9[3][2] = (uint ***)((long)pppppuVar9[3][2] + (uVar20 & 0xffffffff));
  func_0x0001008e01c0(ppppuVar10,uVar20 & 0xffffffff);
  if ((int)uVar20 == 1) {
    *(byte *)ppppuVar10 = (byte)uVar11 | 0x80;
    return;
  }
  pbVar13 = (byte *)((long)ppppuVar10 + 1);
  *(byte *)ppppuVar10 = 0xff;
  uVar11 = (int)uVar20 - 2;
  switch((ulong)uVar11) {
  case 4:
    *(byte *)((long)ppppuVar10 + 5) = (byte)(uVar4 >> 0x1c) | 0x80;
  case 3:
    *(byte *)((long)ppppuVar10 + 4) = (byte)(uVar4 >> 0x15) | 0x80;
  case 2:
    *(byte *)((long)ppppuVar10 + 3) = (byte)(uVar4 >> 0xe) | 0x80;
  case 1:
    *(byte *)((long)ppppuVar10 + 2) = (byte)(uVar4 >> 7) | 0x80;
  case 0:
    *pbVar13 = (byte)uVar4 | 0x80;
  default:
    pbVar13[uVar11] = pbVar13[uVar11] & 0x7f;
    return;
  }
}



/* Entry: 104a9d584; end: 104a9d87b;  */

void FUN_104a9d584(undefined8 *param_1,byte *param_2,uint *param_3,uint *param_4,long *param_5,
                  int param_6)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined8 ****ppppuVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  byte bVar11;
  byte *pbVar12;
  byte *pbVar13;
  ulong uVar15;
  ulong uVar16;
  undefined8 uStack_198;
  undefined1 uStack_190;
  long lStack_178;
  uint *puStack_170;
  byte *pbStack_168;
  undefined1 **ppuStack_160;
  code *pcStack_158;
  ulong uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  byte *pbStack_108;
  undefined8 ***pppuStack_100;
  ulong uStack_f8;
  byte bStack_e9;
  char acStack_e8 [31];
  undefined1 uStack_c9;
  ulong uStack_c8;
  ulong uStack_c0;
  byte *pbStack_b8;
  byte *pbStack_b0;
  undefined1 *puStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [32];
  char *pcStack_78;
  undefined8 uStack_70;
  long lStack_48;
  byte *pbVar14;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pbVar12 = (byte *)((long)param_5 + 9);
  if (*param_5 != 0) {
    pbVar12 = (byte *)param_5[2];
  }
  uVar16 = param_5[1] & 0xff;
  if (*param_5 != 0) {
    uVar16 = param_5[1];
  }
  bVar11 = *param_2;
  pbVar13 = pbVar12;
  pbVar14 = pbVar12;
  uVar15 = uVar16;
  if (bVar11 != 4 && uVar16 != 0) {
    do {
      uVar15 = uVar15 - 1;
      pbVar13 = pbVar14 + 1;
      param_2[(ulong)bVar11 + 1] = *pbVar14;
      bVar11 = bVar11 + 1;
      *param_2 = bVar11;
      pbVar14 = pbVar13;
    } while (bVar11 != 4 && uVar15 != 0);
  }
  *(byte **)(param_4 + 0x4e) = pbVar12 + *(long *)(param_4 + 0x4e) + (uVar16 - (long)pbVar13);
  puVar10 = param_4;
  if (bVar11 != 4) goto LAB_104a9d798;
  if (param_6 == 0) {
    func_0x00010bdab15c();
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x104a9d7e8);
    (*pcVar5)();
  }
  uVar8 = (*(uint *)(param_2 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_2 + 1) & 0xff00ff) << 8;
  uVar8 = uVar8 >> 0x10 | uVar8 << 0x10;
  uVar16 = (ulong)uVar8;
  pbStack_b0 = (byte *)0x0;
  if ((uVar8 == 0) &&
     ((param_4[0xe6] != 0 ||
      ((*(long *)(param_4 + 0x164) != 0 && (*(long *)(*(long *)(param_4 + 0x164) + 8) != 0)))))) {
    pbStack_108 = (byte *)0x0;
LAB_104a9d764:
    bVar2 = true;
  }
  else {
    acStack_e8[8] = '\0';
    acStack_e8[9] = '\0';
    acStack_e8[10] = '\0';
    acStack_e8[0xb] = '\0';
    acStack_e8[0xc] = '\0';
    acStack_e8[0xd] = '\0';
    acStack_e8[0xe] = '\0';
    acStack_e8[0xf] = '\0';
    acStack_e8[0x10] = '\0';
    acStack_e8[0x11] = '\0';
    acStack_e8[0x12] = '\0';
    acStack_e8[0x13] = '\0';
    acStack_e8[0x14] = '\0';
    acStack_e8[0x15] = '\0';
    acStack_e8[0x16] = '\0';
    acStack_e8[0x17] = '\0';
    acStack_e8[0] = '\0';
    acStack_e8[1] = '\0';
    acStack_e8[2] = '\0';
    acStack_e8[3] = '\0';
    acStack_e8[4] = '\0';
    acStack_e8[5] = '\0';
    acStack_e8[6] = '\0';
    acStack_e8[7] = '\0';
    FUN_104ab5920(&uStack_c8,2,"RST_STREAM",10,&uStack_c9,acStack_e8);
    pcStack_78 = "Received RST_STREAM with error code ";
    uStack_70 = 0x24;
    uVar15 = uVar16;
    func_0x0001004d52e8(uVar16,auStack_98);
    lStack_a0 = uVar15 - (long)auStack_98;
    puStack_a8 = auStack_98;
    func_0x00010047c83c(&pppuStack_100,&pcStack_78,&puStack_a8);
    ppppuVar4 = (undefined8 ****)pppuStack_100;
    if (-1 < (char)bStack_e9) {
      uStack_f8 = (ulong)bStack_e9;
      ppppuVar4 = &pppuStack_100;
    }
    func_0x00010084caf8(&uStack_c0,&uStack_c8,5,ppppuVar4,uStack_f8);
    FUN_104abaa50(&pbStack_b8,&uStack_c0,7,uVar16);
    pbVar12 = pbStack_b8;
    if (pbStack_b8 != (byte *)0x0) {
      pbStack_b8 = (byte *)0x36;
      pbStack_b0 = pbVar12;
    }
    if ((uStack_c0 & 1) != 0) {
      func_0x00010084dad0();
    }
    if ((char)bStack_e9 < '\0') {
      __ZdlPv(pppuStack_100);
    }
    if ((uStack_c8 & 1) != 0) {
      func_0x00010084dad0();
    }
    pcStack_78 = acStack_e8;
    func_0x000100482b64(&pcStack_78);
    pbStack_108 = pbVar12;
    if (((ulong)pbVar12 & 1) == 0) goto LAB_104a9d764;
    pbVar12 = pbVar12 + -1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pbVar12,0x10);
      if (bVar2) {
        *(int *)pbVar12 = *(int *)pbVar12 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    bVar2 = false;
  }
  pbVar12 = pbStack_108;
  puVar10 = (uint *)0x1;
  puVar9 = param_4;
  FUN_104a997b0(param_3,param_4,1,1,&pbStack_108);
  param_2 = pbStack_108;
  param_3 = puVar9;
  if (((ulong)pbStack_108 & 1) != 0) {
    func_0x00010084dad0();
    param_3 = puVar9;
  }
  if (!bVar2) {
    func_0x00010084dad0();
    param_2 = pbVar12;
  }
LAB_104a9d798:
  *param_1 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if ((int)param_3 != 0) {
    FUN_104bd46a0();
    func_0x0001004bdf74(&uStack_c0);
    if ((char)bStack_e9 < '\0') {
      __ZdlPv(pppuStack_100);
    }
    func_0x0001004bdf74(&uStack_c8);
    pcStack_78 = acStack_e8;
    func_0x000100482b64(&pcStack_78);
    func_0x0001004bdf74(&pbStack_b0);
  }
  pbVar12 = param_2;
  __Unwind_Resume();
  pcStack_118 = FUN_104a9d87c;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)pbVar12;
  uStack_148 = (ulong)*param_3;
  puStack_140 = &UNK_10ae73cc0;
  uStack_138 = *(undefined8 *)puVar10;
  puStack_130 = &UNK_1005616c4;
  puStack_120 = &stack0xfffffffffffffff0;
  func_0x0001004d4da0(lVar6,*(long *)(pbVar12 + 8),&uStack_148,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return;
  }
  ___stack_chk_fail();
  pcStack_158 = FUN_104a9d8f8;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = *(long *)(lVar6 + 0x10);
  uStack_198 = 0;
  uStack_190 = 9;
  puStack_170 = param_4;
  pbStack_168 = param_2;
  ppuStack_160 = &puStack_120;
  func_0x0001005a7ec4(lVar7,&uStack_198);
  uVar8 = (uint)*(undefined8 *)(*(long *)(lVar6 + 0x10) + 0x20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return;
  }
  ___stack_chk_fail();
  uVar3 = uVar8 - 0x7f;
  uVar16 = (ulong)uVar3;
  if (uVar8 < 0x7f) {
    uVar16 = 1;
  }
  else {
    func_0x0001008e186c();
  }
  func_0x0001008e016c(lVar7,uVar16 & 0xffffffff);
  pbVar12 = *(byte **)(lVar7 + 0x10);
  *(ulong *)(*(long *)(lVar7 + 0x18) + 0x10) =
       *(long *)(*(long *)(lVar7 + 0x18) + 0x10) + (uVar16 & 0xffffffff);
  func_0x0001008e01c0(pbVar12,uVar16 & 0xffffffff);
  if ((int)uVar16 == 1) {
    *pbVar12 = (byte)uVar8 | 0x80;
    return;
  }
  pbVar13 = pbVar12 + 1;
  *pbVar12 = 0xff;
  uVar8 = (int)uVar16 - 2;
  switch((ulong)uVar8) {
  case 4:
    pbVar12[5] = (byte)(uVar3 >> 0x1c) | 0x80;
  case 3:
    pbVar12[4] = (byte)(uVar3 >> 0x15) | 0x80;
  case 2:
    pbVar12[3] = (byte)(uVar3 >> 0xe) | 0x80;
  case 1:
    pbVar12[2] = (byte)(uVar3 >> 7) | 0x80;
  case 0:
    *pbVar13 = (byte)uVar3 | 0x80;
  default:
    pbVar13[uVar8] = pbVar13[uVar8] & 0x7f;
    return;
  }
}



/* Entry: 104a9d87c; end: 104a9d8f7;  */

void FUN_104a9d87c(long *param_1,uint *param_2,undefined8 *param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  ulong uVar7;
  undefined8 uStack_88;
  undefined1 uStack_80;
  long lStack_68;
  ulong uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *param_1;
  uStack_38 = (ulong)*param_2;
  puStack_30 = &UNK_10ae73cc0;
  uStack_28 = *param_3;
  puStack_20 = &UNK_1005616c4;
  func_0x0001004d4da0(lVar2,param_1[1],&uStack_38,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = *(long *)(lVar2 + 0x10);
  uStack_88 = 0;
  uStack_80 = 9;
  func_0x0001005a7ec4(lVar3,&uStack_88);
  uVar5 = (uint)*(undefined8 *)(*(long *)(lVar2 + 0x10) + 0x20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    uVar1 = uVar5 - 0x7f;
    uVar7 = (ulong)uVar1;
    if (uVar5 < 0x7f) {
      uVar7 = 1;
    }
    else {
      func_0x0001008e186c();
    }
    func_0x0001008e016c(lVar3,uVar7 & 0xffffffff);
    pbVar4 = *(byte **)(lVar3 + 0x10);
    *(ulong *)(*(long *)(lVar3 + 0x18) + 0x10) =
         *(long *)(*(long *)(lVar3 + 0x18) + 0x10) + (uVar7 & 0xffffffff);
    func_0x0001008e01c0(pbVar4,uVar7 & 0xffffffff);
    if ((int)uVar7 != 1) {
      pbVar6 = pbVar4 + 1;
      *pbVar4 = 0xff;
      uVar5 = (int)uVar7 - 2;
      switch((ulong)uVar5) {
      case 4:
        pbVar4[5] = (byte)(uVar1 >> 0x1c) | 0x80;
      case 3:
        pbVar4[4] = (byte)(uVar1 >> 0x15) | 0x80;
      case 2:
        pbVar4[3] = (byte)(uVar1 >> 0xe) | 0x80;
      case 1:
        pbVar4[2] = (byte)(uVar1 >> 7) | 0x80;
      case 0:
        *pbVar6 = (byte)uVar1 | 0x80;
      default:
        pbVar6[uVar5] = pbVar6[uVar5] & 0x7f;
        return;
      }
    }
    *pbVar4 = (byte)uVar5 | 0x80;
    return;
  }
  return;
}



/* Entry: 104a9d8f8; end: 104a9d967;  */

void FUN_104a9d8f8(long param_1)

{
  uint uVar1;
  long lVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  ulong uVar6;
  undefined8 uStack_48;
  undefined1 uStack_40;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0x10);
  uStack_48 = 0;
  uStack_40 = 9;
  func_0x0001005a7ec4(lVar2,&uStack_48);
  uVar4 = (uint)*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  uVar1 = uVar4 - 0x7f;
  uVar6 = (ulong)uVar1;
  if (uVar4 < 0x7f) {
    uVar6 = 1;
  }
  else {
    func_0x0001008e186c();
  }
  func_0x0001008e016c(lVar2,uVar6 & 0xffffffff);
  pbVar3 = *(byte **)(lVar2 + 0x10);
  *(ulong *)(*(long *)(lVar2 + 0x18) + 0x10) =
       *(long *)(*(long *)(lVar2 + 0x18) + 0x10) + (uVar6 & 0xffffffff);
  func_0x0001008e01c0(pbVar3,uVar6 & 0xffffffff);
  if ((int)uVar6 != 1) {
    pbVar5 = pbVar3 + 1;
    *pbVar3 = 0xff;
    uVar4 = (int)uVar6 - 2;
    switch((ulong)uVar4) {
    case 4:
      pbVar3[5] = (byte)(uVar1 >> 0x1c) | 0x80;
    case 3:
      pbVar3[4] = (byte)(uVar1 >> 0x15) | 0x80;
    case 2:
      pbVar3[3] = (byte)(uVar1 >> 0xe) | 0x80;
    case 1:
      pbVar3[2] = (byte)(uVar1 >> 7) | 0x80;
    case 0:
      *pbVar5 = (byte)uVar1 | 0x80;
    default:
      pbVar5[uVar4] = pbVar5[uVar4] & 0x7f;
      return;
    }
  }
  *pbVar3 = (byte)uVar4 | 0x80;
  return;
}



/* Entry: 104a9d968; end: 104a9da0f;  */

void FUN_104a9d968(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  
  uVar2 = param_2 - 0x7f;
  uVar5 = (ulong)uVar2;
  if (param_2 < 0x7f) {
    uVar5 = 1;
  }
  else {
    func_0x0001008e186c();
  }
  func_0x0001008e016c(param_1,uVar5 & 0xffffffff);
  pbVar3 = *(byte **)(param_1 + 0x10);
  *(ulong *)(*(long *)(param_1 + 0x18) + 0x10) =
       *(long *)(*(long *)(param_1 + 0x18) + 0x10) + (uVar5 & 0xffffffff);
  func_0x0001008e01c0(pbVar3,uVar5 & 0xffffffff);
  if ((int)uVar5 != 1) {
    pbVar4 = pbVar3 + 1;
    *pbVar3 = 0xff;
    uVar1 = (int)uVar5 - 2;
    switch((ulong)uVar1) {
    case 4:
      pbVar3[5] = (byte)(uVar2 >> 0x1c) | 0x80;
    case 3:
      pbVar3[4] = (byte)(uVar2 >> 0x15) | 0x80;
    case 2:
      pbVar3[3] = (byte)(uVar2 >> 0xe) | 0x80;
    case 1:
      pbVar3[2] = (byte)(uVar2 >> 7) | 0x80;
    case 0:
      *pbVar4 = (byte)uVar2 | 0x80;
    default:
      pbVar4[uVar1] = pbVar4[uVar1] & 0x7f;
      return;
    }
  }
  *pbVar3 = (byte)param_2 | 0x80;
  return;
}



/* Entry: 104a9da10; end: 104a9dd3b;  */

/* WARNING: Possible PIC construction at 0x000104a9e1a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104a9df18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104a9dbe8: Changing call to branch */

void FUN_104a9da10(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  long *plVar7;
  int iVar8;
  long **pplVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  long *plStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  long *plStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  byte bStack_2a0;
  byte bStack_29f;
  int iStack_290;
  int iStack_28c;
  long lStack_288;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  byte bStack_1e0;
  byte bStack_1df;
  int iStack_1d0;
  int iStack_1cc;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  int iStack_160;
  int iStack_15c;
  long lStack_158;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  byte bStack_c0;
  byte bStack_bf;
  int iStack_b0;
  int iStack_ac;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  int iStack_40;
  int iStack_3c;
  long lStack_38;
  
  pplVar9 = &plStack_120;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_78 = param_2[1];
  plStack_80 = (long *)*param_2;
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  func_0x0001008dfdbc(&plStack_60,&plStack_80);
  if ((long *)0x1 < plStack_80) {
    do {
      lVar12 = *plStack_80;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_80,0x10);
      if (bVar3) {
        *plStack_80 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 + -1 == 0) {
      (*(code *)plStack_80[1])();
    }
  }
  uVar13 = (ulong)(iStack_3c + 1);
  func_0x0001008e016c(param_1,uVar13);
  *(ulong *)(*(long *)(param_1 + 0x18) + 0x10) =
       *(long *)(*(long *)(param_1 + 0x18) + 0x10) + uVar13;
  puVar5 = *(undefined1 **)(param_1 + 0x10);
  func_0x0001008e01c0(puVar5,uVar13);
  *puVar5 = 0;
  if (iStack_3c == 1) {
    puVar5[1] = (char)iStack_40;
  }
  else {
    puVar5[1] = 0x7f;
    func_0x0001008e18a4(iStack_40 + -0x7f,puVar5 + 2,iStack_3c + -1);
  }
  uStack_98 = uStack_58;
  plStack_a0 = plStack_60;
  uStack_88 = uStack_48;
  uStack_90 = uStack_50;
  uStack_58 = 0;
  plStack_60 = (long *)0x0;
  uStack_48 = 0;
  uStack_50 = 0;
  func_0x0001008e025c(param_1,&plStack_a0);
  if ((long *)0x1 < plStack_a0) {
    do {
      lVar12 = *plStack_a0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_a0,0x10);
      if (bVar3) {
        *plStack_a0 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 + -1 == 0) {
      (*(code *)plStack_a0[1])();
    }
  }
  uStack_f8 = param_3[1];
  plStack_100 = (long *)*param_3;
  uStack_e8 = param_3[3];
  uStack_f0 = param_3[2];
  param_3[1] = 0;
  *param_3 = 0;
  param_3[3] = 0;
  param_3[2] = 0;
  puVar11 = (undefined8 *)(ulong)*(byte *)(param_1 + 9);
  FUN_104a9f1b0(&plStack_e0,&plStack_100);
  if ((long *)0x1 < plStack_100) {
    do {
      lVar12 = *plStack_100;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_100,0x10);
      if (bVar3) {
        *plStack_100 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 + -1 == 0) {
      (*(code *)plStack_100[1])();
    }
  }
  uVar13 = (ulong)(iStack_ac + (uint)bStack_bf);
  func_0x0001008e016c(param_1,uVar13);
  *(ulong *)(*(long *)(param_1 + 0x18) + 0x10) =
       *(long *)(*(long *)(param_1 + 0x18) + 0x10) + uVar13;
  pbVar6 = *(byte **)(param_1 + 0x10);
  func_0x0001008e01c0(pbVar6,uVar13);
  if (iStack_ac == 1) {
    *pbVar6 = bStack_c0 | (byte)iStack_b0;
    if (bStack_bf != 0) {
      pbVar6[1] = 0;
    }
    uStack_118 = uStack_d8;
    plStack_120 = plStack_e0;
    uStack_108 = uStack_c8;
    uStack_110 = uStack_d0;
    uStack_d8 = 0;
    plStack_e0 = (long *)0x0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    func_0x0001008e025c(param_1);
    if ((long *)0x1 < plStack_120) {
      do {
        lVar12 = *plStack_120;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_120,0x10);
        if (bVar3) {
          *plStack_120 = lVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar12 + -1 == 0) {
        (*(code *)plStack_120[1])();
      }
    }
    if ((long *)0x1 < plStack_e0) {
      do {
        lVar12 = *plStack_e0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_e0,0x10);
        if (bVar3) {
          *plStack_e0 = lVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar12 + -1 == 0) {
        (*(code *)plStack_e0[1])();
      }
    }
    plVar7 = plStack_60;
    if ((long *)0x1 < plStack_60) {
      do {
        lVar12 = *plStack_60;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_60,0x10);
        if (bVar3) {
          *plStack_60 = lVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar12 + -1 == 0) {
        (*(code *)plStack_60[1])();
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
    ___stack_chk_fail();
    if ((int)pplVar9 != 0) {
      FUN_104bd46a0();
      func_0x0001004b6d90(&plStack_120);
      func_0x0001004b6d90(&plStack_e0);
      func_0x0001004b6d90(&plStack_60);
    }
    __Unwind_Resume();
    uVar4 = (uint)&plStack_240;
    lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uStack_198 = pplVar9[1];
    plStack_1a0 = *pplVar9;
    uStack_188 = pplVar9[3];
    uStack_190 = pplVar9[2];
    pplVar9[1] = (long *)0x0;
    *pplVar9 = (long *)0x0;
    pplVar9[3] = (long *)0x0;
    pplVar9[2] = (long *)0x0;
    func_0x0001008dfdbc(&plStack_180,&plStack_1a0);
    if ((long *)0x1 < plStack_1a0) {
      do {
        lVar12 = *plStack_1a0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_1a0,0x10);
        if (bVar3) {
          *plStack_1a0 = lVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar12 + -1 == 0) {
        (*(code *)plStack_1a0[1])();
      }
    }
    uVar13 = (ulong)(iStack_15c + 1);
    func_0x0001008e016c(plVar7,uVar13);
    *(ulong *)(plVar7[3] + 0x10) = *(long *)(plVar7[3] + 0x10) + uVar13;
    puVar5 = (undefined1 *)plVar7[2];
    func_0x0001008e01c0(puVar5,uVar13);
    *puVar5 = 0x40;
    if (iStack_15c == 1) {
      puVar5[1] = (char)iStack_160;
    }
    else {
      puVar5[1] = 0x7f;
      func_0x0001008e18a4(iStack_160 + -0x7f,puVar5 + 2,iStack_15c + -1);
    }
    uStack_1b8 = uStack_178;
    plStack_1c0 = plStack_180;
    uStack_1a8 = uStack_168;
    uStack_1b0 = uStack_170;
    uStack_178 = 0;
    plStack_180 = (long *)0x0;
    uStack_168 = 0;
    uStack_170 = 0;
    func_0x0001008e025c(plVar7,&plStack_1c0);
    if ((long *)0x1 < plStack_1c0) {
      do {
        lVar12 = *plStack_1c0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_1c0,0x10);
        if (bVar3) {
          *plStack_1c0 = lVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar12 + -1 == 0) {
        (*(code *)plStack_1c0[1])();
      }
    }
    uStack_218 = puVar11[1];
    plStack_220 = (long *)*puVar11;
    uStack_208 = puVar11[3];
    uStack_210 = puVar11[2];
    puVar11[1] = 0;
    *puVar11 = 0;
    puVar11[3] = 0;
    puVar11[2] = 0;
    puVar11 = (undefined8 *)(ulong)*(byte *)((long)plVar7 + 9);
    FUN_104a9f1b0(&plStack_200,&plStack_220);
    if ((long *)0x1 < plStack_220) {
      do {
        lVar12 = *plStack_220;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_220,0x10);
        if (bVar3) {
          *plStack_220 = lVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar12 + -1 == 0) {
        (*(code *)plStack_220[1])();
      }
    }
    uVar13 = (ulong)(iStack_1cc + (uint)bStack_1df);
    func_0x0001008e016c(plVar7,uVar13);
    *(ulong *)(plVar7[3] + 0x10) = *(long *)(plVar7[3] + 0x10) + uVar13;
    pbVar6 = (byte *)plVar7[2];
    func_0x0001008e01c0(pbVar6,uVar13);
    if (iStack_1cc == 1) {
      *pbVar6 = bStack_1e0 | (byte)iStack_1d0;
      if (bStack_1df != 0) {
        pbVar6[1] = 0;
      }
      uStack_238 = uStack_1f8;
      plStack_240 = plStack_200;
      uStack_228 = uStack_1e8;
      uStack_230 = uStack_1f0;
      uStack_1f8 = 0;
      plStack_200 = (long *)0x0;
      uStack_1e8 = 0;
      uStack_1f0 = 0;
      func_0x0001008e025c(plVar7);
      if ((long *)0x1 < plStack_240) {
        do {
          lVar12 = *plStack_240;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_240,0x10);
          if (bVar3) {
            *plStack_240 = lVar12 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar12 + -1 == 0) {
          (*(code *)plStack_240[1])();
        }
      }
      if ((long *)0x1 < plStack_200) {
        do {
          lVar12 = *plStack_200;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_200,0x10);
          if (bVar3) {
            *plStack_200 = lVar12 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar12 + -1 == 0) {
          (*(code *)plStack_200[1])();
        }
      }
      plVar7 = plStack_180;
      if ((long *)0x1 < plStack_180) {
        do {
          lVar12 = *plStack_180;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_180,0x10);
          if (bVar3) {
            *plStack_180 = lVar12 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar12 + -1 == 0) {
          (*(code *)plStack_180[1])();
        }
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
        return;
      }
      ___stack_chk_fail();
      if (uVar4 != 0) {
        FUN_104bd46a0();
        func_0x0001004b6d90(&plStack_240);
        func_0x0001004b6d90(&plStack_200);
        func_0x0001004b6d90(&plStack_180);
      }
      __Unwind_Resume();
      iVar8 = (int)&plStack_300;
      lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uStack_2d8 = puVar11[1];
      plStack_2e0 = (long *)*puVar11;
      uStack_2c8 = puVar11[3];
      uStack_2d0 = puVar11[2];
      puVar11[1] = 0;
      *puVar11 = 0;
      puVar11[3] = 0;
      puVar11[2] = 0;
      FUN_104a9f1b0(&plStack_2c0,&plStack_2e0,*(undefined1 *)((long)plVar7 + 9));
      if ((long *)0x1 < plStack_2e0) {
        do {
          lVar12 = *plStack_2e0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_2e0,0x10);
          if (bVar3) {
            *plStack_2e0 = lVar12 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar12 + -1 == 0) {
          (*(code *)plStack_2e0[1])();
        }
      }
      if (uVar4 < 0xf) {
        uVar13 = 1;
      }
      else {
        uVar13 = (ulong)(uVar4 - 0xf);
        func_0x0001008e186c();
      }
      lVar12 = (ulong)(iStack_28c + (uint)bStack_29f) + (uVar13 & 0xffffffff);
      func_0x0001008e016c(plVar7,lVar12);
      *(long *)(plVar7[3] + 0x10) = *(long *)(plVar7[3] + 0x10) + lVar12;
      puVar5 = (undefined1 *)plVar7[2];
      func_0x0001008e01c0(puVar5,lVar12);
      if ((int)uVar13 == 1) {
        *puVar5 = (char)uVar4;
      }
      else {
        *puVar5 = 0xf;
        func_0x0001008e18a4((ulong)(uVar4 - 0xf),puVar5 + 1,(int)uVar13 + -1);
      }
      pbVar6 = puVar5 + (uVar13 & 0xffffffff);
      if (iStack_28c == 1) {
        *pbVar6 = bStack_2a0 | (byte)iStack_290;
        if (bStack_29f != 0) {
          pbVar6[1] = 0;
        }
        uStack_2f8 = uStack_2b8;
        plStack_300 = plStack_2c0;
        uStack_2e8 = uStack_2a8;
        uStack_2f0 = uStack_2b0;
        uStack_2b8 = 0;
        plStack_2c0 = (long *)0x0;
        uStack_2a8 = 0;
        uStack_2b0 = 0;
        func_0x0001008e025c(plVar7);
        if ((long *)0x1 < plStack_300) {
          do {
            lVar12 = *plStack_300;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plStack_300,0x10);
            if (bVar3) {
              *plStack_300 = lVar12 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar12 + -1 == 0) {
            (*(code *)plStack_300[1])();
          }
        }
        plVar7 = plStack_2c0;
        if ((long *)0x1 < plStack_2c0) {
          do {
            lVar12 = *plStack_2c0;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plStack_2c0,0x10);
            if (bVar3) {
              *plStack_2c0 = lVar12 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar12 + -1 == 0) {
            (*(code *)plStack_2c0[1])();
          }
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
          return;
        }
        ___stack_chk_fail();
        if (iVar8 != 0) {
          FUN_104bd46a0();
          func_0x0001004b6d90(&plStack_2c0);
        }
        __Unwind_Resume();
        uVar1 = *(uint *)(plVar7[4] + 0xc);
        uVar4 = uVar1 - 0x1f;
        uVar13 = (ulong)uVar4;
        if (uVar1 < 0x1f) {
          uVar13 = 1;
        }
        else {
          func_0x0001008e186c();
        }
        func_0x0001008e016c(plVar7,uVar13 & 0xffffffff);
        pbVar6 = (byte *)plVar7[2];
        *(ulong *)(plVar7[3] + 0x10) = *(long *)(plVar7[3] + 0x10) + (uVar13 & 0xffffffff);
        func_0x0001008e01c0(pbVar6,uVar13 & 0xffffffff);
        iStack_28c = (int)uVar13 + -1;
        if (iStack_28c == 0) {
          *pbVar6 = (byte)uVar1 | 0x20;
          return;
        }
        pbVar10 = pbVar6 + 1;
        *pbVar6 = 0x3f;
      }
      else {
        pbVar10 = pbVar6 + 1;
        *pbVar6 = bStack_2a0 | 0x7f;
        uVar4 = iStack_290 - 0x7f;
        iStack_28c = iStack_28c + -1;
      }
    }
    else {
      pbVar10 = pbVar6 + 1;
      *pbVar6 = bStack_1e0 | 0x7f;
      uVar4 = iStack_1d0 - 0x7f;
      iStack_28c = iStack_1cc + -1;
    }
  }
  else {
    pbVar10 = pbVar6 + 1;
    *pbVar6 = bStack_c0 | 0x7f;
    uVar4 = iStack_b0 - 0x7f;
    iStack_28c = iStack_ac + -1;
  }
  uVar1 = iStack_28c - 1;
  switch((ulong)uVar1) {
  case 4:
    pbVar10[4] = (byte)(uVar4 >> 0x1c) | 0x80;
  case 3:
    pbVar10[3] = (byte)(uVar4 >> 0x15) | 0x80;
  case 2:
    pbVar10[2] = (byte)(uVar4 >> 0xe) | 0x80;
  case 1:
    pbVar10[1] = (byte)(uVar4 >> 7) | 0x80;
  case 0:
    *pbVar10 = (byte)uVar4 | 0x80;
  default:
    pbVar10[uVar1] = pbVar10[uVar1] & 0x7f;
    return;
  }
}



/* Entry: 104a9dd3c; end: 104a9e06b;  */

/* WARNING: Possible PIC construction at 0x000104a9e1a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104a9df18: Changing call to branch */

void FUN_104a9dd3c(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  long *plVar7;
  int iVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  byte bStack_180;
  byte bStack_17f;
  int iStack_170;
  int iStack_16c;
  long lStack_168;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  byte bStack_c0;
  byte bStack_bf;
  int iStack_b0;
  int iStack_ac;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  int iStack_40;
  int iStack_3c;
  long lStack_38;
  
  uVar4 = (uint)&plStack_120;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_78 = param_2[1];
  plStack_80 = (long *)*param_2;
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  func_0x0001008dfdbc(&plStack_60,&plStack_80);
  if ((long *)0x1 < plStack_80) {
    do {
      lVar11 = *plStack_80;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_80,0x10);
      if (bVar3) {
        *plStack_80 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 + -1 == 0) {
      (*(code *)plStack_80[1])();
    }
  }
  uVar12 = (ulong)(iStack_3c + 1);
  func_0x0001008e016c(param_1,uVar12);
  *(ulong *)(*(long *)(param_1 + 0x18) + 0x10) =
       *(long *)(*(long *)(param_1 + 0x18) + 0x10) + uVar12;
  puVar5 = *(undefined1 **)(param_1 + 0x10);
  func_0x0001008e01c0(puVar5,uVar12);
  *puVar5 = 0x40;
  if (iStack_3c == 1) {
    puVar5[1] = (char)iStack_40;
  }
  else {
    puVar5[1] = 0x7f;
    func_0x0001008e18a4(iStack_40 + -0x7f,puVar5 + 2,iStack_3c + -1);
  }
  uStack_98 = uStack_58;
  plStack_a0 = plStack_60;
  uStack_88 = uStack_48;
  uStack_90 = uStack_50;
  uStack_58 = 0;
  plStack_60 = (long *)0x0;
  uStack_48 = 0;
  uStack_50 = 0;
  func_0x0001008e025c(param_1,&plStack_a0);
  if ((long *)0x1 < plStack_a0) {
    do {
      lVar11 = *plStack_a0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_a0,0x10);
      if (bVar3) {
        *plStack_a0 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 + -1 == 0) {
      (*(code *)plStack_a0[1])();
    }
  }
  uStack_f8 = param_3[1];
  plStack_100 = (long *)*param_3;
  uStack_e8 = param_3[3];
  uStack_f0 = param_3[2];
  param_3[1] = 0;
  *param_3 = 0;
  param_3[3] = 0;
  param_3[2] = 0;
  puVar10 = (undefined8 *)(ulong)*(byte *)(param_1 + 9);
  FUN_104a9f1b0(&plStack_e0,&plStack_100);
  if ((long *)0x1 < plStack_100) {
    do {
      lVar11 = *plStack_100;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_100,0x10);
      if (bVar3) {
        *plStack_100 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 + -1 == 0) {
      (*(code *)plStack_100[1])();
    }
  }
  uVar12 = (ulong)(iStack_ac + (uint)bStack_bf);
  func_0x0001008e016c(param_1,uVar12);
  *(ulong *)(*(long *)(param_1 + 0x18) + 0x10) =
       *(long *)(*(long *)(param_1 + 0x18) + 0x10) + uVar12;
  pbVar6 = *(byte **)(param_1 + 0x10);
  func_0x0001008e01c0(pbVar6,uVar12);
  if (iStack_ac == 1) {
    *pbVar6 = bStack_c0 | (byte)iStack_b0;
    if (bStack_bf != 0) {
      pbVar6[1] = 0;
    }
    uStack_118 = uStack_d8;
    plStack_120 = plStack_e0;
    uStack_108 = uStack_c8;
    uStack_110 = uStack_d0;
    uStack_d8 = 0;
    plStack_e0 = (long *)0x0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    func_0x0001008e025c(param_1);
    if ((long *)0x1 < plStack_120) {
      do {
        lVar11 = *plStack_120;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_120,0x10);
        if (bVar3) {
          *plStack_120 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 + -1 == 0) {
        (*(code *)plStack_120[1])();
      }
    }
    if ((long *)0x1 < plStack_e0) {
      do {
        lVar11 = *plStack_e0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_e0,0x10);
        if (bVar3) {
          *plStack_e0 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 + -1 == 0) {
        (*(code *)plStack_e0[1])();
      }
    }
    plVar7 = plStack_60;
    if ((long *)0x1 < plStack_60) {
      do {
        lVar11 = *plStack_60;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_60,0x10);
        if (bVar3) {
          *plStack_60 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 + -1 == 0) {
        (*(code *)plStack_60[1])();
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
    ___stack_chk_fail();
    if (uVar4 != 0) {
      FUN_104bd46a0();
      func_0x0001004b6d90(&plStack_120);
      func_0x0001004b6d90(&plStack_e0);
      func_0x0001004b6d90(&plStack_60);
    }
    __Unwind_Resume();
    iVar8 = (int)&plStack_1e0;
    lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uStack_1b8 = puVar10[1];
    plStack_1c0 = (long *)*puVar10;
    uStack_1a8 = puVar10[3];
    uStack_1b0 = puVar10[2];
    puVar10[1] = 0;
    *puVar10 = 0;
    puVar10[3] = 0;
    puVar10[2] = 0;
    FUN_104a9f1b0(&plStack_1a0,&plStack_1c0,*(undefined1 *)((long)plVar7 + 9));
    if ((long *)0x1 < plStack_1c0) {
      do {
        lVar11 = *plStack_1c0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_1c0,0x10);
        if (bVar3) {
          *plStack_1c0 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 + -1 == 0) {
        (*(code *)plStack_1c0[1])();
      }
    }
    if (uVar4 < 0xf) {
      uVar12 = 1;
    }
    else {
      uVar12 = (ulong)(uVar4 - 0xf);
      func_0x0001008e186c();
    }
    lVar11 = (ulong)(iStack_16c + (uint)bStack_17f) + (uVar12 & 0xffffffff);
    func_0x0001008e016c(plVar7,lVar11);
    *(long *)(plVar7[3] + 0x10) = *(long *)(plVar7[3] + 0x10) + lVar11;
    puVar5 = (undefined1 *)plVar7[2];
    func_0x0001008e01c0(puVar5,lVar11);
    if ((int)uVar12 == 1) {
      *puVar5 = (char)uVar4;
    }
    else {
      *puVar5 = 0xf;
      func_0x0001008e18a4((ulong)(uVar4 - 0xf),puVar5 + 1,(int)uVar12 + -1);
    }
    pbVar6 = puVar5 + (uVar12 & 0xffffffff);
    if (iStack_16c == 1) {
      *pbVar6 = bStack_180 | (byte)iStack_170;
      if (bStack_17f != 0) {
        pbVar6[1] = 0;
      }
      uStack_1d8 = uStack_198;
      plStack_1e0 = plStack_1a0;
      uStack_1c8 = uStack_188;
      uStack_1d0 = uStack_190;
      uStack_198 = 0;
      plStack_1a0 = (long *)0x0;
      uStack_188 = 0;
      uStack_190 = 0;
      func_0x0001008e025c(plVar7);
      if ((long *)0x1 < plStack_1e0) {
        do {
          lVar11 = *plStack_1e0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_1e0,0x10);
          if (bVar3) {
            *plStack_1e0 = lVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar11 + -1 == 0) {
          (*(code *)plStack_1e0[1])();
        }
      }
      plVar7 = plStack_1a0;
      if ((long *)0x1 < plStack_1a0) {
        do {
          lVar11 = *plStack_1a0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_1a0,0x10);
          if (bVar3) {
            *plStack_1a0 = lVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar11 + -1 == 0) {
          (*(code *)plStack_1a0[1])();
        }
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
        return;
      }
      ___stack_chk_fail();
      if (iVar8 != 0) {
        FUN_104bd46a0();
        func_0x0001004b6d90(&plStack_1a0);
      }
      __Unwind_Resume();
      uVar1 = *(uint *)(plVar7[4] + 0xc);
      uVar4 = uVar1 - 0x1f;
      uVar12 = (ulong)uVar4;
      if (uVar1 < 0x1f) {
        uVar12 = 1;
      }
      else {
        func_0x0001008e186c();
      }
      func_0x0001008e016c(plVar7,uVar12 & 0xffffffff);
      pbVar6 = (byte *)plVar7[2];
      *(ulong *)(plVar7[3] + 0x10) = *(long *)(plVar7[3] + 0x10) + (uVar12 & 0xffffffff);
      func_0x0001008e01c0(pbVar6,uVar12 & 0xffffffff);
      iStack_16c = (int)uVar12 + -1;
      if (iStack_16c == 0) {
        *pbVar6 = (byte)uVar1 | 0x20;
        return;
      }
      pbVar9 = pbVar6 + 1;
      *pbVar6 = 0x3f;
    }
    else {
      pbVar9 = pbVar6 + 1;
      *pbVar6 = bStack_180 | 0x7f;
      uVar4 = iStack_170 - 0x7f;
      iStack_16c = iStack_16c + -1;
    }
  }
  else {
    pbVar9 = pbVar6 + 1;
    *pbVar6 = bStack_c0 | 0x7f;
    uVar4 = iStack_b0 - 0x7f;
    iStack_16c = iStack_ac + -1;
  }
  uVar1 = iStack_16c - 1;
  switch((ulong)uVar1) {
  case 4:
    pbVar9[4] = (byte)(uVar4 >> 0x1c) | 0x80;
  case 3:
    pbVar9[3] = (byte)(uVar4 >> 0x15) | 0x80;
  case 2:
    pbVar9[2] = (byte)(uVar4 >> 0xe) | 0x80;
  case 1:
    pbVar9[1] = (byte)(uVar4 >> 7) | 0x80;
  case 0:
    *pbVar9 = (byte)uVar4 | 0x80;
  default:
    pbVar9[uVar1] = pbVar9[uVar1] & 0x7f;
    return;
  }
}



/* Entry: 104a9e06c; end: 104a9e2a3;  */

/* WARNING: Possible PIC construction at 0x000104a9e1a4: Changing call to branch */

void FUN_104a9e06c(long param_1,uint param_2,undefined8 *param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined1 *puVar5;
  long *plVar6;
  byte *pbVar7;
  int iVar8;
  byte *pbVar9;
  long lVar10;
  ulong uVar11;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  byte bStack_60;
  byte bStack_5f;
  int iStack_50;
  int iStack_4c;
  long lStack_48;
  
  iVar8 = (int)&plStack_c0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_98 = param_3[1];
  plStack_a0 = (long *)*param_3;
  uStack_88 = param_3[3];
  uStack_90 = param_3[2];
  param_3[1] = 0;
  *param_3 = 0;
  param_3[3] = 0;
  param_3[2] = 0;
  FUN_104a9f1b0(&plStack_80,&plStack_a0,*(undefined1 *)(param_1 + 9));
  if ((long *)0x1 < plStack_a0) {
    do {
      lVar10 = *plStack_a0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_a0,0x10);
      if (bVar3) {
        *plStack_a0 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)plStack_a0[1])();
    }
  }
  if (param_2 < 0xf) {
    uVar11 = 1;
  }
  else {
    uVar11 = (ulong)(param_2 - 0xf);
    func_0x0001008e186c();
  }
  lVar10 = (ulong)(iStack_4c + (uint)bStack_5f) + (uVar11 & 0xffffffff);
  func_0x0001008e016c(param_1,lVar10);
  *(long *)(*(long *)(param_1 + 0x18) + 0x10) = *(long *)(*(long *)(param_1 + 0x18) + 0x10) + lVar10
  ;
  puVar5 = *(undefined1 **)(param_1 + 0x10);
  func_0x0001008e01c0(puVar5,lVar10);
  if ((int)uVar11 == 1) {
    *puVar5 = (char)param_2;
  }
  else {
    *puVar5 = 0xf;
    func_0x0001008e18a4((ulong)(param_2 - 0xf),puVar5 + 1,(int)uVar11 + -1);
  }
  pbVar7 = puVar5 + (uVar11 & 0xffffffff);
  if (iStack_4c == 1) {
    *pbVar7 = bStack_60 | (byte)iStack_50;
    if (bStack_5f != 0) {
      pbVar7[1] = 0;
    }
    uStack_b8 = uStack_78;
    plStack_c0 = plStack_80;
    uStack_a8 = uStack_68;
    uStack_b0 = uStack_70;
    uStack_78 = 0;
    plStack_80 = (long *)0x0;
    uStack_68 = 0;
    uStack_70 = 0;
    func_0x0001008e025c(param_1);
    if ((long *)0x1 < plStack_c0) {
      do {
        lVar10 = *plStack_c0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_c0,0x10);
        if (bVar3) {
          *plStack_c0 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (*(code *)plStack_c0[1])();
      }
    }
    plVar6 = plStack_80;
    if ((long *)0x1 < plStack_80) {
      do {
        lVar10 = *plStack_80;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_80,0x10);
        if (bVar3) {
          *plStack_80 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (*(code *)plStack_80[1])();
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return;
    }
    ___stack_chk_fail();
    if (iVar8 != 0) {
      FUN_104bd46a0();
      func_0x0001004b6d90(&plStack_80);
    }
    __Unwind_Resume();
    uVar1 = *(uint *)(plVar6[4] + 0xc);
    uVar4 = uVar1 - 0x1f;
    uVar11 = (ulong)uVar4;
    if (uVar1 < 0x1f) {
      uVar11 = 1;
    }
    else {
      func_0x0001008e186c();
    }
    func_0x0001008e016c(plVar6,uVar11 & 0xffffffff);
    pbVar7 = (byte *)plVar6[2];
    *(ulong *)(plVar6[3] + 0x10) = *(long *)(plVar6[3] + 0x10) + (uVar11 & 0xffffffff);
    func_0x0001008e01c0(pbVar7,uVar11 & 0xffffffff);
    iStack_4c = (int)uVar11 + -1;
    if (iStack_4c == 0) {
      *pbVar7 = (byte)uVar1 | 0x20;
      return;
    }
    *pbVar7 = 0x3f;
  }
  else {
    *pbVar7 = bStack_60 | 0x7f;
    uVar4 = iStack_50 - 0x7f;
    iStack_4c = iStack_4c + -1;
  }
  pbVar9 = pbVar7 + 1;
  uVar1 = iStack_4c - 1;
  switch((ulong)uVar1) {
  case 4:
    pbVar7[5] = (byte)(uVar4 >> 0x1c) | 0x80;
  case 3:
    pbVar7[4] = (byte)(uVar4 >> 0x15) | 0x80;
  case 2:
    pbVar7[3] = (byte)(uVar4 >> 0xe) | 0x80;
  case 1:
    pbVar7[2] = (byte)(uVar4 >> 7) | 0x80;
  case 0:
    *pbVar9 = (byte)uVar4 | 0x80;
  default:
    pbVar9[uVar1] = pbVar9[uVar1] & 0x7f;
    return;
  }
}



/* Entry: 104a9e2a4; end: 104a9e34f;  */

void FUN_104a9e2a4(long param_1)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(*(long *)(param_1 + 0x20) + 0xc);
  uVar2 = uVar1 - 0x1f;
  uVar5 = (ulong)uVar2;
  if (uVar1 < 0x1f) {
    uVar5 = 1;
  }
  else {
    func_0x0001008e186c();
  }
  func_0x0001008e016c(param_1,uVar5 & 0xffffffff);
  pbVar3 = *(byte **)(param_1 + 0x10);
  *(ulong *)(*(long *)(param_1 + 0x18) + 0x10) =
       *(long *)(*(long *)(param_1 + 0x18) + 0x10) + (uVar5 & 0xffffffff);
  func_0x0001008e01c0(pbVar3,uVar5 & 0xffffffff);
  if ((int)uVar5 != 1) {
    pbVar4 = pbVar3 + 1;
    *pbVar3 = 0x3f;
    uVar1 = (int)uVar5 - 2;
    switch((ulong)uVar1) {
    case 4:
      pbVar3[5] = (byte)(uVar2 >> 0x1c) | 0x80;
    case 3:
      pbVar3[4] = (byte)(uVar2 >> 0x15) | 0x80;
    case 2:
      pbVar3[3] = (byte)(uVar2 >> 0xe) | 0x80;
    case 1:
      pbVar3[2] = (byte)(uVar2 >> 7) | 0x80;
    case 0:
      *pbVar4 = (byte)uVar2 | 0x80;
    default:
      pbVar4[uVar1] = pbVar4[uVar1] & 0x7f;
      return;
    }
  }
  *pbVar3 = (byte)uVar1 | 0x20;
  return;
}



/* Entry: 104a9e350; end: 104a9e42b;  */

void FUN_104a9e350(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  byte *pbVar8;
  uint *puVar9;
  long *plVar10;
  long lVar11;
  ulong *puVar12;
  int iVar13;
  byte *pbVar14;
  uint *puVar15;
  long **pplVar16;
  long *plVar17;
  char *pcVar18;
  long lVar19;
  long **pplVar20;
  long lVar21;
  ulong uVar22;
  undefined8 *puVar23;
  long *plVar24;
  ulong uVar25;
  undefined8 uVar26;
  ulong *puVar27;
  ulong uVar28;
  long lVar29;
  ulong *puVar30;
  long *plVar31;
  uint3 uStack_284;
  long *plStack_280;
  ulong uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  char *pcStack_250;
  long *plStack_240;
  ulong uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_218;
  undefined1 auStack_1b8 [32];
  long lStack_198;
  long *plStack_150;
  long *plStack_148;
  long *plStack_140;
  long *plStack_138;
  long lStack_128;
  long *plStack_120;
  long *plStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  long *plStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long *plStack_e0;
  long lStack_d8;
  char *pcStack_d0;
  long *plStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_98;
  undefined1 *puStack_60;
  code *pcStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  pplVar20 = &plStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = (uint *)(*(long *)(param_1 + 0x20) + 0x184);
  plVar24 = (long *)*param_2;
  if ((long *)0x1 < plVar24) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar4) {
        *plVar24 = *plVar24 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_48 = param_2[1];
  plStack_50 = (long *)*param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  pcVar18 = "grpc-trace-bin";
  lVar19 = 0xe;
  FUN_104a9e42c();
  plVar24 = plStack_50;
  if ((long *)0x1 < plStack_50) {
    do {
      lVar21 = *plStack_50;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar4) {
        *plStack_50 = lVar21 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar21 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((int)puVar15 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(&plStack_50);
  }
  __Unwind_Resume();
  puStack_60 = &stack0xfffffffffffffff0;
  pcStack_58 = FUN_104a9e42c;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = (uint *)(plVar24[4] + 8);
  if (*puVar9 < *puVar15) {
    pplVar16 = (long **)(ulong)((*puVar9 - *puVar15) + *(int *)(plVar24[4] + 0x10) + 0x3e);
    lStack_b8 = (long)pplVar20[1];
    plStack_c0 = *pplVar20;
    lStack_a8 = (long)pplVar20[3];
    lStack_b0 = (long)pplVar20[2];
    pplVar20[1] = (long *)0x0;
    *pplVar20 = (long *)0x0;
    pplVar20[3] = (long *)0x0;
    pplVar20[2] = (long *)0x0;
    FUN_104a9e06c(plVar24,pplVar16,&plStack_c0);
    plVar24 = plStack_c0;
    if ((long *)0x1 < plStack_c0) {
      do {
        lVar19 = *plStack_c0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plStack_c0,0x10);
        if (bVar4) {
          *plStack_c0 = lVar19 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar19 + -1 == 0) {
        (*(code *)plStack_c0[1])();
      }
    }
  }
  else {
    if (*pplVar20 == (long *)0x0) {
      uVar28 = (ulong)*(byte *)(pplVar20 + 1);
    }
    else {
      uVar28 = (ulong)pplVar20[1];
    }
    func_0x0001008dfcf0(puVar9,lVar19 + uVar28 + 0x20);
    *puVar15 = (uint)puVar9;
    plStack_e0 = (long *)0x1;
    lStack_d8 = lVar19;
    pcStack_d0 = pcVar18;
    lStack_f8 = (long)pplVar20[1];
    plStack_100 = *pplVar20;
    lStack_e8 = (long)pplVar20[3];
    lStack_f0 = (long)pplVar20[2];
    pplVar20[1] = (long *)0x0;
    *pplVar20 = (long *)0x0;
    pplVar20[3] = (long *)0x0;
    pplVar20[2] = (long *)0x0;
    pplVar16 = &plStack_e0;
    FUN_104a9dd3c(plVar24,pplVar16,&plStack_100);
    if ((long *)0x1 < plStack_100) {
      do {
        lVar19 = *plStack_100;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plStack_100,0x10);
        if (bVar4) {
          *plStack_100 = lVar19 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar19 + -1 == 0) {
        (*(code *)plStack_100[1])();
      }
    }
    plVar24 = plStack_e0;
    if ((long *)0x1 < plStack_e0) {
      do {
        lVar19 = *plStack_e0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plStack_e0,0x10);
        if (bVar4) {
          *plStack_e0 = lVar19 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar19 + -1 == 0) {
        (*(code *)plStack_e0[1])();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar16 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(&plStack_100);
    func_0x0001004b6d90(&plStack_e0);
  }
  plVar31 = plVar24;
  __Unwind_Resume();
  plStack_120 = (long *)pplVar20;
  plStack_118 = plVar24;
  ppuStack_110 = &puStack_60;
  pcStack_108 = FUN_104a9e5e8;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar13 = (int)plVar31[4] + 0x180;
  plVar24 = *pplVar16;
  if ((long *)0x1 < plVar24) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar4) {
        *plVar24 = *plVar24 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plStack_148 = pplVar16[1];
  plVar31 = *pplVar16;
  plStack_138 = pplVar16[3];
  plStack_140 = pplVar16[2];
  plStack_150 = plVar31;
  FUN_104a9e42c();
  plVar24 = plStack_150;
  if ((long *)0x1 < plStack_150) {
    do {
      lVar19 = *plStack_150;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_150,0x10);
      if (bVar4) {
        *plStack_150 = lVar19 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar19 + -1 == 0) {
      (*(code *)plStack_150[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return;
  }
  ___stack_chk_fail();
  if (iVar13 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(&plStack_150);
  }
  __Unwind_Resume();
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (iVar13 < 0x130) {
    if (iVar13 != 200) {
      if (iVar13 == 0xcc) {
        plVar17 = (long *)0x9;
      }
      else {
        if (iVar13 != 0xce) goto LAB_104a9e778;
        plVar17 = (long *)0xa;
      }
      goto LAB_104a9e7f8;
    }
    func_0x0001008e016c(plVar24,1);
    plVar10 = (long *)plVar24[2];
    *(long *)(plVar24[3] + 0x10) = *(long *)(plVar24[3] + 0x10) + 1;
    plVar17 = (long *)0x1;
    func_0x0001008e01c0();
    *(undefined1 *)plVar10 = 0x88;
LAB_104a9e7bc:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
      return;
    }
  }
  else {
    if (iVar13 < 0x194) {
      if (iVar13 == 0x130) {
        plVar17 = (long *)0xb;
      }
      else {
        if (iVar13 != 400) {
LAB_104a9e778:
          lStack_198 = 1;
          FUN_104a7a584(auStack_1b8,iVar13);
          plVar17 = &lStack_198;
          func_0x0001008dfe64(plVar24,plVar17,auStack_1b8);
          func_0x0001004b6d90(auStack_1b8);
          plVar10 = &lStack_198;
          func_0x0001004b6d90();
          goto LAB_104a9e7bc;
        }
        plVar17 = (long *)0xc;
      }
    }
    else if (iVar13 == 0x194) {
      plVar17 = (long *)0xd;
    }
    else {
      if (iVar13 != 500) goto LAB_104a9e778;
      plVar17 = (long *)0xe;
    }
LAB_104a9e7f8:
    plVar10 = plVar24;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
      uVar6 = (uint)plVar17 - 0x7f;
      uVar28 = (ulong)uVar6;
      if ((uint)plVar17 < 0x7f) {
        uVar28 = 1;
      }
      else {
        func_0x0001008e186c();
      }
      func_0x0001008e016c(plVar24,uVar28 & 0xffffffff);
      pbVar8 = (byte *)plVar24[2];
      *(ulong *)(plVar24[3] + 0x10) = *(long *)(plVar24[3] + 0x10) + (uVar28 & 0xffffffff);
      func_0x0001008e01c0(pbVar8,uVar28 & 0xffffffff);
      if ((int)uVar28 == 1) {
        *pbVar8 = (byte)plVar17 | 0x80;
        return;
      }
      pbVar14 = pbVar8 + 1;
      *pbVar8 = 0xff;
      uVar5 = (int)uVar28 - 2;
      switch((ulong)uVar5) {
      case 4:
        pbVar8[5] = (byte)(uVar6 >> 0x1c) | 0x80;
      case 3:
        pbVar8[4] = (byte)(uVar6 >> 0x15) | 0x80;
      case 2:
        pbVar8[3] = (byte)(uVar6 >> 0xe) | 0x80;
      case 1:
        pbVar8[2] = (byte)(uVar6 >> 7) | 0x80;
      case 0:
        *pbVar14 = (byte)uVar6 | 0x80;
      default:
        pbVar14[uVar5] = pbVar14[uVar5] & 0x7f;
        return;
      }
    }
  }
  ___stack_chk_fail();
  func_0x0001004b6d90(auStack_1b8);
  func_0x0001004b6d90(&lStack_198);
  __Unwind_Resume();
  lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar24 = plVar10;
  func_0x000100460dc4();
  lVar19 = *plVar24;
  func_0x0001004671a4();
  _uStack_284 = -1;
  if ((((plVar17 != (long *)0x7fffffffffffffff) && (lVar19 != -0x7fffffffffffffff)) &&
      (_uStack_284 = 0, plVar17 != (long *)0x8000000000000000)) && (lVar19 != -0x8000000000000000))
  {
    if ((long)plVar17 < 1) {
      if (-0x8000000000000000 - (long)plVar17 <= -lVar19) goto LAB_104a9e8e8;
    }
    else if ((long)((ulong)plVar17 ^ 0x7fffffffffffffff) < -lVar19) {
      _uStack_284 = -1;
    }
    else {
LAB_104a9e8e8:
      _uStack_284 = (int)plVar17 - (int)lVar19;
    }
  }
  func_0x00010061b5d0();
  puVar15 = *(uint **)(plVar10[4] + 0x1d8);
  if (puVar15 != *(uint **)(plVar10[4] + 0x1e0)) {
    do {
      plVar17 = (long *)((ulong)plVar17 & 0xffffffff00000000 | (ulong)*puVar15);
      FUN_104adf744(&uStack_284,plVar17);
      lVar19 = plVar10[4];
      if (((-3.0 < (double)plVar31) && ((double)plVar31 <= 0.0)) &&
         (*(uint *)(lVar19 + 8) < puVar15[1])) {
        FUN_104a9d968(plVar10,(*(uint *)(lVar19 + 8) - puVar15[1]) + *(int *)(lVar19 + 0x10) + 0x3e)
        ;
        puVar23 = *(undefined8 **)(plVar10[4] + 0x1d8);
        uVar26 = *(undefined8 *)puVar15;
        *(undefined8 *)puVar15 = *puVar23;
        *puVar23 = uVar26;
        goto LAB_104a9eb58;
      }
      puVar15 = puVar15 + 2;
    } while (puVar15 != *(uint **)(lVar19 + 0x1e0));
    if (puVar15 != *(uint **)(lVar19 + 0x1d8)) {
      do {
        if (*(uint *)(lVar19 + 8) < puVar15[-1]) break;
        puVar15 = puVar15 + -2;
        *(uint **)(lVar19 + 0x1e0) = puVar15;
      } while (puVar15 != *(uint **)(lVar19 + 0x1d8));
    }
  }
  func_0x00010061b6f0(&plStack_240,&uStack_284);
  lVar19 = plVar10[4] + 8;
  uVar28 = uStack_238 & 0xff;
  if (plStack_240 != (long *)0x0) {
    uVar28 = uStack_238;
  }
  func_0x0001008dfcf0(lVar19,uVar28 + 0x2c);
  lVar21 = plVar10[4];
  uVar28 = (ulong)uStack_284;
  puVar27 = *(ulong **)(lVar21 + 0x1e0);
  if (puVar27 < *(ulong **)(lVar21 + 0x1e8)) {
    puVar30 = puVar27 + 1;
    *puVar27 = uVar28 | lVar19 << 0x20;
  }
  else {
    plVar17 = (long *)(lVar21 + 0x1d8);
    lVar29 = (long)puVar27 - *plVar17 >> 3;
    uVar1 = lVar29 + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_104a9eb90;
    uVar22 = (long)*(ulong **)(lVar21 + 0x1e8) - *plVar17;
    uVar25 = (long)uVar22 >> 2;
    if (uVar25 <= uVar1) {
      uVar25 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar22) {
      uVar25 = 0x1fffffffffffffff;
    }
    if (uVar25 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = lVar21 + 0x1e8;
      FUN_104a9f338();
    }
    puVar27 = (ulong *)(lVar11 + lVar29 * 8);
    puVar30 = puVar27 + 1;
    *puVar27 = uVar28 | lVar19 << 0x20;
    puVar2 = *(ulong **)(lVar21 + 0x1d8);
    puVar12 = *(ulong **)(lVar21 + 0x1e0);
    if (puVar12 != puVar2) {
      do {
        puVar12 = puVar12 + -1;
        puVar27 = puVar27 + -1;
        *puVar27 = *puVar12;
      } while (puVar12 != puVar2);
      puVar12 = (ulong *)*plVar17;
    }
    *(ulong **)(lVar21 + 0x1d8) = puVar27;
    *(ulong **)(lVar21 + 0x1e0) = puVar30;
    *(ulong *)(lVar21 + 0x1e8) = lVar11 + uVar25 * 8;
    if (puVar12 != (ulong *)0x0) {
      __ZdlPv();
    }
  }
  *(ulong **)(lVar21 + 0x1e0) = puVar30;
  plStack_260 = (long *)0x1;
  uStack_258 = 0xc;
  pcStack_250 = "grpc-timeout";
  uStack_278 = uStack_238;
  plStack_280 = plStack_240;
  uStack_268 = uStack_228;
  uStack_270 = uStack_230;
  uStack_238 = 0;
  plStack_240 = (long *)0x0;
  uStack_228 = 0;
  uStack_230 = 0;
  func_0x0001008dfe64(plVar10,&plStack_260,&plStack_280);
  if ((long *)0x1 < plStack_280) {
    do {
      lVar19 = *plStack_280;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_280,0x10);
      if (bVar4) {
        *plStack_280 = lVar19 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar19 + -1 == 0) {
      (*(code *)plStack_280[1])();
    }
  }
  if ((long *)0x1 < plStack_260) {
    do {
      lVar19 = *plStack_260;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_260,0x10);
      if (bVar4) {
        *plStack_260 = lVar19 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar19 + -1 == 0) {
      (*(code *)plStack_260[1])();
    }
  }
  if ((long *)0x1 < plStack_240) {
    do {
      lVar19 = *plStack_240;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_240,0x10);
      if (bVar4) {
        *plStack_240 = lVar19 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar19 + -1 == 0) {
      (*(code *)plStack_240[1])();
    }
  }
LAB_104a9eb58:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_218) {
    return;
  }
  ___stack_chk_fail();
LAB_104a9eb90:
  func_0x000104a9f324(plVar17);
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x104a9eb9c);
  (*pcVar7)();
}



/* Entry: 104a9e42c; end: 104a9e5e7;  */

void FUN_104a9e42c(long param_1,uint *param_2,undefined8 param_3,long param_4,long *param_5)

{
  ulong uVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  byte *pbVar8;
  uint *puVar9;
  long *plVar10;
  long lVar11;
  ulong *puVar12;
  int iVar13;
  byte *pbVar14;
  long **pplVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long *plVar20;
  ulong uVar21;
  undefined8 uVar22;
  ulong *puVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  ulong *puVar27;
  long *plVar28;
  uint3 uStack_234;
  long *plStack_230;
  ulong uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  char *pcStack_200;
  long *plStack_1f0;
  ulong uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1c8;
  undefined1 auStack_168 [32];
  long lStack_148;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  long lStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  long *plStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long *plStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long *plStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = (uint *)(*(long *)(param_1 + 0x20) + 8);
  if (*puVar9 < *param_2) {
    pplVar15 = (long **)(ulong)((*puVar9 - *param_2) + *(int *)(*(long *)(param_1 + 0x20) + 0x10) +
                               0x3e);
    lStack_68 = param_5[1];
    plStack_70 = (long *)*param_5;
    lStack_58 = param_5[3];
    lStack_60 = param_5[2];
    param_5[1] = 0;
    *param_5 = 0;
    param_5[3] = 0;
    param_5[2] = 0;
    FUN_104a9e06c(param_1,pplVar15,&plStack_70);
    plVar20 = plStack_70;
    if ((long *)0x1 < plStack_70) {
      do {
        lVar17 = *plStack_70;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plStack_70,0x10);
        if (bVar4) {
          *plStack_70 = lVar17 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar17 + -1 == 0) {
        (*(code *)plStack_70[1])();
      }
    }
  }
  else {
    if (*param_5 == 0) {
      uVar24 = (ulong)*(byte *)(param_5 + 1);
    }
    else {
      uVar24 = param_5[1];
    }
    func_0x0001008dfcf0(puVar9,param_4 + uVar24 + 0x20);
    *param_2 = (uint)puVar9;
    plStack_90 = (long *)0x1;
    lStack_a8 = param_5[1];
    plStack_b0 = (long *)*param_5;
    lStack_98 = param_5[3];
    lStack_a0 = param_5[2];
    param_5[1] = 0;
    *param_5 = 0;
    param_5[3] = 0;
    param_5[2] = 0;
    pplVar15 = &plStack_90;
    lStack_88 = param_4;
    uStack_80 = param_3;
    FUN_104a9dd3c(param_1,pplVar15,&plStack_b0);
    if ((long *)0x1 < plStack_b0) {
      do {
        lVar17 = *plStack_b0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plStack_b0,0x10);
        if (bVar4) {
          *plStack_b0 = lVar17 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar17 + -1 == 0) {
        (*(code *)plStack_b0[1])();
      }
    }
    plVar20 = plStack_90;
    if ((long *)0x1 < plStack_90) {
      do {
        lVar17 = *plStack_90;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
        if (bVar4) {
          *plStack_90 = lVar17 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar17 + -1 == 0) {
        (*(code *)plStack_90[1])();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pplVar15 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(&plStack_b0);
    func_0x0001004b6d90(&plStack_90);
  }
  plVar28 = plVar20;
  __Unwind_Resume();
  plStack_d0 = param_5;
  plStack_c8 = plVar20;
  puStack_c0 = &stack0xfffffffffffffff0;
  pcStack_b8 = FUN_104a9e5e8;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar13 = (int)plVar28[4] + 0x180;
  plVar20 = *pplVar15;
  if ((long *)0x1 < plVar20) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar4) {
        *plVar20 = *plVar20 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plStack_f8 = pplVar15[1];
  plVar28 = *pplVar15;
  plStack_e8 = pplVar15[3];
  plStack_f0 = pplVar15[2];
  plStack_100 = plVar28;
  FUN_104a9e42c();
  plVar20 = plStack_100;
  if ((long *)0x1 < plStack_100) {
    do {
      lVar17 = *plStack_100;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_100,0x10);
      if (bVar4) {
        *plStack_100 = lVar17 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar17 + -1 == 0) {
      (*(code *)plStack_100[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return;
  }
  ___stack_chk_fail();
  if (iVar13 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(&plStack_100);
  }
  __Unwind_Resume();
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (iVar13 < 0x130) {
    if (iVar13 != 200) {
      if (iVar13 == 0xcc) {
        plVar16 = (long *)0x9;
      }
      else {
        if (iVar13 != 0xce) goto LAB_104a9e778;
        plVar16 = (long *)0xa;
      }
      goto LAB_104a9e7f8;
    }
    func_0x0001008e016c(plVar20,1);
    plVar10 = (long *)plVar20[2];
    *(long *)(plVar20[3] + 0x10) = *(long *)(plVar20[3] + 0x10) + 1;
    plVar16 = (long *)0x1;
    func_0x0001008e01c0();
    *(undefined1 *)plVar10 = 0x88;
LAB_104a9e7bc:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
      return;
    }
  }
  else {
    if (iVar13 < 0x194) {
      if (iVar13 == 0x130) {
        plVar16 = (long *)0xb;
      }
      else {
        if (iVar13 != 400) {
LAB_104a9e778:
          lStack_148 = 1;
          FUN_104a7a584(auStack_168,iVar13);
          plVar16 = &lStack_148;
          func_0x0001008dfe64(plVar20,plVar16,auStack_168);
          func_0x0001004b6d90(auStack_168);
          plVar10 = &lStack_148;
          func_0x0001004b6d90();
          goto LAB_104a9e7bc;
        }
        plVar16 = (long *)0xc;
      }
    }
    else if (iVar13 == 0x194) {
      plVar16 = (long *)0xd;
    }
    else {
      if (iVar13 != 500) goto LAB_104a9e778;
      plVar16 = (long *)0xe;
    }
LAB_104a9e7f8:
    plVar10 = plVar20;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
      uVar6 = (uint)plVar16 - 0x7f;
      uVar24 = (ulong)uVar6;
      if ((uint)plVar16 < 0x7f) {
        uVar24 = 1;
      }
      else {
        func_0x0001008e186c();
      }
      func_0x0001008e016c(plVar20,uVar24 & 0xffffffff);
      pbVar8 = (byte *)plVar20[2];
      *(ulong *)(plVar20[3] + 0x10) = *(long *)(plVar20[3] + 0x10) + (uVar24 & 0xffffffff);
      func_0x0001008e01c0(pbVar8,uVar24 & 0xffffffff);
      if ((int)uVar24 == 1) {
        *pbVar8 = (byte)plVar16 | 0x80;
        return;
      }
      pbVar14 = pbVar8 + 1;
      *pbVar8 = 0xff;
      uVar5 = (int)uVar24 - 2;
      switch((ulong)uVar5) {
      case 4:
        pbVar8[5] = (byte)(uVar6 >> 0x1c) | 0x80;
      case 3:
        pbVar8[4] = (byte)(uVar6 >> 0x15) | 0x80;
      case 2:
        pbVar8[3] = (byte)(uVar6 >> 0xe) | 0x80;
      case 1:
        pbVar8[2] = (byte)(uVar6 >> 7) | 0x80;
      case 0:
        *pbVar14 = (byte)uVar6 | 0x80;
      default:
        pbVar14[uVar5] = pbVar14[uVar5] & 0x7f;
        return;
      }
    }
  }
  ___stack_chk_fail();
  func_0x0001004b6d90(auStack_168);
  func_0x0001004b6d90(&lStack_148);
  __Unwind_Resume();
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar20 = plVar10;
  func_0x000100460dc4();
  lVar17 = *plVar20;
  func_0x0001004671a4();
  _uStack_234 = -1;
  if ((((plVar16 != (long *)0x7fffffffffffffff) && (lVar17 != -0x7fffffffffffffff)) &&
      (_uStack_234 = 0, plVar16 != (long *)0x8000000000000000)) && (lVar17 != -0x8000000000000000))
  {
    if ((long)plVar16 < 1) {
      if (-0x8000000000000000 - (long)plVar16 <= -lVar17) goto LAB_104a9e8e8;
    }
    else if ((long)((ulong)plVar16 ^ 0x7fffffffffffffff) < -lVar17) {
      _uStack_234 = -1;
    }
    else {
LAB_104a9e8e8:
      _uStack_234 = (int)plVar16 - (int)lVar17;
    }
  }
  func_0x00010061b5d0();
  puVar9 = *(uint **)(plVar10[4] + 0x1d8);
  if (puVar9 != *(uint **)(plVar10[4] + 0x1e0)) {
    do {
      plVar16 = (long *)((ulong)plVar16 & 0xffffffff00000000 | (ulong)*puVar9);
      FUN_104adf744(&uStack_234,plVar16);
      lVar17 = plVar10[4];
      if (((-3.0 < (double)plVar28) && ((double)plVar28 <= 0.0)) &&
         (*(uint *)(lVar17 + 8) < puVar9[1])) {
        FUN_104a9d968(plVar10,(*(uint *)(lVar17 + 8) - puVar9[1]) + *(int *)(lVar17 + 0x10) + 0x3e);
        puVar19 = *(undefined8 **)(plVar10[4] + 0x1d8);
        uVar22 = *(undefined8 *)puVar9;
        *(undefined8 *)puVar9 = *puVar19;
        *puVar19 = uVar22;
        goto LAB_104a9eb58;
      }
      puVar9 = puVar9 + 2;
    } while (puVar9 != *(uint **)(lVar17 + 0x1e0));
    if (puVar9 != *(uint **)(lVar17 + 0x1d8)) {
      do {
        if (*(uint *)(lVar17 + 8) < puVar9[-1]) break;
        puVar9 = puVar9 + -2;
        *(uint **)(lVar17 + 0x1e0) = puVar9;
      } while (puVar9 != *(uint **)(lVar17 + 0x1d8));
    }
  }
  func_0x00010061b6f0(&plStack_1f0,&uStack_234);
  lVar17 = plVar10[4] + 8;
  uVar24 = uStack_1e8 & 0xff;
  if (plStack_1f0 != (long *)0x0) {
    uVar24 = uStack_1e8;
  }
  func_0x0001008dfcf0(lVar17,uVar24 + 0x2c);
  lVar25 = plVar10[4];
  uVar24 = (ulong)uStack_234;
  puVar23 = *(ulong **)(lVar25 + 0x1e0);
  if (puVar23 < *(ulong **)(lVar25 + 0x1e8)) {
    puVar27 = puVar23 + 1;
    *puVar23 = uVar24 | lVar17 << 0x20;
  }
  else {
    plVar16 = (long *)(lVar25 + 0x1d8);
    lVar26 = (long)puVar23 - *plVar16 >> 3;
    uVar1 = lVar26 + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_104a9eb90;
    uVar18 = (long)*(ulong **)(lVar25 + 0x1e8) - *plVar16;
    uVar21 = (long)uVar18 >> 2;
    if (uVar21 <= uVar1) {
      uVar21 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar18) {
      uVar21 = 0x1fffffffffffffff;
    }
    if (uVar21 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = lVar25 + 0x1e8;
      FUN_104a9f338();
    }
    puVar23 = (ulong *)(lVar11 + lVar26 * 8);
    puVar27 = puVar23 + 1;
    *puVar23 = uVar24 | lVar17 << 0x20;
    puVar2 = *(ulong **)(lVar25 + 0x1d8);
    puVar12 = *(ulong **)(lVar25 + 0x1e0);
    if (puVar12 != puVar2) {
      do {
        puVar12 = puVar12 + -1;
        puVar23 = puVar23 + -1;
        *puVar23 = *puVar12;
      } while (puVar12 != puVar2);
      puVar12 = (ulong *)*plVar16;
    }
    *(ulong **)(lVar25 + 0x1d8) = puVar23;
    *(ulong **)(lVar25 + 0x1e0) = puVar27;
    *(ulong *)(lVar25 + 0x1e8) = lVar11 + uVar21 * 8;
    if (puVar12 != (ulong *)0x0) {
      __ZdlPv();
    }
  }
  *(ulong **)(lVar25 + 0x1e0) = puVar27;
  plStack_210 = (long *)0x1;
  uStack_208 = 0xc;
  pcStack_200 = "grpc-timeout";
  uStack_228 = uStack_1e8;
  plStack_230 = plStack_1f0;
  uStack_218 = uStack_1d8;
  uStack_220 = uStack_1e0;
  uStack_1e8 = 0;
  plStack_1f0 = (long *)0x0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  func_0x0001008dfe64(plVar10,&plStack_210,&plStack_230);
  if ((long *)0x1 < plStack_230) {
    do {
      lVar17 = *plStack_230;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_230,0x10);
      if (bVar4) {
        *plStack_230 = lVar17 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar17 + -1 == 0) {
      (*(code *)plStack_230[1])();
    }
  }
  if ((long *)0x1 < plStack_210) {
    do {
      lVar17 = *plStack_210;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_210,0x10);
      if (bVar4) {
        *plStack_210 = lVar17 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar17 + -1 == 0) {
      (*(code *)plStack_210[1])();
    }
  }
  if ((long *)0x1 < plStack_1f0) {
    do {
      lVar17 = *plStack_1f0;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_1f0,0x10);
      if (bVar4) {
        *plStack_1f0 = lVar17 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar17 + -1 == 0) {
      (*(code *)plStack_1f0[1])();
    }
  }
LAB_104a9eb58:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
LAB_104a9eb90:
  func_0x000104a9f324(plVar16);
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x104a9eb9c);
  (*pcVar7)();
}



/* Entry: 104a9e5e8; end: 104a9e6c3;  */

void FUN_104a9e5e8(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  byte *pbVar8;
  long *plVar9;
  long lVar10;
  ulong *puVar11;
  int iVar12;
  byte *pbVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long *plVar18;
  ulong uVar19;
  undefined8 uVar20;
  ulong *puVar21;
  ulong uVar22;
  uint *puVar23;
  long lVar24;
  long lVar25;
  ulong *puVar26;
  long *plVar27;
  uint3 uStack_184;
  long *plStack_180;
  ulong uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  char *pcStack_150;
  long *plStack_140;
  ulong uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_118;
  undefined1 auStack_b8 [32];
  long lStack_98;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = *(long *)(param_1 + 0x20) + 0x180;
  plVar18 = (long *)*param_2;
  if ((long *)0x1 < plVar18) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar4) {
        *plVar18 = *plVar18 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_48 = param_2[1];
  plVar27 = (long *)*param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  plStack_50 = plVar27;
  FUN_104a9e42c(param_1,lVar15,"grpc-tags-bin",0xd,&plStack_50);
  iVar12 = (int)lVar15;
  plVar18 = plStack_50;
  if ((long *)0x1 < plStack_50) {
    do {
      lVar15 = *plStack_50;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar4) {
        *plStack_50 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar12 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(&plStack_50);
  }
  __Unwind_Resume();
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (iVar12 < 0x130) {
    if (iVar12 != 200) {
      if (iVar12 == 0xcc) {
        plVar14 = (long *)0x9;
      }
      else {
        if (iVar12 != 0xce) goto LAB_104a9e778;
        plVar14 = (long *)0xa;
      }
      goto LAB_104a9e7f8;
    }
    func_0x0001008e016c(plVar18,1);
    plVar9 = (long *)plVar18[2];
    *(long *)(plVar18[3] + 0x10) = *(long *)(plVar18[3] + 0x10) + 1;
    plVar14 = (long *)0x1;
    func_0x0001008e01c0();
    *(undefined1 *)plVar9 = 0x88;
LAB_104a9e7bc:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
      return;
    }
  }
  else {
    if (iVar12 < 0x194) {
      if (iVar12 == 0x130) {
        plVar14 = (long *)0xb;
      }
      else {
        if (iVar12 != 400) {
LAB_104a9e778:
          lStack_98 = 1;
          FUN_104a7a584(auStack_b8,iVar12);
          plVar14 = &lStack_98;
          func_0x0001008dfe64(plVar18,plVar14,auStack_b8);
          func_0x0001004b6d90(auStack_b8);
          plVar9 = &lStack_98;
          func_0x0001004b6d90();
          goto LAB_104a9e7bc;
        }
        plVar14 = (long *)0xc;
      }
    }
    else if (iVar12 == 0x194) {
      plVar14 = (long *)0xd;
    }
    else {
      if (iVar12 != 500) goto LAB_104a9e778;
      plVar14 = (long *)0xe;
    }
LAB_104a9e7f8:
    plVar9 = plVar18;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
      uVar6 = (uint)plVar14 - 0x7f;
      uVar22 = (ulong)uVar6;
      if ((uint)plVar14 < 0x7f) {
        uVar22 = 1;
      }
      else {
        func_0x0001008e186c();
      }
      func_0x0001008e016c(plVar18,uVar22 & 0xffffffff);
      pbVar8 = (byte *)plVar18[2];
      *(ulong *)(plVar18[3] + 0x10) = *(long *)(plVar18[3] + 0x10) + (uVar22 & 0xffffffff);
      func_0x0001008e01c0(pbVar8,uVar22 & 0xffffffff);
      if ((int)uVar22 == 1) {
        *pbVar8 = (byte)plVar14 | 0x80;
        return;
      }
      pbVar13 = pbVar8 + 1;
      *pbVar8 = 0xff;
      uVar5 = (int)uVar22 - 2;
      switch((ulong)uVar5) {
      case 4:
        pbVar8[5] = (byte)(uVar6 >> 0x1c) | 0x80;
      case 3:
        pbVar8[4] = (byte)(uVar6 >> 0x15) | 0x80;
      case 2:
        pbVar8[3] = (byte)(uVar6 >> 0xe) | 0x80;
      case 1:
        pbVar8[2] = (byte)(uVar6 >> 7) | 0x80;
      case 0:
        *pbVar13 = (byte)uVar6 | 0x80;
      default:
        pbVar13[uVar5] = pbVar13[uVar5] & 0x7f;
        return;
      }
    }
  }
  ___stack_chk_fail();
  func_0x0001004b6d90(auStack_b8);
  func_0x0001004b6d90(&lStack_98);
  __Unwind_Resume();
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar18 = plVar9;
  func_0x000100460dc4();
  lVar15 = *plVar18;
  func_0x0001004671a4();
  _uStack_184 = -1;
  if ((((plVar14 != (long *)0x7fffffffffffffff) && (lVar15 != -0x7fffffffffffffff)) &&
      (_uStack_184 = 0, plVar14 != (long *)0x8000000000000000)) && (lVar15 != -0x8000000000000000))
  {
    if ((long)plVar14 < 1) {
      if (-0x8000000000000000 - (long)plVar14 <= -lVar15) goto LAB_104a9e8e8;
    }
    else if ((long)((ulong)plVar14 ^ 0x7fffffffffffffff) < -lVar15) {
      _uStack_184 = -1;
    }
    else {
LAB_104a9e8e8:
      _uStack_184 = (int)plVar14 - (int)lVar15;
    }
  }
  func_0x00010061b5d0();
  puVar23 = *(uint **)(plVar9[4] + 0x1d8);
  if (puVar23 != *(uint **)(plVar9[4] + 0x1e0)) {
    do {
      plVar14 = (long *)((ulong)plVar14 & 0xffffffff00000000 | (ulong)*puVar23);
      FUN_104adf744(&uStack_184,plVar14);
      lVar15 = plVar9[4];
      if (((-3.0 < (double)plVar27) && ((double)plVar27 <= 0.0)) &&
         (*(uint *)(lVar15 + 8) < puVar23[1])) {
        FUN_104a9d968(plVar9,(*(uint *)(lVar15 + 8) - puVar23[1]) + *(int *)(lVar15 + 0x10) + 0x3e);
        puVar17 = *(undefined8 **)(plVar9[4] + 0x1d8);
        uVar20 = *(undefined8 *)puVar23;
        *(undefined8 *)puVar23 = *puVar17;
        *puVar17 = uVar20;
        goto LAB_104a9eb58;
      }
      puVar23 = puVar23 + 2;
    } while (puVar23 != *(uint **)(lVar15 + 0x1e0));
    if (puVar23 != *(uint **)(lVar15 + 0x1d8)) {
      do {
        if (*(uint *)(lVar15 + 8) < puVar23[-1]) break;
        puVar23 = puVar23 + -2;
        *(uint **)(lVar15 + 0x1e0) = puVar23;
      } while (puVar23 != *(uint **)(lVar15 + 0x1d8));
    }
  }
  func_0x00010061b6f0(&plStack_140,&uStack_184);
  lVar15 = plVar9[4] + 8;
  uVar22 = uStack_138 & 0xff;
  if (plStack_140 != (long *)0x0) {
    uVar22 = uStack_138;
  }
  func_0x0001008dfcf0(lVar15,uVar22 + 0x2c);
  lVar24 = plVar9[4];
  uVar22 = (ulong)uStack_184;
  puVar21 = *(ulong **)(lVar24 + 0x1e0);
  if (puVar21 < *(ulong **)(lVar24 + 0x1e8)) {
    puVar26 = puVar21 + 1;
    *puVar21 = uVar22 | lVar15 << 0x20;
  }
  else {
    plVar14 = (long *)(lVar24 + 0x1d8);
    lVar25 = (long)puVar21 - *plVar14 >> 3;
    uVar1 = lVar25 + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_104a9eb90;
    uVar16 = (long)*(ulong **)(lVar24 + 0x1e8) - *plVar14;
    uVar19 = (long)uVar16 >> 2;
    if (uVar19 <= uVar1) {
      uVar19 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar16) {
      uVar19 = 0x1fffffffffffffff;
    }
    if (uVar19 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = lVar24 + 0x1e8;
      FUN_104a9f338();
    }
    puVar21 = (ulong *)(lVar10 + lVar25 * 8);
    puVar26 = puVar21 + 1;
    *puVar21 = uVar22 | lVar15 << 0x20;
    puVar2 = *(ulong **)(lVar24 + 0x1d8);
    puVar11 = *(ulong **)(lVar24 + 0x1e0);
    if (puVar11 != puVar2) {
      do {
        puVar11 = puVar11 + -1;
        puVar21 = puVar21 + -1;
        *puVar21 = *puVar11;
      } while (puVar11 != puVar2);
      puVar11 = (ulong *)*plVar14;
    }
    *(ulong **)(lVar24 + 0x1d8) = puVar21;
    *(ulong **)(lVar24 + 0x1e0) = puVar26;
    *(ulong *)(lVar24 + 0x1e8) = lVar10 + uVar19 * 8;
    if (puVar11 != (ulong *)0x0) {
      __ZdlPv();
    }
  }
  *(ulong **)(lVar24 + 0x1e0) = puVar26;
  plStack_160 = (long *)0x1;
  uStack_158 = 0xc;
  pcStack_150 = "grpc-timeout";
  uStack_178 = uStack_138;
  plStack_180 = plStack_140;
  uStack_168 = uStack_128;
  uStack_170 = uStack_130;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  func_0x0001008dfe64(plVar9,&plStack_160,&plStack_180);
  if ((long *)0x1 < plStack_180) {
    do {
      lVar15 = *plStack_180;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_180,0x10);
      if (bVar4) {
        *plStack_180 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 + -1 == 0) {
      (*(code *)plStack_180[1])();
    }
  }
  if ((long *)0x1 < plStack_160) {
    do {
      lVar15 = *plStack_160;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_160,0x10);
      if (bVar4) {
        *plStack_160 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 + -1 == 0) {
      (*(code *)plStack_160[1])();
    }
  }
  if ((long *)0x1 < plStack_140) {
    do {
      lVar15 = *plStack_140;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_140,0x10);
      if (bVar4) {
        *plStack_140 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 + -1 == 0) {
      (*(code *)plStack_140[1])();
    }
  }
LAB_104a9eb58:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
LAB_104a9eb90:
  func_0x000104a9f324(plVar14);
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x104a9eb9c);
  (*pcVar7)();
}


