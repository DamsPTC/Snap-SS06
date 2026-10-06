/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b97c4e4; end: 10b97c50f;  */

undefined8 * FUN_10b97c4e4(undefined8 *param_1)

{
  func_0x00010b97ea54(&PTR_FUN_110d7c628);
  func_0x00010b97f24c();
  *param_1 = &PTR_DAT_110d7bd68;
  FUN_10b978fe0(param_1 + 2);
  return param_1;
}



/* Entry: 10b97c510; end: 10b97c54b;  */

void FUN_10b97c510(undefined8 param_1)

{
  func_0x00010b97ef88();
  func_0x00010b97ec0c(param_1,&UNK_10f7cd1c3);
  func_0x00010b97e930();
  func_0x00010b97e96c();
  return;
}



/* Entry: 10b97c54c; end: 10b97c553;  */

void FUN_10b97c54c(void)

{
  return;
}



/* Entry: 10b97c554; end: 10b97c5db;  */

undefined8 FUN_10b97c554(long param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined1 auStack_40 [16];
  
  func_0x00010b97f2b8();
  uVar1 = **(undefined8 **)(param_1 + 0x18);
  func_0x00010b97eb00(uVar1);
  func_0x00010b97eba0(auStack_40);
  if (*(char *)(unaff_x19 + 8) == '\x01') {
    func_0x00010b97f28c();
    func_0x00010b97f2d0();
    FUN_10b97c5e0();
    func_0x000107c3a01c();
  }
  else {
    uVar1 = 0;
  }
  func_0x00010b97ec28();
  return uVar1;
}



/* Entry: 10b97c5dc; end: 10b97c5df;  */

char FUN_10b97c5dc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  func_0x000107c3a0c8();
  func_0x00010b97eb00(**(undefined8 **)(param_1 + 0x20));
  func_0x00010b97f214(auStack_40);
  cVar1 = *(char *)(param_4 + 8);
  if (cVar1 == '\x01') {
    func_0x0001080ee31c(*(long *)(unaff_x20 + 8) + 0x10);
    FUN_10b9a9084();
  }
  func_0x00010b97ec9c();
  return cVar1;
}



/* Entry: 10b97c5e0; end: 10b97c66b;  */

char FUN_10b97c5e0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  func_0x000107c3a0c8();
  func_0x00010b97eb00(**(undefined8 **)(param_1 + 0x20));
  func_0x00010b97f214(auStack_40);
  cVar1 = *(char *)(param_4 + 8);
  if (cVar1 == '\x01') {
    func_0x0001080ee31c(*(long *)(unaff_x20 + 8) + 0x10);
    FUN_10b9a9084();
  }
  func_0x00010b97ec9c();
  return cVar1;
}



/* Entry: 10b97c66c; end: 10b97c66f;  */

undefined8 * FUN_10b97c66c(undefined8 *param_1)

{
  func_0x00010b97ea54(&PTR_FUN_110d7c6e8);
  func_0x00010b97f24c();
  *param_1 = &PTR_DAT_110d7bd68;
  FUN_10b978fe0(param_1 + 2);
  return param_1;
}



/* Entry: 10b97c670; end: 10b97c683;  */

void FUN_10b97c670(void)

{
  FUN_10b97c9b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b97c684; end: 10b97c8eb;  */

void FUN_10b97c684(void)

{
  ulong uVar1;
  undefined1 in_ZR;
  long lVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x8_02;
  int extraout_w10;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_180 [32];
  undefined **ppuStack_160;
  long lStack_138;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined8 uStack_68;
  
  func_0x00010b97e998();
  func_0x000107c39f9c();
  uStack_68 = extraout_x8;
  func_0x00010b97ea74(&lStack_90);
  func_0x00010b90d86c();
  if ((*(byte *)(unaff_x20 + 8) & 1) == 0) {
    func_0x00010b97e858();
    func_0x00010b97eb5c();
  }
  else {
    func_0x00010b97e960();
    (**(code **)(extraout_x8_00 + 0xc0))(&uStack_a0);
    lVar2 = lStack_90;
    if ((*(byte *)(unaff_x20 + 8) & 1) == 0) {
      func_0x00010b97e878();
      FUN_10b97c9dc();
    }
    else {
      uVar3 = 0;
      while( true ) {
        uVar1 = *(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18) >> 4;
        in_ZR = uVar3 == uVar1;
        if (uVar1 <= uVar3) break;
        FUN_10b9a9358(&uStack_88,*(long *)(lVar2 + 0x18) + uVar3 * 0x10);
        func_0x00010b97f184();
        func_0x00010b97e9ac(*(undefined8 *)(unaff_x21 + 0x18),*(long *)(lVar2 + 0x18) + uVar3 * 0x10
                           );
        func_0x00010b97eb18(&uStack_e0);
        if ((*(byte *)(unaff_x20 + 8) & 1) == 0) {
          func_0x00010b97e878();
          FUN_10b97c9dc();
LAB_10b97c834:
          func_0x00010b97ed1c();
          goto LAB_10b97c838;
        }
        func_0x00010b97efdc(*(undefined8 *)(lVar2 + 0x18),*(undefined8 *)(unaff_x21 + 0x20));
        func_0x00010b97edc8(&uStack_f0);
        if ((*(byte *)(unaff_x20 + 8) & 1) == 0) {
LAB_10b97c800:
          func_0x00010b97e878();
          FUN_10b97c9dc();
          func_0x00010b97eb20();
          goto LAB_10b97c834;
        }
        uStack_88 = uStack_e0;
        uStack_80 = uStack_d8;
        uStack_e0 = 0;
        uStack_d8 = 0;
        uStack_78 = uStack_f0;
        uStack_70 = uStack_e8;
        func_0x00010b97f2a4(*(undefined8 *)(unaff_x21 + 0x10));
        (*extraout_x8_01)();
        lVar4 = 0x10;
        do {
          FUN_10b982a50((long)&uStack_88 + lVar4);
          lVar4 = lVar4 + -0x10;
        } while (lVar4 != -0x10);
        in_ZR = 1;
        if ((*(byte *)(unaff_x20 + 8) & 1) == 0) goto LAB_10b97c800;
        func_0x00010b97eb20();
        func_0x00010b97ed1c();
        uVar3 = uVar3 + 2;
      }
      *unaff_x19 = uStack_a0;
      *(undefined1 *)(unaff_x19 + 1) = uStack_98;
      uStack_a0 = 0;
      uStack_98 = 0;
    }
LAB_10b97c838:
    FUN_10b982a50(&uStack_a0);
  }
  lVar2 = lStack_90;
  func_0x00010529d1ac();
  func_0x000107c39f7c(uStack_68);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b97ed1c();
    FUN_10b982a50(&uStack_a0);
    func_0x00010529d1ac(lStack_90);
    func_0x00010b97e910();
    func_0x00010b97e974();
    func_0x00010529d1b8();
    ppuStack_160 = &PTR_FUN_110d7c750;
    func_0x00010b97f054();
    func_0x00010b97eb94(*(undefined8 *)(extraout_x8_02 + 0xd0));
    if ((*(byte *)(unaff_x20 + 8) & 1) == 0) {
      func_0x00010b97ec0c();
      func_0x00010b97ec40();
      func_0x00010b97e96c();
    }
    else {
      if ((lStack_138 != 0) && (*(long *)(lStack_138 + 0x10) != 0)) {
        do {
          func_0x000107c39fdc();
        } while (extraout_w10 != 0);
      }
      func_0x00010b9a8f78(lVar2,auStack_180);
      func_0x00010b97eef8();
    }
    func_0x00010b97ee24();
    return;
  }
  return;
}



/* Entry: 10b97c8ec; end: 10b97c9af;  */

void FUN_10b97c8ec(void)

