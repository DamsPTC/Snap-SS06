/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100034b1c; end: 100034b33;  */

undefined * FUN_100034b1c(void)

{
  return &UNK_1096aebbc;
}



/* Entry: 100034b34; end: 100034baf;  */

undefined8 * FUN_100034b34(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_DAT_110b01d60;
  puVar1 = (undefined8 *)0x28;
  func_0x000107c610a0();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_FUN_110b00de0;
  }
  *param_1 = &PTR_DAT_110b03dd8;
  param_1[1] = puVar1;
  FUN_100034bb0(param_1);
  return param_1;
}



/* Entry: 100034bb0; end: 100034c2f;  */

void FUN_100034bb0(undefined8 *param_1)

{
  FUN_100033474(param_1,0x30);
  param_1[5] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_110b00de0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_100033528();
  param_1[4] = &PTR_DAT_110b03e88;
  *param_1 = &PTR_DAT_110b03e20;
  return;
}



/* Entry: 100034c30; end: 100034e87;  */

void FUN_100034c30(void)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined **ppuStack_50;
  long lStack_48;
  
  puVar3 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *(undefined4 *)(puVar3 + 2) = 5;
  *puVar3 = &PTR_DAT_110b04478;
  puVar3[1] = "Concurrent";
  puVar4 = (undefined1 *)0x1;
  func_0x000107c610a0();
  puVar3[3] = puVar4;
  if (puVar4 != (undefined1 *)0x0) {
    *puVar4 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  puVar5 = (undefined8 *)0x20;
  puRam0000000113735bd8 = puVar3;
  func_0x000107c60e20();
  *(undefined4 *)(puVar5 + 2) = 5;
  *puVar5 = &PTR_DAT_110b04598;
  puVar5[1] = &UNK_10f57cab0;
  lVar6 = 0x10;
  func_0x000107c610a0();
  puVar5[3] = lVar6;
  if (lVar6 != 0) {
    FUN_1000333e0();
  }
  FUN_100031fe0();
  FUN_100032070();
  puVar3 = (undefined8 *)0x20;
  puRam0000000113735be0 = puVar5;
  func_0x000107c60e20();
  *(undefined4 *)(puVar3 + 2) = 5;
  *puVar3 = &PTR_DAT_110b04660;
  puVar3[1] = &UNK_10f57cabb;
  uVar7 = 0x10;
  func_0x000107c610a0();
  puVar3[3] = uVar7;
  FUN_100031fe0();
  FUN_100032070();
  puRam000000011382aa60 = puVar3;
  FUN_1000333e0(&ppuStack_50);
  if (*(char *)(lStack_48 + 0x1f) < '\0') {
    *(undefined8 *)(lStack_48 + 0x10) = 5;
    puVar8 = *(undefined4 **)(lStack_48 + 8);
  }
  else {
    puVar8 = (undefined4 *)(lStack_48 + 8);
    *(undefined1 *)(lStack_48 + 0x1f) = 5;
  }
  *puVar8 = 0x706d742f;
  *(undefined2 *)(puVar8 + 1) = 0x2f;
  puVar3 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *(undefined4 *)(puVar3 + 2) = 5;
  *puVar3 = &PTR_DAT_110b04598;
  puVar3[1] = &UNK_10f57caca;
  puVar5 = (undefined8 *)0x10;
  func_0x000107c610a0();
  puVar3[3] = puVar5;
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = lStack_48;
    *puVar5 = ppuStack_50;
    if (puVar5[1] != 0) {
      piVar9 = (int *)(puVar5[1] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar2) {
          *piVar9 = *piVar9 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  FUN_100031fe0();
  FUN_100032070();
  ppuStack_50 = &PTR_DAT_110b01d60;
  puRam000000011382aa68 = puVar3;
  FUN_100032e98(&ppuStack_50);
  return;
}



/* Entry: 100034e88; end: 100034e9f;  */

undefined * FUN_100034e88(void)

{
  return &UNK_1096b3c44;
}



/* Entry: 100034ea0; end: 100035023;  */

void FUN_100034ea0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *(undefined4 *)(puVar1 + 2) = 5;
  *puVar1 = &PTR_DAT_110b04878;
  puVar1[1] = &UNK_10f57cb70;
  uVar2 = 0x10;
  func_0x000107c610a0();
  puVar1[3] = uVar2;
  FUN_100031fe0();
  FUN_100032070();
  uVar2 = 0x20;
  puRam0000000113735be8 = puVar1;
  func_0x000107c60e20();
  FUN_10003503c();
  FUN_100031fe0();
  FUN_100032070();
  uVar3 = 0x20;
  uRam0000000113735bf0 = uVar2;
  func_0x000107c60e20();
  FUN_10003503c();
  FUN_100031fe0();
  FUN_100032070();
  puVar1 = (undefined8 *)0x20;
  uRam0000000113735bf8 = uVar3;
  func_0x000107c60e20();
  *(undefined4 *)(puVar1 + 2) = 5;
  *puVar1 = &PTR_DAT_110b04a08;
  puVar1[1] = &UNK_10f57cb9f;
  uVar2 = 1;
  func_0x000107c60ee8(1,0x10);
  puVar1[3] = uVar2;
  FUN_100031fe0();
  FUN_100032070();
  puRam000000011382aa70 = puVar1;
  return;
}



/* Entry: 100035024; end: 10003503b;  */

undefined * FUN_100035024(void)

{
  return &UNK_1096b5890;
}



/* Entry: 10003503c; end: 100035083;  */

undefined8 * FUN_10003503c(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined4 *)(param_1 + 2) = 5;
  *param_1 = &PTR_DAT_110b04940;
  param_1[1] = param_2;
  lVar1 = 0x10;
  func_0x000107c610a0();
  param_1[3] = lVar1;
  if (lVar1 != 0) {
    FUN_1000333e0();
  }
  return param_1;
}



/* Entry: 100035084; end: 10003510f;  */

void FUN_100035084(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)0x1;
  func_0x000107c610a0();
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x000107c60fd0();
  }
  return;
}



/* Entry: 100035110; end: 100035127;  */

undefined * FUN_100035110(void)

{
  return &UNK_1096b7ab8;
}



/* Entry: 100035128; end: 1000351b3;  */

void FUN_100035128(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)0x1;
  func_0x000107c610a0();
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x000107c60fd0();
  }
  return;
}



/* Entry: 1000351b4; end: 1000351cb;  */

undefined * FUN_1000351b4(void)

{
  return &UNK_1096b8fa8;
}



/* Entry: 1000351cc; end: 100035257;  */

void FUN_1000351cc(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)0x1;
  func_0x000107c610a0();
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x000107c60fd0();
  }
  return;
}



/* Entry: 100035258; end: 10003526f;  */

undefined * FUN_100035258(void)

{
  return &UNK_1096b9d20;
}



/* Entry: 100035270; end: 1000352fb;  */

void FUN_100035270(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)0x1;
  func_0x000107c610a0();
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x000107c60fd0();
  }
  return;
}



/* Entry: 1000352fc; end: 100035313;  */

undefined * FUN_1000352fc(void)

{
  return &UNK_1096ba794;
}



/* Entry: 100035314; end: 10003539f;  */

void FUN_100035314(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)0x1;
  func_0x000107c610a0();
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x000107c60fd0();
  }
  return;
}



/* Entry: 1000353a0; end: 1000353b7;  */

undefined * FUN_1000353a0(void)

{
  return &UNK_1096bb708;
}



/* Entry: 1000353b8; end: 10003545b;  */

void FUN_1000353b8(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *(undefined4 *)(puVar1 + 2) = 5;
  *puVar1 = &PTR_DAT_110b05510;
  puVar1[1] = &UNK_10f57cd60;
  puVar2 = (undefined8 *)0x1;
  func_0x000107c60ee8(1,0x10);
  puVar1[3] = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    FUN_10003545c();
    *puVar2 = &PTR_DAT_110b055d8;
  }
  FUN_100031fe0();
  FUN_100032070();
  puRam0000000113735c00 = puVar1;
  return;
}



/* Entry: 10003545c; end: 1000354eb;  */

undefined8 * FUN_10003545c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_DAT_110b01d60;
  puVar1 = (undefined8 *)0x28;
  func_0x000107c610a0();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_FUN_110b00de0;
  }
  *param_1 = &PTR_DAT_110b018b0;
  param_1[1] = puVar1;
  puVar1 = param_1;
  FUN_100033474(param_1,0x20);
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR_DAT_110b01cd8;
  puVar1[1] = 0;
  return param_1;
}



/* Entry: 1000354ec; end: 1000354ff;  */

undefined8 FUN_1000354ec(void)

{
  return 0;
}



/* Entry: 100035500; end: 1000355a3;  */

void FUN_100035500(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *(undefined4 *)(puVar1 + 2) = 5;
  *puVar1 = &PTR_DAT_110b05700;
  puVar1[1] = &UNK_10f57ce07;
  puVar2 = (undefined8 *)0x1;
  func_0x000107c60ee8(1,0x10);
  puVar1[3] = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    FUN_10003545c();
    *puVar2 = &PTR_DAT_110b057c8;
  }
  FUN_100031fe0();
  FUN_100032070();
  puRam000000011382aa78 = puVar1;
  return;
}



/* Entry: 1000355a4; end: 1000355b7;  */

undefined8 FUN_1000355a4(void)

{
  return 0;
}



/* Entry: 1000355b8; end: 100035643;  */

void FUN_1000355b8(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)0x1;
  func_0x000107c610a0();
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x000107c60fd0();
  }
  return;
}



/* Entry: 100035644; end: 10003565b;  */

undefined * FUN_100035644(void)

{
  return &UNK_1096bd4b4;
}



/* Entry: 10003565c; end: 1000356e7;  */

void FUN_10003565c(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)0x1;
  func_0x000107c610a0();
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x000107c60fd0();
  }
  return;
}



/* Entry: 1000356e8; end: 1000356ff;  */

undefined * FUN_1000356e8(void)

{
  return &UNK_1096bf2d0;
}



/* Entry: 100035700; end: 10003578b;  */

void FUN_100035700(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)0x1;
  func_0x000107c610a0();
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x000107c60fd0();
  }
  return;
}



/* Entry: 10003578c; end: 1000357a3;  */

undefined * FUN_10003578c(void)

{
  return &UNK_1096bfca8;
}



/* Entry: 1000357a4; end: 10003581b;  */

void FUN_1000357a4(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *(undefined4 *)(puVar1 + 2) = 5;
  *puVar1 = &PTR_DAT_110b05f50;
  puVar1[1] = &UNK_10f57cb70;
  uVar2 = 0x10;
  func_0x000107c610a0();
  puVar1[3] = uVar2;
  FUN_100031fe0();
  FUN_100032070();
  puRam0000000113735c08 = puVar1;
  return;
}



/* Entry: 10003581c; end: 100035833;  */

undefined * FUN_10003581c(void)

{
  return &UNK_1096c05d4;
}



/* Entry: 100035834; end: 1000359e7;  */

void FUN_100035834(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *(undefined4 *)(puVar1 + 2) = 5;
  *puVar1 = &PTR_DAT_110b060c8;
  puVar1[1] = &UNK_10f57d022;
  puVar2 = (undefined8 *)0x8;
  func_0x000107c610a0();
  puVar1[3] = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0x3ff0000000000000;
  }
  FUN_100031fe0();
  FUN_100032070();
  puVar2 = (undefined8 *)0x20;
  puRam000000011382aa80 = puVar1;
  func_0x000107c60e20();
  *(undefined4 *)(puVar2 + 2) = 5;
  *puVar2 = &PTR_DAT_110b060c8;
  puVar2[1] = &UNK_10f57d031;
  puVar1 = (undefined8 *)0x8;
  func_0x000107c610a0();
  puVar2[3] = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0x3fe0000000000000;
  }
  FUN_100031fe0();
  FUN_100032070();
  puVar1 = (undefined8 *)0x20;
  puRam0000000113735c10 = puVar2;
  func_0x000107c60e20();
  *(undefined4 *)(puVar1 + 2) = 5;
  *puVar1 = &PTR_DAT_110b060c8;
  puVar1[1] = &UNK_10f57d045;
  puVar2 = (undefined8 *)0x8;
  func_0x000107c610a0();
  puVar1[3] = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0x3fe3333333333333;
  }
  FUN_100031fe0();
  FUN_100032070();
  puVar2 = (undefined8 *)0x20;
  puRam0000000113735c18 = puVar1;
  func_0x000107c60e20();
  *(undefined4 *)(puVar2 + 2) = 5;
  *puVar2 = &PTR_DAT_110b060c8;
  puVar2[1] = &UNK_10f57d055;
  puVar1 = (undefined8 *)0x8;
  func_0x000107c610a0();
  puVar2[3] = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0x3feb333333333333;
  }
  FUN_100031fe0();
  FUN_100032070();
  puRam0000000113735c20 = puVar2;
  return;
}



/* Entry: 1000359e8; end: 1000359ff;  */

undefined * FUN_1000359e8(void)

{
  return &UNK_1096c2078;
}



/* Entry: 100035a00; end: 100035d8b;  */

void FUN_100035a00(void)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 *puStack_48;
  
  puVar3 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *(undefined4 *)(puVar3 + 2) = 5;
  *puVar3 = &PTR_DAT_110b06318;
  puVar3[1] = &UNK_10f57d14b;
  puVar4 = (undefined1 *)0x1;
  func_0x000107c610a0();
  puVar3[3] = puVar4;
  if (puVar4 != (undefined1 *)0x0) {
    *puVar4 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  puVar5 = (undefined8 *)0x20;
  puRam000000011382aa88 = puVar3;
  func_0x000107c60e20();
  *(undefined4 *)(puVar5 + 2) = 5;
  *puVar5 = &PTR_DAT_110b063e0;
  puVar5[1] = &UNK_10f57d160;
  puVar3 = (undefined8 *)0x18;
  func_0x000107c610a0();
  puVar5[3] = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[2] = 0;
    puVar3[1] = 0;
    *puVar3 = puVar3 + 1;
  }
  FUN_100031fe0();
  FUN_100032070();
  puRam000000011382aa90 = puVar5;
  FUN_100033cac();
  puVar5 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *(undefined4 *)(puVar5 + 2) = 7;
  *puVar5 = &PTR_DAT_110b06520;
  puVar5[1] = &DAT_10f3b66c6;
  puVar6 = (undefined8 *)0x10;
  func_0x000107c610a0();
  puVar5[3] = puVar6;
  if (puVar6 != (undefined8 *)0x0) {
    uVar10 = *puVar3;
    puVar6[1] = puVar3[1];
    *puVar6 = uVar10;
    if (puVar6[1] != 0) {
      piVar9 = (int *)(puVar6[1] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar2) {
          *piVar9 = *piVar9 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  FUN_100031fe0();
  FUN_100032070();
  puVar3 = (undefined8 *)0x38;
  puRam0000000113735c28 = puVar5;
  func_0x000107c60e20();
  *(undefined4 *)(puVar3 + 2) = 5;
  *puVar3 = &PTR_DAT_110b06250;
  puVar3[1] = &UNK_10f57d16d;
  puVar3[3] = &UNK_1096c33f0;
  puVar3[4] = 0;
  puVar3[5] = &UNK_1096c3448;
  puVar3[6] = 0;
  FUN_100031fe0();
  FUN_100032070();
  puVar5 = (undefined8 *)0x20;
  puRam0000000113735c30 = puVar3;
  func_0x000107c60e20();
  *(undefined4 *)(puVar5 + 2) = 5;
  *puVar5 = &PTR_DAT_110b06318;
  puVar5[1] = &UNK_10f57d17d;
  puVar4 = (undefined1 *)0x1;
  func_0x000107c610a0();
  puVar5[3] = puVar4;
  if (puVar4 != (undefined1 *)0x0) {
    *puVar4 = 1;
  }
  FUN_100031fe0();
  FUN_100032070();
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  puVar3 = (undefined8 *)0x20;
  puRam0000000113735c38 = puVar5;
  func_0x000107c60e20();
  *(undefined4 *)(puVar3 + 2) = 5;
  *puVar3 = &PTR_DAT_110b066c8;
  puVar3[1] = &DAT_10f57d18f;
  lVar7 = 1;
  func_0x000107c60ee8(1,0x18);
  puVar3[3] = lVar7;
  if (lVar7 != 0) {
    FUN_100035da4();
  }
  FUN_100031fe0();
  FUN_100032070();
  puRam000000011382aa98 = puVar3;
  puStack_48 = (undefined1 *)&uStack_60;
  FUN_100035e64(&puStack_48);
  puVar3 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *(undefined4 *)(puVar3 + 2) = 5;
  *puVar3 = &PTR_DAT_110b067b8;
  puVar3[1] = &UNK_10f57d194;
  puVar8 = (undefined4 *)0x4;
  func_0x000107c610a0();
  puVar3[3] = puVar8;
  if (puVar8 != (undefined4 *)0x0) {
    *puVar8 = 0xffffffff;
  }
  FUN_100031fe0();
  FUN_100032070();
  puRam000000011382aaa0 = puVar3;
  return;
}



/* Entry: 100035d8c; end: 100035da3;  */

undefined * FUN_100035d8c(void)

{
  return &UNK_1096c3fbc;
}



/* Entry: 100035da4; end: 100035e63;  */

void FUN_100035da4(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  
  if (param_4 != 0) {
    func_0x000107c2ad0c(param_1,param_4);
    puVar3 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 3) {
      *puVar3 = &PTR_DAT_110b01d60;
      uVar5 = *param_2;
      puVar3[1] = param_2[1];
      *puVar3 = uVar5;
      if (puVar3[1] != 0) {
        piVar4 = (int *)(puVar3[1] + -8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar2) {
            *piVar4 = *piVar4 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      *puVar3 = &PTR_DAT_110b051b8;
      puVar3[2] = param_2[2];
      puVar3 = puVar3 + 3;
    }
    *(undefined8 **)(param_1 + 8) = puVar3;
  }
  return;
}



/* Entry: 100035e64; end: 100035ef3;  */

void FUN_100035e64(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)*puVar3;
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  puVar2 = (undefined8 *)puVar3[1];
  puVar1 = puVar4;
  if (puVar2 != puVar4) {
    do {
      puVar2 = puVar2 + -3;
      *puVar2 = &PTR_DAT_110b01d60;
      FUN_100032e98(puVar2);
    } while (puVar2 != puVar4);
    puVar1 = *(undefined8 **)*param_1;
  }
  puVar3[1] = puVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar1);
  return;
}



/* Entry: 100035ef4; end: 100035f7f;  */

void FUN_100035ef4(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)0x1;
  func_0x000107c610a0();
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x000107c60fd0();
  }
  return;
}



/* Entry: 100035f80; end: 100035f97;  */

undefined * FUN_100035f80(void)

{
  return &UNK_1096c5974;
}



/* Entry: 100035f98; end: 1000360b7;  */

void FUN_100035f98(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uRam0000000113735c58 = 0xbf978258bf592110;
  uRam0000000113735c50 = 0xb6a113fb402c9061;
  uRam0000000113735c68 = 0xbd75c227bd5119cb;
  uRam0000000113735c60 = 0xb54d9f1f3ffffff7;
  uRam0000000113735c78 = 0xbfc0624ebfedc28f;
  uRam0000000113735c70 = 0x40600000;
  uRam0000000113735c88 = 0xbfc0624ebf247ae1;
  uRam0000000113735c80 = 0x40600000;
  puVar1 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *(undefined4 *)(puVar1 + 2) = 5;
  *puVar1 = &PTR_DAT_110b068f0;
  puVar1[1] = &UNK_10f57cb70;
  uVar2 = 0x10;
  func_0x000107c610a0();
  puVar1[3] = uVar2;
  FUN_100031fe0();
  FUN_100032070();
  puRam0000000113735c40 = puVar1;
  return;
}



/* Entry: 1000360b8; end: 1000360cb;  */

undefined8 FUN_1000360b8(void)

{
  return 0;
}



/* Entry: 1000360cc; end: 1000361e7;  */

void FUN_1000360cc(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined8 uVar8;
  
  FUN_100033cac();
  puVar4 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *(undefined4 *)(puVar4 + 2) = 5;
  *puVar4 = &PTR_DAT_110b06ca0;
  puVar4[1] = &UNK_10f57d431;
  puVar5 = (undefined8 *)0x10;
  func_0x000107c610a0();
  puVar4[3] = puVar5;
  if (puVar5 != (undefined8 *)0x0) {
    uVar8 = *param_1;
    puVar5[1] = param_1[1];
    *puVar5 = uVar8;
    if (puVar5[1] != 0) {
      piVar7 = (int *)(puVar5[1] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = *piVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  FUN_100031fe0();
  uVar3 = SUB84(puVar5,0);
  FUN_100032070();
  puRam0000000113735c90 = puVar4;
  func_0x000107c60db8();
  puVar4 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *(undefined4 *)(puVar4 + 2) = 5;
  *puVar4 = &PTR_DAT_110b06ee8;
  puVar4[1] = &UNK_10f57d43c;
  puVar6 = (undefined4 *)0x4;
  func_0x000107c610a0();
  puVar4[3] = puVar6;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = uVar3;
  }
  FUN_100031fe0();
  FUN_100032070();
  puRam0000000113735c98 = puVar4;
  return;
}



/* Entry: 1000361e8; end: 100036217;  */

undefined * FUN_1000361e8(void)

{
  return &UNK_1096c7dfc;
}



/* Entry: 100036218; end: 100036297;  */

void FUN_100036218(void)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *(undefined4 *)(puVar1 + 2) = 5;
  *puVar1 = &PTR_DAT_110b07020;
  puVar1[1] = &UNK_10f57d4e0;
  puVar2 = (undefined1 *)0x1;
  func_0x000107c610a0();
  puVar1[3] = puVar2;
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  puRam0000000113735ca0 = puVar1;
  return;
}



/* Entry: 100036298; end: 1000362af;  */

undefined * FUN_100036298(void)

{
  return &UNK_1096c85d4;
}



/* Entry: 1000362b0; end: 10003633b;  */

void FUN_1000362b0(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)0x1;
  func_0x000107c610a0();
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x000107c60fd0();
  }
  return;
}



/* Entry: 10003633c; end: 100036353;  */

undefined * FUN_10003633c(void)

{
  return &UNK_1096cd454;
}



/* Entry: 100036354; end: 10003640b;  */

void FUN_100036354(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *(undefined4 *)(puVar1 + 2) = 5;
  *puVar1 = &PTR_DAT_110b073a0;
  puVar1[1] = &UNK_10f57d6c4;
  puVar2 = (undefined8 *)0x1;
  func_0x000107c60ee8(1,0x10);
  puVar1[3] = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x28;
    func_0x000107c610a0();
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar3 + 3) = 1;
      *puVar3 = 0;
      puVar3[1] = 0;
      *(undefined4 *)(puVar3 + 2) = 0;
      puVar3 = puVar3 + 4;
      *puVar3 = &PTR_FUN_110b00de0;
    }
    *puVar2 = &PTR_DAT_110b07340;
    puVar2[1] = puVar3;
  }
  FUN_100031fe0();
  FUN_100032070();
  puRam0000000113735ca8 = puVar1;
  return;
}



/* Entry: 10003640c; end: 100036423;  */

undefined * FUN_10003640c(void)

{
  return &UNK_1096cd92c;
}



/* Entry: 100036424; end: 1000364c7;  */

void FUN_100036424(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *(undefined4 *)(puVar1 + 2) = 7;
  *puVar1 = &PTR_DAT_110b07590;
  puVar1[1] = &UNK_10f57d720;
  puVar2 = (undefined8 *)0x1;
  func_0x000107c60ee8(1,0x10);
  puVar1[3] = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    FUN_100033528();
    *puVar2 = &PTR_DAT_110b03cc8;
  }
  FUN_100031fe0();
  FUN_100032070();
  puRam0000000113735cb0 = puVar1;
  return;
}



/* Entry: 1000364c8; end: 1000364df;  */

undefined * FUN_1000364c8(void)

{
  return &UNK_1096cdf94;
}



/* Entry: 1000364e0; end: 100036673;  */