{
  long extraout_x8;
  int extraout_w10;
  long unaff_x20;
  long lStack_48;
  
  func_0x00010b97e974();
  func_0x00010529d1b8();
  func_0x00010b97f054();
  func_0x00010b97eb94(*(undefined8 *)(extraout_x8 + 0xd0));
  if ((*(byte *)(unaff_x20 + 8) & 1) == 0) {
    func_0x00010b97ec0c();
    func_0x00010b97ec40();
    func_0x00010b97e96c();
  }
  else {
    if ((lStack_48 != 0) && (*(long *)(lStack_48 + 0x10) != 0)) {
      do {
        func_0x000107c39fdc();
      } while (extraout_w10 != 0);
    }
    func_0x00010b9a8f78();
    func_0x00010b97eef8();
  }
  func_0x00010b97ee24();
  return;
}



/* Entry: 10b97c9b0; end: 10b97c9db;  */

undefined8 * FUN_10b97c9b0(undefined8 *param_1)

{
  func_0x00010b97ea54(&PTR_FUN_110d7c6e8);
  func_0x00010b97f24c();
  *param_1 = &PTR_DAT_110d7bd68;
  FUN_10b978fe0(param_1 + 2);
  return param_1;
}



/* Entry: 10b97c9dc; end: 10b97ca17;  */

void FUN_10b97c9dc(undefined8 param_1)

{
  func_0x00010b97ef88();
  func_0x00010b97ec0c(param_1,&UNK_10f7cd1f5);
  func_0x00010b97e930();
  func_0x00010b97e96c();
  return;
}



/* Entry: 10b97ca18; end: 10b97ca1f;  */

void FUN_10b97ca18(void)

{
  return;
}



/* Entry: 10b97ca20; end: 10b97cb27;  */

byte FUN_10b97ca20(long param_1)

{
  byte bVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined1 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  func_0x000107c3a09c();
  func_0x00010b97eb00(**(undefined8 **)(param_1 + 0x18));
  func_0x00010b97eb80(auStack_50);
  uVar2 = **(undefined8 **)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  FUN_10b9a9358(auStack_98,auStack_50);
  uStack_88 = 0;
  uStack_80 = 2;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_90 = uVar3;
  puStack_78 = auStack_98;
  func_0x00010b97eb80(auStack_60,uVar2,0);
  func_0x000107c3a01c();
  bVar1 = *(byte *)(unaff_x20 + 8);
  if ((bVar1 & 1) != 0) {
    func_0x00010529d3d8(*(long *)(param_1 + 8) + 0x18,auStack_50);
    func_0x00010529d3d8(*(long *)(param_1 + 8) + 0x18,auStack_60);
  }
  func_0x00010b97ec94();
  FUN_10b9a8d98(auStack_50);
  return bVar1;
}



/* Entry: 10b97cb28; end: 10b97cbdb;  */

char FUN_10b97cb28(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  long lVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined1 auStack_40 [16];
  
  uStack_70 = *(undefined8 *)(param_1 + 0x10);
  uStack_68 = 0;
  uStack_60 = 2;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_58 = param_2;
  func_0x00010b97eb00(**(undefined8 **)(param_1 + 0x20));
  func_0x00010b97eb80(auStack_40);
  cVar1 = *(char *)(param_4 + 8);
  if (cVar1 == '\x01') {
    lVar2 = *(long *)(param_1 + 8);
    FUN_10b9a8e18(&uStack_70,param_2);
    func_0x00010b97f0d8(lVar2 + 0x18);
    func_0x00010b97eb4c();
    func_0x00010529d3d8(*(long *)(param_1 + 8) + 0x18,auStack_40);
  }
  func_0x00010b97ec9c();
  return cVar1;
}



/* Entry: 10b97cbdc; end: 10b97cbdf;  */

undefined8 * FUN_10b97cbdc(undefined8 *param_1)

{
  func_0x00010b97edd8(&PTR_FUN_110d7c798);
  *param_1 = &PTR_DAT_110d7bd68;
  FUN_10b978fe0(param_1 + 2);
  return param_1;
}



/* Entry: 10b97cbe0; end: 10b97cbf3;  */

void FUN_10b97cbe0(void)

{
  FUN_10b97ce6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b97cbf4; end: 10b97cdb3;  */

void FUN_10b97cbf4(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x8_02;
  int extraout_w10;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar4;
  ulong uVar5;
  undefined1 auStack_150 [24];
  undefined **ppuStack_138;
  long lStack_118;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined8 uStack_90;
  undefined1 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined8 uStack_68;
  
  func_0x00010b97e998();
  func_0x000107c39f9c();
  uStack_68 = extraout_x8;
  func_0x00010b97ea74(&lStack_80);
  func_0x00010b90d86c();
  if ((*(byte *)(unaff_x20 + 8) & 1) == 0) {
    func_0x00010b97e858();
    func_0x00010b97eb5c();
  }
  else {
    func_0x00010b97e960();
    (**(code **)(extraout_x8_00 + 0xc0))(&uStack_90);
    lVar3 = lStack_80;
    if ((*(byte *)(unaff_x20 + 8) & 1) == 0) {
      func_0x00010b97e878();
      FUN_10b97ce94();
    }
    else {
      lVar4 = 0;
      uVar5 = 0;
      while( true ) {
        lVar2 = *(long *)(lVar3 + 0x18);
        uVar1 = *(long *)(lVar3 + 0x20) - lVar2 >> 4;
        in_ZR = uVar5 == uVar1;
        if (uVar1 <= uVar5) break;
        FUN_10b9a9358(&uStack_d0,lVar2 + lVar4);
        func_0x000107c3a0ac();
        FUN_10b97efdc(*(undefined8 *)(unaff_x21 + 0x18));
        func_0x00010b97edc8(&uStack_d0);
        if ((*(byte *)(unaff_x20 + 8) & 1) == 0) {
LAB_10b97cd20:
          func_0x00010b97e878();
          FUN_10b97ce94();
          func_0x00010b97eb20();
          goto LAB_10b97cd48;
        }
        uStack_78 = uStack_d0;
        uStack_70 = uStack_c8;
        func_0x00010b97f2a4(*(undefined8 *)(unaff_x21 + 0x10));
        (*extraout_x8_01)();
        func_0x00010b97ee84();
        if ((*(byte *)(unaff_x20 + 8) & 1) == 0) goto LAB_10b97cd20;
        func_0x00010b97eb20();
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + 0x10;
      }
      *unaff_x19 = uStack_90;
      *(undefined1 *)(unaff_x19 + 1) = uStack_88;
      uStack_90 = 0;
      uStack_88 = 0;
    }
LAB_10b97cd48:
    func_0x00010b97ef00();
  }
  func_0x00010529d1ac();
  func_0x000107c39f7c(uStack_68);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b97eb20();
    func_0x00010b97ef00();
    func_0x00010529d1ac(lStack_80);
    func_0x00010b97e910();
    func_0x00010b97e974();
    func_0x00010529d1b8();
    ppuStack_138 = &PTR_FUN_110d7c800;
    func_0x00010b97f054();
    func_0x00010b97eb94(*(undefined8 *)(extraout_x8_02 + 0xd0));
    if ((*(byte *)(unaff_x20 + 8) & 1) == 0) {
      func_0x0001080e3e74(auStack_150,&UNK_10f7cd26a);
      func_0x00010b97ec40();
      func_0x00010b97ee64();
    }
    else {
      if ((lStack_118 != 0) && (*(long *)(lStack_118 + 0x10) != 0)) {
        do {
          func_0x000107c39fdc();
        } while (extraout_w10 != 0);
      }
      func_0x00010b97e9f8();
      func_0x00010b97eef8();
    }
    func_0x00010b97ee24();
    return;
  }
  return;
}



/* Entry: 10b97cdb4; end: 10b97ce6b;  */

void FUN_10b97cdb4(void)