void FUN_1000364e0(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)0x1;
  func_0x000107c610a0();
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x000107c60fd0();
  }
  puVar1 = (undefined1 *)0x1;
  func_0x000107c610a0();
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x000107c60fd0();
  }
  puVar1 = (undefined1 *)0x1;
  func_0x000107c610a0();
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x000107c60fd0();
  }
  puVar1 = (undefined1 *)0x1;
  func_0x000107c610a0();
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x000107c60fd0();
  }
  return;
}



/* Entry: 100036674; end: 1000366d3;  */

undefined * FUN_100036674(void)

{
  return &UNK_1096cf0c4;
}



/* Entry: 1000366d4; end: 10003675f;  */

void FUN_1000366d4(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)0x1;
  func_0x000107c610a0();
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x000107c60fd0();
  }
  return;
}



/* Entry: 100036760; end: 100036777;  */

undefined * FUN_100036760(void)

{
  return &UNK_1096cfc6c;
}



/* Entry: 100036778; end: 10003685b;  */

void FUN_100036778(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)0x1;
  func_0x000107c610a0();
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x000107c60fd0();
  }
  puVar1 = (undefined1 *)0x1;
  func_0x000107c610a0();
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x000107c60fd0();
  }
  return;
}



/* Entry: 10003685c; end: 10003688b;  */

undefined * FUN_10003685c(void)

{
  return &UNK_1096d2140;
}



/* Entry: 10003688c; end: 100036c57;  */

void FUN_10003688c(void)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  int *piVar9;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  puVar3 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *(undefined4 *)(puVar3 + 2) = 5;
  *puVar3 = &PTR_DAT_110b07d48;
  puVar3[1] = &UNK_10f57d910;
  uVar4 = 1;
  func_0x000107c60ee8(1,0x18);
  puVar3[3] = uVar4;
  FUN_100031fe0();
  FUN_100032070();
  puVar5 = (undefined8 *)0x20;
  puRam0000000113735cb8 = puVar3;
  func_0x000107c60e20();
  *(undefined4 *)(puVar5 + 2) = 5;
  *puVar5 = &PTR_DAT_110b07e20;
  puVar5[1] = &UNK_10f57d91c;
  puVar3 = (undefined8 *)0x20;
  func_0x000107c610a0();
  puVar5[3] = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[2] = 0x3f80000000000000;
    puVar3[3] = 0;
    puVar3[1] = 0x3f800000;
    *puVar3 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  ppuStack_40 = (undefined **)0x0;
  uStack_38 = 0;
  puRam0000000113735cc0 = puVar5;
  FUN_100033528(&ppuStack_40);
  ppuStack_40 = &PTR_DAT_110b02898;
  puVar3 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *(undefined4 *)(puVar3 + 2) = 7;
  *puVar3 = &PTR_DAT_110b080f0;
  puVar3[1] = &UNK_10f57da53;
  puVar5 = (undefined8 *)0x10;
  func_0x000107c610a0();
  puVar3[3] = puVar5;
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = uStack_38;
    *puVar5 = ppuStack_40;
    if (puVar5[1] != 0) {
      piVar9 = (int *)(puVar5[1] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar2) {
          *piVar9 = *piVar9 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  FUN_100031fe0();
  FUN_100032070();
  ppuStack_40 = &PTR_DAT_110b01d60;
  puRam0000000113735cc8 = puVar3;
  FUN_100032e98(&ppuStack_40);
  puVar3 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *(undefined4 *)(puVar3 + 2) = 5;
  *puVar3 = &PTR_DAT_110b081b8;
  puVar3[1] = &UNK_10f57da5a;
  puVar5 = (undefined8 *)0x8;
  func_0x000107c610a0();
  puVar3[3] = puVar5;
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = 0x3ff0000000000000;
  }
  FUN_100031fe0();
  FUN_100032070();
  puRam0000000113735cd0 = puVar3;
  FUN_100033cac();
  puVar3 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *(undefined4 *)(puVar3 + 2) = 5;
  *puVar3 = &PTR_DAT_110b08280;
  puVar3[1] = &UNK_10f57da73;
  puVar6 = (undefined8 *)0x10;
  func_0x000107c610a0();
  puVar3[3] = puVar6;
  if (puVar6 != (undefined8 *)0x0) {
    uVar4 = *puVar5;
    puVar6[1] = puVar5[1];
    *puVar6 = uVar4;
    if (puVar6[1] != 0) {
      piVar9 = (int *)(puVar6[1] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar2) {
          *piVar9 = *piVar9 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  FUN_100031fe0();
  FUN_100032070();
  puVar5 = (undefined8 *)0x20;
  puRam0000000113735cd8 = puVar3;
  func_0x000107c60e20();
  *(undefined4 *)(puVar5 + 2) = 5;
  *puVar5 = &PTR_DAT_110b08348;
  puVar5[1] = &DAT_10f57dac3;
  puVar7 = (undefined4 *)0x4;
  func_0x000107c610a0();
  puVar5[3] = puVar7;
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  uVar4 = 0x20;
  puRam0000000113735ce0 = puVar5;
  func_0x000107c60e20();
  FUN_100036c58();
  FUN_100031fe0();
  FUN_100032070();
  uVar8 = 0x20;
  uRam0000000113735ce8 = uVar4;
  func_0x000107c60e20();
  FUN_100036c58();
  FUN_100031fe0();
  FUN_100032070();
  uRam0000000113735cf0 = uVar8;
  return;
}



/* Entry: 100036c58; end: 100036c9f;  */

undefined8 * FUN_100036c58(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined4 *)(param_1 + 2) = 5;
  *param_1 = &PTR_DAT_110b08410;
  param_1[1] = param_2;
  lVar1 = 0x10;
  func_0x000107c610a0();
  param_1[3] = lVar1;
  if (lVar1 != 0) {
    FUN_1000333e0();
  }
  return param_1;
}



/* Entry: 100036ca0; end: 100036d2b;  */

void FUN_100036ca0(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)0x1;
  func_0x000107c610a0();
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x000107c60fd0();
  }
  return;
}



/* Entry: 100036d2c; end: 100036d43;  */

undefined * FUN_100036d2c(void)

{
  return &UNK_1096d68b0;
}



/* Entry: 100036d44; end: 1000370a7;  */

void FUN_100036d44(void)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  puVar3 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *(undefined4 *)(puVar3 + 2) = 5;
  *puVar3 = &PTR_DAT_110b087d8;
  puVar3[1] = &DAT_10f389a22;
  puVar4 = (undefined8 *)0x50;
  func_0x000107c610a0();
  puVar3[3] = puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[7] = 0;
    puVar4[6] = 0;
    puVar4[9] = 0;
    puVar4[8] = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = &PTR_DAT_1108a5c28;
    puVar4[3] = 0x100000001;
    puVar4[4] = 0;
    puVar4[5] = 0;
    *(undefined1 *)(puVar4 + 6) = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  ppuStack_40 = (undefined **)0x0;
  uStack_38 = 0;
  puRam000000011382aab0 = puVar3;
  FUN_100033528(&ppuStack_40);
  ppuStack_40 = &PTR_DAT_110b02898;
  puVar3 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *(undefined4 *)(puVar3 + 2) = 7;
  *puVar3 = &PTR_DAT_110b088a0;
  puVar3[1] = &UNK_10f57da53;
  puVar4 = (undefined8 *)0x10;
  func_0x000107c610a0();
  puVar3[3] = puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[1] = uStack_38;
    *puVar4 = ppuStack_40;
    if (puVar4[1] != 0) {
      piVar6 = (int *)(puVar4[1] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = *piVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  FUN_100031fe0();
  FUN_100032070();
  ppuStack_40 = &PTR_DAT_110b01d60;
  puRam0000000113735cf8 = puVar3;
  FUN_100032e98(&ppuStack_40);
  puVar3 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *(undefined4 *)(puVar3 + 2) = 5;
  *puVar3 = &PTR_DAT_110b08968;
  puVar3[1] = &DAT_10f57dac3;
  puVar5 = (undefined4 *)0x4;
  func_0x000107c610a0();
  puVar3[3] = puVar5;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  puVar4 = (undefined8 *)0x20;
  puRam0000000113735d00 = puVar3;
  func_0x000107c60e20();
  *(undefined4 *)(puVar4 + 2) = 5;
  *puVar4 = &PTR_DAT_110b08968;
  puVar4[1] = &UNK_10f57de13;
  puVar5 = (undefined4 *)0x4;
  func_0x000107c610a0();
  puVar4[3] = puVar5;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  puVar3 = (undefined8 *)0x20;
  puRam0000000113735d08 = puVar4;
  func_0x000107c60e20();
  *(undefined4 *)(puVar3 + 2) = 5;
  *puVar3 = &PTR_DAT_110b08968;
  puVar3[1] = &UNK_10f57de27;
  puVar5 = (undefined4 *)0x4;
  func_0x000107c610a0();
  puVar3[3] = puVar5;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  puVar4 = (undefined8 *)0x20;
  puRam0000000113735d10 = puVar3;
  func_0x000107c60e20();
  *(undefined4 *)(puVar4 + 2) = 5;
  *puVar4 = &PTR_DAT_110b08968;
  puVar4[1] = &UNK_10f57de39;
  puVar5 = (undefined4 *)0x4;
  func_0x000107c610a0();
  puVar4[3] = puVar5;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  puVar3 = (undefined8 *)0x20;
  puRam0000000113735d18 = puVar4;
  func_0x000107c60e20();
  *(undefined4 *)(puVar3 + 2) = 5;
  *puVar3 = &PTR_DAT_110b08a30;
  puVar3[1] = &UNK_10f57de47;
  puVar4 = (undefined8 *)0x8;
  func_0x000107c610a0();
  puVar3[3] = puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  puRam0000000113735d20 = puVar3;
  return;
}



/* Entry: 1000370a8; end: 1000370bf;  */

undefined * FUN_1000370a8(void)

{
  return &UNK_1096d7010;
}



/* Entry: 1000370c0; end: 1000371a3;  */

void FUN_1000370c0(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)0x1;
  func_0x000107c610a0();
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x000107c60fd0();
  }
  puVar1 = (undefined1 *)0x1;
  func_0x000107c610a0();
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x000107c60fd0();
  }
  return;
}



/* Entry: 1000371a4; end: 1000371d3;  */

undefined * FUN_1000371a4(void)

{
  return &UNK_1096d9e88;
}



/* Entry: 1000371d4; end: 100037607;  */

void FUN_1000371d4(void)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  int *piVar9;
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  ppuStack_30 = (undefined **)0x0;
  uStack_28 = 0;
  FUN_100033528(&ppuStack_30);
  ppuStack_30 = &PTR_DAT_110b02898;
  puVar3 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *(undefined4 *)(puVar3 + 2) = 7;
  *puVar3 = &PTR_DAT_110b08d48;
  puVar3[1] = &UNK_10f57da53;
  puVar4 = (undefined8 *)0x10;
  func_0x000107c610a0();
  puVar3[3] = puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[1] = uStack_28;
    *puVar4 = ppuStack_30;
    if (puVar4[1] != 0) {
      piVar9 = (int *)(puVar4[1] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar2) {
          *piVar9 = *piVar9 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  FUN_100031fe0();
  FUN_100032070();
  ppuStack_30 = &PTR_DAT_110b01d60;
  puRam0000000113735d28 = puVar3;
  FUN_100032e98(&ppuStack_30);
  puVar3 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *(undefined4 *)(puVar3 + 2) = 5;
  *puVar3 = &PTR_DAT_110b08e10;
  puVar3[1] = &DAT_10f57dac3;
  puVar5 = (undefined4 *)0x4;
  func_0x000107c610a0();
  puVar3[3] = puVar5;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  uVar6 = 0x20;
  puRam0000000113735d30 = puVar3;
  func_0x000107c60e20();
  FUN_100037608();
  FUN_100031fe0();
  FUN_100032070();
  uVar7 = 0x20;
  uRam0000000113735d38 = uVar6;
  func_0x000107c60e20();
  FUN_100037608();
  FUN_100031fe0();
  FUN_100032070();
  uVar6 = 0x20;
  uRam0000000113735d40 = uVar7;
  func_0x000107c60e20();
  FUN_100037608();
  FUN_100031fe0();
  FUN_100032070();
  uVar7 = 0x20;
  uRam0000000113735d48 = uVar6;
  func_0x000107c60e20();
  FUN_100037608();
  FUN_100031fe0();
  FUN_100032070();
  uVar6 = 0x20;
  uRam0000000113735d50 = uVar7;
  func_0x000107c60e20();
  FUN_100037608();
  FUN_100031fe0();
  FUN_100032070();
  uVar7 = 0x20;
  uRam0000000113735d58 = uVar6;
  func_0x000107c60e20();
  FUN_100037608();
  FUN_100031fe0();
  FUN_100032070();
  uVar6 = 0x20;
  uRam0000000113735d60 = uVar7;
  func_0x000107c60e20();
  FUN_100037608();
  FUN_100031fe0();
  FUN_100032070();
  puVar3 = (undefined8 *)0x20;
  uRam0000000113735d68 = uVar6;
  func_0x000107c60e20();
  *(undefined4 *)(puVar3 + 2) = 5;
  *puVar3 = &PTR_DAT_110b08fa0;
  puVar3[1] = &UNK_10f57df7e;
  puVar8 = (undefined1 *)0x1;
  func_0x000107c610a0();
  puVar3[3] = puVar8;
  if (puVar8 != (undefined1 *)0x0) {
    *puVar8 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  puVar4 = (undefined8 *)0x20;
  puRam0000000113735d70 = puVar3;
  func_0x000107c60e20();
  *(undefined4 *)(puVar4 + 2) = 5;
  *puVar4 = &PTR_DAT_110b09068;
  puVar4[1] = &UNK_10f57df94;
  puVar3 = (undefined8 *)0x8;
  func_0x000107c610a0();
  puVar4[3] = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 0x3fb999999999999a;
  }
  FUN_100031fe0();
  FUN_100032070();
  puRam0000000113735d78 = puVar4;
  return;
}



/* Entry: 100037608; end: 10003764f;  */

undefined8 * FUN_100037608(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined4 *)(param_1 + 2) = 5;
  *param_1 = &PTR_DAT_110b08ed8;
  param_1[1] = param_2;
  lVar1 = 0x10;
  func_0x000107c610a0();
  param_1[3] = lVar1;
  if (lVar1 != 0) {
    FUN_1000333e0();
  }
  return param_1;
}



/* Entry: 100037650; end: 1000376db;  */

void FUN_100037650(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)0x1;
  func_0x000107c610a0();
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x000107c60fd0();
  }
  return;
}



/* Entry: 1000376dc; end: 1000376f3;  */

undefined * FUN_1000376dc(void)

{
  return &UNK_1096dbb14;
}



/* Entry: 1000376f4; end: 10003777f;  */

void FUN_1000376f4(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)0x1;
  func_0x000107c610a0();
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x000107c60fd0();
  }
  return;
}



/* Entry: 100037780; end: 100037797;  */

undefined * FUN_100037780(void)

{
  return &UNK_1096dd128;
}



/* Entry: 100037798; end: 100037817;  */

void FUN_100037798(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *(undefined4 *)(puVar1 + 2) = 5;
  *puVar1 = &PTR_DAT_110b09380;
  puVar1[1] = &UNK_10f57e26d;
  puVar2 = (undefined8 *)0x8;
  func_0x000107c610a0();
  puVar1[3] = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  puRam000000011382aab8 = puVar1;
  return;
}



/* Entry: 100037818; end: 1000378a3;  */

void FUN_100037818(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)0x1;
  func_0x000107c610a0();
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x000107c60fd0();
  }
  return;
}



/* Entry: 1000378a4; end: 1000378bb;  */

undefined * FUN_1000378a4(void)

{
  return &UNK_1096dda78;
}



/* Entry: 1000378bc; end: 100037947;  */

void FUN_1000378bc(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)0x1;
  func_0x000107c610a0();
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x000107c60fd0();
  }
  return;
}



/* Entry: 100037948; end: 10003795f;  */

undefined * FUN_100037948(void)

{
  return &UNK_1096dead4;
}



/* Entry: 100037960; end: 1000379eb;  */

void FUN_100037960(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)0x1;
  func_0x000107c610a0();
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x000107c60fd0();
  }
  return;
}



/* Entry: 1000379ec; end: 100037a03;  */

undefined * FUN_1000379ec(void)

{
  return &UNK_1096e0c4c;
}



/* Entry: 100037a04; end: 100037a87;  */

void FUN_100037a04(void)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *(undefined4 *)(puVar1 + 2) = 5;
  *puVar1 = &PTR_DAT_110b09c28;
  puVar1[1] = &UNK_10f57e3ab;
  puVar2 = (undefined4 *)0x4;
  func_0x000107c610a0();
  puVar1[3] = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 1;
  }
  FUN_100031fe0();
  FUN_100032070();
  puRam0000000113735d80 = puVar1;
  return;
}



/* Entry: 100037a88; end: 100037a9f;  */

undefined * FUN_100037a88(void)

{
  return &UNK_1096e1928;
}



/* Entry: 100037aa0; end: 100037b2b;  */

void FUN_100037aa0(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)0x1;
  func_0x000107c610a0();
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x000107c60fd0();
  }
  return;
}



/* Entry: 100037b2c; end: 100037b43;  */

undefined * FUN_100037b2c(void)

{
  return &UNK_1096e2088;
}



/* Entry: 100037b44; end: 100037c2b;  */

void FUN_100037b44(void)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *(undefined4 *)(puVar1 + 2) = 5;
  *puVar1 = &PTR_DAT_110b09e80;
  puVar1[1] = &UNK_10f57e407;
  puVar2 = (undefined1 *)0x1;
  func_0x000107c610a0();
  puVar1[3] = puVar2;
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  puVar3 = (undefined8 *)0x20;
  puRam0000000113735d88 = puVar1;
  func_0x000107c60e20();
  *(undefined4 *)(puVar3 + 2) = 0;
  *puVar3 = &PTR_DAT_110b09f48;
  puVar3[1] = &DAT_10f57e415;
  uVar4 = 1;
  func_0x000107c60ee8(1,0x18);
  puVar3[3] = uVar4;
  FUN_100031fe0();
  FUN_100032070();
  puRam000000011382aac0 = puVar3;
  return;
}



/* Entry: 100037c2c; end: 100037cb7;  */

void FUN_100037c2c(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)0x1;
  func_0x000107c610a0();
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x000107c60fd0();
  }
  return;
}



/* Entry: 100037cb8; end: 100037ccf;  */

undefined * FUN_100037cb8(void)

{
  return &UNK_1096e2c14;
}



/* Entry: 100037cd0; end: 100037d5b;  */

void FUN_100037cd0(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)0x1;
  func_0x000107c610a0();
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x000107c60fd0();
  }
  return;
}



/* Entry: 100037d5c; end: 100037d73;  */

undefined * FUN_100037d5c(void)

{
  return &UNK_1096e3cf4;
}



/* Entry: 100037d74; end: 100037fcb;  */