{
  long extraout_x8;
  int extraout_w10;
  long unaff_x20;
  undefined1 auStack_80 [24];
  undefined **ppuStack_68;
  long lStack_48;
  
  func_0x00010b97e974();
  func_0x00010529d1b8();
  ppuStack_68 = &PTR_FUN_110d7c800;
  func_0x00010b97f054();
  func_0x00010b97eb94(*(undefined8 *)(extraout_x8 + 0xd0));
  if ((*(byte *)(unaff_x20 + 8) & 1) == 0) {
    func_0x0001080e3e74(auStack_80,&UNK_10f7cd26a);
    func_0x00010b97ec40();
    func_0x00010b97ee64();
  }
  else {
    if ((lStack_48 != 0) && (*(long *)(lStack_48 + 0x10) != 0)) {
      do {
        func_0x000107c39fdc();
      } while (extraout_w10 != 0);
    }
    func_0x00010b97e9f8();
    func_0x00010b97eef8();
  }
  func_0x00010b97ee24();
  return;
}



/* Entry: 10b97ce6c; end: 10b97ce93;  */

undefined8 * FUN_10b97ce6c(undefined8 *param_1)

{
  func_0x00010b97edd8(&PTR_FUN_110d7c798);
  *param_1 = &PTR_DAT_110d7bd68;
  FUN_10b978fe0(param_1 + 2);
  return param_1;
}



/* Entry: 10b97ce94; end: 10b97cecf;  */

void FUN_10b97ce94(undefined8 param_1)

{
  func_0x00010b97ef88();
  func_0x00010b97ec0c(param_1,&UNK_10f7cd24d);
  func_0x00010b97e930();
  func_0x00010b97e96c();
  return;
}



/* Entry: 10b97ced0; end: 10b97ced7;  */

void FUN_10b97ced0(void)

{
  return;
}



/* Entry: 10b97ced8; end: 10b97cf3f;  */

char FUN_10b97ced8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  undefined1 auStack_30 [16];
  
  func_0x00010b97eb00(**(undefined8 **)(param_1 + 0x18),param_2,param_2,
                      *(undefined8 *)(param_1 + 0x10));
  func_0x00010b97eb80(auStack_30);
  cVar1 = *(char *)(param_4 + 8);
  if (cVar1 == '\x01') {
    func_0x00010b97f0d8(*(long *)(param_1 + 8) + 0x18);
  }
  func_0x00010b97eb4c();
  return cVar1;
}



/* Entry: 10b97cf40; end: 10b97cf7f;  */

undefined8 FUN_10b97cf40(long param_1)

{
  long lVar1;
  undefined1 auStack_30 [16];
  
  lVar1 = *(long *)(param_1 + 8);
  FUN_10b9a8e18(auStack_30);
  func_0x00010b97f0d8(lVar1 + 0x18);
  func_0x00010b97eb4c();
  return 1;
}



/* Entry: 10b97cf80; end: 10b97cf83;  */

undefined8 * FUN_10b97cf80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7c848;
  FUN_10b972f18(param_1 + 5);
  FUN_10b972f18(param_1 + 4);
  FUN_10b979cb8(param_1 + 3);
  *param_1 = &PTR_DAT_110d7bd68;
  FUN_10b978fe0(param_1 + 2);
  return param_1;
}



/* Entry: 10b97cf84; end: 10b97cf97;  */

void FUN_10b97cf84(void)

{
  FUN_10b97d204();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b97cf98; end: 10b97d137;  */

void FUN_10b97cf98(void)

{
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  undefined1 uStack_40;
  long lStack_38;
  
  func_0x00010b97e998();
  func_0x00010b97ea74(&lStack_38);
  func_0x00010b90dfb8();
  if ((*(byte *)(unaff_x20 + 8) & 1) == 0) {
    func_0x00010b97e858();
    func_0x00010b97eb5c();
  }
  else {
    func_0x00010b97e960();
    (**(code **)(extraout_x8 + 0xa0))(&uStack_48);
    if ((*(byte *)(unaff_x20 + 8) & 1) == 0) {
      func_0x0001080e3e74(auStack_60,&UNK_10f7cd2d1);
      func_0x00010b97e878();
      FUN_10b97909c();
      func_0x00010b97eb28();
    }
    else {
      if (*(char *)(lStack_38 + 0x30) == '\x01') {
        func_0x00010b97e960();
        func_0x00010b97eb18(auStack_70);
        FUN_10b97efdc(*(undefined8 *)(unaff_x21 + 0x20));
        func_0x00010b97edc8(auStack_80);
        func_0x00010b97e960();
        func_0x00010b97ed40(*(undefined8 *)(extraout_x8_00 + 0xa8));
      }
      else {
        func_0x00010b97e960();
        func_0x00010b97eb18(auStack_70);
        FUN_10b97efdc(*(undefined8 *)(unaff_x21 + 0x28));
        func_0x00010b97edc8(auStack_80);
        func_0x00010b97e960();
        func_0x00010b97ed40(*(undefined8 *)(extraout_x8_01 + 0xa8));
      }
      func_0x00010b97eb20();
      func_0x00010b97ed1c();
      *unaff_x19 = uStack_48;
      *(undefined1 *)(unaff_x19 + 1) = uStack_40;
      uStack_48 = 0;
      uStack_40 = 0;
    }
    func_0x00010b97eeb4();
  }
  func_0x0001052a08ec(lStack_38);
  return;
}



/* Entry: 10b97d138; end: 10b97d203;  */

void FUN_10b97d138(void)

{
  long extraout_x8;
  int extraout_w10;
  long unaff_x20;
  undefined1 auStack_90 [24];
  undefined **ppuStack_78;
  long lStack_48;
  
  func_0x00010b97e974();
  func_0x0001052a040c();
  ppuStack_78 = &PTR_FUN_110d7c8b0;
  func_0x00010b97f054();
  func_0x00010b97eb94(*(undefined8 *)(extraout_x8 + 0xb8));
  if ((*(byte *)(unaff_x20 + 8) & 1) == 0) {
    func_0x0001080e3e74(auStack_90,&UNK_10f7cd2ef);
    func_0x00010b97ec40();
    func_0x00010b97ee64();
  }
  else {
    if ((lStack_48 != 0) && (*(long *)(lStack_48 + 0x10) != 0)) {
      do {
        func_0x000107c39fdc();
      } while (extraout_w10 != 0);
    }
    func_0x00010b97e9f8();
    func_0x00010b97eef8();
  }
  func_0x0001052a08ec(lStack_48);
  return;
}



/* Entry: 10b97d204; end: 10b97d247;  */

undefined8 * FUN_10b97d204(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7c848;
  FUN_10b972f18(param_1 + 5);
  FUN_10b972f18(param_1 + 4);
  FUN_10b979cb8(param_1 + 3);
  *param_1 = &PTR_DAT_110d7bd68;
  FUN_10b978fe0(param_1 + 2);
  return param_1;
}



/* Entry: 10b97d248; end: 10b97d24f;  */

void FUN_10b97d248(void)

{
  return;
}



/* Entry: 10b97d250; end: 10b97d2bf;  */

undefined8 FUN_10b97d250(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [16];
  
  func_0x00010b97f2b8();
  uVar1 = **(undefined8 **)(param_1 + 0x18);
  FUN_10b979c18(auStack_40,uVar1);
  func_0x00010b97f28c();
  func_0x00010b97f2d0();
  FUN_10b97d2c0();
  func_0x000107c3a01c();
  func_0x00010b97ec28();
  return uVar1;
}



/* Entry: 10b97d2c0; end: 10b97d3cf;  */

undefined8 FUN_10b97d2c0(undefined8 param_1,long *param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  undefined1 auStack_40 [16];
  
  func_0x00010b97eca4();
  lVar3 = *param_2;
  if (lVar3 == 0) {
    uVar2 = 0;
    puVar1 = &UNK_10f7d0ef0;
  }
  else {
    puVar1 = (undefined *)(lVar3 + 0x18);
    uVar2 = *(undefined4 *)(lVar3 + 0xc);
  }
  func_0x00010812e298(puVar1,uVar2,"result",6);
  if ((int)puVar1 == 0) {
    lVar3 = *unaff_x22;
    if (lVar3 == 0) {
      uVar2 = 0;
      puVar1 = &UNK_10f7d0ef0;
    }
    else {
      puVar1 = (undefined *)(lVar3 + 0x18);
      uVar2 = *(undefined4 *)(lVar3 + 0xc);
    }
    func_0x00010812e298(puVar1,uVar2,"error",5);
    if ((int)puVar1 == 0) {
      return 0;
    }
    func_0x00010b97eb00(**(undefined8 **)(unaff_x20 + 0x28));
    func_0x00010b97eba0(auStack_40);
    lVar3 = *(long *)(unaff_x20 + 8) + 0x28;
  }
  else {
    func_0x00010b97eb00(**(undefined8 **)(unaff_x20 + 0x20));
    func_0x00010b97eba0(auStack_40);
    lVar3 = *(long *)(unaff_x20 + 8) + 0x18;
  }
  FUN_10b9a9020(lVar3,auStack_40);
  func_0x00010b97eb4c();
  if ((*(byte *)(param_4 + 8) & 1) == 0) {
    return 0;
  }
  return 1;
}



/* Entry: 10b97d3d0; end: 10b97d3d3;  */

undefined8 * FUN_10b97d3d0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d7bd68;
  FUN_10b978fe0(param_1 + 2);
  return param_1;
}



/* Entry: 10b97d3d4; end: 10b97d3e7;  */

void FUN_10b97d3d4(void)

{
  FUN_10b978d50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b97d3e8; end: 10b97d427;  */

void FUN_10b97d3e8(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
  long extraout_x8;
  uint extraout_w9;
  
  func_0x00010b97e670();
  FUN_10b9aaa6c();
  func_0x00010b97e868();
  if ((extraout_w9 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b97ec24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(extraout_x8 + 0xd8))();
    return;
  }
  func_0x00010b97eb88();
                    /* WARNING: Could not recover jumptable at 0x00010b97e7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10b97d428; end: 10b97d44b;  */

void FUN_10b97d428(void)

{
  long extraout_x8;
  
  func_0x00010b97e6b0();
  func_0x00010b97f148(*(undefined8 *)(extraout_x8 + 400));
  func_0x00010b97ef68();
  return;
}



/* Entry: 10b97d44c; end: 10b97d44f;  */

undefined8 * FUN_10b97d44c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7c960;
  func_0x0001089d9338(param_1 + 3);
  *param_1 = &PTR_DAT_110d7bd68;
  FUN_10b978fe0(param_1 + 2);
  return param_1;
}



/* Entry: 10b97d450; end: 10b97d463;  */

void FUN_10b97d450(void)

{
  FUN_10b97d53c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b97d464; end: 10b97d4d3;  */

void FUN_10b97d464(undefined8 param_1,undefined8 param_2)

{
  undefined8 extraout_x8;
  undefined8 uStack_48;
  
  func_0x00010b97f2b8();
  FUN_10b9a96d0(&uStack_48,param_2);
  func_0x000104bdb3b0(uStack_48);
  func_0x00010b97e960();
  func_0x00010b97eba0(extraout_x8);
  return;
}



/* Entry: 10b97d4d4; end: 10b97d53b;  */

void FUN_10b97d4d4(void)

{
  undefined8 uStack_40;
  long alStack_38 [3];
  
  func_0x00010b97e6b0();
  func_0x00010b97ef40();
  func_0x0001052c4b44(&uStack_40,&UNK_10e5fc368,alStack_38);
  func_0x00010b9a8f90();
  func_0x000104bdb3b0(uStack_40);
  if (alStack_38[0] != 0) {
    func_0x00010b97e7b8();
  }
  return;
}



/* Entry: 10b97d53c; end: 10b97d567;  */

undefined8 * FUN_10b97d53c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7c960;
  func_0x0001089d9338(param_1 + 3);
  *param_1 = &PTR_DAT_110d7bd68;
  FUN_10b978fe0(param_1 + 2);
  return param_1;
}



/* Entry: 10b97d568; end: 10b97d56b;  */

undefined8 * FUN_10b97d568(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7c9c8;
  FUN_10b9762c8(param_1 + 4);
  FUN_10b905568(param_1 + 3);
  *param_1 = &PTR_DAT_110d7bd68;
  FUN_10b978fe0(param_1 + 2);
  return param_1;
}



/* Entry: 10b97d56c; end: 10b97d57f;  */

void FUN_10b97d56c(void)

{
  FUN_10b97d720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b97d580; end: 10b97d6cf;  */

void FUN_10b97d580(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x21;
  ulong uVar4;
  long lStack_90;
  undefined *puStack_88;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  plVar1 = &lStack_90;
  uVar2 = param_2;
  func_0x00010b97eb0c();
  uVar4 = 0;
  while( true ) {
    uVar3 = *(ulong *)(unaff_x21 + 0x18);
    if (*(ulong *)(uVar3 + 0x28) <= uVar4) {
      FUN_10b9a9894(&lStack_90,param_2);
      func_0x000107c27e5c();
      puStack_70 = (undefined1 *)plVar1;
      uStack_68 = uVar2;
      func_0x000107c2793c(&UNK_10f7cd32d);
      func_0x00010b97e9e4(&ppuStack_58);
      if (-1 < (char)bStack_41) {
        uStack_50 = (ulong)bStack_41;
        ppuStack_58 = &ppuStack_58;
      }
      FUN_10b99ffd4(param_4,ppuStack_58,uStack_50);
      func_0x000107c3a090();
      func_0x00010b97eb54();
      lStack_90 = *(long *)(unaff_x21 + 0x18) + 0x10;
      puStack_88 = &UNK_1003ab990;
      func_0x000107c2793c(&UNK_10f7cd344);
      func_0x000107c3a054(&ppuStack_58);
      func_0x00010b97e8e8();
      func_0x000107c3a090();
      return;
    }
    uVar2 = param_2;
    FUN_10b9a9100();
    if ((uVar3 & 1) != 0) break;
    uVar4 = uVar4 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010b97d6a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(unaff_x21 + 0x20) + 0x20))
            (*(long **)(unaff_x21 + 0x20),uVar4,*(undefined1 *)(unaff_x21 + 0x28),param_4);
  return;
}



/* Entry: 10b97d6d0; end: 10b97d71f;  */

void FUN_10b97d6d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010b97d6ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x28))
            (*(long **)(param_1 + 0x20),param_3,*(undefined1 *)(param_1 + 0x28),param_5);
  return;
}



/* Entry: 10b97d720; end: 10b97d75b;  */

undefined8 * FUN_10b97d720(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7c9c8;
  FUN_10b9762c8(param_1 + 4);
  FUN_10b905568(param_1 + 3);
  *param_1 = &PTR_DAT_110d7bd68;
  FUN_10b978fe0(param_1 + 2);
  return param_1;
}



/* Entry: 10b97d75c; end: 10b97d75f;  */

undefined8 * FUN_10b97d75c(undefined8 *param_1)

{
  func_0x00010b97edd8(&PTR_FUN_110d7ca30);
  *param_1 = &PTR_DAT_110d7bd68;
  FUN_10b978fe0(param_1 + 2);
  return param_1;
}



/* Entry: 10b97d760; end: 10b97d773;  */

void FUN_10b97d760(void)

{
  func_0x00010b97d850();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b97d774; end: 10b97d7e7;  */

void FUN_10b97d774(void)

{
  long in_x3;
  long unaff_x21;
  undefined8 uStack_38;
  
  func_0x00010b97ecb0();
  func_0x00010b97ea74(&uStack_38);
  func_0x00010b90e6f8();
  if ((*(byte *)(in_x3 + 8) & 1) == 0) {
    func_0x00010b97e9ac();
    func_0x00010b97eb5c();
  }
  else {
    func_0x00010b97eb18(*(undefined8 *)(unaff_x21 + 0x10),&uStack_38,unaff_x21 + 0x18);
  }
  func_0x0001052b2c50(uStack_38);
  return;
}



/* Entry: 10b97d7e8; end: 10b97d877;  */

void FUN_10b97d7e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  int extraout_w10;
  long alStack_30 [2];
  
  (**(code **)(**(long **)(param_1 + 0x10) + 0x188))
            (alStack_30,*(long **)(param_1 + 0x10),param_3,param_1 + 0x18);
  if ((alStack_30[0] != 0) && (*(long *)(alStack_30[0] + 0x10) != 0)) {
    do {
      func_0x000107c39fdc();
    } while (extraout_w10 != 0);
  }
  func_0x00010b97e9f8();
  func_0x00010b97eef8();
  func_0x0001052b2c50(alStack_30[0]);
  return;
}