void FUN_100037d74(void)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  int *piVar8;
  
  puVar3 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *(undefined4 *)(puVar3 + 2) = 5;
  *puVar3 = &PTR_DAT_110b0a368;
  puVar3[1] = &DAT_10f57e519;
  uVar4 = 1;
  func_0x000107c60ee8(1,0x18);
  puVar3[3] = uVar4;
  FUN_100031fe0();
  FUN_100032070();
  puVar5 = (undefined8 *)0x20;
  puRam000000011382aac8 = puVar3;
  func_0x000107c60e20();
  *(undefined4 *)(puVar5 + 2) = 5;
  *puVar5 = &PTR_DAT_110b0a458;
  puVar5[1] = &UNK_10f57e522;
  puVar6 = (undefined4 *)0x4;
  func_0x000107c610a0();
  puVar5[3] = puVar6;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  puVar3 = (undefined8 *)0x20;
  puRam000000011382aad0 = puVar5;
  func_0x000107c60e20();
  *(undefined4 *)(puVar3 + 2) = 5;
  *puVar3 = &PTR_DAT_110b0a458;
  puVar3[1] = &UNK_10f57e52d;
  puVar5 = (undefined8 *)0x4;
  func_0x000107c610a0();
  puVar3[3] = puVar5;
  if (puVar5 != (undefined8 *)0x0) {
    *(undefined4 *)puVar5 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  puRam000000011382aad8 = puVar3;
  FUN_100033cac();
  puVar3 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *(undefined4 *)(puVar3 + 2) = 5;
  *puVar3 = &PTR_DAT_110b0a520;
  puVar3[1] = &UNK_10f57e538;
  puVar7 = (undefined8 *)0x10;
  func_0x000107c610a0();
  puVar3[3] = puVar7;
  if (puVar7 != (undefined8 *)0x0) {
    uVar4 = *puVar5;
    puVar7[1] = puVar5[1];
    *puVar7 = uVar4;
    if (puVar7[1] != 0) {
      piVar8 = (int *)(puVar7[1] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = *piVar8 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  FUN_100031fe0();
  FUN_100032070();
  puRam000000011382aae0 = puVar3;
  FUN_100033cac();
  puVar3 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *(undefined4 *)(puVar3 + 2) = 5;
  *puVar3 = &PTR_DAT_110b0a520;
  puVar3[1] = &UNK_10f57e544;
  puVar5 = (undefined8 *)0x10;
  func_0x000107c610a0();
  puVar3[3] = puVar5;
  if (puVar5 != (undefined8 *)0x0) {
    uVar4 = *puVar7;
    puVar5[1] = puVar7[1];
    *puVar5 = uVar4;
    if (puVar5[1] != 0) {
      piVar8 = (int *)(puVar5[1] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = *piVar8 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  FUN_100031fe0();
  FUN_100032070();
  puRam000000011382aae8 = puVar3;
  return;
}



/* Entry: 100037fcc; end: 100037fdf;  */

undefined8 FUN_100037fcc(void)

{
  return 0;
}



/* Entry: 100037fe0; end: 10003812b;  */

void FUN_100037fe0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *(undefined4 *)(puVar1 + 2) = 5;
  *puVar1 = &PTR_DAT_110b0a630;
  puVar1[1] = &UNK_10f57e59e;
  puVar2 = (undefined8 *)0x8;
  func_0x000107c610a0();
  puVar1[3] = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  puVar2 = (undefined8 *)0x20;
  puRam000000011382aaf0 = puVar1;
  func_0x000107c60e20();
  *(undefined4 *)(puVar2 + 2) = 5;
  *puVar2 = &PTR_DAT_110b0a630;
  puVar2[1] = &UNK_10f57e5ac;
  puVar1 = (undefined8 *)0x8;
  func_0x000107c610a0();
  puVar2[3] = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  puVar1 = (undefined8 *)0x20;
  puRam000000011382aaf8 = puVar2;
  func_0x000107c60e20();
  *(undefined4 *)(puVar1 + 2) = 5;
  *puVar1 = &PTR_DAT_110b0a6f8;
  puVar1[1] = &UNK_10f57e5ba;
  puVar3 = (undefined4 *)0x4;
  func_0x000107c610a0();
  puVar1[3] = puVar3;
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  puRam000000011382ab00 = puVar1;
  return;
}



/* Entry: 10003812c; end: 100038143;  */

undefined * FUN_10003812c(void)

{
  return &UNK_1096e5f4c;
}



/* Entry: 100038144; end: 1000381eb;  */

undefined8 * FUN_100038144(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_DAT_110b01d60;
  puVar1 = (undefined8 *)0x28;
  func_0x000107c610a0();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_FUN_110b00de0;
  }
  *param_1 = &PTR_DAT_110b01738;
  param_1[1] = puVar1;
  puVar1 = param_1;
  FUN_100033474(param_1,0x48);
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 8) = 0x3f800000;
  *puVar1 = &PTR_DAT_110b01848;
  return param_1;
}



/* Entry: 1000381ec; end: 10003867f;  */

void FUN_1000381ec(void)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  FUN_100038144(&ppuStack_40);
  puVar3 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *(undefined4 *)(puVar3 + 2) = 7;
  *puVar3 = &PTR_DAT_110b0a880;
  puVar3[1] = &UNK_10f57e623;
  puVar4 = (undefined8 *)0x10;
  func_0x000107c610a0();
  puVar3[3] = puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[1] = uStack_38;
    *puVar4 = ppuStack_40;
    if (puVar4[1] != 0) {
      piVar8 = (int *)(puVar4[1] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = *piVar8 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  FUN_100031fe0();
  FUN_100032070();
  ppuStack_40 = &PTR_DAT_110b01d60;
  puRam000000011382ab08 = puVar3;
  FUN_100032e98(&ppuStack_40);
  puVar3 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *(undefined4 *)(puVar3 + 2) = 5;
  *puVar3 = &PTR_DAT_110b0a948;
  puVar3[1] = &UNK_10f57e63c;
  puVar4 = (undefined8 *)0x1;
  func_0x000107c610a0();
  puVar3[3] = puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined1 *)puVar4 = 1;
  }
  FUN_100031fe0();
  FUN_100032070();
  puRam0000000113735d90 = puVar3;
  FUN_100033cac();
  puVar3 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *(undefined4 *)(puVar3 + 2) = 5;
  *puVar3 = &PTR_DAT_110b0aa10;
  puVar3[1] = &UNK_10f57e64a;
  puVar5 = (undefined8 *)0x10;
  func_0x000107c610a0();
  puVar3[3] = puVar5;
  if (puVar5 != (undefined8 *)0x0) {
    uVar9 = *puVar4;
    puVar5[1] = puVar4[1];
    *puVar5 = uVar9;
    if (puVar5[1] != 0) {
      piVar8 = (int *)(puVar5[1] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = *piVar8 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  FUN_100031fe0();
  FUN_100032070();
  puVar4 = (undefined8 *)0x20;
  puRam0000000113735d98 = puVar3;
  func_0x000107c60e20();
  *(undefined4 *)(puVar4 + 2) = 5;
  *puVar4 = &PTR_DAT_110b0a948;
  puVar4[1] = &UNK_10f57e65e;
  puVar6 = (undefined1 *)0x1;
  func_0x000107c610a0();
  puVar4[3] = puVar6;
  if (puVar6 != (undefined1 *)0x0) {
    *puVar6 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  puVar3 = (undefined8 *)0x20;
  puRam0000000113735da0 = puVar4;
  func_0x000107c60e20();
  *(undefined4 *)(puVar3 + 2) = 5;
  *puVar3 = &PTR_DAT_110b0acd8;
  puVar3[1] = &UNK_10f57e6c7;
  lVar7 = 0x10;
  func_0x000107c610a0();
  puVar3[3] = lVar7;
  if (lVar7 != 0) {
    FUN_1000333e0();
  }
  FUN_100031fe0();
  FUN_100032070();
  puVar4 = (undefined8 *)0x20;
  puRam0000000113735da8 = puVar3;
  func_0x000107c60e20();
  *(undefined4 *)(puVar4 + 2) = 5;
  *puVar4 = &PTR_DAT_110b0ada0;
  puVar4[1] = &UNK_10f57e6d5;
  puVar3 = (undefined8 *)0x8;
  func_0x000107c610a0();
  puVar4[3] = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  puVar3 = (undefined8 *)0x20;
  puRam0000000113735db0 = puVar4;
  func_0x000107c60e20();
  *(undefined4 *)(puVar3 + 2) = 5;
  *puVar3 = &PTR_DAT_110b0ada0;
  puVar3[1] = &UNK_10f57e6e9;
  puVar4 = (undefined8 *)0x8;
  func_0x000107c610a0();
  puVar3[3] = puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  puVar4 = (undefined8 *)0x20;
  puRam0000000113735db8 = puVar3;
  func_0x000107c60e20();
  *(undefined4 *)(puVar4 + 2) = 5;
  *puVar4 = &PTR_DAT_110b0ae68;
  puVar4[1] = &UNK_10f57e6f2;
  puVar3 = (undefined8 *)0x8;
  func_0x000107c610a0();
  puVar4[3] = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  puVar3 = (undefined8 *)0x20;
  puRam000000011382ab10 = puVar4;
  func_0x000107c60e20();
  *(undefined4 *)(puVar3 + 2) = 5;
  *puVar3 = &PTR_DAT_110b0a948;
  puVar3[1] = &UNK_10f57e6fc;
  puVar6 = (undefined1 *)0x1;
  func_0x000107c610a0();
  puVar3[3] = puVar6;
  if (puVar6 != (undefined1 *)0x0) {
    *puVar6 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  puVar4 = (undefined8 *)0x20;
  puRam000000011382ab18 = puVar3;
  func_0x000107c60e20();
  *(undefined4 *)(puVar4 + 2) = 5;
  *puVar4 = &PTR_DAT_110b0ada0;
  puVar4[1] = &UNK_10f5728c4;
  puVar3 = (undefined8 *)0x8;
  func_0x000107c610a0();
  puVar4[3] = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  puRam0000000113735dc0 = puVar4;
  return;
}



/* Entry: 100038680; end: 100038697;  */

undefined * FUN_100038680(void)

{
  return &UNK_1096e7d60;
}



/* Entry: 100038698; end: 1000386b3;  */

void FUN_100038698(undefined4 param_1)

{
  func_0x000107c60d9c();
  uRam000000011382ab20 = param_1;
  return;
}



/* Entry: 1000386b4; end: 1000386f3;  */

void FUN_1000386b4(void)

{
  func_0x000107c60ee4(0x113737e30,0xae1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_atexit_11034bd48)(&UNK_1098a04dc,0x113737e30,0x100000000);
  return;
}



/* Entry: 1000386f4; end: 10003875f;  */

void FUN_1000386f4(undefined8 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  iVar2 = *param_2;
  iVar3 = param_2[1];
  uVar5 = 0xbf800000;
  if (-1 < iVar2) {
    uVar5 = 0x3f800000;
  }
  iVar1 = -iVar2;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  *(undefined4 *)((long)param_1 + (long)(iVar1 + -1) * 0xc) = uVar5;
  uVar5 = 0xbf800000;
  if (-1 < iVar3) {
    uVar5 = 0x3f800000;
  }
  iVar2 = -iVar3;
  if (-1 < iVar3) {
    iVar2 = iVar3;
  }
  *(undefined4 *)((long)param_1 + (long)(iVar2 + -1) * 0xc + 4) = uVar5;
  iVar2 = param_2[2];
  uVar4 = 0xbf;
  if (-1 < iVar2) {
    uVar4 = 0x3f;
  }
  iVar3 = -iVar2;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)((long)param_1 + (long)(iVar3 + -1) * 0xc + 8) = CONCAT13(uVar4,0x800000);
  return;
}



/* Entry: 100038760; end: 1000387eb;  */

undefined4 *
FUN_100038760(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  *(undefined1 *)(param_1 + 3) = 1;
  FUN_1000386f4(&fStack_44);
  *(bool *)(param_1 + 3) =
       0.0 < fStack_2c * (-(fStack_34 * fStack_3c) + fStack_30 * fStack_40) +
             (fStack_44 * (-(fStack_28 * fStack_30) + fStack_24 * fStack_34) -
             fStack_38 * (-(fStack_28 * fStack_3c) + fStack_24 * fStack_40));
  return param_1;
}



/* Entry: 1000387ec; end: 10003977b;  */

undefined1  [16] FUN_1000387ec(void)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  mach_header *pmVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined4 *puVar16;
  long *plVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  long *plVar20;
  undefined4 *puVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  long *plStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined4 uStack_7c4;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined4 uStack_7b0;
  undefined8 uStack_7ac;
  undefined8 uStack_7a4;
  undefined4 uStack_79c;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined4 uStack_788;
  undefined8 uStack_784;
  undefined8 uStack_77c;
  undefined4 uStack_774;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined4 uStack_760;
  undefined8 uStack_75c;
  undefined8 uStack_754;
  undefined4 uStack_74c;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined4 uStack_738;
  undefined8 uStack_734;
  undefined8 uStack_72c;
  undefined4 uStack_724;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined4 uStack_710;
  undefined8 uStack_70c;
  undefined8 uStack_704;
  undefined4 uStack_6fc;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined4 uStack_6e8;
  undefined8 uStack_6e4;
  undefined8 uStack_6dc;
  undefined4 uStack_6d4;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined4 uStack_6c0;
  undefined8 uStack_6bc;
  undefined8 uStack_6b4;
  undefined4 uStack_6ac;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined4 uStack_698;
  undefined8 uStack_694;
  undefined8 uStack_68c;
  undefined4 uStack_684;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined4 uStack_670;
  undefined8 uStack_66c;
  undefined8 uStack_664;
  undefined4 uStack_65c;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined4 uStack_648;
  undefined8 uStack_644;
  undefined8 uStack_63c;
  undefined4 uStack_634;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined4 uStack_620;
  undefined8 uStack_61c;
  undefined8 uStack_614;
  undefined4 uStack_60c;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined4 uStack_5f8;
  undefined8 uStack_5f4;
  undefined8 uStack_5ec;
  undefined4 uStack_5e4;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined4 uStack_5d0;
  undefined8 uStack_5cc;
  undefined8 uStack_5c4;
  undefined4 uStack_5bc;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined4 uStack_5a8;
  undefined8 uStack_5a4;
  undefined8 uStack_59c;
  undefined4 uStack_594;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined4 uStack_580;
  undefined8 uStack_57c;
  undefined8 uStack_574;
  undefined4 uStack_56c;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined4 uStack_558;
  undefined8 uStack_554;
  undefined8 uStack_54c;
  undefined4 uStack_544;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined4 uStack_530;
  undefined8 uStack_52c;
  undefined8 uStack_524;
  undefined4 uStack_51c;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined4 uStack_508;
  undefined8 uStack_504;
  undefined8 uStack_4fc;
  undefined4 uStack_4f4;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined4 uStack_4e0;
  undefined8 uStack_4dc;
  undefined8 uStack_4d4;
  undefined4 uStack_4cc;
  undefined4 uStack_4b8;
  undefined8 uStack_4ac;
  undefined4 uStack_4a4;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined4 uStack_490;
  undefined8 uStack_48c;
  undefined8 uStack_484;
  undefined4 uStack_47c;
  long *plStack_478;
  undefined8 uStack_470;
  undefined4 uStack_468;
  undefined8 uStack_464;
  undefined8 uStack_45c;
  undefined4 uStack_454;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined4 uStack_440;
  undefined8 uStack_43c;
  undefined8 uStack_434;
  undefined4 uStack_42c;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined4 uStack_418;
  undefined8 uStack_414;
  undefined8 uStack_40c;
  undefined4 uStack_404;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined4 uStack_3f0;
  undefined8 uStack_3ec;
  undefined8 uStack_3e4;
  undefined4 uStack_3dc;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined4 uStack_3c8;
  undefined8 uStack_3c4;
  undefined8 uStack_3bc;
  undefined4 uStack_3b4;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined4 uStack_3a0;
  undefined8 uStack_39c;
  undefined8 uStack_394;
  undefined4 uStack_38c;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined4 uStack_378;
  undefined8 uStack_374;
  undefined8 uStack_36c;
  undefined4 uStack_364;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined4 uStack_350;
  undefined8 uStack_34c;
  undefined8 uStack_344;
  undefined4 uStack_33c;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined4 uStack_328;
  undefined8 uStack_324;
  undefined8 uStack_31c;
  undefined4 uStack_314;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined4 uStack_300;
  undefined8 uStack_2fc;
  undefined8 uStack_2f4;
  undefined4 uStack_2ec;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined4 uStack_2b0;
  undefined8 uStack_2ac;
  undefined8 uStack_2a4;
  undefined4 uStack_29c;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined4 uStack_288;
  undefined8 uStack_284;
  undefined8 uStack_27c;
  undefined4 uStack_274;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined4 uStack_260;
  undefined8 uStack_25c;
  undefined8 uStack_254;
  undefined4 uStack_24c;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined4 uStack_238;
  undefined8 uStack_234;
  undefined8 uStack_22c;
  undefined4 uStack_224;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined4 uStack_210;
  undefined8 uStack_20c;
  undefined8 uStack_204;
  undefined4 uStack_1fc;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined4 uStack_1e8;
  undefined8 uStack_1e4;
  undefined8 uStack_1dc;
  undefined4 uStack_1d4;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  undefined8 uStack_1bc;
  undefined8 uStack_1b4;
  undefined4 uStack_1ac;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  undefined8 uStack_194;
  undefined8 uStack_18c;
  undefined4 uStack_184;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined8 uStack_16c;
  undefined8 uStack_164;
  undefined4 uStack_15c;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined8 uStack_144;
  undefined8 uStack_13c;
  undefined4 uStack_134;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined8 uStack_11c;
  undefined8 uStack_114;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined8 uStack_f4;
  undefined8 uStack_ec;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  int aiStack_d0 [2];
  undefined8 auStack_c8 [5];
  undefined4 uStack_a0;
  undefined1 auStack_98 [40];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_100038760(0x11373bf40,1,0xfffffffe,0xfffffffd);
  FUN_100038760(0x11373bf50,1,2,3);
  FUN_100038760(0x11373bf60,1,2,0xfffffffd);
  FUN_100038760(0x11373bf70,1,3,0xfffffffe);
  FUN_100038760(0x11373bf80,1,2,3);
  FUN_100038760(0x11373bf90,1,2,0xfffffffd);
  uStack_7b8 = uRam000000011373bf48;
  uStack_7c0 = uRam000000011373bf40;
  uStack_7c4 = 0x17;
  uStack_7b0 = 0x18;
  uStack_7a4 = uRam000000011373bf48;
  uStack_7ac = uRam000000011373bf40;
  uStack_790 = uRam000000011373bf48;
  uStack_798 = uRam000000011373bf40;
  uStack_79c = 0x19;
  uStack_788 = 5;
  uStack_77c = uRam000000011373bf48;
  uStack_784 = uRam000000011373bf40;
  uStack_768 = uRam000000011373bf48;
  uStack_770 = uRam000000011373bf40;
  uStack_774 = 6;
  uStack_760 = 7;
  uStack_754 = uRam000000011373bf48;
  uStack_75c = uRam000000011373bf40;
  uStack_740 = uRam000000011373bf48;
  uStack_748 = uRam000000011373bf40;
  uStack_74c = 8;
  uStack_738 = 9;
  uStack_72c = uRam000000011373bf48;
  uStack_734 = uRam000000011373bf40;
  uStack_718 = uRam000000011373bf48;
  uStack_720 = uRam000000011373bf40;
  uStack_724 = 10;
  uStack_710 = 0xb;
  uStack_704 = uRam000000011373bf48;
  uStack_70c = uRam000000011373bf40;
  uStack_6f0 = uRam000000011373bf48;
  uStack_6f8 = uRam000000011373bf40;
  uStack_6fc = 0xc;
  uStack_6e8 = 0xd;
  uStack_6dc = uRam000000011373bf48;
  uStack_6e4 = uRam000000011373bf40;
  uStack_6c8 = uRam000000011373bf48;
  uStack_6d0 = uRam000000011373bf40;
  uStack_6d4 = 0xe;
  uStack_6c0 = 0xf;
  uStack_6b4 = uRam000000011373bf48;
  uStack_6bc = uRam000000011373bf40;
  uStack_6ac = 0x10;
  uStack_6a0 = uRam000000011373bf48;
  uStack_6a8 = uRam000000011373bf40;
  uStack_698 = 0x11;
  uStack_68c = uRam000000011373bf48;
  uStack_694 = uRam000000011373bf40;
  uStack_684 = 0x12;
  uStack_678 = uRam000000011373bf48;
  uStack_680 = uRam000000011373bf40;
  uStack_670 = 0x13;
  uStack_664 = uRam000000011373bf48;
  uStack_66c = uRam000000011373bf40;
  uStack_65c = 0x14;
  uStack_650 = uRam000000011373bf48;
  uStack_658 = uRam000000011373bf40;
  uStack_648 = 0x15;
  uStack_63c = uRam000000011373bf48;
  uStack_644 = uRam000000011373bf40;
  uStack_634 = 0x16;
  uStack_628 = uRam000000011373bf48;
  uStack_630 = uRam000000011373bf40;
  uStack_620 = 0x1b;
  uStack_614 = uRam000000011373bf48;
  uStack_61c = uRam000000011373bf40;
  uStack_60c = 0x1c;
  uStack_600 = uRam000000011373bf48;
  uStack_608 = uRam000000011373bf40;
  uStack_5f8 = 0x1a;
  uStack_5ec = uRam000000011373bf48;
  uStack_5f4 = uRam000000011373bf40;
  uStack_5e4 = 0x28;
  uStack_5d8 = uRam000000011373bf48;
  uStack_5e0 = uRam000000011373bf40;
  uStack_5d0 = 0x25;
  uStack_5c4 = uRam000000011373bf48;
  uStack_5cc = uRam000000011373bf40;
  uStack_5bc = 0x26;
  uStack_5b0 = uRam000000011373bf48;
  uStack_5b8 = uRam000000011373bf40;
  uStack_5a8 = 0x27;
  uStack_59c = uRam000000011373bf48;
  uStack_5a4 = uRam000000011373bf40;
  uStack_594 = 0x30;
  uStack_588 = uRam000000011373bf48;
  uStack_590 = uRam000000011373bf40;
  uStack_580 = 0x31;
  uStack_574 = uRam000000011373bf48;
  uStack_57c = uRam000000011373bf40;
  uStack_56c = 0x32;
  uStack_560 = uRam000000011373bf48;
  uStack_568 = uRam000000011373bf40;
  uStack_558 = 0x33;
  uStack_54c = uRam000000011373bf48;
  uStack_554 = uRam000000011373bf40;
  uStack_544 = 0x34;
  uStack_538 = uRam000000011373bf48;
  uStack_540 = uRam000000011373bf40;
  uStack_530 = 0x35;
  uStack_524 = uRam000000011373bf48;
  uStack_52c = uRam000000011373bf40;
  uStack_51c = 0x36;
  uStack_510 = uRam000000011373bf48;
  uStack_518 = uRam000000011373bf40;
  uStack_508 = 0x37;
  uStack_4fc = uRam000000011373bf48;
  uStack_504 = uRam000000011373bf40;
  uStack_4f4 = 0x38;
  uStack_4e8 = uRam000000011373bf48;
  uStack_4f0 = uRam000000011373bf40;
  uStack_4e0 = 0x39;
  uStack_4d4 = uRam000000011373bf48;
  uStack_4dc = uRam000000011373bf40;
  FUN_100038760(&uStack_2d8,1,2,3);
  uStack_4cc = 0x3a;
  FUN_100038760(aiStack_d0,1,2,3);
  uStack_4b8 = 0x3b;
  uStack_4ac = auStack_c8[0];
  FUN_100038760(&uStack_808,1,2,3);
  uStack_4a4 = 0x3c;
  uStack_498 = uStack_800;
  uStack_4a0 = uStack_808;
  FUN_100038760(&uStack_840,1,2,3);
  uStack_490 = 0x3d;
  uStack_484 = uStack_838;
  uStack_48c = uStack_840;
  FUN_100038760(&plStack_7e0,1,2,3);
  uStack_47c = 0x3e;
  uStack_470 = uStack_7d8;
  plStack_478 = plStack_7e0;
  uStack_468 = 0x1d;
  uStack_45c = uRam000000011373bf48;
  uStack_464 = uRam000000011373bf40;
  uStack_454 = 0x1e;
  uStack_448 = uRam000000011373bf48;
  uStack_450 = uRam000000011373bf40;
  uStack_440 = 0x1f;
  uStack_434 = uRam000000011373bf48;
  uStack_43c = uRam000000011373bf40;
  uStack_42c = 0x20;
  uStack_420 = uRam000000011373bf48;
  uStack_428 = uRam000000011373bf40;
  uStack_418 = 0x2a;
  uStack_40c = uRam000000011373bf48;
  uStack_414 = uRam000000011373bf40;
  uStack_404 = 0x22;
  uStack_3f8 = uRam000000011373bf48;
  uStack_400 = uRam000000011373bf40;
  uStack_3f0 = 0x21;
  uStack_3e4 = uRam000000011373bf48;
  uStack_3ec = uRam000000011373bf40;
  uStack_3dc = 0x2f;
  uStack_3d0 = uRam000000011373bf48;
  uStack_3d8 = uRam000000011373bf40;
  uStack_3c8 = 0x24;
  uStack_3bc = uRam000000011373bf48;
  uStack_3c4 = uRam000000011373bf40;
  FUN_100038760(&uStack_818,1,0xfffffffe,0xfffffffd);
  uStack_3b4 = 0x2c;
  uStack_3a8 = uStack_810;
  uStack_3b0 = uStack_818;
  uStack_3a0 = 0x2b;
  uStack_394 = uRam000000011373bf78;
  uStack_39c = uRam000000011373bf70;
  uStack_38c = 0x2d;
  uStack_380 = uRam000000011373bf78;
  uStack_388 = uRam000000011373bf70;
  uStack_378 = 0x2e;
  uStack_36c = uRam000000011373bf78;
  uStack_374 = uRam000000011373bf70;
  FUN_100038760(&uStack_850,1,2,3);
  uStack_364 = 0x23;
  uStack_358 = uStack_848;
  uStack_360 = uStack_850;
  FUN_100038760(&uStack_860,1,2,3);
  uStack_350 = 0;
  uStack_344 = uStack_858;
  uStack_34c = uStack_860;
  FUN_100038760(&uStack_870,1,2,3);
  uStack_33c = 1;
  uStack_330 = uStack_868;
  uStack_338 = uStack_870;
  FUN_100038760(&uStack_880,1,2,3);
  uStack_328 = 0x29;
  uStack_31c = uStack_878;
  uStack_324 = uStack_880;
  FUN_100038760(&uStack_890,1,2,3);
  uStack_314 = 2;
  uStack_308 = uStack_888;
  uStack_310 = uStack_890;
  FUN_100038760(&uStack_8a0,1,2,3);
  uStack_300 = 3;
  uStack_2f4 = uStack_898;
  uStack_2fc = uStack_8a0;
  FUN_100038760(&uStack_8b0,1,2,3);
  lVar23 = 0;
  uStack_2ec = 4;
  uStack_2e0 = uStack_8a8;
  uStack_2e8 = uStack_8b0;
  uRam000000011382b9c0 = 0;
  uRam000000011382b9b8 = 0;
  uRam000000011382b9d0 = 0;
  uRam000000011382b9c8 = 0;
  uRam000000011382b9d8 = 0x3f800000;
  do {
    FUN_10003977c(0x11382b9b8,(long)&uStack_7c4 + lVar23,(long)&uStack_7c4 + lVar23);
    lVar23 = lVar23 + 0x14;
  } while (lVar23 != 0x4ec);
  func_0x000107c60e34(&UNK_1098f6b24,0x11382b9b8,0x100000000);
  uStack_7b8 = uRam000000011373bf58;
  uStack_7c0 = uRam000000011373bf50;
  uStack_7c4 = 0x22;
  uStack_7b0 = 0x21;
  uStack_7a4 = uRam000000011373bf58;
  uStack_7ac = uRam000000011373bf50;
  uStack_790 = uRam000000011373bf58;
  uStack_798 = uRam000000011373bf50;
  uStack_79c = 0x1d;
  uStack_788 = 0x1e;
  uStack_77c = uRam000000011373bf58;
  uStack_784 = uRam000000011373bf50;
  uStack_768 = uRam000000011373bf58;
  uStack_770 = uRam000000011373bf50;
  uStack_774 = 8;
  uStack_760 = 9;
  uStack_754 = uRam000000011373bf58;
  uStack_75c = uRam000000011373bf50;
  uStack_740 = uRam000000011373bf58;
  uStack_748 = uRam000000011373bf50;
  uStack_74c = 0x17;
  uStack_738 = 5;
  uStack_72c = uRam000000011373bf58;
  uStack_734 = uRam000000011373bf50;
  uStack_718 = uRam000000011373bf58;
  uStack_720 = uRam000000011373bf50;
  uStack_724 = 6;
  uStack_710 = 0x1a;
  uStack_704 = uRam000000011373bf58;
  uStack_70c = uRam000000011373bf50;
  uStack_6f0 = uRam000000011373bf58;
  uStack_6f8 = uRam000000011373bf50;
  uStack_6fc = 0xc;
  uStack_6e8 = 0xd;
  uStack_6dc = uRam000000011373bf58;
  uStack_6e4 = uRam000000011373bf50;
  uStack_6c8 = uRam000000011373bf58;
  uStack_6d0 = uRam000000011373bf50;
  uStack_6d4 = 0xe;
  uStack_6c0 = 0xf;
  uStack_6b4 = uRam000000011373bf58;
  uStack_6bc = uRam000000011373bf50;
  uStack_6ac = 0x10;
  uStack_6a0 = uRam000000011373bf58;
  uStack_6a8 = uRam000000011373bf50;
  uStack_698 = 0x11;
  uStack_68c = uRam000000011373bf58;
  uStack_694 = uRam000000011373bf50;
  uStack_684 = 0x12;
  uStack_678 = uRam000000011373bf58;
  uStack_680 = uRam000000011373bf50;
  uStack_670 = 0x13;
  uStack_664 = uRam000000011373bf58;
  uStack_66c = uRam000000011373bf50;
  uStack_65c = 0x14;
  uStack_650 = uRam000000011373bf58;
  uStack_658 = uRam000000011373bf50;
  uStack_648 = 0x15;
  uStack_63c = uRam000000011373bf58;
  uStack_644 = uRam000000011373bf50;
  uStack_634 = 0x16;
  uStack_628 = uRam000000011373bf58;
  uStack_630 = uRam000000011373bf50;
  FUN_100038760(&uStack_818,1,2,3);
  uStack_620 = 0x2c;
  uStack_614 = uStack_810;
  uStack_61c = uStack_818;
  uStack_60c = 0x2b;
  uStack_600 = uRam000000011373bf88;
  uStack_608 = uRam000000011373bf80;
  uStack_5f8 = 0x2d;
  uStack_5ec = uRam000000011373bf88;
  uStack_5f4 = uRam000000011373bf80;
  uStack_5e4 = 0x2e;
  uStack_5d8 = uRam000000011373bf88;
  uStack_5e0 = uRam000000011373bf80;
  uStack_5d0 = 0x2f;
  uStack_5c4 = uRam000000011373bf58;
  uStack_5cc = uRam000000011373bf50;
  FUN_100039d88(&uStack_808,&uStack_7c4,0x1a);
  aiStack_d0[0] = 0;
  FUN_100039fd0(auStack_c8,&uStack_808);
  uStack_2cc = (undefined4)uRam000000011373bf68;
  uStack_2c8 = (undefined4)((ulong)uRam000000011373bf68 >> 0x20);
  uStack_2d4 = (undefined4)uRam000000011373bf60;
  uStack_2d0 = (undefined4)((ulong)uRam000000011373bf60 >> 0x20);
  uStack_2d8 = 0x22;
  uStack_2c4 = 0x21;
  uStack_2b8 = uRam000000011373bf68;
  uStack_2c0 = uRam000000011373bf60;
  uStack_2a4 = uRam000000011373bf68;
  uStack_2ac = uRam000000011373bf60;
  uStack_2b0 = 0x1d;
  uStack_29c = 0x1e;
  uStack_290 = uRam000000011373bf68;
  uStack_298 = uRam000000011373bf60;
  uStack_27c = uRam000000011373bf68;
  uStack_284 = uRam000000011373bf60;
  uStack_288 = 8;
  uStack_274 = 9;
  uStack_268 = uRam000000011373bf68;
  uStack_270 = uRam000000011373bf60;
  uStack_254 = uRam000000011373bf68;
  uStack_25c = uRam000000011373bf60;
  uStack_260 = 0x17;
  uStack_24c = 5;
  uStack_240 = uRam000000011373bf68;
  uStack_248 = uRam000000011373bf60;
  uStack_22c = uRam000000011373bf68;
  uStack_234 = uRam000000011373bf60;
  uStack_238 = 6;
  uStack_224 = 0x1a;
  uStack_218 = uRam000000011373bf68;
  uStack_220 = uRam000000011373bf60;
  uStack_204 = uRam000000011373bf68;
  uStack_20c = uRam000000011373bf60;
  uStack_210 = 0xc;
  uStack_1fc = 0xd;
  uStack_1f0 = uRam000000011373bf68;
  uStack_1f8 = uRam000000011373bf60;
  uStack_1dc = uRam000000011373bf68;
  uStack_1e4 = uRam000000011373bf60;
  uStack_1e8 = 0xe;
  uStack_1d4 = 0xf;
  puVar19 = &uStack_2d8;
  uStack_1c8 = uRam000000011373bf68;
  uStack_1d0 = uRam000000011373bf60;
  uStack_1c0 = 0x10;
  uStack_1b4 = uRam000000011373bf68;
  uStack_1bc = uRam000000011373bf60;
  uStack_1ac = 0x11;
  uStack_1a0 = uRam000000011373bf68;
  uStack_1a8 = uRam000000011373bf60;
  uStack_198 = 0x12;
  uStack_18c = uRam000000011373bf68;
  uStack_194 = uRam000000011373bf60;
  uStack_184 = 0x13;
  uStack_178 = uRam000000011373bf68;
  uStack_180 = uRam000000011373bf60;
  uStack_170 = 0x14;
  uStack_164 = uRam000000011373bf68;
  uStack_16c = uRam000000011373bf60;
  uStack_15c = 0x15;
  uStack_150 = uRam000000011373bf68;
  uStack_158 = uRam000000011373bf60;
  uStack_148 = 0x16;
  uStack_13c = uRam000000011373bf68;
  uStack_144 = uRam000000011373bf60;
  FUN_100038760(&uStack_850,1,2,0xfffffffd);
  uStack_134 = 0x2c;
  uStack_128 = uStack_848;
  uStack_130 = uStack_850;
  uStack_120 = 0x2b;
  uStack_114 = uRam000000011373bf98;
  uStack_11c = uRam000000011373bf90;
  uStack_10c = 0x2d;
  uStack_100 = uRam000000011373bf98;
  uStack_108 = uRam000000011373bf90;
  uStack_f8 = 0x2e;
  uStack_ec = uRam000000011373bf98;
  uStack_f4 = uRam000000011373bf90;
  uStack_e4 = 0x2f;
  uStack_d8 = uRam000000011373bf68;
  uStack_e0 = uRam000000011373bf60;
  FUN_100039d88(&uStack_840,&uStack_2d8,0x1a);
  uStack_a0 = 1;
  FUN_100039fd0(auStack_98,&uStack_840);
  lVar23 = 0;
  puRam000000011382b9e8 = (undefined4 *)0x0;
  lRam000000011382b9e0 = 0;
  uRam000000011382b9f8 = 0;
  plRam000000011382b9f0 = (long *)0x0;
  fRam000000011382ba00 = 1.0;
  do {
    puVar13 = puRam000000011382b9e8;
    iVar2 = *(int *)((long)aiStack_d0 + lVar23);
    puVar21 = (undefined4 *)(long)iVar2;
    if (puRam000000011382b9e8 != (undefined4 *)0x0) {
      uVar9 = (long)puRam000000011382b9e8 - 1;
      if (((ulong)puRam000000011382b9e8 & uVar9) == 0) {
        puVar19 = (undefined4 *)(uVar9 & (ulong)puVar21);
      }
      else {
        puVar19 = puVar21;
        if (puRam000000011382b9e8 <= puVar21) {
          uVar22 = 0;
          if (puRam000000011382b9e8 != (undefined4 *)0x0) {
            uVar22 = (ulong)puVar21 / (ulong)puRam000000011382b9e8;
          }
          puVar19 = (undefined4 *)((long)puVar21 - uVar22 * (long)puRam000000011382b9e8);
        }
      }
      plVar12 = *(long **)(lRam000000011382b9e0 + (long)puVar19 * 8);
      if (plVar12 != (long *)0x0) {
        do {
          while( true ) {
            plVar12 = (long *)*plVar12;
            if (plVar12 == (long *)0x0) goto LAB_100039320;
            puVar16 = (undefined4 *)plVar12[1];
            if (puVar16 != puVar21) break;
            if (*(int *)(plVar12 + 2) == iVar2) goto LAB_1000395dc;
          }
          if (((ulong)puRam000000011382b9e8 & uVar9) == 0) {
            puVar16 = (undefined4 *)((ulong)puVar16 & uVar9);
          }
          else if (puRam000000011382b9e8 <= puVar16) {
            uVar22 = 0;
            if (puRam000000011382b9e8 != (undefined4 *)0x0) {
              uVar22 = (ulong)puVar16 / (ulong)puRam000000011382b9e8;
            }
            puVar16 = (undefined4 *)((long)puVar16 - uVar22 * (long)puRam000000011382b9e8);
          }
        } while (puVar16 == puVar19);
      }
    }
LAB_100039320:
    plVar12 = (long *)0x40;
    func_0x000107c60e20();
    uStack_7d8 = 0x11382b9e0;
    uStack_7d0 = 0;
    *plVar12 = 0;
    plVar12[1] = (long)puVar21;
    *(int *)(plVar12 + 2) = iVar2;
    plStack_7e0 = plVar12;
    FUN_100039fd0(plVar12 + 3,(long)auStack_c8 + lVar23);
    uStack_7d0 = CONCAT71(uStack_7d0._1_7_,1);
    if ((puVar13 == (undefined4 *)0x0) ||
       (fRam000000011382ba00 * (float)puVar13 < (float)(uRam000000011382b9f8 + 1))) {
      uVar9 = 1;
      if ((undefined4 *)0x2 < puVar13) {
        uVar9 = (ulong)(((ulong)puVar13 & (long)puVar13 - 1U) != 0);
      }
      puVar19 = (undefined4 *)(uVar9 | (long)puVar13 << 1);
      puVar13 = (undefined4 *)(long)((float)(uRam000000011382b9f8 + 1) / fRam000000011382ba00);
      if (puVar19 <= puVar13) {
        puVar19 = puVar13;
      }
      if ((long)puVar19 - 1U == 0) {
        puVar19 = (undefined4 *)0x2;
      }
      else if (((ulong)puVar19 & (long)puVar19 - 1U) != 0) {
        func_0x000107c60c44();
      }
      puVar16 = puRam000000011382b9e8;
      if (puRam000000011382b9e8 < puVar19) {
LAB_1000393e0:
        if ((ulong)puVar19 >> 0x3d != 0) {
          func_0x000104c4f740();
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1000396b8);
          (*pcVar4)();
        }
        lVar5 = (long)puVar19 << 3;
        func_0x000107c60e20();
        bVar1 = lRam000000011382b9e0 != 0;
        lRam000000011382b9e0 = lVar5;
        if (bVar1) {
          func_0x000107c60e14();
        }
        puVar13 = (undefined4 *)0x0;
        puRam000000011382b9e8 = puVar19;
        do {
          *(undefined8 *)(lRam000000011382b9e0 + (long)puVar13 * 8) = 0;
          plVar20 = plRam000000011382b9f0;
          puVar13 = (undefined4 *)((long)puVar13 + 1);
        } while (puVar19 != puVar13);
        puVar13 = puVar19;
        if (plRam000000011382b9f0 != (long *)0x0) {
          puVar16 = (undefined4 *)plRam000000011382b9f0[1];
          uVar9 = (long)puVar19 - 1;
          if (((ulong)puVar19 & uVar9) == 0) {
            puVar16 = (undefined4 *)((ulong)puVar16 & uVar9);
          }
          else if (puVar19 <= puVar16) {
            uVar22 = 0;
            if (puVar19 != (undefined4 *)0x0) {
              uVar22 = (ulong)puVar16 / (ulong)puVar19;
            }
            puVar16 = (undefined4 *)((long)puVar16 - uVar22 * (long)puVar19);
          }
          *(undefined8 *)(lRam000000011382b9e0 + (long)puVar16 * 8) = 0x11382b9f0;
          plVar11 = (long *)*plVar20;
          lVar5 = lRam000000011382b9e0;
          while (lRam000000011382b9e0 = lVar5, plVar11 != (long *)0x0) {
            puVar18 = (undefined4 *)plVar11[1];
            if (((ulong)puVar19 & uVar9) == 0) {
              puVar18 = (undefined4 *)((ulong)puVar18 & uVar9);
            }
            else if (puVar19 <= puVar18) {
              uVar22 = 0;
              if (puVar19 != (undefined4 *)0x0) {
                uVar22 = (ulong)puVar18 / (ulong)puVar19;
              }
              puVar18 = (undefined4 *)((long)puVar18 - uVar22 * (long)puVar19);
            }
            plVar17 = plVar11;
            if (puVar18 != puVar16) {
              if (*(long *)(lVar5 + (long)puVar18 * 8) == 0) {
                *(long **)(lVar5 + (long)puVar18 * 8) = plVar20;
                puVar16 = puVar18;
              }
              else {
                *plVar20 = *plVar11;
                *plVar11 = **(long **)(lVar5 + (long)puVar18 * 8);
                **(undefined8 **)(lVar5 + (long)puVar18 * 8) = plVar11;
                plVar17 = plVar20;
              }
            }
            lVar5 = lRam000000011382b9e0;
            plVar20 = plVar17;
            plVar11 = (long *)*plVar17;
          }
        }
      }
      else {
        puVar13 = puRam000000011382b9e8;
        if (puVar19 < puRam000000011382b9e8) {
          puVar13 = (undefined4 *)(long)((float)uRam000000011382b9f8 / fRam000000011382ba00);
          if ((puRam000000011382b9e8 < (undefined4 *)0x3) ||
             (((ulong)puRam000000011382b9e8 & (long)puRam000000011382b9e8 - 1U) != 0)) {
            func_0x000107c60c44();
          }
          else if ((undefined4 *)0x1 < puVar13) {
            puVar13 = (undefined4 *)(1L << (-LZCOUNT((long)puVar13 + -1) & 0x3fU));
          }
          lVar5 = lRam000000011382b9e0;
          if (puVar19 <= puVar13) {
            puVar19 = puVar13;
          }
          puVar13 = puRam000000011382b9e8;
          if (puVar19 < puVar16) {
            if (puVar19 != (undefined4 *)0x0) goto LAB_1000393e0;
            lRam000000011382b9e0 = 0;
            if (lVar5 != 0) {
              func_0x000107c60e14();
            }
            puRam000000011382b9e8 = (undefined4 *)0x0;
            puVar13 = (undefined4 *)0x0;
          }
        }
      }
      if (((ulong)puVar13 & (long)puVar13 - 1U) == 0) {
        puVar19 = (undefined4 *)((long)puVar13 - 1U & (ulong)puVar21);
      }
      else {
        puVar19 = puVar21;
        if (puVar13 <= puVar21) {
          uVar9 = 0;
          if (puVar13 != (undefined4 *)0x0) {
            uVar9 = (ulong)puVar21 / (ulong)puVar13;
          }
          puVar19 = (undefined4 *)((long)puVar21 - uVar9 * (long)puVar13);
        }
      }
    }
    lVar5 = lRam000000011382b9e0;
    plVar20 = *(long **)(lRam000000011382b9e0 + (long)puVar19 * 8);
    if (plVar20 == (long *)0x0) {
      *plVar12 = (long)plRam000000011382b9f0;
      plRam000000011382b9f0 = plVar12;
      *(undefined8 *)(lVar5 + (long)puVar19 * 8) = 0x11382b9f0;
      if (*plVar12 != 0) {
        puVar21 = *(undefined4 **)(*plVar12 + 8);
        if (((ulong)puVar13 & (long)puVar13 - 1U) == 0) {
          puVar21 = (undefined4 *)((ulong)puVar21 & (long)puVar13 - 1U);
        }
        else if (puVar13 <= puVar21) {
          uVar9 = 0;
          if (puVar13 != (undefined4 *)0x0) {
            uVar9 = (ulong)puVar21 / (ulong)puVar13;
          }
          puVar21 = (undefined4 *)((long)puVar21 - uVar9 * (long)puVar13);
        }
        *(long **)(lRam000000011382b9e0 + (long)puVar21 * 8) = plVar12;
      }
    }
    else {
      *plVar12 = *plVar20;
      *plVar20 = (long)plVar12;
    }
    uRam000000011382b9f8 = uRam000000011382b9f8 + 1;
LAB_1000395dc:
    lVar23 = lVar23 + 0x30;
  } while (lVar23 != 0x60);
  lVar23 = 0x38;
  do {
    FUN_10003a044((long)aiStack_d0 + lVar23);
    lVar23 = lVar23 + -0x30;
  } while (lVar23 != -0x28);
  FUN_10003a044(&uStack_840);
  FUN_10003a044(&uStack_808);
  plVar12 = (long *)&UNK_1098f6b28;
  piVar6 = (int *)0x11382b9e0;
  pmVar8 = &MACH_HEADER;
  func_0x000107c60e34();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    auVar25._8_8_ = piVar6;
    auVar25._0_8_ = plVar12;
    return auVar25;
  }
  func_0x000107c60e78();
  FUN_10003a044(&uStack_840);
  FUN_10003a044(&uStack_808);
  FUN_10003a044(auStack_c8);
  func_0x000107c60bd8();
  uVar22 = (ulong)*piVar6;
  uVar9 = plVar12[1];
  if (uVar9 == 0) {
    uVar24 = 0x60;
  }
  else {
    uVar10 = uVar9 - 1;
    if ((uVar9 & uVar10) == 0) {
      uVar24 = uVar10 & uVar22;
    }
    else {
      uVar24 = uVar22;
      if (uVar9 <= uVar22) {
        uVar24 = 0;
        if (uVar9 != 0) {
          uVar24 = uVar22 / uVar9;
        }
        uVar24 = uVar22 - uVar24 * uVar9;
      }
    }
    puVar14 = *(undefined8 **)(*plVar12 + uVar24 * 8);
    if (puVar14 != (undefined8 *)0x0) {
      for (plVar20 = (long *)*puVar14; plVar20 != (long *)0x0; plVar20 = (long *)*plVar20) {
        uVar15 = plVar20[1];
        if (uVar15 == uVar22) {
          if ((int)plVar20[2] == *piVar6) {
            uVar7 = 0;
            goto LAB_100039954;
          }
        }
        else {
          if ((uVar9 & uVar10) == 0) {
            uVar15 = uVar15 & uVar10;
          }
          else if (uVar9 <= uVar15) {
            uVar3 = 0;
            if (uVar9 != 0) {
              uVar3 = uVar15 / uVar9;
            }
            uVar15 = uVar15 - uVar3 * uVar9;
          }
          if (uVar15 != uVar24) break;
        }
      }
    }
  }
  plVar20 = (long *)0x28;
  func_0x000107c60e20();
  *plVar20 = 0;
  plVar20[1] = uVar22;
  lVar23 = *(long *)pmVar8;
  plVar20[3] = *(long *)&pmVar8->cpusubtype;
  plVar20[2] = lVar23;
  *(dword *)(plVar20 + 4) = pmVar8->ncmds;
  if ((uVar9 == 0) || (*(float *)(plVar12 + 4) * (float)uVar9 < (float)(plVar12[3] + 1))) {
    uVar24 = 1;
    if (2 < uVar9) {
      uVar24 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar24 = uVar24 | uVar9 << 1;
    uVar9 = (ulong)((float)(plVar12[3] + 1) / *(float *)(plVar12 + 4));
    if (uVar24 <= uVar9) {
      uVar24 = uVar9;
    }
    FUN_100039988(plVar12,uVar24);
    uVar9 = plVar12[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar24 = uVar9 - 1 & uVar22;
    }
    else {
      uVar24 = uVar22;
      if (uVar9 <= uVar22) {
        uVar24 = 0;
        if (uVar9 != 0) {
          uVar24 = uVar22 / uVar9;
        }
        uVar24 = uVar22 - uVar24 * uVar9;
      }
    }
  }
  lVar23 = *plVar12;
  plVar11 = *(long **)(lVar23 + uVar24 * 8);
  if (plVar11 == (long *)0x0) {
    plVar11 = plVar12 + 2;
    *plVar20 = *plVar11;
    *plVar11 = (long)plVar20;
    *(long **)(lVar23 + uVar24 * 8) = plVar11;
    if (*plVar20 == 0) goto LAB_100039944;
    uVar22 = *(ulong *)(*plVar20 + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar22 = uVar22 & uVar9 - 1;
    }
    else if (uVar9 <= uVar22) {
      uVar24 = 0;
      if (uVar9 != 0) {
        uVar24 = uVar22 / uVar9;
      }
      uVar22 = uVar22 - uVar24 * uVar9;
    }
    plVar11 = (long *)(*plVar12 + uVar22 * 8);
  }
  else {
    *plVar20 = *plVar11;
  }
  *plVar11 = (long)plVar20;
LAB_100039944:
  plVar12[3] = plVar12[3] + 1;
  uVar7 = 1;
LAB_100039954:
  auVar26._8_8_ = uVar7;
  auVar26._0_8_ = plVar20;
  return auVar26;
}



/* Entry: 10003977c; end: 100039987;  */

undefined1  [16] FUN_10003977c(long *param_1,int *param_2,long *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x24;
  undefined1 auVar11 [16];
  
  uVar10 = (ulong)*param_2;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar3 = uVar9 - 1;
    if ((uVar9 & uVar3) == 0) {
      unaff_x24 = uVar3 & uVar10;
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar6 = 0;
        if (uVar9 != 0) {
          uVar6 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar6 * uVar9;
      }
    }
    puVar5 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar5 != (undefined8 *)0x0) {
      for (plVar8 = (long *)*puVar5; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar6 = plVar8[1];
        if (uVar6 == uVar10) {
          if ((int)plVar8[2] == *param_2) {
            uVar2 = 0;
            goto LAB_100039954;
          }
        }
        else {
          if ((uVar9 & uVar3) == 0) {
            uVar6 = uVar6 & uVar3;
          }
          else if (uVar9 <= uVar6) {
            uVar1 = 0;
            if (uVar9 != 0) {
              uVar1 = uVar6 / uVar9;
            }
            uVar6 = uVar6 - uVar1 * uVar9;
          }
          if (uVar6 != unaff_x24) break;
        }
      }
    }
  }
  plVar8 = (long *)0x28;
  func_0x000107c60e20();
  *plVar8 = 0;
  plVar8[1] = uVar10;
  lVar7 = *param_3;
  plVar8[3] = param_3[1];
  plVar8[2] = lVar7;
  *(int *)(plVar8 + 4) = (int)param_3[2];
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar3 = 1;
    if (2 < uVar9) {
      uVar3 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar3 = uVar3 | uVar9 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar9) {
      uVar3 = uVar9;
    }
    FUN_100039988(param_1,uVar3);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x24 = uVar9 - 1 & uVar10;
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar3 = 0;
        if (uVar9 != 0) {
          uVar3 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar3 * uVar9;
      }
    }
  }
  lVar7 = *param_1;
  plVar4 = *(long **)(lVar7 + unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    *plVar8 = *plVar4;
    *plVar4 = (long)plVar8;
    *(long **)(lVar7 + unaff_x24 * 8) = plVar4;
    if (*plVar8 == 0) goto LAB_100039944;
    uVar10 = *(ulong *)(*plVar8 + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar10 = uVar10 & uVar9 - 1;
    }
    else if (uVar9 <= uVar10) {
      uVar3 = 0;
      if (uVar9 != 0) {
        uVar3 = uVar10 / uVar9;
      }
      uVar10 = uVar10 - uVar3 * uVar9;
    }
    plVar4 = (long *)(*param_1 + uVar10 * 8);
  }
  else {
    *plVar8 = *plVar4;
  }
  *plVar4 = (long)plVar8;
LAB_100039944:
  param_1[3] = param_1[3] + 1;
  uVar2 = 1;
LAB_100039954:
  auVar11._8_8_ = uVar2;
  auVar11._0_8_ = plVar8;
  return auVar11;
}