/* Entry: 10b97d878; end: 10b97d8e7;  */

void FUN_10b97d878(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long unaff_x19;
  long unaff_x22;
  
  func_0x000107c39f94();
  FUN_10b97d8e8();
  lVar1 = *(long *)(unaff_x19 + 0x28);
  if (lVar1 != 0) goto LAB_10b97d8a4;
  func_0x000107c3a0cc();
  if ((bool)in_ZR) {
    lVar1 = 0;
    goto LAB_10b97d8a4;
  }
  if (unaff_x22 == 0) {
    func_0x000107c3a0d4();
LAB_10b97d8c8:
    FUN_10b97d910();
  }
  else {
    func_0x000107c3a03c();
    if ((bool)in_CY && !(bool)in_ZR) {
      func_0x000107c3a048();
      goto LAB_10b97d8c8;
    }
    func_0x00010b97d9c0();
  }
  func_0x000107c39ff0();
  FUN_10b97d8e8();
  lVar1 = *(long *)(unaff_x19 + 0x28);
LAB_10b97d8a4:
  func_0x000107c39f8c(lVar1);
  return;
}



/* Entry: 10b97d8e8; end: 10b97d90f;  */

ulong FUN_10b97d8e8(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 in_ZR;
  long lVar2;
  long extraout_x8;
  long extraout_x9;
  ulong extraout_x10;
  
  lVar2 = 0;
  while (func_0x000107c3a110(lVar2), (bool)in_ZR) {
    lVar2 = extraout_x8 + 8;
    in_ZR = 1;
  }
  uVar1 = (extraout_x10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (extraout_x10 & 0x5555555555555555) << 1;
  uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
  uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return extraout_x9 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_2;
}



/* Entry: 10b97d910; end: 10b97daeb;  */

void FUN_10b97d910(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 in_ZR;
  long lVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x9;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  
  func_0x000107c3a124();
  func_0x00010b97eca4();
  lVar2 = *param_1;
  lVar4 = param_1[1];
  lVar5 = param_1[3];
  lVar6 = (param_2 & 0xfffffffffffffff8) + 0x10;
  lVar3 = lVar6 + param_2 * 0x30;
  __Znwm();
  *unaff_x20 = lVar3;
  unaff_x20[1] = lVar3 + lVar6;
  _memset();
  lVar6 = 0;
  func_0x000107c39fd0();
  uVar1 = extraout_x9;
  if (!(bool)in_ZR) {
    uVar1 = extraout_x8;
  }
  func_0x000107c39fec(uVar1);
  for (; lVar5 != lVar6; lVar6 = lVar6 + 1) {
    if (-1 < *(char *)(lVar2 + lVar6)) {
      lVar3 = lVar4;
      FUN_10b97daec(lVar4);
      func_0x000107c39fcc();
      FUN_10b97d8e8();
      func_0x000107c39f80();
      FUN_10b97db08(extraout_x8_00 + lVar3 * 0x30,lVar4);
    }
    lVar4 = lVar4 + 0x30;
  }
  if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10b97daec; end: 10b97db07;  */

void FUN_10b97daec(long param_1)

{
  func_0x000107c3a040(param_1,*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 10b97db08; end: 10b97db5f;  */

long FUN_10b97db08(long param_1,long param_2)

{
  func_0x000107c30df0();
  func_0x00010b97df6c(param_1 + 0x18,param_2 + 0x18);
  func_0x00010b97df98(param_2 + 0x18);
  func_0x000107c3a064();
  return param_2;
}



/* Entry: 10b97db60; end: 10b97ddf3;  */

void FUN_10b97db60(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *unaff_x19;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puStack_c8;
  ulong *puStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  ulong *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  ulong *puStack_68;
  
  func_0x000107c3a024();
  puVar11 = param_2;
  if (*(long *)(param_1 + 0x20) == 0) {
    puVar11 = unaff_x19;
    FUN_10b979120();
    if (puVar11 < 0x49) {
      uVar8 = unaff_x19[1];
      uVar13 = *unaff_x19;
      uVar9 = unaff_x19[3];
      uVar10 = uVar9 - uVar13;
      if (unaff_x19[2] - uVar8 < uVar10) {
        func_0x00010b97eebc();
        if (uVar8 == uVar13) {
          func_0x00010b979224();
          FUN_10b97efb8();
        }
        else {
          FUN_10b9792c0();
        }
        if (unaff_x19[2] - unaff_x19[1] == 8) {
          uVar8 = 0x24;
        }
        else {
          uVar8 = unaff_x19[4] + 0x49;
        }
        unaff_x19[4] = uVar8;
      }
      else {
        puVar11 = (ulong *)((long)uVar10 >> 2);
        if (uVar9 == uVar13) {
          puVar11 = (undefined8 *)0x1;
        }
        puStack_90 = unaff_x19 + 3;
        FUN_10b97942c();
        puStack_98 = puVar11 + (long)param_2;
        puStack_b0 = puVar11;
        puStack_a8 = puVar11;
        puStack_a0 = puVar11;
        func_0x00010b97eebc();
        puStack_c0 = unaff_x19 + 5;
        uStack_b8 = 0x49;
        puStack_c8 = puVar11;
        FUN_10b979364(&puStack_b0);
        puVar5 = puStack_90;
        puVar15 = (undefined8 *)unaff_x19[1];
        puStack_c8 = (undefined8 *)0x0;
        puVar12 = puStack_98;
        puVar6 = puStack_a8;
        puVar14 = puStack_a0;
        puVar16 = puStack_b0;
        for (; puVar7 = (undefined8 *)unaff_x19[2], puVar15 != puVar7; puVar15 = puVar15 + 1) {
          if (puVar14 == puVar12) {
            if (puVar6 < puVar16 || (long)puVar6 - (long)puVar16 == 0) {
              puVar7 = (undefined8 *)((long)puVar12 - (long)puVar16 >> 2);
              if ((long)puVar12 - (long)puVar16 == 0) {
                puVar7 = (undefined8 *)0x1;
              }
              puStack_68 = puVar5;
              puVar4 = puVar7;
              FUN_10b97942c();
              puStack_80 = puVar4 + ((ulong)puVar7 >> 2);
              puStack_70 = puVar4 + (long)puVar11;
              puVar11 = puVar6;
              puStack_88 = puVar4;
              puStack_78 = puStack_80;
              FUN_10b979404(&puStack_88,puVar6,puVar12);
              puVar3 = puStack_70;
              puVar2 = puStack_78;
              puVar4 = puStack_80;
              puVar7 = puStack_88;
              puStack_88 = puVar16;
              puStack_80 = puVar6;
              puStack_78 = puVar14;
              puStack_70 = puVar12;
              func_0x00010b979488(&puStack_88);
              puVar12 = puVar3;
              puVar6 = puVar4;
              puVar14 = puVar2;
              puVar16 = puVar7;
            }
            else {
              puVar14 = puVar6 + (((long)puVar6 - (long)puVar16 >> 3) + 1) / -2;
              lVar1 = (long)puVar12 - (long)puVar6;
              if (lVar1 != 0) {
                _memmove(puVar14,puVar6,lVar1);
                puVar11 = puVar6;
              }
              puVar6 = puVar14;
              puVar14 = (undefined8 *)((long)puVar14 + lVar1);
            }
          }
          *puVar14 = *puVar15;
          puVar14 = puVar14 + 1;
        }
        puStack_a8 = (undefined8 *)unaff_x19[1];
        puStack_b0 = (undefined8 *)*unaff_x19;
        *unaff_x19 = (ulong)puVar16;
        unaff_x19[1] = (ulong)puVar6;
        puStack_98 = (undefined8 *)unaff_x19[3];
        unaff_x19[2] = (ulong)puVar14;
        unaff_x19[3] = (ulong)puVar12;
        if ((long)puVar14 - (long)puVar6 == 8) {
          uVar8 = 0x24;
        }
        else {
          uVar8 = unaff_x19[4] + 0x49;
        }
        unaff_x19[4] = uVar8;
        puStack_a0 = puVar7;
        func_0x00010b979460(&puStack_c8);
        func_0x00010b979488(&puStack_b0);
      }
    }
    else {
      unaff_x19[4] = 0x49;
      FUN_10b97efb8();
      puVar11 = param_2;
    }
  }
  puVar5 = unaff_x19;
  FUN_10b97de2c();
  if ((undefined8 *)*puVar5 == puVar11) {
    puVar11 = (ulong *)(puVar5[-1] + 0xff8);
  }
  FUN_10b97ddf4(puVar11 + -7);
  unaff_x19[5] = unaff_x19[5] + 1;
  unaff_x19[4] = unaff_x19[4] - 1;
  return;
}



/* Entry: 10b97ddf4; end: 10b97de2b;  */

void FUN_10b97ddf4(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c3a0c8();
  func_0x000107c30df0();
  func_0x000107c30f40(param_1 + 0x18,unaff_x19 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)(unaff_x19 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  return;
}



/* Entry: 10b97de2c; end: 10b97de73;  */

void FUN_10b97de2c(long param_1)

{
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 8)) {
    return;
  }
  return;
}



/* Entry: 10b97de74; end: 10b97df17;  */

void FUN_10b97de74(ulong *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x10;
  long unaff_x19;
  undefined8 unaff_x20;
  ulong unaff_x21;
  ulong uVar4;
  long unaff_x22;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  func_0x000107c3a024();
  uVar4 = param_1[1];
  bVar1 = *param_1 <= uVar4;
  uVar2 = uVar4 == *param_1;
  if ((bool)uVar2) {
    func_0x00010b97ebfc();
    if (bVar1) {
      lVar3 = (long)(extraout_x10 - uVar4) >> 2;
      if (extraout_x10 - uVar4 == 0) {
        lVar3 = 1;
      }
      func_0x00010b97f160();
      lStack_58 = lVar3 + (unaff_x21 + 6 & 0xfffffffffffffff8);
      lStack_48 = lVar3 + uVar4 * 8;
      lStack_60 = lVar3;
      lStack_50 = lStack_58;
      FUN_10b979404(&lStack_60,*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 0x10));
      func_0x00010b97e6c4();
      uVar4 = *(ulong *)(unaff_x19 + 8);
    }
    else {
      func_0x00010b97ebcc();
      lVar3 = extraout_x8;
      if (!(bool)uVar2) {
        _memmove();
        lVar3 = *(long *)(unaff_x19 + 0x10);
      }
      *(long *)(unaff_x19 + 0x10) = lVar3 + unaff_x22 * 8;
      uVar4 = unaff_x21;
    }
  }
  *(undefined8 *)(uVar4 - 8) = unaff_x20;
  *(undefined8 **)(unaff_x19 + 8) = (undefined8 *)(uVar4 - 8);
  return;
}



/* Entry: 10b97df18; end: 10b97df33;  */

void FUN_10b97df18(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10b97df34; end: 10b97dfbf;  */

long FUN_10b97df34(long param_1)

{
  FUN_10b9794c8(*(undefined8 *)(param_1 + 0x30));
  func_0x000104bdc2fc(param_1 + 0x28);
  func_0x000107c27900(param_1 + 0x20);
  func_0x000107c3a064();
  return param_1;
}



/* Entry: 10b97dfc0; end: 10b97dfc3;  */

undefined8 * FUN_10b97dfc0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7ca98;
  param_1[2] = &PTR_FUN_110d7cae0;
  FUN_10b97e40c(param_1 + 0x32);
  FUN_10b97e438(param_1 + 0x2c);
  func_0x00010b97e4a0(param_1 + 0x26);
  func_0x00010b97e508(param_1 + 0x20);
  FUN_10b97e570(param_1 + 5);
  func_0x000104bdc2fc(param_1 + 4);
  return param_1;
}



/* Entry: 10b97dfc4; end: 10b97dfd7;  */

void FUN_10b97dfc4(void)

{
  func_0x00010b97e5cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b97dfd8; end: 10b97e06f;  */

void FUN_10b97dfd8(undefined8 param_1,undefined8 param_2)

{
  undefined8 extraout_x8;
  undefined8 uVar1;
  int extraout_w11;
  undefined8 *unaff_x19;
  long lStack_38;
  
  func_0x00010b97ecb0();
  FUN_10b98101c(param_2);
  _objc_retainAutoreleasedReturnValue();
  _NSClassFromString();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b97ec78();
  func_0x000107c3a050(&lStack_38);
  func_0x000107c30eb8();
  if (lStack_38 == 0) {
    lStack_38 = 0;
    uVar1 = 0;
  }
  else {
    do {
      func_0x000107c39f98();
      uVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *unaff_x19 = uVar1;
  func_0x000107c30e88(lStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b97e070; end: 10b97e1df;  */

void FUN_10b97e070(undefined8 *param_1,long param_2,long param_3)

{
  undefined1 in_ZR;
  long lVar1;
  long extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar2;
  long extraout_x9;
  ulong extraout_x10;
  undefined4 extraout_w11;
  int extraout_w11_00;
  undefined4 extraout_var;
  long extraout_x12;
  ulong extraout_x15;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  FUN_10b98101c();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c25ce40();
  _objc_retainAutoreleasedReturnValue();
  _NSClassFromString();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c3a118(*(undefined8 *)(param_2 + 0x20));
  __ZNSt3__115recursive_mutex4lockEv();
  func_0x000107c30ebc(param_2 + 400);
  func_0x000107c3a098(*(undefined8 *)(param_2 + 400));
  if ((bool)in_ZR) {
    uVar2 = 0;
LAB_10b97e18c:
    *param_1 = uVar2;
    func_0x000107c3a0e0();
    func_0x00010b97ec78();
    func_0x00010b97ea4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  FUN_10b976044(*(undefined8 *)(lVar1 + 8));
  func_0x000107c39fb4(0);
  lVar1 = extraout_x8;
  uVar3 = extraout_x15;
  do {
    uVar3 = uVar3 & extraout_x10;
    uVar4 = *(ulong *)(*(long *)(param_2 + 0x160) + uVar3) ^ CONCAT44(extraout_var,extraout_w11);
    for (uVar4 = uVar4 + extraout_x12 & (uVar4 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar4 != 0; uVar4 = uVar4 - 1 & uVar4) {
      uVar5 = (uVar4 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar4 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar3 + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3) & extraout_x10;
      if (*(long *)(*(long *)(param_2 + 0x168) + uVar5 * 0x10) == extraout_x9) {
        uVar2 = 0;
        if (*(long *)(*(long *)(param_2 + 0x168) + uVar5 * 0x10 + 8) != 0) {
          do {
            func_0x000107c39f98();
            uVar2 = extraout_x8_00;
          } while (extraout_w11_00 != 0);
        }
        goto LAB_10b97e18c;
      }
    }
    lVar1 = lVar1 + 8;
    uVar3 = lVar1 + uVar3;
  } while( true );
}



/* Entry: 10b97e1e0; end: 10b97e203;  */

undefined8 * FUN_10b97e1e0(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_110d7ca98;
  *param_1 = &PTR_FUN_110d7cae0;
  FUN_10b97e40c(param_1 + 0x30);
  FUN_10b97e438(param_1 + 0x2a);
  func_0x00010b97e4a0(param_1 + 0x24);
  func_0x00010b97e508(param_1 + 0x1e);
  FUN_10b97e570(param_1 + 3);
  func_0x000104bdc2fc(param_1 + 2);
  return param_1 + -2;
}



/* Entry: 10b97e204; end: 10b97e217;  */

void FUN_10b97e204(void)

{
  func_0x00010b97e228();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b97e218; end: 10b97e23b;  */

void FUN_10b97e218(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b97e220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b97e23c; end: 10b97e333;  */

long * FUN_10b97e23c(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  plVar1 = param_1;
  FUN_10b97de2c();
  plVar2 = param_1;
  func_0x00010b979150();
  do {
    plVar7 = param_2 + -0x1ff;
    do {
      if (param_2 == plVar2) {
        param_1[5] = 0;
        puVar5 = (undefined8 *)param_1[1];
        while( true ) {
          puVar6 = (undefined8 *)param_1[2];
          uVar3 = (long)puVar6 - (long)puVar5 >> 3;
          if (uVar3 < 3) break;
          __ZdlPv(*puVar5);
          puVar5 = (undefined8 *)(param_1[1] + 8);
          param_1[1] = (long)puVar5;
        }
        if (uVar3 == 1) {
          lVar4 = 0x24;
        }
        else {
          if (uVar3 != 2) goto LAB_10b97e2fc;
          lVar4 = 0x49;
        }
        param_1[4] = lVar4;
LAB_10b97e2fc:
        for (; puVar5 != puVar6; puVar5 = puVar5 + 1) {
          __ZdlPv(*puVar5);
        }
        FUN_10b97df18(param_1,param_1[1]);
        if (*param_1 != 0) {
          __ZdlPv();
        }
        return param_1;
      }
      FUN_10b97df34(param_2);
      param_2 = param_2 + 7;
      plVar7 = plVar7 + 7;
    } while ((long *)*plVar1 != plVar7);
    plVar1 = plVar1 + 1;
    param_2 = (long *)*plVar1;
  } while( true );
}



/* Entry: 10b97e334; end: 10b97e40b;  */

void FUN_10b97e334(long param_1)

{
  long extraout_x8;
  long lVar1;
  long *unaff_x19;
  long unaff_x20;
  long lVar2;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010b97f078();
    lVar2 = 0x18;
    lVar1 = extraout_x8;
    for (; unaff_x20 != lVar1; unaff_x20 = unaff_x20 + 1) {
      if (-1 < *(char *)(*unaff_x19 + unaff_x20)) {
        lVar1 = unaff_x19[1] + lVar2;
        func_0x00010b979054(lVar1);
        func_0x000107c27900(lVar1 + -0x10);
        lVar1 = unaff_x19[3];
      }
      lVar2 = lVar2 + 0x20;
    }
    __ZdlPv();
    func_0x00010b97e744();
  }
  return;
}



/* Entry: 10b97e40c; end: 10b97e437;  */

void FUN_10b97e40c(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c3a0a4();
    __ZdlPv();
    func_0x00010b97e744();
  }
  return;
}



/* Entry: 10b97e438; end: 10b97e56f;  */

void FUN_10b97e438(long param_1)

{
  long extraout_x8;
  long lVar1;
  long *unaff_x19;
  long unaff_x20;
  long lVar2;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010b97f078();
    lVar2 = 8;
    lVar1 = extraout_x8;
    for (; unaff_x20 != lVar1; unaff_x20 = unaff_x20 + 1) {
      if (-1 < *(char *)(*unaff_x19 + unaff_x20)) {
        FUN_10b9762c8(unaff_x19[1] + lVar2);
        lVar1 = unaff_x19[3];
      }
      lVar2 = lVar2 + 0x10;
    }
    __ZdlPv();
    func_0x00010b97e744();
  }
  return;
}



/* Entry: 10b97e570; end: 10b97e62b;  */

long FUN_10b97e570(long param_1)

{
  func_0x000107c278f4(param_1 + 200);
  func_0x000107c278f4(param_1 + 0xc0);
  func_0x0001090b64f0(param_1 + 0xb8);
  FUN_10b97e23c(param_1 + 0x88);
  FUN_10b907af0(param_1 + 0x70);
  FUN_10b97e334(param_1 + 0x40);
  func_0x00010b97e3a4(param_1 + 0x10);
  FUN_10b978fe0(param_1 + 8);
  return param_1;
}



/* Entry: 10b97e62c; end: 10b97efb7;  */

void FUN_10b97e62c(long *param_1)

{
  if (*param_1 == 2) {
    func_0x0001003adc0c(param_1 + 1);
    func_0x000104bda960();
    return;
  }
  if (*param_1 == 1) {
    if (((char)param_1[2] == '\x02') && (param_1[1] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdba64c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__CFRelease_11034a768)();
      return;
    }
    return;
  }
  return;
}



/* Entry: 10b97efb8; end: 10b97efdb;  */

void FUN_10b97efb8(void)

{
  bool bVar1;
  undefined1 uVar2;
  ulong *puVar3;
  ulong extraout_x8;
  ulong uVar4;
  long lVar5;
  long extraout_x10;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  ulong uVar6;
  long unaff_x22;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  uVar6 = *(ulong *)(unaff_x19[2] - 8);
  func_0x00010b97de68();
  puVar3 = unaff_x19;
  func_0x000107c3a024();
  uVar4 = puVar3[1];
  bVar1 = *puVar3 <= uVar4;
  uVar2 = uVar4 == *puVar3;
  if ((bool)uVar2) {
    func_0x00010b97ebfc();
    if (bVar1) {
      lVar5 = (long)(extraout_x10 - uVar4) >> 2;
      if (extraout_x10 - uVar4 == 0) {
        lVar5 = 1;
      }
      func_0x00010b97f160();
      lStack_58 = lVar5 + (uVar6 + 6 & 0xfffffffffffffff8);
      lStack_48 = lVar5 + uVar4 * 8;
      lStack_60 = lVar5;
      lStack_50 = lStack_58;
      FUN_10b979404(&lStack_60,unaff_x19[1],unaff_x19[2]);
      func_0x00010b97e6c4();
      uVar4 = unaff_x19[1];
    }
    else {
      func_0x00010b97ebcc();
      uVar4 = extraout_x8;
      if (!(bool)uVar2) {
        _memmove(uVar6);
        uVar4 = unaff_x19[2];
      }
      unaff_x19[2] = uVar4 + unaff_x22 * 8;
      uVar4 = uVar6;
    }
  }
  *(undefined8 *)(uVar4 - 8) = unaff_x20;
  unaff_x19[1] = uVar4 - 8;
  return;
}



/* Entry: 10b97efdc; end: 10b97f337;  */

void FUN_10b97efdc(void)

{
  return;
}



/* Entry: 10b97f338; end: 10b97f37b;  */

uint FUN_10b97f338(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  
  if (param_1 == 0) {
    uVar1 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    _objc_opt_class(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_opt_isKindOfClass(param_1,puVar2);
    uVar1 = (uint)param_1;
  }
  return uVar1 & 1;
}



/* Entry: 10b97f37c; end: 10b97f3af;  */

void FUN_10b97f37c(undefined8 param_1)

{
  FUN_10b9a10dc();
  FUN_10b97f3b0(param_1);
  return;
}



/* Entry: 10b97f3b0; end: 10b97f3ef;  */

void FUN_10b97f3b0(long param_1)

{
  code *pcVar1;
  undefined1 auStack_28 [8];
  
  if ((*(byte *)(*(long *)(param_1 + 8) + 8) & 1) != 0) {
    return;
  }
  FUN_10b9a0084(auStack_28);
  FUN_10b981e8c(auStack_28);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b97f3e8);
  (*pcVar1)();
}



/* Entry: 10b97f3f0; end: 10b97f423;  */

void FUN_10b97f3f0(undefined8 param_1)

{
  FUN_10b9a1228();
  FUN_10b97f3b0(param_1);
  return;
}



/* Entry: 10b97f424; end: 10b97f45b;  */

undefined8 FUN_10b97f424(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x98;
  __Znwm(0x98);
  FUN_10b97fee0();
  return uVar1;
}



/* Entry: 10b97f45c; end: 10b97f46f;  */

void FUN_10b97f45c(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010b97f468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))();
    return;
  }
  return;
}



/* Entry: 10b97f470; end: 10b97f56b;  */

void FUN_10b97f470(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  code *pcVar2;
  undefined8 **ppuStack_58;
  undefined1 uStack_50;
  undefined7 uStack_4f;
  byte bStack_41;
  undefined8 **ppuStack_40;
  ulong uStack_38;
  
  _objc_retain(&PTR____CFConstantStringClassReference_110f9e7b8);
  FUN_10b97f37c(&ppuStack_58,param_1,param_2);
  uVar1 = uStack_50;
  FUN_10b9a8d98(&ppuStack_58);
  FUN_10b9a8d84(&ppuStack_58,uVar1);
  uStack_38 = CONCAT71(uStack_4f,uStack_50);
  ppuStack_40 = ppuStack_58;
  if (-1 < (char)bStack_41) {
    uStack_38 = (ulong)bStack_41;
    ppuStack_40 = &ppuStack_58;
  }
  FUN_10b9812a4();
  _objc_retainAutoreleasedReturnValue();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_58);
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  FUN_10b965c10();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10b97f530);
  (*pcVar2)();
}



/* Entry: 10b97f56c; end: 10b97f5e3;  */

undefined8 FUN_10b97f56c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_28;
  
  lVar1 = *(long *)(param_1 + 8);
  if ((*(byte *)(lVar1 + 8) & 1) == 0) {
    FUN_10b9a0084(&lStack_28,lVar1);
    if ((lStack_28 == 0) || (*(int *)(lStack_28 + 0x28) != 100)) {
      FUN_10b99febc(lVar1,&lStack_28);
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    func_0x000104bda960(lStack_28);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 10b97f5e4; end: 10b97f5fb;  */

long FUN_10b97f5e4(int param_1)

{
  FUN_10b9a0e34();
  return (long)param_1;
}



/* Entry: 10b97f5fc; end: 10b97f61b;  */

void FUN_10b97f5fc(long param_1)

{
  code *pcVar1;
  undefined1 auStack_28 [8];
  
  FUN_10b9a1050();
  if ((*(byte *)(*(long *)(param_1 + 8) + 8) & 1) != 0) {
    return;
  }
  FUN_10b9a0084(auStack_28);
  FUN_10b981e8c(auStack_28);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b97f3e8);
  (*pcVar1)();
}



/* Entry: 10b97f61c; end: 10b97f663;  */

void FUN_10b97f61c(void)

{
  func_0x00010b97fff8();
  FUN_10b9a1050();
  func_0x00010b97fff0();
  FUN_10b97f3b0();
  return;
}



/* Entry: 10b97f664; end: 10b97f6ff;  */

void FUN_10b97f664(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10b9a17d8();
  FUN_10b97f3b0(param_1);
  if ((uVar2 & 1) != 0) {
    return;
  }
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  FUN_10b965c10();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b97f6f4);
  (*pcVar1)();
}



/* Entry: 10b97f700; end: 10b97f717;  */

long FUN_10b97f700(int param_1)

{
  FUN_10b9a14b8();
  return (long)param_1;
}



/* Entry: 10b97f718; end: 10b97f737;  */

void FUN_10b97f718(long param_1)

{
  code *pcVar1;
  undefined1 auStack_28 [8];
  
  FUN_10b9a168c();
  if ((*(byte *)(*(long *)(param_1 + 8) + 8) & 1) != 0) {
    return;
  }
  FUN_10b9a0084(auStack_28);
  FUN_10b981e8c(auStack_28);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b97f3e8);
  (*pcVar1)();
}



/* Entry: 10b97f738; end: 10b97f777;  */

long FUN_10b97f738(void)

{
  int unaff_w19;
  
  func_0x00010b97fff8();
  FUN_10b9a0ba8();
  func_0x00010b97fff0();
  return (long)unaff_w19;
}



/* Entry: 10b97f778; end: 10b97f7cb;  */

undefined8 FUN_10b97f778(void)

{
  ulong unaff_x19;
  undefined8 unaff_x20;
  
  func_0x00010b97ffe0();
  FUN_10b97f338();
  if ((unaff_x19 & 1) == 0) {
    FUN_10b97f738();
  }
  else {
    FUN_10b97f7cc();
  }
  func_0x00010b97ffa8();
  return unaff_x20;
}



/* Entry: 10b97f7cc; end: 10b97f7e3;  */

long FUN_10b97f7cc(int param_1)

{
  FUN_10b9a0d30();
  return (long)param_1;
}



/* Entry: 10b97f7e4; end: 10b97f857;  */

long FUN_10b97f7e4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_30 [16];
  
  func_0x00010bfbc0a0(PTR_PTR_1126b6d48,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10b981454(auStack_30);
  FUN_10b9a0b80(param_1,auStack_30);
  func_0x00010b97ff8c();
  func_0x00010b97ffa8();
  return (long)(int)param_1;
}



/* Entry: 10b97f858; end: 10b97f89f;  */

long FUN_10b97f858(int param_1)

{
  FUN_10b9a0be0();
  return (long)param_1;
}



/* Entry: 10b97f8a0; end: 10b97f8df;  */

long FUN_10b97f8a0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_30 [16];
  
  FUN_10b980484(auStack_30,param_2);
  iVar1 = (int)param_2;
  func_0x00010b980064();
  func_0x00010b97ff8c();
  return (long)iVar1;
}



/* Entry: 10b97f8e0; end: 10b97f8f7;  */

long FUN_10b97f8e0(int param_1)

{
  FUN_10b9a0c18();
  return (long)param_1;
}



/* Entry: 10b97f8f8; end: 10b97f9d7;  */

long FUN_10b97f8f8(void)

{
  ulong unaff_x19;
  int unaff_w20;
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  undefined2 uStack_28;
  
  func_0x00010b97ffe0();
  uStack_28 = 0;
  uStack_30 = 0;
  _objc_opt_respondsToSelector();
  if ((unaff_x19 & 1) == 0) {
    FUN_10b981514(&uStack_48);
    func_0x00010b9a8f78(auStack_40,&uStack_48);
    func_0x00010b980018();
    FUN_10b9a8d98(auStack_40);
    func_0x000104bddf04(uStack_48);
  }
  else {
    FUN_10b980484(auStack_40);
    func_0x00010b980018();
    FUN_10b9a8d98(auStack_40);
  }
  FUN_10b9a8f04(auStack_58,&uStack_30);
  FUN_10b9a0b80();
  func_0x00010b97ffb8();
  FUN_10b9a8d98(&uStack_30);
  func_0x00010b97ffa8();
  return (long)unaff_w20;
}



/* Entry: 10b97f9d8; end: 10b97fa3f;  */

undefined1 * FUN_10b97f9d8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_40 [16];
  undefined8 uVar3;
  
  puVar2 = auStack_40;
  func_0x00010b980008();
  FUN_10b9811b4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b97ff8c();
  if (puVar2 != (undefined1 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  uVar3 = param_2;
  FUN_10b97f470(param_1,param_2);
  func_0x00010b97ff74();
  func_0x00010b97ffa0();
  pcStack_48 = FUN_10b97fa40;
  uStack_60 = param_1;
  uStack_58 = param_2;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_10b98134c(auStack_70,uVar3);
  iVar1 = (int)uVar3;
  func_0x00010b980064();
  func_0x00010b97ff8c();
  return (undefined1 *)(long)iVar1;
}



/* Entry: 10b97fa40; end: 10b97fa7f;  */

long FUN_10b97fa40(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_30 [16];
  
  FUN_10b98134c(auStack_30,param_2);
  iVar1 = (int)param_2;
  func_0x00010b980064();
  func_0x00010b97ff8c();
  return (long)iVar1;
}


